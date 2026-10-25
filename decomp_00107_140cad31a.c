// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140cad31a FUN_140cad31a body=113 status=ok
// SIG undefined FUN_140cad31a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cad31a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb702c8;
  if (DAT_14cb702c8 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x3400,0);
    lVar4 = 0x1f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x34;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb702c8;
    DAT_14cb702d0 = DAT_14cb702d0 + 0x20;
  }
  DAT_14cb702c8 = (undefined8 *)*puVar2;
  _DAT_14cb702d4 = _DAT_14cb702d4 + 1;
  return;
}



// FUNCTION 140cad38c FUN_140cad38c body=163 status=ok
// SIG undefined FUN_140cad38c(void)

void FUN_140cad38c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xe) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x16) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x1e) = 1;
  *(undefined4 *)(puVar1 + 4) = 0xffffffff;
  *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
  FUN_1404d75a8(puVar1 + 2,0);
  FUN_1404d768c(puVar1[2]);
  local_28 = puVar1;
  FUN_140cad430(param_1,&local_28);
  puVar1 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    FUN_14074f7be(local_28);
    FUN_1400020a8(puVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cad430 FUN_140cad430 body=65 status=ok
// SIG undefined FUN_140cad430(void)

void FUN_140cad430(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0xe8);
  if (plVar2 != param_2) {
    lVar1 = *plVar2;
    *plVar2 = *param_2;
    *param_2 = 0;
    if (lVar1 != 0) {
      FUN_14074f7be(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140cad480 FUN_140cad480 body=73 status=ok
// SIG undefined FUN_140cad480(void)

undefined8 * FUN_140cad480(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b366bf0;
  FUN_14029b636(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cad4ca FUN_140cad4ca body=114 status=ok
// SIG undefined FUN_140cad4ca(void)

undefined8 *** FUN_140cad4ca(undefined8 param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 ***local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  ppppuVar1 = &local_20;
  local_28 = param_2;
  FUN_140cad53e(param_1,ppppuVar1,1 << (DAT_14cab3ff8 & 0x1f));
  if ((local_18 == '\x01') || (local_18 == '\x02')) {
    ppppuVar1 = (undefined8 ****)local_20;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *ppppuVar1;
}



// FUNCTION 140cad53e FUN_140cad53e body=1279 status=ok
// SIG undefined FUN_140cad53e(void)

longlong * FUN_140cad53e(ulonglong *param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ushort *puVar2;
  byte bVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  ushort uVar11;
  byte *pbVar12;
  void *pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined8 *local_88;
  longlong *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = (uint)param_1[2] | param_3;
  *(uint *)(param_1 + 2) = uVar5;
  uVar5 = param_3 - 1 & uVar5;
  uVar14 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
  uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  uVar19 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar19 >> 0x38;
  uVar14 = *param_1;
  bVar8 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar8 == 0) {
    uVar18 = 8;
  }
  else {
    uVar18 = 8;
    lVar10 = 0;
    do {
      uVar11 = (ushort)*(byte *)(uVar14 + 3 + lVar10);
      if (uVar18 < uVar11) {
        uVar18 = uVar11;
      }
      lVar10 = lVar10 + 6;
    } while ((ulonglong)((uint)bVar8 + (uint)bVar8) * 3 != lVar10);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  local_88 = param_4;
  FUN_14086fe48(local_78,bVar8 + 1);
  lVar10 = (ulonglong)((uint)bVar8 * 2 + 2) * 3;
  bVar3 = (byte)(uVar19 >> 0x38);
  if (uVar20 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)bVar3 + (uint)(bVar3 == 0);
    pbVar12 = (byte *)(uVar14 + 3);
    uVar15 = 0;
    do {
      uVar16 = -(ulonglong)*pbVar12 & (lVar10 + (ulonglong)*pbVar12) - 1;
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(short *)(puVar7 + uVar15 * 2) = (short)uVar16;
      lVar10 = pbVar12[-1] + uVar16;
      uVar15 = uVar15 + 1;
      pbVar12 = pbVar12 + 6;
    } while (uVar5 != uVar15);
  }
  uVar15 = lVar10 + 7U & 0xfffffffffffffff8;
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  uVar16 = (ulonglong)uVar5;
  *(short *)(puVar7 + uVar16 * 2) = (short)uVar15;
  uVar15 = uVar15 + 8;
  if (uVar5 < bVar8) {
    pbVar12 = (byte *)(uVar16 * 6 + 3 + uVar14);
    do {
      uVar15 = -(ulonglong)*pbVar12 & (uVar15 + *pbVar12) - 1;
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(short *)(puVar7 + uVar16 * 2 + 2) = (short)uVar15;
      uVar16 = uVar16 + 1;
      uVar15 = pbVar12[-1] + uVar15;
      pbVar12 = pbVar12 + 6;
    } while ((uint)bVar8 != uVar16);
  }
  uVar16 = *param_1;
  if (((ushort)param_1[1] < uVar18) || (*(ushort *)((longlong)param_1 + 10) < uVar15)) {
    uVar6 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 10) * 2);
    if (uVar15 < uVar6) {
      uVar15 = uVar6;
    }
    *(short *)((longlong)param_1 + 10) = (short)uVar15;
    uVar15 = uVar15 & 0xffff;
    uVar6 = FUN_14001cc68(uVar15,uVar18);
    *param_1 = uVar6;
    local_8c = (undefined4)CONCAT71((int7)(uVar15 >> 8),1);
  }
  else {
    local_8c = 0;
    uVar6 = uVar16;
  }
  bVar8 = *(char *)((longlong)param_1 + 0xc) + 1;
  *(byte *)((longlong)param_1 + 0xc) = bVar8;
  uVar15 = (ulonglong)bVar8;
  iVar9 = bVar8 - 1;
  local_80 = param_2;
  if ((int)(uint)bVar3 < iVar9) {
    pbVar12 = (byte *)((ulonglong)bVar8 * 6 + -10 + uVar14);
    uVar6 = (ulonglong)bVar8;
    do {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      pvVar13 = (void *)(uVar16 + *(ushort *)(pbVar12 + -2));
      if ((ulonglong)*(ushort *)(pbVar12 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar7 + uVar6 * 2 + -2) + *param_1),pvVar13,
              (ulonglong)*pbVar12);
      uVar15 = uVar6 - 1;
      pbVar12 = pbVar12 + -6;
      lVar10 = uVar6 - 2;
      uVar6 = uVar15;
    } while ((longlong)uVar20 < lVar10);
    iVar9 = (int)uVar15 + -1;
    uVar6 = *param_1;
  }
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  *(undefined8 *)(uVar6 + *(ushort *)(puVar7 + (longlong)iVar9 * 2)) = *local_88;
  if (1 < (int)uVar15) {
    uVar15 = (ulonglong)((int)uVar15 - 2);
    pbVar12 = (byte *)(uVar15 * 6 + 2 + uVar14);
    do {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      pvVar13 = (void *)(uVar16 + *(ushort *)(pbVar12 + -2));
      if ((ulonglong)*(ushort *)(pbVar12 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar7 + uVar15 * 2) + *param_1),pvVar13,
              (ulonglong)*pbVar12);
      pbVar12 = pbVar12 + -6;
      bVar21 = uVar15 != 0;
      uVar15 = uVar15 - 1;
    } while (bVar21);
  }
  uVar15 = *param_1;
  bVar8 = *(byte *)((longlong)param_1 + 0xc);
  uVar5 = (uint)bVar8;
  iVar9 = bVar8 - 1;
  uVar6 = uVar15;
  if ((int)(uint)bVar3 < iVar9) {
    lVar10 = (ulonglong)((uint)bVar8 + (uint)bVar8) * 3;
    uVar6 = (ulonglong)(uint)bVar8;
    do {
      *(undefined2 *)((uVar15 - 2) + lVar10) = *(undefined2 *)((uVar14 - 8) + lVar10);
      *(undefined4 *)((uVar15 - 6) + lVar10) = *(undefined4 *)((uVar14 - 0xc) + lVar10);
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(undefined2 *)((uVar15 - 6) + lVar10) = *(undefined2 *)(puVar7 + uVar6 * 2 + -2);
      uVar1 = uVar6 - 1;
      lVar10 = lVar10 + -6;
      lVar17 = uVar6 - 2;
      uVar6 = uVar1;
    } while ((longlong)uVar20 < lVar17);
    uVar5 = (uint)uVar1;
    iVar9 = uVar5 - 1;
    uVar6 = *param_1;
  }
  puVar2 = (ushort *)(uVar15 + (longlong)iVar9 * 6);
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  uVar18 = *(ushort *)(puVar7 + (longlong)iVar9 * 2);
  *puVar2 = 0xffff;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (*param_1 <= uVar18 + uVar6) {
    *puVar2 = (short)(uVar18 + uVar6) - (short)*param_1;
  }
  puVar2[1] = 0x808;
  puVar2[2] = 0x100;
  if (1 < (int)uVar5) {
    uVar20 = (ulonglong)(uVar5 - 2);
    lVar10 = uVar20 * 6;
    do {
      *(undefined2 *)(uVar15 + 4 + lVar10) = *(undefined2 *)(uVar14 + 4 + lVar10);
      *(undefined4 *)(uVar15 + lVar10) = *(undefined4 *)(uVar14 + lVar10);
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(undefined2 *)(uVar15 + lVar10) = *(undefined2 *)(puVar7 + uVar20 * 2);
      lVar10 = lVar10 + -6;
      bVar21 = uVar20 != 0;
      uVar20 = uVar20 - 1;
    } while (bVar21);
  }
  if (((byte)local_8c & uVar16 != 0) == 1) {
    FUN_1400020a8(uVar16);
  }
  iVar9 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar9 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar9 + 1U) {
    FUN_14086feca(param_1 + 3,iVar9);
  }
  lVar10 = (uVar19 >> 0x38) * 0x10;
  memmove((void *)(param_1[3] + lVar10 + 0x10),(void *)(param_1[3] + lVar10),
          (ulonglong)(iVar9 - (uint)bVar3) << 4);
  plVar4 = local_80;
  uVar14 = param_1[3];
  *(undefined1 **)(uVar14 + lVar10) = &LAB_1432df84e;
  *(undefined **)(uVar14 + 8 + lVar10) = &DAT_140a22de2;
  lVar10 = 0;
  if ((ulonglong)*puVar2 != 0xffff) {
    lVar10 = *param_1 + (ulonglong)*puVar2;
  }
  *local_80 = (ulonglong)(byte)puVar2[2] + lVar10;
  *(undefined1 *)(local_80 + 1) = *(undefined1 *)((longlong)puVar2 + 5);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 140cada3e FUN_140cada3e body=38 status=ok
// SIG undefined FUN_140cada3e(void)

undefined8 FUN_140cada3e(undefined8 param_1,int param_2)

{
  FUN_140cada64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cada64 FUN_140cada64 body=315 status=ok
// SIG undefined FUN_140cada64(void)

void FUN_140cada64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b411468;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_140dda584(param_1 + 0x24);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x18);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140cadbe5(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140cadb9f(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cadb9f FUN_140cadb9f body=70 status=ok
// SIG undefined FUN_140cadb9f(void)

void FUN_140cadb9f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1b;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cadbe5 FUN_140cadbe5 body=87 status=ok
// SIG undefined FUN_140cadbe5(void)

void FUN_140cadbe5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xa0);
    do {
      if (plVar1[7] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cadc3c FUN_140cadc3c body=85 status=ok
// SIG undefined FUN_140cadc3c(void)

void FUN_140cadc3c(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x48;
  lVar5 = (longlong)*(int *)(lVar1 + 0x44);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x48 + 0x40);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x40);
  FUN_1401948a8();
  return;
}



// FUNCTION 140cadcaa FUN_140cadcaa body=466 status=ok
// SIG undefined FUN_140cadcaa(void)

void FUN_140cadcaa(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  if (*(longlong **)(param_1 + 0x3a8) != (longlong *)0x0) {
    fVar1 = *(float *)(param_1 + 0x38c);
    pfVar7 = (float *)&DAT_14c75b140;
    if ((*(byte *)(param_1 + 0xc84) & 1) != 0) {
      pfVar7 = (float *)(param_1 + 0xc88);
    }
    fVar2 = *pfVar7;
    fVar8 = (float)(**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x358))();
    fVar9 = (float)(**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x350))();
    *(undefined1 *)(param_1 + 0xc8c) = 1;
    dVar3 = (double)fVar2;
    dVar6 = dVar3;
    if (NAN(fVar2)) {
      dVar6 = (-dVar3 * dVar3) / (dVar3 - dVar3);
    }
    dVar5 = (double)(fVar1 * 0.017453292 * 0.5);
    dVar4 = 0.0;
    if (NAN(fVar2)) {
      dVar4 = dVar3 / (dVar3 - dVar3);
    }
    dVar3 = tan(dVar5);
    dVar5 = tan(dVar5);
    *(double *)(param_1 + 0xc90) = (double)((float)(int)fVar8 / (float)(int)fVar9) / dVar5;
    *(undefined8 *)(param_1 + 0xc98) = 0;
    *(undefined8 *)(param_1 + 0xca0) = 0;
    *(undefined8 *)(param_1 + 0xca8) = 0;
    *(undefined8 *)(param_1 + 0xcb0) = 0;
    *(double *)(param_1 + 0xcb8) = 1.0 / dVar3;
    *(undefined8 *)(param_1 + 0xcc0) = 0;
    *(undefined8 *)(param_1 + 0xcc8) = 0;
    *(undefined8 *)(param_1 + 0xcd0) = 0;
    *(undefined8 *)(param_1 + 0xcd8) = 0;
    *(double *)(param_1 + 0xce0) = dVar4;
    *(undefined8 *)(param_1 + 0xce8) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0xcf0) = 0;
    *(undefined8 *)(param_1 + 0xcf8) = 0;
    *(double *)(param_1 + 0xd00) = dVar6;
    *(undefined8 *)(param_1 + 0xd08) = 0;
                    /* WARNING: Could not recover jumptable at 0x000140cade56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x1c8))(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 140cade7c FUN_140cade7c body=40 status=ok
// SIG undefined FUN_140cade7c(void)

undefined8 FUN_140cade7c(undefined8 param_1,int param_2)

{
  FUN_140cadea4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cadea4 FUN_140cadea4 body=688 status=ok
// SIG undefined FUN_140cadea4(void)

void FUN_140cadea4(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a483880;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_140cae155(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x12;
  puVar2 = param_1 + 0x14;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = puVar2;
  if (*(int *)(param_1 + 0x17) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = plVar1;
  if (iStack_34 < *(int *)(local_40 + 3)) {
    do {
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 3));
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    FUN_1446f4a44(plVar1,0);
  }
  param_1[0x18] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xbc)) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_140cae186(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140b2eee2(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140cae1c3(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1404db954(param_1);
  return;
}



// FUNCTION 140cae155 FUN_140cae155 body=49 status=ok
// SIG undefined FUN_140cae155(void)

void FUN_140cae155(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cae186 FUN_140cae186 body=61 status=ok
// SIG undefined FUN_140cae186(void)

void FUN_140cae186(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
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



// FUNCTION 140cae1c3 FUN_140cae1c3 body=101 status=ok
// SIG undefined FUN_140cae1c3(void)

void FUN_140cae1c3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 200);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-7] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xd] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cae236 FUN_140cae236 body=203 status=ok
// SIG undefined FUN_140cae236(void)

undefined8 * FUN_140cae236(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab70b90;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140cae301(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42e670;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cae301 FUN_140cae301 body=129 status=ok
// SIG undefined FUN_140cae301(void)

void FUN_140cae301(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-10] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cae382 FUN_140cae382 body=231 status=ok
// SIG undefined FUN_140cae382(void)

undefined8 FUN_140cae382(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_2 + 0x110);
    do {
      FUN_140cae46a(puVar6 + -0x22,param_3);
      puVar6[-0x18] = param_3[10];
      FUN_140cae504(puVar6 + -0x17,param_3 + 0xb);
      FUN_140cae59e(puVar6 + -0xd,param_3 + 0x15);
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xfc);
      uVar4 = *(undefined4 *)(param_3 + 0x20);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x104);
      *(undefined4 *)(puVar6 + -3) = *(undefined4 *)(param_3 + 0x1f);
      *(undefined4 *)((longlong)puVar6 + -0x14) = uVar3;
      *(undefined4 *)(puVar6 + -2) = uVar4;
      *(undefined4 *)((longlong)puVar6 + -0xc) = uVar5;
      *(undefined8 *)((longlong)puVar6 + -0xb) = *(undefined8 *)((longlong)param_3 + 0x105);
      if (puVar6 + -0x22 != param_3) {
        FUN_1409deebc(*puVar6,*(undefined4 *)(puVar6 + 1));
        iVar1 = *(int *)(param_3 + 0x23);
        uVar2 = param_3[0x22];
        *(int *)(puVar6 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar6 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          FUN_1486202a4(puVar6,iVar1);
          FUN_148620313(*puVar6,uVar2,iVar1);
        }
      }
      puVar6 = puVar6 + 0x24;
      param_3 = param_3 + 0x24;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140cae46a FUN_140cae46a body=154 status=ok
// SIG undefined FUN_140cae46a(void)

longlong FUN_140cae46a(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_140cae496;
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
LAB_140cae496:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140ab2276(param_1,param_2);
  return param_1;
}



// FUNCTION 140cae504 FUN_140cae504 body=154 status=ok
// SIG undefined FUN_140cae504(void)

longlong FUN_140cae504(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_140cae530;
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
LAB_140cae530:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140cae638(param_1,param_2);
  return param_1;
}



// FUNCTION 140cae59e FUN_140cae59e body=154 status=ok
// SIG undefined FUN_140cae59e(void)

longlong FUN_140cae59e(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_140cae5ca;
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
LAB_140cae5ca:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140cae7aa(param_1,param_2);
  return param_1;
}



// FUNCTION 140cae638 FUN_140cae638 body=369 status=ok
// SIG undefined FUN_140cae638(void)

longlong * FUN_140cae638(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1409df064(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_146efee60(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar7 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar7;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar9 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        uVar5 = *(uint *)((longlong)plVar6 + (uVar8 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
        if ((uVar5 >> ((uint)uVar8 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar4 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
        }
        else {
          FUN_146efeef8(lVar4 + 8 + lVar9,lVar3 + 8 + lVar9);
          *(undefined8 *)(lVar4 + 0xc0 + lVar9) = *(undefined8 *)(lVar3 + 0xc0 + lVar9);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 200;
      } while (uVar1 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 140cae7aa FUN_140cae7aa body=446 status=ok
// SIG undefined FUN_140cae7aa(void)

longlong * FUN_140cae7aa(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_1409df1e6(param_1,(ulonglong)uVar2);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar8 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar8 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar8;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar3 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar3;
    if (iVar3 != 0) {
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar7,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar2) {
      lVar5 = *param_1;
      lVar4 = *param_2;
      lVar10 = 0;
      uVar9 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        uVar6 = *(uint *)((longlong)plVar7 + (uVar9 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar5 + lVar10) = *(undefined4 *)(lVar4 + lVar10);
        if ((uVar6 >> ((uint)uVar9 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar5 + 4 + lVar10) = *(undefined4 *)(lVar4 + 4 + lVar10);
        }
        else {
          *(undefined8 *)(lVar5 + 0x28 + lVar10) = 0;
          *(undefined4 *)(lVar5 + 0x30 + lVar10) = 0;
          puVar1 = (undefined8 *)(lVar5 + 8 + lVar10);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar5 + 0x34 + lVar10) = 0xffffffff00000080;
          *(undefined4 *)(lVar5 + 0x3c + lVar10) = 0;
          *(undefined8 *)(lVar5 + 0x48 + lVar10) = 0;
          *(undefined4 *)(lVar5 + 0x50 + lVar10) = 0;
          FUN_140cae968(lVar5 + 8 + lVar10,lVar4 + 8 + lVar10);
          *(undefined8 *)(lVar5 + 0x58 + lVar10) = *(undefined8 *)(lVar4 + 0x58 + lVar10);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x60;
      } while (uVar2 != uVar9);
    }
  }
  return param_1;
}



// FUNCTION 140cae968 FUN_140cae968 body=154 status=ok
// SIG undefined FUN_140cae968(void)

longlong FUN_140cae968(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_140cae994;
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
LAB_140cae994:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140caea02(param_1,param_2);
  return param_1;
}



// FUNCTION 140caea02 FUN_140caea02 body=369 status=ok
// SIG undefined FUN_140caea02(void)

longlong * FUN_140caea02(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14044204a(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14041fbf2(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar7 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar7;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar9 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        uVar5 = *(uint *)((longlong)plVar6 + (uVar8 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
        if ((uVar5 >> ((uint)uVar8 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar4 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
        }
        else {
          FUN_146efcfc8(lVar4 + 8 + lVar9,lVar3 + 8 + lVar9);
          *(undefined8 *)(lVar4 + 0xd8 + lVar9) = *(undefined8 *)(lVar3 + 0xd8 + lVar9);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0xe0;
      } while (uVar1 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 140caeb7a FUN_140caeb7a body=57 status=ok
// SIG undefined FUN_140caeb7a(void)

void FUN_140caeb7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0ee0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0ee0 = FUN_140002ddd(FUN_1465ad6d9,uVar1,L"OakBrainTask_FFYLTaunt");
  }
  return;
}



// FUNCTION 140caebba FUN_140caebba body=57 status=ok
// SIG undefined FUN_140caebba(void)

void FUN_140caebba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0190 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0190 = FUN_140002ddd(FUN_146615cd1,uVar1,L"SoloTravelStationObjectBodySettings");
  }
  return;
}



// FUNCTION 140caebf4 FUN_140caebf4 body=53 status=ok
// SIG undefined FUN_140caebf4(void)

void FUN_140caebf4(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_140caec29(param_2,param_3);
      param_3 = param_3 + 8;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 140caec29 FUN_140caec29 body=456 status=ok
// SIG undefined FUN_140caec29(void)

void FUN_140caec29(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_798 [32];
  undefined8 local_778;
  undefined8 local_770;
  undefined *local_768;
  code *local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_798;
  if (DAT_14cab4af0 == 0) {
    uVar2 = FUN_140d2a6db();
    DAT_14cab4af0 = FUN_140002ddd(FUN_146346845,uVar2,L"MovieSceneSkeletalAnimationComponentData");
  }
  lVar1 = DAT_14cab4af0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952478) {
    FUN_144b3d300(&DAT_14c952478);
    if (DAT_14c952478 == -1) {
      FUN_1446f4b16();
      local_760 = FUN_1403a5f94;
      local_768 = &DAT_14c951c78;
      local_770 = 0;
      local_778 = 0x4018001;
      FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
      atexit(FUN_1428170e8);
      _Init_thread_footer(&DAT_14c952478);
    }
  }
  local_770 = CONCAT44(local_770._4_4_,2);
  local_778 = CONCAT71(local_778._1_7_,1);
  FUN_140021b28(local_750,&DAT_14c952428,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_798) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140caedf2 FUN_140caedf2 body=2538 status=ok
// SIG undefined FUN_140caedf2(void)

/* WARNING: Removing unreachable block (ram,0x000140caf69b) */

void FUN_140caedf2(longlong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStack_1d8 [46];
  char local_1aa;
  char local_1a9;
  longlong local_1a8;
  ulonglong *local_1a0;
  ulonglong *local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 local_178;
  ulonglong *local_170;
  ulonglong *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  byte local_148;
  ulonglong *local_140;
  undefined1 local_138 [192];
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(char *)(param_1 + 0x720) == '\x01') {
    *(undefined1 *)(param_1 + 0x720) = 0;
    lVar17 = *(longlong *)(param_1 + 0x700);
    if (*(longlong *)(param_1 + 0x700) == 0) {
      lVar17 = param_1;
    }
    lVar15 = (longlong)(*(int *)(param_1 + 0x708) + -1) * 0xe0;
    iVar14 = *(int *)(lVar17 + 0xd0 + lVar15);
    iVar18 = *(int *)(lVar17 + 0xdc + lVar15);
    iVar11 = iVar18;
    if (iVar18 < iVar14) {
      lVar17 = lVar17 + lVar15;
      iVar1 = *(int *)(lVar17 + 0xd8);
      *(int *)(lVar17 + 0xd8) = iVar18;
      iVar11 = iVar18 + 1;
      *(int *)(lVar17 + 0xdc) = iVar11;
      lVar15 = lVar17 + 8;
      if (*(longlong *)(lVar17 + 200) != 0) {
        lVar15 = *(longlong *)(lVar17 + 200);
      }
      if ((iVar1 != iVar18) &&
         (bVar10 = *(byte *)(lVar15 + 0x10 + (longlong)iVar18 * 0x18), (bVar10 & 1) != 0)) {
        if (7 < bVar10) {
          *(int *)(lVar17 + 0xdc) = iVar18;
        }
        goto LAB_140caef39;
      }
    }
    if (iVar11 == iVar14) {
      lVar17 = *(longlong *)(param_1 + 0x700);
      if (*(longlong *)(param_1 + 0x700) == 0) {
        lVar17 = param_1;
      }
      lVar16 = (longlong)*(int *)(param_1 + 0x708) * 0xe0;
      lVar15 = *(longlong *)(lVar17 + -0x18 + lVar16);
      *(undefined8 *)(lVar17 + -0x18 + lVar16) = 0;
      *(undefined8 *)(lVar17 + -0x10 + lVar16) = 0x800000000;
      FUN_140caf7de(param_1,*(int *)(param_1 + 0x708) + -1);
      FUN_140caf85a(param_1);
      if (lVar15 != 0) {
        FUN_1400020a8(lVar15);
      }
    }
    if (*(int *)(param_1 + 0x708) < 1) goto LAB_140caef39;
  }
  cVar8 = *(char *)(param_1 + 0x718);
LAB_140caee47:
  do {
    lVar17 = *(longlong *)(param_1 + 0x700);
    if (*(longlong *)(param_1 + 0x700) == 0) {
      lVar17 = param_1;
    }
    lVar15 = (longlong)(*(int *)(param_1 + 0x708) + -1) * 0xe0;
    iVar11 = *(int *)(lVar17 + 0xd0 + lVar15);
    iVar14 = *(int *)(lVar17 + 0xdc + lVar15);
    if (iVar14 < iVar11) {
      lVar17 = lVar17 + lVar15;
      lVar16 = (longlong)iVar14;
      iVar18 = *(int *)(lVar17 + 0xd8);
      *(int *)(lVar17 + 0xd8) = iVar14;
      *(int *)(lVar17 + 0xdc) = iVar14 + 1;
      lVar15 = lVar17 + 8;
      if (*(longlong *)(lVar17 + 200) != 0) {
        lVar15 = *(longlong *)(lVar17 + 200);
      }
      bVar10 = *(byte *)(lVar15 + 0x10 + lVar16 * 0x18);
      lVar21 = *(longlong *)(lVar15 + lVar16 * 0x18);
      puVar2 = *(ulonglong **)(lVar15 + 8 + lVar16 * 0x18);
      if ((iVar18 != iVar14) && ((bVar10 & 1) != 0)) {
        if (7 < bVar10) {
          *(int *)(lVar17 + 0xdc) = iVar14;
        }
        break;
      }
      iVar14 = iVar14 + 1;
      if (cVar8 == '\x01') {
        local_78 = (undefined1 *)0x0;
        local_70 = 0x800000000;
        uStack_68 = 0xffffffff;
        local_1a9 = cVar8;
        local_140 = puVar2;
        if ((bVar10 & 8) == 0) {
          if ((bVar10 & 0x10) == 0) {
            if ((bVar10 & 0x20) == 0) {
              if ((bVar10 & 0x40) == 0) {
                if ((char)bVar10 < '\0') {
                  FUN_1446fbe64(param_1,*(undefined8 *)(lVar21 + 0x70),&local_140);
                }
              }
              else {
                uVar4 = *(undefined8 *)(lVar21 + 0x70);
                cVar8 = FUN_145792a70(param_1,uVar4);
                if (cVar8 != '\0') {
                  local_188 = &local_178;
                  local_168 = *(ulonglong **)(lVar21 + 0x78);
                  iStack_160 = *(int *)(lVar21 + 0x80);
                  uStack_15c = *(undefined4 *)(lVar21 + 0x84);
                  local_158 = *(int *)(lVar21 + 0x88);
                  local_180 = 0xffffffffffffffff;
                  local_178 = uVar4;
                  local_170 = puVar2;
                  FUN_14000a0a0(&local_188);
                  if (-1 < (int)(uint)local_180) {
                    do {
                      uVar19 = local_70;
                      lVar15 = local_188[1];
                      if (*(int *)(lVar15 + 0x28) <= (int)(uint)local_180) break;
                      lVar16 = lVar15 + 0x10;
                      if (*(longlong *)(lVar15 + 0x20) != 0) {
                        lVar16 = *(longlong *)(lVar15 + 0x20);
                      }
                      if ((*(uint *)(lVar16 + (ulonglong)((uint)local_180 >> 5) * 4) >>
                           ((uint)local_180 & 0x1f) & 1) == 0) break;
                      lVar15 = (longlong)local_158;
                      lVar16 = (longlong)(int)(uint)local_180;
                      uVar5 = *local_170;
                      lVar21 = (longlong)(int)local_70;
                      uVar12 = (int)local_70 + 1;
                      local_70 = CONCAT44(local_70._4_4_,uVar12);
                      if (local_70._4_4_ < uVar12) {
                        FUN_1456afae6(local_138,uVar19 & 0xffffffff);
                      }
                      puVar13 = local_78;
                      if (local_78 == (undefined1 *)0x0) {
                        puVar13 = local_138;
                      }
                      *(undefined8 *)(puVar13 + lVar21 * 0x18) = uVar4;
                      *(ulonglong *)(puVar13 + lVar21 * 0x18 + 8) = lVar16 * lVar15 + uVar5;
                      puVar13[lVar21 * 0x18 + 0x10] = cVar8;
                      FUN_14000a0a0(&local_188);
                    } while (-1 < (int)(uint)local_180);
                  }
                }
              }
            }
            else {
              uVar4 = *(undefined8 *)(lVar21 + 0x70);
              puVar6 = *(ulonglong **)(lVar21 + 0x78);
              cVar8 = FUN_145792a70(param_1,uVar4);
              cVar9 = FUN_145792a70(param_1,puVar6);
              local_1a8 = CONCAT71(local_1a8._1_7_,cVar9);
              local_1aa = cVar8;
              if (cVar9 != '\0' || cVar8 != '\0') {
                local_148 = *(byte *)(lVar21 + 0x98);
                iStack_160 = *(int *)(lVar21 + 0x80);
                uStack_15c = *(undefined4 *)(lVar21 + 0x84);
                local_158 = *(int *)(lVar21 + 0x88);
                uStack_154 = *(undefined4 *)(lVar21 + 0x8c);
                local_150 = *(undefined8 *)(lVar21 + 0x90);
                iVar11 = (int)puVar2[1];
                iVar18 = 0;
                local_198 = puVar6;
                local_190 = uVar4;
                local_178 = uVar4;
                local_170 = puVar6;
                local_168 = puVar2;
                iVar14 = iVar18;
                if (0 < iVar11) {
                  do {
                    local_188 = (undefined8 *)CONCAT44(local_188._4_4_,iVar18);
                    cVar8 = FUN_1446ec082(&local_178,&local_188);
                    iVar14 = iVar18;
                    if (cVar8 != '\0') break;
                    iVar18 = iVar18 + 1;
                    iVar14 = iVar11;
                  } while (iVar11 != iVar18);
                }
LAB_140caf4ab:
                local_188 = (undefined8 *)CONCAT44(local_188._4_4_,iVar14);
                cVar8 = FUN_1446ec082(&local_178);
                uVar19 = local_70;
                if (cVar8 != '\0') {
                  if (local_1aa != '\0') {
                    if ((local_148 & 1) == 0) {
                      uVar22 = *local_168;
                    }
                    else {
                      uVar5 = *local_168;
                      uVar22 = ((longlong)uVar5 >> 0x18) + (longlong)local_168;
                      if ((uVar5 & 1) == 0) {
                        uVar22 = uVar5;
                      }
                    }
                    lVar15 = (longlong)local_150._4_4_;
                    lVar16 = (longlong)(int)local_70;
                    uVar12 = (int)local_70 + 1;
                    local_70 = CONCAT44(local_70._4_4_,uVar12);
                    if (local_70._4_4_ < uVar12) {
                      FUN_1456afae6(local_138,uVar19 & 0xffffffff);
                    }
                    puVar13 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar13 = local_138;
                    }
                    *(undefined8 *)(puVar13 + lVar16 * 0x18) = local_190;
                    *(ulonglong *)(puVar13 + lVar16 * 0x18 + 8) = uVar22 + lVar15 * iVar14;
                    puVar13[lVar16 * 0x18 + 0x10] = local_1aa;
                  }
                  uVar19 = local_70;
                  if ((char)local_1a8 != '\0') {
                    if ((local_148 & 1) == 0) {
                      uVar22 = *local_168;
                    }
                    else {
                      uVar5 = *local_168;
                      uVar22 = ((longlong)uVar5 >> 0x18) + (longlong)local_168;
                      if ((uVar5 & 1) == 0) {
                        uVar22 = uVar5;
                      }
                    }
                    lVar16 = (longlong)local_150._4_4_;
                    lVar15 = (longlong)iStack_160;
                    lVar21 = (longlong)(int)local_70;
                    uVar12 = (int)local_70 + 1;
                    local_70 = CONCAT44(local_70._4_4_,uVar12);
                    if (local_70._4_4_ < uVar12) {
                      FUN_1456afae6(local_138,uVar19 & 0xffffffff);
                    }
                    puVar13 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar13 = local_138;
                    }
                    *(ulonglong **)(puVar13 + lVar21 * 0x18) = local_198;
                    *(ulonglong *)(puVar13 + lVar21 * 0x18 + 8) = uVar22 + lVar16 * iVar14 + lVar15;
                    puVar13[lVar21 * 0x18 + 0x10] = (char)local_1a8;
                  }
                  uVar19 = local_168[1];
                  do {
                    iVar14 = iVar14 + 1;
                    if ((int)uVar19 <= iVar14) break;
                    local_188 = (undefined8 *)CONCAT44(local_188._4_4_,iVar14);
                    cVar8 = FUN_1446ec082(&local_178,&local_188);
                  } while (cVar8 == '\0');
                  goto LAB_140caf4ab;
                }
              }
            }
          }
          else {
            plVar3 = *(longlong **)(lVar21 + 0x78);
            local_1aa = FUN_145792a70(param_1,plVar3);
            if (local_1aa != '\0') {
              bVar10 = *(byte *)(lVar21 + 0x70);
              (**(code **)(*plVar3 + 0x178))(plVar3);
              uVar12 = (uint)puVar2[1];
              uVar19 = (ulonglong)uVar12;
              if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(uVar19);
              }
              lVar15 = (longlong)*(int *)(*(longlong *)(lVar21 + 0x78) + 0x34);
              if ((int)local_70._4_4_ < (int)uVar12) {
                FUN_14002265e(local_138,uVar12);
              }
              if (uVar19 != 0) {
                lVar16 = 0;
                local_1a0 = puVar2;
                do {
                  uVar5 = local_70;
                  if ((int)local_1a0[1] == 0) {
                    lVar21 = 0;
                  }
                  else {
                    if ((bVar10 & 1) == 0) {
                      uVar22 = *local_1a0;
                    }
                    else {
                      uVar22 = *local_1a0;
                      if ((uVar22 & 1) != 0) {
                        uVar22 = ((longlong)uVar22 >> 0x18) + (longlong)local_1a0;
                      }
                    }
                    lVar21 = uVar22 + lVar16;
                  }
                  lVar20 = (longlong)(int)local_70;
                  uVar12 = (int)local_70 + 1;
                  local_70 = CONCAT44(local_70._4_4_,uVar12);
                  if (local_70._4_4_ < uVar12) {
                    local_1a8 = lVar15;
                    FUN_1456afae6(local_138,uVar5 & 0xffffffff);
                    lVar15 = local_1a8;
                  }
                  puVar13 = local_78;
                  if (local_78 == (undefined1 *)0x0) {
                    puVar13 = local_138;
                  }
                  *(longlong **)(puVar13 + lVar20 * 0x18) = plVar3;
                  *(longlong *)(puVar13 + lVar20 * 0x18 + 8) = lVar21;
                  puVar13[lVar20 * 0x18 + 0x10] = local_1aa;
                  lVar16 = lVar16 + lVar15;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
            }
          }
        }
        else {
          plVar3 = *(longlong **)(lVar21 + 0x70);
          cVar8 = FUN_145792a70(param_1,plVar3);
          if (cVar8 != '\0') {
            cVar9 = (**(code **)(*plVar3 + 0x1b8))(plVar3);
            plVar7 = *(longlong **)(lVar21 + 0x70);
            if (cVar9 == '\0') {
              bVar10 = (byte)*(ulonglong *)
                              ((longlong)puVar2 +
                              (longlong)*(int *)((longlong)plVar7 + 0x34) * (longlong)(int)plVar7[6]
                              );
            }
            else {
              bVar10 = (**(code **)(*plVar7 + 0x1c8))(plVar7,puVar2);
            }
            uVar19 = local_70;
            if ((puVar2 != (ulonglong *)0x0 & bVar10) == 1) {
              lVar15 = (longlong)(int)local_70;
              uVar12 = (int)local_70 + 1;
              local_70 = CONCAT44(local_70._4_4_,uVar12);
              if (local_70._4_4_ < uVar12) {
                FUN_1456afae6(local_138,uVar19 & 0xffffffff);
              }
              puVar13 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar13 = local_138;
              }
              *(longlong **)(puVar13 + lVar15 * 0x18) = plVar3;
              *(ulonglong **)(puVar13 + lVar15 * 0x18 + 8) = puVar2;
              puVar13[lVar15 * 0x18 + 0x10] = cVar8;
            }
          }
        }
        if (0 < (int)local_70) {
          iVar11 = *(int *)(param_1 + 0x708);
          *(uint *)(param_1 + 0x708) = iVar11 + 1U;
          if (*(uint *)(param_1 + 0x70c) < iVar11 + 1U) {
            FUN_1469002a6(param_1,iVar11);
          }
          lVar17 = *(longlong *)(param_1 + 0x700);
          if (*(longlong *)(param_1 + 0x700) == 0) {
            lVar17 = param_1;
          }
          lVar16 = (longlong)iVar11 * 0xe0;
          lVar15 = lVar17 + lVar16;
          *(ulonglong **)(lVar17 + lVar16) = local_140;
          *(undefined8 *)(lVar17 + 200 + lVar16) = 0;
          if (local_78 == (undefined1 *)0x0) {
            memmove((void *)(lVar15 + 8),local_138,0xc0);
          }
          *(undefined1 **)(lVar15 + 200) = local_78;
          local_78 = (undefined1 *)0x0;
          *(int *)(lVar15 + 0xd0) = (int)local_70;
          *(uint *)(lVar15 + 0xd4) = local_70._4_4_;
          local_70 = 0x800000000;
          *(undefined8 *)(lVar15 + 0xd8) = uStack_68;
          cVar8 = local_1a9;
          goto LAB_140caee47;
        }
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        iVar11 = *(int *)(lVar17 + 0xd0);
        iVar14 = *(int *)(lVar17 + 0xdc);
        cVar8 = local_1a9;
      }
    }
    if (iVar14 == iVar11) {
      lVar17 = *(longlong *)(param_1 + 0x700);
      if (*(longlong *)(param_1 + 0x700) == 0) {
        lVar17 = param_1;
      }
      lVar16 = (longlong)*(int *)(param_1 + 0x708) * 0xe0;
      lVar15 = *(longlong *)(lVar17 + -0x18 + lVar16);
      *(undefined8 *)(lVar17 + -0x18 + lVar16) = 0;
      *(undefined8 *)(lVar17 + -0x10 + lVar16) = 0x800000000;
      FUN_140caf7de(param_1,*(int *)(param_1 + 0x708) + -1);
      FUN_140caf85a(param_1);
      if (lVar15 != 0) {
        FUN_1400020a8(lVar15);
      }
    }
  } while (0 < *(int *)(param_1 + 0x708));
LAB_140caef39:
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140caf7de FUN_140caf7de body=124 status=ok
// SIG undefined FUN_140caf7de(void)

void FUN_140caf7de(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x700);
  if (*(longlong *)(param_1 + 0x700) == 0) {
    lVar2 = param_1;
  }
  if (*(longlong *)(lVar2 + 200 + (longlong)(int)param_2 * 0xe0) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x708);
  if (~param_2 + iVar1 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0xe0);
    memmove(_Dst,(void *)((longlong)_Dst + 0xe0),(longlong)(int)(~param_2 + iVar1) * 0xe0);
    iVar1 = *(int *)(param_1 + 0x708);
  }
  *(int *)(param_1 + 0x708) = iVar1 + -1;
  return;
}



// FUNCTION 140caf85a FUN_140caf85a body=175 status=ok
// SIG undefined FUN_140caf85a(void)

void FUN_140caf85a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x708);
  uVar1 = *(uint *)(param_1 + 0x70c);
  if ((ulonglong)uVar4 < 9) {
    uVar4 = 8;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if ((ulonglong)((longlong)iVar3 * 0xe0) < 0x4000) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 * 0xe0,0);
      uVar4 = (uint)(uVar2 / 0xe0);
      uVar1 = *(uint *)(param_1 + 0x70c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x70c) = uVar4;
  FUN_1468ff658(param_1,*(undefined4 *)(param_1 + 0x708));
  return;
}



// FUNCTION 140caf910 FUN_140caf910 body=2939 status=ok
// SIG undefined FUN_140caf910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140caf910(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 auStack_e0 [4];
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90 [3];
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  undefined1 local_48 [8];
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_48;
  *(char *)(param_1 + 0x481) = *(char *)(param_1 + 0x480);
  lVar11 = *(longlong *)(param_1 + 0x3a8);
  pplVar7 = &local_b8;
  if (((lVar11 == 0) || (pplVar7 = &local_b8, *(longlong *)(param_1 + 0x3f0) == 0)) ||
     (pplVar7 = &local_b8, *(char *)(param_1 + 0x480) == '\0' || *(longlong *)(param_1 + 0x3f8) == 0
     )) goto LAB_140caf976;
  plVar5 = (longlong *)(lVar11 + 0x208);
  iVar6 = *(int *)(lVar11 + 0x250);
  if (iVar6 < 2) {
    lVar9 = lVar11 + 0x240;
    if (*(longlong *)(lVar11 + 0x248) != 0) {
      lVar9 = *(longlong *)(lVar11 + 0x248);
    }
    iVar3 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar3 = iVar6;
    }
    if (*(int *)(lVar11 + 0x210) - *(int *)(lVar11 + 0x23c) < iVar3 >> 2) {
      lVar10 = lVar11 + 0x218;
      local_90[0] = 0x100000000;
      local_90[2] = 0xffffffff;
      uStack_78 = 0;
      local_90[1] = lVar10;
      if (*(int *)(lVar11 + 0x230) == 0) {
        iVar6 = 0;
      }
      else {
        auStack_e0[0] = 0x140cb0200;
        FUN_1449c0562(local_90);
        iVar6 = *(int *)(lVar11 + 0x230);
      }
      uStack_b0 = local_90[0];
      local_a8 = local_90[1];
      uStack_98 = CONCAT44(uStack_74,uStack_78);
      local_a0 = local_90[2];
      uVar2 = local_a0;
      local_a0._4_4_ = (int)((ulonglong)local_90[2] >> 0x20);
      iVar3 = local_a0._4_4_;
      local_b8 = plVar5;
      if ((local_a0._4_4_ != iVar6) || (local_a0 = local_90[2], local_90[1] != lVar10)) {
        do {
          local_a0 = uVar2;
          *(undefined4 *)
           (lVar9 + (longlong)*(int *)(*local_b8 + 0x534 + (longlong)iVar3 * 0x538) * 4) =
               0xffffffff;
          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
          auStack_e0[0] = 0x140cb026e;
          FUN_1449c0562(&uStack_b0);
          iVar3 = local_a0._4_4_;
          uVar2 = local_a0;
        } while (local_b8 != plVar5 || (local_a8 != lVar10 || local_a0._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lVar9 + lVar10 * 4) = 0xffffffff;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(lVar11 + 0x250));
    }
    auStack_e0[0] = 0x140cafa14;
    FUN_140cb0490(plVar5);
  }
  else {
    auStack_e0[0] = 0x140cafee3;
    FUN_140cb0490(plVar5);
    *(undefined4 *)(lVar11 + 0x250) = 1;
    auStack_e0[0] = 0x140cafefe;
    FUN_14044c6bc(plVar5);
  }
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  if (*(int *)(param_1 + 0x5cc) != 0) {
    auStack_e0[0] = 0x140caff15;
    FUN_145792b10(param_1 + 0x5c0);
  }
  pplVar7 = &local_b8;
  if (*(char *)(param_1 + 0x480) == '\x01') {
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    lVar11 = *(longlong *)(param_1 + 0x3f8);
    iVar6 = *(int *)(lVar11 + 0x20);
    if ((longlong)iVar6 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x18);
      lVar9 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar11 + lVar9);
        auStack_e0[0] = 0x140cafa75;
        FUN_144912200(uVar2,0);
        auStack_e0[0] = 0x140cafa7d;
        FUN_14499301a(uVar2);
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar6 * 8 != lVar9);
      lVar11 = *(longlong *)(param_1 + 0x3f8);
    }
    auStack_e0[0] = 0x140cafa9e;
    FUN_140cb050c(lVar11,&local_b8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x20);
    if (lVar11 != 0) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x3f0) + 0x18);
      lVar10 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar9 + lVar10);
        auStack_e0[0] = 0x140cafacf;
        FUN_144912200(uVar2,0);
        auStack_e0[0] = 0x140cafad7;
        FUN_14499301a(uVar2);
        lVar10 = lVar10 + 8;
      } while (lVar11 * 8 != lVar10);
    }
    local_90[0]._0_2_ = (ushort)(byte)local_90[0];
    auStack_e0[0] = 0x140cafb01;
    FUN_140cb0938();
    pplVar7 = &local_b8;
    if (*(char *)(param_2 + 0x171) == '\x01') {
      lVar11 = *(longlong *)(param_1 + 0x3f8);
      iVar6 = *(int *)(lVar11 + 0x10);
      if (iVar6 < 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = **(longlong **)(lVar11 + 8);
      }
      if (((*(byte *)(lVar9 + 0x20) & 1) != 0) ||
         (((iVar3 = 6, ABS(*(double *)(lVar9 + 0x60)) <= 9.99999993922529e-09 &&
           (ABS(*(double *)(lVar9 + 0x68)) <= 9.99999993922529e-09)) &&
          ((ABS(*(double *)(lVar9 + 0x70)) <= 9.99999993922529e-09 &&
           (((ABS(*(double *)(lVar9 + 0x48)) <= 9.99999993922529e-09 &&
             (ABS(*(double *)(lVar9 + 0x50)) <= 9.99999993922529e-09)) &&
            (ABS(*(double *)(lVar9 + 0x58)) <= 9.99999993922529e-09)))))))) {
        iVar3 = 0;
      }
      plVar5 = *(longlong **)(lVar11 + 0x28);
      iVar1 = *(int *)(lVar11 + 0x30);
      lVar9 = (longlong)iVar1;
      if (lVar9 != 0) {
        lVar10 = 0;
        do {
          iVar3 = iVar3 + *(int *)(*(longlong *)((longlong)plVar5 + lVar10) + 0x8b8) +
                  *(int *)(*(longlong *)((longlong)plVar5 + lVar10) + 0xff0);
          lVar10 = lVar10 + 8;
        } while (lVar9 * 8 - lVar10 != 0);
      }
      pplVar7 = &local_b8;
      if (iVar3 != 0) {
        if (iVar6 < 1) {
          lVar10 = 0;
        }
        else {
          lVar10 = **(longlong **)(lVar11 + 8);
        }
        if (((*(byte *)(lVar10 + 0x20) & 1) != 0) ||
           ((((iVar3 = 6, ABS(*(double *)(lVar10 + 0x60)) <= 9.99999993922529e-09 &&
              (ABS(*(double *)(lVar10 + 0x68)) <= 9.99999993922529e-09)) &&
             ((ABS(*(double *)(lVar10 + 0x70)) <= 9.99999993922529e-09 &&
              ((ABS(*(double *)(lVar10 + 0x48)) <= 9.99999993922529e-09 &&
               (ABS(*(double *)(lVar10 + 0x50)) <= 9.99999993922529e-09)))))) &&
            (ABS(*(double *)(lVar10 + 0x58)) <= 9.99999993922529e-09)))) {
          iVar3 = 0;
        }
        if (iVar1 != 0) {
          lVar10 = 0;
          do {
            iVar3 = iVar3 + *(int *)(*(longlong *)((longlong)plVar5 + lVar10) + 0x8b8) +
                    *(int *)(*(longlong *)((longlong)plVar5 + lVar10) + 0xff0);
            lVar10 = lVar10 + 8;
          } while (lVar9 * 8 - lVar10 != 0);
        }
        uStack_c0 = 0x140cafc0f;
        lVar10 = -((longlong)iVar3 * 8 + 0x1eU & 0xfffffffffffffff0);
        iVar4 = 0;
        iVar3 = 0;
        if ((((0 < iVar6) && (lVar11 = **(longlong **)(lVar11 + 8), iVar3 = iVar4, lVar11 != 0)) &&
            ((*(byte *)(lVar11 + 0x20) & 1) == 0)) &&
           ((((9.99999993922529e-09 < ABS(*(double *)(lVar11 + 0x60)) ||
              (9.99999993922529e-09 < ABS(*(double *)(lVar11 + 0x68)))) ||
             ((9.99999993922529e-09 < ABS(*(double *)(lVar11 + 0x70)) ||
              ((9.99999993922529e-09 < ABS(*(double *)(lVar11 + 0x48)) ||
               (9.99999993922529e-09 < ABS(*(double *)(lVar11 + 0x50)))))))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar11 + 0x58)))))) {
          *(undefined8 *)((longlong)&local_b8 + lVar10) = *(undefined8 *)(lVar11 + 0x378);
          *(undefined8 *)((longlong)&uStack_b0 + lVar10) = *(undefined8 *)(lVar11 + 0x380);
          *(undefined8 *)((longlong)&local_a8 + lVar10) = *(undefined8 *)(lVar11 + 0x388);
          *(undefined8 *)((longlong)&local_a0 + lVar10) = *(undefined8 *)(lVar11 + 0x390);
          *(undefined8 *)((longlong)&uStack_98 + lVar10) = *(undefined8 *)(lVar11 + 0x398);
          *(undefined8 *)((longlong)local_90 + lVar10) = *(undefined8 *)(lVar11 + 0x3a0);
          iVar3 = 6;
        }
        if (iVar1 != 0) {
          plVar12 = plVar5 + lVar9;
          do {
            lVar11 = *plVar5;
            lVar9 = 0;
            do {
              if (((*(int *)(lVar11 + 0xf30 + lVar9 * 4) != 2) ||
                  (lVar8 = *(longlong *)(lVar11 + 0x20), (*(byte *)(lVar8 + 0x20) & 1) != 0)) ||
                 ((ABS(*(double *)(lVar8 + 0x60)) <= 9.99999993922529e-09 &&
                  ((((ABS(*(double *)(lVar8 + 0x68)) <= 9.99999993922529e-09 &&
                     (ABS(*(double *)(lVar8 + 0x70)) <= 9.99999993922529e-09)) &&
                    (ABS(*(double *)(lVar8 + 0x48)) <= 9.99999993922529e-09)) &&
                   ((ABS(*(double *)(lVar8 + 0x50)) <= 9.99999993922529e-09 &&
                    (ABS(*(double *)(lVar8 + 0x58)) <= 9.99999993922529e-09)))))))) {
                lVar8 = (longlong)iVar3;
                iVar3 = iVar3 + 1;
                *(undefined8 *)((longlong)&local_b8 + lVar8 * 8 + lVar10) =
                     *(undefined8 *)(lVar11 + 0x6a8 + lVar9 * 8);
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 != 6);
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar12);
        }
        lVar11 = *(longlong *)(param_1 + 0x3f0);
        iVar3 = 0;
        iVar6 = 0;
        if ((((0 < *(int *)(lVar11 + 0x10)) &&
             (lVar9 = **(longlong **)(lVar11 + 8), iVar6 = iVar3, lVar9 != 0)) &&
            ((*(byte *)(lVar9 + 0x20) & 1) == 0)) &&
           (((((9.99999993922529e-09 < ABS(*(double *)(lVar9 + 0x60)) ||
               (9.99999993922529e-09 < ABS(*(double *)(lVar9 + 0x68)))) ||
              (9.99999993922529e-09 < ABS(*(double *)(lVar9 + 0x70)))) ||
             ((9.99999993922529e-09 < ABS(*(double *)(lVar9 + 0x48)) ||
              (9.99999993922529e-09 < ABS(*(double *)(lVar9 + 0x50)))))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar9 + 0x58)))))) {
          *(undefined8 *)(lVar9 + 0x378) = *(undefined8 *)((longlong)&local_b8 + lVar10);
          *(undefined8 *)(lVar9 + 0x380) = *(undefined8 *)((longlong)&uStack_b0 + lVar10);
          *(undefined8 *)(lVar9 + 0x388) = *(undefined8 *)((longlong)&local_a8 + lVar10);
          *(undefined8 *)(lVar9 + 0x390) = *(undefined8 *)((longlong)&local_a0 + lVar10);
          *(undefined8 *)(lVar9 + 0x398) = *(undefined8 *)((longlong)&uStack_98 + lVar10);
          *(undefined8 *)(lVar9 + 0x3a0) = *(undefined8 *)((longlong)local_90 + lVar10);
          *(undefined8 *)((longlong)auStack_e0 + lVar10) = 0x140cafdba;
          FUN_14025ae36();
          iVar6 = 6;
        }
        pplVar7 = (longlong **)((longlong)&local_b8 + lVar10);
        if ((longlong)*(int *)(lVar11 + 0x30) != 0) {
          plVar12 = *(longlong **)(lVar11 + 0x28);
          plVar5 = plVar12 + *(int *)(lVar11 + 0x30);
          do {
            lVar11 = *plVar12;
            lVar9 = 0;
            do {
              if (((*(int *)(lVar11 + 0xf30 + lVar9 * 4) != 2) ||
                  (lVar8 = *(longlong *)(lVar11 + 0x20), (*(byte *)(lVar8 + 0x20) & 1) != 0)) ||
                 (((ABS(*(double *)(lVar8 + 0x60)) <= 9.99999993922529e-09 &&
                   (((ABS(*(double *)(lVar8 + 0x68)) <= 9.99999993922529e-09 &&
                     (ABS(*(double *)(lVar8 + 0x70)) <= 9.99999993922529e-09)) &&
                    (ABS(*(double *)(lVar8 + 0x48)) <= 9.99999993922529e-09)))) &&
                  ((ABS(*(double *)(lVar8 + 0x50)) <= 9.99999993922529e-09 &&
                   (ABS(*(double *)(lVar8 + 0x58)) <= 9.99999993922529e-09)))))) {
                lVar8 = (longlong)iVar6;
                iVar6 = iVar6 + 1;
                *(undefined8 *)(lVar11 + 0x6a8 + lVar9 * 8) =
                     *(undefined8 *)((longlong)&local_b8 + lVar8 * 8 + lVar10);
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 != 6);
            *(undefined8 *)((longlong)auStack_e0 + lVar10) = 0x140cafe3a;
            FUN_14025ae36();
            plVar12 = plVar12 + 1;
            pplVar7 = (longlong **)((longlong)&local_b8 + lVar10);
          } while (plVar12 != plVar5);
        }
      }
    }
LAB_140cafe47:
    if (local_b8 != (longlong *)0x0) {
      *(undefined8 *)((longlong)pplVar7 + -0x28) = 0x140cafe59;
      FUN_1400020a8();
    }
  }
  else if (*(char *)(param_1 + 0x480) == '\x02') {
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    lVar11 = *(longlong *)(param_1 + 0x3f8);
    iVar6 = *(int *)(lVar11 + 0x20);
    if ((longlong)iVar6 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x18);
      lVar9 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar11 + lVar9);
        auStack_e0[0] = 0x140cb0052;
        FUN_144912200(uVar2,0);
        auStack_e0[0] = 0x140cb005a;
        FUN_14499301a(uVar2);
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar6 * 8 != lVar9);
      lVar11 = *(longlong *)(param_1 + 0x3f8);
    }
    auStack_e0[0] = 0x140cb007b;
    FUN_140cb050c(lVar11,&local_b8);
    lVar11 = *(longlong *)(param_1 + 0x3f0);
    iVar6 = *(int *)(lVar11 + 0x20);
    if ((longlong)iVar6 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x18);
      lVar9 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar11 + lVar9);
        auStack_e0[0] = 0x140cb00ac;
        FUN_144912200(uVar2,0);
        auStack_e0[0] = 0x140cb00b4;
        FUN_14499301a(uVar2);
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar6 * 8 != lVar9);
      lVar11 = *(longlong *)(param_1 + 0x3f0);
    }
    local_90[0]._0_2_ = (ushort)(byte)local_90[0];
    auStack_e0[0] = 0x140cb00de;
    FUN_140cb0938(lVar11);
    lVar11 = *(longlong *)(param_1 + 0x3f0);
    iVar6 = *(int *)(lVar11 + 0x20);
    if ((longlong)iVar6 != 0) {
      lVar9 = *(longlong *)(lVar11 + 0x18);
      lVar10 = 0;
      do {
        lVar8 = *(longlong *)(lVar9 + lVar10);
        *(undefined8 *)(lVar8 + 0x6c8) = 0;
        *(undefined8 *)(lVar8 + 0x6d0) = 0;
        *(undefined8 *)(lVar8 + 0x6b8) = 0;
        *(undefined8 *)(lVar8 + 0x6c0) = 0;
        *(undefined8 *)(lVar8 + 0x6a8) = 0;
        *(undefined8 *)(lVar8 + 0x6b0) = 0;
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar6 * 8 != lVar10);
    }
    iVar6 = *(int *)(lVar11 + 0x10);
    pplVar7 = &local_b8;
    if ((longlong)iVar6 != 0) {
      lVar11 = *(longlong *)(lVar11 + 8);
      lVar9 = 0;
      do {
        lVar10 = *(longlong *)(lVar11 + lVar9);
        *(undefined8 *)(lVar10 + 0xe8) = DAT_14c8464f0;
        uVar2 = DAT_14c8464e8;
        *(undefined8 *)(lVar10 + 0xd8) = DAT_14c8464e0;
        *(undefined8 *)(lVar10 + 0xe0) = uVar2;
        *(undefined8 *)(lVar10 + 0x100) = DAT_14c8464f0;
        uVar2 = DAT_14c8464e8;
        *(undefined8 *)(lVar10 + 0xf0) = DAT_14c8464e0;
        *(undefined8 *)(lVar10 + 0xf8) = uVar2;
        *(undefined8 *)(lVar10 + 0x378) = 0;
        *(undefined8 *)(lVar10 + 0x380) = 0;
        *(undefined8 *)(lVar10 + 0x388) = 0;
        *(undefined8 *)(lVar10 + 0x390) = 0;
        *(undefined8 *)(lVar10 + 0x398) = 0;
        *(undefined8 *)(lVar10 + 0x3a0) = 0;
        lVar9 = lVar9 + 8;
        pplVar7 = &local_b8;
      } while ((longlong)iVar6 * 8 != lVar9);
    }
    goto LAB_140cafe47;
  }
  lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
  if (lVar11 != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x3f0) + 8);
    lVar10 = 0;
    do {
      lVar8 = *(longlong *)(lVar9 + lVar10);
      *(undefined1 *)(lVar8 + 0x270) = 0;
      *(double *)(lVar8 + 0x268) = *(double *)(lVar8 + 0x278) * 10.0;
      lVar10 = lVar10 + 8;
    } while (lVar11 * 8 != lVar10);
  }
  *(undefined1 *)(param_1 + 0x480) = 0;
LAB_140caf976:
  if ((local_70 ^ (ulonglong)local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)pplVar7 + -0x28) = &UNK_140caf9a8;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cb0490 FUN_140cb0490 body=123 status=ok
// SIG undefined FUN_140cb0490(void)

void FUN_140cb0490(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140cb0ecc(param_1,param_2);
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



// FUNCTION 140cb050c FUN_140cb050c body=121 status=ok
// SIG undefined FUN_140cb050c(void)

void FUN_140cb050c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_140415702();
  if (uVar1 == 0) {
    return;
  }
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(uint *)((longlong)param_2 + 0xc) == uVar1) {
      iVar3 = 0;
      uVar2 = uVar1;
    }
    else {
      FUN_140cb0586(param_2,uVar1);
      iVar3 = *(int *)(param_2 + 1);
      uVar2 = *(uint *)((longlong)param_2 + 0xc);
    }
    *(uint *)(param_2 + 1) = iVar3 + uVar1;
    if (uVar2 - iVar3 < uVar1) {
      FUN_144941252(param_2);
    }
    FUN_140cb06c2(param_1,*param_2,3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 140cb0586 FUN_140cb0586 body=315 status=ok
// SIG undefined FUN_140cb0586(void)

void FUN_140cb0586(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140cb05f0;
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
LAB_140cb05f0:
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



// FUNCTION 140cb06c2 FUN_140cb06c2 body=629 status=ok
// SIG undefined FUN_140cb06c2(void)

ulonglong FUN_140cb06c2(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == (undefined8 *)0x0) {
    uVar6 = 0;
    goto LAB_140cb0803;
  }
  uVar6 = 0;
  if ((0 < *(int *)(param_1 + 0x10)) && (lVar2 = **(longlong **)(param_1 + 8), lVar2 != 0)) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if ((((ABS(*(double *)(lVar2 + 0x60)) <= 9.99999993922529e-09) &&
           (ABS(*(double *)(lVar2 + 0x68)) <= 9.99999993922529e-09)) &&
          (ABS(*(double *)(lVar2 + 0x70)) <= 9.99999993922529e-09)) &&
         ((ABS(*(double *)(lVar2 + 0x48)) <= 9.99999993922529e-09 &&
          (ABS(*(double *)(lVar2 + 0x50)) <= 9.99999993922529e-09)))) {
        bVar4 = ABS(*(double *)(lVar2 + 0x58)) <= 9.99999993922529e-09;
        goto LAB_140cb082a;
      }
    }
    else {
      bVar4 = true;
LAB_140cb082a:
      if (((param_3 & 4) == 0) && (uVar6 = 0, bVar4)) goto LAB_140cb078d;
    }
    FUN_144941734(lVar2,&local_88);
    if ((param_3 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      *param_2 = local_88;
      param_2[1] = uStack_80;
      *(undefined4 *)(param_2 + 2) = local_78;
      *(undefined4 *)((longlong)param_2 + 0x14) = uStack_74;
      *(undefined4 *)(param_2 + 3) = uStack_70;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_6c;
      uVar6 = 4;
    }
    if ((param_3 & 2) != 0) {
      param_2[uVar6] = local_68;
      param_2[uVar6 + 1] = local_60;
      param_2[uVar6 + 2] = local_58;
      uVar6 = (ulonglong)((uint)uVar6 | 3);
    }
  }
LAB_140cb078d:
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x28);
    plVar1 = plVar7 + *(int *)(param_1 + 0x30);
    do {
      lVar2 = *plVar7;
      lVar8 = 0;
      do {
        if (((*(int *)(lVar2 + 0xf30 + lVar8 * 4) != 2) ||
            (lVar3 = *(longlong *)(lVar2 + 0x20), (*(byte *)(lVar3 + 0x20) & 1) != 0)) ||
           ((ABS(*(double *)(lVar3 + 0x60)) <= 9.99999993922529e-09 &&
            ((((ABS(*(double *)(lVar3 + 0x68)) <= 9.99999993922529e-09 &&
               (ABS(*(double *)(lVar3 + 0x70)) <= 9.99999993922529e-09)) &&
              (ABS(*(double *)(lVar3 + 0x48)) <= 9.99999993922529e-09)) &&
             ((ABS(*(double *)(lVar3 + 0x50)) <= 9.99999993922529e-09 &&
              (ABS(*(double *)(lVar3 + 0x58)) <= 9.99999993922529e-09)))))))) {
          iVar5 = (int)uVar6;
          uVar6 = (ulonglong)(iVar5 + 1);
          param_2[iVar5] = *(undefined8 *)(lVar2 + 0x6d8 + lVar8 * 8);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 6);
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
LAB_140cb0803:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140cb0938 FUN_140cb0938 body=1427 status=ok
// SIG undefined FUN_140cb0938(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cb0938(longlong param_1,double *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_168 [32];
  undefined1 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d4;
  char local_d3;
  undefined1 local_d2;
  char local_d1;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 != (double *)0x0) {
    iVar14 = 0;
    iVar15 = 0;
    if ((((0 < *(int *)(param_1 + 0x10)) &&
         (lVar6 = **(longlong **)(param_1 + 8), iVar15 = iVar14, lVar6 != 0)) &&
        ((*(byte *)(lVar6 + 0x20) & 1) == 0)) &&
       ((((9.99999993922529e-09 < ABS(*(double *)(lVar6 + 0x60)) ||
          (9.99999993922529e-09 < ABS(*(double *)(lVar6 + 0x68)))) ||
         ((9.99999993922529e-09 < ABS(*(double *)(lVar6 + 0x70)) ||
          ((9.99999993922529e-09 < ABS(*(double *)(lVar6 + 0x48)) ||
           (9.99999993922529e-09 < ABS(*(double *)(lVar6 + 0x50)))))))) ||
        (9.99999993922529e-09 < ABS(*(double *)(lVar6 + 0x58)))))) {
      FUN_144941734(lVar6,&local_138);
      local_138 = *param_2;
      dStack_130 = param_2[1];
      local_128 = param_2[2];
      dStack_120 = param_2[3];
      dVar2 = param_2[3];
      dVar24 = param_2[3];
      dVar3 = param_2[1];
      dVar21 = param_2[1];
      dVar18 = param_2[2];
      dVar4 = param_2[2];
      local_118 = param_2[4];
      dStack_110 = param_2[5];
      local_108 = param_2[6];
      uStack_100 = 0;
      dVar7 = *(double *)(lVar6 + 400);
      dVar8 = *(double *)(lVar6 + 0x198);
      auVar5 = *(undefined1 (*) [16])(lVar6 + 0x1d0);
      auVar19 = divpd(_DAT_149934d80,auVar5);
      auVar25 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(lVar6 + 0x1e0));
      dVar17 = *(double *)(lVar6 + 0x1a0) * -1.0;
      dVar20 = *(double *)(lVar6 + 0x1a8) * 1.0;
      dVar9 = *(double *)(lVar6 + 0x1b0);
      dVar10 = *(double *)(lVar6 + 0x1b8);
      dVar11 = *(double *)(lVar6 + 0x1c0);
      local_f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_)) & auVar19._0_8_) *
                 local_f8;
      dStack_f0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_)) & auVar19._8_8_) *
                  dStack_f0;
      local_e8 = (double)(-(ulonglong)
                           (9.99999993922529e-09 <
                           ABS(SUB168(*(undefined1 (*) [16])(lVar6 + 0x1e0),0))) & auVar25._0_8_) *
                 local_e8;
      dVar22 = ((*param_2 * dVar20 * 1.0 - dVar2 * dVar7) + dVar3 * dVar17) - dVar8 * dVar18 * -1.0;
      dVar23 = ((*param_2 * dVar17 * -1.0 - dVar24 * dVar8) + dVar21 * dVar20) - dVar7 * dVar4 * 1.0
      ;
      dVar18 = dVar20 * dVar18 * 1.0 + dVar3 * dVar7 + (dVar2 * dVar17 - *param_2 * dVar8 * 1.0);
      dVar21 = dVar17 * dVar4 * -1.0 + dVar21 * dVar8 + (dVar24 * dVar20 - *param_2 * dVar7 * -1.0);
      dVar24 = dVar10 * dVar22 - dVar9 * dVar23;
      dVar2 = dVar11 * dVar23 - dVar10 * dVar18;
      dVar3 = dVar9 * dVar18 - dVar22 * dVar11;
      dVar2 = dVar2 + dVar2;
      dVar3 = dVar3 + dVar3;
      *(double *)(lVar6 + 0x130) = dVar22;
      *(double *)(lVar6 + 0x138) = dVar23;
      *(double *)(lVar6 + 0x140) = dVar18;
      *(double *)(lVar6 + 0x148) = dVar21;
      dVar24 = dVar24 + dVar24;
      *(double *)(lVar6 + 0x150) =
           local_118 - ((dVar24 * dVar23 - dVar3 * dVar18) + dVar21 * dVar2 + dVar9) * local_f8;
      *(double *)(lVar6 + 0x158) =
           dStack_110 - ((dVar18 * dVar2 - dVar24 * dVar22) + dVar21 * dVar3 + dVar10) * dStack_f0;
      *(double *)(lVar6 + 0x160) =
           local_108 - (dVar21 * dVar24 + dVar11 + (dVar3 * dVar22 - dVar2 * dVar23)) * local_e8;
      *(undefined8 *)(lVar6 + 0x168) = 0;
      *(double *)(lVar6 + 0x170) = local_f8;
      *(double *)(lVar6 + 0x178) = dStack_f0;
      *(double *)(lVar6 + 0x180) = local_e8;
      *(double *)(lVar6 + 0x188) = dStack_e0 * 0.0;
      iVar15 = 7;
    }
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      plVar16 = *(longlong **)(param_1 + 0x28);
      plVar1 = plVar16 + *(int *)(param_1 + 0x30);
      do {
        lVar6 = *plVar16;
        lVar12 = 0x3cc;
        do {
          if (((*(int *)(lVar6 + lVar12 * 4) != 2) ||
              (lVar13 = *(longlong *)(lVar6 + 0x20), (*(byte *)(lVar13 + 0x20) & 1) != 0)) ||
             ((ABS(*(double *)(lVar13 + 0x60)) <= 9.99999993922529e-09 &&
              ((((ABS(*(double *)(lVar13 + 0x68)) <= 9.99999993922529e-09 &&
                 (ABS(*(double *)(lVar13 + 0x70)) <= 9.99999993922529e-09)) &&
                (ABS(*(double *)(lVar13 + 0x48)) <= 9.99999993922529e-09)) &&
               ((ABS(*(double *)(lVar13 + 0x50)) <= 9.99999993922529e-09 &&
                (ABS(*(double *)(lVar13 + 0x58)) <= 9.99999993922529e-09)))))))) {
            lVar13 = (longlong)iVar15;
            iVar15 = iVar15 + 1;
            *(double *)(lVar6 + -0x1788 + lVar12 * 8) = param_2[lVar13];
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x3d2);
        local_d3 = param_3[1];
        if (local_d3 == '\x01') {
          local_d4 = *param_3;
          local_d2 = local_d4;
        }
        local_148 = 0;
        local_d1 = local_d3;
        FUN_1448f23ac(lVar6,&local_d4,&local_d2,0);
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar1);
    }
  }
  if (param_3[1] == '\x01') {
    param_3[1] = 0;
  }
  if ((local_d0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cb0ecc FUN_140cb0ecc body=112 status=ok
// SIG undefined FUN_140cb0ecc(void)

void FUN_140cb0ecc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x538,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x538)) {
      uVar2 = uVar1 / 0x538 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x538,8);
  }
  return;
}



// FUNCTION 140cb0f3c FUN_140cb0f3c body=268 status=ok
// SIG undefined FUN_140cb0f3c(void)

void FUN_140cb0f3c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  plVar3 = (longlong *)FUN_140343d7a();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_140b040c0();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_140b040c0();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if (((plVar3 != plVar5) && (plVar5 != (longlong *)0x0)) &&
         (lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5), lVar6 != 0)) {
        lVar6 = FUN_140cb10de(lVar6,*(longlong *)(param_1 + 0x48) + 0x80);
        if (lVar6 == 0) {
          *(undefined4 *)(param_1 + 0x268) = 0;
          iVar2 = 0;
        }
        else {
          uVar1 = *(uint *)(lVar6 + 0xc);
          *(uint *)(param_1 + 0x268) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          iVar2 = *(int *)(lVar6 + 0x10);
          if (*(int *)(lVar6 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar8 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar8) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar2 = *(int *)(lVar6 + 0x10);
            bVar8 = iVar2 == 0;
            if (bVar8) {
              *(int *)(lVar6 + 0x10) = iVar7;
              iVar2 = 0;
            }
            UNLOCK();
            if (bVar8) {
              iVar2 = iVar7;
            }
          }
        }
        *(int *)(param_1 + 0x26c) = iVar2;
      }
    }
  }
  FUN_140cb1048(param_1);
  return;
}



// FUNCTION 140cb1048 FUN_140cb1048 body=149 status=ok
// SIG undefined FUN_140cb1048(void)

void FUN_140cb1048(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14066e964();
  (**(code **)(*param_1 + 0x108))(param_1);
  lVar3 = (**(code **)(*param_1 + 0x130))(param_1);
  if (lVar3 != 0) {
    cVar2 = FUN_140ba3100(param_1,lVar3);
    if (cVar2 == '\0') {
      lVar4 = FUN_140343d7a(param_1);
      if (lVar4 != 0) {
        FUN_140872e36(param_1 + 0x26,param_1);
        uVar1 = *(undefined8 *)(lVar3 + 0x30);
        *(undefined1 *)((longlong)param_1 + 0x264) = *(undefined1 *)(param_1[8] + 0x134);
        FUN_1408f9d2c(param_1 + 0x26,uVar1,lVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cb10de FUN_140cb10de body=151 status=ok
// SIG undefined FUN_140cb10de(void)

longlong FUN_140cb10de(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar5 = *param_2;
    uVar1 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar9 = (uint)lVar5 & 0xffff;
    lVar4 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x78);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x80) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar9) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 0x38) == lVar5) {
          if (lVar4 == 0) {
            return 0;
          }
          puVar6 = (uint *)(lVar4 + 8);
          if (puVar6 == (uint *)0x0) {
            return 0;
          }
          if (((((*(int *)(lVar4 + 0xc) == 0) || (uVar1 = *puVar6, (int)uVar1 < 0)) ||
               (DAT_14c9647dc <= (int)uVar1)) ||
              ((plVar7 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(lVar4 + 0xc))))) ||
             (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar5 = *plVar7, lVar5 == 0)))) {
            if (*(longlong *)(lVar4 + 0x10) == 0) {
              return 0;
            }
            lVar5 = FUN_140007850();
            cVar2 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar5 == 0) || (cVar2 == '\0')) {
              if (lVar5 == 0) {
                puVar6[0] = 0;
                puVar6[1] = 0;
                return 0;
              }
              uVar1 = *(uint *)(lVar5 + 0xc);
              *puVar6 = uVar1;
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              }
              else {
                lVar10 = 0;
              }
              iVar3 = *(int *)(lVar10 + 0x10);
              if (*(int *)(lVar10 + 0x10) == 0) {
                LOCK();
                iVar3 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar11 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar3;
                if (bVar11) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar3 = *(int *)(lVar10 + 0x10);
                bVar11 = iVar3 == 0;
                if (bVar11) {
                  *(int *)(lVar10 + 0x10) = iVar8;
                  iVar3 = 0;
                }
                UNLOCK();
                if (bVar11) {
                  iVar3 = iVar8;
                }
              }
              *(int *)(lVar4 + 0xc) = iVar3;
            }
            else {
              uVar1 = *(uint *)(lVar5 + 0xc);
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              }
              else {
                lVar4 = 0;
              }
              if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(puVar6,lVar5);
              }
            }
            if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
              return 0;
            }
          }
          lVar4 = FUN_140358c20();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            return lVar5;
          }
          return 0;
        }
        iVar3 = *(int *)(lVar4 + 0x30);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 140cb1176 FUN_140cb1176 body=40 status=ok
// SIG undefined FUN_140cb1176(void)

undefined8 FUN_140cb1176(undefined8 param_1,int param_2)

{
  FUN_140cb119e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cb119e FUN_140cb119e body=183 status=ok
// SIG undefined FUN_140cb119e(void)

void FUN_140cb119e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac70500;
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  param_1[0x93] = &PTR_LAB_14a1e3c98;
  FUN_144724f11(param_1[0x98],*(undefined4 *)(param_1 + 0x99));
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  param_1[0x8c] = &PTR_LAB_14a1e3c98;
  FUN_144724f11(param_1[0x91],*(undefined4 *)(param_1 + 0x92));
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405f0b44(param_1);
  return;
}



// FUNCTION 140cb1256 FUN_140cb1256 body=40 status=ok
// SIG undefined FUN_140cb1256(void)

undefined8 FUN_140cb1256(undefined8 param_1,int param_2)

{
  FUN_140cb127e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cb127e FUN_140cb127e body=513 status=ok
// SIG undefined FUN_140cb127e(void)

void FUN_140cb127e(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b1fca20;
  FUN_1407a806e(param_1 + 0x102);
  FUN_1407a806e(param_1 + 0xfe);
  FUN_143c62d74(param_1 + 0xba);
  if (*(char *)(param_1 + 0xb9) == '\x01') {
    *(undefined1 *)(param_1 + 0xb9) = 0;
  }
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    *(undefined1 *)(param_1 + 0xb5) = 0;
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if (*(char *)(param_1 + 0xab) == '\x01') {
    *(undefined1 *)(param_1 + 0xab) = 0;
  }
  if (*(char *)(param_1 + 0xa6) == '\x01') {
    *(undefined1 *)(param_1 + 0xa6) = 0;
  }
  if (*(char *)(param_1 + 0xa1) == '\x01') {
    *(undefined1 *)(param_1 + 0xa1) = 0;
  }
  if (*(char *)(param_1 + 0x9c) == '\x01') {
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  if (*(char *)(param_1 + 0x96) == '\x01') {
    *(undefined1 *)(param_1 + 0x96) = 0;
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if (*(char *)(param_1 + 0x74) == '\x01') {
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(char *)(param_1 + 0x67) == '\x01') {
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  if (*(char *)(param_1 + 100) == '\x01') {
    *(undefined1 *)(param_1 + 100) = 0;
  }
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  if (*(char *)(param_1 + 0x57) == '\x01') {
    *(undefined1 *)(param_1 + 0x57) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x29c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x29c) = 0;
  }
  FUN_140a9928f(param_1 + 0x1b,*(undefined4 *)(param_1 + 0x51));
  plVar1 = param_1 + 10;
  FUN_1409cf0d4(param_1 + 0xc);
  if (*(int *)(param_1 + 0xb) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140cb142b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140cb142b:
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cb1480 FUN_140cb1480 body=44 status=ok
// SIG undefined FUN_140cb1480(void)

undefined8 FUN_140cb1480(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) &&
     (lVar1 = FUN_140cb14ac(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 140cb14ac FUN_140cb14ac body=105 status=ok
// SIG undefined FUN_140cb14ac(void)

void FUN_140cb14ac(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140cb1562();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_140cb1516(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb1516 FUN_140cb1516 body=76 status=ok
// SIG undefined FUN_140cb1516(void)

void FUN_140cb1516(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140cb1562();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140cb1553;
    }
  }
  lVar2 = 0;
LAB_140cb1553:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140cb1562 FUN_140cb1562 body=228 status=ok
// SIG undefined FUN_140cb1562(void)

longlong FUN_140cb1562(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb96fe8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148a68e35;
    local_40 = FUN_14657f2b6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxOnline",L"GbxRecentFriendsSubsystem",&DAT_14cb96fe8,&DAT_148a68e34);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb96fe8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb1648 FUN_140cb1648 body=78 status=ok
// SIG undefined FUN_140cb1648(void)

longlong * FUN_140cb1648(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140cb1696(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 140cb1696 FUN_140cb1696 body=129 status=ok
// SIG undefined FUN_140cb1696(void)

void FUN_140cb1696(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)plVar4[-1];
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
      plVar3 = (longlong *)plVar4[-3];
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
      plVar4 = plVar4 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cb1718 FUN_140cb1718 body=251 status=ok
// SIG undefined FUN_140cb1718(void)

undefined8 * FUN_140cb1718(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    plVar2 = (longlong *)param_2[3];
    plVar3 = (longlong *)param_1[3];
    if (plVar2 != plVar3) {
      param_2[3] = 0;
      param_1[3] = plVar2;
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
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 140cb1814 FUN_140cb1814 body=362 status=ok
// SIG undefined FUN_140cb1814(void)

void FUN_140cb1814(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_2;
    lVar9 = 0;
    bVar8 = false;
    do {
      plVar10 = *(longlong **)(lVar3 + 0x10 + lVar9);
      if (plVar10 == (longlong *)0x0) {
        lVar4 = *(longlong *)(lVar3 + lVar9);
        if (lVar4 != 0) {
          uVar7 = FUN_140b70546(param_1);
          FUN_140b6e166(&local_58,uVar7,lVar4);
          if (local_58 != 0) {
            if (local_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_50 + 1) = (int)local_50[1] + 1;
              UNLOCK();
            }
            plVar10 = *(longlong **)(lVar3 + 0x18 + lVar9);
            *(longlong *)(lVar3 + 0x10 + lVar9) = local_58;
            *(longlong **)(lVar3 + 0x18 + lVar9) = local_50;
            bVar8 = true;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar10 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
          }
          plVar10 = local_50;
          if (local_50 != (longlong *)0x0) goto LAB_140cb191a;
        }
      }
      else {
        (**(code **)(*plVar10 + 0x10))(plVar10,&local_58);
        cVar6 = FUN_140a68212(&local_58);
        if (cVar6 == '\0') {
          *(undefined8 *)(lVar3 + 0x10 + lVar9) = 0;
          plVar10 = *(longlong **)(lVar3 + 0x18 + lVar9);
          bVar8 = true;
          if (plVar10 != (longlong *)0x0) {
            *(undefined8 *)(lVar3 + 0x18 + lVar9) = 0;
LAB_140cb191a:
            LOCK();
            plVar1 = plVar10 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
        }
      }
      lVar9 = lVar9 + 0x38;
    } while ((longlong)(int)lVar5 * 0x38 - lVar9 != 0);
    if (bVar8) {
      FUN_141163218(param_1,param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb1980 FUN_140cb1980 body=2086 status=ok
// SIG undefined FUN_140cb1980(void)

undefined8 * FUN_140cb1980(undefined8 *param_1,undefined8 *param_2)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  byte *pbVar4;
  longlong *plVar5;
  void *_Src;
  undefined8 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auStack_148 [32];
  void *local_128;
  int local_120;
  undefined8 local_118;
  longlong *plStack_110;
  longlong local_108;
  int local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong local_e0;
  uint local_c8;
  undefined4 uStack_c4;
  int local_c0;
  longlong local_b0;
  uint local_a0 [6];
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  int local_44;
  undefined1 local_40 [8];
  undefined1 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  pbVar4 = (byte *)*param_2;
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) == 0)) goto LAB_140cb1efc;
  puVar6 = (undefined8 *)FUN_1446e60f4(pbVar4,&DAT_14cb97200);
  pbVar4 = (byte *)*puVar6;
  puVar6 = &DAT_14c9a1288;
  if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 2) != 0)) {
    puVar6 = (undefined8 *)(*(longlong *)(pbVar4 + 8) + 0x18);
  }
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  FUN_140cb327c(&local_78,puVar6);
  FUN_1446dcdd4(local_a0,&DAT_14cb97208);
  if ((int)uStack_70 != local_44) {
    puVar7 = local_38;
    if (local_38 == (undefined1 *)0x0) {
      puVar7 = local_40;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)(local_30 - 1U & local_a0[0]) * 4);
    if (iVar8 != -1) {
      ppvVar1 = (void **)(param_1 + 4);
      do {
        if (*(uint *)(local_78 + (longlong)iVar8 * 0x40) == local_a0[0]) {
          FUN_1446dcdd4(&local_c8,&DAT_14cb97210);
          if ((int)uStack_70 == local_44) goto LAB_140cb2041;
          puVar7 = local_38;
          if (local_38 == (undefined1 *)0x0) {
            puVar7 = local_40;
          }
          iVar8 = *(int *)(puVar7 + (ulonglong)(local_30 - 1U & local_c8) * 4);
          goto joined_r0x000140cb1aed;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x40 + local_78 + 0x38);
      } while (iVar8 != -1);
    }
  }
  goto LAB_140cb1ec9;
joined_r0x000140cb1aed:
  if (iVar8 == -1) goto LAB_140cb2041;
  if (*(uint *)(local_78 + (longlong)iVar8 * 0x40) == local_c8) {
    FUN_1446dcdd4(&local_f8,&DAT_14cb97218);
    if ((int)uStack_70 == local_44) goto LAB_140cb2033;
    puVar7 = local_38;
    if (local_38 == (undefined1 *)0x0) {
      puVar7 = local_40;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)(local_30 - 1U & (uint)local_f8) * 4);
    goto joined_r0x000140cb1b60;
  }
  iVar8 = *(int *)((longlong)iVar8 * 0x40 + local_78 + 0x38);
  goto joined_r0x000140cb1aed;
joined_r0x000140cb1b60:
  if (iVar8 == -1) goto LAB_140cb2033;
  if (*(uint *)(local_78 + (longlong)iVar8 * 0x40) != (uint)local_f8) goto LAB_140cb2024;
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1446dcdd4();
  if ((int)uStack_70 != local_44) {
    puVar7 = local_38;
    if (local_38 == (undefined1 *)0x0) {
      puVar7 = local_40;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)(local_30 - 1U & local_a0[0]) * 4);
    while ((iVar8 != -1 && (*(uint *)(local_78 + (longlong)iVar8 * 0x40) != local_a0[0]))) {
      iVar8 = *(int *)(local_78 + (longlong)iVar8 * 0x40 + 0x38);
    }
  }
  FUN_1400b22c2(&local_c8);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_c0 == DAT_14cb97228) {
    if (1 < local_c0) {
      lVar10 = 0;
      while( true ) {
        uVar11 = *(ushort *)(CONCAT44(uStack_c4,local_c8) + lVar10);
        uVar12 = (ulonglong)uVar11;
        uVar13 = *(ushort *)(DAT_14cb97220 + lVar10);
        if (uVar11 != uVar13) break;
        if (uVar11 == 0) goto LAB_140cb20c1;
LAB_140cb2091:
        lVar10 = lVar10 + 2;
      }
      if ((uVar13 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar14 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_140cb2091;
      }
      if (uVar11 != uVar13) goto LAB_140cb1c6b;
    }
LAB_140cb20c1:
    local_f8 = 0;
    plStack_f0 = (longlong *)0x0;
  }
  else {
    if (DAT_14cb97228 + local_c0 == 1) goto LAB_140cb20c1;
LAB_140cb1c6b:
    FUN_140cb2ecc(&local_f8,&local_c8);
  }
  FUN_1446dcdd4();
  if ((int)uStack_70 != local_44) {
    puVar7 = local_38;
    if (local_38 == (undefined1 *)0x0) {
      puVar7 = local_40;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)(local_30 - 1U & local_a0[0]) * 4);
    while ((iVar8 != -1 && (*(uint *)(local_78 + (longlong)iVar8 * 0x40) != local_a0[0]))) {
      iVar8 = *(int *)(local_78 + (longlong)iVar8 * 0x40 + 0x38);
    }
  }
  FUN_1400b22c2(&local_108);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_100 == DAT_14cb97228) {
    if (1 < local_100) {
      lVar10 = 0;
      while( true ) {
        uVar11 = *(ushort *)(local_108 + lVar10);
        uVar12 = (ulonglong)uVar11;
        uVar13 = *(ushort *)(DAT_14cb97220 + lVar10);
        if (uVar11 != uVar13) break;
        if (uVar11 == 0) goto LAB_140cb2006;
LAB_140cb1fd6:
        lVar10 = lVar10 + 2;
      }
      if ((uVar13 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar14 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_140cb1fd6;
      }
      if (uVar11 != uVar13) goto LAB_140cb1d34;
    }
LAB_140cb2006:
    local_118 = 0;
    plStack_110 = (longlong *)0x0;
  }
  else {
    if (DAT_14cb97228 + local_100 == 1) goto LAB_140cb2006;
LAB_140cb1d34:
    FUN_140cb2ecc(&local_118,&local_108);
  }
  FUN_1446dcdd4(local_a0,&DAT_14cb97218);
  if ((int)uStack_70 == local_44) {
LAB_140cb2013:
    lVar10 = 0;
  }
  else {
    puVar7 = local_40;
    if (local_38 != (undefined1 *)0x0) {
      puVar7 = local_38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)(local_30 - 1U & local_a0[0]) * 4);
    if (iVar8 == -1) goto LAB_140cb2013;
    do {
      lVar10 = local_78 + (longlong)iVar8 * 0x40;
      if (*(uint *)(local_78 + (longlong)iVar8 * 0x40) == local_a0[0]) break;
      iVar8 = *(int *)(lVar10 + 0x38);
      lVar10 = 0;
    } while (iVar8 != -1);
  }
  pbVar4 = *(byte **)(lVar10 + 0x28);
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(pbVar4 + 8);
  }
  FUN_1400b22c2(&local_128,uVar9);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (plStack_f0 == (longlong *)0x0) {
    *param_1 = local_f8;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
    UNLOCK();
    plVar5 = (longlong *)param_1[1];
    *param_1 = local_f8;
    param_1[1] = plStack_f0;
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
  }
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[3];
  param_1[2] = local_118;
  param_1[3] = plStack_110;
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
  _Src = local_128;
  if (ppvVar1 != &local_128) {
    *(int *)(param_1 + 5) = local_120;
    if (local_120 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_120);
      if (local_120 != 0) {
        memcpy(*ppvVar1,_Src,(longlong)local_120 * 2);
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar5 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_110 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  plVar5 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_f0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  local_88 = CONCAT44(uStack_c4,local_c8);
  goto LAB_140cb1ec9;
LAB_140cb2024:
  iVar8 = *(int *)((longlong)iVar8 * 0x40 + local_78 + 0x38);
  goto joined_r0x000140cb1b60;
LAB_140cb2033:
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
LAB_140cb2041:
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
LAB_140cb1ec9:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  local_30 = 0;
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140cb2c32(&local_78);
LAB_140cb1efc:
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb21a8 FUN_140cb21a8 body=2696 status=ok
// SIG undefined FUN_140cb21a8(void)

longlong * FUN_140cb21a8(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  void *pvVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_1a8 [32];
  void *local_188;
  uint local_180;
  undefined8 local_178;
  longlong *plStack_170;
  longlong local_168;
  int local_160;
  undefined8 local_158;
  longlong *plStack_150;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined2 local_118;
  uint local_108;
  undefined4 uStack_104;
  int local_100;
  longlong local_f0;
  uint local_e0 [6];
  longlong local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *param_1 = 0;
  param_1[1] = 0;
  pbVar3 = (byte *)*param_2;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) != 0)) {
    puVar7 = (undefined8 *)FUN_1446e60f4(pbVar3,&DAT_14cb971f8);
    pbVar3 = (byte *)*puVar7;
    puVar7 = &DAT_14c9a1270;
    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 2) != 0)) {
      puVar7 = *(undefined8 **)(pbVar3 + 8);
    }
    if ((longlong)*(int *)(puVar7 + 2) != 0) {
      puVar18 = (undefined8 *)*puVar7;
      puVar7 = puVar18 + (longlong)*(int *)(puVar7 + 2) * 2;
LAB_140cb2256:
      pbVar3 = (byte *)*puVar18;
      puVar10 = &DAT_14c9a1288;
      if ((pbVar3 != (byte *)0x0) && (puVar10 = &DAT_14c9a1288, (*pbVar3 & 2) != 0)) {
        puVar10 = (undefined8 *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = (undefined1 *)0x0;
      local_70 = 0;
      FUN_140cb327c(&local_b8,puVar10);
      FUN_1446dcdd4(&local_148,&DAT_14cb97208);
      if ((int)uStack_b0 != local_84) {
        puVar9 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar9 = local_80;
        }
        for (iVar13 = *(int *)(puVar9 + (ulonglong)(local_70 - 1U & (uint)local_148) * 4);
            iVar13 != -1; iVar13 = *(int *)((longlong)iVar13 * 0x40 + local_b8 + 0x38)) {
          if (*(uint *)(local_b8 + (longlong)iVar13 * 0x40) == (uint)local_148) {
            FUN_1446dcdd4(local_e0,&DAT_14cb97210);
            if ((int)uStack_b0 == local_84) goto LAB_140cb2a57;
            puVar9 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar9 = local_80;
            }
            iVar13 = *(int *)(puVar9 + (ulonglong)(local_70 - 1U & local_e0[0]) * 4);
            goto joined_r0x000140cb2377;
          }
        }
      }
      goto LAB_140cb2a68;
    }
  }
LAB_140cb2905:
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
joined_r0x000140cb2377:
  if (iVar13 == -1) goto LAB_140cb2a57;
  if (*(uint *)(local_b8 + (longlong)iVar13 * 0x40) == local_e0[0]) {
    FUN_1446dcdd4(&local_108,&DAT_14cb97218);
    if ((int)uStack_b0 == local_84) goto LAB_140cb2a46;
    puVar9 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar9 = local_80;
    }
    iVar13 = *(int *)(puVar9 + (ulonglong)(local_70 - 1U & local_108) * 4);
    goto joined_r0x000140cb23f0;
  }
  iVar13 = *(int *)((longlong)iVar13 * 0x40 + local_b8 + 0x38);
  goto joined_r0x000140cb2377;
joined_r0x000140cb23f0:
  if (iVar13 == -1) goto LAB_140cb2a46;
  if (*(uint *)(local_b8 + (longlong)iVar13 * 0x40) != local_108) goto LAB_140cb2a37;
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (plStack_130 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_128 = (void *)0x0;
  uStack_120 = 0;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  local_148 = 0;
  plStack_140 = (longlong *)0x0;
  local_118 = 0;
  FUN_1446dcdd4(local_e0);
  if ((int)uStack_b0 != local_84) {
    puVar9 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar9 = local_80;
    }
    iVar13 = *(int *)(puVar9 + (ulonglong)(local_70 - 1U & local_e0[0]) * 4);
    while ((iVar13 != -1 && (*(uint *)(local_b8 + (longlong)iVar13 * 0x40) != local_e0[0]))) {
      iVar13 = *(int *)(local_b8 + (longlong)iVar13 * 0x40 + 0x38);
    }
  }
  FUN_1400b22c2(&local_108);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_100 == DAT_14cb97228) {
    if (1 < local_100) {
      lVar12 = 0;
      while( true ) {
        uVar14 = *(ushort *)(CONCAT44(uStack_104,local_108) + lVar12);
        uVar15 = (ulonglong)uVar14;
        uVar16 = *(ushort *)(DAT_14cb97220 + lVar12);
        if (uVar14 != uVar16) break;
        if (uVar14 == 0) goto LAB_140cb2b23;
LAB_140cb2add:
        lVar12 = lVar12 + 2;
      }
      if ((uVar16 | uVar14) < 0x80) {
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        uVar17 = (ulonglong)uVar16;
        uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
        if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_140cb2add;
      }
      if (uVar14 != uVar16) goto LAB_140cb2519;
    }
LAB_140cb2b23:
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
  }
  else {
    if (DAT_14cb97228 + local_100 == 1) goto LAB_140cb2b23;
LAB_140cb2519:
    FUN_140cb2ecc(&local_158,&local_108);
  }
  FUN_1446dcdd4(local_e0);
  if ((int)uStack_b0 != local_84) {
    puVar9 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar9 = local_80;
    }
    iVar13 = *(int *)(puVar9 + (ulonglong)(local_70 - 1U & local_e0[0]) * 4);
    while ((iVar13 != -1 && (*(uint *)(local_b8 + (longlong)iVar13 * 0x40) != local_e0[0]))) {
      iVar13 = *(int *)(local_b8 + (longlong)iVar13 * 0x40 + 0x38);
    }
  }
  FUN_1400b22c2(&local_168);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_160 == DAT_14cb97228) {
    if (1 < local_160) {
      lVar12 = 0;
      while( true ) {
        uVar14 = *(ushort *)(local_168 + lVar12);
        uVar15 = (ulonglong)uVar14;
        uVar16 = *(ushort *)(DAT_14cb97220 + lVar12);
        if (uVar14 != uVar16) break;
        if (uVar14 == 0) goto LAB_140cb29f5;
LAB_140cb29b6:
        lVar12 = lVar12 + 2;
      }
      if ((uVar16 | uVar14) < 0x80) {
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        uVar17 = (ulonglong)uVar16;
        uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
        if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_140cb29b6;
      }
      if (uVar14 != uVar16) goto LAB_140cb25e4;
    }
LAB_140cb29f5:
    local_178 = 0;
    plStack_170 = (longlong *)0x0;
  }
  else {
    if (DAT_14cb97228 + local_160 == 1) goto LAB_140cb29f5;
LAB_140cb25e4:
    FUN_140cb2ecc(&local_178,&local_168);
  }
  FUN_1446dcdd4(local_e0);
  if ((int)uStack_b0 == local_84) {
LAB_140cb2a30:
    lVar12 = 0;
  }
  else {
    puVar9 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar9 = local_80;
    }
    iVar13 = *(int *)(puVar9 + (ulonglong)(local_70 - 1U & local_e0[0]) * 4);
    if (iVar13 == -1) goto LAB_140cb2a30;
    do {
      lVar12 = local_b8 + (longlong)iVar13 * 0x40;
      if (*(uint *)(local_b8 + (longlong)iVar13 * 0x40) == local_e0[0]) break;
      iVar13 = *(int *)(lVar12 + 0x38);
      lVar12 = 0;
    } while (iVar13 != -1);
  }
  pbVar3 = *(byte **)(lVar12 + 0x28);
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(pbVar3 + 8);
  }
  FUN_1400b22c2(&local_188,uVar11);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  plVar6 = plStack_140;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
  }
  local_148 = local_158;
  plStack_140 = plStack_150;
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
  plVar6 = plStack_130;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
    UNLOCK();
  }
  local_138 = local_178;
  plStack_130 = plStack_170;
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
  uVar5 = local_180;
  pvVar4 = local_188;
  lVar12 = (longlong)(int)local_180;
  uStack_120 = CONCAT44(uStack_120._4_4_,local_180);
  if (local_180 == 0 && uStack_120._4_4_ == 0) {
    uStack_120 = (ulonglong)local_180;
  }
  else {
    FUN_1446dd670(&local_128,local_180);
    if (uVar5 != 0) {
      memcpy(local_128,pvVar4,lVar12 * 2);
    }
  }
  iVar13 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar13 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar13 + 1U) {
    FUN_140cb3cca(param_1,iVar13);
  }
  pvVar4 = local_128;
  lVar12 = *param_1;
  lVar8 = (longlong)iVar13 * 0x38;
  *(undefined8 *)(lVar12 + lVar8) = local_148;
  *(longlong **)(lVar12 + 8 + lVar8) = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
    UNLOCK();
  }
  lVar12 = lVar12 + lVar8;
  *(undefined8 *)(lVar12 + 0x10) = local_138;
  *(longlong **)(lVar12 + 0x18) = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar12 + 0x20) = 0;
  lVar8 = (longlong)(int)uStack_120;
  *(int *)(lVar12 + 0x28) = (int)uStack_120;
  if (lVar8 == 0) {
    *(undefined4 *)(lVar12 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(lVar12 + 0x20),uStack_120 & 0xffffffff,0);
    memcpy(*(void **)(lVar12 + 0x20),pvVar4,lVar8 * 2);
  }
  *(undefined2 *)(lVar12 + 0x30) = local_118;
  if (local_188 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar6 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_170 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  plVar6 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (CONCAT44(uStack_104,local_108) != 0) {
    FUN_1400020a8();
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar6 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_130 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  goto LAB_140cb2887;
LAB_140cb2a37:
  iVar13 = *(int *)((longlong)iVar13 * 0x40 + local_b8 + 0x38);
  goto joined_r0x000140cb23f0;
LAB_140cb2a46:
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
LAB_140cb2a57:
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_140cb2a68:
  if (plStack_130 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140cb2887:
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140cb2c32(&local_b8);
  puVar18 = puVar18 + 2;
  if (puVar18 == puVar7) goto LAB_140cb2905;
  goto LAB_140cb2256;
}



// FUNCTION 140cb2c32 FUN_140cb2c32 body=55 status=ok
// SIG undefined FUN_140cb2c32(void)

void FUN_140cb2c32(longlong *param_1)

{
  FUN_140cb2c6a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cb2c6a FUN_140cb2c6a body=608 status=ok
// SIG undefined FUN_140cb2c6a(void)

void FUN_140cb2c6a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar7 = 0;
    iVar14 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar16 = *puVar11;
    if (uVar16 == 0) {
      iVar7 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar7 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar14 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_140cb2dfe;
        iVar14 = iVar14 + 0x20;
        uVar16 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar14 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar4 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar7 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
  }
  if (iVar7 < iVar5) {
    uVar16 = 0xffffffff;
    do {
      lVar13 = *param_1;
      plVar6 = *(longlong **)(lVar13 + 0x30 + (longlong)iVar7 * 0x40);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      if (*(longlong *)(lVar13 + (longlong)iVar7 * 0x40 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar5 = (int)param_1[5];
      iVar7 = (int)uVar17;
      lVar13 = (longlong)iVar7;
      uVar8 = puVar11[lVar13] & uVar16;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar8 = puVar11[lVar13 + lVar12 + 1];
          if (uVar8 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar13 == lVar12) goto LAB_140cb2dfe;
        }
        uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar7 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_140cb2dfe:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar8 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar8 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar8;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140cb2ecc FUN_140cb2ecc body=940 status=ok
// SIG undefined FUN_140cb2ecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_140cb2ecc(ulonglong *param_1,undefined **param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_54 [4];
  undefined **local_50;
  ulonglong *local_48;
  longlong *local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = *(int *)(param_2 + 1);
  uVar8 = 0;
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    if (iVar4 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    lVar11 = 0;
    uVar8 = 0;
    do {
      uVar10 = ((uint)(0x19 < (ushort)puVar5[lVar11] - 0x61) * 0x20 + (uint)(ushort)puVar5[lVar11])
               - 0x20;
      uVar12 = (uint)(uVar8 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar10) & 0xff) * 4);
      uVar8 = (ulonglong)
              (uVar12 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar10 >> 8 & 0xff) * 4));
      lVar11 = lVar11 + 1;
    } while (iVar7 != (int)lVar11);
  }
  iVar4 = FUN_1413dafe6(&DAT_14cb974f8,uVar8,param_2);
  lVar11 = (longlong)iVar4 * 0x28 + _DAT_14cb974f8;
  if (lVar11 != 0 && iVar4 != -1) {
    uVar8 = *(ulonglong *)(lVar11 + 0x10);
    plVar6 = *(longlong **)(lVar11 + 0x18);
    if (plVar6 == (longlong *)0x0) {
      *param_1 = uVar8;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      plVar2 = (longlong *)param_1[1];
      *param_1 = uVar8;
      if (plVar6 == plVar2) {
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
            lVar11 = *plVar6;
LAB_140cb315a:
            (**(code **)(lVar11 + 0x10))(plVar6);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
          }
        }
      }
      else {
        param_1[1] = (ulonglong)plVar6;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar2 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar11 = *plVar2;
              plVar6 = plVar2;
              goto LAB_140cb315a;
            }
          }
        }
      }
    }
    goto LAB_140cb31b6;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140056680(&local_50,&DAT_149e31048);
  local_90 = 0;
  local_98 = 1;
  cVar3 = FUN_1407cdbc6(param_2,&local_50,&local_68,&local_78);
  if ((cVar3 == '\0') || ((int)uStack_60 < 2)) {
    if (local_50 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar4 = (int)uStack_70;
    if (local_50 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (1 < iVar4) {
      plVar6 = (longlong *)FUN_140489acc();
      puVar9 = (ulonglong *)(ulonglong)((int)uStack_60 - 1);
      if ((int)uStack_60 == 0) {
        puVar9 = (ulonglong *)0x0;
      }
      FUN_1446f82e2(&local_50,puVar9,local_68,1);
      (**(code **)(*plVar6 + 0x2e8))(plVar6,&local_50,&local_78,local_50);
      puVar9 = (ulonglong *)0x0;
      if ((&DAT_149fc1b6e)[local_38] == '\x01') {
        puVar9 = local_48;
        if (local_40 == (longlong *)0x0) goto LAB_140cb316f;
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
        plVar6 = (longlong *)param_1[1];
        *param_1 = (ulonglong)local_48;
        if (local_40 == plVar6) {
          LOCK();
          plVar6 = local_40 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar11 = *local_40;
LAB_140cb3200:
              (**(code **)(lVar11 + 0x10))(local_40);
            }
          }
        }
        else {
          param_1[1] = (ulonglong)local_40;
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
                lVar11 = *plVar6;
                local_40 = plVar6;
                goto LAB_140cb3200;
              }
            }
          }
        }
      }
      else {
LAB_140cb316f:
        *param_1 = (ulonglong)puVar9;
      }
      local_50 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])();
      uVar8 = *param_1;
      if (uVar8 != 0) {
        local_80 = (longlong *)param_1[1];
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        local_48 = &local_88;
        local_88 = uVar8;
        local_50 = param_2;
        FUN_145944ea8(&DAT_14cb974f8,local_54,&local_50,0);
        plVar6 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_80 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_80)(local_80);
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
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_140cb31b6:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb327c FUN_140cb327c body=568 status=ok
// SIG undefined FUN_140cb327c(void)

void FUN_140cb327c(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar9 = ((int)param_2[2] - *(int *)((longlong)param_2 + 0x3c)) + uVar3;
  if (uVar3 < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar9);
    }
    FUN_140cb3892(param_1,uVar9);
    iVar5 = 1;
    if (3 < uVar9) {
      uVar3 = (uVar9 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar5)) {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140cb3a4c(param_1);
    }
  }
  iVar5 = (int)param_2[6];
  if (iVar5 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = (uint *)param_2[5];
    if ((uint *)param_2[5] == (uint *)0x0) {
      puVar6 = (uint *)(param_2 + 3);
    }
    uVar3 = *puVar6;
    if (uVar3 == 0) {
      iVar4 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar4 = iVar5 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_140cb3436;
        iVar10 = iVar10 + 0x20;
        uVar3 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar4) {
      iVar4 = iVar5;
    }
  }
  if (iVar4 != iVar5) {
    uVar3 = 0xffffffff;
    do {
      FUN_140cb34b6(param_1,local_4c,(longlong)iVar4 * 0x40 + *param_2,0);
      uVar3 = ~(uint)uVar14 & uVar3;
      puVar6 = (uint *)param_2[5];
      if ((uint *)param_2[5] == (uint *)0x0) {
        puVar6 = (uint *)(param_2 + 3);
      }
      iVar2 = (int)param_2[6];
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar9 = puVar6[lVar11] & uVar3;
      if (uVar9 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar9 = puVar6[lVar11 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar3 = 0xffffffff;
              goto LAB_140cb33ff;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar3 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar2;
      }
      else {
LAB_140cb33ff:
        uVar14 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar4) {
          iVar4 = iVar2;
        }
      }
    } while (iVar4 != iVar5);
  }
LAB_140cb3436:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cb34b6 FUN_140cb34b6 body=323 status=ok
// SIG undefined FUN_140cb34b6(void)

undefined4 * FUN_140cb34b6(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140cb36c4(param_1,local_48);
  FUN_1447a97f4(local_40,param_3);
  *(undefined8 *)(local_40 + 10) = *(undefined8 *)(param_3 + 0x28);
  lVar6 = *(longlong *)(param_3 + 0x30);
  *(longlong *)(local_40 + 0xc) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  local_40[0xe] = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = *local_40;
  local_58 = param_4;
  cVar1 = FUN_140cb35fa(param_1,uVar3,local_40);
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
      local_40[0xf] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140cb3a4c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb35fa FUN_140cb35fa body=201 status=ok
// SIG undefined FUN_140cb35fa(void)

void FUN_140cb35fa(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

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
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar14;
  longlong *plVar15;
  int iVar16;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar16 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar16 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar16 * 0x40) == *param_3) {
          FUN_1447b3f56(piVar1);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1470d9578(param_1,*param_4,1);
          *param_4 = iVar16;
          uVar14 = 1;
          break;
        }
        iVar16 = piVar1[0xe];
        uVar14 = 0;
      } while (iVar16 != -1);
      goto LAB_140cb3669;
    }
  }
  uVar14 = 0;
LAB_140cb3669:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar14;
  }
  return;
}



// FUNCTION 140cb36c4 FUN_140cb36c4 body=461 status=ok
// SIG undefined FUN_140cb36c4(void)

int * FUN_140cb36c4(longlong *param_1,int *param_2)

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



// FUNCTION 140cb3892 FUN_140cb3892 body=442 status=ok
// SIG undefined FUN_140cb3892(void)

void FUN_140cb3892(longlong *param_1,uint param_2)

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



// FUNCTION 140cb3a4c FUN_140cb3a4c body=638 status=ok
// SIG undefined FUN_140cb3a4c(void)

void FUN_140cb3a4c(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140cb3aaf;
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
LAB_140cb3aaf:
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
      lVar13 = (longlong)iVar12 * 0x40;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x3c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x38 + lVar13) =
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



// FUNCTION 140cb3cca FUN_140cb3cca body=366 status=ok
// SIG undefined FUN_140cb3cca(void)

void FUN_140cb3cca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140cb3d4f;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_140cb3d4f:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 140cb3e38 FUN_140cb3e38 body=51 status=ok
// SIG undefined FUN_140cb3e38(void)

longlong FUN_140cb3e38(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar2);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == param_2)) {
        return lVar1;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 140cb3e6c FUN_140cb3e6c body=40 status=ok
// SIG undefined FUN_140cb3e6c(void)

undefined8 FUN_140cb3e6c(undefined8 param_1,int param_2)

{
  FUN_140cb3e94();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cb3e94 FUN_140cb3e94 body=265 status=ok
// SIG undefined FUN_140cb3e94(void)

void FUN_140cb3e94(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a89ff60;
  param_1[5] = &PTR_FUN_14a8a0210;
  puVar1 = param_1 + 0x36;
  lVar2 = -0x200;
  do {
    *puVar1 = &DAT_14a176f00;
    if (puVar1[0xe] != 0) {
      FUN_1400020a8();
    }
    *puVar1 = &PTR_FUN_14a177080;
    if (puVar1[0xb] != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(puVar1 + 10) = 0;
    if (puVar1[9] != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(puVar1 + 2) = 0;
    if (*(int *)((longlong)puVar1 + 0x14) != 0) {
      FUN_14472eb64(puVar1 + 1,0);
    }
    puVar1[7] = 0xffffffff;
    *(undefined4 *)(puVar1 + 6) = 0;
    if (0x80 < *(uint *)((longlong)puVar1 + 0x34)) {
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0x80;
      FUN_1446efbd8(puVar1 + 3);
    }
    if (puVar1[5] != 0) {
      FUN_1400020a8();
    }
    if (puVar1[1] != 0) {
      FUN_1400020a8();
    }
    puVar1 = puVar1 + -0x10;
    lVar2 = lVar2 + 0x80;
  } while (lVar2 != 0);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140cb3f9e FUN_140cb3f9e body=2180 status=ok
// SIG undefined FUN_140cb3f9e(void)

void FUN_140cb3f9e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 *_Src;
  undefined8 *puVar6;
  undefined1 *_Src_00;
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  undefined8 local_190;
  undefined8 local_188;
  code *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = 0;
      local_198 = (undefined1 *)0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_140cb409a;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_140cb409a:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = 0;
      local_198 = (undefined1 *)0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_140cb4170;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_140cb4170:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1403a682c;
      local_190 = 0;
      local_198 = (undefined1 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_140cb4238;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_140cb4238:
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_140cb4308;
          }
        }
        _Src_00 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_140cb4308:
  local_198 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_198 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = local_48;
  local_178 = local_58;
  uStack_174 = uStack_54;
  uStack_170 = uStack_50;
  uStack_16c = uStack_4c;
  FUN_140cb4824(param_1,local_38,local_40);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb4824 FUN_140cb4824 body=148 status=ok
// SIG undefined FUN_140cb4824(void)

void FUN_140cb4824(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  local_38 = *(undefined8 *)(param_4 + 4);
  local_58 = param_5;
  FUN_140cb48ba(param_1 + 0x4a8,param_2,param_3,&local_48);
  if (0 < *(int *)(param_1 + 0x4f8)) {
    FUN_140e15cbe(&local_28);
    FUN_14051c89e(param_1 + 0x20d,param_1,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb48ba FUN_140cb48ba body=1431 status=ok
// SIG undefined FUN_140cb48ba(void)

void FUN_140cb48ba(longlong param_1,longlong param_2,longlong param_3,double *param_4,
                  longlong param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined4 local_198;
  longlong local_188;
  longlong *plStack_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  longlong local_138;
  longlong *local_128;
  longlong local_118 [4];
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar12 = (longlong *)(param_1 + 8);
  cVar3 = FUN_140cb4e52(plVar12);
  if ((((((cVar3 != '\0') && (param_2 != 0)) && (param_2 != param_3)) &&
       ((*(int *)(param_5 + 0xdc) != 0 && (uVar14 = *(uint *)(param_5 + 0xd8), -1 < (int)uVar14))))
      && ((int)uVar14 < DAT_14c9647dc)) &&
     (((plVar10 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_5 + 0xdc))) &&
      (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && ((longlong *)*plVar10 != (longlong *)0x0))))))
  {
    plVar11 = (longlong *)0x0;
    if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
      plVar11 = (longlong *)*plVar10;
    }
    iVar4 = (**(code **)(*plVar11 + 0x580))();
    if ((iVar4 == 0) || (iVar4 == 5)) {
      lVar5 = FUN_1447210f0(param_2);
      if (lVar5 == 0) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = (float)*(double *)(lVar5 + 0x6d0);
      }
      lVar6 = *(longlong *)(param_1 + 0x10);
      if (lVar6 == 0) {
        uVar8 = FUN_1405bb4b8();
        lVar6 = FUN_14477b664(uVar8);
        *(longlong *)(param_1 + 0x10) = lVar6;
      }
      lVar7 = *(longlong *)(param_1 + 0x18);
      if (lVar7 == 0) {
        if ((lVar6 == 0) || (*plVar12 == 0)) goto LAB_140cb4a4b;
        plVar10 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar10 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
          *(undefined8 *)(param_1 + 0x18) = 0;
          goto LAB_140cb4a4b;
        }
        uVar8 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar7 = FUN_144aff482(uVar8,plVar12);
        *(longlong *)(param_1 + 0x18) = lVar7;
        if (lVar7 == 0) goto LAB_140cb4a4b;
      }
      if (((*(float *)(param_1 + 0x48) <= fVar16) &&
          (fVar15 = (float)SQRT(param_4[2] * param_4[2] +
                                *param_4 * *param_4 + param_4[1] * param_4[1]),
          uVar14 = -(uint)(0.0 < *(float *)(param_1 + 0x4c)),
          fVar15 = (float)(uVar14 & (uint)(fVar15 / *(float *)(param_1 + 0x4c)) |
                          ~uVar14 & (uint)fVar15), *(float *)(lVar7 + 0x1c8) <= fVar15)) &&
         (FUN_1407f7f84(&local_188,lVar5), plStack_180 != (longlong *)0x0)) {
        iVar4 = (int)plStack_180[1];
        do {
          if (iVar4 == 0) {
            plVar12 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar2 = (int)plStack_180[1];
          bVar13 = iVar4 == iVar2;
          if (bVar13) {
            *(int *)(plStack_180 + 1) = iVar4 + 1;
            iVar2 = iVar4;
          }
          iVar4 = iVar2;
          UNLOCK();
          plVar12 = plStack_180;
        } while (!bVar13);
        LOCK();
        piVar1 = (int *)((longlong)plStack_180 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_180 + 0x10))();
        }
        lVar5 = local_188;
        if (plVar12 != (longlong *)0x0) {
          if (local_188 != 0) {
            *(float *)(param_1 + 0x48) = fVar16 + *(float *)(lVar7 + 0x1cc);
            local_158 = 0;
            uStack_150 = 0;
            local_168 = 0;
            uStack_160 = 0;
            local_178 = 0;
            uStack_170 = 0;
            local_188 = 0;
            plStack_180 = (longlong *)0x0;
            local_148 = 0xc0;
            local_138 = 0;
            local_128 = (longlong *)0x0;
            local_f8 = 0;
            local_e8 = (longlong *)0x0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_a8 = 0;
            local_a0 = 0x3ff0000000000000;
            local_98 = 0x3ff0000000000000;
            local_90 = 0x3ff0000000000000;
            local_88 = 0x3f80000000000000;
            local_80 = 0.0;
            lVar6 = *(longlong *)(param_1 + 0x30);
            if (lVar6 == 0) {
              uVar8 = FUN_1405bc036();
              lVar6 = FUN_14477b664(uVar8);
              *(longlong *)(param_1 + 0x30) = lVar6;
            }
            lVar9 = *(longlong *)(param_1 + 0x38);
            if (((lVar9 == 0) && (lVar9 = 0, lVar6 != 0)) && (*(longlong *)(param_1 + 0x28) != 0)) {
              plVar10 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar10 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
                lVar9 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar10 + 0x110))(plVar10);
                lVar9 = FUN_144aff482(uVar8,(longlong *)(param_1 + 0x28));
              }
              *(longlong *)(param_1 + 0x38) = lVar9;
            }
            FUN_1405bc06f(&local_188,lVar9,1,1);
            local_80 = fVar15;
            if (((((*(int *)(param_1 + 0x44) == 0) ||
                  (uVar14 = *(uint *)(param_1 + 0x40), (int)uVar14 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar14)) ||
                ((plVar10 = (longlong *)
                            ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
                 plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x44))))) ||
               (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (*plVar10 == 0)))) {
              lVar6 = FUN_140df24ba();
              if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
                 (lVar9 = param_2,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
                lVar9 = 0;
              }
              FUN_14485c47a((uint *)(param_1 + 0x40),lVar9);
            }
            local_198 = 0;
            local_1a8 = 0;
            local_1a0 = &local_188;
            FUN_1408f2522(lVar5,lVar7,param_2,param_5);
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
            if (local_f8 != 0) {
              plVar10 = local_e8;
              if (local_e8 == (longlong *)0x0) {
                plVar10 = local_d8;
              }
              (**(code **)(*plVar10 + 0x10))();
            }
            if (local_138 != 0) {
              plVar10 = local_128;
              if (local_128 == (longlong *)0x0) {
                plVar10 = local_118;
              }
              (**(code **)(*plVar10 + 0x10))();
            }
            if (local_158 != 0) {
              FUN_1400020a8();
            }
            if (local_168 != 0) {
              FUN_1400020a8();
            }
            if (local_178 != 0) {
              FUN_1400020a8();
            }
            if (local_188 != 0) {
              FUN_1400020a8();
            }
          }
          LOCK();
          plVar10 = plVar12 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
      }
    }
  }
LAB_140cb4a4b:
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cb4e52 FUN_140cb4e52 body=135 status=ok
// SIG undefined FUN_140cb4e52(void)

ulonglong FUN_140cb4e52(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  plVar3 = param_1;
  if (lVar4 == 0) {
    plVar3 = (longlong *)FUN_1405bb4b8();
    lVar4 = FUN_14477b664(plVar3);
    param_1[1] = lVar4;
  }
  plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
  if (((param_1[2] != 0) || (plVar3 = (longlong *)0x0, lVar4 == 0)) || (*param_1 == 0))
  goto LAB_140cb4e6d;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_140cb4ed5:
    lVar4 = 0;
  }
  else {
    plVar3 = plVar1;
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_140cb4ed5;
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(plVar3,param_1);
  }
  param_1[2] = lVar4;
  plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),lVar4 != 0);
LAB_140cb4e6d:
  return (ulonglong)plVar3 & 0xffffffff;
}



// FUNCTION 140cb4eda FUN_140cb4eda body=40 status=ok
// SIG undefined FUN_140cb4eda(void)

undefined8 FUN_140cb4eda(undefined8 param_1,int param_2)

{
  FUN_140cb4f02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cb4f02 FUN_140cb4f02 body=441 status=ok
// SIG undefined FUN_140cb4f02(void)

void FUN_140cb4f02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b071540;
  param_1[0x72] = &PTR_FUN_14b071b80;
  param_1[0x73] = &PTR_FUN_14b071c20;
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  param_1[0xa1] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (*(int *)((longlong)param_1 + 0x524) != 0) {
    FUN_140115c12(param_1 + 0xa3,0);
  }
  param_1[0xa2] = 0;
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  param_1[0x9c] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  if (*(int *)((longlong)param_1 + 0x4fc) != 0) {
    FUN_140115c12(param_1 + 0x9e,0);
  }
  param_1[0x9d] = 0;
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f4a8(param_1 + 0x80);
  FUN_140cb50bc(param_1 + 0x7c,1);
  param_1[0x78] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (*(int *)((longlong)param_1 + 0x3dc) != 0) {
    FUN_140115c12(param_1 + 0x7a,0);
  }
  param_1[0x79] = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x74] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x77) = 0;
  if (*(int *)((longlong)param_1 + 0x3bc) != 0) {
    FUN_140115c12(param_1 + 0x76,0);
  }
  param_1[0x75] = 0;
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140cb50bc FUN_140cb50bc body=124 status=ok
// SIG undefined FUN_140cb50bc(void)

void FUN_140cb50bc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140cb5138 FUN_140cb5138 body=154 status=ok
// SIG undefined FUN_140cb5138(void)

void FUN_140cb5138(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_140cb51d2(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_140cb51fa(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 140cb51d2 FUN_140cb51d2 body=40 status=ok
// SIG undefined FUN_140cb51d2(void)

void FUN_140cb51d2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14128b0c2(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 140cb51fa FUN_140cb51fa body=43 status=ok
// SIG undefined FUN_140cb51fa(void)

void FUN_140cb51fa(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 140cb5226 FUN_140cb5226 body=87 status=ok
// SIG undefined FUN_140cb5226(void)

void FUN_140cb5226(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140cb527e(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14010514e(param_1);
  return;
}



// FUNCTION 140cb527e FUN_140cb527e body=53 status=ok
// SIG undefined FUN_140cb527e(void)

void FUN_140cb527e(longlong *param_1)

{
  FUN_140cb52b4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cb52b4 FUN_140cb52b4 body=448 status=ok
// SIG undefined FUN_140cb52b4(void)

void FUN_140cb52b4(longlong *param_1)

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
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar7 * 0x28) != 0) {
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
          if (iVar3 - lVar12 == lVar9) goto LAB_140cb53d0;
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
LAB_140cb53d0:
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb5476 FUN_140cb5476 body=114 status=ok
// SIG undefined FUN_140cb5476(void)

undefined8 *** FUN_140cb5476(undefined8 param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 ***local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  ppppuVar1 = &local_20;
  local_28 = param_2;
  FUN_140cb54ea(param_1,ppppuVar1,1 << (DAT_14cab3294 & 0x1f));
  if ((local_18 == '\x01') || (local_18 == '\x02')) {
    ppppuVar1 = (undefined8 ****)local_20;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *ppppuVar1;
}



// FUNCTION 140cb54ea FUN_140cb54ea body=1301 status=ok
// SIG undefined FUN_140cb54ea(void)

longlong * FUN_140cb54ea(ulonglong *param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  byte *pbVar10;
  ushort uVar11;
  ulonglong uVar12;
  void *pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = (uint)param_1[2] | param_3;
  *(uint *)(param_1 + 2) = uVar5;
  uVar5 = param_3 - 1 & uVar5;
  uVar15 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
  uVar16 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
  uVar20 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar21 = uVar20 >> 0x38;
  uVar15 = *param_1;
  bVar2 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar2 == 0) {
    uVar18 = 8;
  }
  else {
    uVar18 = 8;
    lVar9 = 0;
    do {
      uVar11 = (ushort)*(byte *)(uVar15 + 3 + lVar9);
      if (uVar18 < uVar11) {
        uVar18 = uVar11;
      }
      lVar9 = lVar9 + 6;
    } while ((ulonglong)((uint)bVar2 + (uint)bVar2) * 3 != lVar9);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  local_88 = param_4;
  local_80 = param_2;
  FUN_14086fe48(local_78,bVar2 + 1,CONCAT71((int7)(uVar16 >> 8),1));
  lVar9 = (ulonglong)((uint)bVar2 * 2 + 2) * 3;
  uVar5 = 0;
  bVar3 = (byte)(uVar20 >> 0x38);
  uVar19 = (uint)bVar3;
  if (uVar21 != 0) {
    uVar5 = (uint)bVar3 + (uint)(uVar19 == 0);
    pbVar10 = (byte *)(uVar15 + 3);
    lVar17 = 0;
    do {
      uVar16 = -(ulonglong)*pbVar10 & (lVar9 + (ulonglong)*pbVar10) - 1;
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(short *)(puVar6 + lVar17 * 2) = (short)uVar16;
      lVar9 = pbVar10[-1] + uVar16;
      lVar17 = lVar17 + 1;
      pbVar10 = pbVar10 + 6;
    } while (uVar21 + (uVar21 == 0) != lVar17);
  }
  uVar16 = lVar9 + 7U & 0xfffffffffffffff8;
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_78;
  }
  uVar12 = (ulonglong)uVar5;
  *(short *)(puVar6 + uVar12 * 2) = (short)uVar16;
  uVar16 = uVar16 + 8;
  if (uVar5 < bVar2) {
    pbVar10 = (byte *)(uVar15 + uVar12 * 6 + 3);
    do {
      uVar16 = -(ulonglong)*pbVar10 & (uVar16 + *pbVar10) - 1;
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(short *)(puVar6 + uVar12 * 2 + 2) = (short)uVar16;
      uVar12 = uVar12 + 1;
      uVar16 = pbVar10[-1] + uVar16;
      pbVar10 = pbVar10 + 6;
    } while (bVar2 != uVar12);
  }
  uVar12 = *param_1;
  local_90 = uVar15;
  if (((ushort)param_1[1] < uVar18) || (*(ushort *)((longlong)param_1 + 10) < uVar16)) {
    uVar14 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 10) * 2);
    if (uVar16 < uVar14) {
      uVar16 = uVar14;
    }
    *(short *)((longlong)param_1 + 10) = (short)uVar16;
    uVar16 = FUN_14001cc68(uVar16 & 0xffff,uVar18);
    *param_1 = uVar16;
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
    uVar16 = uVar12;
  }
  bVar7 = *(char *)((longlong)param_1 + 0xc) + 1;
  *(byte *)((longlong)param_1 + 0xc) = bVar7;
  uVar14 = (ulonglong)bVar7;
  iVar8 = bVar7 - 1;
  if ((int)(uint)bVar3 < iVar8) {
    pbVar10 = (byte *)(uVar15 + (ulonglong)bVar7 * 6 + -10);
    uVar15 = (ulonglong)bVar7;
    do {
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      pvVar13 = (void *)(uVar12 + *(ushort *)(pbVar10 + -2));
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar6 + uVar15 * 2 + -2) + *param_1),pvVar13,
              (ulonglong)*pbVar10);
      uVar14 = uVar15 - 1;
      pbVar10 = pbVar10 + -6;
      lVar9 = uVar15 - 2;
      uVar15 = uVar14;
    } while ((longlong)uVar21 < lVar9);
    iVar8 = (int)uVar14 + -1;
    uVar16 = *param_1;
  }
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_78;
  }
  *(undefined8 *)(uVar16 + *(ushort *)(puVar6 + (longlong)iVar8 * 2)) = *local_88;
  if (1 < (int)uVar14) {
    uVar15 = (ulonglong)((int)uVar14 - 2);
    pbVar10 = (byte *)(local_90 + uVar15 * 6 + 2);
    do {
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      pvVar13 = (void *)(uVar12 + *(ushort *)(pbVar10 + -2));
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar6 + uVar15 * 2) + *param_1),pvVar13,
              (ulonglong)*pbVar10);
      pbVar10 = pbVar10 + -6;
      bVar22 = uVar15 != 0;
      uVar15 = uVar15 - 1;
    } while (bVar22);
  }
  uVar15 = *param_1;
  bVar3 = *(byte *)((longlong)param_1 + 0xc);
  uVar5 = (uint)bVar3;
  iVar8 = bVar3 - 1;
  uVar16 = uVar15;
  if ((int)uVar19 < iVar8) {
    lVar9 = (ulonglong)((uint)bVar3 + (uint)bVar3) * 3;
    uVar16 = (ulonglong)(uint)bVar3;
    do {
      *(undefined2 *)((uVar15 - 2) + lVar9) = *(undefined2 *)((local_90 - 8) + lVar9);
      *(undefined4 *)((uVar15 - 6) + lVar9) = *(undefined4 *)((local_90 - 0xc) + lVar9);
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(undefined2 *)((uVar15 - 6) + lVar9) = *(undefined2 *)(puVar6 + uVar16 * 2 + -2);
      uVar14 = uVar16 - 1;
      lVar9 = lVar9 + -6;
      lVar17 = uVar16 - 2;
      uVar16 = uVar14;
    } while ((longlong)uVar21 < lVar17);
    uVar5 = (uint)uVar14;
    iVar8 = uVar5 - 1;
    uVar16 = *param_1;
  }
  puVar1 = (ushort *)(uVar15 + (longlong)iVar8 * 6);
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_78;
  }
  uVar18 = *(ushort *)(puVar6 + (longlong)iVar8 * 2);
  *puVar1 = 0xffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (*param_1 <= uVar18 + uVar16) {
    *puVar1 = (short)(uVar18 + uVar16) - (short)*param_1;
  }
  puVar1[1] = 0x808;
  puVar1[2] = 0x100;
  if (1 < (int)uVar5) {
    uVar16 = (ulonglong)(uVar5 - 2);
    lVar9 = uVar16 * 6;
    do {
      *(undefined2 *)(uVar15 + 4 + lVar9) = *(undefined2 *)(local_90 + 4 + lVar9);
      *(undefined4 *)(uVar15 + lVar9) = *(undefined4 *)(local_90 + lVar9);
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(undefined2 *)(uVar15 + lVar9) = *(undefined2 *)(puVar6 + uVar16 * 2);
      lVar9 = lVar9 + -6;
      bVar22 = uVar16 != 0;
      uVar16 = uVar16 - 1;
    } while (bVar22);
  }
  if ((bool)(bVar2 & uVar12 != 0)) {
    FUN_1400020a8(uVar12);
  }
  iVar8 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar8 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar8 + 1U) {
    FUN_14086feca(param_1 + 3,iVar8);
  }
  lVar9 = (uVar20 >> 0x38) * 0x10;
  memmove((void *)(param_1[3] + lVar9 + 0x10),(void *)(param_1[3] + lVar9),
          (ulonglong)(iVar8 - uVar19) << 4);
  plVar4 = local_80;
  uVar15 = param_1[3];
  *(undefined1 **)(uVar15 + lVar9) = &LAB_1432df848;
  *(undefined **)(uVar15 + 8 + lVar9) = &DAT_1432df84c;
  lVar9 = 0;
  if ((ulonglong)*puVar1 != 0xffff) {
    lVar9 = *param_1 + (ulonglong)*puVar1;
  }
  *local_80 = (ulonglong)(byte)puVar1[2] + lVar9;
  *(undefined1 *)(local_80 + 1) = *(undefined1 *)((longlong)puVar1 + 5);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 140cb5a00 FUN_140cb5a00 body=103 status=ok
// SIG undefined FUN_140cb5a00(void)

ulonglong FUN_140cb5a00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140cb5a4a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140cb5a4a;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140cb5a68 FUN_140cb5a68 body=114 status=ok
// SIG undefined FUN_140cb5a68(void)

void FUN_140cb5a68(longlong param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    cVar1 = FUN_140903c78(*(undefined8 *)(param_1 + 0xa8));
    if (cVar1 != '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xc0);
      plVar3 = (longlong *)(param_1 + 0xe0);
      if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 0xd0);
      }
      uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x000140cb5ad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar2,param_1 + 0x98,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140cb5aec FUN_140cb5aec body=632 status=ok
// SIG undefined FUN_140cb5aec(void)

void FUN_140cb5aec(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if ((((*(int *)((longlong)param_1 + 0xec) == 0) ||
       (uVar2 = *(uint *)(param_1 + 0x1d), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0xec))) ||
      (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar3 = *plVar6, lVar3 == 0))))))
  goto LAB_140cb5c64;
  lVar9 = param_1[0x18];
  if (lVar9 == 0) {
    uVar5 = FUN_140067708();
    lVar9 = FUN_14477b664(uVar5);
    param_1[0x18] = lVar9;
  }
  if (param_1[0x19] == 0) {
    if ((lVar9 != 0) && (param_1[0x17] != 0)) {
      plVar6 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar6 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar4 == '\0')) {
        param_1[0x19] = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar6 + 0x110))(plVar6);
        lVar9 = FUN_144aff482(uVar5);
        param_1[0x19] = lVar9;
        if (lVar9 != 0) goto LAB_140cb5ba4;
      }
    }
    if ((*(char *)(param_1 + 0x15) != '\x01') || (*(longlong *)((longlong)param_1 + 0xac) == 0))
    goto LAB_140cb5c64;
  }
LAB_140cb5ba4:
  if ((longlong)*(int *)(param_1 + 0x1c) != 0) {
    lVar9 = param_1[0x1b];
    lVar8 = (longlong)*(int *)(param_1 + 0x1c) << 7;
    do {
      if ((*(int *)((longlong)param_1 + 0xf4) == 0) ||
         (uVar2 = *(uint *)(param_1 + 0x1e), (int)uVar2 < 0)) {
LAB_140cb5c49:
        local_68 = 0;
      }
      else {
        local_68 = 0;
        if ((int)uVar2 < DAT_14c9647dc) {
          puVar7 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((puVar7 == (undefined8 *)0x0) ||
              (*(int *)(puVar7 + 2) != *(int *)((longlong)param_1 + 0xf4))) ||
             ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_140cb5c49;
          local_68 = *puVar7;
        }
      }
      local_60 = 0;
      FUN_140cb5d65(&local_58,lVar3,param_1 + 0x15,lVar9);
      local_58 = 0;
      local_50 = 0xffffffffffffffff;
      lVar9 = lVar9 + 0x80;
      lVar8 = lVar8 + -0x80;
    } while (lVar8 != 0);
  }
LAB_140cb5c64:
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x1a] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1a] + 0x50));
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cb5d65 FUN_140cb5d65 body=1450 status=ok
// SIG undefined FUN_140cb5d65(void)

undefined8 *
FUN_140cb5d65(undefined8 *param_1,longlong param_2,undefined8 param_3,__uint64 *param_4,
             longlong param_5,longlong param_6)

{
  int *piVar1;
  float fVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  __uint64 _Var5;
  __uint64 _Var6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  int iVar13;
  __uint64 *p_Var14;
  __uint64 *p_Var15;
  __uint64 *p_Var16;
  __uint64 *p_Var17;
  bool bVar18;
  undefined1 auStack_178 [32];
  uint local_158;
  longlong local_148;
  undefined8 *local_140;
  __uint64 local_138 [13];
  undefined1 local_d0 [16];
  longlong *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong *local_a0;
  __uint64 *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_14026e798(&local_80,param_5);
  local_90 = local_80;
  local_88 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  lVar8 = FUN_140206ee8(param_3,&local_90);
  if (lVar8 != 0) {
    local_98 = (__uint64 *)0x0;
    if (local_80 == 0 || param_5 == 0) {
LAB_140cb5f17:
      p_Var17 = (__uint64 *)0x0;
      bVar18 = false;
    }
    else {
      local_b0 = *(undefined2 **)(param_5 + 0x18);
      FUN_1400021e4(&local_b0,&local_c0);
      plVar10 = local_c0;
      if (local_b8 == 0) {
        plVar10 = (longlong *)&DAT_149dfb77a;
      }
      FUN_140056680(&local_b0,plVar10);
      local_158 = local_158 & 0xffffff00;
      FUN_14084a140(local_80,&local_a0,&local_b0,0);
      FUN_1403c75f4(&local_98,&local_a0);
      if (local_a0 != (longlong *)0x0) {
        *(int *)(local_a0 + 0x21) = (int)local_a0[0x21] + -1;
        if (((int)local_a0[0x26] < 1) &&
           (FUN_1400847bc(local_a0 + 0x17,0), (int)local_a0[0x21] == 0)) {
          FUN_140087e46(local_a0);
          if (*local_a0 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_140cb5ed0;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_a0);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_a0);
          }
        }
LAB_140cb5ed0:
        local_a0 = (longlong *)0x0;
      }
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_c0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 == (__uint64 *)0x0) goto LAB_140cb5f17;
      bVar18 = *local_98 != 0xffffffffffffffff;
      p_Var17 = local_98;
    }
    if ((param_2 != 0) && (!bVar18)) {
      local_c0 = *(longlong **)(param_2 + 0x18);
      FUN_1400021e4(&local_c0,&local_b0);
      puVar11 = local_b0;
      if (local_a8 == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      FUN_140056680(local_d0,puVar11);
      FUN_14084feb6(&local_c0,param_2,local_d0);
      FUN_1403c75f4(&local_98,&local_c0);
      plVar10 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        *(int *)(local_c0 + 0x21) = (int)local_c0[0x21] + -1;
        if (((int)local_c0[0x26] < 1) && (FUN_1400847bc(local_c0 + 0x17,0), (int)plVar10[0x21] == 0)
           ) {
          FUN_140087e46(plVar10);
          if (*plVar10 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_140cb5fcc;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar10);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar10);
          }
        }
LAB_140cb5fcc:
        local_c0 = (longlong *)0x0;
      }
      p_Var17 = local_98;
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
        p_Var17 = local_98;
      }
    }
    if (p_Var17 != (__uint64 *)0x0) {
      p_Var14 = param_4;
      p_Var15 = local_138;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *p_Var15 = *p_Var14;
        p_Var14 = p_Var14 + 1;
        p_Var15 = p_Var15 + 1;
      }
      _Var5 = param_4[0xc];
      fVar2 = *(float *)((longlong)param_4 + 100);
      _Var6 = param_4[0xd];
      uVar3 = *(undefined1 *)((longlong)param_4 + 0x69);
      uVar4 = *(undefined8 *)((longlong)param_4 + 0x6c);
      p_Var14 = p_Var17 + 0x28;
      uVar7 = *(uint *)((longlong)p_Var17 + 0x1d4);
      iVar13 = 0;
      *(undefined4 *)(p_Var17 + 0x3a) = 0;
      local_148 = lVar8;
      if ((int)uVar7 < 0) {
        FUN_147f80112(p_Var14,0);
        iVar13 = (int)p_Var17[0x3a];
        uVar7 = *(uint *)((longlong)p_Var17 + 0x1d4);
      }
      *(undefined1 *)((longlong)p_Var17 + 0x26c) = 0;
      *(uint *)(p_Var17 + 0x3a) = iVar13 + 1U;
      local_140 = param_1;
      if (uVar7 < iVar13 + 1U) {
        FUN_140089f7a(p_Var14,iVar13);
      }
      if ((__uint64 *)p_Var17[0x38] != (__uint64 *)0x0) {
        p_Var14 = (__uint64 *)p_Var17[0x38];
      }
      lVar9 = (longlong)iVar13;
      lVar12 = lVar9 * 0x80;
      p_Var15 = local_138;
      p_Var16 = p_Var14 + lVar9 * 0x10;
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *p_Var16 = *p_Var15;
        p_Var15 = p_Var15 + 1;
        p_Var16 = p_Var16 + 1;
      }
      *(int *)(p_Var14 + lVar9 * 0x10 + 0xc) = (int)_Var5;
      *(float *)((longlong)p_Var14 + lVar12 + 100) = fVar2;
      *(char *)(p_Var14 + lVar9 * 0x10 + 0xd) = (char)_Var6;
      *(undefined1 *)((longlong)p_Var14 + lVar12 + 0x69) = uVar3;
      *(undefined8 *)((longlong)p_Var14 + lVar12 + 0x6c) = uVar4;
      if (fVar2 < 0.0) {
        *(int *)((longlong)(p_Var14 + lVar9 * 0x10) + 100) = (int)p_Var17[0x4d];
        *(undefined1 *)((longlong)p_Var17 + 0x26c) = 1;
      }
      FUN_1447906c0(p_Var17,0);
      lVar8 = local_148;
      if (((param_6 != 0) && (*local_98 != 0xffffffffffffffff)) && (DAT_14cb25ab0 == '\x01')) {
        AK::SoundEngine::SetSwitch(*(uint *)(param_6 + 0x48),*(uint *)(param_6 + 0x38),*local_98);
      }
      param_1 = local_140;
      local_158 = 0;
      FUN_14084a448(local_98,local_140,lVar8,param_5);
      p_Var17 = local_98;
      if (((local_98 != (__uint64 *)0x0) &&
          (*(int *)(local_98 + 0x21) = (int)local_98[0x21] + -1, (int)local_98[0x26] < 1)) &&
         (FUN_1400847bc(local_98 + 0x17,0), (int)p_Var17[0x21] == 0)) {
        FUN_140087e46(p_Var17);
        if (*p_Var17 != 0xffffffffffffffff) {
          if (DAT_14cb259f8 == 0) goto LAB_140cb619d;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),p_Var17);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),p_Var17);
        }
      }
      goto LAB_140cb619d;
    }
  }
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0;
LAB_140cb619d:
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_78 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140cb6310 FUN_140cb6310 body=3790 status=ok
// SIG undefined FUN_140cb6310(void)

void FUN_140cb6310(longlong param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  code *pcVar9;
  code *pcVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  code *pcVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  longlong *plVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  code *local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  code *local_110;
  undefined1 local_105;
  int local_104;
  ulonglong local_100;
  uint *local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar23 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar23 = (longlong *)0x0;
  }
  (**(code **)(*plVar23 + 0x58))(plVar23,param_1);
  FUN_14020684a(param_1);
  if (((*(byte *)(param_1 + 0x65) & 2) != 0) || ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0)) {
    if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (((*(int *)(param_1 + 0x3a4) != 0 || *(int *)(param_1 + 0x3a0) != 0) ||
      *(int *)(param_1 + 0x3a8) != 0) || *(int *)(param_1 + 0x3ac) != 0) {
    lVar15 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390);
    if ((param_1 != 0) && (lVar15 != 0)) {
      lVar16 = FUN_1406c3de4();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) {
        lVar16 = FUN_140cb7a18();
        if ((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30)) {
          uVar24 = *(uint *)(param_1 + 0xc);
          local_d8 = (code *)(ulonglong)uVar24;
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar16 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar16 = 0;
          }
          iVar13 = *(int *)(lVar16 + 0x10);
          if (*(int *)(lVar16 + 0x10) == 0) {
            LOCK();
            iVar13 = DAT_14c964868 + 1;
            UNLOCK();
            iVar21 = DAT_14c964868 + 1;
            bVar26 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar13;
            if (bVar26) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
            }
            LOCK();
            iVar13 = *(int *)(lVar16 + 0x10);
            bVar26 = iVar13 == 0;
            if (bVar26) {
              *(int *)(lVar16 + 0x10) = iVar21;
              iVar13 = 0;
            }
            UNLOCK();
            uVar24 = (uint)local_d8;
            if (bVar26) {
              iVar13 = iVar21;
            }
          }
          local_d8._0_4_ = uVar24;
          local_d8 = (code *)CONCAT44(iVar13,(uint)local_d8);
          if ((longlong)*(int *)(lVar15 + 0xf8) != 0) {
            lVar16 = *(longlong *)(lVar15 + 0xf0);
            lVar15 = (longlong)*(int *)(lVar15 + 0xf8) << 3;
            do {
              cVar11 = FUN_140cb71fa(lVar16,&local_d8);
              if (cVar11 != '\0') goto LAB_140cb6912;
              lVar16 = lVar16 + 8;
              lVar15 = lVar15 + -8;
            } while (lVar15 != 0);
          }
        }
      }
      else {
        lVar15 = FUN_14479d2ce(lVar15 + 0x28);
        if (lVar15 == param_1) goto LAB_140cb6912;
      }
    }
    puVar2 = (undefined4 *)(param_1 + 0x3a0);
    lVar15 = FUN_1447210f0(param_1);
    local_d8 = (code *)0x0;
    FUN_140185eae(lVar15 + 0x78,&local_d8,0);
    pcVar9 = local_d8;
    pcVar18 = local_d8 + 0x28;
    uVar12 = FUN_1447addd0(puVar2,0x10);
    iVar13 = FUN_14059fd90(pcVar18,uVar12);
    puVar8 = DAT_14c951640;
    if ((iVar13 == -1) ||
       (lVar15 = (longlong)iVar13 * 0x20 + *(longlong *)(pcVar9 + 0x28), lVar15 == 0)) {
LAB_140cb6a44:
      FUN_14058b40c(DAT_14c951640,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
      local_d8 = (code *)FUN_140cb8606();
      local_88 = (longlong *)0x0;
      local_58 = 0;
      local_c8 = 0;
      local_b8 = 0;
      local_a0 = 0;
      lStack_98 = 0;
      local_d0 = puVar8;
      uStack_c0 = 0x48;
      local_b0 = 0;
      uStack_a8 = 0;
      lVar15 = FUN_1402710dd(&local_d8);
      if (lStack_98 != 0) {
        plVar23 = local_88;
        if (local_88 == (longlong *)0x0) {
          plVar23 = local_78;
        }
        (**(code **)(*plVar23 + 0x10))();
      }
      uVar12 = *(undefined4 *)(param_1 + 0x3a4);
      uVar5 = *(undefined4 *)(param_1 + 0x3a8);
      uVar6 = *(undefined4 *)(param_1 + 0x3ac);
      *(undefined4 *)(lVar15 + 0x30) = *puVar2;
      *(undefined4 *)(lVar15 + 0x34) = uVar12;
      *(undefined4 *)(lVar15 + 0x38) = uVar5;
      *(undefined4 *)(lVar15 + 0x3c) = uVar6;
      if ((lVar15 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar15);
      }
      FUN_140cb86e4(pcVar18,&local_d8);
      puVar8 = local_d0;
      uVar12 = *(undefined4 *)(param_1 + 0x3a4);
      uVar5 = *(undefined4 *)(param_1 + 0x3a8);
      uVar6 = *(undefined4 *)(param_1 + 0x3ac);
      *local_d0 = *puVar2;
      local_d0[1] = uVar12;
      local_d0[2] = uVar5;
      local_d0[3] = uVar6;
      *(longlong *)(local_d0 + 4) = lVar15;
      if ((lVar15 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar15);
      }
      pcVar10 = local_d8;
      puVar8[6] = 0xffffffff;
      uVar12 = (uint)local_d8;
      uVar24 = FUN_1447addd0(puVar8,0x10);
      iVar13 = 1;
      if (*(int *)(pcVar9 + 0x30) - *(int *)(pcVar9 + 0x5c) == 1) {
        uVar14 = 1;
      }
      else {
        iVar21 = FUN_14059fd90(pcVar18,uVar24);
        if (iVar21 != -1) {
          lVar16 = *(longlong *)pcVar18;
          uVar12 = *puVar8;
          uVar5 = puVar8[1];
          uVar6 = puVar8[2];
          uVar7 = puVar8[3];
          *(undefined8 *)(lVar16 + 0x10 + (longlong)iVar21 * 0x20) = *(undefined8 *)(puVar8 + 4);
          puVar2 = (undefined4 *)(lVar16 + (longlong)iVar21 * 0x20);
          *puVar2 = uVar12;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          FUN_147459fa4(pcVar18,(ulonglong)pcVar10 & 0xffffffff);
          goto LAB_140cb6518;
        }
        uVar14 = *(int *)(pcVar9 + 0x30) - *(int *)(pcVar9 + 0x5c);
        if (3 < uVar14) {
          uVar17 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
          lVar16 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar16 & 0x1f);
        }
      }
      if (((int)uVar14 < 1) || (iVar13 <= *(int *)(pcVar9 + 0x70))) {
        uVar24 = *(int *)(pcVar9 + 0x70) - 1U & uVar24;
        puVar8[7] = uVar24;
        pcVar18 = *(code **)(pcVar9 + 0x68);
        if (*(code **)(pcVar9 + 0x68) == (code *)0x0) {
          pcVar18 = pcVar9 + 0x60;
        }
        puVar8[6] = *(undefined4 *)
                     (pcVar18 + ((longlong)*(int *)(pcVar9 + 0x70) - 1U & (longlong)(int)uVar24) * 4
                     );
        pcVar18 = *(code **)(pcVar9 + 0x68);
        if (*(code **)(pcVar9 + 0x68) == (code *)0x0) {
          pcVar18 = pcVar9 + 0x60;
        }
        *(undefined4 *)
         (pcVar18 + ((longlong)*(int *)(pcVar9 + 0x70) - 1U & (longlong)(int)uVar24) * 4) = uVar12;
      }
      else {
        *(int *)(pcVar9 + 0x70) = iVar13;
        FUN_140cb88ca(pcVar18);
      }
    }
    else {
      lVar15 = *(longlong *)(lVar15 + 0x10);
      if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) {
        FUN_1456cec3c(lVar15);
      }
      else if (lVar15 == 0) goto LAB_140cb6a44;
    }
LAB_140cb6518:
    FUN_1447210f0(param_1);
    puVar1 = (uint *)(lVar15 + 0x28);
    iVar13 = *(int *)(lVar15 + 0x2c);
    if (((iVar13 == 0) || (uVar24 = *puVar1, (int)uVar24 < 0)) || (DAT_14c9647dc <= (int)uVar24)) {
      local_e8 = 0;
      local_d8 = (code *)&local_e8;
      local_d0 = (undefined4 *)CONCAT71(local_d0._1_7_,1);
LAB_140cb69e0:
      iVar13 = *(int *)(lVar15 + 0xf8);
      if ((longlong)iVar13 != 0) {
        lVar16 = *(longlong *)(lVar15 + 0xf0);
        lVar19 = 0;
        do {
          uVar17 = *(ulonglong *)(lVar16 + lVar19);
          if (((uVar17 >> 0x20 != 0) && (uVar24 = (uint)uVar17, -1 < (int)uVar24)) &&
             (((((int)uVar24 < DAT_14c9647dc &&
                (((plVar23 = (longlong *)
                             ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0xd & 0x3fff8))),
                  plVar23 != (longlong *)0x0 && ((int)plVar23[2] == (int)(uVar17 >> 0x20))) &&
                 ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)))) &&
               (((lVar4 = *plVar23, lVar4 != 0 && ((*(byte *)(lVar4 + 0x65) & 2) == 0)) &&
                ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)))) &&
              (local_e0 = lVar4, cVar11 = FUN_140cb83a0(&local_d8,&local_e0), cVar11 == '\0'))))
          break;
          lVar19 = lVar19 + 8;
        } while ((longlong)iVar13 * 8 != lVar19);
      }
LAB_140cb69f0:
      if (local_e8 == 0) {
        if ((longlong)*(int *)(lVar15 + 0xf8) != 0) {
          lVar16 = 0;
          do {
            uVar17 = *(ulonglong *)(*(longlong *)(lVar15 + 0xf0) + lVar16);
            if (((uVar17 >> 0x20 != 0) && (uVar24 = (uint)uVar17, -1 < (int)uVar24)) &&
               ((((int)uVar24 < DAT_14c9647dc &&
                 (((plVar23 = (longlong *)
                              ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0xd & 0x3fff8))),
                   plVar23 != (longlong *)0x0 && ((int)plVar23[2] == (int)(uVar17 >> 0x20))) &&
                  ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)))) &&
                (((*plVar23 != 0 && (lVar19 = *(longlong *)(*plVar23 + 0x1c8), lVar19 != 0)) &&
                 ((*(byte *)(lVar19 + 0x9c) & 1) != 0)))))) goto LAB_140cb65c1;
            lVar16 = lVar16 + 8;
          } while ((longlong)*(int *)(lVar15 + 0xf8) * 8 != lVar16);
        }
        *(undefined4 *)(lVar15 + 0x40) = *(undefined4 *)(param_1 + 0x83c);
        *(undefined4 *)(lVar15 + 0x48) = *(undefined4 *)(param_1 + 0x844);
        *(undefined4 *)(lVar15 + 0x44) = *(undefined4 *)(param_1 + 0x840);
      }
    }
    else {
      plVar23 = (longlong *)
                ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
      if ((((plVar23 == (longlong *)0x0) || ((int)plVar23[2] != iVar13)) ||
          (((*(uint *)(plVar23 + 1) & 0x10200000) != 0 ||
           (((*(uint *)(plVar23 + 1) & 0x10200000) != 0 || (*plVar23 == 0)))))) ||
         ((lVar16 = *(longlong *)(*plVar23 + 0x1c8), lVar16 == 0 ||
          ((*(byte *)(lVar16 + 0x9c) & 1) == 0)))) {
        local_d8 = (code *)&local_e8;
        local_e8 = 0;
        local_d0 = (undefined4 *)CONCAT71(local_d0._1_7_,1);
        plVar23 = (longlong *)
                  ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
        if (((((plVar23 == (longlong *)0x0) || ((int)plVar23[2] != iVar13)) ||
             ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)) ||
            ((lVar16 = *plVar23, lVar16 == 0 || ((*(byte *)(lVar16 + 0x65) & 2) != 0)))) ||
           (((*(uint *)(lVar16 + 8) >> 0x1e & 1) != 0 ||
            (local_e0 = lVar16, cVar11 = FUN_140cb83a0(&local_d8), cVar11 != '\0'))))
        goto LAB_140cb69e0;
        goto LAB_140cb69f0;
      }
    }
LAB_140cb65c1:
    if (param_1 == 0) {
      local_d8._0_4_ = 0;
      iVar13 = 0;
      uVar24 = (uint)local_d8;
LAB_140cb6632:
      local_d8._0_4_ = uVar24;
      local_d8 = (code *)CONCAT44(iVar13,(uint)local_d8);
      lVar16 = *(longlong *)(lVar15 + 0xf0);
      uVar24 = 0;
      if ((longlong)*(int *)(lVar15 + 0xf8) == 0) {
        uVar17 = 0;
      }
      else {
        lVar19 = (longlong)*(int *)(lVar15 + 0xf8) << 3;
        do {
          cVar11 = FUN_140c008c4(lVar16,&local_d8);
          if (cVar11 != '\0') goto LAB_140cb686c;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + -8;
        } while (lVar19 != 0);
        uVar14 = *(uint *)(lVar15 + 0xf8);
        uVar17 = (ulonglong)uVar14;
        lVar16 = *(longlong *)(lVar15 + 0xf0);
        uVar24 = 0;
        if (0 < (int)uVar14) {
          local_f0 = (ulonglong)local_d8 >> 0x20;
          uVar22 = (uint)local_d8;
          local_104 = DAT_14c9647dc;
          local_105 = (DAT_14c9647dc <= (int)uVar22 || (int)uVar22 < 0) || local_f0 == 0;
          uVar24 = 0;
          do {
            uVar3 = (uVar14 >> 1) + uVar24;
            uVar20 = *(ulonglong *)(lVar16 + (ulonglong)uVar3 * 8);
            if ((uVar20 >> 0x20 == 0) || (uVar25 = (uint)uVar20, (int)uVar25 < 0)) {
LAB_140cb67f6:
              lVar19 = 0;
            }
            else {
              lVar19 = 0;
              if ((int)uVar25 < DAT_14c9647dc) {
                plVar23 = (longlong *)
                          ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0xd & 0x3fff8)));
                if (((plVar23 == (longlong *)0x0) || ((int)plVar23[2] != (int)(uVar20 >> 0x20))) ||
                   ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)) goto LAB_140cb67f6;
                lVar19 = *plVar23;
              }
            }
            if ((((DAT_14c9647dc > (int)uVar22 && (int)uVar22 >= 0) && local_f0 != 0) &&
                (plVar23 = (longlong *)
                           (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10 & 0x7fff) * 8)
                           + (ulonglong)((uVar22 & 0xffff) * 0x18)), plVar23 != (longlong *)0x0)) &&
               (((int)plVar23[2] == (int)((ulonglong)local_d8 >> 0x20) &&
                ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)))) {
              lVar4 = *plVar23;
              if ((lVar19 == 0) || (lVar4 == 0)) {
                if (lVar4 != 0) goto LAB_140cb67dd;
              }
              else {
                iVar21 = (int)*(undefined8 *)(lVar19 + 0x3dc);
                iVar13 = (int)*(undefined8 *)(lVar4 + 0x3dc);
                bVar26 = (int)((ulonglong)*(undefined8 *)(lVar19 + 0x3dc) >> 0x20) <
                         (int)((ulonglong)*(undefined8 *)(lVar4 + 0x3dc) >> 0x20);
                if (iVar21 != iVar13) {
                  bVar26 = iVar21 < iVar13;
                }
                if (bVar26) {
LAB_140cb67dd:
                  uVar24 = uVar3 + (uVar14 & 1);
                }
              }
            }
            bVar26 = 1 < uVar14;
            uVar14 = uVar14 >> 1;
            local_100 = uVar17;
            local_f8 = puVar1;
          } while (bVar26);
        }
      }
      plVar23 = (longlong *)(lVar15 + 0xf0);
      uVar14 = (int)uVar17 + 1;
      *(uint *)(lVar15 + 0xf8) = uVar14;
      if (*(uint *)(lVar15 + 0xfc) < uVar14) {
        FUN_140cb83f4(plVar23,uVar17);
        lVar16 = *plVar23;
      }
      uVar20 = (ulonglong)uVar24;
      memmove((void *)(lVar16 + uVar20 * 8 + 8),(void *)(lVar16 + uVar20 * 8),
              (ulonglong)((int)uVar17 - uVar24) << 3);
      *(code **)(*plVar23 + uVar20 * 8) = local_d8;
LAB_140cb686c:
      if (((((*(int *)(lVar15 + 0x2c) != 0) && (uVar24 = *puVar1, -1 < (int)uVar24)) &&
           ((int)uVar24 < DAT_14c9647dc)) &&
          ((lVar16 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8), lVar16 != 0 &&
           (*(int *)(lVar16 + 0x10) == *(int *)(lVar15 + 0x2c))))) &&
         ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)) {
        FUN_140cb7988(lVar15,param_1);
      }
    }
    else {
      lVar16 = FUN_1406c3de4();
      iVar13 = DAT_14c9647dc;
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) {
        uVar24 = *(uint *)(param_1 + 0xc);
        local_d8 = (code *)(ulonglong)uVar24;
        if ((int)uVar24 < DAT_14c9647dc) {
          lVar16 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        iVar13 = *(int *)(lVar16 + 0x10);
        if (*(int *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar13 = DAT_14c964868 + 1;
          UNLOCK();
          iVar21 = DAT_14c964868 + 1;
          bVar26 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar13;
          if (bVar26) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar21);
          }
          LOCK();
          iVar13 = *(int *)(lVar16 + 0x10);
          bVar26 = iVar13 == 0;
          if (bVar26) {
            *(int *)(lVar16 + 0x10) = iVar21;
            iVar13 = 0;
          }
          UNLOCK();
          uVar24 = (uint)local_d8;
          if (bVar26) {
            iVar13 = iVar21;
          }
        }
        goto LAB_140cb6632;
      }
      if (((*(int *)(lVar15 + 0x2c) == 0) || (uVar24 = *puVar1, (int)uVar24 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar24 ||
          (((lVar16 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8), lVar16 == 0 ||
            (*(int *)(lVar16 + 0x10) != *(int *)(lVar15 + 0x2c))) ||
           ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)))))) {
        uVar24 = *(uint *)(param_1 + 0xc);
        *puVar1 = uVar24;
        if ((int)uVar24 < iVar13) {
          lVar16 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        iVar13 = *(int *)(lVar16 + 0x10);
        if (*(int *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar13 = DAT_14c964868 + 1;
          UNLOCK();
          iVar21 = DAT_14c964868 + 1;
          bVar26 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar13;
          if (bVar26) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar21);
          }
          LOCK();
          iVar13 = *(int *)(lVar16 + 0x10);
          bVar26 = iVar13 == 0;
          if (bVar26) {
            *(int *)(lVar16 + 0x10) = iVar21;
            iVar13 = 0;
          }
          UNLOCK();
          if (bVar26) {
            iVar13 = iVar21;
          }
        }
        *(int *)(lVar15 + 0x2c) = iVar13;
        FUN_140cb7988(lVar15,param_1);
        iVar13 = *(int *)(lVar15 + 0xf8);
        if ((longlong)iVar13 != 0) {
          lVar16 = *(longlong *)(lVar15 + 0xf0);
          lVar19 = 0;
          do {
            uVar17 = *(ulonglong *)(lVar16 + lVar19);
            if ((((uVar17 >> 0x20 != 0) && (uVar24 = (uint)uVar17, -1 < (int)uVar24)) &&
                ((((int)uVar24 < DAT_14c9647dc &&
                  ((plVar23 = (longlong *)
                              ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0xd & 0x3fff8))),
                   plVar23 != (longlong *)0x0 && ((int)plVar23[2] == (int)(uVar17 >> 0x20))))) &&
                 ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)))) && (*plVar23 != 0)) {
              FUN_140cb7988(lVar15);
            }
            lVar19 = lVar19 + 8;
          } while ((longlong)iVar13 * 8 != lVar19);
        }
      }
      else {
        FUN_1406c3eca(puVar1,param_1);
      }
    }
    if (0 < *(int *)(param_1 + 0x598)) {
      lVar16 = 0;
      do {
        FUN_140cb7262(lVar15,*(undefined8 *)(*(longlong *)(param_1 + 0x590) + lVar16 * 8));
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(param_1 + 0x598));
    }
    iVar13 = *(int *)(param_1 + 0x5a8);
    if ((longlong)iVar13 != 0) {
      lVar16 = *(longlong *)(param_1 + 0x5a0);
      lVar19 = 0;
      do {
        FUN_140cb744e(lVar15,*(undefined8 *)(lVar16 + lVar19));
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar13 * 8 != lVar19);
    }
  }
LAB_140cb6912:
  lVar15 = FUN_1447210f0(param_1);
  if (lVar15 == 0) goto LAB_140cb698e;
  if (DAT_14caa7a28 == 0) {
    local_120 = &local_d8;
    local_d8 = FUN_1449e2820;
    local_110 = FUN_14081d0ea;
    local_118 = &LAB_14588a134;
    local_128 = &LAB_147473291;
    local_130 = FUN_1457f6a1e;
    local_138 = L"Engine";
    local_140 = 0;
    local_148 = 0x10000000;
    local_150 = 8;
    local_158 = 0x88;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSubsystem",&DAT_14caa7a28,&DAT_147473290);
  }
  lVar16 = DAT_14caa7a28;
  if ((DAT_14caa7a28 == 0) || (DAT_14c950c29 == '\0')) {
    if (DAT_14caa7a28 != 0) goto LAB_140cb6957;
LAB_140cb708b:
    lVar19 = 0;
  }
  else {
    FUN_1456cec3c(DAT_14caa7a28);
    if (DAT_14caa7a28 == 0) {
      local_120 = &local_d8;
      local_d8 = FUN_1449e2820;
      local_110 = FUN_14081d0ea;
      local_118 = &LAB_14588a134;
      local_128 = &LAB_147473291;
      local_130 = FUN_1457f6a1e;
      local_138 = L"Engine";
      local_140 = 0;
      local_148 = 0x10000000;
      local_150 = 8;
      local_158 = 0x88;
      FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSubsystem",&DAT_14caa7a28,&DAT_147473290);
      if (DAT_14caa7a28 == 0) goto LAB_140cb708b;
    }
LAB_140cb6957:
    if (*(int *)(lVar16 + 0x38) < *(int *)(DAT_14caa7a28 + 0x38)) goto LAB_140cb708b;
    lVar19 = 0;
    if (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(DAT_14caa7a28 + 0x38) * 8)
        == DAT_14caa7a28 + 0x30) {
      lVar19 = lVar16;
    }
  }
  lVar15 = FUN_1448a6f9c(lVar15 + 0x870,lVar19);
  if (lVar15 != 0) {
    FUN_140cb7afe(lVar15,param_1);
  }
LAB_140cb698e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_178);
}



// FUNCTION 140cb71fa FUN_140cb71fa body=104 status=ok
// SIG undefined FUN_140cb71fa(void)

ulonglong FUN_140cb71fa(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 == 0) ||
        ((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0)))) ||
       ((*(uint *)(lVar3 + 0x10) != uVar2 || ((*(uint *)(lVar3 + 8) & 0x10200000) != 0)))) {
      uVar4 = FUN_144729dda(param_2);
      uVar4 = uVar4 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 140cb7262 FUN_140cb7262 body=491 status=ok
// SIG undefined FUN_140cb7262(void)

void FUN_140cb7262(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x9c) & 1) != 0)) {
    uVar2 = (longlong)*(int *)(param_2 + 0x620) / (longlong)*(int *)(param_2 + 0x628);
    uVar3 = (longlong)*(int *)(param_2 + 0x624) / (longlong)*(int *)(param_2 + 0x628);
    local_40 = (uVar2 & 0xffffffff) + (uVar3 << 0x20);
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      iVar4 = (int)uVar3;
      uVar10 = (uint)(uVar3 >> 0xd) & 0x7ffff ^ (int)uVar2 - iVar4;
      uVar7 = uVar10 << 8 ^ (-0x61c88647 - iVar4) - uVar10;
      uVar12 = uVar7 >> 0xd ^ (iVar4 - uVar10) - uVar7;
      uVar10 = uVar12 >> 0xc ^ (uVar10 - uVar7) - uVar12;
      uVar11 = uVar10 << 0x10 ^ (uVar7 - uVar12) - uVar10;
      uVar7 = uVar11 >> 5 ^ (uVar12 - uVar10) - uVar11;
      uVar12 = uVar7 >> 3 ^ (uVar10 - uVar11) - uVar7;
      uVar10 = uVar12 << 10 ^ (uVar11 - uVar7) - uVar12;
      lVar9 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x90);
      }
      iVar4 = *(int *)(lVar9 + (ulonglong)
                               (*(int *)(param_1 + 0x98) - 1U &
                               (uVar10 >> 0xf ^ uVar7 - (uVar12 + uVar10))) * 4);
      if (iVar4 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x18);
          if (*plVar1 == local_40) {
            if ((plVar1 != (longlong *)0x0) && (plVar1[1] != 0)) goto LAB_140cb73e1;
            break;
          }
          iVar4 = (int)plVar1[2];
        } while (iVar4 != -1);
      }
    }
    local_30 = &local_40;
    local_28 = &local_38;
    FUN_140cb7e30((longlong *)(param_1 + 0x50),local_1c);
LAB_140cb73e1:
    iVar5 = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = (int)local_40;
    iVar4 = *(int *)(param_1 + 0x1a0);
    if (iVar6 <= *(int *)(param_1 + 0x1a0)) {
      iVar4 = iVar6;
    }
    iVar8 = *(int *)(param_1 + 0x1a4);
    if (iVar5 <= *(int *)(param_1 + 0x1a4)) {
      iVar8 = iVar5;
    }
    *(int *)(param_1 + 0x1a0) = iVar4;
    *(int *)(param_1 + 0x1a4) = iVar8;
    iVar4 = *(int *)(param_1 + 0x1a8);
    if (*(int *)(param_1 + 0x1a8) < iVar6) {
      iVar4 = iVar6;
    }
    *(int *)(param_1 + 0x1a8) = iVar4;
    iVar4 = *(int *)(param_1 + 0x1ac);
    if (*(int *)(param_1 + 0x1ac) < iVar5) {
      iVar4 = iVar5;
    }
    *(int *)(param_1 + 0x1ac) = iVar4;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb744e FUN_140cb744e body=1337 status=ok
// SIG undefined FUN_140cb744e(void)

void FUN_140cb744e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x9c) & 1) != 0)) {
    uVar14 = (longlong)*(int *)(param_2 + 0x630) / (longlong)*(int *)(param_2 + 0x638);
    uVar5 = (longlong)*(int *)(param_2 + 0x634) / (longlong)*(int *)(param_2 + 0x638);
    lVar9 = (uVar14 & 0xffffffff) + (uVar5 << 0x20);
    plVar1 = (longlong *)(param_1 + 0xa0);
    iVar18 = *(int *)(param_1 + 0xa8);
    iVar16 = *(int *)(param_1 + 0xd4);
    iVar22 = (int)uVar14;
    iVar23 = (int)uVar5;
    if (iVar18 != iVar16) {
      uVar11 = (uint)(uVar5 >> 0xd) & 0x7ffff ^ iVar22 - iVar23;
      uVar15 = uVar11 << 8 ^ (-0x61c88647 - iVar23) - uVar11;
      uVar19 = uVar15 >> 0xd ^ (iVar23 - uVar11) - uVar15;
      uVar21 = uVar19 >> 0xc ^ (uVar11 - uVar15) - uVar19;
      uVar11 = uVar21 << 0x10 ^ (uVar15 - uVar19) - uVar21;
      uVar15 = uVar11 >> 5 ^ (uVar19 - uVar21) - uVar11;
      uVar19 = uVar15 >> 3 ^ (uVar21 - uVar11) - uVar15;
      uVar11 = uVar19 << 10 ^ (uVar11 - uVar15) - uVar19;
      lVar20 = param_1 + 0xd8;
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        lVar20 = *(longlong *)(param_1 + 0xe0);
      }
      iVar8 = *(int *)(lVar20 + (ulonglong)
                                (*(int *)(param_1 + 0xe8) - 1U &
                                (uVar11 >> 0xf ^ uVar15 - (uVar19 + uVar11))) * 4);
      if (iVar8 != -1) {
        do {
          plVar2 = (longlong *)(*plVar1 + (longlong)iVar8 * 0x18);
          if (*plVar2 == lVar9) {
            if ((plVar2 != (longlong *)0x0) && (plVar2[1] != 0)) {
              return;
            }
            break;
          }
          iVar8 = (int)plVar2[2];
        } while (iVar8 != -1);
      }
    }
    if (iVar16 == 0) {
      *(int *)(param_1 + 0xa8) = iVar18 + 1;
      if (*(int *)(param_1 + 0xac) == iVar18) {
        FUN_14482b872(plVar1,iVar18);
      }
      iVar16 = *(int *)(param_1 + 200);
      if (iVar16 == 0) {
        iVar8 = -1;
      }
      else {
        iVar8 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar8 = iVar16 + -1;
        }
        iVar8 = iVar8 >> 5;
      }
      lVar13 = param_1 + 0xb0;
      iVar12 = iVar16 + 1;
      iVar17 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar17 = iVar16;
      }
      if (iVar17 >> 5 == iVar8) {
        *(int *)(param_1 + 200) = iVar12;
      }
      else {
        if (*(int *)(param_1 + 0xcc) <= iVar16) {
          if (iVar16 + 0x20U < 0xa0) {
            iVar12 = 0x80;
            iVar8 = iVar16;
          }
          else {
            uVar11 = iVar16 + 0x20U >> 5;
            if (*(int *)(param_1 + 0xcc) + 0x1fU < 0xa0) {
              uVar15 = 4;
              if (4 < uVar11) {
                uVar15 = uVar11;
              }
            }
            else {
              uVar15 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
            }
            uVar14 = FUN_144a3809e(uVar15 << 2,0);
            iVar8 = (int)(uVar14 >> 2);
            iVar12 = -0x20;
            if ((int)uVar11 <= iVar8) {
              iVar12 = iVar8 << 5;
            }
            iVar8 = *(int *)(param_1 + 200);
          }
          *(int *)(param_1 + 0xcc) = iVar12;
          FUN_1446efbd8(lVar13,iVar8);
          iVar12 = *(int *)(param_1 + 200) + 1;
        }
        iVar8 = iVar12 + 0x1f;
        if (-1 < iVar12) {
          iVar8 = iVar12;
        }
        *(int *)(param_1 + 200) = iVar12;
        if (iVar12 % 0x20 != 0) {
          lVar20 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar20 = lVar13;
          }
          bVar10 = -(char)(iVar12 % 0x20);
          *(uint *)(lVar20 + (longlong)(iVar8 >> 5) * 4) =
               (uint)(*(int *)(lVar20 + (longlong)(iVar8 >> 5) * 4) << (bVar10 & 0x1f)) >>
               (bVar10 & 0x1f);
        }
      }
      lVar20 = (longlong)iVar18;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar13 = *(longlong *)(param_1 + 0xc0);
      }
      bVar10 = (byte)iVar16 & 0x1f;
      puVar4 = (uint *)(lVar13 + (longlong)(iVar17 >> 5) * 4);
      *puVar4 = *puVar4 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
    }
    else {
      iVar18 = *(int *)(param_1 + 0xd0);
      lVar20 = (longlong)iVar18;
      iVar8 = *(int *)(*(longlong *)(param_1 + 0xa0) + 4 + lVar20 * 0x18);
      *(int *)(param_1 + 0xd0) = iVar8;
      *(int *)(param_1 + 0xd4) = iVar16 + -1;
      if (iVar16 + -1 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar8 * 0x18) = 0xffffffff;
      }
    }
    iVar16 = 1;
    lVar13 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar13 = *(longlong *)(param_1 + 0xc0);
    }
    iVar8 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar8 = iVar18;
    }
    puVar4 = (uint *)(lVar13 + (longlong)(iVar8 >> 5) * 4);
    *puVar4 = *puVar4 | 1 << ((byte)iVar18 & 0x1f);
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0xa0) + lVar20 * 0x18);
    *plVar2 = lVar9;
    plVar2[1] = param_2;
    *(undefined4 *)(plVar2 + 2) = 0xffffffff;
    uVar11 = (uint)((uVar5 & 0xffffffff) >> 0xd) ^ iVar22 - iVar23;
    uVar15 = uVar11 << 8 ^ (-0x61c88647 - iVar23) - uVar11;
    uVar19 = uVar15 >> 0xd ^ (iVar23 - uVar11) - uVar15;
    uVar21 = uVar19 >> 0xc ^ (uVar11 - uVar15) - uVar19;
    uVar11 = uVar21 << 0x10 ^ (uVar15 - uVar19) - uVar21;
    uVar19 = uVar11 >> 5 ^ (uVar19 - uVar21) - uVar11;
    uVar15 = uVar19 >> 3 ^ (uVar21 - uVar11) - uVar19;
    uVar11 = uVar15 << 10 ^ (uVar11 - uVar19) - uVar15;
    uVar11 = uVar11 >> 0xf ^ uVar19 - (uVar15 + uVar11);
    uVar15 = *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xd4);
    if ((uVar15 != 0) && (uVar15 != 1)) {
      lVar20 = param_1 + 0xd8;
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        lVar20 = *(longlong *)(param_1 + 0xe0);
      }
      iVar22 = *(int *)(lVar20 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & uVar11) * 4);
      if (iVar22 != -1) {
        do {
          plVar3 = (longlong *)(*plVar1 + (longlong)iVar22 * 0x18);
          if (*plVar3 == lVar9) {
            uVar6 = *(undefined4 *)((longlong)plVar2 + 4);
            lVar9 = plVar2[1];
            uVar7 = *(undefined4 *)((longlong)plVar2 + 0xc);
            *(int *)plVar3 = (int)*plVar2;
            *(undefined4 *)((longlong)plVar3 + 4) = uVar6;
            *(int *)(plVar3 + 1) = (int)lVar9;
            *(undefined4 *)((longlong)plVar3 + 0xc) = uVar7;
            FUN_140c00b90(plVar1,iVar18);
            return;
          }
          iVar22 = (int)plVar3[2];
        } while (iVar22 != -1);
      }
    }
    if (3 < uVar15) {
      uVar14 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar9 & 0x1f);
    }
    if ((0 < (int)uVar15) && (*(int *)(param_1 + 0xe8) < iVar16)) {
      *(int *)(param_1 + 0xe8) = iVar16;
      FUN_140c014a2(plVar1);
      return;
    }
    uVar11 = *(int *)(param_1 + 0xe8) - 1U & uVar11;
    *(uint *)((longlong)plVar2 + 0x14) = uVar11;
    lVar9 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar9 = param_1 + 0xd8;
    }
    *(undefined4 *)(plVar2 + 2) =
         *(undefined4 *)
          (lVar9 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)(int)uVar11) * 4);
    lVar9 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar9 = param_1 + 0xd8;
    }
    *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)(int)uVar11) * 4) = iVar18
    ;
  }
  return;
}



// FUNCTION 140cb7988 FUN_140cb7988 body=143 status=ok
// SIG undefined FUN_140cb7988(void)

void FUN_140cb7988(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140cb79d5;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x2c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar3;
      goto LAB_140cb79d5;
    }
  }
  uVar4 = 0;
LAB_140cb79d5:
  if (param_2 != 0) {
    lVar2 = FUN_140cb7a18();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      FUN_140cb81c0(param_2,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 140cb7a18 FUN_140cb7a18 body=228 status=ok
// SIG undefined FUN_140cb7a18(void)

longlong FUN_140cb7a18(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1cb8 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1432469d6;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587d9ba;
    local_38 = &LAB_1474521db;
    local_40 = FUN_140e0d2e4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x920;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeStreamingProxy",&DAT_14caa1cb8,&DAT_1474521da);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1cb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb7afe FUN_140cb7afe body=193 status=ok
// SIG undefined FUN_140cb7afe(void)

void FUN_140cb7afe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    FUN_140cb7bc0(param_1 + 0x58,&local_20);
    if (param_2 == 0) goto LAB_140cb7b5f;
  }
  else {
    FUN_1456cec3c(param_2);
    FUN_140cb7bc0(param_1 + 0x58,&local_20);
  }
  lVar1 = FUN_1406c3de4();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      == lVar1 + 0x30)) {
    local_28 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_140cb8556(param_1 + 0x48,&local_28);
  }
LAB_140cb7b5f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb7bc0 FUN_140cb7bc0 body=176 status=ok
// SIG undefined FUN_140cb7bc0(void)

ulonglong FUN_140cb7bc0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 3;
    uVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar5 * 8) == lVar3) {
        if ((int)uVar5 != -1) goto LAB_140cb7c36;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_145793384(param_1,uVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_140cb7c36:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140cb7c70 FUN_140cb7c70 body=448 status=ok
// SIG undefined FUN_140cb7c70(void)

void FUN_140cb7c70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if ((longlong)*(int *)(param_1 + 0x598) == 0) {
    return;
  }
  if (DAT_14c760e74 == 0) {
    plVar9 = *(longlong **)(param_1 + 0x590);
    plVar8 = plVar9 + *(int *)(param_1 + 0x598);
    cVar3 = '\0';
  }
  else {
    if (*(int *)(param_1 + 0x5d0) == 0) {
LAB_140cb7cde:
      cVar3 = '\0';
    }
    else {
      iVar5 = (**(code **)(*DAT_14cb0d2b0 + 0x2b8))();
      cVar3 = FUN_14479fe53(*(undefined2 *)(&DAT_14ca85070 + (longlong)iVar5 * 2),1,1);
      if (cVar3 == '\0') goto LAB_140cb7cde;
      cVar3 = FUN_1432469ee(param_1);
    }
    if ((longlong)*(int *)(param_1 + 0x598) == 0) goto LAB_140cb7d88;
    plVar9 = *(longlong **)(param_1 + 0x590);
    plVar8 = plVar9 + *(int *)(param_1 + 0x598);
  }
  do {
    lVar1 = *plVar9;
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0x721) != cVar3)) &&
       (*(char *)(lVar1 + 0x721) = cVar3, (~*(byte *)(lVar1 + 0x9c) & 3) == 0)) {
      bVar4 = *(byte *)(lVar1 + 0x9d);
      if ((bVar4 & 1) != 0) {
        if ((*(longlong *)(lVar1 + 0xb0) != 0) || (lVar6 = FUN_1448abda6(lVar1), lVar6 != 0))
        goto LAB_140cb7d7f;
        bVar4 = *(byte *)(lVar1 + 0x9d);
      }
      *(byte *)(lVar1 + 0x9d) = bVar4 | 1;
      FUN_1401057d4(lVar1);
      FUN_14010586c(&DAT_14cad0140,lVar1);
    }
LAB_140cb7d7f:
    plVar9 = plVar9 + 1;
  } while (plVar9 != plVar8);
LAB_140cb7d88:
  iVar5 = *(int *)(param_1 + 0x5d0);
  if ((longlong)iVar5 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x5c8);
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar6);
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0x728) != cVar3)) &&
         (*(char *)(lVar2 + 0x728) = cVar3, (~*(byte *)(lVar2 + 0x9c) & 3) == 0)) {
        bVar4 = *(byte *)(lVar2 + 0x9d);
        if ((bVar4 & 1) != 0) {
          if ((*(longlong *)(lVar2 + 0xb0) != 0) || (lVar7 = FUN_1448abda6(lVar2), lVar7 != 0))
          goto LAB_140cb7dbf;
          bVar4 = *(byte *)(lVar2 + 0x9d);
        }
        *(byte *)(lVar2 + 0x9d) = bVar4 | 1;
        FUN_1401057d4(lVar2);
        FUN_14010586c(&DAT_14cad0140,lVar2);
      }
LAB_140cb7dbf:
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar5 * 8 != lVar6);
  }
  return;
}



// FUNCTION 140cb7e30 FUN_140cb7e30 body=912 status=ok
// SIG undefined FUN_140cb7e30(void)

int * FUN_140cb7e30(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_14482b872(param_1,iVar13);
    }
    iVar10 = (int)param_1[5];
    if (iVar10 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar4 = iVar10 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar6 = param_1 + 2;
    iVar8 = iVar10 + 1;
    iVar12 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar12 = iVar10;
    }
    if (iVar12 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
        if (iVar10 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar4 = iVar10;
        }
        else {
          uVar14 = iVar10 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar14) {
              uVar16 = uVar14;
            }
          }
          else {
            uVar16 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar16 << 2,0);
          iVar4 = (int)(uVar9 >> 2);
          iVar8 = -0x20;
          if ((int)uVar14 <= iVar4) {
            iVar8 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar6,iVar4);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar4 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar4 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar11 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar11 = plVar6;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar11 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar11 + (longlong)(iVar4 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar10 & 0x1f;
    puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar5 = (longlong)iVar13;
    iVar10 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar10;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  iVar10 = 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar4 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar4 = iVar13;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  plVar6 = (longlong *)(*param_1 + lVar5 * 0x18);
  plVar11 = (longlong *)param_3[1];
  lVar5 = *(longlong *)*param_3;
  *plVar6 = lVar5;
  plVar6[1] = *plVar11;
  *(undefined4 *)(plVar6 + 2) = 0xffffffff;
  uVar16 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar14 = uVar16 >> 0xd ^ (int)lVar5 - uVar16;
  uVar15 = uVar14 << 8 ^ (-0x61c88647 - uVar14) - uVar16;
  uVar16 = uVar15 >> 0xd ^ (uVar16 - uVar14) - uVar15;
  uVar14 = uVar16 >> 0xc ^ (uVar14 - uVar15) - uVar16;
  uVar17 = uVar14 << 0x10 ^ (uVar15 - uVar16) - uVar14;
  uVar16 = uVar17 >> 5 ^ (uVar16 - uVar14) - uVar17;
  uVar15 = uVar16 >> 3 ^ (uVar14 - uVar17) - uVar16;
  uVar14 = uVar15 << 10 ^ (uVar17 - uVar16) - uVar15;
  uVar14 = uVar14 >> 0xf ^ uVar16 - (uVar15 + uVar14);
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar16 != 0) && (uVar16 != 1)) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
    if (iVar4 != -1) {
      do {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*plVar11 == lVar5) {
          uVar2 = *(undefined4 *)((longlong)plVar6 + 4);
          lVar5 = plVar6[1];
          uVar3 = *(undefined4 *)((longlong)plVar6 + 0xc);
          *(int *)plVar11 = (int)*plVar6;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar2;
          *(int *)(plVar11 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar3;
          FUN_140c01128(param_1,iVar13);
          goto LAB_140cb8077;
        }
        iVar4 = (int)plVar11[2];
      } while (iVar4 != -1);
    }
  }
  if (3 < uVar16) {
    uVar9 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar5 & 0x1f);
  }
  iVar4 = iVar13;
  if (((int)uVar16 < 1) || (iVar10 <= (int)param_1[9])) {
    uVar14 = (int)param_1[9] - 1U & uVar14;
    *(uint *)((longlong)plVar6 + 0x14) = uVar14;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(plVar6 + 2) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    FUN_140c0119a(param_1);
  }
LAB_140cb8077:
  *param_2 = iVar4;
  return param_2;
}



// FUNCTION 140cb81c0 FUN_140cb81c0 body=479 status=ok
// SIG undefined FUN_140cb81c0(void)

void FUN_140cb81c0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (uint *)(param_1 + 0x8a8);
  if (param_2 == 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x8b0) = 0;
    *(undefined8 *)(param_1 + 0x8b8) = 0;
    *(undefined4 *)(param_1 + 0x8c8) = 0;
    if (*(int *)(param_1 + 0x8cc) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x8c0),0);
    }
    puVar3 = *(undefined2 **)(param_1 + 0x8c0);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48);
    *(undefined4 *)(param_1 + 0x8b0) = local_48;
    *(undefined4 *)(param_1 + 0x8b4) = uStack_44;
    *(undefined4 *)(param_1 + 0x8b8) = uStack_40;
    *(undefined4 *)(param_1 + 0x8bc) = uStack_3c;
    if ((undefined4 *)(param_1 + 0x8b0) == &local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x8c0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x8c0) = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x8c8) = local_30;
      *(undefined4 *)(param_1 + 0x8cc) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(param_2 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        *(undefined8 *)(param_1 + 0x8a8) = 0;
        goto LAB_140cb8296;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
    *(int *)(param_1 + 0x8ac) = iVar5;
  }
LAB_140cb8296:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cb83a0 FUN_140cb83a0 body=84 status=ok
// SIG undefined FUN_140cb83a0(void)

undefined8 FUN_140cb83a0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(longlong *)(lVar1 + 0x1c8) == 0) {
      return 1;
    }
    if ((*(byte *)(*(longlong *)(lVar1 + 0x1c8) + 0x9c) & 1) == 0) {
      return 1;
    }
  }
  lVar2 = FUN_1447210f0(lVar1);
  uVar3 = 1;
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) == *(longlong *)(lVar1 + 0x20))) {
    *(longlong *)*param_1 = lVar1;
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 140cb83f4 FUN_140cb83f4 body=353 status=ok
// SIG undefined FUN_140cb83f4(void)

void FUN_140cb83f4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140cb8479;
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
LAB_140cb8479:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140cb8556 FUN_140cb8556 body=176 status=ok
// SIG undefined FUN_140cb8556(void)

ulonglong FUN_140cb8556(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 3;
    uVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar5 * 8) == lVar3) {
        if ((int)uVar5 != -1) goto LAB_140cb85cc;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_14579340a(param_1,uVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_140cb85cc:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140cb8606 FUN_140cb8606 body=221 status=ok
// SIG undefined FUN_140cb8606(void)

longlong FUN_140cb8606(void)

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
  if (DAT_14caa63f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147461b4d;
    local_40 = &LAB_14117a6f4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x200;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeInfo",&DAT_14caa63f8,&DAT_147461b4c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa63f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb86e4 FUN_140cb86e4 body=485 status=ok
// SIG undefined FUN_140cb86e4(void)

int * FUN_140cb86e4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
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
      FUN_1447711aa(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140cb88ca FUN_140cb88ca body=596 status=ok
// SIG undefined FUN_140cb88ca(void)

void FUN_140cb88ca(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar11 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar12 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar13 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar5 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar10 = *param_1;
        lVar9 = (longlong)iVar7 * 0x20;
        local_74 = iVar5;
        iVar5 = FUN_1447addd0(lVar9 + lVar10,0x10);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar10 + 0x1c + lVar9) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(undefined4 *)(lVar10 + 0x18 + lVar9) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar11 = ~(uint)uVar12 & uVar11;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar2 = (int)plVar1[3];
        lVar10 = (longlong)iVar13;
        uVar4 = *(uint *)((longlong)plVar8 + lVar10 * 4) & uVar11;
        iVar5 = local_74;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar13) {
            iVar3 = iVar13;
          }
          if (iVar7 <= iVar13) break;
          lVar9 = 0;
          while( true ) {
            iVar5 = iVar5 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar4 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar3 - lVar10 == lVar9) goto LAB_140cb8ae1;
          }
          iVar13 = iVar13 + (int)lVar9 + 1;
          uVar11 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_140cb8ae1:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cb8b20 FUN_140cb8b20 body=114 status=ok
// SIG undefined FUN_140cb8b20(void)

undefined8 *** FUN_140cb8b20(undefined8 param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 ***local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  ppppuVar1 = &local_20;
  local_28 = param_2;
  FUN_140cb8b94(param_1,ppppuVar1,1 << ((byte)DAT_14cab328c & 0x1f));
  if ((local_18 == '\x01') || (local_18 == '\x02')) {
    ppppuVar1 = (undefined8 ****)local_20;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *ppppuVar1;
}



// FUNCTION 140cb8b94 FUN_140cb8b94 body=1302 status=ok
// SIG undefined FUN_140cb8b94(void)

longlong * FUN_140cb8b94(ulonglong *param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  ushort *puVar1;
  byte bVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  byte *pbVar10;
  ushort uVar11;
  ulonglong uVar12;
  void *pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ushort uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_b8 [36];
  undefined4 local_94;
  ulonglong local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = (uint)param_1[2] | param_3;
  *(uint *)(param_1 + 2) = uVar4;
  uVar4 = param_3 - 1 & uVar4;
  uVar14 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar15 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  uVar19 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar19 >> 0x38;
  uVar14 = *param_1;
  bVar7 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar7 == 0) {
    uVar17 = 8;
  }
  else {
    uVar17 = 8;
    lVar9 = 0;
    do {
      uVar11 = (ushort)*(byte *)(uVar14 + 3 + lVar9);
      if (uVar17 < uVar11) {
        uVar17 = uVar11;
      }
      lVar9 = lVar9 + 6;
    } while ((ulonglong)((uint)bVar7 + (uint)bVar7) * 3 != lVar9);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  local_88 = param_4;
  local_80 = param_2;
  FUN_14086fe48(local_78,bVar7 + 1,CONCAT71((int7)(uVar15 >> 8),1));
  lVar9 = (ulonglong)((uint)bVar7 * 2 + 2) * 3;
  uVar4 = 0;
  bVar2 = (byte)(uVar19 >> 0x38);
  uVar18 = (uint)bVar2;
  if (uVar20 != 0) {
    uVar4 = (uint)bVar2 + (uint)(uVar18 == 0);
    pbVar10 = (byte *)(uVar14 + 3);
    lVar16 = 0;
    do {
      uVar15 = -(ulonglong)*pbVar10 & (lVar9 + (ulonglong)*pbVar10) - 1;
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(short *)(puVar6 + lVar16 * 2) = (short)uVar15;
      lVar9 = pbVar10[-1] + uVar15;
      lVar16 = lVar16 + 1;
      pbVar10 = pbVar10 + 6;
    } while (uVar20 + (uVar20 == 0) != lVar16);
  }
  uVar15 = lVar9 + 7U & 0xfffffffffffffff8;
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_78;
  }
  uVar12 = (ulonglong)uVar4;
  *(short *)(puVar6 + uVar12 * 2) = (short)uVar15;
  uVar15 = uVar15 + 8;
  if (uVar4 < bVar7) {
    pbVar10 = (byte *)(uVar14 + uVar12 * 6 + 3);
    do {
      uVar15 = -(ulonglong)*pbVar10 & (uVar15 + *pbVar10) - 1;
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(short *)(puVar6 + uVar12 * 2 + 2) = (short)uVar15;
      uVar12 = uVar12 + 1;
      uVar15 = pbVar10[-1] + uVar15;
      pbVar10 = pbVar10 + 6;
    } while (bVar7 != uVar12);
  }
  uVar12 = *param_1;
  local_90 = uVar14;
  if (((ushort)param_1[1] < uVar17) || (*(ushort *)((longlong)param_1 + 10) < uVar15)) {
    uVar5 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 10) * 2);
    if (uVar15 < uVar5) {
      uVar15 = uVar5;
    }
    *(short *)((longlong)param_1 + 10) = (short)uVar15;
    uVar15 = uVar15 & 0xffff;
    uVar5 = FUN_14001cc68(uVar15,uVar17);
    *param_1 = uVar5;
    local_94 = (undefined4)CONCAT71((int7)(uVar15 >> 8),1);
  }
  else {
    local_94 = 0;
    uVar5 = uVar12;
  }
  bVar7 = *(char *)((longlong)param_1 + 0xc) + 1;
  *(byte *)((longlong)param_1 + 0xc) = bVar7;
  uVar15 = (ulonglong)bVar7;
  iVar8 = bVar7 - 1;
  if ((int)(uint)bVar2 < iVar8) {
    pbVar10 = (byte *)(uVar14 + (ulonglong)bVar7 * 6 + -10);
    uVar14 = (ulonglong)bVar7;
    do {
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      pvVar13 = (void *)(uVar12 + *(ushort *)(pbVar10 + -2));
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar6 + uVar14 * 2 + -2) + *param_1),pvVar13,
              (ulonglong)*pbVar10);
      uVar15 = uVar14 - 1;
      pbVar10 = pbVar10 + -6;
      lVar9 = uVar14 - 2;
      uVar14 = uVar15;
    } while ((longlong)uVar20 < lVar9);
    iVar8 = (int)uVar15 + -1;
    uVar5 = *param_1;
  }
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_78;
  }
  *(undefined8 *)(uVar5 + *(ushort *)(puVar6 + (longlong)iVar8 * 2)) = *local_88;
  if (1 < (int)uVar15) {
    uVar14 = (ulonglong)((int)uVar15 - 2);
    pbVar10 = (byte *)(local_90 + uVar14 * 6 + 2);
    do {
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      pvVar13 = (void *)(uVar12 + *(ushort *)(pbVar10 + -2));
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar6 + uVar14 * 2) + *param_1),pvVar13,
              (ulonglong)*pbVar10);
      pbVar10 = pbVar10 + -6;
      bVar21 = uVar14 != 0;
      uVar14 = uVar14 - 1;
    } while (bVar21);
  }
  uVar14 = *param_1;
  bVar7 = *(byte *)((longlong)param_1 + 0xc);
  uVar4 = (uint)bVar7;
  iVar8 = bVar7 - 1;
  uVar15 = uVar14;
  if ((int)uVar18 < iVar8) {
    lVar9 = (ulonglong)((uint)bVar7 + (uint)bVar7) * 3;
    uVar15 = (ulonglong)(uint)bVar7;
    do {
      *(undefined2 *)((uVar14 - 2) + lVar9) = *(undefined2 *)((local_90 - 8) + lVar9);
      *(undefined4 *)((uVar14 - 6) + lVar9) = *(undefined4 *)((local_90 - 0xc) + lVar9);
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(undefined2 *)((uVar14 - 6) + lVar9) = *(undefined2 *)(puVar6 + uVar15 * 2 + -2);
      uVar5 = uVar15 - 1;
      lVar9 = lVar9 + -6;
      lVar16 = uVar15 - 2;
      uVar15 = uVar5;
    } while ((longlong)uVar20 < lVar16);
    uVar4 = (uint)uVar5;
    iVar8 = uVar4 - 1;
    uVar15 = *param_1;
  }
  puVar1 = (ushort *)(uVar14 + (longlong)iVar8 * 6);
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_78;
  }
  uVar17 = *(ushort *)(puVar6 + (longlong)iVar8 * 2);
  *puVar1 = 0xffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (*param_1 <= uVar17 + uVar15) {
    *puVar1 = (short)(uVar17 + uVar15) - (short)*param_1;
  }
  puVar1[1] = 0x808;
  puVar1[2] = 0x100;
  if (1 < (int)uVar4) {
    uVar15 = (ulonglong)(uVar4 - 2);
    lVar9 = uVar15 * 6;
    do {
      *(undefined2 *)(uVar14 + 4 + lVar9) = *(undefined2 *)(local_90 + 4 + lVar9);
      *(undefined4 *)(uVar14 + lVar9) = *(undefined4 *)(local_90 + lVar9);
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(undefined2 *)(uVar14 + lVar9) = *(undefined2 *)(puVar6 + uVar15 * 2);
      lVar9 = lVar9 + -6;
      bVar21 = uVar15 != 0;
      uVar15 = uVar15 - 1;
    } while (bVar21);
  }
  if (((byte)local_94 & uVar12 != 0) == 1) {
    FUN_1400020a8(uVar12);
  }
  iVar8 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar8 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar8 + 1U) {
    FUN_14086feca(param_1 + 3,iVar8);
  }
  lVar9 = (uVar19 >> 0x38) * 0x10;
  memmove((void *)(param_1[3] + lVar9 + 0x10),(void *)(param_1[3] + lVar9),
          (ulonglong)(iVar8 - uVar18) << 4);
  plVar3 = local_80;
  uVar14 = param_1[3];
  *(undefined1 **)(uVar14 + lVar9) = &LAB_1432df852;
  *(undefined **)(uVar14 + 8 + lVar9) = &DAT_1432df856;
  lVar9 = 0;
  if ((ulonglong)*puVar1 != 0xffff) {
    lVar9 = *param_1 + (ulonglong)*puVar1;
  }
  *local_80 = (ulonglong)(byte)puVar1[2] + lVar9;
  *(undefined1 *)(local_80 + 1) = *(undefined1 *)((longlong)puVar1 + 5);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 140cb90ac FUN_140cb90ac body=78 status=ok
// SIG undefined FUN_140cb90ac(void)

void FUN_140cb90ac(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140cb9188(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140cb90c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_140cb9134(&DAT_14cb7d418);
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b401600;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  return;
}



// FUNCTION 140cb90fa FUN_140cb90fa body=57 status=ok
// SIG undefined FUN_140cb90fa(void)

void FUN_140cb90fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cb9134(&DAT_14cb7d418);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b401600;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



// FUNCTION 140cb9134 FUN_140cb9134 body=84 status=ok
// SIG undefined FUN_140cb9134(void)

void FUN_140cb9134(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x300,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 6;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140cb9188 FUN_140cb9188 body=191 status=ok
// SIG undefined FUN_140cb9188(void)

longlong FUN_140cb9188(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140cb9248();
  lVar3 = *param_1;
  if (DAT_14cb7d3c8 != DAT_14cb7d3f4) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb7d3f8;
    if (DAT_14cb7d400 != (undefined *)0x0) {
      puVar7 = DAT_14cb7d400;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb7d408 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb7d3c0 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb7d3b8;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140cb9248 FUN_140cb9248 body=152 status=ok
// SIG undefined FUN_140cb9248(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cb9248(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7d410) {
    FUN_144b3d300(&DAT_14cb7d410);
    if (DAT_14cb7d410 == -1) {
      DAT_14cb7d3e0 = 0;
      DAT_14cb7d3e8 = 0;
      DAT_14cb7d3c0 = 0;
      _DAT_14cb7d3c8 = 0;
      _DAT_14cb7d3ec = 0xffffffff00000080;
      DAT_14cb7d3f4 = 0;
      DAT_14cb7d400 = 0;
      DAT_14cb7d408 = 0;
      atexit(FUN_143d46cba);
      _Init_thread_footer(&DAT_14cb7d410);
      return;
    }
  }
  return;
}



// FUNCTION 140cb92ee FUN_140cb92ee body=31 status=ok
// SIG undefined FUN_140cb92ee(void)

undefined8 FUN_140cb92ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cb930e FUN_140cb930e body=3109 status=ok
// SIG undefined FUN_140cb930e(void)

ulonglong FUN_140cb930e(longlong param_1)

{
  float fVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  double *pdVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  ulonglong *puVar18;
  int *piVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  ulonglong local_150;
  longlong local_148;
  longlong *local_140;
  ulonglong local_138;
  undefined8 local_130;
  longlong local_128;
  longlong *local_120;
  ulonglong *local_118;
  ulonglong *local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong *local_e8;
  undefined8 uStack_e0;
  uint local_d0;
  uint uStack_cc;
  undefined8 local_c8;
  char local_c0 [16];
  undefined4 local_b0 [6];
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar5 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x180))(param_1 + -0x28);
  uVar6 = 0;
  if (lVar5 != 0) {
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar5 + 0x6d0);
    iVar21 = *(int *)(param_1 + 0xb8);
    if (iVar21 != *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44)) {
      FUN_140fd7786();
      iVar21 = *(int *)(param_1 + 0xb8);
    }
    uVar9 = *(uint *)(param_1 + 0x110);
    uVar4 = iVar21 - 1U;
    if ((int)uVar9 < (int)(iVar21 - 1U)) {
      uVar4 = uVar9;
    }
    uVar25 = 0;
    if (0 < (int)uVar4) {
      uVar25 = uVar4;
    }
    *(uint *)(param_1 + 0x110) = uVar25;
    local_e8 = (ulonglong *)0x0;
    uStack_e0 = 0;
    if (0 < *(int *)(lVar5 + 0x238)) {
      lVar12 = 0;
      do {
        iVar21 = *(int *)(*(longlong *)(lVar5 + 0x230) + 4 + lVar12 * 8);
        if ((((iVar21 != 0) &&
             (uVar4 = *(uint *)(*(longlong *)(lVar5 + 0x230) + lVar12 * 8), -1 < (int)uVar4)) &&
            ((int)uVar4 < DAT_14c9647dc)) &&
           ((((plVar10 = (longlong *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
              plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar21)) &&
             (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
              ((plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0 &&
               (cVar3 = (**(code **)(*plVar10 + 0x6c8))(plVar10), cVar3 != '\0')))))) &&
            (plVar10[0x7a] != 0)))) {
          lVar22 = (longlong)(int)uStack_e0;
          uVar4 = (int)uStack_e0 + 1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar4);
          if (uStack_e0._4_4_ < uVar4) {
            FUN_140cba038(&local_e8);
          }
          local_e8[lVar22] = (ulonglong)plVar10;
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < *(int *)(lVar5 + 0x238));
    }
    uVar6 = FUN_140cb9f34();
    uVar4 = *(uint *)(param_1 + 0xb8);
    if (0 < (int)uVar4) {
      fVar1 = *(float *)(uVar6 + 0x2f0);
      plVar10 = (longlong *)(param_1 + 0x10);
      plVar13 = (longlong *)(param_1 + 0x60);
      lVar5 = param_1 + 0x98;
      iVar21 = 0;
LAB_140cb94b8:
      if (uVar4 <= uVar9) goto LAB_140cb9515;
      iVar21 = iVar21 + 1;
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + (ulonglong)uVar9 * 0x198);
      if (((uVar6 >> 0x20 == 0) || (uVar25 = (uint)uVar6, (int)uVar25 < 0)) ||
         (DAT_14c9647dc <= (int)uVar25)) goto LAB_140cb9515;
      uVar23 = (ulonglong)((uint)(uVar6 >> 0x10) & 0x7fff);
      lVar12 = (ulonglong)((uVar25 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar23 * 8);
      if (((lVar12 == 0) || (iVar11 = (int)(uVar6 >> 0x20), *(int *)(lVar12 + 0x10) != iVar11)) ||
         ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)) goto LAB_140cb9515;
      if ((longlong)(int)uStack_e0 != 0) {
        puVar18 = local_e8 + (int)uStack_e0;
        local_138 = (ulonglong)((uVar25 & 0xffff) * 0x18);
        puVar14 = local_e8;
        do {
          local_150 = *puVar14;
          if (((local_150 != 0) && (*(longlong *)(local_150 + 0x3d0) != 0)) &&
             (((int)uVar25 < DAT_14c9647dc &&
              (((lVar12 = *(longlong *)(DAT_14c9647c8 + uVar23 * 8) + local_138, lVar12 != 0 &&
                (*(int *)(lVar12 + 0x10) == iVar11)) && ((*(uint *)(lVar12 + 8) & 0x10200000) == 0))
              )))) {
            lVar12 = *(longlong *)(*(longlong *)(local_150 + 0x3d0) + 0x1c8);
            if (lVar12 == 0) {
              local_f8 = DAT_14c8464f0;
              local_108 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              dStack_100 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            }
            else {
              local_108 = *(double *)(lVar12 + 0x260);
              dStack_100 = *(double *)(lVar12 + 0x268);
              local_f8 = *(double *)(lVar12 + 0x270);
            }
            plVar7 = (longlong *)(*(longlong *)(DAT_14c9647c8 + uVar23 * 8) + local_138);
            if ((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar11)) {
              lVar12 = 0;
            }
            else if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
              lVar12 = *plVar7;
            }
            else {
              lVar12 = 0;
            }
            lVar12 = *(longlong *)(lVar12 + 0x1c8);
            if (lVar12 == 0) {
              pdVar8 = (double *)&DAT_14c8464e0;
              uVar28 = SUB84(DAT_14c8464f0,0);
              uVar29 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            }
            else {
              uVar28 = (undefined4)*(undefined8 *)(lVar12 + 0x270);
              uVar29 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x270) >> 0x20);
              pdVar8 = (double *)(lVar12 + 0x260);
            }
            dVar2 = (double)CONCAT44(uVar29,uVar28) - local_f8;
            if (dVar2 * dVar2 +
                (pdVar8[1] - dStack_100) * (pdVar8[1] - dStack_100) +
                (*pdVar8 - local_108) * (*pdVar8 - local_108) <= (double)(fVar1 * fVar1)) {
              plVar7 = (longlong *)(*(longlong *)(DAT_14c9647c8 + uVar23 * 8) + local_138);
              if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar11)) ||
                 ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
                local_128 = 0;
              }
              else {
                local_128 = *plVar7;
              }
              local_148 = lVar5;
              local_140 = plVar10;
              local_118 = puVar18;
              local_110 = puVar14;
              FUN_1406f1bc8(local_128 + 0x3c0,local_c0);
              uVar28 = local_b0[0];
              if (local_c0[0] == '\x01') {
                FUN_1447a97f4(&local_88,local_b0);
                if (0 < local_88._4_4_) {
                  lVar5 = 0;
                  uVar6 = 0;
                  iVar21 = local_88._4_4_;
                  iVar17 = DAT_14c948000;
                  local_120 = plVar13;
                  do {
                    bVar26 = (int)local_88 != 0;
                    bVar27 = (int)local_88 != iVar17;
                    piVar15 = &DAT_14c948620;
                    piVar19 = (int *)&DAT_14c948618;
                    if (bVar27 && bVar26) {
                      puVar20 = &uStack_80;
                      if (0 < local_64) {
                        puVar20 = local_70;
                      }
                      if (1 < iVar21) {
                        puVar20 = local_70;
                      }
                      piVar15 = (int *)((longlong)puVar20 + lVar5 + 8);
                      piVar19 = (int *)((longlong)puVar20 + lVar5);
                    }
                    if ((*piVar19 == DAT_14cb7beb0) && (*piVar15 == DAT_14cb7beb8)) {
LAB_140cb98e2:
                      FUN_1402b5374(&local_88,uVar6 & 0xffffffff,0);
                      plVar13 = local_120;
                      iVar21 = local_88._4_4_;
                      iVar17 = DAT_14c948000;
                    }
                    else {
                      piVar15 = &DAT_14c948620;
                      piVar19 = (int *)&DAT_14c948618;
                      if (bVar27 && bVar26) {
                        puVar20 = &uStack_80;
                        if (0 < local_64) {
                          puVar20 = local_70;
                        }
                        if (1 < iVar21) {
                          puVar20 = local_70;
                        }
                        piVar15 = (int *)((longlong)puVar20 + lVar5 + 8);
                        piVar19 = (int *)((longlong)puVar20 + lVar5);
                      }
                      if ((*piVar19 == DAT_14cb7bec8) && (*piVar15 == DAT_14cb7bed0))
                      goto LAB_140cb98e2;
                      piVar15 = &DAT_14c948620;
                      piVar19 = (int *)&DAT_14c948618;
                      if (bVar27 && bVar26) {
                        puVar20 = &uStack_80;
                        if (0 < local_64) {
                          puVar20 = local_70;
                        }
                        if (1 < iVar21) {
                          puVar20 = local_70;
                        }
                        piVar15 = (int *)((longlong)puVar20 + lVar5 + 8);
                        piVar19 = (int *)((longlong)puVar20 + lVar5);
                      }
                      if ((*piVar19 == DAT_14cb7bee0) && (*piVar15 == DAT_14cb7bee8))
                      goto LAB_140cb98e2;
                      piVar15 = &DAT_14c948620;
                      piVar19 = (int *)&DAT_14c948618;
                      if (bVar27 && bVar26) {
                        puVar20 = &uStack_80;
                        if (0 < local_64) {
                          puVar20 = local_70;
                        }
                        if (1 < iVar21) {
                          puVar20 = local_70;
                        }
                        piVar15 = (int *)((longlong)puVar20 + lVar5 + 8);
                        piVar19 = (int *)((longlong)puVar20 + lVar5);
                      }
                      if ((*piVar19 == DAT_14cb7bef8) && (*piVar15 == DAT_14cb7bf00))
                      goto LAB_140cb98e2;
                      piVar15 = &DAT_14c948620;
                      piVar19 = (int *)&DAT_14c948618;
                      if (bVar27 && bVar26) {
                        puVar20 = &uStack_80;
                        if (0 < local_64) {
                          puVar20 = local_70;
                        }
                        if (1 < iVar21) {
                          puVar20 = local_70;
                        }
                        piVar15 = (int *)((longlong)puVar20 + lVar5 + 8);
                        piVar19 = (int *)((longlong)puVar20 + lVar5);
                      }
                      if ((*piVar19 == DAT_14cb7bf10) && (*piVar15 == DAT_14cb7bf18))
                      goto LAB_140cb98e2;
                    }
                    uVar6 = uVar6 + 1;
                    lVar5 = lVar5 + 0xc;
                  } while ((longlong)uVar6 < (longlong)iVar21);
                }
                uVar28 = (int)local_88;
                if (local_70 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
              plVar10 = local_140;
              iVar21 = FUN_140cba19a(local_140,uVar28,local_c0);
              lVar5 = local_148;
              if (iVar21 != -1) {
                lVar12 = *plVar10 + (longlong)iVar21 * 0x1d8;
                if (((lVar12 != 0) && (*plVar10 + (longlong)iVar21 * 0x1d8 != -0x38)) &&
                   (*(char *)(lVar12 + 0x1c8) == '\x02')) {
                  lVar5 = *(longlong *)(local_128 + 0x1c8);
                  if (lVar5 == 0) {
                    local_78 = DAT_14c8464f0;
                    local_88 = (uint *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                    uStack_80 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  }
                  else {
                    local_88 = *(uint **)(lVar5 + 0x260);
                    uStack_80 = *(undefined8 *)(lVar5 + 0x268);
                    local_78 = *(double *)(lVar5 + 0x270);
                  }
                  local_158 = 0;
                  cVar3 = FUN_144a65b9e(local_128 + 0x588,&local_88,&local_108,0);
                  if (cVar3 == '\0') {
                    uVar4 = *(uint *)(local_150 + 0xc);
                    if ((int)uVar4 < DAT_14c9647dc) {
                      lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                    }
                    else {
                      lVar5 = 0;
                    }
                    uVar24 = *(uint *)(lVar5 + 0x10);
                    if (*(uint *)(lVar5 + 0x10) == 0) {
                      LOCK();
                      iVar21 = DAT_14c964868 + 1;
                      UNLOCK();
                      uVar16 = DAT_14c964868 + 1;
                      bVar26 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar21;
                      if (bVar26) {
                        local_130 = CONCAT44(local_130._4_4_,uVar16);
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,uVar16);
                        uVar16 = (uint)local_130;
                      }
                      LOCK();
                      uVar24 = *(uint *)(lVar5 + 0x10);
                      bVar26 = uVar24 == 0;
                      if (bVar26) {
                        *(uint *)(lVar5 + 0x10) = uVar16;
                        uVar24 = 0;
                      }
                      UNLOCK();
                      if (bVar26) {
                        uVar24 = uVar16;
                      }
                    }
                    local_88 = (uint *)CONCAT44(uVar24,uVar4);
                    iVar21 = FUN_1406a22a4(plVar13,uVar4 ^ uVar24,&local_88);
                    plVar10 = local_140;
                    lVar5 = local_148;
                    if (iVar21 != -1) {
                      if (((*plVar13 + (longlong)iVar21 * 0x18 != 0) &&
                          (*plVar13 + (longlong)iVar21 * 0x18 != -8)) &&
                         ((lVar12 = FUN_14479d2ce(), lVar12 == 0 || (lVar12 == local_128)))) {
                        local_88 = (uint *)0x0;
                        FUN_14485c47a(&local_88,local_150);
                        plVar10 = local_140;
                        FUN_145793714(plVar13,local_88);
                      }
                    }
                  }
                  else {
                    uStack_cc = 0;
                    local_d0 = *(uint *)(local_150 + 0xc);
                    if ((int)local_d0 < DAT_14c9647dc) {
                      lVar5 = (ulonglong)((local_d0 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_d0 >> 0x10) * 8);
                    }
                    else {
                      lVar5 = 0;
                    }
                    uVar4 = *(uint *)(lVar5 + 0x10);
                    if (*(uint *)(lVar5 + 0x10) == 0) {
                      LOCK();
                      iVar21 = DAT_14c964868 + 1;
                      UNLOCK();
                      uVar24 = DAT_14c964868 + 1;
                      bVar26 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar21;
                      if (bVar26) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,uVar24);
                      }
                      LOCK();
                      uVar4 = *(uint *)(lVar5 + 0x10);
                      bVar26 = uVar4 == 0;
                      if (bVar26) {
                        *(uint *)(lVar5 + 0x10) = uVar24;
                        uVar4 = 0;
                      }
                      UNLOCK();
                      if (bVar26) {
                        uVar4 = uVar24;
                      }
                    }
                    uVar6 = (ulonglong)(uVar4 ^ local_d0);
                    uStack_cc = uVar4;
                    if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
                      lVar5 = *(longlong *)(param_1 + 0xa0);
                      if (*(longlong *)(param_1 + 0xa0) == 0) {
                        lVar5 = local_148;
                      }
                      iVar21 = *(int *)(lVar5 + (ulonglong)
                                                (*(int *)(param_1 + 0xa8) - 1U & (uVar4 ^ local_d0))
                                                * 4);
                      if (iVar21 != -1) {
                        lVar12 = *plVar13;
                        local_150 = uVar6;
                        local_130 = CONCAT44(uVar4,local_d0);
                        do {
                          lVar5 = (longlong)iVar21;
                          local_88 = *(uint **)(lVar12 + lVar5 * 0x18);
                          local_c8 = local_130;
                          cVar3 = FUN_140cba20c(&local_88,&local_c8,local_150);
                          lVar12 = *plVar13;
                          uVar6 = local_150;
                          if (cVar3 != '\0') {
                            if (lVar12 + lVar5 * 0x18 != 0) {
                              lVar12 = lVar12 + lVar5 * 0x18;
                              lVar5 = local_148;
                              goto LAB_140cb9c13;
                            }
                            break;
                          }
                          iVar21 = *(int *)(lVar12 + 0x10 + lVar5 * 0x18);
                        } while (iVar21 != -1);
                      }
                    }
                    lVar5 = local_148;
                    local_88 = &local_d0;
                    FUN_145793492(plVar13,&local_c8,uVar6);
                    lVar12 = *plVar13 + (longlong)(int)local_c8 * 0x18;
LAB_140cb9c13:
                    if (local_128 == 0) {
                      *(uint *)(lVar12 + 8) = 0;
                      iVar21 = 0;
                    }
                    else {
                      uVar4 = *(uint *)(local_128 + 0xc);
                      *(uint *)(lVar12 + 8) = uVar4;
                      if ((int)uVar4 < DAT_14c9647dc) {
                        lVar22 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                      }
                      else {
                        lVar22 = 0;
                      }
                      iVar21 = *(int *)(lVar22 + 0x10);
                      if (*(int *)(lVar22 + 0x10) == 0) {
                        LOCK();
                        iVar21 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar17 = DAT_14c964868 + 1;
                        bVar26 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar21;
                        if (bVar26) {
                          local_150 = CONCAT44(local_150._4_4_,iVar17);
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar17);
                          lVar5 = local_148;
                          iVar17 = (int)local_150;
                        }
                        LOCK();
                        iVar21 = *(int *)(lVar22 + 0x10);
                        bVar26 = iVar21 == 0;
                        if (bVar26) {
                          *(int *)(lVar22 + 0x10) = iVar17;
                          iVar21 = 0;
                        }
                        UNLOCK();
                        if (bVar26) {
                          iVar21 = iVar17;
                        }
                      }
                    }
                    *(int *)(lVar12 + 0xc) = iVar21;
                    plVar10 = local_140;
                  }
                }
              }
              puVar14 = local_110;
              puVar18 = local_118;
              if (local_98 != 0) {
                FUN_1400020a8();
                puVar14 = local_110;
                puVar18 = local_118;
              }
            }
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar18);
        uVar4 = *(uint *)(param_1 + 0xb8);
      }
      uVar6 = (longlong)(int)(uVar9 + 1) / (longlong)(int)uVar4 & 0xffffffff;
      uVar9 = (int)(uVar9 + 1) % (int)uVar4;
    }
LAB_140cb99cb:
    if (uVar4 == 0) {
      iVar21 = 0;
    }
    else {
      uVar6 = (longlong)(int)uVar9 / (longlong)(int)uVar4 & 0xffffffff;
      iVar21 = (int)uVar9 % (int)uVar4;
    }
    *(int *)(param_1 + 0x110) = iVar21;
    if (local_e8 != (ulonglong *)0x0) {
      uVar6 = FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
LAB_140cb9515:
  uVar6 = (longlong)(int)(uVar9 + 1) / (longlong)(int)uVar4 & 0xffffffff;
  uVar9 = (int)(uVar9 + 1) % (int)uVar4;
  if ((int)uVar4 <= iVar21) goto LAB_140cb99cb;
  goto LAB_140cb94b8;
}



// FUNCTION 140cb9f34 FUN_140cb9f34 body=258 status=ok
// SIG undefined FUN_140cb9f34(void)

longlong * FUN_140cb9f34(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cbd3920 == (longlong *)0x0) {
    memset(&DAT_14cbd3928,0,0x2f8);
    FUN_145cbbf2a(&DAT_14cbd3928);
    DAT_14cbd3920 = (longlong *)&DAT_14cbd3928;
  }
  plVar1 = DAT_14cbd3920;
  plVar3 = DAT_14cbd3920 + 1;
  if ((char)DAT_14cbd3920[2] == '\0') {
LAB_140cb9f60:
    if (*plVar3 == 0) goto LAB_140cb9fcc;
    cVar2 = FUN_1449e3c20(DAT_14cbd3920);
    if (cVar2 == '\0') goto LAB_140cb9f76;
  }
  else {
    if ((char)DAT_14cbd3920[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_140cb9f60;
    }
LAB_140cb9fcc:
    if (DAT_14c9a17d8 == (longlong *)0x0) goto LAB_140cb9f76;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1446ddda2(&local_38,"def_globals_oak_travel",0);
    if (DAT_14c9a17d8 != (longlong *)0x0) {
      (**(code **)(*DAT_14c9a17d8 + 0x2a0))(DAT_14c9a17d8,plVar1,&local_38);
    }
    if (local_20 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_140cb9f76:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cba038 FUN_140cba038 body=353 status=ok
// SIG undefined FUN_140cba038(void)

void FUN_140cba038(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140cba0bd;
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
LAB_140cba0bd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140cba19a FUN_140cba19a body=114 status=ok
// SIG undefined FUN_140cba19a(void)

int FUN_140cba19a(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar1 = FUN_14493b798(lVar3 + (longlong)iVar4 * 0x1d8,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x1d0 + (longlong)iVar4 * 0x1d8);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 140cba20c FUN_140cba20c body=55 status=ok
// SIG undefined FUN_140cba20c(void)

ulonglong FUN_140cba20c(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140cba244 FUN_140cba244 body=109 status=ok
// SIG undefined FUN_140cba244(void)

undefined8 FUN_140cba244(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0xe0) == param_2) {
          FUN_140cba2b2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xe0 + *param_1 + 0xd0);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140cba2b2 FUN_140cba2b2 body=107 status=ok
// SIG undefined FUN_140cba2b2(void)

void FUN_140cba2b2(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xd4 + (longlong)param_2 * 0xe0);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0xe0 + 0xd0);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0xe0 + 0xd0);
  FUN_140cba31e(param_1,param_2,1);
  return;
}



// FUNCTION 140cba31e FUN_140cba31e body=147 status=ok
// SIG undefined FUN_140cba31e(void)

void FUN_140cba31e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0xe0 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xe0) = param_2;
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
      puVar7 = puVar7 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140cba3b2 FUN_140cba3b2 body=256 status=ok
// SIG undefined FUN_140cba3b2(void)

void FUN_140cba3b2(longlong param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140cba4b4();
  param_2[0xa9] = 0;
  if ((*(char *)(param_1 + 0x418) == '\0') && (*(char *)(param_1 + 0x41b) != '\x01')) {
    if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x229) == '\0') {
      param_2[0x49] = 1;
      *(undefined2 *)(param_2 + 0x4b) = 0x101;
      param_2[0x4d] = 0;
      if (*(char *)(param_1 + 0x410) == '\x01') {
        param_2[0x68] = 1;
        uVar1 = *(undefined4 *)(param_1 + 0x3fc);
        uVar2 = *(undefined4 *)(param_1 + 0x400);
        uVar3 = *(undefined4 *)(param_1 + 0x404);
        *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x3f8);
        *(undefined4 *)(param_2 + 0x54) = uVar1;
        *(undefined4 *)(param_2 + 0x58) = uVar2;
        *(undefined4 *)(param_2 + 0x5c) = uVar3;
        *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x408);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  else {
    *param_2 = 1;
    uVar4 = *(undefined8 *)(param_1 + 0x3d0);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x3c8);
    *(undefined8 *)(param_2 + 0x10) = uVar4;
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x3d8);
    local_28 = 0;
    uStack_20 = 0;
    cVar5 = FUN_140076fba(&local_28,0);
    if (cVar5 == '\0') {
      uStack_20 = 0;
    }
    *(undefined8 *)(param_2 + 0x30) = local_28;
    *(undefined8 *)(param_2 + 0x38) = uStack_20;
    *(undefined8 *)(param_2 + 0x40) = 0x42c8000042c80000;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cba4b4 FUN_140cba4b4 body=114 status=ok
// SIG undefined FUN_140cba4b4(void)

void FUN_140cba4b4(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140323a4e();
  FUN_1405b72da(param_1,*(longlong *)(param_1 + 0x48) + 0x1e8,param_2);
  *(undefined1 *)(param_2 + 0xa9) = 0;
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar3 = *(longlong *)(lVar2 + 0x220);
  if (lVar3 != 0) {
    fVar1 = *(float *)(lVar3 + 0x10c);
    if (*(float *)(param_2 + 0x40) <= fVar1 && fVar1 != *(float *)(param_2 + 0x40)) {
      *(float *)(param_2 + 0x40) = fVar1;
      lVar3 = *(longlong *)(lVar2 + 0x220);
    }
    fVar1 = *(float *)(lVar3 + 0x104);
    if (*(float *)(param_2 + 0x44) <= fVar1 && fVar1 != *(float *)(param_2 + 0x44)) {
      *(float *)(param_2 + 0x44) = fVar1;
    }
  }
  return;
}



// FUNCTION 140cba526 FUN_140cba526 body=1527 status=ok
// SIG undefined FUN_140cba526(void)

longlong FUN_140cba526(longlong param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  bool bVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  
  iVar7 = *(int *)(param_1 + 0x2b0);
  if ((longlong)iVar7 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x2a8);
    lVar19 = 0;
    do {
      plVar10 = *(longlong **)(lVar18 + lVar19);
      (**(code **)(*plVar10 + 0x20))(plVar10);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)*plVar10)(plVar10,1);
      }
      lVar19 = lVar19 + 8;
    } while ((longlong)iVar7 * 8 != lVar19);
  }
  if (*(longlong **)(param_1 + 0x2b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x20))();
    puVar6 = *(undefined8 **)(param_1 + 0x2b8);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  if (*(longlong **)(param_1 + 0x2c0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x20))();
    puVar6 = *(undefined8 **)(param_1 + 0x2c0);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  lVar18 = *(longlong *)(param_1 + 0x3d8);
  if (lVar18 != 0) {
    lVar19 = 0;
    bVar23 = true;
    do {
      bVar16 = bVar23;
      lVar5 = *(longlong *)(lVar18 + lVar19 * 8);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar18 + lVar19 * 8) = 0;
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar21 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar5 + 8);
          LOCK();
          uVar21 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar5 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar5;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar23 = plVar10 != DAT_14ca843c0;
                plVar9 = plVar8;
                if (bVar23) {
                  plVar10 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar23);
            }
            else {
              do {
                *plVar8 = (longlong)plVar9;
                LOCK();
                bVar23 = plVar9 != DAT_14ca843c8;
                plVar10 = plVar8;
                if (bVar23) {
                  plVar9 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar23);
            }
          }
        }
      }
      lVar19 = 1;
      bVar23 = false;
    } while (bVar16);
    lVar19 = 0x10;
    do {
      lVar5 = *(longlong *)(lVar18 + -8 + lVar19);
      if (lVar5 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar21 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar19 = lVar19 + -8;
    } while (lVar19 != 0);
    FUN_1400020a8(lVar18);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x3e0);
  if (puVar6 != (undefined8 *)0x0) {
    FUN_140cbacee(*puVar6);
    FUN_1400020a8(puVar6);
  }
  if ((longlong)*(int *)(param_1 + 0x440) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x438);
    plVar9 = plVar10 + (longlong)*(int *)(param_1 + 0x440) * 2;
    do {
      if ((longlong)(int)plVar10[1] != 0) {
        lVar18 = *plVar10;
        lVar19 = (longlong)(int)plVar10[1] * 0xe0 + lVar18;
        do {
          FUN_14052082e(lVar18);
          FUN_1407f1458(lVar18 + 0xb0);
          lVar18 = lVar18 + 0xe0;
        } while (lVar18 != lVar19);
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar9);
  }
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FUN_1400020a8();
  }
  plVar10 = (longlong *)(param_1 + 0x468);
  puVar1 = (uint *)(param_1 + 0x478);
  iVar7 = *(int *)(param_1 + 0x490);
  if (iVar7 == 0) {
    uVar22 = 0;
    uVar20 = 1;
    iVar11 = 0;
    iVar17 = 0;
  }
  else {
    puVar15 = *(uint **)(param_1 + 0x488);
    if (*(uint **)(param_1 + 0x488) == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar21 = *puVar15;
    if (uVar21 == 0) {
      iVar11 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar11 = iVar7 + -1;
      }
      uVar22 = 0;
      uVar20 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar20 = uVar22;
      }
      iVar17 = 0;
      do {
        if (uVar20 == uVar22) goto LAB_140cba80f;
        iVar17 = iVar17 + 0x20;
        uVar21 = puVar15[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar22 = 0;
      iVar17 = 0;
    }
    uVar20 = (ulonglong)(-uVar21 & uVar21);
    uVar3 = uVar20 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar11 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar11) {
      iVar11 = iVar7;
    }
  }
  if (iVar11 < iVar7) {
    uVar21 = 0xffffffff;
    do {
      if (*(longlong *)(*plVar10 + 0x10 + (longlong)iVar11 * 0x28) != 0) {
        FUN_1400020a8();
        iVar7 = *(int *)(param_1 + 0x490);
      }
      uVar21 = uVar21 & ~(uint)uVar20;
      puVar15 = *(uint **)(param_1 + 0x488);
      if (*(uint **)(param_1 + 0x488) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      iVar11 = (int)uVar22;
      lVar18 = (longlong)iVar11;
      uVar12 = puVar15[lVar18] & uVar21;
      if (uVar12 == 0) {
        iVar13 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar13 = iVar7 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar11) {
          iVar14 = iVar11;
        }
        if (iVar13 <= iVar11) break;
        lVar19 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar12 = puVar15[lVar18 + lVar19 + 1];
          if (uVar12 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar14 - lVar18 == lVar19) goto LAB_140cba80f;
        }
        uVar22 = (ulonglong)(iVar11 + (int)lVar19 + 1);
        uVar21 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar12 & uVar12);
      uVar3 = uVar20 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar11 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar7);
  }
LAB_140cba80f:
  *(undefined4 *)(param_1 + 0x470) = 0;
  if (*(int *)(param_1 + 0x474) != 0) {
    FUN_140549ad6(plVar10,0);
  }
  *(undefined8 *)(param_1 + 0x498) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x490) = 0;
  if (0x80 < *(uint *)(param_1 + 0x494)) {
    *(undefined4 *)(param_1 + 0x494) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FUN_1400020a8();
  }
  if (*plVar10 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FUN_1400020a8();
  }
  FUN_140cbac7e(*(undefined8 *)(param_1 + 0x438),*(undefined4 *)(param_1 + 0x440));
  if (*(longlong *)(param_1 + 0x438) != 0) {
    FUN_1400020a8();
  }
  puVar6 = *(undefined8 **)(param_1 + 0x3c8);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar6 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x3c0) + 8);
    uVar21 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar21 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x3b8) + 8);
    uVar21 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar21 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cbab1e FUN_140cbab1e body=134 status=ok
// SIG undefined FUN_140cbab1e(void)

undefined8 * FUN_140cbab1e(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14ae99080;
  puVar3 = (undefined8 *)param_1[0x26];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x27];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[0x28] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x28] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cbaba4 FUN_140cbaba4 body=38 status=ok
// SIG undefined FUN_140cbaba4(void)

undefined8 FUN_140cbaba4(undefined8 param_1,int param_2)

{
  FUN_14003f39a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cbabca FUN_140cbabca body=180 status=ok
// SIG undefined FUN_140cbabca(void)

undefined8 * FUN_140cbabca(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ae98f60;
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cff0;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cbac7e FUN_140cbac7e body=56 status=ok
// SIG undefined FUN_140cbac7e(void)

void FUN_140cbac7e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140cbacb6(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140cbacb6 FUN_140cbacb6 body=55 status=ok
// SIG undefined FUN_140cbacb6(void)

void FUN_140cbacb6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14476820c(param_1 + 0xb0);
    FUN_140137a98(param_1);
    param_1 = param_1 + 0xe0;
  }
  return;
}



// FUNCTION 140cbacee FUN_140cbacee body=68 status=ok
// SIG undefined FUN_140cbacee(void)

void FUN_140cbacee(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140cbad32 FUN_140cbad32 body=233 status=ok
// SIG undefined FUN_140cbad32(void)

void FUN_140cbad32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac2d560;
  param_1[0x72] = &PTR_FUN_14ac2de70;
  param_1[0xe9] = &PTR_FUN_14ac2ded0;
  param_1[0xea] = &PTR_FUN_14ac2dee8;
  param_1[0x10c] = &PTR_FUN_14ac2df00;
  param_1[0x10d] = &PTR_FUN_14ac2df20;
  param_1[0x10e] = &PTR_FUN_14ac2df60;
  param_1[0x10f] = &PTR_FUN_14ac2df80;
  FUN_140cbae8c(param_1 + 499);
  FUN_140cbb40e(param_1 + 0x1ce);
  FUN_140cbb262(param_1 + 0x158);
  FUN_14063a842(param_1 + 0x11f);
  FUN_144760e21(param_1[0x113],*(undefined4 *)(param_1 + 0x114));
  if (param_1[0x113] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x110] != 0) {
    FUN_1400020a8();
  }
  FUN_140cbae1c(param_1);
  return;
}



// FUNCTION 140cbae1c FUN_140cbae1c body=111 status=ok
// SIG undefined FUN_140cbae1c(void)

void FUN_140cbae1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab7eb80;
  param_1[0x72] = &PTR_FUN_14ab7f490;
  param_1[0xe9] = &PTR_FUN_14ab7f4f0;
  param_1[0xea] = &PTR_FUN_14ab7f508;
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x107] != 0) {
    FUN_1400020a8();
  }
  FUN_140cbb07c(param_1);
  return;
}



// FUNCTION 140cbae8c FUN_140cbae8c body=189 status=ok
// SIG undefined FUN_140cbae8c(void)

void FUN_140cbae8c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_140cbaf82(param_1 + 0x17,1);
  plVar2 = (longlong *)param_1[0x16];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x10];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cbaf4a(param_1 + 3);
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cbaf4a FUN_140cbaf4a body=55 status=ok
// SIG undefined FUN_140cbaf4a(void)

void FUN_140cbaf4a(longlong *param_1)

{
  FUN_140cbb000(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cbaf82 FUN_140cbaf82 body=126 status=ok
// SIG undefined FUN_140cbaf82(void)

void FUN_140cbaf82(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140cbb000 FUN_140cbb000 body=123 status=ok
// SIG undefined FUN_140cbb000(void)

void FUN_140cbb000(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140cbb3a0(param_1,param_2);
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



// FUNCTION 140cbb07c FUN_140cbb07c body=174 status=ok
// SIG undefined FUN_140cbb07c(void)

void FUN_140cbb07c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1aa210;
  param_1[0x72] = &PTR_FUN_14a1aab00;
  param_1[0xe9] = &PTR_FUN_14a1aab60;
  param_1[0xea] = &PTR_FUN_14a1aab78;
  *(undefined4 *)(param_1 + 0x102) = 0;
  if (param_1[0x101] != 0) {
    FUN_1400020a8();
  }
  FUN_140ce5470(param_1 + 0xf9);
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xef] != 0) {
    FUN_1400020a8();
  }
  FUN_140cbb12a(param_1);
  return;
}



// FUNCTION 140cbb12a FUN_140cbb12a body=182 status=ok
// SIG undefined FUN_140cbb12a(void)

void FUN_140cbb12a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a812380;
  param_1[0x72] = &PTR_FUN_14a812c60;
  FUN_140d7a9b4(param_1 + 0xda);
  FUN_140cbb1e0(param_1[0xce],*(undefined4 *)(param_1 + 0xcf));
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  FUN_140d7a9b4(param_1 + 0xb7);
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  FUN_140cbb210(param_1);
  return;
}



// FUNCTION 140cbb1e0 FUN_140cbb1e0 body=47 status=ok
// SIG undefined FUN_140cbb1e0(void)

void FUN_140cbb1e0(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x58;
    do {
      FUN_140d7a9b4(param_1);
      param_1 = param_1 + 0xd0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cbb210 FUN_140cbb210 body=82 status=ok
// SIG undefined FUN_140cbb210(void)

void FUN_140cbb210(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa0a8c0;
  param_1[0x72] = &PTR_FUN_14aa0b070;
  FUN_144760e21(param_1[0x82],*(undefined4 *)(param_1 + 0x83));
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140cbb262 FUN_140cbb262 body=317 status=ok
// SIG undefined FUN_140cbb262(void)

void FUN_140cbb262(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  
  FUN_14035d552();
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x69];
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
  param_1[0x19] = 0;
  FUN_14076ba36(param_1 + 0x1a);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar2 = param_1 + 3;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 7) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 6)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 6)) {
    FUN_1400020a8(*plVar2);
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cbb3a0 FUN_140cbb3a0 body=109 status=ok
// SIG undefined FUN_140cbb3a0(void)

void FUN_140cbb3a0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x34,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x34)) {
      uVar2 = uVar1 / 0x34 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x34,4);
  }
  return;
}



// FUNCTION 140cbb40e FUN_140cbb40e body=442 status=ok
// SIG undefined FUN_140cbb40e(void)

void FUN_140cbb40e(longlong *param_1)

{
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_1401ad22e(param_1 + 0x15,0);
  }
  param_1[0x1b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xd4)) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
    FUN_1446efbd8(param_1 + 0x17,0);
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_1447a103a(param_1 + 10,0);
  }
  param_1[0x10] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x7c)) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
    FUN_1446efbd8(param_1 + 0xc,0);
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140a19d0e(param_1 + 6,1);
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cbb5c8 FUN_140cbb5c8 body=101 status=ok
// SIG undefined FUN_140cbb5c8(void)

void FUN_140cbb5c8(longlong *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_28);
  FUN_1403f35db(local_28,&DAT_14c9908f8);
  uVar1 = Ordinal_9(param_2);
  *(undefined2 *)((longlong)param_1 + 10) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cbb62e FUN_140cbb62e body=251 status=ok
// SIG undefined FUN_140cbb62e(void)

ulonglong * FUN_140cbb62e(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  ulonglong uVar3;
  char *_Str;
  char **ppcVar4;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  char *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(short *)(param_1 + 8) == 2) {
    if ((longlong)DAT_14c9908e8 < 0) {
      _Str = (char *)(DAT_14c9908e8 & 0x7fffffffffffffff);
      if (DAT_14c9908f4 == '\x01') {
        ppcVar4 = &local_30;
        FUN_1446f470e(ppcVar4,_Str,1);
      }
      else {
        local_30 = _Str;
        if (_Str == (char *)0x0) {
          local_28 = 0;
        }
        else {
          sVar2 = strlen(_Str);
          local_28 = (undefined4)sVar2;
        }
        ppcVar4 = &local_20;
        FUN_14001c09c(ppcVar4,&local_30,1);
      }
      uVar1 = (ulonglong)*(uint *)ppcVar4;
      uVar3 = (ulonglong)DAT_14c9908f0 << 0x20;
      DAT_14c9908e8 = uVar1;
    }
    else {
      uVar1 = (ulonglong)DAT_14c9908f0 << 0x20;
      uVar3 = DAT_14c9908e8 & 0xffffffff;
    }
    *param_2 = uVar3 | uVar1;
  }
  else {
    if (*(short *)(param_1 + 8) == 0x17) {
      FUN_1446f57c6(&DAT_14c9908f8,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    *param_2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cbb730 FUN_140cbb730 body=96 status=ok
// SIG undefined FUN_140cbb730(void)

ulonglong FUN_140cbb730(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140cbb773:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140cbb773;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 140cbb7b6 FUN_140cbb7b6 body=103 status=ok
// SIG undefined FUN_140cbb7b6(void)

ulonglong FUN_140cbb7b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140cbb800:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140cbb800;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140cbb81e FUN_140cbb81e body=1145 status=ok
// SIG undefined FUN_140cbb81e(void)

void FUN_140cbb81e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  wchar_t *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  code **local_280;
  code *local_278;
  code *local_270;
  longlong local_260;
  longlong local_258;
  code *local_250;
  undefined8 local_248 [64];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_260 = param_2;
  if (param_2 == 0) goto LAB_140cbb8a2;
  FUN_140457ffc(param_2 + 0x2d0,param_1);
  FUN_140cbbed7(&local_260);
  local_258 = local_260;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    if (iVar6 != 1) goto LAB_140cbb8a2;
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    if (DVar4 != DVar5) goto LAB_140cbb8a2;
  }
  FUN_140cbbed7(&local_258);
  lVar3 = local_258;
  if (local_258 != 0) {
    uVar2 = *(uint *)(local_258 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    uVar7 = *(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar12);
      }
      LOCK();
      uVar7 = *(uint *)(lVar13 + 0x10);
      bVar14 = uVar7 == 0;
      if (bVar14) {
        *(uint *)(lVar13 + 0x10) = uVar12;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar7 = uVar12;
      }
    }
    local_248[0] = CONCAT44(uVar7,uVar2);
    iVar6 = FUN_140cbbffe((longlong *)(param_1 + 0xe0),uVar2 ^ uVar7);
    if (iVar6 != -1) {
      lVar13 = *(longlong *)(param_1 + 0xe0);
      if ((lVar13 + (longlong)iVar6 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
        lVar13 = lVar13 + (longlong)iVar6 * 0x20;
        lVar8 = (longlong)*(int *)(lVar13 + 0x10);
        if (lVar8 != 0) {
          lVar13 = *(longlong *)(lVar13 + 8);
          lVar9 = 0;
          do {
            *(undefined1 *)(*(longlong *)(lVar13 + lVar9) + 0xc71) = 1;
            lVar9 = lVar9 + 0x10;
          } while (lVar8 * 0x10 != lVar9);
        }
      }
    }
    uVar2 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    uVar7 = *(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar12);
      }
      LOCK();
      uVar7 = *(uint *)(lVar13 + 0x10);
      bVar14 = uVar7 == 0;
      if (bVar14) {
        *(uint *)(lVar13 + 0x10) = uVar12;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar7 = uVar12;
      }
    }
    local_248[0] = CONCAT44(uVar7,uVar2);
    iVar6 = FUN_140cbbffe((longlong *)(param_1 + 0x130),uVar2 ^ uVar7);
    if (iVar6 != -1) {
      lVar13 = *(longlong *)(param_1 + 0x130);
      if ((lVar13 + (longlong)iVar6 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
        lVar13 = lVar13 + (longlong)iVar6 * 0x20;
        lVar8 = (longlong)*(int *)(lVar13 + 0x10);
        if (lVar8 != 0) {
          lVar13 = *(longlong *)(lVar13 + 8);
          lVar9 = 0;
          do {
            *(undefined1 *)(*(longlong *)(lVar13 + lVar9) + 0xc71) = 1;
            lVar9 = lVar9 + 0x10;
          } while (lVar8 * 0x10 != lVar9);
        }
      }
    }
    local_48 = 0;
    local_40 = 0x2000000000;
    if (0 < *(int *)(param_1 + 0xb8)) {
      plVar1 = (longlong *)(param_1 + 0xb0);
      uVar11 = 0;
      do {
        iVar6 = (int)uVar11;
        lVar13 = *(longlong *)(*plVar1 + uVar11 * 0x10);
        if ((((lVar13 == 0) || (*(int *)(lVar13 + 0x4c) == 0)) ||
            (uVar2 = *(uint *)(lVar13 + 0x48), (int)uVar2 < 0)) ||
           (((DAT_14c9647dc <= (int)uVar2 ||
             (plVar10 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar10 == (longlong *)0x0)) ||
            (((int)plVar10[2] != *(int *)(lVar13 + 0x4c) ||
             (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar13 = *plVar10, lVar13 == 0))))))))
        {
LAB_140cbbb04:
          FUN_140cbbd20(plVar1,uVar11);
          FUN_140cbbc98(plVar1);
          iVar6 = iVar6 + -1;
        }
        else {
          if (DAT_14cac9ca8 == 0) {
            local_280 = &local_250;
            local_250 = FUN_141030f22;
            local_270 = FUN_14081d0ea;
            local_278 = FUN_14081d0ea;
            local_288 = &LAB_1478c0a72;
            local_290 = &LAB_1417b2375;
            local_298 = L"Engine";
            local_2a0 = 0x1000000000;
            local_2a8 = 0x10000004;
            local_2b0 = 8;
            local_2b8 = 0x390;
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          }
          if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
              (lVar13 == lVar3)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
          goto LAB_140cbbb04;
        }
        uVar11 = (ulonglong)(iVar6 + 1U);
      } while ((int)(iVar6 + 1U) < *(int *)(param_1 + 0xb8));
    }
    FUN_14032314d(local_248,0);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140cbb8a2:
  if ((local_38 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cbbc98 FUN_140cbbc98 body=135 status=ok
// SIG undefined FUN_140cbbc98(void)

void FUN_140cbbc98(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 140cbbd20 FUN_140cbbd20 body=136 status=ok
// SIG undefined FUN_140cbbd20(void)

void FUN_140cbbd20(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 140cbbda8 FUN_140cbbda8 body=9 status=ok
// SIG undefined FUN_140cbbda8(void)

void FUN_140cbbda8(longlong param_1)

{
  FUN_140cbbdb2(param_1 + 0x10);
  return;
}



// FUNCTION 140cbbdb2 FUN_140cbbdb2 body=293 status=ok
// SIG undefined FUN_140cbbdb2(void)

void FUN_140cbbdb2(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac74040;
  if (param_1[8] != 0) {
    FUN_140872c8a(param_1);
  }
  plVar1 = param_1 + 0x187;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x18b) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x18a)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x18a)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1405f0bde(param_1 + 0x114);
  FUN_1401b95a9(param_1[0x111],*(undefined4 *)(param_1 + 0x112));
  if (param_1[0x111] != 0) {
    FUN_1400020a8();
  }
  FUN_1405f0bde(param_1 + 0x9f);
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  FUN_14076ba36(param_1 + 0x48);
  FUN_1401b956c(param_1 + 0x32);
  if (*(char *)(param_1 + 0x2b) == '\x01') {
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  FUN_144760e21(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7f26(param_1);
  return;
}



// FUNCTION 140cbbed7 FUN_140cbbed7 body=294 status=ok
// SIG undefined FUN_140cbbed7(void)

void FUN_140cbbed7(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cad3ae0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_147a36475;
      local_50 = &LAB_1463c0cc7;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
    }
    if ((*(int *)(DAT_14cad3ae0 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8) ==
        DAT_14cad3ae0 + 0x30)) {
      lVar2 = (**(code **)(*plVar1 + 0x5e0))(plVar1);
      *param_1 = lVar2;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cbbffe FUN_140cbbffe body=186 status=ok
// SIG undefined FUN_140cbbffe(void)

int FUN_140cbbffe(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_140cbc07e;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_140cbc07e:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cbc0ba FUN_140cbc0ba body=30 status=ok
// SIG undefined FUN_140cbc0ba(void)

void FUN_140cbc0ba(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1447210f0();
  }
  FUN_140cbc0d8(uVar1);
  return;
}



// FUNCTION 140cbc0d8 FUN_140cbc0d8 body=108 status=ok
// SIG undefined FUN_140cbc0d8(void)

longlong FUN_140cbc0d8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x178) != 0)) {
    lVar2 = FUN_140cbc144();
    lVar3 = *(longlong *)(param_1 + 0x178);
    if (lVar3 != 0) {
      lVar4 = 0;
      if ((lVar2 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) goto LAB_140cbc12c;
      if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar4 = lVar3;
        }
        goto LAB_140cbc12c;
      }
    }
  }
  lVar4 = 0;
LAB_140cbc12c:
  lVar3 = lVar4 + 0x448;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 140cbc144 FUN_140cbc144 body=228 status=ok
// SIG undefined FUN_140cbc144(void)

longlong FUN_140cbc144(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5f060 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463ce2f8;
    local_38 = &LAB_1486b146f;
    local_40 = FUN_1464e4b66;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x480;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameStateBase",&DAT_14cb5f060,FUN_1464e4b44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5f060;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cbc22a FUN_140cbc22a body=2182 status=ok
// SIG undefined FUN_140cbc22a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_140cbc22a(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *_Dst;
  void *_Dst_00;
  longlong lVar9;
  longlong lVar10;
  undefined1 **ppuVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined1 *_Src;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  longlong local_b0 [2];
  longlong local_a0;
  longlong local_90;
  longlong local_80;
  undefined4 local_78;
  longlong local_70;
  ulonglong local_60;
  undefined1 local_48 [8];
  
  ppuVar11 = &local_c8;
  local_60 = DAT_14c707940 ^ (ulonglong)local_48;
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    _Src = (undefined1 *)0x0;
  }
  else {
    lVar9 = -((longlong)*(int *)(param_1 + 0x10) * 8 + 0x1eU & 0xfffffffffffffff0);
    ppuVar11 = (undefined1 **)((longlong)&local_c8 + lVar9);
    _Src = (undefined1 *)((longlong)&local_c8 + lVar9);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 == 0) {
    local_b8 = (undefined1 *)0x0;
  }
  else {
    *(undefined8 *)((longlong)ppuVar11 + -8) = 0x140cbc29c;
    lVar9 = -((longlong)iVar1 * 8 + 0x1eU & 0xfffffffffffffff0);
    local_b8 = (undefined1 *)((longlong)ppuVar11 + lVar9);
    ppuVar11 = (undefined1 **)((longlong)ppuVar11 + lVar9);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 == 0) {
    local_c8 = (undefined1 *)0x0;
  }
  else {
    *(undefined8 *)((longlong)ppuVar11 + -8) = 0x140cbc2c0;
    lVar9 = -((longlong)iVar1 * 8 + 0x1eU & 0xfffffffffffffff0);
    local_c8 = (undefined1 *)((longlong)ppuVar11 + lVar9);
    ppuVar11 = (undefined1 **)((longlong)ppuVar11 + lVar9);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 == 0) {
    local_c0 = (undefined1 *)0x0;
    puVar12 = (undefined1 *)ppuVar11;
  }
  else {
    *(undefined8 *)((longlong)ppuVar11 + -8) = 0x140cbca25;
    lVar9 = -((longlong)iVar1 * 8 + 0x1eU & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((longlong)ppuVar11 + lVar9);
    local_c0 = (undefined1 *)((longlong)ppuVar11 + lVar9);
  }
  if (_Src == (undefined1 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    goto LAB_140cbc99c;
  }
  *(undefined8 *)(puVar12 + -0x28) = 0x140cbc2ff;
  puVar8 = (undefined8 *)FUN_14001cc68(0x160,0x10);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar13 = &DAT_14c846480;
  puVar14 = puVar8 + 0x10;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar8[0x1e] = DAT_14c8464f0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar8[0x1c] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar8[0x1d] = uVar4;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar8[0x1f] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar8[0x20] = uVar4;
  puVar8[0x21] = DAT_14c8464f0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar8[0x22] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar8[0x23] = uVar4;
  puVar8[0x24] = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(puVar8 + 0x25) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)puVar8 + 300) = uVar5;
  *(undefined4 *)(puVar8 + 0x26) = uVar6;
  *(undefined4 *)((longlong)puVar8 + 0x134) = uVar7;
  puVar8[0x27] = DAT_14c8464f0;
  puVar8[0x28] = 0;
  *(undefined1 *)(puVar8 + 0x2a) = DAT_14c9abb98;
  *(undefined1 *)((longlong)puVar8 + 0x151) = 0;
  *(undefined8 *)(puVar12 + -0x28) = 0x140cbc3e1;
  FUN_140cbd21c(puVar8 + 0xb,param_1 + 0x58);
  *(undefined8 *)(puVar12 + -0x28) = 0x140cbc3f6;
  FUN_14054c6c4(puVar8 + 9,param_1 + 0x48);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar9 = 0;
    do {
      *(undefined8 *)(puVar12 + -0x28) = 0x140cbc41a;
      _Dst = (undefined8 *)FUN_14001cc68(0x5d0);
      *(undefined8 *)(puVar12 + -0x28) = 0x140cbc42d;
      FUN_140b5c6e4(_Dst);
      *_Dst = &PTR_LAB_14a1e1390;
      _Dst[0x56] = 0;
      _Dst[0x57] = 0;
      _Dst[0x58] = 0;
      _Dst[0x59] = 0;
      _Dst[0x5a] = 0;
      puVar13 = &DAT_14c846480;
      puVar14 = _Dst + 0x5c;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined4 *)(_Dst + 0x68) = 0xffffffff;
      _Dst[0x6d] = 0;
      _Dst[0x6e] = 0;
      _Dst[0x6b] = 0;
      _Dst[0x6c] = 0;
      _Dst[0x69] = 0;
      _Dst[0x6a] = 0;
      uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      _Dst[0x6f] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      _Dst[0x70] = uVar4;
      _Dst[0x71] = DAT_14c8464f0;
      _Dst[0x74] = DAT_14c8464f0;
      uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      _Dst[0x72] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      _Dst[0x73] = uVar4;
      *(undefined8 *)(puVar12 + -0x28) = 0x140cbc4ed;
      memset(_Dst + 0x75,0,0x220);
      *(byte *)(_Dst + 4) = *(byte *)(_Dst + 4) & 0xf7;
      *(undefined8 **)(_Src + lVar9 * 8) = _Dst;
      lVar10 = *(longlong *)(param_1 + 8);
      pvVar2 = *(void **)(lVar10 + lVar9 * 8);
      *(undefined8 *)(puVar12 + -0x28) = 0x140cbc515;
      memcpy(_Dst,pvVar2,0x5d0);
      _Dst[0x59] = 0;
      _Dst[0x5a] = 0;
      _Dst[0x54] = 0;
      _Dst[0x55] = 0;
      _Dst[0x40] = 0;
      _Dst[0x41] = 0;
      _Dst[0x42] = 0;
      _Dst[0x43] = 0;
      _Dst[0x44] = 0;
      _Dst[0x45] = 0;
      _Dst[0x46] = 0;
      _Dst[0x47] = 0;
      _Dst[0x48] = 0;
      _Dst[0x49] = 0;
      _Dst[1] = 0;
      _Dst[0x56] = puVar8;
      lVar10 = *(longlong *)(lVar10 + lVar9 * 8);
      *(undefined8 *)(puVar12 + -0x28) = 0x140cbc587;
      FUN_140cbcab6(local_b0,lVar10 + 0x200);
      *(undefined8 *)(puVar12 + -0x28) = 0x140cbc592;
      FUN_140b5c58c(_Dst + 0x40,local_b0);
      if (local_70 != 0) {
        *(undefined8 *)(puVar12 + -0x28) = 0x140cbca03;
        FUN_1400020a8();
      }
      uVar5 = local_78;
      lVar10 = local_80;
      *(undefined8 *)(puVar12 + -0x28) = 0x140cbc5b3;
      FUN_140074ac0(lVar10,uVar5);
      if (local_80 != 0) {
        *(undefined8 *)(puVar12 + -0x28) = 0x140cbc621;
        FUN_1400020a8();
      }
      if (local_90 != 0) {
        *(undefined8 *)(puVar12 + -0x28) = 0x140cbc5d2;
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        *(undefined8 *)(puVar12 + -0x28) = 0x140cbc612;
        FUN_1400020a8();
      }
      if (local_b0[0] != 0) {
        *(undefined8 *)(puVar12 + -0x28) = 0x140cbc603;
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x10));
  }
  puVar17 = local_b8;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar9 = 0;
    do {
      *(undefined8 *)(puVar12 + -0x28) = 0x140cbc64a;
      _Dst_00 = (void *)FUN_14001cc68(0x1000,0x10);
      *(undefined8 *)(puVar12 + -0x28) = 0x140cbc65d;
      FUN_140cbcecc(_Dst_00);
      *(void **)(puVar17 + lVar9 * 8) = _Dst_00;
      lVar10 = *(longlong *)(param_1 + 0x18);
      pvVar2 = *(void **)(lVar10 + lVar9 * 8);
      *(undefined8 *)(puVar12 + -0x28) = 0x140cbc680;
      memcpy(_Dst_00,pvVar2,0x1000);
      *(undefined8 *)((longlong)_Dst_00 + 0x18) =
           *(undefined8 *)
            (_Src + (longlong)
                    *(int *)(*(longlong *)(*(longlong *)(lVar10 + lVar9 * 8) + 0x18) + 0x1fc) * 8);
      *(undefined8 *)((longlong)_Dst_00 + 0x20) =
           *(undefined8 *)
            (_Src + (longlong)
                    *(int *)(*(longlong *)(*(longlong *)(lVar10 + lVar9 * 8) + 0x20) + 0x1fc) * 8);
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x20));
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar9 = 0;
    do {
      *(undefined8 *)(local_c8 + lVar9 * 8) =
           *(undefined8 *)
            (puVar17 +
            (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar9 * 8) + 0xf48) * 8
            );
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x30));
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar9 = 0;
    do {
      *(undefined8 *)(local_c0 + lVar9 * 8) =
           *(undefined8 *)
            (puVar17 +
            (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar9 * 8) + 0xf48) * 8
            );
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x40));
  }
  uVar16 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar16) {
    lVar9 = 0;
    do {
      lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + lVar9 * 8) + 0x2c0);
      if ((lVar10 != 0) && (lVar10 = (longlong)*(int *)(lVar10 + 0x1fc), lVar10 != -1)) {
        lVar15 = *(longlong *)(_Src + lVar9 * 8);
        lVar10 = *(longlong *)(_Src + lVar10 * 8);
        *(longlong *)(lVar15 + 0x2c0) = lVar10;
        iVar1 = *(int *)(lVar10 + 0x2d0);
        *(uint *)(lVar10 + 0x2d0) = iVar1 + 1U;
        if (*(uint *)(lVar10 + 0x2d4) < iVar1 + 1U) {
          *(undefined8 *)(puVar12 + -0x28) = 0x140cbc76a;
          FUN_140cbcd6a((longlong *)(lVar10 + 0x2c8),iVar1);
        }
        *(longlong *)(*(longlong *)(lVar10 + 0x2c8) + (longlong)iVar1 * 8) = lVar15;
        *(undefined8 *)(lVar15 + 0x2b8) =
             *(undefined8 *)
              (local_b8 +
              (longlong)
              *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + lVar9 * 8) + 0x2b8)
                      + 0xf48) * 8);
        uVar16 = *(uint *)(param_1 + 0x10);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uVar16);
  }
  iVar1 = *(int *)(puVar8 + 2);
  *(uint *)(puVar8 + 2) = iVar1 + uVar16;
  if ((uint)(*(int *)((longlong)puVar8 + 0x14) - iVar1) < uVar16) {
    *(undefined8 *)(puVar12 + -0x28) = 0x140cbc7db;
    FUN_140cbcd6a(puVar8 + 1,iVar1);
LAB_140cbc7e3:
    puVar17 = local_b8;
    lVar9 = puVar8[1];
    *(undefined8 *)(puVar12 + -0x28) = 0x140cbc800;
    memcpy((void *)((longlong)iVar1 * 8 + lVar9),_Src,(longlong)(int)uVar16 << 3);
  }
  else {
    puVar17 = local_b8;
    if (uVar16 != 0) goto LAB_140cbc7e3;
  }
  uVar16 = *(uint *)(param_1 + 0x20);
  iVar1 = *(int *)(puVar8 + 4);
  *(uint *)(puVar8 + 4) = iVar1 + uVar16;
  if ((uint)(*(int *)((longlong)puVar8 + 0x24) - iVar1) < uVar16) {
    *(undefined8 *)(puVar12 + -0x28) = 0x140cbc833;
    FUN_140cbd3ea(puVar8 + 3,iVar1);
LAB_140cbc837:
    lVar9 = puVar8[3];
    *(undefined8 *)(puVar12 + -0x28) = 0x140cbc855;
    memcpy((void *)((longlong)iVar1 * 8 + lVar9),puVar17,(longlong)(int)uVar16 << 3);
  }
  else if (uVar16 != 0) goto LAB_140cbc837;
  uVar16 = *(uint *)(param_1 + 0x30);
  iVar1 = *(int *)(puVar8 + 6);
  *(uint *)(puVar8 + 6) = iVar1 + uVar16;
  if ((uint)(*(int *)((longlong)puVar8 + 0x34) - iVar1) < uVar16) {
    *(undefined8 *)(puVar12 + -0x28) = 0x140cbc888;
    FUN_140cbd3ea(puVar8 + 5,iVar1);
LAB_140cbc88c:
    puVar17 = local_c8;
    lVar9 = puVar8[5];
    *(undefined8 *)(puVar12 + -0x28) = 0x140cbc8ab;
    memcpy((void *)((longlong)iVar1 * 8 + lVar9),puVar17,(longlong)(int)uVar16 << 3);
  }
  else if (uVar16 != 0) goto LAB_140cbc88c;
  uVar16 = *(uint *)(param_1 + 0x40);
  iVar1 = *(int *)(puVar8 + 8);
  *(uint *)(puVar8 + 8) = iVar1 + uVar16;
  if ((uint)(*(int *)((longlong)puVar8 + 0x44) - iVar1) < uVar16) {
    *(undefined8 *)(puVar12 + -0x28) = 0x140cbca89;
    FUN_140cbd3ea(puVar8 + 7,iVar1);
LAB_140cbca8d:
    puVar17 = local_c0;
    lVar9 = puVar8[7];
    *(undefined8 *)(puVar12 + -0x28) = 0x140cbcaac;
    memcpy((void *)((longlong)iVar1 * 8 + lVar9),puVar17,(longlong)(int)uVar16 << 3);
  }
  else if (uVar16 != 0) goto LAB_140cbca8d;
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      iVar1 = *(int *)(puVar8 + 0xe);
      lVar15 = (longlong)iVar1;
      *(uint *)(puVar8 + 0xe) = iVar1 + 1U;
      if (*(uint *)((longlong)puVar8 + 0x74) < iVar1 + 1U) {
        *(undefined8 *)(puVar12 + -0x28) = 0x140cbc978;
        FUN_140cbd274(puVar8 + 0xd,iVar1);
      }
      lVar3 = puVar8[0xd];
      puVar13 = (undefined8 *)(lVar3 + lVar15 * 0x18);
      *puVar13 = 0;
      puVar13[1] = 0;
      *(undefined8 *)(lVar3 + 0x10 + lVar15 * 0x18) = 0;
      *(undefined8 *)(lVar3 + lVar15 * 0x18) =
           *(undefined8 *)
            (_Src + (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar9) + 0x1fc)
                    * 8);
      *(undefined8 *)(lVar3 + 8 + lVar15 * 0x18) =
           *(undefined8 *)
            (_Src + (longlong)
                    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 8 + lVar9) + 0x1fc) * 8);
      *(undefined8 *)(lVar3 + 0x10 + lVar15 * 0x18) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + lVar9);
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x18;
    } while (lVar10 < *(int *)(param_1 + 0x70));
  }
  puVar12[-0x10] = 0;
  *(undefined8 *)(puVar12 + -0x38) = 0x140cbc998;
  FUN_144a65e4a(puVar8,param_1,0,0);
LAB_140cbc99c:
  if ((local_60 ^ (ulonglong)local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar12 + -0x28) = &UNK_140cbc9cd;
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 140cbcab6 FUN_140cbcab6 body=364 status=ok
// SIG undefined FUN_140cbcab6(void)

undefined8 * FUN_140cbcab6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140acb000(param_1,iVar1,0);
    FUN_140acac33(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140acb39c(param_1 + 2,iVar1,0);
    FUN_140acac7d(param_1[2],uVar2,iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_140cbcc80(param_1 + 4,iVar1,0);
    FUN_140cbcc22(param_1[4],uVar2,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar2 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_140acb2b2(param_1 + 6,iVar1,0);
    FUN_140acb0e9(param_1[6],uVar2,iVar1);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  uVar2 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_147102cc2(param_1 + 8,iVar1,0);
    FUN_147102d31(param_1[8],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 140cbcc22 FUN_140cbcc22 body=94 status=ok
// SIG undefined FUN_140cbcc22(void)

void FUN_140cbcc22(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = 0;
    do {
      *(undefined ***)(param_1 + lVar10) = &PTR_LAB_14a1e1958;
      *(undefined8 *)(param_1 + 8 + lVar10) = *(undefined8 *)(param_2 + 8 + lVar10);
      *(undefined ***)(param_1 + lVar10) = &PTR_LAB_14a1e1948;
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar10);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x20 + lVar10);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_2 + 0x30 + lVar10);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      puVar2 = (undefined8 *)(param_2 + 0x40 + lVar10);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x20 + lVar10);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(param_1 + 0x30 + lVar10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1 = (undefined8 *)(param_1 + 0x40 + lVar10);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      lVar10 = lVar10 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140cbcc80 FUN_140cbcc80 body=233 status=ok
// SIG undefined FUN_140cbcc80(void)

void FUN_140cbcc80(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x50;
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
    iVar1 = (int)(uVar3 / 0x50);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x50,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140cbcd6a FUN_140cbcd6a body=353 status=ok
// SIG undefined FUN_140cbcd6a(void)

void FUN_140cbcd6a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140cbcdef;
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
LAB_140cbcdef:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140cbcecc FUN_140cbcecc body=847 status=ok
// SIG undefined FUN_140cbcecc(void)

undefined8 * FUN_140cbcecc(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14a1e19b0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x1e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x2a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3ff00000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x3ff0000000000000;
  param_1[0x4f] = 0x3ff0000000000000;
  param_1[0x50] = 0x3ff0000000000000;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x3ff00000;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x3ff0000000000000;
  param_1[0x5b] = 0x3ff0000000000000;
  param_1[0x5c] = 0x3ff0000000000000;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x3ff00000;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x3ff0000000000000;
  param_1[0x67] = 0x3ff0000000000000;
  param_1[0x68] = 0x3ff0000000000000;
  param_1[0x69] = 0;
  memset(param_1 + 0x76,0,0x90);
  memset(param_1 + 0x90,0,0x150);
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0xbff0000000000000;
  param_1[0xfe] = 0xffffffffffffffff;
  memset(param_1 + 0x118,0,0x90);
  memset(param_1 + 0x17a,0,0x2d0);
  param_1[0x1ea] = 0x3fd0000000000000;
  param_1[0x1eb] = 0x47dfffffe0000000;
  param_1[0x1ec] = 0x47dfffffe0000000;
  *(undefined4 *)(param_1 + 0x1ed) = 1;
  param_1[0x1ee] = 0;
  *(undefined4 *)(param_1 + 0x1fe) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  memset(param_1 + 0xc9,0,0x120);
  param_1[0xf5] = 0xbff0000000000000;
  param_1[0xf4] = 0xbff0000000000000;
  param_1[0xf3] = 0xbff0000000000000;
  param_1[0xf2] = 0xbff0000000000000;
  param_1[0xf1] = 0xbff0000000000000;
  param_1[0xf0] = 0xbff0000000000000;
  param_1[0xfb] = 0x47efffffe0000000;
  param_1[0xfa] = 0x47efffffe0000000;
  param_1[0xf9] = 0x47efffffe0000000;
  param_1[0xf8] = 0x47efffffe0000000;
  param_1[0xf7] = 0x47efffffe0000000;
  param_1[0xf6] = 0x47efffffe0000000;
  param_1[0x116] = 0x47efffffe0000000;
  param_1[0x115] = 0x47efffffe0000000;
  param_1[0x114] = 0x47efffffe0000000;
  param_1[0x113] = 0x47efffffe0000000;
  param_1[0x112] = 0x47efffffe0000000;
  param_1[0x111] = 0x47efffffe0000000;
  param_1[0xfd] = 0x3ff0000000000000;
  param_1[0xfc] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0xff) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x101) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x80c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x102) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x814) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x103) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x81c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x824) = 0xffffffff;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fa] = 0x3ff0000000000000;
  param_1[0x1f9] = 0x3ff0000000000000;
  param_1[0x1f8] = 0x3ff0000000000000;
  param_1[0x1f7] = 0x3ff0000000000000;
  param_1[0x1f6] = 0x3ff0000000000000;
  param_1[0x1f5] = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0xff4) = 0;
  *(undefined2 *)(param_1 + 0x1ff) = 0;
  return param_1;
}



// FUNCTION 140cbd21c FUN_140cbd21c body=88 status=ok
// SIG undefined FUN_140cbd21c(void)

undefined8 * FUN_140cbd21c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140cbd546(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140cbd274 FUN_140cbd274 body=373 status=ok
// SIG undefined FUN_140cbd274(void)

void FUN_140cbd274(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140cbd2ff;
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
LAB_140cbd2ff:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140cbd3ea FUN_140cbd3ea body=346 status=ok
// SIG undefined FUN_140cbd3ea(void)

void FUN_140cbd3ea(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140cbd47c;
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
LAB_140cbd47c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140cbd546 FUN_140cbd546 body=317 status=ok
// SIG undefined FUN_140cbd546(void)

void FUN_140cbd546(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140cbd5b4;
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
LAB_140cbd5b4:
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



// FUNCTION 140cbd683 FUN_140cbd683 body=62 status=ok
// SIG undefined FUN_140cbd683(void)

void FUN_140cbd683(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14574e24e(param_1,param_2);
    param_1 = param_1 + 0x520;
    param_2 = param_2 + 0x520;
  }
  return;
}



// FUNCTION 140cbd6c2 FUN_140cbd6c2 body=118 status=ok
// SIG undefined FUN_140cbd6c2(void)

void FUN_140cbd6c2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x520,8);
    iVar2 = (int)(uVar1 / 0x520);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x520,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140cbd738 FUN_140cbd738 body=442 status=ok
// SIG undefined FUN_140cbd738(void)

void FUN_140cbd738(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1447210f0();
  }
  if (0 < (int)param_1[4]) {
    uVar7 = 0;
    do {
      uVar9 = (ulonglong)uVar7;
      if ((lVar3 == 0) || (lVar8 = *(longlong *)(param_1[3] + uVar9 * 8), lVar8 == 0)) {
LAB_140cbd847:
        iVar1 = (int)param_1[4];
        if (~uVar7 + iVar1 != 0) {
          memmove((void *)(param_1[3] + uVar9 * 8),(void *)(param_1[3] + uVar9 * 8 + 8),
                  (longlong)(int)(~uVar7 + iVar1) << 3);
          iVar1 = (int)param_1[4];
        }
        *(int *)(param_1 + 4) = iVar1 + -1;
        FUN_140cbd8f4(param_1 + 3);
        uVar7 = uVar7 - 1;
      }
      else if (*(char *)(lVar8 + 0x28) == '\x01') {
        lVar4 = lVar3 + 0x460;
        if (*(longlong *)(lVar3 + 0x1f0) != 0) {
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf8);
        }
        uVar6 = *(uint *)(lVar8 + 0xc);
        uVar5 = (ulonglong)uVar6;
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        uVar6 = *(uint *)(lVar8 + 0x10);
        if (*(uint *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar6 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          local_60 = uVar5;
          local_58 = lVar4;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar6);
          }
          LOCK();
          uVar2 = *(uint *)(lVar8 + 0x10);
          bVar10 = uVar2 == 0;
          if (bVar10) {
            *(uint *)(lVar8 + 0x10) = uVar6;
            uVar2 = 0;
          }
          UNLOCK();
          lVar4 = local_58;
          uVar5 = local_60;
          if (!bVar10) {
            uVar6 = uVar2;
          }
        }
        local_50 = (ulonglong)uVar6 << 0x20 | uVar5;
        lVar8 = FUN_140633c48(lVar4,&local_50);
        if ((lVar8 == 0) || (*(int *)(lVar8 + 8) <= *(int *)(lVar8 + 0x34))) goto LAB_140cbd847;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)param_1[4]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cbd8f4 FUN_140cbd8f4 body=142 status=ok
// SIG undefined FUN_140cbd8f4(void)

void FUN_140cbd8f4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 140cbd982 FUN_140cbd982 body=40 status=ok
// SIG undefined FUN_140cbd982(void)

undefined8 FUN_140cbd982(undefined8 param_1,int param_2)

{
  FUN_140cbd9aa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cbd9aa FUN_140cbd9aa body=76 status=ok
// SIG undefined FUN_140cbd9aa(void)

void FUN_140cbd9aa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9505b0;
  plVar3 = (longlong *)param_1[0x16];
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
  FUN_140cbd9f6(param_1);
  return;
}



// FUNCTION 140cbd9f6 FUN_140cbd9f6 body=231 status=ok
// SIG undefined FUN_140cbd9f6(void)

void FUN_140cbd9f6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b94f740;
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x13) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x13) + -1;
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
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  plVar4 = (longlong *)param_1[0x12];
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
  FUN_140cbdade(param_1);
  return;
}



// FUNCTION 140cbdade FUN_140cbdade body=441 status=ok
// SIG undefined FUN_140cbdade(void)

void FUN_140cbdade(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b4a6e50;
  FUN_140368c45(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140368c45(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x54) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 9) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 9) + -1;
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
    *(undefined4 *)(param_1 + 9) = 0;
  }
  plVar4 = (longlong *)param_1[8];
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



// FUNCTION 140cbdc98 FUN_140cbdc98 body=46 status=ok
// SIG undefined FUN_140cbdc98(void)

void FUN_140cbdc98(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x35) == param_2) {
    return;
  }
  *(char *)((longlong)param_1 + 0x35) = param_2;
  (**(code **)(*param_1 + 0x228))();
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 140cbdcd0 FUN_140cbdcd0 body=335 status=ok
// SIG undefined FUN_140cbdcd0(void)

void FUN_140cbdcd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140cbde20(param_1,1);
  FUN_144760e21(*(undefined8 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x380));
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x308));
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x2e8);
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
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cbde20 FUN_140cbde20 body=800 status=ok
// SIG undefined FUN_140cbde20(void)

void FUN_140cbde20(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  lVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1a] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1b] = lVar7;
  param_1[0x1c] = DAT_14c8464f0;
  param_1[0x1d] = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x1e) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar2;
  *(undefined4 *)(param_1 + 0x1f) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar4;
  param_1[0x20] = DAT_14c8464f0;
  if ((longlong *)param_1[0x21] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21] + 0x2b0))();
    param_1[0x21] = 0;
  }
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  lVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x27] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x28] = lVar7;
  param_1[0x29] = DAT_14c8464f0;
  param_1[0x2a] = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x2b) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar4;
  param_1[0x2d] = DAT_14c8464f0;
  if ((longlong *)param_1[0x2e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2e] + 0x2b0))();
    param_1[0x2e] = 0;
  }
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x3b] = DAT_14c8464f0;
  lVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x39] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x3a] = lVar7;
  lVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x3c] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x3d] = lVar7;
  param_1[0x3e] = DAT_14c8464f0;
  lVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x3f] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x40] = lVar7;
  param_1[0x41] = DAT_14c8464f0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x49] = DAT_14c8464f0;
  lVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x47] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x48] = lVar7;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x44) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar2;
  *(undefined4 *)(param_1 + 0x45) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar4;
  param_1[0x46] = DAT_14c8464f0;
  plVar8 = (longlong *)param_1[0x4b];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0xa88))(plVar8,param_1 + 0x52);
    (**(code **)(*(longlong *)param_1[0x4b] + 0xa68))();
    param_1[0x4b] = 0;
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x4f) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x284) = uVar4;
  param_1[0x51] = DAT_14c8464f0;
  FUN_140cbe140(param_1 + 0x54,param_1,1);
  if ((param_2 == '\0') && (lVar7 = *param_1, lVar7 != 0)) {
    uVar1 = *(ulonglong *)(lVar7 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar8 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar8 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140cbe13d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x58))(plVar8,lVar7,uVar1,0x4d);
      return;
    }
    uVar9 = (uint)uVar1;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
      puVar6 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar6 = DAT_14c998080;
      }
      if ((*(uint *)(puVar6 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
        lVar5 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
        lVar7 = *(longlong *)(lVar5 + 0x18);
        if (*(longlong *)(lVar5 + 0x18) == 0) {
          lVar7 = lVar5 + 8;
        }
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x2000;
        *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 140cbe140 FUN_140cbe140 body=355 status=ok
// SIG undefined FUN_140cbe140(void)

void FUN_140cbe140(longlong *param_1,longlong *param_2,char param_3)

{
  if (param_3 != '\0') {
    if (((*param_1 != 0) && (*param_2 != 0)) && (*(longlong *)(&DAT_00006850 + *param_2) != 0)) {
      FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *param_2),param_1);
    }
    if (((param_1[1] != 0) && (*param_2 != 0)) && (*(longlong *)(&DAT_00006850 + *param_2) != 0)) {
      FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *param_2),param_1 + 1);
    }
  }
  if (((param_1[2] != 0) && (*param_2 != 0)) && (*(longlong *)(&DAT_00006850 + *param_2) != 0)) {
    FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *param_2),param_1 + 2);
  }
  if (((param_1[3] != 0) && (*param_2 != 0)) && (*(longlong *)(&DAT_00006850 + *param_2) != 0)) {
    FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *param_2),param_1 + 3);
  }
  if (((param_1[4] != 0) && (*param_2 != 0)) && (*(longlong *)(&DAT_00006850 + *param_2) != 0)) {
    FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *param_2),param_1 + 4);
  }
  if (((param_1[5] != 0) && (*param_2 != 0)) && (*(longlong *)(&DAT_00006850 + *param_2) != 0)) {
    FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *param_2),param_1 + 5);
  }
  if (((param_1[6] != 0) && (*param_2 != 0)) && (*(longlong *)(&DAT_00006850 + *param_2) != 0)) {
    FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *param_2),param_1 + 6);
    return;
  }
  return;
}



// FUNCTION 140cbe2a3 FUN_140cbe2a3 body=49 status=ok
// SIG undefined FUN_140cbe2a3(void)

longlong FUN_140cbe2a3(void)

{
  if (DAT_14cb93580 == 0) {
    FUN_140f50038(&DAT_14cb93580,&PTR_s__Script_GbxWeapon_14b482728);
  }
  return DAT_14cb93580;
}



// FUNCTION 140cbe2d4 FUN_140cbe2d4 body=76 status=ok
// SIG undefined FUN_140cbe2d4(void)

void FUN_140cbe2d4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_140cbe320(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140cbe320 FUN_140cbe320 body=49 status=ok
// SIG undefined FUN_140cbe320(void)

void FUN_140cbe320(longlong param_1,int param_2)

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



// FUNCTION 140cbe352 FUN_140cbe352 body=229 status=ok
// SIG undefined FUN_140cbe352(void)

void FUN_140cbe352(longlong *param_1,char param_2,undefined1 *param_3)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 != '\0') {
    if (*(char *)((longlong)param_1 + 0x422c) == '\x01') {
      (**(code **)(*param_1 + 0xf18))(param_1,0);
      if ((param_1[0x842] != 0) && (*(char *)(param_1[0x842] + 0x51f) == '\0')) {
        if (param_3 == (undefined1 *)0x0) {
          return;
        }
        *param_3 = 1;
        return;
      }
      lVar1 = param_1[0x841];
      if (lVar1 == 0) {
        return;
      }
      if (*(int *)(lVar1 + 0x564) <= *(int *)(lVar1 + 0x568)) {
        return;
      }
    }
    else {
      lVar1 = param_1[0x841];
      if ((lVar1 == 0) || (*(int *)(lVar1 + 0x564) <= *(int *)(lVar1 + 0x568))) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf18);
        uVar2 = 1;
        goto LAB_140cbe394;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x422a) = 1;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x422a) = 0;
  if (*(char *)((longlong)param_1 + 0x4234) != '\x01') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x4234) = 0;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf18);
  uVar2 = 0;
LAB_140cbe394:
                    /* WARNING: Could not recover jumptable at 0x000140cbe39a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
  return;
}



// FUNCTION 140cbe438 FUN_140cbe438 body=94 status=ok
// SIG undefined FUN_140cbe438(void)

void FUN_140cbe438(longlong *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)param_1 + 0x422c);
  *(char *)((longlong)param_1 + 0x4229) = param_2;
  if (param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x422a) = 0;
  }
  (**(code **)(*param_1 + 0xef8))(param_1);
  if ((((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x422c) == '\0')) && (param_1[0x842] != 0)
      ) && (*(char *)(param_1[0x842] + 0x51d) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x422b) = 0;
  }
  return;
}



// FUNCTION 140cbe4a4 FUN_140cbe4a4 body=168 status=ok
// SIG undefined FUN_140cbe4a4(void)

undefined8 * FUN_140cbe4a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0a4bc0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42e670;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cbe54c FUN_140cbe54c body=346 status=ok
// SIG undefined FUN_140cbe54c(void)

void FUN_140cbe54c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  longlong *local_70;
  longlong *local_50;
  undefined4 *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = *param_4;
  local_98 = param_4[1];
  local_90 = param_4[2];
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  local_b8 = &stack0x00000028;
  FUN_140cbe6a8(&local_88,param_2,param_3,&local_a0);
  local_40 = &local_a4;
  local_a4 = param_3;
  local_38 = &local_88;
  FUN_140cbe726(param_1 + 0x198,local_2c,&local_40,0);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  FUN_1447de57f(local_88,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_4[2];
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
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cbe6a8 FUN_140cbe6a8 body=125 status=ok
// SIG undefined FUN_140cbe6a8(void)

longlong FUN_140cbe6a8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_1403d040a();
  *(undefined8 *)(param_1 + 0x20) = *param_5;
  *(undefined8 *)(param_1 + 0x28) = *param_4;
  *(undefined8 *)(param_1 + 0x30) = param_4[1];
  lVar3 = param_4[2];
  *(longlong *)(param_1 + 0x38) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x40) = param_3;
  plVar4 = (longlong *)param_4[2];
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
  return param_1;
}



// FUNCTION 140cbe726 FUN_140cbe726 body=1099 status=ok
// SIG undefined FUN_140cbe726(void)

int * FUN_140cbe726(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  int *piVar1;
  uint *puVar2;
  void *_Src;
  void *_Dst;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_1403e7a24(param_1,iVar17);
    }
    iVar14 = (int)param_1[5];
    if (iVar14 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar10 = iVar14 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar12 = iVar14 + 1;
    iVar16 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar16 = iVar14;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar10 = iVar14;
        }
        else {
          uVar11 = iVar14 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar11) {
              uVar6 = uVar11;
            }
          }
          else {
            uVar6 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar6 << 2,0);
          iVar10 = (int)(uVar13 >> 2);
          iVar12 = -0x20;
          if ((int)uVar11 <= iVar10) {
            iVar12 = iVar10 << 5;
          }
          iVar10 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar8,iVar10);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar10 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar10 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar8;
        }
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar10 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar14 & 0x1f;
    puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar16 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar7 = (longlong)iVar17;
    iVar14 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar14;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x58) = 0xffffffff;
    }
  }
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar14 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar14 = iVar17;
  }
  puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar14 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar17 & 0x1f);
  lVar3 = *param_1;
  lVar7 = lVar7 * 0x58;
  _Src = (void *)(lVar3 + lVar7);
  puVar4 = (undefined8 *)param_3[1];
  *(undefined4 *)(lVar3 + lVar7) = *(undefined4 *)*param_3;
  *(undefined8 *)(lVar3 + 8 + lVar7) = *puVar4;
  *puVar4 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar7) = *(undefined4 *)(puVar4 + 1);
  *(undefined4 *)(lVar3 + 0x14 + lVar7) = *(undefined4 *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar7) = puVar4[2];
  *(undefined8 *)(lVar3 + 0x20 + lVar7) = puVar4[3];
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined8 *)(lVar3 + 0x28 + lVar7) = puVar4[4];
  *(undefined8 *)(lVar3 + 0x30 + lVar7) = puVar4[5];
  *(undefined8 *)(lVar3 + 0x38 + lVar7) = puVar4[6];
  *(undefined8 *)(lVar3 + 0x40 + lVar7) = puVar4[7];
  puVar4[6] = 0;
  puVar4[7] = 0;
  *(undefined4 *)(lVar3 + 0x48 + lVar7) = *(undefined4 *)(puVar4 + 8);
  *(undefined4 *)(lVar3 + 0x50 + lVar7) = 0xffffffff;
  uVar11 = *(uint *)(lVar3 + lVar7);
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & uVar11) * 4);
    if (iVar14 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar14 * 0x58);
        if (*(uint *)(*param_1 + (longlong)iVar14 * 0x58) == uVar11) {
          plVar8 = *(longlong **)((longlong)_Dst + 0x40);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar8 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
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
          plVar8 = *(longlong **)((longlong)_Dst + 0x20);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
          FUN_1447de57f(*(undefined8 *)((longlong)_Dst + 8),*(undefined4 *)((longlong)_Dst + 0x10));
          if (*(longlong *)((longlong)_Dst + 8) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,_Src,0x50);
          FUN_140cbeb72(param_1,iVar17);
          cVar5 = '\x01';
          iVar17 = iVar14;
          goto LAB_140cbe8da;
        }
        iVar14 = *(int *)((longlong)_Dst + 0x50);
      } while (iVar14 != -1);
    }
  }
  cVar5 = '\0';
LAB_140cbe8da:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar5;
  }
  if (cVar5 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar14 = 1;
    if (3 < uVar6) {
      uVar13 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar14 <= (int)param_1[9])) {
      uVar11 = (int)param_1[9] - 1U & uVar11;
      *(uint *)((longlong)_Src + 0x54) = uVar11;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      *(undefined4 *)((longlong)_Src + 0x50) =
           *(undefined4 *)
            ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
           iVar17;
    }
    else {
      *(int *)(param_1 + 9) = iVar14;
      FUN_145793b1e(param_1);
    }
  }
  *param_2 = iVar17;
  return param_2;
}



// FUNCTION 140cbeb72 FUN_140cbeb72 body=118 status=ok
// SIG undefined FUN_140cbeb72(void)

void FUN_140cbeb72(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140cbebe8 FUN_140cbebe8 body=100 status=ok
// SIG undefined FUN_140cbebe8(void)

void FUN_140cbebe8(longlong param_1,char param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  char cVar3;
  
  pbVar1 = *(byte **)(param_1 + 0x20);
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 1) == 0)) {
    *(char *)(param_1 + 0xb) = param_2;
  }
  else {
    cVar3 = *(char *)(param_1 + 0xb);
    if ((cVar3 != '\0') != (bool)param_2) {
      uVar2 = *(undefined8 *)(pbVar1 + 0x28);
      FUN_1402eb48e(uVar2,param_1);
      *(char *)(param_1 + 0xb) = param_2;
      FUN_1402eb97e(uVar2,param_1);
      cVar3 = *(char *)(param_1 + 0xb);
    }
    if (cVar3 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x24) = 0xbf800000;
    }
  }
  return;
}



// FUNCTION 140cbec4c FUN_140cbec4c body=104 status=ok
// SIG undefined FUN_140cbec4c(void)

undefined8 FUN_140cbec4c(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_140cbecb6(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cbecb6 FUN_140cbecb6 body=83 status=ok
// SIG undefined FUN_140cbecb6(void)

undefined8 FUN_140cbecb6(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = DAT_14cb8be38;
  if (DAT_14cb8be38 != 0) {
    uVar2 = FUN_1400e3c00(DAT_14cb8be38,param_1,1);
    lVar3 = FUN_14013f0dc(lVar1,uVar2,param_1,1);
    if (lVar3 != 0) {
      uVar2 = FUN_140cbed0a(lVar1,lVar3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140cbed0a FUN_140cbed0a body=88 status=ok
// SIG undefined FUN_140cbed0a(void)

undefined8 FUN_140cbed0a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = (undefined8 *)(param_2 + 0x30);
    if (*(longlong *)(param_2 + 0x30) == 0) {
      cVar2 = *(char *)(param_2 + 0x2a);
      if (cVar2 == '\0') {
        FUN_140cbed62(param_1,puVar1);
      }
      else if (cVar2 == '\x01') {
        FUN_145793ccc(param_1,puVar1);
      }
      else if (cVar2 == -1) {
        FUN_145793e16(param_1,puVar1);
      }
    }
    uVar3 = *puVar1;
  }
  return uVar3;
}



// FUNCTION 140cbed62 FUN_140cbed62 body=383 status=ok
// SIG undefined FUN_140cbed62(void)

void FUN_140cbed62(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == 0) {
    puVar5 = (undefined8 *)FUN_140cbef0c();
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14b26bef0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    *(undefined1 *)(puVar5 + 6) = 1;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    *(undefined2 *)(puVar5 + 0x11) = 0;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    *param_2 = (longlong)puVar5;
    *(undefined8 **)(param_3 + 0x30) = puVar5;
    if (*(char *)(param_3 + 0x2a) == -1) {
      FUN_1407d81c6(param_1,param_3);
    }
    else if (*param_2 != 0) {
      FUN_1407d81de(*param_2 + 8,param_3);
    }
  }
  local_48[0] = 0;
  local_48[1] = 0;
  cVar4 = (**(code **)(*param_1 + 0x418))(param_1,local_48,param_3);
  if (cVar4 != '\0') {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    cVar4 = FUN_1446e9750(param_1,&local_58,local_48,0);
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_58);
    }
    plVar3 = plStack_50;
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
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cbeee2 FUN_140cbeee2 body=41 status=ok
// SIG undefined FUN_140cbeee2(void)

void FUN_140cbeee2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 140cbef0c FUN_140cbef0c body=96 status=ok
// SIG undefined FUN_140cbef0c(void)

void FUN_140cbef0c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x1600,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x16;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140cbef6c FUN_140cbef6c body=84 status=ok
// SIG undefined FUN_140cbef6c(void)

void FUN_140cbef6c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x300,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 3;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140cbefce FUN_140cbefce body=167 status=ok
// SIG undefined FUN_140cbefce(void)

undefined8 * FUN_140cbefce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac52cf0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cbf076 FUN_140cbf076 body=496 status=ok
// SIG undefined FUN_140cbf076(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cbf076(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0x100000000;
  local_58 = &DAT_14c9a15a8;
  local_50 = 0xffffffff;
  local_48 = 0;
  if (DAT_14c9a15c0 == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  puVar4 = local_58;
  iVar12 = (int)local_60;
  uVar9 = (uint)local_50;
  iVar6 = local_50._4_4_;
  iVar8 = local_48;
  if (local_50._4_4_ < *(int *)(local_58 + 0x18)) {
    do {
      lVar10 = DAT_14c9a1598;
      lVar11 = (longlong)iVar6 * 0x60;
      *(undefined4 *)(DAT_14c9a1598 + 0x50 + lVar11) = 0;
      if (*(longlong *)(lVar10 + 0x48 + lVar11) != 0) {
        FUN_1400020a8();
      }
      FUN_140cbf268(lVar10 + lVar11 + 8);
      uVar9 = uVar9 & ~(uint)uVar13;
      puVar7 = *(undefined **)(puVar4 + 0x10);
      if (*(undefined **)(puVar4 + 0x10) == (undefined *)0x0) {
        puVar7 = puVar4;
      }
      iVar2 = *(int *)(puVar4 + 0x18);
      lVar10 = (longlong)iVar12;
      uVar5 = *(uint *)(puVar7 + lVar10 * 4) & uVar9;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar12) {
          iVar3 = iVar12;
        }
        if (iVar6 <= iVar12) break;
        lVar11 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)(puVar7 + lVar11 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar3 - lVar10 == lVar11) goto LAB_140cbf1cf;
        }
        iVar12 = iVar12 + (int)lVar11 + 1;
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140cbf1cf:
  DAT_14c9a15a0 = 0;
  if (DAT_14c9a15a4 != 0) {
    FUN_1448fc38a(&DAT_14c9a1598,0);
  }
  _DAT_14c9a15c8 = 0xffffffff;
  DAT_14c9a15c0 = 0;
  if (0x80 < DAT_14c9a15c4) {
    DAT_14c9a15c4 = 0x80;
    FUN_1446efbd8(&DAT_14c9a15a8,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cbf268 FUN_140cbf268 body=55 status=ok
// SIG undefined FUN_140cbf268(void)

void FUN_140cbf268(longlong *param_1)

{
  FUN_140cbf2a0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cbf2a0 FUN_140cbf2a0 body=550 status=ok
// SIG undefined FUN_140cbf2a0(void)

void FUN_140cbf2a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140cbf39f;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x28 + (longlong)iVar6 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x40) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140cbf39f;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140cbf39f:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140cbf4da FUN_140cbf4da body=103 status=ok
// SIG undefined FUN_140cbf4da(void)

void FUN_140cbf4da(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  (**(code **)(*param_2 + 0x388))(param_2,*param_1,1,0x3f800000);
  FUN_140cbf542(param_2,*(undefined4 *)((longlong)param_1 + 0xc),0);
  FUN_140cbf6c6(param_2,*(undefined4 *)(param_1 + 2));
  uVar1 = (ulonglong)((*(uint *)(param_1 + 1) & 2) >> 1);
  FUN_140cbfb16(param_2,uVar1);
  FUN_140cbf890(param_2,CONCAT71((int7)(uVar1 >> 8),*(undefined1 *)(param_1 + 1)) &
                        0xffffffffffffff01);
  return;
}



// FUNCTION 140cbf542 FUN_140cbf542 body=386 status=ok
// SIG undefined FUN_140cbf542(void)

void FUN_140cbf542(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
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
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      if (DAT_14cad2858 == 0) {
        local_50 = &local_38;
        local_38 = FUN_144a7958c;
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
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_140cbfdec(param_1,param_2,*(undefined4 *)(lVar2 + 0x984),param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cbf6c6 FUN_140cbf6c6 body=456 status=ok
// SIG undefined FUN_140cbf6c6(void)

void FUN_140cbf6c6(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
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
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1[4];
    if (lVar4 != 0) {
      if (DAT_14cad2858 == 0) {
        local_50 = &local_38;
        local_38 = FUN_144a7958c;
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
      lVar4 = *(longlong *)(lVar4 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar4 = param_1[0x7c];
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar4;
    }
  }
  *(undefined4 *)(lVar4 + 0x9a4) = param_2;
  if (0 < (longlong)(int)param_1[0x12]) {
    uVar3 = (longlong)(int)param_1[0x12] + 1;
    do {
      plVar2 = *(longlong **)(param_1[0x11] + -0x10 + uVar3 * 8);
      if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) &&
         ((*(float *)(plVar2 + 0x2e) != 0.0 || (NAN(*(float *)(plVar2 + 0x2e)))))) {
        *(undefined4 *)((longlong)plVar2 + 0x14c) = param_2;
        break;
      }
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cbf890 FUN_140cbf890 body=617 status=ok
// SIG undefined FUN_140cbf890(void)

void FUN_140cbf890(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      if (DAT_14cad2858 == 0) {
        local_40 = &local_28;
        local_28 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146395584;
        local_48 = &LAB_147a0ba80;
        local_50 = &LAB_14575ccce;
        local_58 = L"Engine";
        local_60 = 0x40000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  *(undefined1 *)(lVar2 + 0x9a8) = param_2;
  lVar2 = param_1[0x87];
  if (lVar2 != 0) {
    if (DAT_14cacbb10 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463a1b5a;
      local_48 = &LAB_147903fa7;
      local_50 = &LAB_1459b1fdd;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x1e8;
      FUN_14081cfa3(L"/Script/Engine",L"AnimMontage",&DAT_14cacbb10,FUN_1463a4b6e);
      lVar2 = param_1[0x87];
      if (lVar2 == 0) goto LAB_140cbf950;
    }
    if ((((DAT_14cacbb10 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0)) &&
        (*(int *)(DAT_14cacbb10 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cacbb10 + 0x38) * 8) ==
        DAT_14cacbb10 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_140cbf950:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cbfb16 FUN_140cbfb16 body=700 status=ok
// SIG undefined FUN_140cbfb16(void)

void FUN_140cbfb16(longlong *param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1[4];
    if (lVar4 != 0) {
      if (DAT_14cad2858 == 0) {
        local_40 = &local_28;
        local_28 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146395584;
        local_48 = &LAB_147a0ba80;
        local_50 = &LAB_14575ccce;
        local_58 = L"Engine";
        local_60 = 0x40000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar4 = *(longlong *)(lVar4 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar4 = param_1[0x7c];
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar4;
    }
  }
  *(char *)(lVar4 + 0x9a9) = param_2;
  if (0 < (longlong)(int)param_1[0x12]) {
    uVar3 = (longlong)(int)param_1[0x12] + 1;
    do {
      plVar2 = *(longlong **)(param_1[0x11] + -0x10 + uVar3 * 8);
      if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) &&
         ((*(float *)(plVar2 + 0x2e) != 0.0 || (NAN(*(float *)(plVar2 + 0x2e)))))) {
        *(char *)(plVar2 + 7) = param_2;
        goto LAB_140cbfba9;
      }
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  if ((param_2 != '\0') && (lVar4 = param_1[0x87], lVar4 != 0)) {
    if (DAT_14cacbb10 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463a1b5a;
      local_48 = &LAB_147903fa7;
      local_50 = &LAB_1459b1fdd;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x1e8;
      FUN_14081cfa3(L"/Script/Engine",L"AnimMontage",&DAT_14cacbb10,FUN_1463a4b6e);
      lVar4 = param_1[0x87];
      if (lVar4 == 0) goto LAB_140cbfba9;
    }
    if ((((DAT_14cacbb10 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x10), lVar4 != 0)) &&
        (*(int *)(DAT_14cacbb10 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cacbb10 + 0x38) * 8) ==
        DAT_14cacbb10 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_140cbfba9:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cbfdec FUN_140cbfdec body=926 status=ok
// SIG undefined FUN_140cbfdec(void)

void FUN_140cbfdec(longlong *param_1,float param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  undefined4 local_f4;
  code **local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined6 local_64;
  undefined2 uStack_5e;
  undefined6 uStack_5c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_44 = param_3;
  if (param_1 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1[4];
    if (lVar8 != 0) {
      if (DAT_14cad2858 == 0) {
        local_110 = &local_d8;
        local_d8 = FUN_144a7958c;
        local_100 = FUN_14081d0ea;
        local_108 = &LAB_146395584;
        local_118 = &LAB_147a0ba80;
        local_120 = &LAB_14575ccce;
        local_128 = L"Engine";
        local_130 = 0x40000000000;
        local_138 = 0x10000004;
        local_140 = 0x10;
        local_148 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar8 = *(longlong *)(lVar8 + 0x10);
      iVar3 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar3 <= *(int *)(lVar8 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar3 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar3 >> 8),1),1);
      }
    }
    lVar8 = param_1[0x7c];
    if (lVar8 == 0) {
      lVar8 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar8;
    }
  }
  fVar9 = (float)FUN_140cc018c(param_1);
  if (fVar9 <= param_2) {
    param_2 = fVar9;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if ((*(float *)(lVar8 + 0x984) != param_2) || (NAN(*(float *)(lVar8 + 0x984)) || NAN(param_2))) {
    *(undefined4 *)(lVar8 + 0x994) = 0xfffffffe;
    *(undefined4 *)(lVar8 + 0x99c) = 0xfffffffe;
  }
  *(float *)(lVar8 + 0x984) = param_2;
  if (0 < (longlong)(int)param_1[0x12]) {
    uVar7 = (longlong)(int)param_1[0x12] + 1;
    do {
      plVar4 = *(longlong **)(param_1[0x11] + -0x10 + uVar7 * 8);
      if (((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) &&
         ((*(float *)(plVar4 + 0x2e) != 0.0 || (NAN(*(float *)(plVar4 + 0x2e)))))) {
        *(float *)(plVar4 + 0x29) = param_2;
        *(undefined4 *)((longlong)plVar4 + 0x4c) = 0xfffffffe;
        *(undefined4 *)((longlong)plVar4 + 0x54) = 0xfffffffe;
        break;
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  if ((param_4 != '\0') && (param_1[0x87] != 0)) {
    lVar6 = FUN_14063d1f6();
    plVar4 = (longlong *)param_1[0x87];
    if (((plVar4 != (longlong *)0x0) &&
        (((lVar6 != 0 && (lVar5 = plVar4[2], lVar5 != 0)) &&
         (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      local_f0 = &local_d8;
      local_d8 = (code *)0x0;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      uStack_c4 = 0;
      uStack_c0 = 0x3f800000;
      uStack_bc = 0;
      local_b8 = 0x100;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (longlong *)0x0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_64 = 0;
      uStack_5e = 0;
      uStack_5c = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      FUN_144826242(param_1 + 0x38,param_1[4]);
      local_f4 = *(undefined4 *)(lVar8 + 0x984);
      (**(code **)(*plVar4 + 0x2c8))(plVar4,&local_44,&local_f4,&local_f0);
      if (0 < (int)uStack_e0) {
        local_148 = 0x3f800000;
        FUN_14094ddd6(param_1 + 0x38,1,&local_e8,param_1 + 0x3a);
      }
      FUN_1401621ce(param_1,0);
      FUN_1448262fc(local_e8,uStack_e0 & 0xffffffff);
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      plVar4 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_a0)(local_a0);
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
  }
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cc018c FUN_140cc018c body=181 status=ok
// SIG undefined FUN_140cc018c(void)

ulonglong FUN_140cc018c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x438) != 0) {
    lVar3 = FUN_1405b04b6();
    if (*(longlong *)(param_1 + 0x438) != 0) {
      if ((((lVar3 == 0) ||
           (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x438) + 0x10), lVar1 == 0)) ||
          (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        lVar3 = FUN_14063d1f6();
        plVar2 = *(longlong **)(param_1 + 0x438);
        if (((plVar2 != (longlong *)0x0) && (lVar3 != 0)) &&
           ((lVar1 = plVar2[2], lVar1 != 0 &&
            ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
              lVar3 + 0x30)))))) {
                    /* WARNING: Could not recover jumptable at 0x000140cc0224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar2 + 0x2b0))();
          return uVar4;
        }
      }
      else {
        uVar5 = 0x3f800000;
      }
    }
  }
  return (ulonglong)uVar5;
}



// FUNCTION 140cc024c FUN_140cc024c body=187 status=ok
// SIG undefined FUN_140cc024c(void)

void FUN_140cc024c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x18);
  lVar8 = (longlong)iVar4;
  FUN_140cc0368();
  uVar5 = *(uint *)(param_2 + 0x18);
  if ((longlong)(int)uVar5 != 0) {
    iVar6 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar6 + uVar5;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar6) < uVar5) {
      FUN_1408abc7e(plVar1,iVar6);
    }
    memcpy((void *)((longlong)iVar6 * 8 + *plVar1),*(void **)(param_2 + 0x10),
           (longlong)(int)uVar5 << 3);
  }
  if ((0 < iVar3) && (iVar6 = *(int *)(param_1 + 0x18), iVar4 < iVar6)) {
    do {
      lVar7 = *plVar1;
      piVar2 = (int *)(lVar7 + lVar8 * 8);
      *piVar2 = *piVar2 + iVar3;
      piVar2 = (int *)(lVar7 + 4 + lVar8 * 8);
      *piVar2 = *piVar2 + iVar3;
      lVar8 = lVar8 + 1;
    } while (iVar6 != lVar8);
  }
  FUN_140cc0308(param_1 + 0x20,param_2 + 0x20);
  FUN_140cc03ce(param_1 + 0x30,param_2 + 0x30);
  return;
}



// FUNCTION 140cc0308 FUN_140cc0308 body=95 status=ok
// SIG undefined FUN_140cc0308(void)

void FUN_140cc0308(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_146fdf430(param_1,iVar2);
  }
  FUN_146fdf1fd((longlong)iVar2 * 0x28 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 140cc0368 FUN_140cc0368 body=102 status=ok
// SIG undefined FUN_140cc0368(void)

void FUN_140cc0368(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1408ab84c(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x20 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 5);
    return;
  }
  return;
}



// FUNCTION 140cc03ce FUN_140cc03ce body=103 status=ok
// SIG undefined FUN_140cc03ce(void)

void FUN_140cc03ce(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_146fdf4c4(param_1,iVar2);
  }
  memcpy((void *)((longlong)iVar2 * 0x60 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x60);
  return;
}



// FUNCTION 140cc0436 FUN_140cc0436 body=30 status=ok
// SIG undefined FUN_140cc0436(void)

void FUN_140cc0436(longlong *param_1)

{
  (**(code **)(*param_1 + 0x578))();
  FUN_140cc0454(param_1);
  return;
}



// FUNCTION 140cc0454 FUN_140cc0454 body=740 status=ok
// SIG undefined FUN_140cc0454(void)

void FUN_140cc0454(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
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
  if ((*(char *)(param_1 + 0x178) != '\x03') || ((*(byte *)(param_1 + 99) & 8) == 0))
  goto LAB_140cc05bd;
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) &&
     ((lVar4 = *(longlong *)(param_1 + 0x20), lVar4 != 0 && (-1 < (short)*(undefined4 *)(lVar4 + 8))
      ))) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) != 0) goto LAB_140cc05e4;
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_30;
      local_30 = (code *)&LAB_14355090c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147b8e16d;
      local_60 = (code *)&LAB_140810a38;
      local_68 = L"Engine";
      local_70 = 0x800000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar4 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1468c5283;
      local_60 = FUN_142809da0;
      local_68 = L"Engine";
      local_70 = 0x400000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (lVar6 == 0) goto LAB_140cc05e4;
    iVar2 = *(int *)(lVar4 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar2) ||
         (lVar5 = lVar6,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
         lVar4 + 0x30)) {
        lVar5 = 0;
      }
    } while ((lVar5 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
    if (lVar5 == 0) goto LAB_140cc05e4;
    lVar4 = *(longlong *)(lVar5 + 0xc0);
  }
  else {
LAB_140cc05e4:
    lVar4 = 0;
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892fa8) {
    if (lVar4 == 0) goto LAB_140cc05bd;
    lVar4 = *(longlong *)(lVar4 + 0x38);
  }
  else {
    lVar4 = FUN_1456d2c7c(DAT_14cb0d2b0,lVar4,uVar3);
  }
  if ((lVar4 != 0) && (iVar2 = *(int *)(lVar4 + 0x100), (longlong)iVar2 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0xf8);
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar6);
      if (lVar5 != 0) {
        FUN_140c0775e(lVar5,param_1);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
LAB_140cc05bd:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc073a FUN_140cc073a body=1251 status=ok
// SIG undefined FUN_140cc073a(void)

void FUN_140cc073a(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined1 *local_1c0;
  uint *local_1b8;
  longlong local_1b0;
  int local_1a8;
  undefined2 local_19a;
  uint6 local_198;
  undefined2 uStack_192;
  undefined4 local_190;
  undefined1 local_18c;
  uint local_188 [8];
  undefined8 local_168;
  undefined8 local_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_108;
  undefined8 local_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  lVar5 = *(longlong *)(param_1 + 0x28);
  local_1e8 = param_3;
  local_1e0 = param_2;
  local_1c0 = local_d8;
  FUN_14009d97a(lVar5 + 0x2a0);
  lVar6 = *(longlong *)(lVar5 + 0x2a8);
  if (*(longlong *)(lVar5 + 0x2a8) == 0) {
    lVar6 = lVar5 + 0x2a0;
  }
  iVar8 = *(int *)(lVar5 + 0x2b0);
  if ((longlong)iVar8 != 0) {
    lVar9 = 0;
    do {
      _local_198 = *(undefined8 *)
                    (*(longlong *)(lVar5 + 0x358) + 0x20 +
                    (ulonglong)*(ushort *)(lVar6 + lVar9) * 0x28);
      FUN_140cc0c1e(&local_1c0,&local_198);
      lVar9 = lVar9 + 2;
    } while ((longlong)iVar8 * 2 != lVar9);
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  FUN_14009d97a(lVar5 + 0x2a0);
  lVar6 = lVar5 + 0x2b8;
  if (*(longlong *)(lVar5 + 0x2c8) != 0) {
    lVar6 = *(longlong *)(lVar5 + 0x2c8);
  }
  iVar8 = *(int *)(lVar5 + 0x2d0);
  if ((longlong)iVar8 != 0) {
    lVar9 = 0;
    do {
      _local_198 = *(undefined8 *)
                    (*(longlong *)(lVar5 + 0x358) + 0x20 +
                    (ulonglong)*(ushort *)(lVar6 + lVar9) * 0x28);
      FUN_140cc0c1e(&local_1c0,&local_198);
      lVar9 = lVar9 + 2;
    } while ((longlong)iVar8 * 2 != lVar9);
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  FUN_14009d97a(lVar5 + 0x2a0);
  lVar6 = lVar5 + 0x2d8;
  if (*(longlong *)(lVar5 + 0x2f8) != 0) {
    lVar6 = *(longlong *)(lVar5 + 0x2f8);
  }
  iVar8 = *(int *)(lVar5 + 0x300);
  if ((longlong)iVar8 != 0) {
    lVar9 = 0;
    do {
      _local_198 = *(undefined8 *)
                    (*(longlong *)(lVar5 + 0x358) + 0x20 +
                    (ulonglong)*(ushort *)(lVar6 + lVar9) * 0x28);
      FUN_140cc0c1e(&local_1c0,&local_198);
      lVar9 = lVar9 + 2;
    } while ((longlong)iVar8 * 2 != lVar9);
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  FUN_14009d97a(lVar5 + 0x2a0);
  lVar6 = lVar5 + 0x308;
  if (*(longlong *)(lVar5 + 0x328) != 0) {
    lVar6 = *(longlong *)(lVar5 + 0x328);
  }
  iVar8 = *(int *)(lVar5 + 0x330);
  if ((longlong)iVar8 != 0) {
    lVar9 = 0;
    do {
      _local_198 = *(undefined8 *)
                    (*(longlong *)(lVar5 + 0x358) + 0x20 +
                    (ulonglong)*(ushort *)(lVar6 + lVar9) * 0x28);
      FUN_140cc0c1e(&local_1c0,&local_198);
      lVar9 = lVar9 + 2;
    } while ((longlong)iVar8 * 2 != lVar9);
  }
  local_1d8 = local_1e0;
  local_1d0 = local_1e8;
  lVar5 = *(longlong *)(param_1 + 0x28);
  local_1c8 = lVar5 + 0x430;
  if (0 < (longlong)(int)local_50) {
    uVar10 = (longlong)(int)local_50 + 1;
    do {
      puVar4 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar4 = local_d8;
      }
      (**(code **)(**(longlong **)(puVar4 + uVar10 * 8 + -0x10) + 0x18))
                (*(longlong **)(puVar4 + uVar10 * 8 + -0x10),&local_1d8);
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
    lVar5 = *(longlong *)(param_1 + 0x28);
  }
  lVar5 = *(longlong *)(lVar5 + 0x438);
  if (lVar5 != 0) {
    lVar6 = FUN_14009d2a0();
    uVar2 = *(ushort *)(lVar6 + 0x11c);
    iVar11 = uVar2 + 1;
    local_1b8 = local_188;
    local_198 = (uint6)(uint5)local_198;
    local_190 = 0x6ff;
    local_18c = 0;
    local_168 = 0x10000000000;
    local_140 = 0x10000000000;
    local_108 = 0x10000000000;
    local_138 = 0;
    uStack_130 = 0;
    local_e0 = 0x10000000000;
    iVar8 = iVar11;
    if (0xff < uVar2) {
      FUN_14497ddce(local_1b8,0);
      iVar8 = (int)local_168 + iVar11;
    }
    iVar3 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar3 = iVar8;
    }
    local_168 = CONCAT44(local_168._4_4_,iVar8);
    if (iVar8 % 0x20 != 0) {
      bVar7 = -(char)(iVar8 % 0x20);
      local_188[iVar3 >> 5] = (local_188[iVar3 >> 5] << (bVar7 & 0x1f)) >> (bVar7 & 0x1f);
    }
    FUN_1447c45ca(local_1b8,0,iVar11,0);
    local_188[uVar2 >> 5] = local_188[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    lVar6 = *(longlong *)(param_1 + 0x28);
    local_1b0 = lVar6 + 0x28;
    cVar1 = *(char *)(lVar6 + 0x298);
    if (cVar1 == '\0') {
      *(int *)(lVar6 + 0x28c) = *(int *)(lVar6 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar6 + 0x28c) = *(int *)(lVar6 + 0x28c) + 1;
      UNLOCK();
    }
    iVar11 = FUN_1403b8464(&local_1b8,0);
    iVar8 = *(int *)(lVar6 + 0x38);
    local_1a8 = iVar11;
    if (iVar11 != iVar8) {
      local_1e8 = local_1b0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(local_1e8 + 0x60) + (longlong)iVar11 * 8);
        if (cVar1 == '\0') {
          *(undefined4 *)(lVar6 + 0x14) = 0;
          lVar9 = lVar6;
        }
        else {
          lVar9 = 0;
        }
        uVar2 = *(ushort *)(lVar6 + 0xe);
        local_1a8 = iVar11;
        if ((ulonglong)uVar2 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x18);
          uVar10 = 0;
          do {
            local_19a = *(undefined2 *)(lVar6 + uVar10 * 2);
            FUN_140cc0c8a(lVar5,&local_19a);
            uVar10 = uVar10 + 1;
          } while (uVar2 != uVar10);
        }
        if (lVar9 != 0) {
          *(undefined4 *)(lVar9 + 0x14) = 1;
        }
        iVar11 = FUN_1403b8464(&local_1b8,iVar11 + 1);
        local_1a8 = iVar11;
      } while (iVar11 != iVar8);
    }
    if (local_1b8 != (uint *)0x0) {
      if (*(char *)(local_1b0 + 0x270) == '\0') {
        *(int *)(local_1b0 + 0x264) = *(int *)(local_1b0 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_1b0 + 0x264) = *(int *)(local_1b0 + 0x264) + -1;
        UNLOCK();
      }
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(local_1c8 + 0x110) = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cc0c1e FUN_140cc0c1e body=107 status=ok
// SIG undefined FUN_140cc0c1e(void)

void FUN_140cc0c1e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    uVar3 = FUN_141302efc();
    lVar4 = FUN_144718840(lVar4,uVar3);
    if (lVar4 != 0) {
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 0x88);
      *(uint *)(lVar2 + 0x88) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x8c) < iVar1 + 1U) {
        FUN_1475522b4(lVar2,iVar1);
      }
      lVar5 = *(longlong *)(lVar2 + 0x80);
      if (*(longlong *)(lVar2 + 0x80) == 0) {
        lVar5 = lVar2;
      }
      *(longlong *)(lVar5 + (longlong)iVar1 * 8) = lVar4;
    }
  }
  return;
}



// FUNCTION 140cc0c8a FUN_140cc0c8a body=213 status=ok
// SIG undefined FUN_140cc0c8a(void)

void FUN_140cc0c8a(longlong param_1,ushort *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uint)*param_2) * 4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = lVar4 + (longlong)iVar2 * 0x38;
        if (*(ushort *)(lVar4 + (longlong)iVar2 * 0x38) == *param_2) {
          if (lVar1 == 0) {
            return;
          }
          if (lVar1 + 8 == 0) {
            return;
          }
          lVar4 = (longlong)*(int *)(lVar1 + 0x28);
          if (0 < lVar4) {
            uVar5 = lVar4 + 1;
            lVar4 = lVar4 * 0x14;
            do {
              lVar4 = lVar4 + -0x14;
              lVar3 = *(longlong *)(lVar1 + 0x20);
              if (*(longlong *)(lVar1 + 0x20) == 0) {
                lVar3 = lVar1 + 8;
              }
              FUN_140cc0e78(*(undefined8 *)(param_1 + 0x58),lVar3 + lVar4);
              uVar5 = uVar5 - 1;
            } while (1 < uVar5);
          }
          FUN_140cc0d60((longlong *)(param_1 + 8),param_2);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x30);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 140cc0d60 FUN_140cc0d60 body=100 status=ok
// SIG undefined FUN_140cc0d60(void)

undefined8 FUN_140cc0d60(longlong *param_1,ushort *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ushort *)(*param_1 + (longlong)iVar1 * 0x38) == *param_2) {
          FUN_140cc0dc4();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140cc0dc4 FUN_140cc0dc4 body=92 status=ok
// SIG undefined FUN_140cc0dc4(void)

void FUN_140cc0dc4(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x38 + 0x30);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_140cc0e20(param_1,param_2,1);
  return;
}



// FUNCTION 140cc0e20 FUN_140cc0e20 body=87 status=ok
// SIG undefined FUN_140cc0e20(void)

void FUN_140cc0e20(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x38 + *param_1 + 0x20);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 7;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_140cc10cc(param_1,param_2,param_3);
  return;
}



// FUNCTION 140cc0e78 FUN_140cc0e78 body=595 status=ok
// SIG undefined FUN_140cc0e78(void)

void FUN_140cc0e78(longlong param_1,int *param_2)

{
  short *psVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 unaff_RBP;
  int *piVar12;
  short sVar13;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = FUN_140adecae();
  if (lVar8 != 0) {
    sVar13 = (short)*(undefined4 *)(lVar8 + 0xc) + -1;
    *(short *)(lVar8 + 0xc) = sVar13;
    if ((char)param_2[4] == '\x01') {
      psVar1 = (short *)(lVar8 + 0xe);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 == 0) {
        FUN_140875a5e(param_1,&local_48,param_2[1]);
        local_58 = *(undefined8 *)(param_1 + 0x108);
        local_68 = &local_58;
        local_50 = param_2[3];
        cVar6 = (**(code **)(*local_48 + 0x20))
                          (local_48,param_2[2],CONCAT71((int7)((ulonglong)local_68 >> 8),2),
                           CONCAT71((int7)((ulonglong)unaff_RBP >> 8),sVar13 != 0) & 0xffffffff);
        if (cVar6 == '\0') {
          iVar3 = *param_2;
          if ((longlong)iVar3 == -1) {
            FUN_145793fba(param_1 + 0x98,param_2 + 1);
          }
          else {
            lVar4 = *(longlong *)(param_1 + 0x60);
            lVar11 = (longlong)iVar3 * 0x70;
            iVar7 = *(int *)(lVar4 + 0x68 + lVar11);
            if (iVar7 == 1) {
              (**(code **)(**(longlong **)(lVar4 + lVar11) + 0x10))
                        (*(longlong **)(lVar4 + lVar11),iVar3);
              lVar8 = *(longlong *)(param_1 + 0x60);
              if (*(longlong *)(lVar8 + 0x60 + lVar11) != 0) {
                FUN_1400020a8();
              }
              plVar5 = *(longlong **)(lVar8 + lVar11 + 8);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar5 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar5 + 0xc);
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (*piVar12 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
              FUN_140875ae0((longlong *)(param_1 + 0x60),iVar3);
            }
            else {
              lVar10 = *(longlong *)(lVar4 + lVar11 + 0x60);
              if (lVar10 == 0) {
                lVar10 = lVar4 + lVar11 + 0x10;
              }
              piVar12 = (int *)(lVar4 + lVar11 + 0x68);
              uVar9 = (int)(lVar8 - lVar10 >> 2) * -0x33333333;
              if (~uVar9 + iVar7 != 0) {
                memmove((void *)(lVar10 + (longlong)(int)uVar9 * 0x14),
                        (void *)(lVar10 + (longlong)(int)uVar9 * 0x14 + 0x14),
                        (longlong)(int)(~uVar9 + iVar7) * 0x14);
                iVar7 = *piVar12;
              }
              *piVar12 = iVar7 + -1;
            }
          }
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_40 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar12 = (int *)((longlong)local_40 + 0xc);
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (*piVar12 == 0) {
                (**(code **)(*local_40 + 0x10))(local_40);
              }
            }
          }
          goto LAB_140cc0fa2;
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_40 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar12 = (int *)((longlong)local_40 + 0xc);
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (*piVar12 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
      }
    }
    if (sVar13 == 0) {
      *(undefined1 *)(lVar8 + 0x10) = 0;
      *(int *)(lVar8 + 8) = param_2[3];
    }
  }
LAB_140cc0fa2:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc10cc FUN_140cc10cc body=138 status=ok
// SIG undefined FUN_140cc10cc(void)

void FUN_140cc10cc(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140cc1156 FUN_140cc1156 body=1143 status=ok
// SIG undefined FUN_140cc1156(void)

ulonglong FUN_140cc1156(longlong param_1,int param_2,char param_3,char param_4,undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  undefined8 ***pppuVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  ulonglong unaff_RBP;
  undefined7 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 ***local_78 [4];
  byte local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = *(longlong **)(param_1 + 0xb8);
  if (plVar5 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar5 + 8))
                      (plVar5,(longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68));
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar7 == '\0') goto LAB_140cc12b3;
  }
  uVar11 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar16 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
      local_88 = *puVar16;
      uStack_84 = puVar16[1];
      uStack_80 = puVar16[2];
      uStack_7c = puVar16[3];
      FUN_140cc163e(local_78,puVar16 + 4);
      local_50 = *(byte *)(puVar16 + 0xe);
      FUN_140cc16f8(param_1 + 0x18,&local_88);
      FUN_140275104(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40 + 0x10);
      FUN_140cc15ce(param_1 + 0x68);
      uVar4 = *(uint *)(param_1 + 0xa8);
      uVar10 = 0;
      if (0 < (int)uVar4) {
        uVar10 = 0;
        uVar13 = (ulonglong)uVar4;
        uVar14 = uVar4;
        do {
          uVar13 = uVar13 >> 1;
          uVar15 = (uint)uVar13 + (int)uVar10;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x30) < param_2) {
            uVar10 = (ulonglong)(uVar15 + (uVar14 & 1));
          }
          bVar6 = 1 < uVar14;
          uVar14 = (uint)uVar13;
        } while (bVar6);
      }
      if (((int)uVar10 < (int)uVar4) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar10 * 0x30) <= param_2)) {
        FUN_14756c10c(param_1 + 0xa0);
      }
      if ((local_50 & 1) != 0) {
        FUN_140cc1694(&local_88,local_78,param_5);
      }
      if ((local_58 & 1) != 0) {
        ppppuVar9 = local_78;
        if ((local_58 & 2) == 0) {
          ppppuVar9 = (undefined8 ****)local_78[0];
        }
        local_58 = local_58 & 0xfe;
        pppuVar8 = *ppppuVar9;
LAB_140cc129c:
        (*(code *)*pppuVar8)(ppppuVar9,0);
        if ((local_58 & 2) == 0) {
          FUN_1400020a8(local_78[0]);
        }
      }
LAB_140cc12b1:
      unaff_RBP = 0;
      goto LAB_140cc12b3;
    }
    unaff_RBP = CONCAT71(uVar11,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + (longlong)param_2 * 0x40) & 1) == 0)
    goto LAB_140cc12b3;
    puVar16 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xa8);
    lVar12 = *(longlong *)(param_1 + 0xa0);
    uVar14 = 0;
    if (0 < (int)uVar4) {
      uVar14 = 0;
      uVar15 = uVar4;
      do {
        uVar2 = (uVar15 >> 1) + uVar14;
        if (*(int *)(lVar12 + (ulonglong)uVar2 * 0x30) < param_2) {
          uVar14 = uVar2 + (uVar15 & 1);
        }
        bVar6 = 1 < uVar15;
        uVar15 = uVar15 >> 1;
      } while (bVar6);
    }
    lVar1 = param_1 + 0xa0;
    if ((((int)uVar14 < (int)uVar4) && (*(int *)(lVar12 + (ulonglong)uVar14 * 0x30) <= param_2)) &&
       (lVar12 = lVar12 + (ulonglong)uVar14 * 0x30 + 8, lVar12 != 0)) {
      FUN_140cc1694((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68),lVar12,param_5);
      uVar4 = *(uint *)(param_1 + 0xa8);
      uVar10 = 0;
      if (0 < (int)uVar4) {
        uVar13 = (ulonglong)uVar4;
        uVar14 = uVar4;
        do {
          uVar13 = uVar13 >> 1;
          uVar15 = (uint)uVar13 + (int)uVar10;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x30) < param_2) {
            uVar10 = (ulonglong)(uVar15 + (uVar14 & 1));
          }
          bVar6 = 1 < uVar14;
          uVar14 = (uint)uVar13;
        } while (bVar6);
      }
      unaff_RBP = CONCAT71(uVar11,1);
      if (((int)uVar10 < (int)uVar4) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar10 * 0x30) <= param_2)) {
        FUN_14756c10c(lVar1);
      }
      goto LAB_140cc12b3;
    }
    unaff_RBP = CONCAT71(uVar11,1);
    if (param_4 == '\0') {
      lVar12 = (longlong)param_2 * 0x40;
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + lVar12);
      puVar16 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar12);
      local_90 = lVar1;
      if ((bVar3 & 2) == 0) {
        local_88 = *puVar16;
        uStack_84 = puVar16[1];
        uStack_80 = puVar16[2];
        uStack_7c = puVar16[3];
        FUN_140cc163e(local_78,puVar16 + 4);
        local_50 = *(byte *)(puVar16 + 0xe);
        FUN_140cc16f8(param_1 + 0x18,&local_88);
        FUN_140275104(*(longlong *)(param_1 + 0x68) + lVar12 + 0x10);
        FUN_140cc15ce(param_1 + 0x68);
        uVar4 = *(uint *)(param_1 + 0xa8);
        uVar10 = 0;
        if (0 < (int)uVar4) {
          uVar10 = 0;
          uVar13 = (ulonglong)uVar4;
          uVar14 = uVar4;
          do {
            uVar13 = uVar13 >> 1;
            uVar15 = (uint)uVar13 + (int)uVar10;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x30) < param_2) {
              uVar10 = (ulonglong)(uVar15 + (uVar14 & 1));
            }
            bVar6 = 1 < uVar14;
            uVar14 = (uint)uVar13;
          } while (bVar6);
        }
        if (((int)uVar10 < (int)uVar4) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar10 * 0x30) <= param_2)) {
          FUN_14756c10c(local_90);
        }
        if ((local_50 & 1) != 0) {
          FUN_140cc1694(&local_88,local_78,param_5);
        }
        if ((local_58 & 1) != 0) {
          ppppuVar9 = local_78;
          if ((local_58 & 2) == 0) {
            ppppuVar9 = (undefined8 ****)local_78[0];
          }
          local_58 = local_58 & 0xfe;
          pppuVar8 = *ppppuVar9;
          goto LAB_140cc129c;
        }
        goto LAB_140cc12b1;
      }
      if ((bVar3 & 1) == 0) goto LAB_140cc12b3;
    }
    else {
      if (param_4 != '\x01') goto LAB_140cc12b3;
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + (longlong)param_2 * 0x40);
      if ((bVar3 & 1) == 0) goto LAB_140cc12b3;
      puVar16 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
      *(byte *)(puVar16 + 0xe) = bVar3 | 2;
    }
  }
  FUN_140cc1694(puVar16,puVar16 + 4,param_5);
LAB_140cc12b3:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 140cc15ce FUN_140cc15ce body=112 status=ok
// SIG undefined FUN_140cc15ce(void)

void FUN_140cc15ce(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 140cc163e FUN_140cc163e body=85 status=ok
// SIG undefined FUN_140cc163e(void)

undefined8 * FUN_140cc163e(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc | 2;
  FUN_140275104();
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    bVar1 = *(byte *)(param_2 + 4);
    *(byte *)(param_2 + 4) = bVar1 & 0xfe;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd | bVar1 & 2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  return param_1;
}



// FUNCTION 140cc1694 FUN_140cc1694 body=100 status=ok
// SIG undefined FUN_140cc1694(void)

void FUN_140cc1694(uint *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && (((plVar2 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar2 != (longlong *)0x0 && (*(uint *)(plVar2 + 2) == param_1[1])) &&
         (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))))) {
    if ((*(byte *)(param_2 + 4) & 2) == 0) {
      param_2 = (longlong *)*param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x000140cc16f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2,*plVar2,param_3,*(code **)(*param_2 + 8));
    return;
  }
  return;
}



// FUNCTION 140cc16f8 FUN_140cc16f8 body=343 status=ok
// SIG undefined FUN_140cc16f8(void)

void FUN_140cc16f8(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = param_2[1];
    uVar11 = uVar2 >> 0xd ^ *param_2 - uVar2;
    uVar12 = uVar11 << 8 ^ (-0x61c88647 - uVar2) - uVar11;
    uVar7 = uVar12 >> 0xd ^ (uVar2 - uVar11) - uVar12;
    uVar11 = uVar7 >> 0xc ^ (uVar11 - uVar12) - uVar7;
    uVar12 = uVar11 << 0x10 ^ (uVar12 - uVar7) - uVar11;
    uVar7 = uVar12 >> 5 ^ (uVar7 - uVar11) - uVar12;
    uVar11 = uVar7 >> 3 ^ (uVar11 - uVar12) - uVar7;
    uVar12 = uVar11 << 10 ^ (uVar12 - uVar7) - uVar11;
    uVar7 = uVar12 >> 0xf ^ uVar7 - (uVar11 + uVar12);
    lVar4 = *(longlong *)(param_2 + 2);
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar10 +
                    ((longlong)
                     (int)((uVar7 >> 2) + 0x9e3779b9 +
                           (int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4 + uVar7 * 0x40 ^
                          uVar7) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar5 = *param_1;
      do {
        lVar8 = (longlong)iVar3 * 0x20;
        lVar1 = lVar5 + lVar8;
        if (((*(int *)(lVar5 + lVar8) == *param_2) && (*(uint *)(lVar5 + 4 + lVar8) == uVar2)) &&
           (*(longlong *)(lVar1 + 8) == lVar4)) {
          iVar6 = *(int *)((longlong)plVar10 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
          if (iVar6 == iVar3) {
            piVar9 = (int *)((longlong)plVar10 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
          }
          else {
            do {
              piVar9 = (int *)(lVar5 + (longlong)iVar6 * 0x20 + 0x18);
              iVar6 = *piVar9;
            } while (iVar6 != iVar3);
          }
          *piVar9 = *(int *)(lVar1 + 0x18);
          FUN_140cc1850();
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 140cc1850 FUN_140cc1850 body=112 status=ok
// SIG undefined FUN_140cc1850(void)

void FUN_140cc1850(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140cc18e8 FUN_140cc18e8 body=349 status=ok
// SIG undefined FUN_140cc18e8(void)

void FUN_140cc18e8(ulonglong *param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint unaff_EDI;
  ulonglong uVar7;
  
  uVar5 = 0;
  if (param_2 == 0) goto LAB_140cc195d;
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar3 = uVar3 + 0xf;
      if (0xffe < param_2) {
        uVar5 = uVar3 & 0x7fffffff0;
        if (uVar5 < 0x7ff1) goto LAB_140cc19e6;
        goto LAB_140cc19b5;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_140cc194f:
  do {
    uVar5 = 0x7fffffff;
    unaff_EDI = param_2;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
LAB_140cc195d:
    param_2 = unaff_EDI;
    uVar4 = (uint)uVar5;
    if (uVar4 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      if ((int)uVar4 < 1 && uVar3 == 0) {
        return;
      }
      if (-1 < (int)uVar4) {
        uVar5 = FUN_14001fdce(uVar3,uVar5 << 3,4);
        *param_1 = uVar5;
        return;
      }
    }
    else if (uVar4 <= (uint)param_1[1]) {
      return;
    }
    uVar3 = FUN_1467ac767(uVar5,8);
LAB_140cc19e6:
    bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
    uVar6 = 0x32;
    if (0x32 < bVar2) {
      uVar6 = (ulonglong)bVar2;
    }
    uVar7 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140cc194f;
      lVar1 = uVar6 + 1 + uVar7;
      uVar7 = uVar7 - 1;
    } while (lVar1 != 0x33);
LAB_140cc19b5:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar5 + uVar3) - 1;
  } while( true );
}



// FUNCTION 140cc1a46 FUN_140cc1a46 body=277 status=ok
// SIG undefined FUN_140cc1a46(void)

undefined8 FUN_140cc1a46(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140cc1b55;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140cc1b55;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140cc1b55:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140cc1b02;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140cc1b02;
    }
  }
  uVar6 = 0;
LAB_140cc1b02:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc1b62 FUN_140cc1b62 body=123 status=ok
// SIG undefined FUN_140cc1b62(void)

void FUN_140cc1b62(longlong param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140cc1cf0(param_1,local_38);
  FUN_140cc1bde(param_1 + 0x48,local_38);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc1c4e(param_1 + 0x30,param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc1bde FUN_140cc1bde body=111 status=ok
// SIG undefined FUN_140cc1bde(void)

longlong * FUN_140cc1bde(longlong *param_1,longlong *param_2)

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
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 140cc1c4e FUN_140cc1c4e body=162 status=ok
// SIG undefined FUN_140cc1c4e(void)

void FUN_140cc1c4e(longlong *param_1,undefined8 param_2)

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
        goto LAB_140cc1cdb;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140cc1cdb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140cc1cf0 FUN_140cc1cf0 body=710 status=ok
// SIG undefined FUN_140cc1cf0(void)

undefined8 * FUN_140cc1cf0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1403de7ba(param_2,param_1 + 0x68);
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 != 0) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) == DAT_14cae9568 + 0x30)) &&
        (lVar6 = FUN_140e94dc2(lVar6), lVar6 != 0)) &&
       (((cVar1 = *(char *)(lVar6 + 0x91), pcVar7 = DAT_14cb45d60, cVar1 == '\0' ||
         (pcVar7 = DAT_14cb45d68, cVar1 == '\x01')) || (pcVar7 = DAT_14cb45d70, cVar1 == '\x02'))))
    {
      local_28 = pcVar7;
      FUN_140608954(param_2);
    }
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140cc1efa;
    }
    FUN_1446ddc76(&local_28,"CommonUI",1);
    pcVar7 = local_28;
    uVar8 = FUN_144a52528();
    plVar9 = (longlong *)FUN_1401e3324(uVar8,pcVar7);
  }
  else {
LAB_140cc1efa:
    local_28 = (code *)0x14ae43c40;
    local_20 = 8;
    local_1c = 0;
    uVar5 = FUN_14001a6c0(&local_28,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar9 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar5,&local_28,1);
  }
  lVar6 = (**(code **)(*plVar9 + 0x50))(plVar9);
  FUN_14094f414(param_2,lVar6 + 0xc0);
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140cc1fbe FUN_140cc1fbe body=15 status=ok
// SIG undefined FUN_140cc1fbe(void)

void FUN_140cc1fbe(longlong *param_1,char param_2)

{
  if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140cc1fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2f8))();
    return;
  }
  return;
}



// FUNCTION 140cc1fce FUN_140cc1fce body=61 status=ok
// SIG undefined FUN_140cc1fce(void)

void FUN_140cc1fce(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x70)) {
    FUN_14053d8da(param_1 + 0x68,1);
  }
  if (*(int *)(param_1 + 0x80) < 1) {
    return;
  }
  FUN_14053d8da(param_1 + 0x78,1);
  return;
}



// FUNCTION 140cc2017 FUN_140cc2017 body=73 status=ok
// SIG undefined FUN_140cc2017(void)

void FUN_140cc2017(longlong param_1,int param_2)

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



// FUNCTION 140cc2060 FUN_140cc2060 body=62 status=ok
// SIG undefined FUN_140cc2060(void)

void FUN_140cc2060(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140e95266(param_1 + 0x10);
  return;
}



// FUNCTION 140cc209e FUN_140cc209e body=135 status=ok
// SIG undefined FUN_140cc209e(void)

void FUN_140cc209e(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar5 = *(longlong *)(lVar2 + 0x20);
  lVar6 = 0;
  lVar4 = lVar5 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    lVar4 = lVar6;
  }
  lVar3 = lVar5 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar3 = lVar6;
  }
  lVar5 = lVar5 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar5 = lVar6;
  }
  uVar7 = (ulonglong)*(ushort *)(lVar2 + 0xe);
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      FUN_140cc2126(*(undefined8 *)(lVar5 + uVar8 * 8),*(undefined8 *)(lVar3 + uVar8 * 8),lVar4);
      uVar8 = uVar8 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar7 != uVar8);
  }
  return;
}



// FUNCTION 140cc2126 FUN_140cc2126 body=165 status=ok
// SIG undefined FUN_140cc2126(void)

void FUN_140cc2126(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  cVar2 = FUN_140cc21ce();
  lVar1 = local_20;
  if (cVar2 == '\0') {
    *param_3 = 0;
    param_3[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if (local_20 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_20);
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  *param_3 = lVar1;
  param_3[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc21ce FUN_140cc21ce body=134 status=ok
// SIG undefined FUN_140cc21ce(void)

undefined8 FUN_140cc21ce(longlong param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 == 0) {
    if (*(longlong *)(param_1 + 0x80) == 0) {
      return 0;
    }
    param_1 = param_1 + 0x78;
  }
  else {
    if ((int)uVar2 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      uVar4 = (ulonglong)uVar2;
      do {
        uVar4 = uVar4 >> 1;
        uVar6 = (uint)uVar4 + (int)uVar5;
        if (*(int *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar6 * 4) <= param_2) {
          uVar5 = (ulonglong)(uVar6 + (uVar2 & 1));
        }
        bVar1 = 1 < uVar2;
        uVar2 = (uint)uVar4;
      } while (bVar1);
    }
    uVar4 = 1;
    if (1 < (int)uVar5) {
      uVar4 = uVar5;
    }
    param_1 = *(longlong *)(param_1 + 0x68) + uVar4 * 0x30 + -0x30;
  }
  uVar3 = FUN_140cc2254(param_1);
  *param_3 = uVar3;
  return 1;
}



// FUNCTION 140cc2254 FUN_140cc2254 body=114 status=ok
// SIG undefined FUN_140cc2254(void)

longlong FUN_140cc2254(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if ((*(longlong *)(param_1 + 8) == 0) ||
       ((lVar1 = FUN_1401fe4bc(param_1), lVar1 == 0 && (lVar1 = FUN_144a6654a(param_1), lVar1 == 0))
       )) {
      lVar1 = 0;
    }
    else {
      uVar2 = FUN_144a7757c();
      lVar3 = FUN_144a78ede(lVar1,uVar2);
      if (lVar3 == 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        *(longlong *)(param_1 + 0x28) = lVar1;
      }
    }
    return lVar1;
  }
  return *(longlong *)(param_1 + 0x28);
}



// FUNCTION 140cc22d4 FUN_140cc22d4 body=40 status=ok
// SIG undefined FUN_140cc22d4(void)

undefined8 FUN_140cc22d4(undefined8 param_1,int param_2)

{
  FUN_140595c52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cc2304 FUN_140cc2304 body=163 status=ok
// SIG undefined FUN_140cc2304(void)

undefined8 * FUN_140cc2304(undefined8 *param_1)

{
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b0dbb30;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 4;
  *(undefined4 *)(param_1 + 0x37) = 1;
  *(undefined1 *)(param_1 + 0x3b) = 2;
  *(byte *)(param_1 + 0x3c) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x3d] = 0;
  *(undefined2 *)(param_1 + 0x41) = 4;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x42) = 3;
  *(char *)(param_1 + 0x43) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 140cc23b6 FUN_140cc23b6 body=45 status=ok
// SIG undefined FUN_140cc23b6(void)

undefined8 FUN_140cc23b6(undefined8 param_1,int param_2)

{
  FUN_140cc23e4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 140cc23e4 FUN_140cc23e4 body=157 status=ok
// SIG undefined FUN_140cc23e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cc23e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b4a7160;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000140cc2465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140cc2481 FUN_140cc2481 body=144 status=ok
// SIG undefined FUN_140cc2481(void)

void FUN_140cc2481(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140cc257c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae85c90;
  puVar1[5] = &PTR_FUN_14ae86810;
  puVar1[6] = &PTR_LAB_14ae86850;
  puVar1[0x55] = &PTR_FUN_14ae868a0;
  puVar1[0x56] = &PTR_FUN_14ae86920;
  puVar1[0x57] = &PTR_FUN_14ae86930;
  puVar1[0x336] = 0;
  puVar1[0x337] = 0;
  *(undefined1 *)(puVar1 + 0x338) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x19c4) = 0x42480000;
  *(undefined1 *)(puVar1 + 0x1ff) = 0;
  uVar2 = FUN_140cc2512();
  *(undefined1 *)(puVar1 + 0x211) = uVar2;
  return;
}



// FUNCTION 140cc2512 FUN_140cc2512 body=105 status=ok
// SIG undefined FUN_140cc2512(void)

undefined8 FUN_140cc2512(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14cb49970;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(lVar2 + uVar6));
}


