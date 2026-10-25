// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1401d9af0 FUN_1401d9af0 body=97 status=ok
// SIG undefined FUN_1401d9af0(void)

void FUN_1401d9af0(longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
      FUN_1470a9a48();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar2 = FUN_1401d9e2c(param_2);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = param_2 * 0x20 + lVar2;
    lVar2 = FUN_1401da078(*param_3,*param_4,lVar2);
    param_1[1] = lVar2;
  }
  return;
}



// FUNCTION 1401d9b52 FUN_1401d9b52 body=123 status=ok
// SIG undefined FUN_1401d9b52(void)

void FUN_1401d9b52(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_1401d9b52(lVar1 + 8);
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1401d9bce FUN_1401d9bce body=223 status=ok
// SIG undefined FUN_1401d9bce(void)

void FUN_1401d9bce(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (uVar7 <= lVar5 + 1U) {
    FUN_1401dd10c(param_1);
    uVar7 = *(ulonglong *)(param_1 + 0x10);
    lVar5 = *(longlong *)(param_1 + 0x20);
  }
  uVar6 = *(ulonglong *)(param_1 + 0x18) & uVar7 - 1;
  *(ulonglong *)(param_1 + 0x18) = uVar6;
  uVar7 = uVar6 + lVar5 & uVar7 - 1;
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 8) + uVar7 * 8);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = FUN_14001cc68(0x58,0x10);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar7 * 8) = uVar4;
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 8) + uVar7 * 8);
  }
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
  uVar4 = param_2[1];
  *puVar3 = *param_2;
  puVar3[1] = uVar4;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  uVar4 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = param_2[6];
  puVar3[5] = param_2[5];
  puVar3[6] = uVar2;
  puVar3[3] = uVar4;
  puVar3[4] = uVar1;
  param_2[5] = 0;
  param_2[6] = 0xf;
  *(undefined1 *)(param_2 + 3) = 0;
  uVar4 = param_2[9];
  param_2[9] = 0;
  uVar1 = param_2[7];
  uVar2 = param_2[8];
  param_2[7] = 0;
  param_2[8] = 0;
  puVar3[7] = uVar1;
  puVar3[8] = uVar2;
  puVar3[9] = uVar4;
  *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(param_2 + 10);
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}



// FUNCTION 1401d9cad FUN_1401d9cad body=354 status=ok
// SIG undefined FUN_1401d9cad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401d9cad(void)

{
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2730) {
    FUN_144b3d300(&DAT_14c9a2730);
    if (DAT_14c9a2730 == -1) {
      FUN_1456db528();
      local_80[0] = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60[0] = 3;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      FUN_1401db408(&local_58,&DAT_14c9a2a08);
      FUN_1401db408(&local_58,local_80);
      local_a0 = 1;
      local_9c = 0x2d;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      _DAT_14c9a2710 = 6;
      _DAT_14c9a2718 = 0;
      uRam000000014c9a2720 = 0;
      _DAT_14c9a2728 = 0;
      FUN_1401db408(&DAT_14c9a2718,&local_a0);
      FUN_1401db408(&DAT_14c9a2718,local_60);
      FUN_1401d9b52(&local_98);
      FUN_1401d9b52(&local_58);
      FUN_1401d9b52(&local_78);
      atexit((_func_5014 *)&LAB_142b2b100);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d9e2c FUN_1401d9e2c body=75 status=ok
// SIG undefined FUN_1401d9e2c(void)

undefined8 FUN_1401d9e2c(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x80) {
    if (param_1 != 0) {
      uVar1 = FUN_14001cc68(param_1 << 5,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_1 << 5);
  return uVar1;
}



// FUNCTION 1401d9e78 FUN_1401d9e78 body=250 status=ok
// SIG undefined FUN_1401d9e78(void)

void FUN_1401d9e78(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = *(ulonglong *)(param_1 + 0x10);
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (uVar9 <= lVar5 + 1U) {
    FUN_1401dd10c(param_1);
    uVar9 = *(ulonglong *)(param_1 + 0x10);
    lVar5 = *(longlong *)(param_1 + 0x20);
  }
  uVar8 = *(ulonglong *)(param_1 + 0x18) & uVar9 - 1;
  *(ulonglong *)(param_1 + 0x18) = uVar8;
  uVar9 = uVar8 + lVar5 & uVar9 - 1;
  puVar7 = *(undefined4 **)(*(longlong *)(param_1 + 8) + uVar9 * 8);
  if (puVar7 == (undefined4 *)0x0) {
    uVar4 = FUN_14001cc68(0x58,0x10);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar9 * 8) = uVar4;
    puVar7 = *(undefined4 **)(*(longlong *)(param_1 + 8) + uVar9 * 8);
  }
  puVar7[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *puVar7 = *param_2;
  puVar7[1] = uVar1;
  puVar7[2] = uVar2;
  puVar7[3] = uVar3;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined8 *)(puVar7 + 10) = 0;
  *(undefined8 *)(puVar7 + 0xc) = 0;
  if (*(ulonglong *)(param_2 + 0xc) < 0x10) {
    puVar6 = param_2 + 6;
  }
  else {
    puVar6 = *(undefined4 **)(param_2 + 6);
  }
  FUN_1401d9f72(puVar7 + 6,puVar6,*(undefined8 *)(param_2 + 10));
  *(undefined8 *)(puVar7 + 0xe) = 0;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x12) = 0;
  FUN_1401da014(puVar7 + 0xe,*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 0xe) >> 5,
                param_2 + 0xe,param_2 + 0x10);
  puVar7[0x14] = param_2[0x14];
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}



// FUNCTION 1401d9f72 FUN_1401d9f72 body=161 status=ok
// SIG undefined FUN_1401d9f72(void)

void FUN_1401d9f72(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  
  if ((longlong)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    return;
  }
  param_1[3] = 0xf;
  uVar2 = param_3 | 0xf;
  uVar3 = 0x16;
  if (0x16 < uVar2) {
    uVar3 = uVar2;
  }
  if (uVar2 < 0xfff) {
    _Dst = (void *)FUN_14001cc68(uVar3 + 1,0x10);
  }
  else {
    _Dst = (void *)FUN_140c1ca1d(uVar3 + 1);
  }
  *param_1 = _Dst;
  param_1[2] = param_3;
  param_1[3] = uVar3;
  memcpy(_Dst,param_2,param_3 + 1);
  return;
}



// FUNCTION 1401da014 FUN_1401da014 body=99 status=ok
// SIG undefined FUN_1401da014(void)

void FUN_1401da014(longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1470a9d4e();
    }
    lVar1 = FUN_1470a9df8(param_1,param_2);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = param_2 * 0x20 + lVar1;
    lVar1 = FUN_1470a9f11(*param_3,*param_4,lVar1,param_1);
    param_1[1] = lVar1;
  }
  return;
}



// FUNCTION 1401da078 FUN_1401da078 body=111 status=ok
// SIG undefined FUN_1401da078(void)

undefined4 * FUN_1401da078(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    *(undefined2 *)(param_3 + 1) = *(undefined2 *)(param_1 + 1);
    *param_3 = *param_1;
    *(undefined8 *)(param_3 + 2) = 0;
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 6) = 0;
    FUN_1401d9af0(param_3 + 2,*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 5,
                  param_1 + 2,param_1 + 4);
    param_3 = param_3 + 8;
  }
  return param_3;
}



// FUNCTION 1401da0e8 FUN_1401da0e8 body=201 status=ok
// SIG undefined FUN_1401da0e8(void)

undefined8 FUN_1401da0e8(longlong param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar9 = *(longlong *)(param_1 + 0xc0) + -1;
    piVar3 = *(int **)(*(longlong *)(param_1 + 0xa8) +
                      (*(longlong *)(param_1 + 0xb0) - 1U & *(longlong *)(param_1 + 0xb8) + lVar9) *
                      8);
    if (*(longlong *)(piVar3 + 4) == *(longlong *)(param_1 + 0x128)) {
      iVar1 = *piVar3;
      iVar2 = piVar3[1];
      lVar4 = *(longlong *)(piVar3 + 6);
      puVar5 = *(undefined4 **)(piVar3 + 8);
      puVar6 = *(undefined4 **)(piVar3 + 10);
      *(longlong *)(param_1 + 0xc0) = lVar9;
      if (lVar9 == 0) {
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
      if ((*(int *)(param_1 + 0x24) == iVar2) && (*(int *)(param_1 + 0x20) - iVar1 < 0x401)) {
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 8) = 0;
        }
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
        }
        uVar8 = 0;
        uVar7 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
      }
      else {
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 8) = 1;
        }
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 1;
        }
        uVar8 = 1;
        uVar7 = 0;
      }
      if (puVar6 == (undefined4 *)0x0) {
        return uVar7;
      }
      *puVar6 = uVar8;
      return uVar7;
    }
  }
  return 0;
}



// FUNCTION 1401da1b2 FUN_1401da1b2 body=131 status=ok
// SIG undefined FUN_1401da1b2(void)

void FUN_1401da1b2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0xc0) != 0) &&
     (lVar2 = *(longlong *)
               (*(longlong *)(param_1 + 0xa8) +
               (*(longlong *)(param_1 + 0xb0) - 1U &
               (*(longlong *)(param_1 + 0xc0) + *(longlong *)(param_1 + 0xb8)) - 1U) * 8),
     *(longlong *)(lVar2 + 0x10) == *(longlong *)(param_1 + 0x128))) {
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 8) = 1;
    }
    if (*(undefined4 **)(lVar2 + 0x20) != (undefined4 *)0x0) {
      **(undefined4 **)(lVar2 + 0x20) = 1;
    }
    if (*(undefined4 **)(lVar2 + 0x28) != (undefined4 *)0x0) {
      **(undefined4 **)(lVar2 + 0x28) = 1;
    }
    plVar1 = (longlong *)(param_1 + 0xc0);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
  }
  return;
}



// FUNCTION 1401da236 FUN_1401da236 body=595 status=ok
// SIG undefined FUN_1401da236(void)

void FUN_1401da236(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x9a) == '\x01') {
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar9 = *(longlong *)(param_1 + 0x128);
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x128);
      if (*(longlong *)
           (*(longlong *)
             (*(longlong *)(param_1 + 0xa8) +
             (*(longlong *)(param_1 + 0xb0) - 1U &
             (*(longlong *)(param_1 + 0xc0) + *(longlong *)(param_1 + 0xb8)) - 1U) * 8) + 0x10) ==
          lVar9) goto LAB_1401da3bb;
    }
    uStack_40 = *(undefined4 *)(param_1 + 0x28);
    local_48 = *(undefined8 *)(param_1 + 0x20);
    if ((lVar9 == 0) &&
       (lVar2 = FUN_1401da89e(param_1,*(undefined4 *)(param_1 + 0x28),0), lVar2 != 0)) {
      *(undefined4 *)(lVar2 + 8) = 2;
      puVar6 = *(undefined4 **)(lVar2 + 0x10);
      *puVar6 = 2;
    }
    else {
      puVar6 = (undefined4 *)0x0;
      lVar2 = 0;
    }
    local_90 = *(undefined4 *)(param_1 + 0x28);
    local_98 = *(undefined8 *)(param_1 + 0x20);
    local_a0 = 0xe00000000;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0xf;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    FUN_1401d9bce(param_1 + 0x70,&local_a0);
    FUN_1401d7744(&local_68);
    FUN_1401d9a90(&local_88);
    puVar1 = *(undefined4 **)
              (*(longlong *)(param_1 + 0x78) +
              (*(longlong *)(param_1 + 0x80) - 1U &
              (*(longlong *)(param_1 + 0x88) + *(longlong *)(param_1 + 0x90)) - 1U) * 8);
    *puVar1 = 2;
    uVar8 = *(ulonglong *)(param_1 + 0xb0);
    lVar5 = *(longlong *)(param_1 + 0xc0);
    if (uVar8 <= lVar5 + 1U) {
      FUN_1401dd298(param_1 + 0xa0);
      uVar8 = *(ulonglong *)(param_1 + 0xb0);
      lVar5 = *(longlong *)(param_1 + 0xc0);
    }
    uVar7 = *(ulonglong *)(param_1 + 0xb8) & uVar8 - 1;
    *(ulonglong *)(param_1 + 0xb8) = uVar7;
    uVar8 = uVar7 + lVar5 & uVar8 - 1;
    puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0xa8) + uVar8 * 8);
    if (puVar3 == (undefined4 *)0x0) {
      uVar4 = FUN_14001cc68(0x30,0x10);
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + uVar8 * 8) = uVar4;
      puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0xa8) + uVar8 * 8);
    }
    *puVar3 = (undefined4)local_48;
    puVar3[1] = local_48._4_4_;
    puVar3[2] = uStack_40;
    puVar3[3] = uStack_3c;
    *(longlong *)(puVar3 + 4) = lVar9;
    *(longlong *)(puVar3 + 6) = lVar2;
    *(undefined4 **)(puVar3 + 8) = puVar6;
    *(undefined4 **)(puVar3 + 10) = puVar1;
    *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 1;
  }
LAB_1401da3bb:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401da48a FUN_1401da48a body=906 status=ok
// SIG undefined FUN_1401da48a(void)

undefined8 * FUN_1401da48a(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  int *piVar15;
  bool bVar16;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar7 = (undefined1 *)FUN_14001cc68(0xa8,0x10);
  *puVar7 = 0;
  *(undefined8 *)(puVar7 + 4) = 0xffffffffffffffff;
  *(undefined8 *)(puVar7 + 0xc) = 0x1ffffffff;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x20) = 0;
  *(undefined8 *)(puVar7 + 0x28) = 0;
  *(undefined8 *)(puVar7 + 0x30) = 0xf;
  *(undefined4 *)(puVar7 + 0x38) = 0;
  *(undefined8 *)(puVar7 + 0x40) = 0;
  *(undefined8 *)(puVar7 + 0x48) = 0;
  *(undefined8 *)(puVar7 + 0x50) = 0;
  *(undefined8 *)(puVar7 + 0x58) = 0xf;
  *(undefined8 *)(puVar7 + 0x60) = 0;
  *(undefined8 *)(puVar7 + 0x68) = 0;
  *(undefined8 *)(puVar7 + 0x70) = 0;
  *(undefined8 *)(puVar7 + 0x78) = 0;
  *(undefined8 *)(puVar7 + 0x80) = 0;
  *(undefined8 *)(puVar7 + 0x88) = 0;
  *(undefined8 *)(puVar7 + 0x90) = 0;
  *(undefined8 *)(puVar7 + 0x98) = 0;
  *(undefined8 *)(puVar7 + 0xa0) = 0;
  lVar8 = FUN_14001cc68(0x20,0x10);
  *(longlong *)lVar8 = lVar8;
  *(longlong *)(lVar8 + 8) = lVar8;
  *(longlong *)(puVar7 + 0x98) = lVar8;
  puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar9[1] = &DAT_100000001;
  *puVar9 = &PTR_FUN_14a179eb0;
  puVar9[2] = puVar7;
  *puVar6 = puVar7;
  puVar6[1] = puVar9;
  puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar9[1] = &DAT_100000001;
  *puVar9 = &PTR_FUN_14a179ed0;
  puVar9[2] = puVar6;
  *puVar5 = puVar6;
  puVar5[1] = puVar9;
  puVar5[3] = 0;
  lVar8 = FUN_14001cc68(0x28,0x10);
  *(longlong *)lVar8 = lVar8;
  *(longlong *)(lVar8 + 8) = lVar8;
  *(longlong *)(lVar8 + 0x10) = lVar8;
  *(undefined2 *)(lVar8 + 0x18) = 0x101;
  puVar5[2] = lVar8;
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14a17a090;
  plVar10[2] = (longlong)puVar5;
  puVar6 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)puVar6[1];
  puVar11 = puVar6;
  puVar4 = puVar9;
  if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
    do {
      puVar9 = puVar4;
      bVar16 = (undefined8 *)puVar9[4] < puVar5;
      if (!bVar16) {
        puVar11 = puVar9;
      }
      puVar4 = (undefined8 *)puVar9[(ulonglong)bVar16 * 2];
    } while (*(char *)((longlong)puVar9[(ulonglong)bVar16 * 2] + 0x19) == '\0');
  }
  else {
    bVar16 = true;
  }
  plVar1 = plVar10 + 1;
  if ((*(char *)((longlong)puVar11 + 0x19) == '\0') && ((undefined8 *)puVar11[4] <= puVar5))
  goto LAB_1401da788;
  if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1470a938d();
  }
  plVar12 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar12[4] = 0;
  plVar12[5] = 0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
  }
  plVar12[4] = (longlong)puVar5;
  plVar12[5] = (longlong)plVar10;
  *plVar12 = (longlong)puVar6;
  plVar12[2] = (longlong)puVar6;
  *(undefined2 *)(plVar12 + 3) = 0;
  param_1[1] = param_1[1] + 1;
  puVar6 = (undefined8 *)*param_1;
  plVar12[1] = (longlong)puVar9;
  if (puVar9 == puVar6) {
    *puVar6 = plVar12;
    puVar6[1] = plVar12;
    puVar6[2] = plVar12;
  }
  else {
    plVar13 = plVar12 + 1;
    if (bVar16) {
      puVar9[2] = plVar12;
      if (puVar9 == (undefined8 *)puVar6[2]) {
        puVar11 = puVar6 + 2;
        goto LAB_1401da7cf;
      }
    }
    else {
      *puVar9 = plVar12;
      puVar11 = puVar6;
      if (puVar9 == (undefined8 *)*puVar6) {
LAB_1401da7cf:
        *puVar11 = plVar12;
      }
    }
    plVar3 = (longlong *)*plVar13;
    cVar2 = (char)plVar3[3];
    while (cVar2 == '\0') {
      plVar14 = *(longlong **)plVar3[1];
      if (plVar3 == plVar14) {
        plVar14 = (longlong *)((undefined8 *)plVar3[1])[2];
        if ((char)plVar14[3] == '\0') goto LAB_1401da6f0;
        if (plVar12 == (longlong *)plVar3[2]) {
          FUN_1401da858(param_1,plVar3);
          plVar12 = plVar3;
        }
        *(undefined1 *)(plVar12[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar12[1] + 8) + 0x18) = 0;
        FUN_1401da814(param_1,*(undefined8 *)(plVar12[1] + 8));
      }
      else if ((char)plVar14[3] == '\0') {
LAB_1401da6f0:
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar14 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar13 + 8) + 0x18) = 0;
        plVar12 = *(longlong **)(*plVar13 + 8);
      }
      else {
        if (plVar12 == (longlong *)*plVar3) {
          FUN_1401da814(param_1,plVar3);
          plVar12 = plVar3;
        }
        *(undefined1 *)(plVar12[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar12[1] + 8) + 0x18) = 0;
        FUN_1401da858(param_1,*(undefined8 *)(plVar12[1] + 8));
      }
      plVar13 = plVar12 + 1;
      plVar3 = (longlong *)plVar12[1];
      cVar2 = (char)plVar3[3];
    }
    plVar12 = (longlong *)puVar6[1];
  }
  *(undefined1 *)(plVar12 + 3) = 1;
LAB_1401da788:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      piVar15 = (int *)((longlong)plVar10 + 0xc);
      (**(code **)*plVar10)(plVar10);
      LOCK();
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  return puVar5;
}



// FUNCTION 1401da814 FUN_1401da814 body=68 status=ok
// SIG undefined FUN_1401da814(void)

void FUN_1401da814(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x10);
  *param_2 = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong **)(lVar2 + 8) = param_2;
  }
  plVar3 = (longlong *)param_2[1];
  *(longlong **)(lVar1 + 8) = plVar3;
  if (*(longlong **)(*param_1 + 8) == param_2) {
    plVar4 = (longlong *)(*param_1 + 8);
  }
  else {
    plVar4 = plVar3 + 2;
    if ((longlong *)plVar3[2] != param_2) {
      plVar4 = plVar3;
    }
  }
  *plVar4 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// FUNCTION 1401da858 FUN_1401da858 body=70 status=ok
// SIG undefined FUN_1401da858(void)

void FUN_1401da858(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  lVar2 = *plVar1;
  *(longlong *)(param_2 + 0x10) = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong *)(lVar2 + 8) = param_2;
  }
  plVar3 = *(longlong **)(param_2 + 8);
  plVar1[1] = (longlong)plVar3;
  if (*(longlong *)(*param_1 + 8) == param_2) {
    plVar3 = (longlong *)(*param_1 + 8);
  }
  else {
    plVar3 = plVar3 + (ulonglong)(*plVar3 != param_2) * 2;
  }
  *plVar3 = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// FUNCTION 1401da89e FUN_1401da89e body=531 status=ok
// SIG undefined FUN_1401da89e(void)

undefined8 FUN_1401da89e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_c8 [40];
  int *local_a0;
  int *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x128) == 0) {
    piVar5 = (int *)FUN_14001cc68(0x18,0x10);
    *piVar5 = param_2;
    piVar5[1] = param_3;
    piVar5[2] = 0;
    piVar5[4] = 0;
    piVar5[5] = 0;
    uVar6 = (*(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xe8)) - 1;
    piVar2 = *(int **)(*(longlong *)
                        (*(longlong *)(param_1 + 0xd0) +
                        (*(longlong *)(param_1 + 0xd8) - 1U & uVar6 >> 1) * 8) +
                      (ulonglong)((uint)uVar6 & 1) * 8);
    iVar1 = *piVar2;
    local_a0 = piVar5;
    if ((param_2 < iVar1) || ((iVar1 == param_2 && ((param_3 != 1 || (piVar2[1] != 0)))))) {
      uVar9 = 0;
    }
    else {
      uVar8 = 0x13;
      if (param_3 == 0) {
        uVar8 = 4;
      }
      uVar4 = 3;
      if (param_3 != 1) {
        uVar4 = uVar8;
      }
      local_88 = *(undefined4 *)(param_1 + 0x28);
      local_90 = *(undefined8 *)(param_1 + 0x20);
      local_98 = (int *)((ulonglong)uVar4 << 0x20);
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      local_68 = 0xf;
      local_60 = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      FUN_1401d9bce(param_1 + 0x70,&local_98);
      FUN_1401d7744(&local_60);
      FUN_1401d9a90(&local_80);
      *(undefined8 *)(piVar5 + 4) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 0x78) +
            (*(longlong *)(param_1 + 0x80) - 1U &
            (*(longlong *)(param_1 + 0x88) + *(longlong *)(param_1 + 0x90)) - 1U) * 8);
      local_98 = piVar5;
      FUN_1401daab2(param_1 + 200,&local_98);
      plVar3 = *(longlong **)(param_1 + 0xf8);
      if (plVar3 == *(longlong **)(param_1 + 0x100)) {
        FUN_1401dcede(param_1 + 0xf0,plVar3,&local_a0);
        lVar7 = *(longlong *)(param_1 + 0xf8);
      }
      else {
        local_a0 = (int *)0x0;
        *plVar3 = (longlong)piVar5;
        lVar7 = *(longlong *)(param_1 + 0xf8) + 8;
        *(longlong *)(param_1 + 0xf8) = lVar7;
      }
      uVar9 = *(undefined8 *)(lVar7 + -8);
    }
    if (local_a0 != (int *)0x0) {
      FUN_1400020a8(local_a0);
    }
  }
  else {
    uVar9 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401daab2 FUN_1401daab2 body=166 status=ok
// SIG undefined FUN_1401daab2(void)

void FUN_1401daab2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((((int)lVar1 + (int)uVar3 & 1U) == 0) && (*(ulonglong *)(param_1 + 0x10) <= lVar1 + 2U >> 1))
  {
    FUN_1401dd3ec(param_1);
    uVar3 = *(ulonglong *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 2 - 1U & uVar3;
  *(ulonglong *)(param_1 + 0x18) = uVar3;
  uVar3 = uVar3 + lVar1;
  uVar4 = *(longlong *)(param_1 + 0x10) - 1U & uVar3 >> 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
  if (lVar1 == 0) {
    uVar2 = FUN_14001cc68(0x10,0x10);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar4 * 8) = uVar2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
  }
  *(undefined8 *)(lVar1 + (ulonglong)((uint)uVar3 & 1) * 8) = *param_2;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}



// FUNCTION 1401dab58 FUN_1401dab58 body=903 status=ok
// SIG undefined FUN_1401dab58(void)

void FUN_1401dab58(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar11 = *(undefined8 **)(param_1 + 0x20);
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 - (longlong)puVar11 == 8) {
    *(undefined8 *)(param_1 + 0x18) = *puVar11;
    *(longlong *)(param_1 + 0x28) = lVar5 + -8;
    goto LAB_1401dac7c;
  }
  uVar6 = *(undefined8 *)(lVar5 + -8);
  *(undefined8 **)(param_1 + 0x28) = (undefined8 *)(lVar5 + -8);
  puVar7 = *(undefined8 **)(lVar5 + -0x10);
  pcVar14 = *(char **)*puVar7;
  if (*pcVar14 != '\x01') {
LAB_1401dada5:
    if (puVar11 != (undefined8 *)(lVar5 + -8)) {
      *(undefined8 **)(param_1 + 0x28) = puVar11;
    }
    goto LAB_1401dac7c;
  }
  if (*(int *)(pcVar14 + 0x10) != 4) {
    if (*(int *)(pcVar14 + 0x10) != 3) goto LAB_1401dada5;
    bVar9 = true;
    if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_1401dae7b:
      plVar12 = (longlong *)0x0;
    }
    else {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      plVar12 = *(longlong **)(param_1 + 0x10);
      puVar11 = (undefined8 *)*puVar7;
      if (plVar12 == (longlong *)0x0) {
        pcVar14 = (char *)*puVar11;
        goto LAB_1401dae7b;
      }
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      pcVar14 = (char *)*puVar11;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      bVar9 = false;
    }
    if (*(uint *)(pcVar14 + 0x10) < 2) {
      pcVar14[0x10] = '\x03';
      pcVar14[0x11] = '\0';
      pcVar14[0x12] = '\0';
      pcVar14[0x13] = '\0';
      puVar8 = *(undefined8 **)(pcVar14 + 0x60);
      puVar11 = *(undefined8 **)(pcVar14 + 0x68);
      if (puVar8 != *(undefined8 **)(pcVar14 + 0x68)) {
        *(undefined8 **)(pcVar14 + 0x68) = puVar8;
        puVar11 = puVar8;
      }
      pcVar14[0x78] = '\0';
      pcVar14[0x79] = '\0';
      pcVar14[0x7a] = '\0';
      pcVar14[0x7b] = '\0';
      pcVar14[0x7c] = '\0';
      pcVar14[0x7d] = '\0';
      pcVar14[0x7e] = '\0';
      pcVar14[0x7f] = '\0';
LAB_1401dacf2:
      local_58 = uVar6;
      if (puVar11 == *(undefined8 **)(pcVar14 + 0x70)) {
        FUN_1401dc674(pcVar14 + 0x60,puVar11,&local_58);
      }
      else {
        *puVar11 = uVar6;
        *(longlong *)(pcVar14 + 0x68) = *(longlong *)(pcVar14 + 0x68) + 8;
      }
    }
    else if (*(uint *)(pcVar14 + 0x10) == 3) {
      puVar11 = *(undefined8 **)(pcVar14 + 0x68);
      goto LAB_1401dacf2;
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
    }
    if (bVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    plVar2 = plVar12 + 1;
    LOCK();
    plVar3 = plVar12 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
    FUN_1401daf12(uVar6,puVar7);
    LOCK();
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
    goto LAB_1401dac7c;
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (*(char *)(lVar5 + -8) != '\x01') {
    *(undefined1 *)(lVar5 + -8) = 1;
    goto LAB_1401dac7c;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar13 = *(undefined8 *)(lVar5 + -0x10);
LAB_1401dadef:
    bVar9 = true;
    plVar12 = (longlong *)0x0;
  }
  else {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar10 = *(undefined8 *)(param_1 + 8);
    plVar12 = *(longlong **)(param_1 + 0x10);
    uVar13 = *(undefined8 *)(lVar5 + -0x10);
    puVar11 = (undefined8 *)*puVar7;
    if (plVar12 == (longlong *)0x0) {
      pcVar14 = (char *)*puVar11;
      goto LAB_1401dadef;
    }
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    pcVar14 = (char *)*puVar11;
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  uVar4 = *(uint *)(pcVar14 + 0x10);
  if (uVar4 == 3) {
LAB_1401dadb7:
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_58 = uVar10;
    plStack_50 = plVar12;
    FUN_1470a6126(pcVar14);
LAB_1401dac1b:
    FUN_1401db094(pcVar14,uVar13,uVar6);
  }
  else if (uVar4 != 2) {
    if (uVar4 < 2) goto LAB_1401dadb7;
    goto LAB_1401dac1b;
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
  }
  if (bVar9) {
    FUN_1401daf12(uVar13,puVar7);
    FUN_1401daf12(uVar6,puVar7);
  }
  else {
    plVar2 = plVar12 + 1;
    LOCK();
    plVar3 = plVar12 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
    FUN_1401daf12(uVar13,puVar7);
    FUN_1401daf12(uVar6,puVar7);
    LOCK();
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
  }
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -0x10;
LAB_1401dac7c:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401daf12 FUN_1401daf12 body=97 status=ok
// SIG undefined FUN_1401daf12(void)

void FUN_1401daf12(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (**(char **)*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  local_28 = param_2;
  FUN_1470a9134(param_1 + 2,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401daf82 FUN_1401daf82 body=163 status=ok
// SIG undefined FUN_1401daf82(void)

void FUN_1401daf82(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1401da48a(**(undefined8 **)(param_1 + 8));
  lVar1 = *(longlong *)*puVar3;
  *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + 4) = *param_2;
  FUN_1401d803a(param_1,puVar3);
  FUN_1401d7e7a(puVar3);
  puVar2 = *(undefined1 **)*puVar3;
  *puVar2 = 1;
  if (*(int *)(puVar2 + 0x10) != 4) {
    *(undefined4 *)(puVar2 + 0x10) = 4;
    FUN_1401db026();
  }
  FUN_1401d7e7a(puVar3);
  FUN_1401d7e14(*(longlong *)*puVar3 + 0x18,param_3);
  FUN_1401d7e7a(puVar3);
  *(undefined4 *)(*(longlong *)*puVar3 + 0x38) = param_4;
  *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
  return;
}



// FUNCTION 1401db026 FUN_1401db026 body=110 status=ok
// SIG undefined FUN_1401db026(void)

void FUN_1401db026(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x80) != *(longlong *)(param_1 + 0x88)) {
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x80);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x98);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 1401db094 FUN_1401db094 body=532 status=ok
// SIG undefined FUN_1401db094(void)

void FUN_1401db094(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *_Src;
  undefined8 *puVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _Src = *(undefined8 **)(param_1 + 0x88);
  local_60 = param_3;
  if (_Src == *(undefined8 **)(param_1 + 0x90)) {
    lVar6 = (longlong)_Src - *(longlong *)(param_1 + 0x80);
    uVar4 = lVar6 >> 4;
    uVar1 = uVar4 + 1;
    uVar3 = (uVar4 >> 1) + uVar4;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0xfffffffffffffff - (uVar4 >> 1) < uVar4) {
      uVar3 = 0xfffffffffffffff;
    }
    if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14694ac37();
    }
    lVar7 = uVar3 * 0x10;
    if (uVar3 < 0x100) {
      if (uVar3 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_14001cc68(lVar7,0x10);
      }
    }
    else {
      _Dst = (void *)FUN_140c1ca1d(lVar7);
    }
    *(undefined8 **)((longlong)_Dst + lVar6) = param_2;
    *(undefined8 **)((longlong)_Dst + lVar6 + 8) = local_60;
    puVar2 = *(undefined8 **)(param_1 + 0x88);
    memmove(_Dst,*(void **)(param_1 + 0x80),(longlong)_Src - (longlong)*(void **)(param_1 + 0x80));
    if (puVar2 != _Src) {
      memmove((void *)((longlong)_Dst + lVar6 + 0x10),_Src,
              *(longlong *)(param_1 + 0x88) - (longlong)_Src);
    }
    lVar6 = *(longlong *)(param_1 + 0x80);
    if (lVar6 != 0) {
      lVar5 = lVar6;
      if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x90) - lVar6)) &&
         (lVar5 = *(longlong *)(lVar6 + -8), 0x1f < (ulonglong)((lVar6 + -8) - lVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_1400020a8(lVar5);
    }
    *(void **)(param_1 + 0x80) = _Dst;
    *(void **)(param_1 + 0x88) = (void *)(uVar1 * 0x10 + (longlong)_Dst);
    *(void **)(param_1 + 0x90) = (void *)(lVar7 + (longlong)_Dst);
  }
  else {
    *_Src = param_2;
    _Src[1] = param_3;
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 0x10;
  }
  if ((**(char **)*param_2 != '\x01') || (**(char **)*local_60 == '\0')) {
    local_50 = local_60;
    local_58 = param_2;
    FUN_1470a9428(param_1 + 0x98,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401db2aa FUN_1401db2aa body=331 status=ok
// SIG undefined FUN_1401db2aa(void)

void FUN_1401db2aa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0xe8) + -1;
  uVar3 = *(longlong *)(param_1 + 0xe0) + lVar4;
  lVar2 = *(longlong *)
           (*(longlong *)
             (*(longlong *)(param_1 + 0xd0) + (*(longlong *)(param_1 + 0xd8) - 1U & uVar3 >> 1) * 8)
           + (ulonglong)((uint)uVar3 & 1) * 8);
  *(longlong *)(param_1 + 0xe8) = lVar4;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if (*(int *)(lVar2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  iVar1 = *(int *)(lVar2 + 4);
  if (iVar1 == 0) {
    local_60 = *(undefined4 *)(param_1 + 0x28);
    local_68 = *(undefined8 *)(param_1 + 0x20);
    local_70 = 0x600000000;
  }
  else {
    if (iVar1 != 1) goto LAB_1401db387;
    local_60 = *(undefined4 *)(param_1 + 0x28);
    local_68 = *(undefined8 *)(param_1 + 0x20);
    local_70 = 0x500000000;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  local_38 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1401d9bce(param_1 + 0x70,&local_70);
  FUN_1401d7744(&local_38);
  FUN_1401d9a90(&local_58);
LAB_1401db387:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401db408 FUN_1401db408 body=348 status=ok
// SIG undefined FUN_1401db408(void)

void FUN_1401db408(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 == (undefined4 *)param_1[2]) {
    lVar6 = (longlong)puVar3 - *param_1;
    uVar4 = lVar6 >> 5;
    uVar1 = uVar4 + 1;
    uVar7 = (uVar4 >> 1) + uVar4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff - (uVar4 >> 1) < uVar4) {
      uVar7 = 0x7ffffffffffffff;
    }
    lVar5 = FUN_1401d9e2c(uVar7);
    puVar2 = (undefined4 *)(lVar5 + lVar6);
    *puVar2 = *param_2;
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    FUN_1401d9af0(puVar2 + 2,*(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2) >> 5,
                  param_2 + 2,param_2 + 4);
    if ((undefined4 *)param_1[1] == puVar3) {
      FUN_1401da078(*param_1,(undefined4 *)param_1[1],lVar5);
    }
    else {
      FUN_1470a9a59(*param_1,puVar3,lVar5);
      FUN_1470a9a59(puVar3,param_1[1],lVar5 + lVar6 + 0x20);
    }
    FUN_1401db564(param_1,lVar5,uVar1,uVar7);
    return;
  }
  *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(param_2 + 1);
  *puVar3 = *param_2;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  FUN_1401d9af0(puVar3 + 2,*(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2) >> 5,param_2 + 2,
                param_2 + 4);
  param_1[1] = param_1[1] + 0x20;
  return;
}



// FUNCTION 1401db564 FUN_1401db564 body=155 status=ok
// SIG undefined FUN_1401db564(void)

void FUN_1401db564(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_1401d9b52(lVar1 + 8);
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}



// FUNCTION 1401db600 FUN_1401db600 body=3022 status=ok
// SIG undefined FUN_1401db600(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401db600(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined8 *******pppppppuVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined *puVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  byte local_8a;
  byte local_89;
  ulonglong local_88;
  uint local_7c;
  ulonglong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 *******local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar17 = *(int *)((longlong)param_3 + 0x14) == 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)(param_3 + 5) = 0;
  if (*param_3 == 0) {
    FUN_1470a78d5();
    *param_3 = (longlong)&DAT_14c9a28c8;
  }
  cVar4 = FUN_1401dc1d0();
  if (cVar4 != '\0') {
    bVar3 = false;
    local_78 = 0xffffffffffffffff;
    local_7c = 0;
    local_88 = 0;
    bVar18 = false;
    uVar15 = 0;
LAB_1401db68c:
    local_89 = (byte)uVar15;
    uVar13 = param_1[2];
    local_8a = bVar18;
LAB_1401db699:
    puVar16 = (undefined *)*param_3;
    local_68 = (undefined8 *******)0x0;
    lStack_60 = param_2;
    if (((*(longlong *)(param_2 + 0x38) != 0) || (cVar4 = FUN_1448d56de(param_2,0), cVar4 != '\0'))
       && (iVar5 = FUN_1448d545a(puVar16,&local_68), -1 < iVar5)) {
LAB_1401db7c7:
      uVar15 = 0;
      goto LAB_1401db7ca;
    }
    FUN_1401dc3e8();
    local_68 = (undefined8 *******)0x0;
    lStack_60 = param_2;
    if ((((*(longlong *)(param_2 + 0x38) != 0) || (cVar4 = FUN_1448d56de(param_2,0), cVar4 != '\0'))
        && (iVar5 = FUN_1448d545a(&DAT_14c9a2828,&local_68), -1 < iVar5)) ||
       (cVar4 = FUN_1401dc1d0(param_2), cVar4 == '\0')) goto LAB_1401db7c7;
    if (*(int *)(param_2 + 0x10) == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9a2910) && (FUN_144b3d300(&DAT_14c9a2910), DAT_14c9a2910 == -1))
      {
        FUN_1401dcbbb();
        FUN_1401dcd4c();
        _DAT_14c9a28f0 = 3;
        _DAT_14c9a28f8 = 0;
        uRam000000014c9a2900 = 0;
        _DAT_14c9a2908 = 0;
        puVar16 = &DAT_14c9a28f8;
        FUN_1401db408(&DAT_14c9a28f8,&DAT_14c9a26c0);
        FUN_1401db408(&DAT_14c9a28f8,&DAT_14c9a26e8);
        atexit((_func_5014 *)&LAB_142b2b190);
        _Init_thread_footer(&DAT_14c9a2910);
      }
      local_68 = (undefined8 *******)0x0;
      lStack_60 = param_2;
      if ((((*(longlong *)(param_2 + 0x38) != 0) ||
           (cVar4 = FUN_1448d56de(param_2,0), cVar4 != '\0')) &&
          (iVar5 = FUN_1448d545a(&DAT_14c9a28f0,&local_68), -1 < iVar5)) &&
         ((int)param_3[4] - 1U < 2)) goto LAB_1401db7c7;
    }
    if (*(char *)((longlong)param_3 + 0x12) == '\\') {
      FUN_1470a79fb();
      iVar5 = FUN_1456dbef2(&DAT_14c9a2918,param_2);
      if (-1 < iVar5) goto code_r0x0001401dbe59;
    }
    if (*(longlong *)(param_2 + 0x38) == 0) {
      cVar4 = '\x04';
    }
    else {
      cVar4 = *(char *)(*(longlong *)
                         (*(longlong *)(param_2 + 0x20) +
                         (*(longlong *)(param_2 + 0x28) + 0xfffffffffffffffU &
                         *(ulonglong *)(param_2 + 0x30) >> 4) * 8) +
                       (ulonglong)((uint)*(ulonglong *)(param_2 + 0x30) & 0xf));
    }
    if (cVar4 == *(char *)((longlong)param_3 + 0x12)) {
      FUN_1470a5e10(&local_68,param_2);
      pppppppuVar12 = &local_68;
      if (0xf < uStack_50) {
        pppppppuVar12 = local_68;
      }
      FUN_144a6594a(param_1,pppppppuVar12,local_58);
      FUN_1401d9a90(&local_68);
      uVar13 = param_1[2];
      bVar17 = true;
      bVar3 = true;
      local_78 = uVar13;
    }
    else {
      cVar4 = FUN_1401dc22e(param_2);
      uVar10 = param_1[2];
      if (uVar10 < (ulonglong)param_1[3]) {
        param_1[2] = uVar10 + 1;
        puVar8 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar8 = (undefined8 *)*param_1;
        }
        *(char *)((longlong)puVar8 + uVar10) = cVar4;
        *(undefined1 *)((longlong)puVar8 + uVar10 + 1) = 0;
      }
      else {
        FUN_1401dc532(param_1);
      }
      if ((cVar4 != ' ') && (cVar4 != '\t')) {
        uVar13 = param_1[2];
      }
      bVar17 = true;
      bVar3 = true;
    }
    goto LAB_1401db699;
  }
  local_78 = 0xffffffffffffffff;
LAB_1401dba63:
  if ((char)param_3[3] == '\x01') {
    uVar13 = param_1[2];
    uVar10 = uVar13;
    puVar8 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar8 = (undefined8 *)*param_1;
    }
    do {
      uVar14 = local_78;
      if (uVar10 == 0) {
        uVar10 = 0xffffffffffffffff;
        goto LAB_1401dbab2;
      }
      uVar10 = uVar10 - 1;
    } while (*(char *)((longlong)puVar8 + uVar10) == ' ');
    if (local_78 < uVar10) {
      uVar14 = uVar10;
    }
    if (uVar10 == 0xffffffffffffffff) {
      uVar14 = local_78;
    }
LAB_1401dbab2:
    if (local_78 != 0xffffffffffffffff) {
      uVar10 = uVar14;
    }
    if (uVar10 < uVar13) {
      param_1[2] = uVar10 + 1;
      *(undefined1 *)((longlong)puVar8 + uVar10 + 1) = 0;
    }
  }
  puVar8 = param_1;
  if (*(int *)((longlong)param_3 + 0x1c) == -1) {
    uVar13 = param_1[2];
    uVar10 = uVar13;
    if (0xf < (ulonglong)param_1[3]) {
      puVar8 = (undefined8 *)*param_1;
    }
    do {
      if (uVar10 == 0) goto LAB_1401dbf31;
      uVar10 = uVar10 - 1;
    } while (*(char *)((longlong)puVar8 + uVar10) == '\n');
    uVar14 = local_78;
    if (local_78 < uVar10) {
      uVar14 = uVar10;
    }
    if (uVar10 == 0xffffffffffffffff) {
LAB_1401dbf31:
      uVar10 = 0xffffffffffffffff;
      uVar14 = local_78;
    }
    if (local_78 != 0xffffffffffffffff) {
      uVar10 = uVar14;
    }
    if (uVar10 == 0xffffffffffffffff) {
LAB_1401dbf03:
      param_1[2] = 0;
    }
    else {
      if (uVar13 <= uVar10) goto LAB_1401dbb3c;
      param_1[2] = uVar10 + 1;
      puVar8 = (undefined8 *)((longlong)puVar8 + uVar10 + 1);
    }
  }
  else {
    if (*(int *)((longlong)param_3 + 0x1c) != 0) goto LAB_1401dbb3c;
    uVar13 = param_1[2];
    uVar10 = uVar13;
    if (0xf < (ulonglong)param_1[3]) {
      puVar8 = (undefined8 *)*param_1;
    }
    do {
      if (uVar10 == 0) goto LAB_1401dc19d;
      uVar10 = uVar10 - 1;
    } while (*(char *)((longlong)puVar8 + uVar10) == '\n');
    uVar14 = local_78;
    if (local_78 < uVar10) {
      uVar14 = uVar10;
    }
    if (uVar10 == 0xffffffffffffffff) {
LAB_1401dc19d:
      uVar10 = 0xffffffffffffffff;
      uVar14 = local_78;
    }
    if (local_78 != 0xffffffffffffffff) {
      uVar10 = uVar14;
    }
    if (uVar10 == 0xffffffffffffffff) goto LAB_1401dbf03;
    if (uVar13 <= uVar10 + 1) goto LAB_1401dbb3c;
    param_1[2] = uVar10 + 2;
    puVar8 = (undefined8 *)((longlong)puVar8 + uVar10 + 2);
  }
  *(undefined1 *)puVar8 = 0;
LAB_1401dbb3c:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
code_r0x0001401dbe59:
  FUN_1401dc22e(param_2);
  uVar13 = param_1[2];
  uVar15 = (undefined4)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
  bVar17 = true;
  bVar3 = true;
  local_78 = uVar13;
LAB_1401db7ca:
  cVar4 = FUN_1401dc1d0(param_2);
  if (cVar4 == '\0') goto LAB_1401dba63;
  local_6c = uVar15;
  if (((int)param_3[4] == 1) && (*(int *)(param_2 + 0x10) == 0)) {
    FUN_1470a794f();
    iVar5 = FUN_1456dbef2(&DAT_14c9a28f0,param_2);
    if (-1 < iVar5) goto LAB_1401dba63;
  }
  lVar2 = *param_3;
  local_68 = (undefined8 *******)0x0;
  lStack_60 = param_2;
  if ((*(longlong *)(param_2 + 0x38) != 0) || (cVar4 = FUN_1448d56de(param_2,0), cVar4 != '\0')) {
    iVar5 = FUN_1448d545a(lVar2,&local_68);
    if (-1 < iVar5) {
      if ((iVar5 != 0) && ((char)param_3[1] != '\0')) {
        do {
          FUN_1401dc22e(param_2);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      goto LAB_1401dba63;
    }
  }
  if (*(int *)((longlong)param_3 + 0x14) == 2) {
    if ((ulonglong)param_1[2] < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_14709e5c0();
    }
    puVar8 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar8 = (undefined8 *)*param_1;
    }
    param_1[2] = uVar13;
    *(undefined1 *)((longlong)puVar8 + uVar13) = 0;
  }
  FUN_1401dc3e8();
  local_68 = (undefined8 *******)0x0;
  lStack_60 = param_2;
  if (((*(longlong *)(param_2 + 0x38) != 0) || (cVar4 = FUN_1448d56de(param_2,0), cVar4 != '\0')) &&
     (iVar5 = FUN_1448d545a(&DAT_14c9a2828,&local_68), 0 < iVar5)) {
    do {
      FUN_1401dc22e(param_2);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  while (((*(longlong *)(param_2 + 0x38) != 0 &&
          (*(char *)(*(longlong *)
                      (*(longlong *)(param_2 + 0x20) +
                      (*(longlong *)(param_2 + 0x28) + 0xfffffffffffffffU &
                      *(ulonglong *)(param_2 + 0x30) >> 4) * 8) +
                    (ulonglong)((uint)*(ulonglong *)(param_2 + 0x30) & 0xf)) == ' ')) &&
         ((*(int *)(param_2 + 0x10) < *(int *)((longlong)param_3 + 0xc) ||
          (((char)param_3[2] == '\x01' && (!bVar3))))))) {
    local_68 = (undefined8 *******)0x0;
    lStack_60 = param_2;
    iVar5 = FUN_1448d545a(*param_3,&local_68);
    if (-1 < iVar5) break;
    FUN_1401dc22e(param_2);
  }
  if (((char)param_3[2] == '\x01') && (!bVar3)) {
    iVar5 = *(int *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x10) < *(int *)((longlong)param_3 + 0xc)) {
      iVar5 = *(int *)((longlong)param_3 + 0xc);
    }
    *(int *)((longlong)param_3 + 0xc) = iVar5;
  }
  while( true ) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9a2960) && (FUN_144b3d300(&DAT_14c9a2960), DAT_14c9a2960 == -1)) {
      FUN_1456dc210();
      FUN_1456dc18f();
      _DAT_14c9a2940 = 3;
      _DAT_14c9a2948 = 0;
      uRam000000014c9a2950 = 0;
      _DAT_14c9a2958 = 0;
      FUN_1401db408(&DAT_14c9a2948,&DAT_14c9a2968);
      FUN_1401db408(&DAT_14c9a2948,&DAT_14c9a27d8);
      atexit((_func_5014 *)&LAB_142b2b1a8);
      _Init_thread_footer(&DAT_14c9a2960);
    }
    local_68 = (undefined8 *******)0x0;
    lStack_60 = param_2;
    if (((((*(longlong *)(param_2 + 0x38) == 0) && (cVar4 = FUN_1448d56de(param_2,0), cVar4 == '\0')
          ) || (iVar5 = FUN_1448d545a(&DAT_14c9a2940,&local_68), iVar5 < 0)) ||
        (((*(longlong *)(param_2 + 0x38) != 0 &&
          (*(char *)(*(longlong *)
                      (*(longlong *)(param_2 + 0x20) +
                      (*(longlong *)(param_2 + 0x28) + 0xfffffffffffffffU &
                      *(ulonglong *)(param_2 + 0x30) >> 4) * 8) +
                    (ulonglong)((uint)*(ulonglong *)(param_2 + 0x30) & 0xf)) == '\t')) &&
         ((*(int *)(param_2 + 0x10) < *(int *)((longlong)param_3 + 0xc) &&
          (*(int *)((longlong)param_3 + 0x24) == 2)))))) ||
       ((*(char *)((longlong)param_3 + 0x11) != '\x01' ||
        (iVar5 = FUN_1456dbef2(*param_3,param_2), -1 < iVar5)))) break;
    FUN_1401dc22e(param_2);
  }
  FUN_1401dc3e8();
  local_68 = (undefined8 *******)0x0;
  lStack_60 = param_2;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    uVar7 = FUN_1448d56de(param_2,0);
    iVar5 = -1;
    if ((char)uVar7 != '\0') goto LAB_1401db96e;
  }
  else {
LAB_1401db96e:
    uVar7 = FUN_1448d545a(&DAT_14c9a2828,&local_68);
    iVar5 = (int)uVar7;
  }
  local_70 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),-1 < iVar5);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9a2960) && (FUN_144b3d300(&DAT_14c9a2960), DAT_14c9a2960 == -1)) {
    FUN_1456dc210();
    FUN_1456dc18f();
    _DAT_14c9a2940 = 3;
    _DAT_14c9a2948 = 0;
    uRam000000014c9a2950 = 0;
    _DAT_14c9a2958 = 0;
    FUN_1401db408(&DAT_14c9a2948,&DAT_14c9a2968);
    FUN_1401db408(&DAT_14c9a2948,&DAT_14c9a27d8);
    atexit((_func_5014 *)&LAB_142b2b1a8);
    _Init_thread_footer(&DAT_14c9a2960);
  }
  local_68 = (undefined8 *******)0x0;
  lStack_60 = param_2;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    cVar4 = FUN_1448d56de(param_2,0);
    iVar6 = -1;
    if (cVar4 != '\0') goto LAB_1401db9c8;
  }
  else {
LAB_1401db9c8:
    iVar6 = FUN_1448d545a(&DAT_14c9a2940,&local_68);
  }
  bVar18 = -1 < iVar6;
  iVar1 = *(int *)((longlong)param_3 + 0x14);
  uVar9 = local_7c & 0xff;
  local_7c = (uint)local_8a;
  if (iVar1 != 1 || (int)local_88 != 0) {
    local_7c = uVar9;
  }
  if (iVar5 < 0) {
    local_7c = uVar9;
  }
  if (bVar17) {
    if (iVar1 == 2) {
      if (-1 < iVar5) {
        FUN_144a6594a(param_1,&DAT_149dfc0af,1);
        goto LAB_1401dc0a9;
      }
      if (((local_89 | (byte)local_6c) & 1) == 0) {
        uVar13 = param_1[2];
        if (param_1[3] == uVar13) {
          local_98 = 1;
          FUN_140c91e84(param_1,1,local_7c,&DAT_149dfc0cb);
        }
        else {
          param_1[2] = uVar13 + 1;
          puVar8 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar8 = (undefined8 *)*param_1;
          }
          *(undefined2 *)((longlong)puVar8 + uVar13) = 0x20;
        }
      }
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 == 0) {
          FUN_144a6594a(param_1,&DAT_149dfc0af,1);
        }
        goto LAB_1401dc0de;
      }
      if (((-1 < iVar6 | local_8a | local_89 | -1 < iVar5) & 1) == 0) {
        if (*(int *)(param_2 + 0x10) < *(int *)((longlong)param_3 + 0xc)) goto LAB_1401dc0f5;
        puVar11 = &DAT_149dfc0cb;
      }
      else {
        if (-1 < iVar5) {
          local_88 = (ulonglong)((int)local_88 + 1);
          goto LAB_1401dc0a9;
        }
LAB_1401dc0f5:
        puVar11 = &DAT_149dfc0af;
      }
      FUN_144a6594a(param_1,puVar11,1);
      if (0 < (int)local_88) {
        local_58 = 0;
        uStack_50 = 0;
        local_68 = (undefined8 *******)0x0;
        lStack_60 = 0;
        FUN_14709ec14(&local_68,10,(int)local_88 + -1);
        pppppppuVar12 = &local_68;
        if (0xf < uStack_50) {
          pppppppuVar12 = local_68;
        }
        FUN_144a6594a(param_1,pppppppuVar12,local_58);
        FUN_1401d9a90(&local_68);
        if (((local_7c & 1) != 0) || ((bool)(~bVar3 | bVar18))) {
          FUN_144a6594a(param_1,&DAT_149dfc0af,1);
        }
        local_88 = 0;
      }
    }
  }
  else {
LAB_1401dc0de:
    if (-1 < iVar5) goto LAB_1401dc0a9;
  }
  if (*(int *)(param_2 + 0x10) < *(int *)((longlong)param_3 + 0xc)) {
    *(undefined1 *)(param_3 + 5) = 1;
    goto LAB_1401dba63;
  }
LAB_1401dc0a9:
  cVar4 = FUN_1401dc1d0(param_2);
  bVar17 = true;
  uVar15 = local_70;
  if (cVar4 == '\0') goto LAB_1401dba63;
  goto LAB_1401db68c;
}



// FUNCTION 1401dc1d0 FUN_1401dc1d0 body=93 status=ok
// SIG undefined FUN_1401dc1d0(void)

bool FUN_1401dc1d0(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = std::ios_base::good((ios_base *)((longlong)*(int *)(*(longlong *)*param_1 + 4) + *param_1)
                             );
  bVar2 = true;
  if (!bVar1) {
    if (param_1[7] == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(*(longlong *)
                         (param_1[4] + (param_1[5] - 1U & (ulonglong)param_1[6] >> 4) * 8) +
                       (ulonglong)((uint)param_1[6] & 0xf)) != '\x04';
    }
  }
  return bVar2;
}



// FUNCTION 1401dc22e FUN_1401dc22e body=131 status=ok
// SIG undefined FUN_1401dc22e(void)

undefined4 FUN_1401dc22e(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar3 = (undefined4)CONCAT71(uVar4,4);
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x30);
    uVar3 = (undefined4)
            CONCAT71(uVar4,*(undefined1 *)
                            (*(longlong *)
                              (*(longlong *)(param_1 + 0x20) +
                              (*(longlong *)(param_1 + 0x28) - 1U & uVar1 >> 4) * 8) +
                            (ulonglong)((uint)uVar1 & 0xf)));
    lVar2 = *(longlong *)(param_1 + 0x38) + -1;
    *(longlong *)(param_1 + 0x38) = lVar2;
    if (lVar2 != 0) {
      *(ulonglong *)(param_1 + 0x30) = uVar1 + 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      goto LAB_1401dc284;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  FUN_1448d56de(param_1,0);
LAB_1401dc284:
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if ((char)uVar3 == '\n') {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return uVar3;
}



// FUNCTION 1401dc2b2 FUN_1401dc2b2 body=141 status=ok
// SIG undefined FUN_1401dc2b2(void)

ulonglong FUN_1401dc2b2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  
  uVar3 = param_1[10];
  if ((ulonglong)param_1[9] <= uVar3) {
    plVar1 = *(longlong **)(*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1[8]);
    param_1[9] = lVar2;
    param_1[10] = 0;
    if (lVar2 == 0) {
      plVar1 = (longlong *)*param_1;
      unaff_RDI = 0;
      std::basic_ios<char,std::char_traits<char>_>::clear
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4)),
                 *(uint *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x10) | 1,false);
      if (param_1[9] == 0) goto LAB_1401dc2d5;
      uVar3 = param_1[10];
    }
    else {
      uVar3 = 0;
    }
  }
  param_1[10] = uVar3 + 1;
  unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),*(undefined1 *)(param_1[8] + uVar3));
LAB_1401dc2d5:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 1401dc340 FUN_1401dc340 body=168 status=ok
// SIG undefined FUN_1401dc340(void)

void FUN_1401dc340(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((((int)lVar1 + (int)uVar3 & 0xfU) == 0) &&
     (*(ulonglong *)(param_1 + 0x10) <= lVar1 + 0x10U >> 4)) {
    FUN_1401dd69a(param_1);
    uVar3 = *(ulonglong *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 0x10 - 1U & uVar3;
  *(ulonglong *)(param_1 + 0x18) = uVar3;
  uVar3 = uVar3 + lVar1;
  uVar4 = *(longlong *)(param_1 + 0x10) - 1U & uVar3 >> 4;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
  if (lVar1 == 0) {
    uVar2 = FUN_14001cc68(0x10,0x10);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar4 * 8) = uVar2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
  }
  *(undefined1 *)(lVar1 + (ulonglong)((uint)uVar3 & 0xf)) = *param_2;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}



// FUNCTION 1401dc3e8 FUN_1401dc3e8 body=328 status=ok
// SIG undefined FUN_1401dc3e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401dc3e8(void)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined1 local_a0 [24];
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2848) {
    FUN_144b3d300(&DAT_14c9a2848);
    if (DAT_14c9a2848 == -1) {
      local_88 = 1;
      local_84 = 10;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_60 = 0;
      local_58 = 2;
      local_50 = 0xf;
      local_68 = 0xa0d;
      FUN_1401ddb30(local_a8,&local_68,6);
      _DAT_14c9a2828 = 3;
      _DAT_14c9a2830 = 0;
      uRam000000014c9a2838 = 0;
      _DAT_14c9a2840 = 0;
      FUN_1401db408(&DAT_14c9a2830,&local_88);
      FUN_1401db408(&DAT_14c9a2830,local_a8);
      FUN_1401d9b52(local_a0);
      FUN_1401d9a90(&local_68);
      FUN_1401d9b52(&local_80);
      atexit((_func_5014 *)&LAB_142b2b154);
      _Init_thread_footer(&DAT_14c9a2848);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401dc532 FUN_1401dc532 body=321 status=ok
// SIG undefined FUN_1401dc532(void)

undefined8 *
FUN_1401dc532(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined1 param_4)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Src;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  
  uVar3 = 0x7fffffffffffffff;
  _Size = param_1[2];
  if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  param_2 = param_2 + _Size;
  uVar1 = param_1[3];
  uVar2 = 0x8000000000000000;
  if ((-1 < (longlong)param_2) &&
     (uVar2 = 0x8000000000000000, uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff))) {
    uVar3 = (uVar1 >> 1) + uVar1;
    if (uVar3 < (param_2 | 0xf)) {
      uVar3 = param_2 | 0xf;
    }
    uVar2 = uVar3 + 1;
    if (uVar2 < 0x1000) {
      if (uVar2 == 0) {
        uVar3 = 0xffffffffffffffff;
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_14001cc68(uVar2,0x10);
      }
      goto LAB_1401dc5cb;
    }
  }
  _Dst = (void *)FUN_140c1ca1d(uVar2);
LAB_1401dc5cb:
  param_1[2] = param_2;
  param_1[3] = uVar3;
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_4;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_4;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
    pvVar4 = _Src;
    if ((uVar1 - 0xfff < 0xfffffffffffff000) &&
       (pvVar4 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(pvVar4);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 1401dc674 FUN_1401dc674 body=312 status=ok
// SIG undefined FUN_1401dc674(void)

void FUN_1401dc674(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 3) + 1;
  uVar3 = param_1[2] - lVar1 >> 3;
  uVar6 = (uVar3 >> 1) + uVar3;
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 >> 0x3d == 0) {
    if (uVar6 < 0x200) {
      if (uVar6 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_14001cc68(uVar6 * 8,0x10);
      }
    }
    else {
      _Dst = (void *)FUN_140c1ca1d(uVar6 * 8);
    }
    *(undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
    pvVar2 = (void *)param_1[1];
    memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
    if (pvVar2 != param_2) {
      memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 8),param_2,
              param_1[1] - (longlong)param_2);
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
      lVar4 = lVar1;
      if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
         (lVar4 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_1400020a8(lVar4);
    }
    *param_1 = (longlong)_Dst;
    param_1[1] = (longlong)((longlong)_Dst + uVar5 * 8);
    param_1[2] = (longlong)((longlong)_Dst + uVar6 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 1401dc7ae FUN_1401dc7ae body=178 status=ok
// SIG undefined FUN_1401dc7ae(void)

void FUN_1401dc7ae(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1401da48a(**(undefined8 **)(param_1 + 8));
  lVar1 = *(longlong *)*puVar3;
  *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + 4) = *param_2;
  FUN_1401d803a(param_1,puVar3);
  FUN_1401d7e7a(puVar3);
  FUN_1401d7e14(*(longlong *)*puVar3 + 0x18,param_3);
  FUN_1401d7e7a(puVar3);
  puVar2 = *(undefined1 **)*puVar3;
  *puVar2 = 1;
  if (*(int *)(puVar2 + 0x10) != 3) {
    *(undefined4 *)(puVar2 + 0x10) = 3;
    if (*(longlong *)(puVar2 + 0x60) != *(longlong *)(puVar2 + 0x68)) {
      *(longlong *)(puVar2 + 0x68) = *(longlong *)(puVar2 + 0x60);
    }
    *(undefined8 *)(puVar2 + 0x78) = 0;
  }
  FUN_1401d7e7a(puVar3);
  *(undefined4 *)(*(longlong *)*puVar3 + 0x38) = param_4;
  return;
}



// FUNCTION 1401dc860 FUN_1401dc860 body=97 status=ok
// SIG undefined FUN_1401dc860(void)

void FUN_1401dc860(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1401da48a(**(undefined8 **)(param_1 + 8));
  lVar1 = *(longlong *)*puVar3;
  *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + 4) = *param_2;
  FUN_1401d803a(param_1,puVar3);
  FUN_1401d7e7a(puVar3);
  puVar2 = *(undefined1 **)*puVar3;
  *puVar2 = 1;
  *(undefined4 *)(puVar2 + 0x10) = 1;
  FUN_1401dab58(param_1);
  return;
}



// FUNCTION 1401dc8c2 FUN_1401dc8c2 body=727 status=ok
// SIG undefined FUN_1401dc8c2(void)

void FUN_1401dc8c2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *param_1;
  FUN_1401d825c(lVar3);
  iVar2 = *(int *)(*(longlong *)
                    (*(longlong *)(lVar3 + 0x78) +
                    (*(longlong *)(lVar3 + 0x80) - 1U & *(ulonglong *)(lVar3 + 0x88)) * 8) + 4);
  if (iVar2 == 3) {
    lVar3 = *param_1;
    FUN_1401d825c(lVar3);
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      FUN_1401d76f6(lVar3 + 0x70);
    }
    local_98 = CONCAT44(local_98._4_4_,2);
    FUN_1401d77be(param_1[2]);
    lVar3 = *param_1;
    FUN_1401d825c(lVar3);
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      do {
        lVar3 = *param_1;
        FUN_1401d825c(lVar3);
        puVar4 = *(undefined8 **)
                  (*(longlong *)(lVar3 + 0x78) +
                  (*(longlong *)(lVar3 + 0x80) - 1U & *(ulonglong *)(lVar3 + 0x88)) * 8);
        local_88 = *(undefined4 *)(puVar4 + 2);
        local_98 = *puVar4;
        uStack_90 = *(undefined4 *)(puVar4 + 1);
        uStack_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        if ((ulonglong)puVar4[6] < 0x10) {
          puVar5 = puVar4 + 3;
        }
        else {
          puVar5 = (undefined8 *)puVar4[3];
        }
        FUN_1401d9f72(&local_80,puVar5,puVar4[5]);
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        FUN_1401da014(&local_60,(longlong)(puVar4[8] - puVar4[7]) >> 5,puVar4 + 7,puVar4 + 8);
        local_48 = *(undefined4 *)(puVar4 + 10);
        lVar3 = *param_1;
        if ((local_98._4_4_ & 0xfffffffd) != 5) {
          local_a0 = local_88;
          local_a8 = CONCAT44(uStack_8c,uStack_90);
          FUN_1470a7678(lVar3,&local_a8,"end of sequence not found");
          FUN_1401d7744(&local_60);
          FUN_1401d9a90(&local_80);
          goto LAB_1401dcb00;
        }
        FUN_1401d825c(lVar3);
        if (*(longlong *)(lVar3 + 0x90) != 0) {
          FUN_1401d76f6(lVar3 + 0x70);
        }
        if (local_98._4_4_ == 5) {
          FUN_1401d7744(&local_60);
          FUN_1401d9a90(&local_80);
          lVar3 = param_1[2];
          plVar1 = (longlong *)(lVar3 + 0x20);
          *plVar1 = *plVar1 + -1;
          if (*plVar1 == 0) {
            *(undefined8 *)(lVar3 + 0x18) = 0;
          }
          goto LAB_1401dcb00;
        }
        lVar3 = *param_1;
        FUN_1401d825c(lVar3);
        if (*(longlong *)(lVar3 + 0x90) == 0) {
LAB_1401dca8b:
          FUN_1401d7864(param_1,param_2);
        }
        else {
          lVar3 = *param_1;
          FUN_1401d825c(lVar3);
          lVar3 = *(longlong *)
                   (*(longlong *)(lVar3 + 0x78) +
                   (*(longlong *)(lVar3 + 0x80) - 1U & *(ulonglong *)(lVar3 + 0x88)) * 8);
          if ((*(uint *)(lVar3 + 4) | 2) != 7) goto LAB_1401dca8b;
          (**(code **)(*param_2 + 0x18))(param_2,lVar3 + 8);
        }
        FUN_1401d7744(&local_60);
        FUN_1401d9a90(&local_80);
        lVar3 = *param_1;
        FUN_1401d825c(lVar3);
      } while (*(longlong *)(lVar3 + 0x90) != 0);
    }
    lVar3 = *param_1;
    uStack_90 = *(undefined4 *)(lVar3 + 0x28);
    local_98 = *(undefined8 *)(lVar3 + 0x20);
    FUN_1470a7678(lVar3,&local_98,"end of sequence not found");
  }
  else if (iVar2 == 8) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
  }
LAB_1401dcb00:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401dcbbb FUN_1401dcbbb body=400 status=ok
// SIG undefined FUN_1401dcbbb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401dcbbb(void)

{
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 local_b8 [24];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined5 local_5d;
  undefined3 uStack_58;
  undefined5 uStack_55;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a26e0) {
    FUN_144b3d300(&DAT_14c9a26e0);
    if (DAT_14c9a26e0 == -1) {
      FUN_1456db528();
      local_a0[0] = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_80[0] = 3;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_1401db408(&local_78,&DAT_14c9a2a08);
      FUN_1401db408(&local_78,local_a0);
      local_50 = 3;
      local_48 = 0xf;
      local_5d = 0;
      uStack_58 = 0;
      uStack_55 = 0;
      local_60 = 0x2d2d;
      local_5e = 0x2d;
      FUN_1401ddb30(local_c0,&local_60,6);
      _DAT_14c9a26c0 = 6;
      _DAT_14c9a26c8 = 0;
      uRam000000014c9a26d0 = 0;
      _DAT_14c9a26d8 = 0;
      FUN_1401db408(&DAT_14c9a26c8,local_c0);
      FUN_1401db408(&DAT_14c9a26c8,local_80);
      FUN_1401d9b52(local_b8);
      FUN_1401d9a90(&local_60);
      FUN_1401d9b52(&local_78);
      FUN_1401d9b52(&local_98);
      atexit((_func_5014 *)&LAB_142b2b0e8);
      _Init_thread_footer(&DAT_14c9a26e0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401dcd4c FUN_1401dcd4c body=400 status=ok
// SIG undefined FUN_1401dcd4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401dcd4c(void)

{
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 local_b8 [24];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined5 local_5d;
  undefined3 uStack_58;
  undefined5 uStack_55;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2708) {
    FUN_144b3d300(&DAT_14c9a2708);
    if (DAT_14c9a2708 == -1) {
      FUN_1456db528();
      local_a0[0] = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_80[0] = 3;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_1401db408(&local_78,&DAT_14c9a2a08);
      FUN_1401db408(&local_78,local_a0);
      local_50 = 3;
      local_48 = 0xf;
      local_5d = 0;
      uStack_58 = 0;
      uStack_55 = 0;
      local_60 = 0x2e2e;
      local_5e = 0x2e;
      FUN_1401ddb30(local_c0,&local_60,6);
      _DAT_14c9a26e8 = 6;
      _DAT_14c9a26f0 = 0;
      uRam000000014c9a26f8 = 0;
      _DAT_14c9a2700 = 0;
      FUN_1401db408(&DAT_14c9a26f0,local_c0);
      FUN_1401db408(&DAT_14c9a26f0,local_80);
      FUN_1401d9b52(local_b8);
      FUN_1401d9a90(&local_60);
      FUN_1401d9b52(&local_78);
      FUN_1401d9b52(&local_98);
      atexit((_func_5014 *)&LAB_142b2b0f4);
      _Init_thread_footer(&DAT_14c9a2708);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401dcede FUN_1401dcede body=455 status=ok
// SIG undefined FUN_1401dcede(void)

void FUN_1401dcede(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  lVar1 = *param_1;
  uVar10 = (param_1[1] - lVar1 >> 3) + 1;
  uVar7 = param_1[2] - lVar1 >> 3;
  uVar8 = (uVar7 >> 1) + uVar7;
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar8 = 0x1fffffffffffffff;
  }
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (uVar8 < 0x200) {
    if (uVar8 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)FUN_14001cc68(uVar8 * 8,0x10);
    }
  }
  else {
    plVar4 = (longlong *)FUN_140c1ca1d(uVar8 * 8);
  }
  uVar2 = *param_3;
  *param_3 = 0;
  *(undefined8 *)((longlong)plVar4 + ((longlong)param_2 - lVar1)) = uVar2;
  plVar9 = (longlong *)*param_1;
  plVar6 = (longlong *)param_1[1];
  if (plVar6 == param_2) {
    plVar6 = plVar4;
    if (plVar9 == param_2) goto LAB_1401dcfba;
    do {
      lVar1 = *plVar9;
      *plVar9 = 0;
      *plVar6 = lVar1;
      plVar9 = plVar9 + 1;
      plVar6 = plVar6 + 1;
    } while (plVar9 != param_2);
  }
  else {
    plVar5 = plVar4;
    if (plVar9 != param_2) {
      do {
        lVar3 = *plVar9;
        *plVar9 = 0;
        *plVar5 = lVar3;
        plVar9 = plVar9 + 1;
        plVar5 = plVar5 + 1;
      } while (plVar9 != param_2);
      plVar6 = (longlong *)param_1[1];
    }
    if (plVar6 != param_2) {
      plVar9 = (longlong *)((longlong)plVar4 + ((longlong)param_2 - lVar1));
      do {
        plVar9 = plVar9 + 1;
        lVar1 = *param_2;
        *param_2 = 0;
        *plVar9 = lVar1;
        param_2 = param_2 + 1;
      } while (param_2 != plVar6);
    }
  }
  plVar9 = (longlong *)*param_1;
LAB_1401dcfba:
  if (plVar9 != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[1];
    if (plVar9 != plVar6) {
      do {
        if (*plVar9 != 0) {
          FUN_1400020a8();
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar6);
      plVar9 = (longlong *)*param_1;
    }
    plVar6 = plVar9;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)plVar9)) &&
       (plVar6 = (longlong *)plVar9[-1],
       0x1f < (ulonglong)((longlong)plVar9 + (-8 - (longlong)plVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(plVar6);
  }
  *param_1 = (longlong)plVar4;
  param_1[1] = (longlong)(plVar4 + uVar10);
  param_1[2] = (longlong)(plVar4 + uVar8);
  return;
}



// FUNCTION 1401dd0a6 FUN_1401dd0a6 body=102 status=ok
// SIG undefined FUN_1401dd0a6(void)

void FUN_1401dd0a6(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x128) == 0) {
    while ((*(longlong *)(param_1 + 0xe8) != 0 &&
           (uVar1 = (*(longlong *)(param_1 + 0xe8) + *(longlong *)(param_1 + 0xe0)) - 1,
           *(int *)(*(longlong *)
                     (*(longlong *)
                       (*(longlong *)(param_1 + 0xd0) +
                       (*(longlong *)(param_1 + 0xd8) - 1U & uVar1 >> 1) * 8) +
                     (ulonglong)((uint)uVar1 & 1) * 8) + 4) != 2))) {
      FUN_1401db2aa(param_1);
    }
  }
  return;
}



// FUNCTION 1401dd10c FUN_1401dd10c body=395 status=ok
// SIG undefined FUN_1401dd10c(void)

void FUN_1401dd10c(longlong param_1)

{
  ulonglong uVar1;
  void *_Dst;
  void *pvVar2;
  longlong lVar3;
  size_t _Size;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar6 = uVar1 + (uVar1 == 0);
  do {
    uVar5 = uVar6;
    if (0x2e8ba2e8ba2e8ba - uVar5 < uVar5) {
      FUN_1470abd8a();
      goto LAB_1401dd23c;
    }
    uVar6 = uVar5 * 2;
  } while (uVar6 < 8 || uVar6 == uVar1);
  if (uVar6 < 0x2000000000000000) {
    uVar1 = *(ulonglong *)(param_1 + 0x18);
    if (uVar6 < 0x200) {
      _Dst = (void *)FUN_14001cc68(uVar5 << 4,0x10);
    }
    else {
      _Dst = (void *)FUN_140c1ca1d(uVar5 << 4);
    }
    pvVar2 = (void *)((longlong)_Dst + uVar1 * 8);
    uVar6 = uVar6 - *(longlong *)(param_1 + 0x10);
    _Size = uVar1 * 8;
    lVar4 = *(longlong *)(param_1 + 0x10) - uVar1;
    memmove(pvVar2,(void *)(*(longlong *)(param_1 + 8) + _Size),lVar4 * 8);
    pvVar2 = (void *)((longlong)pvVar2 + lVar4 * 8);
    lVar4 = uVar1 - uVar6;
    if (uVar1 < uVar6 || lVar4 == 0) {
      memmove(pvVar2,*(void **)(param_1 + 8),_Size);
      memset((void *)((longlong)pvVar2 + _Size),0,(uVar6 - uVar1) * 8);
      pvVar2 = _Dst;
    }
    else {
      _Size = uVar6 * 8;
      memmove(pvVar2,*(void **)(param_1 + 8),_Size);
      memmove(_Dst,(void *)(*(longlong *)(param_1 + 8) + _Size),lVar4 * 8);
      pvVar2 = (void *)((longlong)_Dst + lVar4 * 8);
    }
    memset(pvVar2,0,_Size);
    lVar4 = *(longlong *)(param_1 + 8);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      if (((*(ulonglong *)(param_1 + 0x10) & 0x1ffffffffffffe00) != 0) &&
         (lVar3 = *(longlong *)(lVar4 + -8), 0x1f < (ulonglong)((lVar4 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_1400020a8(lVar3);
    }
    *(void **)(param_1 + 8) = _Dst;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar6;
    return;
  }
LAB_1401dd23c:
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 1401dd298 FUN_1401dd298 body=338 status=ok
// SIG undefined FUN_1401dd298(void)

void FUN_1401dd298(longlong param_1)

{
  void *_Dst;
  undefined1 *puVar1;
  void *_Dst_00;
  longlong lVar2;
  undefined1 *_Src;
  void *unaff_RBX;
  undefined1 *puVar3;
  longlong unaff_R13;
  longlong lVar4;
  size_t _Size;
  void *unaff_R15;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  puVar3 = puVar1 + (puVar1 == (undefined1 *)0x0);
  do {
    _Src = (undefined1 *)(0x555555555555555 - (longlong)puVar3);
    if (_Src < puVar3) {
      FUN_1470abfea();
      goto LAB_1401dd389;
    }
    puVar3 = (undefined1 *)((longlong)puVar3 * 2);
  } while (puVar3 < &DAT_00000008 || puVar3 == puVar1);
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  _Dst_00 = (void *)FUN_1456db772(puVar3);
  _Dst = (void *)((longlong)_Dst_00 + (longlong)puVar1 * 8);
  puVar3 = puVar3 + -*(longlong *)(param_1 + 0x10);
  _Size = (longlong)puVar1 * 8;
  lVar4 = *(longlong *)(param_1 + 0x10) - (longlong)puVar1;
  memmove(_Dst,(void *)(*(longlong *)(param_1 + 8) + _Size),lVar4 * 8);
  unaff_R15 = (void *)((longlong)_Dst + lVar4 * 8);
  _Src = *(undefined1 **)(param_1 + 8);
  unaff_R13 = (longlong)puVar1 - (longlong)puVar3;
  unaff_RBX = _Dst_00;
  if (puVar1 < puVar3 || unaff_R13 == 0) {
    memmove(unaff_R15,_Src,_Size);
    memset((void *)((longlong)unaff_R15 + _Size),0,((longlong)puVar3 - (longlong)puVar1) * 8);
  }
  else {
LAB_1401dd389:
    _Size = (longlong)puVar3 * 8;
    memmove(unaff_R15,_Src,_Size);
    memmove(unaff_RBX,(void *)(*(longlong *)(param_1 + 8) + _Size),unaff_R13 * 8);
    _Dst_00 = (void *)((longlong)unaff_RBX + unaff_R13 * 8);
  }
  memset(_Dst_00,0,_Size);
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    lVar2 = lVar4;
    if (((*(ulonglong *)(param_1 + 0x10) & 0x1ffffffffffffe00) != 0) &&
       (lVar2 = *(longlong *)(lVar4 + -8), 0x1f < (ulonglong)((lVar4 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *(void **)(param_1 + 8) = unaff_RBX;
  *(longlong *)(param_1 + 0x10) = (longlong)(puVar3 + *(longlong *)(param_1 + 0x10));
  return;
}



// FUNCTION 1401dd3ec FUN_1401dd3ec body=341 status=ok
// SIG undefined FUN_1401dd3ec(void)

void FUN_1401dd3ec(longlong param_1)

{
  void *_Dst;
  void *_Dst_00;
  longlong lVar1;
  undefined1 *_Src;
  void *unaff_RBX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong unaff_R13;
  longlong lVar4;
  size_t _Size;
  void *unaff_R15;
  
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  puVar2 = puVar3 + (puVar3 == (undefined1 *)0x0);
  do {
    _Src = (undefined1 *)(0xfffffffffffffff - (longlong)puVar2);
    if (_Src < puVar2) {
      FUN_1470abd78();
      goto LAB_1401dd4e0;
    }
    puVar2 = (undefined1 *)((longlong)puVar2 * 2);
  } while (puVar2 < &DAT_00000008 || puVar2 == puVar3);
  puVar3 = (undefined1 *)(*(ulonglong *)(param_1 + 0x18) >> 1);
  _Dst_00 = (void *)FUN_1456db7b4(puVar2);
  _Dst = (void *)((longlong)_Dst_00 + (longlong)puVar3 * 8);
  puVar2 = puVar2 + -*(longlong *)(param_1 + 0x10);
  _Size = (longlong)puVar3 * 8;
  lVar4 = *(longlong *)(param_1 + 0x10) - (longlong)puVar3;
  memmove(_Dst,(void *)(*(longlong *)(param_1 + 8) + _Size),lVar4 * 8);
  unaff_R15 = (void *)((longlong)_Dst + lVar4 * 8);
  _Src = *(undefined1 **)(param_1 + 8);
  unaff_R13 = (longlong)puVar3 - (longlong)puVar2;
  unaff_RBX = _Dst_00;
  if (puVar3 < puVar2 || unaff_R13 == 0) {
    memmove(unaff_R15,_Src,_Size);
    memset((void *)((longlong)unaff_R15 + _Size),0,((longlong)puVar2 - (longlong)puVar3) * 8);
  }
  else {
LAB_1401dd4e0:
    _Size = (longlong)puVar2 * 8;
    memmove(unaff_R15,_Src,_Size);
    memmove(unaff_RBX,(void *)(*(longlong *)(param_1 + 8) + _Size),unaff_R13 * 8);
    _Dst_00 = (void *)((longlong)unaff_RBX + unaff_R13 * 8);
  }
  memset(_Dst_00,0,_Size);
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    lVar1 = lVar4;
    if (((*(ulonglong *)(param_1 + 0x10) & 0x1ffffffffffffe00) != 0) &&
       (lVar1 = *(longlong *)(lVar4 + -8), 0x1f < (ulonglong)((lVar4 + -8) - lVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar1);
  }
  *(void **)(param_1 + 8) = unaff_RBX;
  *(longlong *)(param_1 + 0x10) = (longlong)(puVar2 + *(longlong *)(param_1 + 0x10));
  return;
}



// FUNCTION 1401dd542 FUN_1401dd542 body=342 status=ok
// SIG undefined FUN_1401dd542(void)

void FUN_1401dd542(longlong param_1)

{
  void *_Dst;
  void *_Dst_00;
  longlong lVar1;
  undefined1 *_Src;
  void *unaff_RBX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong unaff_R13;
  longlong lVar4;
  size_t _Size;
  void *unaff_R15;
  
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  puVar2 = puVar3 + (puVar3 == (undefined1 *)0x0);
  do {
    _Src = (undefined1 *)(0xfffffffffffffff - (longlong)puVar2);
    if (_Src < puVar2) {
      FUN_1470a9f00();
      goto LAB_1401dd637;
    }
    puVar2 = (undefined1 *)((longlong)puVar2 * 2);
  } while (puVar2 < &DAT_00000008 || puVar2 == puVar3);
  puVar3 = (undefined1 *)(*(ulonglong *)(param_1 + 0x18) >> 2);
  _Dst_00 = (void *)FUN_1456db7f6(puVar2);
  _Dst = (void *)((longlong)_Dst_00 + (longlong)puVar3 * 8);
  puVar2 = puVar2 + -*(longlong *)(param_1 + 0x10);
  _Size = (longlong)puVar3 * 8;
  lVar4 = *(longlong *)(param_1 + 0x10) - (longlong)puVar3;
  memmove(_Dst,(void *)(*(longlong *)(param_1 + 8) + _Size),lVar4 * 8);
  unaff_R15 = (void *)((longlong)_Dst + lVar4 * 8);
  _Src = *(undefined1 **)(param_1 + 8);
  unaff_R13 = (longlong)puVar3 - (longlong)puVar2;
  unaff_RBX = _Dst_00;
  if (puVar3 < puVar2 || unaff_R13 == 0) {
    memmove(unaff_R15,_Src,_Size);
    memset((void *)((longlong)unaff_R15 + _Size),0,((longlong)puVar2 - (longlong)puVar3) * 8);
  }
  else {
LAB_1401dd637:
    _Size = (longlong)puVar2 * 8;
    memmove(unaff_R15,_Src,_Size);
    memmove(unaff_RBX,(void *)(*(longlong *)(param_1 + 8) + _Size),unaff_R13 * 8);
    _Dst_00 = (void *)((longlong)unaff_RBX + unaff_R13 * 8);
  }
  memset(_Dst_00,0,_Size);
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    lVar1 = lVar4;
    if (((*(ulonglong *)(param_1 + 0x10) & 0x1ffffffffffffe00) != 0) &&
       (lVar1 = *(longlong *)(lVar4 + -8), 0x1f < (ulonglong)((lVar4 + -8) - lVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar1);
  }
  *(void **)(param_1 + 8) = unaff_RBX;
  *(longlong *)(param_1 + 0x10) = (longlong)(puVar2 + *(longlong *)(param_1 + 0x10));
  return;
}



// FUNCTION 1401dd69a FUN_1401dd69a body=387 status=ok
// SIG undefined FUN_1401dd69a(void)

void FUN_1401dd69a(longlong param_1)

{
  void *_Dst;
  void *_Dst_00;
  longlong lVar1;
  undefined1 *_Src;
  void *unaff_RBX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong unaff_R13;
  longlong lVar4;
  size_t _Size;
  void *unaff_R15;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  puVar2 = puVar3 + (puVar3 == (undefined1 *)0x0);
  do {
    _Src = (undefined1 *)(0x7ffffffffffffff - (longlong)puVar2);
    if (_Src < puVar2) {
      FUN_1470abffc();
      goto LAB_1401dd7ba;
    }
    puVar2 = (undefined1 *)((longlong)puVar2 * 2);
  } while (puVar2 < &DAT_00000008 || puVar2 == puVar3);
  puVar3 = (undefined1 *)(*(ulonglong *)(param_1 + 0x18) >> 4);
  _Dst_00 = (void *)FUN_1456db838(&local_41,puVar2);
  _Dst = (void *)((longlong)_Dst_00 + (longlong)puVar3 * 8);
  puVar2 = puVar2 + -*(longlong *)(param_1 + 0x10);
  _Size = (longlong)puVar3 * 8;
  lVar4 = *(longlong *)(param_1 + 0x10) - (longlong)puVar3;
  memmove(_Dst,(void *)(*(longlong *)(param_1 + 8) + _Size),lVar4 * 8);
  unaff_R15 = (void *)((longlong)_Dst + lVar4 * 8);
  _Src = *(undefined1 **)(param_1 + 8);
  unaff_R13 = (longlong)puVar3 - (longlong)puVar2;
  unaff_RBX = _Dst_00;
  if (puVar3 < puVar2 || unaff_R13 == 0) {
    memmove(unaff_R15,_Src,_Size);
    memset((void *)((longlong)unaff_R15 + _Size),0,((longlong)puVar2 - (longlong)puVar3) * 8);
  }
  else {
LAB_1401dd7ba:
    _Size = (longlong)puVar2 * 8;
    memmove(unaff_R15,_Src,_Size);
    memmove(unaff_RBX,(void *)(*(longlong *)(param_1 + 8) + _Size),unaff_R13 * 8);
    _Dst_00 = (void *)((longlong)unaff_RBX + unaff_R13 * 8);
  }
  memset(_Dst_00,0,_Size);
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    lVar1 = lVar4;
    if (((*(ulonglong *)(param_1 + 0x10) & 0x1ffffffffffffe00) != 0) &&
       (lVar1 = *(longlong *)(lVar4 + -8), 0x1f < (ulonglong)((lVar4 + -8) - lVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar1);
  }
  *(void **)(param_1 + 8) = unaff_RBX;
  *(longlong *)(param_1 + 0x10) = (longlong)(puVar2 + *(longlong *)(param_1 + 0x10));
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401dd81f FUN_1401dd81f body=635 status=ok
// SIG undefined FUN_1401dd81f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401dd81f(undefined8 *param_1,longlong param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 ****_Src;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 ***local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *param_3 = 1;
  cVar3 = FUN_1401dc1d0(param_2);
  if (cVar3 != '\0') {
    do {
      if ((*(longlong *)(param_2 + 0x38) != 0) &&
         (*(char *)(*(longlong *)
                     (*(longlong *)(param_2 + 0x20) +
                     (*(longlong *)(param_2 + 0x28) - 1U & *(ulonglong *)(param_2 + 0x30) >> 4) * 8)
                   + (ulonglong)((uint)*(ulonglong *)(param_2 + 0x30) & 0xf)) == '!')) break;
      if (*param_3 == 1) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9a29b0) &&
           (FUN_144b3d300(&DAT_14c9a29b0), DAT_14c9a29b0 == -1)) {
          FUN_1456dc33e();
          local_80 = (undefined8 ***)CONCAT35(local_80._5_3_,0x2d00000001);
          local_68 = 0;
          local_78 = 0;
          uStack_70 = 0;
          _DAT_14c9a2990 = 3;
          _DAT_14c9a2998 = 0;
          uRam000000014c9a29a0 = 0;
          _DAT_14c9a29a8 = 0;
          FUN_1401db408(&DAT_14c9a2998,&DAT_14c9a29b8);
          FUN_1401db408(&DAT_14c9a2998,&local_80);
          FUN_1401d9b52(&local_78);
          atexit((_func_5014 *)&LAB_142b2b1c0);
          _Init_thread_footer(&DAT_14c9a29b0);
        }
        local_80 = (undefined8 ****)0x0;
        local_78 = param_2;
        if (((*(longlong *)(param_2 + 0x38) == 0) &&
            (cVar3 = FUN_1448d56de(param_2,0), cVar3 == '\0')) ||
           (iVar4 = FUN_1448d545a(&DAT_14c9a2990,&local_80), iVar4 < 1)) {
          *param_3 = 0;
          goto LAB_1401dd990;
        }
        if ((*param_3 & 1) == 0) goto LAB_1401dd990;
      }
      else {
LAB_1401dd990:
        FUN_1456dbf5f();
        iVar4 = FUN_1456dbef2(&DAT_14c9a2698,param_2);
        if (iVar4 < 1) break;
      }
      FUN_1401dda9c(param_2,&local_80,iVar4);
      _Src = &local_80;
      if (0xf < local_68) {
        _Src = (undefined8 ****)local_80;
      }
      lVar2 = param_1[2];
      if ((ulonglong)(param_1[3] - lVar2) < uStack_70) {
        local_88 = uStack_70;
        FUN_140c91e84(param_1,uStack_70);
      }
      else {
        lVar1 = lVar2 + uStack_70;
        param_1[2] = lVar1;
        puVar5 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar5 = (undefined8 *)*param_1;
        }
        memmove((void *)(lVar2 + (longlong)puVar5),_Src,uStack_70);
        *(undefined1 *)((longlong)puVar5 + lVar1) = 0;
      }
      FUN_1401d9a90(&local_80);
      cVar3 = FUN_1401dc1d0(param_2);
    } while (cVar3 != '\0');
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1401dda9c FUN_1401dda9c body=148 status=ok
// SIG undefined FUN_1401dda9c(void)

undefined8 * FUN_1401dda9c(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  if (0xf < param_3) {
    FUN_140c1c900(param_2,param_3);
    param_2[2] = 0;
  }
  do {
    uVar2 = FUN_1401dc22e(param_1);
    uVar1 = param_2[2];
    if (uVar1 < (ulonglong)param_2[3]) {
      param_2[2] = uVar1 + 1;
      puVar3 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar3 = (undefined8 *)*param_2;
      }
      *(undefined1 *)((longlong)puVar3 + uVar1) = uVar2;
      *(undefined1 *)((longlong)puVar3 + uVar1 + 1) = 0;
    }
    else {
      FUN_1401dc532(param_2,1);
    }
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return param_2;
}



// FUNCTION 1401ddb30 FUN_1401ddb30 body=486 status=ok
// SIG undefined FUN_1401ddb30(void)

undefined4 * FUN_1401ddb30(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined4 *local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  if (param_2[2] != 0) {
    local_88 = param_1 + 2;
    uVar7 = 0;
    local_90 = param_2;
    do {
      puVar4 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar4 = (undefined8 *)*param_2;
      }
      local_80 = 1;
      local_7c = CONCAT11(local_7c._1_1_,*(undefined1 *)((longlong)puVar4 + uVar7));
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      puVar3 = *(undefined4 **)(param_1 + 4);
      if (puVar3 == *(undefined4 **)(param_1 + 6)) {
        lVar9 = (longlong)puVar3 - *(longlong *)(param_1 + 2);
        uVar5 = lVar9 >> 5;
        uVar1 = uVar5 + 1;
        uVar8 = (uVar5 >> 1) + uVar5;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7ffffffffffffff - (uVar5 >> 1) < uVar5) {
          uVar8 = 0x7ffffffffffffff;
        }
        lVar6 = FUN_1401d9e2c(uVar8);
        puVar2 = (undefined4 *)(lVar6 + lVar9);
        *puVar2 = local_80;
        *(undefined2 *)(puVar2 + 1) = local_7c;
        *(undefined8 *)(puVar2 + 2) = 0;
        *(undefined8 *)(puVar2 + 4) = 0;
        *(undefined8 *)(puVar2 + 6) = 0;
        FUN_1401d9af0(puVar2 + 2,0,&local_78,&uStack_70);
        if (*(undefined4 **)(param_1 + 4) == puVar3) {
          FUN_1401da078(*(undefined8 *)(param_1 + 2),*(undefined4 **)(param_1 + 4),lVar6);
        }
        else {
          FUN_1470a9a59(*(undefined8 *)(param_1 + 2),puVar3,lVar6);
          FUN_1470a9a59(puVar3,*(undefined8 *)(param_1 + 4),lVar6 + lVar9 + 0x20);
        }
        param_2 = local_90;
        FUN_1401db564(local_88,lVar6,uVar1,uVar8);
      }
      else {
        *(undefined2 *)(puVar3 + 1) = local_7c;
        *puVar3 = 1;
        *(undefined8 *)(puVar3 + 2) = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 6) = 0;
        FUN_1401d9af0(puVar3 + 2,0,&local_78,&uStack_70);
        *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 0x20;
      }
      FUN_1401d9b52(&local_78);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[2]);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1401ddd18 FUN_1401ddd18 body=86 status=ok
// SIG undefined FUN_1401ddd18(void)

void FUN_1401ddd18(longlong param_1)

{
  float fVar1;
  
  FUN_1401ddd6e();
  if (*(char *)(param_1 + 0x19) == '\x02') {
    fVar1 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x1c);
  }
  else if (*(char *)(param_1 + 0x19) == '\x01') {
    fVar1 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x24);
  }
  FUN_1401ddd6e(param_1 + 0x60,fVar1 + *(float *)(param_1 + 0x58),0);
  return;
}



// FUNCTION 1401ddd6e FUN_1401ddd6e body=137 status=ok
// SIG undefined FUN_1401ddd6e(void)

void FUN_1401ddd6e(longlong param_1,float param_2,uint param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = *(byte *)(param_1 + 0x19);
  fVar2 = param_2;
  if (bVar1 != param_3) {
    if (bVar1 == 2) {
      if (param_3 == 1) {
        fVar3 = *(float *)(param_1 + 0x20);
        if ((fVar3 == 0.0) && (fVar2 = 0.0, !NAN(fVar3))) goto LAB_1401ddd7a;
      }
      else {
        if (param_3 != 0) {
          return;
        }
        fVar3 = *(float *)(param_1 + 0x20);
        if ((fVar3 == 0.0) && (fVar2 = 0.0, !NAN(fVar3))) goto LAB_1401ddd7a;
        param_2 = param_2 - *(float *)(param_1 + 0x1c);
      }
      fVar2 = param_2 / fVar3;
    }
    else if (bVar1 == 1) {
      if (param_3 == 2) {
        fVar2 = param_2 * *(float *)(param_1 + 0x20);
      }
      else {
        if (param_3 != 0) {
          return;
        }
        fVar2 = param_2 - *(float *)(param_1 + 0x1c);
      }
    }
    else {
      if (bVar1 != 0) {
        return;
      }
      if (param_3 == 2) {
        param_2 = param_2 * *(float *)(param_1 + 0x20);
      }
      else if (param_3 != 1) {
        return;
      }
      fVar2 = param_2 + *(float *)(param_1 + 0x1c);
    }
  }
LAB_1401ddd7a:
  *(float *)(param_1 + 0x24) = fVar2;
  return;
}



// FUNCTION 1401dddf8 FUN_1401dddf8 body=297 status=ok
// SIG undefined FUN_1401dddf8(void)

void FUN_1401dddf8(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_1 + 0x3a;
  FUN_1401ddf22(param_3,param_1,param_1 + 0x37,param_1 + 0x28);
  FUN_1448d57ff(*param_1,*(undefined4 *)(param_1 + 1));
  if (*(char *)(param_4 + 0x37c) == '\x01') {
    uVar3 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    if (*(char *)((longlong)param_1 + 0x202) == '\0') {
      local_58 = &local_44;
      local_60 = &local_40;
      local_68 = (undefined8 *)&local_3c;
      FUN_1401de39a(param_1 + 2,param_1,1,*(undefined8 *)(param_4 + 0x228));
      *(undefined1 *)((longlong)param_1 + 0x202) = 1;
    }
    lVar1 = *(longlong *)(param_3 + 0x13bb0);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 0x3a0);
      uVar3 = *(undefined4 *)(lVar1 + 0x3a4);
    }
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(undefined4 *)((longlong)param_1 + 100) = uVar3;
    local_68 = param_5;
    FUN_1401b6588(param_1 + 2,param_2,param_4,0);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ddf22 FUN_1401ddf22 body=1142 status=ok
// SIG undefined FUN_1401ddf22(void)

void FUN_1401ddf22(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
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
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  undefined *puVar22;
  int iVar23;
  undefined *puVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  undefined1 auStack_168 [39];
  byte local_141;
  longlong local_140;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(char *)(param_1 + 0x2398) != '\0') || (*(char *)(param_1 + 0x23ef) == '\x01')) {
    local_f8 = 0;
    uStack_f0 = 0;
    iVar26 = (int)param_2[1];
    if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar26);
    }
    if ((iVar26 != 0) && (FUN_14482a268(&local_f8), 0 < (int)param_2[1])) {
      local_140 = 0x40;
      local_128 = 0;
      do {
        FUN_14002cd84(param_3,1);
        iVar26 = (int)param_3[2];
        iVar23 = (int)((ulonglong)((longlong)(iVar26 + -1) * -0x6db6db6d) >> 0x20) + iVar26 + -1;
        iVar23 = (iVar23 >> 5) - (iVar23 >> 0x1f);
        lVar27 = *(longlong *)(*param_3 + (longlong)iVar23 * 8);
        lVar25 = (ulonglong)((iVar26 + iVar23 * -0x38) - 1) * 0x120;
        local_120 = lVar25 + lVar27;
        lVar2 = *param_2;
        lVar3 = *(longlong *)(lVar2 + -0x40 + local_140);
        FUN_14176f2be(local_120,lVar3);
        lVar27 = lVar27 + lVar25;
        FUN_147243e48(lVar27 + 0x78,lVar3 + 0x78);
        uVar4 = *(undefined4 *)(lVar3 + 0xe0);
        uVar5 = *(undefined4 *)(lVar3 + 0xe4);
        uVar6 = *(undefined4 *)(lVar3 + 0xe8);
        uVar7 = *(undefined4 *)(lVar3 + 0xec);
        uVar8 = *(undefined4 *)(lVar3 + 0xf0);
        uVar9 = *(undefined4 *)(lVar3 + 0xf4);
        uVar10 = *(undefined4 *)(lVar3 + 0xf8);
        uVar11 = *(undefined4 *)(lVar3 + 0xfc);
        uVar12 = *(undefined4 *)(lVar3 + 0x100);
        uVar13 = *(undefined4 *)(lVar3 + 0x104);
        uVar14 = *(undefined4 *)(lVar3 + 0x108);
        uVar15 = *(undefined4 *)(lVar3 + 0x10c);
        uVar16 = *(undefined4 *)(lVar3 + 0x111);
        uVar17 = *(undefined4 *)(lVar3 + 0x115);
        uVar18 = *(undefined4 *)(lVar3 + 0x119);
        *(undefined4 *)(lVar27 + 0x10d) = *(undefined4 *)(lVar3 + 0x10d);
        *(undefined4 *)(lVar27 + 0x111) = uVar16;
        *(undefined4 *)(lVar27 + 0x115) = uVar17;
        *(undefined4 *)(lVar27 + 0x119) = uVar18;
        *(undefined4 *)(lVar27 + 0x100) = uVar12;
        *(undefined4 *)(lVar27 + 0x104) = uVar13;
        *(undefined4 *)(lVar27 + 0x108) = uVar14;
        *(undefined4 *)(lVar27 + 0x10c) = uVar15;
        *(undefined4 *)(lVar27 + 0xf0) = uVar8;
        *(undefined4 *)(lVar27 + 0xf4) = uVar9;
        *(undefined4 *)(lVar27 + 0xf8) = uVar10;
        *(undefined4 *)(lVar27 + 0xfc) = uVar11;
        *(undefined4 *)(lVar27 + 0xe0) = uVar4;
        *(undefined4 *)(lVar27 + 0xe4) = uVar5;
        *(undefined4 *)(lVar27 + 0xe8) = uVar6;
        *(undefined4 *)(lVar27 + 0xec) = uVar7;
        iVar26 = 0;
        if (*(char *)(param_1 + 0x23ef) == '\0') {
          uVar20 = *(uint *)(lVar2 + -4 + local_140);
          if (*(char *)(param_1 + 0x2398) == '\x01') {
            uVar20 = uVar20 & 0x38;
            iVar26 = (uVar20 != 0x10) + 1;
            if (uVar20 == 0) {
              iVar26 = 0;
            }
          }
          else {
            iVar26 = (int)(uVar20 << 0x1a) >> 0x1d;
          }
        }
        lVar27 = FUN_144b1376c(lVar3 + 0xe8,param_4);
        FUN_147243eb2(&local_e8,lVar27);
        local_88 = *(undefined8 *)(lVar27 + 0x60);
        local_78 = *(undefined8 *)(lVar27 + 0x70);
        local_70 = *(undefined4 *)(lVar27 + 0x78);
        uStack_6c = *(undefined4 *)(lVar27 + 0x7c);
        uStack_68 = *(undefined4 *)(lVar27 + 0x80);
        uStack_64 = *(undefined4 *)(lVar27 + 0x84);
        local_60 = *(undefined1 *)(lVar27 + 0x88);
        local_5f = *(undefined1 *)(lVar27 + 0x89);
        local_5e = *(undefined1 *)(lVar27 + 0x8a);
        local_5c = *(undefined4 *)(lVar27 + 0x8c);
        local_58 = *(undefined8 *)(lVar27 + 0x90);
        local_50 = *(undefined4 *)(lVar27 + 0x98);
        uVar20 = *(uint *)(lVar2 + -4 + local_140);
        if ((uVar20 & 7) == 0) {
          puVar22 = &DAT_14c9c0e48;
          if (iVar26 == 2) {
            puVar22 = &DAT_14c9c0e60;
          }
          puVar24 = &DAT_14c9c0e78;
        }
        else if ((int)(uVar20 << 0x1d) >> 0x1d == 1) {
          puVar22 = &DAT_14c9c0e00;
          if (iVar26 == 2) {
            puVar22 = &DAT_14c9c0e18;
          }
          puVar24 = &DAT_14c9c0e30;
        }
        else {
          puVar22 = &DAT_14c9c0d58;
          if (iVar26 == 2) {
            puVar22 = &DAT_14c9c0de8;
          }
          puVar24 = &DAT_14c9c0da0;
        }
        if (iVar26 == 0) {
          puVar22 = puVar24;
        }
        local_80 = *(undefined8 *)(puVar22 + 0x10);
        FUN_144ab1e58(&local_fc,&local_e8,param_4,param_5);
        uVar19 = uStack_f0;
        *(undefined4 *)(local_120 + 0xe8) = local_fc;
        local_12c = *(undefined4 *)(lVar2 + -0x10 + local_140);
        local_110 = *(undefined8 *)(lVar2 + -0x18 + local_140);
        bVar1 = *(byte *)(lVar2 + -8 + local_140);
        local_130 = *(undefined4 *)(lVar2 + -0xc + local_140);
        local_118 = *(undefined8 *)(lVar2 + -0x38 + local_140);
        local_108 = *(undefined8 *)(lVar2 + -0x30 + local_140);
        local_141 = *(byte *)(lVar2 + local_140);
        uVar20 = *(uint *)(lVar2 + -4 + local_140);
        local_134 = *(undefined4 *)(lVar2 + -0x20 + local_140);
        local_100 = *(undefined4 *)(lVar2 + -0x28 + local_140);
        lVar27 = (longlong)(int)uStack_f0;
        uVar21 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar21);
        if (uStack_f0._4_4_ < uVar21) {
          FUN_1448b96b0(&local_f8,uVar19 & 0xffffffff);
        }
        *(longlong *)(local_f8 + lVar27 * 0x48) = local_120;
        *(undefined8 *)(local_f8 + 8 + lVar27 * 0x48) = local_118;
        *(undefined8 *)(local_f8 + 0x10 + lVar27 * 0x48) = local_108;
        *(undefined4 *)(local_f8 + 0x18 + lVar27 * 0x48) = local_100;
        *(undefined4 *)(local_f8 + 0x1c + lVar27 * 0x48) = 0xffffffff;
        *(undefined4 *)(local_f8 + 0x20 + lVar27 * 0x48) = local_134;
        *(undefined8 *)(local_f8 + 0x28 + lVar27 * 0x48) = local_110;
        *(undefined4 *)(local_f8 + 0x30 + lVar27 * 0x48) = local_12c;
        *(undefined4 *)(local_f8 + 0x34 + lVar27 * 0x48) = local_130;
        *(byte *)(local_f8 + 0x38 + lVar27 * 0x48) = bVar1 & 3;
        *(uint *)(local_f8 + 0x3c + lVar27 * 0x48) = uVar20 & 0x3f;
        *(byte *)(local_f8 + 0x40 + lVar27 * 0x48) = local_141 & 0x3f;
        FUN_1446fbe14(&local_e8);
        local_128 = local_128 + 1;
        local_140 = local_140 + 0x48;
      } while (local_128 < (int)param_2[1]);
    }
    local_e8 = *param_2;
    lStack_e0 = param_2[1];
    *param_2 = local_f8;
    param_2[1] = uStack_f0;
    local_f8 = local_e8;
    uStack_f0 = lStack_e0;
    FUN_140021158();
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401de39a FUN_1401de39a body=2912 status=ok
// SIG undefined FUN_1401de39a(void)

void FUN_1401de39a(longlong param_1,longlong *param_2,char param_3,longlong param_4,uint *param_5,
                  uint *param_6,int *param_7)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  longlong *plVar25;
  ulonglong uVar26;
  undefined1 auStack_168 [32];
  int local_148;
  byte local_140;
  uint local_138;
  byte local_12e;
  char local_12d;
  int local_12c;
  ulonglong local_128;
  longlong *local_120;
  uint local_114;
  ulonglong local_110;
  uint local_104;
  undefined4 local_100;
  int local_fc;
  longlong local_f8;
  uint local_ec;
  ulonglong local_e8;
  longlong *local_e0;
  uint local_d8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  uint *local_b0;
  uint *local_a8;
  int *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_c0 = *param_2;
  if ((1 < *(int *)(param_1 + 0x30)) &&
     ((*(int *)(param_1 + 0x30) != 2 || (*(int *)(param_1 + 0x44) != 1)))) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  iVar17 = (int)param_2[1];
  local_12d = param_3;
  local_90 = param_4;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar17);
  }
  plVar25 = (longlong *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != iVar17) {
    FUN_144757b4a(plVar25,iVar17);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != iVar17) {
    FUN_144751072(param_1 + 0xa0,iVar17);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != iVar17) {
    FUN_144757ad2(param_1 + 0xc0,iVar17);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != iVar17) {
    FUN_144757ad2(param_1 + 0xe0,iVar17);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != iVar17) {
    FUN_144757cc6(param_1 + 0xd0,iVar17);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != iVar17) {
    FUN_144757ce0(param_1 + 0xf0,iVar17);
  }
  if (*(int *)(param_1 + 0x10c) < 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    FUN_144757ad2(param_1 + 0x100,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  lVar14 = 0x118;
  do {
    if (*(longlong *)(param_1 + lVar14) == 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      *(undefined4 *)(puVar8 + 6) = 0;
      *(undefined8 **)(param_1 + lVar14) = puVar8;
    }
    lVar14 = lVar14 + 8;
  } while (lVar14 != 0x128);
  *param_5 = 1;
  uVar7 = *(uint *)(param_2 + 1);
  if ((DAT_14c760434 == 0) || ((&DAT_14ca814b8)[(ulonglong)*(ushort *)(param_1 + 8) * 0xf] == 1)) {
    local_100 = 0;
  }
  else {
    local_100 = (undefined4)
                CONCAT71((int7)((ulonglong)*(ushort *)(param_1 + 8) * 0x3c >> 8),
                         (*(byte *)(param_1 + 0x48) & 1) == 0);
  }
  if ((int)uVar7 < 1) {
    *param_6 = uVar7;
    *param_7 = 0;
    iVar17 = (int)param_2[1];
    iVar20 = 0;
    if (iVar17 < 0) goto LAB_1401deebc;
  }
  else {
    local_b0 = param_5;
    local_a8 = param_6;
    local_a0 = param_7;
    local_ec = *(uint *)(param_1 + 0x30);
    local_d4 = *(int *)(param_1 + 0x128);
    local_d8 = *(byte *)(param_1 + 0x12d) - 1;
    uVar22 = local_d8 | 0x40;
    local_d8 = local_d8 | 0x20;
    local_d0 = (longlong *)(param_1 + 0xa0);
    local_80 = param_1 + 0xc0;
    local_c8 = (longlong *)(param_1 + 0xe0);
    local_b8 = param_1 + 0xf0;
    local_88 = param_1 + 0x100;
    local_114 = 1;
    local_f8 = CONCAT44(local_f8._4_4_,0xffffffff);
    uVar21 = 0;
    uVar12 = 0;
    iVar20 = 0;
    plVar19 = (longlong *)0x0;
    local_104 = uVar22;
    local_e0 = plVar25;
    local_98 = param_2;
    local_78 = (ulonglong)uVar7;
    do {
      plVar16 = (longlong *)(local_c0 + uVar21 * 0x48);
      lVar14 = *plVar16;
      bVar10 = *(byte *)(plVar16 + 8);
      uVar26 = (ulonglong)bVar10;
      bVar13 = DAT_14c9e5360 != 0 | (bVar10 & 8) >> 3;
      local_fc = CONCAT31(local_fc._1_3_,bVar13);
      uVar7 = 1;
      if ((((bVar10 >> 5 & 1) == 0 && local_d4 == 1) && bVar13 == 0) && ((int)plVar16[6] < 1)) {
        uVar7 = (uint)(1 < *(uint *)(lVar14 + 0xf4));
      }
      local_12e = (bVar10 & 0x10) >> 4 & (byte)local_100;
      local_128 = CONCAT44(local_128._4_4_,(uint)bVar10);
      bVar10 = (byte)uVar7;
      local_110 = uVar21;
      if ((local_12d == '\0') || ((local_12e & bVar10) != 0)) {
LAB_1401de6fa:
        iVar17 = *(int *)(param_1 + 0xa8);
        lVar15 = (longlong)iVar17;
        *(uint *)(param_1 + 0xa8) = iVar17 + 1U;
        if (*(uint *)(param_1 + 0xac) < iVar17 + 1U) {
          FUN_1471d00b4(local_d0,iVar17);
          uVar26 = local_128 & 0xffffffff;
        }
        local_f8 = *local_d0;
        *(undefined8 *)(local_f8 + 4 + lVar15 * 0xc) = 0x2000000100000000;
        *(uint *)(local_f8 + lVar15 * 0xc) = uVar7;
        puVar5 = *(undefined4 **)(lVar14 + 0x110);
        local_e8 = CONCAT71(local_e8._1_7_,bVar10);
        if (puVar5 == (undefined4 *)0x0) {
          iVar17 = *(int *)(lVar14 + 0xf0);
          if ((*(uint *)(lVar14 + 0x11c) & 7) == 1) {
            iVar17 = iVar17 + 2;
          }
          else {
            iVar6 = (int)(*(uint *)(lVar14 + 0x11c) << 0x1d) >> 0x1d;
            if (iVar6 == 2) {
              iVar17 = iVar17 * 2;
            }
            else if (iVar6 == 3) {
              iVar17 = iVar17 << 2;
            }
            else {
              iVar17 = iVar17 * 3;
            }
          }
          uVar2 = *(undefined4 *)(lVar14 + 0xec);
          uVar3 = *(undefined4 *)(lVar14 + 0xf8);
          local_120 = (longlong *)(ulonglong)*(uint *)(param_1 + 0xb8);
          uVar7 = *(uint *)(param_1 + 0xb8) + 1;
          *(uint *)(param_1 + 0xb8) = uVar7;
          if (*(uint *)(param_1 + 0xbc) < uVar7) {
            local_12c = iVar20;
            FUN_1471cfb7c(plVar25);
            uVar26 = local_128 & 0xffffffff;
            iVar20 = local_12c;
          }
          lVar9 = (longlong)(int)local_120;
          lVar14 = *plVar25;
          *(int *)(lVar14 + lVar9 * 0x14) = iVar17;
          *(undefined4 *)(lVar14 + 4 + lVar9 * 0x14) = 0;
          *(undefined4 *)(lVar14 + 8 + lVar9 * 0x14) = uVar2;
          *(undefined4 *)(lVar14 + 0xc + lVar9 * 0x14) = uVar3;
          *(undefined4 *)(lVar14 + 0x10 + lVar9 * 0x14) = 0;
          plVar19 = local_120;
        }
        else {
          uVar2 = *puVar5;
          local_68 = puVar5[4];
          local_70 = *(undefined8 *)(puVar5 + 2);
          uVar7 = *(uint *)(param_1 + 0xb8);
          plVar19 = (longlong *)(ulonglong)uVar7;
          *(uint *)(param_1 + 0xb8) = uVar7 + 1;
          if (*(uint *)(param_1 + 0xbc) < uVar7 + 1) {
            FUN_1471cfb7c(plVar25,plVar19);
            uVar26 = local_128 & 0xffffffff;
          }
          lVar9 = (longlong)(int)uVar7;
          lVar14 = *plVar25;
          *(undefined4 *)(lVar14 + lVar9 * 0x14) = uVar2;
          *(undefined4 *)(lVar14 + 4 + lVar9 * 0x14) = 0;
          *(undefined8 *)(lVar14 + 8 + lVar9 * 0x14) = local_70;
          *(undefined4 *)(lVar14 + 0x10 + lVar9 * 0x14) = local_68;
        }
        uVar11 = *(int *)((longlong)plVar16 + 0x34) << 2;
        uVar7 = uVar11 & 0x7ffc0;
        if ((*(byte *)(plVar16 + 7) & 1) == 0) {
          uVar7 = 0;
        }
        uVar23 = uVar11 & 0xfff80000;
        if ((*(byte *)(plVar16 + 7) & 2) == 0) {
          uVar23 = 0;
        }
        iVar17 = *(int *)(param_1 + 200);
        *(uint *)(param_1 + 200) = iVar17 + 1U;
        local_120 = plVar16;
        if (*(uint *)(param_1 + 0xcc) < iVar17 + 1U) {
          FUN_144757aec(local_80,iVar17);
          uVar26 = local_128 & 0xffffffff;
          uVar22 = local_104;
        }
        plVar25 = local_e0;
        puVar1 = (uint *)(local_f8 + lVar15 * 0xc);
        *(uint *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar17 * 4) =
             uVar11 & 0x3c | (uint)uVar26 & 3 | uVar7 | uVar23;
        uVar11 = (int)plVar19 * 0x28;
        if ((char)local_e8 == '\0') {
          uVar11 = 2;
        }
        *puVar1 = *puVar1 & 1 | uVar11;
        if (*(char *)(param_1 + 0x12d) == '\x01') {
          uVar11 = (*(int *)(*(longlong *)(param_1 + 0x120) + 0x30) * 0x200 +
                   *(int *)(*(longlong *)(param_1 + 0x118) + 0x30) * 0x100) *
                   *(int *)(param_1 + 0x30);
        }
        else {
          uVar11 = *(int *)(param_1 + 0xe8) << 2;
        }
        puVar1[1] = uVar11;
        if (*(char *)(param_1 + 0x12d) == '\x01') {
          iVar17 = ((*(uint *)(*(longlong *)(param_1 + 0x120) + 0x30) & 0x7fffff) * 0x20 +
                   (*(uint *)(*(longlong *)(param_1 + 0x118) + 0x30) & 0xffffff) * 0x10) *
                   *(int *)(param_1 + 0x30);
        }
        else {
          iVar17 = *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x4c);
        }
        iVar6 = *(int *)(param_1 + 0xe8);
        *(uint *)(param_1 + 0xe8) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0xec) < iVar6 + 1U) {
          FUN_144757aec(local_c8,iVar6);
          uVar26 = local_128 & 0xffffffff;
        }
        *(int *)(*local_c8 + (longlong)iVar6 * 4) = iVar17;
        local_f8 = CONCAT44(local_f8._4_4_,(int)local_120[4]);
        lVar14 = local_120[7];
        if ((longlong)iVar20 < (longlong)local_110) {
          plVar16 = local_120;
          plVar18 = (longlong *)(local_c0 + (longlong)iVar20 * 0x48);
          for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
            *plVar18 = *plVar16;
            plVar16 = plVar16 + 1;
            plVar18 = plVar18 + 1;
          }
        }
        uVar12 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),(char)lVar14) & 0xffffffffffffff03;
        iVar20 = iVar20 + 1;
        local_114 = 1;
        plVar16 = local_120;
      }
      else {
        bVar13 = 1;
        if (*(char *)(param_1 + 0x12d) == '\x01') {
          bVar13 = local_114 < local_d8 & (bVar10 ^ 1);
        }
        if ((((bVar13 == 0) || ((int)local_f8 == -1)) || ((int)plVar16[4] != (int)local_f8)) ||
           ((*(byte *)(plVar16 + 7) & 3) != (byte)uVar12)) goto LAB_1401de6fa;
        local_114 = local_114 + 1;
        uVar7 = *local_b0;
        if ((int)*local_b0 <= (int)local_114) {
          uVar7 = local_114;
        }
        *local_b0 = uVar7;
        lVar14 = (longlong)(*(int *)(param_1 + 0xa8) + -1);
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0xa0) + lVar14 * 0xc);
        if ((uVar7 & 1) == 0) {
          *(uint *)(*(longlong *)(param_1 + 0xa0) + lVar14 * 0xc) = uVar7 + 2;
        }
      }
      if ((uVar26 & 4) != 0) {
        iVar17 = (int)plVar16[3];
        bVar13 = -(char)(iVar17 >> 0x1f);
        bVar10 = bVar13 + 2;
        if ((char)local_fc == '\0') {
          bVar10 = bVar13;
        }
        bVar13 = bVar10 + 4;
        if (local_12e == 0) {
          bVar13 = bVar10;
        }
        local_fc = *(int *)(param_1 + 0x4c);
        lVar14 = plVar16[5];
        local_12c = iVar20;
        local_120 = plVar19;
        local_e8 = uVar12;
        if (lVar14 == 0) {
          uVar22 = local_104;
          if ((local_128 & 0x20) == 0) {
            iVar20 = *(int *)(*plVar16 + 0xf4);
          }
          else {
            iVar20 = *(int *)(*(longlong *)
                               (*(longlong *)(local_90 + 0x3330) +
                               (longlong)*(int *)((longlong)plVar16 + 0x14) * 8) + 0x208);
            if (iVar20 == 0) goto LAB_1401deb99;
          }
          local_138 = local_104;
          local_148 = iVar20;
          local_140 = bVar13;
          FUN_14477ff20(param_1,(ulonglong)plVar19 & 0xffffffff,iVar17 * 2 >> 1,0);
        }
        else {
          local_128 = (ulonglong)*(uint *)(plVar16 + 6);
          if (local_128 != 0) {
            local_128 = local_128 * 2;
            uVar12 = 0;
            iVar20 = 0;
            do {
              iVar6 = *(int *)(lVar14 + (uVar12 & 0xffffffff) * 4);
              iVar24 = *(int *)(lVar14 + (ulonglong)((int)uVar12 + 1) * 4) - iVar6;
              local_148 = iVar24 + 1;
              local_140 = bVar13 | 2;
              local_138 = uVar22;
              FUN_14477ff20(param_1,(ulonglong)local_120 & 0xffffffff,iVar6 + (iVar17 * 2 >> 1),
                            iVar20);
              iVar20 = iVar20 + iVar24 + 1;
              uVar12 = uVar12 + 2;
            } while (local_128 != uVar12);
          }
        }
LAB_1401deb99:
        plVar25 = local_e0;
        iVar17 = *(int *)(param_1 + 0x4c) - local_fc;
        uVar12 = local_e8;
        plVar19 = local_120;
        iVar20 = local_12c;
        if ((local_12e & iVar17 != 0) == 1) {
          iVar20 = *(int *)(param_1 + 0xf8);
          iVar6 = *(int *)(param_1 + 0xe8);
          lVar14 = *(longlong *)(param_1 + 0xe0);
          uVar2 = *(undefined4 *)(param_1 + 0x108);
          *(uint *)(param_1 + 0xf8) = iVar20 + 1U;
          if (*(uint *)(param_1 + 0xfc) < iVar20 + 1U) {
            FUN_1471d0112(local_b8,iVar20);
          }
          lVar9 = (longlong)iVar20;
          lVar15 = *(longlong *)(param_1 + 0xf0);
          uVar3 = *(undefined4 *)(lVar14 + (longlong)(iVar6 + -1) * 4);
          uVar4 = *(undefined4 *)(param_1 + 0x110);
          *(uint *)(lVar15 + lVar9 * 0x14) = iVar17 * 0x100 | local_ec;
          *(undefined4 *)(lVar15 + 4 + lVar9 * 0x14) = uVar2;
          *(int *)(lVar15 + 8 + lVar9 * 0x14) = (int)local_120;
          *(undefined4 *)(lVar15 + 0xc + lVar9 * 0x14) = uVar4;
          *(undefined4 *)(lVar15 + 0x10 + lVar9 * 0x14) = uVar3;
          iVar6 = *(int *)(param_1 + 0x108);
          lVar14 = (longlong)iVar6;
          uVar7 = iVar17 + 0x3fU >> 6;
          iVar24 = iVar6 + uVar7;
          *(int *)(param_1 + 0x108) = iVar24;
          if ((uint)(*(int *)(param_1 + 0x10c) - iVar6) < uVar7) {
            FUN_144757aec(local_88,iVar6);
            iVar24 = *(int *)(param_1 + 0x108);
          }
          if (iVar6 < iVar24) {
            do {
              *(int *)(*(longlong *)(param_1 + 0x100) + lVar14 * 4) = iVar20;
              lVar14 = lVar14 + 1;
            } while (lVar14 < *(int *)(param_1 + 0x108));
          }
          *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + iVar17 * local_ec;
          uVar12 = local_e8;
          plVar19 = local_120;
          iVar20 = local_12c;
        }
      }
      uVar21 = local_110 + 1;
    } while (uVar21 != local_78);
    *local_a8 = *(uint *)(local_98 + 1);
    *local_a0 = iVar20;
    iVar17 = (int)local_98[1];
    param_2 = local_98;
    if (iVar17 < iVar20) {
LAB_1401deebc:
      *(int *)(param_2 + 1) = iVar20;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar17) < (uint)(iVar20 - iVar17)) {
        FUN_1448b96b0(param_2,iVar17);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_168);
    }
    if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar20);
    }
  }
  if (iVar20 < iVar17) {
    *(int *)(param_2 + 1) = iVar20;
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401def20 FUN_1401def20 body=25 status=ok
// SIG undefined FUN_1401def20(void)

undefined8 FUN_1401def20(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1401def48 FUN_1401def48 body=467 status=ok
// SIG undefined FUN_1401def48(void)

void FUN_1401def48(void)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar2 = DAT_14caa7258;
  if (DAT_14caa7258 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar5 = 0;
    iVar9 = 0;
  }
  else {
    puVar13 = &DAT_14caa7240;
    if (DAT_14caa7250 != (uint *)0x0) {
      puVar13 = DAT_14caa7250;
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar5 = DAT_14caa7258 + 0x1e;
      if (-1 < DAT_14caa7258 + -1) {
        iVar5 = DAT_14caa7258 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar15 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar13[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar15 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar15 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (DAT_14caa7258 <= iVar5) {
      iVar5 = DAT_14caa7258;
    }
  }
  if (iVar5 != DAT_14caa7258) {
    uVar10 = 0xffffffff;
    lVar3 = DAT_14caa7230;
    iVar4 = DAT_14caa7258;
    do {
      lVar11 = *(longlong *)(lVar3 + 8 + (longlong)iVar5 * 0x18);
      if (*(int *)(lVar11 + 0x70) != *(int *)(lVar11 + 0x9c)) {
        FUN_14747174c(lVar11 + 0x68);
        FUN_147471894(lVar11 + 0x68);
        lVar3 = DAT_14caa7230;
        iVar4 = DAT_14caa7258;
      }
      uVar10 = uVar10 & ~(uint)uVar15;
      puVar13 = DAT_14caa7250;
      if (DAT_14caa7250 == (uint *)0x0) {
        puVar13 = &DAT_14caa7240;
      }
      iVar5 = (int)uVar14;
      lVar11 = (longlong)iVar5;
      uVar6 = puVar13[lVar11] & uVar10;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar6 = puVar13[lVar11 + lVar12 + 1];
            if (uVar6 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar10 = 0xffffffff;
              goto LAB_1401df079;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar10 = 0xffffffff;
          lVar11 = (longlong)iVar8;
        }
        uVar14 = lVar11 + 1U & 0xffffffff;
        iVar5 = iVar4;
      }
      else {
LAB_1401df079:
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
      }
    } while (iVar5 != iVar2);
  }
  return;
}



// FUNCTION 1401df11c FUN_1401df11c body=1904 status=ok
// SIG undefined FUN_1401df11c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1401df11c(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  float fVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  short sVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  float fVar23;
  undefined1 auStack_2d48 [32];
  ulonglong local_2d28;
  longlong local_2d20;
  longlong local_2d18;
  float *local_2d10;
  float *local_2d08;
  code *local_2d00;
  float **local_2cf8;
  code **local_2cf0;
  undefined8 local_2ce8;
  code ***local_2ce0;
  float local_2cd8;
  float fStack_2cd4;
  float fStack_2cd0;
  float fStack_2ccc;
  undefined4 local_2cc8;
  undefined4 uStack_2cc4;
  undefined4 uStack_2cc0;
  undefined4 uStack_2cbc;
  undefined4 local_2cb8;
  undefined4 uStack_2cb4;
  undefined4 uStack_2cb0;
  undefined4 uStack_2cac;
  float *local_78;
  undefined8 local_70;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1401df132;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d48;
  if (param_3 != (longlong *)0x0) {
    if (*(longlong **)(param_1 + 0x170) == param_3) {
      sVar6 = (short)*(undefined4 *)(param_1 + 0x5e8);
      sVar14 = sVar6 + 1;
      *(short *)(param_1 + 0x5e8) = sVar14;
      *(undefined8 *)(param_1 + 0x5e0) = DAT_14c872be0;
      if (sVar14 == -1) {
        *(short *)(param_1 + 0x5e8) = sVar6 + 2;
      }
    }
    if (param_3[1] != 0) {
      if (((*(byte *)(param_3[1] + 0x24) & 1) != 0) &&
         (lVar12 = FUN_147906846(param_3), *(longlong *)(lVar12 + 0x18) != 0)) {
        if (*param_2 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(*param_2 + 0x130);
        }
        uVar13 = FUN_1463a8172();
        uVar11 = FUN_140108626(uVar11,uVar13);
        iVar8 = FUN_14792d46c(uVar11,param_2,param_3);
        if (iVar8 == 1) {
          FUN_1433dc041(lVar12,param_2,param_3);
        }
      }
      if (param_3[1] != 0) {
        if (((*(byte *)(param_3[1] + 0x24) & 2) != 0) &&
           (lVar12 = FUN_1479069ec(param_3), *(longlong *)(lVar12 + 0x18) != 0)) {
          if (*param_2 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(undefined8 *)(*param_2 + 0x130);
          }
          uVar13 = FUN_1463a8172();
          uVar11 = FUN_140108626(uVar11,uVar13);
          FUN_14792d318(uVar11,&local_2cd8,param_2,param_3);
          if ((local_2cd8 <= 1e-05) && (1e-05 < fStack_2cd4)) {
            FUN_1433dc041(lVar12,param_2,param_3);
          }
        }
        if ((param_3[1] != 0) && ((*(byte *)(param_3[1] + 0x24) & 4) != 0)) {
          uVar11 = FUN_147906b92(param_3);
          FUN_1433dc041(uVar11,param_2,param_3);
        }
      }
    }
    (**(code **)(*param_3 + 0x20))(param_3,param_2);
    if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1b4)) {
      uVar5 = (uint)((ulonglong)param_4 >> 0x10);
      uVar7 = (uint)param_4 & 0xffff;
      lVar12 = param_1 + 0x1b8;
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x1c0);
      }
      iVar8 = *(int *)(lVar12 + (ulonglong)
                                (*(int *)(param_1 + 0x1c8) - 1U &
                                (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar7)
                                + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          lVar12 = *(longlong *)(param_1 + 0x180) + (longlong)iVar8 * 0x20;
          if (*(longlong *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar8 * 0x20) == param_4) {
            if (((lVar12 + 8U & 0xfffffffffffffff7) != 0) &&
               ((longlong)*(int *)(lVar12 + 0x10) != 0)) {
              plVar21 = *(longlong **)(lVar12 + 8);
              plVar17 = plVar21 + *(int *)(lVar12 + 0x10);
              do {
                lVar12 = *plVar21;
                *(undefined4 *)(lVar12 + 0x30) = 0;
                plVar2 = (longlong *)(lVar12 + 0x38);
                uVar5 = *(uint *)(lVar12 + 0x40);
                lVar19 = *(longlong *)(lVar12 + 0x38);
                if (0 < (int)uVar5) {
                  fVar23 = *(float *)(lVar19 + 0x20);
                  *(float *)(lVar12 + 0x30) = fVar23;
                  uVar18 = 0;
                  if (uVar5 != 1) {
                    pfVar9 = (float *)(lVar19 + 0x60);
                    uVar18 = 0;
                    uVar15 = 1;
                    do {
                      fVar4 = *pfVar9;
                      if (fVar23 < fVar4) {
                        *(float *)(lVar12 + 0x30) = fVar4;
                        uVar18 = uVar15 & 0xffffffff;
                        fVar23 = fVar4;
                      }
                      uVar15 = uVar15 + 1;
                      pfVar9 = pfVar9 + 0x10;
                    } while (uVar5 != uVar15);
                  }
                  plVar22 = *(longlong **)(lVar12 + 0x18);
                  if (plVar22 != (longlong *)0x0) {
                    lVar10 = (longlong)(int)uVar18 * 0x40;
                    uStack_2cc4 = *(undefined4 *)(lVar12 + 0x20);
                    pfVar9 = (float *)(lVar19 + lVar10);
                    local_2cd8 = *pfVar9;
                    fStack_2cd4 = pfVar9[1];
                    fStack_2cd0 = pfVar9[2];
                    fStack_2ccc = pfVar9[3];
                    puVar3 = (undefined4 *)(lVar19 + 0x10 + lVar10);
                    local_2cc8 = *puVar3;
                    uStack_2cc0 = puVar3[1];
                    uStack_2cbc = puVar3[3];
                    puVar3 = (undefined4 *)(lVar19 + 0x20 + lVar10);
                    local_2cb8 = *puVar3;
                    uStack_2cb4 = puVar3[1];
                    uStack_2cb0 = puVar3[2];
                    uStack_2cac = puVar3[3];
                    if ((plVar22[1] != 0) &&
                       (uVar7 = *(uint *)(plVar22[1] + 0x24), (uVar7 & 7) != 0)) {
                      if (((uVar7 & 1) != 0) &&
                         (local_2d20 = FUN_147906846(plVar22), *(longlong *)(local_2d20 + 0x18) != 0
                         )) {
                        if (CONCAT44(fStack_2cd4,local_2cd8) == 0) {
                          local_2d28 = 0;
                        }
                        else {
                          local_2d28 = *(ulonglong *)(CONCAT44(fStack_2cd4,local_2cd8) + 0x130);
                        }
                        uVar11 = FUN_1463a8172();
                        uVar11 = FUN_140108626(local_2d28,uVar11);
                        iVar8 = FUN_14792d46c(uVar11,&local_2cd8,plVar22);
                        if (iVar8 == 1) {
                          FUN_1433dc041(local_2d20,&local_2cd8,plVar22);
                        }
                      }
                      lVar19 = *(longlong *)(lVar12 + 0x18);
                      if (((*(longlong *)(lVar19 + 8) != 0) &&
                          ((*(byte *)(*(longlong *)(lVar19 + 8) + 0x24) & 2) != 0)) &&
                         (local_2d20 = FUN_1479069ec(lVar19), *(longlong *)(local_2d20 + 0x18) != 0)
                         ) {
                        if (CONCAT44(fStack_2cd4,local_2cd8) == 0) {
                          local_2d28 = 0;
                        }
                        else {
                          local_2d28 = *(ulonglong *)(CONCAT44(fStack_2cd4,local_2cd8) + 0x130);
                        }
                        uVar11 = FUN_1463a8172();
                        uVar11 = FUN_140108626(local_2d28,uVar11);
                        FUN_14792d318(uVar11,&local_2ce8,&local_2cd8,lVar19);
                        if (((float)local_2ce8 <= 1e-05) && (1e-05 < local_2ce8._4_4_)) {
                          FUN_1433dc041(local_2d20,&local_2cd8,lVar19);
                        }
                      }
                      plVar22 = *(longlong **)(lVar12 + 0x18);
                      if ((plVar22[1] != 0) && ((*(byte *)(plVar22[1] + 0x24) & 4) != 0)) {
                        uVar11 = FUN_147906b92(plVar22);
                        FUN_1433dc041(uVar11,&local_2cd8,plVar22);
                        plVar22 = *(longlong **)(lVar12 + 0x18);
                      }
                    }
                    (**(code **)(*plVar22 + 0x20))(plVar22,&local_2cd8);
                    lVar19 = *plVar2;
                  }
                  lVar10 = *(longlong *)(lVar19 + 0x30 + (longlong)(int)uVar18 * 0x40);
                  if (*(int *)(lVar10 + 0xa50) != *(int *)(lVar10 + 0xa74)) {
                    uVar7 = (uint)((ulonglong)DAT_14cacbe90 >> 0x10);
                    uVar20 = (uint)DAT_14cacbe90 & 0xffff;
                    lVar16 = lVar10 + 0xa78;
                    if (*(longlong *)(lVar10 + 0xa88) != 0) {
                      lVar16 = *(longlong *)(lVar10 + 0xa88);
                    }
                    iVar8 = *(int *)(lVar16 + (ulonglong)
                                              (*(int *)(lVar10 + 0xa90) - 1U &
                                              (int)((ulonglong)DAT_14cacbe90 >> 0x20) +
                                              ((uint)DAT_14cacbe90 << 0x10 | uVar20) +
                                              (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar20 >> 4)) * 4)
                    ;
                    if (iVar8 != -1) {
                      lVar16 = *(longlong *)(lVar10 + 0xa48);
                      if (*(longlong *)(lVar10 + 0xa48) == 0) {
                        lVar16 = lVar10 + 0x148;
                      }
                      do {
                        lVar1 = lVar16 + (longlong)iVar8 * 0x120;
                        if (*(longlong *)(lVar16 + (longlong)iVar8 * 0x120) == DAT_14cacbe90) {
                          if (((lVar1 != 0) && (lVar1 != -8)) && (*(int *)(lVar1 + 0x110) != 0)) {
                            local_78 = (float *)0x0;
                            local_70 = 0x400000000;
                            lVar19 = 0x30;
                            uVar15 = 0;
                            local_2d28 = uVar18;
                            do {
                              if (local_2d28 != uVar15) {
                                local_2d20 = *(longlong *)(*plVar2 + lVar19);
                                local_2d18 = (longlong)(int)local_70;
                                uVar7 = (int)local_70 + 1;
                                local_70 = CONCAT44(local_70._4_4_,uVar7);
                                if (local_70._4_4_ < uVar7) {
                                  FUN_14791fdc4(&local_2cd8,local_2d18);
                                }
                                local_2d10 = local_78;
                                if (local_78 == (float *)0x0) {
                                  local_2d10 = &local_2cd8;
                                }
                                lVar16 = local_2d18 * 0x2c6;
                                local_2d18 = local_2d18 * 0xb18;
                                FUN_14791fee0(local_2d10 + lVar16,local_2d20 + 0x148);
                                FUN_1479201e0((longlong)local_2d10 + local_2d18 + 0x950,
                                              local_2d20 + 0xa98);
                              }
                              uVar15 = uVar15 + 1;
                              lVar19 = lVar19 + 0x40;
                            } while (uVar5 != uVar15);
                            local_2cf8 = &local_2d08;
                            local_2d00 = FUN_1433e4178;
                            local_2cf0 = &local_2d00;
                            local_2ce0 = &local_2cf0;
                            local_2ce8 = &LAB_1479204e2;
                            local_2d08 = &local_2cd8;
                            FUN_1479073e2(lVar10 + 0x148,DAT_14cacbe90,&local_2ce8);
                            FUN_1479105cc(&local_2cd8);
                            lVar19 = *plVar2;
                          }
                          break;
                        }
                        iVar8 = *(int *)(lVar1 + 0x118);
                      } while (iVar8 != -1);
                    }
                  }
                }
                iVar8 = *(int *)(lVar12 + 0x44);
                FUN_144728aa2(lVar19,*(undefined4 *)(lVar12 + 0x40));
                *(undefined4 *)(lVar12 + 0x40) = 0;
                if ((iVar8 < 0) && (*(int *)(lVar12 + 0x44) != 0)) {
                  FUN_1479204f0(plVar2);
                }
                plVar21 = plVar21 + 1;
              } while (plVar21 != plVar17);
            }
            break;
          }
          iVar8 = *(int *)(lVar12 + 0x18);
        } while (iVar8 != -1);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_2d48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401df88e FUN_1401df88e body=197 status=ok
// SIG undefined FUN_1401df88e(void)

void FUN_1401df88e(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = param_1[6];
  param_1[6] = param_2;
  (**(code **)(*param_1 + 0x2b8))();
  FUN_1407a53c4(param_1,param_2,param_3,param_4);
  param_1[6] = lVar1;
  FUN_1407b248c(param_1);
  if (((param_2 != 0) && ((char)param_1[9] == '\0')) &&
     (plVar3 = *(longlong **)(param_2 + 0xa8), plVar3 != (longlong *)0x0)) {
    uVar2 = FUN_1407ca880();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1407ca880();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        uVar2 = (**(code **)(*plVar4 + 0x50))(plVar4);
        FUN_1401df954(uVar2,param_1 + 8,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401df954 FUN_1401df954 body=325 status=ok
// SIG undefined FUN_1401df954(void)

void FUN_1401df954(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0xd8) < 1) {
LAB_1401df989:
    if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar5) == *param_2) goto LAB_1401dfa1e;
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(param_1 + 0xe8) * 8 != lVar5);
    }
    local_48 = (undefined1 *)0x0;
    local_40 = 0x400000000;
    FUN_1401dfa9a(local_88,param_1 + 0x40);
    puVar3 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar3 = local_88;
    }
    lVar5 = (longlong)(int)local_40;
    if (lVar5 == 0) {
      uVar2 = 0;
    }
    else {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(puVar3 + lVar4);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x78))(plVar1,param_2,param_3);
        }
        lVar4 = lVar4 + 0x10;
      } while (lVar5 * 0x10 != lVar4);
      uVar2 = local_40 & 0xffffffff;
    }
    puVar3 = local_88;
    if (local_48 != (undefined1 *)0x0) {
      puVar3 = local_48;
    }
    FUN_144a07593(puVar3,uVar2);
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xd0) + lVar5) == *param_2) goto LAB_1401df989;
      lVar5 = lVar5 + 8;
    } while ((longlong)*(int *)(param_1 + 0xd8) * 8 != lVar5);
  }
LAB_1401dfa1e:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401dfa9a FUN_1401dfa9a body=105 status=ok
// SIG undefined FUN_1401dfa9a(void)

void FUN_1401dfa9a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar2) < uVar1) {
      FUN_1401dfb04(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1;
    }
    FUN_1448d5e0f((longlong)iVar2 * 0x10 + lVar3,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1401dfb04 FUN_1401dfb04 body=251 status=ok
// SIG undefined FUN_1401dfb04(void)

void FUN_1401dfb04(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 5) {
      iVar5 = 4;
    }
    else {
      uVar4 = (ulonglong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        uVar4 = uVar4 + (uVar4 * 3 >> 3) + 0x10;
      }
      uVar3 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar3 < 0x7ff1) {
            uVar3 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]];
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
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1401dfc00(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1401dfc00 FUN_1401dfc00 body=131 status=ok
// SIG undefined FUN_1401dfc00(void)

void FUN_1401dfc00(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x10);
  return;
}



// FUNCTION 1401dfc84 FUN_1401dfc84 body=186 status=ok
// SIG undefined FUN_1401dfc84(void)

void FUN_1401dfc84(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return;
}



// FUNCTION 1401dfd3e FUN_1401dfd3e body=85 status=ok
// SIG undefined FUN_1401dfd3e(void)

undefined8 * FUN_1401dfd3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a6000;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 6));
  return puVar1;
}



// FUNCTION 1401dfd93 FUN_1401dfd93 body=108 status=ok
// SIG undefined FUN_1401dfd93(void)

undefined8 * FUN_1401dfd93(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b9a62e0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 0xb));
  return puVar1;
}



// FUNCTION 1401dfe00 FUN_1401dfe00 body=158 status=ok
// SIG undefined FUN_1401dfe00(void)

void FUN_1401dfe00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[3] = DAT_14c8464e0;
  param_1[4] = uVar1;
  param_1[5] = DAT_14c8464f0;
  uVar1 = DAT_14c846328;
  param_1[6] = DAT_14c846320;
  param_1[7] = uVar1;
  param_1[8] = 0x3fdcccccc0000000;
  param_1[9] = 0x3fd1eb8520000000;
  param_1[10] = 0x4010000000000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x81) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x83) = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  return;
}



// FUNCTION 1401dfe9e FUN_1401dfe9e body=333 status=ok
// SIG undefined FUN_1401dfe9e(void)

void FUN_1401dfe9e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b8183a0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_1407ddd26(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1 + 0x30);
  FUN_1459421b4(param_1 + 0x25);
  FUN_145747bb4(param_1 + 0x1b);
  FUN_141507c39(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b473650;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401dffec FUN_1401dffec body=323 status=ok
// SIG undefined FUN_1401dffec(void)

void * FUN_1401dffec(void *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  memset(param_1,0,0x90);
  uVar3 = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_1 + 0x10) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  *(undefined1 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)((longlong)param_1 + 0x80) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  return param_1;
}



// FUNCTION 1401e0130 FUN_1401e0130 body=357 status=ok
// SIG undefined FUN_1401e0130(void)

void FUN_1401e0130(longlong param_1)

{
  int iVar1;
  
  FUN_14020fad6(param_1,&DAT_149e62e78);
  FUN_14020fad6(param_1 + 0x10,&DAT_149e62e78);
  *(undefined4 *)(param_1 + 0x254) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x25c) = 0;
  FUN_14020fad6(param_1 + 0x40,&DAT_149e62e78);
  FUN_14020fad6(param_1 + 0x50,&DAT_149e62e78);
  *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | 1;
  FUN_14020fad6(param_1 + 0xa8,&DAT_149e62e78);
  FUN_14020fad6(param_1 + 0x20,&DAT_149e62e78);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_14020fad6(param_1 + 0x60,&DAT_149e62e78);
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_14020fad6(param_1 + 0x30,&DAT_149e62e78);
  *(undefined4 *)(param_1 + 0x94) = 0;
  FUN_14020fad6(param_1 + 0xb8,&DAT_149e62e78);
  FUN_14020fad6(param_1 + 200,&DAT_149e62e78);
  FUN_14020fad6(param_1 + 0x108,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0x118,&DAT_149dfb77a);
  *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) & 0xfd;
  *(undefined2 *)(param_1 + 0x9c) = 1;
  *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) & 0x32;
  iVar1 = *(int *)(param_1 + 0x7c);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x7c) != 0)) {
    FUN_1408be2c4(param_1 + 0x70,0);
  }
  FUN_14020fad6(param_1 + 0xf8,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0xe8,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 600) = 0;
  *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) & 0xcf;
  return;
}



// FUNCTION 1401e0296 FUN_1401e0296 body=22 status=ok
// SIG undefined FUN_1401e0296(void)

undefined1 FUN_1401e0296(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1401e02ac(param_2,param_3);
  return 1;
}



// FUNCTION 1401e02ac FUN_1401e02ac body=342 status=ok
// SIG undefined FUN_1401e02ac(void)

void FUN_1401e02ac(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  plVar1 = *(longlong **)(*param_1 + 8);
  puVar2 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  plVar1 = *(longlong **)(*param_1 + 8);
  puVar2 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c();
    }
  }
  else {
    param_2[1] = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  plVar1 = *(longlong **)(*param_1 + 8);
  puVar2 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c();
    }
  }
  else {
    param_2[2] = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  param_2 = param_2 + 3;
  plVar1 = *(longlong **)(*param_1 + 8);
  puVar2 = *(undefined4 **)plVar1[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)plVar1[1])[1]) {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001401e03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    return;
  }
  FUN_14572512c(plVar1,param_2);
  return;
}



// FUNCTION 1401e0402 FUN_1401e0402 body=184 status=ok
// SIG undefined FUN_1401e0402(void)

void FUN_1401e0402(void)

{
  FUN_1401e04ba();
  return;
}



// FUNCTION 1401e04ba FUN_1401e04ba body=336 status=ok
// SIG undefined FUN_1401e04ba(void)

void FUN_1401e04ba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float param_6,float param_7,float param_8,float param_9,
                  undefined4 *param_10,longlong param_11,uint param_12)

{
  undefined1 auStack_108 [40];
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_70 = (double)param_9;
  local_78 = (double)param_8;
  local_80 = (double)param_7;
  local_88 = (double)param_6;
  if (param_11 == 0) {
    param_11 = DAT_14ca94e18;
  }
  local_b8 = 0;
  local_c0 = 0;
  local_e0 = &PTR_FUN_14aaeb770;
  local_98 = param_5;
  local_90 = 0x3f800000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = DAT_14c8463f0;
  uStack_38 = DAT_14c8463f8;
  local_b0 = *param_10;
  uStack_ac = param_10[1];
  uStack_a8 = param_10[2];
  uStack_a4 = param_10[3];
  local_c8 = (ulonglong)param_12 << 0x20;
  local_d8 = param_2;
  local_d0 = param_3;
  local_a0 = param_4;
  local_68 = param_11;
  FUN_1405054c0(&local_e0,param_1);
  if (*(int *)(param_1 + 0xac) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_108);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e062e FUN_1401e062e body=158 status=ok
// SIG undefined FUN_1401e062e(void)

void FUN_1401e062e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  local_48 = param_1 + 0x20;
  local_40 = param_1 + 0x28;
  FUN_1401e06ce(&local_38,*(longlong *)(param_1 + 0x20) != 0,param_2,param_2);
  FUN_1401e07f0(param_1,param_2);
  if (local_28 == '\x01') {
    FUN_1447d2706(local_38 + 0x148,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e06ce FUN_1401e06ce body=289 status=ok
// SIG undefined FUN_1401e06ce(void)

undefined8 *
FUN_1401e06ce(undefined8 *param_1,char param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = *(undefined8 *)(param_3 + 8);
  param_1[1] = 0;
  *(char *)(param_1 + 2) = param_2;
  if (param_2 != '\0') {
    plVar4 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14a42d8e0;
    plVar1 = plVar4 + 2;
    FUN_144b205cc(plVar1,param_4,*param_5,*param_6);
    uVar3 = DAT_14caccb08;
    local_50 = plVar1;
    local_48 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      FUN_1447d2a40(param_1,param_3,&local_50,DAT_14caccb08);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_1447d2a40(param_1,param_3,&local_50,uVar3);
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e07f0 FUN_1401e07f0 body=424 status=ok
// SIG undefined FUN_1401e07f0(void)

void FUN_1401e07f0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined1 local_c8 [24];
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  undefined8 local_74;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a8 = (double)*(float *)(param_1 + 0x1c);
  local_b0 = (double)*(float *)(param_1 + 0x18);
  local_a0 = 0;
  uVar1 = param_2[10];
  local_d8 = CONCAT44(local_d8._4_4_,uVar1);
  FUN_1448d6690(*(undefined8 *)(param_1 + 0x30),local_c8,param_1 + 0x48);
  local_d8 = param_1 + 0x68;
  FUN_1401e099a(*(undefined8 *)(param_1 + 0x30),local_c8,uVar1,param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x60);
  if (0 < iVar2) {
    lVar6 = 0x10;
    lVar5 = 0;
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + -0x10 + lVar6) * 0x10;
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar3);
      if (plVar4 != (longlong *)0x0) {
        local_78 = *(float *)(*(longlong *)(param_1 + 0x58) + lVar6) * (float)param_2[8];
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x38) + lVar3);
        uStack_84 = (undefined4)plVar7[1];
        local_98 = *param_2;
        uStack_94 = param_2[1];
        uStack_90 = param_2[2];
        uStack_8c = param_2[3];
        local_88 = param_2[4];
        uStack_80 = param_2[5];
        uStack_7c = param_2[7];
        local_6c = param_2[0xb];
        local_74 = *(undefined8 *)(param_2 + 9);
        if ((plVar4[1] != 0) && ((*(byte *)(plVar4[1] + 0x24) & 7) != 0)) {
          FUN_144b1fcbe(&local_98);
          FUN_144b1fd46(&local_98,*plVar7);
          FUN_144b1fe18(&local_98,*plVar7);
          plVar4 = (longlong *)*plVar7;
        }
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_98);
        iVar2 = *(int *)(param_1 + 0x60);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x60;
    } while (lVar5 < iVar2);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e099a FUN_1401e099a body=299 status=ok
// SIG undefined FUN_1401e099a(void)

undefined4
FUN_1401e099a(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dwTlsIndex = DAT_14c7612e8;
  if (DAT_14c7612e8 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar5 = DAT_14c7612e8 != 0xffffffff;
    DVar2 = dwTlsIndex;
    if (bVar5) {
      DVar4 = DAT_14c7612e8;
      DVar2 = DAT_14c7612e8;
    }
    DAT_14c7612e8 = DVar2;
    UNLOCK();
    if (bVar5) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar4;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1401e19e0(&local_51);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_60 = param_5;
  local_68 = param_4;
  uVar3 = FUN_1448d6e62(param_1,param_2,param_3,(longlong)lpTlsValue + 0x10);
  iVar1 = *(int *)((longlong)lpTlsValue + 0x1c);
  FUN_1448d844e(*(undefined8 *)((longlong)lpTlsValue + 0x10),
                *(undefined4 *)((longlong)lpTlsValue + 0x18));
  *(undefined4 *)((longlong)lpTlsValue + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)lpTlsValue + 0x1c) != 0)) {
    FUN_1405b2360((longlong)lpTlsValue + 0x10,0);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1401e0ac6 FUN_1401e0ac6 body=184 status=ok
// SIG undefined FUN_1401e0ac6(void)

int FUN_1401e0ac6(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 8);
  lVar5 = (longlong)iVar4;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (0.0 < *(float *)(lVar3 + 4 + lVar5 * 8)) {
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 != 0) {
      lVar6 = 0;
      do {
        iVar7 = iVar2;
        if (iVar4 < iVar2) {
          iVar7 = 0;
        }
        if (*(float *)(lVar3 + lVar5 * 8 + 4 + (longlong)iVar7 * -8 + lVar6 * 8) <= 0.0) {
          return iVar4 - iVar7;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 1;
      } while (iVar2 != (int)lVar6);
    }
    lVar5 = (longlong)iVar2;
    *(int *)(param_1 + 0x30) = iVar2 + 5;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar2) < 5) {
      FUN_1401e187e((longlong *)(param_1 + 0x28),iVar2);
      lVar3 = *(longlong *)(param_1 + 0x28);
    }
    puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5 * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + lVar5 * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar3 + 0x20 + lVar5 * 8) = 0;
    iVar4 = iVar2;
  }
  return iVar4;
}



// FUNCTION 1401e0b7e FUN_1401e0b7e body=408 status=ok
// SIG undefined FUN_1401e0b7e(void)

void FUN_1401e0b7e(float *param_1,float param_2,float param_3)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  
  if (0.0 < param_3) {
    param_3 = param_3 * 0.5;
    if (((uint)param_1[1] & 0xfffffffe) == 4) {
      if (param_1[0xc] != 0.0) {
        fVar3 = param_3 + param_2;
        param_2 = param_2 - param_3;
        if ((fVar3 - param_2 != 0.0) || (fVar2 = fVar3, NAN(fVar3 - param_2))) {
          fVar2 = **(float **)(param_1 + 10);
          if (param_2 <= fVar2) {
            if (fVar3 < fVar2) {
              fVar2 = (float)FUN_1447c7e44(fVar2 - fVar3);
              fVar2 = (float)(~-(uint)(fVar2 != 0.0) & (uint)fVar3 |
                             (uint)(param_2 + fVar2) & -(uint)(fVar2 != 0.0));
            }
          }
          else {
            fVar2 = (float)FUN_1447c7e44(param_2 - fVar2);
            fVar2 = (float)((uint)(fVar3 - fVar2) & -(uint)(fVar2 != 0.0) |
                           ~-(uint)(fVar2 != 0.0) & (uint)param_2);
          }
        }
        **(float **)(param_1 + 10) = fVar2;
      }
    }
    else if (0.0 < param_1[3]) {
      fVar3 = param_3 + param_2;
      param_2 = param_2 - param_3;
      if ((fVar3 - param_2 != 0.0) || (fVar2 = fVar3, NAN(fVar3 - param_2))) {
        fVar2 = *param_1;
        if (param_2 <= fVar2) {
          if (fVar3 < fVar2) {
            fVar2 = (float)FUN_1447c7e44(fVar2 - fVar3);
            fVar2 = (float)(~-(uint)(fVar2 != 0.0) & (uint)fVar3 |
                           (uint)(param_2 + fVar2) & -(uint)(fVar2 != 0.0));
          }
        }
        else {
          fVar2 = (float)FUN_1447c7e44(param_2 - fVar2);
          fVar2 = (float)((uint)(fVar3 - fVar2) & -(uint)(fVar2 != 0.0) |
                         ~-(uint)(fVar2 != 0.0) & (uint)param_2);
        }
      }
      fVar3 = fVar2 - *param_1;
      if (((fVar3 != 0.0) || (NAN(fVar3))) && (*param_1 = fVar2, param_1[0xc] != 0.0)) {
        uVar1 = 0;
        do {
          *(float *)(*(longlong *)(param_1 + 10) + uVar1 * 8) =
               *(float *)(*(longlong *)(param_1 + 10) + uVar1 * 8) + fVar3;
          uVar1 = uVar1 + 1;
        } while (uVar1 != (uint)param_1[0xc]);
      }
    }
  }
  return;
}



// FUNCTION 1401e0d16 FUN_1401e0d16 body=1632 status=ok
// SIG undefined FUN_1401e0d16(void)

void FUN_1401e0d16(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                  float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_5 <= 0.0) {
    return;
  }
  param_6 = param_6 * 6.2831855;
  if (param_6 < 1e-08) {
    *param_1 = param_5 * *param_2 + *param_1;
    return;
  }
  fVar3 = *param_3;
  if (1e-08 <= param_7) {
    fVar3 = (2.0 / param_6) * param_7 * *param_4 + fVar3;
    fVar4 = *param_1 - fVar3;
    if (1.0 < param_7) {
      fVar5 = param_7 * param_7 + -1.0;
      if (fVar5 < 0.0) {
        fVar5 = sqrtf(fVar5);
      }
      else {
        fVar5 = SQRT(fVar5);
      }
      fVar5 = fVar5 * param_6;
      param_7 = param_7 * param_6;
      fVar2 = -((param_7 - fVar5) * fVar4 + *param_2) / (fVar5 + fVar5);
      fVar6 = -(fVar5 - param_7) * param_5;
      param_5 = param_5 * (param_7 + fVar5);
      fVar4 = (1.0 / (fVar6 * 0.25724632 * fVar6 * fVar6 +
                     fVar6 * 0.45053902 * fVar6 + fVar6 * 1.0074606 + 1.0)) * (fVar4 - fVar2);
      fVar2 = (1.0 / (param_5 * 0.25724632 * param_5 * param_5 +
                     param_5 * 0.45053902 * param_5 + param_5 * 1.0074606 + 1.0)) * fVar2;
      *param_1 = fVar3 + fVar4 + fVar2;
      *param_2 = fVar4 * (fVar5 - param_7) - fVar2 * (param_7 + fVar5);
      return;
    }
    fVar5 = 1.0;
    if (1.0 <= param_7) {
      fVar5 = *param_2 + fVar4 * param_6;
      fVar2 = param_6 * param_5;
      fVar6 = 1.0 / (fVar2 * 0.25724632 * fVar2 * fVar2 +
                    fVar2 * 0.45053902 * fVar2 + fVar2 * 1.0074606 + 1.0);
      *param_1 = (param_5 * fVar5 + fVar4) * fVar6 + fVar3;
      *param_2 = ((fVar5 - fVar4 * param_6) - fVar2 * fVar5) * fVar6;
      return;
    }
    fVar2 = 1.0 - param_7 * param_7;
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar2 = fVar2 * param_6;
    fVar1 = fVar2 * param_5;
    fVar6 = (fVar4 * param_6 * param_7 + *param_2) / fVar2;
    fVar1 = (float)(longlong)
                   (fVar1 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar1 < 0.0) * 4))
            * -6.2831855 + fVar1;
    if (fVar1 <= 1.5707964) {
      if (-1.5707964 <= fVar1) goto LAB_1401e1208;
      fVar5 = -3.1415927;
    }
    else {
      fVar5 = 3.1415927;
    }
    fVar1 = fVar5 - fVar1;
    fVar5 = -1.0;
LAB_1401e1208:
    fVar8 = fVar1 * fVar1;
    fVar1 = (((((fVar8 * -2.3889859e-08 + 2.7525562e-06) * fVar8 + -0.00019840874) * fVar8 +
              0.008333331) * fVar8 + -0.16666667) * fVar8 + 1.0) * fVar1;
    fVar5 = (((((fVar8 * -2.6051615e-07 + 2.4760495e-05) * fVar8 + -0.0013888378) * fVar8 +
              0.041666638) * fVar8 + -0.5) * fVar8 + 1.0) * fVar5;
    param_5 = param_6 * param_7 * param_5;
    fVar7 = 1.0 / (param_5 * 0.25724632 * param_5 * param_5 +
                  param_5 * 0.45053902 * param_5 + param_5 * 1.0074606 + 1.0);
    fVar8 = (fVar4 * fVar5 + fVar6 * fVar1) * fVar7;
    *param_1 = fVar8;
    *param_2 = (fVar5 * fVar2 * fVar6 - fVar1 * fVar2 * fVar4) * fVar7 - param_6 * fVar8 * param_7;
    *param_1 = fVar3 + *param_1;
    return;
  }
  fVar4 = *param_1;
  param_5 = param_5 * param_6;
  param_5 = (float)(longlong)
                   (param_5 * 0.15915494 +
                   *(float *)(&DAT_14a184448 + (ulonglong)(param_5 < 0.0) * 4)) * -6.2831855 +
            param_5;
  if (param_5 <= 1.5707964) {
    if (-1.5707964 <= param_5) {
      fVar5 = 1.0;
      goto LAB_1401e0f39;
    }
    fVar5 = -3.1415927;
  }
  else {
    fVar5 = 3.1415927;
  }
  param_5 = fVar5 - param_5;
  fVar5 = -1.0;
LAB_1401e0f39:
  fVar2 = param_5 * param_5;
  param_5 = (((((fVar2 * -2.3889859e-08 + 2.7525562e-06) * fVar2 + -0.00019840874) * fVar2 +
              0.008333331) * fVar2 + -0.16666667) * fVar2 + 1.0) * param_5;
  fVar5 = (((((fVar2 * -2.6051615e-07 + 2.4760495e-05) * fVar2 + -0.0013888378) * fVar2 +
            0.041666638) * fVar2 + -0.5) * fVar2 + 1.0) * fVar5;
  *param_1 = (*param_2 / param_6) * param_5 + (fVar4 - fVar3) * fVar5 + fVar3;
  *param_2 = fVar5 * *param_2 - param_6 * param_5 * (fVar4 - fVar3);
  return;
}



// FUNCTION 1401e1376 FUN_1401e1376 body=312 status=ok
// SIG undefined FUN_1401e1376(void)

void FUN_1401e1376(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401e13e0;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1401e13e0:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
  }
  return;
}



// FUNCTION 1401e14ae FUN_1401e14ae body=380 status=ok
// SIG undefined FUN_1401e14ae(void)

void FUN_1401e14ae(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (0.0 < param_7) {
    if (param_8 == '\0') {
      fVar1 = param_5 - param_3;
      if (1e-08 <= fVar1 * fVar1) {
        param_6 = param_6 * param_7;
        if (param_6 <= fVar1) {
          fVar1 = param_6;
        }
        if (fVar1 <= -param_6) {
          fVar1 = -param_6;
        }
        param_5 = fVar1 + param_3;
      }
    }
    else {
      *param_1 = param_3;
      *param_2 = param_4;
      fVar1 = (float)(-(uint)(1.1920929e-07 < param_7) & (uint)(1.0 / (param_7 * 2.7182817)));
      if (0.0001 < fVar1) {
        param_5 = fVar1 * 0.0 + param_5;
        fVar3 = 2.0 / fVar1;
        fVar2 = fVar1 * -0.0 + (*param_1 - param_5);
        fVar4 = (fVar2 * fVar3 + param_4) * param_6;
        param_6 = fVar3 * param_6;
        fVar1 = 1.0 / (param_6 * 0.25724632 * param_6 * param_6 +
                      param_6 * 0.45053902 * param_6 + param_6 * 1.0074606 + 1.0);
        *param_1 = (fVar2 + fVar4) * fVar1 + param_5;
        *param_2 = (*param_2 - fVar4 * fVar3) * fVar1;
        return;
      }
      if (param_6 <= 0.0) {
        *param_1 = param_5;
        *param_2 = 0.0;
        return;
      }
      *param_2 = (param_5 - *param_1) / param_6;
    }
  }
  *param_1 = param_5;
  return;
}



// FUNCTION 1401e162a FUN_1401e162a body=320 status=ok
// SIG undefined FUN_1401e162a(void)

void FUN_1401e162a(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401e1693;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1401e1693:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 1401e176a FUN_1401e176a body=275 status=ok
// SIG undefined FUN_1401e176a(void)

void FUN_1401e176a(longlong param_1,int param_2)

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



// FUNCTION 1401e187e FUN_1401e187e body=353 status=ok
// SIG undefined FUN_1401e187e(void)

void FUN_1401e187e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401e1905;
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
LAB_1401e1905:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1401e19e0 FUN_1401e19e0 body=106 status=ok
// SIG undefined FUN_1401e19e0(void)

undefined8 * FUN_1401e19e0(void)

{
  DWORD DVar1;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb0);
  memset(_Dst,0,0xa0);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(_Dst + 1) = DVar1;
  *_Dst = &PTR_FUN_14a7df7e8;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0x400000000;
  _Dst[2] = 0;
  _Dst[3] = 0;
  _Dst[4] = 0;
  _Dst[5] = 0;
  return _Dst;
}



// FUNCTION 1401e1a4a FUN_1401e1a4a body=236 status=ok
// SIG undefined FUN_1401e1a4a(void)

undefined4 FUN_1401e1a4a(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  uVar6 = (**(code **)(*param_1 + 0x68))();
  if ((char)uVar6 != '\0') {
    plVar3 = (longlong *)param_1[-0x13b];
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(param_1[-0x1b5] + 0x718))(param_1 + -0x1b5,param_2,param_2 + 0x18);
    }
    else {
      (**(code **)(*plVar3 + 0x588))(plVar3,param_2);
      *(undefined4 *)(param_2 + 200) = 0x43c80000;
      lVar8 = plVar3[0x39];
      if (lVar8 == 0) {
        puVar7 = &DAT_14c8464e0;
        uVar9 = DAT_14c8464f0;
      }
      else {
        puVar7 = (undefined8 *)(lVar8 + 0x260);
        uVar9 = *(undefined8 *)(lVar8 + 0x270);
      }
      uVar1 = *(undefined4 *)((longlong)puVar7 + 4);
      uVar4 = *(undefined4 *)(puVar7 + 1);
      uVar5 = *(undefined4 *)((longlong)puVar7 + 0xc);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)puVar7;
      *(undefined4 *)(param_2 + 0x34) = uVar1;
      *(undefined4 *)(param_2 + 0x38) = uVar4;
      *(undefined4 *)(param_2 + 0x3c) = uVar5;
      *(undefined8 *)(param_2 + 0x40) = uVar9;
      uVar1 = *(undefined4 *)((longlong)plVar3 + 0xc);
      iVar2 = *(int *)(param_2 + 0xc0);
      *(uint *)(param_2 + 0xc0) = iVar2 + 1U;
      if (*(uint *)(param_2 + 0xc4) < iVar2 + 1U) {
        FUN_1447de67e(param_2 + 0xa8,iVar2);
      }
      lVar8 = param_2 + 0xa8;
      if (*(longlong *)(param_2 + 0xb8) != 0) {
        lVar8 = *(longlong *)(param_2 + 0xb8);
      }
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 4) = uVar1;
    }
  }
  return uVar6;
}



// FUNCTION 1401e1b6a FUN_1401e1b6a body=119 status=ok
// SIG undefined FUN_1401e1b6a(void)

undefined8 FUN_1401e1b6a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x88))(plVar2);
    (**(code **)(*plVar2 + 0x80))(plVar2,4);
    FUN_1401e1be1(plVar2,param_2,param_3);
    (**(code **)(*plVar2 + 0x80))(plVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001401e1bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1401e1be1 FUN_1401e1be1 body=648 status=ok
// SIG undefined FUN_1401e1be1(void)

void FUN_1401e1be1(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  size_t sVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  wchar_t *_Str;
  undefined1 auStack_128 [36];
  int local_104;
  longlong local_100 [2];
  wchar_t *local_f0;
  int local_e8;
  undefined8 local_e0 [16];
  undefined8 *local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  (**(code **)(*param_1 + 0x28))();
  if (DAT_14cb90f60 != DAT_14cb90f8c) {
    uVar6 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    puVar4 = &DAT_14cb90f90;
    if (DAT_14cb90f98 != (undefined *)0x0) {
      puVar4 = DAT_14cb90f98;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14cb90fa0 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14cb90f58 + (longlong)iVar2 * 0x18);
      if (*puVar1 == param_3) {
        if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
          (*(code *)puVar1[1])(param_1,param_2);
          goto LAB_1401e1d21;
        }
        break;
      }
      iVar2 = (int)puVar1[2];
    }
  }
  local_104 = (**(code **)(*param_1 + 0x88))(param_1);
  local_e0[0] = *(undefined8 *)(param_3 + 0x18);
  FUN_1400021e4(local_e0,&local_f0);
  _Str = local_f0;
  if (local_e8 == 0) {
    _Str = L"";
  }
  local_60 = (undefined8 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
    local_50 = FUN_14475aa65(0,_Str,sVar3 & 0xffffffff);
    uVar6 = local_50 + 1;
    puVar5 = (undefined8 *)0x0;
    if (0x80 < uVar6) {
      FUN_1446efa72(&local_60,0,uVar6,1);
      puVar5 = local_60;
    }
    local_58 = local_e0;
    if (puVar5 != (undefined8 *)0x0) {
      local_58 = puVar5;
    }
    FUN_14475a98a(local_58,uVar6,_Str,(int)sVar3 + 1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,local_100,local_58,param_2);
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_100[0] != 0) {
    FUN_14475ab45(param_1,param_2,param_3,local_104 == 0);
    FUN_140066842(param_1,param_3);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)local_100);
  if (local_f0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1401e1d21:
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e1e6a FUN_1401e1e6a body=91 status=ok
// SIG undefined FUN_1401e1e6a(void)

void FUN_1401e1e6a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  cVar3 = *(char *)((longlong)param_1 + 0x19);
  while (cVar3 == '\0') {
    FUN_1401e1e6a(param_1[2]);
    plVar4 = (longlong *)*param_1;
    plVar5 = (longlong *)param_1[5];
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    FUN_1400020a8(param_1);
    param_1 = plVar4;
    cVar3 = *(char *)((longlong)plVar4 + 0x19);
  }
  return;
}



// FUNCTION 1401e1ec6 FUN_1401e1ec6 body=21 status=ok
// SIG undefined FUN_1401e1ec6(void)

void FUN_1401e1ec6(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401e1ed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1401e1edc FUN_1401e1edc body=29 status=ok
// SIG undefined FUN_1401e1edc(void)

undefined8 FUN_1401e1edc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401e1efa FUN_1401e1efa body=97 status=ok
// SIG undefined FUN_1401e1efa(void)

void FUN_1401e1efa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    FUN_1401d7f10(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 8));
    FUN_1400020a8(*(undefined8 *)(lVar3 + 0x10));
    plVar4 = *(longlong **)(lVar3 + 8);
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
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 1401e1f72 FUN_1401e1f72 body=29 status=ok
// SIG undefined FUN_1401e1f72(void)

undefined8 FUN_1401e1f72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401e1f90 FUN_1401e1f90 body=75 status=ok
// SIG undefined FUN_1401e1f90(void)

void FUN_1401e1f90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 8);
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
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 1401e1ff2 FUN_1401e1ff2 body=29 status=ok
// SIG undefined FUN_1401e1ff2(void)

undefined8 FUN_1401e1ff2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401e2010 FUN_1401e2010 body=213 status=ok
// SIG undefined FUN_1401e2010(void)

void FUN_1401e2010(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x98);
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar2;
    FUN_1400020a8();
  }
  FUN_1400020a8(*(undefined8 *)(lVar1 + 0x98));
  lVar3 = *(longlong *)(lVar1 + 0x80);
  if (lVar3 != 0) {
    lVar4 = lVar3;
    if ((0xfff < (ulonglong)(*(longlong *)(lVar1 + 0x90) - lVar3)) &&
       (lVar4 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar4))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar4);
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined8 *)(lVar1 + 0x88) = 0;
    *(undefined8 *)(lVar1 + 0x90) = 0;
  }
  FUN_1401e20e6(lVar1 + 0x60);
  FUN_1401d9a90(lVar1 + 0x40);
  FUN_1401d9a90(lVar1 + 0x18);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1401e20e6 FUN_1401e20e6 body=86 status=ok
// SIG undefined FUN_1401e20e6(void)

void FUN_1401e20e6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1401e213e FUN_1401e213e body=278 status=ok
// SIG undefined FUN_1401e213e(void)

undefined8 FUN_1401e213e(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_1401e224d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1401e224d;
    }
    FUN_1400841de(param_1 + 0x18,&local_38);
  }
  else {
LAB_1401e224d:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1401e2201;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_1401e2201;
    }
  }
  uVar6 = 0;
LAB_1401e2201:
  if (local_38 != 0) {
    FUN_140113f3a(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e2262 FUN_1401e2262 body=421 status=ok
// SIG undefined FUN_1401e2262(void)

void FUN_1401e2262(longlong param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*(char *)(param_1 + 0x404) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      dVar6 = 1.0;
      dVar5 = 1.0;
      dVar7 = 1.0;
    }
    else {
      dVar5 = *(double *)(lVar1 + 0x280);
      dVar7 = *(double *)(lVar1 + 0x288);
      dVar6 = *(double *)(lVar1 + 0x290);
    }
    dVar2 = *(double *)(param_1 + 0x450);
    dVar3 = *(double *)(param_1 + 0x440);
    dVar4 = *(double *)(param_1 + 0x448);
    dVar7 = dVar7 * *(double *)(param_1 + 0x410);
    dVar5 = dVar5 * *(double *)(param_1 + 0x408);
    dVar6 = dVar6 * *(double *)(param_1 + 0x418) * 0.5;
    goto LAB_1401e22dd;
  }
  if (*DAT_14cb49958 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 != 0) {
      dVar2 = *(double *)(lVar1 + 0x270);
      dVar3 = *(double *)(lVar1 + 0x260);
      dVar4 = *(double *)(lVar1 + 0x268);
      goto LAB_1401e22b5;
    }
    dVar5 = 1.0;
    dVar7 = 1.0;
    dVar2 = DAT_14c8464f0;
    dVar3 = DAT_14c8464e0;
    dVar4 = DAT_14c8464e8;
  }
  else {
    dVar2 = *(double *)(param_1 + 1000);
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    dVar3 = *(double *)(param_1 + 0x3d8);
    dVar4 = *(double *)(param_1 + 0x3e0);
    if (lVar1 == 0) {
      dVar5 = 1.0;
      dVar7 = 1.0;
    }
    else {
LAB_1401e22b5:
      dVar5 = *(double *)(lVar1 + 0x280);
      dVar7 = *(double *)(lVar1 + 0x288);
    }
  }
  dVar7 = dVar7 * *(double *)(param_1 + 0x3d0);
  dVar5 = *(double *)(param_1 + 0x3c8) * dVar5;
  dVar6 = 0.0;
LAB_1401e22dd:
  *param_2 = dVar3 - dVar5 * 0.5;
  param_2[1] = dVar4 - dVar7 * 0.5;
  param_2[2] = dVar2 - dVar6;
  param_2[3] = dVar3 + dVar5 * 0.5;
  param_2[4] = dVar4 + dVar7 * 0.5;
  param_2[5] = dVar2 + dVar6;
  *(undefined1 *)(param_2 + 6) = 1;
  return;
}



// FUNCTION 1401e2408 FUN_1401e2408 body=228 status=ok
// SIG undefined FUN_1401e2408(void)

longlong FUN_1401e2408(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa18a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417919a4;
    local_20 = &LAB_14587d9ba;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_14744fca7;
    local_40 = &LAB_140cd33d9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x820;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeComponent",&DAT_14caa18a8,FUN_146322ae4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa18a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e24ee FUN_1401e24ee body=167 status=ok
// SIG undefined FUN_1401e24ee(void)

void FUN_1401e24ee(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_70;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_88 = &local_28;
  local_18 = param_4[2];
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *(undefined8 *)(param_3 + 4);
  local_60 = &local_9;
  local_68 = &DAT_14cad0f08;
  local_78 = param_6;
  uStack_70 = param_7;
  local_80 = param_5;
  FUN_1401e2596(param_6,local_48,&local_49);
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e2596 FUN_1401e2596 body=425 status=ok
// SIG undefined FUN_1401e2596(void)

undefined8
FUN_1401e2596(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') {
      cVar1 = FUN_144a61b4f();
      if ((cVar1 != '\0') ||
         (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002)) {
        local_98 = param_5[2];
        local_f8 = &local_a8;
        local_a8 = *param_5;
        uStack_a0 = param_5[1];
        local_c8 = *param_4;
        uStack_c4 = param_4[1];
        uStack_c0 = param_4[2];
        uStack_bc = param_4[3];
        local_b8 = *(undefined8 *)(param_4 + 4);
        local_d0 = param_10;
        local_d8 = param_9;
        local_e0 = param_8;
        local_e8 = param_7;
        local_f0 = param_6;
        uVar2 = FUN_1434285d1(param_1,param_2,param_3);
        goto LAB_1401e267a;
      }
    }
    local_58 = param_5[2];
    local_f8 = &local_68;
    local_68 = *param_5;
    uStack_60 = param_5[1];
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = param_4[2];
    uStack_7c = param_4[3];
    local_78 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_1401e2740(param_1,param_2,param_3);
  }
LAB_1401e267a:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e2740 FUN_1401e2740 body=548 status=ok
// SIG undefined FUN_1401e2740(void)

undefined8
FUN_1401e2740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  bVar5 = true;
  local_158 = &local_c9;
  local_c9 = '\x01';
  local_a4 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_b8 = 0;
  local_ac = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  local_d8 = param_5[2];
  local_e8 = *param_5;
  uStack_e0 = param_5[1];
  local_f8 = *(undefined8 *)(param_4 + 4);
  local_108 = *param_4;
  uStack_104 = param_4[1];
  uStack_100 = param_4[2];
  uStack_fc = param_4[3];
  local_160 = param_9;
  local_168 = param_8;
  local_170 = param_7;
  local_178 = param_6;
  local_150 = &local_c8;
  uVar2 = FUN_14344579d(param_1,param_2);
  if (local_c9 == '\x01') {
    uVar2 = 10;
    do {
      local_118 = param_5[2];
      local_128 = *param_5;
      uStack_120 = param_5[1];
      local_148 = *param_4;
      uStack_144 = param_4[1];
      uStack_140 = param_4[2];
      uStack_13c = param_4[3];
      local_138 = *(undefined8 *)(param_4 + 4);
      local_158 = &local_c9;
      local_160 = param_9;
      local_168 = param_8;
      local_178 = param_6;
      local_170 = &local_c8;
      local_150 = &local_c8;
      uVar3 = FUN_14344579d(param_1,param_2,&local_148,&local_128);
      uVar4 = (ulonglong)uVar3;
      bVar5 = 1 < uVar2;
      if (local_c9 != '\x01') break;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  else {
    uVar4 = (ulonglong)uVar2;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar5);
}



// FUNCTION 1401e2966 FUN_1401e2966 body=83 status=ok
// SIG undefined FUN_1401e2966(void)

undefined4 FUN_1401e2966(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0xa8);
    EnterCriticalSection(lpCriticalSection);
    uVar1 = FUN_1448db474(param_1 + 8,param_2);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1401e29ba FUN_1401e29ba body=116 status=ok
// SIG undefined FUN_1401e29ba(void)

undefined4 FUN_1401e29ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        uVar7 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return uVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001401e2a11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 1401e2a2e FUN_1401e2a2e body=347 status=ok
// SIG undefined FUN_1401e2a2e(void)

undefined8 FUN_1401e2a2e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_58 [40];
  int local_30;
  int iStack_2c;
  ulonglong local_28;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x310) != 0) && (*(longlong **)(param_1 + 0x308) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x310) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x308);
      }
      lVar3 = (**(code **)(*plVar2 + 0x58))();
      *(longlong *)(param_1 + 0x2f8) = lVar3;
      goto LAB_1401e2a5d;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x2f8);
LAB_1401e2a5d:
  if (lVar3 == 0) {
    fVar7 = 1.0;
    uVar8 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_1401e2c50();
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar4 = plVar2[0x22];
    }
    (**(code **)(*(longlong *)(lVar3 + 200) + 0x10))(lVar3 + 200,&local_30);
    if (*(char *)(param_1 + 0x3f0) == '\x01') {
      fVar5 = (float)FUN_1401e2bac(lVar4,*(undefined8 *)(param_1 + 1000));
      fVar9 = (float)iStack_2c / (float)*(int *)(param_1 + 0x3ec);
      fVar7 = (float)local_30 / (float)*(int *)(param_1 + 1000);
      if (fVar9 <= fVar7) {
        fVar7 = fVar9;
      }
      uVar6 = CONCAT44(uVar8,fVar7 * fVar5);
    }
    else {
      uVar6 = FUN_1401e2bac(lVar4,CONCAT44(iStack_2c,local_30));
    }
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    fVar7 = (float)uVar6 / *(float *)(lVar3 + 0x1e8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT44(uVar8,fVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e2b8a FUN_1401e2b8a body=34 status=ok
// SIG undefined FUN_1401e2b8a(void)

undefined8 FUN_1401e2b8a(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + -0xc0) + 0x28))(param_1 + -0xc0);
  return param_2;
}



// FUNCTION 1401e2bac FUN_1401e2bac body=162 status=ok
// SIG undefined FUN_1401e2bac(void)

void FUN_1401e2bac(longlong param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(char *)(param_1 + 0x2a8) == '\x01') && (*(int *)(param_1 + 0x2a0) == (int)param_2)) &&
     (*(int *)(param_1 + 0x2a4) == (int)((ulonglong)param_2 >> 0x20))) {
    fVar1 = *(float *)(param_1 + 0x2ac);
  }
  else {
    fVar1 = (float)FUN_1456e1c9a(param_1,param_2,&local_21);
    if (local_21 == '\0') {
      *(float *)(param_1 + 0x2ac) = fVar1;
      *(undefined8 *)(param_1 + 0x2a0) = param_2;
      *(undefined1 *)(param_1 + 0x2a8) = 1;
    }
  }
  fVar1 = fVar1 * *(float *)(param_1 + 0x1c0);
  if (fVar1 <= 0.01) {
    fVar1 = 0.01;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar1);
}



// FUNCTION 1401e2c50 FUN_1401e2c50 body=228 status=ok
// SIG undefined FUN_1401e2c50(void)

longlong FUN_1401e2c50(void)

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
  if (DAT_14cb0dbf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_147d8a94d;
    local_40 = &LAB_1461131bc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"UserInterfaceSettings",&DAT_14cb0dbf0,FUN_14640ac22);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0dbf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e2d36 FUN_1401e2d36 body=19 status=ok
// SIG undefined FUN_1401e2d36(void)

longlong FUN_1401e2d36(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80) + 0x30;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  return lVar1;
}



// FUNCTION 1401e2d4a FUN_1401e2d4a body=253 status=ok
// SIG undefined FUN_1401e2d4a(void)

void FUN_1401e2d4a(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1448e9c5c(*(longlong *)(param_1 + 0x2b8),
                *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + 0x90));
  fVar1 = *(float *)(param_1 + 0x130);
  lVar2 = param_1 + 0x128;
  if (fVar1 != 0.0) {
    lVar2 = param_1 + 0x130;
  }
  if (NAN(fVar1)) {
    lVar2 = param_1 + 0x130;
  }
  local_68 = *(undefined4 *)(param_1 + 0x128 + (ulonglong)(-(uint)(fVar1 != 0.0) & 1) * 8);
  local_64 = *(undefined4 *)(lVar2 + 4);
  local_70 = 0;
  FUN_1401e2e48(param_1 + -0x268,local_60);
  local_80 = *(undefined1 *)(param_2 + 0x38);
  local_88 = *(undefined8 *)(param_2 + 0x20);
  local_98 = *(undefined8 *)(param_2 + 0x28);
  local_90 = 0;
  FUN_14016eaf2(param_1 + -0x268,*(undefined8 *)(param_2 + 0x18),local_60,&local_70);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e2e48 FUN_1401e2e48 body=275 status=ok
// SIG undefined FUN_1401e2e48(void)

undefined8 FUN_1401e2e48(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
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
  local_70 = (float)(**(code **)(*DAT_14c968098 + 0x58))();
  fVar2 = 1.0;
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
    fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x510) + 0xf8))();
  }
  local_70 = local_70 * fVar2;
  local_6c = 0;
  uVar1 = (ulonglong)(-(uint)(*(float *)(param_1 + 0x398) != 0.0) & 1);
  local_74 = *(float *)(param_1 + 0x394 + uVar1 * 8) * (1.0 / local_70);
  local_78 = (1.0 / local_70) * *(float *)(param_1 + 0x390 + uVar1 * 8);
  local_88 = &local_58;
  local_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = 0;
  local_64 = 0x3f800000;
  local_5c = 0;
  local_80 = 0;
  FUN_1401272be(param_2);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e2f5c FUN_1401e2f5c body=70 status=ok
// SIG undefined FUN_1401e2f5c(void)

bool FUN_1401e2f5c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = FUN_1401e2fa2();
  if (cVar2 == '\0') {
    if (((*(byte *)(param_1 + 0x358) & 1) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8), lVar1 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = *(longlong *)(lVar1 + 0x120) != 0;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}



// FUNCTION 1401e2fa2 FUN_1401e2fa2 body=482 status=ok
// SIG undefined FUN_1401e2fa2(void)

ulonglong FUN_1401e2fa2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((*(longlong *)(param_1 + 0x110) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x110) + 0x1fb) != '\x02')) goto LAB_1401e2fe7;
  if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
LAB_1401e2fe5:
    uVar5 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (lVar1 != 0) {
      if ((*(int *)(lVar1 + 0x3d4) < 0) &&
         ((lVar6 = *(longlong *)(lVar1 + 0xb0), lVar6 != 0 ||
          (lVar6 = FUN_1448abda6(lVar1), lVar6 != 0)))) {
        fVar8 = (float)*(double *)(lVar6 + 0x6d0);
      }
      else {
        fVar8 = *(float *)(lVar1 + 0x3c4);
      }
      if (*(double *)(lVar3 + 0x6d0) - (double)fVar8 <= 0.4099999964237213) goto LAB_1401e2fe5;
    }
    local_58 = 0;
    uStack_50 = 0;
    uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    FUN_1407329d4(*(undefined8 *)(param_1 + 0x110),1,&local_58);
    lVar1 = local_58;
    lVar6 = (longlong)(int)uStack_50;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar7);
        if (lVar2 != 0) {
          lVar4 = FUN_144a3a302();
          if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
             ((*(byte *)(lVar2 + 0x9c) & 1) != 0)) {
            if ((*(int *)(lVar2 + 0x3d4) < 0) &&
               ((lVar4 = *(longlong *)(lVar2 + 0xb0), lVar4 != 0 ||
                (lVar4 = FUN_1448abda6(lVar2), lVar4 != 0)))) {
              fVar8 = (float)*(double *)(lVar4 + 0x6d0);
            }
            else {
              fVar8 = *(float *)(lVar2 + 0x3c4);
            }
            if (*(double *)(lVar3 + 0x6d0) - (double)fVar8 <= 0.4099999964237213) {
              uVar5 = 0;
              goto LAB_1401e3140;
            }
          }
        }
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
      uVar5 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
LAB_1401e3140:
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
LAB_1401e2fe7:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1401e3186 FUN_1401e3186 body=161 status=ok
// SIG undefined FUN_1401e3186(void)

void FUN_1401e3186(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_1 + 0x88);
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x68))(plVar3,&local_28);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0xd8))();
    }
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e3228 FUN_1401e3228 body=251 status=ok
// SIG undefined FUN_1401e3228(void)

void FUN_1401e3228(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8e488) {
    FUN_144b3d300(&DAT_14cb8e488);
    if (DAT_14cb8e488 == -1) {
      FUN_1446f470e(&DAT_14cb8e480,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_14cb8e488);
    }
  }
  uVar1 = DAT_14cb8e480;
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
  plVar2 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001401e329c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2,*param_1,*(code **)(*plVar2 + 0x50));
  return;
}



// FUNCTION 1401e3324 FUN_1401e3324 body=202 status=ok
// SIG undefined FUN_1401e3324(void)

undefined8 FUN_1401e3324(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144830a4e(param_1,&local_28,param_2);
  if (local_28 != 0) {
    if ((((*(byte *)(local_28 + 0x31) & 1) != 0) || (DAT_14c86a9f8 != '\x01')) ||
       (iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar3 == 2)) {
LAB_1401e3358:
      uVar6 = *(undefined8 *)(local_28 + 0x28);
      goto LAB_1401e3391;
    }
    if (iVar3 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1401e3358;
    }
  }
  uVar6 = 0;
LAB_1401e3391:
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1401e33f0 FUN_1401e33f0 body=1028 status=ok
// SIG undefined FUN_1401e33f0(void)

longlong * FUN_1401e33f0(longlong param_1,undefined8 param_2)

{
  longlong **pplVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar3;
  uint uVar4;
  longlong **pplVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong *local_90;
  longlong **local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_5c [4];
  longlong *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar10 = (longlong *)0x0;
  local_70 = 0;
  local_98 = &local_78;
  local_78 = 0;
  local_68 = param_2;
  FUN_140a6868c(param_1,&local_80,&local_68,&local_70);
  lVar11 = local_70;
  local_88 = (longlong **)0x0;
  if (local_70 == 0) goto LAB_1401e3796;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x108);
  EnterCriticalSection(lpCriticalSection);
  FUN_143e6f09a(&local_58,param_1 + 0xb8,&local_80);
  pplVar5 = local_50;
  local_90 = local_58;
  if (local_50 != (longlong **)0x0) {
    local_88 = local_50;
  }
  if (local_58 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    cVar6 = FUN_14154b114(&local_70);
    if (cVar6 != '\0') {
      uVar12 = (uint)lVar11;
      iVar8 = (int)((ulonglong)lVar11 >> 0x20);
      uVar4 = (uint)((ulonglong)lVar11 >> 0x10);
      if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
        lVar9 = param_1 + 0xa0;
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          lVar9 = *(longlong *)(param_1 + 0xa8);
        }
        iVar7 = *(int *)(lVar9 + (ulonglong)
                                 (*(int *)(param_1 + 0xb0) - 1U &
                                 iVar8 + (uVar12 << 0x10 | uVar12 & 0xffff) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + ((uVar12 & 0xffff) >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar10 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar7 * 0x18);
            if (*plVar10 == lVar11) {
              if (plVar10 != (longlong *)0x0) {
                plVar10 = plVar10 + 1;
                goto LAB_1401e3619;
              }
              break;
            }
            iVar7 = (int)plVar10[2];
          } while (iVar7 != -1);
        }
      }
      FUN_1400021e4(&local_70,&local_58);
      lVar9 = FUN_143e6ef68(&local_58,param_1 + 0x180);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if ((lVar9 != 0) && (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c))) {
        lVar9 = param_1 + 0xa0;
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          lVar9 = *(longlong *)(param_1 + 0xa8);
        }
        iVar8 = *(int *)(lVar9 + (ulonglong)
                                 (*(int *)(param_1 + 0xb0) - 1U &
                                 iVar8 + (uVar12 << 0x10 | uVar12 & 0xffff) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + ((uVar12 & 0xffff) >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar8 * 0x18);
            if (*plVar3 == lVar11) {
              plVar10 = plVar3 + 1;
              if (plVar10 != (longlong *)0x0 && plVar3 != (longlong *)0x0) goto LAB_1401e3619;
              break;
            }
            iVar8 = (int)plVar3[2];
          } while (iVar8 != -1);
        }
      }
    }
  }
LAB_1401e3761:
  LeaveCriticalSection(lpCriticalSection);
  goto LAB_1401e376a;
LAB_1401e3619:
  plVar10 = (longlong *)*plVar10;
  if (plVar10 == (longlong *)0x0) goto LAB_1401e3761;
  (**(code **)(*plVar10 + 8))(plVar10,&local_58,local_78);
  pplVar1 = local_50;
  local_90 = local_58;
  local_58 = (longlong *)0x0;
  if (local_50 == pplVar5) {
LAB_1401e3689:
    pplVar5 = local_50;
    if (local_50 != (longlong **)0x0) {
      LOCK();
      pplVar1 = local_50 + 1;
      *(int *)pplVar1 = *(int *)pplVar1 + -1;
      UNLOCK();
      if (*(int *)pplVar1 == 0) {
        (*(code *)**local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)pplVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar5)[2])(pplVar5);
        }
      }
    }
  }
  else {
    local_50 = (longlong **)0x0;
    local_88 = pplVar1;
    if (pplVar5 != (longlong **)0x0) {
      LOCK();
      pplVar1 = pplVar5 + 1;
      *(int *)pplVar1 = *(int *)pplVar1 + -1;
      UNLOCK();
      if (*(int *)pplVar1 == 0) {
        (*(code *)**pplVar5)(pplVar5);
        LOCK();
        piVar2 = (int *)((longlong)pplVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar5)[2])(pplVar5);
        }
      }
      goto LAB_1401e3689;
    }
  }
  if (local_90 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
      uVar4 = (uint)((ulonglong)local_80 >> 0x10);
      uVar12 = (uint)local_80 & 0xffff;
      lVar11 = param_1 + 0x168;
      if (*(longlong *)(param_1 + 0x170) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x170);
      }
      iVar8 = *(int *)(lVar11 + (ulonglong)
                                (*(int *)(param_1 + 0x178) - 1U &
                                (int)((ulonglong)local_80 >> 0x20) +
                                ((uint)local_80 << 0x10 | uVar12) + (uVar4 << 0x13 | uVar4 & 0xffff)
                                + (uVar12 >> 4)) * 4);
      if (iVar8 != -1) {
        lVar11 = *(longlong *)(param_1 + 0x130);
        do {
          if (*(longlong *)(lVar11 + (longlong)iVar8 * 0x10) == local_80) goto LAB_1401e3761;
          iVar8 = *(int *)((longlong)iVar8 * 0x10 + lVar11 + 8);
        } while (iVar8 != -1);
      }
    }
    FUN_144a13f80((longlong *)(param_1 + 0x130),&local_58,&local_80,0);
    goto LAB_1401e3761;
  }
  local_50 = &local_90;
  local_58 = &local_80;
  FUN_146011312(param_1 + 0xb8,local_5c);
  LeaveCriticalSection(lpCriticalSection);
  FUN_1489bddae(local_90);
LAB_1401e376a:
  pplVar5 = local_88;
  plVar10 = local_90;
  if (local_88 != (longlong **)0x0) {
    LOCK();
    pplVar1 = local_88 + 1;
    *(int *)pplVar1 = *(int *)pplVar1 + -1;
    UNLOCK();
    if (*(int *)pplVar1 == 0) {
      (*(code *)**local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)pplVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pplVar5)[2])(pplVar5);
      }
    }
  }
LAB_1401e3796:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar10;
}



// FUNCTION 1401e37f5 FUN_1401e37f5 body=71 status=ok
// SIG undefined FUN_1401e37f5(void)

void FUN_1401e37f5(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((((0 < *(int *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) &&
      (lVar1 = *(longlong *)(*param_2 + 8), (*(byte *)(lVar1 + 0x60) & 2) == 0)) &&
     (((*(char *)(lVar1 + 0xd0) == '\x01' && (lVar1 = *(longlong *)(lVar1 + 0x348), lVar1 != 0)) &&
      ((*(char *)(lVar1 + 8) != '\0' && (*(longlong *)(lVar1 + 0x198) != 0)))))) {
    return;
  }
  FUN_1448e2c77(param_1,0);
  return;
}



// FUNCTION 1401e383c FUN_1401e383c body=15 status=ok
// SIG undefined FUN_1401e383c(void)

void FUN_1401e383c(undefined8 *param_1)

{
  FUN_1401e384c(&DAT_14ca8cb58,*param_1);
  return;
}



// FUNCTION 1401e384c FUN_1401e384c body=317 status=ok
// SIG undefined FUN_1401e384c(void)

void FUN_1401e384c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    iVar1 = *(int *)(param_1 + 0x120);
    if ((longlong)iVar1 == 0) {
      uVar2 = FUN_14001cc68(0x58,0x10);
      FUN_1446f470e(&local_38,L"GPUMessageManager.Readback",1);
      FUN_1402593fa(uVar2,local_38);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x118);
      if (*(longlong *)(param_1 + 0x118) == 0) {
        lVar3 = param_1 + 0xd8;
      }
      uVar2 = *(undefined8 *)(lVar3 + -8 + (longlong)iVar1 * 8);
      *(int *)(param_1 + 0x120) = iVar1 + -1;
      FUN_1401e398a();
    }
    FUN_1401e3a19(param_2,uVar2,*(undefined8 *)(param_1 + 0x128),0);
    iVar1 = *(int *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xd0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xd4) < iVar1 + 1U) {
      FUN_147423338(param_1 + 0x88,iVar1);
    }
    lVar3 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar3 = *(longlong *)(param_1 + 200);
    }
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e398a FUN_1401e398a body=143 status=ok
// SIG undefined FUN_1401e398a(void)

void FUN_1401e398a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x4c);
  if ((ulonglong)uVar4 < 9) {
    uVar4 = 8;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0x1ffffffffffff800U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 3,0);
      uVar4 = (uint)(uVar2 >> 3);
      uVar1 = *(uint *)(param_1 + 0x4c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x4c) = uVar4;
  FUN_1474232b4(param_1,*(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 1401e3a19 FUN_1401e3a19 body=690 status=ok
// SIG undefined FUN_1401e3a19(void)

void FUN_1401e3a19(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 **local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(puVar1,0x30);
    puVar4 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar3 = puVar4 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar4 = &PTR_FUN_14a38c0a8;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0x80;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar4;
  puVar4[2] = param_3;
  *(undefined4 *)(puVar4 + 3) = 0x80;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96478) {
    FUN_144b3d300(&DAT_14ca96478);
    if (DAT_14ca96478 == -1) {
      FUN_145fddfc4(&local_60);
      local_70 = 0;
      local_80 = 0;
      local_a0 = "Unknown";
      local_b0 = 0;
      uStack_a8 = 0;
      local_b8 = L"FEnqueueCopyBufferPass";
      local_78 = 0;
      local_90 = 0x10;
      local_98 = 0x33c;
      local_88 = &local_60;
      FUN_140b49562(&DAT_14ca963f8,0,1);
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14321f3d0);
      _Init_thread_footer(&DAT_14ca96478);
    }
  }
  FUN_140069376(param_1);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 0x3a;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(puVar1,0x1d8);
    puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar5 + 0x3a;
  }
  *puVar1 = (ulonglong)puVar3;
  local_58 = DAT_14ca96440;
  if (DAT_14ca96440 != 0) {
    LOCK();
    *(int *)(DAT_14ca96440 + 8) = *(int *)(DAT_14ca96440 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14ca963f8;
  local_b8 = (wchar_t *)CONCAT71(local_b8._1_7_,2);
  local_60 = puVar4 + 2;
  FUN_140068f1a(puVar5);
  *puVar5 = &PTR_FUN_14a38c0b0;
  puVar5[0x37] = param_2;
  puVar5[0x38] = param_3;
  *(undefined4 *)(puVar5 + 0x39) = param_4;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    FUN_140069100(param_1,puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e3ccc FUN_1401e3ccc body=232 status=ok
// SIG undefined FUN_1401e3ccc(void)

void FUN_1401e3ccc(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(longlong *)(param_1 + 0x110) != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
      (*(longlong *)(param_1 + 0x120) != 0)) &&
     (((*(longlong *)(param_1 + 0x130) != 0 && (*(longlong *)(param_1 + 0x128) != 0)) &&
      ((*(longlong *)(param_1 + 0x138) != 0 &&
       (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x110) != 0)))))) {
    FUN_14386b2e6(param_1);
    lVar1 = *(longlong *)(param_1 + 0x268);
    if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x620) != 0)) &&
        ((*(char *)(lVar1 + 0x629) == '\x01' &&
         ((((0 < *(int *)(lVar1 + 0x638) && (*(char *)(lVar1 + 0x628) == '\x01')) &&
           (*(longlong *)(param_1 + 0x270) != 0)) &&
          ((*(longlong *)(param_1 + 0x278) != 0 || (*(char *)(param_1 + 0x280) != '\x01')))))))) ||
       (*(char *)(param_1 + 0x50) != '\0')) {
      FUN_14386be70(param_1);
      FUN_140af390e(param_1);
      FUN_14386c050(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1401e3db4 FUN_1401e3db4 body=79 status=ok
// SIG undefined FUN_1401e3db4(void)

void FUN_1401e3db4(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x48);
  if (*(float *)(param_1 + 0x68) < fVar1) {
    param_2 = *(float *)(param_1 + 0x68) + param_2;
    if (fVar1 <= param_2) {
      param_2 = fVar1;
    }
    *(float *)(param_1 + 0x68) = param_2;
    fVar1 = *(float *)(param_1 + 0x4c);
    if (0.0 < fVar1) {
      param_2 = param_2 - *(float *)(param_1 + 0x44);
      if (fVar1 <= param_2) {
        param_2 = fVar1;
      }
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      param_2 = param_2 / fVar1;
      if (1.0 <= param_2) {
        param_2 = 1.0;
      }
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      FUN_1401e44da(0,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1401e3e04 FUN_1401e3e04 body=122 status=ok
// SIG undefined FUN_1401e3e04(void)

void FUN_1401e3e04(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x3c))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1447210f0();
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x155) & 4) == 0)) {
        *(double *)(param_1 + 0x10) =
             (double)*(float *)(lVar2 + 0x6f4) + *(double *)(param_1 + 0x10);
      }
    }
  }
  return;
}



// FUNCTION 1401e3e7e FUN_1401e3e7e body=207 status=ok
// SIG undefined FUN_1401e3e7e(void)

undefined8 FUN_1401e3e7e(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (((*(int *)(param_1 + 0x9cc4) == 0) || (uVar1 = *(uint *)(param_1 + 0x9cc0), (int)uVar1 < 0))
     || (DAT_14c9647dc <= (int)uVar1)) {
    return 0;
  }
  lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)(lVar3 + 0x10) != *(int *)(param_1 + 0x9cc4)) {
    return 0;
  }
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) {
    return 0;
  }
  lVar3 = FUN_1447210f0(param_1);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x9cc4) != 0) {
    uVar1 = *(uint *)(param_1 + 0x9cc0);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1401e3f34;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x9cc4) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar2 = *puVar4;
      goto LAB_1401e3f34;
    }
  }
  uVar2 = 0;
LAB_1401e3f34:
  uVar2 = FUN_1448e494c(lVar3,uVar2);
  return uVar2;
}



// FUNCTION 1401e3f4e FUN_1401e3f4e body=987 status=ok
// SIG undefined FUN_1401e3f4e(void)

void FUN_1401e3f4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong *plVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  float fVar13;
  double dVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  longlong *local_40;
  float local_38;
  char local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_1 + 0xc0) & 8) != 0) {
    FUN_1401e432a(&local_48,param_1 + 0xf8);
    if (local_48 == (code *)0x0) {
      bVar12 = 0;
    }
    else {
      fVar13 = (float)(**(code **)(*(longlong *)local_48 + 0x18))(local_48,&local_38);
      if (local_34 == '\x01') {
        fVar13 = local_38;
        if (1.0 <= local_38) {
          fVar13 = 1.0;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
      }
      bVar12 = 0;
      if (local_34 != '\0') {
        bVar12 = (byte)(int)((fVar13 * 100.0) / 10.0);
      }
    }
    plVar9 = local_40;
    bVar3 = *(byte *)(param_1 + 0x118);
    bVar12 = bVar3 & 0xf0 | bVar12;
    if (bVar3 != bVar12) {
      *(byte *)(param_1 + 0x118) = bVar12;
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    FUN_1401e432a(&local_48,param_1 + 0x108);
    if (local_48 == (code *)0x0) {
      bVar10 = 0;
    }
    else {
      (**(code **)(*(longlong *)local_48 + 0x18))(local_48,&local_38);
      if (local_34 == '\x01') {
        if (1.0 <= local_38) {
          local_38 = 1.0;
        }
        if (local_38 <= 0.0) {
          local_38 = 0.0;
        }
        dVar14 = (double)local_38 * 100.0;
      }
      else {
        dVar14 = NAN;
      }
      bVar10 = 0;
      if (local_34 != '\0') {
        bVar10 = (char)(int)(dVar14 / 10.0) << 4;
      }
    }
    bVar4 = *(byte *)(param_1 + 0x118);
    bVar10 = bVar4 & 0xf | bVar10;
    if (bVar4 != bVar10) {
      *(byte *)(param_1 + 0x118) = bVar10;
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_40 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
    if ((((bVar3 != bVar12 || bVar4 != bVar10) && (*(longlong *)(param_1 + 8) != 0)) &&
        (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) &&
       (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(), lVar6 != 0)) {
      if (DAT_14cba8288 == 0) {
        local_48 = FUN_141864c34;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_1464cee30;
        local_68 = &LAB_148bfac22;
        local_70 = &LAB_140f21842;
        local_78 = &DAT_149e063b2;
        local_80 = 0;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x9cd0;
        local_60 = &local_48;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        uVar5 = *(ulonglong *)(lVar6 + 0x28);
        if (uVar5 < 0xffffffff00000000) {
          plVar9 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar9 = (longlong *)0x0;
          }
          (**(code **)(*plVar9 + 0x58))(plVar9,lVar6,uVar5,0x3c);
        }
        else {
          uVar11 = (uint)uVar5;
          if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
            puVar8 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar8 = DAT_14c998080;
            }
            if ((*(uint *)(puVar8 + ((uint)(uVar5 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0)
            {
              lVar7 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
              lVar6 = *(longlong *)(lVar7 + 0x18);
              if (*(longlong *)(lVar7 + 0x18) == 0) {
                lVar6 = lVar7 + 8;
              }
              *(uint *)(lVar6 + 4) = *(uint *)(lVar6 + 4) | 0x10000000;
              *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401e432a FUN_1401e432a body=431 status=ok
// SIG undefined FUN_1401e432a(void)

longlong * FUN_1401e432a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
LAB_1401e44b5:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar12 = (longlong *)*param_2;
    bVar13 = true;
    if ((*plVar12 == 0) || (lVar11 = plVar12[1], lVar11 == 0)) {
LAB_1401e437f:
      uVar9 = 0;
      uVar4 = 0;
LAB_1401e4399:
      do {
        if ((int)(uVar4 + 1) < (int)uVar2) {
          lVar5 = (longlong)(int)uVar4;
          lVar11 = lVar5 + 2;
          plVar6 = plVar12 + lVar5 * 2 + 3;
          bVar3 = true;
          lVar8 = -1;
          do {
            iVar7 = (int)lVar8;
            if ((plVar6[-1] == 0) || (*plVar6 == 0)) {
              if (!bVar13) {
                uVar10 = uVar4 - iVar7;
                iVar7 = -iVar7;
                goto LAB_1401e4436;
              }
            }
            else if ((bool)(*(int *)(*plVar6 + 8) < 1 ^ bVar13)) {
              uVar10 = uVar4 - iVar7;
              break;
            }
            bVar3 = lVar11 < (longlong)(ulonglong)uVar2;
            lVar8 = lVar8 + -1;
            lVar11 = lVar11 + 1;
            plVar6 = plVar6 + 2;
            uVar10 = uVar2;
          } while (lVar5 - (ulonglong)uVar2 != lVar8);
        }
        else {
          bVar3 = false;
          uVar10 = uVar4 + 1;
        }
        iVar7 = uVar10 - uVar4;
        if (!bVar13) {
LAB_1401e4436:
          if (uVar9 != uVar4) {
            memmove(plVar12 + (longlong)(int)uVar9 * 2,plVar12 + (longlong)(int)uVar4 * 2,
                    (longlong)iVar7 << 4);
          }
          uVar9 = uVar9 + iVar7;
          bVar13 = true;
          uVar4 = uVar10;
          if (!bVar3) break;
          goto LAB_1401e4399;
        }
        FUN_140c2c3b5(plVar12 + (longlong)(int)uVar4 * 2,iVar7);
        bVar13 = false;
        uVar4 = uVar10;
      } while (bVar3);
      *(uint *)(param_2 + 1) = uVar9;
      if ((int)uVar9 < 1) goto LAB_1401e44b5;
      plVar12 = (longlong *)*param_2;
      lVar11 = plVar12[1];
      *param_1 = 0;
      param_1[1] = lVar11;
      if (lVar11 == 0) {
        return param_1;
      }
    }
    else {
      if (*(int *)(lVar11 + 8) < 1) {
        bVar13 = *(int *)(lVar11 + 8) < 1;
        goto LAB_1401e437f;
      }
      *param_1 = 0;
      param_1[1] = lVar11;
    }
    iVar7 = *(int *)(lVar11 + 8);
    do {
      if (iVar7 == 0) {
        param_1[1] = 0;
        return param_1;
      }
      LOCK();
      iVar1 = *(int *)(lVar11 + 8);
      bVar13 = iVar7 == iVar1;
      if (bVar13) {
        *(int *)(lVar11 + 8) = iVar7 + 1;
        iVar1 = iVar7;
      }
      iVar7 = iVar1;
      UNLOCK();
    } while (!bVar13);
    if (param_1[1] != 0) {
      *param_1 = *plVar12;
    }
  }
  return param_1;
}



// FUNCTION 1401e44da FUN_1401e44da body=108 status=ok
// SIG undefined FUN_1401e44da(void)

void FUN_1401e44da(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x24) == '\0' || *(float *)(param_1 + 0x20) != param_2) {
    *(float *)(param_1 + 0x20) = param_2;
    *(undefined1 *)(param_1 + 0x24) = 1;
    lVar1 = *(longlong *)(param_1 + 8);
    *(byte *)(lVar1 + 0x108) = *(byte *)(lVar1 + 0x108) | 2;
    if ((longlong)*(int *)(lVar1 + 0x50) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      lVar3 = (longlong)*(int *)(lVar1 + 0x50) << 6;
      do {
        if (*(int *)(lVar2 + 0xc) == *(int *)(param_1 + 0x18)) {
          if (lVar2 == 0) {
            return;
          }
          *(undefined1 *)(lVar2 + 0x38) = 1;
          *(byte *)(lVar1 + 0x108) = *(byte *)(lVar1 + 0x108) | 4;
          return;
        }
        lVar2 = lVar2 + 0x40;
        lVar3 = lVar3 + -0x40;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 1401e4546 FUN_1401e4546 body=520 status=ok
// SIG undefined FUN_1401e4546(void)

ulonglong FUN_1401e4546(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  double *pdVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_1 == 0) {
    uVar8 = 0;
    goto LAB_1401e465b;
  }
  uVar9 = (undefined7)((ulonglong)param_1 >> 8);
  if ((int)param_1[4] == 0) {
    uVar8 = CONCAT71(uVar9,1);
    goto LAB_1401e465b;
  }
  lVar3 = *(longlong *)((uint *)param_1[5] + 2);
  lVar6 = (longlong)(int)(*(uint *)param_1[5] & *(uint *)((longlong)param_1 + 0x24)) * 0x10;
  pdVar4 = *(double **)(lVar3 + lVar6);
  plVar5 = *(longlong **)(lVar3 + 8 + lVar6);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((pdVar4 == (double *)0x0) || (pdVar4 == (double *)*param_1)) {
LAB_1401e4684:
    uVar8 = 0;
  }
  else {
    if (((*(int *)((longlong)param_1 + 0x3c) != 0) &&
        ((((uVar2 = *(uint *)(param_1 + 7), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)) &&
          (plVar7 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar7 != (longlong *)0x0)) &&
         (((int)plVar7[2] == *(int *)((longlong)param_1 + 0x3c) &&
          ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))))) && (lVar3 = *plVar7, lVar3 != 0)) {
      if (DAT_14cba8288 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141864c34;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1464cee30;
        local_58 = &LAB_148bfac22;
        local_60 = &LAB_140f21842;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
         (*(char *)(lVar3 + 0x9378) != '\0')) goto LAB_1401e4684;
    }
    uVar8 = CONCAT71(uVar9,*(float *)(param_1[8] + 0x18) <=
                           (float)((double)(float)(double)param_1[2] - *pdVar4));
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_1401e465b:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e4750 FUN_1401e4750 body=4580 status=ok
// SIG undefined FUN_1401e4750(void)

void FUN_1401e4750(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined *puVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_188 [44];
  int local_15c;
  longlong local_158;
  longlong local_150;
  char local_148 [8];
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined1 local_128;
  int local_120 [2];
  char local_118;
  undefined8 local_110;
  longlong *local_108;
  int local_f0 [2];
  int local_e8;
  undefined4 uStack_e4;
  ushort local_d0;
  byte local_c8;
  int local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  int *local_90;
  int local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(char *)(param_1 + 0x80) == '\x01') && ((longlong)*(int *)(param_1 + 0x10) != 0)) {
    lVar14 = *(longlong *)(param_1 + 8);
    lVar13 = (longlong)*(int *)(param_1 + 0x10) * 0x160 + lVar14;
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*(char *)(lVar14 + 0x157) == '\0') {
        if (*(char *)(lVar14 + 0x12) == '\0') {
          FUN_140eebb3c(param_1,lVar14);
          goto LAB_1401e48f7;
        }
      }
      else {
        if ((*(char *)(lVar14 + 0x13) == '\0') && (*(char *)(lVar14 + 0x158) == '\0')) {
          lVar11 = *(longlong *)(lVar14 + 0x68);
          if (lVar11 == 0) {
            uVar10 = FUN_14016979c();
            lVar11 = FUN_14477b664(uVar10);
            *(longlong *)(lVar14 + 0x68) = lVar11;
          }
          plVar2 = (longlong *)(lVar14 + 0x60);
          if (*(longlong *)(lVar14 + 0x70) == 0) {
            if ((*plVar2 != 0) && (lVar11 != 0)) {
              plVar5 = *(longlong **)(lVar11 + 0xb8);
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
                *(undefined8 *)(lVar14 + 0x70) = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar11 = FUN_144aff482(uVar10,plVar2);
                *(longlong *)(lVar14 + 0x70) = lVar11;
                if (lVar11 != 0) goto LAB_1401e4873;
              }
            }
          }
          else {
LAB_1401e4873:
            local_148[0] = *(char *)(param_1 + 0x18);
            if (local_148[0] == '\x01') {
              local_148[0] = '\x02';
              local_140._0_4_ = 0;
              if (*plVar1 == 0) {
                iVar9 = 0;
                uVar4 = (uint)local_140;
              }
              else {
                uVar4 = *(uint *)(*plVar1 + 0xc);
                local_140 = (ulonglong)uVar4;
                if ((int)uVar4 < DAT_14c9647dc) {
                  lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                }
                else {
                  lVar11 = 0;
                }
                iVar9 = *(int *)(lVar11 + 0x10);
                if (*(int *)(lVar11 + 0x10) == 0) {
                  LOCK();
                  iVar9 = DAT_14c964868 + 1;
                  UNLOCK();
                  local_15c = DAT_14c964868 + 1;
                  bVar18 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar9;
                  if (bVar18) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                 );
                  }
                  LOCK();
                  iVar9 = *(int *)(lVar11 + 0x10);
                  bVar18 = iVar9 == 0;
                  if (bVar18) {
                    *(int *)(lVar11 + 0x10) = local_15c;
                    iVar9 = 0;
                  }
                  UNLOCK();
                  uVar4 = (uint)local_140;
                  if (bVar18) {
                    iVar9 = local_15c;
                  }
                }
              }
              local_140._0_4_ = uVar4;
              local_140 = CONCAT44(iVar9,(uint)local_140);
            }
            else if (local_148[0] == '\x02') {
              local_140 = *plVar1;
            }
            else if (local_148[0] == '\x03') {
              local_140 = *(longlong *)(param_1 + 0x20);
              local_138 = *(longlong **)(param_1 + 0x28);
              if (local_138 == (longlong *)0x0) {
                local_130 = *(undefined8 *)(param_1 + 0x30);
                local_128 = *(undefined1 *)(param_1 + 0x38);
              }
              else {
                LOCK();
                *(int *)((longlong)local_138 + 0xc) = *(int *)((longlong)local_138 + 0xc) + 1;
                UNLOCK();
                local_130 = *(undefined8 *)(param_1 + 0x30);
                local_128 = *(undefined1 *)(param_1 + 0x38);
              }
            }
            local_120[0] = 0;
            if (*(int *)(param_1 + 0x40) != 0) {
              uVar10 = FUN_1448174c4(local_120);
              FUN_1400e08b0(uVar10,DAT_14c9a3da0 + (longlong)*(int *)(param_1 + 0x40) * 0x10 + -0x10
                           );
            }
            local_118 = '\0';
            local_f0[0] = 0;
            lVar11 = *(longlong *)(lVar14 + 0x68);
            if (lVar11 == 0) {
              uVar10 = FUN_14016979c();
              lVar11 = FUN_14477b664(uVar10);
              *(longlong *)(lVar14 + 0x68) = lVar11;
            }
            lVar17 = *(longlong *)(lVar14 + 0x70);
            if (lVar17 == 0) {
              if (lVar11 == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = 0;
                if (*plVar2 != 0) {
                  plVar5 = *(longlong **)(lVar11 + 0xb8);
                  if ((plVar5 == (longlong *)0x0) ||
                     (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
                    lVar17 = 0;
                  }
                  else {
                    uVar10 = (**(code **)(*plVar5 + 0x110))(plVar5);
                    lVar17 = FUN_144aff482(uVar10,plVar2);
                  }
                  *(longlong *)(lVar14 + 0x70) = lVar17;
                }
              }
            }
            FUN_1400606f6(&local_c0,lVar17,local_148);
            piVar15 = local_90;
            if (local_90 == (int *)0x0) {
              piVar15 = &local_c0;
            }
            if (local_88 < 1) {
              piVar15 = (int *)&DAT_14c9a40e0;
            }
            FUN_1400603ec(&local_e8,lVar17,piVar15);
            piVar15 = local_90;
            if (local_90 == (int *)0x0) {
              piVar15 = &local_c0;
            }
            FUN_1446fdf58(piVar15,local_88);
            if (local_90 != (int *)0x0) {
              FUN_1400020a8();
            }
            if (local_c8 == 1) {
              local_15c = CONCAT31(local_15c._1_3_,local_e8 != 0);
              bVar8 = 1;
            }
            else {
              FUN_1400b56fe(&local_c0,&local_e8,1);
              local_15c = CONCAT31(local_15c._1_3_,local_a0 != 0);
              bVar18 = local_c0 != 0;
              pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
              if (pcVar6 != (code *)0x0) {
                piVar15 = &local_c0;
                if (0x18 < local_a8) {
                  piVar15 = (int *)CONCAT44(uStack_bc,local_c0);
                }
                (*pcVar6)(piVar15);
              }
              if (0x18 < local_a8) {
                FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
              }
              local_15c = CONCAT31(local_15c._1_3_,(byte)local_15c & bVar18);
              bVar8 = local_c8;
            }
            cVar7 = *(char *)(lVar14 + 0x15e);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
            if (pcVar6 != (code *)0x0) {
              piVar15 = &local_e8;
              if (0x18 < local_d0) {
                piVar15 = (int *)CONCAT44(uStack_e4,local_e8);
              }
              (*pcVar6)(piVar15);
            }
            if (0x18 < local_d0) {
              FUN_1400020a8(CONCAT44(uStack_e4,local_e8));
            }
            if ((longlong)local_f0[0] != 0) {
              lVar11 = (longlong)local_f0[0] + -1;
              local_150 = DAT_14c9a3da0;
              local_158 = lVar11 * 0x10;
              FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_158),
                            *(undefined4 *)(DAT_14c9a3da0 + 8 + local_158));
              if (*(longlong *)(local_150 + local_158) != 0) {
                FUN_1400020a8();
              }
              lVar17 = DAT_14c9a3da0;
              iVar9 = (int)lVar11;
              if (DAT_14c9a3dd4 != 0) {
                *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
              }
              *(undefined4 *)(lVar17 + local_158) = 0xffffffff;
              iVar16 = -1;
              if (0 < DAT_14c9a3dd4) {
                iVar16 = DAT_14c9a3dd0;
              }
              *(int *)(lVar17 + 4 + local_158) = iVar16;
              DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
              puVar12 = DAT_14c9a3dc0;
              if (DAT_14c9a3dc0 == (undefined *)0x0) {
                puVar12 = &DAT_14c9a3db0;
              }
              iVar16 = iVar9 + 0x1f;
              if (-1 < iVar9) {
                iVar16 = iVar9;
              }
              bVar8 = (byte)lVar11 & 0x1f;
              DAT_14c9a3dd0 = iVar9;
              *(uint *)(puVar12 + (longlong)(iVar16 >> 5) * 4) =
                   *(uint *)(puVar12 + (longlong)(iVar16 >> 5) * 4) &
                   (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
              local_f0[0] = 0;
            }
            if (local_118 != '\0') {
              if (local_118 == '\x01') {
                local_110 = 0;
              }
              else if ((local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
                LOCK();
                piVar15 = (int *)((longlong)local_108 + 0xc);
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (*piVar15 == 0) {
                  (**(code **)(*local_108 + 0x10))();
                }
              }
              local_118 = '\0';
            }
            if ((longlong)local_120[0] != 0) {
              lVar11 = (longlong)local_120[0] + -1;
              local_150 = DAT_14c9a3da0;
              local_158 = lVar11 * 0x10;
              FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_158),
                            *(undefined4 *)(DAT_14c9a3da0 + 8 + local_158));
              if (*(longlong *)(local_150 + local_158) != 0) {
                FUN_1400020a8();
              }
              lVar17 = DAT_14c9a3da0;
              iVar9 = (int)lVar11;
              if (DAT_14c9a3dd4 != 0) {
                *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
              }
              *(undefined4 *)(lVar17 + local_158) = 0xffffffff;
              iVar16 = -1;
              if (0 < DAT_14c9a3dd4) {
                iVar16 = DAT_14c9a3dd0;
              }
              *(int *)(lVar17 + 4 + local_158) = iVar16;
              DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
              puVar12 = DAT_14c9a3dc0;
              if (DAT_14c9a3dc0 == (undefined *)0x0) {
                puVar12 = &DAT_14c9a3db0;
              }
              iVar16 = iVar9 + 0x1f;
              if (-1 < iVar9) {
                iVar16 = iVar9;
              }
              bVar8 = (byte)lVar11 & 0x1f;
              DAT_14c9a3dd0 = iVar9;
              *(uint *)(puVar12 + (longlong)(iVar16 >> 5) * 4) =
                   *(uint *)(puVar12 + (longlong)(iVar16 >> 5) * 4) &
                   (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
              local_120[0] = 0;
            }
            if ((local_148[0] == '\x03') && (local_138 != (longlong *)0x0)) {
              LOCK();
              piVar15 = (int *)((longlong)local_138 + 0xc);
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (*piVar15 == 0) {
                (**(code **)(*local_138 + 0x10))();
              }
            }
            if (cVar7 == (byte)local_15c) {
              FUN_140898514(lVar14 + 0xc0,0);
              *(undefined1 *)(lVar14 + 0x157) = 0;
            }
          }
        }
LAB_1401e48f7:
        bVar8 = *(byte *)(lVar14 + 0x158);
        if (bVar8 == 0) {
          fVar20 = *(float *)(lVar14 + 0x144);
          if ((0.0001 <= fVar20 && *(longlong *)(lVar14 + 0xe0) != 0) &&
             ((longlong)*(int *)(param_1 + 0x10) != 0)) {
            lVar11 = *(longlong *)(param_1 + 8);
            lVar17 = 0;
            do {
              if (*(longlong *)(lVar11 + 0xe0 + lVar17) == *(longlong *)(lVar14 + 0xe0)) {
                fVar3 = *(float *)(lVar11 + 0x144 + lVar17);
                if ((fVar20 < fVar3) ||
                   (((fVar3 == fVar20 && (!NAN(fVar3) && !NAN(fVar20))) &&
                    (*(char *)(lVar11 + 0x158 + lVar17) != '\0')))) goto LAB_1401e50a1;
              }
              lVar17 = lVar17 + 0x160;
            } while ((longlong)*(int *)(param_1 + 0x10) * 0x160 - lVar17 != 0);
          }
        }
        if (*(char *)(lVar14 + 0x14c) == '\x03') {
          if (bVar8 == 0) {
            FUN_140c43238(lVar14 + 0x78,0);
            *(undefined1 *)(lVar14 + 0x158) = 1;
            if ((*(byte *)(lVar14 + 0x155) < 2) || (*(char *)(lVar14 + 0x11) == '\0')) {
              if (0.0 < *(float *)(lVar14 + 0xe8)) {
LAB_1401e4cb5:
                *(undefined4 *)(lVar14 + 0x148) = 0;
                goto LAB_1401e4fc1;
              }
            }
            else {
              *(undefined4 *)(lVar14 + 0x148) = 0;
              *(undefined1 *)(lVar14 + 0x156) = 0;
              *(undefined1 *)(lVar14 + 0x15c) = 1;
            }
            FUN_1447f69b6(lVar14 + 0x90);
          }
        }
        else if (*(char *)(lVar14 + 0x14c) == '\x01') {
          if (bVar8 == 0) {
            local_148[0] = *(char *)(param_1 + 0x18);
            if (local_148[0] == '\x01') {
              local_148[0] = '\x02';
              if (*plVar1 == 0) {
                local_140._0_4_ = 0;
                iVar9 = 0;
                uVar4 = (uint)local_140;
              }
              else {
                uVar4 = *(uint *)(*plVar1 + 0xc);
                local_140 = (ulonglong)uVar4;
                if ((int)uVar4 < DAT_14c9647dc) {
                  lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                }
                else {
                  lVar11 = 0;
                }
                iVar9 = *(int *)(lVar11 + 0x10);
                if (*(int *)(lVar11 + 0x10) == 0) {
                  LOCK();
                  iVar9 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar16 = DAT_14c964868 + 1;
                  bVar18 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar9;
                  if (bVar18) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                 );
                  }
                  LOCK();
                  iVar9 = *(int *)(lVar11 + 0x10);
                  bVar18 = iVar9 == 0;
                  if (bVar18) {
                    *(int *)(lVar11 + 0x10) = iVar16;
                    iVar9 = 0;
                  }
                  UNLOCK();
                  uVar4 = (uint)local_140;
                  if (bVar18) {
                    iVar9 = iVar16;
                  }
                }
              }
              local_140._0_4_ = uVar4;
              local_140 = CONCAT44(iVar9,(uint)local_140);
            }
            else if (local_148[0] == '\x02') {
              local_140 = *plVar1;
            }
            else if (local_148[0] == '\x03') {
              local_140 = *(longlong *)(param_1 + 0x20);
              local_138 = *(longlong **)(param_1 + 0x28);
              if (local_138 == (longlong *)0x0) {
                local_130 = *(undefined8 *)(param_1 + 0x30);
                local_128 = *(undefined1 *)(param_1 + 0x38);
              }
              else {
                LOCK();
                *(int *)((longlong)local_138 + 0xc) = *(int *)((longlong)local_138 + 0xc) + 1;
                UNLOCK();
                local_130 = *(undefined8 *)(param_1 + 0x30);
                local_128 = *(undefined1 *)(param_1 + 0x38);
              }
            }
            local_120[0] = 0;
            if (*(int *)(param_1 + 0x40) != 0) {
              uVar10 = FUN_1448174c4(local_120);
              FUN_1400e08b0(uVar10,DAT_14c9a3da0 + (longlong)*(int *)(param_1 + 0x40) * 0x10 + -0x10
                           );
            }
            local_118 = '\0';
            local_f0[0] = 0;
            lVar11 = *(longlong *)(lVar14 + 0x20);
            if (lVar11 == 0) {
              uVar10 = FUN_14016979c();
              lVar11 = FUN_14477b664(uVar10);
              *(longlong *)(lVar14 + 0x20) = lVar11;
            }
            lVar17 = *(longlong *)(lVar14 + 0x28);
            if (lVar17 == 0) {
              if (lVar11 == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = 0;
                if (*(longlong *)(lVar14 + 0x18) != 0) {
                  plVar2 = *(longlong **)(lVar11 + 0xb8);
                  if ((plVar2 == (longlong *)0x0) ||
                     (cVar7 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar7 == '\0')) {
                    lVar17 = 0;
                  }
                  else {
                    uVar10 = (**(code **)(*plVar2 + 0x110))(plVar2);
                    lVar17 = FUN_144aff482(uVar10,(longlong *)(lVar14 + 0x18));
                  }
                  *(longlong *)(lVar14 + 0x28) = lVar17;
                }
              }
            }
            FUN_1400606f6(&local_c0,lVar17,local_148);
            piVar15 = local_90;
            if (local_90 == (int *)0x0) {
              piVar15 = &local_c0;
            }
            if (local_88 < 1) {
              piVar15 = (int *)&DAT_14c9a40e0;
            }
            FUN_1400603ec(&local_e8,lVar17,piVar15);
            piVar15 = local_90;
            if (local_90 == (int *)0x0) {
              piVar15 = &local_c0;
            }
            FUN_1446fdf58(piVar15);
            if (local_90 != (int *)0x0) {
              FUN_1400020a8();
            }
            if (local_c8 == 1) {
              bVar18 = local_e8 != 0;
              bVar8 = 1;
            }
            else {
              FUN_1400b56fe(&local_c0,&local_e8,1);
              bVar18 = local_a0 != 0;
              bVar19 = local_c0 != 0;
              pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
              if (pcVar6 != (code *)0x0) {
                piVar15 = &local_c0;
                if (0x18 < local_a8) {
                  piVar15 = (int *)CONCAT44(uStack_bc,local_c0);
                }
                (*pcVar6)(piVar15);
              }
              if (0x18 < local_a8) {
                FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
              }
              bVar18 = bVar18 && bVar19;
              bVar8 = local_c8;
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
            if (pcVar6 != (code *)0x0) {
              piVar15 = &local_e8;
              if (0x18 < local_d0) {
                piVar15 = (int *)CONCAT44(uStack_e4,local_e8);
              }
              (*pcVar6)(piVar15);
            }
            if (0x18 < local_d0) {
              FUN_1400020a8(CONCAT44(uStack_e4,local_e8));
            }
            FUN_1448173f8(local_f0);
            if (local_118 != '\0') {
              if (local_118 == '\x01') {
                local_110 = 0;
              }
              else if ((local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
                LOCK();
                piVar15 = (int *)((longlong)local_108 + 0xc);
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (*piVar15 == 0) {
                  (**(code **)(*local_108 + 0x10))();
                }
              }
              local_118 = '\0';
            }
            FUN_1448173f8(local_120);
            if ((local_148[0] == '\x03') && (local_138 != (longlong *)0x0)) {
              LOCK();
              piVar15 = (int *)((longlong)local_138 + 0xc);
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (*piVar15 == 0) {
                (**(code **)(*local_138 + 0x10))();
              }
            }
            if (bVar18) {
              FUN_140c43238(lVar14 + 0x78,0);
              *(undefined1 *)(lVar14 + 0x158) = 1;
              if (0.0 < *(float *)(lVar14 + 0xe8)) goto LAB_1401e4cb5;
              goto LAB_1401e4fc1;
            }
            bVar8 = *(byte *)(lVar14 + 0x158);
          }
          if (((bVar8 & 1) != 0) && (*(float *)(lVar14 + 0xe8) <= 0.0)) {
            local_148[0] = *(char *)(param_1 + 0x18);
            if (local_148[0] == '\x01') {
              local_148[0] = '\x02';
              if (*plVar1 == 0) {
                local_140._0_4_ = 0;
                iVar9 = 0;
                uVar4 = (uint)local_140;
              }
              else {
                uVar4 = *(uint *)(*plVar1 + 0xc);
                local_140 = (ulonglong)uVar4;
                if ((int)uVar4 < DAT_14c9647dc) {
                  lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                }
                else {
                  lVar11 = 0;
                }
                iVar9 = *(int *)(lVar11 + 0x10);
                if (*(int *)(lVar11 + 0x10) == 0) {
                  LOCK();
                  iVar9 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar16 = DAT_14c964868 + 1;
                  bVar18 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar9;
                  if (bVar18) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                 );
                  }
                  LOCK();
                  iVar9 = *(int *)(lVar11 + 0x10);
                  bVar18 = iVar9 == 0;
                  if (bVar18) {
                    *(int *)(lVar11 + 0x10) = iVar16;
                    iVar9 = 0;
                  }
                  UNLOCK();
                  uVar4 = (uint)local_140;
                  if (bVar18) {
                    iVar9 = iVar16;
                  }
                }
              }
              local_140._0_4_ = uVar4;
              local_140 = CONCAT44(iVar9,(uint)local_140);
            }
            else if (local_148[0] == '\x02') {
              local_140 = *plVar1;
            }
            else if (local_148[0] == '\x03') {
              local_140 = *(longlong *)(param_1 + 0x20);
              local_138 = *(longlong **)(param_1 + 0x28);
              if (local_138 == (longlong *)0x0) {
                local_130 = *(undefined8 *)(param_1 + 0x30);
                local_128 = *(undefined1 *)(param_1 + 0x38);
              }
              else {
                LOCK();
                *(int *)((longlong)local_138 + 0xc) = *(int *)((longlong)local_138 + 0xc) + 1;
                UNLOCK();
                local_130 = *(undefined8 *)(param_1 + 0x30);
                local_128 = *(undefined1 *)(param_1 + 0x38);
              }
            }
            local_120[0] = 0;
            if (*(int *)(param_1 + 0x40) != 0) {
              uVar10 = FUN_1448174c4(local_120);
              FUN_1400e08b0(uVar10,DAT_14c9a3da0 + (longlong)*(int *)(param_1 + 0x40) * 0x10 + -0x10
                           );
            }
            local_118 = '\0';
            local_f0[0] = 0;
            lVar11 = *(longlong *)(lVar14 + 0x38);
            if (lVar11 == 0) {
              uVar10 = FUN_14016979c();
              lVar11 = FUN_14477b664(uVar10);
              *(longlong *)(lVar14 + 0x38) = lVar11;
            }
            lVar17 = *(longlong *)(lVar14 + 0x40);
            if (lVar17 == 0) {
              if (lVar11 == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = 0;
                if (*(longlong *)(lVar14 + 0x30) != 0) {
                  plVar2 = *(longlong **)(lVar11 + 0xb8);
                  if ((plVar2 == (longlong *)0x0) ||
                     (cVar7 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar7 == '\0')) {
                    lVar17 = 0;
                  }
                  else {
                    uVar10 = (**(code **)(*plVar2 + 0x110))(plVar2);
                    lVar17 = FUN_144aff482(uVar10,(longlong *)(lVar14 + 0x30));
                  }
                  *(longlong *)(lVar14 + 0x40) = lVar17;
                }
              }
            }
            FUN_1400606f6(&local_c0,lVar17,local_148);
            piVar15 = local_90;
            if (local_90 == (int *)0x0) {
              piVar15 = &local_c0;
            }
            if (local_88 < 1) {
              piVar15 = (int *)&DAT_14c9a40e0;
            }
            FUN_1400603ec(&local_e8,lVar17,piVar15);
            piVar15 = local_90;
            if (local_90 == (int *)0x0) {
              piVar15 = &local_c0;
            }
            FUN_1446fdf58(piVar15);
            if (local_90 != (int *)0x0) {
              FUN_1400020a8();
            }
            if (local_c8 == 1) {
              bVar18 = local_e8 != 0;
              bVar8 = 1;
            }
            else {
              FUN_1400b56fe(&local_c0,&local_e8,1);
              bVar18 = local_a0 != 0;
              bVar19 = local_c0 != 0;
              pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
              if (pcVar6 != (code *)0x0) {
                piVar15 = &local_c0;
                if (0x18 < local_a8) {
                  piVar15 = (int *)CONCAT44(uStack_bc,local_c0);
                }
                (*pcVar6)(piVar15);
              }
              if (0x18 < local_a8) {
                FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
              }
              bVar18 = bVar18 && bVar19;
              bVar8 = local_c8;
            }
            cVar7 = *(char *)(lVar14 + 0x15d);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
            if (pcVar6 != (code *)0x0) {
              piVar15 = &local_e8;
              if (0x18 < local_d0) {
                piVar15 = (int *)CONCAT44(uStack_e4,local_e8);
              }
              (*pcVar6)(piVar15);
            }
            if (0x18 < local_d0) {
              FUN_1400020a8(CONCAT44(uStack_e4,local_e8));
            }
            FUN_1448173f8(local_f0);
            if (local_118 != '\0') {
              if (local_118 == '\x01') {
                local_110 = 0;
              }
              else if ((local_118 == '\x03') && (local_108 != (longlong *)0x0)) {
                LOCK();
                piVar15 = (int *)((longlong)local_108 + 0xc);
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (*piVar15 == 0) {
                  (**(code **)(*local_108 + 0x10))();
                }
              }
              local_118 = '\0';
            }
            FUN_1448173f8(local_120);
            if ((local_148[0] == '\x03') && (local_138 != (longlong *)0x0)) {
              LOCK();
              piVar15 = (int *)((longlong)local_138 + 0xc);
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (*piVar15 == 0) {
                (**(code **)(*local_138 + 0x10))();
              }
            }
            if ((bool)cVar7 == bVar18) {
              FUN_1447f69b6(lVar14 + 0x90);
              *(undefined1 *)(lVar14 + 0x158) = 0;
            }
          }
        }
LAB_1401e4fc1:
        if (0.0 <= *(float *)(lVar14 + 0x148)) {
          fVar20 = *(float *)(lVar14 + 0x148) + param_2;
          *(float *)(lVar14 + 0x148) = fVar20;
          if ((*(char *)(lVar14 + 0x15b) == '\0') && (*(char *)(lVar14 + 0x15c) != '\x01')) {
            if ((0.0 < *(float *)(lVar14 + 0xe8)) && (0.0001 <= fVar20 - *(float *)(lVar14 + 0xe8)))
            {
              *(undefined4 *)(lVar14 + 0x148) = 0xbf800000;
              if (*(char *)(lVar14 + 0x15a) == '\x01') {
                FUN_1447f69b6(lVar14 + 0x90);
              }
              else if ((*(char *)(lVar14 + 0x158) == '\x01') &&
                      (FUN_1447f69b6(lVar14 + 0x90), *(char *)(lVar14 + 0x14c) != '\x03')) {
                *(undefined1 *)(lVar14 + 0x158) = 0;
              }
            }
          }
          else if (*(float *)(lVar14 + 0x140) <= fVar20) {
            *(undefined1 *)(lVar14 + 0x156) = 0;
            *(undefined4 *)(lVar14 + 0x148) = 0xbf800000;
            if (*(char *)(lVar14 + 0x15c) == '\x01') {
              *(undefined1 *)(lVar14 + 0x15c) = 0;
              FUN_1447f69b6(lVar14 + 0x90);
              *(undefined1 *)(lVar14 + 0x158) = 0;
            }
            else if (*(char *)(lVar14 + 0x15b) != '\0') {
              *(undefined1 *)(lVar14 + 0x15b) = 0;
            }
          }
        }
      }
LAB_1401e50a1:
      lVar14 = lVar14 + 0x160;
    } while (lVar14 != lVar13);
  }
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e5944 FUN_1401e5944 body=194 status=ok
// SIG undefined FUN_1401e5944(void)

void FUN_1401e5944(longlong *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *(longlong *)*param_1 = param_1[2];
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    uVar1 = *(uint *)(param_1 + 7);
    lVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1401e59a2;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)((longlong)param_1 + 0x3c) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      lVar5 = *plVar4;
      goto LAB_1401e59a2;
    }
  }
  lVar5 = 0;
LAB_1401e59a2:
  puVar6 = &DAT_14c846480;
  if (*(longlong *)(lVar5 + 0x1c8) != 0) {
    puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1c8) + 0x240);
  }
  puVar7 = (undefined8 *)(*param_1 + 0x10);
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar2 = FUN_1418d99b2(param_1);
  *(undefined1 *)(*param_1 + 0x70) = uVar2;
  cVar3 = FUN_1440ca46c(param_1);
  if (cVar3 != '\0') {
    return;
  }
  FUN_1418d98ae(param_1 + 4,param_1);
  return;
}



// FUNCTION 1401e5a06 FUN_1401e5a06 body=228 status=ok
// SIG undefined FUN_1401e5a06(void)

longlong FUN_1401e5a06(void)

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
  if (DAT_14cbc0f30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14657478c;
    local_38 = &LAB_148cc2ce3;
    local_40 = &LAB_140c5eb14;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/OakGame",L"WeaponBehavior_AmmoPool",&DAT_14cbc0f30,FUN_146619e58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc0f30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e5aec FUN_1401e5aec body=616 status=ok
// SIG undefined FUN_1401e5aec(void)

void FUN_1401e5aec(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  
  if (*(char *)(param_1 + 0x8958) != '\0') {
    lVar1 = param_1 + 0x3b60;
    lVar5 = *(longlong *)(param_1 + 0x1b0);
    plVar4 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x3b60) + 0x30))(lVar1);
    if ((lVar5 != 0) && (plVar4 != (longlong *)0x0)) {
      lVar5 = FUN_1447210f0(param_1);
      dVar2 = *(double *)(lVar5 + 0x6d0);
      if (*(char *)(param_1 + 0x8958) == '\x03') {
        fVar8 = *(float *)(param_1 + 0x8964);
        fVar9 = (float)(**(code **)(*plVar4 + 0x10))(plVar4);
        if (fVar9 <= (float)dVar2 - fVar8) {
          if (*(char *)(param_1 + 0x8959) == '\0') {
            uVar6 = 0;
            cVar7 = '\0';
          }
          else {
            cVar7 = *(char *)(param_1 + 0x8959) + -1;
            uVar6 = 2;
          }
          FUN_140efe504(param_1,uVar6,cVar7);
        }
        if ((longlong)*(int *)(param_1 + 0x8978) != 0) {
          lVar5 = 0;
          do {
            if ((*(int *)(*(longlong *)(param_1 + 0x8970) + 8 + lVar5) != 0) &&
               (*(longlong *)(*(longlong *)(param_1 + 0x8970) + lVar5) != 0)) goto LAB_1401e5c32;
            lVar5 = lVar5 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x8978) * 0x10 != lVar5);
        }
      }
      else {
        if (*(char *)(param_1 + 0x8958) != '\x01') {
          bVar3 = *(byte *)(param_1 + 0x8959);
          if (bVar3 < *(byte *)(param_1 + 0x8968)) {
            uVar10 = *(undefined4 *)(param_1 + 0x8964);
            fVar8 = (float)(**(code **)(*plVar4 + 0x10))(plVar4,bVar3 + 1);
            fVar9 = (float)(**(code **)(*plVar4 + 0x58))(plVar4);
            uVar10 = FUN_14114c86e(lVar1,fVar8 * fVar9,uVar10);
            *(undefined4 *)(param_1 + 0x8964) = uVar10;
            cVar7 = *(char *)(param_1 + 0x8959) + '\x01';
            uVar6 = 1;
          }
          else {
            if (bVar3 <= *(byte *)(param_1 + 0x8968)) {
              return;
            }
            uVar10 = *(undefined4 *)(param_1 + 0x8964);
            fVar8 = (float)(**(code **)(*plVar4 + 0x10))(plVar4);
            fVar9 = (float)(**(code **)(*plVar4 + 0x58))(plVar4);
            uVar10 = FUN_14114c86e(lVar1,fVar8 * fVar9,uVar10);
            *(undefined4 *)(param_1 + 0x8964) = uVar10;
            cVar7 = *(char *)(param_1 + 0x8959);
            uVar6 = 3;
          }
          FUN_140efe504(param_1,uVar6,cVar7);
          return;
        }
        fVar8 = *(float *)(param_1 + 0x8964);
        fVar9 = (float)(**(code **)(*plVar4 + 0x10))(plVar4);
        if (fVar9 <= (float)dVar2 - fVar8) {
          FUN_140efe504(param_1,2,*(undefined1 *)(param_1 + 0x8959));
        }
        if ((longlong)*(int *)(param_1 + 0x8978) != 0) {
          lVar5 = 0;
          do {
            if ((*(int *)(*(longlong *)(param_1 + 0x8970) + 8 + lVar5) != 0) &&
               (*(longlong *)(*(longlong *)(param_1 + 0x8970) + lVar5) != 0)) {
LAB_1401e5c32:
              uVar10 = FUN_14023bf44(lVar1);
              FUN_14485dd80(param_1 + 0x8970,uVar10);
              return;
            }
            lVar5 = lVar5 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x8978) * 0x10 != lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 1401e5d54 FUN_1401e5d54 body=595 status=ok
// SIG undefined FUN_1401e5d54(void)

longlong FUN_1401e5d54(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  if (0 < *(int *)(param_1 + 0x2630)) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x2628) + 0x20);
    if ((plVar4 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar4);
    }
    else if (plVar4 == (longlong *)0x0) goto LAB_1401e5f55;
    if (DAT_14cb6fd58 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1487a9cc5;
      local_50 = FUN_14654339c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomValueProvider",&DAT_14cb6fd58,&DAT_1487a9cc4);
    }
    lVar1 = (**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb6fd58);
    if (lVar1 != 0) {
      if (DAT_14cb6fd58 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1487a9cc5;
        local_50 = FUN_14654339c;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomValueProvider",&DAT_14cb6fd58,&DAT_1487a9cc4);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb6fd58);
      if ((lVar1 != lVar2) && (lVar2 != 0)) goto LAB_1401e5df5;
    }
  }
LAB_1401e5f55:
  plVar4 = (longlong *)(param_1 + -0x3b60);
  if (plVar4 != (longlong *)0x0) {
    uVar3 = FUN_144a82126();
    lVar1 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
    if (lVar1 != 0) {
      uVar3 = FUN_144a82126();
      lVar2 = FUN_144718840(lVar1,uVar3);
      if (lVar1 != lVar2) goto LAB_1401e5df5;
    }
  }
  lVar2 = 0;
LAB_1401e5df5:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e5fa8 FUN_1401e5fa8 body=460 status=ok
// SIG undefined FUN_1401e5fa8(void)

void FUN_1401e5fa8(longlong param_1,undefined4 param_2,uint param_3)

{
  longlong lVar1;
  undefined1 auStack_408 [32];
  undefined8 *local_3e8;
  undefined4 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined2 *local_3c8;
  undefined1 *local_3c0;
  undefined1 *local_3b8;
  code **local_3b0;
  undefined1 *local_3a8;
  code *local_3a0;
  undefined8 local_398 [2];
  undefined8 local_388;
  code *local_358 [8];
  undefined8 local_318;
  undefined1 local_310 [64];
  undefined1 local_2d0 [656];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_408;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_3b0 = local_358;
      local_358[0] = FUN_141864c34;
      local_3a0 = FUN_14081d0ea;
      local_3a8 = &LAB_1464cee30;
      local_3b8 = &LAB_148bfac22;
      local_3c0 = &LAB_140f21842;
      local_3c8 = &DAT_149e063b2;
      local_3d0 = 0;
      local_3d8 = 0x10000004;
      local_3e0 = 0x10;
      local_3e8 = (undefined8 *)CONCAT44(local_3e8._4_4_,0x9cd0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (*(char *)(lVar1 + 0x5d30) == '\x01')) goto LAB_1401e60a5;
  }
  lVar1 = FUN_14011c349();
  FUN_14082cf0e(local_358,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x30),0);
  local_318 = FUN_1405faa04(lVar1 + 0x1e8);
  FUN_140a6f4d0(local_310,lVar1 + 0x200);
  FUN_1405dc634(local_2d0,lVar1 + 0x218);
  local_3e8 = local_398;
  local_398[0] = 0;
  local_388 = 0;
  FUN_14082d216(local_358,param_2,0,param_3 ^ 1);
  FUN_1403dfdc4(local_358);
LAB_1401e60a5:
  if ((local_40 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e6176 FUN_1401e6176 body=479 status=ok
// SIG undefined FUN_1401e6176(void)

void FUN_1401e6176(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  float local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((*(int *)(param_1 + 0x3c) == 0) || (uVar7 = *(uint *)(param_1 + 0x38), (int)uVar7 < 0)) ||
       (DAT_14c9647dc <= (int)uVar7)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x3c))))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar3 = *plVar6, lVar3 == 0)))) {
    if (*(char *)(param_1 + 0x58) != '\0') {
      FUN_1407c9f6e(param_1,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
  }
  else {
    if (*(float *)(*(longlong *)(param_1 + 0x40) + 0x30) <=
        (float)((double)(float)*(double *)(param_1 + 0x10) - *(double *)(param_1 + 0x68))) {
      FUN_1409d14a4(lVar3 + 0x70,param_1 + 0x70);
      FUN_1440ca32a();
    }
    else {
      local_48 = (float)FUN_1418d97c6(*(longlong *)(param_1 + 0x40) + 0x30);
      local_48 = 1.0 - local_48;
      local_40 = &local_21;
      local_21 = 0;
      FUN_140cda1b6(&local_30,lVar3 + 0x70,param_1 + 0x70,3);
      *(undefined8 *)(param_1 + 0x70) = local_30;
    }
    uVar1 = *(ulonglong *)(lVar3 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar6 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar6 = (longlong *)0x0;
      }
      (**(code **)(*plVar6 + 0x58))(plVar6,lVar3,uVar1,5);
    }
    else {
      uVar7 = (uint)uVar1;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar4 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar4 = DAT_14c998080;
        }
        if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar5 = *(uint **)(lVar3 + 0x18);
          if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
            puVar5 = (uint *)(lVar3 + 8);
          }
          *puVar5 = *puVar5 | 0x20;
          *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
        }
      }
    }
    cVar2 = FUN_1401e4546(param_1);
    if (cVar2 != '\0') {
      FUN_1401e5944(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401e6366 FUN_1401e6366 body=170 status=ok
// SIG undefined FUN_1401e6366(void)

void FUN_1401e6366(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if (((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
       (plVar3 = *(longlong **)
                  (*(longlong *)(param_1 + 0xbe8) + 0x10 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar3 != (longlong *)0x0)) {
      if (((ulonglong)bVar1 != 0) && (cVar2 = (**(code **)(*plVar3 + 0x368))(plVar3), cVar2 != '\0')
         ) {
        if (*(int *)(param_1 + 0xbf0) < 1) {
          return;
        }
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x10);
        if (plVar3 == (longlong *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001401e63d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x378))(plVar3,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 1401e6410 FUN_1401e6410 body=1622 status=ok
// SIG undefined FUN_1401e6410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401e6410(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  double *pdVar21;
  double *pdVar22;
  longlong *plVar23;
  longlong lVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 in_XMM1_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_100 [24];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((((*(int *)(param_1 + 0x3c) == 0) || (uVar13 = *(uint *)(param_1 + 0x38), (int)uVar13 < 0))
       || (DAT_14c9647dc <= (int)uVar13)) ||
      ((plVar14 = (longlong *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
       plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(param_1 + 0x3c))))) ||
     (((*(uint *)(plVar14 + 1) & 0x10200000) != 0 ||
      (plVar14 = (longlong *)*plVar14, plVar14 == (longlong *)0x0)))) {
    if (*(char *)(param_1 + 0x58) != '\0') {
      FUN_1407c9f6e(param_1,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_128);
    }
  }
  else {
    dVar3 = *(double *)(param_1 + 0x10);
    auVar32._0_8_ =
         ((double)(float)dVar3 - *(double *)(param_1 + 0x80)) *
         (double)*(float *)(*(longlong *)(param_1 + 0x40) + 0x2c);
    auVar32._8_8_ = in_XMM1_Qb;
    auVar28._4_12_ = auVar32._4_12_;
    auVar28._0_4_ = (float)auVar32._0_8_;
    fVar25 = (float)FUN_1418d97c6(*(longlong *)(param_1 + 0x40) + 0x60,auVar28._0_8_);
    dVar4 = *(double *)(param_1 + 0x88);
    uVar13 = *(uint *)(param_1 + 0x7c);
    uVar18 = (ulonglong)(*(int *)(param_1 + 0x20) + -1);
    uVar16 = uVar18;
    if ((longlong)(ulonglong)uVar13 < (longlong)uVar18) {
      uVar16 = (ulonglong)uVar13;
    }
    uVar12 = 0;
    if (0 < (longlong)uVar16) {
      uVar12 = (uint)uVar16;
    }
    uVar11 = *(uint *)(param_1 + 0x24);
    puVar15 = *(uint **)(param_1 + 0x28);
    uVar19 = uVar11 - uVar12;
    if (uVar11 < uVar12) {
      uVar19 = uVar19 + puVar15[4];
    }
    dVar5 = *(double *)(param_1 + 0x80);
    lVar20 = (longlong)(int)(uVar19 & *puVar15) * 0x10;
    pdVar21 = *(double **)(*(longlong *)(puVar15 + 2) + lVar20);
    plVar17 = *(longlong **)(*(longlong *)(puVar15 + 2) + 8 + lVar20);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      uVar13 = *(uint *)(param_1 + 0x7c);
      uVar11 = *(uint *)(param_1 + 0x24);
      uVar18 = (ulonglong)(*(int *)(param_1 + 0x20) + -1);
      puVar15 = *(uint **)(param_1 + 0x28);
    }
    if ((longlong)(ulonglong)(uVar13 + 1) < (longlong)uVar18) {
      uVar18 = (ulonglong)(uVar13 + 1);
    }
    uVar13 = 0;
    if (0 < (longlong)uVar18) {
      uVar13 = (uint)uVar18;
    }
    uVar12 = uVar11 - uVar13;
    if (uVar11 < uVar13) {
      uVar12 = uVar12 + puVar15[4];
    }
    lVar20 = (longlong)(int)(uVar12 & *puVar15) * 0x10;
    pdVar22 = *(double **)(*(longlong *)(puVar15 + 2) + lVar20);
    plVar6 = *(longlong **)(*(longlong *)(puVar15 + 2) + 8 + lVar20);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    dVar4 = (double)(float)(dVar5 - (double)(float)((double)fVar25 * dVar4));
    plVar23 = plVar6;
    if (dVar4 < *pdVar22 + 9.999999747378752e-05) {
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar17 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      plVar17 = plVar6;
      pdVar21 = pdVar22;
      if (*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x78)) {
        uVar18 = (ulonglong)(*(int *)(param_1 + 0x7c) + 1);
        uVar16 = (ulonglong)(*(int *)(param_1 + 0x20) + -1);
        if ((longlong)uVar18 < (longlong)uVar16) {
          uVar16 = uVar18;
        }
        uVar18 = 0;
        if (0 < (longlong)uVar16) {
          uVar18 = uVar16;
        }
        puVar15 = *(uint **)(param_1 + 0x28);
        uVar13 = *(uint *)(param_1 + 0x24) - (uint)uVar18;
        if (*(uint *)(param_1 + 0x24) < (uint)uVar18) {
          uVar13 = uVar13 + puVar15[4];
        }
        lVar20 = (longlong)(int)(uVar13 & *puVar15) * 0x10;
        pdVar22 = *(double **)(*(longlong *)(puVar15 + 2) + lVar20);
        plVar23 = *(longlong **)(*(longlong *)(puVar15 + 2) + 8 + lVar20);
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
          UNLOCK();
        }
        if (plVar6 == (longlong *)0x0) {
          plVar17 = (longlong *)0x0;
        }
        else {
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
      }
    }
    fVar41 = (float)(*pdVar21 - *pdVar22);
    fVar25 = (float)(*pdVar21 - dVar4) / fVar41;
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
    }
    fVar40 = (float)(-(uint)(0.0 < fVar41) & (uint)fVar25);
    plVar6 = *(longlong **)(param_1 + 0xa0);
    *(double **)(param_1 + 0x98) = pdVar21;
    *(longlong **)(param_1 + 0xa0) = plVar17;
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
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0xb0);
    *(double **)(param_1 + 0xa8) = pdVar22;
    *(longlong **)(param_1 + 0xb0) = plVar23;
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
    *(float *)(param_1 + 0x90) = fVar40;
    if ((fVar41 <= 0.0) || (ABS(fVar25) <= 1e-05)) {
      local_e8._0_8_ = pdVar21[2];
      local_e8._8_8_ = pdVar21[3];
      local_d8 = *(undefined1 (*) [16])(pdVar21 + 4);
      dVar4 = pdVar21[6];
      dVar5 = pdVar21[7];
      dVar30 = pdVar21[8];
    }
    else if (ABS(fVar40 + -1.0) <= 1e-05) {
      local_e8._0_8_ = pdVar22[2];
      local_e8._8_8_ = pdVar22[3];
      local_d8 = *(undefined1 (*) [16])(pdVar22 + 4);
      dVar4 = pdVar22[6];
      dVar5 = pdVar22[7];
      dVar30 = pdVar22[8];
    }
    else {
      dVar38 = (double)fVar40;
      dVar39 = (double)fVar40;
      dVar36 = (double)DAT_149934d80 - dVar38;
      dVar37 = DAT_149934d80._8_8_ - dVar39;
      auVar35._0_8_ = pdVar21[8] * dVar36;
      auVar35._8_8_ = pdVar21[9] * dVar37;
      dVar4 = pdVar22[6] * dVar38 + pdVar21[6] * dVar36;
      dVar5 = pdVar22[7] * dVar39 + pdVar21[7] * dVar37;
      auVar32 = *(undefined1 (*) [16])(pdVar21 + 2);
      auVar28 = *(undefined1 (*) [16])(pdVar21 + 4);
      dVar30 = pdVar22[4] * auVar28._0_8_ + pdVar22[2] * auVar32._0_8_;
      dVar33 = pdVar22[5] * auVar28._8_8_ + pdVar22[3] * auVar32._8_8_;
      lVar20 = -(ulonglong)(0.0 <= dVar30 + dVar33);
      lVar24 = -(ulonglong)(0.0 <= dVar30 + dVar33);
      uVar26 = (undefined4)lVar24;
      uVar27 = (undefined4)((ulonglong)lVar24 >> 0x20);
      auVar31._0_8_ = 0.0 - auVar32._0_8_;
      auVar31._8_8_ = 0.0 - auVar32._8_8_;
      auVar7._8_4_ = uVar26;
      auVar7._0_8_ = lVar20;
      auVar7._12_4_ = uVar27;
      auVar32 = blendvpd(auVar31,auVar32,auVar7);
      auVar43._0_8_ = 0.0 - auVar28._0_8_;
      auVar43._8_8_ = 0.0 - auVar28._8_8_;
      dVar33 = auVar32._0_8_ * dVar36 + pdVar22[2] * dVar38;
      dVar34 = auVar32._8_8_ * dVar37 + pdVar22[3] * dVar39;
      auVar8._8_4_ = uVar26;
      auVar8._0_8_ = lVar20;
      auVar8._12_4_ = uVar27;
      auVar32 = blendvpd(auVar43,auVar28,auVar8);
      dVar42 = auVar32._0_8_ * dVar36 + pdVar22[4] * dVar38;
      dVar39 = auVar32._8_8_ * dVar37 + pdVar22[5] * dVar39;
      dVar36 = dVar42 * dVar42 + dVar33 * dVar33;
      dVar30 = dVar39 * dVar39 + dVar34 * dVar34;
      dVar37 = dVar36 + dVar30;
      dVar36 = dVar36 + dVar30;
      dVar30 = pdVar22[8] * dVar38 + auVar35._0_8_;
      uVar16 = -(ulonglong)(1e-08 <= dVar37);
      uVar18 = -(ulonglong)(1e-08 <= dVar36);
      auVar10._8_8_ = dVar36;
      auVar10._0_8_ = dVar37;
      auVar32 = sqrtpd(auVar35,auVar10);
      auVar32 = divpd(_DAT_149934d80,auVar32);
      auVar29._0_8_ = auVar32._0_8_ * dVar42;
      auVar29._8_8_ = auVar32._8_8_ * dVar39;
      local_e8._0_8_ = (ulonglong)(dVar33 * auVar32._0_8_) & uVar16;
      local_e8._8_8_ = (ulonglong)(dVar34 * auVar32._8_8_) & uVar18;
      auVar9._8_4_ = (int)uVar18;
      auVar9._0_8_ = uVar16;
      auVar9._12_4_ = (int)(uVar18 >> 0x20);
      local_d8 = blendvpd(_DAT_149935300,auVar29,auVar9);
    }
    FUN_1448052ee(local_e8,local_100);
    local_e8._8_4_ = SUB84(dVar5,0);
    local_e8._0_8_ = dVar4;
    local_e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_d8._0_8_ = dVar30;
    local_108 = 0;
    (**(code **)(*plVar14 + 0x4d0))(plVar14,local_e8,local_100,0);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      dVar4 = 5.0;
    }
    else {
      dVar4 = (double)*(float *)(*(longlong *)(param_1 + 0x40) + 0x28);
    }
    if ((*(int *)(param_1 + 0x78) <= *(int *)(param_1 + 0x7c)) ||
       ((float)(dVar4 + *(double *)(param_1 + 0x80) + 9.999999747378752e-05) < (float)dVar3)) {
      if (*(char *)(param_1 + 0x58) != '\0') {
        FUN_1407c9f6e(param_1,0);
        FUN_1418d9830(param_1 + 0x20);
      }
      FUN_140351c8e(param_1);
    }
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar23 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar2 = (int *)((longlong)plVar23 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar17 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401e6abc FUN_1401e6abc body=69 status=ok
// SIG undefined FUN_1401e6abc(void)

void FUN_1401e6abc(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x1c4) != param_2) {
    *(char *)(param_1 + 0x1c4) = param_2;
    if ((*(byte *)(param_1 + 0x55) & 2) != 0) {
      FUN_1401e6b02(param_1);
      param_2 = *(char *)(param_1 + 0x1c4);
    }
    FUN_140ecee9a(param_1 + 0xf8,param_2);
    return;
  }
  return;
}



// FUNCTION 1401e6b02 FUN_1401e6b02 body=221 status=ok
// SIG undefined FUN_1401e6b02(void)

void FUN_1401e6b02(longlong param_1)

{
  float fVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar4 = FUN_1447210f0();
    if (lVar4 != 0) {
      FUN_14036aa80(param_1);
      *(undefined1 *)(param_1 + 0x1ac) = *(undefined1 *)(param_1 + 0x1c4);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1d0);
      FUN_140841e14(param_1 + 0x194,1);
      *(undefined1 *)(param_1 + 0x1ad) = *(undefined1 *)(param_1 + 0x198);
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1a4);
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      if (*(char *)(param_1 + 0x1c4) != '\0') {
        iVar3 = FUN_1410ab1f0(param_1);
        fVar1 = *(float *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar3 * 0x20);
        if (0.0 < fVar1) {
          pfVar5 = (float *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar3 * 0x20);
          dVar2 = *(double *)(lVar4 + 0x6d0);
          *(float *)(param_1 + 0x1b0) = 1.0 / fVar1;
          *(float *)(param_1 + 0x1b4) = ((float)dVar2 - pfVar5[1]) / *pfVar5;
        }
      }
    }
  }
  return;
}



// FUNCTION 1401e6be0 FUN_1401e6be0 body=129 status=ok
// SIG undefined FUN_1401e6be0(void)

int FUN_1401e6be0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 < 1) {
    iVar6 = 1;
    if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0xc))) &&
         (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
        lVar2 = FUN_1401e6c9b();
        if (lVar2 != 0) {
          uVar3 = FUN_1401e6c61();
          piVar4 = (int *)FUN_1409e484c(lVar2,uVar3);
          iVar6 = *piVar4;
        }
      }
    }
  }
  return iVar6;
}



// FUNCTION 1401e6c61 FUN_1401e6c61 body=58 status=ok
// SIG undefined FUN_1401e6c61(void)

void FUN_1401e6c61(void)

{
  if (DAT_14cb79120 == 0) {
    if (DAT_14cb758b8 == 0) {
      DAT_14cb79120 = 0;
    }
    else {
      DAT_14cb79120 = FUN_144837462(DAT_14cb758b8,&DAT_14cb790d0);
    }
  }
  return;
}



// FUNCTION 1401e6c9b FUN_1401e6c9b body=271 status=ok
// SIG undefined FUN_1401e6c9b(void)

longlong FUN_1401e6c9b(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1401e6dab();
  if (lVar1 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464f5fc4;
      local_38 = &LAB_148c3dd26;
      local_40 = &LAB_1459673ba;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) goto LAB_1401e6ce6;
  }
  lVar1 = 0;
LAB_1401e6ce6:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e6dab FUN_1401e6dab body=227 status=ok
// SIG undefined FUN_1401e6dab(void)

longlong FUN_1401e6dab(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_1[0x76] != 0) {
    return param_1[0x76];
  }
  if (*(code **)(*param_1 + 0x5f8) == FUN_144784df4) {
    if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
      if (*(int *)((longlong)param_1 + 0x75b4) == 0) {
        return 0;
      }
      uVar1 = *(uint *)(param_1 + 0xeb6);
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      plVar2 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      if ((int)plVar2[2] != *(int *)((longlong)param_1 + 0x75b4)) {
        return 0;
      }
      if ((*(uint *)(plVar2 + 1) & 0x10200000) != 0) {
        return 0;
      }
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      lVar3 = lVar3 + 0x110;
    }
    else {
      lVar3 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
    }
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x5f8))();
  }
  if (lVar3 == 0) {
    return 0;
  }
  return *(longlong *)(lVar3 + 0x3b0);
}



// FUNCTION 1401e6e8e FUN_1401e6e8e body=258 status=ok
// SIG undefined FUN_1401e6e8e(void)

uint FUN_1401e6e8e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  byte local_1a [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb425e8 < *(uint *)(param_1 + 0x28)) {
    uVar1 = *(uint *)(param_1 + 0x24);
    goto LAB_1401e6eb4;
  }
  lVar2 = FUN_140032b16(0);
  lVar2 = *(longlong *)(lVar2 + 0x88);
  if (lVar2 == 0) {
    if (((DAT_14cb425d4 != 0) && (-1 < (int)DAT_14cb425d0)) && ((int)DAT_14cb425d0 < DAT_14c9647dc))
    {
      plVar3 = (longlong *)
               ((ulonglong)((DAT_14cb425d0 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cb425d0 >> 0x10) * 8));
      if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == DAT_14cb425d4)) &&
         (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar2 = *plVar3, lVar2 != 0))))
      goto LAB_1401e6f3f;
    }
    lVar2 = FUN_140032b16(0);
    lVar2 = *(longlong *)(lVar2 + 0x78);
  }
LAB_1401e6f3f:
  iVar4 = DAT_14c762948;
  if (DAT_14c762948 == -1) {
    iVar4 = DAT_14c762934;
  }
  if (DAT_14c762938 != -1) {
    iVar4 = DAT_14c762938;
  }
  local_38 = 1;
  FUN_1406d5d50(param_1,local_1a,lVar2,iVar4);
  uVar1 = *(uint *)(param_1 + 0x24) & 0xfffffffe | (uint)local_1a[0];
  *(uint *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = DAT_14c75b13c;
LAB_1401e6eb4:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e6f92 FUN_1401e6f92 body=175 status=ok
// SIG undefined FUN_1401e6f92(void)

undefined8 FUN_1401e6f92(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (0.0 < *(float *)(param_1 + 0x50)) {
    lVar1 = FUN_14058c572();
    if (lVar1 != 0) {
      lVar2 = FUN_1447e736e(lVar1 + 0x708);
      if (lVar2 == 0) {
        lVar1 = lVar1 + 0x688;
      }
      else {
        lVar1 = FUN_1447e736e(lVar1 + 0x708);
        lVar1 = lVar1 + 0x30;
      }
      if (lVar1 != 0) {
        fVar4 = -1.0;
        if (*(longlong *)(param_1 + 0x18) != 0) {
          lVar2 = FUN_1447210f0();
          if (lVar2 != 0) {
            fVar4 = (float)*(double *)(lVar2 + 0x6d0);
          }
        }
        uVar3 = FUN_1448c9f94(lVar1,fVar4 - *(float *)(param_1 + 0x50),0);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1401e7042 FUN_1401e7042 body=130 status=ok
// SIG undefined FUN_1401e7042(void)

void FUN_1401e7042(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  char local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401e70c6(param_1,&local_20);
  if (local_1c == '\0') {
    if (*(longlong *)(param_1 + 0x4210) == 0) {
      local_20 = 0x3f800000;
    }
    else {
      local_20 = *(undefined4 *)
                  (param_1 + 0x423c + (ulonglong)(0.0 < *(double *)(param_1 + 0x138)) * 4);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20);
  }
  return;
}



// FUNCTION 1401e70c6 FUN_1401e70c6 body=360 status=ok
// SIG undefined FUN_1401e70c6(void)

float * FUN_1401e70c6(longlong param_1,float *param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(param_1 + 0x42a0) == 0) && (*(char *)(param_1 + 0x42b4) != '\x01')) {
LAB_1401e70ff:
    uVar1 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x4210) == 0) {
      fVar8 = 1.0;
    }
    else {
      fVar8 = *(float *)(param_1 + 0x423c + (ulonglong)(0.0 < *(double *)(param_1 + 0x138)) * 4);
    }
    if (*(char *)(param_1 + 0x42b4) == '\x01') {
      cVar2 = FUN_144729dda(param_1 + 0x42a8);
      if (cVar2 == '\0') goto LAB_1401e71a4;
      lVar3 = FUN_14479d2ce(param_1 + 0x42a8);
      fVar7 = *(float *)(lVar3 + 0x268);
      if (*(char *)(lVar3 + 0x264) == '\0') {
        fVar7 = fVar7 * fVar8;
      }
    }
    else {
LAB_1401e71a4:
      FUN_140bdfda8(param_1,local_70);
      if (local_58 != '\x01') goto LAB_1401e70ff;
      fVar7 = fVar8;
      if ((longlong)*(int *)(param_1 + 0x42a0) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x4298);
        lVar5 = (longlong)*(int *)(param_1 + 0x42a0) * 0xc;
        fVar7 = 1.0;
        bVar6 = 0;
        do {
          cVar2 = FUN_144729dda(lVar3);
          if (cVar2 != '\0') {
            lVar4 = FUN_14479d2ce(lVar3);
            fVar7 = fVar7 * *(float *)(lVar4 + 0x268);
            bVar6 = bVar6 | *(byte *)(lVar4 + 0x264);
          }
          lVar3 = lVar3 + 0xc;
          lVar5 = lVar5 + -0xc;
        } while (lVar5 != 0);
        if ((bVar6 & 1) == 0) {
          fVar7 = fVar7 * fVar8;
        }
      }
    }
    *param_2 = fVar7;
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar1;
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1401e7230 FUN_1401e7230 body=417 status=ok
// SIG undefined FUN_1401e7230(void)

undefined8 FUN_1401e7230(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
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
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_140153468();
  if (lVar3 == 0) goto LAB_1401e7308;
  lVar3 = FUN_140153468(param_1);
  cVar1 = *(char *)(lVar3 + 0x608);
  if (cVar1 == '\x02') {
    fVar6 = *(float *)(param_1 + 0x1e8);
    uVar7 = 0;
  }
  else {
    if (cVar1 == '\x01') {
      if (DAT_14caf84d0 == (longlong *)0x0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_145a62952;
        local_58 = &LAB_147c8cd45;
        local_60 = &LAB_1461468ae;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000006;
        local_80 = 8;
        local_88 = 0x218;
        FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
      }
      plVar2 = DAT_14caf84d0;
      lVar3 = DAT_14caf84d0[0x22];
      if (lVar3 == 0) {
        (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
        lVar3 = plVar2[0x22];
      }
      fVar6 = *(float *)(lVar3 + 0x38);
      uVar7 = 0;
    }
    else if (cVar1 != '\0') goto LAB_1401e72c9;
    fVar6 = fVar6 * *(float *)(param_1 + 0x1e8);
  }
LAB_1401e72c9:
  lVar4 = FUN_140153468(param_1);
  lVar3 = *(longlong *)(lVar4 + 0x690) + 0x30;
  if (*(longlong *)(lVar4 + 0x690) == 0) {
    lVar3 = lVar4 + 0x610;
  }
  if (0 < *(int *)(lVar3 + 0x78)) {
    fVar5 = (float)FUN_1448c9f94(lVar3,*(undefined4 *)(param_1 + 0x88),0x3f800000);
    fVar6 = fVar6 * fVar5;
  }
LAB_1401e7308:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar7,fVar6);
}



// FUNCTION 1401e73d2 FUN_1401e73d2 body=413 status=ok
// SIG undefined FUN_1401e73d2(void)

undefined8 *
FUN_1401e73d2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar6 + 0x36;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x1c0);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar6 + 0x36;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar6 = &PTR_FUN_14a20ab08;
  puVar3 = puVar6 + 2;
  FUN_1448e52fe(puVar3);
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar6;
  FUN_1448c58dc(param_2,&local_68);
  *(undefined4 *)(puVar6 + 4) = local_58;
  *(undefined4 *)((longlong)puVar6 + 0x24) = uStack_54;
  *(undefined4 *)(puVar6 + 5) = uStack_50;
  *(undefined4 *)((longlong)puVar6 + 0x2c) = uStack_4c;
  *(undefined4 *)puVar3 = local_68;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_64;
  *(undefined4 *)(puVar6 + 3) = uStack_60;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_5c;
  puVar6[0x2e] = param_3;
  puVar6[0x2f] = 0;
  *(undefined2 *)(puVar6 + 0x30) = 0x101;
  *(undefined4 *)((longlong)puVar6 + 0x184) = 0x22;
  uVar4 = FUN_1448e5724(param_1,param_4);
  lVar5 = FUN_1448e53bc();
  cVar2 = *(char *)(lVar5 + 0x41);
  if (cVar2 == '\x03') {
    cVar2 = '\x02';
  }
  puVar6[0x12] = uVar4;
  *(char *)(puVar6 + 0x13) = cVar2;
  uVar4 = FUN_1401e7570(param_1,param_2,0,0);
  FUN_1448e5570();
  cVar2 = DAT_14c9c56a1;
  if (DAT_14c9c56a1 == '\x03') {
    cVar2 = '\x02';
  }
  puVar6[0x14] = uVar4;
  *(char *)(puVar6 + 0x15) = cVar2;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e7570 FUN_1401e7570 body=858 status=ok
// SIG undefined FUN_1401e7570(void)

undefined8 * FUN_1401e7570(longlong param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar10 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x40);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar10 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar10 = &PTR_FUN_14a20ad20;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar4);
  }
  puVar5 = puVar10 + 2;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar10;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    uVar6 = FUN_14476842e(param_1,&DAT_14ca63ba8,L"DepthDummy",2);
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x348) + 0x1e8);
  }
  *puVar5 = uVar6;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar7 = FUN_14476842e(param_1,&DAT_14ca63bb0,L"StencilDummy",2);
    if ((*(char *)(lVar7 + 0x92) == '\x04') || (*(char *)(lVar7 + 0x92) == '\x01')) {
      uVar8 = *(undefined2 *)(lVar7 + 0x8e);
    }
    else {
      uVar8 = 0;
    }
    uVar3 = *(undefined1 *)(lVar7 + 0x90);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(puVar1,0x48);
      puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar11[1] = *(undefined8 *)(lVar7 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 1;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *puVar11 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar11 + 5) = 0x3c;
    *(undefined1 *)((longlong)puVar11 + 0x2a) = uVar3;
    *(undefined1 *)((longlong)puVar11 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar11 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar11 + 0x2e) = uVar8;
    *(undefined1 *)(puVar11 + 6) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
    puVar11[7] = lVar7;
    iVar4 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  }
  else {
    puVar11 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x348) + 0x208);
  }
  puVar10[3] = puVar11;
  puVar10[4] = DAT_14c9c0d80;
  *(uint *)(puVar10 + 5) = param_3 & 0xff;
  *(undefined4 *)((longlong)puVar10 + 0x2c) = param_4;
  FUN_1448e5570();
  uVar6 = DAT_14c9c5678;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar9 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x50);
    puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar9 + 9;
  }
  *puVar1 = (ulonglong)puVar10;
  puVar9[1] = uVar6;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_14a1fb9b8;
  FUN_1448e5570();
  puVar9[3] = puVar5;
  lVar7 = DAT_14c9c56a8;
  puVar9[4] = DAT_14c9c56a8;
  if (lVar7 != 0) {
    LOCK();
    piVar2 = (int *)(lVar7 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puVar9[5] = &DAT_14c9c5660;
  puVar9[6] = 0;
  *(undefined4 *)(puVar9 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar9 + 0x3c) = 0;
  *puVar9 = &PTR_FUN_14a20ad28;
  puVar9[8] = puVar5;
  iVar4 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar4 + 1U) {
    FUN_1402aa76e(param_1 + 0x1a8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar4 * 8) = puVar9;
  *(int *)(puVar9 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  return puVar9;
}



// FUNCTION 1401e78ca FUN_1401e78ca body=202 status=ok
// SIG undefined FUN_1401e78ca(void)

void FUN_1401e78ca(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401e7996();
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    uStack_34 = *(undefined4 *)(param_1 + 0xb0);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_30 = param_2[5];
    uStack_2c = param_2[7];
    local_28 = param_2[8];
    uStack_24 = param_2[9];
    uStack_20 = param_2[10];
    uStack_1c = param_2[0xb];
    if ((plVar1[1] != 0) && ((*(byte *)(plVar1[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_48,plVar1);
      FUN_144b1fd46(&local_48,*(undefined8 *)(param_1 + 0xa8));
      FUN_144b1fe18(&local_48,*(undefined8 *)(param_1 + 0xa8));
      plVar1 = *(longlong **)(param_1 + 0xa8);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e7996 FUN_1401e7996 body=138 status=ok
// SIG undefined FUN_1401e7996(void)

void FUN_1401e7996(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = FUN_14477dc2a();
  FUN_14477dadc(uVar2,param_2);
  if ((((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x4c))) &&
      ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar4;
    }
    else {
      lVar3 = 0;
    }
    if (*(longlong *)(param_1 + 0x40) == lVar3) {
      return;
    }
  }
  FUN_1401e7a20(param_1,*param_2);
  return;
}



// FUNCTION 1401e7a20 FUN_1401e7a20 body=226 status=ok
// SIG undefined FUN_1401e7a20(void)

void FUN_1401e7a20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x40);
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  else if (lVar6 == 0) {
    uVar5 = 0;
    uVar3 = 0;
    goto LAB_1401e7a84;
  }
  uVar5 = *(uint *)(lVar6 + 0xc);
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar6 = 0;
  }
  uVar3 = (ulonglong)*(uint *)(lVar6 + 0x10);
  if (*(uint *)(lVar6 + 0x10) == 0) {
    LOCK();
    iVar1 = DAT_14c964868 + 1;
    UNLOCK();
    uVar4 = DAT_14c964868 + 1;
    bVar7 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar1;
    if (bVar7) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar4);
    }
    LOCK();
    uVar2 = *(uint *)(lVar6 + 0x10);
    bVar7 = uVar2 == 0;
    if (bVar7) {
      *(uint *)(lVar6 + 0x10) = uVar4;
      uVar2 = 0;
    }
    UNLOCK();
    if (bVar7) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
  }
LAB_1401e7a84:
  *(ulonglong *)(param_1 + 0x48) = (ulonglong)uVar5 | uVar3 << 0x20;
  FUN_1408bce38(param_1,param_2);
  return;
}



// FUNCTION 1401e7b02 FUN_1401e7b02 body=129 status=ok
// SIG undefined FUN_1401e7b02(void)

longlong FUN_1401e7b02(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  
  FUN_1401e7b83(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  lVar1 = *(longlong *)(param_1 + 8);
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



// FUNCTION 1401e7b83 FUN_1401e7b83 body=135 status=ok
// SIG undefined FUN_1401e7b83(void)

void FUN_1401e7b83(longlong *param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = 0x20;
    do {
      FUN_1400200e4((longlong)param_1 + lVar1);
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
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
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 1401e7c1c FUN_1401e7c1c body=85 status=ok
// SIG undefined FUN_1401e7c1c(void)

void FUN_1401e7c1c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1401e7ce8();
  FUN_1401e7c72(*(undefined8 *)(param_1 + 0x38),param_3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e7c72 FUN_1401e7c72 body=117 status=ok
// SIG undefined FUN_1401e7c72(void)

void FUN_1401e7c72(undefined8 *param_1)

{
  rowBuilder *prVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [16];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401e7e86(local_38);
  prVar1 = (rowBuilder *)*param_1;
  FUN_14482e566(local_38);
  local_40 = local_20 + local_28;
  local_48 = local_28;
  bifrost::telemetry::rowBuilder::vString(prVar1);
  FUN_1401e7e48(local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e7ce8 FUN_1401e7ce8 body=212 status=ok
// SIG undefined FUN_1401e7ce8(void)

void FUN_1401e7ce8(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = FUN_1401e7ee8(DAT_14cb97a28,0);
    FUN_1401e7dd2(uVar3,uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = FUN_1401e7ee8(*param_2,*param_3);
    FUN_1401e7c72(uVar3,uVar1);
    uVar3 = 0;
    lVar2 = DAT_14cb97a30;
  }
  else {
    if (*param_2 == 0) {
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_1401e7dd2(*(undefined8 *)(param_1 + 0x38),local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    uVar3 = *param_3;
    lVar2 = *param_2;
  }
  FUN_1401e7ee8(lVar2,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_58);
}



// FUNCTION 1401e7dd2 FUN_1401e7dd2 body=117 status=ok
// SIG undefined FUN_1401e7dd2(void)

void FUN_1401e7dd2(undefined8 *param_1)

{
  rowBuilder *prVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [16];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401e7e86(local_38);
  prVar1 = (rowBuilder *)*param_1;
  FUN_14482e566(local_38);
  local_40 = local_20 + local_28;
  local_48 = local_28;
  bifrost::telemetry::rowBuilder::key(prVar1);
  FUN_1401e7e48(local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e7e48 FUN_1401e7e48 body=62 status=ok
// SIG undefined FUN_1401e7e48(void)

void FUN_1401e7e48(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1401e7e86 FUN_1401e7e86 body=97 status=ok
// SIG undefined FUN_1401e7e86(void)

undefined8 * FUN_1401e7e86(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 1401e7ee8 FUN_1401e7ee8 body=1868 status=ok
// SIG undefined FUN_1401e7ee8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1401e7ee8(longlong param_1,longlong param_2)

{
  void *_Dst;
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = param_2;
  local_a0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9a3c60) && (FUN_144b3d300(&DAT_14c9a3c60), DAT_14c9a3c60 == -1)) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a3c38);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c9a3c38,4000);
    atexit((_func_5014 *)&LAB_142b2f9f8);
    _Init_thread_footer(&DAT_14c9a3c60);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9a3cb8) && (FUN_144b3d300(&DAT_14c9a3cb8), DAT_14c9a3cb8 == -1)) {
    DAT_14c9a3c88 = (undefined *)0x0;
    DAT_14c9a3c90 = 0;
    DAT_14c9a3c68 = 0;
    _DAT_14c9a3c70 = 0;
    _DAT_14c9a3c94 = 0xffffffff00000080;
    DAT_14c9a3c9c = 0;
    DAT_14c9a3ca8 = (undefined *)0x0;
    DAT_14c9a3cb0 = 0;
    atexit(FUN_142b2fa06);
    _Init_thread_footer(&DAT_14c9a3cb8);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a3c38);
  uVar11 = _DAT_14c9a3c70;
  uVar13 = (uint)((ulonglong)param_1 >> 0x10);
  uVar2 = (uint)param_1 & 0xffff;
  uVar13 = ((uint)param_1 << 0x10 | uVar2) + (int)((ulonglong)param_1 >> 0x20) +
           (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar2 >> 4);
  iVar12 = DAT_14c9a3c70;
  if (DAT_14c9a3c70 != DAT_14c9a3c9c) {
    puVar4 = &DAT_14c9a3ca0;
    if (DAT_14c9a3ca8 != (undefined *)0x0) {
      puVar4 = DAT_14c9a3ca8;
    }
    iVar14 = *(int *)(puVar4 + (ulonglong)(DAT_14c9a3cb0 - 1U & uVar13) * 4);
    while (iVar14 != -1) {
      lVar3 = DAT_14c9a3c68 + (longlong)iVar14 * 0x60;
      if (*(longlong *)(DAT_14c9a3c68 + (longlong)iVar14 * 0x60) == param_1) {
        if (lVar3 != 0) goto LAB_1401e8250;
        break;
      }
      iVar14 = *(int *)(lVar3 + 0x58);
    }
  }
  if (DAT_14c9a3c9c == 0) {
    _DAT_14c9a3c70 = CONCAT44(DAT_14c9a3c74,DAT_14c9a3c70 + 1);
    if (DAT_14c9a3c74 == iVar12) {
      FUN_14488f93c(&DAT_14c9a3c68,uVar11 & 0xffffffff);
    }
    iVar14 = DAT_14c9a3c90;
    if (DAT_14c9a3c90 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = DAT_14c9a3c90 + 0x1e;
      if (-1 < DAT_14c9a3c90 + -1) {
        iVar1 = DAT_14c9a3c90 + -1;
      }
      iVar1 = iVar1 >> 5;
    }
    iVar9 = DAT_14c9a3c90 + 1;
    iVar15 = DAT_14c9a3c90 + 0x1f;
    if (-1 < DAT_14c9a3c90) {
      iVar15 = DAT_14c9a3c90;
    }
    if (iVar15 >> 5 != iVar1) {
      if (DAT_14c9a3c94 <= DAT_14c9a3c90) {
        if (DAT_14c9a3c90 + 0x20U < 0xa0) {
          iVar1 = 0x80;
        }
        else {
          uVar2 = DAT_14c9a3c90 + 0x20U >> 5;
          if (DAT_14c9a3c94 + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar2) {
              uVar8 = uVar2;
            }
          }
          else {
            uVar8 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar8 << 2,0);
          iVar9 = (int)(uVar11 >> 2);
          iVar1 = -0x20;
          if ((int)uVar2 <= iVar9) {
            iVar1 = iVar9 << 5;
          }
        }
        _DAT_14c9a3c94 = CONCAT44(DAT_14c9a3c98,iVar1);
        FUN_1446efbd8(&DAT_14c9a3c78,DAT_14c9a3c90);
        iVar9 = DAT_14c9a3c90 + 1;
      }
      iVar1 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar1 = iVar9;
      }
      if (iVar9 % 0x20 != 0) {
        puVar4 = &DAT_14c9a3c78;
        if (DAT_14c9a3c88 != (undefined *)0x0) {
          puVar4 = DAT_14c9a3c88;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        DAT_14c9a3c90 = iVar9;
        *(uint *)(puVar4 + (longlong)(iVar1 >> 5) * 4) =
             (uint)(*(int *)(puVar4 + (longlong)(iVar1 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
        iVar9 = DAT_14c9a3c90;
      }
    }
    DAT_14c9a3c90 = iVar9;
    lVar3 = (longlong)iVar12;
    puVar4 = &DAT_14c9a3c78;
    if (DAT_14c9a3c88 != (undefined *)0x0) {
      puVar4 = DAT_14c9a3c88;
    }
    bVar7 = (byte)iVar14 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar15 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar15 >> 5) * 4) &
         (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar12 = DAT_14c9a3c98;
    lVar3 = (longlong)DAT_14c9a3c98;
    iVar14 = *(int *)(DAT_14c9a3c68 + 4 + lVar3 * 0x60);
    _DAT_14c9a3c94 = CONCAT44(iVar14,DAT_14c9a3c94);
    DAT_14c9a3c9c = DAT_14c9a3c9c + -1;
    if (DAT_14c9a3c9c != 0) {
      *(undefined4 *)(DAT_14c9a3c68 + (longlong)iVar14 * 0x60) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a3c78;
  if (DAT_14c9a3c88 != (undefined *)0x0) {
    puVar4 = DAT_14c9a3c88;
  }
  iVar14 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar14 = iVar12;
  }
  *(uint *)(puVar4 + (longlong)(iVar14 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar14 >> 5) * 4) | 1 << ((byte)iVar12 & 0x1f);
  iVar14 = 1;
  plVar5 = (longlong *)(DAT_14c9a3c68 + lVar3 * 0x60);
  local_78 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_70 = 0x8000000000;
  local_68 = 0xffffffff;
  plVar10 = (longlong *)(DAT_14c9a3c68 + lVar3 * 0x60);
  *plVar10 = param_1;
  FUN_140d69258(plVar10 + 1,&local_98);
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(&local_98);
  *(undefined4 *)(plVar5 + 0xb) = 0xffffffff;
  uVar2 = DAT_14c9a3c70 - DAT_14c9a3c9c;
  if (uVar2 != 1) {
    if (DAT_14c9a3c70 != DAT_14c9a3c9c) {
      puVar4 = &DAT_14c9a3ca0;
      if (DAT_14c9a3ca8 != (undefined *)0x0) {
        puVar4 = DAT_14c9a3ca8;
      }
      iVar1 = *(int *)(puVar4 + (ulonglong)(DAT_14c9a3cb0 - 1U & uVar13) * 4);
      if (iVar1 != -1) {
        do {
          _Dst = (void *)(DAT_14c9a3c68 + (longlong)iVar1 * 0x60);
          if (*(longlong *)(DAT_14c9a3c68 + (longlong)iVar1 * 0x60) == *plVar5) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            FUN_140bb2a1a((longlong)_Dst + 8);
            memmove(_Dst,plVar5,0x58);
            FUN_1470b54fe(iVar12);
            goto LAB_1401e8228;
          }
          iVar1 = *(int *)((longlong)_Dst + 0x58);
        } while (iVar1 != -1);
      }
    }
    if (3 < uVar2) {
      uVar11 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar3 & 0x1f);
    }
  }
  if (((int)uVar2 < 1) || (iVar14 <= DAT_14c9a3cb0)) {
    uVar13 = DAT_14c9a3cb0 - 1U & uVar13;
    *(uint *)((longlong)plVar5 + 0x5c) = uVar13;
    puVar4 = DAT_14c9a3ca8;
    if (DAT_14c9a3ca8 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a3ca0;
    }
    *(undefined4 *)(plVar5 + 0xb) =
         *(undefined4 *)(puVar4 + ((longlong)DAT_14c9a3cb0 - 1U & (longlong)(int)uVar13) * 4);
    puVar4 = DAT_14c9a3ca8;
    if (DAT_14c9a3ca8 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a3ca0;
    }
    *(int *)(puVar4 + ((longlong)DAT_14c9a3cb0 - 1U & (longlong)(int)uVar13) * 4) = iVar12;
  }
  else {
    DAT_14c9a3cb0 = iVar14;
    FUN_1401e891e();
  }
LAB_1401e8228:
  lVar3 = (longlong)iVar12 * 0x60 + DAT_14c9a3c68;
LAB_1401e8250:
  uVar13 = (uint)((ulonglong)param_2 >> 0x10);
  uVar2 = (uint)param_2 & 0xffff;
  plVar5 = (longlong *)
           FUN_1401e8636(lVar3 + 8,
                         ((uint)param_2 << 0x10 | uVar2) + (int)((ulonglong)param_2 >> 0x20) +
                         (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar2 >> 4),&local_a8);
  if (*(uint *)(plVar5 + 1) < 2) {
    if (local_a8 == 0) {
      FUN_1400021e4(&local_a0,&local_98);
      if (plVar5 == &local_98) {
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar5 != 0) {
          FUN_1400020a8();
        }
        *plVar5 = local_98;
        local_98 = 0;
        *(undefined4 *)(plVar5 + 1) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)plVar5 + 0xc) = uStack_90._4_4_;
      }
    }
    else {
      uVar6 = FUN_1401e7ee8(param_1,0);
      FUN_1449b8608(&local_98,uVar6,&DAT_149e01f60);
      if (plVar5 == &local_98) {
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar5 != 0) {
          FUN_1400020a8();
        }
        *plVar5 = local_98;
        local_98 = 0;
        *(undefined4 *)(plVar5 + 1) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)plVar5 + 0xc) = uStack_90._4_4_;
      }
      FUN_140180cec(&local_a8,plVar5);
    }
    FUN_1401e8822(plVar5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a3c38);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e8636 FUN_1401e8636 body=190 status=ok
// SIG undefined FUN_1401e8636(void)

longlong FUN_1401e8636(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1401e8698;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1401e86f6(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1401e8698:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1401e86f6 FUN_1401e86f6 body=299 status=ok
// SIG undefined FUN_1401e86f6(void)

undefined4 *
FUN_1401e86f6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406e28c6(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1406e2804(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1406e2aa2(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e8822 FUN_1401e8822 body=251 status=ok
// SIG undefined FUN_1401e8822(void)

void FUN_1401e8822(undefined8 *param_1)

{
  ushort _C;
  uint uVar1;
  wint_t *pwVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 1) - 2U < 0x7fffffff) {
    iVar4 = 0;
    do {
      pwVar2 = (wint_t *)*param_1;
      if ((iVar4 == 0) && (iVar3 = iswdigit(*pwVar2), iVar3 != 0)) {
        uVar1 = *(uint *)(param_1 + 1);
        *(uint *)(param_1 + 1) = uVar1 + 2;
        if (*(int *)((longlong)param_1 + 0xc) - uVar1 < 2) {
          FUN_144a2dbb8(param_1,uVar1);
        }
        memmove((void *)((longlong)*param_1 + 4),(void *)*param_1,(ulonglong)uVar1 * 2);
        *(undefined4 *)*param_1 = 0x5f006e;
        iVar4 = 2;
      }
      else {
        iVar3 = iswalpha(pwVar2[iVar4]);
        _C = pwVar2[iVar4];
        if (iVar3 == 0) {
          iVar3 = iswdigit(_C);
          _C = pwVar2[iVar4];
          if (_C != 0x5f && iVar3 == 0) {
            pwVar2[iVar4] = 0x5f;
            goto LAB_1401e888b;
          }
        }
        pwVar2[iVar4] = (ushort)(_C - 0x41 < 0x1a) * 0x20 + _C;
      }
LAB_1401e888b:
      iVar4 = iVar4 + 1;
      iVar3 = *(int *)(param_1 + 1) + -1;
      if (*(int *)(param_1 + 1) == 0) {
        iVar3 = 0;
      }
    } while (iVar4 < iVar3);
  }
  return;
}



// FUNCTION 1401e891e FUN_1401e891e body=632 status=ok
// SIG undefined FUN_1401e891e(void)

void FUN_1401e891e(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a3ca8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a3ca8,0,0,4);
  }
  uVar5 = DAT_14c9a3cb0;
  if (DAT_14c9a3cb0 != 0) {
    FUN_144a1cbf0(&DAT_14c9a3ca0,0,DAT_14c9a3cb0,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        puVar7 = DAT_14c9a3ca8;
        if (DAT_14c9a3ca8 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a3ca0;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c9a3cb0 + 0x7fffffff & uVar3) * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14c9a3c78;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14c9a3c90 == 0) {
      uVar8 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar8 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar5 = (uint)local_50;
    iVar6 = local_50._4_4_;
    iVar9 = local_48;
    if (local_50._4_4_ < *(int *)(local_58 + 0x18)) {
      do {
        lVar13 = DAT_14c9a3c68;
        lVar12 = (longlong)iVar6 * 0x60;
        uVar1 = *(undefined8 *)(DAT_14c9a3c68 + lVar12);
        uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
        uVar14 = (uint)uVar1 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar1 << 0x10 | uVar14) + (int)((ulonglong)uVar1 >> 0x20) +
                       (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) &
                 (longlong)(int)DAT_14c9a3cb0 - 1U;
        iVar10 = (int)uVar11;
        *(int *)(DAT_14c9a3c68 + 0x5c + lVar12) = iVar10;
        puVar7 = DAT_14c9a3ca8;
        if (DAT_14c9a3ca8 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a3ca0;
        }
        *(undefined4 *)(lVar13 + 0x58 + lVar12) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14c9a3cb0 - 1U & uVar11) * 4);
        puVar7 = DAT_14c9a3ca8;
        if (DAT_14c9a3ca8 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a3ca0;
        }
        *(int *)(puVar7 + ((longlong)iVar10 & (longlong)(int)DAT_14c9a3cb0 - 1U) * 4) = iVar6;
        uVar5 = ~(uint)uVar8 & uVar5;
        puVar7 = *(undefined **)(local_58 + 0x10);
        if (*(undefined **)(local_58 + 0x10) == (undefined *)0x0) {
          puVar7 = local_58;
        }
        iVar10 = *(int *)(local_58 + 0x18);
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)(puVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar6 = iVar10 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)(puVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_1401e8b4f;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar11 = uVar8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar10);
    }
  }
LAB_1401e8b4f:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401e8b98 FUN_1401e8b98 body=154 status=ok
// SIG undefined FUN_1401e8b98(void)

longlong FUN_1401e8b98(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_1401e8bc4;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_1401e8bc4:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_1401e8c32(param_1,param_2);
  return param_1;
}



// FUNCTION 1401e8c32 FUN_1401e8c32 body=317 status=ok
// SIG undefined FUN_1401e8c32(void)

undefined8 * FUN_1401e8c32(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1401e8d70(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar4 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar4,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
        }
        else {
          FUN_14713a45e(puVar7,puVar8);
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 8;
        puVar7 = puVar7 + 8;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1401e8d70 FUN_1401e8d70 body=384 status=ok
// SIG undefined FUN_1401e8d70(void)

void FUN_1401e8d70(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401e8ef2 FUN_1401e8ef2 body=111 status=ok
// SIG undefined FUN_1401e8ef2(void)

void FUN_1401e8ef2(longlong param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  if ((param_6 >> 0x1a & 1) == 0) {
    FUN_1401e8f61(*(undefined8 *)(param_1 + 0x78),param_1,plVar1,L"FEnumProperty",param_2,param_3,
                  param_4,param_7);
    return;
  }
  if (param_4 == 1) {
    param_3 = param_3 + *(int *)(param_1 + 0x44);
  }
                    /* WARNING: Could not recover jumptable at 0x0001401e8f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xf8))(plVar1,param_2,param_3,0);
  return;
}



// FUNCTION 1401e8f61 FUN_1401e8f61 body=1214 status=ok
// SIG undefined FUN_1401e8f61(void)

short * FUN_1401e8f61(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                     short *param_5,longlong param_6,int param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  short *psVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *_Dst;
  wchar_t *pwVar9;
  ulonglong uVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  code *local_c8;
  undefined2 *local_c0;
  wchar_t *local_b8;
  wchar_t *local_b0;
  longlong *local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  int local_88;
  undefined8 local_80;
  wchar_t *local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  undefined1 local_59;
  code *local_58;
  undefined2 **ppuStack_50;
  ulonglong local_48;
  
  lVar8 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar1 = *(byte *)(param_1 + 0x51);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  uVar10 = 0;
  psVar6 = param_5;
  local_a0 = param_2;
  local_98 = param_4;
LAB_1401e8fc8:
  do {
    psVar3 = (short *)FUN_1401e9420(psVar6,&local_78,1);
    psVar6 = (short *)0x0;
    param_5 = psVar3;
  } while (psVar3 == (short *)0x0);
  pwVar9 = L"";
  if ((int)uStack_70 != 0) {
    pwVar9 = local_78;
  }
  FUN_1446f470e(&local_80,pwVar9,1);
  lVar4 = FUN_1448e5bf4(param_1,local_80,4);
  if ((int)lVar4 == -1 && (bVar1 & 1) == 0) {
    cVar2 = FUN_1405b43cc(&local_78);
    if (cVar2 != '\0') {
      lVar4 = (longlong)(int)uStack_70;
      if ((lVar4 != 0) && (local_78 + lVar4 + -1 != local_78)) {
        lVar4 = lVar4 * 2 + -2;
        pwVar9 = local_78;
        do {
          if (*pwVar9 == L'.') {
            if (pwVar9 != (wchar_t *)0x0) goto LAB_1401e928d;
            break;
          }
          pwVar9 = pwVar9 + 1;
          lVar4 = lVar4 + -2;
        } while (lVar4 != 0);
      }
      pwVar9 = local_78;
      if ((int)uStack_70 == 0) {
        pwVar9 = L"";
      }
      lVar5 = _wtoi64(pwVar9);
      if (0 < (longlong)*(int *)(param_1 + 0x48)) {
        lVar7 = *(longlong *)(param_1 + 0x40);
        plVar11 = (longlong *)(lVar7 + 8);
        lVar4 = 0;
        while (*plVar11 != lVar5) {
          lVar4 = lVar4 + 1;
          plVar11 = plVar11 + 2;
          if (*(int *)(param_1 + 0x48) == lVar4) goto LAB_1401e928d;
        }
        goto LAB_1401e903b;
      }
    }
LAB_1401e928d:
    param_5 = (short *)0x0;
    goto LAB_1401e9299;
  }
  if ((int)lVar4 == -1) goto LAB_1401e928d;
  lVar7 = *(longlong *)(param_1 + 0x40);
LAB_1401e903b:
  uVar10 = uVar10 | *(ulonglong *)(lVar7 + 8 + (longlong)(int)lVar4 * 0x10);
  local_68 = uVar10;
  if ((bVar1 & 1) != 0) {
    bVar14 = (longlong)uStack_70 < 0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if (bVar14) {
      FUN_1446f8c06(&local_78,0);
    }
    if (local_78 != (wchar_t *)0x0) {
      *local_78 = L'\0';
    }
    FUN_1408dea53(&param_5);
    psVar3 = param_5;
    if (*param_5 != 0x7c) goto LAB_1401e9058;
    param_5 = param_5 + 1;
    FUN_1408dea53();
    psVar6 = param_5;
    goto LAB_1401e8fc8;
  }
LAB_1401e9058:
  if (psVar3 != (short *)0x0) {
    if (param_7 == 1) {
      cVar2 = (**(code **)(*local_a0 + 0x80))();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*local_a0 + 0x80))();
        if (cVar2 == '\0') {
          _Dst = (ulonglong *)(lVar8 + *(int *)((longlong)local_a0 + 0x44));
          if (_Dst != &local_68) {
            if ((*(byte *)((longlong)local_a0 + 0x3b) & 0x40) == 0) {
              (**(code **)(*local_a0 + 0x100))(local_a0,_Dst,&local_68,(int)local_a0[6]);
            }
            else {
              memcpy(_Dst,&local_68,
                     (longlong)(int)local_a0[6] * (longlong)*(int *)((longlong)local_a0 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*local_a0 + 0x98))(local_a0,lVar8,&local_68);
        }
        goto LAB_1401e9082;
      }
      lVar8 = lVar8 + *(int *)((longlong)local_a0 + 0x44);
    }
    (**(code **)(*param_3 + 0x1f8))(param_3,lVar8,uVar10);
    goto LAB_1401e9082;
  }
LAB_1401e9299:
  ppuStack_50 = &local_90;
  local_58 = FUN_141073f72;
  lVar8 = FUN_144a773aa(&local_58,&DAT_14c75ec34);
  if (*(longlong *)(lVar8 + 0x58) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x58) + 0x30);
  }
  if ((*(uint *)(param_1 + 8) >> 0x13 & 1) == 0) {
    pwVar9 = L"loaded";
  }
  else {
    pwVar9 = L"loaded";
    if ((*(uint *)(param_1 + 8) >> 0x15 & 1) == 0) {
      pwVar9 = L"not loaded";
    }
  }
  pwVar12 = L"";
  if ((int)uStack_70 != 0) {
    pwVar12 = local_78;
  }
  local_58 = *(code **)(param_1 + 0x18);
  FUN_1400021e4(&local_58,&local_90);
  puVar13 = &DAT_149dfb77a;
  if (local_88 != 0) {
    puVar13 = local_90;
  }
  if (lVar8 == 0) {
    ppuStack_50 = (undefined2 **)&local_59;
    local_58 = FUN_141073f72;
    lVar8 = FUN_144a773aa(&local_58,&DAT_14c75ec34);
    lVar8 = *(longlong *)(lVar8 + 0x30);
    if (lVar8 != 0) goto LAB_1401e9344;
    FUN_140056680(&local_58,&DAT_149e01fe8);
  }
  else {
LAB_1401e9344:
    local_58 = (code *)0x0;
    ppuStack_50 = (undefined2 **)0x0;
    FUN_1401031ac(lVar8,0);
  }
  local_c8 = local_58;
  if ((int)ppuStack_50 == 0) {
    local_c8 = (code *)&DAT_149dfb77a;
  }
  local_c0 = puVar13;
  local_b8 = pwVar12;
  local_b0 = pwVar9;
  FUN_146816218(param_8,3,
                L"%s: In asset \'%s\', there is an enum property of type \'%s\' with an invalid value of \'%s\' - %s"
                ,local_98);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  psVar3 = (short *)0x0;
LAB_1401e9082:
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return psVar3;
}



// FUNCTION 1401e9420 FUN_1401e9420 body=359 status=ok
// SIG undefined FUN_1401e9420(void)

ushort * FUN_1401e9420(ushort *param_1,undefined8 param_2,byte param_3)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_1;
  if (uVar1 == 0x22) {
    local_2c = 0;
    cVar2 = FUN_140c9761d(param_1,param_2,&local_2c);
    puVar4 = (ushort *)(longlong)local_2c;
    if (cVar2 == '\0') {
      puVar4 = (ushort *)0x0;
    }
    param_1 = param_1 + (longlong)puVar4;
    if (cVar2 == '\0') {
      param_1 = (ushort *)0x0;
    }
  }
  else {
    uVar7 = 1L << ((byte)uVar1 & 0x3f);
    uVar3 = uVar7 & 0x3ff000000000000;
    if (0x3f < uVar1) {
      uVar3 = 0;
    }
    uVar7 = uVar7 & 0x7fffffe07fffffe;
    if ((uVar1 & 0xffc0) != 0x40) {
      uVar7 = 0;
    }
    if (((uVar1 < 0x100) && ((uVar1 == 0x2f & param_3) == 0)) && (uVar3 == 0 && uVar7 == 0)) {
      FUN_140002184(param_2,uVar1);
    }
    else {
      uVar3 = 0xfc00d7ffffffffff;
      if (param_3 != 0) {
        uVar3 = 0xf80017ffffffffff;
      }
      lVar5 = -0x100000000;
      lVar6 = 0;
      do {
        uVar1 = param_1[lVar6];
        uVar8 = 1L << ((byte)uVar1 & 0x3f);
        uVar7 = 0;
        if (uVar1 < 0x40) {
          uVar7 = uVar8;
        }
        uVar8 = uVar8 & 0xf800000178000001;
        if ((uVar1 & 0xffc0) != 0x40) {
          uVar8 = 0;
        }
        lVar5 = lVar5 + 0x100000000;
        lVar6 = lVar6 + 1;
      } while (uVar8 == 0 && (uVar7 & uVar3) == 0);
      FUN_1400020e8(param_2,param_1,(int)lVar6 + -1);
      param_1 = param_1 + (lVar5 >> 0x20);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1401e9588 FUN_1401e9588 body=2723 status=ok
// SIG undefined FUN_1401e9588(void)

ulonglong FUN_1401e9588(longlong *param_1,undefined8 *param_2,uint param_3)

{
  void *_Src;
  wchar_t *_Str1;
  DWORD DVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  LPVOID pvVar12;
  undefined2 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ushort uVar16;
  ushort uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  longlong *plVar22;
  bool bVar23;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  wchar_t *local_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  int local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_90 = (wchar_t *)0x0;
  iStack_88 = *(int *)(param_2 + 1);
  lVar20 = (longlong)iStack_88;
  _Src = (void *)*param_2;
  local_d0 = param_2;
  if (lVar20 == 0) {
    uStack_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,iStack_88,0);
    memcpy(local_90,_Src,lVar20 * 2);
  }
  local_a8 = (wchar_t *)0x0;
  uStack_a0 = 0;
  local_e0 = 0xffffffff;
  local_e8 = 0;
  iVar2 = FUN_1447ee042(&local_90,&DAT_149e5e24e,2,0);
  if (iVar2 == -1) {
    pwVar8 = local_90;
    if (iStack_88 == 0) {
      pwVar8 = L"";
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_68,pwVar8);
  }
  else {
    uVar14 = iStack_88 - 1;
    pwVar8 = local_90;
    if (iStack_88 == 0) {
      uVar14 = 0;
      pwVar8 = L"";
    }
    uVar21 = iVar2 + 2U;
    if ((int)uVar14 <= (int)(iVar2 + 2U)) {
      uVar21 = uVar14;
    }
    uVar6 = (ulonglong)uVar21;
    if ((int)uVar21 < 1) {
      uVar6 = 0;
    }
    FUN_14006620a(&local_68,pwVar8 + uVar6,uVar14 - (int)uVar6);
  }
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar20 = param_1[4];
    if (lVar20 == 0) {
      local_b8 = param_1[3];
    }
    else {
      local_68 = (wchar_t *)0x0;
      uStack_60 = 0;
      local_c8 = param_1[3];
      if (*(longlong *)(lVar20 + 0x20) == 0) {
LAB_1401e971a:
        pwVar8 = L"";
      }
      else {
        lVar10 = *(longlong *)(lVar20 + 0x20);
        lVar19 = lVar20;
        do {
          lVar20 = lVar10;
          if (1 < (int)uStack_60) {
            FUN_140002184(&local_68,0x2e);
          }
          local_70 = *(undefined8 *)(lVar19 + 0x18);
          FUN_1400021e4(&local_70,&local_80);
          iVar3 = local_78 + -1;
          if (local_78 == 0) {
            iVar3 = 0;
          }
          FUN_1400020e8(&local_68,local_80,iVar3);
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          lVar10 = *(longlong *)(lVar20 + 0x20);
          lVar19 = lVar20;
        } while (*(longlong *)(lVar20 + 0x20) != 0);
        pwVar8 = local_68;
        if ((int)uStack_60 == 0) goto LAB_1401e971a;
      }
      FUN_1446f470e(&uStack_c0,pwVar8,1);
      local_b8 = *(longlong *)(lVar20 + 0x18);
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  DVar4 = DAT_14c949610;
  if ((DAT_14c949610 == 0) || (DVar5 = GetCurrentThreadId(), DVar4 != DVar5)) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c949608);
  }
  else {
    DAT_14c949614 = DAT_14c949614 + 1;
  }
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_80 = 0;
  local_e8 = 0;
  FUN_140159c68(8,&local_c8,&local_68,&local_80);
  plVar22 = (longlong *)0x0;
  if (local_80 != 0) {
    plVar22 = (longlong *)0x0;
    if (*(int *)(local_80 + 0x84) < *(int *)(local_80 + 0x58)) {
      plVar22 = (longlong *)(local_80 + 0x50);
    }
  }
  if (DAT_14c949614 < 1) {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c949608);
  }
  else {
    GetCurrentThreadId();
    DAT_14c949614 = DAT_14c949614 + -1;
  }
  if (plVar22 == (longlong *)0x0) {
    if (iVar2 != -1) {
      pwVar8 = local_a8;
      if ((int)uStack_a0 == 0) {
        pwVar8 = L"";
      }
      (**(code **)(*param_1 + 0x2c8))(param_1,&local_68,pwVar8);
      if (local_90 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_90 = local_68;
      iStack_88 = (int)uStack_60;
      uStack_84 = uStack_60._4_4_;
    }
  }
  else {
    iVar2 = iStack_88 + -1;
    if (iStack_88 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
      } while (iVar2 != iVar3);
    }
    iVar2 = FUN_1457511aa(plVar22);
    if (iVar2 == -1) {
LAB_1401e98c5:
      uVar6 = 0;
      iVar2 = (int)uStack_a0 + -1;
      if ((int)uStack_a0 == 0) {
        iVar2 = 0;
      }
      if (0 < iVar2) {
        pwVar8 = local_a8;
        if ((int)uStack_a0 == 0) {
          pwVar8 = L"";
        }
        lVar20 = 0;
        uVar6 = 0;
        do {
          uVar14 = ((uint)(0x19 < (ushort)pwVar8[lVar20] - 0x61) * 0x20 +
                   (uint)(ushort)pwVar8[lVar20]) - 0x20;
          uVar21 = (uint)(uVar6 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar14) & 0xff) * 4);
          uVar6 = (ulonglong)
                  (uVar21 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar21 & 0xff ^ uVar14 >> 8 & 0xff) * 4));
          lVar20 = lVar20 + 1;
        } while (iVar2 != (int)lVar20);
      }
      iVar2 = FUN_1457511aa(plVar22,uVar6,&local_a8);
      if ((iVar2 == -1) ||
         (lVar20 = *plVar22 + (longlong)iVar2 * 0x28, puVar7 = (undefined8 *)(lVar20 + 0x10),
         puVar7 == (undefined8 *)0x0 || lVar20 == 0)) goto LAB_1401e9a95;
    }
    else {
      if (*plVar22 + (longlong)iVar2 * 0x28 == 0) goto LAB_1401e98c5;
      puVar7 = (undefined8 *)(*plVar22 + (longlong)iVar2 * 0x28 + 0x10);
    }
    if (*(int *)(puVar7 + 1) == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = (undefined2 *)*puVar7;
    }
    FUN_14020fad6(&local_90,puVar13);
    local_e0 = 0xffffffff;
    local_e8 = 0;
    iVar2 = FUN_1447ee042(&local_90,&DAT_149e5e24e,2,0);
    if (iVar2 == -1) {
      pwVar8 = local_90;
      if (iStack_88 == 0) {
        pwVar8 = L"";
      }
      (**(code **)(*param_1 + 0x2c8))(param_1,&local_68,pwVar8);
    }
    else {
      uVar14 = iStack_88 - 1;
      pwVar8 = local_90;
      if (iStack_88 == 0) {
        uVar14 = 0;
        pwVar8 = L"";
      }
      uVar21 = iVar2 + 2U;
      if ((int)uVar14 <= (int)(iVar2 + 2U)) {
        uVar21 = uVar14;
      }
      uVar6 = (ulonglong)uVar21;
      if ((int)uVar21 < 1) {
        uVar6 = 0;
      }
      FUN_14006620a(&local_68,pwVar8 + uVar6,uVar14 - (int)uVar6);
    }
    if (local_a8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_a8 = local_68;
    uStack_a0 = uStack_60;
  }
LAB_1401e9a95:
  pwVar8 = L"";
  if (iStack_88 != 0) {
    pwVar8 = local_90;
  }
  uVar6 = 0;
  FUN_1446f470e(&local_c8,pwVar8,0);
  pwVar8 = L"";
  if ((int)uStack_a0 != 0) {
    pwVar8 = local_a8;
  }
  FUN_1446f470e(&local_80,pwVar8,0);
  uVar14 = *(uint *)(param_1 + 9);
  if (0 < (longlong)(int)uVar14) {
    piVar9 = (int *)(param_1[8] + 4);
    uVar6 = 0;
    do {
      if (((piVar9[-1] == (int)local_c8) && (*piVar9 == local_c8._4_4_)) ||
         ((piVar9[-1] == (int)local_80 && (*piVar9 == local_80._4_4_)))) goto LAB_1401e9e35;
      uVar6 = uVar6 + 1;
      piVar9 = piVar9 + 4;
    } while ((longlong)(int)uVar14 != uVar6);
    uVar6 = (ulonglong)uVar14;
  }
  if ((param_3 & 4) != 0) {
    lVar20 = param_1[2];
    lVar10 = FUN_140851d9a();
    if ((0 < (int)uVar14) && (lVar20 != lVar10)) {
      uVar18 = 0;
      do {
        (**(code **)(*param_1 + 0x2b8))(param_1,&local_68,uVar18);
        pwVar8 = local_68;
        iVar2 = (int)uStack_60;
        if ((int)uStack_60 == iStack_88) {
          if (1 < (int)uStack_60) {
            if ((param_3 & 2) != 0) {
              iVar3 = wcscmp(local_68,local_90);
              if (iVar3 != 0) goto LAB_1401e9ca9;
              bVar23 = false;
              uVar6 = uVar18;
              goto LAB_1401e9d30;
            }
            lVar20 = 0;
            while( true ) {
              uVar16 = *(ushort *)((longlong)local_68 + lVar20);
              uVar11 = (ulonglong)uVar16;
              uVar17 = *(ushort *)((longlong)local_90 + lVar20);
              if (uVar16 != uVar17) break;
              if (uVar16 == 0) goto LAB_1401e9d23;
LAB_1401e9c55:
              lVar20 = lVar20 + 2;
            }
            if ((uVar17 | uVar16) < 0x80) {
              uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              uVar15 = (ulonglong)uVar17;
              uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar15]) goto LAB_1401e9c55;
            }
            if (uVar16 != uVar17) goto LAB_1401e9ca9;
          }
LAB_1401e9d23:
          bVar23 = false;
          pwVar8 = local_68;
          uVar6 = uVar18;
        }
        else {
          if (iStack_88 + (int)uStack_60 == 1) goto LAB_1401e9d23;
LAB_1401e9ca9:
          pwVar8 = local_68;
          if (iVar2 == (int)uStack_a0) {
            if (1 < iVar2) {
              if ((param_3 & 2) == 0) {
                lVar20 = 0;
                while( true ) {
                  uVar16 = *(ushort *)((longlong)local_68 + lVar20);
                  uVar11 = (ulonglong)uVar16;
                  uVar17 = *(ushort *)((longlong)local_a8 + lVar20);
                  if (uVar16 != uVar17) break;
                  if (uVar16 == 0) goto LAB_1401e9d23;
LAB_1401e9ce4:
                  lVar20 = lVar20 + 2;
                }
                if ((uVar17 | uVar16) < 0x80) {
                  uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                  uVar15 = (ulonglong)uVar17;
                  uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                  if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar15]) goto LAB_1401e9ce4;
                }
                bVar23 = true;
                if (uVar16 != uVar17) goto LAB_1401e9d30;
              }
              else {
                iVar2 = wcscmp(local_68,local_a8);
                bVar23 = true;
                if (iVar2 != 0) goto LAB_1401e9d30;
              }
            }
            goto LAB_1401e9d23;
          }
          bVar23 = true;
          if ((int)uStack_a0 + iVar2 == 1) goto LAB_1401e9d23;
        }
LAB_1401e9d30:
        if (pwVar8 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar8);
        }
        if (!bVar23) goto LAB_1401e9e35;
        uVar21 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar21;
      } while (uVar21 != uVar14);
    }
  }
  puVar7 = local_d0;
  iVar2 = *(int *)(local_d0 + 1);
  if (iVar2 == iStack_88) {
    if (1 < iVar2) {
      if ((param_3 & 2) == 0) {
        lVar20 = 0;
        while( true ) {
          uVar16 = *(ushort *)((longlong)*local_d0 + lVar20);
          uVar6 = (ulonglong)uVar16;
          uVar17 = *(ushort *)((longlong)local_90 + lVar20);
          if (uVar16 != uVar17) break;
          if (uVar16 == 0) goto LAB_1401e9d7f;
LAB_1401e9b9a:
          lVar20 = lVar20 + 2;
        }
        if ((uVar17 | uVar16) < 0x80) {
          uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar18 = (ulonglong)uVar17;
          uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar18]) goto LAB_1401e9b9a;
        }
        uVar6 = 0xffffffff;
        if (uVar16 != uVar17) goto LAB_1401e9e35;
      }
      else {
        iVar3 = wcscmp((wchar_t *)*local_d0,local_90);
        uVar6 = 0xffffffff;
        if (iVar3 != 0) goto LAB_1401e9e35;
      }
      goto LAB_1401e9d7f;
    }
  }
  else {
    uVar6 = 0xffffffff;
    if (iStack_88 + iVar2 != 1) goto LAB_1401e9e35;
LAB_1401e9d7f:
    if (1 < iVar2 && (param_3 & 1) != 0) {
      local_70 = 0;
      FUN_1400021e4();
      pwVar8 = local_68;
      iVar2 = *(int *)(puVar7 + 1);
      if (iVar2 == (int)uStack_60) {
        bVar23 = true;
        if (1 < iVar2) {
          _Str1 = (wchar_t *)*puVar7;
          if ((param_3 & 2) == 0) {
            lVar20 = 0;
            while( true ) {
              uVar16 = *(ushort *)((longlong)_Str1 + lVar20);
              uVar14 = (uint)uVar16;
              uVar17 = *(ushort *)((longlong)local_68 + lVar20);
              uVar21 = (uint)uVar17;
              if (uVar16 != uVar17) {
                if ((uVar17 | uVar16) < 0x80) {
                  uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar16];
                  uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar17];
                  if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar17]) goto LAB_1401e9e03;
                }
                iVar2 = uVar14 - uVar21;
                goto LAB_1401e9ebc;
              }
              if (uVar16 == 0) break;
LAB_1401e9e03:
              lVar20 = lVar20 + 2;
            }
            iVar2 = 0;
          }
          else {
            iVar2 = wcscmp(_Str1,local_68);
          }
LAB_1401e9ebc:
          bVar23 = iVar2 == 0;
        }
      }
      else {
        bVar23 = (int)uStack_60 + iVar2 == 1;
      }
      if (pwVar8 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar8);
      }
      uVar6 = 0xffffffff;
      if (!bVar23) {
        DVar4 = DAT_14c75ec34;
        if (DAT_14c75ec34 == 0xffffffff) {
          DVar4 = TlsAlloc();
          DVar5 = 0xffffffff;
          LOCK();
          bVar23 = DAT_14c75ec34 != 0xffffffff;
          DVar1 = DVar4;
          if (bVar23) {
            DVar5 = DAT_14c75ec34;
            DVar1 = DAT_14c75ec34;
          }
          DAT_14c75ec34 = DVar1;
          UNLOCK();
          if (bVar23) {
            TlsFree(DVar4);
            DVar4 = DVar5;
          }
        }
        pvVar12 = TlsGetValue(DVar4);
        if (pvVar12 == (LPVOID)0x0) {
          pvVar12 = (LPVOID)FUN_14001cc68(0x60,0x10);
          FUN_141073f92(pvVar12);
          FUN_140fddf04(pvVar12);
          TlsSetValue(DVar4,pvVar12);
        }
      }
      goto LAB_1401e9e35;
    }
  }
  uVar6 = 0xffffffff;
LAB_1401e9e35:
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ea02c FUN_1401ea02c body=294 status=ok
// SIG undefined FUN_1401ea02c(void)

longlong FUN_1401ea02c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_238 [32];
  undefined **local_218 [17];
  longlong local_190;
  char local_70;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  memset(local_218,0,0x1e0);
  FUN_1401ea154(local_218);
  local_218[0] = &PTR_FUN_14a975858;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  FUN_1401ea2d0(local_218,param_3);
  FUN_1401eba66(param_1,param_2,local_218,&local_58);
  plVar3 = plStack_50;
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfd;
  *(undefined4 *)(param_1 + 0x348) = local_48._4_4_;
  local_218[0] = &PTR_FUN_14a975858;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_70 == '\x01') {
    local_70 = '\0';
  }
  local_218[0] = &PTR_FUN_14a9758a8;
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ea154 FUN_1401ea154 body=184 status=ok
// SIG undefined FUN_1401ea154(void)

undefined8 * FUN_1401ea154(undefined8 *param_1)

{
  FUN_1401ea20c();
  *param_1 = &PTR_FUN_14a975898;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x3dcccccd00000000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x37] = 0xffffffffff00ffff;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x10000001;
  *(uint *)(param_1 + 0x26) = *(uint *)(param_1 + 0x26) & 0xfffff000 | 2;
  return param_1;
}



// FUNCTION 1401ea20c FUN_1401ea20c body=196 status=ok
// SIG undefined FUN_1401ea20c(void)

void FUN_1401ea20c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9758a8;
  *(undefined1 *)((longlong)param_1 + 0x31) = 2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  *(byte *)((longlong)param_1 + 0x45) = (*(byte *)((longlong)param_1 + 0x45) & 0xf8) + 1;
  *(undefined4 *)((longlong)param_1 + 0x46) = 0x104;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff3f800000;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
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
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 1) = 0x200ab7c2;
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xfe002000 | 0x20302;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xf0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return;
}



// FUNCTION 1401ea2d0 FUN_1401ea2d0 body=1227 status=ok
// SIG undefined FUN_1401ea2d0(void)

void FUN_1401ea2d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  char cVar9;
  ulonglong uVar10;
  
  FUN_1401ea8ec();
  if ((*(longlong *)(param_2 + 0xb0) == 0) ||
     (lVar6 = *(longlong *)(*(longlong *)(param_2 + 0xb0) + 0x218), lVar6 == 0)) {
    *(undefined8 *)(param_1 + 0x1c0) = 0;
LAB_1401ea4dc:
    plVar7 = *(longlong **)(param_1 + 0x1c8);
    if (plVar7 == (longlong *)0x0) goto LAB_1401ea45d;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    plVar8 = (longlong *)0x0;
LAB_1401ea4fc:
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
LAB_1401ea512:
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1401ea45d;
  }
  else {
    iVar4 = *(int *)(lVar6 + 8);
    uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)iVar4 * 2);
    uVar10 = (ulonglong)uVar3;
    lVar6 = *(longlong *)(param_2 + 0x960);
    if (lVar6 == 0) {
LAB_1401ea32e:
      if (iVar4 == 1) {
        cVar9 = *(char *)(param_2 + 0x95c);
        if (DAT_14ca96500 != '\0') goto LAB_1401ea387;
LAB_1401ea615:
        plVar7 = (longlong *)FUN_14001cc68(0x1f8,0x10);
        plVar7[1] = (longlong)&DAT_100000001;
        *plVar7 = (longlong)&PTR_LAB_14a9754d0;
        plVar8 = plVar7 + 2;
        FUN_1401ea79c(plVar8,uVar10,iVar4);
        plVar7[0x3a] = 0;
        plVar7[0x3b] = 0;
        *(bool *)(plVar7 + 0x3c) = cVar9 == '\x01';
        plVar7[0x3d] = 0;
        plVar7[0x3e] = 0;
        plVar7[2] = (longlong)&PTR_FUN_14a927460;
      }
      else {
        if (((iVar4 < 3) ||
            (lVar6 = uVar10 * 0x3c, *(longlong *)(&DAT_14ca814b0 + lVar6) == DAT_14ca81490)) ||
           (uVar3 == 0xc)) {
          cVar9 = *(char *)(param_2 + 0x95c);
          goto LAB_1401ea615;
        }
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar6 + 3) & 0x10) == 0) {
          cVar9 = *(char *)(param_2 + 0x95c);
        }
        else {
          cVar9 = *(char *)(param_2 + 0x95c);
          if ((*(byte *)((longlong)&DAT_14ca814c8 + lVar6 + 3) & 0x20) == 0) goto LAB_1401ea615;
        }
LAB_1401ea387:
        if ((byte)(cVar9 - 1U) < 2) {
          plVar7 = (longlong *)FUN_14001cc68(0x1f0,0x10);
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14a9754f0;
          plVar8 = plVar7 + 2;
          FUN_1401ea79c(plVar8,uVar10,iVar4);
          plVar7[2] = (longlong)&PTR_FUN_14a927410;
          plVar7[0x3a] = 0;
          plVar7[0x3b] = 0;
          *(bool *)(plVar7 + 0x3c) = cVar9 != '\x02';
          plVar7[0x3d] = 0;
        }
        else {
          plVar7 = (longlong *)FUN_14001cc68(0x1d0,0x10);
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14a975510;
          plVar8 = plVar7 + 2;
          FUN_1401ea79c(plVar8,uVar10,iVar4);
        }
      }
      if (plVar7 == (longlong *)0x0) {
        *(longlong **)(param_2 + 0x960) = plVar8;
        plVar8 = *(longlong **)(param_2 + 0x968);
        if (plVar8 != (longlong *)0x0) {
          *(undefined8 *)(param_2 + 0x968) = 0;
LAB_1401ea54b:
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
          if (plVar7 != (longlong *)0x0) goto LAB_1401ea403;
        }
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *(longlong **)(param_2 + 0x960) = plVar8;
        plVar8 = *(longlong **)(param_2 + 0x968);
        if (plVar7 == plVar8) {
          LOCK();
          plVar8 = plVar7 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        else {
          *(longlong **)(param_2 + 0x968) = plVar7;
          if (plVar8 != (longlong *)0x0) goto LAB_1401ea54b;
        }
LAB_1401ea403:
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      if ((*(ushort *)(lVar6 + 0x138) != uVar3) || (*(int *)(lVar6 + 0x13c) != iVar4)) {
        *(undefined8 *)(param_2 + 0x960) = 0;
        plVar8 = *(longlong **)(param_2 + 0x968);
        if (plVar8 != (longlong *)0x0) {
          *(undefined8 *)(param_2 + 0x968) = 0;
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
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (*(char *)(param_2 + 0x95d) != '\x02') {
          *(undefined1 *)(param_2 + 0x95d) = 0;
          lVar6 = *(longlong *)(param_2 + 0x978);
          if (lVar6 != 0) {
            *(undefined8 *)(param_2 + 0x978) = 0;
            (**(code **)(lVar6 + -0x10))(lVar6 + -0x10);
          }
          FUN_147b00ef2(param_2 + 0x8e8);
          *(byte *)(param_2 + 0x95e) = *(byte *)(param_2 + 0x95e) & 0xf0;
        }
      }
      if (*(longlong *)(param_2 + 0x960) == 0) goto LAB_1401ea32e;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x960);
    plVar8 = *(longlong **)(param_2 + 0x968);
    if (plVar8 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1c0) = uVar5;
      goto LAB_1401ea4dc;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1c0) = uVar5;
    plVar7 = *(longlong **)(param_1 + 0x1c8);
    if (plVar8 != plVar7) {
      *(longlong **)(param_1 + 0x1c8) = plVar8;
      if (plVar7 == (longlong *)0x0) goto LAB_1401ea453;
      goto LAB_1401ea4fc;
    }
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
      plVar7 = plVar8;
      if (*piVar2 != 0) goto LAB_1401ea453;
      goto LAB_1401ea512;
    }
  }
LAB_1401ea453:
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_1401ea45d:
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x7cc);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 2000);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x7c8);
  *(byte *)(param_1 + 0x1dc) = *(byte *)(param_2 + 0x7d4) & 1;
  return;
}



// FUNCTION 1401ea79c FUN_1401ea79c body=336 status=ok
// SIG undefined FUN_1401ea79c(void)

void FUN_1401ea79c(undefined8 *param_1,ushort param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  
  param_1[0xd] = 0;
  param_1[0xe] = 0x100000000;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0xf] = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) & 0xfe;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *param_1 = &PTR_FUN_14a9273c0;
  *(ushort *)(param_1 + 0x27) = param_2;
  *(int *)((longlong)param_1 + 0x13c) = param_3;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x8000000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x185) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(byte *)((longlong)param_1 + 0x1a2) = *(byte *)((longlong)param_1 + 0x1a2) & 0xfe;
  *(undefined2 *)(param_1 + 0x35) = 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  bVar1 = DAT_14ca96500;
  if (param_3 != 1) {
    if (param_3 < 3) {
      bVar1 = 0;
    }
    else {
      lVar2 = (ulonglong)param_2 * 0x3c;
      bVar1 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar2) != DAT_14ca81490) && (param_2 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar2 + 3) & 0x10) == 0) {
          bVar1 = 1;
        }
        else {
          bVar1 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar2 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  *(byte *)(param_1 + 0x28) = bVar1 ^ 1;
  return;
}



// FUNCTION 1401ea8ec FUN_1401ea8ec body=1016 status=ok
// SIG undefined FUN_1401ea8ec(void)

void FUN_1401ea8ec(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401eadec();
  lVar10 = param_2[0xcc];
  if ((lVar10 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar10);
  }
  *(longlong *)(param_1 + 0xf8) = lVar10;
  lVar10 = param_2[0xc5];
  *(longlong *)(param_1 + 0x100) = param_2[0xc4];
  *(int *)(param_1 + 0x108) = (int)lVar10;
  lVar10 = param_2[0xc6];
  if (lVar10 == 0) {
    if (*(code **)(*param_2 + 0xa68) == (code *)&LAB_14470a070) {
      lVar10 = 0;
      goto LAB_1401ea975;
    }
    lVar10 = (**(code **)(*param_2 + 0xa68))(param_2);
  }
  if ((lVar10 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar10);
  }
LAB_1401ea975:
  *(longlong *)(param_1 + 0x110) = lVar10;
  fVar20 = *(float *)(param_2 + 199);
  if ((fVar20 == 0.0) && (!NAN(fVar20))) {
    fVar20 = (float)(**(code **)(*param_2 + 0xa70))(param_2);
  }
  *(float *)(param_1 + 0x118) = fVar20;
  *(int *)(param_1 + 0x11c) = (int)param_2[0xca];
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)((longlong)param_2 + 0x654);
  *(int *)(param_1 + 0x124) = (int)param_2[0xcd];
  *(int *)(param_1 + 300) = (int)param_2[0xce];
  uVar7 = *(uint *)(param_1 + 0x130);
  uVar11 = *(byte *)((longlong)param_2 + 0x676) & 1;
  *(uint *)(param_1 + 0x130) = uVar7 & 0xfffffffe | uVar11;
  uVar12 = *(uint *)((longlong)param_2 + 0x66c) >> 3 & 2;
  *(uint *)(param_1 + 0x130) = uVar7 & 0xfffffffc | uVar11 | uVar12;
  uVar13 = *(uint *)((longlong)param_2 + 0x674) >> 3 & 4;
  *(uint *)(param_1 + 0x130) = uVar7 & 0xfffffff8 | uVar11 | uVar12 | uVar13;
  uVar14 = *(byte *)((longlong)param_2 + 0x675) & 8;
  *(uint *)(param_1 + 0x130) = uVar7 & 0xfffffff0 | uVar11 | uVar12 | uVar13 | uVar14;
  uVar15 = *(byte *)((longlong)param_2 + 0x675) & 0x10;
  *(uint *)(param_1 + 0x130) = uVar7 & 0xffffffe0 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15;
  uVar16 = *(uint *)((longlong)param_2 + 0x66c) >> 1 & 0x20;
  *(uint *)(param_1 + 0x130) =
       uVar7 & 0xffffffc0 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16;
  uVar17 = *(byte *)((longlong)param_2 + 0x675) >> 1 & 0x40;
  *(uint *)(param_1 + 0x130) =
       uVar7 & 0xffffff80 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17;
  uVar18 = (*(uint *)((longlong)param_2 + 0x66c) & 2) << 7;
  *(uint *)(param_1 + 0x130) =
       uVar7 & 0xfffffe80 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18;
  uVar19 = (*(uint *)((longlong)param_2 + 0x66c) & 4) << 7;
  *(uint *)(param_1 + 0x130) =
       uVar7 & 0xfffffc80 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 |
       uVar19;
  *(uint *)(param_1 + 0x130) =
       uVar7 & 0xfffff880 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 |
       uVar19 | (*(byte *)((longlong)param_2 + 0x66c) & 1) << 10;
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x69c);
  *(int *)(param_1 + 0x138) = (int)param_2[0xd3];
  uVar6 = (**(code **)(*param_2 + 0x760))(param_2);
  *(undefined4 *)(param_1 + 0x13c) = uVar6;
  uVar5 = FUN_1448e5c9e(param_2);
  *(undefined1 *)(param_1 + 0x140) = uVar5;
  uVar8 = (**(code **)(*param_2 + 0xa80))(param_2);
  *(undefined8 *)(param_1 + 0x148) = uVar8;
  uVar8 = (**(code **)(*param_2 + 0x7a0))(param_2);
  *(undefined8 *)(param_1 + 0x180) = uVar8;
  lVar10 = param_2[0xd6];
  *(longlong *)(param_1 + 0x150) = param_2[0xd5];
  *(int *)(param_1 + 0x158) = (int)lVar10;
  if ((*(byte *)((longlong)param_2 + 0x674) & 0x10) == 0) {
    bVar1 = *(byte *)((longlong)param_2 + 0x1fb);
    uVar13 = (uint)bVar1;
    uVar12 = 0xff;
    uVar7 = 0xff00;
    uVar11 = 0xff000000;
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        uVar7 = 0x8000;
        uVar13 = 0x800000;
      }
      else if ((*(byte *)(param_2 + 0x83) & 1) == 0) {
        uVar7 = 0;
        uVar13 = 0xff0000;
      }
      else {
        uVar12 = 0x80;
        uVar13 = 0;
      }
    }
  }
  else {
    uVar7 = *(uint *)((longlong)param_2 + 0x65c);
    uVar12 = uVar7 & 0xff;
    uVar11 = uVar7 & 0xff000000;
    uVar13 = uVar7 & 0xff0000;
    uVar7 = uVar7 & 0xff00;
  }
  *(uint *)(param_1 + 0x1b8) = uVar11 | uVar13 | uVar7 | uVar12;
  *(longlong *)(param_1 + 0x1b0) = param_2[0xb7];
  (**(code **)(*param_2 + 0xa10))
            (param_2,&local_30,*(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x150));
  *(undefined4 *)(param_1 + 0x160) = local_30;
  *(undefined4 *)(param_1 + 0x164) = uStack_2c;
  *(undefined4 *)(param_1 + 0x168) = uStack_28;
  *(undefined4 *)(param_1 + 0x16c) = uStack_24;
  *(byte *)(param_1 + 0x131) = *(byte *)(param_1 + 0x131) | 8;
  puVar9 = (undefined4 *)(**(code **)(*param_2 + 0x558))(param_2);
  if ((puVar9 != (undefined4 *)&DAT_14cad0ed0) && ((undefined4 *)(param_1 + 0x188) != puVar9)) {
    uVar6 = *puVar9;
    uVar2 = puVar9[1];
    uVar3 = puVar9[2];
    uVar4 = puVar9[3];
    uVar8 = *(undefined8 *)(puVar9 + 6);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(puVar9 + 4);
    *(undefined8 *)(param_1 + 0x1a0) = uVar8;
    *(undefined4 *)(param_1 + 0x188) = uVar6;
    *(undefined4 *)(param_1 + 0x18c) = uVar2;
    *(undefined4 *)(param_1 + 400) = uVar3;
    *(undefined4 *)(param_1 + 0x194) = uVar4;
    *(undefined1 *)(param_1 + 0x1a8) = 1;
  }
  lVar10 = param_2[0xd2];
  if (lVar10 == 0) {
    lVar10 = (**(code **)(*param_2 + 0xa48))(param_2);
  }
  *(longlong *)(param_1 + 0x170) = lVar10;
  uVar6 = (**(code **)(*param_2 + 0xa60))(param_2);
  *(undefined4 *)(param_1 + 0x178) = uVar6;
  *(int *)(param_1 + 0x1bc) = (int)param_2[0xe2];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401eace6 FUN_1401eace6 body=261 status=ok
// SIG undefined FUN_1401eace6(void)

undefined8 FUN_1401eace6(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(code **)(*param_1 + 0xae8) == (code *)&LAB_144b1d52c) {
    plVar2 = param_1 + 0xdd;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0xae8))(param_1);
  }
  if (((longlong *)*plVar2 != (longlong *)0x0 && (int)plVar2[1] != 0) &&
     (cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x30))(), cVar1 != '\0')) {
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0xae8))();
    if (*(int *)(puVar3 + 1) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)*puVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x0001401eade7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar2 + 0x58))();
    return uVar4;
  }
  lVar5 = param_1[0xcc];
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
    lVar5 = param_1[0xcc];
  }
  else if (lVar5 == 0) {
    return 0;
  }
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  if (*(longlong *)(lVar5 + 0xe0) == 0) {
    return 0;
  }
  lVar5 = param_1[0xcc];
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  return *(undefined8 *)(*(longlong *)(lVar5 + 0xe0) + 0x40);
}



// FUNCTION 1401eadec FUN_1401eadec body=3192 status=ok
// SIG undefined FUN_1401eadec(void)

void FUN_1401eadec(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulonglong uVar40;
  longlong *plVar41;
  longlong lVar42;
  undefined4 uVar43;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar39 = *(uint *)(param_1 + 8);
  uVar13 = *(byte *)((longlong)param_2 + 0x2d6) >> 1 & 1;
  *(uint *)(param_1 + 8) = uVar39 & 0xfffffffe | uVar13;
  uVar14 = *(uint *)((longlong)param_2 + 0x2d4) >> 5 & 2;
  *(uint *)(param_1 + 8) = uVar39 & 0xfffffffc | uVar13 | uVar14;
  uVar15 = *(byte *)((longlong)param_2 + 0x2d5) & 4;
  *(uint *)(param_1 + 8) = uVar39 & 0xfffffff8 | uVar13 | uVar14 | uVar15;
  uVar39 = (uVar39 & 0xffffffe0 | uVar13 | uVar14 | uVar15) +
           (*(byte *)((longlong)param_2 + 0x2d5) & 2) * 4;
  *(uint *)(param_1 + 8) = uVar39;
  uVar13 = *(byte *)((longlong)param_2 + 0x2d3) >> 2 & 0x20;
  *(uint *)(param_1 + 8) = uVar39 & 0xffffffcf | uVar13;
  uVar14 = (*(uint *)((longlong)param_2 + 0x2d4) & 2) << 5;
  *(uint *)(param_1 + 8) = uVar39 & 0xffffff8f | uVar13 | uVar14;
  uVar15 = (*(uint *)((longlong)param_2 + 0x2d4) & 4) << 5;
  *(uint *)(param_1 + 8) = uVar39 & 0xffffff0f | uVar13 | uVar14 | uVar15;
  uVar16 = (*(uint *)((longlong)param_2 + 0x2d4) & 8) << 5;
  *(uint *)(param_1 + 8) = uVar39 & 0xfffffe0f | uVar13 | uVar14 | uVar15 | uVar16;
  uVar17 = (*(uint *)((longlong)param_2 + 0x2d4) & 0x20) << 4;
  *(uint *)(param_1 + 8) = uVar39 & 0xfffffc0f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17;
  uVar18 = (*(uint *)((longlong)param_2 + 0x2d4) & 0x10) << 6;
  *(uint *)(param_1 + 8) = uVar39 & 0xfffff80f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18
  ;
  uVar19 = (*(byte *)((longlong)param_2 + 0x2d5) & 8) << 8;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xfffff00f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19;
  uVar20 = (*(byte *)((longlong)param_2 + 0x2d6) & 0x40) << 6;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xffffe00f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20;
  uVar21 = (*(byte *)((longlong)param_2 + 0x2d6) & 0x80) << 6;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xffffc00f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21;
  uVar22 = (*(byte *)((longlong)param_2 + 0x2d6) & 4) << 0xc;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xffff800f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22;
  uVar23 = (*(byte *)((longlong)param_2 + 0x2d6) & 8) << 0xc;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xffff000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23;
  uVar24 = (*(byte *)((longlong)param_2 + 0x2d6) & 0x10) << 0xc;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xfffe000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24;
  uVar25 = (*(byte *)((longlong)param_2 + 0x2d6) & 0x20) << 0xc;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xfffc000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25;
  uVar26 = (*(byte *)((longlong)param_2 + 0x2dc) & 1) << 0x12;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xfff8000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26;
  uVar27 = (*(uint *)((longlong)param_2 + 0x2dc) & 2) << 0x12;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xfff0000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27;
  uVar28 = (*(uint *)((longlong)param_2 + 0x2dc) & 0x40) << 0xe;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xffe0000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28;
  uVar29 = (*(uint *)((longlong)param_2 + 0x2dc) & 0x80) << 0xe;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xffc0000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29;
  uVar30 = (*(uint *)((longlong)param_2 + 0x2dc) & 4) << 0x14;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xff80000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30;
  uVar31 = (*(uint *)((longlong)param_2 + 0x2dc) & 0x10) << 0x13;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xff00000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 |
       uVar31;
  uVar32 = (*(uint *)((longlong)param_2 + 0x2dc) & 0x20) << 0x13;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xfe00000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 |
       uVar31 | uVar32;
  uVar33 = (*(uint *)((longlong)param_2 + 0x2dc) & 8) << 0x16;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xfc00000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 |
       uVar31 | uVar32 | uVar33;
  uVar34 = (*(byte *)((longlong)param_2 + 0x2dd) & 2) << 0x19;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xf800000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 |
       uVar31 | uVar32 | uVar33 | uVar34;
  uVar35 = (*(byte *)((longlong)param_2 + 0x2dd) & 0x10) << 0x17;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xf000000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 |
       uVar31 | uVar32 | uVar33 | uVar34 | uVar35;
  uVar36 = (*(byte *)((longlong)param_2 + 0x2d5) & 0x10) << 0x18;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xe000000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 |
       uVar31 | uVar32 | uVar33 | uVar34 | uVar35 | uVar36;
  uVar37 = (*(byte *)((longlong)param_2 + 0x2d5) & 0x20) << 0x18;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xc000000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 |
       uVar31 | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37;
  uVar38 = (*(byte *)((longlong)param_2 + 0x2d6) & 1) << 0x1e;
  *(uint *)(param_1 + 8) =
       uVar39 & 0x8000000f | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 |
       uVar31 | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38;
  *(uint *)(param_1 + 8) =
       uVar39 & 0xf | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21
       | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 |
       uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 |
       (*(byte *)((longlong)param_2 + 0x2de) & 0xfffffff0) << 0x1b;
  uVar39 = *(uint *)(param_1 + 0xc);
  uVar13 = *(byte *)((longlong)param_2 + 0x2de) >> 5 & 1;
  *(uint *)(param_1 + 0xc) = uVar39 & 0xfffffffe | uVar13;
  uVar14 = *(byte *)((longlong)param_2 + 0x2dd) >> 2 & 2;
  *(uint *)(param_1 + 0xc) = uVar39 & 0xfffffffc | uVar13 | uVar14;
  uVar15 = *(byte *)((longlong)param_2 + 0x2de) >> 4 & 4;
  *(uint *)(param_1 + 0xc) = uVar39 & 0xfffffff8 | uVar13 | uVar14 | uVar15;
  uVar16 = *(byte *)((longlong)param_2 + 0x2de) >> 4 & 8;
  *(uint *)(param_1 + 0xc) = uVar39 & 0xfffffff0 | uVar13 | uVar14 | uVar15 | uVar16;
  uVar17 = (*(byte *)((longlong)param_2 + 0x2df) & 1) << 4;
  *(uint *)(param_1 + 0xc) = uVar39 & 0xffffffe0 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17;
  uVar18 = (*(byte *)((longlong)param_2 + 0x2df) & 2) << 4;
  *(uint *)(param_1 + 0xc) =
       uVar39 & 0xffffffc0 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18;
  uVar19 = *(uint *)((longlong)param_2 + 0x2d4) >> 1 & 0x40;
  *(uint *)(param_1 + 0xc) =
       uVar39 & 0xffffff80 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19;
  uVar20 = (*(byte *)((longlong)param_2 + 0x2d5) & 0x40) << 7;
  *(uint *)(param_1 + 0xc) =
       uVar39 & 0xffffdf80 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20;
  *(uint *)(param_1 + 0xc) =
       uVar39 & 0xffffdf00 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 |
       (uint)((char)param_2[0x5c] == '\x01') << 7;
  bVar3 = (**(code **)(*param_2 + 0x4e8))(param_2);
  uVar39 = *(uint *)(param_1 + 0xc) & 0xfffffeff | (uint)bVar3 << 8;
  *(uint *)(param_1 + 0xc) = uVar39;
  *(uint *)(param_1 + 0xc) = uVar39 & 0xfffff1ff | (*(byte *)(param_2 + 0x3f) & 0x20) << 4;
  bVar3 = (**(code **)(*param_2 + 0x738))(param_2);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffefff | (uint)bVar3 << 0xc;
  iVar7 = (**(code **)(*param_2 + 0x570))(param_2);
  uVar13 = (uint)(iVar7 != 0) << 0xe;
  uVar39 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar39 & 0xffffbfff | uVar13;
  lVar2 = param_2[0xb9];
  *(int *)(param_1 + 0x14) = (int)lVar2;
  lVar42 = param_2[0xb8];
  *(longlong *)(param_1 + 0x18) = lVar42;
  lVar10 = param_2[0x15];
  if (lVar10 != 0) {
    *(uint *)(param_1 + 0xc) =
         uVar39 & 0xffff3fff | uVar13 | (*(byte *)(lVar10 + 0x60) & 0xffffff80) << 8;
    if ((*(uint *)(param_1 + 8) & 0x2c) != 0 || (int)lVar2 != 0) {
      do {
        iVar7 = *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x94) < iVar7 + 1U) {
          FUN_1417b9ece((longlong *)(param_1 + 0x88),iVar7);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar7 * 8) = lVar10;
        lVar10 = *(longlong *)(lVar10 + 0x168);
      } while (lVar10 != 0);
      lVar42 = *(longlong *)(param_1 + 0x18);
    }
    if (lVar42 != 0) {
      do {
        iVar7 = *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x94) < iVar7 + 1U) {
          FUN_1417b9ece((longlong *)(param_1 + 0x88),iVar7);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar7 * 8) = lVar42;
        lVar42 = *(longlong *)(lVar42 + 0x168);
      } while (lVar42 != 0);
    }
    bVar3 = (**(code **)(*(longlong *)param_2[0x15] + 0x120))();
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffbffff | (uint)bVar3 << 0x12;
  }
  bVar3 = (**(code **)(*param_2 + 0x800))(param_2);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffdffff | (uint)bVar3 << 0x11;
  if (param_2 == (longlong *)0x0) {
LAB_1401eb344:
    uVar39 = 0;
  }
  else {
    if (DAT_14cac1d70 == 0) {
      local_60 = &local_40;
      local_40 = FUN_144b223ce;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1432411d6;
      local_68 = &LAB_147878f54;
      local_70 = &LAB_1417ad3ba;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0xb10;
      FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,FUN_14637c2da);
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cac1d70 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cac1d70 + 0x38) * 8) !=
        DAT_14cac1d70 + 0x30)) goto LAB_1401eb344;
    uVar39 = 0x80000;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfff7ffff | uVar39;
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x1fb);
  *(int *)(param_1 + 0x34) = (int)param_2[0x71];
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38c);
  uVar4 = FUN_1448e5c9e(param_2);
  *(undefined1 *)(param_1 + 0x3c) = uVar4;
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x2cd);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x33c);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x332);
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x2ec);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)((longlong)param_2 + 0x331);
  *(undefined1 *)(param_1 + 0x47) = *(undefined1 *)((longlong)param_2 + 0x2ce);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)((longlong)param_2 + 0x2d1);
  uVar4 = (**(code **)(*param_2 + 0x788))(param_2);
  *(undefined1 *)(param_1 + 0x49) = uVar4;
  *(char *)(param_1 + 0x4a) = (char)param_2[0x74];
  *(int *)(param_1 + 0x4c) = (int)*(char *)((longlong)param_2 + 0x3a1);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)((longlong)param_2 + 0x3a2);
  *(int *)(param_1 + 0x54) = (int)param_2[0x7a];
  *(int *)(param_1 + 0x58) = (int)param_2[0x67];
  *(int *)(param_1 + 0x5c) = (int)param_2[0x59];
  *(int *)(param_1 + 0x60) = (int)param_2[0x58];
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0x3ac);
  iVar7 = *(int *)((longlong)param_2 + 0x334);
  if (iVar7 == -1) {
    lVar10 = param_2[0x15];
    if (lVar10 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = *(int *)(lVar10 + 0x7c);
      if (iVar7 == -1) {
        do {
          if (((((*(int *)(lVar10 + 0x1ec) == 0) ||
                (uVar39 = *(uint *)(lVar10 + 0x1e8), (int)uVar39 < 0)) ||
               (DAT_14c9647dc <= (int)uVar39)) ||
              ((plVar41 = (longlong *)
                          ((ulonglong)((uVar39 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar39 >> 0x10) * 8)),
               plVar41 == (longlong *)0x0 || ((int)plVar41[2] != *(int *)(lVar10 + 0x1ec))))) ||
             (((*(uint *)(plVar41 + 1) & 0x10200000) != 0 ||
              ((*plVar41 == 0 || (lVar42 = *(longlong *)(*plVar41 + 0xa8), lVar42 == 0)))))) break;
          lVar10 = lVar42;
          if ((*(uint *)(plVar41 + 1) & 0x10200000) != 0) {
            lVar10 = 0;
          }
        } while (*(int *)(lVar10 + 0x7c) == -1);
        iVar7 = *(int *)(lVar10 + 0x7c);
      }
    }
  }
  *(int *)(param_1 + 0x68) = iVar7;
  if (*(char *)((longlong)param_2 + 0x1fb) == '\0') {
LAB_1401eb4df:
    pcVar1 = *(code **)(*param_2 + 0x808);
    uVar39 = 0x100000;
    if (pcVar1 != (code *)&LAB_1401a122a && pcVar1 != (code *)&LAB_1448ac798) {
      bVar3 = (*pcVar1)(param_2);
      uVar39 = (uint)bVar3 << 0x14;
    }
  }
  else {
    lVar10 = param_2[0x16];
    if (lVar10 == 0) {
      lVar10 = FUN_1448abda6(param_2);
      if (lVar10 != 0) goto LAB_1401eb819;
LAB_1401eb837:
      if (*(char *)((longlong)param_2 + 0x2cf) == '\x01') goto LAB_1401eb4df;
    }
    else {
LAB_1401eb819:
      if (((*(longlong *)(lVar10 + 0x30) == 0) ||
          (lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x2b0), lVar10 == 0)) ||
         ((*(byte *)(lVar10 + 0x39e) & 0x10) == 0)) goto LAB_1401eb837;
    }
    uVar39 = 0;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffefffff | uVar39;
  bVar3 = (**(code **)(*param_2 + 0x748))(param_2,0);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffdfffff | (uint)bVar3 << 0x15;
  bVar3 = (**(code **)(*param_2 + 0x5c0))(param_2);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffbfffff | (uint)bVar3 << 0x16;
  bVar3 = (**(code **)(*param_2 + 0x840))(param_2);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xff7fffff | (uint)bVar3 << 0x17;
  *(longlong **)(param_1 + 0x70) = param_2;
  *(longlong *)(param_1 + 0x78) = param_2[0x15];
  lVar10 = param_2[0x16];
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6(param_2);
  }
  *(longlong *)(param_1 + 0x80) = lVar10;
  *(longlong **)(param_1 + 0x98) = param_2 + 0x6a;
  uVar39 = 0;
  if (param_2[0x16] == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(longlong *)(param_2[0x16] + 0x218);
  }
  *(longlong *)(param_1 + 0xa0) = lVar10;
  *(longlong **)(param_1 + 0xa8) = param_2 + 0x76;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar10 + 8);
  if ((int)param_2[0x65] != *(int *)((longlong)param_2 + 0x32c)) {
    uVar39 = (uint)(DAT_14cafb288 == 1 && DAT_14c761950 == 1) << 0x18;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfeffffff | uVar39;
  uVar11 = (**(code **)(*param_2 + 0x400))(param_2);
  *(undefined8 *)(param_1 + 0xd0) = uVar11;
  puVar12 = (undefined8 *)(**(code **)(*param_2 + 0x5d8))(param_2);
  uVar43 = *(undefined4 *)(puVar12 + 1);
  *(undefined8 *)(param_1 + 0xe0) = *puVar12;
  *(undefined4 *)(param_1 + 0xe8) = uVar43;
  uVar4 = (**(code **)(*param_2 + 0x5e0))(param_2);
  *(undefined1 *)(param_1 + 0xf0) = uVar4;
  uVar43 = (**(code **)(*param_2 + 0x5e8))(param_2);
  *(undefined4 *)(param_1 + 0xf4) = uVar43;
  bVar5 = *(byte *)((longlong)param_2 + 0x2e4) & 1;
  bVar3 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar3 & 0xfe | bVar5;
  bVar6 = *(byte *)((longlong)param_2 + 0x2e4) & 2;
  *(byte *)(param_1 + 0x10) = bVar3 & 0xfc | bVar5 | bVar6;
  *(byte *)(param_1 + 0x10) =
       bVar3 & 0xf4 | bVar5 | bVar6 | (*(byte *)((longlong)param_2 + 0x2d5) & 1) << 3;
  lVar10 = param_2[0x16];
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6(param_2);
    if (lVar10 == 0) goto LAB_1401eb6d3;
    lVar10 = param_2[0x16];
    if (lVar10 == 0) {
      lVar10 = FUN_1448abda6(param_2);
    }
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar10 + 0x6f8);
  lVar10 = param_2[0x16];
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6(param_2);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar10 + 0x700);
LAB_1401eb6d3:
  *(longlong **)(param_1 + 200) = param_2 + 0xba;
  if (((int)param_2[0x65] == *(int *)((longlong)param_2 + 0x32c)) || (DAT_14cad2be8 == 0)) {
    uVar11 = (**(code **)(*param_2 + 0x648))(param_2);
  }
  else {
    uVar11 = 0;
  }
  *(undefined8 *)(param_1 + 0xb8) = uVar11;
  if (((int)param_2[0x65] == *(int *)((longlong)param_2 + 0x32c)) || (DAT_14cad2be8 == 0)) {
    uVar11 = (**(code **)(*param_2 + 0x658))(param_2);
  }
  else {
    uVar11 = 0;
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar11;
  uVar13 = 0xffffffff;
  uVar39 = 0xffffffff;
  if ((*(byte *)(param_2 + 0x5b) & 1) != 0) {
    uVar39 = (byte)~*DAT_14cafadc8 | 0xfffffffe;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & uVar39;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cac7cb8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = (code *)&LAB_1417963e0;
      local_68 = &LAB_1478a2d90;
      local_70 = &LAB_146395589;
      local_78 = L"Engine";
      local_80 = 0x20000000000;
      local_88 = 0x10000005;
      local_90 = 0x10;
      local_98 = 0xad0;
      FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
    }
    lVar10 = DAT_14cafade0;
    if ((*(int *)(DAT_14cac7cb8 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8) ==
        DAT_14cac7cb8 + 0x30)) {
      iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if ((iVar7 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar7 == 2)))) {
        uVar40 = 0;
      }
      else if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar40 = (ulonglong)(DVar8 != DVar9);
      }
      else {
        uVar40 = 1;
      }
      uVar13 = (byte)~*(byte *)(lVar10 + uVar40) | 0xfffffffe;
    }
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & uVar13;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe | *(byte *)(param_2 + 0x54) >> 1 & 1;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401eba66 FUN_1401eba66 body=5758 status=ok
// SIG undefined FUN_1401eba66(void)

undefined8 * FUN_1401eba66(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  byte bVar4;
  code cVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  byte bVar9;
  void *pvVar10;
  char cVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  uint *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  uint uVar23;
  float *pfVar24;
  longlong *plVar25;
  undefined4 uVar26;
  uint *puVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  byte bVar32;
  byte bVar33;
  int iVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  undefined8 *puVar38;
  longlong lVar39;
  code **ppcVar40;
  ulonglong uVar41;
  bool bVar42;
  float fVar43;
  undefined1 auStack_1a8 [32];
  code **local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  code *local_140;
  longlong local_130;
  undefined8 *local_128;
  longlong *local_120;
  int *local_118;
  longlong local_110;
  longlong local_108;
  undefined8 *local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  ulonglong uStack_b0;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_130 = param_2;
  FUN_1403fc5fe(param_1,param_3,0);
  *param_1 = &PTR_LAB_14a418080;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined1 *)((longlong)param_1 + 700) = 0;
  param_1[0x58] = 0xffffffffffffffff;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 8;
  cVar11 = FUN_140922330(param_1);
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) & 0xef | cVar11 << 4;
  *(byte *)((longlong)param_1 + 0x2bd) = *(byte *)((longlong)param_1 + 0x2bd) & 0xe0;
  *param_1 = &PTR_FUN_14aa62910;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x59] = &PTR_FUN_14aa62b68;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  lVar37 = *(longlong *)(param_3 + 0x70);
  if (lVar37 != 0) {
    if (DAT_14cad3688 == 0) {
      local_150 = local_a8;
      local_a8[0] = FUN_144b223ce;
      local_140 = FUN_14081d0ea;
      local_148 = &LAB_1417963e0;
      local_158 = &LAB_147a2f4c9;
      local_160 = &LAB_1400ea6f8;
      local_168 = L"Engine";
      local_170 = 0x200000000000;
      local_178 = 0x10000004;
      local_180 = 0x10;
      local_188 = (code **)CONCAT44(local_188._4_4_,0x720);
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(*(longlong *)(lVar37 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar37 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) == DAT_14cad3688 + 0x30)) {
      cVar11 = FUN_1448e5c9e(lVar37);
      if (cVar11 == '\x02') {
        *(undefined1 *)((longlong)param_1 + 0x2d1) = 1;
      }
      else if ((0 < *(int *)(param_3 + 0x158)) &&
              (puVar38 = (undefined8 *)FUN_1403fc0e6(lVar37,*(undefined8 *)(param_3 + 0x150),1),
              puVar38 != (undefined8 *)0x0)) {
        param_1[0x5b] = *puVar38;
        param_1[0x5c] = puVar38[1];
        param_1[0x5d] = puVar38[6];
        *(undefined1 *)(param_1 + 0x5a) = 1;
        FUN_1403fbf4e(param_1 + 0x5f,puVar38 + 2);
      }
    }
  }
  param_1[0x61] = 0;
  param_1[0x62] = *(undefined8 *)(*(longlong *)(param_3 + 0xf8) + 0xe0);
  param_1[0x66] = *(undefined8 *)(param_3 + 0xf8);
  param_1[0x11a] = 0;
  param_1[0x11b] = 0x800000000;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined2 *)(param_1 + 0x11c) = 0xffff;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  *(undefined2 *)(param_1 + 0x11f) = 0xffff;
  *(byte *)((longlong)param_1 + 0x8fa) = *(byte *)((longlong)param_1 + 0x8fa) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x8fc) = 0xffffffff;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  local_108 = *param_4;
  if (local_108 != 0) {
    lVar37 = param_4[1];
    if (lVar37 == 0) {
      param_1[0x120] = local_108;
      param_1[0x121] = 0;
    }
    else {
      LOCK();
      *(int *)(lVar37 + 8) = *(int *)(lVar37 + 8) + 1;
      UNLOCK();
      plVar25 = (longlong *)param_1[0x121];
      param_1[0x120] = local_108;
      param_1[0x121] = lVar37;
      if (plVar25 != (longlong *)0x0) {
        LOCK();
        plVar22 = plVar25 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar25)(plVar25);
          LOCK();
          piVar1 = (int *)((longlong)plVar25 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
          }
        }
      }
    }
    uVar16 = (**(code **)(*(longlong *)param_1[0x120] + 8))();
    param_1[0x12] = uVar16;
  }
  param_1[0x61] = *(undefined8 *)(param_3 + 0x148);
  pfVar24 = (float *)(*(longlong *)(param_3 + 0xf8) + 0x180);
  if ((*(byte *)(param_3 + 0x130) & 0x10) != 0) {
    pfVar24 = (float *)(param_3 + 0x134);
  }
  fVar43 = *pfVar24;
  if (fVar43 <= 0.0) {
    fVar43 = 0.0;
  }
  *(float *)((longlong)param_1 + 0xb4) = fVar43;
  *(byte *)((longlong)param_1 + 0x73) = *(byte *)((longlong)param_1 + 0x73) | 0x80;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) & 0xfe;
  *(byte *)(param_1 + 0x65) = *(byte *)(param_1 + 0x65) & 0xfe;
  uVar12 = *(uint *)(param_3 + 0x124);
  *(uint *)((longlong)param_1 + 0x2ac) = uVar12;
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_3 + 0x128);
  lVar37 = DAT_14caff520;
  if (uVar12 == 0) {
    uVar12 = *(uint *)(*(longlong *)(param_3 + 0xf8) + 600);
    if (uVar12 == 0) {
      iVar30 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar30 == 0x40000002) {
        uVar41 = 0;
      }
      else {
        bVar42 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar30 != 2)) {
          if (iVar30 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            bVar42 = DVar13 == DVar14;
          }
          else {
            bVar42 = false;
          }
        }
        uVar41 = (ulonglong)(bVar42 ^ 1);
      }
      uVar12 = *(uint *)(lVar37 + uVar41 * 4);
    }
    *(uint *)((longlong)param_1 + 0x2ac) = uVar12;
  }
  uVar23 = *(uint *)(param_3 + 300);
  *(uint *)(param_1 + 0x57) = uVar23;
  lVar37 = DAT_14caff538;
  if ((uVar23 == 0) && (uVar23 = *(uint *)(*(longlong *)(param_3 + 0xf8) + 0x25c), uVar23 == 0)) {
    iVar30 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar30 == 0x40000002) {
      uVar41 = 0;
    }
    else {
      bVar42 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar30 != 2)) {
        if (iVar30 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar42 = DVar13 == DVar14;
          uVar12 = *(uint *)((longlong)param_1 + 0x2ac);
        }
        else {
          bVar42 = false;
        }
      }
      uVar41 = (ulonglong)(bVar42 ^ 1);
    }
    uVar23 = *(uint *)(lVar37 + uVar41 * 4);
    if (uVar23 == 0) goto LAB_1401ebe64;
  }
  if (uVar23 < uVar12) {
    uVar12 = uVar23;
  }
LAB_1401ebe64:
  *(uint *)(param_1 + 0x57) = uVar12;
  uVar12 = *(uint *)(param_3 + 0x1b8);
  uVar26 = (&DAT_14c758c60)[uVar12 >> 8 & 0xff];
  uVar3 = (&DAT_14c758c60)[uVar12 & 0xff];
  *(undefined4 *)(param_1 + 2) =
       *(undefined4 *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar12 >> 0xe & 0x3fc));
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar26;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(float *)((longlong)param_1 + 0x1c) = (float)(uVar12 >> 0x18) * 0.003921569;
  local_118 = (int *)CONCAT71(local_118._1_7_,1);
  if (param_1[0x5b] == 0) {
    local_118 = (int *)CONCAT71(local_118._1_7_,param_1[0x5c] != 0);
  }
  lVar37 = **(longlong **)param_1[0x62];
  param_1[99] = *(undefined8 *)(lVar37 + 0x40);
  param_1[100] = *(undefined8 *)(lVar37 + 0x48);
  *(byte *)((longlong)param_1 + 0x75) =
       *(byte *)((longlong)param_1 + 0x75) & 0xfb | *(char *)(param_3 + 0x130) * '\x02' & 4U;
  local_110 = param_3;
  FUN_14008bf44(param_1 + 0x53,*(undefined4 *)(lVar37 + 0x38),1);
  if (0 < *(int *)(lVar37 + 0x38)) {
    local_120 = (longlong *)(local_130 + 0x10);
    lVar29 = 0x50;
    lVar31 = 0;
    local_118 = (int *)((ulonglong)local_118 ^ 1);
    lVar39 = 0;
    do {
      lVar17 = *(longlong *)(lVar37 + 0x30);
      if (*(longlong *)(lVar37 + 0x30) == 0) {
        lVar17 = lVar37 + 0x10;
      }
      lVar6 = param_1[0x53];
      iVar30 = *(int *)(lVar17 + lVar31);
      *(int *)(lVar6 + -0x40 + lVar29) = iVar30;
      bVar32 = *(byte *)(lVar6 + lVar29);
      *(byte *)(lVar6 + lVar29) = bVar32 & 0xfb;
      *(byte *)(lVar6 + lVar29) = bVar32 & 0xf3 | *(char *)(lVar17 + 0x15 + lVar31) << 3;
      if (iVar30 < *(int *)(param_1 + 0x55)) {
        iVar30 = *(int *)(param_1 + 0x55);
      }
      *(int *)(param_1 + 0x55) = iVar30;
      if ((*(byte *)(lVar6 + lVar29) & 4) == 0) {
        iVar30 = *(int *)(lVar6 + -0x40 + lVar29);
        lVar17 = (longlong)iVar30;
        bVar32 = (byte)lVar39;
        if ((lVar17 < 0) || (*(int *)(local_130 + 0xe0) <= iVar30)) {
          puVar38 = (undefined8 *)(lVar6 + -0x10 + lVar29);
          *puVar38 = 0x3f800000;
          puVar38[1] = 0x3f80000000000000;
LAB_1401ec074:
          if (*(char *)((longlong)param_1 + 0x77) < '\0') {
            *(ushort *)((longlong)param_1 + 0xac) =
                 *(ushort *)((longlong)param_1 + 0xac) | (ushort)(1 << (bVar32 & 0x1f));
          }
          plVar22 = (longlong *)0x0;
          bVar9 = 0;
        }
        else {
          plVar25 = *(longlong **)(local_130 + 0xd0);
          if (*(longlong **)(local_130 + 0xd0) == (longlong *)0x0) {
            plVar25 = local_120;
          }
          plVar22 = (longlong *)plVar25[lVar17 * 6];
          plVar25 = plVar25 + lVar17 * 6 + 4;
          uVar26 = *(undefined4 *)((longlong)plVar25 + 4);
          lVar17 = plVar25[1];
          uVar3 = *(undefined4 *)((longlong)plVar25 + 0xc);
          puVar18 = (undefined4 *)(lVar6 + -0x10 + lVar29);
          *puVar18 = (int)*plVar25;
          puVar18[1] = uVar26;
          puVar18[2] = (int)lVar17;
          puVar18[3] = uVar3;
          if (plVar22 == (longlong *)0x0) goto LAB_1401ec074;
          cVar11 = (**(code **)(*plVar22 + 0x430))(plVar22);
          if ((cVar11 == '\0') || (*(char *)((longlong)param_1 + 0x77) < '\0')) {
            *(ushort *)((longlong)param_1 + 0xac) =
                 *(ushort *)((longlong)param_1 + 0xac) | (ushort)(1 << (bVar32 & 0x1f));
          }
          cVar11 = (**(code **)(*plVar22 + 0x440))(plVar22);
          bVar9 = 1;
          if (cVar11 != '\0') {
            *(ushort *)((longlong)param_1 + 0xae) =
                 *(ushort *)((longlong)param_1 + 0xae) | (ushort)(1 << (bVar32 & 0x1f));
          }
        }
        iVar30 = *(int *)(lVar6 + -0x40 + lVar29);
        lVar17 = (longlong)iVar30;
        bVar32 = 0;
        if ((-1 < lVar17) && (iVar30 < *(int *)(local_130 + 0xe0))) {
          plVar25 = *(longlong **)(local_130 + 0xd0);
          if (*(longlong **)(local_130 + 0xd0) == (longlong *)0x0) {
            plVar25 = local_120;
          }
          bVar32 = (*(byte *)((longlong)plVar25 + lVar17 * 0x30 + 0x15) & 2) >> 1;
        }
        bVar4 = *(byte *)(lVar6 + lVar29);
        bVar33 = 0;
        *(byte *)(lVar6 + lVar29) = bVar4 & 0xfe | bVar32;
        if ((-1 < iVar30) && (iVar30 < *(int *)(local_130 + 0xe0))) {
          plVar25 = *(longlong **)(local_130 + 0xd0);
          if (*(longlong **)(local_130 + 0xd0) == (longlong *)0x0) {
            plVar25 = local_120;
          }
          bVar33 = *(byte *)((longlong)plVar25 + lVar17 * 0x30 + 0x15) >> 1 & 2;
        }
        *(byte *)(lVar6 + lVar29) = bVar4 & 0xfc | bVar32 | bVar33;
        if ((!(bool)(bVar9 ^ 1) && local_108 != 0) &&
           (cVar11 = (**(code **)(*plVar22 + 0x340))(plVar22,7), cVar11 == '\0')) {
          plVar22 = (longlong *)0x0;
        }
        if (plVar22 == (longlong *)0x0 || (char)local_118 != '\0') {
          if (plVar22 != (longlong *)0x0) goto LAB_1401ec182;
          goto LAB_1401ec190;
        }
        cVar11 = (**(code **)(*plVar22 + 0x340))(plVar22,4);
        if (cVar11 == '\0') goto LAB_1401ec190;
LAB_1401ec182:
        if ((*(byte *)(local_110 + 0xf) & 1) != 0) goto LAB_1401ec190;
      }
      else {
LAB_1401ec190:
        if ((*(byte *)(lVar6 + lVar29) & 4) == 0) {
          FUN_14003fbd6();
          plVar22 = DAT_14caea080;
        }
        else {
          plVar22 = *(longlong **)(DAT_14cb0d2b0 + 0x4c0);
        }
      }
      if (((plVar22 != (longlong *)0x0) && (DAT_14cb0a8e0 != '\0')) &&
         (uVar12 = (**(code **)(*plVar22 + 0x408))(plVar22), uVar12 < 2)) {
        FUN_14003fbd6();
        plVar22 = DAT_14caea080;
      }
      uVar16 = (**(code **)(*plVar22 + 0x2f0))(plVar22);
      *(undefined8 *)(lVar6 + -0x48 + lVar29) = uVar16;
      lVar39 = lVar39 + 1;
      lVar29 = lVar29 + 0x60;
      lVar31 = lVar31 + 0x1c;
    } while (lVar39 < *(int *)(lVar37 + 0x38));
  }
  FUN_144ae871a(param_1,0);
  lVar37 = local_110;
  bVar42 = false;
  if ((*(byte *)((longlong)param_1 + 0x9c) & 2) != 0) {
    lVar29 = param_1[99];
    if (lVar29 == 0) {
      bVar42 = false;
    }
    else {
      iVar30 = *(int *)(lVar29 + 0x28);
      if (*(int *)(lVar29 + 0x28) < *(int *)(lVar29 + 0x2c)) {
        iVar30 = *(int *)(lVar29 + 0x2c);
      }
      if (iVar30 < *(int *)(lVar29 + 0x30)) {
        iVar30 = *(int *)(lVar29 + 0x30);
      }
      bVar42 = 0 < iVar30;
    }
  }
  *(byte *)((longlong)param_1 + 0x76) = *(byte *)((longlong)param_1 + 0x76) & 0xfe | bVar42;
  plVar25 = (longlong *)param_1[0x62];
  iVar30 = (int)plVar25[1];
  lVar31 = (longlong)iVar30;
  lVar29 = 0;
  if (0 < lVar31) {
    lVar39 = 0;
    do {
      lVar29 = lVar39;
      if (0 < *(int *)(*(longlong *)(*plVar25 + lVar39 * 8) + 0x10c)) break;
      lVar39 = lVar39 + 1;
      lVar29 = lVar31;
    } while (lVar31 != lVar39);
  }
  if ((DAT_14cb0d2b0 == 0) || (*(char *)(DAT_14cb0d2b0 + 0xd58) != '\x01')) {
    iVar15 = *(int *)(*(longlong *)(local_110 + 0xf8) + 0x150);
  }
  else {
    uVar26 = 0;
    if (DAT_14c760db4 != 1) {
      uVar26 = DAT_14c761b9c;
    }
    if (DAT_14c761de0 == 0) {
      uVar26 = DAT_14c761b9c;
    }
    iVar15 = FUN_144b1da20(*(longlong *)(local_110 + 0xf8) + 0xe8,uVar26);
    plVar25 = (longlong *)param_1[0x62];
    iVar30 = (int)plVar25[1];
  }
  if ((*(byte *)(lVar37 + 0x130) & 4) != 0) {
    iVar15 = *(int *)(lVar37 + 0x120);
  }
  iVar34 = iVar30 + -1;
  if (iVar15 < iVar30 + -1) {
    iVar34 = iVar15;
  }
  if (iVar34 < (int)lVar29) {
    iVar34 = (int)lVar29;
  }
  *(int *)((longlong)param_1 + 0x34c) = iVar34;
  if (((DAT_14ca96da8 != '\0') && ((*(byte *)(*(longlong *)(lVar37 + 0xf8) + 0x194) & 0x20) != 0))
     && (*(int *)(*(longlong *)(*plVar25 + (longlong)iVar34 * 8) + 0x10c) != 0)) {
    *(byte *)((longlong)param_1 + 0x8fa) = *(byte *)((longlong)param_1 + 0x8fa) | 1;
    *(undefined2 *)(param_1 + 0x11c) = *(undefined2 *)(*(longlong *)(lVar37 + 0xf8) + 0xb8);
  }
  bVar32 = *(byte *)((longlong)param_1 + 0x8fa);
  if (param_1[0x66] == 0) {
    cVar11 = '\0';
  }
  else {
    cVar11 = FUN_1437155e0();
  }
  if ((cVar11 == '\0') && ((bVar32 & 1) != 0)) {
    FUN_147ccaf34(param_1 + 0x122,*(undefined4 *)(param_1[0x62] + 8));
    lVar29 = param_1[0x62];
    if (0 < *(int *)(lVar29 + 8)) {
      lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_118 = (int *)(lVar31 + 0xc60);
      local_128 = (undefined8 *)(lVar31 + 0x308);
      local_100 = (undefined8 *)(lVar31 + 0x310);
      local_f0 = (longlong *)(lVar31 + 0x2b8);
      local_f8 = 0x527800b400;
      lVar31 = 0;
      do {
        lVar17 = param_1[0x122];
        lVar39 = lVar17 + lVar31 * 0x28;
        iVar30 = *(int *)((longlong)param_1 + 0x34c);
        *(undefined8 *)(lVar39 + 8) = 0;
        *(undefined8 *)(lVar39 + 0x10) = 0x100000000;
        *(undefined8 *)(lVar39 + 0x20) = 0;
        plVar25 = *(longlong **)(*(longlong *)(lVar37 + 0xf8) + 0xe0);
        iVar15 = (int)lVar31;
        lVar28 = (longlong)iVar15;
        lVar6 = *(longlong *)(*plVar25 + lVar28 * 8);
        local_130 = lVar31;
        if (((iVar30 <= iVar15) && (iVar15 < *(int *)(lVar37 + 0x158))) &&
           (lVar7 = *(longlong *)(*(longlong *)(lVar37 + 0x150) + 0x40 + lVar28 * 0xa0), lVar7 != 0)
           ) {
          lVar29 = *(longlong *)(lVar29 + 0x10);
          if (0 < (longlong)*(int *)(lVar6 + 0x38)) {
            lVar35 = lVar6 + 0x10;
            if (*(longlong *)(lVar6 + 0x30) != 0) {
              lVar35 = *(longlong *)(lVar6 + 0x30);
            }
            lVar36 = 0;
            do {
              if (*(uint *)(lVar7 + 0x34) <= *(uint *)(lVar35 + 0x10 + lVar36)) goto LAB_1401ec7c0;
              lVar36 = lVar36 + 0x1c;
            } while ((longlong)*(int *)(lVar6 + 0x38) * 0x1c != lVar36);
          }
          *(longlong *)(lVar39 + 0x18) = lVar7;
          if ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) !=
              0) {
            ppcVar40 = (code **)(lVar17 + lVar31 * 0x28 + 0x20);
            lVar29 = lVar29 + lVar28 * 0x450 + 0x220;
            local_b8 = (void *)0x0;
            uStack_b0 = 0;
            local_120 = plVar25;
            FUN_1401031ac(*(undefined8 *)(lVar37 + 0x70),0,&local_b8);
            pvVar10 = local_b8;
            local_d8 = (undefined4)local_130;
            local_c8 = (void *)0x0;
            lVar37 = (longlong)(int)uStack_b0;
            local_c0 = CONCAT44(local_c0._4_4_,(int)uStack_b0);
            local_e8 = ppcVar40;
            uStack_e0 = lVar29;
            uStack_d0 = lVar7;
            if (lVar37 == 0) {
              local_c0 = uStack_b0 & 0xffffffff;
            }
            else {
              FUN_1446dd670(&local_c8,uStack_b0 & 0xffffffff,0);
              memcpy(local_c8,pvVar10,lVar37 * 2);
            }
            iVar30 = *local_118;
            if (DAT_14c86a9fc == 0) {
              if (iVar30 != 2) {
                if (iVar30 == 1) {
                  DVar13 = FUN_140ad26c0();
                  DVar14 = GetCurrentThreadId();
                  bVar42 = DVar13 == DVar14;
                }
                else {
                  bVar42 = iVar30 == 0x10;
                }
                if (!bVar42) goto LAB_1401ec678;
              }
LAB_1401ecc1e:
              plVar25 = local_120;
              local_180 = 0;
              local_188 = (code **)((ulonglong)local_188 & 0xffffffff00000000);
              FUN_14570d169(local_a8,uStack_e0,local_d8);
              if (local_e8 != local_a8) {
                pcVar8 = *local_e8;
                *local_e8 = local_a8[0];
                local_a8[0] = (code *)0x0;
                if (pcVar8 == (code *)0x0) goto LAB_1401ec794;
                LOCK();
                pcVar2 = pcVar8 + 8;
                uVar12 = *(uint *)pcVar2;
                *(uint *)pcVar2 = *(uint *)pcVar2 - 1;
                UNLOCK();
                if ((uVar12 & 0x3fffffff) == 1) {
                  pcVar2 = pcVar8 + 8;
                  LOCK();
                  uVar12 = *(uint *)pcVar2;
                  *(uint *)pcVar2 = *(uint *)pcVar2 | 0x40000000;
                  UNLOCK();
                  if ((uVar12 >> 0x1e & 1) == 0) {
                    cVar5 = pcVar8[0xd];
                    plVar20 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar20[1] = (longlong)pcVar8;
                    plVar22 = DAT_14ca843c0;
                    plVar21 = DAT_14ca843c8;
                    if (((byte)cVar5 & 2) == 0) {
                      do {
                        *plVar20 = (longlong)plVar22;
                        LOCK();
                        bVar42 = plVar22 != DAT_14ca843c0;
                        plVar21 = plVar20;
                        if (bVar42) {
                          plVar22 = DAT_14ca843c0;
                          plVar21 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar21;
                        UNLOCK();
                      } while (bVar42);
                    }
                    else {
                      do {
                        *plVar20 = (longlong)plVar21;
                        LOCK();
                        bVar42 = plVar21 != DAT_14ca843c8;
                        plVar22 = plVar20;
                        if (bVar42) {
                          plVar21 = DAT_14ca843c8;
                          plVar22 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar22;
                        UNLOCK();
                      } while (bVar42);
                    }
                  }
                }
              }
              pcVar8 = local_a8[0];
              if (local_a8[0] != (code *)0x0) {
                LOCK();
                pcVar2 = local_a8[0] + 8;
                uVar12 = *(uint *)pcVar2;
                *(uint *)pcVar2 = *(uint *)pcVar2 - 1;
                UNLOCK();
                if ((uVar12 & 0x3fffffff) == 1) {
                  pcVar2 = local_a8[0] + 8;
                  LOCK();
                  uVar12 = *(uint *)pcVar2;
                  *(uint *)pcVar2 = *(uint *)pcVar2 | 0x40000000;
                  UNLOCK();
                  if ((uVar12 >> 0x1e & 1) == 0) {
                    cVar5 = local_a8[0][0xd];
                    plVar20 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar20[1] = (longlong)pcVar8;
                    plVar22 = DAT_14ca843c0;
                    plVar21 = DAT_14ca843c8;
                    if (((byte)cVar5 & 2) == 0) {
                      do {
                        *plVar20 = (longlong)plVar22;
                        LOCK();
                        bVar42 = plVar22 != DAT_14ca843c0;
                        plVar21 = plVar20;
                        if (bVar42) {
                          plVar22 = DAT_14ca843c0;
                          plVar21 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar21;
                        UNLOCK();
                      } while (bVar42);
                    }
                    else {
                      do {
                        *plVar20 = (longlong)plVar21;
                        LOCK();
                        bVar42 = plVar21 != DAT_14ca843c8;
                        plVar22 = plVar20;
                        if (bVar42) {
                          plVar21 = DAT_14ca843c8;
                          plVar22 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar22;
                        UNLOCK();
                      } while (bVar42);
                    }
                  }
                }
              }
            }
            else {
              if (iVar30 == 0x10) goto LAB_1401ecc1e;
LAB_1401ec678:
              plVar25 = local_120;
              if (DAT_14ca9a438 == '\0') {
                if ((DAT_14c86a9f8 == '\x01') && (*local_118 != 2)) {
                  if (*local_118 == 1) {
                    DVar13 = FUN_140ad26c0();
                    DVar14 = GetCurrentThreadId();
                    if (DVar13 == DVar14) goto LAB_1401ecde0;
                  }
                  goto LAB_1401ec6aa;
                }
LAB_1401ecde0:
                local_180 = 0;
                local_188 = (code **)((ulonglong)local_188 & 0xffffffff00000000);
                FUN_14570d169(local_a8,uStack_e0,local_d8);
                if (local_e8 == local_a8) {
LAB_1401ece9a:
                  pcVar8 = local_a8[0];
                  if (local_a8[0] != (code *)0x0) {
                    LOCK();
                    pcVar2 = local_a8[0] + 8;
                    uVar12 = *(uint *)pcVar2;
                    *(uint *)pcVar2 = *(uint *)pcVar2 - 1;
                    UNLOCK();
                    if ((uVar12 & 0x3fffffff) == 1) {
                      pcVar2 = local_a8[0] + 8;
                      LOCK();
                      uVar12 = *(uint *)pcVar2;
                      *(uint *)pcVar2 = *(uint *)pcVar2 | 0x40000000;
                      UNLOCK();
                      if ((uVar12 >> 0x1e & 1) == 0) {
                        cVar5 = local_a8[0][0xd];
                        plVar20 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar20[1] = (longlong)pcVar8;
                        plVar22 = DAT_14ca843c0;
                        plVar21 = DAT_14ca843c8;
                        if (((byte)cVar5 & 2) == 0) {
                          do {
                            *plVar20 = (longlong)plVar22;
                            LOCK();
                            bVar42 = plVar22 != DAT_14ca843c0;
                            plVar21 = plVar20;
                            if (bVar42) {
                              plVar22 = DAT_14ca843c0;
                              plVar21 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar21;
                            UNLOCK();
                          } while (bVar42);
                        }
                        else {
                          do {
                            *plVar20 = (longlong)plVar21;
                            LOCK();
                            bVar42 = plVar21 != DAT_14ca843c8;
                            plVar22 = plVar20;
                            if (bVar42) {
                              plVar21 = DAT_14ca843c8;
                              plVar22 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar22;
                            UNLOCK();
                          } while (bVar42);
                        }
                      }
                    }
                  }
                }
                else {
                  pcVar8 = *local_e8;
                  *local_e8 = local_a8[0];
                  local_a8[0] = (code *)0x0;
                  if (pcVar8 != (code *)0x0) {
                    LOCK();
                    pcVar2 = pcVar8 + 8;
                    uVar12 = *(uint *)pcVar2;
                    *(uint *)pcVar2 = *(uint *)pcVar2 - 1;
                    UNLOCK();
                    if ((uVar12 & 0x3fffffff) == 1) {
                      pcVar2 = pcVar8 + 8;
                      LOCK();
                      uVar12 = *(uint *)pcVar2;
                      *(uint *)pcVar2 = *(uint *)pcVar2 | 0x40000000;
                      UNLOCK();
                      if ((uVar12 >> 0x1e & 1) == 0) {
                        cVar5 = pcVar8[0xd];
                        plVar20 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar20[1] = (longlong)pcVar8;
                        plVar22 = DAT_14ca843c0;
                        plVar21 = DAT_14ca843c8;
                        if (((byte)cVar5 & 2) == 0) {
                          do {
                            *plVar20 = (longlong)plVar22;
                            LOCK();
                            bVar42 = plVar22 != DAT_14ca843c0;
                            plVar21 = plVar20;
                            if (bVar42) {
                              plVar22 = DAT_14ca843c0;
                              plVar21 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar21;
                            UNLOCK();
                          } while (bVar42);
                        }
                        else {
                          do {
                            *plVar20 = (longlong)plVar21;
                            LOCK();
                            bVar42 = plVar21 != DAT_14ca843c8;
                            plVar22 = plVar20;
                            if (bVar42) {
                              plVar21 = DAT_14ca843c8;
                              plVar22 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar22;
                            UNLOCK();
                          } while (bVar42);
                        }
                      }
                    }
                    goto LAB_1401ece9a;
                  }
                }
              }
              else {
LAB_1401ec6aa:
                if (DAT_14ca9a43c == 0) {
                  puVar19 = (uint *)*local_128;
                  if (puVar19 != (uint *)0x0) goto LAB_1401ec95f;
                  while( true ) {
                    puVar38 = local_100;
                    uVar12 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar12 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar12 | 1;
                      __tlregdtor(&LAB_143679e2b);
                    }
                    puVar18 = (undefined4 *)*puVar38;
                    *puVar38 = 0;
                    if (puVar18 == (undefined4 *)0x0) {
                      puVar18 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar18 = 0xffffffff;
                    *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
                    puVar18[0x12] = 0;
                    *local_128 = puVar18;
                    FUN_140217a48();
                    puVar19 = (uint *)*local_128;
LAB_1401ec95f:
                    puVar38 = (undefined8 *)
                              (*(longlong *)(puVar19 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar27 = (uint *)(puVar38 + 0x1b);
                    uVar12 = puVar19[0x12];
                    if (puVar27 <= puVar19 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
                      LOCK();
                      uVar23 = *puVar19;
                      *puVar19 = *puVar19 + uVar12 + 1;
                      UNLOCK();
                      if ((uVar23 ^ uVar12) != 0xffffffff) break;
                      puVar19 = (uint *)*local_128;
                      *puVar19 = 0xffffffff;
                      *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
                      puVar19[0x12] = 0;
                      *local_128 = puVar19;
                      puVar38 = (undefined8 *)((longlong)puVar19 + 0x5fU & 0xfffffffffffffff8);
                      puVar27 = (uint *)(puVar38 + 0x1b);
                      uVar12 = 0;
                      if (puVar27 <= puVar19 + 0x4000) {
                        uVar12 = 1;
                        goto LAB_1401ec9e5;
                      }
                    }
                  }
                  uVar12 = uVar12 + 1;
LAB_1401ec9e5:
                  *(uint **)(puVar19 + 0x10) = puVar27;
                  puVar19[0x12] = uVar12;
                  FUN_1447247dc(puVar38,0);
                  *puVar38 = &PTR_FUN_14aa68830;
                  *(undefined4 *)(puVar38 + 0x15) = (undefined4)local_e8;
                  *(undefined4 *)((longlong)puVar38 + 0xac) = local_e8._4_4_;
                  *(undefined4 *)(puVar38 + 0x16) = (undefined4)uStack_e0;
                  *(undefined4 *)((longlong)puVar38 + 0xb4) = uStack_e0._4_4_;
                  *(undefined4 *)(puVar38 + 0x17) = local_d8;
                  *(undefined4 *)((longlong)puVar38 + 0xbc) = uStack_d4;
                  *(undefined4 *)(puVar38 + 0x18) = (undefined4)uStack_d0;
                  *(undefined4 *)((longlong)puVar38 + 0xc4) = uStack_d0._4_4_;
                  puVar38[0x19] = local_c8;
                  local_c8 = (void *)0x0;
                  *(undefined4 *)(puVar38 + 0x1a) = (undefined4)local_c0;
                  *(undefined4 *)((longlong)puVar38 + 0xd4) = local_c0._4_4_;
                  local_c0 = 0;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar12 = DAT_14c7585c8 >> 10 & 3;
                    iVar30 = 0;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
                      uVar41 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
                      iVar30 = 0;
                    }
                    else {
                      uVar41 = 2;
                    }
                  }
                  else {
                    iVar30 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                             *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar41 = 5;
                  }
                  if (*(code **)(puVar38[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar38[0xe] + 0x18))(puVar38 + 0xe,puVar38 + 9);
                  }
                  puVar38[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar38[9] = puVar38;
                  puVar38[10] = puVar38;
                  lVar37 = *local_f0;
                  if (lVar37 == 0) {
                    if ((char)uVar41 == '\x06') {
                      uVar41 = 1;
                    }
                    uVar16 = 0;
                  }
                  else {
                    if ((char)uVar41 == '\x06') {
                      uVar41 = *(ulonglong *)(lVar37 + 0x38) >> 0x3b;
                    }
                    uVar16 = *(undefined8 *)(lVar37 + 0x30);
                  }
                  puVar38[0xf] = uVar16;
                  puVar38[0x10] = (uVar41 << 0x3b) + local_f8 | 0xc000000000000000;
                  *(int *)((longlong)puVar38 + 0x1c) = iVar30;
                  if (puVar38 == (undefined8 *)0x0) {
                    local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
                    FUN_1447439e4(0,local_a8);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar38 + 1) = *(int *)(puVar38 + 1) + 1;
                    UNLOCK();
                    local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
                    FUN_1447439e4(puVar38,local_a8);
                    LOCK();
                    piVar1 = (int *)(puVar38 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar38)(puVar38,1);
                    }
                  }
                }
                else {
                  local_a8[0] = (code *)0x0;
                  local_98 = (longlong *)FUN_14001cc68(0x38,8);
                  pvVar10 = local_c8;
                  *local_98 = (longlong)&PTR_LAB_14aa68810;
                  local_c8 = (void *)0x0;
                  uVar26 = (undefined4)local_c0;
                  uVar3 = local_c0._4_4_;
                  local_c0 = 0;
                  *(undefined4 *)(local_98 + 1) = (undefined4)local_e8;
                  *(undefined4 *)((longlong)local_98 + 0xc) = local_e8._4_4_;
                  *(undefined4 *)(local_98 + 2) = (undefined4)uStack_e0;
                  *(undefined4 *)((longlong)local_98 + 0x14) = uStack_e0._4_4_;
                  *(undefined4 *)(local_98 + 3) = local_d8;
                  *(undefined4 *)((longlong)local_98 + 0x1c) = uStack_d4;
                  *(undefined4 *)(local_98 + 4) = (undefined4)uStack_d0;
                  *(undefined4 *)((longlong)local_98 + 0x24) = uStack_d0._4_4_;
                  local_98[5] = (longlong)pvVar10;
                  *(undefined4 *)(local_98 + 6) = uVar26;
                  *(undefined4 *)((longlong)local_98 + 0x34) = uVar3;
                  if (local_98 + 1 != (longlong *)0x0) {
                    local_a8[0] = FUN_14367cb48;
                  }
                  local_188 = local_a8;
                  FUN_14005a792(&DAT_14ca9a440,L"FLocalVertexFactoryCopyData",&DAT_14cb001e8);
                  if (local_a8[0] != (code *)0x0) {
                    plVar22 = local_98;
                    if (local_98 == (longlong *)0x0) {
                      plVar22 = local_88;
                    }
                    (**(code **)(*plVar22 + 0x10))();
                  }
                }
              }
            }
LAB_1401ec794:
            if (local_c8 != (void *)0x0) {
              FUN_1400020a8();
            }
            lVar37 = local_110;
            if (local_b8 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
        }
LAB_1401ec7c0:
        iVar30 = *(int *)(*(longlong *)(*plVar25 + lVar28 * 8) + 0x38);
        if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar30);
        }
        *(undefined4 *)(lVar39 + 0x10) = 0;
        if (*(int *)(lVar39 + 0x14) != iVar30) {
          FUN_147cd4458(lVar39);
        }
        if (0 < *(int *)(lVar6 + 0x38)) {
          lVar29 = 0;
          lVar31 = 0;
          do {
            lVar17 = *(longlong *)(lVar6 + 0x30);
            if (*(longlong *)(lVar6 + 0x30) == 0) {
              lVar17 = lVar6 + 0x10;
            }
            iVar30 = *(int *)(lVar17 + lVar29);
            lVar17 = (longlong)iVar30;
            if ((lVar17 < 0) ||
               (((*(int *)(lVar37 + 0x108) <= iVar30 ||
                 (plVar25 = *(longlong **)(*(longlong *)(lVar37 + 0x100) + lVar17 * 8),
                 plVar25 == (longlong *)0x0)) &&
                ((lVar37 = *(longlong *)(lVar37 + 0xf8), lVar37 == 0 ||
                 ((*(int *)(lVar37 + 0x160) <= iVar30 ||
                  (plVar25 = *(longlong **)(*(longlong *)(lVar37 + 0x158) + lVar17 * 0x30),
                  plVar25 == (longlong *)0x0)))))))) {
              FUN_14003fbd6();
              plVar25 = DAT_14caea080;
            }
            uVar16 = (**(code **)(*plVar25 + 0x2f0))();
            iVar30 = *(int *)(lVar39 + 0x10);
            *(uint *)(lVar39 + 0x10) = iVar30 + 1U;
            if (*(uint *)(lVar39 + 0x14) < iVar30 + 1U) {
              FUN_147cd452a(lVar39,iVar30);
            }
            lVar37 = *(longlong *)(lVar39 + 8);
            if (*(longlong *)(lVar39 + 8) == 0) {
              lVar37 = lVar39;
            }
            *(undefined8 *)(lVar37 + (longlong)iVar30 * 8) = uVar16;
            lVar31 = lVar31 + 1;
            lVar29 = lVar29 + 0x1c;
            lVar37 = local_110;
          } while (lVar31 < *(int *)(lVar6 + 0x38));
        }
        lVar31 = local_130 + 1;
        lVar29 = param_1[0x62];
      } while (lVar31 < *(int *)(lVar29 + 8));
    }
  }
  bVar32 = 2 - (local_108 == 0);
  *(byte *)((longlong)param_1 + 700) = bVar32;
  *(byte *)((longlong)param_1 + 700) = ((*(char *)(lVar37 + 0x31) != '\0') << 5 | bVar32) + 0x20;
  *(byte *)((longlong)param_1 + 0x2bd) =
       *(byte *)((longlong)param_1 + 0x2bd) & 0xf7 | (*(byte *)(lVar37 + 0x130) & 1) << 3;
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) | 4;
  FUN_1403fc26e(param_1);
  if (*(longlong **)(lVar37 + 0x170) == (longlong *)0x0) {
    uVar16 = 0;
  }
  else {
    cVar11 = (**(code **)(**(longlong **)(lVar37 + 0x170) + 0x330))();
    lVar37 = local_110;
    if (cVar11 == '\0') {
      uVar16 = 0;
    }
    else {
      uVar16 = FUN_1447b4020(*(undefined8 *)(local_110 + 0x170));
    }
  }
  param_1[0x67] = uVar16;
  *(uint *)(param_1 + 0x65) =
       (*(uint *)(param_1 + 0x65) & 0xfffffff9) + (*(uint *)(lVar37 + 0x178) & 3) * 2;
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ed0ec FUN_1401ed0ec body=464 status=ok
// SIG undefined FUN_1401ed0ec(void)

void FUN_1401ed0ec(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[0x3e] != 0) {
    cVar5 = (**(code **)(param_1[0x2f] + 0x128))(param_1 + 0x2f);
    if ((cVar5 != '\0') && (cVar5 = (**(code **)(*param_1 + 0x4b8))(param_1), cVar5 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
    }
    cVar5 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
    local_58 = DAT_14c8464f0;
    local_60 = DAT_14c8464e8;
    local_68 = DAT_14c8464e0;
    if (cVar5 != '\0') {
      dVar1 = (double)param_1[0x48];
      dVar2 = (double)param_1[0x47];
      dVar3 = (double)param_1[0x46];
      fVar6 = (float)(**(code **)(*param_1 + 0x478))(param_1);
      dVar4 = (double)fVar6;
      local_58 = -dVar1 * dVar4;
      local_60 = -dVar2 * dVar4;
      local_68 = -dVar3 * dVar4;
    }
    local_58 = local_58 + (double)param_1[0x73];
    local_60 = local_60 + (double)param_1[0x72];
    local_68 = local_68 + (double)param_1[0x71];
    local_78 = param_1[0x27];
    local_88 = (undefined4)param_1[0x25];
    uStack_84 = *(undefined4 *)((longlong)param_1 + 300);
    uStack_80 = (undefined4)param_1[0x26];
    uStack_7c = *(undefined4 *)((longlong)param_1 + 0x134);
    if (*(byte *)(param_1 + 0xb5) - 1 < 3) {
      (**(code **)(*param_1 + 0x5d0))(param_1,*(undefined1 *)((longlong)param_1 + 0x5aa),0);
    }
    else {
      (**(code **)(*param_1 + 0x828))(param_1);
    }
    (**(code **)(*param_1 + 0x8e0))(param_1,param_2,&local_68,&local_88);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401ed2ec FUN_1401ed2ec body=2254 status=ok
// SIG undefined FUN_1401ed2ec(void)

void FUN_1401ed2ec(longlong *param_1,longlong param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_1f8 [32];
  char **local_1d8;
  double *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  char *local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
  uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
  local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188);
  uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
  if (((((((*(byte *)((longlong)param_1 + 0x34a) & 0x40) == 0) ||
         (local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
         uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
         local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188),
         uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
         (*(byte *)(param_2 + 0xad) & 1) == 0)) ||
        (local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
        uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
        local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188),
        uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
        *(int *)(param_2 + 0xdc) == 0)) ||
       ((uVar12 = *(uint *)(param_2 + 0xd8),
        local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
        uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
        local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188),
        uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180), (int)uVar12 < 0 ||
        (local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
        uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
        local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188),
        uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
        DAT_14c9647dc <= (int)uVar12)))) ||
      (plVar17 = (longlong *)
                 ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
      local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
      uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
      local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188),
      uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
      plVar17 == (longlong *)0x0)) ||
     (((local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
       uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
       local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188),
       uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
       (int)plVar17[2] != *(int *)(param_2 + 0xdc) ||
       (local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
       uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
       local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188),
       uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
       (*(uint *)(plVar17 + 1) & 0x10200000) != 0)) ||
      (plVar17 = (longlong *)*plVar17,
      local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
      uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
      local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188),
      uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
      plVar17 == (longlong *)0x0)))) goto LAB_1401ed47f;
  local_e8 = *(double *)(param_2 + 0x38);
  local_f8 = *(double *)(param_2 + 0x28);
  dStack_f0 = *(double *)(param_2 + 0x30);
  puVar13 = (uint *)(**(code **)(*plVar17 + 0x7b8))
                              (plVar17,*(undefined8 *)(param_2 + 0xf0),
                               CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1),0xffffffff);
  if ((((puVar13 == (uint *)0x0) || ((puVar13[2] & 1) == 0)) || (puVar13[1] == 0)) ||
     (((uVar12 = *puVar13, (int)uVar12 < 0 || (DAT_14c9647dc <= (int)uVar12)) ||
      ((plVar16 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar16 == (longlong *)0x0 ||
       ((*(uint *)(plVar16 + 2) != puVar13[1] || ((*(uint *)(plVar16 + 1) & 0x10200000) != 0))))))))
  {
LAB_1401ed43c:
    local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
    uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
    local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188);
    uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
    if (DAT_14c7613e9 != '\x01') goto LAB_1401ed47f;
    uVar9 = *(ulonglong *)(plVar17[2] + 0x18);
    local_130 = "GeometryCollectionComponent";
    dStack_128 = (double)CONCAT35(dStack_128._5_3_,0x1b);
    uVar12 = FUN_14001a6c0(&local_130,1);
    local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
    uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
    local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188);
    uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
    if ((uVar9 != uVar12) ||
       (local_1c8 = (char *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
       uStack_1c0 = (double)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
       local_188 = (char *)CONCAT44(local_188._4_4_,(undefined4)local_188),
       uStack_180 = (double)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180),
       (*(byte *)(plVar17 + 0x83) & 1) == 0)) goto LAB_1401ed47f;
    fVar22 = 1.0;
  }
  else {
    if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
      lVar18 = *plVar16;
    }
    else {
      lVar18 = 0;
    }
    lVar14 = DAT_14c997cc0;
    if (DAT_14c997cc0 == 0) {
      plVar16 = (longlong *)FUN_145a62958();
      lVar14 = plVar16[0x22];
      if (lVar14 == 0) {
        (**(code **)(*plVar16 + 1000))(plVar16);
        lVar14 = plVar16[0x22];
      }
    }
    cVar11 = *(char *)(lVar14 + 0x75);
    if (*(char *)(lVar18 + 0x31) != '\0') {
      cVar11 = *(char *)(lVar18 + 0x31);
    }
    if ((cVar11 == '\x03') || (*(longlong *)(puVar13 + 0x4e) == 0)) goto LAB_1401ed43c;
    fVar22 = (float)FUN_1401edbbc(puVar13);
    if (fVar22 <= 1.0) {
      fVar22 = 1.0;
    }
    if ((*(byte *)((longlong)param_1 + 0x34b) & 2) != 0) {
      FUN_1417e58c4(puVar13,&local_130);
      dVar1 = (local_108 - local_120) * 0.5;
      dVar21 = (local_110 - dStack_128) * 0.5;
      dVar2 = (local_118 - (double)local_130) * 0.5;
      if (((9.999999747378752e-05 < ABS(dVar2)) || (9.999999747378752e-05 < ABS(dVar21))) ||
         (9.999999747378752e-05 < ABS(dVar1))) {
        dVar3 = (double)param_1[0x46];
        dVar4 = (double)param_1[0x47];
        dVar5 = (double)param_1[0x48];
        dVar1 = (double)*(float *)(param_1 + 0x6e) *
                ((-dVar3 * dVar2 - dVar21 * dVar4) - dVar1 * dVar5) +
                ((((double)local_130 + dVar2) * -dVar3 - (dStack_128 + dVar21) * dVar4) -
                (local_120 + dVar1) * dVar5);
        dVar2 = local_e8 * dVar5 + local_f8 * dVar3 + dVar4 * dStack_f0;
        local_e8 = (local_e8 - dVar5 * dVar2) - dVar5 * dVar1;
        dStack_f0 = (dStack_f0 - dVar4 * dVar2) - dVar4 * dVar1;
        local_f8 = (local_f8 - dVar2 * dVar3) - dVar1 * dVar3;
      }
    }
  }
  dVar1 = *(double *)(param_2 + 0x58);
  dVar2 = *(double *)(param_2 + 0x60);
  dVar21 = *(double *)(param_2 + 0x68);
  FUN_14083167e(plVar17,&local_148,0);
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  if ((((dVar3 != 0.0) || (NAN(dVar3))) || ((dVar4 != 0.0 || ((NAN(dVar4) || (dVar5 != 0.0)))))) ||
     (NAN(dVar5))) {
    dVar10 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
    if (((dVar10 != 1.0) || (dVar8 = dVar5, dVar7 = dVar4, dVar6 = dVar3, NAN(dVar10))) &&
       (dVar8 = DAT_14c8464f0, dVar7 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar10)) {
      dVar10 = 1.0 / SQRT(dVar10);
      dVar8 = dVar5 * dVar10;
      dVar7 = dVar4 * dVar10;
      dVar6 = dVar3 * dVar10;
    }
    fVar23 = (float)(**(code **)(*param_1 + 0x480))(param_1);
    dVar3 = (double)fVar23;
    dVar8 = dVar8 * dVar3;
    dVar7 = dVar7 * dVar3;
    dVar6 = dVar6 * dVar3;
  }
  else {
    dVar6 = *param_4;
    dVar7 = param_4[1];
    dVar8 = param_4[2];
  }
  fVar23 = 1.0;
  if (((*(byte *)((longlong)param_1 + 0x34b) & 4) != 0) &&
     (((9.999999747378752e-05 < ABS(local_148) || (9.999999747378752e-05 < ABS(local_140))) ||
      (9.999999747378752e-05 < ABS(local_138))))) {
    fVar20 = (float)(local_138 * dVar8 + local_148 * dVar6 + dVar7 * local_140);
    fVar23 = fVar20;
    if (1.0 <= fVar20) {
      fVar23 = 1.0;
    }
    fVar23 = (float)(~-(uint)(0.0 < fVar20) & 0x3f800000 | (uint)fVar23 & -(uint)(0.0 < fVar20));
  }
  if ((*(byte *)((longlong)param_1 + 0x34b) & 1) != 0) {
    fVar23 = fVar23 * fVar22;
  }
  if (DAT_14cad0ae8 == '\x01') {
    uVar15 = FUN_14091baa4();
    plVar16 = (longlong *)FUN_14109baf6(uVar15);
    cVar11 = (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  else {
    cVar11 = '\0';
  }
  puVar19 = (undefined8 *)(param_2 + 0xf0);
  local_120 = (double)fVar23;
  dVar1 = -dVar1 * local_120;
  dStack_128 = -dVar2 * local_120;
  local_120 = -dVar21 * local_120;
  if (((1.0 < ABS(local_148)) || (1.0 < ABS(local_140))) || (1.0 < ABS(local_138))) {
    dVar2 = (double)*(float *)((longlong)param_1 + 0x36c);
    local_130 = (char *)(dVar1 * dVar2);
    dStack_128 = dStack_128 * dVar2;
    local_120 = local_120 * dVar2;
    if (cVar11 == '\0') {
      local_198 = local_e8;
      local_1a8 = local_f8;
      dStack_1a0 = dStack_f0;
      local_1b8 = local_120;
      local_1c8 = local_130;
      uStack_1c0 = dStack_128;
      (**(code **)(*plVar17 + 0x6d8))(plVar17,&local_1c8,&local_1a8,*puVar19);
      goto LAB_1401ed47f;
    }
    uVar15 = 2;
  }
  else {
    dVar2 = (double)*(float *)(param_1 + 0x6d);
    local_130 = (char *)(dVar1 * dVar2);
    dStack_128 = dStack_128 * dVar2;
    local_120 = local_120 * dVar2;
    if (cVar11 == '\0') {
      local_158 = local_e8;
      local_168 = local_f8;
      dStack_160 = dStack_f0;
      local_178 = local_120;
      local_188 = local_130;
      uStack_180 = dStack_128;
      (**(code **)(*plVar17 + 0x6b8))(plVar17,&local_188,&local_168,*puVar19);
      goto LAB_1401ed47f;
    }
    uVar15 = 8;
  }
  local_1d0 = &local_f8;
  local_1d8 = &local_130;
  FUN_1479e9ae2(param_1,plVar17,puVar19,uVar15);
LAB_1401ed47f:
  if ((local_e0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401edbbc FUN_1401edbbc body=102 status=ok
// SIG undefined FUN_1401edbbc(void)

void FUN_1401edbbc(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  undefined1 *local_28;
  undefined4 **local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_14;
  local_14 = 0;
  local_20 = &local_30;
  local_28 = &LAB_14362051c;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_14);
}



// FUNCTION 1401edc24 FUN_1401edc24 body=199 status=ok
// SIG undefined FUN_1401edc24(void)

void FUN_1401edc24(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe;
  }
  FUN_1401edcec(param_1,DAT_14c89603c);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 8) = 1;
  }
  return;
}



// FUNCTION 1401edcec FUN_1401edcec body=102 status=ok
// SIG undefined FUN_1401edcec(void)

void FUN_1401edcec(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 == (undefined8 *)0x0) {
    if (((int)DAT_14c89603c == (int)param_2) &&
       (DAT_14c89603c._4_4_ == (int)((ulonglong)param_2 >> 0x20))) {
      return;
    }
    puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined8 **)(param_1 + 0x48) = puVar1;
  }
  *puVar1 = param_2;
  return;
}



// FUNCTION 1401edd52 FUN_1401edd52 body=76 status=ok
// SIG undefined FUN_1401edd52(void)

void FUN_1401edd52(longlong *param_1)

{
  FUN_1401edd9e(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401edd9e FUN_1401edd9e body=63 status=ok
// SIG undefined FUN_1401edd9e(void)

void FUN_1401edd9e(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401eddde FUN_1401eddde body=149 status=ok
// SIG undefined FUN_1401eddde(void)

void FUN_1401eddde(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a18e458;
  FUN_1401edebb(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ede73(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0xc];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001401ede6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1401ede73 FUN_1401ede73 body=72 status=ok
// SIG undefined FUN_1401ede73(void)

void FUN_1401ede73(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x48);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      if (plVar3[-6] != 0) {
        FUN_1400020a8();
      }
      plVar3 = plVar3 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401edebb FUN_1401edebb body=119 status=ok
// SIG undefined FUN_1401edebb(void)

void FUN_1401edebb(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x80);
    do {
      FUN_14072ffb2(*(undefined8 *)(puVar3 + -2),*puVar3);
      if (*(longlong *)(puVar3 + -2) != 0) {
        FUN_1400020a8();
      }
      plVar2 = *(longlong **)(puVar3 + -4);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      if (*(longlong *)(puVar3 + -0x10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar3 + -0x1e) != 0) {
        FUN_1400020a8();
      }
      puVar3 = puVar3 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401edf32 FUN_1401edf32 body=769 status=ok
// SIG undefined FUN_1401edf32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401edf32(longlong *param_1,longlong *param_2,longlong param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7,longlong param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  
  if (param_8 != 0) {
    FUN_14491c2e0(param_1,param_2,param_5,param_8,1);
    return;
  }
  plVar15 = param_7;
  if (param_7 == (longlong *)0x0) {
    plVar15 = (longlong *)param_2[0xcb];
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)param_2[0xcc];
      if ((DAT_14c950c29 & plVar15 != (longlong *)0x0) != 0) goto LAB_1401ee21e;
    }
    else if (DAT_14c950c29 == 1) {
LAB_1401ee21e:
      FUN_14689c22e(plVar15,param_2,param_5);
    }
  }
  if (*(int *)((longlong)param_2 + 0x66c) != 0) {
    uVar2 = *(uint *)(param_2 + 0xcd);
    plVar21 = (longlong *)0x0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1401ee002;
    puVar19 = (undefined8 *)
              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar19 != (undefined8 *)0x0) &&
       ((*(int *)(puVar19 + 2) == *(int *)((longlong)param_2 + 0x66c) &&
        ((*(uint *)(puVar19 + 1) & 0x10200000) == 0)))) {
      plVar21 = (longlong *)*puVar19;
      goto LAB_1401ee002;
    }
  }
  plVar21 = (longlong *)0x0;
LAB_1401ee002:
  uVar12 = (**(code **)(*plVar15 + 0x308))(plVar15);
  lVar13 = (**(code **)(*param_2 + 0xa78))(param_2,param_7);
  iVar3 = *(int *)(lVar13 + 8);
  lVar14 = (**(code **)(*plVar15 + 0x308))(plVar15);
  iVar4 = *(int *)(lVar14 + 0x28);
  if (plVar21 == (longlong *)0x0) {
    plVar21 = param_2;
  }
  lVar6 = plVar21[0xe3];
  lVar14 = (**(code **)(*plVar15 + 0x368))(plVar15);
  plVar15 = (longlong *)(**(code **)(*param_2 + 0xae8))(param_2);
  if ((*plVar15 != 0) &&
     (plVar15 = (longlong *)(**(code **)(*param_2 + 0xae8))(param_2),
     *(int *)(*plVar15 + 8) == *(int *)(lVar14 + 8))) {
    plVar15 = (longlong *)(**(code **)(*param_2 + 0xae8))(param_2);
    lVar14 = *plVar15;
  }
  iVar17 = (int)param_1[1];
  iVar18 = *(int *)(lVar14 + 8);
  if (iVar17 != iVar18) {
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar18);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    iVar11 = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar18) {
      FUN_14491ce3c(param_1);
      iVar11 = (int)param_1[1];
      iVar18 = *(int *)((longlong)param_1 + 0xc);
    }
    uVar2 = *(uint *)(lVar14 + 8);
    iVar17 = uVar2 + iVar11;
    *(int *)(param_1 + 1) = iVar17;
    if ((uint)(iVar18 - iVar11) < uVar2) {
      FUN_140491d2e(param_1);
      iVar17 = (int)param_1[1];
    }
    if (0 < iVar17) {
      lVar16 = 0;
      lVar20 = 0;
      do {
        uVar10 = _DAT_14c846288;
        lVar5 = *param_1;
        puVar19 = (undefined8 *)(lVar5 + 0x30 + lVar16);
        *puVar19 = _DAT_14c846280;
        puVar19[1] = uVar10;
        uVar10 = _DAT_14c846278;
        puVar19 = (undefined8 *)(lVar5 + 0x20 + lVar16);
        *puVar19 = _DAT_14c846270;
        puVar19[1] = uVar10;
        uVar10 = _DAT_14c846268;
        puVar19 = (undefined8 *)(lVar5 + 0x10 + lVar16);
        *puVar19 = _DAT_14c846260;
        puVar19[1] = uVar10;
        uVar9 = DAT_14c846258._4_4_;
        uVar8 = (undefined4)DAT_14c846258;
        uVar7 = DAT_14c846254;
        puVar1 = (undefined4 *)(lVar5 + lVar16);
        *puVar1 = DAT_14c846250;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        lVar20 = lVar20 + 1;
        iVar17 = (int)param_1[1];
        lVar16 = lVar16 + 0x40;
      } while (lVar20 < iVar17);
    }
  }
  if ((param_4 < 0) || (*(int *)(param_3 + 8) <= param_4)) {
    if (0 < iVar17) {
      lVar13 = 0;
      lVar14 = 0;
      do {
        uVar12 = _DAT_14c846288;
        lVar6 = *param_1;
        puVar19 = (undefined8 *)(lVar6 + 0x30 + lVar13);
        *puVar19 = _DAT_14c846280;
        puVar19[1] = uVar12;
        uVar12 = _DAT_14c846278;
        puVar19 = (undefined8 *)(lVar6 + 0x20 + lVar13);
        *puVar19 = _DAT_14c846270;
        puVar19[1] = uVar12;
        uVar12 = _DAT_14c846268;
        puVar19 = (undefined8 *)(lVar6 + 0x10 + lVar13);
        *puVar19 = _DAT_14c846260;
        puVar19[1] = uVar12;
        uVar12 = CONCAT44(DAT_14c846258._4_4_,(undefined4)DAT_14c846258);
        *(undefined8 *)(lVar6 + lVar13) = CONCAT44(DAT_14c846254,DAT_14c846250);
        ((undefined8 *)(lVar6 + lVar13))[1] = uVar12;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x40;
      } while (lVar14 < (int)param_1[1]);
    }
  }
  else {
    lVar16 = 0;
    if (iVar3 == iVar4) {
      lVar16 = lVar13;
    }
    FUN_144b296ba(param_1,plVar21 + (longlong)(int)lVar6 * 2 + 0xda,
                  plVar21 + (longlong)(int)lVar6 * 2 + 0x10f,lVar16,lVar14,uVar12,param_3,param_4,
                  param_5,param_6);
  }
  return;
}



// FUNCTION 1401ee234 FUN_1401ee234 body=245 status=ok
// SIG undefined FUN_1401ee234(void)

longlong * FUN_1401ee234(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_1447e4f80();
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_30,param_2,*(undefined8 *)(lVar4 + 0x48));
  *param_1 = local_30;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
    if (local_30 != 0) {
      LOCK();
      puVar1 = (uint *)(local_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_30 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_30;
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1401ee32a FUN_1401ee32a body=1453 status=ok
// SIG undefined FUN_1401ee32a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_1401ee32a(void *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  void *_Dst;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 local_cf48 [32];
  ulonglong local_cf28;
  void *local_cf20;
  ulonglong local_cf18 [2];
  undefined4 local_cf08;
  undefined1 local_cf02;
  undefined4 local_cf01;
  undefined4 local_cefc [3];
  undefined8 local_cef0 [5];
  undefined4 local_cec8 [2];
  undefined8 local_cec0 [12];
  undefined4 local_ce60 [2];
  undefined8 local_ce58 [6];
  undefined4 local_ce28;
  undefined8 local_ce24 [2];
  undefined8 local_ce10 [2];
  undefined1 auStack_ce00 [8];
  undefined8 local_cdf8;
  undefined4 local_cdf0;
  undefined8 local_cdec;
  undefined4 local_cde4;
  undefined1 local_cde0 [8];
  undefined8 local_cdd8;
  undefined4 local_cdd0 [2];
  undefined8 local_cdc8 [26];
  undefined8 local_ccf8 [2];
  undefined4 local_cce8 [4];
  undefined8 local_ccd8;
  undefined2 local_ccd0 [16];
  undefined8 local_ccb0 [3];
  undefined1 local_cc98 [4];
  undefined4 local_cc94;
  undefined1 local_cc90 [4];
  undefined8 local_cc8c;
  undefined4 local_cc84 [3];
  undefined8 local_cc78 [8];
  undefined8 local_cc38 [14];
  undefined4 local_cbc8 [2];
  undefined8 local_cbc0 [2];
  undefined4 local_cbb0 [2];
  undefined8 local_cba8;
  undefined8 auStack_cb9f [2];
  undefined4 local_cb8c [12999];
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x1401ee340;
  local_70 = DAT_14c707940 ^ (ulonglong)local_cf48;
  uVar8 = (uint)DAT_14ca46940;
  local_cf20 = param_1;
  uVar14 = DAT_14ca46940;
  do {
    DAT_14ca46940 = uVar14;
    local_cf18[0] = uVar14;
    if ((uVar14 & 0x3ffffff) == 0) {
LAB_1401ee496:
      _Dst = (void *)FUN_14001cc68(0x13c10,0x10);
LAB_1401ee4a8:
      uVar8 = FUN_14493c560();
      if (uVar8 == 0) {
        uVar9 = 0;
        uVar14 = 0;
        lVar11 = 0;
      }
      else {
        uVar14 = (ulonglong)(uVar8 >> 0xe);
        uVar9 = uVar8 & 0x3fff;
        lVar11 = (ulonglong)(uVar9 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar14 * 8);
      }
      *(void **)(lVar11 + 8) = _Dst;
      do {
        local_cf18[0] = DAT_14ca46900;
        local_cf28 = (DAT_14ca46900 & 0xfffffffffc000000) + 0x4000000;
        if (local_cf28 >> 0x1a < DAT_14ca46900 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        local_cf28 = local_cf28 & 0xfffffffffc000000 | (ulonglong)uVar8;
        if (uVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(&DAT_14c833b00 + uVar14 * 8) + (ulonglong)(uVar9 * 0x18);
        }
        *(uint *)(lVar11 + 0x10) = (uint)local_cf18[0] & 0x3ffffff;
        LOCK();
        bVar15 = local_cf18[0] != DAT_14ca46900;
        uVar10 = local_cf28;
        if (bVar15) {
          uVar10 = DAT_14ca46900;
        }
        DAT_14ca46900 = uVar10;
        UNLOCK();
      } while (bVar15);
      LOCK();
      DAT_14ca46980 = DAT_14ca46980 + 1;
      UNLOCK();
      memcpy(_Dst,local_cf20,0x13c10);
      *(undefined8 *)((longlong)_Dst + 0x18) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30e0) = 0;
      *(undefined8 *)((longlong)_Dst + 0x3110) = 0;
      lVar11 = 0;
      do {
        *(undefined8 *)((longlong)local_cf18 + lVar11) = 0;
        *(undefined8 *)((longlong)local_cf18 + lVar11 + 8) = 0;
        *(undefined4 *)((longlong)&local_cf08 + lVar11) = 2;
        (&local_cf02)[lVar11] = 0x3a;
        *(undefined4 *)((longlong)local_cefc + lVar11) = 0;
        *(undefined4 *)((longlong)&local_cf01 + lVar11) = 0;
        *(undefined8 *)((longlong)local_cef0 + lVar11) = 0;
        *(undefined8 *)((longlong)local_cef0 + lVar11 + 8) = 0;
        *(undefined8 *)((longlong)local_cef0 + lVar11 + 0x10) = 0;
        *(undefined8 *)((longlong)local_cef0 + lVar11 + 0x20) = 1;
        *(undefined4 *)((longlong)local_cec8 + lVar11) = 0;
        *(undefined8 *)((longlong)local_ce58 + lVar11 + 0x28) = 0;
        *(undefined8 *)((longlong)local_ce58 + lVar11) = 0;
        *(undefined8 *)((longlong)local_ce58 + lVar11 + 8) = 0;
        *(undefined8 *)((longlong)local_ce58 + lVar11 + 0x10) = 0;
        *(undefined8 *)((longlong)local_ce58 + lVar11 + 0x18) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11 + 8) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11 + 0x10) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11 + 0x18) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11 + 0x20) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11 + 0x28) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11 + 0x30) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11 + 0x38) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11 + 0x40) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11 + 0x48) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11 + 0x50) = 0;
        *(undefined8 *)((longlong)local_cec0 + lVar11 + 0x58) = 0;
        *(undefined4 *)((longlong)local_ce60 + lVar11) = 0;
        *(undefined8 *)((longlong)local_ce24 + lVar11) = 1;
        *(undefined4 *)((longlong)&local_ce28 + lVar11) = 1;
        *(undefined8 *)((longlong)local_ce58 + lVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)local_ce10 + lVar11) = 0;
        *(undefined8 *)((longlong)&local_cdf8 + lVar11) = 0;
        *(undefined8 *)((longlong)&local_cdec + lVar11) = 1;
        *(undefined4 *)((longlong)&local_cde4 + lVar11) = 0;
        *(undefined1 **)((longlong)local_ce10 + lVar11 + 8) = &DAT_100000001;
        *(undefined4 *)((longlong)&local_cdf0 + lVar11) = 1;
        FUN_14471858a(auStack_ce00 + lVar11,1);
        local_cde0[lVar11] = 0;
        *(undefined8 *)((longlong)&local_cdd8 + lVar11) = 0;
        *(undefined4 *)((longlong)local_cdd0 + lVar11) = 0;
        *(undefined8 *)((longlong)local_cdc8 + lVar11) = 0;
        *(undefined8 *)((longlong)local_cdc8 + lVar11 + 8) = 0;
        *(undefined8 *)((longlong)local_ccf8 + lVar11) = 0;
        *(undefined8 *)((longlong)local_ccf8 + lVar11 + 8) = 0;
        *(undefined4 *)((longlong)local_cce8 + lVar11) = 1;
        *(undefined8 *)((longlong)&local_ccd8 + lVar11) = 0;
        *(undefined2 *)((longlong)local_ccd0 + lVar11) = 0x9b;
        *(undefined8 *)((longlong)local_ccb0 + lVar11) = 0;
        *(undefined8 *)((longlong)local_ccb0 + lVar11 + 8) = 0x600000000;
        *(undefined8 *)((longlong)local_ccb0 + lVar11 + 0x10) = 0;
        local_cc98[lVar11] = 0;
        *(undefined4 *)((longlong)&local_cc94 + lVar11) = 0;
        local_cc90[lVar11] = 0;
        *(undefined8 *)((longlong)&local_cc8c + lVar11) = 0xffffffff00000000;
        *(undefined4 *)((longlong)local_cc84 + lVar11) = 0xffffffff;
        *(undefined8 *)((longlong)local_cc78 + lVar11) = 0;
        *(undefined8 *)((longlong)local_cc78 + lVar11 + 0x10) = 0;
        *(undefined4 *)((longlong)local_cbc8 + lVar11) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x60) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x68) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x50) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x58) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x40) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x48) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x30) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x38) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x20) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x28) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x10) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 0x18) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11) = 0;
        *(undefined8 *)((longlong)local_cc38 + lVar11 + 8) = 0;
        *(undefined8 *)((longlong)local_cbc0 + lVar11) = 0;
        *(undefined8 *)((longlong)local_cbc0 + lVar11 + 8) = 0;
        *(undefined4 *)((longlong)local_cbb0 + lVar11) = 1;
        *(undefined4 *)((longlong)local_cb8c + lVar11) = 0;
        lVar12 = lVar11 + 0x390;
        *(undefined8 *)((longlong)&local_cba8 + lVar11) = 0;
        *(undefined8 *)(&stack0xffffffffffff3460 + lVar11) = 0;
        *(undefined8 *)((longlong)auStack_cb9f + lVar11) = 0;
        *(undefined8 *)((longlong)auStack_cb9f + lVar11 + 8) = 0;
        lVar11 = lVar12;
      } while (lVar12 != 0xcea0);
      memcpy((void *)((longlong)_Dst + 0x4860),local_cf18,0xcea0);
      lVar11 = 0;
      do {
        *(undefined8 *)((longlong)_Dst + lVar11 + 0x4948) = 0;
        puVar1 = (undefined8 *)((longlong)_Dst + lVar11 + 0x4920);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((longlong)_Dst + lVar11 + 0x4930);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 **)((longlong)_Dst + lVar11 + 0x4950) = &DAT_100000001;
        *(undefined8 *)((longlong)_Dst + lVar11 + 0x4940) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)_Dst + lVar11 + 0x4958) = 0;
        *(undefined8 *)((longlong)_Dst + lVar11 + 0x4968) = 0;
        *(undefined8 *)((longlong)_Dst + lVar11 + 0x4980) = 0;
        *(undefined1 **)((longlong)_Dst + lVar11 + 0x4970) = &DAT_100000001;
        puVar1 = (undefined8 *)((longlong)_Dst + lVar11 + 0x4988);
        *puVar1 = &DAT_100000001;
        puVar1[1] = 0;
        FUN_14471858a((longlong)_Dst + lVar11 + 0x4978,1);
        lVar11 = lVar11 + 0x390;
      } while (lVar11 != 0xcea0);
      uVar2 = *(undefined4 *)((longlong)local_cf20 + 0x13ba0);
      uVar3 = *(undefined4 *)((longlong)local_cf20 + 0x13ba4);
      uVar4 = *(undefined4 *)((longlong)local_cf20 + 0x13ba8);
      uVar5 = *(undefined4 *)((longlong)local_cf20 + 0x13bac);
      uVar6 = *(undefined8 *)((longlong)local_cf20 + 0x13bb0);
      uVar7 = *(undefined8 *)((longlong)local_cf20 + 0x13bb8);
      *(undefined8 *)((longlong)_Dst + 0x13bc0) = *(undefined8 *)((longlong)local_cf20 + 0x13bc0);
      *(undefined8 *)((longlong)_Dst + 0x13bb0) = uVar6;
      *(undefined8 *)((longlong)_Dst + 0x13bb8) = uVar7;
      *(undefined4 *)((longlong)_Dst + 0x13ba0) = uVar2;
      *(undefined4 *)((longlong)_Dst + 0x13ba4) = uVar3;
      *(undefined4 *)((longlong)_Dst + 0x13ba8) = uVar4;
      *(undefined4 *)((longlong)_Dst + 0x13bac) = uVar5;
      *(void **)((longlong)_Dst + 0x30a0) = local_cf20;
      lVar11 = 0xcb10;
      do {
        FUN_1446fb720((longlong)local_cf18 + lVar11);
        lVar11 = lVar11 + -0x390;
      } while (lVar11 != -0x390);
      if ((local_70 ^ (ulonglong)local_cf48) == DAT_14c707940) {
        return _Dst;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_cf28 = (uVar14 & 0xfffffffffc000000) + 0x4000000;
    if (local_cf28 >> 0x1a < uVar14 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar10 = (ulonglong)((uVar8 & 0x3ffffff) >> 0xe);
    uVar13 = (ulonglong)((uint)uVar14 & 0x3fff);
    local_cf28 = local_cf28 & 0xfffffffffc000000 |
                 (ulonglong)
                 *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 0x10 + uVar13 * 0x18);
    LOCK();
    bVar15 = local_cf18[0] == DAT_14ca46940;
    uVar14 = local_cf28;
    if (!bVar15) {
      uVar14 = DAT_14ca46940;
    }
    DAT_14ca46940 = uVar14;
    UNLOCK();
    if (bVar15) {
      *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + uVar13 * 0x18 + 0x10) = 0;
      _Dst = *(void **)(*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 8 +
                       (ulonglong)(uVar8 & 0x3fff) * 0x18);
      FUN_1447d080c();
      if (_Dst != (void *)0x0) {
        LOCK();
        DAT_14ca46984 = DAT_14ca46984 + -1;
        UNLOCK();
        goto LAB_1401ee4a8;
      }
      goto LAB_1401ee496;
    }
    uVar8 = (uint)DAT_14ca46940;
    uVar14 = DAT_14ca46940;
  } while( true );
}



// FUNCTION 1401ee8d8 FUN_1401ee8d8 body=16655 status=ok
// SIG undefined FUN_1401ee8d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ee8d8(longlong param_1,ulonglong param_2,int *param_3,longlong param_4,uint param_5,
                  longlong param_6)

{
  double *pdVar1;
  int *piVar2;
  undefined4 *puVar3;
  double dVar4;
  byte bVar5;
  double *pdVar6;
  double dVar7;
  byte bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  float *pfVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined *puVar27;
  double *pdVar28;
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  void *pvVar34;
  bool bVar35;
  double *pdVar36;
  undefined1 *puVar37;
  double *pdVar38;
  bool bVar39;
  bool bVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  undefined4 uVar43;
  uint uVar44;
  float fVar45;
  undefined4 uVar46;
  uint uVar47;
  undefined4 uVar48;
  float fVar49;
  uint uVar50;
  float fVar51;
  double dVar52;
  float fVar53;
  float fVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auStack_3e8 [32];
  ulonglong local_3c8;
  int *local_3c0;
  double **local_3b8;
  undefined8 *local_3b0;
  longlong local_3a0;
  longlong *local_398;
  int *local_390;
  int local_384;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  ulonglong local_360;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  longlong local_318;
  int local_30c;
  int local_308;
  int local_300;
  int local_2fc;
  double *local_2f8;
  undefined8 uStack_2f0;
  int local_2dc;
  int iStack_2d8;
  int local_2d4;
  int local_2d0;
  int iStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [144];
  undefined8 uStack_228;
  undefined5 uStack_220;
  undefined3 local_21b;
  undefined1 uStack_218;
  undefined4 uStack_217;
  undefined4 uStack_213;
  undefined4 uStack_20f;
  undefined1 local_208 [16];
  undefined1 *local_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  uint local_1df;
  undefined3 local_1db;
  undefined1 uStack_1d8;
  undefined4 uStack_1d7;
  undefined4 uStack_1d3;
  undefined4 uStack_1cf;
  undefined1 local_1c8 [16];
  undefined1 *local_1b8;
  longlong lStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
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
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined1 local_d2;
  undefined1 local_d1;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  lVar31 = *(longlong *)(param_1 + 8);
  puVar27 = (undefined *)(lVar31 + 0x1b8);
  if (*(char *)(lVar31 + 0xd0) == '\0') {
    puVar27 = &DAT_14cb05410;
  }
  if (*(char *)(param_1 + 0x23f5) == '\x01') {
    local_2c8 = 0;
    local_2c0 = CONCAT44(*(int *)(param_1 + 0x3104) - *(int *)(param_1 + 0x30fc),
                         *(int *)(param_1 + 0x3100) - *(int *)(param_1 + 0x30f8));
  }
  else {
    local_2c8 = *(undefined8 *)(param_1 + 0x30f8);
    local_2c0 = *(undefined8 *)(param_1 + 0x3100);
  }
  iVar11 = (int)*(undefined8 *)(puVar27 + 0x10);
  local_2d0 = 1;
  if (1 < iVar11) {
    local_2d0 = iVar11;
  }
  iVar11 = (int)((ulonglong)*(undefined8 *)(puVar27 + 0x10) >> 0x20);
  iStack_2cc = 1;
  if (1 < iVar11) {
    iStack_2cc = iVar11;
  }
  local_1a8 = (double *)(lVar31 + 0x48);
  local_3b8 = (double **)&local_1a8;
  uStack_1a0 = *(longlong **)(param_1 + 0x4d8);
  local_198 = *(ulonglong *)(param_1 + 0x4e0);
  uStack_190 = *(ulonglong *)(lVar31 + 0x88);
  uStack_188 = *(undefined8 *)(lVar31 + 0x90);
  uStack_180 = *(undefined8 *)(lVar31 + 0x98);
  local_178 = *(undefined8 *)(param_1 + 0x23d0);
  local_168 = *(undefined8 *)(param_1 + 0x2400);
  uStack_160 = *(undefined8 *)(param_1 + 0x2408);
  local_158 = *(undefined4 *)(param_1 + 0x2410);
  uStack_154 = *(undefined4 *)(param_1 + 0x2414);
  uStack_150 = *(undefined4 *)(param_1 + 0x2418);
  uStack_14c = *(undefined4 *)(param_1 + 0x241c);
  local_148 = *(undefined8 *)(param_1 + 0x23a0);
  uStack_140 = *(undefined8 *)(param_1 + 0x23a8);
  local_138 = *(undefined8 *)(param_1 + 0x1e50);
  uStack_130 = *(undefined8 *)(param_1 + 0x1e58);
  local_128 = *(undefined8 *)(param_1 + 0x1e70);
  uStack_120 = *(undefined8 *)(param_1 + 0x1e78);
  local_118 = *(undefined8 *)(param_1 + 0x1e60);
  uStack_110 = *(undefined8 *)(param_1 + 0x1e68);
  local_108 = *(undefined8 *)(param_1 + 0x1e80);
  uStack_100 = *(undefined8 *)(param_1 + 0x1e88);
  local_f8 = 0;
  local_f0 = *(undefined8 *)(lVar31 + 0xb0);
  local_e8 = *(undefined4 *)(lVar31 + 0xac);
  local_e4 = *(undefined4 *)(param_1 + 0x30a8);
  local_e0 = *(undefined4 *)(param_1 + 0x2dac);
  local_dc = *(undefined4 *)(param_1 + 0x1de8);
  local_d8 = *(undefined4 *)(param_1 + 0x2b8c);
  local_d4 = 0;
  local_d3 = *(undefined1 *)(param_1 + 0x2398);
  local_d2 = *(undefined1 *)(param_1 + 0x23cc);
  local_d1 = *(undefined1 *)(lVar31 + 0xdf);
  local_3c8 = param_2;
  local_3c0 = param_3;
  local_318 = param_4;
  FUN_14046b7ae(param_6,&local_2d0,*(undefined4 *)(puVar27 + 0x24));
  lVar19 = DAT_14ca97170;
  cVar10 = puVar27[0x2c];
  lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar11 = *(int *)(lVar31 + 0xc60);
  if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar11 == 2)) {
    uVar21 = 0;
  }
  else if (iVar11 == 1) {
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    uVar21 = (ulonglong)(DVar12 != DVar13);
  }
  else {
    uVar21 = 1;
  }
  lVar29 = DAT_14ca971d0;
  local_390 = (int *)(lVar31 + 0xc60);
  local_3a0 = param_1;
  local_360 = param_2;
  if (*(int *)(lVar19 + uVar21 * 4) < 1) {
LAB_1401eebe1:
    uVar43 = 0;
    if (*(int *)(DAT_14ca2f800 + 4) == 2) {
      if (cVar10 != '\n' && cVar10 != '\x01') {
LAB_1401eec09:
        uVar43 = 0x3f800000;
      }
    }
    else if (*(int *)(DAT_14ca2f800 + 4) != 0) goto LAB_1401eec09;
  }
  else {
    iVar11 = *local_390;
    if (iVar11 == 0x40000002) {
      uVar21 = 0;
    }
    else {
      bVar40 = true;
      if ((DAT_14c86a9f8 == 1) && (iVar11 != 2)) {
        if (iVar11 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar40 = DVar12 == DVar13;
        }
        else {
          bVar40 = false;
        }
      }
      uVar21 = (ulonglong)(bVar40 ^ 1);
    }
    uVar43 = 0;
    if (*(int *)(lVar29 + uVar21 * 4) < 1) goto LAB_1401eebe1;
  }
  lVar31 = local_3a0;
  *(undefined4 *)(param_6 + 0x1160) = uVar43;
  *(float *)(param_6 + 0x122c) = (float)(*(uint *)(*(longlong *)(local_3a0 + 8) + 0x50) >> 0xd & 1);
  plVar14 = *(longlong **)(*(longlong *)(local_3a0 + 8) + 0x40);
  if ((plVar14 == (longlong *)0x0) ||
     (plVar14 = (longlong *)(**(code **)(*plVar14 + 0x3e0))(), plVar14 == (longlong *)0x0)) {
    iVar11 = DAT_14c760db4;
    *(undefined1 **)(param_6 + 0xb60) = &DAT_3f8000003f800000;
    bVar40 = true;
    plVar14 = (longlong *)0x0;
LAB_1401eed70:
    *(undefined8 *)(param_6 + 0xe30) = 0;
    *(undefined1 **)(param_6 + 0xdb0) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_6 + 0xdb8) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_6 + 0xe38) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_6 + 0xe20) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_6 + 0xe28) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_6 + 0xe40) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_6 + 0xe48) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_6 + 0xe50) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_6 + 0xe58) = &DAT_3f8000003f800000;
    *(undefined8 *)(param_6 + 0xe60) = 0x3f800000;
    *(undefined8 *)(param_6 + 0xdc0) = *(undefined8 *)(param_6 + 0x6d0);
    *(undefined4 *)(param_6 + 0xdc8) = *(undefined4 *)(param_6 + 0x6d8);
    *(undefined8 *)(param_6 + 0xdd0) = 0;
    *(undefined8 *)(param_6 + 0xdd8) = 0;
    uVar20 = DAT_14c846258;
    *(undefined8 *)(param_6 + 0xde0) = _DAT_14c846250;
    *(undefined8 *)(param_6 + 0xde8) = uVar20;
    uVar20 = _DAT_14c846268;
    *(undefined8 *)(param_6 + 0xdf0) = _DAT_14c846260;
    *(undefined8 *)(param_6 + 0xdf8) = uVar20;
    uVar20 = _DAT_14c846278;
    *(undefined8 *)(param_6 + 0xe00) = _DAT_14c846270;
    *(undefined8 *)(param_6 + 0xe08) = uVar20;
    uVar20 = _DAT_14c846288;
    *(undefined8 *)(param_6 + 0xe10) = _DAT_14c846280;
    *(undefined8 *)(param_6 + 0xe18) = uVar20;
    lVar19 = param_6 + 0xd30;
    lVar29 = param_6 + 0xd50;
    if (bVar40) {
      bVar35 = true;
      lVar24 = 0;
      bVar40 = true;
      do {
        bVar39 = bVar40;
        lVar24 = lVar24 * 0x10;
        puVar18 = (undefined8 *)(param_6 + 0xd90 + lVar24);
        *puVar18 = 0x3f800000;
        puVar18[1] = 0;
        puVar3 = (undefined4 *)(param_6 + 0xd70 + lVar24);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0x3f800000;
        puVar3 = (undefined4 *)(lVar19 + lVar24);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0x3f800000;
        *(undefined4 *)(param_6 + 0xd3c + lVar24) = 0;
        puVar3 = (undefined4 *)(lVar29 + lVar24);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0x3f800000;
        puVar3 = (undefined4 *)(param_6 + 0xd10 + lVar24);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0x3f800000;
        puVar3[3] = 0x3f800000;
        lVar24 = 1;
        bVar40 = false;
      } while (bVar39);
    }
    else {
      lVar24 = 0;
      bVar40 = true;
      do {
        bVar39 = bVar40;
        lVar32 = plVar14[lVar24 + 0x6d7];
        lVar24 = lVar24 * 0x10;
        puVar18 = (undefined8 *)(param_6 + 0xd90 + lVar24);
        *puVar18 = 0x3f800000;
        puVar18[1] = 0;
        puVar3 = (undefined4 *)(param_6 + 0xd70 + lVar24);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0x3f800000;
        if (lVar32 == 0) {
          puVar3 = (undefined4 *)(lVar19 + lVar24);
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0x3f800000;
          *(undefined4 *)(param_6 + 0xd3c + lVar24) = 0;
          puVar3 = (undefined4 *)(lVar29 + lVar24);
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0x3f800000;
          dVar55 = 0.0;
          if ((bVar39) && (plVar14[0x6d3] != 0)) {
            lVar32 = *(longlong *)(plVar14[0x6d3] + 0x28);
            dVar57 = 0.0;
            uVar43 = 0;
            uVar44 = 0x3ff00000;
            if (lVar32 != 0) {
              uVar43 = (undefined4)*(undefined8 *)(lVar32 + 0x90);
              uVar44 = (uint)((ulonglong)*(undefined8 *)(lVar32 + 0x90) >> 0x20) ^ 0x80000000;
              dVar57 = -*(double *)(lVar32 + 0x70);
              dVar55 = -*(double *)(lVar32 + 0x50);
            }
          }
          else {
            dVar57 = 0.0;
            uVar43 = 0;
            uVar44 = 0x3ff00000;
          }
          fVar53 = (float)(double)CONCAT44(uVar44,uVar43);
          fVar51 = (float)dVar57;
          fVar49 = (float)dVar55;
        }
        else {
          uVar20 = *(undefined8 *)(*(longlong *)(lVar32 + 0x28) + 0x48);
          *(undefined8 *)(lVar19 + lVar24) = *(undefined8 *)(*(longlong *)(lVar32 + 0x28) + 0x40);
          ((undefined8 *)(lVar19 + lVar24))[1] = uVar20;
          *(undefined4 *)(param_6 + 0xd3c + lVar24) = 0;
          uVar20 = *(undefined8 *)(*(longlong *)(lVar32 + 0x28) + 0x48);
          *(undefined8 *)(lVar29 + lVar24) = *(undefined8 *)(*(longlong *)(lVar32 + 0x28) + 0x40);
          ((undefined8 *)(lVar29 + lVar24))[1] = uVar20;
          *(undefined4 *)(param_6 + 0xd5c) = 0;
          lVar32 = *(longlong *)(lVar32 + 0x28);
          fVar53 = -(float)*(double *)(lVar32 + 0x90);
          fVar51 = -(float)*(double *)(lVar32 + 0x70);
          fVar49 = -(float)*(double *)(lVar32 + 0x50);
        }
        *(float *)(param_6 + 0xd10 + lVar24) = fVar49;
        *(float *)(param_6 + 0xd14 + lVar24) = fVar51;
        *(float *)(param_6 + 0xd18 + lVar24) = fVar53;
        *(undefined4 *)(param_6 + 0xd1c + lVar24) = 0x3f800000;
        lVar24 = 1;
        bVar35 = false;
        bVar40 = false;
      } while (bVar39);
    }
    lVar26 = 0;
    lVar19 = 0;
    lVar23 = 0;
    lVar32 = 0;
    lVar24 = 0;
    lVar29 = 0;
    local_398 = plVar14;
    local_384 = iVar11;
LAB_1401eefee:
    bVar40 = bVar35;
    lVar15 = *(longlong *)(DAT_14ca94e18 + 0x10);
  }
  else {
    iVar11 = (int)plVar14[1];
    if (plVar14[0x6d3] == 0) {
      *(undefined8 *)(param_6 + 0xc30) = 0;
      *(undefined8 *)(param_6 + 0xc38) = 0x3f80000000000000;
      *(undefined8 *)(param_6 + 0xc40) = DAT_14c846330;
      *(undefined4 *)(param_6 + 0xc48) = DAT_14c846338;
    }
    else {
      plVar17 = *(longlong **)(plVar14[0x6d3] + 0x28);
      (**(code **)(*plVar17 + 0x128))(plVar17,&local_1a8);
      lVar31 = *(longlong *)(plVar14[0x6d3] + 0x28);
      fVar49 = *(float *)(lVar31 + 0x4c);
      fVar51 = *(float *)(lVar31 + 0x48);
      fVar53 = *(float *)(lVar31 + 0x44);
      *(float *)(param_6 + 0xc30) = (float)local_1a8 * *(float *)(lVar31 + 0x40) * 0.31830987;
      *(float *)(param_6 + 0xc34) = local_1a8._4_4_ * fVar53 * 0.31830987;
      *(float *)(param_6 + 0xc38) = (float)uStack_1a0 * fVar51 * 0.31830987;
      *(float *)(param_6 + 0xc3c) = uStack_1a0._4_4_ * fVar49 * 0.31830987;
      lVar31 = *(longlong *)(plVar14[0x6d3] + 0x28);
      dVar55 = *(double *)(lVar31 + 0x90);
      dVar57 = *(double *)(lVar31 + 0x70);
      *(float *)(param_6 + 0xc40) = -(float)*(double *)(lVar31 + 0x50);
      *(float *)(param_6 + 0xc44) = -(float)dVar57;
      *(float *)(param_6 + 0xc48) = -(float)dVar55;
    }
    dVar55 = (double)plVar14[0x85e];
    dVar57 = (double)plVar14[0x85f];
    fVar49 = (float)dVar55;
    fVar51 = (float)dVar57;
    dVar4 = (double)plVar14[0x860];
    fVar53 = (float)dVar4;
    *(float *)(param_6 + 0x1930) = fVar49;
    *(float *)(param_6 + 0x1934) = fVar51;
    *(float *)(param_6 + 0x1938) = fVar53;
    *(float *)(param_6 + 0x1940) = (float)(dVar55 - (double)fVar49);
    *(float *)(param_6 + 0x1944) = (float)(dVar57 - (double)fVar51);
    *(float *)(param_6 + 0x1948) = (float)(dVar4 - (double)fVar53);
    lVar31 = plVar14[0x6d7];
    if (lVar31 == 0) {
      *(undefined8 *)(param_6 + 0xd90) = 0x3f7fff42;
      *(undefined8 *)(param_6 + 0xd98) = 0;
      *(undefined8 *)(param_6 + 0xd70) = 0;
      *(undefined8 *)(param_6 + 0xd78) = 0x3f80000000000000;
      *(undefined8 *)(param_6 + 0xd30) = 0;
      *(undefined8 *)(param_6 + 0xd38) = 0x3f80000000000000;
      *(undefined4 *)(param_6 + 0xd3c) = 0;
      *(undefined8 *)(param_6 + 0xd50) = *(undefined8 *)(param_6 + 0xd30);
      *(undefined4 *)(param_6 + 0xd58) = *(undefined4 *)(param_6 + 0xd38);
      *(undefined4 *)(param_6 + 0xd5c) = *(undefined4 *)(param_6 + 0xd3c);
      *(undefined4 *)(param_6 + 0xd5c) = 0;
      uVar48 = 0;
      uVar47 = 0x3ff00000;
      uVar43 = 0;
      uVar44 = 0;
      uVar46 = 0;
      uVar50 = 0;
    }
    else {
      fVar49 = (float)(**(code **)(**(longlong **)(lVar31 + 0x28) + 0x148))();
      fVar49 = cosf(fVar49);
      *(float *)(param_6 + 0xd90) = fVar49;
      *(undefined8 *)(param_6 + 0xd94) = 0;
      *(undefined4 *)(param_6 + 0xd9c) = 0;
      (**(code **)(**(longlong **)(lVar31 + 0x28) + 0x118))
                (*(longlong **)(lVar31 + 0x28),&local_1a8);
      *(double **)(param_6 + 0xd70) = local_1a8;
      *(longlong **)(param_6 + 0xd78) = uStack_1a0;
      uVar20 = *(undefined8 *)(*(longlong *)(lVar31 + 0x28) + 0x48);
      *(undefined8 *)(param_6 + 0xd30) = *(undefined8 *)(*(longlong *)(lVar31 + 0x28) + 0x40);
      *(undefined8 *)(param_6 + 0xd38) = uVar20;
      *(undefined4 *)(param_6 + 0xd3c) = 0;
      *(undefined8 *)(param_6 + 0xd50) = *(undefined8 *)(param_6 + 0xd30);
      *(undefined4 *)(param_6 + 0xd58) = *(undefined4 *)(param_6 + 0xd38);
      *(undefined4 *)(param_6 + 0xd5c) = *(undefined4 *)(param_6 + 0xd3c);
      *(undefined4 *)(param_6 + 0xd5c) = 0;
      lVar31 = *(longlong *)(lVar31 + 0x28);
      uVar43 = (undefined4)*(undefined8 *)(lVar31 + 0x50);
      uVar46 = (undefined4)*(undefined8 *)(lVar31 + 0x70);
      uVar48 = (undefined4)*(undefined8 *)(lVar31 + 0x90);
      uVar47 = (uint)((ulonglong)*(undefined8 *)(lVar31 + 0x90) >> 0x20) ^ 0x80000000;
      uVar50 = (uint)((ulonglong)*(undefined8 *)(lVar31 + 0x70) >> 0x20) ^ 0x80000000;
      uVar44 = (uint)((ulonglong)*(undefined8 *)(lVar31 + 0x50) >> 0x20) ^ 0x80000000;
    }
    lVar31 = local_3a0;
    *(float *)(param_6 + 0xd10) = (float)(double)CONCAT44(uVar44,uVar43);
    *(float *)(param_6 + 0xd14) = (float)(double)CONCAT44(uVar50,uVar46);
    *(float *)(param_6 + 0xd18) = (float)(double)CONCAT44(uVar47,uVar48);
    *(undefined4 *)(param_6 + 0xd1c) = 0x3f800000;
    auVar59._0_12_ = ZEXT812(0x3f800000);
    auVar59._12_4_ = 0;
    *(undefined1 (*) [16])(param_6 + 0xda0) = auVar59;
    *(undefined8 *)(param_6 + 0xd80) = 0;
    *(undefined8 *)(param_6 + 0xd88) = 0x3f80000000000000;
    *(undefined8 *)(param_6 + 0xd40) = 0;
    *(undefined8 *)(param_6 + 0xd48) = 0x3f80000000000000;
    *(undefined4 *)(param_6 + 0xd4c) = 0;
    *(undefined8 *)(param_6 + 0xd60) = 0;
    *(undefined8 *)(param_6 + 0xd68) = 0x3f80000000000000;
    *(undefined4 *)(param_6 + 0xd20) = 0;
    *(undefined4 *)(param_6 + 0xd24) = 0;
    *(undefined4 *)(param_6 + 0xd28) = 0x3f800000;
    *(undefined4 *)(param_6 + 0xd2c) = 0x3f800000;
    *(undefined1 **)(param_6 + 0xb60) = &DAT_3f8000003f800000;
    if ((plVar14[0x9a4] == 0) || ((*(byte *)(*(longlong *)(local_3a0 + 8) + 0x5a) & 2) == 0)) {
LAB_1401f0aaa:
      bVar40 = false;
      goto LAB_1401eed70;
    }
    if (*(code **)(*plVar14 + 0x2c0) != (code *)&LAB_1447ccd94) {
      (**(code **)(*plVar14 + 0x2c0))(plVar14);
    }
    if ((DAT_14c760dd5 == '\0') || (*(int *)(DAT_14ca5c7b8 + 4) < 1)) goto LAB_1401f0aaa;
    *(undefined4 *)(param_6 + 0xe30) = 0x3f800000;
    plVar17 = (longlong *)plVar14[0x9a4];
    if (plVar17[0x1a] == 0) {
      local_378 = 0;
    }
    else {
      local_378 = *(longlong *)(plVar17[0x1a] + 8);
    }
    if (*(int *)(DAT_14ca5ca58 + 4) < 1) {
      plVar16 = (longlong *)(DAT_14ca8c030 + 0x18);
      plVar25 = (longlong *)(DAT_14ca8c038 + 0x18);
    }
    else {
      plVar16 = plVar17 + 0x1d;
      plVar25 = plVar17 + 0x1f;
    }
    if (*(longlong *)(lVar31 + 0x13720) == 0) {
      local_320 = 0;
    }
    else {
      local_320 = *(longlong *)(*(longlong *)(lVar31 + 0x13720) + 8);
    }
    if (*(longlong *)(lVar31 + 0x13728) == 0) {
      local_370 = 0;
    }
    else {
      local_370 = *(longlong *)(*(longlong *)(lVar31 + 0x13728) + 8);
    }
    if (*(longlong *)(lVar31 + 0x13730) == 0) {
      local_368 = 0;
    }
    else {
      local_368 = *(longlong *)(*(longlong *)(lVar31 + 0x13730) + 8);
    }
    local_380 = *plVar17;
    local_330 = *plVar16;
    local_328 = *plVar25;
    plVar17 = *(longlong **)(lVar31 + 0x13738);
    local_398 = plVar14;
    local_384 = iVar11;
    if (plVar17 == (longlong *)0x0) {
      lVar26 = 0;
      fVar49 = 1.0;
      fVar51 = 1.0;
    }
    else {
      lVar26 = plVar17[1];
      lVar19 = (**(code **)(*plVar17 + 0x10))();
      fVar51 = (float)*(int *)(lVar19 + 0x2c);
      lVar19 = (**(code **)(**(longlong **)(lVar31 + 0x13738) + 0x10))();
      fVar49 = (float)*(int *)(lVar19 + 0x30);
    }
    *(float *)(param_6 + 0xdb0) = fVar51;
    *(float *)(param_6 + 0xdb4) = fVar49;
    *(float *)(param_6 + 0xdb8) = 1.0 / fVar51;
    *(float *)(param_6 + 0xdbc) = 1.0 / fVar49;
    *(undefined4 *)(param_6 + 0xe38) = *(undefined4 *)(local_380 + 0x28);
    *(undefined4 *)(param_6 + 0xe3c) = *(undefined4 *)(local_380 + 0x2c);
    iVar11 = (int)*(float *)(DAT_14ca5c908 + 4);
    if (iVar11 < 5) {
      iVar11 = 4;
    }
    iVar30 = 4;
    if (4 < (int)*(float *)(DAT_14ca5c950 + 4)) {
      iVar30 = (int)*(float *)(DAT_14ca5c950 + 4);
    }
    fVar49 = 1.0;
    if (1.0 <= *(float *)(DAT_14ca5c920 + 4)) {
      fVar49 = *(float *)(DAT_14ca5c920 + 4);
    }
    fVar51 = (float)iVar11;
    fVar53 = (float)iVar30;
    uVar43 = 0;
    if (*(longlong *)(lVar31 + 0x13720) != 0) {
      uVar43 = 0x3f800000;
    }
    fVar45 = 0.0;
    if (0.0 <= *(float *)(local_380 + 0xd0)) {
      fVar45 = *(float *)(local_380 + 0xd0);
    }
    fVar54 = fVar45 * 100000.0;
    if (fVar45 * 100000.0 <= *(float *)(lVar31 + 0x2170)) {
      fVar54 = *(float *)(lVar31 + 0x2170);
    }
    *(float *)(param_6 + 0xe50) = fVar54 * 1e-05;
    *(float *)(param_6 + 0xe40) = fVar53;
    *(float *)(param_6 + 0xe44) = fVar53;
    *(float *)(param_6 + 0xe48) = 1.0 / fVar53;
    *(float *)(param_6 + 0xe4c) = 1.0 / fVar53;
    *(float *)(param_6 + 0xe54) = fVar51;
    *(float *)(param_6 + 0xe58) = 1.0 / fVar51;
    *(float *)(param_6 + 0xe5c) = fVar49 / fVar51;
    *(float *)(param_6 + 0xe60) = 1.0 / (fVar49 / fVar51);
    *(undefined4 *)(param_6 + 0xe64) = uVar43;
    uVar20 = *(undefined8 *)(local_380 + 0xc0);
    *(undefined8 *)(param_6 + 0xe20) = *(undefined8 *)(local_380 + 0xb8);
    *(undefined8 *)(param_6 + 0xe28) = uVar20;
    *(undefined4 *)(param_6 + 0xe34) = *(undefined4 *)(local_380 + 0xcc);
    local_358 = param_6 + 0xd90;
    local_340 = param_6 + 0xd70;
    local_348 = param_6 + 0xd30;
    local_350 = param_6 + 0xd50;
    local_338 = local_380 + 0xe0;
    bVar39 = false;
    lVar31 = 0;
    bVar40 = true;
    do {
      bVar35 = bVar40;
      lVar19 = local_398[lVar31 + 0x6d7];
      if (lVar19 == 0) {
        lVar19 = lVar31 * 0x10;
        *(undefined1 (*) [16])(local_358 + lVar19) = auVar59;
        *(undefined8 *)(local_340 + lVar19) = 0;
        ((undefined8 *)(local_340 + lVar19))[1] = 0x3f80000000000000;
        *(undefined8 *)(local_348 + lVar19) = 0;
        ((undefined8 *)(local_348 + lVar19))[1] = 0x3f80000000000000;
        *(undefined4 *)(local_348 + 0xc + lVar19) = 0;
        *(undefined8 *)(local_350 + lVar19) = 0;
        ((undefined8 *)(local_350 + lVar19))[1] = 0x3f80000000000000;
        uVar43 = 0;
        uVar44 = 0;
        if ((bVar39) || (local_398[0x6d3] == 0)) {
          uVar46 = 0;
          uVar50 = 0;
          uVar48 = 0;
          uVar47 = 0x3ff00000;
        }
        else {
          lVar19 = *(longlong *)(local_398[0x6d3] + 0x28);
          uVar46 = 0;
          uVar50 = 0;
          uVar48 = 0;
          uVar47 = 0x3ff00000;
          if (lVar19 != 0) goto LAB_1401f0f10;
        }
      }
      else {
        cVar10 = (**(code **)(**(longlong **)(lVar19 + 0x28) + 0x1a8))();
        uVar43 = 0x3f800000;
        if (cVar10 == '\0') {
          uVar43 = 0;
        }
        fVar49 = (float)(**(code **)(**(longlong **)(lVar19 + 0x28) + 0x148))();
        fVar49 = cosf(fVar49);
        lVar29 = lVar31 * 0x10;
        *(float *)(local_358 + lVar29) = fVar49;
        *(undefined4 *)(local_358 + 4 + lVar29) = uVar43;
        *(undefined8 *)(local_358 + 8 + lVar29) = 0;
        (**(code **)(**(longlong **)(lVar19 + 0x28) + 0x118))
                  (*(longlong **)(lVar19 + 0x28),&local_1a8);
        puVar3 = (undefined4 *)(local_340 + lVar29);
        *puVar3 = (float)local_1a8;
        puVar3[1] = local_1a8._4_4_;
        puVar3[2] = (float)uStack_1a0;
        puVar3[3] = uStack_1a0._4_4_;
        (**(code **)(**(longlong **)(lVar19 + 0x28) + 0x130))
                  (*(longlong **)(lVar19 + 0x28),&local_1a8);
        puVar3 = (undefined4 *)(local_348 + lVar29);
        *puVar3 = (float)local_1a8;
        puVar3[1] = local_1a8._4_4_;
        puVar3[2] = (float)uStack_1a0;
        puVar3[3] = uStack_1a0._4_4_;
        *(undefined4 *)(local_348 + 0xc + lVar29) = 0x3f800000;
        (**(code **)(**(longlong **)(lVar19 + 0x28) + 0x120))
                  (*(longlong **)(lVar19 + 0x28),&local_1a8);
        *(longlong *)(local_350 + lVar29) = (longlong)local_1a8;
        ((longlong *)(local_350 + lVar29))[1] = (longlong)uStack_1a0;
        *(undefined4 *)(local_350 + 0xc + lVar29) = 0x3f800000;
        if (*(char *)(local_380 + 0xda + lVar31) == '\x01') {
          uVar20 = *(undefined8 *)(local_338 + lVar31 * 0x18);
          uVar46 = (undefined4)uVar20;
          uVar50 = (uint)((ulonglong)uVar20 >> 0x20);
          uVar20 = *(undefined8 *)(local_338 + 8 + lVar31 * 0x18);
          uVar43 = (undefined4)uVar20;
          uVar44 = (uint)((ulonglong)uVar20 >> 0x20);
          uVar20 = *(undefined8 *)(local_338 + 0x10 + lVar31 * 0x18);
          uVar48 = (int)uVar20;
          uVar47 = (uint)((ulonglong)uVar20 >> 0x20);
        }
        else {
          lVar19 = *(longlong *)(lVar19 + 0x28);
LAB_1401f0f10:
          uVar46 = (undefined4)*(undefined8 *)(lVar19 + 0x50);
          uVar43 = (undefined4)*(undefined8 *)(lVar19 + 0x70);
          uVar44 = (uint)((ulonglong)*(undefined8 *)(lVar19 + 0x70) >> 0x20) ^ 0x80000000;
          uVar50 = (uint)((ulonglong)*(undefined8 *)(lVar19 + 0x50) >> 0x20) ^ 0x80000000;
          uVar48 = (int)*(undefined8 *)(lVar19 + 0x90);
          uVar47 = (uint)((ulonglong)*(undefined8 *)(lVar19 + 0x90) >> 0x20) ^ 0x80000000;
        }
      }
      lVar31 = lVar31 * 0x10;
      *(float *)(param_6 + 0xd10 + lVar31) = (float)(double)CONCAT44(uVar50,uVar46);
      *(float *)(param_6 + 0xd14 + lVar31) = (float)(double)CONCAT44(uVar44,uVar43);
      *(float *)(param_6 + 0xd18 + lVar31) = (float)(double)CONCAT44(uVar47,uVar48);
      *(undefined4 *)(param_6 + 0xd1c + lVar31) = 0x3f800000;
      lVar31 = 1;
      bVar39 = true;
      bVar40 = false;
    } while (bVar35);
    local_3b8 = &local_2f8;
    local_2f8 = (double *)0x0;
    uStack_2f0 = 0x3f80000000000000;
    local_3c8 = param_6 + 0x670;
    local_3b0 = &local_1a8;
    local_3c0 = &local_2dc;
    FUN_144b2df26(local_380 + 0x10,local_360 + 0xb48,local_360 + 0xb30,param_6 + 0x650);
    *(double **)(param_6 + 0xdd0) = local_2f8;
    *(undefined8 *)(param_6 + 0xdd8) = uStack_2f0;
    *(ulonglong *)(param_6 + 0xdc0) = CONCAT44(iStack_2d8,local_2dc);
    *(int *)(param_6 + 0xdc8) = local_2d4;
    *(double **)(param_6 + 0xde0) = local_1a8;
    *(longlong **)(param_6 + 0xde8) = uStack_1a0;
    *(undefined4 *)(param_6 + 0xdf0) = (undefined4)local_198;
    *(undefined4 *)(param_6 + 0xdf4) = local_198._4_4_;
    *(undefined4 *)(param_6 + 0xdf8) = (undefined4)uStack_190;
    *(undefined4 *)(param_6 + 0xdfc) = uStack_190._4_4_;
    *(undefined4 *)(param_6 + 0xe00) = (undefined4)uStack_188;
    *(undefined4 *)(param_6 + 0xe04) = uStack_188._4_4_;
    *(undefined4 *)(param_6 + 0xe08) = (undefined4)uStack_180;
    *(undefined4 *)(param_6 + 0xe0c) = uStack_180._4_4_;
    *(undefined8 *)(param_6 + 0xe10) = local_178;
    *(undefined8 *)(param_6 + 0xe18) = uStack_170;
    bVar40 = false;
    lVar15 = local_378;
    lVar19 = local_330;
    lVar23 = local_368;
    lVar32 = local_370;
    lVar24 = local_320;
    lVar29 = local_328;
    lVar31 = local_3a0;
    bVar35 = false;
    if (local_378 == 0) goto LAB_1401eefee;
  }
  plVar14 = local_398;
  *(longlong *)(param_6 + 0x1758) = lVar15;
  uVar20 = DAT_14c9c0de0;
  *(undefined8 *)(param_6 + 0x1760) = DAT_14c9c0de0;
  if (lVar19 == 0) {
    lVar19 = *(longlong *)(DAT_14ca8c030 + 0x18);
  }
  *(longlong *)(param_6 + 0x17a8) = lVar19;
  if (lVar29 == 0) {
    lVar29 = *(longlong *)(DAT_14ca8c038 + 0x18);
  }
  *(longlong *)(param_6 + 0x17b0) = lVar29;
  if (lVar26 == 0) {
    lVar26 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x1768) = lVar26;
  *(undefined8 *)(param_6 + 6000) = uVar20;
  if ((lVar24 == 0) && (lVar24 = *(longlong *)(DAT_14ca8c058 + 0x10), lVar24 == 0)) {
    lVar24 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x1778) = lVar24;
  if ((lVar32 == 0) && (lVar32 = *(longlong *)(DAT_14ca8c058 + 0x10), lVar32 == 0)) {
    lVar32 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x1788) = lVar32;
  if ((lVar23 == 0) && (lVar23 = *(longlong *)(DAT_14ca8c058 + 0x10), lVar23 == 0)) {
    lVar23 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x1798) = lVar23;
  *(undefined8 *)(param_6 + 0x1780) = uVar20;
  *(undefined8 *)(param_6 + 0x1790) = uVar20;
  *(undefined8 *)(param_6 + 0x17a0) = uVar20;
  lVar19 = *(longlong *)(lVar31 + 0x3028);
  if (lVar19 == 0) {
    lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x16b0) = lVar19;
  lVar19 = *(longlong *)(lVar31 + 0x3030);
  if (lVar19 == 0) {
    lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x16c0) = lVar19;
  lVar19 = *(longlong *)(lVar31 + 0x3038);
  if ((lVar19 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
    lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x16d0) = lVar19;
  *(undefined8 *)(param_6 + 0x16b8) = uVar20;
  *(undefined8 *)(param_6 + 0x16c8) = uVar20;
  *(undefined8 *)(param_6 + 0x16d8) = uVar20;
  *(undefined8 *)(param_6 + 0x15b0) = 0;
  *(undefined8 *)(param_6 + 0x15b8) = 0;
  if (!bVar40) {
    uVar47 = 0;
    uVar44 = 0;
    if ((local_398[0x9a4] != 0) &&
       (uVar44 = uVar47, (*(byte *)(*(longlong *)(lVar31 + 8) + 0x5a) & 2) != 0)) {
      if (*(code **)(*local_398 + 0x2c0) != (code *)&LAB_1447ccd94) {
        (**(code **)(*local_398 + 0x2c0))(local_398);
      }
      if ((DAT_14c760dd5 == '\x01') && (0 < *(int *)(DAT_14ca5c7b8 + 4))) {
        uVar44 = (uint)*(byte *)(*(longlong *)plVar14[0x9a4] + 0xd8) +
                 (uint)*(byte *)(*(longlong *)plVar14[0x9a4] + 0xd9) * 8;
      }
    }
    cVar10 = FUN_144abb2f3(plVar14,*(longlong *)(lVar31 + 8) + 0x48);
    if (cVar10 != '\0') {
      uVar44 = uVar44 | (uint)*(byte *)(*(longlong *)plVar14[0x9a7] + 0x2a) * 0x10 +
                        (uint)*(byte *)(*(longlong *)plVar14[0x9a7] + 0x29) * 2;
    }
    if (0 < (int)plVar14[0x9a3]) {
      uVar44 = uVar44 | (uint)*(byte *)(lVar31 + 0x120c2) * 0x20 +
                        (uint)*(byte *)(lVar31 + 0x120c1) * 4;
    }
    *(uint *)(param_6 + 0x15b0) = uVar44;
  }
  *(undefined4 *)(param_6 + 0x15a0) = *(undefined4 *)(lVar31 + 0x13824);
  *(undefined4 *)(param_6 + 0x15a4) = *(undefined4 *)(lVar31 + 0x2c04);
  if ((DAT_14ca63b40 != 0) &&
     (lVar19 = *(longlong *)(DAT_14ca63b40 + 8), *(longlong *)(param_6 + 0x16e0) = lVar19,
     lVar19 == 0)) {
    *(undefined8 *)(param_6 + 0x16e0) = *(undefined8 *)(DAT_14ca94dc8 + 0x10);
  }
  *(undefined8 *)(param_6 + 0x16e8) = DAT_14c9c0eb8;
  if (((DAT_14ca63b48 != 0) &&
      (lVar19 = *(longlong *)(DAT_14ca63b48 + 8), *(longlong *)(param_6 + 0x16f0) = lVar19,
      lVar19 == 0)) &&
     (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), *(longlong *)(param_6 + 0x16f0) = lVar19,
     lVar19 == 0)) {
    *(undefined8 *)(param_6 + 0x16f0) = *(undefined8 *)(DAT_14ca94dc8 + 0x10);
  }
  *(undefined8 *)(param_6 + 0x16f8) = DAT_14c9c9d38;
  if ((DAT_14ca63b50 != 0) &&
     (lVar19 = *(longlong *)(DAT_14ca63b50 + 8), *(longlong *)(param_6 + 0x1700) = lVar19,
     lVar19 == 0)) {
    *(undefined8 *)(param_6 + 0x1700) = *(undefined8 *)(DAT_14ca94dc8 + 0x10);
  }
  FUN_144b0f70e(lVar31,param_6);
  puVar27 = &DAT_14cb05410;
  if (*(char *)(*(longlong *)(lVar31 + 8) + 0xd0) != '\0') {
    puVar27 = (undefined *)(*(longlong *)(lVar31 + 8) + 0x1b8);
  }
  iVar30 = (int)*(undefined8 *)(puVar27 + 0x10);
  iVar11 = 1;
  if (1 < iVar30) {
    iVar11 = iVar30;
  }
  iVar33 = (int)((ulonglong)*(undefined8 *)(puVar27 + 0x10) >> 0x20);
  iVar30 = 1;
  if (1 < iVar33) {
    iVar30 = iVar33;
  }
  local_1a8 = (double *)CONCAT44(iVar30,iVar11);
  FUN_140047e94(&local_2dc,&local_1a8,&local_300);
  iVar30 = *(int *)(local_3a0 + 0x3104) - *(int *)(local_3a0 + 0x30fc);
  iVar11 = *(int *)(local_3a0 + 0x3100) - *(int *)(local_3a0 + 0x30f8);
  local_1a8 = (double *)CONCAT44(iVar30,iVar11);
  FUN_140047e94(&local_30c,&local_1a8,&local_2fc);
  fVar51 = (float)iVar11;
  fVar49 = (float)iVar30;
  FUN_14473899e(local_3a0,param_6);
  uVar20 = DAT_14c8461b4;
  *(undefined8 *)(param_6 + 0x1198) = DAT_14c8461b4;
  *(undefined8 *)(param_6 + 0x11a0) = uVar20;
  *(undefined8 *)(param_6 + 0x11a8) = uVar20;
  *(undefined8 *)(param_6 + 0x11b0) = uVar20;
  *(float *)(param_6 + 0x11c0) = (float)local_2dc;
  *(float *)(param_6 + 0x11c4) = (float)iStack_2d8;
  *(float *)(param_6 + 0x11c8) = (float)local_2d4;
  lVar31 = *(longlong *)(local_3a0 + 0x3108);
  if (lVar31 != 0) {
    fVar53 = *(float *)(lVar31 + 0x1de0);
    *(float *)(param_6 + 0x1198) =
         *(float *)(lVar31 + 0x1ddc) / (fVar51 / ((float)local_30c * (float)local_2fc));
    *(float *)(param_6 + 0x119c) = fVar53 / (fVar49 / ((float)local_308 * (float)local_2fc));
    *(undefined8 *)(param_6 + 0x11a0) = *(undefined8 *)(*(longlong *)(local_3a0 + 0x3108) + 0x1de4);
    *(undefined8 *)(param_6 + 0x11a8) = *(undefined8 *)(*(longlong *)(local_3a0 + 0x3108) + 0x1dec);
    *(undefined8 *)(param_6 + 0x11b0) = *(undefined8 *)(*(longlong *)(local_3a0 + 0x3108) + 0x1df4);
    lVar31 = *(longlong *)(local_3a0 + 0x3108);
    iVar11 = *(int *)(lVar31 + 0x1e00);
    iVar30 = *(int *)(lVar31 + 0x1e04);
    *(float *)(param_6 + 0x11c0) = (float)*(int *)(lVar31 + 0x1dfc);
    *(float *)(param_6 + 0x11c4) = (float)iVar11;
    *(float *)(param_6 + 0x11c8) = (float)iVar30;
  }
  fVar45 = (float)iStack_2d8 * (float)local_300;
  fVar53 = (float)local_2dc * (float)local_300;
  *(float *)(param_6 + 0x11d0) = fVar51 / fVar53;
  *(float *)(param_6 + 0x11d4) = fVar49 / fVar45;
  iVar11 = local_300 + (int)fVar51 + -1;
  iVar30 = local_300 + (int)fVar49 + -1;
  *(float *)(param_6 + 0x11d8) = (float)((iVar11 + ~(local_300 / 2)) - iVar11 % local_300) / fVar53;
  *(float *)(param_6 + 0x11dc) = (float)((~(local_300 / 2) + iVar30) - iVar30 % local_300) / fVar45;
  lVar31 = *(longlong *)(local_3a0 + 8);
  uStack_1e8 = *(undefined8 *)(lVar31 + 0x48);
  uVar20 = *(undefined8 *)(lVar31 + 0x50);
  uStack_1d7 = *(undefined4 *)(lVar31 + 0x59);
  uStack_1d3 = *(undefined4 *)(lVar31 + 0x5d);
  uStack_1cf = *(undefined4 *)(lVar31 + 0x61);
  uStack_1e0 = (undefined1)uVar20;
  local_1df = (uint)((ulonglong)uVar20 >> 8);
  uStack_1d8 = (undefined1)((uint)*(undefined4 *)(lVar31 + 0x55) >> 0x18);
  local_1db = (undefined3)((ulonglong)uVar20 >> 0x28);
  local_1b8 = (undefined1 *)0x0;
  lStack_1b0 = 0;
  iVar11 = *(int *)(lVar31 + 0x80);
  uVar44 = iVar11 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar44) {
    uVar47 = 0x80;
    if (0x80 < uVar44) {
      uVar47 = uVar44;
    }
    lStack_1b0 = (ulonglong)uVar47 << 0x20;
    FUN_1446efbd8(local_1c8);
    iVar11 = *(int *)(lVar31 + 0x80);
  }
  lStack_1b0 = CONCAT44(lStack_1b0._4_4_,iVar11);
  if (iVar11 != 0) {
    pvVar34 = (void *)(lVar31 + 0x68);
    if (*(void **)(lVar31 + 0x78) != (void *)0x0) {
      pvVar34 = *(void **)(lVar31 + 0x78);
    }
    puVar37 = local_1c8;
    if (local_1b8 != (undefined1 *)0x0) {
      puVar37 = local_1b8;
    }
    memcpy(puVar37,pvVar34,(ulonglong)(iVar11 + 0x1fU >> 3 & 0xfffffffc));
  }
  if ((bVar40) || ((int)plVar14[0x7e0] < 1)) {
LAB_1401ef5f5:
    *(undefined4 *)(param_6 + 0x11f8) = DAT_14c846338;
    *(undefined8 *)(param_6 + 0x11f0) = DAT_14c846330;
    *(undefined8 *)(param_6 + 0x1200) = DAT_14c846330;
    *(undefined4 *)(param_6 + 0x1208) = DAT_14c846338;
    *(undefined4 *)(param_6 + 0x1218) = DAT_14c846338;
    *(undefined8 *)(param_6 + 0x1210) = DAT_14c846330;
    *(undefined4 *)(param_6 + 0x121c) = 0;
    *(undefined8 *)(param_6 + 0x1220) = DAT_14c846330;
    *(undefined4 *)(param_6 + 0x1228) = DAT_14c846338;
  }
  else {
    if (*(int *)(plVar14[0x7d7] + 8) < 3) {
      plVar14 = local_398;
      if (0 < (int)local_398[0x77e]) goto LAB_1401f2485;
      goto LAB_1401ef5f5;
    }
    plVar14 = local_398;
    if (local_398[0x780] == 0) goto LAB_1401ef5f5;
LAB_1401f2485:
    plVar14 = local_398;
    if ((local_1df & 0x10) == 0) goto LAB_1401ef5f5;
    plVar14 = (longlong *)FUN_1472c9086(local_398 + 0x767);
    iVar33 = DAT_14caff0c0;
    iVar30 = DAT_14caff0b8._4_4_;
    iVar11 = (int)DAT_14caff0b8;
    lVar31 = *plVar14;
    lVar19 = *(longlong *)(lVar31 + 0x78);
    if ((lVar19 == 0) && (lVar19 = *(longlong *)(DAT_14ca94dc0 + 0x10), lVar19 == 0)) {
      lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *(longlong *)(param_6 + 0x15e0) = lVar19;
    lVar19 = DAT_14cafeee0;
    if ((DAT_14cafeee0 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
      lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *(longlong *)(param_6 + 0x15e8) = lVar19;
    lVar19 = DAT_14cafef18;
    if ((DAT_14cafef18 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
      lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *(longlong *)(param_6 + 0x15f0) = lVar19;
    lVar19 = DAT_14cafef50;
    if ((DAT_14cafef50 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
      lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *(longlong *)(param_6 + 0x15f8) = lVar19;
    lVar19 = DAT_14cafef88;
    if ((DAT_14cafef88 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
      lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *(longlong *)(param_6 + 0x1600) = lVar19;
    lVar19 = DAT_14cafefc0;
    if ((DAT_14cafefc0 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
      lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *(longlong *)(param_6 + 0x1608) = lVar19;
    lVar19 = DAT_14cafeff8;
    if ((DAT_14cafeff8 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
      lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *(longlong *)(param_6 + 0x1610) = lVar19;
    lVar19 = DAT_14caff030;
    if ((DAT_14caff030 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
      lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *(longlong *)(param_6 + 0x1618) = lVar19;
    lVar19 = DAT_14caff068;
    if ((DAT_14caff068 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
      lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *(longlong *)(param_6 + 0x1620) = lVar19;
    lVar19 = DAT_14caff0a0;
    if ((DAT_14caff0a0 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
      lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *(longlong *)(param_6 + 0x1628) = lVar19;
    dVar55 = *(double *)(lVar31 + 0x10);
    dVar57 = *(double *)(lVar31 + 0x18);
    dVar4 = *(double *)(lVar31 + 0x20);
    dVar58 = *(double *)(lVar31 + 0x38) - dVar4;
    dVar56 = *(double *)(lVar31 + 0x30) - dVar57;
    dVar52 = *(double *)(lVar31 + 0x28) - dVar55;
    uVar21 = -(ulonglong)(dVar52 != 0.0);
    uVar41 = -(ulonglong)(dVar56 != 0.0);
    uVar42 = -(ulonglong)(dVar58 != 0.0);
    fVar51 = 3.4e+38;
    fVar49 = 3.4e+38;
    if (iVar33 != 0) {
      fVar49 = 1.0 / (float)iVar33;
    }
    dVar52 = (double)(~uVar21 & 0x47eff933c0000000 | (ulonglong)(1.0 / dVar52) & uVar21);
    dVar56 = (double)(~uVar41 & 0x47eff933c0000000 | (ulonglong)(1.0 / dVar56) & uVar41);
    dVar58 = (double)(~uVar42 & 0x47eff933c0000000 | (ulonglong)(1.0 / dVar58) & uVar42);
    fVar53 = 3.4e+38;
    if (iVar30 != 0) {
      fVar53 = 1.0 / (float)iVar30;
    }
    *(float *)(param_6 + 0x11f0) = (float)dVar52;
    *(float *)(param_6 + 0x11f4) = (float)dVar56;
    *(float *)(param_6 + 0x11f8) = (float)dVar58;
    *(float *)(param_6 + 0x1200) = (float)(-dVar55 * dVar52);
    *(float *)(param_6 + 0x1204) = (float)(-dVar57 * dVar56);
    *(float *)(param_6 + 0x1208) = (float)(-dVar4 * dVar58);
    iVar30 = *(int *)(lVar31 + 0x50);
    iVar33 = *(int *)(lVar31 + 0x54);
    *(float *)(param_6 + 0x1210) = (float)*(int *)(lVar31 + 0x4c);
    *(float *)(param_6 + 0x1214) = (float)iVar30;
    *(float *)(param_6 + 0x1218) = (float)iVar33;
    *(float *)(param_6 + 0x121c) = (float)*(int *)(lVar31 + 0x90);
    if (iVar11 != 0) {
      fVar51 = 1.0 / (float)iVar11;
    }
    *(float *)(param_6 + 0x1220) = fVar51;
    *(float *)(param_6 + 0x1224) = fVar53;
    *(float *)(param_6 + 0x1228) = fVar49;
    plVar14 = local_398;
  }
  lVar31 = local_3a0;
  if (local_1b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar31 = *(longlong *)(lVar31 + 8);
  uStack_228 = *(undefined8 *)(lVar31 + 0x48);
  uStack_217 = *(undefined4 *)(lVar31 + 0x59);
  uStack_213 = *(undefined4 *)(lVar31 + 0x5d);
  uStack_20f = *(undefined4 *)(lVar31 + 0x61);
  uStack_220 = (undefined5)*(undefined8 *)(lVar31 + 0x50);
  uStack_218 = (undefined1)((uint)*(undefined4 *)(lVar31 + 0x55) >> 0x18);
  local_21b = (undefined3)((ulonglong)*(undefined8 *)(lVar31 + 0x50) >> 0x28);
  local_1f8 = (undefined1 *)0x0;
  lStack_1f0 = 0;
  iVar11 = *(int *)(lVar31 + 0x80);
  uVar44 = iVar11 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar44) {
    uVar47 = 0x80;
    if (0x80 < uVar44) {
      uVar47 = uVar44;
    }
    lStack_1f0 = (ulonglong)uVar47 << 0x20;
    FUN_1446efbd8(local_208);
    iVar11 = *(int *)(lVar31 + 0x80);
  }
  lStack_1f0 = CONCAT44(lStack_1f0._4_4_,iVar11);
  if (iVar11 != 0) {
    pvVar34 = (void *)(lVar31 + 0x68);
    if (*(void **)(lVar31 + 0x78) != (void *)0x0) {
      pvVar34 = *(void **)(lVar31 + 0x78);
    }
    puVar37 = local_208;
    if (local_1f8 != (undefined1 *)0x0) {
      puVar37 = local_1f8;
    }
    memcpy(puVar37,pvVar34,(ulonglong)(iVar11 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (((bVar40) || ((longlong *)plVar14[0x9ae] == (longlong *)0x0)) ||
     (lVar31 = *(longlong *)plVar14[0x9ae], lVar31 == 0)) {
    *(undefined8 *)(param_6 + 0x1920) = *(undefined8 *)(DAT_14ca8c040 + 0x18);
    *(undefined8 *)(param_6 + 0x1310) = DAT_14c846330;
    *(undefined4 *)(param_6 + 0x1318) = DAT_14c846338;
    *(undefined8 *)(param_6 + 0x131c) = 0x23f800000;
    *(undefined1 **)(param_6 + 0x1324) = &DAT_100000001;
    memset((void *)(param_6 + 0x132c),0,0x204);
  }
  else {
    puVar18 = (undefined8 *)(DAT_14ca8c040 + 0x18);
    if (*(char *)(lVar31 + 0x1064) != '\0') {
      puVar18 = (undefined8 *)(lVar31 + 0x20);
    }
    *(undefined8 *)(param_6 + 0x1920) = *puVar18;
    dVar55 = *(double *)(lVar31 + 0xdf0);
    dVar57 = *(double *)(lVar31 + 0xde8);
    *(float *)(param_6 + 0x1310) = (float)*(double *)(lVar31 + 0xde0);
    *(float *)(param_6 + 0x1314) = (float)dVar57;
    *(float *)(param_6 + 0x1318) = (float)dVar55;
    *(undefined4 *)(param_6 + 0x131c) = *(undefined4 *)(lVar31 + 0xdf8);
    *(undefined4 *)(param_6 + 0x1320) = *(undefined4 *)(lVar31 + 0xe08);
    *(undefined4 *)(param_6 + 0x1324) = *(undefined4 *)(lVar31 + 0xe04);
    *(undefined4 *)(param_6 + 0x1328) = *(undefined4 *)(lVar31 + 0xe00);
    *(undefined4 *)(param_6 + 0x132c) = *(undefined4 *)(lVar31 + 0x1c0);
    lVar19 = 0;
    do {
      *(undefined4 *)(param_6 + 0x1330 + lVar19) = *(undefined4 *)(lVar31 + 0x1e0 + lVar19);
      *(undefined4 *)(param_6 + 0x1334 + lVar19) = *(undefined4 *)(lVar31 + 0x3e0 + lVar19);
      *(undefined4 *)(param_6 + 0x1338 + lVar19) = *(undefined4 *)(lVar31 + 0x5e0 + lVar19);
      *(undefined4 *)(param_6 + 0x133c + lVar19) = 0;
      lVar19 = lVar19 + 0x10;
    } while (lVar19 != 0x200);
  }
  lVar31 = local_3a0;
  if (local_1f8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar19 = DAT_14cb0b518;
  iVar11 = *local_390;
  if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar11 == 2)) {
    uVar21 = 0;
  }
  else if (iVar11 == 1) {
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    uVar21 = (ulonglong)(DVar12 != DVar13);
  }
  else {
    uVar21 = 1;
  }
  fVar49 = *(float *)(lVar19 + uVar21 * 4);
  if (15.0 <= fVar49) {
    fVar49 = 15.0;
  }
  if (fVar49 <= -15.0) {
    fVar49 = -15.0;
  }
  fVar51 = fVar49;
  if ((*(char *)(lVar31 + 0x13c04) == '\x01') && (1e-08 < ABS(*(float *)(lVar31 + 0x1e90)))) {
    *(float *)(param_6 + 0xbfc) = *(float *)(lVar31 + 0x1e90);
    uVar43 = exp2f(*(undefined4 *)(lVar31 + 0x1e90));
    *(undefined4 *)(param_6 + 0xc00) = uVar43;
    fVar51 = *(float *)(lVar31 + 0x1e90) + fVar49;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca468b0) && (FUN_144b3d300(&DAT_14ca468b0), DAT_14ca468b0 == -1)) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca46888);
    lVar31 = local_3a0;
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca46888,4000);
    atexit((_func_5014 *)&LAB_142fe368d);
    _Init_thread_footer(&DAT_14ca468b0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca46888);
  if (0.0001 <= ABS(fVar51 - fVar49)) {
    lVar19 = *(longlong *)(lVar31 + 0x3108);
    if ((lVar19 != 0) && (ABS(*(float *)(lVar19 + 0x1d50) - fVar51) < 0.0001)) {
      pdVar36 = *(double **)(lVar19 + 0x1d58);
      if (pdVar36 != (double *)0x0) {
        LOCK();
        *(int *)(pdVar36 + 1) = *(int *)(pdVar36 + 1) + 1;
        UNLOCK();
        lVar19 = *(longlong *)(lVar31 + 0x3108);
      }
      pdVar38 = *(double **)(lVar19 + 0x1d60);
      goto LAB_1401ef8b7;
    }
    local_1a8._0_4_ = (float)(uint)*(byte *)(lVar31 + 0x13bf8);
    local_1a8 = (double *)CONCAT44(fVar51,(float)local_1a8);
    uStack_1a0 = (longlong *)0x7f7fffff00000000;
    local_198 = (ulonglong)*(uint *)(lVar31 + 0x13c00);
    uStack_190 = uStack_190 & 0xffffffffffffff00;
    (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_2f8,&local_1a8);
    pdVar36 = local_2f8;
    local_1a8._0_3_ = CONCAT21(0x101,*(undefined1 *)(local_3a0 + 0x13bf8));
    local_1a8._0_4_ = (float)CONCAT13(1,(undefined3)local_1a8);
    local_1a8 = (double *)CONCAT44(fVar51,(float)local_1a8);
    uStack_1a0 = (longlong *)0x7f7fffff00000000;
    local_198 = (ulonglong)*(uint *)(local_3a0 + 0x13c00);
    uStack_190 = uStack_190 & 0xffffffffffffff00;
    (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_2f8,&local_1a8);
    pdVar38 = local_2f8;
    lVar31 = local_3a0;
  }
  else {
    pdVar36 = *(double **)(DAT_14cb053c0 + 0x10);
    if (pdVar36 != (double *)0x0) {
      LOCK();
      *(int *)(pdVar36 + 1) = *(int *)(pdVar36 + 1) + 1;
      UNLOCK();
    }
    pdVar38 = *(double **)(DAT_14cb053c8 + 0x10);
LAB_1401ef8b7:
    if (pdVar38 == (double *)0x0) {
      pdVar38 = (double *)0x0;
    }
    else {
      LOCK();
      *(int *)(pdVar38 + 1) = *(int *)(pdVar38 + 1) + 1;
      UNLOCK();
    }
  }
  *(double **)(param_6 + 0x15d0) = pdVar36;
  *(double **)(param_6 + 0x15d8) = pdVar38;
  lVar19 = *(longlong *)(lVar31 + 0x3108);
  if (lVar19 == 0) {
LAB_1401efb15:
    uVar9 = 3;
    if (*(char *)(lVar31 + 0x13c04) == '\x01') {
      uVar9 = (undefined1)*(undefined4 *)(lVar31 + 0x13bfc);
    }
    local_1a8._0_3_ = CONCAT21(0x101,uVar9);
    local_1a8._0_4_ = (float)CONCAT13(1,(undefined3)local_1a8);
    local_1a8 = (double *)CONCAT44(fVar51,(float)local_1a8);
    uStack_1a0 = (longlong *)0x7f7fffff00000000;
    local_198 = 0;
    uStack_190 = uStack_190 & 0xffffffffffffff00;
    (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_2f8);
    pdVar28 = local_2f8;
    lVar31 = local_3a0;
  }
  else {
    if (*(double **)(lVar19 + 0x1d58) == pdVar36) {
LAB_1401efadb:
      lVar19 = *(longlong *)(lVar31 + 0x3108);
    }
    else {
      *(float *)(lVar19 + 0x1d50) = fVar51;
      pdVar28 = *(double **)(*(longlong *)(lVar31 + 0x3108) + 0x1d58);
      if (pdVar28 != pdVar36) {
        *(double **)(*(longlong *)(lVar31 + 0x3108) + 0x1d58) = pdVar36;
        if (pdVar36 != (double *)0x0) {
          LOCK();
          *(int *)(pdVar36 + 1) = *(int *)(pdVar36 + 1) + 1;
          UNLOCK();
        }
        if (pdVar28 != (double *)0x0) {
          LOCK();
          pdVar6 = pdVar28 + 1;
          dVar55 = *pdVar6;
          *(uint *)pdVar6 = *(uint *)pdVar6 - 1;
          UNLOCK();
          if (((ulonglong)dVar55 & 0x3fffffff) == 1) {
            pdVar6 = pdVar28 + 1;
            LOCK();
            uVar44 = *(uint *)pdVar6;
            *(uint *)pdVar6 = *(uint *)pdVar6 | 0x40000000;
            UNLOCK();
            if ((uVar44 >> 0x1e & 1) == 0) {
              bVar5 = *(byte *)((longlong)pdVar28 + 0xd);
              plVar16 = (longlong *)FUN_14001cc68(0x10,8);
              plVar16[1] = (longlong)pdVar28;
              plVar14 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c8;
              if ((bVar5 & 2) == 0) {
                do {
                  *plVar16 = (longlong)plVar14;
                  LOCK();
                  bVar39 = plVar14 != DAT_14ca843c0;
                  plVar17 = plVar16;
                  if (bVar39) {
                    plVar14 = DAT_14ca843c0;
                    plVar17 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar17;
                  UNLOCK();
                } while (bVar39);
              }
              else {
                do {
                  *plVar16 = (longlong)plVar17;
                  LOCK();
                  bVar39 = plVar17 != DAT_14ca843c8;
                  plVar14 = plVar16;
                  if (bVar39) {
                    plVar17 = DAT_14ca843c8;
                    plVar14 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar14;
                  UNLOCK();
                } while (bVar39);
              }
            }
          }
        }
      }
      lVar19 = *(longlong *)(lVar31 + 0x3108);
      pdVar28 = *(double **)(lVar19 + 0x1d60);
      if (pdVar28 != pdVar38) {
        *(double **)(lVar19 + 0x1d60) = pdVar38;
        if (pdVar38 != (double *)0x0) {
          LOCK();
          *(int *)(pdVar38 + 1) = *(int *)(pdVar38 + 1) + 1;
          UNLOCK();
        }
        if (pdVar28 != (double *)0x0) {
          LOCK();
          pdVar6 = pdVar28 + 1;
          dVar55 = *pdVar6;
          *(uint *)pdVar6 = *(uint *)pdVar6 - 1;
          UNLOCK();
          if (((ulonglong)dVar55 & 0x3fffffff) == 1) {
            pdVar6 = pdVar28 + 1;
            LOCK();
            uVar44 = *(uint *)pdVar6;
            *(uint *)pdVar6 = *(uint *)pdVar6 | 0x40000000;
            UNLOCK();
            if ((uVar44 >> 0x1e & 1) == 0) {
              bVar5 = *(byte *)((longlong)pdVar28 + 0xd);
              plVar16 = (longlong *)FUN_14001cc68(0x10,8);
              plVar16[1] = (longlong)pdVar28;
              plVar14 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c8;
              if ((bVar5 & 2) == 0) {
                do {
                  *plVar16 = (longlong)plVar14;
                  LOCK();
                  bVar39 = plVar14 != DAT_14ca843c0;
                  plVar17 = plVar16;
                  if (bVar39) {
                    plVar14 = DAT_14ca843c0;
                    plVar17 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar17;
                  UNLOCK();
                } while (bVar39);
              }
              else {
                do {
                  *plVar16 = (longlong)plVar17;
                  LOCK();
                  bVar39 = plVar17 != DAT_14ca843c8;
                  plVar14 = plVar16;
                  if (bVar39) {
                    plVar17 = DAT_14ca843c8;
                    plVar14 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar14;
                  UNLOCK();
                } while (bVar39);
              }
            }
          }
        }
        goto LAB_1401efadb;
      }
    }
    if ((lVar19 == 0) || (0.0001 <= ABS(*(float *)(lVar19 + 0x1d54) - fVar51))) goto LAB_1401efb15;
    pdVar28 = *(double **)(lVar19 + 0x1d68);
    if (pdVar28 == (double *)0x0) {
      pdVar28 = (double *)0x0;
    }
    else {
      LOCK();
      *(int *)(pdVar28 + 1) = *(int *)(pdVar28 + 1) + 1;
      UNLOCK();
    }
  }
  *(double **)(param_6 + 0x1900) = pdVar28;
  if (*(longlong *)(lVar31 + 0x3108) != 0) {
    *(float *)(*(longlong *)(lVar31 + 0x3108) + 0x1d54) = fVar51;
    pdVar6 = *(double **)(*(longlong *)(lVar31 + 0x3108) + 0x1d68);
    if (pdVar6 != pdVar28) {
      *(double **)(*(longlong *)(lVar31 + 0x3108) + 0x1d68) = pdVar28;
      if (pdVar28 != (double *)0x0) {
        LOCK();
        *(int *)(pdVar28 + 1) = *(int *)(pdVar28 + 1) + 1;
        UNLOCK();
      }
      if (pdVar6 != (double *)0x0) {
        LOCK();
        pdVar1 = pdVar6 + 1;
        dVar55 = *pdVar1;
        *(uint *)pdVar1 = *(uint *)pdVar1 - 1;
        UNLOCK();
        if (((ulonglong)dVar55 & 0x3fffffff) == 1) {
          pdVar1 = pdVar6 + 1;
          LOCK();
          uVar44 = *(uint *)pdVar1;
          *(uint *)pdVar1 = *(uint *)pdVar1 | 0x40000000;
          UNLOCK();
          if ((uVar44 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)((longlong)pdVar6 + 0xd);
            plVar16 = (longlong *)FUN_14001cc68(0x10,8);
            plVar16[1] = (longlong)pdVar6;
            plVar14 = DAT_14ca843c0;
            plVar17 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar16 = (longlong)plVar14;
                LOCK();
                bVar39 = plVar14 != DAT_14ca843c0;
                plVar17 = plVar16;
                if (bVar39) {
                  plVar14 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar17;
                UNLOCK();
              } while (bVar39);
            }
            else {
              do {
                *plVar16 = (longlong)plVar17;
                LOCK();
                bVar39 = plVar17 != DAT_14ca843c8;
                plVar14 = plVar16;
                if (bVar39) {
                  plVar17 = DAT_14ca843c8;
                  plVar14 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar14;
                UNLOCK();
              } while (bVar39);
            }
          }
        }
      }
    }
  }
  if (pdVar28 != (double *)0x0) {
    LOCK();
    pdVar6 = pdVar28 + 1;
    dVar55 = *pdVar6;
    *(uint *)pdVar6 = *(uint *)pdVar6 - 1;
    UNLOCK();
    if (((ulonglong)dVar55 & 0x3fffffff) == 1) {
      pdVar6 = pdVar28 + 1;
      LOCK();
      uVar44 = *(uint *)pdVar6;
      *(uint *)pdVar6 = *(uint *)pdVar6 | 0x40000000;
      UNLOCK();
      if ((uVar44 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)((longlong)pdVar28 + 0xd);
        plVar16 = (longlong *)FUN_14001cc68(0x10,8);
        plVar16[1] = (longlong)pdVar28;
        plVar14 = DAT_14ca843c0;
        plVar17 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar16 = (longlong)plVar14;
            LOCK();
            bVar39 = plVar14 != DAT_14ca843c0;
            plVar17 = plVar16;
            if (bVar39) {
              plVar14 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar17;
            UNLOCK();
          } while (bVar39);
        }
        else {
          do {
            *plVar16 = (longlong)plVar17;
            LOCK();
            bVar39 = plVar17 != DAT_14ca843c8;
            plVar14 = plVar16;
            if (bVar39) {
              plVar17 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar39);
        }
      }
    }
  }
  lVar19 = local_318;
  if (pdVar38 != (double *)0x0) {
    LOCK();
    pdVar28 = pdVar38 + 1;
    dVar55 = *pdVar28;
    *(uint *)pdVar28 = *(uint *)pdVar28 - 1;
    UNLOCK();
    if (((ulonglong)dVar55 & 0x3fffffff) == 1) {
      pdVar28 = pdVar38 + 1;
      LOCK();
      uVar44 = *(uint *)pdVar28;
      *(uint *)pdVar28 = *(uint *)pdVar28 | 0x40000000;
      UNLOCK();
      if ((uVar44 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)((longlong)pdVar38 + 0xd);
        plVar16 = (longlong *)FUN_14001cc68(0x10,8);
        plVar16[1] = (longlong)pdVar38;
        plVar14 = DAT_14ca843c0;
        plVar17 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar16 = (longlong)plVar14;
            LOCK();
            bVar39 = plVar14 != DAT_14ca843c0;
            plVar17 = plVar16;
            if (bVar39) {
              plVar14 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar17;
            UNLOCK();
          } while (bVar39);
        }
        else {
          do {
            *plVar16 = (longlong)plVar17;
            LOCK();
            bVar39 = plVar17 != DAT_14ca843c8;
            plVar14 = plVar16;
            if (bVar39) {
              plVar17 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar39);
        }
      }
    }
  }
  if (pdVar36 != (double *)0x0) {
    LOCK();
    pdVar38 = pdVar36 + 1;
    dVar55 = *pdVar38;
    *(uint *)pdVar38 = *(uint *)pdVar38 - 1;
    UNLOCK();
    if (((ulonglong)dVar55 & 0x3fffffff) == 1) {
      pdVar38 = pdVar36 + 1;
      LOCK();
      uVar44 = *(uint *)pdVar38;
      *(uint *)pdVar38 = *(uint *)pdVar38 | 0x40000000;
      UNLOCK();
      if ((uVar44 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)((longlong)pdVar36 + 0xd);
        plVar16 = (longlong *)FUN_14001cc68(0x10,8);
        plVar16[1] = (longlong)pdVar36;
        plVar14 = DAT_14ca843c0;
        plVar17 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar16 = (longlong)plVar14;
            LOCK();
            bVar39 = plVar14 != DAT_14ca843c0;
            plVar17 = plVar16;
            if (bVar39) {
              plVar14 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar17;
            UNLOCK();
          } while (bVar39);
        }
        else {
          do {
            *plVar16 = (longlong)plVar17;
            LOCK();
            bVar39 = plVar17 != DAT_14ca843c8;
            plVar14 = plVar16;
            if (bVar39) {
              plVar17 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar39);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca46888);
  iVar11 = *(int *)(lVar31 + 0x12598);
  iVar30 = 1;
  if ((((iVar11 != 1) && (iVar30 = iVar11, *(int *)(lVar31 + 0x3020) != 2)) &&
      (*(int *)(lVar31 + 0x3020) != 4)) && (lVar29 = *(longlong *)(lVar31 + 0x23e0), lVar29 != 0)) {
    uVar20 = FUN_147149c5c();
    FUN_147cc7e18(lVar29,uVar20);
    iVar30 = *(int *)(lVar31 + 0x12598);
  }
  dVar55 = *(double *)(lVar31 + 0x125a8);
  dVar57 = *(double *)(lVar31 + 0x125a0);
  *(float *)(param_6 + 0xc90) = (float)*(int *)(lVar31 + 0x1259c);
  *(float *)(param_6 + 0xc94) = (float)iVar30;
  *(float *)(param_6 + 0xc98) = (float)dVar57;
  *(float *)(param_6 + 0xc9c) = (float)dVar55;
  fVar49 = (float)(*(int *)(lVar31 + 0x3100) - *(int *)(lVar31 + 0x30f8)) /
           (float)(*(int *)(lVar31 + 0x4e0) - *(int *)(lVar31 + 0x4d8));
  *(float *)(param_6 + 0xb68) = fVar49;
  uVar43 = 0x3f800000;
  *(float *)(param_6 + 0xb6c) = 1.0 / fVar49;
  lVar29 = *(longlong *)(lVar31 + 0x3108);
  if (lVar29 == 0) {
    uVar48 = 0;
    uVar44 = 0;
  }
  else {
    uVar44 = *(uint *)(lVar29 + 0x6e0);
    uVar48 = *(undefined4 *)(lVar29 + 0x6e4);
  }
  *(uint *)(param_6 + 0xc10) = uVar44 & 7;
  *(uint *)(param_6 + 0xc14) = uVar44;
  *(undefined4 *)(param_6 + 0xc18) = uVar48;
  lVar29 = *(longlong *)(lVar31 + 8);
  if (lVar29 != 0) {
    iVar11 = *(int *)(lVar31 + 0x1dd8);
    if ((-1 < (longlong)iVar11) && (iVar11 < *(int *)(lVar29 + 0x10))) {
      lVar31 = *(longlong *)(*(longlong *)(lVar29 + 8) + (longlong)iVar11 * 8);
    }
  }
  FUN_144718ad0(lVar31,lVar19,param_5);
  lVar29 = local_3a0;
  if (0 < (int)param_5) {
    iVar11 = 0x800;
    if (DAT_14c760a70 < 0x800) {
      iVar11 = DAT_14c760a70;
    }
    iVar30 = 4;
    if (4 < iVar11) {
      iVar30 = iVar11;
    }
    pfVar22 = (float *)(param_6 + 0xc7c);
    lVar24 = 0;
    do {
      dVar7 = *(double *)(lVar19 + 0x18 + lVar24) - *(double *)(lVar19 + lVar24);
      dVar55 = *(double *)(lVar19 + 8 + lVar24);
      dVar57 = *(double *)(lVar19 + 0x10 + lVar24);
      dVar4 = *(double *)(lVar19 + 0x28 + lVar24);
      dVar52 = *(double *)(lVar19 + 0x20 + lVar24);
      dVar56 = *(double *)(lVar31 + 0x1040);
      dVar58 = *(double *)(lVar31 + 0x1038);
      pfVar22[-0xb] = (float)(*(double *)(lVar19 + lVar24) + *(double *)(lVar31 + 0x1030));
      pfVar22[-10] = (float)(dVar55 + dVar58);
      pfVar22[-9] = (float)(dVar57 + dVar56);
      pfVar22[-8] = 1.0 / (float)iVar30;
      pfVar22[-3] = 1.0 / (float)dVar7;
      pfVar22[-2] = 1.0 / (float)(dVar52 - dVar55);
      pfVar22[-1] = 1.0 / (float)(dVar4 - dVar57);
      *pfVar22 = (float)(dVar7 / (double)iVar30);
      lVar24 = lVar24 + 0x38;
      pfVar22 = pfVar22 + 4;
    } while ((ulonglong)param_5 * 0x38 - lVar24 != 0);
  }
  fVar49 = *(float *)(local_3a0 + 0x13694);
  *(float *)(param_6 + 0xb78) = fVar49;
  *(float *)(param_6 + 0xb7c) = 1.0 / fVar49;
  *(undefined4 *)(param_6 + 0xcb4) = *(undefined4 *)(local_3a0 + 0x2b50);
  *(undefined4 *)(param_6 + 0xcb0) = *(undefined4 *)(local_3a0 + 0x2b48);
  *(undefined4 *)(param_6 + 0xcc0) = *(undefined4 *)(local_3a0 + 0x2b60);
  fVar49 = 0.01;
  if (0.01 <= *(float *)(local_3a0 + 0x2b64)) {
    fVar49 = *(float *)(local_3a0 + 0x2b64);
  }
  *(float *)(param_6 + 0xcc4) = fVar49;
  fVar49 = 0.01;
  if (0.01 <= *(float *)(local_3a0 + 0x2b68)) {
    fVar49 = *(float *)(local_3a0 + 0x2b68);
  }
  *(float *)(param_6 + 0xcc8) = fVar49;
  *(undefined4 *)(param_6 + 0xcb8) = *(undefined4 *)(local_3a0 + 0x2b6c);
  *(undefined4 *)(param_6 + 0xcbc) = 0x42480000;
  piVar2 = DAT_14ca2f758;
  iVar11 = *local_390;
  if (iVar11 == 0x40000002) {
    iVar30 = *DAT_14ca2f758;
LAB_1401f1f91:
    uVar21 = 0;
    lVar31 = DAT_14ca2f770;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      iVar30 = *DAT_14ca2f758;
    }
    else if (iVar11 == 2) {
      iVar30 = *DAT_14ca2f758;
      iVar11 = 2;
    }
    else {
      uVar21 = 1;
      if (iVar11 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        uVar21 = (ulonglong)(DVar12 != DVar13);
        iVar11 = *local_390;
      }
      iVar30 = piVar2[uVar21];
      if (iVar11 == 0x40000002) goto LAB_1401f1f91;
    }
    lVar31 = DAT_14ca2f770;
    if (((DAT_14c86a9f8 & 1) == 0) || (iVar11 == 2)) goto LAB_1401f1f91;
    if (iVar11 == 1) {
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      uVar21 = (ulonglong)(DVar12 != DVar13);
    }
    else {
      uVar21 = 1;
    }
  }
  uVar47 = 0;
  if (iVar30 != 0) {
    uVar47 = -(uint)(0.0 < *(float *)(lVar31 + uVar21 * 4)) & 0x3f800000;
  }
  *(uint *)(param_6 + 0x12dc) = uVar47;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca468c0) && (FUN_144b3d300(&DAT_14ca468c0), DAT_14ca468c0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar14 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.SSS.SubSurfaceColorAsTansmittanceAtDistance",1);
    if (plVar14 == (longlong *)0x0) {
      DAT_14ca468b8 = 0;
    }
    else {
      DAT_14ca468b8 = (**(code **)(*plVar14 + 0x70))(plVar14);
    }
    _Init_thread_footer(&DAT_14ca468c0);
    lVar29 = local_3a0;
  }
  if (DAT_14ca468b8 == 0) {
    fVar49 = 0.15;
  }
  else {
    fVar49 = *(float *)(DAT_14ca468b8 + 4);
    if (1.0 <= fVar49) {
      fVar49 = 1.0;
    }
    if (fVar49 <= 0.05) {
      fVar49 = 0.05;
    }
  }
  *(float *)(param_6 + 0x1538) = fVar49;
  if (DAT_14cb01860 == 0) {
    puVar18 = (undefined8 *)(DAT_14ca94dc8 + 0x10);
  }
  else {
    puVar18 = (undefined8 *)(DAT_14cb01860 + 8);
  }
  plVar14 = (longlong *)*puVar18;
  lVar31 = (**(code **)(*plVar14 + 8))(plVar14);
  switch(*(undefined1 *)(lVar31 + 0x32)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    iVar11 = *(int *)(lVar31 + 0x24);
    iVar30 = *(int *)(lVar31 + 0x28);
    break;
  default:
    iVar11 = 0;
    iVar30 = 0;
  }
  *(float *)(param_6 + 0x12e0) = (float)iVar11;
  *(float *)(param_6 + 0x12e4) = (float)iVar30;
  *(float *)(param_6 + 0x12e8) = 1.0 / (float)iVar11;
  *(float *)(param_6 + 0x12ec) = 1.0 / (float)iVar30;
  *(longlong **)(param_6 + 0x1858) = plVar14;
  *(undefined8 *)(&DAT_00001860 + param_6) = DAT_14c9c0d80;
  *(undefined8 *)(&DAT_00001868 + param_6) = DAT_14c9c0de0;
  if (DAT_14cb01868 == 0) {
    puVar18 = (undefined8 *)(DAT_14ca8c060 + 0x10);
  }
  else {
    puVar18 = (undefined8 *)(DAT_14cb01868 + 8);
  }
  plVar14 = (longlong *)*puVar18;
  lVar31 = (**(code **)(*plVar14 + 8))(plVar14);
  switch(*(undefined1 *)(lVar31 + 0x32)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    iVar11 = *(int *)(lVar31 + 0x24);
    iVar30 = *(int *)(lVar31 + 0x28);
    break;
  default:
    iVar11 = 0;
    iVar30 = 0;
  }
  *(float *)(param_6 + 0x12f0) = (float)iVar11;
  *(float *)(param_6 + 0x12f4) = (float)iVar30;
  *(float *)(param_6 + 0x12f8) = 1.0 / (float)iVar11;
  *(float *)(param_6 + 0x12fc) = 1.0 / (float)iVar30;
  *(longlong **)(param_6 + 0x1870) = plVar14;
  *(undefined8 *)(param_6 + 0x1878) = DAT_14c9c0de0;
  if (DAT_14cb016e8 == 0) {
    puVar18 = (undefined8 *)(DAT_14ca94dc8 + 0x10);
  }
  else {
    puVar18 = (undefined8 *)(DAT_14cb016e8 + 8);
  }
  plVar14 = (longlong *)*puVar18;
  lVar31 = (**(code **)(*plVar14 + 8))(plVar14);
  switch(*(undefined1 *)(lVar31 + 0x32)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    iVar11 = *(int *)(lVar31 + 0x24);
    iVar30 = *(int *)(lVar31 + 0x28);
    break;
  default:
    iVar11 = 0;
    iVar30 = 0;
  }
  *(float *)(param_6 + 0x1300) = (float)iVar11;
  *(float *)(param_6 + 0x1304) = (float)iVar30;
  *(float *)(param_6 + 0x1308) = 1.0 / (float)iVar11;
  *(float *)(param_6 + 0x130c) = 1.0 / (float)iVar30;
  *(longlong **)(param_6 + 0x1880) = plVar14;
  *(undefined8 *)(param_6 + 0x1888) = DAT_14c9c0de0;
  *(undefined1 **)(param_6 + 0xcd0) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_6 + 0xcd8) = 0;
  *(undefined4 *)(param_6 + 0xcd8) = *(undefined4 *)(DAT_14ca46120 + 4);
  *(float *)(param_6 + 0xcdc) = *(float *)(DAT_14ca46138 + 4) * *(float *)(local_360 + 0xb9c);
  fVar49 = *(float *)(lVar29 + 0x28f8);
  fVar51 = *(float *)(lVar29 + 0x28f0);
  fVar53 = *(float *)(lVar29 + 0x28ec);
  *(float *)(param_6 + 0xce0) = fVar49 * *(float *)(lVar29 + 0x28e8);
  *(float *)(param_6 + 0xce4) = fVar53 * fVar49;
  *(float *)(param_6 + 0xce8) = fVar51 * fVar49;
  *(undefined8 *)(param_6 + 0xcf0) = *(undefined8 *)(param_6 + 0xce0);
  *(undefined4 *)(param_6 + 0xcf8) = *(undefined4 *)(param_6 + 0xce8);
  cVar10 = FUN_1449a7bda(local_398,lVar29,0,0);
  if (cVar10 != '\0') {
    *(undefined4 *)(param_6 + 0xcf8) = DAT_14c846338;
    *(undefined8 *)(param_6 + 0xcf0) = DAT_14c846330;
  }
  *(undefined4 *)(param_6 + 0xd08) = *(undefined4 *)(param_6 + 0xce8);
  *(undefined8 *)(param_6 + 0xd00) = *(undefined8 *)(param_6 + 0xce0);
  local_3c8 = local_3c8 & 0xffffffff00000000;
  cVar10 = FUN_140444219(lVar29,0,0,0);
  if (cVar10 != '\0') {
    *(undefined4 *)(param_6 + 0xd08) = DAT_14c846338;
    *(undefined8 *)(param_6 + 0xd00) = DAT_14c846330;
  }
  lVar31 = DAT_14ca462b8;
  iVar11 = *local_390;
  if (iVar11 == 0x40000002) {
    uVar21 = 0;
    iVar11 = 0x40000002;
  }
  else {
    bVar39 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar11 != 2)) {
      if (iVar11 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        bVar39 = DVar12 == DVar13;
        iVar11 = *local_390;
      }
      else {
        bVar39 = false;
      }
    }
    uVar21 = (ulonglong)(bVar39 ^ 1);
  }
  fVar49 = *(float *)(lVar31 + uVar21 * 4);
  if (2.0 <= fVar49) {
    fVar49 = 2.0;
  }
  if (fVar49 <= 0.0) {
    fVar49 = 0.0;
  }
  *(float *)(param_6 + 0xe70) = fVar49;
  lVar31 = DAT_14ca46288;
  if (iVar11 == 0x40000002) {
    uVar21 = 0;
    iVar11 = 0x40000002;
  }
  else {
    bVar39 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar11 != 2)) {
      if (iVar11 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        bVar39 = DVar12 == DVar13;
        iVar11 = *local_390;
      }
      else {
        bVar39 = false;
      }
    }
    uVar21 = (ulonglong)(bVar39 ^ 1);
  }
  fVar49 = *(float *)(lVar31 + uVar21 * 4);
  if (1.0 <= fVar49) {
    fVar49 = 1.0;
  }
  if (fVar49 <= -1.0) {
    fVar49 = -1.0;
  }
  *(float *)(param_6 + 0xe74) = fVar49;
  lVar31 = DAT_14ca462a0;
  if (iVar11 == 0x40000002) {
    uVar21 = 0;
  }
  else {
    bVar39 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar11 != 2)) {
      if (iVar11 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        bVar39 = DVar12 == DVar13;
      }
      else {
        bVar39 = false;
      }
    }
    uVar21 = (ulonglong)(bVar39 ^ 1);
  }
  fVar49 = *(float *)(lVar31 + uVar21 * 4);
  if (20.0 <= fVar49) {
    fVar49 = 20.0;
  }
  if (fVar49 <= 0.05) {
    fVar49 = 0.05;
  }
  *(float *)(param_6 + 0xe78) = fVar49;
  if (*(char *)(lVar29 + 0x23eb) == '\0') {
    uVar43 = 0;
  }
  *(undefined4 *)(param_6 + 0xe7c) = uVar43;
  *(undefined8 *)(param_6 + 0xe80) = 0x3f80000000000000;
  uVar20 = *(undefined8 *)(lVar29 + 0x2960);
  *(undefined8 *)(param_6 + 0xe90) = *(undefined8 *)(lVar29 + 0x2958);
  *(undefined8 *)(param_6 + 0xe98) = uVar20;
  *(undefined4 *)(param_6 + 0xea0) = *(undefined4 *)(lVar29 + 0x2968);
  FUN_144ab43c3();
  *(double **)(param_6 + 0xca0) = local_1a8;
  *(longlong **)(param_6 + 0xca8) = uStack_1a0;
  if ((bVar40) || (lVar31 = local_398[0x6c1], lVar31 == 0)) {
    *(undefined8 *)(param_6 + 0xeb0) = 0;
    *(undefined8 *)(param_6 + 0xeb8) = 0x3f80000000000000;
    *(undefined8 *)(param_6 + 0xea4) = 0;
    *(undefined4 *)(param_6 + 0xeac) = 0;
    *(undefined4 *)(param_6 + 0xec0) = 0;
    if (local_384 == 1) {
      if (!bVar40) goto LAB_1401f0716;
LAB_1401f0745:
      *(undefined8 *)(param_6 + 0xf40) = 0;
      *(undefined8 *)(param_6 + 0xf48) = 0;
      *(undefined8 *)(param_6 + 0xf30) = 0;
      *(undefined8 *)(param_6 + 0xf38) = 0;
      *(undefined8 *)(param_6 + 0xf20) = 0;
      *(undefined8 *)(param_6 + 0xf28) = 0;
      *(undefined8 *)(param_6 + 0xf10) = 0;
      *(undefined8 *)(param_6 + 0xf18) = 0;
      *(undefined8 *)(param_6 + 0xf00) = 0;
      *(undefined8 *)(param_6 + 0xf08) = 0;
      *(undefined8 *)(param_6 + 0xef0) = 0;
      *(undefined8 *)(param_6 + 0xef8) = 0;
      *(undefined8 *)(param_6 + 0xee0) = 0;
      *(undefined8 *)(param_6 + 0xee8) = 0;
      *(undefined8 *)(param_6 + 0xed0) = 0;
      *(undefined8 *)(param_6 + 0xed8) = 0;
    }
    else {
      bVar39 = !bVar40;
      bVar40 = true;
      if (bVar39) goto LAB_1401f078f;
LAB_1401f0ab3:
      *(undefined8 *)(param_6 + 0x1750) = DAT_14caff100;
    }
  }
  else {
    uVar43 = 0;
    fVar49 = 0.0;
    fVar45 = 0.0;
    fVar53 = 0.0;
    fVar51 = 1.0;
    if ((*(byte *)(*(longlong *)(lVar29 + 8) + 0x5b) & 0x20) != 0) {
      fVar51 = *(float *)(lVar31 + 0x150) * DAT_14c76144c * *(float *)(lVar31 + 0x13c);
      fVar53 = *(float *)(lVar31 + 0x14c) * DAT_14c76144c * *(float *)(lVar31 + 0x138);
      fVar45 = *(float *)(lVar31 + 0x148) * DAT_14c76144c * *(float *)(lVar31 + 0x134);
      fVar49 = DAT_14c76144c * *(float *)(lVar31 + 0x144) * *(float *)(lVar31 + 0x130);
    }
    *(float *)(param_6 + 0xeb0) = fVar49;
    *(float *)(param_6 + 0xeb4) = fVar45;
    *(float *)(param_6 + 0xeb8) = fVar53;
    *(float *)(param_6 + 0xebc) = fVar51;
    uVar48 = 0x3f800000;
    if ((~*(byte *)(lVar31 + 0x20) & 3) != 0) {
      uVar48 = 0;
    }
    *(undefined4 *)(param_6 + 0xea4) = uVar48;
    uVar48 = 0;
    if ((*(byte *)(lVar31 + 0x22) & 1) != 0) {
      uVar48 = 0x3f800000;
    }
    *(undefined4 *)(param_6 + 0xea8) = uVar48;
    if ((*(byte *)(lVar31 + 0x22) & 2) != 0) {
      uVar43 = 0x3f800000;
    }
    *(undefined4 *)(param_6 + 0xeac) = uVar43;
    *(undefined4 *)(param_6 + 0xec0) = *(undefined4 *)(lVar31 + 0x2c);
    if (local_384 == 1) {
LAB_1401f0716:
      lVar31 = local_398[0x6c1];
      if ((lVar31 == 0) ||
         ((((*(byte *)(lVar31 + 0x20) & 4) != 0 && (DAT_14c760e18 != '\0')) ||
          ((*(byte *)(*(longlong *)(lVar29 + 8) + 0x5b) & 0x20) == 0)))) goto LAB_1401f0745;
      memcpy(local_2b8,(void *)(lVar31 + 0x30),0x90);
      FUN_1472c5f2c();
      *(undefined4 *)(param_6 + 0xf40) = *(undefined4 *)(local_398[0x6c1] + 0x24);
    }
    else {
LAB_1401f078f:
      if (local_398[0x6c2] == 0) {
        bVar40 = false;
        goto LAB_1401f0ab3;
      }
      *(undefined8 *)(param_6 + 0x1750) = *(undefined8 *)(local_398[0x6c2] + 0x30);
    }
    bVar40 = false;
  }
  *(undefined4 *)(param_6 + 0xf50) = 0;
  fVar49 = 1.0;
  if ((*(int *)(lVar29 + 0x1dd0) != 0) && (1 < *(int *)(*(longlong *)(lVar29 + 8) + 0x10))) {
    plVar14 = *(longlong **)(*(longlong *)(lVar29 + 8) + 8);
    lVar31 = *plVar14;
    lVar19 = plVar14[1];
    fVar49 = (float)(*(int *)(lVar19 + 0x3100) - *(int *)(lVar31 + 0x30f8));
    fVar49 = (fVar49 - (float)(*(int *)(lVar19 + 0x30f8) - *(int *)(lVar31 + 0x3100))) / fVar49;
  }
  *(float *)(param_6 + 0xf54) = fVar49;
  lVar31 = DAT_14cad20d8;
  iVar11 = *local_390;
  if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar11 == 2)) {
    uVar21 = 0;
  }
  else if (iVar11 == 1) {
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    uVar21 = (ulonglong)(DVar12 != DVar13);
  }
  else {
    uVar21 = 1;
  }
  uVar47 = *(uint *)(lVar31 + uVar21 * 4);
  uVar50 = DAT_14ca84e64;
  if ((int)uVar47 < (int)DAT_14ca84e64) {
    uVar50 = uVar47;
  }
  uVar47 = 1;
  if (1 < (int)uVar50) {
    uVar47 = uVar50;
  }
  iVar11 = 0x1f;
  if (uVar47 != 0) {
    for (; uVar47 >> iVar11 == 0; iVar11 = iVar11 + -1) {
    }
  }
  *(float *)(param_6 + 0xf58) = (float)iVar11;
  uVar43 = 0;
  if ((*(uint *)(*(longlong *)(lVar29 + 8) + 0x48) >> 0x18 & 1) != 0) {
    uVar43 = 0x3f800000;
  }
  *(undefined4 *)(param_6 + 0xf5c) = uVar43;
  *(undefined4 *)(param_6 + 0xf60) = DAT_14c760214;
  uVar43 = 0x3f800000;
  if (!bVar40) {
    uVar43 = *(undefined4 *)((longlong)local_398 + 0x521c);
  }
  *(undefined4 *)(param_6 + 0xf64) = uVar43;
  if (DAT_14c76096c == 0) {
    fVar51 = 0.0;
    fVar49 = 0.0;
  }
  else {
    fVar49 = 0.0;
    if ((((DAT_14c760978 != 0.0) || (NAN(DAT_14c760978))) || (DAT_14c760974 != 0.0)) ||
       (NAN(DAT_14c760974))) {
      if (DAT_14c760970 == 0) {
        fVar51 = 1.0;
      }
      else {
        fVar49 = DAT_14c760978 - DAT_14c760974;
        if (fVar49 <= 0.001) {
          fVar49 = 0.001;
        }
        fVar49 = 1.0 / fVar49;
        fVar51 = -DAT_14c760974 * fVar49;
      }
    }
    else {
      fVar51 = 1.0;
    }
  }
  fVar53 = (float)DAT_14c76097c;
  *(float *)(param_6 + 0xf70) = fVar49;
  *(float *)(param_6 + 0xf74) = fVar51;
  *(float *)(param_6 + 0xf78) = fVar53;
  iVar11 = 0;
  if (*(int *)(lVar29 + 0x1dd4) != -1) {
    iVar11 = *(int *)(lVar29 + 0x1dd4);
  }
  *(int *)(param_6 + 0xf7c) = iVar11;
  plVar14 = *(longlong **)(DAT_14cb0d2b0 + 0xfe0);
  if (plVar14 == (longlong *)0x0) {
    local_1a8 = (double *)0x0;
    uStack_1a0 = (longlong *)0x0;
    local_2f8 = (double *)0x0;
    uStack_2f0 = 0;
LAB_1401f140b:
    *(undefined8 *)(param_6 + 0x1240) = 0;
    *(undefined8 *)(param_6 + 0x1248) = 0x3f80000000000000;
    fVar49 = 0.0;
    fVar45 = 1.0;
    fVar53 = 1.0;
    fVar51 = 1.0;
  }
  else {
    (**(code **)(*plVar14 + 0x118))(plVar14,&local_1a8,0);
    local_2f8 = (double *)0x0;
    uStack_2f0 = 0;
    if (((local_1a8 == (double *)0x0) ||
        (cVar10 = (**(code **)((longlong)*local_1a8 + 0x48))(), cVar10 == '\0')) ||
       ((int)uStack_2f0 != 4)) goto LAB_1401f140b;
    dVar55 = local_2f8[3];
    dVar57 = local_2f8[2];
    dVar4 = local_2f8[1];
    *(float *)(param_6 + 0x1240) = (float)*local_2f8;
    *(float *)(param_6 + 0x1244) = (float)dVar4;
    *(float *)(param_6 + 0x1248) = (float)dVar57;
    *(float *)(param_6 + 0x124c) = (float)dVar55;
    fVar51 = (float)local_2f8[7];
    fVar53 = (float)local_2f8[6];
    fVar49 = (float)local_2f8[5];
    fVar45 = (float)local_2f8[4];
  }
  *(float *)(param_6 + 0x1250) = fVar45;
  *(float *)(param_6 + 0x1254) = fVar49;
  *(float *)(param_6 + 0x1258) = fVar53;
  *(float *)(param_6 + 0x125c) = fVar51;
  if (local_2f8 != (double *)0x0) {
    FUN_1400020a8(local_2f8);
  }
  plVar14 = uStack_1a0;
  if (uStack_1a0 != (longlong *)0x0) {
    LOCK();
    plVar17 = uStack_1a0 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*uStack_1a0)(uStack_1a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  *(uint *)(param_6 + 0x12b0) = (*(int *)(lVar29 + 0x1df0) << 0x1e) >> 0x1f & _DAT_14cad1fd8;
  if ((*(longlong *)(DAT_14cb0d2b0 + 0x928) != 0) && (lVar31 = FUN_1447b4020(), lVar31 != 0)) {
    *(undefined8 *)(param_6 + 0x1740) = *(undefined8 *)(lVar31 + 0x10);
  }
  lVar31 = DAT_14cb0b518;
  if ((longlong)*(int *)(DAT_14ca712d8 + 0x98) < 1) {
    fVar49 = 0.0;
  }
  else {
    fVar49 = 0.0;
    lVar19 = 0;
    do {
      lVar24 = *(longlong *)(*(longlong *)(DAT_14ca712d8 + 0x90) + lVar19 * 8);
      fVar51 = 0.0;
      if (lVar24 != 0) {
        fVar51 = *(float *)(lVar24 + 0x254);
      }
      if (fVar49 <= fVar51) {
        fVar49 = fVar51;
      }
      lVar19 = lVar19 + 1;
    } while (*(int *)(DAT_14ca712d8 + 0x98) != lVar19);
  }
  iVar11 = *local_390;
  iVar30 = 0;
  if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar11 == 2)) {
    uVar21 = 0;
  }
  else if (iVar11 == 1) {
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    uVar21 = (ulonglong)(DVar12 != DVar13);
  }
  else {
    uVar21 = 1;
  }
  fVar51 = *(float *)(lVar31 + uVar21 * 4);
  if (15.0 <= fVar51) {
    fVar51 = 15.0;
  }
  if (fVar51 <= -15.0) {
    fVar51 = -15.0;
  }
  *(float *)(param_6 + 0x1260) = fVar49 + fVar51;
  if (*(longlong *)(lVar29 + 8) != 0) {
    iVar30 = *(int *)(*(longlong *)(lVar29 + 8) + 0x11c);
  }
  if (iVar30 < 2) {
    iVar30 = 1;
  }
  uVar21 = (ulonglong)(iVar30 - 1) * 2 + 1;
  lVar31 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> lVar31 == 0; lVar31 = lVar31 + -1) {
    }
  }
  bVar5 = (byte)lVar31;
  iVar33 = 1 << (bVar5 & 0x1f);
  *(uint *)(param_6 + 0x1264) = 0x1fU - (int)lVar31 ^ 0x1f;
  *(int *)(param_6 + 0x1268) = iVar33 + -1;
  iVar30 = 0;
  iVar11 = 0;
  if (*(longlong *)(lVar29 + 8) != 0) {
    iVar11 = *(int *)(*(longlong *)(lVar29 + 8) + 0x11c);
  }
  if (iVar11 < 2) {
    iVar11 = 1;
  }
  uVar21 = (ulonglong)(iVar11 - 1) * 2 + 1;
  lVar31 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> lVar31 == 0; lVar31 = lVar31 + -1) {
    }
  }
  iVar11 = 1 << ((byte)lVar31 & 0x1f);
  *(int *)(param_6 + 0x126c) = (local_2d0 + iVar11 + -1) / iVar11;
  if (*(longlong *)(lVar29 + 8) != 0) {
    iVar30 = *(int *)(*(longlong *)(lVar29 + 8) + 0x11c);
  }
  if (iVar30 < 2) {
    iVar30 = 1;
  }
  uVar21 = (ulonglong)(iVar30 - 1) * 2 + 1;
  lVar31 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> lVar31 == 0; lVar31 = lVar31 + -1) {
    }
  }
  bVar8 = (byte)lVar31;
  iVar11 = 1 << (bVar8 & 0x1f);
  uVar21 = (ulonglong)(iVar11 - 1) * 2 + 1;
  lVar31 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> lVar31 == 0; lVar31 = lVar31 + -1) {
    }
  }
  uVar47 = (iVar11 << (bVar8 & 0x1f)) - 1U & uVar44;
  uVar47 = uVar47 >> 0x18 | (uVar47 & 0xff0000) >> 8 | (uVar47 & 0xff00) << 8 | uVar47 << 0x18;
  uVar47 = (uVar47 & 0xf0f0f0f) << 4 | uVar47 >> 4 & 0xf0f0f0f;
  uVar47 = (uVar47 >> 2 & 0x33333333) + (uVar47 & 0x33333333) * 4;
  uVar50 = (uVar47 >> 1 & 0x55555555) + (uVar47 & 0x55555555) * 2 >>
           (((byte)lVar31 ^ 0x3f) * '\x02' + 0xa2 & 0x1f);
  uVar47 = ((uVar50 & 0x55555555) >> 1 | uVar50 & 0x55555555) & 0x33333333;
  uVar47 = (uVar47 >> 2 | uVar47) & 0xf0f0f0f;
  uVar47 = uVar47 >> 4 | uVar47;
  uVar50 = uVar50 & 0x22222222 | uVar50 >> 1 & 0x44444444;
  uVar50 = (uVar50 >> 3 | uVar50 >> 1) & 0xf0f0f0f;
  uVar50 = uVar50 >> 4 | uVar50;
  *(uint *)(param_6 + 0x1270) =
       ((uVar50 & 0xff | uVar50 >> 8 & 0xff00) << (bVar8 & 0x1f)) +
       (uVar47 & 0xff | uVar47 >> 8 & 0xff00);
  *(uint *)(param_6 + 0x1274) =
       (uVar44 >> (bVar5 * '\x02' & 0x1f)) + ((iVar33 << (bVar5 & 0x1f)) - 1U & uVar44);
  *(undefined8 *)(param_6 + 0x1280) = 0;
  *(undefined8 *)(param_6 + 0x1288) = 0;
  *(undefined8 *)(param_6 + 0x1290) = 0;
  *(undefined8 *)(param_6 + 0x12a0) = 0;
  *(undefined8 *)(param_6 + 0x12a8) = 0;
  lVar31 = DAT_14ca63b90;
  if (DAT_14ca63b90 != 0 && DAT_14ca63b88 != 0) {
    *(undefined8 *)(param_6 + 0x17c8) = *(undefined8 *)(DAT_14ca63b88 + 8);
    *(undefined8 *)(param_6 + 0x17d8) = *(undefined8 *)(lVar31 + 8);
  }
  if (DAT_14ca63b98 != 0) {
    *(undefined8 *)(param_6 + 0x17e8) = *(undefined8 *)(DAT_14ca63b98 + 8);
  }
  lVar31 = *(longlong *)(param_6 + 0x17c8);
  if (lVar31 == 0) {
    lVar31 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x17c8) = lVar31;
  lVar31 = *(longlong *)(param_6 + 0x17d8);
  if (lVar31 == 0) {
    lVar31 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x17d8) = lVar31;
  lVar31 = *(longlong *)(param_6 + 0x17e8);
  if (lVar31 == 0) {
    lVar31 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x17e8) = lVar31;
  uVar20 = DAT_14c9c0de0;
  *(undefined8 *)(param_6 + 0x17d0) = DAT_14c9c0de0;
  *(undefined8 *)(param_6 + 0x17e0) = uVar20;
  *(undefined8 *)(param_6 + 0x17f0) = uVar20;
  if (((DAT_14ca414b0 != 0) &&
      (plVar14 = *(longlong **)(DAT_14ca414b0 + 8), plVar14 != (longlong *)0x0)) ||
     ((DAT_14ca63b28 != 0 &&
      (plVar14 = *(longlong **)(DAT_14ca63b28 + 8), plVar14 != (longlong *)0x0)))) {
    lVar31 = (**(code **)(*plVar14 + 8))(plVar14);
    switch(*(undefined1 *)(lVar31 + 0x32)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      iVar11 = *(int *)(lVar31 + 0x24);
      iVar30 = *(int *)(lVar31 + 0x28);
      break;
    default:
      iVar11 = 0;
      iVar30 = 0;
    }
    *(longlong **)(param_6 + 0x18c8) = plVar14;
    *(undefined8 *)(param_6 + 0x18d0) = DAT_14c9c0de0;
    lVar31 = (**(code **)(*plVar14 + 8))(plVar14);
    *(float *)(&DAT_000018c0 + param_6) = (float)(*(byte *)(lVar31 + 0x30) - 1);
    *(float *)(param_6 + 0x18b0) = (float)iVar11;
    *(float *)(param_6 + 0x18b4) = (float)iVar30;
    *(float *)(param_6 + 0x18b8) = 1.0 / (float)iVar11;
    *(float *)(param_6 + 0x18bc) = 1.0 / (float)iVar30;
  }
  lVar31 = *(longlong *)(param_6 + 0x18c8);
  if (lVar31 == 0) {
    lVar31 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x18c8) = lVar31;
  if (((DAT_14c9e3c20 != 0) &&
      (plVar14 = *(longlong **)(DAT_14c9e3c20 + 8), plVar14 != (longlong *)0x0)) ||
     ((DAT_14ca63b38 != 0 &&
      (plVar14 = *(longlong **)(DAT_14ca63b38 + 8), plVar14 != (longlong *)0x0)))) {
    lVar31 = (**(code **)(*plVar14 + 8))(plVar14);
    switch(*(undefined1 *)(lVar31 + 0x32)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      iVar11 = *(int *)(lVar31 + 0x24);
      iVar30 = *(int *)(lVar31 + 0x28);
      break;
    default:
      iVar11 = 0;
      iVar30 = 0;
    }
    *(longlong **)(param_6 + 0x18f0) = plVar14;
    *(undefined8 *)(&DAT_000018f8 + param_6) = DAT_14c9c0de0;
    *(float *)(param_6 + 0x18e0) = (float)iVar11;
    *(float *)(param_6 + 0x18e4) = (float)iVar30;
    *(float *)(param_6 + 0x18e8) = 1.0 / (float)iVar11;
    *(float *)(param_6 + 0x18ec) = 1.0 / (float)iVar30;
  }
  lVar31 = *(longlong *)(param_6 + 0x18f0);
  if (lVar31 == 0) {
    lVar31 = *(longlong *)(DAT_14ca8c060 + 0x10);
  }
  *(longlong *)(param_6 + 0x18f0) = lVar31;
  FUN_1447f88b8(lVar29,param_6 + 0x12c0,param_6 + 0x12d4,param_6 + 0x12d8);
  *(undefined8 *)(param_6 + 0x17b8) = 0;
  if (((DAT_14ca63b70 == 0) || (lVar31 = *(longlong *)(DAT_14ca63b70 + 8), lVar31 == 0)) &&
     (lVar31 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar31 == 0)) {
    lVar31 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x17b8) = lVar31;
  *(undefined8 *)(param_6 + 0x17c0) = DAT_14c9c0de0;
  FUN_14005d157(&local_1a8,lVar29);
  plVar14 = DAT_14ca4e328;
  bVar5 = (byte)local_1a8;
  bVar8 = local_1a8._1_1_;
  if (DAT_14ca4e328 != (longlong *)0x0) {
    (**(code **)(*DAT_14ca4e328 + 0x30))();
  }
  plVar17 = DAT_14ca4e330;
  if (DAT_14ca4e330 != (longlong *)0x0) {
    (**(code **)(*DAT_14ca4e330 + 0x30))();
  }
  plVar16 = DAT_14ca4e338;
  if (DAT_14ca4e338 != (longlong *)0x0) {
    (**(code **)(*DAT_14ca4e338 + 0x30))();
  }
  plVar25 = DAT_14ca4e340;
  if (DAT_14ca4e340 != (longlong *)0x0) {
    (**(code **)(*DAT_14ca4e340 + 0x30))();
  }
  *(uint *)(param_6 + 0x17f8) = (uint)bVar5;
  *(uint *)(param_6 + 0x17fc) = (uint)bVar8;
  if (plVar14 == (longlong *)0x0) {
    lVar31 = 0;
  }
  else {
    lVar31 = plVar14[1];
  }
  *(longlong *)(param_6 + 0x1800) = lVar31;
  if (plVar17 == (longlong *)0x0) {
    lVar31 = 0;
  }
  else {
    lVar31 = plVar17[1];
  }
  *(longlong *)(param_6 + 0x1808) = lVar31;
  if (plVar16 == (longlong *)0x0) {
    lVar31 = 0;
  }
  else {
    lVar31 = plVar16[1];
  }
  *(longlong *)(param_6 + 0x1810) = lVar31;
  if (plVar25 == (longlong *)0x0) {
    *(undefined8 *)(param_6 + 0x1818) = 0;
  }
  else {
    *(longlong *)(param_6 + 0x1818) = plVar25[1];
    (**(code **)(*plVar25 + 0x38))();
  }
  lVar31 = local_3a0;
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x38))();
  }
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x38))();
  }
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x38))();
  }
  lVar19 = *(longlong *)(param_6 + 0x1800);
  if (lVar19 == 0) {
    lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x1800) = lVar19;
  lVar19 = *(longlong *)(param_6 + 0x1808);
  if ((lVar19 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
    lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x1808) = lVar19;
  lVar19 = *(longlong *)(param_6 + 0x1810);
  if (lVar19 == 0) {
    lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x1810) = lVar19;
  lVar19 = *(longlong *)(param_6 + 0x1818);
  if (lVar19 == 0) {
    lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x1818) = lVar19;
  *(undefined8 *)(param_6 + 0x1820) = DAT_14c9c0de0;
  *(undefined8 *)(param_6 + 0x1830) = DAT_14c9cfda8;
  if (*(longlong *)(lVar31 + 0x3108) == 0) goto LAB_1401f1cc3;
  *(undefined8 *)(param_6 + 0x1828) = *(undefined8 *)(*(longlong *)(lVar31 + 0x3108) + 0x2130);
  lVar19 = DAT_14ca97290;
  iVar11 = *local_390;
  if (iVar11 == 0x40000002) {
    iVar11 = 0x40000002;
LAB_1401f1f61:
    uVar21 = 0;
  }
  else {
    if ((DAT_14c86a9f8 != 1) || (iVar11 == 2)) goto LAB_1401f1f61;
    if (iVar11 == 1) {
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      uVar21 = (ulonglong)(DVar12 != DVar13);
      iVar11 = *local_390;
    }
    else {
      uVar21 = 1;
    }
  }
  uVar43 = *(undefined4 *)(lVar19 + uVar21 * 4);
  lVar19 = *(longlong *)(lVar31 + 0x3108);
  uVar48 = *(undefined4 *)(lVar19 + 0x2144);
  uVar46 = *(undefined4 *)(lVar19 + 0x2140);
  *(undefined4 *)(param_6 + 0x1580) = *(undefined4 *)(lVar19 + 0x2138);
  *(undefined4 *)(param_6 + 0x1584) = uVar46;
  *(undefined4 *)(param_6 + 0x1588) = uVar48;
  *(undefined4 *)(param_6 + 0x158c) = uVar43;
  lVar19 = DAT_14ca972a8;
  if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar11 == 2)) {
    uVar21 = 0;
  }
  else if (iVar11 == 1) {
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    uVar21 = (ulonglong)(DVar12 != DVar13);
  }
  else {
    uVar21 = 1;
  }
  fVar49 = *(float *)(lVar19 + uVar21 * 4);
  fVar51 = 0.0;
  if (0.0 <= fVar49) {
    fVar51 = fVar49;
  }
  *(float *)(param_6 + 0x1590) = fVar51;
  *(undefined8 *)(param_6 + 0x1594) = 0;
  *(undefined4 *)(param_6 + 0x159c) = 0;
LAB_1401f1cc3:
  lVar19 = *(longlong *)(param_6 + 0x1828);
  if (lVar19 == 0) {
    lVar19 = *(longlong *)(DAT_14ca8c060 + 0x10);
  }
  *(longlong *)(param_6 + 0x1828) = lVar19;
  uVar20 = DAT_14c9c0de0;
  *(undefined8 *)(param_6 + 0x1840) = DAT_14c9c0de0;
  *(undefined8 *)(param_6 + 0x1850) = uVar20;
  if ((*(longlong *)(DAT_14cb0d2b0 + 0xb28) != 0) && (lVar19 = FUN_1447b4020(), lVar19 != 0)) {
    lVar29 = 0;
    if (*(char *)(*(longlong *)(lVar19 + 0x10) + 0x52) == '\x02') {
      lVar29 = *(longlong *)(lVar19 + 0x10);
    }
    *(longlong *)(param_6 + 0x1838) = lVar29;
  }
  lVar19 = *(longlong *)(param_6 + 0x1838);
  if ((lVar19 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
    lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x1838) = lVar19;
  if ((*(longlong *)(DAT_14cb0d2b0 + 0xb50) != 0) && (lVar19 = FUN_1447b4020(), lVar19 != 0)) {
    lVar29 = 0;
    if (*(char *)(*(longlong *)(lVar19 + 0x10) + 0x52) == '\x02') {
      lVar29 = *(longlong *)(lVar19 + 0x10);
    }
    *(longlong *)(param_6 + 0x1848) = lVar29;
  }
  lVar19 = *(longlong *)(param_6 + 0x1848);
  if ((lVar19 == 0) && (lVar19 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar19 == 0)) {
    lVar19 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_6 + 0x1848) = lVar19;
  if ((*(longlong *)(lVar31 + 0x3050) == 0) || (*(longlong *)(lVar31 + 0x3048) == 0)) {
    uVar20 = *(undefined8 *)(DAT_14ca8c040 + 0x18);
    *(undefined8 *)(param_6 + 0x1890) = uVar20;
  }
  else {
    *(longlong *)(param_6 + 0x1890) = *(longlong *)(lVar31 + 0x3048);
    uVar20 = *(undefined8 *)(lVar31 + 0x3050);
  }
  *(undefined8 *)(param_6 + 0x1898) = uVar20;
  *(undefined4 *)(param_6 + 0x18a0) = *(undefined4 *)(lVar31 + 0x3058);
  if ((*(longlong *)(lVar31 + 0x3078) == 0) || (*(longlong *)(lVar31 + 0x3070) == 0)) {
    uVar20 = *(undefined8 *)(DAT_14ca8c040 + 0x18);
    *(undefined8 *)(param_6 + 0x1908) = uVar20;
  }
  else {
    *(longlong *)(param_6 + 0x1908) = *(longlong *)(lVar31 + 0x3070);
    uVar20 = *(undefined8 *)(lVar31 + 0x3078);
  }
  *(undefined8 *)(param_6 + 0x1910) = uVar20;
  lVar19 = DAT_14ca46028;
  if (DAT_14ca46028 == 0) {
    lVar19 = *(longlong *)(DAT_14ca8c028 + 0x20);
  }
  *(longlong *)(param_6 + 0x1918) = lVar19;
  *(undefined4 *)(param_6 + 0x1530) = *(undefined4 *)(lVar31 + 0x13b84);
  if ((local_c0 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401f29e8 FUN_1401f29e8 body=240 status=ok
// SIG undefined FUN_1401f29e8(void)

longlong FUN_1401f29e8(longlong param_1,longlong param_2,byte param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_4 = 0;
  if (param_1 != 0 && param_2 != 0) {
    lVar5 = (ulonglong)param_3 * 0x40 + 0x178;
    do {
      lVar6 = (longlong)*(int *)(param_1 + 8 + lVar5);
      if (lVar6 != 0) {
        lVar7 = *(longlong *)(param_1 + lVar5);
        lVar6 = lVar6 << 6;
        do {
          lVar4 = FUN_1401f2ad8(lVar7);
          if (lVar4 == param_2) {
            lVar5 = *(longlong *)(lVar7 + 0x28);
            if (lVar5 == 0) {
              return 0;
            }
            plVar3 = *(longlong **)(lVar7 + 0x30);
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
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
              LOCK();
              plVar1 = plVar3 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 != 0) {
                return lVar5;
              }
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 != 0) {
                return lVar5;
              }
              (**(code **)(*plVar3 + 0x10))(plVar3);
              return lVar5;
            }
            return lVar5;
          }
          lVar7 = lVar7 + 0x40;
          lVar6 = lVar6 + -0x40;
        } while (lVar6 != 0);
      }
      param_1 = FUN_1401f6e4a(param_1 + 0x18);
      *param_4 = 1;
    } while (param_1 != 0);
  }
  return 0;
}



// FUNCTION 1401f2ad8 FUN_1401f2ad8 body=375 status=ok
// SIG undefined FUN_1401f2ad8(void)

longlong FUN_1401f2ad8(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1401f2c50();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 1401f2c50 FUN_1401f2c50 body=221 status=ok
// SIG undefined FUN_1401f2c50(void)

longlong FUN_1401f2c50(void)

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
  if (DAT_14c997bf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146ef3167;
    local_40 = FUN_142a2f7ea;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/PhysicsCore",L"PhysicalMaterial",&DAT_14c997bf0,&DAT_146ef3166);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c997bf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f2d2e FUN_1401f2d2e body=499 status=ok
// SIG undefined FUN_1401f2d2e(void)

void FUN_1401f2d2e(longlong *param_1,double param_2,longlong *param_3,double param_4,
                  undefined1 param_5,undefined8 *param_6,double *param_7,undefined8 *param_8,
                  void *param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_208 [32];
  float local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double local_180;
  double dStack_178;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150 [256];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_158 = param_8[2];
  local_168 = *param_8;
  uStack_160 = param_8[1];
  local_180 = *param_7;
  dStack_178 = param_7[1];
  local_170 = param_7[2];
  local_198 = *param_6;
  uStack_190 = param_6[1];
  local_188 = param_6[2];
  local_1a0 = param_5;
  local_1b8 = param_2;
  uStack_1b0 = param_3;
  local_1a8 = param_4;
  memcpy(local_150,param_9,0x100);
  uVar2 = FUN_14477b072(param_1,DAT_14cac9ba0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_1b8);
  lVar1 = param_1[0x341];
  if (((lVar1 != 0) && (param_1[0x340] != 0)) && (param_1[0x2e0] != 0)) {
    if (param_3 == (longlong *)0x0) {
      local_1a8 = DAT_14c8464f0;
      local_1b8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_1b0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      (**(code **)(*param_3 + 0x328))(param_3,&local_1b8);
    }
    (**(code **)(*param_1 + 0x328))(param_1,&local_1d0);
    fVar4 = (float)((local_1a8 - local_1c0) * param_7[2] +
                   (local_1b8 - local_1d0) * *param_7 +
                   ((double)uStack_1b0 - local_1c8) * param_7[1]);
    fVar3 = (float)FUN_1401f2f5e();
    if (fVar3 * *(float *)(lVar1 + 0x7e8) < fVar4) {
      local_1d8 = 0;
      local_1e0 = 0;
      local_1e8 = fVar4;
      (**(code **)(*param_1 + 0x860))(param_1,param_6,param_7,param_9);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f2f22 FUN_1401f2f22 body=60 status=ok
// SIG undefined FUN_1401f2f22(void)

undefined8 * FUN_1401f2f22(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1700);
  if (lVar1 == 0) {
    FUN_1448e8054(param_1,param_2);
  }
  else {
    param_2[2] = *(undefined8 *)(lVar1 + 0x870);
    uVar2 = *(undefined8 *)(lVar1 + 0x868);
    *param_2 = *(undefined8 *)(lVar1 + 0x860);
    param_2[1] = uVar2;
  }
  return param_2;
}



// FUNCTION 1401f2f5e FUN_1401f2f5e body=473 status=ok
// SIG undefined FUN_1401f2f5e(void)

float FUN_1401f2f5e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
  float local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  float local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x1700);
  if (lVar2 == 0) {
    fVar7 = 0.0;
  }
  else {
    local_b0[0] = '\0';
    local_88[0] = 0;
    FUN_1456bb102(local_b0,param_1);
    pfVar5 = &local_80;
    FUN_1448729ea(lVar2 + 0xdb8,pfVar5,local_b0);
    if (local_60 == 3) {
      uVar4 = 3;
      fVar7 = local_80;
    }
    else {
      pfVar6 = &local_58;
      FUN_1400b56fe(pfVar6,&local_80,3);
      fVar7 = 0.0;
      if (local_38 != 0) {
        fVar7 = local_58;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_40) {
          pfVar6 = (float *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar3)(pfVar6);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
      uVar4 = (uint)local_60;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_68) {
        pfVar5 = (float *)CONCAT44(uStack_7c,local_80);
      }
      (*pcVar3)(pfVar5);
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
    fVar7 = (fVar7 * 100000.0) / 2236.942;
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return fVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f3138 FUN_1401f3138 body=363 status=ok
// SIG undefined FUN_1401f3138(void)

undefined8 FUN_1401f3138(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((longlong)(int)param_2[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    lVar6 = 0;
    do {
      plVar8 = *(longlong **)(*param_2 + lVar6);
      if (((plVar8 == (longlong *)0x0) || (lVar2 = *plVar8, lVar2 == 0)) ||
         (**(char **)(lVar2 + 0x20) != '\0')) {
        bVar10 = false;
      }
      else {
        iVar1 = *(int *)(lVar2 + 0x1c);
        if (iVar1 == 2) {
          uVar4 = *(uint *)(plVar8 + 1);
          if (-1 < (longlong)(int)uVar4) {
            if (((int)uVar4 < *(int *)(lVar2 + 0x418)) &&
               (lVar9 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x410) + (longlong)(int)uVar4 * 4),
               lVar9 != -1)) {
              plVar5 = (longlong *)(lVar9 * 8 + *(longlong *)(lVar2 + 0x440));
              goto LAB_1401f31d9;
            }
LAB_1401f324b:
            if (((int)uVar4 < *(int *)(lVar2 + 0x418)) &&
               (lVar9 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x410) + (ulonglong)uVar4 * 4),
               lVar9 != -1)) {
              plVar8 = (longlong *)(lVar9 * 8 + *(longlong *)(lVar2 + 0x440));
              goto LAB_1401f3212;
            }
          }
          goto LAB_1401f3230;
        }
        if (iVar1 == 0xb) {
          plVar5 = (longlong *)(lVar2 + 0x40);
        }
        else {
          if (iVar1 != 0xc) goto LAB_1401f3230;
          plVar5 = (longlong *)(lVar2 + 0x128);
        }
LAB_1401f31d9:
        lVar9 = *plVar5;
        if (((lVar9 != 0) && (1 < *(byte *)(lVar9 + 0x90))) &&
           (bVar10 = true, *(char *)(lVar9 + 0x1ac) == '\x04')) goto LAB_1401f31f6;
        if (iVar1 == 0xb) {
          plVar8 = (longlong *)(lVar2 + 0x40);
LAB_1401f3212:
          lVar2 = *plVar8;
          if (lVar2 == 0) goto LAB_1401f3230;
          if (*(byte *)(lVar2 + 0x90) < 2) {
            bVar7 = *(byte *)(lVar2 + 0x90) == 0 | 2;
          }
          else {
            bVar7 = *(byte *)(lVar2 + 0x1ac);
          }
        }
        else {
          if (iVar1 == 2) {
            uVar4 = *(uint *)(plVar8 + 1);
            if (-1 < (int)uVar4) goto LAB_1401f324b;
          }
          else if (iVar1 == 0xc) {
            plVar8 = (longlong *)(lVar2 + 0x128);
            goto LAB_1401f3212;
          }
LAB_1401f3230:
          bVar7 = 0;
        }
        bVar10 = bVar7 == 1;
      }
LAB_1401f31f6:
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),(byte)uVar3 & bVar10);
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar6);
  }
  return uVar3;
}



// FUNCTION 1401f32a4 FUN_1401f32a4 body=2814 status=ok
// SIG undefined FUN_1401f32a4(void)

void FUN_1401f32a4(code *param_1,undefined8 param_2,double *param_3,void *param_4,float param_5,
                  byte param_6,byte param_7)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double *pdVar10;
  uint uVar11;
  longlong *plVar12;
  code *pcVar13;
  longlong lVar14;
  code *pcVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  undefined1 auStack_288 [32];
  uint local_268;
  code *local_260;
  uint local_258;
  undefined8 local_250;
  undefined2 *local_248;
  code *local_240;
  undefined1 *local_238;
  code *local_230;
  undefined1 *local_228;
  code *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 *local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined1 local_1dc [4];
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  ushort local_1c0;
  undefined6 uStack_1be;
  byte local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  longlong local_168;
  undefined4 local_160;
  longlong local_158;
  longlong *local_148;
  longlong local_138 [4];
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((((*(int *)((longlong)param_4 + 0xb4) != 0) &&
       (uVar11 = *(uint *)((longlong)param_4 + 0xb0), -1 < (int)uVar11)) &&
      ((int)uVar11 < DAT_14c9647dc)) &&
     (((plVar12 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
       plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)((longlong)param_4 + 0xb4))) &&
      ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
      lVar17 = *plVar12;
    }
    else {
      lVar17 = 0;
    }
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a00) + 0x11f0);
    if (lVar14 != 0) {
      lVar16 = 0;
      do {
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x1a00) + 0x11e8) + lVar16) ==
            *(char *)(lVar17 + 0x60)) goto LAB_1401f3bfa;
        lVar16 = lVar16 + 1;
      } while (lVar14 != lVar16);
    }
  }
  lVar17 = *(longlong *)(param_1 + 0x1a08);
  if (((lVar17 != 0) && (*(longlong *)(param_1 + 0x1a00) != 0)) &&
     (*(longlong *)(param_1 + 0x1700) != 0)) {
    fVar19 = (float)FUN_1401f2f5e(param_1);
    fVar24 = *(float *)(lVar17 + 0x7e8 + (ulonglong)param_6 * 4) * fVar19;
    fVar19 = fVar19 * *(float *)(lVar17 + 0x7f0);
    if ((fVar24 != fVar19) || (NAN(fVar24) || NAN(fVar19))) {
      dVar22 = (double)fVar24;
      dVar23 = (double)fVar19;
      if (fVar24 <= fVar19) {
        dVar23 = dVar22;
        dVar22 = (double)fVar19;
      }
      dVar22 = ((double)param_5 - dVar23) / (dVar22 - dVar23);
    }
    else {
      dVar22 = 0.0;
      if (fVar24 <= param_5) {
        dVar22 = 1.0;
      }
    }
    if (1.0 <= dVar22) {
      dVar22 = 1.0;
    }
    if (dVar22 <= 0.0) {
      dVar22 = 0.0;
    }
    fVar19 = (float)dVar22;
    if (0.0 < fVar19) {
      uVar8 = FUN_1447210f0(param_1);
      pcVar13 = (code *)&local_1a8;
      dVar22 = (double)FUN_1407f7f84(&local_1a8,uVar8);
      if (uStack_1a0 != (code *)0x0) {
        dVar22 = (double)(ulonglong)*(uint *)(uStack_1a0 + 8);
        do {
          uVar11 = SUB84(dVar22,0);
          if (uVar11 == 0) {
            pcVar15 = (code *)0x0;
            break;
          }
          LOCK();
          uVar2 = *(uint *)(uStack_1a0 + 8);
          if (uVar11 == uVar2) {
            *(uint *)(uStack_1a0 + 8) = uVar11 + 1;
          }
          else {
            dVar22 = (double)(ulonglong)uVar2;
          }
          UNLOCK();
          pcVar15 = uStack_1a0;
        } while (uVar11 != uVar2);
        LOCK();
        pcVar1 = uStack_1a0 + 0xc;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        pcVar13 = uStack_1a0;
        if (*(int *)pcVar1 == 0) {
          dVar22 = (double)(**(code **)(*(longlong *)uStack_1a0 + 0x10))();
        }
        pcVar1 = local_1a8;
        if (pcVar15 != (code *)0x0) {
          if (local_1a8 != (code *)0x0) {
            uStack_178 = 0;
            uStack_174 = 0;
            uStack_170 = 0;
            local_188 = 0;
            uStack_180 = 0;
            uStack_17c = 0;
            local_198 = 0.0;
            uStack_190 = 0.0;
            local_1a8 = (code *)0x0;
            uStack_1a0 = (code *)0x0;
            local_168 = CONCAT44(local_168._4_4_,0xc0);
            local_158 = 0;
            local_148 = (longlong *)0x0;
            local_118 = 0;
            local_108 = (longlong *)0x0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0x3ff0000000000000;
            local_b8 = 0x3ff0000000000000;
            local_b0 = 0x3ff0000000000000;
            local_a8 = 0x3f80000000000000;
            local_a0 = param_5;
            cVar6 = FUN_1402096b0(*(longlong *)(param_1 + 0x1700));
            lVar14 = 0x1188;
            if (cVar6 != '\0') {
              lVar14 = 0x11a0;
            }
            local_1f8 = *(undefined8 **)(*(longlong *)(param_1 + 0x1a00) + lVar14);
            dVar22 = (double)FUN_1446dcdd4(&local_1d8);
            if (((DAT_14cb78ff0 != 0) &&
                (dVar22 = (double)FUN_144837462(DAT_14cb78ff0,&local_1d8), param_1 != (code *)0x0))
               && (dVar22 != 0.0)) {
              local_258 = 0;
              local_268 = local_268 & 0xffffff00;
              local_260 = (code *)&local_1a8;
              dVar22 = (double)FUN_1408f2522(pcVar1,dVar22,param_1,param_4);
            }
            if (CONCAT62(uStack_1be,local_1c0) != 0) {
              dVar22 = (double)FUN_1400020a8();
            }
            if (local_118 != 0) {
              plVar12 = local_108;
              if (local_108 == (longlong *)0x0) {
                plVar12 = local_f8;
              }
              dVar22 = (double)(**(code **)(*plVar12 + 0x10))();
            }
            if (local_158 != 0) {
              plVar12 = local_148;
              if (local_148 == (longlong *)0x0) {
                plVar12 = local_138;
              }
              dVar22 = (double)(**(code **)(*plVar12 + 0x10))();
            }
            if (CONCAT44(uStack_174,uStack_178) != 0) {
              dVar22 = (double)FUN_1400020a8();
            }
            if (local_188 != 0) {
              dVar22 = (double)FUN_1400020a8();
            }
            if (local_198 != 0.0) {
              dVar22 = (double)FUN_1400020a8();
            }
            pcVar13 = local_1a8;
            if (local_1a8 != (code *)0x0) {
              dVar22 = (double)FUN_1400020a8();
            }
          }
          LOCK();
          pcVar1 = pcVar15 + 8;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 == 0) {
            pcVar13 = pcVar15;
            dVar22 = (double)(*(code *)**(undefined8 **)pcVar15)();
            LOCK();
            pcVar1 = pcVar15 + 0xc;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            UNLOCK();
            if (*(int *)pcVar1 == 0) {
              dVar22 = (double)(**(code **)(*(longlong *)pcVar15 + 0x10))();
              pcVar13 = pcVar15;
            }
          }
        }
      }
      pcVar15 = *(code **)(param_1 + 0x3c0);
      if (pcVar15 != (code *)0x0) {
        if (DAT_14cbadd90 == 0.0) {
          local_1a8 = FUN_141030f22;
          local_220 = FUN_14081d0ea;
          local_228 = &LAB_1459f2e4c;
          local_238 = &LAB_148c39de3;
          local_240 = (code *)&LAB_1457a9eb2;
          local_248 = &DAT_149e063b2;
          local_250 = 0;
          local_258 = 0x10000004;
          local_260 = (code *)CONCAT44(local_260._4_4_,0x10);
          local_268 = 0x3de0;
          local_230 = (code *)&local_1a8;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        pcVar13 = *(code **)(pcVar15 + 0x10);
        dVar22 = DAT_14cbadd90;
        if (*(int *)((longlong)DAT_14cbadd90 + 0x38) <= *(int *)(pcVar13 + 0x38)) {
          dVar22 = (double)((longlong)DAT_14cbadd90 + 0x30);
          pcVar13 = *(code **)(pcVar13 + 0x30);
          if (((*(double *)(pcVar13 + (longlong)*(int *)((longlong)DAT_14cbadd90 + 0x38) * 8) ==
                dVar22) && (((byte)pcVar15[0x420] & 2) != 0)) &&
             (pcVar13 = pcVar15, dVar22 = (double)(**(code **)(*(longlong *)pcVar15 + 0x6c8))(),
             SUB81(dVar22,0) != '\0')) {
            local_1e8 = DAT_14c8464f0;
            local_1f8 = DAT_14c8464e0;
            uStack_1f0 = DAT_14c8464e8;
            local_208 = DAT_14c846508;
            local_218 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
            uStack_210 = (undefined8 *)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
            (**(code **)(*(longlong *)(pcVar15 + 0x960) + 0x28))(pcVar15 + 0x960,&local_1f8);
            dVar22 = local_1e8 - param_3[2] * 500.0;
            pcVar13 = (code *)((double)local_1f8 - *param_3 * 500.0);
            pcVar1 = (code *)((double)uStack_1f0 - param_3[1] * 500.0);
            uVar20 = *(undefined4 *)(lVar17 + 0x7b0 + (ulonglong)param_7 * 4);
            cVar6 = FUN_1402096b0(*(longlong *)(param_1 + 0x1700));
            lVar14 = 0x11b8;
            if (cVar6 != '\0') {
              lVar14 = 0x11d0;
            }
            local_1d8 = *(undefined8 **)(*(longlong *)(param_1 + 0x1a00) + lVar14);
            uStack_1d0 = *(undefined4 *)(*(longlong *)(param_1 + 0x1a00) + 8 + lVar14);
            local_1c8 = 0.0;
            local_230 = (code *)((ulonglong)local_230 & 0xffffffff00000000);
            local_238 = (undefined1 *)((ulonglong)local_238 & 0xffffffff00000000);
            local_248 = (undefined2 *)0x0;
            local_250 = CONCAT44(local_250._4_4_,fVar19);
            local_258 = local_258 & 0xffffff00;
            local_268 = local_268 & 0xffffff00;
            local_260 = (code *)CONCAT71(local_260._1_7_,1);
            local_240 = (code *)&local_1a8;
            local_1a8 = pcVar13;
            uStack_1a0 = pcVar1;
            local_198 = dVar22;
            dVar22 = (double)FUN_1410a29b6(pcVar15,&local_1d8,uVar20,pcVar15 + 0x960);
            pcVar13 = pcVar15;
          }
        }
      }
      uVar20 = SUB84(pcVar13,0);
      lVar14 = *(longlong *)(param_1 + 0x1c8);
      if (lVar14 == 0) {
        local_1c8 = DAT_14c846508;
        uVar20 = (undefined4)DAT_14c8464f8;
        uVar21 = DAT_14c8464f8._4_4_;
        uStack_1d0 = (undefined4)DAT_14c846500;
        uStack_1cc = DAT_14c846500._4_4_;
      }
      else {
        pcVar13 = *(code **)(lVar14 + 0x240);
        pcVar15 = *(code **)(lVar14 + 0x248);
        dVar23 = *(double *)(lVar14 + 0x250);
        dVar25 = *(double *)(lVar14 + 600);
        pdVar10 = *(double **)(lVar14 + 0x228);
        local_1a8 = pcVar13;
        uStack_1a0 = pcVar15;
        local_198 = dVar23;
        uStack_190 = dVar25;
        if (pdVar10 == (double *)0x0) {
          uVar20 = 0x40;
          pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
          dVar22 = DAT_14c8463d8;
          *pdVar10 = DAT_14c8463d0;
          pdVar10[1] = dVar22;
          dVar22 = DAT_14c8463e8;
          pdVar10[2] = DAT_14c8463e0;
          pdVar10[3] = dVar22;
          dVar22 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar10[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar10[5] = dVar22;
          dVar22 = DAT_14c846508;
          pdVar10[6] = DAT_14c846508;
          *(double **)(lVar14 + 0x228) = pdVar10;
        }
        auVar4._8_4_ = (int)-(ulonglong)((double)pcVar15 != pdVar10[1]);
        auVar4._0_8_ = -(ulonglong)((double)pcVar13 != *pdVar10);
        auVar4._12_4_ = (int)(-(ulonglong)((double)pcVar15 != pdVar10[1]) >> 0x20);
        iVar7 = movmskpd(SUB84(dVar22,0),auVar4);
        auVar5._8_4_ = (int)-(ulonglong)(dVar25 != pdVar10[3]);
        auVar5._0_8_ = -(ulonglong)(dVar23 != pdVar10[2]);
        auVar5._12_4_ = (int)(-(ulonglong)(dVar25 != pdVar10[3]) >> 0x20);
        uVar11 = movmskpd(uVar20,auVar5);
        if ((uVar11 & 0x3fffffff) != 0 || iVar7 != 0) {
          *(undefined4 *)(pdVar10 + 2) = (undefined4)local_198;
          *(undefined4 *)((longlong)pdVar10 + 0x14) = local_198._4_4_;
          *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_190;
          *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_190._4_4_;
          *(undefined4 *)pdVar10 = (undefined4)local_1a8;
          *(undefined4 *)((longlong)pdVar10 + 4) = local_1a8._4_4_;
          *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_1a0;
          *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_1a0._4_4_;
          FUN_1448052ee(&local_1a8,&local_1d8);
          pdVar10[6] = local_1c8;
          pdVar10[4] = (double)local_1d8;
          pdVar10[5] = (double)CONCAT44(uStack_1cc,uStack_1d0);
        }
        local_1c8 = pdVar10[6];
        uVar20 = *(undefined4 *)(pdVar10 + 4);
        uVar21 = *(undefined4 *)((longlong)pdVar10 + 0x24);
        uStack_1d0 = *(undefined4 *)(pdVar10 + 5);
        uStack_1cc = *(undefined4 *)((longlong)pdVar10 + 0x2c);
      }
      local_1d8 = (undefined8 *)CONCAT44(uVar21,uVar20);
      FUN_140d2943c(&local_1d8,&local_1f8,param_3);
      dVar22 = (double)local_1f8 * (double)local_1f8 + (double)uStack_1f0 * (double)uStack_1f0;
      if ((dVar22 != 1.0) || (NAN(dVar22))) {
        dVar23 = DAT_14c8464f0;
        puVar18 = DAT_14c8464e8;
        puVar3 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar22) {
          puVar18 = (undefined8 *)((double)uStack_1f0 * (1.0 / SQRT(dVar22)));
          puVar3 = (undefined8 *)((double)local_1f8 * (1.0 / SQRT(dVar22)));
          dVar23 = 0.0;
        }
      }
      else {
        dVar23 = (double)(-(ulonglong)(local_1e8 == 0.0) & (ulonglong)local_1e8);
        puVar18 = uStack_1f0;
        puVar3 = local_1f8;
      }
      dVar22 = ABS((double)puVar3);
      dVar25 = ABS((double)puVar18);
      if (((9.999999747378752e-05 < dVar22) || (9.999999747378752e-05 < dVar25)) ||
         (9.999999747378752e-05 < ABS(dVar23))) {
        if (dVar22 <= dVar25) {
          dVar22 = dVar25;
        }
        dVar22 = 1.0 / dVar22;
        local_1e8 = (double)fVar19;
        local_1f8 = (undefined8 *)((double)puVar3 * dVar22 * local_1e8);
        uStack_1f0 = (undefined8 *)((double)puVar18 * dVar22 * local_1e8);
        local_1e8 = dVar23 * dVar22 * local_1e8;
        if (*(longlong *)(param_1 + 0x1710) != 0) {
          lVar14 = FUN_140963a30(lVar17 + 0x7b8);
          puVar18 = local_1f8;
          if (lVar14 != 0) {
            if (*(char *)(lVar17 + 0x7f4) == '\x01') {
              local_1f8 = uStack_1f0;
              uStack_1f0 = puVar18;
            }
            if (*(char *)(lVar17 + 0x7f5) == '\x01') {
              local_1f8 = (undefined8 *)((ulonglong)local_1f8 ^ 0x8000000000000000);
            }
            if (*(char *)(lVar17 + 0x7f6) == '\x01') {
              uStack_1f0 = (undefined8 *)((ulonglong)uStack_1f0 ^ 0x8000000000000000);
            }
            local_188 = 0;
            uStack_180 = 0;
            local_1a8 = (code *)0x0;
            uStack_1a0 = (code *)0x0;
            uStack_17c = 0x80;
            uStack_178 = 0xffffffff;
            uStack_174 = 0;
            local_168 = 0;
            local_160 = 0;
            local_1c0 = 0x18;
            local_1d8 = local_1f8;
            uStack_1d0 = (undefined4)uStack_1f0;
            uStack_1cc = uStack_1f0._4_4_;
            local_1c8 = local_1e8;
            local_1b8 = 4;
            local_218 = lVar17 + 0x7e0;
            uStack_210 = &local_1d8;
            FUN_140881f5a(&local_1a8,local_1dc,&local_218,0);
            pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_1b8 * 0x120));
            if (pcVar13 != (code *)0x0) {
              puVar18 = &local_1d8;
              if (0x18 < local_1c0) {
                puVar18 = local_1d8;
              }
              (*pcVar13)(puVar18);
            }
            if (0x18 < local_1c0) {
              FUN_1400020a8(local_1d8);
            }
            uVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1710) + 0x10e0) + 0x50))
                              (*(longlong *)(param_1 + 0x1710) + 0x10e0);
            uVar9 = FUN_140963a30(lVar17 + 0x7b8);
            FUN_14096df60(uVar8,uVar9,1,&local_1a8);
            local_160 = 0;
            if (local_168 != 0) {
              FUN_1400020a8();
            }
            FUN_140333f4e(&local_1a8);
          }
        }
      }
    }
  }
  local_1a8 = param_1;
  memcpy(&uStack_1a0,param_4,0x100);
  FUN_1447cd2ec(param_1 + 0x1e90,&local_1a8);
LAB_1401f3bfa:
  if ((local_90 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401f3da4 FUN_1401f3da4 body=19 status=ok
// SIG undefined FUN_1401f3da4(void)

void FUN_1401f3da4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1401f3db8();
  return;
}



// FUNCTION 1401f3db8 FUN_1401f3db8 body=150 status=ok
// SIG undefined FUN_1401f3db8(void)

undefined8 * FUN_1401f3db8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(int *)((longlong)param_2 + 0x14) == 0) ||
       (uVar1 = *(uint *)(param_2 + 2), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 == (longlong *)0x0 || ((int)plVar3[2] != *(int *)((longlong)param_2 + 0x14))) ||
      ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)))) {
    FUN_140005f6c(param_1,0,0,0);
  }
  else {
    lVar2 = *plVar3;
    FUN_140005f6c(param_1,lVar2,0,0);
    if (lVar2 != 0) {
      FUN_1449b16b6(lVar2,*param_1,*param_2,1);
    }
  }
  return param_1;
}



// FUNCTION 1401f3e4e FUN_1401f3e4e body=258 status=ok
// SIG undefined FUN_1401f3e4e(void)

void FUN_1401f3e4e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9eff80) {
    FUN_144b3d300(&DAT_14c9eff80);
    if (DAT_14c9eff80 == -1) {
      FUN_1456e3b00(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0xed;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9eff00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d261c7);
      _Init_thread_footer(&DAT_14c9eff80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f3f52 FUN_1401f3f52 body=289 status=ok
// SIG undefined FUN_1401f3f52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401f3f52(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ec1a8) {
    FUN_144b3d300(&DAT_14c9ec1a8);
    if (DAT_14c9ec1a8 == -1) {
      FUN_1401f3e4e();
      FUN_1456e34b2();
      FUN_140db5666(&DAT_14c9ec100,0,&DAT_14c9ec098,L"FBlurLightShaftsPixelShader",
                    L"/Engine/Private/LightShaftShader.usf",L"BlurLightShaftsMain",3,1,FUN_1471dc16a
                    ,FUN_1471dc10a,&LAB_1471dc0f2,&LAB_1471dc0ee,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9eff00);
      _DAT_14c9ec100 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cfe76b);
      _Init_thread_footer(&DAT_14c9ec1a8);
    }
  }
  return &DAT_14c9ec100;
}



// FUNCTION 1401f4073 FUN_1401f4073 body=404 status=ok
// SIG undefined FUN_1401f4073(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_1401f4073(ulonglong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined2 local_3d;
  undefined1 local_3b;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = DAT_14ca84d40;
  local_68 = DAT_14ca84d30;
  uStack_64 = _DAT_14ca84d34;
  uStack_60 = uRam000000014ca84d38;
  uStack_5c = uRam000000014ca84d3c;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  iVar4 = (int)*param_3;
  local_4c = DAT_14ca84e40;
  if (iVar4 < DAT_14ca84e40) {
    local_4c = iVar4;
  }
  if (local_4c < 2) {
    local_4c = 1;
  }
  iVar4 = (int)((ulonglong)*param_3 >> 0x20);
  local_48 = DAT_14ca84e40;
  if (iVar4 < DAT_14ca84e40) {
    local_48 = iVar4;
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  local_3e = 0;
  local_70 = 9;
  local_3d = 9;
  local_44 = 0x10001;
  local_40 = 0x101;
  local_50 = 0;
  local_3b = 0xff;
  if (local_48 < 2) {
    local_48 = 1;
  }
  uVar5 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar3 = uVar5 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar3) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
    uVar5 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar3 = uVar5 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar3;
  FUN_1456bbb8c(uVar5,param_4,&local_70,0);
  iVar4 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar4 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar4 * 8) = uVar5;
  *(int *)(uVar5 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  *param_1 = uVar5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 3) = 0;
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f4208 FUN_1401f4208 body=281 status=ok
// SIG undefined FUN_1401f4208(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401f4208(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ebf58) {
    FUN_144b3d300(&DAT_14c9ebf58);
    if (DAT_14c9ebf58 == -1) {
      FUN_1456e321e();
      FUN_140db5666(&DAT_14c9ebeb0,0,&DAT_14c9ebe48,L"FDownsampleLightShaftsVertexShader",
                    L"/Engine/Private/LightShaftShader.usf",L"DownsampleLightShaftsVertexMain",0,1,
                    FUN_1471dbfae,FUN_1471dbf4e,&LAB_1471dbf36,&LAB_1471dbf32,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14c9ebeb0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cfe753);
      _Init_thread_footer(&DAT_14c9ebf58);
    }
  }
  return &DAT_14c9ebeb0;
}



// FUNCTION 1401f4322 FUN_1401f4322 body=289 status=ok
// SIG undefined FUN_1401f4322(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401f4322(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ec080) {
    FUN_144b3d300(&DAT_14c9ec080);
    if (DAT_14c9ec080 == -1) {
      FUN_1401f4444();
      FUN_1456e3368();
      FUN_140db5666(&DAT_14c9ebfd8,0,&DAT_14c9ebf70,L"FDownsampleLightShaftsPixelShader",
                    L"/Engine/Private/LightShaftShader.usf",L"DownsampleLightShaftsPixelMain",3,2,
                    FUN_1471dc08c,FUN_1471dc02c,&LAB_1471dc014,&LAB_1471dc010,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9efdf0);
      _DAT_14c9ebfd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cfe75f);
      _Init_thread_footer(&DAT_14c9ec080);
    }
  }
  return &DAT_14c9ebfd8;
}



// FUNCTION 1401f4444 FUN_1401f4444 body=258 status=ok
// SIG undefined FUN_1401f4444(void)

void FUN_1401f4444(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9efe70) {
    FUN_144b3d300(&DAT_14c9efe70);
    if (DAT_14c9efe70 == -1) {
      FUN_1456e35fc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0xd6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9efdf0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d261af);
      _Init_thread_footer(&DAT_14c9efe70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f4547 FUN_1401f4547 body=5715 status=ok
// SIG undefined FUN_1401f4547(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_1401f4547(ulonglong *param_1,longlong param_2,longlong param_3,uint *param_4,longlong *param_5,
             longlong param_6)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined8 unaff_RBP;
  uint7 uVar23;
  undefined8 *puVar22;
  uint uVar24;
  longlong *plVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  bool bVar31;
  undefined8 *puVar32;
  bool bVar33;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  uint local_1f4;
  ulonglong *local_1f0;
  uint local_1e4;
  ulonglong local_1e0;
  longlong *local_1d8;
  ulonglong *local_1d0;
  ulonglong local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  uint *local_1b0;
  uint *local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  ulonglong local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_171;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 local_120;
  ulonglong local_118;
  byte local_109;
  uint *local_108;
  longlong *local_100;
  byte *pbStack_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulonglong *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  uint *puStack_90;
  undefined *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_65;
  undefined1 local_63;
  ulonglong local_60;
  
  plVar25 = DAT_14ca27dc8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1d0 = param_1;
  if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
    iVar9 = FUN_140052f36(DAT_14ca27dc8);
    if (iVar9 == 0) {
      plVar25 = plVar25 + 0xb;
    }
    else {
      plVar25 = (longlong *)plVar25[10];
    }
    uVar10 = (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(char)*plVar25);
  }
  else {
    uVar10 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
  }
  uVar11 = *param_4;
  local_1f4 = CONCAT31(local_1f4._1_3_,uVar11 - 5 < 2);
  bVar33 = true;
  local_109 = 1;
  if (((longlong *)*param_5 != (longlong *)0x0) && (*(char *)(param_3 + 0x23cc) == '\0')) {
    lVar14 = (**(code **)(*(longlong *)*param_5 + 0x10))();
    local_109 = *(byte *)(lVar14 + 0x3b) & 1;
  }
  FUN_142f2d6a2(param_4,&local_118);
  local_180 = *(ulonglong *)(param_4 + 2);
  local_1c8 = *(ulonglong *)(param_4 + 4);
  local_128 = *(ulonglong *)(param_4 + 6);
  local_120 = *(undefined8 *)(param_4 + 8);
  uVar24 = param_4[10];
  local_188 = local_1c8 >> 0x20;
  local_190 = local_180 >> 0x20;
  local_138 = (longlong)((ulonglong)(uint)((int)local_180 >> 0x1f) << 0x20 | local_180 & 0xffffffff)
              / (longlong)(int)uVar24 & 0xffffffffU |
              (longlong)((ulonglong)(uint)((longlong)local_180 >> 0x3f) << 0x20 | local_190) /
              (longlong)(int)uVar24 << 0x20;
  local_130 = (longlong)(int)(uVar24 + (int)local_1c8 + -1) / (longlong)(int)uVar24 & 0xffffffffU |
              (longlong)(int)((int)(local_1c8 >> 0x20) + uVar24 + -1) / (longlong)(int)uVar24 <<
              0x20;
  uVar18 = (ulonglong)(uint)((longlong)local_128 >> 0x3f) << 0x20 | local_128 >> 0x20;
  local_148 = (longlong)((ulonglong)(uint)((int)local_128 >> 0x1f) << 0x20 | local_128 & 0xffffffff)
              / (longlong)(int)uVar24 & 0xffffffffU |
              (longlong)uVar18 / (longlong)(int)uVar24 << 0x20;
  local_140 = (longlong)(int)(uVar24 + (int)local_120 + -1) / (longlong)(int)uVar24 & 0xffffffffU |
              (longlong)(int)(uVar24 + (int)((ulonglong)local_120 >> 0x20) + -1) /
              (longlong)(int)uVar24 << 0x20;
  uVar21 = *param_4;
  *local_1d0 = 0;
  local_1d0[1] = 0;
  local_1d0[2] = 0;
  lVar14 = DAT_14ca35c68;
  local_1b8 = param_3;
  local_1a8 = param_4;
  if ((&DAT_14ca814b8)
      [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) * 0xf] == 1
     ) {
    iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar9 == 0x40000002) {
      uVar18 = 0;
    }
    else {
      bVar33 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar9 != 2)) {
        if (iVar9 == 1) {
          DVar12 = FUN_140ad26c0(1,(longlong)uVar18 % (longlong)(int)uVar24 & 0xffffffff);
          DVar13 = GetCurrentThreadId();
          bVar33 = DVar12 == DVar13;
        }
        else {
          bVar33 = false;
        }
      }
      uVar18 = (ulonglong)(bVar33 ^ 1);
    }
    bVar33 = 0 < *(int *)(lVar14 + uVar18 * 4);
  }
  uVar18 = local_118;
  local_1e0 = CONCAT71(local_1e0._1_7_,10);
  if ((uVar11 < 3) && ((local_1a8[1] & 0xfe) != 2 && (byte)uVar10 == 0)) {
    local_1e0 = CONCAT71(local_1e0._1_7_,(*(int *)(DAT_14ca35c38 + 4) != 0) << 4) | 10;
  }
  local_1f4 = CONCAT31(local_1f4._1_3_,(byte)local_1f4 & (byte)uVar10);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,DAT_14ca83a40);
  local_98 = _DAT_14ca83a30;
  puStack_90 = (uint *)_DAT_14ca83a38;
  local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,~(-1 << ((byte)DAT_14c760da4 & 0x1f)));
  local_198 = (undefined8 *)CONCAT71(local_198._1_7_,bVar33);
  local_1b0 = (uint *)0x9;
  if (bVar33 != false) {
    local_1b0 = (uint *)((ulonglong)((byte)(~bVar33 | *(byte *)((longlong)local_1a8 + 5)) & 1) |
                        0x20008);
  }
  local_1c0 = (longlong *)(&DAT_14a2c7abc + *(int *)(&DAT_14a2c7abc + (ulonglong)uVar21 * 4));
  local_1a0 = param_2 + 0x178;
  local_1f0 = (ulonglong *)(param_2 + 0x70);
  puVar16 = &local_a8;
  bVar33 = true;
  local_1e4 = uVar10;
  do {
    bVar31 = bVar33;
    uVar29 = local_d8;
    puVar6 = local_1f0;
    local_108 = local_1b0;
    local_d8 = (undefined8 *)((local_1e0 & 0xff) << 0x18);
    local_d8 = (undefined8 *)CONCAT62(local_d8._2_6_,0x101);
    uVar8 = local_d8;
    local_100 = local_98;
    pbStack_f8 = (byte *)puStack_90;
    uVar11 = (uint)uVar18;
    uVar10 = DAT_14ca84e40;
    if ((int)uVar11 < (int)DAT_14ca84e40) {
      uVar10 = uVar11;
    }
    if ((int)uVar10 < 2) {
      uVar10 = 1;
    }
    local_d8._6_2_ = SUB82(uVar29,6);
    local_d8._0_6_ = CONCAT15(0xff,(int5)uVar8);
    uVar21 = (uint)(uVar18 >> 0x20);
    uVar24 = DAT_14ca84e40;
    if ((int)uVar21 < (int)DAT_14ca84e40) {
      uVar24 = uVar21;
    }
    local_f0 = CONCAT44(local_1d8._0_4_,(int)local_88);
    if ((int)uVar24 < 2) {
      uVar24 = 1;
    }
    local_e8 = (undefined8 *)((ulonglong)uVar10 << 0x20);
    local_e0 = (ulonglong *)CONCAT44(0x10001,uVar24);
    uVar30 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar26 = uVar30 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar26) {
      FUN_140023dd8(local_1f0,0x128);
      uVar30 = *puVar6 + 7 & 0xfffffffffffffff8;
      uVar26 = uVar30 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar26;
    FUN_1456bbb8c(uVar30,local_1c0,&local_108);
    iVar9 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
      FUN_14472c0f6(local_1a0,iVar9);
    }
    uVar29 = local_d8;
    puVar7 = local_1a8;
    lVar14 = local_1b8;
    puVar6 = local_1f0;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar30;
    *(int *)(uVar30 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    *puVar16 = uVar30;
    puVar16 = &local_a0;
    bVar33 = false;
  } while (bVar31);
  *local_1d0 = local_a8;
  if ((byte)local_1f4 != '\0') {
    local_1d0[1] = local_a0;
  }
  if (*(char *)((longlong)local_1a8 + 6) == '\x01') {
    local_108 = (uint *)(DAT_14ca4ae88 | 0x20008);
    bVar3 = *(byte *)((longlong)local_1a8 + 7);
    if (bVar3 == 0) {
      bVar3 = *(byte *)(*(longlong *)(local_1a8 + 0x10) + 0x93);
    }
    uVar10 = (int)(((uint)(uVar18 >> 0x1f) & 1) + uVar11) >> 1;
    local_100 = _DAT_14ca83a30;
    pbStack_f8 = (byte *)_DAT_14ca83a38;
    local_d8._6_2_ = SUB82(uVar29,6);
    local_d8._0_6_ = CONCAT24(0xff00,(uint)bVar3 << 0x18);
    local_d8 = (undefined8 *)CONCAT62(local_d8._2_6_,0x101);
    if ((int)DAT_14ca84e40 <= (int)uVar10) {
      uVar10 = DAT_14ca84e40;
    }
    if ((int)uVar10 < 2) {
      uVar10 = 1;
    }
    uVar11 = (int)uVar21 / 2;
    if ((int)DAT_14ca84e40 <= (int)uVar21 / 2) {
      uVar11 = DAT_14ca84e40;
    }
    local_f0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if ((int)uVar11 < 2) {
      uVar11 = 1;
    }
    local_e8 = (undefined8 *)((ulonglong)uVar10 << 0x20);
    local_e0 = (ulonglong *)CONCAT44(0x10001,uVar11);
    uVar30 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar26 = uVar30 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar26) {
      FUN_140023dd8(local_1f0,0x128);
      uVar30 = *puVar6 + 7 & 0xfffffffffffffff8;
      uVar26 = uVar30 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar26;
    FUN_1456bbb8c(uVar30,L"SceneColorHalfRes",&local_108);
    iVar9 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
      FUN_14472c0f6(local_1a0,iVar9);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar30;
    *(int *)(uVar30 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    local_1d0[2] = uVar30;
  }
  puVar16 = local_1f0;
  local_150 = *(undefined8 *)(*(longlong *)(puVar7 + 0x10) + 0x84);
  local_e8 = &local_150;
  local_160 = *(undefined8 *)(puVar7 + 2);
  local_d8 = &local_160;
  local_158 = *(undefined8 *)(puVar7 + 4);
  local_170 = *(undefined8 *)(puVar7 + 6);
  local_d0 = &local_170;
  local_168 = *(undefined8 *)(puVar7 + 8);
  local_108 = puVar7;
  local_100 = (longlong *)lVar14;
  pbStack_f8 = &local_109;
  local_e0 = &local_138;
  local_c8 = &local_148;
  local_c0 = &local_a8;
  local_b8 = param_5;
  local_b0 = &local_128;
  uVar10 = *puVar7;
  bVar3 = (byte)puVar7[1];
  uVar23 = (uint7)(uVar18 >> 0x28);
  uVar11 = (uint)CONCAT71(uVar23,bVar3);
  local_f0 = param_2;
  if ((char)local_198 == '\0') {
    iVar9 = 0;
    if ((uVar10 < 7) && (iVar9 = 0, (0x46U >> (uVar10 & 0x1f) & 1) != 0)) {
      iVar19 = (int)local_1c8 - (int)local_180;
      iVar28 = (int)local_120 - (int)local_128;
      iVar9 = 0x40;
      if (iVar28 < iVar19) goto LAB_1401f4d90;
      iVar20 = (int)local_188 - (int)local_190;
      iVar27 = local_120._4_4_ - local_128._4_4_;
      if (iVar27 < iVar20) goto LAB_1401f4d90;
      iVar19 = iVar19 * 100;
      if (((iVar28 * 0x32 <= iVar19) || (uVar10 != 2)) ||
         (iVar9 = 0x60, iVar27 * 0x32 <= iVar20 * 100)) {
        iVar9 = 0;
        if (iVar19 < iVar28 * 0x47) {
          iVar9 = (uint)(iVar20 * 100 < iVar27 * 0x47) << 5;
        }
        goto LAB_1401f4d90;
      }
    }
    else {
LAB_1401f4d90:
      if ((6 < uVar10) || ((0x67U >> (uVar10 & 0x1f) & 1) == 0)) {
        local_1e4 = 0;
      }
    }
    puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar32 + 0x5a;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_1f0,0x2e0);
      puVar32 = (undefined8 *)(*puVar16 + 0xf & 0xfffffffffffffff0);
      puVar17 = puVar32 + 0x5a;
    }
    *local_1f0 = (ulonglong)puVar17;
    *puVar32 = &PTR_FUN_14a2d2ce8;
    plVar25 = puVar32 + 2;
    FUN_142f567e0(plVar25);
    lVar15 = 0x1d0;
    do {
      *(undefined1 (*) [16])((longlong)puVar32 + lVar15) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar32 + lVar15 + 0x10) = 0xffff0000;
      lVar15 = lVar15 + 0x18;
    } while (lVar15 != 0x290);
    *(undefined4 *)((longlong)puVar32 + 0x2a4) = 0;
    puVar32[0x52] = 0;
    puVar32[0x53] = 0;
    *(undefined2 *)(puVar32 + 0x54) = 0;
    *(undefined4 *)(puVar32 + 0x55) = 0xffffffff;
    *(undefined4 *)((longlong)puVar32 + 0x2ac) = 0xffffffff;
    *(undefined4 *)(puVar32 + 0x56) = 0xffffffff;
    *(undefined4 *)((longlong)puVar32 + 0x2b4) = 0xffffffff;
    *(undefined4 *)(puVar32 + 0x57) = 0;
    *(undefined2 *)((longlong)puVar32 + 700) = 0;
    puVar32[0x58] = 0;
    iVar28 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar28 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar28 + 1U) {
      FUN_1448cfae8(param_2 + 0x98,iVar28);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar28 * 8) = puVar32;
    FUN_142f2d7aa(&local_108,plVar25);
    puVar32[0x3a] = *local_1d0;
    puVar32[0x3b] = 0;
    *(undefined4 *)(puVar32 + 0x3c) = 0xffff0002;
    uVar29 = *(undefined8 *)(lVar14 + 0x13818);
    uVar11 = local_1e4 & 0xff;
    FUN_142f2d222();
    FUN_1448e935e(uVar29,&local_98,&DAT_14ca36b50,uVar11 + (uVar10 + (uint)bVar3 * 8 + iVar9) * 2);
    FUN_142f2d222();
    plVar5 = local_98;
    local_1e0 = (ulonglong)puStack_90;
    local_1d8 = *(longlong **)(lVar14 + 0x13818);
    FUN_142f48f2e();
    local_98 = (longlong *)0x0;
    puStack_90 = (uint *)0x0;
    FUN_1448f70da(plVar5,&DAT_14ca36c00,plVar25,&local_98);
    uVar26 = local_140;
    uVar18 = local_148;
    FUN_142f48f2e();
    FUN_140069376(param_2);
    puVar16 = local_1f0;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar22 + 0x41;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_1f0,0x210);
      puVar22 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar22 + 0x41;
    }
    *local_1f0 = (ulonglong)puVar17;
    puStack_90 = (uint *)DAT_14ca36c48;
    if (DAT_14ca36c48 != 0) {
      LOCK();
      *(int *)(DAT_14ca36c48 + 8) = *(int *)(DAT_14ca36c48 + 8) + 1;
      UNLOCK();
    }
    local_88 = &DAT_14ca36c00;
    local_208 = 2;
    local_98 = plVar25;
    FUN_140068f1a(puVar22,&local_171,&local_98,1);
    *puVar22 = &PTR_FUN_14a2d2cf0;
    puVar22[0x37] = plVar25;
    puVar22[0x38] = local_1d8;
    puVar22[0x39] = plVar5;
    puVar22[0x3a] = local_1e0;
    puVar22[0x3b] = uVar18;
    puVar22[0x3c] = uVar26;
    *(undefined1 (*) [16])(puVar22 + 0x3d) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)puVar22 + 500) = (undefined1  [16])0x0;
    iVar9 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar9 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar9 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar22);
    uVar18 = puVar32[0x2e];
    local_1e0 = puVar32[0x2f];
    goto LAB_1401f583d;
  }
  local_1c0 = (longlong *)0x0;
  uVar24 = local_1e4;
  if ((uVar10 < 7) && ((0x46U >> (uVar10 & 0x1f) & 1) != 0)) {
    iVar28 = (int)local_1c8 - (int)local_180;
    iVar9 = (int)local_120 - (int)local_128;
    local_1c0 = (longlong *)0x2;
    if (iVar9 < iVar28) goto LAB_1401f50f0;
    iVar27 = (int)local_188 - (int)local_190;
    iVar19 = local_120._4_4_ - local_128._4_4_;
    if (iVar19 < iVar27) goto LAB_1401f50f0;
    iVar28 = iVar28 * 100;
    if (((iVar9 * 0x32 <= iVar28) || (uVar10 != 2)) || (iVar19 * 0x32 <= iVar27 * 100)) {
      local_1c0 = (longlong *)0x0;
      if (iVar28 < iVar9 * 0x47) {
        local_1c0 = (longlong *)(ulonglong)(iVar27 * 100 < iVar19 * 0x47);
      }
      goto LAB_1401f50f0;
    }
    local_1f4 = 0;
    local_1c0 = (longlong *)0x3;
    uVar11 = (uint)CONCAT71(uVar23,2);
  }
  else {
LAB_1401f50f0:
    if (uVar10 - 5 < 2) {
      uVar11 = 1;
      if (1 < bVar3) {
        uVar11 = (uint)bVar3;
      }
LAB_1401f5123:
      local_1f4 = 0;
    }
    else {
      if (1 < uVar10) {
        uVar11 = (uint)CONCAT71(uVar23,2);
        goto LAB_1401f5123;
      }
      local_1f4 = (uint)*(byte *)((longlong)puVar7 + 6);
      if (bVar3 == 2) {
        local_1f4 = 0;
      }
    }
    if ((6 < uVar10) || ((0x67U >> (uVar10 & 0x1f) & 1) == 0)) {
      uVar24 = 0;
    }
  }
  puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar17 = puVar32 + 0x3e;
  local_1e0 = (ulonglong)uVar10;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_1f0,0x200);
    puVar32 = (undefined8 *)(*puVar16 + 0xf & 0xfffffffffffffff0);
    puVar17 = puVar32 + 0x3e;
  }
  local_1b0 = (uint *)CONCAT44(local_1b0._4_4_,uVar11);
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  *puVar32 = &PTR_FUN_14a2d2cc0;
  plVar25 = puVar32 + 2;
  local_1e4 = uVar24;
  FUN_142f567e0(plVar25);
  *(undefined1 (*) [16])(puVar32 + 0x3a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar32 + 0x3c) = (undefined1  [16])0x0;
  iVar9 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar9 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar9 * 8) = puVar32;
  local_1d8 = plVar25;
  local_198 = puVar32;
  FUN_142f2d7aa(&local_108,plVar25);
  local_1c8 = param_2 + 0x198;
  puVar16 = &local_a8;
  lVar14 = 0;
  bVar33 = true;
  do {
    bVar31 = bVar33;
    puVar6 = local_1f0;
    uVar18 = *puVar16;
    uVar4 = *(undefined1 *)(uVar18 + 0x94);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar22 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_1f0,0x50);
      puVar22 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar22 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    puVar22[1] = *(undefined8 *)(uVar18 + 8);
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 0;
    *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar22 + 5) = 0;
    *puVar22 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar22 + 6) = uVar4;
    *(undefined1 *)(puVar22 + 7) = 0;
    *(undefined4 *)((longlong)puVar22 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar22 + 0x35) = 0;
    puVar22[8] = uVar18;
    iVar9 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
      FUN_1447568fc(local_1c8,iVar9);
    }
    puVar17 = local_198;
    lVar15 = local_1b8;
    puVar6 = local_1f0;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar32[lVar14 + 0x3a] = puVar22;
    lVar14 = 1;
    puVar16 = &local_a0;
    bVar33 = false;
  } while (bVar31);
  uVar18 = local_1d0[2];
  if (uVar18 != 0) {
    uVar4 = *(undefined1 *)(uVar18 + 0x94);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar32 = puVar22 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
      FUN_140023dd8(local_1f0,0x50);
      puVar22 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar32 = puVar22 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar32;
    puVar22[1] = *(undefined8 *)(uVar18 + 8);
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 0;
    *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar22 + 5) = 0;
    *puVar22 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar22 + 6) = uVar4;
    *(undefined1 *)(puVar22 + 7) = 0;
    *(undefined4 *)((longlong)puVar22 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar22 + 0x35) = 0;
    puVar22[8] = uVar18;
    iVar9 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
      FUN_1447568fc(local_1c8,iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar17[0x3c] = puVar22;
  }
  puVar16 = local_1f0;
  local_80 = DAT_14ca85098;
  local_74 = DAT_14ca84e40;
  if ((int)(uint)local_118 < (int)DAT_14ca84e40) {
    local_74 = (uint)local_118;
  }
  if ((int)local_74 < 2) {
    local_74 = 1;
  }
  uVar10 = (uint)(local_118 >> 0x20);
  local_70 = DAT_14ca84e40;
  if ((int)uVar10 < (int)DAT_14ca84e40) {
    local_70 = uVar10;
  }
  puStack_90 = _DAT_14ca85088;
  local_88 = (undefined *)_DAT_14ca85090;
  local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_66 = 0;
  local_98 = (longlong *)&DAT_00020008;
  local_65 = 10;
  local_6c = 0x10001;
  local_68 = 0x101;
  local_78 = 0;
  local_63 = 0xff;
  if ((int)local_70 < 2) {
    local_70 = 1;
  }
  uVar26 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar18 = uVar26 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar18) {
    FUN_140023dd8(local_1f0,0x128);
    uVar26 = *puVar16 + 7 & 0xfffffffffffffff8;
    uVar18 = uVar26 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar18;
  FUN_1456bbb8c(uVar26,L"Debug.TAA",&local_98,0);
  iVar9 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
    FUN_14472c0f6(local_1a0,iVar9);
  }
  puVar16 = local_1f0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar26;
  *(int *)(uVar26 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uVar4 = *(undefined1 *)(uVar26 + 0x94);
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar32 = puVar22 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
    FUN_140023dd8(local_1f0,0x50);
    puVar22 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
    puVar32 = puVar22 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar32;
  puVar22[1] = *(undefined8 *)(uVar26 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 0;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar22 + 5) = 0;
  *puVar22 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar22 + 6) = uVar4;
  *(undefined1 *)(puVar22 + 7) = 0;
  *(undefined4 *)((longlong)puVar22 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar22 + 0x35) = 0;
  puVar22[8] = uVar26;
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_1c8,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar17[0x3d] = puVar22;
  uVar29 = *(undefined8 *)(lVar15 + 0x13818);
  uVar10 = local_1f4 & 0xff;
  iVar9 = (int)local_1c0;
  uVar18 = (ulonglong)local_1b0 & 0xff;
  iVar28 = (int)local_1e0;
  uVar11 = local_1e4 & 0xff;
  FUN_142f2d462();
  FUN_1448e935e(uVar29,&local_98,&DAT_14ca36da8,
                (int)(uVar18 << 4) + iVar28 * 2 + (iVar9 + uVar10 * 4) * 0x40 | uVar11);
  FUN_142f2d462();
  plVar5 = local_98;
  local_1b0 = puStack_90;
  FUN_142f4a996();
  plVar25 = local_1d8;
  local_98 = (longlong *)0x0;
  puStack_90 = (uint *)0x0;
  FUN_1448f70da(plVar5,&DAT_14ca36e58,local_1d8,&local_98);
  uVar18 = puVar17[0x2e];
  local_1e0 = puVar17[0x2f];
  iVar9 = (local_140._4_4_ - local_148._4_4_) + 7;
  iVar28 = (local_140._4_4_ - local_148._4_4_) + 0xe;
  if (-1 < iVar9) {
    iVar28 = iVar9;
  }
  iVar9 = ((int)local_140 - (int)local_148) + 7;
  iVar19 = ((int)local_140 - (int)local_148) + 0xe;
  if (-1 < iVar9) {
    iVar19 = iVar9;
  }
  FUN_142f4a996();
  local_98 = (longlong *)0x0;
  puStack_90 = (uint *)0x0;
  local_1c0 = plVar5;
  FUN_1448f70da(plVar5,&DAT_14ca36e58,plVar25,&local_98);
  FUN_140069376(param_2);
  lVar14 = local_1b8;
  puVar16 = local_1f0;
  uVar29 = 2;
  if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
     ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
    uVar29 = 4;
  }
  puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar32 + 0x3d;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_1f0,0x1f0);
    puVar32 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar32 + 0x3d;
  }
  *local_1f0 = (ulonglong)puVar17;
  local_98 = plVar25;
  puStack_90 = (uint *)DAT_14ca36ea0;
  if (DAT_14ca36ea0 != 0) {
    LOCK();
    *(int *)(DAT_14ca36ea0 + 8) = *(int *)(DAT_14ca36ea0 + 8) + 1;
    UNLOCK();
  }
  local_88 = &DAT_14ca36e58;
  local_208 = 2;
  FUN_140068f1a(puVar32,&local_171,&local_98,uVar29);
  *puVar32 = &PTR_FUN_14a2d2cd0;
  puVar32[0x37] = &DAT_14ca36e58;
  puVar32[0x38] = plVar25;
  puVar32[0x39] = local_1c0;
  puVar32[0x3a] = local_1b0;
  *(int *)(puVar32 + 0x3b) = iVar19 >> 3;
  *(int *)((longlong)puVar32 + 0x1dc) = iVar28 >> 3;
  *(undefined4 *)(puVar32 + 0x3c) = 1;
  iVar9 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar9 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar9 * 8) = puVar32;
  *(int *)((longlong)puVar32 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar32);
LAB_1401f583d:
  if ((*(byte *)(lVar14 + 0x125b0) & 1) == 0) {
    FUN_142f2e58a(param_6);
    pcVar1 = (char *)(param_2 + 0x4a8);
    local_1d8 = (longlong *)(param_2 + 0x4b0);
    lVar14 = 0;
    puVar16 = &local_a8;
    bVar33 = true;
    do {
      bVar31 = bVar33;
      if (uVar18 != 0) {
        plVar25 = (longlong *)(param_6 + lVar14 * 8);
        uVar18 = *puVar16;
        plVar5 = (longlong *)*plVar25;
        if (plVar5 != (longlong *)0x0) {
          *plVar25 = 0;
          (**(code **)(*plVar5 + 0x38))();
        }
        bVar3 = *(byte *)(uVar18 + 0x24);
        *(byte *)(uVar18 + 0x24) = bVar3 | 2;
        *(undefined1 *)(uVar18 + 0x26) = 1;
        iVar9 = *(int *)(param_2 + 0x1c0);
        *(uint *)(param_2 + 0x1c0) = iVar9 + 1U;
        if (*(uint *)(param_2 + 0x1c4) < iVar9 + 1U) {
          FUN_14017e38e((longlong *)(param_2 + 0x1b8),iVar9);
        }
        lVar14 = *(longlong *)(param_2 + 0x1b8);
        *(ulonglong *)(lVar14 + (longlong)iVar9 * 0x10) = uVar18;
        *(longlong **)(lVar14 + 8 + (longlong)iVar9 * 0x10) = plVar25;
        if ((bVar3 & 2) == 0) {
          LOCK();
          cVar2 = *pcVar1;
          if (cVar2 == '\0') {
            *pcVar1 = '\x01';
          }
          UNLOCK();
          if (cVar2 != '\0') {
            FUN_1447d2058();
          }
          iVar9 = *(int *)(param_2 + 0x4b8);
          *(uint *)(param_2 + 0x4b8) = iVar9 + 1U;
          if (*(uint *)(param_2 + 0x4bc) < iVar9 + 1U) {
            FUN_1447f2dbc(local_1d8,iVar9);
          }
          lVar14 = *local_1d8;
          *(undefined8 *)(lVar14 + (longlong)iVar9 * 0x10) = 2;
          *(ulonglong *)(lVar14 + 8 + (longlong)iVar9 * 0x10) = uVar18;
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
      lVar14 = 1;
      puVar16 = &local_a0;
      uVar18 = local_1e0;
      bVar33 = false;
    } while (bVar31);
    *(ulonglong *)(param_6 + 0x18) = local_128;
    *(undefined8 *)(param_6 + 0x20) = local_120;
    *(ulonglong *)(param_6 + 0x10) =
         CONCAT44((int)(local_118 >> 0x20) * local_1a8[10],(int)local_118 * local_1a8[10]);
  }
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_1d0;
}



// FUNCTION 1401f5b9c FUN_1401f5b9c body=88 status=ok
// SIG undefined FUN_1401f5b9c(void)

void FUN_1401f5b9c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401f5bf4(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1401f5dc4(param_1 + 0x10,0);
  return;
}



// FUNCTION 1401f5bf4 FUN_1401f5bf4 body=14 status=ok
// SIG undefined FUN_1401f5bf4(void)

void FUN_1401f5bf4(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1401f5c02();
    return;
  }
  return;
}



// FUNCTION 1401f5c02 FUN_1401f5c02 body=450 status=ok
// SIG undefined FUN_1401f5c02(void)

void FUN_1401f5c02(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1401f5d1d:
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
LAB_1401f5d5a:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401f5c58;
LAB_1401f5c4d:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401f5c58:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x0001401f5c84;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1401f5cda:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401f5d5a;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401f5d1d;
code_r0x0001401f5c84:
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
      goto LAB_1401f5cda;
    }
  }
  goto LAB_1401f5c4d;
}



// FUNCTION 1401f5dc4 FUN_1401f5dc4 body=192 status=ok
// SIG undefined FUN_1401f5dc4(void)

void FUN_1401f5dc4(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_2 + 0x1fU >> 5;
  uVar6 = *(int *)((longlong)param_1 + 0x1c) + 0x1f;
  pvVar4 = *(void **)((longlong)param_1 + 0x10);
  if (uVar6 < 0xa0) {
    if (pvVar4 == (void *)0x0) goto LAB_1401f5e1a;
    memmove(param_1,pvVar4,(ulonglong)(uVar5 << 2));
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = uVar6 >> 5;
    if (pvVar4 == (void *)0x0) {
      FUN_140064110((longlong)param_1 + 0x10,0,uVar6,4);
      memmove(*(void **)((longlong)param_1 + 0x10),param_1,(ulonglong)(uVar5 << 2));
      goto LAB_1401f5e1a;
    }
  }
  FUN_140064110((longlong)param_1 + 0x10,uVar5,uVar6,4);
LAB_1401f5e1a:
  iVar1 = *(int *)((longlong)param_1 + 0x18);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    pvVar4 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar4 = param_1;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
         (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 1401f5e84 FUN_1401f5e84 body=83 status=ok
// SIG undefined FUN_1401f5e84(void)

void FUN_1401f5e84(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1401f5ed8();
  uVar1 = FUN_14001cc68(0x308,0x10);
  FUN_14009016e(uVar1,*(undefined4 *)(param_2 + 0x17c),0);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  FUN_14002049c(uVar1,1);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x78);
  return;
}



// FUNCTION 1401f5ed8 FUN_1401f5ed8 body=185 status=ok
// SIG undefined FUN_1401f5ed8(void)

void FUN_1401f5ed8(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBX;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(lVar1 + 0x2a0) == -1) {
    if (*(char *)(param_1 + 0x4d) == '\x01') {
      FUN_1472d9fee(lVar1 + 600);
    }
  }
  else {
    FUN_1472da8a8(lVar1 + 0x298);
    FUN_1472da846(*(longlong *)(param_1 + 0x38) + 0x298,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x4c8));
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((*(char *)(lVar1 + 0x6d9) == '\x01') &&
     (*(char *)(*(longlong *)(param_1 + 0x30) + 0x23e8) == '\0')) {
    uVar3 = (undefined4)
            CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                     *(int *)(*(longlong *)(param_1 + 0x30) + 0x1dd0) != 0);
  }
  else {
    uVar3 = 0;
  }
  uVar2 = FUN_1403fb1aa(*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8));
  FUN_14177e184(lVar1 + 0x188,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x4c8),uVar2,uVar3);
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x21d8) = 0;
  return;
}



// FUNCTION 1401f5f92 FUN_1401f5f92 body=11 status=ok
// SIG undefined FUN_1401f5f92(void)

void FUN_1401f5f92(longlong param_1)

{
  FUN_1448e9c5c(param_1,*(undefined4 *)(param_1 + 0x90));
  return;
}



// FUNCTION 1401f5f9d FUN_1401f5f9d body=56 status=ok
// SIG undefined FUN_1401f5f9d(void)

void FUN_1401f5f9d(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x10);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401f5fd6 FUN_1401f5fd6 body=68 status=ok
// SIG undefined FUN_1401f5fd6(void)

void FUN_1401f5fd6(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1401f6286();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1401f601a FUN_1401f601a body=141 status=ok
// SIG undefined FUN_1401f601a(void)

void FUN_1401f601a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1401f6468(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1456e3d92(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1456e3cfe(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1401f60a8 FUN_1401f60a8 body=477 status=ok
// SIG undefined FUN_1401f60a8(void)

void FUN_1401f60a8(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar11 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar9;
    if (uVar15 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar11 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar14 == uVar11) goto LAB_1401f6200;
        iVar12 = iVar12 + 0x20;
        uVar15 = puVar9[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar15 = 0xffffffff;
    do {
      lVar13 = *param_1;
      plVar4 = *(longlong **)(lVar13 + 0x18 + (longlong)iVar5 * 0x40);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      plVar4 = *(longlong **)(lVar13 + (longlong)iVar5 * 0x40 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)uVar11;
      lVar13 = (longlong)iVar5;
      uVar6 = puVar9[lVar13] & uVar15;
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
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar6 = puVar9[lVar13 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar13 == lVar10) goto LAB_1401f6200;
        }
        uVar11 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
LAB_1401f6200:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 1401f6286 FUN_1401f6286 body=481 status=ok
// SIG undefined FUN_1401f6286(void)

void FUN_1401f6286(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar8 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar11 = 0;
      uVar13 = 1;
      iVar8 = 0;
      iVar10 = 0;
    }
    else {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar11 = 0;
        iVar10 = 0;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar9 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x14 + (longlong)iVar8 * 0x18) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar13 & uVar9;
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar8 = (int)uVar11;
        lVar14 = (longlong)iVar8;
        uVar7 = puVar12[lVar14] & uVar9;
        if (uVar7 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            iVar6 = iVar8;
          }
          if (iVar8 < iVar5) {
            lVar15 = 0;
            do {
              uVar7 = puVar12[lVar14 + lVar15 + 1];
              if (uVar7 != 0) {
                uVar11 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_1401f63cf;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar6 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            iVar8 = iVar6;
          }
          uVar11 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_1401f63cf:
          uVar13 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar14 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar14 * 4) = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 1401f6468 FUN_1401f6468 body=269 status=ok
// SIG undefined FUN_1401f6468(void)

void FUN_1401f6468(longlong param_1,int param_2)

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



// FUNCTION 1401f6576 FUN_1401f6576 body=147 status=ok
// SIG undefined FUN_1401f6576(void)

void FUN_1401f6576(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  plVar4 = *(longlong **)(param_2 + 0x28);
  if (plVar4 == (longlong *)0x0) {
    param_1[1] = lVar3;
    plVar5 = (longlong *)param_1[2];
    if (plVar5 == (longlong *)0x0) goto LAB_1401f65ad;
    param_1[2] = 0;
LAB_1401f65cf:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1401f65ad;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[1] = lVar3;
    plVar5 = (longlong *)param_1[2];
    if (plVar4 != plVar5) {
      param_1[2] = (longlong)plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_1401f65ad;
      goto LAB_1401f65cf;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1401f65ad;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1401f65ad:
  *param_1 = param_2;
  return;
}



// FUNCTION 1401f660a FUN_1401f660a body=235 status=ok
// SIG undefined FUN_1401f660a(void)

void FUN_1401f660a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = FUN_1401f66f6(param_2);
  *(int *)(param_1 + 0x30) = iVar1;
  uVar6 = iVar1 + 0x1f;
  if (0x1f < uVar6) {
    uVar5 = uVar6 >> 5;
    if (*(int *)(param_1 + 0x34) + 0x1fU >> 5 < uVar5) {
      if ((0x9f < uVar6) || (*(longlong *)(param_1 + 0x28) != 0)) {
        uVar7 = 0;
        if (0x9f < uVar6) {
          uVar7 = uVar5;
        }
        FUN_1446efa72(param_1 + 0x28,0,uVar7,4);
      }
      *(uint *)(param_1 + 0x34) = uVar6 & 0xffffffe0;
    }
    pvVar4 = *(void **)(param_1 + 0x28);
    if (*(void **)(param_1 + 0x28) == (void *)0x0) {
      pvVar4 = (void *)(param_1 + 0x18);
    }
    if (uVar6 < 0x120) {
      uVar5 = uVar6 >> 3 & 0x3c;
    }
    else {
      uVar5 = uVar5 << 2;
    }
    memset(pvVar4,0,(ulonglong)uVar5);
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = iVar1 + 0x1f;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar1 % 0x20 != 0) {
      pvVar4 = (void *)(param_1 + 0x18);
      if (*(void **)(param_1 + 0x28) != (void *)0x0) {
        pvVar4 = *(void **)(param_1 + 0x28);
      }
      bVar3 = -(char)(iVar1 % 0x20);
      *(uint *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
           (bVar3 & 0x1f);
    }
  }
  return;
}



// FUNCTION 1401f66f6 FUN_1401f66f6 body=161 status=ok
// SIG undefined FUN_1401f66f6(void)

undefined4 FUN_1401f66f6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar4 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x98);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 0x14);
        if (*plVar1 == param_2) {
          if (plVar1 == (longlong *)0x0) {
            return 0;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return 0;
          }
          return (int)plVar1[1];
        }
        iVar3 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1401f6797 FUN_1401f6797 body=285 status=ok
// SIG undefined FUN_1401f6797(void)

double * FUN_1401f6797(double *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[2] = *(double *)(param_2 + 0x1058);
  dVar5 = *(double *)(param_2 + 0x1050);
  *param_1 = *(double *)(param_2 + 0x1048);
  param_1[1] = dVar5;
  if (*(longlong *)(param_2 + 0x3108) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x3108) + 0x1e18);
    dVar5 = *(double *)(lVar2 + 0x300);
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x40);
    dVar3 = *(double *)(lVar2 + 0x310);
    dVar4 = *(double *)(lVar2 + 0x308);
    if (lVar1 != 0) {
      local_58 = param_4;
      local_50 = dVar5;
      local_48 = *(double *)(lVar2 + 0x308);
      local_40 = *(double *)(lVar2 + 0x310);
      FUN_1401f68b7(&local_38,&local_50,dVar5,lVar1);
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x3108) + 0x1e18);
      dVar3 = local_28;
      dVar4 = local_30;
      dVar5 = local_38;
    }
    *param_1 = dVar5 + *param_1;
    param_1[1] = dVar4 + param_1[1];
    param_1[2] = dVar3 + param_1[2];
    if (*(char *)(lVar2 + 0x318) == '\0') {
      param_1[2] = *(double *)(lVar2 + 0x330);
      dVar5 = *(double *)(lVar2 + 0x328);
      *param_1 = *(double *)(lVar2 + 800);
      param_1[1] = dVar5;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f68b7 FUN_1401f68b7 body=245 status=ok
// SIG undefined FUN_1401f68b7(void)

double * FUN_1401f68b7(double *param_1,double *param_2,int param_3,longlong param_4,char param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = DAT_14c760670;
  if (param_5 == '\0') {
    fVar4 = *(float *)(param_4 + 0x5218);
    fVar2 = powf(DAT_14c76023c,3.0);
    fVar4 = fVar4 / fVar2;
    fVar2 = powf(DAT_14c76023c,(float)param_3);
  }
  else {
    fVar2 = (float)exp2f((float)param_3);
  }
  fVar3 = fVar2 * fVar4 * 0.75;
  fVar2 = fVar2 * fVar4 * -0.75;
  fVar4 = (float)*param_2;
  if (fVar3 <= (float)*param_2) {
    fVar4 = fVar3;
  }
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  *param_2 = (double)fVar4;
  fVar4 = (float)param_2[1];
  if (fVar3 <= (float)param_2[1]) {
    fVar4 = fVar3;
  }
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  param_2[1] = (double)fVar4;
  fVar4 = (float)param_2[2];
  if (fVar3 <= (float)param_2[2]) {
    fVar4 = fVar3;
  }
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  param_2[2] = (double)fVar4;
  param_1[2] = param_2[2];
  dVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar1;
  return param_1;
}



// FUNCTION 1401f69ac FUN_1401f69ac body=425 status=ok
// SIG undefined FUN_1401f69ac(void)

undefined8
FUN_1401f69ac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') {
      cVar1 = FUN_144a61b4f();
      if ((cVar1 != '\0') ||
         (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002)) {
        local_98 = param_5[2];
        local_f8 = &local_a8;
        local_a8 = *param_5;
        uStack_a0 = param_5[1];
        local_c8 = *param_4;
        uStack_c4 = param_4[1];
        uStack_c0 = param_4[2];
        uStack_bc = param_4[3];
        local_b8 = *(undefined8 *)(param_4 + 4);
        local_d0 = param_10;
        local_d8 = param_9;
        local_e0 = param_8;
        local_e8 = param_7;
        local_f0 = param_6;
        uVar2 = FUN_143428372(param_1,param_2,param_3);
        goto LAB_1401f6a90;
      }
    }
    local_58 = param_5[2];
    local_f8 = &local_68;
    local_68 = *param_5;
    uStack_60 = param_5[1];
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = param_4[2];
    uStack_7c = param_4[3];
    local_78 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_1401f6b56(param_1,param_2,param_3);
  }
LAB_1401f6a90:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f6b56 FUN_1401f6b56 body=568 status=ok
// SIG undefined FUN_1401f6b56(void)

undefined8
FUN_1401f6b56(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined4 local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  char *local_160;
  undefined8 *local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  bVar5 = true;
  local_160 = &local_c9;
  local_c9 = '\x01';
  local_a4 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_b8 = 0;
  local_ac = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  local_d8 = param_5[2];
  local_188 = &local_e8;
  local_e8 = *param_5;
  uStack_e0 = param_5[1];
  local_f8 = *(undefined8 *)(param_4 + 4);
  local_108 = *param_4;
  uStack_104 = param_4[1];
  uStack_100 = param_4[2];
  uStack_fc = param_4[3];
  local_168 = param_9;
  local_170 = param_8;
  local_178 = param_7;
  local_180 = param_6;
  local_158 = &local_c8;
  uVar2 = FUN_143449f0d(param_1);
  if (local_c9 == '\x01') {
    uVar2 = 10;
    do {
      local_118 = param_5[2];
      local_128 = *param_5;
      uStack_120 = param_5[1];
      local_148 = *param_4;
      uStack_144 = param_4[1];
      uStack_140 = param_4[2];
      uStack_13c = param_4[3];
      local_138 = *(undefined8 *)(param_4 + 4);
      local_160 = &local_c9;
      local_168 = param_9;
      local_170 = param_8;
      local_180 = param_6;
      local_188 = &local_128;
      local_178 = &local_c8;
      local_158 = &local_c8;
      uVar3 = FUN_143449f0d(param_1,param_2,param_3,&local_148);
      uVar4 = (ulonglong)uVar3;
      bVar5 = 1 < uVar2;
      if (local_c9 != '\x01') break;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  else {
    uVar4 = (ulonglong)uVar2;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar5);
}



// FUNCTION 1401f6d90 FUN_1401f6d90 body=186 status=ok
// SIG undefined FUN_1401f6d90(void)

longlong FUN_1401f6d90(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  do {
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 0x60) == '\x01') {
        lVar3 = *(longlong *)(param_1 + 0x148);
        if (lVar3 == 0) {
          return 0;
        }
        plVar4 = *(longlong **)(param_1 + 0x150);
LAB_1401f6de0:
        if (plVar4 == (longlong *)0x0) {
          return lVar3;
        }
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
            return lVar3;
          }
          return lVar3;
        }
        return lVar3;
      }
    }
    else if (*(char *)(param_1 + 0x62) == '\x01') {
      lVar3 = *(longlong *)(param_1 + 0x188);
      if (lVar3 == 0) {
        return 0;
      }
      plVar4 = *(longlong **)(param_1 + 400);
      goto LAB_1401f6de0;
    }
    param_1 = FUN_1401f6e4a(param_1 + 0x18);
  } while( true );
}



// FUNCTION 1401f6e4a FUN_1401f6e4a body=136 status=ok
// SIG undefined FUN_1401f6e4a(void)

longlong FUN_1401f6e4a(undefined8 *param_1)

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
    if (DAT_14cb78ff0 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb78ff0,local_40);
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



// FUNCTION 1401f6ed4 FUN_1401f6ed4 body=89 status=ok
// SIG undefined FUN_1401f6ed4(void)

longlong *
FUN_1401f6ed4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14001cc68(0x210,0x10);
  FUN_1401f6f2e(plVar1,param_2,param_1,param_3);
  (**(code **)(*plVar1 + 8))(plVar1,param_1,param_3,param_4);
  return plVar1;
}



// FUNCTION 1401f6f2e FUN_1401f6f2e body=1824 status=ok
// SIG undefined FUN_1401f6f2e(void)

undefined8 * FUN_1401f6f2e(undefined8 *param_1,int param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  undefined4 local_50 [2];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1401f77c6();
  *param_1 = &PTR_FUN_14ae0f1f0;
  *(undefined2 *)((longlong)param_1 + 0x121) = 0;
  *(undefined1 *)((longlong)param_1 + 0x123) = 2;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x3f0000003f000000;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x3f800000;
  uVar13 = *(uint *)((longlong)param_1 + 0x13c) & 0xffffffa0;
  uVar14 = uVar13 | 0x18;
  *(uint *)((longlong)param_1 + 0x13c) = uVar14;
  uVar6 = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x164) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x166) = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = &PTR_FUN_14ad42c10;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_3 + 0xe0);
  *(undefined1 *)((longlong)param_1 + 0x121) = *(undefined1 *)(param_3 + 0xe1);
  *(undefined1 *)((longlong)param_1 + 0x122) = *(undefined1 *)(param_3 + 0xe2);
  dVar1 = *(double *)(param_3 + 0xf0);
  *(float *)((longlong)param_1 + 0x124) = (float)*(double *)(param_3 + 0xe8);
  *(float *)(param_1 + 0x25) = (float)dVar1;
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)(param_3 + 0xe4);
  *(undefined1 *)((longlong)param_1 + 0x123) = *(undefined1 *)(param_3 + 0xe3);
  dVar1 = *(double *)(param_3 + 0x100);
  *(float *)(param_1 + 0x26) = (float)*(double *)(param_3 + 0xf8);
  *(float *)((longlong)param_1 + 0x134) = (float)dVar1;
  uVar7 = 6;
  if (*(int *)(param_3 + 0x7c0) != 0) {
    iVar16 = (int)*(double *)(param_3 + 0x100) * (int)*(double *)(param_3 + 0xf8);
    iVar15 = 1;
    if (1 < iVar16) {
      iVar15 = iVar16;
    }
    uVar7 = 6;
    if (*(int *)(param_3 + 0x7c0) / iVar15 == 8) {
      uVar7 = 0x12;
    }
  }
  *(undefined4 *)(param_1 + 0x27) = uVar7;
  uVar14 = uVar14 | *(byte *)(param_3 + 0x108) & 1;
  *(uint *)((longlong)param_1 + 0x13c) = uVar14;
  *(uint *)((longlong)param_1 + 0x13c) = *(byte *)(param_3 + 0x108) & 2 | uVar14;
  bVar5 = FUN_1401f78e6(CONCAT31((int3)(uVar13 >> 8),*(undefined1 *)(param_3 + 0x109)));
  uVar13 = (*(uint *)((longlong)param_1 + 0x13c) & 0xfffffffb) + (uint)bVar5 * 4;
  *(uint *)((longlong)param_1 + 0x13c) = uVar13;
  uVar13 = (uVar13 & 0xfffffff7) + (*(uint *)(param_3 + 0x108) & 4) * 2;
  *(uint *)((longlong)param_1 + 0x13c) = uVar13;
  if (2 < param_2) {
    bVar5 = FUN_14010070a(*(undefined1 *)(param_3 + 0x10a));
    uVar6 = (uint)bVar5 << 4;
    uVar13 = *(uint *)((longlong)param_1 + 0x13c);
  }
  *(uint *)((longlong)param_1 + 0x13c) = uVar13 & 0xffffffef | uVar6;
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_3 + 0x110);
  *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)(param_3 + 0x114);
  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(param_3 + 0x120);
  bVar5 = FUN_1401f76a8(param_3);
  uVar13 = *(uint *)((longlong)param_1 + 0x13c) & 0xffffff7f | (uint)bVar5 << 7;
  *(uint *)((longlong)param_1 + 0x13c) = uVar13;
  *(uint *)((longlong)param_1 + 0x13c) =
       uVar13 & 0xfffffeff | (*(uint *)(param_3 + 0x108) & 0x10) << 4;
  cVar2 = *(char *)(param_3 + 0x10b);
  *(char *)(param_1 + 0x28) = cVar2;
  if (cVar2 == '\0') {
    if (DAT_14cb366a0 == 0) {
      local_70 = &local_58;
      local_58 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_140eca530;
      local_78 = &LAB_148063819;
      local_80 = &LAB_1460672b6;
      local_88 = L"Niagara";
      local_90 = 0;
      local_98 = 0x10000006;
      local_a0 = 8;
      local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,0x130);
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
    }
    lVar4 = DAT_14cb366a0;
    lVar8 = *(longlong *)(DAT_14cb366a0 + 0x110);
    if (lVar8 == 0) {
      FUN_140aa6c08(DAT_14cb366a0);
      lVar8 = *(longlong *)(lVar4 + 0x110);
    }
    if (*(char *)(lVar8 + 0xe3) != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  fVar18 = *(float *)(param_3 + 0x10c);
  if (1.0 <= fVar18) {
    fVar18 = 1.0;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x144) = fVar18;
  uVar13 = *(uint *)(param_3 + 0x108);
  uVar14 = *(uint *)((longlong)param_1 + 0x13c);
  uVar6 = (uVar13 & 8) << 3;
  *(uint *)((longlong)param_1 + 0x13c) = uVar14 & 0xffffffbf | uVar6;
  if ((*(byte *)(param_3 + 0x108) & 8) != 0) {
    param_1[0x2a] = *(undefined8 *)(param_3 + 0x118);
  }
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(uint *)((longlong)param_1 + 0x13c) = uVar14 & 0xffffff9f | uVar6 | (uVar13 & 8) << 2;
  if ((*(byte *)(param_3 + 0x54d) & 3) == 1) {
    puVar12 = (undefined4 *)
              (**(code **)(*(longlong *)(param_4 + 0x40) + 0x58))(param_4 + 0x40,param_3 + 0x538,0);
    if (puVar12 == (undefined4 *)0x0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *puVar12;
    }
    *(undefined4 *)(param_1 + 0x32) = uVar7;
    *(byte *)((longlong)param_1 + 0x13d) = *(byte *)((longlong)param_1 + 0x13d) | 4;
  }
  else {
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    uVar9 = FUN_144741050(param_3 + 0x540);
    local_58 = *(code **)(param_3 + 0x544);
    local_50[0] = FUN_144830b78(local_50,uVar9);
    local_a8 = local_48;
    FUN_1448e9d24(uVar3,&local_58,local_44,param_1 + 0x32);
    *(uint *)((longlong)param_1 + 0x13c) =
         *(uint *)((longlong)param_1 + 0x13c) & 0xfffffbdf |
         (uint)((*(uint *)((longlong)param_1 + 0x13c) & 0x20) != 0 || *(int *)(param_1 + 0x32) != -1
               ) << 5;
  }
  iVar15 = 0;
  if (*(int *)(param_3 + 0x7c0) != 0) {
    iVar16 = (int)*(double *)(param_3 + 0x100) * (int)*(double *)(param_3 + 0xf8);
    iVar15 = 1;
    if (1 < iVar16) {
      iVar15 = iVar16;
    }
    iVar15 = *(int *)(param_3 + 0x7c0) / iVar15;
  }
  *(int *)(param_1 + 0x31) = iVar15;
  FUN_1401f7650(param_1 + 0x2f,param_3 + 0x7b8);
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)(param_3 + 0x760);
  param_1[0x40] = param_3 + 0x768;
  plVar10 = (longlong *)(param_3 + 0x790);
  param_1[0x41] = plVar10;
  uVar13 = *(uint *)((longlong)param_1 + 0x13c);
  *(uint *)((longlong)param_1 + 0x13c) = uVar13 & 0xfffffdff;
  if (*(int *)(param_4 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1ec) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 500) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1dc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1e4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1cc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1c4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x19c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = 0xffffffff;
    param_1[0x3f] = 0xffffffffffffffff;
  }
  else {
    uVar17 = 0;
    do {
      *(undefined4 *)((longlong)param_1 + uVar17 * 4 + 0x198) = 0xffffffff;
      if (((uVar17 < (ulonglong)(byte)((byte)uVar13 >> 7) * 8 + 0x12) &&
          (lVar8 = *(longlong *)(*(longlong *)(param_3 + 0xa8) + uVar17 * 8), lVar8 != 0)) &&
         ((*(byte *)(lVar8 + 0x35) & 3) == 1)) {
        piVar11 = (int *)(**(code **)(*(longlong *)(param_4 + 0x40) + 0x58))
                                   ((longlong *)(param_4 + 0x40),lVar8 + 0x20,0);
        if (piVar11 == (int *)0x0) {
          *(undefined4 *)((longlong)param_1 + uVar17 * 4 + 0x198) = 0xffffffff;
        }
        else {
          iVar15 = *piVar11;
          *(int *)((longlong)param_1 + uVar17 * 4 + 0x198) = iVar15;
          if (iVar15 != -1) {
            *(byte *)((longlong)param_1 + 0x13d) = *(byte *)((longlong)param_1 + 0x13d) | 2;
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0x1a);
    plVar10 = (longlong *)param_1[0x41];
  }
  lVar8 = *plVar10;
  if (*(char *)((longlong)param_1 + 0x121) == '\x03') {
    if (*(char *)(param_1 + 0x24) == '\0') {
      uVar13 = 0xffffffff;
      if (*(ushort *)(lVar8 + 0x32) != 0xffff) {
        uVar13 = (uint)*(ushort *)(lVar8 + 0x32);
      }
      uVar13 = (uint)*(byte *)(lVar8 + 0x37) << 0x1f | uVar13;
    }
    else {
      uVar13 = *(uint *)(param_1 + 0x36);
    }
    *(char *)((longlong)param_1 + 0x121) = (uVar13 != 0xffffffff) * '\x02';
  }
  if (*(char *)((longlong)param_1 + 0x122) == '\x05') {
    if (*(char *)(param_1 + 0x24) == '\0') {
      uVar13 = 0xffffffff;
      if (*(ushort *)(lVar8 + 0x2a) != 0xffff) {
        uVar13 = (uint)*(ushort *)(lVar8 + 0x2a);
      }
      uVar13 = (uint)*(byte *)(lVar8 + 0x2f) << 0x1f | uVar13;
    }
    else {
      uVar13 = *(uint *)((longlong)param_1 + 0x1ac);
    }
    *(char *)((longlong)param_1 + 0x122) = (uVar13 != 0xffffffff) * '\x02';
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f7650 FUN_1401f7650 body=88 status=ok
// SIG undefined FUN_1401f7650(void)

undefined8 * FUN_1401f7650(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1401f7a02(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1401f76a8 FUN_1401f76a8 body=285 status=ok
// SIG undefined FUN_1401f76a8(void)

undefined8 FUN_1401f76a8(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
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
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = *(char *)(param_1 + 0x5c);
  lVar3 = CONCAT71((int7)(local_10 >> 8),cVar1);
  if (cVar1 == '\0') {
    if (DAT_14cb366a0 == (longlong *)0x0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_140eca530;
      local_38 = &LAB_148063819;
      local_40 = &LAB_1460672b6;
      local_48 = L"Niagara";
      local_50 = 0;
      local_58 = 0x10000006;
      local_60 = 8;
      local_68 = 0x130;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
    }
    plVar2 = DAT_14cb366a0;
    lVar3 = DAT_14cb366a0[0x22];
    if (lVar3 == 0) {
      (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
      lVar3 = plVar2[0x22];
    }
    cVar1 = *(char *)(lVar3 + 0xe2);
  }
  else {
    cVar1 = cVar1 + -1;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),cVar1 == '\0');
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f77c6 FUN_1401f77c6 body=287 status=ok
// SIG undefined FUN_1401f77c6(void)

void FUN_1401f77c6(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_14ae09a40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0x105;
  uVar2 = 0;
  *(undefined1 *)((longlong)param_1 + 0x4e) = 0;
  param_1[8] = &PTR_FUN_14a3d4720;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = &PTR_FUN_14a3d4750;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0xffffffffffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x96) = 1;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb7) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa7) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x97) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0xff;
  param_1[0x1c] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  uVar3 = *(byte *)(param_4 + 0xd0) & 1;
  uVar1 = *(uint *)(param_1 + 0x1e);
  *(uint *)(param_1 + 0x1e) = uVar1 & 0xfffffffc | uVar3;
  if (param_3 != 0) {
    uVar2 = (uint)(*(char *)(param_3 + 0x5c) != '\x03') << 2;
  }
  *(uint *)(param_1 + 0x1e) = uVar1 & 0xfffffff8 | uVar3 | uVar2;
  *(undefined1 *)((longlong)param_1 + 0xf4) = *(undefined1 *)(param_4 + 0xd1);
  *(undefined4 *)(param_1 + 0x1f) = param_2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return;
}



// FUNCTION 1401f78e6 FUN_1401f78e6 body=283 status=ok
// SIG undefined FUN_1401f78e6(void)

undefined8 FUN_1401f78e6(char param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
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
  code *local_18;
  ulonglong local_10;
  
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_10 = uVar2;
  if (param_1 == '\0') {
    if (DAT_14cb366a0 == (longlong *)0x0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_140eca530;
      local_38 = &LAB_148063819;
      local_40 = &LAB_1460672b6;
      local_48 = L"Niagara";
      local_50 = 0;
      local_58 = 0x10000006;
      local_60 = 8;
      local_68 = 0x130;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
    }
    plVar1 = DAT_14cb366a0;
    uVar2 = DAT_14cb366a0[0x22];
    if (uVar2 == 0) {
      (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
      uVar2 = plVar1[0x22];
    }
    bVar3 = *(char *)(uVar2 + 0xe4) == '\x01';
  }
  else {
    bVar3 = param_1 == '\x02';
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),bVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f7a02 FUN_1401f7a02 body=317 status=ok
// SIG undefined FUN_1401f7a02(void)

void FUN_1401f7a02(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401f7a70;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_1401f7a70:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1401f7b40 FUN_1401f7b40 body=128 status=ok
// SIG undefined FUN_1401f7b40(void)

void FUN_1401f7b40(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_58 [40];
  uint local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401f7bd6(local_30);
  if ((local_30[0] & 0xf00) == 0x300) {
    if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    FUN_1401f8164(param_1,param_2,local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f7bd6 FUN_1401f7bd6 body=706 status=ok
// SIG undefined FUN_1401f7bd6(void)

uint * FUN_1401f7bd6(uint *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong *plVar9;
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
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    goto LAB_1401f7d33;
  }
  param_1[1] = 0;
  uVar3 = *(uint *)(param_2 + 0x180) & 0x2000;
  *param_1 = uVar3;
  if (*(char *)(param_2 + 0xe5) == '\x01') {
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x180);
    goto LAB_1401f7d33;
  }
  if (((((*(int *)(param_2 + 0x144) == 0) || (uVar4 = *(uint *)(param_2 + 0x140), (int)uVar4 < 0))
       || (DAT_14c9647dc <= (int)uVar4)) ||
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_2 + 0x144))))) ||
     (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar1 = *plVar9, lVar1 == 0))))
  goto LAB_1401f7d33;
  uVar3 = (uint)(*(char *)(lVar1 + 0x1fb) != '\0') << 0xc | uVar3;
  if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
    if ((*(longlong *)(lVar1 + 0xa8) == 0) ||
       ((*(byte *)(*(longlong *)(lVar1 + 0xa8) + 0x65) & 1) != 0)) {
      if (DAT_14cad2858 == 0) {
        local_50 = &local_30;
        local_30 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_146395584;
        local_58 = &LAB_147a0ba80;
        local_60 = &LAB_14575ccce;
        local_68 = L"Engine";
        local_70 = 0x40000000000;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
      goto LAB_1401f7cf0;
      pcVar5 = (char *)(lVar1 + 0x427);
      goto LAB_1401f7cf4;
    }
LAB_1401f7d5d:
    uVar4 = 0x400;
  }
  else {
LAB_1401f7cf0:
    pcVar5 = (char *)(param_2 + 0x17);
LAB_1401f7cf4:
    if (*pcVar5 != '\x03') goto LAB_1401f7d5d;
    uVar4 = (uint)(*(char *)(param_2 + 0x6a) != '\x02') << 10;
  }
  *param_1 = uVar4 | uVar3;
  if (DAT_14cae3d20 != (code *)0x0) {
    lVar6 = FUN_1401f7e9a();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      *param_1 = uVar3;
      pcVar2 = DAT_14cae3d20;
      plVar9 = &DAT_14cae3d40;
      if (DAT_14cae3d30 != (longlong *)0x0) {
        plVar9 = DAT_14cae3d30;
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      pcVar8 = (code *)(*pcVar2)(uVar7);
      pcVar2 = DAT_14cae3c30;
      if ((pcVar8 != (code *)0x0) && (DAT_14cae3c30 != (code *)0x0)) {
        plVar9 = &DAT_14cae3c50;
        if (DAT_14cae3c40 != (longlong *)0x0) {
          plVar9 = DAT_14cae3c40;
        }
        local_30 = pcVar8;
        uVar7 = (**(code **)(*plVar9 + 8))();
        uVar4 = (*pcVar2)(uVar7,&local_30);
        *param_1 = uVar3 | 1 << (uVar4 & 0x1f);
      }
    }
  }
LAB_1401f7d33:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f7e9a FUN_1401f7e9a body=228 status=ok
// SIG undefined FUN_1401f7e9a(void)

longlong FUN_1401f7e9a(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1aa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = &LAB_14587d9ba;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147451f50;
    local_40 = &LAB_140bf228f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x720;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeHeightfieldCollisionComponent",&DAT_14caa1aa8,
                  FUN_14632355a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1aa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f80fa FUN_1401f80fa body=105 status=ok
// SIG undefined FUN_1401f80fa(void)

ulonglong FUN_1401f80fa(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_1401f8141;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1456e3df4(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_1401f8141:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1401f8164 FUN_1401f8164 body=557 status=ok
// SIG undefined FUN_1401f8164(void)

void FUN_1401f8164(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98 [8];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_140d508bc(local_b0,param_2,&DAT_14c846480,1);
  if ((int)uStack_a0 != 0) {
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_98[0] = 0xf0;
    lVar5 = (*DAT_14c787670)(0,local_98,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar5,"FHavokSilhouetteGenerator");
    }
    FUN_1401f8434(lVar5,param_2,local_b0);
    FUN_1401f83d2(&local_c8);
    local_c8 = lVar5;
    FUN_144b3e7e0(lVar5);
    FUN_140e846e9(&local_d8,*param_3);
    if (0 < local_d0) {
      local_58 = 0;
      local_50 = 0x800000000;
      local_48 = 0xffffffff;
      local_44 = 0;
      FUN_147e4c7de(local_98,local_d8,local_d0,8);
      uVar4 = FUN_147e43936(local_98);
      *(undefined4 *)(lVar5 + 0x24) = uVar4;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    lVar2 = *param_1;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x250));
    if (*(longlong *)(*param_1 + 0x78) != 0) {
      iVar1 = (int)param_1[2];
      lVar6 = (longlong)iVar1;
      *(uint *)(param_1 + 2) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x14) < iVar1 + 1U) {
        FUN_1456e3e7a(param_1 + 1,iVar1);
      }
      lVar3 = param_1[1];
      *(longlong *)(lVar3 + lVar6 * 0x18) = lVar5;
      *(undefined8 *)(lVar3 + 8 + lVar6 * 0x18) = uStack_c0;
      *(longlong *)(lVar3 + 0x10 + lVar6 * 0x18) = local_b8;
      if (local_b8 != 0) {
        LOCK();
        *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
        UNLOCK();
        lVar5 = *(longlong *)(lVar3 + lVar6 * 0x18);
      }
      if (lVar5 != 0) {
        FUN_144b3d910(lVar5);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x250));
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    FUN_1401f8392(&local_c8);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


