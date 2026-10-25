// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14699e178 FUN_14699e178 body=206 status=ok
// SIG undefined FUN_14699e178(void)

void FUN_14699e178(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar6 = 0;
    do {
      plVar3 = (longlong *)param_1[2];
      fVar8 = (float)*(ushort *)
                      (*(longlong *)param_1[3] +
                       (longlong)(int)((iVar4 * iVar2 + param_2) * (uint)bVar1) * 2 + lVar6 * 2) *
              1.5259022e-05;
      lVar7 = *plVar3;
      if ((uVar5 & 0x8000000000000001) != 1) {
        *(float *)(lVar7 + uVar5 * 4) = fVar8;
        fVar8 = *(float *)(*plVar3 + uVar5 * 4);
        *(float *)(*plVar3 + 4 + uVar5 * 4) = fVar8;
        lVar7 = *plVar3;
      }
      *(float *)(lVar7 + 8 + uVar5 * 4) = fVar8;
      uVar5 = uVar5 + *(byte *)((longlong)param_1 + 0x21);
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699e256 FUN_14699e256 body=29 status=ok
// SIG undefined FUN_14699e256(void)

void FUN_14699e256(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699e274 FUN_14699e274 body=52 status=ok
// SIG undefined FUN_14699e274(void)

undefined8 * FUN_14699e274(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef78a0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699e2a8 FUN_14699e2a8 body=125 status=ok
// SIG undefined FUN_14699e2a8(void)

undefined8 FUN_14699e2a8(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699e326(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699e326 FUN_14699e326 body=261 status=ok
// SIG undefined FUN_14699e326(void)

void FUN_14699e326(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699e42c;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699e434 FUN_14699e434 body=170 status=ok
// SIG undefined FUN_14699e434(void)

void FUN_14699e434(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      fVar6 = (float)*(ushort *)
                      (**(longlong **)(param_1 + 0x18) + (ulonglong)bVar1 * (longlong)param_2 * 2 +
                      lVar4 * 2) * 1.5259022e-05;
      lVar5 = *plVar2;
      if ((uVar3 & 0x8000000000000001) != 1) {
        *(float *)(lVar5 + uVar3 * 4) = fVar6;
        fVar6 = *(float *)(*plVar2 + uVar3 * 4);
        *(float *)(*plVar2 + 4 + uVar3 * 4) = fVar6;
        lVar5 = *plVar2;
      }
      *(float *)(lVar5 + 8 + uVar3 * 4) = fVar6;
      uVar3 = uVar3 + *(byte *)(param_1 + 0x21);
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699e4ee FUN_14699e4ee body=29 status=ok
// SIG undefined FUN_14699e4ee(void)

void FUN_14699e4ee(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699e50c FUN_14699e50c body=52 status=ok
// SIG undefined FUN_14699e50c(void)

undefined8 * FUN_14699e50c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef78c0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699e540 FUN_14699e540 body=127 status=ok
// SIG undefined FUN_14699e540(void)

undefined8 FUN_14699e540(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699e326(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699e5c0 FUN_14699e5c0 body=116 status=ok
// SIG undefined FUN_14699e5c0(void)

void FUN_14699e5c0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 in_RAX;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428dc048(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428db25e(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428de23e();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428dd77b;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428dd77b;
  }
  uStack_74 = 1;
LAB_1428dd77b:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 2)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428dd875:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428ddabe;
LAB_1428dda54:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428ddabe:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7940;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428ddc4a;
                }
                else {
                  puVar18[0x16] = &LAB_14699ec58;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428ddc4a:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428ddc7d;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428ddc7d:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428dd875;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428dda54;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428dde9e;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428dde9e:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14699e644 FUN_14699e644 body=29 status=ok
// SIG undefined FUN_14699e644(void)

void FUN_14699e644(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699e662 FUN_14699e662 body=52 status=ok
// SIG undefined FUN_14699e662(void)

undefined8 * FUN_14699e662(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef78e0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699e696 FUN_14699e696 body=125 status=ok
// SIG undefined FUN_14699e696(void)

undefined8 FUN_14699e696(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699e714(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699e714 FUN_14699e714 body=288 status=ok
// SIG undefined FUN_14699e714(void)

void FUN_14699e714(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699e834;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699e906 FUN_14699e906 body=29 status=ok
// SIG undefined FUN_14699e906(void)

void FUN_14699e906(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699e924 FUN_14699e924 body=52 status=ok
// SIG undefined FUN_14699e924(void)

undefined8 * FUN_14699e924(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7900;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699e958 FUN_14699e958 body=125 status=ok
// SIG undefined FUN_14699e958(void)

undefined8 FUN_14699e958(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699e9d6(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699e9d6 FUN_14699e9d6 body=262 status=ok
// SIG undefined FUN_14699e9d6(void)

void FUN_14699e9d6(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699eadc;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699eb68 FUN_14699eb68 body=29 status=ok
// SIG undefined FUN_14699eb68(void)

void FUN_14699eb68(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699eb86 FUN_14699eb86 body=52 status=ok
// SIG undefined FUN_14699eb86(void)

undefined8 * FUN_14699eb86(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7920;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699ebba FUN_14699ebba body=127 status=ok
// SIG undefined FUN_14699ebba(void)

undefined8 FUN_14699ebba(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699e9d6(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699ec68 FUN_14699ec68 body=29 status=ok
// SIG undefined FUN_14699ec68(void)

void FUN_14699ec68(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699ec86 FUN_14699ec86 body=52 status=ok
// SIG undefined FUN_14699ec86(void)

undefined8 * FUN_14699ec86(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7940;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699ecba FUN_14699ecba body=125 status=ok
// SIG undefined FUN_14699ecba(void)

undefined8 FUN_14699ecba(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699ed38(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699ed38 FUN_14699ed38 body=288 status=ok
// SIG undefined FUN_14699ed38(void)

void FUN_14699ed38(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699ee58;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699ee60 FUN_14699ee60 body=206 status=ok
// SIG undefined FUN_14699ee60(void)

void FUN_14699ee60(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar6 = 0;
    do {
      plVar3 = (longlong *)param_1[2];
      fVar8 = (float)((double)*(uint *)(*(longlong *)param_1[3] +
                                        (longlong)(int)((iVar4 * iVar2 + param_2) * (uint)bVar1) * 4
                                       + lVar6 * 4) * 2.3283064370807974e-10);
      lVar7 = *plVar3;
      if ((uVar5 & 0x8000000000000001) != 1) {
        *(float *)(lVar7 + uVar5 * 4) = fVar8;
        fVar8 = *(float *)(*plVar3 + uVar5 * 4);
        *(float *)(*plVar3 + 4 + uVar5 * 4) = fVar8;
        lVar7 = *plVar3;
      }
      *(float *)(lVar7 + 8 + uVar5 * 4) = fVar8;
      uVar5 = uVar5 + *(byte *)((longlong)param_1 + 0x21);
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699ef3e FUN_14699ef3e body=29 status=ok
// SIG undefined FUN_14699ef3e(void)

void FUN_14699ef3e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699ef5c FUN_14699ef5c body=52 status=ok
// SIG undefined FUN_14699ef5c(void)

undefined8 * FUN_14699ef5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7960;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699ef90 FUN_14699ef90 body=125 status=ok
// SIG undefined FUN_14699ef90(void)

undefined8 FUN_14699ef90(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699f00e(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699f00e FUN_14699f00e body=262 status=ok
// SIG undefined FUN_14699f00e(void)

void FUN_14699f00e(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699f114;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699f11c FUN_14699f11c body=170 status=ok
// SIG undefined FUN_14699f11c(void)

void FUN_14699f11c(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      fVar6 = (float)((double)*(uint *)(**(longlong **)(param_1 + 0x18) +
                                        (ulonglong)bVar1 * (longlong)param_2 * 4 + lVar4 * 4) *
                     2.3283064370807974e-10);
      lVar5 = *plVar2;
      if ((uVar3 & 0x8000000000000001) != 1) {
        *(float *)(lVar5 + uVar3 * 4) = fVar6;
        fVar6 = *(float *)(*plVar2 + uVar3 * 4);
        *(float *)(*plVar2 + 4 + uVar3 * 4) = fVar6;
        lVar5 = *plVar2;
      }
      *(float *)(lVar5 + 8 + uVar3 * 4) = fVar6;
      uVar3 = uVar3 + *(byte *)(param_1 + 0x21);
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699f1d6 FUN_14699f1d6 body=29 status=ok
// SIG undefined FUN_14699f1d6(void)

void FUN_14699f1d6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699f1f4 FUN_14699f1f4 body=52 status=ok
// SIG undefined FUN_14699f1f4(void)

undefined8 * FUN_14699f1f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7980;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699f228 FUN_14699f228 body=127 status=ok
// SIG undefined FUN_14699f228(void)

undefined8 FUN_14699f228(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699f00e(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699f2a8 FUN_14699f2a8 body=116 status=ok
// SIG undefined FUN_14699f2a8(void)

void FUN_14699f2a8(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 in_RAX;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428e03ca(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428df5e0(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428e25c0();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428e1afd;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428e1afd;
  }
  uStack_74 = 1;
LAB_1428e1afd:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 3)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428e1bf7:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428e1e40;
LAB_1428e1dd6:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428e1e40:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7a00;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428e1fcc;
                }
                else {
                  puVar18[0x16] = &LAB_14699f96c;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428e1fcc:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428e1fff;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428e1fff:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428e1bf7;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428e1dd6;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428e2220;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428e2220:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14699f32c FUN_14699f32c body=29 status=ok
// SIG undefined FUN_14699f32c(void)

void FUN_14699f32c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699f34a FUN_14699f34a body=52 status=ok
// SIG undefined FUN_14699f34a(void)

undefined8 * FUN_14699f34a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef79a0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699f37e FUN_14699f37e body=125 status=ok
// SIG undefined FUN_14699f37e(void)

undefined8 FUN_14699f37e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699f3fc(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699f3fc FUN_14699f3fc body=288 status=ok
// SIG undefined FUN_14699f3fc(void)

void FUN_14699f3fc(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699f51c;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699f604 FUN_14699f604 body=29 status=ok
// SIG undefined FUN_14699f604(void)

void FUN_14699f604(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699f622 FUN_14699f622 body=52 status=ok
// SIG undefined FUN_14699f622(void)

undefined8 * FUN_14699f622(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef79c0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699f656 FUN_14699f656 body=125 status=ok
// SIG undefined FUN_14699f656(void)

undefined8 FUN_14699f656(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699f6d4(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699f6d4 FUN_14699f6d4 body=262 status=ok
// SIG undefined FUN_14699f6d4(void)

void FUN_14699f6d4(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699f7da;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699f87c FUN_14699f87c body=29 status=ok
// SIG undefined FUN_14699f87c(void)

void FUN_14699f87c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699f89a FUN_14699f89a body=52 status=ok
// SIG undefined FUN_14699f89a(void)

undefined8 * FUN_14699f89a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef79e0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699f8ce FUN_14699f8ce body=127 status=ok
// SIG undefined FUN_14699f8ce(void)

undefined8 FUN_14699f8ce(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699f6d4(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699f97c FUN_14699f97c body=29 status=ok
// SIG undefined FUN_14699f97c(void)

void FUN_14699f97c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699f99a FUN_14699f99a body=52 status=ok
// SIG undefined FUN_14699f99a(void)

undefined8 * FUN_14699f99a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7a00;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699f9ce FUN_14699f9ce body=125 status=ok
// SIG undefined FUN_14699f9ce(void)

undefined8 FUN_14699f9ce(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699fa4c(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699fa4c FUN_14699fa4c body=288 status=ok
// SIG undefined FUN_14699fa4c(void)

void FUN_14699fa4c(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699fb6c;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699fb74 FUN_14699fb74 body=227 status=ok
// SIG undefined FUN_14699fb74(void)

void FUN_14699fb74(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar2 != 0) {
    iVar5 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    uVar6 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar5 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar7 = 0;
    do {
      plVar4 = (longlong *)param_1[2];
      uVar1 = *(undefined8 *)
               (*(longlong *)param_1[3] +
                (longlong)(int)((iVar5 * iVar3 + param_2) * (uint)bVar2) * 8 + lVar7 * 8);
      fVar9 = (float)((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                      ((double)CONCAT44(0x45300000,(int)((ulonglong)uVar1 >> 0x20)) -
                      1.9342813113834067e+25)) * 5.421010862427522e-20);
      lVar8 = *plVar4;
      if ((uVar6 & 0x8000000000000001) != 1) {
        *(float *)(lVar8 + uVar6 * 4) = fVar9;
        fVar9 = *(float *)(*plVar4 + uVar6 * 4);
        *(float *)(*plVar4 + 4 + uVar6 * 4) = fVar9;
        lVar8 = *plVar4;
      }
      *(float *)(lVar8 + 8 + uVar6 * 4) = fVar9;
      uVar6 = uVar6 + *(byte *)((longlong)param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699fc68 FUN_14699fc68 body=29 status=ok
// SIG undefined FUN_14699fc68(void)

void FUN_14699fc68(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699fc86 FUN_14699fc86 body=52 status=ok
// SIG undefined FUN_14699fc86(void)

undefined8 * FUN_14699fc86(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7a20;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699fcba FUN_14699fcba body=125 status=ok
// SIG undefined FUN_14699fcba(void)

undefined8 FUN_14699fcba(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699fd38(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699fd38 FUN_14699fd38 body=262 status=ok
// SIG undefined FUN_14699fd38(void)

void FUN_14699fd38(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699fe3e;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699fe46 FUN_14699fe46 body=191 status=ok
// SIG undefined FUN_14699fe46(void)

void FUN_14699fe46(longlong param_1,int param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  bVar2 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar2 != 0) {
    uVar4 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(param_1 + 0x10);
      uVar1 = *(undefined8 *)
               (**(longlong **)(param_1 + 0x18) + (ulonglong)bVar2 * (longlong)param_2 * 8 +
               lVar5 * 8);
      fVar7 = (float)((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                      ((double)CONCAT44(0x45300000,(int)((ulonglong)uVar1 >> 0x20)) -
                      1.9342813113834067e+25)) * 5.421010862427522e-20);
      lVar6 = *plVar3;
      if ((uVar4 & 0x8000000000000001) != 1) {
        *(float *)(lVar6 + uVar4 * 4) = fVar7;
        fVar7 = *(float *)(*plVar3 + uVar4 * 4);
        *(float *)(*plVar3 + 4 + uVar4 * 4) = fVar7;
        lVar6 = *plVar3;
      }
      *(float *)(lVar6 + 8 + uVar4 * 4) = fVar7;
      uVar4 = uVar4 + *(byte *)(param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699ff16 FUN_14699ff16 body=29 status=ok
// SIG undefined FUN_14699ff16(void)

void FUN_14699ff16(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699ff34 FUN_14699ff34 body=52 status=ok
// SIG undefined FUN_14699ff34(void)

undefined8 * FUN_14699ff34(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7a40;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699ff68 FUN_14699ff68 body=127 status=ok
// SIG undefined FUN_14699ff68(void)

undefined8 FUN_14699ff68(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699fd38(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699ffe8 FUN_14699ffe8 body=116 status=ok
// SIG undefined FUN_14699ffe8(void)

void FUN_14699ffe8(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 in_RAX;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428e474a(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428e3962(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428e693c();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428e5e7b;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428e5e7b;
  }
  uStack_74 = 1;
LAB_1428e5e7b:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) * 2)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428e5f74:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428e61bd;
LAB_1428e6153:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428e61bd:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7ac0;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428e6349;
                }
                else {
                  puVar18[0x16] = &LAB_1469a0760;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428e6349:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428e637c;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428e637c:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428e5f74;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428e6153;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428e659d;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428e659d:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 1469a006c FUN_1469a006c body=29 status=ok
// SIG undefined FUN_1469a006c(void)

void FUN_1469a006c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a008a FUN_1469a008a body=52 status=ok
// SIG undefined FUN_1469a008a(void)

undefined8 * FUN_1469a008a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7a60;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a00be FUN_1469a00be body=125 status=ok
// SIG undefined FUN_1469a00be(void)

undefined8 FUN_1469a00be(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a013c(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a013c FUN_1469a013c body=287 status=ok
// SIG undefined FUN_1469a013c(void)

void FUN_1469a013c(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a025c;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a0264 FUN_1469a0264 body=265 status=ok
// SIG undefined FUN_1469a0264(void)

void FUN_1469a0264(longlong *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    lVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar6 = 0;
    do {
      uVar2 = *(ushort *)
               (*(longlong *)param_1[3] +
                (longlong)(int)((iVar4 * iVar3 + param_2) * (uint)bVar1) * 2 + lVar6 * 2);
      uVar7 = (uint)uVar2 << 0xd;
      if ((uVar7 & 0xf800000) == 0xf800000) {
        fVar8 = (float)(uVar7 | 0x70000000);
      }
      else if ((uVar7 & 0xf800000) == 0) {
        fVar8 = (float)(uVar7 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar8 = (float)((uVar7 & 0xfffe000) + 0x38000000);
      }
      dVar9 = (double)(float)((int)(short)uVar2 & 0x80000000U | (uint)fVar8);
      if (1.0 <= dVar9) {
        dVar9 = 1.0;
      }
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      *(float *)(*(longlong *)param_1[2] + lVar5 * 4) = (float)dVar9;
      lVar5 = lVar5 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469a039c FUN_1469a039c body=29 status=ok
// SIG undefined FUN_1469a039c(void)

void FUN_1469a039c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a03ba FUN_1469a03ba body=52 status=ok
// SIG undefined FUN_1469a03ba(void)

undefined8 * FUN_1469a03ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7a80;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a03ee FUN_1469a03ee body=125 status=ok
// SIG undefined FUN_1469a03ee(void)

undefined8 FUN_1469a03ee(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a046c(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a046c FUN_1469a046c body=261 status=ok
// SIG undefined FUN_1469a046c(void)

void FUN_1469a046c(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a0572;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a057a FUN_1469a057a body=229 status=ok
// SIG undefined FUN_1469a057a(void)

void FUN_1469a057a(longlong param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar4 = 0;
    do {
      uVar2 = *(ushort *)
               (**(longlong **)(param_1 + 0x18) + (ulonglong)bVar1 * (longlong)param_2 * 2 +
               lVar4 * 2);
      uVar5 = (uint)uVar2 << 0xd;
      if ((uVar5 & 0xf800000) == 0xf800000) {
        fVar6 = (float)(uVar5 | 0x70000000);
      }
      else if ((uVar5 & 0xf800000) == 0) {
        fVar6 = (float)(uVar5 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar6 = (float)((uVar5 & 0xfffe000) + 0x38000000);
      }
      dVar7 = (double)(float)((int)(short)uVar2 & 0x80000000U | (uint)fVar6);
      if (1.0 <= dVar7) {
        dVar7 = 1.0;
      }
      if (dVar7 <= 0.0) {
        dVar7 = 0.0;
      }
      *(float *)(**(longlong **)(param_1 + 0x10) + lVar3 * 4) = (float)dVar7;
      lVar3 = lVar3 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469a0670 FUN_1469a0670 body=29 status=ok
// SIG undefined FUN_1469a0670(void)

void FUN_1469a0670(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a068e FUN_1469a068e body=52 status=ok
// SIG undefined FUN_1469a068e(void)

undefined8 * FUN_1469a068e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7aa0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a06c2 FUN_1469a06c2 body=127 status=ok
// SIG undefined FUN_1469a06c2(void)

undefined8 FUN_1469a06c2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a046c(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a0770 FUN_1469a0770 body=29 status=ok
// SIG undefined FUN_1469a0770(void)

void FUN_1469a0770(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a078e FUN_1469a078e body=52 status=ok
// SIG undefined FUN_1469a078e(void)

undefined8 * FUN_1469a078e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7ac0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a07c2 FUN_1469a07c2 body=125 status=ok
// SIG undefined FUN_1469a07c2(void)

undefined8 FUN_1469a07c2(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a0840(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a0840 FUN_1469a0840 body=287 status=ok
// SIG undefined FUN_1469a0840(void)

void FUN_1469a0840(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a0960;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a0968 FUN_1469a0968 body=133 status=ok
// SIG undefined FUN_1469a0968(void)

void FUN_1469a0968(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar3 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar3 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar5 = 0;
    do {
      FUN_1469a09ee(param_1[3],(int)((iVar3 * iVar2 + param_2) * (uint)bVar1) + lVar5,param_1[2],
                    lVar4);
      lVar4 = lVar4 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469a09ee FUN_1469a09ee body=273 status=ok
// SIG undefined FUN_1469a09ee(void)

void FUN_1469a09ee(longlong *param_1,longlong param_2,longlong *param_3,ulonglong param_4)

{
  ushort uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  double dVar5;
  
  uVar1 = *(ushort *)(*param_1 + param_2 * 2);
  uVar2 = (uint)uVar1 << 0xd;
  uVar4 = uVar2 & 0xf800000;
  if ((param_4 & 0x8000000000000001) == 1) {
    if (uVar4 == 0xf800000) {
      fVar3 = (float)(uVar2 | 0x70000000);
    }
    else if (uVar4 == 0) {
      fVar3 = (float)(uVar2 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar3 = (float)((uVar2 & 0xfffe000) + 0x38000000);
    }
    dVar5 = (double)(float)((int)(short)uVar1 & 0x80000000U | (uint)fVar3);
    if (1.0 <= dVar5) {
      dVar5 = 1.0;
    }
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    fVar3 = (float)dVar5;
  }
  else {
    if (uVar4 == 0xf800000) {
      fVar3 = (float)(uVar2 | 0x70000000);
    }
    else if (uVar4 == 0) {
      fVar3 = (float)(uVar2 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar3 = (float)((uVar2 & 0xfffe000) + 0x38000000);
    }
    dVar5 = (double)(float)((int)(short)uVar1 & 0x80000000U | (uint)fVar3);
    if (1.0 <= dVar5) {
      dVar5 = 1.0;
    }
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    *(float *)(*param_3 + param_4 * 4) = (float)dVar5;
    fVar3 = *(float *)(*param_3 + param_4 * 4);
    *(float *)(*param_3 + 4 + param_4 * 4) = fVar3;
  }
  *(float *)(*param_3 + 8 + param_4 * 4) = fVar3;
  return;
}



// FUNCTION 1469a0b10 FUN_1469a0b10 body=29 status=ok
// SIG undefined FUN_1469a0b10(void)

void FUN_1469a0b10(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a0b2e FUN_1469a0b2e body=52 status=ok
// SIG undefined FUN_1469a0b2e(void)

undefined8 * FUN_1469a0b2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7ae0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a0b62 FUN_1469a0b62 body=125 status=ok
// SIG undefined FUN_1469a0b62(void)

undefined8 FUN_1469a0b62(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a0be0(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a0be0 FUN_1469a0be0 body=261 status=ok
// SIG undefined FUN_1469a0be0(void)

void FUN_1469a0be0(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a0ce6;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a0cee FUN_1469a0cee body=99 status=ok
// SIG undefined FUN_1469a0cee(void)

void FUN_1469a0cee(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar3 = 0;
    do {
      FUN_1469a09ee(*(undefined8 *)(param_1 + 0x18),(ulonglong)bVar1 * (longlong)param_2 + lVar3,
                    *(undefined8 *)(param_1 + 0x10),lVar2);
      lVar2 = lVar2 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469a0d62 FUN_1469a0d62 body=29 status=ok
// SIG undefined FUN_1469a0d62(void)

void FUN_1469a0d62(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a0d80 FUN_1469a0d80 body=52 status=ok
// SIG undefined FUN_1469a0d80(void)

undefined8 * FUN_1469a0d80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7b00;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a0db4 FUN_1469a0db4 body=127 status=ok
// SIG undefined FUN_1469a0db4(void)

undefined8 FUN_1469a0db4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a0be0(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a0e34 FUN_1469a0e34 body=116 status=ok
// SIG undefined FUN_1469a0e34(void)

void FUN_1469a0e34(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 in_RAX;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428e8ac6(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428e7cdc(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428eacbc();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428ea1f9;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428ea1f9;
  }
  uStack_74 = 1;
LAB_1428ea1f9:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 2)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428ea2f3:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428ea53c;
LAB_1428ea4d2:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428ea53c:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7b80;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428ea6c8;
                }
                else {
                  puVar18[0x16] = &LAB_1469a1494;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428ea6c8:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428ea6fb;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428ea6fb:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428ea2f3;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428ea4d2;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428ea91c;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428ea91c:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 1469a0eb8 FUN_1469a0eb8 body=29 status=ok
// SIG undefined FUN_1469a0eb8(void)

void FUN_1469a0eb8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a0ed6 FUN_1469a0ed6 body=52 status=ok
// SIG undefined FUN_1469a0ed6(void)

undefined8 * FUN_1469a0ed6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7b20;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a0f0a FUN_1469a0f0a body=125 status=ok
// SIG undefined FUN_1469a0f0a(void)

undefined8 FUN_1469a0f0a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a0f88(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a0f88 FUN_1469a0f88 body=288 status=ok
// SIG undefined FUN_1469a0f88(void)

void FUN_1469a0f88(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a10a8;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a1160 FUN_1469a1160 body=29 status=ok
// SIG undefined FUN_1469a1160(void)

void FUN_1469a1160(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a117e FUN_1469a117e body=52 status=ok
// SIG undefined FUN_1469a117e(void)

undefined8 * FUN_1469a117e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7b40;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a11b2 FUN_1469a11b2 body=125 status=ok
// SIG undefined FUN_1469a11b2(void)

undefined8 FUN_1469a11b2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a1230(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a1230 FUN_1469a1230 body=262 status=ok
// SIG undefined FUN_1469a1230(void)

void FUN_1469a1230(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a1336;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a13a4 FUN_1469a13a4 body=29 status=ok
// SIG undefined FUN_1469a13a4(void)

void FUN_1469a13a4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a13c2 FUN_1469a13c2 body=52 status=ok
// SIG undefined FUN_1469a13c2(void)

undefined8 * FUN_1469a13c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7b60;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a13f6 FUN_1469a13f6 body=127 status=ok
// SIG undefined FUN_1469a13f6(void)

undefined8 FUN_1469a13f6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a1230(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a14a4 FUN_1469a14a4 body=29 status=ok
// SIG undefined FUN_1469a14a4(void)

void FUN_1469a14a4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a14c2 FUN_1469a14c2 body=52 status=ok
// SIG undefined FUN_1469a14c2(void)

undefined8 * FUN_1469a14c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7b80;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a14f6 FUN_1469a14f6 body=125 status=ok
// SIG undefined FUN_1469a14f6(void)

undefined8 FUN_1469a14f6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a1574(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a1574 FUN_1469a1574 body=288 status=ok
// SIG undefined FUN_1469a1574(void)

void FUN_1469a1574(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a1694;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a169c FUN_1469a169c body=184 status=ok
// SIG undefined FUN_1469a169c(void)

void FUN_1469a169c(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar6 = 0;
    do {
      plVar3 = (longlong *)param_1[2];
      uVar8 = *(undefined4 *)
               (*(longlong *)param_1[3] +
                (longlong)(int)((iVar4 * iVar2 + param_2) * (uint)bVar1) * 4 + lVar6 * 4);
      lVar7 = *plVar3;
      if ((uVar5 & 0x8000000000000001) != 1) {
        *(undefined4 *)(lVar7 + uVar5 * 4) = uVar8;
        uVar8 = *(undefined4 *)(*plVar3 + uVar5 * 4);
        *(undefined4 *)(*plVar3 + 4 + uVar5 * 4) = uVar8;
        lVar7 = *plVar3;
      }
      *(undefined4 *)(lVar7 + 8 + uVar5 * 4) = uVar8;
      uVar5 = uVar5 + *(byte *)((longlong)param_1 + 0x21);
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469a1764 FUN_1469a1764 body=29 status=ok
// SIG undefined FUN_1469a1764(void)

void FUN_1469a1764(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a1782 FUN_1469a1782 body=52 status=ok
// SIG undefined FUN_1469a1782(void)

undefined8 * FUN_1469a1782(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7ba0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a17b6 FUN_1469a17b6 body=125 status=ok
// SIG undefined FUN_1469a17b6(void)

undefined8 FUN_1469a17b6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a1834(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a1834 FUN_1469a1834 body=262 status=ok
// SIG undefined FUN_1469a1834(void)

void FUN_1469a1834(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a193a;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a1942 FUN_1469a1942 body=148 status=ok
// SIG undefined FUN_1469a1942(void)

void FUN_1469a1942(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      uVar6 = *(undefined4 *)
               (**(longlong **)(param_1 + 0x18) + (ulonglong)bVar1 * (longlong)param_2 * 4 +
               lVar4 * 4);
      lVar5 = *plVar2;
      if ((uVar3 & 0x8000000000000001) != 1) {
        *(undefined4 *)(lVar5 + uVar3 * 4) = uVar6;
        uVar6 = *(undefined4 *)(*plVar2 + uVar3 * 4);
        *(undefined4 *)(*plVar2 + 4 + uVar3 * 4) = uVar6;
        lVar5 = *plVar2;
      }
      *(undefined4 *)(lVar5 + 8 + uVar3 * 4) = uVar6;
      uVar3 = uVar3 + *(byte *)(param_1 + 0x21);
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469a19e6 FUN_1469a19e6 body=29 status=ok
// SIG undefined FUN_1469a19e6(void)

void FUN_1469a19e6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a1a04 FUN_1469a1a04 body=52 status=ok
// SIG undefined FUN_1469a1a04(void)

undefined8 * FUN_1469a1a04(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7bc0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a1a38 FUN_1469a1a38 body=127 status=ok
// SIG undefined FUN_1469a1a38(void)

undefined8 FUN_1469a1a38(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a1834(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a1ab8 FUN_1469a1ab8 body=116 status=ok
// SIG undefined FUN_1469a1ab8(void)

void FUN_1469a1ab8(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 in_RAX;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428ece48(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428ec05e(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428ef03e();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428ee57b;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428ee57b;
  }
  uStack_74 = 1;
LAB_1428ee57b:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 3)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428ee675:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428ee8be;
LAB_1428ee854:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428ee8be:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7c40;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428eea4a;
                }
                else {
                  puVar18[0x16] = &LAB_1469a2154;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428eea4a:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428eea7d;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428eea7d:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428ee675;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428ee854;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428eec9e;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428eec9e:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 1469a1b3c FUN_1469a1b3c body=29 status=ok
// SIG undefined FUN_1469a1b3c(void)

void FUN_1469a1b3c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a1b5a FUN_1469a1b5a body=52 status=ok
// SIG undefined FUN_1469a1b5a(void)

undefined8 * FUN_1469a1b5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7be0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a1b8e FUN_1469a1b8e body=125 status=ok
// SIG undefined FUN_1469a1b8e(void)

undefined8 FUN_1469a1b8e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a1c0c(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a1c0c FUN_1469a1c0c body=288 status=ok
// SIG undefined FUN_1469a1c0c(void)

void FUN_1469a1c0c(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a1d2c;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a1e00 FUN_1469a1e00 body=29 status=ok
// SIG undefined FUN_1469a1e00(void)

void FUN_1469a1e00(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a1e1e FUN_1469a1e1e body=52 status=ok
// SIG undefined FUN_1469a1e1e(void)

undefined8 * FUN_1469a1e1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7c00;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a1e52 FUN_1469a1e52 body=125 status=ok
// SIG undefined FUN_1469a1e52(void)

undefined8 FUN_1469a1e52(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a1ed0(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a1ed0 FUN_1469a1ed0 body=262 status=ok
// SIG undefined FUN_1469a1ed0(void)

void FUN_1469a1ed0(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a1fd6;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a2064 FUN_1469a2064 body=29 status=ok
// SIG undefined FUN_1469a2064(void)

void FUN_1469a2064(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a2082 FUN_1469a2082 body=52 status=ok
// SIG undefined FUN_1469a2082(void)

undefined8 * FUN_1469a2082(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7c20;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a20b6 FUN_1469a20b6 body=127 status=ok
// SIG undefined FUN_1469a20b6(void)

undefined8 FUN_1469a20b6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a1ed0(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a2164 FUN_1469a2164 body=29 status=ok
// SIG undefined FUN_1469a2164(void)

void FUN_1469a2164(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a2182 FUN_1469a2182 body=52 status=ok
// SIG undefined FUN_1469a2182(void)

undefined8 * FUN_1469a2182(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7c40;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a21b6 FUN_1469a21b6 body=125 status=ok
// SIG undefined FUN_1469a21b6(void)

undefined8 FUN_1469a21b6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a2234(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a2234 FUN_1469a2234 body=288 status=ok
// SIG undefined FUN_1469a2234(void)

void FUN_1469a2234(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a2354;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a235c FUN_1469a235c body=208 status=ok
// SIG undefined FUN_1469a235c(void)

void FUN_1469a235c(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar6 = 0;
    do {
      plVar3 = (longlong *)param_1[2];
      dVar9 = *(double *)
               (*(longlong *)param_1[3] +
                (longlong)(int)((iVar4 * iVar2 + param_2) * (uint)bVar1) * 8 + lVar6 * 8);
      if (1.0 <= dVar9) {
        dVar9 = 1.0;
      }
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      fVar8 = (float)dVar9;
      lVar7 = *plVar3;
      if ((uVar5 & 0x8000000000000001) != 1) {
        *(float *)(lVar7 + uVar5 * 4) = fVar8;
        fVar8 = *(float *)(*plVar3 + uVar5 * 4);
        *(float *)(*plVar3 + 4 + uVar5 * 4) = fVar8;
        lVar7 = *plVar3;
      }
      *(float *)(lVar7 + 8 + uVar5 * 4) = fVar8;
      uVar5 = uVar5 + *(byte *)((longlong)param_1 + 0x21);
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469a243c FUN_1469a243c body=29 status=ok
// SIG undefined FUN_1469a243c(void)

void FUN_1469a243c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a245a FUN_1469a245a body=52 status=ok
// SIG undefined FUN_1469a245a(void)

undefined8 * FUN_1469a245a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7c60;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a248e FUN_1469a248e body=125 status=ok
// SIG undefined FUN_1469a248e(void)

undefined8 FUN_1469a248e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a250c(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a250c FUN_1469a250c body=262 status=ok
// SIG undefined FUN_1469a250c(void)

void FUN_1469a250c(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469a2612;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469a261a FUN_1469a261a body=172 status=ok
// SIG undefined FUN_1469a261a(void)

void FUN_1469a261a(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      dVar7 = *(double *)
               (**(longlong **)(param_1 + 0x18) + (ulonglong)bVar1 * (longlong)param_2 * 8 +
               lVar4 * 8);
      if (1.0 <= dVar7) {
        dVar7 = 1.0;
      }
      if (dVar7 <= 0.0) {
        dVar7 = 0.0;
      }
      fVar6 = (float)dVar7;
      lVar5 = *plVar2;
      if ((uVar3 & 0x8000000000000001) != 1) {
        *(float *)(lVar5 + uVar3 * 4) = fVar6;
        fVar6 = *(float *)(*plVar2 + uVar3 * 4);
        *(float *)(*plVar2 + 4 + uVar3 * 4) = fVar6;
        lVar5 = *plVar2;
      }
      *(float *)(lVar5 + 8 + uVar3 * 4) = fVar6;
      uVar3 = uVar3 + *(byte *)(param_1 + 0x21);
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469a26d6 FUN_1469a26d6 body=29 status=ok
// SIG undefined FUN_1469a26d6(void)

void FUN_1469a26d6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469a26f4 FUN_1469a26f4 body=52 status=ok
// SIG undefined FUN_1469a26f4(void)

undefined8 * FUN_1469a26f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7c80;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a2728 FUN_1469a2728 body=127 status=ok
// SIG undefined FUN_1469a2728(void)

undefined8 FUN_1469a2728(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469a250c(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469a27c4 FUN_1469a27c4 body=31 status=ok
// SIG undefined FUN_1469a27c4(void)

undefined8 FUN_1469a27c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a2800 FUN_1469a2800 body=60 status=ok
// SIG undefined FUN_1469a2800(void)

void FUN_1469a2800(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149ef7ca0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1469a283c FUN_1469a283c body=111 status=ok
// SIG undefined FUN_1469a283c(void)

void FUN_1469a283c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection(param_2);
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149ef7ca0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
  }
  return;
}



// FUNCTION 1469a28ac Unwind@1469a28ac body=41 status=ok
// SIG undefined Unwind@1469a28ac(void)

void Unwind_1469a28ac(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1469a28d6 Unwind@1469a28d6 body=21 status=ok
// SIG undefined Unwind@1469a28d6(void)

void Unwind_1469a28d6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a28ec FUN_1469a28ec body=21 status=ok
// SIG undefined FUN_1469a28ec(void)

undefined8 FUN_1469a28ec(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1469a2906 FUN_1469a2906 body=398 status=ok
// SIG undefined FUN_1469a2906(void)

ulonglong FUN_1469a2906(undefined8 param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  
  pwVar2 = wcsrchr(param_2,L'.');
  pwVar3 = pwVar2 + 1;
  if (pwVar2 == (wchar_t *)0x0) {
    pwVar3 = param_2;
  }
  iVar1 = FUN_144a80a00(pwVar3,&DAT_149ef80e6);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_144a80a00(pwVar3,&DAT_149ef62fc);
    uVar5 = (undefined7)((ulonglong)param_2 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (iVar1 != 0) {
      iVar1 = FUN_144a80a00(pwVar3,&DAT_149ef62f2);
      if (iVar1 != 0) {
        iVar1 = FUN_144a80a00(pwVar3,&DAT_149ef6304);
        if (iVar1 == 0) {
          uVar4 = CONCAT71(uVar5,0xb);
        }
        else {
          iVar1 = FUN_144a80a00(pwVar3,&DAT_149e31260);
          if (iVar1 == 0) {
            uVar4 = CONCAT71(uVar5,3);
          }
          else {
            iVar1 = FUN_144a80a00(pwVar3,&DAT_149ef630c);
            if (iVar1 == 0) {
              uVar4 = CONCAT71(uVar5,4);
            }
            else {
              iVar1 = FUN_144a80a00(pwVar3,&DAT_149ef80de);
              if (iVar1 == 0) {
                uVar4 = CONCAT71(uVar5,5);
              }
              else {
                iVar1 = FUN_144a80a00(pwVar3,L"icns");
                if (iVar1 == 0) {
                  uVar4 = CONCAT71(uVar5,6);
                }
                else {
                  iVar1 = FUN_144a80a00(pwVar3,&DAT_149ef631e);
                  if (iVar1 == 0) {
                    uVar4 = CONCAT71(uVar5,7);
                  }
                  else {
                    iVar1 = FUN_144a80a00(pwVar3,&DAT_149ef6326);
                    if (iVar1 == 0) {
                      uVar4 = CONCAT71(uVar5,8);
                    }
                    else {
                      iVar1 = FUN_144a80a00(pwVar3,L"tiff");
                      uVar4 = CONCAT71(uVar5,9);
                      if (iVar1 != 0) {
                        iVar1 = FUN_144a80a00(pwVar3,&DAT_149ef80c8);
                        if (iVar1 != 0) {
                          iVar1 = FUN_144a80a00(pwVar3,&DAT_149ef80d0);
                          if (iVar1 != 0) {
                            iVar1 = FUN_144a80a00(pwVar3,&DAT_149ef80d6);
                            uVar4 = (ulonglong)-(uint)(iVar1 != 0) | 10;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1469a2af4 FUN_1469a2af4 body=65 status=ok
// SIG undefined FUN_1469a2af4(void)

void FUN_1469a2af4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1469a2b36 Unwind@1469a2b36 body=20 status=ok
// SIG undefined Unwind@1469a2b36(void)

void Unwind_1469a2b36(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a2b4c FUN_1469a2b4c body=65 status=ok
// SIG undefined FUN_1469a2b4c(void)

void FUN_1469a2b4c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1469a2b8e Unwind@1469a2b8e body=20 status=ok
// SIG undefined Unwind@1469a2b8e(void)

void Unwind_1469a2b8e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a2ba4 FUN_1469a2ba4 body=65 status=ok
// SIG undefined FUN_1469a2ba4(void)

void FUN_1469a2ba4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1469a2be6 Unwind@1469a2be6 body=20 status=ok
// SIG undefined Unwind@1469a2be6(void)

void Unwind_1469a2be6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a2bfc FUN_1469a2bfc body=65 status=ok
// SIG undefined FUN_1469a2bfc(void)

void FUN_1469a2bfc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1469a2c3e Unwind@1469a2c3e body=20 status=ok
// SIG undefined Unwind@1469a2c3e(void)

void Unwind_1469a2c3e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a2c54 FUN_1469a2c54 body=65 status=ok
// SIG undefined FUN_1469a2c54(void)

void FUN_1469a2c54(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1469a2c96 Unwind@1469a2c96 body=20 status=ok
// SIG undefined Unwind@1469a2c96(void)

void Unwind_1469a2c96(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a2cac FUN_1469a2cac body=65 status=ok
// SIG undefined FUN_1469a2cac(void)

void FUN_1469a2cac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1469a2cee Unwind@1469a2cee body=20 status=ok
// SIG undefined Unwind@1469a2cee(void)

void Unwind_1469a2cee(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a2d04 FUN_1469a2d04 body=65 status=ok
// SIG undefined FUN_1469a2d04(void)

void FUN_1469a2d04(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1469a2d46 Unwind@1469a2d46 body=20 status=ok
// SIG undefined Unwind@1469a2d46(void)

void Unwind_1469a2d46(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a2d5c FUN_1469a2d5c body=65 status=ok
// SIG undefined FUN_1469a2d5c(void)

void FUN_1469a2d5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1469a2d9e Unwind@1469a2d9e body=20 status=ok
// SIG undefined Unwind@1469a2d9e(void)

void Unwind_1469a2d9e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a2db4 FUN_1469a2db4 body=65 status=ok
// SIG undefined FUN_1469a2db4(void)

void FUN_1469a2db4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1469a2df6 Unwind@1469a2df6 body=20 status=ok
// SIG undefined Unwind@1469a2df6(void)

void Unwind_1469a2df6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a2e0c FUN_1469a2e0c body=65 status=ok
// SIG undefined FUN_1469a2e0c(void)

void FUN_1469a2e0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1469a2e4e Unwind@1469a2e4e body=20 status=ok
// SIG undefined Unwind@1469a2e4e(void)

void Unwind_1469a2e4e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a2e63 FUN_1469a2e63 body=113 status=ok
// SIG undefined FUN_1469a2e63(void)

void FUN_1469a2e63(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149ef7dc0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0xff;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0x400000000;
  puVar1[2] = &PTR_LAB_149ef5bf0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1469a2ede FUN_1469a2ede body=29 status=ok
// SIG undefined FUN_1469a2ede(void)

undefined8 FUN_1469a2ede(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a2efb FUN_1469a2efb body=116 status=ok
// SIG undefined FUN_1469a2efb(void)

void FUN_1469a2efb(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x88);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149ef7dc0;
  uVar1 = *param_1;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined1 *)(puVar2 + 10) = 0xff;
  *(undefined8 *)((longlong)puVar2 + 100) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x5c) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x74) = 0;
  puVar2[2] = &PTR_LAB_149ef5bf0;
  *(undefined4 *)(puVar2 + 0xf) = uVar1;
  puVar2[0x10] = 0;
  return;
}



// FUNCTION 1469a2f6f FUN_1469a2f6f body=128 status=ok
// SIG undefined FUN_1469a2f6f(void)

undefined8 * FUN_1469a2f6f(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149ef7de0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0xff;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0x400000000;
  puVar1[2] = &PTR_FUN_149ef61d0;
  FUN_144b8c6c0(&PTR_LAB_14c75ef28);
  return puVar1;
}



// FUNCTION 1469a2ffa FUN_1469a2ffa body=29 status=ok
// SIG undefined FUN_1469a2ffa(void)

undefined8 FUN_1469a2ffa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a3017 FUN_1469a3017 body=131 status=ok
// SIG undefined FUN_1469a3017(void)

undefined8 * FUN_1469a3017(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149ef7de0;
  uVar1 = *param_1;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined1 *)(puVar2 + 10) = 0xff;
  *(undefined8 *)((longlong)puVar2 + 100) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x5c) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x74) = 0;
  puVar2[2] = &PTR_FUN_149ef61d0;
  *(undefined4 *)(puVar2 + 0xf) = uVar1;
  FUN_144b8c6c0(&PTR_LAB_14c75ef28);
  return puVar2;
}



// FUNCTION 1469a309a FUN_1469a309a body=107 status=ok
// SIG undefined FUN_1469a309a(void)

void FUN_1469a309a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149ef7e00;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0xff;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[2] = &PTR_FUN_149ef4ef0;
  *(undefined2 *)(puVar1 + 0xf) = 1;
  return;
}



// FUNCTION 1469a3110 FUN_1469a3110 body=29 status=ok
// SIG undefined FUN_1469a3110(void)

undefined8 FUN_1469a3110(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a312d FUN_1469a312d body=105 status=ok
// SIG undefined FUN_1469a312d(void)

void FUN_1469a312d(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_149ef7e20;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0xff;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[2] = &PTR_FUN_149ef5ad0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1469a3196 FUN_1469a3196 body=42 status=ok
// SIG undefined FUN_1469a3196(void)

void FUN_1469a3196(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ef5ad0;
  FUN_14698a2e2(param_1 + 0x78);
  FUN_1469a33a0(param_1 + 0x10);
  return;
}



// FUNCTION 1469a31c0 FUN_1469a31c0 body=29 status=ok
// SIG undefined FUN_1469a31c0(void)

undefined8 FUN_1469a31c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a31dd FUN_1469a31dd body=105 status=ok
// SIG undefined FUN_1469a31dd(void)

void FUN_1469a31dd(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_149ef7e40;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0xff;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[2] = &PTR_FUN_149ef5190;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1469a3246 FUN_1469a3246 body=42 status=ok
// SIG undefined FUN_1469a3246(void)

void FUN_1469a3246(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ef5190;
  FUN_1469a328e(param_1 + 0x78);
  FUN_1469a33a0(param_1 + 0x10);
  return;
}



// FUNCTION 1469a3270 FUN_1469a3270 body=29 status=ok
// SIG undefined FUN_1469a3270(void)

undefined8 FUN_1469a3270(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a328e FUN_1469a328e body=44 status=ok
// SIG undefined FUN_1469a328e(void)

void FUN_1469a328e(longlong *param_1)

{
  FUN_14698d349(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469a32ba FUN_1469a32ba body=9 status=ok
// SIG undefined FUN_1469a32ba(void)

void FUN_1469a32ba(longlong param_1)

{
  FUN_1469a33a0(param_1 + 0x10);
  return;
}



// FUNCTION 1469a32c4 FUN_1469a32c4 body=29 status=ok
// SIG undefined FUN_1469a32c4(void)

undefined8 FUN_1469a32c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a32e1 FUN_1469a32e1 body=113 status=ok
// SIG undefined FUN_1469a32e1(void)

void FUN_1469a32e1(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149ef7e80;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 10) = 0xff;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[2] = &PTR_FUN_149ef7ea0;
  return;
}



// FUNCTION 1469a335c FUN_1469a335c body=29 status=ok
// SIG undefined FUN_1469a335c(void)

undefined8 FUN_1469a335c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a337a FUN_1469a337a body=38 status=ok
// SIG undefined FUN_1469a337a(void)

undefined8 FUN_1469a337a(undefined8 param_1,int param_2)

{
  FUN_1469a33a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a33a0 FUN_1469a33a0 body=73 status=ok
// SIG undefined FUN_1469a33a0(void)

void FUN_1469a33a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ef6260;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1469a33e9 FUN_1469a33e9 body=122 status=ok
// SIG undefined FUN_1469a33e9(void)

undefined8 * FUN_1469a33e9(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149ef7f30;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
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
  FUN_1469a3482(puVar1 + 2);
  return puVar1;
}



// FUNCTION 1469a3463 Unwind@1469a3463 body=30 status=ok
// SIG undefined Unwind@1469a3463(void)

void Unwind_1469a3463(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1469a3482 FUN_1469a3482 body=99 status=ok
// SIG undefined FUN_1469a3482(void)

undefined8 * FUN_1469a3482(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149ef7f50;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0xffffffff;
  FUN_144a5dc74(param_1 + 0xd);
  return param_1;
}



// FUNCTION 1469a34e6 Unwind@1469a34e6 body=58 status=ok
// SIG undefined Unwind@1469a34e6(void)

void Unwind_1469a34e6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1469a352a FUN_1469a352a body=29 status=ok
// SIG undefined FUN_1469a352a(void)

undefined8 FUN_1469a352a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a3548 FUN_1469a3548 body=38 status=ok
// SIG undefined FUN_1469a3548(void)

undefined8 FUN_1469a3548(undefined8 param_1,int param_2)

{
  FUN_1469a356e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a356e FUN_1469a356e body=89 status=ok
// SIG undefined FUN_1469a356e(void)

void FUN_1469a356e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ef7f50;
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469a35c8 Unwind@1469a35c8 body=20 status=ok
// SIG undefined Unwind@1469a35c8(void)

void Unwind_1469a35c8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1469a35dd FUN_1469a35dd body=148 status=ok
// SIG undefined FUN_1469a35dd(void)

void FUN_1469a35dd(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149ef7fc0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 10) = 0xff;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[2] = &PTR_FUN_149ef5f00;
  *(undefined8 *)((longlong)puVar1 + 0x82) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8a) = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  return;
}



// FUNCTION 1469a367c FUN_1469a367c body=29 status=ok
// SIG undefined FUN_1469a367c(void)

undefined8 FUN_1469a367c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a3699 FUN_1469a3699 body=103 status=ok
// SIG undefined FUN_1469a3699(void)

void FUN_1469a3699(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149ef7fe0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0xff;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[2] = &PTR_FUN_149ef8000;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 1469a370a FUN_1469a370a body=29 status=ok
// SIG undefined FUN_1469a370a(void)

undefined8 FUN_1469a370a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a3728 FUN_1469a3728 body=38 status=ok
// SIG undefined FUN_1469a3728(void)

undefined8 FUN_1469a3728(undefined8 param_1,int param_2)

{
  FUN_1469a374e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469a374e FUN_1469a374e body=68 status=ok
// SIG undefined FUN_1469a374e(void)

void FUN_1469a374e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149ef8000;
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    FUN_14698cc96(lVar1);
    FUN_1400020a8(lVar1);
    param_1[0xd] = 0;
  }
  FUN_1469a33a0(param_1);
  return;
}



// FUNCTION 1469a379a FUN_1469a379a body=203 status=ok
// SIG undefined FUN_1469a379a(void)

float FUN_1469a379a(float param_1)

{
  float fVar1;
  
  param_1 = 1.0 - param_1;
  if (0.36363637 <= param_1) {
    if (0.72727275 <= param_1) {
      if (0.9 <= param_1) {
        fVar1 = param_1 * -20.52 + param_1 * 10.8 * param_1 + 10.72;
      }
      else {
        fVar1 = param_1 * -19.635458 + param_1 * 12.066482 * param_1 + 8.898061;
      }
    }
    else {
      fVar1 = param_1 * -9.9 + param_1 * 9.075 * param_1 + 3.4;
    }
  }
  else {
    fVar1 = param_1 * 12.0 * param_1 * 0.0625;
  }
  return 1.0 - fVar1;
}



// FUNCTION 1469a3865 FUN_1469a3865 body=248 status=ok
// SIG undefined FUN_1469a3865(void)

undefined8 FUN_1469a3865(undefined8 param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  if (fVar1 < 0.5) {
    uVar2 = FUN_1469a379a(fVar1 + fVar1);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    fVar1 = (float)uVar2 * 0.5;
  }
  else {
    fVar1 = fVar1 + fVar1 + -1.0;
    if (0.36363637 <= fVar1) {
      if (0.72727275 <= fVar1) {
        if (0.9 <= fVar1) {
          fVar1 = fVar1 * -20.52 + fVar1 * 10.8 * fVar1 + 10.72;
        }
        else {
          fVar1 = fVar1 * -19.635458 + fVar1 * 12.066482 * fVar1 + 8.898061;
        }
      }
      else {
        fVar1 = fVar1 * -9.9 + fVar1 * 9.075 * fVar1 + 3.4;
      }
    }
    else {
      uVar3 = 0;
      fVar1 = fVar1 * 12.0 * fVar1 * 0.0625;
    }
    fVar1 = fVar1 * 0.5 + 0.5;
  }
  return CONCAT44(uVar3,fVar1);
}



// FUNCTION 1469a395e FUN_1469a395e body=83 status=ok
// SIG undefined FUN_1469a395e(void)

void FUN_1469a395e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149ef9de0;
  uVar1 = DAT_14c8463f8;
  param_1[3] = DAT_14c8463f0;
  param_1[4] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[5] = DAT_14c8463f0;
  param_1[6] = uVar1;
  param_1[7] = 0x44bb8000447a0000;
  param_1[8] = 0x3dcccccd3f000000;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar1 = DAT_14c8463f8;
  param_1[10] = DAT_14c8463f0;
  param_1[0xb] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0xc] = DAT_14c8463f0;
  param_1[0xd] = uVar1;
  return;
}



// FUNCTION 1469a39b2 FUN_1469a39b2 body=23 status=ok
// SIG undefined FUN_1469a39b2(void)

void FUN_1469a39b2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001469a39c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1469a39ca FUN_1469a39ca body=400 status=ok
// SIG undefined FUN_1469a39ca(void)

void FUN_1469a39ca(longlong *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = (**(code **)(*param_1 + 0x60))();
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_3 + 0x318))) {
    lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x310) + (ulonglong)uVar5 * 0x10);
    plVar4 = *(longlong **)(*(longlong *)(param_3 + 0x310) + 8 + (ulonglong)uVar5 * 0x10);
    if (plVar4 == (longlong *)0x0) {
      if (lVar3 != 0) {
        local_88 = &local_70;
        local_68 = (longlong *)0x0;
        local_70 = lVar3;
        (**(code **)(*param_1 + 0x98))(param_1,local_60,param_2,param_3);
        local_78 = (longlong *)0x0;
        local_88 = (longlong *)((ulonglong)local_88 & 0xffffffffffffff00);
        local_80 = lVar3;
        (**(code **)(*param_1 + 0x88))(param_1,param_3,&local_80,local_60);
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar3 != 0) {
        local_88 = &local_70;
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_70 = lVar3;
        local_68 = plVar4;
        (**(code **)(*param_1 + 0x98))(param_1,local_60,param_2,param_3);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_88 = (longlong *)((ulonglong)local_88 & 0xffffffffffffff00);
        local_80 = lVar3;
        local_78 = plVar4;
        (**(code **)(*param_1 + 0x88))(param_1,param_3,&local_80,local_60);
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
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_4 + 8);
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
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a3b5c FUN_1469a3b5c body=911 status=ok
// SIG undefined FUN_1469a3b5c(void)

undefined8 FUN_1469a3b5c(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined *puVar13;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  float local_cc;
  float local_c8;
  undefined2 local_c2;
  undefined **local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined7 local_58;
  undefined4 uStack_51;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar9 = (**(code **)(*param_1 + 0x78))(param_1,param_3);
  if (cVar9 != '\0') {
    lVar5 = *(longlong *)(param_3 + 0x20);
    plVar6 = *(longlong **)(param_3 + 0x30);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    bVar8 = false;
    bVar7 = false;
    if (((((lVar5 != DAT_14c9659f8) && (bVar7 = bVar8, lVar5 != DAT_14c965a10)) &&
         (lVar5 != DAT_14c9659c8)) && (lVar5 != DAT_14c9659e0)) &&
       ((lVar5 == DAT_14c966d68 || (bVar7 = true, lVar5 == DAT_14c964d88)))) {
      if (*(char *)(param_3 + 10) == '\0') {
        iVar4 = *(int *)(param_3 + 0xc);
        bVar7 = false;
        if (((longlong)iVar4 < 0) || (*(int *)(param_2 + 0x318) <= iVar4)) goto LAB_1469a3be0;
        lVar11 = (longlong)iVar4 * 0x10;
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x310) + lVar11);
        plVar12 = *(longlong **)(*(longlong *)(param_2 + 0x310) + 8 + lVar11);
        if (plVar12 == (longlong *)0x0) {
          if (lVar5 == 0) goto LAB_1469a3c3f;
LAB_1469a3c80:
          iVar4 = *(int *)(lVar5 + 0x18);
          local_f0 = plVar12;
          if (iVar4 == 0) {
            (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_c2);
          }
          else {
            local_c2 = 0;
          }
          plVar3 = DAT_14c966ea8;
          local_f8 = DAT_14c966e98;
          local_100 = DAT_14c966ea0;
          if (DAT_14c966ea8 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
            UNLOCK();
          }
          puVar13 = &DAT_14c96b1e8;
          if (iVar4 == 0) {
            puVar13 = (undefined *)(param_2 + 0x150);
          }
          FUN_1400bbf02(lVar5,&local_e8,10);
          FUN_14007d9be(lVar5,&local_cc,10);
          plVar12 = local_f0;
          local_90 = local_cc - (float)local_e8;
          local_8c = local_c8 - local_e8._4_4_;
          local_b4 = *(undefined4 *)(lVar5 + 0x18);
          local_b8 = local_c2;
          local_b6 = 0;
          local_a8 = 0;
          local_c0 = &PTR_FUN_149eda650;
          local_a0 = local_cc;
          local_9c = local_c8;
          local_98 = (float)local_e8;
          local_94 = local_e8._4_4_;
          local_80 = local_f8;
          local_78 = local_100;
          local_70 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_68 = 10;
          local_60 = 0x3f800000;
          local_5c = 0;
          local_58 = 0;
          uStack_51 = 0;
          local_b0 = local_b4;
          local_88 = puVar13;
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
          local_e8 = 0;
          plStack_e0 = (longlong *)0x0;
          FUN_1411b470e(param_2,&local_e8,&local_c0);
          plVar3 = plStack_e0;
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_e0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_e0)(plStack_e0);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          plVar3 = local_70;
          local_c0 = &PTR_FUN_149eda650;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_70 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (plVar12 == (longlong *)0x0) goto LAB_1469a3c3f;
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          if (lVar5 != 0) goto LAB_1469a3c80;
        }
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
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
LAB_1469a3c3f:
      bVar7 = false;
    }
LAB_1469a3be0:
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar6 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    uVar10 = 1;
    if (!bVar7) goto LAB_1469a3c0b;
  }
  uVar10 = 0;
LAB_1469a3c0b:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1469a3eec FUN_1469a3eec body=872 status=ok
// SIG undefined FUN_1469a3eec(void)

ulonglong FUN_1469a3eec(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 unaff_RBP;
  undefined7 uVar12;
  ulonglong uVar11;
  bool bVar13;
  undefined1 auStack_118 [32];
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined2 local_c2;
  undefined **local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined7 local_58;
  undefined4 uStack_51;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar7 = (**(code **)(*param_1 + 0x78))(param_1,param_3);
  if (cVar7 != '\0') {
    lVar5 = *(longlong *)(param_3 + 0x20);
    plVar6 = *(longlong **)(param_3 + 0x30);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    bVar13 = true;
    uVar12 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if (((lVar5 == DAT_14c9659f8) || (lVar5 == DAT_14c965a10)) || (lVar5 == DAT_14c9659c8)) {
      uVar11 = CONCAT71(uVar12,1);
    }
    else {
      uVar11 = CONCAT71(uVar12,1);
      if (lVar5 != DAT_14c9659e0) {
        if (((lVar5 == DAT_14c966d68) || (lVar5 == DAT_14c964d88)) &&
           (*(char *)(param_3 + 10) == '\0')) {
          iVar4 = *(int *)(param_3 + 0xc);
          bVar13 = false;
          if ((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_2 + 0x318))) {
            lVar9 = (longlong)iVar4 * 0x10;
            lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x310) + lVar9);
            plVar10 = *(longlong **)(*(longlong *)(param_2 + 0x310) + 8 + lVar9);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            bVar13 = lVar5 != 0;
            if (bVar13) {
              iVar4 = *(int *)(lVar5 + 0x18);
              local_e0 = plVar10;
              if (iVar4 == 0) {
                (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_c2);
              }
              else {
                local_c2 = 0;
              }
              plVar3 = DAT_14c966ea8;
              local_e8 = DAT_14c966e98;
              local_f0 = DAT_14c966ea0;
              if (DAT_14c966ea8 != (longlong *)0x0) {
                LOCK();
                *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
                UNLOCK();
              }
              local_f8 = &DAT_14c96b1e8;
              if (iVar4 == 0) {
                local_f8 = (undefined *)(param_2 + 0x150);
              }
              FUN_1400bbf02(lVar5,&local_cc,10);
              FUN_14007d9be(lVar5,&local_d4,10);
              plVar10 = local_e0;
              local_90 = local_d4 - local_cc;
              local_8c = local_d0 - local_c8;
              local_b4 = *(undefined4 *)(lVar5 + 0x18);
              local_b8 = local_c2;
              local_b6 = 0;
              local_a8 = 0;
              local_c0 = &PTR_FUN_149eda650;
              local_a0 = local_d4;
              local_9c = local_d0;
              local_98 = local_cc;
              local_94 = local_c8;
              local_88 = local_f8;
              local_80 = local_e8;
              local_78 = local_f0;
              local_70 = plVar3;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
              }
              local_68 = 10;
              local_60 = 0x3f800000;
              local_5c = 0;
              local_58 = 0;
              uStack_51 = 0;
              local_b0 = local_b4;
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
              uVar8 = FUN_140e6b9a2(param_2,&local_c0);
              plVar3 = local_70;
              uVar11 = (ulonglong)uVar8;
              local_c0 = &PTR_FUN_149eda650;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_70 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_70)(local_70);
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
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar10 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
          }
        }
        else {
          bVar13 = false;
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar6 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (bVar13) goto LAB_1469a3fb3;
  }
  uVar11 = 0;
LAB_1469a3fb3:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar11 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a4256 FUN_1469a4256 body=206 status=ok
// SIG undefined FUN_1469a4256(void)

undefined8 FUN_1469a4256(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  
  cVar7 = (**(code **)(*param_1 + 0x70))(param_1,param_3);
  if (cVar7 == '\0') {
    return 1;
  }
  lVar4 = *(longlong *)(param_3 + 0x20);
  plVar5 = *(longlong **)(param_3 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  fVar3 = *(float *)(param_3 + 0x40);
  if (lVar4 == DAT_14c965770) {
    param_1[10] = (longlong)(double)fVar3;
  }
  else if (lVar4 == DAT_14c965788) {
    param_1[0xb] = (longlong)(double)-fVar3;
  }
  else if (lVar4 == DAT_14c9657b8) {
    param_1[0xc] = (longlong)(double)fVar3;
  }
  else {
    if (lVar4 != DAT_14c9657d0) {
      bVar6 = false;
      goto LAB_1469a429b;
    }
    param_1[0xd] = (longlong)(double)-fVar3;
  }
  bVar6 = true;
LAB_1469a429b:
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (bVar6) {
    return 1;
  }
  return 0;
}



// FUNCTION 1469a4324 FUN_1469a4324 body=3 status=ok
// SIG undefined FUN_1469a4324(void)

undefined8 FUN_1469a4324(void)

{
  return 0;
}



// FUNCTION 1469a4328 FUN_1469a4328 body=26 status=ok
// SIG undefined FUN_1469a4328(void)

bool FUN_1469a4328(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x60))();
  return iVar1 == *(int *)(param_2 + 0xc);
}



// FUNCTION 1469a4342 FUN_1469a4342 body=90 status=ok
// SIG undefined FUN_1469a4342(void)

void FUN_1469a4342(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined **local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &PTR_FUN_149eda670;
  local_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  uStack_18 = *(undefined4 *)(param_2 + 0x10);
  uStack_14 = *(undefined4 *)(param_2 + 0x14);
  local_10 = *(undefined8 *)(param_2 + 0x18);
  (**(code **)(*param_1 + 0x80))(local_20,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a439e FUN_1469a439e body=90 status=ok
// SIG undefined FUN_1469a439e(void)

void FUN_1469a439e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined **local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &PTR_FUN_149eda670;
  local_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  uStack_18 = *(undefined4 *)(param_2 + 0x10);
  uStack_14 = *(undefined4 *)(param_2 + 0x14);
  local_10 = *(undefined8 *)(param_2 + 0x18);
  (**(code **)(*param_1 + 0x80))(local_20,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a43fa FUN_1469a43fa body=90 status=ok
// SIG undefined FUN_1469a43fa(void)

void FUN_1469a43fa(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined **local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &PTR_FUN_149eda670;
  local_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  uStack_18 = *(undefined4 *)(param_2 + 0x10);
  uStack_14 = *(undefined4 *)(param_2 + 0x14);
  local_10 = *(undefined8 *)(param_2 + 0x18);
  (**(code **)(*param_1 + 0x80))(local_20,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a4456 FUN_1469a4456 body=730 status=ok
// SIG undefined FUN_1469a4456(void)

void FUN_1469a4456(longlong *param_1,longlong param_2,undefined8 *param_3,double *param_4,
                  char param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_f8 [38];
  undefined2 local_d2;
  undefined **local_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined8 local_c4;
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined7 local_68;
  undefined4 uStack_61;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  (**(code **)(*(longlong *)*param_3 + 0x20))((longlong *)*param_3,&local_48);
  if (((param_5 != '\0') || ((int)local_48 != (int)*param_4)) || ((int)local_40 != (int)param_4[1]))
  {
    (**(code **)(*(longlong *)*param_3 + 0x28))();
    (**(code **)(*(longlong *)*param_3 + 0x20))((longlong *)*param_3,&local_58);
    uVar7 = (**(code **)(*param_1 + 0x60))(param_1);
    if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_2 + 0x318))) {
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x310) + (ulonglong)uVar7 * 0x10);
      plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x310) + 8 + (ulonglong)uVar7 * 0x10);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (lVar5 != 0) {
        iVar4 = *(int *)(lVar5 + 0x18);
        if (iVar4 == 0) {
          (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_d2);
        }
        else {
          local_d2 = 0;
        }
        plVar3 = DAT_14c966e90;
        local_88 = DAT_14c966e88;
        local_90 = DAT_14c966e80;
        if (DAT_14c966e90 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
          UNLOCK();
        }
        local_98 = &DAT_14c96b1e8;
        if (iVar4 == 0) {
          local_98 = (undefined *)(param_2 + 0x150);
        }
        local_a4 = (float)local_40;
        local_a8 = (float)local_48;
        local_ac = (float)local_50;
        local_b0 = (float)local_58;
        local_c8 = local_d2;
        local_c6 = 0;
        local_c4 = 0;
        local_b8 = 0;
        local_d0 = &PTR_FUN_149eda650;
        local_9c = local_ac - local_a4;
        local_a0 = local_b0 - local_a8;
        local_80 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_78 = 10;
        local_70 = 0x3f800000;
        local_6c = 0;
        local_68 = 0;
        uStack_61 = 0;
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
        FUN_14058dffc(param_2,&local_d0,0);
        plVar3 = local_80;
        local_d0 = &PTR_FUN_149eda650;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_80)(local_80);
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
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a4732 FUN_1469a4732 body=681 status=ok
// SIG undefined FUN_1469a4732(void)

void FUN_1469a4732(undefined8 param_1,longlong param_2,longlong *param_3,double *param_4,
                  char param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_118 [46];
  undefined2 local_ea;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined1 local_de;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined7 local_80;
  undefined4 uStack_79;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14007d9be(*param_3,&local_e8,10);
  fVar5 = (float)local_e8;
  fVar6 = local_e8._4_4_;
  if ((param_5 != '\0') ||
     ((int)local_e8._4_4_ != (int)param_4[1] || (int)(float)local_e8 != (int)*param_4)) {
    FUN_1469b745c(*param_3);
    FUN_14007d9be(*param_3,&local_e8,10);
    local_c8 = (float)local_e8;
    local_c4 = local_e8._4_4_;
    iVar3 = *(int *)(*param_3 + 0x18);
    if (iVar3 == 0) {
      (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_ea);
    }
    else {
      local_ea = 0;
    }
    plVar4 = DAT_14c966e90;
    local_a0 = DAT_14c966e88;
    local_a8 = DAT_14c966e80;
    if (DAT_14c966e90 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
      UNLOCK();
    }
    local_b0 = &DAT_14c96b1e8;
    if (iVar3 == 0) {
      local_b0 = (undefined *)(param_2 + 0x150);
    }
    local_dc = *(undefined4 *)(*param_3 + 0x18);
    local_e0 = local_ea;
    local_de = 0;
    local_d0 = 0;
    local_e8 = &PTR_FUN_149eda650;
    local_c0 = fVar5;
    local_bc = fVar6;
    local_b4 = local_c4 - fVar6;
    local_b8 = local_c8 - fVar5;
    local_98 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_90 = 10;
    local_88 = 0x3f800000;
    local_84 = 0;
    local_80 = 0;
    uStack_79 = 0;
    local_d8 = local_dc;
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
    FUN_14058dffc(param_2,&local_e8,0);
    plVar4 = local_98;
    local_e8 = &PTR_FUN_149eda650;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_98)(local_98);
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a49dc FUN_1469a49dc body=1039 status=ok
// SIG undefined FUN_1469a49dc(void)

double * FUN_1469a49dc(longlong param_1,double *param_2,float param_3,longlong *param_4,
                      longlong *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  double dVar8;
  byte bVar9;
  longlong lVar10;
  undefined1 *puVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  undefined4 local_230;
  longlong local_220;
  undefined4 local_218;
  float local_210;
  float local_20c;
  undefined1 local_208 [288];
  undefined1 *local_e8;
  int local_e0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_14007d9be(*param_5,&local_210,10);
  dVar2 = *(double *)(param_1 + 0x50);
  dVar3 = *(double *)(param_1 + 0x58);
  fVar13 = (float)SQRT(dVar2 * dVar2 + dVar3 * dVar3);
  if (0.0 < fVar13) {
    fVar14 = fVar13 - *(float *)(param_1 + 0x44);
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    dVar15 = (double)(fVar14 / (1.0 - *(float *)(param_1 + 0x44)));
    dVar2 = dVar2 * (1.0 / (double)fVar13) * dVar15;
    dVar3 = dVar3 * (1.0 / (double)fVar13) * dVar15;
  }
  uVar4 = *(undefined4 *)(*param_5 + 0x18);
  FUN_1401b43e8(param_4,&local_220);
  local_238 = 0;
  local_230 = uVar4;
  (**(code **)(*param_4 + 0x108))(param_4,&local_210,CONCAT44(local_20c,local_210),&local_220);
  FUN_1401b439d(local_220,local_218);
  if (local_220 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)local_e0 < 1) {
    dVar15 = 1.0;
  }
  else {
    puVar11 = local_e8;
    if (local_e8 == (undefined1 *)0x0) {
      puVar11 = local_208;
    }
    fVar13 = 1.0;
    lVar10 = 0;
    do {
      plVar5 = *(longlong **)(puVar11 + lVar10 + 0x38);
      plVar6 = *(longlong **)(puVar11 + lVar10 + 0x40);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      bVar9 = (**(code **)(*plVar5 + 0x1a8))();
      if (bVar9 != 0) {
        fVar13 = *(float *)(param_1 + 0x40);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      bVar12 = (longlong)local_e0 * 0x48 + -0x48 == lVar10;
      lVar10 = lVar10 + 0x48;
    } while ((bVar9 | bVar12) != 1);
    dVar15 = (double)fVar13;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    dVar19 = (double)(float)(dVar2 * (double)*(float *)(param_1 + 0x3c));
    dVar18 = 0.0;
    if (dVar2 <= 0.0) {
      dVar18 = dVar19;
    }
    dVar19 = (double)(-(ulonglong)(0.0 < dVar2) & (ulonglong)dVar19);
    dVar17 = (double)(float)((double)*(float *)(param_1 + 0x3c) * dVar3);
    dVar8 = 0.0;
    if (dVar3 <= 0.0) {
      dVar8 = dVar17;
    }
    dVar17 = (double)(-(ulonglong)(0.0 < dVar3) & (ulonglong)dVar17);
    dVar2 = dVar2 * dVar2 * dVar2 * (double)*(float *)(param_1 + 0x38) * (double)param_3 +
            *(double *)(param_1 + 0x18);
    dVar3 = dVar3 * dVar3 * dVar3 * (double)*(float *)(param_1 + 0x38) * (double)param_3 +
            *(double *)(param_1 + 0x20);
    if (dVar19 <= dVar2) {
      dVar2 = dVar19;
    }
    if (dVar2 <= dVar18) {
      dVar2 = dVar18;
    }
    *(double *)(param_1 + 0x18) = dVar2;
    if (dVar17 <= dVar3) {
      dVar3 = dVar17;
    }
    if (dVar3 <= dVar8) {
      dVar3 = dVar8;
    }
    *(double *)(param_1 + 0x20) = dVar3;
  }
  else if (*(int *)(param_1 + 0x48) == 1) {
    dVar3 = dVar3 * (double)*(float *)(param_1 + 0x3c);
    dVar2 = dVar2 * (double)*(float *)(param_1 + 0x3c);
    *(double *)(param_1 + 0x18) = dVar2;
    *(double *)(param_1 + 0x20) = dVar3;
  }
  else {
    dVar2 = *(double *)(param_1 + 0x18);
    dVar3 = *(double *)(param_1 + 0x20);
  }
  dVar19 = dVar2 * (double)param_3 * dVar15 + *(double *)(param_1 + 0x28) + (double)local_210;
  dVar2 = dVar3 * (double)param_3 * dVar15 + *(double *)(param_1 + 0x30) + (double)local_20c;
  *param_2 = dVar19;
  param_2[1] = dVar2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar19;
  auVar16 = roundsd(ZEXT816(0),auVar7,9);
  *(double *)(param_1 + 0x28) = dVar19 - auVar16._0_8_;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar2;
  auVar16 = roundsd(ZEXT816(0),auVar16,9);
  *(double *)(param_1 + 0x30) = dVar2 - auVar16._0_8_;
  FUN_1447fa21a(&local_210);
  plVar5 = (longlong *)param_5[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_b0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a4dec FUN_1469a4dec body=142 status=ok
// SIG undefined FUN_1469a4dec(void)

void FUN_1469a4dec(longlong param_1,int param_2,undefined4 *param_3)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 < 0xb) {
    pdVar1 = (double *)(param_1 + (longlong)param_2 * 0x20);
    if (*(char *)(param_1 + 8 + (longlong)param_2 * 0x20) == '\x01') {
      *(undefined1 *)(pdVar1 + 1) = 0;
    }
    pdVar1[2] = 0.0;
    pdVar1[3] = 0.0;
    QueryPerformanceCounter(&local_28);
    *pdVar1 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
    *(undefined1 *)(pdVar1 + 1) = 1;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(pdVar1 + 2) = *param_3;
    *(undefined4 *)((longlong)pdVar1 + 0x14) = uVar2;
    *(undefined4 *)(pdVar1 + 3) = uVar3;
    *(undefined4 *)((longlong)pdVar1 + 0x1c) = uVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a4e7c FUN_1469a4e7c body=35 status=ok
// SIG undefined FUN_1469a4e7c(void)

void FUN_1469a4e7c(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0xb) {
    lVar1 = param_1 + (longlong)param_2 * 0x20;
    if (*(char *)(param_1 + 8 + (longlong)param_2 * 0x20) == '\x01') {
      *(undefined1 *)(lVar1 + 8) = 0;
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1469a4ea0 FUN_1469a4ea0 body=98 status=ok
// SIG undefined FUN_1469a4ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469a4ea0(longlong param_1,int param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  if ((param_2 < 0xb) &&
     (lVar1 = (longlong)param_2 * 0x20, dVar3 = param_3[1] - *(double *)(param_1 + 0x18 + lVar1),
     dVar2 = *param_3 - *(double *)(param_1 + 0x10 + lVar1),
     (double)_DAT_14c98e464 <= SQRT(dVar2 * dVar2 + dVar3 * dVar3))) {
    if (*(char *)(param_1 + lVar1 + 8) == '\x01') {
      *(undefined1 *)(param_1 + lVar1 + 8) = 0;
    }
    *(undefined8 *)(lVar1 + param_1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1469a4f02 FUN_1469a4f02 body=118 status=ok
// SIG undefined FUN_1469a4f02(void)

undefined8 * FUN_1469a4f02(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149ef9e80;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = *param_2;
  lVar3 = param_2[1];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = param_3;
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 1469a4f78 FUN_1469a4f78 body=216 status=ok
// SIG undefined FUN_1469a4f78(void)

undefined8 *
FUN_1469a4f78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = param_3[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1469a4f02(param_1,&local_30,param_4);
  *param_1 = &PTR_FUN_149ef9ec0;
  param_1[9] = *param_2;
  lVar3 = param_2[1];
  param_1[10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_2[1];
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
  }
  plVar4 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a5096 FUN_1469a5096 body=252 status=ok
// SIG undefined FUN_1469a5096(void)

void FUN_1469a5096(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) {
LAB_1469a50e3:
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      FUN_1469a51a4(param_1 + 0x18);
    }
    else {
      iVar6 = (int)plVar4[1];
      do {
        if (iVar6 == 0) goto LAB_1469a50e3;
        LOCK();
        iVar3 = (int)plVar4[1];
        bVar7 = iVar6 == iVar3;
        if (bVar7) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar7);
      local_28 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plStack_20 = plVar4;
      FUN_1469a51a4(param_1 + 0x18);
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
    puVar5 = *(undefined8 **)(param_1 + 0x50);
    if (puVar5 != (undefined8 *)0x0) {
      iVar6 = *(int *)(puVar5 + 1);
      do {
        if (iVar6 == 0) goto LAB_1469a50b1;
        LOCK();
        iVar3 = *(int *)(puVar5 + 1);
        bVar7 = iVar6 == iVar3;
        if (bVar7) {
          *(int *)(puVar5 + 1) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar7);
      if (*(longlong *)(param_1 + 0x48) != 0) {
        FUN_14698158e();
      }
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar1 = (int *)((longlong)puVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
LAB_1469a50b1:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469a51a4 FUN_1469a51a4 body=134 status=ok
// SIG undefined FUN_1469a51a4(void)

void FUN_1469a51a4(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1469b2310(param_1,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a523c FUN_1469a523c body=146 status=ok
// SIG undefined FUN_1469a523c(void)

undefined8 * FUN_1469a523c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1469a4f02(param_1,&local_28);
  *param_1 = &PTR_FUN_149ef9f00;
  plVar3 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a52fa FUN_1469a52fa body=178 status=ok
// SIG undefined FUN_1469a52fa(void)

void FUN_1469a52fa(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *puStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    if (puVar3 == (undefined8 *)0x0) {
LAB_1469a5347:
      local_28 = 0;
      puStack_20 = (undefined8 *)0x0;
      FUN_1469a51a4(param_1 + 0x18);
    }
    else {
      iVar4 = *(int *)(puVar3 + 1);
      do {
        if (iVar4 == 0) goto LAB_1469a5347;
        LOCK();
        iVar2 = *(int *)(puVar3 + 1);
        bVar5 = iVar4 == iVar2;
        if (bVar5) {
          *(int *)(puVar3 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
      } while (!bVar5);
      local_28 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
      puStack_20 = puVar3;
      FUN_1469a51a4(param_1 + 0x18);
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3);
        LOCK();
        piVar1 = (int *)((longlong)puVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469a53be FUN_1469a53be body=173 status=ok
// SIG undefined FUN_1469a53be(void)

undefined8 *
FUN_1469a53be(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1469a4f02(param_1,&local_28,param_4);
  *param_1 = &PTR_FUN_149ef9f40;
  param_1[9] = *param_2;
  lVar3 = param_2[1];
  param_1[10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_2[1];
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a546c FUN_1469a546c body=107 status=ok
// SIG undefined FUN_1469a546c(void)

undefined8 * FUN_1469a546c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 == (longlong *)0x0) {
LAB_1469a54bf:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1469a54bf;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    puVar4 = *(undefined8 **)(param_1 + 0x48);
    if (puVar4 == (undefined8 *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      (**(code **)*puVar4)(puVar4,param_2);
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
  return param_2;
}



// FUNCTION 1469a54d8 FUN_1469a54d8 body=271 status=ok
// SIG undefined FUN_1469a54d8(void)

void FUN_1469a54d8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    puVar7 = *(undefined8 **)(param_1 + 0x50);
    bVar5 = true;
    if (puVar7 == (undefined8 *)0x0) {
LAB_1469a5528:
      puVar7 = (undefined8 *)0x0;
    }
    else {
      iVar6 = *(int *)(puVar7 + 1);
      do {
        if (iVar6 == 0) goto LAB_1469a5528;
        LOCK();
        iVar3 = *(int *)(puVar7 + 1);
        bVar8 = iVar6 == iVar3;
        if (bVar8) {
          *(int *)(puVar7 + 1) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar8);
      if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
      }
      bVar5 = false;
    }
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) {
LAB_1469a5537:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      FUN_1469a51a4(param_1 + 0x18);
    }
    else {
      iVar6 = (int)plVar4[1];
      do {
        if (iVar6 == 0) goto LAB_1469a5537;
        LOCK();
        iVar3 = (int)plVar4[1];
        bVar8 = iVar6 == iVar3;
        if (bVar8) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar8);
      local_38 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plStack_30 = plVar4;
      FUN_1469a51a4(param_1 + 0x18);
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
    if (!bVar5) {
      LOCK();
      piVar1 = (int *)(puVar7 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar7)(puVar7);
        LOCK();
        piVar1 = (int *)((longlong)puVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469a55fa FUN_1469a55fa body=93 status=ok
// SIG undefined FUN_1469a55fa(void)

ulonglong FUN_1469a55fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  bool bVar9;
  undefined7 uVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
  uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar7 = CONCAT71(uVar8,1);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1469a564a;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
      uVar7 = CONCAT71(uVar8,1);
    }
    else {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
      uVar7 = (ulonglong)uVar6;
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
LAB_1469a564a:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1469a5657 FUN_1469a5657 body=344 status=ok
// SIG undefined FUN_1469a5657(void)

undefined1 * FUN_1469a5657(undefined1 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  lVar5 = DAT_14c98e618;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*param_2 == DAT_14c964dd0) {
    uVar7 = (ulonglong)*(int *)(DAT_14c98e618 + 0x268);
    if (0 < (longlong)uVar7) {
      lVar8 = uVar7 << 4;
      do {
        lVar8 = lVar8 + -0x10;
        if ((longlong)uVar7 <= (longlong)*(int *)(lVar5 + 0x268)) {
          (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 0x260) + lVar8) + 0x38))();
        }
        bVar4 = 1 < uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar4);
    }
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x20702;
    uVar6 = FUN_146948ce8(local_e8,2,0);
    FUN_1403d4c6e(param_1,uVar6);
    FUN_14493db24(local_e8);
  }
  else {
    *param_1 = 0;
    param_1[0x20] = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    memset(param_1 + 0x28,0,0x88);
    *(undefined4 *)(param_1 + 0xb0) = 0x20702;
    param_1[0xb4] = 0;
  }
  plVar3 = (longlong *)param_2[2];
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
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a57b0 FUN_1469a57b0 body=87 status=ok
// SIG undefined FUN_1469a57b0(void)

void FUN_1469a57b0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0x268);
  if (0 < (longlong)uVar3) {
    lVar2 = uVar3 << 4;
    do {
      lVar2 = lVar2 + -0x10;
      if ((longlong)uVar3 <= (longlong)*(int *)(param_1 + 0x268)) {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x260) + lVar2) + 0x38))();
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 1469a5808 FUN_1469a5808 body=892 status=ok
// SIG undefined FUN_1469a5808(void)

undefined8
FUN_1469a5808(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,float *param_5
             ,undefined8 param_6,undefined1 param_7,float *param_8,undefined1 *param_9,
             undefined1 param_10)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_148 [32];
  float *local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined1 local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined1 local_e8;
  undefined7 uStack_e7;
  longlong *local_e0;
  longlong *plStack_d8;
  undefined2 local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  (**(code **)(*DAT_14c98e618 + 0x98))(DAT_14c98e618,&local_a0);
  if (local_a0 != 0) {
    lVar10 = param_3 + 8;
    if (*(longlong *)(param_3 + 0x128) != 0) {
      lVar10 = *(longlong *)(param_3 + 0x128);
    }
    uVar8 = *(undefined8 *)(lVar10 + 0x38);
    plVar9 = *(longlong **)(lVar10 + 0x40);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_a8 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_98 + 1) = (int)local_98[1] + 1;
      UNLOCK();
    }
    FUN_1469a5b86(uVar8,local_b0);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar5 = param_8[1];
  fVar6 = *param_8;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  if (0 < *(int *)(param_1 + 0x68)) {
    FUN_1469a5c0c(param_1,&local_e8,param_3);
    local_c8 = CONCAT71(uStack_e7,local_e8);
    if (local_e0 != (longlong *)0x0) {
      plStack_c0 = local_e0;
    }
    if (local_c8 != 0) goto LAB_1469a5a16;
  }
  if (param_9[1] == '\x01') {
    local_e8 = 1;
    local_e0 = (longlong *)0x0;
    plStack_d8 = (longlong *)0x0;
    local_d0 = CONCAT11(1,*param_9);
  }
  else {
    FUN_1469a5e82(&local_e8,param_3);
  }
  FUN_1428f57d4(param_1,&local_e8);
  plVar9 = plStack_d8;
  *(undefined2 *)(param_1 + 0x18) = local_d0;
  if (plStack_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_d8)(plStack_d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_1469a5f2c(param_1,param_3);
LAB_1469a5a16:
  if (DAT_14c98e468 != (undefined8 *)0x0 && DAT_14c98e470 != 0) {
    (**(code **)*DAT_14c98e468)(DAT_14c98e468,0);
    FUN_1446efa72(&DAT_14c98e468,0,0,0x10);
    DAT_14c98e470 = 0;
  }
  local_110 = *(undefined1 *)(param_1 + 0x19);
  uVar7 = *(undefined1 *)(param_1 + 0xe8);
  *(undefined1 *)(param_1 + 0xe8) = 1;
  local_128 = &local_f8;
  local_108 = param_10;
  local_118 = param_7;
  local_120 = param_6;
  local_f8 = fVar3;
  local_f4 = fVar4;
  local_f0 = fVar6 + fVar3;
  local_ec = fVar5 + fVar4;
  FUN_1469a641c(param_1,param_2,&local_c8,param_4);
  plVar9 = plStack_c0;
  *(undefined1 *)(param_1 + 0xe8) = uVar7;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_98 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
      }
    }
  }
  if (param_9[1] == '\x01') {
    param_9[1] = 0;
  }
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a5b86 FUN_1469a5b86 body=134 status=ok
// SIG undefined FUN_1469a5b86(void)

void FUN_1469a5b86(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x478) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x480);
  if (plVar2 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar2 = *(longlong **)(param_1 + 0x480);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x480) = plVar3;
    plVar3 = (longlong *)param_2[1];
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001469a5bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469a5c0c FUN_1469a5c0c body=628 status=ok
// SIG undefined FUN_1469a5c0c(void)

undefined8 * FUN_1469a5c0c(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = (longlong)*(int *)(param_3 + 0x130);
  if (0 < lVar9) {
    local_60 = param_3 + 8;
    uVar10 = lVar9 + 1;
    lVar9 = lVar9 * 0x48 + -8;
    do {
      lVar8 = *(longlong *)(param_3 + 0x128);
      if (*(longlong *)(param_3 + 0x128) == 0) {
        lVar8 = local_60;
      }
      uVar4 = *(ulonglong *)(lVar8 + -8 + lVar9);
      plVar5 = *(longlong **)(lVar8 + lVar9);
      local_58 = uVar4;
      if (plVar5 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_50 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
      uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar7 = FUN_1469b2b74((longlong *)(param_1 + 0x70),uVar6 >> 0x10 ^ uVar6,&local_58);
      plVar1 = local_50;
      if (iVar7 == -1) {
        lVar8 = 0;
      }
      else {
        lVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x70);
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (plVar5 == (longlong *)0x0) {
        if (lVar8 != 0) goto LAB_1469a5e2c;
      }
      else {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        if (lVar8 != 0) {
LAB_1469a5e2c:
          *param_2 = *(undefined8 *)(lVar8 + 0x10);
          lVar9 = *(longlong *)(lVar8 + 0x18);
          param_2[1] = lVar9;
          if (lVar9 != 0) {
            LOCK();
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            UNLOCK();
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                goto LAB_1469a5e0b;
              }
            }
          }
          if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return param_2;
        }
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      uVar10 = uVar10 - 1;
      lVar9 = lVar9 + -0x48;
    } while (1 < uVar10);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1469a5e0b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 1469a5e82 FUN_1469a5e82 body=169 status=ok
// SIG undefined FUN_1469a5e82(void)

char * FUN_1469a5e82(char *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = (longlong)*(int *)(param_2 + 0x130);
  if (0 < lVar5) {
    uVar6 = lVar5 + 1;
    lVar5 = lVar5 * 0x48 + -0x10;
    do {
      lVar4 = *(longlong *)(param_2 + 0x128);
      if (*(longlong *)(param_2 + 0x128) == 0) {
        lVar4 = param_2 + 8;
      }
      (**(code **)(**(longlong **)(lVar4 + lVar5) + 0x120))(*(longlong **)(lVar4 + lVar5),param_1);
      if (*param_1 != '\0') {
        return param_1;
      }
      plVar3 = *(longlong **)(param_1 + 0x10);
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
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + -0x48;
    } while (1 < uVar6);
  }
  *param_1 = '\x01';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\x01';
  return param_1;
}



// FUNCTION 1469a5f2c FUN_1469a5f2c body=1262 status=ok
// SIG undefined FUN_1469a5f2c(void)

void FUN_1469a5f2c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_248 [47];
  undefined1 local_219;
  undefined8 local_218;
  longlong *local_210;
  undefined8 local_200;
  longlong *local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (*(char *)(param_1 + 0xe8) != '\0') goto LAB_1469a5f5a;
  plVar7 = *(longlong **)(param_1 + 0x50);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7,&local_1f0);
    cVar4 = FUN_1403d1f4c(param_2,local_1f0);
    plVar7 = local_1e8;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1e8 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (cVar4 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))();
      *(undefined8 *)(param_1 + 0x50) = 0;
      plVar7 = *(longlong **)(param_1 + 0x58);
      if (plVar7 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x58) = 0;
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      *(undefined8 *)(param_1 + 0x40) = 0;
      plVar7 = *(longlong **)(param_1 + 0x48);
      if (plVar7 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x48) = 0;
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    }
  }
  iVar9 = *(int *)(param_2 + 0x130);
  if (iVar9 < 1) {
    plVar7 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    lVar10 = param_2 + 8;
    if (*(longlong *)(param_2 + 0x128) != 0) {
      lVar10 = *(longlong *)(param_2 + 0x128);
    }
    uVar5 = *(undefined8 *)(lVar10 + 0x38);
    plVar7 = *(longlong **)(lVar10 + 0x40);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
  }
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  plVar8 = *(longlong **)(param_1 + 0x28);
  if (plVar7 == plVar8) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar8 = plVar7;
        goto joined_r0x0001469a6069;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x28) = plVar7;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001469a6069:
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((0 < iVar9) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  iVar9 = *(int *)(param_2 + 0x130);
  lVar10 = (longlong)iVar9;
  if (lVar10 < 1) {
    plVar7 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    lVar6 = param_2 + 8;
    if (*(longlong *)(param_2 + 0x128) != 0) {
      lVar6 = *(longlong *)(param_2 + 0x128);
    }
    uVar5 = *(undefined8 *)(lVar6 + -0x10 + lVar10 * 0x48);
    plVar7 = *(longlong **)(lVar6 + -8 + lVar10 * 0x48);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
    }
  }
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  plVar8 = *(longlong **)(param_1 + 0x38);
  *(longlong **)(param_1 + 0x38) = plVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if ((0 < iVar9) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x40) != 0))
  goto LAB_1469a5f5a;
  FUN_1469a8a04(&local_1f0);
  FUN_1469b31ea(&local_218,&local_219);
  FUN_1469a8a76(&local_218,&local_200,&local_1f0);
  plVar7 = local_210;
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_210 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a4ff8c(&local_1f0);
  iVar9 = *(uint *)(param_2 + 0x130) + 1;
  lVar10 = (ulonglong)*(uint *)(param_2 + 0x130) * 0x48 + -0x10;
  do {
    iVar9 = iVar9 + -1;
    if (iVar9 < 1) goto LAB_1469a63dc;
    lVar6 = *(longlong *)(param_2 + 0x128);
    if (*(longlong *)(param_2 + 0x128) == 0) {
      lVar6 = param_2 + 8;
    }
    plVar7 = *(longlong **)(lVar6 + lVar10);
    local_218 = local_200;
    local_210 = local_1f8;
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar7 + 0xb0))(plVar7,&local_1f0,&local_218);
    plVar7 = local_1e8;
    if ((longlong *)(param_1 + 0x50) == &local_1f0) {
LAB_1469a6264:
      plVar7 = local_1e8;
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_1e8 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      *(longlong *)(param_1 + 0x50) = local_1f0;
      local_1f0 = 0;
      plVar8 = *(longlong **)(param_1 + 0x58);
      if (local_1e8 == plVar8) goto LAB_1469a6264;
      local_1e8 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x58) = plVar7;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        goto LAB_1469a6264;
      }
    }
    plVar7 = local_210;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_210 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    plVar7 = local_1f8;
    lVar10 = lVar10 + -0x48;
  } while (*(longlong *)(param_1 + 0x50) == 0);
  if (local_1f8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = local_200;
    plVar8 = *(longlong **)(param_1 + 0x48);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
LAB_1469a63a6:
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar9 = *piVar1;
        UNLOCK();
joined_r0x0001469a63d1:
        if (iVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x40) = local_200;
    plVar8 = *(longlong **)(param_1 + 0x48);
    if (local_1f8 == plVar8) {
      LOCK();
      plVar8 = local_1f8 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar9 = *piVar1;
        UNLOCK();
        plVar8 = plVar7;
        goto joined_r0x0001469a63d1;
      }
    }
    else {
      *(longlong **)(param_1 + 0x48) = local_1f8;
      if (plVar8 != (longlong *)0x0) goto LAB_1469a63a6;
    }
  }
LAB_1469a63dc:
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1f8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1f8)(local_1f8);
      LOCK();
      piVar1 = (int *)((longlong)local_1f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f8 + 0x10))(local_1f8);
      }
    }
  }
LAB_1469a5f5a:
  if ((local_48 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a641c FUN_1469a641c body=795 status=ok
// SIG undefined FUN_1469a641c(void)

/* WARNING: Removing unreachable block (ram,0x0001469a66fc) */
/* WARNING: Removing unreachable block (ram,0x0001469a6707) */
/* WARNING: Removing unreachable block (ram,0x0001469a6727) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1469a641c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined1 local_b8 [64];
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plStack_70 = (longlong *)0x0;
  local_68 = 0xbf800000;
  uStack_64 = 0xbf800000;
  uStack_60 = 0xbf800000;
  uStack_5c = 0xbf800000;
  local_58 = 0;
  local_78 = *param_4;
  plVar3 = (longlong *)param_4[1];
  plVar5 = plStack_70;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar5 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      LOCK();
      _DAT_00000008 = _DAT_00000008 + -1;
      UNLOCK();
      plVar5 = plStack_70;
      if (_DAT_00000008 == 0) {
        (*(code *)*_DAT_00000000)(0);
        LOCK();
        _DAT_0000000c = _DAT_0000000c + -1;
        UNLOCK();
        plVar5 = plStack_70;
        if (_DAT_0000000c == 0) {
          (*(code *)_DAT_00000000[2])(0);
          plVar5 = plStack_70;
        }
      }
    }
  }
  plStack_70 = plVar5;
  local_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  uStack_5c = param_5[3];
  local_58 = *param_6;
  local_54 = param_7;
  local_53 = param_9;
  FUN_1469a71c2(param_1,local_b8);
  uVar4 = *param_3;
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_d0 = param_3[1];
    if (local_d0 != 0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
      UNLOCK();
    }
    local_d8 = uVar4;
    FUN_1469a7870(param_1,&local_c8,&local_d8,local_b8);
  }
  else {
    local_e0 = param_3[1];
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    local_e8 = uVar4;
    FUN_1469a7fde(param_1,&local_c8,&local_e8,local_b8);
  }
  cVar2 = *(char *)(param_1 + 0x18);
  local_f8 = local_c8;
  local_f0 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  local_108 = *param_3;
  local_100 = param_3[1];
  if (local_100 != 0) {
    LOCK();
    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
    UNLOCK();
  }
  local_118 = cVar2 == '\0';
  FUN_1428f1dae(param_1,&local_108,&local_f8,param_8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  plVar3 = *(longlong **)(param_1 + 0xe0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  *param_2 = local_c8;
  param_2[1] = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
  }
  FUN_1469a829c(local_b8);
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a6738 FUN_1469a6738 body=358 status=ok
// SIG undefined FUN_1469a6738(void)

undefined8
FUN_1469a6738(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_98;
  undefined7 uStack_97;
  longlong *local_90;
  longlong *plStack_88;
  undefined2 local_80;
  longlong local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  if (0 < *(int *)(param_1 + 0x68)) {
    FUN_1469a5c0c(param_1,&local_98,param_3);
    local_78 = CONCAT71(uStack_97,local_98);
    if (local_90 != (longlong *)0x0) {
      plStack_70 = local_90;
    }
    plVar3 = local_90;
    if (local_78 != 0) goto LAB_1469a6823;
  }
  local_98 = 1;
  local_90 = (longlong *)0x0;
  plStack_88 = (longlong *)0x0;
  local_80 = 0x101;
  FUN_1428f57d4(param_1,&local_98);
  plVar3 = plStack_88;
  *(undefined2 *)(param_1 + 0x18) = local_80;
  if (plStack_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1469a5f2c(param_1,param_3);
  plVar3 = plStack_70;
LAB_1469a6823:
  local_a8 = param_8;
  local_b0 = param_6;
  local_b8 = param_5;
  FUN_1469a68a0(param_1,param_2,&local_78,param_4);
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
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a68a0 FUN_1469a68a0 body=1034 status=ok
// SIG undefined FUN_1469a68a0(void)

undefined8 *
FUN_1469a68a0(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined1 param_7)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined1 local_80 [8];
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = *(undefined1 *)(*param_4 + 8);
  local_68 = *param_5;
  local_60 = param_5[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_b8 = 0xbf800000;
  FUN_1469a6cac(param_1,&local_58,&local_68,0xbf800000);
  plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
  local_78 = *param_4;
  local_70 = param_4[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  bVar3 = true;
  FUN_1469a53be(plVar4,&local_78,&local_58,1);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149efcec0;
  plVar5[2] = (longlong)plVar4;
  if ((plVar4 == (longlong *)0x0) ||
     (((plVar4[1] != 0 && (plVar4[2] != 0)) && (0 < *(int *)(plVar4[2] + 8))))) {
    if (plVar5 == (longlong *)0x0) goto LAB_1469a69a6;
LAB_1469a699f:
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    bVar3 = false;
  }
  else {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar4[1] = (longlong)plVar4;
      if ((longlong *)plVar4[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar4[2];
        if (plVar7 != (longlong *)0x0) goto LAB_1469a6a22;
        plVar4[2] = (longlong)plVar5;
      }
LAB_1469a6c60:
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
      goto LAB_1469a699f;
    }
    plVar4[1] = (longlong)plVar4;
    plVar7 = (longlong *)plVar4[2];
    bVar3 = true;
    if (plVar7 != (longlong *)0x0) {
LAB_1469a6a22:
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      plVar4[2] = (longlong)plVar5;
      bVar3 = true;
      if (plVar5 != (longlong *)0x0) goto LAB_1469a6c60;
    }
  }
LAB_1469a69a6:
  *(longlong **)(param_1 + 0xd8) = plVar4;
  plVar7 = *(longlong **)(param_1 + 0xe0);
  if (plVar5 == plVar7) {
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
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar5;
joined_r0x0001469a6a66:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0xe0) = plVar5;
    if (plVar7 != (longlong *)0x0) {
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
        goto joined_r0x0001469a6a66;
      }
    }
  }
  plVar7 = local_50;
  if (local_50 == (longlong *)0x0) {
    *param_6 = local_58;
    plVar8 = (longlong *)param_6[1];
    if (plVar8 == (longlong *)0x0) goto LAB_1469a6aa3;
    param_6[1] = 0;
LAB_1469a6c12:
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1469a6aa3;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    *param_6 = local_58;
    plVar8 = (longlong *)param_6[1];
    if (local_50 != plVar8) {
      param_6[1] = local_50;
      if (plVar8 == (longlong *)0x0) goto LAB_1469a6aa3;
      goto LAB_1469a6c12;
    }
    LOCK();
    plVar8 = local_50 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1469a6aa3;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar7;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_1469a6aa3:
  uVar6 = (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_1469a6e28(uVar6,local_80,param_1);
  if (!bVar3) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_a0 = *param_3;
  local_98 = param_3[1];
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  local_b8 = local_b8 & 0xffffff00;
  local_90 = plVar4;
  local_88 = plVar5;
  FUN_1428f1dae(param_1,&local_a0,&local_90,param_7);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  plVar7 = *(longlong **)(param_1 + 0xe0);
  if (plVar7 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  *param_2 = plVar4;
  param_2[1] = plVar5;
  if (!bVar3) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a6cac FUN_1469a6cac body=379 status=ok
// SIG undefined FUN_1469a6cac(void)

undefined8 *
FUN_1469a6cac(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_288 [39];
  undefined1 local_261;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 *local_248;
  undefined1 *local_240;
  undefined8 local_238;
  longlong *local_230;
  undefined1 local_228 [424];
  undefined1 local_80 [48];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_1469a8cea(local_228);
  FUN_1469a8d4e(local_228);
  FUN_1469a8dfc(local_228,param_1);
  local_4c = param_5;
  local_48 = param_6;
  local_240 = local_80;
  local_248 = local_228;
  local_50 = param_4;
  uVar4 = FUN_1469a8eb4(&local_248,param_3);
  FUN_1469b34e4(local_260,&local_261);
  FUN_1469a8f08(local_260,&local_238,uVar4);
  *param_2 = local_238;
  param_2[1] = local_230;
  if (local_230 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_230 + 1) = (int)local_230[1] + 1;
    UNLOCK();
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_230 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar1 = (int *)((longlong)local_230 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_230 + 0x10))(local_230);
        }
      }
    }
  }
  if (local_258 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_258 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_258)(local_258);
      LOCK();
      piVar1 = (int *)((longlong)local_258 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_258 + 0x10))(local_258);
      }
    }
  }
  FUN_1469a8f7c(local_228);
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_40 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a6e28 FUN_1469a6e28 body=189 status=ok
// SIG undefined FUN_1469a6e28(void)

undefined8 FUN_1469a6e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149efe120;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149efcee0;
  puVar1[3] = param_3;
  puVar1[4] = FUN_1469a6ee6;
  FUN_1469b1686(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a6ee6 FUN_1469a6ee6 body=730 status=ok
// SIG undefined FUN_1469a6ee6(void)

void FUN_1469a6ee6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  iVar5 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar5 == 0) {
LAB_1469a6f5c:
    plVar1 = (longlong *)param_2[1];
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar6 = 0;
  iVar8 = 0;
  lVar9 = 0;
  while ((lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar6), lVar7 == 0 ||
         (lVar7 != *param_2))) {
    lVar9 = lVar9 + 0x100000000;
    iVar8 = iVar8 + -1;
    lVar6 = lVar6 + 0x10;
    if ((longlong)iVar5 << 4 == lVar6) goto LAB_1469a6f5c;
  }
  if (iVar8 == 1) goto LAB_1469a6f5c;
  if (-iVar8 < iVar5 + -1) {
    lVar7 = (longlong)(iVar5 + -1);
    lVar6 = lVar7 << 4;
    do {
      (**(code **)(**(longlong **)(*plVar1 + lVar6) + 0x38))();
      lVar7 = lVar7 + -1;
      lVar6 = lVar6 + -0x10;
    } while (lVar9 >> 0x20 < lVar7);
  }
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    lVar6 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0xf0) + 8 + lVar6) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xf0) + lVar6) != 0)) {
        FUN_1469b3440(param_1 + 0xf0,param_2);
        break;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xf8) * 0x10 != lVar6);
  }
  iVar5 = *(int *)(param_1 + 0x68);
  if (-iVar8 < iVar5) {
    lVar7 = (longlong)iVar5;
    local_1c0 = param_1 + 0x70;
    lVar6 = lVar7 << 4;
    do {
      iVar5 = iVar5 + -1;
      lVar6 = lVar6 + -0x10;
      (**(code **)(**(longlong **)(*plVar1 + lVar6) + 0x20))
                (*(longlong **)(*plVar1 + lVar6),&local_1b8);
      plVar2 = local_1b0;
      if (local_1b0 == (longlong *)0x0) {
        local_1a8 = local_1b8;
        local_1a0 = (longlong *)0x0;
        FUN_1469b2eda(local_1c0,&local_1a8);
      }
      else {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
        local_1a8 = local_1b8;
        local_1a0 = local_1b0;
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
        FUN_1469b2eda(local_1c0,&local_1a8);
        LOCK();
        plVar4 = plVar2 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar2 = local_1b0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_1b0 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      lVar7 = lVar7 + -1;
      FUN_1469b30d8(plVar1,iVar5);
      FUN_1469b314e(plVar1);
    } while (lVar9 >> 0x20 < lVar7);
    iVar5 = *(int *)(param_1 + 0x68);
  }
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0xc0) != -1) {
      lVar6 = FUN_14171dbb4();
      if (*(int *)(param_1 + 0xc0) != -1) {
        *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + -1;
        *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
      }
    }
    local_1a8 = CONCAT71(local_1a8._1_7_,DAT_14c96b238);
    local_80 = 0;
    local_78 = 0x400000000;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_1469a5f2c(param_1,&local_1a8);
    FUN_1447fa21a(&local_1a8);
  }
  goto LAB_1469a6f5c;
}



// FUNCTION 1469a71c2 FUN_1469a71c2 body=1708 status=ok
// SIG undefined FUN_1469a71c2(void)

undefined8 * FUN_1469a71c2(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_2c8 [32];
  float *local_2a8;
  undefined8 *local_2a0;
  uint local_298;
  uint local_284;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  float local_268;
  float fStack_264;
  undefined8 local_258;
  longlong *local_250;
  float local_248;
  float fStack_244;
  undefined4 local_240;
  float fStack_23c;
  undefined8 local_a0;
  longlong *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((longlong)param_2 + 0x3e) = *(undefined1 *)((longlong)param_3 + 0x25);
  cVar6 = *(char *)((longlong)param_3 + 0x24);
  *(char *)((longlong)param_2 + 0x3d) = cVar6;
  if (cVar6 == '\x01') {
    uVar19 = *param_3;
    lVar7 = param_3[1];
    if (lVar7 == 0) {
      param_2[2] = uVar19;
      param_2[3] = 0;
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_2[3];
      param_2[2] = uVar19;
      param_2[3] = lVar7;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar8 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
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
  plVar8 = DAT_14c98e618;
  if (*(char *)((longlong)DAT_14c98e618 + 0x4ea) == '\x01') {
    bVar12 = *(float *)((longlong)DAT_14c98e618 + 0x3f4) <= 1.0 / (float)*DAT_14c98e558;
  }
  else {
    bVar12 = false;
  }
  *(bool *)((longlong)param_2 + 0x3c) = bVar12;
  fVar18 = (float)(**(code **)(*plVar8 + 0x58))();
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x510);
  plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x518);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  uVar19 = (**(code **)(*plVar8 + 0xf8))();
  fVar20 = (float)uVar19;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar16 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      uVar19 = (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar19 = (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_1461182c0(uVar19,&local_248,param_3 + 2);
    fVar21 = fStack_23c - fStack_244;
  }
  else {
    FUN_140c2d24e(*(undefined8 *)(param_1 + 0x20),&local_248);
    fVar21 = fStack_244;
  }
  iVar13 = *(int *)(param_3 + 4);
  fVar4 = *(float *)(param_3 + 3);
  fVar5 = *(float *)(param_3 + 2);
  FUN_140763df2(&local_248);
  plVar16 = local_98;
  local_a0 = *param_3;
  plVar8 = (longlong *)param_3[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar11 = plVar8;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_98 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      puVar9 = (undefined8 *)*local_98;
      local_98 = plVar8;
      (*(code *)*puVar9)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar11 = local_98;
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        plVar11 = local_98;
      }
    }
  }
  local_98 = plVar11;
  local_2a8 = (float *)&local_284;
  FUN_14076492c(&local_270,"SPopup",".\\Runtime/Slate/Private/Framework/Application/MenuStack.cpp",
                0x183);
  FUN_140763d70(&local_270,&local_258,&local_248);
  uVar19 = local_258;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_250 + 1) = (int)local_250[1] + 1;
    UNLOCK();
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_250 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar1 = (int *)((longlong)local_250 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_250 + 0x10))(local_250);
        }
      }
    }
  }
  fVar18 = fVar18 * fVar20;
  plVar16 = (longlong *)CONCAT44(fStack_264,local_268);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar16 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar8 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  FUN_1414925c4(&local_248);
  fVar20 = -1.0;
  if (iVar13 == 1) {
    fVar20 = fVar4 - fVar5;
  }
  local_280 = uVar19;
  local_278 = local_250;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_250 + 1) = (int)local_250[1] + 1;
    UNLOCK();
  }
  local_2a8 = (float *)CONCAT44(local_2a8._4_4_,(fVar21 * 0.8) / fVar18);
  local_2a0 = (undefined8 *)CONCAT71(local_2a0._1_7_,1);
  FUN_1469a6cac(param_1,&local_248,&local_280,fVar20);
  plVar8 = (longlong *)CONCAT44(fStack_23c,local_240);
  if (plVar8 == (longlong *)0x0) {
    *param_2 = CONCAT44(fStack_244,local_248);
    plVar16 = (longlong *)param_2[1];
    if (plVar16 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_1469a7512:
      LOCK();
      plVar8 = plVar16 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar13 = *piVar1;
        UNLOCK();
joined_r0x0001469a758a:
        if (iVar13 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *param_2 = CONCAT44(fStack_244,local_248);
    plVar16 = (longlong *)param_2[1];
    if (plVar8 == plVar16) {
      LOCK();
      plVar16 = plVar8 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar13 = *piVar1;
        UNLOCK();
        plVar16 = plVar8;
        goto joined_r0x0001469a758a;
      }
    }
    else {
      param_2[1] = plVar8;
      if (plVar16 != (longlong *)0x0) goto LAB_1469a7512;
    }
  }
  plVar8 = (longlong *)CONCAT44(fStack_23c,local_240);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar8 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  pfVar3 = (float *)(param_3 + 2);
  uVar19 = *param_2;
  FUN_1405d299c(uVar19);
  FUN_144b013c4(uVar19,&local_248);
  *(float *)((longlong)param_2 + 0x34) = fVar18 * local_248;
  *(float *)(param_2 + 7) = fStack_244 * fVar18;
  iVar13 = *(int *)(param_3 + 4);
  local_284 = (uint)(iVar13 != 3);
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_270 = DAT_14c84635c;
    local_258 = *(undefined8 *)((longlong)param_2 + 0x34);
    local_2a0 = &local_270;
    local_2a8 = (float *)((ulonglong)local_2a8 & 0xffffffffffffff00);
    pfVar14 = &local_248;
    local_298 = local_284;
    (**(code **)(*DAT_14c98e618 + 0x1d0))(DAT_14c98e618,pfVar14,pfVar3);
  }
  else {
    fVar20 = *(float *)((longlong)param_3 + (ulonglong)(iVar13 != 3) * 8 + 0x14);
    pfVar14 = (float *)(param_3 + 3);
    if (iVar13 != 3) {
      pfVar14 = pfVar3;
    }
    fVar21 = *pfVar14;
    FUN_140c2d2b0(*(undefined8 *)(param_1 + 0x20),&local_248);
    fStack_264 = fStack_244 * fVar18 + fVar20;
    local_268 = fVar18 * local_248 + fVar21;
    local_270 = CONCAT44(fVar20,fVar21);
    pfVar14 = (float *)&local_258;
    local_2a8 = &local_248;
    FUN_140398c85(pfVar14,pfVar3,&local_270,&local_284);
  }
  uVar19 = *(undefined8 *)pfVar14;
  param_2[5] = uVar19;
  param_2[4] = uVar19;
  if (*(char *)((longlong)param_2 + 0x3c) != '\x01') goto LAB_1469a7702;
  fVar18 = (float)uVar19;
  fVar20 = (float)((ulonglong)uVar19 >> 0x20);
  if (4 < *(int *)(param_3 + 4) - 1U) goto LAB_1469a7702;
  iVar15 = (uint)(!NAN(fVar18) && !NAN(fVar18)) * 2 + -1;
  iVar13 = (uint)(!NAN(fVar20) && !NAN(fVar20)) * 2 + -1;
  switch(*(int *)(param_3 + 4)) {
  default:
    fVar18 = (float)iVar13 * 30.0;
    break;
  case 2:
    fVar18 = (float)iVar13 * 60.0;
    break;
  case 3:
    *(float *)(param_2 + 4) = (float)iVar15 * 60.0 + fVar18;
    goto LAB_1469a7702;
  case 5:
    *(float *)(param_2 + 4) = (float)iVar15 * 30.0 + fVar18;
    fVar20 = (float)iVar13 * 50.0 + fVar20;
    goto LAB_1469a76fd;
  }
  fVar20 = fVar18 + fVar20;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
LAB_1469a76fd:
  *(float *)((longlong)param_2 + 0x24) = fVar20;
LAB_1469a7702:
  if ((*(char *)((longlong)param_3 + 0x24) == '\x01') &&
     (lVar7 = DAT_14c98e618[99], (longlong)(int)lVar7 != 0)) {
    lVar10 = DAT_14c98e618[0x62];
    lVar17 = 0;
    do {
      if ((*(longlong *)(lVar10 + lVar17) != 0) &&
         (*(longlong *)(*(longlong *)(lVar10 + lVar17) + 0x20) != 0)) {
        FUN_14596c952();
      }
      lVar17 = lVar17 + 0x10;
    } while ((longlong)(int)lVar7 * 0x10 != lVar17);
  }
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_250 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar1 = (int *)((longlong)local_250 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_250 + 0x10))(local_250);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a7870 FUN_1469a7870 body=1901 status=ok
// SIG undefined FUN_1469a7870(void)

longlong * FUN_1469a7870(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined **ppuVar11;
  longlong *plVar12;
  undefined8 uVar13;
  char cVar14;
  undefined4 uVar15;
  undefined1 auStack_3c8 [32];
  undefined1 *local_3a8;
  undefined4 local_39c;
  undefined8 *local_398;
  longlong *local_390;
  undefined8 local_388;
  longlong *local_380;
  undefined8 local_378;
  longlong *local_370;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined8 local_358;
  longlong *local_350;
  undefined8 local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  undefined1 local_321;
  undefined8 local_320;
  longlong *local_318;
  undefined8 local_308;
  longlong *local_300;
  undefined8 local_2f8;
  longlong *plStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  byte local_290;
  undefined4 local_150;
  undefined1 local_117;
  undefined8 local_114;
  undefined8 local_10c;
  undefined1 local_104;
  uint local_100;
  undefined4 local_fc;
  undefined2 local_f6;
  byte local_f3;
  uint local_f0;
  undefined8 local_98;
  longlong *local_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  bVar4 = *(byte *)((longlong)param_4 + 0x3c);
  uVar15 = 0;
  if (bVar4 == 0) {
    uVar15 = 0x3f800000;
  }
  FUN_14627df0c(&local_2f8);
  plVar12 = local_90;
  local_150 = 1;
  local_f6 = 0x101;
  local_114 = param_4[4];
  local_117 = 0;
  local_10c = *(undefined8 *)((longlong)param_4 + 0x34);
  local_104 = 0;
  local_100 = (uint)bVar4;
  local_f3 = *(byte *)((longlong)param_4 + 0x3d);
  local_f0 = (uint)local_f3;
  local_98 = *param_4;
  plVar10 = (longlong *)param_4[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_fc = uVar15;
  plVar7 = plVar10;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar6 = (undefined8 *)*local_90;
      local_90 = plVar10;
      (*(code *)*puVar6)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = local_90;
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        plVar7 = local_90;
      }
    }
  }
  local_90 = plVar7;
  local_3a8 = &local_321;
  FUN_1461c0e96(&local_320,"SWindow",".\\Runtime/Slate/Private/Framework/Application/MenuStack.cpp",
                0x1de);
  FUN_1462139ea(&local_320,&local_308,&local_2f8);
  if (local_318 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_318 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_318)(local_318);
      LOCK();
      piVar2 = (int *)((longlong)local_318 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_318 + 0x10))(local_318);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  FUN_14627e134(&local_2f8);
  plVar10 = local_300;
  if (local_300 == (longlong *)0x0) {
    local_398 = (undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = local_308;
    plVar12 = *(longlong **)(param_1 + 0xd0);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
LAB_1469a7cfc:
      local_398 = (undefined8 *)(param_1 + 200);
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x0001469a7bf6:
        if (iVar3 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_300 + 1) = (int)local_300[1] + 1;
    UNLOCK();
    local_398 = (undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = local_308;
    plVar12 = *(longlong **)(param_1 + 0xd0);
    if (local_300 == plVar12) {
      LOCK();
      plVar12 = local_300 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_300)(local_300);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar12 = plVar10;
        goto joined_r0x0001469a7bf6;
      }
    }
    else {
      *(longlong **)(param_1 + 0xd0) = local_300;
      if (plVar12 != (longlong *)0x0) goto LAB_1469a7cfc;
    }
  }
  if ((*(char *)((longlong)param_4 + 0x3d) == '\x01') && (lVar9 = param_4[2], lVar9 != 0)) {
    local_330 = param_4[3];
    if (local_330 != 0) {
      LOCK();
      *(int *)(local_330 + 8) = *(int *)(local_330 + 8) + 1;
      UNLOCK();
    }
    local_338 = lVar9;
    FUN_1469a5b86(local_308,&local_338);
  }
  lVar9 = FUN_14001cc68(0x58,0x10);
  uVar5 = *(undefined1 *)((longlong)param_4 + 0x3e);
  local_348 = *param_4;
  local_340 = param_4[1];
  if (local_340 != 0) {
    LOCK();
    *(int *)(local_340 + 8) = *(int *)(local_340 + 8) + 1;
    UNLOCK();
  }
  local_358 = local_308;
  local_350 = local_300;
  if (local_300 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_300 + 1) = (int)local_300[1] + 1;
    UNLOCK();
  }
  FUN_1469a4f78(lVar9,&local_358,&local_348,uVar5);
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  ppuVar11 = &PTR_FUN_149efcf50;
  *plVar10 = (longlong)&PTR_FUN_149efcf50;
  plVar10[2] = lVar9;
  if ((lVar9 == 0) ||
     (((*(longlong *)(lVar9 + 8) != 0 &&
       (ppuVar11 = *(undefined ***)(lVar9 + 0x10), ppuVar11 != (undefined **)0x0)) &&
      (0 < *(int *)(ppuVar11 + 1))))) {
    local_39c = (undefined4)CONCAT71((int7)((ulonglong)ppuVar11 >> 8),1);
    if (plVar10 == (longlong *)0x0) goto LAB_1469a7b5e;
LAB_1469a7b57:
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    local_39c = 0;
  }
  else {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      *(longlong *)(lVar9 + 8) = lVar9;
      if (*(longlong **)(lVar9 + 0x10) != plVar10) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar12 = *(longlong **)(lVar9 + 0x10);
        if (plVar12 != (longlong *)0x0) goto LAB_1469a7c45;
        *(longlong **)(lVar9 + 0x10) = plVar10;
      }
LAB_1469a7f8f:
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      goto LAB_1469a7b57;
    }
    *(longlong *)(lVar9 + 8) = lVar9;
    plVar12 = *(longlong **)(lVar9 + 0x10);
    ppuVar11 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar11 >> 8),1);
    local_39c = SUB84(ppuVar11,0);
    if (plVar12 != (longlong *)0x0) {
LAB_1469a7c45:
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        ppuVar11 = (undefined **)(**(code **)(*plVar12 + 0x10))();
      }
      *(longlong **)(lVar9 + 0x10) = plVar10;
      local_39c = (undefined4)CONCAT71((int7)((ulonglong)ppuVar11 >> 8),1);
      if (plVar10 != (longlong *)0x0) goto LAB_1469a7f8f;
    }
  }
LAB_1469a7b5e:
  *(longlong *)(param_1 + 0xd8) = lVar9;
  plVar12 = *(longlong **)(param_1 + 0xe0);
  if (plVar10 == plVar12) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar12 = plVar10;
joined_r0x0001469a7c88:
        if (iVar3 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0xe0) = plVar10;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar12 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001469a7c88;
      }
    }
  }
  plVar12 = (longlong *)*param_3;
  local_390 = param_3;
  if (plVar12 == (longlong *)0x0) {
    local_378 = *(undefined8 *)(param_1 + 0x20);
    local_370 = *(longlong **)(param_1 + 0x28);
    if (local_370 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_370 + 1) = (int)local_370[1] + 1;
      UNLOCK();
LAB_1469a7d42:
      uVar13 = DAT_14c98e618;
      LOCK();
      *(int *)(local_370 + 1) = (int)local_370[1] + 1;
      UNLOCK();
      bVar8 = false;
      goto LAB_1469a7d53;
    }
  }
  else {
    (**(code **)(*plVar12 + 0x10))(plVar12,&local_2f8);
    local_378 = local_2f8;
    local_370 = plStack_2f0;
    if (plStack_2f0 != (longlong *)0x0) goto LAB_1469a7d42;
  }
  local_370 = (longlong *)0x0;
  bVar8 = true;
  uVar13 = DAT_14c98e618;
LAB_1469a7d53:
  plVar12 = local_370;
  local_388 = local_308;
  local_380 = local_300;
  if (local_300 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_300 + 1) = (int)local_300[1] + 1;
    UNLOCK();
  }
  local_3a8 = (undefined1 *)CONCAT71(local_3a8._1_7_,1);
  FUN_1469a8322(uVar13,local_368,&local_388,&local_378);
  if (local_360 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_360 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_360)(local_360);
      LOCK();
      piVar2 = (int *)((longlong)local_360 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_360 + 0x10))(local_360);
      }
    }
  }
  if (*(char *)((longlong)param_4 + 0x3c) == '\x01') {
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2f8 = 0;
    plStack_2f0 = (longlong *)0x0;
    local_298 = 0;
    local_290 = (local_290 & 0xf8) + 1;
    local_3a8 = (undefined1 *)CONCAT71(local_3a8._1_7_,5);
    FUN_14692f186(&local_2f8,&local_320,0,0x3e19999a);
    local_320 = param_4[5];
    FUN_146980c96(local_308,&local_2f8,0x3f800000,&local_320);
    FUN_1402bc42a(&local_2f8);
  }
  *local_398 = 0;
  plVar7 = *(longlong **)(param_1 + 0xd0);
  if (plVar7 != (longlong *)0x0) {
    *(longlong *)(param_1 + 0xd0) = 0;
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
  }
  *param_2 = lVar9;
  param_2[1] = (longlong)plVar10;
  cVar14 = (char)local_39c;
  if (cVar14 == '\0') {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (!bVar8) {
    LOCK();
    plVar7 = plVar12 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = local_390;
  if (cVar14 == '\0') {
    LOCK();
    plVar7 = plVar10 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_300 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar2 = (int *)((longlong)local_300 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_300 + 0x10))(local_300);
      }
    }
  }
  plVar10 = (longlong *)plVar12[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a7fde FUN_1469a7fde body=700 status=ok
// SIG undefined FUN_1469a7fde(void)

undefined8 *
FUN_1469a7fde(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar8 = (longlong *)FUN_14001cc68(0x48,0x10);
  uVar4 = *(undefined1 *)((longlong)param_4 + 0x3e);
  local_58 = *param_4;
  local_50 = param_4[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_1469a523c(plVar8,&local_58,uVar4);
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_149efcf70;
  plVar9[2] = (longlong)plVar8;
  if ((plVar8 == (longlong *)0x0) ||
     (((plVar8[1] != 0 && (plVar8[2] != 0)) && (0 < *(int *)(plVar8[2] + 8))))) {
    bVar5 = true;
    if (plVar9 == (longlong *)0x0) goto LAB_1469a808b;
LAB_1469a8084:
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    bVar5 = false;
  }
  else {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      plVar8[1] = (longlong)plVar8;
      if ((longlong *)plVar8[2] != plVar9) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar11 = (longlong *)plVar8[2];
        if (plVar11 != (longlong *)0x0) goto LAB_1469a80fe;
        plVar8[2] = (longlong)plVar9;
      }
LAB_1469a8253:
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      goto LAB_1469a8084;
    }
    plVar8[1] = (longlong)plVar8;
    plVar11 = (longlong *)plVar8[2];
    bVar5 = true;
    if (plVar11 != (longlong *)0x0) {
LAB_1469a80fe:
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      plVar8[2] = (longlong)plVar9;
      bVar5 = true;
      if (plVar9 != (longlong *)0x0) goto LAB_1469a8253;
    }
  }
LAB_1469a808b:
  *(longlong **)(param_1 + 0xd8) = plVar8;
  plVar11 = *(longlong **)(param_1 + 0xe0);
  if (plVar9 == plVar11) {
    if (plVar9 == (longlong *)0x0) goto LAB_1469a814d;
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_1469a814d;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar11 = plVar9;
  }
  else {
    *(longlong **)(param_1 + 0xe0) = plVar9;
    if (plVar11 == (longlong *)0x0) goto LAB_1469a814d;
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1469a814d;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
LAB_1469a814d:
  uVar10 = (**(code **)(*plVar8 + 0x28))(plVar8);
  FUN_1469a6e28(uVar10,local_60,param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  if (!bVar5) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_70 = plVar8;
  local_68 = plVar9;
  FUN_1469a860c(uVar10,&local_70,param_4 + 5);
  lVar6 = DAT_14c98e618;
  if ((*(char *)((longlong)param_4 + 0x3d) == '\x01') && (param_4[2] != 0)) {
    uVar7 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x720) + 8))();
    FUN_1410a3d58(lVar6,uVar7,param_4 + 2,2);
  }
  *param_2 = plVar8;
  param_2[1] = plVar9;
  if (!bVar5) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  plVar8 = *(longlong **)(param_3 + 8);
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a829c FUN_1469a829c body=100 status=ok
// SIG undefined FUN_1469a829c(void)

void FUN_1469a829c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001469a82f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469a8300 FUN_1469a8300 body=34 status=ok
// SIG undefined FUN_1469a8300(void)

undefined8 FUN_1469a8300(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)DAT_14c98e558 >> 8),
                  *(float *)(param_1 + 0x3f4) <= 1.0 / (float)*DAT_14c98e558);
}



// FUNCTION 1469a8322 FUN_1469a8322 body=745 status=ok
// SIG undefined FUN_1469a8322(void)

longlong *
FUN_1469a8322(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,char param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146981fe0(*param_4,param_3);
  plVar2 = *(longlong **)(*param_4 + 0x510);
  plVar3 = *(longlong **)(*param_4 + 0x518);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  lVar6 = (**(code **)(*plVar2 + 0xc0))();
  if (lVar6 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar4 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_1469a8498;
      bVar4 = DAT_14c8442b8 & 1;
    }
    if (bVar4 != 0) goto LAB_1469a8498;
    cVar5 = *(char *)(param_1 + 0x1a2);
    unaff_RBP = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar5);
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
    if (cVar5 == '\0') goto LAB_1469a8401;
  }
  else {
LAB_1469a8498:
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
  local_58 = *param_3;
  local_50 = param_3[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_145da738e(param_1,local_48,&local_58,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  if (param_5 != '\0') {
    thunk_FUN_1616686ea(*param_3);
    cVar5 = (**(code **)(*(longlong *)*param_3 + 400))();
    if ((cVar5 != '\0') && (lVar6 = *param_3, *(char *)(lVar6 + 0x368) < '\0')) {
      plVar2 = *(longlong **)(lVar6 + 0x510);
      plVar3 = *(longlong **)(lVar6 + 0x518);
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x90))();
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        (**(code **)(*plVar2 + 0x90))();
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
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
LAB_1469a8401:
  *param_2 = *param_3;
  lVar6 = param_3[1];
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    plVar2 = (longlong *)param_3[1];
    if (plVar2 != (longlong *)0x0) {
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
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar2 = (longlong *)param_4[1];
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a860c FUN_1469a860c body=761 status=ok
// SIG undefined FUN_1469a860c(void)

void FUN_1469a860c(undefined8 param_1,undefined8 *param_2,float *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong *plStack_180;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong *plStack_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float local_134;
  float local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_170);
  FUN_146980726(local_170,&local_138);
  fVar7 = local_134;
  fVar6 = local_138;
  FUN_146980898(local_170,&local_138);
  fVar9 = 1.0 / local_138;
  fVar11 = local_130 * fVar9;
  fVar10 = fVar9 * local_134;
  FUN_146980898(local_170,&local_138);
  fVar12 = 1.0 / local_138;
  fVar3 = param_3[1];
  fVar4 = *param_3;
  FUN_140763f46(param_1,&local_138,0xffffffff);
  local_f8 = 1;
  local_f4 = 1;
  local_f0 = 1;
  local_ec = 1;
  local_160 = (code *)CONCAT44((fVar3 * fVar12 - local_130 * fVar12) - (fVar7 * fVar9 - fVar11),
                               (fVar4 * fVar12 - fVar12 * local_134) - (fVar6 * fVar9 - fVar10));
  plStack_158 = (longlong *)0x0;
  local_150 = 1;
  local_148 = 0;
  uStack_140 = 0;
  local_110 = 1;
  local_120 = local_160;
  local_118 = 0;
  FUN_144a450dc(local_108,&local_148);
  FUN_1449db362(&local_148);
  (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&local_188);
  plStack_158 = plStack_180;
  local_188 = 0;
  plStack_180 = (longlong *)0x0;
  FUN_140a4fd40(&local_138,&local_160);
  plVar5 = plStack_158;
  if (plStack_158 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_158 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_158)(plStack_158);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_1407640b6(&local_138);
  uVar8 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  local_160 = FUN_1469b15d4;
  plStack_158 = (longlong *)((ulonglong)plStack_158 & 0xffffffff00000000);
  FUN_1469b176e(&local_138,param_1);
  FUN_1469b1686(uVar8,&local_160,&local_138);
  FUN_1449db362(&local_138);
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_168 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar2 = (int *)((longlong)local_168 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_168 + 0x10))(local_168);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a8906 FUN_1469a8906 body=127 status=ok
// SIG undefined FUN_1469a8906(void)

int FUN_1469a8906(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1469b2782(param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar3 + 0x10),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_3) << 4);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar3) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return param_3;
}



// FUNCTION 1469a8986 FUN_1469a8986 body=126 status=ok
// SIG undefined FUN_1469a8986(void)

void FUN_1469a8986(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 0x68);
  if (uVar2 != 0) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar4) == *param_2) {
        if (*(int *)(param_1 + 0x68) <= -iVar3 || iVar3 == 1) {
          return;
        }
        do {
          iVar1 = (int)uVar2;
          uVar2 = (ulonglong)(iVar1 - 1U);
          if ((0 < iVar1) && (iVar1 <= *(int *)(param_1 + 0x68))) {
            (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x60) + uVar2 * 0x10) + 0x38))();
          }
        } while (-iVar3 < (int)(iVar1 - 1U));
        return;
      }
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + 0x10;
    } while (uVar2 << 4 != lVar4);
  }
  return;
}


