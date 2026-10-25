// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1430e5188 FUN_1430e5188 body=110 status=ok
// SIG undefined FUN_1430e5188(void)

void FUN_1430e5188(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = **(undefined8 **)(param_1 + 0x1d8);
  local_10 = &local_28;
  local_20 = 0x3f800000;
  local_18 = &LAB_142df1470;
  FUN_1400f2b3c(*(undefined8 **)(param_1 + 0x1d8),param_2,*(longlong *)(param_1 + 0x1e0) + 0x40);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430e51f8 FUN_1430e51f8 body=38 status=ok
// SIG undefined FUN_1430e51f8(void)

undefined8 FUN_1430e51f8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e521e FUN_1430e521e body=484 status=ok
// SIG undefined FUN_1430e521e(void)

void FUN_1430e521e(longlong param_1,ulonglong *param_2)

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
  FUN_144ab6bce(param_2,*(undefined8 *)(param_1 + 0x1b8),0x3f800000,0);
  FUN_142de5b44(*(undefined8 *)(param_1 + 0x1c0),param_2,*(longlong *)(param_1 + 0x1c8) + 0x40);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430e550c FUN_1430e550c body=31 status=ok
// SIG undefined FUN_1430e550c(void)

undefined8 FUN_1430e550c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e552c FUN_1430e552c body=1504 status=ok
// SIG undefined FUN_1430e552c(void)

void FUN_1430e552c(longlong param_1,ulonglong *param_2)

{
  size_t _Size;
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *_Src;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_d0;
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
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar9;
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
    puVar13 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar13 = local_b8;
    }
    FUN_1446fe144(puVar16 + 2,local_b0,0);
    puVar9 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 2;
    }
    memcpy(puVar9,puVar13,(longlong)local_b0);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar13 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar13 = local_a8;
    }
    FUN_1446fe1b8(puVar16 + 5,local_60,0);
    puVar9 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 5;
    }
    memcpy(puVar9,puVar13,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar16 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_d0 = param_2 + 0x12;
  lVar15 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x1dc + lVar15 * 8);
    if (0 < iVar2) {
      if (lVar15 == 3) {
        uVar17 = iVar2 + 0x3fU & 0x7fffffc0;
      }
      else {
        uVar17 = (&DAT_14a327f70)[lVar15];
      }
      *(uint *)(*(longlong *)(param_1 + 0x1c0) + 0x20) = uVar17;
      *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x18) =
           *(undefined4 *)(param_1 + 0x1d8 + lVar15 * 8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x1c) =
           *(undefined4 *)(param_1 + 0x1dc + lVar15 * 8);
      uVar11 = 1;
      *(uint *)(*(longlong *)(param_1 + 0x1c0) + 0x24) = (uint)(lVar15 == 3);
      if (lVar15 != 3) {
        uVar11 = *(undefined4 *)(param_1 + 0x1dc + lVar15 * 8);
      }
      iVar2 = uVar17 + 0x7e;
      if (-1 < (int)(uVar17 + 0x3f)) {
        iVar2 = uVar17 + 0x3f;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x1b8);
      uVar5 = *(undefined8 *)(param_1 + 0x1c0);
      local_c8 = CONCAT44(local_c8._4_4_,uVar11);
      if (*(longlong *)(param_1 + 0x1c8) == 0) {
        uVar6 = 0;
      }
      else {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
        lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
        uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x50) + lVar12 * 8);
        if (uVar6 == 0) {
          uVar6 = FUN_1400bafc2(lVar8,lVar12,1);
        }
      }
      uVar7 = FUN_140029432(param_2,uVar6,0);
      param_2[0x37] = uVar6;
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar16 + 3;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x20);
        puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar16 + 3;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar16;
      param_2[6] = (ulonglong)(puVar16 + 1);
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_14a37d340;
      puVar16[2] = uVar7;
      local_d8 = uVar5;
      FUN_14480864a(param_2,uVar6,*(undefined8 *)(param_1 + 0x1c8),uVar4);
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar16 + 4;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x28);
        puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar16 + 4;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar16;
      param_2[6] = (ulonglong)(puVar16 + 1);
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_14a1fbc30;
      *(int *)(puVar16 + 2) = iVar2 >> 6;
      *(undefined4 *)((longlong)puVar16 + 0x14) = (undefined4)local_c8;
      *(undefined4 *)(puVar16 + 3) = 1;
      if (*(longlong *)(param_1 + 0x1c8) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8) + 0x50) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4) * 8);
        if (lVar8 == 0) {
          lVar8 = FUN_1400bafc2();
        }
      }
      local_c8 = lVar8;
      if (DAT_14ca8507b == '\x01') {
        if ((0 < (int)param_2[0x13]) &&
           (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
          FUN_147139e90(local_d0,0);
        }
        lVar8 = *(longlong *)(param_1 + 0x1c8);
        uVar6 = *(ulonglong *)(lVar8 + 0x10);
        uVar14 = lVar8 + 0x10 + ((longlong)uVar6 >> 0x18);
        if ((uVar6 & 1) == 0) {
          uVar14 = uVar6;
        }
        iVar2 = *(int *)(lVar8 + 0x18);
        if ((longlong)iVar2 != 0) {
          lVar8 = 0;
          do {
            uVar17 = (uint)*(byte *)(uVar14 + 3 + lVar8);
            if ((uVar17 < 0x13) && ((0x44080U >> (uVar17 & 0x1f) & 1) != 0)) {
              bVar1 = *(byte *)(uVar14 + 2 + lVar8);
              iVar3 = (int)param_2[0x13];
              *(uint *)(param_2 + 0x13) = iVar3 + 1U;
              if (*(uint *)((longlong)param_2 + 0x9c) < iVar3 + 1U) {
                FUN_1447477d8(local_d0,iVar3);
              }
              uVar6 = *local_d0;
              *(ushort *)(uVar6 + (longlong)iVar3 * 4) = (ushort)bVar1;
              *(undefined1 *)(uVar6 + 2 + (longlong)iVar3 * 4) = 1;
            }
            lVar8 = lVar8 + 4;
          } while ((longlong)iVar2 * 4 != lVar8);
        }
        uVar6 = param_2[0x13];
        lVar8 = (longlong)(int)uVar6;
        if (0 < lVar8) {
          if (DAT_14ca8507b == '\x01') {
            _Src = (void *)*local_d0;
            puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar9 = puVar16 + 5;
            if ((undefined8 *)param_2[1] < puVar9) {
              FUN_140023dd8(param_2,0x30);
              puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
              puVar9 = puVar16 + 5;
            }
            *param_2 = (ulonglong)puVar9;
            *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
            *(undefined8 **)param_2[6] = puVar16;
            param_2[6] = (ulonglong)(puVar16 + 1);
            _Size = lVar8 * 4;
            _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
            pvVar10 = (void *)(lVar8 * 4 + (longlong)_Dst);
            if ((void *)param_2[1] < pvVar10) {
              FUN_140023dd8(param_2,(uint)_Size | 2);
              _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
              pvVar10 = (void *)(_Size + (longlong)_Dst);
            }
            *param_2 = (ulonglong)pvVar10;
            memcpy(_Dst,_Src,_Size);
            puVar16[1] = 0;
            *puVar16 = &PTR_FUN_14a1fbc38;
            puVar16[2] = local_c8;
            puVar16[3] = _Dst;
            *(int *)(puVar16 + 4) = (int)uVar6;
          }
          *(undefined4 *)(param_2 + 0x13) = 0;
          if (*(int *)((longlong)param_2 + 0x9c) < 0) {
            FUN_147139e90(local_d0,0);
          }
        }
      }
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 4);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430e5b0e FUN_1430e5b0e body=450 status=ok
// SIG undefined FUN_1430e5b0e(void)

void FUN_1430e5b0e(longlong param_1,ulonglong *param_2)

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
  FUN_1473300d2(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430e5cd1 FUN_1430e5cd1 body=81 status=ok
// SIG undefined FUN_1430e5cd1(void)

void FUN_1430e5cd1(undefined8 param_1,longlong *param_2)

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
  FUN_1473301cd(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1430e5d22 FUN_1430e5d22 body=229 status=ok
// SIG undefined FUN_1430e5d22(void)

void FUN_1430e5d22(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca67650,param_3);
  return;
}



// FUNCTION 1430e5e08 FUN_1430e5e08 body=31 status=ok
// SIG undefined FUN_1430e5e08(void)

undefined8 FUN_1430e5e08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e5e28 FUN_1430e5e28 body=450 status=ok
// SIG undefined FUN_1430e5e28(void)

void FUN_1430e5e28(longlong param_1,ulonglong *param_2)

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
  FUN_1473306ba(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430e5feb FUN_1430e5feb body=81 status=ok
// SIG undefined FUN_1430e5feb(void)

void FUN_1430e5feb(undefined8 param_1,longlong *param_2)

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
  FUN_141784f30(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1430e603c FUN_1430e603c body=229 status=ok
// SIG undefined FUN_1430e603c(void)

void FUN_1430e603c(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca67540,param_3);
  return;
}



// FUNCTION 1430e6122 FUN_1430e6122 body=870 status=ok
// SIG undefined FUN_1430e6122(void)

void FUN_1430e6122(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
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
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
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
    puVar11 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar11 = local_b8;
    }
    FUN_1446fe144(puVar12 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar5 = puVar12 + 2;
    }
    memcpy(puVar5,puVar11,(longlong)local_b0);
  }
  puVar12[0xd] = 0;
  *(int *)(puVar12 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    puVar11 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar11 = local_a8;
    }
    FUN_1446fe1b8(puVar12 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar12 + 5;
    }
    memcpy(puVar5,puVar11,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar12 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar12 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar12 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  local_c4 = *(undefined4 *)(param_1 + 0x1dc);
  local_c8 = *(undefined4 *)(param_1 + 0x1e0);
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  uVar4 = *(undefined8 *)(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x50) + lVar9 * 8);
    if (uVar6 == 0) {
      uVar6 = FUN_1400bafc2(lVar8,lVar9,1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x1c8);
  uVar7 = FUN_140029432(param_2,uVar6,0);
  param_2[0x37] = uVar6;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 3;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x20);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 3;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a37d340;
  puVar12[2] = uVar7;
  local_d8 = uVar4;
  FUN_14480864a(param_2,uVar6,*plVar1,uVar3);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar12 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_c4;
  *(undefined4 *)(puVar12 + 3) = local_c8;
  if (*plVar1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*plVar1 + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar9,lVar10,1);
    }
  }
  FUN_141784f30(param_2,plVar1,lVar8);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430e64f6 FUN_1430e64f6 body=38 status=ok
// SIG undefined FUN_1430e64f6(void)

undefined8 FUN_1430e64f6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e651c FUN_1430e651c body=1722 status=ok
// SIG undefined FUN_1430e651c(void)

void FUN_1430e651c(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [4];
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  int iVar11;
  void *_Src;
  undefined1 *_Src_00;
  wchar_t *_Dest;
  byte bVar12;
  undefined8 *puVar13;
  undefined1 auStack_368 [11];
  longlong alStack_35d [2];
  undefined4 uStack_34d;
  byte abStack_349 [193];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined1 local_260 [7];
  undefined1 auStack_259 [5];
  undefined1 auStack_254 [3];
  undefined1 auStack_251 [5];
  byte abStack_24c [3];
  undefined2 uStack_249;
  void *pvStack_240;
  int local_238;
  undefined1 local_230 [64];
  undefined1 *local_1f0;
  int local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  longlong lStack_195;
  undefined1 local_188 [4];
  byte local_184;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ushort local_98;
  undefined8 local_90;
  ushort local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_368;
  FUN_144b1c6fa(param_1 + 0x10,(void *)((longlong)&uStack_249 + 1));
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar13 + 0x11;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x90);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar13 + 0x11;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_FUN_14a1fb978;
  puVar13[3] = 0;
  *(int *)(puVar13 + 4) = local_238;
  if ((longlong)local_238 == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x24) = 8;
  }
  else {
    _Src = (void *)((longlong)&uStack_249 + 1);
    if (pvStack_240 != (void *)0x0) {
      _Src = pvStack_240;
    }
    FUN_1446fe144(puVar13 + 2,local_238,0);
    puVar10 = (undefined8 *)puVar13[3];
    if ((undefined8 *)puVar13[3] == (undefined8 *)0x0) {
      puVar10 = puVar13 + 2;
    }
    memcpy(puVar10,_Src,(longlong)local_238);
  }
  puVar13[0xd] = 0;
  *(int *)(puVar13 + 0xe) = local_1e8;
  if ((longlong)local_1e8 == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x74) = 8;
  }
  else {
    _Src_00 = local_1f0;
    if (local_1f0 == (undefined1 *)0x0) {
      _Src_00 = local_230;
    }
    FUN_1446fe1b8(puVar13 + 5,local_1e8,0);
    puVar10 = (undefined8 *)puVar13[0xd];
    if ((undefined8 *)puVar13[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar13 + 5;
    }
    memcpy(puVar10,_Src_00,(longlong)local_1e8 << 3);
  }
  *(undefined4 *)(puVar13 + 0xf) = local_1e0;
  *(undefined4 *)((longlong)puVar13 + 0x7c) = uStack_1dc;
  *(undefined4 *)(puVar13 + 0x10) = uStack_1d8;
  *(undefined4 *)((longlong)puVar13 + 0x84) = uStack_1d4;
  if (local_1f0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_1f0);
  }
  if (pvStack_240 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar8 = 0x15;
  do {
    *(undefined8 *)((longlong)alStack_35d + lVar8) = 0;
    *(undefined8 *)((longlong)alStack_35d + lVar8 + 8) = 0;
    *(undefined4 *)((longlong)&uStack_34d + lVar8) = 0xffffffff;
    (abStack_349 + lVar8)[0] = 0;
    (abStack_349 + lVar8)[1] = 0;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0xd5);
  local_274 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  _local_260 = 0;
  auStack_259._1_4_ = auStack_259._1_4_ & 0xffffff00;
  _auStack_254 = 0;
  auStack_251._1_3_ = 0;
  local_270 = (undefined4)*(undefined8 *)(param_1 + 0x1c8);
  local_26c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1c8) >> 0x20);
  local_268 = (undefined4)*(undefined8 *)(param_1 + 0x1d0);
  local_264 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1d0) >> 0x20);
  _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
  pwVar9 = _Dest + 0x27;
  if ((wchar_t *)param_2[1] < pwVar9) {
    FUN_140023dd8(param_2,0x50);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar9 = _Dest + 0x27;
  }
  *param_2 = (ulonglong)pwVar9;
  wcscpy(_Dest,L"RasterizeVirtualShadowMaps(Non-Nanite)");
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar13 + 0x23;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x120);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar13 + 0x23;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_FUN_14a217b50;
  memcpy(puVar13 + 2,abStack_349 + 1,0xe8);
  puVar13[0x1f] = 0;
  puVar13[0x20] = CONCAT44(_auStack_254,auStack_259._1_4_);
  *(uint *)((longlong)puVar13 + 0x107) = CONCAT31(auStack_251._1_3_,auStack_251[0]);
  puVar13[0x22] = _Dest;
  lVar8 = 0x11;
  do {
    *(undefined8 *)(local_260 + lVar8 + 7) = 0;
    *(undefined8 *)(auStack_254 + lVar8 + 3) = 0xffffffff00000000;
    *(undefined2 *)((longlong)&uStack_249 + lVar8) = 0;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0xd1);
  local_188 = (undefined1  [4])0x0;
  local_184 = 0;
  lVar8 = 0xd9;
  do {
    *(undefined8 *)(local_260 + lVar8 + 7) = 0;
    *(undefined8 *)(auStack_254 + lVar8 + 3) = 0xffffffff00000000;
    *(undefined2 *)((longlong)&uStack_249 + lVar8) = 0;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0x199);
  local_c0 = 0;
  local_90 = 0;
  local_88 = local_88 & 0xff;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = local_98 & 0xff00;
  lVar8 = 0x15;
  do {
    if (*(longlong *)((longlong)alStack_35d + lVar8) == 0) break;
    *(longlong *)(local_260 + lVar8 + 3) = *(longlong *)((longlong)alStack_35d + lVar8);
    bVar1 = abStack_349[lVar8 + 1];
    bVar12 = bVar1 >> 2;
    auStack_251[lVar8 + 4] = bVar12;
    abStack_24c[lVar8] = bVar1 & 3;
    *(undefined4 *)(auStack_254 + lVar8 + 3) = *(undefined4 *)((longlong)&uStack_34d + lVar8);
    *(uint *)(auStack_259 + lVar8 + 4) = (uint)abStack_349[lVar8];
    local_188 = (undefined1  [4])((int)local_188 + 1);
    local_184 = local_184 | bVar12 == 2;
    lVar4 = *(longlong *)((longlong)alStack_35d + lVar8 + 8);
    if (lVar4 != 0) {
      local_c0 = 1;
      uVar5 = *(undefined8 *)(auStack_259 + lVar8 + 4);
      *(undefined8 *)((longlong)&lStack_195 + lVar8) = *(undefined8 *)(local_260 + lVar8 + 3);
      *(undefined8 *)(&stack0xfffffffffffffe73 + lVar8) = uVar5;
      *(undefined8 *)(local_188 + lVar8 + 3) = *(undefined8 *)(auStack_251 + lVar8 + 4);
      *(longlong *)((longlong)&lStack_195 + lVar8) = lVar4;
    }
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0xd5);
  auVar6 = local_188;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if (0 < (longlong)(int)local_188) {
    memcpy(param_2 + 0x15,(void *)((longlong)&uStack_249 + 1),(longlong)(int)local_188 * 0x18);
  }
  *(undefined1 (*) [4])(param_2 + 0x14) = auVar6;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfc | 2;
  iVar7 = *(int *)(param_1 + 0x1d4);
  if (0x7ffe < iVar7) {
    iVar7 = 0x7fff;
  }
  iVar11 = 0x7fff;
  if (*(int *)(param_1 + 0x1d0) < 0x7fff) {
    iVar11 = *(int *)(param_1 + 0x1d0);
  }
  iVar2 = *(int *)(param_1 + 0x1cc);
  iVar3 = *(int *)(param_1 + 0x1c8);
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar13 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar13 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar13 + 2) = (float)iVar3;
  *(float *)((longlong)puVar13 + 0x14) = (float)iVar2;
  *(undefined4 *)(puVar13 + 3) = 0;
  *(float *)((longlong)puVar13 + 0x1c) = (float)iVar11;
  *(float *)(puVar13 + 4) = (float)iVar7;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
  FUN_142de5b44(*(undefined8 *)(param_1 + 0x1b8),param_2,*(longlong *)(param_1 + 0x1c0) + 0x30);
  if ((*(byte *)((longlong)param_2 + 0x17b) & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar13 + 2;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x18);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar13 + 2;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  if ((local_80 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430e6c38 FUN_1430e6c38 body=31 status=ok
// SIG undefined FUN_1430e6c38(void)

undefined8 FUN_1430e6c38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e6c58 FUN_1430e6c58 body=38 status=ok
// SIG undefined FUN_1430e6c58(void)

undefined8 FUN_1430e6c58(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e6c7e FUN_1430e6c7e body=468 status=ok
// SIG undefined FUN_1430e6c7e(void)

void FUN_1430e6c7e(longlong param_1,ulonglong *param_2)

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
  FUN_1473322e9(param_2,param_1 + 0x1c0,*(longlong *)(param_1 + 0x1b8),
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x1b8) + 0x10));
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430e6e53 FUN_1430e6e53 body=81 status=ok
// SIG undefined FUN_1430e6e53(void)

void FUN_1430e6e53(undefined8 param_1,longlong *param_2)

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
  FUN_144abb019(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1430e6ea4 FUN_1430e6ea4 body=229 status=ok
// SIG undefined FUN_1430e6ea4(void)

void FUN_1430e6ea4(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca68860,param_3);
  return;
}



// FUNCTION 1430e6f8a FUN_1430e6f8a body=870 status=ok
// SIG undefined FUN_1430e6f8a(void)

void FUN_1430e6f8a(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
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
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
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
    puVar11 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar11 = local_b8;
    }
    FUN_1446fe144(puVar12 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar5 = puVar12 + 2;
    }
    memcpy(puVar5,puVar11,(longlong)local_b0);
  }
  puVar12[0xd] = 0;
  *(int *)(puVar12 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    puVar11 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar11 = local_a8;
    }
    FUN_1446fe1b8(puVar12 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar12 + 5;
    }
    memcpy(puVar5,puVar11,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar12 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar12 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar12 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  local_c4 = *(undefined4 *)(param_1 + 0x1dc);
  local_c8 = *(undefined4 *)(param_1 + 0x1e0);
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  uVar4 = *(undefined8 *)(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x50) + lVar9 * 8);
    if (uVar6 == 0) {
      uVar6 = FUN_1400bafc2(lVar8,lVar9,1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x1c8);
  uVar7 = FUN_140029432(param_2,uVar6,0);
  param_2[0x37] = uVar6;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 3;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x20);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 3;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a37d340;
  puVar12[2] = uVar7;
  local_d8 = uVar4;
  FUN_14480864a(param_2,uVar6,*plVar1,uVar3);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar12 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_c4;
  *(undefined4 *)(puVar12 + 3) = local_c8;
  if (*plVar1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*plVar1 + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar9,lVar10,1);
    }
  }
  FUN_144abb019(param_2,plVar1,lVar8);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430e7316 FUN_1430e7316 body=31 status=ok
// SIG undefined FUN_1430e7316(void)

undefined8 FUN_1430e7316(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e7336 FUN_1430e7336 body=3913 status=ok
// SIG undefined FUN_1430e7336(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1430e7336(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8,
                  int param_9,int param_10,undefined8 param_11,undefined8 param_12)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
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
  undefined1 auStack_338 [32];
  longlong *local_318;
  longlong *local_310;
  undefined8 local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  undefined8 *local_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  undefined8 *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
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
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar5 = 0;
  if (param_4 == (undefined8 *)0x0) {
    local_2a8 = 0;
  }
  else {
    local_2a8 = param_4[0x43];
  }
  local_2c0 = *(longlong **)(param_2 + 0xb8);
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
  local_2d0 = param_2;
  local_2c8 = param_4;
  local_2a0 = param_3;
  if (param_6[3] != 0) {
    if ((*(byte *)(*(longlong *)(param_6[3] + 0x28) + 0x246) & 0x10) == 0) {
      uVar5 = 0;
    }
    else {
      cVar1 = (**(code **)(*param_6 + 0x358))();
      uVar5 = (uint)(byte)(cVar1 * '\x02' + 1);
    }
  }
  local_66 = *(undefined1 *)(param_7 + 7);
  local_19c = *(uint *)(local_2d0 + 0xe4) >> 0xe & 7;
  uVar2 = 0;
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
  FUN_144765e6c(&local_228,local_2c0[0x22],&local_288);
  local_2b8 = local_180;
  FUN_1447662e4(local_180,&local_288);
  puVar10 = &DAT_14c9c0e10;
  if (param_10 == 2) {
    puVar10 = &DAT_14c9c0e28;
  }
  puVar12 = &DAT_14c9c0d68;
  if (param_10 == 2) {
    puVar12 = &DAT_14c9c0df8;
  }
  puVar6 = &DAT_14c9c0e40;
  if (param_10 != 0) {
    puVar6 = puVar10;
  }
  puVar10 = &DAT_14c9c0db0;
  if (param_10 != 0) {
    puVar10 = puVar12;
  }
  if (param_9 == 1) {
    puVar10 = puVar6;
  }
  uStack_1c0 = *puVar10;
  local_1c8 = *param_7;
  local_1b8 = param_7[1];
  if (DAT_14ca84f32 == '\x01') {
    if (*(int *)(DAT_14ca620d8 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = (**(code **)(*param_6 + 0x490))(param_6);
      if (uVar3 < 4) {
        uVar2 = (undefined1)(0x5010400 >> ((byte)(uVar3 << 3) & 0x1f));
      }
      else {
        uVar2 = 0;
        if ((uVar3 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar2 = (undefined1)(0xa060900000000 >> ((byte)(uVar3 << 3) & 0x3f));
        }
      }
    }
  }
  local_19f = CONCAT11(uVar2,(undefined1)local_19f);
  cVar1 = (**(code **)(*param_6 + 0x4a0))(param_6);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1449c014c(param_1);
  }
  local_19f = CONCAT11(local_19f._1_1_,uVar2);
  if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
    FUN_144766928(&local_228);
  }
  uVar3 = 0;
  FUN_144765fea(local_2c0,*(undefined4 *)(param_1 + 0x20),0,local_108);
  plVar15 = local_2c0;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar7 = (**(code **)(*local_2c0 + 0x30))(local_2c0);
    puVar10 = local_2c8;
    local_318._0_4_ = uVar4;
    FUN_1456c013a(&local_228,param_6,uVar7,local_2c8);
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar7 = (**(code **)(*plVar15 + 0x30))(plVar15);
    local_318 = (longlong *)CONCAT44(local_318._4_4_,uVar4);
    FUN_1456c0257(&local_228,param_6,uVar7,puVar10);
  }
  local_67 = (char)local_2c0[0x25];
  local_2ac = uVar5 + 4;
  if ((char)local_2c0[0x25] == -1) {
    local_2ac = uVar5;
  }
  local_2ac = local_2ac & 0xff;
  if (*param_8 != 0) {
    if ((local_110 & 1) == 0) {
      local_290 = (longlong *******)0x0;
      local_298 = 0x58;
      uVar3 = 0;
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
      iVar11 = *(int *)(local_298 + 0x28);
      iVar18 = 0;
      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
        lVar14 = 0;
        iVar18 = 0;
        do {
          iVar18 = iVar18 + (uint)*(ushort *)(uVar13 + 2 + lVar14);
          lVar14 = lVar14 + 0x18;
        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar14);
      }
      iVar17 = iVar11 + 0xe;
      if (-1 < iVar11 + 7) {
        iVar17 = iVar11 + 7;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      uVar3 = iVar18 + (iVar17 >> 3) +
                       (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar11) * 8 + 7U &
              0xfffffff8;
    }
    local_300 = &local_298;
    local_308 = param_12;
    local_310 = param_6;
    local_318 = param_5;
    FUN_14474308c(*param_8,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),local_2c8
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
      iVar11 = *(int *)(local_298 + 0x28);
      iVar18 = 0;
      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
        lVar14 = 0;
        iVar18 = 0;
        do {
          iVar18 = iVar18 + (uint)*(ushort *)(uVar13 + 2 + lVar14);
          lVar14 = lVar14 + 0x18;
        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar14);
      }
      iVar17 = iVar11 + 0xe;
      if (-1 < iVar11 + 7) {
        iVar17 = iVar11 + 7;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      local_290 = (longlong *******)((longlong)(int)uVar3 + (longlong)local_290);
      uVar3 = ((iVar17 >> 3) + (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar11) * 8 +
               iVar18 + 7U & 0xfffffff8) + uVar3;
    }
    local_300 = &local_298;
    local_308 = param_12;
    local_310 = param_6;
    local_318 = param_5;
    FUN_14474308c(param_8[2],*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  local_2c8);
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
        local_2b8 = local_170;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      local_298 = local_2b8[(uVar13 >> 0x38) - 1];
      local_290 = (longlong *******)((longlong)(int)uVar3 + (longlong)local_290);
    }
    local_300 = &local_298;
    local_308 = param_12;
    local_310 = param_6;
    local_318 = param_5;
    FUN_14474308c(param_8[4],*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  local_2c8);
  }
  plVar15 = (longlong *)(longlong)*(int *)(local_2d0 + 0xb0);
  if (0 < (longlong)plVar15) {
    plVar22 = (longlong *)0x0;
    local_2b8 = plVar15;
    do {
      if ((local_2a0 >> ((ulonglong)plVar22 & 0x3f) & 1) != 0) {
        lVar14 = *(longlong *)(local_2d0 + 0xa8);
        if (*(longlong *)(local_2d0 + 0xa8) == 0) {
          lVar14 = local_2d0;
        }
        plVar15 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
        uVar5 = *(uint *)(lVar14 + 0x7c + (longlong)plVar22 * 0xa8);
        bVar19 = (byte)(uVar5 >> 8);
        bVar20 = (bVar19 & 8) + (char)local_2ac;
        bVar21 = bVar20;
        if (((uVar5 >> 0xc & 1) != 0) && (bVar21 = bVar20 + 0x10, *(int *)(param_1 + 0x20) < 2)) {
          bVar21 = bVar20;
        }
        lVar14 = lVar14 + (longlong)plVar22 * 0xa8;
        if (*param_8 == 0) {
          uVar5 = 0;
        }
        else {
          if ((*(byte *)(plVar15 + 0xe) & 1) == 0) {
            local_290 = (longlong *******)0x0;
            local_298 = 0x58;
            uVar5 = 0;
          }
          else {
            plVar8 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar8 = plVar15;
            }
            local_298 = *plVar8;
            uVar13 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar13 & 1) != 0) {
              uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
            }
            iVar11 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar9 = 0;
              iVar11 = 0;
              do {
                iVar11 = iVar11 + (uint)*(ushort *)(uVar13 + 2 + lVar9);
                lVar9 = lVar9 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar9);
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
            uVar5 = iVar11 + (iVar17 >> 3) +
                             (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar18) * 8 +
                    7U & 0xfffffff8;
          }
          local_2d8 = plVar15 + 0xf;
          local_2e0 = &local_298;
          local_2e8 = (longlong *)param_12;
          local_2f8 = (undefined8 *)local_2d0;
          local_300 = local_2c8;
          local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_318 = local_2c0;
          local_310 = (longlong *)((ulonglong)local_310 & 0xffffffffffffff00);
          local_2f0 = (longlong *)lVar14;
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
            plVar8 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar8 = plVar15;
            }
            local_298 = plVar8[(uVar13 >> 0x38) - 1];
            uVar13 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar13 & 1) != 0) {
              uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
            }
            iVar11 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar9 = 0;
              iVar11 = 0;
              do {
                iVar11 = iVar11 + (uint)*(ushort *)(uVar13 + 2 + lVar9);
                lVar9 = lVar9 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar9);
            }
            iVar18 = *(int *)(local_298 + 0x28);
            iVar17 = iVar18 + 0xe;
            if (-1 < iVar18 + 7) {
              iVar17 = iVar18 + 7;
            }
            if (*(ushort *)((longlong)plVar15 + 0x72) < 0x51) {
              plVar8 = plVar15 + 4;
            }
            else {
              plVar8 = (longlong *)plVar15[4];
            }
            local_290 = (longlong *******)((longlong)(int)uVar5 + (longlong)plVar8);
            uVar5 = ((iVar17 >> 3) +
                     (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar18) * 8 + iVar11 +
                     7U & 0xfffffff8) + uVar5;
          }
          local_2d8 = plVar15 + 0xf;
          local_2e0 = &local_298;
          local_2e8 = (longlong *)param_12;
          local_2f8 = (undefined8 *)local_2d0;
          local_300 = local_2c8;
          local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_318 = local_2c0;
          local_310 = (longlong *)((ulonglong)local_310 & 0xffffffffffffff00);
          local_2f0 = (longlong *)lVar14;
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
            plVar8 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar8 = plVar15;
            }
            if (*(ushort *)((longlong)plVar15 + 0x72) < 0x51) {
              plVar16 = plVar15 + 4;
            }
            else {
              plVar16 = (longlong *)plVar15[4];
            }
            local_298 = plVar8[(uVar13 >> 0x38) - 1];
            local_290 = (longlong *******)((longlong)(int)uVar5 + (longlong)plVar16);
          }
          local_2d8 = plVar15 + 0xf;
          local_2e0 = &local_298;
          local_2e8 = (longlong *)param_12;
          local_2f8 = (undefined8 *)local_2d0;
          local_300 = local_2c8;
          local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_318 = local_2c0;
          local_310 = (longlong *)((ulonglong)local_310 & 0xffffffffffffff00);
          local_2f0 = (longlong *)lVar14;
          FUN_1456bf974(param_8[4],*(undefined8 *)(param_8[5] + 0x18),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        }
        uVar5 = 0;
        local_290 = (longlong *******)CONCAT44(local_290._4_4_,0x7fffffff);
        bVar20 = DAT_14ca96500;
        if (*(int *)(param_1 + 0x20) == 1) {
joined_r0x0001430e8103:
          if (bVar20 != 0) {
LAB_1430e7f84:
            uVar3 = *(uint *)(lVar14 + 0x54) & 7;
            if (uVar3 == 0) {
              uVar5 = *(uint *)(local_2a8 + 0x15c);
              uVar3 = *(uint *)(local_2a8 + 0x204) & 0x7fffffff;
            }
            else {
              if ((uVar3 != 1) || (*(longlong *)(param_1 + 0x28) == 0)) goto LAB_1430e7fb3;
              uVar5 = *(uint *)(lVar14 + 0xa0) | 0x80000000;
              uVar3 = *(uint *)(lVar14 + 0xa4) | 0x80000000;
            }
            local_290 = (longlong *******)CONCAT44(local_290._4_4_,uVar3);
          }
        }
        else if (((2 < *(int *)(param_1 + 0x20)) &&
                 (lVar9 = (ulonglong)DAT_14ca85550 * 0x3c,
                 *(longlong *)(&DAT_14ca814b0 + lVar9) != DAT_14ca81490)) && (DAT_14ca85550 != 0xc))
        {
          if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar9 + 3) & 0x10) != 0) {
            bVar20 = *(byte *)((longlong)&DAT_14ca814c8 + lVar9 + 3) & 0x20;
            goto joined_r0x0001430e8103;
          }
          goto LAB_1430e7f84;
        }
LAB_1430e7fb3:
        if (local_2a8 == 0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = *(undefined4 *)(local_2a8 + 0x158);
        }
        local_298 = CONCAT44(uVar4,uVar5);
        local_2f0 = &local_288;
        local_2f8 = &local_228;
        local_300 = (undefined8 *)CONCAT71(local_300._1_7_,bVar21 | bVar19 & 0x20);
        local_308 = param_11;
        local_310 = (longlong *)CONCAT44(local_310._4_4_,param_10);
        local_318 = (longlong *)CONCAT44(local_318._4_4_,param_9);
        local_2e8 = plVar15;
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                  (*(longlong **)(param_1 + 0x30),local_2d0,(ulonglong)plVar22 & 0xffffffff,
                   &local_298);
        plVar15 = local_2b8;
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
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430e8280 FUN_1430e8280 body=2338 status=ok
// SIG undefined FUN_1430e8280(void)

/* WARNING: Removing unreachable block (ram,0x0001430e89c3) */

void FUN_1430e8280(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 *param_5,int param_6,int param_7,uint param_8,longlong *param_9)

{
  void *_Dst;
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_4a8 [32];
  uint *local_488;
  undefined1 *local_480;
  longlong *local_470;
  undefined1 local_462 [2];
  undefined8 local_460;
  undefined1 local_455;
  uint local_454;
  undefined8 local_450 [6];
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined8 local_3c0;
  undefined1 local_3b0 [48];
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined4 local_254;
  undefined2 local_250;
  undefined2 local_24e;
  undefined1 local_24a;
  undefined1 local_249;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined2 local_190 [4];
  undefined1 local_188 [216];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_190[0] = 0x100;
  local_80 = 0;
  local_78 = 0x300000000;
  local_70 = 0x7fffffff;
  uStack_68 = 0;
  cVar2 = FUN_1406917e6();
  if (cVar2 == '\0') {
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_220 = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    lStack_200 = 0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0xffffffff;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0xffffffff;
    uStack_1dc = 0xffffffff;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1af = 1;
    local_1ac = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    lVar6 = param_1[1];
    local_470 = param_1;
    if (lVar6 == 0) {
      local_288 = 0x1100000000;
      (**(code **)(*param_1 + 0x48))(0,&local_310);
      lVar6 = FUN_14486d71a(&local_310);
    }
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_144765e6c(&local_238,lVar6);
    puVar8 = &DAT_14c9c0e10;
    if (param_7 == 2) {
      puVar8 = &DAT_14c9c0e28;
    }
    puVar9 = &DAT_14c9c0d68;
    if (param_7 == 2) {
      puVar9 = &DAT_14c9c0df8;
    }
    puVar7 = &DAT_14c9c0e40;
    if (param_7 != 0) {
      puVar7 = puVar8;
    }
    puVar8 = &DAT_14c9c0db0;
    if (param_7 != 0) {
      puVar8 = puVar9;
    }
    if (param_6 == 1) {
      puVar8 = puVar7;
    }
    uStack_1d0 = *puVar8;
    local_1d8 = *param_3;
    local_1c8 = param_3[1];
    uVar5 = (**(code **)(*param_2 + 0x490))(param_2);
    param_1 = local_470;
    if (uVar5 < 4) {
      uVar3 = (undefined1)(0x5010400 >> ((byte)(uVar5 << 3) & 0x1f));
    }
    else {
      uVar3 = 0;
      if ((uVar5 < 7) && (uVar3 = 0, DAT_14ca84f33 != '\0')) {
        uVar3 = (undefined1)(0xa060900000000 >> ((byte)(uVar5 << 3) & 0x3f));
      }
    }
    local_1af = CONCAT11(uVar3,(undefined1)local_1af);
    cVar2 = (**(code **)(*param_2 + 0x4a0))(param_2);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_144a12f44(DAT_14ca85550);
    }
    local_1af = CONCAT11(local_1af._1_1_,uVar3);
    FUN_144a1fecc(&local_238,&local_310);
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      uStack_1a8 = (undefined4)local_240;
      uStack_1a4 = (undefined4)((ulonglong)local_240 >> 0x20);
      FUN_14573402d(local_3b0);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar6 = *param_1;
        local_450[0] = local_320;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        local_488 = &local_454;
        local_454 = local_454 & 0xffff0000;
        local_480 = local_462;
        FUN_14573482a(&DAT_14cafccf8,&local_460,
                      (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] & 0x7fffffff
                      ,local_450);
        if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_460 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          param_1 = local_470;
        }
        else {
          *(undefined1 *)((longlong)(int)local_460 * 0x10 + DAT_14cafccf8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          FUN_140691a2a(&DAT_14cafc0a0,param_8,lVar6);
          param_1 = local_470;
        }
      }
      FUN_1457340f6(local_450,&local_238);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar6 = *param_1;
        local_460 = local_3c0;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        local_488 = (uint *)local_462;
        local_462 = (undefined1  [2])0x0;
        local_480 = &local_455;
        FUN_14573482a(&DAT_14cafd9c8,&local_454,
                      (int)((ulonglong)local_460 >> 0x20) * 0x17 + (int)local_460 & 0x7fffffff,
                      &local_460);
        if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_454 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          param_1 = local_470;
        }
        else {
          *(undefined1 *)((longlong)(int)local_454 * 0x10 + DAT_14cafd9c8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          FUN_140691a2a(&DAT_14cafcd70,param_8,lVar6);
          param_1 = local_470;
        }
      }
      if (local_408 != 0) {
        FUN_140021284();
      }
      if (local_410 != 0) {
        FUN_140021284();
      }
      if (local_418 != 0) {
        FUN_140021284();
      }
      if (local_420 != 0) {
        FUN_140021284();
      }
      if (local_368 != 0) {
        FUN_140021284();
      }
      if (local_370 != 0) {
        FUN_140021284();
      }
      if (local_378 != 0) {
        FUN_140021284();
      }
      if (local_380 != 0) {
        FUN_140021284();
      }
    }
    local_2b8 = CONCAT44(*param_4,(undefined4)local_2b8);
    local_2b0 = *(undefined8 *)(param_4 + 1);
    local_2a8 = *(undefined8 *)(param_4 + 4);
    uStack_2a0 = *(undefined8 *)(param_4 + 6);
    local_298 = *(undefined8 *)(param_4 + 8);
    uStack_290 = *(undefined8 *)(param_4 + 10);
    local_288 = *(undefined8 *)(param_4 + 0xc);
    uStack_280 = *(undefined8 *)(param_4 + 0xe);
    local_278 = *(undefined8 *)(param_4 + 0x10);
    uStack_270 = *(undefined8 *)(param_4 + 0x12);
    local_250 = *(undefined2 *)(param_4 + 0x1a);
    local_268 = *(undefined1 *)(param_4 + 0x14);
    local_260 = *(undefined8 *)(param_4 + 0x16);
    local_258 = *(undefined1 *)(param_4 + 0x18);
    local_257 = *(undefined1 *)((longlong)param_4 + 0x61);
    local_256 = *(undefined1 *)((longlong)param_4 + 0x62);
    local_255 = *(undefined1 *)((longlong)param_4 + 99);
    local_254 = param_4[0x19];
    local_24a = *(undefined1 *)((longlong)param_4 + 0x6a);
    local_249 = *(undefined1 *)((longlong)param_4 + 0x6b);
    local_24e = 0;
    memcpy(local_188,&local_310,0xd8);
    if (lStack_1f0 != 0) {
      FUN_140021284();
    }
    if (local_1f8 != 0) {
      FUN_140021284();
    }
    if (lStack_200 != 0) {
      FUN_140021284();
    }
    if (local_208 != 0) {
      FUN_140021284();
    }
    local_70 = 0;
  }
  else {
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_145734aa6(&local_310,&local_238);
    FUN_1457347b6(&local_b0,&local_238);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    local_70 = local_70 & 0x80000000;
  }
  local_190[0] = 0x100;
  local_70 = param_8 & 0x7fffffff | local_70;
  uStack_68 = *param_1;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    bVar4 = (**(code **)(*param_2 + 0x400))(param_2);
    local_70 = local_70 & 0x7fffffff | (uint)bVar4 << 0x1f;
    FUN_1406918b2();
  }
  iVar1 = (int)param_9[1];
  *(uint *)(param_9 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_9 + 0xc) < iVar1 + 1U) {
    FUN_14069191a(param_9,iVar1);
  }
  lVar6 = *param_9;
  _Dst = (void *)(lVar6 + (longlong)iVar1 * 0x130);
  memcpy(_Dst,local_190,0xe0);
  *(undefined8 *)(lVar6 + 0x110 + (longlong)iVar1 * 0x130) = 0;
  if (local_80 == 0) {
    *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
    *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
    *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
    *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
    *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
  }
  *(longlong *)((longlong)_Dst + 0x110) = local_80;
  *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
  *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
  *(uint *)((longlong)_Dst + 0x120) = local_70;
  *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
  *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
  local_78 = 0x300000000;
  local_80 = 0;
  if ((local_60 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430e8ba4 FUN_1430e8ba4 body=29 status=ok
// SIG undefined FUN_1430e8ba4(void)

undefined8 FUN_1430e8ba4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e8bd6 FUN_1430e8bd6 body=85 status=ok
// SIG undefined FUN_1430e8bd6(void)

void FUN_1430e8bd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a328dd0;
  return;
}



// FUNCTION 1430e8c2c FUN_1430e8c2c body=85 status=ok
// SIG undefined FUN_1430e8c2c(void)

void FUN_1430e8c2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a328dd0;
  return;
}



// FUNCTION 1430e8c82 FUN_1430e8c82 body=118 status=ok
// SIG undefined FUN_1430e8c82(void)

void FUN_1430e8c82(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a328dd0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001430e8ce9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1430e8cf8 FUN_1430e8cf8 body=81 status=ok
// SIG undefined FUN_1430e8cf8(void)

void FUN_1430e8cf8(void)

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



// FUNCTION 1430e8d4a FUN_1430e8d4a body=83 status=ok
// SIG undefined FUN_1430e8d4a(void)

undefined8 FUN_1430e8d4a(void)

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



// FUNCTION 1430e8d9e FUN_1430e8d9e body=31 status=ok
// SIG undefined FUN_1430e8d9e(void)

undefined8 FUN_1430e8d9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e8dbe FUN_1430e8dbe body=1324 status=ok
// SIG undefined FUN_1430e8dbe(void)

void FUN_1430e8dbe(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430e92ec FUN_1430e92ec body=31 status=ok
// SIG undefined FUN_1430e92ec(void)

undefined8 FUN_1430e92ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e930c FUN_1430e930c body=1365 status=ok
// SIG undefined FUN_1430e930c(void)

void FUN_1430e930c(longlong param_1,ulonglong *param_2)

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
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
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
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
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
  FUN_141599cee();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca67e48);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
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
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430e9862 FUN_1430e9862 body=31 status=ok
// SIG undefined FUN_1430e9862(void)

undefined8 FUN_1430e9862(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e9882 FUN_1430e9882 body=1324 status=ok
// SIG undefined FUN_1430e9882(void)

void FUN_1430e9882(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430e9db0 FUN_1430e9db0 body=31 status=ok
// SIG undefined FUN_1430e9db0(void)

undefined8 FUN_1430e9db0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430e9dd0 FUN_1430e9dd0 body=1324 status=ok
// SIG undefined FUN_1430e9dd0(void)

void FUN_1430e9dd0(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430ea2fd FUN_1430ea2fd body=34 status=ok
// SIG undefined FUN_1430ea2fd(void)

void FUN_1430ea2fd(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[4] = 0xffffffff;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 1430ea31f FUN_1430ea31f body=19 status=ok
// SIG undefined FUN_1430ea31f(void)

void FUN_1430ea31f(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1430ea332 FUN_1430ea332 body=31 status=ok
// SIG undefined FUN_1430ea332(void)

undefined8 FUN_1430ea332(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ea352 FUN_1430ea352 body=1324 status=ok
// SIG undefined FUN_1430ea352(void)

void FUN_1430ea352(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430ea880 FUN_1430ea880 body=31 status=ok
// SIG undefined FUN_1430ea880(void)

undefined8 FUN_1430ea880(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ea8a0 FUN_1430ea8a0 body=1324 status=ok
// SIG undefined FUN_1430ea8a0(void)

void FUN_1430ea8a0(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430eadce FUN_1430eadce body=31 status=ok
// SIG undefined FUN_1430eadce(void)

undefined8 FUN_1430eadce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430eadee FUN_1430eadee body=1324 status=ok
// SIG undefined FUN_1430eadee(void)

void FUN_1430eadee(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430eb31c FUN_1430eb31c body=31 status=ok
// SIG undefined FUN_1430eb31c(void)

undefined8 FUN_1430eb31c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430eb33c FUN_1430eb33c body=1324 status=ok
// SIG undefined FUN_1430eb33c(void)

void FUN_1430eb33c(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430eb86a FUN_1430eb86a body=31 status=ok
// SIG undefined FUN_1430eb86a(void)

undefined8 FUN_1430eb86a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430eb88a FUN_1430eb88a body=1324 status=ok
// SIG undefined FUN_1430eb88a(void)

void FUN_1430eb88a(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430ebdb8 FUN_1430ebdb8 body=31 status=ok
// SIG undefined FUN_1430ebdb8(void)

undefined8 FUN_1430ebdb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ebdd8 FUN_1430ebdd8 body=1504 status=ok
// SIG undefined FUN_1430ebdd8(void)

void FUN_1430ebdd8(longlong param_1,ulonglong *param_2)

{
  size_t _Size;
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *_Src;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_d0;
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
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar9;
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
    puVar13 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar13 = local_b8;
    }
    FUN_1446fe144(puVar16 + 2,local_b0,0);
    puVar9 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 2;
    }
    memcpy(puVar9,puVar13,(longlong)local_b0);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar13 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar13 = local_a8;
    }
    FUN_1446fe1b8(puVar16 + 5,local_60,0);
    puVar9 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 5;
    }
    memcpy(puVar9,puVar13,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar16 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_d0 = param_2 + 0x12;
  lVar15 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x1dc + lVar15 * 8);
    if (0 < iVar2) {
      if (lVar15 == 3) {
        uVar17 = iVar2 + 0x3fU & 0x7fffffc0;
      }
      else {
        uVar17 = (&DAT_14a327f70)[lVar15];
      }
      *(uint *)(*(longlong *)(param_1 + 0x1c0) + 0x20) = uVar17;
      *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x18) =
           *(undefined4 *)(param_1 + 0x1d8 + lVar15 * 8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x1c) =
           *(undefined4 *)(param_1 + 0x1dc + lVar15 * 8);
      uVar11 = 1;
      *(uint *)(*(longlong *)(param_1 + 0x1c0) + 0x24) = (uint)(lVar15 == 3);
      if (lVar15 != 3) {
        uVar11 = *(undefined4 *)(param_1 + 0x1dc + lVar15 * 8);
      }
      iVar2 = uVar17 + 0x7e;
      if (-1 < (int)(uVar17 + 0x3f)) {
        iVar2 = uVar17 + 0x3f;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x1b8);
      uVar5 = *(undefined8 *)(param_1 + 0x1c0);
      local_c8 = CONCAT44(local_c8._4_4_,uVar11);
      if (*(longlong *)(param_1 + 0x1c8) == 0) {
        uVar6 = 0;
      }
      else {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
        lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
        uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x50) + lVar12 * 8);
        if (uVar6 == 0) {
          uVar6 = FUN_1400bafc2(lVar8,lVar12,1);
        }
      }
      uVar7 = FUN_140029432(param_2,uVar6,0);
      param_2[0x37] = uVar6;
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar16 + 3;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x20);
        puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar16 + 3;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar16;
      param_2[6] = (ulonglong)(puVar16 + 1);
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_14a37d340;
      puVar16[2] = uVar7;
      local_d8 = uVar5;
      FUN_14480864a(param_2,uVar6,*(undefined8 *)(param_1 + 0x1c8),uVar4);
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar16 + 4;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x28);
        puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar16 + 4;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar16;
      param_2[6] = (ulonglong)(puVar16 + 1);
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_14a1fbc30;
      *(int *)(puVar16 + 2) = iVar2 >> 6;
      *(undefined4 *)((longlong)puVar16 + 0x14) = (undefined4)local_c8;
      *(undefined4 *)(puVar16 + 3) = 1;
      if (*(longlong *)(param_1 + 0x1c8) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8) + 0x50) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4) * 8);
        if (lVar8 == 0) {
          lVar8 = FUN_1400bafc2();
        }
      }
      local_c8 = lVar8;
      if (DAT_14ca8507b == '\x01') {
        if ((0 < (int)param_2[0x13]) &&
           (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
          FUN_147139e90(local_d0,0);
        }
        lVar8 = *(longlong *)(param_1 + 0x1c8);
        uVar6 = *(ulonglong *)(lVar8 + 0x10);
        uVar14 = lVar8 + 0x10 + ((longlong)uVar6 >> 0x18);
        if ((uVar6 & 1) == 0) {
          uVar14 = uVar6;
        }
        iVar2 = *(int *)(lVar8 + 0x18);
        if ((longlong)iVar2 != 0) {
          lVar8 = 0;
          do {
            uVar17 = (uint)*(byte *)(uVar14 + 3 + lVar8);
            if ((uVar17 < 0x13) && ((0x44080U >> (uVar17 & 0x1f) & 1) != 0)) {
              bVar1 = *(byte *)(uVar14 + 2 + lVar8);
              iVar3 = (int)param_2[0x13];
              *(uint *)(param_2 + 0x13) = iVar3 + 1U;
              if (*(uint *)((longlong)param_2 + 0x9c) < iVar3 + 1U) {
                FUN_1447477d8(local_d0,iVar3);
              }
              uVar6 = *local_d0;
              *(ushort *)(uVar6 + (longlong)iVar3 * 4) = (ushort)bVar1;
              *(undefined1 *)(uVar6 + 2 + (longlong)iVar3 * 4) = 1;
            }
            lVar8 = lVar8 + 4;
          } while ((longlong)iVar2 * 4 != lVar8);
        }
        uVar6 = param_2[0x13];
        lVar8 = (longlong)(int)uVar6;
        if (0 < lVar8) {
          if (DAT_14ca8507b == '\x01') {
            _Src = (void *)*local_d0;
            puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar9 = puVar16 + 5;
            if ((undefined8 *)param_2[1] < puVar9) {
              FUN_140023dd8(param_2,0x30);
              puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
              puVar9 = puVar16 + 5;
            }
            *param_2 = (ulonglong)puVar9;
            *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
            *(undefined8 **)param_2[6] = puVar16;
            param_2[6] = (ulonglong)(puVar16 + 1);
            _Size = lVar8 * 4;
            _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
            pvVar10 = (void *)(lVar8 * 4 + (longlong)_Dst);
            if ((void *)param_2[1] < pvVar10) {
              FUN_140023dd8(param_2,(uint)_Size | 2);
              _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
              pvVar10 = (void *)(_Size + (longlong)_Dst);
            }
            *param_2 = (ulonglong)pvVar10;
            memcpy(_Dst,_Src,_Size);
            puVar16[1] = 0;
            *puVar16 = &PTR_FUN_14a1fbc38;
            puVar16[2] = local_c8;
            puVar16[3] = _Dst;
            *(int *)(puVar16 + 4) = (int)uVar6;
          }
          *(undefined4 *)(param_2 + 0x13) = 0;
          if (*(int *)((longlong)param_2 + 0x9c) < 0) {
            FUN_147139e90(local_d0,0);
          }
        }
      }
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 4);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430ec3ba FUN_1430ec3ba body=31 status=ok
// SIG undefined FUN_1430ec3ba(void)

undefined8 FUN_1430ec3ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ec3da FUN_1430ec3da body=1324 status=ok
// SIG undefined FUN_1430ec3da(void)

void FUN_1430ec3da(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430ec908 FUN_1430ec908 body=31 status=ok
// SIG undefined FUN_1430ec908(void)

undefined8 FUN_1430ec908(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ec928 FUN_1430ec928 body=1504 status=ok
// SIG undefined FUN_1430ec928(void)

void FUN_1430ec928(longlong param_1,ulonglong *param_2)

{
  size_t _Size;
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *_Src;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_d0;
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
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar9;
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
    puVar13 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar13 = local_b8;
    }
    FUN_1446fe144(puVar16 + 2,local_b0,0);
    puVar9 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 2;
    }
    memcpy(puVar9,puVar13,(longlong)local_b0);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar13 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar13 = local_a8;
    }
    FUN_1446fe1b8(puVar16 + 5,local_60,0);
    puVar9 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 5;
    }
    memcpy(puVar9,puVar13,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar16 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_d0 = param_2 + 0x12;
  lVar15 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x1dc + lVar15 * 8);
    if (0 < iVar2) {
      if (lVar15 == 3) {
        uVar17 = iVar2 + 0x3fU & 0x7fffffc0;
      }
      else {
        uVar17 = (&DAT_14a327f70)[lVar15];
      }
      *(uint *)(*(longlong *)(param_1 + 0x1c0) + 0x20) = uVar17;
      *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x18) =
           *(undefined4 *)(param_1 + 0x1d8 + lVar15 * 8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x1c) =
           *(undefined4 *)(param_1 + 0x1dc + lVar15 * 8);
      uVar11 = 1;
      *(uint *)(*(longlong *)(param_1 + 0x1c0) + 0x24) = (uint)(lVar15 == 3);
      if (lVar15 != 3) {
        uVar11 = *(undefined4 *)(param_1 + 0x1dc + lVar15 * 8);
      }
      iVar2 = uVar17 + 0x7e;
      if (-1 < (int)(uVar17 + 0x3f)) {
        iVar2 = uVar17 + 0x3f;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x1b8);
      uVar5 = *(undefined8 *)(param_1 + 0x1c0);
      local_c8 = CONCAT44(local_c8._4_4_,uVar11);
      if (*(longlong *)(param_1 + 0x1c8) == 0) {
        uVar6 = 0;
      }
      else {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
        lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
        uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x50) + lVar12 * 8);
        if (uVar6 == 0) {
          uVar6 = FUN_1400bafc2(lVar8,lVar12,1);
        }
      }
      uVar7 = FUN_140029432(param_2,uVar6,0);
      param_2[0x37] = uVar6;
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar16 + 3;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x20);
        puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar16 + 3;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar16;
      param_2[6] = (ulonglong)(puVar16 + 1);
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_14a37d340;
      puVar16[2] = uVar7;
      local_d8 = uVar5;
      FUN_14480864a(param_2,uVar6,*(undefined8 *)(param_1 + 0x1c8),uVar4);
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar16 + 4;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x28);
        puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar16 + 4;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar16;
      param_2[6] = (ulonglong)(puVar16 + 1);
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_14a1fbc30;
      *(int *)(puVar16 + 2) = iVar2 >> 6;
      *(undefined4 *)((longlong)puVar16 + 0x14) = (undefined4)local_c8;
      *(undefined4 *)(puVar16 + 3) = 1;
      if (*(longlong *)(param_1 + 0x1c8) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8) + 0x50) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4) * 8);
        if (lVar8 == 0) {
          lVar8 = FUN_1400bafc2();
        }
      }
      local_c8 = lVar8;
      if (DAT_14ca8507b == '\x01') {
        if ((0 < (int)param_2[0x13]) &&
           (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
          FUN_147139e90(local_d0,0);
        }
        lVar8 = *(longlong *)(param_1 + 0x1c8);
        uVar6 = *(ulonglong *)(lVar8 + 0x10);
        uVar14 = lVar8 + 0x10 + ((longlong)uVar6 >> 0x18);
        if ((uVar6 & 1) == 0) {
          uVar14 = uVar6;
        }
        iVar2 = *(int *)(lVar8 + 0x18);
        if ((longlong)iVar2 != 0) {
          lVar8 = 0;
          do {
            uVar17 = (uint)*(byte *)(uVar14 + 3 + lVar8);
            if ((uVar17 < 0x13) && ((0x44080U >> (uVar17 & 0x1f) & 1) != 0)) {
              bVar1 = *(byte *)(uVar14 + 2 + lVar8);
              iVar3 = (int)param_2[0x13];
              *(uint *)(param_2 + 0x13) = iVar3 + 1U;
              if (*(uint *)((longlong)param_2 + 0x9c) < iVar3 + 1U) {
                FUN_1447477d8(local_d0,iVar3);
              }
              uVar6 = *local_d0;
              *(ushort *)(uVar6 + (longlong)iVar3 * 4) = (ushort)bVar1;
              *(undefined1 *)(uVar6 + 2 + (longlong)iVar3 * 4) = 1;
            }
            lVar8 = lVar8 + 4;
          } while ((longlong)iVar2 * 4 != lVar8);
        }
        uVar6 = param_2[0x13];
        lVar8 = (longlong)(int)uVar6;
        if (0 < lVar8) {
          if (DAT_14ca8507b == '\x01') {
            _Src = (void *)*local_d0;
            puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar9 = puVar16 + 5;
            if ((undefined8 *)param_2[1] < puVar9) {
              FUN_140023dd8(param_2,0x30);
              puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
              puVar9 = puVar16 + 5;
            }
            *param_2 = (ulonglong)puVar9;
            *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
            *(undefined8 **)param_2[6] = puVar16;
            param_2[6] = (ulonglong)(puVar16 + 1);
            _Size = lVar8 * 4;
            _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
            pvVar10 = (void *)(lVar8 * 4 + (longlong)_Dst);
            if ((void *)param_2[1] < pvVar10) {
              FUN_140023dd8(param_2,(uint)_Size | 2);
              _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
              pvVar10 = (void *)(_Size + (longlong)_Dst);
            }
            *param_2 = (ulonglong)pvVar10;
            memcpy(_Dst,_Src,_Size);
            puVar16[1] = 0;
            *puVar16 = &PTR_FUN_14a1fbc38;
            puVar16[2] = local_c8;
            puVar16[3] = _Dst;
            *(int *)(puVar16 + 4) = (int)uVar6;
          }
          *(undefined4 *)(param_2 + 0x13) = 0;
          if (*(int *)((longlong)param_2 + 0x9c) < 0) {
            FUN_147139e90(local_d0,0);
          }
        }
      }
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 4);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430ecf0a FUN_1430ecf0a body=31 status=ok
// SIG undefined FUN_1430ecf0a(void)

undefined8 FUN_1430ecf0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ecf2a FUN_1430ecf2a body=1324 status=ok
// SIG undefined FUN_1430ecf2a(void)

void FUN_1430ecf2a(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430ed458 FUN_1430ed458 body=31 status=ok
// SIG undefined FUN_1430ed458(void)

undefined8 FUN_1430ed458(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ed478 FUN_1430ed478 body=1365 status=ok
// SIG undefined FUN_1430ed478(void)

void FUN_1430ed478(longlong param_1,ulonglong *param_2)

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
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
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
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
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
  FUN_141579614();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca67d38);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
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
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430ed9ce FUN_1430ed9ce body=31 status=ok
// SIG undefined FUN_1430ed9ce(void)

undefined8 FUN_1430ed9ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ed9ee FUN_1430ed9ee body=1324 status=ok
// SIG undefined FUN_1430ed9ee(void)

void FUN_1430ed9ee(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430edf1c FUN_1430edf1c body=481 status=ok
// SIG undefined FUN_1430edf1c(void)

void FUN_1430edf1c(longlong param_1,ulonglong *param_2)

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
  FUN_1473327c2(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430ee0fe FUN_1430ee0fe body=232 status=ok
// SIG undefined FUN_1430ee0fe(void)

void FUN_1430ee0fe(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1430ee1e6 FUN_1430ee1e6 body=81 status=ok
// SIG undefined FUN_1430ee1e6(void)

void FUN_1430ee1e6(undefined8 param_1,longlong *param_2)

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
  FUN_147332865(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1430ee238 FUN_1430ee238 body=31 status=ok
// SIG undefined FUN_1430ee238(void)

undefined8 FUN_1430ee238(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ee258 FUN_1430ee258 body=1324 status=ok
// SIG undefined FUN_1430ee258(void)

void FUN_1430ee258(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430ee786 FUN_1430ee786 body=229 status=ok
// SIG undefined FUN_1430ee786(void)

void FUN_1430ee786(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = param_1[4];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_1;
    lVar3 = param_1[3];
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar6);
      uVar1 = *(uint *)(lVar4 + 0x990);
      if ((uVar1 >> 0x12 & 1) != 0) {
        if (((-1 < (char)uVar1) || ((uVar1 & 0x10) == 0)) ||
           (local_68 = 1, *(int *)(lVar4 + 0x944) < 0)) {
          if ((uVar1 >> 0xb & 1) == 0) {
            local_68 = 0;
          }
          else {
            local_68 = (undefined1)((uVar1 & 0x10) >> 4);
          }
        }
        local_78 = *(undefined1 *)(lVar2 + 0x200);
        local_58 = (undefined4)param_1[1];
        uStack_54 = *(undefined4 *)((longlong)param_1 + 0xc);
        uStack_50 = (undefined4)param_1[2];
        uStack_4c = *(undefined4 *)((longlong)param_1 + 0x14);
        local_70 = local_78;
        local_60 = param_2;
        FUN_14492bf8a(lVar2,lVar4,&local_58,(int)param_1[5]);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1430d7ef6(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430ee86c FUN_1430ee86c body=78 status=ok
// SIG undefined FUN_1430ee86c(void)

undefined8 * FUN_1430ee86c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14a329090;
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



// FUNCTION 1430ee8c0 FUN_1430ee8c0 body=29 status=ok
// SIG undefined FUN_1430ee8c0(void)

void FUN_1430ee8c0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1430ee8de FUN_1430ee8de body=29 status=ok
// SIG undefined FUN_1430ee8de(void)

undefined8 FUN_1430ee8de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ee8fc FUN_1430ee8fc body=99 status=ok
// SIG undefined FUN_1430ee8fc(void)

void FUN_1430ee8fc(longlong *param_1)

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



// FUNCTION 1430ee960 FUN_1430ee960 body=99 status=ok
// SIG undefined FUN_1430ee960(void)

void FUN_1430ee960(longlong *param_1)

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



// FUNCTION 1430ee9c4 FUN_1430ee9c4 body=240 status=ok
// SIG undefined FUN_1430ee9c4(void)

void FUN_1430ee9c4(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 4);
  if ((longlong)iVar1 != 0) {
    uVar3 = *param_1;
    lVar4 = param_1[3];
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar6);
      uVar2 = *(uint *)(lVar5 + 0x990);
      if (((-1 < (char)uVar2) || ((uVar2 & 0x10) == 0)) ||
         (local_78 = 1, *(int *)(lVar5 + 0x944) < 0)) {
        if ((uVar2 >> 0xb & 1) == 0) {
          local_78 = 0;
        }
        else {
          local_78 = (undefined1)((uVar2 & 0x10) >> 4);
        }
      }
      local_88 = *(undefined1 *)(param_1 + 5);
      local_60 = param_1[1];
      local_58 = *(undefined4 *)(param_1 + 2);
      local_80 = 0;
      local_70 = param_2;
      FUN_14492bf8a(uVar3,lVar5,&local_60,0x3f800000);
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_1430d7ef6(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430eeab6 FUN_1430eeab6 body=167 status=ok
// SIG undefined FUN_1430eeab6(void)

undefined8 * FUN_1430eeab6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14a3290c0;
  puVar5[3] = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar2;
  *(undefined4 *)(puVar5 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar5 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
  }
  else {
    FUN_1471cc97c(puVar5 + 4,iVar1,0);
    memcpy((void *)puVar5[4],_Src,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(puVar5 + 6) = *(undefined1 *)(param_1 + 0x30);
  return puVar5 + 1;
}



// FUNCTION 1430eeb64 FUN_1430eeb64 body=29 status=ok
// SIG undefined FUN_1430eeb64(void)

void FUN_1430eeb64(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1430eeb82 FUN_1430eeb82 body=52 status=ok
// SIG undefined FUN_1430eeb82(void)

undefined8 * FUN_1430eeb82(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3290c0;
  FUN_14002d3bc(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430eebb6 FUN_1430eebb6 body=82 status=ok
// SIG undefined FUN_1430eebb6(void)

int FUN_1430eebb6(undefined8 *param_1)

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
  plVar5 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar5 = param_1 + 4;
  }
  pcVar2 = (code *)*param_1;
  iVar1 = *(int *)(lVar4 + 8);
  uVar3 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar3);
  return iVar1 * 0x390;
}



// FUNCTION 1430eec0e FUN_1430eec0e body=43 status=ok
// SIG undefined FUN_1430eec0e(void)

undefined8 FUN_1430eec0e(undefined8 *param_1)

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



// FUNCTION 1430eec40 FUN_1430eec40 body=43 status=ok
// SIG undefined FUN_1430eec40(void)

undefined4 FUN_1430eec40(undefined8 *param_1)

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



// FUNCTION 1430eec72 FUN_1430eec72 body=259 status=ok
// SIG undefined FUN_1430eec72(void)

longlong FUN_1430eec72(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x20);
  if (lVar3 == 0) goto LAB_1430eecca;
  if (DAT_14c87e718 == '\0') {
    iVar1 = *(int *)(lVar3 + 0x1c);
    if (2 < iVar1) {
      bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar4 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar1 - 3) * 4) == bVar4)
        goto LAB_1430eed69;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar3,&local_58);
  }
  else {
LAB_1430eed69:
    FUN_140082318(lVar3);
  }
LAB_1430eecca:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430eed76 FUN_1430eed76 body=24 status=ok
// SIG undefined FUN_1430eed76(void)

longlong FUN_1430eed76(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a329140;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 1430eed94 FUN_1430eed94 body=12 status=ok
// SIG undefined FUN_1430eed94(void)

void FUN_1430eed94(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001430eed9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1430eeda0 FUN_1430eeda0 body=29 status=ok
// SIG undefined FUN_1430eeda0(void)

undefined8 FUN_1430eeda0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430eedbe FUN_1430eedbe body=31 status=ok
// SIG undefined FUN_1430eedbe(void)

undefined8 FUN_1430eedbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430eedde FUN_1430eedde body=1324 status=ok
// SIG undefined FUN_1430eedde(void)

void FUN_1430eedde(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430ef30c FUN_1430ef30c body=31 status=ok
// SIG undefined FUN_1430ef30c(void)

undefined8 FUN_1430ef30c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ef32c FUN_1430ef32c body=1324 status=ok
// SIG undefined FUN_1430ef32c(void)

void FUN_1430ef32c(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430ef85a FUN_1430ef85a body=31 status=ok
// SIG undefined FUN_1430ef85a(void)

undefined8 FUN_1430ef85a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430ef87a FUN_1430ef87a body=1365 status=ok
// SIG undefined FUN_1430ef87a(void)

void FUN_1430ef87a(longlong param_1,ulonglong *param_2)

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
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
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
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
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
  FUN_140346a30();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca68398);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
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
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430efdd0 FUN_1430efdd0 body=75 status=ok
// SIG undefined FUN_1430efdd0(void)

undefined8 * FUN_1430efdd0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3295c0;
  FUN_14002d3bc(param_1 + 0x3a);
  FUN_1430ee960(param_1 + 0x38);
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430efe1c FUN_1430efe1c body=1670 status=ok
// SIG undefined FUN_1430efe1c(void)

void FUN_1430efe1c(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [4];
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *****pppppuVar9;
  undefined1 *_Src;
  wchar_t *_Dest;
  byte bVar10;
  undefined8 *puVar11;
  undefined1 auStack_338 [11];
  longlong alStack_32d [2];
  undefined4 uStack_31d;
  byte abStack_319 [193];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined4 local_234;
  undefined1 local_230 [7];
  undefined1 auStack_229 [5];
  undefined1 auStack_224 [3];
  undefined1 auStack_221 [5];
  byte abStack_21c [3];
  undefined1 uStack_219;
  undefined8 ****local_218 [2];
  int local_208;
  undefined1 local_200 [8];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 *local_1c0;
  int local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong lStack_165;
  undefined1 local_158 [4];
  byte local_154;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ushort local_68;
  undefined8 local_60;
  ushort local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_144b1c6fa(param_1 + 0x10,local_218);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = local_208;
  if ((longlong)local_208 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    pppppuVar9 = local_218;
    if ((undefined8 *****)local_218[1] != (undefined8 *****)0x0) {
      pppppuVar9 = (undefined8 *****)local_218[1];
    }
    FUN_1446fe144(puVar11 + 2,local_208,0);
    puVar7 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar7 = puVar11 + 2;
    }
    memcpy(puVar7,pppppuVar9,(longlong)local_208);
  }
  puVar11[0xd] = 0;
  *(int *)(puVar11 + 0xe) = local_1b8;
  if ((longlong)local_1b8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    _Src = local_1c0;
    if (local_1c0 == (undefined1 *)0x0) {
      _Src = local_200;
    }
    FUN_1446fe1b8(puVar11 + 5,local_1b8,0);
    puVar7 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar11 + 5;
    }
    memcpy(puVar7,_Src,(longlong)local_1b8 << 3);
  }
  *(undefined4 *)(puVar11 + 0xf) = local_1b0;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = uStack_1ac;
  *(undefined4 *)(puVar11 + 0x10) = uStack_1a8;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uStack_1a4;
  if (local_1c0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_1c0);
  }
  if ((undefined8 *****)local_218[1] != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  lVar5 = 0x15;
  do {
    *(undefined8 *)((longlong)alStack_32d + lVar5) = 0;
    *(undefined8 *)((longlong)alStack_32d + lVar5 + 8) = 0;
    *(undefined4 *)((longlong)&uStack_31d + lVar5) = 0xffffffff;
    (abStack_319 + lVar5)[0] = 0;
    (abStack_319 + lVar5)[1] = 0;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0xd5);
  local_244 = 0;
  uStack_23c = 0x400000000000;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  _local_230 = 0;
  auStack_229._1_4_ = auStack_229._1_4_ & 0xffffff00;
  _auStack_224 = 0;
  auStack_221._1_3_ = 0;
  local_234 = 0x4000;
  _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
  pwVar6 = _Dest + 0x27;
  if ((wchar_t *)param_2[1] < pwVar6) {
    FUN_140023dd8(param_2,0x50);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar6 = _Dest + 0x27;
  }
  *param_2 = (ulonglong)pwVar6;
  wcscpy(_Dest,L"RasterizeVirtualShadowMaps(Non-Nanite)");
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 0x23;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x120);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 0x23;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a217b50;
  memcpy(puVar11 + 2,abStack_319 + 1,0xe8);
  puVar11[0x1f] = 0;
  puVar11[0x20] = CONCAT44(_auStack_224,auStack_229._1_4_);
  *(uint *)((longlong)puVar11 + 0x107) = CONCAT31(auStack_221._1_3_,auStack_221[0]);
  puVar11[0x22] = _Dest;
  lVar5 = 0x11;
  do {
    *(undefined8 *)(local_230 + lVar5 + 7) = 0;
    *(undefined8 *)(auStack_224 + lVar5 + 3) = 0xffffffff00000000;
    *(undefined2 *)((longlong)local_218 + lVar5 + -1) = 0;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0xd1);
  local_158 = (undefined1  [4])0x0;
  local_154 = 0;
  lVar5 = 0xd9;
  do {
    *(undefined8 *)(local_230 + lVar5 + 7) = 0;
    *(undefined8 *)(auStack_224 + lVar5 + 3) = 0xffffffff00000000;
    *(undefined2 *)((longlong)local_218 + lVar5 + -1) = 0;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x199);
  local_90 = 0;
  local_60 = 0;
  local_58 = local_58 & 0xff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = local_68 & 0xff00;
  lVar5 = 0x15;
  do {
    if (*(longlong *)((longlong)alStack_32d + lVar5) == 0) break;
    *(longlong *)(local_230 + lVar5 + 3) = *(longlong *)((longlong)alStack_32d + lVar5);
    bVar1 = abStack_319[lVar5 + 1];
    bVar10 = bVar1 >> 2;
    auStack_221[lVar5 + 4] = bVar10;
    abStack_21c[lVar5] = bVar1 & 3;
    *(undefined4 *)(auStack_224 + lVar5 + 3) = *(undefined4 *)((longlong)&uStack_31d + lVar5);
    *(uint *)(auStack_229 + lVar5 + 4) = (uint)abStack_319[lVar5];
    local_158 = (undefined1  [4])((int)local_158 + 1);
    local_154 = local_154 | bVar10 == 2;
    lVar2 = *(longlong *)((longlong)alStack_32d + lVar5 + 8);
    if (lVar2 != 0) {
      local_90 = 1;
      uVar3 = *(undefined8 *)(auStack_229 + lVar5 + 4);
      *(undefined8 *)((longlong)&lStack_165 + lVar5) = *(undefined8 *)(local_230 + lVar5 + 3);
      *(undefined8 *)(&stack0xfffffffffffffea3 + lVar5) = uVar3;
      *(undefined8 *)(local_158 + lVar5 + 3) = *(undefined8 *)(auStack_221 + lVar5 + 4);
      *(longlong *)((longlong)&lStack_165 + lVar5) = lVar2;
    }
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0xd5);
  auVar4 = local_158;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (longlong)(int)local_158) {
    memcpy(param_2 + 0x15,local_218,(longlong)(int)local_158 * 0x18);
  }
  *(undefined1 (*) [4])(param_2 + 0x14) = auVar4;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfc | 2;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar11 + 2) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x14) = 0;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0x46800000;
  puVar11[4] = 0x3f80000046800000;
  if (0 < *(int *)(param_1 + 0x1d8)) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + lVar5 * 8);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x30);
      pppppuVar9 = local_218;
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *pppppuVar9 = (undefined8 ****)*puVar7;
        puVar7 = puVar7 + 1;
        pppppuVar9 = pppppuVar9 + 1;
      }
      local_1f4 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + lVar5 * 8) + 0x54);
      local_1f8 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + lVar5 * 8) + 0x50);
      FUN_142de5b44(lVar2 + 0xc60,param_2,local_218);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1d8));
  }
  if ((*(byte *)((longlong)param_2 + 0x17b) & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 2;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x18);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 2;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  if ((local_50 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430f04a4 FUN_1430f04a4 body=481 status=ok
// SIG undefined FUN_1430f04a4(void)

void FUN_1430f04a4(longlong param_1,ulonglong *param_2)

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
  FUN_147332d8c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430f0686 FUN_1430f0686 body=232 status=ok
// SIG undefined FUN_1430f0686(void)

void FUN_1430f0686(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1430f076e FUN_1430f076e body=81 status=ok
// SIG undefined FUN_1430f076e(void)

void FUN_1430f076e(undefined8 param_1,longlong *param_2)

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
  FUN_147332e2f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1430f07c0 FUN_1430f07c0 body=31 status=ok
// SIG undefined FUN_1430f07c0(void)

undefined8 FUN_1430f07c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430f07e0 FUN_1430f07e0 body=1324 status=ok
// SIG undefined FUN_1430f07e0(void)

void FUN_1430f07e0(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430f0d0e FUN_1430f0d0e body=31 status=ok
// SIG undefined FUN_1430f0d0e(void)

undefined8 FUN_1430f0d0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430f0d2e FUN_1430f0d2e body=1324 status=ok
// SIG undefined FUN_1430f0d2e(void)

void FUN_1430f0d2e(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430f125c FUN_1430f125c body=31 status=ok
// SIG undefined FUN_1430f125c(void)

undefined8 FUN_1430f125c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430f127c FUN_1430f127c body=1365 status=ok
// SIG undefined FUN_1430f127c(void)

void FUN_1430f127c(longlong param_1,ulonglong *param_2)

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
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
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
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
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
  FUN_14157effc();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca685b8);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
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
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430f17d2 FUN_1430f17d2 body=31 status=ok
// SIG undefined FUN_1430f17d2(void)

undefined8 FUN_1430f17d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430f17f2 FUN_1430f17f2 body=1365 status=ok
// SIG undefined FUN_1430f17f2(void)

void FUN_1430f17f2(longlong param_1,ulonglong *param_2)

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
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
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
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
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
  FUN_141574904();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca68640);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
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
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430f1d48 FUN_1430f1d48 body=29 status=ok
// SIG undefined FUN_1430f1d48(void)

undefined8 FUN_1430f1d48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430f1d7a FUN_1430f1d7a body=85 status=ok
// SIG undefined FUN_1430f1d7a(void)

void FUN_1430f1d7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a329680;
  return;
}



// FUNCTION 1430f1dd0 FUN_1430f1dd0 body=85 status=ok
// SIG undefined FUN_1430f1dd0(void)

void FUN_1430f1dd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a329680;
  return;
}



// FUNCTION 1430f1e26 FUN_1430f1e26 body=118 status=ok
// SIG undefined FUN_1430f1e26(void)

void FUN_1430f1e26(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a329680;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001430f1e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1430f1eb6 FUN_1430f1eb6 body=29 status=ok
// SIG undefined FUN_1430f1eb6(void)

undefined8 FUN_1430f1eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430f1ed4 FUN_1430f1ed4 body=362 status=ok
// SIG undefined FUN_1430f1ed4(void)

void FUN_1430f1ed4(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar3 = *(uint *)(param_2 + 4);
  lVar6 = *(longlong *)(param_2 + 8);
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar8 = (ulonglong)uVar4;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (uVar4 < uVar3) {
    if (*(int *)(lVar6 + uVar8 * 4) != 0) {
      return;
    }
    uVar8 = (ulonglong)(uVar4 + 1);
  }
  fVar10 = 0.0;
  if ((uint)uVar8 < uVar3) {
    fVar9 = (float)*(int *)(lVar6 + uVar8 * 4);
    uVar8 = (ulonglong)((uint)uVar8 + 1);
  }
  else {
    fVar9 = 0.0;
  }
  if ((uint)uVar8 < uVar3) {
    fVar10 = *(float *)(lVar6 + uVar8 * 4);
  }
  fVar1 = *(float *)(DAT_14ca66a88 + 4);
  fVar2 = *(float *)(DAT_14ca66a70 + 4);
  if (0.0 < fVar1) {
    iVar5 = *(int *)(*(longlong *)(lVar7 + 0x210) + 0x5674);
    fVar11 = 1.0 - fVar9 / (float)*(uint *)(lVar7 + 0x160);
    fVar9 = logf(fVar11 / fVar1);
    fVar10 = fVar10 + fVar9 * 1.442695;
    fVar9 = 0.0;
    if (0.0 <= fVar10) {
      fVar9 = fVar10;
    }
    if ((fVar1 < fVar11) || ((uint)(iVar5 - *(int *)(lVar7 + 0x208)) < 0xb)) {
      if (fVar11 <= fVar1) goto LAB_1430f2003;
      *(int *)(lVar7 + 0x208) = iVar5;
      fVar10 = *(float *)(lVar7 + 0x204);
      fVar9 = (fVar9 - fVar10) * 0.5;
    }
    else {
      fVar10 = *(float *)(lVar7 + 0x204);
      fVar9 = (fVar9 - fVar10) * 0.1;
    }
    *(float *)(lVar7 + 0x204) = fVar9 + fVar10;
  }
LAB_1430f2003:
  fVar10 = *(float *)(lVar7 + 0x204);
  if (fVar2 <= *(float *)(lVar7 + 0x204)) {
    fVar10 = fVar2;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  *(float *)(lVar7 + 0x204) = fVar10;
  return;
}



// FUNCTION 1430f203e FUN_1430f203e body=24 status=ok
// SIG undefined FUN_1430f203e(void)

void FUN_1430f203e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001430f2052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1430f2056 FUN_1430f2056 body=29 status=ok
// SIG undefined FUN_1430f2056(void)

undefined8 FUN_1430f2056(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430f2074 FUN_1430f2074 body=481 status=ok
// SIG undefined FUN_1430f2074(void)

void FUN_1430f2074(longlong param_1,ulonglong *param_2)

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
  FUN_147333266(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430f2256 FUN_1430f2256 body=232 status=ok
// SIG undefined FUN_1430f2256(void)

void FUN_1430f2256(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1430f233e FUN_1430f233e body=81 status=ok
// SIG undefined FUN_1430f233e(void)

void FUN_1430f233e(undefined8 param_1,longlong *param_2)

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
  FUN_147333309(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1430f2390 FUN_1430f2390 body=31 status=ok
// SIG undefined FUN_1430f2390(void)

undefined8 FUN_1430f2390(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430f23b0 FUN_1430f23b0 body=1324 status=ok
// SIG undefined FUN_1430f23b0(void)

void FUN_1430f23b0(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1430f28de FUN_1430f28de body=38 status=ok
// SIG undefined FUN_1430f28de(void)

undefined8 FUN_1430f28de(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430f2904 FUN_1430f2904 body=1687 status=ok
// SIG undefined FUN_1430f2904(void)

void FUN_1430f2904(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_198 [32];
  longlong local_178;
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
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint6 local_a8;
  undefined2 uStack_a2;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  *(int *)(puVar16 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar10 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar10 = uStack_160;
    }
    FUN_1446fe144(puVar16 + 2,(int)local_158,0);
    puVar13 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar13 = puVar16 + 2;
    }
    memcpy(puVar13,puVar10,(longlong)(int)local_158);
  }
  puVar16[0xd] = 0;
  puVar10 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar16 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = &uStack_150;
    }
    FUN_1446fe1b8(puVar16 + 5,iStack_108,0);
    puVar13 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar16 + 5;
    }
    memcpy(puVar13,puVar10,(longlong)iStack_108 << 3);
    puVar10 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar16 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar16 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar16 + 0x84) = (undefined4)uStack_f4;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar10);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar16 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar16 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar16 + 2) = (float)iVar4;
  *(float *)((longlong)puVar16 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar16 + 3) = 0;
  *(float *)((longlong)puVar16 + 0x1c) = (float)iVar2;
  *(float *)(puVar16 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
  uVar5 = *(undefined4 *)(param_1 + 0x1ec);
  uVar6 = *(undefined4 *)(param_1 + 0x1e8);
  uVar7 = *(undefined4 *)(param_1 + 0x1e0);
  uVar8 = *(undefined4 *)(param_1 + 0x1e4);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar16 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar16 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  lVar11 = 0;
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a20cb90;
  *(undefined1 *)(puVar16 + 2) = 1;
  *(undefined4 *)((longlong)puVar16 + 0x14) = uVar7;
  *(undefined4 *)(puVar16 + 3) = uVar8;
  *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar6;
  *(undefined4 *)(puVar16 + 4) = uVar5;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  _local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  FUN_144b0e33a(param_2,&local_168);
  uStack_130 = DAT_14c9c0db0;
  local_128 = DAT_14c9c0d98;
  local_138 = *(undefined8 *)(param_1 + 0x1b8);
  local_a8 = (uint6)(uint5)local_a8;
  local_110 = (uint)DAT_14ca84e08 * 5;
  local_168 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar14 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar12,lVar14,1);
    }
  }
  local_158 = lVar11;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar12 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x50) + lVar14 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar11,lVar14,1);
    }
  }
  uStack_160 = (undefined8 *)lVar12;
  lVar11 = FUN_140028f18(param_2);
  if ((lVar11 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar16 + 4;
    if ((undefined8 *)param_2[1] < puVar10) {
      FUN_140023dd8(param_2,0x28);
      puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar16 + 4;
    }
    *param_2 = (ulonglong)puVar10;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar16;
    param_2[6] = (ulonglong)(puVar16 + 1);
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_14a37d348;
    puVar16[2] = lVar11;
    *(undefined4 *)(puVar16 + 3) = 0;
    *(undefined1 *)((longlong)puVar16 + 0x1c) = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x1f0);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar12 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x50) + lVar14 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar11,lVar14,1);
    }
  }
  FUN_14157305e();
  local_178 = uVar9;
  FUN_1449cc26b(param_2,lVar12,*(undefined8 *)(param_1 + 0x1d0),&DAT_14ca68970);
  lVar11 = *(longlong *)(param_1 + 0x1f0);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar14 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar14 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (lVar14 == 0) {
      lVar14 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  FUN_145edf25a();
  local_178 = lVar11 + 0x110;
  FUN_1449cc26b(param_2,lVar14,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca688e8);
  uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x130) + 0x10);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar16 + 4;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x28);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar16 + 4;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1e78c8;
  puVar16[2] = uVar9;
  *(undefined4 *)(puVar16 + 3) = 0;
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar16 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar16 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a20cb90;
  *(undefined1 *)(puVar16 + 2) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0;
  if ((local_90 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430f2fa8 FUN_1430f2fa8 body=31 status=ok
// SIG undefined FUN_1430f2fa8(void)

undefined8 FUN_1430f2fa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430f2fc8 FUN_1430f2fc8 body=1418 status=ok
// SIG undefined FUN_1430f2fc8(void)

void FUN_1430f2fc8(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_158,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar7,(longlong)(int)local_158);
  }
  puVar11[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar11 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_108,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar11 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar12 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar10 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar5;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar3;
  *(float *)(puVar11 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar10 == 0) {
    lVar10 = local_138;
  }
  if (lVar12 == 0) {
    lVar12 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar10;
  lStack_130 = lVar12;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar8;
    *(undefined4 *)(puVar11 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar12,lVar10,1);
    }
  }
  FUN_14157305e();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca68970);
  uVar6 = DAT_14ca89240;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[3] = uVar6;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb5b0;
  puVar11[2] = uVar6;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 3;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 6;
  puVar11[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430f3554 FUN_1430f3554 body=1418 status=ok
// SIG undefined FUN_1430f3554(void)

void FUN_1430f3554(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
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
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145f7753e();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca689f8);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430f3adf FUN_1430f3adf body=7911 status=ok
// SIG undefined FUN_1430f3adf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f3adf(void)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_58,&DAT_14ca63cf8);
  if (cVar2 == '\0') {
    _DAT_14ca63cf8 = 0;
    uRam000000014ca63d00 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_78._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca63d08,L"r.VelocityOutputPass",&local_58,
                L"When to write velocity buffer.\n 0: Renders during the depth pass. This splits the depth pass into 2 phases: with and without velocity.\n 1: Renders during the regular base pass. This adds an extra GBuffer target during base pass rendering. 2: Renders after the regular base pass.\n"
               );
  atexit(FUN_1430ca014);
  local_58._0_4_ = 0xffffffff;
  local_78._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca63d20,L"r.BasePassOutputsVelocity",&local_58,
                L"Deprecated CVar. Use r.VelocityOutputPass instead.\n");
  atexit(FUN_1430ca059);
  local_58._0_4_ = 0xffffffff;
  local_78._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca63d38,L"r.VertexDeformationOutputsVelocity",&local_58,
                L"Deprecated CVar. Use r.Velocity.EnableVertexDeformation instead.\n");
  atexit(FUN_1430ca09e);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
  FUN_14078dbce(&DAT_14ca63d50,L"r.ParallelVelocity",&local_58,
                L"Toggles parallel velocity rendering. Parallel rendering must be enabled for this to have an effect."
               );
  atexit(FUN_1430ca0e3);
  local_50 = FUN_14732a3da;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca63e80,&local_58);
  local_50 = FUN_14732a5a8;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca63fa8,&local_58);
  local_50 = FUN_1401cf006;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca640d0,&local_58);
  FUN_14732a5a8();
  FUN_14732a3da();
  local_68 = 1;
  local_70 = 0;
  local_78 = &DAT_14ca63ef8;
  FUN_140999044(&DAT_14ca640e0,L"VelocityPipeline",&DAT_14ca63dd0,0);
  atexit((_func_5014 *)&LAB_1430ca14c);
  FUN_1401cf006();
  FUN_14732a3da();
  local_68 = 1;
  local_70 = 0;
  local_78 = &DAT_14ca64020;
  FUN_140999044(&DAT_14ca64190,L"MaskedDigistructVelocityPipeline",&DAT_14ca63dd0,0);
  atexit((_func_5014 *)&LAB_1430ca158);
  DAT_14ca64248 = 1;
  uVar3 = (ulonglong)DAT_14c9c0cf0;
  DAT_14ca6424c = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(code **)(&DAT_14cafe970 + uVar3 * 0x10) = FUN_141784b65;
  (&DAT_14cafe978)[uVar3 * 2] = L"Velocity";
  atexit((_func_5014 *)&LAB_1430cc500);
  DAT_14ca64250 = 1;
  DAT_14ca64254 = 1;
  _DAT_14ca11838 = FUN_1404e835f;
  _DAT_14ca11e64 = 3;
  _DAT_14ca12034 = DAT_14ca6424c;
  atexit((_func_5014 *)&LAB_1430cc52a);
  uVar3 = (ulonglong)DAT_14c9c0cec;
  DAT_14ca64258 = DAT_14c9c0cec;
  DAT_14c9c0cec = DAT_14c9c0cec + 1;
  *(code **)(&DAT_14cafe430 + uVar3 * 0x10) = FUN_14732ad7a;
  *(wchar_t **)(&DAT_14cafe438 + uVar3 * 0x10) = L"Velocity";
  atexit((_func_5014 *)&LAB_1430cc588);
  DAT_14ca6425c = 1;
  _DAT_14ca11668 = FUN_1404e835f;
  DAT_14ca11d7c = 3;
  DAT_14ca11f4c = DAT_14ca64258;
  atexit((_func_5014 *)&LAB_1430cc5a1);
  DAT_14ca64260 = 1;
  uVar3 = (ulonglong)DAT_14c9c0cf0;
  DAT_14ca64264 = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(code **)(&DAT_14cafe970 + uVar3 * 0x10) = FUN_1404e833d;
  (&DAT_14cafe978)[uVar3 * 2] = L"GbxForeground_Velocity";
  atexit((_func_5014 *)&LAB_1430cc5e1);
  DAT_14ca64268 = 1;
  DAT_14ca6426c = 1;
  _DAT_14ca11940 = FUN_1404e835f;
  _DAT_14ca11ee8 = 3;
  _DAT_14ca120b8 = DAT_14ca64264;
  atexit((_func_5014 *)&LAB_1430cc60b);
  DAT_14ca64270 = 1;
  uVar3 = (ulonglong)DAT_14c9c0cf0;
  DAT_14ca64274 = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(code **)(&DAT_14cafe970 + uVar3 * 0x10) = FUN_141784b87;
  (&DAT_14cafe978)[uVar3 * 2] = L"TranslucentVelocity";
  atexit((_func_5014 *)&LAB_1430cc669);
  DAT_14ca64278 = 1;
  DAT_14ca6427c = 1;
  _DAT_14ca11840 = FUN_1404d34b3;
  _DAT_14ca11e68 = 3;
  _DAT_14ca12038 = DAT_14ca64274;
  atexit((_func_5014 *)&LAB_1430cc693);
  uVar3 = (ulonglong)DAT_14c9c0cec;
  DAT_14ca64280 = DAT_14c9c0cec;
  DAT_14c9c0cec = DAT_14c9c0cec + 1;
  *(code **)(&DAT_14cafe430 + uVar3 * 0x10) = FUN_14732ad9c;
  *(wchar_t **)(&DAT_14cafe438 + uVar3 * 0x10) = L"TranslucentVelocity";
  atexit((_func_5014 *)&LAB_1430cc6f1);
  DAT_14ca64284 = 1;
  _DAT_14ca11670 = FUN_1404d34b3;
  DAT_14ca11d80 = 3;
  DAT_14ca11f50 = DAT_14ca64280;
  atexit((_func_5014 *)&LAB_1430cc70a);
  DAT_14ca64288 = 1;
  uVar3 = (ulonglong)DAT_14c9c0cf0;
  DAT_14ca6428c = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(code **)(&DAT_14cafe970 + uVar3 * 0x10) = FUN_1404d3491;
  (&DAT_14cafe978)[uVar3 * 2] = L"GbxForeground_TranslucentVelocity";
  atexit((_func_5014 *)&LAB_1430cc74a);
  DAT_14ca64290 = 1;
  DAT_14ca64294 = 1;
  _DAT_14ca11948 = FUN_1404d34b3;
  _DAT_14ca11eec = 3;
  _DAT_14ca120bc = DAT_14ca6428c;
  atexit((_func_5014 *)&LAB_1430cc774);
  FUN_1411e592c(&DAT_14ca64295,L"VirtualShadowMapUbSlot");
  local_50 = FUN_144938434;
  local_58 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca64320,&local_58);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca64338,L"r.Shadow.Virtual.ShowLightDrawEvents",&DAT_14ca64330,
                L"Enable Virtual Shadow Maps per-light draw events - may affect performance especially when there are many small lights in the scene."
               );
  atexit(FUN_1430cc7de);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca64348,L"r.Shadow.Virtual.MarkPagesUsingFroxels",&local_58,
                L"Experimental: If enabled the virtual shadow map pages are marked using froxels that are generated during HZB build.\n  Higher throughput as it is not bandwidth limited. Is approximate as it only marks the center of each froxel representing 8x8 pixels."
               );
  atexit(FUN_1430cc823);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca64360,L"r.Shadow.Virtual.DebugDrawFroxels",&local_58,
                L"Render the froxels using shaderprint (which needs to be enabled) r.ShaderPrint.MaxLine also needs to be set to a high value as this produces many lines."
               );
  atexit(FUN_1430cc868);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x41a00000);
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca64378,L"r.Shadow.Virtual.DebugDrawFroxelRange",&local_58,
                L"Range in froxel tiles from the mouse cursor which to draw debug froxels in.");
  atexit(FUN_1430cc8ad);
  local_58 = (undefined8 *)0x0;
  local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
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
  *local_58 = &PTR_FUN_14a328dd0;
  local_5c = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x60);
  FUN_14078dbce(&DAT_14ca64390,L"r.Shadow.Virtual.Enable",&local_5c,
                L"Enable Virtual Shadow Maps. Renders geometry into virtualized shadow depth maps for shadowing.\nProvides high - quality shadows for next - gen projects with simplified setup.High efficiency culling when used with Nanite."
               );
  (**(code **)(*DAT_14ca64398 + 200))(DAT_14ca64398,&local_58);
  if ((int)local_50 == 0) {
LAB_1430f41e5:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_1430f41e5;
  }
  atexit(FUN_1430cc8f2);
  local_58._0_4_ = 0x800;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca643a8,L"r.Shadow.Virtual.MaxPhysicalPages",&local_58,
                L"Maximum number of physical pages in the pool.\nMore space for pages means more memory usage, but allows for higher resolution shadows.\nIdeally this value is large enough to fit enough pages for all the lights in the scene, but not too large to waste memory.\nEnable \'ShowStats\' to see how many pages are allocated in the pool right now.\nFor more page pool control, see the \'ResolutionLodBias*\', \'DynamicRes.*\' and \'Cache.StaticSeparate\' cvars."
               );
  atexit(FUN_1430cc937);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca643c0,L"r.Shadow.Virtual.Cache.StaticSeparate",&local_58,
                L"When enabled, caches static objects in separate pages from dynamic objects.\nThis can improve performance in largely static scenes, but doubles the memory cost of the physical page pool."
               );
  atexit(FUN_1430cc97c);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca643d8,L"r.Shadow.Virtual.DynamicHZB",&local_58,
                L"When enabled, a separate HZB is built for dynamic cached pages.\nThis can improve performance in cached scenes with a lot of dynamic overdraw, e.g. a forest with a static sun light.\nConstructing separate HZB doubles the memory cost of the HZB (1/4 of the page pool) and incurs some cost for building the second HZB."
               );
  atexit(FUN_1430cc9c1);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca643f0,L"r.Shadow.Virtual.ShowStats",&local_58,L"Show VSM statistics.");
  atexit(FUN_1430cca06);
  local_58._0_4_ = 0x3d4ccccd;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca64408,L"r.Shadow.Virtual.PageDilationBorderSizeDirectional",&local_58,
                L"If a screen pixel falls within this fraction of a page border for directional lights, the adacent page will also be mapped.Higher values can reduce page misses at screen edges or disocclusions, but increase total page counts."
               );
  atexit(FUN_1430cca4b);
  local_58._0_4_ = 0x3d4ccccd;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca64420,L"r.Shadow.Virtual.PageDilationBorderSizeLocal",&local_58,
                L"If a screen pixel falls within this fraction of a page border for local lights, the adacent page will also be mapped.Higher values can reduce page misses at screen edges or disocclusions, but increase total page counts."
               );
  atexit(FUN_1430cca90);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca64438,L"r.Shadow.Virtual.MarkPixelPages",&local_58,
                L"Marks pages in virtual shadow maps based on depth buffer pixels. Ability to disable is primarily for profiling and debugging."
               );
  atexit(FUN_1430ccad5);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca69238,L"r.Shadow.Virtual.MarkPixelPagesMipModeLocal",&local_58,
                L"When enabled, this uses a subset of mips to reduce instance duplication in VSMs. Will result in better performance but a harsher falloff on mip transitions.\n 0 - Disabled: Use all 8 mips\n 1 - Quality Mode: Use 4 higher res mips (16k, 4k, 1k, 256)\n 2 - Performance Mode: Use 4 lower res mips (8k, 2k, 512, 128)\n"
               );
  atexit(FUN_1430ccb1a);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca64450,L"r.Shadow.Virtual.MarkCoarsePagesDirectional",&local_58,
                L"Marks coarse pages in directional light virtual shadow maps so that low resolution data is available everywhere.Ability to disable is primarily for profiling and debugging."
               );
  atexit(FUN_1430ccb5f);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca64468,L"r.Shadow.Virtual.MarkCoarsePagesLocal",&local_58,
                L"Marks coarse pages in local light virtual shadow maps so that low resolution data is available everywhere.Ability to disable is primarily for profiling and debugging."
               );
  atexit(FUN_1430ccba4);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca64480,L"r.Shadow.Virtual.NonNanite.IncludeInCoarsePages",&local_58,
                L"Include non-Nanite geometry in coarse pages.Rendering non-Nanite geometry into large coarse pages can be expensive; disabling this can be a significant performance win."
               );
  atexit(FUN_1430ccbe9);
  local_58._0_4_ = 0x3f800000;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca64498,L"r.Shadow.Virtual.NonNanite.CulledInstanceAllocationFactor",
                &local_58,
                L"Allocation size scale factor for the buffer used to store instances after culling.\nThe total size accounts for the worst-case scenario in which all instances are emitted into every clip or mip level.\nThis is far more than we\'d expect in reasonable circumstances, so this scale factor is used to reduce memory pressure.\nThe actual number cannot be known on the CPU as the culling emits an instance for each clip/mip level that is overlapped.\nSetting to 1.0 is fully conservative. Lowering this is likely to produce artifacts unless you\'re certain the buffer won\'t overflow."
               );
  atexit(FUN_1430ccc2e);
  local_58._0_4_ = 0x8000000;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca644b0,L"r.Shadow.Virtual.NonNanite.MaxCulledInstanceAllocationSize",
                &local_58,
                L"Maximum number of instances that may be output from the culling pass into all VSM mip/clip levels. At 12 byte per instance reference this represents a 1.5GB clamp."
               );
  atexit(FUN_1430ccc73);
  local_58._0_4_ = 0xffffffff;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca644c8,L"r.Shadow.Virtual.ShowClipmapStats",&local_58,
                L"Set to the number of clipmap you want to show stats for (-1 == off)");
  atexit(FUN_1430cccb8);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca644e0,L"r.Shadow.Virtual.CullBackfacingPixels",&local_58,
                L"When enabled does not generate shadow data for pixels that are backfacing to the light."
               );
  atexit(FUN_1430cccfd);
  local_78._0_4_ = 0x24;
  FUN_141471170(&DAT_14ca644f8,L"r.Shadow.Virtual.NonNaniteVSM",&DAT_14c760a9c,
                L"Enable support for non-nanite Virtual Shadow Maps.Read-only and to be set in a config file (requires restart)."
               );
  atexit(FUN_1430ccd42);
  local_58._0_4_ = 2;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca64508,L"r.Shadow.Virtual.NonNanite.UseHZB",&local_58,
                L"Cull Non-Nanite instances using HZB.\n  Set to 0 to disable.\n  Set to 1 to use HZB from previous frame. Can incorrectly cull in some cases due to outdated data.\n  Set to 2 to use two-pass Nanite culling with HZB from the current frame."
               );
  atexit(FUN_1430ccd87);
  local_58._0_4_ = 0x10;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca64520,L"r.Shadow.Virtual.OnePassProjection.MaxLightsPerPixel",&local_58,
                L"Maximum lights per pixel that get full filtering when using one pass projection and clustered shading.Generally set to 8 (32bpp), 16 (64bpp) or 32 (128bpp). Lower values require less transient VRAM during the lighting pass."
               );
  atexit(FUN_1430ccdcc);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca64538,L"r.Shadow.Virtual.NonNanite.Batch",&local_58,&DAT_149e0635c);
  atexit(FUN_1430cce11);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca64550,L"r.Shadow.Virtual.NonNanite.UseRadiusThreshold",&local_58,
                L"If enabled (default) the r.Shadow.RadiusThreshold cvar is also used for uncached virtual shadow maps to cull small non-nanite instances."
               );
  atexit(FUN_1430cce56);
  local_58._0_4_ = 0x41800000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca64568,L"r.Shadow.Virtual.CoarsePagePixelThresholdDynamic",&local_58,
                L"If a dynamic (non-nanite) instance has a smaller estimated pixel footprint than this value, it should not be drawn into a coarse page. Higher values cull away more instances."
               );
  atexit(FUN_1430cce9b);
  local_58._0_4_ = 0x3f800000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca64580,L"r.Shadow.Virtual.CoarsePagePixelThresholdStatic",&local_58,
                L"If a static (non-nanite) instance has a smaller estimated pixel footprint than this value, it should not be drawn into a coarse page. Higher values cull away more instances.\nThis value is typically lower than the non-static one because the static pages have better caching."
               );
  atexit(FUN_1430ccee0);
  local_58._0_4_ = 0x40800000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca64598,L"r.Shadow.Virtual.CoarsePagePixelThresholdDynamicNanite",&local_58,
                L"If a dynamic Nanite instance has a smaller estimated pixel footprint than this value, it should not be drawn into a coarse page. Higher values cull away more instances.\nThis value is typically lower than the non-Nanite one because Nanite has lower overhead for drawing small objects."
               );
  atexit(FUN_1430ccf25);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca645b0,L"r.Shadow.Virtual.Cache.AllocateViaLRU",&local_58,
                L"Prioritizes keeping more recently requested cached physical pages when allocating for new requests."
               );
  atexit(FUN_1430ccf6a);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca645c8,L"r.Shadow.Virtual.Clipmap.GreedyLevelSelection",&local_58,
                L"When enabled, allows greedily sampling more detailed clipmap levels if they happen to be mapped.\nThis can increase shadow quality from certain viewing angles, but makes the clipmap boundry less stable which can exacerbate visual artifacts at low shadow resolutions."
               );
  atexit(FUN_1430ccfaf);
  local_58._0_4_ = 2;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca645e0,L"r.Shadow.Virtual.UseHZB",&local_58,
                L"Enables HZB for (Nanite) Virtual Shadow Maps - Non-Nanite unfortunately has a separate flag with different semantics: r.Shadow.Virtual.NonNanite.UseHZB.\n 0 - No HZB occlusion culling\n 1 - Approximate Single-pass HZB occlusion culling (using previous frame HZB)\n 2 - Two-pass occlusion culling (default)."
               );
  atexit(FUN_1430ccff4);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca645f8,L"r.Shadow.Virtual.ForceFullHZBUpdate",&local_58,
                L"Forces full HZB update every frame rather than just dirty pages.\n");
  atexit(FUN_1430cd039);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca64610,L"r.Shadow.Virtual.NonNanite.SinglePassBatched",&local_58,
                &DAT_149e0635c);
  atexit(FUN_1430cd07e);
  local_58._0_4_ = 2;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca64628,L"r.Shadow.Virtual.PageMarkingPixelStrideX",&local_58,
                L"During page marking, instead of testing every screen pixel, test every Nth pixel.\nPage marking from screen pixels is used to determine which VSM pages are seen from the camera and need to be rendered.\nIncreasing this value reduces page-marking costs, but could introduce artifacts due to missing pages.\nWith sufficiently low values, it is likely a neighbouring pixel will mark the required page anyway."
               );
  atexit(FUN_1430cd0c3);
  local_58._0_4_ = 2;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca64640,L"r.Shadow.Virtual.PageMarkingPixelStrideY",&local_58,
                L"Same as PageMarkingPixelStrideX, but on the vertical axis of the screen.");
  atexit(FUN_1430cd108);
  local_58._0_4_ = 0x3c75c28f;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca64658,L"r.Shadow.Virtual.ScreenRayLength",&local_58,
                L"Length of the screen space shadow trace away from receiver surface (smart shadow bias) before the VSM / SMRT lookup."
               );
  atexit(FUN_1430cd14d);
  local_58._0_4_ = 0x3f000000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca64670,L"r.Shadow.Virtual.NormalBias",&local_58,
                L"Receiver offset along surface normal for shadow lookup. Scaled by distance to camera.Higher values avoid artifacts on surfaces nearly parallel to the light, but also visibility offset shadows and increase the chance of hitting unmapped pages."
               );
  atexit(FUN_1430cd192);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca64688,L"r.Shadow.Virtual.SMRT.AdaptiveRayCount",&local_58,
                L"Shoot fewer rays in fully shadowed and unshadowed regions. Currently only supported with OnePassProjection. "
               );
  atexit(FUN_1430cd1d7);
  local_58._0_4_ = 7;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca646a0,L"r.Shadow.Virtual.SMRT.RayCountLocal",&local_58,
                L"Ray count for shadow map tracing of local lights. 0 = disabled.");
  atexit(FUN_1430cd21c);
  local_58._0_4_ = 8;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca646b8,L"r.Shadow.Virtual.SMRT.SamplesPerRayLocal",&local_58,
                L"Shadow map samples per ray for local lights");
  atexit(FUN_1430cd261);
  local_58._0_4_ = 0x3cf5c28f;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca646d0,L"r.Shadow.Virtual.SMRT.MaxRayAngleFromLight",&local_58,
                L"Max angle (in radians) a ray is allowed to span from the light\'s perspective for local lights.Smaller angles limit the screen space size of shadow penumbra. Larger angles lead to more noise. "
               );
  atexit(FUN_1430cd2a6);
  local_58._0_4_ = 0x3d4ccccd;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca646e8,L"r.Shadow.Virtual.SMRT.ExtrapolateMaxSlopeLocal",&local_58,
                L"Maximum depth slope when extrapolating behind occluders for local lights.\nHigher values allow softer penumbra edges but can introduce light leaks behind second occluders.\nSetting to 0 will disable slope extrapolation slightly improving projection performance, at the cost of reduced penumbra quality."
               );
  atexit(FUN_1430cd2eb);
  local_58._0_4_ = 0x40000000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca64700,L"r.Shadow.Virtual.SMRT.TexelDitherScaleLocal",&local_58,
                L"Applies a dither to the shadow map ray casts for local lights to help hide aliasing due to insufficient shadow resolution.\nSetting this too high can cause shadows light leaks near occluders."
               );
  atexit(FUN_1430cd330);
  local_58._0_4_ = 0x42480000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca64718,L"r.Shadow.Virtual.SMRT.MaxSlopeBiasLocal",&local_58,
                L"Maximum depth slope. Low values produce artifacts if shadow resolution is insufficient. High values can worsen light leaks near occluders and sparkly pixels in shadowed areas."
               );
  atexit(FUN_1430cd375);
  local_58._0_4_ = 7;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca64730,L"r.Shadow.Virtual.SMRT.RayCountDirectional",&local_58,
                L"Ray count for shadow map tracing of directional lights. 0 = disabled.");
  atexit(FUN_1430cd3ba);
  local_58._0_4_ = 8;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca64748,L"r.Shadow.Virtual.SMRT.SamplesPerRayDirectional",&local_58,
                L"Shadow map samples per ray for directional lights");
  atexit(FUN_1430cd3ff);
  local_58._0_4_ = 0x40a00000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca64760,L"r.Shadow.Virtual.SMRT.ExtrapolateMaxSlopeDirectional",&local_58,
                L"Maximum depth slope when extrapolating behind occluders for directional lights.\nHigher values allow softer penumbra edges but can introduce light leaks behind second occluders.\nSetting to 0 will disable slope extrapolation slightly improving projection performance, at the cost of reduced penumbra quality."
               );
  atexit(FUN_1430cd444);
  local_58._0_4_ = 0x40000000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca64778,L"r.Shadow.Virtual.SMRT.TexelDitherScaleDirectional",&local_58,
                L"Applies a dither to the shadow map ray casts for directional lights to help hide aliasing due to insufficient shadow resolution.\nSetting this too high can cause shadows light leaks near occluders."
               );
  atexit(FUN_1430cd489);
  local_58._0_4_ = 0x3fc00000;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca64790,L"r.Shadow.Virtual.SMRT.RayLengthScaleDirectional",&local_58,
                L"Length of ray to shoot for directional lights, scaled by distance to camera.Shorter rays limit the screen space size of shadow penumbra. Longer rays require more samples to avoid shadows disconnecting from contact points. "
               );
  atexit(FUN_1430cd4ce);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca647a8,L"r.Shadow.Virtual.SMRT.SamplesPerRayHair",&local_58,
                L"Shadow map samples per ray for hair");
  atexit(FUN_1430cd513);
  local_50 = FUN_14159a700;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca648d8,&local_58);
  local_50 = FUN_141569324;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca64a00,&local_58);
  local_50 = FUN_145eb1c44;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca64b28,&local_58);
  local_50 = FUN_1415745bc;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca64c50,&local_58);
  local_50 = FUN_141598a16;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca64d78,&local_58);
  local_50 = FUN_141578e80;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca64ea0,&local_58);
  local_50 = FUN_1415790a6;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca64fc8,&local_58);
  local_50 = FUN_14732b4a6;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca650f0,&local_58);
  local_50 = FUN_1415a09fe;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca65218,&local_58);
  local_50 = FUN_14157a2da;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca65340,&local_58);
  local_50 = FUN_14157a500;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca65468,&local_58);
  local_50 = FUN_14157f886;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca65590,&local_58);
  local_50 = FUN_1415792cc;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca656b8,&local_58);
  local_50 = FUN_1415794f2;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca657e0,&local_58);
  local_50 = FUN_141598c3c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca65908,&local_58);
  local_50 = FUN_141599bcc;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca65a30,&local_58);
  local_50 = FUN_141579718;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca65b58,&local_58);
  local_50 = FUN_14157a726;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca65c80,&local_58);
  local_50 = FUN_145e77e66;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca65da8,&local_58);
  local_50 = FUN_14157993e;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca65ed0,&local_58);
  local_50 = FUN_145f7b5ac;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca65ff8,&local_58);
  local_50 = FUN_145e97eee;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca66120,&local_58);
  local_50 = FUN_141592f9c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca66248,&local_58);
  local_50 = FUN_14032f1ee;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca66370,&local_58);
  local_50 = FUN_14034690e;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca66498,&local_58);
  local_50 = FUN_14157a94c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca665c0,&local_58);
  local_50 = FUN_1415932a6;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca66700,&local_58);
  local_50 = FUN_14157eeda;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca66828,&local_58);
  local_50 = FUN_1415747e2;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca66950,&local_58);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca66960,L"r.Shadow.Virtual.AccumulateStats",&DAT_14ca66970,
                L"When nonzero, VSM stats will be collected over multiple frames and written to a CSV file output to the Saved/Profiling directory.\n  If set to a number N > 0 it will auto disable and write the result after N frames, if < 0 it must be manually turned off by setting back to 0."
               );
  atexit(FUN_1430e1898);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca66978,L"r.Shadow.Virtual.Cache",&local_58,L"Turn on to enable caching");
  atexit(FUN_1430e18dd);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca66990,L"r.Shadow.Virtual.Cache.DrawInvalidatingBounds",&local_58,
                L"Turn on debug render cache invalidating instance bounds, heat mapped by number of pages invalidated.\n   1  = Draw all bounds.\n   2  = Draw those invalidating static cached pages only\n   3  = Draw those invalidating dynamic cached pages only"
               );
  atexit(FUN_1430e1922);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca669a8,L"r.Shadow.Virtual.Cache.InvalidateUseHZB",&local_58,
                L" When enabled, instances invalidations are tested against the HZB. Instances that are fully occluded will not cause page invalidations."
               );
  atexit(FUN_1430e1967);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca669c0,L"r.Shadow.Virtual.Cache.ClipmapPanning",&DAT_14c760a90,
                L"Enable support for panning cached clipmap pages for directional lights, allowing re-use of cached data when the camera moves. Keep this enabled outside of debugging."
               );
  atexit(FUN_1430e19ac);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca669d0,L"r.Shadow.Virtual.Cache.DeformableMeshesInvalidate",&DAT_14c760a94,
                L"If enabled, Primitive Proxies that are marked as having deformable meshes (HasDeformableMesh() == true) cause invalidations regardless of whether their transforms are updated."
               );
  atexit(FUN_1430e19f1);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca669e0,L"r.Shadow.Virtual.Cache.DebugSkipRevealedPrimitivesInvalidation",
                &DAT_14ca669f0,
                L"Debug skip invalidation of revealed Non-Nanite primitives, i.e. they go from being culled on the CPU to unculled."
               );
  atexit(FUN_1430e1a36);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca669f8,L"r.Shadow.Virtual.Cache.ForceInvalidateDirectional",&DAT_14ca69250,
                L"Forces the clipmap to always invalidate, useful to emulate a moving sun to avoid misrepresenting cache performance."
               );
  atexit(FUN_1430e1a7b);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca66a08,L"r.Shadow.Virtual.Cache.MaxPageAgeSinceLastRequest",&DAT_14c760a8c,
                L"The maximum number of frames to allow cached pages that aren\'t requested in the current frame to live. 0=disabled."
               );
  atexit(FUN_1430e1ac0);
  local_58._0_4_ = 10;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca66a18,L"r.Shadow.Virtual.Cache.MaxLightAgeSinceLastRequest",&local_58,
                L"The maximum number of frames to allow lights (and their associated pages) that aren\'t present in the current frame to live in the cache.\nLarger values can allow pages from offscreen local lights to live longer, but can also increase various page table management overheads."
               );
  atexit(FUN_1430e1b05);
  local_58._0_4_ = 100;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca66a30,L"r.Shadow.Virtual.Cache.StaticSeparate.FramesStaticThreshold",
                &local_58,
                L"Number of frames without an invalidation before an object will transition to static caching."
               );
  atexit(FUN_1430e1b4a);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca66a48,L"r.Shadow.Virtual.AllocatePagePoolAsReservedResource",&local_58,
                L"Allocate VSM page pool as a reserved/virtual texture, backed by N small physical memory allocations to reduce fragmentation."
               );
  atexit(FUN_1430e1b8f);
  local_58._0_4_ = 0x40000000;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca66a60,L"r.Shadow.Virtual.DynamicRes.MaxResolutionLodBias",&local_58,
                L"As page allocation approaches the pool capacity, VSM resolution ramps down by biasing the LOD up, similar to \'ResolutionLodBiasDirectional\'.\nThis is the maximum LOD bias to clamp to for global dynamic shadow resolution reduction. 0 = disabled"
               );
  atexit(FUN_1430e1bd4);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x3f59999a);
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca66a78,L"r.Shadow.Virtual.DynamicRes.MaxPagePoolLoadFactor",&local_58,
                L"If allocation exceeds this factor of total page pool capacity, shadow resolution will be biased downwards. 0 = disabled"
               );
  atexit(FUN_1430e1c19);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca66a90,L"r.Shadow.Virtual.Cache.CPUCullInvalidationsOutsideLightRadius",
                &DAT_14c760a98,L"CPU culls invalidations that are outside a local light\'s radius.")
  ;
  atexit(FUN_1430e1c5e);
  local_58 = (undefined8 *)0x0;
  local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
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
  *local_58 = &PTR_FUN_14a329680;
  local_78 = (undefined *)((ulonglong)local_78._4_4_ << 0x20);
  FUN_14152bcb8(&DAT_14ca66aa0,L"r.Gbx.Shadow.Virtual.Cache.Invalidate",
                L"Request an invalidation of the VSM cache. Needed after a teleport, since system doesn\'t recognize nanite streaming."
                ,&local_58);
  if ((int)local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1430f537b;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1430f537b:
  atexit(FUN_1430e1ca3);
  DAT_14ca69230 = 0xffffffff;
  _DAT_14ca69228 = &PTR_FUN_14a3296e8;
  if (DAT_14ca4ae08 == (undefined8 *)0x0) {
    DAT_14ca4ae08 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca4ae08 = 0;
    DAT_14ca4ae08[1] = 0;
  }
  FUN_145c269b4(DAT_14ca4ae08,&DAT_14ca69228);
  local_50 = FUN_145e5f7b8;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca66bd0,&local_58);
  local_50 = FUN_1415659ce;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca66cf8,&local_58);
  local_58._0_4_ = 0xbf000000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca66d08,L"r.Shadow.Virtual.ResolutionLodBiasDirectional",&local_58,
                L"Bias applied to LOD calculations for directional lights. -1.0 doubles resolution, 1.0 halves it and so on."
               );
  atexit(FUN_1430e4707);
  local_58._0_4_ = 0x3f000000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca66d20,L"r.Shadow.Virtual.ResolutionLodBiasDirectionalMoving",&local_58,
                L"Bias applied to LOD calculations for directional lights that are moving. -1.0 doubles resolution, 1.0 halves it and so on.\nThe bias transitions smoothly back to ResolutionLodBiasDirectional as the light transitions to non-moving, see \'r.Shadow.Scene.LightActiveFrameCount\'."
               );
  atexit(FUN_1430e474c);
  local_58._0_4_ = 6;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca66d38,L"r.Shadow.Virtual.Clipmap.FirstLevel",&local_58,
                L"First level of the virtual clipmap. Lower values allow higher resolution shadows closer to the camera, but may increase page count."
               );
  atexit(FUN_1430e4791);
  local_58._0_4_ = 0x16;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca66d50,L"r.Shadow.Virtual.Clipmap.LastLevel",&local_58,
                L"Last level of the virtual clipmap. Indirectly determines radius the clipmap can cover. Each extra level doubles the maximum range, but may increase page count."
               );
  atexit(FUN_1430e47d6);
  local_58._0_4_ = 0xf;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca66d68,L"r.Shadow.Virtual.Clipmap.FirstCoarseLevel",&local_58,
                L"First level of the clipmap to mark coarse pages for. Lower values allow higher resolution coarse pages near the camera but increase total page counts."
               );
  atexit(FUN_1430e481b);
  local_58._0_4_ = 0x12;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca66d80,L"r.Shadow.Virtual.Clipmap.LastCoarseLevel",&local_58,
                L"Last level of the clipmap to mark coarse pages for. Higher values provide dense clipmap data for a longer radius but increase total page counts."
               );
  atexit(FUN_1430e4860);
  local_58._0_4_ = 0x447a0000;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca66d98,L"r.Shadow.Virtual.Clipmap.ZRangeScale",&local_58,
                L"Scale of the clipmap level depth range relative to the radius. Affects z-near/z-far of the shadow map. Should generally be at least 10 or it will result in excessive cache invalidations. Values that are too large cause depth imprecisions and shadow flickering."
               );
  atexit(FUN_1430e48a5);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca66db0,L"r.Shadow.Virtual.Clipmap.MinCameraViewportWidth",&local_58,
                L"If greater than zero, clamps the camera viewport dimensions used to adjust the clipmap resolution.\nThis can be useful to avoid dynamic resolution indirectly dropping the shadow resolution far too low."
               );
  atexit(FUN_1430e48ea);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca66dc8,L"r.Shadow.Virtual.Clipmap.WPODisableDistance",&local_58,
                L"When enabled, disables WPO animation in clipmap levels based on a primitive\'s WPO disable distance and r.Shadow.Virtual.Clipmap.WPODisableDistance.LodBias setting."
               );
  atexit(FUN_1430e492f);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,3);
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca66de0,L"r.Shadow.Virtual.Clipmap.WPODisableDistance.LodBias",&local_58,
                L"The number of clipmap levels further than the distance that an instance would be animated to allow shadow animation.\nTypically 2-4 works well but may need to be adjusted for very low light angles with significant WPO movement."
               );
  atexit(FUN_1430e4974);
  local_58 = (undefined8 *)CONCAT71(local_58._1_7_,1);
  local_78._0_4_ = 0x60;
  FUN_140bd5914(&DAT_14ca66df8,L"r.Ortho.VSM.EstimateClipmapLevels",&local_58,
                L"Enable/Disable calculating the FirstLevel VSM based on the current camera OrthoWidth"
               );
  atexit(FUN_1430e49b9);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca66e10,L"r.Ortho.VSM.ClipmapLODBias",&local_58,
                L"LOD setting for adjusting the VSM first level from it\'s OrthoWidth based value.")
  ;
  atexit(FUN_1430e49fe);
  local_58._0_1_ = 1;
  local_78._0_4_ = 0x60;
  FUN_140bd5914(&DAT_14ca66e28,L"r.Ortho.VSM.ProjectViewOrigin",&local_58,
                L"Enable/Disable moving the WorldOrigin of the VSM clipmaps to focus around the ViewTarget (if present)"
               );
  atexit(FUN_1430e4a43);
  local_58 = (undefined8 *)CONCAT71(local_58._1_7_,1);
  local_78._0_4_ = 0x60;
  FUN_140bd5914(&DAT_14ca66e40,L"r.Ortho.VSM.RayCastViewOrigin",&local_58,
                L"Enable/Disable whether the ViewOrigin should be estimated with a raycast if the ViewTarget is not present (i.e. standalone camera)"
               );
  atexit(FUN_1430e4a88);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca66e58,L"r.Shadow.Virtual.GbxClipmapPerFrame",&DAT_14ca66ab0,
                L"Configure the maximum number of directional light VSM clipmaps updated per frame\n(<=0: Disabled)\n( >0: Number of climaps rendered per frame. Default=3)"
               );
  atexit(FUN_1430e4acd);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14ca66e68,L"r.Shadow.Virtual.GbxSkipSmallShadowMove",&DAT_14ca66ab4,
                L"Avoid updating VSM Cached Clipmaps when directional light angle change does not cause enough shadow movement to happen.\n(<=0.0: Disabled, always update)\n( >0.0: Estimated shadow movement amount movement needed (in cm) to update the cached clipmap. Default=10.0)"
               );
  atexit(FUN_1430e4b12);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca66e78,L"r.Shadow.Virtual.ForcePerLightShadowMaskClear",&local_58,
                L"For debugging purposes. When enabled, the shadow mask texture is cleared before the projection pass writes to it. Projection pass writes all relevant pixels, so clearing should be unnecessary."
               );
  atexit(FUN_1430e4b57);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_78._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca66e90,L"r.Shadow.Virtual.TranslucentQuality",&local_58,
                L"Quality of shadow for lit translucent surfaces. This will be applied on all translucent surfaces, and has high-performance impact.\nSet to 1 to enable the high-quality mode."
               );
  atexit(FUN_1430e4b9c);
  local_58._0_4_ = 5;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca66ea8,L"r.Shadow.Virtual.SubsurfaceShadowMinSourceAngle",&local_58,
                L"Minimum source angle (in degrees) used for shadow & transmittance of sub-surface materials with directional lights.\nTo emulate light diffusion with sub-surface materials, VSM can increase the light source radius depending on the material opacity.\nThe higher this value, the more diffuse the shadowing with these materials will appear."
               );
  atexit(FUN_1430e4be1);
  local_58._0_4_ = 0xffffffff;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca66ec0,L"gbx.Shadow.Virtual.ForegroundProjectionModeOverride",&local_58,
                L"How foreground shadows are projected for local light\n-1 - No Override\n0 - Default behavior\n1 - Expand foreground depth for local lights\n2 - Reject foreground depth for local lights"
               );
  atexit(FUN_1430e4c26);
  local_58 = (undefined8 *)((ulonglong)local_58._4_4_ << 0x20);
  local_78._0_4_ = 4;
  FUN_14078dbce(&DAT_14ca66ed8,L"gbx.Shadow.Virtual.ForegroundProjectionModeDefault",&local_58,
                L"How foreground shadows are projected for local light\n0 - Default behavior\n1 - Expand foreground depth for local lights\n2 - Reject foreground depth for local lights"
               );
  atexit(FUN_1430e4c6b);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
  FUN_141471170(&DAT_14ca66ef8,L"r.Shadow.Virtual.Visualize.ShowCachedPagesOnly",&DAT_14ca66ef0,
                L"When true, shows the cached pages for all lights and hides uncached pages.");
  atexit(FUN_1430e4cb0);
  local_50 = FUN_14159e15e;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca67020,&local_58);
  local_50 = FUN_145edefec;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca67148,&local_58);
  local_50 = FUN_141572f3c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca67270,&local_58);
  local_50 = FUN_145f772d0;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca67398,&local_58);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430f59c8 FUN_1430f59c8 body=69 status=ok
// SIG undefined FUN_1430f59c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f59c8(void)

{
  _DAT_14ca69268 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69270,1);
  return;
}



// FUNCTION 1430f5a0d FUN_1430f5a0d body=69 status=ok
// SIG undefined FUN_1430f5a0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5a0d(void)

{
  _DAT_14ca69278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69280,1);
  return;
}



// FUNCTION 1430f5a52 FUN_1430f5a52 body=47 status=ok
// SIG undefined FUN_1430f5a52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5a52(void)

{
  _DAT_14ca69288 = &PTR_FUN_14a2c4720;
  FUN_144725486(&DAT_14ca69288);
  FUN_14003f39a(&DAT_14ca69288);
  return;
}



// FUNCTION 1430f5ab1 FUN_1430f5ab1 body=69 status=ok
// SIG undefined FUN_1430f5ab1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5ab1(void)

{
  _DAT_14ca69620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69628,1);
  return;
}



// FUNCTION 1430f5af6 FUN_1430f5af6 body=69 status=ok
// SIG undefined FUN_1430f5af6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5af6(void)

{
  _DAT_14ca69638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69640,1);
  return;
}



// FUNCTION 1430f5b3b FUN_1430f5b3b body=69 status=ok
// SIG undefined FUN_1430f5b3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5b3b(void)

{
  _DAT_14ca69650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69658,1);
  return;
}



// FUNCTION 1430f5b80 FUN_1430f5b80 body=69 status=ok
// SIG undefined FUN_1430f5b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5b80(void)

{
  _DAT_14ca69668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69670,1);
  return;
}



// FUNCTION 1430f5bc5 FUN_1430f5bc5 body=69 status=ok
// SIG undefined FUN_1430f5bc5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5bc5(void)

{
  _DAT_14ca69680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69688,1);
  return;
}



// FUNCTION 1430f5c0a FUN_1430f5c0a body=69 status=ok
// SIG undefined FUN_1430f5c0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5c0a(void)

{
  _DAT_14ca69698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca696a0,1);
  return;
}



// FUNCTION 1430f5c4f FUN_1430f5c4f body=69 status=ok
// SIG undefined FUN_1430f5c4f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5c4f(void)

{
  _DAT_14ca696b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca696b8,1);
  return;
}



// FUNCTION 1430f5c94 FUN_1430f5c94 body=69 status=ok
// SIG undefined FUN_1430f5c94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5c94(void)

{
  _DAT_14ca696c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca696d0,1);
  return;
}



// FUNCTION 1430f5cd9 FUN_1430f5cd9 body=69 status=ok
// SIG undefined FUN_1430f5cd9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5cd9(void)

{
  _DAT_14ca696e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca696e8,1);
  return;
}



// FUNCTION 1430f5d1e FUN_1430f5d1e body=69 status=ok
// SIG undefined FUN_1430f5d1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5d1e(void)

{
  _DAT_14ca696f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69700,1);
  return;
}



// FUNCTION 1430f5d63 FUN_1430f5d63 body=69 status=ok
// SIG undefined FUN_1430f5d63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5d63(void)

{
  _DAT_14ca69710 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69718,1);
  return;
}



// FUNCTION 1430f5da8 FUN_1430f5da8 body=69 status=ok
// SIG undefined FUN_1430f5da8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5da8(void)

{
  _DAT_14ca69728 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69730,1);
  return;
}



// FUNCTION 1430f5ded FUN_1430f5ded body=69 status=ok
// SIG undefined FUN_1430f5ded(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5ded(void)

{
  _DAT_14ca69740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69748,1);
  return;
}



// FUNCTION 1430f5e32 FUN_1430f5e32 body=69 status=ok
// SIG undefined FUN_1430f5e32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5e32(void)

{
  _DAT_14ca69758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69760,1);
  return;
}



// FUNCTION 1430f5e77 FUN_1430f5e77 body=69 status=ok
// SIG undefined FUN_1430f5e77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5e77(void)

{
  _DAT_14ca69770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69778,1);
  return;
}



// FUNCTION 1430f5ebc FUN_1430f5ebc body=69 status=ok
// SIG undefined FUN_1430f5ebc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5ebc(void)

{
  _DAT_14ca69788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5efe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69790,1);
  return;
}



// FUNCTION 1430f5f01 FUN_1430f5f01 body=69 status=ok
// SIG undefined FUN_1430f5f01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5f01(void)

{
  _DAT_14ca697a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca697a8,1);
  return;
}



// FUNCTION 1430f5f46 FUN_1430f5f46 body=69 status=ok
// SIG undefined FUN_1430f5f46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5f46(void)

{
  _DAT_14ca697b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca697c0,1);
  return;
}



// FUNCTION 1430f5f8b FUN_1430f5f8b body=69 status=ok
// SIG undefined FUN_1430f5f8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5f8b(void)

{
  _DAT_14ca697d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f5fcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca697d8,1);
  return;
}



// FUNCTION 1430f5fd0 FUN_1430f5fd0 body=69 status=ok
// SIG undefined FUN_1430f5fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f5fd0(void)

{
  _DAT_14ca697e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f6012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca697f0,1);
  return;
}



// FUNCTION 1430f6015 FUN_1430f6015 body=69 status=ok
// SIG undefined FUN_1430f6015(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f6015(void)

{
  _DAT_14ca69800 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f6057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69808,1);
  return;
}



// FUNCTION 1430f605a FUN_1430f605a body=69 status=ok
// SIG undefined FUN_1430f605a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f605a(void)

{
  _DAT_14ca69818 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69820,1);
  return;
}



// FUNCTION 1430f609f FUN_1430f609f body=69 status=ok
// SIG undefined FUN_1430f609f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f609f(void)

{
  _DAT_14ca69830 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f60e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69838,1);
  return;
}



// FUNCTION 1430f60e4 FUN_1430f60e4 body=69 status=ok
// SIG undefined FUN_1430f60e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f60e4(void)

{
  _DAT_14ca69848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f6126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69850,1);
  return;
}



// FUNCTION 1430f6129 FUN_1430f6129 body=69 status=ok
// SIG undefined FUN_1430f6129(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f6129(void)

{
  _DAT_14ca69860 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f616b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69868,1);
  return;
}



// FUNCTION 1430f616e FUN_1430f616e body=69 status=ok
// SIG undefined FUN_1430f616e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f616e(void)

{
  _DAT_14ca69878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f61b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69880,1);
  return;
}



// FUNCTION 1430f61b3 FUN_1430f61b3 body=69 status=ok
// SIG undefined FUN_1430f61b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f61b3(void)

{
  _DAT_14ca69890 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f61f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69898,1);
  return;
}



// FUNCTION 1430f61f8 FUN_1430f61f8 body=69 status=ok
// SIG undefined FUN_1430f61f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f61f8(void)

{
  _DAT_14ca698a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f623a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca698b0,1);
  return;
}



// FUNCTION 1430f623d FUN_1430f623d body=69 status=ok
// SIG undefined FUN_1430f623d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f623d(void)

{
  _DAT_14ca698c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f627f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca698c8,1);
  return;
}



// FUNCTION 1430f6282 FUN_1430f6282 body=69 status=ok
// SIG undefined FUN_1430f6282(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f6282(void)

{
  _DAT_14ca698d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f62c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca698e0,1);
  return;
}



// FUNCTION 1430f62c7 FUN_1430f62c7 body=69 status=ok
// SIG undefined FUN_1430f62c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f62c7(void)

{
  _DAT_14ca698f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f6309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca698f8,1);
  return;
}



// FUNCTION 1430f630c FUN_1430f630c body=69 status=ok
// SIG undefined FUN_1430f630c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f630c(void)

{
  _DAT_14ca69908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f634e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69910,1);
  return;
}



// FUNCTION 1430f6351 FUN_1430f6351 body=69 status=ok
// SIG undefined FUN_1430f6351(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f6351(void)

{
  _DAT_14ca69920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f6393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69928,1);
  return;
}



// FUNCTION 1430f6396 FUN_1430f6396 body=69 status=ok
// SIG undefined FUN_1430f6396(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f6396(void)

{
  _DAT_14ca69938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f63d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69940,1);
  return;
}



// FUNCTION 1430f63db FUN_1430f63db body=69 status=ok
// SIG undefined FUN_1430f63db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f63db(void)

{
  _DAT_14ca69950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f641d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69958,1);
  return;
}



// FUNCTION 1430f6420 FUN_1430f6420 body=69 status=ok
// SIG undefined FUN_1430f6420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f6420(void)

{
  _DAT_14ca69968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f6462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69970,1);
  return;
}



// FUNCTION 1430f6465 FUN_1430f6465 body=69 status=ok
// SIG undefined FUN_1430f6465(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f6465(void)

{
  _DAT_14ca69980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f64a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69988,1);
  return;
}



// FUNCTION 1430f64aa FUN_1430f64aa body=69 status=ok
// SIG undefined FUN_1430f64aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f64aa(void)

{
  _DAT_14ca69998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f64ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca699a0,1);
  return;
}



// FUNCTION 1430f64ef FUN_1430f64ef body=69 status=ok
// SIG undefined FUN_1430f64ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f64ef(void)

{
  _DAT_14ca699b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f6531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca699b8,1);
  return;
}



// FUNCTION 1430f6534 FUN_1430f6534 body=69 status=ok
// SIG undefined FUN_1430f6534(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f6534(void)

{
  _DAT_14ca699c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f6576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca699d0,1);
  return;
}



// FUNCTION 1430f6579 FUN_1430f6579 body=69 status=ok
// SIG undefined FUN_1430f6579(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f6579(void)

{
  _DAT_14ca699e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f65bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca699e8,1);
  return;
}



// FUNCTION 1430f65be FUN_1430f65be body=69 status=ok
// SIG undefined FUN_1430f65be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f65be(void)

{
  _DAT_14ca699f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f6600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69a00,1);
  return;
}



// FUNCTION 1430f6603 FUN_1430f6603 body=69 status=ok
// SIG undefined FUN_1430f6603(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f6603(void)

{
  _DAT_14ca69a10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430f6645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca69a18,1);
  return;
}



// FUNCTION 1430f6648 FUN_1430f6648 body=361 status=ok
// SIG undefined FUN_1430f6648(void)

void FUN_1430f6648(longlong param_1,longlong param_2,longlong param_3,byte *param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(local_40,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(local_40);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c760a84 < *(int *)(param_3 + 0x130)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar2 != 0)) {
    lVar2 = lVar2 + 8;
  }
  else {
    lVar2 = 0;
  }
  puVar3 = (undefined8 *)(lVar2 + 8);
  puVar5 = (undefined8 *)(param_2 + 0x13760);
  if (*(longlong *)(param_2 + 0x13760) == 0) {
    puVar5 = puVar3;
  }
  if (param_1 == 0) {
    puVar5 = puVar3;
  }
  puVar6 = (undefined8 *)(param_2 + 0x13758);
  if (*(longlong *)(param_2 + 0x13758) == 0) {
    puVar6 = puVar3;
  }
  bVar7 = param_1 != 0;
  if (!bVar7) {
    puVar6 = puVar3;
  }
  bVar4 = (*(longlong *)(param_2 + 0x13758) != 0 || *(longlong *)(param_2 + 0x13760) != 0) && bVar7;
  *param_4 = bVar4;
  *(undefined8 *)(param_4 + 8) = *puVar6;
  *(undefined8 *)(param_4 + 0x10) = *puVar5;
  bVar8 = *(longlong *)(param_2 + 0x13748) != 0;
  bVar1 = bVar8 && bVar7;
  puVar5 = (undefined8 *)(param_2 + 0x13748);
  if (!bVar8 || !bVar7) {
    puVar5 = puVar3;
  }
  param_4[1] = bVar1;
  *(undefined8 *)(param_4 + 0x18) = *puVar5;
  if (param_1 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(longlong *)(param_1 + 0x380) != 0;
  }
  *param_4 = bVar4 & bVar7;
  param_4[1] = bVar1 & bVar7;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430f67b2 FUN_1430f67b2 body=1334 status=ok
// SIG undefined FUN_1430f67b2(void)

void FUN_1430f67b2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar3 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 == 2) goto LAB_1430f6800;
    if (iVar5 != 1) goto LAB_1430f67f7;
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    if (DVar6 == DVar7) goto LAB_1430f6800;
  }
  else {
LAB_1430f67f7:
    if (iVar5 == 0x10) goto LAB_1430f6800;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar3 + 0xc60), iVar5 == 2)) {
LAB_1430f6800:
      iVar5 = *(int *)(param_1 + 0x4d48);
      *(uint *)(param_1 + 0x4d48) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x4d4c) < iVar5 + 1U) {
        FUN_146316332(param_1 + 0x4d40,iVar5);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x4d40) + (longlong)iVar5 * 8) = param_2;
      puVar8 = (undefined8 *)FUN_14001cc68(0x390,0x10);
      *puVar8 = param_2;
      FUN_1401cafd0(puVar8 + 2);
      puVar8[0x70] = 0;
      *param_2 = (longlong)puVar8;
      *(undefined8 **)(param_1 + 0x4d38) = puVar8;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_1430f6800;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar8 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar8;
    if (puVar10 != (uint *)0x0) goto LAB_1430f6a17;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14310e3e9);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar8 = puVar9;
      FUN_140217a48(puVar8);
      puVar10 = (uint *)*puVar8;
LAB_1430f6a17:
      puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar15 + 0x17);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar2 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar8;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar8 = puVar10;
        puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x17);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_1430f6a97;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_1430f6a97:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar5 = 0;
    FUN_1447247dc(puVar15,0);
    *puVar15 = &PTR_FUN_14a333328;
    puVar15[0x15] = param_1;
    puVar15[0x16] = param_2;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        iVar5 = 0;
      }
      else {
        uVar16 = 2;
      }
    }
    else {
      iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
    lVar3 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar3 == 0) {
      uVar4 = 1;
      if ((char)uVar16 != '\x06') {
        uVar4 = uVar16;
      }
      uVar16 = uVar4;
      uVar11 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar3 + 0x30);
    }
    puVar15[0xf] = uVar11;
    puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar15 + 0x1c) = iVar5;
    if (puVar15 == (undefined8 *)0x0) {
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
    local_48 = &PTR_LAB_14a3332d0;
    local_68[0] = FUN_14310eaf8;
    local_40 = param_1;
    local_38 = param_2;
    FUN_14005a792(&DAT_14ca9a440,L"FAddVolumetricCloudCommand",&DAT_14ca6d190);
    if (local_68[0] != (code *)0x0) {
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



// FUNCTION 1430f6d00 FUN_1430f6d00 body=1603 status=ok
// SIG undefined FUN_1430f6d00(void)

void FUN_1430f6d00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar19 + 0xc60);
  local_88 = param_1;
  uStack_80 = param_2;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1430f6d58;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1430f6d61;
      goto LAB_1430f6e6b;
    }
LAB_1430f6d61:
    lVar19 = *param_2;
    if (lVar19 == 0) goto LAB_1430f6dda;
    lVar5 = *(longlong *)(lVar19 + 0x380);
    if (lVar5 != 0) {
      LOCK();
      puVar13 = (uint *)(lVar5 + 8);
      uVar16 = *puVar13;
      *puVar13 = *puVar13 - 1;
      UNLOCK();
      if ((uVar16 & 0x3fffffff) == 1) {
        puVar13 = (uint *)(lVar5 + 8);
        LOCK();
        uVar16 = *puVar13;
        *puVar13 = *puVar13 | 0x40000000;
        UNLOCK();
        if ((uVar16 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar5 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar5;
          plVar15 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar15;
              LOCK();
              bVar22 = plVar15 != DAT_14ca843c0;
              plVar14 = plVar10;
              if (bVar22) {
                plVar15 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar22 = plVar14 != DAT_14ca843c8;
              plVar15 = plVar10;
              if (bVar22) {
                plVar14 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  else {
LAB_1430f6d58:
    if (iVar7 == 0x10) goto LAB_1430f6d61;
LAB_1430f6e6b:
    if (DAT_14ca9a438 != '\0') goto LAB_1430f6e9c;
    if ((DAT_14c86a9f8 == '\x01') && (iVar7 = *(int *)(lVar19 + 0xc60), iVar7 != 2)) {
      if (iVar7 != 1) {
LAB_1430f6e9c:
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar13 = (uint *)*puVar2;
          if (puVar13 != (uint *)0x0) goto LAB_1430f6fd7;
          while( true ) {
            uVar16 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar16 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar16 | 1;
              __tlregdtor(&LAB_14310e3e9);
            }
            lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar12 = *(undefined4 **)(lVar19 + 0x310);
            *(undefined8 *)(lVar19 + 0x310) = 0;
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar12 = 0xffffffff;
            *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            FUN_140217a48(puVar2);
            puVar13 = (uint *)*puVar2;
LAB_1430f6fd7:
            puVar21 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar21 + 0x17);
            uVar16 = puVar13[0x12];
            if (puVar18 <= puVar13 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
              LOCK();
              uVar3 = *puVar13;
              *puVar13 = *puVar13 + uVar16 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar16) != 0xffffffff) break;
              puVar13 = (uint *)*puVar2;
              *puVar13 = 0xffffffff;
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
              puVar13[0x12] = 0;
              *puVar2 = puVar13;
              puVar21 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
              puVar18 = (uint *)(puVar21 + 0x17);
              uVar16 = 0;
              if (puVar18 <= puVar13 + 0x4000) {
                uVar16 = 1;
                goto LAB_1430f7057;
              }
            }
          }
          uVar16 = uVar16 + 1;
LAB_1430f7057:
          *(uint **)(puVar13 + 0x10) = puVar18;
          puVar13[0x12] = uVar16;
          iVar7 = 0;
          FUN_1447247dc(puVar21,0);
          *puVar21 = &PTR_FUN_14a3333a0;
          *(undefined4 *)(puVar21 + 0x15) = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar21 + 0xac) = local_88._4_4_;
          *(undefined4 *)(puVar21 + 0x16) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)puVar21 + 0xb4) = uStack_80._4_4_;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar16 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
              uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
              iVar7 = 0;
            }
            else {
              uVar20 = 2;
            }
          }
          else {
            iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                    *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar20 = 5;
          }
          if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
          }
          puVar21[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar21[9] = puVar21;
          puVar21[10] = puVar21;
          lVar19 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar19 == 0) {
            uVar6 = 1;
            if ((char)uVar20 != '\x06') {
              uVar6 = uVar20;
            }
            uVar20 = uVar6;
            uVar11 = 0;
          }
          else {
            if ((char)uVar20 == '\x06') {
              uVar20 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
            }
            uVar11 = *(undefined8 *)(lVar19 + 0x30);
          }
          puVar21[0xf] = uVar11;
          puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar21 + 0x1c) = iVar7;
          if (puVar21 == (undefined8 *)0x0) {
            local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
            UNLOCK();
            local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
            FUN_1447439e4(puVar21);
            LOCK();
            piVar1 = (int *)(puVar21 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar21)(puVar21,1);
            }
          }
        }
        else {
          local_98 = local_78;
          local_68 = (undefined ***)0x0;
          local_58 = &PTR_LAB_14a333340;
          local_50 = (undefined4)local_88;
          uStack_4c = local_88._4_4_;
          uStack_48 = (undefined4)uStack_80;
          uStack_44 = uStack_80._4_4_;
          local_78[0] = FUN_14310ee3a;
          FUN_14005a792(&DAT_14ca9a440,L"FRemoveVolumetricCloudCommand",&DAT_14ca6d194);
          if (local_78[0] != (code *)0x0) {
            pppuVar17 = local_68;
            if (local_68 == (undefined ***)0x0) {
              pppuVar17 = &local_58;
            }
            (*(code *)(*pppuVar17)[2])();
          }
        }
        if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 != DVar9) goto LAB_1430f6e9c;
    }
    lVar19 = *param_2;
    if (lVar19 == 0) goto LAB_1430f6dda;
    lVar5 = *(longlong *)(lVar19 + 0x380);
    if (lVar5 != 0) {
      LOCK();
      puVar13 = (uint *)(lVar5 + 8);
      uVar16 = *puVar13;
      *puVar13 = *puVar13 - 1;
      UNLOCK();
      if ((uVar16 & 0x3fffffff) == 1) {
        puVar13 = (uint *)(lVar5 + 8);
        LOCK();
        uVar16 = *puVar13;
        *puVar13 = *puVar13 | 0x40000000;
        UNLOCK();
        if ((uVar16 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar5 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar5;
          plVar15 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar15;
              LOCK();
              bVar22 = plVar15 != DAT_14ca843c0;
              plVar14 = plVar10;
              if (bVar22) {
                plVar15 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar22 = plVar14 != DAT_14ca843c8;
              plVar15 = plVar10;
              if (bVar22) {
                plVar14 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  FUN_1400020a8(lVar19);
  param_1 = local_88;
LAB_1430f6dda:
  FUN_14310edc6(param_1 + 0x4d40,&uStack_80);
  if ((longlong)*(int *)(local_88 + 0x4d48) < 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = **(undefined8 **)
               (*(longlong *)(local_88 + 0x4d40) + -8 + (longlong)*(int *)(local_88 + 0x4d48) * 8);
  }
  *(undefined8 *)(local_88 + 0x4d38) = uVar11;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1430f7376 FUN_1430f7376 body=673 status=ok
// SIG undefined FUN_1430f7376(void)

void FUN_1430f7376(undefined8 param_1,void *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
  memcpy(param_2,(void *)(param_3 + 0x10),0x370);
  *(undefined8 *)((longlong)param_2 + 0x400) = uVar4;
  uVar5 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
  *(undefined8 *)((longlong)param_2 + 0x408) = uVar5;
  *(undefined8 *)((longlong)param_2 + 0x410) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0x418) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0x420) = DAT_14c9c0de0;
  *(undefined4 *)((longlong)param_2 + 0x770) = 0xffffffff;
  *(undefined1 **)((longlong)param_2 + 0x780) = &DAT_100000001;
  *(undefined8 *)((longlong)param_2 + 0x788) = 0;
  *(undefined1 **)((longlong)param_2 + 0x790) = &DAT_100000001;
  *(undefined8 *)((longlong)param_2 + 0x798) = 0;
  *(undefined4 *)((longlong)param_2 + 0x7b0) = 0;
  uVar10 = 0;
  uVar6 = 0;
  if (*(longlong *)(param_4 + 0x3108) != 0) {
    uVar6 = *(undefined4 *)(*(longlong *)(param_4 + 0x3108) + 0x1ef0);
  }
  *(undefined4 *)((longlong)param_2 + 0x7b8) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x7bc) = 0;
  iVar7 = 1;
  if (1 < *(int *)(DAT_14ca696c0 + 4)) {
    iVar7 = *(int *)(DAT_14ca696c0 + 4);
  }
  *(int *)((longlong)param_2 + 0x7e0) = iVar7;
  fVar12 = 1.0;
  if (1.0 <= *(float *)(DAT_14ca699c0 + 4)) {
    fVar12 = *(float *)(DAT_14ca699c0 + 4);
  }
  *(float *)((longlong)param_2 + 0x7f4) = fVar12 * 100000.0 * 0.015625;
  FUN_1448a862c(&local_78);
  *(undefined4 *)((longlong)param_2 + 0xbf0) = local_58;
  *(undefined4 *)((longlong)param_2 + 0xbf4) = uStack_54;
  *(undefined4 *)((longlong)param_2 + 0xbf8) = uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xbfc) = uStack_4c;
  *(undefined4 *)((longlong)param_2 + 0xbe0) = local_68;
  *(undefined4 *)((longlong)param_2 + 0xbe4) = uStack_64;
  *(undefined4 *)((longlong)param_2 + 0xbe8) = uStack_60;
  *(undefined4 *)((longlong)param_2 + 0xbec) = uStack_5c;
  *(undefined4 *)((longlong)param_2 + 0xbd0) = local_78;
  *(undefined4 *)((longlong)param_2 + 0xbd4) = uStack_74;
  *(undefined4 *)((longlong)param_2 + 0xbd8) = uStack_70;
  *(undefined4 *)((longlong)param_2 + 0xbdc) = uStack_6c;
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_4 + 8) + 0x40) + 0x290))();
  if (cVar2 != '\0') {
    bVar3 = FUN_140047f5c(*(undefined8 *)(param_4 + 8));
    uVar10 = (uint)bVar3;
  }
  *(uint *)((longlong)param_2 + 0x7f0) = uVar10;
  FUN_144888256(param_1,param_4,(longlong)param_2 + 0x810);
  if ((*(longlong *)(param_4 + 0x3108) != 0) && (0 < *(int *)(DAT_14ca69708 + 4))) {
    uVar10 = *(uint *)(*(longlong *)(param_4 + 0x3108) + 0x1ef0);
    cVar2 = FUN_1400edda3(param_4);
    if ((cVar2 != '\0') && ((uVar10 & 0xfffffffd) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0x8a0) = 0;
      *(undefined4 *)((longlong)param_2 + 0x7f0) = 0;
    }
  }
  puVar9 = (undefined8 *)(param_4 + 72000);
  puVar11 = (undefined8 *)((longlong)param_2 + 0x700);
  for (lVar8 = 0xd; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  memcpy((void *)((longlong)param_2 + 0x920),*(void **)(param_4 + 0x13778),0x2b0);
  fVar12 = *(float *)(DAT_14ca69990 + 4);
  if (128.0 <= fVar12) {
    fVar12 = 128.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  *(float *)((longlong)param_2 + 0x7c8) = fVar12;
  if (*(char *)(*(longlong *)(param_4 + 8) + 0xd0) == '\x01') {
    lVar1 = *(longlong *)(*(longlong *)(param_4 + 8) + 0x348);
    lVar8 = 0;
    if (*(char *)(lVar1 + 8) != '\0') {
      lVar8 = lVar1;
    }
  }
  else {
    lVar8 = 0;
  }
  local_88 = (longlong)param_2 + 0x370;
  FUN_1448e315a(param_1,lVar8,*(undefined4 *)(param_4 + 0x3090),0x400);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430f77ec FUN_1430f77ec body=177 status=ok
// SIG undefined FUN_1430f77ec(void)

uint FUN_1430f77ec(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  uVar4 = uVar1 + 3;
  uVar2 = uVar1 + 7;
  uVar3 = uVar1 + 0x3f;
  if (-1 < (int)uVar1) {
    uVar4 = uVar1;
    uVar2 = uVar1;
    uVar3 = uVar1;
  }
  if (((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) ||
     ((*(byte *)((longlong)param_1 + 0x3f) & 4) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)uVar3 >> 6 & 0x80000001;
    if (*(int *)(param_1 + 8) == 3 && uVar3 == 1) {
      uVar3 = 0;
      if ((((param_1[4] & 1) != 0) && ((uVar1 & 0x80000001) != 1)) &&
         (((int)uVar1 / 2 & 0x80000001U) != 1)) {
        uVar3 = (uint)(((int)uVar4 >> 2 & 0x80000001U) != 1 && ((int)uVar2 >> 3 & 0x80000001U) != 1)
        ;
      }
    }
    else {
      uVar3 = CONCAT31((int3)(uVar3 >> 8),uVar3 != 1 && *(int *)(param_1 + 8) == 3);
    }
  }
  return uVar3;
}



// FUNCTION 1430f7951 FUN_1430f7951 body=268 status=ok
// SIG undefined FUN_1430f7951(void)

void FUN_1430f7951(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    do {
      lVar1 = *param_1 + lVar6 * 0x13c10;
      *(undefined8 *)(*param_1 + 0x13748 + lVar6 * 0x13c10) = 0;
      lVar7 = 0;
      bVar3 = true;
      do {
        bVar5 = bVar3;
        *(undefined8 *)(lVar1 + 0x13758 + lVar7 * 8) = 0;
        plVar2 = *(longlong **)(lVar1 + 0x13768 + lVar7 * 8);
        if (plVar2 != (longlong *)0x0) {
          *(undefined8 *)(lVar1 + 0x13768 + lVar7 * 8) = 0;
          (**(code **)(*plVar2 + 0x38))();
        }
        if (*(longlong *)(lVar1 + 0x3108) != 0) {
          lVar7 = *(longlong *)(lVar1 + 0x3108) + lVar7 * 0x28;
          *(undefined2 *)(lVar7 + 0x1f00) = 0;
          *(undefined4 *)(lVar7 + 0x1efc) = 0;
          lVar4 = 0;
          bVar3 = true;
          do {
            bVar8 = bVar3;
            plVar2 = *(longlong **)(lVar7 + 0x1f10 + lVar4 * 8);
            if (plVar2 != (longlong *)0x0) {
              *(undefined8 *)(lVar7 + 0x1f10 + lVar4 * 8) = 0;
              (**(code **)(*plVar2 + 0x38))();
            }
            lVar4 = 1;
            bVar3 = false;
          } while (bVar8);
          *(undefined8 *)(lVar7 + 0x1f04) = DAT_14c967818;
          *(undefined1 *)(lVar7 + 0x1f0c) = 0x5d;
        }
        lVar7 = 1;
        bVar3 = false;
      } while (bVar5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1430f7a5e FUN_1430f7a5e body=9813 status=ok
// SIG undefined FUN_1430f7a5e(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430f7a5e(undefined8 *****param_1,undefined8 *******param_2,char param_3,undefined8 param_4
                  )

{
  undefined8 ******ppppppuVar1;
  uint *puVar2;
  undefined8 *******pppppppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 ****ppppuVar16;
  int *piVar17;
  undefined8 ***pppuVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  DWORD DVar22;
  DWORD DVar23;
  undefined8 ****ppppuVar24;
  longlong *plVar25;
  undefined8 ******ppppppuVar26;
  ulonglong uVar27;
  float *pfVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong *plVar31;
  undefined8 ******ppppppuVar32;
  undefined8 uVar33;
  uint uVar34;
  float *pfVar35;
  int iVar36;
  float *pfVar37;
  undefined8 *puVar38;
  undefined8 *****pppppuVar39;
  undefined8 ****ppppuVar40;
  undefined8 *****pppppuVar41;
  undefined8 *****pppppuVar42;
  undefined8 *****pppppuVar43;
  bool bVar44;
  float fVar45;
  double dVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  double dVar54;
  double dVar55;
  undefined4 uVar56;
  float fVar57;
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  double dVar61;
  float fVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  undefined1 auStack_798 [32];
  undefined4 local_778;
  undefined4 local_770;
  undefined8 *****local_760;
  undefined8 *******local_758;
  int *local_750;
  undefined8 *******local_748;
  undefined8 ****local_740;
  undefined8 ****local_738;
  undefined8 *****local_730;
  undefined8 *****local_728;
  undefined8 ****local_720;
  double local_718;
  undefined8 uStack_710;
  undefined8 **local_708;
  undefined8 **local_700;
  undefined1 local_6f8 [16];
  double local_6e8;
  undefined8 uStack_6e0;
  undefined8 *****local_6d8;
  undefined8 uStack_6d0;
  undefined8 ******local_6c0;
  double local_6b8;
  double dStack_6b0;
  undefined8 *******local_6a8;
  double dStack_6a0;
  undefined8 *******local_698;
  double dStack_690;
  double local_688;
  undefined8 local_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  undefined8 local_638;
  double dStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  float local_618;
  float local_614;
  float local_610;
  float local_60c;
  undefined8 *****local_600;
  undefined8 *******local_5f8;
  undefined8 ****local_5f0;
  float *local_5e8;
  undefined8 ***local_5e0;
  float local_5d4;
  undefined8 *******local_5d0 [4];
  undefined8 *local_5b0;
  undefined8 ***local_5a8;
  longlong *local_5a0;
  undefined8 local_598;
  undefined1 local_58d;
  float local_58c;
  undefined1 local_588 [8];
  undefined8 ***local_580;
  longlong *local_578;
  ulonglong uStack_570;
  undefined8 local_560;
  undefined8 ******local_558 [2];
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 *****local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined1 *local_518;
  undefined8 *******local_510;
  longlong **local_508;
  undefined8 ******local_500 [4];
  undefined8 *******pppppppuStack_4e0;
  undefined8 *****local_4d8;
  undefined8 *******pppppppuStack_4d0;
  undefined8 ****local_4c8;
  undefined8 ****ppppuStack_4c0;
  undefined8 local_4b4;
  undefined4 local_4ac;
  undefined8 *******local_4a8 [4];
  undefined8 *****local_488;
  undefined8 *******pppppppuStack_480;
  undefined8 ****local_478;
  undefined8 ****ppppuStack_470;
  double local_468 [15];
  undefined8 uStack_3f0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_798;
  pppppuVar43 = param_1 + 0x7d;
  FUN_1430f7951(pppppuVar43);
  if (param_3 == '\0') goto LAB_1430f9ce5;
  local_758 = param_2;
  local_730 = param_1;
  local_728 = pppppuVar43;
  local_680 = param_4;
  if (DAT_14ca6adc8 == (undefined8 *)0x0) {
LAB_1430f7baa:
    DAT_14ca6adc8 = (undefined8 *)FUN_14001cc68(0x220,0x10);
    ppppuVar24 = (undefined8 ****)&DAT_14c760db4;
    if (param_1[0x1b] != (undefined8 ****)0x0) {
      ppppuVar24 = param_1[0x1b] + 1;
    }
    uVar6 = *(undefined1 *)ppppuVar24;
    *(undefined4 *)(DAT_14ca6adc8 + 1) = 0xffffffff;
    *(undefined1 *)((longlong)DAT_14ca6adc8 + 0xc) = uVar6;
    *(undefined2 *)((longlong)DAT_14ca6adc8 + 0xd) = 1;
    DAT_14ca6adc8[0x12] = 0;
    DAT_14ca6adc8[0x13] = 0x800000000;
    DAT_14ca6adc8[0x18] = 0;
    DAT_14ca6adc8[0x19] = 0x200000000;
    DAT_14ca6adc8[0x20] = 0;
    DAT_14ca6adc8[0x21] = 0x300000000;
    DAT_14ca6adc8[0x24] = 0;
    DAT_14ca6adc8[0x22] = 0;
    DAT_14ca6adc8[0x23] = 0;
    *(undefined4 *)(DAT_14ca6adc8 + 0x25) = 0x1ffffff;
    *(undefined4 *)(DAT_14ca6adc8 + 0x34) = 0;
    DAT_14ca6adc8[0x26] = 0;
    DAT_14ca6adc8[0x27] = 0;
    DAT_14ca6adc8[0x28] = 0;
    DAT_14ca6adc8[0x29] = 0;
    DAT_14ca6adc8[0x2a] = 0;
    DAT_14ca6adc8[0x2b] = 0;
    *(undefined4 *)((longlong)DAT_14ca6adc8 + 0x1a4) = 4;
    DAT_14ca6adc8[0x35] = 0;
    DAT_14ca6adc8[0x36] = 0;
    DAT_14ca6adc8[0x37] = 0;
    DAT_14ca6adc8[0x38] = 0;
    DAT_14ca6adc8[0x39] = 0;
    DAT_14ca6adc8[0x3a] = 0;
    DAT_14ca6adc8[0x3b] = 0;
    DAT_14ca6adc8[0x3c] = 0;
    *(undefined4 *)(DAT_14ca6adc8 + 0x3d) = 0xffffffff;
    *(undefined2 *)((longlong)DAT_14ca6adc8 + 0x1ec) = 0xff;
    *(undefined1 *)((longlong)DAT_14ca6adc8 + 0x1ee) = 0;
    DAT_14ca6adc8[0x3e] = 0;
    DAT_14ca6adc8[0x3f] = 0;
    DAT_14ca6adc8[0x40] = 0;
    DAT_14ca6adc8[0x41] = 0;
    DAT_14ca6adc8[0x42] = 0;
    *(undefined4 *)(DAT_14ca6adc8 + 0x43) = 0xffffffff;
    *(undefined1 *)((longlong)DAT_14ca6adc8 + 0x21c) = 0;
    *DAT_14ca6adc8 = &PTR_FUN_14a331b80;
    FUN_1447fd100(&DAT_14ca6a810,param_2[3]);
    FUN_14006bf18(DAT_14ca6adc8,param_2[3]);
  }
  else {
    ppppuVar24 = (undefined8 ****)&DAT_14c760db4;
    if (param_1[0x1b] != (undefined8 ****)0x0) {
      ppppuVar24 = param_1[0x1b] + 1;
    }
    uVar34 = (uint)*(byte *)((longlong)DAT_14ca6adc8 + 0xc);
    if (*(byte *)((longlong)DAT_14ca6adc8 + 0xc) == 5) {
      uVar34 = DAT_14c760db4;
    }
    if (uVar34 != *(uint *)ppppuVar24) {
      FUN_144725486();
      puVar38 = DAT_14ca6adc8;
      if (DAT_14ca6adc8 != (undefined8 *)0x0) {
        FUN_144725486(DAT_14ca6adc8);
        *puVar38 = &PTR_FUN_14a1ca480;
        lVar29 = puVar38[0x42];
        if (lVar29 != 0) {
          LOCK();
          puVar2 = (uint *)(lVar29 + 8);
          uVar34 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar34 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(lVar29 + 8);
            LOCK();
            uVar34 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar34 >> 0x1e & 1) == 0) {
              bVar19 = *(byte *)(lVar29 + 0xd);
              plVar30 = (longlong *)FUN_14001cc68(0x10,8);
              plVar30[1] = lVar29;
              plVar25 = DAT_14ca843c0;
              plVar31 = DAT_14ca843c8;
              param_2 = local_758;
              pppppuVar43 = local_728;
              param_1 = local_730;
              if ((bVar19 & 2) == 0) {
                do {
                  *plVar30 = (longlong)plVar25;
                  LOCK();
                  bVar44 = plVar25 != DAT_14ca843c0;
                  plVar31 = plVar30;
                  if (bVar44) {
                    plVar25 = DAT_14ca843c0;
                    plVar31 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar31;
                  UNLOCK();
                } while (bVar44);
              }
              else {
                do {
                  *plVar30 = (longlong)plVar31;
                  LOCK();
                  bVar44 = plVar31 != DAT_14ca843c8;
                  plVar25 = plVar30;
                  if (bVar44) {
                    plVar31 = DAT_14ca843c8;
                    plVar25 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar25;
                  UNLOCK();
                } while (bVar44);
              }
            }
          }
        }
        lVar29 = puVar38[0x41];
        if (lVar29 != 0) {
          LOCK();
          puVar2 = (uint *)(lVar29 + 8);
          uVar34 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar34 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(lVar29 + 8);
            LOCK();
            uVar34 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar34 >> 0x1e & 1) == 0) {
              bVar19 = *(byte *)(lVar29 + 0xd);
              plVar30 = (longlong *)FUN_14001cc68(0x10,8);
              plVar30[1] = lVar29;
              plVar25 = DAT_14ca843c0;
              plVar31 = DAT_14ca843c8;
              param_2 = local_758;
              pppppuVar43 = local_728;
              param_1 = local_730;
              if ((bVar19 & 2) == 0) {
                do {
                  *plVar30 = (longlong)plVar25;
                  LOCK();
                  bVar44 = plVar25 != DAT_14ca843c0;
                  plVar31 = plVar30;
                  if (bVar44) {
                    plVar25 = DAT_14ca843c0;
                    plVar31 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar31;
                  UNLOCK();
                } while (bVar44);
              }
              else {
                do {
                  *plVar30 = (longlong)plVar31;
                  LOCK();
                  bVar44 = plVar31 != DAT_14ca843c8;
                  plVar25 = plVar30;
                  if (bVar44) {
                    plVar31 = DAT_14ca843c8;
                    plVar25 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar25;
                  UNLOCK();
                } while (bVar44);
              }
            }
          }
        }
        FUN_1447259a8(puVar38);
        FUN_1400020a8(puVar38);
      }
      goto LAB_1430f7baa;
    }
  }
  if (param_1[1] == (undefined8 ****)0x0) {
    iVar20 = *(int *)(param_2 + 0xc2);
    lVar29 = (longlong)iVar20;
    *(uint *)(param_2 + 0xc2) = iVar20 + 1U;
    if (*(uint *)((longlong)param_2 + 0x614) < iVar20 + 1U) {
      FUN_140184790(param_2 + 0xc1,iVar20);
    }
    ppppppuVar26 = param_2[0xc1];
    ppppppuVar26[lVar29 * 8] = (undefined8 *****)&LAB_14310e3ae;
    ppppppuVar26[lVar29 * 8 + 2] = (undefined8 *****)0x0;
    ppppppuVar26[lVar29 * 8 + 4] = (undefined8 *****)&PTR_LAB_14a331da0;
    ppppppuVar26[lVar29 * 8 + 5] = pppppuVar43;
    goto LAB_1430f9ce5;
  }
  local_578 = (longlong *)0x0;
  uStack_570 = 0;
  plVar25 = (longlong *)(*(code *)(*param_1[1])[0x59])();
  ppppppuVar26 = (undefined8 ******)(*(code *)(*param_1[1])[0x68])();
  ppppuVar24 = param_1[1];
  if (ppppuVar24[0x6d7] == (undefined8 ***)0x0) {
    local_700 = (undefined8 **)0x0;
  }
  else {
    local_700 = ppppuVar24[0x6d7][5];
  }
  local_760 = *ppppppuVar26;
  if (ppppuVar24[0x6d8] == (undefined8 ***)0x0) {
    local_708 = (undefined8 **)0x0;
  }
  else {
    local_708 = ppppuVar24[0x6d8][5];
  }
  local_580 = ppppuVar24[0x6c1];
  local_588._4_4_ = 0x47c35000;
  local_588._0_4_ = 0x3727c5ac;
  fVar45 = *(float *)(DAT_14ca69900 + 4);
  fVar48 = 0.0;
  if (fVar45 <= 0.0) {
    fVar45 = 0.0;
  }
  uVar56 = 0x3f800000;
  local_58c = fVar45;
  if (1.0 <= fVar45) {
    local_58c = 1.0;
  }
  local_58d = fVar45 < 1.0;
  fVar45 = *(float *)(local_760 + 4);
  if (plVar25 == (longlong *)0x0) {
    fVar50 = -fVar45;
    fVar52 = 0.0;
  }
  else {
    lVar29 = *plVar25;
    fVar45 = *(float *)(lVar29 + 0x28);
    fVar50 = (float)*(double *)(lVar29 + 0x20);
    fVar52 = (float)*(double *)(lVar29 + 0x18);
    fVar48 = (float)*(double *)(lVar29 + 0x10);
  }
  local_5f8 = (undefined8 *******)CONCAT44(local_5f8._4_4_,fVar45);
  *(float *)(ppppppuVar26 + 4) = fVar48;
  *(float *)((longlong)ppppppuVar26 + 0x24) = fVar52;
  *(float *)(ppppppuVar26 + 5) = fVar50;
  *(float *)((longlong)ppppppuVar26 + 0x2c) = fVar45;
  fVar48 = *(float *)(local_760 + 1);
  *(float *)(ppppppuVar26 + 6) = fVar45 + fVar48;
  *(float *)((longlong)ppppppuVar26 + 0x34) =
       fVar45 + fVar48 + *(float *)((longlong)local_760 + 0xc);
  uVar4 = (&DAT_14c758c60)[*(byte *)((longlong)local_760 + 0x25)];
  bVar19 = *(byte *)((longlong)local_760 + 0x27);
  uVar5 = (&DAT_14c758c60)[*(byte *)((longlong)local_760 + 0x24)];
  *(undefined4 *)(ppppppuVar26 + 2) = (&DAT_14c758c60)[*(byte *)((longlong)local_760 + 0x26)];
  *(undefined4 *)((longlong)ppppppuVar26 + 0x14) = uVar4;
  *(undefined4 *)(ppppppuVar26 + 3) = uVar5;
  *(float *)((longlong)ppppppuVar26 + 0x1c) = (float)bVar19 * 0.003921569;
  *(float *)(ppppppuVar26 + 0xc) = 1.0 - *(float *)((longlong)local_760 + 0x2c);
  fVar45 = 0.0;
  if (0.0 <= *(float *)(local_760 + 2) * 100000.0) {
    fVar45 = *(float *)(local_760 + 2) * 100000.0;
  }
  *(float *)((longlong)ppppppuVar26 + 0x3c) = fVar45;
  fVar48 = *(float *)((longlong)local_760 + 0x14) * 100000.0;
  fVar45 = 0.0;
  if (0.0 <= fVar48) {
    fVar45 = fVar48;
  }
  *(float *)(ppppppuVar26 + 7) = fVar45;
  fVar48 = *(float *)((longlong)local_760 + 0x1c) * 100000.0;
  fVar45 = 0.0;
  if (0.0 <= fVar48) {
    fVar45 = fVar48;
  }
  *(float *)((longlong)ppppppuVar26 + 0x44) = fVar45;
  *(uint *)(ppppppuVar26 + 8) = (uint)*(byte *)(local_760 + 3);
  piVar17 = DAT_14ca69660;
  local_750 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  iVar20 = *local_750;
  if (iVar20 == 0x40000002) {
    iVar20 = 0;
    if (0 < *DAT_14ca69660) {
      iVar20 = *DAT_14ca69660;
    }
    *(int *)(ppppppuVar26 + 9) = iVar20;
LAB_1430f7fe9:
    fVar45 = *DAT_14ca69678;
    fVar48 = *(float *)(local_760 + 6);
LAB_1430f7fff:
    iVar20 = 0x40000002;
    uVar27 = 0;
    lVar29 = DAT_14ca69690;
  }
  else {
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar22 = FUN_140ad26c0();
        DVar23 = GetCurrentThreadId();
        bVar44 = DVar22 == DVar23;
        iVar20 = *local_750;
      }
      else {
        bVar44 = false;
      }
    }
    iVar36 = 0;
    if (0 < piVar17[bVar44 ^ 1]) {
      iVar36 = piVar17[bVar44 ^ 1];
    }
    *(int *)(ppppppuVar26 + 9) = iVar36;
    pfVar28 = DAT_14ca69678;
    if (iVar20 == 0x40000002) goto LAB_1430f7fe9;
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar22 = FUN_140ad26c0();
        DVar23 = GetCurrentThreadId();
        bVar44 = DVar22 == DVar23;
        iVar20 = *local_750;
      }
      else {
        bVar44 = false;
      }
    }
    lVar29 = DAT_14ca69690;
    fVar45 = pfVar28[bVar44 ^ 1];
    fVar48 = *(float *)(local_760 + 6);
    if (iVar20 == 0x40000002) goto LAB_1430f7fff;
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar22 = FUN_140ad26c0();
        DVar23 = GetCurrentThreadId();
        bVar44 = DVar22 == DVar23;
        iVar20 = *local_750;
      }
      else {
        bVar44 = false;
      }
    }
    uVar27 = (ulonglong)(bVar44 ^ 1);
  }
  fVar48 = fVar48 * 96.0 * *(float *)(lVar29 + uVar27 * 4);
  if (fVar45 <= fVar48) {
    fVar48 = fVar45;
  }
  fVar45 = 2.0;
  if (2.0 <= fVar48) {
    fVar45 = fVar48;
  }
  *(int *)((longlong)ppppppuVar26 + 0x4c) = (int)fVar45;
  pfVar28 = DAT_14ca69720;
  if (iVar20 == 0x40000002) {
    fVar45 = *DAT_14ca69720;
    fVar48 = *(float *)(local_760 + 7);
LAB_1430f8094:
    iVar20 = 0x40000002;
    uVar27 = 0;
    lVar29 = DAT_14ca69738;
  }
  else {
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar22 = FUN_140ad26c0();
        DVar23 = GetCurrentThreadId();
        bVar44 = DVar22 == DVar23;
        iVar20 = *local_750;
      }
      else {
        bVar44 = false;
      }
    }
    lVar29 = DAT_14ca69738;
    fVar45 = pfVar28[bVar44 ^ 1];
    fVar48 = *(float *)(local_760 + 7);
    if (iVar20 == 0x40000002) goto LAB_1430f8094;
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar22 = FUN_140ad26c0();
        DVar23 = GetCurrentThreadId();
        bVar44 = DVar22 == DVar23;
        iVar20 = *local_750;
      }
      else {
        bVar44 = false;
      }
    }
    uVar27 = (ulonglong)(bVar44 ^ 1);
  }
  fVar48 = fVar48 * 10.0 * *(float *)(lVar29 + uVar27 * 4);
  if (fVar45 <= fVar48) {
    fVar48 = fVar45;
  }
  fVar45 = 2.0;
  if (2.0 <= fVar48) {
    fVar45 = fVar48;
  }
  *(int *)((longlong)ppppppuVar26 + 0x54) = (int)fVar45;
  fVar45 = 0.1;
  if (0.1 <= *(float *)(local_760 + 8)) {
    fVar45 = *(float *)(local_760 + 8);
  }
  *(float *)(ppppppuVar26 + 0xb) = fVar45 * 100000.0;
  lVar29 = DAT_14ca69648;
  if (iVar20 == 0x40000002) {
    uVar27 = 0;
  }
  else {
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar22 = FUN_140ad26c0();
        DVar23 = GetCurrentThreadId();
        bVar44 = DVar22 == DVar23;
      }
      else {
        bVar44 = false;
      }
    }
    uVar27 = (ulonglong)(bVar44 ^ 1);
  }
  fVar48 = *(float *)(lVar29 + uVar27 * 4) * 100000.0;
  fVar45 = 1.0;
  if (1.0 <= fVar48) {
    fVar45 = fVar48;
  }
  *(float *)(ppppppuVar26 + 10) = 1.0 / fVar45;
  fVar45 = *(float *)((longlong)local_760 + 0x44);
  if (1.0 <= *(float *)((longlong)local_760 + 0x44)) {
    fVar45 = 1.0;
  }
  if (fVar45 <= 0.0) {
    fVar45 = 0.0;
  }
  *(float *)((longlong)ppppppuVar26 + 0x5c) = fVar45;
  local_500[1] = (undefined8 ******)&local_58d;
  local_500[3] = (undefined8 ******)(local_588 + 4);
  pppppppuStack_4e0 = &local_5f8;
  local_4d8 = (undefined8 *****)local_588;
  local_500[0] = ppppppuVar26 + 2;
  local_500[2] = (undefined8 ******)param_1;
  FUN_1430fa0b4(local_500,local_700,0);
  FUN_1430fa0b4(local_500,local_708,1);
  pppuVar18 = local_580;
  iVar20 = FUN_1430fb823(local_580);
  fVar45 = (float)iVar20;
  *(float *)(ppppppuVar26 + 0x5c) = fVar45;
  *(float *)((longlong)ppppppuVar26 + 0x2e4) = fVar45;
  *(float *)(ppppppuVar26 + 0x5d) = 1.0 / fVar45;
  *(float *)((longlong)ppppppuVar26 + 0x2ec) = 1.0 / fVar45;
  if (pppuVar18 != (undefined8 ***)0x0) {
    uVar56 = *(undefined4 *)(pppuVar18 + 0x1d);
  }
  *(undefined4 *)((longlong)ppppppuVar26 + 0x2d4) = uVar56;
  lVar29 = DAT_14ca697c8;
  iVar20 = *local_750;
  local_6c0 = ppppppuVar26;
  if (iVar20 == 0x40000002) {
    uVar27 = 0;
  }
  else {
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar22 = FUN_140ad26c0();
        DVar23 = GetCurrentThreadId();
        bVar44 = DVar22 == DVar23;
      }
      else {
        bVar44 = false;
      }
    }
    uVar27 = (ulonglong)(bVar44 ^ 1);
  }
  ppppppuVar32 = local_6c0;
  fVar48 = *(float *)(lVar29 + uVar27 * 4) * 100000.0;
  fVar45 = 1.0;
  if (pppuVar18 != (undefined8 ***)0x0) {
    fVar45 = *(float *)((longlong)pppuVar18 + 0xe4);
  }
  fVar68 = (*(float *)(local_760 + 1) + *(float *)((longlong)local_760 + 0xc)) * 100000.0 + fVar48;
  fVar50 = *(float *)(local_6c0 + 5);
  fVar52 = *(float *)(local_6c0 + 4);
  fVar69 = *(float *)((longlong)local_6c0 + 0x24);
  if (*(int *)(param_1 + 0x7e) < 1) {
    local_6f8._8_8_ = DAT_14c846478;
    local_6f8._0_8_ = DAT_14c846470;
    local_698 = DAT_14c846460;
    dStack_690 = DAT_14c846468;
    local_658 = DAT_14c846450;
    dStack_650 = DAT_14c846458;
    local_6a8 = DAT_14c846440;
    dStack_6a0 = DAT_14c846448;
    local_668 = DAT_14c846430;
    dStack_660 = DAT_14c846438;
    local_648 = DAT_14c846420;
    dStack_640 = DAT_14c846428;
    local_678 = DAT_14c846410;
    dStack_670 = DAT_14c846418;
    local_6b8 = DAT_14c846400;
    dStack_6b0 = DAT_14c846408;
    fVar49 = DAT_14c846338;
    fVar51 = DAT_14c846330._4_4_;
    fVar48 = (float)DAT_14c846330;
  }
  else {
    ppppuVar24 = *pppppuVar43;
    fVar53 = (float)(double)ppppuVar24[0x20b] - fVar50 * 100000.0;
    fVar51 = (float)(double)ppppuVar24[0x20a] - fVar69 * 100000.0;
    fVar49 = (float)(double)ppppuVar24[0x209] - fVar52 * 100000.0;
    fVar62 = fVar49 * fVar49 + fVar51 * fVar51;
    fVar57 = fVar53 * fVar53 + fVar62;
    if (1e-08 < fVar57) {
      fVar62 = 1.0 / SQRT(fVar57);
      fVar49 = fVar49 * fVar62;
      fVar51 = fVar51 * fVar62;
      fVar53 = fVar53 * fVar62;
    }
    fVar57 = fVar48 * 0.5;
    auVar66 = blendps(ZEXT416((uint)(((fVar52 + fVar49 * local_5f8._0_4_) * 100000.0 + fVar57) /
                                    fVar48)),ZEXT816(0),0xe);
    auVar65 = roundps(ZEXT416((uint)fVar62),auVar66,1);
    auVar66 = blendps(ZEXT416((uint)(((fVar69 + fVar51 * local_5f8._0_4_) * 100000.0 + fVar57) /
                                    fVar48)),ZEXT816(0),0xe);
    auVar67 = roundps(unaff_XMM12,auVar66,1);
    local_678 = 0.0;
    dStack_670 = 0.0;
    auVar66 = blendps(ZEXT416((uint)((fVar57 + (fVar50 + fVar53 * local_5f8._0_4_) * 100000.0) /
                                    fVar48)),ZEXT816(0),0xe);
    auVar60 = roundps(ZEXT416((uint)local_5f8._0_4_),auVar66,1);
    auVar66._0_8_ = (ulonglong)ppppuVar24[0x208] ^ 0x8000000000000000;
    auVar66._8_4_ = 0;
    auVar66._12_4_ = 0x80000000;
    local_6f8 = blendps(auVar66,_DAT_149935300,0xc);
    local_698 = (undefined8 *******)((ulonglong)ppppuVar24[0x206] ^ 0x8000000000000000);
    dStack_690 = -(double)ppppuVar24[0x207];
    local_648 = 0.0;
    dStack_640 = 1.0;
    local_668 = 0.0;
    dStack_660 = 0.0;
    local_6a8 = (undefined8 *******)0x0;
    dStack_6a0 = 0.0;
    local_6b8 = 1.0;
    dStack_6b0 = 0.0;
    local_658 = 1.0;
    dStack_650 = 0.0;
    fVar49 = auVar60._0_4_ * fVar48;
    fVar51 = auVar67._0_4_ * fVar48;
    fVar48 = auVar65._0_4_ * fVar48;
  }
  fVar53 = fVar45 * 100000.0 + fVar45 * 100000.0;
  fVar50 = fVar50 * 100000.0 - fVar49;
  fVar69 = fVar69 * 100000.0 - fVar51;
  fVar52 = fVar52 * 100000.0 - fVar48;
  fVar45 = fVar50 * fVar50 + fVar52 * fVar52 + fVar69 * fVar69;
  if (1e-08 < fVar45) {
    fVar45 = 1.0 / SQRT(fVar45);
    fVar52 = fVar52 * fVar45;
    fVar69 = fVar69 * fVar45;
    fVar50 = fVar50 * fVar45;
  }
  dVar58 = ABS((double)fVar50 * DAT_14c8462d0 +
               (double)fVar52 * DAT_14c8462c0 + (double)fVar69 * DAT_14c8462c8);
  pfVar28 = (float *)&DAT_14c84616c;
  if (0.9900000095367432 < dVar58) {
    pfVar28 = (float *)&DAT_14c846184;
  }
  pfVar35 = (float *)&DAT_14c846170;
  if (0.9900000095367432 < dVar58) {
    pfVar35 = (float *)((longlong)&DAT_14c846184 + 4);
  }
  pfVar37 = (float *)&DAT_14c846174;
  if (0.9900000095367432 < dVar58) {
    pfVar37 = (float *)&DAT_14c84618c;
  }
  local_720 = (undefined8 ****)CONCAT44(local_720._4_4_,fVar50);
  local_748 = (undefined8 *******)CONCAT44(local_748._4_4_,fVar69);
  local_718 = (double)(1.0 / (fVar68 + fVar68));
  local_6e8 = 1.0 / (double)fVar53;
  local_738 = (undefined8 ****)CONCAT44(local_738._4_4_,fVar68 + fVar68);
  local_740 = (undefined8 ****)CONCAT44(local_740._4_4_,fVar52);
  if ((fVar53 == 0.0) && (!NAN(fVar53))) {
    local_6e8 = 1.0;
  }
  local_688 = (double)(fVar49 - fVar68 * fVar50);
  dVar63 = (double)(fVar51 - fVar68 * fVar69);
  dVar58 = (double)(fVar48 - fVar68 * fVar52);
  local_548 = (undefined8 ****)((double)fVar49 - local_688);
  local_558[1] = (undefined8 ******)((double)fVar51 - dVar63);
  local_558[0] = (undefined8 ******)((double)fVar48 - dVar58);
  dVar64 = (double)local_548 * (double)local_548 +
           (double)local_558[0] * (double)local_558[0] + (double)local_558[1] * (double)local_558[1]
  ;
  if ((dVar64 != 1.0) || (NAN(dVar64))) {
    if (9.99999993922529e-09 <= dVar64) {
      dVar64 = 1.0 / SQRT(dVar64);
      local_548 = (undefined8 ****)((double)local_548 * dVar64);
      local_558[1] = (undefined8 ******)((double)local_558[1] * dVar64);
      local_558[0] = (undefined8 ******)((double)local_558[0] * dVar64);
      goto LAB_1430f8802;
    }
    local_558[0] = DAT_14c8464e0;
    local_558[1] = (undefined8 ******)DAT_14c8464e8;
    local_548 = DAT_14c8464f0;
  }
  else {
LAB_1430f8802:
  }
  local_6d8 = (undefined8 *****)(local_718 * 0.0 + 1.0);
  local_4a8[2] = (undefined8 *******)
                 ((double)*pfVar28 * (double)local_558[1] - (double)local_558[0] * (double)*pfVar35)
  ;
  local_4a8[1] = (undefined8 *******)
                 ((double)*pfVar37 * (double)local_558[0] - (double)local_548 * (double)*pfVar28);
  local_4a8[0] = (undefined8 *******)
                 ((double)*pfVar35 * (double)local_548 - (double)local_558[1] * (double)*pfVar37);
  dVar64 = (double)local_4a8[2] * (double)local_4a8[2] +
           (double)local_4a8[0] * (double)local_4a8[0] + (double)local_4a8[1] * (double)local_4a8[1]
  ;
  if ((dVar64 != 1.0) || (NAN(dVar64))) {
    if (9.99999993922529e-09 <= dVar64) {
      dVar64 = 1.0 / SQRT(dVar64);
      local_4a8[2] = (undefined8 *******)((double)local_4a8[2] * dVar64);
      local_4a8[1] = (undefined8 *******)((double)local_4a8[1] * dVar64);
      local_4a8[0] = (undefined8 *******)((double)local_4a8[0] * dVar64);
      goto LAB_1430f8916;
    }
    local_4a8[0] = (undefined8 *******)DAT_14c8464e0;
    local_4a8[1] = (undefined8 *******)DAT_14c8464e8;
    local_4a8[2] = (undefined8 *******)DAT_14c8464f0;
  }
  else {
LAB_1430f8916:
  }
  uStack_6e0 = 0;
  local_638 = 0;
  local_718 = -local_718;
  uStack_710 = 0;
  uStack_6d0 = 0x3ff0000000000000;
  local_5d0[2] = (undefined8 *******)
                 ((double)local_558[0] * (double)local_4a8[1] -
                 (double)local_4a8[0] * (double)local_558[1]);
  local_5d0[1] = (undefined8 *******)
                 ((double)local_548 * (double)local_4a8[0] -
                 (double)local_4a8[2] * (double)local_558[0]);
  local_5d0[0] = (undefined8 *******)
                 ((double)local_558[1] * (double)local_4a8[2] -
                 (double)local_4a8[1] * (double)local_548);
  lVar29 = 0;
  do {
    *(undefined8 *)((longlong)local_468 + lVar29 * 4) =
         *(undefined8 *)((longlong)local_4a8 + lVar29);
    *(undefined8 *)((longlong)local_468 + lVar29 * 4 + 8U) =
         *(undefined8 *)((longlong)local_5d0 + lVar29);
    *(undefined8 *)((longlong)local_468 + lVar29 * 4 + 0x10U) =
         *(undefined8 *)((longlong)local_558 + lVar29);
    *(undefined8 *)((longlong)local_468 + lVar29 * 4 + 0x18U) = 0;
    lVar29 = lVar29 + 8;
  } while (lVar29 != 0x18);
  dVar58 = -dVar58;
  local_468[0xc] =
       ((double)local_4a8[0] * dVar58 - (double)local_4a8[1] * dVar63) -
       (double)local_4a8[2] * local_688;
  local_468[0xd] =
       ((double)local_5d0[0] * dVar58 - (double)local_5d0[1] * dVar63) -
       (double)local_5d0[2] * local_688;
  local_468[0xe] =
       (dVar58 * (double)local_558[0] - (double)local_558[1] * dVar63) -
       (double)local_548 * local_688;
  uStack_3f0 = 0x3ff0000000000000;
  dVar59 = dStack_670 * local_468[0xc] +
           local_678 * local_468[8] + dStack_6b0 * local_468[4] + local_6b8 * local_468[0];
  dVar61 = dStack_670 * local_468[0xd] +
           local_678 * local_468[9] + dStack_6b0 * local_468[5] + local_6b8 * local_468[1];
  dVar64 = dStack_670 * local_468[0xe] +
           local_678 * local_468[10] + dStack_6b0 * local_468[6] + local_6b8 * local_468[2];
  dVar9 = dStack_670 * 1.0 +
          local_678 * local_468[0xb] + dStack_6b0 * local_468[7] + local_6b8 * local_468[3];
  local_6b8 = local_468[6];
  dStack_6b0 = local_468[7];
  dVar10 = dStack_660 * local_468[0xc] +
           local_668 * local_468[8] + dStack_640 * local_468[4] + local_648 * local_468[0];
  dVar11 = dStack_660 * local_468[0xd] +
           local_668 * local_468[9] + dStack_640 * local_468[5] + local_648 * local_468[1];
  dVar58 = dStack_660 * local_468[0xe] +
           local_668 * local_468[10] + dStack_640 * local_468[6] + local_648 * local_468[2];
  dVar63 = dStack_660 * 1.0 +
           local_668 * local_468[0xb] + dStack_640 * local_468[7] + local_648 * local_468[3];
  dVar54 = dStack_650 * local_468[0xc] +
           local_658 * local_468[8] + dStack_6a0 * local_468[4] + (double)local_6a8 * local_468[0];
  dVar55 = dStack_650 * local_468[0xd] +
           local_658 * local_468[9] + dStack_6a0 * local_468[5] + (double)local_6a8 * local_468[1];
  dVar46 = dStack_650 * local_468[0xe] +
           local_658 * local_468[10] + dStack_6a0 * local_468[6] + (double)local_6a8 * local_468[2];
  dVar47 = dStack_650 * 1.0 +
           local_658 * local_468[0xb] + dStack_6a0 * local_468[7] + (double)local_6a8 * local_468[3]
  ;
  dVar12 = local_468[0xc] * (double)local_6f8._8_8_ +
           local_468[8] * (double)local_6f8._0_8_ +
           local_468[4] * dStack_690 + local_468[0] * (double)local_698;
  dVar13 = local_468[0xd] * (double)local_6f8._8_8_ +
           local_468[9] * (double)local_6f8._0_8_ +
           local_468[5] * dStack_690 + local_468[1] * (double)local_698;
  dVar14 = (double)local_6f8._8_8_ * local_468[0xe] +
           (double)local_6f8._0_8_ * local_468[10] +
           dStack_690 * local_468[6] + (double)local_698 * local_468[2];
  dVar15 = (double)local_6f8._8_8_ * 1.0 +
           (double)local_6f8._0_8_ * local_468[0xb] +
           dStack_690 * local_468[7] + (double)local_698 * local_468[3];
  fVar53 = (float)(dVar9 * 0.0 + dVar64 * 0.0 + dVar61 * 0.0 + dVar59 * local_6e8);
  fVar51 = (float)(dVar9 * 0.0 + dVar64 * 0.0 + local_6e8 * dVar61 + dVar59 * 0.0);
  fVar68 = (float)((double)local_6d8 * dVar9 + dVar64 * local_718 + dVar61 * 0.0 + dVar59 * 0.0);
  fVar49 = (float)(dVar63 * 0.0 + dVar58 * 0.0 + dVar11 * 0.0 + dVar10 * local_6e8);
  fVar69 = (float)(dVar63 * 0.0 + dVar58 * 0.0 + local_6e8 * dVar11 + dVar10 * 0.0);
  fVar50 = (float)((double)local_6d8 * dVar63 + dVar58 * local_718 + dVar11 * 0.0 + dVar10 * 0.0);
  fVar52 = (float)(dVar47 * 0.0 + dVar46 * 0.0 + dVar55 * 0.0 + dVar54 * local_6e8);
  fVar48 = (float)(dVar47 * 0.0 + dVar46 * 0.0 + local_6e8 * dVar55 + dVar54 * 0.0);
  fVar45 = (float)((double)local_6d8 * dVar47 + dVar46 * local_718 + dVar55 * 0.0 + dVar54 * 0.0);
  *(float *)(local_6c0 + 0x5e) = fVar53;
  *(float *)((longlong)local_6c0 + 0x2f4) = fVar51;
  *(float *)(local_6c0 + 0x5f) = fVar68;
  *(float *)((longlong)local_6c0 + 0x2fc) =
       (float)(dVar9 * 1.0 + dVar64 * 0.0 + dVar61 * 0.0 + dVar59 * 0.0);
  *(float *)(local_6c0 + 0x60) = fVar49;
  *(float *)((longlong)local_6c0 + 0x304) = fVar69;
  *(float *)(local_6c0 + 0x61) = fVar50;
  *(float *)((longlong)local_6c0 + 0x30c) =
       (float)(dVar63 * 1.0 + dVar58 * 0.0 + dVar11 * 0.0 + dVar10 * 0.0);
  *(float *)(local_6c0 + 0x62) = fVar52;
  *(float *)((longlong)local_6c0 + 0x314) = fVar48;
  *(float *)(local_6c0 + 99) = fVar45;
  *(float *)((longlong)local_6c0 + 0x31c) =
       (float)(dVar47 * 1.0 + dVar46 * 0.0 + dVar55 * 0.0 + dVar54 * 0.0);
  *(float *)(local_6c0 + 100) =
       (float)(dVar15 * 0.0 + dVar14 * 0.0 + dVar13 * 0.0 + dVar12 * local_6e8);
  *(float *)((longlong)local_6c0 + 0x324) =
       (float)(dVar15 * 0.0 + dVar14 * 0.0 + local_6e8 * dVar13 + dVar12 * 0.0);
  *(float *)(local_6c0 + 0x65) =
       (float)(dVar15 * (double)local_6d8 + dVar14 * local_718 + dVar13 * 0.0 + dVar12 * 0.0);
  *(float *)((longlong)local_6c0 + 0x32c) =
       (float)(dVar15 * 1.0 + dVar14 * 0.0 + dVar13 * 0.0 + dVar12 * 0.0);
  dStack_630 = local_6e8;
  if ((((((1e-08 < ABS(fVar53)) || (1e-08 < ABS(fVar51))) || (1e-08 < ABS(fVar68))) ||
       ((1e-08 < ABS(fVar49) || (1e-08 < ABS(fVar69))))) ||
      ((1e-08 < ABS(fVar50) || ((1e-08 < ABS(fVar52) || (1e-08 < ABS(fVar48))))))) ||
     (1e-08 < ABS(fVar45))) {
    FUN_144906c86(local_558,local_6c0 + 0x5e);
  }
  else {
    local_528 = _DAT_14c846280;
    uStack_520 = _DAT_14c846288;
    local_538 = _DAT_14c846270;
    uStack_530 = _DAT_14c846278;
    local_548 = _DAT_14c846260;
    uStack_540 = _DAT_14c846268;
    local_558[0] = _DAT_14c846250;
    local_558[1] = (undefined8 ******)DAT_14c846258;
  }
  *(undefined4 *)(ppppppuVar32 + 0x6c) = (undefined4)local_528;
  *(undefined4 *)((longlong)ppppppuVar32 + 0x364) = local_528._4_4_;
  *(undefined4 *)(ppppppuVar32 + 0x6d) = (undefined4)uStack_520;
  *(undefined4 *)((longlong)ppppppuVar32 + 0x36c) = uStack_520._4_4_;
  ppppppuVar32[0x6a] = local_538;
  ppppppuVar32[0x6b] = uStack_530;
  *(undefined4 *)(ppppppuVar32 + 0x68) = (undefined4)local_548;
  *(undefined4 *)((longlong)ppppppuVar32 + 0x344) = local_548._4_4_;
  *(undefined4 *)(ppppppuVar32 + 0x69) = (undefined4)uStack_540;
  *(undefined4 *)((longlong)ppppppuVar32 + 0x34c) = uStack_540._4_4_;
  ppppppuVar32[0x66] = local_558[0];
  ppppppuVar32[0x67] = local_558[1];
  *(undefined4 *)(ppppppuVar32 + 0x6e) = local_740._0_4_;
  *(undefined4 *)((longlong)ppppppuVar32 + 0x374) = local_748._0_4_;
  *(undefined4 *)(ppppppuVar32 + 0x6f) = local_720._0_4_;
  *(float *)(ppppppuVar32 + 0x5a) = local_738._0_4_ * 1e-05;
  lVar29 = DAT_14ca697f8;
  iVar20 = *local_750;
  if (iVar20 == 0x40000002) {
    uVar27 = 0;
  }
  else {
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar22 = FUN_140ad26c0();
        DVar23 = GetCurrentThreadId();
        bVar44 = DVar22 == DVar23;
      }
      else {
        bVar44 = false;
      }
    }
    uVar27 = (ulonglong)(bVar44 ^ 1);
  }
  *(float *)(ppppppuVar32 + 0x5b) = (float)*(int *)(lVar29 + uVar27 * 4);
  FUN_1401cafd0(local_468);
  memcpy(local_468,ppppppuVar26 + 2,0x370);
  FUN_141546d40();
  local_770 = 1;
  local_778 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,local_558,local_468,DAT_14ca69b08);
  ppppppuVar26 = local_558[0];
  if (local_558[0] != (undefined8 ******)0x0) {
    LOCK();
    *(int *)(local_558[0] + 1) = *(int *)(local_558[0] + 1) + 1;
    UNLOCK();
    if (local_558[0] != (undefined8 ******)0x0) {
      LOCK();
      ppppppuVar1 = local_558[0] + 1;
      pppppuVar42 = *ppppppuVar1;
      *(uint *)ppppppuVar1 = *(uint *)ppppppuVar1 - 1;
      UNLOCK();
      if (((ulonglong)pppppuVar42 & 0x3fffffff) == 1) {
        ppppppuVar1 = local_558[0] + 1;
        LOCK();
        uVar34 = *(uint *)ppppppuVar1;
        *(uint *)ppppppuVar1 = *(uint *)ppppppuVar1 | 0x40000000;
        UNLOCK();
        if ((uVar34 >> 0x1e & 1) == 0) {
          bVar19 = *(byte *)((longlong)local_558[0] + 0xd);
          plVar30 = (longlong *)FUN_14001cc68(0x10,8);
          plVar30[1] = (longlong)ppppppuVar26;
          plVar25 = DAT_14ca843c0;
          plVar31 = DAT_14ca843c8;
          if ((bVar19 & 2) == 0) {
            do {
              *plVar30 = (longlong)plVar25;
              LOCK();
              bVar44 = plVar25 != DAT_14ca843c0;
              plVar31 = plVar30;
              if (bVar44) {
                plVar25 = DAT_14ca843c0;
                plVar31 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar31;
              UNLOCK();
            } while (bVar44);
          }
          else {
            do {
              *plVar30 = (longlong)plVar31;
              LOCK();
              bVar44 = plVar31 != DAT_14ca843c8;
              plVar25 = plVar30;
              if (bVar44) {
                plVar31 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar44);
          }
        }
      }
    }
  }
  pppppuVar42 = ppppppuVar32[0x70];
  ppppppuVar32[0x70] = ppppppuVar26;
  if (pppppuVar42 != (undefined8 *****)0x0) {
    LOCK();
    pppppuVar41 = pppppuVar42 + 1;
    ppppuVar24 = *pppppuVar41;
    *(uint *)pppppuVar41 = *(uint *)pppppuVar41 - 1;
    UNLOCK();
    if (((ulonglong)ppppuVar24 & 0x3fffffff) == 1) {
      pppppuVar41 = pppppuVar42 + 1;
      LOCK();
      uVar34 = *(uint *)pppppuVar41;
      *(uint *)pppppuVar41 = *(uint *)pppppuVar41 | 0x40000000;
      UNLOCK();
      if ((uVar34 >> 0x1e & 1) == 0) {
        bVar19 = *(byte *)((longlong)pppppuVar42 + 0xd);
        plVar30 = (longlong *)FUN_14001cc68(0x10,8);
        plVar30[1] = (longlong)pppppuVar42;
        plVar25 = DAT_14ca843c0;
        plVar31 = DAT_14ca843c8;
        if ((bVar19 & 2) == 0) {
          do {
            *plVar30 = (longlong)plVar25;
            LOCK();
            bVar44 = plVar25 != DAT_14ca843c0;
            plVar31 = plVar30;
            if (bVar44) {
              plVar25 = DAT_14ca843c0;
              plVar31 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar31;
            UNLOCK();
          } while (bVar44);
        }
        else {
          do {
            *plVar30 = (longlong)plVar31;
            LOCK();
            bVar44 = plVar31 != DAT_14ca843c8;
            plVar25 = plVar30;
            if (bVar44) {
              plVar31 = DAT_14ca843c8;
              plVar25 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar25;
            UNLOCK();
          } while (bVar44);
        }
      }
    }
  }
  if (local_760[0xb] == (undefined8 ****)0x0) {
LAB_1430f9b8a:
    iVar20 = *(int *)(param_2 + 0xc2);
    lVar29 = (longlong)iVar20;
    *(uint *)(param_2 + 0xc2) = iVar20 + 1U;
    if (*(uint *)((longlong)param_2 + 0x614) < iVar20 + 1U) {
      FUN_140184790(param_2 + 0xc1,iVar20);
    }
    ppppppuVar26 = param_2[0xc1];
    ppppppuVar26[lVar29 * 8] = (undefined8 *****)&LAB_14310e3ae;
    ppppppuVar26[lVar29 * 8 + 2] = (undefined8 *****)0x0;
    ppppppuVar26[lVar29 * 8 + 4] = (undefined8 *****)&PTR_LAB_14a331da0;
    ppppppuVar26[lVar29 * 8 + 5] = pppppuVar43;
  }
  else {
    local_598 = (*(code *)(*local_760[0xb])[0x5e])();
    ppppuVar24 = (undefined8 ****)&DAT_14c760db4;
    if (param_1[0x1b] != (undefined8 ****)0x0) {
      ppppuVar24 = param_1[0x1b] + 1;
    }
    plVar25 = (longlong *)FUN_14485b2b4(local_598,*(undefined4 *)ppppuVar24);
    iVar20 = (**(code **)(*plVar25 + 0x30))(plVar25);
    if ((iVar20 != 3) || (((ulonglong)param_1[0x1f] & 2) != 0)) goto LAB_1430f9b8a;
    local_5a0 = DAT_14ca63b28;
    if (DAT_14ca63b28 != (longlong *)0x0) {
      (**(code **)(*DAT_14ca63b28 + 0x30))();
    }
    local_5a8 = (undefined8 ***)FUN_14473c272(param_2,&local_5a0,0);
    if (0 < *(int *)(param_1 + 0x7e)) {
      local_748 = param_2 + 0xe;
      local_6f8._0_8_ = param_2 + 0x13;
      local_6a8 = param_2 + 0x2f;
      local_698 = param_2 + 0x35;
      local_718 = 0.0;
      dVar58 = 0.0;
      do {
        local_740 = *pppppuVar43;
        local_6e8 = dVar58;
        if (DAT_14c760a84 == -1) {
          FUN_145fdab76(local_558,L"FRDGSystemTextures",
                        L".\\Runtime/Renderer/Private/SystemTextures.cpp",0x66);
          DAT_14c760a84 = FUN_145d12cf0(local_558);
          param_2 = local_758;
          if (local_558[0] != (undefined8 ******)0x0) {
            FUN_1400020a8();
            param_2 = local_758;
          }
        }
        ppppuVar24 = DAT_14c9c0d80;
        if ((DAT_14c760a84 < *(int *)(param_2 + 0x26)) &&
           (param_2[0x25][DAT_14c760a84] != (undefined8 *****)0x0)) {
          pppppuVar43 = param_2[0x25][DAT_14c760a84] + 1;
        }
        else {
          pppppuVar43 = (undefined8 *****)0x0;
        }
        ppppuVar7 = pppppuVar43[7];
        local_478 = _DAT_14c846280;
        ppppuStack_470 = _DAT_14c846288;
        local_488 = _DAT_14c846270;
        pppppppuStack_480 = _DAT_14c846278;
        local_4a8[2] = (undefined8 *******)_DAT_14c846260;
        local_4a8[3] = _DAT_14c846268;
        local_4a8[0] = (undefined8 *******)_DAT_14c846250;
        local_4a8[1] = (undefined8 *******)DAT_14c846258;
        local_4c8 = _DAT_14c846280;
        ppppuStack_4c0 = _DAT_14c846288;
        local_4d8 = _DAT_14c846270;
        pppppppuStack_4d0 = _DAT_14c846278;
        local_500[3] = (undefined8 ******)_DAT_14c846260;
        pppppppuStack_4e0 = _DAT_14c846268;
        local_500[1] = _DAT_14c846250;
        local_500[2] = (undefined8 ******)DAT_14c846258;
        ppppuVar8 = *pppppuVar43;
        local_738 = *(undefined8 *****)(DAT_14ca94e18 + 0x10);
        local_720 = DAT_14c9c0de0;
        memset(local_468 + 1,0,0x180);
        pppppppuVar3 = local_748;
        ppppuVar16 = DAT_14c9c0dc8;
        pppppuVar43 = (undefined8 *****)((longlong)param_2[0xe] + 0xfU & 0xfffffffffffffff0);
        ppppppuVar26 = (undefined8 ******)(pppppuVar43 + 0x182);
        if (param_2[0xf] < ppppppuVar26) {
          FUN_140023dd8(local_748,0xc20);
          pppppuVar43 = (undefined8 *****)((longlong)*pppppppuVar3 + 0xfU & 0xfffffffffffffff0);
          ppppppuVar26 = (undefined8 ******)(pppppuVar43 + 0x182);
        }
        pppppppuVar3 = local_758;
        local_758[0xe] = ppppppuVar26;
        *pppppuVar43 = (undefined8 ****)&PTR_FUN_14a333410;
        local_6d8 = pppppuVar43 + 2;
        FUN_1401cae46();
        iVar20 = *(int *)(pppppppuVar3 + 0x14);
        *(uint *)(pppppppuVar3 + 0x14) = iVar20 + 1U;
        if (*(uint *)((longlong)pppppppuVar3 + 0xa4) < iVar20 + 1U) {
          FUN_1448cfae8(local_6f8._0_8_,iVar20);
        }
        param_2 = local_758;
        ppppuVar40 = (undefined8 ****)((longlong)local_740 + (longlong)local_718);
        local_758[0x13][iVar20] = pppppuVar43;
        pppppuVar43[0x88] = (undefined8 ****)&DAT_3f8000003f800000;
        pppppuVar43[0x89] = (undefined8 ****)&DAT_3f8000003f800000;
        pppppuVar43[0x8a] = local_4a8[0];
        pppppuVar43[0x8b] = local_4a8[1];
        pppppuVar43[0x8c] = local_4a8[2];
        pppppuVar43[0x8d] = local_4a8[3];
        pppppuVar43[0x8e] = local_488;
        pppppuVar43[0x8f] = pppppppuStack_480;
        pppppuVar43[0x90] = local_478;
        pppppuVar43[0x91] = ppppuStack_470;
        pppppuVar43[0x92] = (undefined8 ****)0x3f800000;
        pppppuVar43[0x93] = (undefined8 ****)0x3f80000000000000;
        pppppuVar43[0x94] = (undefined8 ****)0x3f800000;
        pppppuVar43[0x95] = (undefined8 ****)0x3f80000000000000;
        pppppuVar43[0x96] = (undefined8 ****)0x3f800000;
        pppppuVar43[0x97] = (undefined8 ****)0x3f80000000000000;
        pppppuVar43[0x9a] = (undefined8 ****)0x0;
        pppppuVar43[0x9b] = (undefined8 ****)0x0;
        pppppuVar43[0x98] = (undefined8 ****)0x0;
        pppppuVar43[0x99] = (undefined8 ****)0x0;
        pppppuVar43[0x9c] = ppppuVar8;
        pppppuVar43[0x9d] = ppppuVar24;
        pppppuVar43[0x9e] = ppppuVar7;
        pppppuVar43[0x9f] = ppppuVar7;
        pppppuVar43[0xa0] = ppppuVar16;
        memcpy(pppppuVar43 + 0xa1,local_468,0x188);
        ppppppuVar26 = local_6c0;
        pppppuVar42 = local_6d8;
        *(undefined4 *)(pppppuVar43 + 0xd2) = 0x3f800000;
        *(undefined8 *)((longlong)pppppuVar43 + 0x694) = local_4b4;
        *(undefined4 *)((longlong)pppppuVar43 + 0x69c) = local_4ac;
        *(undefined4 *)(pppppuVar43 + 0xd4) = 0;
        pppppuVar43[0xd5] = local_738;
        pppppuVar43[0xd6] = local_720;
        ppppppuVar32 = local_500;
        pppppuVar41 = pppppuVar43 + 0xd7;
        for (lVar29 = 9; lVar29 != 0; lVar29 = lVar29 + -1) {
          *pppppuVar41 = *ppppppuVar32;
          ppppppuVar32 = ppppppuVar32 + 1;
          pppppuVar41 = pppppuVar41 + 1;
        }
        pppppuVar43[0xe0] = (undefined8 ****)0x3f800000;
        pppppuVar43[0xe1] = (undefined8 ****)0x3f80000000000000;
        FUN_1430f7376(param_2,local_6d8,local_6c0,ppppuVar40);
        pppppuVar43 = local_728;
        pppppuVar41 = local_730;
        local_5d0[0] = param_2;
        local_5d0[2] = (undefined8 *******)local_730;
        local_5d0[3] = (undefined8 *******)local_680;
        local_5b0 = &local_598;
        local_5d4 = *(float *)(local_760 + 1) * 100000.0;
        local_5f8 = param_2;
        local_5e8 = &local_5d4;
        local_5e0 = &local_580;
        local_5f0 = ppppuVar40;
        local_5d0[1] = (undefined8 *******)ppppuVar40;
        if (((local_580 != (undefined8 ***)0x0) && (0 < *(int *)(DAT_14ca69798 + 4))) &&
           (*(char *)(local_580 + 0x1c) == '\x01')) {
          local_738 = ppppuVar40;
          uVar21 = FUN_1430fb823();
          pppppppuVar3 = local_748;
          uVar34 = DAT_14ca84e40;
          if ((int)uVar21 < (int)DAT_14ca84e40) {
            uVar34 = uVar21;
          }
          local_558[1] = (undefined8 ******)_DAT_14ca85088;
          local_548 = (undefined8 ****)_DAT_14ca85090;
          local_558[0] = (undefined8 ******)0x9;
          local_528 = (undefined8 ****)CONCAT26(local_528._6_2_,0xff001a000101);
          uStack_540 = (undefined8 *******)
                       CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
          if ((int)uVar34 < 2) {
            uVar34 = 1;
          }
          local_538 = (undefined8 *****)((ulonglong)uVar34 << 0x20);
          uStack_530 = (undefined8 *******)CONCAT44(0x10001,uVar34);
          pppppuVar39 = (undefined8 *****)((longlong)param_2[0xe] + 7U & 0xfffffffffffffff8);
          ppppppuVar32 = (undefined8 ******)(pppppuVar39 + 0x24);
          if (param_2[0xf] < ppppppuVar32) {
            FUN_140023dd8(local_748,0x128);
            pppppuVar39 = (undefined8 *****)((longlong)*pppppppuVar3 + 7U & 0xfffffffffffffff8);
            ppppppuVar32 = (undefined8 ******)(pppppuVar39 + 0x24);
          }
          param_2[0xe] = ppppppuVar32;
          FUN_1456bbb8c(pppppuVar39,L"Cloud.SkyAOTexture",local_558,0);
          iVar20 = *(int *)(param_2 + 0x30);
          *(uint *)(param_2 + 0x30) = iVar20 + 1U;
          if (*(uint *)((longlong)param_2 + 0x184) < iVar20 + 1U) {
            FUN_14472c0f6(local_6a8,iVar20);
          }
          pppppppuVar3 = local_748;
          param_2[0x2f][iVar20] = pppppuVar39;
          *(int *)((longlong)pppppuVar39 + 0x9c) = *(int *)(param_2 + 0x30) + -1;
          puVar38 = (undefined8 *)((longlong)param_2[0xe] + 0xfU & 0xfffffffffffffff0);
          ppppppuVar32 = (undefined8 ******)(puVar38 + 0x182);
          local_600 = pppppuVar39;
          if (param_2[0xf] < ppppppuVar32) {
            FUN_140023dd8(local_748,0xc20);
            puVar38 = (undefined8 *)((longlong)*pppppppuVar3 + 0xfU & 0xfffffffffffffff0);
            ppppppuVar32 = (undefined8 ******)(puVar38 + 0x182);
          }
          param_2[0xe] = ppppppuVar32;
          *puVar38 = &PTR_FUN_14a333410;
          pppppuVar39 = (undefined8 *****)(puVar38 + 2);
          FUN_1401cae46(pppppuVar39);
          iVar20 = *(int *)(param_2 + 0x14);
          *(uint *)(param_2 + 0x14) = iVar20 + 1U;
          if (*(uint *)((longlong)param_2 + 0xa4) < iVar20 + 1U) {
            FUN_1448cfae8(local_6f8._0_8_,iVar20);
          }
          *(undefined8 **)(*(longlong *)local_6f8._0_8_ + (longlong)iVar20 * 8) = puVar38;
          memcpy(pppppuVar39,pppppuVar42,0xc00);
          *(undefined4 *)((longlong)puVar38 + 0x7d4) = 0;
          local_558[0] = (undefined8 ******)pppppuVar39;
          FUN_1403f0ce6();
          local_560 = DAT_14ca69a40;
          uVar33 = FUN_1403f0bf4(local_698,local_748,local_558,&local_560);
          pppppuVar39 = local_600;
          FUN_1430fb8b6(local_5d0,local_600,uVar33);
          lVar29 = DAT_14ca69810;
          iVar20 = *local_750;
          if (iVar20 == 0x40000002) {
            uVar27 = 0;
          }
          else {
            bVar44 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
              if (iVar20 == 1) {
                DVar22 = FUN_140ad26c0();
                DVar23 = GetCurrentThreadId();
                bVar44 = DVar22 == DVar23;
              }
              else {
                bVar44 = false;
              }
            }
            uVar27 = (ulonglong)(bVar44 ^ 1);
          }
          pppppuVar42 = local_6d8;
          if (0 < *(int *)(lVar29 + uVar27 * 4)) {
            fVar45 = 1.0;
            if (local_580 != (undefined8 ***)0x0) {
              fVar45 = *(float *)((longlong)local_580 + 0xe4);
            }
            local_618 = fVar45 * 100000.0 * *(float *)(puVar38 + 0x5d);
            local_610 = 1.0 / local_618;
            local_628 = puVar38[0x5c];
            uStack_620 = puVar38[0x5d];
            local_778 = CONCAT31(local_778._1_3_,1);
            local_614 = local_618;
            local_60c = local_610;
            FUN_1430fbd76(&local_5f8,&local_600,&local_628,&local_618);
            pppppuVar39 = local_600;
          }
          *(undefined8 ******)((longlong)local_740 + (longlong)local_718 + 0x13748) = pppppuVar39;
          ppppuVar40 = local_738;
        }
        dVar58 = local_6e8;
        local_558[0] = ppppppuVar26;
        local_558[1] = (undefined8 ******)&local_58d;
        uStack_540 = param_2;
        uStack_530 = local_5d0;
        local_528 = &local_5a8;
        uStack_520 = (undefined8 ****)&local_58c;
        local_518 = local_588 + 4;
        local_510 = &local_5f8;
        local_508 = &local_578;
        local_548 = ppppuVar40;
        local_538 = pppppuVar42;
        FUN_1430fc3b0(local_558,local_700,0);
        FUN_1430fc3b0(local_558,local_708,1);
        dVar58 = (double)((longlong)dVar58 + 1);
        local_718 = (double)((longlong)local_718 + 0x13c10);
      } while ((longlong)dVar58 < (longlong)*(int *)(pppppuVar41 + 0x7e));
    }
    if (local_5a0 != (longlong *)0x0) {
      (**(code **)(*local_5a0 + 0x38))();
    }
  }
  if ((longlong)(int)uStack_570 != 0) {
    plVar31 = local_578 + (longlong)(int)uStack_570 * 2;
    pppppppuVar3 = local_758 + 0xb3;
    plVar25 = local_578;
    do {
      bVar19 = 1;
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (bVar19 = *(byte *)((longlong)plVar25 + 0xc) & 3, DAT_14ca84e99 != '\0')))) {
        bVar19 = 1;
      }
      pppppuVar43 = (undefined8 *****)*plVar25;
      if (((ulonglong)pppppuVar43[4] & 0xc) == 0) {
        lVar29 = plVar25[1];
        if (((ulonglong)pppppuVar43[4] & 0x10) != 0) {
          FUN_140069376(local_758);
        }
        iVar20 = *(int *)(local_758 + 0xb4);
        *(uint *)(local_758 + 0xb4) = iVar20 + 1U;
        if (*(uint *)((longlong)local_758 + 0x5a4) < iVar20 + 1U) {
          FUN_1400f155a(pppppppuVar3,iVar20);
        }
        (*pppppppuVar3)[iVar20] = pppppuVar43;
        *(int *)((longlong)pppppuVar43 + 0x1c) = (int)lVar29;
        *(byte *)(pppppuVar43 + 4) = bVar19 | *(byte *)(pppppuVar43 + 4) & 0xe8 | 0x14;
        *(int *)(pppppuVar43 + 0xb) = (int)lVar29;
      }
      plVar25 = plVar25 + 2;
    } while (plVar25 != plVar31);
  }
  uVar27 = uStack_570 >> 0x20;
  uStack_570 = uStack_570 & 0xffffffff00000000;
  if ((int)uVar27 != 0) {
    FUN_1400f146c(&local_578,0);
  }
LAB_1430f9ce5:
  if ((local_f0 ^ (ulonglong)auStack_798) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430fa0b4 FUN_1430fa0b4 body=5998 status=ok
// SIG undefined FUN_1430fa0b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430fa0b4(longlong *param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  uint uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  undefined1 auVar28 [16];
  float fVar30;
  double dVar31;
  undefined4 in_XMM4_Db;
  undefined4 in_XMM4_Dc;
  undefined4 in_XMM4_Dd;
  float fVar32;
  double dVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  double dVar42;
  float fVar45;
  float fVar46;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
  float fVar53;
  float fVar54;
  double dVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  uint uVar59;
  float fVar60;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar61 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  double dVar68;
  float fVar70;
  float fVar71;
  undefined1 auVar69 [16];
  float fVar72;
  float fVar73;
  double dVar74;
  undefined1 auVar75 [16];
  undefined1 auStack_388 [36];
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined1 local_338 [16];
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  float local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 uStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  float local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e0 [7];
  double local_1a8 [4];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 *local_168 [2];
  double local_158 [13];
  undefined8 local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar10 = param_1[2];
  iVar5 = FUN_14310d47b(param_2);
  fVar39 = (float)iVar5;
  uVar38 = 0x3f800000;
  lVar12 = *param_1;
  uVar11 = (ulonglong)param_3;
  lVar13 = uVar11 * 0x10;
  *(float *)(lVar12 + 0x100 + lVar13) = fVar39;
  *(float *)(lVar12 + 0x104 + lVar13) = fVar39;
  *(float *)(lVar12 + 0x108 + lVar13) = 1.0 / fVar39;
  *(float *)(lVar12 + 0x10c + lVar13) = 1.0 / fVar39;
  if (param_2 == (longlong *)0x0) {
    auVar43._0_12_ = ZEXT812(0x3f800000);
    auVar43._12_4_ = 0;
    *(undefined1 (*) [16])(*param_1 + 0xa0 + lVar13) = auVar43;
    puVar1 = (undefined8 *)(*param_1 + 0xc0 + lVar13);
    *puVar1 = 0;
    puVar1[1] = 0;
    local_168[0] = &DAT_3f8000003f800000;
    local_168[1] = &DAT_3f8000003f800000;
  }
  else {
    uVar17 = (**(code **)(*param_2 + 0x180))(param_2);
    lVar12 = *param_1;
    *(undefined4 *)(lVar12 + 0xa0 + lVar13) = uVar17;
    *(undefined8 *)(lVar12 + 0xa4 + lVar13) = 0;
    *(undefined4 *)(lVar12 + 0xac + lVar13) = 0;
    uVar17 = (**(code **)(*param_2 + 0x198))(param_2);
    lVar12 = *param_1;
    *(undefined4 *)(lVar12 + 0xc0 + lVar13) = uVar17;
    *(undefined8 *)(lVar12 + 0xc4 + lVar13) = 0;
    *(undefined4 *)(lVar12 + 0xcc + lVar13) = 0;
    (**(code **)(*param_2 + 0x1a0))(param_2,local_168);
  }
  puVar1 = (undefined8 *)(*param_1 + 0x60 + lVar13);
  *puVar1 = local_168[0];
  puVar1[1] = local_168[1];
  if (*(char *)param_1[1] == '\x01') {
    fVar21 = fVar39 * 0.5;
    lVar12 = *param_1;
    *(float *)(lVar12 + 0x120 + lVar13) = fVar21;
    *(float *)(lVar12 + 0x124 + lVar13) = fVar21;
    *(float *)(lVar12 + 0x128 + lVar13) = 1.0 / fVar21;
    *(float *)(lVar12 + 300 + lVar13) = 1.0 / fVar21;
    uVar6 = 0;
    if ((0 < *(int *)(lVar10 + 0x3f0)) &&
       (lVar12 = *(longlong *)(*(longlong *)(lVar10 + 1000) + 0x3108), uVar6 = 0, lVar12 != 0)) {
      uVar6 = *(uint *)(lVar12 + 0x6e0) & 3;
    }
    uVar24 = 0;
    uVar17 = 0x3f800000;
    if (1 < uVar6 - 1) {
      uVar17 = 0;
    }
    if ((uVar6 & 1) != 0) {
      uVar24 = 0x3f800000;
    }
    uVar38 = 0x40000000;
  }
  else {
    puVar1 = (undefined8 *)(*param_1 + 0x100 + lVar13);
    uVar19 = puVar1[1];
    puVar2 = (undefined8 *)(*param_1 + 0x120 + lVar13);
    *puVar2 = *puVar1;
    puVar2[1] = uVar19;
    uVar17 = 0;
    uVar24 = 0;
  }
  lVar12 = *param_1;
  *(undefined4 *)(lVar12 + 0x240 + lVar13) = uVar38;
  *(undefined4 *)(lVar12 + 0x244 + lVar13) = uVar38;
  *(undefined4 *)(lVar12 + 0x248 + lVar13) = uVar17;
  *(undefined4 *)(lVar12 + 0x24c + lVar13) = uVar24;
  uVar19 = _DAT_14c846288;
  if (param_2 == (longlong *)0x0) {
    lVar10 = *param_1;
    lVar12 = uVar11 * 0x40;
    puVar1 = (undefined8 *)(lVar10 + 0x170 + lVar12);
    *puVar1 = _DAT_14c846280;
    puVar1[1] = uVar19;
    uVar19 = _DAT_14c846278;
    puVar1 = (undefined8 *)(lVar10 + 0x160 + lVar12);
    *puVar1 = _DAT_14c846270;
    puVar1[1] = uVar19;
    dVar55 = _DAT_14c846268;
    pdVar4 = (double *)(lVar10 + 0x150 + lVar12);
    *pdVar4 = _DAT_14c846260;
    pdVar4[1] = dVar55;
    dVar55 = DAT_14c846258;
    pdVar4 = (double *)(lVar10 + 0x140 + lVar12);
    *pdVar4 = _DAT_14c846250;
    pdVar4[1] = dVar55;
    dVar55 = _DAT_14c846268;
    lVar10 = *param_1;
    pdVar4 = (double *)(lVar10 + 0x1d0 + lVar12);
    *pdVar4 = _DAT_14c846260;
    pdVar4[1] = dVar55;
    uVar19 = _DAT_14c846278;
    puVar1 = (undefined8 *)(lVar10 + 0x1e0 + lVar12);
    *puVar1 = _DAT_14c846270;
    puVar1[1] = uVar19;
    uVar19 = _DAT_14c846288;
    puVar1 = (undefined8 *)(lVar10 + 0x1f0 + lVar12);
    *puVar1 = _DAT_14c846280;
    puVar1[1] = uVar19;
    dVar55 = DAT_14c846258;
    pdVar4 = (double *)(lVar10 + 0x1c0 + lVar12);
    *pdVar4 = _DAT_14c846250;
    pdVar4[1] = dVar55;
    puVar1 = (undefined8 *)(*param_1 + 0x260 + lVar13);
    *puVar1 = 0;
    puVar1[1] = 0x3f800000;
    puVar1 = (undefined8 *)(*param_1 + 0x280 + lVar13);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(*param_1 + 0x2a0 + lVar13);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(*param_1 + 0x80 + lVar13);
    *puVar1 = &DAT_3f8000003f800000;
    puVar1[1] = &DAT_3f8000003f800000;
    puVar1 = (undefined8 *)(*param_1 + 0xe0 + lVar13);
    *puVar1 = 0;
    puVar1[1] = 0;
    goto LAB_1430fb671;
  }
  local_2b8._0_4_ = fVar39;
  fVar66 = (float)(double)param_2[0x12];
  fVar54 = (float)(double)param_2[0xe];
  fVar40 = (float)(double)param_2[10];
  fVar21 = ABS(fVar66 * DAT_14c846174 + fVar40 * DAT_14c84616c + DAT_14c846170 * fVar54);
  fVar39 = DAT_14c846170;
  if (0.99 < fVar21) {
    fVar39 = DAT_14c846184._4_4_;
  }
  uVar6 = (uint)DAT_14c846184 & -(uint)(0.99 < fVar21);
  uVar59 = ~-(uint)(0.99 < fVar21) & (uint)DAT_14c84616c;
  local_338._0_4_ = fVar39;
  fVar39 = DAT_14c846174;
  if (0.99 < fVar21) {
    fVar39 = DAT_14c84618c;
  }
  uVar19 = (**(code **)(*param_2 + 0x168))(param_2);
  lVar12 = DAT_14ca69858;
  uStack_230 = (undefined4)extraout_XMM0_Qb;
  uStack_22c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  fVar21 = (float)uVar19 * 100000.0;
  fVar21 = fVar21 + fVar21;
  uVar16 = -(uint)(0.0 < *(float *)(DAT_14ca698a0 + 4));
  uStack_234 = (undefined4)((ulonglong)uVar19 >> 0x20);
  fVar23 = (float)(~uVar16 & (uint)fVar21 |
                  (uint)(*(float *)(DAT_14ca698a0 + 4) * 100000.0) & uVar16);
  local_238 = fVar23 + fVar23;
  fVar48 = 1.0 / local_238;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  auVar34._4_12_ = unaff_XMM8._4_12_;
  local_360 = fVar54;
  local_298 = fVar40;
  if (*(int *)(lVar10 + 0x3f0) < 1) {
    local_320 = DAT_14c846400;
    local_318 = DAT_14c846408;
    local_308 = DAT_14c846410;
    local_310 = DAT_14c846418;
    local_2f8 = DAT_14c846420;
    local_300 = DAT_14c846428;
    local_2f0 = DAT_14c846430;
    local_2e0 = DAT_14c846438;
    local_2e8 = DAT_14c846440;
    local_2d8 = DAT_14c846448;
    local_2d0 = DAT_14c846450;
    local_2c8 = DAT_14c846458;
    local_288 = DAT_14c846460;
    uStack_280 = 0;
    local_278 = DAT_14c846468;
    uStack_270 = 0;
    local_268 = DAT_14c846470;
    uStack_260 = 0;
    local_2c0 = DAT_14c846478;
    local_248 = ZEXT416((uint)DAT_14c846330);
    local_258 = ZEXT416(DAT_14c846330._4_4_);
    local_228 = ZEXT416(DAT_14c846338);
    in_XMM4_Db = 0;
    in_XMM4_Dc = 0;
    in_XMM4_Dd = 0;
    local_358 = DAT_14c846170;
    local_348 = DAT_14c84616c;
    local_364 = DAT_14c846174;
  }
  else {
    lVar10 = *(longlong *)(lVar10 + 1000);
    lVar14 = *param_1;
    fVar40 = *(float *)(lVar14 + 0x18);
    local_364 = (float)*(double *)(lVar10 + 0x1058) - fVar40 * 100000.0;
    fVar54 = *(float *)(lVar14 + 0x10);
    fVar41 = *(float *)(lVar14 + 0x14);
    local_358 = (float)*(double *)(lVar10 + 0x1050) - fVar41 * 100000.0;
    local_348 = (float)*(double *)(lVar10 + 0x1048) - fVar54 * 100000.0;
    fVar25 = local_364 * local_364 + local_348 * local_348 + local_358 * local_358;
    if (1e-08 < fVar25) {
      fVar25 = 1.0 / SQRT(fVar25);
      local_348 = local_348 * fVar25;
      local_358 = local_358 * fVar25;
      local_364 = local_364 * fVar25;
    }
    fVar25 = *(float *)param_1[4];
    fVar26 = local_364 * fVar25;
    auVar34._0_4_ = local_358 * fVar25;
    fVar25 = fVar25 * local_348;
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar5 == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar15 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
        if (iVar5 == 1) {
          uStack_344 = in_XMM4_Db;
          uStack_340 = in_XMM4_Dc;
          uStack_33c = in_XMM4_Dd;
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          bVar15 = DVar7 == DVar8;
          in_XMM4_Db = uStack_344;
          in_XMM4_Dc = uStack_340;
          in_XMM4_Dd = uStack_33c;
        }
        else {
          bVar15 = false;
        }
      }
      uVar9 = (ulonglong)(bVar15 ^ 1);
    }
    fVar18 = *(float *)(lVar12 + uVar9 * 4) * 100000.0;
    fVar22 = fVar18 * 0.5;
    auVar57 = ZEXT816(0);
    auVar75 = blendps(ZEXT416((uint)(((fVar54 + fVar25) * 100000.0 + fVar22) / fVar18)),auVar57,0xe)
    ;
    auVar43 = roundps(auVar34,auVar75,1);
    local_248._4_12_ = auVar43._4_12_;
    local_248._0_4_ = auVar43._0_4_ * fVar18;
    auVar43 = blendps(ZEXT416((uint)(((fVar41 + auVar34._0_4_) * 100000.0 + fVar22) / fVar18)),
                      auVar57,0xe);
    auVar43 = roundps(auVar75,auVar43,1);
    local_258._4_12_ = auVar43._4_12_;
    local_258._0_4_ = auVar43._0_4_ * fVar18;
    auVar43 = blendps(ZEXT416((uint)((fVar22 + (fVar40 + fVar26) * 100000.0) / fVar18)),auVar57,0xe)
    ;
    auVar43 = roundps(auVar57,auVar43,1);
    local_228._4_12_ = auVar43._4_12_;
    local_228._0_4_ = auVar43._0_4_ * fVar18;
    local_268 = -*(double *)(lVar10 + 0x1040);
    uStack_260 = 0x8000000000000000;
    local_278 = -*(double *)(lVar10 + 0x1038);
    uStack_270 = 0x8000000000000000;
    local_288 = -*(double *)(lVar10 + 0x1030);
    uStack_280 = 0x8000000000000000;
    local_318 = 0.0;
    local_308 = 0.0;
    local_310 = 0.0;
    local_2f8 = 0.0;
    local_300 = 1.0;
    local_2f0 = 0.0;
    local_2e0 = 0.0;
    local_2e8 = 0.0;
    local_2d8 = 0.0;
    local_2d0 = 1.0;
    local_2c8 = 0.0;
    local_320 = 1.0;
    local_2c0 = 1.0;
  }
  fVar54 = local_298;
  fVar40 = local_360;
  local_34c = local_228._0_4_ - fVar23 * fVar66;
  fVar25 = local_258._0_4_;
  fVar41 = fVar25 - fVar23 * local_360;
  local_350 = local_248._0_4_ - fVar23 * local_298;
  dVar55 = 1.0 / (double)fVar21;
  if ((fVar21 == 0.0) && (!NAN(fVar21))) {
    dVar55 = 1.0;
  }
  dVar42 = (double)local_34c;
  dVar33 = (double)fVar41;
  local_1a8[2] = (double)local_228._0_4_ - dVar42;
  local_1a8[1] = (double)fVar25 - dVar33;
  local_1a8[0] = (double)local_248._0_4_ - (double)local_350;
  dVar68 = local_1a8[2] * local_1a8[2] + local_1a8[0] * local_1a8[0] + local_1a8[1] * local_1a8[1];
  dVar74 = (double)(float)(uVar59 | uVar6);
  if ((dVar68 != 1.0) || (NAN(dVar68))) {
    if (9.99999993922529e-09 <= dVar68) {
      dVar68 = 1.0 / SQRT(dVar68);
      local_1a8[2] = local_1a8[2] * dVar68;
      local_1a8[1] = local_1a8[1] * dVar68;
      local_1a8[0] = local_1a8[0] * dVar68;
      goto LAB_1430faa7f;
    }
    local_1a8[0] = DAT_14c8464e0;
    local_1a8[1] = DAT_14c8464e8;
    local_1a8[2] = DAT_14c8464f0;
  }
  else {
LAB_1430faa7f:
  }
  dVar31 = (double)fVar48 * 0.0 + 1.0;
  dVar68 = -(double)fVar48;
  local_1e0[5] = dVar74 * local_1a8[1] - local_1a8[0] * (double)(float)local_338._0_4_;
  local_1e0[4] = (double)fVar39 * local_1a8[0] - local_1a8[2] * dVar74;
  local_1e0[3] = (double)(float)local_338._0_4_ * local_1a8[2] - local_1a8[1] * (double)fVar39;
  dVar74 = local_1e0[5] * local_1e0[5] + local_1e0[3] * local_1e0[3] + local_1e0[4] * local_1e0[4];
  if ((dVar74 != 1.0) || (NAN(dVar74))) {
    if (9.99999993922529e-09 <= dVar74) {
      dVar74 = 1.0 / SQRT(dVar74);
      local_1e0[5] = local_1e0[5] * dVar74;
      local_1e0[4] = local_1e0[4] * dVar74;
      local_1e0[3] = local_1e0[3] * dVar74;
      goto LAB_1430fab92;
    }
    local_1e0[3] = DAT_14c8464e0;
    local_1e0[4] = DAT_14c8464e8;
    local_1e0[5] = DAT_14c8464f0;
  }
  else {
LAB_1430fab92:
  }
  local_1e0[2] = local_1a8[0] * local_1e0[4] - local_1e0[3] * local_1a8[1];
  local_1e0[1] = local_1a8[2] * local_1e0[3] - local_1e0[5] * local_1a8[0];
  local_1e0[0] = local_1a8[1] * local_1e0[5] - local_1e0[4] * local_1a8[2];
  lVar10 = 0;
  do {
    *(undefined8 *)((longlong)local_168 + lVar10 * 4) =
         *(undefined8 *)((longlong)local_1e0 + lVar10 + 0x18);
    *(undefined8 *)((longlong)local_168 + lVar10 * 4 + 8) =
         *(undefined8 *)((longlong)local_1e0 + lVar10);
    *(undefined8 *)((longlong)local_158 + lVar10 * 4) =
         *(undefined8 *)((longlong)local_1a8 + lVar10);
    *(undefined8 *)((longlong)local_158 + lVar10 * 4 + 8) = 0;
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x18);
  dVar74 = -(double)local_350;
  local_158[10] = (local_1e0[3] * dVar74 - local_1e0[4] * dVar33) - local_1e0[5] * dVar42;
  local_158[0xb] = (local_1e0[0] * dVar74 - local_1e0[1] * dVar33) - local_1e0[2] * dVar42;
  local_158[0xc] = (dVar74 * local_1a8[0] - local_1a8[1] * dVar33) - local_1a8[2] * dVar42;
  local_f0 = 0x3ff0000000000000;
  auVar69._8_8_ =
       local_158[1] * 1.0 +
       local_158[0] * 0.0 + (double)local_168[1] * 0.0 + (double)local_168[0] * 0.0;
  fVar73 = (float)(local_158[1] * 0.0 +
                  local_158[0] * 0.0 + (double)local_168[1] * 0.0 + (double)local_168[0] * dVar55);
  local_2a8 = ZEXT416((uint)fVar73);
  auVar43 = insertps(local_2a8,
                     ZEXT416((uint)(float)(local_158[1] * 0.0 +
                                          local_158[0] * 0.0 +
                                          dVar55 * (double)local_168[1] + (double)local_168[0] * 0.0
                                          )),0x10);
  fVar30 = auVar43._4_4_;
  auVar43 = insertps(auVar43,ZEXT416((uint)(float)(local_158[1] * dVar31 +
                                                  local_158[0] * dVar68 +
                                                  (double)local_168[1] * 0.0 +
                                                  (double)local_168[0] * 0.0)),0x20);
  auVar69._0_8_ = auVar69._8_8_;
  auVar20._4_12_ = auVar69._4_12_;
  auVar20._0_4_ = (float)auVar69._8_8_;
  fVar26 = auVar43._8_4_;
  auVar34 = insertps(auVar43,auVar20,0x30);
  fVar22 = (float)(local_158[5] * 0.0 +
                  local_158[4] * 0.0 + local_158[3] * 0.0 + local_158[2] * dVar55);
  local_338 = ZEXT416((uint)fVar22);
  auVar43 = insertps(local_338,
                     ZEXT416((uint)(float)(local_158[5] * 0.0 +
                                          local_158[4] * 0.0 +
                                          dVar55 * local_158[3] + local_158[2] * 0.0)),0x10);
  fVar27 = auVar43._4_4_;
  auVar43 = insertps(auVar43,ZEXT416((uint)(float)(local_158[5] * dVar31 +
                                                  local_158[4] * dVar68 +
                                                  local_158[3] * 0.0 + local_158[2] * 0.0)),0x20);
  fVar18 = auVar43._8_4_;
  auVar69 = insertps(auVar43,ZEXT416((uint)(float)(local_158[5] * 1.0 +
                                                  local_158[4] * 0.0 +
                                                  local_158[3] * 0.0 + local_158[2] * 0.0)),0x30);
  fVar65 = (float)(local_158[9] * 0.0 +
                  local_158[8] * 0.0 + local_158[7] * 0.0 + local_158[6] * dVar55);
  auVar43 = insertps(ZEXT416((uint)fVar65),
                     ZEXT416((uint)(float)(local_158[9] * 0.0 +
                                          local_158[8] * 0.0 +
                                          dVar55 * local_158[7] + local_158[6] * 0.0)),0x10);
  fVar23 = auVar43._4_4_;
  auVar43 = insertps(auVar43,ZEXT416((uint)(float)(local_158[9] * dVar31 +
                                                  local_158[8] * dVar68 +
                                                  local_158[7] * 0.0 + local_158[6] * 0.0)),0x20);
  fVar48 = auVar43._8_4_;
  auVar50 = insertps(auVar43,ZEXT416((uint)(float)(local_158[9] * 1.0 +
                                                  local_158[8] * 0.0 +
                                                  local_158[7] * 0.0 + local_158[6] * 0.0)),0x30);
  fVar56 = (float)(local_158[0xc] * 0.0 + local_158[0xb] * 0.0 + local_158[10] * dVar55 + 0.0);
  auVar43 = insertps(ZEXT416((uint)fVar56),
                     ZEXT416((uint)(float)(local_158[0xc] * 0.0 +
                                           dVar55 * local_158[0xb] + local_158[10] * 0.0 + 0.0)),
                     0x10);
  fVar21 = auVar43._4_4_;
  auVar43 = insertps(auVar43,ZEXT416((uint)(float)(dVar31 * 1.0 +
                                                  local_158[0xc] * dVar68 +
                                                  local_158[0xb] * 0.0 + local_158[10] * 0.0)),0x20)
  ;
  fVar39 = auVar43._8_4_;
  auVar44 = insertps(auVar43,ZEXT416((uint)(float)(local_158[0xc] * 0.0 +
                                                   local_158[0xb] * 0.0 + local_158[10] * 0.0 + 1.0)
                                    ),0x30);
  auVar57 = auVar34;
  auVar75 = auVar69;
  if (0 < *(int *)(DAT_14ca69870 + 4)) {
    fVar29 = auVar34._12_4_;
    fVar37 = auVar69._12_4_;
    fVar36 = auVar50._12_4_;
    fVar60 = auVar50._0_4_ * 0.0 + auVar69._0_4_ * 0.0 + auVar34._0_4_ * 0.0 + auVar44._0_4_;
    fVar62 = auVar50._4_4_ * 0.0 + auVar69._4_4_ * 0.0 + auVar34._4_4_ * 0.0 + auVar44._4_4_;
    fVar63 = auVar50._8_4_ * 0.0 + auVar69._8_4_ * 0.0 + auVar34._8_4_ * 0.0 + auVar44._8_4_;
    fVar35 = auVar44._12_4_;
    fVar64 = fVar36 * 0.0 + fVar37 * 0.0 + fVar29 * 0.0 + fVar35;
    fVar32 = (float)local_2b8._0_4_ * 0.5 * 0.5;
    auVar43 = ZEXT816(0);
    auVar57 = blendps(ZEXT416((uint)(fVar32 * fVar60 + 0.5)),auVar43,0xe);
    auVar75 = blendps(ZEXT416((uint)(fVar32 * fVar62 + 0.5)),auVar43,0xe);
    auVar43 = roundps(auVar43,auVar57,1);
    auVar28._4_12_ = auVar43._4_12_;
    auVar57 = roundps(auVar57,auVar75,1);
    auVar58._4_12_ = auVar57._4_12_;
    auVar58._0_4_ = auVar57._0_4_ / fVar32 - fVar62;
    auVar28._0_4_ = auVar43._0_4_ / fVar32 - fVar60;
    auVar61._0_4_ = fVar60 - fVar60;
    auVar61._4_4_ = fVar62 - fVar62;
    auVar61._8_4_ = fVar63 - fVar63;
    auVar61._12_4_ = fVar64 - fVar64;
    auVar43 = insertps(auVar28,auVar58,0x10);
    auVar43 = insertps(auVar43,0x3f800000,0x30);
    auVar43 = blendps(auVar43,auVar61,4);
    fVar32 = auVar43._0_4_;
    fVar60 = auVar43._4_4_;
    fVar62 = auVar43._8_4_;
    fVar63 = auVar43._12_4_;
    auVar57._0_4_ = fVar29 * fVar32 + fVar26 * 0.0 + fVar30 * 0.0 + fVar73 * 1.0;
    auVar57._4_4_ = fVar29 * fVar60 + fVar26 * 0.0 + fVar30 * 1.0 + fVar73 * 0.0;
    auVar57._8_4_ = fVar29 * fVar62 + fVar26 * 1.0 + fVar30 * 0.0 + fVar73 * 0.0;
    auVar57._12_4_ = fVar29 * fVar63 + fVar26 * 0.0 + fVar30 * 0.0 + fVar73 * 0.0;
    auVar75._0_4_ = fVar37 * fVar32 + fVar18 * 0.0 + fVar27 * 0.0 + fVar22 * 1.0;
    auVar75._4_4_ = fVar37 * fVar60 + fVar18 * 0.0 + fVar27 * 1.0 + fVar22 * 0.0;
    auVar75._8_4_ = fVar37 * fVar62 + fVar18 * 1.0 + fVar27 * 0.0 + fVar22 * 0.0;
    auVar75._12_4_ = fVar37 * fVar63 + fVar18 * 0.0 + fVar27 * 0.0 + fVar22 * 0.0;
    auVar50._0_4_ = fVar36 * fVar32 + fVar48 * 0.0 + fVar23 * 0.0 + fVar65 * 1.0;
    auVar50._4_4_ = fVar36 * fVar60 + fVar48 * 0.0 + fVar23 * 1.0 + fVar65 * 0.0;
    auVar50._8_4_ = fVar36 * fVar62 + fVar48 * 1.0 + fVar23 * 0.0 + fVar65 * 0.0;
    auVar50._12_4_ = fVar36 * fVar63 + fVar48 * 0.0 + fVar23 * 0.0 + fVar65 * 0.0;
    auVar44._0_4_ = fVar35 * fVar32 + fVar39 * 0.0 + fVar21 * 0.0 + fVar56 * 1.0;
    auVar44._4_4_ = fVar35 * fVar60 + fVar39 * 0.0 + fVar21 * 1.0 + fVar56 * 0.0;
    auVar44._8_4_ = fVar35 * fVar62 + fVar39 * 1.0 + fVar21 * 0.0 + fVar56 * 0.0;
    auVar44._12_4_ = fVar35 * fVar63 + fVar39 * 0.0 + fVar21 * 0.0 + fVar56 * 0.0;
    local_2b8 = auVar69;
    local_218 = ZEXT416((uint)fVar65);
    local_208 = ZEXT416((uint)fVar56);
    local_1f8 = auVar34;
  }
  fVar39 = (float)local_320;
  fVar48 = (float)local_318;
  fVar29 = auVar57._0_4_;
  fVar35 = auVar57._4_4_;
  fVar36 = auVar57._8_4_;
  fVar37 = auVar57._12_4_;
  fVar67 = auVar75._0_4_;
  fVar70 = auVar75._4_4_;
  fVar71 = auVar75._8_4_;
  fVar72 = auVar75._12_4_;
  fVar18 = (float)local_308;
  fVar21 = (float)local_310;
  fVar49 = auVar50._0_4_;
  fVar51 = auVar50._4_4_;
  fVar52 = auVar50._8_4_;
  fVar53 = auVar50._12_4_;
  fVar64 = auVar44._0_4_;
  fVar45 = auVar44._4_4_;
  fVar46 = auVar44._8_4_;
  fVar47 = auVar44._12_4_;
  fVar23 = (float)local_2f8;
  fVar22 = (float)local_300;
  fVar65 = (float)local_2f0;
  fVar26 = (float)local_2e0;
  fVar27 = (float)local_2e8;
  fVar73 = (float)local_2d8;
  fVar60 = (float)local_2d0;
  fVar56 = (float)local_2c8;
  fVar30 = (float)local_288;
  fVar62 = (float)local_278;
  fVar63 = (float)local_268;
  fVar32 = (float)local_2c0;
  lVar10 = *param_1;
  lVar14 = uVar11 * 0x40;
  pfVar3 = (float *)(lVar10 + 0x140 + lVar14);
  *pfVar3 = fVar21 * fVar64 + fVar18 * fVar49 + fVar48 * fVar67 + fVar39 * fVar29;
  pfVar3[1] = fVar21 * fVar45 + fVar18 * fVar51 + fVar48 * fVar70 + fVar39 * fVar35;
  pfVar3[2] = fVar21 * fVar46 + fVar18 * fVar52 + fVar48 * fVar71 + fVar39 * fVar36;
  pfVar3[3] = fVar21 * fVar47 + fVar18 * fVar53 + fVar48 * fVar72 + fVar39 * fVar37;
  pfVar3 = (float *)(lVar10 + 0x150 + lVar14);
  *pfVar3 = fVar26 * fVar64 + fVar65 * fVar49 + fVar22 * fVar67 + fVar23 * fVar29;
  pfVar3[1] = fVar26 * fVar45 + fVar65 * fVar51 + fVar22 * fVar70 + fVar23 * fVar35;
  pfVar3[2] = fVar26 * fVar46 + fVar65 * fVar52 + fVar22 * fVar71 + fVar23 * fVar36;
  pfVar3[3] = fVar26 * fVar47 + fVar65 * fVar53 + fVar22 * fVar72 + fVar23 * fVar37;
  pfVar3 = (float *)(lVar10 + 0x160 + lVar14);
  *pfVar3 = fVar56 * fVar64 + fVar60 * fVar49 + fVar73 * fVar67 + fVar27 * fVar29;
  pfVar3[1] = fVar56 * fVar45 + fVar60 * fVar51 + fVar73 * fVar70 + fVar27 * fVar35;
  pfVar3[2] = fVar56 * fVar46 + fVar60 * fVar52 + fVar73 * fVar71 + fVar27 * fVar36;
  pfVar3[3] = fVar56 * fVar47 + fVar60 * fVar53 + fVar73 * fVar72 + fVar27 * fVar37;
  pfVar3 = (float *)(lVar10 + 0x170 + lVar14);
  *pfVar3 = fVar32 * fVar64 + fVar63 * fVar49 + fVar62 * fVar67 + fVar30 * fVar29;
  pfVar3[1] = fVar32 * fVar45 + fVar63 * fVar51 + fVar62 * fVar70 + fVar30 * fVar35;
  pfVar3[2] = fVar32 * fVar46 + fVar63 * fVar52 + fVar62 * fVar71 + fVar30 * fVar36;
  pfVar3[3] = fVar32 * fVar47 + fVar63 * fVar53 + fVar62 * fVar72 + fVar30 * fVar37;
  lVar10 = *param_1;
  lVar12 = lVar14 + 0x140 + lVar10;
  local_35c = fVar41;
  local_354 = fVar66;
  uStack_344 = in_XMM4_Db;
  uStack_340 = in_XMM4_Dc;
  uStack_33c = in_XMM4_Dd;
  if (((((1e-08 < ABS(*(float *)(lVar10 + 0x140 + lVar14))) ||
        (1e-08 < ABS(*(float *)(lVar10 + 0x144 + lVar14)))) ||
       (1e-08 < ABS(*(float *)(lVar10 + 0x148 + lVar14)))) ||
      (((1e-08 < ABS(*(float *)(lVar12 + 0x10)) || (1e-08 < ABS(*(float *)(lVar12 + 0x14)))) ||
       ((1e-08 < ABS(*(float *)(lVar12 + 0x18)) ||
        ((1e-08 < ABS(*(float *)(lVar12 + 0x20)) || (1e-08 < ABS(*(float *)(lVar12 + 0x24))))))))))
     || (1e-08 < ABS(*(float *)(lVar12 + 0x28)))) {
    FUN_144906c86(local_1a8);
    lVar10 = *param_1;
  }
  else {
    local_178 = _DAT_14c846280;
    uStack_170 = _DAT_14c846288;
    local_188 = _DAT_14c846270;
    uStack_180 = _DAT_14c846278;
    local_1a8[2] = _DAT_14c846260;
    local_1a8[3] = _DAT_14c846268;
    local_1a8[0] = _DAT_14c846250;
    local_1a8[1] = DAT_14c846258;
  }
  puVar1 = (undefined8 *)(lVar10 + 0x1f0 + lVar14);
  *puVar1 = local_178;
  puVar1[1] = uStack_170;
  puVar1 = (undefined8 *)(lVar10 + 0x1e0 + lVar14);
  *puVar1 = local_188;
  puVar1[1] = uStack_180;
  pdVar4 = (double *)(lVar10 + 0x1d0 + lVar14);
  *pdVar4 = local_1a8[2];
  pdVar4[1] = local_1a8[3];
  pdVar4 = (double *)(lVar10 + 0x1c0 + lVar14);
  *pdVar4 = local_1a8[0];
  pdVar4[1] = local_1a8[1];
  lVar10 = *param_1;
  *(float *)(lVar10 + 0x260 + lVar13) = fVar54;
  *(float *)(lVar10 + 0x264 + lVar13) = fVar40;
  *(float *)(lVar10 + 0x268 + lVar13) = fVar66;
  *(undefined4 *)(lVar10 + 0x26c + lVar13) = 0x3f800000;
  lVar10 = *param_1;
  *(float *)(lVar10 + 0x280 + lVar13) = local_350;
  *(float *)(lVar10 + 0x284 + lVar13) = fVar41;
  *(float *)(lVar10 + 0x288 + lVar13) = local_34c;
  *(undefined4 *)(lVar10 + 0x28c + lVar13) = 0x3f800000;
  lVar10 = *param_1;
  *(undefined4 *)(lVar10 + 0x2a0 + lVar13) = local_248._0_4_;
  *(float *)(lVar10 + 0x2a4 + lVar13) = fVar25;
  *(undefined4 *)(lVar10 + 0x2a8 + lVar13) = local_228._0_4_;
  *(undefined4 *)(lVar10 + 0x2ac + lVar13) = 0x3f800000;
  lVar10 = *param_1;
  *(float *)(lVar10 + 0x80 + lVar13) = local_238 * 1e-05;
  *(undefined8 *)(lVar10 + 0x84 + lVar13) = 0;
  *(undefined4 *)(lVar10 + 0x8c + lVar13) = 0;
  fVar39 = (float)(**(code **)(*param_2 + 0x178))(param_2);
  lVar12 = DAT_14ca69888;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar10 + 0xc60);
  if (iVar5 == 0x40000002) {
    iVar5 = 0x40000002;
    uVar11 = 0;
  }
  else if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
    if (iVar5 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      uVar11 = (ulonglong)(DVar7 != DVar8);
      iVar5 = *(int *)(lVar10 + 0xc60);
    }
    else {
      uVar11 = 1;
    }
  }
  else {
    uVar11 = 0;
  }
  lVar10 = DAT_14ca698b8;
  fVar21 = *(float *)(lVar12 + uVar11 * 4);
  fVar48 = (float)(int)fVar39 * 16.0;
  if (fVar21 <= (float)(int)fVar39 * 16.0) {
    fVar48 = fVar21;
  }
  fVar39 = 4.0;
  if (4.0 <= fVar48) {
    fVar39 = fVar48;
  }
  if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
    uVar11 = 0;
  }
  else if (iVar5 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar11 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar11 = 1;
  }
  fVar21 = *(float *)(lVar10 + uVar11 * 4) + -1.0;
  fVar40 = 0.2 / ABS((local_348 * -fVar54 - local_358 * fVar40) - local_364 * fVar66);
  if (1.0 <= fVar40) {
    fVar40 = 1.0;
  }
  if (fVar40 <= 0.0) {
    fVar40 = 0.0;
  }
  fVar54 = 0.0;
  if (0.0 <= fVar21) {
    fVar54 = fVar21;
  }
  lVar10 = *param_1;
  *(float *)(lVar10 + 0xe0 + lVar13) = fVar54 * fVar39 * fVar40 + fVar39;
  *(undefined8 *)(lVar10 + 0xe4 + lVar13) = 0;
  *(undefined4 *)(lVar10 + 0xec + lVar13) = 0;
LAB_1430fb671:
  if ((local_e0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430fb823 FUN_1430fb823 body=147 status=ok
// SIG undefined FUN_1430fb823(void)

int FUN_1430fb823(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  ulonglong uVar6;
  
  lVar1 = DAT_14ca697e0;
  if (param_1 == 0) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar6 = 0;
    }
    else if (iVar2 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar6 = 1;
    }
    iVar2 = *(int *)(lVar1 + uVar6 * 4);
    iVar5 = (int)(*(float *)(param_1 + 0xec) * 512.0);
    if (iVar5 < iVar2) {
      iVar2 = iVar5;
    }
  }
  return iVar2;
}



// FUNCTION 1430fb8b6 FUN_1430fb8b6 body=1215 status=ok
// SIG undefined FUN_1430fb8b6(void)

void FUN_1430fb8b6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  longlong **local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_69;
  longlong *local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar8 = *param_1;
  lVar4 = param_1[2];
  puVar1 = (ulonglong *)(lVar8 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar10 + 0x2c;
  local_78 = param_2;
  if (*(undefined8 **)(lVar8 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x170);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar10 + 0x2c;
  }
  *puVar1 = (ulonglong)puVar9;
  *puVar10 = &PTR_FUN_14a331bd8;
  plVar2 = puVar10 + 2;
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 1;
  puVar10[4] = 0;
  *(undefined1 *)(puVar10 + 5) = 1;
  puVar10[6] = 0;
  *(undefined1 *)(puVar10 + 7) = 1;
  puVar10[8] = 0;
  *(undefined1 *)(puVar10 + 9) = 1;
  puVar10[10] = 0;
  *(undefined1 *)(puVar10 + 0xb) = 1;
  lVar6 = 0x72;
  do {
    *(undefined1 (*) [16])((longlong)puVar10 + lVar6 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar10 + lVar6 + -2) = 0xffff0000;
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0x132);
  *(undefined4 *)((longlong)puVar10 + 0x134) = 0;
  *(undefined1 (*) [16])(puVar10 + 0x24) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar10 + 0x26) = 0;
  *(undefined4 *)(puVar10 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)puVar10 + 0x13c) = 0xffffffff;
  *(undefined4 *)(puVar10 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)puVar10 + 0x144) = 0xffffffff;
  *(undefined4 *)(puVar10 + 0x29) = 0;
  *(undefined2 *)((longlong)puVar10 + 0x14c) = 0;
  puVar10[0x2a] = 0;
  iVar3 = *(int *)(lVar8 + 0xa0);
  *(uint *)(lVar8 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(lVar8 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8((longlong *)(lVar8 + 0x98),iVar3);
  }
  *(undefined8 **)(*(longlong *)(lVar8 + 0x98) + (longlong)iVar3 * 8) = puVar10;
  FUN_1448c58dc(param_1[1],&local_68);
  *(undefined4 *)(puVar10 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar10 + 0x24) = local_58._4_4_;
  *(undefined4 *)(puVar10 + 5) = uStack_50;
  *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_4c;
  *plVar2 = (longlong)local_68;
  puVar10[3] = lStack_60;
  uVar7 = FUN_1448c569e(lVar4 + 0x10,*param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b328) {
    FUN_144b3d300(&DAT_14ca4b328);
    if (DAT_14ca4b328 == -1) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
  }
  cVar5 = *(char *)(DAT_14ca4b320 + 0x41);
  if (cVar5 == '\x03') {
    cVar5 = '\x02';
  }
  puVar10[6] = uVar7;
  *(char *)(puVar10 + 7) = cVar5;
  FUN_1403f0ce6();
  cVar5 = DAT_14ca69a69;
  if (DAT_14ca69a69 == '\x03') {
    cVar5 = '\x02';
  }
  puVar10[8] = param_3;
  *(char *)(puVar10 + 9) = cVar5;
  uVar7 = *(undefined8 *)(param_1[3] + 0x10);
  lVar8 = FUN_1449865da();
  cVar5 = *(char *)(lVar8 + 0x41);
  if (*(char *)(lVar8 + 0x41) == '\x03') {
    cVar5 = '\x02';
  }
  puVar10[10] = uVar7;
  *(char *)(puVar10 + 0xb) = cVar5;
  uVar7 = FUN_1448c569e(lVar4 + 0x10,*param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b328) {
    FUN_144b3d300(&DAT_14ca4b328);
    if (DAT_14ca4b328 == -1) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
  }
  cVar5 = '\x02';
  if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
    cVar5 = *(char *)(DAT_14ca4b320 + 0x41);
  }
  puVar10[6] = uVar7;
  *(char *)(puVar10 + 7) = cVar5;
  puVar10[0xc] = local_78;
  puVar10[0xd] = 0;
  *(undefined4 *)(puVar10 + 0xe) = 0xffff0000;
  lVar8 = *param_1;
  lVar4 = param_1[1];
  uVar7 = *(undefined8 *)param_1[4];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6cac8) {
    FUN_144b3d300(&DAT_14ca6cac8);
    if (DAT_14ca6cac8 == -1) {
      FUN_145fcf92e(&local_68);
      local_80 = 0;
      local_90 = 0;
      local_b0 = "Unknown";
      local_c0 = 0;
      uStack_b8 = 0;
      local_c8 = L"FVolumetricCloudShadowParametersPS";
      local_88 = 0;
      local_a0 = 0x150;
      local_a8 = 0x54f;
      local_98 = &local_68;
      FUN_140b49562(&DAT_14ca6ca48,0,1);
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310db37);
      _Init_thread_footer(&DAT_14ca6cac8);
    }
  }
  FUN_140069376(lVar8);
  puVar1 = (ulonglong *)(lVar8 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 0x3a;
  if (*(undefined8 **)(lVar8 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1d8);
    puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar10 + 0x3a;
  }
  *puVar1 = (ulonglong)puVar9;
  lStack_60 = DAT_14ca6ca90;
  if (DAT_14ca6ca90 != 0) {
    LOCK();
    *(int *)(DAT_14ca6ca90 + 8) = *(int *)(DAT_14ca6ca90 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14ca6ca48;
  local_c8 = (wchar_t *)((ulonglong)local_c8 & 0xffffffffffffff00);
  local_68 = plVar2;
  FUN_140068f1a(puVar10,&local_69,&local_68,1);
  *puVar10 = &PTR_FUN_14a331be0;
  puVar10[0x37] = plVar2;
  puVar10[0x38] = lVar4;
  puVar10[0x39] = uVar7;
  iVar3 = *(int *)(lVar8 + 0x170);
  *(uint *)(lVar8 + 0x170) = iVar3 + 1U;
  if (*(uint *)(lVar8 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(lVar8 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(lVar8 + 0x168) + (longlong)iVar3 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x2c) = *(int *)(lVar8 + 0x170) + -1;
  FUN_140069100(lVar8,puVar10);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430fbd76 FUN_1430fbd76 body=1593 status=ok
// SIG undefined FUN_1430fbd76(void)

void FUN_1430fbd76(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4,
                  char param_5)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 uVar13;
  wchar_t *pwVar14;
  undefined8 *puVar15;
  uint uVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  ulonglong *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  ulonglong local_98;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_55;
  undefined1 local_53;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_5 != '\0') {
    fVar17 = 1.0;
  }
  else {
    fVar17 = 0.5;
  }
  uVar12 = (uint)((float)*(int *)(*param_2 + 0x88) * fVar17);
  local_98 = (ulonglong)uVar12;
  uVar16 = (uint)((float)*(int *)(*param_2 + 0x84) * fVar17);
  lVar5 = *param_1;
  pwVar14 = L"Cloud.ShadowTexture2";
  if (param_5 != '\0') {
    pwVar14 = L"Cloud.SkyAOTexture2";
  }
  local_70 = DAT_14ca85098;
  uStack_80 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_78 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_56 = 0;
  local_88 = (undefined8 *)&DAT_00020008;
  local_55 = 0x1a;
  local_5c = 0x10001;
  local_58 = 0x101;
  local_68 = 0;
  local_64 = DAT_14ca84e40;
  if ((int)uVar16 < (int)DAT_14ca84e40) {
    local_64 = uVar16;
  }
  if ((int)local_64 < 2) {
    local_64 = 1;
  }
  local_53 = 0xff;
  local_60 = DAT_14ca84e40;
  if ((int)uVar12 < (int)DAT_14ca84e40) {
    local_60 = uVar12;
  }
  if ((int)local_60 < 2) {
    local_60 = 1;
  }
  uVar11 = *(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar8 = uVar11 + 0x120;
  local_c8 = param_2;
  local_b8 = param_3;
  local_b0 = param_4;
  if (*(ulonglong *)(lVar5 + 0x78) < uVar8) {
    FUN_140023dd8((longlong *)(lVar5 + 0x70),0x128);
    uVar11 = *(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar8 = uVar11 + 0x120;
  }
  *(ulonglong *)(lVar5 + 0x70) = uVar8;
  FUN_1456bbb8c(uVar11,pwVar14,&local_88,0);
  iVar4 = *(int *)(lVar5 + 0x180);
  *(uint *)(lVar5 + 0x180) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x184) < iVar4 + 1U) {
    FUN_14472c0f6(lVar5 + 0x178,iVar4);
  }
  *(ulonglong *)(*(longlong *)(lVar5 + 0x178) + (longlong)iVar4 * 8) = uVar11;
  *(int *)(uVar11 + 0x9c) = *(int *)(lVar5 + 0x180) + -1;
  uVar13 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[1] + 0x3090) * 2) * 8
            );
  FUN_14158eb56();
  FUN_1448e935e(uVar13,&local_88,&DAT_14ca6abe0,param_5);
  FUN_14158eb56();
  local_c0 = local_88;
  local_a8 = uStack_80;
  lVar5 = *param_1;
  puVar10 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar10 + 0xc;
  local_a0 = param_1;
  if (*(undefined8 **)(lVar5 + 0x78) < puVar9) {
    FUN_140023dd8((longlong *)(lVar5 + 0x70),0x70);
    puVar10 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar10 + 0xc;
  }
  *(undefined8 **)(lVar5 + 0x70) = puVar9;
  *puVar10 = &PTR_FUN_14a331cf8;
  puVar10[6] = 0;
  *(undefined4 *)(puVar10 + 7) = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  *(undefined8 *)((longlong)puVar10 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)puVar10 + 0x44) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x4c) = 0x3f800000;
  iVar4 = *(int *)(lVar5 + 0xa0);
  *(uint *)(lVar5 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8((longlong *)(lVar5 + 0x98),iVar4);
  }
  plVar6 = local_a0;
  *(undefined8 **)(*(longlong *)(lVar5 + 0x98) + (longlong)iVar4 * 8) = puVar10;
  puVar10[2] = DAT_14c9c0de0;
  puVar10[3] = *local_c8;
  uVar13 = local_b8[1];
  puVar10[6] = *local_b8;
  puVar10[7] = uVar13;
  uVar13 = local_b0[1];
  puVar10[8] = *local_b0;
  puVar10[9] = uVar13;
  *(undefined4 *)(puVar10 + 10) = *(undefined4 *)local_a0[2];
  fVar17 = 1.0;
  if (*(longlong *)local_a0[3] != 0) {
    fVar17 = *(float *)(*(longlong *)local_a0[3] + 0xf0);
  }
  *(float *)(puVar10 + 0xb) = fVar17;
  *(float *)((longlong)puVar10 + 0x54) = 1.0 - fVar17;
  lVar5 = *local_a0;
  uVar3 = *(undefined1 *)(uVar11 + 0x94);
  puVar15 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar15 + 9;
  if (*(undefined8 **)(lVar5 + 0x78) < puVar9) {
    FUN_140023dd8((longlong *)(lVar5 + 0x70),0x50);
    puVar15 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar15 + 9;
  }
  puVar1 = puVar10 + 2;
  *(undefined8 **)(lVar5 + 0x70) = puVar9;
  puVar15[1] = *(undefined8 *)(uVar11 + 8);
  puVar15[2] = 0;
  *(undefined1 *)(puVar15 + 3) = 0;
  *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar15 + 5) = 0;
  *puVar15 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar15 + 6) = uVar3;
  *(undefined1 *)(puVar15 + 7) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar15 + 0x35) = 0;
  puVar15[8] = uVar11;
  iVar4 = *(int *)(lVar5 + 0x1a0);
  *(uint *)(lVar5 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(lVar5 + 0x198,iVar4);
  }
  *(undefined8 **)(*(longlong *)(lVar5 + 0x198) + (longlong)iVar4 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x1c) = *(int *)(lVar5 + 0x1a0) + -1;
  puVar10[4] = puVar15;
  iVar7 = (int)local_98 + 7;
  iVar4 = (int)local_98 + 0xe;
  if (-1 < iVar7) {
    iVar4 = iVar7;
  }
  iVar7 = uVar16 + 0xe;
  if (-1 < (int)(uVar16 + 7)) {
    iVar7 = uVar16 + 7;
  }
  lVar5 = *plVar6;
  FUN_14158ec78();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(local_c0,&DAT_14ca6c938,puVar1);
  FUN_140069376(lVar5);
  uVar13 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar13 = 4;
  }
  puVar2 = (ulonglong *)(lVar5 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 0x3d;
  if (*(undefined8 **)(lVar5 + 0x78) < puVar9) {
    FUN_140023dd8(puVar2,0x1f0);
    puVar10 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar10 + 0x3d;
  }
  *puVar2 = (ulonglong)puVar9;
  uStack_80 = DAT_14ca6c980;
  if (DAT_14ca6c980 != 0) {
    LOCK();
    *(int *)(DAT_14ca6c980 + 8) = *(int *)(DAT_14ca6c980 + 8) + 1;
    UNLOCK();
  }
  uStack_78 = &DAT_14ca6c938;
  local_d8 = 2;
  local_88 = puVar1;
  FUN_140068f1a(puVar10,&local_89,&local_88,uVar13);
  *puVar10 = &PTR_FUN_14a331d00;
  puVar10[0x37] = &DAT_14ca6c938;
  puVar10[0x38] = puVar1;
  puVar10[0x39] = local_c0;
  puVar10[0x3a] = local_a8;
  *(int *)(puVar10 + 0x3b) = iVar7 >> 3;
  *(int *)((longlong)puVar10 + 0x1dc) = iVar4 >> 3;
  *(undefined4 *)(puVar10 + 0x3c) = 1;
  iVar4 = *(int *)(lVar5 + 0x170);
  *(uint *)(lVar5 + 0x170) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(lVar5 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(lVar5 + 0x168) + (longlong)iVar4 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x2c) = *(int *)(lVar5 + 0x170) + -1;
  FUN_140069100(lVar5,puVar10);
  *local_c8 = uVar11;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430fc3b0 FUN_1430fc3b0 body=4790 status=ok
// SIG undefined FUN_1430fc3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430fc3b0(longlong *param_1,longlong *param_2,uint param_3)

{
  undefined4 *puVar1;
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
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 uVar32;
  int iVar33;
  longlong lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  char cVar41;
  uint uVar42;
  uint uVar43;
  DWORD DVar44;
  DWORD DVar45;
  ulonglong uVar46;
  undefined8 uVar47;
  longlong *plVar48;
  undefined8 *puVar49;
  longlong lVar50;
  longlong lVar51;
  uint *puVar52;
  bool bVar53;
  int iVar54;
  longlong *plVar55;
  ulonglong uVar56;
  undefined8 *puVar57;
  byte bVar58;
  longlong lVar59;
  wchar_t *pwVar60;
  longlong *plVar61;
  undefined8 *puVar62;
  longlong lVar63;
  bool bVar64;
  float fVar65;
  undefined1 auStack_1f8 [32];
  int *local_1d8;
  byte local_1c1;
  longlong *local_1c0;
  longlong *local_1b8;
  uint *local_1b0;
  longlong *local_1a8;
  int local_19c;
  ulonglong local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  int local_13c;
  int local_138;
  undefined4 local_134;
  longlong *local_130;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  uint local_104;
  uint local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined2 local_f5;
  undefined1 local_f3;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar34 = *param_1;
  uVar56 = (ulonglong)param_3;
  if (((param_2 == (longlong *)0x0) || (*(int *)(DAT_14ca69828 + 4) < 1)) ||
     (cVar41 = (**(code **)(*param_2 + 0x160))(param_2), lVar50 = DAT_14ca698e8, cVar41 == '\0')) {
    *(undefined8 *)(param_1[2] + 0x13758 + uVar56 * 8) = 0;
    if (*(longlong *)(param_1[2] + 0x3108) != 0) {
      lVar50 = *(longlong *)(param_1[2] + 0x3108) + 0x1ef8 + uVar56 * 0x28;
      *(undefined2 *)(lVar50 + 8) = 0;
      *(undefined4 *)(lVar50 + 4) = 0;
      lVar59 = 0;
      bVar64 = true;
      do {
        bVar53 = bVar64;
        plVar48 = *(longlong **)(lVar50 + 0x18 + lVar59 * 8);
        if (plVar48 != (longlong *)0x0) {
          *(undefined8 *)(lVar50 + 0x18 + lVar59 * 8) = 0;
          (**(code **)(*plVar48 + 0x38))();
        }
        lVar59 = 1;
        bVar64 = false;
      } while (bVar53);
      *(undefined8 *)(lVar50 + 0xc) = DAT_14c967818;
      *(undefined1 *)(lVar50 + 0x14) = 0x5d;
    }
    goto LAB_1430fc513;
  }
  local_1b0 = *(uint **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar42 = local_1b0[0x318];
  if (uVar42 == 0x40000002) {
    uVar46 = 0;
  }
  else {
    bVar64 = true;
    if ((DAT_14c86a9f8 == '\x01') && (uVar42 != 2)) {
      if (uVar42 == 1) {
        DVar44 = FUN_140ad26c0();
        DVar45 = GetCurrentThreadId();
        bVar64 = DVar44 == DVar45;
      }
      else {
        bVar64 = false;
      }
    }
    uVar46 = (ulonglong)(bVar64 ^ 1);
  }
  local_19c = *(int *)(lVar50 + uVar46 * 4);
  iVar54 = 4;
  if (local_19c < 4) {
    iVar54 = local_19c;
  }
  local_1a8 = param_2;
  uVar42 = FUN_14310d47b(param_2);
  uVar46 = (ulonglong)uVar42;
  uVar42 = uVar42 >> (*(byte *)param_1[1] & 0x1f);
  local_198 = uVar56;
  if (*(longlong *)(param_1[2] + 0x3108) != 0) {
    lVar50 = *(longlong *)(param_1[2] + 0x3108) + uVar56 * 0x28;
    if (*(char *)(lVar50 + 0x1f00) == '\x01') {
      *(undefined2 *)(lVar50 + 0x1f00) = 0;
      *(undefined4 *)(lVar50 + 0x1efc) = 0;
    }
    uVar43 = *(uint *)(lVar50 + 0x1ef8);
    plVar48 = (longlong *)(ulonglong)uVar43;
    *(uint *)(lVar50 + 0x1ef8) = 1 - uVar43;
    lVar59 = 0;
    bVar64 = true;
    do {
      bVar53 = bVar64;
      plVar61 = *(longlong **)(lVar50 + 0x1f10 + lVar59 * 8);
      if (plVar61 != (longlong *)0x0) {
        local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,(int)uVar46);
        local_1c0 = plVar48;
        lVar51 = (**(code **)(*plVar61 + 0x10))();
        uVar46 = (ulonglong)local_1b8 & 0xffffffff;
        plVar48 = local_1c0;
        if ((((*(int *)(lVar51 + 0x2c) != (int)local_1b8) ||
             (*(int *)(lVar51 + 0x30) != (int)local_1b8)) ||
            ((*(short *)(lVar51 + 0x34) != 0 || (*(char *)(lVar50 + 0x1f0c) != '\x1a')))) &&
           (plVar61 = *(longlong **)(lVar50 + 0x1f10 + lVar59 * 8), plVar61 != (longlong *)0x0)) {
          *(undefined8 *)(lVar50 + 0x1f10 + lVar59 * 8) = 0;
          (**(code **)(*plVar61 + 0x38))();
          uVar46 = (ulonglong)local_1b8 & 0xffffffff;
          plVar48 = local_1c0;
        }
      }
      lVar59 = 1;
      bVar64 = false;
    } while (bVar53);
    *(ulonglong *)(lVar50 + 0x1f04) = uVar46 << 0x20 | uVar46;
    *(undefined1 *)(lVar50 + 0x1f0c) = 0x1a;
    *(bool *)(lVar50 + 0x1f01) = *(longlong *)(lVar50 + 0x1f10 + (longlong)plVar48 * 8) != 0;
  }
  pwVar60 = L"Cloud.ShadowTexture1";
  if (param_3 == 0) {
    pwVar60 = L"Cloud.ShadowTexture0";
  }
  lVar50 = param_1[3];
  local_110 = DAT_14ca85098;
  uStack_120 = DAT_14ca85088;
  uStack_11c = DAT_14ca8508c;
  uStack_118 = DAT_14ca85090;
  uStack_114 = DAT_14ca85094;
  local_10c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_f6 = 0;
  local_128 = (longlong *)0x20009;
  local_f5 = 0x1a;
  local_fc = 0x10001;
  local_f8 = 0x101;
  local_108 = 0;
  local_f3 = 0xff;
  uVar43 = DAT_14ca84e40;
  if ((int)uVar42 < (int)DAT_14ca84e40) {
    uVar43 = uVar42;
  }
  local_104 = 1;
  if (1 < (int)uVar43) {
    local_104 = uVar43;
  }
  plVar61 = (longlong *)(*(longlong *)(lVar50 + 0x70) + 7U & 0xfffffffffffffff8);
  plVar48 = plVar61 + 0x24;
  local_100 = local_104;
  if (*(longlong **)(lVar50 + 0x78) < plVar48) {
    FUN_140023dd8((longlong *)(lVar50 + 0x70),0x128);
    plVar61 = (longlong *)(*(longlong *)(lVar50 + 0x70) + 7U & 0xfffffffffffffff8);
    plVar48 = plVar61 + 0x24;
  }
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,param_3);
  *(longlong **)(lVar50 + 0x70) = plVar48;
  FUN_1456bbb8c(plVar61,pwVar60,&local_128,0);
  iVar33 = *(int *)(lVar50 + 0x180);
  *(uint *)(lVar50 + 0x180) = iVar33 + 1U;
  if (*(uint *)(lVar50 + 0x184) < iVar33 + 1U) {
    FUN_14472c0f6(lVar50 + 0x178,iVar33);
  }
  *(longlong **)(*(longlong *)(lVar50 + 0x178) + (longlong)iVar33 * 8) = plVar61;
  *(int *)((longlong)plVar61 + 0x9c) = *(int *)(lVar50 + 0x180) + -1;
  lVar50 = param_1[3];
  puVar62 = (undefined8 *)(*(longlong *)(lVar50 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar49 = puVar62 + 0x182;
  local_1b8 = plVar61;
  if (*(undefined8 **)(lVar50 + 0x78) < puVar49) {
    FUN_140023dd8((longlong *)(lVar50 + 0x70),0xc20);
    puVar62 = (undefined8 *)(*(longlong *)(lVar50 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar49 = puVar62 + 0x182;
  }
  *(undefined8 **)(lVar50 + 0x70) = puVar49;
  *puVar62 = &PTR_FUN_14a333410;
  plVar48 = puVar62 + 2;
  FUN_1401cae46(plVar48);
  iVar33 = *(int *)(lVar50 + 0xa0);
  *(uint *)(lVar50 + 0xa0) = iVar33 + 1U;
  if (*(uint *)(lVar50 + 0xa4) < iVar33 + 1U) {
    FUN_1448cfae8((longlong *)(lVar50 + 0x98),iVar33);
  }
  *(undefined8 **)(*(longlong *)(lVar50 + 0x98) + (longlong)iVar33 * 8) = puVar62;
  memcpy(plVar48,(void *)param_1[4],0xc00);
  *(int *)((longlong)puVar62 + 0x7d4) = (int)local_1c0 + 1;
  lVar50 = param_1[3];
  local_128 = plVar48;
  FUN_1403f0ce6();
  local_130 = DAT_14ca69a40;
  uVar47 = FUN_1403f0bf4(lVar50 + 0x1a8,lVar50 + 0x70,&local_128);
  plVar48 = local_1b8;
  FUN_1430fb8b6(param_1[5],local_1b8,uVar47);
  uVar56 = local_198;
  lVar50 = DAT_14ca69918;
  if ((*(char *)param_1[1] == '\x01') && (*(longlong *)(param_1[2] + 0x3108) != 0)) {
    uVar42 = local_1b0[0x318];
    if (uVar42 == 0x40000002) {
      uVar46 = 0;
    }
    else {
      bVar64 = true;
      if ((DAT_14c86a9f8 == '\x01') && (uVar42 != 2)) {
        if (uVar42 == 1) {
          DVar44 = FUN_140ad26c0();
          DVar45 = GetCurrentThreadId();
          bVar64 = DVar44 == DVar45;
        }
        else {
          bVar64 = false;
        }
      }
      uVar46 = (ulonglong)(bVar64 ^ 1);
    }
    fVar65 = cosf(*(float *)(lVar50 + uVar46 * 4) * 0.017453292);
    uVar47 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[2] + 0x3090) * 2) *
              8);
    FUN_145f5b2ba();
    FUN_1448e935e(uVar47,&local_128,&DAT_14ca6ad08,0);
    FUN_145f5b2ba();
    lVar50 = *(longlong *)(param_1[2] + 0x3108) + uVar56 * 0x28;
    puVar52 = (uint *)(lVar50 + 0x1ef8);
    local_1c0 = (longlong *)FUN_1473357cc(puVar52,param_1[3]);
    lVar59 = *(longlong *)(param_1[2] + 0x3108);
    lVar51 = param_1[3];
    bVar58 = fVar65 <= (float)*(double *)(lVar59 + 0x20b0 + uVar56 * 0x18) *
                       (float)(double)local_1a8[10] +
                       (float)*(double *)(lVar59 + 0x20b8 + uVar56 * 0x18) *
                       (float)(double)local_1a8[0xe] +
                       (float)*(double *)(lVar59 + 0x20c0 + uVar56 * 0x18) *
                       (float)(double)local_1a8[0x12] & *(byte *)(lVar50 + 0x1f01);
    puVar62 = (undefined8 *)(*(longlong *)(lVar51 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar49 = puVar62 + 0x26;
    local_1b0 = puVar52;
    if (*(undefined8 **)(lVar51 + 0x78) < puVar49) {
      FUN_140023dd8((longlong *)(lVar51 + 0x70),0x140);
      puVar62 = (undefined8 *)(*(longlong *)(lVar51 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar49 = puVar62 + 0x26;
    }
    *(undefined8 **)(lVar51 + 0x70) = puVar49;
    *puVar62 = &PTR_FUN_14a331d70;
    puVar62[0x1e] = 0;
    *(undefined4 *)(puVar62 + 0x1f) = 0;
    puVar62[2] = 0;
    puVar62[3] = 0;
    puVar62[4] = 0;
    puVar62[5] = 0;
    *(undefined8 *)((longlong)puVar62 + 0xfc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar62 + 0x104) = 0;
    *(undefined8 *)((longlong)puVar62 + 0x10c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar62 + 0x114) = 0;
    *(undefined4 *)((longlong)puVar62 + 0x11c) = 0x3f800000;
    iVar33 = *(int *)(lVar51 + 0xa0);
    *(uint *)(lVar51 + 0xa0) = iVar33 + 1U;
    if (*(uint *)(lVar51 + 0xa4) < iVar33 + 1U) {
      FUN_1448cfae8((longlong *)(lVar51 + 0x98),iVar33);
    }
    *(undefined8 **)(*(longlong *)(lVar51 + 0x98) + (longlong)iVar33 * 8) = puVar62;
    puVar62[2] = DAT_14c9c0de0;
    puVar62[3] = local_1b8;
    local_1c1 = bVar58;
    if (bVar58 == 0) {
      uVar47 = *(undefined8 *)param_1[6];
    }
    else {
      uVar47 = FUN_14473c272(param_1[3],local_1b0 + (ulonglong)(1 - *local_1b0) * 2 + 6,0);
    }
    plVar48 = local_1c0;
    puVar62[4] = uVar47;
    lVar50 = param_1[3];
    uVar32 = *(undefined1 *)((longlong)local_1c0 + 0x94);
    puVar57 = (undefined8 *)(*(longlong *)(lVar50 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar49 = puVar57 + 9;
    if (*(undefined8 **)(lVar50 + 0x78) < puVar49) {
      FUN_140023dd8((longlong *)(lVar50 + 0x70),0x50);
      puVar57 = (undefined8 *)(*(longlong *)(lVar50 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar49 = puVar57 + 9;
    }
    *(undefined8 **)(lVar50 + 0x70) = puVar49;
    puVar57[1] = plVar48[1];
    puVar57[2] = 0;
    *(undefined1 *)(puVar57 + 3) = 0;
    *(undefined8 *)((longlong)puVar57 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar57 + 5) = 0;
    *puVar57 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar57 + 6) = uVar32;
    *(undefined1 *)(puVar57 + 7) = 0;
    *(undefined4 *)((longlong)puVar57 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar57 + 0x35) = 0;
    puVar57[8] = plVar48;
    iVar33 = *(int *)(lVar50 + 0x1a0);
    *(uint *)(lVar50 + 0x1a0) = iVar33 + 1U;
    if (*(uint *)(lVar50 + 0x1a4) < iVar33 + 1U) {
      FUN_1447568fc(lVar50 + 0x198,iVar33);
    }
    puVar52 = local_1b0;
    bVar58 = local_1c1;
    puVar49 = puVar62 + 0x20;
    plVar48 = puVar62 + 0x22;
    *(undefined8 **)(*(longlong *)(lVar50 + 0x198) + (longlong)iVar33 * 8) = puVar57;
    *(int *)((longlong)puVar57 + 0x1c) = *(int *)(lVar50 + 0x1a0) + -1;
    puVar62[5] = puVar57;
    if (local_1c1 == 0) {
      puVar62[4] = *(undefined8 *)param_1[6];
      uVar47 = DAT_14c846258;
      puVar62[6] = _DAT_14c846250;
      puVar62[7] = uVar47;
      uVar47 = _DAT_14c846268;
      puVar62[8] = _DAT_14c846260;
      puVar62[9] = uVar47;
      uVar47 = _DAT_14c846278;
      puVar62[10] = _DAT_14c846270;
      puVar62[0xb] = uVar47;
      uVar47 = _DAT_14c846288;
      puVar62[0xc] = _DAT_14c846280;
      puVar62[0xd] = uVar47;
      uVar47 = DAT_14c846258;
      puVar62[0xe] = _DAT_14c846250;
      puVar62[0xf] = uVar47;
      uVar47 = _DAT_14c846268;
      puVar62[0x10] = _DAT_14c846260;
      puVar62[0x11] = uVar47;
      uVar47 = _DAT_14c846278;
      puVar62[0x12] = _DAT_14c846270;
      puVar62[0x13] = uVar47;
      uVar47 = _DAT_14c846288;
      puVar62[0x14] = _DAT_14c846280;
      puVar62[0x15] = uVar47;
    }
    else {
      local_1b8 = plVar48;
      local_190 = puVar49;
      uVar47 = FUN_14473c272(param_1[3],local_1b0 + (ulonglong)(1 - *local_1b0) * 2 + 6,0,
                             puVar62 + 2);
      puVar62[4] = uVar47;
      lVar50 = local_198 * 0x40;
      puVar49 = (undefined8 *)(lVar34 + 0x1d0 + lVar50);
      uVar47 = puVar49[1];
      puVar57 = (undefined8 *)(lVar34 + 0x1e0 + lVar50);
      uVar35 = *puVar57;
      uVar36 = puVar57[1];
      puVar57 = (undefined8 *)(lVar34 + 0x1f0 + lVar50);
      uVar37 = *puVar57;
      uVar38 = puVar57[1];
      puVar57 = (undefined8 *)(lVar34 + 0x200 + lVar50);
      uVar39 = *puVar57;
      uVar40 = puVar57[1];
      puVar62[6] = *puVar49;
      puVar62[7] = uVar47;
      puVar62[8] = uVar35;
      puVar62[9] = uVar36;
      puVar62[10] = uVar37;
      puVar62[0xb] = uVar38;
      puVar62[0xc] = uVar39;
      puVar62[0xd] = uVar40;
      lVar50 = *(longlong *)(param_1[2] + 0x3108);
      lVar59 = local_198 * 0x80;
      dVar17 = *(double *)(lVar50 + 0x1f58 + lVar59);
      dVar18 = *(double *)(lVar50 + 0x1f60 + lVar59);
      dVar19 = *(double *)(lVar50 + 0x1f68 + lVar59);
      dVar20 = *(double *)(lVar50 + 0x1f70 + lVar59);
      dVar21 = *(double *)(lVar50 + 0x1f78 + lVar59);
      dVar22 = *(double *)(lVar50 + 0x1f80 + lVar59);
      dVar23 = *(double *)(lVar50 + 0x1f88 + lVar59);
      dVar24 = *(double *)(lVar50 + 0x1f90 + lVar59);
      dVar25 = *(double *)(lVar50 + 0x1f98 + lVar59);
      dVar26 = *(double *)(lVar50 + 0x1fa0 + lVar59);
      dVar27 = *(double *)(lVar50 + 0x1fa8 + lVar59);
      dVar28 = *(double *)(lVar50 + 0x1fb0 + lVar59);
      dVar29 = *(double *)(lVar50 + 0x1fb8 + lVar59);
      dVar30 = *(double *)(lVar50 + 0x1fc0 + lVar59);
      dVar31 = *(double *)(lVar50 + 0x1fc8 + lVar59);
      *(float *)(puVar62 + 0xe) = (float)*(double *)(lVar50 + 0x1f50 + lVar59);
      *(float *)((longlong)puVar62 + 0x74) = (float)dVar17;
      *(float *)(puVar62 + 0xf) = (float)dVar18;
      *(float *)((longlong)puVar62 + 0x7c) = (float)dVar19;
      *(float *)(puVar62 + 0x10) = (float)dVar20;
      *(float *)((longlong)puVar62 + 0x84) = (float)dVar21;
      *(float *)(puVar62 + 0x11) = (float)dVar22;
      *(float *)((longlong)puVar62 + 0x8c) = (float)dVar23;
      *(float *)(puVar62 + 0x12) = (float)dVar24;
      *(float *)((longlong)puVar62 + 0x94) = (float)dVar25;
      *(float *)(puVar62 + 0x13) = (float)dVar26;
      *(float *)((longlong)puVar62 + 0x9c) = (float)dVar27;
      *(float *)(puVar62 + 0x14) = (float)dVar28;
      *(float *)((longlong)puVar62 + 0xa4) = (float)dVar29;
      *(float *)(puVar62 + 0x15) = (float)dVar30;
      *(float *)((longlong)puVar62 + 0xac) = (float)dVar31;
      plVar48 = local_1b8;
      puVar49 = local_190;
    }
    uVar56 = local_198;
    lVar51 = local_198 * 0x10;
    uVar16 = *(undefined4 *)(lVar34 + 0x298 + lVar51);
    puVar62[0x16] = *(undefined8 *)(lVar34 + 0x290 + lVar51);
    *(undefined4 *)(puVar62 + 0x17) = uVar16;
    uVar16 = *(undefined4 *)(lVar34 + 0x278 + lVar51);
    puVar62[0x1a] = *(undefined8 *)(lVar34 + 0x270 + lVar51);
    *(undefined4 *)(puVar62 + 0x1b) = uVar16;
    lVar50 = *(longlong *)(param_1[2] + 0x3108);
    lVar59 = local_198 * 0x18;
    dVar17 = *(double *)(lVar50 + 0x2060 + lVar59);
    dVar18 = *(double *)(lVar50 + 0x2058 + lVar59);
    *(float *)(puVar62 + 0x18) = (float)*(double *)(lVar50 + 0x2050 + lVar59);
    *(float *)((longlong)puVar62 + 0xc4) = (float)dVar18;
    *(float *)(puVar62 + 0x19) = (float)dVar17;
    lVar50 = *(longlong *)(param_1[2] + 0x3108);
    dVar17 = *(double *)(lVar50 + 0x20c0 + lVar59);
    dVar18 = *(double *)(lVar50 + 0x20b8 + lVar59);
    *(float *)(puVar62 + 0x1c) = (float)*(double *)(lVar50 + 0x20b0 + lVar59);
    *(float *)((longlong)puVar62 + 0xe4) = (float)dVar18;
    *(float *)(puVar62 + 0x1d) = (float)dVar17;
    lVar50 = *(longlong *)(param_1[2] + 0x3108);
    dVar19 = *(double *)(lVar50 + 0x2090 + lVar59) - (double)*(float *)(lVar34 + 0x2b8 + lVar51);
    dVar17 = *(double *)(lVar50 + 0x2080 + lVar59) - (double)*(float *)(lVar34 + 0x2b0 + lVar51);
    dVar18 = *(double *)(lVar50 + 0x2088 + lVar59) - (double)*(float *)(lVar34 + 0x2b4 + lVar51);
    *(uint *)(puVar62 + 0x25) =
         (uint)(9.999999747378752e-05 <= dVar19 * dVar19 + dVar17 * dVar17 + dVar18 * dVar18);
    puVar57 = (undefined8 *)(param_1[4] + 0x100 + lVar51);
    uVar47 = puVar57[1];
    puVar62[0x1e] = *puVar57;
    puVar62[0x1f] = uVar47;
    puVar57 = (undefined8 *)(param_1[4] + 0x120 + lVar51);
    uVar47 = puVar57[1];
    *puVar49 = *puVar57;
    puVar49[1] = uVar47;
    plVar61 = (longlong *)(param_1[4] + 0x240 + lVar51);
    lVar50 = plVar61[1];
    *plVar48 = *plVar61;
    plVar48[1] = lVar50;
    *(uint *)((longlong)puVar62 + 0x124) = (uint)bVar58;
    *(undefined4 *)(puVar62 + 0x24) = *(undefined4 *)param_1[7];
    iVar33 = (int)*(float *)((longlong)puVar62 + 0xf4) + 7;
    local_138 = (int)*(float *)((longlong)puVar62 + 0xf4) + 0xe;
    if (-1 < iVar33) {
      local_138 = iVar33;
    }
    local_138 = local_138 >> 3;
    iVar33 = (int)*(float *)(puVar62 + 0x1e) + 7;
    local_13c = (int)*(float *)(puVar62 + 0x1e) + 0xe;
    if (-1 < iVar33) {
      local_13c = iVar33;
    }
    local_13c = local_13c >> 3;
    local_1d8 = &local_13c;
    local_134 = 1;
    FUN_1473388ed(param_1[3],&local_130,&local_128,puVar62 + 2);
    plVar48 = local_1c0;
    FUN_1473358a8(puVar52,param_1[3],local_1c0);
    if (local_19c < 1) {
      lVar50 = param_1[3];
      local_130 = *(longlong **)(puVar52 + (ulonglong)*puVar52 * 2 + 6);
      if (local_130 != (longlong *)0x0) {
        (**(code **)(*local_130 + 0x30))();
      }
      uVar47 = FUN_14473c272(lVar50,&local_130,0);
      *(undefined8 *)(param_1[2] + 0x13758 + uVar56 * 8) = uVar47;
      if (local_130 != (longlong *)0x0) {
        (**(code **)(*local_130 + 0x38))();
      }
    }
    else {
      local_130 = plVar48;
      fVar65 = (float)(**(code **)(*local_1a8 + 0x168))();
      fVar65 = fVar65 * 100000.0 * *(float *)(param_1[4] + 0x108 + lVar51);
      do {
        puVar1 = (undefined4 *)(param_1[4] + 0x100 + lVar51);
        local_168 = *puVar1;
        uStack_164 = puVar1[1];
        uStack_160 = puVar1[2];
        uStack_15c = puVar1[3];
        local_1d8 = (int *)((ulonglong)local_1d8 & 0xffffffffffffff00);
        local_158 = fVar65;
        local_154 = fVar65;
        local_150 = 1.0 / fVar65;
        local_14c = 1.0 / fVar65;
        FUN_1430fbd76(param_1[9],&local_130,&local_168,&local_158);
        iVar54 = iVar54 + -1;
        plVar48 = local_130;
      } while (iVar54 != 0);
LAB_1430fcc49:
      *(longlong **)(param_1[2] + 0x13758 + uVar56 * 8) = plVar48;
    }
  }
  else {
    if (0 < local_19c) {
      local_128 = plVar48;
      fVar65 = (float)(**(code **)(*local_1a8 + 0x168))();
      fVar65 = fVar65 * 100000.0 * *(float *)(param_1[4] + 0x108 + uVar56 * 0x10);
      do {
        puVar1 = (undefined4 *)(param_1[4] + 0x100 + uVar56 * 0x10);
        local_188 = *puVar1;
        uStack_184 = puVar1[1];
        uStack_180 = puVar1[2];
        uStack_17c = puVar1[3];
        local_1d8 = (int *)((ulonglong)local_1d8 & 0xffffffffffffff00);
        local_178 = fVar65;
        local_174 = fVar65;
        local_170 = 1.0 / fVar65;
        local_16c = 1.0 / fVar65;
        FUN_1430fbd76(param_1[9],&local_128,&local_188,&local_178);
        iVar54 = iVar54 + -1;
        plVar48 = local_128;
      } while (iVar54 != 0);
      goto LAB_1430fcc49;
    }
    *(longlong **)(param_1[2] + 0x13758 + local_198 * 8) = plVar48;
  }
  lVar50 = param_1[3];
  lVar59 = *(longlong *)(param_1[2] + 0x13758 + uVar56 * 8);
  if (lVar59 != 0) {
    plVar48 = (longlong *)param_1[10];
    iVar54 = (int)plVar48[1];
    *(uint *)(plVar48 + 1) = iVar54 + 1U;
    if (*(uint *)((longlong)plVar48 + 0xc) < iVar54 + 1U) {
      FUN_144904f42(plVar48,iVar54);
    }
    lVar51 = *plVar48;
    lVar63 = (longlong)iVar54 * 0x10;
    *(longlong *)(lVar51 + lVar63) = lVar59;
    *(undefined4 *)(lVar51 + 8 + lVar63) = 0x70;
    *(undefined1 *)(lVar51 + 0xc + lVar63) = 3;
  }
  plVar48 = (longlong *)FUN_14495f742(lVar50,lVar59);
  param_2 = local_1a8;
  plVar48 = (longlong *)*plVar48;
  plVar61 = *(longlong **)(param_1[2] + 0x13768 + uVar56 * 8);
  if (plVar61 != plVar48) {
    *(longlong **)(param_1[2] + 0x13768 + uVar56 * 8) = plVar48;
    if (plVar48 != (longlong *)0x0) {
      (**(code **)(*plVar48 + 0x30))();
    }
    if (plVar61 != (longlong *)0x0) {
      (**(code **)(*plVar61 + 0x38))(plVar61);
    }
  }
LAB_1430fc513:
  lVar50 = *(longlong *)(param_1[2] + 0x3108);
  if (lVar50 != 0) {
    lVar59 = uVar56 * 0x40;
    fVar65 = *(float *)(lVar34 + 0x154 + lVar59);
    fVar2 = *(float *)(lVar34 + 0x158 + lVar59);
    fVar3 = *(float *)(lVar34 + 0x15c + lVar59);
    fVar4 = *(float *)(lVar34 + 0x160 + lVar59);
    fVar5 = *(float *)(lVar34 + 0x164 + lVar59);
    fVar6 = *(float *)(lVar34 + 0x168 + lVar59);
    fVar7 = *(float *)(lVar34 + 0x16c + lVar59);
    fVar8 = *(float *)(lVar34 + 0x170 + lVar59);
    fVar9 = *(float *)(lVar34 + 0x174 + lVar59);
    fVar10 = *(float *)(lVar34 + 0x178 + lVar59);
    fVar11 = *(float *)(lVar34 + 0x17c + lVar59);
    fVar12 = *(float *)(lVar34 + 0x180 + lVar59);
    fVar13 = *(float *)(lVar34 + 0x184 + lVar59);
    fVar14 = *(float *)(lVar34 + 0x188 + lVar59);
    fVar15 = *(float *)(lVar34 + 0x18c + lVar59);
    lVar51 = uVar56 * 0x80;
    bVar64 = param_2 != (longlong *)0x0;
    plVar48 = &DAT_14c8464e0;
    if (bVar64) {
      plVar48 = param_2 + 10;
    }
    plVar61 = &DAT_14c8464e8;
    if (bVar64) {
      plVar61 = param_2 + 0xe;
    }
    plVar55 = &DAT_14c8464f0;
    if (bVar64) {
      plVar55 = param_2 + 0x12;
    }
    *(double *)(lVar50 + 0x1f50 + lVar51) = (double)*(float *)(lVar34 + 0x150 + lVar59);
    *(double *)(lVar50 + 0x1f58 + lVar51) = (double)fVar65;
    *(double *)(lVar50 + 0x1f60 + lVar51) = (double)fVar2;
    *(double *)(lVar50 + 0x1f68 + lVar51) = (double)fVar3;
    *(double *)(lVar50 + 0x1f70 + lVar51) = (double)fVar4;
    *(double *)(lVar50 + 0x1f78 + lVar51) = (double)fVar5;
    *(double *)(lVar50 + 0x1f80 + lVar51) = (double)fVar6;
    *(double *)(lVar50 + 0x1f88 + lVar51) = (double)fVar7;
    *(double *)(lVar50 + 0x1f90 + lVar51) = (double)fVar8;
    *(double *)(lVar50 + 0x1f98 + lVar51) = (double)fVar9;
    *(double *)(lVar50 + 0x1fa0 + lVar51) = (double)fVar10;
    *(double *)(lVar50 + 0x1fa8 + lVar51) = (double)fVar11;
    *(double *)(lVar50 + 0x1fb0 + lVar51) = (double)fVar12;
    *(double *)(lVar50 + 0x1fb8 + lVar51) = (double)fVar13;
    *(double *)(lVar50 + 0x1fc0 + lVar51) = (double)fVar14;
    *(double *)(lVar50 + 0x1fc8 + lVar51) = (double)fVar15;
    lVar50 = *plVar55;
    lVar59 = *plVar61;
    lVar51 = *(longlong *)(param_1[2] + 0x3108);
    lVar63 = uVar56 * 0x18;
    *(longlong *)(lVar51 + 0x20b0 + lVar63) = *plVar48;
    *(longlong *)(lVar51 + 0x20b8 + lVar63) = lVar59;
    *(longlong *)(lVar51 + 0x20c0 + lVar63) = lVar50;
    lVar59 = uVar56 * 0x10;
    fVar65 = *(float *)(lVar34 + 0x298 + lVar59);
    fVar2 = *(float *)(lVar34 + 0x294 + lVar59);
    lVar50 = *(longlong *)(param_1[2] + 0x3108);
    *(double *)(lVar50 + 0x2050 + lVar63) = (double)*(float *)(lVar34 + 0x290 + lVar59);
    *(double *)(lVar50 + 0x2058 + lVar63) = (double)fVar2;
    *(double *)(lVar50 + 0x2060 + lVar63) = (double)fVar65;
    fVar65 = *(float *)(lVar34 + 0x2b8 + lVar59);
    fVar2 = *(float *)(lVar34 + 0x2b4 + lVar59);
    lVar50 = *(longlong *)(param_1[2] + 0x3108);
    *(double *)(lVar50 + 0x2080 + lVar63) = (double)*(float *)(lVar34 + 0x2b0 + lVar59);
    *(double *)(lVar50 + 0x2088 + lVar63) = (double)fVar2;
    *(double *)(lVar50 + 0x2090 + lVar63) = (double)fVar65;
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430fd667 FUN_1430fd667 body=69 status=ok
// SIG undefined FUN_1430fd667(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430fd667(void)

{
  _DAT_14ca6add0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001430fd6a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6add8,1);
  return;
}



// FUNCTION 1430fd6ac FUN_1430fd6ac body=8450 status=ok
// SIG undefined FUN_1430fd6ac(void)

void FUN_1430fd6ac(longlong param_1,longlong param_2,undefined8 *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  DWORD DVar15;
  DWORD DVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined8 uVar24;
  longlong *plVar25;
  char cVar26;
  uint uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  byte bVar37;
  longlong *plVar38;
  byte bVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_168 [32];
  uint local_148;
  undefined1 local_140;
  byte local_131;
  longlong local_130;
  undefined8 *local_128;
  ulonglong *local_120;
  uint local_114;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  int local_c4;
  undefined1 *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a7;
  undefined4 local_a6;
  undefined2 local_a2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined4 local_66;
  ulonglong local_60;
  
  lVar23 = DAT_14ca69a20;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar31 = param_3[1];
  local_10c = CONCAT31(local_10c._1_3_,*(undefined1 *)(param_3 + 0x27));
  local_110 = CONCAT31(local_110._1_3_,*(undefined1 *)((longlong)param_3 + 0x13d));
  local_130 = param_2;
  local_128 = param_3;
  local_f8 = param_4;
  if (*(char *)((longlong)param_3 + 0x13e) == '\x01') {
    iVar13 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar13 == 0x40000002) {
      uVar17 = 0;
    }
    else {
      bVar40 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar13 != 2)) {
        if (iVar13 == 1) {
          DVar15 = FUN_140ad26c0();
          DVar16 = GetCurrentThreadId();
          bVar40 = DVar15 == DVar16;
        }
        else {
          bVar40 = false;
        }
      }
      uVar17 = (ulonglong)(bVar40 ^ 1);
    }
    local_114 = *(byte *)(lVar23 + uVar17) ^ 1;
  }
  else {
    local_114 = 0;
  }
  puVar30 = local_128;
  local_131 = *(byte *)(local_128 + 0x28);
  local_b0 = local_128[6];
  local_d8 = local_128[4];
  local_d0 = local_128[5];
  lVar23 = local_d8;
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
    UNLOCK();
    lVar23 = local_128[4];
  }
  plVar25 = (longlong *)*local_128;
  puVar1 = (ulonglong *)(local_130 + 0x70);
  puVar29 = (undefined8 *)(*(longlong *)(local_130 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar28 = puVar29 + 0x182;
  local_120 = puVar1;
  local_100 = param_1;
  if (*(undefined8 **)(local_130 + 0x78) < puVar28) {
    FUN_140023dd8(puVar1,0xc20);
    puVar29 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar28 = puVar29 + 0x182;
  }
  lVar19 = local_130;
  *(undefined8 **)(local_130 + 0x70) = puVar28;
  *puVar29 = &PTR_FUN_14a333410;
  puVar28 = puVar29 + 2;
  FUN_1401cae46(puVar28);
  local_108 = lVar19 + 0x98;
  iVar13 = *(int *)(lVar19 + 0xa0);
  *(uint *)(lVar19 + 0xa0) = iVar13 + 1U;
  if (*(uint *)(lVar19 + 0xa4) < iVar13 + 1U) {
    FUN_1448cfae8(local_108,iVar13);
  }
  *(undefined8 **)(*(longlong *)(lVar19 + 0x98) + (longlong)iVar13 * 8) = puVar29;
  FUN_1430f7376(lVar19,puVar28,plVar25,lVar23);
  puVar29[0x82] = puVar30[2];
  lVar19 = puVar30[3];
  if (lVar19 == 0) {
    lVar19 = puVar29[0x83];
  }
  puVar29[0x83] = lVar19;
  if ((*(char *)(puVar30 + 0x27) == '\x01') && (*(longlong *)(lVar23 + 0x3108) != 0)) {
    uVar12 = *(uint *)(*(longlong *)(lVar23 + 0x3108) + 0x1e78);
    uVar27 = (*(int *)(lVar23 + 0x3104) - 1U) / uVar12;
    uVar33 = (*(int *)(lVar23 + 0x3100) - 1U) / uVar12;
    uVar34 = *(uint *)(lVar23 + 0x30fc) / uVar12;
    uVar12 = *(uint *)(lVar23 + 0x30f8) / uVar12;
  }
  else {
    uVar27 = *(int *)(lVar23 + 0x3104) - 1;
    uVar33 = *(int *)(lVar23 + 0x3100) - 1;
    uVar12 = *(uint *)(lVar23 + 0x30f8);
    uVar34 = *(uint *)(lVar23 + 0x30fc);
  }
  *(uint *)(puVar29 + 0xf6) = uVar12;
  *(uint *)((longlong)puVar29 + 0x7b4) = uVar34;
  *(uint *)(puVar29 + 0xf7) = uVar33;
  *(uint *)((longlong)puVar29 + 0x7bc) = uVar27;
  memcpy(puVar29 + 0x88,puVar30 + 0x2e,0x2d0);
  *(undefined4 *)(puVar29 + 0xf0) = *(undefined4 *)(puVar30 + 0x8a);
  puVar29[0x84] = puVar30[0x88];
  puVar29[0x85] = puVar30[0x89];
  uVar18 = *(undefined8 *)((longlong)puVar30 + 0x14c);
  puVar29[0xf2] = *(undefined8 *)((longlong)puVar30 + 0x144);
  puVar29[0xf3] = uVar18;
  uVar14 = *(undefined4 *)(puVar30 + 0x2b);
  uVar7 = *(undefined4 *)((longlong)puVar30 + 0x15c);
  uVar8 = *(undefined4 *)(puVar30 + 0x2c);
  *(undefined4 *)(puVar29 + 0xf4) = *(undefined4 *)((longlong)puVar30 + 0x154);
  *(undefined4 *)((longlong)puVar29 + 0x7a4) = uVar14;
  *(undefined4 *)(puVar29 + 0xf5) = uVar7;
  *(undefined4 *)((longlong)puVar29 + 0x7ac) = uVar8;
  *(undefined4 *)(puVar29 + 0xf8) = *(undefined4 *)((longlong)puVar30 + 0x164);
  *(uint *)(puVar29 + 0xfa) = (uint)*(byte *)((longlong)puVar30 + 0x13b);
  iVar13 = 2;
  if ((*(char *)(puVar30 + 0x27) == '\x01') && (*(longlong *)(lVar23 + 0x3108) != 0)) {
    iVar13 = (uint)(*(int *)(*(longlong *)(lVar23 + 0x3108) + 0x1ef0) != 2) * 2;
  }
  *(int *)((longlong)puVar29 + 0x7c4) = iVar13;
  lVar19 = DAT_14ca696a8;
  if (*(longlong *)(lVar23 + 8) == 0) {
    if (*(char *)((longlong)puVar30 + 0x13b) != '\0') goto LAB_1430fda05;
  }
  else if ((*(char *)((longlong)puVar30 + 0x13b) != '\0') &&
          (((*(byte *)(*(longlong *)(lVar23 + 8) + 0x60) & 2) == 0 ||
           (*(char *)((longlong)puVar30 + 0x13c) == '\0')))) {
LAB_1430fda05:
    lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar13 = *(int *)(lVar20 + 0xc60);
    if (iVar13 == 0x40000002) {
      iVar13 = 0x40000002;
      uVar17 = 0;
    }
    else {
      bVar40 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar13 != 2)) {
        if (iVar13 == 1) {
          DVar15 = FUN_140ad26c0();
          DVar16 = GetCurrentThreadId();
          bVar40 = DVar15 == DVar16;
          iVar13 = *(int *)(lVar20 + 0xc60);
        }
        else {
          bVar40 = false;
        }
      }
      uVar17 = (ulonglong)(bVar40 ^ 1);
    }
    puVar30 = local_128;
    fVar42 = *(float *)(*plVar25 + 0x34) * 96.0;
    fVar41 = *(float *)(lVar19 + uVar17 * 4);
    if (fVar41 <= fVar42) {
      fVar42 = fVar41;
    }
    fVar41 = 2.0;
    if (2.0 <= fVar42) {
      fVar41 = fVar42;
    }
    *(int *)((longlong)puVar29 + 0x4c) = (int)fVar41;
    lVar19 = DAT_14ca69750;
    if (iVar13 == 0x40000002) {
      uVar17 = 0;
    }
    else {
      bVar40 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar13 != 2)) {
        if (iVar13 == 1) {
          DVar15 = FUN_140ad26c0();
          DVar16 = GetCurrentThreadId();
          bVar40 = DVar15 == DVar16;
        }
        else {
          bVar40 = false;
        }
      }
      uVar17 = (ulonglong)(bVar40 ^ 1);
    }
    fVar42 = *(float *)(*plVar25 + 0x3c) * 10.0;
    fVar41 = *(float *)(lVar19 + uVar17 * 4);
    if (fVar41 <= fVar42) {
      fVar42 = fVar41;
    }
    fVar41 = 2.0;
    if (2.0 <= fVar42) {
      fVar41 = fVar42;
    }
    *(int *)((longlong)puVar29 + 0x54) = (int)fVar41;
  }
  *(uint *)((longlong)puVar29 + 0x7f4) = *(byte *)((longlong)puVar30 + 0x139) ^ 1;
  uVar12 = *(byte *)((longlong)puVar30 + 0x13a) ^ 1;
  if (*(int *)(puVar29 + 0x100) == 0) {
    uVar12 = 0;
  }
  *(uint *)(puVar29 + 0x100) = uVar12;
  piVar9 = DAT_14ca69948;
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar13 = *(int *)(lVar19 + 0xc60);
  if (iVar13 == 0x40000002) {
    *(uint *)(puVar29 + 0xff) = (uint)(0 < *DAT_14ca69948);
    uVar17 = 0;
    lVar19 = DAT_14ca69960;
  }
  else {
    bVar40 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar13 != 2)) {
      if (iVar13 == 1) {
        DVar15 = FUN_140ad26c0();
        DVar16 = GetCurrentThreadId();
        bVar40 = DVar15 == DVar16;
        iVar13 = *(int *)(lVar19 + 0xc60);
        puVar30 = local_128;
      }
      else {
        bVar40 = false;
      }
    }
    *(uint *)(puVar29 + 0xff) = (uint)(0 < piVar9[bVar40 ^ 1]);
    lVar19 = DAT_14ca69960;
    if (iVar13 == 0x40000002) {
      uVar17 = 0;
    }
    else {
      uVar17 = 1;
      if ((DAT_14c86a9f8 == '\x01') && (iVar13 != 2)) {
        if (iVar13 == 1) {
          DVar15 = FUN_140ad26c0();
          DVar16 = GetCurrentThreadId();
          uVar17 = (ulonglong)(DVar15 == DVar16);
        }
        else {
          uVar17 = 0;
        }
      }
      uVar17 = uVar17 ^ 1;
    }
  }
  *(uint *)((longlong)puVar29 + 0x7fc) = (uint)(0 < *(int *)(lVar19 + uVar17 * 4));
  *(undefined4 *)(puVar29 + 0x101) = *(undefined4 *)(*plVar25 + 0x50);
  fVar41 = *(float *)(*plVar25 + 0x54);
  if (fVar41 <= 1e-05) {
    fVar41 = 1e-05;
  }
  *(float *)((longlong)puVar29 + 0x80c) = 1.0 / fVar41;
  *(undefined4 *)(puVar29 + 0x102) = *(undefined4 *)(*plVar25 + 0x48);
  fVar41 = *(float *)(*plVar25 + 0x4c);
  if (fVar41 <= 1e-05) {
    fVar41 = 1e-05;
  }
  *(float *)((longlong)puVar29 + 0x814) = 1.0 / fVar41;
  fVar41 = (float)*(int *)(puVar30[6] + 0x88);
  fVar42 = (float)*(int *)(puVar30[6] + 0x84);
  *(float *)(puVar29 + 0xfc) = fVar42;
  *(float *)((longlong)puVar29 + 0x7e4) = fVar41;
  *(float *)(puVar29 + 0xfd) = 1.0 / fVar42;
  *(float *)((longlong)puVar29 + 0x7ec) = 1.0 / fVar41;
  if (*(char *)((longlong)puVar30 + 0x13c) == '\x01') {
    *(undefined4 *)(puVar29 + 0x116) = 0;
    *(undefined4 *)((longlong)puVar29 + 0x7c4) = 0;
  }
  else if ((*(longlong *)(lVar23 + 0x3108) != 0) && (0 < *(int *)(DAT_14ca69708 + 4))) {
    uVar12 = *(uint *)(*(longlong *)(lVar23 + 0x3108) + 0x1ef0);
    cVar11 = FUN_1400edda3(lVar23);
    if ((cVar11 != '\0') && ((uVar12 & 0xfffffffd) == 0)) {
      *(undefined4 *)(puVar29 + 0x116) = 0;
      *(undefined4 *)(puVar29 + 0x100) = 0;
    }
  }
  lVar19 = local_130;
  plVar25 = puVar30 + 6;
  lVar23 = local_130 + 0x1a8;
  local_98 = puVar28;
  FUN_1403f0ce6();
  local_a0 = DAT_14ca69a40;
  uVar18 = FUN_1403f0bf4(lVar23,local_120,&local_98);
  iVar13 = *(int *)(DAT_14ca69978 + 4);
  uVar12 = FUN_1400b0b91(*(undefined4 *)(*(longlong *)(local_100 + 8) + 8),8);
  puVar1 = local_120;
  local_f0 = lVar31;
  if ((((*(int *)(DAT_14ca696f0 + 4) != 0) || ((DAT_14c873612 & 0x20) == 0)) || (1 < uVar12)) ||
     ((DAT_14c873700 & 0x200000) == 0)) {
    puVar28 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar30 = puVar28 + 0x2e;
    if (*(undefined8 **)(lVar19 + 0x78) < puVar30) {
      FUN_140023dd8(local_120,0x180);
      puVar28 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar30 = puVar28 + 0x2e;
      lVar19 = local_130;
    }
    *(undefined8 **)(lVar19 + 0x70) = puVar30;
    *puVar28 = &PTR_FUN_14a3334a8;
    puVar30 = puVar28 + 2;
    local_e0 = plVar25;
    FUN_14733c86a(puVar30);
    iVar13 = *(int *)(lVar19 + 0xa0);
    *(uint *)(lVar19 + 0xa0) = iVar13 + 1U;
    if (*(uint *)(lVar19 + 0xa4) < iVar13 + 1U) {
      FUN_1448cfae8(local_108,iVar13);
    }
    *(undefined8 **)(*(longlong *)(lVar19 + 0x98) + (longlong)iVar13 * 8) = puVar28;
    FUN_1403f0ce6();
    cVar11 = DAT_14ca69a69;
    if (DAT_14ca69a69 == '\x03') {
      cVar11 = '\x02';
    }
    puVar28[2] = uVar18;
    *(char *)(puVar28 + 3) = cVar11;
    puVar28[4] = local_128[0x88];
    puVar28[5] = local_128[0x89];
    lVar20 = FUN_1447e4f80();
    lVar23 = local_d0;
    lVar31 = local_100;
    cVar11 = *(char *)(lVar20 + 0x41);
    if (cVar11 == '\x03') {
      cVar11 = '\x02';
    }
    puVar28[6] = local_d0;
    *(char *)(puVar28 + 7) = cVar11;
    uVar18 = FUN_1448c569e(local_100 + 0x10,lVar19);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1)) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
    cVar11 = *(char *)(DAT_14ca4b320 + 0x41);
    if (*(char *)(DAT_14ca4b320 + 0x41) == '\x03') {
      cVar11 = '\x02';
    }
    puVar28[8] = uVar18;
    *(char *)(puVar28 + 9) = cVar11;
    FUN_144abaa06(lVar31 + 0x5b0,&local_98,lVar19,0);
    *(undefined4 *)(puVar28 + 10) = (undefined4)local_98;
    *(undefined4 *)((longlong)puVar28 + 0x54) = local_98._4_4_;
    *(undefined4 *)(puVar28 + 0xb) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)puVar28 + 0x5c) = uStack_90._4_4_;
    uVar18 = *(undefined8 *)(local_f8 + 0x10);
    lVar20 = FUN_1449865da();
    cVar11 = *(char *)(lVar20 + 0x41);
    if (cVar11 == '\x03') {
      cVar11 = '\x02';
    }
    puVar28[0xc] = uVar18;
    *(char *)(puVar28 + 0xd) = cVar11;
    memcpy(puVar28 + 0xe,local_e0,0xf8);
    uVar18 = *(undefined8 *)(lVar31 + 8);
    FUN_14733c91a();
    FUN_140069376(lVar19);
    puVar1 = local_120;
    puVar29 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar28 = puVar29 + 0x3d;
    if (*(undefined8 **)(lVar19 + 0x78) < puVar28) {
      FUN_140023dd8(local_120,0x1f0);
      puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar29 + 0x3d;
    }
    lVar31 = local_f0;
    *local_120 = (ulonglong)puVar28;
    uStack_90 = (undefined8 *)DAT_14ca6d4b0;
    if (DAT_14ca6d4b0 != 0) {
      LOCK();
      *(int *)(DAT_14ca6d4b0 + 8) = *(int *)(DAT_14ca6d4b0 + 8) + 1;
      UNLOCK();
    }
    local_88 = &DAT_14ca6d468;
    local_148 = local_148 & 0xffffff00;
    local_98 = puVar30;
    FUN_140068f1a(puVar29,&local_a7,&local_98,1);
    *puVar29 = &PTR_FUN_14a3334b0;
    puVar29[0x37] = puVar30;
    puVar29[0x38] = uVar18;
    puVar29[0x39] = local_d8;
    *(byte *)(puVar29 + 0x3a) = local_131;
    *(byte *)((longlong)puVar29 + 0x1d1) = (byte)local_10c;
    *(undefined4 *)((longlong)puVar29 + 0x1d2) = (undefined4)local_a0;
    *(undefined2 *)((longlong)puVar29 + 0x1d6) = local_a0._4_2_;
    puVar29[0x3b] = lVar31;
    *(byte *)(puVar29 + 0x3c) = (byte)local_110;
    *(char *)((longlong)puVar29 + 0x1e1) = (char)local_114;
    *(undefined4 *)((longlong)puVar29 + 0x1e2) = local_a6;
    *(undefined2 *)((longlong)puVar29 + 0x1e6) = local_a2;
    iVar13 = *(int *)(lVar19 + 0x170);
    *(uint *)(lVar19 + 0x170) = iVar13 + 1U;
    if (*(uint *)(lVar19 + 0x174) < iVar13 + 1U) {
      FUN_14470e57a(lVar19 + 0x168,iVar13);
    }
    *(undefined8 **)(*(longlong *)(lVar19 + 0x168) + (longlong)iVar13 * 8) = puVar29;
    *(int *)((longlong)puVar29 + 0x2c) = *(int *)(lVar19 + 0x170) + -1;
    goto LAB_1430fec59;
  }
  local_f8 = FUN_14476842e(lVar19,&DAT_14ca63b28,L"BlackDummy",2);
  puVar1 = local_120;
  local_c4 = iVar13;
  if (((*(int *)(DAT_14ca696f0 + 4) == 0) && ((DAT_14c873820._2_1_ & 0x20) != 0)) &&
     ((0 < *(int *)(DAT_14ca699a8 + 4) && (*(char *)((longlong)puVar30 + 0x13b) == '\0')))) {
    local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_66 = 0xff001500;
    local_98 = (undefined8 *)&DAT_00020008;
    local_6c = 0x10001;
    local_68 = 0x101;
    local_78 = 0;
    uStack_90 = (undefined8 *)0x0;
    local_88 = (undefined *)0x0;
    local_80 = 0;
    iVar13 = 0x20;
    if (DAT_14ca84e40 < 0x20) {
      iVar13 = DAT_14ca84e40;
    }
    local_74 = 1;
    if (1 < iVar13) {
      local_74 = iVar13;
    }
    uVar32 = *(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar17 = uVar32 + 0x120;
    local_70 = local_74;
    if (*(ulonglong *)(lVar19 + 0x78) < uVar17) {
      FUN_140023dd8(local_120,0x128);
      uVar32 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar17 = uVar32 + 0x120;
      lVar19 = local_130;
    }
    *(ulonglong *)(lVar19 + 0x70) = uVar17;
    FUN_1456bbb8c(uVar32,L"Cloud.EmptySpaceSkippingTexture",&local_98,0);
    iVar13 = *(int *)(lVar19 + 0x180);
    *(uint *)(lVar19 + 0x180) = iVar13 + 1U;
    if (*(uint *)(lVar19 + 0x184) < iVar13 + 1U) {
      FUN_14472c0f6(lVar19 + 0x178,iVar13);
    }
    puVar1 = local_120;
    *(ulonglong *)(*(longlong *)(lVar19 + 0x178) + (longlong)iVar13 * 8) = uVar32;
    *(int *)(uVar32 + 0x9c) = *(int *)(lVar19 + 0x180) + -1;
    puVar28 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar30 = puVar28 + 0xc;
    local_f8 = uVar32;
    if (*(undefined8 **)(lVar19 + 0x78) < puVar30) {
      FUN_140023dd8(local_120,0x70);
      puVar28 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar30 = puVar28 + 0xc;
      lVar19 = local_130;
    }
    *(undefined8 **)(lVar19 + 0x70) = puVar30;
    *puVar28 = &PTR_FUN_14a333420;
    puVar28[4] = 0;
    *(undefined1 *)(puVar28 + 5) = 1;
    puVar28[6] = 0;
    *(undefined1 *)(puVar28 + 7) = 1;
    puVar28[8] = 0;
    *(undefined1 *)(puVar28 + 9) = 1;
    puVar28[10] = 0;
    iVar13 = *(int *)(lVar19 + 0xa0);
    *(uint *)(lVar19 + 0xa0) = iVar13 + 1U;
    local_e0 = plVar25;
    if (*(uint *)(lVar19 + 0xa4) < iVar13 + 1U) {
      FUN_1448cfae8(local_108,iVar13);
    }
    *(undefined8 **)(*(longlong *)(lVar19 + 0x98) + (longlong)iVar13 * 8) = puVar28;
    FUN_1403f0ce6();
    cVar11 = DAT_14ca69a69;
    if (DAT_14ca69a69 == '\x03') {
      cVar11 = '\x02';
    }
    puVar28[4] = uVar18;
    *(char *)(puVar28 + 5) = cVar11;
    lVar23 = FUN_1447e4f80();
    cVar11 = *(char *)(lVar23 + 0x41);
    if (cVar11 == '\x03') {
      cVar11 = '\x02';
    }
    puVar28[6] = local_d0;
    *(char *)(puVar28 + 7) = cVar11;
    uVar24 = FUN_1448c569e(local_100 + 0x10,lVar19);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1)) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
    uVar17 = local_f8;
    puVar1 = local_120;
    cVar11 = '\x02';
    if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
      cVar11 = *(char *)(DAT_14ca4b320 + 0x41);
    }
    puVar28[8] = uVar24;
    *(char *)(puVar28 + 9) = cVar11;
    uVar3 = *(undefined1 *)(local_f8 + 0x94);
    puVar29 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar30 = puVar29 + 9;
    if (*(undefined8 **)(lVar19 + 0x78) < puVar30) {
      FUN_140023dd8(local_120,0x50);
      puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar30 = puVar29 + 9;
    }
    *(undefined8 **)(lVar19 + 0x70) = puVar30;
    puVar29[1] = *(undefined8 *)(uVar17 + 8);
    puVar29[2] = 0;
    *(undefined1 *)(puVar29 + 3) = 0;
    *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar29 + 5) = 0;
    *puVar29 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar29 + 6) = uVar3;
    *(undefined1 *)(puVar29 + 7) = 0;
    *(undefined4 *)((longlong)puVar29 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar29 + 0x35) = 0;
    puVar29[8] = uVar17;
    iVar13 = *(int *)(lVar19 + 0x1a0);
    *(uint *)(lVar19 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(lVar19 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(lVar19 + 0x198,iVar13);
    }
    local_e8 = puVar28 + 2;
    *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar13 * 8) = puVar29;
    *(int *)((longlong)puVar29 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
    puVar28[10] = puVar29;
    puVar28[2] = 0x4200000042000000;
    fVar41 = 1.0;
    if (1.0 <= *(float *)(DAT_14ca699c0 + 4)) {
      fVar41 = *(float *)(DAT_14ca699c0 + 4);
    }
    *(float *)(puVar28 + 3) = fVar41 * 100000.0;
    *(undefined4 *)((longlong)puVar28 + 0x1c) = *(undefined4 *)(DAT_14ca699d8 + 4);
    local_a0 = 0;
    uVar24 = FUN_1449cbe5c(lVar31,*(undefined4 *)(*(longlong *)(local_100 + 8) + 8),&local_a0);
    lVar23 = local_a0;
    if (local_a0 == 0) {
      lVar23 = lVar31;
    }
    iVar13 = *(int *)(DAT_14ca699f0 + 4);
    local_a0 = lVar23;
    FUN_14608dbf6();
    local_140 = 0;
    local_148 = (uint)(0 < iVar13) * 2;
    FUN_14357db7e(uVar24,&local_98,&DAT_14ca6a750,&DAT_14cae9e78);
    uVar35 = uStack_90;
    local_c0 = (undefined1 *)local_98;
    if (local_98 != (undefined8 *)0x0) {
      FUN_147337a4a();
      local_98 = (undefined8 *)0x0;
      uStack_90 = (undefined8 *)0x0;
      FUN_1448f70da(local_c0,&DAT_14ca6c828,local_e8);
      lVar23 = local_a0;
    }
    uVar5 = *(undefined8 *)(local_100 + 8);
    cVar11 = *(char *)((longlong)local_128 + 0x13f);
    FUN_147337a4a();
    FUN_140069376(local_130);
    puVar1 = local_120;
    local_b8 = uVar35;
    if (cVar11 == '\x01') {
      if (((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) ||
         ((DAT_14ca84e6a != '\x01' || (uVar35 = 4, (DAT_14ca84e99 & 1) != 0)))) {
        uVar35 = 2;
      }
      puVar28 = (undefined8 *)(*(longlong *)(local_130 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar30 = puVar28 + 0x40;
      if (*(undefined8 **)(local_130 + 0x78) < puVar30) {
        FUN_140023dd8(local_120,0x208);
        puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar30 = puVar28 + 0x40;
      }
      *(undefined8 **)(local_130 + 0x70) = puVar30;
      uVar14 = *(undefined4 *)(local_130 + 0x660);
      local_98 = local_e8;
      uStack_90 = DAT_14ca6c870;
      if (DAT_14ca6c870 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14ca6c870 + 1) = *(int *)(DAT_14ca6c870 + 1) + 1;
        UNLOCK();
      }
      local_88 = &DAT_14ca6c828;
      local_148 = CONCAT31(local_148._1_3_,2);
      FUN_140068f1a(puVar28,&local_a6,&local_98,uVar35);
      puVar28[0x37] = uVar5;
      puVar28[0x38] = lVar23;
      puVar28[0x39] = uVar24;
      puVar28[0x3a] = local_e8;
      puVar28[0x3b] = local_c0;
      puVar28[0x3c] = local_b8;
      puVar28[0x3d] = 0x2000000020;
      *(undefined4 *)(puVar28 + 0x3e) = 1;
      *puVar28 = &PTR_FUN_14a333430;
      *(undefined4 *)(puVar28 + 0x3f) = uVar14;
      lVar19 = local_130;
    }
    else {
      uVar35 = 2;
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar35 = 4;
      }
      puVar28 = (undefined8 *)(*(longlong *)(local_130 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar30 = puVar28 + 0x3f;
      if (*(undefined8 **)(local_130 + 0x78) < puVar30) {
        FUN_140023dd8(local_120,0x200);
        puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar30 = puVar28 + 0x3f;
      }
      lVar19 = local_130;
      *local_120 = (ulonglong)puVar30;
      local_98 = local_e8;
      uStack_90 = DAT_14ca6c870;
      if (DAT_14ca6c870 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14ca6c870 + 1) = *(int *)(DAT_14ca6c870 + 1) + 1;
        UNLOCK();
      }
      local_88 = &DAT_14ca6c828;
      local_148 = CONCAT31(local_148._1_3_,2);
      FUN_140068f1a(puVar28,&local_a6,&local_98,uVar35);
      *puVar28 = &PTR_FUN_14a333450;
      puVar28[0x37] = uVar5;
      puVar28[0x38] = lVar23;
      puVar28[0x39] = uVar24;
      puVar28[0x3a] = local_e8;
      puVar28[0x3b] = local_c0;
      puVar28[0x3c] = local_b8;
      puVar28[0x3d] = 0x2000000020;
      *(undefined4 *)(puVar28 + 0x3e) = 1;
    }
    plVar25 = local_e0;
    puVar30 = local_128;
    iVar13 = *(int *)(lVar19 + 0x170);
    *(uint *)(lVar19 + 0x170) = iVar13 + 1U;
    if (*(uint *)(lVar19 + 0x174) < iVar13 + 1U) {
      FUN_14470e57a(lVar19 + 0x168,iVar13);
    }
    *(undefined8 **)(*(longlong *)(lVar19 + 0x168) + (longlong)iVar13 * 8) = puVar28;
    *(int *)((longlong)puVar28 + 0x2c) = *(int *)(lVar19 + 0x170) + -1;
    FUN_140069100(lVar19,puVar28);
  }
  FUN_141785fe2(puVar30,lVar19);
  puVar1 = local_120;
  lVar31 = puVar30[6];
  if ((lVar31 == 0) || (1 < (byte)(*(char *)(lVar31 + 0x92) - 3U))) {
    plVar38 = (longlong *)local_128[0x8f];
LAB_1430fdeb4:
    puVar1 = local_120;
    if ((lVar31 == 0) || ((byte)(*(char *)(lVar31 + 0x92) - 3U) < 2)) goto LAB_1430fdec5;
    uVar3 = *(undefined1 *)(lVar31 + 0x94);
    puVar28 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar30 = puVar28 + 9;
    if (*(undefined8 **)(lVar19 + 0x78) < puVar30) {
      FUN_140023dd8(local_120,0x50);
      puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar30 = puVar28 + 9;
      lVar19 = local_130;
    }
    *(undefined8 **)(lVar19 + 0x70) = puVar30;
    puVar28[1] = *(undefined8 *)(lVar31 + 8);
    puVar28[2] = 0;
    *(undefined1 *)(puVar28 + 3) = 0;
    *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar28 + 5) = 1;
    *puVar28 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar28 + 6) = uVar3;
    *(undefined1 *)(puVar28 + 7) = 0;
    *(undefined4 *)((longlong)puVar28 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar28 + 0x35) = 0;
    puVar28[8] = lVar31;
    iVar13 = *(int *)(lVar19 + 0x1a0);
    *(uint *)(lVar19 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(lVar19 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(lVar19 + 0x198,iVar13);
    }
    *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar13 * 8) = puVar28;
    *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
  }
  else {
    plVar38 = (longlong *)local_128[0x93];
    if (plVar38 == (longlong *)0x0) {
      uVar3 = *(undefined1 *)(lVar31 + 0x94);
      plVar38 = (longlong *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
      plVar22 = plVar38 + 9;
      if (*(longlong **)(lVar19 + 0x78) < plVar22) {
        FUN_140023dd8(local_120,0x50);
        plVar38 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
        plVar22 = plVar38 + 9;
        lVar19 = local_130;
      }
      *(longlong **)(lVar19 + 0x70) = plVar22;
      plVar38[1] = *(longlong *)(lVar31 + 8);
      plVar38[2] = 0;
      *(undefined1 *)(plVar38 + 3) = 0;
      *(undefined8 *)((longlong)plVar38 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(plVar38 + 5) = 1;
      *plVar38 = (longlong)&PTR_FUN_14a1fb948;
      *(undefined1 *)(plVar38 + 6) = uVar3;
      *(undefined1 *)(plVar38 + 7) = 0;
      *(undefined4 *)((longlong)plVar38 + 0x31) = 0;
      *(undefined2 *)((longlong)plVar38 + 0x35) = 0;
      plVar38[8] = lVar31;
      iVar13 = *(int *)(lVar19 + 0x1a0);
      *(uint *)(lVar19 + 0x1a0) = iVar13 + 1U;
      if (*(uint *)(lVar19 + 0x1a4) < iVar13 + 1U) {
        FUN_1447568fc(lVar19 + 0x198,iVar13);
      }
      *(longlong **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar13 * 8) = plVar38;
      *(int *)((longlong)plVar38 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
      lVar31 = *plVar25;
      goto LAB_1430fdeb4;
    }
LAB_1430fdec5:
    puVar28 = (undefined8 *)local_128[0x90];
  }
  puVar1 = local_120;
  lVar23 = local_130;
  lVar31 = local_128[0x26];
  local_e0 = plVar38;
  if ((lVar31 == 0) || ((byte)(*(char *)(lVar31 + 0x92) - 3U) < 2)) {
    puVar30 = (undefined8 *)local_128[0x91];
    puVar29 = local_128;
  }
  else {
    uVar3 = *(undefined1 *)(lVar31 + 0x94);
    puVar30 = (undefined8 *)(*(longlong *)(local_130 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar30 + 9;
    if (*(undefined8 **)(local_130 + 0x78) < puVar21) {
      FUN_140023dd8(local_120,0x50);
      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar30 + 9;
    }
    puVar29 = local_128;
    *(undefined8 **)(lVar23 + 0x70) = puVar21;
    puVar30[1] = *(undefined8 *)(lVar31 + 8);
    puVar30[2] = 0;
    *(undefined1 *)(puVar30 + 3) = 0;
    *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar30 + 5) = 1;
    *puVar30 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar30 + 6) = uVar3;
    *(undefined1 *)(puVar30 + 7) = 0;
    *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
    puVar30[8] = lVar31;
    iVar13 = *(int *)(lVar23 + 0x1a0);
    *(uint *)(lVar23 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(lVar23 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(lVar23 + 0x198,iVar13);
    }
    *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar13 * 8) = puVar30;
    *(int *)((longlong)puVar30 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  }
  puVar1 = local_120;
  lVar23 = local_130;
  lVar31 = puVar29[9];
  if (lVar31 == 0) {
    puVar29 = (undefined8 *)puVar29[0x92];
  }
  else {
    uVar3 = *(undefined1 *)(lVar31 + 0x94);
    puVar29 = (undefined8 *)(*(longlong *)(local_130 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar29 + 9;
    if (*(undefined8 **)(local_130 + 0x78) < puVar21) {
      FUN_140023dd8(local_120,0x50);
      puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar29 + 9;
    }
    *(undefined8 **)(lVar23 + 0x70) = puVar21;
    puVar29[1] = *(undefined8 *)(lVar31 + 8);
    puVar29[2] = 0;
    *(undefined1 *)(puVar29 + 3) = 0;
    *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar29 + 5) = 1;
    *puVar29 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar29 + 6) = uVar3;
    *(undefined1 *)(puVar29 + 7) = 0;
    *(undefined4 *)((longlong)puVar29 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar29 + 0x35) = 0;
    puVar29[8] = lVar31;
    iVar13 = *(int *)(lVar23 + 0x1a0);
    *(uint *)(lVar23 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(lVar23 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(lVar23 + 0x198,iVar13);
    }
    *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar13 * 8) = puVar29;
    *(int *)((longlong)puVar29 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  }
  puVar1 = local_120;
  if ((((byte)local_110 | local_131) & 1) == 0) {
    local_110 = (undefined4)
                CONCAT71((int7)((ulonglong)DAT_14ca69768 >> 8),0 < *(int *)(DAT_14ca69768 + 4));
  }
  else {
    local_110 = 0;
  }
  puVar36 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar36 + 0x14;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_120,0xb0);
    puVar36 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar36 + 0x14;
    lVar23 = local_130;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  *puVar36 = &PTR_FUN_14a333468;
  puVar36[2] = 0;
  puVar36[3] = 0x3f80000000000000;
  puVar36[8] = 0;
  *(undefined1 *)(puVar36 + 9) = 1;
  puVar36[10] = 0;
  *(undefined1 *)(puVar36 + 0xb) = 1;
  puVar36[0xc] = 0;
  *(undefined1 *)(puVar36 + 0xd) = 1;
  puVar36[0xe] = 0;
  *(undefined1 *)(puVar36 + 0xf) = 1;
  puVar36[0x10] = 0;
  puVar36[0x11] = 0;
  puVar36[0x12] = 0;
  puVar36[0x13] = 0;
  iVar13 = *(int *)(lVar23 + 0xa0);
  *(uint *)(lVar23 + 0xa0) = iVar13 + 1U;
  if (*(uint *)(lVar23 + 0xa4) < iVar13 + 1U) {
    FUN_1448cfae8(local_108,iVar13);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar13 * 8) = puVar36;
  iVar13 = *(int *)(local_b0 + 0x88);
  iVar4 = *(int *)(local_b0 + 0x84);
  puVar36[2] = 0;
  *(float *)(puVar36 + 3) = (float)iVar4;
  *(float *)((longlong)puVar36 + 0x1c) = (float)iVar13;
  *(uint *)(puVar36 + 6) = (byte)~((byte)local_10c | local_131) & 1;
  *(int *)((longlong)puVar36 + 0x34) = (int)*(short *)((longlong)local_128 + 0x42);
  FUN_1403f0ce6();
  cVar11 = DAT_14ca69a69;
  if (DAT_14ca69a69 == '\x03') {
    cVar11 = '\x02';
  }
  puVar36[8] = uVar18;
  *(char *)(puVar36 + 9) = cVar11;
  lVar31 = local_100 + 0x10;
  uVar18 = FUN_1448c569e(lVar31,lVar23);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1)) {
    DAT_14ca4b320 = FUN_145900d44();
    _Init_thread_footer(&DAT_14ca4b328);
  }
  cVar11 = *(char *)(DAT_14ca4b320 + 0x41);
  if (cVar11 == '\x03') {
    cVar11 = '\x02';
  }
  puVar36[0xc] = uVar18;
  *(char *)(puVar36 + 0xd) = cVar11;
  lVar19 = FUN_1447e4f80();
  cVar11 = *(char *)(lVar19 + 0x41);
  if (*(char *)(lVar19 + 0x41) == '\x03') {
    cVar11 = '\x02';
  }
  puVar36[10] = local_d0;
  *(char *)(puVar36 + 0xb) = cVar11;
  uVar18 = FUN_1448c569e(lVar31,lVar23);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1)) {
    DAT_14ca4b320 = FUN_145900d44();
    _Init_thread_footer(&DAT_14ca4b328);
  }
  lVar23 = local_f0;
  lVar31 = local_100;
  cVar11 = '\x02';
  if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
    cVar11 = *(char *)(DAT_14ca4b320 + 0x41);
  }
  puVar36[0xc] = uVar18;
  *(char *)(puVar36 + 0xd) = cVar11;
  if ((byte)local_110 != '\0') {
    FUN_144abaa06(local_100 + 0x5b0,&local_98,local_130,0);
    puVar36[0xe] = local_98;
    puVar36[0xf] = uStack_90;
  }
  puVar21 = local_128;
  puVar36[0x10] = puVar28;
  puVar36[0x11] = puVar30;
  puVar36[0x12] = puVar29;
  puVar36[0x13] = local_e0;
  iVar13 = *(int *)(local_f8 + 0x88);
  *(float *)(puVar36 + 4) = (float)*(int *)(local_f8 + 0x84);
  *(float *)((longlong)puVar36 + 0x24) = (float)iVar13;
  fVar41 = 1.0;
  if (1.0 <= *(float *)(DAT_14ca699c0 + 4)) {
    fVar41 = *(float *)(DAT_14ca699c0 + 4);
  }
  *(float *)(puVar36 + 5) = fVar41 * 100000.0;
  *(uint *)((longlong)puVar36 + 0x2c) = (uint)*(byte *)((longlong)local_128 + 0x141);
  local_a0 = 0;
  local_108 = FUN_1449cbe5c(lVar23,*(undefined4 *)(*(longlong *)(lVar31 + 8) + 8),&local_a0);
  local_f0 = local_a0;
  if (local_a0 == 0) {
    local_f0 = lVar23;
  }
  uVar14 = 0;
  bVar39 = 0;
  uVar12 = 0;
  local_a0 = local_f0;
  if (local_131 == 0) {
    plVar25 = *(longlong **)(lVar31 + 8);
    if (((((longlong *)plVar25[0x9a7] == (longlong *)0x0) ||
         (*(char *)(*(longlong *)plVar25[0x9a7] + 0x28) != '\x01')) || (plVar25[0x9a4] == 0)) ||
       ((plVar25 == (longlong *)0x0 || ((*(byte *)(*(longlong *)(local_d8 + 8) + 0x5a) & 2) == 0))))
    {
LAB_1430fe4be:
      uVar14 = 0;
    }
    else {
      if (*(code **)(*plVar25 + 0x2c0) != (code *)&LAB_1447ccd94) {
        (**(code **)(*plVar25 + 0x2c0))();
      }
      if (DAT_14c760dd5 != '\x01') goto LAB_1430fe4be;
      uVar14 = (undefined4)
               CONCAT71((int7)((ulonglong)DAT_14ca5c7b8 >> 8),0 < *(int *)(DAT_14ca5c7b8 + 4));
    }
    puVar21 = local_128;
    uVar12 = local_114;
    if (local_c4 < 1) {
      bVar39 = 0;
    }
    else {
      bVar39 = *(byte *)((longlong)local_128 + 0x13c) ^ 1;
    }
  }
  lVar23 = local_d8;
  local_10c = uVar14;
  bVar10 = FUN_1400edd34(local_d8);
  lVar31 = puVar21[0x26];
  cVar11 = *(char *)((longlong)puVar21 + 0x13b);
  if ((*(int *)(lVar23 + 0x118e0) == 0) || (*(char *)((longlong)puVar21 + 0x13c) != '\0')) {
    bVar40 = false;
  }
  else {
    bVar40 = true;
    if ((*(longlong *)(local_d8 + 0x3108) != 0) && (0 < *(int *)(DAT_14ca69708 + 4))) {
      uVar34 = *(uint *)(*(longlong *)(local_d8 + 0x3108) + 0x1ef0);
      cVar26 = FUN_1400edda3(local_d8);
      if (cVar26 != '\0') {
        bVar40 = (uVar34 & 0xfffffffd) != 0;
      }
    }
  }
  puVar36 = puVar36 + 2;
  cVar26 = local_131 * '@';
  bVar37 = 0;
  if ((lVar31 != 0 & bVar10) != 0) {
    bVar37 = cVar11 << 4 ^ 0x10;
  }
  cVar11 = (char)local_110 * '\x02' + (byte)local_10c;
  FUN_1415e095a();
  local_148 = (uint)(byte)(cVar11 + ((char)uVar12 << 2 | bVar39 << 3) + bVar40 * ' ' + cVar26 +
                          bVar37);
  local_140 = 0;
  FUN_14357db7e(local_108,&local_98,&DAT_14ca6a628,&DAT_14cae9e78);
  puVar28 = uStack_90;
  puVar30 = local_98;
  iVar13 = *(int *)(local_b0 + 0x88) + 7;
  iVar4 = *(int *)(local_b0 + 0x88) + 0xe;
  if (-1 < iVar13) {
    iVar4 = iVar13;
  }
  iVar13 = *(int *)(local_b0 + 0x84) + 7;
  iVar6 = *(int *)(local_b0 + 0x84) + 0xe;
  if (-1 < iVar13) {
    iVar6 = iVar13;
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1415d0c88();
    local_98 = (undefined8 *)0x0;
    uStack_90 = (undefined8 *)0x0;
    FUN_1448f70da(puVar30,&DAT_14ca6c7a0,puVar36);
    local_f0 = local_a0;
  }
  uVar17 = *(ulonglong *)(local_100 + 8);
  cVar11 = *(char *)((longlong)local_128 + 0x13f);
  FUN_1415d0c88();
  FUN_140069376(local_130);
  lVar23 = local_d0;
  puVar1 = local_120;
  if (cVar11 == '\x01') {
    local_128 = puVar28;
    uVar32 = uVar17;
    if (((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) ||
       ((DAT_14ca84e6a != '\x01' ||
        (uVar32 = CONCAT62((int6)(uVar17 >> 0x10),4), (DAT_14ca84e99 & 1) != 0)))) {
      uVar32 = CONCAT62((int6)(uVar32 >> 0x10),2);
    }
    puVar29 = (undefined8 *)(*(longlong *)(local_130 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar28 = puVar29 + 0x41;
    if (*(undefined8 **)(local_130 + 0x78) < puVar28) {
      FUN_140023dd8(local_120,0x210);
      puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar29 + 0x41;
    }
    *(undefined8 **)(local_130 + 0x70) = puVar28;
    uVar14 = *(undefined4 *)(local_130 + 0x660);
    uStack_90 = (undefined8 *)DAT_14ca6c7e8;
    if (DAT_14ca6c7e8 != 0) {
      LOCK();
      *(int *)(DAT_14ca6c7e8 + 8) = *(int *)(DAT_14ca6c7e8 + 8) + 1;
      UNLOCK();
    }
    local_88 = &DAT_14ca6c7a0;
    local_148 = CONCAT31(local_148._1_3_,2);
    local_98 = puVar36;
    FUN_140068f1a(puVar29,&local_a6,&local_98,uVar32 & 0xffffffff);
    puVar29[0x37] = uVar17;
    puVar29[0x38] = local_f0;
    puVar29[0x39] = local_108;
    puVar29[0x3a] = puVar36;
    puVar29[0x3b] = puVar30;
    puVar29[0x3c] = local_128;
    *(int *)(puVar29 + 0x3d) = iVar6 >> 3;
    *(int *)((longlong)puVar29 + 0x1ec) = iVar4 >> 3;
    *(undefined4 *)(puVar29 + 0x3e) = 1;
    puVar29[0x3f] = local_f8;
    *puVar29 = &PTR_FUN_14a333470;
    *(undefined4 *)(puVar29 + 0x40) = uVar14;
    lVar23 = local_d0;
  }
  else {
    uVar18 = 2;
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar18 = 4;
    }
    puVar29 = (undefined8 *)(*(longlong *)(local_130 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar29 + 0x40;
    if (*(undefined8 **)(local_130 + 0x78) < puVar21) {
      local_128 = puVar30;
      FUN_140023dd8(local_120,0x208);
      puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar29 + 0x40;
      puVar30 = local_128;
    }
    *local_120 = (ulonglong)puVar21;
    uStack_90 = (undefined8 *)DAT_14ca6c7e8;
    if (DAT_14ca6c7e8 != 0) {
      LOCK();
      *(int *)(DAT_14ca6c7e8 + 8) = *(int *)(DAT_14ca6c7e8 + 8) + 1;
      UNLOCK();
    }
    local_88 = &DAT_14ca6c7a0;
    local_148 = CONCAT31(local_148._1_3_,2);
    local_98 = puVar36;
    FUN_140068f1a(puVar29,&local_a6,&local_98,uVar18);
    *puVar29 = &PTR_FUN_14a333490;
    puVar29[0x37] = uVar17;
    puVar29[0x38] = local_f0;
    puVar29[0x39] = local_108;
    puVar29[0x3a] = puVar36;
    puVar29[0x3b] = puVar30;
    puVar29[0x3c] = puVar28;
    *(int *)(puVar29 + 0x3d) = iVar6 >> 3;
    *(int *)((longlong)puVar29 + 0x1ec) = iVar4 >> 3;
    *(undefined4 *)(puVar29 + 0x3e) = 1;
    puVar29[0x3f] = local_f8;
  }
  lVar19 = local_130;
  iVar13 = *(int *)(local_130 + 0x170);
  *(uint *)(local_130 + 0x170) = iVar13 + 1U;
  if (*(uint *)(local_130 + 0x174) < iVar13 + 1U) {
    FUN_14470e57a(local_130 + 0x168,iVar13);
  }
  *(undefined8 **)(*(longlong *)(lVar19 + 0x168) + (longlong)iVar13 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x2c) = *(int *)(lVar19 + 0x170) + -1;
LAB_1430fec59:
  FUN_140069100(lVar19,puVar29);
  if (lVar23 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar23 + 8);
    uVar12 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar12 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar23 + 8);
      LOCK();
      uVar12 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar12 >> 0x1e & 1) == 0) {
        bVar39 = *(byte *)(lVar23 + 0xd);
        plVar22 = (longlong *)FUN_14001cc68(0x10,8);
        plVar22[1] = lVar23;
        plVar25 = DAT_14ca843c0;
        plVar38 = DAT_14ca843c8;
        if ((bVar39 & 2) == 0) {
          do {
            *plVar22 = (longlong)plVar25;
            LOCK();
            bVar40 = plVar25 != DAT_14ca843c0;
            plVar38 = plVar22;
            if (bVar40) {
              plVar25 = DAT_14ca843c0;
              plVar38 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar38;
            UNLOCK();
          } while (bVar40);
        }
        else {
          do {
            *plVar22 = (longlong)plVar38;
            LOCK();
            bVar40 = plVar38 != DAT_14ca843c8;
            plVar25 = plVar22;
            if (bVar40) {
              plVar38 = DAT_14ca843c8;
              plVar25 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar25;
            UNLOCK();
          } while (bVar40);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430ff7b0 FUN_1430ff7b0 body=11437 status=ok
// SIG undefined FUN_1430ff7b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1430ff7b0(longlong param_1,longlong param_2,longlong param_3,byte param_4,byte param_5,
                  byte param_6,undefined8 param_7,undefined8 param_8,byte param_9)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined8 uVar7;
  uint6 uVar8;
  byte bVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  DWORD DVar14;
  undefined4 uVar15;
  DWORD DVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  longlong *plVar21;
  undefined1 *puVar22;
  longlong *plVar23;
  int *piVar24;
  ulonglong uVar25;
  int *piVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  size_t sVar29;
  ulonglong uVar30;
  int *piVar31;
  int iVar32;
  longlong lVar33;
  int *piVar34;
  byte bVar35;
  longlong lVar36;
  ulonglong uVar37;
  byte bVar38;
  longlong lVar39;
  int *piVar40;
  longlong lVar41;
  undefined8 *puVar42;
  bool bVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  undefined1 auStack_13c8 [32];
  int *local_13a8;
  int *local_13a0;
  undefined4 *local_1398;
  byte local_1390;
  byte local_1384;
  byte local_1383;
  char local_1382;
  byte local_1381;
  longlong local_1380;
  longlong local_1378;
  undefined4 local_1370;
  undefined4 local_136c;
  int *local_1368;
  int *local_1360;
  longlong *local_1358;
  ulonglong local_1350;
  uint local_1348;
  int local_1344;
  longlong local_1340;
  longlong local_1338;
  longlong *local_1330;
  undefined8 local_1328;
  int *local_1320;
  longlong *local_1318;
  int *local_1310;
  longlong local_1308;
  longlong *local_1300;
  longlong *local_12f8;
  ulonglong local_12f0;
  int *local_12e8;
  longlong local_12e0;
  undefined1 *local_12d8;
  longlong local_12d0;
  undefined8 *local_12c8;
  longlong local_12c0;
  undefined **local_12b8;
  int *local_12b0;
  int *local_12a8;
  undefined8 *local_12a0;
  undefined8 uStack_1298;
  undefined8 local_1290;
  undefined8 local_1280;
  undefined4 local_1278;
  undefined1 local_1269;
  wchar_t *local_1268;
  double dStack_1260;
  double local_1258;
  double dStack_1250;
  double local_1248;
  double local_1240;
  double local_1238;
  double local_1230;
  double local_1228;
  double local_1220;
  double local_1218;
  double local_1210;
  double local_1208;
  double local_1200;
  double local_11f8;
  double local_11f0;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  longlong local_11c8;
  undefined8 local_11c0;
  undefined8 local_11b8;
  undefined8 local_11b0;
  int *local_11a8;
  longlong local_11a0;
  undefined8 local_1198;
  undefined1 local_1190;
  int *local_1188;
  undefined8 local_1180;
  undefined4 local_1178;
  float local_1108;
  undefined8 local_1088;
  undefined8 local_1080;
  undefined1 local_1078;
  undefined1 local_1077;
  float local_1074;
  float local_1070;
  int local_106c;
  undefined1 auStack_1068 [8];
  undefined1 local_1060 [16];
  undefined1 local_1050;
  undefined4 local_1048;
  undefined4 uStack_1044;
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined1 local_1038;
  undefined8 local_1030;
  float local_1028;
  float fStack_1024;
  undefined8 uStack_1020;
  undefined8 local_1018;
  float fStack_1010;
  float fStack_100c;
  float local_1008;
  float fStack_1004;
  float fStack_1000;
  float fStack_ffc;
  float local_ff8;
  float fStack_ff4;
  float fStack_ff0;
  float fStack_fec;
  undefined8 local_f88;
  undefined4 uStack_f80;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  float local_ec8;
  float fStack_ec4;
  float fStack_ec0;
  float fStack_ebc;
  float local_eb8;
  float fStack_eb4;
  float fStack_eb0;
  float fStack_eac;
  float local_ea8;
  float fStack_ea4;
  float fStack_ea0;
  float fStack_e9c;
  float local_e98;
  float fStack_e94;
  float fStack_e90;
  float fStack_e8c;
  undefined8 local_e88;
  undefined4 uStack_e80;
  undefined1 local_5e8;
  undefined1 local_5e7;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined8 local_5d0;
  undefined1 local_5c8 [32];
  undefined1 *local_5a8;
  undefined8 local_5a0;
  longlong *local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  int *local_578;
  longlong local_570;
  int *local_568;
  undefined8 local_560;
  undefined4 local_558;
  ulonglong local_550;
  undefined8 local_548;
  undefined4 local_540;
  int *local_468;
  byte local_460;
  byte local_45f;
  byte local_45e;
  undefined1 local_45d;
  byte local_45b;
  bool local_45a;
  byte local_459;
  char local_458;
  byte local_457;
  undefined8 local_454;
  undefined8 uStack_44c;
  undefined8 local_444;
  undefined8 uStack_43c;
  undefined4 local_434;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418 [8];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined1 local_358 [384];
  undefined4 local_1d8;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1430ff7c6;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_13c8;
  local_1380 = param_2;
  local_12f8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x340))();
  lVar41 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x36b8);
  if (lVar41 == 0) {
    local_1330 = (longlong *)0x0;
  }
  else {
    local_1330 = *(longlong **)(lVar41 + 0x28);
  }
  if (*(longlong **)(*local_12f8 + 0x58) != (longlong *)0x0) {
    lVar33 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3608);
    local_1340 = lVar41;
    uVar19 = (**(code **)(**(longlong **)(*local_12f8 + 0x58) + 0x2f0))();
    puVar20 = &DAT_14c760db4;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      puVar20 = (undefined4 *)(*(longlong *)(param_1 + 0xd8) + 8);
    }
    plVar21 = (longlong *)FUN_14485b2b4(uVar19,*puVar20);
    iVar12 = (**(code **)(*plVar21 + 0x30))(plVar21);
    if (iVar12 == 3) {
      local_1328 = *(undefined8 *)(param_3 + 0x1c8);
      FUN_144b18fb4(&local_598);
      local_598 = local_12f8;
      local_590 = uVar19;
      if (local_1330 == (longlong *)0x0) {
        local_45b = 1;
      }
      else {
        local_45b = (**(code **)(*local_1330 + 0x150))();
        local_45b = local_45b ^ 1;
      }
      local_45a = *(longlong *)(*(longlong *)(param_1 + 8) + 0x36c0) != 0;
      if (*(int *)(DAT_14ca69840 + 4) == 0) {
        local_136c = 0;
      }
      else {
        local_136c = 0;
        if ((local_1330 != (longlong *)0x0) && (0 < *(int *)(DAT_14ca69828 + 4))) {
          local_136c = (**(code **)(*local_1330 + 0x160))();
        }
      }
      if (*(int *)(DAT_14ca697b0 + 4) == 0) {
        local_1370 = 0;
      }
      else {
        local_1370 = 0;
        if ((lVar33 != 0) && (0 < *(int *)(DAT_14ca69798 + 4))) {
          local_1370 = (undefined4)
                       CONCAT71((int7)((ulonglong)DAT_14ca69798 >> 8),*(undefined1 *)(lVar33 + 0xe0)
                               );
        }
      }
      local_5a8 = (undefined1 *)0x0;
      local_5a0 = 0x200000000;
      if (*(int *)(param_1 + 0x3f0) < 1) {
        uVar13 = 0;
      }
      else {
        local_12e0 = param_1 + 0x98;
        local_1384 = param_6 ^ 1;
        bVar38 = param_4 ^ 1;
        local_1383 = param_5 ^ 1;
        local_12f0 = CONCAT71(local_12f0._1_7_,param_9) ^ 1;
        local_1360 = (int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60);
        lVar39 = 0;
        auVar47 = ZEXT816(0);
        lVar33 = 0;
        local_1348 = 0;
        local_1350 = CONCAT71(local_1350._1_7_,param_4) ^ 1;
        lVar41 = local_1380;
        local_1378 = param_1;
        local_1308 = param_3;
        do {
          lVar36 = *(longlong *)(param_1 + 1000);
          if ((param_6 == 0) ||
             ((lVar3 = *(longlong *)(lVar36 + 0x3110 + lVar39), *(float *)(lVar3 + 0xe7c) <= 0.0 &&
              ((*(byte *)(lVar3 + 0x15b0) & 7) != 0)))) {
            bVar9 = FUN_1400edda3(lVar36 + lVar39);
            lVar3 = DAT_14ca69930;
            bVar9 = bVar9 & local_1384;
            param_1 = local_1378;
            if ((byte)((bVar9 | local_1383) & (bVar38 | bVar9 ^ 1)) == 1) {
              iVar12 = *local_1360;
              if (iVar12 == 0x40000002) {
                uVar30 = 0;
              }
              else {
                bVar43 = true;
                if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
                  if (iVar12 == 1) {
                    DVar16 = FUN_140ad26c0();
                    DVar14 = GetCurrentThreadId();
                    bVar43 = DVar16 == DVar14;
                  }
                  else {
                    bVar43 = false;
                  }
                }
                uVar30 = (ulonglong)(bVar43 ^ 1);
              }
              lVar41 = DAT_14ca696d8;
              iVar12 = *(int *)(lVar3 + uVar30 * 4);
              if ((iVar12 < 1) || (*(longlong *)(*(longlong *)(local_1378 + 8) + 0x4d20) == 0)) {
LAB_1430ffc2a:
                bVar38 = 0;
              }
              else {
                iVar18 = *local_1360;
                if (iVar18 == 0x40000002) {
                  uVar30 = 0;
                }
                else {
                  bVar43 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar18 != 2)) {
                    if (iVar18 == 1) {
                      uVar15 = FUN_140ad26c0();
                      local_1368 = (int *)CONCAT44(local_1368._4_4_,uVar15);
                      DVar16 = GetCurrentThreadId();
                      bVar43 = (DWORD)local_1368 == DVar16;
                    }
                    else {
                      bVar43 = false;
                    }
                  }
                  uVar30 = (ulonglong)(bVar43 ^ 1);
                }
                if (*(int *)(lVar41 + uVar30 * 4) < 1) goto LAB_1430ffc2a;
                bVar38 = *(byte *)(lVar36 + 0x23eb + lVar39) ^ 1;
              }
              uVar30 = local_5a0;
              bVar35 = (byte)local_136c | bVar38 | (byte)local_1370 | bVar9 ^ 1 | (byte)local_12f0;
              if ((param_9 & bVar35) == 0) {
                lVar41 = (longlong)(int)local_5a0;
                uVar13 = (int)local_5a0 + 1;
                local_5a0 = CONCAT44(local_5a0._4_4_,uVar13);
                if (local_5a0._4_4_ < uVar13) {
                  FUN_143117ef8(local_5c8,uVar30 & 0xffffffff);
                }
                local_1348 = CONCAT31((int3)(local_1348 >> 8),(byte)local_1348 | bVar35 ^ 1);
                puVar22 = local_5a8;
                if (local_5a8 == (undefined1 *)0x0) {
                  puVar22 = local_5c8;
                }
                lVar41 = lVar41 * 0x10;
                *(longlong *)(puVar22 + lVar41) = lVar36 + lVar39;
                puVar22[lVar41 + 8] = bVar9;
                puVar22[lVar41 + 9] = 0 < iVar12;
                puVar22[lVar41 + 10] = bVar38;
                puVar22[lVar41 + 0xb] = 0;
              }
              lVar41 = local_1380;
              param_1 = local_1378;
              bVar38 = (byte)local_1350;
            }
          }
          lVar33 = lVar33 + 1;
          lVar39 = lVar39 + 0x13c10;
        } while (lVar33 < *(int *)(param_1 + 0x3f0));
        uVar13 = local_1348;
        if (0 < (int)local_5a0) {
          local_1344 = *(int *)(*(longlong *)(param_1 + 8) + 0x4d18);
          local_1338 = lVar41 + 0x178;
          local_1358 = (longlong *)(lVar41 + 0x70);
          local_1300 = (longlong *)(param_1 + 0x4d8);
          local_1382 = local_1330 != (longlong *)0x0;
          local_12c8 = local_418;
          local_12d0 = param_1 + 0x10;
          local_12d8 = auStack_1068;
          local_1381 = (byte)local_136c | (byte)local_1370;
          local_1318 = (longlong *)(lVar41 + 0x98);
          uVar30 = 0;
          do {
            lVar33 = local_570;
            puVar22 = local_5a8;
            if (local_5a8 == (undefined1 *)0x0) {
              puVar22 = local_5c8;
            }
            lVar39 = uVar30 * 0x10;
            piVar4 = *(int **)(puVar22 + lVar39);
            local_578 = piVar4;
            local_459 = param_9;
            local_458 = puVar22[lVar39 + 0xb];
            local_1383 = puVar22[lVar39 + 8];
            cVar10 = puVar22[lVar39 + 9];
            local_1384 = puVar22[lVar39 + 10];
            local_12c0 = 0x18;
            if (local_1383 != 0) {
              local_12c0 = 0x13750;
            }
            local_460 = local_1383;
            lVar39 = *(longlong *)((longlong)piVar4 + local_12c0);
            local_12f0 = uVar30;
            if (local_570 != lVar39) {
              local_570 = lVar39;
              if (lVar39 != 0) {
                LOCK();
                *(int *)(lVar39 + 8) = *(int *)(lVar39 + 8) + 1;
                UNLOCK();
              }
              if (lVar33 != 0) {
                LOCK();
                puVar1 = (uint *)(lVar33 + 8);
                uVar13 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar13 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(lVar33 + 8);
                  LOCK();
                  uVar13 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar13 >> 0x1e & 1) == 0) {
                    bVar38 = *(byte *)(lVar33 + 0xd);
                    plVar23 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar23[1] = lVar33;
                    plVar21 = DAT_14ca843c0;
                    plVar28 = DAT_14ca843c8;
                    lVar41 = local_1380;
                    if ((bVar38 & 2) == 0) {
                      do {
                        *plVar23 = (longlong)plVar21;
                        LOCK();
                        bVar43 = plVar21 != DAT_14ca843c0;
                        plVar28 = plVar23;
                        if (bVar43) {
                          plVar21 = DAT_14ca843c0;
                          plVar28 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar28;
                        UNLOCK();
                      } while (bVar43);
                    }
                    else {
                      do {
                        *plVar23 = (longlong)plVar28;
                        LOCK();
                        bVar43 = plVar28 != DAT_14ca843c8;
                        plVar21 = plVar23;
                        if (bVar43) {
                          plVar28 = DAT_14ca843c8;
                          plVar21 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar21;
                        UNLOCK();
                      } while (bVar43);
                    }
                  }
                }
              }
            }
            plVar21 = local_1358;
            local_45f = 1;
            if (cVar10 != '\0') {
              local_45f = local_1384;
            }
            local_45e = local_1384;
            local_45d = *(undefined *)((longlong)piVar4 + 0x23eb);
            local_454 = &DAT_100000001;
            uStack_44c = 0;
            local_444 = &DAT_100000001;
            uStack_43c = 0;
            lVar33 = *(longlong *)(piVar4 + 0xc44);
            local_434 = *(undefined4 *)(lVar33 + 0xc10);
            if (local_1383 == 0) {
              if (((*(float *)(lVar33 + 0xe7c) != 0.0) || (NAN(*(float *)(lVar33 + 0xe7c)))) ||
                 ((*(byte *)(lVar33 + 0x15b0) & 0x10) != 0)) {
                piVar40 = *(int **)(local_1308 + 0x1b0);
                uVar13 = *(uint *)(local_1308 + 0x20);
                uVar2 = *(uint *)(local_1308 + 0x24);
                local_1360 = piVar40;
                if (local_1384 == 0) {
                  local_1368 = (int *)0x0;
                  piVar31 = (int *)0x0;
                }
                else {
                  local_11b8 = CONCAT26(local_11b8._6_2_,0xff000a000000);
                  local_11e8 = 0x20009;
                  local_11b8 = CONCAT62(local_11b8._2_6_,0x101);
                  uStack_11e0 = (longlong *)0x1;
                  uStack_11d8 = 0;
                  uVar17 = DAT_14ca84e40;
                  if ((int)uVar13 < (int)DAT_14ca84e40) {
                    uVar17 = uVar13;
                  }
                  if ((int)uVar17 < 2) {
                    uVar17 = 1;
                  }
                  uVar6 = DAT_14ca84e40;
                  if ((int)uVar2 < (int)DAT_14ca84e40) {
                    uVar6 = uVar2;
                  }
                  uStack_11d0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0x3f800000);
                  if ((int)uVar6 < 2) {
                    uVar6 = 1;
                  }
                  local_11c8 = (ulonglong)uVar17 << 0x20;
                  local_11c0 = CONCAT44(0x10001,uVar6);
                  piVar31 = (int *)(*(longlong *)(lVar41 + 0x70) + 7U & 0xfffffffffffffff8);
                  piVar40 = piVar31 + 0x48;
                  if (*(int **)(lVar41 + 0x78) < piVar40) {
                    FUN_140023dd8(local_1358,0x128);
                    piVar31 = (int *)(*plVar21 + 7U & 0xfffffffffffffff8);
                    piVar40 = piVar31 + 0x48;
                  }
                  *(int **)(lVar41 + 0x70) = piVar40;
                  FUN_1456bbb8c(piVar31,L"Cloud.HighQualityAPIntermediate",&local_11e8,0);
                  iVar12 = *(int *)(lVar41 + 0x180);
                  *(uint *)(lVar41 + 0x180) = iVar12 + 1U;
                  if (*(uint *)(lVar41 + 0x184) < iVar12 + 1U) {
                    FUN_14472c0f6(local_1338,iVar12);
                  }
                  plVar21 = local_1358;
                  *(int **)(*(longlong *)(lVar41 + 0x178) + (longlong)iVar12 * 8) = piVar31;
                  piVar31[0x27] = *(int *)(lVar41 + 0x180) + -1;
                  piVar40 = piVar31;
                  if (local_1344 < 1) {
                    local_1368 = (int *)0x0;
                  }
                  else {
                    local_11b8 = CONCAT26(local_11b8._6_2_,0xff000a000000);
                    local_11e8 = 0x20009;
                    local_11b8 = CONCAT62(local_11b8._2_6_,0x101);
                    uStack_11e0 = (longlong *)0x4776180000000001;
                    uStack_11d8 = 0x4776180047761800;
                    uVar17 = DAT_14ca84e40;
                    if ((int)uVar13 < (int)DAT_14ca84e40) {
                      uVar17 = uVar13;
                    }
                    if ((int)uVar17 < 2) {
                      uVar17 = 1;
                    }
                    uVar6 = DAT_14ca84e40;
                    if ((int)uVar2 < (int)DAT_14ca84e40) {
                      uVar6 = uVar2;
                    }
                    uStack_11d0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0x47761800);
                    if ((int)uVar6 < 2) {
                      uVar6 = 1;
                    }
                    local_11c8 = (ulonglong)uVar17 << 0x20;
                    local_11c0 = CONCAT44(0x10001,uVar6);
                    piVar34 = (int *)(*(longlong *)(lVar41 + 0x70) + 7U & 0xfffffffffffffff8);
                    piVar24 = piVar34 + 0x48;
                    if (*(int **)(lVar41 + 0x78) < piVar24) {
                      FUN_140023dd8(local_1358,0x128);
                      piVar34 = (int *)(*plVar21 + 7U & 0xfffffffffffffff8);
                      piVar24 = piVar34 + 0x48;
                    }
                    *(int **)(lVar41 + 0x70) = piVar24;
                    FUN_1456bbb8c(piVar34,L"Cloud.HighQualityAPIntermediate2",&local_11e8,0);
                    iVar12 = *(int *)(lVar41 + 0x180);
                    *(uint *)(lVar41 + 0x180) = iVar12 + 1U;
                    if (*(uint *)(lVar41 + 0x184) < iVar12 + 1U) {
                      FUN_14472c0f6(local_1338,iVar12);
                    }
                    *(int **)(*(longlong *)(lVar41 + 0x178) + (longlong)iVar12 * 8) = piVar34;
                    piVar34[0x27] = *(int *)(lVar41 + 0x180) + -1;
                    local_1368 = piVar34;
                  }
                }
                uVar19 = local_11b8;
                plVar21 = local_1358;
                local_11e8 = (ulonglong)(*(byte *)((longlong)piVar40 + 0x91) < 2) << 0x11 | 9;
                uStack_11e0 = (longlong *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
                uStack_11d8 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
                local_11b8 = CONCAT62(0xf00,CONCAT11(*(byte *)((longlong)piVar40 + 0x91),1));
                uVar7 = local_11b8;
                if ((int)DAT_14ca84e40 <= (int)uVar13) {
                  uVar13 = DAT_14ca84e40;
                }
                if ((int)uVar13 < 2) {
                  uVar13 = 1;
                }
                local_11b8._6_2_ = SUB82(uVar19,6);
                local_11b8._0_6_ = CONCAT15(0xff,(int5)uVar7);
                uVar17 = DAT_14ca84e40;
                if ((int)uVar2 < (int)DAT_14ca84e40) {
                  uVar17 = uVar2;
                }
                uStack_11d0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
                if ((int)uVar17 < 2) {
                  uVar17 = 1;
                }
                local_11c8 = (ulonglong)uVar13 << 0x20;
                local_11c0 = CONCAT44(0x10001,uVar17);
                uVar25 = *(longlong *)(lVar41 + 0x70) + 7U & 0xfffffffffffffff8;
                uVar30 = uVar25 + 0x120;
                if (*(ulonglong *)(lVar41 + 0x78) < uVar30) {
                  FUN_140023dd8(local_1358,0x128);
                  uVar25 = *plVar21 + 7U & 0xfffffffffffffff8;
                  uVar30 = uVar25 + 0x120;
                }
                *(ulonglong *)(lVar41 + 0x70) = uVar30;
                FUN_1456bbb8c(uVar25,L"Cloud.DummyDepth",&local_11e8,0);
                param_1 = local_1378;
                iVar12 = *(int *)(lVar41 + 0x180);
                *(uint *)(lVar41 + 0x180) = iVar12 + 1U;
                if (*(uint *)(lVar41 + 0x184) < iVar12 + 1U) {
                  FUN_14472c0f6(local_1338,iVar12);
                }
                *(ulonglong *)(*(longlong *)(lVar41 + 0x178) + (longlong)iVar12 * 8) = uVar25;
                *(int *)(uVar25 + 0x9c) = *(int *)(lVar41 + 0x180) + -1;
                if (local_1384 == 0) {
                  bVar9 = 1;
                  bVar38 = 0;
                  local_568 = local_1360;
                }
                else {
                  uVar13 = FUN_1400b0b91(*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),8);
                  bVar38 = 2;
                  if (*(int *)(DAT_14ca696f0 + 4) == 0) {
                    if ((((DAT_14c873612 & 0x20) != 0) && (uVar13 < 2)) &&
                       ((DAT_14c873700 & 0x200000) != 0)) {
                      uStack_11d8 = 0;
                      uStack_11d0 = 0;
                      local_11e8 = 0;
                      uStack_11e0 = (longlong *)0x0;
                      local_11c8 = 0;
                      local_11c0 = 1;
                      local_11b8._0_4_ = 1;
                      FUN_1401a4871(lVar41,piVar31,&local_11e8);
                      local_11c8 = 0;
                      uStack_11d8 = 0;
                      uStack_11d0 = 0;
                      local_11e8 = 0;
                      uStack_11e0 = (longlong *)0x0;
                      local_11c0 = 1;
                      local_11b8 = CONCAT44(local_11b8._4_4_,1);
                      FUN_1401a4871(lVar41,uVar25);
                    }
                    bVar9 = 2;
                    local_568 = piVar31;
                    bVar38 = 2;
                  }
                  else {
                    bVar9 = 2;
                    local_568 = piVar31;
                  }
                }
                local_560 = 0;
                local_558 = CONCAT22(0xffff,(ushort)bVar9);
                local_548 = 0;
                local_540 = CONCAT22(0xffff,(ushort)bVar38);
                local_1320 = (int *)0x0;
                piVar40 = (int *)0x0;
                local_1310 = (int *)0x0;
                local_580 = local_1328;
                local_588 = local_1328;
                local_550 = uVar25;
                goto LAB_143100aec;
              }
            }
            else {
              lVar39 = *(longlong *)(piVar4 + 0xc42);
              lVar33 = lVar39 + 0x1e78;
              piVar24 = (int *)FUN_14178685e(lVar33,lVar41);
              local_1320 = (int *)lVar33;
              uVar25 = FUN_14178693c(lVar33);
              plVar21 = local_1358;
              local_1360 = piVar24;
              if (local_1384 == 0) {
                piVar40 = (int *)0x0;
                local_1368 = (int *)0x0;
                local_1310 = (int *)0x0;
                piVar31 = (int *)0x0;
              }
              else {
                uVar13 = piVar24[0x21];
                uVar2 = piVar24[0x22];
                local_11b8 = CONCAT26(local_11b8._6_2_,0xff000a000000);
                local_11e8 = 0x20009;
                local_11b8 = CONCAT62(local_11b8._2_6_,0x101);
                uStack_11e0 = (longlong *)0x4776180000000001;
                uStack_11d8 = 0x4776180047761800;
                uVar17 = DAT_14ca84e40;
                if ((int)uVar13 < (int)DAT_14ca84e40) {
                  uVar17 = uVar13;
                }
                if ((int)uVar17 < 2) {
                  uVar17 = 1;
                }
                uVar6 = DAT_14ca84e40;
                if ((int)uVar2 < (int)DAT_14ca84e40) {
                  uVar6 = uVar2;
                }
                uStack_11d0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0x47761800);
                if ((int)uVar6 < 2) {
                  uVar6 = 1;
                }
                local_11c8 = (ulonglong)uVar17 << 0x20;
                local_11c0 = CONCAT44(0x10001,uVar6);
                piVar31 = (int *)(*(longlong *)(lVar41 + 0x70) + 7U & 0xfffffffffffffff8);
                piVar40 = piVar31 + 0x48;
                local_1350 = uVar25;
                if (*(int **)(lVar41 + 0x78) < piVar40) {
                  FUN_140023dd8(local_1358,0x128);
                  piVar31 = (int *)(*plVar21 + 7U & 0xfffffffffffffff8);
                  piVar40 = piVar31 + 0x48;
                }
                *(int **)(lVar41 + 0x70) = piVar40;
                FUN_1456bbb8c(piVar31,L"Cloud.HighQualityAPIntermediate",&local_11e8,0);
                iVar12 = *(int *)(lVar41 + 0x180);
                *(uint *)(lVar41 + 0x180) = iVar12 + 1U;
                if (*(uint *)(lVar41 + 0x184) < iVar12 + 1U) {
                  FUN_14472c0f6(local_1338,iVar12);
                }
                plVar21 = local_1358;
                *(int **)(*(longlong *)(lVar41 + 0x178) + (longlong)iVar12 * 8) = piVar31;
                piVar31[0x27] = *(int *)(lVar41 + 0x180) + -1;
                local_11b8 = CONCAT26(local_11b8._6_2_,0xff000a000000);
                local_11e8 = 0x20009;
                local_11b8 = CONCAT62(local_11b8._2_6_,0x101);
                uStack_11e0 = (longlong *)0x4776180000000001;
                uStack_11d8 = 0x4776180047761800;
                uVar17 = DAT_14ca84e40;
                if ((int)uVar13 < (int)DAT_14ca84e40) {
                  uVar17 = uVar13;
                }
                if ((int)uVar17 < 2) {
                  uVar17 = 1;
                }
                uVar6 = DAT_14ca84e40;
                if ((int)uVar2 < (int)DAT_14ca84e40) {
                  uVar6 = uVar2;
                }
                uStack_11d0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0x47761800);
                if ((int)uVar6 < 2) {
                  uVar6 = 1;
                }
                local_11c8 = (ulonglong)uVar17 << 0x20;
                local_11c0 = CONCAT44(0x10001,uVar6);
                piVar34 = (int *)(*(longlong *)(lVar41 + 0x70) + 7U & 0xfffffffffffffff8);
                piVar40 = piVar34 + 0x48;
                if (*(int **)(lVar41 + 0x78) < piVar40) {
                  FUN_140023dd8(local_1358,0x128);
                  piVar34 = (int *)(*plVar21 + 7U & 0xfffffffffffffff8);
                  piVar40 = piVar34 + 0x48;
                }
                *(int **)(lVar41 + 0x70) = piVar40;
                FUN_1456bbb8c(piVar34,L"Cloud.HighQualityAPIntermediateSecondary",&local_11e8,0);
                iVar12 = *(int *)(lVar41 + 0x180);
                uVar17 = iVar12 + 1;
                *(uint *)(lVar41 + 0x180) = uVar17;
                if (*(uint *)(lVar41 + 0x184) < uVar17) {
                  FUN_14472c0f6(local_1338);
                }
                plVar21 = local_1358;
                *(int **)(*(longlong *)(lVar41 + 0x178) + (longlong)iVar12 * 8) = piVar34;
                piVar34[0x27] = *(int *)(lVar41 + 0x180) + -1;
                piVar24 = piVar31;
                local_1310 = piVar34;
                if (local_1344 < 1) {
                  piVar40 = (int *)0x0;
                  local_1368 = (int *)0x0;
                  uVar25 = local_1350;
                  param_1 = local_1378;
                }
                else {
                  local_11b8 = CONCAT26(local_11b8._6_2_,0xff000a000000);
                  local_11e8 = 0x20009;
                  local_11b8 = CONCAT62(local_11b8._2_6_,0x101);
                  uStack_11e0 = (longlong *)0x4776180000000001;
                  uStack_11d8 = 0x4776180047761800;
                  uVar17 = DAT_14ca84e40;
                  if ((int)uVar13 < (int)DAT_14ca84e40) {
                    uVar17 = uVar13;
                  }
                  if ((int)uVar17 < 2) {
                    uVar17 = 1;
                  }
                  uVar6 = DAT_14ca84e40;
                  if ((int)uVar2 < (int)DAT_14ca84e40) {
                    uVar6 = uVar2;
                  }
                  uStack_11d0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0x47761800);
                  if ((int)uVar6 < 2) {
                    uVar6 = 1;
                  }
                  local_11c8 = (ulonglong)uVar17 << 0x20;
                  local_11c0 = CONCAT44(0x10001,uVar6);
                  piVar34 = (int *)(*(longlong *)(lVar41 + 0x70) + 7U & 0xfffffffffffffff8);
                  piVar40 = piVar34 + 0x48;
                  if (*(int **)(lVar41 + 0x78) < piVar40) {
                    FUN_140023dd8(local_1358,0x128);
                    piVar34 = (int *)(*plVar21 + 7U & 0xfffffffffffffff8);
                    piVar40 = piVar34 + 0x48;
                  }
                  *(int **)(lVar41 + 0x70) = piVar40;
                  FUN_1456bbb8c(piVar34,L"Cloud.HighQualityAPIntermediate2",&local_11e8,0);
                  iVar12 = *(int *)(lVar41 + 0x180);
                  *(uint *)(lVar41 + 0x180) = iVar12 + 1U;
                  if (*(uint *)(lVar41 + 0x184) < iVar12 + 1U) {
                    FUN_14472c0f6(local_1338,iVar12);
                  }
                  plVar21 = local_1358;
                  *(int **)(*(longlong *)(lVar41 + 0x178) + (longlong)iVar12 * 8) = piVar34;
                  piVar34[0x27] = *(int *)(lVar41 + 0x180) + -1;
                  local_11b8 = CONCAT26(local_11b8._6_2_,0xff000a000000);
                  local_11e8 = 0x20009;
                  local_11b8 = CONCAT62(local_11b8._2_6_,0x101);
                  uStack_11e0 = (longlong *)0x4776180000000001;
                  uStack_11d8 = 0x4776180047761800;
                  if ((int)DAT_14ca84e40 <= (int)uVar13) {
                    uVar13 = DAT_14ca84e40;
                  }
                  if ((int)uVar13 < 2) {
                    uVar13 = 1;
                  }
                  uVar17 = DAT_14ca84e40;
                  if ((int)uVar2 < (int)DAT_14ca84e40) {
                    uVar17 = uVar2;
                  }
                  uStack_11d0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0x47761800);
                  if ((int)uVar17 < 2) {
                    uVar17 = 1;
                  }
                  local_11c8 = (ulonglong)uVar13 << 0x20;
                  local_11c0 = CONCAT44(0x10001,uVar17);
                  piVar40 = (int *)(*(longlong *)(lVar41 + 0x70) + 7U & 0xfffffffffffffff8);
                  piVar26 = piVar40 + 0x48;
                  local_1368 = piVar34;
                  if (*(int **)(lVar41 + 0x78) < piVar26) {
                    FUN_140023dd8(local_1358,0x128);
                    piVar40 = (int *)(*plVar21 + 7U & 0xfffffffffffffff8);
                    piVar26 = piVar40 + 0x48;
                  }
                  *(int **)(lVar41 + 0x70) = piVar26;
                  FUN_1456bbb8c(piVar40,L"Cloud.HighQualityAPIntermediateSecondary2",&local_11e8,0);
                  uVar25 = local_1350;
                  param_1 = local_1378;
                  iVar12 = *(int *)(lVar41 + 0x180);
                  uVar13 = iVar12 + 1;
                  *(uint *)(lVar41 + 0x180) = uVar13;
                  if (*(uint *)(lVar41 + 0x184) < uVar13) {
                    FUN_14472c0f6(local_1338);
                  }
                  *(int **)(*(longlong *)(lVar41 + 0x178) + (longlong)iVar12 * 8) = piVar40;
                  piVar40[0x27] = *(int *)(lVar41 + 0x180) + -1;
                }
              }
              local_560 = 0;
              local_558 = 0xffff0000;
              local_548 = 0;
              local_540 = 0xffff0000;
              local_568 = piVar24;
              local_550 = uVar25;
              fVar44 = (float)FUN_14054f85b(*(undefined4 *)(lVar39 + 0x1ef0));
              uVar13 = *(uint *)(lVar39 + 0x1e78);
              uVar2 = *(uint *)(lVar39 + 0x1ef0);
              uVar17 = ((int)ROUND(1.0 / fVar44 + 1.0 / fVar44 + 0.5) >> 1) * uVar13 *
                       *(int *)(lVar39 + 0x1e7c);
              if ((uVar2 & 0xfffffffe) == 2) {
                uVar30 = (ulonglong)(*(int *)(lVar39 + 0x1e9c) * uVar13);
                uVar37 = (ulonglong)(uVar13 * *(int *)(lVar39 + 0x1e98));
              }
              else {
                uVar17 = uVar17 >> 1;
                uVar30 = (ulonglong)(*(int *)(lVar39 + 0x1e9c) * uVar13) / (ulonglong)uVar13;
                uVar37 = (ulonglong)(*(int *)(lVar39 + 0x1e98) * uVar13) / (ulonglong)uVar13;
              }
              local_454 = (undefined1 *)CONCAT44(uVar17,uVar17);
              fVar44 = 2.0;
              if (uVar2 != 3) {
                fVar44 = 1.0;
              }
              fVar46 = 2.0;
              if (uVar2 != 0) {
                fVar46 = fVar44;
              }
              uStack_44c = CONCAT44((int)(longlong)
                                         ((float)uVar30 +
                                         *(float *)(*(longlong *)(piVar4 + 0xc44) + 0xaf4) / fVar46)
                                    ,(int)(longlong)
                                          ((float)uVar37 +
                                          *(float *)(*(longlong *)(piVar4 + 0xc44) + 0xaf0) / fVar46
                                          ));
              fVar44 = (float)FUN_14054f85b();
              iVar12 = *(int *)(lVar39 + 0x1e78);
              iVar18 = ((int)ROUND(1.0 / fVar44 + 1.0 / fVar44 + 0.5) >> 1) * iVar12 *
                       *(int *)(lVar39 + 0x1e7c);
              local_444 = (undefined1 *)CONCAT44(iVar18,iVar18);
              uStack_43c = CONCAT44(*(int *)(lVar39 + 0x1e9c) * iVar12,
                                    iVar12 * *(int *)(lVar39 + 0x1e98));
              cVar10 = FUN_1400edd34(piVar4);
              if (cVar10 == '\0') {
                local_1320 = (int *)0x0;
                local_580 = local_1328;
              }
              else {
                local_1320 = (int *)FUN_141786a28(local_1320,lVar41);
                local_580 = param_8;
                local_468 = local_1320;
                if (local_1384 != 0) {
                  local_468 = local_1310;
                }
              }
              local_434 = *(undefined4 *)(lVar39 + 0x1e94);
              local_588 = local_1328;
              if (*(uint *)(lVar39 + 0x1ef0) < 2) {
                local_588 = param_7;
              }
LAB_143100aec:
              if (local_458 == '\x01') {
                local_588 = FUN_14476842e(lVar41,&DAT_14ca63b28,L"BlackDummy",2);
                local_580 = local_588;
              }
              local_1350 = uVar25;
              if (local_1340 != 0) {
                lVar39 = (longlong)*(int *)(local_1340 + 0x34) * 0x68;
                lVar33 = (longlong)*(int *)(*local_1300 + 0x18 + lVar39);
                if (0 < lVar33) {
                  lVar36 = 0;
                  do {
                    piVar24 = *(int **)(*(longlong *)(*local_1300 + lVar39 + 0x10) + lVar36 * 8);
                    if ((piVar24[0x264] & 0x281U) == 0x81) {
                      if (((piVar24 != (int *)0x0) && (local_45b == 0)) &&
                         (local_1330 != (longlong *)0x0)) {
                        local_13a8 = piVar24;
                        FUN_14030f225(lVar41,&local_428,piVar4);
                        cVar10 = '\x01';
                        goto LAB_143100d39;
                      }
                      break;
                    }
                    lVar36 = lVar36 + 1;
                  } while (lVar33 != lVar36);
                }
              }
              local_428 = 0x3f800000;
              uStack_424 = 0x3f800000;
              uStack_420 = 0x3f800000;
              uStack_41c = 0x3f800000;
              if (DAT_14c760a84 == -1) {
                FUN_145fdab76(&local_11e8,L"FRDGSystemTextures",
                              L".\\Runtime/Renderer/Private/SystemTextures.cpp",0x66);
                DAT_14c760a84 = FUN_145d12cf0(&local_11e8);
                lVar41 = local_1380;
                param_1 = local_1378;
                if (local_11e8 != 0) {
                  FUN_1400020a8();
                  lVar41 = local_1380;
                  param_1 = local_1378;
                }
              }
              if ((DAT_14c760a84 < *(int *)(lVar41 + 0x130)) &&
                 (lVar33 = *(longlong *)
                            (*(longlong *)(lVar41 + 0x128) + (longlong)DAT_14c760a84 * 8),
                 lVar33 != 0)) {
                puVar27 = (undefined8 *)(lVar33 + 8);
              }
              else {
                puVar27 = (undefined8 *)0x0;
              }
              uVar19 = puVar27[7];
              local_12c8[6] = _DAT_14c846280;
              local_12c8[7] = _DAT_14c846288;
              local_12c8[4] = _DAT_14c846270;
              local_12c8[5] = _DAT_14c846278;
              local_12c8[2] = _DAT_14c846260;
              local_12c8[3] = _DAT_14c846268;
              *local_12c8 = _DAT_14c846250;
              local_12c8[1] = DAT_14c846258;
              local_3d8 = 0x3f800000;
              uStack_3d0 = 0x3f80000000000000;
              local_3c8 = 0x3f800000;
              uStack_3c0 = 0x3f80000000000000;
              local_3b8 = 0x3f800000;
              uStack_3b0 = 0x3f80000000000000;
              local_398 = 0;
              uStack_390 = 0;
              local_3a8 = 0;
              uStack_3a0 = 0;
              local_1c8 = 0;
              local_178 = _DAT_14c846280;
              uStack_170 = _DAT_14c846288;
              local_188 = _DAT_14c846270;
              uStack_180 = _DAT_14c846278;
              local_198 = _DAT_14c846260;
              uStack_190 = _DAT_14c846268;
              local_1a8 = _DAT_14c846250;
              uStack_1a0 = DAT_14c846258;
              local_168 = 0x3f800000;
              uStack_160 = 0x3f80000000000000;
              local_388 = *puVar27;
              local_1c0 = *(undefined8 *)(DAT_14ca94e18 + 0x10);
              local_380 = DAT_14c9c0d80;
              local_1b8 = DAT_14c9c0de0;
              memset(local_358,0,0x180);
              local_1d8 = 0x3f800000;
              local_368 = DAT_14c9c0dc8;
              cVar10 = local_1382;
              local_378 = uVar19;
              local_370 = uVar19;
LAB_143100d39:
              uVar15 = 0xffffffff;
              if ((local_45b == 0) && (cVar10 != '\0')) {
                lVar39 = (longlong)*(int *)(local_1340 + 0x34) * 0x68;
                lVar33 = *local_1300 + lVar39;
                if (*(int *)(*local_1300 + 0x58 + lVar39) == 0) {
                  uVar15 = *(undefined4 *)(lVar33 + 0x60);
                }
                else {
                  FUN_1400d7ed0(lVar33,&local_11e8,piVar4);
                  plVar21 = uStack_11e0;
                  uVar15 = *(undefined4 *)(local_11e8 + 0x2b40);
                  if (uStack_11e0 != (longlong *)0x0) {
                    LOCK();
                    plVar28 = uStack_11e0 + 1;
                    *(int *)plVar28 = (int)*plVar28 + -1;
                    UNLOCK();
                    if ((int)*plVar28 == 0) {
                      (**(code **)*uStack_11e0)(uStack_11e0);
                      LOCK();
                      piVar24 = (int *)((longlong)plVar21 + 0xc);
                      *piVar24 = *piVar24 + -1;
                      UNLOCK();
                      if (*piVar24 == 0) {
                        (**(code **)(*plVar21 + 0x10))(plVar21);
                      }
                    }
                  }
                }
              }
              local_457 = param_6;
              local_148 = uVar15;
              FUN_1430f6648(local_12f8,piVar4,lVar41,&local_5e8);
              local_158 = local_5e0;
              uStack_154 = uStack_5dc;
              uStack_150 = uStack_5d8;
              uStack_14c = uStack_5d4;
              FUN_1430fd6ac(param_1,lVar41,&local_598);
              if (local_1384 != 0) {
                plVar21 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x2c8))();
                lVar33 = *plVar21;
                FUN_144b18b28(&local_11e8);
                uVar8 = (uint6)local_11e8;
                local_11e8._0_7_ = (uint7)(uVar8 & 0xffffffff);
                local_11e8 = CONCAT17(*(longlong *)(*(longlong *)(param_1 + 8) + 0x36c0) != 0,
                                      (uint7)local_11e8);
                local_1258 = 0.0;
                dStack_1250 = 0.0;
                local_1268 = (wchar_t *)0x0;
                dStack_1260 = 0.0;
                local_1248 = -NAN;
                uVar11 = FUN_14308ff5b(*(longlong *)(param_1 + 8),local_1300,&local_1268);
                uStack_11e0 = (longlong *)CONCAT71(uStack_11e0._1_7_,uVar11);
                piVar24 = local_1360;
                if (0 < local_1344) {
                  piVar24 = local_1368;
                }
                local_11e8._0_4_ = CONCAT13(0 < local_1344 | local_1383,0x10100);
                uStack_11d8 = FUN_14473c272(lVar41,plVar21 + 0x1a,0);
                uStack_11d0 = FUN_14473c272(lVar41,plVar21 + 0x1b,0);
                lVar39 = local_11a0;
                local_1028 = (float)CONCAT31(local_1028._1_3_,1);
                uStack_1020 = local_1350;
                local_1180 = 0;
                local_1178 = 0xffff0000;
                local_11a8 = piVar4 + 0x140;
                lVar41 = *(longlong *)((longlong)piVar4 + local_12c0);
                lVar36 = local_11a0;
                local_1188 = piVar24;
                local_1018 = piVar31;
                if (local_11a0 != lVar41) {
                  if (lVar41 != 0) {
                    LOCK();
                    *(int *)(lVar41 + 8) = *(int *)(lVar41 + 8) + 1;
                    UNLOCK();
                  }
                  lVar36 = lVar41;
                  if (local_11a0 != 0) {
                    LOCK();
                    puVar1 = (uint *)(local_11a0 + 8);
                    uVar13 = *puVar1;
                    *puVar1 = *puVar1 - 1;
                    UNLOCK();
                    if ((uVar13 & 0x3fffffff) == 1) {
                      puVar1 = (uint *)(local_11a0 + 8);
                      LOCK();
                      uVar13 = *puVar1;
                      *puVar1 = *puVar1 | 0x40000000;
                      UNLOCK();
                      if ((uVar13 >> 0x1e & 1) == 0) {
                        bVar38 = *(byte *)(local_11a0 + 0xd);
                        local_11a0 = lVar41;
                        plVar23 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar23[1] = lVar39;
                        plVar21 = DAT_14ca843c0;
                        plVar28 = DAT_14ca843c8;
                        lVar36 = local_11a0;
                        if ((bVar38 & 2) == 0) {
                          do {
                            *plVar23 = (longlong)plVar21;
                            LOCK();
                            bVar43 = plVar21 != DAT_14ca843c0;
                            plVar28 = plVar23;
                            if (bVar43) {
                              plVar21 = DAT_14ca843c0;
                              plVar28 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar28;
                            UNLOCK();
                          } while (bVar43);
                        }
                        else {
                          do {
                            *plVar23 = (longlong)plVar28;
                            LOCK();
                            bVar43 = plVar28 != DAT_14ca843c8;
                            plVar21 = plVar23;
                            if (bVar43) {
                              plVar28 = DAT_14ca843c8;
                              plVar21 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar21;
                            UNLOCK();
                          } while (bVar43);
                        }
                      }
                    }
                  }
                }
                local_11a0 = lVar36;
                lVar41 = local_1380;
                local_1198 = FUN_1448c569e(local_12d0,local_1380);
                param_1 = local_1378;
                if (local_1383 == 0) {
                  local_1088 = *(undefined8 *)(piVar4 + 0xc3e);
                  piVar31 = piVar4 + 0xc40;
                }
                else {
                  piVar31 = local_1360 + 0x21;
                  local_1088 = 0;
                }
                local_1080 = *(undefined8 *)piVar31;
                local_1078 = *(undefined *)((longlong)piVar4 + 0x23eb);
                fVar44 = 0.0;
                if (0.0 <= *(float *)(lVar33 + 0xd0)) {
                  fVar44 = *(float *)(lVar33 + 0xd0);
                }
                local_1070 = (float)piVar4[0x85c];
                local_1074 = fVar44 * 100000.0;
                if (fVar44 * 100000.0 <= local_1070) {
                  local_1074 = local_1070;
                }
                local_106c = piVar4[0xc24];
                local_1077 = 0;
                local_1190 = 0;
                local_12e8 = piVar40;
                if ((*(longlong *)(piVar4 + 0x4dce) == 0) || (*(longlong *)(piVar4 + 0x4dc8) == 0))
                {
                  local_11c8 = FUN_14476842e(lVar41,&DAT_14ca63b28,L"BlackDummy",2);
                  local_11c0 = FUN_14476842e(lVar41,&DAT_14ca63bd8,L"VolumetricBlackDummy",2);
                  local_11b8 = FUN_14476842e(lVar41,&DAT_14ca63bd8,L"VolumetricBlackDummy",2);
                  local_11b0 = FUN_14476842e(lVar41,&DAT_14ca63bd8,L"VolumetricBlackDummy",2);
                }
                else {
                  local_11c8 = FUN_14473c272(lVar41,piVar4 + 0x4dce,0);
                  local_11c0 = FUN_14473c272(lVar41,piVar4 + 0x4dc8,0);
                  piVar40 = piVar4 + 0x4dca;
                  if (*(longlong *)(piVar4 + 0x4dca) == 0) {
                    piVar40 = (int *)&DAT_14ca63be0;
                  }
                  local_11b8 = FUN_14473c272(lVar41,piVar40,0);
                  piVar40 = piVar4 + 0x4dcc;
                  if (*(longlong *)(piVar4 + 0x4dcc) == 0) {
                    piVar40 = (int *)&DAT_14ca63be0;
                  }
                  local_11b0 = FUN_14473c272(lVar41,piVar40,0);
                }
                local_13a0 = (int *)CONCAT71(local_13a0._1_7_,(undefined1)uStack_11e0);
                local_1398 = (undefined4 *)((ulonglong)local_1398 & 0xffffffff00000000);
                local_13a8 = piVar4;
                FUN_14030ed6e(lVar41,local_12d8,local_1060,&local_1268);
                lVar33 = local_1308;
                local_1050 = local_5e8;
                local_1048 = local_5e0;
                uStack_1044 = uStack_5dc;
                uStack_1040 = uStack_5d8;
                uStack_103c = uStack_5d4;
                local_1038 = local_5e7;
                local_1030 = local_5d0;
                ppuVar5 = *(undefined ***)(local_1308 + 0x198);
                local_12a8 = (int *)0x0;
                local_12a0 = (undefined8 *)CONCAT71(local_12a0._1_7_,1);
                FUN_14482e3b2();
                lVar41 = local_1380;
                cVar10 = DAT_14cb02cf9;
                if (DAT_14cb02cf9 == '\x03') {
                  cVar10 = '\x02';
                }
                local_12b0 = (int *)CONCAT71(local_12b0._1_7_,cVar10);
                local_12b8 = ppuVar5;
                FUN_1430951e2(param_1,local_1380,&local_12b8);
                iVar12 = local_1344;
                if (local_1320 != (int *)0x0) {
                  uStack_1020 = local_1350;
                  local_1018 = local_1310;
                  local_1188 = local_1320;
                  if (0 < local_1344) {
                    local_1188 = local_12e8;
                  }
                  local_1180 = 0;
                  local_1178 = 0xffff0000;
                  ppuVar5 = *(undefined ***)(lVar33 + 0x198);
                  local_12a8 = (int *)0x0;
                  local_12a0 = (undefined8 *)CONCAT71(local_12a0._1_7_,1);
                  FUN_14482e3b2();
                  lVar41 = local_1380;
                  cVar10 = DAT_14cb02cf9;
                  if (DAT_14cb02cf9 == '\x03') {
                    cVar10 = '\x02';
                  }
                  local_12b0 = (int *)CONCAT71(local_12b0._1_7_,cVar10);
                  local_12b8 = ppuVar5;
                  FUN_1430951e2(param_1,local_1380,&local_12b8);
                }
                piVar40 = local_1360;
                if (0 < iVar12) {
                  lVar33 = *(longlong *)(param_1 + 8);
                  cVar10 = FUN_140047f5c(local_12e0);
                  lVar41 = local_1380;
                  bVar43 = false;
                  if (((lVar33 != 0) && (bVar43 = false, cVar10 != '\0')) && (DAT_14c760aa8 != 0)) {
                    if ((((*(byte *)(param_1 + 0xf5) & 8) == 0) || (*(int *)(lVar33 + 0x4d18) < 1))
                       || (*(char *)(*(longlong *)(lVar33 + 0x4d10) + 0x6c) != '\x01')) {
                      bVar43 = false;
                    }
                    else {
                      bVar43 = 0.0 < *(float *)(*(longlong *)(lVar33 + 0x4d10) + 0x98);
                    }
                  }
                  local_1390 = local_1383;
                  local_1398 = (undefined4 *)CONCAT71(local_1398._1_7_,bVar43);
                  local_13a0 = piVar40;
                  local_13a8 = local_1368;
                  FUN_142bfdc80(local_1380,*(undefined8 *)(param_1 + 8),piVar4);
                  if (local_1320 != (int *)0x0) {
                    local_1390 = local_1383;
                    local_1398 = (undefined4 *)CONCAT71(local_1398._1_7_,bVar43);
                    local_13a0 = local_1320;
                    local_13a8 = local_12e8;
                    FUN_142bfdc80(lVar41,*(undefined8 *)(param_1 + 8),piVar4);
                  }
                }
                lVar33 = local_11a0;
                if (local_11a0 != 0) {
                  LOCK();
                  puVar1 = (uint *)(local_11a0 + 8);
                  uVar13 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar13 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(local_11a0 + 8);
                    LOCK();
                    uVar13 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar13 >> 0x1e & 1) == 0) {
                      bVar38 = *(byte *)(local_11a0 + 0xd);
                      plVar23 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar23[1] = lVar33;
                      plVar21 = DAT_14ca843c0;
                      plVar28 = DAT_14ca843c8;
                      if ((bVar38 & 2) == 0) {
                        do {
                          *plVar23 = (longlong)plVar21;
                          LOCK();
                          bVar43 = plVar21 != DAT_14ca843c0;
                          plVar28 = plVar23;
                          if (bVar43) {
                            plVar21 = DAT_14ca843c0;
                            plVar28 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar28;
                          UNLOCK();
                        } while (bVar43);
                      }
                      else {
                        do {
                          *plVar23 = (longlong)plVar28;
                          LOCK();
                          bVar43 = plVar28 != DAT_14ca843c8;
                          plVar21 = plVar23;
                          if (bVar43) {
                            plVar28 = DAT_14ca843c8;
                            plVar21 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar21;
                          UNLOCK();
                        } while (bVar43);
                      }
                    }
                  }
                }
              }
              if (local_1381 != 0) {
                local_12b8 = &PTR_FUN_14a217cb0;
                local_12a0 = (undefined8 *)0x0;
                uStack_1298 = 0;
                local_1290 = 0;
                local_12b0 = piVar4;
                local_12a8 = piVar4;
                FUN_1401cae46(&local_11e8);
                FUN_1430f7376(lVar41,&local_11e8,local_12f8);
                auVar47._0_4_ = (float)*(double *)(piVar4 + 0x40c);
                auVar47 = insertps(auVar47,ZEXT416((uint)(float)*(double *)(piVar4 + 0x40e)),0x1c);
                auVar47 = insertps(auVar47,ZEXT416((uint)(float)*(double *)(piVar4 + 0x410)),0x20);
                auVar48._0_8_ = auVar47._0_8_ ^ 0x8000000080000000;
                auVar48._8_4_ = auVar47._8_4_ ^ 0x80000000;
                auVar48._12_4_ = auVar47._12_4_ ^ 0x80000000;
                auVar47 = insertps(auVar48,0x3f800000,0x30);
                fVar44 = auVar47._0_4_;
                fVar46 = auVar47._4_4_;
                fVar49 = auVar47._8_4_;
                fVar50 = auVar47._12_4_;
                if ((char)local_136c != '\0') {
                  iVar32 = (int)local_1108;
                  uVar19 = *(undefined8 *)(piVar4 + 0xc3e);
                  uVar7 = *(undefined8 *)(piVar4 + 0xc40);
                  local_13a0 = (int *)CONCAT44(local_13a0._4_4_,
                                               *(undefined4 *)(*(longlong *)(piVar4 + 2) + 0xe8));
                  local_13a8 = (int *)CONCAT44(local_13a8._4_4_,piVar4[0xc24]);
                  uVar15 = 0;
                  lVar33 = FUN_147d8dc86(lVar41,*(undefined8 *)(local_1308 + 0x1b0),0,
                                         *(longlong *)(piVar4 + 2) + 0x88);
                  *(undefined8 *)(lVar33 + 0x38) = uVar19;
                  *(undefined8 *)(lVar33 + 0x40) = uVar7;
                  iVar12 = piVar4[0xc41];
                  iVar18 = piVar4[0xc3f];
                  FUN_140002266(&local_1268,L"Shadow Sample Count = %.1f",iVar32);
                  local_1280 = L"";
                  if (dStack_1260._0_4_ != 0) {
                    local_1280 = local_1268;
                  }
                  piVar40 = *(int **)(DAT_14cb0d2b0 + 0x58);
                  if (local_1280 != (wchar_t *)0x0) {
                    sVar29 = wcslen(local_1280);
                    uVar15 = (int)sVar29;
                  }
                  local_1398 = &DAT_149e1e308;
                  local_13a0 = (int *)&DAT_14a33354c;
                  local_13a8 = piVar40;
                  local_1278 = uVar15;
                  FUN_147d8e230(lVar33,0xa0000000,SUB84((double)((float)(iVar12 - iVar18) * 0.4),0))
                  ;
                  if (local_1268 != (wchar_t *)0x0) {
                    FUN_1400020a8();
                  }
                  lVar41 = local_1380;
                  FUN_14376dc88(lVar33,local_1380,0);
                  local_1268 = (wchar_t *)
                               (double)(uStack_1020._4_4_ * fVar44 +
                                       (float)uStack_1020 * 0.0 +
                                       fStack_1024 * 0.0 + local_1028 * 1.0);
                  dStack_1260 = (double)(uStack_1020._4_4_ * fVar46 +
                                        (float)uStack_1020 * 0.0 +
                                        fStack_1024 * 1.0 + local_1028 * 0.0);
                  local_1258 = (double)(uStack_1020._4_4_ * fVar49 +
                                       (float)uStack_1020 * 1.0 +
                                       fStack_1024 * 0.0 + local_1028 * 0.0);
                  dStack_1250 = (double)(uStack_1020._4_4_ * fVar50 +
                                        (float)uStack_1020 * 0.0 +
                                        fStack_1024 * 0.0 + local_1028 * 0.0);
                  local_1248 = (double)(fStack_100c * fVar44 +
                                       fStack_1010 * 0.0 +
                                       local_1018._4_4_ * 0.0 + (float)local_1018 * 1.0);
                  local_1240 = (double)(fStack_100c * fVar46 +
                                       fStack_1010 * 0.0 +
                                       local_1018._4_4_ * 1.0 + (float)local_1018 * 0.0);
                  local_1238 = (double)(fStack_100c * fVar49 +
                                       fStack_1010 * 1.0 +
                                       local_1018._4_4_ * 0.0 + (float)local_1018 * 0.0);
                  local_1230 = (double)(fStack_100c * fVar50 +
                                       fStack_1010 * 0.0 +
                                       local_1018._4_4_ * 0.0 + (float)local_1018 * 0.0);
                  local_1228 = (double)(fStack_ffc * fVar44 +
                                       fStack_1000 * 0.0 + fStack_1004 * 0.0 + local_1008 * 1.0);
                  local_1220 = (double)(fStack_ffc * fVar46 +
                                       fStack_1000 * 0.0 + fStack_1004 * 1.0 + local_1008 * 0.0);
                  local_1218 = (double)(fStack_ffc * fVar49 +
                                       fStack_1000 * 1.0 + fStack_1004 * 0.0 + local_1008 * 0.0);
                  local_1210 = (double)(fStack_ffc * fVar50 +
                                       fStack_1000 * 0.0 + fStack_1004 * 0.0 + local_1008 * 0.0);
                  local_1208 = (double)(fStack_fec * fVar44 +
                                       fStack_ff0 * 0.0 + fStack_ff4 * 0.0 + local_ff8 * 1.0);
                  local_1200 = (double)(fStack_fec * fVar46 +
                                       fStack_ff0 * 0.0 + fStack_ff4 * 1.0 + local_ff8 * 0.0);
                  local_11f8 = (double)(fStack_fec * fVar49 +
                                       fStack_ff0 * 1.0 + fStack_ff4 * 0.0 + local_ff8 * 0.0);
                  local_11f0 = (double)(fStack_fec * fVar50 +
                                       fStack_ff0 * 0.0 + fStack_ff4 * 0.0 + local_ff8 * 0.0);
                  FUN_147a36eba(&local_12b8,&local_1268,0xfff39c12);
                  plVar21 = local_1358;
                  puVar42 = (undefined8 *)(*(longlong *)(lVar41 + 0x70) + 0xfU & 0xfffffffffffffff0)
                  ;
                  puVar27 = puVar42 + 0x14;
                  if (*(undefined8 **)(lVar41 + 0x78) < puVar27) {
                    FUN_140023dd8(local_1358,0xb0);
                    puVar42 = (undefined8 *)(*plVar21 + 0xfU & 0xfffffffffffffff0);
                    puVar27 = puVar42 + 0x14;
                  }
                  *(undefined8 **)(lVar41 + 0x70) = puVar27;
                  *puVar42 = &PTR_FUN_14a333598;
                  puVar42[2] = 0;
                  *(undefined1 *)(puVar42 + 3) = 1;
                  puVar42[8] = 0;
                  puVar42[9] = 0x3f80000000000000;
                  puVar42[4] = 0;
                  puVar42[5] = 0;
                  puVar42[6] = 0;
                  iVar12 = *(int *)(lVar41 + 0xa0);
                  *(uint *)(lVar41 + 0xa0) = iVar12 + 1U;
                  if (*(uint *)(lVar41 + 0xa4) < iVar12 + 1U) {
                    FUN_1448cfae8(local_1318,iVar12);
                  }
                  *(undefined8 **)(*local_1318 + (longlong)iVar12 * 8) = puVar42;
                  puVar42[6] = CONCAT44(uStack_154,local_158);
                  puVar42[10] = local_f88;
                  *(undefined4 *)(puVar42 + 0xb) = uStack_f80;
                  fVar45 = (float)*(uint *)(CONCAT44(uStack_154,local_158) + 0x84);
                  *(float *)(puVar42 + 8) = fVar45;
                  *(float *)((longlong)puVar42 + 0x44) = fVar45;
                  *(float *)(puVar42 + 9) = 1.0 / fVar45;
                  *(float *)((longlong)puVar42 + 0x4c) = 1.0 / fVar45;
                  *(float *)(puVar42 + 0xc) = local_1028;
                  *(float *)((longlong)puVar42 + 100) = fStack_1024;
                  *(float *)(puVar42 + 0xd) = (float)uStack_1020;
                  *(float *)((longlong)puVar42 + 0x6c) = uStack_1020._4_4_;
                  *(float *)(puVar42 + 0xe) = (float)local_1018;
                  *(float *)((longlong)puVar42 + 0x74) = local_1018._4_4_;
                  *(float *)(puVar42 + 0xf) = fStack_1010;
                  *(float *)((longlong)puVar42 + 0x7c) = fStack_100c;
                  *(float *)(puVar42 + 0x10) = local_1008;
                  *(float *)((longlong)puVar42 + 0x84) = fStack_1004;
                  *(float *)(puVar42 + 0x11) = fStack_1000;
                  *(float *)((longlong)puVar42 + 0x8c) = fStack_ffc;
                  *(float *)(puVar42 + 0x12) = local_ff8;
                  *(float *)((longlong)puVar42 + 0x94) = fStack_ff4;
                  *(float *)(puVar42 + 0x13) = fStack_ff0;
                  *(float *)((longlong)puVar42 + 0x9c) = fStack_fec;
                  param_1 = local_1378;
                  if ((char)piVar4[0x4e1c] == '\x01') {
                    uVar19 = *(undefined8 *)
                              (&DAT_14ca8c1f0 +
                              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)piVar4[0xc24] * 2) *
                              8);
                    FUN_145f366b8();
                    FUN_1448e935e(uVar19,&local_1268,&DAT_14ca6aab8,0);
                    FUN_145f366b8();
                    FUN_1472ea582(lVar41,piVar4 + 0x4e1c,puVar42 + 2);
                    iVar18 = *(int *)(puVar42[6] + 0x84);
                    iVar32 = *(int *)(puVar42[6] + 0x88);
                    iVar12 = iVar32 + 7;
                    iVar32 = iVar32 + 0xe;
                    if (-1 < iVar12) {
                      iVar32 = iVar12;
                    }
                    iVar12 = iVar18 + 7;
                    iVar18 = iVar18 + 0xe;
                    if (-1 < iVar12) {
                      iVar18 = iVar12;
                    }
                    local_1280 = (wchar_t *)CONCAT44(iVar32 >> 3,iVar18 >> 3);
                    local_1278 = 1;
                    local_13a8 = (int *)&local_1280;
                    FUN_147338d7f(lVar41,&local_1269,&local_1268);
                    param_1 = local_1378;
                  }
                }
                if (((byte)local_1370 != '\0') && (*(longlong *)(piVar4 + 0x4dd2) != 0)) {
                  local_1268 = (wchar_t *)
                               (double)(fStack_ebc * fVar44 +
                                       fStack_ec0 * 0.0 + fStack_ec4 * 0.0 + local_ec8 * 1.0);
                  dStack_1260 = (double)(fStack_ebc * fVar46 +
                                        fStack_ec0 * 0.0 + fStack_ec4 * 1.0 + local_ec8 * 0.0);
                  local_1258 = (double)(fStack_ebc * fVar49 +
                                       fStack_ec0 * 1.0 + fStack_ec4 * 0.0 + local_ec8 * 0.0);
                  dStack_1250 = (double)(fStack_ebc * fVar50 +
                                        fStack_ec0 * 0.0 + fStack_ec4 * 0.0 + local_ec8 * 0.0);
                  local_1248 = (double)(fStack_eac * fVar44 +
                                       fStack_eb0 * 0.0 + fStack_eb4 * 0.0 + local_eb8 * 1.0);
                  local_1240 = (double)(fStack_eac * fVar46 +
                                       fStack_eb0 * 0.0 + fStack_eb4 * 1.0 + local_eb8 * 0.0);
                  local_1238 = (double)(fStack_eac * fVar49 +
                                       fStack_eb0 * 1.0 + fStack_eb4 * 0.0 + local_eb8 * 0.0);
                  local_1230 = (double)(fStack_eac * fVar50 +
                                       fStack_eb0 * 0.0 + fStack_eb4 * 0.0 + local_eb8 * 0.0);
                  local_1228 = (double)(fStack_e9c * fVar44 +
                                       fStack_ea0 * 0.0 + fStack_ea4 * 0.0 + local_ea8 * 1.0);
                  local_1220 = (double)(fStack_e9c * fVar46 +
                                       fStack_ea0 * 0.0 + fStack_ea4 * 1.0 + local_ea8 * 0.0);
                  local_1218 = (double)(fStack_e9c * fVar49 +
                                       fStack_ea0 * 1.0 + fStack_ea4 * 0.0 + local_ea8 * 0.0);
                  local_1210 = (double)(fStack_e9c * fVar50 +
                                       fStack_ea0 * 0.0 + fStack_ea4 * 0.0 + local_ea8 * 0.0);
                  local_1208 = (double)(fStack_e8c * fVar44 +
                                       fStack_e90 * 0.0 + fStack_e94 * 0.0 + local_e98 * 1.0);
                  local_1200 = (double)(fStack_e8c * fVar46 +
                                       fStack_e90 * 0.0 + fStack_e94 * 1.0 + local_e98 * 0.0);
                  local_11f8 = (double)(fStack_e8c * fVar49 +
                                       fStack_e90 * 1.0 + fStack_e94 * 0.0 + local_e98 * 0.0);
                  local_11f0 = (double)(fStack_e8c * fVar50 +
                                       fStack_e90 * 0.0 + fStack_e94 * 0.0 + local_e98 * 0.0);
                  FUN_147a36eba(&local_12b8,&local_1268,0xff0000ff);
                  plVar21 = local_1358;
                  puVar42 = (undefined8 *)(*(longlong *)(lVar41 + 0x70) + 0xfU & 0xfffffffffffffff0)
                  ;
                  puVar27 = puVar42 + 0x14;
                  if (*(undefined8 **)(lVar41 + 0x78) < puVar27) {
                    FUN_140023dd8(local_1358,0xb0);
                    puVar42 = (undefined8 *)(*plVar21 + 0xfU & 0xfffffffffffffff0);
                    puVar27 = puVar42 + 0x14;
                  }
                  *(undefined8 **)(lVar41 + 0x70) = puVar27;
                  *puVar42 = &PTR_FUN_14a333598;
                  puVar42[2] = 0;
                  *(undefined1 *)(puVar42 + 3) = 1;
                  puVar42[8] = 0;
                  puVar42[9] = 0x3f80000000000000;
                  puVar42[4] = 0;
                  puVar42[5] = 0;
                  puVar42[6] = 0;
                  iVar12 = *(int *)(lVar41 + 0xa0);
                  *(uint *)(lVar41 + 0xa0) = iVar12 + 1U;
                  if (*(uint *)(lVar41 + 0xa4) < iVar12 + 1U) {
                    FUN_1448cfae8(local_1318,iVar12);
                  }
                  *(undefined8 **)(*local_1318 + (longlong)iVar12 * 8) = puVar42;
                  puVar42[6] = *(undefined8 *)(piVar4 + 0x4dd2);
                  puVar42[8] = uStack_f18;
                  puVar42[9] = uStack_f10;
                  *(undefined4 *)(puVar42 + 0xb) = uStack_e80;
                  puVar42[10] = local_e88;
                  *(float *)(puVar42 + 0xc) = local_ec8;
                  *(float *)((longlong)puVar42 + 100) = fStack_ec4;
                  *(float *)(puVar42 + 0xd) = fStack_ec0;
                  *(float *)((longlong)puVar42 + 0x6c) = fStack_ebc;
                  *(float *)(puVar42 + 0xe) = local_eb8;
                  *(float *)((longlong)puVar42 + 0x74) = fStack_eb4;
                  *(float *)(puVar42 + 0xf) = fStack_eb0;
                  *(float *)((longlong)puVar42 + 0x7c) = fStack_eac;
                  *(float *)(puVar42 + 0x10) = local_ea8;
                  *(float *)((longlong)puVar42 + 0x84) = fStack_ea4;
                  *(float *)(puVar42 + 0x11) = fStack_ea0;
                  *(float *)((longlong)puVar42 + 0x8c) = fStack_e9c;
                  *(float *)(puVar42 + 0x12) = local_e98;
                  *(float *)((longlong)puVar42 + 0x94) = fStack_e94;
                  *(float *)(puVar42 + 0x13) = fStack_e90;
                  *(float *)((longlong)puVar42 + 0x9c) = fStack_e8c;
                  if ((char)piVar4[0x4e1c] == '\x01') {
                    uVar19 = *(undefined8 *)
                              (&DAT_14ca8c1f0 +
                              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)piVar4[0xc24] * 2) *
                              8);
                    FUN_145f366b8();
                    FUN_1448e935e(uVar19,&local_1268,&DAT_14ca6aab8,0);
                    FUN_145f366b8();
                    FUN_1472ea582(lVar41,piVar4 + 0x4e1c,puVar42 + 2);
                    iVar18 = *(int *)(puVar42[6] + 0x84);
                    iVar32 = *(int *)(puVar42[6] + 0x88);
                    iVar12 = iVar32 + 7;
                    iVar32 = iVar32 + 0xe;
                    if (-1 < iVar12) {
                      iVar32 = iVar12;
                    }
                    iVar12 = iVar18 + 7;
                    iVar18 = iVar18 + 0xe;
                    if (-1 < iVar12) {
                      iVar18 = iVar12;
                    }
                    local_1280 = (wchar_t *)CONCAT44(iVar32 >> 3,iVar18 >> 3);
                    local_1278 = 1;
                    local_13a8 = (int *)&local_1280;
                    FUN_147338d7f(lVar41,&local_1269,&local_1268);
                  }
                }
                local_12b8 = &PTR_FUN_14a217cb0;
                if (local_12a0 != (undefined8 *)0x0) {
                  piVar4 = (int *)(local_12a0 + 1);
                  *piVar4 = *piVar4 + -1;
                  if (*piVar4 == 0) {
                    (**(code **)*local_12a0)(local_12a0,1);
                  }
                }
              }
            }
            uVar30 = local_12f0 + 1;
            uVar13 = local_1348;
          } while ((longlong)uVar30 < (longlong)(int)local_5a0);
        }
      }
      if (local_5a8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      lVar41 = local_570;
      if (local_570 != 0) {
        LOCK();
        puVar1 = (uint *)(local_570 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_570 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar38 = *(byte *)(local_570 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10,8);
            plVar23[1] = lVar41;
            plVar21 = DAT_14ca843c0;
            plVar28 = DAT_14ca843c8;
            if ((bVar38 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar21;
                LOCK();
                bVar43 = plVar21 != DAT_14ca843c0;
                plVar28 = plVar23;
                if (bVar43) {
                  plVar21 = DAT_14ca843c0;
                  plVar28 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar28;
                UNLOCK();
              } while (bVar43);
            }
            else {
              do {
                *plVar23 = (longlong)plVar28;
                LOCK();
                bVar43 = plVar28 != DAT_14ca843c8;
                plVar21 = plVar23;
                if (bVar43) {
                  plVar28 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar43);
            }
          }
        }
      }
      goto LAB_1430ff92d;
    }
  }
  uVar13 = 0;
LAB_1430ff92d:
  if ((local_f0 ^ (ulonglong)auStack_13c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffff01;
}



// FUNCTION 14310245e FUN_14310245e body=69 status=ok
// SIG undefined FUN_14310245e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310245e(void)

{
  _DAT_14ca6ade8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431024a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6adf0,1);
  return;
}



// FUNCTION 1431024a3 FUN_1431024a3 body=69 status=ok
// SIG undefined FUN_1431024a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431024a3(void)

{
  _DAT_14ca6adf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431024e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6ae00,1);
  return;
}



// FUNCTION 1431024e8 FUN_1431024e8 body=69 status=ok
// SIG undefined FUN_1431024e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431024e8(void)

{
  _DAT_14ca6ae08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310252a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6ae10,1);
  return;
}



// FUNCTION 14310252d FUN_14310252d body=69 status=ok
// SIG undefined FUN_14310252d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310252d(void)

{
  _DAT_14ca6ae18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310256f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6ae20,1);
  return;
}



// FUNCTION 143102572 FUN_143102572 body=69 status=ok
// SIG undefined FUN_143102572(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143102572(void)

{
  _DAT_14ca6ae28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431025b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6ae30,1);
  return;
}



// FUNCTION 1431025b7 FUN_1431025b7 body=69 status=ok
// SIG undefined FUN_1431025b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431025b7(void)

{
  _DAT_14ca6ae38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431025f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6ae40,1);
  return;
}



// FUNCTION 1431025fc FUN_1431025fc body=69 status=ok
// SIG undefined FUN_1431025fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431025fc(void)

{
  _DAT_14ca6ae48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310263e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6ae50,1);
  return;
}



// FUNCTION 143102641 FUN_143102641 body=69 status=ok
// SIG undefined FUN_143102641(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143102641(void)

{
  _DAT_14ca6ae58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143102683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6ae60,1);
  return;
}



// FUNCTION 143102686 FUN_143102686 body=69 status=ok
// SIG undefined FUN_143102686(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143102686(void)

{
  _DAT_14ca6ae68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431026c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6ae70,1);
  return;
}



// FUNCTION 1431026cb FUN_1431026cb body=69 status=ok
// SIG undefined FUN_1431026cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431026cb(void)

{
  _DAT_14ca6ae78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310270d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6ae80,1);
  return;
}



// FUNCTION 143102710 FUN_143102710 body=69 status=ok
// SIG undefined FUN_143102710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143102710(void)

{
  _DAT_14ca6ae88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143102752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6ae90,1);
  return;
}



// FUNCTION 143102755 FUN_143102755 body=69 status=ok
// SIG undefined FUN_143102755(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143102755(void)

{
  _DAT_14ca6aea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143102797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6aea8,1);
  return;
}



// FUNCTION 14310279a FUN_14310279a body=69 status=ok
// SIG undefined FUN_14310279a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310279a(void)

{
  _DAT_14ca6aeb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431027dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6aeb8,1);
  return;
}



// FUNCTION 1431027df FUN_1431027df body=69 status=ok
// SIG undefined FUN_1431027df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431027df(void)

{
  _DAT_14ca6aec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143102821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6aed0,1);
  return;
}



// FUNCTION 143102824 FUN_143102824 body=69 status=ok
// SIG undefined FUN_143102824(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143102824(void)

{
  _DAT_14ca6aee0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143102866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6aee8,1);
  return;
}



// FUNCTION 143102869 FUN_143102869 body=69 status=ok
// SIG undefined FUN_143102869(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143102869(void)

{
  _DAT_14ca6aef0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431028ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6aef8,1);
  return;
}



// FUNCTION 1431028fd FUN_1431028fd body=240 status=ok
// SIG undefined FUN_1431028fd(void)

void FUN_1431028fd(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14ca6b568 = &PTR_FUN_14a3335a0;
  FUN_144725486(&DAT_14ca6b568);
  lVar4 = DAT_14ca6b578;
  DAT_14ca6b568 = &PTR_FUN_14a38cff0;
  if (DAT_14ca6b578 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14ca6b578 + 8);
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
  DAT_14ca6b568 = &PTR_FUN_14a38cd70;
  DAT_14ca6b576 = 2;
  if ((DAT_14ca6b570 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1431029ed FUN_1431029ed body=47 status=ok
// SIG undefined FUN_1431029ed(void)

void FUN_1431029ed(void)

{
  DAT_14ca6b580 = &PTR_FUN_14a333610;
  FUN_144725486(&DAT_14ca6b580);
  FUN_14003f39a(&DAT_14ca6b580);
  return;
}



// FUNCTION 143102a1c FUN_143102a1c body=691 status=ok
// SIG undefined FUN_143102a1c(void)

void FUN_143102a1c(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_158;
  undefined3 uStack_154;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar3 = FUN_14476842e(param_1,&DAT_14ca63b20,L"WhiteDummy",2);
  param_6[6] = uVar3;
  FUN_144980f13(param_6 + 8,param_2,param_3);
  lVar4 = FUN_1447e4f80();
  cVar7 = '\x02';
  if (*(char *)(lVar4 + 0x41) != '\x03') {
    cVar7 = *(char *)(lVar4 + 0x41);
  }
  *param_6 = *(undefined8 *)(param_2 + 0x18);
  *(char *)(param_6 + 1) = cVar7;
  *(undefined4 *)(param_6 + 0x3c) = *(undefined4 *)(param_4 + 0x70);
  *(undefined4 *)((longlong)param_6 + 0x1e4) = DAT_14c760adc;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar9 + 0x24;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x130);
    puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar9 + 0x24;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar9 = &PTR_FUN_14a249050;
  puVar5 = puVar9 + 2;
  *(undefined4 *)(puVar9 + 2) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0x12) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x94) = 0;
  *(undefined4 *)(puVar9 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x9c) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar9 + 0xa4) = 0;
  *(undefined4 *)(puVar9 + 0x15) = 0;
  *(undefined4 *)((longlong)puVar9 + 0xac) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar9 + 0xb4) = 0;
  *(undefined4 *)(puVar9 + 0x17) = 0;
  *(undefined4 *)((longlong)puVar9 + 0xbc) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0x18) = 0;
  *(undefined4 *)((longlong)puVar9 + 0xc4) = 0;
  *(undefined4 *)(puVar9 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar9 + 0xcc) = 0x3f800000;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar9;
  local_168 = 0;
  FUN_1449e488f(&local_158,param_2,param_5,0);
  memcpy(puVar5,&local_158,0x108);
  lVar4 = FUN_1449dab10();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar8 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x50);
    puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar8 + 9;
  }
  *puVar1 = (ulonglong)puVar9;
  puVar8[1] = uVar3;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_14a1fb9b8;
  lVar6 = FUN_1449dab10();
  puVar8[3] = puVar5;
  lVar4 = *(longlong *)(lVar6 + 0x48);
  puVar8[4] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar8[5] = lVar6;
  puVar8[6] = 0;
  *(undefined4 *)(puVar8 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar8 + 0x3c) = 0;
  *puVar8 = &PTR_FUN_14a249058;
  puVar8[8] = puVar5;
  iVar2 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar2 + 1U) {
    FUN_1402aa76e(param_1 + 0x1a8,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar2 * 8) = puVar8;
  *(int *)(puVar8 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  lVar4 = FUN_1449dab10();
  cVar7 = '\x02';
  if (*(char *)(lVar4 + 0x41) != '\x03') {
    cVar7 = *(char *)(lVar4 + 0x41);
  }
  param_6[2] = puVar8;
  *(char *)(param_6 + 3) = cVar7;
  *(uint *)((longlong)param_6 + 0x1c) = CONCAT31(uStack_154,local_158._3_1_);
  *(undefined4 *)((longlong)param_6 + 0x19) = local_158;
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143102cf4 FUN_143102cf4 body=32486 status=ok
// SIG undefined FUN_143102cf4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143102cf4(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ushort uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined8 uVar34;
  char cVar35;
  byte bVar36;
  byte bVar37;
  bool bVar38;
  undefined1 uVar39;
  char cVar40;
  byte bVar41;
  undefined4 uVar42;
  uint uVar43;
  DWORD DVar44;
  DWORD DVar45;
  undefined8 *puVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  undefined8 uVar49;
  float *pfVar50;
  longlong *plVar51;
  longlong *plVar52;
  int iVar53;
  uint uVar54;
  int iVar55;
  int iVar56;
  uint uVar57;
  uint *puVar58;
  undefined *puVar59;
  float *pfVar60;
  undefined2 *puVar61;
  int *piVar62;
  undefined1 *puVar63;
  int iVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  undefined6 uVar67;
  longlong lVar68;
  undefined8 *puVar69;
  undefined2 uVar70;
  uint *puVar71;
  size_t _Size;
  undefined8 *puVar72;
  uint uVar73;
  longlong lVar74;
  longlong lVar75;
  int iVar76;
  longlong lVar77;
  longlong *plVar78;
  undefined8 *puVar79;
  bool bVar80;
  float fVar81;
  float fVar82;
  undefined4 uVar83;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float fVar84;
  double dVar85;
  double dVar86;
  double dVar87;
  double dVar88;
  double dVar89;
  float fVar90;
  float fVar91;
  double dVar92;
  double dVar93;
  undefined1 local_2358 [32];
  wchar_t *local_2338;
  wchar_t *local_2330;
  undefined8 uStack_2328;
  char *local_2320;
  code *local_2318;
  code *local_2310;
  undefined8 *local_2308;
  undefined1 *local_2300;
  undefined1 *local_22f8;
  undefined1 *local_22f0;
  undefined4 local_22e8;
  undefined8 local_22e0;
  byte local_22c9;
  ulonglong *local_22c8;
  ulonglong local_22c0;
  byte local_22b1;
  longlong local_22b0;
  undefined2 local_22a2;
  longlong *local_22a0;
  double local_2298;
  uint local_2290;
  uint local_228c;
  longlong local_2288;
  uint local_227c;
  undefined1 local_2278 [16];
  undefined1 local_2268 [24];
  longlong local_2250;
  undefined8 *local_2248;
  uint local_223c;
  longlong local_2238;
  char *local_2230;
  longlong local_2228;
  undefined8 local_2220;
  longlong *local_2218;
  int local_220c;
  undefined1 local_2208 [16];
  ulonglong local_21f8;
  undefined4 uStack_21f0;
  undefined4 uStack_21ec;
  double local_21e8;
  double local_21e0;
  undefined1 local_21d8 [16];
  double local_21c8;
  longlong *local_21c0;
  longlong *local_21b8;
  longlong local_21b0;
  undefined8 *local_21a8;
  double local_21a0;
  double local_2198;
  ulonglong local_2190;
  int *local_2188;
  longlong local_2180;
  ulonglong local_2178;
  undefined8 local_2170;
  ulonglong local_2168;
  undefined8 *local_2160;
  undefined8 *local_2158;
  double local_2150;
  int local_2148;
  int local_2144;
  uint local_2140;
  uint local_213c;
  undefined1 local_2138 [16];
  undefined1 local_2128 [16];
  longlong *local_2118;
  longlong local_2110;
  undefined8 local_2108;
  undefined8 *local_2100;
  longlong local_20f8;
  ulonglong local_20f0;
  longlong local_20e8;
  longlong *local_20e0;
  longlong local_20d8;
  longlong local_20d0;
  ulonglong *local_20c8;
  undefined8 local_20c0;
  uint local_20b8;
  uint uStack_20b4;
  uint local_20b0;
  uint local_20a8;
  uint uStack_20a4;
  undefined4 local_20a0;
  int local_209c;
  undefined8 local_2098;
  undefined8 uStack_2090;
  undefined8 local_2088;
  undefined8 *local_2080;
  undefined1 local_2069;
  undefined8 local_2068;
  undefined8 uStack_2060;
  uint local_2058;
  uint uStack_2054;
  undefined2 uStack_2050;
  undefined2 uStack_204e;
  undefined4 uStack_204c;
  undefined8 local_2048;
  undefined8 uStack_2040;
  uint local_2038;
  undefined4 local_2028;
  undefined4 uStack_2024;
  undefined4 uStack_2020;
  undefined4 uStack_201c;
  undefined8 local_2018;
  undefined8 uStack_2010;
  undefined8 local_2008;
  undefined8 uStack_2000;
  undefined8 local_1ff8;
  undefined8 uStack_1ff0;
  undefined1 local_1fe8 [16];
  undefined8 local_1fd8;
  undefined4 uStack_1fd0;
  undefined4 uStack_1fcc;
  undefined1 local_1fc8 [240];
  float *local_1ed8;
  ulonglong uStack_1ec8;
  undefined8 local_1eb8;
  undefined8 uStack_1eb0;
  undefined8 uStack_1ea8;
  undefined8 local_1ea0;
  undefined8 local_1e98;
  undefined8 uStack_1e90;
  undefined1 local_1e88 [96];
  undefined1 *local_1e28;
  undefined8 local_1e20;
  undefined8 local_1e18;
  undefined8 uStack_1e10;
  undefined8 local_1e08;
  undefined8 local_1df8;
  undefined4 uStack_1df0;
  uint uStack_1dec;
  uint local_1de8;
  uint uStack_1de4;
  uint uStack_1de0;
  uint uStack_1ddc;
  undefined1 local_1dd8 [16];
  undefined1 local_1dc8 [16];
  undefined1 local_1db8 [16];
  double local_1da8;
  double dStack_1da0;
  double local_1d98;
  double dStack_1d90;
  double local_1d88;
  double dStack_1d80;
  undefined1 auStack_1d78 [16];
  undefined1 local_1d68 [16];
  double local_1d58;
  double local_1d50;
  double local_1d48;
  double dStack_1d40;
  double local_1d38;
  double local_1d30;
  double local_1d28;
  double local_1d20;
  undefined8 *local_1d18;
  undefined8 local_1d08;
  undefined8 uStack_1d00;
  undefined8 local_1cf8;
  undefined8 local_1cf0;
  undefined8 local_1ce8;
  undefined8 local_1cd8;
  undefined8 uStack_1cd0;
  undefined8 local_1cc8;
  longlong local_1bf8;
  undefined8 local_1be8;
  longlong local_1ad8;
  undefined8 local_1ac8;
  undefined1 local_1a78;
  undefined4 local_1a74;
  undefined8 local_1a70;
  ushort local_1a68;
  undefined8 local_1a58;
  float fStack_1a50;
  undefined4 uStack_1a4c;
  uint uStack_1a48;
  uint uStack_1a44;
  uint uStack_1a40;
  uint uStack_1a3c;
  undefined8 local_1a38;
  uint uStack_1a30;
  undefined2 uStack_1a2c;
  undefined2 uStack_1a2a;
  undefined2 uStack_1a28;
  undefined1 uStack_1a26;
  undefined1 uStack_1a25;
  undefined1 uStack_1a24;
  undefined1 uStack_1a23;
  undefined2 uStack_1a22;
  undefined8 uStack_1a20;
  undefined2 *local_1928;
  undefined8 local_1918;
  undefined8 local_1908 [6];
  undefined8 local_18d8;
  undefined8 uStack_18d0;
  undefined4 local_1878;
  undefined4 uStack_1874;
  undefined4 uStack_1870;
  undefined4 uStack_186c;
  undefined4 local_1868;
  undefined4 uStack_1864;
  undefined4 uStack_1860;
  undefined4 uStack_185c;
  undefined4 local_1858;
  undefined4 uStack_1854;
  undefined4 uStack_1850;
  undefined4 uStack_184c;
  undefined8 local_1848;
  undefined8 uStack_1840;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x143102d0a;
  local_f0 = DAT_14c707940 ^ (ulonglong)local_2358;
  local_21b0 = param_1 + 0x98;
  lVar68 = *(longlong *)(param_1 + 8);
  local_20e8 = param_3;
  cVar35 = FUN_140047f5c();
  if (((((lVar68 != 0) && (cVar35 != '\0')) && (DAT_14c760aa8 != 0)) &&
      (((*(byte *)(param_1 + 0xf5) & 8) != 0 && (0 < *(int *)(lVar68 + 0x4d18))))) &&
     ((*(char *)(*(longlong *)(lVar68 + 0x4d10) + 0x6c) == '\x01' &&
      (0.0 < *(float *)(*(longlong *)(lVar68 + 0x4d10) + 0x98))))) {
    local_1e28 = (undefined1 *)0x0;
    local_1e20 = 0x200000000;
    uVar73 = *(uint *)(param_1 + 0x3f0);
    if ((int)uVar73 < 1) {
      if ((int)uVar73 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar73);
      }
    }
    else {
      local_1e20 = CONCAT44(2,uVar73);
      if (2 < uVar73) {
        FUN_143118da4(local_1e88);
      }
      puVar63 = local_1e88;
      if (local_1e28 != (undefined1 *)0x0) {
        puVar63 = local_1e28;
      }
      FUN_143118d8c(puVar63,uVar73);
    }
    lVar68 = *(longlong *)(param_1 + 8);
    puVar71 = (uint *)(lVar68 + 0x3560);
    iVar64 = *(int *)(lVar68 + 0x3578);
    local_22b0 = param_1;
    local_2288 = param_2;
    if (iVar64 == 0) {
      uVar47 = 1;
      uVar65 = 0;
      iVar76 = 0;
      iVar53 = 0;
    }
    else {
      puVar58 = *(uint **)(lVar68 + 0x3570);
      if (*(uint **)(lVar68 + 0x3570) == (uint *)0x0) {
        puVar58 = puVar71;
      }
      uVar73 = *puVar58;
      if (uVar73 == 0) {
        iVar76 = iVar64 + 0x1e;
        if (-1 < iVar64 + -1) {
          iVar76 = iVar64 + -1;
        }
        uVar65 = 0;
        uVar47 = (ulonglong)(uint)(iVar76 >> 5);
        if (iVar76 >> 5 < 1) {
          uVar47 = uVar65;
        }
        iVar76 = 0;
        do {
          if (uVar47 == uVar65) goto LAB_1431033a4;
          iVar76 = iVar76 + 0x20;
          uVar73 = puVar58[uVar65 + 1];
          uVar65 = uVar65 + 1;
        } while (uVar73 == 0);
      }
      else {
        uVar65 = 0;
        iVar76 = 0;
      }
      uVar47 = (ulonglong)(-uVar73 & uVar73);
      uVar66 = uVar47 * 2 + 1;
      lVar77 = 0x3f;
      if (uVar66 != 0) {
        for (; uVar66 >> lVar77 == 0; lVar77 = lVar77 + -1) {
        }
      }
      iVar53 = (iVar76 - ((uint)lVar77 ^ 0x3f)) + 0x3e;
      if (iVar64 <= iVar53) {
        iVar53 = iVar64;
      }
    }
    if (iVar53 < iVar64) {
      uVar73 = 0xffffffff;
      local_2208._0_8_ = lVar68;
      local_2268._0_8_ = puVar71;
      do {
        lVar77 = *(longlong *)(lVar68 + 0x3550) + (longlong)iVar53 * 0x40;
        fVar81 = *(float *)(*(longlong *)(lVar68 + 0x3550) + 0x20 + (longlong)iVar53 * 0x40);
        if ((((1e-05 <= fVar81 * fVar81) ||
             (1e-05 <= *(float *)(lVar77 + 0x24) * *(float *)(lVar77 + 0x24))) ||
            (1e-05 <= *(float *)(lVar77 + 0x28) * *(float *)(lVar77 + 0x28))) &&
           (0 < *(int *)(param_1 + 0x3f0))) {
          local_2278._0_4_ = uVar73;
          local_22c8 = (ulonglong *)CONCAT44(local_22c8._4_4_,iVar76);
          lVar68 = *(longlong *)(lVar77 + 0x30);
          lVar77 = 0;
          local_22c0 = uVar65;
          do {
            lVar74 = lVar77 * 0x13c10 + *(longlong *)(param_1 + 1000);
            puVar63 = local_1e28;
            if (local_1e28 == (undefined1 *)0x0) {
              puVar63 = local_1e88;
            }
            cVar35 = FUN_1400bd22a(lVar68,lVar74,0);
            if (cVar35 != '\0') {
              plVar78 = (longlong *)(puVar63 + lVar77 * 0x30);
              plVar52 = *(longlong **)(lVar68 + 0x28);
              if (1e-08 < *(float *)((longlong)plVar52 + 0x154)) {
                bVar36 = FUN_144abb888(lVar74,lVar68,
                                       (longlong)*(int *)(lVar68 + 0x34) * 0x68 +
                                       *(longlong *)(param_1 + 0x4d8),*(undefined8 *)(param_1 + 8));
                if (DAT_14ca6ae98 == 0) {
                  bVar37 = 0;
                }
                else {
                  bVar37 = (**(code **)(*plVar52 + 0x48))(plVar52);
                }
                if (((bVar36 | bVar37) == 1) &&
                   ((**(code **)(*plVar52 + 0x10))(plVar52,&local_1a58),
                   dVar9 = *(double *)(lVar74 + 0x1058) - (double)CONCAT44(uStack_1a44,uStack_1a48),
                   dVar93 = *(double *)(lVar74 + 0x1050) - (double)CONCAT44(uStack_1a4c,fStack_1a50)
                   , dVar10 = *(double *)(lVar74 + 0x1048) - (double)local_1a58,
                   dVar92 = (double)*(float *)(lVar74 + 0x120b8) +
                            (double)CONCAT44(uStack_1a3c,uStack_1a40),
                   dVar9 * dVar9 + dVar10 * dVar10 + dVar93 * dVar93 < dVar92 * dVar92)) {
                  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x4580) == '\x01') &&
                      (*(char *)(lVar74 + 0x3098) == '\x01')) &&
                     ((((*(char *)(lVar74 + 0x23e8) != '\x01' ||
                        (*(char *)(lVar74 + 0x23ea) == '\x01')) &&
                       (cVar35 = FUN_144b1209e(*(undefined8 *)(lVar68 + 0x28),local_21b0),
                       cVar35 == '\x01')) && (DAT_14ca6aec0 != 0)))) {
                    plVar51 = plVar78 + 2;
                    iVar64 = (int)plVar78[3];
                    *(uint *)(plVar78 + 3) = iVar64 + 1U;
                    if (*(uint *)((longlong)plVar78 + 0x1c) < iVar64 + 1U) {
                      FUN_1405f9966(plVar51,iVar64);
                    }
                  }
                  else {
                    iVar64 = (int)plVar78[1];
                    *(uint *)(plVar78 + 1) = iVar64 + 1U;
                    plVar51 = plVar78;
                    if (*(uint *)((longlong)plVar78 + 0xc) < iVar64 + 1U) {
                      FUN_1405f9966(plVar78,iVar64);
                    }
                  }
                  *(longlong *)(*plVar51 + (longlong)iVar64 * 8) = lVar68;
                  param_1 = local_22b0;
                }
              }
              if ((plVar52 == *(longlong **)(lVar74 + 0x13788)) && ((char)plVar52[0x3d] == '\0')) {
                *(byte *)(plVar78 + 5) = *(byte *)((longlong)plVar52 + 0x1d1) & 1;
                lVar74 = *(longlong *)(*(longlong *)(lVar68 + 0x28) + 0x1c0);
                if (lVar74 != 0) {
                  plVar52 = (longlong *)
                            FUN_14485b2b4(lVar74,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8));
                  cVar35 = (**(code **)(*plVar52 + 0xd8))(plVar52);
                  if (cVar35 != '\0') {
                    (**(code **)(**(longlong **)(lVar68 + 0x28) + 0x10))
                              (*(longlong **)(lVar68 + 0x28),&local_1a58);
                    iVar64 = *(int *)(param_1 + 0x3f0);
                    if (0 < iVar64) {
                      lVar74 = 0;
                      lVar75 = 0;
                      do {
                        lVar7 = *(longlong *)(param_1 + 1000);
                        if (*(char *)(*(longlong *)(lVar68 + 0x28) + 0x1e8) == '\0') {
                          uVar49 = *(undefined8 *)(lVar7 + 0x1058 + lVar74);
                          uStack_1a48 = (uint)uVar49;
                          uStack_1a44 = (uint)((ulonglong)uVar49 >> 0x20);
                          plVar52 = (longlong *)(lVar7 + 0x1048 + lVar74);
                          local_1a58 = (undefined8 *)*plVar52;
                          fStack_1a50 = (float)plVar52[1];
                          uStack_1a4c = *(undefined4 *)((longlong)plVar52 + 0xc);
                        }
                        if ((*(byte *)(*(longlong *)(lVar7 + 0x3780 + lVar74) + 0x40 +
                                      (longlong)*(int *)(lVar68 + 0x34) * 0x78) & 1) != 0) {
                          local_1de8 = uStack_1a48;
                          uStack_1de4 = uStack_1a44;
                          uStack_1de0 = uStack_1a40;
                          uStack_1ddc = uStack_1a3c;
                          local_1df8 = local_1a58;
                          uStack_1df0 = fStack_1a50;
                          uStack_1dec = uStack_1a4c;
                          fVar81 = (float)FUN_140426670(lVar7 + lVar74,&local_1df8);
                          if (0.00390625 < fVar81) {
                            if ((*(byte *)(param_1 + 0xea) & 8) != 0) {
                              plVar78[4] = lVar68;
                            }
                            break;
                          }
                          iVar64 = *(int *)(param_1 + 0x3f0);
                        }
                        lVar75 = lVar75 + 1;
                        lVar74 = lVar74 + 0x13c10;
                      } while (lVar75 < iVar64);
                    }
                  }
                }
              }
            }
            lVar77 = lVar77 + 1;
          } while (lVar77 < *(int *)(param_1 + 0x3f0));
          iVar64 = *(int *)(local_2208._0_8_ + 0x3578);
          uVar65 = local_22c0;
          puVar71 = (uint *)local_2268._0_8_;
          lVar68 = local_2208._0_8_;
          param_2 = local_2288;
          iVar76 = (int)local_22c8;
          uVar73 = local_2278._0_4_;
        }
        uVar73 = uVar73 & ~(uint)uVar47;
        puVar58 = *(uint **)(lVar68 + 0x3570);
        if (*(uint **)(lVar68 + 0x3570) == (uint *)0x0) {
          puVar58 = puVar71;
        }
        iVar53 = (int)uVar65;
        lVar77 = (longlong)iVar53;
        uVar54 = puVar58[lVar77] & uVar73;
        if (uVar54 == 0) {
          iVar55 = iVar64 + 0x1e;
          if (-1 < iVar64 + -1) {
            iVar55 = iVar64 + -1;
          }
          iVar55 = iVar55 >> 5;
          iVar56 = iVar55;
          if (iVar55 < iVar53) {
            iVar56 = iVar53;
          }
          if (iVar55 <= iVar53) break;
          lVar74 = 0;
          while( true ) {
            iVar76 = iVar76 + 0x20;
            uVar54 = puVar58[lVar77 + lVar74 + 1];
            if (uVar54 != 0) break;
            lVar74 = lVar74 + 1;
            if (iVar56 - lVar77 == lVar74) goto LAB_1431033a4;
          }
          uVar65 = (ulonglong)(iVar53 + (int)lVar74 + 1);
          uVar73 = 0xffffffff;
        }
        uVar47 = (ulonglong)(-uVar54 & uVar54);
        uVar66 = uVar47 * 2 + 1;
        lVar77 = 0x3f;
        if (uVar66 != 0) {
          for (; uVar66 >> lVar77 == 0; lVar77 = lVar77 + -1) {
          }
        }
        iVar53 = (iVar76 - ((uint)lVar77 ^ 0x3f)) + 0x3e;
      } while (iVar53 < iVar64);
    }
LAB_1431033a4:
    if (0 < *(int *)(param_1 + 0x3f0)) {
      local_2250 = param_2 + 0x178;
      local_22c8 = (ulonglong *)(param_2 + 0x70);
      local_2238 = param_2 + 0x198;
      local_22a0 = (longlong *)(param_2 + 0x98);
      local_2228 = param_2 + 0x168;
      local_21a8 = local_1908;
      lVar68 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_20d8 = -0x37ffffad77750000;
      local_2188 = (int *)(lVar68 + 0xc60);
      local_20e0 = (longlong *)(lVar68 + 0x2b8);
      local_2110 = param_2 + 0x1a8;
      local_20f8 = param_1 + 0x5b0;
      local_21b8 = (longlong *)(param_2 + 0x1b8);
      local_2230 = (char *)(param_2 + 0x4a8);
      local_21c0 = (longlong *)(param_2 + 0x4b0);
      local_20d0 = param_1 + 0x10;
      local_2118 = (longlong *)(param_2 + 0x500);
      lVar68 = 0;
      do {
        lVar77 = *(longlong *)(param_1 + 1000);
        puVar63 = local_1e28;
        if (local_1e28 == (undefined1 *)0x0) {
          puVar63 = local_1e88;
        }
        puVar6 = *(ulonglong **)(param_2 + 0x18);
        iVar64 = *(int *)(lVar77 + 0x1de0 + lVar68 * 0x13c10);
        local_2144 = *(int *)((longlong)puVar6 + 0x17c);
        local_2180 = lVar68;
        if (local_2144 != iVar64) {
          *(int *)((longlong)puVar6 + 0x17c) = iVar64;
          puVar46 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
          puVar79 = puVar46 + 3;
          if ((undefined8 *)puVar6[1] < puVar79) {
            FUN_140023dd8(puVar6,0x20);
            puVar46 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
            puVar79 = puVar46 + 3;
          }
          *puVar6 = (ulonglong)puVar79;
          *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
          *(undefined8 **)puVar6[6] = puVar46;
          puVar6[6] = (ulonglong)(puVar46 + 1);
          uVar42 = *(undefined4 *)((longlong)puVar6 + 0x17c);
          puVar46[1] = 0;
          *puVar46 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar46 + 2) = uVar42;
        }
        uVar65 = lVar77 + lVar68 * 0x13c10;
        puVar59 = (undefined *)(*(longlong *)(uVar65 + 8) + 0x1b8);
        if (*(char *)(*(longlong *)(uVar65 + 8) + 0xd0) == '\0') {
          puVar59 = &DAT_14cb05410;
        }
        iVar76 = (int)*(undefined8 *)(puVar59 + 0x10);
        iVar64 = 1;
        if (1 < iVar76) {
          iVar64 = iVar76;
        }
        iVar76 = (int)((ulonglong)*(undefined8 *)(puVar59 + 0x10) >> 0x20);
        if (iVar76 < 2) {
          iVar76 = 1;
        }
        local_1a58 = (undefined8 *)CONCAT44(iVar76,iVar64);
        local_20c8 = puVar6;
        FUN_140047e94(&local_20a8,&local_1a58,&local_209c);
        local_1a58 = (undefined8 *)
                     CONCAT44(*(int *)(uVar65 + 0x3104) - *(int *)(uVar65 + 0x30fc),
                              *(int *)(uVar65 + 0x3100) - *(int *)(uVar65 + 0x30f8));
        FUN_140047e94(&local_20b8,&local_1a58,&local_209c);
        fVar81 = *(float *)(uVar65 + 0x2170);
        if (*(float *)(uVar65 + 0x2170) <= *(float *)(uVar65 + 0x120c4)) {
          fVar81 = *(float *)(uVar65 + 0x120c4);
        }
        dVar10 = (double)DAT_14c760ab0;
        fVar84 = *(float *)(uVar65 + 0x120b8);
        dVar92 = (double)fVar81 + 9.5;
        dVar93 = (double)fVar84;
        uVar42 = SUB84((double)(int)(local_20b0 - 1) / dVar10,0);
        dVar9 = (double)exp2(uVar42);
        dVar9 = (dVar93 - dVar9 * dVar92) / (dVar93 - dVar92);
        dVar93 = (1.0 - dVar9) / dVar92;
        exp2(uVar42);
        fVar90 = (float)dVar93;
        fVar91 = (float)dVar9;
        logf((float)dVar92 * fVar90 + fVar91);
        logf(fVar81 * fVar90 + fVar91);
        logf(fVar84 * fVar90 + fVar91);
        local_1ed8 = (float *)0x0;
        uStack_1ec8 = 0x1000000010;
        memset(local_1fc8,0,0xf0);
        FUN_144b190e6(&local_1a58,*(undefined4 *)(*(longlong *)(uVar65 + 8) + 0xac));
        local_1fd8 = local_1a58;
        uStack_1fd0 = fStack_1a50;
        uStack_1fcc = 0x3f800000;
        if (1 < (int)DAT_14c760ac4) {
          lVar68 = 1;
          lVar77 = 0x1c;
          iVar64 = -1;
          do {
            FUN_144b190e6(&local_1a58,*(int *)(*(longlong *)(uVar65 + 8) + 0xac) + iVar64);
            fVar81 = fStack_1a50;
            pfVar50 = local_1ed8;
            if (local_1ed8 == (float *)0x0) {
              pfVar50 = (float *)&local_1fd8;
            }
            *(undefined8 **)((longlong)pfVar50 + lVar77 + -0xc) = local_1a58;
            *(float *)((longlong)pfVar50 + lVar77 + -4) = fVar81;
            *(undefined4 *)((longlong)pfVar50 + lVar77) = 0x3f800000;
            lVar68 = lVar68 + 1;
            lVar77 = lVar77 + 0x10;
            iVar64 = iVar64 + -1;
          } while (lVar68 < (int)DAT_14c760ac4);
        }
        puVar6 = local_22c8;
        local_2148 = (&DAT_14ca814b8)
                     [(ulonglong)
                      *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(uVar65 + 0x3090) * 2) * 0xf];
        bVar80 = local_2148 != 1;
        local_22c9 = *(byte *)(*(longlong *)(local_22b0 + 8) + 0x520c) & bVar80;
        lVar68 = *(longlong *)(uVar65 + 0x3108);
        local_22b1 = (lVar68 != 0 && DAT_14c760ab8 != 0) && bVar80;
        if ((lVar68 != 0 && DAT_14c760ab8 != 0) && bVar80) {
          if (((*(char *)(uVar65 + 0x23cc) == '\0') && ((*(byte *)(uVar65 + 0x125b0) & 8) == 0)) &&
             (*(char *)(local_22b0 + 0x161) == '\x01')) {
            local_1fe8[0] = *(longlong *)(lVar68 + 0x1e08) != 0;
          }
          else {
            local_1fe8[0] = false;
          }
        }
        else {
          local_1fe8[0] = false;
        }
        local_1ff8 = _DAT_14c846280;
        uStack_1ff0 = _DAT_14c846288;
        local_2008 = _DAT_14c846270;
        uStack_2000 = _DAT_14c846278;
        local_2018 = _DAT_14c846260;
        uStack_2010 = _DAT_14c846268;
        local_2028 = DAT_14c846250;
        uStack_2024 = DAT_14c846254;
        uStack_2020 = (undefined4)DAT_14c846258;
        uStack_201c = DAT_14c846258._4_4_;
        if (DAT_14c760acc < 1) {
          local_2190 = FUN_14473c272(param_2,&DAT_14ca63b28,0);
        }
        else {
          uStack_1a40 = DAT_14ca83a40;
          uVar73 = local_20b8;
          if ((int)DAT_14ca84e40 <= (int)local_20b8) {
            uVar73 = DAT_14ca84e40;
          }
          if ((int)uVar73 < 2) {
            uVar73 = 1;
          }
          uStack_1a30 = DAT_14ca84e40;
          if ((int)uStack_20b4 < (int)DAT_14ca84e40) {
            uStack_1a30 = uStack_20b4;
          }
          fStack_1a50 = (float)DAT_14ca83a30;
          uStack_1a4c = DAT_14ca83a34;
          uStack_1a48 = DAT_14ca83a38;
          uStack_1a44 = DAT_14ca83a3c;
          uStack_1a3c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
          uStack_1a26 = 0;
          local_1a58 = (undefined8 *)0x20009;
          uStack_1a25 = 0x15;
          uStack_1a24 = 0;
          uStack_1a2c = 1;
          uStack_1a2a = 1;
          uStack_1a28 = 0x101;
          uStack_1a23 = 0xff;
          if ((int)uStack_1a30 < 2) {
            uStack_1a30 = 1;
          }
          local_1a38 = (double)((ulonglong)uVar73 << 0x20);
          uVar66 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
          uVar47 = uVar66 + 0x120;
          if (*(ulonglong *)(param_2 + 0x78) < uVar47) {
            FUN_140023dd8(local_22c8,0x128);
            uVar66 = *puVar6 + 7 & 0xfffffffffffffff8;
            uVar47 = uVar66 + 0x120;
          }
          *(ulonglong *)(param_2 + 0x70) = uVar47;
          FUN_1456bbb8c(uVar66,L"VolumetricFog.ConservativeDepthTexture",&local_1a58,0);
          iVar64 = *(int *)(param_2 + 0x180);
          *(uint *)(param_2 + 0x180) = iVar64 + 1U;
          if (*(uint *)(param_2 + 0x184) < iVar64 + 1U) {
            FUN_14472c0f6(local_2250,iVar64);
          }
          *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar64 * 8) = uVar66;
          *(int *)(uVar66 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
          iVar64 = DAT_14c760ae0;
          if (DAT_14c760ae0 < 2) {
            iVar64 = 1;
          }
          local_2190 = uVar66;
          FUN_142c02b28(uVar65,param_2,uVar66,iVar64);
        }
        FUN_14473c272(param_2,&DAT_14ca63b20,0);
        local_2170 = FUN_14473c272(param_2,&DAT_14ca63b28,0);
        local_2168 = FUN_14473c272(param_2,&DAT_14ca63bd8,0);
        local_220c = DAT_14c760ac8;
        local_2178 = FUN_14473c272(param_2,&DAT_14ca63b20,0);
        local_22c0 = uVar65;
        if (*(longlong *)(uVar65 + 0x13788) == 0) {
          local_223c = 0xffffffff;
          local_2218 = (longlong *)0x0;
        }
        else {
          plVar52 = *(longlong **)(local_22b0 + 8);
          if (plVar52[0x6d7] == 0) {
            local_2218 = (longlong *)0x0;
          }
          else {
            local_2218 = *(longlong **)(plVar52[0x6d7] + 0x28);
          }
          if (plVar52[0x6d8] == 0) {
            plVar78 = (longlong *)0x0;
          }
          else {
            plVar78 = *(longlong **)(plVar52[0x6d8] + 0x28);
          }
          lVar77 = (**(code **)(*plVar52 + 0x340))();
          lVar68 = *(longlong *)(uVar65 + 0x13770);
          bVar80 = false;
          if ((lVar77 != 0) && (*(longlong *)(uVar65 + 0x13768) != 0)) {
            bVar80 = false;
            if ((local_2218 != (longlong *)0x0) &&
               (bVar80 = false, *(longlong **)(local_22c0 + 0x13788) == local_2218)) {
              fVar81 = (float)(**(code **)(*local_2218 + 400))();
              bVar80 = 0.0 < fVar81;
            }
          }
          uVar65 = local_22c0;
          if (lVar77 == 0) {
            local_223c = 0;
            bVar38 = false;
          }
          else {
            local_223c = 0;
            bVar38 = false;
            if (((lVar68 != 0) && (bVar38 = false, plVar78 != (longlong *)0x0)) &&
               (*(longlong **)(local_22c0 + 0x13788) == plVar78)) {
              fVar81 = (float)(**(code **)(*plVar78 + 400))(plVar78);
              bVar38 = 0.0 < fVar81;
            }
          }
          if (!bVar80) {
            if (!bVar38) {
              plVar78 = (longlong *)0x0;
            }
            local_223c = bVar38 - 1 | 1;
            local_2218 = plVar78;
          }
        }
        uVar43 = local_20b0;
        uVar54 = uStack_20b4;
        uVar73 = local_20b8;
        local_2100 = (undefined8 *)(puVar63 + local_2180 * 0x30);
        lVar68 = local_2100[4];
        if (lVar68 != 0) {
          uVar42 = *(undefined4 *)(uVar65 + 0x120b8);
          FUN_144ab9098(&local_1a58);
          plVar52 = *(longlong **)(lVar68 + 0x28);
          dVar92 = (double)plVar52[0x12];
          dVar88 = (double)plVar52[10];
          dVar85 = (double)plVar52[0xe];
          dVar2 = dVar92 * dVar92 + dVar88 * dVar88 + dVar85 * dVar85;
          if (((dVar2 != 1.0) || (dVar3 = dVar85, dVar4 = dVar88, dVar89 = dVar92, NAN(dVar2))) &&
             (dVar3 = DAT_14c8464e8, dVar4 = DAT_14c8464e0, dVar89 = DAT_14c8464f0,
             9.99999993922529e-09 <= dVar2)) {
            dVar2 = 1.0 / SQRT(dVar2);
            dVar3 = dVar85 * dVar2;
            dVar4 = dVar88 * dVar2;
            dVar89 = dVar92 * dVar2;
          }
          dVar92 = (double)(int)uVar73 *
                   ABS(*(double *)(uVar65 + 0xd70) * dVar89 +
                       *(double *)(uVar65 + 0xd30) * dVar4 + *(double *)(uVar65 + 0xd50) * dVar3);
          dVar88 = (double)(int)uVar54 *
                   ABS(*(double *)(uVar65 + 0xd78) * dVar89 +
                       *(double *)(uVar65 + 0xd38) * dVar4 + *(double *)(uVar65 + 0xd58) * dVar3);
          dVar85 = (double)(int)uVar43 *
                   ABS(*(double *)(uVar65 + 0xd80) * dVar89 +
                       *(double *)(uVar65 + 0xd40) * dVar4 + *(double *)(uVar65 + 0xd60) * dVar3);
          if (dVar88 <= dVar85) {
            dVar88 = dVar85;
          }
          if (dVar92 <= dVar88) {
            dVar92 = dVar88;
          }
          uVar73 = (int)((double)_DAT_14c760ad0 * dVar92) + 0x1f;
          uVar54 = (int)((double)_DAT_14c760ad0 * dVar92) + 0x3e;
          if (-1 < (int)uVar73) {
            uVar54 = uVar73;
          }
          uVar73 = 0x20;
          if (0x20 < DAT_14ca84e40) {
            uVar73 = DAT_14ca84e40;
          }
          if ((uVar54 & 0xffffffe0) <= DAT_14ca84e40) {
            uVar73 = uVar54 & 0xffffffe0;
          }
          local_1cf8 = 0;
          local_1d08 = 0;
          uStack_1d00 = 0;
          local_1cf0 = 0x3ff0000000000000;
          local_1cd8 = 0x5500000000000000;
          uStack_1cd0 = 0;
          local_1cc8 = 0x55000000;
          local_1bf8 = 0;
          local_1be8 = 0x600000000;
          local_1ad8 = 0;
          local_1ac8 = 0x800000000;
          local_1a78 = 0;
          local_1a74 = 0xffffffff;
          local_1a70 = 0xbf8000003f800000;
          local_1a68 = 0;
          local_1e18 = *(undefined8 *)(uVar65 + 0x1048);
          uStack_1e10 = *(undefined8 *)(uVar65 + 0x1050);
          local_1e08 = *(undefined8 *)(uVar65 + 0x1058);
          uStack_2328 = 0;
          local_2330 = (wchar_t *)CONCAT44(local_2330._4_4_,uVar42);
          local_2338 = (wchar_t *)((ulonglong)local_2338 & 0xffffffff00000000);
          (**(code **)(*plVar52 + 0xd8))(plVar52,&local_2098,uVar65,&local_1e18);
          local_2248 = local_2080;
          dVar88 = (double)local_2080 / 1.7320507764816284;
          uStack_1de4 = local_2088._4_4_ ^ 0x80000000;
          uStack_1dec = (uint)((ulonglong)uStack_2090 >> 0x20) ^ 0x80000000;
          uStack_1df0 = (undefined4)uStack_2090;
          local_1df8 = (undefined8 *)((ulonglong)local_2098 ^ 0x8000000000000000);
          local_1de8 = (undefined4)local_2088;
          dVar92 = 0.0;
          if (((dVar3 != 0.0) || (NAN(dVar3))) || ((dVar4 != 0.0 || (NAN(dVar4))))) {
            dVar92 = atan2(dVar3,dVar4);
            dVar92 = dVar92 * 57.29577951308232 * 3.1415927410125732;
          }
          local_2298 = (double)(float)dVar88;
          dVar88 = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
          dVar85 = 0.0;
          if ((((dVar89 != 0.0) || (NAN(dVar89))) || (dVar88 != 0.0)) || (NAN(dVar88))) {
            dVar88 = atan2(dVar89,dVar88);
            dVar85 = dVar88 * 57.29577951308232 * 3.1415927410125732;
          }
          dVar92 = dVar92 / 180.0;
          dVar88 = cos(dVar92);
          local_21d8._8_4_ = extraout_XMM0_Dc;
          local_21d8._0_8_ = dVar88;
          local_21d8._12_4_ = extraout_XMM0_Dd;
          dVar88 = sin(dVar92);
          local_2128._8_4_ = extraout_XMM0_Dc_00;
          local_2128._0_8_ = dVar88;
          local_2128._12_4_ = extraout_XMM0_Dd_00;
          dVar88 = sin(dVar92);
          dVar92 = cos(dVar92);
          dVar85 = dVar85 / 180.0;
          dVar2 = cos(dVar85);
          local_2268._8_4_ = extraout_XMM0_Dc_01;
          local_2268._0_8_ = dVar2;
          local_2268._12_4_ = extraout_XMM0_Dd_01;
          dVar2 = sin(dVar85);
          local_2138._8_4_ = extraout_XMM0_Dc_02;
          local_2138._0_8_ = dVar2;
          local_2138._12_4_ = extraout_XMM0_Dd_02;
          dVar3 = sin(dVar85);
          local_2278._8_4_ = extraout_XMM0_Dc_03;
          local_2278._0_8_ = dVar3;
          local_2278._12_4_ = extraout_XMM0_Dd_03;
          dVar85 = cos(dVar85);
          local_21f8 = 0;
          uStack_21f0 = 0;
          uStack_21ec = 0x3ff00000;
          dVar2 = dVar2 * 0.0;
          dVar89 = (double)local_2268._0_8_ * 0.0;
          dVar11 = (dVar92 * dVar85 - dVar88 * 0.0) + dVar2 + 0.0;
          dVar12 = (dVar92 * 0.0 - dVar88 * 1.0) + 0.0 + 0.0;
          dVar4 = (dVar92 * -dVar3 - dVar88 * 0.0) + dVar89 + 0.0;
          dVar88 = (dVar92 * 0.0 - dVar88 * 0.0) + 0.0 + 0.0;
          dVar14 = (double)local_21d8._0_8_ * 0.0 + dVar85 * (double)local_2128._0_8_ + dVar2 + 0.0;
          dVar15 = (double)local_21d8._0_8_ * 1.0 + (double)local_2128._0_8_ * 0.0 + 0.0 + 0.0;
          dVar86 = (double)local_21d8._0_8_ * 0.0 + (double)local_2128._0_8_ * -dVar3 + dVar89 + 0.0
          ;
          dVar87 = (double)local_21d8._0_8_ * 0.0 + (double)local_2128._0_8_ * 0.0 + 0.0 + 0.0;
          dVar92 = dVar85 * 0.0 + 0.0;
          local_2278._0_8_ = (double)local_2278._0_8_ * -0.0 + 0.0;
          dVar3 = (double)local_2138._0_8_ + dVar92;
          local_2268._0_8_ = (double)local_2268._0_8_ + (double)local_2278._0_8_;
          dVar92 = dVar92 + dVar2;
          local_2208._8_4_ = extraout_XMM0_Dc_04;
          local_2208._0_8_ = dVar92;
          local_2208._12_4_ = extraout_XMM0_Dd_04;
          local_2278._0_8_ = (double)local_2278._0_8_ + dVar89;
          dVar89 = dVar88 * 0.0 + dVar4 * -0.0 + dVar12 * 1.0 + dVar11 * 0.0;
          dVar85 = dVar88 * 1.0 + dVar4 * 0.0 + dVar12 * 0.0 + dVar11 * 0.0;
          dVar16 = dVar87 * 0.0 + dVar86 * -0.0 + dVar15 * 1.0 + dVar14 * 0.0;
          local_1da8 = dVar87 * 0.0 + dVar86 * 1.0 + dVar15 * 0.0 + dVar14 * 0.0;
          dStack_1da0 = dVar87 * 1.0 + dVar86 * 0.0 + dVar15 * 0.0 + dVar14 * 0.0;
          local_1d98 = (double)local_2268._0_8_ * 0.0 + dVar3 * 1.0 + 0.0;
          dStack_1d90 = (double)local_2268._0_8_ * -0.0 + dVar3 * 0.0 + 0.0;
          dStack_1d80 = dVar3 * 0.0 + 0.0;
          local_1d88 = (double)local_2268._0_8_ * 1.0 + dStack_1d80;
          dStack_1d80 = (double)local_2268._0_8_ * 0.0 + dStack_1d80;
          dVar3 = (double)local_2278._0_8_ * -0.0 + dVar92 * 0.0 + 0.0;
          dVar2 = dVar92 * 0.0 + 0.0;
          dVar13 = (double)local_2278._0_8_ * 0.0 + dVar2 + 1.0;
          local_1dd8._8_4_ = SUB84(dVar89,0);
          local_1dd8._0_8_ = dVar88 * 0.0 + dVar4 * 0.0 + dVar12 * 0.0 + dVar11 * 1.0;
          local_1dd8._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
          local_1dc8._8_4_ = SUB84(dVar85,0);
          local_1dc8._0_8_ = dVar88 * 0.0 + dVar4 * 1.0 + dVar12 * 0.0 + dVar11 * 0.0;
          local_1dc8._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
          local_1db8._8_4_ = SUB84(dVar16,0);
          local_1db8._0_8_ = dVar87 * 0.0 + dVar86 * 0.0 + dVar15 * 0.0 + dVar14 * 1.0;
          local_1db8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          auStack_1d78._8_4_ = SUB84(dVar3,0);
          auStack_1d78._0_8_ = (double)local_2278._0_8_ * 0.0 + dVar92 * 1.0 + 0.0;
          auStack_1d78._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          local_1d68._8_4_ = SUB84(dVar13,0);
          local_1d68._0_8_ = (double)local_2278._0_8_ * 1.0 + dVar2 + 0.0;
          local_1d68._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          local_1d58 = 1.0 / (double)local_2080;
          local_1d48 = DAT_14c8464e0;
          dStack_1d40 = DAT_14c8464e8;
          local_1d38 = DAT_14c8464f0;
          local_1d30 = local_2298;
          local_1d28 = local_2298;
          local_1d20 = local_2298;
          local_1d18 = local_2248;
          local_1d08 = 0;
          uStack_1d00 = 0;
          local_1cf8 = 0;
          local_1cf0 = 0x3ff0000000000000;
          local_1ce8 = 0x52000000d4800000;
          local_1a68 = local_1a68 & 0xff;
          local_1a78 = 0;
          local_2320 = (char *)CONCAT44(local_2320._4_4_,uVar73);
          uStack_2328 = CONCAT44(uStack_2328._4_4_,uVar73);
          local_2330 = (wchar_t *)CONCAT44(local_2330._4_4_,uVar73);
          local_2338 = (wchar_t *)CONCAT44(local_2338._4_4_,uVar73);
          local_2318 = (code *)((ulonglong)local_2318 & 0xffffffff00000000);
          local_1d50 = local_1d58;
          FUN_14491cf12(&local_1a58,lVar68,uVar65,&local_1df8);
          local_1ff8 = local_1848;
          uStack_1ff0 = uStack_1840;
          local_2008 = CONCAT44(uStack_1854,local_1858);
          uStack_2000 = CONCAT44(uStack_184c,uStack_1850);
          local_2018 = CONCAT44(uStack_1864,local_1868);
          uStack_2010 = CONCAT44(uStack_185c,uStack_1860);
          local_2028 = local_1878;
          uStack_2024 = uStack_1874;
          uStack_2020 = uStack_1870;
          uStack_201c = uStack_186c;
          if (local_1ad8 != 0) {
            FUN_1400020a8();
          }
          if (local_1bf8 != 0) {
            FUN_1400020a8();
          }
          auVar27 = local_1dc8;
          puVar6 = local_22c8;
          uStack_1de0 = DAT_14ca85098;
          uStack_1df0 = DAT_14ca85088;
          uStack_1dec = DAT_14ca8508c;
          local_1de8 = DAT_14ca85090;
          uStack_1de4 = DAT_14ca85094;
          uStack_1ddc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
          local_1df8 = (undefined8 *)(DAT_14ca4af18 | 9);
          local_1dc8._0_5_ = 0x3000000;
          local_1dc8._0_2_ = 0x101;
          auVar28 = local_1dc8;
          local_1dc8._6_10_ = auVar27._6_10_;
          local_1dc8._0_5_ = auVar28._0_5_;
          local_1dc8[5] = 0xff;
          uVar54 = DAT_14ca84e40;
          if ((int)uVar73 < (int)DAT_14ca84e40) {
            uVar54 = uVar73;
          }
          if ((int)uVar54 < 2) {
            uVar54 = 1;
          }
          auVar33._4_4_ = uVar54;
          auVar33._0_4_ = uVar54;
          auVar33._8_4_ = 0;
          local_1dd8._0_12_ = auVar33 << 0x20;
          local_1dd8._12_4_ = 0x10001;
          uVar47 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
          uVar65 = uVar47 + 0x120;
          if (*(ulonglong *)(param_2 + 0x78) < uVar65) {
            FUN_140023dd8(local_22c8,0x128);
            uVar47 = *puVar6 + 7 & 0xfffffffffffffff8;
            uVar65 = uVar47 + 0x120;
          }
          *(ulonglong *)(param_2 + 0x70) = uVar65;
          FUN_1456bbb8c(uVar47,L"VolumetricFog.LightFunction",&local_1df8,0);
          iVar64 = *(int *)(param_2 + 0x180);
          *(uint *)(param_2 + 0x180) = iVar64 + 1U;
          if (*(uint *)(param_2 + 0x184) < iVar64 + 1U) {
            FUN_14472c0f6(local_2250,iVar64);
          }
          *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar64 * 8) = uVar47;
          *(int *)(uVar47 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
          local_2048 = *(undefined8 *)(*(longlong *)(lVar68 + 0x28) + 0x1c0);
          local_2178 = uVar47;
          uVar49 = FUN_1449cbe5c(local_2048,*(undefined4 *)(*(longlong *)(local_22b0 + 8) + 8),
                                 &local_2048);
          puVar6 = local_22c8;
          puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar79 = puVar46 + 0x24;
          if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
            FUN_140023dd8(local_22c8,0x130);
            puVar46 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
            puVar79 = puVar46 + 0x24;
          }
          *local_22c8 = (ulonglong)puVar79;
          *puVar46 = &PTR_FUN_14a333718;
          puVar46[2] = 0;
          *(undefined1 *)(puVar46 + 3) = 1;
          lVar77 = 0x32;
          do {
            puVar79 = (undefined8 *)((longlong)puVar46 + lVar77 + -0x12);
            *puVar79 = 0;
            puVar79[1] = 0;
            *(undefined4 *)((longlong)puVar46 + lVar77 + -2) = 0xffff0000;
            lVar77 = lVar77 + 0x18;
          } while (lVar77 != 0xf2);
          *(undefined4 *)((longlong)puVar46 + 0xf4) = 0;
          puVar46[0x1c] = 0;
          puVar46[0x1d] = 0;
          *(undefined2 *)(puVar46 + 0x1e) = 0;
          *(undefined4 *)(puVar46 + 0x1f) = 0xffffffff;
          *(undefined4 *)((longlong)puVar46 + 0xfc) = 0xffffffff;
          *(undefined4 *)(puVar46 + 0x20) = 0xffffffff;
          *(undefined4 *)((longlong)puVar46 + 0x104) = 0xffffffff;
          *(undefined4 *)(puVar46 + 0x21) = 0;
          *(undefined2 *)((longlong)puVar46 + 0x10c) = 0;
          puVar46[0x22] = 0;
          iVar64 = *(int *)(param_2 + 0xa0);
          *(uint *)(param_2 + 0xa0) = iVar64 + 1U;
          if (*(uint *)(param_2 + 0xa4) < iVar64 + 1U) {
            FUN_1448cfae8(local_22a0,iVar64);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar64 * 8) = puVar46;
          puVar46[4] = local_2178;
          puVar46[5] = 0;
          *(undefined4 *)(puVar46 + 6) = 0xffff0000;
          uVar8 = *(undefined8 *)(local_20e8 + 0x198);
          lVar77 = FUN_14482e3b2();
          uVar34 = local_2048;
          cVar35 = *(char *)(lVar77 + 0x41);
          if (cVar35 == '\x03') {
            cVar35 = '\x02';
          }
          puVar46[2] = uVar8;
          *(char *)(puVar46 + 3) = cVar35;
          local_1dc8._8_8_ = uStack_1ff0;
          local_1dc8._0_8_ = local_1ff8;
          local_1dd8._8_4_ = (undefined4)uStack_2000;
          local_1dd8._0_8_ = local_2008;
          local_1dd8._12_4_ = uStack_2000._4_4_;
          local_1de8 = (uint)local_2018;
          uStack_1de4 = local_2018._4_4_;
          uStack_1de0 = (uint)uStack_2010;
          uStack_1ddc = uStack_2010._4_4_;
          local_1df8 = (undefined8 *)CONCAT44(uStack_2024,local_2028);
          uStack_1df0 = uStack_2020;
          uStack_1dec = uStack_201c;
          FUN_14733e970();
          FUN_140069376(param_2);
          puVar6 = local_22c8;
          puVar69 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar79 = puVar69 + 0x46;
          if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
            FUN_140023dd8(local_22c8,0x240);
            puVar69 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
            puVar79 = puVar69 + 0x46;
          }
          *local_22c8 = (ulonglong)puVar79;
          uStack_2090 = DAT_14ca6d6b8;
          if (DAT_14ca6d6b8 != 0) {
            LOCK();
            *(int *)(DAT_14ca6d6b8 + 8) = *(int *)(DAT_14ca6d6b8 + 8) + 1;
            UNLOCK();
          }
          local_2088 = &DAT_14ca6d670;
          local_2338 = (wchar_t *)CONCAT71(local_2338._1_7_,2);
          local_2098 = puVar46 + 2;
          FUN_140068f1a(puVar69,&local_2058,&local_2098,1);
          uVar65 = local_22c0;
          *puVar69 = &PTR_FUN_14a333720;
          puVar69[0x38] = puVar46 + 2;
          puVar69[0x39] = local_22c0;
          puVar69[0x3a] = uVar34;
          puVar69[0x3b] = uVar49;
          *(uint *)(puVar69 + 0x3c) = uVar73;
          *(uint *)((longlong)puVar69 + 0x1e4) = uVar73;
          puVar69[0x3d] = lVar68;
          *(undefined4 *)(puVar69 + 0x3e) = (undefined4)local_1df8;
          *(undefined4 *)((longlong)puVar69 + 500) = local_1df8._4_4_;
          *(undefined4 *)(puVar69 + 0x3f) = uStack_1df0;
          *(uint *)((longlong)puVar69 + 0x1fc) = uStack_1dec;
          *(uint *)(puVar69 + 0x40) = local_1de8;
          *(uint *)((longlong)puVar69 + 0x204) = uStack_1de4;
          *(uint *)(puVar69 + 0x41) = uStack_1de0;
          *(uint *)((longlong)puVar69 + 0x20c) = uStack_1ddc;
          *(undefined4 *)(puVar69 + 0x42) = local_1dd8._0_4_;
          *(undefined4 *)((longlong)puVar69 + 0x214) = local_1dd8._4_4_;
          *(undefined4 *)(puVar69 + 0x43) = local_1dd8._8_4_;
          *(undefined4 *)((longlong)puVar69 + 0x21c) = local_1dd8._12_4_;
          *(undefined1 (*) [16])(puVar69 + 0x44) = local_1dc8;
          iVar64 = *(int *)(param_2 + 0x170);
          *(uint *)(param_2 + 0x170) = iVar64 + 1U;
          if (*(uint *)(param_2 + 0x174) < iVar64 + 1U) {
            FUN_14470e57a(local_2228,iVar64);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar64 * 8) = puVar69;
          *(int *)((longlong)puVar69 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
          FUN_140069100(param_2,puVar69);
          FUN_1446fae78(&local_1a58);
        }
        *(undefined8 *)(uVar65 + 0x137a8) = 0;
        local_2108 = FUN_144a97bef(param_2,uVar65);
        puVar6 = local_22c8;
        local_1e08 = CONCAT44(local_1e08._4_4_,DAT_14ca83a40);
        local_2048 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
        uStack_2040 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
        local_227c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        local_2038 = DAT_14ca83a40;
        local_2160 = (undefined8 *)(DAT_14ca4af18 | 0x80020809);
        uStack_1a26 = 2;
        uStack_1a25 = 10;
        uStack_1a24 = 0;
        local_22a2 = (undefined2)local_20a0;
        uStack_1a2c = (undefined2)local_20a0;
        uStack_1a2a = 1;
        uStack_1a28 = 0x101;
        uStack_1a40 = DAT_14ca83a40;
        fStack_1a50 = (float)DAT_14ca83a30;
        uStack_1a4c = DAT_14ca83a34;
        uStack_1a48 = DAT_14ca83a38;
        uStack_1a44 = DAT_14ca83a3c;
        local_228c = local_20a8;
        uVar73 = DAT_14ca84e40;
        if ((int)local_20a8 < (int)DAT_14ca84e40) {
          uVar73 = local_20a8;
        }
        if ((int)uVar73 < 2) {
          uVar73 = 1;
        }
        uStack_1a23 = 0xff;
        local_2290 = uStack_20a4;
        uStack_1a30 = DAT_14ca84e40;
        if ((int)uStack_20a4 < (int)DAT_14ca84e40) {
          uStack_1a30 = uStack_20a4;
        }
        if ((int)uStack_1a30 < 2) {
          uStack_1a30 = 1;
        }
        local_1a38 = (double)((ulonglong)uVar73 << 0x20);
        uVar66 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar47 = uVar66 + 0x120;
        local_1e18 = local_2048;
        uStack_1e10 = uStack_2040;
        local_1a58 = local_2160;
        uStack_1a3c = local_227c;
        if (*(ulonglong *)(param_2 + 0x78) < uVar47) {
          FUN_140023dd8(local_22c8,0x128);
          uVar66 = *puVar6 + 7 & 0xfffffffffffffff8;
          uVar47 = uVar66 + 0x120;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar47;
        FUN_1456bbb8c(uVar66,L"VolumetricFog.VBufferA",&local_1a58,0);
        iVar64 = *(int *)(param_2 + 0x180);
        *(uint *)(param_2 + 0x180) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0x184) < iVar64 + 1U) {
          FUN_14472c0f6(local_2250,iVar64);
        }
        puVar6 = local_22c8;
        *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar64 * 8) = uVar66;
        *(int *)(uVar66 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
        uVar39 = *(undefined1 *)(uVar66 + 0x94);
        puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar79 = puVar46 + 9;
        local_1eb8 = uVar66;
        if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
          FUN_140023dd8(local_22c8,0x50);
          puVar46 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
          puVar79 = puVar46 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar79;
        puVar46[1] = *(undefined8 *)(uVar66 + 8);
        puVar46[2] = 0;
        *(undefined1 *)(puVar46 + 3) = 0;
        *(undefined8 *)((longlong)puVar46 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar46 + 5) = 0;
        *puVar46 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar46 + 6) = uVar39;
        *(undefined1 *)(puVar46 + 7) = 0;
        *(undefined4 *)((longlong)puVar46 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar46 + 0x35) = 0;
        puVar46[8] = uVar66;
        iVar64 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar64 + 1U) {
          FUN_1447568fc(local_2238,iVar64);
        }
        puVar6 = local_22c8;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar64 * 8) = puVar46;
        *(int *)((longlong)puVar46 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        uStack_1eb0 = 0;
        local_1ea0 = (undefined8 *)0x0;
        uStack_1ea8 = puVar46;
        if (0 < local_220c) {
          uStack_1a26 = 2;
          uStack_1a25 = 10;
          local_1a58 = local_2160;
          uStack_1a24 = 0;
          uStack_1a2c = local_22a2;
          uStack_1a2a = 1;
          uStack_1a28 = 0x101;
          uStack_1a40 = local_2038;
          fStack_1a50 = (float)(undefined4)local_2048;
          uStack_1a4c = local_2048._4_4_;
          uStack_1a48 = (uint)uStack_2040;
          uStack_1a44 = uStack_2040._4_4_;
          uVar73 = DAT_14ca84e40;
          if ((int)local_228c < (int)DAT_14ca84e40) {
            uVar73 = local_228c;
          }
          if ((int)uVar73 < 2) {
            uVar73 = 1;
          }
          uStack_1a23 = 0xff;
          uStack_1a30 = DAT_14ca84e40;
          if ((int)local_2290 < (int)DAT_14ca84e40) {
            uStack_1a30 = local_2290;
          }
          uStack_1a3c = local_227c;
          if ((int)uStack_1a30 < 2) {
            uStack_1a30 = 1;
          }
          local_1a38 = (double)((ulonglong)uVar73 << 0x20);
          uVar66 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
          uVar47 = uVar66 + 0x120;
          if (*(ulonglong *)(param_2 + 0x78) < uVar47) {
            FUN_140023dd8(local_22c8,0x128);
            uVar66 = *puVar6 + 7 & 0xfffffffffffffff8;
            uVar47 = uVar66 + 0x120;
          }
          *(ulonglong *)(param_2 + 0x70) = uVar47;
          FUN_1456bbb8c(uVar66,L"VolumetricFog.VBufferB",&local_1a58,0);
          iVar64 = *(int *)(param_2 + 0x180);
          *(uint *)(param_2 + 0x180) = iVar64 + 1U;
          if (*(uint *)(param_2 + 0x184) < iVar64 + 1U) {
            FUN_14472c0f6(local_2250,iVar64);
          }
          puVar6 = local_22c8;
          *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar64 * 8) = uVar66;
          *(int *)(uVar66 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
          uVar39 = *(undefined1 *)(uVar66 + 0x94);
          puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar79 = puVar46 + 9;
          uStack_1eb0 = uVar66;
          if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
            FUN_140023dd8(local_22c8,0x50);
            puVar46 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
            puVar79 = puVar46 + 9;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar79;
          puVar46[1] = *(undefined8 *)(uVar66 + 8);
          puVar46[2] = 0;
          *(undefined1 *)(puVar46 + 3) = 0;
          *(undefined8 *)((longlong)puVar46 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar46 + 5) = 0;
          *puVar46 = &PTR_FUN_14a1fb948;
          *(undefined1 *)(puVar46 + 6) = uVar39;
          *(undefined1 *)(puVar46 + 7) = 0;
          *(undefined4 *)((longlong)puVar46 + 0x31) = 0;
          *(undefined2 *)((longlong)puVar46 + 0x35) = 0;
          puVar46[8] = uVar66;
          iVar64 = *(int *)(param_2 + 0x1a0);
          *(uint *)(param_2 + 0x1a0) = iVar64 + 1U;
          if (*(uint *)(param_2 + 0x1a4) < iVar64 + 1U) {
            FUN_1447568fc(local_2238,iVar64);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar64 * 8) = puVar46;
          *(int *)((longlong)puVar46 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
          local_1ea0 = puVar46;
        }
        uVar73 = 0;
        uVar47 = FUN_14473c272(param_2,&DAT_14ca63bd8,0);
        local_2128._0_8_ = local_2100[2];
        local_2248 = (undefined8 *)(longlong)*(int *)(local_2100 + 3);
        local_2138._0_8_ = *local_2100;
        local_2298 = (double)(ulonglong)*(uint *)(local_2100 + 1);
        local_20c0 = CONCAT44(uStack_20b4,local_20b8);
        local_21c8 = (double)(ulonglong)local_20b0;
        if (*(longlong *)(uVar65 + 0x11f90) != 0) {
          uVar73 = *(byte *)(*(longlong *)(uVar65 + 0x11f90) + 0xc) & 0xffffff01;
        }
        local_2198 = (double)(uVar65 + 0x12020);
        local_21a0 = (double)FUN_1403e6082(param_2,uVar65);
        local_20f0 = (ulonglong)local_22b1;
        local_2140 = uVar73;
        if (local_2298._0_4_ < 1) {
          if (0 < (int)local_2248) {
LAB_143104d8a:
            puVar6 = local_22c8;
            uStack_1a26 = 2;
            uStack_1a25 = 10;
            local_1a58 = local_2160;
            uStack_1a24 = 0;
            uStack_1a2c = local_22a2;
            uStack_1a2a = 1;
            uStack_1a28 = 0x101;
            uStack_1a40 = local_2038;
            fStack_1a50 = (float)(undefined4)local_2048;
            uStack_1a4c = local_2048._4_4_;
            uStack_1a48 = (uint)uStack_2040;
            uStack_1a44 = uStack_2040._4_4_;
            uVar73 = DAT_14ca84e40;
            if ((int)local_228c < (int)DAT_14ca84e40) {
              uVar73 = local_228c;
            }
            if ((int)uVar73 < 2) {
              uVar73 = 1;
            }
            uStack_1a23 = 0xff;
            uStack_1a30 = DAT_14ca84e40;
            if ((int)local_2290 < (int)DAT_14ca84e40) {
              uStack_1a30 = local_2290;
            }
            uStack_1a3c = local_227c;
            if ((int)uStack_1a30 < 2) {
              uStack_1a30 = 1;
            }
            local_1a38 = (double)((ulonglong)uVar73 << 0x20);
            uVar66 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
            uVar47 = uVar66 + 0x120;
            if (*(ulonglong *)(param_2 + 0x78) < uVar47) {
              FUN_140023dd8(local_22c8,0x128);
              uVar66 = *puVar6 + 7 & 0xfffffffffffffff8;
              uVar47 = uVar66 + 0x120;
            }
            *(ulonglong *)(param_2 + 0x70) = uVar47;
            FUN_1456bbb8c(uVar66,L"VolumetricFog.LocalShadowedLightScattering",&local_1a58,0);
            iVar64 = *(int *)(param_2 + 0x180);
            *(uint *)(param_2 + 0x180) = iVar64 + 1U;
            if (*(uint *)(param_2 + 0x184) < iVar64 + 1U) {
              FUN_14472c0f6(local_2250,iVar64);
            }
            puVar6 = local_22c8;
            *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar64 * 8) = uVar66;
            *(int *)(uVar66 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
            uVar39 = *(undefined1 *)(uVar66 + 0x94);
            puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar79 = puVar46 + 9;
            if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
              FUN_140023dd8(local_22c8,0x50);
              puVar46 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
              puVar79 = puVar46 + 9;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar79;
            puVar46[1] = *(undefined8 *)(uVar66 + 8);
            puVar46[2] = 0;
            *(undefined1 *)(puVar46 + 3) = 0;
            *(undefined8 *)((longlong)puVar46 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar46 + 5) = 0;
            *puVar46 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar46 + 6) = uVar39;
            *(undefined1 *)(puVar46 + 7) = 0;
            *(undefined4 *)((longlong)puVar46 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar46 + 0x35) = 0;
            puVar46[8] = uVar66;
            iVar64 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar64 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar64 + 1U) {
              FUN_1447568fc(local_2238,iVar64);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar64 * 8) = puVar46;
            *(int *)((longlong)puVar46 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            local_1a58 = (undefined8 *)0x0;
            fStack_1a50 = 0.0;
            uStack_1a4c = 0;
            FUN_140c4fe69(param_2,puVar46,&local_1a58,2);
            local_2278._0_4_ = SUB84(local_21c8,0) + -1;
            local_21f8 = uVar66;
            goto LAB_143104f83;
          }
        }
        else {
          local_2278._0_4_ = SUB84(local_21c8,0) + -1;
          dVar92 = 0.0;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = local_21d8._8_8_;
          local_21d8 = auVar27 << 0x40;
          local_21f8 = uVar47;
          local_213c = uVar73;
          do {
            lVar77 = local_22b0;
            local_2208._0_8_ = dVar92;
            lVar68 = *(longlong *)(local_2138._0_8_ + (longlong)dVar92 * 8);
            lVar74 = (longlong)*(int *)(lVar68 + 0x34) * 0x68 + *(longlong *)(local_22b0 + 0x4d8);
            (**(code **)(**(longlong **)(lVar68 + 0x28) + 0x10))
                      (*(longlong **)(lVar68 + 0x28),&local_1df8);
            uVar65 = local_22c0;
            dVar88 = (double)local_1df8 * *(double *)(local_22c0 + 0x9c0) +
                     (double)CONCAT44(uStack_1dec,uStack_1df0) * *(double *)(local_22c0 + 0x9e0) +
                     (double)CONCAT44(uStack_1de4,local_1de8) * *(double *)(local_22c0 + 0xa00) +
                     *(double *)(local_22c0 + 0xa20);
            dVar92 = log((double)(float)((double)CONCAT44(uStack_1ddc,uStack_1de0) + dVar88) *
                         dVar93 + dVar9);
            dVar88 = log((double)(float)(dVar88 - (double)CONCAT44(uStack_1ddc,uStack_1de0)) *
                         dVar93 + dVar9);
            uVar73 = (uint)(longlong)(dVar88 * 1.4426950408889634 * dVar10);
            if ((int)local_2278._0_4_ <= (int)uVar73) {
              uVar73 = local_2278._0_4_;
            }
            uVar47 = (ulonglong)uVar73;
            if ((int)uVar73 < 1) {
              uVar47 = 0;
            }
            uVar73 = (uint)(longlong)(dVar92 * 1.4426950408889634 * dVar10);
            if ((int)local_2278._0_4_ <= (int)uVar73) {
              uVar73 = local_2278._0_4_;
            }
            uVar66 = 0;
            if (0 < (int)uVar73) {
              uVar66 = (ulonglong)uVar73;
            }
            if ((int)uVar47 < (int)uVar73) {
              cVar35 = FUN_144abb888(uVar65,lVar68,lVar74,*(undefined8 *)(lVar77 + 8));
              if (DAT_14ca6ae98 == 0) {
                local_21e0 = (double)((ulonglong)local_21e0 & 0xffffffff00000000);
              }
              else {
                uVar42 = (**(code **)(**(longlong **)(lVar68 + 0x28) + 0x48))();
                local_21e0 = (double)CONCAT44(local_21e0._4_4_,uVar42);
              }
              if (*(int *)(lVar74 + 0x58) == 0) {
                uVar48 = (ulonglong)*(uint *)(lVar74 + 0x60);
                uVar65 = local_21f8;
              }
              else {
                FUN_1400d7ed0(lVar74,&local_1a58,local_22c0);
                uVar65 = local_21f8;
                plVar52 = (longlong *)CONCAT44(uStack_1a4c,fStack_1a50);
                uVar73 = *(uint *)(local_1a58 + 0x568);
                uVar48 = (ulonglong)uVar73;
                if (plVar52 != (longlong *)0x0) {
                  LOCK();
                  plVar78 = plVar52 + 1;
                  *(int *)plVar78 = (int)*plVar78 + -1;
                  UNLOCK();
                  if ((int)*plVar78 == 0) {
                    local_21e8 = (double)CONCAT44(local_21e8._4_4_,uVar73);
                    (**(code **)*plVar52)(plVar52);
                    uVar48 = (ulonglong)local_21e8 & 0xffffffff;
                    LOCK();
                    piVar62 = (int *)((longlong)plVar52 + 0xc);
                    *piVar62 = *piVar62 + -1;
                    UNLOCK();
                    if (*piVar62 == 0) {
                      (**(code **)(*plVar52 + 0x10))(plVar52);
                      uVar48 = (ulonglong)local_21e8 & 0xffffffff;
                    }
                  }
                }
              }
              puVar6 = local_22c8;
              local_2150 = (double)CONCAT71(local_2150._1_7_,cVar35);
              local_21e8 = (double)CONCAT44(local_21e8._4_4_,(int)uVar48);
              if (cVar35 == '\0') {
                local_2220 = (undefined8 *)((ulonglong)local_2220._4_4_ << 0x20);
              }
              else {
                if (*(longlong *)(local_22b0 + 0x6d0) == 0) {
                  bVar80 = false;
                }
                else {
                  bVar80 = *(longlong *)(local_22b0 + 0x6f0) != 0;
                }
                local_2220 = (undefined8 *)
                             CONCAT44(local_2220._4_4_,
                                      (int)CONCAT71((int7)(uVar48 >> 8),(int)uVar48 != -1 & bVar80))
                ;
              }
              puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar79 = puVar46 + 0xbc;
              if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
                FUN_140023dd8(local_22c8,0x5f0);
                puVar46 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
                puVar79 = puVar46 + 0xbc;
              }
              *local_22c8 = (ulonglong)puVar79;
              *puVar46 = &PTR_FUN_14a333678;
              local_2268._0_8_ = puVar46 + 2;
              puVar46[2] = 0;
              *(undefined1 *)(puVar46 + 3) = 1;
              puVar46[4] = 0;
              *(undefined1 *)(puVar46 + 5) = 1;
              puVar46[6] = 0;
              *(undefined1 *)(puVar46 + 7) = 1;
              puVar46[8] = 0;
              puVar46[10] = 0;
              *(undefined1 *)(puVar46 + 0xb) = 1;
              lVar77 = 0xe0;
              do {
                puVar79 = (undefined8 *)((longlong)puVar46 + lVar77 + 0x10);
                *puVar79 = 0;
                puVar79[1] = 0x3f80000000000000;
                *(undefined8 *)((longlong)puVar46 + lVar77) = 0;
                ((undefined8 *)((longlong)puVar46 + lVar77))[1] = 0x3f80000000000000;
                lVar77 = lVar77 + 0x20;
              } while (lVar77 != 0x1e0);
              puVar46[0x48] = 0;
              puVar46[0x49] = 0x3f80000000000000;
              puVar46[0x4a] = 0;
              puVar46[0x4b] = 0x3f80000000000000;
              puVar46[0x4c] = 0;
              puVar46[0x4d] = 0x3f80000000000000;
              puVar46[0x50] = 0;
              puVar46[0x51] = 0x3f80000000000000;
              puVar46[0x4e] = 0;
              puVar46[0x4f] = 0x3f80000000000000;
              puVar46[0x96] = 0;
              puVar46[0x97] = 0x3f80000000000000;
              puVar46[0x52] = 0;
              puVar46[0x53] = 0;
              puVar46[0x54] = 0;
              puVar46[0x55] = 0;
              puVar46[0x56] = 0;
              puVar46[0x8b] = 0;
              puVar46[0x8c] = 0;
              local_2158 = puVar46 + 0x98;
              puVar46[0x98] = 0;
              *(undefined1 *)(puVar46 + 0x99) = 1;
              puVar46[0x9a] = 0;
              lVar77 = 0x4e0;
              do {
                *(undefined8 *)((longlong)puVar46 + lVar77) = 0;
                ((undefined8 *)((longlong)puVar46 + lVar77))[1] = 0;
                *(undefined4 *)((longlong)puVar46 + lVar77 + 0x10) = 0xffff0000;
                lVar77 = lVar77 + 0x18;
              } while (lVar77 != 0x5a0);
              *(undefined4 *)((longlong)puVar46 + 0x5b4) = 0;
              puVar46[0xb4] = 0;
              puVar46[0xb5] = 0;
              *(undefined2 *)(puVar46 + 0xb6) = 0;
              *(undefined4 *)(puVar46 + 0xb7) = 0xffffffff;
              *(undefined4 *)((longlong)puVar46 + 0x5bc) = 0xffffffff;
              *(undefined4 *)(puVar46 + 0xb8) = 0xffffffff;
              *(undefined4 *)((longlong)puVar46 + 0x5c4) = 0xffffffff;
              *(undefined4 *)(puVar46 + 0xb9) = 0;
              *(undefined2 *)((longlong)puVar46 + 0x5cc) = 0;
              puVar46[0xba] = 0;
              iVar64 = *(int *)(param_2 + 0xa0);
              *(uint *)(param_2 + 0xa0) = iVar64 + 1U;
              if (*(uint *)(param_2 + 0xa4) < iVar64 + 1U) {
                FUN_1448cfae8(local_22a0,iVar64);
              }
              *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar64 * 8) = puVar46;
              local_2330 = (wchar_t *)local_2268._0_8_;
              local_2338 = (wchar_t *)lVar68;
              FUN_143102a1c(param_2,local_22c0,local_1fe8,local_2198);
              lVar77 = FUN_1449863e6();
              puVar6 = local_22c8;
              cVar35 = *(char *)(lVar77 + 0x41);
              if (*(char *)(lVar77 + 0x41) == '\x03') {
                cVar35 = '\x02';
              }
              puVar46[6] = local_21a0;
              *(char *)(puVar46 + 7) = cVar35;
              uVar39 = 1;
              if ((local_21d8[0] & 1) == 0) {
                uStack_1a26 = 2;
                uStack_1a25 = 10;
                local_1a58 = local_2160;
                uStack_1a24 = 0;
                uStack_1a2c = local_22a2;
                uStack_1a2a = 1;
                uStack_1a28 = 0x101;
                uStack_1a40 = local_2038;
                fStack_1a50 = (float)(undefined4)local_2048;
                uStack_1a4c = local_2048._4_4_;
                uStack_1a48 = (uint)uStack_2040;
                uStack_1a44 = uStack_2040._4_4_;
                uVar73 = DAT_14ca84e40;
                if ((int)local_228c < (int)DAT_14ca84e40) {
                  uVar73 = local_228c;
                }
                if ((int)uVar73 < 2) {
                  uVar73 = 1;
                }
                uStack_1a23 = 0xff;
                uStack_1a30 = DAT_14ca84e40;
                if ((int)local_2290 < (int)DAT_14ca84e40) {
                  uStack_1a30 = local_2290;
                }
                uStack_1a3c = local_227c;
                if ((int)uStack_1a30 < 2) {
                  uStack_1a30 = 1;
                }
                local_1a38 = (double)((ulonglong)uVar73 << 0x20);
                uVar65 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
                uVar48 = uVar65 + 0x120;
                if (*(ulonglong *)(param_2 + 0x78) < uVar48) {
                  FUN_140023dd8(local_22c8,0x128);
                  uVar65 = *puVar6 + 7 & 0xfffffffffffffff8;
                  uVar48 = uVar65 + 0x120;
                }
                *(ulonglong *)(param_2 + 0x70) = uVar48;
                FUN_1456bbb8c(uVar65,L"VolumetricFog.LocalShadowedLightScattering",&local_1a58,0);
                iVar64 = *(int *)(param_2 + 0x180);
                *(uint *)(param_2 + 0x180) = iVar64 + 1U;
                if (*(uint *)(param_2 + 0x184) < iVar64 + 1U) {
                  FUN_14472c0f6(local_2250,iVar64);
                }
                *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar64 * 8) = uVar65;
                *(int *)(uVar65 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
                uVar39 = 2;
              }
              puVar46[0x9c] = uVar65;
              puVar46[0x9d] = 0;
              *(undefined1 *)(puVar46 + 0x9e) = uVar39;
              *(undefined1 *)((longlong)puVar46 + 0x4f1) = 0;
              *(undefined2 *)((longlong)puVar46 + 0x4f2) = 0xffff;
              FUN_144abaa06(local_20f8,&local_1a58,param_2,local_2180);
              *(float *)local_2158 = (float)local_1a58;
              *(float *)((longlong)local_2158 + 4) = local_1a58._4_4_;
              *(float *)(local_2158 + 1) = fStack_1a50;
              *(undefined4 *)((longlong)local_2158 + 0xc) = uStack_1a4c;
              puVar46[0x9a] = local_2190;
              *(uint *)(puVar46 + 0x9b) = (uint)(0 < DAT_14c760acc);
              *(undefined4 *)((longlong)puVar46 + 0x4dc) = local_21e8._0_4_;
              if (0 < (longlong)*(int *)(lVar74 + 0x18)) {
                lVar77 = 0;
                do {
                  lVar75 = *(longlong *)(*(longlong *)(lVar74 + 0x10) + lVar77 * 8);
                  if ((*(uint *)(lVar75 + 0x990) & 0x281) == 0x81) goto LAB_14310478d;
                  lVar77 = lVar77 + 1;
                } while (*(int *)(lVar74 + 0x18) != lVar77);
              }
              lVar75 = 0;
LAB_14310478d:
              local_2338 = (wchar_t *)(puVar46 + 0x40);
              FUN_14494ceda(param_2,local_22c0,lVar68,lVar75);
              lVar68 = DAT_14ca6af00;
              iVar64 = *local_2188;
              local_21f8 = uVar65;
              if (iVar64 == 0x40000002) {
                uVar65 = 0;
              }
              else {
                bVar80 = true;
                if ((DAT_14c86a9f8 == '\x01') && (iVar64 != 2)) {
                  if (iVar64 == 1) {
                    DVar44 = FUN_140ad26c0();
                    DVar45 = GetCurrentThreadId();
                    bVar80 = DVar44 == DVar45;
                  }
                  else {
                    bVar80 = false;
                  }
                }
                uVar65 = (ulonglong)(bVar80 ^ 1);
              }
              uVar48 = local_22c0;
              fVar81 = *(float *)(lVar68 + uVar65 * 4);
              fVar84 = 0.0;
              if (0.0 <= fVar81) {
                fVar84 = fVar81;
              }
              FUN_1404437ba(*(undefined8 *)(local_22c0 + 0x13818),&local_2058);
              uVar49 = *(undefined8 *)(uVar48 + 0x13818);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14cb0f6a8) &&
                 (FUN_144b3d300(&DAT_14cb0f6a8), DAT_14cb0f6a8 == -1)) {
                FUN_14612a512();
                local_22f0 = &LAB_14712ac08;
                local_22f8 = &LAB_14712ac0c;
                local_2300 = &LAB_147da544e;
                local_2308 = (undefined8 *)&LAB_147da5452;
                local_2310 = FUN_147da5496;
                local_2318 = FUN_147da54f4;
                local_2330 = L"WriteToSliceMainGS";
                local_2338 = L"/Engine/Private/TranslucentLightingShaders.usf";
                local_22e0 = 0;
                local_22e8 = 0xe8;
                local_2320 = (char *)CONCAT44(local_2320._4_4_,1);
                uStack_2328 = CONCAT44(uStack_2328._4_4_,4);
                FUN_140db5666(&DAT_14cb0f600,0,&DAT_14cb0f598,L"FWriteToSliceGS");
                _DAT_14cb0f600 = FGlobalShaderType::vftable;
                atexit((_func_5014 *)&LAB_14377f606);
                _Init_thread_footer(&DAT_14cb0f6a8);
              }
              bVar36 = (byte)local_2220;
              FUN_1448e935e(uVar49,&local_1a58,&DAT_14cb0f600,0);
              auVar27 = local_21d8;
              local_2220 = local_1a58;
              local_21d8._4_4_ = uStack_1a4c;
              local_21d8._0_4_ = fStack_1a50;
              local_21d8._8_8_ = auVar27._8_8_;
              lVar68 = *(longlong *)(uVar48 + 0x13818);
              iVar64 = (uint)(lVar75 != 0) +
                       ((int)local_20f0 +
                       ((uint)local_2150._0_1_ * 2 +
                        ((uint)(0.0 < fVar84) * 4 + (uint)local_21e0._0_1_ * 2 | (uint)bVar36) * 4 +
                        local_213c & 0x7f) * 2) * 2;
              FUN_14159a926();
              FUN_1448e935e(lVar68,&local_2098,&DAT_14ca6b258,iVar64);
              uVar70 = *(undefined2 *)(lVar68 + 0x50);
              FUN_14159a926();
              local_1a58 = (undefined8 *)CONCAT62(local_1a58._2_6_,uVar70);
              local_1a58 = (undefined8 *)CONCAT44(iVar64,(float)local_1a58);
              fStack_1a50 = 1.4013e-45;
              uStack_1a4c = (undefined4)DAT_14ca6b278;
              uStack_1a48 = (uint)((ulonglong)DAT_14ca6b278 >> 0x20);
              FUN_140d12ab4(&local_1a58);
              lVar77 = uStack_2090;
              puVar46 = local_2098;
              FUN_14159aa48();
              local_1a58 = (undefined8 *)0x0;
              fStack_1a50 = 0.0;
              uStack_1a4c = 0;
              uVar49 = local_2268._0_8_;
              FUN_1448f70da(puVar46,&DAT_14ca6cc68,local_2268._0_8_,&local_1a58);
              local_2068 = CONCAT44(uStack_2054,local_2058);
              uStack_2060 = CONCAT44(uStack_204c,CONCAT22(uStack_204e,uStack_2050));
              local_1a58 = local_1df8;
              fStack_1a50 = (float)uStack_1df0;
              uStack_1a4c = uStack_1dec;
              uStack_1a48 = local_1de8;
              uStack_1a44 = uStack_1de4;
              uStack_1a40 = uStack_1de0;
              uStack_1a3c = uStack_1ddc;
              FUN_14159aa48();
              lVar68 = local_2288;
              FUN_140069376(local_2288);
              puVar6 = local_22c8;
              puVar69 = (undefined8 *)(*(longlong *)(lVar68 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar79 = puVar69 + 0x47;
              if (*(undefined8 **)(lVar68 + 0x78) < puVar79) {
                FUN_140023dd8(local_22c8,0x240);
                puVar69 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
                puVar79 = puVar69 + 0x47;
              }
              *local_22c8 = (ulonglong)puVar79;
              local_2098 = (undefined8 *)uVar49;
              uStack_2090 = DAT_14ca6ccb0;
              if (DAT_14ca6ccb0 != 0) {
                LOCK();
                *(int *)(DAT_14ca6ccb0 + 8) = *(int *)(DAT_14ca6ccb0 + 8) + 1;
                UNLOCK();
              }
              local_2088 = &DAT_14ca6cc68;
              local_2338 = (wchar_t *)CONCAT71(local_2338._1_7_,2);
              FUN_140068f1a(puVar69,&local_2069,&local_2098,1);
              param_2 = local_2288;
              *puVar69 = &PTR_FUN_14a333680;
              puVar69[0x37] = uVar49;
              puVar69[0x38] = local_22c0;
              puVar69[0x39] = local_22b0;
              puVar69[0x3a] = local_2068;
              puVar69[0x3b] = uStack_2060;
              puVar69[0x3c] = local_2220;
              puVar69[0x3d] = local_21d8._0_8_;
              puVar69[0x3e] = puVar46;
              puVar69[0x3f] = lVar77;
              puVar69[0x40] = uVar47 | uVar66 << 0x20;
              *(uint *)(puVar69 + 0x43) = uStack_1a48;
              *(uint *)((longlong)puVar69 + 0x21c) = uStack_1a44;
              *(uint *)(puVar69 + 0x44) = uStack_1a40;
              *(uint *)((longlong)puVar69 + 0x224) = uStack_1a3c;
              *(float *)(puVar69 + 0x41) = (float)local_1a58;
              *(float *)((longlong)puVar69 + 0x20c) = local_1a58._4_4_;
              *(float *)(puVar69 + 0x42) = fStack_1a50;
              *(undefined4 *)((longlong)puVar69 + 0x214) = uStack_1a4c;
              puVar69[0x45] = local_20c0;
              *(int *)(puVar69 + 0x46) = SUB84(local_21c8,0);
              iVar64 = *(int *)(local_2288 + 0x170);
              *(uint *)(local_2288 + 0x170) = iVar64 + 1U;
              if (*(uint *)(local_2288 + 0x174) < iVar64 + 1U) {
                FUN_14470e57a(local_2228,iVar64);
              }
              *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar64 * 8) = puVar69;
              *(int *)((longlong)puVar69 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
              uVar49 = FUN_140069100(param_2,puVar69);
              auVar27 = local_21d8;
              local_21d8._1_7_ = (int7)((ulonglong)uVar49 >> 8);
              local_21d8[0] = 1;
              local_21d8._8_8_ = auVar27._8_8_;
            }
            dVar92 = (double)(local_2208._0_8_ + 1);
          } while (dVar92 != local_2298);
          uVar47 = local_21f8;
          uVar65 = local_22c0;
          if (0 < (int)local_2248) {
            if ((local_21d8[0] & 1) == 0) goto LAB_143104d8a;
LAB_143104f83:
            local_2298 = (double)CONCAT44(local_2298._4_4_,local_2290 * local_228c);
            lVar68 = 0;
            uVar47 = local_21f8;
            do {
              lVar77 = *(longlong *)(local_2128._0_8_ + lVar68 * 8);
              (**(code **)(**(longlong **)(lVar77 + 0x28) + 0x10))
                        (*(longlong **)(lVar77 + 0x28),&local_1a58);
              dVar88 = (double)local_1a58 * *(double *)(uVar65 + 0x9c0) +
                       (double)CONCAT44(uStack_1a4c,fStack_1a50) * *(double *)(uVar65 + 0x9e0) +
                       (double)CONCAT44(uStack_1a44,uStack_1a48) * *(double *)(uVar65 + 0xa00) +
                       *(double *)(uVar65 + 0xa20);
              dVar92 = log((double)(float)((double)CONCAT44(uStack_1a3c,uStack_1a40) + dVar88) *
                           dVar93 + dVar9);
              dVar88 = log((double)(float)(dVar88 - (double)CONCAT44(uStack_1a3c,uStack_1a40)) *
                           dVar93 + dVar9);
              iVar64 = (int)(longlong)(dVar88 * 1.4426950408889634 * dVar10);
              if ((int)local_2278._0_4_ <= iVar64) {
                iVar64 = local_2278._0_4_;
              }
              if (iVar64 < 1) {
                iVar64 = 0;
              }
              iVar76 = (int)(longlong)(dVar92 * 1.4426950408889634 * dVar10);
              if ((int)local_2278._0_4_ <= iVar76) {
                iVar76 = local_2278._0_4_;
              }
              iVar53 = 0;
              if (0 < iVar76) {
                iVar53 = iVar76;
              }
              if (iVar64 < iVar76) {
                if (DAT_14ca6ae98 == 0) {
                  auVar28._12_4_ = 0;
                  auVar28._0_12_ = local_2268._4_12_;
                  local_2268._0_16_ = auVar28 << 0x20;
                }
                else {
                  uVar42 = (**(code **)(**(longlong **)(lVar77 + 0x28) + 0x48))();
                  local_2268._0_4_ = uVar42;
                }
                puVar6 = local_22c8;
                puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar79 = puVar46 + 0x44;
                if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
                  FUN_140023dd8(local_22c8,0x230);
                  puVar46 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
                  puVar79 = puVar46 + 0x44;
                }
                *local_22c8 = (ulonglong)puVar79;
                *puVar46 = &PTR_FUN_14a333698;
                local_2208._0_8_ = puVar46 + 2;
                puVar46[2] = 0;
                *(undefined1 *)(puVar46 + 3) = 1;
                puVar46[4] = 0;
                *(undefined1 *)(puVar46 + 5) = 1;
                puVar46[6] = 0;
                *(undefined1 *)(puVar46 + 7) = 1;
                puVar46[8] = 0;
                puVar46[10] = 0;
                *(undefined1 *)(puVar46 + 0xb) = 1;
                lVar74 = 0xe0;
                do {
                  puVar79 = (undefined8 *)((longlong)puVar46 + lVar74 + 0x10);
                  *puVar79 = 0;
                  puVar79[1] = 0x3f80000000000000;
                  *(undefined8 *)((longlong)puVar46 + lVar74) = 0;
                  ((undefined8 *)((longlong)puVar46 + lVar74))[1] = 0x3f80000000000000;
                  lVar74 = lVar74 + 0x20;
                } while (lVar74 != 0x1e0);
                puVar46[0x40] = 0;
                puVar46[0x41] = 0;
                iVar76 = *(int *)(param_2 + 0xa0);
                *(uint *)(param_2 + 0xa0) = iVar76 + 1U;
                if (*(uint *)(param_2 + 0xa4) < iVar76 + 1U) {
                  FUN_1448cfae8(local_22a0,iVar76);
                }
                uVar65 = local_21f8;
                puVar6 = local_22c8;
                *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar76 * 8) = puVar46;
                puVar69 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar79 = puVar69 + 9;
                uVar39 = *(undefined1 *)(local_21f8 + 0x94);
                if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
                  local_21d8[0] = *(undefined1 *)(local_21f8 + 0x94);
                  FUN_140023dd8(local_22c8,0x50);
                  puVar69 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
                  puVar79 = puVar69 + 9;
                  uVar39 = local_21d8[0];
                }
                *(undefined8 **)(param_2 + 0x70) = puVar79;
                puVar69[1] = *(undefined8 *)(uVar65 + 8);
                puVar69[2] = 0;
                *(undefined1 *)(puVar69 + 3) = 0;
                *(undefined8 *)((longlong)puVar69 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar69 + 5) = 0;
                *puVar69 = &PTR_FUN_14a1fb948;
                *(undefined1 *)(puVar69 + 6) = uVar39;
                *(undefined1 *)(puVar69 + 7) = 0;
                *(undefined4 *)((longlong)puVar69 + 0x31) = 0;
                *(undefined2 *)((longlong)puVar69 + 0x35) = 0;
                puVar69[8] = uVar65;
                iVar76 = *(int *)(param_2 + 0x1a0);
                *(uint *)(param_2 + 0x1a0) = iVar76 + 1U;
                if (*(uint *)(param_2 + 0x1a4) < iVar76 + 1U) {
                  FUN_1447568fc(local_2238,iVar76);
                }
                uVar65 = local_22c0;
                *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar76 * 8) = puVar69;
                *(int *)((longlong)puVar69 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
                puVar46[0x40] = puVar69;
                uVar49 = FUN_1472daef4(local_22c0,0);
                puVar46[0x41] = uVar49;
                *(int *)(puVar46 + 0x42) = iVar64;
                local_2330 = (wchar_t *)local_2208._0_8_;
                local_2338 = (wchar_t *)lVar77;
                FUN_143102a1c(param_2,uVar65,local_1fe8,local_2198);
                lVar74 = FUN_1449863e6();
                uVar49 = local_2068;
                lVar77 = local_22b0;
                cVar35 = *(char *)(lVar74 + 0x41);
                if (*(char *)(lVar74 + 0x41) == '\x03') {
                  cVar35 = '\x02';
                }
                puVar46[6] = local_21a0;
                *(char *)(puVar46 + 7) = cVar35;
                lVar74 = DAT_14ca6af00;
                local_2068._3_5_ = SUB85(uVar49,3);
                local_2068._0_3_ = CONCAT12(local_2268[0],CONCAT11((char)local_2140,local_22b1));
                iVar76 = *local_2188;
                if (iVar76 == 0x40000002) {
                  uVar65 = 0;
                }
                else {
                  bVar80 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar76 != 2)) {
                    if (iVar76 == 1) {
                      DVar44 = FUN_140ad26c0();
                      DVar45 = GetCurrentThreadId();
                      bVar80 = DVar44 == DVar45;
                    }
                    else {
                      bVar80 = false;
                    }
                  }
                  uVar65 = (ulonglong)(bVar80 ^ 1);
                }
                fVar81 = *(float *)(lVar74 + uVar65 * 4);
                fVar84 = 0.0;
                if (0.0 <= fVar81) {
                  fVar84 = fVar81;
                }
                local_2068._0_4_ = CONCAT13(0.0 < fVar84,(undefined3)local_2068);
                FUN_147334de2(&local_2098,
                              *(undefined8 *)
                               (&DAT_14ca8c1f0 +
                               (ulonglong)
                               *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar77 + 0x8a4) * 2)
                               * 8),&local_2068);
                FUN_145ea3748();
                local_1df8 = (undefined8 *)0x0;
                uStack_1df0 = 0;
                uStack_1dec = 0;
                FUN_1448f70da(local_2098,&DAT_14ca6cd78,local_2208._0_8_,&local_1df8);
                uVar49 = (**(code **)(**(longlong **)(*(longlong *)(local_22c0 + 8) + 0x178) + 8))()
                ;
                uVar49 = FUN_1472e1976(uVar49,param_2);
                local_2058 = (uint)local_2098;
                uStack_2054 = local_2098._4_4_;
                uStack_2050 = (undefined2)uStack_2090;
                uStack_204e = (undefined2)((ulonglong)uStack_2090 >> 0x10);
                uStack_204c = uStack_2090._4_4_;
                FUN_145ea3748();
                FUN_140069376(param_2);
                puVar6 = local_22c8;
                uVar67 = (undefined6)((ulonglong)puVar46 >> 0x10);
                uVar42 = (undefined4)CONCAT62(uVar67,2);
                if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
                   ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
                  uVar42 = (undefined4)CONCAT62(uVar67,4);
                }
                puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar79 = puVar46 + 0x3e;
                if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
                  FUN_140023dd8(local_22c8,0x1f8);
                  puVar46 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
                  puVar79 = puVar46 + 0x3e;
                }
                *local_22c8 = (ulonglong)puVar79;
                local_1df8 = (undefined8 *)local_2208._0_8_;
                uStack_1df0 = (undefined4)DAT_14ca6cdc0;
                uStack_1dec = (uint)((ulonglong)DAT_14ca6cdc0 >> 0x20);
                if (DAT_14ca6cdc0 != 0) {
                  LOCK();
                  *(int *)(DAT_14ca6cdc0 + 8) = *(int *)(DAT_14ca6cdc0 + 8) + 1;
                  UNLOCK();
                }
                iVar64 = (iVar53 - iVar64) * local_2298._0_4_;
                local_1de8 = 0x4ca6cd78;
                uStack_1de4 = 1;
                local_2338 = (wchar_t *)CONCAT71(local_2338._1_7_,2);
                FUN_140068f1a(puVar46,&local_2069,&local_1df8,uVar42);
                *puVar46 = &PTR_FUN_14a3336a0;
                puVar46[0x37] = local_22b0;
                puVar46[0x38] = local_22c0;
                puVar46[0x39] = uVar49;
                *(uint *)(puVar46 + 0x3a) = local_2058;
                *(uint *)((longlong)puVar46 + 0x1d4) = uStack_2054;
                *(uint *)(puVar46 + 0x3b) = CONCAT22(uStack_204e,uStack_2050);
                *(undefined4 *)((longlong)puVar46 + 0x1dc) = uStack_204c;
                puVar46[0x3c] = local_2208._0_8_;
                *(int *)(puVar46 + 0x3d) = iVar64;
                iVar64 = *(int *)(param_2 + 0x170);
                *(uint *)(param_2 + 0x170) = iVar64 + 1U;
                if (*(uint *)(param_2 + 0x174) < iVar64 + 1U) {
                  FUN_14470e57a(local_2228,iVar64);
                }
                *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar64 * 8) = puVar46;
                *(int *)((longlong)puVar46 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
                FUN_140069100(param_2,puVar46);
                uVar47 = local_21f8;
              }
              lVar68 = lVar68 + 1;
              uVar65 = local_22c0;
            } while (lVar68 < (longlong)local_2248);
          }
        }
        lVar68 = *(longlong *)(local_22b0 + 8);
        local_21f8 = uVar47;
        cVar35 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(lVar68 + 8) * 2))
        ;
        if (cVar35 == '\0') {
          auVar31._8_8_ = 0;
          auVar31._0_8_ = local_2278._8_8_;
          local_2278 = auVar31 << 0x40;
        }
        else if ((((*(char *)(uVar65 + 0x3098) == '\x01') &&
                  ((*(char *)(uVar65 + 0x23e8) != '\x01' || (*(char *)(uVar65 + 0x23ea) == '\x01')))
                  ) && (DAT_14ca84ef4 == '\x01')) && (DAT_14ca84ef5 == '\x01')) {
          auVar29._8_8_ = 0;
          auVar29._0_8_ = local_2278._8_8_;
          local_2278 = auVar29 << 0x40;
          if (DAT_14ca6aec0 != 0) {
            lVar77 = lVar68 + 0x36c8;
            if (*(longlong *)(lVar68 + 0x36e8) != 0) {
              lVar77 = *(longlong *)(lVar68 + 0x36e8);
            }
            iVar64 = *(int *)(lVar68 + 0x36f0);
            if ((longlong)iVar64 == 0) goto LAB_1431065fb;
            lVar68 = *(longlong *)(local_22c0 + 0x13788);
            lVar74 = 0;
            do {
              lVar75 = *(longlong *)(lVar77 + lVar74);
              lVar7 = *(longlong *)(lVar75 + 0x28);
              if (((*(float *)(lVar7 + 0x40) * *(float *)(lVar7 + 0x40) < 1e-05) &&
                  (*(float *)(lVar7 + 0x44) * *(float *)(lVar7 + 0x44) < 1e-05)) &&
                 (*(float *)(lVar7 + 0x48) * *(float *)(lVar7 + 0x48) < 1e-05)) goto LAB_14310576e;
              bVar36 = *(byte *)(lVar7 + 0x1d0);
              if ((bVar36 & 4) == 0) {
LAB_14310572c:
                cVar35 = FUN_1400bd22a(lVar75,local_22c0,1);
                if (((cVar35 == '\0') ||
                    (cVar35 = FUN_144b1209e(lVar7,*(undefined8 *)(local_22c0 + 8)), cVar35 != '\x01'
                    )) || ((DAT_14ca6aec0 == 0 || (*(longlong *)(lVar75 + 0x28) != lVar68))))
                goto LAB_14310576e;
                if (lVar75 != 0) {
                  puVar59 = (undefined *)(*(longlong *)(local_22c0 + 8) + 0x1b8);
                  if (*(char *)(*(longlong *)(local_22c0 + 8) + 0xd0) == '\0') {
                    puVar59 = &DAT_14cb05410;
                  }
                  iVar76 = (int)*(undefined8 *)(puVar59 + 0x10);
                  iVar64 = 1;
                  if (1 < iVar76) {
                    iVar64 = iVar76;
                  }
                  iVar76 = (int)((ulonglong)*(undefined8 *)(puVar59 + 0x10) >> 0x20);
                  if (iVar76 < 2) {
                    iVar76 = 1;
                  }
                  local_1a58 = (undefined8 *)CONCAT44(iVar76,iVar64);
                  FUN_140047e94(&local_2058,&local_1a58,&local_2068);
                  puVar6 = local_22c8;
                  uStack_1a40 = DAT_14ca83a40;
                  fStack_1a50 = (float)DAT_14ca83a30;
                  uStack_1a4c = DAT_14ca83a34;
                  uStack_1a48 = DAT_14ca83a38;
                  uStack_1a44 = DAT_14ca83a3c;
                  uStack_1a3c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
                  uStack_1a26 = 2;
                  local_1a58 = (undefined8 *)0x80020808;
                  uStack_1a25 = 0x15;
                  uStack_1a24 = 0;
                  uStack_1a2c = uStack_2050;
                  uStack_1a2a = 1;
                  uStack_1a28 = 0x101;
                  uVar73 = local_2058;
                  if ((int)DAT_14ca84e40 <= (int)local_2058) {
                    uVar73 = DAT_14ca84e40;
                  }
                  if ((int)uVar73 < 2) {
                    uVar73 = 1;
                  }
                  uStack_1a23 = 0xff;
                  uStack_1a30 = DAT_14ca84e40;
                  if ((int)uStack_2054 < (int)DAT_14ca84e40) {
                    uStack_1a30 = uStack_2054;
                  }
                  if ((int)uStack_1a30 < 2) {
                    uStack_1a30 = 1;
                  }
                  local_1a38 = (double)((ulonglong)uVar73 << 0x20);
                  uVar47 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
                  uVar65 = uVar47 + 0x120;
                  if (*(ulonglong *)(param_2 + 0x78) < uVar65) {
                    FUN_140023dd8(local_22c8,0x128);
                    uVar47 = *puVar6 + 7 & 0xfffffffffffffff8;
                    uVar65 = uVar47 + 0x120;
                  }
                  *(ulonglong *)(param_2 + 0x70) = uVar65;
                  FUN_1456bbb8c(uVar47,L"VolumetricFog.RaytracedShadowVolume",&local_1a58,0);
                  iVar64 = *(int *)(param_2 + 0x180);
                  *(uint *)(param_2 + 0x180) = iVar64 + 1U;
                  if (*(uint *)(param_2 + 0x184) < iVar64 + 1U) {
                    FUN_14472c0f6(local_2250,iVar64);
                  }
                  puVar6 = local_22c8;
                  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar64 * 8) = uVar47;
                  local_2278._0_8_ = uVar47;
                  *(int *)(uVar47 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
                  puVar46 = (undefined8 *)
                            (*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
                  puVar79 = puVar46 + 0x3e;
                  if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
                    FUN_140023dd8(local_22c8,0x200);
                    puVar46 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
                    puVar79 = puVar46 + 0x3e;
                  }
                  *local_22c8 = (ulonglong)puVar79;
                  *puVar46 = &PTR_FUN_14a332930;
                  puVar79 = puVar46 + 2;
                  puVar46[2] = 0;
                  *(undefined1 *)(puVar46 + 3) = 1;
                  puVar46[4] = 0;
                  *(undefined1 *)(puVar46 + 5) = 1;
                  puVar46[6] = 0;
                  *(undefined1 *)(puVar46 + 7) = 1;
                  lVar68 = 0xc0;
                  do {
                    puVar69 = (undefined8 *)((longlong)puVar46 + lVar68 + 0x10);
                    *puVar69 = 0;
                    puVar69[1] = 0x3f80000000000000;
                    *(undefined8 *)((longlong)puVar46 + lVar68) = 0;
                    ((undefined8 *)((longlong)puVar46 + lVar68))[1] = 0x3f80000000000000;
                    lVar68 = lVar68 + 0x20;
                  } while (lVar68 != 0x1c0);
                  puVar46[0x3a] = 0;
                  puVar46[0x3b] = 0;
                  iVar64 = *(int *)(param_2 + 0xa0);
                  *(uint *)(param_2 + 0xa0) = iVar64 + 1U;
                  if (*(uint *)(param_2 + 0xa4) < iVar64 + 1U) {
                    FUN_1448cfae8(local_22a0,iVar64);
                  }
                  puVar6 = local_22c8;
                  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar64 * 8) = puVar46;
                  uVar49 = local_2278._0_8_;
                  uVar39 = *(undefined1 *)(local_2278._0_8_ + 0x94);
                  puVar72 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar69 = puVar72 + 9;
                  if (*(undefined8 **)(param_2 + 0x78) < puVar69) {
                    FUN_140023dd8(local_22c8,0x50);
                    puVar72 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
                    puVar69 = puVar72 + 9;
                  }
                  *(undefined8 **)(param_2 + 0x70) = puVar69;
                  puVar72[1] = *(undefined8 *)(uVar49 + 8);
                  puVar72[2] = 0;
                  *(undefined1 *)(puVar72 + 3) = 0;
                  *(undefined8 *)((longlong)puVar72 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar72 + 5) = 0;
                  *puVar72 = &PTR_FUN_14a1fb948;
                  *(undefined1 *)(puVar72 + 6) = uVar39;
                  *(undefined1 *)(puVar72 + 7) = 0;
                  *(undefined4 *)((longlong)puVar72 + 0x31) = 0;
                  *(undefined2 *)((longlong)puVar72 + 0x35) = 0;
                  puVar72[8] = uVar49;
                  iVar64 = *(int *)(param_2 + 0x1a0);
                  *(uint *)(param_2 + 0x1a0) = iVar64 + 1U;
                  if (*(uint *)(param_2 + 0x1a4) < iVar64 + 1U) {
                    FUN_1447568fc(local_2238,iVar64);
                  }
                  uVar65 = local_22c0;
                  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar64 * 8) = puVar72;
                  *(int *)((longlong)puVar72 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
                  puVar46[0x3a] = puVar72;
                  uVar49 = FUN_1472daef4(local_22c0,0);
                  puVar46[0x3b] = uVar49;
                  lVar68 = FUN_1447e4f80();
                  cVar35 = *(char *)(lVar68 + 0x41);
                  if (cVar35 == '\x03') {
                    cVar35 = '\x02';
                  }
                  puVar46[2] = *(undefined8 *)(uVar65 + 0x18);
                  *(char *)(puVar46 + 3) = cVar35;
                  uVar49 = *(undefined8 *)(uVar65 + 0x13780);
                  lVar68 = FUN_144a12b9e();
                  uVar65 = local_22c0;
                  cVar35 = *(char *)(lVar68 + 0x41);
                  if (cVar35 == '\x03') {
                    cVar35 = '\x02';
                  }
                  puVar46[4] = uVar49;
                  *(char *)(puVar46 + 5) = cVar35;
                  uVar42 = 0;
                  if (DAT_14c760abc != 0) {
                    uVar42 = DAT_14ca6aed8;
                  }
                  *(undefined4 *)(puVar46 + 0x3c) = uVar42;
                  FUN_144980f13(puVar46 + 6,local_22c0,local_1fe8);
                  FUN_14733abe4(*(undefined8 *)(uVar65 + 0x13818),&local_1df8);
                  FUN_145f6e978();
                  local_1a58 = (undefined8 *)0x0;
                  fStack_1a50 = 0.0;
                  uStack_1a4c = 0;
                  FUN_1448f70da(local_1df8,&DAT_14ca6ce00,puVar79,&local_1a58);
                  uVar49 = (**(code **)(**(longlong **)(*(longlong *)(uVar65 + 8) + 0x178) + 8))();
                  uVar49 = FUN_1472e1976(uVar49,param_2);
                  iVar76 = uStack_2054 * local_2058;
                  iVar64 = CONCAT22(uStack_204e,uStack_2050);
                  local_2098 = local_1df8;
                  uStack_2090 = CONCAT44(uStack_1dec,uStack_1df0);
                  FUN_145f6e978();
                  FUN_140069376(param_2);
                  puVar6 = local_22c8;
                  uVar42 = 2;
                  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2))
                     && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
                    uVar42 = 4;
                  }
                  puVar69 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar46 = puVar69 + 0x3d;
                  if (*(undefined8 **)(param_2 + 0x78) < puVar46) {
                    FUN_140023dd8(local_22c8,0x1f0);
                    puVar69 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
                    puVar46 = puVar69 + 0x3d;
                    uVar65 = local_22c0;
                  }
                  *local_22c8 = (ulonglong)puVar46;
                  fStack_1a50 = (float)DAT_14ca6ce48;
                  uStack_1a4c = (undefined4)((ulonglong)DAT_14ca6ce48 >> 0x20);
                  if (DAT_14ca6ce48 != 0) {
                    LOCK();
                    *(int *)(DAT_14ca6ce48 + 8) = *(int *)(DAT_14ca6ce48 + 8) + 1;
                    UNLOCK();
                  }
                  uStack_1a48 = 0x4ca6ce00;
                  uStack_1a44 = 1;
                  local_2338 = (wchar_t *)CONCAT71(local_2338._1_7_,2);
                  local_1a58 = puVar79;
                  FUN_140068f1a(puVar69,&local_2069,&local_1a58,uVar42);
                  *puVar69 = &PTR_FUN_14a332940;
                  puVar69[0x37] = uVar65;
                  puVar69[0x38] = uVar49;
                  *(uint *)(puVar69 + 0x39) = (uint)local_2098;
                  *(uint *)((longlong)puVar69 + 0x1cc) = local_2098._4_4_;
                  *(undefined4 *)(puVar69 + 0x3a) = (undefined4)uStack_2090;
                  *(undefined4 *)((longlong)puVar69 + 0x1d4) = uStack_2090._4_4_;
                  puVar69[0x3b] = puVar79;
                  *(int *)(puVar69 + 0x3c) = iVar76 * iVar64;
                  iVar64 = *(int *)(param_2 + 0x170);
                  *(uint *)(param_2 + 0x170) = iVar64 + 1U;
                  if (*(uint *)(param_2 + 0x174) < iVar64 + 1U) {
                    FUN_14470e57a(local_2228,iVar64);
                  }
                  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar64 * 8) = puVar69;
                  *(int *)((longlong)puVar69 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
                  FUN_140069100(param_2,puVar69);
                  break;
                }
                goto LAB_1431065fb;
              }
              param_2 = local_2288;
              if ((*(byte *)(lVar75 + 0xe4) & 1) == 0) {
                if ((bVar36 & 8) != 0) goto LAB_14310572c;
              }
              else if (((bVar36 & 8) != 0) && (DAT_14c760480 <= *(int *)(lVar75 + 0xf8)))
              goto LAB_14310572c;
LAB_14310576e:
              lVar74 = lVar74 + 8;
              auVar30._8_8_ = 0;
              auVar30._0_8_ = local_2278._8_8_;
              local_2278 = auVar30 << 0x40;
            } while ((longlong)iVar64 * 8 != lVar74);
          }
        }
        else {
LAB_1431065fb:
          auVar32._8_8_ = 0;
          auVar32._0_8_ = local_2278._8_8_;
          local_2278 = auVar32 << 0x40;
        }
        puVar6 = local_22c8;
        puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar79 = puVar46 + 0x50;
        if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
          FUN_140023dd8(local_22c8,0x290);
          puVar46 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
          puVar79 = puVar46 + 0x50;
        }
        *local_22c8 = (ulonglong)puVar79;
        *puVar46 = &PTR_FUN_14a3336b8;
        puVar46[8] = 0;
        *(undefined1 *)(puVar46 + 9) = 1;
        puVar46[10] = 0;
        *(undefined1 *)(puVar46 + 0xb) = 1;
        puVar46[0xc] = 0;
        *(undefined1 *)(puVar46 + 0xd) = 1;
        lVar68 = 0xf0;
        do {
          puVar79 = (undefined8 *)((longlong)puVar46 + lVar68 + 0x10);
          *puVar79 = 0;
          puVar79[1] = 0x3f80000000000000;
          *(undefined8 *)((longlong)puVar46 + lVar68) = 0;
          ((undefined8 *)((longlong)puVar46 + lVar68))[1] = 0x3f80000000000000;
          lVar68 = lVar68 + 0x20;
        } while (lVar68 != 0x1f0);
        puVar46[0x40] = 0;
        puVar46[0x46] = 0;
        puVar46[0x47] = 0x3f80000000000000;
        puVar46[0x4c] = 0;
        puVar46[0x4e] = 0;
        puVar46[0x4f] = 0;
        iVar64 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar64 + 1U) {
          FUN_1448cfae8(local_22a0,iVar64);
        }
        uVar65 = local_22c0;
        bVar80 = 0 < local_220c;
        *(undefined8 **)(*local_22a0 + (longlong)iVar64 * 8) = puVar46;
        uVar49 = *(undefined8 *)(local_22c0 + 0x1209c);
        puVar46[2] = *(undefined8 *)(local_22c0 + 0x12094);
        puVar46[3] = uVar49;
        uVar49 = *(undefined8 *)(local_22c0 + 0x120ac);
        puVar46[4] = *(undefined8 *)(local_22c0 + 0x120a4);
        puVar46[5] = uVar49;
        *(undefined4 *)(puVar46 + 6) = *(undefined4 *)(local_22c0 + 0x120b4);
        puVar46[0x4e] = uStack_1ea8;
        puVar46[0x4f] = local_1ea0;
        puVar79 = (undefined8 *)(local_22c0 + 72000);
        puVar69 = puVar46 + 0x40;
        for (lVar68 = 0xd; lVar68 != 0; lVar68 = lVar68 + -1) {
          *puVar69 = *puVar79;
          puVar79 = puVar79 + 1;
          puVar69 = puVar69 + 1;
        }
        lVar68 = FUN_144a80e70();
        cVar35 = *(char *)(lVar68 + 0x41);
        if (*(char *)(lVar68 + 0x41) == '\x03') {
          cVar35 = '\x02';
        }
        puVar46[8] = local_2108;
        *(char *)(puVar46 + 9) = cVar35;
        lVar68 = FUN_1447e4f80();
        cVar35 = *(char *)(lVar68 + 0x41);
        if (cVar35 == '\x03') {
          cVar35 = '\x02';
        }
        puVar46[10] = *(undefined8 *)(uVar65 + 0x18);
        *(char *)(puVar46 + 0xb) = cVar35;
        FUN_144980f13(puVar46 + 0xc,uVar65,local_1fe8);
        lVar77 = local_21b0;
        lVar68 = local_22b0;
        cVar35 = FUN_1400838d1(*(undefined8 *)(local_22b0 + 8),local_21b0);
        cVar40 = FUN_1400838d1(*(undefined8 *)(lVar68 + 8),lVar77);
        bVar38 = false;
        if ((cVar35 != '\0') && (bVar38 = false, cVar40 != '\0')) {
          bVar38 = 0 < *(int *)(DAT_14c9ec468 + 4);
        }
        if ((*(longlong *)(local_22c0 + 8) == 0) ||
           (plVar52 = *(longlong **)(*(longlong *)(local_22c0 + 8) + 0x40),
           plVar52 == (longlong *)0x0)) {
          iVar64 = 0;
        }
        else {
          (**(code **)(*plVar52 + 0x4e8))(plVar52,&local_1a58);
          iVar64 = (uint)(CONCAT44(uStack_1a4c,fStack_1a50) != 0 && local_1a58 != (undefined8 *)0x0)
                   << 2;
        }
        uVar65 = local_22c0;
        puVar46 = puVar46 + 2;
        uVar49 = *(undefined8 *)(local_22c0 + 0x13818);
        uVar73 = CONCAT31(0,bVar80);
        local_2208._0_4_ = uVar73;
        FUN_1415337a4();
        FUN_1448e935e(uVar49,&local_1a58,&DAT_14ca6b008,iVar64 + (uint)bVar38 * 2 | uVar73);
        FUN_1415337a4();
        puVar79 = local_1a58;
        uVar49 = CONCAT44(uStack_1a4c,fStack_1a50);
        FUN_1415338c6();
        local_1a58 = (undefined8 *)0x0;
        fStack_1a50 = 0.0;
        uStack_1a4c = 0;
        FUN_1448f70da(puVar79,&DAT_14ca6cad0,puVar46,&local_1a58);
        fStack_1a50 = (float)uVar65;
        uStack_1a4c = (undefined4)(uVar65 >> 0x20);
        uStack_1a40 = local_20b0;
        uStack_1a48 = local_20b8;
        uStack_1a44 = uStack_20b4;
        local_1a38 = (double)CONCAT71(local_1a38._1_7_,local_1fe8[0]);
        local_1928 = (undefined2 *)0x0;
        lVar68 = (longlong)(int)uStack_1ec8;
        local_1918 = CONCAT44(local_1918._4_4_,(int)uStack_1ec8);
        local_1a58 = puVar46;
        if (lVar68 == 0) {
          local_1918 = CONCAT44(0x10,(int)uStack_1ec8);
          _Size = 0;
        }
        else {
          pfVar50 = local_1ed8;
          if (local_1ed8 == (float *)0x0) {
            pfVar50 = (float *)&local_1fd8;
          }
          FUN_14310ea48(&uStack_1a28,uStack_1ec8 & 0xffffffff);
          puVar61 = local_1928;
          if (local_1928 == (undefined2 *)0x0) {
            puVar61 = &uStack_1a28;
          }
          _Size = lVar68 << 4;
          memcpy(puVar61,pfVar50,_Size);
        }
        *(undefined4 *)(local_21a8 + 4) = (undefined4)local_1e98;
        *(undefined4 *)((longlong)local_21a8 + 0x24) = local_1e98._4_4_;
        *(undefined4 *)(local_21a8 + 5) = (undefined4)uStack_1e90;
        *(undefined4 *)((longlong)local_21a8 + 0x2c) = uStack_1e90._4_4_;
        *(undefined4 *)(local_21a8 + 2) = (undefined4)uStack_1ea8;
        *(undefined4 *)((longlong)local_21a8 + 0x14) = uStack_1ea8._4_4_;
        *(undefined4 *)(local_21a8 + 3) = (undefined4)local_1ea0;
        *(undefined4 *)((longlong)local_21a8 + 0x1c) = local_1ea0._4_4_;
        *(undefined4 *)local_21a8 = (undefined4)local_1eb8;
        *(undefined4 *)((longlong)local_21a8 + 4) = local_1eb8._4_4_;
        *(undefined4 *)(local_21a8 + 1) = (undefined4)uStack_1eb0;
        *(undefined4 *)((longlong)local_21a8 + 0xc) = uStack_1eb0._4_4_;
        local_18d8 = puVar79;
        uStack_18d0 = uVar49;
        FUN_1415338c6();
        FUN_140069376(param_2);
        puVar6 = local_22c8;
        uVar67 = (undefined6)(_Size >> 0x10);
        uVar42 = (undefined4)CONCAT62(uVar67,2);
        if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
           ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
          uVar42 = (undefined4)CONCAT62(uVar67,4);
        }
        puVar69 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar79 = puVar69 + 0x6a;
        if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
          FUN_140023dd8(local_22c8,0x360);
          puVar69 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
          puVar79 = puVar69 + 0x6a;
        }
        *local_22c8 = (ulonglong)puVar79;
        uStack_1df0 = (undefined4)DAT_14ca6cb18;
        uStack_1dec = (uint)((ulonglong)DAT_14ca6cb18 >> 0x20);
        if (DAT_14ca6cb18 != 0) {
          LOCK();
          *(int *)(DAT_14ca6cb18 + 8) = *(int *)(DAT_14ca6cb18 + 8) + 1;
          UNLOCK();
        }
        local_1de8 = 0x4ca6cad0;
        uStack_1de4 = 1;
        local_2338 = (wchar_t *)CONCAT71(local_2338._1_7_,2);
        local_1df8 = puVar46;
        FUN_140068f1a(puVar69,&local_2098,&local_1df8,uVar42);
        puVar61 = local_1928;
        *puVar69 = &PTR_FUN_14a3336c0;
        puVar69[0x38] = local_1a58;
        puVar69[0x39] = CONCAT44(uStack_1a4c,fStack_1a50);
        *(ulonglong *)((longlong)puVar69 + 0x1cc) = CONCAT44(uStack_1a48,uStack_1a4c);
        *(ulonglong *)((longlong)puVar69 + 0x1d4) = CONCAT44(uStack_1a40,uStack_1a44);
        *(undefined1 *)(puVar69 + 0x3c) = (undefined1)local_1a38;
        if (local_1928 == (undefined2 *)0x0) {
          memcpy(puVar69 + 0x3e,&uStack_1a28,0x100);
        }
        puVar69[0x5e] = puVar61;
        local_1928 = (undefined2 *)0x0;
        *(undefined4 *)(puVar69 + 0x60) = (undefined4)local_1918;
        *(undefined4 *)((longlong)puVar69 + 0x304) = local_1918._4_4_;
        local_1918 = 0x1000000000;
        uVar49 = *local_21a8;
        uVar8 = local_21a8[1];
        uVar42 = *(undefined4 *)(local_21a8 + 2);
        uVar83 = *(undefined4 *)((longlong)local_21a8 + 0x14);
        uVar17 = *(undefined4 *)(local_21a8 + 3);
        uVar18 = *(undefined4 *)((longlong)local_21a8 + 0x1c);
        uVar19 = *(undefined4 *)((longlong)local_21a8 + 0x24);
        uVar20 = *(undefined4 *)(local_21a8 + 5);
        uVar21 = *(undefined4 *)((longlong)local_21a8 + 0x2c);
        *(undefined4 *)(puVar69 + 0x66) = *(undefined4 *)(local_21a8 + 4);
        *(undefined4 *)((longlong)puVar69 + 0x334) = uVar19;
        *(undefined4 *)(puVar69 + 0x67) = uVar20;
        *(undefined4 *)((longlong)puVar69 + 0x33c) = uVar21;
        *(undefined4 *)(puVar69 + 100) = uVar42;
        *(undefined4 *)((longlong)puVar69 + 0x324) = uVar83;
        *(undefined4 *)(puVar69 + 0x65) = uVar17;
        *(undefined4 *)((longlong)puVar69 + 0x32c) = uVar18;
        puVar69[0x62] = uVar49;
        puVar69[99] = uVar8;
        *(undefined4 *)(puVar69 + 0x68) = (undefined4)local_18d8;
        *(undefined4 *)((longlong)puVar69 + 0x344) = local_18d8._4_4_;
        *(undefined4 *)(puVar69 + 0x69) = (undefined4)uStack_18d0;
        *(undefined4 *)((longlong)puVar69 + 0x34c) = uStack_18d0._4_4_;
        iVar64 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar64 + 1U) {
          FUN_14470e57a(local_2228,iVar64);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar64 * 8) = puVar69;
        *(int *)((longlong)puVar69 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar69);
        if (local_1928 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar43 = local_20b0;
        uVar54 = uStack_20b4;
        uVar73 = local_20b8;
        auVar27 = local_2268._0_16_;
        lVar68 = DAT_14ca97170;
        if (0 < *(int *)(local_22c0 + 0x3748)) {
          uVar42 = *(undefined4 *)(local_22c0 + 0x120b8);
          local_2268._4_4_ = 0;
          local_2268._0_4_ = local_20b8;
          uVar65 = local_2268._0_8_;
          uVar47 = (ulonglong)uStack_20b4;
          uVar5 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_22c0 + 0x3090) * 2);
          iVar64 = *local_2188;
          local_2268._0_16_ = auVar27;
          if (((iVar64 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar64 == 2)) {
            uVar66 = 0;
          }
          else if (iVar64 == 1) {
            uVar83 = FUN_140ad26c0();
            local_2268._0_4_ = uVar83;
            DVar44 = GetCurrentThreadId();
            uVar66 = (ulonglong)(local_2268._0_4_ != DVar44);
          }
          else {
            uVar66 = 1;
          }
          puVar6 = local_22c8;
          if (((&DAT_14ca814b8)[(ulonglong)uVar5 * 0xf] != 1) &&
             (*(int *)(lVar68 + uVar66 * 4) < 1 || 3 < (int)(&DAT_14ca814b8)[(ulonglong)uVar5 * 0xf]
             )) {
            local_21d8._0_4_ = uVar43;
            pfVar60 = local_1ed8 + 1;
            pfVar50 = local_1ed8;
            if (local_1ed8 == (float *)0x0) {
              pfVar60 = (float *)((longlong)&local_1fd8 + 4);
              pfVar50 = (float *)&local_1fd8;
            }
            fVar81 = *pfVar60;
            fVar84 = *pfVar50;
            puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar79 = puVar46 + 0x2c;
            if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
              FUN_140023dd8(local_22c8);
              puVar46 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
              puVar79 = puVar46 + 0x2c;
            }
            *local_22c8 = (ulonglong)puVar79;
            *puVar46 = &PTR_FUN_14a3338c8;
            local_2248 = puVar46 + 2;
            puVar46[2] = 0;
            *(undefined1 *)(puVar46 + 3) = 1;
            puVar46[4] = 0;
            *(undefined1 *)(puVar46 + 5) = 1;
            puVar46[6] = 0;
            *(undefined1 *)(puVar46 + 7) = 1;
            puVar46[8] = 0;
            *(undefined1 *)(puVar46 + 9) = 1;
            puVar46[10] = 0;
            *(undefined1 *)(puVar46 + 0xb) = 1;
            lVar68 = 0x72;
            do {
              puVar79 = (undefined8 *)((longlong)puVar46 + lVar68 + -0x12);
              *puVar79 = 0;
              puVar79[1] = 0;
              *(undefined4 *)((longlong)puVar46 + lVar68 + -2) = 0xffff0000;
              lVar68 = lVar68 + 0x18;
            } while (lVar68 != 0x132);
            local_2268._0_16_ = CONCAT88(local_2268._8_8_,uVar65);
            *(undefined4 *)((longlong)puVar46 + 0x134) = 0;
            puVar46[0x24] = 0;
            puVar46[0x25] = 0;
            *(undefined2 *)(puVar46 + 0x26) = 0;
            *(undefined4 *)(puVar46 + 0x27) = 0xffffffff;
            *(undefined4 *)((longlong)puVar46 + 0x13c) = 0xffffffff;
            *(undefined4 *)(puVar46 + 0x28) = 0xffffffff;
            *(undefined4 *)((longlong)puVar46 + 0x144) = 0xffffffff;
            *(undefined4 *)(puVar46 + 0x29) = 0;
            *(undefined2 *)((longlong)puVar46 + 0x14c) = 0;
            puVar46[0x2a] = 0;
            iVar64 = *(int *)(param_2 + 0xa0);
            uVar43 = iVar64 + 1;
            *(uint *)(param_2 + 0xa0) = uVar43;
            if (*(uint *)(param_2 + 0xa4) < uVar43) {
              FUN_1448cfae8(local_22a0);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar64 * 8) = puVar46;
            lVar68 = (**(code **)(**(longlong **)(local_22b0 + 8) + 0x340))();
            puVar6 = local_22c8;
            puVar69 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar79 = puVar69 + 0x36;
            if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
              FUN_140023dd8(local_22c8);
              puVar69 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
              puVar79 = puVar69 + 0x36;
            }
            local_2138._0_4_ = fVar84 / (float)(int)uVar73;
            local_2128._0_4_ = fVar81 / (float)(int)uVar54;
            local_2298 = (double)CONCAT44(local_2298._4_4_,uVar42);
            *(undefined8 **)(param_2 + 0x70) = puVar79;
            *puVar69 = &PTR_FUN_14a333788;
            puVar79 = puVar69 + 2;
            puVar69[0x1e] = 0;
            *(undefined4 *)(puVar69 + 0x1f) = 0;
            memset(puVar79,0,0x90);
            *(undefined4 *)((longlong)puVar69 + 0xfc) = 0x3f800000;
            iVar64 = *(int *)(param_2 + 0xa0);
            *(uint *)(param_2 + 0xa0) = iVar64 + 1U;
            if (*(uint *)(param_2 + 0xa4) < iVar64 + 1U) {
              FUN_1448cfae8(local_22a0,iVar64);
            }
            uVar65 = local_22c0;
            *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar64 * 8) = puVar69;
            local_2338 = (wchar_t *)puVar79;
            FUN_1448e315a(param_2,*(undefined8 *)(*(longlong *)(local_22c0 + 8) + 0x348),
                          *(undefined4 *)(local_22c0 + 0x3090),0);
            FUN_141786c46(&local_1a58,uVar65);
            puVar69[0x1c] = local_1a58;
            dVar92 = *(double *)(uVar65 + 0x838);
            dVar88 = *(double *)(uVar65 + 0x840);
            dVar85 = *(double *)(uVar65 + 0x848);
            dVar2 = *(double *)(uVar65 + 0x850);
            local_21c8 = *(double *)(uVar65 + 0x858);
            local_2158 = *(undefined8 **)(uVar65 + 0x860);
            local_21e8 = *(double *)(uVar65 + 0x868);
            dVar3 = *(double *)(uVar65 + 0x870);
            dVar4 = *(double *)(uVar65 + 0x878);
            local_2198 = *(double *)(uVar65 + 0x880);
            local_21a0 = *(double *)(uVar65 + 0x888);
            local_2220 = *(undefined8 **)(uVar65 + 0x890);
            local_21e0 = *(double *)(uVar65 + 0x898);
            local_2150 = *(double *)(uVar65 + 0x8a0);
            dVar89 = *(double *)(uVar65 + 0x8a8);
            if (1.0 <= dVar89) {
              local_2220 = (undefined8 *)((double)local_2220 - *(double *)(uVar65 + 0x1088));
              local_21e0 = local_21e0 - *(double *)(uVar65 + 0x1090);
            }
            else {
              dVar3 = dVar3 - *(double *)(uVar65 + 0x1088);
              dVar4 = dVar4 - *(double *)(uVar65 + 0x1090);
            }
            *(float *)(puVar69 + 0x14) = (float)*(double *)(uVar65 + 0x830);
            *(float *)((longlong)puVar69 + 0xa4) = (float)dVar92;
            *(float *)(puVar69 + 0x15) = (float)dVar88;
            *(float *)((longlong)puVar69 + 0xac) = (float)dVar85;
            *(float *)(puVar69 + 0x16) = (float)dVar2;
            *(float *)((longlong)puVar69 + 0xb4) = (float)local_21c8;
            *(float *)(puVar69 + 0x17) = (float)(double)local_2158;
            *(float *)((longlong)puVar69 + 0xbc) = (float)local_21e8;
            *(float *)(puVar69 + 0x19) = (float)local_2198;
            *(float *)((longlong)puVar69 + 0xcc) = (float)local_21a0;
            *(float *)(puVar69 + 0x1a) = (float)(double)local_2220;
            *(float *)((longlong)puVar69 + 0xd4) = (float)local_21e0;
            *(float *)(puVar69 + 0x1b) = (float)local_2150;
            *(float *)((longlong)puVar69 + 0xdc) = (float)dVar89;
            *(float *)(puVar69 + 0x18) = (float)local_2138._0_4_ + (float)dVar3;
            *(float *)((longlong)puVar69 + 0xc4) = (float)local_2128._0_4_ + (float)dVar4;
            pfVar50 = local_1ed8;
            if (local_1ed8 == (float *)0x0) {
              pfVar50 = (float *)&local_1fd8;
            }
            fVar81 = pfVar50[1];
            fVar84 = pfVar50[2];
            fVar90 = pfVar50[3];
            *(float *)(puVar69 + 0x1e) = *pfVar50;
            *(float *)((longlong)puVar69 + 0xf4) = fVar81;
            *(float *)(puVar69 + 0x1f) = fVar84;
            *(float *)((longlong)puVar69 + 0xfc) = fVar90;
            FUN_140551d73(local_22c0,puVar69 + 0x20);
            if (lVar68 == 0) {
              *(undefined4 *)(puVar69 + 0x33) = DAT_14c846338;
              puVar69[0x32] = DAT_14c846330;
              *(undefined8 *)((longlong)puVar69 + 0x19c) = 0x3f0000003a83126f;
              uVar42 = 0x3f800000;
            }
            else {
              *(undefined4 *)(puVar69 + 0x33) = *(undefined4 *)(lVar68 + 0x28);
              puVar69[0x32] = *(undefined8 *)(lVar68 + 0x20);
              *(undefined4 *)((longlong)puVar69 + 0x19c) = *(undefined4 *)(lVar68 + 0x2c);
              *(undefined4 *)(puVar69 + 0x34) = *(undefined4 *)(lVar68 + 0x30);
              uVar42 = *(undefined4 *)(lVar68 + 0x34);
            }
            uVar83 = local_2298._0_4_;
            *(undefined4 *)((longlong)puVar69 + 0x1a4) = uVar42;
            FUN_141587564();
            param_2 = local_2288;
            puVar6 = local_22c8;
            uVar49 = DAT_14ca6b9f8;
            puVar72 = (undefined8 *)(*(longlong *)(local_2288 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar69 = puVar72 + 9;
            if (*(undefined8 **)(local_2288 + 0x78) < puVar69) {
              FUN_140023dd8(local_22c8,0x50);
              puVar72 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
              puVar69 = puVar72 + 9;
            }
            *local_22c8 = (ulonglong)puVar69;
            puVar72[1] = uVar49;
            puVar72[2] = 0;
            *puVar72 = &PTR_FUN_14a1fb9b8;
            FUN_141587564();
            puVar72[3] = puVar79;
            lVar68 = DAT_14ca6ba28;
            puVar72[4] = DAT_14ca6ba28;
            if (lVar68 != 0) {
              LOCK();
              piVar62 = (int *)(lVar68 + 8);
              *piVar62 = *piVar62 + 1;
              UNLOCK();
            }
            puVar72[5] = &DAT_14ca6b9e0;
            puVar72[6] = 0;
            *(undefined4 *)(puVar72 + 7) = 0xffffffff;
            *(undefined1 *)((longlong)puVar72 + 0x3c) = 0;
            *puVar72 = &PTR_FUN_14a333790;
            puVar72[8] = puVar79;
            iVar64 = *(int *)(param_2 + 0x1b0);
            *(uint *)(param_2 + 0x1b0) = iVar64 + 1U;
            if (*(uint *)(param_2 + 0x1b4) < iVar64 + 1U) {
              FUN_1402aa76e(local_2110,iVar64);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x1a8) + (longlong)iVar64 * 8) = puVar72;
            *(int *)(puVar72 + 7) = *(int *)(param_2 + 0x1b0) + -1;
            FUN_141587564();
            cVar35 = DAT_14ca6ba21;
            if (DAT_14ca6ba21 == '\x03') {
              cVar35 = '\x02';
            }
            puVar46[8] = puVar72;
            *(char *)(puVar46 + 9) = cVar35;
            uVar49 = FUN_1403e6538(param_2);
            lVar68 = FUN_1449865da();
            uVar65 = local_22c0;
            cVar35 = *(char *)(lVar68 + 0x41);
            if (cVar35 == '\x03') {
              cVar35 = '\x02';
            }
            puVar46[10] = uVar49;
            *(char *)(puVar46 + 0xb) = cVar35;
            puVar46[0xc] = local_1eb8;
            puVar46[0xd] = 0;
            *(undefined4 *)(puVar46 + 0xe) = 0xffff0001;
            if (0 < local_220c) {
              puVar46[0xf] = uStack_1eb0;
              puVar46[0x10] = 0;
              *(undefined4 *)(puVar46 + 0x11) = 0xffff0001;
            }
            memcpy(&local_1a58,*(void **)(local_22c0 + 0x3110),0x1960);
            local_2330 = (wchar_t *)(uVar65 + 0x125d0);
            local_2338 = (wchar_t *)(uVar65 + 0x500);
            local_1df8 = (undefined8 *)0x0;
            uStack_1df0 = local_2268._0_4_;
            uStack_1dec = uVar54;
            local_2098 = (undefined8 *)CONCAT44(uVar54,uStack_1df0);
            FUN_14054f8e6(uVar65,&local_1a58,&local_2098,&local_1df8);
            FUN_1401ee234(&local_1df8,&local_1a58,1,1);
            lVar68 = FUN_1447e4f80();
            puVar79 = local_1df8;
            cVar35 = *(char *)(lVar68 + 0x41);
            if (*(char *)(lVar68 + 0x41) == '\x03') {
              cVar35 = '\x02';
            }
            puVar46[2] = local_1df8;
            *(char *)(puVar46 + 3) = cVar35;
            if (local_1df8 != (undefined8 *)0x0) {
              LOCK();
              puVar71 = (uint *)(local_1df8 + 1);
              uVar73 = *puVar71;
              *puVar71 = *puVar71 - 1;
              UNLOCK();
              if ((uVar73 & 0x3fffffff) == 1) {
                puVar71 = (uint *)(local_1df8 + 1);
                LOCK();
                uVar73 = *puVar71;
                *puVar71 = *puVar71 | 0x40000000;
                UNLOCK();
                if ((uVar73 >> 0x1e & 1) == 0) {
                  bVar36 = *(byte *)((longlong)local_1df8 + 0xd);
                  plVar51 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar51[1] = (longlong)puVar79;
                  plVar52 = DAT_14ca843c0;
                  plVar78 = DAT_14ca843c8;
                  if ((bVar36 & 2) == 0) {
                    do {
                      *plVar51 = (longlong)plVar52;
                      LOCK();
                      bVar80 = plVar52 != DAT_14ca843c0;
                      plVar78 = plVar51;
                      if (bVar80) {
                        plVar52 = DAT_14ca843c0;
                        plVar78 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar78;
                      UNLOCK();
                    } while (bVar80);
                  }
                  else {
                    do {
                      *plVar51 = (longlong)plVar78;
                      LOCK();
                      bVar80 = plVar78 != DAT_14ca843c8;
                      plVar52 = plVar51;
                      if (bVar80) {
                        plVar78 = DAT_14ca843c8;
                        plVar52 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar52;
                      UNLOCK();
                    } while (bVar80);
                  }
                }
              }
            }
            lVar68 = FUN_144a96f7c();
            cVar35 = *(char *)(lVar68 + 0x41);
            if (cVar35 == '\x03') {
              cVar35 = '\x02';
            }
            puVar46[4] = *(undefined8 *)(local_22c0 + 0x30e0);
            *(char *)(puVar46 + 5) = cVar35;
            uVar49 = FUN_1448c569e(local_20d0,param_2);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1))
            {
              DAT_14ca4b320 = FUN_145900d44();
              _Init_thread_footer(&DAT_14ca4b328);
            }
            uVar65 = local_22c0;
            cVar35 = *(char *)(DAT_14ca4b320 + 0x41);
            if (cVar35 == '\x03') {
              cVar35 = '\x02';
            }
            puVar46[6] = uVar49;
            *(char *)(puVar46 + 7) = cVar35;
            if (DAT_14ca6bba8 == (undefined8 *)0x0) {
LAB_143107556:
              DAT_14ca6bba8 = (undefined8 *)FUN_14001cc68(0x220,0x10);
              uVar39 = *(undefined1 *)(uVar65 + 0x3090);
              *(undefined4 *)(DAT_14ca6bba8 + 1) = 0xffffffff;
              *(undefined1 *)((longlong)DAT_14ca6bba8 + 0xc) = uVar39;
              *(undefined2 *)((longlong)DAT_14ca6bba8 + 0xd) = 1;
              DAT_14ca6bba8[0x12] = 0;
              DAT_14ca6bba8[0x13] = 0x800000000;
              DAT_14ca6bba8[0x18] = 0;
              DAT_14ca6bba8[0x19] = 0x200000000;
              DAT_14ca6bba8[0x20] = 0;
              DAT_14ca6bba8[0x21] = 0x300000000;
              DAT_14ca6bba8[0x24] = 0;
              DAT_14ca6bba8[0x22] = 0;
              DAT_14ca6bba8[0x23] = 0;
              *(undefined4 *)(DAT_14ca6bba8 + 0x25) = 0x1ffffff;
              *(undefined4 *)(DAT_14ca6bba8 + 0x34) = 0;
              DAT_14ca6bba8[0x26] = 0;
              DAT_14ca6bba8[0x27] = 0;
              DAT_14ca6bba8[0x28] = 0;
              DAT_14ca6bba8[0x29] = 0;
              DAT_14ca6bba8[0x2a] = 0;
              DAT_14ca6bba8[0x2b] = 0;
              *(undefined4 *)((longlong)DAT_14ca6bba8 + 0x1a4) = 4;
              DAT_14ca6bba8[0x3b] = 0;
              DAT_14ca6bba8[0x3c] = 0;
              DAT_14ca6bba8[0x39] = 0;
              DAT_14ca6bba8[0x3a] = 0;
              DAT_14ca6bba8[0x37] = 0;
              DAT_14ca6bba8[0x38] = 0;
              DAT_14ca6bba8[0x35] = 0;
              DAT_14ca6bba8[0x36] = 0;
              *(undefined4 *)(DAT_14ca6bba8 + 0x3d) = 0xffffffff;
              *(undefined2 *)((longlong)DAT_14ca6bba8 + 0x1ec) = 0xff;
              *(undefined1 *)((longlong)DAT_14ca6bba8 + 0x1ee) = 0;
              DAT_14ca6bba8[0x42] = 0;
              DAT_14ca6bba8[0x40] = 0;
              DAT_14ca6bba8[0x41] = 0;
              DAT_14ca6bba8[0x3e] = 0;
              DAT_14ca6bba8[0x3f] = 0;
              *(undefined4 *)(DAT_14ca6bba8 + 0x43) = 0xffffffff;
              *(undefined1 *)((longlong)DAT_14ca6bba8 + 0x21c) = 0;
              *DAT_14ca6bba8 = &PTR_FUN_14a332b90;
              FUN_1447fd100(&DAT_14ca6ba78,*(undefined8 *)(param_2 + 0x18));
              FUN_14006bf18(DAT_14ca6bba8);
            }
            else {
              uVar73 = (uint)*(byte *)((longlong)DAT_14ca6bba8 + 0xc);
              if (*(byte *)((longlong)DAT_14ca6bba8 + 0xc) == 5) {
                uVar73 = DAT_14c760db4;
              }
              if (uVar73 != *(uint *)(local_22c0 + 0x3090)) {
                FUN_144725486();
                puVar79 = DAT_14ca6bba8;
                if (DAT_14ca6bba8 != (undefined8 *)0x0) {
                  FUN_144725486(DAT_14ca6bba8);
                  *puVar79 = &PTR_FUN_14a1ca480;
                  lVar68 = puVar79[0x42];
                  if (lVar68 != 0) {
                    LOCK();
                    puVar71 = (uint *)(lVar68 + 8);
                    uVar73 = *puVar71;
                    *puVar71 = *puVar71 - 1;
                    UNLOCK();
                    if ((uVar73 & 0x3fffffff) == 1) {
                      puVar71 = (uint *)(lVar68 + 8);
                      LOCK();
                      uVar73 = *puVar71;
                      *puVar71 = *puVar71 | 0x40000000;
                      UNLOCK();
                      if ((uVar73 >> 0x1e & 1) == 0) {
                        bVar36 = *(byte *)(lVar68 + 0xd);
                        plVar51 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar51[1] = lVar68;
                        plVar52 = DAT_14ca843c0;
                        plVar78 = DAT_14ca843c8;
                        uVar65 = local_22c0;
                        uVar83 = local_2298._0_4_;
                        param_2 = local_2288;
                        if ((bVar36 & 2) == 0) {
                          do {
                            *plVar51 = (longlong)plVar52;
                            LOCK();
                            bVar80 = plVar52 != DAT_14ca843c0;
                            plVar78 = plVar51;
                            if (bVar80) {
                              plVar52 = DAT_14ca843c0;
                              plVar78 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar78;
                            UNLOCK();
                          } while (bVar80);
                        }
                        else {
                          do {
                            *plVar51 = (longlong)plVar78;
                            LOCK();
                            bVar80 = plVar78 != DAT_14ca843c8;
                            plVar52 = plVar51;
                            if (bVar80) {
                              plVar78 = DAT_14ca843c8;
                              plVar52 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar52;
                            UNLOCK();
                          } while (bVar80);
                        }
                      }
                    }
                  }
                  lVar68 = puVar79[0x41];
                  if (lVar68 != 0) {
                    LOCK();
                    puVar71 = (uint *)(lVar68 + 8);
                    uVar73 = *puVar71;
                    *puVar71 = *puVar71 - 1;
                    UNLOCK();
                    if ((uVar73 & 0x3fffffff) == 1) {
                      puVar71 = (uint *)(lVar68 + 8);
                      LOCK();
                      uVar73 = *puVar71;
                      *puVar71 = *puVar71 | 0x40000000;
                      UNLOCK();
                      if ((uVar73 >> 0x1e & 1) == 0) {
                        bVar36 = *(byte *)(lVar68 + 0xd);
                        plVar51 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar51[1] = lVar68;
                        plVar52 = DAT_14ca843c0;
                        plVar78 = DAT_14ca843c8;
                        uVar65 = local_22c0;
                        uVar83 = local_2298._0_4_;
                        param_2 = local_2288;
                        if ((bVar36 & 2) == 0) {
                          do {
                            *plVar51 = (longlong)plVar52;
                            LOCK();
                            bVar80 = plVar52 != DAT_14ca843c0;
                            plVar78 = plVar51;
                            if (bVar80) {
                              plVar52 = DAT_14ca843c0;
                              plVar78 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar78;
                            UNLOCK();
                          } while (bVar80);
                        }
                        else {
                          do {
                            *plVar51 = (longlong)plVar78;
                            LOCK();
                            bVar80 = plVar78 != DAT_14ca843c8;
                            plVar52 = plVar51;
                            if (bVar80) {
                              plVar78 = DAT_14ca843c8;
                              plVar52 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar52;
                            UNLOCK();
                          } while (bVar80);
                        }
                      }
                    }
                  }
                  FUN_1447259a8(puVar79);
                  FUN_1400020a8(puVar79);
                }
                goto LAB_143107556;
              }
            }
            puVar6 = local_22c8;
            puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar79 = puVar46 + 0x16;
            if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
              FUN_140023dd8(local_22c8);
              puVar46 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
              puVar79 = puVar46 + 0x16;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar79;
            *puVar46 = &PTR_FUN_14a3338d0;
            puVar79 = puVar46 + 1;
            memset(puVar79,0,0xa8);
            puVar46[0xc] = &DAT_100000001;
            puVar46[10] = 0xffffffffffffffff;
            puVar46[0x10] = &DAT_100000001;
            puVar46[0x13] = &DAT_100000001;
            FUN_14471858a(puVar46 + 0x11,1);
            iVar64 = *(int *)(param_2 + 0xa0);
            *(uint *)(param_2 + 0xa0) = iVar64 + 1U;
            if (*(uint *)(param_2 + 0xa4) < iVar64 + 1U) {
              FUN_1448cfae8(local_22a0,iVar64);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar64 * 8) = puVar46;
            fStack_1a50 = (float)uVar65;
            uStack_1a4c = (undefined4)(uVar65 >> 0x20);
            uStack_1a44 = local_2268._0_4_;
            uStack_1a40 = uVar54;
            uStack_1a3c = local_21d8._0_4_;
            uStack_1a30 = SUB84(dVar9,0);
            uStack_1a2c = (undefined2)((ulonglong)dVar9 >> 0x20);
            uStack_1a2a = (undefined2)((ulonglong)dVar9 >> 0x30);
            uStack_1a28 = SUB82(dVar10,0);
            uStack_1a26 = (undefined1)((ulonglong)dVar10 >> 0x10);
            uStack_1a25 = (undefined1)((ulonglong)dVar10 >> 0x18);
            uStack_1a24 = (undefined1)((ulonglong)dVar10 >> 0x20);
            uStack_1a23 = (undefined1)((ulonglong)dVar10 >> 0x28);
            uStack_1a22 = (undefined2)((ulonglong)dVar10 >> 0x30);
            bVar36 = *(byte *)(param_2 + 0x520);
            local_1a58 = puVar79;
            uStack_1a48 = uVar83;
            local_1a38 = dVar93;
            if (bVar36 == 0) {
              FUN_14311ac72(&local_1a58);
LAB_143108622:
              FUN_14473400f(0,0);
            }
            else {
              plVar52 = TlsGetValue(DAT_14c896140);
              if (plVar52 == (longlong *)0x0) {
                plVar52 = (longlong *)FUN_14001cc68(0x18,0x10);
                *plVar52 = 0;
                plVar52[1] = 0;
                *(undefined4 *)(plVar52 + 2) = 0;
                TlsSetValue(DAT_14c896140,plVar52);
              }
              plVar78 = (longlong *)plVar52[1];
              if (plVar78 == (longlong *)0x0) {
                plVar78 = (longlong *)*plVar52;
                if (plVar78 == (longlong *)0x0) {
                  do {
                    local_1df8 = DAT_14c896180;
                    uVar73 = (uint)DAT_14c896180;
                    if (((ulonglong)DAT_14c896180 & 0x3ffffff) == 0) {
                      plVar52[1] = 0;
                      goto LAB_1431083da;
                    }
                    local_2098 = (undefined8 *)
                                 (((ulonglong)DAT_14c896180 & 0xfffffffffc000000) + 0x4000000);
                    if ((ulonglong)local_2098 >> 0x1a < (ulonglong)DAT_14c896180 >> 0x1a) {
                      FUN_14000f986(0x3a83126f);
                    }
                    uVar65 = (ulonglong)((uVar73 & 0x3ffffff) >> 0xe);
                    local_2098 = (undefined8 *)
                                 ((ulonglong)local_2098 & 0xfffffffffc000000 |
                                 (ulonglong)
                                 *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar65 * 8) + 0x10 +
                                          (ulonglong)(uVar73 & 0x3fff) * 0x18));
                    LOCK();
                    bVar80 = local_1df8 != DAT_14c896180;
                    puVar46 = local_2098;
                    if (bVar80) {
                      puVar46 = DAT_14c896180;
                    }
                    DAT_14c896180 = puVar46;
                    UNLOCK();
                  } while (bVar80);
                  *(undefined4 *)
                   (*(longlong *)(&DAT_14c833b00 + uVar65 * 8) + (ulonglong)(uVar73 & 0x3fff) * 0x18
                   + 0x10) = 0;
                  plVar78 = *(longlong **)
                             (*(longlong *)(&DAT_14c833b00 + uVar65 * 8) + 8 +
                             (ulonglong)(uVar73 & 0x3fff) * 0x18);
                  FUN_1447d080c(uVar73 & 0x3ffffff);
                  plVar52[1] = (longlong)plVar78;
                  if (plVar78 == (longlong *)0x0) {
LAB_1431083da:
                    puVar46 = (undefined8 *)FUN_14001cc68(0x10000,0);
                    plVar52[1] = (longlong)puVar46;
                    iVar64 = 0xff;
                    do {
                      puVar69 = puVar46 + 0x20;
                      *puVar46 = puVar69;
                      iVar64 = iVar64 + -1;
                      puVar46 = puVar69;
                    } while (iVar64 != 0);
                    *puVar69 = 0;
                    plVar78 = (longlong *)plVar52[1];
                  }
                }
                else {
                  plVar52[1] = (longlong)plVar78;
                  *plVar52 = 0;
                }
                *(undefined4 *)(plVar52 + 2) = 0x100;
                iVar64 = 0xff;
              }
              else {
                iVar64 = (int)plVar52[2] + -1;
              }
              plVar52[1] = *plVar78;
              *(int *)(plVar52 + 2) = iVar64;
              *plVar78 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
              plVar78[1] = (longlong)&DAT_100000002;
              plVar78[2] = 0;
              *(undefined4 *)(plVar78 + 3) = 0;
              *(undefined4 *)(plVar78 + 4) = 0xffffffff;
              plVar78[6] = 0;
              plVar78[7] = 0x100000000;
              *(undefined1 *)(plVar78 + 8) = 1;
              plVar78[0xe] = (longlong)
                             LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateDummy::vftable;
              plVar78[0xf] = 0;
              plVar78[0x10] = -0x17ffffffffffffe0;
              plVar78[0x12] = 0;
              plVar78[0x13] = 0x100000000;
              *(undefined2 *)(plVar78 + 0x14) = 0;
              LOCK();
              bVar80 = (char)plVar78[8] == '\x01';
              if (bVar80) {
                *(char *)(plVar78 + 8) = '\0';
              }
              UNLOCK();
              if (!bVar80) {
                FUN_14008cdb0(plVar78 + 8);
              }
              *plVar78 = (longlong)&PTR_FUN_14a3338e8;
              if (*(code **)(plVar78[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(plVar78[0xe] + 0x18))(plVar78 + 0xe,plVar78 + 9);
              }
              plVar78[0xe] = (longlong)
                             LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              plVar78[9] = (longlong)plVar78;
              plVar78[10] = (longlong)plVar78;
              if (*local_20e0 == 0) {
                lVar68 = 0;
              }
              else {
                lVar68 = *(longlong *)(*local_20e0 + 0x30);
              }
              plVar78[0xf] = lVar68;
              plVar78[0x10] = local_20d8;
              *(uint *)((longlong)plVar78 + 0x1c) = bVar36 ^ 1;
              *(float *)(plVar78 + 0x15) = (float)local_1a58;
              *(float *)((longlong)plVar78 + 0xac) = local_1a58._4_4_;
              *(float *)(plVar78 + 0x16) = fStack_1a50;
              *(undefined4 *)((longlong)plVar78 + 0xb4) = uStack_1a4c;
              *(uint *)(plVar78 + 0x17) = uStack_1a48;
              *(uint *)((longlong)plVar78 + 0xbc) = uStack_1a44;
              *(uint *)(plVar78 + 0x18) = uStack_1a40;
              *(uint *)((longlong)plVar78 + 0xc4) = uStack_1a3c;
              *(undefined4 *)(plVar78 + 0x19) = (undefined4)local_1a38;
              *(undefined4 *)((longlong)plVar78 + 0xcc) = local_1a38._4_4_;
              *(uint *)(plVar78 + 0x1a) = uStack_1a30;
              *(uint *)((longlong)plVar78 + 0xd4) = CONCAT22(uStack_1a2a,uStack_1a2c);
              plVar78[0x1b] =
                   CONCAT26(uStack_1a22,
                            CONCAT15(uStack_1a23,
                                     CONCAT14(uStack_1a24,
                                              CONCAT13(uStack_1a25,CONCAT12(uStack_1a26,uStack_1a28)
                                                      ))));
              *plVar78 = (longlong)&PTR_FUN_14a3338d8;
              LOCK();
              UNLOCK();
              LOCK();
              UNLOCK();
              local_1df8 = (undefined8 *)CONCAT71(local_1df8._1_7_,1);
              FUN_1447439e4(plVar78,&local_1df8);
              if (plVar78 == (longlong *)0x0) goto LAB_143108622;
              iVar64 = *(int *)(param_2 + 0x508);
              *(uint *)(param_2 + 0x508) = iVar64 + 1U;
              if (*(uint *)(param_2 + 0x50c) < iVar64 + 1U) {
                FUN_1401d03aa(local_2118,iVar64);
              }
              *(longlong **)(*local_2118 + (longlong)iVar64 * 8) = plVar78;
              LOCK();
              *(int *)(plVar78 + 1) = (int)plVar78[1] + 1;
              UNLOCK();
              FUN_14473400f(0,0);
              LOCK();
              plVar52 = plVar78 + 1;
              *(int *)plVar52 = (int)*plVar52 + -1;
              UNLOCK();
              if ((int)*plVar52 == 0) {
                (**(code **)*plVar78)(plVar78,1);
              }
            }
            uVar49 = local_2268._0_8_;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca6dac0) && (FUN_144b3d300(&DAT_14ca6dac0), DAT_14ca6dac0 == -1))
            {
              FUN_145ee1496(&local_1a58);
              local_22f0 = (undefined1 *)((ulonglong)local_22f0 & 0xffffffffffffff00);
              local_2300 = (undefined1 *)((ulonglong)local_2300 & 0xffffffffffffff00);
              local_2320 = "Unknown";
              local_2330 = (wchar_t *)0x0;
              uStack_2328 = 0;
              local_2338 = L"FVoxelizeVolumePassParameters";
              local_22f8 = (undefined1 *)0x0;
              local_2310 = (code *)CONCAT44(local_2310._4_4_,0x150);
              local_2318 = (code *)CONCAT44(local_2318._4_4_,0x2ad);
              local_2308 = &local_1a58;
              FUN_140b49562(&DAT_14ca6da40,0,1);
              if (local_1a58 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              atexit((_func_5014 *)&LAB_14311ce7e);
              _Init_thread_footer(&DAT_14ca6dac0);
            }
            FUN_140069376(param_2);
            puVar6 = local_22c8;
            puVar69 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar46 = puVar69 + 0x3e;
            if (*(undefined8 **)(param_2 + 0x78) < puVar46) {
              FUN_140023dd8(local_22c8,0x1f8);
              puVar69 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
              puVar46 = puVar69 + 0x3e;
            }
            *local_22c8 = (ulonglong)puVar46;
            local_1a58 = local_2248;
            fStack_1a50 = (float)DAT_14ca6da88;
            uStack_1a4c = (undefined4)((ulonglong)DAT_14ca6da88 >> 0x20);
            if (DAT_14ca6da88 != 0) {
              LOCK();
              *(int *)(DAT_14ca6da88 + 8) = *(int *)(DAT_14ca6da88 + 8) + 1;
              UNLOCK();
            }
            uVar65 = uVar47 << 0x20 | uVar49;
            uStack_1a48 = 0x4ca6da40;
            uStack_1a44 = 1;
            local_2338 = (wchar_t *)CONCAT71(local_2338._1_7_,2);
            FUN_140068f1a(puVar69,&local_1df8,&local_1a58,1);
            *puVar69 = &PTR_FUN_14a333900;
            puVar69[0x37] = puVar79;
            puVar69[0x38] = local_22c0;
            puVar69[0x39] = 0;
            puVar69[0x3a] = uVar65;
            puVar69[0x3b] = 0;
            puVar69[0x3c] = uVar65;
            *(undefined4 *)(puVar69 + 0x3d) = 1;
            iVar64 = *(int *)(param_2 + 0x170);
            *(uint *)(param_2 + 0x170) = iVar64 + 1U;
            if (*(uint *)(param_2 + 0x174) < iVar64 + 1U) {
              FUN_14470e57a(local_2228,iVar64);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar64 * 8) = puVar69;
            *(int *)((longlong)puVar69 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
            FUN_140069100(param_2,puVar69);
          }
        }
        puVar6 = local_22c8;
        uStack_1a26 = 2;
        uStack_1a25 = 10;
        local_1a58 = (undefined8 *)0x80020809;
        uStack_1a24 = 0;
        uStack_1a2c = local_22a2;
        uStack_1a2a = 1;
        uStack_1a28 = 0x101;
        uStack_1a40 = (undefined4)local_1e08;
        fStack_1a50 = (float)local_1e18;
        uStack_1a4c = local_1e18._4_4_;
        uStack_1a48 = (undefined4)uStack_1e10;
        uStack_1a44 = uStack_1e10._4_4_;
        uVar73 = DAT_14ca84e40;
        if ((int)local_228c < (int)DAT_14ca84e40) {
          uVar73 = local_228c;
        }
        if ((int)uVar73 < 2) {
          uVar73 = 1;
        }
        uStack_1a23 = 0xff;
        uStack_1a30 = DAT_14ca84e40;
        if ((int)local_2290 < (int)DAT_14ca84e40) {
          uStack_1a30 = local_2290;
        }
        uStack_1a3c = local_227c;
        if ((int)uStack_1a30 < 2) {
          uStack_1a30 = 1;
        }
        local_1a38 = (double)((ulonglong)uVar73 << 0x20);
        uVar47 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar65 = uVar47 + 0x120;
        if (*(ulonglong *)(param_2 + 0x78) < uVar65) {
          FUN_140023dd8(local_22c8,0x128);
          uVar47 = *puVar6 + 7 & 0xfffffffffffffff8;
          uVar65 = uVar47 + 0x120;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar65;
        FUN_1456bbb8c(uVar47,L"VolumetricFog.LightScattering",&local_1a58,1);
        iVar64 = *(int *)(param_2 + 0x180);
        *(uint *)(param_2 + 0x180) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0x184) < iVar64 + 1U) {
          FUN_14472c0f6(local_2250,iVar64);
        }
        puVar6 = local_22c8;
        *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar64 * 8) = uVar47;
        *(int *)(uVar47 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
        uVar39 = *(undefined1 *)(uVar47 + 0x94);
        puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar79 = puVar46 + 9;
        local_1e98 = uVar47;
        if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
          FUN_140023dd8(local_22c8,0x50);
          puVar46 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
          puVar79 = puVar46 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar79;
        puVar46[1] = *(undefined8 *)(uVar47 + 8);
        puVar46[2] = 0;
        *(undefined1 *)(puVar46 + 3) = 0;
        *(undefined8 *)((longlong)puVar46 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar46 + 5) = 0;
        *puVar46 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar46 + 6) = uVar39;
        *(undefined1 *)(puVar46 + 7) = 0;
        *(undefined4 *)((longlong)puVar46 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar46 + 0x35) = 0;
        puVar46[8] = uVar47;
        iVar64 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar64 + 1U) {
          FUN_1447568fc(local_2238,iVar64);
        }
        puVar6 = local_22c8;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar64 * 8) = puVar46;
        *(int *)((longlong)puVar46 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar69 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar79 = puVar69 + 0xba;
        uStack_1e90 = puVar46;
        if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
          FUN_140023dd8(local_22c8,0x5e0);
          puVar69 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
          puVar79 = puVar69 + 0xba;
        }
        *local_22c8 = (ulonglong)puVar79;
        *puVar69 = &PTR_FUN_14a3336d8;
        puVar69[2] = 0;
        *(undefined1 *)(puVar69 + 3) = 1;
        puVar69[4] = 0;
        *(undefined1 *)(puVar69 + 5) = 1;
        puVar69[6] = 0;
        *(undefined1 *)(puVar69 + 7) = 1;
        puVar69[8] = 0;
        *(undefined1 *)(puVar69 + 9) = 1;
        puVar69[10] = 0;
        *(undefined1 *)(puVar69 + 0xb) = 1;
        lVar68 = 0xe0;
        do {
          puVar79 = (undefined8 *)((longlong)puVar69 + lVar68 + 0x10);
          *puVar79 = 0;
          puVar79[1] = 0x3f80000000000000;
          *(undefined8 *)((longlong)puVar69 + lVar68) = 0;
          ((undefined8 *)((longlong)puVar69 + lVar68))[1] = 0x3f80000000000000;
          lVar68 = lVar68 + 0x20;
        } while (lVar68 != 0x1e0);
        local_2268._0_8_ = puVar69 + 2;
        puVar69[0x4c] = 0;
        puVar69[0x3e] = 0;
        puVar69[0x3f] = 0;
        puVar69[0x40] = 0;
        puVar69[0x41] = 0;
        puVar69[0x42] = 0;
        puVar69[0x43] = 0;
        puVar69[0x44] = 0;
        puVar69[0x45] = 0;
        puVar69[0x46] = 0;
        puVar69[0x47] = 0;
        puVar69[0x48] = 0;
        puVar69[0x49] = 0;
        puVar69[0x4a] = 0;
        *(undefined1 *)(puVar69 + 0x4d) = 1;
        puVar69[0x4e] = 0;
        *(undefined1 *)(puVar69 + 0x4f) = 1;
        local_2248 = puVar69 + 0x54;
        FUN_1449cc1de();
        puVar69[0x98] = 0;
        puVar69[0xb8] = 0;
        *(undefined1 *)(puVar69 + 0xb9) = 1;
        iVar64 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar64 + 1U) {
          FUN_1448cfae8(local_22a0,iVar64);
        }
        *(undefined8 **)(*local_22a0 + (longlong)iVar64 * 8) = puVar69;
        lVar68 = FUN_1447e4f80();
        uVar65 = local_22c0;
        cVar35 = *(char *)(lVar68 + 0x41);
        if (cVar35 == '\x03') {
          cVar35 = '\x02';
        }
        puVar69[2] = *(undefined8 *)(local_22c0 + 0x18);
        *(char *)(puVar69 + 3) = cVar35;
        uVar49 = *(undefined8 *)(local_22c0 + 0x13780);
        lVar68 = FUN_144a12b9e();
        cVar35 = *(char *)(lVar68 + 0x41);
        if (cVar35 == '\x03') {
          cVar35 = '\x02';
        }
        puVar69[4] = uVar49;
        *(char *)(puVar69 + 5) = cVar35;
        lVar68 = FUN_144a80e70();
        cVar35 = *(char *)(lVar68 + 0x41);
        if (cVar35 == '\x03') {
          cVar35 = '\x02';
        }
        puVar69[6] = local_2108;
        *(char *)(puVar69 + 7) = cVar35;
        FUN_144980f13(puVar69 + 10,uVar65,local_1fe8);
        uVar47 = local_2178;
        puVar69[0x3f] = local_1eb8;
        uVar66 = local_2168;
        if (uStack_1eb0 != 0) {
          uVar66 = uStack_1eb0;
        }
        puVar69[0x40] = uVar66;
        puVar69[0x41] = local_21f8;
        puVar69[0x46] = local_2190;
        bVar80 = 0 < DAT_14c760acc;
        *(uint *)(puVar69 + 0xb5) = (uint)bVar80;
        *(undefined4 *)((longlong)puVar69 + 0x5ac) = local_2208._0_4_;
        if (((bVar80 & local_22b1) == 1) &&
           (*(longlong *)(*(longlong *)(uVar65 + 0x3108) + 0x1e10) != 0)) {
          uVar49 = FUN_14473c272(param_2,*(longlong *)(uVar65 + 0x3108) + 0x1e10,0);
          puVar69[0x47] = uVar49;
          lVar68 = (**(code **)(**(longlong **)(*(longlong *)(uVar65 + 0x3108) + 0x1e10) + 0x10))();
          iVar64 = *(int *)(lVar68 + 0x30);
          *(float *)(puVar69 + 0xae) = (float)*(int *)(lVar68 + 0x2c);
          *(float *)((longlong)puVar69 + 0x574) = (float)iVar64;
        }
        else {
          puVar69[0x47] = local_2170;
          puVar69[0xae] = DAT_14c8461b4;
        }
        lVar68 = local_22b0;
        puVar6 = local_22c8;
        puVar69[0xa0] = local_1ff8;
        puVar69[0xa1] = uStack_1ff0;
        *(undefined4 *)(puVar69 + 0x9e) = (undefined4)local_2008;
        *(undefined4 *)((longlong)puVar69 + 0x4f4) = local_2008._4_4_;
        *(undefined4 *)(puVar69 + 0x9f) = (undefined4)uStack_2000;
        *(undefined4 *)((longlong)puVar69 + 0x4fc) = uStack_2000._4_4_;
        *(uint *)(puVar69 + 0x9c) = (uint)local_2018;
        *(uint *)((longlong)puVar69 + 0x4e4) = local_2018._4_4_;
        *(uint *)(puVar69 + 0x9d) = (uint)uStack_2010;
        *(uint *)((longlong)puVar69 + 0x4ec) = uStack_2010._4_4_;
        *(undefined4 *)(puVar69 + 0x9a) = local_2028;
        *(undefined4 *)((longlong)puVar69 + 0x4d4) = uStack_2024;
        *(undefined4 *)(puVar69 + 0x9b) = uStack_2020;
        *(undefined4 *)((longlong)puVar69 + 0x4dc) = uStack_201c;
        puVar69[0x42] = uVar47;
        puVar69[0x43] = DAT_14c9c0de0;
        puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar79 = puVar46 + 0x40;
        if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
          FUN_140023dd8(local_22c8,0x210);
          puVar46 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
          puVar79 = puVar46 + 0x40;
        }
        *local_22c8 = (ulonglong)puVar79;
        *puVar46 = &PTR_FUN_14a236e80;
        puVar46[0xc] = 0;
        puVar46[0xd] = 0;
        puVar46[0xe] = 0;
        puVar46[0xf] = 0;
        puVar46[0x10] = 0;
        puVar46[0x11] = 0;
        lVar77 = 0x9c;
        do {
          puVar79 = (undefined8 *)((longlong)puVar46 + lVar77 + -0xc);
          *puVar79 = 0;
          puVar79[1] = 0x3f80000000000000;
          lVar77 = lVar77 + 0x10;
        } while (lVar77 != 0xfc);
        lVar77 = 0xfc;
        do {
          puVar79 = (undefined8 *)((longlong)puVar46 + lVar77 + -0xc);
          *puVar79 = 0;
          puVar79[1] = 0x3f80000000000000;
          lVar77 = lVar77 + 0x10;
        } while (lVar77 != 0x15c);
        puVar46[0x30] = 0;
        puVar46[0x31] = 0;
        puVar46[0x32] = 0;
        puVar46[0x36] = 0;
        puVar46[0x37] = 0;
        puVar46[0x38] = 0;
        puVar46[0x39] = 0;
        puVar46[0x3a] = 0;
        iVar64 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar64 + 1U) {
          FUN_1448cfae8(local_22a0,iVar64);
        }
        uVar47 = local_22c0;
        *(undefined8 **)(*local_22a0 + (longlong)iVar64 * 8) = puVar46;
        uVar65 = local_22c0;
        if ((((*(char *)(local_22c0 + 0x23f2) == '\x01') && (DAT_14c7604d0 != 0)) &&
            (*(int *)(local_22c0 + 0x1dd0) == 2)) &&
           (lVar77 = *(longlong *)(local_22c0 + 8), lVar77 != 0)) {
          iVar64 = *(int *)(local_22c0 + 0x1dd8);
          if ((-1 < (longlong)iVar64) && (iVar64 < *(int *)(lVar77 + 0x10))) {
            uVar65 = *(ulonglong *)(*(longlong *)(lVar77 + 8) + (longlong)iVar64 * 8);
          }
        }
        FUN_144ab197e(&local_1a58,param_2,uVar65 + 0x138f0,local_22c0 + 0x13ab8);
        memcpy(puVar46 + 2,&local_1a58,0x1f0);
        local_1a58 = puVar46 + 2;
        FUN_1404d38b4();
        local_1df8 = (undefined8 *)DAT_14ca6b5b0;
        uVar49 = FUN_1404d37cc(local_2110,local_22c8,&local_1a58,&local_1df8);
        FUN_1404d38b4();
        cVar35 = DAT_14ca6b5d9;
        if (DAT_14ca6b5d9 == '\x03') {
          cVar35 = '\x02';
        }
        puVar69[0x4c] = uVar49;
        *(char *)(puVar69 + 0x4d) = cVar35;
        puVar69[0x3e] = *(undefined8 *)(uVar47 + 0x13ab0);
        puVar69[0x98] = uStack_1e90;
        FUN_144abaa06(local_20f8,&local_1a58,param_2,local_2180);
        *(float *)(puVar69 + 0x4e) = (float)local_1a58;
        *(float *)((longlong)puVar69 + 0x274) = local_1a58._4_4_;
        *(float *)(puVar69 + 0x4f) = fStack_1a50;
        *(undefined4 *)((longlong)puVar69 + 0x27c) = uStack_1a4c;
        uVar49 = FUN_144886931(param_2,uVar47);
        lVar77 = FUN_144a89262();
        plVar52 = local_2218;
        cVar35 = *(char *)(lVar77 + 0x41);
        if (cVar35 == '\x03') {
          cVar35 = '\x02';
        }
        puVar69[0xb8] = uVar49;
        *(char *)(puVar69 + 0xb9) = cVar35;
        fVar81 = *(float *)(*(longlong *)(lVar68 + 8) + 0x5214);
        if (3000.0 <= fVar81) {
          fVar81 = 3000.0;
        }
        if (fVar81 <= 2.0) {
          fVar81 = 2.0;
        }
        if (DAT_14c760280 == 0) {
          uVar73 = 0;
        }
        else {
          fVar84 = fVar81;
          if (DAT_14c760284 <= fVar81) {
            fVar84 = DAT_14c760284;
          }
          uVar73 = -(uint)(DAT_14c760284 <= fVar81) & (uint)fVar81;
          fVar81 = fVar84;
        }
        lVar77 = *(longlong *)(*(longlong *)(lVar68 + 8) + 0x3608);
        if (((lVar77 != 0) && ((*(byte *)(lVar77 + 0x20) & 4) == 0)) &&
           ((*(byte *)(*(longlong *)(uVar47 + 8) + 0x5b) & 0x20) != 0)) {
          fVar81 = *(float *)(lVar77 + 0xc0);
          if (3000.0 <= fVar81) {
            fVar81 = 3000.0;
          }
          if (fVar81 <= 2.0) {
            fVar81 = 2.0;
          }
          if (DAT_14c760280 == 0) {
            uVar73 = 0;
          }
          else {
            fVar84 = fVar81;
            if (DAT_14c760284 <= fVar81) {
              fVar84 = DAT_14c760284;
            }
            uVar73 = -(uint)(DAT_14c760284 <= fVar81) & (uint)fVar81;
            fVar81 = fVar84;
          }
        }
        fVar91 = tanf(DAT_14c9c9afc);
        fVar82 = (float)exp2f((float)(DAT_14c7601b8 - 1) * DAT_14c7601a8);
        fVar84 = DAT_14c7601a8;
        fVar90 = DAT_14c76021c;
        if (65000.0 <= DAT_14c76021c) {
          fVar90 = 65000.0;
        }
        *(float *)(puVar69 + 0x50) = fVar81;
        *(float *)((longlong)puVar69 + 0x284) = (fVar81 / (fVar91 + 1.0)) / fVar82;
        *(float *)(puVar69 + 0x51) = fVar84;
        *(float *)((longlong)puVar69 + 0x28c) = fVar90;
        *(uint *)(puVar69 + 0x52) = uVar73;
        FUN_1404df137(&local_1a58,uVar47 + 0x3400);
        memcpy(local_2248,&local_1a58,0x218);
        lVar77 = (**(code **)(**(longlong **)(lVar68 + 8) + 0x340))();
        if (local_22b1 == 0) {
          fVar81 = 1.0;
        }
        else {
          fVar81 = 1.0;
          if (*(longlong *)(*(longlong *)(uVar47 + 0x3108) + 0x1e08) != 0) {
            local_2168 = FUN_14473c272(param_2,*(longlong *)(uVar47 + 0x3108) + 0x1e08,0);
            fVar81 = *(float *)(*(longlong *)(uVar47 + 0x3108) + 0x1dd8);
          }
        }
        puVar69[0x48] = local_2168;
        puVar69[0x4a] = DAT_14c9c0de0;
        uVar83 = 0;
        *(float *)(puVar69 + 0xb0) = fVar81;
        *(uint *)((longlong)puVar69 + 0x584) =
             ~-(uint)(0.0 < fVar81) & 0x3f800000 | (uint)(1.0 / fVar81) & -(uint)(0.0 < fVar81);
        lVar74 = *(longlong *)(*(longlong *)(lVar68 + 8) + 0x3608);
        uVar42 = 0;
        if (((lVar74 != 0) && (bVar36 = *(byte *)(lVar74 + 0x20), uVar42 = 0, (bVar36 & 4) == 0)) &&
           (uVar42 = 0, (*(byte *)(*(longlong *)(uVar47 + 8) + 0x5b) & 0x20) != 0)) {
          uVar83 = 0x3f800000;
          if ((~bVar36 & 3) != 0) {
            uVar83 = 0;
          }
          uVar42 = 1;
        }
        *(undefined4 *)((longlong)puVar69 + 0x58c) = uVar83;
        *(undefined4 *)(puVar69 + 0x99) = uVar42;
        puVar69[0xaa] = DAT_14c846330;
        *(undefined4 *)(puVar69 + 0xab) = DAT_14c846338;
        puVar69[0xac] = DAT_14c846330;
        *(undefined4 *)(puVar69 + 0xad) = DAT_14c846338;
        *(undefined4 *)(puVar69 + 0xb6) = 0;
        lVar74 = 0;
        do {
          lVar75 = *(longlong *)(*(longlong *)(lVar68 + 8) + 0x36a0 + lVar74 * 8);
          if (lVar75 != 0) {
            (**(code **)(**(longlong **)(lVar75 + 0x28) + 0x138))
                      (*(longlong **)(lVar75 + 0x28),&local_1a58);
            fVar81 = *(float *)(*(longlong *)(lVar75 + 0x28) + 0x154);
            *(float *)(puVar69 + 0xaa) = fVar81 * (float)local_1a58;
            *(float *)((longlong)puVar69 + 0x554) = local_1a58._4_4_ * fVar81;
            *(float *)(puVar69 + 0xab) = fStack_1a50 * fVar81;
            lVar68 = *(longlong *)(lVar75 + 0x28);
            dVar9 = *(double *)(lVar68 + 0x90);
            dVar10 = *(double *)(lVar68 + 0x70);
            *(float *)(puVar69 + 0xac) = -(float)*(double *)(lVar68 + 0x50);
            *(float *)((longlong)puVar69 + 0x564) = -(float)dVar10;
            *(float *)(puVar69 + 0xad) = -(float)dVar9;
            *(undefined4 *)(puVar69 + 0xb6) = 1;
            break;
          }
          lVar74 = lVar74 + 1;
        } while (lVar74 != 3);
        puVar79 = local_2100;
        uVar42 = 0;
        if (((*(byte *)(*(longlong *)(uVar47 + 8) + 0x4a) & 0x10) != 0) &&
           ((*(byte *)(*(longlong *)(uVar47 + 8) + 0x51) & 0x10) != 0)) {
          uVar42 = *(undefined4 *)(uVar47 + 0x120bc);
        }
        *(undefined4 *)(puVar69 + 0xb1) = uVar42;
        *(undefined4 *)(puVar69 + 0xb2) = *(undefined4 *)(uVar47 + 0x12090);
        *(undefined4 *)((longlong)puVar69 + 0x594) = DAT_14c760adc;
        uVar42 = 0x3f800000;
        if (*(char *)(local_2100 + 5) == '\0') {
          uVar42 = 0;
        }
        *(undefined4 *)((longlong)puVar69 + 0x5a4) = uVar42;
        uVar42 = 0;
        if (DAT_14c760abc != 0) {
          uVar42 = DAT_14ca6aed8;
        }
        *(undefined4 *)(puVar69 + 0xb3) = uVar42;
        uVar42 = 0;
        if (*(char *)(uVar47 + 0x120c0) == '\x01') {
          uVar83 = 0x3f800000;
          if ((*(char *)(uVar47 + 0x124f0) == '\x01') &&
             (uVar42 = 0, *(longlong *)(uVar47 + 0x124d0) == 0)) {
            uVar42 = 0x3f800000;
          }
        }
        else {
          uVar83 = 0;
        }
        *(undefined4 *)(puVar69 + 0xaf) = uVar42;
        *(undefined4 *)((longlong)puVar69 + 0x57c) = uVar83;
        uStack_1a28 = (undefined2)_DAT_14c846280;
        uStack_1a26 = (undefined1)((ulonglong)_DAT_14c846280 >> 0x10);
        uStack_1a25 = (undefined1)((ulonglong)_DAT_14c846280 >> 0x18);
        uStack_1a24 = (undefined1)((ulonglong)_DAT_14c846280 >> 0x20);
        uStack_1a23 = (undefined1)((ulonglong)_DAT_14c846280 >> 0x28);
        uStack_1a22 = (undefined2)((ulonglong)_DAT_14c846280 >> 0x30);
        uStack_1a20 = _DAT_14c846288;
        local_1a38 = (double)_DAT_14c846270;
        uStack_1a30 = (uint)_DAT_14c846278;
        uStack_1a2c = (undefined2)((ulonglong)_DAT_14c846278 >> 0x20);
        uStack_1a2a = (undefined2)((ulonglong)_DAT_14c846278 >> 0x30);
        uStack_1a48 = (uint)_DAT_14c846260;
        uStack_1a44 = (uint)((ulonglong)_DAT_14c846260 >> 0x20);
        uStack_1a40 = (uint)_DAT_14c846268;
        uStack_1a3c = (uint)((ulonglong)_DAT_14c846268 >> 0x20);
        local_1a58._0_4_ = (float)DAT_14c846250;
        local_1a58._4_4_ = (float)DAT_14c846254;
        fStack_1a50 = (float)(undefined4)DAT_14c846258;
        uStack_1a4c = DAT_14c846258._4_4_;
        uVar42 = 0;
        if (((local_2148 == 1) || ((int)local_223c < 0)) || (lVar77 == 0)) {
          uVar83 = 0;
        }
        else {
          uVar83 = 0;
          if (plVar52 != (longlong *)0x0) {
            uVar65 = (ulonglong)local_223c;
            local_2170 = FUN_14473c272(param_2,uVar47 + uVar65 * 8 + 0x13768,0);
            lVar68 = uVar65 * 0x40;
            puVar1 = (undefined4 *)(lVar77 + 0x150 + lVar68);
            local_1a58._0_4_ = (float)*puVar1;
            local_1a58._4_4_ = (float)puVar1[1];
            fStack_1a50 = (float)puVar1[2];
            uStack_1a4c = puVar1[3];
            puVar1 = (undefined4 *)(lVar77 + 0x160 + lVar68);
            uStack_1a48 = *puVar1;
            uStack_1a44 = puVar1[1];
            uStack_1a40 = puVar1[2];
            uStack_1a3c = puVar1[3];
            puVar46 = (undefined8 *)(lVar77 + 0x170 + lVar68);
            local_1a38 = (double)*puVar46;
            uStack_1a30 = *(uint *)(puVar46 + 1);
            puVar72 = (undefined8 *)(lVar77 + 0x180 + lVar68);
            uVar49 = *puVar72;
            uStack_1a20 = puVar72[1];
            uStack_1a2c = (undefined2)*(undefined4 *)((longlong)puVar46 + 0xc);
            uStack_1a2a = (undefined2)((uint)*(undefined4 *)((longlong)puVar46 + 0xc) >> 0x10);
            uStack_1a28 = (undefined2)uVar49;
            uStack_1a26 = (undefined1)((ulonglong)uVar49 >> 0x10);
            uStack_1a25 = (undefined1)((ulonglong)uVar49 >> 0x18);
            uStack_1a24 = (undefined1)((ulonglong)uVar49 >> 0x20);
            uStack_1a23 = (undefined1)((ulonglong)uVar49 >> 0x28);
            uStack_1a22 = (undefined2)((ulonglong)uVar49 >> 0x30);
            uVar42 = *(undefined4 *)(lVar77 + 0x90 + uVar65 * 0x10);
            uVar83 = (**(code **)(*plVar52 + 400))(plVar52);
          }
        }
        puVar6 = local_22c8;
        puVar69[0x44] = local_2170;
        puVar69[0x45] = DAT_14c9c0de0;
        *(undefined4 *)((longlong)puVar69 + 0x59c) = uVar42;
        *(undefined4 *)(puVar69 + 0xb4) = uVar83;
        auVar26[2] = uStack_1a26;
        auVar26._0_2_ = uStack_1a28;
        auVar26[3] = uStack_1a25;
        auVar26[4] = uStack_1a24;
        auVar26[5] = uStack_1a23;
        auVar26._6_2_ = uStack_1a22;
        auVar26._8_8_ = uStack_1a20;
        *(float *)(puVar69 + 0xa2) = (float)local_1a58;
        *(float *)((longlong)puVar69 + 0x514) = local_1a58._4_4_;
        *(float *)(puVar69 + 0xa3) = fStack_1a50;
        *(undefined4 *)((longlong)puVar69 + 0x51c) = uStack_1a4c;
        *(uint *)(puVar69 + 0xa4) = uStack_1a48;
        *(uint *)((longlong)puVar69 + 0x524) = uStack_1a44;
        *(uint *)(puVar69 + 0xa5) = uStack_1a40;
        *(uint *)((longlong)puVar69 + 0x52c) = uStack_1a3c;
        *(undefined4 *)(puVar69 + 0xa6) = (undefined4)local_1a38;
        *(undefined4 *)((longlong)puVar69 + 0x534) = local_1a38._4_4_;
        *(uint *)(puVar69 + 0xa7) = uStack_1a30;
        *(uint *)((longlong)puVar69 + 0x53c) = CONCAT22(uStack_1a2a,uStack_1a2c);
        *(undefined1 (*) [16])(puVar69 + 0xa8) = auVar26;
        uVar49 = local_2278._0_8_;
        if (local_2278._0_8_ == 0) {
          puVar46 = (undefined8 *)0x0;
        }
        else {
          if ((*(char *)(local_2278._0_8_ + 0x92) == '\x04') ||
             (*(char *)(local_2278._0_8_ + 0x92) == '\x01')) {
            uVar70 = *(undefined2 *)(local_2278._0_8_ + 0x8e);
          }
          else {
            uVar70 = 0;
          }
          uVar39 = *(undefined1 *)(local_2278._0_8_ + 0x90);
          puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar72 = puVar46 + 8;
          if (*(undefined8 **)(param_2 + 0x78) < puVar72) {
            FUN_140023dd8(local_22c8,0x48);
            puVar46 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
            puVar72 = puVar46 + 8;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar72;
          puVar46[1] = *(undefined8 *)(uVar49 + 8);
          puVar46[2] = 0;
          *(undefined1 *)(puVar46 + 3) = 1;
          *(undefined8 *)((longlong)puVar46 + 0x1c) = 0xffffffffffffffff;
          *puVar46 = &PTR_FUN_14a203858;
          *(undefined2 *)(puVar46 + 5) = 0;
          *(undefined1 *)((longlong)puVar46 + 0x2a) = uVar39;
          *(undefined1 *)((longlong)puVar46 + 0x2b) = 0;
          *(undefined2 *)((longlong)puVar46 + 0x2c) = 0;
          *(undefined2 *)((longlong)puVar46 + 0x2e) = uVar70;
          *(undefined1 *)(puVar46 + 6) = 0;
          *(undefined1 *)((longlong)puVar46 + 0x32) = 0;
          puVar46[7] = uVar49;
          iVar64 = *(int *)(param_2 + 0x1a0);
          *(uint *)(param_2 + 0x1a0) = iVar64 + 1U;
          if (*(uint *)(param_2 + 0x1a4) < iVar64 + 1U) {
            FUN_1447568fc(local_2238,iVar64);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar64 * 8) = puVar46;
          *(int *)((longlong)puVar46 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        }
        puVar69[0x49] = puVar46;
        uVar49 = FUN_1403e6082(param_2,uVar47);
        lVar68 = FUN_1449863e6();
        cVar35 = *(char *)(lVar68 + 0x41);
        if (*(char *)(lVar68 + 0x41) == '\x03') {
          cVar35 = '\x02';
        }
        puVar69[8] = uVar49;
        *(char *)(puVar69 + 9) = cVar35;
        lVar68 = puVar79[4];
        uVar73 = (uint)local_22c9;
        if (local_22c9 == 1 && lVar68 != 0) {
          bVar80 = *(char *)(*(longlong *)(lVar68 + 0x28) + 0x1d6) == '\0';
          *(uint *)((longlong)puVar69 + 0x5b4) = (uint)!bVar80;
          if (bVar80) goto LAB_14310964b;
          uVar54 = (uint)*(byte *)(*(longlong *)(puVar79[4] + 0x28) + 0x1d6);
        }
        else {
          *(undefined4 *)((longlong)puVar69 + 0x5b4) = 0;
LAB_14310964b:
          uVar54 = 0;
        }
        *(uint *)(puVar69 + 0xb7) = uVar54;
        uVar65 = uVar47;
        if (((*(char *)(uVar47 + 0x23f2) == '\x01') && (DAT_14c7604d0 != 0)) &&
           ((*(int *)(uVar47 + 0x1dd0) == 2 && (lVar68 = *(longlong *)(uVar47 + 8), lVar68 != 0))))
        {
          iVar64 = *(int *)(uVar47 + 0x1dd8);
          if ((-1 < (longlong)iVar64) && (iVar64 < *(int *)(lVar68 + 0x10))) {
            uVar65 = *(ulonglong *)(*(longlong *)(lVar68 + 8) + (longlong)iVar64 * 8);
          }
        }
        if (*(longlong *)(uVar65 + 0x13a60) == 0) {
          bVar36 = 0;
        }
        else {
          bVar36 = ((&DAT_14ca814cc)
                    [(ulonglong)
                     *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(uVar47 + 0x3090) * 2) * 0x3c] &
                   0x10) >> 4;
        }
        if ((*(longlong *)(uVar47 + 0x13ab0) == 0) ||
           ((*(byte *)(**(longlong **)(local_22b0 + 0xa0) + 0x2954) & 1) == 0)) {
          bVar37 = 0;
        }
        else {
          bVar37 = 0;
          uVar47 = local_22c0;
          if (*(int *)(DAT_14ca046e8 + 4) == 0) {
LAB_14310aa30:
            bVar37 = 0;
            uVar73 = (uint)local_22c9;
          }
          else {
            uVar73 = (uint)local_22c9;
            if (*(int *)(local_22b0 + 0xe4) < 0) {
              piVar62 = (int *)(*(longlong *)(local_22b0 + 0xd8) + 8);
              if (*(longlong *)(local_22b0 + 0xd8) == 0) {
                piVar62 = (int *)&DAT_14c760db4;
              }
              if (((int)(&DAT_14ca814b8)
                        [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar62 * 2) * 0xf] < 4)
                 || (((&DAT_14ca814cd)
                      [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar62 * 2) * 0x3c] & 3)
                     == 0)) goto LAB_14310aa30;
              cVar35 = FUN_1472390ef(local_21b0);
              uVar47 = local_22c0;
              bVar37 = 1;
              uVar73 = (uint)local_22c9;
              if (cVar35 == '\0') {
                bVar37 = FUN_1472390cb(local_21b0);
                uVar73 = (uint)local_22c9;
              }
            }
          }
        }
        if (DAT_14c760280 == 0) {
          bVar80 = false;
        }
        else {
          bVar80 = 0 < *(int *)(*(longlong *)(local_22b0 + 8) + 0x4588);
        }
        if ((((*(byte *)(local_22b0 + 0xe2) & 0x80) == 0 || bVar36 != 0) ||
            (lVar68 = *(longlong *)(*(longlong *)(local_22b0 + 8) + 0x3608), lVar68 == 0)) ||
           ((~*(byte *)(lVar68 + 0x20) & 9) != 0)) {
LAB_1431097fb:
          uVar54 = 0;
        }
        else {
          cVar35 = FUN_14175ffe0(local_22b0);
          if ((cVar35 == '\0') ||
             (bVar41 = FUN_140b3b702((longlong)*(int *)(uVar47 + 0x3090),
                                     *(undefined2 *)
                                      (&DAT_14ca85070 + (longlong)*(int *)(uVar47 + 0x3090) * 2)),
             (bVar41 & bVar80) != 1)) {
            uVar54 = 0;
            uVar73 = (uint)local_22c9;
          }
          else {
            uVar73 = (uint)local_22c9;
            if ((*(int *)(local_22b0 + 0x3f0) != 1) ||
               (1.0 < *(double *)(uVar47 + 0x8a8) || *(double *)(uVar47 + 0x8a8) == 1.0))
            goto LAB_1431097fb;
            uVar54 = (uint)((&DAT_14ca814b8)
                            [(ulonglong)
                             *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(uVar47 + 0x3090) * 2) *
                             0xf] != 1);
          }
        }
        lVar68 = DAT_14ca6af00;
        cVar35 = '\x01';
        uVar49 = local_2268._0_8_;
        if ((1 < (int)DAT_14c760ac4) && (cVar35 = '\x04', 4 < DAT_14c760ac4)) {
          cVar35 = (8 < DAT_14c760ac4) * '\b' + '\b';
        }
        if (*(longlong *)(local_22b0 + 0x6d0) == 0) {
          uVar43 = 0;
        }
        else {
          uVar43 = (uint)(*(longlong *)(local_22b0 + 0x6f0) != 0);
        }
        iVar64 = *local_2188;
        if (iVar64 == 0x40000002) {
          uVar65 = 0;
        }
        else {
          bVar80 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar64 != 2)) {
            if (iVar64 == 1) {
              DVar44 = FUN_140ad26c0();
              DVar45 = GetCurrentThreadId();
              uVar73 = (uint)local_22c9;
              bVar80 = DVar44 == DVar45;
            }
            else {
              bVar80 = false;
            }
          }
          uVar65 = (ulonglong)(bVar80 ^ 1);
        }
        fVar81 = *(float *)(lVar68 + uVar65 * 4);
        fVar84 = 0.0;
        if (0.0 <= fVar81) {
          fVar84 = fVar81;
        }
        lVar68 = *(longlong *)(local_22c0 + 0x13818);
        uVar57 = (uint)(cVar35 == '\b');
        if (cVar35 == '\x04') {
          uVar57 = 2;
        }
        if (cVar35 == '\x01') {
          uVar57 = 3;
        }
        iVar64 = uVar57 + (uVar54 * 2 +
                           ((uint)bVar36 +
                           ((uint)(local_2278._0_8_ != 0) * 2 +
                            ((uint)(0.0 < fVar84) * 4 + (uint)bVar37 * 2 | uVar73) * 4 & 0x7f |
                           uVar43) * 2) * 4 + (int)local_20f0) * 4;
        FUN_141598e62();
        FUN_1448e935e(lVar68,&local_2098,&DAT_14ca6b698,iVar64);
        uVar70 = *(undefined2 *)(lVar68 + 0x50);
        FUN_141598e62();
        local_1df8 = (undefined8 *)CONCAT62(local_1df8._2_6_,uVar70);
        local_1df8 = (undefined8 *)CONCAT44(iVar64,(undefined4)local_1df8);
        uStack_1df0 = 1;
        uStack_1dec = (uint)DAT_14ca6b6b8;
        local_1de8 = (uint)((ulonglong)DAT_14ca6b6b8 >> 0x20);
        FUN_140190e02(&local_1df8);
        lVar68 = uStack_2090;
        puVar79 = local_2098;
        FUN_141598f84();
        local_1df8 = (undefined8 *)0x0;
        uStack_1df0 = 0;
        uStack_1dec = 0;
        FUN_1448f70da(puVar79,&DAT_14ca6ce88,uVar49,&local_1df8);
        uStack_2090 = CONCAT44(uStack_2090._4_4_,local_20b0);
        local_2098 = (undefined8 *)CONCAT44(uStack_20b4,local_20b8);
        FUN_141598f84();
        param_2 = local_2288;
        FUN_140069376(local_2288);
        param_1 = local_22b0;
        puVar6 = local_22c8;
        uVar67 = (undefined6)((ulonglong)&local_1df8 >> 0x10);
        uVar65 = CONCAT62(uVar67,2);
        if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
           ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
          uVar65 = CONCAT62(uVar67,4);
        }
        puVar69 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar46 = puVar69 + 0x3e;
        if (*(undefined8 **)(param_2 + 0x78) < puVar46) {
          FUN_140023dd8(local_22c8,0x1f8);
          puVar69 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
          puVar46 = puVar69 + 0x3e;
        }
        *local_22c8 = (ulonglong)puVar46;
        local_1df8 = (undefined8 *)uVar49;
        uStack_1df0 = (undefined4)DAT_14ca6ced0;
        uStack_1dec = (uint)((ulonglong)DAT_14ca6ced0 >> 0x20);
        if (DAT_14ca6ced0 != 0) {
          LOCK();
          *(int *)(DAT_14ca6ced0 + 8) = *(int *)(DAT_14ca6ced0 + 8) + 1;
          UNLOCK();
        }
        local_1de8 = 0x4ca6ce88;
        uStack_1de4 = 1;
        local_2338 = (wchar_t *)CONCAT71(local_2338._1_7_,2);
        FUN_140068f1a(puVar69,&local_2058,&local_1df8,uVar65 & 0xffffffff);
        *puVar69 = &PTR_FUN_14a3336e0;
        puVar69[0x37] = uVar49;
        puVar69[0x38] = puVar79;
        puVar69[0x39] = lVar68;
        puVar69[0x3a] = local_22c0;
        puVar69[0x3b] = param_1;
        puVar69[0x3c] = local_2098;
        *(undefined4 *)(puVar69 + 0x3d) = (undefined4)uStack_2090;
        iVar64 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar64 + 1U) {
          FUN_14470e57a(local_2228,iVar64);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar64 * 8) = puVar69;
        *(int *)((longlong)puVar69 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar69);
        puVar6 = local_22c8;
        uStack_1a26 = 2;
        uStack_1a25 = 10;
        local_1a58 = (undefined8 *)0x80020809;
        uStack_1a24 = 0;
        uStack_1a2c = local_22a2;
        uStack_1a2a = 1;
        uStack_1a28 = 0x101;
        uStack_1a40 = (undefined4)local_1e08;
        fStack_1a50 = (float)local_1e18;
        uStack_1a4c = local_1e18._4_4_;
        uStack_1a48 = (undefined4)uStack_1e10;
        uStack_1a44 = uStack_1e10._4_4_;
        uVar73 = local_228c;
        if ((int)DAT_14ca84e40 <= (int)local_228c) {
          uVar73 = DAT_14ca84e40;
        }
        if ((int)uVar73 < 2) {
          uVar73 = 1;
        }
        uStack_1a23 = 0xff;
        uStack_1a30 = DAT_14ca84e40;
        if ((int)local_2290 < (int)DAT_14ca84e40) {
          uStack_1a30 = local_2290;
        }
        uStack_1a3c = local_227c;
        if ((int)uStack_1a30 < 2) {
          uStack_1a30 = 1;
        }
        local_1a38 = (double)((ulonglong)uVar73 << 0x20);
        uVar47 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar65 = uVar47 + 0x120;
        if (*(ulonglong *)(param_2 + 0x78) < uVar65) {
          FUN_140023dd8(local_22c8,0x128);
          uVar47 = *puVar6 + 7 & 0xfffffffffffffff8;
          uVar65 = uVar47 + 0x120;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar65;
        FUN_1456bbb8c(uVar47,L"VolumetricFog.IntegratedLightScattering",&local_1a58,0);
        iVar64 = *(int *)(param_2 + 0x180);
        *(uint *)(param_2 + 0x180) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0x184) < iVar64 + 1U) {
          FUN_14472c0f6(local_2250,iVar64);
        }
        puVar6 = local_22c8;
        *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar64 * 8) = uVar47;
        *(int *)(uVar47 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
        uVar39 = *(undefined1 *)(uVar47 + 0x94);
        puVar46 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar79 = puVar46 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
          FUN_140023dd8(local_22c8,0x50);
          puVar46 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
          puVar79 = puVar46 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar79;
        puVar46[1] = *(undefined8 *)(uVar47 + 8);
        puVar46[2] = 0;
        *(undefined1 *)(puVar46 + 3) = 0;
        *(undefined8 *)((longlong)puVar46 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar46 + 5) = 0;
        *puVar46 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar46 + 6) = uVar39;
        *(undefined1 *)(puVar46 + 7) = 0;
        *(undefined4 *)((longlong)puVar46 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar46 + 0x35) = 0;
        puVar46[8] = uVar47;
        iVar64 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar64 + 1U) {
          FUN_1447568fc(local_2238,iVar64);
        }
        puVar6 = local_22c8;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar64 * 8) = puVar46;
        *(int *)((longlong)puVar46 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar69 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar79 = puVar69 + 0x3c;
        if (*(undefined8 **)(param_2 + 0x78) < puVar79) {
          FUN_140023dd8(local_22c8,0x1f0);
          puVar69 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
          puVar79 = puVar69 + 0x3c;
        }
        *local_22c8 = (ulonglong)puVar79;
        *puVar69 = &PTR_FUN_14a3336f8;
        puVar79 = puVar69 + 2;
        puVar69[2] = 0;
        *(undefined1 *)(puVar69 + 3) = 1;
        puVar69[8] = 0;
        puVar69[4] = 0;
        puVar69[5] = 0;
        *(undefined1 *)(puVar69 + 9) = 1;
        lVar68 = 0xd0;
        do {
          puVar72 = (undefined8 *)((longlong)puVar69 + lVar68 + 0x10);
          *puVar72 = 0;
          puVar72[1] = 0x3f80000000000000;
          *(undefined8 *)((longlong)puVar69 + lVar68) = 0;
          ((undefined8 *)((longlong)puVar69 + lVar68))[1] = 0x3f80000000000000;
          lVar68 = lVar68 + 0x20;
        } while (lVar68 != 0x1d0);
        iVar64 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar64 + 1U) {
          FUN_1448cfae8(local_22a0,iVar64);
        }
        uVar65 = local_22c0;
        *(undefined8 **)(*local_22a0 + (longlong)iVar64 * 8) = puVar69;
        puVar69[4] = local_1e98;
        puVar69[5] = puVar46;
        *(undefined4 *)(puVar69 + 6) = *(undefined4 *)(local_22c0 + 0x11ffc);
        lVar68 = FUN_1447e4f80();
        cVar35 = *(char *)(lVar68 + 0x41);
        if (*(char *)(lVar68 + 0x41) == '\x03') {
          cVar35 = '\x02';
        }
        puVar69[2] = *(undefined8 *)(uVar65 + 0x18);
        *(char *)(puVar69 + 3) = cVar35;
        FUN_144980f13(puVar69 + 8,uVar65,local_1fe8);
        fStack_1a50 = (float)uVar65;
        uStack_1a4c = (undefined4)(uVar65 >> 0x20);
        uStack_1a40 = local_20b0;
        uStack_1a48 = local_20b8;
        uStack_1a44 = uStack_20b4;
        local_1a38 = (double)CONCAT71(local_1a38._1_7_,local_1fe8[0]);
        local_1928 = (undefined2 *)0x0;
        lVar68 = (longlong)(int)uStack_1ec8;
        local_1918 = CONCAT44(local_1918._4_4_,(int)uStack_1ec8);
        pfVar50 = local_1ed8;
        local_1a58 = puVar79;
        if (lVar68 == 0) {
          local_1918 = CONCAT44(0x10,(int)uStack_1ec8);
        }
        else {
          if (local_1ed8 == (float *)0x0) {
            pfVar50 = (float *)&local_1fd8;
          }
          FUN_14310ea48(&uStack_1a28,uStack_1ec8 & 0xffffffff);
          puVar61 = local_1928;
          if (local_1928 == (undefined2 *)0x0) {
            puVar61 = &uStack_1a28;
          }
          memcpy(puVar61,pfVar50,lVar68 << 4);
        }
        *(undefined4 *)(local_21a8 + 4) = (undefined4)local_1e98;
        *(undefined4 *)((longlong)local_21a8 + 0x24) = local_1e98._4_4_;
        *(undefined4 *)(local_21a8 + 5) = (undefined4)uStack_1e90;
        *(undefined4 *)((longlong)local_21a8 + 0x2c) = uStack_1e90._4_4_;
        *(undefined4 *)(local_21a8 + 2) = (undefined4)uStack_1ea8;
        *(undefined4 *)((longlong)local_21a8 + 0x14) = uStack_1ea8._4_4_;
        *(undefined4 *)(local_21a8 + 3) = (undefined4)local_1ea0;
        *(undefined4 *)((longlong)local_21a8 + 0x1c) = local_1ea0._4_4_;
        *(undefined4 *)local_21a8 = (undefined4)local_1eb8;
        *(undefined4 *)((longlong)local_21a8 + 4) = local_1eb8._4_4_;
        *(undefined4 *)(local_21a8 + 1) = (undefined4)uStack_1eb0;
        *(undefined4 *)((longlong)local_21a8 + 0xc) = uStack_1eb0._4_4_;
        local_18d8 = (undefined8 *)param_1;
        FUN_141574b2a();
        FUN_140069376(param_2);
        puVar6 = local_22c8;
        uVar67 = (undefined6)((ulonglong)pfVar50 >> 0x10);
        uVar42 = (undefined4)CONCAT62(uVar67,2);
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
           ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
          uVar42 = (undefined4)CONCAT62(uVar67,4);
        }
        puVar69 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar46 = puVar69 + 0x6a;
        if (*(undefined8 **)(param_2 + 0x78) < puVar46) {
          FUN_140023dd8(local_22c8,0x360);
          puVar69 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
          puVar46 = puVar69 + 0x6a;
        }
        *local_22c8 = (ulonglong)puVar46;
        uStack_1df0 = (undefined4)DAT_14ca6cf58;
        uStack_1dec = (uint)((ulonglong)DAT_14ca6cf58 >> 0x20);
        if (DAT_14ca6cf58 != 0) {
          LOCK();
          *(int *)(DAT_14ca6cf58 + 8) = *(int *)(DAT_14ca6cf58 + 8) + 1;
          UNLOCK();
        }
        local_1de8 = 0x4ca6cf10;
        uStack_1de4 = 1;
        local_2338 = (wchar_t *)CONCAT71(local_2338._1_7_,2);
        local_1df8 = puVar79;
        FUN_140068f1a(puVar69,&local_2098,&local_1df8,uVar42);
        puVar61 = local_1928;
        uVar65 = local_22c0;
        *puVar69 = &PTR_FUN_14a333700;
        puVar69[0x38] = local_1a58;
        puVar69[0x39] = CONCAT44(uStack_1a4c,fStack_1a50);
        *(ulonglong *)((longlong)puVar69 + 0x1cc) = CONCAT44(uStack_1a48,uStack_1a4c);
        *(ulonglong *)((longlong)puVar69 + 0x1d4) = CONCAT44(uStack_1a40,uStack_1a44);
        *(undefined1 *)(puVar69 + 0x3c) = (undefined1)local_1a38;
        if (local_1928 == (undefined2 *)0x0) {
          memcpy(puVar69 + 0x3e,&uStack_1a28,0x100);
        }
        puVar69[0x5e] = puVar61;
        local_1928 = (undefined2 *)0x0;
        *(undefined4 *)(puVar69 + 0x60) = (undefined4)local_1918;
        *(undefined4 *)((longlong)puVar69 + 0x304) = local_1918._4_4_;
        local_1918 = 0x1000000000;
        uVar42 = *(undefined4 *)local_21a8;
        uVar83 = *(undefined4 *)((longlong)local_21a8 + 4);
        uVar17 = *(undefined4 *)(local_21a8 + 1);
        uVar18 = *(undefined4 *)((longlong)local_21a8 + 0xc);
        uVar19 = *(undefined4 *)(local_21a8 + 2);
        uVar20 = *(undefined4 *)((longlong)local_21a8 + 0x14);
        uVar21 = *(undefined4 *)(local_21a8 + 3);
        uVar22 = *(undefined4 *)((longlong)local_21a8 + 0x1c);
        uVar23 = *(undefined4 *)((longlong)local_21a8 + 0x24);
        uVar24 = *(undefined4 *)(local_21a8 + 5);
        uVar25 = *(undefined4 *)((longlong)local_21a8 + 0x2c);
        *(undefined4 *)(puVar69 + 0x66) = *(undefined4 *)(local_21a8 + 4);
        *(undefined4 *)((longlong)puVar69 + 0x334) = uVar23;
        *(undefined4 *)(puVar69 + 0x67) = uVar24;
        *(undefined4 *)((longlong)puVar69 + 0x33c) = uVar25;
        *(undefined4 *)(puVar69 + 100) = uVar19;
        *(undefined4 *)((longlong)puVar69 + 0x324) = uVar20;
        *(undefined4 *)(puVar69 + 0x65) = uVar21;
        *(undefined4 *)((longlong)puVar69 + 0x32c) = uVar22;
        *(undefined4 *)(puVar69 + 0x62) = uVar42;
        *(undefined4 *)((longlong)puVar69 + 0x314) = uVar83;
        *(undefined4 *)(puVar69 + 99) = uVar17;
        *(undefined4 *)((longlong)puVar69 + 0x31c) = uVar18;
        puVar69[0x68] = local_18d8;
        iVar64 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar64 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar64 + 1U) {
          FUN_14470e57a(local_2228,iVar64);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar64 * 8) = puVar69;
        *(int *)((longlong)puVar69 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar69);
        if (local_1928 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar66 = local_1e98;
        *(ulonglong *)(uVar65 + 0x137a8) = uVar47;
        if (local_22b1 == 0) {
          lVar68 = *(longlong *)(uVar65 + 0x3108);
          if (lVar68 != 0) {
            plVar52 = *(longlong **)(lVar68 + 0x1e08);
            if (plVar52 != (longlong *)0x0) {
              *(undefined8 *)(lVar68 + 0x1e08) = 0;
              (**(code **)(*plVar52 + 0x38))();
              lVar68 = *(longlong *)(uVar65 + 0x3108);
            }
            *(undefined4 *)(lVar68 + 0x1dd8) = 0x3f800000;
            uVar49 = DAT_14c8461b4;
            *(undefined8 *)(*(longlong *)(uVar65 + 0x3108) + 0x1ddc) = DAT_14c8461b4;
            *(undefined8 *)(*(longlong *)(uVar65 + 0x3108) + 0x1de4) = uVar49;
            *(undefined8 *)(*(longlong *)(uVar65 + 0x3108) + 0x1dec) = uVar49;
            *(undefined8 *)(*(longlong *)(uVar65 + 0x3108) + 0x1df4) = uVar49;
            lVar68 = *(longlong *)(uVar65 + 0x3108);
            *(undefined4 *)(lVar68 + 0x1e04) = local_20a0;
            *(ulonglong *)(lVar68 + 0x1dfc) = CONCAT44(uStack_20a4,local_20a8);
            goto LAB_14310a5b8;
          }
        }
        else {
          iVar64 = *(int *)(uVar65 + 0x3104);
          iVar76 = *(int *)(uVar65 + 0x30fc);
          iVar53 = *(int *)(uVar65 + 0x3100);
          iVar55 = *(int *)(uVar65 + 0x30f8);
          plVar52 = *(longlong **)(*(longlong *)(uVar65 + 0x3108) + 0x1e08);
          puVar79 = (undefined8 *)(*(longlong *)(uVar65 + 0x3108) + 0x1e08);
          if (plVar52 != (longlong *)0x0) {
            *puVar79 = 0;
            (**(code **)(*plVar52 + 0x38))();
          }
          bVar36 = *(byte *)(uVar66 + 0x24);
          *(byte *)(uVar66 + 0x24) = bVar36 | 2;
          *(undefined1 *)(uVar66 + 0x26) = 1;
          iVar56 = *(int *)(param_2 + 0x1c0);
          *(uint *)(param_2 + 0x1c0) = iVar56 + 1U;
          if (*(uint *)(param_2 + 0x1c4) < iVar56 + 1U) {
            FUN_14017e38e(local_21b8,iVar56);
          }
          param_1 = local_22b0;
          lVar68 = *local_21b8;
          *(ulonglong *)(lVar68 + (longlong)iVar56 * 0x10) = uVar66;
          *(undefined8 **)(lVar68 + 8 + (longlong)iVar56 * 0x10) = puVar79;
          if ((bVar36 & 2) == 0) {
            LOCK();
            cVar35 = *local_2230;
            if (cVar35 == '\0') {
              *local_2230 = '\x01';
            }
            UNLOCK();
            if (cVar35 != '\0') {
              FUN_1447d2058(local_2230);
            }
            iVar56 = *(int *)(param_2 + 0x4b8);
            uVar73 = iVar56 + 1;
            *(uint *)(param_2 + 0x4b8) = uVar73;
            if (*(uint *)(param_2 + 0x4bc) < uVar73) {
              FUN_1447f2dbc(local_21c0);
            }
            lVar68 = *local_21c0;
            lVar77 = (longlong)iVar56 * 0x10;
            *(undefined8 *)(lVar68 + lVar77) = 2;
            *(ulonglong *)(lVar68 + 8 + lVar77) = uVar66;
            LOCK();
            cVar35 = *local_2230;
            if (cVar35 == '\x01') {
              *local_2230 = '\0';
            }
            UNLOCK();
            if (cVar35 != '\x01') {
              FUN_14008cdb0(local_2230);
            }
          }
          fVar84 = (float)(iVar53 - iVar55);
          fVar90 = (float)(iVar64 - iVar76);
          *(undefined4 *)(*(longlong *)(local_22c0 + 0x3108) + 0x1dd8) =
               *(undefined4 *)(*(longlong *)(local_22c0 + 0x3110) + 0xb78);
          fVar81 = (float)local_209c;
          lVar68 = *(longlong *)(local_22c0 + 0x3108);
          *(float *)(lVar68 + 0x1ddc) = fVar84 / ((float)(int)local_20b8 * fVar81);
          *(float *)(lVar68 + 0x1de0) = fVar90 / ((float)(int)uStack_20b4 * fVar81);
          lVar68 = *(longlong *)(local_22c0 + 0x3108);
          *(float *)(lVar68 + 0x1de4) = (float)(int)local_20b8 / (float)(int)local_20a8;
          *(float *)(lVar68 + 0x1de8) = (float)(int)uStack_20b4 / (float)(int)uStack_20a4;
          iVar64 = local_209c + (int)fVar84 + -1;
          iVar76 = local_209c + (int)fVar90 + -1;
          fVar84 = (float)(int)uStack_20a4 * fVar81;
          fVar81 = fVar81 * (float)(int)local_20a8;
          lVar68 = *(longlong *)(local_22c0 + 0x3108);
          *(float *)(lVar68 + 0x1dec) =
               (float)((iVar64 + ~(local_209c / 2)) - iVar64 % local_209c) / fVar81;
          *(float *)(lVar68 + 0x1df0) =
               (float)((~(local_209c / 2) + iVar76) - iVar76 % local_209c) / fVar84;
          lVar68 = *(longlong *)(local_22c0 + 0x3108);
          *(float *)(lVar68 + 0x1df4) = (float)(iVar64 - iVar64 % local_209c) / fVar81;
          *(float *)(lVar68 + 0x1df8) = (float)(iVar76 - iVar76 % local_209c) / fVar84;
          lVar68 = *(longlong *)(local_22c0 + 0x3108);
          *(undefined4 *)(lVar68 + 0x1e04) = local_20a0;
          *(ulonglong *)(lVar68 + 0x1dfc) = CONCAT44(uStack_20a4,local_20a8);
          uVar65 = local_22c0;
          if (DAT_14c760acc < 1) {
LAB_14310a5b8:
            lVar68 = *(longlong *)(uVar65 + 0x3108);
            if ((lVar68 != 0) &&
               (plVar52 = *(longlong **)(lVar68 + 0x1e10), plVar52 != (longlong *)0x0)) {
              *(undefined8 *)(lVar68 + 0x1e10) = 0;
              (**(code **)(*plVar52 + 0x38))();
            }
          }
          else {
            plVar52 = *(longlong **)(*(longlong *)(local_22c0 + 0x3108) + 0x1e10);
            puVar79 = (undefined8 *)(*(longlong *)(local_22c0 + 0x3108) + 0x1e10);
            if (plVar52 != (longlong *)0x0) {
              *puVar79 = 0;
              (**(code **)(*plVar52 + 0x38))();
            }
            uVar65 = local_2190;
            bVar36 = *(byte *)(local_2190 + 0x24);
            *(byte *)(local_2190 + 0x24) = bVar36 | 2;
            *(undefined1 *)(local_2190 + 0x26) = 1;
            iVar64 = *(int *)(param_2 + 0x1c0);
            *(uint *)(param_2 + 0x1c0) = iVar64 + 1U;
            if (*(uint *)(param_2 + 0x1c4) < iVar64 + 1U) {
              FUN_14017e38e(local_21b8,iVar64);
            }
            lVar68 = *local_21b8;
            *(ulonglong *)(lVar68 + (longlong)iVar64 * 0x10) = uVar65;
            *(undefined8 **)(lVar68 + 8 + (longlong)iVar64 * 0x10) = puVar79;
            if ((bVar36 & 2) == 0) {
              LOCK();
              cVar35 = *local_2230;
              if (cVar35 == '\0') {
                *local_2230 = '\x01';
              }
              UNLOCK();
              if (cVar35 != '\0') {
                FUN_1447d2058(local_2230);
              }
              iVar64 = *(int *)(param_2 + 0x4b8);
              *(uint *)(param_2 + 0x4b8) = iVar64 + 1U;
              if (*(uint *)(param_2 + 0x4bc) < iVar64 + 1U) {
                FUN_1447f2dbc(local_21c0,iVar64);
              }
              lVar68 = *local_21c0;
              *(undefined8 *)(lVar68 + (longlong)iVar64 * 0x10) = 2;
              *(ulonglong *)(lVar68 + 8 + (longlong)iVar64 * 0x10) = uVar65;
              LOCK();
              cVar35 = *local_2230;
              if (cVar35 == '\x01') {
                *local_2230 = '\0';
              }
              UNLOCK();
              if (cVar35 != '\x01') {
                FUN_14008cdb0(local_2230);
              }
            }
          }
        }
        if (local_1ed8 != (float *)0x0) {
          FUN_1400020a8();
        }
        puVar6 = local_20c8;
        if (*(int *)((longlong)local_20c8 + 0x17c) != local_2144) {
          *(int *)((longlong)local_20c8 + 0x17c) = local_2144;
          puVar46 = (undefined8 *)(*local_20c8 + 7 & 0xfffffffffffffff8);
          puVar79 = puVar46 + 3;
          if ((undefined8 *)local_20c8[1] < puVar79) {
            FUN_140023dd8(local_20c8,0x20);
            puVar46 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
            puVar79 = puVar46 + 3;
          }
          *puVar6 = (ulonglong)puVar79;
          *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
          *(undefined8 **)puVar6[6] = puVar46;
          puVar6[6] = (ulonglong)(puVar46 + 1);
          uVar42 = *(undefined4 *)((longlong)puVar6 + 0x17c);
          puVar46[1] = 0;
          *puVar46 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar46 + 2) = uVar42;
        }
        lVar68 = local_2180 + 1;
      } while (lVar68 < *(int *)(param_1 + 0x3f0));
    }
    puVar63 = local_1e28;
    if (local_1e28 == (undefined1 *)0x0) {
      puVar63 = local_1e88;
    }
    FUN_143118d5d(puVar63,local_1e20 & 0xffffffff);
    if (local_1e28 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)local_2358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14310abdb FUN_14310abdb body=1417 status=ok
// SIG undefined FUN_14310abdb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310abdb(longlong param_1,uint param_2,longlong *param_3)

{
  undefined2 *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *_Str1;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_2d8 [32];
  wchar_t *local_2b8;
  wchar_t *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a0;
  code *local_298;
  code *local_290;
  undefined1 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined4 local_268;
  undefined8 local_260;
  uint local_24c;
  longlong *local_248;
  undefined8 local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  ushort local_218;
  undefined2 uStack_216;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined8 local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar2 = *(ushort *)(param_1 + 0xc);
  uVar10 = *(undefined8 *)(&DAT_14ca8c1f0 + (ulonglong)uVar2 * 8);
  local_24c = param_2;
  local_248 = param_3;
  FUN_14159a926();
  _Str1 = DAT_14ca6b270;
  puVar9 = &DAT_14ca98540;
  do {
    puVar9 = (undefined8 *)*puVar9;
    if (puVar9 == (undefined8 *)0x0) {
      lVar12 = 0;
      break;
    }
    lVar12 = puVar9[2];
    iVar6 = wcscmp(_Str1,*(wchar_t **)(lVar12 + 0x18));
  } while (iVar6 != 0);
  if (*(int *)(lVar12 + 8) != 0) {
    lVar12 = 0;
  }
  if (0 < *(int *)(lVar12 + 0x50)) {
    local_24c = local_24c & 0x7fffffff;
    iVar6 = 0;
    local_240 = uVar10;
    do {
      local_210 = 0;
      uStack_20c = (undefined4)*(undefined8 *)(lVar12 + 0x20);
      uStack_208 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
      local_218 = uVar2;
      uStack_214 = iVar6;
      cVar5 = FUN_144a21736(lVar12,&local_218);
      if (cVar5 != '\0') {
        local_210 = 0;
        uStack_20c = (undefined4)*(undefined8 *)(lVar12 + 0x20);
        uStack_208 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
        if (((((&DAT_14ca814b8)[(ulonglong)uVar2 * 0xf] != 1) ||
             ((local_218 = uVar2, uStack_214 = iVar6, *(byte *)(lVar12 + 0x48) < 6 &&
              ((0x29U >> (*(byte *)(lVar12 + 0x48) & 0x1f) & 1) != 0)))) &&
            (local_218 = uVar2, uStack_214 = iVar6, cVar5 = (**(code **)(lVar12 + 0x70))(&local_218)
            , cVar5 == '\0')) && (FUN_1448e935e(uVar10,&local_238,lVar12,iVar6), local_238 != 0)) {
          lVar7 = *(longlong *)
                   (*(longlong *)(*(longlong *)(local_230 + 8) + 0x50) +
                   (longlong)*(int *)(local_238 + 0xd4) * 8);
          if (lVar7 == 0) {
            lVar7 = FUN_1400bafc2(*(longlong *)(local_230 + 8),(longlong)*(int *)(local_238 + 0xd4),
                                  0);
          }
          if (lVar7 != 0) {
            FUN_1404437ba(uVar10,&local_228);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb0f6a8) && (FUN_144b3d300(&DAT_14cb0f6a8), DAT_14cb0f6a8 == -1))
            {
              FUN_14612a512();
              local_270 = &LAB_14712ac08;
              local_278 = &LAB_14712ac0c;
              local_280 = &LAB_147da544e;
              local_288 = &LAB_147da5452;
              local_290 = FUN_147da5496;
              local_298 = FUN_147da54f4;
              local_2b0 = L"WriteToSliceMainGS";
              local_2b8 = L"/Engine/Private/TranslucentLightingShaders.usf";
              local_260 = 0;
              local_268 = 0xe8;
              local_2a0 = 1;
              local_2a8 = 4;
              FUN_140db5666(&DAT_14cb0f600,0,&DAT_14cb0f598,L"FWriteToSliceGS");
              _DAT_14cb0f600 = FGlobalShaderType::vftable;
              atexit((_func_5014 *)&LAB_14377f606);
              _Init_thread_footer(&DAT_14cb0f6a8);
            }
            FUN_1448e935e(uVar10,&local_218,&DAT_14cb0f600,0);
            lVar8 = CONCAT44(uStack_214,CONCAT22(uStack_216,local_218));
            local_e8 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_118 = 0;
            lStack_110 = 0;
            local_128 = 0;
            uStack_120 = 0;
            local_138 = 0;
            lStack_130 = 0;
            uStack_9c = 0;
            uStack_98 = 0;
            uStack_97 = 0;
            uStack_90 = 0;
            uStack_ac = 0;
            uStack_a8 = 0;
            uStack_a4 = 0;
            uStack_a0 = 0;
            local_bc = 0;
            uStack_b8 = 0;
            uStack_b4 = 0;
            uStack_b0 = 0;
            uStack_cc = 0;
            uStack_c8 = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            local_dc = 0;
            uStack_d8 = 0;
            uStack_d4 = 0;
            uStack_d0 = 0;
            local_78 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_70 = 1;
            local_68 = 0;
            lVar11 = 0;
            if (lVar8 != 0) {
              lVar4 = *(longlong *)(CONCAT44(uStack_20c,local_210) + 8);
              lVar8 = (longlong)*(int *)(lVar8 + 0xd4);
              lVar11 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar8 * 8);
              if (lVar11 == 0) {
                lVar11 = FUN_1400bafc2(lVar4,lVar8,1);
              }
            }
            if (local_228 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = *(longlong *)
                       (*(longlong *)(*(longlong *)(local_220 + 8) + 0x50) +
                       (longlong)*(int *)(local_228 + 0xd4) * 8);
              if (lVar8 == 0) {
                lVar8 = FUN_1400bafc2(*(longlong *)(local_220 + 8),
                                      (longlong)*(int *)(local_228 + 0xd4),1);
              }
            }
            uStack_100 = DAT_14c9c0db0;
            local_f8 = DAT_14c9c0d98;
            local_108 = DAT_14c9c04c0;
            local_138 = DAT_14cb053e0;
            local_e0 = 0;
            lStack_130 = lVar8;
            local_128 = lVar7;
            lStack_110 = lVar11;
            local_68 = (**(code **)(*DAT_14ca83900 + 0x2f8))(DAT_14ca83900,&local_138);
            local_dc = 1;
            uStack_d8 = 10;
            uStack_d4 = 0;
            uStack_d0 = 0x80020809;
            uStack_cc = 0;
            uStack_a8 = 0;
            uStack_a4 = 0;
            uStack_a0 = 0;
            uStack_9c = 0;
            uStack_b8 = 0;
            uStack_b4 = 0;
            uStack_b0 = 0;
            uStack_ac = 0;
            uStack_c8 = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            local_bc = 0;
            uStack_98 = 0;
            uStack_97 = 0;
            local_78 = CONCAT62(local_78._2_6_,1);
            uStack_90 = 0;
            local_78 = local_78 & 0xffffffffffff;
            local_88 = 0;
            uStack_80 = 0;
            memcpy((void *)((longlong)&uStack_214 + 2),&local_138,0xd8);
            iVar3 = (int)local_248[1];
            *(uint *)(local_248 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)local_248 + 0xc) < iVar3 + 1U) {
              FUN_14069191a(local_248,iVar3);
            }
            puVar1 = (undefined2 *)(*local_248 + (longlong)iVar3 * 0x130);
            *puVar1 = 0x100;
            memcpy(puVar1 + 1,&local_218,0xde);
            *(undefined8 *)(puVar1 + 0x88) = 0;
            *(undefined8 *)(puVar1 + 0x8c) = 0x300000000;
            *(uint *)(puVar1 + 0x90) = local_24c;
            *(undefined8 *)(puVar1 + 0x94) = 0;
            uVar10 = local_240;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar12 + 0x50));
  }
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14310b17e FUN_14310b17e body=69 status=ok
// SIG undefined FUN_14310b17e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310b17e(void)

{
  _DAT_14ca6b888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310b1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6b890,1);
  return;
}



// FUNCTION 14310b1d8 FUN_14310b1d8 body=69 status=ok
// SIG undefined FUN_14310b1d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310b1d8(void)

{
  _DAT_14ca6b9c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310b21a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6b9c8,1);
  return;
}



// FUNCTION 14310b21d FUN_14310b21d body=69 status=ok
// SIG undefined FUN_14310b21d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310b21d(void)

{
  _DAT_14ca6b9d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310b25f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6b9d8,1);
  return;
}



// FUNCTION 14310b27a FUN_14310b27a body=47 status=ok
// SIG undefined FUN_14310b27a(void)

void FUN_14310b27a(void)

{
  DAT_14ca6bb90 = &PTR_FUN_14a333800;
  FUN_144725486(&DAT_14ca6bb90);
  FUN_14003f39a(&DAT_14ca6bb90);
  return;
}



// FUNCTION 14310b2aa FUN_14310b2aa body=163 status=ok
// SIG undefined FUN_14310b2aa(void)

undefined4 FUN_14310b2aa(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  lVar3 = DAT_14ca97170;
  uVar1 = *param_1;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar6 = 0;
  }
  else if (iVar2 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  iVar2 = (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf];
  return CONCAT31((int3)((uint)iVar2 >> 8),
                  (*(int *)(param_1 + 8) == 3 && (*(int *)(lVar3 + uVar6 * 4) < 1 || 3 < iVar2)) &&
                  iVar2 != 1);
}



// FUNCTION 14310b35a FUN_14310b35a body=163 status=ok
// SIG undefined FUN_14310b35a(void)

undefined4 FUN_14310b35a(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  lVar3 = DAT_14ca97170;
  uVar1 = *param_1;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar6 = 0;
  }
  else if (iVar2 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  iVar2 = (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf];
  return CONCAT31((int3)((uint)iVar2 >> 8),
                  (*(int *)(param_1 + 8) == 3 && (*(int *)(lVar3 + uVar6 * 4) < 1 || 3 < iVar2)) &&
                  iVar2 != 1);
}



// FUNCTION 14310b422 FUN_14310b422 body=163 status=ok
// SIG undefined FUN_14310b422(void)

undefined4 FUN_14310b422(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  lVar3 = DAT_14ca97170;
  uVar1 = *param_1;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar6 = 0;
  }
  else if (iVar2 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  iVar2 = (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf];
  return CONCAT31((int3)((uint)iVar2 >> 8),
                  (*(int *)(param_1 + 8) == 3 && (*(int *)(lVar3 + uVar6 * 4) < 1 || 3 < iVar2)) &&
                  iVar2 != 1);
}



// FUNCTION 14310b4d2 FUN_14310b4d2 body=163 status=ok
// SIG undefined FUN_14310b4d2(void)

undefined4 FUN_14310b4d2(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  lVar3 = DAT_14ca97170;
  uVar1 = *param_1;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar6 = 0;
  }
  else if (iVar2 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  iVar2 = (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf];
  return CONCAT31((int3)((uint)iVar2 >> 8),
                  (*(int *)(param_1 + 8) == 3 && (*(int *)(lVar3 + uVar6 * 4) < 1 || 3 < iVar2)) &&
                  iVar2 != 1);
}



// FUNCTION 14310b581 FUN_14310b581 body=681 status=ok
// SIG undefined FUN_14310b581(void)

void FUN_14310b581(undefined8 param_1,undefined8 param_2,int param_3,char param_4,longlong *param_5,
                  longlong *param_6,longlong *param_7)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [8];
  undefined8 auStack_c0 [12];
  undefined4 auStack_60 [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  memset(local_c8,0,0x98);
  lVar5 = (longlong)param_3;
  if (param_4 == '\0') {
    FUN_1415d3ec6();
    auStack_c0[DAT_14ca6bd88] = &DAT_14ca6bd40;
    auStack_60[DAT_14ca6bd88] = 0;
    uVar4 = (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar5 * 2);
    if (((2 < (int)(&DAT_14ca814b8)[uVar4 * 0xf]) && (uVar4 != 0x30)) &&
       ((*(longlong *)(&DAT_14ca814b0 + uVar4 * 0x3c) != DAT_14ca838f8 &&
        (((*(byte *)(&DAT_14ca814d8 + uVar4 * 0xf) & 0x80) == 0 ||
         ((*(byte *)((longlong)&DAT_14ca814d0 + uVar4 * 0x3c + 3) & 2) == 0)))))) {
      FUN_1415d3fe2();
      auStack_c0[DAT_14ca6bfd8] = &DAT_14ca6bf90;
      auStack_60[DAT_14ca6bfd8] = 0;
    }
    FUN_1415d40fe();
    puVar3 = &DAT_14ca6c1e0;
  }
  else {
    FUN_145eecfa0();
    auStack_c0[DAT_14ca6bc60] = &DAT_14ca6bc18;
    auStack_60[DAT_14ca6bc60] = 0;
    uVar4 = (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar5 * 2);
    if ((((2 < (int)(&DAT_14ca814b8)[uVar4 * 0xf]) && (uVar4 != 0x30)) &&
        (*(longlong *)(&DAT_14ca814b0 + uVar4 * 0x3c) != DAT_14ca838f8)) &&
       (((*(byte *)(&DAT_14ca814d8 + uVar4 * 0xf) & 0x80) == 0 ||
        ((*(byte *)((longlong)&DAT_14ca814d0 + uVar4 * 0x3c + 3) & 2) == 0)))) {
      FUN_145eed3c6();
      auStack_c0[DAT_14ca6beb0] = &DAT_14ca6be68;
      auStack_60[DAT_14ca6beb0] = 0;
    }
    FUN_145e1f8e2();
    puVar3 = &DAT_14ca6c0b8;
  }
  bVar1 = puVar3[0x48];
  auStack_c0[bVar1] = puVar3;
  auStack_60[bVar1] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  cVar2 = FUN_14007744c(param_1,local_c8,param_2);
  if (cVar2 != '\0') {
    if (local_128 != 0) {
      *param_5 = local_128;
      param_5[1] = local_138;
    }
    uVar4 = (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar5 * 2);
    if (((((2 < (int)(&DAT_14ca814b8)[uVar4 * 0xf]) && (uVar4 != 0x30)) &&
         (*(longlong *)(&DAT_14ca814b0 + uVar4 * 0x3c) != DAT_14ca838f8)) &&
        (((*(byte *)(&DAT_14ca814d8 + uVar4 * 0xf) & 0x80) == 0 ||
         ((*(byte *)((longlong)&DAT_14ca814d0 + uVar4 * 0x3c + 3) & 2) == 0)))) && (local_108 != 0))
    {
      *param_6 = local_108;
      param_6[1] = local_138;
    }
    if (lStack_110 != 0) {
      *param_7 = lStack_110;
      param_7[1] = local_138;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14310b855 FUN_14310b855 body=69 status=ok
// SIG undefined FUN_14310b855(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310b855(void)

{
  _DAT_14ca6c2b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310b897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6c2c0,1);
  return;
}



// FUNCTION 14310b89a FUN_14310b89a body=69 status=ok
// SIG undefined FUN_14310b89a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310b89a(void)

{
  _DAT_14ca6c2d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310b8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6c2d8,1);
  return;
}



// FUNCTION 14310b8df FUN_14310b8df body=69 status=ok
// SIG undefined FUN_14310b8df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310b8df(void)

{
  _DAT_14ca6c2e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310b921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6c2f0,1);
  return;
}



// FUNCTION 14310b924 FUN_14310b924 body=69 status=ok
// SIG undefined FUN_14310b924(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310b924(void)

{
  _DAT_14ca6c300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310b966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6c308,1);
  return;
}



// FUNCTION 14310b969 FUN_14310b969 body=69 status=ok
// SIG undefined FUN_14310b969(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310b969(void)

{
  _DAT_14ca6c318 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310b9ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6c320,1);
  return;
}



// FUNCTION 14310b9ae FUN_14310b9ae body=69 status=ok
// SIG undefined FUN_14310b9ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310b9ae(void)

{
  _DAT_14ca6c330 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6c338,1);
  return;
}



// FUNCTION 14310b9f3 FUN_14310b9f3 body=69 status=ok
// SIG undefined FUN_14310b9f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310b9f3(void)

{
  _DAT_14ca6c348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310ba35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6c350,1);
  return;
}



// FUNCTION 14310ba38 FUN_14310ba38 body=69 status=ok
// SIG undefined FUN_14310ba38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310ba38(void)

{
  _DAT_14ca6c360 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014310ba7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca6c368,1);
  return;
}



// FUNCTION 14310ba89 FUN_14310ba89 body=2516 status=ok
// SIG undefined FUN_14310ba89(void)

void FUN_14310ba89(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  byte bVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  byte bVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  ulonglong *local_188;
  longlong local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  int *local_148;
  longlong local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined1 local_f1;
  undefined8 *local_f0;
  longlong local_e8;
  undefined *local_e0;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar16 = (longlong)(int)param_2[1];
  local_130 = param_3;
  local_128 = param_4;
  if (0 < lVar16) {
    lVar14 = *param_2;
    bVar13 = 0;
    do {
      bVar5 = FUN_1400edda3(lVar14);
      bVar13 = bVar13 | bVar5;
      lVar14 = lVar14 + 0x13c10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    if ((bVar13 & 1) != 0) {
      if (DAT_14c760a84 == -1) {
        FUN_145fdab76(&local_d8,L"FRDGSystemTextures",
                      L".\\Runtime/Renderer/Private/SystemTextures.cpp",0x66);
        DAT_14c760a84 = FUN_145d12cf0(&local_d8);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
      }
      if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
         (lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
         lVar16 != 0)) {
        lVar16 = lVar16 + 8;
      }
      else {
        lVar16 = 0;
      }
      iVar18 = (int)param_2[1];
      if (0 < iVar18) {
        local_188 = (ulonglong *)(param_1 + 0x70);
        local_150 = param_1 + 0x98;
        local_148 = (int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60);
        local_158 = param_1 + 0x168;
        lVar14 = 0;
        local_140 = lVar16;
        local_138 = param_2;
        do {
          lVar19 = lVar14 * 0x13c10 + *param_2;
          cVar6 = FUN_1400edda3(lVar19);
          if ((cVar6 != '\0') &&
             (lVar3 = *(longlong *)(lVar19 + 0x3108), (*(uint *)(lVar3 + 0x1ef0) | 2) != 3)) {
            lVar9 = lVar3 + 0x1e78;
            local_180 = FUN_141786e3a(lVar9,param_1);
            local_110 = FUN_141786f24(lVar9,param_1);
            local_108 = FUN_14178685e(lVar9,param_1);
            local_118 = FUN_141786a28(lVar9,param_1);
            local_120 = FUN_14178693c(lVar9,param_1);
            bVar13 = *(byte *)(lVar3 + 0x1e85);
            if (bVar13 == 1) {
              lVar9 = FUN_14473c272(param_1,lVar3 + (ulonglong)(1 - *(int *)(lVar3 + 0x1e80)) * 8 +
                                            0x1eb8,0);
              bVar13 = *(byte *)(lVar3 + 0x1e85);
            }
            else {
              lVar9 = *(longlong *)(lVar16 + 8);
            }
            if ((bVar13 & 1) == 0) {
              local_170 = *(undefined8 *)(lVar16 + 8);
            }
            else {
              local_170 = FUN_14473c272(param_1,lVar3 + (ulonglong)(1 - *(int *)(lVar3 + 0x1e80)) *
                                                        8 + 0x1ec8,0);
              bVar13 = *(byte *)(lVar3 + 0x1e85);
            }
            lVar16 = DAT_14ca6c358;
            local_174 = *(undefined4 *)(lVar3 + 0x1e7c);
            iVar18 = *local_148;
            if (iVar18 == 0x40000002) {
              uVar10 = 0;
            }
            else {
              bVar20 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar18 != 2)) {
                if (iVar18 == 1) {
                  DVar7 = FUN_140ad26c0();
                  DVar8 = GetCurrentThreadId();
                  bVar20 = DVar7 == DVar8;
                }
                else {
                  bVar20 = false;
                }
              }
              uVar10 = (ulonglong)(bVar20 ^ 1);
            }
            iVar18 = *(int *)(lVar16 + uVar10 * 4);
            cVar6 = FUN_1400edd34(lVar19);
            uVar12 = *(undefined8 *)(lVar19 + 0x13818);
            FUN_14159916c();
            FUN_1448e935e(uVar12,&local_d8,&DAT_14ca6c3f0,
                          (0 < iVar18) * '\x02' | cVar6 << 2 | bVar13);
            FUN_14159916c();
            puVar4 = local_188;
            local_160 = local_d8;
            local_100 = CONCAT44(uStack_cc,uStack_d0);
            puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar11 = puVar15 + 0x3e;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_188,0x200);
              puVar15 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
              puVar11 = puVar15 + 0x3e;
            }
            *local_188 = (ulonglong)puVar11;
            *puVar15 = &PTR_FUN_14a333958;
            local_168 = puVar15 + 2;
            puVar15[2] = 0;
            *(undefined1 *)(puVar15 + 3) = 1;
            puVar15[4] = 0;
            puVar15[5] = 0;
            puVar15[6] = 0;
            puVar15[7] = 0;
            puVar15[8] = 0;
            puVar15[9] = 0;
            puVar15[10] = 0;
            lVar16 = 0x72;
            do {
              puVar11 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x12);
              *puVar11 = 0;
              puVar11[1] = 0;
              *(undefined4 *)((longlong)puVar15 + lVar16 + -2) = 0xffff0000;
              lVar16 = lVar16 + 0x18;
            } while (lVar16 != 0x132);
            *(undefined4 *)((longlong)puVar15 + 0x134) = 0;
            puVar15[0x24] = 0;
            puVar15[0x25] = 0;
            *(undefined2 *)(puVar15 + 0x26) = 0;
            *(undefined4 *)(puVar15 + 0x27) = 0xffffffff;
            *(undefined4 *)((longlong)puVar15 + 0x13c) = 0xffffffff;
            *(undefined4 *)(puVar15 + 0x28) = 0xffffffff;
            *(undefined4 *)((longlong)puVar15 + 0x144) = 0xffffffff;
            *(undefined4 *)(puVar15 + 0x29) = 0;
            *(undefined2 *)((longlong)puVar15 + 0x14c) = 0;
            puVar15[0x2a] = 0;
            puVar15[0x2c] = 0;
            puVar15[0x2d] = 0x3f80000000000000;
            puVar15[0x2e] = 0;
            puVar15[0x2f] = 0x3f80000000000000;
            puVar15[0x36] = 0;
            puVar15[0x37] = 0x3f80000000000000;
            puVar15[0x3a] = 0;
            puVar15[0x3b] = 0x3f80000000000000;
            iVar18 = *(int *)(param_1 + 0xa0);
            *(uint *)(param_1 + 0xa0) = iVar18 + 1U;
            if (*(uint *)(param_1 + 0xa4) < iVar18 + 1U) {
              FUN_1448cfae8(local_150,iVar18);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar18 * 8) = puVar15;
            lVar16 = FUN_1447e4f80();
            cVar6 = *(char *)(lVar16 + 0x41);
            if (*(char *)(lVar16 + 0x41) == '\x03') {
              cVar6 = '\x02';
            }
            puVar15[2] = *(undefined8 *)(lVar19 + 0x13750);
            *(char *)(puVar15 + 3) = cVar6;
            puVar15[0xc] = local_180;
            puVar15[0xd] = 0;
            *(undefined4 *)(puVar15 + 0xe) = 0xffff0000;
            puVar15[0xf] = local_110;
            puVar15[0x10] = 0;
            *(undefined4 *)(puVar15 + 0x11) = 0xffff0000;
            puVar15[4] = local_108;
            puVar15[5] = local_118;
            puVar15[6] = local_120;
            puVar15[7] = lVar9;
            puVar15[8] = local_170;
            puVar15[10] = DAT_14c9c0de0;
            puVar15[0x30] = *(undefined8 *)(lVar3 + 0x1e98);
            iVar18 = 2 - (uint)(*(int *)(lVar3 + 0x1ef0) - 1U < 3);
            uVar10 = *(ulonglong *)(lVar19 + 0x30f8);
            puVar15[0x31] =
                 (longlong)((ulonglong)(uint)((int)uVar10 >> 0x1f) << 0x20 | uVar10 & 0xffffffff) /
                 (longlong)iVar18 & 0xffffffffU |
                 (longlong)((ulonglong)(uint)((longlong)uVar10 >> 0x3f) << 0x20 | uVar10 >> 0x20) /
                 (longlong)iVar18 << 0x20;
            *(undefined4 *)(puVar15 + 0x32) = local_174;
            iVar18 = *(int *)(lVar3 + 0x1ef0);
            *(int *)((longlong)puVar15 + 0x194) = iVar18;
            uVar12 = local_130;
            if (iVar18 == 3) {
              uVar12 = local_128;
            }
            if (iVar18 == 0) {
              uVar12 = local_128;
            }
            puVar15[9] = uVar12;
            fVar21 = 0.0;
            if (0.0 <= *(float *)(DAT_14ca6c370 + 4)) {
              fVar21 = *(float *)(DAT_14ca6c370 + 4);
            }
            *(float *)(puVar15 + 0x3c) = fVar21;
            *(float *)((longlong)puVar15 + 0x1e4) =
                 *(float *)(lVar19 + 0x13694) / *(float *)(lVar3 + 0x1e88);
            uVar12 = local_130;
            if (*(int *)(lVar3 + 0x1ef0) == 3) {
              uVar12 = local_128;
            }
            if (*(int *)(lVar3 + 0x1ef0) == 0) {
              uVar12 = local_128;
            }
            puVar15[9] = uVar12;
            iVar18 = *(int *)(local_108 + 0x84);
            iVar1 = *(int *)(local_108 + 0x88);
            puVar15[0x34] = 0;
            *(int *)(puVar15 + 0x35) = iVar18 + -1;
            fVar21 = (float)iVar18;
            *(int *)((longlong)puVar15 + 0x1ac) = iVar1 + -1;
            *(float *)(puVar15 + 0x36) = 0.51 / fVar21;
            fVar22 = (float)iVar1;
            *(float *)((longlong)puVar15 + 0x1b4) = 0.51 / fVar22;
            *(float *)(puVar15 + 0x37) = (fVar21 + -0.51) / fVar21;
            *(float *)((longlong)puVar15 + 0x1bc) = (fVar22 + -0.51) / fVar22;
            iVar18 = *(int *)(lVar9 + 0x84);
            iVar1 = *(int *)(lVar9 + 0x88);
            puVar15[0x38] = 0;
            *(int *)(puVar15 + 0x39) = iVar18 + -1;
            *(int *)((longlong)puVar15 + 0x1cc) = iVar1 + -1;
            fVar21 = (float)iVar18;
            fVar22 = (float)iVar1;
            *(float *)(puVar15 + 0x3a) = 0.51 / fVar21;
            *(float *)((longlong)puVar15 + 0x1d4) = 0.51 / fVar22;
            *(float *)(puVar15 + 0x3b) = (fVar21 + -0.51) / fVar21;
            *(float *)((longlong)puVar15 + 0x1dc) = (fVar22 + -0.51) / fVar22;
            iVar18 = *(int *)(lVar9 + 0x88);
            iVar1 = *(int *)(lVar9 + 0x84);
            iVar2 = *(int *)(local_180 + 0x88);
            uVar12 = *(undefined8 *)(local_180 + 0x84);
            fVar21 = (float)*(int *)(local_180 + 0x84);
            *(float *)(puVar15 + 0x2c) = fVar21;
            *(float *)((longlong)puVar15 + 0x164) = (float)iVar2;
            *(float *)(puVar15 + 0x2d) = 1.0 / fVar21;
            *(float *)((longlong)puVar15 + 0x16c) = 1.0 / (float)iVar2;
            *(float *)(puVar15 + 0x2e) = (float)iVar1;
            *(float *)((longlong)puVar15 + 0x174) = (float)iVar18;
            *(float *)(puVar15 + 0x2f) = 1.0 / (float)iVar1;
            *(float *)((longlong)puVar15 + 0x17c) = 1.0 / (float)iVar18;
            local_180 = *(undefined8 *)(lVar19 + 0x13818);
            FUN_14159928e();
            puVar15 = local_168;
            local_d8 = 0;
            uStack_d0 = 0;
            uStack_cc = 0;
            FUN_1448f70da(local_160,&DAT_14ca6d020,local_168,&local_d8);
            uStack_c8 = 0;
            uStack_c4 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            uStack_cc = 0;
            FUN_14159928e();
            FUN_140069376(param_1);
            puVar4 = local_188;
            puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar17 + 0x41;
            if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
              FUN_140023dd8(local_188,0x210);
              puVar17 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar17 + 0x41;
            }
            *local_188 = (ulonglong)puVar11;
            local_f0 = puVar15;
            local_e8 = DAT_14ca6d068;
            if (DAT_14ca6d068 != 0) {
              LOCK();
              *(int *)(DAT_14ca6d068 + 8) = *(int *)(DAT_14ca6d068 + 8) + 1;
              UNLOCK();
            }
            local_e0 = &DAT_14ca6d020;
            local_198 = 2;
            FUN_140068f1a(puVar17,&local_f1,&local_f0,1);
            *puVar17 = &PTR_FUN_14a333960;
            puVar17[0x37] = local_168;
            puVar17[0x38] = local_180;
            puVar17[0x39] = local_160;
            puVar17[0x3a] = local_100;
            puVar17[0x3b] = 0;
            puVar17[0x3c] = uVar12;
            puVar17[0x3d] = local_d8;
            puVar17[0x3e] = CONCAT44(uStack_cc,uStack_d0);
            *(undefined4 *)((longlong)puVar17 + 500) = uStack_cc;
            *(undefined4 *)(puVar17 + 0x3f) = uStack_c8;
            *(undefined4 *)((longlong)puVar17 + 0x1fc) = (undefined4)uStack_c4;
            *(undefined4 *)(puVar17 + 0x40) = uStack_c4._4_4_;
            iVar18 = *(int *)(param_1 + 0x170);
            *(uint *)(param_1 + 0x170) = iVar18 + 1U;
            if (*(uint *)(param_1 + 0x174) < iVar18 + 1U) {
              FUN_14470e57a(local_158,iVar18);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar18 * 8) = puVar17;
            *(int *)((longlong)puVar17 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
            FUN_140069100(param_1,puVar17);
            *(undefined4 *)(lVar3 + 0x1e88) = *(undefined4 *)(lVar19 + 0x13694);
            iVar18 = (int)local_138[1];
            lVar16 = local_140;
            param_2 = local_138;
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < iVar18);
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14310c508 FUN_14310c508 body=2107 status=ok
// SIG undefined FUN_14310c508(void)

void FUN_14310c508(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  char param_5,longlong param_6,longlong param_7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  byte bVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  longlong local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined1 local_171;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int local_15c;
  undefined1 local_158;
  undefined1 local_154;
  uint local_150;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined8 local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar18 = (longlong)(int)param_2[1];
  local_1a8 = param_4;
  local_188 = param_3;
  if (0 < lVar18) {
    lVar15 = *param_2;
    bVar14 = 0;
    do {
      bVar4 = FUN_1400edda3(lVar15);
      plVar16 = DAT_14ca27dc8;
      bVar14 = bVar14 | bVar4;
      lVar15 = lVar15 + 0x13c10;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if ((bVar14 & 1) != 0) {
      if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
        iVar7 = FUN_140052f36(DAT_14ca27dc8);
        if (iVar7 == 0) {
          plVar16 = plVar16 + 0xb;
        }
        else {
          plVar16 = (longlong *)plVar16[10];
        }
        cVar5 = (char)*plVar16;
      }
      else {
        cVar5 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
      }
      puVar12 = &DAT_14c9e7550;
      if (cVar5 != '\0') {
        puVar12 = &DAT_14c9c05f0;
      }
      iVar7 = (int)param_2[1];
      if (0 < iVar7) {
        local_198 = *(undefined8 *)(puVar12 + 0x10);
        local_1a0 = (longlong *)(param_1 + 0x70);
        local_1c0 = (longlong *)(param_1 + 0x98);
        lVar18 = 0xc;
        lVar21 = 0;
        lVar15 = 0;
        local_1c8 = param_1;
        local_190 = param_2;
        do {
          lVar20 = *param_2;
          cVar5 = FUN_1400edda3(lVar20 + lVar21);
          if (cVar5 != '\0') {
            lVar11 = *(longlong *)(lVar20 + 0x3110 + lVar21);
            fVar23 = *(float *)(lVar11 + 0xe7c);
            if (((fVar23 != 0.0) || (NAN(fVar23))) || ((*(byte *)(lVar11 + 0x15b0) & 0x10) != 0)) {
              lVar11 = *(longlong *)(lVar20 + 0x3108 + lVar21);
              iVar7 = *(int *)(lVar11 + 0x1ef0);
              iVar2 = *(int *)(lVar11 + 0x1ef4);
              iVar17 = iVar2;
              if (iVar7 - 1U < 3) {
                iVar17 = 2;
              }
              if (iVar2 != 3) {
                iVar17 = iVar2;
              }
              local_140 = 0;
              local_1b8 = 0;
              local_148 = 0;
              local_1d8 = &local_148;
              local_1b0 = lVar20 + lVar21;
              FUN_14310cd44(iVar7,lVar11 + 0x1e78,param_1,&local_140);
              uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar20 + 0x3090 + lVar21) * 2)
              ;
              puVar13 = DAT_14ca96af8;
              if (DAT_14ca96af8 == (undefined4 *)0x0) {
                puVar13 = &DAT_14ca96aa8;
              }
              if (((uint)puVar13[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0) {
                local_1b8 = CONCAT71((int7)((ulonglong)uVar1 * 0x3c >> 8),
                                     2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf]);
              }
              lVar11 = *(longlong *)(lVar20 + 0x3108 + lVar21);
              if ((lVar11 == 0) || (*(int *)(DAT_14ca69708 + 4) < 1)) {
                bVar6 = false;
              }
              else {
                uVar3 = *(uint *)(lVar11 + 0x1ef0);
                cVar5 = FUN_1400edda3();
                bVar6 = cVar5 != '\0' && (uVar3 & 0xfffffffd) == 0;
                param_1 = local_1c8;
              }
              local_158 = 0;
              if (param_5 == '\0') {
                local_154 = false;
              }
              else {
                local_154 = 0.0 < *(float *)(lVar20 + 0x23f8 + lVar21);
              }
              local_150 = (uint)*(byte *)(local_1a8 + 0x91);
              local_15c = iVar17;
              if (bVar6) {
                cVar5 = (**(code **)(**(longlong **)(*(longlong *)(lVar20 + 8 + lVar21) + 0x40) +
                                    0x290))();
                if (cVar5 == '\0') {
                  local_14c = 0;
                }
                else {
                  local_14c = FUN_140047f5c(*(undefined8 *)(lVar20 + 8 + lVar21));
                }
                local_14b = *(int *)(lVar20 + 0x118e0 + lVar21) != 0;
              }
              else {
                local_14c = 0;
                local_14b = false;
              }
              FUN_14045fa90(&local_170,*(undefined8 *)(lVar20 + 0x13818 + lVar21),&local_15c);
              plVar16 = local_1a0;
              puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar8 = puVar19 + 0x4a;
              if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
                FUN_140023dd8(local_1a0,0x260);
                puVar19 = (undefined8 *)(*plVar16 + 0xfU & 0xfffffffffffffff0);
                puVar8 = puVar19 + 0x4a;
              }
              *(undefined8 **)(param_1 + 0x70) = puVar8;
              *puVar19 = &PTR_FUN_14a333978;
              local_180 = puVar19 + 2;
              FUN_144b19202();
              iVar2 = *(int *)(param_1 + 0xa0);
              *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
              if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
                FUN_1448cfae8(local_1c0,iVar2);
              }
              *(undefined8 **)(*local_1c0 + (longlong)iVar2 * 8) = puVar19;
              lVar9 = FUN_1447e4f80();
              lVar11 = local_140;
              cVar5 = *(char *)(lVar9 + 0x41);
              if (*(char *)(lVar9 + 0x41) == '\x03') {
                cVar5 = '\x02';
              }
              puVar19[2] = *(undefined8 *)(lVar20 + 0x18 + lVar21);
              *(char *)(puVar19 + 3) = cVar5;
              puVar19[0x1a] = local_188;
              puVar19[0x1b] = 0;
              *(undefined4 *)(puVar19 + 0x1c) = 0xffff0001;
              puVar19[0x17] = local_1a8;
              puVar19[0x14] = local_140;
              puVar19[0x15] = local_148;
              puVar19[0x18] = DAT_14c9c0de0;
              fVar23 = 0.0;
              if (0.0 <= *(float *)(DAT_14ca6c2e0 + 4)) {
                fVar23 = *(float *)(DAT_14ca6c2e0 + 4);
              }
              *(float *)((longlong)puVar19 + 0x1d4) = fVar23;
              fVar23 = 1.0;
              if (iVar7 - 2U < 2) {
LAB_14310c993:
                fVar24 = 1.0 / fVar23;
              }
              else {
                fVar24 = 0.5;
                fVar23 = 2.0;
                if (iVar7 != 1) {
                  fVar23 = 2.0;
                  goto LAB_14310c993;
                }
              }
              fVar22 = (float)FUN_14054f85b(iVar7);
              *(float *)(puVar19 + 0x3e) = fVar24 * fVar22;
              *(float *)((longlong)puVar19 + 500) = fVar23 * fVar22;
              uVar10 = *(undefined8 *)(param_7 + 0x198);
              lVar9 = FUN_14482e3b2();
              cVar5 = *(char *)(lVar9 + 0x41);
              if (*(char *)(lVar9 + 0x41) == '\x03') {
                cVar5 = '\x02';
              }
              puVar19[0x46] = uVar10;
              *(char *)(puVar19 + 0x47) = cVar5;
              uVar10 = *(undefined8 *)(lVar20 + 0x118d0 + lVar21);
              lVar9 = FUN_144a2c9be();
              param_1 = local_1c8;
              cVar5 = *(char *)(lVar9 + 0x41);
              if (cVar5 == '\x03') {
                cVar5 = '\x02';
              }
              puVar19[0x48] = uVar10;
              *(char *)(puVar19 + 0x49) = cVar5;
              *(uint *)(puVar19 + 0x3a) = (uint)(byte)local_1b8;
              iVar7 = *(int *)(puVar19[0x14] + 0x84);
              iVar2 = *(int *)(puVar19[0x14] + 0x88);
              puVar19[0x42] = 0;
              *(int *)(puVar19 + 0x43) = iVar7 + -1;
              fVar23 = (float)iVar7;
              *(int *)((longlong)puVar19 + 0x21c) = iVar2 + -1;
              *(float *)(puVar19 + 0x44) = 0.51 / fVar23;
              fVar24 = (float)iVar2;
              *(float *)((longlong)puVar19 + 0x224) = 0.51 / fVar24;
              *(float *)(puVar19 + 0x45) = (fVar23 + -0.51) / fVar23;
              *(float *)((longlong)puVar19 + 0x22c) = (fVar24 + -0.51) / fVar24;
              puVar19[0x16] = *(undefined8 *)(param_6 + 0x10);
              puVar19[0x19] = DAT_14c9c0d80;
              if (param_5 != '\0') {
                lVar9 = *(longlong *)(param_6 + 0x18);
                fVar23 = *(float *)(param_6 + 0x28);
                *(float *)(puVar19 + 0x3f) = 1.0 / fVar23;
                *(float *)((longlong)puVar19 + 0x1fc) = fVar23;
                iVar7 = *(int *)(lVar9 + lVar18);
                iVar2 = *(int *)(lVar9 + -4 + lVar18);
                iVar17 = *(int *)(lVar9 + -8 + lVar18);
                *(float *)(puVar19 + 0x40) = (float)*(int *)(lVar9 + -0xc + lVar18);
                *(float *)((longlong)puVar19 + 0x204) = (float)iVar17;
                *(float *)(puVar19 + 0x41) = (float)iVar2;
                *(float *)((longlong)puVar19 + 0x20c) = (float)iVar7;
              }
              fVar23 = (float)*(int *)(lVar11 + 0x88);
              fVar24 = (float)*(int *)(lVar11 + 0x84);
              *(float *)(puVar19 + 0x3c) = fVar24;
              *(float *)((longlong)puVar19 + 0x1e4) = fVar23;
              *(float *)(puVar19 + 0x3d) = 1.0 / fVar24;
              *(float *)((longlong)puVar19 + 0x1ec) = 1.0 / fVar23;
              uVar10 = FUN_144a97bef(local_1c8,local_1b0);
              lVar11 = FUN_144a80e70();
              cVar5 = *(char *)(lVar11 + 0x41);
              if (*(char *)(lVar11 + 0x41) == '\x03') {
                cVar5 = '\x02';
              }
              puVar19[0x12] = uVar10;
              *(char *)(puVar19 + 0x13) = cVar5;
              lVar20 = lVar20 + lVar21;
              puVar8 = (undefined8 *)(lVar20 + 72000);
              puVar19 = puVar19 + 4;
              for (lVar11 = 0xd; lVar11 != 0; lVar11 = lVar11 + -1) {
                *puVar19 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar19 = puVar19 + 1;
              }
              uVar10 = *(undefined8 *)(lVar20 + 0x13818);
              FUN_14045fc6a();
              puVar8 = local_180;
              local_138 = (undefined8 *)0x0;
              uStack_130 = 0;
              FUN_1448f70da(CONCAT44(uStack_16c,local_170),&DAT_14ca6d0a8,local_180,&local_138);
              local_138 = puVar8;
              local_128 = local_170;
              uStack_124 = uStack_16c;
              uStack_120 = uStack_168;
              uStack_11c = uStack_164;
              local_118 = *(undefined8 *)(lVar20 + 0x30f8);
              local_110 = *(undefined8 *)(lVar20 + 0x3100);
              local_108 = local_198;
              local_100 = 0;
              uStack_f8 = 0;
              local_f0 = 0;
              uStack_130 = uVar10;
              FUN_14045fc6a();
              FUN_14178720e(param_1,&local_171,puVar8,&local_138);
              iVar7 = (int)local_190[1];
              param_2 = local_190;
            }
          }
          lVar15 = lVar15 + 1;
          lVar18 = lVar18 + 0x20;
          lVar21 = lVar21 + 0x13c10;
        } while (lVar15 < iVar7);
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14310cd44 FUN_14310cd44 body=96 status=ok
// SIG undefined FUN_14310cd44(void)

void FUN_14310cd44(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  if ((param_1 & 0xfffffffd) == 1) {
    uVar1 = FUN_14178685e(param_2,param_3);
    *param_4 = uVar1;
    uVar1 = FUN_14178693c(param_2,param_3);
  }
  else {
    uVar1 = FUN_141786e3a(param_2,param_3);
    *param_4 = uVar1;
    uVar1 = FUN_141786f24(param_2,param_3);
  }
  *param_5 = uVar1;
  return;
}



// FUNCTION 14310cda4 FUN_14310cda4 body=1654 status=ok
// SIG undefined FUN_14310cda4(void)

void FUN_14310cda4(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 *local_180;
  longlong local_178;
  longlong local_170;
  undefined1 local_161;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int local_14c;
  undefined1 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined2 local_13c;
  undefined8 local_138;
  longlong local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar16 = (ulonglong)(int)param_2[1];
  local_1b0 = param_3;
  local_170 = param_4;
  if (0 < (longlong)uVar16) {
    lVar18 = *param_2;
    bVar10 = 0;
    uVar12 = uVar16;
    local_1a0 = param_1;
    do {
      bVar6 = FUN_1400edda3(lVar18);
      bVar10 = bVar10 | bVar6;
      lVar18 = lVar18 + 0x13c10;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if ((bVar10 & 1) != 0) {
      local_190 = DAT_14c9e7560;
      local_198 = (longlong *)(local_1a0 + 0x70);
      local_1a8 = (longlong *)(local_1a0 + 0x98);
      lVar11 = 0;
      lVar14 = 0;
      lVar13 = 0;
      lVar18 = local_1a0;
      do {
        lVar3 = *param_2;
        cVar7 = FUN_1400edda3(lVar11 + lVar3);
        if ((((cVar7 != '\0') && ((*(byte *)(lVar3 + 0x125b0 + lVar11) & 2) == 0)) &&
            (*(char *)(lVar3 + 0x30c8 + lVar11) == '\0')) &&
           (((*(char *)(lVar3 + 0x23f2 + lVar11) == '\0' &&
             (*(char *)(lVar3 + 0x23f5 + lVar11) != '\x01')) ||
            (*(int *)(lVar3 + 0x1dd0 + lVar11) != 2)))) {
          local_178 = *(longlong *)(local_1b0 + 0x18);
          lVar9 = *(longlong *)(lVar3 + 0x3108 + lVar11);
          iVar1 = *(int *)(lVar9 + 0x1ef0);
          iVar2 = *(int *)(lVar9 + 0x1ef4);
          iVar15 = iVar2;
          if (iVar1 - 1U < 3) {
            iVar15 = 2;
          }
          if (iVar2 != 3) {
            iVar15 = iVar2;
          }
          local_130 = 0;
          local_138 = 0;
          local_1b8 = &local_138;
          FUN_14310cd44(iVar1,lVar9 + 0x1e78,lVar18,&local_130);
          local_13c = 0;
          local_148 = 1;
          local_144 = 0;
          local_140 = 1;
          local_14c = iVar15;
          FUN_14045fa90(&local_160,*(undefined8 *)(lVar3 + 0x13818 + lVar11),&local_14c);
          plVar5 = local_198;
          puVar17 = (undefined8 *)(*(longlong *)(lVar18 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar8 = puVar17 + 0x4a;
          if (*(undefined8 **)(lVar18 + 0x78) < puVar8) {
            FUN_140023dd8(local_198,0x260);
            puVar17 = (undefined8 *)(*plVar5 + 0xfU & 0xfffffffffffffff0);
            puVar8 = puVar17 + 0x4a;
          }
          *(undefined8 **)(lVar18 + 0x70) = puVar8;
          *puVar17 = &PTR_FUN_14a333978;
          local_180 = puVar17 + 2;
          FUN_144b19202();
          iVar2 = *(int *)(lVar18 + 0xa0);
          *(uint *)(lVar18 + 0xa0) = iVar2 + 1U;
          if (*(uint *)(lVar18 + 0xa4) < iVar2 + 1U) {
            FUN_1448cfae8(local_1a8,iVar2);
          }
          *(undefined8 **)(*local_1a8 + (longlong)iVar2 * 8) = puVar17;
          lVar18 = FUN_1447e4f80();
          cVar7 = *(char *)(lVar18 + 0x41);
          if (*(char *)(lVar18 + 0x41) == '\x03') {
            cVar7 = '\x02';
          }
          puVar17[2] = *(undefined8 *)(lVar3 + 0x18 + lVar11);
          *(char *)(puVar17 + 3) = cVar7;
          puVar17[0x1a] = *(undefined8 *)(local_1b0 + 8);
          puVar17[0x1b] = 0;
          *(undefined4 *)(puVar17 + 0x1c) = 0xffff0001;
          local_188 = local_130;
          puVar17[0x14] = local_130;
          puVar17[0x15] = local_138;
          puVar17[0x16] = *(undefined8 *)(local_1b0 + 0x10);
          puVar17[0x18] = DAT_14c9c0de0;
          puVar17[0x19] = DAT_14c9c0d80;
          fVar20 = 0.0;
          if (0.0 <= *(float *)(DAT_14ca6c2e0 + 4)) {
            fVar20 = *(float *)(DAT_14ca6c2e0 + 4);
          }
          *(float *)((longlong)puVar17 + 0x1d4) = fVar20;
          fVar20 = 1.0;
          if (iVar1 - 2U < 2) {
LAB_14310d117:
            fVar21 = 1.0 / fVar20;
          }
          else {
            fVar21 = 0.5;
            fVar20 = 2.0;
            if (iVar1 != 1) {
              fVar20 = 2.0;
              goto LAB_14310d117;
            }
          }
          fVar19 = (float)FUN_14054f85b(iVar1);
          lVar18 = local_178;
          *(float *)(puVar17 + 0x3e) = fVar21 * fVar19;
          *(float *)((longlong)puVar17 + 500) = fVar20 * fVar19;
          fVar20 = *(float *)(local_1b0 + 0x28);
          *(float *)(puVar17 + 0x3f) = 1.0 / fVar20;
          *(float *)((longlong)puVar17 + 0x1fc) = fVar20;
          iVar1 = *(int *)(local_178 + 0xc + lVar14);
          iVar2 = *(int *)(local_178 + 8 + lVar14);
          iVar15 = *(int *)(local_178 + 4 + lVar14);
          *(float *)(puVar17 + 0x40) = (float)*(int *)(local_178 + lVar14);
          *(float *)((longlong)puVar17 + 0x204) = (float)iVar15;
          *(float *)(puVar17 + 0x41) = (float)iVar2;
          *(float *)((longlong)puVar17 + 0x20c) = (float)iVar1;
          uVar4 = *(undefined8 *)(local_170 + 0x198);
          lVar9 = FUN_14482e3b2();
          cVar7 = *(char *)(lVar9 + 0x41);
          if (cVar7 == '\x03') {
            cVar7 = '\x02';
          }
          puVar17[0x46] = uVar4;
          *(char *)(puVar17 + 0x47) = cVar7;
          uVar4 = *(undefined8 *)(lVar3 + 0x118d0 + lVar11);
          lVar9 = FUN_144a2c9be();
          cVar7 = *(char *)(lVar9 + 0x41);
          if (*(char *)(lVar9 + 0x41) == '\x03') {
            cVar7 = '\x02';
          }
          puVar17[0x48] = uVar4;
          *(char *)(puVar17 + 0x49) = cVar7;
          iVar1 = *(int *)(puVar17[0x14] + 0x84);
          iVar2 = *(int *)(puVar17[0x14] + 0x88);
          puVar17[0x42] = 0;
          *(int *)(puVar17 + 0x43) = iVar1 + -1;
          *(int *)((longlong)puVar17 + 0x21c) = iVar2 + -1;
          fVar20 = (float)iVar1;
          fVar21 = (float)iVar2;
          *(float *)(puVar17 + 0x44) = 0.51 / fVar20;
          *(float *)((longlong)puVar17 + 0x224) = 0.51 / fVar21;
          *(float *)(puVar17 + 0x45) = (fVar20 + -0.51) / fVar20;
          *(float *)((longlong)puVar17 + 0x22c) = (fVar21 + -0.51) / fVar21;
          iVar1 = *(int *)(local_188 + 0x88);
          iVar2 = *(int *)(local_188 + 0x84);
          *(float *)(puVar17 + 0x3c) = (float)iVar2;
          *(float *)((longlong)puVar17 + 0x1e4) = (float)iVar1;
          *(float *)(puVar17 + 0x3d) = 1.0 / (float)iVar2;
          *(float *)((longlong)puVar17 + 0x1ec) = 1.0 / (float)iVar1;
          uVar4 = *(undefined8 *)(lVar3 + 0x13818 + lVar11);
          FUN_14045fc6a();
          puVar8 = local_180;
          local_128 = (undefined8 *)0x0;
          uStack_120 = 0;
          FUN_1448f70da(CONCAT44(uStack_15c,local_160),&DAT_14ca6d0a8,local_180,&local_128);
          local_128 = puVar8;
          local_118 = local_160;
          uStack_114 = uStack_15c;
          uStack_110 = uStack_158;
          uStack_10c = uStack_154;
          local_108 = *(undefined8 *)(lVar18 + lVar14);
          local_100 = *(undefined8 *)(lVar18 + 8 + lVar14);
          local_f8 = local_190;
          local_f0 = 0;
          uStack_e8 = 0;
          local_e0 = 0;
          uStack_120 = uVar4;
          FUN_14045fc6a();
          lVar18 = local_1a0;
          FUN_14178720e(local_1a0,&local_161,puVar8,&local_128);
          uVar16 = (ulonglong)*(uint *)(param_2 + 1);
        }
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 0x20;
        lVar11 = lVar11 + 0x13c10;
      } while (lVar13 < (int)uVar16);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14310d47b FUN_14310d47b body=153 status=ok
// SIG undefined FUN_14310d47b(void)

int FUN_14310d47b(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  float fVar6;
  
  lVar1 = DAT_14ca698d0;
  if (param_1 == (longlong *)0x0) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar5 = 0;
    }
    else if (iVar2 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar5 = 1;
    }
    iVar2 = *(int *)(lVar1 + uVar5 * 4);
    fVar6 = (float)(**(code **)(*param_1 + 0x170))(param_1);
    if ((int)(fVar6 * 512.0) < iVar2) {
      iVar2 = (int)(fVar6 * 512.0);
    }
  }
  return iVar2;
}



// FUNCTION 14310d514 FUN_14310d514 body=31 status=ok
// SIG undefined FUN_14310d514(void)

undefined8 FUN_14310d514(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14310d534 FUN_14310d534 body=38 status=ok
// SIG undefined FUN_14310d534(void)

undefined8 FUN_14310d534(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14310d55a FUN_14310d55a body=1324 status=ok
// SIG undefined FUN_14310d55a(void)

void FUN_14310d55a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined1 *local_2c0;
  int local_2b8;
  undefined8 local_2b0;
  undefined **local_2a8;
  longlong **local_2a0;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined1 *local_288;
  undefined1 local_279;
  undefined8 local_278;
  undefined8 uStack_270;
  longlong *local_268;
  ulonglong uStack_260;
  undefined4 local_258;
  undefined **local_248;
  undefined4 local_240;
  undefined2 local_238;
  undefined8 local_230;
  undefined4 local_228;
  longlong local_220;
  undefined ***local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined8 local_180;
  undefined1 *local_178;
  undefined1 local_170 [8];
  undefined8 local_168;
  undefined1 *local_160;
  undefined8 uStack_158;
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140;
  undefined1 local_138 [64];
  undefined1 *local_f8;
  int local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_144b1c6fa(param_1 + 0x10,local_150);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  *(int *)(puVar10 + 4) = local_140;
  if ((longlong)local_140 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    puVar7 = local_148;
    if (local_148 == (undefined1 *)0x0) {
      puVar7 = local_150;
    }
    FUN_1446fe144(puVar10 + 2,local_140,0);
    puVar6 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar6 = puVar10 + 2;
    }
    memcpy(puVar6,puVar7,(longlong)local_140);
  }
  puVar10[0xd] = 0;
  *(int *)(puVar10 + 0xe) = local_f0;
  if ((longlong)local_f0 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    puVar7 = local_f8;
    if (local_f8 == (undefined1 *)0x0) {
      puVar7 = local_138;
    }
    FUN_1446fe1b8(puVar10 + 5,local_f0,0);
    puVar6 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar10 + 5;
    }
    memcpy(puVar6,puVar7,(longlong)local_f0 << 3);
  }
  *(undefined4 *)(puVar10 + 0xf) = local_e8;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = uStack_e4;
  *(undefined4 *)(puVar10 + 0x10) = uStack_e0;
  *(undefined4 *)((longlong)puVar10 + 0x84) = uStack_dc;
  if (local_f8 != (undefined1 *)0x0) {
    FUN_1400020a8(local_f8);
  }
  if (local_148 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x1c0);
  local_2b0 = *(undefined8 *)(param_1 + 0x1c8);
  local_258 = 0;
  local_268 = (longlong *)0x0;
  uStack_260 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_1a0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_198 = &DAT_100000001;
  local_1a8 = 0xffffffffffffffff;
  local_190 = 0;
  local_180 = 0;
  local_168 = 0;
  local_178 = &DAT_100000001;
  local_160 = &DAT_100000001;
  uStack_158 = 0;
  FUN_14471858a(local_170,1);
  local_2a8 = &PTR_FUN_14a1f9a30;
  local_290 = &local_1c8;
  local_288 = &local_279;
  uVar1 = *(undefined4 *)(lVar2 + 0x3090);
  local_2a0 = &local_268;
  local_298 = &local_278;
  local_230 = (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 8) + 0x40) + 0x3e0))();
  local_240 = 0xffffffff;
  local_238 = 0x3a3a;
  local_210 = 0x3a;
  local_248 = &PTR_FUN_14a331c00;
  local_1f8 = 0x11;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_208 = DAT_14c9c0d50;
  local_200 = DAT_14c9c0d98;
  local_1d0 = 0;
  local_a8 = (undefined1 *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xffffffff;
  local_78 = 0xff0000ffffffff;
  local_70 = 0;
  local_6c = 0x40c00f07;
  local_68 = local_68 & 0xfc;
  local_a0 = &DAT_100000001;
  local_228 = uVar1;
  local_220 = lVar2;
  local_218 = &local_2a8;
  FUN_14470b9e0(local_150,1);
  FUN_14310da87(local_150,local_2b0);
  local_2c8 = (undefined8 *)CONCAT44(local_2c8._4_4_,0xffffffff);
  FUN_1449d91ca(&local_248,local_150,0xffffffffffffffff,0);
  puVar7 = local_a8;
  if (local_a8 == (undefined1 *)0x0) {
    puVar7 = local_150;
  }
  FUN_1446fc26f(puVar7,(ulonglong)local_a0 & 0xffffffff);
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(lVar2 + 0x23f2) == '\x01') {
    cVar4 = FUN_144b2acae(lVar2);
    local_2b8 = 1;
    if (cVar4 != '\0') {
      bVar5 = FUN_144b2acba(lVar2);
      local_2b8 = bVar5 + 1;
    }
  }
  else {
    local_2b8 = 1;
  }
  local_2c0 = &local_279;
  local_2c8 = &local_1c8;
  FUN_142de60ce(lVar2,param_2,&local_278,&local_268);
  FUN_1446fb350(&local_1c8);
  FUN_140021158(&local_278);
  plVar8 = local_268;
  for (iVar9 = (int)uStack_260; iVar9 != 0; iVar9 = iVar9 + -1) {
    lVar2 = *plVar8;
    if (lVar2 != 0) {
      lVar11 = 0x3df0;
      do {
        if (*(longlong *)(lVar2 + 0xc0 + lVar11) != 0) {
          FUN_1400020a8();
        }
        if ((0x50 < *(ushort *)(lVar2 + 0x62 + lVar11)) &&
           (*(longlong *)(lVar2 + 0x10 + lVar11) != 0)) {
          FUN_1400020a8();
        }
        *(undefined2 *)(lVar2 + 0x62 + lVar11) = 0;
        *(undefined8 *)(lVar2 + 0x10 + lVar11) = 0;
        if (*(longlong *)(lVar2 + lVar11) != 0) {
          FUN_1400020a8();
        }
        lVar11 = lVar11 + -0x120;
      } while (lVar11 != -0x110);
      FUN_1400020a8(lVar2);
    }
    plVar8 = plVar8 + 1;
  }
  uVar3 = uStack_260 >> 0x20;
  uStack_260 = uStack_260 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_1447ab16c(&local_268,0);
  }
  if (local_268 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14310da87 FUN_14310da87 body=176 status=ok
// SIG undefined FUN_14310da87(void)

void FUN_14310da87(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0xb8) = DAT_14ca6adc8;
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar1 = param_1;
  }
  *(undefined8 **)(lVar1 + 0x18) = &DAT_14ca89248;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar1 = param_1;
  }
  *(undefined4 *)(lVar1 + 0x58) = 0;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar1 = param_1;
  }
  *(undefined4 *)(lVar1 + 0x5c) = 1;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar1 = param_1;
  }
  *(undefined4 *)(lVar1 + 0x68) = 0;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar1 = param_1;
  }
  *(undefined4 *)(lVar1 + 0x6c) = 2;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar1 = param_1;
  }
  *(undefined8 **)(lVar1 + 8) = &DAT_14cb05598;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar1 = param_1;
  }
  *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) & 0xfffffff8 | 2;
  return;
}



// FUNCTION 14310db44 FUN_14310db44 body=31 status=ok
// SIG undefined FUN_14310db44(void)

undefined8 FUN_14310db44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14310db64 FUN_14310db64 body=1324 status=ok
// SIG undefined FUN_14310db64(void)

void FUN_14310db64(longlong param_1,ulonglong *param_2)

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



// FUNCTION 14310e092 FUN_14310e092 body=481 status=ok
// SIG undefined FUN_14310e092(void)

void FUN_14310e092(longlong param_1,ulonglong *param_2)

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
  FUN_147338b66(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14310e274 FUN_14310e274 body=232 status=ok
// SIG undefined FUN_14310e274(void)

void FUN_14310e274(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 14310e35c FUN_14310e35c body=81 status=ok
// SIG undefined FUN_14310e35c(void)

void FUN_14310e35c(undefined8 param_1,longlong *param_2)

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
  FUN_147338c09(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14310e3cc FUN_14310e3cc body=29 status=ok
// SIG undefined FUN_14310e3cc(void)

undefined8 FUN_14310e3cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14310e410 FUN_14310e410 body=481 status=ok
// SIG undefined FUN_14310e410(void)

void FUN_14310e410(longlong param_1,ulonglong *param_2)

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
  FUN_147338fda(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14310e5f2 FUN_14310e5f2 body=232 status=ok
// SIG undefined FUN_14310e5f2(void)

void FUN_14310e5f2(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 14310e6da FUN_14310e6da body=81 status=ok
// SIG undefined FUN_14310e6da(void)

void FUN_14310e6da(undefined8 param_1,longlong *param_2)

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
  FUN_14733907d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14310e798 FUN_14310e798 body=38 status=ok
// SIG undefined FUN_14310e798(void)

undefined8 FUN_14310e798(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14310e7be FUN_14310e7be body=648 status=ok
// SIG undefined FUN_14310e7be(void)

void FUN_14310e7be(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
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
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    puVar7 = local_c0;
    if ((undefined1 *)CONCAT71(uStack_b7,local_b8) != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
    }
    FUN_1446fe144(puVar8 + 2,local_b0,0);
    puVar3 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar3 = puVar8 + 2;
    }
    memcpy(puVar3,puVar7,(longlong)local_b0);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    puVar7 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar7 = local_a8;
    }
    FUN_1446fe1b8(puVar8 + 5,local_60,0);
    puVar3 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar8 + 5;
    }
    memcpy(puVar3,puVar7,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar8 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT71(uStack_b7,local_b8) != 0) {
    FUN_1400020a8();
  }
  uVar4 = FUN_144821ef4(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  FUN_145f6e978();
  FUN_14733ac6f(uVar4,param_1 + 0x1c8,uVar1);
  FUN_1472b057a(local_c0,*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x1c0),param_2);
  local_d0 = *(undefined4 *)(param_1 + 0x1e0);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x13ae8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  local_c8 = 1;
  local_d8 = uVar4;
  FUN_147412f8e(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x13ae0),lVar5,uVar1);
  if (local_b8 == '\x01') {
    FUN_1471f3c22(local_c0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14310ea48 FUN_14310ea48 body=140 status=ok
// SIG undefined FUN_14310ea48(void)

void FUN_14310ea48(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0x10;
  if (param_2 < 0x11) {
LAB_14310ea5d:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 0x11) && (*(longlong *)(param_1 + 0x100) == 0)) goto LAB_14310ea6e;
    uVar3 = 0;
    if (0x10 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar2 = uVar2 >> 4;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_14310ea6e;
      goto LAB_14310ea5d;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x100,0,uVar3,0x10);
LAB_14310ea6e:
  *(uint *)(param_1 + 0x114) = uVar1;
  return;
}



// FUNCTION 14310eaf8 FUN_14310eaf8 body=152 status=ok
// SIG undefined FUN_14310eaf8(void)

void FUN_14310eaf8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x4d48);
  *(uint *)(lVar2 + 0x4d48) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x4d4c) < iVar1 + 1U) {
    FUN_146316332((longlong *)(lVar2 + 0x4d40),iVar1);
  }
  lVar3 = param_1[1];
  *(longlong *)(*(longlong *)(lVar2 + 0x4d40) + (longlong)iVar1 * 8) = lVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x390,0x10);
  *plVar4 = lVar3;
  FUN_1401cafd0(plVar4 + 2);
  plVar4[0x70] = 0;
  *(longlong **)param_1[1] = plVar4;
  *(undefined8 *)(*param_1 + 0x4d38) = *(undefined8 *)param_1[1];
                    /* WARNING: Could not recover jumptable at 0x00014310eb7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x228))();
  return;
}



// FUNCTION 14310eb9a FUN_14310eb9a body=12 status=ok
// SIG undefined FUN_14310eb9a(void)

void FUN_14310eb9a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014310eba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14310eba6 FUN_14310eba6 body=29 status=ok
// SIG undefined FUN_14310eba6(void)

undefined8 FUN_14310eba6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14310ebc4 FUN_14310ebc4 body=282 status=ok
// SIG undefined FUN_14310ebc4(void)

undefined8 * FUN_14310ebc4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14310e3e9);
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



// FUNCTION 14310ecde FUN_14310ecde body=231 status=ok
// SIG undefined FUN_14310ecde(void)

void FUN_14310ecde(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  iVar2 = *(int *)(lVar3 + 0x4d48);
  *(uint *)(lVar3 + 0x4d48) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x4d4c) < iVar2 + 1U) {
    FUN_146316332((longlong *)(lVar3 + 0x4d40),iVar2);
  }
  uVar4 = param_1[0x16];
  *(undefined8 *)(*(longlong *)(lVar3 + 0x4d40) + (longlong)iVar2 * 8) = uVar4;
  puVar5 = (undefined8 *)FUN_14001cc68(0x390,0x10);
  *puVar5 = uVar4;
  FUN_1401cafd0(puVar5 + 2);
  puVar5[0x70] = 0;
  *(undefined8 **)param_1[0x16] = puVar5;
  *(undefined8 *)(param_1[0x15] + 0x4d38) = *(undefined8 *)param_1[0x16];
  (**(code **)(*(longlong *)param_1[0x15] + 0x228))();
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014310edaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14310edc6 FUN_14310edc6 body=115 status=ok
// SIG undefined FUN_14310edc6(void)

void FUN_14310edc6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_1;
    lVar5 = (longlong)iVar1 * 8;
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) == *param_2) {
        if ((uint)lVar4 == 0xffffffff) {
          return;
        }
        memmove((void *)(lVar2 + (lVar3 >> 0x20) * 8),(void *)(lVar2 + (lVar3 >> 0x20) * 8 + 8),
                (longlong)(int)(~(uint)lVar4 + iVar1) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14310ee3a FUN_14310ee3a body=237 status=ok
// SIG undefined FUN_14310ee3a(void)

void FUN_14310ee3a(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  
  lVar4 = *(longlong *)param_1[1];
  if (lVar4 != 0) {
    lVar5 = *(longlong *)(lVar4 + 0x380);
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
    FUN_1400020a8(lVar4);
  }
  FUN_14310edc6(*param_1 + 0x4d40,param_1 + 1);
  lVar4 = *param_1;
  if ((longlong)*(int *)(lVar4 + 0x4d48) < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = **(undefined8 **)
              (*(longlong *)(lVar4 + 0x4d40) + -8 + (longlong)*(int *)(lVar4 + 0x4d48) * 8);
  }
  *(undefined8 *)(lVar4 + 0x4d38) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00014310ef09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x228))();
  return;
}



// FUNCTION 14310ef32 FUN_14310ef32 body=12 status=ok
// SIG undefined FUN_14310ef32(void)

void FUN_14310ef32(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014310ef3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}


