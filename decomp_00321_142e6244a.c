// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142e6244a FUN_142e6244a body=38 status=ok
// SIG undefined FUN_142e6244a(void)

undefined8 FUN_142e6244a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e62470 FUN_142e62470 body=450 status=ok
// SIG undefined FUN_142e62470(void)

void FUN_142e62470(longlong param_1,ulonglong *param_2)

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
  FUN_142e62634(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e62634 FUN_142e62634 body=911 status=ok
// SIG undefined FUN_142e62634(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142e62634(undefined4 *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 *_Buf2;
  undefined1 *_Buf1;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 auStack_b0 [4];
  undefined8 uStack_90;
  undefined1 auStack_88 [12];
  undefined4 local_7c;
  undefined1 *local_78;
  char local_6d;
  uint local_6c;
  undefined1 *local_68;
  undefined1 local_60 [8];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  puVar12 = auStack_88;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  local_68 = (undefined1 *)0x0;
  local_6c = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) != 0) {
    plVar4 = *(longlong **)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + 0x40) + 0x10);
    auStack_b0[0] = 0x142e62699;
    (**(code **)(*plVar4 + 0x38))(plVar4,&local_68,&local_6c);
    puVar12 = auStack_88;
    if (local_68 == (undefined1 *)0x0) {
      uStack_90 = 0x142e626b7;
      lVar13 = -((ulonglong)local_6c + 0xf & 0xfffffffffffffff0);
      local_68 = auStack_88 + lVar13;
      pcVar5 = *(code **)(*plVar4 + 0x38);
      *(undefined8 *)((longlong)auStack_b0 + lVar13) = 0x142e626d1;
      (*pcVar5)(plVar4);
      puVar12 = auStack_88 + lVar13;
    }
  }
  local_6d = *(char *)(param_1 + 0xb);
  if (local_6d == '\x01') {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x800000000;
    iVar6 = param_1[10];
    if (1 < iVar6) {
      lVar13 = 10;
      do {
        local_78 = (undefined1 *)0x0;
        local_7c = 0;
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar13 * 8);
        if (lVar14 != 0) {
          plVar4 = *(longlong **)(*(longlong *)(lVar14 + 0x40) + 0x10);
          pcVar5 = *(code **)(*plVar4 + 0x38);
          *(undefined8 *)(puVar12 + -0x28) = 0x142e6274f;
          (*pcVar5)(plVar4,&local_78,&local_7c);
          uVar1 = local_7c;
          if (local_78 == (undefined1 *)0x0) {
            *(undefined8 *)(puVar12 + -0x28) = 0x142e6279c;
            FUN_14726c10e(local_60,uVar1);
            local_78 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              local_78 = local_60;
            }
            pcVar5 = *(code **)(*plVar4 + 0x38);
            *(undefined8 *)(puVar12 + -0x28) = 0x142e627c3;
            (*pcVar5)(plVar4,&local_78,&local_7c);
          }
          _Buf1 = local_68;
          _Buf2 = local_78;
          uVar7 = (ulonglong)local_6c;
          *(undefined8 *)(puVar12 + -0x28) = 0x142e6276d;
          iVar6 = memcmp(_Buf1,_Buf2,uVar7);
          if (iVar6 != 0) {
            local_6d = '\0';
            break;
          }
          iVar6 = param_1[10];
        }
        lVar14 = lVar13 + -8;
        lVar13 = lVar13 + 1;
      } while (lVar14 < iVar6);
    }
    if (local_58 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar12 + -0x28) = 0x142e627e3;
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 4) == 0) {
    uVar7 = 0;
  }
  else {
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 6) + 8);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 4) + 0xd4);
    uVar7 = *(ulonglong *)(*(longlong *)(lVar13 + 0x50) + lVar14 * 8);
    if (uVar7 == 0) {
      *(undefined8 *)(puVar12 + -0x28) = 0x142e6281c;
      uVar7 = FUN_1400bafc2(lVar13,lVar14,1);
    }
  }
  *(undefined8 *)(puVar12 + -0x28) = 0x142e62835;
  uVar8 = FUN_140029432(param_2,uVar7,0);
  param_2[0x37] = uVar7;
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar9 + 3;
  if ((undefined8 *)param_2[1] < puVar10) {
    *(undefined8 *)(puVar12 + -0x28) = 0x142e629b0;
    FUN_140023dd8(param_2,0x20);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar9 + 3;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a37d340;
  puVar9[2] = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 8);
  if (*(longlong *)(param_1 + 4) == 0) {
    lVar14 = 0;
  }
  else {
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 6) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 4) + 0xd4);
    lVar14 = *(longlong *)(*(longlong *)(lVar13 + 0x50) + lVar11 * 8);
    if (lVar14 == 0) {
      *(undefined8 *)(puVar12 + -0x28) = 0x142e628c5;
      lVar14 = FUN_1400bafc2(lVar13,lVar11,1);
    }
  }
  *(char **)(puVar12 + -0x10) = &local_6d;
  *(uint **)(puVar12 + -0x18) = &local_6c;
  *(undefined1 ***)(puVar12 + -0x20) = &local_68;
  *(undefined8 *)(puVar12 + -0x48) = 0x142e628f9;
  FUN_14726c277(param_2,param_1 + 4,lVar14,uVar8);
  uVar1 = param_1[2];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar9 + 4;
  if ((undefined8 *)param_2[1] < puVar10) {
    *(undefined8 *)(puVar12 + -0x28) = 0x142e6292c;
    FUN_140023dd8(param_2,0x28);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar9 + 4;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar9 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar9 + 0x14) = uVar3;
  *(undefined4 *)(puVar9 + 3) = uVar1;
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar12 + -0x28) = &UNK_142e6299a;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e629c8 FUN_142e629c8 body=1324 status=ok
// SIG undefined FUN_142e629c8(void)

void FUN_142e629c8(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142e62ef6 FUN_142e62ef6 body=31 status=ok
// SIG undefined FUN_142e62ef6(void)

undefined8 FUN_142e62ef6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e62f16 FUN_142e62f16 body=1324 status=ok
// SIG undefined FUN_142e62f16(void)

void FUN_142e62f16(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142e63444 FUN_142e63444 body=481 status=ok
// SIG undefined FUN_142e63444(void)

void FUN_142e63444(longlong param_1,ulonglong *param_2)

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
  FUN_14726c6d6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e63626 FUN_142e63626 body=232 status=ok
// SIG undefined FUN_142e63626(void)

void FUN_142e63626(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e6370e FUN_142e6370e body=81 status=ok
// SIG undefined FUN_142e6370e(void)

void FUN_142e6370e(undefined8 param_1,longlong *param_2)

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
  FUN_14726c779(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e63760 FUN_142e63760 body=38 status=ok
// SIG undefined FUN_142e63760(void)

undefined8 FUN_142e63760(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e63786 FUN_142e63786 body=450 status=ok
// SIG undefined FUN_142e63786(void)

void FUN_142e63786(longlong param_1,ulonglong *param_2)

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
  FUN_142e6394a(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e6394a FUN_142e6394a body=661 status=ok
// SIG undefined FUN_142e6394a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142e6394a(int *param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 auStack_70 [4];
  undefined8 uStack_50;
  undefined1 auStack_48 [4];
  uint local_44;
  undefined1 *local_40;
  ulonglong local_38;
  
  puVar14 = auStack_48;
  local_38 = DAT_14c707940 ^ (ulonglong)&local_38;
  local_40 = (undefined1 *)0x0;
  local_44 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0) {
    plVar5 = *(longlong **)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x40) + 0x10);
    auStack_70[0] = 0x142e639ab;
    (**(code **)(*plVar5 + 0x38))(plVar5,&local_40,&local_44);
    puVar14 = auStack_48;
    if (local_40 == (undefined1 *)0x0) {
      uStack_50 = 0x142e639c9;
      lVar7 = -((ulonglong)local_44 + 0xf & 0xfffffffffffffff0);
      local_40 = auStack_48 + lVar7;
      pcVar6 = *(code **)(*plVar5 + 0x38);
      *(undefined8 *)((longlong)auStack_70 + lVar7) = 0x142e639e3;
      (*pcVar6)(plVar5);
      puVar14 = auStack_48 + lVar7;
    }
  }
  if (*(longlong *)(param_1 + 4) == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 6) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 4) + 0xd4);
    uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (uVar8 == 0) {
      *(undefined8 *)(puVar14 + -0x28) = 0x142e63a1c;
      uVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  *(undefined8 *)(puVar14 + -0x28) = 0x142e63a35;
  uVar9 = FUN_140029432(param_2,uVar8,0);
  param_2[0x37] = uVar8;
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar10 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    *(undefined8 *)(puVar14 + -0x28) = 0x142e63bcc;
    FUN_140023dd8(param_2,0x20);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar10 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a37d340;
  puVar10[2] = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 8);
  if (*(longlong *)(param_1 + 4) == 0) {
    lVar11 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 6) + 8);
    lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 4) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar13 * 8);
    if (lVar11 == 0) {
      *(undefined8 *)(puVar14 + -0x28) = 0x142e63ac5;
      lVar11 = FUN_1400bafc2(lVar7,lVar13,1);
    }
  }
  *(uint **)(puVar14 + -8) = &local_44;
  *(undefined1 ***)(puVar14 + -0x10) = &local_40;
  *(undefined8 *)(puVar14 + -0x38) = 0x142e63af0;
  FUN_14726c90d(param_2,param_1 + 4,lVar11,uVar9);
  iVar2 = param_1[3];
  iVar15 = *param_1;
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar10 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    *(undefined8 *)(puVar14 + -0x28) = 0x142e63b27;
    FUN_140023dd8(param_2,0x28);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar10 + 4;
  }
  iVar1 = (iVar4 - iVar15) + 7;
  iVar15 = (iVar4 - iVar15) + 0xe;
  if (-1 < iVar1) {
    iVar15 = iVar1;
  }
  iVar4 = (iVar2 - iVar3) + 7;
  iVar2 = (iVar2 - iVar3) + 0xe;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1fbc30;
  *(int *)(puVar10 + 2) = iVar15 >> 3;
  *(int *)((longlong)puVar10 + 0x14) = iVar2 >> 3;
  *(undefined4 *)(puVar10 + 3) = 1;
  if ((local_38 ^ (ulonglong)&local_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -0x28) = &UNK_142e63bb6;
  FUN_144d8e3a0();
}



// FUNCTION 142e63be4 FUN_142e63be4 body=147 status=ok
// SIG undefined FUN_142e63be4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e63be4(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _DAT_149931e80;
  uVar3 = param_2 - 1;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar3;
  auVar5._8_4_ = uVar3;
  auVar5._12_4_ = 0;
  puVar2 = (undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  auVar6 = pmovsxbq(in_XMM1,0x100);
  auVar5 = auVar5 | _DAT_149931e80;
  do {
    if ((bool)(~(auVar5._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
      puVar2[-2] = 0;
    }
    auVar7._8_4_ = (int)uVar4;
    auVar7._0_8_ = uVar4;
    auVar7._12_4_ = (int)(uVar4 >> 0x20);
    if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ auVar1._8_8_) <= auVar5._8_8_) {
      *puVar2 = 0;
    }
    uVar4 = uVar4 + 2;
    puVar2 = puVar2 + 4;
  } while (((ulonglong)uVar3 + 2 & 0xfffffffffffffffe) != uVar4);
  return;
}



// FUNCTION 142e63c78 FUN_142e63c78 body=295 status=ok
// SIG undefined FUN_142e63c78(void)

void FUN_142e63c78(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar3 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar1 < 9) {
    *(undefined4 *)(param_1 + 0x8c) = 8;
    if (*(longlong *)(param_1 + 0x80) == 0) {
      return;
    }
    uVar3 = 0;
  }
  else {
    if (8 < *(uint *)(param_1 + 0x8c)) {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x800) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 4)) {
      uVar3 = uVar2 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0x8c) = (int)uVar3;
  }
  FUN_1446efa72(param_1 + 0x80,0,uVar3,0x10);
  return;
}



// FUNCTION 142e63da0 FUN_142e63da0 body=125 status=ok
// SIG undefined FUN_142e63da0(void)

void FUN_142e63da0(longlong *param_1)

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
    FUN_142e64772(&local_18);
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



// FUNCTION 142e63e1e FUN_142e63e1e body=1109 status=ok
// SIG undefined FUN_142e63e1e(void)

undefined8 FUN_142e63e1e(longlong *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  DWORD DVar7;
  DWORD dwTlsIndex;
  DWORD DVar8;
  LPVOID lpTlsValue;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_128 [46];
  byte local_fa;
  byte local_f9;
  longlong local_f8;
  int local_ec;
  int local_e8;
  int local_e4;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dwTlsIndex = DAT_14c7585d0;
  local_fa = param_2;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar8 = 0xffffffff;
    LOCK();
    bVar16 = DAT_14c7585d0 != 0xffffffff;
    DVar7 = dwTlsIndex;
    if (bVar16) {
      DVar8 = DAT_14c7585d0;
      DVar7 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar7;
    UNLOCK();
    if (bVar16) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar8;
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
  local_e0 = -0x8000000000000000;
  lVar11 = *param_1;
  if (local_fa == 0) {
    lVar11 = *param_1;
    uVar10 = (ulonglong)*(uint *)(lVar11 + 0x34);
    if (*(int *)(lVar11 + 0x20) + 2 <= (int)*(uint *)(lVar11 + 0x34)) {
      FUN_142e63da0(param_1);
      lVar11 = *param_1;
    }
    uVar15 = 0;
    if ('\x02' < *(char *)(lVar11 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar19._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar19._8_8_ = 0;
      auVar19 = roundpd(auVar19,auVar19,1);
      local_e0 = (longlong)auVar19._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar15 = (ulonglong)DAT_14c7585cc;
      }
      auVar17._0_8_ = (double)(int)uVar15 * 10000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar19 = roundpd(auVar17,auVar17,1);
      local_f8 = (longlong)auVar19._0_8_;
      lVar11 = *param_1;
      local_c8 = CONCAT71((int7)(uVar15 >> 8),1);
      goto LAB_142e63fa6;
    }
  }
  else {
    uVar10 = (ulonglong)*(uint *)(lVar11 + 0x34);
  }
  local_c8 = 0;
  local_f8 = 0;
LAB_142e63fa6:
  iVar12 = *(int *)(lVar11 + 0x2c);
  local_c0 = (ulonglong)*(uint *)(lVar11 + 0x30);
  local_b8 = *(longlong **)(lVar11 + 0x38);
  plVar3 = *(longlong **)(lVar11 + 0x40);
  local_ec = (int)uVar10 + -1;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_f9 = local_fa ^ 1;
  local_c8 = local_c8 ^ 1;
  local_e8 = iVar12;
  local_d8 = uVar10;
  do {
    LOCK();
    piVar1 = (int *)(lVar11 + 0x20);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_d8 < iVar12) {
      bVar16 = local_ec <= iVar13;
      if (local_ec <= iVar13) {
        iVar13 = local_ec;
      }
      if ((local_f9 & bVar16) != 0) goto LAB_142e6418b;
    }
    uVar9 = iVar13 * (int)local_c0;
    local_d0 = (ulonglong)uVar9;
    local_e4 = (int)local_c0 + uVar9;
    if (local_e4 < iVar12) {
      iVar12 = local_e4;
    }
    iVar13 = iVar12 - uVar9;
    if (iVar13 != 0 && (int)uVar9 <= iVar12) {
      lVar11 = (longlong)(int)uVar9 << 2;
      do {
        lVar6 = param_1[1];
        lVar4 = *local_b8;
        lVar5 = *plVar3;
        iVar12 = *piVar2;
        if (iVar12 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          iVar12 = *piVar2;
        }
        if ((iVar12 == 0x60000000) || (iVar12 == 0)) {
          *piVar2 = 0x40000010;
        }
        FUN_142e535ed((int)plVar3[1],lVar5 + 0x40,*(longlong *)(lVar5 + 0xb8) + lVar11,
                      (longlong)(int)lVar6 * 0x10 + lVar4);
        if ((iVar12 == 0x60000000) || (iVar12 == 0)) {
          *piVar2 = iVar12;
        }
        lVar11 = lVar11 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    iVar12 = local_e8;
    if ((int)local_d0 < local_e8) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar14 = CONCAT71((uint7)(uint3)((uint)local_e8 >> 8),1);
        if (local_fa == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*param_1 + 0x48) + 0x10))();
        }
        goto LAB_142e6418d;
      }
    }
    if (local_e4 < local_e8 && (char)local_c8 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar18._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar18._8_8_ = 0;
      auVar19 = roundpd(auVar18,auVar18,1);
      if (local_f8 < (longlong)auVar19._0_8_ - local_e0) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_142e6418b:
        uVar14 = 0;
LAB_142e6418d:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar14;
      }
    }
    else if (local_e8 <= local_e4) goto LAB_142e6418b;
    lVar11 = *param_1;
  } while( true );
}



// FUNCTION 142e64274 FUN_142e64274 body=73 status=ok
// SIG undefined FUN_142e64274(void)

void FUN_142e64274(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_142e64772(param_1,(int)param_1[1]);
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
                    /* WARNING: Could not recover jumptable at 0x000142e642b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 142e642be FUN_142e642be body=434 status=ok
// SIG undefined FUN_142e642be(void)

undefined8 * FUN_142e642be(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_14a2a0c78;
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
  FUN_142e64742(lVar2,uVar4,param_3);
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
        if (piVar3 == (int *)0x0) goto LAB_142e64388;
      }
      _aligned_free(piVar3);
    }
  }
LAB_142e64388:
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



// FUNCTION 142e64470 FUN_142e64470 body=53 status=ok
// SIG undefined FUN_142e64470(void)

void FUN_142e64470(longlong param_1,int param_2)

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



// FUNCTION 142e644a6 FUN_142e644a6 body=667 status=ok
// SIG undefined FUN_142e644a6(void)

void FUN_142e644a6(undefined8 *param_1)

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
  if (puVar5 != (uint *)0x0) goto LAB_142e645a1;
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
LAB_142e645a1:
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
        goto LAB_142e6461b;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142e6461b:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_142e646c2;
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
      if (_Memory == (int *)0x0) goto LAB_142e646c2;
    }
    _aligned_free(_Memory);
  }
LAB_142e646c2:
  *param_1 = _Dst;
  return;
}



// FUNCTION 142e64742 FUN_142e64742 body=47 status=ok
// SIG undefined FUN_142e64742(void)

void FUN_142e64742(longlong param_1,int param_2)

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



// FUNCTION 142e64772 FUN_142e64772 body=369 status=ok
// SIG undefined FUN_142e64772(void)

void FUN_142e64772(longlong *param_1,int param_2)

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
  plVar2[5] = (longlong)&PTR_FUN_14a2a0c80;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_142e64274(&local_48);
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
  FUN_142e64274(&local_58);
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



// FUNCTION 142e64902 FUN_142e64902 body=450 status=ok
// SIG undefined FUN_142e64902(void)

void FUN_142e64902(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
    *param_2 = &PTR_FUN_14a2a0c80;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_14a2a0cc0;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_142e649df;
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
LAB_142e649df:
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
          goto LAB_142e64a59;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_142e64a59:
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



// FUNCTION 142e64ac4 FUN_142e64ac4 body=26 status=ok
// SIG undefined FUN_142e64ac4(void)

undefined8 FUN_142e64ac4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142e63e1e(param_2,0);
  }
  return 0;
}



// FUNCTION 142e64ade FUN_142e64ade body=72 status=ok
// SIG undefined FUN_142e64ade(void)

undefined8
FUN_142e64ade(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_142e63e1e(param_3,0);
  }
  FUN_142e64902(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 142e64b58 FUN_142e64b58 body=26 status=ok
// SIG undefined FUN_142e64b58(void)

undefined8 FUN_142e64b58(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142e63e1e(*param_2,0);
  }
  return 0;
}



// FUNCTION 142e64b72 FUN_142e64b72 body=70 status=ok
// SIG undefined FUN_142e64b72(void)

undefined8
FUN_142e64b72(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_142e63e1e(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a2a0cc0;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 142e64bb8 FUN_142e64bb8 body=179 status=ok
// SIG undefined FUN_142e64bb8(void)

void FUN_142e64bb8(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_142e64274(uVar2);
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
                    /* WARNING: Could not recover jumptable at 0x000142e64c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142e64c7a FUN_142e64c7a body=154 status=ok
// SIG undefined FUN_142e64c7a(void)

longlong FUN_142e64c7a(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  
  FUN_1400200e4(param_1 + 0x50);
  FUN_14009331a(param_1 + 0x30);
  FUN_1400200e4(param_1 + 0x20);
  FUN_142e64d14(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  lVar1 = *(longlong *)(param_1 + 0x10);
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e64d14 FUN_142e64d14 body=53 status=ok
// SIG undefined FUN_142e64d14(void)

void FUN_142e64d14(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x88);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142e64d4a FUN_142e64d4a body=4866 status=ok
// SIG undefined FUN_142e64d4a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_142e64d4a(longlong *param_1)

{
  int *piVar1;
  ushort *puVar2;
  void *_Src;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  ushort *puVar25;
  uint uVar26;
  longlong *plVar27;
  uint *puVar28;
  uint uVar29;
  longlong *plVar30;
  uint uVar31;
  longlong lVar32;
  longlong *_Src_00;
  float fVar33;
  undefined1 auStack_1cd8 [40];
  longlong *local_1cb0;
  void *local_1ca8;
  longlong *local_1ca0;
  longlong *local_1c98;
  int local_1c8c;
  longlong *local_1c88;
  int local_1c80;
  int local_1c7c;
  int *local_1c78;
  longlong *local_1c70;
  longlong *local_1c68;
  undefined8 *local_1c60;
  longlong local_1c58;
  longlong *local_1c50;
  undefined1 *local_1c48;
  longlong local_18c8;
  longlong *local_18c0;
  undefined1 *local_18b8 [370];
  undefined1 local_d28 [2976];
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined4 local_138;
  undefined4 local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1cd8;
  local_1c78 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
  local_1c80 = *local_1c78;
  if (local_1c80 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_1c80 = *local_1c78;
  }
  if ((local_1c80 == 0x60000000) || (local_1c80 == 0)) {
    *local_1c78 = 0x40000010;
  }
  iVar16 = (int)param_1[2];
  if (-1 < iVar16) {
    lVar32 = *param_1;
    if (*(int *)(lVar32 + 0x14) < iVar16) {
      FUN_142e6604e(lVar32 + 8);
      iVar16 = (int)param_1[2];
      if (iVar16 < 0) goto LAB_142e65fbd;
      lVar32 = *param_1;
    }
    if (*(int *)(lVar32 + 0x34) < iVar16) {
      FUN_1400dd02a(lVar32 + 0x28);
      lVar32 = *param_1;
    }
    *(undefined4 *)(lVar32 + 0x44) = 0;
    *(undefined4 *)(*param_1 + 4) = 0;
    local_a0 = (undefined8 *)0x0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_98 = &DAT_100000001;
    local_a8 = 0xffffffffffffffff;
    local_90 = 0;
    local_80 = (longlong *)0x0;
    local_68 = (longlong *)0x0;
    local_78 = &DAT_100000001;
    local_60 = &DAT_100000001;
    uStack_58 = 0;
    FUN_14471858a(&local_70);
    iVar16 = (int)param_1[2];
    local_1ca0 = param_1;
    if (0 < iVar16) {
      plVar27 = (longlong *)0x0;
      do {
        lVar32 = param_1[1];
        lVar17 = (longlong)plVar27 * 0xd20;
        lVar24 = (longlong)*(int *)(lVar32 + 0xd00 + lVar17);
        if (lVar24 != 0) {
          local_1c7c = ((uint)(*(int *)(lVar32 + 0x2c + lVar17) - *(int *)(lVar32 + 0x24 + lVar17))
                       >> 3) * ((uint)(*(int *)(lVar32 + 0x28 + lVar17) -
                                      *(int *)(lVar32 + 0x20 + lVar17)) >> 3);
          puVar14 = *(undefined8 **)(lVar32 + 0xcf8 + lVar17);
          local_1c60 = puVar14 + lVar24;
          local_1cb0 = plVar27;
          do {
            plVar13 = local_80;
            lVar32 = *param_1;
            uVar7 = *(uint *)(lVar32 + 0x10);
            local_1ca8 = (void *)(ulonglong)uVar7;
            uVar4 = *puVar14;
            uVar19 = (uint)uVar4 & 0x7fffffff;
            uVar8 = (uint)uStack_58;
            uVar15 = uVar19 & (uint)uStack_58;
            uVar22 = uVar19 + uStack_58._4_4_ + 1 & (uint)uStack_58;
            plVar27 = (longlong *)(ulonglong)uVar22;
            local_1c98 = local_68;
            plVar20 = local_68;
            if (local_68 == (longlong *)0x0) {
              plVar20 = &local_70;
            }
            local_1c88 = local_80;
            plVar21 = local_80;
            if (local_80 == (longlong *)0x0) {
              plVar21 = &local_88;
            }
            do {
              if (((*(uint *)((longlong)plVar20 + (longlong)(int)uVar15 * 4) == uVar19) &&
                  (lVar17 = (longlong)*(int *)((longlong)plVar21 + (longlong)(int)uVar15 * 4),
                  *(uint *)(local_c8 + 4 + lVar17 * 0xc) == (uint)uVar4)) &&
                 (*(short *)(local_c8 + 8 + lVar17 * 0xc) == (short)((ulonglong)uVar4 >> 0x20)))
              goto LAB_142e654b3;
              uVar15 = uVar15 + 1 & (uint)uStack_58;
            } while (uVar15 != uVar22);
            if ((ulonglong)((uint)uStack_58 * 3) <=
                (ulonglong)(((longlong)(int)uStack_c0 - (longlong)local_90) * 5)) {
              if (local_80 == (longlong *)0x0) {
                local_18c8 = CONCAT44(local_18c8._4_4_,(undefined4)local_88);
              }
              local_18c0 = local_80;
              local_80 = (longlong *)0x0;
              local_18b8[0] = local_78;
              local_78 = (undefined1 *)0x100000000;
              if (local_68 == (longlong *)0x0) {
                local_1c58._0_4_ = (undefined4)local_70;
              }
              local_1c50 = local_68;
              local_68 = (longlong *)0x0;
              local_1c48 = local_60;
              local_60 = (undefined1 *)0x100000000;
              uVar15 = (uint)uStack_58 * 2;
              uVar7 = (uint)uStack_58 * 2 + 1;
              uStack_58 = (ulonglong)uVar7;
              iVar16 = uVar15 + 2;
              if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar16);
              }
              if (uVar15 < 0x7ffffffe) {
                FUN_14475fe8c(&local_88);
                iVar23 = (int)local_78;
                iVar16 = local_78._4_4_;
                uVar7 = (uint)uStack_58;
              }
              else {
                iVar23 = 0;
                iVar16 = 1;
              }
              uVar15 = uVar7 + 1;
              local_78 = (undefined1 *)CONCAT44(local_78._4_4_,uVar7 + iVar23 + 1);
              if ((uint)(iVar16 - iVar23) < uVar15) {
                FUN_146f3c7b6(&local_88);
                uVar15 = (uint)uStack_58 + 1;
              }
              if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(uVar15);
              }
              iVar16 = local_60._4_4_;
              if (local_60._4_4_ < (int)uVar15) {
                FUN_14476002c(&local_70,uVar15);
                uVar15 = (uint)uStack_58 + 1;
                iVar16 = local_60._4_4_;
              }
              uVar9 = (ulonglong)local_60;
              iVar23 = (int)local_60;
              lVar32 = (longlong)(int)local_60;
              local_60 = (undefined1 *)CONCAT44(local_60._4_4_,uVar15 + (int)local_60);
              if ((uint)(iVar16 - iVar23) < uVar15) {
                FUN_147138312(&local_70,uVar9 & 0xffffffff);
              }
              plVar27 = local_68;
              if (local_68 == (longlong *)0x0) {
                plVar27 = &local_70;
              }
              FUN_14471858a((undefined4 *)((longlong)plVar27 + lVar32 * 4));
              local_1c70 = local_1c98;
              if (local_1c98 == (longlong *)0x0) {
                local_1c70 = &local_1c58;
              }
              local_1c68 = plVar13;
              if (plVar13 == (longlong *)0x0) {
                local_1c68 = &local_18c8;
              }
              iVar16 = 0;
              do {
                uVar7 = *(uint *)((longlong)local_1c70 + (longlong)iVar16 * 4);
                iVar23 = -uVar7;
                if (!SBORROW4(0,uVar7)) {
                  iVar23 = *(int *)((longlong)local_1c68 + (longlong)iVar16 * 4);
                  uVar15 = (uint)uStack_58 & uVar7;
                  plVar27 = local_68;
                  if (local_68 == (longlong *)0x0) {
                    plVar27 = &local_70;
                  }
                  lVar32 = (longlong)(int)uVar15;
                  uVar22 = *(uint *)((longlong)plVar27 + lVar32 * 4);
                  if (!SBORROW4(0,uVar22)) {
                    puVar28 = (uint *)((longlong)plVar27 + lVar32 * 4);
                    uVar26 = uVar15 - uVar22 & (uint)uStack_58;
                    uVar31 = 0;
                    plVar27 = local_68;
                    uVar29 = (uint)uStack_58;
                    local_1c8c = iVar23;
                    do {
                      if (uVar26 < uVar31) {
                        if (uStack_58._4_4_ < uVar31) {
                          uStack_58 = CONCAT44(uVar31,(uint)uStack_58);
                          uVar22 = *puVar28;
                        }
                        plVar27 = local_80;
                        if (local_80 == (longlong *)0x0) {
                          plVar27 = &local_88;
                        }
                        iVar23 = *(int *)((longlong)plVar27 + lVar32 * 4);
                        *(int *)((longlong)plVar27 + lVar32 * 4) = local_1c8c;
                        plVar27 = local_68;
                        if (local_68 == (longlong *)0x0) {
                          plVar27 = &local_70;
                        }
                        *(uint *)((longlong)plVar27 + lVar32 * 4) = uVar7;
                        plVar27 = local_68;
                        uVar7 = uVar22;
                        uVar29 = (uint)uStack_58;
                        uVar31 = uVar26;
                        local_1c8c = iVar23;
                      }
                      uVar31 = uVar31 + 1;
                      uVar15 = uVar15 + 1 & uVar29;
                      plVar13 = plVar27;
                      if (plVar27 == (longlong *)0x0) {
                        plVar13 = &local_70;
                      }
                      lVar32 = (longlong)(int)uVar15;
                      puVar28 = (uint *)((longlong)plVar13 + lVar32 * 4);
                      uVar22 = *puVar28;
                      uVar26 = uVar15 - uVar22 & uVar29;
                    } while (!SBORROW4(0,uVar22));
                    iVar23 = local_1c8c;
                    if (uStack_58._4_4_ < uVar31) {
                      uStack_58 = CONCAT44(uVar31,(uint)uStack_58);
                    }
                  }
                  plVar27 = local_80;
                  if (local_80 == (longlong *)0x0) {
                    plVar27 = &local_88;
                  }
                  *(int *)((longlong)plVar27 + lVar32 * 4) = iVar23;
                  plVar27 = local_68;
                  if (local_68 == (longlong *)0x0) {
                    plVar27 = &local_70;
                  }
                  *(uint *)((longlong)plVar27 + lVar32 * 4) = uVar7;
                  param_1 = local_1ca0;
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 != uVar8 + 1 + (uint)(uVar8 == 0xffffffff));
              if (local_1c98 != (longlong *)0x0) {
                FUN_1400020a8(local_1c98,iVar16,iVar23);
              }
              if (local_1c88 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            uVar9 = uStack_c0;
            if (local_90 < 1) {
              iVar16 = (int)uStack_c0;
              uVar7 = (int)uStack_c0 + 1;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar7);
              if (uStack_c0._4_4_ < uVar7) {
                FUN_1417735d2(&local_c8,uVar9 & 0xffffffff);
              }
              uVar9 = uStack_b0;
              *(int *)(local_c8 + (longlong)iVar16 * 0xc) = (int)local_1ca8;
              *(undefined8 *)(local_c8 + 4 + (longlong)iVar16 * 0xc) = uVar4;
              lVar32 = (longlong)(int)uStack_b0;
              uVar7 = (int)uStack_b0 + 1;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
              if (uStack_b0._4_4_ < uVar7) {
                FUN_1447602e0(&local_b8,uVar9 & 0xffffffff);
              }
            }
            else {
              iVar16 = FUN_14020b4c6(&local_a8);
              lVar32 = (longlong)iVar16;
              *(int *)(local_c8 + lVar32 * 0xc) = (int)local_1ca8;
              *(undefined8 *)(local_c8 + 4 + lVar32 * 0xc) = uVar4;
            }
            *(uint *)(lVar32 * 4 + local_b8) = uVar19;
            uVar7 = (uint)uStack_58 & uVar19;
            uVar9 = (ulonglong)uVar7;
            plVar27 = local_68;
            if (local_68 == (longlong *)0x0) {
              plVar27 = &local_70;
            }
            uVar8 = *(uint *)((longlong)plVar27 + uVar9 * 4);
            plVar20 = (longlong *)(ulonglong)-uVar8;
            iVar23 = iVar16;
            if (!SBORROW4(0,uVar8)) {
              puVar28 = (uint *)((longlong)plVar27 + uVar9 * 4);
              uVar22 = uVar7 - uVar8 & (uint)uStack_58;
              uVar15 = 0;
              plVar20 = (longlong *)(ulonglong)uVar7;
              plVar27 = local_68;
              uVar7 = (uint)uStack_58;
              do {
                if (uVar22 < uVar15) {
                  if (uStack_58._4_4_ < uVar15) {
                    uStack_58 = CONCAT44(uVar15,(uint)uStack_58);
                    uVar8 = *puVar28;
                  }
                  plVar27 = local_80;
                  if (local_80 == (longlong *)0x0) {
                    plVar27 = &local_88;
                  }
                  iVar12 = *(int *)((longlong)plVar27 + uVar9 * 4);
                  *(int *)((longlong)plVar27 + uVar9 * 4) = iVar23;
                  plVar27 = local_68;
                  if (local_68 == (longlong *)0x0) {
                    plVar27 = &local_70;
                  }
                  *(uint *)((longlong)plVar27 + uVar9 * 4) = uVar19;
                  plVar27 = local_68;
                  uVar19 = uVar8;
                  uVar7 = (uint)uStack_58;
                  uVar15 = uVar22;
                  iVar23 = iVar12;
                }
                uVar15 = uVar15 + 1;
                uVar22 = (int)plVar20 + 1U & uVar7;
                plVar20 = (longlong *)(ulonglong)uVar22;
                plVar13 = plVar27;
                if (plVar27 == (longlong *)0x0) {
                  plVar13 = &local_70;
                }
                uVar9 = (ulonglong)(int)uVar22;
                puVar28 = (uint *)((longlong)plVar13 + uVar9 * 4);
                uVar8 = *puVar28;
                uVar22 = uVar22 - uVar8 & uVar7;
              } while (!SBORROW4(0,uVar8));
              param_1 = local_1ca0;
              if (uStack_58._4_4_ < uVar15) {
                uStack_58 = CONCAT44(uVar15,(uint)uStack_58);
              }
            }
            plVar27 = &local_88;
            plVar13 = local_80;
            if (local_80 == (longlong *)0x0) {
              plVar13 = plVar27;
            }
            *(int *)((longlong)plVar13 + uVar9 * 4) = iVar23;
            plVar13 = local_68;
            if (local_68 == (longlong *)0x0) {
              plVar13 = &local_70;
            }
            *(uint *)((longlong)plVar13 + uVar9 * 4) = uVar19;
            lVar17 = (longlong)iVar16;
            lVar32 = *param_1;
            uVar7 = *(uint *)(lVar32 + 0x10);
LAB_142e654b3:
            piVar1 = (int *)(local_c8 + lVar17 * 0xc);
            iVar16 = *piVar1;
            if ((int)uVar7 <= iVar16) {
              uVar4 = *puVar14;
              *(uint *)(lVar32 + 0x10) = uVar7 + 1;
              if (*(uint *)(lVar32 + 0x14) < uVar7 + 1) {
                FUN_142e66222((longlong *)(lVar32 + 8),uVar7,plVar27,plVar20);
              }
              lVar32 = *(longlong *)(lVar32 + 8);
              lVar17 = (longlong)(int)uVar7 * 0xa0;
              *(undefined8 *)(lVar32 + lVar17) = uVar4;
              *(undefined8 *)(lVar32 + 0x88 + lVar17) = 0;
              *(undefined8 *)(lVar32 + 0x90 + lVar17) = 0x4000000000;
              *(undefined4 *)(lVar32 + 0x98 + lVar17) = 0;
              uVar7 = *(uint *)(*param_1 + 0x44);
              if (uVar7 < *(ushort *)((longlong)puVar14 + 4)) {
                uVar7 = (uint)*(ushort *)((longlong)puVar14 + 4);
              }
              *(uint *)(*param_1 + 0x44) = uVar7;
              lVar32 = *param_1;
              iVar16 = *piVar1;
            }
            lVar32 = *(longlong *)(lVar32 + 8) + (longlong)iVar16 * 0xa0;
            iVar16 = *(int *)(lVar32 + 0x90);
            *(uint *)(lVar32 + 0x90) = iVar16 + 1U;
            if (*(uint *)(lVar32 + 0x94) < iVar16 + 1U) {
              FUN_140186294(lVar32 + 8,iVar16);
            }
            lVar17 = *(longlong *)(lVar32 + 0x88);
            if (*(longlong *)(lVar32 + 0x88) == 0) {
              lVar17 = lVar32 + 8;
            }
            *(short *)(lVar17 + (longlong)iVar16 * 2) = (short)local_1cb0;
            piVar1 = (int *)(*(longlong *)(*param_1 + 8) + 0x98 + (longlong)*piVar1 * 0xa0);
            *piVar1 = *piVar1 + local_1c7c;
            *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + local_1c7c;
            *(int *)*param_1 = *(int *)*param_1 + 1;
            puVar14 = puVar14 + 1;
          } while (puVar14 != local_1c60);
          iVar16 = (int)param_1[2];
          plVar27 = local_1cb0;
        }
        plVar27 = (longlong *)((longlong)plVar27 + 1);
      } while ((longlong)plVar27 < (longlong)iVar16);
    }
    lVar32 = *param_1;
    iVar16 = *(int *)(lVar32 + 0x10);
    if (1 < (longlong)iVar16) {
      lVar32 = *(longlong *)(lVar32 + 8);
      memset(local_18b8,0,0x2f0);
      local_18c0 = (longlong *)((longlong)iVar16 * 0xa0 + lVar32 + -0xa0);
      local_18c8 = lVar32;
      fVar33 = logf((float)iVar16);
      local_18b8[0] = (undefined1 *)CONCAT44(local_18b8[0]._4_4_,(int)(longlong)(fVar33 + fVar33));
      plVar27 = &local_18c8;
      do {
        plVar20 = (longlong *)*plVar27;
        plVar13 = (longlong *)plVar27[1];
        iVar16 = (int)plVar27[2];
        iVar23 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar20) >> 5) * -0x33333333;
        uVar7 = iVar23 + 1;
        plVar30 = plVar13;
        plVar21 = plVar20;
        _Src_00 = plVar20;
        local_1cb0 = plVar27;
        if (iVar16 != 0) {
LAB_142e65718:
          if (8 < (int)uVar7) {
            local_1ca8 = (void *)CONCAT44(local_1ca8._4_4_,iVar16);
            local_1c98 = plVar30;
            local_1c88 = plVar20;
            memcpy(&local_1c58,plVar21 + (ulonglong)(uVar7 >> 1) * 0x14,0xa0);
            memcpy(plVar21 + (ulonglong)(uVar7 >> 1) * 0x14,plVar21,0xa0);
            memcpy(plVar21,&local_1c58,0xa0);
            plVar20 = plVar13 + 0x14;
            _Src_00 = plVar21;
            do {
              plVar27 = _Src_00 + 0x14;
              plVar30 = _Src_00 + 0x14;
              do {
                _Src_00 = plVar30;
                plVar10 = plVar27;
                if (plVar13 < _Src_00) break;
                plVar27 = plVar10 + 0x14;
                plVar30 = _Src_00 + 0x14;
              } while (*(ushort *)((longlong)_Src_00 + 4) <= *(ushort *)((longlong)plVar21 + 4));
              plVar27 = plVar20 + -0x28;
              do {
                plVar18 = plVar20;
                plVar30 = plVar27;
                plVar20 = plVar18 + -0x14;
                if (plVar20 <= plVar21) break;
                plVar27 = plVar30 + -0x14;
              } while (*(ushort *)((longlong)plVar21 + 4) <= *(ushort *)((longlong)plVar18 + -0x9c))
              ;
              if (plVar20 < _Src_00) goto LAB_142e6582c;
              memcpy(&local_1c58,_Src_00,0xa0);
              memcpy(_Src_00,plVar20,0xa0);
              memcpy(plVar20,&local_1c58,0xa0);
            } while( true );
          }
          for (; plVar27 = local_1cb0, plVar20 = plVar21, plVar30 = plVar21, plVar21 < plVar13;
              plVar13 = plVar13 + -0x14) {
            while (plVar27 = plVar20, plVar20 = plVar30 + 0x14, plVar20 <= plVar13) {
              puVar25 = (ushort *)((longlong)plVar30 + 0xa4);
              plVar30 = plVar20;
              if (*puVar25 <= *(ushort *)((longlong)plVar27 + 4)) {
                plVar20 = plVar27;
              }
            }
            memcpy(&local_1c58,plVar27,0xa0);
            memcpy(plVar27,plVar13,0xa0);
            memcpy(plVar13,&local_1c58,0xa0);
          }
          goto LAB_142e65c01;
        }
LAB_142e6591d:
        plVar27 = local_1cb0;
        if (uVar7 != 0) {
          uVar8 = (iVar23 - (iVar23 + -1 >> 0x1f)) + -1 >> 1;
          do {
            uVar9 = (ulonglong)uVar8;
            local_1ca8 = (void *)uVar9;
            while (uVar19 = uVar8 * 2 + 1, (int)uVar19 < (int)uVar7) {
              uVar15 = uVar8 * 2 + 2;
              uVar8 = uVar19;
              if (((int)uVar15 < (int)uVar7) &&
                 (*(ushort *)((longlong)_Src_00 + (longlong)(int)uVar19 * 0xa0 + 4) <=
                  *(ushort *)((longlong)_Src_00 + (longlong)(int)uVar15 * 0xa0 + 4))) {
                uVar8 = uVar15;
              }
              if (*(ushort *)((longlong)_Src_00 + (longlong)(int)uVar8 * 0xa0 + 4) <=
                  *(ushort *)((longlong)_Src_00 + (longlong)(int)uVar9 * 0xa0 + 4)) break;
              memcpy(&local_1c58,_Src_00 + (longlong)(int)uVar9 * 0x14,0xa0);
              memcpy(_Src_00 + (longlong)(int)uVar9 * 0x14,_Src_00 + (longlong)(int)uVar8 * 0x14,
                     0xa0);
              memcpy(_Src_00 + (longlong)(int)uVar8 * 0x14,&local_1c58,0xa0);
              uVar9 = (ulonglong)uVar8;
            }
            uVar8 = (int)local_1ca8 - 1;
          } while ((int)local_1ca8 != 0);
          plVar27 = local_1cb0;
          if (1 < (int)uVar7) {
            memcpy(&local_1c58,_Src_00,0xa0);
            memcpy(_Src_00,_Src_00 + ((ulonglong)uVar7 - 1) * 0x14,0xa0);
            memcpy(_Src_00 + ((ulonglong)uVar7 - 1) * 0x14,&local_1c58,0xa0);
            plVar27 = local_1cb0;
            uVar9 = (ulonglong)uVar7 - 1;
            if (uVar7 != 2) {
              do {
                iVar16 = 0;
                iVar12 = 1;
                iVar23 = 0;
                do {
                  iVar16 = iVar16 + 2;
                  iVar11 = iVar12;
                  if (((longlong)iVar16 < (longlong)uVar9) &&
                     (*(ushort *)((longlong)_Src_00 + (longlong)iVar12 * 0xa0 + 4) <=
                      *(ushort *)((longlong)_Src_00 + (longlong)iVar16 * 0xa0 + 4))) {
                    iVar11 = iVar16;
                  }
                  if (*(ushort *)((longlong)_Src_00 + (longlong)iVar11 * 0xa0 + 4) <=
                      *(ushort *)((longlong)_Src_00 + (longlong)iVar23 * 0xa0 + 4)) break;
                  memcpy(&local_1c58,_Src_00 + (longlong)iVar23 * 0x14,0xa0);
                  memcpy(_Src_00 + (longlong)iVar23 * 0x14,_Src_00 + (longlong)iVar11 * 0x14,0xa0);
                  memcpy(_Src_00 + (longlong)iVar11 * 0x14,&local_1c58,0xa0);
                  iVar16 = iVar11 * 2;
                  iVar12 = iVar11 * 2 + 1;
                  iVar23 = iVar11;
                } while ((longlong)iVar12 < (longlong)uVar9);
                memcpy(&local_1c58,_Src_00,0xa0);
                memcpy(_Src_00,_Src_00 + (uVar9 - 1) * 0x14,0xa0);
                memcpy(_Src_00 + (uVar9 - 1) * 0x14,&local_1c58,0xa0);
                bVar6 = 2 < uVar9;
                plVar27 = local_1cb0;
                uVar9 = uVar9 - 1;
              } while (bVar6);
            }
          }
        }
LAB_142e65c01:
        plVar27 = plVar27 + -3;
      } while (&local_18c8 <= plVar27);
      lVar32 = *local_1ca0;
      param_1 = local_1ca0;
    }
    *(int *)(lVar32 + 0x38) = *(int *)(lVar32 + 0x44) + 1;
    *(int *)(*param_1 + 0x3c) = *(int *)(*param_1 + 0x38) << 2;
    *(int *)(*param_1 + 0x40) = *(int *)(*param_1 + 4) << 2;
    lVar32 = *param_1;
    FUN_14015c376(lVar32 + 0x48,(uint)(*(int *)(lVar32 + 0x40) + *(int *)(lVar32 + 0x3c)) >> 2,1);
    local_1ca8 = *(void **)(*param_1 + 0x48);
    uVar9 = (ulonglong)*(uint *)(*param_1 + 0x3c);
    memset(local_1ca8,0,uVar9);
    lVar32 = (longlong)*(int *)(*param_1 + 0x10);
    if (lVar32 != 0) {
      plVar27 = *(longlong **)(*param_1 + 8);
      local_1c98 = plVar27 + lVar32 * 0x14;
      do {
        *(int *)((longlong)local_1ca8 + (ulonglong)*(ushort *)((longlong)plVar27 + 4) * 4) =
             (int)uVar9;
        lVar32 = plVar27[0x13];
        puVar25 = (ushort *)(plVar27 + 1);
        if ((ushort *)plVar27[0x11] != (ushort *)0x0) {
          puVar25 = (ushort *)plVar27[0x11];
        }
        if ((longlong)(int)plVar27[0x12] != 0) {
          puVar2 = puVar25 + (int)plVar27[0x12];
          puVar28 = (uint *)(uVar9 + (longlong)local_1ca8);
          do {
            uVar3 = *puVar25;
            lVar17 = param_1[1];
            lVar24 = (ulonglong)uVar3 * 0xd20;
            uVar7 = *(int *)(lVar17 + 0x28 + lVar24) - *(int *)(lVar17 + 0x20 + lVar24);
            if (7 < uVar7) {
              uVar8 = *(int *)(lVar17 + lVar24 + 0x2c) - *(int *)(lVar17 + lVar24 + 0x24);
              iVar16 = (int)uVar8 >> 3;
              iVar23 = (int)uVar7 >> 3;
              uVar7 = 0;
              do {
                if (7 < uVar8) {
                  uVar19 = 0;
                  iVar12 = iVar16 + (uint)(iVar16 == 0);
                  do {
                    *puVar28 = uVar19 & 0xff00 | uVar7 & 0xff | (uint)uVar3 << 0x10;
                    puVar28 = puVar28 + 1;
                    uVar19 = uVar19 + 0x100;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 != iVar23 + (uint)(iVar23 == 0));
            }
            puVar25 = puVar25 + 1;
            param_1 = local_1ca0;
          } while (puVar25 != puVar2);
        }
        uVar9 = (ulonglong)(uint)((int)uVar9 + (int)lVar32 * 4);
        plVar27 = plVar27 + 0x14;
      } while (plVar27 != local_1c98);
    }
    lVar32 = param_1[2];
    if ((longlong)(int)lVar32 != 0) {
      lVar17 = local_1ca0[1];
      lVar24 = 0;
      do {
        FUN_1449343ce(&local_18c8);
        _Src = (void *)(lVar17 + 0xc0 + lVar24);
        memcpy(&local_18c8,_Src,0xba0);
        memcpy(local_d28,_Src,0xba0);
        local_188 = *(undefined8 *)(lVar17 + 0x20 + lVar24);
        local_180 = *(undefined8 *)(lVar17 + 0x28 + lVar24);
        local_178 = local_1ca0[4];
        local_138 = 0x3f800000;
        local_d8 = (undefined4)local_1ca0[5];
        lVar5 = *local_1ca0;
        FUN_14493225c(&local_1c58,&local_18c8);
        iVar16 = *(int *)(lVar5 + 0x30);
        *(uint *)(lVar5 + 0x30) = iVar16 + 1U;
        if (*(uint *)(lVar5 + 0x34) < iVar16 + 1U) {
          FUN_1405f46cc((longlong *)(lVar5 + 0x28),iVar16);
        }
        memcpy((void *)((longlong)iVar16 * 0x390 + *(longlong *)(lVar5 + 0x28)),&local_1c58,0x390);
        lVar24 = lVar24 + 0xd20;
      } while ((longlong)(int)lVar32 * 0xd20 - lVar24 != 0);
    }
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_80 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar9 = uStack_c0 >> 0x20;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    if ((int)uVar9 != 0) {
      FUN_141773748(&local_c8);
    }
    uVar7 = local_98._4_4_;
    iVar16 = 0;
    if ((int)local_98._4_4_ < 1) {
      local_98 = (undefined1 *)((ulonglong)local_98._4_4_ << 0x20);
      FUN_1456bda22(&local_a8,1);
      uVar7 = local_98._4_4_;
      iVar16 = (int)local_98;
    }
    local_98 = (undefined1 *)CONCAT44(local_98._4_4_,iVar16 + 1U);
    if (uVar7 < iVar16 + 1U) {
      FUN_1400e0406(&local_a8,iVar16);
    }
    puVar14 = &local_a8;
    if (local_a0 != (undefined8 *)0x0) {
      puVar14 = local_a0;
    }
    puVar14[iVar16] = 0xffffffffffffffff;
    local_90 = 0;
    uVar9 = uStack_b0 >> 0x20;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    if ((int)uVar9 != 0) {
      FUN_1446fb5ec(&local_b8,0);
    }
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if ((local_1c80 == 0x60000000) || (local_1c80 == 0)) {
      *local_1c78 = local_1c80;
    }
    if ((local_48 ^ (ulonglong)auStack_1cd8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_142e65fbd:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar16);
LAB_142e6582c:
  memcpy(&local_1c58,plVar21,0xa0);
  memcpy(plVar21,plVar20,0xa0);
  memcpy(plVar20,&local_1c58,0xa0);
  iVar16 = (int)local_1ca8 + -1;
  plVar18 = plVar18 + -0x28;
  if ((longlong)plVar30 - (longlong)local_1c88 < (longlong)local_1c98 - (longlong)plVar10) {
    plVar27 = local_1cb0;
    if (_Src_00 < plVar13) {
      *local_1cb0 = (longlong)_Src_00;
      local_1cb0[1] = (longlong)plVar13;
      *(int *)(local_1cb0 + 2) = iVar16;
      plVar27 = local_1cb0 + 3;
    }
    _Src_00 = plVar21;
    if (plVar20 <= plVar21 + 0x14) goto LAB_142e65c01;
  }
  else {
    if (plVar21 + 0x14 < plVar20) {
      *local_1cb0 = (longlong)plVar21;
      local_1cb0[1] = (longlong)plVar18;
      *(int *)(local_1cb0 + 2) = iVar16;
      local_1cb0 = local_1cb0 + 3;
    }
    plVar27 = local_1cb0;
    plVar18 = plVar13;
    plVar21 = plVar10;
    plVar30 = plVar13;
    if (plVar13 <= _Src_00) goto LAB_142e65c01;
  }
  local_1cb0 = plVar27;
  iVar23 = (int)((ulonglong)((longlong)plVar30 - (longlong)plVar21) >> 5) * -0x33333333;
  uVar7 = iVar23 + 1;
  plVar13 = plVar18;
  plVar20 = plVar21;
  plVar21 = _Src_00;
  if (iVar16 == 0) goto LAB_142e6591d;
  goto LAB_142e65718;
}



// FUNCTION 142e6604e FUN_142e6604e body=14 status=ok
// SIG undefined FUN_142e6604e(void)

void FUN_142e6604e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_142e6605c();
  return;
}



// FUNCTION 142e6605c FUN_142e6605c body=453 status=ok
// SIG undefined FUN_142e6605c(void)

void FUN_142e6605c(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0xa0);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142e6617a:
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
LAB_142e661b7:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xa0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142e660b5;
LAB_142e660aa:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142e660b5:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x19a) goto code_r0x000142e660e1;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x28 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142e66137:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142e661b7;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142e6617a;
code_r0x000142e660e1:
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
      goto LAB_142e66137;
    }
  }
  goto LAB_142e660aa;
}



// FUNCTION 142e66222 FUN_142e66222 body=85 status=ok
// SIG undefined FUN_142e66222(void)

void FUN_142e66222(longlong param_1,int param_2)

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
    FUN_142e6605c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 142e66278 FUN_142e66278 body=547 status=ok
// SIG undefined FUN_142e66278(void)

longlong * FUN_142e66278(longlong *param_1,int param_2)

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



// FUNCTION 142e664a8 FUN_142e664a8 body=110 status=ok
// SIG undefined FUN_142e664a8(void)

undefined8 * FUN_142e664a8(undefined8 *param_1,int param_2)

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



// FUNCTION 142e66554 FUN_142e66554 body=12 status=ok
// SIG undefined FUN_142e66554(void)

void FUN_142e66554(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e6655d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142e66560 FUN_142e66560 body=29 status=ok
// SIG undefined FUN_142e66560(void)

undefined8 FUN_142e66560(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e665a4 FUN_142e665a4 body=12 status=ok
// SIG undefined FUN_142e665a4(void)

void FUN_142e665a4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e665ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142e665b0 FUN_142e665b0 body=29 status=ok
// SIG undefined FUN_142e665b0(void)

undefined8 FUN_142e665b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e665f8 FUN_142e665f8 body=12 status=ok
// SIG undefined FUN_142e665f8(void)

void FUN_142e665f8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e66601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142e66604 FUN_142e66604 body=29 status=ok
// SIG undefined FUN_142e66604(void)

undefined8 FUN_142e66604(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e66622 FUN_142e66622 body=46 status=ok
// SIG undefined FUN_142e66622(void)

int FUN_142e66622(undefined8 *param_1)

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
  return *(int *)(lVar3 + 8) << 2;
}



// FUNCTION 142e66656 FUN_142e66656 body=43 status=ok
// SIG undefined FUN_142e66656(void)

undefined8 FUN_142e66656(undefined8 *param_1)

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



// FUNCTION 142e66688 FUN_142e66688 body=50 status=ok
// SIG undefined FUN_142e66688(void)

uint FUN_142e66688(undefined8 *param_1)

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
  return *(uint *)(lVar3 + 8) & 0x3fffffff;
}



// FUNCTION 142e666c4 FUN_142e666c4 body=24 status=ok
// SIG undefined FUN_142e666c4(void)

longlong FUN_142e666c4(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a2a0de0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 142e666e2 FUN_142e666e2 body=12 status=ok
// SIG undefined FUN_142e666e2(void)

void FUN_142e666e2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142e666eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142e666ee FUN_142e666ee body=29 status=ok
// SIG undefined FUN_142e666ee(void)

undefined8 FUN_142e666ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e6670c FUN_142e6670c body=31 status=ok
// SIG undefined FUN_142e6670c(void)

undefined8 FUN_142e6670c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e6672c FUN_142e6672c body=31 status=ok
// SIG undefined FUN_142e6672c(void)

undefined8 FUN_142e6672c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e6674c FUN_142e6674c body=38 status=ok
// SIG undefined FUN_142e6674c(void)

undefined8 FUN_142e6674c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e66772 FUN_142e66772 body=1187 status=ok
// SIG undefined FUN_142e66772(void)

void FUN_142e66772(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *_Dst;
  undefined1 *_Src;
  longlong lVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined1 local_b0 [64];
  undefined1 *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_144b1c6fa(param_1 + 0x10,&local_c8);
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
  *(int *)(puVar17 + 4) = local_b8;
  local_e8 = param_1;
  if ((longlong)local_b8 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar12 = &local_c8;
    if (uStack_c0 != (undefined8 *)0x0) {
      puVar12 = uStack_c0;
    }
    FUN_1446fe144(puVar17 + 2,local_b8,0);
    _Dst = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      _Dst = puVar17 + 2;
    }
    memcpy(_Dst,puVar12,(longlong)local_b8);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_68;
  if ((longlong)local_68 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    _Src = local_70;
    if (local_70 == (undefined1 *)0x0) {
      _Src = local_b0;
    }
    FUN_1446fe1b8(puVar17 + 5,local_68,0);
    puVar12 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar17 + 5;
    }
    memcpy(puVar12,_Src,(longlong)local_68 << 3);
  }
  lVar19 = local_e8;
  *(undefined4 *)(puVar17 + 0xf) = local_60;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_5c;
  *(undefined4 *)(puVar17 + 0x10) = uStack_58;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_54;
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8(local_70);
  }
  if (uStack_c0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144821ef4(param_2);
  plVar18 = *(longlong **)(lVar19 + 0x1d0);
  lVar13 = (longlong)(int)plVar18[1];
  if (lVar13 != 0) {
    lVar16 = *plVar18;
    local_d8 = lVar13 * 0xa0;
    lVar13 = 0;
    local_e0 = lVar16;
    do {
      plVar18 = (longlong *)
                ((longlong)
                 *(int *)(*(longlong *)(*(longlong *)(lVar19 + 0x1c8) + 0x28) +
                         (ulonglong)*(ushort *)(lVar16 + 4 + lVar13) * 4) * 0x28 +
                *(longlong *)(*(longlong *)(lVar19 + 0x1c8) + 0x18));
      cVar9 = FUN_1446fc653(plVar18);
      if (cVar9 == '\0') break;
      lVar14 = FUN_144821ef4(param_2);
      local_d0 = *(longlong *)(*(longlong *)(*(longlong *)(lVar19 + 0x1b8) + 0x70) + 0x10);
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      FUN_1448a2971(lVar14,plVar18,&local_d0);
      uVar5 = *(ulonglong *)(*plVar18 + 0x28);
      uVar15 = FUN_140029432(param_2,uVar5,0);
      param_2[0x37] = uVar5;
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
      puVar17[2] = uVar15;
      if (DAT_14ca84f5e == '\x01') {
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
        lVar19 = plVar18[2];
        puVar12 = (undefined8 *)plVar18[3];
        puVar17[1] = 0;
        *puVar17 = &PTR_LAB_14a1e78b8;
        local_c8._0_4_ = (undefined4)lVar19;
        local_c8._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
        uStack_c0._0_4_ = SUB84(puVar12,0);
        uStack_c0._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
        *(undefined4 *)(puVar17 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)puVar17 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(puVar17 + 3) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_c0._4_4_;
        local_c8 = lVar19;
        uStack_c0 = puVar12;
      }
      iVar10 = *(int *)(lVar14 + 0x30) + *(int *)(lVar14 + 0x20);
      iVar11 = iVar10 + *(int *)(lVar14 + 0x40);
      if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar14 + 0x40)) == iVar11 < 0) {
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar17 + 0xb;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x60);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar17 + 0xb;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        uVar15 = *(undefined8 *)(lVar14 + 0x38);
        uVar1 = *(undefined4 *)(lVar14 + 0x40);
        uVar6 = *(undefined8 *)(lVar14 + 0x28);
        uVar2 = *(undefined4 *)(lVar14 + 0x30);
        uVar7 = *(undefined8 *)(lVar14 + 0x18);
        uVar3 = *(undefined4 *)(lVar14 + 0x20);
        uVar8 = *(undefined8 *)(lVar14 + 8);
        uVar4 = *(undefined4 *)(lVar14 + 0x10);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1e7fa8;
        puVar17[2] = uVar5;
        puVar17[3] = uVar8;
        *(undefined4 *)(puVar17 + 4) = uVar4;
        puVar17[5] = uVar7;
        *(undefined4 *)(puVar17 + 6) = uVar3;
        puVar17[7] = uVar6;
        *(undefined4 *)(puVar17 + 8) = uVar2;
        puVar17[9] = uVar15;
        *(undefined4 *)(puVar17 + 10) = uVar1;
        *(undefined8 *)(lVar14 + 8) = 0;
        *(undefined4 *)(lVar14 + 0x10) = 0;
        *(undefined8 *)(lVar14 + 0x18) = 0;
        *(undefined4 *)(lVar14 + 0x20) = 0;
        *(undefined8 *)(lVar14 + 0x28) = 0;
        *(undefined4 *)(lVar14 + 0x30) = 0;
        *(undefined8 *)(lVar14 + 0x38) = 0;
        *(undefined4 *)(lVar14 + 0x40) = 0;
        lVar16 = local_e0;
      }
      uVar1 = *(undefined4 *)(lVar16 + 0x98 + lVar13);
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
      *(undefined4 *)(puVar17 + 2) = uVar1;
      *(undefined1 **)((longlong)puVar17 + 0x14) = &DAT_100000001;
      lVar13 = lVar13 + 0xa0;
      lVar19 = local_e8;
    } while (local_d8 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e66c22 FUN_142e66c22 body=190 status=ok
// SIG undefined FUN_142e66c22(void)

void FUN_142e66c22(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
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
  lVar7 = *param_1;
  iVar2 = *(int *)(lVar7 + 4);
  if (-1 < iVar2) {
    if (*(int *)(lVar7 + 0x1c) < iVar2) {
      FUN_1400dd02a(lVar7 + 0x10);
      lVar7 = *param_1;
    }
    pcVar3 = (code *)param_1[2];
    plVar6 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    uVar4 = (**(code **)(*plVar6 + 8))(plVar6);
    (*pcVar3)(uVar4,lVar7 + 0x10);
    if ((iVar5 == 0x60000000) || (iVar5 == 0)) {
      *piVar1 = iVar5;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 142e66ce0 FUN_142e66ce0 body=547 status=ok
// SIG undefined FUN_142e66ce0(void)

longlong * FUN_142e66ce0(longlong *param_1,int param_2)

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



// FUNCTION 142e66f04 FUN_142e66f04 body=278 status=ok
// SIG undefined FUN_142e66f04(void)

void FUN_142e66f04(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
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
  lVar7 = *(longlong *)(param_1 + 0xb0);
  iVar2 = *(int *)(lVar7 + 4);
  if (-1 < iVar2) {
    if (*(int *)(lVar7 + 0x1c) < iVar2) {
      FUN_1400dd02a(lVar7 + 0x10);
      lVar7 = *(longlong *)(param_1 + 0xb0);
    }
    pcVar3 = *(code **)(param_1 + 0xc0);
    plVar5 = *(longlong **)(param_1 + 0xd0);
    if (*(longlong **)(param_1 + 0xd0) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0xe0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar3)(uVar4,lVar7 + 0x10);
    if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
      *piVar1 = iVar6;
    }
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      return;
    }
    plVar5 = (longlong *)(param_1 + 0xe0);
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xd0);
    }
                    /* WARNING: Could not recover jumptable at 0x000142e66fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 142e6701a FUN_142e6701a body=110 status=ok
// SIG undefined FUN_142e6701a(void)

undefined8 * FUN_142e6701a(undefined8 *param_1,int param_2)

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



// FUNCTION 142e67090 FUN_142e67090 body=31 status=ok
// SIG undefined FUN_142e67090(void)

undefined8 FUN_142e67090(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e670ea FUN_142e670ea body=29 status=ok
// SIG undefined FUN_142e670ea(void)

void FUN_142e670ea(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142e67108 FUN_142e67108 body=29 status=ok
// SIG undefined FUN_142e67108(void)

undefined8 FUN_142e67108(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e67126 FUN_142e67126 body=282 status=ok
// SIG undefined FUN_142e67126(void)

undefined8 * FUN_142e67126(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142e5a5ee);
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



// FUNCTION 142e672a4 FUN_142e672a4 body=547 status=ok
// SIG undefined FUN_142e672a4(void)

longlong * FUN_142e672a4(longlong *param_1,int param_2)

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



// FUNCTION 142e674d4 FUN_142e674d4 body=110 status=ok
// SIG undefined FUN_142e674d4(void)

undefined8 * FUN_142e674d4(undefined8 *param_1,int param_2)

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



// FUNCTION 142e67542 FUN_142e67542 body=547 status=ok
// SIG undefined FUN_142e67542(void)

longlong * FUN_142e67542(longlong *param_1,int param_2)

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



// FUNCTION 142e67772 FUN_142e67772 body=110 status=ok
// SIG undefined FUN_142e67772(void)

undefined8 * FUN_142e67772(undefined8 *param_1,int param_2)

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



// FUNCTION 142e677e0 FUN_142e677e0 body=1399 status=ok
// SIG undefined FUN_142e677e0(void)

void FUN_142e677e0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  
  lVar4 = *param_1;
  lVar5 = *(longlong *)(*param_2 + 8);
  uVar14 = *(ushort *)(lVar5 + 0x300);
  *(ushort *)(param_2 + 4) = uVar14;
  *(undefined1 *)((longlong)param_2 + 0x22) = *(undefined1 *)(lVar5 + 0x302);
  *(undefined1 *)((longlong)param_2 + 0x23) = *(undefined1 *)(lVar5 + 0x304);
  iVar12 = ((uint)*(byte *)(lVar5 + 0x328) + (uint)*(byte *)(lVar5 + 0x328) * 2 + 7) * (uint)uVar14;
  iVar9 = *(int *)((longlong)param_2 + 0xc);
  if (iVar12 == iVar9) {
    bVar10 = 0;
  }
  else {
    if (iVar9 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      lVar6 = param_2[1];
      iVar13 = *(int *)(lVar5 + 0xe0);
      *(uint *)(lVar5 + 0xe0) = iVar13 + 1U;
      if (*(uint *)(lVar5 + 0xe4) < iVar13 + 1U) {
        FUN_14017bd48(lVar5 + 0x88,iVar13);
      }
      lVar8 = lVar5 + 0x88;
      if (*(longlong *)(lVar5 + 0xd8) != 0) {
        lVar8 = *(longlong *)(lVar5 + 0xd8);
      }
      *(ulonglong *)(lVar8 + (longlong)iVar13 * 8) = CONCAT44(iVar9,(int)lVar6);
      *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) - iVar9;
    }
    if (uVar14 == 0) {
      iVar9 = -1;
    }
    else {
      lVar5 = *(longlong *)(lVar4 + 8);
      piVar1 = (int *)(lVar5 + 0x18);
      iVar9 = *(int *)(lVar5 + 0x24);
      lVar6 = (longlong)iVar9;
      if (iVar9 < *(int *)(lVar5 + 0x80)) {
        lVar8 = lVar5 + 0x28;
        if (*(longlong *)(lVar5 + 0x78) != 0) {
          lVar8 = *(longlong *)(lVar5 + 0x78);
        }
        iVar9 = *(int *)(lVar5 + 0x80) - iVar9;
        do {
          if (iVar12 <= *(int *)(lVar8 + 4 + lVar6 * 8)) {
            if (lVar6 != -1) {
              *piVar1 = *piVar1 + iVar12;
              goto LAB_142e67918;
            }
            break;
          }
          lVar6 = lVar6 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (*(int *)(lVar5 + 0xe0) != 0) {
        FUN_144883418(piVar1);
        iVar9 = *(int *)(lVar5 + 0x24);
        lVar6 = (longlong)iVar9;
        if (iVar9 < *(int *)(lVar5 + 0x80)) {
          lVar8 = lVar5 + 0x28;
          if (*(longlong *)(lVar5 + 0x78) != 0) {
            lVar8 = *(longlong *)(lVar5 + 0x78);
          }
          iVar9 = *(int *)(lVar5 + 0x80) - iVar9;
          while (*(int *)(lVar8 + 4 + lVar6 * 8) < iVar12) {
            lVar6 = lVar6 + 1;
            iVar9 = iVar9 + -1;
            if (iVar9 == 0) goto LAB_142e678f5;
          }
          *piVar1 = *piVar1 + iVar12;
          if (lVar6 == -1) goto LAB_142e678f8;
LAB_142e67918:
          iVar13 = (int)lVar6;
          lVar6 = (longlong)iVar13;
          iVar9 = *(int *)(lVar8 + lVar6 * 8);
          *(int *)(lVar8 + lVar6 * 8) = iVar9 + iVar12;
          piVar1 = (int *)(lVar8 + 4 + lVar6 * 8);
          *piVar1 = *piVar1 - iVar12;
          if ((*piVar1 == 0) && (*(int *)(lVar5 + 0x24) == iVar13)) {
            *(int *)(lVar5 + 0x24) = iVar13 + 1;
          }
          goto LAB_142e6793f;
        }
      }
LAB_142e678f5:
      *piVar1 = *piVar1 + iVar12;
LAB_142e678f8:
      iVar9 = *(int *)(lVar5 + 0x1c);
      iVar13 = iVar9 + iVar12;
      *(int *)(lVar5 + 0x1c) = iVar13;
      iVar7 = *(int *)(lVar5 + 0x20);
      if (*(int *)(lVar5 + 0x20) < iVar13) {
        iVar7 = iVar13;
      }
      *(int *)(lVar5 + 0x20) = iVar7;
    }
LAB_142e6793f:
    *(int *)(param_2 + 1) = iVar9;
    *(int *)((longlong)param_2 + 0xc) = iVar12;
    bVar10 = *(byte *)(lVar4 + 0x41) ^ 1;
    uVar14 = *(ushort *)(param_2 + 4);
  }
  uVar15 = (uint)uVar14;
  uVar2 = *(uint *)((longlong)param_2 + 0x14);
  if (uVar2 != uVar15) {
    if (uVar2 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      lVar6 = param_2[2];
      iVar9 = *(int *)(lVar5 + 0x1b8);
      *(uint *)(lVar5 + 0x1b8) = iVar9 + 1U;
      if (*(uint *)(lVar5 + 0x1bc) < iVar9 + 1U) {
        FUN_14017bd48(lVar5 + 0x160,iVar9);
      }
      lVar8 = lVar5 + 0x160;
      if (*(longlong *)(lVar5 + 0x1b0) != 0) {
        lVar8 = *(longlong *)(lVar5 + 0x1b0);
      }
      *(ulonglong *)(lVar8 + (longlong)iVar9 * 8) = CONCAT44(uVar2,(int)lVar6);
      *(int *)(lVar5 + 0xf0) = *(int *)(lVar5 + 0xf0) - uVar2;
    }
    if (uVar14 == 0) {
      iVar9 = -1;
    }
    else {
      lVar5 = *(longlong *)(lVar4 + 8);
      piVar1 = (int *)(lVar5 + 0xf0);
      iVar9 = *(int *)(lVar5 + 0xfc);
      lVar6 = (longlong)iVar9;
      if (iVar9 < *(int *)(lVar5 + 0x158)) {
        lVar8 = lVar5 + 0x100;
        if (*(longlong *)(lVar5 + 0x150) != 0) {
          lVar8 = *(longlong *)(lVar5 + 0x150);
        }
        iVar9 = *(int *)(lVar5 + 0x158) - iVar9;
        do {
          if ((int)uVar15 <= *(int *)(lVar8 + 4 + lVar6 * 8)) {
            if (lVar6 != -1) {
              *piVar1 = *piVar1 + uVar15;
              goto LAB_142e67a59;
            }
            break;
          }
          lVar6 = lVar6 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (*(int *)(lVar5 + 0x1b8) != 0) {
        FUN_144883418(piVar1);
        iVar9 = *(int *)(lVar5 + 0xfc);
        lVar6 = (longlong)iVar9;
        if (iVar9 < *(int *)(lVar5 + 0x158)) {
          lVar8 = lVar5 + 0x100;
          if (*(longlong *)(lVar5 + 0x150) != 0) {
            lVar8 = *(longlong *)(lVar5 + 0x150);
          }
          iVar9 = *(int *)(lVar5 + 0x158) - iVar9;
          while (*(int *)(lVar8 + 4 + lVar6 * 8) < (int)uVar15) {
            lVar6 = lVar6 + 1;
            iVar9 = iVar9 + -1;
            if (iVar9 == 0) goto LAB_142e67a2a;
          }
          *piVar1 = *piVar1 + uVar15;
          if (lVar6 == -1) goto LAB_142e67a2d;
LAB_142e67a59:
          iVar12 = (int)lVar6;
          lVar6 = (longlong)iVar12;
          iVar9 = *(int *)(lVar8 + lVar6 * 8);
          *(uint *)(lVar8 + lVar6 * 8) = iVar9 + uVar15;
          piVar1 = (int *)(lVar8 + 4 + lVar6 * 8);
          *piVar1 = *piVar1 - uVar15;
          if ((*piVar1 == 0) && (*(int *)(lVar5 + 0xfc) == iVar12)) {
            *(int *)(lVar5 + 0xfc) = iVar12 + 1;
          }
          goto LAB_142e67a86;
        }
      }
LAB_142e67a2a:
      *piVar1 = *piVar1 + uVar15;
LAB_142e67a2d:
      iVar9 = *(int *)(lVar5 + 0xf4);
      iVar12 = iVar9 + uVar15;
      *(int *)(lVar5 + 0xf4) = iVar12;
      iVar13 = *(int *)(lVar5 + 0xf8);
      if (*(int *)(lVar5 + 0xf8) < iVar12) {
        iVar13 = iVar12;
      }
      *(int *)(lVar5 + 0xf8) = iVar13;
    }
LAB_142e67a86:
    *(int *)(param_2 + 2) = iVar9;
    *(uint *)((longlong)param_2 + 0x14) = uVar15;
    bVar11 = 1;
    if (*(char *)(lVar4 + 0x41) != '\0') {
      bVar11 = bVar10;
    }
    bVar10 = bVar11;
    uVar15 = (uint)*(ushort *)(param_2 + 4);
  }
  iVar13 = *(byte *)((longlong)param_2 + 0x23) * uVar15;
  iVar12 = iVar13 * 2;
  iVar9 = *(int *)((longlong)param_2 + 0x1c);
  if ((bVar10 == 0) && (bVar11 = bVar10, iVar12 == iVar9)) goto LAB_142e67bfb;
  if (iVar9 != 0) {
    lVar5 = *(longlong *)(lVar4 + 8);
    lVar6 = param_2[3];
    iVar7 = *(int *)(lVar5 + 0x290);
    *(uint *)(lVar5 + 0x290) = iVar7 + 1U;
    if (*(uint *)(lVar5 + 0x294) < iVar7 + 1U) {
      FUN_14017bd48(lVar5 + 0x238,iVar7);
    }
    lVar8 = lVar5 + 0x238;
    if (*(longlong *)(lVar5 + 0x288) != 0) {
      lVar8 = *(longlong *)(lVar5 + 0x288);
    }
    *(ulonglong *)(lVar8 + (longlong)iVar7 * 8) = CONCAT44(iVar9,(int)lVar6);
    *(int *)(lVar5 + 0x1c8) = *(int *)(lVar5 + 0x1c8) - iVar9;
  }
  if (iVar13 == 0) {
    iVar9 = -1;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 8);
    piVar1 = (int *)(lVar5 + 0x1c8);
    iVar9 = *(int *)(lVar5 + 0x1d4);
    lVar6 = (longlong)iVar9;
    if (iVar9 < *(int *)(lVar5 + 0x230)) {
      lVar8 = lVar5 + 0x1d8;
      if (*(longlong *)(lVar5 + 0x228) != 0) {
        lVar8 = *(longlong *)(lVar5 + 0x228);
      }
      iVar9 = *(int *)(lVar5 + 0x230) - iVar9;
      do {
        if (iVar12 <= *(int *)(lVar8 + 4 + lVar6 * 8)) {
          if (lVar6 != -1) {
            *piVar1 = *piVar1 + iVar12;
            goto LAB_142e67bb6;
          }
          break;
        }
        lVar6 = lVar6 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (*(int *)(lVar5 + 0x290) != 0) {
      FUN_144883418(piVar1);
      iVar9 = *(int *)(lVar5 + 0x1d4);
      lVar6 = (longlong)iVar9;
      if (iVar9 < *(int *)(lVar5 + 0x230)) {
        lVar8 = lVar5 + 0x1d8;
        if (*(longlong *)(lVar5 + 0x228) != 0) {
          lVar8 = *(longlong *)(lVar5 + 0x228);
        }
        iVar9 = *(int *)(lVar5 + 0x230) - iVar9;
        while (*(int *)(lVar8 + 4 + lVar6 * 8) < iVar12) {
          lVar6 = lVar6 + 1;
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) goto LAB_142e67b87;
        }
        *piVar1 = *piVar1 + iVar12;
        if (lVar6 == -1) goto LAB_142e67b8a;
LAB_142e67bb6:
        iVar7 = (int)lVar6;
        lVar6 = (longlong)iVar7;
        iVar9 = *(int *)(lVar8 + lVar6 * 8);
        *(int *)(lVar8 + lVar6 * 8) = iVar9 + iVar12;
        piVar1 = (int *)(lVar8 + 4 + lVar6 * 8);
        *piVar1 = *piVar1 + iVar13 * -2;
        if ((*piVar1 == 0) && (*(int *)(lVar5 + 0x1d4) == iVar7)) {
          *(int *)(lVar5 + 0x1d4) = iVar7 + 1;
        }
        goto LAB_142e67be3;
      }
    }
LAB_142e67b87:
    *piVar1 = *piVar1 + iVar12;
LAB_142e67b8a:
    iVar9 = *(int *)(lVar5 + 0x1cc);
    iVar7 = iVar9 + iVar12;
    *(int *)(lVar5 + 0x1cc) = iVar7;
    iVar13 = *(int *)(lVar5 + 0x1d0);
    if (*(int *)(lVar5 + 0x1d0) < iVar7) {
      iVar13 = iVar7;
    }
    *(int *)(lVar5 + 0x1d0) = iVar13;
  }
LAB_142e67be3:
  *(int *)(param_2 + 3) = iVar9;
  *(int *)((longlong)param_2 + 0x1c) = iVar12;
  bVar11 = 1;
  if (*(char *)(lVar4 + 0x41) != '\0') {
    bVar11 = bVar10;
  }
LAB_142e67bfb:
  if (bVar11 != 0) {
    uVar3 = *(undefined4 *)(*param_2 + 0x15c);
    iVar9 = *(int *)(lVar4 + 0x38);
    *(uint *)(lVar4 + 0x38) = iVar9 + 1U;
    if (*(uint *)(lVar4 + 0x3c) < iVar9 + 1U) {
      FUN_144a78748((longlong *)(lVar4 + 0x30),iVar9);
    }
    *(undefined4 *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar9 * 4) = uVar3;
  }
  return;
}



// FUNCTION 142e67d58 FUN_142e67d58 body=547 status=ok
// SIG undefined FUN_142e67d58(void)

longlong * FUN_142e67d58(longlong *param_1,int param_2)

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



// FUNCTION 142e67f88 FUN_142e67f88 body=110 status=ok
// SIG undefined FUN_142e67f88(void)

undefined8 * FUN_142e67f88(undefined8 *param_1,int param_2)

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



// FUNCTION 142e67ff6 FUN_142e67ff6 body=547 status=ok
// SIG undefined FUN_142e67ff6(void)

longlong * FUN_142e67ff6(longlong *param_1,int param_2)

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



// FUNCTION 142e68226 FUN_142e68226 body=110 status=ok
// SIG undefined FUN_142e68226(void)

undefined8 * FUN_142e68226(undefined8 *param_1,int param_2)

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



// FUNCTION 142e68294 FUN_142e68294 body=547 status=ok
// SIG undefined FUN_142e68294(void)

longlong * FUN_142e68294(longlong *param_1,int param_2)

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



// FUNCTION 142e684c4 FUN_142e684c4 body=110 status=ok
// SIG undefined FUN_142e684c4(void)

undefined8 * FUN_142e684c4(undefined8 *param_1,int param_2)

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



// FUNCTION 142e68532 FUN_142e68532 body=547 status=ok
// SIG undefined FUN_142e68532(void)

longlong * FUN_142e68532(longlong *param_1,int param_2)

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



// FUNCTION 142e68762 FUN_142e68762 body=110 status=ok
// SIG undefined FUN_142e68762(void)

undefined8 * FUN_142e68762(undefined8 *param_1,int param_2)

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



// FUNCTION 142e687dc FUN_142e687dc body=481 status=ok
// SIG undefined FUN_142e687dc(void)

void FUN_142e687dc(longlong param_1,ulonglong *param_2)

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
  FUN_14726e106(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e689be FUN_142e689be body=232 status=ok
// SIG undefined FUN_142e689be(void)

void FUN_142e689be(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e68aa6 FUN_142e68aa6 body=81 status=ok
// SIG undefined FUN_142e68aa6(void)

void FUN_142e68aa6(undefined8 param_1,longlong *param_2)

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
  FUN_14726e1a9(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e68af8 FUN_142e68af8 body=14 status=ok
// SIG undefined FUN_142e68af8(void)

void FUN_142e68af8(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_142e68b06();
  return;
}



// FUNCTION 142e68b06 FUN_142e68b06 body=453 status=ok
// SIG undefined FUN_142e68b06(void)

void FUN_142e68b06(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0xc);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142e68c24:
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
LAB_142e68c61:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xc;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142e68b5f;
LAB_142e68b54:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142e68b5f:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x154e) goto code_r0x000142e68b8b;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 3 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142e68be1:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142e68c61;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142e68c24;
code_r0x000142e68b8b:
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
      goto LAB_142e68be1;
    }
  }
  goto LAB_142e68b54;
}



// FUNCTION 142e68ccc FUN_142e68ccc body=85 status=ok
// SIG undefined FUN_142e68ccc(void)

void FUN_142e68ccc(longlong param_1,int param_2)

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
    FUN_142e68b06();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 142e68d28 FUN_142e68d28 body=481 status=ok
// SIG undefined FUN_142e68d28(void)

void FUN_142e68d28(longlong param_1,ulonglong *param_2)

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
  FUN_14726e53c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e68f0a FUN_142e68f0a body=232 status=ok
// SIG undefined FUN_142e68f0a(void)

void FUN_142e68f0a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e68ff2 FUN_142e68ff2 body=81 status=ok
// SIG undefined FUN_142e68ff2(void)

void FUN_142e68ff2(undefined8 param_1,longlong *param_2)

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
  FUN_14726e5df(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e69044 FUN_142e69044 body=481 status=ok
// SIG undefined FUN_142e69044(void)

void FUN_142e69044(longlong param_1,ulonglong *param_2)

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
  FUN_14726e91c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e69226 FUN_142e69226 body=232 status=ok
// SIG undefined FUN_142e69226(void)

void FUN_142e69226(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e6930e FUN_142e6930e body=81 status=ok
// SIG undefined FUN_142e6930e(void)

void FUN_142e6930e(undefined8 param_1,longlong *param_2)

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
  FUN_14726e9bf(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e69360 FUN_142e69360 body=450 status=ok
// SIG undefined FUN_142e69360(void)

void FUN_142e69360(longlong param_1,ulonglong *param_2)

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
  FUN_14726eeca(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e69523 FUN_142e69523 body=81 status=ok
// SIG undefined FUN_142e69523(void)

void FUN_142e69523(undefined8 param_1,longlong *param_2)

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
  FUN_14726efc5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e69574 FUN_142e69574 body=229 status=ok
// SIG undefined FUN_142e69574(void)

void FUN_142e69574(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca1ba30,param_3);
  return;
}



// FUNCTION 142e6965a FUN_142e6965a body=469 status=ok
// SIG undefined FUN_142e6965a(void)

void FUN_142e6965a(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
LAB_142e6978a:
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
LAB_142e697c7:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142e696c4;
LAB_142e696b9:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142e696c4:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x000142e696f1;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142e69747:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142e697c7;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142e6978a;
code_r0x000142e696f1:
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
      goto LAB_142e69747;
    }
  }
  goto LAB_142e696b9;
}



// FUNCTION 142e69830 FUN_142e69830 body=258 status=ok
// SIG undefined FUN_142e69830(void)

undefined8 * FUN_142e69830(longlong *param_1)

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
  if (puVar3 != (uint *)0x0) goto LAB_142e69866;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_142e69866:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 0x2e <= puVar3 + 0x4000) break;
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
      if (puVar6 + 0x2e <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_142e698e2;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142e698e2:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 0x2f;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x170;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a2a1368;
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



// FUNCTION 142e69932 FUN_142e69932 body=99 status=ok
// SIG undefined FUN_142e69932(void)

void FUN_142e69932(longlong *param_1)

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



// FUNCTION 142e69996 FUN_142e69996 body=99 status=ok
// SIG undefined FUN_142e69996(void)

void FUN_142e69996(longlong *param_1)

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



// FUNCTION 142e699fa FUN_142e699fa body=469 status=ok
// SIG undefined FUN_142e699fa(void)

void FUN_142e699fa(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
LAB_142e69b2a:
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
LAB_142e69b67:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142e69a64;
LAB_142e69a59:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142e69a64:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xff99) goto code_r0x000142e69a91;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x68,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x68;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142e69ae7:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142e69b67;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142e69b2a;
code_r0x000142e69a91:
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
      goto LAB_142e69ae7;
    }
  }
  goto LAB_142e69a59;
}



// FUNCTION 142e69bd0 FUN_142e69bd0 body=547 status=ok
// SIG undefined FUN_142e69bd0(void)

longlong * FUN_142e69bd0(longlong *param_1,int param_2)

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



// FUNCTION 142e69df4 FUN_142e69df4 body=3561 status=ok
// SIG undefined FUN_142e69df4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e69df4(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  ushort *puVar3;
  float *pfVar4;
  uint *puVar5;
  undefined1 (*pauVar6) [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  ushort uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  ushort uVar22;
  float fVar23;
  float fVar24;
  byte bVar25;
  int iVar26;
  ushort *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  byte bVar30;
  ulonglong uVar31;
  void *pvVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  longlong lVar36;
  uint uVar37;
  longlong lVar38;
  double *pdVar39;
  uint uVar40;
  int iVar41;
  longlong lVar42;
  longlong lVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  float fVar56;
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auStack_1b8 [40];
  ulonglong local_190;
  longlong local_188;
  int local_17c;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  double local_160;
  double local_158;
  double local_150;
  ulonglong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  float local_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [4];
  undefined4 local_f4;
  ulonglong local_f0;
  double dVar15;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar17 = *(longlong *)(param_1 + 0xa8);
  FUN_14726f710(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                *(undefined8 *)(param_1 + 0xc0));
  lVar36 = *(longlong *)(param_1 + 0xb0);
  uVar37 = *(uint *)(lVar17 + 0x130);
  uVar31 = (ulonglong)uVar37;
  if (uVar37 != *(uint *)(lVar17 + 0x160)) {
    uVar34 = 0;
    do {
      uVar35 = uVar34;
      if (uVar37 == uVar35) goto LAB_142e69ebc;
      uVar34 = uVar35 + 1;
    } while (SBORROW4(0,*(int *)(*(longlong *)(lVar17 + 0x138) + (longlong)(int)uVar35 * 4)));
    if (uVar37 + 1 != uVar35 + 1) {
      local_130 = lVar36 + 0x38;
      local_190 = uVar31;
      local_178 = param_1;
LAB_142e69fcd:
      lVar2 = *(longlong *)(lVar17 + 0x128) + (longlong)(int)uVar35 * 0x48;
      lVar28 = *(longlong *)(lVar17 + 0x128) + (longlong)(int)uVar35 * 0x48;
      puVar27 = *(ushort **)(lVar28 + 0x18);
      if (*(ushort **)(lVar28 + 0x18) == (ushort *)0x0) {
        puVar27 = (ushort *)(lVar28 + 0x10);
      }
      if ((longlong)*(int *)(lVar28 + 0x20) != 0) {
        uVar37 = *(uint *)(lVar36 + 0x150);
        puVar3 = puVar27 + (longlong)*(int *)(lVar28 + 0x20) * 2;
        do {
          uVar16 = *puVar27;
          uVar34 = ~(uint)uVar16 + uVar37;
          if (uVar16 <= uVar37 && uVar37 != uVar16) {
            uVar34 = (uint)uVar16;
          }
          uVar16 = puVar27[1];
          if (uVar16 == 0xffff) {
            bVar30 = 1;
          }
          else {
            uVar22 = ~uVar16 + (short)uVar37;
            if (uVar16 < uVar37) {
              uVar22 = uVar16;
            }
            bVar30 = *(byte *)(*(longlong *)(lVar36 + 0x18) + (ulonglong)uVar22);
          }
          if (((bVar30 & 1) == 0) ||
             ((*(byte *)(*(longlong *)(lVar36 + 0x18) + (ulonglong)(uVar34 & 0xffff)) & 1) == 0))
          goto LAB_142e6a0a3;
          puVar27 = puVar27 + 2;
        } while (puVar27 != puVar3);
      }
      lVar43 = lVar2 + 0x28;
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        lVar43 = *(longlong *)(lVar2 + 0x30);
      }
      bVar30 = 1;
      if ((longlong)*(int *)(lVar2 + 0x38) != 0) {
        lVar33 = 0;
        do {
          if ((*(byte *)(*(longlong *)(lVar36 + 0x28) + (ulonglong)*(ushort *)(lVar43 + lVar33)) & 1
              ) == 0) goto LAB_142e6a0a3;
          lVar33 = lVar33 + 2;
        } while ((longlong)*(int *)(lVar2 + 0x38) * 2 != lVar33);
      }
      goto LAB_142e6a0d4;
    }
  }
LAB_142e69ebc:
  *(undefined4 *)(lVar36 + 0x138) = *(undefined4 *)(lVar36 + 0x150);
  bVar30 = *(byte *)(lVar36 + 0x15c) >> 1 & 1;
  *(byte *)(lVar36 + 0x14c) = bVar30;
  *(byte *)(lVar36 + 0x14d) = *(byte *)(lVar36 + 0x15c) >> 2 & 1;
  if (bVar30 != 0) {
    pvVar1 = (void *)(lVar36 + 0x98);
    *(int *)(lVar36 + 0xb0) = *(int *)(lVar36 + 0x20);
    uVar37 = *(int *)(lVar36 + 0x20) + 0x1f;
    if (0x1f < uVar37) {
      uVar34 = uVar37 >> 5;
      if (*(int *)(lVar36 + 0xb4) + 0x1fU >> 5 < uVar34) {
        if ((0x9f < uVar37) || (*(longlong *)(lVar36 + 0xa8) != 0)) {
          uVar35 = 0;
          if (0x9f < uVar37) {
            uVar35 = uVar34;
          }
          FUN_1446efa72(lVar36 + 0xa8,0,uVar35,4);
        }
        *(uint *)(lVar36 + 0xb4) = uVar37 & 0xffffffe0;
      }
      pvVar32 = *(void **)(lVar36 + 0xa8);
      if (*(void **)(lVar36 + 0xa8) == (void *)0x0) {
        pvVar32 = pvVar1;
      }
      if (uVar37 < 0x120) {
        uVar34 = uVar37 >> 3 & 0x3c;
      }
      else {
        uVar34 = uVar34 << 2;
      }
      memset(pvVar32,0,(ulonglong)uVar34);
      iVar41 = *(int *)(lVar36 + 0xb0);
      iVar26 = iVar41 + 0x1f;
      if (-1 < iVar41) {
        iVar26 = iVar41;
      }
      if (iVar41 % 0x20 != 0) {
        pvVar32 = *(void **)(lVar36 + 0xa8);
        if (*(void **)(lVar36 + 0xa8) == (void *)0x0) {
          pvVar32 = pvVar1;
        }
        bVar30 = -(char)(iVar41 % 0x20);
        *(uint *)((longlong)pvVar32 + (longlong)(iVar26 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar32 + (longlong)(iVar26 >> 5) * 4) << (bVar30 & 0x1f)) >>
             (bVar30 & 0x1f);
      }
    }
    if (0 < *(int *)(lVar36 + 0x20)) {
      uVar31 = 0;
      do {
        if ((*(byte *)(*(longlong *)(lVar36 + 0x18) + uVar31) & 1) != 0) {
          pvVar32 = *(void **)(lVar36 + 0xa8);
          if (*(void **)(lVar36 + 0xa8) == (void *)0x0) {
            pvVar32 = pvVar1;
          }
          puVar5 = (uint *)((longlong)pvVar32 + (uVar31 >> 5 & 0x7ffffff) * 4);
          *puVar5 = *puVar5 | 1 << ((byte)uVar31 & 0x1f);
          *(int *)(lVar36 + 0x144) = *(int *)(lVar36 + 0x144) + 1;
        }
        uVar31 = uVar31 + 1;
      } while ((longlong)uVar31 < (longlong)*(int *)(lVar36 + 0x20));
    }
  }
  if (*(char *)(lVar36 + 0x14d) == '\x01') {
    pvVar1 = (void *)(lVar36 + 0xb8);
    *(int *)(lVar36 + 0xd0) = *(int *)(lVar36 + 0x30);
    uVar37 = *(int *)(lVar36 + 0x30) + 0x1f;
    if (0x1f < uVar37) {
      uVar34 = uVar37 >> 5;
      if (*(int *)(lVar36 + 0xd4) + 0x1fU >> 5 < uVar34) {
        if ((0x9f < uVar37) || (*(longlong *)(lVar36 + 200) != 0)) {
          uVar35 = 0;
          if (0x9f < uVar37) {
            uVar35 = uVar34;
          }
          FUN_1446efa72(lVar36 + 200,0,uVar35,4);
        }
        *(uint *)(lVar36 + 0xd4) = uVar37 & 0xffffffe0;
      }
      pvVar32 = *(void **)(lVar36 + 200);
      if (*(void **)(lVar36 + 200) == (void *)0x0) {
        pvVar32 = pvVar1;
      }
      if (uVar37 < 0x120) {
        uVar34 = uVar37 >> 3 & 0x3c;
      }
      else {
        uVar34 = uVar34 << 2;
      }
      memset(pvVar32,0,(ulonglong)uVar34);
      iVar41 = *(int *)(lVar36 + 0xd0);
      iVar26 = iVar41 + 0x1f;
      if (-1 < iVar41) {
        iVar26 = iVar41;
      }
      if (iVar41 % 0x20 != 0) {
        pvVar32 = *(void **)(lVar36 + 200);
        if (*(void **)(lVar36 + 200) == (void *)0x0) {
          pvVar32 = pvVar1;
        }
        bVar30 = -(char)(iVar41 % 0x20);
        *(uint *)((longlong)pvVar32 + (longlong)(iVar26 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar32 + (longlong)(iVar26 >> 5) * 4) << (bVar30 & 0x1f)) >>
             (bVar30 & 0x1f);
      }
    }
    if (0 < *(int *)(lVar36 + 0x30)) {
      uVar31 = 0;
      do {
        if ((*(byte *)(*(longlong *)(lVar36 + 0x28) + uVar31) & 1) != 0) {
          pvVar32 = *(void **)(lVar36 + 200);
          if (*(void **)(lVar36 + 200) == (void *)0x0) {
            pvVar32 = pvVar1;
          }
          puVar5 = (uint *)((longlong)pvVar32 + (uVar31 >> 5 & 0x7ffffff) * 4);
          *puVar5 = *puVar5 | 1 << ((byte)uVar31 & 0x1f);
          *(int *)(lVar36 + 0x148) = *(int *)(lVar36 + 0x148) + 1;
        }
        uVar31 = uVar31 + 1;
      } while ((longlong)uVar31 < (longlong)*(int *)(lVar36 + 0x30));
    }
    *(undefined4 *)(lVar36 + 0x140) = *(undefined4 *)(lVar36 + 0x158);
  }
  *(undefined4 *)(lVar36 + 0x13c) = *(undefined4 *)(lVar36 + 0x154);
  FUN_14726f8c6(lVar36 + 0xd8,lVar36 + 0x38);
  *(byte *)(lVar36 + 0x15c) = *(byte *)(lVar36 + 0x15c) | 1;
  FUN_144b0f6c2(*(undefined8 *)(lVar36 + 8),*(undefined4 *)(lVar36 + 0x10));
  *(undefined4 *)(lVar36 + 0x10) = 0;
  if (*(int *)(lVar36 + 0x14) != 0) {
    FUN_14726f9d0(lVar36 + 8);
  }
  *(undefined4 *)(lVar36 + 0x20) = 0;
  if (*(int *)(lVar36 + 0x24) != 0) {
    FUN_14726f9f0(lVar36 + 0x18);
  }
  *(undefined4 *)(lVar36 + 0x30) = 0;
  if (*(int *)(lVar36 + 0x34) != 0) {
    FUN_14726f9f0(lVar36 + 0x28);
  }
  FUN_14726f914(lVar36 + 0x38);
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142e6a0a3:
  lVar43 = *(longlong *)(lVar2 + 8);
  if ((*(longlong *)(lVar43 + 8) != 0) && (*(longlong *)(lVar43 + 0x148) != 0)) {
    uVar37 = *(uint *)(lVar43 + 0x158);
    uVar34 = ~uVar37;
    if ((uVar34 & 0x7fffffff) != 0) {
      if (DAT_14c7608b4 == 0) {
LAB_142e6a33d:
        if (((DAT_14ca1ae08 == 0) || (lVar43 = FUN_14499c118(), uVar31 = local_190, lVar43 == 0)) ||
           ((*(byte *)(lVar43 + 0x11a) & 1) != 0)) {
LAB_142e6a362:
          bVar25 = *(byte *)(lVar36 + 0x15c);
          if ((bVar25 & 2) != 0) {
            puVar27 = (ushort *)(lVar28 + 0x10);
            if (*(ushort **)(lVar2 + 0x18) != (ushort *)0x0) {
              puVar27 = *(ushort **)(lVar2 + 0x18);
            }
            if ((longlong)*(int *)(lVar2 + 0x20) != 0) {
              puVar3 = puVar27 + (longlong)*(int *)(lVar2 + 0x20) * 2;
              do {
                uVar16 = *puVar27;
                uVar37 = *(uint *)(lVar36 + 0x150);
                uVar34 = ~(uint)uVar16 + uVar37;
                if (uVar16 <= uVar37 && uVar37 != uVar16) {
                  uVar34 = (uint)uVar16;
                }
                LOCK();
                *(undefined1 *)(*(longlong *)(lVar36 + 0x18) + (ulonglong)(uVar34 & 0xffff)) = 1;
                UNLOCK();
                uVar16 = puVar27[1];
                if (uVar16 != 0xffff) {
                  uVar37 = ~(uint)uVar16 + *(uint *)(lVar36 + 0x150);
                  if ((uint)uVar16 < *(uint *)(lVar36 + 0x150)) {
                    uVar37 = (uint)uVar16;
                  }
                  LOCK();
                  *(undefined1 *)(*(longlong *)(lVar36 + 0x18) + ((ulonglong)uVar37 & 0xffff)) = 1;
                  UNLOCK();
                }
                puVar27 = puVar27 + 2;
              } while (puVar27 != puVar3);
              bVar25 = *(byte *)(lVar36 + 0x15c);
            }
          }
          bVar30 = 1;
          if ((bVar25 & 4) != 0) {
            lVar28 = lVar2 + 0x28;
            if (*(longlong *)(lVar2 + 0x30) != 0) {
              lVar28 = *(longlong *)(lVar2 + 0x30);
            }
            iVar41 = *(int *)(lVar2 + 0x38);
            if ((longlong)iVar41 != 0) {
              lVar43 = 0;
              do {
                LOCK();
                *(undefined1 *)
                 (*(longlong *)(lVar36 + 0x28) + (ulonglong)*(ushort *)(lVar28 + lVar43)) = 1;
                UNLOCK();
                bVar30 = 1;
                lVar43 = lVar43 + 2;
              } while ((longlong)iVar41 * 2 != lVar43);
            }
          }
          goto LAB_142e6a0d4;
        }
        local_140 = (longlong)*(int *)(lVar43 + 0xd8);
        if (0 < local_140) {
          local_17c = *(int *)(lVar43 + 0x68) + -1;
          lVar33 = lVar43 + 0x48;
          if (*(longlong *)(lVar43 + 0x60) != 0) {
            lVar33 = *(longlong *)(lVar43 + 0x60);
          }
          local_148 = *(ulonglong *)(lVar43 + 0xd0);
          local_150 = *(double *)(lVar43 + 0x30);
          local_158 = *(double *)(lVar43 + 0x38);
          local_160 = *(double *)(lVar43 + 0x40);
          local_168 = *(longlong *)(lVar36 + 8);
          local_170 = (longlong)*(int *)(lVar36 + 0x10);
          local_138 = local_170 * 0x200 + local_168;
          local_188 = 0;
          do {
            if (*(int *)(lVar36 + 0x10) != 0) {
              iVar41 = local_17c;
              if ((int)local_188 < local_17c) {
                iVar41 = (int)local_188;
              }
              lVar43 = (longlong)iVar41;
              fVar7 = *(float *)(lVar33 + 0x14 + lVar43 * 0x18);
              fVar8 = *(float *)(lVar33 + 8 + lVar43 * 0x18);
              fVar44 = (fVar7 - fVar8) * 0.5;
              lVar42 = local_188 * 0x30;
              pfVar4 = (float *)(local_148 + lVar42);
              local_118 = *pfVar4;
              fStack_114 = pfVar4[1];
              fStack_110 = pfVar4[2];
              fStack_10c = pfVar4[3];
              pfVar4 = (float *)(local_148 + 0xc + lVar42);
              local_108 = *pfVar4;
              fStack_104 = pfVar4[1];
              fStack_100 = pfVar4[2];
              fStack_fc = pfVar4[3];
              fVar9 = *(float *)(lVar33 + 0xc + lVar43 * 0x18);
              fVar10 = *(float *)(lVar33 + lVar43 * 0x18);
              fVar11 = *(float *)(lVar33 + 4 + lVar43 * 0x18);
              fVar12 = *(float *)(lVar33 + 0x10 + lVar43 * 0x18);
              auVar55 = insertps(ZEXT416((uint)((fVar9 - fVar10) * 0.5)),
                                 ZEXT416((uint)((fVar12 - fVar11) * 0.5)),0x10);
              fVar18 = auVar55._0_4_;
              fVar19 = auVar55._4_4_;
              pauVar6 = (undefined1 (*) [16])(local_148 + 0x18 + lVar42);
              local_128 = *(float *)*pauVar6;
              fStack_124 = *(float *)(*pauVar6 + 4);
              uStack_120 = *(undefined4 *)(*pauVar6 + 8);
              uStack_11c = *(undefined4 *)(*pauVar6 + 0xc);
              fVar24 = ABS(fVar19 * local_108) + ABS(fVar18 * local_118) + ABS(fVar44 * local_128);
              fVar23 = ABS(fVar19 * fStack_104) + ABS(fVar18 * fStack_114) +
                       ABS(fVar44 * fStack_124);
              fVar56 = (fVar8 + fVar7) * 0.5;
              auVar55 = insertps(ZEXT416((uint)((fVar10 + fVar9) * 0.5)),
                                 ZEXT416((uint)((fVar11 + fVar12) * 0.5)),0x10);
              fVar7 = auVar55._0_4_;
              fVar8 = auVar55._4_4_;
              auVar53._4_4_ = uStack_11c;
              auVar53._0_4_ = uStack_11c;
              auVar53._8_4_ = uStack_11c;
              auVar53._12_4_ = uStack_11c;
              auVar55 = insertps(auVar53,*(undefined4 *)(local_148 + 0x28 + lVar42),0x10);
              fVar10 = auVar55._0_4_ + local_108 * fVar8 + local_118 * fVar7 + local_128 * fVar56;
              fVar9 = auVar55._4_4_ + fStack_104 * fVar8 + fStack_114 * fVar7 + fStack_124 * fVar56;
              auVar48._0_4_ = fVar24 + fVar10;
              auVar48._4_4_ = fVar23;
              auVar48._8_8_ = 0;
              auVar52._0_4_ = fVar9 - fVar23;
              auVar52._4_4_ = fVar9;
              auVar52._8_8_ = 0;
              dVar57 = (double)(fVar10 - fVar24);
              dVar13 = ((double)auVar48._0_4_ - dVar57) * 0.5;
              auVar47._0_8_ = ((double)(fVar23 + fVar9) - (double)auVar52._0_4_) * 0.5;
              auVar47._8_8_ = 0;
              auVar49 = insertps(auVar48,fStack_110,0xe);
              auVar55 = insertps(auVar47,fStack_100,0xe);
              auVar53 = insertps(auVar52,*pauVar6,0x8e);
              fVar9 = ABS(fVar19 * auVar55._0_4_) + ABS(fVar18 * auVar49._0_4_) +
                      ABS(fVar44 * auVar53._0_4_);
              dVar58 = dVar57 + dVar13 + local_150;
              dVar57 = (double)auVar52._0_4_ + auVar47._0_8_ + local_158;
              auVar50 = blendps(ZEXT416(*(uint *)(local_148 + 0x2c + lVar42)),_DAT_149932340,0xe);
              fVar7 = auVar50._0_4_ +
                      fVar8 * auVar55._0_4_ + fVar7 * auVar49._0_4_ + fVar56 * auVar53._0_4_;
              dVar45 = (double)(fVar7 - fVar9);
              dVar51 = ((double)(fVar9 + fVar7) - dVar45) * 0.5;
              dVar46 = dVar45 + dVar51 + local_160;
              dVar13 = ABS(dVar13);
              dVar45 = ABS(auVar47._0_8_);
              uVar29 = local_148;
              lVar43 = local_168;
              do {
                if (*(int *)(lVar43 + 0x1f0) < 1) goto LAB_142e6a362;
                pdVar39 = (double *)(lVar43 + 0xe0);
                if (*(double **)(lVar43 + 0x1e0) != (double *)0x0) {
                  pdVar39 = *(double **)(lVar43 + 0x1e0);
                }
                iVar41 = 0;
                while( true ) {
                  lVar42 = -(ulonglong)
                            (ABS(pdVar39[9] * dVar51) +
                             ABS(pdVar39[5]) * dVar45 + ABS(pdVar39[1]) * dVar13 <
                            (dVar46 * pdVar39[9] + dVar57 * pdVar39[5] + dVar58 * pdVar39[1]) -
                            pdVar39[0xd]);
                  auVar59._8_8_ =
                       -(ulonglong)
                        (ABS(pdVar39[0xb] * dVar51) +
                         ABS(pdVar39[7]) * dVar45 + ABS(pdVar39[3]) * dVar13 <
                        (dVar46 * pdVar39[0xb] + dVar57 * pdVar39[7] + dVar58 * pdVar39[3]) -
                        pdVar39[0xf]);
                  auVar59._0_8_ =
                       -(ulonglong)
                        (ABS(pdVar39[10] * dVar51) +
                         ABS(pdVar39[6]) * dVar45 + ABS(pdVar39[2]) * dVar13 <
                        (dVar46 * pdVar39[10] + dVar57 * pdVar39[6] + dVar58 * pdVar39[2]) -
                        pdVar39[0xe]);
                  auVar21._8_4_ = (int)lVar42;
                  auVar21._0_8_ =
                       -(ulonglong)
                        (ABS(pdVar39[8] * dVar51) +
                         ABS(pdVar39[4]) * dVar45 + ABS(*pdVar39) * dVar13 <
                        (dVar46 * pdVar39[8] + dVar57 * pdVar39[4] + dVar58 * *pdVar39) -
                        pdVar39[0xc]);
                  auVar21._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
                  uVar37 = movmskpd((int)local_190,auVar21);
                  iVar26 = movmskpd((int)uVar29,auVar59);
                  uVar37 = iVar26 << 2 | uVar37;
                  uVar29 = (ulonglong)uVar37;
                  if (uVar37 != 0) break;
                  pdVar39 = pdVar39 + 0x10;
                  iVar41 = iVar41 + 4;
                  if (*(int *)(lVar43 + 0x1f0) <= iVar41) goto LAB_142e6a362;
                }
                lVar43 = lVar43 + 0x200;
              } while (lVar43 != local_138);
            }
            local_188 = local_188 + 1;
            bVar30 = 0;
          } while (local_188 != local_140);
          goto LAB_142e6a0d4;
        }
      }
      else if ((longlong)*(int *)(lVar36 + 0x10) != 0) {
        lVar33 = *(longlong *)(lVar36 + 8);
        lVar42 = (longlong)*(int *)(lVar36 + 0x10) * 0x200 + lVar33;
        uVar40 = uVar37 + 0x3ff;
        if (-1 < (int)uVar37) {
          uVar40 = uVar37;
        }
        lVar43 = **(longlong **)
                   (*(longlong *)(*(longlong *)(lVar43 + 0x148) + 0x3368) +
                   (longlong)((int)uVar40 >> 10) * 8);
        lVar38 = (longlong)((int)uVar37 % 0x400);
        pdVar39 = (double *)(lVar43 + lVar38 * 0x48);
        dVar13 = *pdVar39;
        dVar57 = *pdVar39;
        pdVar39 = (double *)(lVar43 + 8 + lVar38 * 0x48);
        dVar46 = *pdVar39;
        dVar45 = *pdVar39;
        pdVar39 = (double *)(lVar43 + 0x10 + lVar38 * 0x48);
        dVar51 = *pdVar39;
        dVar58 = *pdVar39;
        auVar55 = *(undefined1 (*) [16])(lVar43 + 0x18 + lVar38 * 0x48) & _DAT_149931180;
        dVar54 = auVar55._0_8_;
        auVar55._0_8_ = auVar55._8_8_;
        pdVar39 = (double *)(lVar43 + 0x28 + lVar38 * 0x48);
        dVar14 = *pdVar39;
        dVar15 = *pdVar39;
        do {
          uVar31 = local_190;
          if (*(int *)(lVar33 + 0x1f0) < 1) goto LAB_142e6a33d;
          pdVar39 = (double *)(lVar33 + 0xe0);
          if (*(double **)(lVar33 + 0x1e0) != (double *)0x0) {
            pdVar39 = *(double **)(lVar33 + 0x1e0);
          }
          iVar41 = 0;
          while( true ) {
            uVar29 = DAT_149931180;
            uVar20 = DAT_149931180._8_8_;
            lVar43 = -(ulonglong)
                      ((double)((ulonglong)(pdVar39[9] * dVar15) & uVar20) +
                       (double)((ulonglong)pdVar39[5] & uVar20) * auVar55._8_8_ +
                       (double)((ulonglong)pdVar39[1] & uVar20) * dVar54 <
                      (dVar58 * pdVar39[9] + dVar45 * pdVar39[5] + dVar57 * pdVar39[1]) -
                      pdVar39[0xd]);
            auVar50._8_8_ =
                 -(ulonglong)
                  ((double)((ulonglong)(pdVar39[0xb] * dVar15) & uVar20) +
                   (double)((ulonglong)pdVar39[7] & uVar20) * auVar55._8_8_ +
                   (double)((ulonglong)pdVar39[3] & uVar20) * dVar54 <
                  (dVar58 * pdVar39[0xb] + dVar45 * pdVar39[7] + dVar57 * pdVar39[3]) - pdVar39[0xf]
                  );
            auVar50._0_8_ =
                 -(ulonglong)
                  ((double)((ulonglong)(pdVar39[10] * dVar14) & uVar29) +
                   (double)((ulonglong)pdVar39[6] & uVar29) * auVar55._0_8_ +
                   (double)((ulonglong)pdVar39[2] & uVar29) * dVar54 <
                  (dVar51 * pdVar39[10] + dVar46 * pdVar39[6] + dVar13 * pdVar39[2]) - pdVar39[0xe])
            ;
            auVar49._8_4_ = (int)lVar43;
            auVar49._0_8_ =
                 -(ulonglong)
                  ((double)((ulonglong)(pdVar39[8] * dVar14) & uVar29) +
                   (double)((ulonglong)pdVar39[4] & uVar29) * auVar55._0_8_ +
                   (double)((ulonglong)*pdVar39 & uVar29) * dVar54 <
                  (dVar51 * pdVar39[8] + dVar46 * pdVar39[4] + dVar13 * *pdVar39) - pdVar39[0xc]);
            auVar49._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
            uVar37 = movmskpd((int)local_190,auVar49);
            iVar26 = movmskpd(uVar34,auVar50);
            uVar34 = iVar26 << 2 | uVar37;
            if (uVar34 != 0) break;
            pdVar39 = pdVar39 + 0x10;
            iVar41 = iVar41 + 4;
            if (*(int *)(lVar33 + 0x1f0) <= iVar41) goto LAB_142e6a33d;
          }
          lVar33 = lVar33 + 0x200;
          bVar30 = 0;
        } while (lVar33 != lVar42);
        goto LAB_142e6a0d4;
      }
    }
  }
  bVar30 = 0;
LAB_142e6a0d4:
  if ((DAT_14c761968 != 0) && ((bVar30 & *(byte *)(lVar2 + 0x40)) == 1)) {
    local_f4 = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x158);
    FUN_1402bb130(local_130,local_f8,&local_f4,0);
    uVar31 = local_190;
  }
  uVar37 = uVar35 + 1;
  if (uVar35 + 1 < *(uint *)(lVar17 + 0x130)) {
    uVar37 = *(uint *)(lVar17 + 0x130);
  }
  do {
    uVar34 = uVar37;
    if (uVar37 - 1 == uVar35) break;
    uVar35 = uVar35 + 1;
    uVar34 = uVar35;
  } while (SBORROW4(0,*(int *)(*(longlong *)(lVar17 + 0x138) + (longlong)(int)uVar35 * 4)));
  uVar35 = uVar34;
  if (uVar35 == (uint)uVar31) goto LAB_142e6abcd;
  goto LAB_142e69fcd;
LAB_142e6abcd:
  lVar36 = *(longlong *)(local_178 + 0xb0);
  goto LAB_142e69ebc;
}



// FUNCTION 142e6abde FUN_142e6abde body=110 status=ok
// SIG undefined FUN_142e6abde(void)

undefined8 * FUN_142e6abde(undefined8 *param_1,int param_2)

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



// FUNCTION 142e6ac4c FUN_142e6ac4c body=448 status=ok
// SIG undefined FUN_142e6ac4c(void)

void FUN_142e6ac4c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  size_t _Size;
  int *piVar7;
  void *_Dst;
  
  _Size = (size_t)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(_Size,1);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142e6ad63:
      piVar7 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        if (*(longlong *)(piVar7 + 0x10) - (longlong)piVar7 == 0x10000) {
          lVar4 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar4 = FUN_145bdc178();
          }
          FUN_140028df4(lVar4,piVar7);
        }
        else {
          FUN_144705e74(piVar7);
        }
      }
    }
LAB_142e6ada0:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_142e6ac9f;
LAB_142e6ac94:
  FUN_14472e504(puVar1);
  puVar3 = (uint *)*puVar1;
LAB_142e6ac9f:
  _Dst = (void *)(*(longlong *)(puVar3 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar5 = (uint *)((longlong)_Dst + _Size);
  if (puVar3 + 0x4000 < puVar5) {
    if (param_2 < 0xffa5) goto code_r0x000142e6accb;
    puVar3 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar3 = 0xffffffff;
    puVar3[0x12] = 0;
    _Dst = (void *)((longlong)puVar3 + 0x5bU & 0xfffffffffffffffc);
    *(size_t *)(puVar3 + 0x10) = (longlong)puVar3 + _Size + 0x5c;
    *puVar3 = 1;
  }
  else {
    uVar6 = puVar3[0x12] + 1;
LAB_142e6ad21:
    *(uint **)(puVar3 + 0x10) = puVar5 + 2;
    puVar3[0x12] = uVar6;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar3;
  *(uint *)((longlong)_Dst + -4) = param_2;
  if (_Src == (void *)0x0) goto LAB_142e6ada0;
  uVar6 = *(uint *)((longlong)_Src + -4);
  if (uVar6 != 0) {
    if (uVar6 < param_2) {
      _Size = (size_t)uVar6;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142e6ad63;
code_r0x000142e6accb:
  uVar6 = puVar3[0x12];
  while( true ) {
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
    LOCK();
    uVar2 = *puVar3;
    *puVar3 = *puVar3 + uVar6 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar6) != 0xffffffff) break;
    puVar3 = (uint *)*puVar1;
    *puVar3 = 0xffffffff;
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
    puVar3[0x12] = 0;
    *puVar1 = puVar3;
    _Dst = (void *)((longlong)puVar3 + 0x5bU & 0xfffffffffffffffc);
    puVar5 = (uint *)((longlong)_Dst + _Size);
    uVar6 = 0;
    if (puVar5 <= puVar3 + 0x4000) {
      uVar6 = 1;
      goto LAB_142e6ad21;
    }
  }
  goto LAB_142e6ac94;
}



// FUNCTION 142e6ae0c FUN_142e6ae0c body=113 status=ok
// SIG undefined FUN_142e6ae0c(void)

void FUN_142e6ae0c(longlong *param_1,longlong *param_2)

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



// FUNCTION 142e6ae7e FUN_142e6ae7e body=113 status=ok
// SIG undefined FUN_142e6ae7e(void)

void FUN_142e6ae7e(longlong *param_1,longlong *param_2)

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



// FUNCTION 142e6aef0 FUN_142e6aef0 body=113 status=ok
// SIG undefined FUN_142e6aef0(void)

void FUN_142e6aef0(longlong *param_1,longlong *param_2)

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



// FUNCTION 142e6af62 FUN_142e6af62 body=481 status=ok
// SIG undefined FUN_142e6af62(void)

void FUN_142e6af62(longlong param_1,ulonglong *param_2)

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
  FUN_14727060c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e6b144 FUN_142e6b144 body=232 status=ok
// SIG undefined FUN_142e6b144(void)

void FUN_142e6b144(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e6b22c FUN_142e6b22c body=81 status=ok
// SIG undefined FUN_142e6b22c(void)

void FUN_142e6b22c(undefined8 param_1,longlong *param_2)

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
  FUN_1472706af(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e6b27e FUN_142e6b27e body=481 status=ok
// SIG undefined FUN_142e6b27e(void)

void FUN_142e6b27e(longlong param_1,ulonglong *param_2)

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
  FUN_1472709ec(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e6b460 FUN_142e6b460 body=232 status=ok
// SIG undefined FUN_142e6b460(void)

void FUN_142e6b460(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142e6b548 FUN_142e6b548 body=81 status=ok
// SIG undefined FUN_142e6b548(void)

void FUN_142e6b548(undefined8 param_1,longlong *param_2)

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
  FUN_147270a8f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e6b599 FUN_142e6b599 body=5363 status=ok
// SIG undefined FUN_142e6b599(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6b599(void)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  undefined4 local_90;
  undefined4 local_7c;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_78,&DAT_14ca19780);
  if (cVar2 == '\0') {
    _DAT_14ca19780 = 0;
    uRam000000014ca19788 = 0;
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_98._0_4_ = 4;
  FUN_141471170(&DAT_14ca19790,L"r.Nanite.AllowProgrammableDistances",&DAT_14c760840,
                L"Whether or not to allow disabling of Nanite programmable raster features (World Position Offset, Pixel Depth Offset, Masked Opaque, or Displacement) at a distance from the camera."
               );
  atexit(FUN_142e45b44);
  DAT_14ca197a0 = 1;
  uVar3 = (ulonglong)DAT_14c9c0cf0;
  DAT_14ca197a4 = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(code **)(&DAT_14cafe970 + uVar3 * 0x10) = FUN_141772568;
  (&DAT_14cafe978)[uVar3 * 2] = L"NaniteMesh";
  atexit((_func_5014 *)&LAB_142e45b89);
  local_70 = FUN_145e72520;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca198c0,&local_78);
  local_70 = FUN_145f745b0;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca199e8,&local_78);
  local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
  local_98._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca199f8,L"r.Nanite.EmitMaterialPerformanceWarnings",&local_78,
                L"Emit log and on-screen messages to warn when a Nanite material is both programmable and using either masking or pixel depth offset (PDO)."
               );
  atexit(FUN_142e45bcb);
  local_78._0_4_ = 1;
  local_98._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca19a10,L"r.Nanite.MultipleSceneViewsInOnePass",&local_78,
                L"Supports rendering multiple views (FSceneView) whenever possible. Currently only ISR stereo rendering is supported."
               );
  atexit(FUN_142e45c10);
  local_78._0_4_ = 0x1000;
  local_98._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca19a28,L"r.Nanite.MaterialBuffers.MaterialDataMinSizeBytes",&local_78,
                L"The smallest size (in bytes) of the Nanite material data buffer.");
  atexit(FUN_142e45c55);
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,0x1000);
  local_98._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca19a40,L"r.Nanite.MaterialBuffers.PrimitiveDataMinSizeBytes",&local_78,
                L"The smallest size (in bytes) of the Nanite per-primitive material data buffer.");
  atexit(FUN_142e45c9a);
  local_78._0_1_ = 1;
  local_98._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14ca19a58,L"r.Nanite.MaterialBuffers.AsyncUpdates",&local_78,
                L"When non-zero, Nanite material data buffer updates are updated asynchronously.");
  atexit(FUN_142e45cdf);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca19a70,L"r.Nanite.MaterialBuffers.ForceFullUpload",&DAT_14ca19a80,
                L"0: Do not force a full upload.\n1: Force one full upload on the next update.\n2: Force a full upload every frame."
               );
  atexit(FUN_142e45d24);
  local_78 = (undefined8 *)CONCAT71(local_78._1_7_,1);
  local_98._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14ca19a88,L"r.Nanite.MaterialBuffers.Defrag",&local_78,
                L"Whether or not to allow defragmentation of the Nanite material data buffer.");
  atexit(FUN_142e45d69);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca19aa0,L"r.Nanite.MaterialBuffers.Defrag.Force",&DAT_14ca19ab0,
                L"0: Do not force a full defrag.\n1: Force one full defrag on the next update.\n2: Force a full defrag every frame."
               );
  atexit(FUN_142e45dae);
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,0x3ec00000);
  local_98 = (undefined8 **)CONCAT44(local_98._4_4_,0x20);
  FUN_140a6b41e(&DAT_14ca19ab8,L"r.Nanite.MaterialBuffers.Defrag.LowWaterMark",&local_78,
                L"Ratio of used to allocated memory at which to decide to defrag the Nanite material data buffer."
               );
  atexit(FUN_142e45df3);
  DAT_14ca1c4f8 = 0xffffffff;
  _DAT_14ca1c4f0 = &PTR_FUN_14a2a03f8;
  if (DAT_14ca4ae08 == (undefined8 *)0x0) {
    DAT_14ca4ae08 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca4ae08 = 0;
    DAT_14ca4ae08[1] = 0;
  }
  FUN_145c269b4(DAT_14ca4ae08,&DAT_14ca1c4f0);
  local_68 = 0;
  local_58 = &PTR_LAB_14a2a05e0;
  local_50 = FUN_142e45e38;
  local_78 = (undefined8 *)&LAB_140069d7a;
  FUN_1462f2eb2(&local_78);
  atexit(FUN_142e45f5e);
  local_98._0_4_ = 0x20;
  FUN_14153156c(&DAT_14ca19b50,L"r.RayTracing.Nanite.Update",&DAT_14c760844,
                L"Whether to process Nanite RayTracing update requests.");
  atexit(FUN_142e45fb0);
  local_98._0_4_ = 0x20;
  FUN_14153156c(&DAT_14ca19b60,L"r.RayTracing.Nanite.ForceUpdateVisible",&DAT_14ca19b70,
                L"Force BLAS of visible primitives to be updated next frame.");
  atexit(FUN_142e45ff5);
  local_98._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca19b78,L"r.RayTracing.Nanite.CutError",&DAT_14ca19b88,
                L"Global target cut error to control quality when using procedural raytracing geometry for Nanite meshes."
               );
  atexit(FUN_142e4603a);
  local_98._0_4_ = 4;
  FUN_141471170(&DAT_14ca19b90,L"r.RayTracing.Nanite.StreamOut.MaxNumVertices",&DAT_14c760848,
                L"Max number of vertices to stream out per frame.");
  atexit(FUN_142e4607f);
  local_98._0_4_ = 4;
  FUN_141471170(&DAT_14ca19ba0,L"r.RayTracing.Nanite.StreamOut.MaxNumIndices",&DAT_14c76084c,
                L"Max number of indices to stream out per frame.");
  atexit(FUN_142e460c4);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca19bb0,L"r.RayTracing.Nanite.MaxBuiltPrimitivesPerFrame",&DAT_14c760850,
                L"Limit number of BLAS built per frame based on a budget defined in terms of maximum number of triangles."
               );
  atexit(FUN_142e46109);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca19bc0,L"r.RayTracing.Nanite.MaxStagingBufferSizeMB",&DAT_14c760854,
                L"Limit the size of the staging buffer used during stream out (lower values can cause updates to be throttled)\nDefault   = 1024 MB.\nMax value = 2048 MB."
               );
  atexit(FUN_142e4614e);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca19bd0,L"r.RayTracing.Nanite.BLASScratchSizeMultipleMB",&DAT_14c760858,
                L"Round the size of the BLAS build scratch buffer to be a multiple of this value.\nThis helps maintain consistent memory usage and prevent memory usage spikes.\nDefault = 64 MB."
               );
  atexit(FUN_142e46193);
  local_98._0_4_ = 0x20;
  FUN_14153156c(&DAT_14ca19be0,L"r.RayTracing.Nanite.ProfileStreamOut",&DAT_14ca19bf0,
                L"[Development only] Stream out pending requests every frame in order to measure performance."
               );
  atexit(FUN_142e461d8);
  FUN_1462f30d8();
  DAT_14ca1c220 = &PTR_FUN_14a2a06e0;
  FUN_1462f4b78();
  atexit(FUN_142e4d061);
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,1);
  local_98._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca19bf8,L"r.Nanite.ParallelBasePassBuild",&local_78,&DAT_149dfb77a);
  atexit(FUN_142e4d090);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca19c10,L"r.Nanite.FastTileClear",&DAT_14c76085c,
                L"Whether to enable Nanite fast tile clearing");
  atexit(FUN_142e4d0d5);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca19c20,L"r.Nanite.FastTileClear.SubTiles",&DAT_14c760860,
                L"Whether to enable Nanite fast tile clearing (for 4x4 sub tiles)");
  atexit(FUN_142e4d11a);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca19c30,L"r.Nanite.FastTileVis",&DAT_14c760864,
                L"Allows for just showing a single target in the visualization, or -1 to show all accumulated"
               );
  atexit(FUN_142e4d15f);
  local_78 = (undefined8 *)0x0;
  local_70 = (code *)((ulonglong)local_70 & 0xffffffff00000000);
  FUN_1446efa72(&local_78,0,2,0x10);
  local_70._0_4_ = 2;
  *local_78 = &PTR_LAB_149e170a0;
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
  local_78[2] = lVar4;
  *local_78 = &PTR_FUN_14a2a0710;
  local_7c = 0;
  local_98 = (undefined8 **)CONCAT44(local_98._4_4_,0x20);
  FUN_14078dbce(&DAT_14ca1c208,L"r.Nanite.Bundle.Emulation",&local_7c,
                L"Whether to force shader bundle dispatch emulation");
  (**(code **)(*DAT_14ca1c210 + 200))(DAT_14ca1c210,&local_78);
  if ((int)local_70 == 0) {
LAB_142e6bcbc:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70._0_4_ = 0;
    goto LAB_142e6bcbc;
  }
  atexit(FUN_142e4d1a4);
  local_78 = (undefined8 *)0x0;
  local_70._0_4_ = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  local_70._0_4_ = 2;
  *local_78 = &PTR_LAB_149e170a0;
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
  local_78[2] = lVar4;
  *local_78 = &PTR_FUN_14a2a0780;
  local_90 = 0x20;
  local_98 = &local_78;
  FUN_141703554(&DAT_14ca19c40,L"r.Nanite.Bundle.Shading",&DAT_14ca19c50,
                L"Whether to enable Nanite shader bundle dispatch for shading");
  if ((int)local_70 == 0) {
LAB_142e6bd9b:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70._0_4_ = 0;
    goto LAB_142e6bd9b;
  }
  atexit(FUN_142e4d1e9);
  local_78 = (undefined8 *)0x0;
  local_70._0_4_ = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  local_70._0_4_ = 2;
  *local_78 = &PTR_LAB_149e170a0;
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
  local_78[2] = lVar4;
  *local_78 = &PTR_FUN_14a2a07f0;
  local_90 = 0x20;
  local_98 = &local_78;
  FUN_141703554(&DAT_14ca19c58,L"r.Nanite.ComputeMaterials.Sort",&DAT_14c760868,&DAT_149dfb77a);
  if ((int)local_70 == 0) {
LAB_142e6be7a:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70._0_4_ = 0;
    goto LAB_142e6be7a;
  }
  atexit(FUN_142e4d22e);
  local_98 = (undefined8 **)CONCAT44(local_98._4_4_,0x20);
  FUN_141471170(&DAT_14ca19c68,L"r.Nanite.BinningTechnique",&DAT_14ca19c78,&DAT_149dfb77a);
  atexit(FUN_142e4d273);
  local_78 = (undefined8 *)0x0;
  local_70._0_4_ = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  local_70._0_4_ = 2;
  *local_78 = &PTR_LAB_149e170a0;
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
  local_78[2] = lVar4;
  *local_78 = &PTR_FUN_14a2a0860;
  local_90 = 0x20;
  local_98 = &local_78;
  FUN_141703554(&DAT_14ca19c80,L"r.Nanite.ShadeBinningMode",&DAT_14ca19c90,
                L"0: Auto\n1: Force to Pixel Mode\n2: Force to Quad Mode\n");
  if ((int)local_70 != 0) {
    if (local_78 == (undefined8 *)0x0) goto LAB_142e6bf9c;
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70._0_4_ = 0;
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142e6bf9c:
  atexit(FUN_142e4d2b8);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca19c98,L"r.Nanite.SoftwareVRS",&DAT_14c76086c,
                L"Whether to enable Nanite software variable rate shading in compute.");
  atexit(FUN_142e4d2fd);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca19cb0,L"r.Nanite.Debug.ValidateShadeBinning",&DAT_14ca19ca8,&DAT_149dfb77a)
  ;
  atexit(FUN_142e4d342);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca19cc0,L"r.Nanite.CacheRelevanceParallel",&DAT_14c760870,
                L"Enable parallel caching of Nanite material relevance. 0=disabled, 1=enabled (default)"
               );
  atexit(FUN_142e4d387);
  local_70 = FUN_14612bef0;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca19df0,&local_78);
  local_70 = FUN_1401d71f4;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca19f18,&local_78);
  local_70 = FUN_141573f4a;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1a040,&local_78);
  local_70 = FUN_145ed48ba;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1a168,&local_78);
  local_70 = FUN_1415b591c;
  local_78 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca1a200,&local_78);
  FUN_1411e592c(&DAT_14ca1a218,L"NaniteRaster");
  local_70 = FUN_1448cb8bc;
  local_78 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca1a2a8,&local_78);
  FUN_1411e592c(&DAT_14ca1a2b8,L"NaniteShading");
  local_70 = FUN_1403aea72;
  local_78 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca1a348,&local_78);
  FUN_1411e592c(&DAT_14ca1a358,L"NaniteRayTracing");
  local_70 = FUN_145e2f24e;
  local_78 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca1a3e8,&local_78);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca1a3f8,L"r.Nanite.ExportDepth",&DAT_14c760874,&DAT_149dfb77a);
  atexit(FUN_142e55441);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca1a408,L"r.Nanite.MaxNodes",&DAT_14c760878,
                L"Maximum number of Nanite nodes traversed during a culling pass.");
  atexit(FUN_142e55486);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca1a418,L"r.Nanite.MaxCandidateClusters",&DAT_14c76087c,
                L"Maximum number of Nanite clusters before cluster culling.");
  atexit(FUN_142e554cb);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca1a428,L"r.Nanite.MaxVisibleClusters",&DAT_14c760880,
                L"Maximum number of visible Nanite clusters.");
  atexit(FUN_142e55510);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca1a438,L"r.Nanite.MaxCandidatePatches",&DAT_14c760884,
                L"Maximum number of Nanite patches considered for splitting.");
  atexit(FUN_142e55555);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca1a448,L"r.Nanite.MaxVisiblePatches",&DAT_14c760888,
                L"Maximum number of visible Nanite patches.");
  atexit(FUN_142e5559a);
  FUN_145dfa4d0();
  atexit(FUN_142e55998);
  local_78._0_4_ = 0x1000;
  local_98._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca1a468,L"r.Nanite.SkinningBuffers.TransformDataMinSizeBytes",&local_78,
                L"The smallest size (in bytes) of the Nanite bone transform data buffer.");
  atexit(FUN_142e559c7);
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,0x1000);
  local_98._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca1a480,L"r.Nanite.SkinningBuffers.HeaderDataMinSizeBytes",&local_78,
                L"The smallest size (in bytes) of the Nanite per-primitive skinning header data buffer."
               );
  atexit(FUN_142e55a0c);
  local_78._0_1_ = 1;
  local_98._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14ca1a498,L"r.Nanite.SkinningBuffers.AsyncUpdates",&local_78,
                L"When non-zero, Nanite transform data buffer updates are updated asynchronously.");
  atexit(FUN_142e55a51);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca1a4b0,L"r.Nanite.SkinningBuffers.ForceFullUpload",&DAT_14ca1a4c0,
                L"0: Do not force a full upload.\n1: Force one full upload on the next update.\n2: Force a full upload every frame."
               );
  atexit(FUN_142e55a96);
  local_78 = (undefined8 *)CONCAT71(local_78._1_7_,1);
  local_98._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14ca1a4c8,L"r.Nanite.SkinningBuffers.Defrag",&local_78,
                L"Whether or not to allow defragmentation of the Nanite skinning buffers.");
  atexit(FUN_142e55adb);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca1a4e0,L"r.Nanite.SkinningBuffers.Defrag.Force",&DAT_14ca1a4f0,
                L"0: Do not force a full defrag.\n1: Force one full defrag on the next update.\n2: Force a full defrag every frame."
               );
  atexit(FUN_142e55b20);
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,0x3ec00000);
  local_98._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca1a4f8,L"r.Nanite.SkinningBuffers.Defrag.LowWaterMark",&local_78,
                L"Ratio of used to allocated memory at which to decide to defrag the Nanite skinning buffers."
               );
  atexit(FUN_142e55b65);
  local_78 = (undefined8 *)CONCAT71(local_78._1_7_,1);
  local_98 = (undefined8 **)CONCAT44(local_98._4_4_,0x20);
  FUN_140bd5914(&DAT_14ca1a510,L"r.Skinning.TransformProviders",&local_78,
                L"When set, transform providers are enabled (if registered).");
  atexit(FUN_142e55baa);
  local_70 = FUN_145e8b496;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1a640,&local_78);
  DAT_14ca1c508 = 0xffffffff;
  _DAT_14ca1c500 = &PTR_FUN_14a2a0f00;
  if (DAT_14ca4ae08 == (undefined8 *)0x0) {
    DAT_14ca4ae08 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca4ae08 = 0;
    DAT_14ca4ae08[1] = 0;
  }
  FUN_145c269b4(DAT_14ca4ae08,&DAT_14ca1c500);
  local_68 = 0;
  local_58 = &PTR_LAB_14a2a1290;
  local_50 = FUN_142e56a2a;
  local_78 = (undefined8 *)&LAB_14006a076;
  FUN_1462f3270(&local_78);
  atexit(FUN_142e56b51);
  local_98._0_4_ = 0x20;
  FUN_14153156c(&DAT_14ca1a6d0,L"r.Nanite.StreamOut.CacheTraversalData",&DAT_14c7608ac,
                L"Cache traversal data during count pass to be able to skip traversal during stream out pass."
               );
  atexit(FUN_142e56ba3);
  local_70 = FUN_145e58f78;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1a7f8,&local_78);
  local_70 = FUN_145e594e2;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1a920,&local_78);
  local_70 = FUN_145f51a9e;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1aa48,&local_78);
  local_70 = FUN_145f52094;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1ab70,&local_78);
  local_70 = FUN_145f31584;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1ac98,&local_78);
  local_70 = FUN_145e8ba06;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1adc0,&local_78);
  local_98._0_4_ = 4;
  FUN_141471170(&DAT_14ca1add0,L"r.Nanite.MaterialVisibility",&DAT_14ca1ade0,
                L"Whether to enable Nanite material visibility tests");
  atexit(FUN_142e56e6f);
  local_98._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca1ade8,L"r.Nanite.MaterialVisibility.Async",&DAT_14c7608b0,
                L"Whether to enable parallelization of Nanite material visibility tests");
  atexit(FUN_142e56eb4);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14ca1adf8,L"r.Nanite.MaterialVisibility.Primitives",&DAT_14c7608b4,
                &DAT_149dfb77a);
  atexit(FUN_142e56ef9);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14ca1ae10,L"r.Nanite.MaterialVisibility.Instances",&DAT_14ca1ae08,
                &DAT_149dfb77a);
  atexit(FUN_142e56f3e);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14ca1ae20,L"r.Nanite.MaterialVisibility.RasterBins",&DAT_14c7608b8,
                &DAT_149dfb77a);
  atexit(FUN_142e56f83);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14ca1ae30,L"r.Nanite.MaterialVisibility.ShadingBins",&DAT_14c7608bc,
                &DAT_149dfb77a);
  atexit(FUN_142e56fc8);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14ca1ae40,L"r.Nanite.Visualize.Composite",&DAT_14c7608c0,&DAT_149dfb77a);
  atexit(FUN_142e577cf);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14ca1ae50,L"r.Nanite.Visualize.EdgeDetect",&DAT_14c7608c4,&DAT_149dfb77a);
  atexit(FUN_142e57814);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14ca1ae60,L"r.Nanite.Visualize.OverdrawScale",&DAT_14c7608c8,&DAT_149dfb77a);
  atexit(FUN_142e57859);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14ca1ae70,L"r.Nanite.Visualize.ComplexityScale",&DAT_14c7608cc,&DAT_149dfb77a);
  atexit(FUN_142e5789e);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14ca1ae80,L"r.Nanite.Visualize.ComplexityOverhead",&DAT_14c7608d0,
                &DAT_149dfb77a);
  atexit(FUN_142e578e3);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14ca1ae98,L"r.Nanite.Picking.Domain",&DAT_14ca1ae90,&DAT_149dfb77a);
  atexit(FUN_142e57928);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14ca1aeb0,L"r.Nanite.Visualize.PixelProgrammableVisMode",&DAT_14ca1aea8,
                L"0: Show masked, pixel depth offset, and dynamic displacement materials.\n1: Show masked materials only.\n2: Show pixel depth offset only.\n3: Show dynamic displacement only."
               );
  atexit(FUN_142e5796d);
  local_70 = FUN_145f7fc34;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1afd8,&local_78);
  local_70 = FUN_145f74bac;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1b100,&local_78);
  local_70 = FUN_145e8bf76;
  local_78 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1b228,&local_78);
  local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
  local_98._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca1b248,L"r.Voxel",&local_78,&DAT_149dfb77a);
  atexit(FUN_142e5a46f);
  local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
  local_98._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca1b260,L"r.Voxel.Method",&local_78,&DAT_149dfb77a);
  atexit(FUN_142e5a4b4);
  local_78._0_4_ = 1;
  local_98._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca1b278,L"r.Voxel.Level2",&local_78,&DAT_149dfb77a);
  atexit(FUN_142e5a4f9);
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,8);
  local_98 = (undefined8 **)CONCAT44(local_98._4_4_,0x20);
  FUN_14078dbce(&DAT_14ca1b290,L"r.Voxel.TileSize",&local_78,&DAT_149dfb77a);
  atexit(FUN_142e5a53e);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e6ca90 FUN_142e6ca90 body=69 status=ok
// SIG undefined FUN_142e6ca90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6ca90(void)

{
  _DAT_14ca1c590 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6cad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c598,1);
  return;
}



// FUNCTION 142e6cad5 FUN_142e6cad5 body=69 status=ok
// SIG undefined FUN_142e6cad5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6cad5(void)

{
  _DAT_14ca1c5a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6cb17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c5b0,1);
  return;
}



// FUNCTION 142e6cb1a FUN_142e6cb1a body=69 status=ok
// SIG undefined FUN_142e6cb1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6cb1a(void)

{
  _DAT_14ca1c5c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6cb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c5c8,1);
  return;
}



// FUNCTION 142e6cb5f FUN_142e6cb5f body=69 status=ok
// SIG undefined FUN_142e6cb5f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6cb5f(void)

{
  _DAT_14ca1c5d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6cba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c5e0,1);
  return;
}



// FUNCTION 142e6cba4 FUN_142e6cba4 body=69 status=ok
// SIG undefined FUN_142e6cba4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6cba4(void)

{
  _DAT_14ca1c5f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6cbe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c5f8,1);
  return;
}



// FUNCTION 142e6cbe9 FUN_142e6cbe9 body=69 status=ok
// SIG undefined FUN_142e6cbe9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6cbe9(void)

{
  _DAT_14ca1c608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6cc2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c610,1);
  return;
}



// FUNCTION 142e6cc2e FUN_142e6cc2e body=69 status=ok
// SIG undefined FUN_142e6cc2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6cc2e(void)

{
  _DAT_14ca1c620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6cc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c628,1);
  return;
}



// FUNCTION 142e6cc73 FUN_142e6cc73 body=69 status=ok
// SIG undefined FUN_142e6cc73(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6cc73(void)

{
  _DAT_14ca1c638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6ccb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c640,1);
  return;
}



// FUNCTION 142e6ccb8 FUN_142e6ccb8 body=69 status=ok
// SIG undefined FUN_142e6ccb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6ccb8(void)

{
  _DAT_14ca1c650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6ccfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c658,1);
  return;
}



// FUNCTION 142e6ccfd FUN_142e6ccfd body=69 status=ok
// SIG undefined FUN_142e6ccfd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6ccfd(void)

{
  _DAT_14ca1c668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6cd3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c670,1);
  return;
}



// FUNCTION 142e6cd42 FUN_142e6cd42 body=69 status=ok
// SIG undefined FUN_142e6cd42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6cd42(void)

{
  _DAT_14ca1c680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6cd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1c688,1);
  return;
}



// FUNCTION 142e6cdcf FUN_142e6cdcf body=9979 status=ok
// SIG undefined FUN_142e6cdcf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6cdcf(longlong param_1,longlong param_2,longlong *param_3,int param_4)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  byte bVar15;
  double dVar16;
  uint uVar17;
  ulonglong *puVar18;
  uint uVar19;
  int iVar20;
  DWORD DVar21;
  DWORD DVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  int *piVar27;
  uint uVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  longlong lVar31;
  int iVar32;
  longlong *plVar33;
  ulonglong uVar34;
  undefined6 uVar35;
  int iVar36;
  longlong lVar37;
  undefined8 uVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  ulonglong uVar41;
  longlong *plVar42;
  bool bVar43;
  undefined4 uVar44;
  double dVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_308 [32];
  undefined1 **local_2e8;
  ulonglong *local_2d8;
  longlong local_2d0;
  int local_2c4;
  longlong local_2c0;
  longlong local_2b8;
  undefined4 local_2ac;
  ulonglong local_2a8;
  float local_2a0;
  float local_29c;
  uint local_298;
  int local_294;
  undefined8 *local_290;
  ulonglong local_288;
  ulonglong local_280;
  undefined1 local_278 [16];
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  ulonglong local_248;
  longlong local_240;
  uint local_234;
  longlong local_230;
  ulonglong local_228;
  ulonglong local_220;
  undefined8 local_218;
  ulonglong local_210;
  longlong *local_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [31];
  undefined1 local_189;
  undefined1 *local_188;
  undefined4 local_180;
  undefined8 local_178;
  double dStack_170;
  undefined *local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  double dVar7;
  
  lVar37 = DAT_14ca1c5a0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  iVar36 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  local_2d0 = param_2;
  if (iVar36 == 0x40000002) {
    uVar30 = 0;
  }
  else {
    bVar43 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar36 != 2)) {
      if (iVar36 == 1) {
        DVar21 = FUN_140ad26c0();
        DVar22 = GetCurrentThreadId();
        bVar43 = DVar21 == DVar22;
      }
      else {
        bVar43 = false;
      }
    }
    uVar30 = (ulonglong)(bVar43 ^ 1);
  }
  if (0 < *(int *)(lVar37 + uVar30 * 4)) {
    local_288 = 0;
    local_208 = param_3;
    if (*(int *)(DAT_14ca1c5b8 + 4) < 1) {
      local_280 = 0;
      local_294 = 0;
      iVar36 = 0;
      local_248 = 0;
      local_2ac = 0;
      local_240 = 0;
    }
    else {
      uVar19 = (int)param_3[1] * 10 + 1;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      dStack_170 = (double)CONCAT44(dStack_170._4_4_,0x4109);
      local_168 = (undefined *)0x0;
      uVar17 = DAT_14ca84e48;
      if (uVar19 < DAT_14ca84e48) {
        uVar17 = uVar19;
      }
      local_178 = (undefined8 *)CONCAT44(uVar17 + (uVar17 == 0),uVar28 + (uVar28 == 0));
      plVar33 = (longlong *)(param_1 + 0x70);
      uVar41 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar30 = uVar41 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar30) {
        FUN_140023dd8(plVar33,0x160);
        uVar41 = *plVar33 + 0xfU & 0xfffffffffffffff0;
        uVar30 = uVar41 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar30;
      FUN_1456bd266(uVar41,L"OIT.DebugData",&local_178,0);
      iVar36 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar36 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar36 + 1U) {
        FUN_144737178(param_1 + 0x188,iVar36);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar36 * 8) = uVar41;
      *(int *)(uVar41 + 0x7c) = *(int *)(param_1 + 400) + -1;
      puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar26 = puVar29 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
        FUN_140023dd8(plVar33,0x48);
        puVar29 = (undefined8 *)(*plVar33 + 7U & 0xfffffffffffffff8);
        puVar26 = puVar29 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar26;
      puVar29[1] = *(undefined8 *)(uVar41 + 8);
      puVar29[2] = 0;
      *(undefined1 *)(puVar29 + 3) = 2;
      *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
      iVar32 = 0;
      *(undefined1 *)(puVar29 + 5) = 0;
      *puVar29 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar29 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar29 + 0x32) = 0;
      puVar29[7] = uVar41;
      iVar36 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
        FUN_1447568fc(param_1 + 0x198,iVar36);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar29;
      *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      FUN_1405bfba3(param_1,puVar29,0,2);
      local_240 = (longlong)(int)param_3[1];
      iVar36 = 0;
      iVar20 = 0;
      if (local_240 != 0) {
        lVar37 = 0;
        iVar20 = 0;
        iVar36 = 0;
        iVar32 = 0;
        do {
          lVar31 = *(longlong *)(*param_3 + 8 + lVar37);
          if (lVar31 != 0) {
            iVar32 = iVar32 + 1;
            iVar36 = iVar36 + *(int *)(*(longlong *)(lVar31 + 0x10) + 0x20);
            iVar20 = iVar20 + *(int *)(*param_3 + 0x24 + lVar37);
          }
          lVar37 = lVar37 + 0x38;
        } while (local_240 * 0x38 - lVar37 != 0);
        iVar20 = iVar20 << 3;
      }
      DAT_14ca4d32c = iVar32 * 0x100 + DAT_14ca4d32c + 0x200;
      DAT_14ca4d330 = DAT_14ca4d330 + iVar32 * 0x20 + iVar20;
      DAT_14ca4d100 = 1;
      uVar28 = *(uint *)(param_3 + 3);
      local_294 = iVar32;
      local_280 = uVar41;
      if ((longlong)(int)uVar28 == 0) {
        local_248 = 0;
        local_2ac = 0;
      }
      else {
        local_248 = (ulonglong)uVar28;
        local_2ac = *(undefined4 *)
                     (*(longlong *)
                       (*(longlong *)(param_3[2] + -8 + (longlong)(int)uVar28 * 8) + 0x10) + 0x20);
      }
    }
    uVar30 = 0;
    iVar32 = 0;
    if ((longlong)*(int *)(local_2d0 + 0x3778) != 0) {
      plVar33 = *(longlong **)(local_2d0 + 0x3770);
      plVar42 = plVar33 + (longlong)*(int *)(local_2d0 + 0x3778) * 2;
      local_268 = param_1 + 0x188;
      local_2d8 = (ulonglong *)(param_1 + 0x70);
      local_2b8 = param_1 + 0x198;
      local_200 = local_2d0 + 0x13870;
      local_230 = local_2d0 + 0x9b0;
      local_258 = param_1 + 0x98;
      local_234 = (uint)(param_4 != 1);
      local_260 = param_1 + 0x168;
      uVar46 = 0xffffffff;
      uVar47 = 0x7fffffff;
      iVar32 = 0;
      uVar30 = 0;
      local_288 = 0;
      do {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca21808) &&
           (FUN_144b3d300(&DAT_14ca21808), DAT_14ca21808 == -1)) {
          FUN_1446f470e(&local_178,L"FLocalVertexFactory",1);
          FUN_14099931e(&local_188,&local_178);
          DAT_14ca21800 = FUN_140187afe(&local_188);
          _Init_thread_footer(&DAT_14ca21808);
        }
        if ((((*plVar33 != 0) &&
             (plVar25 = *(longlong **)(*plVar33 + 0xb8), plVar25 != (longlong *)0x0)) &&
            (lVar37 = (**(code **)(*plVar25 + 0x30))(),
            *(longlong *)(lVar37 + 0x20) == *(longlong *)(DAT_14ca21800 + 0x20))) &&
           (lVar37 = *plVar33, 0 < *(int *)(lVar37 + 0xb0))) {
          lVar31 = *(longlong *)(lVar37 + 0xa8);
          if (*(longlong *)(lVar37 + 0xa8) == 0) {
            lVar31 = lVar37;
          }
          plVar25 = *(longlong **)(lVar31 + 0x20);
          if (plVar25 != (longlong *)0x0) {
            if ((int)plVar25[1] == -1) {
              if (((plVar25[3] == 0) || (lVar37 = *(longlong *)(plVar25[3] + 0x10), lVar37 == 0)) ||
                 (*(int *)(lVar37 + 0x24) == 0)) goto LAB_142e6e7e5;
              (**(code **)(*plVar25 + 0x18))(plVar25,*(undefined8 *)(param_1 + 0x18));
              lVar37 = *plVar33;
            }
            puVar18 = local_2d8;
            if ((*(longlong *)(lVar37 + 0xb8) != 0) &&
               (lVar37 = *(longlong *)(*(longlong *)(lVar37 + 0xb8) + 0x1c8), lVar37 != 0)) {
              LOCK();
              *(int *)(lVar37 + 8) = *(int *)(lVar37 + 8) + 1;
              UNLOCK();
              lVar31 = *(longlong *)(*plVar33 + 0xa8);
              if (lVar31 == 0) {
                lVar31 = *plVar33;
              }
              local_2c0 = *local_208;
              lVar31 = (longlong)*(int *)(*(longlong *)(lVar31 + 0x20) + 0x24) * 0x38;
              uVar28 = 4;
              if (DAT_14ca84e48 < 4) {
                uVar28 = DAT_14ca84e48;
              }
              uVar19 = *(uint *)(local_2c0 + 0x24 + lVar31);
              dStack_170 = (double)CONCAT44(dStack_170._4_4_,0x4109);
              uVar17 = DAT_14ca84e48;
              if (uVar19 < DAT_14ca84e48) {
                uVar17 = uVar19;
              }
              local_168 = (undefined *)0x0;
              local_178 = (undefined8 *)CONCAT44(uVar17 + (uVar17 == 0),uVar28 + (uVar28 == 0));
              uVar34 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
              uVar41 = uVar34 + 0x150;
              local_2a8 = uVar30;
              local_250 = lVar37;
              if (*(ulonglong *)(param_1 + 0x78) < uVar41) {
                FUN_140023dd8(local_2d8,0x160);
                uVar34 = *puVar18 + 0xf & 0xfffffffffffffff0;
                uVar41 = uVar34 + 0x150;
              }
              *(ulonglong *)(param_1 + 0x70) = uVar41;
              FUN_1456bd266(uVar34,L"OIT.TriangleSortingSliceIndex",&local_178,0);
              iVar20 = *(int *)(param_1 + 400);
              *(uint *)(param_1 + 400) = iVar20 + 1U;
              if (*(uint *)(param_1 + 0x194) < iVar20 + 1U) {
                FUN_144737178(local_268,iVar20);
              }
              puVar18 = local_2d8;
              *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar20 * 8) = uVar34;
              *(int *)(uVar34 + 0x7c) = *(int *)(param_1 + 400) + -1;
              uVar28 = 4;
              if (DAT_14ca84e48 < 4) {
                uVar28 = DAT_14ca84e48;
              }
              dStack_170 = (double)CONCAT44(dStack_170._4_4_,0x4109);
              uVar19 = DAT_14ca84e48;
              if (0xff < DAT_14ca84e48) {
                uVar19 = 0x100;
              }
              local_168 = (undefined *)0x0;
              local_178 = (undefined8 *)CONCAT44(uVar19 + (uVar19 == 0),uVar28 + (uVar28 == 0));
              uVar41 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
              uVar30 = uVar41 + 0x150;
              local_210 = uVar34;
              if (*(ulonglong *)(param_1 + 0x78) < uVar30) {
                FUN_140023dd8(local_2d8,0x160);
                uVar41 = *puVar18 + 0xf & 0xfffffffffffffff0;
                uVar30 = uVar41 + 0x150;
              }
              *(ulonglong *)(param_1 + 0x70) = uVar30;
              FUN_1456bd266(uVar41,L"OIT.SliceCounters",&local_178,0);
              iVar20 = *(int *)(param_1 + 400);
              *(uint *)(param_1 + 400) = iVar20 + 1U;
              if (*(uint *)(param_1 + 0x194) < iVar20 + 1U) {
                FUN_144737178(local_268,iVar20);
              }
              puVar18 = local_2d8;
              *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar20 * 8) = uVar41;
              *(int *)(uVar41 + 0x7c) = *(int *)(param_1 + 400) + -1;
              uVar28 = 4;
              if (DAT_14ca84e48 < 4) {
                uVar28 = DAT_14ca84e48;
              }
              dStack_170 = (double)CONCAT44(dStack_170._4_4_,0x4109);
              uVar19 = DAT_14ca84e48;
              if (0xff < DAT_14ca84e48) {
                uVar19 = 0x100;
              }
              local_168 = (undefined *)0x0;
              local_178 = (undefined8 *)CONCAT44(uVar19 + (uVar19 == 0),uVar28 + (uVar28 == 0));
              uVar34 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
              uVar30 = uVar34 + 0x150;
              local_228 = uVar41;
              if (*(ulonglong *)(param_1 + 0x78) < uVar30) {
                FUN_140023dd8(local_2d8,0x160);
                uVar34 = *puVar18 + 0xf & 0xfffffffffffffff0;
                uVar30 = uVar34 + 0x150;
              }
              *(ulonglong *)(param_1 + 0x70) = uVar30;
              FUN_1456bd266(uVar34,L"OIT.SliceOffsets",&local_178,0);
              iVar20 = *(int *)(param_1 + 400);
              *(uint *)(param_1 + 400) = iVar20 + 1U;
              if (*(uint *)(param_1 + 0x194) < iVar20 + 1U) {
                FUN_144737178(local_268,iVar20);
              }
              puVar18 = local_2d8;
              *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar20 * 8) = uVar34;
              *(int *)(uVar34 + 0x7c) = *(int *)(param_1 + 400) + -1;
              puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar26 = puVar29 + 8;
              local_2c4 = iVar36;
              if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
                FUN_140023dd8(local_2d8,0x48);
                puVar29 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
                puVar26 = puVar29 + 8;
              }
              *(undefined8 **)(param_1 + 0x70) = puVar26;
              puVar29[1] = *(undefined8 *)(local_228 + 8);
              puVar29[2] = 0;
              *(undefined1 *)(puVar29 + 3) = 2;
              *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar29 + 5) = 0;
              *puVar29 = &PTR_FUN_14a1fb3e8;
              *(undefined2 *)(puVar29 + 6) = 0x1c;
              *(undefined1 *)((longlong)puVar29 + 0x32) = 0;
              puVar29[7] = local_228;
              iVar36 = *(int *)(param_1 + 0x1a0);
              *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
                FUN_1447568fc(local_2b8,iVar36);
              }
              *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar29;
              *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
              uVar28 = 0;
              FUN_1405bfba3(param_1,puVar29,0,2);
              if (local_280 != 0) {
                lVar37 = *(longlong *)(*(longlong *)(local_2d0 + 8) + 0x40);
                piVar27 = (int *)(lVar37 + 8);
                if (lVar37 == 0) {
                  piVar27 = &DAT_14c760db4;
                }
                lVar37 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar27 * 2) * 0x3c;
                if (*(longlong *)(&DAT_14ca814b0 + lVar37) == DAT_14ca80038) {
                  uVar19 = *(uint *)((longlong)&DAT_14ca814d0 + lVar37);
                  uVar28 = 0;
                  if (((uVar19 >> 0x18 & 1) != 0) && (DAT_14ca80038 != DAT_14ca81490)) {
LAB_142e6d686:
                    if ((uVar19 >> 0x17 & 1) == 0) {
                      uVar28 = (uint)(*(longlong *)(local_2d0 + 0x138d0) != 0);
                    }
                    else {
                      uVar28 = 0;
                    }
                  }
                }
                else {
                  if (*(longlong *)(&DAT_14ca814b0 + lVar37) != DAT_14ca81490) {
                    uVar19 = *(uint *)((longlong)&DAT_14ca814d0 + lVar37);
                    goto LAB_142e6d686;
                  }
                  uVar28 = 0;
                }
              }
              local_2c0 = local_2c0 + lVar31;
              local_218 = *(undefined8 *)(*(longlong *)(local_2c0 + 8) + 0x10);
              lVar37 = plVar33[1];
              local_1d8 = *(double *)(local_2d0 + 0x9b0);
              dStack_1d0 = *(double *)(local_2d0 + 0x9b8);
              dVar8 = *(double *)(local_2d0 + 0x9c0);
              local_1e8 = *(double *)(local_2d0 + 0x9d0);
              dStack_1e0 = *(double *)(local_2d0 + 0x9d8);
              dVar9 = *(double *)(local_2d0 + 0x9e0);
              local_1c8 = *(double *)(local_2d0 + 0x9f0);
              dStack_1c0 = *(double *)(local_2d0 + 0x9f8);
              dVar10 = *(double *)(local_2d0 + 0xa00);
              dVar2 = *(double *)(lVar37 + 0x180);
              dVar3 = *(double *)(lVar37 + 0x188);
              dVar4 = *(double *)(lVar37 + 400);
              dVar16 = *(double *)(lVar37 + 400) * dStack_1c0 +
                       *(double *)(lVar37 + 0x188) * dStack_1e0 +
                       *(double *)(lVar37 + 0x180) * dStack_1d0 + *(double *)(local_2d0 + 0xa18);
              local_1b8._8_4_ = SUB84(dVar16,0);
              local_1b8._0_8_ =
                   dVar4 * local_1c8 + dVar3 * local_1e8 + dVar2 * local_1d8 +
                   *(double *)(local_2d0 + 0xa10);
              local_1b8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
              local_1f8 = *(undefined4 *)(lVar37 + 0x198);
              uStack_1f4 = *(undefined4 *)(lVar37 + 0x19c);
              uVar38 = *(undefined8 *)(lVar37 + 0x198);
              uStack_1f0 = (undefined4)uVar38;
              uStack_1ec = (undefined4)((ulonglong)uVar38 >> 0x20);
              dVar16 = *(double *)(lVar37 + 0x1a0);
              dVar5 = *(double *)(lVar37 + 0x1a0);
              dVar6 = *(double *)(lVar37 + 0x1a8);
              dVar7 = *(double *)(lVar37 + 0x1a8);
              dVar4 = dVar4 * dVar10 + dVar3 * dVar9 + dVar2 * dVar8 +
                      *(double *)(local_2d0 + 0xa20);
              dVar2 = local_1c8 * local_1c8 + local_1e8 * local_1e8 + local_1d8 * local_1d8;
              dVar3 = dStack_1c0 * dStack_1c0 + dStack_1e0 * dStack_1e0 + dStack_1d0 * dStack_1d0;
              dVar45 = dVar10 * dVar10 + dVar8 * dVar8 + dVar9 * dVar9;
              if (dVar2 <= dVar3) {
                dVar2 = dVar3;
              }
              if (dVar2 <= dVar45) {
                dVar2 = dVar45;
              }
              uVar44 = SUB84(dVar2,0);
              local_298 = uVar28;
              local_220 = uVar34;
              if (dVar2 < 0.0) {
                dVar2 = sqrt(dVar2);
                uVar44 = SUB84(dVar2,0);
              }
              puVar18 = local_2d8;
              puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar26 = puVar39 + 0x32;
              if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
                FUN_140023dd8(uVar44,0x1a0);
                puVar39 = (undefined8 *)(*puVar18 + 0xf & 0xfffffffffffffff0);
                puVar26 = puVar39 + 0x32;
              }
              local_1a8._8_4_ = SUB84(dVar5,0);
              local_1a8._0_8_ = dVar16;
              local_1a8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
              local_278._8_4_ = SUB84(dVar7,0);
              local_278._0_8_ = dVar6;
              local_278._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
              dVar2 = (double)((ulonglong)(dVar10 * dVar6) & CONCAT44(uVar47,uVar46)) +
                      (double)((ulonglong)(dVar9 * dVar16) & CONCAT44(uVar47,uVar46)) +
                      (double)((ulonglong)(dVar8 * (double)CONCAT44(uStack_1f4,local_1f8)) &
                              CONCAT44(uVar47,uVar46));
              local_2a0 = (float)(dVar4 - dVar2);
              local_29c = (float)(dVar2 + dVar4);
              *(undefined8 **)(param_1 + 0x70) = puVar26;
              *puVar39 = &PTR_FUN_14a2ae410;
              puVar39[2] = 0;
              *(undefined1 *)(puVar39 + 3) = 1;
              puVar39[4] = 0;
              puVar39[5] = 0;
              puVar39[0x2c] = 0;
              puVar39[0x2d] = 0;
              puVar39[0x2e] = 0;
              puVar39[0x2f] = 0;
              puVar39[0x30] = 0;
              puVar39[0x31] = 0;
              iVar36 = *(int *)(param_1 + 0xa0);
              *(uint *)(param_1 + 0xa0) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0xa4) < iVar36 + 1U) {
                FUN_1448cfae8(local_258,iVar36);
              }
              *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar36 * 8) = puVar39;
              FUN_1447fea8d(&local_178,plVar33[1] + 0x100,local_230);
              puVar18 = local_2d8;
              *(float *)(puVar39 + 0x1e) = (float)(double)local_178;
              *(float *)((longlong)puVar39 + 0xf4) = (float)dStack_170;
              *(float *)(puVar39 + 0x1f) = (float)(double)local_168;
              *(float *)((longlong)puVar39 + 0xfc) = (float)local_160;
              *(float *)(puVar39 + 0x20) = (float)local_158;
              *(float *)((longlong)puVar39 + 0x104) = (float)local_150;
              *(float *)(puVar39 + 0x21) = (float)local_148;
              *(float *)((longlong)puVar39 + 0x10c) = (float)local_140;
              *(float *)(puVar39 + 0x22) = (float)local_138;
              *(float *)((longlong)puVar39 + 0x114) = (float)local_130;
              *(float *)(puVar39 + 0x23) = (float)local_128;
              *(float *)((longlong)puVar39 + 0x11c) = (float)local_120;
              *(float *)(puVar39 + 0x24) = (float)local_118;
              *(float *)((longlong)puVar39 + 0x124) = (float)local_110;
              *(float *)(puVar39 + 0x25) = (float)local_108;
              *(float *)((longlong)puVar39 + 300) = (float)local_100;
              lVar31 = plVar33[1];
              dVar2 = *(double *)(lVar31 + 0x108);
              dVar3 = *(double *)(lVar31 + 0x110);
              dVar4 = *(double *)(lVar31 + 0x118);
              dVar16 = *(double *)(lVar31 + 0x120);
              dVar5 = *(double *)(lVar31 + 0x128);
              dVar6 = *(double *)(lVar31 + 0x130);
              dVar7 = *(double *)(lVar31 + 0x138);
              dVar8 = *(double *)(lVar31 + 0x140);
              dVar9 = *(double *)(lVar31 + 0x148);
              dVar10 = *(double *)(lVar31 + 0x150);
              dVar45 = *(double *)(lVar31 + 0x158);
              dVar11 = *(double *)(lVar31 + 0x160);
              dVar12 = *(double *)(lVar31 + 0x168);
              dVar13 = *(double *)(lVar31 + 0x170);
              dVar14 = *(double *)(lVar31 + 0x178);
              *(float *)(puVar39 + 0x16) = (float)*(double *)(lVar31 + 0x100);
              *(float *)((longlong)puVar39 + 0xb4) = (float)dVar2;
              *(float *)(puVar39 + 0x17) = (float)dVar3;
              *(float *)((longlong)puVar39 + 0xbc) = (float)dVar4;
              *(float *)(puVar39 + 0x18) = (float)dVar16;
              *(float *)((longlong)puVar39 + 0xc4) = (float)dVar5;
              *(float *)(puVar39 + 0x19) = (float)dVar6;
              *(float *)((longlong)puVar39 + 0xcc) = (float)dVar7;
              *(float *)(puVar39 + 0x1a) = (float)dVar8;
              *(float *)((longlong)puVar39 + 0xd4) = (float)dVar9;
              *(float *)(puVar39 + 0x1b) = (float)dVar10;
              *(float *)((longlong)puVar39 + 0xdc) = (float)dVar45;
              *(float *)(puVar39 + 0x1c) = (float)dVar11;
              *(float *)((longlong)puVar39 + 0xe4) = (float)dVar12;
              *(float *)(puVar39 + 0x1d) = (float)dVar13;
              *(float *)((longlong)puVar39 + 0xec) = (float)dVar14;
              *(uint *)(puVar39 + 0x26) = (uint)(*(int *)(local_2c0 + 0x2c) == 1);
              *(undefined4 *)((longlong)puVar39 + 0x144) = *(undefined4 *)(local_2c0 + 0x24);
              *(undefined4 *)(puVar39 + 0x29) = *(undefined4 *)(local_2c0 + 0x28);
              *(float *)((longlong)puVar39 + 0x154) = local_2a0;
              *(float *)(puVar39 + 0x2b) = local_29c;
              *(uint *)((longlong)puVar39 + 0x14c) = local_234;
              *(undefined4 *)(puVar39 + 0x2a) =
                   *(undefined4 *)(*(longlong *)(*(longlong *)(local_2c0 + 8) + 0x10) + 0x20);
              puVar39[0x2c] = local_250;
              *(undefined4 *)((longlong)puVar39 + 0x134) = *(undefined4 *)(local_2c0 + 0x14);
              *(undefined4 *)(puVar39 + 0x27) = *(undefined4 *)(local_2c0 + 0x18);
              *(undefined4 *)((longlong)puVar39 + 0x13c) = *(undefined4 *)(local_2c0 + 0x1c);
              *(undefined4 *)(puVar39 + 0x28) = *(undefined4 *)(local_2c0 + 0x20);
              puVar39[0x2d] = *(undefined8 *)(*(longlong *)(local_2c0 + 8) + 0x38);
              puVar39[0x2e] = *(undefined8 *)(*(longlong *)(local_2c0 + 8) + 0x40);
              puVar39[0x2f] = puVar29;
              puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar26 = puVar29 + 8;
              if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
                FUN_140023dd8(local_2d8,0x48);
                puVar29 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
                puVar26 = puVar29 + 8;
              }
              *(undefined8 **)(param_1 + 0x70) = puVar26;
              puVar29[1] = *(undefined8 *)(local_210 + 8);
              puVar29[2] = 0;
              *(undefined1 *)(puVar29 + 3) = 2;
              *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar29 + 5) = 0;
              *puVar29 = &PTR_FUN_14a1fb3e8;
              *(undefined2 *)(puVar29 + 6) = 0x1c;
              *(undefined1 *)((longlong)puVar29 + 0x32) = 0;
              puVar29[7] = local_210;
              iVar36 = *(int *)(param_1 + 0x1a0);
              *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
                FUN_1447568fc(local_2b8,iVar36);
              }
              local_290 = puVar39 + 2;
              *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar29;
              *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
              puVar39[0x30] = puVar29;
              uVar30 = DAT_149931180;
              uVar46 = (undefined4)DAT_149931180;
              uVar47 = DAT_149931180._4_4_;
              uVar41 = DAT_149931180._8_8_;
              if ((char)local_298 == '\0') {
                local_278._0_4_ = iVar32;
              }
              else {
                dVar2 = (double)((ulonglong)((double)local_278._8_8_ * dStack_1c0) & uVar41) +
                        (double)((ulonglong)((double)local_1a8._8_8_ * dStack_1e0) & uVar41) +
                        (double)((ulonglong)((double)CONCAT44(uStack_1ec,uStack_1f0) * dStack_1d0) &
                                uVar41);
                local_278._8_4_ = SUB84(dVar2,0);
                local_278._0_8_ =
                     (double)((ulonglong)((double)local_278._0_8_ * local_1c8) & uVar30) +
                     (double)((ulonglong)((double)local_1a8._0_8_ * local_1e8) & uVar30) +
                     (double)((ulonglong)((double)CONCAT44(uStack_1f4,local_1f8) * local_1d8) &
                             uVar30);
                local_278._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
                if ((((9.99999993922529e-09 < ABS(*(double *)(local_2d0 + 0x9b0))) ||
                     (9.99999993922529e-09 < ABS(*(double *)(local_2d0 + 0x9b8)))) ||
                    (9.99999993922529e-09 < ABS(*(double *)(local_2d0 + 0x9c0)))) ||
                   ((((9.99999993922529e-09 < ABS(*(double *)(local_2d0 + 0x9d0)) ||
                      (9.99999993922529e-09 < ABS(*(double *)(local_2d0 + 0x9d8)))) ||
                     ((9.99999993922529e-09 < ABS(*(double *)(local_2d0 + 0x9e0)) ||
                      ((9.99999993922529e-09 < ABS(*(double *)(local_2d0 + 0x9f0)) ||
                       (9.99999993922529e-09 < ABS(*(double *)(local_2d0 + 0x9f8)))))))) ||
                    (9.99999993922529e-09 < ABS(*(double *)(local_2d0 + 0xa00)))))) {
                  FUN_14007522e(&local_178,local_230);
                }
                else {
                  puVar26 = &DAT_14c846400;
                  puVar29 = &local_178;
                  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
                    *puVar29 = *puVar26;
                    puVar26 = puVar26 + 1;
                    puVar29 = puVar29 + 1;
                  }
                }
                *(float *)(puVar39 + 6) = (float)(double)local_178;
                *(float *)((longlong)puVar39 + 0x34) = (float)dStack_170;
                *(float *)(puVar39 + 7) = (float)(double)local_168;
                *(float *)((longlong)puVar39 + 0x3c) = (float)local_160;
                *(float *)(puVar39 + 8) = (float)local_158;
                *(float *)((longlong)puVar39 + 0x44) = (float)local_150;
                *(float *)(puVar39 + 9) = (float)local_148;
                *(float *)((longlong)puVar39 + 0x4c) = (float)local_140;
                *(float *)(puVar39 + 10) = (float)local_138;
                *(float *)((longlong)puVar39 + 0x54) = (float)local_130;
                *(float *)(puVar39 + 0xb) = (float)local_128;
                *(float *)((longlong)puVar39 + 0x5c) = (float)local_120;
                *(float *)(puVar39 + 0xc) = (float)local_118;
                *(float *)((longlong)puVar39 + 100) = (float)local_110;
                *(float *)(puVar39 + 0xd) = (float)local_108;
                *(float *)((longlong)puVar39 + 0x6c) = (float)local_100;
                dVar2 = *(double *)(lVar37 + 400);
                dVar3 = *(double *)(lVar37 + 0x188);
                dVar4 = *(double *)(lVar37 + 0x1a8);
                dVar16 = *(double *)(lVar37 + 0x1a0);
                *(float *)(puVar39 + 0xe) =
                     (float)(*(double *)(lVar37 + 0x180) - *(double *)(lVar37 + 0x198));
                *(float *)((longlong)puVar39 + 0x74) = (float)(dVar3 - dVar16);
                *(float *)(puVar39 + 0xf) = (float)(dVar2 - dVar4);
                dVar2 = *(double *)(lVar37 + 400);
                dVar3 = *(double *)(lVar37 + 0x1a8);
                dVar4 = *(double *)(lVar37 + 0x188);
                dVar16 = *(double *)(lVar37 + 0x1a0);
                *(float *)(puVar39 + 0x10) =
                     (float)(*(double *)(lVar37 + 0x180) + *(double *)(lVar37 + 0x198));
                *(float *)((longlong)puVar39 + 0x84) = (float)(dVar4 + dVar16);
                *(float *)(puVar39 + 0x11) = (float)(dVar2 + dVar3);
                *(float *)(puVar39 + 0x12) =
                     (float)((double)local_1b8._0_8_ - (double)local_278._0_8_);
                *(float *)((longlong)puVar39 + 0x94) =
                     (float)((double)local_1b8._8_8_ - (double)local_278._8_8_);
                *(float *)(puVar39 + 0x13) = local_2a0;
                *(float *)(puVar39 + 0x14) =
                     (float)((double)local_1b8._0_8_ + (double)local_278._0_8_);
                *(float *)((longlong)puVar39 + 0xa4) =
                     (float)((double)local_278._8_8_ + (double)local_1b8._8_8_);
                *(float *)(puVar39 + 0x15) = local_29c;
                FUN_1472ea582(param_1,local_200,local_290);
                puVar18 = local_2d8;
                uVar30 = (ulonglong)(uint)((int)local_2a8 + *(int *)((longlong)puVar39 + 0x144));
                local_288 = (ulonglong)
                            (uint)((int)local_288 +
                                  *(int *)(*(longlong *)(*(longlong *)(local_2c0 + 8) + 0x10) + 0x20
                                          ));
                puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar26 = puVar29 + 8;
                if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
                  FUN_140023dd8(local_2d8,0x48);
                  puVar29 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
                  puVar26 = puVar29 + 8;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar26;
                puVar29[1] = *(undefined8 *)(local_280 + 8);
                puVar29[2] = 0;
                *(undefined1 *)(puVar29 + 3) = 2;
                *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar29 + 5) = 0;
                *puVar29 = &PTR_FUN_14a1fb3e8;
                *(undefined2 *)(puVar29 + 6) = 0x1c;
                *(undefined1 *)((longlong)puVar29 + 0x32) = 0;
                puVar29[7] = local_280;
                iVar36 = *(int *)(param_1 + 0x1a0);
                *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
                local_2a8 = uVar30;
                if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
                  FUN_1447568fc(local_2b8,iVar36);
                }
                local_278._0_4_ = iVar32 + 1;
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar29;
                *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                puVar39[0x31] = puVar29;
                uVar46 = 0xffffffff;
                uVar47 = 0x7fffffff;
              }
              uVar38 = *(undefined8 *)(local_2d0 + 0x13818);
              uVar28 = local_298 & 0xff;
              FUN_14159777c();
              FUN_1448e935e(uVar38,&local_178,&DAT_14ca1c950,uVar28);
              FUN_14159777c();
              dVar3 = dStack_170;
              dVar2 = (double)local_178;
              iVar36 = *(int *)((longlong)puVar39 + 0x144);
              FUN_14159789e();
              local_178 = (undefined8 *)0x0;
              dStack_170 = 0.0;
              FUN_1448f70da(dVar2,&DAT_14ca215e0,local_290,&local_178);
              FUN_14159789e();
              FUN_140069376(param_1);
              puVar18 = local_2d8;
              uVar35 = (undefined6)((ulonglong)&local_178 >> 0x10);
              uVar44 = (undefined4)CONCAT62(uVar35,2);
              if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
                 ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
                uVar44 = (undefined4)CONCAT62(uVar35,4);
              }
              puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar26 = puVar29 + 0x3d;
              if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
                FUN_140023dd8(local_2d8,0x1f0);
                puVar29 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
                puVar26 = puVar29 + 0x3d;
              }
              *local_2d8 = (ulonglong)puVar26;
              local_178 = local_290;
              dStack_170 = (double)DAT_14ca21628;
              if (DAT_14ca21628 != 0) {
                LOCK();
                *(int *)(DAT_14ca21628 + 8) = *(int *)(DAT_14ca21628 + 8) + 1;
                UNLOCK();
              }
              local_168 = &DAT_14ca215e0;
              local_2e8 = (undefined1 **)CONCAT71(local_2e8._1_7_,2);
              FUN_140068f1a(puVar29,&local_188,&local_178,uVar44);
              *puVar29 = &PTR_FUN_14a2ae420;
              puVar29[0x37] = local_290;
              puVar29[0x38] = dVar2;
              puVar29[0x39] = dVar3;
              *(uint *)(puVar29 + 0x3a) = iVar36 + 0xffU >> 8;
              *(undefined1 **)((longlong)puVar29 + 0x1d4) = &DAT_100000001;
              puVar29[0x3c] = local_218;
              iVar36 = *(int *)(param_1 + 0x170);
              *(uint *)(param_1 + 0x170) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0x174) < iVar36 + 1U) {
                FUN_14470e57a(local_260,iVar36);
              }
              *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar36 * 8) = puVar29;
              *(int *)((longlong)puVar29 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
              FUN_140069100(param_1,puVar29);
              puVar18 = local_2d8;
              puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar26 = puVar29 + 4;
              if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
                FUN_140023dd8(local_2d8,0x30);
                puVar29 = (undefined8 *)(*puVar18 + 0xf & 0xfffffffffffffff0);
                puVar26 = puVar29 + 4;
              }
              *(undefined8 **)(param_1 + 0x70) = puVar26;
              *puVar29 = &PTR_FUN_14a2ae438;
              puVar29[2] = 0;
              puVar29[3] = 0;
              iVar36 = *(int *)(param_1 + 0xa0);
              *(uint *)(param_1 + 0xa0) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0xa4) < iVar36 + 1U) {
                FUN_1448cfae8(local_258,iVar36);
              }
              puVar18 = local_2d8;
              *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar36 * 8) = puVar29;
              puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar26 = puVar39 + 9;
              if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
                FUN_140023dd8(local_2d8,0x50);
                puVar39 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
                puVar26 = puVar39 + 9;
              }
              *(undefined8 **)(param_1 + 0x70) = puVar26;
              puVar39[1] = *(undefined8 *)(local_228 + 8);
              puVar39[2] = 0;
              *(undefined1 *)(puVar39 + 3) = 3;
              *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
              *puVar39 = &PTR_FUN_14a1fb168;
              *(undefined1 *)(puVar39 + 5) = 0x1c;
              *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
              puVar39[7] = 0;
              puVar39[8] = local_228;
              iVar36 = *(int *)(param_1 + 0x1a0);
              *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
                FUN_1447568fc(local_2b8,iVar36);
              }
              puVar18 = local_2d8;
              puVar26 = puVar29 + 2;
              *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
              *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
              *puVar26 = puVar39;
              puVar40 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar39 = puVar40 + 8;
              if (*(undefined8 **)(param_1 + 0x78) < puVar39) {
                FUN_140023dd8(local_2d8,0x48);
                puVar40 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
                puVar39 = puVar40 + 8;
              }
              *(undefined8 **)(param_1 + 0x70) = puVar39;
              puVar40[1] = *(undefined8 *)(local_220 + 8);
              puVar40[2] = 0;
              *(undefined1 *)(puVar40 + 3) = 2;
              *(undefined8 *)((longlong)puVar40 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar40 + 5) = 0;
              *puVar40 = &PTR_FUN_14a1fb3e8;
              *(undefined2 *)(puVar40 + 6) = 0x1c;
              *(undefined1 *)((longlong)puVar40 + 0x32) = 0;
              puVar40[7] = local_220;
              iVar36 = *(int *)(param_1 + 0x1a0);
              *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
                FUN_1447568fc(local_2b8,iVar36);
              }
              *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar40;
              *(int *)((longlong)puVar40 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
              puVar29[3] = puVar40;
              uVar38 = *(undefined8 *)(local_2d0 + 0x13818);
              FUN_14158524a();
              FUN_1448e935e(uVar38,&local_178,&DAT_14ca1ca78,0);
              FUN_14158524a();
              dVar2 = dStack_170;
              puVar29 = local_178;
              FUN_14158536c();
              local_178 = (undefined8 *)0x0;
              dStack_170 = 0.0;
              FUN_1448f70da(puVar29,&DAT_14ca21668,puVar26,&local_178);
              FUN_140069376(param_1);
              puVar18 = local_2d8;
              uVar38 = 2;
              if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
                 ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0))))))
              {
                uVar38 = 4;
              }
              puVar40 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar39 = puVar40 + 0x3d;
              if (*(undefined8 **)(param_1 + 0x78) < puVar39) {
                FUN_140023dd8(local_2d8,0x1f0);
                puVar40 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
                puVar39 = puVar40 + 0x3d;
              }
              *local_2d8 = (ulonglong)puVar39;
              dStack_170 = (double)DAT_14ca216b0;
              if (DAT_14ca216b0 != 0) {
                LOCK();
                *(int *)(DAT_14ca216b0 + 8) = *(int *)(DAT_14ca216b0 + 8) + 1;
                UNLOCK();
              }
              local_168 = &DAT_14ca21668;
              local_2e8 = (undefined1 **)CONCAT71(local_2e8._1_7_,2);
              local_178 = puVar26;
              FUN_140068f1a(puVar40,&local_188,&local_178,uVar38);
              *puVar40 = &PTR_FUN_14a2ae440;
              puVar40[0x37] = &DAT_14ca21668;
              puVar40[0x38] = puVar26;
              puVar40[0x39] = puVar29;
              puVar40[0x3a] = dVar2;
              puVar40[0x3b] = &DAT_100000001;
              *(undefined4 *)(puVar40 + 0x3c) = 1;
              iVar36 = *(int *)(param_1 + 0x170);
              *(uint *)(param_1 + 0x170) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0x174) < iVar36 + 1U) {
                FUN_14470e57a(local_260,iVar36);
              }
              *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar36 * 8) = puVar40;
              *(int *)((longlong)puVar40 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
              FUN_140069100(param_1,puVar40);
              puVar18 = local_2d8;
              puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar26 = puVar29 + 10;
              if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
                FUN_140023dd8(local_2d8,0x60);
                puVar29 = (undefined8 *)(*puVar18 + 0xf & 0xfffffffffffffff0);
                puVar26 = puVar29 + 10;
              }
              uVar30 = local_220;
              *(undefined8 **)(param_1 + 0x70) = puVar26;
              *puVar29 = &PTR_FUN_14a2ae458;
              puVar29[5] = 0;
              puVar29[6] = 0;
              puVar29[7] = 0;
              puVar29[8] = 0;
              iVar36 = *(int *)(param_1 + 0xa0);
              *(uint *)(param_1 + 0xa0) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0xa4) < iVar36 + 1U) {
                FUN_1448cfae8(local_258,iVar36);
              }
              puVar18 = local_2d8;
              *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar36 * 8) = puVar29;
              *(uint *)(puVar29 + 2) = (uint)(*(int *)(local_2c0 + 0x2c) == 1);
              *(undefined4 *)((longlong)puVar29 + 0x14) = *(undefined4 *)(local_2c0 + 0x24);
              *(undefined4 *)(puVar29 + 3) = *(undefined4 *)(local_2c0 + 0x28);
              *(undefined4 *)((longlong)puVar29 + 0x1c) = *(undefined4 *)(local_2c0 + 0x14);
              *(undefined4 *)(puVar29 + 4) = 0;
              puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar26 = puVar39 + 9;
              if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
                FUN_140023dd8(local_2d8,0x50);
                puVar39 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
                puVar26 = puVar39 + 9;
              }
              *(undefined8 **)(param_1 + 0x70) = puVar26;
              puVar39[1] = *(undefined8 *)(uVar30 + 8);
              puVar39[2] = 0;
              *(undefined1 *)(puVar39 + 3) = 3;
              *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
              *puVar39 = &PTR_FUN_14a1fb168;
              *(undefined1 *)(puVar39 + 5) = 0x1c;
              *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
              puVar39[7] = 0;
              puVar39[8] = uVar30;
              iVar36 = *(int *)(param_1 + 0x1a0);
              *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
                FUN_1447568fc(local_2b8,iVar36);
              }
              puVar18 = local_2d8;
              *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
              *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
              puVar29[5] = puVar39;
              puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar26 = puVar39 + 9;
              if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
                FUN_140023dd8(local_2d8,0x50);
                puVar39 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
                puVar26 = puVar39 + 9;
              }
              *(undefined8 **)(param_1 + 0x70) = puVar26;
              puVar39[1] = *(undefined8 *)(local_210 + 8);
              puVar39[2] = 0;
              *(undefined1 *)(puVar39 + 3) = 3;
              *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
              *puVar39 = &PTR_FUN_14a1fb168;
              *(undefined1 *)(puVar39 + 5) = 0x1c;
              *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
              puVar39[7] = 0;
              puVar39[8] = local_210;
              iVar36 = *(int *)(param_1 + 0x1a0);
              *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
                FUN_1447568fc(local_2b8,iVar36);
              }
              puVar26 = puVar29 + 2;
              *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
              *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
              puVar29[6] = puVar39;
              puVar29[7] = *(undefined8 *)(*(longlong *)(local_2c0 + 8) + 0x38);
              puVar29[8] = *(undefined8 *)(*(longlong *)(local_2c0 + 8) + 0x40);
              uVar38 = *(undefined8 *)(local_2d0 + 0x13818);
              FUN_1415924de();
              FUN_1448e935e(uVar38,&local_178,&DAT_14ca1cba0,0);
              FUN_1415924de();
              puVar39 = local_178;
              local_2c0 = (longlong)dStack_170;
              iVar36 = *(int *)((longlong)puVar29 + 0x14);
              FUN_141592600();
              local_178 = (undefined8 *)0x0;
              dStack_170 = 0.0;
              FUN_1448f70da(puVar39,&DAT_14ca216f0,puVar26,&local_178);
              FUN_141592600();
              FUN_140069376(param_1);
              puVar18 = local_2d8;
              puVar40 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar29 = puVar40 + 0x3d;
              if (*(undefined8 **)(param_1 + 0x78) < puVar29) {
                FUN_140023dd8(local_2d8,0x1f0);
                puVar40 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
                puVar29 = puVar40 + 0x3d;
              }
              *local_2d8 = (ulonglong)puVar29;
              dStack_170 = (double)DAT_14ca21738;
              if (DAT_14ca21738 != 0) {
                LOCK();
                *(int *)(DAT_14ca21738 + 8) = *(int *)(DAT_14ca21738 + 8) + 1;
                UNLOCK();
              }
              local_168 = &DAT_14ca216f0;
              local_2e8 = (undefined1 **)CONCAT71(local_2e8._1_7_,2);
              local_178 = puVar26;
              FUN_140068f1a(puVar40,&local_188,&local_178);
              *puVar40 = &PTR_FUN_14a2ae460;
              puVar40[0x37] = puVar26;
              puVar40[0x38] = puVar39;
              puVar40[0x39] = local_2c0;
              *(uint *)(puVar40 + 0x3a) = iVar36 + 0xffU >> 8;
              *(undefined1 **)((longlong)puVar40 + 0x1d4) = &DAT_100000001;
              puVar40[0x3c] = local_218;
              iVar36 = *(int *)(param_1 + 0x170);
              *(uint *)(param_1 + 0x170) = iVar36 + 1U;
              if (*(uint *)(param_1 + 0x174) < iVar36 + 1U) {
                FUN_14470e57a(local_260,iVar36);
              }
              puVar1 = (uint *)(local_250 + 8);
              *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar36 * 8) = puVar40;
              *(int *)((longlong)puVar40 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
              FUN_140069100(param_1,puVar40);
              lVar37 = local_250;
              LOCK();
              uVar28 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              iVar32 = local_278._0_4_;
              uVar30 = local_2a8;
              iVar36 = local_2c4;
              if ((uVar28 & 0x3fffffff) == 1) {
                LOCK();
                uVar28 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar28 >> 0x1e & 1) == 0) {
                  bVar15 = *(byte *)(local_250 + 0xd);
                  plVar23 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar23[1] = lVar37;
                  plVar25 = DAT_14ca843c0;
                  plVar24 = DAT_14ca843c8;
                  uVar30 = local_2a8;
                  iVar36 = local_2c4;
                  if ((bVar15 & 2) == 0) {
                    do {
                      *plVar23 = (longlong)plVar25;
                      LOCK();
                      bVar43 = plVar25 != DAT_14ca843c0;
                      plVar24 = plVar23;
                      if (bVar43) {
                        plVar25 = DAT_14ca843c0;
                        plVar24 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar24;
                      UNLOCK();
                    } while (bVar43);
                    uVar46 = 0xffffffff;
                    uVar47 = 0x7fffffff;
                    iVar32 = local_278._0_4_;
                  }
                  else {
                    do {
                      *plVar23 = (longlong)plVar24;
                      LOCK();
                      bVar43 = plVar24 != DAT_14ca843c8;
                      plVar25 = plVar23;
                      if (bVar43) {
                        plVar24 = DAT_14ca843c8;
                        plVar25 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar25;
                      UNLOCK();
                    } while (bVar43);
                  }
                }
              }
            }
          }
        }
LAB_142e6e7e5:
        plVar33 = plVar33 + 2;
      } while (plVar33 != plVar42);
    }
    uVar41 = local_280;
    if (local_280 != 0) {
      lVar37 = *(longlong *)(*(longlong *)(local_2d0 + 8) + 0x40);
      piVar27 = &DAT_14c760db4;
      if (lVar37 != 0) {
        piVar27 = (int *)(lVar37 + 8);
      }
      if ((*(longlong *)
            (&DAT_14ca814b0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar27 * 2) * 0x3c
            ) != DAT_14ca80038) ||
         ((*(byte *)((longlong)&DAT_14ca814d0 +
                    (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar27 * 2) * 0x3c + 3) & 1)
          != 0)) {
        DAT_14ca4d32c = iVar32 * 0x100 + DAT_14ca4d32c + 0x200;
        DAT_14ca4d330 = DAT_14ca4d330 + iVar32 * 0x20 + (int)uVar30 * 8;
        DAT_14ca4d100 = 1;
        plVar33 = (longlong *)(param_1 + 0x70);
        puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar26 = puVar29 + 0xc;
        if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
          FUN_140023dd8(plVar33,0x70);
          puVar29 = (undefined8 *)(*plVar33 + 0xfU & 0xfffffffffffffff0);
          puVar26 = puVar29 + 0xc;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar26;
        *puVar29 = &PTR_FUN_14a2ae478;
        puVar29[2] = 0;
        *(undefined1 *)(puVar29 + 3) = 1;
        puVar29[10] = 0;
        puVar29[4] = 0;
        puVar29[5] = 0;
        iVar20 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar20 + 1U) {
          FUN_1448cfae8(param_1 + 0x98,iVar20);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar20 * 8) = puVar29;
        *(int *)(puVar29 + 6) = iVar32;
        *(int *)((longlong)puVar29 + 0x34) = (int)uVar30;
        *(int *)(puVar29 + 7) = (int)local_288;
        *(int *)((longlong)puVar29 + 0x44) = (int)local_248;
        *(undefined4 *)(puVar29 + 9) = local_2ac;
        *(int *)((longlong)puVar29 + 0x3c) = local_294;
        *(int *)(puVar29 + 8) = iVar36;
        *(int *)((longlong)puVar29 + 0x4c) = (int)local_240;
        puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar26 = puVar39 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
          FUN_140023dd8(plVar33,0x50);
          puVar39 = (undefined8 *)(*plVar33 + 7U & 0xfffffffffffffff8);
          puVar26 = puVar39 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar26;
        puVar39[1] = *(undefined8 *)(uVar41 + 8);
        puVar39[2] = 0;
        *(undefined1 *)(puVar39 + 3) = 3;
        *(undefined8 *)((longlong)puVar39 + 0x1c) = 0xffffffffffffffff;
        *puVar39 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar39 + 5) = 0x1c;
        *(undefined8 *)((longlong)puVar39 + 0x2c) = 0xffffffff00000000;
        puVar39[7] = 0;
        puVar39[8] = uVar41;
        iVar36 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar36 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar36 + 1U) {
          FUN_1447568fc(param_1 + 0x198,iVar36);
        }
        lVar37 = local_2d0;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar36 * 8) = puVar39;
        *(int *)((longlong)puVar39 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar29[10] = puVar39;
        FUN_1472ea582(param_1,local_2d0 + 0x13870,puVar29 + 2);
        uVar38 = *(undefined8 *)(lVar37 + 0x13818);
        FUN_145e8ca56();
        FUN_1448e935e(uVar38,&local_178,&DAT_14ca1ccc8,0);
        FUN_145e8ca56();
        local_2e8 = &local_188;
        local_188 = &DAT_100000001;
        local_180 = 1;
        FUN_147279a1a(param_1,&local_189,&local_178,puVar29 + 2);
      }
    }
    plVar33 = local_208;
    iVar36 = *(int *)(*(longlong *)(local_2d0 + 8) + 0xac);
    *(int *)(local_208 + 8) = iVar36;
    if (((0 < *(int *)(DAT_14ca1c5d0 + 4)) && (0 < *(int *)(DAT_14ca1c5e8 + 4))) &&
       (uVar28 = *(uint *)(local_208 + 3), uVar28 != 0)) {
      plVar42 = local_208 + 2;
      uVar19 = 0;
      do {
        lVar37 = *plVar42;
        lVar31 = (longlong)(int)uVar19;
        iVar32 = *(int *)(*(longlong *)(lVar37 + lVar31 * 8) + 0x28);
        if (iVar32 == 0) {
LAB_142e6f338:
          uVar19 = uVar19 + 1;
        }
        else {
          iVar32 = iVar36 - iVar32;
          iVar20 = -iVar32;
          if (iVar20 < 0) {
            iVar20 = iVar32;
          }
          if (iVar20 <= *(int *)(DAT_14ca1c5e8 + 4)) goto LAB_142e6f338;
          puVar26 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar26 = 0;
          puVar26[1] = *(undefined8 *)(lVar37 + lVar31 * 8);
          if (puVar26 != (undefined8 *)0x0) {
            puVar29 = (undefined8 *)plVar33[4];
            plVar33[4] = (longlong)puVar26;
            *puVar29 = puVar26;
            lVar37 = plVar33[2];
          }
          uVar28 = uVar28 - 1;
          *(undefined8 *)(lVar37 + lVar31 * 8) = *(undefined8 *)(lVar37 + (longlong)(int)uVar28 * 8)
          ;
          FUN_147270e92(plVar42);
        }
      } while (uVar19 < uVar28);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e6f4cb FUN_142e6f4cb body=1241 status=ok
// SIG undefined FUN_142e6f4cb(void)

void FUN_142e6f4cb(longlong param_1,longlong param_2,int *param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong local_90;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_65;
  undefined1 *local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((param_4 != 0) && (*(byte *)(param_4 + 0x91) < 2)) &&
      (lVar4 = *(longlong *)(param_3 + 6), lVar4 != 0)) && (*(longlong *)(param_3 + 8) != 0)) {
    iVar3 = *(int *)(param_4 + 0x88);
    if (*(int *)(lVar4 + 0x88) < *(int *)(param_4 + 0x88)) {
      iVar3 = *(int *)(lVar4 + 0x88);
    }
    iVar6 = *(int *)(param_4 + 0x84);
    if (*(int *)(lVar4 + 0x84) < *(int *)(param_4 + 0x84)) {
      iVar6 = *(int *)(lVar4 + 0x84);
    }
    plVar1 = (longlong *)(param_1 + 0x70);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar9 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(plVar1,0x50);
      puVar9 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar9 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    *puVar9 = &PTR_FUN_14a2ae498;
    local_90 = param_1 + 0x98;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    iVar2 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
    local_98 = plVar1;
    if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8(local_90,iVar2);
    }
    plVar1 = local_98;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar9;
    *(int *)((longlong)puVar9 + 0x24) = *param_3;
    puVar9[2] = CONCAT44(iVar3,iVar6);
    *(int *)(puVar9 + 4) = param_3[2];
    *(int *)((longlong)puVar9 + 0x1c) = param_3[3];
    *(int *)(puVar9 + 3) = param_3[4];
    puVar9[5] = *(undefined8 *)(param_3 + 6);
    puVar9[6] = *(undefined8 *)(param_3 + 8);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 9;
    uVar8 = *(undefined1 *)(param_4 + 0x94);
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,*(undefined1 *)(param_4 + 0x94));
      FUN_140023dd8(local_98,0x50);
      puVar10 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 9;
      uVar8 = local_a0._0_1_;
    }
    local_a0 = puVar9 + 2;
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    puVar10[1] = *(undefined8 *)(param_4 + 8);
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar10 + 5) = 0;
    *puVar10 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar10 + 6) = uVar8;
    *(undefined1 *)(puVar10 + 7) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar10 + 0x35) = 0;
    puVar10[8] = param_4;
    iVar2 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar10;
    *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar9[7] = puVar10;
    uVar5 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145e8c4e6();
    FUN_1448e935e(uVar5,&local_58,&DAT_14ca1c828,0);
    FUN_145e8c4e6();
    local_80 = iVar3 + 0xe;
    if (-1 < iVar3 + 7) {
      local_80 = iVar3 + 7;
    }
    local_78 = local_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    local_80 = local_80 >> 3;
    local_84 = iVar6 + 0xe;
    if (-1 < iVar6 + 7) {
      local_84 = iVar6 + 7;
    }
    local_84 = local_84 >> 3;
    local_a8 = (undefined1 **)&local_84;
    local_7c = 1;
    FUN_147279eab(param_1,&local_58,&local_78,local_a0);
    plVar1 = local_98;
    if (((*(int *)(DAT_14ca1c660 + 4) == *param_3) && (*(longlong *)(param_3 + 6) != 0)) &&
       ((*(longlong *)(param_3 + 8) != 0 &&
        ((*(longlong *)
           (&DAT_14ca814b0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) * 0x3c)
          != DAT_14ca80038 ||
         ((*(byte *)((longlong)&DAT_14ca814d0 +
                    (ulonglong)
                    *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) * 0x3c +
                    3) & 1) != 0)))))) {
      DAT_14ca4d32c = DAT_14ca4d32c + 0x200;
      DAT_14ca4d100 = 1;
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar9 + 0xe;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(local_98,0x80);
        puVar9 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
        puVar7 = puVar9 + 0xe;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      *puVar9 = &PTR_FUN_14a2ae4b8;
      puVar9[10] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      *(undefined1 *)(puVar9 + 0xb) = 1;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      iVar3 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
        FUN_1448cfae8(local_90,iVar3);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar9;
      *(int *)((longlong)puVar9 + 0x2c) = *param_3;
      *(int *)(puVar9 + 6) = param_3[1];
      puVar9[3] = CONCAT44(*(int *)(param_2 + 0x3104) - *(int *)(param_2 + 0x30fc),
                           *(int *)(param_2 + 0x3100) - *(int *)(param_2 + 0x30f8));
      puVar9[2] = *(undefined8 *)(param_2 + 0x23d0);
      *(int *)((longlong)puVar9 + 0x24) = param_3[3];
      *(int *)(puVar9 + 5) = param_3[2];
      *(int *)(puVar9 + 4) = param_3[4];
      puVar9[7] = *(undefined8 *)(param_3 + 6);
      puVar9[8] = *(undefined8 *)(param_3 + 8);
      FUN_1472ea582(param_1,param_2 + 0x13870,puVar9 + 10);
      uVar5 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145f525a6();
      FUN_1448e935e(uVar5,&local_58,&DAT_14ca1c700,0);
      FUN_145f525a6();
      local_a8 = &local_64;
      local_64 = &DAT_100000001;
      local_5c = 1;
      FUN_14727a33d(param_1,&local_65,&local_58,puVar9 + 2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e6f9a5 FUN_142e6f9a5 body=69 status=ok
// SIG undefined FUN_142e6f9a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6f9a5(void)

{
  _DAT_14ca1cd98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6f9e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cda0,1);
  return;
}



// FUNCTION 142e6f9ea FUN_142e6f9ea body=69 status=ok
// SIG undefined FUN_142e6f9ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6f9ea(void)

{
  _DAT_14ca1cdb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cdb8,1);
  return;
}



// FUNCTION 142e6fa2f FUN_142e6fa2f body=69 status=ok
// SIG undefined FUN_142e6fa2f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fa2f(void)

{
  _DAT_14ca1cdc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fa71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cdd0,1);
  return;
}



// FUNCTION 142e6fa74 FUN_142e6fa74 body=69 status=ok
// SIG undefined FUN_142e6fa74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fa74(void)

{
  _DAT_14ca1cde0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cde8,1);
  return;
}



// FUNCTION 142e6fab9 FUN_142e6fab9 body=69 status=ok
// SIG undefined FUN_142e6fab9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fab9(void)

{
  _DAT_14ca1cdf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fafb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ce00,1);
  return;
}



// FUNCTION 142e6fafe FUN_142e6fafe body=69 status=ok
// SIG undefined FUN_142e6fafe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fafe(void)

{
  _DAT_14ca1ce10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ce18,1);
  return;
}



// FUNCTION 142e6fb43 FUN_142e6fb43 body=69 status=ok
// SIG undefined FUN_142e6fb43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fb43(void)

{
  _DAT_14ca1ce28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fb85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ce30,1);
  return;
}



// FUNCTION 142e6fb88 FUN_142e6fb88 body=69 status=ok
// SIG undefined FUN_142e6fb88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fb88(void)

{
  _DAT_14ca1ce40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fbca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ce48,1);
  return;
}



// FUNCTION 142e6fbcd FUN_142e6fbcd body=69 status=ok
// SIG undefined FUN_142e6fbcd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fbcd(void)

{
  _DAT_14ca1ce58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fc0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ce60,1);
  return;
}



// FUNCTION 142e6fc12 FUN_142e6fc12 body=69 status=ok
// SIG undefined FUN_142e6fc12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fc12(void)

{
  _DAT_14ca1ce70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ce78,1);
  return;
}



// FUNCTION 142e6fc57 FUN_142e6fc57 body=69 status=ok
// SIG undefined FUN_142e6fc57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fc57(void)

{
  _DAT_14ca1ce88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fc99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ce90,1);
  return;
}



// FUNCTION 142e6fc9c FUN_142e6fc9c body=69 status=ok
// SIG undefined FUN_142e6fc9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fc9c(void)

{
  _DAT_14ca1cea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fcde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cea8,1);
  return;
}



// FUNCTION 142e6fce1 FUN_142e6fce1 body=69 status=ok
// SIG undefined FUN_142e6fce1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fce1(void)

{
  _DAT_14ca1ceb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fd23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cec0,1);
  return;
}



// FUNCTION 142e6fd26 FUN_142e6fd26 body=69 status=ok
// SIG undefined FUN_142e6fd26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fd26(void)

{
  _DAT_14ca1ced0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1ced8,1);
  return;
}



// FUNCTION 142e6fd6b FUN_142e6fd6b body=69 status=ok
// SIG undefined FUN_142e6fd6b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fd6b(void)

{
  _DAT_14ca1cee8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fdad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cef0,1);
  return;
}



// FUNCTION 142e6fdb0 FUN_142e6fdb0 body=69 status=ok
// SIG undefined FUN_142e6fdb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fdb0(void)

{
  _DAT_14ca1cf00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fdf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cf08,1);
  return;
}



// FUNCTION 142e6fdf5 FUN_142e6fdf5 body=69 status=ok
// SIG undefined FUN_142e6fdf5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fdf5(void)

{
  _DAT_14ca1cf18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fe37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cf20,1);
  return;
}



// FUNCTION 142e6fe3a FUN_142e6fe3a body=69 status=ok
// SIG undefined FUN_142e6fe3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fe3a(void)

{
  _DAT_14ca1cf30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fe7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cf38,1);
  return;
}



// FUNCTION 142e6fe7f FUN_142e6fe7f body=69 status=ok
// SIG undefined FUN_142e6fe7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fe7f(void)

{
  _DAT_14ca1cf48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6fec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cf50,1);
  return;
}



// FUNCTION 142e6fec4 FUN_142e6fec4 body=69 status=ok
// SIG undefined FUN_142e6fec4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6fec4(void)

{
  _DAT_14ca1cf60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6ff06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cf68,1);
  return;
}



// FUNCTION 142e6ff09 FUN_142e6ff09 body=69 status=ok
// SIG undefined FUN_142e6ff09(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6ff09(void)

{
  _DAT_14ca1cf78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6ff4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cf80,1);
  return;
}



// FUNCTION 142e6ff4e FUN_142e6ff4e body=69 status=ok
// SIG undefined FUN_142e6ff4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6ff4e(void)

{
  _DAT_14ca1cf90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cf98,1);
  return;
}



// FUNCTION 142e6ff93 FUN_142e6ff93 body=69 status=ok
// SIG undefined FUN_142e6ff93(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6ff93(void)

{
  _DAT_14ca1cfa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e6ffd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cfb0,1);
  return;
}



// FUNCTION 142e6ffd8 FUN_142e6ffd8 body=69 status=ok
// SIG undefined FUN_142e6ffd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e6ffd8(void)

{
  _DAT_14ca1cfc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e7001a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cfc8,1);
  return;
}



// FUNCTION 142e7001d FUN_142e7001d body=69 status=ok
// SIG undefined FUN_142e7001d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e7001d(void)

{
  _DAT_14ca1cfd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e7005f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cfd8,1);
  return;
}



// FUNCTION 142e70062 FUN_142e70062 body=69 status=ok
// SIG undefined FUN_142e70062(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70062(void)

{
  _DAT_14ca1cfe8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e700a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1cff0,1);
  return;
}



// FUNCTION 142e700a7 FUN_142e700a7 body=69 status=ok
// SIG undefined FUN_142e700a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e700a7(void)

{
  _DAT_14ca1d000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e700e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d008,1);
  return;
}



// FUNCTION 142e700ec FUN_142e700ec body=69 status=ok
// SIG undefined FUN_142e700ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e700ec(void)

{
  _DAT_14ca1d018 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e7012e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d020,1);
  return;
}



// FUNCTION 142e70131 FUN_142e70131 body=69 status=ok
// SIG undefined FUN_142e70131(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70131(void)

{
  _DAT_14ca1d030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d038,1);
  return;
}



// FUNCTION 142e70176 FUN_142e70176 body=69 status=ok
// SIG undefined FUN_142e70176(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70176(void)

{
  _DAT_14ca1d048 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e701b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d050,1);
  return;
}



// FUNCTION 142e701bb FUN_142e701bb body=69 status=ok
// SIG undefined FUN_142e701bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e701bb(void)

{
  _DAT_14ca1d060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e701fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d068,1);
  return;
}



// FUNCTION 142e70200 FUN_142e70200 body=69 status=ok
// SIG undefined FUN_142e70200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70200(void)

{
  _DAT_14ca1d078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d080,1);
  return;
}



// FUNCTION 142e70245 FUN_142e70245 body=69 status=ok
// SIG undefined FUN_142e70245(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70245(void)

{
  _DAT_14ca1d090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70287. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d098,1);
  return;
}



// FUNCTION 142e7028a FUN_142e7028a body=69 status=ok
// SIG undefined FUN_142e7028a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e7028a(void)

{
  _DAT_14ca1d0a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e702cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d0b0,1);
  return;
}



// FUNCTION 142e702cf FUN_142e702cf body=69 status=ok
// SIG undefined FUN_142e702cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e702cf(void)

{
  _DAT_14ca1d0c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d0c8,1);
  return;
}



// FUNCTION 142e70314 FUN_142e70314 body=69 status=ok
// SIG undefined FUN_142e70314(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70314(void)

{
  _DAT_14ca1d0d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d0e0,1);
  return;
}



// FUNCTION 142e70359 FUN_142e70359 body=69 status=ok
// SIG undefined FUN_142e70359(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70359(void)

{
  _DAT_14ca1d0f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e7039b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d0f8,1);
  return;
}



// FUNCTION 142e7039e FUN_142e7039e body=69 status=ok
// SIG undefined FUN_142e7039e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e7039e(void)

{
  _DAT_14ca1d108 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e703e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d110,1);
  return;
}



// FUNCTION 142e703e3 FUN_142e703e3 body=69 status=ok
// SIG undefined FUN_142e703e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e703e3(void)

{
  _DAT_14ca1d120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d128,1);
  return;
}



// FUNCTION 142e70428 FUN_142e70428 body=69 status=ok
// SIG undefined FUN_142e70428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70428(void)

{
  _DAT_14ca1d138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e7046a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d140,1);
  return;
}



// FUNCTION 142e7046d FUN_142e7046d body=69 status=ok
// SIG undefined FUN_142e7046d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e7046d(void)

{
  _DAT_14ca1d150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e704af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d158,1);
  return;
}



// FUNCTION 142e704b2 FUN_142e704b2 body=69 status=ok
// SIG undefined FUN_142e704b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e704b2(void)

{
  _DAT_14ca1d168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e704f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d170,1);
  return;
}



// FUNCTION 142e704f7 FUN_142e704f7 body=69 status=ok
// SIG undefined FUN_142e704f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e704f7(void)

{
  _DAT_14ca1d180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d188,1);
  return;
}



// FUNCTION 142e7053c FUN_142e7053c body=69 status=ok
// SIG undefined FUN_142e7053c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e7053c(void)

{
  _DAT_14ca1d198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e7057e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d1a0,1);
  return;
}



// FUNCTION 142e70581 FUN_142e70581 body=69 status=ok
// SIG undefined FUN_142e70581(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70581(void)

{
  _DAT_14ca1d1b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e705c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d1b8,1);
  return;
}



// FUNCTION 142e705c6 FUN_142e705c6 body=69 status=ok
// SIG undefined FUN_142e705c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e705c6(void)

{
  _DAT_14ca1d1c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d1d0,1);
  return;
}



// FUNCTION 142e7060b FUN_142e7060b body=69 status=ok
// SIG undefined FUN_142e7060b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e7060b(void)

{
  _DAT_14ca1d1e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e7064d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d1e8,1);
  return;
}



// FUNCTION 142e70650 FUN_142e70650 body=69 status=ok
// SIG undefined FUN_142e70650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70650(void)

{
  _DAT_14ca1d1f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d200,1);
  return;
}



// FUNCTION 142e70695 FUN_142e70695 body=69 status=ok
// SIG undefined FUN_142e70695(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70695(void)

{
  _DAT_14ca1d210 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e706d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d218,1);
  return;
}



// FUNCTION 142e706da FUN_142e706da body=69 status=ok
// SIG undefined FUN_142e706da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e706da(void)

{
  _DAT_14ca1d228 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e7071c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d230,1);
  return;
}



// FUNCTION 142e7071f FUN_142e7071f body=69 status=ok
// SIG undefined FUN_142e7071f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e7071f(void)

{
  _DAT_14ca1d240 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d248,1);
  return;
}



// FUNCTION 142e70764 FUN_142e70764 body=69 status=ok
// SIG undefined FUN_142e70764(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70764(void)

{
  _DAT_14ca1d258 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e707a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d260,1);
  return;
}



// FUNCTION 142e707a9 FUN_142e707a9 body=69 status=ok
// SIG undefined FUN_142e707a9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e707a9(void)

{
  _DAT_14ca1d270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e707eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d278,1);
  return;
}



// FUNCTION 142e707ee FUN_142e707ee body=69 status=ok
// SIG undefined FUN_142e707ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e707ee(void)

{
  _DAT_14ca1d288 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d290,1);
  return;
}



// FUNCTION 142e70833 FUN_142e70833 body=69 status=ok
// SIG undefined FUN_142e70833(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70833(void)

{
  _DAT_14ca1d2a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d2a8,1);
  return;
}



// FUNCTION 142e70878 FUN_142e70878 body=69 status=ok
// SIG undefined FUN_142e70878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70878(void)

{
  _DAT_14ca1d2b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e708ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d2c0,1);
  return;
}



// FUNCTION 142e708bd FUN_142e708bd body=69 status=ok
// SIG undefined FUN_142e708bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e708bd(void)

{
  _DAT_14ca1d2d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e708ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d2d8,1);
  return;
}



// FUNCTION 142e70902 FUN_142e70902 body=69 status=ok
// SIG undefined FUN_142e70902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70902(void)

{
  _DAT_14ca1d2e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d2f0,1);
  return;
}



// FUNCTION 142e70947 FUN_142e70947 body=69 status=ok
// SIG undefined FUN_142e70947(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e70947(void)

{
  _DAT_14ca1d300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e70989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d308,1);
  return;
}



// FUNCTION 142e7098c FUN_142e7098c body=69 status=ok
// SIG undefined FUN_142e7098c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e7098c(void)

{
  _DAT_14ca1d318 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e709ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1d320,1);
  return;
}



// FUNCTION 142e709d1 FUN_142e709d1 body=47 status=ok
// SIG undefined FUN_142e709d1(void)

void FUN_142e709d1(void)

{
  DAT_14ca1d378 = 0;
  if (DAT_14ca1d370 != 0) {
    FUN_1400020a8();
  }
  FUN_1410baed6(&DAT_14ca1d330);
  return;
}



// FUNCTION 142e70a30 FUN_142e70a30 body=119 status=ok
// SIG undefined FUN_142e70a30(void)

undefined8 FUN_142e70a30(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca97170;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  uVar5 = 0x40;
  if (0 < *(int *)(lVar2 + uVar6 * 4)) {
    uVar5 = 0x4c;
  }
  return uVar5;
}



// FUNCTION 142e70c0b FUN_142e70c0b body=4635 status=ok
// SIG undefined FUN_142e70c0b(void)

ulonglong FUN_142e70c0b(longlong param_1,longlong param_2,longlong param_3,byte param_4,char param_5
                       ,ulonglong *param_6)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  DWORD DVar17;
  DWORD DVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  byte bVar25;
  uint uVar26;
  undefined8 *puVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_1b8 [32];
  uint *local_198;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  uint local_16c;
  ulonglong local_168;
  longlong local_160;
  int local_154;
  longlong *local_150;
  uint *local_148;
  ulonglong *local_140;
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
  undefined1 local_e1;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  undefined4 local_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  undefined4 local_9c;
  byte local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined2 uStack_95;
  undefined1 local_93;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_6[2] = DAT_14c9c0de0;
  local_138 = 0;
  uStack_130 = 0x3f80000000000000;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_144887cb2(0,param_3,&local_138);
  param_4 = 0.0 < local_138._4_4_ & param_4;
  if (param_4 == 0) {
    uVar19 = FUN_14473c272(param_1,&DAT_14ca63b28,0);
    *param_6 = uVar19;
    uVar19 = FUN_14473c272(param_1,&DAT_14ca63b28,0);
    param_6[1] = uVar19;
    param_6[3] = 0;
    goto LAB_142e70ceb;
  }
  iVar14 = FUN_147283c6e();
  lVar9 = DAT_14ca1cf10;
  if ((iVar14 < *(int *)(param_1 + 0x130)) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar14 * 8), lVar5 != 0)) {
    uVar4 = *(undefined4 *)(lVar5 + 0x10);
    uVar10 = *(undefined4 *)(lVar5 + 0x14);
    uVar11 = *(undefined4 *)(lVar5 + 0x18);
    uVar12 = *(undefined4 *)(lVar5 + 0x1c);
    uVar19 = *(ulonglong *)(lVar5 + 0x28);
    param_6[2] = *(ulonglong *)(lVar5 + 0x20);
    param_6[3] = uVar19;
    *(undefined4 *)param_6 = uVar4;
    *(undefined4 *)((longlong)param_6 + 4) = uVar10;
    *(undefined4 *)(param_6 + 1) = uVar11;
    *(undefined4 *)((longlong)param_6 + 0xc) = uVar12;
    goto LAB_142e70ceb;
  }
  iVar14 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar14 == 0x40000002) {
    uVar19 = 0;
  }
  else {
    bVar28 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar14 != 2)) {
      if (iVar14 == 1) {
        DVar17 = FUN_140ad26c0();
        DVar18 = GetCurrentThreadId();
        bVar28 = DVar17 == DVar18;
      }
      else {
        bVar28 = false;
      }
    }
    uVar19 = (ulonglong)(bVar28 ^ 1);
  }
  lVar5 = *(longlong *)(param_2 + 0x3608);
  fVar32 = *(float *)(lVar5 + 0x150) * DAT_14c76144c * *(float *)(lVar5 + 0x13c);
  fVar30 = *(float *)(lVar5 + 0x14c) * DAT_14c76144c * *(float *)(lVar5 + 0x138);
  fVar31 = *(float *)(lVar5 + 0x148) * DAT_14c76144c * *(float *)(lVar5 + 0x134);
  fVar29 = DAT_14c76144c * *(float *)(lVar5 + 0x144) * *(float *)(lVar5 + 0x130);
  iVar14 = *(int *)(lVar9 + uVar19 * 4);
  if ((((fVar29 != *(float *)(param_2 + 0x3678)) ||
       (NAN(fVar29) || NAN(*(float *)(param_2 + 0x3678)))) ||
      (fVar31 != *(float *)(param_2 + 0x367c))) ||
     (NAN(fVar31) || NAN(*(float *)(param_2 + 0x367c)))) {
LAB_142e70e4a:
    plVar22 = *(longlong **)(param_2 + 0x3668);
    if (plVar22 != (longlong *)0x0) {
      *(undefined8 *)(param_2 + 0x3668) = 0;
      (**(code **)(*plVar22 + 0x38))();
    }
    plVar22 = *(longlong **)(param_2 + 0x3670);
    if (plVar22 != (longlong *)0x0) {
      *(undefined8 *)(param_2 + 0x3670) = 0;
      (**(code **)(*plVar22 + 0x38))();
    }
  }
  else {
    if (((fVar30 != *(float *)(param_2 + 0x3680)) ||
        (NAN(fVar30) || NAN(*(float *)(param_2 + 0x3680)))) || (iVar14 == 0)) goto LAB_142e70e4a;
    if ((fVar32 != *(float *)(param_2 + 0x3684)) ||
       (NAN(fVar32) || NAN(*(float *)(param_2 + 0x3684)))) goto LAB_142e70e4a;
  }
  plVar22 = (longlong *)(param_2 + 0x3668);
  if ((*(longlong *)(param_2 + 0x3668) != 0) && (*(longlong *)(param_2 + 0x3670) != 0)) {
    uVar19 = FUN_14476842e(param_1,plVar22,L"PathTracer.Skylight",0);
    *param_6 = uVar19;
    uVar19 = FUN_14476842e(param_1,param_2 + 0x3670,L"PathTracer.SkylightPdf",0);
    param_6[1] = uVar19;
    *(float *)(param_6 + 3) = 1.0 / (float)*(int *)(*param_6 + 0x84);
    *(uint *)((longlong)param_6 + 0x1c) = (uint)*(byte *)(uVar19 + 0x90);
    goto LAB_142e70ceb;
  }
  *(float *)(param_2 + 0x3678) = fVar29;
  *(float *)(param_2 + 0x367c) = fVar31;
  *(float *)(param_2 + 0x3680) = fVar30;
  *(float *)(param_2 + 0x3684) = fVar32;
  iVar16 = *(int *)(*(longlong *)(param_2 + 0x3608) + 0x118) * 2;
  uVar19 = (ulonglong)(iVar16 + -1 + (uint)(iVar16 == 0)) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar19 != 0) {
    for (; uVar19 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  uVar26 = 1 << ((byte)lVar9 & 0x1f);
  puVar6 = *(ulonglong **)(param_1 + 0x18);
  local_154 = iVar14;
  local_150 = plVar22;
  local_140 = puVar6;
  if (iVar14 == 0) {
    uVar15 = *(uint *)((longlong)puVar6 + 0x17c);
LAB_142e70fa3:
    local_148 = (uint *)((longlong)puVar6 + 0x17c);
    local_16c = uVar15;
  }
  else {
    uVar15 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_148 = (uint *)((longlong)puVar6 + 0x17c);
    local_16c = *(uint *)((longlong)puVar6 + 0x17c);
    if (local_16c == uVar15) goto LAB_142e70fa3;
    *(uint *)((longlong)puVar6 + 0x17c) = uVar15;
    puVar27 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
    puVar20 = puVar27 + 3;
    if ((undefined8 *)puVar6[1] < puVar20) {
      FUN_140023dd8(puVar6,0x20);
      puVar27 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar20 = puVar27 + 3;
    }
    *puVar6 = (ulonglong)puVar20;
    *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
    *(undefined8 **)puVar6[6] = puVar27;
    puVar6[6] = (ulonglong)(puVar27 + 1);
    uVar4 = *(undefined4 *)((longlong)puVar6 + 0x17c);
    puVar27[1] = 0;
    *puVar27 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar27 + 2) = uVar4;
  }
  local_178 = (longlong *)(longlong)*(int *)(param_3 + 0x3090);
  local_b0 = DAT_14ca85098;
  uStack_c0 = DAT_14ca85088;
  uStack_bc = DAT_14ca8508c;
  uStack_b8 = DAT_14ca85090;
  uStack_b4 = DAT_14ca85094;
  local_ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uStack_96 = 0;
  local_c8 = &DAT_00020008;
  uStack_95 = 1;
  local_9c = 0x10001;
  local_98 = 1;
  uStack_97 = 1;
  local_a8 = 0;
  local_93 = 0xff;
  uVar15 = DAT_14ca84e40;
  if ((int)uVar26 < (int)DAT_14ca84e40) {
    uVar15 = uVar26;
  }
  local_a4 = 1;
  if (1 < (int)uVar15) {
    local_a4 = uVar15;
  }
  plVar22 = (longlong *)(param_1 + 0x70);
  uVar23 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar19 = uVar23 + 0x120;
  local_188 = plVar22;
  local_a0 = local_a4;
  if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
    FUN_140023dd8(plVar22,0x128);
    uVar23 = *plVar22 + 7U & 0xfffffffffffffff8;
    uVar19 = uVar23 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar19;
  FUN_1456bbb8c(uVar23,L"PathTracer.Skylight",&local_c8,0);
  iVar14 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar14 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar14);
  }
  plVar22 = local_188;
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar14 * 8) = uVar23;
  *(int *)(uVar23 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  *param_6 = uVar23;
  uVar19 = (ulonglong)(uVar26 - 1) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar19 != 0) {
    for (; uVar19 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  bVar25 = 0x40 - ((byte)lVar9 ^ 0x3f);
  local_b0 = DAT_14ca85098;
  uStack_c0 = DAT_14ca85088;
  uStack_bc = DAT_14ca8508c;
  uStack_b8 = DAT_14ca85090;
  uStack_b4 = DAT_14ca85094;
  local_ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_c8 = &DAT_00020008;
  local_9c = 0x10001;
  uStack_97 = 1;
  uStack_96 = 0;
  uStack_95 = 0xd;
  local_a8 = 0;
  local_93 = 0xff;
  uVar15 = DAT_14ca84e40;
  if ((int)uVar26 < (int)DAT_14ca84e40) {
    uVar15 = uVar26;
  }
  local_a4 = 1;
  if (1 < (int)uVar15) {
    local_a4 = uVar15;
  }
  uVar23 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar19 = uVar23 + 0x120;
  local_168 = (ulonglong)uVar26;
  local_a0 = local_a4;
  local_98 = bVar25;
  if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
    FUN_140023dd8(local_188,0x128);
    uVar23 = *plVar22 + 7U & 0xfffffffffffffff8;
    uVar19 = uVar23 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar19;
  FUN_1456bbb8c(uVar23,L"PathTracer.SkylightPdf",&local_c8,0);
  iVar14 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar14 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar14);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar14 * 8) = uVar23;
  *(int *)(uVar23 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  param_6[1] = uVar23;
  *(float *)(param_6 + 3) = 1.0 / (float)(local_168 & 0xffffffff);
  *(uint *)((longlong)param_6 + 0x1c) = (uint)bVar25;
  uVar7 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)local_178 * 2) * 8);
  FUN_145f52b9c();
  FUN_1448e935e(uVar7,&local_c8,&DAT_14ca1d3f0,0);
  FUN_145f52b9c();
  plVar22 = local_188;
  puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar20 = puVar27 + 0xc;
  if (*(undefined8 **)(param_1 + 0x78) < puVar20) {
    FUN_140023dd8(local_188,0x70);
    puVar27 = (undefined8 *)(*plVar22 + 0xfU & 0xfffffffffffffff0);
    puVar20 = puVar27 + 0xc;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar20;
  *puVar27 = &PTR_FUN_14a2b2038;
  plVar22 = (longlong *)(param_1 + 0x98);
  puVar27[2] = 0;
  puVar27[3] = 0;
  puVar27[4] = 0;
  puVar27[5] = 0;
  puVar27[7] = 0;
  puVar27[8] = 0;
  iVar14 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar14 + 1U) {
    FUN_1448cfae8(plVar22,iVar14);
  }
  plVar8 = local_188;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar14 * 8) = puVar27;
  *(float *)(puVar27 + 10) = fVar29;
  *(float *)((longlong)puVar27 + 0x54) = fVar31;
  *(float *)(puVar27 + 0xb) = fVar30;
  puVar27[2] = local_128;
  puVar27[3] = local_118;
  puVar27[4] = uStack_120;
  puVar27[5] = uStack_110;
  *(undefined4 *)(puVar27 + 6) = uStack_130._4_4_;
  *(int *)((longlong)puVar27 + 0x34) = (int)param_6[3];
  uVar19 = *param_6;
  uVar3 = *(undefined1 *)(uVar19 + 0x94);
  puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar20 = puVar24 + 9;
  local_180 = plVar22;
  if (*(undefined8 **)(param_1 + 0x78) < puVar20) {
    FUN_140023dd8(local_188,0x50);
    puVar24 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
    puVar20 = puVar24 + 9;
  }
  local_160 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar20;
  puVar24[1] = *(undefined8 *)(uVar19 + 8);
  puVar24[2] = 0;
  *(undefined1 *)(puVar24 + 3) = 0;
  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar24 + 5) = 0;
  *puVar24 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar24 + 6) = uVar3;
  *(undefined1 *)(puVar24 + 7) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
  puVar24[8] = uVar19;
  iVar14 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
    FUN_1447568fc(local_160,iVar14);
  }
  plVar22 = local_188;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar24;
  *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar27[7] = puVar24;
  uVar19 = param_6[1];
  uVar3 = *(undefined1 *)(uVar19 + 0x94);
  puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar20 = puVar24 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar20) {
    FUN_140023dd8(local_188,0x50);
    puVar24 = (undefined8 *)(*plVar22 + 7U & 0xfffffffffffffff8);
    puVar20 = puVar24 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar20;
  puVar24[1] = *(undefined8 *)(uVar19 + 8);
  puVar24[2] = 0;
  *(undefined1 *)(puVar24 + 3) = 0;
  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar24 + 5) = 0;
  *puVar24 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar24 + 6) = uVar3;
  *(undefined1 *)(puVar24 + 7) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
  puVar24[8] = uVar19;
  iVar14 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
    FUN_1447568fc(local_160,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar24;
  *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar27[8] = puVar24;
  iVar16 = (int)local_168 + 7;
  iVar14 = (int)local_168 + 0xe;
  if (-1 < iVar16) {
    iVar14 = iVar16;
  }
  local_d4 = iVar14 >> 3;
  uVar19 = (ulonglong)local_d4;
  local_198 = &local_d4;
  local_cc = 1;
  local_d0 = local_d4;
  FUN_1472758c7(param_1,&local_e0,&local_c8,puVar27 + 2);
  plVar22 = local_178;
  FUN_1431f2e4c(param_1,(ulonglong)local_178 & 0xffffffff,param_6[1],DAT_14c9c0de0);
  if (param_5 != '\0') {
    uVar7 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)plVar22 * 2) * 8);
    FUN_145e8cfc6();
    FUN_1448e935e(uVar7,&local_c8,&DAT_14ca1d518,0);
    FUN_145e8cfc6();
    plVar22 = local_188;
    puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar20 = puVar27 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar20) {
      FUN_140023dd8(local_188);
      puVar27 = (undefined8 *)(*plVar22 + 0xfU & 0xfffffffffffffff0);
      puVar20 = puVar27 + 8;
    }
    plVar22 = local_180;
    *(undefined8 **)(param_1 + 0x70) = puVar20;
    *puVar27 = &PTR_FUN_14a2b2058;
    puVar27[2] = 0;
    puVar27[3] = 0;
    puVar27[4] = 0;
    iVar14 = *(int *)(param_1 + 0xa0);
    uVar26 = iVar14 + 1;
    *(uint *)(param_1 + 0xa0) = uVar26;
    local_168 = uVar19;
    if (*(uint *)(param_1 + 0xa4) < uVar26) {
      FUN_1448cfae8(local_180);
    }
    plVar8 = local_188;
    *(undefined8 **)(*plVar22 + (longlong)iVar14 * 8) = puVar27;
    uVar4 = *(undefined4 *)((longlong)param_6 + 0x1c);
    uVar19 = param_6[1];
    if ((*(char *)(uVar19 + 0x92) == '\x04') || (*(char *)(uVar19 + 0x92) == '\x01')) {
      uVar26 = (uint)*(ushort *)(uVar19 + 0x8e);
    }
    else {
      uVar26 = 0;
    }
    puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar20 = puVar24 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar20) {
      local_180 = (longlong *)CONCAT44(local_180._4_4_,uVar26);
      FUN_140023dd8(local_188,0x48);
      puVar24 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
      puVar20 = puVar24 + 8;
      uVar26 = (uint)local_180;
    }
    plVar22 = puVar27 + 2;
    *(undefined8 **)(param_1 + 0x70) = puVar20;
    puVar24[1] = *(undefined8 *)(uVar19 + 8);
    puVar24[2] = 0;
    *(undefined1 *)(puVar24 + 3) = 1;
    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
    *puVar24 = &PTR_FUN_14a203858;
    *(undefined1 *)(puVar24 + 5) = 0;
    *(char *)((longlong)puVar24 + 0x29) = (char)uVar4 + -1;
    *(undefined4 *)((longlong)puVar24 + 0x2a) = 1;
    *(short *)((longlong)puVar24 + 0x2e) = (short)uVar26;
    *(undefined1 *)(puVar24 + 6) = 0;
    *(undefined1 *)((longlong)puVar24 + 0x32) = 0;
    puVar24[7] = uVar19;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    plVar8 = local_188;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar24;
    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    *plVar22 = (longlong)puVar24;
    uVar19 = *param_6;
    uVar3 = *(undefined1 *)(uVar19 + 0x94);
    puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar20 = puVar24 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar20) {
      local_180 = plVar22;
      FUN_140023dd8(local_188,0x50);
      puVar24 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
      puVar20 = puVar24 + 9;
      plVar22 = local_180;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar20;
    puVar24[1] = *(undefined8 *)(uVar19 + 8);
    puVar24[2] = 0;
    *(undefined1 *)(puVar24 + 3) = 0;
    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar24 + 5) = 0;
    *puVar24 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar24 + 6) = uVar3;
    *(undefined1 *)(puVar24 + 7) = 0;
    *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
    puVar24[8] = uVar19;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    plVar8 = local_188;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar24;
    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar27[3] = puVar24;
    uVar19 = param_6[1];
    uVar3 = *(undefined1 *)(uVar19 + 0x94);
    puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar20 = puVar24 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar20) {
      local_180 = plVar22;
      FUN_140023dd8(local_188,0x50);
      puVar24 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
      puVar20 = puVar24 + 9;
      plVar22 = local_180;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar20;
    puVar24[1] = *(undefined8 *)(uVar19 + 8);
    puVar24[2] = 0;
    *(undefined1 *)(puVar24 + 3) = 0;
    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar24 + 5) = 0;
    *puVar24 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar24 + 6) = uVar3;
    *(undefined1 *)(puVar24 + 7) = 0;
    *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
    puVar24[8] = uVar19;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(local_160,iVar14);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar24;
    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar27[4] = puVar24;
    local_e0 = (uint)local_168;
    local_d8 = 1;
    local_198 = &local_e0;
    local_dc = local_e0;
    FUN_147275979(param_1,&local_e1,&local_c8,plVar22);
    FUN_1431f2e4c(param_1,local_178,param_6[1],DAT_14c9c0de0);
  }
  uVar19 = param_1 + 0x120;
  if (local_154 != 0) {
    uVar23 = *param_6;
    plVar22 = (longlong *)*local_150;
    local_168 = uVar19;
    if (plVar22 != (longlong *)0x0) {
      *local_150 = 0;
      (**(code **)(*plVar22 + 0x38))();
    }
    bVar25 = *(byte *)(uVar23 + 0x24);
    *(byte *)(uVar23 + 0x24) = bVar25 | 2;
    *(undefined1 *)(uVar23 + 0x26) = 1;
    plVar22 = (longlong *)(param_1 + 0x1b8);
    iVar14 = *(int *)(param_1 + 0x1c0);
    *(uint *)(param_1 + 0x1c0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1c4) < iVar14 + 1U) {
      FUN_14017e38e(plVar22,iVar14);
    }
    lVar9 = *plVar22;
    *(ulonglong *)(lVar9 + (longlong)iVar14 * 0x10) = uVar23;
    *(longlong **)(lVar9 + 8 + (longlong)iVar14 * 0x10) = local_150;
    if ((bVar25 & 2) == 0) {
      pcVar1 = (char *)(param_1 + 0x4a8);
      LOCK();
      bVar28 = *(char *)(param_1 + 0x4a8) == '\0';
      if (bVar28) {
        *(char *)(param_1 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar28) {
        FUN_1447d2058();
      }
      iVar14 = *(int *)(param_1 + 0x4b8);
      *(uint *)(param_1 + 0x4b8) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0x4bc) < iVar14 + 1U) {
        local_178 = plVar22;
        FUN_1447f2dbc((longlong *)(param_1 + 0x4b0),iVar14);
        plVar22 = local_178;
      }
      lVar9 = *(longlong *)(param_1 + 0x4b0);
      *(undefined8 *)(lVar9 + (longlong)iVar14 * 0x10) = 2;
      *(ulonglong *)(lVar9 + 8 + (longlong)iVar14 * 0x10) = uVar23;
      LOCK();
      cVar2 = *pcVar1;
      if (cVar2 == '\x01') {
        *pcVar1 = '\0';
      }
      UNLOCK();
      if (cVar2 != '\x01') {
        FUN_14008cdb0(pcVar1);
      }
    }
    uVar23 = param_6[1];
    plVar8 = *(longlong **)(param_2 + 0x3670);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_2 + 0x3670) = 0;
      (**(code **)(*plVar8 + 0x38))();
    }
    uVar19 = local_168;
    bVar25 = *(byte *)(uVar23 + 0x24);
    *(byte *)(uVar23 + 0x24) = bVar25 | 2;
    *(undefined1 *)(uVar23 + 0x26) = 1;
    iVar14 = *(int *)(param_1 + 0x1c0);
    *(uint *)(param_1 + 0x1c0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1c4) < iVar14 + 1U) {
      local_178 = plVar22;
      FUN_14017e38e(plVar22,iVar14);
      plVar22 = local_178;
    }
    lVar9 = *plVar22;
    *(ulonglong *)(lVar9 + (longlong)iVar14 * 0x10) = uVar23;
    *(undefined8 **)(lVar9 + 8 + (longlong)iVar14 * 0x10) = (undefined8 *)(param_2 + 0x3670);
    if ((bVar25 & 2) == 0) {
      pcVar1 = (char *)(param_1 + 0x4a8);
      LOCK();
      bVar28 = *(char *)(param_1 + 0x4a8) == '\0';
      if (bVar28) {
        *(char *)(param_1 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar28) {
        FUN_1447d2058();
      }
      iVar14 = *(int *)(param_1 + 0x4b8);
      *(uint *)(param_1 + 0x4b8) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0x4bc) < iVar14 + 1U) {
        FUN_1447f2dbc((longlong *)(param_1 + 0x4b0),iVar14);
      }
      lVar9 = *(longlong *)(param_1 + 0x4b0);
      *(undefined8 *)(lVar9 + (longlong)iVar14 * 0x10) = 2;
      *(ulonglong *)(lVar9 + 8 + (longlong)iVar14 * 0x10) = uVar23;
      LOCK();
      cVar2 = *pcVar1;
      if (cVar2 == '\x01') {
        *pcVar1 = '\0';
      }
      UNLOCK();
      if (cVar2 != '\x01') {
        FUN_14008cdb0(pcVar1);
      }
    }
  }
  puVar21 = (undefined4 *)FUN_147275a2c(uVar19);
  puVar6 = local_140;
  uVar19 = *param_6;
  uVar4 = *(undefined4 *)((longlong)param_6 + 4);
  uVar23 = param_6[1];
  uVar10 = *(undefined4 *)((longlong)param_6 + 0xc);
  uVar11 = *(undefined4 *)((longlong)param_6 + 0x14);
  uVar13 = param_6[3];
  uVar12 = *(undefined4 *)((longlong)param_6 + 0x1c);
  puVar21[4] = (int)param_6[2];
  puVar21[5] = uVar11;
  puVar21[6] = (int)uVar13;
  puVar21[7] = uVar12;
  *puVar21 = (int)uVar19;
  puVar21[1] = uVar4;
  puVar21[2] = (int)uVar23;
  puVar21[3] = uVar10;
  if (*local_148 != local_16c) {
    *(uint *)((longlong)local_140 + 0x17c) = local_16c;
    puVar27 = (undefined8 *)(*local_140 + 7 & 0xfffffffffffffff8);
    puVar20 = puVar27 + 3;
    if ((undefined8 *)local_140[1] < puVar20) {
      FUN_140023dd8(local_140,0x20);
      puVar27 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar20 = puVar27 + 3;
    }
    *puVar6 = (ulonglong)puVar20;
    *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
    *(undefined8 **)puVar6[6] = puVar27;
    puVar6[6] = (ulonglong)(puVar27 + 1);
    uVar4 = *(undefined4 *)((longlong)puVar6 + 0x17c);
    puVar27[1] = 0;
    *puVar27 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar27 + 2) = uVar4;
  }
LAB_142e70ceb:
  if ((local_90 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)&local_138 >> 8),param_4) & 0xffffffff;
}



// FUNCTION 142e71e27 FUN_142e71e27 body=8220 status=ok
// SIG undefined FUN_142e71e27(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e71e27(longlong param_1,longlong param_2,undefined8 *param_3,undefined1 param_4,
                  char param_5,undefined8 param_6,float *param_7,float *param_8,float *param_9,
                  undefined8 *param_10)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  float fVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  float *pfVar27;
  float fVar28;
  longlong lVar29;
  undefined4 uVar30;
  int iVar31;
  uint *puVar32;
  ulonglong uVar33;
  undefined8 unaff_R13;
  undefined8 *puVar34;
  float fVar35;
  int *piVar36;
  uint uVar37;
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
  float fVar54;
  float fVar55;
  undefined1 auStack_238 [32];
  int *local_218;
  longlong local_210;
  undefined1 local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  uint *local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198;
  undefined1 local_18d;
  int local_18c;
  int local_188;
  undefined4 local_184;
  int local_180;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double dStack_170;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined2 local_150;
  undefined2 uStack_14e;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  float local_148;
  uint local_144;
  uint local_140;
  undefined8 local_13c;
  float local_134;
  float local_130;
  undefined8 local_12c;
  float local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  float local_104;
  int local_100;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *param_8 = 0.0;
  uVar8 = (*(int *)(param_2 + 0x3558) - *(int *)(param_2 + 0x3584)) + 1;
  plVar22 = (longlong *)(param_1 + 0x70);
  piVar36 = (int *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  piVar12 = piVar36 + (ulonglong)uVar8 * 0x1b;
  local_1f8 = param_3;
  local_1e8 = param_2;
  if (*(int **)(param_1 + 0x78) < piVar12) {
    FUN_140023dd8(plVar22,uVar8 * 0x6c + 0x10);
    piVar36 = (int *)(*plVar22 + 0xfU & 0xfffffffffffffff0);
    piVar12 = piVar36 + (ulonglong)uVar8 * 0x1b;
  }
  *(int **)(param_1 + 0x70) = piVar12;
  uVar20 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_5) & 0xffffffff ^ 1;
  local_210 = param_6;
  local_218 = (int *)CONCAT71(local_218._1_7_,param_4);
  cVar6 = FUN_142e70c0b(param_1,local_1e8,local_1f8);
  local_1c8 = 0.0;
  if (cVar6 != '\0') {
    *(undefined1 **)(piVar36 + 9) = &DAT_3f8000003f800000;
    piVar36[0xb] = 0x3f800000;
    uVar8 = *(byte *)(*(longlong *)(local_1e8 + 0x3608) + 0x22) & 4;
    piVar36[0x15] = uVar8 * 2 + 7;
    uVar8 = (*(byte *)(*(longlong *)(local_1e8 + 0x3608) + 0x20) & 1) * 0x200 + uVar8 * 2 + 7;
    piVar36[0x15] = uVar8;
    piVar36[0x15] = (*(byte *)(*(longlong *)(local_1e8 + 0x3608) + 0x20) & 8) << 7 | uVar8;
    piVar36[0x10] = 0x3c003c00;
    piVar36[0x13] = *(int *)(*(longlong *)(local_1e8 + 0x3608) + 0x2c);
    piVar36[0x14] = -0x40800000;
    piVar36[0x16] = 0;
    if (((*(char *)(*(longlong *)(local_1e8 + 0x3608) + 0xf8) == '\x01') &&
        ((local_1f8[0x26e8] == 0 || ((*(byte *)(local_1f8[0x622] + 0x15b0) & 1) == 0)))) ||
       (local_1c8 = 1.4013e-45, *(int *)(DAT_14ca1cf28 + 4) == 2)) {
      *param_8 = 1.4013e-45;
      lVar21 = *(longlong *)(local_1e8 + 0x3608);
      local_1c8 = 1.4013e-45;
      if (*(char *)(lVar21 + 0xf8) == '\x01') {
        fVar39 = *(float *)(lVar21 + 0x14c) * DAT_14c76144c;
        fVar40 = *(float *)(lVar21 + 0x148) * DAT_14c76144c;
        fVar17 = *(float *)(lVar21 + 0x138);
        fVar28 = *(float *)(lVar21 + 0x134);
        piVar36[9] = (int)(DAT_14c76144c * *(float *)(lVar21 + 0x144) * *(float *)(lVar21 + 0x130));
        piVar36[10] = (int)(fVar40 * fVar28);
        piVar36[0xb] = (int)(fVar39 * fVar17);
      }
    }
  }
  iVar9 = FUN_14714c33c();
  auVar5 = _DAT_1499319a0;
  if ((iVar9 < *(int *)(param_1 + 0x130)) &&
     (lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar9 * 8), lVar21 != 0)) {
    local_1d0 = (longlong *)(lVar21 + 8);
  }
  else {
    local_1d0 = (longlong *)0x0;
  }
  puVar32 = (uint *)(local_1e8 + 0x3560);
  uVar8 = *(uint *)(local_1e8 + 0x3578);
  lVar21 = local_1e8;
  local_1f0 = puVar32;
  local_1d8 = plVar22;
  local_1a8 = param_1;
  if (uVar8 == 0) {
    uVar25 = 1;
    iVar9 = 0;
    uVar33 = 0;
    uVar10 = 0;
  }
  else {
    puVar13 = *(uint **)(local_1e8 + 0x3570);
    if (*(uint **)(local_1e8 + 0x3570) == (uint *)0x0) {
      puVar13 = puVar32;
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar9 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar9 = uVar8 - 1;
      }
      uVar33 = 0;
      uVar25 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar25 = uVar33;
      }
      iVar9 = 0;
      do {
        if (uVar25 == uVar33) goto LAB_142e72189;
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar13[uVar33 + 1];
        uVar33 = uVar33 + 1;
      } while (uVar10 == 0);
    }
    else {
      iVar9 = 0;
      uVar33 = 0;
    }
    uVar25 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar25 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar10 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if ((int)uVar8 <= (int)uVar10) {
      uVar10 = uVar8;
    }
  }
  if (uVar10 != uVar8) {
    local_1e0 = local_1d0 + 7;
    uVar24 = 0xffffffff;
    local_200 = (undefined8 *)(ulonglong)uVar8;
    do {
      lVar14 = *(longlong *)(lVar21 + 0x3550);
      plVar22 = *(longlong **)(*(longlong *)(lVar14 + 0x30 + (longlong)(int)uVar10 * 0x40) + 0x28);
      if ((char)plVar22[0x3d] == '\0') {
        (**(code **)(*plVar22 + 0x78))(plVar22,&local_180,0);
        uVar30 = (undefined4)uVar20;
        if (((((local_164 != 0.0) || (NAN(local_164))) || (local_160 != 0.0)) ||
            ((NAN(local_160) || (local_15c != 0.0)))) || (NAN(local_15c))) {
          plVar22 = (longlong *)(lVar14 + (longlong)(int)uVar10 * 0x40 + 0x30);
          uVar20 = (ulonglong)(uint)local_1c8;
          pfVar27 = (float *)(piVar36 + uVar20 * 0x1b);
          uVar8 = *(byte *)(*(longlong *)(*plVar22 + 0x28) + 0x1e9) & 7 |
                  *(uint *)(*(longlong *)(*plVar22 + 0x28) + 0x1d0) >> 4 & 8;
          piVar36[uVar20 * 0x1b + 0x15] = uVar8;
          uVar8 = (*(byte *)(*(longlong *)(*plVar22 + 0x28) + 0x1d0) & 0x10) << 5 | uVar8;
          piVar36[uVar20 * 0x1b + 0x15] = uVar8;
          piVar36[uVar20 * 0x1b + 0x15] =
               (*(byte *)(*(longlong *)(*plVar22 + 0x28) + 0x1d1) & 1) << 10 | uVar8;
          bVar7 = (**(code **)(**(longlong **)(*plVar22 + 0x28) + 0x160))();
          fVar39 = local_15c;
          fVar28 = local_160;
          fVar17 = local_164;
          piVar36[uVar20 * 0x1b + 0x15] = piVar36[uVar20 * 0x1b + 0x15] | (uint)bVar7 << 0xb;
          piVar36[uVar20 * 0x1b + 0x14] = -0x40800000;
          piVar36[uVar20 * 0x1b + 0x16] = 0;
          if ((local_1d0 != (longlong *)0x0) &&
             ((int)local_1d0[1] != *(int *)((longlong)local_1d0 + 0x34))) {
            plVar19 = (longlong *)local_1d0[8];
            if ((longlong *)local_1d0[8] == (longlong *)0x0) {
              plVar19 = local_1e0;
            }
            iVar31 = *(int *)((longlong)plVar19 +
                             (ulonglong)((int)local_1d0[9] - 1U & *(uint *)(*plVar22 + 0x34)) * 4);
            if (iVar31 != -1) {
              do {
                plVar19 = (longlong *)(*local_1d0 + (longlong)iVar31 * 0x18);
                if (*plVar19 == *plVar22) {
                  if ((float *)(plVar19 + 1) != (float *)0x0 && plVar19 != (longlong *)0x0) {
                    pfVar27[0x16] = *(float *)(plVar19 + 1);
                  }
                  break;
                }
                iVar31 = (int)plVar19[2];
              } while (iVar31 != -1);
            }
          }
          fVar40 = 1.0;
          plVar19 = local_1d0;
          if ((longlong *)local_1f8[0x61b] != (longlong *)0x0) {
            fVar42 = (float)(**(code **)(*(longlong *)local_1f8[0x61b] + 0x88))();
            fVar40 = 1.0;
            if (0.0 < fVar42) {
              fVar41 = -local_f4;
              fVar40 = logf(fVar42);
              fVar40 = expf(fVar40 * fVar41);
            }
          }
          pfVar27[9] = fVar17 * fVar40;
          pfVar27[10] = fVar28 * fVar40;
          pfVar27[0xb] = fVar39 * fVar40;
          dVar2 = (double)local_1f8[0x208];
          dVar3 = (double)local_1f8[0x207];
          *pfVar27 = (float)((double)CONCAT44(iStack_17c,local_180) + (double)local_1f8[0x206]);
          pfVar27[1] = (float)((double)CONCAT44(uStack_174,uStack_178) + dVar3);
          pfVar27[2] = (float)(dStack_170 + dVar2);
          pfVar27[3] = -(float)CONCAT22(uStack_14e,local_150);
          pfVar27[4] = -(float)CONCAT22(uStack_14a,uStack_14c);
          pfVar27[5] = -local_148;
          *(undefined8 *)(pfVar27 + 6) = local_13c;
          pfVar27[8] = local_134;
          pfVar27[0xe] = 0.0;
          pfVar27[0xf] = 0.0;
          fVar17 = (float)(local_140 & auVar5._0_4_);
          if ((uint)fVar17 < 0x47800000) {
            if ((uint)fVar17 < 0x38800000) {
              fVar17 = fVar17 + 0.5;
            }
            else {
              fVar17 = (float)((int)fVar17 + 0x8000fff + (uint)(((uint)fVar17 >> 0xd & 1) != 0) >>
                              0xd);
            }
          }
          else {
            fVar17 = (float)((0x7f800000 < (uint)fVar17 | 0x3e) << 9);
          }
          fVar28 = (float)(local_144 & auVar5._0_4_);
          if ((uint)fVar28 < 0x47800000) {
            if ((uint)fVar28 < 0x38800000) {
              fVar28 = fVar28 + 0.5;
            }
            else {
              fVar28 = (float)((int)fVar28 + 0x8000fff + (uint)(((uint)fVar28 >> 0xd & 1) != 0) >>
                              0xd);
            }
          }
          else {
            fVar28 = (float)((0x7f800000 < (uint)fVar28 | 0x3e) << 9);
          }
          local_1c8 = (float)((int)local_1c8 + 1);
          uVar8 = movmskps((int)plVar19,ZEXT416(local_140));
          iVar31 = movmskps(uVar30,ZEXT416(local_144));
          uVar8 = iVar31 << 0x1f | (uVar8 & 1) << 0xf | (uint)fVar17 & 0xffff;
          uVar20 = (ulonglong)uVar8;
          pfVar27[0x10] = (float)((int)fVar28 << 0x10 | uVar8);
          pfVar27[0x11] = local_168;
          pfVar27[0x12] = 0.0;
          pfVar27[0x13] = *(float *)(*(longlong *)(*plVar22 + 0x28) + 0x154);
          pfVar27[0x17] = 0.0;
          pfVar27[0x18] = 0.0;
          pfVar27[0x19] = 0.0;
          pfVar27[0x1a] = 0.0;
          pfVar27[5] = local_148;
          *(ulonglong *)(pfVar27 + 3) =
               CONCAT26(uStack_14a,CONCAT24(uStack_14c,CONCAT22(uStack_14e,local_150)));
          pfVar27[0xc] = local_130;
          pfVar27[0xd] = 0.0;
          *(byte *)(pfVar27 + 0x15) = *(byte *)(pfVar27 + 0x15) | 0x40;
        }
        uVar8 = *(uint *)(local_1e8 + 0x3578);
        puVar32 = local_1f0;
        lVar21 = local_1e8;
      }
      uVar24 = uVar24 & ~(uint)uVar25;
      puVar13 = *(uint **)(lVar21 + 0x3570);
      if (*(uint **)(lVar21 + 0x3570) == (uint *)0x0) {
        puVar13 = puVar32;
      }
      iVar31 = (int)uVar33;
      lVar14 = (longlong)iVar31;
      uVar10 = puVar13[lVar14] & uVar24;
      if (uVar10 == 0) {
        iVar18 = uVar8 + 0x1e;
        if (-1 < (int)(uVar8 - 1)) {
          iVar18 = uVar8 - 1;
        }
        iVar18 = iVar18 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar11 = iVar18;
        if (iVar18 < iVar31) {
          iVar11 = iVar31;
        }
        if (iVar31 < iVar18) {
          uVar20 = iVar11 - lVar14;
          uVar33 = 0;
          do {
            uVar10 = puVar13[lVar14 + uVar33 + 1];
            if (uVar10 != 0) {
              uVar33 = (ulonglong)(iVar31 + (int)uVar33 + 1);
              uVar24 = 0xffffffff;
              goto LAB_142e726d2;
            }
            iVar9 = iVar9 + 0x20;
            uVar33 = uVar33 + 1;
          } while (uVar20 != uVar33);
          uVar24 = 0xffffffff;
          iVar31 = iVar11;
        }
        uVar33 = (ulonglong)(iVar31 + 1);
        puVar32 = local_1f0;
        lVar21 = local_1e8;
        uVar10 = uVar8;
      }
      else {
LAB_142e726d2:
        uVar25 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar25 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar10 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)uVar8 <= (int)uVar10) {
          uVar10 = uVar8;
        }
      }
    } while (uVar10 != (uint)local_200);
  }
LAB_142e72189:
                    /* WARNING (jumptable): Read-only address (ram,0x0001499319a0) is written */
  if ((param_5 != '\0') &&
     ((local_1f8[0x26e8] == 0 || ((*(byte *)(local_1f8[0x622] + 0x15b0) & 1) == 0)))) {
                    /* WARNING (jumptable): Read-only address (ram,0x0001499319a0) is written */
    *param_8 = local_1c8;
    uVar8 = *(uint *)(lVar21 + 0x3578);
  }
  auVar5 = _DAT_1499319a0;
  if (uVar8 == 0) {
    uVar25 = 1;
    uVar20 = 0;
    iVar9 = 0;
    uVar10 = 0;
  }
  else {
    puVar13 = *(uint **)(lVar21 + 0x3570);
    if (*(uint **)(lVar21 + 0x3570) == (uint *)0x0) {
      puVar13 = puVar32;
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar9 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar9 = uVar8 - 1;
      }
      uVar20 = 0;
      uVar25 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar25 = uVar20;
      }
      iVar9 = 0;
      do {
        if (uVar25 == uVar20) {
          local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,local_1c8);
          goto LAB_142e72770;
        }
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar13[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar20 = 0;
      iVar9 = 0;
    }
    uVar25 = (ulonglong)(-uVar10 & uVar10);
    uVar33 = uVar25 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar10 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if ((int)uVar8 <= (int)uVar10) {
      uVar10 = uVar8;
    }
  }
  local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,local_1c8);
  if (uVar10 != uVar8) {
    local_1a0 = local_1d0 + 7;
    uVar37 = 0xffffffff;
    local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,local_1c8);
    uVar24 = uVar8;
    do {
      local_200 = (undefined8 *)CONCAT44(local_200._4_4_,iVar9);
      lVar14 = *(longlong *)(lVar21 + 0x3550);
      plVar22 = *(longlong **)(*(longlong *)(lVar14 + 0x30 + (longlong)(int)uVar10 * 0x40) + 0x28);
      cVar6 = (char)plVar22[0x3d];
      switch(cVar6) {
      case '\x01':
        if ((*(byte *)(local_1f8[1] + 0x4c) & 0x40) != 0) goto switchD_142e72bf2_default;
      case '\0':
switchD_142e72bf2_caseD_0:
        break;
      case '\x02':
        bVar7 = *(byte *)(local_1f8[1] + 0x4c) & 0x80;
        goto joined_r0x000142e72c2a;
      case '\x03':
        bVar7 = *(byte *)(local_1f8[1] + 0x4d) & 1;
joined_r0x000142e72c2a:
        if (bVar7 == 0) goto switchD_142e72bf2_caseD_0;
switchD_142e72bf2_default:
        uVar30 = 0;
        (**(code **)(*plVar22 + 0x78))(plVar22,&local_180);
        if ((((local_164 == 0.0) && (!NAN(local_164))) && (local_160 == 0.0)) &&
           (((!NAN(local_160) && (local_15c == 0.0)) && (!NAN(local_15c))))) goto LAB_142e72c6d;
        plVar22 = (longlong *)((longlong)(int)uVar10 * 0x40 + lVar14 + 0x30);
        uVar33 = (ulonglong)local_1e0 & 0xffffffff;
        uVar10 = *(byte *)(*(longlong *)(*plVar22 + 0x28) + 0x1e9) & 7 |
                 *(uint *)(*(longlong *)(*plVar22 + 0x28) + 0x1d0) >> 4 & 8;
        piVar36[uVar33 * 0x1b + 0x15] = uVar10;
        uVar10 = (*(byte *)(*(longlong *)(*plVar22 + 0x28) + 0x1d0) & 0x10) << 5 | uVar10;
        piVar36[uVar33 * 0x1b + 0x15] = uVar10;
        piVar36[uVar33 * 0x1b + 0x15] =
             (*(byte *)(*(longlong *)(*plVar22 + 0x28) + 0x1d1) & 1) << 10 | uVar10;
        bVar7 = (**(code **)(**(longlong **)(*plVar22 + 0x28) + 0x160))();
        fVar39 = local_15c;
        fVar28 = local_160;
        fVar17 = local_164;
        piVar36[uVar33 * 0x1b + 0x15] = piVar36[uVar33 * 0x1b + 0x15] | (uint)bVar7 << 0xb;
        piVar36[uVar33 * 0x1b + 0x14] = local_100;
        piVar36[uVar33 * 0x1b + 0x16] = 0;
        fVar40 = 1.0;
        if ((longlong *)local_1f8[0x61b] != (longlong *)0x0) {
          fVar42 = (float)(**(code **)(*(longlong *)local_1f8[0x61b] + 0x88))();
          fVar40 = 1.0;
          if (0.0 < fVar42) {
            fVar41 = -local_f4;
            fVar40 = logf(fVar42);
            fVar40 = expf(fVar40 * fVar41);
          }
        }
        pfVar27 = (float *)(piVar36 + uVar33 * 0x1b);
        pfVar27[9] = fVar17 * fVar40;
        pfVar27[10] = fVar28 * fVar40;
        pfVar27[0xb] = fVar39 * fVar40;
        dVar2 = (double)local_1f8[0x208];
        dVar3 = (double)local_1f8[0x207];
        *pfVar27 = (float)((double)CONCAT44(iStack_17c,local_180) + (double)local_1f8[0x206]);
        pfVar27[1] = (float)((double)CONCAT44(uStack_174,uStack_178) + dVar3);
        pfVar27[2] = (float)(dStack_170 + dVar2);
        pfVar27[3] = -(float)CONCAT22(uStack_14e,local_150);
        pfVar27[4] = -(float)CONCAT22(uStack_14a,uStack_14c);
        pfVar27[5] = -local_148;
        *(undefined8 *)(pfVar27 + 6) = local_13c;
        pfVar27[8] = local_134;
        pfVar27[0xe] = 0.0;
        pfVar27[0xf] = 0.0;
        fVar17 = (float)(local_140 & auVar5._0_4_);
        if ((uint)fVar17 < 0x47800000) {
          if ((uint)fVar17 < 0x38800000) {
            fVar17 = fVar17 + 0.5;
          }
          else {
            fVar17 = (float)((int)fVar17 + 0x8000fff + (uint)(((uint)fVar17 >> 0xd & 1) != 0) >> 0xd
                            );
          }
        }
        else {
          fVar17 = (float)((0x7f800000 < (uint)fVar17 | 0x3e) << 9);
        }
        fVar28 = (float)(local_144 & auVar5._0_4_);
        if ((uint)fVar28 < 0x47800000) {
          if ((uint)fVar28 < 0x38800000) {
            fVar39 = fVar28 + 0.5;
          }
          else {
            fVar28 = (float)((int)fVar28 + 0x8000fff + (uint)(((uint)fVar28 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar39 = fVar28;
          }
        }
        else {
          fVar39 = (float)((0x7f800000 < (uint)fVar28 | 0x3e) << 9);
        }
        uVar10 = movmskps(fVar28,ZEXT416(local_140));
        iVar9 = movmskps(uVar30,ZEXT416(local_144));
        pfVar27[0x10] =
             (float)((int)fVar39 << 0x10 |
                    iVar9 << 0x1f | (uVar10 & 1) << 0xf | (uint)fVar17 & 0xffff);
        pfVar27[0x11] = local_168;
        pfVar27[0x12] = 0.0;
        pfVar27[0x13] = *(float *)(*(longlong *)(*plVar22 + 0x28) + 0x154);
        pfVar27[0x17] = 0.0;
        pfVar27[0x18] = 0.0;
        pfVar27[0x19] = 0.0;
        pfVar27[0x1a] = 0.0;
        if ((local_1d0 != (longlong *)0x0) &&
           ((int)local_1d0[1] != *(int *)((longlong)local_1d0 + 0x34))) {
          plVar19 = (longlong *)local_1d0[8];
          if ((longlong *)local_1d0[8] == (longlong *)0x0) {
            plVar19 = local_1a0;
          }
          iVar9 = *(int *)((longlong)plVar19 +
                          (ulonglong)((int)local_1d0[9] - 1U & *(uint *)(*plVar22 + 0x34)) * 4);
          if (iVar9 != -1) {
            do {
              plVar19 = (longlong *)(*local_1d0 + (longlong)iVar9 * 0x18);
              if (*plVar19 == *plVar22) {
                if ((float *)(plVar19 + 1) != (float *)0x0 && plVar19 != (longlong *)0x0) {
                  pfVar27[0x16] = *(float *)(plVar19 + 1);
                }
                break;
              }
              iVar9 = (int)plVar19[2];
            } while (iVar9 != -1);
          }
        }
        local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,(int)local_1e0._0_4_ + 1);
        if (cVar6 == '\x01') {
          pfVar27[0xc] = local_130;
          pfVar27[0xd] = local_120;
          pfVar27[0x12] = local_154;
          bVar7 = (**(code **)(**(longlong **)(*plVar22 + 0x28) + 0x30))();
          fVar17 = (float)((uint)(bVar7 ^ 1) << 4 | (uint)pfVar27[0x15] | 0x80);
LAB_142e730e5:
          pfVar27[0x15] = fVar17;
          iVar9 = (int)local_200._0_4_;
        }
        else {
          if (cVar6 == '\x02') {
            pfVar27[0xc] = local_130;
            pfVar27[0xd] = local_120;
            *(undefined8 *)(pfVar27 + 0xe) = local_12c;
            pfVar27[0x12] = local_154;
            bVar7 = (**(code **)(**(longlong **)(*plVar22 + 0x28) + 0x30))();
            fVar17 = (float)((uint)(bVar7 ^ 1) << 4 | (uint)pfVar27[0x15] | 0xc0);
            goto LAB_142e730e5;
          }
          if (cVar6 == '\x03') {
            pfVar27[0xc] = local_130 + local_130;
            pfVar27[0xd] = local_120 + local_120;
            *(undefined8 *)(pfVar27 + 0xe) = local_11c;
            pfVar27[0x12] = local_154;
            bVar7 = (**(code **)(**(longlong **)(*plVar22 + 0x28) + 0x30))();
            uVar10 = (uint)(bVar7 ^ 1) << 4 | (uint)pfVar27[0x15];
            pfVar27[0x15] = (float)(uVar10 | 0x100);
            *(undefined8 *)(pfVar27 + 0x19) = local_114;
            *(undefined8 *)(pfVar27 + 0x17) = local_10c;
            if (local_104 < 16.0) {
              fVar17 = (float)(uVar10 | 0x1100);
              goto LAB_142e730e5;
            }
          }
LAB_142e72c6d:
          iVar9 = (int)local_200._0_4_;
        }
        uVar24 = *(uint *)(local_1e8 + 0x3578);
        puVar32 = local_1f0;
        lVar21 = local_1e8;
        break;
      default:
        goto switchD_142e72bf2_default;
      }
      uVar37 = uVar37 & ~(uint)uVar25;
      puVar13 = *(uint **)(lVar21 + 0x3570);
      if (*(uint **)(lVar21 + 0x3570) == (uint *)0x0) {
        puVar13 = puVar32;
      }
      iVar31 = (int)uVar20;
      lVar14 = (longlong)iVar31;
      uVar10 = puVar13[lVar14] & uVar37;
      if (uVar10 == 0) {
        iVar18 = uVar24 + 0x1e;
        if (-1 < (int)(uVar24 - 1)) {
          iVar18 = uVar24 - 1;
        }
        iVar18 = iVar18 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar11 = iVar18;
        if (iVar18 < iVar31) {
          iVar11 = iVar31;
        }
        puVar32 = local_1f0;
        if (iVar31 < iVar18) {
          lVar29 = 0;
          do {
            uVar10 = puVar13[lVar14 + lVar29 + 1];
            if (uVar10 != 0) {
              uVar20 = (ulonglong)(iVar31 + (int)lVar29 + 1);
              uVar37 = 0xffffffff;
              goto LAB_142e73177;
            }
            iVar9 = iVar9 + 0x20;
            lVar29 = lVar29 + 1;
          } while (iVar11 - lVar14 != lVar29);
          uVar37 = 0xffffffff;
          iVar31 = iVar11;
        }
        uVar20 = (ulonglong)(iVar31 + 1);
        lVar21 = local_1e8;
        uVar10 = uVar24;
      }
      else {
LAB_142e73177:
        uVar25 = (ulonglong)(-uVar10 & uVar10);
        uVar33 = uVar25 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar10 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)uVar24 <= (int)uVar10) {
          uVar10 = uVar24;
        }
      }
    } while (uVar10 != uVar8);
  }
LAB_142e72770:
  lVar21 = local_1a8;
  *param_9 = local_1e0._0_4_;
  local_210 = (ulonglong)((int)local_1e0._0_4_ + (uint)(local_1e0._0_4_ == 0.0)) * 0x6c;
  local_208 = 1;
  local_218 = piVar36;
  lVar14 = FUN_144942e63(local_1a8,L"PathTracer.LightsBuffer",0x6c);
  plVar22 = local_1d8;
  cVar6 = *(char *)(lVar14 + 0x68);
  puVar34 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar16 = puVar34 + 9;
  if (*(undefined8 **)(lVar21 + 0x78) < puVar16) {
    FUN_140023dd8(local_1d8,0x50);
    puVar34 = (undefined8 *)(*plVar22 + 7U & 0xfffffffffffffff8);
    puVar16 = puVar34 + 9;
  }
  lVar29 = lVar21 + 0x198;
  *(undefined8 **)(lVar21 + 0x70) = puVar16;
  puVar34[1] = *(undefined8 *)(lVar14 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 3;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *puVar34 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar34 + 5) = cVar6 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
  puVar34[7] = 0;
  puVar34[8] = lVar14;
  iVar9 = *(int *)(lVar21 + 0x1a0);
  *(uint *)(lVar21 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(lVar21 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(lVar29,iVar9);
  }
  fVar17 = local_1c8;
  *(undefined8 **)(*(longlong *)(lVar21 + 0x198) + (longlong)iVar9 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(lVar21 + 0x1a0) + -1;
  *param_10 = puVar34;
  if (*(int *)(DAT_14ca1cf28 + 4) == 1) {
    *param_8 = *param_9;
    puVar34 = (undefined8 *)*param_10;
  }
  iVar9 = *(int *)(local_1f8 + 0x612);
  *param_7 = local_1c8;
  param_7[4] = INFINITY;
  param_7[5] = INFINITY;
  param_7[6] = INFINITY;
  param_7[8] = -INFINITY;
  param_7[9] = -INFINITY;
  param_7[10] = -INFINITY;
  fVar28 = (float)((int)local_1e0._0_4_ - (int)local_1c8);
  param_7[0xc] = 0.0;
  param_7[0xd] = 0.0;
  param_7[0xe] = 0.0;
  param_7[0xf] = 0.0;
  if ((int)fVar28 < 1) {
    param_7[0x10] = 0.0;
    param_7[0x11] = 0.0;
    param_7[0x12] = 0.0;
    uVar15 = FUN_14473c272(lVar21,&DAT_14ca63b28,0);
    plVar22 = local_1d8;
    *(undefined8 *)(param_7 + 0xc) = uVar15;
    dStack_170 = 0.0;
    uVar8 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar8 = DAT_14ca84e48;
    }
    local_180 = uVar8 + (uVar8 == 0);
    iStack_17c = 1;
    uStack_178 = 0x4109;
    uVar25 = *(longlong *)(lVar21 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar20 = uVar25 + 0x150;
    if (*(ulonglong *)(lVar21 + 0x78) < uVar20) {
      FUN_140023dd8(local_1d8,0x160);
      uVar25 = *plVar22 + 0xfU & 0xfffffffffffffff0;
      uVar20 = uVar25 + 0x150;
    }
    *(ulonglong *)(lVar21 + 0x70) = uVar20;
    FUN_1456bd266(uVar25,L"PathTracer.LightGridData",&local_180,0);
    iVar9 = *(int *)(lVar21 + 400);
    *(uint *)(lVar21 + 400) = iVar9 + 1U;
    if (*(uint *)(lVar21 + 0x194) < iVar9 + 1U) {
      FUN_144737178(lVar21 + 0x188,iVar9);
    }
    plVar22 = local_1d8;
    *(ulonglong *)(*(longlong *)(lVar21 + 0x188) + (longlong)iVar9 * 8) = uVar25;
    *(int *)(uVar25 + 0x7c) = *(int *)(lVar21 + 400) + -1;
    puVar34 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar34 + 8;
    if (*(undefined8 **)(lVar21 + 0x78) < puVar16) {
      FUN_140023dd8(local_1d8,0x48);
      puVar34 = (undefined8 *)(*plVar22 + 7U & 0xfffffffffffffff8);
      puVar16 = puVar34 + 8;
    }
    *(undefined8 **)(lVar21 + 0x70) = puVar16;
    puVar34[1] = *(undefined8 *)(uVar25 + 8);
    puVar34[2] = 0;
    *(undefined1 *)(puVar34 + 3) = 2;
    *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar34 + 5) = 0;
    *puVar34 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar34 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar34 + 0x32) = 0;
    puVar34[7] = uVar25;
    iVar9 = *(int *)(lVar21 + 0x1a0);
    *(uint *)(lVar21 + 0x1a0) = iVar9 + 1U;
    if (*(uint *)(lVar21 + 0x1a4) < iVar9 + 1U) {
      FUN_1447568fc(lVar29,iVar9);
    }
    *(undefined8 **)(*(longlong *)(lVar21 + 0x198) + (longlong)iVar9 * 8) = puVar34;
    *(int *)((longlong)puVar34 + 0x1c) = *(int *)(lVar21 + 0x1a0) + -1;
    FUN_1405bfba3(lVar21,puVar34,0,2);
    plVar22 = local_1d8;
    puVar34 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar34 + 9;
    if (*(undefined8 **)(lVar21 + 0x78) < puVar16) {
      FUN_140023dd8(local_1d8,0x50);
      puVar34 = (undefined8 *)(*plVar22 + 7U & 0xfffffffffffffff8);
      puVar16 = puVar34 + 9;
    }
    *(undefined8 **)(lVar21 + 0x70) = puVar16;
    puVar34[1] = *(undefined8 *)(uVar25 + 8);
    puVar34[2] = 0;
    *(undefined1 *)(puVar34 + 3) = 3;
    *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
    *puVar34 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar34 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
    puVar34[7] = 0;
    puVar34[8] = uVar25;
    iVar9 = *(int *)(lVar21 + 0x1a0);
    *(uint *)(lVar21 + 0x1a0) = iVar9 + 1U;
    if (*(uint *)(lVar21 + 0x1a4) < iVar9 + 1U) {
      FUN_1447568fc(lVar29,iVar9);
    }
    *(undefined8 **)(*(longlong *)(lVar21 + 0x198) + (longlong)iVar9 * 8) = puVar34;
    iVar9 = *(int *)(lVar21 + 0x1a0);
  }
  else {
    fVar39 = INFINITY;
    fVar41 = -INFINITY;
    lVar21 = 0;
    fVar38 = -INFINITY;
    fVar55 = -INFINITY;
    fVar40 = INFINITY;
    fVar42 = INFINITY;
    local_1b0 = lVar29;
    local_198 = (longlong)iVar9;
    do {
      fVar44 = 1.0 / *(float *)((longlong)piVar36 + lVar21 + (ulonglong)(uint)fVar17 * 0x6c + 0x44);
      fVar35 = *(float *)((longlong)piVar36 + lVar21 + (ulonglong)(uint)fVar17 * 0x6c);
      local_200 = (undefined8 *)CONCAT44(local_200._4_4_,fVar35);
      fVar50 = *(float *)((longlong)piVar36 + lVar21 + (ulonglong)(uint)fVar17 * 0x6c + 4);
      local_1f8 = (undefined8 *)CONCAT44(local_1f8._4_4_,fVar50);
      fVar52 = *(float *)((longlong)piVar36 + lVar21 + (ulonglong)(uint)fVar17 * 0x6c + 8);
      local_1f0 = (uint *)CONCAT44(local_1f0._4_4_,fVar52);
      fVar43 = *(float *)((longlong)piVar36 + lVar21 + (ulonglong)(uint)fVar17 * 0x6c + 0xc);
      fVar49 = *(float *)((longlong)piVar36 + lVar21 + (ulonglong)(uint)fVar17 * 0x6c + 0x10);
      fVar51 = *(float *)((longlong)piVar36 + lVar21 + (ulonglong)(uint)fVar17 * 0x6c + 0x14);
      fVar45 = 1.0 - fVar51 * fVar51;
      if (1.0 <= fVar45) {
        fVar45 = 1.0;
      }
      if (fVar45 <= 0.0) {
        fVar45 = 0.0;
      }
      fVar46 = 1.0 - fVar49 * fVar49;
      if (1.0 <= fVar46) {
        fVar46 = 1.0;
      }
      if (fVar46 <= 0.0) {
        fVar46 = 0.0;
      }
      fVar48 = 1.0 - fVar43 * fVar43;
      if (1.0 <= fVar48) {
        fVar48 = 1.0;
      }
      if (fVar48 <= 0.0) {
        fVar48 = 0.0;
      }
      uVar8 = *(uint *)((longlong)piVar36 + lVar21 + (ulonglong)(uint)fVar17 * 0x6c + 0x54) & 0x1c0;
      if (uVar8 == 0x100) {
        fVar51 = fVar51 * fVar44 + fVar52;
        fVar49 = fVar49 * fVar44 + fVar50;
        fVar43 = fVar43 * fVar44 + fVar35;
        fVar54 = SQRT(fVar45) * fVar44;
        fVar46 = SQRT(fVar46) * fVar44;
        fVar44 = SQRT(fVar48) * fVar44;
        fVar48 = fVar52 - fVar54;
        fVar47 = fVar50 - fVar46;
        fVar53 = fVar35 - fVar44;
        fVar45 = fVar51;
        if (fVar48 <= fVar51) {
          fVar45 = fVar48;
        }
        local_1e8 = CONCAT44(local_1e8._4_4_,fVar45);
        fVar48 = fVar49;
        if (fVar47 <= fVar49) {
          fVar48 = fVar47;
        }
        fVar47 = fVar43;
        if (fVar53 <= fVar43) {
          fVar47 = fVar53;
        }
        fVar54 = fVar54 + fVar52;
        fVar46 = fVar46 + fVar50;
        fVar44 = fVar44 + fVar35;
        if (fVar51 <= fVar54) {
          fVar51 = fVar54;
        }
        if (fVar49 <= fVar46) {
          fVar49 = fVar46;
        }
        local_1c8 = fVar38;
        uStack_1c4 = 0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        if (fVar43 <= fVar44) {
          fVar43 = fVar44;
        }
      }
      else if (uVar8 == 0xc0) {
        fVar40 = fVar44 * fVar51 + fVar52;
        fVar42 = fVar44 * fVar49 + fVar50;
        fVar41 = fVar44 * fVar43 + fVar35;
        fVar39 = fVar52;
        if (fVar40 <= fVar52) {
          fVar39 = fVar40;
        }
        local_1e8 = CONCAT44(local_1e8._4_4_,fVar39);
        fVar39 = fVar50;
        if (fVar42 <= fVar50) {
          fVar39 = fVar42;
        }
        local_1d0 = (longlong *)CONCAT44(local_1d0._4_4_,fVar39);
        local_1c8 = fVar35;
        if (fVar41 <= fVar35) {
          local_1c8 = fVar41;
        }
        if (fVar52 <= fVar40) {
          fVar52 = fVar40;
        }
        if (fVar50 <= fVar42) {
          fVar50 = fVar42;
        }
        if (fVar35 <= fVar41) {
          fVar35 = fVar41;
        }
        local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,fVar35);
        fVar39 = *(float *)((longlong)piVar36 + lVar21 + (ulonglong)(uint)fVar17 * 0x6c + 0x38);
        fVar40 = 1.0 - fVar39 * fVar39;
        if (fVar40 < 0.0) {
          fVar40 = sqrtf(fVar40);
        }
        else {
          fVar40 = SQRT(fVar40);
        }
        fVar55 = SQRT(fVar45) * fVar40;
        fVar41 = SQRT(fVar46) * fVar40;
        fVar40 = SQRT(fVar48) * fVar40;
        fVar42 = (fVar51 * fVar39 - fVar55) * fVar44 + local_1f0._0_4_;
        fVar45 = (float)local_1e8;
        if (fVar42 <= (float)local_1e8) {
          fVar45 = fVar42;
        }
        fVar42 = (fVar49 * fVar39 - fVar41) * fVar44 + local_1f8._0_4_;
        fVar48 = local_1d0._0_4_;
        if (fVar42 <= local_1d0._0_4_) {
          fVar48 = fVar42;
        }
        fVar42 = (fVar43 * fVar39 - fVar40) * fVar44 + local_200._0_4_;
        fVar47 = local_1c8;
        if (fVar42 <= local_1c8) {
          fVar47 = fVar42;
        }
        fVar42 = (fVar55 + fVar51 * fVar39) * fVar44 + local_1f0._0_4_;
        fVar51 = fVar52;
        if (fVar52 <= fVar42) {
          fVar51 = fVar42;
        }
        fVar42 = (fVar41 + fVar49 * fVar39) * fVar44 + local_1f8._0_4_;
        fVar49 = fVar50;
        if (fVar50 <= fVar42) {
          fVar49 = fVar42;
        }
        fVar39 = (fVar40 + fVar43 * fVar39) * fVar44 + local_200._0_4_;
        fVar43 = local_1a0._0_4_;
        if (local_1a0._0_4_ <= fVar39) {
          fVar43 = fVar39;
        }
        fVar39 = param_7[6];
        fVar40 = param_7[4];
        fVar42 = param_7[5];
        fVar41 = param_7[10];
        fVar55 = param_7[9];
        fVar38 = param_7[8];
      }
      else if (uVar8 == 0x80) {
        fVar47 = fVar35 - fVar44;
        fVar51 = fVar44 + fVar52;
        fVar45 = fVar52 - fVar44;
        fVar49 = fVar44 + fVar50;
        fVar48 = fVar50 - fVar44;
        fVar43 = fVar35 + fVar44;
      }
      else {
        fVar51 = INFINITY;
        fVar49 = INFINITY;
        fVar45 = -INFINITY;
        fVar47 = -INFINITY;
        fVar48 = -INFINITY;
        fVar43 = INFINITY;
      }
      plVar22 = local_1d8;
      if (fVar38 <= fVar43) {
        fVar38 = fVar43;
      }
      if (fVar55 <= fVar49) {
        fVar55 = fVar49;
      }
      if (fVar41 <= fVar51) {
        fVar41 = fVar51;
      }
      if (fVar47 <= fVar40) {
        fVar40 = fVar47;
      }
      if (fVar48 <= fVar42) {
        fVar42 = fVar48;
      }
      if (fVar45 <= fVar39) {
        fVar39 = fVar45;
      }
      param_7[4] = fVar40;
      param_7[5] = fVar42;
      param_7[6] = fVar39;
      param_7[8] = fVar38;
      param_7[9] = fVar55;
      param_7[10] = fVar41;
      lVar21 = lVar21 + 0x6c;
    } while ((ulonglong)(uint)fVar28 * 0x6c - lVar21 != 0);
    uVar20 = (ulonglong)
             (*(int *)(DAT_14ca1d178 + 4) + -1 + (uint)(*(int *)(DAT_14ca1d178 + 4) == 0)) * 2 + 1;
    local_1f8 = (undefined8 *)0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> (longlong)local_1f8 == 0;
          local_1f8 = (undefined8 *)((longlong)local_1f8 + -1)) {
      }
    }
    fVar35 = (float)(1 << ((byte)local_1f8 & 0x1f));
    fVar17 = *(float *)(DAT_14ca1d190 + 4);
    if ((int)fVar28 < (int)*(float *)(DAT_14ca1d190 + 4)) {
      fVar17 = fVar28;
    }
    if (0xff < (int)fVar17) {
      fVar17 = 3.58732e-43;
    }
    if ((int)fVar17 < 2) {
      fVar17 = 1.4013e-45;
    }
    param_7[0x10] = fVar35;
    param_7[0x11] = fVar17;
    fVar28 = *(float *)(DAT_14ca1d1a8 + 4);
    if (2 < (uint)*(float *)(DAT_14ca1d1a8 + 4)) {
      fVar28 = 0.0;
      if (fVar55 - fVar42 <= fVar38 - fVar40 || fVar41 - fVar39 <= fVar38 - fVar40) {
        fVar28 = (float)((fVar41 - fVar39 <= fVar55 - fVar42) + 1);
      }
    }
    param_7[0x12] = fVar28;
    puVar23 = (undefined8 *)(*(longlong *)(local_1a8 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar16 = puVar23 + 0x10;
    if (*(undefined8 **)(local_1a8 + 0x78) < puVar16) {
      FUN_140023dd8(local_1d8,0x90);
      puVar23 = (undefined8 *)(*plVar22 + 0xfU & 0xfffffffffffffff0);
      puVar16 = puVar23 + 0x10;
    }
    lVar21 = local_1a8;
    *(undefined8 **)(local_1a8 + 0x70) = puVar16;
    *puVar23 = &PTR_FUN_14a2b20e0;
    puVar23[2] = 0;
    puVar23[10] = 0;
    puVar23[0xb] = 0;
    puVar23[0xe] = 0;
    puVar23[0xf] = 0;
    iVar9 = *(int *)(local_1a8 + 0xa0);
    *(uint *)(local_1a8 + 0xa0) = iVar9 + 1U;
    if (*(uint *)(local_1a8 + 0xa4) < iVar9 + 1U) {
      FUN_1448cfae8(local_1a8 + 0x98,iVar9);
    }
    plVar22 = local_1d8;
    *(undefined8 **)(*(longlong *)(lVar21 + 0x98) + (longlong)iVar9 * 8) = puVar23;
    local_168 = DAT_14ca85098;
    uStack_178 = (undefined4)_DAT_14ca85088;
    uStack_174 = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
    dStack_170 = (double)_DAT_14ca85090;
    local_164 = *(float *)(*(longlong *)(lVar21 + 0x18) + 0x17c);
    uStack_14e = 0x1c00;
    uStack_14c = 0xff00;
    local_180 = 0x20008;
    iStack_17c = 0;
    local_154 = 9.18369e-41;
    local_150 = 0x101;
    local_160 = 0.0;
    fVar28 = DAT_14ca84e40;
    if ((int)fVar35 < (int)DAT_14ca84e40) {
      fVar28 = fVar35;
    }
    local_15c = 1.4013e-45;
    if (1 < (int)fVar28) {
      local_15c = fVar28;
    }
    uVar25 = *(longlong *)(lVar21 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar20 = uVar25 + 0x120;
    local_1f0 = (uint *)(ulonglong)(uint)fVar35;
    local_158 = local_15c;
    if (*(ulonglong *)(lVar21 + 0x78) < uVar20) {
      FUN_140023dd8(local_1d8,0x128);
      uVar25 = *plVar22 + 7U & 0xfffffffffffffff8;
      uVar20 = uVar25 + 0x120;
    }
    *(ulonglong *)(lVar21 + 0x70) = uVar20;
    FUN_1456bbb8c(uVar25,L"PathTracer.LightGrid",&local_180,0);
    iVar9 = *(int *)(lVar21 + 0x180);
    *(uint *)(lVar21 + 0x180) = iVar9 + 1U;
    if (*(uint *)(lVar21 + 0x184) < iVar9 + 1U) {
      FUN_14472c0f6(lVar21 + 0x178,iVar9);
    }
    plVar22 = local_1d8;
    *(ulonglong *)(*(longlong *)(lVar21 + 0x178) + (longlong)iVar9 * 8) = uVar25;
    *(int *)(uVar25 + 0x9c) = *(int *)(lVar21 + 0x180) + -1;
    uVar4 = *(undefined1 *)(uVar25 + 0x94);
    puVar26 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar26 + 9;
    if (*(undefined8 **)(lVar21 + 0x78) < puVar16) {
      FUN_140023dd8(local_1d8,0x50);
      puVar26 = (undefined8 *)(*plVar22 + 7U & 0xfffffffffffffff8);
      puVar16 = puVar26 + 9;
    }
    *(undefined8 **)(lVar21 + 0x70) = puVar16;
    puVar26[1] = *(undefined8 *)(uVar25 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 0;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar26 + 5) = 0;
    *puVar26 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar26 + 6) = uVar4;
    *(undefined1 *)(puVar26 + 7) = 0;
    *(undefined4 *)((longlong)puVar26 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar26 + 0x35) = 0;
    puVar26[8] = uVar25;
    iVar9 = *(int *)(lVar21 + 0x1a0);
    *(uint *)(lVar21 + 0x1a0) = iVar9 + 1U;
    puVar16 = puVar23 + 0xe;
    if (*(uint *)(lVar21 + 0x1a4) < iVar9 + 1U) {
      local_200 = puVar23 + 0xe;
      FUN_1447568fc(local_1b0,iVar9);
      puVar16 = local_200;
    }
    plVar22 = local_1d8;
    *(undefined8 **)(*(longlong *)(lVar21 + 0x198) + (longlong)iVar9 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(lVar21 + 0x1a0) + -1;
    *puVar16 = puVar26;
    uVar8 = 0x39;
    if (0x100U < (uint)local_1e0._0_4_) {
      uVar8 = (uint)(byte)(((uint)local_1e0._0_4_ < 0x10001) * '\x04' + 0x1c);
    }
    local_200 = (undefined8 *)CONCAT44(local_200._4_4_,uVar8);
    uVar8 = 1;
    if (0x100U < (uint)local_1e0._0_4_) {
      uVar8 = (uint)((uint)local_1e0._0_4_ >= 0x10001) * 2 + 2;
    }
    uVar10 = ((int)fVar17 << ((byte)local_1f8 & 0x1f)) << ((byte)local_1f8 & 0x1f);
    if (DAT_14ca84e48 <= uVar8) {
      uVar8 = DAT_14ca84e48;
    }
    local_180 = uVar8 + (uVar8 == 0);
    uStack_178 = 0x4109;
    if (DAT_14ca84e48 <= uVar10) {
      uVar10 = DAT_14ca84e48;
    }
    dStack_170 = 0.0;
    iStack_17c = uVar10 + (uVar10 == 0);
    uVar33 = *(longlong *)(lVar21 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar20 = uVar33 + 0x150;
    if (*(ulonglong *)(lVar21 + 0x78) < uVar20) {
      FUN_140023dd8(local_1d8,0x160);
      uVar33 = *plVar22 + 0xfU & 0xfffffffffffffff0;
      uVar20 = uVar33 + 0x150;
    }
    *(ulonglong *)(lVar21 + 0x70) = uVar20;
    FUN_1456bd266(uVar33,L"PathTracer.LightGridData",&local_180,0);
    iVar9 = *(int *)(lVar21 + 400);
    *(uint *)(lVar21 + 400) = iVar9 + 1U;
    if (*(uint *)(lVar21 + 0x194) < iVar9 + 1U) {
      FUN_144737178(lVar21 + 0x188,iVar9);
    }
    plVar22 = local_1d8;
    *(ulonglong *)(*(longlong *)(lVar21 + 0x188) + (longlong)iVar9 * 8) = uVar33;
    *(int *)(uVar33 + 0x7c) = *(int *)(lVar21 + 400) + -1;
    puVar26 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar26 + 8;
    if (*(undefined8 **)(lVar21 + 0x78) < puVar16) {
      FUN_140023dd8(local_1d8,0x48);
      puVar26 = (undefined8 *)(*plVar22 + 7U & 0xfffffffffffffff8);
      puVar16 = puVar26 + 8;
    }
    local_1f8 = puVar23 + 2;
    *(undefined8 **)(lVar21 + 0x70) = puVar16;
    puVar26[1] = *(undefined8 *)(uVar33 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 2;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar26 + 5) = 0;
    *puVar26 = &PTR_FUN_14a1fb3e8;
    *(char *)(puVar26 + 6) = (char)local_200;
    *(undefined2 *)((longlong)puVar26 + 0x31) = 0;
    puVar26[7] = uVar33;
    iVar9 = *(int *)(lVar21 + 0x1a0);
    *(uint *)(lVar21 + 0x1a0) = iVar9 + 1U;
    if (*(uint *)(lVar21 + 0x1a4) < iVar9 + 1U) {
      FUN_1447568fc(local_1b0,iVar9);
    }
    *(undefined8 **)(*(longlong *)(lVar21 + 0x198) + (longlong)iVar9 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(lVar21 + 0x1a0) + -1;
    puVar23[0xf] = puVar26;
    pfVar27 = param_7;
    puVar16 = puVar23 + 4;
    for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar16 = *(undefined8 *)pfVar27;
      pfVar27 = pfVar27 + 2;
      puVar16 = puVar16 + 1;
    }
    puVar23[2] = puVar34;
    *(float *)(puVar23 + 3) = local_1e0._0_4_;
    uVar15 = *(undefined8 *)
              (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_198 * 2) * 8);
    FUN_145dd0dac();
    FUN_1448e935e(uVar15,&local_180,&DAT_14ca1d640,0);
    FUN_145dd0dac();
    iVar9 = (int)local_1f0 + 7;
    local_18c = (int)local_1f0 + 0xe;
    if (-1 < iVar9) {
      local_18c = iVar9;
    }
    local_18c = local_18c >> 3;
    local_218 = &local_18c;
    local_184 = 1;
    local_188 = local_18c;
    FUN_147275b04(lVar21,&local_18d,&local_180,local_1f8);
    plVar22 = local_1d8;
    *(ulonglong *)(param_7 + 0xc) = uVar25;
    puVar34 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar34 + 9;
    if (*(undefined8 **)(lVar21 + 0x78) < puVar16) {
      FUN_140023dd8(local_1d8,0x50);
      puVar34 = (undefined8 *)(*plVar22 + 7U & 0xfffffffffffffff8);
      puVar16 = puVar34 + 9;
    }
    *(undefined8 **)(lVar21 + 0x70) = puVar16;
    puVar34[1] = *(undefined8 *)(uVar33 + 8);
    puVar34[2] = 0;
    *(undefined1 *)(puVar34 + 3) = 3;
    *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
    *puVar34 = &PTR_FUN_14a1fb168;
    *(char *)(puVar34 + 5) = (char)local_200;
    *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
    puVar34[7] = 0;
    puVar34[8] = uVar33;
    iVar9 = *(int *)(lVar21 + 0x1a0);
    *(uint *)(lVar21 + 0x1a0) = iVar9 + 1U;
    if (*(uint *)(lVar21 + 0x1a4) < iVar9 + 1U) {
      FUN_1447568fc(local_1b0,iVar9);
    }
    *(undefined8 **)(*(longlong *)(lVar21 + 0x198) + (longlong)iVar9 * 8) = puVar34;
    iVar9 = *(int *)(lVar21 + 0x1a0);
  }
  *(int *)((longlong)puVar34 + 0x1c) = iVar9 + -1;
  *(undefined8 **)(param_7 + 0xe) = puVar34;
  if ((local_f0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e73e50 FUN_142e73e50 body=281 status=ok
// SIG undefined FUN_142e73e50(void)

undefined1 * FUN_142e73e50(undefined1 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  bool bVar10;
  
  if (*(char *)(DAT_14ca1cdc0 + 1) == '\x01') {
    uVar7 = *(undefined1 *)(DAT_14ca1ce08 + 1);
    bVar10 = *(int *)(DAT_14ca1d2c8 + 4) != 0;
    if ((~(&DAT_14ca814c8)
          [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 8) * 2) * 0xf] &
        0xc00000) == 0) {
      cVar3 = FUN_14019108b();
      if (cVar3 != '\0') {
        bVar9 = *(byte *)(DAT_14ca1d0a0 + 1) ^ 1;
        goto LAB_142e73edb;
      }
    }
  }
  else {
    uVar7 = 1;
    bVar10 = false;
  }
  bVar9 = 0;
LAB_142e73edb:
  lVar2 = DAT_14ca97170;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  uVar8 = 0;
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
  if (0 < *(int *)(lVar2 + uVar6 * 4)) {
    uVar8 = (undefined1)*(undefined4 *)(param_2 + 0x5178);
  }
  *param_1 = uVar7;
  param_1[1] = bVar10;
  param_1[2] = bVar9;
  param_1[3] = uVar8;
  return param_1;
}



// FUNCTION 142e73f6a FUN_142e73f6a body=533 status=ok
// SIG undefined FUN_142e73f6a(void)

void FUN_142e73f6a(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x1d70);
  if (lVar2 != 0) {
    if (param_2 != '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x100);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(lVar2 + 0x100) = 0;
        (**(code **)(*plVar3 + 0x38))();
      }
      plVar3 = *(longlong **)(lVar2 + 0x108);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(lVar2 + 0x108) = 0;
        (**(code **)(*plVar3 + 0x38))();
      }
      plVar3 = *(longlong **)(lVar2 + 0x118);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(lVar2 + 0x118) = 0;
        (**(code **)(*plVar3 + 0x38))();
      }
      plVar3 = *(longlong **)(lVar2 + 0x110);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(lVar2 + 0x110) = 0;
        (**(code **)(*plVar3 + 0x38))();
      }
      puVar4 = *(undefined8 **)(lVar2 + 0x128);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x128) = 0;
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      puVar4 = *(undefined8 **)(lVar2 + 0x4b8);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x4b8) = 0;
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    plVar3 = *(longlong **)(lVar2 + 0xc0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0xc0) = 0;
      (**(code **)(*plVar3 + 0x38))();
    }
    plVar3 = *(longlong **)(lVar2 + 200);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 200) = 0;
      (**(code **)(*plVar3 + 0x38))();
    }
    plVar3 = *(longlong **)(lVar2 + 0xd0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0xd0) = 0;
      (**(code **)(*plVar3 + 0x38))();
    }
    plVar3 = *(longlong **)(lVar2 + 0xd8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0xd8) = 0;
      (**(code **)(*plVar3 + 0x38))();
    }
    plVar3 = *(longlong **)(lVar2 + 0xe0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0xe0) = 0;
      (**(code **)(*plVar3 + 0x38))();
    }
    puVar4 = *(undefined8 **)(lVar2 + 0xe8);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar2 + 0xe8) = 0;
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    plVar3 = *(longlong **)(lVar2 + 0xf0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0xf0) = 0;
      (**(code **)(*plVar3 + 0x38))();
    }
    plVar3 = *(longlong **)(lVar2 + 0xf8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0xf8) = 0;
      (**(code **)(*plVar3 + 0x38))();
    }
    *(undefined4 *)(lVar2 + 0x4c0) = 0;
    puVar4 = *(undefined8 **)(lVar2 + 0x3c0);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar2 + 0x3c0) = 0;
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142e7417c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar4)(puVar4,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142e74180 FUN_142e74180 body=59759 status=FAIL
// SIG undefined FUN_142e74180(void)
/* DECOMPILE FAILED */

// FUNCTION 142e82af0 FUN_142e82af0 body=69 status=ok
// SIG undefined FUN_142e82af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82af0(void)

{
  _DAT_14ca1f9b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1f9c0,1);
  return;
}



// FUNCTION 142e82b35 FUN_142e82b35 body=69 status=ok
// SIG undefined FUN_142e82b35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82b35(void)

{
  _DAT_14ca1f9d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1f9d8,1);
  return;
}



// FUNCTION 142e82b7a FUN_142e82b7a body=69 status=ok
// SIG undefined FUN_142e82b7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82b7a(void)

{
  _DAT_14ca1f9e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1f9f0,1);
  return;
}



// FUNCTION 142e82bbf FUN_142e82bbf body=69 status=ok
// SIG undefined FUN_142e82bbf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82bbf(void)

{
  _DAT_14ca1fa00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82c01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fa08,1);
  return;
}



// FUNCTION 142e82c04 FUN_142e82c04 body=69 status=ok
// SIG undefined FUN_142e82c04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82c04(void)

{
  _DAT_14ca1fa18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fa20,1);
  return;
}



// FUNCTION 142e82c49 FUN_142e82c49 body=69 status=ok
// SIG undefined FUN_142e82c49(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82c49(void)

{
  _DAT_14ca1fa30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fa38,1);
  return;
}



// FUNCTION 142e82c8e FUN_142e82c8e body=69 status=ok
// SIG undefined FUN_142e82c8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82c8e(void)

{
  _DAT_14ca1fa48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fa50,1);
  return;
}



// FUNCTION 142e82cd3 FUN_142e82cd3 body=69 status=ok
// SIG undefined FUN_142e82cd3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82cd3(void)

{
  _DAT_14ca1fa60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fa68,1);
  return;
}



// FUNCTION 142e82d18 FUN_142e82d18 body=69 status=ok
// SIG undefined FUN_142e82d18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82d18(void)

{
  _DAT_14ca1fa78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82d5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fa80,1);
  return;
}



// FUNCTION 142e82d5d FUN_142e82d5d body=69 status=ok
// SIG undefined FUN_142e82d5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82d5d(void)

{
  _DAT_14ca1fa90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82d9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fa98,1);
  return;
}



// FUNCTION 142e82da2 FUN_142e82da2 body=69 status=ok
// SIG undefined FUN_142e82da2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82da2(void)

{
  _DAT_14ca1faa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fab0,1);
  return;
}



// FUNCTION 142e82de7 FUN_142e82de7 body=69 status=ok
// SIG undefined FUN_142e82de7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82de7(void)

{
  _DAT_14ca1fac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fac8,1);
  return;
}



// FUNCTION 142e82e2c FUN_142e82e2c body=69 status=ok
// SIG undefined FUN_142e82e2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82e2c(void)

{
  _DAT_14ca1fad8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82e6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fae0,1);
  return;
}



// FUNCTION 142e82e71 FUN_142e82e71 body=69 status=ok
// SIG undefined FUN_142e82e71(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82e71(void)

{
  _DAT_14ca1faf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1faf8,1);
  return;
}



// FUNCTION 142e82eb6 FUN_142e82eb6 body=69 status=ok
// SIG undefined FUN_142e82eb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82eb6(void)

{
  _DAT_14ca1fb08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fb10,1);
  return;
}



// FUNCTION 142e82efb FUN_142e82efb body=69 status=ok
// SIG undefined FUN_142e82efb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82efb(void)

{
  _DAT_14ca1fb20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fb28,1);
  return;
}



// FUNCTION 142e82f40 FUN_142e82f40 body=69 status=ok
// SIG undefined FUN_142e82f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82f40(void)

{
  _DAT_14ca1fb38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fb40,1);
  return;
}



// FUNCTION 142e82f85 FUN_142e82f85 body=69 status=ok
// SIG undefined FUN_142e82f85(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82f85(void)

{
  _DAT_14ca1fb50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e82fc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fb58,1);
  return;
}



// FUNCTION 142e82fca FUN_142e82fca body=69 status=ok
// SIG undefined FUN_142e82fca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e82fca(void)

{
  _DAT_14ca1fb68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e8300c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fb70,1);
  return;
}



// FUNCTION 142e8300f FUN_142e8300f body=69 status=ok
// SIG undefined FUN_142e8300f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e8300f(void)

{
  _DAT_14ca1fb80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e83051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fb88,1);
  return;
}



// FUNCTION 142e83054 FUN_142e83054 body=69 status=ok
// SIG undefined FUN_142e83054(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e83054(void)

{
  _DAT_14ca1fb98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e83096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fba0,1);
  return;
}



// FUNCTION 142e83099 FUN_142e83099 body=69 status=ok
// SIG undefined FUN_142e83099(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e83099(void)

{
  _DAT_14ca1fbb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e830db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fbb8,1);
  return;
}



// FUNCTION 142e830de FUN_142e830de body=69 status=ok
// SIG undefined FUN_142e830de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e830de(void)

{
  _DAT_14ca1fbc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e83120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fbd0,1);
  return;
}



// FUNCTION 142e83123 FUN_142e83123 body=69 status=ok
// SIG undefined FUN_142e83123(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e83123(void)

{
  _DAT_14ca1fbe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e83165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fbe8,1);
  return;
}



// FUNCTION 142e83168 FUN_142e83168 body=69 status=ok
// SIG undefined FUN_142e83168(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e83168(void)

{
  _DAT_14ca1fbf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e831aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fc00,1);
  return;
}



// FUNCTION 142e831ad FUN_142e831ad body=69 status=ok
// SIG undefined FUN_142e831ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e831ad(void)

{
  _DAT_14ca1fc10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e831ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fc18,1);
  return;
}



// FUNCTION 142e831f2 FUN_142e831f2 body=69 status=ok
// SIG undefined FUN_142e831f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e831f2(void)

{
  _DAT_14ca1fc28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e83234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fc30,1);
  return;
}



// FUNCTION 142e83237 FUN_142e83237 body=69 status=ok
// SIG undefined FUN_142e83237(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e83237(void)

{
  _DAT_14ca1fc40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e83279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca1fc48,1);
  return;
}



// FUNCTION 142e83300 FUN_142e83300 body=4428 status=ok
// SIG undefined FUN_142e83300(void)

undefined4
FUN_142e83300(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong *param_5,ulonglong *param_6,ulonglong *param_7)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auStack_168 [32];
  int *local_148;
  longlong local_138;
  longlong *local_130;
  undefined8 *local_128;
  longlong local_120;
  undefined1 local_115;
  int local_114;
  int local_110;
  undefined4 local_10c;
  undefined8 local_108 [14];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4e;
  ulonglong local_48;
  
  lVar11 = DAT_14ca1fba8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar5 == 0x40000002) {
    uVar12 = 0;
  }
  else {
    bVar18 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        bVar18 = DVar7 == DVar8;
      }
      else {
        bVar18 = false;
      }
    }
    uVar12 = (ulonglong)(bVar18 ^ 1);
  }
  switch(*(undefined4 *)(lVar11 + uVar12 * 4)) {
  case 0:
    *param_6 = param_3;
    break;
  case 1:
    *param_6 = param_5[8];
    param_4 = param_5[2];
    break;
  case 2:
    *param_6 = param_5[7];
    param_4 = param_5[1];
    break;
  case 3:
    *param_6 = param_5[6];
    param_4 = *param_5;
    break;
  default:
    local_90 = *(undefined8 *)(param_2 + 0x30f8);
    local_98 = *(undefined8 *)(param_2 + 0x3100);
    local_120 = param_2;
    local_88 = local_98;
    FUN_144a2c7c2(local_108,&local_98);
    iVar5 = FUN_147276a62();
    iVar6 = FUN_147276a62();
    FUN_1472768f0();
    uVar12 = (ulonglong)((uint)DAT_14ca222a0 << 0x19) | 0x20009;
    if (iVar6 == 1) {
      uVar12 = 0x2020009;
    }
    if (iVar5 == 1) {
      uVar12 = 0x2020009;
    }
    uVar15 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_4e = 0xff000100;
    local_54 = 0x10001;
    local_50 = 0x101;
    uStack_78 = 1;
    local_60 = 0;
    uStack_74 = 0;
    uStack_6c = 0;
    local_5c = DAT_14ca84e40;
    if ((int)local_98 < DAT_14ca84e40) {
      local_5c = (int)local_98;
    }
    if (local_5c < 2) {
      local_5c = 1;
    }
    local_128 = (undefined8 *)local_98;
    iVar5 = (int)((ulonglong)local_98 >> 0x20);
    local_58 = DAT_14ca84e40;
    if (iVar5 < DAT_14ca84e40) {
      local_58 = iVar5;
    }
    if (local_58 < 2) {
      local_58 = 1;
    }
    plVar1 = (longlong *)(param_1 + 0x70);
    uVar16 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar9 = uVar16 + 0x120;
    local_130 = plVar1;
    local_80 = uVar12;
    local_64 = uVar15;
    if (*(ulonglong *)(param_1 + 0x78) < uVar9) {
      FUN_140023dd8(plVar1,0x128);
      uVar16 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar9 = uVar16 + 0x120;
    }
    local_138 = param_1 + 0x178;
    *(ulonglong *)(param_1 + 0x70) = uVar9;
    FUN_1456bbb8c(uVar16,L"PathTracing.Denoising.Feature.Source",&local_80,0);
    iVar6 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar6 + 1U) {
      FUN_14472c0f6(local_138,iVar6);
    }
    plVar1 = local_130;
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar6 * 8) = uVar16;
    *(int *)(uVar16 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    *param_6 = uVar16;
    local_4e = 0xff000100;
    local_54 = 0x10001;
    local_50 = 0x101;
    uStack_78 = 1;
    local_60 = 0;
    local_5c = DAT_14ca84e40;
    if ((int)local_128 < DAT_14ca84e40) {
      local_5c = (int)local_128;
    }
    if (local_5c < 2) {
      local_5c = 1;
    }
    uStack_74 = 0;
    uStack_6c = 0;
    local_58 = DAT_14ca84e40;
    if (iVar5 < DAT_14ca84e40) {
      local_58 = iVar5;
    }
    if (local_58 < 2) {
      local_58 = 1;
    }
    uVar16 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar9 = uVar16 + 0x120;
    local_80 = uVar12;
    local_64 = uVar15;
    if (*(ulonglong *)(param_1 + 0x78) < uVar9) {
      FUN_140023dd8(local_130,0x128);
      uVar16 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar9 = uVar16 + 0x120;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar9;
    FUN_1456bbb8c(uVar16,L"PathTracing.Denoising.Feature.Target",&local_80,0);
    iVar5 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar5 + 1U) {
      FUN_14472c0f6(local_138,iVar5);
    }
    plVar1 = local_130;
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar5 * 8) = uVar16;
    *(int *)(uVar16 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    *param_7 = uVar16;
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar10 = puVar13 + 0x1c;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(local_130,0xf0);
      puVar13 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar10 = puVar13 + 0x1c;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    *puVar13 = &PTR_FUN_14a2af8d0;
    puVar13[0x1a] = 0;
    puVar13[0x1b] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    iVar5 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar5);
    }
    plVar1 = local_130;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar13;
    uVar12 = param_5[7];
    if ((*(char *)(uVar12 + 0x92) == '\x04') || (*(char *)(uVar12 + 0x92) == '\x01')) {
      uVar14 = *(undefined2 *)(uVar12 + 0x8e);
    }
    else {
      uVar14 = 0;
    }
    uVar2 = *(undefined1 *)(uVar12 + 0x90);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(local_130,0x48);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 8;
    }
    local_128 = puVar13 + 2;
    lVar11 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(uVar12 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 1;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar17 + 5) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)puVar17 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2e) = uVar14;
    *(undefined1 *)(puVar17 + 6) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x32) = 0;
    puVar17[7] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    plVar1 = local_130;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    *local_128 = puVar17;
    uVar12 = param_5[1];
    if ((*(char *)(uVar12 + 0x92) == '\x04') || (*(char *)(uVar12 + 0x92) == '\x01')) {
      uVar14 = *(undefined2 *)(uVar12 + 0x8e);
    }
    else {
      uVar14 = 0;
    }
    uVar2 = *(undefined1 *)(uVar12 + 0x90);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      local_138 = lVar11;
      FUN_140023dd8(local_130,0x48);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 8;
      lVar11 = local_138;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(uVar12 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 1;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar17 + 5) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)puVar17 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2e) = uVar14;
    *(undefined1 *)(puVar17 + 6) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x32) = 0;
    puVar17[7] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    plVar1 = local_130;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar13[3] = puVar17;
    uVar12 = param_5[8];
    if ((*(char *)(uVar12 + 0x92) == '\x04') || (*(char *)(uVar12 + 0x92) == '\x01')) {
      uVar14 = *(undefined2 *)(uVar12 + 0x8e);
    }
    else {
      uVar14 = 0;
    }
    uVar2 = *(undefined1 *)(uVar12 + 0x90);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      local_138 = lVar11;
      FUN_140023dd8(local_130,0x48);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 8;
      lVar11 = local_138;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(uVar12 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 1;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar17 + 5) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)puVar17 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2e) = uVar14;
    *(undefined1 *)(puVar17 + 6) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x32) = 0;
    puVar17[7] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    plVar1 = local_130;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar13[4] = puVar17;
    uVar12 = param_5[2];
    if ((*(char *)(uVar12 + 0x92) == '\x04') || (*(char *)(uVar12 + 0x92) == '\x01')) {
      uVar14 = *(undefined2 *)(uVar12 + 0x8e);
    }
    else {
      uVar14 = 0;
    }
    uVar2 = *(undefined1 *)(uVar12 + 0x90);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      local_138 = lVar11;
      FUN_140023dd8(local_130,0x48);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 8;
      lVar11 = local_138;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(uVar12 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 1;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar17 + 5) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)puVar17 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2e) = uVar14;
    *(undefined1 *)(puVar17 + 6) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x32) = 0;
    puVar17[7] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    plVar1 = local_130;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar13[5] = puVar17;
    uVar12 = param_5[6];
    if ((*(char *)(uVar12 + 0x92) == '\x04') || (*(char *)(uVar12 + 0x92) == '\x01')) {
      uVar14 = *(undefined2 *)(uVar12 + 0x8e);
    }
    else {
      uVar14 = 0;
    }
    uVar2 = *(undefined1 *)(uVar12 + 0x90);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      local_138 = lVar11;
      FUN_140023dd8(local_130,0x48);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 8;
      lVar11 = local_138;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(uVar12 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 1;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar17 + 5) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)puVar17 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2e) = uVar14;
    *(undefined1 *)(puVar17 + 6) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x32) = 0;
    puVar17[7] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    plVar1 = local_130;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar13[6] = puVar17;
    uVar12 = *param_5;
    if ((*(char *)(uVar12 + 0x92) == '\x04') || (*(char *)(uVar12 + 0x92) == '\x01')) {
      uVar14 = *(undefined2 *)(uVar12 + 0x8e);
    }
    else {
      uVar14 = 0;
    }
    uVar2 = *(undefined1 *)(uVar12 + 0x90);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      local_138 = lVar11;
      FUN_140023dd8(local_130,0x48);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 8;
      lVar11 = local_138;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(uVar12 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 1;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar17 + 5) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)puVar17 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2e) = uVar14;
    *(undefined1 *)(puVar17 + 6) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x32) = 0;
    puVar17[7] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    plVar1 = local_130;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar13[7] = puVar17;
    uVar12 = param_5[10];
    if (uVar12 == 0) {
      uVar12 = param_5[4];
    }
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(local_130,0x50);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(uVar12 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 3;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar17 + 5) = 0xd;
    *(undefined8 *)((longlong)puVar17 + 0x2c) = 0xffffffff00000000;
    puVar17[7] = 0;
    puVar17[8] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      local_138 = lVar11;
      FUN_1447568fc(lVar11,iVar5);
      lVar11 = local_138;
    }
    plVar1 = local_130;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar13[8] = puVar17;
    uVar12 = param_5[4];
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      local_138 = lVar11;
      FUN_140023dd8(local_130,0x50);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 9;
      lVar11 = local_138;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(uVar12 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 3;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar17 + 5) = 0xd;
    *(undefined8 *)((longlong)puVar17 + 0x2c) = 0xffffffff00000000;
    puVar17[7] = 0;
    puVar17[8] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    plVar1 = local_130;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar13[9] = puVar17;
    uVar12 = *param_6;
    uVar2 = *(undefined1 *)(uVar12 + 0x94);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      local_138 = lVar11;
      FUN_140023dd8(local_130,0x50);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 9;
      lVar11 = local_138;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(uVar12 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 0;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar17 + 5) = 0;
    *puVar17 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar17 + 6) = uVar2;
    *(undefined1 *)(puVar17 + 7) = 0;
    *(undefined4 *)((longlong)puVar17 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x35) = 0;
    puVar17[8] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      local_138 = lVar11;
      FUN_1447568fc(lVar11,iVar5);
      lVar11 = local_138;
    }
    plVar1 = local_130;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar13[0x1a] = puVar17;
    uVar12 = *param_7;
    uVar2 = *(undefined1 *)(uVar12 + 0x94);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      local_138 = lVar11;
      FUN_140023dd8(local_130,0x50);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 9;
      lVar11 = local_138;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(uVar12 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 0;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar17 + 5) = 0;
    *puVar17 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar17 + 6) = uVar2;
    *(undefined1 *)(puVar17 + 7) = 0;
    *(undefined4 *)((longlong)puVar17 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x35) = 0;
    puVar17[8] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    plVar1 = local_130;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar13[0x1b] = puVar17;
    uVar12 = param_5[5];
    if ((*(char *)(uVar12 + 0x92) == '\x04') || (*(char *)(uVar12 + 0x92) == '\x01')) {
      uVar14 = *(undefined2 *)(uVar12 + 0x8e);
    }
    else {
      uVar14 = 0;
    }
    uVar2 = *(undefined1 *)(uVar12 + 0x90);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      local_138 = lVar11;
      FUN_140023dd8(local_130,0x48);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 8;
      lVar11 = local_138;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(uVar12 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 1;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar17 + 5) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)puVar17 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2e) = uVar14;
    *(undefined1 *)(puVar17 + 6) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x32) = 0;
    puVar17[7] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(lVar11,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar13[10] = puVar17;
    puVar13[0xb] = DAT_14c9c0de0;
    puVar10 = local_108;
    puVar13 = puVar13 + 0xc;
    for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    uVar3 = *(undefined8 *)(local_120 + 0x13818);
    FUN_145f3216c();
    FUN_1448e935e(uVar3,&local_80,&DAT_14ca20288,0);
    FUN_145f3216c();
    local_110 = local_98._4_4_ + 0xe;
    if (-1 < local_98._4_4_ + 7) {
      local_110 = local_98._4_4_ + 7;
    }
    local_110 = local_110 >> 3;
    local_114 = (int)local_98 + 0xe;
    if (-1 < (int)local_98 + 7) {
      local_114 = (int)local_98 + 7;
    }
    local_114 = local_114 >> 3;
    local_148 = &local_114;
    local_10c = 1;
    FUN_14727fbfb(param_1,&local_115,&local_80,local_128);
    param_4 = *param_7;
    goto LAB_142e833e0;
  }
  *param_7 = param_4;
LAB_142e833e0:
  if (*(int *)(*param_6 + 0x84) == *(int *)(param_4 + 0x84)) {
    iVar5 = *(int *)(*param_6 + 0x88);
    uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),iVar5 == *(int *)(param_4 + 0x88));
  }
  else {
    uVar4 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 142e84465 FUN_142e84465 body=69 status=ok
// SIG undefined FUN_142e84465(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e84465(void)

{
  _DAT_14ca20b60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e844a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca20b68,1);
  return;
}



// FUNCTION 142e844aa FUN_142e844aa body=69 status=ok
// SIG undefined FUN_142e844aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e844aa(void)

{
  _DAT_14ca20b78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e844ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca20b80,1);
  return;
}



// FUNCTION 142e844ef FUN_142e844ef body=69 status=ok
// SIG undefined FUN_142e844ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e844ef(void)

{
  _DAT_14ca20b90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e84531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca20b98,1);
  return;
}



// FUNCTION 142e84534 FUN_142e84534 body=69 status=ok
// SIG undefined FUN_142e84534(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e84534(void)

{
  _DAT_14ca20ba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e84576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca20ba8,1);
  return;
}



// FUNCTION 142e845ec FUN_142e845ec body=11303 status=ok
// SIG undefined FUN_142e845ec(void)

void FUN_142e845ec(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  double *pdVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  byte bVar21;
  char cVar22;
  uint uVar23;
  int iVar24;
  DWORD DVar25;
  DWORD DVar26;
  longlong *plVar27;
  undefined8 uVar28;
  uint *puVar29;
  undefined8 *puVar30;
  undefined4 *puVar31;
  undefined **ppuVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  undefined ***pppuVar37;
  uint *puVar38;
  ulonglong uVar39;
  undefined8 *puVar40;
  int iVar41;
  byte bVar42;
  longlong lVar43;
  double *pdVar44;
  longlong **pplVar45;
  double *pdVar46;
  undefined8 *puVar47;
  longlong *plVar48;
  longlong *plVar49;
  undefined *puVar50;
  int iVar51;
  longlong lVar52;
  bool bVar53;
  bool bVar54;
  float fVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  undefined1 auStack_e68 [32];
  undefined8 *local_e48;
  undefined1 local_e40;
  undefined1 local_e38;
  undefined8 *local_e30;
  undefined4 local_e28;
  undefined8 local_e20;
  undefined4 local_e18;
  char local_e01;
  longlong local_e00;
  longlong local_df8;
  double local_df0;
  double local_de8;
  double local_de0;
  undefined **local_dd8;
  longlong *local_dd0;
  double local_dc8;
  double local_dc0;
  longlong local_db8;
  double local_db0;
  double local_da8;
  double local_da0;
  double local_d98;
  double local_d90;
  double local_d88;
  double local_d80;
  double local_d78;
  double local_d70;
  longlong local_d68;
  int local_d60;
  longlong local_d58;
  undefined4 local_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined4 uStack_d30;
  undefined4 uStack_d2c;
  undefined4 uStack_d28;
  undefined4 uStack_d24;
  undefined8 uStack_d20;
  longlong local_d18;
  undefined8 uStack_d10;
  int local_d00;
  int local_cfc;
  longlong local_cf8;
  undefined4 local_cf0;
  double local_ce8;
  double local_ce0;
  double local_cd8;
  double local_cd0;
  undefined8 local_cc8;
  longlong local_cc0;
  undefined8 local_cb8;
  longlong local_cb0;
  double local_c80;
  uint local_c74;
  undefined **local_c68;
  double local_c60;
  double local_c58;
  undefined8 local_c50;
  double local_c48;
  double local_c40;
  double local_c38;
  undefined8 local_c30;
  double local_c28;
  undefined8 local_c20;
  double local_c18;
  undefined8 local_c10;
  longlong *local_c08;
  double local_c00;
  double local_bf8;
  undefined8 local_bf0;
  undefined1 local_b70 [24];
  undefined4 local_b58;
  undefined8 local_ae8;
  undefined8 local_aa8;
  double dStack_aa0;
  undefined ***local_a98;
  undefined **local_a88;
  longlong *plStack_a80;
  double local_a78;
  char local_a70;
  double local_a68;
  double dStack_a60;
  double local_a58;
  double local_a48;
  double dStack_a40;
  double local_a38;
  longlong local_280;
  longlong local_1f8;
  longlong local_1e8 [3];
  undefined1 local_1d0 [80];
  longlong local_180;
  int local_178;
  double local_171;
  double dStack_169;
  double local_161;
  undefined8 local_158;
  longlong *local_150 [3];
  longlong local_138 [9];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_e68;
  local_e00 = param_3;
  FUN_140051d96(&local_d00,param_3 + 0x98);
  fVar55 = (float)*(int *)(param_2 + 0x39c) / 100.0;
  if (1.0 <= fVar55) {
    fVar55 = 1.0;
  }
  if (fVar55 <= 0.25) {
    fVar55 = 0.25;
  }
  iVar41 = -((int)ROUND(-0.5 - ((float)local_d00 * fVar55 + (float)local_d00 * fVar55)) >> 1);
  if (local_d00 <= iVar41) {
    iVar41 = local_d00;
  }
  if (iVar41 < 2) {
    iVar41 = 1;
  }
  iVar51 = -((int)ROUND(-0.5 - ((float)local_cfc * fVar55 + (float)local_cfc * fVar55)) >> 1);
  if (local_cfc <= iVar51) {
    iVar51 = local_cfc;
  }
  if (iVar51 < 2) {
    iVar51 = 1;
  }
  local_db8 = param_1;
  cVar22 = FUN_14583c036(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 8) * 2));
  lVar52 = *(longlong *)(param_2 + 0x3d0);
  local_e01 = cVar22;
  local_df8 = param_2;
  if (lVar52 == 0) {
LAB_142e84805:
    plVar27 = (longlong *)FUN_14001cc68(0x68,0x10);
    *(undefined4 *)(plVar27 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)plVar27 + 0xc) = 0x105;
    *(undefined1 *)((longlong)plVar27 + 0xe) = 0;
    plVar27[2] = 0;
    plVar27[3] = 0;
    plVar27[4] = 0;
    plVar27[5] = -0x3810000020000000;
    plVar27[6] = 0;
    plVar27[7] = 0;
    *(undefined8 *)((longlong)plVar27 + 0x3f) = 0;
    plVar27[10] = 0;
    *plVar27 = (longlong)&PTR_FUN_14a2b0290;
    plVar27[9] = (longlong)&PTR_LAB_14a2b02e0;
    *(undefined4 *)(plVar27 + 0xb) = 1;
    *(ulonglong *)((longlong)plVar27 + 0x5c) = CONCAT44(iVar51,iVar41);
    *(longlong **)(local_df8 + 0x3d0) = plVar27;
    dVar61 = *(double *)(local_df8 + 0x3c8);
    lVar52 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar41 = *(int *)(lVar52 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar41 != 2) {
        if (iVar41 == 1) {
          DVar25 = FUN_140ad26c0();
          DVar26 = GetCurrentThreadId();
          bVar53 = DVar25 == DVar26;
        }
        else {
          bVar53 = iVar41 == 0x10;
        }
        cVar22 = local_e01;
        if (!bVar53) goto LAB_142e84978;
      }
    }
    else if (iVar41 != 0x10) {
LAB_142e84978:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar41 = *(int *)(lVar52 + 0xc60), iVar41 == 2))
        goto LAB_142e848c2;
        if (iVar41 == 1) {
          DVar25 = FUN_140ad26c0();
          DVar26 = GetCurrentThreadId();
          if (DVar25 == DVar26) goto LAB_142e848c2;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar30 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar29 = (uint *)*puVar30;
        if (puVar29 != (uint *)0x0) goto LAB_142e84a56;
        do {
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142ea45b1);
          }
          lVar52 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar31 = *(undefined4 **)(lVar52 + 0x310);
          *(undefined8 *)(lVar52 + 0x310) = 0;
          if (puVar31 == (undefined4 *)0x0) {
            puVar31 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar31 = 0xffffffff;
          *(undefined4 **)(puVar31 + 0x10) = puVar31 + 0x16;
          puVar31[0x12] = 0;
          *puVar30 = puVar31;
          FUN_140217a48(puVar30);
          puVar29 = (uint *)*puVar30;
LAB_142e84a56:
          uVar39 = *(longlong *)(puVar29 + 0x10) + 7;
          uVar23 = puVar29[0x12];
          while( true ) {
            puVar40 = (undefined8 *)(uVar39 & 0xfffffffffffffff8);
            if (puVar40 + 0x18 <= puVar29 + 0x4000) {
              *(undefined8 **)(puVar29 + 0x10) = puVar40 + 0x18;
              puVar29[0x12] = uVar23 + 1;
              iVar41 = 0;
              FUN_1447247dc(puVar40,0);
              *puVar40 = &PTR_FUN_14a2b2500;
              puVar40[0x15] = plVar27;
              puVar40[0x16] = dVar61;
              *(char *)(puVar40 + 0x17) = cVar22;
              uVar3 = (int)local_aa8;
              *(undefined4 *)((longlong)puVar40 + 0xb9) = uVar3;
              *(undefined4 *)((longlong)puVar40 + 0xbc) = local_aa8._3_4_;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar23 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar23 < 2) {
                  bVar42 = (&DAT_149e38edc)[uVar23];
                }
                else {
                  bVar42 = 2;
                }
              }
              else {
                iVar41 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                bVar42 = 5;
              }
              if (*(code **)(puVar40[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar40[0xe] + 0x18))(puVar40 + 0xe,puVar40 + 9);
              }
              puVar40[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar40[9] = puVar40;
              puVar40[10] = puVar40;
              lVar52 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar52 == 0) {
                bVar21 = 1;
                if (bVar42 != 6) {
                  bVar21 = bVar42;
                }
                bVar42 = bVar21;
                uVar28 = 0;
              }
              else {
                if (bVar42 == 6) {
                  bVar42 = (byte)((ulonglong)*(undefined8 *)(lVar52 + 0x38) >> 0x3b);
                }
                uVar28 = *(undefined8 *)(lVar52 + 0x30);
              }
              puVar40[0xf] = uVar28;
              puVar40[0x10] = (ulonglong)(bVar42 & 7) << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar40 + 0x1c) = iVar41;
              if (puVar40 == (undefined8 *)0x0) {
                local_c68 = (undefined **)CONCAT71(local_c68._1_7_,1);
                goto LAB_142e84cf2;
              }
              LOCK();
              *(int *)(puVar40 + 1) = *(int *)(puVar40 + 1) + 1;
              UNLOCK();
              local_c68 = (undefined **)CONCAT71(local_c68._1_7_,1);
              FUN_1447439e4(puVar40);
              LOCK();
              piVar1 = (int *)(puVar40 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 != 0) goto LAB_142e84d01;
              puVar30 = (undefined8 *)*puVar40;
              goto LAB_142e860b5;
            }
            *(uint **)(puVar29 + 0x10) = puVar29 + 0x4000;
            LOCK();
            uVar4 = *puVar29;
            *puVar29 = *puVar29 + uVar23 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar23) != 0xffffffff) break;
            puVar29 = (uint *)*puVar30;
            *puVar29 = 0xffffffff;
            *(uint **)(puVar29 + 0x10) = puVar29 + 0x16;
            puVar29[0x12] = 0;
            *puVar30 = puVar29;
            uVar39 = (longlong)puVar29 + 0x5f;
            uVar23 = 0;
          }
        } while( true );
      }
      local_e48 = &local_aa8;
      local_a98 = (undefined ***)0x0;
      local_a88 = &PTR_LAB_14a2b24b0;
      local_aa8 = FUN_142ea82d8;
      plStack_a80 = plVar27;
      local_a78 = dVar61;
      local_a70 = cVar22;
      FUN_14005a792(&DAT_14ca9a440,L"InitRenderTargetCommand",&DAT_14ca25218);
      if (local_aa8 != (code *)0x0) goto LAB_142e84b28;
      goto LAB_142e84d01;
    }
LAB_142e848c2:
    if (cVar22 == '\0') {
      (**(code **)(*plVar27 + 0x18))(plVar27,&DAT_14ca85100);
    }
    *(undefined8 *)((longlong)dVar61 + 600) = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar52 + 0x48) + 0x28))(lVar52 + 0x48,&local_aa8);
    bVar53 = local_aa8._4_4_ == iVar51 && (int)local_aa8 == iVar41;
    plVar27 = *(longlong **)(local_df8 + 0x3d0);
    if ((cVar22 == '\0') && (local_aa8._4_4_ == iVar51 && (int)local_aa8 == iVar41)) {
      bVar53 = plVar27[2] != 0;
    }
    if ((plVar27 != (longlong *)0x0) && (!bVar53)) {
      lVar52 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar24 = *(int *)(lVar52 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar24 != 2) {
          if (iVar24 == 1) {
            DVar25 = FUN_140ad26c0();
            DVar26 = GetCurrentThreadId();
            bVar53 = DVar25 == DVar26;
          }
          else {
            bVar53 = iVar24 == 0x10;
          }
          cVar22 = local_e01;
          if (!bVar53) goto LAB_142e868ec;
        }
LAB_142e847d4:
        (**(code **)(*plVar27 + 0x20))(plVar27);
        puVar30 = (undefined8 *)*plVar27;
        plVar49 = plVar27;
LAB_142e847e3:
        (*(code *)*puVar30)(plVar49,1);
      }
      else {
        if (iVar24 == 0x10) goto LAB_142e847d4;
LAB_142e868ec:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar24 = *(int *)(lVar52 + 0xc60), iVar24 == 2))
          goto LAB_142e847d4;
          if (iVar24 == 1) {
            DVar25 = FUN_140ad26c0();
            DVar26 = GetCurrentThreadId();
            if (DVar25 == DVar26) goto LAB_142e847d4;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar30 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar29 = (uint *)*puVar30;
          if (puVar29 != (uint *)0x0) goto LAB_142e869ca;
          do {
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142ea45b1);
            }
            lVar52 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar31 = *(undefined4 **)(lVar52 + 0x310);
            *(undefined8 *)(lVar52 + 0x310) = 0;
            if (puVar31 == (undefined4 *)0x0) {
              puVar31 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar31 = 0xffffffff;
            *(undefined4 **)(puVar31 + 0x10) = puVar31 + 0x16;
            puVar31[0x12] = 0;
            *puVar30 = puVar31;
            FUN_140217a48(puVar30);
            puVar29 = (uint *)*puVar30;
LAB_142e869ca:
            uVar39 = *(longlong *)(puVar29 + 0x10) + 7;
            uVar23 = puVar29[0x12];
            while( true ) {
              plVar49 = (longlong *)(uVar39 & 0xfffffffffffffff8);
              if (plVar49 + 0x16 <= puVar29 + 0x4000) {
                *(longlong **)(puVar29 + 0x10) = plVar49 + 0x16;
                puVar29[0x12] = uVar23 + 1;
                iVar24 = 0;
                FUN_1447247dc(plVar49,0);
                *plVar49 = (longlong)&PTR_FUN_14a2b2498;
                plVar49[0x15] = (longlong)plVar27;
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar23 = DAT_14c7585c8 >> 10 & 3;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar23 < 2) {
                    bVar42 = (&DAT_149e38edc)[uVar23];
                    iVar24 = 0;
                  }
                  else {
                    bVar42 = 2;
                  }
                }
                else {
                  iVar24 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  bVar42 = 5;
                }
                if (*(code **)(plVar49[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(plVar49[0xe] + 0x18))(plVar49 + 0xe,plVar49 + 9);
                }
                plVar49[0xe] = (longlong)
                               LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                plVar49[9] = (longlong)plVar49;
                plVar49[10] = (longlong)plVar49;
                lVar52 = *(longlong *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x2b8);
                if (lVar52 == 0) {
                  bVar21 = 1;
                  if (bVar42 != 6) {
                    bVar21 = bVar42;
                  }
                  bVar42 = bVar21;
                  lVar52 = 0;
                }
                else {
                  if (bVar42 == 6) {
                    bVar42 = (byte)((ulonglong)*(undefined8 *)(lVar52 + 0x38) >> 0x3b);
                  }
                  lVar52 = *(longlong *)(lVar52 + 0x30);
                }
                plVar49[0xf] = lVar52;
                plVar49[0x10] = (ulonglong)(bVar42 & 7) << 0x3b | 0xc00000527800b400;
                *(int *)((longlong)plVar49 + 0x1c) = iVar24;
                if (plVar49 == (longlong *)0x0) {
                  local_aa8 = (code *)CONCAT71(local_aa8._1_7_,1);
                  FUN_1447439e4(0);
                  goto LAB_142e847ea;
                }
                LOCK();
                *(int *)(plVar49 + 1) = (int)plVar49[1] + 1;
                UNLOCK();
                local_aa8 = (code *)CONCAT71(local_aa8._1_7_,1);
                FUN_1447439e4(plVar49);
                LOCK();
                plVar27 = plVar49 + 1;
                *(int *)plVar27 = (int)*plVar27 + -1;
                UNLOCK();
                if ((int)*plVar27 != 0) goto LAB_142e847ea;
                puVar30 = (undefined8 *)*plVar49;
                goto LAB_142e847e3;
              }
              *(uint **)(puVar29 + 0x10) = puVar29 + 0x4000;
              LOCK();
              uVar4 = *puVar29;
              *puVar29 = *puVar29 + uVar23 + 1;
              UNLOCK();
              if ((uVar4 ^ uVar23) != 0xffffffff) break;
              puVar29 = (uint *)*puVar30;
              *puVar29 = 0xffffffff;
              *(uint **)(puVar29 + 0x10) = puVar29 + 0x16;
              puVar29[0x12] = 0;
              *puVar30 = puVar29;
              uVar39 = (longlong)puVar29 + 0x5f;
              uVar23 = 0;
            }
          } while( true );
        }
        local_a98 = (undefined ***)0x0;
        local_a88 = &PTR_LAB_14a2b2440;
        local_aa8 = FUN_142ea80f4;
        local_e48 = &local_aa8;
        plStack_a80 = plVar27;
        FUN_14005a792(&DAT_14ca9a440,L"ReleaseRenderTargetCommand",&DAT_14ca25214);
        if (local_aa8 != (code *)0x0) {
          pppuVar37 = local_a98;
          if (local_a98 == (undefined ***)0x0) {
            pppuVar37 = &local_a88;
          }
          (*(code *)(*pppuVar37)[2])();
        }
      }
LAB_142e847ea:
      *(undefined8 *)(local_df8 + 0x3d0) = 0;
      goto LAB_142e84805;
    }
    if (plVar27 == (longlong *)0x0) goto LAB_142e84805;
    plVar27 = *(longlong **)(local_df8 + 0x3c8);
    lVar52 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar41 = *(int *)(lVar52 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar41 != 2) {
        if (iVar41 == 1) {
          DVar25 = FUN_140ad26c0();
          DVar26 = GetCurrentThreadId();
          bVar53 = DVar25 == DVar26;
        }
        else {
          bVar53 = iVar41 == 0x10;
        }
        if (!bVar53) goto LAB_142e86d1a;
      }
LAB_142e8492d:
      plVar27[0x4b] = 0;
    }
    else {
      if (iVar41 == 0x10) goto LAB_142e8492d;
LAB_142e86d1a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar41 = *(int *)(lVar52 + 0xc60), iVar41 == 2))
        goto LAB_142e8492d;
        if (iVar41 == 1) {
          DVar25 = FUN_140ad26c0();
          DVar26 = GetCurrentThreadId();
          if (DVar25 == DVar26) goto LAB_142e8492d;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar30 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar29 = (uint *)*puVar30;
        if (puVar29 != (uint *)0x0) goto LAB_142e86df8;
LAB_142e86d7a:
        uVar23 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar23 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar23 | 1;
          __tlregdtor(&LAB_142ea45b1);
        }
        lVar52 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar31 = *(undefined4 **)(lVar52 + 0x310);
        *(undefined8 *)(lVar52 + 0x310) = 0;
        if (puVar31 == (undefined4 *)0x0) {
          puVar31 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar31 = 0xffffffff;
        *(undefined4 **)(puVar31 + 0x10) = puVar31 + 0x16;
        puVar31[0x12] = 0;
        *puVar30 = puVar31;
        FUN_140217a48(puVar30);
        puVar29 = (uint *)*puVar30;
LAB_142e86df8:
        uVar39 = *(longlong *)(puVar29 + 0x10) + 7;
        uVar23 = puVar29[0x12];
        do {
          puVar40 = (undefined8 *)(uVar39 & 0xfffffffffffffff8);
          if (puVar40 + 0x16 <= puVar29 + 0x4000) {
            *(undefined8 **)(puVar29 + 0x10) = puVar40 + 0x16;
            puVar29[0x12] = uVar23 + 1;
            iVar41 = 0;
            FUN_1447247dc(puVar40,0);
            *puVar40 = &PTR_FUN_14a2b2530;
            puVar40[0x15] = plVar27;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar23 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar23 < 2) {
                bVar42 = (&DAT_149e38edc)[uVar23];
                iVar41 = 0;
              }
              else {
                bVar42 = 2;
              }
            }
            else {
              iVar41 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              bVar42 = 5;
            }
            if (*(code **)(puVar40[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar40[0xe] + 0x18))(puVar40 + 0xe,puVar40 + 9);
            }
            puVar40[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar40[9] = puVar40;
            puVar40[10] = puVar40;
            lVar52 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar52 == 0) {
              bVar21 = 1;
              if (bVar42 != 6) {
                bVar21 = bVar42;
              }
              bVar42 = bVar21;
              uVar28 = 0;
            }
            else {
              if (bVar42 == 6) {
                bVar42 = (byte)((ulonglong)*(undefined8 *)(lVar52 + 0x38) >> 0x3b);
              }
              uVar28 = *(undefined8 *)(lVar52 + 0x30);
            }
            puVar40[0xf] = uVar28;
            puVar40[0x10] = (ulonglong)(bVar42 & 7) << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar40 + 0x1c) = iVar41;
            if (puVar40 == (undefined8 *)0x0) {
              local_aa8 = (code *)CONCAT71(local_aa8._1_7_,1);
LAB_142e84cf2:
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar40 + 1) = *(int *)(puVar40 + 1) + 1;
              UNLOCK();
              local_aa8 = (code *)CONCAT71(local_aa8._1_7_,1);
              FUN_1447439e4(puVar40);
              LOCK();
              piVar1 = (int *)(puVar40 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                puVar30 = (undefined8 *)*puVar40;
LAB_142e860b5:
                (*(code *)*puVar30)(puVar40,1);
              }
            }
            goto LAB_142e84d01;
          }
          *(uint **)(puVar29 + 0x10) = puVar29 + 0x4000;
          LOCK();
          uVar4 = *puVar29;
          *puVar29 = *puVar29 + uVar23 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar23) != 0xffffffff) goto LAB_142e86d7a;
          puVar29 = (uint *)*puVar30;
          *puVar29 = 0xffffffff;
          *(uint **)(puVar29 + 0x10) = puVar29 + 0x16;
          puVar29[0x12] = 0;
          *puVar30 = puVar29;
          uVar39 = (longlong)puVar29 + 0x5f;
          uVar23 = 0;
        } while( true );
      }
      local_a98 = (undefined ***)0x0;
      local_a88 = &PTR_LAB_14a2b2510;
      local_aa8 = (code *)&LAB_142ea84c0;
      local_e48 = &local_aa8;
      plStack_a80 = plVar27;
      FUN_14005a792(&DAT_14ca9a440,L"InitRenderTargetCommand",&DAT_14ca2521c);
      if (local_aa8 == (code *)0x0) goto LAB_142e84d01;
LAB_142e84b28:
      pppuVar37 = local_a98;
      if (local_a98 == (undefined ***)0x0) {
        pppuVar37 = &local_a88;
      }
      (*(code *)(*pppuVar37)[2])();
    }
  }
LAB_142e84d01:
  dVar16 = *(double *)(local_df8 + 0x240);
  dVar20 = *(double *)(local_df8 + 0x248);
  dVar61 = *(double *)(local_df8 + 0x250);
  dVar63 = dVar20 + dVar20;
  dVar56 = dVar61 + dVar61;
  dVar15 = dVar16 * (dVar16 + dVar16);
  dVar60 = *(double *)(local_df8 + 0x280);
  dVar62 = *(double *)(local_df8 + 0x288);
  dVar10 = (1.0 - (dVar61 * dVar56 + dVar20 * dVar63)) * dVar60;
  dVar11 = (1.0 - (dVar61 * dVar56 + dVar15)) * dVar62;
  dVar17 = *(double *)(local_df8 + 0x290);
  dVar59 = *(double *)(local_df8 + 0x240) * dVar56;
  dVar61 = *(double *)(local_df8 + 600);
  dVar57 = dVar56 * dVar61;
  dVar58 = (dVar16 + dVar16) * *(double *)(local_df8 + 600);
  dVar61 = dVar63 * dVar61;
  dVar12 = (dVar63 * dVar16 + dVar57) * dVar60;
  dVar13 = (dVar56 * dVar20 + dVar58) * dVar62;
  dVar14 = (dVar61 + dVar59) * dVar17;
  dVar60 = (dVar59 - dVar61) * dVar60;
  dVar62 = (dVar63 * dVar16 - dVar57) * dVar62;
  dVar61 = (dVar56 * dVar20 - dVar58) * dVar17;
  dVar56 = *(double *)(local_df8 + 0x260) * 0.0 + dVar62 * 0.0 + dVar10 * 0.0 + dVar14;
  dVar57 = *(double *)(local_df8 + 0x268) * 0.0 + dVar11 * 0.0 + dVar12 * 0.0 + dVar61;
  local_da8 = 0.0;
  local_db0 = 1.0;
  dVar17 = (1.0 - (dVar15 + dVar20 * dVar63)) * dVar17;
  dVar15 = dVar60 * 0.0 + dVar13 * 0.0 + dVar17 + *(double *)(local_df8 + 0x270) * 0.0;
  dVar16 = dVar15 * dVar15 + dVar56 * dVar56 + dVar57 * dVar57;
  local_de0 = 0.0;
  local_df0 = 0.0;
  if (9.99999993922529e-09 < dVar16) {
    local_de0 = 1.0 / SQRT(dVar16);
    local_da8 = dVar56 * local_de0;
    local_df0 = dVar57 * local_de0;
    local_db0 = dVar15 * local_de0;
    local_de0 = local_de0 *
                ((*(double *)(local_df8 + 0x270) +
                 dVar13 * DAT_14c8464e8 + dVar60 * DAT_14c8464e0 + dVar17 * DAT_14c8464f0) * dVar15
                + (*(double *)(local_df8 + 0x260) +
                  dVar10 * DAT_14c8464e0 + dVar62 * DAT_14c8464e8 + dVar14 * DAT_14c8464f0) * dVar56
                  + dVar57 * (*(double *)(local_df8 + 0x268) +
                             dVar12 * DAT_14c8464e0 + dVar11 * DAT_14c8464e8 +
                             dVar61 * DAT_14c8464f0));
  }
  local_d18 = 0;
  uStack_d10 = 0;
  if (0 < *(int *)(local_e00 + 0x3f0)) {
    local_dc0 = (local_db0 + local_db0) * local_de0;
    local_dc8 = (local_df0 + local_df0) * local_de0;
    local_dd0 = (longlong *)((local_da8 + local_da8) * local_de0);
    local_de8 = local_db0 * -2.0;
    local_d70 = local_de8 * local_db0 + 1.0;
    dVar62 = local_df0 * -2.0;
    local_d80 = dVar62 * local_db0;
    dVar61 = local_da8 * -2.0;
    local_d88 = dVar61 * local_db0;
    local_d90 = local_df0 * local_de8;
    local_d98 = local_da8 * dVar62;
    local_d78 = dVar62 * local_df0 + 1.0;
    local_da0 = dVar61 * local_df0;
    local_de8 = local_de8 * local_da8;
    local_dd8 = (undefined **)(dVar61 * local_da8 + 1.0);
    bVar42 = 1;
    lVar52 = 0;
    do {
      lVar43 = *(longlong *)(local_e00 + 1000);
      puVar30 = &DAT_14c846400;
      pplVar45 = local_150;
      for (lVar33 = 0xc; lVar33 != 0; lVar33 = lVar33 + -1) {
        *pplVar45 = (longlong *)*puVar30;
        puVar30 = puVar30 + 1;
        pplVar45 = pplVar45 + 1;
      }
      local_161 = DAT_14c8464f0;
      local_171 = DAT_14c8464e0;
      dStack_169 = DAT_14c8464e8;
      lVar33 = lVar43 + 0x9b0 + lVar52 * 0x13c10;
      iVar41 = *(int *)(lVar33 + -0x4d4);
      iVar51 = *(int *)(lVar33 + -0x4d8);
      iVar24 = *(int *)(lVar33 + -0x4cc);
      iVar5 = *(int *)(lVar33 + -0x4d0);
      lVar43 = lVar43 + lVar52 * 0x13c10;
      fVar55 = (float)*(int *)(local_df8 + 0x39c) / 100.0;
      if (1.0 <= fVar55) {
        fVar55 = 1.0;
      }
      if (fVar55 <= 0.25) {
        fVar55 = 0.25;
      }
      local_c68 = local_dd8;
      local_c60 = local_d98;
      local_c58 = local_de8;
      local_c50 = 0;
      local_c48 = local_da0;
      local_c40 = local_d78;
      local_c38 = local_d90;
      local_c30 = 0;
      local_c28 = local_d88;
      local_c20 = local_d80;
      local_c18 = local_d70;
      local_c10 = 0;
      local_c08 = local_dd0;
      local_c00 = local_dc8;
      local_bf8 = local_dc0;
      local_bf0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_cf8,&local_c68,lVar33);
      FUN_14007522e(&local_aa8,&local_cf8);
      dVar11 = local_c80;
      dVar62 = DAT_14c8464f0 * local_a68 +
               DAT_14c8464e8 * (double)local_a88 + DAT_14c8464e0 * (double)local_aa8 + local_a48;
      dVar10 = DAT_14c8464f0 * dStack_a60 +
               DAT_14c8464e8 * (double)plStack_a80 + DAT_14c8464e0 * dStack_aa0 + dStack_a40;
      dVar61 = DAT_14c8464e0 * (double)local_a98 + DAT_14c8464e8 * local_a78 +
               DAT_14c8464f0 * local_a58 + local_a38;
      plVar27 = &local_cf8;
      plVar49 = local_1e8;
      for (lVar34 = 0xc; lVar34 != 0; lVar34 = lVar34 + -1) {
        *plVar49 = *plVar27;
        plVar27 = plVar27 + 1;
        plVar49 = plVar49 + 1;
      }
      if ((1.0 < *(double *)(lVar33 + -0x108) || *(double *)(lVar33 + -0x108) == 1.0) ||
         (((*(float *)(local_df8 + 0x3a0) == 0.0 && (!NAN(*(float *)(local_df8 + 0x3a0)))) &&
          (1 < *(int *)(local_e00 + 0x3f0))))) {
        puVar30 = (undefined8 *)(lVar43 + 0x830);
        puVar40 = &local_aa8;
        for (lVar33 = 0x10; lVar33 != 0; lVar33 = lVar33 + -1) {
          *puVar40 = *puVar30;
          puVar30 = puVar30 + 1;
          puVar40 = puVar40 + 1;
        }
      }
      else {
        dVar12 = atan(1.0 / *(double *)(lVar43 + 0x830));
        FUN_1472d93be(CONCAT44(*(int *)(lVar43 + 0x4e4) - *(int *)(lVar43 + 0x4dc),
                               *(int *)(lVar43 + 0x4e0) - *(int *)(lVar43 + 0x4d8)),
                      *(float *)(local_df8 + 0x3a0) * 0.017453292 + (float)dVar12,DAT_14c75b140,
                      &local_aa8);
      }
      uVar39 = uStack_d10;
      local_d38 = *(undefined8 *)(lVar43 + 0x10b0);
      local_d48 = *(undefined ***)(lVar43 + 0x10a0);
      uStack_d40 = *(undefined8 *)(lVar43 + 0x10a8);
      uStack_d20 = *(undefined8 *)(lVar43 + 0x10c8);
      uStack_d30 = *(undefined4 *)(lVar43 + 0x10b8);
      uStack_d2c = *(undefined4 *)(lVar43 + 0x10bc);
      uStack_d28 = *(undefined4 *)(lVar43 + 0x10c0);
      uStack_d24 = *(undefined4 *)(lVar43 + 0x10c4);
      plVar27 = local_1e8;
      pplVar45 = local_150;
      for (lVar33 = 0xc; lVar33 != 0; lVar33 = lVar33 + -1) {
        *pplVar45 = (longlong *)*plVar27;
        plVar27 = plVar27 + 1;
        pplVar45 = pplVar45 + 1;
      }
      uVar6 = *(undefined4 *)(lVar43 + 0x1dd0);
      uVar7 = *(undefined4 *)(lVar43 + 0x1dd4);
      uVar3 = *(undefined4 *)(lVar43 + 0x1de8);
      lVar43 = (longlong)(int)uStack_d10;
      uVar23 = (int)uStack_d10 + 1;
      uStack_d10 = CONCAT44(uStack_d10._4_4_,uVar23);
      if (uStack_d10._4_4_ < uVar23) {
        FUN_147287a50(&local_d18,uVar39 & 0xffffffff);
      }
      fVar18 = (float)iVar5 * fVar55;
      fVar19 = (float)iVar24 * fVar55;
      pdVar2 = (double *)(local_d18 + lVar43 * 0x2e0);
      *pdVar2 = dVar62;
      pdVar2[1] = dVar10;
      pdVar2[2] = dVar61;
      pdVar44 = (double *)&local_158;
      pdVar46 = pdVar2 + 3;
      for (lVar33 = 0xd; lVar33 != 0; lVar33 = lVar33 + -1) {
        *pdVar46 = *pdVar44;
        pdVar44 = pdVar44 + 1;
        pdVar46 = pdVar46 + 1;
      }
      pdVar2[0x10] = 0.0;
      pdVar2[0x11] = 0.0;
      pdVar2[0x12] = 0.0;
      pdVar2[0x13] = dVar11;
      puVar30 = (undefined8 *)(local_d18 + 0xa0 + lVar43 * 0x2e0);
      puVar40 = &local_aa8;
      puVar47 = puVar30;
      for (lVar43 = 0x10; lVar43 != 0; lVar43 = lVar43 + -1) {
        *puVar47 = *puVar40;
        puVar40 = puVar40 + 1;
        puVar47 = puVar47 + 1;
      }
      puVar30[0x10] =
           (longlong)((float)iVar41 * fVar55) << 0x20 |
           (longlong)((float)iVar51 * fVar55) & 0xffffffffU;
      puVar30[0x11] =
           (ulonglong)(uint)-(int)((ulonglong)(longlong)ROUND(-0.5 - (fVar18 + fVar18)) >> 1) +
           ((longlong)ROUND(-0.5 - (fVar19 + fVar19)) & 0xfffffffffffffffeU) * -0x80000000;
      *(undefined1 *)(puVar30 + 0x15) = 0;
      *(undefined1 *)(puVar30 + 0x26) = 0;
      *(undefined1 *)(puVar30 + 0x38) = 0;
      puVar30[0x3a] = local_171;
      puVar30[0x3b] = dStack_169;
      puVar30[0x3c] = local_161;
      puVar30[0x3d] = 0;
      puVar30[0x3e] = 0;
      *(undefined4 *)(puVar30 + 0x3f) = (undefined4)local_d48;
      *(undefined4 *)((longlong)puVar30 + 0x1fc) = local_d48._4_4_;
      *(undefined4 *)(puVar30 + 0x40) = (undefined4)uStack_d40;
      *(undefined4 *)((longlong)puVar30 + 0x204) = uStack_d40._4_4_;
      *(undefined4 *)(puVar30 + 0x41) = (undefined4)local_d38;
      *(undefined4 *)((longlong)puVar30 + 0x20c) = local_d38._4_4_;
      *(undefined4 *)(puVar30 + 0x42) = uStack_d30;
      *(undefined4 *)((longlong)puVar30 + 0x214) = uStack_d2c;
      *(undefined4 *)(puVar30 + 0x43) = uStack_d28;
      *(undefined4 *)((longlong)puVar30 + 0x21c) = uStack_d24;
      *(undefined4 *)(puVar30 + 0x44) = (undefined4)uStack_d20;
      *(undefined4 *)((longlong)puVar30 + 0x224) = uStack_d20._4_4_;
      *(undefined4 *)(puVar30 + 0x45) = uVar6;
      *(undefined4 *)((longlong)puVar30 + 0x22c) = uVar7;
      *(undefined4 *)(puVar30 + 0x46) = uVar3;
      lVar43 = lVar52 + 1;
      lVar52 = 1;
      bVar53 = (bool)(bVar42 & lVar43 < *(int *)(local_e00 + 0x3f0));
      bVar42 = 0;
    } while (bVar53);
  }
  FUN_144894d4c(&local_aa8);
  lVar52 = local_db8;
  dVar62 = local_de0;
  dVar61 = local_df0;
  if (*(int *)(local_e00 + 0xa8) < 1) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)((*(byte *)(**(longlong **)(local_e00 + 0xa0) + 0x3099) & 2) >> 1);
  }
  lVar43 = *(longlong *)(local_df8 + 0x3d0);
  if (lVar43 != 0) {
    lVar43 = lVar43 + 0x48;
  }
  FUN_14031f39e(&local_cf8,lVar43,local_db8,local_df8 + 0x318);
  local_c74 = (local_c74 & 0xffffffd5) + uVar23 * 0x20 + 2;
  FUN_14031f528(&local_c68,&local_cf8);
  local_c68 = &PTR_FUN_14a2b3168;
  if (local_cb0 != 0) {
    FUN_1400020a8();
  }
  local_b58 = *(undefined4 *)(local_e00 + 0x1a8);
  local_d48 = &PTR_FUN_14a291310;
  uStack_d40 = 0;
  local_d38 = lVar52;
  uStack_d30 = CONCAT31(uStack_d30._1_3_,1);
  FUN_1447ff7a4(*(undefined8 *)(DAT_14cb0d2b0 + 0xff0),&local_cf8);
  FUN_1400f559c(local_b70,&local_cf8);
  FUN_144750709(local_cf8,local_cf0);
  dVar11 = local_da8;
  dVar10 = local_db0;
  if (local_cf8 != 0) {
    FUN_1400020a8();
  }
  lVar52 = local_df8;
  local_d58 = local_d18;
  local_d50 = (int)uStack_d10;
  local_e38 = 1;
  local_e40 = 1;
  local_e48 = (undefined8 *)CONCAT44(local_e48._4_4_,*(undefined4 *)(local_df8 + 0x2f4));
  local_e18 = 0xffffffff;
  local_e20 = 0;
  local_e28 = 0x3f800000;
  local_e30 = &local_aa8;
  FUN_14102a876(&local_180,&local_c68);
  local_c20 = (double)CONCAT44(local_c20._4_4_ & 0xfdffffff |
                               *(uint *)(local_e00 + 0xe4) & 0x2000000,(undefined4)local_c20);
  local_ae8 = (**(code **)(**(longlong **)(local_e00 + 0x218) + 0x10))
                        (*(longlong **)(local_e00 + 0x218),&local_c68);
  if ((longlong)local_178 != 0) {
    lVar43 = 0;
    do {
      lVar33 = *(longlong *)(local_180 + lVar43);
      *(double *)(lVar33 + 0x2400) = dVar11;
      *(double *)(lVar33 + 0x2408) = dVar61;
      *(double *)(lVar33 + 0x2410) = dVar10;
      *(double *)(lVar33 + 0x2418) = dVar62;
      *(undefined1 *)(lVar33 + 0x1f38) = 0;
      *(undefined1 *)(lVar33 + 0x23ef) = *(undefined1 *)(lVar52 + 0x3bd);
      lVar43 = lVar43 + 8;
    } while ((longlong)local_178 << 3 != lVar43);
  }
  local_d68 = local_180;
  local_d60 = local_178;
  FUN_142fd1b38(&local_c68);
  local_de8 = (double)FUN_140f0eb48(&local_c68,0);
  *(uint *)((longlong)local_de8 + 0xe4) =
       *(uint *)((longlong)local_de8 + 0xe4) & 0xfdffffff | *(uint *)(local_e00 + 0xe4) & 0x2000000;
  lVar52 = local_df8;
  if (0 < (int)uStack_d10) {
    local_dc0 = (double)(local_df8 + 0x3e0);
    lVar43 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar30 = (undefined8 *)(lVar43 + 0x308);
    local_dd8 = (undefined **)(lVar43 + 0x310);
    local_dc8 = 1.74998363152712e-312;
    local_dd0 = (longlong *)(lVar43 + 0x2b8);
    lVar34 = 0;
    lVar33 = local_e00;
    do {
      plVar27 = (longlong *)(local_d18 + lVar34 * 0x2e0 + 0xa0);
      plVar49 = plVar27;
      plVar48 = (longlong *)((longlong)local_dc0 + lVar34 * 0x80);
      for (lVar35 = 0x10; lVar35 != 0; lVar35 = lVar35 + -1) {
        *plVar48 = *plVar49;
        plVar49 = plVar49 + 1;
        plVar48 = plVar48 + 1;
      }
      bVar53 = *(int *)(*(longlong *)(lVar33 + 1000) + 0x1dd0) != 0;
      plVar49 = &local_cf8;
      for (lVar35 = 0x10; lVar35 != 0; lVar35 = lVar35 + -1) {
        *plVar49 = *plVar27;
        plVar27 = plVar27 + 1;
        plVar49 = plVar49 + 1;
      }
      lVar35 = *(longlong *)(lVar52 + 0x3c8);
      iVar41 = *(int *)(lVar43 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar41 != 2) {
          if (iVar41 == 1) {
            DVar25 = FUN_140ad26c0();
            DVar26 = GetCurrentThreadId();
            bVar54 = DVar25 == DVar26;
          }
          else {
            bVar54 = iVar41 == 0x10;
          }
          lVar33 = local_e00;
          lVar52 = local_df8;
          if (!bVar54) goto LAB_142e85a30;
        }
LAB_142e859e3:
        plVar27 = &local_cf8;
        plVar49 = (longlong *)(lVar35 + lVar34 * 0x80 + 0x100);
        for (lVar36 = 0x10; lVar36 != 0; lVar36 = lVar36 + -1) {
          *plVar49 = *plVar27;
          plVar27 = plVar27 + 1;
          plVar49 = plVar49 + 1;
        }
        *(bool *)(lVar35 + 0x38) = bVar53;
      }
      else {
        if (iVar41 == 0x10) goto LAB_142e859e3;
LAB_142e85a30:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar41 = *(int *)(lVar43 + 0xc60), iVar41 == 2))
          goto LAB_142e859e3;
          if (iVar41 == 1) {
            DVar25 = FUN_140ad26c0();
            DVar26 = GetCurrentThreadId();
            lVar33 = local_e00;
            lVar52 = local_df8;
            if (DVar25 == DVar26) goto LAB_142e859e3;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar29 = (uint *)*puVar30;
          if (puVar29 != (uint *)0x0) goto LAB_142e85bb8;
LAB_142e85b4b:
          ppuVar32 = local_dd8;
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142ea45b1);
          }
          puVar31 = (undefined4 *)*ppuVar32;
          *ppuVar32 = (undefined *)0x0;
          if (puVar31 == (undefined4 *)0x0) {
            puVar31 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar31 = 0xffffffff;
          *(undefined4 **)(puVar31 + 0x10) = puVar31 + 0x16;
          puVar31[0x12] = 0;
          *puVar30 = puVar31;
          FUN_140217a48(puVar30);
          puVar29 = (uint *)*puVar30;
LAB_142e85bb8:
          uVar39 = *(longlong *)(puVar29 + 0x10) + 0xf;
          uVar23 = puVar29[0x12];
LAB_142e85bd5:
          puVar40 = (undefined8 *)(uVar39 & 0xfffffffffffffff0);
          if (puVar40 + 0x28 <= puVar29 + 0x4000) {
            *(undefined8 **)(puVar29 + 0x10) = puVar40 + 0x28;
            puVar29[0x12] = uVar23 + 1;
            FUN_1447247dc(puVar40,0);
            *puVar40 = &PTR_FUN_14a2b2588;
            plVar27 = &local_cf8;
            plVar49 = puVar40 + 0x16;
            for (lVar52 = 0x10; lVar52 != 0; lVar52 = lVar52 + -1) {
              *plVar49 = *plVar27;
              plVar27 = plVar27 + 1;
              plVar49 = plVar49 + 1;
            }
            *(int *)(puVar40 + 0x26) = (int)lVar34;
            *(bool *)((longlong)puVar40 + 0x134) = bVar53;
            *(undefined2 *)((longlong)puVar40 + 0x135) = (undefined2)local_158;
            *(undefined1 *)((longlong)puVar40 + 0x137) = local_158._2_1_;
            puVar40[0x27] = lVar35;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar23 = DAT_14c7585c8 >> 10 & 3;
              iVar41 = 0;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar23 < 2) {
                bVar42 = (&DAT_149e38edc)[uVar23];
              }
              else {
                bVar42 = 2;
              }
            }
            else {
              iVar41 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              bVar42 = 5;
            }
            if (*(code **)(puVar40[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar40[0xe] + 0x18))(puVar40 + 0xe,puVar40 + 9);
            }
            puVar40[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar40[9] = puVar40;
            puVar40[10] = puVar40;
            lVar52 = *local_dd0;
            if (lVar52 == 0) {
              if (bVar42 == 6) {
                bVar42 = 1;
              }
              uVar28 = 0;
            }
            else {
              if (bVar42 == 6) {
                bVar42 = (byte)((ulonglong)*(undefined8 *)(lVar52 + 0x38) >> 0x3b);
              }
              uVar28 = *(undefined8 *)(lVar52 + 0x30);
            }
            puVar40[0xf] = uVar28;
            puVar40[0x10] =
                 ((ulonglong)(bVar42 & 7) << 0x3b) + (longlong)local_dc8 | 0xc000000000000000;
            *(int *)((longlong)puVar40 + 0x1c) = iVar41;
            if (puVar40 == (undefined8 *)0x0) {
              local_1e8[0]._0_1_ = 1;
              FUN_1447439e4(0,local_1e8);
              lVar33 = local_e00;
              lVar52 = local_df8;
            }
            else {
              LOCK();
              *(int *)(puVar40 + 1) = *(int *)(puVar40 + 1) + 1;
              UNLOCK();
              local_1e8[0]._0_1_ = 1;
              FUN_1447439e4(puVar40,local_1e8);
              LOCK();
              piVar1 = (int *)(puVar40 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              lVar33 = local_e00;
              lVar52 = local_df8;
              if (*piVar1 == 0) {
                (**(code **)*puVar40)(puVar40,1);
                lVar33 = local_e00;
                lVar52 = local_df8;
              }
            }
            goto LAB_142e85b29;
          }
          *(uint **)(puVar29 + 0x10) = puVar29 + 0x4000;
          LOCK();
          uVar4 = *puVar29;
          *puVar29 = *puVar29 + uVar23 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar23) == 0xffffffff) goto code_r0x000142e85bf7;
          goto LAB_142e85b4b;
        }
        local_158 = (code *)0x0;
        local_150[1] = (longlong *)0x0;
        local_150[1] = (longlong *)FUN_14001cc68(0xa0,0x10);
        *local_150[1] = (longlong)&PTR_LAB_14a2b2540;
        plVar27 = &local_cf8;
        plVar49 = local_150[1] + 2;
        for (lVar52 = 0x10; lVar52 != 0; lVar52 = lVar52 + -1) {
          *plVar49 = *plVar27;
          plVar27 = plVar27 + 1;
          plVar49 = plVar49 + 1;
        }
        *(int *)(local_150[1] + 0x12) = (int)lVar34;
        *(bool *)((longlong)local_150[1] + 0x94) = bVar53;
        local_150[1][0x13] = lVar35;
        if (local_150[1] + 2 != (longlong *)0x0) {
          local_158 = FUN_142ea866e;
        }
        local_e48 = &local_158;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateProxyCommand",&DAT_14ca25220);
        lVar33 = local_e00;
        lVar52 = local_df8;
        if (local_158 != (code *)0x0) {
          plVar27 = local_150[1];
          if (local_150[1] == (longlong *)0x0) {
            plVar27 = local_138;
          }
          (**(code **)(*plVar27 + 0x10))();
          lVar33 = local_e00;
          lVar52 = local_df8;
        }
      }
LAB_142e85b29:
      lVar34 = lVar34 + 1;
    } while (lVar34 < (int)uStack_d10);
  }
  cVar22 = local_e01;
  if (*(longlong *)(lVar52 + 0xa8) == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = *(undefined8 *)(*(longlong *)(lVar52 + 0xa8) + 0x18);
  }
  uVar8 = *(undefined8 *)(lVar52 + 0x3c8);
  uVar9 = *(undefined8 *)(lVar52 + 0x3d0);
  FUN_143222f6a(local_1e8);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_cc8 = uVar28;
  local_cb8 = uVar8;
  local_cb0 = uVar9;
  if (cVar22 == '\0') {
    local_cf8 = (longlong)local_de8;
    local_ce8 = dVar11;
    local_ce0 = dVar61;
    local_cd8 = dVar10;
    local_cd0 = dVar62;
    local_cc0 = local_e00;
    iVar41 = *piVar1;
    if (DAT_14c86a9fc == 0) {
      if (iVar41 != 2) {
        if (iVar41 != 1) goto LAB_142e86029;
        DVar25 = FUN_140ad26c0();
        DVar26 = GetCurrentThreadId();
        if (DVar25 == DVar26) goto LAB_142e86032;
        goto LAB_142e86375;
      }
    }
    else {
LAB_142e86029:
      if (iVar41 != 0x10) {
LAB_142e86375:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (*piVar1 == 2)) goto LAB_142e86032;
          if (*piVar1 == 1) {
            DVar25 = FUN_140ad26c0();
            DVar26 = GetCurrentThreadId();
            if (DVar25 == DVar26) goto LAB_142e86032;
          }
        }
        if (DAT_14ca9a43c != 0) {
          local_158 = (code *)0x0;
          local_150[1] = (longlong *)FUN_14001cc68(0x60,0x10);
          *local_150[1] = (longlong)&PTR_LAB_14a2b2650;
          plVar27 = &local_cf8;
          plVar49 = local_150[1] + 2;
          for (lVar52 = 10; lVar52 != 0; lVar52 = lVar52 + -1) {
            *plVar49 = *plVar27;
            plVar27 = plVar27 + 1;
            plVar49 = plVar49 + 1;
          }
          if (local_150[1] + 2 != (longlong *)0x0) {
            local_158 = (code *)&LAB_142eab5da;
          }
          puVar50 = &DAT_14ca25228;
          goto LAB_142e865bf;
        }
        puVar30 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar29 = (uint *)*puVar30;
        if (puVar29 != (uint *)0x0) goto LAB_142e8644c;
        while( true ) {
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142ea45b1);
          }
          lVar52 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar31 = *(undefined4 **)(lVar52 + 0x310);
          *(undefined8 *)(lVar52 + 0x310) = 0;
          if (puVar31 == (undefined4 *)0x0) {
            puVar31 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar31 = 0xffffffff;
          *(undefined4 **)(puVar31 + 0x10) = puVar31 + 0x16;
          puVar31[0x12] = 0;
          *puVar30 = puVar31;
          FUN_140217a48(puVar30);
          puVar29 = (uint *)*puVar30;
LAB_142e8644c:
          puVar40 = (undefined8 *)(*(longlong *)(puVar29 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar38 = (uint *)(puVar40 + 0x20);
          uVar23 = puVar29[0x12];
          if (puVar38 <= puVar29 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar29 + 0x10) = puVar29 + 0x4000;
            LOCK();
            uVar4 = *puVar29;
            *puVar29 = *puVar29 + uVar23 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar23) != 0xffffffff) break;
            puVar29 = (uint *)*puVar30;
            *puVar29 = 0xffffffff;
            *(uint **)(puVar29 + 0x10) = puVar29 + 0x16;
            puVar29[0x12] = 0;
            *puVar30 = puVar29;
            puVar40 = (undefined8 *)((longlong)puVar29 + 0x67U & 0xfffffffffffffff0);
            puVar38 = (uint *)(puVar40 + 0x20);
            uVar23 = 0;
            if (puVar38 <= puVar29 + 0x4000) {
              uVar23 = 1;
              goto LAB_142e864cc;
            }
          }
        }
        uVar23 = uVar23 + 1;
LAB_142e864cc:
        *(uint **)(puVar29 + 0x10) = puVar38;
        puVar29[0x12] = uVar23;
        FUN_1447247dc(puVar40,0);
        ppuVar32 = &PTR_FUN_14a2b2670;
        goto LAB_142e864e7;
      }
    }
LAB_142e86032:
    FUN_142ea8fa8(&local_cf8,&DAT_14ca85100);
  }
  else {
    local_cf8 = (longlong)local_de8;
    local_ce8 = dVar11;
    local_ce0 = dVar61;
    local_cd8 = dVar10;
    local_cd0 = dVar62;
    local_cc0 = local_e00;
    iVar41 = *piVar1;
    if (DAT_14c86a9fc == 0) {
      if (iVar41 != 2) {
        if (iVar41 != 1) goto LAB_142e85f9d;
        DVar25 = FUN_140ad26c0();
        DVar26 = GetCurrentThreadId();
        if (DVar25 == DVar26) goto LAB_142e85fa6;
        goto LAB_142e86127;
      }
    }
    else {
LAB_142e85f9d:
      if (iVar41 != 0x10) {
LAB_142e86127:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (*piVar1 == 2)) goto LAB_142e85fa6;
          if (*piVar1 == 1) {
            DVar25 = FUN_140ad26c0();
            DVar26 = GetCurrentThreadId();
            if (DVar25 == DVar26) goto LAB_142e85fa6;
          }
        }
        if (DAT_14ca9a43c != 0) {
          local_158 = (code *)0x0;
          local_150[1] = (longlong *)FUN_14001cc68(0x60,0x10);
          *local_150[1] = (longlong)&PTR_LAB_14a2b25a0;
          plVar27 = &local_cf8;
          plVar49 = local_150[1] + 2;
          for (lVar52 = 10; lVar52 != 0; lVar52 = lVar52 + -1) {
            *plVar49 = *plVar27;
            plVar27 = plVar27 + 1;
            plVar49 = plVar49 + 1;
          }
          if (local_150[1] + 2 != (longlong *)0x0) {
            local_158 = (code *)&LAB_142ea8dd8;
          }
          puVar50 = &DAT_14ca25224;
LAB_142e865bf:
          local_e48 = &local_158;
          FUN_14005a792(&DAT_14ca9a440,L"CaptureCommand",puVar50);
          if (local_158 != (code *)0x0) {
            plVar27 = local_150[1];
            if (local_150[1] == (longlong *)0x0) {
              plVar27 = local_138;
            }
            (**(code **)(*plVar27 + 0x10))();
          }
          goto LAB_142e86774;
        }
        puVar30 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar29 = (uint *)*puVar30;
        if (puVar29 != (uint *)0x0) goto LAB_142e861fe;
        while( true ) {
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142ea45b1);
          }
          lVar52 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar31 = *(undefined4 **)(lVar52 + 0x310);
          *(undefined8 *)(lVar52 + 0x310) = 0;
          if (puVar31 == (undefined4 *)0x0) {
            puVar31 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar31 = 0xffffffff;
          *(undefined4 **)(puVar31 + 0x10) = puVar31 + 0x16;
          puVar31[0x12] = 0;
          *puVar30 = puVar31;
          FUN_140217a48(puVar30);
          puVar29 = (uint *)*puVar30;
LAB_142e861fe:
          puVar40 = (undefined8 *)(*(longlong *)(puVar29 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar38 = (uint *)(puVar40 + 0x20);
          uVar23 = puVar29[0x12];
          if (puVar38 <= puVar29 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar29 + 0x10) = puVar29 + 0x4000;
            LOCK();
            uVar4 = *puVar29;
            *puVar29 = *puVar29 + uVar23 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar23) != 0xffffffff) break;
            puVar29 = (uint *)*puVar30;
            *puVar29 = 0xffffffff;
            *(uint **)(puVar29 + 0x10) = puVar29 + 0x16;
            puVar29[0x12] = 0;
            *puVar30 = puVar29;
            puVar40 = (undefined8 *)((longlong)puVar29 + 0x67U & 0xfffffffffffffff0);
            puVar38 = (uint *)(puVar40 + 0x20);
            uVar23 = 0;
            if (puVar38 <= puVar29 + 0x4000) {
              uVar23 = 1;
              goto LAB_142e8627e;
            }
          }
        }
        uVar23 = uVar23 + 1;
LAB_142e8627e:
        *(uint **)(puVar29 + 0x10) = puVar38;
        puVar29[0x12] = uVar23;
        FUN_1447247dc(puVar40,0);
        ppuVar32 = &PTR_FUN_14a2b25c0;
LAB_142e864e7:
        iVar41 = 0;
        *puVar40 = ppuVar32;
        plVar27 = &local_cf8;
        plVar49 = puVar40 + 0x16;
        for (lVar52 = 10; lVar52 != 0; lVar52 = lVar52 + -1) {
          *plVar49 = *plVar27;
          plVar27 = plVar27 + 1;
          plVar49 = plVar49 + 1;
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar23 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar23 < 2) {
            bVar42 = (&DAT_149e38edc)[uVar23];
          }
          else {
            bVar42 = 2;
          }
        }
        else {
          iVar41 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          bVar42 = 5;
        }
        if (*(code **)(puVar40[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar40[0xe] + 0x18))(puVar40 + 0xe,puVar40 + 9);
        }
        puVar40[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar40[9] = puVar40;
        puVar40[10] = puVar40;
        lVar52 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar52 == 0) {
          bVar21 = 1;
          if (bVar42 != 6) {
            bVar21 = bVar42;
          }
          bVar42 = bVar21;
          uVar28 = 0;
        }
        else {
          if (bVar42 == 6) {
            bVar42 = (byte)((ulonglong)*(undefined8 *)(lVar52 + 0x38) >> 0x3b);
          }
          uVar28 = *(undefined8 *)(lVar52 + 0x30);
        }
        puVar40[0xf] = uVar28;
        puVar40[0x10] = (ulonglong)(bVar42 & 7) << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar40 + 0x1c) = iVar41;
        if (puVar40 == (undefined8 *)0x0) {
          local_158 = (code *)CONCAT71(local_158._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar40 + 1) = *(int *)(puVar40 + 1) + 1;
          UNLOCK();
          local_158 = (code *)CONCAT71(local_158._1_7_,1);
          FUN_1447439e4(puVar40);
          LOCK();
          piVar1 = (int *)(puVar40 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar40)(puVar40,1);
          }
        }
        goto LAB_142e86774;
      }
    }
LAB_142e85fa6:
    FUN_142ea8880(&local_cf8,&DAT_14ca85100);
  }
LAB_142e86774:
  FUN_1405ee12c(&DAT_14ca966d0,local_1e8);
  FUN_14004710c(local_1d0);
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  FUN_14005d108(&local_c68);
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  if (local_280 != 0) {
    FUN_1400020a8();
  }
  FUN_147287a11(local_d18,uStack_d10 & 0xffffffff);
  if (local_d18 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_e68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000142e85bf7:
  puVar29 = (uint *)*puVar30;
  *puVar29 = 0xffffffff;
  *(uint **)(puVar29 + 0x10) = puVar29 + 0x16;
  puVar29[0x12] = 0;
  *puVar30 = puVar29;
  uVar39 = (longlong)puVar29 + 0x67;
  uVar23 = 0;
  goto LAB_142e85bd5;
}



// FUNCTION 142e87214 FUN_142e87214 body=1307 status=ok
// SIG undefined FUN_142e87214(void)

void FUN_142e87214(longlong param_1,longlong param_2)

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
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = *(int *)(param_1 + 0x3730);
  *(uint *)(param_1 + 0x3730) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x3734) < iVar6 + 1U) {
    FUN_1472885b4((longlong *)(param_1 + 0x3728),iVar6);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x3728) + (longlong)iVar6 * 8) = param_2;
  uVar11 = *(undefined8 *)(param_2 + 0x3c8);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_142e87282;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_142e87287;
      goto LAB_142e872ed;
    }
  }
  else {
LAB_142e87282:
    if (iVar6 != 0x10) {
LAB_142e872ed:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_142e87287;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_142e87287;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_142e8744d;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_142ea45b1);
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
LAB_142e8744d:
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
              goto LAB_142e874cd;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_142e874cd:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a2b26d8;
        puVar16[0x15] = uVar11;
        puVar16[0x16] = param_1;
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
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a2b2680;
        local_68[0] = FUN_142eab7aa;
        local_40 = uVar11;
        local_38 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FAddPlanarReflectionCommand",&DAT_14ca2522c);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_142e8738c;
    }
  }
LAB_142e87287:
  *(undefined1 *)(param_1 + 0x3738) = 1;
  iVar6 = *(int *)(param_1 + 0x3720);
  *(uint *)(param_1 + 0x3720) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x3724) < iVar6 + 1U) {
    FUN_14728863a((longlong *)(param_1 + 0x3718),iVar6);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x3718) + (longlong)iVar6 * 8) = uVar11;
LAB_142e8738c:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e87730 FUN_142e87730 body=1337 status=ok
// SIG undefined FUN_142e87730(void)

void FUN_142e87730(longlong param_1,longlong param_2)

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
  code **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68[0] = (code *)&local_70;
  local_70 = param_2;
  FUN_1472886c0(param_1 + 0x3728,local_68);
  local_80 = *(undefined8 *)(local_70 + 0x3c8);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  uStack_78 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_142e87b8a;
    if (iVar6 != 1) goto LAB_142e877a8;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_142e87b8a;
LAB_142e877b1:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_142e87c25:
        *(undefined1 *)(uStack_78 + 0x3738) = 1;
        goto LAB_142e87c44;
      }
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_142e87c25;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_142e8791c;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_142ea45b1);
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
LAB_142e8791c:
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
            goto LAB_142e8799c;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_142e8799c:
      *(uint **)(puVar10 + 0x10) = puVar14;
      puVar10[0x12] = uVar12;
      iVar6 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14a2b2750;
      *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_80;
      *(undefined4 *)((longlong)puVar16 + 0xac) = local_80._4_4_;
      *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_78._4_4_;
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
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a2b26f0;
      local_40 = (undefined4)local_80;
      uStack_3c = local_80._4_4_;
      uStack_38 = (undefined4)uStack_78;
      uStack_34 = uStack_78._4_4_;
      local_68[0] = FUN_142eab9e2;
      local_88 = local_68;
      FUN_14005a792(&DAT_14ca9a440,L"FRemovePlanarReflectionCommand",&DAT_14ca25230);
      if (local_68[0] != (code *)0x0) {
        pppuVar13 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar13 = &local_48;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
  }
  else {
LAB_142e877a8:
    if (iVar6 != 0x10) goto LAB_142e877b1;
LAB_142e87b8a:
    *(undefined1 *)(uStack_78 + 0x3738) = 1;
LAB_142e87c44:
    local_68[0] = (code *)&local_80;
    FUN_14728878a(uStack_78 + 0x3718);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e87c6a FUN_142e87c6a body=1750 status=ok
// SIG undefined FUN_142e87c6a(void)

void FUN_142e87c6a(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  int iVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_1a8 [32];
  undefined1 **local_188;
  undefined8 local_178 [2];
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined1 *local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [5];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar18 = *(undefined8 *)(param_2 + 0x3c8);
  dVar7 = *(double *)(param_2 + 0x240);
  dVar8 = *(double *)(param_2 + 0x248);
  dVar9 = *(double *)(param_2 + 0x250);
  local_108 = *(undefined4 *)(param_2 + 0x260);
  uStack_104 = *(undefined4 *)(param_2 + 0x264);
  uStack_100 = *(undefined4 *)(param_2 + 0x268);
  uStack_fc = *(undefined4 *)(param_2 + 0x26c);
  local_f8 = *(undefined8 *)(param_2 + 0x270);
  dVar27 = dVar8 + dVar8;
  dVar23 = dVar9 + dVar9;
  dVar26 = dVar7 * (dVar7 + dVar7);
  dVar10 = *(double *)(param_2 + 0x280);
  local_148 = *(double *)(param_2 + 0x288);
  dStack_140 = (1.0 - (dVar9 * dVar23 + dVar26)) * local_148;
  dStack_120 = *(double *)(param_2 + 0x290);
  local_118 = (1.0 - (dVar26 + dVar8 * dVar27)) * dStack_120;
  dVar5 = *(double *)(param_2 + 0x240) * dVar23;
  dVar26 = *(double *)(param_2 + 600);
  dVar24 = dVar23 * dVar26;
  dVar25 = (dVar7 + dVar7) * *(double *)(param_2 + 600);
  dVar26 = dVar27 * dVar26;
  dVar6 = (dVar27 * dVar7 + dVar24) * dVar10;
  local_138 = (dVar23 * dVar8 + dVar25) * local_148;
  local_128 = (dVar26 + dVar5) * dStack_120;
  local_158 = (dVar5 - dVar26) * dVar10;
  local_148 = (dVar27 * dVar7 - dVar24) * local_148;
  dStack_120 = (dVar23 * dVar8 - dVar25) * dStack_120;
  local_168._8_4_ = SUB84(dVar6,0);
  local_168._0_8_ = (1.0 - (dVar9 * dVar23 + dVar8 * dVar27)) * dVar10;
  local_168._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  uStack_150 = 0;
  uStack_130 = 0;
  uStack_110 = 0;
  uStack_f0 = 0x3ff0000000000000;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar12 = *(int *)(lVar4 + 0xc60);
  local_178[0] = uVar18;
  local_e8 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar12 != 2) {
      if (iVar12 != 1) goto LAB_142e87e38;
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      if (DVar13 == DVar14) goto LAB_142e88299;
      goto LAB_142e87e41;
    }
  }
  else {
LAB_142e87e38:
    if (iVar12 != 0x10) {
LAB_142e87e41:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar12 = *(int *)(lVar4 + 0xc60), iVar12 == 2))
        goto LAB_142e88299;
        if (iVar12 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          if (DVar13 == DVar14) goto LAB_142e88299;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar17 = (uint *)*puVar2;
        if (puVar17 != (uint *)0x0) goto LAB_142e8801a;
        while( true ) {
          uVar19 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar19 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar19 | 1;
            __tlregdtor(&LAB_142ea45b1);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar16 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar2 = puVar16;
          FUN_140217a48(puVar2);
          puVar17 = (uint *)*puVar2;
LAB_142e8801a:
          puVar22 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar20 = (uint *)(puVar22 + 0x2a);
          uVar19 = puVar17[0x12];
          if (puVar20 <= puVar17 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar3 = *puVar17;
            *puVar17 = *puVar17 + uVar19 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar19) != 0xffffffff) break;
            puVar17 = (uint *)*puVar2;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar2 = puVar17;
            puVar22 = (undefined8 *)((longlong)puVar17 + 0x67U & 0xfffffffffffffff0);
            puVar20 = (uint *)(puVar22 + 0x2a);
            uVar19 = 0;
            if (puVar20 <= puVar17 + 0x4000) {
              uVar19 = 1;
              goto LAB_142e8809a;
            }
          }
        }
        uVar19 = uVar19 + 1;
LAB_142e8809a:
        *(uint **)(puVar17 + 0x10) = puVar20;
        puVar17[0x12] = uVar19;
        iVar12 = 0;
        FUN_1447247dc(puVar22,0);
        *puVar22 = &PTR_FUN_14a2b27c0;
        memcpy(puVar22 + 0x16,local_178,0xa0);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar19 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
            iVar12 = 0;
          }
          else {
            uVar21 = 2;
          }
        }
        else {
          iVar12 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar21 = 5;
        }
        if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
        }
        puVar22[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar22[9] = puVar22;
        puVar22[10] = puVar22;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar11 = 1;
          if ((char)uVar21 != '\x06') {
            uVar11 = uVar21;
          }
          uVar21 = uVar11;
          uVar18 = 0;
        }
        else {
          if ((char)uVar21 == '\x06') {
            uVar21 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar18 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar22[0xf] = uVar18;
        puVar22[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar22 + 0x1c) = iVar12;
        if (puVar22 == (undefined8 *)0x0) {
          local_d8[0] = (undefined1 *)CONCAT71(local_d8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
          local_d8[0] = (undefined1 *)CONCAT71(local_d8[0]._1_7_,1);
          FUN_1447439e4(puVar22);
          LOCK();
          piVar1 = (int *)(puVar22 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar22)(puVar22,1);
          }
        }
      }
      else {
        local_d8[0] = (undefined1 *)0x0;
        plVar15 = (longlong *)FUN_14001cc68(0xb0,0x10);
        *plVar15 = (longlong)&PTR_LAB_14a2b2760;
        local_c8 = plVar15;
        memcpy(plVar15 + 2,local_178,0xa0);
        if (plVar15 != (longlong *)&DAT_fffffffffffffff0) {
          local_d8[0] = &LAB_142eabc2a;
        }
        local_188 = local_d8;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdatePlanarReflectionCommand",&DAT_14ca25234);
        if (local_d8[0] != (undefined1 *)0x0) {
          plVar15 = local_c8;
          if (local_c8 == (longlong *)0x0) {
            plVar15 = local_b8;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      goto LAB_142e87f1e;
    }
  }
LAB_142e88299:
  *(undefined1 *)(param_1 + 0x3738) = 1;
  FUN_147288854(uVar18,local_168);
LAB_142e87f1e:
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e8834e FUN_142e8834e body=1009 status=ok
// SIG undefined FUN_142e8834e(void)

void FUN_142e8834e(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
                  ulonglong *param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_a0;
  ulonglong *local_98;
  undefined8 local_90;
  undefined1 local_81;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar9 = 1;
  local_a0 = param_4;
  local_90 = param_1;
  if (*param_5 == 0) {
    iVar8 = (int)*(undefined8 *)(*param_3 + 0x84);
    local_5c = DAT_14ca84e40;
    if (iVar8 < DAT_14ca84e40) {
      local_5c = iVar8;
    }
    if (local_5c < 2) {
      local_5c = 1;
    }
    iVar8 = (int)((ulonglong)*(undefined8 *)(*param_3 + 0x84) >> 0x20);
    local_58 = DAT_14ca84e40;
    if (iVar8 < DAT_14ca84e40) {
      local_58 = iVar8;
    }
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_4e = 0xff000a00;
    local_80 = (undefined8 *)0x9;
    local_54 = 0x10001;
    local_50 = 0x101;
    local_78 = 1;
    local_60 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    if (local_58 < 2) {
      local_58 = 1;
    }
    uVar12 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar5 = uVar12 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar5) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
      uVar12 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar5 = uVar12 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar5;
    FUN_1456bbb8c(uVar12,L"PlanarReflections",&local_80,0);
    iVar8 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar8 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar8 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar8);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar8 * 8) = uVar12;
    *(int *)(uVar12 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    *param_5 = uVar12;
    uVar9 = 2;
  }
  local_98 = param_5;
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar10 + 0x34;
  if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1,0x1b0);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar10 + 0x34;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar6;
  *puVar10 = &PTR_FUN_14a2b27d0;
  puVar6 = puVar10 + 2;
  FUN_147288dd8(puVar6);
  iVar8 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar8 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar8);
  }
  lVar3 = local_a0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar8 * 8) = puVar10;
  puVar10[2] = *param_3;
  puVar10[7] = param_3[5];
  puVar10[8] = param_3[6];
  puVar10[9] = param_3[7];
  puVar10[10] = param_3[8];
  puVar10[0xb] = param_3[9];
  puVar10[0xc] = param_3[10];
  puVar10[0xd] = param_3[0xb];
  uVar2 = *(undefined8 *)(local_a0 + 0x118d0);
  lVar7 = FUN_144a2c9be();
  cVar4 = *(char *)(lVar7 + 0x41);
  if (*(char *)(lVar7 + 0x41) == '\x03') {
    cVar4 = '\x02';
  }
  puVar10[0xe] = uVar2;
  *(char *)(puVar10 + 0xf) = cVar4;
  lVar7 = FUN_1447e4f80();
  cVar4 = *(char *)(lVar7 + 0x41);
  if (cVar4 == '\x03') {
    cVar4 = '\x02';
  }
  puVar10[0x10] = *(undefined8 *)(lVar3 + 0x18);
  *(char *)(puVar10 + 0x11) = cVar4;
  puVar10[0x14] = *local_98;
  puVar10[0x15] = 0;
  *(undefined1 *)(puVar10 + 0x16) = uVar9;
  *(undefined1 *)((longlong)puVar10 + 0xb1) = 0;
  *(undefined2 *)((longlong)puVar10 + 0xb2) = 0xffff;
  FUN_145eba08e();
  FUN_140069376(param_2);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 0x3a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x1d8);
    puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar11 + 0x3a;
  }
  *puVar1 = (ulonglong)puVar10;
  local_78 = (undefined4)DAT_14ca22b10;
  uStack_74 = (undefined4)((ulonglong)DAT_14ca22b10 >> 0x20);
  if (DAT_14ca22b10 != 0) {
    LOCK();
    *(int *)(DAT_14ca22b10 + 8) = *(int *)(DAT_14ca22b10 + 8) + 1;
    UNLOCK();
  }
  uStack_70 = 0x4ca22ac8;
  uStack_6c = 1;
  local_a8 = 0;
  local_80 = puVar6;
  FUN_140068f1a(puVar11,&local_81,&local_80,1);
  *puVar11 = &PTR_FUN_14a2b2810;
  puVar11[0x37] = puVar6;
  puVar11[0x38] = local_a0;
  puVar11[0x39] = local_90;
  iVar8 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar8 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar8 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    FUN_140069100(param_2,puVar11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e8874c FUN_142e8874c body=69 status=ok
// SIG undefined FUN_142e8874c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e8874c(void)

{
  _DAT_14ca21210 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e8878e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca21218,1);
  return;
}



// FUNCTION 142e88791 FUN_142e88791 body=69 status=ok
// SIG undefined FUN_142e88791(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e88791(void)

{
  _DAT_14ca21228 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e887d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca21230,1);
  return;
}



// FUNCTION 142e887d6 FUN_142e887d6 body=69 status=ok
// SIG undefined FUN_142e887d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e887d6(void)

{
  _DAT_14ca21240 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e88818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca21248,1);
  return;
}



// FUNCTION 142e8881b FUN_142e8881b body=69 status=ok
// SIG undefined FUN_142e8881b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e8881b(void)

{
  _DAT_14ca21258 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e8885d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca21260,1);
  return;
}



// FUNCTION 142e88860 FUN_142e88860 body=69 status=ok
// SIG undefined FUN_142e88860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e88860(void)

{
  _DAT_14ca21270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e888a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca21278,1);
  return;
}



// FUNCTION 142e888a5 FUN_142e888a5 body=69 status=ok
// SIG undefined FUN_142e888a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e888a5(void)

{
  _DAT_14ca21288 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e888e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca21290,1);
  return;
}



// FUNCTION 142e888ea FUN_142e888ea body=69 status=ok
// SIG undefined FUN_142e888ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e888ea(void)

{
  _DAT_14ca212a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e8892c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca212a8,1);
  return;
}



// FUNCTION 142e8892f FUN_142e8892f body=69 status=ok
// SIG undefined FUN_142e8892f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e8892f(void)

{
  _DAT_14ca212b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e88971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca212c0,1);
  return;
}



// FUNCTION 142e88974 FUN_142e88974 body=69 status=ok
// SIG undefined FUN_142e88974(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e88974(void)

{
  _DAT_14ca212d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e889b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca212d8,1);
  return;
}



// FUNCTION 142e889b9 FUN_142e889b9 body=69 status=ok
// SIG undefined FUN_142e889b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e889b9(void)

{
  _DAT_14ca212e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e889fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca212f0,1);
  return;
}



// FUNCTION 142e889fe FUN_142e889fe body=69 status=ok
// SIG undefined FUN_142e889fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e889fe(void)

{
  _DAT_14ca21300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e88a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca21308,1);
  return;
}



// FUNCTION 142e88a43 FUN_142e88a43 body=69 status=ok
// SIG undefined FUN_142e88a43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e88a43(void)

{
  _DAT_14ca21318 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e88a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca21320,1);
  return;
}



// FUNCTION 142e88a88 FUN_142e88a88 body=69 status=ok
// SIG undefined FUN_142e88a88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e88a88(void)

{
  _DAT_14ca21330 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e88aca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca21338,1);
  return;
}



// FUNCTION 142e88acd FUN_142e88acd body=69 status=ok
// SIG undefined FUN_142e88acd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e88acd(void)

{
  _DAT_14ca21348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e88b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca21350,1);
  return;
}



// FUNCTION 142e88b12 FUN_142e88b12 body=69 status=ok
// SIG undefined FUN_142e88b12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e88b12(void)

{
  _DAT_14ca21360 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e88b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca21368,1);
  return;
}



// FUNCTION 142e88b57 FUN_142e88b57 body=126 status=ok
// SIG undefined FUN_142e88b57(void)

void FUN_142e88b57(void)

{
  DAT_14ca21388 = &PTR_FUN_14a2b2830;
  FUN_144725486(&DAT_14ca21388);
  DAT_14ca21388 = &PTR_FUN_14a2b2860;
  FUN_14003f39a(&DAT_14ca21398);
  DAT_14ca21388 = &PTR_FUN_14a38cd70;
  DAT_14ca21396 = 2;
  if ((DAT_14ca21390 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 142e88bd6 FUN_142e88bd6 body=576 status=ok
// SIG undefined FUN_142e88bd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e88bd6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca22c80) {
    FUN_144b3d300(&DAT_14ca22c80);
    if (DAT_14ca22c80 == -1) {
      FUN_142e9904e();
      if ((DAT_14ca22e87 & 2) == 0) {
        DAT_14ca22e87 = DAT_14ca22e87 | 2;
        _DAT_14ca22e28 = L"FDiaphragmDOFSetupCS";
        _DAT_14ca22e40 = FUN_146826540;
        _DAT_14ca22e48 = FUN_146825d77;
        _DAT_14ca22e50 = FUN_146825fd6;
        _DAT_14ca22e58 = FUN_1407e02ea;
        _DAT_14ca22e60 = FUN_146826273;
        _DAT_14ca22e38 = FUN_142e9a0e4;
        _DAT_14ca22e78 = 0xffffffff000000e0;
        _DAT_14ca22e80 = 8;
        DAT_14ca22e84 = 0;
        _DAT_14ca22e68 = &LAB_142e9a110;
        _DAT_14ca22e88 = L"BASE";
        DAT_14ca22eb2 = 4;
        _DAT_14ca22e90 = FUN_140b35ae4();
        _DAT_14ca22e98 = DAT_14ca22e30;
        _DAT_14ca22ea0 = &LAB_14682652b;
        DAT_14ca22e30 = &DAT_14ca22e88;
        DAT_14ca22e85 = DAT_14ca22e85 + '\x01';
        _DAT_14ca22ea8 = 0x100000000;
        if (*(char *)(_DAT_14ca22e90 + 100) != '\0') {
          DAT_14ca22e86 = DAT_14ca22e86 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca22e20);
      }
      FUN_140db5666(&DAT_14ca22bd8,0,&DAT_14ca22e20,L"FDiaphragmDOFSetupCS",
                    L"/Engine/Private/DiaphragmDOF/DOFSetup.usf",L"SetupCS",5,6,FUN_142e98fb8,
                    FUN_142e98f58,&LAB_142e98f40,&LAB_142e98f3c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca22c88);
      _DAT_14ca22bd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e99042);
      _Init_thread_footer(&DAT_14ca22c80);
    }
  }
  return &DAT_14ca22bd8;
}



// FUNCTION 142e88e16 FUN_142e88e16 body=576 status=ok
// SIG undefined FUN_142e88e16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e88e16(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca22f60) {
    FUN_144b3d300(&DAT_14ca22f60);
    if (DAT_14ca22f60 == -1) {
      FUN_142e9a226();
      if ((DAT_14ca23167 & 2) == 0) {
        DAT_14ca23167 = DAT_14ca23167 | 2;
        _DAT_14ca23108 = L"FDiaphragmDOFCocFlattenCS";
        _DAT_14ca23120 = FUN_146826540;
        _DAT_14ca23128 = FUN_146825d77;
        _DAT_14ca23130 = FUN_146825fd6;
        _DAT_14ca23138 = FUN_1407e02ea;
        _DAT_14ca23140 = FUN_146826273;
        _DAT_14ca23118 = FUN_142e9ace6;
        _DAT_14ca23158 = 0xffffffff000000e0;
        _DAT_14ca23160 = 8;
        DAT_14ca23164 = 0;
        _DAT_14ca23148 = &LAB_142e9ad12;
        _DAT_14ca23168 = L"BASE";
        DAT_14ca23192 = 4;
        _DAT_14ca23170 = FUN_140b35ae4();
        _DAT_14ca23178 = DAT_14ca23110;
        _DAT_14ca23180 = &LAB_14682652b;
        DAT_14ca23110 = &DAT_14ca23168;
        DAT_14ca23165 = DAT_14ca23165 + '\x01';
        _DAT_14ca23188 = 0x100000000;
        if (*(char *)(_DAT_14ca23170 + 100) != '\0') {
          DAT_14ca23166 = DAT_14ca23166 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca23100);
      }
      FUN_140db5666(&DAT_14ca22eb8,0,&DAT_14ca23100,L"FDiaphragmDOFCocFlattenCS",
                    L"/Engine/Private/DiaphragmDOF/DOFCocTileFlatten.usf",L"CocFlattenMainCS",5,4,
                    FUN_142e9a190,FUN_142e9a130,&LAB_142e9a118,&LAB_142e9a114,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca22f68);
      _DAT_14ca22eb8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e9a21a);
      _Init_thread_footer(&DAT_14ca22f60);
    }
  }
  return &DAT_14ca22eb8;
}



// FUNCTION 142e89056 FUN_142e89056 body=576 status=ok
// SIG undefined FUN_142e89056(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e89056(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23240) {
    FUN_144b3d300(&DAT_14ca23240);
    if (DAT_14ca23240 == -1) {
      FUN_142e9ae28();
      if ((DAT_14ca233bf & 2) == 0) {
        DAT_14ca233bf = DAT_14ca233bf | 2;
        _DAT_14ca23360 = L"FDiaphragmDOFCocDilateCS";
        _DAT_14ca23378 = FUN_146826540;
        _DAT_14ca23380 = FUN_146825d77;
        _DAT_14ca23388 = FUN_146825fd6;
        _DAT_14ca23390 = FUN_1407e02ea;
        _DAT_14ca23398 = FUN_146826273;
        _DAT_14ca23370 = FUN_142e9b7b0;
        _DAT_14ca233b0 = 0xffffffff000000e0;
        _DAT_14ca233b8 = 8;
        DAT_14ca233bc = 0;
        _DAT_14ca233a0 = &LAB_142e9b7dc;
        _DAT_14ca233c0 = L"BASE";
        DAT_14ca233ea = 4;
        _DAT_14ca233c8 = FUN_140b35ae4();
        _DAT_14ca233d0 = DAT_14ca23368;
        _DAT_14ca233d8 = &LAB_14682652b;
        DAT_14ca23368 = &DAT_14ca233c0;
        DAT_14ca233bd = DAT_14ca233bd + '\x01';
        _DAT_14ca233e0 = 0x100000000;
        if (*(char *)(_DAT_14ca233c8 + 100) != '\0') {
          DAT_14ca233be = DAT_14ca233be + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca23358);
      }
      FUN_140db5666(&DAT_14ca23198,0,&DAT_14ca23358,L"FDiaphragmDOFCocDilateCS",
                    L"/Engine/Private/DiaphragmDOF/DOFCocTileDilate.usf",L"CocDilateMainCS",5,9,
                    FUN_142e9ad92,FUN_142e9ad32,&LAB_142e9ad1a,&LAB_142e9ad16,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca23248);
      _DAT_14ca23198 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e9ae1c);
      _Init_thread_footer(&DAT_14ca23240);
    }
  }
  return &DAT_14ca23198;
}



// FUNCTION 142e89296 FUN_142e89296 body=576 status=ok
// SIG undefined FUN_142e89296(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e89296(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23498) {
    FUN_144b3d300(&DAT_14ca23498);
    if (DAT_14ca23498 == -1) {
      FUN_142e9b8fc();
      if ((DAT_14ca23617 & 2) == 0) {
        DAT_14ca23617 = DAT_14ca23617 | 2;
        _DAT_14ca235b8 = L"FDiaphragmDOFDownsampleCS";
        _DAT_14ca235d0 = FUN_146826540;
        _DAT_14ca235d8 = FUN_146825d77;
        _DAT_14ca235e0 = FUN_146825fd6;
        _DAT_14ca235e8 = FUN_1407e02ea;
        _DAT_14ca235f0 = FUN_146826273;
        _DAT_14ca235c8 = FUN_142e9c16c;
        _DAT_14ca23608 = 0xffffffff000000e0;
        _DAT_14ca23610 = 8;
        DAT_14ca23614 = 0;
        _DAT_14ca235f8 = &LAB_142e9c198;
        _DAT_14ca23618 = L"BASE";
        DAT_14ca23642 = 4;
        _DAT_14ca23620 = FUN_140b35ae4();
        _DAT_14ca23628 = DAT_14ca235c0;
        _DAT_14ca23630 = &LAB_14682652b;
        DAT_14ca235c0 = &DAT_14ca23618;
        DAT_14ca23615 = DAT_14ca23615 + '\x01';
        _DAT_14ca23638 = 0x100000000;
        if (*(char *)(_DAT_14ca23620 + 100) != '\0') {
          DAT_14ca23616 = DAT_14ca23616 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca235b0);
      }
      FUN_140db5666(&DAT_14ca233f0,0,&DAT_14ca235b0,L"FDiaphragmDOFDownsampleCS",
                    L"/Engine/Private/DiaphragmDOF/DOFDownsample.usf",L"DownsampleCS",5,2,
                    FUN_142e9b866,FUN_142e9b806,&LAB_142e9b7e4,&LAB_142e9b7e0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca234a0);
      _DAT_14ca233f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e9b8f0);
      _Init_thread_footer(&DAT_14ca23498);
    }
  }
  return &DAT_14ca233f0;
}



// FUNCTION 142e894d6 FUN_142e894d6 body=576 status=ok
// SIG undefined FUN_142e894d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e894d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca236f0) {
    FUN_144b3d300(&DAT_14ca236f0);
    if (DAT_14ca236f0 == -1) {
      FUN_142e9c400();
      if ((DAT_14ca2386f & 2) == 0) {
        DAT_14ca2386f = DAT_14ca2386f | 2;
        _DAT_14ca23810 = L"FDiaphragmDOFReduceCS";
        _DAT_14ca23828 = FUN_146826540;
        _DAT_14ca23830 = FUN_146825d77;
        _DAT_14ca23838 = FUN_146825fd6;
        _DAT_14ca23840 = FUN_1407e02ea;
        _DAT_14ca23848 = FUN_146826273;
        _DAT_14ca23820 = FUN_142e9d1c0;
        _DAT_14ca23860 = 0xffffffff000000e0;
        _DAT_14ca23868 = 8;
        DAT_14ca2386c = 0;
        _DAT_14ca23850 = &LAB_142e9d1ec;
        _DAT_14ca23870 = L"BASE";
        DAT_14ca2389a = 4;
        _DAT_14ca23878 = FUN_140b35ae4();
        _DAT_14ca23880 = DAT_14ca23818;
        _DAT_14ca23888 = &LAB_14682652b;
        DAT_14ca23818 = &DAT_14ca23870;
        DAT_14ca2386d = DAT_14ca2386d + '\x01';
        _DAT_14ca23890 = 0x100000000;
        if (*(char *)(_DAT_14ca23878 + 100) != '\0') {
          DAT_14ca2386e = DAT_14ca2386e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca23808);
      }
      FUN_140db5666(&DAT_14ca23648,0,&DAT_14ca23808,L"FDiaphragmDOFReduceCS",
                    L"/Engine/Private/DiaphragmDOF/DOFReduce.usf",L"ReduceCS",5,0x60,FUN_142e9c36a,
                    FUN_142e9c30a,FUN_142e9c1a0,&LAB_142e9c19c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca236f8);
      _DAT_14ca23648 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e9c3f4);
      _Init_thread_footer(&DAT_14ca236f0);
    }
  }
  return &DAT_14ca23648;
}



// FUNCTION 142e89716 FUN_142e89716 body=576 status=ok
// SIG undefined FUN_142e89716(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e89716(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23948) {
    FUN_144b3d300(&DAT_14ca23948);
    if (DAT_14ca23948 == -1) {
      FUN_142e9d338();
      if ((DAT_14ca23a3f & 2) == 0) {
        DAT_14ca23a3f = DAT_14ca23a3f | 2;
        _DAT_14ca239e0 = L"FDiaphragmDOFScatterGroupPackCS";
        _DAT_14ca239f8 = FUN_146826540;
        _DAT_14ca23a00 = FUN_146825d77;
        _DAT_14ca23a08 = FUN_146825fd6;
        _DAT_14ca23a10 = FUN_1407e02ea;
        _DAT_14ca23a18 = FUN_146826273;
        _DAT_14ca239f0 = FUN_142e9d720;
        _DAT_14ca23a30 = 0xffffffff000000e0;
        _DAT_14ca23a38 = 8;
        DAT_14ca23a3c = 0;
        _DAT_14ca23a20 = &LAB_142e9d74c;
        _DAT_14ca23a40 = L"BASE";
        DAT_14ca23a6a = 4;
        _DAT_14ca23a48 = FUN_140b35ae4();
        _DAT_14ca23a50 = DAT_14ca239e8;
        _DAT_14ca23a58 = &LAB_14682652b;
        DAT_14ca239e8 = &DAT_14ca23a40;
        DAT_14ca23a3d = DAT_14ca23a3d + '\x01';
        _DAT_14ca23a60 = 0x100000000;
        if (*(char *)(_DAT_14ca23a48 + 100) != '\0') {
          DAT_14ca23a3e = DAT_14ca23a3e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca239d8);
      }
      FUN_140db5666(&DAT_14ca238a0,0,&DAT_14ca239d8,L"FDiaphragmDOFScatterGroupPackCS",
                    L"/Engine/Private/DiaphragmDOF/DOFHybridScatterCompilation.usf",
                    L"ScatterGroupPackMainCS",5,4,FUN_142e9d2a2,FUN_142e9d242,&LAB_142e9d1f4,
                    &LAB_142e9d1f0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca23950);
      _DAT_14ca238a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e9d32c);
      _Init_thread_footer(&DAT_14ca23948);
    }
  }
  return &DAT_14ca238a0;
}



// FUNCTION 142e89956 FUN_142e89956 body=576 status=ok
// SIG undefined FUN_142e89956(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e89956(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23b18) {
    FUN_144b3d300(&DAT_14ca23b18);
    if (DAT_14ca23b18 == -1) {
      FUN_142e9d862();
      if ((DAT_14ca23c0f & 2) == 0) {
        DAT_14ca23c0f = DAT_14ca23c0f | 2;
        _DAT_14ca23bb0 = L"FDiaphragmDOFBuildBokehLUTCS";
        _DAT_14ca23bc8 = FUN_146826540;
        _DAT_14ca23bd0 = FUN_146825d77;
        _DAT_14ca23bd8 = FUN_146825fd6;
        _DAT_14ca23be0 = FUN_1407e02ea;
        _DAT_14ca23be8 = FUN_146826273;
        _DAT_14ca23bc0 = FUN_142e9def2;
        _DAT_14ca23c00 = 0xffffffff000000e0;
        _DAT_14ca23c08 = 8;
        DAT_14ca23c0c = 0;
        _DAT_14ca23bf0 = &LAB_142e9df1e;
        _DAT_14ca23c10 = L"BASE";
        DAT_14ca23c3a = 4;
        _DAT_14ca23c18 = FUN_140b35ae4();
        _DAT_14ca23c20 = DAT_14ca23bb8;
        _DAT_14ca23c28 = &LAB_14682652b;
        DAT_14ca23bb8 = &DAT_14ca23c10;
        DAT_14ca23c0d = DAT_14ca23c0d + '\x01';
        _DAT_14ca23c30 = 0x100000000;
        if (*(char *)(_DAT_14ca23c18 + 100) != '\0') {
          DAT_14ca23c0e = DAT_14ca23c0e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca23ba8);
      }
      FUN_140db5666(&DAT_14ca23a70,0,&DAT_14ca23ba8,L"FDiaphragmDOFBuildBokehLUTCS",
                    L"/Engine/Private/DiaphragmDOF/DOFBokehLUT.usf",L"BuildBokehLUTMainCS",5,6,
                    FUN_142e9d7cc,FUN_142e9d76c,&LAB_142e9d754,&LAB_142e9d750,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca23b20);
      _DAT_14ca23a70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e9d856);
      _Init_thread_footer(&DAT_14ca23b18);
    }
  }
  return &DAT_14ca23a70;
}



// FUNCTION 142e89b96 FUN_142e89b96 body=576 status=ok
// SIG undefined FUN_142e89b96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e89b96(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23ce8) {
    FUN_144b3d300(&DAT_14ca23ce8);
    if (DAT_14ca23ce8 == -1) {
      FUN_142e9e286();
      if ((DAT_14ca23eef & 2) == 0) {
        DAT_14ca23eef = DAT_14ca23eef | 2;
        _DAT_14ca23e90 = L"FDiaphragmDOFGatherCS";
        _DAT_14ca23ea8 = FUN_146826540;
        _DAT_14ca23eb0 = FUN_146825d77;
        _DAT_14ca23eb8 = FUN_146825fd6;
        _DAT_14ca23ec0 = FUN_1407e02ea;
        _DAT_14ca23ec8 = FUN_146826273;
        _DAT_14ca23ea0 = FUN_142e9f5d6;
        _DAT_14ca23ee0 = 0xffffffff000000e0;
        _DAT_14ca23ee8 = 8;
        DAT_14ca23eec = 0;
        _DAT_14ca23ed0 = &LAB_142e9f602;
        _DAT_14ca23ef0 = L"BASE";
        DAT_14ca23f1a = 4;
        _DAT_14ca23ef8 = FUN_140b35ae4();
        _DAT_14ca23f00 = DAT_14ca23e98;
        _DAT_14ca23f08 = &LAB_14682652b;
        DAT_14ca23e98 = &DAT_14ca23ef0;
        DAT_14ca23eed = DAT_14ca23eed + '\x01';
        _DAT_14ca23f10 = 0x100000000;
        if (*(char *)(_DAT_14ca23ef8 + 100) != '\0') {
          DAT_14ca23eee = DAT_14ca23eee + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca23e88);
      }
      FUN_140db5666(&DAT_14ca23c40,0,&DAT_14ca23e88,L"FDiaphragmDOFGatherCS",
                    L"/Engine/Private/DiaphragmDOF/DOFGatherPass.usf",L"GatherMainCS",5,0x2d0,
                    FUN_142e9e1f0,FUN_142e9e190,FUN_142e9df26,&LAB_142e9df22,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca23cf0);
      _DAT_14ca23c40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e9e27a);
      _Init_thread_footer(&DAT_14ca23ce8);
    }
  }
  return &DAT_14ca23c40;
}



// FUNCTION 142e89dd6 FUN_142e89dd6 body=576 status=ok
// SIG undefined FUN_142e89dd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e89dd6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23fc8) {
    FUN_144b3d300(&DAT_14ca23fc8);
    if (DAT_14ca23fc8 == -1) {
      FUN_142e9f7be();
      if ((DAT_14ca24147 & 2) == 0) {
        DAT_14ca24147 = DAT_14ca24147 | 2;
        _DAT_14ca240e8 = L"FDiaphragmDOFPostfilterCS";
        _DAT_14ca24100 = FUN_146826540;
        _DAT_14ca24108 = FUN_146825d77;
        _DAT_14ca24110 = FUN_146825fd6;
        _DAT_14ca24118 = FUN_1407e02ea;
        _DAT_14ca24120 = FUN_146826273;
        _DAT_14ca240f8 = FUN_142ea014e;
        _DAT_14ca24138 = 0xffffffff000000e0;
        _DAT_14ca24140 = 8;
        DAT_14ca24144 = 0;
        _DAT_14ca24128 = &LAB_142ea017a;
        _DAT_14ca24148 = L"BASE";
        DAT_14ca24172 = 4;
        _DAT_14ca24150 = FUN_140b35ae4();
        _DAT_14ca24158 = DAT_14ca240f0;
        _DAT_14ca24160 = &LAB_14682652b;
        DAT_14ca240f0 = &DAT_14ca24148;
        DAT_14ca24145 = DAT_14ca24145 + '\x01';
        _DAT_14ca24168 = 0x100000000;
        if (*(char *)(_DAT_14ca24150 + 100) != '\0') {
          DAT_14ca24146 = DAT_14ca24146 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca240e0);
      }
      FUN_140db5666(&DAT_14ca23f20,0,&DAT_14ca240e0,L"FDiaphragmDOFPostfilterCS",
                    L"/Engine/Private/DiaphragmDOF/DOFPostfiltering.usf",L"PostfilterMainCS",5,0x3c,
                    FUN_142e9f728,FUN_142e9f6c8,&LAB_142e9f60a,&LAB_142e9f606,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca23fd0);
      _DAT_14ca23f20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e9f7b2);
      _Init_thread_footer(&DAT_14ca23fc8);
    }
  }
  return &DAT_14ca23f20;
}


