// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143a5bb80 FUN_143a5bb80 body=1083 status=ok
// SIG undefined FUN_143a5bb80(void)

void FUN_143a5bb80(longlong param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  longlong lVar8;
  float fVar9;
  byte bVar10;
  byte *pbVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  ulonglong local_80;
  int local_74;
  longlong local_70;
  int *local_68;
  int local_60;
  undefined1 local_58 [8];
  int *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_1;
  FUN_14818b976(local_58);
  if (*param_2 == 1) {
    iVar16 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar16);
    local_80 = (ulonglong)bVar10;
    *(int *)(param_2 + 0x30) = iVar16 + 1;
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar16 * 8);
    local_74 = *(int *)(param_2 + 0x44) * (uint)bVar10;
    bVar10 = 1;
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar20 = uVar3 & 0x7fff;
    lVar14 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar3 < 0) {
      lVar13 = (ulonglong)(uVar20 * *(int *)(lVar14 + 0x80)) + *(longlong *)(lVar14 + 0x70);
    }
    else {
      iVar16 = **(int **)(lVar14 + 0x20);
      lVar13 = 0;
      if (iVar16 <= (int)uVar20) {
        do {
          uVar20 = uVar20 - iVar16;
          iVar16 = (*(int **)(lVar14 + 0x20))[lVar13 + 1];
          lVar13 = lVar13 + 1;
        } while (iVar16 <= (int)uVar20);
      }
      lVar13 = (longlong)(int)uVar20 + *(longlong *)(*(longlong *)(lVar14 + 0x18) + lVar13 * 8);
    }
    local_80._0_4_ = (uint)(uVar3 >> 0xf);
    local_74 = *(int *)(lVar14 + 0x4c) * (uint)local_80;
    bVar10 = *param_2;
    local_80 = (ulonglong)(uVar3 >> 0xf);
  }
  if ((bVar10 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar20 = uVar3 & 0x7fff;
    lVar15 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar3 < 0) {
      lVar14 = (ulonglong)(uVar20 * *(int *)(lVar15 + 0x80)) + *(longlong *)(lVar15 + 0x70);
    }
    else {
      iVar16 = **(int **)(lVar15 + 0x20);
      lVar14 = 0;
      if (iVar16 <= (int)uVar20) {
        do {
          uVar20 = uVar20 - iVar16;
          iVar16 = (*(int **)(lVar15 + 0x20))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (iVar16 <= (int)uVar20);
      }
      lVar14 = (longlong)(int)uVar20 + *(longlong *)(*(longlong *)(lVar15 + 0x18) + lVar14 * 8);
    }
    local_88._0_4_ = (uint)(uVar3 >> 0xf);
    iVar16 = *(int *)(lVar15 + 0x4c) * (uint)local_88;
    bVar10 = *param_2;
    local_88 = (ulonglong)(uVar3 >> 0xf);
  }
  else {
    iVar16 = *(int *)(param_2 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar16);
    local_88 = (ulonglong)bVar2;
    *(int *)(param_2 + 0x30) = iVar16 + 1;
    lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar16 * 8);
    iVar16 = *(int *)(param_2 + 0x44) * (uint)bVar2;
  }
  if ((bVar10 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar20 = uVar3 & 0x7fff;
    lVar8 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar3 < 0) {
      lVar15 = (ulonglong)(uVar20 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70);
    }
    else {
      iVar19 = **(int **)(lVar8 + 0x20);
      lVar15 = 0;
      if (iVar19 <= (int)uVar20) {
        do {
          uVar20 = uVar20 - iVar19;
          iVar19 = (*(int **)(lVar8 + 0x20))[lVar15 + 1];
          lVar15 = lVar15 + 1;
        } while (iVar19 <= (int)uVar20);
      }
      lVar15 = (longlong)(int)uVar20 + *(longlong *)(*(longlong *)(lVar8 + 0x18) + lVar15 * 8);
    }
    uVar20 = (uint)(uVar3 >> 0xf);
    pbVar11 = (byte *)(lVar8 + 0x4c);
  }
  else {
    iVar19 = *(int *)(param_2 + 0x30);
    uVar20 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar19);
    *(int *)(param_2 + 0x30) = iVar19 + 1;
    lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar19 * 8);
    pbVar11 = param_2 + 0x44;
  }
  iVar19 = *(int *)pbVar11;
  FUN_140126e42(&local_68,param_2);
  pbVar11 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar11 = param_2 + 0x3c;
  }
  iVar12 = *(int *)pbVar11;
  if (0 < iVar12) {
    piVar21 = (int *)(lVar13 + (longlong)local_74 * 4);
    piVar18 = (int *)(lVar14 + (longlong)iVar16 * 4);
    piVar17 = (int *)(lVar15 + (longlong)(int)(iVar19 * uVar20) * 4);
    local_88 = (ulonglong)(uint)((int)local_88 << 2);
    local_80 = (ulonglong)(uint)((int)local_80 << 2);
    iVar16 = 0;
    lVar13 = local_70;
    do {
      if (local_50 == (int *)0x0) {
        *local_68 = 0;
        local_68 = local_68 + local_60;
      }
      else {
        iVar19 = *piVar21;
        iVar4 = *piVar18;
        iVar5 = *piVar17;
        piVar1 = local_68 + local_60;
        *local_68 = -(uint)((0 < iVar5 && iVar12 == 1) && (0 < iVar4 && 0 < iVar19));
        local_68 = piVar1;
        if ((0 < iVar5 && iVar12 == 1) && (0 < iVar4 && 0 < iVar19)) {
          iVar12 = (int)((float)iVar19 * DAT_14c762894);
          if (DAT_14ca84e60 <= (int)((float)iVar19 * DAT_14c762894)) {
            iVar12 = DAT_14ca84e60;
          }
          if (iVar12 < 2) {
            iVar12 = 1;
          }
          *local_50 = iVar12;
          fVar9 = DAT_14c762894;
          iVar19 = (int)((float)iVar4 * DAT_14c762894);
          if (DAT_14ca84e60 <= (int)((float)iVar4 * DAT_14c762894)) {
            iVar19 = DAT_14ca84e60;
          }
          if (iVar19 < 2) {
            iVar19 = 1;
          }
          local_50[1] = iVar19;
          iVar19 = (int)(fVar9 * (float)iVar5);
          if (DAT_14ca84e60 <= (int)(fVar9 * (float)iVar5)) {
            iVar19 = DAT_14ca84e60;
          }
          if (iVar19 < 2) {
            iVar19 = 1;
          }
          local_50[2] = iVar19;
          if ((*(byte *)(lVar13 + 0x4e) & 1) != 0) {
            uVar6 = local_50[8];
            if (((((ulonglong)uVar6 != 0xffffffff) && (-1 < (int)uVar6)) &&
                ((int)uVar6 < *(int *)(*(longlong *)(local_50 + 10) + 0x48))) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(local_50 + 10) + 0x40) + (ulonglong)uVar6 * 8) != 0))
            {
              FUN_14129eed6();
              lVar13 = local_70;
            }
          }
        }
      }
      iVar16 = iVar16 + 1;
      pbVar11 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar11 = param_2 + 0x3c;
      }
      iVar12 = *(int *)pbVar11;
      piVar17 = (int *)((longlong)piVar17 + (ulonglong)(uVar20 << 2));
      piVar18 = (int *)((longlong)piVar18 + local_88);
      piVar21 = (int *)((longlong)piVar21 + local_80);
    } while (iVar16 < iVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a5bfbc FUN_143a5bfbc body=359 status=ok
// SIG undefined FUN_143a5bfbc(void)

void FUN_143a5bfbc(longlong param_1,char *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  int *local_78;
  int local_70;
  uint *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14818b976(local_48);
  local_68 = (uint *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_148188f3c(&local_68,param_2);
  FUN_140126e42(&local_78,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  iVar4 = *piVar5;
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      puVar1 = local_68 + local_58;
      if (local_40 == 0) {
        *local_78 = 0;
        local_78 = local_78 + local_70;
        local_68 = puVar1;
      }
      else {
        uVar2 = *local_68;
        piVar5 = local_78 + local_70;
        *local_78 = -(uint)(iVar4 == 1);
        local_78 = piVar5;
        local_68 = puVar1;
        if (iVar4 == 1) {
          if (uVar2 < 0xb) {
            uVar3 = (&DAT_14addfa10)[uVar2];
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)(local_40 + 0xc) = uVar3;
          if ((*(byte *)(param_1 + 0x4e) & 1) != 0) {
            uVar2 = *(uint *)(local_40 + 0x20);
            if (((((ulonglong)uVar2 != 0xffffffff) && (-1 < (int)uVar2)) &&
                ((int)uVar2 < *(int *)(*(longlong *)(local_40 + 0x28) + 0x48))) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(local_40 + 0x28) + 0x40) + (ulonglong)uVar2 * 8) != 0)
               ) {
              FUN_14129eed6();
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      iVar4 = *piVar5;
    } while (iVar6 < iVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a5c124 FUN_143a5c124 body=385 status=ok
// SIG undefined FUN_143a5c124(void)

ulonglong FUN_143a5c124(longlong param_1,int *param_2,longlong param_3)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 3) = 0x13;
  param_2[4] = 3;
  param_2[8] = -1;
  piVar6 = param_2 + 0xe;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  iVar4 = FUN_144830b78(piVar6,&DAT_14cb42160);
  param_2[0xe] = iVar4;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  if (DAT_14c762890 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(*(byte *)(param_1 + 0x30) & 4) == 0);
  }
  uVar7 = CONCAT71((int7)((ulonglong)piVar6 >> 8),*(undefined1 *)(param_1 + 0x4e)) &
          0xffffffffffffff02;
  cVar2 = FUN_143a4f098(CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 1),
                        *(undefined1 *)(param_1 + 0x4c),&local_44);
  if (cVar2 != '\0') {
    iVar5 = (int)((float)*(int *)(param_1 + 0x40) * DAT_14c762894);
    iVar4 = DAT_14ca84e60;
    if (iVar5 < DAT_14ca84e60) {
      iVar4 = iVar5;
    }
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    *param_2 = iVar4;
    fVar1 = DAT_14c762894;
    iVar5 = (int)((float)*(int *)(param_1 + 0x44) * DAT_14c762894);
    iVar4 = DAT_14ca84e60;
    if (iVar5 < DAT_14ca84e60) {
      iVar4 = iVar5;
    }
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    param_2[1] = iVar4;
    iVar5 = (int)((float)*(int *)(param_1 + 0x48) * fVar1);
    iVar4 = DAT_14ca84e60;
    if (iVar5 < DAT_14ca84e60) {
      iVar4 = iVar5;
    }
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    param_2[2] = iVar4;
    if ((ulonglong)local_44 < 0xb) {
      uVar3 = (&DAT_14addfa10)[local_44];
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(param_2 + 3) = uVar3;
    param_2[4] = (uint)*(byte *)(param_1 + 0x4d);
    FUN_1404e5848(param_2 + 8,param_3 + 0x1e8,param_1 + 0x50);
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a5c2a6 FUN_143a5c2a6 body=1270 status=ok
// SIG undefined FUN_143a5c2a6(void)

void FUN_143a5c2a6(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_143a5c7b1(param_3);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a5c6f7;
    if (iVar7 != 1) goto LAB_143a5c30f;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a5c6f7;
  }
  else {
LAB_143a5c30f:
    if (iVar7 == 0x10) goto LAB_143a5c6f7;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a5c6f7:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a5c6f7;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a5c47c;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a6cf3b);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a5c47c:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a5c4fc;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a5c4fc:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14addcfc0;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14addcfa0;
    local_68[0] = &LAB_143a6d486;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb3d54c);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a5c7b1 FUN_143a5c7b1 body=171 status=ok
// SIG undefined FUN_143a5c7b1(void)

void FUN_143a5c7b1(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_2 + 0x14) == '\x01') && (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 != 0))
  {
    lVar2 = FUN_1400bd118(*(undefined8 *)(param_1 + 0x30));
    if (lVar2 != 0) {
      *(undefined1 *)(lVar1 + 0x15c) = 0;
      FUN_145f790e6(lVar2,*(undefined8 *)(param_2 + 0x18));
      local_28 = *(longlong *)(param_2 + 0x18);
      if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_145d11510(lVar2 + 0x1c68,&local_28,1);
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_2 + 0x14) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a5c85e FUN_143a5c85e body=1791 status=ok
// SIG undefined FUN_143a5c85e(void)

undefined8
FUN_143a5c85e(longlong param_1,longlong param_2,int param_3,longlong param_4,undefined8 *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  void *_Dst;
  void *_Dst_00;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  ulonglong uStack_80;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_5[3] == 0) goto LAB_143a5ca35;
  uVar13 = *(undefined8 *)(param_1 + -0x10);
  local_a8 = FUN_1447b4020(param_5[3]);
  uStack_a0 = &local_88;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  uStack_b0 = *(undefined8 *)(param_4 + 0x100);
  local_98 = *param_5;
  uStack_90 = *(undefined4 *)(param_5 + 1);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar4 + 0xc60);
  local_b8 = uVar13;
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143a5c903;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143a5c908;
      goto LAB_143a5c939;
    }
LAB_143a5c908:
    FUN_143a6d65e(&local_b8,&DAT_14ca85100);
  }
  else {
LAB_143a5c903:
    if (iVar8 == 0x10) goto LAB_143a5c908;
LAB_143a5c939:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
      goto LAB_143a5c908;
      if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_143a5c908;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar12 = (uint *)*puVar2;
      if (puVar12 != (uint *)0x0) goto LAB_143a5cc58;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_143a6cf3b);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        FUN_140217a48(puVar2);
        puVar12 = (uint *)*puVar2;
LAB_143a5cc58:
        puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar17 = (uint *)(puVar18 + 0x1b);
        uVar14 = puVar12[0x12];
        if (puVar17 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar3 = *puVar12;
          *puVar12 = *puVar12 + uVar14 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar14) != 0xffffffff) break;
          puVar12 = (uint *)*puVar2;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar18 + 0x1b);
          uVar14 = 0;
          if (puVar17 <= puVar12 + 0x4000) {
            uVar14 = 1;
            goto LAB_143a5ccd8;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_143a5ccd8:
      *(uint **)(puVar12 + 0x10) = puVar17;
      puVar12[0x12] = uVar14;
      iVar8 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14addd058;
      *(undefined4 *)(puVar18 + 0x15) = (undefined4)local_b8;
      *(undefined4 *)((longlong)puVar18 + 0xac) = local_b8._4_4_;
      *(undefined4 *)(puVar18 + 0x16) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)puVar18 + 0xb4) = uStack_b0._4_4_;
      *(undefined4 *)(puVar18 + 0x17) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar18 + 0xbc) = local_a8._4_4_;
      *(undefined4 *)(puVar18 + 0x18) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_a0._4_4_;
      *(undefined4 *)(puVar18 + 0x19) = (undefined4)local_98;
      *(undefined4 *)((longlong)puVar18 + 0xcc) = local_98._4_4_;
      *(undefined4 *)(puVar18 + 0x1a) = uStack_90;
      *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_8c;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar14 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
          iVar8 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
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
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar5 = 1;
        if ((char)uVar19 != '\x06') {
          uVar5 = uVar19;
        }
        uVar19 = uVar5;
        uVar13 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar18[0xf] = uVar13;
      puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar8;
      if (puVar18 == (undefined8 *)0x0) {
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
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
      local_78[0] = (undefined1 *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x38,8);
      *local_68 = (longlong)&PTR_LAB_14addcff0;
      *(undefined4 *)(local_68 + 5) = (undefined4)local_98;
      *(undefined4 *)((longlong)local_68 + 0x2c) = local_98._4_4_;
      *(undefined4 *)(local_68 + 6) = uStack_90;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_8c;
      *(undefined4 *)(local_68 + 3) = (undefined4)local_a8;
      *(undefined4 *)((longlong)local_68 + 0x1c) = local_a8._4_4_;
      *(undefined4 *)(local_68 + 4) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)local_68 + 0x24) = uStack_a0._4_4_;
      *(undefined4 *)(local_68 + 1) = (undefined4)local_b8;
      *(undefined4 *)((longlong)local_68 + 0xc) = local_b8._4_4_;
      *(undefined4 *)(local_68 + 2) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)local_68 + 0x14) = uStack_b0._4_4_;
      if (local_68 + 1 != (longlong *)0x0) {
        local_78[0] = &LAB_143a6d918;
      }
      local_d8 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"NDIRenderTargetVolume_CacheFrame",&DAT_14cb3d550);
      if (local_78[0] != (undefined1 *)0x0) {
        plVar15 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar15 = local_58;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  FUN_14080c2b4();
  if ((0 < (int)uStack_80) && (DAT_14c7628a0 != 1)) {
    iVar8 = *(int *)(param_2 + 0x38);
    if (*(int *)(param_2 + 0x38) < param_3 + 1) {
      iVar8 = param_3 + 1;
    }
    FUN_14817dcba(param_2 + 0x30,iVar8,1);
    puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + (longlong)param_3 * 0x48);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_5 + 1);
    *puVar2 = *param_5;
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)param_5 + 0xc);
    lVar4 = *(longlong *)(param_2 + 0x28);
    iVar8 = (int)uStack_80;
    iVar7 = (int)uStack_80;
    if (lVar4 != 0) {
      iVar7 = FUN_1410fe39e(lVar4,uStack_80 & 0xffffffff,0,0);
    }
    *(int *)(puVar2 + 2) = iVar8;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
    _Dst = (void *)FUN_14001cc68((undefined1 *)(longlong)iVar7,0);
    if (lVar4 == 0) {
LAB_143a5cb30:
      puVar16 = (undefined1 *)(ulonglong)*(uint *)((longlong)puVar2 + 0x14);
    }
    else {
      local_c8 = 0;
      local_d0 = 0x10;
      local_d8 = (undefined1 **)(longlong)iVar8;
      local_78[0] = (undefined1 *)(longlong)iVar7;
      cVar6 = FUN_1410fe780(lVar4,_Dst,local_78,local_88);
      if (((undefined1 *)(longlong)(int)local_78[0] != local_78[0]) || (cVar6 == '\0'))
      goto LAB_143a5cb30;
      *(int *)((longlong)puVar2 + 0x14) = (int)local_78[0];
      puVar16 = local_78[0];
    }
    if ((int)puVar16 == 0) {
      memcpy(_Dst,local_88,(size_t)(longlong)iVar8);
    }
    puVar18 = puVar2 + 3;
    FUN_14031515e(puVar18);
    *(undefined1 *)((longlong)puVar2 + 0x2b) = 2;
    *(byte *)((longlong)puVar2 + 0x2e) = *(byte *)((longlong)puVar2 + 0x2e) & 0xfb;
    iVar8 = *(int *)((longlong)puVar2 + 0x14);
    if (iVar8 < 1) {
      iVar8 = *(int *)(puVar2 + 2);
    }
    _Dst_00 = (void *)FUN_1427d8a06(puVar18,(longlong)iVar8,1);
    memcpy(_Dst_00,_Dst,(longlong)iVar8);
    *(undefined1 *)((longlong)puVar2 + 0x2b) = 0;
    if ((*(byte *)((longlong)puVar2 + 0x2c) & 8) != 0) {
      FUN_1400ea36e(puVar18,puVar18);
    }
    FUN_1400020a8(_Dst);
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143a5ca35:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a5cf5e FUN_143a5cf5e body=2758 status=ok
// SIG undefined FUN_143a5cf5e(void)

ulonglong FUN_143a5cf5e(longlong param_1,longlong *param_2,uint param_3,uint param_4,float param_5,
                       longlong param_6,undefined8 *param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  uint *puVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  uint *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  ulonglong unaff_R13;
  undefined7 uVar24;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar19 = (longlong *)(param_1 - 0x38);
  if (param_2 == (longlong *)0x0) {
LAB_143a5cfbd:
    if (0.5 <= param_5) {
      param_3 = param_4;
    }
    if (((int)param_3 < 0) || ((int)param_2[7] <= (int)param_3)) {
      unaff_R13 = 0;
      goto LAB_143a5d0c7;
    }
    lVar4 = param_2[6];
    uVar21 = (ulonglong)param_3;
    *(undefined4 *)(param_7 + 1) = *(undefined4 *)(lVar4 + 8 + uVar21 * 0x48);
    *param_7 = *(undefined8 *)(lVar4 + uVar21 * 0x48);
    *(undefined1 *)((longlong)param_7 + 0xc) = *(undefined1 *)(lVar4 + 0xc + uVar21 * 0x48);
    *(undefined4 *)(param_7 + 2) = 3;
    (**(code **)(*plVar19 + 0x2e8))(plVar19,param_7,param_6,0);
    (**(code **)(*plVar19 + 0x2f0))(plVar19,param_7,param_6,0);
    lVar18 = param_7[3];
    uVar24 = (undefined7)(unaff_R13 >> 8);
    unaff_R13 = CONCAT71(uVar24,1);
    uStack_d0 = CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
    if (lVar18 == 0) goto LAB_143a5d0c7;
    lVar4 = lVar4 + uVar21 * 0x48;
    if (*(longlong *)(lVar4 + 0x40) == 0) {
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
      if (*(int *)(lVar4 + 0x10) < 1) goto LAB_143a5d0c7;
      unaff_R13 = CONCAT71(uVar24,1);
      FUN_14143acfc(lVar4 + 0x18,lVar4 + 0x40,1);
      if (*(longlong *)(lVar4 + 0x40) == 0) goto LAB_143a5d0c7;
      lVar18 = param_7[3];
    }
    lVar11 = CONCAT71(uVar24,1);
    uVar15 = *(undefined8 *)(param_1 + -0x10);
    uVar10 = FUN_1447b4020(lVar18);
    uStack_e0 = *(undefined8 *)(param_6 + 0x100);
    local_d8 = (undefined4)uVar10;
    uStack_d4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    local_c8 = param_2[5];
    uStack_c0 = CONCAT31(uStack_c0._1_3_,*(undefined1 *)((longlong)param_7 + 0xc));
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar7 = *(int *)(lVar18 + 0xc60);
    local_e8 = uVar15;
    uStack_d0 = lVar4;
    if (DAT_14c86a9fc == 0) {
      if (iVar7 != 2) {
        if (iVar7 != 1) goto LAB_143a5d0a5;
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_143a5d0ae;
        goto LAB_143a5d337;
      }
    }
    else {
LAB_143a5d0a5:
      if (iVar7 != 0x10) {
LAB_143a5d337:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar18 + 0xc60), iVar7 == 2))
          goto LAB_143a5d0ae;
          if (iVar7 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_143a5d0ae;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar16 = (uint *)*puVar2;
          if (puVar16 != (uint *)0x0) goto LAB_143a5d4bf;
          while( true ) {
            uVar17 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar17 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar17 | 1;
              __tlregdtor(&LAB_143a6cf3b);
            }
            lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar13 = *(undefined4 **)(lVar4 + 0x310);
            *(undefined8 *)(lVar4 + 0x310) = 0;
            if (puVar13 == (undefined4 *)0x0) {
              puVar13 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar13 = 0xffffffff;
            *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            FUN_140217a48(puVar2);
            puVar16 = (uint *)*puVar2;
LAB_143a5d4bf:
            puVar22 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar20 = (uint *)(puVar22 + 0x1b);
            uVar17 = puVar16[0x12];
            if (puVar20 <= puVar16 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar3 = *puVar16;
              *puVar16 = *puVar16 + uVar17 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar17) != 0xffffffff) break;
              puVar16 = (uint *)*puVar2;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar2 = puVar16;
              puVar22 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
              puVar20 = (uint *)(puVar22 + 0x1b);
              uVar17 = 0;
              if (puVar20 <= puVar16 + 0x4000) {
                uVar17 = 1;
                goto LAB_143a5d53f;
              }
            }
          }
          uVar17 = uVar17 + 1;
LAB_143a5d53f:
          *(uint **)(puVar16 + 0x10) = puVar20;
          puVar16[0x12] = uVar17;
          FUN_1447247dc(puVar22,0);
          ppuVar14 = &PTR_FUN_14addd0e0;
          goto LAB_143a5d559;
        }
        local_a8[0] = (undefined1 *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x38,8);
        *local_98 = (longlong)&PTR_LAB_14addd0c0;
        *(undefined4 *)(local_98 + 5) = (undefined4)local_c8;
        *(undefined4 *)((longlong)local_98 + 0x2c) = local_c8._4_4_;
        *(undefined4 *)(local_98 + 6) = uStack_c0;
        *(undefined4 *)((longlong)local_98 + 0x34) = uStack_bc;
        *(undefined4 *)(local_98 + 3) = local_d8;
        *(undefined4 *)((longlong)local_98 + 0x1c) = uStack_d4;
        local_98[4] = uStack_d0;
        *(undefined4 *)(local_98 + 1) = (undefined4)local_e8;
        *(undefined4 *)((longlong)local_98 + 0xc) = local_e8._4_4_;
        *(undefined4 *)(local_98 + 2) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)local_98 + 0x14) = uStack_e0._4_4_;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8[0] = &LAB_143a6eb44;
        }
        puVar23 = &DAT_14cb3d558;
LAB_143a5d3f3:
        local_108 = local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"NDIRenderTargetVolumeUpdate",puVar23);
        if (local_a8[0] != (undefined1 *)0x0) {
          plVar19 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar19 = local_88;
          }
          (**(code **)(*plVar19 + 0x10))();
        }
        goto LAB_143a5d417;
      }
    }
LAB_143a5d0ae:
    FUN_143a6e7b0(&local_e8,&DAT_14ca85100);
  }
  else {
    lVar11 = FUN_1459d6eee();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1),
       *(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
       lVar11 + 0x30)) goto LAB_143a5d0c7;
    lVar11 = FUN_145b52fce();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar11 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
        lVar11 + 0x30)) goto LAB_143a5cfbd;
    lVar11 = FUN_145b52fce();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar11 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
        lVar11 + 0x30)) {
      param_2 = (longlong *)0x0;
    }
    uVar17 = ((uint)((ulonglong)plVar19 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar19 >> 4)) *
             -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    local_f8 = 0;
    local_100 = 1;
    local_108 = (undefined1 **)((ulonglong)local_108 & 0xffffffff00000000);
    plVar12 = (longlong *)
              FUN_147d42496(param_2,uVar17 >> 0x10 ^ uVar17,0,
                            (float)((int)ROUND((float)(int)param_3 + param_5 +
                                               (float)(int)param_3 + param_5 + 0.5) >> 1));
    (**(code **)(DAT_14cb091a0 + 0x18))(&DAT_14cb091a0);
    (**(code **)(*param_2 + 0x2d0))(param_2,&local_b4);
    *(undefined4 *)(param_7 + 1) = local_ac;
    *param_7 = local_b4;
    lVar11 = 0;
    uVar6 = (**(code **)(*param_2 + 0x2d8))(param_2,0);
    *(undefined1 *)((longlong)param_7 + 0xc) = uVar6;
    *(undefined4 *)(param_7 + 2) = 3;
    (**(code **)(*(longlong *)(param_1 + -0x38) + 0x2e8))(plVar19,param_7,param_6,0);
    (**(code **)(*(longlong *)(param_1 + -0x38) + 0x2f0))(plVar19,param_7,param_6,0);
    local_e8 = *(undefined8 *)(param_1 + -0x10);
    uStack_e0 = *(undefined8 *)(param_6 + 0x100);
    local_d8 = CONCAT31(local_d8._1_3_,*(undefined1 *)((longlong)param_7 + 0xc));
    uStack_d4 = (undefined4)local_b4;
    uStack_d0._0_4_ = (undefined4)((ulonglong)local_b4 >> 0x20);
    uStack_d0._4_4_ = local_ac;
    if (plVar12 != (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar12 + 0x300))(plVar12);
    }
    uStack_c0 = *(undefined4 *)(param_6 + 0x890);
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar7 = *(int *)(lVar4 + 0xc60);
    local_c8 = lVar11;
    if (DAT_14c86a9fc == 0) {
      if (iVar7 != 2) {
        if (iVar7 != 1) goto LAB_143a5d2f1;
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_143a5d2fa;
        goto LAB_143a5d7a8;
      }
    }
    else {
LAB_143a5d2f1:
      if (iVar7 != 0x10) {
LAB_143a5d7a8:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
          goto LAB_143a5d2fa;
          if (iVar7 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_143a5d2fa;
          }
        }
        if (DAT_14ca9a43c != 0) {
          local_a8[0] = (undefined1 *)0x0;
          local_98 = (longlong *)FUN_14001cc68(0x38,8);
          *local_98 = (longlong)&PTR_LAB_14addd090;
          *(undefined4 *)(local_98 + 5) = (undefined4)local_c8;
          *(undefined4 *)((longlong)local_98 + 0x2c) = local_c8._4_4_;
          *(undefined4 *)(local_98 + 6) = uStack_c0;
          *(undefined4 *)((longlong)local_98 + 0x34) = uStack_bc;
          *(undefined4 *)(local_98 + 3) = local_d8;
          *(undefined4 *)((longlong)local_98 + 0x1c) = uStack_d4;
          *(undefined4 *)(local_98 + 4) = (undefined4)uStack_d0;
          *(undefined4 *)((longlong)local_98 + 0x24) = uStack_d0._4_4_;
          *(undefined4 *)(local_98 + 1) = (undefined4)local_e8;
          *(undefined4 *)((longlong)local_98 + 0xc) = local_e8._4_4_;
          *(undefined4 *)(local_98 + 2) = (undefined4)uStack_e0;
          *(undefined4 *)((longlong)local_98 + 0x14) = uStack_e0._4_4_;
          if (local_98 + 1 != (longlong *)0x0) {
            local_a8[0] = &LAB_143a6e5e0;
          }
          puVar23 = &DAT_14cb3d554;
          goto LAB_143a5d3f3;
        }
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar16 = (uint *)*puVar2;
        if (puVar16 != (uint *)0x0) goto LAB_143a5d909;
        while( true ) {
          uVar17 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar17 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar17 | 1;
            __tlregdtor(&LAB_143a6cf3b);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          FUN_140217a48(puVar2);
          puVar16 = (uint *)*puVar2;
LAB_143a5d909:
          puVar22 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar22 + 0x1b);
          uVar17 = puVar16[0x12];
          if (puVar20 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar3 = *puVar16;
            *puVar16 = *puVar16 + uVar17 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar17) != 0xffffffff) break;
            puVar16 = (uint *)*puVar2;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar2 = puVar16;
            puVar22 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
            puVar20 = (uint *)(puVar22 + 0x1b);
            uVar17 = 0;
            if (puVar20 <= puVar16 + 0x4000) {
              uVar17 = 1;
              goto LAB_143a5d985;
            }
          }
        }
        uVar17 = uVar17 + 1;
LAB_143a5d985:
        *(uint **)(puVar16 + 0x10) = puVar20;
        puVar16[0x12] = uVar17;
        FUN_1447247dc(puVar22,0);
        ppuVar14 = &PTR_FUN_14addd0b0;
LAB_143a5d559:
        iVar7 = 0;
        *puVar22 = ppuVar14;
        *(undefined4 *)(puVar22 + 0x15) = (undefined4)local_e8;
        *(undefined4 *)((longlong)puVar22 + 0xac) = local_e8._4_4_;
        *(undefined4 *)(puVar22 + 0x16) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)puVar22 + 0xb4) = uStack_e0._4_4_;
        *(undefined4 *)(puVar22 + 0x17) = local_d8;
        *(undefined4 *)((longlong)puVar22 + 0xbc) = uStack_d4;
        puVar22[0x18] = uStack_d0;
        *(undefined4 *)(puVar22 + 0x19) = (undefined4)local_c8;
        *(undefined4 *)((longlong)puVar22 + 0xcc) = local_c8._4_4_;
        *(undefined4 *)(puVar22 + 0x1a) = uStack_c0;
        *(undefined4 *)((longlong)puVar22 + 0xd4) = uStack_bc;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar17 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
          }
          else {
            uVar21 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
          uVar5 = 1;
          if ((char)uVar21 != '\x06') {
            uVar5 = uVar21;
          }
          uVar21 = uVar5;
          uVar15 = 0;
        }
        else {
          if ((char)uVar21 == '\x06') {
            uVar21 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar22[0xf] = uVar15;
        puVar22[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar22 + 0x1c) = iVar7;
        if (puVar22 == (undefined8 *)0x0) {
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(puVar22);
          LOCK();
          piVar1 = (int *)(puVar22 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar22)(puVar22,1);
          }
        }
        goto LAB_143a5d417;
      }
    }
LAB_143a5d2fa:
    FUN_143a6dae8(&local_e8,&DAT_14ca85100);
  }
LAB_143a5d417:
  unaff_R13 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
LAB_143a5d0c7:
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return unaff_R13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a5da26 FUN_143a5da26 body=194 status=ok
// SIG undefined FUN_143a5da26(void)

undefined8 FUN_143a5da26(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = param_2[8];
  if ((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
     ((int)uVar1 < *(int *)(*(longlong *)(param_2 + 10) + 0x48))) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 10) + 0x40) + (ulonglong)uVar1 * 8);
    if (lVar2 != 0) {
      lVar3 = FUN_14129eed6();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar3 = *(longlong *)(param_2 + 6);
        if (*(longlong *)(param_2 + 6) != lVar2) {
          FUN_143a5c7b1(param_3,param_2);
          *(longlong *)(param_2 + 6) = lVar2;
          lVar3 = lVar2;
        }
        if ((*(byte *)(param_1 + 0x4e) & 1) != 0) {
          *param_2 = *(undefined4 *)(lVar2 + 0x140);
          param_2[1] = *(undefined4 *)(lVar2 + 0x144);
          param_2[2] = *(undefined4 *)(lVar2 + 0x148);
          *(undefined1 *)(param_2 + 3) = *(undefined1 *)(lVar3 + 0x15c);
          param_2[4] = (uint)*(byte *)(lVar3 + 0xf1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143a5dae8 FUN_143a5dae8 body=2016 status=ok
// SIG undefined FUN_143a5dae8(void)

undefined8 FUN_143a5dae8(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  byte bVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_118 [32];
  undefined1 **local_f8;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (DAT_14c762890 == 0) {
    bVar17 = 1;
  }
  else {
    bVar17 = (*(byte *)(param_1 + 0x30) & 4) >> 2;
  }
  lVar9 = param_2[3];
  if ((lVar9 == 0) || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) != 0)) {
    param_2[3] = 0;
    lVar9 = 0;
  }
  if ((bVar17 == 0) || ((*(byte *)(param_1 + 0x4e) & 1) != 0)) {
LAB_143a5dc08:
    if (lVar9 != 0) goto LAB_143a5dc11;
  }
  else {
    if (lVar9 == 0) {
      lVar9 = FUN_1400bd118(*(undefined8 *)(param_3 + 0x30));
      if (lVar9 == 0) goto LAB_143a5dcac;
      *(undefined1 *)((longlong)param_2 + 0x14) = 1;
      uVar10 = FUN_14129eed6();
      lVar11 = FUN_14600ca7e(lVar9,uVar10,&local_e8);
      param_2[3] = lVar11;
      if (lVar11 == 0) goto LAB_143a5dcac;
      FUN_146471540(lVar9,lVar11);
      *(uint *)(param_2[3] + 0x13c) = *(uint *)(param_2[3] + 0x13c) | 2;
      lVar9 = param_2[3];
      *(undefined8 *)(lVar9 + 0x14c) = 0;
      *(undefined8 *)(lVar9 + 0x154) = 0;
      *(char *)(param_2[3] + 0xf1) = (char)param_2[2];
      plVar15 = (longlong *)param_2[3];
      uVar4 = *(undefined1 *)((longlong)param_2 + 0xc);
      lVar9 = param_2[1];
      plVar15[0x28] = *param_2;
      *(int *)(plVar15 + 0x29) = (int)lVar9;
      *(undefined1 *)((longlong)plVar15 + 0x15c) = uVar4;
      (**(code **)(*plVar15 + 0x318))();
      FUN_14373cdea(param_2[3],1);
      lVar9 = param_2[3];
      goto LAB_143a5dc08;
    }
LAB_143a5dc11:
    if (((((*(int *)(lVar9 + 0x140) == (int)*param_2) &&
          (*(int *)(lVar9 + 0x144) == *(int *)((longlong)param_2 + 4))) &&
         (*(int *)(lVar9 + 0x148) == (int)param_2[1])) &&
        ((*(char *)(lVar9 + 0x15c) == *(char *)((longlong)param_2 + 0xc) &&
         (*(uint *)(param_2 + 2) == (uint)*(byte *)(lVar9 + 0xf1))))) &&
       ((*(byte *)(lVar9 + 0x13c) & 2) != 0)) {
      lVar9 = FUN_1447b4020();
      if (lVar9 != 0) goto LAB_143a5dca7;
      lVar9 = param_2[3];
    }
    *(byte *)(lVar9 + 0x13c) = *(byte *)(lVar9 + 0x13c) | 2;
    *(char *)(param_2[3] + 0xf1) = (char)param_2[2];
    plVar15 = (longlong *)param_2[3];
    uVar4 = *(undefined1 *)((longlong)param_2 + 0xc);
    lVar9 = param_2[1];
    plVar15[0x28] = *param_2;
    *(int *)(plVar15 + 0x29) = (int)lVar9;
    *(undefined1 *)((longlong)plVar15 + 0x15c) = uVar4;
    (**(code **)(*plVar15 + 0x318))();
    FUN_14373cdea(param_2[3],1);
  }
LAB_143a5dca7:
  if (bVar17 == 0) goto LAB_143a5dcac;
  lVar9 = *(longlong *)(param_1 + 0x28);
  if (param_2[3] == 0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_1447b4020();
  }
  lStack_e0 = *(longlong *)(param_3 + 0x100);
  local_e8 = lVar9;
  FUN_14818ba0a(&local_d8,param_2);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a5dd37;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a5dd3c;
      goto LAB_143a5dd66;
    }
LAB_143a5dd3c:
    FUN_143a6ed14(&local_e8);
  }
  else {
LAB_143a5dd37:
    if (iVar6 == 0x10) goto LAB_143a5dd3c;
LAB_143a5dd66:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
      goto LAB_143a5dd3c;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143a5dd3c;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_143a5df56;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_143a6cf3b);
        }
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar12 = *(undefined4 **)(lVar9 + 0x310);
        *(undefined8 *)(lVar9 + 0x310) = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar12 = 0xffffffff;
        *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar2 = puVar12;
        FUN_140217a48(puVar2);
        puVar13 = (uint *)*puVar2;
LAB_143a5df56:
        puVar18 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x23);
        uVar14 = puVar13[0x12];
        if (puVar16 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar14 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar14) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar18 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x23);
          uVar14 = 0;
          if (puVar16 <= puVar13 + 0x4000) {
            uVar14 = 1;
            goto LAB_143a5dfd6;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_143a5dfd6:
      *(uint **)(puVar13 + 0x10) = puVar16;
      puVar13[0x12] = uVar14;
      iVar6 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14addd150;
      puVar18[0x15] = local_e8;
      puVar18[0x16] = lStack_e0;
      *(undefined4 *)(puVar18 + 0x19) = local_c8;
      *(undefined4 *)((longlong)puVar18 + 0xcc) = uStack_c4;
      *(undefined4 *)(puVar18 + 0x1a) = uStack_c0;
      *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_bc;
      puVar18[0x17] = local_d8;
      puVar18[0x18] = lStack_d0;
      *(undefined4 *)(puVar18 + 0x1b) = local_b8;
      *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_b4;
      *(undefined4 *)(puVar18 + 0x1c) = uStack_b0;
      *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_ac;
      puVar18[0x1d] = local_a8;
      *(undefined4 *)(puVar18 + 0x1e) = local_a0;
      puVar18[0x1f] = local_98;
      local_98 = 0;
      *(undefined4 *)(puVar18 + 0x20) = (undefined4)local_90;
      *(undefined4 *)((longlong)puVar18 + 0x104) = local_90._4_4_;
      local_90 = 0;
      *(undefined4 *)(puVar18 + 0x21) = local_88;
      puVar18[0x22] = local_80;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar14 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
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
        if ((char)uVar19 != '\x06') {
          uVar5 = uVar19;
        }
        uVar19 = uVar5;
        uVar10 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
        }
        uVar10 = *(undefined8 *)(lVar9 + 0x30);
      }
      puVar18[0xf] = uVar10;
      puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar6;
      if (puVar18 == (undefined8 *)0x0) {
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
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
      local_78[0] = (undefined1 *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x78,8);
      *local_68 = (longlong)&PTR_LAB_14addd130;
      local_68[1] = local_e8;
      local_68[2] = lStack_e0;
      *(undefined4 *)(local_68 + 5) = local_c8;
      *(undefined4 *)((longlong)local_68 + 0x2c) = uStack_c4;
      *(undefined4 *)(local_68 + 6) = uStack_c0;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_bc;
      local_68[3] = local_d8;
      local_68[4] = lStack_d0;
      *(undefined4 *)(local_68 + 7) = local_b8;
      *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_b4;
      *(undefined4 *)(local_68 + 8) = uStack_b0;
      *(undefined4 *)((longlong)local_68 + 0x44) = uStack_ac;
      *(undefined4 *)(local_68 + 10) = local_a0;
      local_68[9] = local_a8;
      local_68[0xb] = local_98;
      local_98 = 0;
      *(undefined4 *)(local_68 + 0xc) = (undefined4)local_90;
      *(undefined4 *)((longlong)local_68 + 100) = local_90._4_4_;
      local_90 = 0;
      *(undefined4 *)(local_68 + 0xd) = local_88;
      local_68[0xe] = local_80;
      if (local_68 + 1 != (longlong *)0x0) {
        local_78[0] = &LAB_143a6ef4e;
      }
      local_f8 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"NDIRenderTargetVolumeUpdate",&DAT_14cb3d55c);
      if (local_78[0] != (undefined1 *)0x0) {
        plVar15 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar15 = local_58;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_143a5dcac:
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a5e2ca FUN_143a5e2ca body=28 status=ok
// SIG undefined FUN_143a5e2ca(void)

void FUN_143a5e2ca(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + 0x10) = *param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x1c) = param_3;
  return;
}



// FUNCTION 143a5e34a FUN_143a5e34a body=1213 status=ok
// SIG undefined FUN_143a5e34a(void)

void FUN_143a5e34a(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined ***pppuVar12;
  uint *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) goto LAB_143a5e46d;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar10 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar4 != 2) {
      if (iVar4 != 1) goto LAB_143a5e394;
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_143a5e399;
      goto LAB_143a5e3cf;
    }
LAB_143a5e399:
    (**(code **)(*plVar2 + 0x20))(plVar2);
    puVar7 = (undefined8 *)*plVar2;
    plVar14 = plVar2;
LAB_143a5e3a8:
    (*(code *)*puVar7)(plVar14,1);
  }
  else {
LAB_143a5e394:
    if (iVar4 == 0x10) goto LAB_143a5e399;
LAB_143a5e3cf:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar4 = *(int *)(lVar10 + 0xc60), iVar4 == 2))
      goto LAB_143a5e399;
      if (iVar4 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_143a5e399;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar7 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar9 = (uint *)*puVar7;
      if (puVar9 != (uint *)0x0) goto LAB_143a5e52e;
      while( true ) {
        uVar11 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar11 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar11 | 1;
          __tlregdtor(&LAB_143a6cf3b);
        }
        lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar8 = *(undefined4 **)(lVar10 + 0x310);
        *(undefined8 *)(lVar10 + 0x310) = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar8 = 0xffffffff;
        *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar7 = puVar8;
        FUN_140217a48(puVar7);
        puVar9 = (uint *)*puVar7;
LAB_143a5e52e:
        plVar14 = (longlong *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar13 = (uint *)(plVar14 + 0x16);
        uVar11 = puVar9[0x12];
        if (puVar13 <= puVar9 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar1 = *puVar9;
          *puVar9 = *puVar9 + uVar11 + 1;
          UNLOCK();
          if ((uVar1 ^ uVar11) != 0xffffffff) break;
          puVar9 = (uint *)*puVar7;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar7 = puVar9;
          plVar14 = (longlong *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
          puVar13 = (uint *)(plVar14 + 0x16);
          uVar11 = 0;
          if (puVar13 <= puVar9 + 0x4000) {
            uVar11 = 1;
            goto LAB_143a5e5ae;
          }
        }
      }
      uVar11 = uVar11 + 1;
LAB_143a5e5ae:
      *(uint **)(puVar9 + 0x10) = puVar13;
      puVar9[0x12] = uVar11;
      iVar4 = 0;
      FUN_1447247dc(plVar14,0);
      *plVar14 = (longlong)&PTR_FUN_14addd180;
      plVar14[0x15] = (longlong)plVar2;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar11 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
          iVar4 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar4 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(plVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar14[0xe] + 0x18))(plVar14 + 0xe,plVar14 + 9);
      }
      plVar14[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar14[9] = (longlong)plVar14;
      plVar14[10] = (longlong)plVar14;
      lVar10 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar10 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        lVar10 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
        }
        lVar10 = *(longlong *)(lVar10 + 0x30);
      }
      plVar14[0xf] = lVar10;
      plVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)plVar14 + 0x1c) = iVar4;
      if (plVar14 == (longlong *)0x0) {
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
        goto LAB_143a5e466;
      }
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(plVar14);
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) goto LAB_143a5e466;
      puVar7 = (undefined8 *)*plVar14;
      goto LAB_143a5e3a8;
    }
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14addd160;
    local_68[0] = FUN_143a6f12c;
    local_40 = plVar2;
    FUN_14005a792(&DAT_14ca9a440,L"DeleteResource",&DAT_14cb3d560);
    if (local_68[0] != (code *)0x0) {
      pppuVar12 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar12 = &local_48;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
LAB_143a5e466:
  *param_1 = 0;
LAB_143a5e46d:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a5e808 FUN_143a5e808 body=247 status=ok
// SIG undefined FUN_143a5e808(void)

ulonglong FUN_143a5e808(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  puVar3 = (undefined8 *)*param_1;
  lVar7 = (longlong)(int)param_1[1];
  puVar4 = puVar3;
  if (lVar7 != 0) {
    puVar4 = puVar3 + lVar7;
    lVar6 = 0;
    do {
      iVar1 = *(int *)((longlong)puVar3 + lVar6 + 4);
      if ((((iVar1 == 0) || (uVar2 = *(uint *)((longlong)puVar3 + lVar6), (int)uVar2 < 0)) ||
          (DAT_14c9647dc <= (int)uVar2)) ||
         (((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 == 0 ||
           (*(int *)(lVar5 + 0x10) != iVar1)) || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
        puVar4 = (undefined8 *)((longlong)puVar3 + lVar6);
        if (lVar7 * 8 + -8 != lVar6) {
          lVar6 = lVar6 + 8;
          do {
            iVar1 = *(int *)((longlong)puVar3 + lVar6 + 4);
            if (((iVar1 != 0) && (uVar2 = *(uint *)((longlong)puVar3 + lVar6), -1 < (int)uVar2)) &&
               (((int)uVar2 < DAT_14c9647dc &&
                (((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0
                  && (*(int *)(lVar5 + 0x10) == iVar1)) &&
                 ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))))) {
              *puVar4 = *(undefined8 *)((longlong)puVar3 + lVar6);
              puVar4 = puVar4 + 1;
            }
            lVar6 = lVar6 + 8;
          } while (lVar7 * 8 - lVar6 != 0);
        }
        break;
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 - lVar6 != 0);
  }
  return (ulonglong)((longlong)puVar4 - (longlong)puVar3) >> 3;
}



// FUNCTION 143a5e900 FUN_143a5e900 body=4232 status=ok
// SIG undefined FUN_143a5e900(void)

void FUN_143a5e900(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  char cVar4;
  ulonglong *puVar5;
  undefined1 **ppuVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong *puVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong *puVar27;
  longlong lVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_648 [32];
  undefined1 local_628;
  longlong local_620;
  undefined8 local_618;
  undefined1 **local_610;
  int *local_608;
  int *local_600;
  undefined1 *local_5f8;
  undefined4 local_5f0;
  undefined1 *local_5e8;
  undefined4 local_5e0;
  double local_5d8;
  double local_5d0;
  double local_5c8;
  int local_5bc;
  int *local_5b8;
  undefined4 local_5b0;
  undefined8 local_5a8;
  undefined4 local_5a0;
  int *local_598;
  undefined4 local_590;
  undefined8 local_588;
  undefined4 local_580;
  int local_578 [32];
  int *local_4f8;
  undefined8 local_4f0;
  undefined1 local_4e8 [192];
  undefined1 *local_428;
  undefined8 local_420;
  undefined1 local_418 [192];
  undefined1 *local_358;
  undefined8 local_350;
  undefined1 *local_348;
  undefined1 *local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_648;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    FUN_14818e2b2(param_2,param_1);
    if ((*(char *)(param_2 + 0x6b) == '\x01') &&
       ((*(char *)(param_2 + 0x6c) != '\0' ||
        ((*(char *)(param_2 + 0x6d) == '\x01' && (*(char *)(param_1 + 0x4c) == '\0')))))) {
      FUN_14818e38a(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30),param_1);
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar20 = *(int *)(param_1 + 0x38);
      if ((iVar20 != 0) == (*(longlong *)(param_1 + 8) == 0)) {
        FUN_14818dfcc(param_1,*(undefined4 *)(param_2 + 0x70));
      }
      if (iVar20 == 0) {
        *(undefined1 *)(param_1 + 0x4d) = 0;
        goto LAB_143a5e934;
      }
    }
    else if (*(longlong *)(param_1 + 8) == 0) {
      FUN_14818dfcc(param_1,*(undefined4 *)(param_2 + 0x70));
    }
    FUN_14818df1a(param_1);
    local_358 = (undefined1 *)0x0;
    local_350 = 0x1800000000;
    local_428 = (undefined1 *)0x0;
    local_420 = 0x1800000000;
    local_4f8 = (int *)0x0;
    local_4f0 = 0x1000000000;
    FUN_14818de24(param_1,local_578);
    local_588 = *(undefined8 *)(param_2 + 0x48);
    local_580 = *(undefined4 *)(param_2 + 0x50);
    local_598 = local_4f8;
    if (local_4f8 == (int *)0x0) {
      local_598 = local_578;
    }
    local_590 = (undefined4)local_4f0;
    FUN_14818c542(&local_598,&local_588,local_418);
    local_5a8 = *(undefined8 *)(param_2 + 0x48);
    local_5a0 = *(undefined4 *)(param_2 + 0x50);
    local_5b8 = local_4f8;
    if (local_4f8 == (int *)0x0) {
      local_5b8 = local_578;
    }
    local_5b0 = (undefined4)local_4f0;
    FUN_14818c223(&local_5b8,&local_5a8,local_4e8);
    iVar20 = (int)local_350;
    lVar10 = (longlong)(int)local_350;
    if (1 < lVar10) {
      puVar13 = local_358;
      if (local_358 == (undefined1 *)0x0) {
        puVar13 = local_418;
      }
      memset(local_338,0,0x2f0);
      local_340 = puVar13 + lVar10 * 8 + -8;
      local_348 = puVar13;
      fVar30 = logf((float)iVar20);
      local_338[0] = (int)(longlong)(fVar30 + fVar30);
      ppuVar6 = &local_348;
      do {
        puVar9 = (ulonglong *)*ppuVar6;
        puVar18 = (ulonglong *)ppuVar6[1];
        iVar20 = *(int *)(ppuVar6 + 2);
        iVar14 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar9) >> 3);
        uVar25 = (ulonglong)(iVar14 + 1);
        puVar12 = puVar9;
        puVar23 = puVar18;
        if (iVar20 != 0) {
LAB_143a5eb52:
          if (8 < (int)(uint)uVar25) {
            uVar24 = (uint)uVar25 >> 1;
            uVar25 = puVar9[uVar24];
            puVar9[uVar24] = *puVar9;
            *puVar9 = uVar25;
            puVar5 = puVar18 + 1;
            puVar8 = puVar9;
            do {
              puVar3 = puVar8 + 1;
              puVar19 = puVar8 + 1;
              do {
                puVar27 = puVar19;
                puVar8 = puVar3;
                if (puVar18 < puVar8) break;
                uVar24 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
                uVar26 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                uVar24 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
                uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                puVar3 = puVar8 + 1;
                puVar19 = puVar27 + 1;
              } while ((uVar24 >> 0x10 ^ uVar24) <= (uVar26 >> 0x10 ^ uVar26));
              puVar3 = puVar5 + -2;
              do {
                puVar19 = puVar5;
                puVar11 = puVar3;
                puVar5 = puVar19 + -1;
                if (puVar5 <= puVar9) break;
                uVar24 = ((uint)(*puVar5 >> 0x14) & 0xffff ^ (uint)(*puVar5 >> 4)) * -0x7a143595;
                uVar26 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                uVar24 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
                uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                puVar3 = puVar11 + -1;
              } while ((uVar24 >> 0x10 ^ uVar24) <= (uVar26 >> 0x10 ^ uVar26));
              if (puVar5 < puVar8) goto LAB_143a5ec8d;
              uVar25 = *puVar8;
              *puVar8 = *puVar5;
              *puVar5 = uVar25;
            } while( true );
          }
          if (puVar9 < puVar18) {
            do {
              puVar12 = puVar9;
              if (puVar9 + 1 <= puVar18) {
                puVar23 = puVar9 + 1;
                uVar25 = *puVar9;
                puVar5 = puVar9;
                do {
                  uVar16 = *puVar23;
                  uVar24 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
                  uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                  uVar26 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
                  uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
                  puVar12 = puVar23;
                  if ((uVar26 >> 0x10 ^ uVar26) <= (uVar24 >> 0x10 ^ uVar24)) {
                    uVar16 = uVar25;
                    puVar12 = puVar5;
                  }
                  puVar23 = puVar23 + 1;
                  uVar25 = uVar16;
                  puVar5 = puVar12;
                } while (puVar23 <= puVar18);
              }
              uVar25 = *puVar12;
              *puVar12 = *puVar18;
              *puVar18 = uVar25;
              puVar18 = puVar18 + -1;
            } while (puVar9 < puVar18);
          }
          goto LAB_143a5f0a6;
        }
LAB_143a5ed20:
        iVar20 = (int)uVar25;
        if (iVar20 != 0) {
          iVar14 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
          iVar22 = iVar14;
joined_r0x000143a5ed47:
          do {
            iVar17 = iVar14 * 2 + 1;
            if (iVar17 < iVar20) {
              iVar21 = iVar14 * 2 + 2;
              if ((iVar21 < iVar20) &&
                 (uVar24 = ((uint)(puVar9[iVar21] >> 0x14) & 0xffff ^ (uint)(puVar9[iVar21] >> 4)) *
                           -0x7a143595, uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb,
                 uVar26 = ((uint)(puVar9[iVar17] >> 0x14) & 0xffff ^ (uint)(puVar9[iVar17] >> 4)) *
                          -0x7a143595, uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb,
                 (uVar26 >> 0x10 ^ uVar26) <= (uVar24 >> 0x10 ^ uVar24))) {
                iVar17 = iVar21;
              }
              uVar16 = puVar9[iVar17];
              uVar1 = puVar9[iVar14];
              uVar24 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
              uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
              uVar26 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
              uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
              if ((uVar24 >> 0x10 ^ uVar24) < (uVar26 >> 0x10 ^ uVar26)) {
                puVar9[iVar14] = uVar16;
                puVar9[iVar17] = uVar1;
                iVar14 = iVar17;
                goto joined_r0x000143a5ed47;
              }
            }
            bVar29 = iVar22 != 0;
            iVar14 = iVar22 + -1;
            iVar22 = iVar14;
          } while (bVar29);
          if (1 < iVar20) {
            uVar16 = *puVar9;
            *puVar9 = puVar9[uVar25 - 1];
            puVar9[uVar25 - 1] = uVar16;
            if (iVar20 != 2) {
              do {
                uVar16 = uVar25 - 1;
                iVar20 = 0;
                iVar22 = 1;
                iVar14 = 0;
                do {
                  iVar20 = iVar20 + 2;
                  iVar17 = iVar22;
                  if (((longlong)iVar20 < (longlong)uVar16) &&
                     (uVar24 = ((uint)(puVar9[iVar20] >> 0x14) & 0xffff ^
                               (uint)(puVar9[iVar20] >> 4)) * -0x7a143595,
                     uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb,
                     uVar26 = ((uint)(puVar9[iVar22] >> 0x14) & 0xffff ^ (uint)(puVar9[iVar22] >> 4)
                              ) * -0x7a143595, uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb,
                     (uVar26 >> 0x10 ^ uVar26) <= (uVar24 >> 0x10 ^ uVar24))) {
                    iVar17 = iVar20;
                  }
                  uVar1 = puVar9[iVar17];
                  uVar2 = puVar9[iVar14];
                  uVar24 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
                  uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                  uVar26 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
                  uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
                  if ((uVar26 >> 0x10 ^ uVar26) <= (uVar24 >> 0x10 ^ uVar24)) break;
                  puVar9[iVar14] = uVar1;
                  puVar9[iVar17] = uVar2;
                  iVar20 = iVar17 * 2;
                  iVar22 = iVar17 * 2 + 1;
                  iVar14 = iVar17;
                } while ((longlong)iVar22 < (longlong)uVar16);
                uVar1 = *puVar9;
                *puVar9 = puVar9[uVar25 - 2];
                puVar9[uVar25 - 2] = uVar1;
                uVar25 = uVar16;
              } while (2 < uVar16);
            }
          }
        }
LAB_143a5f0a6:
        ppuVar6 = ppuVar6 + -3;
      } while (&local_348 <= ppuVar6);
    }
    iVar20 = (int)local_420;
    lVar10 = (longlong)(int)local_420;
    if (1 < lVar10) {
      puVar13 = local_428;
      if (local_428 == (undefined1 *)0x0) {
        puVar13 = local_4e8;
      }
      memset(local_338,0,0x2f0);
      local_340 = puVar13 + lVar10 * 8 + -8;
      local_348 = puVar13;
      fVar30 = logf((float)iVar20);
      local_338[0] = (int)(longlong)(fVar30 + fVar30);
      ppuVar6 = &local_348;
      do {
        puVar9 = (ulonglong *)*ppuVar6;
        puVar18 = (ulonglong *)ppuVar6[1];
        iVar20 = *(int *)(ppuVar6 + 2);
        iVar14 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar9) >> 3);
        uVar25 = (ulonglong)(iVar14 + 1);
        puVar12 = puVar18;
        puVar23 = puVar9;
        if (iVar20 != 0) {
LAB_143a5f155:
          if (8 < (int)(uint)uVar25) {
            uVar24 = (uint)uVar25 >> 1;
            uVar25 = puVar9[uVar24];
            puVar9[uVar24] = *puVar9;
            *puVar9 = uVar25;
            puVar5 = puVar18 + 1;
            puVar8 = puVar9;
            do {
              puVar3 = puVar8 + 1;
              puVar19 = puVar8 + 1;
              do {
                puVar8 = puVar19;
                puVar27 = puVar3;
                if (puVar18 < puVar8) break;
                uVar24 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
                uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                uVar26 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
                uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
                puVar3 = puVar27 + 1;
                puVar19 = puVar8 + 1;
              } while ((uVar26 >> 0x10 ^ uVar26) <= (uVar24 >> 0x10 ^ uVar24));
              puVar3 = puVar5 + -2;
              do {
                puVar19 = puVar5;
                puVar11 = puVar3;
                puVar5 = puVar19 + -1;
                if (puVar5 <= puVar9) break;
                uVar24 = ((uint)(*puVar5 >> 0x14) & 0xffff ^ (uint)(*puVar5 >> 4)) * -0x7a143595;
                uVar26 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                uVar24 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
                uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                puVar3 = puVar11 + -1;
              } while ((uVar24 >> 0x10 ^ uVar24) <= (uVar26 >> 0x10 ^ uVar26));
              if (puVar5 < puVar8) goto LAB_143a5f284;
              uVar25 = *puVar8;
              *puVar8 = *puVar5;
              *puVar5 = uVar25;
            } while( true );
          }
          if (puVar9 < puVar18) {
            do {
              puVar12 = puVar9;
              if (puVar9 + 1 <= puVar18) {
                puVar23 = puVar9 + 1;
                uVar25 = *puVar9;
                puVar5 = puVar9;
                do {
                  uVar16 = *puVar23;
                  uVar24 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
                  uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                  uVar26 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
                  uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
                  puVar12 = puVar23;
                  if ((uVar26 >> 0x10 ^ uVar26) <= (uVar24 >> 0x10 ^ uVar24)) {
                    uVar16 = uVar25;
                    puVar12 = puVar5;
                  }
                  puVar23 = puVar23 + 1;
                  uVar25 = uVar16;
                  puVar5 = puVar12;
                } while (puVar23 <= puVar18);
              }
              uVar25 = *puVar12;
              *puVar12 = *puVar18;
              *puVar18 = uVar25;
              puVar18 = puVar18 + -1;
            } while (puVar9 < puVar18);
          }
          goto LAB_143a5f678;
        }
LAB_143a5f317:
        iVar20 = (int)uVar25;
        if (iVar20 != 0) {
          iVar14 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
          iVar22 = iVar14;
joined_r0x000143a5f33e:
          do {
            iVar17 = iVar14 * 2 + 1;
            if (iVar17 < iVar20) {
              iVar21 = iVar14 * 2 + 2;
              if ((iVar21 < iVar20) &&
                 (uVar24 = ((uint)(puVar9[iVar21] >> 0x14) & 0xffff ^ (uint)(puVar9[iVar21] >> 4)) *
                           -0x7a143595, uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb,
                 uVar26 = ((uint)(puVar9[iVar17] >> 0x14) & 0xffff ^ (uint)(puVar9[iVar17] >> 4)) *
                          -0x7a143595, uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb,
                 (uVar26 >> 0x10 ^ uVar26) <= (uVar24 >> 0x10 ^ uVar24))) {
                iVar17 = iVar21;
              }
              uVar16 = puVar9[iVar17];
              uVar1 = puVar9[iVar14];
              uVar24 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
              uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
              uVar26 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
              uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
              if ((uVar24 >> 0x10 ^ uVar24) < (uVar26 >> 0x10 ^ uVar26)) {
                puVar9[iVar14] = uVar16;
                puVar9[iVar17] = uVar1;
                iVar14 = iVar17;
                goto joined_r0x000143a5f33e;
              }
            }
            bVar29 = iVar22 != 0;
            iVar14 = iVar22 + -1;
            iVar22 = iVar14;
          } while (bVar29);
          if (1 < iVar20) {
            uVar16 = *puVar9;
            *puVar9 = puVar9[uVar25 - 1];
            puVar9[uVar25 - 1] = uVar16;
            if (iVar20 != 2) {
              do {
                uVar16 = uVar25 - 1;
                iVar20 = 0;
                iVar22 = 1;
                iVar14 = 0;
                do {
                  iVar20 = iVar20 + 2;
                  iVar17 = iVar22;
                  if (((longlong)iVar20 < (longlong)uVar16) &&
                     (uVar24 = ((uint)(puVar9[iVar20] >> 0x14) & 0xffff ^
                               (uint)(puVar9[iVar20] >> 4)) * -0x7a143595,
                     uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb,
                     uVar26 = ((uint)(puVar9[iVar22] >> 0x14) & 0xffff ^ (uint)(puVar9[iVar22] >> 4)
                              ) * -0x7a143595, uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb,
                     (uVar26 >> 0x10 ^ uVar26) <= (uVar24 >> 0x10 ^ uVar24))) {
                    iVar17 = iVar20;
                  }
                  uVar1 = puVar9[iVar17];
                  uVar2 = puVar9[iVar14];
                  uVar24 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
                  uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                  uVar26 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
                  uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
                  if ((uVar26 >> 0x10 ^ uVar26) <= (uVar24 >> 0x10 ^ uVar24)) break;
                  puVar9[iVar14] = uVar1;
                  puVar9[iVar17] = uVar2;
                  iVar20 = iVar17 * 2;
                  iVar22 = iVar17 * 2 + 1;
                  iVar14 = iVar17;
                } while ((longlong)iVar22 < (longlong)uVar16);
                uVar1 = *puVar9;
                *puVar9 = puVar9[uVar25 - 2];
                puVar9[uVar25 - 2] = uVar1;
                uVar25 = uVar16;
              } while (2 < uVar16);
            }
          }
        }
LAB_143a5f678:
        ppuVar6 = ppuVar6 + -3;
      } while (&local_348 <= ppuVar6);
    }
    puVar13 = local_358;
    if (local_358 == (undefined1 *)0x0) {
      puVar13 = local_418;
    }
    lVar10 = (longlong)(int)local_350;
    uVar24 = 0;
    if (lVar10 != 0) {
      lVar28 = 0;
      uVar24 = 0;
      do {
        uVar26 = FUN_14818c7ad(*(undefined8 *)(puVar13 + lVar28));
        uVar24 = uVar26 >> 0xd ^ uVar24 - uVar26;
        uVar7 = uVar24 << 8 ^ (-0x61c88647 - uVar26) - uVar24;
        uVar15 = uVar7 >> 0xd ^ (uVar26 - uVar24) - uVar7;
        uVar24 = uVar15 >> 0xc ^ (uVar24 - uVar7) - uVar15;
        uVar26 = uVar24 << 0x10 ^ (uVar7 - uVar15) - uVar24;
        uVar7 = uVar26 >> 5 ^ (uVar15 - uVar24) - uVar26;
        uVar15 = uVar7 >> 3 ^ (uVar24 - uVar26) - uVar7;
        uVar24 = uVar15 << 10 ^ (uVar26 - uVar7) - uVar15;
        uVar24 = uVar24 >> 0xf ^ uVar7 - (uVar15 + uVar24);
        lVar28 = lVar28 + 8;
      } while (lVar10 * 8 != lVar28);
    }
    puVar13 = local_428;
    if (local_428 == (undefined1 *)0x0) {
      puVar13 = local_4e8;
    }
    lVar10 = (longlong)(int)local_420;
    if (lVar10 != 0) {
      lVar28 = 0;
      do {
        uVar26 = FUN_14818c4d2(*(undefined8 *)(puVar13 + lVar28));
        uVar24 = uVar26 >> 0xd ^ uVar24 - uVar26;
        uVar7 = uVar24 << 8 ^ (-0x61c88647 - uVar26) - uVar24;
        uVar15 = uVar7 >> 0xd ^ (uVar26 - uVar24) - uVar7;
        uVar24 = uVar15 >> 0xc ^ (uVar24 - uVar7) - uVar15;
        uVar26 = uVar24 << 0x10 ^ (uVar7 - uVar15) - uVar24;
        uVar7 = uVar26 >> 5 ^ (uVar15 - uVar24) - uVar26;
        uVar15 = uVar7 >> 3 ^ (uVar24 - uVar26) - uVar7;
        uVar24 = uVar15 << 10 ^ (uVar26 - uVar7) - uVar15;
        uVar24 = uVar24 >> 0xf ^ uVar7 - (uVar15 + uVar24);
        lVar28 = lVar28 + 8;
      } while (lVar10 * 8 != lVar28);
    }
    if (uVar24 != *(uint *)(param_1 + 0x48)) {
      *(uint *)(param_1 + 0x48) = uVar24;
      *(undefined1 *)(param_1 + 0x4d) = 1;
    }
    if (local_4f8 != (int *)0x0) {
      FUN_1400020a8();
    }
    local_5f8 = local_418;
    if (local_358 != (undefined1 *)0x0) {
      local_5f8 = local_358;
    }
    local_5e8 = local_4e8;
    if (local_428 != (undefined1 *)0x0) {
      local_5e8 = local_428;
    }
    local_610 = &local_348;
    local_348 = (undefined1 *)((ulonglong)local_348 & 0xffffffff00000000);
    local_578[0] = 0;
    local_600 = &local_5bc;
    local_5bc = 0;
    local_620 = param_1 + 0x20;
    local_628 = *(undefined1 *)(param_1 + 0x4d);
    local_618 = *(undefined8 *)(param_1 + 8);
    lVar10 = *(longlong *)(param_1 + 0x40);
    local_5c8 = (double)*(float *)(lVar10 + 0x14);
    local_5d0 = (double)*(float *)(lVar10 + 0x10);
    local_5d8 = (double)*(float *)(lVar10 + 0xc);
    local_5e0 = (int)local_420;
    local_5f0 = (int)local_350;
    local_608 = local_578;
    cVar4 = FUN_14818c8e4();
    if (cVar4 == '\0') {
      if ((*(uint *)(*(longlong *)(param_1 + 8) + 0xb8) <
           (uint)(local_578[0] + (int)local_348 + local_5bc)) && (*(char *)(param_1 + 0x4e) == '\0')
         ) {
        *(undefined1 *)(param_1 + 0x4e) = 1;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x4d) = 0;
    }
    if (local_428 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_358 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143a5e934:
  if ((local_48 ^ (ulonglong)auStack_648) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143a5ec8d:
  uVar25 = *puVar9;
  *puVar9 = *puVar5;
  *puVar5 = uVar25;
  iVar20 = iVar20 + -1;
  puVar19 = puVar19 + -2;
  if ((longlong)puVar11 - (longlong)puVar12 < (longlong)puVar23 - (longlong)puVar27) {
    if (puVar8 < puVar18) {
      *ppuVar6 = (undefined1 *)puVar8;
      ppuVar6[1] = (undefined1 *)puVar18;
      *(int *)(ppuVar6 + 2) = iVar20;
      ppuVar6 = ppuVar6 + 3;
    }
    puVar27 = puVar9;
    if (puVar5 <= puVar9 + 1) goto LAB_143a5f0a6;
  }
  else {
    if (puVar9 + 1 < puVar5) {
      *ppuVar6 = (undefined1 *)puVar9;
      ppuVar6[1] = (undefined1 *)puVar19;
      *(int *)(ppuVar6 + 2) = iVar20;
      ppuVar6 = ppuVar6 + 3;
    }
    puVar9 = puVar8;
    puVar19 = puVar18;
    puVar11 = puVar18;
    if (puVar18 <= puVar8) goto LAB_143a5f0a6;
  }
  iVar14 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar27) >> 3);
  uVar25 = (ulonglong)(iVar14 + 1);
  puVar12 = puVar27;
  puVar18 = puVar19;
  puVar23 = puVar11;
  if (iVar20 == 0) goto LAB_143a5ed20;
  goto LAB_143a5eb52;
LAB_143a5f284:
  uVar25 = *puVar9;
  *puVar9 = *puVar5;
  *puVar5 = uVar25;
  iVar20 = iVar20 + -1;
  puVar19 = puVar19 + -2;
  if ((longlong)puVar11 - (longlong)puVar23 < (longlong)puVar12 - (longlong)puVar27) {
    if (puVar8 < puVar18) {
      *ppuVar6 = (undefined1 *)puVar8;
      ppuVar6[1] = (undefined1 *)puVar18;
      *(int *)(ppuVar6 + 2) = iVar20;
      ppuVar6 = ppuVar6 + 3;
    }
    puVar27 = puVar9;
    if (puVar5 <= puVar9 + 1) goto LAB_143a5f678;
  }
  else {
    if (puVar9 + 1 < puVar5) {
      *ppuVar6 = (undefined1 *)puVar9;
      ppuVar6[1] = (undefined1 *)puVar19;
      *(int *)(ppuVar6 + 2) = iVar20;
      ppuVar6 = ppuVar6 + 3;
    }
    puVar11 = puVar18;
    puVar9 = puVar8;
    puVar19 = puVar18;
    if (puVar18 <= puVar8) goto LAB_143a5f678;
  }
  iVar14 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar27) >> 3);
  uVar25 = (ulonglong)(iVar14 + 1);
  puVar18 = puVar19;
  puVar12 = puVar11;
  puVar23 = puVar27;
  if (iVar20 == 0) goto LAB_143a5f317;
  goto LAB_143a5f155;
}



// FUNCTION 143a5f98a FUN_143a5f98a body=1264 status=ok
// SIG undefined FUN_143a5f98a(void)

void FUN_143a5f98a(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_143a5e34a(param_2);
  FUN_14818ea1e(param_2);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a5fdd5;
    if (iVar7 != 1) goto LAB_143a5f9ed;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a5fdd5;
  }
  else {
LAB_143a5f9ed:
    if (iVar7 == 0x10) goto LAB_143a5fdd5;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a5fdd5:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a5fdd5;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a5fb5a;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a6cf3b);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a5fb5a:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a5fbda;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a5fbda:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14addd1b0;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14addd190;
    local_68[0] = &LAB_143a6f310;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb3d564);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a5fec8 FUN_143a5fec8 body=224 status=ok
// SIG undefined FUN_143a5fec8(void)

void FUN_143a5fec8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  FUN_146f7b152(param_4,*(int *)*param_1 * 2);
  uVar1 = *(uint *)*param_1;
  pvVar3 = (void *)*param_2;
  iVar2 = (int)param_4[1];
  iVar5 = iVar2 + uVar1;
  *(int *)(param_4 + 1) = iVar5;
  iVar4 = *(int *)((longlong)param_4 + 0xc);
  if ((uint)(iVar4 - iVar2) < uVar1) {
    FUN_1449e2712(param_4,iVar2);
  }
  else if (uVar1 == 0) goto LAB_143a5ff47;
  memcpy((void *)((longlong)iVar2 * 0x10 + *param_4),pvVar3,(longlong)(int)uVar1 << 4);
  iVar5 = (int)param_4[1];
  iVar4 = *(int *)((longlong)param_4 + 0xc);
LAB_143a5ff47:
  uVar1 = *(uint *)*param_1;
  pvVar3 = (void *)*param_3;
  *(uint *)(param_4 + 1) = uVar1 + iVar5;
  if ((uint)(iVar4 - iVar5) < uVar1) {
    FUN_1449e2712(param_4,iVar5);
  }
  else if (uVar1 == 0) {
    return;
  }
  memcpy((void *)((longlong)iVar5 * 0x10 + *param_4),pvVar3,(longlong)(int)uVar1 << 4);
  return;
}



// FUNCTION 143a5ffa8 FUN_143a5ffa8 body=1145 status=ok
// SIG undefined FUN_143a5ffa8(void)

ulonglong FUN_143a5ffa8(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                       undefined8 param_5,double *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  float fVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined4 local_120;
  char **local_118;
  undefined1 *local_110;
  int *local_108;
  float local_f8;
  int local_f4;
  uint local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  int local_e0;
  undefined1 local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  char *local_c8;
  undefined8 local_c0;
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
  
  uVar12 = param_4 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar6 = *(longlong *)(param_3 + 0x30);
  local_f4 = *(int *)(param_3 + 0x38);
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uVar4 = *(undefined1 *)(param_1 + 0x69);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3d4c0) && (FUN_144b3d300(&DAT_14cb3d4c0), DAT_14cb3d4c0 == -1)) {
    local_c8 = "NiagaraRigidMeshCollisionQuery";
    local_c0 = CONCAT35(local_c0._5_3_,0x1e);
    uVar10 = FUN_14001a6c0();
    DAT_14cb3d4b8 = (char *)(ulonglong)uVar10;
    _Init_thread_footer(&DAT_14cb3d4c0);
  }
  local_a4 = 0;
  local_c0 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_ac = 0;
  local_c8 = DAT_14cb3d4b8;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  local_120 = (undefined4)param_4;
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    local_108 = &local_e0;
    local_dc = 0;
    local_e0 = 1 << ((byte)uVar12 & 0x1f);
    dVar1 = param_6[2];
    dVar2 = param_6[1];
    dVar3 = *param_6;
    local_120 = DAT_14cad0ec4;
  }
  else {
    dVar1 = param_6[2];
    dVar2 = param_6[1];
    dVar3 = *param_6;
    local_108 = &DAT_14cad0f08;
  }
  local_e4 = (float)(dVar1 * 0.5);
  local_e8 = (float)(dVar2 * 0.5);
  local_ec = (float)(dVar3 * 0.5);
  local_118 = &local_c8;
  local_f0 = 1;
  local_110 = &DAT_14cad0f10;
  local_128 = &local_d8;
  local_b8 = uVar4;
  FUN_14052f4ca(param_2,&local_f0,param_5,param_7);
  lVar7 = local_d8;
  if ((int)uStack_d0 != 0) {
    uVar12 = (longlong)(int)uStack_d0 * 0x48;
    uVar13 = 0;
    do {
      iVar5 = *(int *)(lVar7 + 0x24 + uVar13);
      if ((((((iVar5 != 0) && (uVar10 = *(uint *)(lVar7 + 0x20 + uVar13), -1 < (int)uVar10)) &&
            ((int)uVar10 < DAT_14c9647dc)) &&
           ((plVar11 = (longlong *)
                       ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
            plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar5)))) &&
          (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 &&
           ((lVar15 = *plVar11, lVar15 != 0 && (cVar8 = FUN_14818f50e(lVar15), cVar8 == '\0'))))))
         && ((lVar15 = *(longlong *)(lVar15 + 0xa8), lVar15 != 0 &&
             (cVar8 = FUN_14818f566(param_1,lVar15), cVar8 == '\0')))) {
        local_ec = 0.0;
        local_f0 = *(uint *)(lVar15 + 0xc);
        if ((int)local_f0 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((local_f0 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_f0 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        fVar9 = *(float *)(lVar15 + 0x10);
        if (*(float *)(lVar15 + 0x10) == 0.0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          fVar14 = (float)(DAT_14c964868 + 1);
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar16) {
            local_f8 = fVar14;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,fVar14);
            fVar14 = local_f8;
          }
          LOCK();
          fVar9 = *(float *)(lVar15 + 0x10);
          bVar16 = fVar9 == 0.0;
          if (bVar16) {
            *(float *)(lVar15 + 0x10) = fVar14;
            fVar9 = 0.0;
          }
          UNLOCK();
          if (bVar16) {
            fVar9 = fVar14;
          }
        }
        local_ec = fVar9;
        FUN_1407a297a((undefined8 *)(param_3 + 0x30),&local_f0);
      }
      uVar13 = uVar13 + 0x48;
    } while (uVar12 != uVar13);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_14819d59b(*(undefined8 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x38));
  uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
  if (local_f4 == *(int *)(param_3 + 0x38)) {
    uVar10 = FUN_14819d966(lVar6,*(undefined8 *)(param_3 + 0x30));
    uVar12 = (ulonglong)uVar10 ^ 1;
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 143a60422 FUN_143a60422 body=55 status=ok
// SIG undefined FUN_143a60422(void)

void FUN_143a60422(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3d1d8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3d1d8 = FUN_14171c317(FUN_146471cb4,uVar1,L"ESetResolutionMethod");
  }
  return;
}



// FUNCTION 143a604c0 FUN_143a604c0 body=2134 status=ok
// SIG undefined FUN_143a604c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a604c0(longlong *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 unaff_RBP;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1a1;
  undefined8 local_1a0;
  longlong local_198;
  undefined *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [56];
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 local_90 [56];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined6 uVar14;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (((int)param_1[6] != 0) || ((int)param_1[8] != 0)) {
    puVar6 = (undefined8 *)FUN_14818ffe2(param_1);
    local_58 = (undefined1 *)0x0;
    local_50 = 0x100000000;
    local_a0 = (undefined1 *)0x0;
    local_98 = 0x100000000;
    if (0 < (int)param_1[6]) {
      uVar4 = (int)param_1[6] * 0x1c;
      uVar5 = uVar4 >> 2;
      uVar11 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar11 = DAT_14ca84e48;
      }
      lVar3 = *param_1;
      uStack_180 = (undefined8 *)CONCAT44(uStack_180._4_4_,0x4109);
      if (DAT_14ca84e48 <= uVar5) {
        uVar5 = DAT_14ca84e48;
      }
      local_178 = 0;
      local_188 = CONCAT44(uVar5 + (uVar5 == 0),uVar11 + (uVar11 == 0));
      uVar12 = *(longlong *)(lVar3 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar7 = uVar12 + 0x150;
      if (*(ulonglong *)(lVar3 + 0x78) < uVar7) {
        FUN_140023dd8((longlong *)(lVar3 + 0x70),0x160);
        uVar12 = *(longlong *)(lVar3 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar7 = uVar12 + 0x150;
      }
      *(ulonglong *)(lVar3 + 0x70) = uVar7;
      FUN_1456bd266(uVar12,L"NiagaraIndirectGenArgs",&local_188,0);
      iVar2 = *(int *)(lVar3 + 400);
      uVar5 = iVar2 + 1;
      *(uint *)(lVar3 + 400) = uVar5;
      if (*(uint *)(lVar3 + 0x194) < uVar5) {
        FUN_144737178(lVar3 + 0x188);
      }
      *(ulonglong *)(*(longlong *)(lVar3 + 0x188) + (longlong)iVar2 * 8) = uVar12;
      *(int *)(uVar12 + 0x7c) = *(int *)(lVar3 + 400) + -1;
      lVar3 = *param_1;
      lVar15 = param_1[5];
      iVar2 = *(int *)(lVar3 + 0x590);
      uVar5 = iVar2 + 1;
      *(uint *)(lVar3 + 0x590) = uVar5;
      if (*(uint *)(lVar3 + 0x594) < uVar5) {
        FUN_144775ac8((longlong *)(lVar3 + 0x588));
      }
      uVar7 = local_50;
      lVar3 = *(longlong *)(lVar3 + 0x588);
      lVar9 = (longlong)iVar2 * 0x120;
      *(undefined2 *)(lVar3 + lVar9) = 0;
      *(ulonglong *)(lVar3 + 8 + lVar9) = uVar12;
      *(longlong *)(lVar3 + 0x10 + lVar9) = lVar15;
      *(ulonglong *)(lVar3 + 0x18 + lVar9) = (ulonglong)uVar4;
      *(undefined8 *)(lVar3 + 0x20 + lVar9) = 0;
      *(undefined8 *)(lVar3 + 0x30 + lVar9) = 0;
      *(undefined8 *)(lVar3 + 0x60 + lVar9) = 0;
      *(undefined8 *)(lVar3 + 0x70 + lVar9) = 0;
      *(undefined8 *)(lVar3 + 0xa0 + lVar9) = 0;
      *(undefined8 *)(lVar3 + 0xb0 + lVar9) = 0;
      *(undefined8 *)(lVar3 + 0xe0 + lVar9) = 0;
      *(undefined8 *)(lVar3 + 0xf0 + lVar9) = 0;
      *(byte *)(uVar12 + 0x24) = *(byte *)(uVar12 + 0x24) | 0x80;
      lVar3 = param_1[1];
      lVar15 = (longlong)(int)local_50;
      uVar5 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar5);
      if (local_50._4_4_ < uVar5) {
        FUN_14819db06(local_90,uVar7 & 0xffffffff);
      }
      uVar7 = local_98;
      puVar10 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar10 = local_90;
      }
      lVar15 = lVar15 * 0x38;
      uVar8 = *(undefined8 *)(lVar3 + 0x58);
      *(undefined8 *)(puVar10 + lVar15) = 0xffffffffffffffff;
      *(undefined4 *)(puVar10 + lVar15 + 8) = 0xffffffff;
      *(undefined8 *)(puVar10 + lVar15 + 0x10) = uVar8;
      puVar10[lVar15 + 0x18] = 2;
      *(undefined8 *)(puVar10 + lVar15 + 0x1c) = 0x1000000400;
      *(undefined4 *)(puVar10 + lVar15 + 0x24) = 0;
      puVar10[lVar15 + 0x30] = 0;
      lVar15 = (longlong)(int)local_98;
      uVar5 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,uVar5);
      if (local_98._4_4_ < uVar5) {
        FUN_14819db06(local_d8,uVar7 & 0xffffffff);
      }
      puVar10 = local_a0;
      if (local_a0 == (undefined1 *)0x0) {
        puVar10 = local_d8;
      }
      lVar15 = lVar15 * 0x38;
      uVar8 = *(undefined8 *)(lVar3 + 0x58);
      *(undefined8 *)(puVar10 + lVar15) = 0xffffffffffffffff;
      *(undefined4 *)(puVar10 + lVar15 + 8) = 0xffffffff;
      *(undefined8 *)(puVar10 + lVar15 + 0x10) = uVar8;
      puVar10[lVar15 + 0x18] = 2;
      *(undefined8 *)(puVar10 + lVar15 + 0x1c) = 0x40000000010;
      *(undefined4 *)(puVar10 + lVar15 + 0x24) = 0;
      puVar10[lVar15 + 0x30] = 0;
      lVar15 = *param_1;
      puVar16 = (undefined8 *)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar16 + 9;
      if (*(undefined8 **)(lVar15 + 0x78) < puVar17) {
        FUN_140023dd8((longlong *)(lVar15 + 0x70),0x50);
        puVar16 = (undefined8 *)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar17 = puVar16 + 9;
      }
      *(undefined8 **)(lVar15 + 0x70) = puVar17;
      puVar16[1] = *(undefined8 *)(uVar12 + 8);
      puVar16[2] = 0;
      *(undefined1 *)(puVar16 + 3) = 3;
      *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
      *puVar16 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar16 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
      puVar16[7] = 0;
      puVar16[8] = uVar12;
      iVar2 = *(int *)(lVar15 + 0x1a0);
      *(uint *)(lVar15 + 0x1a0) = iVar2 + 1U;
      if (*(uint *)(lVar15 + 0x1a4) < iVar2 + 1U) {
        FUN_1447568fc(lVar15 + 0x198,iVar2);
      }
      *(undefined8 **)(*(longlong *)(lVar15 + 0x198) + (longlong)iVar2 * 8) = puVar16;
      *(int *)((longlong)puVar16 + 0x1c) = *(int *)(lVar15 + 0x1a0) + -1;
      *puVar6 = puVar16;
      *(int *)(puVar6 + 1) = (int)param_1[6];
      uVar13 = DAT_14ca84f2c;
      puVar6[2] = _DAT_14ca84f24;
      *(undefined4 *)(puVar6 + 3) = uVar13;
      puVar6[4] = *(undefined8 *)(lVar3 + 0x68);
      lVar3 = *param_1;
      lVar15 = param_1[4];
      puVar16 = (undefined8 *)(*(longlong *)(lVar3 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar16 + 8;
      if (*(undefined8 **)(lVar3 + 0x78) < puVar17) {
        FUN_140023dd8((longlong *)(lVar3 + 0x70),0x48);
        puVar16 = (undefined8 *)(*(longlong *)(lVar3 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar17 = puVar16 + 8;
      }
      *(undefined8 **)(lVar3 + 0x70) = puVar17;
      puVar16[1] = *(undefined8 *)(lVar15 + 8);
      puVar16[2] = 0;
      *(undefined1 *)(puVar16 + 3) = 2;
      *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar16 + 5) = 0;
      *puVar16 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar16 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar16 + 0x32) = 0;
      puVar16[7] = lVar15;
      iVar2 = *(int *)(lVar3 + 0x1a0);
      *(uint *)(lVar3 + 0x1a0) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0x1a4) < iVar2 + 1U) {
        FUN_1447568fc(lVar3 + 0x198,iVar2);
      }
      *(undefined8 **)(*(longlong *)(lVar3 + 0x198) + (longlong)iVar2 * 8) = puVar16;
      *(int *)((longlong)puVar16 + 0x1c) = *(int *)(lVar3 + 0x1a0) + -1;
      puVar6[5] = puVar16;
    }
    lVar3 = *param_1;
    local_188 = FUN_14818ffe2(param_1);
    local_178 = param_1[7];
    param_1[7] = 0;
    local_170 = param_1[8];
    param_1[8] = 0;
    local_130 = 0;
    puVar10 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar10 = local_90;
    }
    uStack_180 = puVar6;
    FUN_14819dc12(&local_168,puVar10,local_50 & 0xffffffff);
    local_e8 = 0;
    puVar10 = local_a0;
    if (local_a0 == (undefined1 *)0x0) {
      puVar10 = local_d8;
    }
    FUN_14819dc12(&local_120,puVar10,local_98 & 0xffffffff);
    uVar8 = FUN_14818ffe2(param_1);
    FUN_14819dcce();
    FUN_140069376(lVar3);
    uVar14 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
    uVar13 = (undefined4)CONCAT62(uVar14,0x12);
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar13 = (undefined4)CONCAT62(uVar14,0x14);
    }
    puVar1 = (ulonglong *)(lVar3 + 0x70);
    puVar17 = (undefined8 *)(*(longlong *)(lVar3 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar17 + 0x4d;
    if (*(undefined8 **)(lVar3 + 0x78) < puVar6) {
      FUN_140023dd8(puVar1,0x270);
      puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar17 + 0x4d;
    }
    *puVar1 = (ulonglong)puVar6;
    local_198 = DAT_14cb3d638;
    if (DAT_14cb3d638 != 0) {
      LOCK();
      *(int *)(DAT_14cb3d638 + 8) = *(int *)(DAT_14cb3d638 + 8) + 1;
      UNLOCK();
    }
    local_190 = &DAT_14cb3d5f0;
    local_1b8 = 0;
    local_1a0 = uVar8;
    FUN_140068f1a(puVar17,&local_1a1,&local_1a0,uVar13);
    *puVar17 = &PTR_FUN_14addd2b0;
    *(undefined4 *)(puVar17 + 0x37) = (undefined4)local_188;
    *(undefined4 *)((longlong)puVar17 + 0x1bc) = local_188._4_4_;
    *(undefined4 *)(puVar17 + 0x38) = (undefined4)uStack_180;
    *(undefined4 *)((longlong)puVar17 + 0x1c4) = uStack_180._4_4_;
    puVar17[0x39] = local_178;
    local_178 = 0;
    *(undefined4 *)(puVar17 + 0x3a) = (undefined4)local_170;
    *(undefined4 *)((longlong)puVar17 + 0x1d4) = local_170._4_4_;
    local_170 = 0;
    if (local_130 == 0) {
      puVar17[0x41] = local_138;
      puVar17[0x3f] = local_148;
      puVar17[0x40] = uStack_140;
      puVar17[0x3d] = local_158;
      puVar17[0x3e] = uStack_150;
      *(undefined4 *)(puVar17 + 0x3b) = local_168;
      *(undefined4 *)((longlong)puVar17 + 0x1dc) = uStack_164;
      *(undefined4 *)(puVar17 + 0x3c) = uStack_160;
      *(undefined4 *)((longlong)puVar17 + 0x1e4) = uStack_15c;
    }
    puVar17[0x42] = local_130;
    local_130 = 0;
    *(undefined4 *)(puVar17 + 0x43) = (undefined4)local_128;
    *(undefined4 *)((longlong)puVar17 + 0x21c) = local_128._4_4_;
    local_128 = 0x100000000;
    if (local_e8 == 0) {
      puVar17[0x4a] = local_f0;
      puVar17[0x48] = local_100;
      puVar17[0x49] = uStack_f8;
      puVar17[0x46] = local_110;
      puVar17[0x47] = uStack_108;
      *(undefined4 *)(puVar17 + 0x44) = local_120;
      *(undefined4 *)((longlong)puVar17 + 0x224) = uStack_11c;
      *(undefined4 *)(puVar17 + 0x45) = uStack_118;
      *(undefined4 *)((longlong)puVar17 + 0x22c) = uStack_114;
    }
    puVar17[0x4b] = local_e8;
    local_e8 = 0;
    *(undefined4 *)(puVar17 + 0x4c) = (undefined4)local_e0;
    *(undefined4 *)((longlong)puVar17 + 0x264) = local_e0._4_4_;
    local_e0 = 0x100000000;
    iVar2 = *(int *)(lVar3 + 0x170);
    *(uint *)(lVar3 + 0x170) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x174) < iVar2 + 1U) {
      FUN_14470e57a(lVar3 + 0x168,iVar2);
    }
    *(undefined8 **)(*(longlong *)(lVar3 + 0x168) + (longlong)iVar2 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x2c) = *(int *)(lVar3 + 0x170) + -1;
    FUN_140069100(lVar3,puVar17);
    FUN_1481900b6(&local_120);
    FUN_1481900b6(&local_168);
    FUN_144b35255(local_178,local_170 & 0xffffffff);
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_144b35255(param_1[7],(int)param_1[8]);
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0x44) != 0) {
      FUN_14819e26a(param_1 + 7);
    }
    param_1[9] = 0;
    FUN_1481900b6(local_d8);
    FUN_1481900b6(local_90);
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a60d19 FUN_143a60d19 body=49 status=ok
// SIG undefined FUN_143a60d19(void)

void FUN_143a60d19(void)

{
  FUN_1447a1747(DAT_14cb3d2e0,DAT_14cb3d2e8);
  if (DAT_14cb3d2e0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143a60d4a FUN_143a60d4a body=55 status=ok
// SIG undefined FUN_143a60d4a(void)

void FUN_143a60d4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3d2f8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3d2f8 = FUN_14171c317(FUN_146471dfe,uVar1,L"ENDISkeletalMesh_SourceMode");
  }
  return;
}



// FUNCTION 143a60d81 FUN_143a60d81 body=55 status=ok
// SIG undefined FUN_143a60d81(void)

void FUN_143a60d81(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3d310 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3d310 = FUN_14171c317(FUN_146471e2d,uVar1,L"ENDISkeletalMesh_SkinningMode");
  }
  return;
}



// FUNCTION 143a60db8 FUN_143a60db8 body=69 status=ok
// SIG undefined FUN_143a60db8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a60db8(void)

{
  _DAT_14cb3d340 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a60dfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3d348,1);
  return;
}



// FUNCTION 143a60dfd FUN_143a60dfd body=339 status=ok
// SIG undefined FUN_143a60dfd(void)

int FUN_143a60dfd(int param_1)

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
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb366a0 == (longlong *)0x0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_140eca530;
    local_48 = &LAB_148063819;
    local_50 = &LAB_1460672b6;
    local_58 = L"Niagara";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x130;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
  }
  plVar1 = DAT_14cb366a0;
  lVar2 = DAT_14cb366a0[0x22];
  if (lVar2 == 0) {
    (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
    lVar2 = plVar1[0x22];
  }
  if (*(byte *)(lVar2 + 0xef) == 0) {
    param_1 = param_1 * 2;
  }
  else if (1 < *(byte *)(lVar2 + 0xef) - 1) {
    FUN_140033559(".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraDataInterfaceSkeletalMesh.cpp"
                  ,0x98,L"GpuUniformSamplingFormat %d is invalid");
    param_1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a60f52 FUN_143a60f52 body=156 status=ok
// SIG undefined FUN_143a60f52(void)

undefined8 * FUN_143a60f52(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    uVar3 = param_2[1];
    lVar4 = param_2[2];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)param_1[2];
    param_1[1] = uVar3;
    param_1[2] = lVar4;
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
    param_2[1] = 0;
    plVar5 = (longlong *)param_2[2];
    if (plVar5 != (longlong *)0x0) {
      param_2[2] = 0;
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
  }
  return param_1;
}



// FUNCTION 143a60fee FUN_143a60fee body=1433 status=ok
// SIG undefined FUN_143a60fee(void)

void FUN_143a60fee(longlong param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  PSRWLOCK SRWLock;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  longlong *local_90;
  PSRWLOCK local_88;
  longlong local_80;
  code *local_78 [2];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  SRWLock = (PSRWLOCK)(param_1 + 8);
  AcquireSRWLockExclusive(SRWLock);
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_143a613cd:
    plVar11 = (longlong *)0x0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x10);
    plVar11 = (longlong *)0x0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x14) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_143a613cd;
      plVar11 = (longlong *)*puVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  uVar2 = *(uint *)(param_1 + 0x1c) ^ 1;
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_1449bb7ea(param_1);
    uVar2 = *(uint *)(param_1 + 0x1c);
  }
  lVar13 = param_1 + 0x28;
  uVar9 = (ulonglong)(int)uVar2;
  uVar7 = (ulonglong)(int)(uVar2 ^ 1);
  if ((*(int *)(param_1 + 0x30 + uVar7 * 0x10) != *(int *)(param_1 + 0x30 + uVar9 * 0x10)) ||
     (*(char *)(param_1 + 0x78) == '\x01')) {
    FUN_140491812(uVar7 * 0x10 + lVar13,uVar9 * 0x10 + lVar13);
    uVar9 = (ulonglong)*(int *)(param_1 + 0x1c);
    uVar7 = uVar9 ^ 1;
  }
  local_80 = lVar13;
  if ((*(int *)(param_1 + 0x50 + uVar7 * 0x10) != *(int *)(param_1 + 0x50 + uVar9 * 0x10)) ||
     (*(char *)(param_1 + 0x78) == '\x01')) {
    FUN_14049186a(uVar7 * 0x10 + param_1 + 0x48,uVar9 * 0x10 + param_1 + 0x48);
  }
  if (param_3 == '\0') goto LAB_143a6138a;
  lVar13 = plVar11[0xcb];
  if (lVar13 == 0) {
    lVar13 = plVar11[0xcc];
    if ((DAT_14c950c29 == '\x01') && (lVar13 != 0)) goto LAB_143a614c2;
    if (lVar13 == 0) goto LAB_143a6138a;
  }
  else if (DAT_14c950c29 == '\x01') {
LAB_143a614c2:
    FUN_1456cec3c(lVar13);
  }
  if (DAT_14cb06da8 == 0) {
    local_b0 = local_78;
    local_78[0] = FUN_1449e2820;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_1464003b0;
    local_b8 = &LAB_147d17bdf;
    local_c0 = &LAB_1417edf22;
    local_c8 = L"Engine";
    local_d0 = 0;
    local_d8 = 0x10000000;
    local_e0 = 8;
    local_e8 = CONCAT44(local_e8._4_4_,0x588);
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_143a6138a;
  plVar14 = (longlong *)plVar11[0xcb];
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)plVar11[0xcc];
    if ((DAT_14c950c29 == '\x01') && (plVar14 != (longlong *)0x0)) goto LAB_143a614cf;
    if (plVar14 != (longlong *)0x0) goto LAB_143a61192;
LAB_143a61419:
    plVar14 = (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 != '\0') {
LAB_143a614cf:
      FUN_1456cec3c(plVar14);
      if (DAT_14cb06da8 == 0) {
        local_b0 = local_78;
        local_78[0] = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = &LAB_1464003b0;
        local_b8 = &LAB_147d17bdf;
        local_c0 = &LAB_1417edf22;
        local_c8 = L"Engine";
        local_d0 = 0;
        local_d8 = 0x10000000;
        local_e0 = 8;
        local_e8 = CONCAT44(local_e8._4_4_,0x588);
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
    }
LAB_143a61192:
    if ((*(int *)(plVar14[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
        DAT_14cb06da8 + 0x30)) goto LAB_143a61419;
  }
  plVar3 = (longlong *)(**(code **)(*plVar11 + 0xa90))(plVar11);
  uVar7 = (ulonglong)*(byte *)((longlong)plVar3 + 0x1c);
  if ((int)(uint)*(byte *)((longlong)plVar3 + 0x1c) < *(int *)(param_1 + 0x70)) {
    lVar13 = uVar7 * 0x48 + 0x28;
    do {
      lVar4 = (**(code **)(*plVar14 + 0x318))(plVar14,uVar7 & 0xffffffff);
      if (lVar4 == 0) {
        local_68 = plVar14[3];
        FUN_1400021e4(&local_68,local_78);
        if (local_78[0] != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if ((0 < *(int *)(*(longlong *)(param_1 + 0x68) + -0x28 + lVar13)) &&
              (lVar4 = (**(code **)(*plVar14 + 0x318))(plVar14,uVar7 & 0xffffffff),
              (*(byte *)(lVar4 + 0xd0) & 4) != 0)) {
        puVar8 = *(undefined8 **)(*plVar3 + uVar7 * 8);
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
          UNLOCK();
        }
        local_90 = plVar3;
        local_88 = SRWLock;
        uVar5 = FUN_1417c143e(plVar11,uVar7 & 0xffffffff,0);
        lVar4 = local_80;
        lVar6 = (longlong)*(int *)(param_1 + 0x1c) * 0x10;
        local_e8 = uVar5;
        FUN_147d1b444(plVar11,lVar6 + *(longlong *)(param_1 + 0x68) + lVar13 + -0x20,
                      lVar6 + local_80,puVar8);
        lVar6 = (longlong)*(int *)(param_1 + 0x1c) * 0x10;
        local_e8 = uVar5;
        FUN_147d1ba60(plVar11,lVar6 + *(longlong *)(param_1 + 0x68) + lVar13,lVar6 + lVar4,puVar8);
        lVar4 = *(longlong *)(param_1 + 0x68);
        uVar10 = (ulonglong)*(int *)(param_1 + 0x1c);
        uVar9 = uVar10 ^ 1;
        lVar6 = uVar9 * 0x10 + lVar4;
        lVar12 = uVar10 * 0x10 + lVar4;
        if (*(int *)(lVar13 + -0x18 + lVar6) != *(int *)(lVar13 + -0x18 + lVar12)) {
          FUN_140de4b5e(lVar6 + lVar13 + -0x20,lVar12 + lVar13 + -0x20);
          lVar4 = *(longlong *)(param_1 + 0x68);
          uVar10 = (ulonglong)*(int *)(param_1 + 0x1c);
          uVar9 = uVar10 ^ 1;
        }
        SRWLock = local_88;
        lVar6 = uVar9 * 0x10 + lVar4;
        lVar4 = uVar10 * 0x10 + lVar4;
        if (*(int *)(lVar13 + 8 + lVar6) != *(int *)(lVar13 + 8 + lVar4)) {
          FUN_140de4b5e(lVar6 + lVar13,lVar4 + lVar13);
        }
        plVar3 = local_90;
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar8 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + 0x48;
    } while ((int)uVar7 < *(int *)(param_1 + 0x70));
  }
LAB_143a6138a:
  *(undefined1 *)(param_1 + 0x78) = 0;
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a61588 FUN_143a61588 body=2362 status=ok
// SIG undefined FUN_143a61588(void)

void FUN_143a61588(longlong param_1,int param_2,undefined4 param_3)

{
  PSRWLOCK pRVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  uint *puVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  undefined1 auStack_488 [40];
  undefined4 local_460;
  undefined8 *local_458;
  undefined8 *local_450;
  longlong *local_448;
  uint *local_440;
  PSRWLOCK local_438;
  undefined1 *local_430;
  undefined4 *local_428;
  undefined4 local_41c;
  undefined1 *local_418;
  undefined1 **local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 *local_388;
  undefined8 local_380;
  undefined1 local_378 [256];
  undefined1 *local_278;
  undefined8 local_270;
  undefined1 local_268 [256];
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 local_158 [32];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_488;
  pRVar1 = (PSRWLOCK)(param_1 + 8);
  local_41c = param_3;
  AcquireSRWLockExclusive(pRVar1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0x2000000000;
  local_168 = (undefined1 *)0x0;
  local_160 = 0x2000000000;
  local_278 = (undefined1 *)0x0;
  local_270 = 0x2000000000;
  uVar15 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44);
  if ((int)uVar15 < 0) {
LAB_143a61ebc:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar15);
  }
  local_270._4_4_ = 0x20;
  if (0x20 < uVar15) {
    FUN_14819e3aa(local_268);
    uVar15 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44);
    if ((int)uVar15 < 0) goto LAB_143a61ebc;
  }
  if ((int)local_270._4_4_ < (int)uVar15) {
    FUN_14819e3aa(local_378);
  }
  local_448 = (longlong *)(param_1 + 0x10);
  puVar24 = (uint *)(param_1 + 0x20);
  uVar15 = *(uint *)(param_1 + 0x38);
  puVar11 = (undefined8 *)(ulonglong)uVar15;
  local_438 = pRVar1;
  if (uVar15 == 0) {
    uVar19 = 1;
    uVar27 = 0;
    iVar20 = 0;
    uVar8 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar9 = puVar24;
    }
    uVar8 = *puVar9;
    if (uVar8 == 0) {
      iVar20 = uVar15 + 0x1e;
      if (-1 < (int)(uVar15 - 1)) {
        iVar20 = uVar15 - 1;
      }
      uVar27 = 0;
      uVar19 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar19 = uVar27;
      }
      iVar20 = 0;
      do {
        if (uVar19 == uVar27) goto LAB_143a616c0;
        iVar20 = iVar20 + 0x20;
        uVar8 = puVar9[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar27 = 0;
      iVar20 = 0;
    }
    uVar19 = (ulonglong)(-uVar8 & uVar8);
    uVar3 = uVar19 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar8 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar15 <= (int)uVar8) {
      uVar8 = uVar15;
    }
  }
  if (uVar8 != uVar15) {
    uVar15 = 0xffffffff;
    local_450 = puVar11;
    local_440 = puVar24;
    do {
      uVar6 = local_50;
      uVar5 = local_160;
      uVar3 = local_270;
      puVar9 = (uint *)(*local_448 + (longlong)(int)uVar8 * 0x20);
      iVar26 = *(int *)(*local_448 + 4 + (longlong)(int)uVar8 * 0x20);
      if ((iVar26 == 0) || (uVar8 = *puVar9, (int)uVar8 < 0)) {
LAB_143a61e2f:
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        if ((int)uVar8 < DAT_14c9647dc) {
          plVar21 = (longlong *)
                    ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
          if (((plVar21 == (longlong *)0x0) || ((int)plVar21[2] != iVar26)) ||
             ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)) goto LAB_143a61e2f;
          lVar18 = *plVar21;
        }
      }
      if (param_2 == 0) {
        **(undefined1 **)(puVar9 + 2) = 0;
      }
      if ((lVar18 == 0) ||
         ((*(longlong *)(puVar9 + 4) != 0 && (*(int *)(*(longlong *)(puVar9 + 4) + 8) == 1)))) {
LAB_143a61ce7:
        lVar18 = (longlong)(int)local_50;
        uVar8 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar8);
        if (local_50._4_4_ < uVar8) {
          FUN_14819e4a0(local_158,uVar6 & 0xffffffff);
          puVar24 = local_440;
        }
        puVar11 = local_58;
        if (local_58 == (undefined8 *)0x0) {
          puVar11 = local_158;
        }
        puVar11[lVar18] = *(undefined8 *)puVar9;
        puVar11 = local_450;
      }
      else {
        pcVar4 = *(char **)(puVar9 + 2);
        if (*(int *)(pcVar4 + 0x20) < 1) {
          if ((longlong)*(int *)(pcVar4 + 0x70) != 0) {
            lVar17 = 0;
            do {
              if (0 < *(int *)(*(longlong *)(pcVar4 + 0x68) + lVar17)) goto LAB_143a61c22;
              lVar17 = lVar17 + 0x48;
            } while ((longlong)*(int *)(pcVar4 + 0x70) * 0x48 != lVar17);
          }
          goto LAB_143a61ce7;
        }
LAB_143a61c22:
        if (*pcVar4 == '\0') {
          if (param_2 != 6) {
            uVar8 = *(uint *)(lVar18 + 0x48);
            if ((byte)*(uint *)(lVar18 + 0x48) < *(byte *)(lVar18 + 0x49)) {
              uVar8 = (uint)*(byte *)(lVar18 + 0x49);
            }
            uVar8 = uVar8 & 0xff;
            uVar22 = 3;
            if (3 < uVar8) {
              uVar22 = uVar8;
            }
            if ((*(byte *)(lVar18 + 0xc61) & 0x20) == 0) {
              uVar22 = uVar8;
            }
            if (4 < uVar22) {
              uVar22 = 5;
            }
            if (param_2 <= (int)uVar22) goto LAB_143a61d2a;
          }
          *pcVar4 = '\x01';
          lVar18 = *(longlong *)(puVar9 + 2);
          if (*(int *)(lVar18 + 0x24) < 1) {
            iVar26 = (int)local_160;
            uVar8 = (int)local_160 + 1;
            local_160 = CONCAT44(local_160._4_4_,uVar8);
            if (local_160._4_4_ < uVar8) {
              FUN_14819e5a6(local_268,uVar5 & 0xffffffff);
              puVar24 = local_440;
            }
            puVar10 = local_268;
            puVar12 = local_168;
          }
          else {
            iVar26 = (int)local_270;
            uVar8 = (int)local_270 + 1;
            local_270 = CONCAT44(local_270._4_4_,uVar8);
            if (local_270._4_4_ < uVar8) {
              FUN_14819e5a6(local_378,uVar3 & 0xffffffff);
              puVar24 = local_440;
            }
            puVar10 = local_378;
            puVar12 = local_278;
          }
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar10;
          }
          *(longlong *)(puVar12 + (longlong)iVar26 * 8) = lVar18;
          puVar11 = local_450;
        }
      }
LAB_143a61d2a:
      uVar15 = uVar15 & ~(uint)uVar19;
      puVar9 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar9 = puVar24;
      }
      uVar22 = *(uint *)(param_1 + 0x38);
      iVar26 = (int)uVar27;
      lVar18 = (longlong)iVar26;
      uVar8 = puVar9[lVar18] & uVar15;
      if (uVar8 == 0) {
        iVar13 = uVar22 + 0x1e;
        if (-1 < (int)(uVar22 - 1)) {
          iVar13 = uVar22 - 1;
        }
        iVar13 = iVar13 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar26) {
          iVar14 = iVar26;
        }
        if (iVar26 < iVar13) {
          lVar17 = 0;
          do {
            uVar8 = puVar9[lVar18 + lVar17 + 1];
            if (uVar8 != 0) {
              uVar27 = (ulonglong)(iVar26 + (int)lVar17 + 1);
              uVar15 = 0xffffffff;
              goto LAB_143a61da5;
            }
            iVar20 = iVar20 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar14 - lVar18 != lVar17);
          uVar15 = 0xffffffff;
          iVar26 = iVar14;
        }
        uVar27 = (ulonglong)(iVar26 + 1);
        puVar24 = local_440;
        puVar11 = local_450;
        uVar8 = uVar22;
      }
      else {
LAB_143a61da5:
        uVar19 = (ulonglong)(-uVar8 & uVar8);
        uVar3 = uVar19 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar8 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar22 <= (int)uVar8) {
          uVar8 = uVar22;
        }
      }
    } while (uVar8 != (uint)puVar11);
  }
LAB_143a616c0:
  puVar11 = local_58;
  if (local_58 == (undefined8 *)0x0) {
    puVar11 = local_158;
  }
  if ((longlong)(int)local_50 != 0) {
    local_450 = puVar11 + (int)local_50;
    do {
      if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
        puVar10 = (undefined1 *)*puVar11;
        lVar18 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar18 = param_1 + 0x48;
        }
        uVar19 = (longlong)(int)((uint)((ulonglong)puVar10 >> 0x20) ^ (uint)puVar10) &
                 (longlong)*(int *)(param_1 + 0x58) - 1U;
        lVar17 = (longlong)*(int *)(lVar18 + uVar19 * 4);
        if (lVar17 != -1) {
          lVar25 = *local_448;
          lVar17 = lVar17 * 0x20;
          local_408 = *(undefined8 *)(lVar25 + lVar17);
          local_418 = puVar10;
          cVar7 = FUN_1408f9166(&local_408,&local_418);
          if (cVar7 == '\0') {
            lVar18 = lVar25 + lVar17;
            do {
              lVar17 = lVar18;
              lVar18 = (longlong)*(int *)(lVar17 + 0x18);
              if (lVar18 == -1) goto LAB_143a617e1;
              lVar25 = *local_448;
              lVar18 = lVar18 * 0x20;
              local_408 = *(undefined8 *)(lVar25 + lVar18);
              local_418 = puVar10;
              cVar7 = FUN_1408f9166(&local_408,&local_418);
              lVar18 = lVar25 + lVar18;
            } while (cVar7 == '\0');
            piVar16 = (int *)(lVar17 + 0x18);
          }
          else {
            piVar16 = (int *)(lVar18 + uVar19 * 4);
          }
          iVar20 = *piVar16;
          lVar17 = (longlong)iVar20 * 0x20;
          lVar18 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar18 = param_1 + 0x48;
          }
          lVar25 = *(longlong *)(param_1 + 0x10);
          lVar23 = (longlong)*(int *)(lVar25 + 0x1c + lVar17);
          iVar26 = *(int *)(lVar18 + lVar23 * 4);
          if (iVar26 == iVar20) {
            piVar16 = (int *)(lVar18 + lVar23 * 4);
          }
          else {
            do {
              piVar16 = (int *)((longlong)iVar26 * 0x20 + lVar25 + 0x18);
              iVar26 = *piVar16;
            } while (iVar26 != iVar20);
          }
          *piVar16 = *(int *)(lVar25 + lVar17 + 0x18);
          plVar21 = *(longlong **)(*local_448 + 0x10 + lVar17);
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar21 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar16 = (int *)((longlong)plVar21 + 0xc);
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (*piVar16 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
          FUN_143a6fc02(local_448,iVar20);
        }
      }
LAB_143a617e1:
      puVar11 = puVar11 + 1;
    } while (puVar11 != local_450);
  }
  if (0 < (int)local_160) {
    lVar18 = 0;
    do {
      puVar10 = local_168;
      if (local_168 == (undefined1 *)0x0) {
        puVar10 = local_268;
      }
      FUN_143a60fee(*(undefined8 *)(puVar10 + lVar18 * 8),local_41c);
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)local_160);
  }
  if ((int)local_270 != 0) {
    local_430 = local_378;
    local_410 = &local_430;
    local_428 = &local_41c;
    local_458 = &local_408;
    local_408 = 0;
    local_400 = 0;
    local_418 = &LAB_143a6fc74;
    local_460 = 0;
    FUN_1401f8d10(L"ParallelFor Task",local_270 & 0xffffffff,1);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x60));
  local_388 = (undefined8 *)0x0;
  local_380 = 0x2000000000;
  iVar20 = *(int *)(param_1 + 0x70);
  if (0 < (longlong)iVar20) {
    plVar21 = (longlong *)(param_1 + 0x68);
    lVar17 = 0;
    lVar18 = 0;
    do {
      uVar19 = local_380;
      if ((*(int *)(*(longlong *)(*plVar21 + lVar17) + 0x40) < 1) &&
         (*(int *)(*(longlong *)(*plVar21 + lVar17) + 0x44) < 1)) {
        lVar25 = (longlong)(int)local_380;
        uVar15 = (int)local_380 + 1;
        local_380 = CONCAT44(local_380._4_4_,uVar15);
        if (local_380._4_4_ < uVar15) {
          FUN_1456cba76(&local_408,uVar19 & 0xffffffff);
        }
        puVar11 = local_388;
        if (local_388 == (undefined8 *)0x0) {
          puVar11 = &local_408;
        }
        *(int *)((longlong)puVar11 + lVar25 * 4) = (int)lVar18;
      }
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x10;
    } while (iVar20 != lVar18);
    while ((int)local_380 != 0) {
      puVar11 = local_388;
      if (local_388 == (undefined8 *)0x0) {
        puVar11 = &local_408;
      }
      lVar18 = (longlong)(int)local_380;
      local_380 = CONCAT44(local_380._4_4_,(int)local_380 + -1);
      FUN_14819e61e(plVar21,*(undefined4 *)((longlong)puVar11 + lVar18 * 4 + -4));
      FUN_14819e6a6(plVar21);
    }
  }
  if (local_388 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x60));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x78));
  local_388 = (undefined8 *)0x0;
  local_380 = 0x2000000000;
  iVar20 = *(int *)(param_1 + 0x88);
  if (0 < (longlong)iVar20) {
    plVar21 = (longlong *)(param_1 + 0x80);
    lVar18 = 0;
    lVar17 = 0;
    do {
      uVar19 = local_380;
      if (*(int *)(*(longlong *)(*plVar21 + lVar18) + 0x18) < 1) {
        lVar25 = (longlong)(int)local_380;
        uVar15 = (int)local_380 + 1;
        local_380 = CONCAT44(local_380._4_4_,uVar15);
        if (local_380._4_4_ < uVar15) {
          FUN_1456cba76(&local_408,uVar19 & 0xffffffff);
        }
        puVar11 = local_388;
        if (local_388 == (undefined8 *)0x0) {
          puVar11 = &local_408;
        }
        *(int *)((longlong)puVar11 + lVar25 * 4) = (int)lVar17;
      }
      lVar17 = lVar17 + 1;
      lVar18 = lVar18 + 0x10;
    } while (iVar20 != lVar17);
    while ((int)local_380 != 0) {
      puVar11 = local_388;
      if (local_388 == (undefined8 *)0x0) {
        puVar11 = &local_408;
      }
      lVar18 = (longlong)(int)local_380;
      local_380 = CONCAT44(local_380._4_4_,(int)local_380 + -1);
      FUN_14819e742(plVar21,*(undefined4 *)((longlong)puVar11 + lVar18 * 4 + -4));
      FUN_14819e7ca(plVar21);
    }
  }
  if (local_388 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x78));
  pRVar1 = local_438;
  if (local_278 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(pRVar1);
  if ((local_48 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a61ec4 FUN_143a61ec4 body=88 status=ok
// SIG undefined FUN_143a61ec4(void)

undefined8 * FUN_143a61ec4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar4 = (undefined8 *)*param_1;
    lVar3 = (longlong)*(int *)(param_1 + 1) << 4;
    do {
      piVar1 = (int *)*puVar4;
      if (((0 < piVar1[6]) && (*piVar1 == *(int *)param_2[1])) &&
         (cVar2 = FUN_14794e75a(piVar1 + 1,*param_2), cVar2 != '\0')) {
        return puVar4;
      }
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143a61f1c FUN_143a61f1c body=9640 status=ok
// SIG undefined FUN_143a61f1c(void)

void FUN_143a61f1c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  char *pcVar21;
  bool bVar22;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 *local_d0;
  longlong *local_c0;
  char *local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  char local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar14 = *(longlong *)(param_1 + 0x130);
  lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x28) + 0x18);
  if (lVar14 != lVar9) {
    *(longlong *)(param_1 + 0x130) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c0;
              plVar13 = plVar8;
              if (bVar22) {
                plVar17 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c8;
              plVar17 = plVar8;
              if (bVar22) {
                plVar13 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x128);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x160) + 0xd0);
  if (lVar14 != lVar9) {
    *(longlong *)(param_1 + 0x128) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c0;
              plVar13 = plVar8;
              if (bVar22) {
                plVar17 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c8;
              plVar17 = plVar8;
              if (bVar22) {
                plVar13 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x138);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x160) + 0x78);
  if (lVar14 != lVar9) {
    *(longlong *)(param_1 + 0x138) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c0;
              plVar13 = plVar8;
              if (bVar22) {
                plVar17 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c8;
              plVar17 = plVar8;
              if (bVar22) {
                plVar13 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x130);
  if (lVar14 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x160);
LAB_143a62128:
    *(undefined1 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar9 + 0x15c);
LAB_143a62142:
    lVar9 = DAT_14cb428f0;
    if (lVar14 != DAT_14cb428f0) {
      *(longlong *)(param_1 + 0x130) = DAT_14cb428f0;
      if (lVar9 != 0) {
        LOCK();
        piVar2 = (int *)(lVar9 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (lVar14 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar8;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar8;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    lVar9 = DAT_14cb427b0;
    lVar14 = *(longlong *)(param_1 + 0x128);
    if (lVar14 != DAT_14cb427b0) {
      *(longlong *)(param_1 + 0x128) = DAT_14cb427b0;
      if (lVar9 != 0) {
        LOCK();
        piVar2 = (int *)(lVar9 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (lVar14 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar8;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar8;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    lVar9 = DAT_14cb42830;
    lVar14 = *(longlong *)(param_1 + 0x138);
    if (lVar14 != DAT_14cb42830) {
      *(longlong *)(param_1 + 0x138) = DAT_14cb42830;
      if (lVar9 != 0) {
        LOCK();
        piVar2 = (int *)(lVar9 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (lVar14 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar8;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar8;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined1 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_14024fde8(param_1 + 0x50,0);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_141067c74(param_1 + 0x70,0);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_141067c74(param_1 + 0x90,0);
    }
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x160);
    if (*(longlong *)(param_1 + 0x128) == 0) goto LAB_143a62128;
    bVar22 = *(longlong *)(param_1 + 0x138) != 0;
    *(bool *)(param_1 + 0x120) = bVar22;
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar9 + 0x15c);
    if (!bVar22) goto LAB_143a62142;
  }
  pcVar21 = (char *)(param_1 + 0x120);
  lVar14 = *(longlong *)(param_1 + 0x148);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x160) + 0x118);
  if (lVar14 != lVar9) {
    *(longlong *)(param_1 + 0x148) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c0;
              plVar13 = plVar8;
              if (bVar22) {
                plVar17 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c8;
              plVar17 = plVar8;
              if (bVar22) {
                plVar13 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  if (*pcVar21 == '\x01') {
    bVar22 = *(longlong *)(param_1 + 0x148) != 0;
    *(bool *)(param_1 + 0x121) = bVar22;
    if (!bVar22) {
      lVar14 = 0;
      goto LAB_143a623da;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x121) = 0;
    lVar14 = *(longlong *)(param_1 + 0x148);
LAB_143a623da:
    lVar9 = DAT_14cb42830;
    if (lVar14 != DAT_14cb42830) {
      *(longlong *)(param_1 + 0x148) = DAT_14cb42830;
      if (lVar9 != 0) {
        LOCK();
        piVar2 = (int *)(lVar9 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (lVar14 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar8;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar8;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x140);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x160) + 0x88);
  if (lVar14 != lVar9) {
    *(longlong *)(param_1 + 0x140) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c0;
              plVar13 = plVar8;
              if (bVar22) {
                plVar17 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c8;
              plVar17 = plVar8;
              if (bVar22) {
                plVar13 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
    lVar9 = *(longlong *)(param_1 + 0x140);
    lVar14 = lVar9;
  }
  lVar18 = DAT_14cb427f0;
  local_b8 = pcVar21;
  if (lVar9 == 0) {
    if (lVar14 != DAT_14cb427f0) {
      *(longlong *)(param_1 + 0x140) = DAT_14cb427f0;
      if (lVar18 != 0) {
        LOCK();
        piVar2 = (int *)(lVar18 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (lVar14 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar8;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar8;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
    lVar14 = *(longlong *)(param_1 + 0x160);
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x160);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar14 + 0xa8);
  }
  lVar9 = DAT_14cb428f0;
  iVar5 = *(int *)(lVar14 + 0x18);
  if (*(char *)(param_1 + 0x17c) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x168);
    local_98 = 0;
    lStack_90 = 0;
    local_88 = 1;
    local_84 = 0;
    uStack_7c = 0;
    local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_70 = '\0';
    local_6c = 0;
    local_68 = L"FSkeletalMeshGpuSpawnStaticBuffers";
    local_60 = 0;
    uStack_58 = 0;
    uVar20 = FUN_143a60dfd(*(undefined4 *)(param_1 + 0x170));
    iVar7 = uVar20 << 2;
    local_a8 = (undefined1)iVar7;
    uStack_a7 = (undefined1)((uint)iVar7 >> 8);
    uStack_a6 = (undefined1)((uint)iVar7 >> 0x10);
    uStack_a5 = (undefined1)((uint)iVar7 >> 0x18);
    uStack_a4 = 0;
    uStack_a0 = 0x4101;
    if ((uVar20 & 0x3fffffff) == 0) {
      FUN_14570b4be(param_2,&local_98,0x4101,0);
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_d0 = &local_98;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
      FUN_14002049c(param_2,0);
    }
    else {
      local_d0 = &local_98;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
    }
    plVar17 = (longlong *)(param_1 + 0x18);
    if (plVar17 == &local_b0) {
LAB_143a63d1a:
      lVar14 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_b0 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar14;
            plVar13 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c0;
                plVar8 = plVar10;
                if (bVar22) {
                  plVar13 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar10 = (longlong)plVar8;
                LOCK();
                bVar22 = plVar8 != DAT_14ca843c8;
                plVar13 = plVar10;
                if (bVar22) {
                  plVar8 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    else {
      lVar14 = *plVar17;
      *plVar17 = local_b0;
      local_b0 = 0;
      if (lVar14 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar14;
            plVar13 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c0;
                plVar8 = plVar10;
                if (bVar22) {
                  plVar13 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar10 = (longlong)plVar8;
                LOCK();
                bVar22 = plVar8 != DAT_14ca843c8;
                plVar13 = plVar10;
                if (bVar22) {
                  plVar8 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
        goto LAB_143a63d1a;
      }
    }
    lVar14 = *plVar17;
    cVar4 = *(char *)(param_2 + 0x69);
    if (cVar4 == '\0') {
      FUN_14002049c(param_2,1);
    }
    local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,iVar7);
    local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
    uVar15 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar14,0);
    if (cVar4 == '\0') {
      FUN_14002049c(param_2,0);
    }
    FUN_1481904c6(uVar15,uVar6,0);
    lVar14 = *plVar17;
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar14);
      FUN_14002049c(param_2,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar14);
    }
    if ((*plVar17 == 0) || ((*(byte *)(*plVar17 + 0x28) & 0x10) == 0)) {
      uStack_a7 = 0x1c;
      uStack_a6 = 1;
    }
    else {
      uStack_a7 = 0;
      uStack_a6 = 4;
    }
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a5 = 0;
    local_a8 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
    plVar17 = (longlong *)(param_1 + 0x20);
    if (plVar17 != &local_b0) {
      lVar14 = *plVar17;
      *plVar17 = local_b0;
      local_b0 = 0;
      if (lVar14 == 0) goto LAB_143a62622;
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c0;
              plVar13 = plVar8;
              if (bVar22) {
                plVar17 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c8;
              plVar17 = plVar8;
              if (bVar22) {
                plVar13 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
    lVar14 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c0;
              plVar13 = plVar8;
              if (bVar22) {
                plVar17 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c8;
              plVar17 = plVar8;
              if (bVar22) {
                plVar13 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x20);
    if (lVar14 != DAT_14cb428f0) {
      *(longlong *)(param_1 + 0x20) = DAT_14cb428f0;
      if (lVar9 != 0) {
        LOCK();
        piVar2 = (int *)(lVar9 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (lVar14 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar8;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar8;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
  }
LAB_143a62622:
  lVar9 = DAT_14cb428f0;
  plVar17 = (longlong *)(param_1 + 0xb0);
  lVar14 = *(longlong *)(param_1 + 0xb0);
  if (lVar14 != DAT_14cb428f0) {
    *plVar17 = DAT_14cb428f0;
    if (lVar9 != 0) {
      LOCK();
      piVar2 = (int *)(lVar9 + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar14;
          plVar13 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c0;
              plVar8 = plVar10;
              if (bVar22) {
                plVar13 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar10 = (longlong)plVar8;
              LOCK();
              bVar22 = plVar8 != DAT_14ca843c8;
              plVar13 = plVar10;
              if (bVar22) {
                plVar8 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  lVar9 = DAT_14cb428f0;
  plVar13 = (longlong *)(param_1 + 0xc0);
  lVar14 = *(longlong *)(param_1 + 0xc0);
  if (lVar14 != DAT_14cb428f0) {
    *plVar13 = DAT_14cb428f0;
    if (lVar9 != 0) {
      LOCK();
      piVar2 = (int *)(lVar9 + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar14;
          plVar8 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar8;
              LOCK();
              bVar22 = plVar8 != DAT_14ca843c0;
              plVar10 = plVar11;
              if (bVar22) {
                plVar8 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar11 = (longlong)plVar10;
              LOCK();
              bVar22 = plVar10 != DAT_14ca843c8;
              plVar8 = plVar11;
              if (bVar22) {
                plVar10 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  lVar9 = DAT_14cb428f0;
  plVar8 = (longlong *)(param_1 + 0xd0);
  lVar14 = *(longlong *)(param_1 + 0xd0);
  if (lVar14 != DAT_14cb428f0) {
    *plVar8 = DAT_14cb428f0;
    if (lVar9 != 0) {
      LOCK();
      piVar2 = (int *)(lVar9 + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar12 = (longlong *)FUN_14001cc68(0x10,8);
          plVar12[1] = lVar14;
          plVar10 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar12 = (longlong)plVar10;
              LOCK();
              bVar22 = plVar10 != DAT_14ca843c0;
              plVar11 = plVar12;
              if (bVar22) {
                plVar10 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar12 = (longlong)plVar11;
              LOCK();
              bVar22 = plVar11 != DAT_14ca843c8;
              plVar10 = plVar12;
              if (bVar22) {
                plVar11 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  lVar14 = DAT_14cb428f0;
  if (*(int *)(param_1 + 0x3c) < 1) {
    lVar9 = *plVar17;
    if (lVar9 != DAT_14cb428f0) {
      *plVar17 = DAT_14cb428f0;
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
      if (lVar9 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar9 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar9 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar9 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar9;
            plVar17 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar10 = plVar11;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar11 = (longlong)plVar10;
                LOCK();
                bVar22 = plVar10 != DAT_14ca843c8;
                plVar17 = plVar11;
                if (bVar22) {
                  plVar10 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    lVar9 = DAT_14cb428f0;
    lVar14 = *plVar13;
    if (lVar14 != DAT_14cb428f0) {
      *plVar13 = DAT_14cb428f0;
      if (lVar9 != 0) {
        LOCK();
        piVar2 = (int *)(lVar9 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (lVar14 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar10;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar10 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar10;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    lVar9 = DAT_14cb428f0;
    lVar14 = *plVar8;
    if (lVar14 != DAT_14cb428f0) {
      *plVar8 = DAT_14cb428f0;
      if (lVar9 != 0) {
        LOCK();
        piVar2 = (int *)(lVar9 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (lVar14 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar8;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar8;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
  }
  else {
    local_98 = 0;
    lStack_90 = 0;
    local_88 = 1;
    local_84 = 0;
    uStack_7c = 0;
    local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_70 = '\0';
    local_6c = 0;
    local_68 = L"SampleRegionsProbAliasBuffer";
    local_60 = 0;
    uStack_58 = 0;
    local_c0 = plVar8;
    if (*(char *)(param_1 + 0x38) == '\x01') {
      lStack_90 = param_1 + 0x48;
      iVar7 = *(uint *)(param_1 + 0x58) << 2;
      local_a8 = (undefined1)iVar7;
      uStack_a7 = (undefined1)((uint)iVar7 >> 8);
      uStack_a6 = (undefined1)((uint)iVar7 >> 0x10);
      uStack_a5 = (undefined1)((uint)iVar7 >> 0x18);
      uStack_a4 = 0;
      uStack_a0 = 0x4101;
      if ((*(uint *)(param_1 + 0x58) & 0x3fffffff) == 0) {
        FUN_14570b4be(param_2,&local_98,0x4101,0);
      }
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        local_d0 = &local_98;
        local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
        *(undefined4 *)(local_b0 + 0x18) = 0x78;
        FUN_14002049c(param_2,0);
      }
      else {
        local_d0 = &local_98;
        local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
        *(undefined4 *)(local_b0 + 0x18) = 0x78;
      }
      lVar14 = local_b0;
      plVar8 = (longlong *)(param_1 + 0xa8);
      if (plVar8 == &local_b0) {
LAB_143a62b7c:
        lVar14 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          puVar1 = (uint *)(local_b0 + 8);
          uVar20 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar20 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_b0 + 8);
            LOCK();
            uVar20 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar20 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(local_b0 + 0xd);
              plVar12 = (longlong *)FUN_14001cc68(0x10,8);
              plVar12[1] = lVar14;
              plVar10 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar12 = (longlong)plVar10;
                  LOCK();
                  bVar22 = plVar10 != DAT_14ca843c0;
                  plVar11 = plVar12;
                  if (bVar22) {
                    plVar10 = DAT_14ca843c0;
                    plVar11 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar11;
                  UNLOCK();
                } while (bVar22);
              }
              else {
                do {
                  *plVar12 = (longlong)plVar11;
                  LOCK();
                  bVar22 = plVar11 != DAT_14ca843c8;
                  plVar10 = plVar12;
                  if (bVar22) {
                    plVar11 = DAT_14ca843c8;
                    plVar10 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar10;
                  UNLOCK();
                } while (bVar22);
              }
            }
          }
        }
        lVar14 = *plVar8;
      }
      else {
        lVar9 = *plVar8;
        *plVar8 = local_b0;
        local_b0 = 0;
        if (lVar9 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar9 + 8);
          uVar20 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar20 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar9 + 8);
            LOCK();
            uVar20 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar20 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar9 + 0xd);
              plVar12 = (longlong *)FUN_14001cc68(0x10,8);
              plVar12[1] = lVar9;
              plVar10 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar12 = (longlong)plVar10;
                  LOCK();
                  bVar22 = plVar10 != DAT_14ca843c0;
                  plVar11 = plVar12;
                  if (bVar22) {
                    plVar10 = DAT_14ca843c0;
                    plVar11 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar11;
                  UNLOCK();
                } while (bVar22);
              }
              else {
                do {
                  *plVar12 = (longlong)plVar11;
                  LOCK();
                  bVar22 = plVar11 != DAT_14ca843c8;
                  plVar10 = plVar12;
                  if (bVar22) {
                    plVar11 = DAT_14ca843c8;
                    plVar10 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar10;
                  UNLOCK();
                } while (bVar22);
              }
            }
          }
          goto LAB_143a62b7c;
        }
      }
      if ((lVar14 == 0) || ((*(byte *)(lVar14 + 0x28) & 0x10) == 0)) {
        uStack_a7 = 0x1c;
        uStack_a6 = 1;
      }
      else {
        uStack_a7 = 0;
        uStack_a6 = 4;
      }
      uStack_9c = 0;
      uStack_a0 = 0;
      uStack_a4 = 0;
      uStack_a5 = 0;
      local_a8 = 0;
      local_d8 = &local_a8;
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
      if (plVar17 != &local_b0) {
        lVar14 = *plVar17;
        *plVar17 = local_b0;
        local_b0 = 0;
        if (lVar14 == 0) goto LAB_143a62d0f;
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar8 = plVar10;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar10 = (longlong)plVar8;
                LOCK();
                bVar22 = plVar8 != DAT_14ca843c8;
                plVar17 = plVar10;
                if (bVar22) {
                  plVar8 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
      lVar14 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_b0 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar8 = plVar10;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar10 = (longlong)plVar8;
                LOCK();
                bVar22 = plVar8 != DAT_14ca843c8;
                plVar17 = plVar10;
                if (bVar22) {
                  plVar8 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    else {
      lVar9 = *plVar17;
      if (lVar9 != DAT_14cb428f0) {
        *plVar17 = DAT_14cb428f0;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          UNLOCK();
        }
        if (lVar9 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar9 + 8);
          uVar20 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar20 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar9 + 8);
            LOCK();
            uVar20 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar20 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar9 + 0xd);
              plVar10 = (longlong *)FUN_14001cc68(0x10,8);
              plVar10[1] = lVar9;
              plVar17 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar10 = (longlong)plVar17;
                  LOCK();
                  bVar22 = plVar17 != DAT_14ca843c0;
                  plVar8 = plVar10;
                  if (bVar22) {
                    plVar17 = DAT_14ca843c0;
                    plVar8 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar8;
                  UNLOCK();
                } while (bVar22);
              }
              else {
                do {
                  *plVar10 = (longlong)plVar8;
                  LOCK();
                  bVar22 = plVar8 != DAT_14ca843c8;
                  plVar17 = plVar10;
                  if (bVar22) {
                    plVar8 = DAT_14ca843c8;
                    plVar17 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar17;
                  UNLOCK();
                } while (bVar22);
              }
            }
          }
        }
      }
    }
LAB_143a62d0f:
    local_68 = L"SampleRegionsTriangleIndicesBuffer";
    lStack_90 = param_1 + 0x68;
    if (local_70 == '\x01') {
      local_a8 = 0;
      uStack_a7 = 0;
      uStack_a6 = 0;
      uStack_a5 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0x100000;
    }
    else {
      iVar7 = *(uint *)(param_1 + 0x78) << 2;
      local_a8 = (undefined1)iVar7;
      uStack_a7 = (undefined1)((uint)iVar7 >> 8);
      uStack_a6 = (undefined1)((uint)iVar7 >> 0x10);
      uStack_a5 = (undefined1)((uint)iVar7 >> 0x18);
      uStack_a4 = 0;
      uStack_a0 = 0x4101;
      if ((*(uint *)(param_1 + 0x78) & 0x3fffffff) == 0) {
        FUN_14570b4be(param_2,&local_98,0x4101,0);
      }
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_d0 = &local_98;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
      FUN_14002049c(param_2,0);
    }
    else {
      local_d0 = &local_98;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
    }
    lVar14 = local_b0;
    plVar17 = (longlong *)(param_1 + 0xb8);
    if (plVar17 == &local_b0) {
LAB_143a62e83:
      lVar14 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_b0 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar14;
            plVar8 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar8;
                LOCK();
                bVar22 = plVar8 != DAT_14ca843c0;
                plVar10 = plVar11;
                if (bVar22) {
                  plVar8 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar11 = (longlong)plVar10;
                LOCK();
                bVar22 = plVar10 != DAT_14ca843c8;
                plVar8 = plVar11;
                if (bVar22) {
                  plVar10 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
      lVar14 = *plVar17;
    }
    else {
      lVar9 = *plVar17;
      *plVar17 = local_b0;
      local_b0 = 0;
      if (lVar9 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar9 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar9 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar9 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar9;
            plVar8 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar8;
                LOCK();
                bVar22 = plVar8 != DAT_14ca843c0;
                plVar10 = plVar11;
                if (bVar22) {
                  plVar8 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar11 = (longlong)plVar10;
                LOCK();
                bVar22 = plVar10 != DAT_14ca843c8;
                plVar8 = plVar11;
                if (bVar22) {
                  plVar10 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
        goto LAB_143a62e83;
      }
    }
    if ((lVar14 == 0) || ((*(byte *)(lVar14 + 0x28) & 0x10) == 0)) {
      uStack_a7 = 0x1c;
      uStack_a6 = 1;
    }
    else {
      uStack_a7 = 0;
      uStack_a6 = 4;
    }
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a5 = 0;
    local_a8 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
    if (plVar13 == &local_b0) {
LAB_143a62fb4:
      lVar14 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_b0 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar8;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar8;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    else {
      lVar14 = *plVar13;
      *plVar13 = local_b0;
      local_b0 = 0;
      if (lVar14 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar14;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar8;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar8;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
        goto LAB_143a62fb4;
      }
    }
    local_68 = L"SampleRegionsVerticesBuffer";
    lStack_90 = param_1 + 0x88;
    if (local_70 == '\x01') {
      local_a8 = 0;
      uStack_a7 = 0;
      uStack_a6 = 0;
      uStack_a5 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0x100000;
    }
    else {
      iVar7 = *(uint *)(param_1 + 0x98) << 2;
      local_a8 = (undefined1)iVar7;
      uStack_a7 = (undefined1)((uint)iVar7 >> 8);
      uStack_a6 = (undefined1)((uint)iVar7 >> 0x10);
      uStack_a5 = (undefined1)((uint)iVar7 >> 0x18);
      uStack_a4 = 0;
      uStack_a0 = 0x4101;
      if ((*(uint *)(param_1 + 0x98) & 0x3fffffff) == 0) {
        FUN_14570b4be(param_2,&local_98,0x4101,0);
      }
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_d0 = &local_98;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
      FUN_14002049c(param_2,0);
    }
    else {
      local_d0 = &local_98;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
    }
    lVar14 = local_b0;
    plVar17 = (longlong *)(param_1 + 200);
    if (plVar17 == &local_b0) {
LAB_143a63185:
      lVar14 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_b0 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar14;
            plVar13 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c0;
                plVar8 = plVar10;
                if (bVar22) {
                  plVar13 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar10 = (longlong)plVar8;
                LOCK();
                bVar22 = plVar8 != DAT_14ca843c8;
                plVar13 = plVar10;
                if (bVar22) {
                  plVar8 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
      lVar14 = *plVar17;
    }
    else {
      lVar9 = *plVar17;
      *plVar17 = local_b0;
      local_b0 = 0;
      if (lVar9 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar9 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar9 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar9 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar9;
            plVar13 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c0;
                plVar8 = plVar10;
                if (bVar22) {
                  plVar13 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar10 = (longlong)plVar8;
                LOCK();
                bVar22 = plVar8 != DAT_14ca843c8;
                plVar13 = plVar10;
                if (bVar22) {
                  plVar8 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
        goto LAB_143a63185;
      }
    }
    if ((lVar14 == 0) || ((*(byte *)(lVar14 + 0x28) & 0x10) == 0)) {
      uStack_a7 = 0x1c;
      uStack_a6 = 1;
    }
    else {
      uStack_a7 = 0;
      uStack_a6 = 4;
    }
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a5 = 0;
    local_a8 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
    if (local_c0 != &local_b0) {
      lVar14 = *local_c0;
      *local_c0 = local_b0;
      local_b0 = 0;
      if (lVar14 == 0) goto LAB_143a6331b;
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c0;
              plVar13 = plVar8;
              if (bVar22) {
                plVar17 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c8;
              plVar17 = plVar8;
              if (bVar22) {
                plVar13 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
    lVar14 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c0;
              plVar13 = plVar8;
              if (bVar22) {
                plVar17 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c8;
              plVar17 = plVar8;
              if (bVar22) {
                plVar13 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
LAB_143a6331b:
  lVar14 = DAT_14cb428f0;
  if (*local_b8 == '\x01') {
    local_98 = 0;
    lStack_90 = 0;
    local_88 = 1;
    local_84 = 0;
    uStack_7c = 0;
    local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_70 = '\0';
    local_6c = 0;
    local_68 = L"FSkeletalMeshGpuSpawnStaticBuffers";
    local_60 = 0;
    uStack_58 = 0;
    iVar7 = *(uint *)(param_1 + 0x174) << 2;
    local_a8 = (undefined1)iVar7;
    uStack_a7 = (undefined1)((uint)iVar7 >> 8);
    uStack_a6 = (undefined1)((uint)iVar7 >> 0x10);
    uStack_a5 = (undefined1)((uint)iVar7 >> 0x18);
    uStack_a4 = 0;
    uStack_a0 = 0x4101;
    if ((*(uint *)(param_1 + 0x174) & 0x3fffffff) == 0) {
      FUN_14570b4be(param_2,&local_98,0x4101,0);
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_d0 = &local_98;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
      FUN_14002049c(param_2,0);
    }
    else {
      local_d0 = &local_98;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
    }
    plVar17 = (longlong *)(param_1 + 0x28);
    if (plVar17 == &local_b0) {
LAB_143a6354a:
      lVar14 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_b0 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar14;
            plVar13 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c0;
                plVar8 = plVar10;
                if (bVar22) {
                  plVar13 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar10 = (longlong)plVar8;
                LOCK();
                bVar22 = plVar8 != DAT_14ca843c8;
                plVar13 = plVar10;
                if (bVar22) {
                  plVar8 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    else {
      lVar14 = *plVar17;
      *plVar17 = local_b0;
      local_b0 = 0;
      if (lVar14 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar14 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar14 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar14 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar14;
            plVar13 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c0;
                plVar8 = plVar10;
                if (bVar22) {
                  plVar13 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar10 = (longlong)plVar8;
                LOCK();
                bVar22 = plVar8 != DAT_14ca843c8;
                plVar13 = plVar10;
                if (bVar22) {
                  plVar8 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
        goto LAB_143a6354a;
      }
    }
    iVar7 = *(int *)(param_1 + 0x174);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    cVar4 = *(char *)(param_2 + 0x69);
    if (cVar4 == '\0') {
      FUN_14002049c(param_2,1);
    }
    local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,iVar7 << 2);
    local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
    lVar14 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar6,0);
    if (cVar4 == '\0') {
      FUN_14002049c(param_2,0);
    }
    if (iVar5 != 0) {
      iVar7 = 0;
      iVar16 = 0;
      do {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x160) + 0x10);
        lVar18 = (longlong)iVar16 * 0xf8;
        uVar19 = (ulonglong)*(uint *)(lVar9 + 0x48 + lVar18);
        if (uVar19 != 0) {
          uVar20 = *(uint *)(lVar9 + 0x10 + lVar18);
          do {
            *(int *)(lVar14 + (ulonglong)uVar20 * 4) = iVar7;
            uVar20 = uVar20 + 1;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        iVar7 = iVar7 + *(int *)(lVar9 + lVar18 + 0x40);
        iVar16 = iVar16 + 1;
      } while (iVar16 != iVar5);
    }
    lVar14 = *plVar17;
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar14);
      FUN_14002049c(param_2,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar14);
    }
    if ((*plVar17 == 0) || ((*(byte *)(*plVar17 + 0x28) & 0x10) == 0)) {
      uStack_a7 = 0x1c;
      uStack_a6 = 1;
    }
    else {
      uStack_a7 = 0;
      uStack_a6 = 4;
    }
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a5 = 0;
    local_a8 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
    plVar17 = (longlong *)(param_1 + 0x30);
    if (plVar17 != &local_b0) {
      lVar14 = *plVar17;
      *plVar17 = local_b0;
      local_b0 = 0;
      if (lVar14 == 0) goto LAB_143a637c9;
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c0;
              plVar13 = plVar8;
              if (bVar22) {
                plVar17 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c8;
              plVar17 = plVar8;
              if (bVar22) {
                plVar13 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
    lVar14 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar17;
              LOCK();
              bVar22 = plVar17 != DAT_14ca843c0;
              plVar13 = plVar8;
              if (bVar22) {
                plVar17 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar8 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c8;
              plVar17 = plVar8;
              if (bVar22) {
                plVar13 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x30);
    if (lVar9 != DAT_14cb428f0) {
      *(longlong *)(param_1 + 0x30) = DAT_14cb428f0;
      if (lVar14 != 0) {
        LOCK();
        piVar2 = (int *)(lVar14 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (lVar9 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar9 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar9 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar9 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar9;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar8;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar8;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
  }
LAB_143a637c9:
  lVar14 = DAT_14cb428f0;
  if (*(int *)(param_1 + 0xf8) < 1) {
    lVar9 = *(longlong *)(param_1 + 0x110);
    if (lVar9 != DAT_14cb428f0) {
      *(longlong *)(param_1 + 0x110) = DAT_14cb428f0;
      if (lVar14 != 0) {
        LOCK();
        piVar2 = (int *)(lVar14 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (lVar9 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar9 + 8);
        uVar20 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar9 + 8);
          LOCK();
          uVar20 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar9 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar9;
            plVar17 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar17;
                LOCK();
                bVar22 = plVar17 != DAT_14ca843c0;
                plVar13 = plVar8;
                if (bVar22) {
                  plVar17 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar8 = (longlong)plVar13;
                LOCK();
                bVar22 = plVar13 != DAT_14ca843c8;
                plVar17 = plVar8;
                if (bVar22) {
                  plVar13 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    goto LAB_143a63b96;
  }
  lStack_90 = param_1 + 0xe8;
  local_98 = 0;
  local_88 = 1;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = '\0';
  local_6c = 0;
  local_68 = L"FilteredAndUnfilteredBonesBuffer";
  local_60 = 0;
  uStack_58 = 0;
  iVar5 = *(int *)(param_1 + 0xf8) * 2;
  local_a8 = (undefined1)iVar5;
  uStack_a7 = (undefined1)((uint)iVar5 >> 8);
  uStack_a6 = (undefined1)((uint)iVar5 >> 0x10);
  uStack_a5 = (undefined1)((uint)iVar5 >> 0x18);
  uStack_a4 = 0;
  uStack_a0 = 0x4101;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)lStack_90 >> 8),1));
    local_d0 = &local_98;
    local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = 0x78;
  }
  lVar14 = local_b0;
  plVar17 = (longlong *)(param_1 + 0x108);
  if (plVar17 == &local_b0) {
LAB_143a63a05:
    lVar14 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar14;
          plVar13 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c0;
              plVar8 = plVar10;
              if (bVar22) {
                plVar13 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar10 = (longlong)plVar8;
              LOCK();
              bVar22 = plVar8 != DAT_14ca843c8;
              plVar13 = plVar10;
              if (bVar22) {
                plVar8 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
    lVar14 = *plVar17;
  }
  else {
    lVar9 = *plVar17;
    *plVar17 = local_b0;
    local_b0 = 0;
    if (lVar9 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar9 + 8);
      uVar20 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar9 + 8);
        LOCK();
        uVar20 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar9 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar9;
          plVar13 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar13;
              LOCK();
              bVar22 = plVar13 != DAT_14ca843c0;
              plVar8 = plVar10;
              if (bVar22) {
                plVar13 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar10 = (longlong)plVar8;
              LOCK();
              bVar22 = plVar8 != DAT_14ca843c8;
              plVar13 = plVar10;
              if (bVar22) {
                plVar8 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
      goto LAB_143a63a05;
    }
  }
  if ((lVar14 == 0) || ((*(byte *)(lVar14 + 0x28) & 0x10) == 0)) {
    uStack_a7 = 0x20;
    uStack_a6 = 1;
  }
  else {
    uStack_a7 = 0;
    uStack_a6 = 4;
  }
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a5 = 0;
  local_a8 = 0;
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  plVar17 = (longlong *)(param_1 + 0x110);
  if (plVar17 != &local_b0) {
    lVar14 = *plVar17;
    *plVar17 = local_b0;
    local_b0 = 0;
    if (lVar14 == 0) goto LAB_143a63b96;
    LOCK();
    puVar1 = (uint *)(lVar14 + 8);
    uVar20 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar20 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar14 + 8);
      LOCK();
      uVar20 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar20 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar14 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar14;
        plVar17 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar17;
            LOCK();
            bVar22 = plVar17 != DAT_14ca843c0;
            plVar13 = plVar8;
            if (bVar22) {
              plVar17 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar22);
        }
        else {
          do {
            *plVar8 = (longlong)plVar13;
            LOCK();
            bVar22 = plVar13 != DAT_14ca843c8;
            plVar17 = plVar8;
            if (bVar22) {
              plVar13 = DAT_14ca843c8;
              plVar17 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar17;
            UNLOCK();
          } while (bVar22);
        }
      }
    }
  }
  lVar14 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b0 + 8);
    uVar20 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar20 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_b0 + 8);
      LOCK();
      uVar20 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar20 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_b0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar14;
        plVar17 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar17;
            LOCK();
            bVar22 = plVar17 != DAT_14ca843c0;
            plVar13 = plVar8;
            if (bVar22) {
              plVar17 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar22);
        }
        else {
          do {
            *plVar8 = (longlong)plVar13;
            LOCK();
            bVar22 = plVar13 != DAT_14ca843c8;
            plVar17 = plVar8;
            if (bVar22) {
              plVar13 = DAT_14ca843c8;
              plVar17 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar17;
            UNLOCK();
          } while (bVar22);
        }
      }
    }
  }
LAB_143a63b96:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a644c6 FUN_143a644c6 body=2289 status=ok
// SIG undefined FUN_143a644c6(void)

void FUN_143a644c6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0xa8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0xb8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
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
  lVar4 = *(longlong *)(param_1 + 200);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0xd0);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
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
    *(undefined8 *)(param_1 + 0x108) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x128);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x130);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x130) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x138);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x140);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x140) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x148);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x148) = 0;
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



// FUNCTION 143a64db8 FUN_143a64db8 body=1911 status=ok
// SIG undefined FUN_143a64db8(void)

void FUN_143a64db8(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  longlong *local_d0;
  longlong local_c0;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8 [2];
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  uint local_84;
  char local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar12 = 0x20;
  do {
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_98 = 1;
    local_94 = 0;
    uStack_8c = 0;
    local_84 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_80 = '\0';
    local_7c = 0;
    local_78 = L"SkeletalMeshGpuDynamicBuffer";
    local_70 = 0;
    uStack_68 = 0;
    iVar5 = *(int *)(param_1 + 0x18) * 0x30;
    local_b8 = (undefined1)iVar5;
    uStack_b7 = (undefined1)((uint)iVar5 >> 8);
    uStack_b6 = (undefined1)((uint)iVar5 >> 0x10);
    uStack_b5 = (undefined1)((uint)iVar5 >> 0x18);
    uStack_b4 = 0;
    uStack_b0 = 0x4102;
    if (iVar5 == 0) {
      FUN_14570b4be(param_2,local_a8,0x4102,0);
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_d0 = local_a8;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
      *(undefined4 *)(local_c0 + 0x18) = 0x78;
      FUN_14002049c(param_2,0);
    }
    else {
      local_d0 = local_a8;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
      *(undefined4 *)(local_c0 + 0x18) = 0x78;
    }
    lVar11 = local_c0;
    plVar10 = (longlong *)(param_1 + lVar12);
    if (plVar10 == &local_c0) {
LAB_143a64f6f:
      lVar11 = local_c0;
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
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar11;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar13 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
      lVar11 = *plVar10;
    }
    else {
      lVar4 = *plVar10;
      *plVar10 = local_c0;
      local_c0 = 0;
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
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar4;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar13 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_143a64f6f;
      }
    }
    if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0x28) & 0x10) == 0)) {
      uStack_b7 = 1;
      uStack_b6 = 1;
    }
    else {
      uStack_b7 = 0;
      uStack_b6 = 4;
    }
    uStack_ac = 0;
    uStack_b0 = 0;
    uStack_b4 = 0;
    uStack_b5 = 0;
    local_b8 = 0;
    local_d8 = &local_b8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_c0,param_2);
    plVar9 = plVar10 + 1;
    if (plVar9 == &local_c0) {
LAB_143a65098:
      lVar11 = local_c0;
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
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar11;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar13 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    else {
      lVar11 = *plVar9;
      *plVar9 = local_c0;
      local_c0 = 0;
      if (lVar11 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar11 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar11 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar11 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar11;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar13 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_143a65098;
      }
    }
    if (local_80 == '\x01') {
      local_b8 = 0;
      uStack_b7 = 0;
      uStack_b6 = 0;
      uStack_b5 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0x100000;
    }
    else {
      iVar5 = (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14)) * 0x30;
      local_b8 = (undefined1)iVar5;
      uStack_b7 = (undefined1)((uint)iVar5 >> 8);
      uStack_b6 = (undefined1)((uint)iVar5 >> 0x10);
      uStack_b5 = (undefined1)((uint)iVar5 >> 0x18);
      uStack_b4 = 0;
      uStack_b0 = 0x4102;
      if (iVar5 == 0) {
        FUN_14570b4be(param_2,local_a8,0x4102,0);
      }
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_d0 = local_a8;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
      *(undefined4 *)(local_c0 + 0x18) = 0x78;
      FUN_14002049c(param_2,0);
    }
    else {
      local_d0 = local_a8;
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
      *(undefined4 *)(local_c0 + 0x18) = 0x78;
    }
    lVar11 = local_c0;
    plVar9 = plVar10 + 2;
    if (plVar9 == &local_c0) {
LAB_143a65247:
      lVar11 = local_c0;
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
            plVar7[1] = lVar11;
            plVar8 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c0;
                plVar6 = plVar7;
                if (bVar13) {
                  plVar8 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar7 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c8;
                plVar8 = plVar7;
                if (bVar13) {
                  plVar6 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
      lVar11 = *plVar9;
    }
    else {
      lVar4 = *plVar9;
      *plVar9 = local_c0;
      local_c0 = 0;
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
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar4;
            plVar8 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c0;
                plVar6 = plVar7;
                if (bVar13) {
                  plVar8 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar7 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c8;
                plVar8 = plVar7;
                if (bVar13) {
                  plVar6 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_143a65247;
      }
    }
    if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0x28) & 0x10) == 0)) {
      uStack_b7 = 1;
      uStack_b6 = 1;
    }
    else {
      uStack_b7 = 0;
      uStack_b6 = 4;
    }
    uStack_ac = 0;
    uStack_b0 = 0;
    uStack_b4 = 0;
    uStack_b5 = 0;
    local_b8 = 0;
    local_d8 = &local_b8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_c0,param_2);
    plVar10 = plVar10 + 3;
    if (plVar10 == &local_c0) {
LAB_143a65375:
      lVar11 = local_c0;
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
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar11;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar13 = plVar10 != DAT_14ca843c0;
                plVar9 = plVar8;
                if (bVar13) {
                  plVar10 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar8 = (longlong)plVar9;
                LOCK();
                bVar13 = plVar9 != DAT_14ca843c8;
                plVar10 = plVar8;
                if (bVar13) {
                  plVar9 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    else {
      lVar11 = *plVar10;
      *plVar10 = local_c0;
      local_c0 = 0;
      if (lVar11 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar11 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar11 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar11 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar11;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar13 = plVar10 != DAT_14ca843c0;
                plVar9 = plVar8;
                if (bVar13) {
                  plVar10 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar8 = (longlong)plVar9;
                LOCK();
                bVar13 = plVar9 != DAT_14ca843c8;
                plVar10 = plVar8;
                if (bVar13) {
                  plVar9 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_143a65375;
      }
    }
    lVar12 = lVar12 + 0x20;
    if (lVar12 == 0x60) {
      if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 143a65530 FUN_143a65530 body=564 status=ok
// SIG undefined FUN_143a65530(void)

void FUN_143a65530(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = 0x20;
  do {
    lVar4 = *(longlong *)(param_1 + lVar8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + lVar8) = 0;
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
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 8 + lVar8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 8 + lVar8) = 0;
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
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x10 + lVar8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x10 + lVar8) = 0;
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
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x18 + lVar8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x18 + lVar8) = 0;
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
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x60);
  return;
}



// FUNCTION 143a65764 FUN_143a65764 body=2182 status=ok
// SIG undefined FUN_143a65764(void)

void FUN_143a65764(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ushort uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  uint uVar34;
  longlong *plVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  undefined4 uVar39;
  longlong lVar40;
  int iVar41;
  int iVar42;
  longlong lVar43;
  longlong lVar44;
  undefined8 *puVar45;
  double *pdVar46;
  undefined8 *puVar47;
  undefined1 auVar48 [12];
  double dVar49;
  undefined1 auVar51 [12];
  double dVar50;
  undefined1 auVar52 [16];
  double dVar53;
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  float fVar56;
  double dVar57;
  float fVar59;
  float fVar60;
  undefined1 auVar58 [16];
  float fVar61;
  float fVar63;
  float fVar64;
  undefined1 auVar62 [16];
  float fVar65;
  float fVar68;
  float fVar69;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar70;
  float fVar72;
  float fVar73;
  undefined1 auVar71 [16];
  
  plVar35 = (longlong *)(**(code **)(**(longlong **)*param_1 + 0x388))();
  lVar36 = *(longlong *)(*plVar35 + (longlong)*(int *)param_1[1] * 8);
  if ((longlong)*(int *)(lVar36 + 0x18) == 0) {
    uVar34 = 0;
  }
  else {
    lVar40 = 0;
    uVar34 = 0;
    do {
      uVar34 = uVar34 + *(int *)(*(longlong *)(lVar36 + 0x10) + 0x40 + lVar40) * 3;
      lVar40 = lVar40 + 0xf8;
    } while ((longlong)*(int *)(lVar36 + 0x18) * 0xf8 - lVar40 != 0);
  }
  lVar40 = param_1[2];
  iVar41 = *(int *)(lVar40 + 8);
  *(uint *)(lVar40 + 8) = iVar41 + uVar34;
  if ((uint)(*(int *)(lVar40 + 0xc) - iVar41) < uVar34) {
    FUN_1449e2712();
  }
  if ((longlong)*(int *)(lVar36 + 0x18) != 0) {
    lVar40 = *(longlong *)(lVar36 + 0x10);
    lVar36 = (longlong)*(int *)(lVar36 + 0x18) * 0xf8 + lVar40;
    iVar41 = 0;
    do {
      iVar10 = *(int *)(lVar40 + 0x40);
      if (iVar10 != 0) {
        iVar42 = 0;
        do {
          uVar9 = *(ushort *)(*(longlong *)(lVar40 + 0x38) + (longlong)iVar42 * 2);
          pdVar46 = (double *)((ulonglong)((uint)uVar9 * 0x60) + *param_2);
          lVar37 = (**(code **)(**(longlong **)*param_1 + 0x370))();
          if ((int)(uint)uVar9 < *(int *)(lVar37 + 8)) {
            plVar35 = (longlong *)(**(code **)(**(longlong **)*param_1 + 0x370))();
            lVar37 = *plVar35;
            lVar38 = (ulonglong)uVar9 * 0x40;
            dVar5 = *pdVar46;
            dVar6 = pdVar46[1];
            dVar7 = pdVar46[2];
            dVar49 = dVar6 + dVar6;
            dVar57 = dVar7 + dVar7;
            dVar53 = dVar5 * (dVar5 + dVar5);
            dVar8 = pdVar46[8];
            dVar15 = pdVar46[9];
            dVar16 = pdVar46[10];
            dVar4 = pdVar46[3];
            dVar14 = dVar4 * (dVar5 + dVar5);
            dVar50 = (*pdVar46 * dVar57 - dVar49 * dVar4) * dVar8;
            auVar58 = insertps(ZEXT416((uint)(float)((1.0 - (dVar7 * dVar57 + dVar6 * dVar49)) *
                                                    dVar8)),
                               ZEXT416((uint)(float)((dVar49 * dVar5 + dVar4 * dVar57) * dVar8)),
                               0x1c);
            auVar13._4_4_ = (int)((ulonglong)dVar50 >> 0x20);
            auVar13._0_4_ = (float)dVar50;
            auVar13._8_8_ = 0;
            auVar58 = insertps(auVar58,auVar13,0x28);
            auVar62 = insertps(ZEXT416((uint)(float)((dVar49 * dVar5 - dVar4 * dVar57) * dVar15)),
                               ZEXT416((uint)(float)((1.0 - (dVar7 * dVar57 + dVar53)) * dVar15)),
                               0x1c);
            dVar50 = (1.0 - (dVar53 + dVar6 * dVar49)) * dVar16;
            auVar52._0_4_ = (float)dVar50;
            auVar52._4_4_ = (int)((ulonglong)dVar50 >> 0x20);
            auVar52._8_8_ = 0;
            auVar62 = insertps(auVar62,ZEXT416((uint)(float)((dVar57 * dVar6 + dVar14) * dVar15)),
                               0x28);
            auVar66 = insertps(ZEXT416((uint)(float)((dVar49 * dVar4 + *pdVar46 * dVar57) * dVar16))
                               ,ZEXT416((uint)(float)((dVar57 * dVar6 - dVar14) * dVar16)),0x1c);
            auVar66 = insertps(auVar66,auVar52,0x28);
            auVar71 = insertps(ZEXT416((uint)(float)pdVar46[4]),ZEXT416((uint)(float)pdVar46[5]),
                               0x10);
            auVar71 = insertps(auVar71,ZEXT416((uint)(float)pdVar46[6]),0x20);
            auVar71 = insertps(auVar71,0x3f800000,0x30);
            pfVar1 = (float *)(lVar37 + lVar38);
            fVar17 = *pfVar1;
            fVar18 = pfVar1[1];
            fVar19 = pfVar1[2];
            fVar20 = pfVar1[3];
            pfVar1 = (float *)(lVar37 + 0x10 + lVar38);
            fVar21 = *pfVar1;
            fVar22 = pfVar1[1];
            fVar23 = pfVar1[2];
            fVar24 = pfVar1[3];
            pfVar1 = (float *)(lVar37 + 0x20 + lVar38);
            fVar25 = *pfVar1;
            fVar26 = pfVar1[1];
            fVar27 = pfVar1[2];
            fVar28 = pfVar1[3];
            pfVar1 = (float *)(lVar37 + 0x30 + lVar38);
            fVar29 = *pfVar1;
            fVar30 = pfVar1[1];
            fVar31 = pfVar1[2];
            fVar32 = pfVar1[3];
            fVar56 = auVar58._0_4_;
            fVar59 = auVar58._4_4_;
            fVar60 = auVar58._8_4_;
            fVar61 = auVar62._0_4_;
            fVar63 = auVar62._4_4_;
            fVar64 = auVar62._8_4_;
            fVar65 = auVar66._0_4_;
            fVar68 = auVar66._4_4_;
            fVar69 = auVar66._8_4_;
            fVar70 = auVar71._0_4_;
            fVar72 = auVar71._4_4_;
            fVar73 = auVar71._8_4_;
            auVar48._0_4_ = fVar20 * fVar70 + fVar19 * fVar65 + fVar18 * fVar61 + fVar17 * fVar56;
            auVar48._4_4_ = fVar20 * fVar72 + fVar19 * fVar68 + fVar18 * fVar63 + fVar17 * fVar59;
            auVar48._8_4_ = fVar20 * fVar73 + fVar19 * fVar69 + fVar18 * fVar64 + fVar17 * fVar60;
            auVar51._0_4_ = fVar24 * fVar70 + fVar23 * fVar65 + fVar22 * fVar61 + fVar21 * fVar56;
            auVar51._4_4_ = fVar24 * fVar72 + fVar23 * fVar68 + fVar22 * fVar63 + fVar21 * fVar59;
            auVar51._8_4_ = fVar24 * fVar73 + fVar23 * fVar69 + fVar22 * fVar64 + fVar21 * fVar60;
            auVar54._0_4_ = fVar28 * fVar70 + fVar27 * fVar65 + fVar26 * fVar61 + fVar25 * fVar56;
            auVar54._4_4_ = fVar28 * fVar72 + fVar27 * fVar68 + fVar26 * fVar63 + fVar25 * fVar59;
            auVar54._8_4_ = fVar28 * fVar73 + fVar27 * fVar69 + fVar26 * fVar64 + fVar25 * fVar60;
            auVar55._0_4_ = fVar32 * fVar70 + fVar31 * fVar65 + fVar30 * fVar61 + fVar29 * fVar56;
            auVar55._4_4_ = fVar32 * fVar72 + fVar31 * fVar68 + fVar30 * fVar63 + fVar29 * fVar59;
            auVar55._8_4_ = fVar32 * fVar73 + fVar31 * fVar69 + fVar30 * fVar64 + fVar29 * fVar60;
          }
          else {
            dVar5 = *pdVar46;
            dVar6 = pdVar46[1];
            dVar7 = pdVar46[2];
            auVar66._8_8_ = dVar6 + dVar6;
            dVar49 = dVar7 + dVar7;
            dVar53 = dVar5 * (dVar5 + dVar5);
            dVar8 = pdVar46[8];
            dVar15 = pdVar46[9];
            auVar71._8_8_ = (1.0 - (dVar7 * dVar49 + dVar53)) * dVar15;
            dVar16 = pdVar46[10];
            dVar4 = pdVar46[3];
            dVar14 = dVar4 * (dVar5 + dVar5);
            dVar50 = (*pdVar46 * dVar49 - auVar66._8_8_ * dVar4) * dVar8;
            auVar62 = insertps(ZEXT416((uint)(float)((1.0 - (dVar7 * dVar49 + dVar6 * auVar66._8_8_)
                                                     ) * dVar8)),
                               ZEXT416((uint)(float)((auVar66._8_8_ * dVar5 + dVar4 * dVar49) *
                                                    dVar8)),0x1c);
            auVar71._0_8_ = auVar71._8_8_;
            auVar67._4_12_ = auVar71._4_12_;
            auVar67._0_4_ = (float)auVar71._8_8_;
            auVar58._4_4_ = (int)((ulonglong)dVar50 >> 0x20);
            auVar58._0_4_ = (float)dVar50;
            auVar58._8_8_ = 0;
            auVar58 = insertps(auVar62,auVar58,0x28);
            auVar48 = auVar58._0_12_;
            auVar66._0_8_ = (auVar66._8_8_ * dVar4 + *pdVar46 * dVar49) * dVar16;
            auVar62._4_12_ = auVar66._4_12_;
            auVar62._0_4_ = (float)auVar66._0_8_;
            auVar58 = insertps(ZEXT416((uint)(float)((auVar66._8_8_ * dVar5 - dVar4 * dVar49) *
                                                    dVar15)),auVar67,0x1c);
            auVar58 = insertps(auVar58,ZEXT416((uint)(float)((dVar49 * dVar6 + dVar14) * dVar15)),
                               0x28);
            auVar51 = auVar58._0_12_;
            auVar58 = insertps(auVar62,ZEXT416((uint)(float)((dVar49 * dVar6 - dVar14) * dVar16)),
                               0x1c);
            auVar58 = insertps(auVar58,ZEXT416((uint)(float)((1.0 - (dVar53 + dVar6 * auVar66._8_8_)
                                                             ) * dVar16)),0x28);
            auVar54 = auVar58._0_12_;
            auVar58 = insertps(ZEXT416((uint)(float)pdVar46[4]),ZEXT416((uint)(float)pdVar46[5]),
                               0x10);
            auVar58 = insertps(auVar58,ZEXT416((uint)(float)pdVar46[6]),0x20);
            auVar58 = insertps(auVar58,0x3f800000,0x30);
            auVar55 = auVar58._0_12_;
          }
          lVar37 = *(longlong *)param_1[2];
          lVar38 = (longlong)iVar41 * 0x10;
          puVar2 = (undefined4 *)(lVar37 + lVar38);
          *puVar2 = auVar48._0_4_;
          puVar2[1] = auVar51._0_4_;
          puVar2[2] = auVar54._0_4_;
          puVar2[3] = auVar55._0_4_;
          puVar2 = (undefined4 *)(lVar37 + 0x10 + lVar38);
          *puVar2 = auVar48._4_4_;
          puVar2[1] = auVar51._4_4_;
          puVar2[2] = auVar54._4_4_;
          puVar2[3] = auVar55._4_4_;
          puVar2 = (undefined4 *)(lVar37 + 0x20 + lVar38);
          *puVar2 = auVar48._8_4_;
          puVar2[1] = auVar51._8_4_;
          puVar2[2] = auVar54._8_4_;
          puVar2[3] = auVar55._8_4_;
          iVar41 = iVar41 + 3;
          iVar42 = iVar42 + 1;
        } while (iVar10 != iVar42);
      }
      lVar40 = lVar40 + 0xf8;
    } while (lVar40 != lVar36);
  }
  lVar36 = *(longlong *)param_1[3];
  lVar40 = (ulonglong)*(uint *)(lVar36 + 700) * 0x10;
  iVar41 = (int)param_2[1];
  iVar42 = *(int *)(lVar36 + 0x2c8 + lVar40) + iVar41;
  iVar10 = iVar42 * 3;
  if (iVar42 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (*(int *)(param_1[4] + 0xc) < iVar10) {
    FUN_14499148c();
    iVar41 = (int)param_2[1];
  }
  lVar36 = lVar36 + lVar40;
  if (0 < iVar41) {
    lVar40 = 8;
    lVar37 = 0;
    do {
      uVar39 = 0xffffffff;
      if ((param_3 != 0) && (lVar37 < *(int *)(param_3 + 0x28))) {
        uVar39 = *(undefined4 *)(*(longlong *)(param_3 + 0x20) + lVar40);
      }
      lVar38 = *param_2;
      dVar4 = *(double *)(lVar38 + -0x28 + lVar40 * 8);
      dVar50 = *(double *)(lVar38 + -0x30 + lVar40 * 8);
      dVar14 = *(double *)(lVar38 + -0x38 + lVar40 * 8);
      dVar5 = *(double *)(lVar38 + -0x40 + lVar40 * 8);
      dVar6 = *(double *)(lVar38 + -0x10 + lVar40 * 8);
      plVar35 = (longlong *)param_1[4];
      dVar7 = *(double *)(lVar38 + -0x18 + lVar40 * 8);
      dVar8 = *(double *)(lVar38 + -0x20 + lVar40 * 8);
      iVar41 = (int)plVar35[1];
      *(uint *)(plVar35 + 1) = iVar41 + 1U;
      if (*(uint *)((longlong)plVar35 + 0xc) < iVar41 + 1U) {
        FUN_1449e2712(plVar35,iVar41);
      }
      lVar44 = *plVar35;
      lVar43 = (longlong)iVar41 * 0x10;
      *(float *)(lVar44 + lVar43) = (float)dVar8;
      *(float *)(lVar44 + 4 + lVar43) = (float)dVar7;
      *(float *)(lVar44 + 8 + lVar43) = (float)dVar6;
      *(undefined4 *)(lVar44 + 0xc + lVar43) = 0x3f800000;
      plVar35 = (longlong *)param_1[4];
      iVar41 = (int)plVar35[1];
      *(uint *)(plVar35 + 1) = iVar41 + 1U;
      if (*(uint *)((longlong)plVar35 + 0xc) < iVar41 + 1U) {
        FUN_1449e2712(plVar35,iVar41);
      }
      lVar44 = *plVar35;
      lVar43 = (longlong)iVar41 * 0x10;
      *(float *)(lVar44 + lVar43) = (float)dVar5;
      *(float *)(lVar44 + 4 + lVar43) = (float)dVar14;
      *(float *)(lVar44 + 8 + lVar43) = (float)dVar50;
      *(float *)(lVar44 + 0xc + lVar43) = (float)dVar4;
      dVar4 = *(double *)(lVar38 + 0x10 + lVar40 * 8);
      plVar35 = (longlong *)param_1[4];
      dVar50 = *(double *)(lVar38 + 8 + lVar40 * 8);
      dVar14 = *(double *)(lVar38 + lVar40 * 8);
      iVar41 = (int)plVar35[1];
      *(uint *)(plVar35 + 1) = iVar41 + 1U;
      if (*(uint *)((longlong)plVar35 + 0xc) < iVar41 + 1U) {
        FUN_1449e2712(plVar35,iVar41);
      }
      lVar38 = *plVar35;
      lVar44 = (longlong)iVar41 * 0x10;
      *(float *)(lVar38 + lVar44) = (float)dVar14;
      *(float *)(lVar38 + 4 + lVar44) = (float)dVar50;
      *(float *)(lVar38 + 8 + lVar44) = (float)dVar4;
      *(undefined4 *)(lVar38 + 0xc + lVar44) = uVar39;
      lVar37 = lVar37 + 1;
      lVar40 = lVar40 + 0xc;
    } while (lVar37 < (int)param_2[1]);
  }
  lVar40 = (longlong)*(int *)(lVar36 + 0x2c8);
  if (lVar40 != 0) {
    puVar45 = *(undefined8 **)(lVar36 + 0x2c0);
    puVar47 = puVar45 + lVar40 * 6;
    do {
      uVar12 = *puVar45;
      uVar33 = puVar45[1];
      auVar58 = *(undefined1 (*) [16])(puVar45 + 2);
      plVar35 = (longlong *)param_1[4];
      uVar39 = *(undefined4 *)(puVar45 + 3);
      iVar41 = (int)plVar35[1];
      *(uint *)(plVar35 + 1) = iVar41 + 1U;
      if (*(uint *)((longlong)plVar35 + 0xc) < iVar41 + 1U) {
        FUN_1449e2712(plVar35,iVar41);
      }
      lVar36 = *plVar35;
      lVar40 = (longlong)iVar41 * 0x10;
      *(int *)(lVar36 + lVar40) = auVar58._0_4_;
      uVar11 = extractps(auVar58,1);
      *(undefined8 *)(lVar36 + 4 + lVar40) = uVar11;
      *(undefined4 *)(lVar36 + 8 + lVar40) = uVar39;
      *(undefined4 *)(lVar36 + 0xc + lVar40) = 0x3f800000;
      plVar35 = (longlong *)param_1[4];
      iVar41 = (int)plVar35[1];
      *(uint *)(plVar35 + 1) = iVar41 + 1U;
      if (*(uint *)((longlong)plVar35 + 0xc) < iVar41 + 1U) {
        FUN_1449e2712(plVar35,iVar41);
      }
      puVar3 = (undefined8 *)(*plVar35 + (longlong)iVar41 * 0x10);
      *puVar3 = uVar12;
      puVar3[1] = uVar33;
      plVar35 = (longlong *)param_1[4];
      auVar58 = *(undefined1 (*) [16])(puVar45 + 4);
      uVar39 = *(undefined4 *)(puVar45 + 5);
      iVar41 = (int)plVar35[1];
      *(uint *)(plVar35 + 1) = iVar41 + 1U;
      if (*(uint *)((longlong)plVar35 + 0xc) < iVar41 + 1U) {
        FUN_1449e2712(plVar35,iVar41);
      }
      lVar36 = *plVar35;
      lVar40 = (longlong)iVar41 * 0x10;
      *(int *)(lVar36 + lVar40) = auVar58._0_4_;
      uVar12 = extractps(auVar58,1);
      *(undefined8 *)(lVar36 + 4 + lVar40) = uVar12;
      *(undefined4 *)(lVar36 + 8 + lVar40) = uVar39;
      *(undefined4 *)(lVar36 + 0xc + lVar40) = 0xffffffff;
      puVar45 = puVar45 + 6;
    } while (puVar45 != puVar47);
  }
  return;
}



// FUNCTION 143a65fec FUN_143a65fec body=306 status=ok
// SIG undefined FUN_143a65fec(void)

void FUN_143a65fec(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  longlong lVar23;
  
  lVar23 = FUN_140ce6716(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  *(undefined1 *)(lVar23 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined1 *)(lVar23 + 0x61) = *(undefined1 *)(param_2 + 0x61);
  *(undefined1 *)(lVar23 + 0x62) = *(undefined1 *)(param_2 + 0x62);
  *(undefined4 *)(lVar23 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  FUN_143a6611e(lVar23,param_2);
  *(undefined4 *)(lVar23 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(lVar23 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(lVar23 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  uVar16 = *(undefined8 *)(param_2 + 0xb0);
  uVar17 = *(undefined8 *)(param_2 + 0xb8);
  uVar18 = *(undefined8 *)(param_2 + 0xc0);
  uVar19 = *(undefined8 *)(param_2 + 200);
  uVar20 = *(undefined8 *)(param_2 + 0xd0);
  uVar21 = *(undefined8 *)(param_2 + 0xd8);
  uVar22 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(lVar23 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(lVar23 + 0xe8) = uVar22;
  *(undefined8 *)(lVar23 + 0xd0) = uVar20;
  *(undefined8 *)(lVar23 + 0xd8) = uVar21;
  *(undefined8 *)(lVar23 + 0xc0) = uVar18;
  *(undefined8 *)(lVar23 + 200) = uVar19;
  *(undefined8 *)(lVar23 + 0xb0) = uVar16;
  *(undefined8 *)(lVar23 + 0xb8) = uVar17;
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  uVar2 = *(undefined4 *)(param_2 + 0x74);
  uVar3 = *(undefined4 *)(param_2 + 0x78);
  uVar4 = *(undefined4 *)(param_2 + 0x7c);
  uVar5 = *(undefined4 *)(param_2 + 0x80);
  uVar6 = *(undefined4 *)(param_2 + 0x84);
  uVar7 = *(undefined4 *)(param_2 + 0x88);
  uVar8 = *(undefined4 *)(param_2 + 0x8c);
  uVar9 = *(undefined4 *)(param_2 + 0x90);
  uVar10 = *(undefined4 *)(param_2 + 0x94);
  uVar11 = *(undefined4 *)(param_2 + 0x98);
  uVar12 = *(undefined4 *)(param_2 + 0x9c);
  uVar13 = *(undefined4 *)(param_2 + 0xa4);
  uVar14 = *(undefined4 *)(param_2 + 0xa8);
  uVar15 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(lVar23 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(lVar23 + 0xa4) = uVar13;
  *(undefined4 *)(lVar23 + 0xa8) = uVar14;
  *(undefined4 *)(lVar23 + 0xac) = uVar15;
  *(undefined4 *)(lVar23 + 0x90) = uVar9;
  *(undefined4 *)(lVar23 + 0x94) = uVar10;
  *(undefined4 *)(lVar23 + 0x98) = uVar11;
  *(undefined4 *)(lVar23 + 0x9c) = uVar12;
  *(undefined4 *)(lVar23 + 0x80) = uVar5;
  *(undefined4 *)(lVar23 + 0x84) = uVar6;
  *(undefined4 *)(lVar23 + 0x88) = uVar7;
  *(undefined4 *)(lVar23 + 0x8c) = uVar8;
  *(undefined4 *)(lVar23 + 0x70) = uVar1;
  *(undefined4 *)(lVar23 + 0x74) = uVar2;
  *(undefined4 *)(lVar23 + 0x78) = uVar3;
  *(undefined4 *)(lVar23 + 0x7c) = uVar4;
  *(undefined4 *)(lVar23 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined8 *)(lVar23 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(lVar23 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined8 *)(lVar23 + 0x104) = *(undefined8 *)(param_2 + 0x104);
  *(undefined8 *)(lVar23 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(lVar23 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined8 *)(lVar23 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_14058aa5c(param_2);
  return;
}



// FUNCTION 143a6611e FUN_143a6611e body=337 status=ok
// SIG undefined FUN_143a6611e(void)

undefined8 * FUN_143a6611e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  uVar3 = param_2[2];
  lVar4 = param_2[3];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[3];
  param_1[2] = uVar3;
  param_1[3] = lVar4;
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
  uVar3 = param_2[4];
  lVar4 = param_2[5];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[5];
  param_1[4] = uVar3;
  param_1[5] = lVar4;
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
  uVar3 = param_2[6];
  lVar4 = param_2[7];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[7];
  param_1[6] = uVar3;
  param_1[7] = lVar4;
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
  uVar3 = param_2[8];
  lVar4 = param_2[9];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[9];
  param_1[8] = uVar3;
  param_1[9] = lVar4;
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
  return param_1;
}



// FUNCTION 143a66270 FUN_143a66270 body=1004 status=ok
// SIG undefined FUN_143a66270(void)

void FUN_143a66270(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
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
  undefined4 uVar16;
  undefined8 uVar17;
  
  *(byte *)(param_2 + 0xc) = *(byte *)(param_3 + 0x2e4) >> 2 & 1;
  *(byte *)((longlong)param_2 + 0x61) = *(byte *)(param_3 + 0x2e4) >> 3 & 1;
  *(byte *)((longlong)param_2 + 0x62) = *(byte *)(param_3 + 0x2e4) >> 4 & 1;
  *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(param_3 + 0x270);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  FUN_143a6611e(param_2,param_3 + 0x378);
  *(undefined4 *)((longlong)param_2 + 100) = *(undefined4 *)(param_3 + 0x2f8);
  *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(param_3 + 0x2fc);
  *(undefined4 *)((longlong)param_2 + 0x6c) = *(undefined4 *)(param_3 + 0x300);
  dVar1 = *(double *)(param_3 + 0x1f8);
  dVar2 = *(double *)(param_3 + 0x200);
  dVar3 = *(double *)(param_3 + 0x208);
  dVar4 = *(double *)(param_3 + 0x210);
  dVar5 = *(double *)(param_3 + 0x218);
  dVar6 = *(double *)(param_3 + 0x220);
  dVar7 = *(double *)(param_3 + 0x228);
  dVar8 = *(double *)(param_3 + 0x230);
  dVar9 = *(double *)(param_3 + 0x238);
  dVar10 = *(double *)(param_3 + 0x240);
  dVar11 = *(double *)(param_3 + 0x248);
  dVar12 = *(double *)(param_3 + 0x250);
  dVar13 = *(double *)(param_3 + 600);
  dVar14 = *(double *)(param_3 + 0x260);
  dVar15 = *(double *)(param_3 + 0x268);
  *(float *)(param_2 + 0x16) = (float)*(double *)(param_3 + 0x1f0);
  *(float *)((longlong)param_2 + 0xb4) = (float)dVar1;
  *(float *)(param_2 + 0x17) = (float)dVar2;
  *(float *)((longlong)param_2 + 0xbc) = (float)dVar3;
  *(float *)(param_2 + 0x18) = (float)dVar4;
  *(float *)((longlong)param_2 + 0xc4) = (float)dVar5;
  *(float *)(param_2 + 0x19) = (float)dVar6;
  *(float *)((longlong)param_2 + 0xcc) = (float)dVar7;
  *(float *)(param_2 + 0x1a) = (float)dVar8;
  *(float *)((longlong)param_2 + 0xd4) = (float)dVar9;
  *(float *)(param_2 + 0x1b) = (float)dVar10;
  *(float *)((longlong)param_2 + 0xdc) = (float)dVar11;
  *(float *)(param_2 + 0x1c) = (float)dVar12;
  *(float *)((longlong)param_2 + 0xe4) = (float)dVar13;
  *(float *)(param_2 + 0x1d) = (float)dVar14;
  *(float *)((longlong)param_2 + 0xec) = (float)dVar15;
  dVar1 = *(double *)(param_3 + 0xf8);
  dVar2 = *(double *)(param_3 + 0x100);
  dVar3 = *(double *)(param_3 + 0x108);
  dVar4 = *(double *)(param_3 + 0x110);
  dVar5 = *(double *)(param_3 + 0x118);
  dVar6 = *(double *)(param_3 + 0x120);
  dVar7 = *(double *)(param_3 + 0x128);
  dVar8 = *(double *)(param_3 + 0x130);
  dVar9 = *(double *)(param_3 + 0x138);
  dVar10 = *(double *)(param_3 + 0x140);
  dVar11 = *(double *)(param_3 + 0x148);
  dVar12 = *(double *)(param_3 + 0x150);
  dVar13 = *(double *)(param_3 + 0x158);
  dVar14 = *(double *)(param_3 + 0x160);
  dVar15 = *(double *)(param_3 + 0x168);
  *(float *)(param_2 + 0xe) = (float)*(double *)(param_3 + 0xf0);
  *(float *)((longlong)param_2 + 0x74) = (float)dVar1;
  *(float *)(param_2 + 0xf) = (float)dVar2;
  *(float *)((longlong)param_2 + 0x7c) = (float)dVar3;
  *(float *)(param_2 + 0x10) = (float)dVar4;
  *(float *)((longlong)param_2 + 0x84) = (float)dVar5;
  *(float *)(param_2 + 0x11) = (float)dVar6;
  *(float *)((longlong)param_2 + 0x8c) = (float)dVar7;
  *(float *)(param_2 + 0x12) = (float)dVar8;
  *(float *)((longlong)param_2 + 0x94) = (float)dVar9;
  *(float *)(param_2 + 0x13) = (float)dVar10;
  *(float *)((longlong)param_2 + 0x9c) = (float)dVar11;
  *(float *)(param_2 + 0x14) = (float)dVar12;
  *(float *)((longlong)param_2 + 0xa4) = (float)dVar13;
  *(float *)(param_2 + 0x15) = (float)dVar14;
  *(float *)((longlong)param_2 + 0xac) = (float)dVar15;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x27c);
  param_2[0x1f] = *(undefined8 *)(param_3 + 0x274);
  *(undefined4 *)((longlong)param_2 + 0x10c) = *(undefined4 *)(param_3 + 0x288);
  *(undefined8 *)((longlong)param_2 + 0x104) = *(undefined8 *)(param_3 + 0x280);
  uVar16 = 0;
  if (*(longlong *)(param_3 + 0x78) == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(*(longlong *)(param_3 + 0x78) + 0x38);
  }
  param_2[10] = uVar17;
  if (*(longlong *)(param_3 + 0x78) != 0) {
    uVar16 = *(undefined4 *)(*(longlong *)(param_3 + 0x78) + 0xc);
  }
  *(undefined4 *)((longlong)param_2 + 0xf4) = uVar16;
  if (*(longlong *)(param_3 + 0x90) == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(*(longlong *)(param_3 + 0x90) + 0x10);
  }
  param_2[0xb] = uVar17;
  return;
}



// FUNCTION 143a6665c FUN_143a6665c body=1200 status=ok
// SIG undefined FUN_143a6665c(void)

longlong FUN_143a6665c(undefined8 *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong unaff_R14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  char local_79;
  longlong *local_78;
  undefined8 uStack_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != 0) {
    lVar5 = FUN_1414199c4();
    cVar3 = param_3;
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (cVar3 = param_3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
       == lVar5 + 0x30)) {
      unaff_R14 = *(longlong *)(param_2 + 0x398);
      if (unaff_R14 == 0) {
        unaff_R14 = 0;
        cVar3 = param_3;
      }
      else {
        cVar3 = param_3;
        if ((*(uint *)(unaff_R14 + 8) >> 0x1e & 1) == 0) {
          lVar5 = (longlong)*(int *)(*(longlong *)*param_1 + 0x78);
          if (lVar5 == 0) goto LAB_143a66a52;
          plVar7 = *(longlong **)(*(longlong *)*param_1 + 0x70);
          plVar11 = plVar7 + lVar5;
          do {
            if (*plVar7 == 0) {
LAB_143a66aff:
              cVar3 = param_3;
              if (plVar7 != (longlong *)0x0) goto LAB_143a66a52;
              break;
            }
            if ((longlong)*(int *)(unaff_R14 + 0x78) != 0) {
              lVar5 = 0;
              do {
                if (*(longlong *)(*(longlong *)(unaff_R14 + 0x70) + lVar5) == *plVar7)
                goto LAB_143a66aff;
                lVar5 = lVar5 + 8;
              } while ((longlong)*(int *)(unaff_R14 + 0x78) * 8 != lVar5);
            }
            plVar7 = plVar7 + 1;
            cVar3 = param_3;
          } while (plVar7 != plVar11);
        }
      }
    }
    do {
      local_79 = cVar3;
      lVar5 = *(longlong *)(param_2 + 0x1c8);
      if (lVar5 == 0) {
        bVar2 = false;
      }
      else {
        local_78 = (longlong *)0x0;
        uStack_70 = 0;
        FUN_1407329d4(lVar5,1,&local_78);
        uVar9 = uStack_70 & 0xffffffff;
        uVar4 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
        if (uStack_70._4_4_ < uVar4) {
          FUN_140612240(&local_78,uVar9);
        }
        plVar11 = local_78;
        memmove(local_78 + 1,local_78,uVar9 << 3);
        *plVar11 = lVar5;
        if ((longlong)(int)uStack_70 == 0) {
          bVar2 = false;
          lVar5 = unaff_R14;
        }
        else {
          plVar7 = local_78 + (int)uStack_70;
          plVar11 = local_78;
          do {
            lVar5 = *plVar11;
            if (lVar5 != 0) {
              if (DAT_14cad2858 == 0) {
                local_68 = FUN_144a7958c;
                local_90 = FUN_14081d0ea;
                local_98 = &LAB_146395584;
                local_a0 = &local_68;
                local_a8 = &LAB_147a0ba80;
                local_b0 = &LAB_14575ccce;
                local_b8 = L"Engine";
                local_c0 = 0x40000000000;
                local_c8 = 0x10000004;
                local_d0 = 0x10;
                local_d8 = 0x1180;
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                              FUN_1463bcebe);
              }
              if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38))
                  && (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) &&
                 (lVar10 = *(longlong *)*param_1, (*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
                lVar8 = *(longlong *)(lVar5 + 0x658);
                if (lVar8 == 0) {
                  lVar8 = *(longlong *)(lVar5 + 0x660);
                  if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) goto LAB_143a669eb;
                  if (lVar8 != 0) goto LAB_143a667d2;
                }
                else {
                  if (DAT_14c950c29 == '\x01') {
LAB_143a669eb:
                    FUN_1456cec3c(lVar8);
                  }
LAB_143a667d2:
                  if (DAT_14cb06da8 == 0) {
                    local_68 = FUN_1449e2820;
                    local_90 = FUN_14081d0ea;
                    local_98 = &LAB_1464003b0;
                    local_a0 = &local_68;
                    local_a8 = &LAB_147d17bdf;
                    local_b0 = &LAB_1417edf22;
                    local_b8 = L"Engine";
                    local_c0 = 0;
                    local_c8 = 0x10000000;
                    local_d0 = 8;
                    local_d8 = 0x588;
                    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                  }
                  if (((*(int *)(DAT_14cb06da8 + 0x38) <=
                        *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) &&
                     ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0)) {
                    lVar8 = (longlong)*(int *)(lVar10 + 0x78);
                    bVar2 = true;
                    param_3 = local_79;
                    if (lVar8 == 0) goto LAB_143a66a1c;
                    plVar6 = *(longlong **)(lVar10 + 0x70);
                    plVar1 = plVar6 + lVar8;
                    do {
                      if (*plVar6 == 0) {
LAB_143a6685a:
                        if (plVar6 != (longlong *)0x0) goto LAB_143a66a1c;
                        break;
                      }
                      if ((longlong)*(int *)(lVar5 + 0x78) != 0) {
                        lVar10 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar5 + 0x70) + lVar10) == *plVar6)
                          goto LAB_143a6685a;
                          lVar10 = lVar10 + 8;
                        } while ((longlong)*(int *)(lVar5 + 0x78) * 8 != lVar10);
                      }
                      plVar6 = plVar6 + 1;
                    } while (plVar6 != plVar1);
                  }
                }
              }
            }
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar7);
          bVar2 = false;
          lVar5 = unaff_R14;
          param_3 = local_79;
        }
LAB_143a66a1c:
        unaff_R14 = lVar5;
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8(local_78);
        }
      }
      if ((bVar2) || (param_3 == '\0')) {
        if (!bVar2) {
          unaff_R14 = 0;
        }
        goto LAB_143a66a52;
      }
      param_2 = FUN_1433b9ef0(param_2);
      cVar3 = local_79;
    } while (param_2 != 0);
  }
  unaff_R14 = 0;
LAB_143a66a52:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_R14;
}



// FUNCTION 143a66b0e FUN_143a66b0e body=418 status=ok
// SIG undefined FUN_143a66b0e(void)

int FUN_143a66b0e(longlong param_1,longlong *param_2,longlong *param_3,byte *param_4,byte param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  
  if (((longlong)*(int *)(param_1 + 0xb8) != 0 & (param_5 ^ 1)) == 0) {
    iVar9 = *(int *)(param_1 + 0xc0);
    iVar5 = (**(code **)(*param_2 + 0x3c0))(param_2);
    iVar5 = iVar5 + -1;
    if (iVar9 != -1) {
      iVar9 = iVar5;
      if (*(int *)(param_1 + 0xc0) < iVar5) {
        iVar9 = *(int *)(param_1 + 0xc0);
      }
      iVar5 = 0;
      if (0 < iVar9) {
        iVar5 = iVar9;
      }
    }
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0xb0);
    plVar1 = plVar10 + *(int *)(param_1 + 0xb8);
    iVar9 = -1;
    do {
      if ((longlong)(int)param_2[0x95] == 0) {
        return -1;
      }
      lVar3 = param_2[0x94];
      lVar8 = 0;
      while (*(longlong *)(lVar3 + lVar8) != *plVar10) {
        lVar8 = lVar8 + 0x30;
        if ((longlong)(int)param_2[0x95] * 0x30 == lVar8) {
          return -1;
        }
      }
      iVar7 = (int)(lVar8 >> 4) * -0x55555555;
      if (iVar7 == -1) {
        return -1;
      }
      lVar6 = (longlong)iVar7 * 0x30;
      lVar8 = lVar3 + lVar6;
      lVar4 = param_2[0x98];
      iVar2 = *(int *)(lVar3 + 8 + lVar6);
      iVar5 = (**(code **)(*param_2 + 0x3c0))(param_2);
      iVar5 = iVar5 + -1;
      if (iVar2 != -1) {
        iVar2 = *(int *)(lVar8 + 8);
        if (iVar2 < iVar5) {
          iVar5 = iVar2;
        }
        if (iVar5 < 1) {
          iVar5 = 0;
        }
      }
      if ((iVar9 != -1) && (bVar11 = iVar5 != iVar9, iVar5 = iVar9, bVar11)) {
        return -1;
      }
      if (*(int *)(lVar4 + 8 + (longlong)iVar7 * 0x78) < 1) {
        return -1;
      }
      iVar9 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar9 + 1U) {
        FUN_1446f48e2(param_3,iVar9);
      }
      *(int *)(*param_3 + (longlong)iVar9 * 4) = iVar7;
      *param_4 = *param_4 & *(byte *)(lVar8 + 0xc);
      plVar10 = plVar10 + 1;
      iVar9 = iVar5;
    } while (plVar10 != plVar1);
  }
  return iVar5;
}



// FUNCTION 143a66cb0 FUN_143a66cb0 body=158 status=ok
// SIG undefined FUN_143a66cb0(void)

undefined2 * FUN_143a66cb0(undefined2 *param_1,undefined2 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    uVar3 = *(undefined8 *)(param_2 + 4);
    lVar4 = *(longlong *)(param_2 + 8);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_1 + 8);
    *(undefined8 *)(param_1 + 4) = uVar3;
    *(longlong *)(param_1 + 8) = lVar4;
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
    *(undefined8 *)(param_2 + 4) = 0;
    plVar5 = *(longlong **)(param_2 + 8);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_2 + 8) = 0;
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
  }
  return param_1;
}



// FUNCTION 143a66d4e FUN_143a66d4e body=86 status=ok
// SIG undefined FUN_143a66d4e(void)

void FUN_143a66d4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 8) != 0) && ((*(byte *)(param_1 + 1) & 1) != 0)) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      FUN_143a695c4();
    }
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
                    /* WARNING: Could not recover jumptable at 0x000143a66da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143a66da4 FUN_143a66da4 body=906 status=ok
// SIG undefined FUN_143a66da4(void)

code * FUN_143a66da4(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  code *local_30;
  
  pcVar5 = (code *)(DAT_14c707940 ^ (ulonglong)auStack_68);
  local_30 = pcVar5;
  if (param_3 != 0) {
    if (*param_2 != DAT_14cb3d350) {
      FUN_14392ec9e(param_1,param_2,param_3,param_4);
      if (((longlong *)*param_4 == (longlong *)0x0 || (int)param_4[1] == 0) ||
         (pcVar5 = (code *)(**(code **)(*(longlong *)*param_4 + 0x30))(), (char)pcVar5 == '\0')) {
        FUN_14393040a(param_1,param_2,param_3,param_4);
        if (((longlong *)*param_4 == (longlong *)0x0 || (int)param_4[1] == 0) ||
           (pcVar5 = (code *)(**(code **)(*(longlong *)*param_4 + 0x30))(), (char)pcVar5 == '\0')) {
          FUN_1480d6cf4(param_1,param_2,param_3,param_4);
          bVar10 = (int)param_4[1] == 0;
          pcVar5 = (code *)(ulonglong)bVar10;
          if (((longlong *)*param_4 == (longlong *)0x0 || bVar10) ||
             (pcVar5 = (code *)(**(code **)(*(longlong *)*param_4 + 0x30))(), (char)pcVar5 == '\0'))
          goto LAB_143a66f3f;
        }
        if (*(char *)(param_3 + 0x318) == '\0') {
          uVar1 = *(uint *)(param_3 + 0x54);
          pcVar5 = (code *)(ulonglong)uVar1;
          if ((((uVar1 != 0) && (uVar2 = *(uint *)(param_3 + 0x50), -1 < (int)uVar2)) &&
              ((int)uVar2 < DAT_14c9647dc)) &&
             ((lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar9 != 0 &&
              (*(uint *)(lVar9 + 0x10) == uVar1)))) {
            pcVar5 = (code *)(ulonglong)*(uint *)(lVar9 + 8);
          }
        }
      }
      goto LAB_143a66f3f;
    }
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar3 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_40[2] = lVar6;
    *local_40 = &PTR_FUN_14addd5f0;
    local_40[3] = 0;
    iVar8 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_40 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar8 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar8 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar8 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar7;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar8 = iVar7;
        }
      }
    }
    iVar7 = local_38;
    puVar4 = local_40;
    *(int *)((longlong)puVar3 + 0x1c) = iVar8;
    pcVar5 = FUN_140981308;
    puVar3[4] = FUN_140981308;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    if ((int)param_4[1] == 0) {
LAB_143a66ec3:
      if (*param_4 != 0) {
        pcVar5 = (code *)FUN_1400020a8();
      }
    }
    else {
      puVar3 = (undefined8 *)*param_4;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        pcVar5 = (code *)FUN_1446efa72(param_4,0,0,0x10);
        *(undefined4 *)(param_4 + 1) = 0;
        goto LAB_143a66ec3;
      }
    }
    *param_4 = (longlong)puVar4;
    *(int *)(param_4 + 1) = iVar7;
    if (local_38 != 0) {
      if (local_40 == (undefined8 *)0x0) goto LAB_143a66f3f;
      (**(code **)*local_40)(local_40,0);
      pcVar5 = (code *)FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      pcVar5 = (code *)FUN_1400020a8();
    }
    goto LAB_143a66f3f;
  }
  if ((int)param_4[1] == 0) {
LAB_143a66f25:
    if (*param_4 != 0) {
      pcVar5 = (code *)FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*param_4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      pcVar5 = (code *)FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_143a66f25;
    }
  }
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
LAB_143a66f3f:
  if (((ulonglong)local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar5;
}



// FUNCTION 143a67130 FUN_143a67130 body=4960 status=ok
// SIG undefined FUN_143a67130(void)

void FUN_143a67130(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined **ppuVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined ***pppuVar18;
  longlong *plVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  undefined1 auStack_128 [32];
  code **local_108;
  code *local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [4];
  code *local_b8;
  longlong lStack_b0;
  undefined ***local_a8;
  longlong lStack_a0;
  undefined **local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar4 = *(longlong **)(param_1 + 0x28);
  plVar19 = *(longlong **)(param_3 + 0x100);
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar10 = *piVar2;
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_143a67192;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143a67197;
      goto LAB_143a671c6;
    }
LAB_143a67197:
    FUN_140a0a464(plVar4 + 2,plVar19);
  }
  else {
LAB_143a67192:
    if (iVar10 == 0x10) goto LAB_143a67197;
LAB_143a671c6:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*piVar2 == 2)) goto LAB_143a67197;
      if (*piVar2 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_143a67197;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar13 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar16 = (uint *)*puVar13;
      if (puVar16 != (uint *)0x0) goto LAB_143a67379;
      while( true ) {
        uVar17 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar17 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar17 | 1;
          __tlregdtor(&LAB_143a6cf3b);
        }
        lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar15 = *(undefined4 **)(lVar21 + 0x310);
        *(undefined8 *)(lVar21 + 0x310) = 0;
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar15 = 0xffffffff;
        *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
        puVar15[0x12] = 0;
        *puVar13 = puVar15;
        FUN_140217a48(puVar13);
        puVar16 = (uint *)*puVar13;
LAB_143a67379:
        puVar26 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar26 + 0x17);
        uVar17 = puVar16[0x12];
        if (puVar20 <= puVar16 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
          LOCK();
          uVar3 = *puVar16;
          *puVar16 = *puVar16 + uVar17 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar17) != 0xffffffff) break;
          puVar16 = (uint *)*puVar13;
          *puVar16 = 0xffffffff;
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar13 = puVar16;
          puVar26 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar26 + 0x17);
          uVar17 = 0;
          if (puVar20 <= puVar16 + 0x4000) {
            uVar17 = 1;
            goto LAB_143a673f9;
          }
        }
      }
      uVar17 = uVar17 + 1;
LAB_143a673f9:
      *(uint **)(puVar16 + 0x10) = puVar20;
      puVar16[0x12] = uVar17;
      iVar10 = 0;
      FUN_1447247dc(puVar26,0);
      *puVar26 = &PTR_FUN_14addd6d0;
      puVar26[0x15] = plVar4;
      puVar26[0x16] = plVar19;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar17 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
          uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
          iVar10 = 0;
        }
        else {
          uVar22 = 2;
        }
      }
      else {
        iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar22 = 5;
      }
      if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
      }
      puVar26[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar26[9] = puVar26;
      puVar26[10] = puVar26;
      lVar21 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar21 == 0) {
        uVar9 = 1;
        if ((char)uVar22 != '\x06') {
          uVar9 = uVar22;
        }
        uVar22 = uVar9;
        uVar14 = 0;
      }
      else {
        if ((char)uVar22 == '\x06') {
          uVar22 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
        }
        uVar14 = *(undefined8 *)(lVar21 + 0x30);
      }
      puVar26[0xf] = uVar14;
      puVar26[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar26 + 0x1c) = iVar10;
      if (puVar26 == (undefined8 *)0x0) {
        local_b8 = (code *)CONCAT71(local_b8._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
        UNLOCK();
        local_b8 = (code *)CONCAT71(local_b8._1_7_,1);
        FUN_1447439e4(puVar26);
        LOCK();
        piVar1 = (int *)(puVar26 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar26)(puVar26,1);
        }
      }
    }
    else {
      local_108 = &local_b8;
      local_a8 = (undefined ***)0x0;
      local_98 = &PTR_LAB_14addd660;
      local_b8 = (code *)&LAB_143a7070c;
      plStack_90 = plVar4;
      local_88 = plVar19;
      FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDestroySkeletalMeshInstanceData",&DAT_14cb3d688);
      if (local_b8 != (code *)0x0) {
        pppuVar18 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar18 = &local_98;
        }
        (*(code *)(*pppuVar18)[2])();
      }
    }
  }
  plVar4 = *(longlong **)(param_2 + 0x308);
  plVar19 = *(longlong **)(param_2 + 0x310);
  if (plVar4 != (longlong *)0x0 || plVar19 != (longlong *)0x0) {
    iVar10 = *piVar2;
    if (DAT_14c86a9fc == 0) {
      if (iVar10 != 2) {
        if (iVar10 != 1) goto LAB_143a67291;
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_143a6729a;
        goto LAB_143a67610;
      }
LAB_143a6729a:
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
        (**(code **)*plVar4)(plVar4,1);
      }
      if (plVar19 != (longlong *)0x0) {
        (**(code **)(*plVar19 + 0x20))(plVar19);
        puVar13 = (undefined8 *)*plVar19;
        plVar25 = plVar19;
LAB_143a672cd:
        (*(code *)*puVar13)(plVar25,1);
      }
    }
    else {
LAB_143a67291:
      if (iVar10 == 0x10) goto LAB_143a6729a;
LAB_143a67610:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar2 == 2)) goto LAB_143a6729a;
        if (*piVar2 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_143a6729a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar13 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar16 = (uint *)*puVar13;
        if (puVar16 != (uint *)0x0) goto LAB_143a67939;
        do {
          uVar17 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar17 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar17 | 1;
            __tlregdtor(&LAB_143a6cf3b);
          }
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar15 = *(undefined4 **)(lVar21 + 0x310);
          *(undefined8 *)(lVar21 + 0x310) = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar13 = puVar15;
          FUN_140217a48(puVar13);
          puVar16 = (uint *)*puVar13;
LAB_143a67939:
          uVar22 = *(longlong *)(puVar16 + 0x10) + 7;
          uVar17 = puVar16[0x12];
          while( true ) {
            plVar25 = (longlong *)(uVar22 & 0xfffffffffffffff8);
            if (plVar25 + 0x17 <= puVar16 + 0x4000) {
              *(longlong **)(puVar16 + 0x10) = plVar25 + 0x17;
              puVar16[0x12] = uVar17 + 1;
              iVar10 = 0;
              FUN_1447247dc(plVar25,0);
              *plVar25 = (longlong)&PTR_FUN_14addd5b0;
              plVar25[0x15] = (longlong)plVar4;
              plVar25[0x16] = (longlong)plVar19;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar17 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
                  uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
                  iVar10 = 0;
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar22 = 5;
              }
              if (*(code **)(plVar25[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(plVar25[0xe] + 0x18))(plVar25 + 0xe,plVar25 + 9);
              }
              plVar25[0xe] = (longlong)
                             LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              plVar25[9] = (longlong)plVar25;
              plVar25[10] = (longlong)plVar25;
              lVar21 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar21 == 0) {
                uVar9 = 1;
                if ((char)uVar22 != '\x06') {
                  uVar9 = uVar22;
                }
                uVar22 = uVar9;
                lVar21 = 0;
              }
              else {
                if ((char)uVar22 == '\x06') {
                  uVar22 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
                }
                lVar21 = *(longlong *)(lVar21 + 0x30);
              }
              plVar25[0xf] = lVar21;
              plVar25[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)plVar25 + 0x1c) = iVar10;
              if (plVar25 == (longlong *)0x0) {
                local_b8 = (code *)CONCAT71(local_b8._1_7_,1);
                FUN_1447439e4(0);
                goto LAB_143a676b1;
              }
              LOCK();
              *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
              UNLOCK();
              local_b8 = (code *)CONCAT71(local_b8._1_7_,1);
              FUN_1447439e4(plVar25);
              LOCK();
              plVar4 = plVar25 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 != 0) goto LAB_143a676b1;
              puVar13 = (undefined8 *)*plVar25;
              goto LAB_143a672cd;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar3 = *puVar16;
            *puVar16 = *puVar16 + uVar17 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar17) != 0xffffffff) break;
            puVar16 = (uint *)*puVar13;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar13 = puVar16;
            uVar22 = (longlong)puVar16 + 0x5f;
            uVar17 = 0;
          }
        } while( true );
      }
      local_108 = &local_b8;
      local_a8 = (undefined ***)0x0;
      local_98 = &PTR_LAB_14addd590;
      local_b8 = FUN_143a7016e;
      plStack_90 = plVar4;
      local_88 = plVar19;
      FUN_14005a792(&DAT_14ca9a440,L"DeleteResource",&DAT_14cb3d680);
      if (local_b8 != (code *)0x0) {
        pppuVar18 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar18 = &local_98;
        }
        (*(code *)(*pppuVar18)[2])();
      }
    }
LAB_143a676b1:
    *(undefined8 *)(param_2 + 0x308) = 0;
    *(undefined8 *)(param_2 + 0x310) = 0;
  }
  FUN_143a6d2fc(*(undefined8 *)(param_2 + 0x3c8),*(undefined4 *)(param_2 + 0x3d0));
  *(undefined4 *)(param_2 + 0x3d0) = 0;
  if (*(int *)(param_2 + 0x3d4) != 0) {
    FUN_14182b678(param_2 + 0x3c8,0);
  }
  plVar4 = (longlong *)(param_2 + 1000);
  FUN_1409f2caa(plVar4);
  *(undefined4 *)(param_2 + 0x3e0) = 0;
  if (*(int *)(param_2 + 0x3e4) != 0) {
    FUN_14182b7b0(param_2 + 0x3d8,0);
  }
  pcVar5 = *(code **)(param_2 + 0x328);
  if ((pcVar5 == (code *)0x0) || (*(int *)(pcVar5 + 8) == 0)) goto LAB_143a67d91;
  lStack_b0 = *(longlong *)(param_2 + 0x330);
  if (lStack_b0 != 0) {
    LOCK();
    *(int *)(lStack_b0 + 8) = *(int *)(lStack_b0 + 8) + 1;
    UNLOCK();
  }
  local_a8 = *(undefined ****)(param_2 + 0x338);
  lStack_a0 = *(longlong *)(param_2 + 0x340);
  if (lStack_a0 != 0) {
    LOCK();
    *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
    UNLOCK();
  }
  local_98 = *(undefined ***)(param_2 + 0x348);
  plStack_90 = *(longlong **)(param_2 + 0x350);
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_90 + 8) = *(int *)((longlong)plStack_90 + 8) + 1;
    UNLOCK();
  }
  local_88 = *(longlong **)(param_2 + 0x358);
  lStack_80 = *(longlong *)(param_2 + 0x360);
  if (lStack_80 != 0) {
    LOCK();
    *(int *)(lStack_80 + 8) = *(int *)(lStack_80 + 8) + 1;
    UNLOCK();
  }
  local_78 = *(longlong *)(param_2 + 0x368);
  lStack_70 = *(longlong *)(param_2 + 0x370);
  if (lStack_70 != 0) {
    LOCK();
    *(int *)(lStack_70 + 8) = *(int *)(lStack_70 + 8) + 1;
    UNLOCK();
  }
  iVar10 = *piVar2;
  local_b8 = pcVar5;
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_143a67804;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143a6780d;
      goto LAB_143a67bcf;
    }
LAB_143a6780d:
    iVar10 = *(int *)(local_b8 + 8);
    if ((longlong)iVar10 != 0) {
      lVar21 = *(longlong *)local_b8;
      lVar23 = 0;
      do {
        plVar19 = *(longlong **)(lVar21 + lVar23);
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19);
          (**(code **)*plVar19)(plVar19,1);
        }
        lVar23 = lVar23 + 8;
      } while ((longlong)iVar10 * 8 != lVar23);
    }
    lVar21 = (longlong)local_a8[1];
    if ((longlong)(int)lVar21 != 0) {
      lVar23 = (longlong)*local_a8;
      lVar24 = 0;
      do {
        plVar19 = *(longlong **)(lVar23 + lVar24);
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19);
          (**(code **)*plVar19)(plVar19,1);
        }
        lVar24 = lVar24 + 8;
      } while ((longlong)(int)lVar21 * 8 != lVar24);
    }
  }
  else {
LAB_143a67804:
    if (iVar10 == 0x10) goto LAB_143a6780d;
LAB_143a67bcf:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (*piVar2 != 2)) {
        if (*piVar2 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_143a683b1;
        }
        goto LAB_143a67bfb;
      }
LAB_143a683b1:
      iVar10 = *(int *)(local_b8 + 8);
      if ((longlong)iVar10 != 0) {
        lVar21 = *(longlong *)local_b8;
        lVar23 = 0;
        do {
          plVar19 = *(longlong **)(lVar21 + lVar23);
          if (plVar19 != (longlong *)0x0) {
            (**(code **)(*plVar19 + 0x20))(plVar19);
            (**(code **)*plVar19)(plVar19,1);
          }
          lVar23 = lVar23 + 8;
        } while ((longlong)iVar10 * 8 != lVar23);
      }
      lVar21 = (longlong)local_a8[1];
      if ((longlong)(int)lVar21 != 0) {
        lVar23 = (longlong)*local_a8;
        lVar24 = 0;
        do {
          plVar19 = *(longlong **)(lVar23 + lVar24);
          if (plVar19 != (longlong *)0x0) {
            (**(code **)(*plVar19 + 0x20))(plVar19);
            (**(code **)*plVar19)(plVar19,1);
          }
          lVar24 = lVar24 + 8;
        } while ((longlong)(int)lVar21 * 8 != lVar24);
      }
    }
    else {
LAB_143a67bfb:
      if (DAT_14ca9a43c == 0) {
        puVar13 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar16 = (uint *)*puVar13;
        if (puVar16 != (uint *)0x0) goto LAB_143a67f93;
        while( true ) {
          uVar17 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar17 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar17 | 1;
            __tlregdtor(&LAB_143a6cf3b);
          }
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar15 = *(undefined4 **)(lVar21 + 0x310);
          *(undefined8 *)(lVar21 + 0x310) = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar13 = puVar15;
          FUN_140217a48(puVar13);
          puVar16 = (uint *)*puVar13;
LAB_143a67f93:
          puVar26 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar26 + 0x1f);
          uVar17 = puVar16[0x12];
          if (puVar20 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar3 = *puVar16;
            *puVar16 = *puVar16 + uVar17 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar17) != 0xffffffff) break;
            puVar16 = (uint *)*puVar13;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar13 = puVar16;
            puVar26 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
            puVar20 = (uint *)(puVar26 + 0x1f);
            uVar17 = 0;
            if (puVar20 <= puVar16 + 0x4000) {
              uVar17 = 1;
              goto LAB_143a68013;
            }
          }
        }
        uVar17 = uVar17 + 1;
LAB_143a68013:
        *(uint **)(puVar16 + 0x10) = puVar20;
        puVar16[0x12] = uVar17;
        iVar10 = 0;
        FUN_1447247dc(puVar26,0);
        *puVar26 = &PTR_FUN_14addd5e0;
        puVar26[0x15] = local_b8;
        puVar26[0x16] = lStack_b0;
        local_b8 = (code *)0x0;
        lStack_b0 = 0;
        puVar26[0x17] = local_a8;
        puVar26[0x18] = lStack_a0;
        local_a8 = (undefined ***)0x0;
        lStack_a0 = 0;
        puVar26[0x19] = local_98;
        puVar26[0x1a] = plStack_90;
        local_98 = (undefined **)0x0;
        plStack_90 = (longlong *)0x0;
        puVar26[0x1b] = local_88;
        puVar26[0x1c] = lStack_80;
        local_88 = (longlong *)0x0;
        lStack_80 = 0;
        puVar26[0x1d] = local_78;
        puVar26[0x1e] = lStack_70;
        local_78 = 0;
        lStack_70 = 0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar17 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
            iVar10 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
        }
        puVar26[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar26[9] = puVar26;
        puVar26[10] = puVar26;
        lVar21 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar21 == 0) {
          uVar9 = 1;
          if ((char)uVar22 != '\x06') {
            uVar9 = uVar22;
          }
          uVar22 = uVar9;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar21 + 0x30);
        }
        puVar26[0xf] = uVar14;
        puVar26[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar26 + 0x1c) = iVar10;
        if (puVar26 == (undefined8 *)0x0) {
          local_f8[0] = (code *)CONCAT71(local_f8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
          UNLOCK();
          local_f8[0] = (code *)CONCAT71(local_f8[0]._1_7_,1);
          FUN_1447439e4(puVar26);
          LOCK();
          piVar2 = (int *)(puVar26 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar26)(puVar26,1);
          }
        }
      }
      else {
        local_f8[0] = (code *)0x0;
        local_e8 = (longlong *)FUN_14001cc68(0x58,8);
        lVar8 = lStack_70;
        lVar7 = local_78;
        lVar24 = lStack_80;
        plVar25 = local_88;
        plVar19 = plStack_90;
        ppuVar6 = local_98;
        lVar23 = lStack_a0;
        pppuVar18 = local_a8;
        lVar21 = lStack_b0;
        pcVar5 = local_b8;
        *local_e8 = (longlong)&PTR_LAB_14addd5c0;
        local_b8 = (code *)0x0;
        lStack_b0 = 0;
        local_a8 = (undefined ***)0x0;
        lStack_a0 = 0;
        local_98 = (undefined **)0x0;
        plStack_90 = (longlong *)0x0;
        local_88 = (longlong *)0x0;
        lStack_80 = 0;
        local_78 = 0;
        lStack_70 = 0;
        local_e8[1] = (longlong)pcVar5;
        local_e8[2] = lVar21;
        local_e8[3] = (longlong)pppuVar18;
        local_e8[4] = lVar23;
        local_e8[5] = (longlong)ppuVar6;
        local_e8[6] = (longlong)plVar19;
        local_e8[7] = (longlong)plVar25;
        local_e8[8] = lVar24;
        local_e8[9] = lVar7;
        local_e8[10] = lVar8;
        if (local_e8 + 1 != (longlong *)0x0) {
          local_f8[0] = FUN_143a703a6;
        }
        local_108 = local_f8;
        FUN_14005a792(&DAT_14ca9a440,L"DeleteResource",&DAT_14cb3d684);
        if (local_f8[0] != (code *)0x0) {
          plVar19 = local_e8;
          if (local_e8 == (longlong *)0x0) {
            plVar19 = local_d8;
          }
          (**(code **)(*plVar19 + 0x10))();
        }
      }
    }
  }
  FUN_14058aa5c(&local_b8);
  local_78 = 0;
  lStack_70 = 0;
  local_88 = (longlong *)0x0;
  lStack_80 = 0;
  local_98 = (undefined **)0x0;
  plStack_90 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  lStack_a0 = 0;
  local_b8 = (code *)0x0;
  lStack_b0 = 0;
  FUN_143a6cf62(param_2 + 0x328,&local_b8);
  FUN_14058aa5c(&local_b8);
  local_78 = 0;
  lStack_70 = 0;
  local_88 = (longlong *)0x0;
  lStack_80 = 0;
  local_98 = (undefined **)0x0;
  plStack_90 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  lStack_a0 = 0;
  local_b8 = (code *)0x0;
  lStack_b0 = 0;
  FUN_143a6cf62(param_2 + 0x378,&local_b8);
  FUN_14058aa5c(&local_b8);
LAB_143a67d91:
  *(undefined4 *)(param_2 + 0x430) = 0;
  if (*(longlong *)(param_2 + 0x428) != 0) {
    FUN_1400020a8();
  }
  FUN_1409f2e2e(plVar4);
  if (*(longlong *)(param_2 + 0x408) != 0) {
    FUN_1400020a8();
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x3d8) != 0) {
    FUN_1400020a8();
  }
  FUN_143a6d2fc(*(undefined8 *)(param_2 + 0x3c8),*(undefined4 *)(param_2 + 0x3d0));
  if (*(longlong *)(param_2 + 0x3c8) != 0) {
    FUN_1400020a8();
  }
  FUN_14058aa5c(param_2 + 0x378);
  FUN_14058aa5c(param_2 + 0x328);
  puVar13 = *(undefined8 **)(param_2 + 800);
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar13 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  lVar21 = 0;
  do {
    if (*(longlong *)(param_2 + 0x2d0 + lVar21) != 0) {
      FUN_1400020a8();
    }
    lVar21 = lVar21 + -0x10;
  } while (lVar21 != -0x20);
  if (*(longlong *)(param_2 + 0x2a8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x298) != 0) {
    FUN_1400020a8();
  }
  FUN_140296a6e(param_2 + 0xb0);
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_143a66d4e(param_2 + 0x88);
  FUN_14392eaf2(param_2 + 0x70);
  FUN_140e956ce(param_2 + 0x58);
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a68492 FUN_143a68492 body=3998 status=ok
// SIG undefined FUN_143a68492(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a68492(undefined8 param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined4 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  float *pfVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  char *local_1d0;
  wchar_t *local_1c8;
  undefined1 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  float local_190;
  float local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  float fStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar4 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
    lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar23 = lVar4 + 0x48;
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar23 = *(longlong *)(lVar4 + 0x50);
    }
    iVar17 = *(int *)(lVar23 + (ulonglong)
                               (*(int *)(lVar4 + 0x58) - 1U &
                               (int)lVar16 + (int)((ulonglong)lVar16 >> 0x20) * 0x17) * 4);
    if (iVar17 != -1) {
      do {
        lVar23 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar17 * 0x130;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar17 * 0x130) == lVar16)
        goto LAB_143a68588;
        iVar17 = *(int *)(lVar23 + 0x120);
      } while (iVar17 != -1);
    }
  }
  lVar23 = 0;
LAB_143a68588:
  uVar19 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3d710) && (FUN_144b3d300(&DAT_14cb3d710), DAT_14cb3d710 == -1)) {
    FUN_14158b3b2(&local_178);
    local_1a0 = (code *)((ulonglong)local_1a0 & 0xffffffffffffff00);
    local_1b0 = (undefined8 *)((ulonglong)local_1b0 & 0xffffffffffffff00);
    local_1d0 = "Unknown";
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1e8 = L"FShaderParameters";
    local_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)CONCAT44(local_1c0._4_4_,0x1e0);
    local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,0x57);
    local_1b8 = &local_178;
    FUN_140b49562(&DAT_14cb3d690,0,1);
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_143a708e3);
    _Init_thread_footer(&DAT_14cb3d710);
  }
  plVar25 = (longlong *)((ulonglong)uVar19 + *(longlong *)(param_2 + 0x38));
  *(uint *)(param_2 + 0x50) = uVar19 + _DAT_14cb3d6cc;
  if ((((lVar23 != 0) && (-1 < (int)param_3)) &&
      (plVar18 = *(longlong **)(lVar23 + 0x10), plVar18 != (longlong *)0x0)) &&
     ((int)param_3 < (int)plVar18[1])) {
    uVar24 = (ulonglong)param_3;
    lVar4 = *(longlong *)(*plVar18 + uVar24 * 8);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x128) != 0)) {
      plVar25[1] = *(longlong *)(lVar4 + 0x128);
      *plVar25 = *(longlong *)(lVar4 + 0x130);
      plVar25[8] = *(longlong *)(lVar4 + 0x138);
      plVar25[9] = *(longlong *)(lVar4 + 0x140);
      plVar25[10] = *(longlong *)(lVar4 + 0x148);
      *(undefined4 *)(plVar25 + 0x12) = *(undefined4 *)(lVar4 + 0x150);
      *(undefined4 *)(plVar25 + 0x11) = *(undefined4 *)(lVar4 + 0x170);
      *(undefined4 *)((longlong)plVar25 + 0x8c) = *(undefined4 *)(lVar4 + 0x174);
      plVar25[0xb] = *(longlong *)(lVar4 + 0x20);
      *(undefined4 *)(plVar25 + 0xc) = *(undefined4 *)(lVar4 + 0x3c);
      *(undefined4 *)((longlong)plVar25 + 100) = *(undefined4 *)(lVar4 + 0x40);
      plVar25[0xd] = *(longlong *)(lVar4 + 0xb0);
      plVar25[0xe] = *(longlong *)(lVar4 + 0xc0);
      plVar25[0xf] = *(longlong *)(lVar4 + 0xd0);
      lVar16 = *(longlong *)(*(longlong *)(**(longlong **)(lVar23 + 0x30) + uVar24 * 8) + 0x18);
      if (lVar16 == 0) {
        lVar16 = DAT_14cb428f0;
      }
      plVar25[2] = lVar16;
      lVar16 = *(longlong *)(*(longlong *)(**(longlong **)(lVar23 + 0x40) + uVar24 * 8) + 0x18);
      if (lVar16 == 0) {
        lVar16 = DAT_14cb428f0;
      }
      plVar25[3] = lVar16;
      lVar16 = DAT_14cb427b0;
      uVar19 = (uint)*(byte *)(lVar4 + 0x17c) + (uint)*(byte *)(lVar4 + 0x38) * 2 +
               (uint)*(byte *)(lVar23 + 0x72) * 4 + (uint)*(byte *)(lVar4 + 0x121) * 8;
      plVar25[0x38] = DAT_14cb427b0;
      plVar25[0x39] = lVar16;
      plVar25[0x3a] = DAT_14cb42830;
      if ((((*(char *)(lVar23 + 0x71) == '\x01') && (*(int *)(lVar4 + 0x14) != 0)) &&
          ((uVar20 = *(uint *)(lVar4 + 0x10), -1 < (int)uVar20 &&
           ((((int)uVar20 < DAT_14c9647dc &&
             (plVar18 = (longlong *)
                        ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
             plVar18 != (longlong *)0x0)) && ((int)plVar18[2] == *(int *)(lVar4 + 0x14))))))) &&
         (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (lVar16 = *plVar18, lVar16 != 0)))) {
        if (DAT_14cad2858 == 0) {
          local_1b0 = &local_178;
          local_178 = FUN_144a7958c;
          local_1a0 = FUN_14081d0ea;
          local_1a8 = &LAB_146395584;
          local_1b8 = (undefined8 *)&LAB_147a0ba80;
          local_1c0 = &LAB_14575ccce;
          local_1c8 = L"Engine";
          local_1d0 = (char *)0x40000000000;
          uStack_1d8 = CONCAT44(uStack_1d8._4_4_,0x10000004);
          local_1e0 = CONCAT44(local_1e0._4_4_,0x10);
          local_1e8 = (wchar_t *)CONCAT44(local_1e8._4_4_,0x1180);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) &&
           (plVar18 = *(longlong **)(lVar16 + 0x8a8), plVar18 != (longlong *)0x0)) {
          local_178 = (code *)CONCAT44(local_178._4_4_,0xffffffff);
          uStack_170 = 0;
          local_168 = 0;
          puVar21 = &DAT_14c846480;
          pfVar22 = &local_158;
          for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
            *(undefined8 *)pfVar22 = *puVar21;
            puVar21 = puVar21 + 1;
            pfVar22 = pfVar22 + 2;
          }
          cVar11 = (**(code **)(*plVar18 + 0x80))(plVar18,&local_178);
          if (((cVar11 != '\0') && (0 < (int)(float)local_168)) &&
             ((float)*(int *)(lVar4 + 0x158) == (float)local_178)) {
            lVar16 = *(longlong *)(uStack_170 + 0x18);
            if ((lVar16 != 0) && (lVar16 != plVar25[1])) {
              plVar25[0x38] = lVar16;
              plVar25[0x39] =
                   *(longlong *)
                    (uStack_170 + 0x18 + (ulonglong)(*(longlong *)(uStack_170 + 0x20) != 0) * 8);
              uVar19 = uVar19 | 0x10;
            }
            lVar16 = *(longlong *)(uStack_170 + 0x28);
            if ((lVar16 != 0) && (lVar16 != plVar25[8])) {
              plVar25[0x3a] = lVar16;
              uVar19 = uVar19 | 0x20;
            }
          }
          if (uStack_170 != 0) {
            FUN_1400020a8();
          }
        }
      }
      if ((int)param_3 < (int)(*(longlong **)(lVar23 + 0x20))[1]) {
        lVar16 = *(longlong *)(**(longlong **)(lVar23 + 0x20) + uVar24 * 8);
      }
      else {
        lVar16 = 0;
      }
      if (*(char *)(lVar16 + 0x61) == '\x01') {
        *(undefined4 *)((longlong)plVar25 + 0x94) = *(undefined4 *)(lVar4 + 0x154);
        *(uint *)(plVar25 + 0x13) = *(uint *)(lVar23 + 0x74) >> 2;
        *(undefined4 *)((longlong)plVar25 + 0x9c) = *(undefined4 *)(lVar23 + 0x78);
        *(undefined4 *)(plVar25 + 0x14) = *(undefined4 *)(lVar23 + 0x7c);
        plVar25[4] = *(longlong *)(lVar16 + 0x28 + (ulonglong)((*(byte *)(lVar16 + 0x60) & 1) << 5))
        ;
        plVar25[5] = *(longlong *)
                      (lVar16 + 0x28 +
                      (ulonglong)(*(byte *)(lVar16 + 0x60) & 1 ^ *(byte *)(lVar16 + 0x62)) * 0x20);
        plVar25[6] = *(longlong *)(lVar16 + 0x38 + (ulonglong)((*(byte *)(lVar16 + 0x60) & 1) << 5))
        ;
        lVar15 = *(longlong *)
                  (lVar16 + 0x38 +
                  (ulonglong)(*(byte *)(lVar16 + 0x60) & 1 ^ *(byte *)(lVar16 + 0x62)) * 0x20);
        plVar18 = (longlong *)(lVar4 + 0x30);
      }
      else {
        *(undefined8 *)((longlong)plVar25 + 0x94) = 0;
        *(undefined8 *)((longlong)plVar25 + 0x9c) = 0;
        lVar15 = DAT_14cb42830;
        plVar25[4] = DAT_14cb42830;
        plVar25[5] = lVar15;
        lVar15 = DAT_14cb42830;
        plVar25[6] = DAT_14cb42830;
        plVar18 = &DAT_14cb428f0;
      }
      plVar25[7] = lVar15;
      plVar25[0x10] = *plVar18;
      *(undefined4 *)((longlong)plVar25 + 0xa4) = *(undefined4 *)(lVar16 + 0x10);
      *(undefined4 *)(plVar25 + 0x15) = *(undefined4 *)(lVar4 + 0xd8);
      *(undefined4 *)((longlong)plVar25 + 0xac) = *(undefined4 *)(lVar4 + 0xdc);
      *(uint *)(plVar25 + 0x16) = ~(~*(uint *)(lVar4 + 0xe0) >> 0x1f) + *(int *)(lVar16 + 0x10);
      *(undefined4 *)((longlong)plVar25 + 0xb4) = *(undefined4 *)(lVar4 + 0xe0);
      plVar25[0x17] = *(longlong *)(lVar4 + 0x110);
      *(undefined4 *)(plVar25 + 0x18) = *(undefined4 *)(lVar4 + 0x118);
      *(undefined4 *)((longlong)plVar25 + 0xc4) = *(undefined4 *)(lVar4 + 0x11c);
      if (*(longlong *)(lVar23 + 0x60) == 0) {
        plVar25[0x19] = DAT_14cb428b0;
        *(undefined4 *)(plVar25 + 0x1a) = 0;
        uVar12 = 0;
      }
      else {
        lVar4 = *(longlong *)(*(longlong *)(lVar23 + 0x60) + 0x38);
        if (lVar4 == 0) {
          plVar25[0x19] = 0;
        }
        else {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
          plVar25[0x19] = lVar4;
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar20 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar20 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar20 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar20 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar4 + 0xd);
              plVar13 = (longlong *)FUN_14001cc68(0x10,8);
              plVar13[1] = lVar4;
              plVar18 = DAT_14ca843c0;
              plVar14 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar13 = (longlong)plVar18;
                  LOCK();
                  bVar26 = plVar18 != DAT_14ca843c0;
                  plVar14 = plVar13;
                  if (bVar26) {
                    plVar18 = DAT_14ca843c0;
                    plVar14 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar14;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar13 = (longlong)plVar14;
                  LOCK();
                  bVar26 = plVar14 != DAT_14ca843c8;
                  plVar18 = plVar13;
                  if (bVar26) {
                    plVar14 = DAT_14ca843c8;
                    plVar18 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar18;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar23 + 0x60) + 0x30);
        if (lVar4 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(lVar4 + 0x20);
        }
        *(undefined4 *)(plVar25 + 0x1a) = uVar12;
        uVar12 = *(undefined4 *)(lVar23 + 0x104);
      }
      *(undefined4 *)((longlong)plVar25 + 0xd4) = uVar12;
      lVar4 = *(longlong *)(lVar23 + 0x68);
      if (lVar4 == 0) {
        plVar25[0x1b] = DAT_14cb428f0;
        *(undefined4 *)(plVar25 + 0x1c) = 0;
        uVar12 = 0;
      }
      else {
        if (*(longlong *)(lVar4 + 0x38) == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = *(int *)(*(longlong *)(lVar4 + 0x38) + 0x20) + 3U >> 2;
        }
        lVar4 = *(longlong *)(lVar4 + 0x40);
        if (lVar4 == 0) {
          plVar25[0x1b] = 0;
        }
        else {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
          plVar25[0x1b] = lVar4;
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
              plVar13 = (longlong *)FUN_14001cc68(0x10,8);
              plVar13[1] = lVar4;
              plVar18 = DAT_14ca843c0;
              plVar14 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar13 = (longlong)plVar18;
                  LOCK();
                  bVar26 = plVar18 != DAT_14ca843c0;
                  plVar14 = plVar13;
                  if (bVar26) {
                    plVar18 = DAT_14ca843c0;
                    plVar14 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar14;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar13 = (longlong)plVar14;
                  LOCK();
                  bVar26 = plVar14 != DAT_14ca843c8;
                  plVar18 = plVar13;
                  if (bVar26) {
                    plVar14 = DAT_14ca843c8;
                    plVar18 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar18;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
        *(uint *)(plVar25 + 0x1c) = uVar20;
        uVar12 = *(undefined4 *)(*(longlong *)(lVar23 + 0x68) + 0x10);
      }
      *(undefined4 *)((longlong)plVar25 + 0xe4) = uVar12;
      lVar4 = *(longlong *)(lVar23 + 0x88);
      lVar16 = *(longlong *)(lVar23 + 0x90);
      lVar15 = *(longlong *)(lVar23 + 0x98);
      lVar5 = *(longlong *)(lVar23 + 0xa0);
      lVar6 = *(longlong *)(lVar23 + 0xa8);
      lVar7 = *(longlong *)(lVar23 + 0xb0);
      lVar8 = *(longlong *)(lVar23 + 0xb8);
      plVar25[0x1e] = *(longlong *)(lVar23 + 0x80);
      plVar25[0x1f] = lVar4;
      plVar25[0x20] = lVar16;
      plVar25[0x21] = lVar15;
      plVar25[0x22] = lVar5;
      plVar25[0x23] = lVar6;
      plVar25[0x24] = lVar7;
      plVar25[0x25] = lVar8;
      lVar4 = *(longlong *)(lVar23 + 200);
      lVar16 = *(longlong *)(lVar23 + 0xd0);
      lVar15 = *(longlong *)(lVar23 + 0xd8);
      lVar5 = *(longlong *)(lVar23 + 0xe0);
      lVar6 = *(longlong *)(lVar23 + 0xe8);
      lVar7 = *(longlong *)(lVar23 + 0xf0);
      lVar8 = *(longlong *)(lVar23 + 0xf8);
      plVar25[0x26] = *(longlong *)(lVar23 + 0xc0);
      plVar25[0x27] = lVar4;
      plVar25[0x28] = lVar16;
      plVar25[0x29] = lVar15;
      plVar25[0x2a] = lVar5;
      plVar25[0x2b] = lVar6;
      plVar25[0x2c] = lVar7;
      plVar25[0x2d] = lVar8;
      local_148 = *(undefined8 *)(lVar23 + 0xb0);
      uStack_140 = *(undefined8 *)(lVar23 + 0xb8);
      local_178._0_4_ = (float)*(undefined8 *)(lVar23 + 0x80);
      local_178._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar23 + 0x80) >> 0x20);
      uStack_170._0_4_ = (float)*(undefined8 *)(lVar23 + 0x88);
      local_190 = (float)uStack_170;
      fVar27 = (float)uStack_170 * (float)uStack_170 +
               (float)local_178 * (float)local_178 + local_178._4_4_ * local_178._4_4_;
      local_168._0_4_ = (float)*(undefined8 *)(lVar23 + 0x90);
      local_168._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar23 + 0x90) >> 0x20);
      fStack_160 = (float)*(undefined8 *)(lVar23 + 0x98);
      fVar28 = fStack_160 * fStack_160 +
               (float)local_168 * (float)local_168 + local_168._4_4_ * local_168._4_4_;
      local_158 = (float)*(undefined8 *)(lVar23 + 0xa0);
      fStack_154 = (float)((ulonglong)*(undefined8 *)(lVar23 + 0xa0) >> 0x20);
      fStack_150 = (float)*(undefined8 *)(lVar23 + 0xa8);
      fVar29 = fStack_150 * fStack_150 + local_158 * local_158 + fStack_154 * fStack_154;
      uVar20 = -(uint)(0.0 <= fVar27 + -1e-08);
      fVar30 = (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / SQRT(fVar27)) & uVar20);
      uVar20 = -(uint)(0.0 <= fVar28 + -1e-08);
      fVar27 = (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / SQRT(fVar28)) & uVar20);
      uVar20 = -(uint)(0.0 <= fVar29 + -1e-08);
      fVar28 = (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / SQRT(fVar29)) & uVar20);
      local_178 = (code *)CONCAT44(local_178._4_4_ * fVar30,(float)local_178 * fVar30);
      uStack_170._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0x88) >> 0x20);
      uStack_170 = CONCAT44(uStack_170._4_4_,fVar30 * (float)uStack_170);
      local_168 = CONCAT44(local_168._4_4_ * fVar27,(float)local_168 * fVar27);
      uStack_15c = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0x98) >> 0x20);
      _fStack_160 = CONCAT44(uStack_15c,fVar27 * fStack_160);
      _local_158 = CONCAT44(fStack_154 * fVar28,local_158 * fVar28);
      uStack_14c = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0xa8) >> 0x20);
      _fStack_150 = CONCAT44(uStack_14c,fVar28 * fStack_150);
      FUN_144afdc36(&local_178,&local_188);
      plVar25[0x2e] = CONCAT44(uStack_184,local_188);
      plVar25[0x2f] = CONCAT44(uStack_17c,uStack_180);
      local_148 = *(undefined8 *)(lVar23 + 0xf0);
      uStack_140 = *(undefined8 *)(lVar23 + 0xf8);
      local_178._0_4_ = (float)*(undefined8 *)(lVar23 + 0xc0);
      local_178._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20);
      uStack_170._0_4_ = (float)*(undefined8 *)(lVar23 + 200);
      local_190 = (float)uStack_170;
      fVar27 = (float)uStack_170 * (float)uStack_170 +
               (float)local_178 * (float)local_178 + local_178._4_4_ * local_178._4_4_;
      local_168._0_4_ = (float)*(undefined8 *)(lVar23 + 0xd0);
      local_168._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar23 + 0xd0) >> 0x20);
      fStack_160 = (float)*(undefined8 *)(lVar23 + 0xd8);
      local_18c = fStack_160;
      fVar28 = fStack_160 * fStack_160 +
               (float)local_168 * (float)local_168 + local_168._4_4_ * local_168._4_4_;
      local_158 = (float)*(undefined8 *)(lVar23 + 0xe0);
      fStack_154 = (float)((ulonglong)*(undefined8 *)(lVar23 + 0xe0) >> 0x20);
      fStack_150 = (float)*(undefined8 *)(lVar23 + 0xe8);
      fVar30 = fStack_150 * fStack_150 + local_158 * local_158 + fStack_154 * fStack_154;
      uVar20 = -(uint)(0.0 <= fVar27 + -1e-08);
      fVar27 = (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / SQRT(fVar27)) & uVar20);
      uVar20 = -(uint)(0.0 <= fVar28 + -1e-08);
      fVar28 = (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / SQRT(fVar28)) & uVar20);
      uVar20 = -(uint)(0.0 <= fVar30 + -1e-08);
      fVar30 = (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / SQRT(fVar30)) & uVar20);
      local_178 = (code *)CONCAT44(local_178._4_4_ * fVar27,(float)local_178 * fVar27);
      uStack_170._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 200) >> 0x20);
      uStack_170 = CONCAT44(uStack_170._4_4_,fVar27 * (float)uStack_170);
      local_168 = CONCAT44(local_168._4_4_ * fVar28,(float)local_168 * fVar28);
      uStack_15c = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0xd8) >> 0x20);
      _fStack_160 = CONCAT44(uStack_15c,fVar28 * fStack_160);
      _local_158 = CONCAT44(fStack_154 * fVar30,local_158 * fVar30);
      uStack_14c = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0xe8) >> 0x20);
      _fStack_150 = CONCAT44(uStack_14c,fVar30 * fStack_150);
      FUN_144afdc36(&local_178,&local_188);
      *(undefined4 *)(plVar25 + 0x30) = local_188;
      *(undefined4 *)((longlong)plVar25 + 0x184) = uStack_184;
      *(undefined4 *)(plVar25 + 0x31) = uStack_180;
      *(undefined4 *)((longlong)plVar25 + 0x18c) = uStack_17c;
      *(float *)(plVar25 + 0x32) = 1.0 / *(float *)(lVar23 + 0x100);
      plVar25[0x34] = *(longlong *)(lVar23 + 0x108);
      *(undefined4 *)(plVar25 + 0x35) = *(undefined4 *)(lVar23 + 0x110);
      plVar25[0x36] = *(longlong *)(lVar23 + 0x114);
      *(undefined4 *)(plVar25 + 0x37) = *(undefined4 *)(lVar23 + 0x11c);
      *(uint *)((longlong)plVar25 + 0x1bc) = uVar19;
      goto LAB_143a689d1;
    }
  }
  plVar25[1] = DAT_14cb427b0;
  *plVar25 = DAT_14cb428f0;
  plVar25[8] = DAT_14cb42830;
  *(undefined4 *)(plVar25 + 0x12) = 0;
  plVar25[9] = DAT_14cb427f0;
  plVar25[10] = DAT_14cb42830;
  plVar25[0x11] = 0;
  plVar25[0xb] = DAT_14cb428f0;
  plVar25[0xc] = 0;
  lVar4 = DAT_14cb428f0;
  plVar25[0xd] = DAT_14cb428f0;
  plVar25[0xe] = lVar4;
  lVar4 = DAT_14cb428f0;
  plVar25[0xf] = DAT_14cb428f0;
  plVar25[2] = lVar4;
  plVar25[3] = DAT_14cb428f0;
  *(undefined8 *)((longlong)plVar25 + 0x94) = 0;
  *(undefined8 *)((longlong)plVar25 + 0x9c) = 0;
  lVar4 = DAT_14cb42830;
  plVar25[4] = DAT_14cb42830;
  plVar25[5] = lVar4;
  lVar4 = DAT_14cb42830;
  plVar25[6] = DAT_14cb42830;
  plVar25[7] = lVar4;
  plVar25[0x10] = DAT_14cb428f0;
  *(undefined8 *)((longlong)plVar25 + 0xa4) = 0;
  *(undefined8 *)((longlong)plVar25 + 0xac) = 0;
  *(undefined4 *)((longlong)plVar25 + 0xb4) = 0;
  plVar25[0x17] = DAT_14cb428f0;
  plVar25[0x18] = 0;
  plVar25[0x19] = DAT_14cb428b0;
  plVar25[0x1a] = 0;
  plVar25[0x1b] = DAT_14cb428f0;
  plVar25[0x1c] = 0;
  lVar4 = _DAT_14c846288;
  plVar25[0x24] = _DAT_14c846280;
  plVar25[0x25] = lVar4;
  lVar4 = _DAT_14c846278;
  plVar25[0x22] = _DAT_14c846270;
  plVar25[0x23] = lVar4;
  lVar4 = _DAT_14c846268;
  plVar25[0x20] = _DAT_14c846260;
  plVar25[0x21] = lVar4;
  lVar4 = DAT_14c846258;
  plVar25[0x1e] = _DAT_14c846250;
  plVar25[0x1f] = lVar4;
  lVar4 = _DAT_14c846288;
  plVar25[0x2c] = _DAT_14c846280;
  plVar25[0x2d] = lVar4;
  lVar4 = _DAT_14c846278;
  plVar25[0x2a] = _DAT_14c846270;
  plVar25[0x2b] = lVar4;
  lVar4 = _DAT_14c846268;
  plVar25[0x28] = _DAT_14c846260;
  plVar25[0x29] = lVar4;
  lVar4 = DAT_14c846258;
  plVar25[0x26] = _DAT_14c846250;
  plVar25[0x27] = lVar4;
  lVar4 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  plVar25[0x2e] = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
  plVar25[0x2f] = lVar4;
  uVar10 = DAT_14c84634c;
  uVar9 = DAT_14c846348;
  uVar12 = DAT_14c846344;
  *(undefined4 *)(plVar25 + 0x30) = DAT_14c84633c._4_4_;
  *(undefined4 *)((longlong)plVar25 + 0x184) = uVar12;
  *(undefined4 *)(plVar25 + 0x31) = uVar9;
  *(undefined4 *)((longlong)plVar25 + 0x18c) = uVar10;
  *(undefined4 *)(plVar25 + 0x32) = 0;
  *(undefined4 *)(plVar25 + 0x35) = DAT_14c846338;
  plVar25[0x34] = DAT_14c846330;
  plVar25[0x36] = DAT_14c846330;
  *(undefined4 *)(plVar25 + 0x37) = DAT_14c846338;
  *(undefined4 *)((longlong)plVar25 + 0x1bc) = 0;
  lVar4 = DAT_14cb427b0;
  plVar25[0x38] = DAT_14cb427b0;
  plVar25[0x39] = lVar4;
  plVar25[0x3a] = DAT_14cb42830;
LAB_143a689d1:
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a69432 FUN_143a69432 body=401 status=ok
// SIG undefined FUN_143a69432(void)

int FUN_143a69432(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
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
  iVar6 = 0;
  iVar5 = 0;
  if (((((param_2[1] != 0) && (uVar2 = *param_2, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
      && ((plVar4 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)), iVar6 = iVar5,
          plVar4 != (longlong *)0x0 && (*(uint *)(plVar4 + 2) == param_2[1])))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar1 = *plVar4, lVar1 != 0)))) {
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
    if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) &&
       (*(char *)(param_1 + 0xf8) == '\x01')) {
      uVar2 = *(uint *)(lVar1 + 0x48);
      if ((byte)*(uint *)(lVar1 + 0x48) < *(byte *)(lVar1 + 0x49)) {
        uVar2 = (uint)*(byte *)(lVar1 + 0x49);
      }
      uVar2 = uVar2 & 0xff;
      uVar3 = 3;
      if (3 < uVar2) {
        uVar3 = uVar2;
      }
      if ((*(byte *)(lVar1 + 0xc61) & 0x20) == 0) {
        uVar3 = uVar2;
      }
      uVar2 = 5;
      if (uVar3 < 5) {
        uVar2 = uVar3;
      }
      iVar6 = uVar2 + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a695c4 FUN_143a695c4 body=1216 status=ok
// SIG undefined FUN_143a695c4(void)

void FUN_143a695c4(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar4 == (longlong *)0x0) goto LAB_143a696ff;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a69619;
    if (iVar7 != 1) goto LAB_143a69614;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a69619;
  }
  else {
LAB_143a69614:
    if (iVar7 == 0x10) goto LAB_143a69619;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a69619:
      (**(code **)(*plVar4 + 0x20))(plVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a69619;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a697c1;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a6cf3b);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a697c1:
      puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar17 + 0x16);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a69841;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a69841:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar17,0);
    *puVar17 = &PTR_FUN_14addde30;
    puVar17[0x15] = plVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar16 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar16 = 5;
    }
    if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
    }
    puVar17[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar17[9] = puVar17;
    puVar17[10] = puVar17;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar16 != '\x06') {
        uVar6 = uVar16;
      }
      uVar16 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar17[0xf] = uVar12;
    puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar17 + 0x1c) = iVar7;
    if (puVar17 == (undefined8 *)0x0) {
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14addde10;
    local_68[0] = FUN_143a708f0;
    local_40 = plVar4;
    FUN_14005a792(&DAT_14ca9a440,L"BeginDestroyCommand",&DAT_14cb3d714);
    if (local_68[0] != (code *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_143a696ff:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a69a9e FUN_143a69a9e body=2861 status=ok
// SIG undefined FUN_143a69a9e(void)

byte FUN_143a69a9e(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  ulonglong uVar14;
  void *pvVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  size_t sVar20;
  byte unaff_SIL;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  ushort uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 local_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  code **local_170;
  undefined1 *local_168;
  code *local_160;
  longlong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  longlong *local_128;
  int local_120;
  int local_11c;
  longlong local_118;
  undefined8 uStack_110;
  void *local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  int local_d4 [3];
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_1c8;
  local_150 = FUN_148191126(param_2);
  if (local_150 != 0) {
    if (DAT_14cb366a0 == (longlong *)0x0) {
      local_170 = &local_c8;
      local_c8 = FUN_1449e2820;
      local_160 = FUN_14081d0ea;
      local_168 = &LAB_140eca530;
      local_178 = &LAB_148063819;
      local_180 = &LAB_1460672b6;
      local_188 = L"Niagara";
      local_190 = 0;
      local_198 = 0x10000006;
      local_1a0 = 8;
      local_1a8 = 0x130;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
    }
    plVar2 = DAT_14cb366a0;
    lVar27 = DAT_14cb366a0[0x22];
    if (lVar27 == 0) {
      (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
      lVar27 = plVar2[0x22];
    }
    lVar24 = local_150;
    if (*(char *)(lVar27 + 0xf0) == '\x01') {
      uVar23 = *(uint *)(param_1 + 0x10);
      plVar2 = *(longlong **)(local_150 + 0x28);
      uVar7 = (**(code **)(*plVar2 + 0x50))(plVar2);
      unaff_SIL = 0;
      if (0x2fff9 < uVar7) goto LAB_143a69b50;
      uVar22 = *(uint *)(local_150 + 0xec);
      uVar28 = (ulonglong)uVar22;
      iVar26 = uVar22 * uVar23 * 2;
      uVar21 = iVar26 + 3;
      uVar8 = iVar26 + 6;
      if (-1 < (int)uVar21) {
        uVar8 = uVar21;
      }
      uVar19 = (ulonglong)(uVar8 & 0xfffffffc);
      FUN_1481a0550(param_1 + 0x20,uVar19);
      pvVar3 = *(void **)(param_1 + 0x20);
      pvVar15 = (void *)(param_1 + 0x20 + ((longlong)pvVar3 >> 0x18));
      if (((ulonglong)pvVar3 & 1) == 0) {
        pvVar15 = pvVar3;
      }
      memset(pvVar15,(int)CONCAT71((int7)(uVar19 >> 8),0xff),(longlong)*(int *)(param_1 + 0x28));
      uVar19 = *(ulonglong *)(param_1 + 0x20);
      local_148 = param_1 + 0x20 + ((longlong)uVar19 >> 0x18);
      if ((uVar19 & 1) == 0) {
        local_148 = uVar19;
      }
      local_a8 = 0;
      local_a0 = 0;
      local_c8 = (code *)0x0;
      uStack_c0 = 0;
      local_9c = 0xffffffff00000080;
      local_94 = 0;
      local_88 = 0;
      local_80 = 0;
      local_108 = (void *)0x0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      if ((int)uVar22 < 1) {
        uVar21 = 0;
        if ((int)uVar22 < 0) goto LAB_143a6a4c6;
      }
      else {
        uStack_100 = (ulonglong)uVar22;
        FUN_1447808da(&local_108);
        memset(local_108,0,uVar28 * 4);
        uVar21 = (uint)uStack_110;
      }
      local_140 = (ulonglong)uVar7 / 3;
      uVar22 = uVar7 / 3;
      uVar8 = uVar22 - uVar21;
      local_138 = CONCAT44(local_138._4_4_,uVar23 * 2);
      local_130 = uVar28;
      if (uVar8 == 0 || (int)uVar22 < (int)uVar21) {
        if (uVar22 < uVar21) {
          uStack_110 = CONCAT44(uStack_110._4_4_,(int)local_140);
          FUN_1401fef06();
        }
      }
      else {
        uStack_110 = CONCAT44(uStack_110._4_4_,(int)local_140);
        if (uStack_110._4_4_ - uVar21 < uVar8) {
          FUN_14475e4ac(&local_118);
        }
        memset((void *)((longlong)(int)uVar21 * 4 + local_118),0,(longlong)(int)uVar8 << 2);
      }
      if (2 < uVar7) {
        uVar7 = 0;
        uVar29 = 0;
        local_128 = plVar2;
        do {
          plVar2 = local_128;
          iVar12 = (**(code **)(*local_128 + 0x60))(local_128,uVar7 * 3);
          local_d4[0] = iVar12;
          iVar9 = (**(code **)(*plVar2 + 0x60))(plVar2,uVar7 * 3 + 1);
          local_d4[1] = iVar9;
          local_d4[2] = (**(code **)(*plVar2 + 0x60))(plVar2,uVar7 * 3 + 2);
          lVar27 = *(longlong *)(local_150 + 0xe0);
          iVar26 = *(int *)(local_150 + 0xe8);
          local_f0 = *(float *)(lVar27 + 8 + (ulonglong)(uint)(iVar12 * iVar26));
          uVar4 = *(undefined8 *)(lVar27 + (ulonglong)(uint)(iVar12 * iVar26));
          local_e4 = *(float *)(lVar27 + 8 + (ulonglong)(uint)(iVar9 * iVar26));
          uVar5 = *(undefined8 *)(lVar27 + (ulonglong)(uint)(iVar9 * iVar26));
          local_d8 = *(float *)(lVar27 + 8 + (ulonglong)(uint)(iVar26 * local_d4[2]));
          uVar6 = *(undefined8 *)(lVar27 + (ulonglong)(uint)(iVar26 * local_d4[2]));
          local_e0._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
          local_f8._0_4_ = (float)uVar4;
          local_f8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
          local_e0._0_4_ = (float)uVar6;
          local_ec._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
          local_ec._0_4_ = (float)uVar5;
          fVar31 = ((float)local_e0 - (float)local_f8) * (local_ec._4_4_ - local_f8._4_4_) -
                   ((float)local_ec - (float)local_f8) * (local_e0._4_4_ - local_f8._4_4_);
          fVar32 = (local_d8 - local_f0) * ((float)local_ec - (float)local_f8) -
                   (local_e4 - local_f0) * ((float)local_e0 - (float)local_f8);
          fVar30 = (local_e0._4_4_ - local_f8._4_4_) * (local_e4 - local_f0) -
                   (local_ec._4_4_ - local_f8._4_4_) * (local_d8 - local_f0);
          *(float *)(local_118 + (ulonglong)uVar29 * 4) =
               SQRT(fVar31 * fVar31 + fVar30 * fVar30 + fVar32 * fVar32) * 0.5;
          lVar27 = 0;
          local_f8 = uVar4;
          local_ec = uVar5;
          local_e0 = uVar6;
          do {
            local_11c = local_d4[lVar27];
            lVar24 = (longlong)local_11c;
            lVar25 = (longlong)&local_f8 + lVar27 * 0xc;
            iVar12 = 0;
            uVar11 = FUN_1448eb174(lVar25,0xc,0);
            piVar13 = (int *)FUN_1481a05d0(&local_c8,uVar11,lVar25,&local_11c);
            iVar26 = *piVar13;
            *(int *)((longlong)local_108 + lVar24 * 4) = iVar26;
            lVar24 = local_148 + (ulonglong)(iVar26 * uVar23) * 2;
            do {
              if ((int)uVar23 <= iVar12) break;
              lVar16 = (longlong)iVar12;
              fVar30 = *(float *)(local_118 + (ulonglong)uVar29 * 4);
              fVar31 = *(float *)(local_118 + (ulonglong)*(ushort *)(lVar24 + lVar16 * 2) * 4);
              lVar25 = (longlong)(int)uVar23 + -1;
              if (fVar31 < fVar30) {
                do {
                  *(undefined2 *)(lVar24 + lVar25 * 2) = *(undefined2 *)(lVar24 + -2 + lVar25 * 2);
                  lVar25 = lVar25 + -1;
                } while (lVar16 < lVar25);
                *(ushort *)(lVar24 + lVar16 * 2) = uVar29;
              }
              else {
                iVar12 = iVar12 + 1;
              }
            } while (fVar30 <= fVar31);
            lVar27 = lVar27 + 1;
          } while (lVar27 != 3);
          uVar29 = uVar29 + 1;
          uVar7 = (uint)uVar29;
        } while (uVar7 < (uint)local_140);
      }
      uVar7 = (uint)local_130;
      if (1 < uVar7) {
        sVar20 = (size_t)(int)local_138;
        uVar22 = 1;
        uVar21 = uVar23;
        do {
          uVar8 = *(uint *)((longlong)local_108 + (longlong)(int)uVar22 * 4);
          if (uVar22 != uVar8) {
            memcpy((void *)(local_148 + (ulonglong)uVar21 * 2),
                   (void *)(local_148 + (longlong)(int)(uVar8 * uVar23) * 2),sVar20);
          }
          uVar22 = uVar22 + 1;
          uVar21 = uVar21 + uVar23;
        } while (uVar7 != uVar22);
      }
    }
    else {
      if (*(char *)(lVar27 + 0xf0) != '\0') {
        unaff_SIL = 0;
        goto LAB_143a69b50;
      }
      uVar7 = *(uint *)(param_1 + 0x10);
      uVar19 = (ulonglong)uVar7;
      plVar2 = *(longlong **)(local_150 + 0x28);
      uVar8 = (**(code **)(*plVar2 + 0x50))(plVar2);
      uVar21 = *(uint *)(lVar24 + 0xec);
      uVar28 = (ulonglong)uVar21;
      iVar26 = uVar7 * 4;
      uVar23 = uVar21 * iVar26 + 3;
      uVar22 = uVar21 * iVar26 + 6;
      if (-1 < (int)uVar23) {
        uVar22 = uVar23;
      }
      uVar14 = (ulonglong)(uVar22 & 0xfffffffc);
      FUN_1481a0550(param_1 + 0x20,uVar14);
      pvVar3 = *(void **)(param_1 + 0x20);
      pvVar15 = (void *)(param_1 + 0x20 + ((longlong)pvVar3 >> 0x18));
      if (((ulonglong)pvVar3 & 1) == 0) {
        pvVar15 = pvVar3;
      }
      memset(pvVar15,(int)CONCAT71((int7)(uVar14 >> 8),0xff),(longlong)*(int *)(param_1 + 0x28));
      uVar14 = *(ulonglong *)(param_1 + 0x20);
      local_148 = param_1 + 0x20 + ((longlong)uVar14 >> 0x18);
      if ((uVar14 & 1) == 0) {
        local_148 = uVar14;
      }
      uVar23 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_c8 = (code *)0x0;
      uStack_c0 = 0;
      local_9c = 0xffffffff00000080;
      local_94 = 0;
      local_88 = 0;
      local_80 = 0;
      local_108 = (void *)0x0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      if ((int)uVar21 < 1) {
        if ((int)uVar21 < 0) {
LAB_143a6a4c6:
          local_80 = 0;
          local_88 = 0;
          local_94 = 0;
          local_9c = 0xffffffff00000080;
          local_a0 = 0;
          local_a8 = 0;
          uStack_c0 = 0;
          local_c8 = (code *)0x0;
          uStack_100 = 0;
          local_108 = (void *)0x0;
          uStack_110 = 0;
          local_118 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar28);
        }
      }
      else {
        uStack_100 = (ulonglong)uVar21;
        FUN_1447808da(&local_108);
        memset(local_108,0,uVar28 * 4);
        uVar23 = (uint)uStack_110;
      }
      uVar21 = uVar8 / 3 - uVar23;
      local_138 = uVar28;
      local_120 = iVar26;
      if (uVar21 == 0 || (int)(uVar8 / 3) < (int)uVar23) {
        if (uVar8 / 3 < uVar23) {
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar8 / 3);
          FUN_1401fef06();
        }
      }
      else {
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar8 / 3);
        if (uStack_110._4_4_ - uVar23 < uVar21) {
          FUN_14475e4ac(&local_118);
        }
        memset((void *)((longlong)(int)uVar23 * 4 + local_118),0,(longlong)(int)uVar21 << 2);
      }
      if (2 < uVar8) {
        local_140 = (ulonglong)(uVar8 / 3);
        local_130 = (local_148 + (longlong)(int)uVar7 * 4) - 8;
        local_128 = (longlong *)((longlong)(int)uVar7 << 0x20);
        uVar28 = 0;
        do {
          iVar12 = (int)uVar28;
          iVar9 = (**(code **)(*plVar2 + 0x60))(plVar2,iVar12 * 3);
          local_d4[0] = iVar9;
          iVar10 = (**(code **)(*plVar2 + 0x60))(plVar2,iVar12 * 3 + 1);
          local_d4[1] = iVar10;
          local_d4[2] = (**(code **)(*plVar2 + 0x60))(plVar2,iVar12 * 3 + 2);
          lVar27 = *(longlong *)(local_150 + 0xe0);
          iVar26 = *(int *)(local_150 + 0xe8);
          local_f0 = *(float *)(lVar27 + 8 + (ulonglong)(uint)(iVar9 * iVar26));
          uVar4 = *(undefined8 *)(lVar27 + (ulonglong)(uint)(iVar9 * iVar26));
          local_e4 = *(float *)(lVar27 + 8 + (ulonglong)(uint)(iVar10 * iVar26));
          uVar5 = *(undefined8 *)(lVar27 + (ulonglong)(uint)(iVar10 * iVar26));
          local_d8 = *(float *)(lVar27 + 8 + (ulonglong)(uint)(iVar26 * local_d4[2]));
          uVar6 = *(undefined8 *)(lVar27 + (ulonglong)(uint)(iVar26 * local_d4[2]));
          local_e0._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
          local_f8._0_4_ = (float)uVar4;
          local_f8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
          local_e0._0_4_ = (float)uVar6;
          local_ec._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
          local_ec._0_4_ = (float)uVar5;
          fVar31 = ((float)local_e0 - (float)local_f8) * (local_ec._4_4_ - local_f8._4_4_) -
                   ((float)local_ec - (float)local_f8) * (local_e0._4_4_ - local_f8._4_4_);
          fVar32 = (local_d8 - local_f0) * ((float)local_ec - (float)local_f8) -
                   (local_e4 - local_f0) * ((float)local_e0 - (float)local_f8);
          fVar30 = (local_e0._4_4_ - local_f8._4_4_) * (local_e4 - local_f0) -
                   (local_ec._4_4_ - local_f8._4_4_) * (local_d8 - local_f0);
          *(float *)(local_118 + uVar28 * 4) =
               SQRT(fVar31 * fVar31 + fVar30 * fVar30 + fVar32 * fVar32) * 0.5;
          lVar27 = 0;
          local_f8 = uVar4;
          local_ec = uVar5;
          local_e0 = uVar6;
          do {
            local_11c = local_d4[lVar27];
            lVar24 = (longlong)local_11c;
            lVar25 = (longlong)&local_f8 + lVar27 * 0xc;
            uVar11 = FUN_1448eb174(lVar25,0xc,0);
            piVar13 = (int *)FUN_1481a05d0(&local_c8,uVar11,lVar25,&local_11c);
            iVar26 = *piVar13;
            *(int *)((longlong)local_108 + lVar24 * 4) = iVar26;
            if (0 < (int)uVar7) {
              uVar17 = (ulonglong)(iVar26 * uVar7);
              lVar24 = local_148 + uVar17 * 4;
              uVar14 = 0;
LAB_143a69f0e:
              lVar25 = (longlong)*(int *)(lVar24 + uVar14 * 4);
              if (lVar25 != -1) {
                fVar30 = *(float *)(local_118 + uVar28 * 4);
                pfVar1 = (float *)(local_118 + lVar25 * 4);
                if (fVar30 < *pfVar1 || fVar30 == *pfVar1) goto code_r0x000143a69f25;
                piVar13 = (int *)(local_130 + uVar17 * 4);
                plVar18 = local_128;
                do {
                  plVar18 = plVar18 + -0x20000000;
                  iVar26 = *piVar13;
                  piVar13 = piVar13 + -1;
                } while (iVar26 == -1);
                lVar25 = (longlong)plVar18 >> 0x20;
                do {
                  *(undefined4 *)(lVar24 + lVar25 * 4) = *(undefined4 *)(lVar24 + -4 + lVar25 * 4);
                  lVar25 = lVar25 + -1;
                } while ((longlong)uVar14 < lVar25);
              }
              *(int *)(lVar24 + uVar14 * 4) = iVar12;
            }
LAB_143a69f6d:
            lVar27 = lVar27 + 1;
          } while (lVar27 != 3);
          uVar28 = uVar28 + 1;
        } while (uVar28 != local_140);
      }
      uVar23 = (uint)local_138;
      if (1 < uVar23) {
        sVar20 = (size_t)local_120;
        uVar21 = 1;
        do {
          uVar22 = *(uint *)((longlong)local_108 + (longlong)(int)uVar21 * 4);
          if (uVar21 != uVar22) {
            memcpy((void *)(local_148 + uVar19 * 4),
                   (void *)(local_148 + (longlong)(int)(uVar22 * uVar7) * 4),sVar20);
          }
          uVar21 = uVar21 + 1;
          uVar19 = (ulonglong)((int)uVar19 + uVar7);
        } while (uVar23 != uVar21);
      }
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_1481a0b6e(&local_c8);
    unaff_SIL = 1;
  }
LAB_143a69b50:
  if ((local_70 ^ (ulonglong)local_1c8) == DAT_14c707940) {
    return local_150 != 0 & unaff_SIL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000143a69f25:
  uVar14 = uVar14 + 1;
  if (uVar19 == uVar14) goto LAB_143a69f6d;
  goto LAB_143a69f0e;
}



// FUNCTION 143a6a5cc FUN_143a6a5cc body=1001 status=ok
// SIG undefined FUN_143a6a5cc(void)

void FUN_143a6a5cc(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_5c;
  undefined1 local_58;
  undefined4 local_54;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = 0;
  local_70 = 1;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  local_54 = 0;
  local_50 = L"FSkeletalMeshConnectivityProxy_AdjacencyBuffer";
  local_78 = param_1 + 0x18;
  local_48 = 0;
  uStack_40 = 0;
  iVar4 = *(int *)(param_1 + 0x28);
  local_98 = (undefined1)iVar4;
  uStack_97 = (undefined1)((uint)iVar4 >> 8);
  uStack_96 = (undefined1)((uint)iVar4 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar4 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  if (iVar4 == 0) {
    FUN_14570b4be(param_2,&local_80,0x4101,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x38);
  if (plVar9 == &local_a0) {
LAB_143a6a782:
    lVar10 = local_a0;
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
          plVar6[1] = lVar10;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
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
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
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
    lVar10 = *plVar9;
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
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
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
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
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
      goto LAB_143a6a782;
    }
  }
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
    uStack_97 = 0x1c;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar9 = (longlong *)(param_1 + 0x40);
  if (plVar9 != &local_a0) {
    lVar10 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar10 == 0) goto LAB_143a6a90c;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar10 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar10 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
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
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
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
  lVar10 = local_a0;
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
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
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
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
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
LAB_143a6a90c:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a6a9b6 FUN_143a6a9b6 body=269 status=ok
// SIG undefined FUN_143a6a9b6(void)

void FUN_143a6a9b6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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



// FUNCTION 143a6aac4 FUN_143a6aac4 body=1259 status=ok
// SIG undefined FUN_143a6aac4(void)

void FUN_143a6aac4(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a6af0a;
    if (iVar7 != 1) goto LAB_143a6ab22;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a6af0a;
  }
  else {
LAB_143a6ab22:
    if (iVar7 == 0x10) goto LAB_143a6af0a;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a6af0a:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a6af0a;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a6ac8f;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a6cf3b);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a6ac8f:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a6ad0f;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a6ad0f:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14adddf30;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14adddeb0;
    local_68[0] = &LAB_143a70ad4;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"NDISparseVolumeTextureTexture_RemoveInstance",&DAT_14cb3d718);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a6afc4 FUN_143a6afc4 body=1978 status=ok
// SIG undefined FUN_143a6afc4(void)

undefined8 FUN_143a6afc4(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_108 [32];
  code **local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  uint local_94;
  uint uStack_90;
  uint local_8c;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar5 = param_2[8];
  if ((ulonglong)uVar5 == 0xffffffff) {
    plVar14 = *(longlong **)(param_1 + 0x38);
    if (plVar14 == (longlong *)0x0) goto LAB_143a6b042;
  }
  else {
    if ((((int)uVar5 < 0) || (*(int *)(*(longlong *)(param_2 + 10) + 0x48) <= (int)uVar5)) ||
       (plVar14 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_2 + 10) + 0x40) + (ulonglong)uVar5 * 8),
       plVar14 == (longlong *)0x0)) goto LAB_143a6b042;
    lVar10 = FUN_1411c531a();
    if ((*(int *)(plVar14[2] + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
        lVar10 + 0x30)) goto LAB_143a6b042;
  }
  uVar5 = (**(code **)(*plVar14 + 0x2b8))(plVar14);
  param_2[0x18] = uVar5;
  lVar10 = FUN_14588a60a();
  if ((*(int *)(plVar14[2] + 0x38) < *(int *)(lVar10 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
      lVar10 + 0x30)) {
    local_e0 = *(undefined1 *)(param_1 + 0x60);
    uVar5 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    local_d8 = 1;
    local_e8 = (code **)((ulonglong)local_e8 & 0xffffffff00000000);
    plVar14 = (longlong *)FUN_147d42496(plVar14,uVar5 >> 0x10 ^ uVar5,param_2[0x17],param_2[0x16]);
    (**(code **)(DAT_14cb091a0 + 0x18))(&DAT_14cb091a0);
    if (plVar14 == (longlong *)0x0) goto LAB_143a6b042;
  }
  lVar10 = (**(code **)(*plVar14 + 0x300))(plVar14);
  (**(code **)(*plVar14 + 0x2d0))(plVar14,&local_94);
  uVar5 = (**(code **)(*plVar14 + 0x2c0))(plVar14);
  cVar4 = FUN_1481919ca(param_2,plVar14);
  if (((cVar4 != '\0') && (*(longlong *)(param_2 + 2) == lVar10)) &&
     ((param_2[4] == local_94 &&
      (((param_2[5] == uStack_90 && (param_2[6] == local_8c)) && (param_2[7] == uVar5))))))
  goto LAB_143a6b042;
  uVar6 = *(uint *)((longlong)plVar14 + 0xc);
  *param_2 = uVar6;
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  else {
    lVar18 = 0;
  }
  uVar6 = *(uint *)(lVar18 + 0x10);
  if (*(uint *)(lVar18 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    uVar19 = DAT_14c964868 + 1;
    bVar20 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar20) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar19);
    }
    LOCK();
    uVar6 = *(uint *)(lVar18 + 0x10);
    bVar20 = uVar6 == 0;
    if (bVar20) {
      *(uint *)(lVar18 + 0x10) = uVar19;
      uVar6 = 0;
    }
    UNLOCK();
    if (bVar20) {
      uVar6 = uVar19;
    }
  }
  param_2[1] = uVar6;
  *(longlong *)(param_2 + 2) = lVar10;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_90,local_94);
  param_2[6] = local_8c;
  param_2[7] = uVar5;
  local_c8 = *(longlong *)(param_1 + 0x28);
  uStack_c0 = *(undefined8 *)(param_3 + 0x100);
  uStack_b0 = CONCAT44(uStack_90,local_94);
  local_a8 = local_8c;
  uStack_a0 = param_2[0x18];
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar18 + 0xc60);
  local_b8 = lVar10;
  uStack_a4 = uVar5;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a6b1ba;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a6b69e;
      goto LAB_143a6b1c3;
    }
  }
  else {
LAB_143a6b1ba:
    if (iVar7 != 0x10) {
LAB_143a6b1c3:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar18 + 0xc60), iVar7 == 2))
        goto LAB_143a6b69e;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a6b69e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_143a6b3bc;
        while( true ) {
          uVar5 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar5 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar5 | 1;
            __tlregdtor(&LAB_143a6cf3b);
          }
          lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar10 + 0x310);
          *(undefined8 *)(lVar10 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_143a6b3bc:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x1b);
          uVar5 = puVar12[0x12];
          if (puVar15 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar6 = *puVar12;
            *puVar12 = *puVar12 + uVar5 + 1;
            UNLOCK();
            if ((uVar6 ^ uVar5) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x1b);
            uVar5 = 0;
            if (puVar15 <= puVar12 + 0x4000) {
              uVar5 = 1;
              goto LAB_143a6b43c;
            }
          }
        }
        uVar5 = uVar5 + 1;
LAB_143a6b43c:
        *(uint **)(puVar12 + 0x10) = puVar15;
        puVar12[0x12] = uVar5;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adddfb0;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_c8;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_c8._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_c0._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_b8._4_4_;
        *(undefined4 *)(puVar17 + 0x18) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_b0._4_4_;
        *(uint *)(puVar17 + 0x19) = local_a8;
        *(uint *)((longlong)puVar17 + 0xcc) = uStack_a4;
        *(uint *)(puVar17 + 0x1a) = uStack_a0;
        *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_9c;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar5 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar5 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar10 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar10 == 0) {
          uVar3 = 1;
          if ((char)uVar16 != '\x06') {
            uVar3 = uVar16;
          }
          uVar16 = uVar3;
          uVar13 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar10 + 0x30);
        }
        puVar17[0xf] = uVar13;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x38,8);
        *local_78 = (longlong)&PTR_LAB_14adddf40;
        *(uint *)(local_78 + 5) = local_a8;
        *(uint *)((longlong)local_78 + 0x2c) = uStack_a4;
        *(uint *)(local_78 + 6) = uStack_a0;
        *(undefined4 *)((longlong)local_78 + 0x34) = uStack_9c;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b8;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b8._4_4_;
        *(undefined4 *)(local_78 + 4) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_b0._4_4_;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c8;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c8._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_c0._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = FUN_143a70cac;
        }
        local_e8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDISparseVolumeTexture_UpdateInstance",&DAT_14cb3d71c);
        if (local_88[0] != (code *)0x0) {
          plVar14 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar14 = local_68;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a6b042;
    }
  }
LAB_143a6b69e:
  plVar14 = (longlong *)
            FUN_1481a0fb8(local_c8 + 0x10,
                          (int)((ulonglong)uStack_c0 >> 0x20) * 0x17 + (int)uStack_c0,&uStack_c0);
  *plVar14 = local_b8;
  *(uint *)(plVar14 + 2) = local_a8;
  plVar14[1] = uStack_b0;
  *(uint *)((longlong)plVar14 + 0x14) = uStack_a4;
  *(uint *)(plVar14 + 3) = uStack_a0;
LAB_143a6b042:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a6b780 FUN_143a6b780 body=303 status=ok
// SIG undefined FUN_143a6b780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6b780(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14011fb0c(param_1 + 0x26);
  FUN_14011fb0c(param_1 + 0x29);
  FUN_14011fb0c(param_1 + 0x2c);
  uVar1 = _DAT_14c846288;
  param_1[6] = _DAT_14c846280;
  param_1[7] = uVar1;
  uVar1 = _DAT_14c846278;
  param_1[4] = _DAT_14c846270;
  param_1[5] = uVar1;
  uVar1 = _DAT_14c846268;
  param_1[2] = _DAT_14c846260;
  param_1[3] = uVar1;
  uVar1 = DAT_14c846258;
  *param_1 = _DAT_14c846250;
  param_1[1] = uVar1;
  uVar1 = _DAT_14c846288;
  param_1[0xe] = _DAT_14c846280;
  param_1[0xf] = uVar1;
  uVar1 = _DAT_14c846278;
  param_1[0xc] = _DAT_14c846270;
  param_1[0xd] = uVar1;
  uVar1 = _DAT_14c846268;
  param_1[10] = _DAT_14c846260;
  param_1[0xb] = uVar1;
  uVar1 = DAT_14c846258;
  param_1[8] = _DAT_14c846250;
  param_1[9] = uVar1;
  uVar1 = DAT_14c846258;
  param_1[0x10] = _DAT_14c846250;
  param_1[0x11] = uVar1;
  uVar1 = _DAT_14c846268;
  param_1[0x12] = _DAT_14c846260;
  param_1[0x13] = uVar1;
  uVar1 = _DAT_14c846278;
  param_1[0x14] = _DAT_14c846270;
  param_1[0x15] = uVar1;
  uVar1 = _DAT_14c846288;
  param_1[0x16] = _DAT_14c846280;
  param_1[0x17] = uVar1;
  uVar1 = DAT_14c846258;
  param_1[0x18] = _DAT_14c846250;
  param_1[0x19] = uVar1;
  uVar1 = _DAT_14c846268;
  param_1[0x1a] = _DAT_14c846260;
  param_1[0x1b] = uVar1;
  uVar1 = _DAT_14c846278;
  param_1[0x1c] = _DAT_14c846270;
  param_1[0x1d] = uVar1;
  uVar1 = _DAT_14c846288;
  param_1[0x1e] = _DAT_14c846280;
  param_1[0x1f] = uVar1;
  uVar1 = _DAT_14c846348;
  param_1[0x20] = ram0x00014c846340;
  param_1[0x21] = uVar1;
  param_1[0x22] = DAT_14c846364;
  *(undefined4 *)(param_1 + 0x23) = DAT_14c84636c;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000000;
  return;
}



// FUNCTION 143a6b8af FUN_143a6b8af body=69 status=ok
// SIG undefined FUN_143a6b8af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6b8af(void)

{
  _DAT_14cb3d460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a6b8f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3d468,1);
  return;
}



// FUNCTION 143a6b8f4 FUN_143a6b8f4 body=1275 status=ok
// SIG undefined FUN_143a6b8f4(void)

void FUN_143a6b8f4(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1481b4b1a(param_1 + 0x88,*(undefined8 *)(param_3 + 0x100));
  FUN_148192d06(param_2);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a6bd4a;
    if (iVar7 != 1) goto LAB_143a6b962;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a6bd4a;
  }
  else {
LAB_143a6b962:
    if (iVar7 == 0x10) goto LAB_143a6bd4a;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a6bd4a:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a6bd4a;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a6bacf;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a6cf3b);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a6bacf:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a6bb4f;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a6bb4f:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14addf8c0;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14addf8a0;
    local_68[0] = &LAB_143a70f1a;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb3d82c);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a6be04 FUN_143a6be04 body=4381 status=ok
// SIG undefined FUN_143a6be04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143a6be04(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong uVar22;
  char cVar23;
  int iVar24;
  DWORD DVar25;
  DWORD DVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined4 *puVar29;
  uint *puVar30;
  undefined8 uVar31;
  byte bVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  uint *puVar36;
  ulonglong uVar37;
  int iVar38;
  uint uVar39;
  undefined8 unaff_RSI;
  undefined8 *puVar40;
  undefined8 *puVar41;
  undefined4 uVar42;
  bool bVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_2b8 [32];
  undefined1 **local_298;
  undefined4 local_290;
  undefined4 local_288;
  undefined8 local_280;
  wchar_t *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  code **local_260;
  code *local_258;
  code *local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 local_238 [4];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 *local_138 [2];
  longlong *local_128;
  longlong local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar37 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 == (uint *)0x0) goto LAB_143a6c5cf;
  if ((*(longlong *)(param_1 + 0x60) != 0) &&
     (plVar27 = (longlong *)FUN_144741050(param_1 + 0x68), *plVar27 != 0)) {
    uVar33 = param_2[4];
    if (((ulonglong)uVar33 == 0xffffffff) ||
       (((int)uVar33 < 0 || (*(int *)(*(longlong *)(param_2 + 6) + 0x48) <= (int)uVar33)))) {
      lVar35 = 0;
    }
    else {
      lVar35 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_2 + 6) + 0x40) + (ulonglong)uVar33 * 8);
    }
    if (lVar35 != *(longlong *)(param_2 + 2)) goto LAB_143a6c5cf;
  }
  if ((((((param_2[1] == 0) || (uVar33 = *param_2, (int)uVar33 < 0)) ||
        (DAT_14c9647dc <= (int)uVar33)) ||
       ((plVar27 = (longlong *)
                   ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
        plVar27 == (longlong *)0x0 || (*(uint *)(plVar27 + 2) != param_2[1])))) ||
      ((*(uint *)(plVar27 + 1) & 0x10200000) != 0)) || (lVar35 = *plVar27, lVar35 == 0)) {
    if (((*(longlong *)(param_1 + 0x60) == 0) ||
        (plVar27 = (longlong *)FUN_144741050(param_1 + 0x68), param_3 == 0)) || (*plVar27 == 0)) {
      puVar30 = (uint *)(param_1 + 0x38);
      if (((((*(int *)(param_1 + 0x3c) == 0) || (uVar33 = *puVar30, (int)uVar33 < 0)) ||
           (DAT_14c9647dc <= (int)uVar33)) ||
          ((plVar27 = (longlong *)
                      ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
           plVar27 == (longlong *)0x0 || ((int)plVar27[2] != *(int *)(param_1 + 0x3c))))) ||
         (((*(uint *)(plVar27 + 1) & 0x10200000) != 0 || (*plVar27 == 0)))) {
        if (*(longlong *)(param_1 + 0x40) != 0) {
          lVar34 = FUN_140007850(param_1 + 0x40);
          cVar23 = (*(code *)PTR_FUN_14c758760)();
          lVar35 = DAT_14c9647c8;
          if ((lVar34 == 0) || (cVar23 == '\0')) {
            if (lVar34 != 0) {
              uVar33 = *(uint *)(lVar34 + 0xc);
              *puVar30 = uVar33;
              if (DAT_14c9647dc <= (int)uVar33) goto LAB_143a6c7b6;
              lVar35 = (ulonglong)((uVar33 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8);
              goto LAB_143a6c52b;
            }
            *(undefined8 *)(param_1 + 0x38) = 0;
          }
          else {
            uVar33 = *(uint *)(lVar34 + 0xc);
            if ((int)uVar33 < DAT_14c9647dc) {
              if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8) + 8 +
                            (ulonglong)(uVar33 & 0xffff) * 0x18) & 0x8400000) == 0) {
                *puVar30 = uVar33;
                lVar35 = (ulonglong)((uVar33 & 0xffff) * 0x18) +
                         *(longlong *)(lVar35 + (ulonglong)(uVar33 >> 0x10) * 8);
LAB_143a6c52b:
                iVar24 = *(int *)(lVar35 + 0x10);
                if (*(int *)(lVar35 + 0x10) == 0) {
                  LOCK();
                  iVar24 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar38 = DAT_14c964868 + 1;
                  bVar43 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar24;
                  if (bVar43) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar38);
                  }
                  LOCK();
                  iVar24 = *(int *)(lVar35 + 0x10);
                  bVar43 = iVar24 == 0;
                  if (bVar43) {
                    *(int *)(lVar35 + 0x10) = iVar38;
                    iVar24 = 0;
                  }
                  UNLOCK();
                  if (bVar43) {
                    iVar24 = iVar38;
                  }
                }
                *(int *)(param_1 + 0x3c) = iVar24;
              }
            }
            else if ((_DAT_00000008 & 0x8400000) == 0) {
              *puVar30 = uVar33;
LAB_143a6c7b6:
              lVar35 = 0;
              goto LAB_143a6c52b;
            }
            if ((*(uint *)(lVar34 + 8) >> 0x1e & 1) == 0) goto LAB_143a6c75e;
          }
        }
        if ((((*(int *)(param_3 + 0x4c) != 0) &&
             (uVar33 = *(uint *)(param_3 + 0x48), -1 < (int)uVar33)) &&
            ((int)uVar33 < DAT_14c9647dc)) &&
           (((plVar27 = (longlong *)
                        ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
             plVar27 != (longlong *)0x0 && ((int)plVar27[2] == *(int *)(param_3 + 0x4c))) &&
            (((*(uint *)(plVar27 + 1) & 0x10200000) == 0 && (lVar35 = *plVar27, *plVar27 != 0))))))
        {
          do {
            lVar34 = lVar35;
            lVar35 = *(longlong *)(lVar34 + 0x120);
          } while (lVar35 != 0);
          lVar35 = *(longlong *)(lVar34 + 0xa8);
          if (lVar35 != 0) goto LAB_143a6c769;
        }
      }
      else {
LAB_143a6c75e:
        lVar35 = FUN_1404101e2(puVar30);
LAB_143a6c769:
        lVar35 = FUN_1475b00a8(lVar35);
        if (lVar35 != 0) {
LAB_143a6c77a:
          uVar33 = *(uint *)(lVar35 + 0xc);
          *param_2 = uVar33;
          if ((int)uVar33 < DAT_14c9647dc) {
            lVar34 = (ulonglong)((uVar33 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8);
          }
          else {
            lVar34 = 0;
          }
          uVar33 = *(uint *)(lVar34 + 0x10);
          if (*(uint *)(lVar34 + 0x10) == 0) {
            LOCK();
            iVar24 = DAT_14c964868 + 1;
            UNLOCK();
            uVar39 = DAT_14c964868 + 1;
            bVar43 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar24;
            if (bVar43) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar39);
            }
            LOCK();
            uVar33 = *(uint *)(lVar34 + 0x10);
            bVar43 = uVar33 == 0;
            if (bVar43) {
              *(uint *)(lVar34 + 0x10) = uVar39;
              uVar33 = 0;
            }
            UNLOCK();
            if (bVar43) {
              uVar33 = uVar39;
            }
          }
          param_2[1] = uVar33;
          goto LAB_143a6bf3e;
        }
      }
    }
    else {
      lVar35 = FUN_1404e5848(param_2 + 4,param_3 + 0x1e8,(longlong *)(param_1 + 0x60));
      *(longlong *)(param_2 + 2) = lVar35;
      if (lVar35 != 0) {
        lVar28 = FUN_14092ee58();
        lVar34 = *(longlong *)(lVar35 + 0x10);
        iVar24 = *(int *)(lVar34 + 0x38);
        if ((iVar24 < *(int *)(lVar28 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar34 + 0x30) + (longlong)*(int *)(lVar28 + 0x38) * 8) !=
            lVar28 + 0x30)) {
          if (DAT_14cac9ca8 == 0) {
            local_260 = &local_248;
            local_248 = FUN_141030f22;
            local_250 = FUN_14081d0ea;
            local_258 = FUN_14081d0ea;
            local_268 = &LAB_1478c0a72;
            local_270 = &LAB_1417b2375;
            local_278 = L"Engine";
            local_280 = 0x1000000000;
            local_288 = 0x10000004;
            local_290 = 8;
            local_298 = (undefined1 **)CONCAT44(local_298._4_4_,0x390);
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            lVar34 = *(longlong *)(lVar35 + 0x10);
            iVar24 = *(int *)(lVar34 + 0x38);
          }
          if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar24) &&
             (*(longlong *)
               (*(longlong *)(lVar34 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
              DAT_14cac9ca8 + 0x30)) goto LAB_143a6c769;
        }
        else if ((*(uint *)(lVar35 + 8) >> 0x1e & 1) == 0) goto LAB_143a6c77a;
      }
    }
    param_2[0] = 0;
    param_2[1] = 0;
  }
  else {
LAB_143a6bf3e:
    dVar16 = *(double *)(lVar35 + 0x240);
    dVar17 = *(double *)(lVar35 + 0x248);
    dVar18 = *(double *)(lVar35 + 0x250);
    uVar31 = *(undefined8 *)(lVar35 + 600);
    fVar2 = *(float *)(param_3 + 0x14);
    dVar19 = *(double *)(lVar35 + 0x280);
    dVar20 = *(double *)(lVar35 + 0x288);
    fVar3 = *(float *)(param_3 + 0xc);
    dVar5 = *(double *)(lVar35 + 0x260);
    dVar9 = (double)*(float *)(param_3 + 0x10) * -65536.0 + *(double *)(lVar35 + 0x268);
    dVar6 = *(double *)(lVar35 + 0x270);
    dVar21 = *(double *)(lVar35 + 0x290);
    dVar44 = *(double *)(lVar35 + 0x240);
    dVar4 = *(double *)(lVar35 + 600);
    dVar47 = *(double *)(lVar35 + 600);
    *(double *)(param_2 + 0x14) = dVar16;
    *(double *)(param_2 + 0x16) = dVar17;
    *(double *)(param_2 + 0x18) = dVar18;
    *(undefined8 *)(param_2 + 0x1a) = uVar31;
    dVar10 = dVar17 + dVar17;
    dVar45 = dVar18 + dVar18;
    dVar15 = dVar16 * (dVar16 + dVar16);
    dVar14 = (1.0 - (dVar18 * dVar45 + dVar15)) * dVar20;
    dVar44 = dVar44 * dVar45;
    dVar46 = dVar45 * dVar4;
    dVar47 = (dVar16 + dVar16) * dVar47;
    dVar4 = dVar10 * dVar4;
    dVar12 = (dVar45 * dVar17 - dVar47) * dVar21;
    *(double *)(param_2 + 0x1c) = (1.0 - (dVar18 * dVar45 + dVar17 * dVar10)) * dVar19;
    *(double *)(param_2 + 0x1e) = (dVar10 * dVar16 + dVar46) * dVar19;
    *(double *)(param_2 + 0x20) = (dVar44 - dVar4) * dVar19;
    param_2[0x22] = 0;
    param_2[0x23] = 0;
    auVar13._8_4_ = SUB84(dVar14,0);
    auVar13._0_8_ = (dVar10 * dVar16 - dVar46) * dVar20;
    auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x24) = auVar13;
    *(double *)(param_2 + 0x28) = (dVar45 * dVar17 + dVar47) * dVar20;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
    auVar11._8_4_ = SUB84(dVar12,0);
    auVar11._0_8_ = (dVar4 + dVar44) * dVar21;
    auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x2c) = auVar11;
    *(double *)(param_2 + 0x30) = (1.0 - (dVar15 + dVar17 * dVar10)) * dVar21;
    param_2[0x32] = 0;
    param_2[0x33] = 0;
    auVar8._8_4_ = SUB84(dVar9,0);
    auVar8._0_8_ = (double)fVar3 * -65536.0 + dVar5;
    auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x34) = auVar8;
    auVar7._8_4_ = 0;
    auVar7._0_8_ = (double)fVar2 * -65536.0 + dVar6;
    auVar7._12_4_ = 0x3ff00000;
    *(undefined1 (*) [16])(param_2 + 0x38) = auVar7;
    FUN_14007522e(&local_248,param_2 + 0x1c);
    *(code **)(param_2 + 0x3c) = local_248;
    *(undefined8 *)(param_2 + 0x3e) = local_238[2];
    *(undefined8 *)(param_2 + 0x40) = local_208;
    *(undefined8 *)(param_2 + 0x42) = local_1e8;
    *(undefined8 *)(param_2 + 0x44) = local_240;
    *(undefined8 *)(param_2 + 0x46) = local_238[3];
    *(undefined8 *)(param_2 + 0x48) = local_200;
    *(undefined8 *)(param_2 + 0x4a) = local_1e0;
    *(undefined8 *)(param_2 + 0x4c) = local_238[0];
    *(undefined8 *)(param_2 + 0x4e) = local_218;
    *(undefined8 *)(param_2 + 0x50) = local_1f8;
    *(undefined8 *)(param_2 + 0x52) = local_1d8;
    *(undefined8 *)(param_2 + 0x54) = local_238[1];
    *(undefined8 *)(param_2 + 0x56) = local_210;
    *(undefined8 *)(param_2 + 0x58) = local_1f0;
    *(undefined8 *)(param_2 + 0x5a) = local_1d0;
    puVar40 = (undefined8 *)(lVar35 + 0x240);
    puVar30 = param_2 + 0x5c;
    for (lVar34 = 0xc; lVar34 != 0; lVar34 = lVar34 + -1) {
      *(undefined8 *)puVar30 = *puVar40;
      puVar40 = puVar40 + 1;
      puVar30 = puVar30 + 2;
    }
    *(undefined8 *)(param_2 + 0x7e) = *(undefined8 *)(lVar35 + 0x6b0);
    uVar31 = *(undefined8 *)(lVar35 + 0x6a8);
    *(undefined8 *)(param_2 + 0x7a) = *(undefined8 *)(lVar35 + 0x6a0);
    *(undefined8 *)(param_2 + 0x7c) = uVar31;
    fVar2 = *(float *)(param_3 + 0x14);
    fVar3 = *(float *)(param_3 + 0x10);
    *(double *)(param_2 + 0x74) = (double)*(float *)(param_3 + 0xc) * 65536.0;
    *(double *)(param_2 + 0x76) = (double)fVar3 * 65536.0;
    *(double *)(param_2 + 0x78) = (double)fVar2 * 65536.0;
    cVar23 = *(char *)(param_1 + 0x80);
    if ((cVar23 == '\0') && ((*(byte *)(param_1 + 0x30) & 4) == 0)) {
      bVar32 = 0;
    }
    else {
      bVar32 = (byte)(param_2[0xa9] >> 0x1f);
    }
    if (param_2[0xab] != *(uint *)(lVar35 + 0x680)) {
      FUN_1408d5aac(param_2 + 0x80,lVar35 + 0x620);
      *(undefined8 *)(param_2 + 0x84) = *(undefined8 *)(lVar35 + 0x630);
      FUN_1408d5b02(param_2 + 0x86,lVar35 + 0x638);
      *(undefined8 *)(param_2 + 0x8a) = *(undefined8 *)(lVar35 + 0x648);
      FUN_1408d5aac(param_2 + 0x8c,lVar35 + 0x650);
      *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(lVar35 + 0x660);
      FUN_1408d5b5a(param_2 + 0x92);
      *(undefined8 *)(param_2 + 0x96) = *(undefined8 *)(lVar35 + 0x678);
      uVar33 = *(uint *)(lVar35 + 0x680);
      param_2[0x98] = uVar33;
      param_2[0xab] = uVar33;
      *(undefined1 *)(param_2 + 0xaa) = 0;
      FUN_148192ca6(param_2 + 0x9a);
      cVar23 = *(char *)(param_1 + 0x80);
      bVar32 = 1;
      if (cVar23 == '\0') {
        bVar32 = (*(byte *)(param_1 + 0x30) & 4) >> 2;
      }
    }
    if (((*(byte *)(param_1 + 0x30) & 4) == 0) || ((char)param_2[0xaa] != '\0')) {
      bVar43 = false;
    }
    else {
      bVar43 = param_2[0xa9] != 0xffffffff;
    }
    if (bVar32 == 0) {
      if (bVar43) {
LAB_143a6c427:
        local_248 = *(code **)(param_1 + 0x28);
        *(undefined1 *)(param_2 + 0xaa) = 1;
        local_240 = *(undefined8 *)(param_3 + 0x100);
        puVar30 = param_2 + 0x1c;
        puVar40 = local_238;
        for (lVar35 = 0x10; lVar35 != 0; lVar35 = lVar35 + -1) {
          *puVar40 = *(undefined8 *)puVar30;
          puVar30 = puVar30 + 2;
          puVar40 = puVar40 + 1;
        }
        local_1b8 = *(undefined8 *)(param_2 + 0x14);
        uStack_1b0 = *(undefined8 *)(param_2 + 0x16);
        local_1a8 = param_2[0x18];
        uStack_1a4 = param_2[0x19];
        uStack_1a0 = param_2[0x1a];
        uStack_19c = param_2[0x1b];
        local_198 = param_2[0x7a];
        uStack_194 = param_2[0x7b];
        uStack_190 = param_2[0x7c];
        uStack_18c = param_2[0x7d];
        local_188 = *(undefined8 *)(param_2 + 0x7e);
        FUN_148193072(&local_180,param_2 + 0x9a);
        lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar24 = *(int *)(lVar35 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar24 != 2) {
            if (iVar24 != 1) goto LAB_143a6c4d1;
            DVar25 = FUN_140ad26c0();
            DVar26 = GetCurrentThreadId();
            if (DVar25 == DVar26) goto LAB_143a6c4da;
            goto LAB_143a6c859;
          }
LAB_143a6c4da:
          FUN_143a710f2(&local_248,&DAT_14ca85100);
        }
        else {
LAB_143a6c4d1:
          if (iVar24 == 0x10) goto LAB_143a6c4da;
LAB_143a6c859:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (iVar24 = *(int *)(lVar35 + 0xc60), iVar24 == 2))
            goto LAB_143a6c4da;
            if (iVar24 == 1) {
              DVar25 = FUN_140ad26c0();
              DVar26 = GetCurrentThreadId();
              if (DVar25 == DVar26) goto LAB_143a6c4da;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar40 = (undefined8 *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
            puVar30 = (uint *)*puVar40;
            if (puVar30 != (uint *)0x0) goto LAB_143a6c937;
            while( true ) {
              uVar33 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar33 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar33 | 1;
                __tlregdtor(&LAB_143a6cf3b);
              }
              lVar35 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              puVar29 = *(undefined4 **)(lVar35 + 0x310);
              *(undefined8 *)(lVar35 + 0x310) = 0;
              if (puVar29 == (undefined4 *)0x0) {
                puVar29 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar29 = 0xffffffff;
              *(undefined4 **)(puVar29 + 0x10) = puVar29 + 0x16;
              puVar29[0x12] = 0;
              *puVar40 = puVar29;
              FUN_140217a48(puVar40);
              puVar30 = (uint *)*puVar40;
LAB_143a6c937:
              puVar41 = (undefined8 *)(*(longlong *)(puVar30 + 0x10) + 0xfU & 0xfffffffffffffff0);
              puVar36 = (uint *)(puVar41 + 0x38);
              uVar33 = puVar30[0x12];
              if (puVar36 <= puVar30 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar30 + 0x10) = puVar30 + 0x4000;
                LOCK();
                uVar39 = *puVar30;
                *puVar30 = *puVar30 + uVar33 + 1;
                UNLOCK();
                if ((uVar39 ^ uVar33) != 0xffffffff) break;
                puVar30 = (uint *)*puVar40;
                *puVar30 = 0xffffffff;
                *(uint **)(puVar30 + 0x10) = puVar30 + 0x16;
                puVar30[0x12] = 0;
                *puVar40 = puVar30;
                puVar41 = (undefined8 *)((longlong)puVar30 + 0x67U & 0xfffffffffffffff0);
                puVar36 = (uint *)(puVar41 + 0x38);
                uVar33 = 0;
                if (puVar36 <= puVar30 + 0x4000) {
                  uVar33 = 1;
                  goto LAB_143a6c9b7;
                }
              }
            }
            uVar33 = uVar33 + 1;
LAB_143a6c9b7:
            *(uint **)(puVar30 + 0x10) = puVar36;
            puVar30[0x12] = uVar33;
            iVar24 = 0;
            FUN_1447247dc(puVar41,0);
            *puVar41 = &PTR_FUN_14addf8f0;
            memcpy(puVar41 + 0x16,&local_248,200);
            puVar41[0x2f] = local_180;
            local_180 = 0;
            *(undefined4 *)(puVar41 + 0x30) = (undefined4)local_178;
            *(undefined4 *)((longlong)puVar41 + 0x184) = local_178._4_4_;
            local_178 = 0;
            puVar41[0x31] = local_170;
            local_170 = 0;
            *(undefined4 *)(puVar41 + 0x32) = (undefined4)local_168;
            *(undefined4 *)((longlong)puVar41 + 0x194) = local_168._4_4_;
            local_168 = 0;
            puVar41[0x33] = local_160;
            local_160 = 0;
            *(undefined4 *)(puVar41 + 0x34) = (undefined4)local_158;
            *(undefined4 *)((longlong)puVar41 + 0x1a4) = local_158._4_4_;
            local_158 = 0;
            *(undefined4 *)(puVar41 + 0x35) = local_150;
            *(undefined4 *)((longlong)puVar41 + 0x1ac) = uStack_14c;
            *(undefined4 *)(puVar41 + 0x36) = uStack_148;
            *(undefined4 *)((longlong)puVar41 + 0x1b4) = uStack_144;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar33 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar33 < 2) {
                uVar37 = (ulonglong)(byte)(&DAT_149e38edc)[uVar33];
              }
              else {
                uVar37 = 2;
              }
            }
            else {
              iVar24 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar37 = 5;
            }
            if (*(code **)(puVar41[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar41[0xe] + 0x18))(puVar41 + 0xe,puVar41 + 9);
            }
            puVar41[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar41[9] = puVar41;
            puVar41[10] = puVar41;
            lVar35 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar35 == 0) {
              uVar22 = 1;
              if ((char)uVar37 != '\x06') {
                uVar22 = uVar37;
              }
              uVar37 = uVar22;
              uVar31 = 0;
            }
            else {
              if ((char)uVar37 == '\x06') {
                uVar37 = *(ulonglong *)(lVar35 + 0x38) >> 0x3b;
              }
              uVar31 = *(undefined8 *)(lVar35 + 0x30);
            }
            puVar41[0xf] = uVar31;
            puVar41[0x10] = uVar37 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar41 + 0x1c) = iVar24;
            if (puVar41 == (undefined8 *)0x0) {
              local_138[0] = (undefined1 *)CONCAT71(local_138[0]._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar41 + 1) = *(int *)(puVar41 + 1) + 1;
              UNLOCK();
              local_138[0] = (undefined1 *)CONCAT71(local_138[0]._1_7_,1);
              FUN_1447439e4(puVar41);
              LOCK();
              piVar1 = (int *)(puVar41 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar41)(puVar41,1);
              }
            }
          }
          else {
            local_138[0] = (undefined1 *)0x0;
            plVar27 = (longlong *)FUN_14001cc68(0x120,0x10);
            *plVar27 = (longlong)&PTR_LAB_14addf8d0;
            local_128 = plVar27;
            memcpy(plVar27 + 2,&local_248,200);
            plVar27[0x1b] = local_180;
            local_180 = 0;
            *(undefined4 *)(plVar27 + 0x1c) = (undefined4)local_178;
            *(undefined4 *)((longlong)plVar27 + 0xe4) = local_178._4_4_;
            local_178 = 0;
            plVar27[0x1d] = local_170;
            local_170 = 0;
            *(undefined4 *)(plVar27 + 0x1e) = (undefined4)local_168;
            *(undefined4 *)((longlong)plVar27 + 0xf4) = local_168._4_4_;
            local_168 = 0;
            plVar27[0x1f] = local_160;
            local_160 = 0;
            *(undefined4 *)(plVar27 + 0x20) = (undefined4)local_158;
            *(undefined4 *)((longlong)plVar27 + 0x104) = local_158._4_4_;
            local_158 = 0;
            *(undefined4 *)(plVar27 + 0x21) = local_150;
            *(undefined4 *)((longlong)plVar27 + 0x10c) = uStack_14c;
            *(undefined4 *)(plVar27 + 0x22) = uStack_148;
            *(undefined4 *)((longlong)plVar27 + 0x114) = uStack_144;
            if (plVar27 != (longlong *)&DAT_fffffffffffffff0) {
              local_138[0] = &LAB_143a71ce2;
            }
            local_298 = local_138;
            FUN_14005a792(&DAT_14ca9a440,L"FUpdateDIColorCurve",&DAT_14cb3d830);
            if (local_138[0] != (undefined1 *)0x0) {
              plVar27 = local_128;
              if (local_128 == (longlong *)0x0) {
                plVar27 = local_118;
              }
              (**(code **)(*plVar27 + 0x10))();
            }
          }
        }
        FUN_148195d96(&local_180);
      }
    }
    else {
      uVar42 = 0x100;
      if (cVar23 != '\0') {
        uVar42 = *(undefined4 *)(param_1 + 0x84);
      }
      FUN_148192d40(param_2 + 0x9a,param_2 + 0x80,uVar42);
      if ((*(byte *)(param_1 + 0x30) & 4) != 0) goto LAB_143a6c427;
    }
  }
  uVar37 = 0;
LAB_143a6c5cf:
  if ((local_f0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return uVar37 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a6cf62 FUN_143a6cf62 body=405 status=ok
// SIG undefined FUN_143a6cf62(void)

undefined8 * FUN_143a6cf62(undefined8 *param_1,undefined8 *param_2)

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
    param_1[4] = param_2[4];
    param_2[4] = 0;
    plVar2 = (longlong *)param_2[5];
    plVar3 = (longlong *)param_1[5];
    if (plVar2 != plVar3) {
      param_2[5] = 0;
      param_1[5] = plVar2;
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
    param_1[6] = param_2[6];
    param_2[6] = 0;
    plVar2 = (longlong *)param_2[7];
    plVar3 = (longlong *)param_1[7];
    if (plVar2 != plVar3) {
      param_2[7] = 0;
      param_1[7] = plVar2;
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
    param_1[8] = param_2[8];
    param_2[8] = 0;
    plVar2 = (longlong *)param_2[9];
    plVar3 = (longlong *)param_1[9];
    if (plVar2 != plVar3) {
      param_2[9] = 0;
      param_1[9] = plVar2;
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
  }
  return param_1;
}



// FUNCTION 143a6d0f8 FUN_143a6d0f8 body=14 status=ok
// SIG undefined FUN_143a6d0f8(void)

void FUN_143a6d0f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 143a6d106 FUN_143a6d106 body=29 status=ok
// SIG undefined FUN_143a6d106(void)

undefined8 FUN_143a6d106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6d124 FUN_143a6d124 body=14 status=ok
// SIG undefined FUN_143a6d124(void)

void FUN_143a6d124(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 143a6d132 FUN_143a6d132 body=29 status=ok
// SIG undefined FUN_143a6d132(void)

undefined8 FUN_143a6d132(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6d150 FUN_143a6d150 body=14 status=ok
// SIG undefined FUN_143a6d150(void)

void FUN_143a6d150(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 143a6d15e FUN_143a6d15e body=29 status=ok
// SIG undefined FUN_143a6d15e(void)

undefined8 FUN_143a6d15e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6d17c FUN_143a6d17c body=14 status=ok
// SIG undefined FUN_143a6d17c(void)

void FUN_143a6d17c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 143a6d18a FUN_143a6d18a body=29 status=ok
// SIG undefined FUN_143a6d18a(void)

undefined8 FUN_143a6d18a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6d1a8 FUN_143a6d1a8 body=14 status=ok
// SIG undefined FUN_143a6d1a8(void)

void FUN_143a6d1a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 143a6d1b6 FUN_143a6d1b6 body=29 status=ok
// SIG undefined FUN_143a6d1b6(void)

undefined8 FUN_143a6d1b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6d2fc FUN_143a6d2fc body=60 status=ok
// SIG undefined FUN_143a6d2fc(void)

void FUN_143a6d2fc(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 143a6d360 FUN_143a6d360 body=282 status=ok
// SIG undefined FUN_143a6d360(void)

undefined8 * FUN_143a6d360(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a6d4a4 FUN_143a6d4a4 body=12 status=ok
// SIG undefined FUN_143a6d4a4(void)

void FUN_143a6d4a4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a6d4ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a6d4b0 FUN_143a6d4b0 body=29 status=ok
// SIG undefined FUN_143a6d4b0(void)

undefined8 FUN_143a6d4b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6d4ce FUN_143a6d4ce body=282 status=ok
// SIG undefined FUN_143a6d4ce(void)

undefined8 * FUN_143a6d4ce(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a6d5e8 FUN_143a6d5e8 body=117 status=ok
// SIG undefined FUN_143a6d5e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6d5e8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148196638(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148196638(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a6d653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a6d65e FUN_143a6d65e body=696 status=ok
// SIG undefined FUN_143a6d65e(void)

void FUN_143a6d65e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  int iVar7;
  void *_Src;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong *local_c0;
  int local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined1 local_94;
  uint local_8c;
  ulonglong local_88 [9];
  
  local_88[8] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
    lVar1 = param_1[1];
    lVar9 = lVar6 + 0x48;
    if (*(longlong *)(lVar6 + 0x50) != 0) {
      lVar9 = *(longlong *)(lVar6 + 0x50);
    }
    iVar7 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(lVar6 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar7 != -1) {
      do {
        lVar9 = *(longlong *)(lVar6 + 0x10) + (longlong)iVar7 * 0x50;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar7 * 0x50) == lVar1) {
          if ((lVar9 + 8U & 0xfffffffffffffff7) != 0) {
            local_a0 = (undefined **)0x14addcfd0;
            local_98 = 0x11;
            local_94 = 0;
            uVar2 = FUN_14001a6c0(&local_a0,1);
            FUN_14047abb0(&local_a0,uVar2);
            local_a0 = &PTR_FUN_14a37f830;
            local_88[0] = 0;
            local_88[1] = 0;
            local_88[2] = 0;
            local_88[3] = 0;
            local_88[4] = 0;
            local_88[5] = 0;
            local_88[6] = 0;
            local_88[7] = 0;
            local_c0 = param_1 + 4;
            local_b0 = 0;
            local_a8 = 0;
            local_c8 = 0;
            FUN_1431ed020(&local_a0,param_2,*(undefined8 *)(*(longlong *)(lVar9 + 0x28) + 8),
                          &local_b0);
            local_b0 = 0;
            local_a8 = 0;
            FUN_14007658c(&DAT_14ca850c8,&local_b0,5);
            (**(code **)(*DAT_14ca83900 + 0x370))();
            local_b0 = 0;
            local_a8 = 0;
            FUN_14007658c(&DAT_14ca850c8,&local_b0,5);
            (**(code **)(*DAT_14ca83900 + 0x328))();
            pvVar5 = (void *)FUN_1431ed846(&local_a0,&local_b0,&local_b4);
            lVar6 = (**(code **)(**(longlong **)(*(longlong *)(lVar9 + 0x28) + 8) + 8))();
            iVar7 = *(int *)((longlong)&DAT_14c873428 +
                            (ulonglong)((uint)*(byte *)(lVar6 + 0x33) * 0x30));
            uVar3 = *(int *)(lVar9 + 8) * iVar7 * *(int *)(lVar9 + 0xc) * *(int *)(lVar9 + 0x10);
            lVar6 = param_1[3];
            iVar11 = *(int *)(lVar6 + 8);
            *(uint *)(lVar6 + 8) = iVar11 + uVar3;
            if ((uint)(*(int *)(lVar6 + 0xc) - iVar11) < uVar3) {
              FUN_1447403be();
            }
            iVar11 = *(int *)(lVar9 + 0x10);
            if (0 < iVar11) {
              iVar4 = *(int *)(lVar9 + 0xc);
              uVar3 = (int)local_b0 * iVar7;
              iVar10 = 0;
              do {
                if (0 < iVar4) {
                  iVar11 = 0;
                  _Src = pvVar5;
                  do {
                    uVar8 = *(int *)(lVar9 + 8) * iVar7;
                    memcpy((void *)((ulonglong)(uVar8 * (iVar4 * iVar10 + iVar11)) +
                                   *(longlong *)param_1[3]),_Src,(ulonglong)uVar8);
                    _Src = (void *)((longlong)_Src + (ulonglong)uVar3);
                    iVar11 = iVar11 + 1;
                    iVar4 = *(int *)(lVar9 + 0xc);
                  } while (iVar11 < iVar4);
                  iVar11 = *(int *)(lVar9 + 0x10);
                }
                pvVar5 = (void *)((longlong)pvVar5 + (ulonglong)(local_b4 * uVar3));
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar11);
            }
            (**(code **)(*DAT_14ca83900 + 0x488))(DAT_14ca83900,&DAT_14ca85100,local_88[local_8c]);
            FUN_145bf0f7a(&local_a0);
          }
          break;
        }
        iVar7 = *(int *)(lVar9 + 0x48);
      } while (iVar7 != -1);
    }
  }
  if ((local_88[8] ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a6d928 FUN_143a6d928 body=29 status=ok
// SIG undefined FUN_143a6d928(void)

void FUN_143a6d928(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a6d946 FUN_143a6d946 body=29 status=ok
// SIG undefined FUN_143a6d946(void)

undefined8 FUN_143a6d946(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6d964 FUN_143a6d964 body=282 status=ok
// SIG undefined FUN_143a6d964(void)

undefined8 * FUN_143a6d964(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a6da7e FUN_143a6da7e body=105 status=ok
// SIG undefined FUN_143a6da7e(void)

void FUN_143a6da7e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a6d65e(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a6d65e(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a6dac1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a6dae8 FUN_143a6dae8 body=1968 status=ok
// SIG undefined FUN_143a6dae8(void)

void FUN_143a6dae8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_768 [32];
  undefined1 local_748;
  ulonglong local_738;
  longlong local_730;
  undefined8 *local_728;
  undefined1 local_719;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined1 local_6f8 [112];
  undefined8 *local_688;
  undefined8 *local_680;
  longlong local_660;
  uint local_658;
  uint local_654;
  longlong local_590;
  uint local_588;
  uint local_584;
  longlong local_580;
  uint local_578;
  uint local_574;
  longlong local_560;
  uint local_558;
  uint local_554;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined2 local_4c;
  ulonglong local_48;
  undefined6 uVar14;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_768;
  if (param_1[4] != 0) {
    local_708 = 0;
    uStack_700 = 0;
    local_718 = 0;
    uStack_710 = 0;
    FUN_14013e790();
    lVar12 = *param_1;
    if (*(int *)(lVar12 + 0x18) != *(int *)(lVar12 + 0x44)) {
      lVar9 = param_1[1];
      lVar8 = lVar12 + 0x48;
      if (*(longlong *)(lVar12 + 0x50) != 0) {
        lVar8 = *(longlong *)(lVar12 + 0x50);
      }
      iVar10 = *(int *)(lVar8 + (ulonglong)
                                (*(int *)(lVar12 + 0x58) - 1U &
                                (int)lVar9 + (int)((ulonglong)lVar9 >> 0x20) * 0x17) * 4);
      if (iVar10 != -1) {
        do {
          lVar1 = *(longlong *)(lVar12 + 0x10) + (longlong)iVar10 * 0x50;
          if (*(longlong *)(*(longlong *)(lVar12 + 0x10) + (longlong)iVar10 * 0x50) == lVar9) {
            if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
              FUN_1407779ba(local_6f8,param_2,lVar8,0);
              uVar4 = *(undefined8 *)
                       (&DAT_14ca8c1f0 +
                       (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)param_1[5] * 2) * 8);
              uVar7 = FUN_145f77ca4();
              FUN_1448e935e(uVar4,&local_80,uVar7,0);
              FUN_145f77ca4();
              local_728 = local_80;
              uVar2 = *(int *)((longlong)param_1 + 0x1c) + 3;
              uVar16 = *(int *)((longlong)param_1 + 0x1c) + 6;
              if (-1 < (int)uVar2) {
                uVar16 = uVar2;
              }
              iVar10 = (int)param_1[3] + 3;
              iVar5 = (int)param_1[3] + 6;
              if (-1 < iVar10) {
                iVar5 = iVar10;
              }
              iVar10 = *(int *)((longlong)param_1 + 0x14) + 3;
              iVar6 = *(int *)((longlong)param_1 + 0x14) + 6;
              if (-1 < iVar10) {
                iVar6 = iVar10;
              }
              local_730 = local_78;
              puVar15 = (undefined8 *)((longlong)local_688 + 0xfU & 0xfffffffffffffff0);
              puVar17 = puVar15 + 0xc;
              if (local_680 < puVar17) {
                FUN_140023dd8(&local_688,0x70);
                puVar15 = (undefined8 *)((longlong)local_688 + 0xfU & 0xfffffffffffffff0);
                puVar17 = puVar15 + 0xc;
              }
              uVar2 = local_658;
              *puVar15 = &PTR_FUN_14addd068;
              puVar15[2] = 0;
              puVar15[3] = 0;
              puVar15[4] = 0;
              puVar15[5] = 0;
              lVar12 = (longlong)(int)local_658;
              local_658 = local_658 + 1;
              local_688 = puVar17;
              if (local_654 < local_658) {
                FUN_1448cfae8(&local_660,uVar2);
              }
              *(undefined8 **)(local_660 + lVar12 * 8) = puVar15;
              if (*(longlong *)(lVar1 + 0x28) == 0) {
LAB_143a6ddf6:
                local_68 = DAT_14ca83a40;
                local_78 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
                uStack_70 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
                local_4d = (undefined1)param_1[2];
                local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
                local_4e = 2;
                local_80 = (undefined8 *)&DAT_00020008;
                local_4c = 0xff00;
                local_54 = 0x10001;
                local_50 = 0x101;
                local_60 = 0;
                local_5c = &DAT_100000001;
                uVar13 = (longlong)local_688 + 7U & 0xfffffffffffffff8;
                puVar17 = (undefined8 *)(uVar13 + 0x120);
                if (local_680 < puVar17) {
                  FUN_140023dd8(&local_688,0x128);
                  uVar13 = (longlong)local_688 + 7U & 0xfffffffffffffff8;
                  puVar17 = (undefined8 *)(uVar13 + 0x120);
                }
                local_738 = (ulonglong)uVar16;
                local_688 = puVar17;
                FUN_1456bbb8c(uVar13,L"NiagaraEmptyTextureUAV::Texture3D",&local_80,0);
                uVar2 = local_578;
                lVar12 = (longlong)(int)local_578;
                local_578 = local_578 + 1;
                if (local_574 < local_578) {
                  FUN_14472c0f6(&local_580,uVar2);
                }
                *(ulonglong *)(local_580 + lVar12 * 8) = uVar13;
                *(uint *)(uVar13 + 0x9c) = local_578 - 1;
                uVar3 = *(undefined1 *)(uVar13 + 0x94);
                puVar17 = (undefined8 *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
                puVar18 = puVar17 + 9;
                if (local_680 < puVar18) {
                  FUN_140023dd8(&local_688,0x50);
                  puVar17 = (undefined8 *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
                  puVar18 = puVar17 + 9;
                }
                uVar2 = local_558;
                puVar17[1] = *(undefined8 *)(uVar13 + 8);
                puVar17[2] = 0;
                *(undefined1 *)(puVar17 + 3) = 0;
                *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar17 + 5) = 1;
                *puVar17 = &PTR_FUN_14a1fb948;
                *(undefined1 *)(puVar17 + 6) = uVar3;
                *(undefined1 *)(puVar17 + 7) = 0;
                *(undefined4 *)((longlong)puVar17 + 0x31) = 0;
                *(undefined2 *)((longlong)puVar17 + 0x35) = 0;
                puVar17[8] = uVar13;
                lVar12 = (longlong)(int)local_558;
                local_558 = local_558 + 1;
                local_688 = puVar18;
                if (local_554 < local_558) {
                  FUN_1447568fc(&local_560,uVar2);
                }
                *(undefined8 **)(local_560 + lVar12 * 8) = puVar17;
                *(uint *)((longlong)puVar17 + 0x1c) = local_558 - 1;
                uVar16 = (uint)local_738;
              }
              else {
                if (*(longlong *)(lVar1 + 0x30) == 0) {
                  lVar12 = FUN_14473c272(local_6f8,lVar1 + 0x28,0);
                  *(longlong *)(lVar1 + 0x30) = lVar12;
                  uVar3 = *(undefined1 *)(lVar12 + 0x94);
                  puVar17 = (undefined8 *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
                  puVar18 = puVar17 + 9;
                  if (local_680 < puVar18) {
                    FUN_140023dd8(&local_688,0x50);
                    puVar17 = (undefined8 *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
                    puVar18 = puVar17 + 9;
                  }
                  uVar2 = local_558;
                  puVar17[1] = *(undefined8 *)(lVar12 + 8);
                  puVar17[2] = 0;
                  *(undefined1 *)(puVar17 + 3) = 0;
                  *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar17 + 5) = 0;
                  *puVar17 = &PTR_FUN_14a1fb948;
                  *(undefined1 *)(puVar17 + 6) = uVar3;
                  *(undefined1 *)(puVar17 + 7) = 0;
                  *(undefined4 *)((longlong)puVar17 + 0x31) = 0;
                  *(undefined2 *)((longlong)puVar17 + 0x35) = 0;
                  puVar17[8] = lVar12;
                  lVar12 = (longlong)(int)local_558;
                  local_558 = local_558 + 1;
                  local_688 = puVar18;
                  if (local_554 < local_558) {
                    FUN_1447568fc(&local_560,uVar2);
                  }
                  *(undefined8 **)(local_560 + lVar12 * 8) = puVar17;
                  *(uint *)((longlong)puVar17 + 0x1c) = local_558 - 1;
                  *(undefined8 **)(lVar1 + 0x40) = puVar17;
                  if (*(longlong *)(lVar1 + 0x28) == 0) goto LAB_143a6ddf6;
                }
                else {
                  puVar17 = *(undefined8 **)(lVar1 + 0x40);
                }
                if (puVar17 == (undefined8 *)0x0) goto LAB_143a6ddf6;
              }
              puVar15[2] = puVar17;
              lVar9 = *(longlong *)(param_1[4] + 0xa0);
              lVar8 = *(longlong *)(param_1[4] + 0xa8);
              puVar15[3] = DAT_14c9c0d80;
              if (lVar9 == 0) {
                lVar9 = *(longlong *)(DAT_14ca94dc0 + 0x10);
              }
              puVar15[4] = lVar9;
              if (lVar8 == 0) {
                lVar8 = *(longlong *)(DAT_14ca94db8 + 0x10);
              }
              puVar15[5] = lVar8;
              puVar15[6] = local_708;
              puVar15[7] = uStack_700;
              *(undefined4 *)(puVar15 + 8) = (undefined4)local_718;
              *(undefined4 *)((longlong)puVar15 + 0x44) = local_718._4_4_;
              *(undefined4 *)(puVar15 + 9) = (undefined4)uStack_710;
              *(undefined4 *)((longlong)puVar15 + 0x4c) = uStack_710._4_4_;
              puVar15[10] = *(undefined8 *)((longlong)param_1 + 0x14);
              *(undefined4 *)(puVar15 + 0xb) = *(undefined4 *)((longlong)param_1 + 0x1c);
              *(undefined4 *)((longlong)puVar15 + 0x5c) = 0;
              lVar9 = FUN_145f77f10();
              FUN_140069376(local_6f8);
              uVar14 = (undefined6)((ulonglong)lVar12 >> 0x10);
              uVar11 = (undefined4)CONCAT62(uVar14,2);
              if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
                 ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
                uVar11 = (undefined4)CONCAT62(uVar14,4);
              }
              puVar18 = (undefined8 *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
              puVar17 = puVar18 + 0x3c;
              if (local_680 < puVar17) {
                FUN_140023dd8(&local_688,0x1e8);
                puVar18 = (undefined8 *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
                puVar17 = puVar18 + 0x3c;
              }
              local_78 = *(longlong *)(lVar9 + 0x48);
              if (local_78 != 0) {
                LOCK();
                *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
                UNLOCK();
              }
              local_748 = 2;
              local_688 = puVar17;
              local_80 = puVar15 + 2;
              uStack_70 = lVar9;
              FUN_140068f1a(puVar18,&local_719,&local_80,uVar11);
              uVar2 = local_588;
              *puVar18 = &PTR_FUN_14addd070;
              puVar18[0x37] = puVar15 + 2;
              puVar18[0x38] = local_728;
              puVar18[0x39] = local_730;
              *(int *)(puVar18 + 0x3a) = iVar6 >> 2;
              *(int *)((longlong)puVar18 + 0x1d4) = iVar5 >> 2;
              *(int *)(puVar18 + 0x3b) = (int)uVar16 >> 2;
              lVar12 = (longlong)(int)local_588;
              local_588 = local_588 + 1;
              if (local_584 < local_588) {
                FUN_14470e57a(&local_590,uVar2);
              }
              *(undefined8 **)(local_590 + lVar12 * 8) = puVar18;
              *(uint *)((longlong)puVar18 + 0x2c) = local_588 - 1;
              FUN_140069100(local_6f8,puVar18);
              FUN_140779360(local_6f8);
              *(undefined8 *)(lVar1 + 0x30) = 0;
              *(undefined8 *)(lVar1 + 0x38) = 0;
              *(undefined8 *)(lVar1 + 0x40) = 0;
              FUN_140778010(local_6f8);
            }
            break;
          }
          iVar10 = *(int *)(lVar1 + 0x48);
        } while (iVar10 != -1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_768) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a6e29a FUN_143a6e29a body=38 status=ok
// SIG undefined FUN_143a6e29a(void)

undefined8 FUN_143a6e29a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6e2c0 FUN_143a6e2c0 body=485 status=ok
// SIG undefined FUN_143a6e2c0(void)

void FUN_143a6e2c0(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *_Dst;
  undefined8 *puVar4;
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
  puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar4 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar4 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar4;
  param_2[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a1fb978;
  puVar4[3] = 0;
  *(int *)(puVar4 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 8;
  }
  else {
    puVar2 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar2 = &local_c0;
    }
    FUN_1446fe144(puVar4 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar4[3];
    if ((undefined8 *)puVar4[3] == (undefined8 *)0x0) {
      _Dst = puVar4 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_b0);
  }
  puVar4[0xd] = 0;
  *(int *)(puVar4 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar4 + 5,local_60,0);
    puVar2 = (undefined8 *)puVar4[0xd];
    if ((undefined8 *)puVar4[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar4 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar4 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1d8);
  local_c0 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  uVar3 = FUN_145f77f10();
  local_c8 = &local_c0;
  FUN_1481967fb(param_2,param_1 + 0x1c0,uVar3,uVar1);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a6e4a6 FUN_143a6e4a6 body=232 status=ok
// SIG undefined FUN_143a6e4a6(void)

void FUN_143a6e4a6(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 143a6e58e FUN_143a6e58e body=81 status=ok
// SIG undefined FUN_143a6e58e(void)

void FUN_143a6e58e(undefined8 param_1,longlong *param_2)

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
  FUN_14819689e(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143a6e5f0 FUN_143a6e5f0 body=29 status=ok
// SIG undefined FUN_143a6e5f0(void)

void FUN_143a6e5f0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a6e60e FUN_143a6e60e body=29 status=ok
// SIG undefined FUN_143a6e60e(void)

undefined8 FUN_143a6e60e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6e62c FUN_143a6e62c body=282 status=ok
// SIG undefined FUN_143a6e62c(void)

undefined8 * FUN_143a6e62c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a6e746 FUN_143a6e746 body=105 status=ok
// SIG undefined FUN_143a6e746(void)

void FUN_143a6e746(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a6dae8(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a6dae8(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a6e789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a6e7b0 FUN_143a6e7b0 body=914 status=ok
// SIG undefined FUN_143a6e7b0(void)

void FUN_143a6e7b0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  void *_Dst;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined4 *local_120;
  undefined8 local_118;
  longlong local_108;
  ulonglong uStack_100;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c8 [48];
  uint local_98;
  int local_94;
  void *local_90;
  undefined4 local_88;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
    lVar9 = param_1[1];
    lVar8 = lVar3 + 0x48;
    if (*(longlong *)(lVar3 + 0x50) != 0) {
      lVar8 = *(longlong *)(lVar3 + 0x50);
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)
                              (*(int *)(lVar3 + 0x58) - 1U &
                              (int)lVar9 + (int)((ulonglong)lVar9 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        lVar8 = *(longlong *)(lVar3 + 0x10) + (longlong)iVar10 * 0x50;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar10 * 0x50) == lVar9) {
          if ((lVar8 + 8U & 0xfffffffffffffff7) != 0) {
            local_d4 = *(undefined8 *)(lVar8 + 8);
            local_cc = *(undefined4 *)(lVar8 + 0x10);
            local_120 = &local_ec;
            local_ec = (undefined4)DAT_14c9a5298;
            local_e8 = DAT_14c9a5298._4_4_;
            local_e4 = DAT_14c9a52a0;
            local_e0 = (undefined4)DAT_14c9a5298;
            local_dc = DAT_14c9a5298._4_4_;
            local_d8 = DAT_14c9a52a0;
            local_128 = local_128 & 0xffffffff00000000;
            (**(code **)(*DAT_14ca83900 + 0x450))
                      (DAT_14ca83900,local_c8,param_2,
                       *(undefined8 *)(*(longlong *)(lVar8 + 0x28) + 8));
            iVar10 = *(int *)(lVar8 + 8);
            iVar2 = *(int *)(lVar8 + 0xc);
            uVar4 = *(int *)((longlong)&DAT_14c873428 +
                            (ulonglong)((uint)*(byte *)(param_1 + 5) * 0x30)) * iVar10;
            if ((local_98 == uVar4) && (local_94 == iVar2 * uVar4)) {
              lVar3 = param_1[3];
              iVar5 = *(int *)(lVar3 + 0x14);
              if ((longlong)iVar5 < 1) {
                pvVar7 = *(void **)(lVar3 + 0x40);
                if (pvVar7 == (void *)0x0) {
                  if (*(int *)(lVar3 + 0x10) < 1) {
                    pvVar7 = (void *)0x0;
                  }
                  else {
                    FUN_14143acfc(lVar3 + 0x18,lVar3 + 0x40,0x14c873401);
                    pvVar7 = *(void **)(lVar3 + 0x40);
                  }
                }
                memcpy(local_90,pvVar7,(longlong)(iVar2 * iVar10) << 3);
              }
              else {
                lVar9 = *(longlong *)(lVar3 + 0x40);
                if (lVar9 == 0) {
                  if (*(int *)(lVar3 + 0x10) < 1) {
                    lVar9 = 0;
                  }
                  else {
                    FUN_14143acfc(lVar3 + 0x18,lVar3 + 0x40,0x14c873401);
                    lVar9 = *(longlong *)(lVar3 + 0x40);
                  }
                }
                local_118 = 0;
                local_120 = (undefined4 *)((ulonglong)local_120 & 0xffffffff00000000);
                local_128 = (longlong)iVar5;
                FUN_140aa9920(param_1[4],local_90,local_88,lVar9);
              }
            }
            else {
              local_108 = 0;
              uStack_100 = 0;
              lVar3 = param_1[3];
              iVar10 = *(int *)(lVar3 + 0x14);
              if (iVar10 < 1) {
LAB_143a6ea22:
                plVar6 = (longlong *)(lVar3 + 0x40);
                if ((*(longlong *)(lVar3 + 0x40) == 0) && (0 < *(int *)(lVar3 + 0x10))) {
                  FUN_14143acfc(lVar3 + 0x18,plVar6,1);
                }
              }
              else {
                uVar1 = iVar2 * uVar4 * *(int *)(lVar8 + 0x10);
                uStack_100 = (ulonglong)uVar1;
                if (uVar1 != 0) {
                  FUN_1447403be(&local_108,0);
                  lVar3 = param_1[3];
                  iVar10 = *(int *)(lVar3 + 0x14);
                }
                lVar9 = *(longlong *)(lVar3 + 0x40);
                if (lVar9 == 0) {
                  if (*(int *)(lVar3 + 0x10) < 1) {
                    lVar9 = 0;
                  }
                  else {
                    FUN_14143acfc(lVar3 + 0x18,lVar3 + 0x40,1);
                    lVar9 = *(longlong *)(lVar3 + 0x40);
                  }
                }
                local_118 = 0;
                local_120 = (undefined4 *)((ulonglong)local_120 & 0xffffffff00000000);
                local_128 = (longlong)iVar10;
                FUN_140aa9920(param_1[4],local_108,(longlong)(int)uStack_100,lVar9);
                if ((int)uStack_100 < 1) {
                  lVar3 = param_1[3];
                  goto LAB_143a6ea22;
                }
                plVar6 = &local_108;
              }
              iVar10 = *(int *)(lVar8 + 0x10);
              if (0 < iVar10) {
                pvVar7 = (void *)*plVar6;
                iVar2 = *(int *)(lVar8 + 0xc);
                iVar5 = 0;
                do {
                  if (0 < iVar2) {
                    _Dst = (void *)((ulonglong)(uint)(local_94 * iVar5) + (longlong)local_90);
                    iVar10 = 0;
                    do {
                      memcpy(_Dst,pvVar7,(longlong)(int)uVar4);
                      pvVar7 = (void *)((longlong)pvVar7 + (longlong)(int)uVar4);
                      _Dst = (void *)((longlong)_Dst + (ulonglong)local_98);
                      iVar10 = iVar10 + 1;
                      iVar2 = *(int *)(lVar8 + 0xc);
                    } while (iVar10 < iVar2);
                    iVar10 = *(int *)(lVar8 + 0x10);
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < iVar10);
              }
              if (local_108 != 0) {
                FUN_1400020a8();
              }
            }
            (**(code **)(*DAT_14ca83900 + 0x458))(DAT_14ca83900,param_2,local_c8);
          }
          break;
        }
        iVar10 = *(int *)(lVar8 + 0x48);
      } while (iVar10 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a6eb54 FUN_143a6eb54 body=29 status=ok
// SIG undefined FUN_143a6eb54(void)

void FUN_143a6eb54(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a6eb72 FUN_143a6eb72 body=29 status=ok
// SIG undefined FUN_143a6eb72(void)

undefined8 FUN_143a6eb72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6eb90 FUN_143a6eb90 body=282 status=ok
// SIG undefined FUN_143a6eb90(void)

undefined8 * FUN_143a6eb90(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a6ecaa FUN_143a6ecaa body=105 status=ok
// SIG undefined FUN_143a6ecaa(void)

void FUN_143a6ecaa(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a6e7b0(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a6e7b0(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a6eced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a6ed14 FUN_143a6ed14 body=569 status=ok
// SIG undefined FUN_143a6ed14(void)

void FUN_143a6ed14(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong **pplVar11;
  bool bVar12;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)
           FUN_148196a14(*param_1 + 0x10,
                         (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  *plVar6 = param_1[2];
  *(int *)(plVar6 + 1) = (int)param_1[3];
  *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
  lVar8 = plVar6[3];
  if (lVar8 != 0) {
    plVar6[3] = 0;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar8 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar8 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar8;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar7;
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
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar7;
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
  pplVar11 = (longlong **)(plVar6 + 4);
  plVar10 = (longlong *)plVar6[4];
  if (plVar10 != (longlong *)0x0) {
    *pplVar11 = (longlong *)0x0;
    (**(code **)(*plVar10 + 0x38))();
  }
  if (param_1[0xd] != 0) {
    plVar10 = *(longlong **)(param_1[0xd] + 0x10);
    if (plVar10 == (longlong *)0x0) {
      uVar5 = 0;
    }
    else {
      lVar8 = (**(code **)(*plVar10 + 8))();
      uVar5 = (uint)*(byte *)(lVar8 + 0x30);
    }
    *(uint *)((longlong)plVar6 + 0xc) = uVar5;
    lVar8 = (**(code **)(*(longlong *)param_1[0xd] + 0xb0))();
    if (lVar8 != 0) {
      lVar3 = *(longlong *)(lVar8 + 0x18);
      lVar4 = plVar6[3];
      if (lVar4 != lVar3) {
        plVar6[3] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar5 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar5 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar5 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar5 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar4 + 0xd);
              plVar9 = (longlong *)FUN_14001cc68(0x10,8);
              plVar9[1] = lVar4;
              plVar6 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar9 = (longlong)plVar6;
                  LOCK();
                  bVar12 = plVar6 != DAT_14ca843c0;
                  plVar10 = plVar9;
                  if (bVar12) {
                    plVar6 = DAT_14ca843c0;
                    plVar10 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar10;
                  UNLOCK();
                } while (bVar12);
              }
              else {
                do {
                  *plVar9 = (longlong)plVar10;
                  LOCK();
                  bVar12 = plVar10 != DAT_14ca843c8;
                  plVar6 = plVar9;
                  if (bVar12) {
                    plVar10 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar12);
              }
            }
          }
        }
      }
      FUN_1447ec05f(&local_38,*(undefined8 *)(lVar8 + 0x10),L"NiagaraRenderTargetVolume");
      if (pplVar11 != &local_38) {
        plVar6 = *pplVar11;
        *pplVar11 = local_38;
        local_38 = (longlong *)0x0;
        if (plVar6 == (longlong *)0x0) goto LAB_143a6eef8;
        (**(code **)(*plVar6 + 0x38))();
      }
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x38))();
      }
    }
  }
LAB_143a6eef8:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a6ef5e FUN_143a6ef5e body=29 status=ok
// SIG undefined FUN_143a6ef5e(void)

void FUN_143a6ef5e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a6ef7c FUN_143a6ef7c body=57 status=ok
// SIG undefined FUN_143a6ef7c(void)

undefined8 * FUN_143a6ef7c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14addd130;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6efb6 FUN_143a6efb6 body=282 status=ok
// SIG undefined FUN_143a6efb6(void)

undefined8 * FUN_143a6efb6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a6f0d0 FUN_143a6f0d0 body=92 status=ok
// SIG undefined FUN_143a6f0d0(void)

void FUN_143a6f0d0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143a6ed14(param_1 + 0x15);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a6f122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a6f12c FUN_143a6f12c body=51 status=ok
// SIG undefined FUN_143a6f12c(void)

void FUN_143a6f12c(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a6f155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 143a6f16a FUN_143a6f16a body=12 status=ok
// SIG undefined FUN_143a6f16a(void)

void FUN_143a6f16a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a6f173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a6f176 FUN_143a6f176 body=29 status=ok
// SIG undefined FUN_143a6f176(void)

undefined8 FUN_143a6f176(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6f194 FUN_143a6f194 body=282 status=ok
// SIG undefined FUN_143a6f194(void)

undefined8 * FUN_143a6f194(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a6f2ae FUN_143a6f2ae body=98 status=ok
// SIG undefined FUN_143a6f2ae(void)

void FUN_143a6f2ae(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a6f306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a6f32e FUN_143a6f32e body=12 status=ok
// SIG undefined FUN_143a6f32e(void)

void FUN_143a6f32e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a6f337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a6f33a FUN_143a6f33a body=29 status=ok
// SIG undefined FUN_143a6f33a(void)

undefined8 FUN_143a6f33a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6f358 FUN_143a6f358 body=282 status=ok
// SIG undefined FUN_143a6f358(void)

undefined8 * FUN_143a6f358(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a6f472 FUN_143a6f472 body=117 status=ok
// SIG undefined FUN_143a6f472(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6f472(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14819c9fa(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14819c9fa(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a6f4dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a6f4f4 FUN_143a6f4f4 body=110 status=ok
// SIG undefined FUN_143a6f4f4(void)

undefined8 * FUN_143a6f4f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14addd2b0;
  FUN_1481900b6(param_1 + 0x44);
  FUN_1481900b6(param_1 + 0x3b);
  FUN_144b35255(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6f562 FUN_143a6f562 body=802 status=ok
// SIG undefined FUN_143a6f562(void)

void FUN_143a6f562(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *_Dst;
  longlong *plVar8;
  undefined1 *_Src;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  undefined1 **local_f8;
  undefined1 *local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar5 = &local_c0;
    if ((undefined8 *)CONCAT44(uStack_b4,uStack_b8) != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)CONCAT44(uStack_b4,uStack_b8);
    }
    FUN_1446fe144(puVar9 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      _Dst = puVar9 + 2;
    }
    memcpy(_Dst,puVar5,(longlong)local_b0);
  }
  puVar9[0xd] = 0;
  *(int *)(puVar9 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar9 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar9 + 5;
    }
    memcpy(puVar5,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar9 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,uStack_b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_d8 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      local_d8 = *(longlong *)(param_1 + 0x210);
    }
    local_d0 = *(undefined4 *)(param_1 + 0x218);
    FUN_144760590(param_2,&local_d8,0);
    uVar6 = *(undefined8 *)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    uVar7 = FUN_145eb21ba();
    FUN_1448e935e(uVar6,&local_c0,uVar7,0);
    FUN_145eb21ba();
    uVar6 = *(undefined8 *)(param_1 + 0x1c0);
    uVar7 = FUN_145eb2426();
    local_f8 = &local_e8;
    local_e8 = &DAT_100000001;
    local_e0 = 1;
    FUN_14819ddd1(param_2,&local_c0,uVar7,uVar6);
    local_e8 = (undefined1 *)(param_1 + 0x220);
    if (*(undefined1 **)(param_1 + 600) != (undefined1 *)0x0) {
      local_e8 = *(undefined1 **)(param_1 + 600);
    }
    local_e0 = *(undefined4 *)(param_1 + 0x260);
    FUN_144760590(param_2,&local_e8,0);
  }
  iVar1 = *(int *)(param_1 + 0x1d0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1c8);
    lVar10 = 0;
    do {
      local_c4 = *(undefined4 *)(lVar2 + 0x48 + lVar10);
      local_c0 = *(undefined8 *)(lVar2 + 0x40 + lVar10);
      pcVar3 = *(code **)(lVar2 + lVar10);
      plVar4 = *(longlong **)(lVar2 + 0x10 + lVar10);
      plVar8 = (longlong *)(lVar2 + 0x20 + lVar10);
      if (plVar4 != (longlong *)0x0) {
        plVar8 = plVar4;
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      (*pcVar3)(uVar6,param_2,&local_c0,&local_c4);
      lVar10 = lVar10 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a6f885 FUN_143a6f885 body=232 status=ok
// SIG undefined FUN_143a6f885(void)

void FUN_143a6f885(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 143a6f96d FUN_143a6f96d body=81 status=ok
// SIG undefined FUN_143a6f96d(void)

void FUN_143a6f96d(undefined8 param_1,longlong *param_2)

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
  FUN_14819de74(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143a6f9ca FUN_143a6f9ca body=29 status=ok
// SIG undefined FUN_143a6f9ca(void)

undefined8 FUN_143a6f9ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6f9fc FUN_143a6f9fc body=85 status=ok
// SIG undefined FUN_143a6f9fc(void)

void FUN_143a6f9fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addd400;
  return;
}



// FUNCTION 143a6fa52 FUN_143a6fa52 body=85 status=ok
// SIG undefined FUN_143a6fa52(void)

void FUN_143a6fa52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addd400;
  return;
}



// FUNCTION 143a6faa8 FUN_143a6faa8 body=118 status=ok
// SIG undefined FUN_143a6faa8(void)

void FUN_143a6faa8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addd400;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a6fb0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a6fb24 FUN_143a6fb24 body=16 status=ok
// SIG undefined FUN_143a6fb24(void)

undefined1 FUN_143a6fb24(void)

{
  FUN_143a6fb34();
  return 1;
}



// FUNCTION 143a6fb34 FUN_143a6fb34 body=204 status=ok
// SIG undefined FUN_143a6fb34(void)

void FUN_143a6fb34(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14012e468(&local_28,0x10,1,0);
  uVar1 = (ulonglong)local_18;
  if ((-1 < (int)local_18) && ((int)local_18 < local_20)) {
    do {
      FUN_14080a7a8(*(undefined8 *)(local_28 + (uVar1 & 0xffffffff) * 8));
      FUN_140719760(local_40,*(undefined8 *)(local_28 + (longlong)(int)local_18 * 8),0);
      FUN_14071963e(local_40);
      uVar1 = (longlong)(int)local_18;
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 + 1;
        local_18 = (uint)uVar1;
        if ((longlong)local_20 <= (longlong)uVar1) break;
      } while (*(longlong *)(local_28 + uVar1 * 8) == 0);
    } while ((-2 < (longlong)uVar2) && ((int)local_18 < local_20));
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a6fc02 FUN_143a6fc02 body=114 status=ok
// SIG undefined FUN_143a6fc02(void)

void FUN_143a6fc02(longlong *param_1,int param_2)

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



// FUNCTION 143a6fc9e FUN_143a6fc9e body=474 status=ok
// SIG undefined FUN_143a6fc9e(void)

void FUN_143a6fc9e(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  
  *(byte *)(*param_1 + 0x60) = ~*(byte *)(*param_1 + 0x60) & 1;
  *(undefined1 *)(*param_1 + 0x62) = *(undefined1 *)(*param_1 + 0x61);
  *(undefined1 *)(*param_1 + 0x61) = 1;
  uVar4 = (int)param_1[2] << 4;
  uVar2 = *(undefined8 *)(*param_1 + 0x20 + (ulonglong)((*(byte *)(*param_1 + 0x60) & 1) << 5));
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  pvVar3 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar2,0,uVar4,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  memcpy(pvVar3,(void *)param_1[1],(ulonglong)uVar4);
  uVar2 = *(undefined8 *)(*param_1 + 0x20 + (ulonglong)((*(byte *)(*param_1 + 0x60) & 1) << 5));
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
  }
  uVar4 = (int)param_1[4] << 4;
  uVar2 = *(undefined8 *)(*param_1 + 0x30 + (ulonglong)((*(byte *)(*param_1 + 0x60) & 1) << 5));
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  pvVar3 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar2,0,uVar4,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  memcpy(pvVar3,(void *)param_1[3],(ulonglong)uVar4);
  uVar2 = *(undefined8 *)(*param_1 + 0x30 + (ulonglong)((*(byte *)(*param_1 + 0x60) & 1) << 5));
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143a6fe41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 143a6fe88 FUN_143a6fe88 body=29 status=ok
// SIG undefined FUN_143a6fe88(void)

void FUN_143a6fe88(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a6fea6 FUN_143a6fea6 body=71 status=ok
// SIG undefined FUN_143a6fea6(void)

undefined8 * FUN_143a6fea6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14addd4d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a6feee FUN_143a6feee body=282 status=ok
// SIG undefined FUN_143a6feee(void)

undefined8 * FUN_143a6feee(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a70008 FUN_143a70008 body=116 status=ok
// SIG undefined FUN_143a70008(void)

void FUN_143a70008(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143a6fc9e(param_1 + 0x15,&DAT_14ca85100);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a70072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a7007c FUN_143a7007c body=194 status=ok
// SIG undefined FUN_143a7007c(void)

void FUN_143a7007c(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar5 = 0;
  do {
    lVar4 = *(longlong *)(param_2 + lVar5 * 8);
    *(undefined8 *)(param_1 + lVar5 * 8) = 0;
    iVar2 = 0;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0xc);
      *(uint *)(param_1 + lVar5 * 8) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar2 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar3 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar3);
        }
        LOCK();
        iVar2 = *(int *)(lVar4 + 0x10);
        bVar6 = iVar2 == 0;
        if (bVar6) {
          *(int *)(lVar4 + 0x10) = iVar3;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar2 = iVar3;
        }
      }
    }
    *(int *)(param_1 + 4 + lVar5 * 8) = iVar2;
    lVar5 = lVar5 + 1;
  } while (param_3 != (int)lVar5);
  return;
}



// FUNCTION 143a7013e FUN_143a7013e body=48 status=ok
// SIG undefined FUN_143a7013e(void)

void FUN_143a7013e(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0x3f80000000000000;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = &DAT_3f8000003f800000;
    param_1[5] = 0x3f800000;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 143a7016e FUN_143a7016e body=90 status=ok
// SIG undefined FUN_143a7016e(void)

void FUN_143a7016e(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x20))();
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x20))();
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a701be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a701d2 FUN_143a701d2 body=12 status=ok
// SIG undefined FUN_143a701d2(void)

void FUN_143a701d2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a701db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a701de FUN_143a701de body=29 status=ok
// SIG undefined FUN_143a701de(void)

undefined8 FUN_143a701de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a701fc FUN_143a701fc body=282 status=ok
// SIG undefined FUN_143a701fc(void)

undefined8 * FUN_143a701fc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a70316 FUN_143a70316 body=143 status=ok
// SIG undefined FUN_143a70316(void)

ulonglong FUN_143a70316(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    uVar3 = (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
    puVar2 = (undefined8 *)param_1[0x15];
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    uVar3 = (**(code **)(*(longlong *)param_1[0x16] + 0x20))();
    puVar2 = (undefined8 *)param_1[0x16];
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a7039b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143a703a6 FUN_143a703a6 body=151 status=ok
// SIG undefined FUN_143a703a6(void)

void FUN_143a703a6(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)(int)((longlong *)*param_1)[1];
  if (lVar3 != 0) {
    lVar1 = *(longlong *)*param_1;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
        (**(code **)*plVar2)(plVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  lVar3 = (longlong)(int)((longlong *)param_1[2])[1];
  if (lVar3 != 0) {
    lVar1 = *(longlong *)param_1[2];
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
        (**(code **)*plVar2)(plVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  return;
}



// FUNCTION 143a70448 FUN_143a70448 body=29 status=ok
// SIG undefined FUN_143a70448(void)

void FUN_143a70448(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a70466 FUN_143a70466 body=52 status=ok
// SIG undefined FUN_143a70466(void)

undefined8 * FUN_143a70466(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14addd5c0;
  FUN_14058aa5c(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7049a FUN_143a7049a body=282 status=ok
// SIG undefined FUN_143a7049a(void)

undefined8 * FUN_143a7049a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a705b4 FUN_143a705b4 body=234 status=ok
// SIG undefined FUN_143a705b4(void)

void FUN_143a705b4(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar4 = (longlong)(int)((longlong *)param_1[0x15])[1];
  if (lVar4 != 0) {
    lVar2 = *(longlong *)param_1[0x15];
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
        (**(code **)*plVar3)(plVar3,1);
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
  }
  lVar4 = (longlong)(int)((longlong *)param_1[0x17])[1];
  if (lVar4 != 0) {
    lVar2 = *(longlong *)param_1[0x17];
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
        (**(code **)*plVar3)(plVar3,1);
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
  }
  FUN_14058aa5c(param_1 + 0x15);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a7068c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a7069e FUN_143a7069e body=31 status=ok
// SIG undefined FUN_143a7069e(void)

undefined8 FUN_143a7069e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7072a FUN_143a7072a body=12 status=ok
// SIG undefined FUN_143a7072a(void)

void FUN_143a7072a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a70733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a70736 FUN_143a70736 body=29 status=ok
// SIG undefined FUN_143a70736(void)

undefined8 FUN_143a70736(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a70754 FUN_143a70754 body=282 status=ok
// SIG undefined FUN_143a70754(void)

undefined8 * FUN_143a70754(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a7086e FUN_143a7086e body=117 status=ok
// SIG undefined FUN_143a7086e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7086e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140a0a464(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140a0a464(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a708b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a708f0 FUN_143a708f0 body=51 status=ok
// SIG undefined FUN_143a708f0(void)

void FUN_143a708f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a70919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 143a7092e FUN_143a7092e body=12 status=ok
// SIG undefined FUN_143a7092e(void)

void FUN_143a7092e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a70937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a7093a FUN_143a7093a body=29 status=ok
// SIG undefined FUN_143a7093a(void)

undefined8 FUN_143a7093a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a70958 FUN_143a70958 body=282 status=ok
// SIG undefined FUN_143a70958(void)

undefined8 * FUN_143a70958(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a70a72 FUN_143a70a72 body=98 status=ok
// SIG undefined FUN_143a70a72(void)

void FUN_143a70a72(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a70aca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a70af2 FUN_143a70af2 body=12 status=ok
// SIG undefined FUN_143a70af2(void)

void FUN_143a70af2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a70afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a70afe FUN_143a70afe body=29 status=ok
// SIG undefined FUN_143a70afe(void)

undefined8 FUN_143a70afe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a70b1c FUN_143a70b1c body=282 status=ok
// SIG undefined FUN_143a70b1c(void)

undefined8 * FUN_143a70b1c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a70c36 FUN_143a70c36 body=117 status=ok
// SIG undefined FUN_143a70c36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a70c36(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1481a0e74(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1481a0e74(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a70ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a70cac FUN_143a70cac body=86 status=ok
// SIG undefined FUN_143a70cac(void)

void FUN_143a70cac(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           FUN_1481a0fb8(*param_1 + 0x10,
                         (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  *plVar1 = param_1[2];
  *(int *)(plVar1 + 2) = (int)param_1[4];
  plVar1[1] = param_1[3];
  *(undefined4 *)((longlong)plVar1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(int *)(plVar1 + 3) = (int)param_1[5];
  return;
}



// FUNCTION 143a70d0c FUN_143a70d0c body=29 status=ok
// SIG undefined FUN_143a70d0c(void)

void FUN_143a70d0c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a70d2a FUN_143a70d2a body=29 status=ok
// SIG undefined FUN_143a70d2a(void)

undefined8 FUN_143a70d2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a70d48 FUN_143a70d48 body=282 status=ok
// SIG undefined FUN_143a70d48(void)

undefined8 * FUN_143a70d48(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a70e62 FUN_143a70e62 body=160 status=ok
// SIG undefined FUN_143a70e62(void)

void FUN_143a70e62(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)
           FUN_1481a0fb8(param_1[0x15] + 0x10,
                         (int)((ulonglong)param_1[0x16] >> 0x20) * 0x17 + (int)param_1[0x16],
                         param_1 + 0x16);
  *puVar2 = param_1[0x17];
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x19);
  puVar2[1] = param_1[0x18];
  *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)((longlong)param_1 + 0xcc);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x1a);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a70ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a70f38 FUN_143a70f38 body=12 status=ok
// SIG undefined FUN_143a70f38(void)

void FUN_143a70f38(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a70f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a70f44 FUN_143a70f44 body=29 status=ok
// SIG undefined FUN_143a70f44(void)

undefined8 FUN_143a70f44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a70f62 FUN_143a70f62 body=282 status=ok
// SIG undefined FUN_143a70f62(void)

undefined8 * FUN_143a70f62(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a7107c FUN_143a7107c body=117 status=ok
// SIG undefined FUN_143a7107c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7107c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1481b4bd8(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1481b4bd8(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a710e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a710f2 FUN_143a710f2 body=2937 status=ok
// SIG undefined FUN_143a710f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a710f2(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  undefined8 uVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  undefined4 *puVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_208 [32];
  int local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1a8;
  float local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  pfVar14 = (float *)FUN_1481b4d90(*param_1 + 0x10,
                                   (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],
                                   param_1 + 1);
  dVar3 = (double)param_1[2];
  fVar34 = (float)(double)param_1[3];
  fVar32 = (float)(double)param_1[4];
  dVar4 = (double)param_1[5];
  fVar30 = (float)(double)param_1[6];
  fVar28 = (float)(double)param_1[7];
  local_178 = ZEXT416((uint)fVar28);
  fVar26 = (float)(double)param_1[8];
  dVar5 = (double)param_1[9];
  local_1b8 = (float)(double)param_1[10];
  local_1a8 = (float)(double)param_1[0xb];
  local_198 = (float)(double)param_1[0xc];
  dVar6 = (double)param_1[0xd];
  dVar7 = (double)param_1[0xe];
  dVar8 = (double)param_1[0xf];
  dVar9 = (double)param_1[0x10];
  dVar10 = (double)param_1[0x11];
  *pfVar14 = (float)dVar3;
  local_148 = ZEXT416((uint)fVar34);
  pfVar14[1] = fVar34;
  local_158 = ZEXT416((uint)fVar32);
  pfVar14[2] = fVar32;
  pfVar14[3] = (float)dVar4;
  local_168 = ZEXT416((uint)fVar30);
  pfVar14[4] = fVar30;
  pfVar14[5] = fVar28;
  local_188 = ZEXT416((uint)fVar26);
  pfVar14[6] = fVar26;
  pfVar14[7] = (float)dVar5;
  pfVar14[8] = local_1b8;
  pfVar14[9] = local_1a8;
  pfVar14[10] = local_198;
  pfVar14[0xb] = (float)dVar6;
  pfVar14[0xc] = (float)dVar7;
  pfVar14[0xd] = (float)dVar8;
  pfVar14[0xe] = (float)dVar9;
  pfVar14[0xf] = (float)dVar10;
  fVar21 = (float)(double)param_1[2];
  fVar22 = (float)(double)param_1[3];
  fVar35 = (float)(double)param_1[4];
  fVar33 = (float)(double)param_1[6];
  fVar31 = (float)(double)param_1[7];
  local_1bc = (float)(double)param_1[8];
  dVar4 = (double)param_1[9];
  fVar27 = (float)(double)param_1[10];
  fVar25 = (float)(double)param_1[0xb];
  local_1c0 = (float)(double)param_1[0xc];
  dVar5 = (double)param_1[0xd];
  dVar6 = (double)param_1[0x11];
  pfVar14[0x13] = (float)(double)param_1[5];
  pfVar14[0x17] = (float)dVar4;
  pfVar14[0x1b] = (float)dVar5;
  pfVar14[0x1c] = 0.0;
  pfVar14[0x1d] = 0.0;
  pfVar14[0x1e] = 0.0;
  pfVar14[0x1f] = (float)dVar6;
  fVar23 = fVar35 * fVar35 + fVar21 * fVar21 + fVar22 * fVar22;
  fVar29 = local_1bc * local_1bc + fVar33 * fVar33 + fVar31 * fVar31;
  fVar24 = local_1c0 * local_1c0 + fVar27 * fVar27 + fVar25 * fVar25;
  uVar20 = -(uint)(0.0 <= fVar23 + -1e-08);
  fVar23 = (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / SQRT(fVar23)) & uVar20);
  uVar20 = -(uint)(0.0 <= fVar29 + -1e-08);
  fVar29 = (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / SQRT(fVar29)) & uVar20);
  uVar20 = -(uint)(0.0 <= fVar24 + -1e-08);
  fVar24 = (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / SQRT(fVar24)) & uVar20);
  pfVar14[0x10] = fVar21 * fVar23;
  pfVar14[0x11] = fVar22 * fVar23;
  pfVar14[0x12] = fVar23 * fVar35;
  pfVar14[0x14] = fVar33 * fVar29;
  pfVar14[0x15] = fVar31 * fVar29;
  pfVar14[0x16] = fVar29 * local_1bc;
  pfVar14[0x18] = fVar27 * fVar24;
  pfVar14[0x19] = fVar25 * fVar24;
  pfVar14[0x1a] = fVar24 * local_1c0;
  if ((((((1e-08 < ABS((float)dVar3)) || (1e-08 < ABS(fVar34))) || (1e-08 < ABS(fVar32))) ||
       ((1e-08 < ABS(fVar30) || (1e-08 < ABS(fVar28))))) ||
      ((1e-08 < ABS(fVar26) || ((1e-08 < ABS(local_1b8) || (1e-08 < ABS(local_1a8))))))) ||
     (1e-08 < ABS(local_198))) {
    FUN_144906c86(&local_138,pfVar14);
  }
  else {
    local_108 = _DAT_14c846280;
    uStack_100 = _DAT_14c846288;
    local_118 = _DAT_14c846270;
    uStack_110 = _DAT_14c846278;
    local_128 = _DAT_14c846260;
    uStack_120 = _DAT_14c846268;
    local_138 = _DAT_14c846250;
    uStack_130 = DAT_14c846258;
  }
  *(undefined8 *)(pfVar14 + 0x2c) = local_108;
  *(undefined8 *)(pfVar14 + 0x2e) = uStack_100;
  *(undefined8 *)(pfVar14 + 0x28) = local_118;
  *(undefined8 *)(pfVar14 + 0x2a) = uStack_110;
  *(undefined8 *)(pfVar14 + 0x24) = local_128;
  *(undefined8 *)(pfVar14 + 0x26) = uStack_120;
  *(undefined8 *)(pfVar14 + 0x20) = local_138;
  *(undefined8 *)(pfVar14 + 0x22) = uStack_130;
  pfVar14[0x30] = pfVar14[0x20];
  pfVar14[0x31] = pfVar14[0x24];
  pfVar14[0x32] = pfVar14[0x28];
  pfVar14[0x33] = pfVar14[0x2c];
  pfVar14[0x34] = pfVar14[0x21];
  pfVar14[0x35] = pfVar14[0x25];
  pfVar14[0x36] = pfVar14[0x29];
  pfVar14[0x37] = pfVar14[0x2d];
  pfVar14[0x38] = pfVar14[0x22];
  pfVar14[0x39] = pfVar14[0x26];
  pfVar14[0x3a] = pfVar14[0x2a];
  pfVar14[0x3b] = pfVar14[0x2e];
  pfVar14[0x3c] = pfVar14[0x23];
  pfVar14[0x3d] = pfVar14[0x27];
  pfVar14[0x3e] = pfVar14[0x2b];
  pfVar14[0x3f] = pfVar14[0x2f];
  dVar3 = (double)param_1[0x15];
  dVar4 = (double)param_1[0x14];
  dVar5 = (double)param_1[0x13];
  pfVar14[0x40] = (float)(double)param_1[0x12];
  pfVar14[0x41] = (float)dVar5;
  pfVar14[0x42] = (float)dVar4;
  pfVar14[0x43] = (float)dVar3;
  dVar3 = (double)param_1[0x18];
  dVar4 = (double)param_1[0x17];
  pfVar14[0x44] = (float)(double)param_1[0x16];
  pfVar14[0x45] = (float)dVar4;
  pfVar14[0x46] = (float)dVar3;
  pfVar14[0x47] = *(float *)(param_1 + 0x1f);
  pfVar14[0x48] = *(float *)((longlong)param_1 + 0xfc);
  pfVar14[0x49] = *(float *)(param_1 + 0x20);
  pfVar14[0x4a] = *(float *)((longlong)param_1 + 0x104);
  pfVar1 = pfVar14 + 0x4c;
  FUN_14011fb0c(pfVar1);
  pfVar2 = pfVar14 + 0x52;
  FUN_14011fb0c(pfVar2);
  pfVar18 = pfVar14 + 0x58;
  FUN_14011fb0c(pfVar18);
  local_1e8 = (int)param_1[0x1a];
  local_1d0 = 0;
  local_1d8 = 1;
  local_1e0 = CONCAT31(local_1e0._1_3_,1);
  FUN_140661c88(pfVar1,param_2,L"SplinePositionsLUT",0x10);
  lVar15 = param_1[0x1a];
  uVar12 = *(undefined8 *)(pfVar14 + 0x4c);
  cVar11 = *(char *)(param_2 + 0x69);
  if (cVar11 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_1e0 = 1;
  local_1e8 = (int)lVar15 << 4;
  lVar15 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar12,0);
  if (cVar11 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (int)param_1[0x1a]) {
    puVar19 = (undefined4 *)(lVar15 + 0xc);
    lVar15 = 0;
    lVar16 = 0;
    do {
      puVar19[-3] = (float)*(double *)(param_1[0x19] + lVar15);
      puVar19[-2] = (float)*(double *)(param_1[0x19] + 8 + lVar15);
      puVar19[-1] = (float)*(double *)(param_1[0x19] + 0x10 + lVar15);
      *puVar19 = 0x3f800000;
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x18;
      puVar19 = puVar19 + 4;
    } while (lVar16 < (int)param_1[0x1a]);
  }
  uVar12 = *(undefined8 *)pfVar1;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar12);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar12);
  }
  local_1e8 = (int)param_1[0x1c];
  local_1d0 = 0;
  local_1d8 = 1;
  local_1e0 = CONCAT31(local_1e0._1_3_,1);
  FUN_140661c88(pfVar2,param_2,L"SplineScalesLUT",0x10);
  lVar15 = param_1[0x1c];
  uVar12 = *(undefined8 *)pfVar2;
  cVar11 = *(char *)(param_2 + 0x69);
  if (cVar11 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_1e0 = 1;
  local_1e8 = (int)lVar15 << 4;
  lVar15 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar12,0);
  if (cVar11 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (int)param_1[0x1c]) {
    puVar19 = (undefined4 *)(lVar15 + 0xc);
    lVar15 = 0;
    lVar16 = 0;
    do {
      puVar19[-3] = (float)*(double *)(param_1[0x1b] + lVar15);
      puVar19[-2] = (float)*(double *)(param_1[0x1b] + 8 + lVar15);
      puVar19[-1] = (float)*(double *)(param_1[0x1b] + 0x10 + lVar15);
      *puVar19 = 0x3f800000;
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x18;
      puVar19 = puVar19 + 4;
    } while (lVar16 < (int)param_1[0x1c]);
  }
  uVar12 = *(undefined8 *)pfVar2;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar12);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar12);
  }
  local_1e8 = (int)param_1[0x1e];
  local_1d0 = 0;
  local_1d8 = 1;
  local_1e0 = CONCAT31(local_1e0._1_3_,1);
  FUN_140661c88(pfVar18,param_2,L"SplineRotationsLUT",0x10);
  lVar15 = param_1[0x1e];
  uVar12 = *(undefined8 *)pfVar18;
  cVar11 = *(char *)(param_2 + 0x69);
  if (cVar11 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_1e0 = 1;
  local_1e8 = (int)lVar15 << 4;
  lVar15 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar12,0);
  if (cVar11 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (int)param_1[0x1e]) {
    lVar16 = 0xc;
    lVar17 = 0;
    do {
      lVar13 = param_1[0x1d];
      dVar3 = *(double *)(lVar13 + lVar16 * 2);
      dVar4 = *(double *)(lVar13 + -8 + lVar16 * 2);
      dVar5 = *(double *)(lVar13 + -0x10 + lVar16 * 2);
      *(float *)(lVar15 + -0xc + lVar16) = (float)*(double *)(lVar13 + -0x18 + lVar16 * 2);
      *(float *)(lVar15 + -8 + lVar16) = (float)dVar5;
      *(float *)(lVar15 + -4 + lVar16) = (float)dVar4;
      *(float *)(lVar15 + lVar16) = (float)dVar3;
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x10;
    } while (lVar17 < (int)param_1[0x1e]);
  }
  uVar12 = *(undefined8 *)pfVar18;
  if (*(char *)(param_2 + 0x69) != '\0') {
    if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143a71b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*DAT_14ca83900 + 0x168))
                (DAT_14ca83900,param_2,uVar12,*(code **)(*DAT_14ca83900 + 0x168));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_208);
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar12);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_208);
}



// FUNCTION 143a71cf2 FUN_143a71cf2 body=29 status=ok
// SIG undefined FUN_143a71cf2(void)

void FUN_143a71cf2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a71d10 FUN_143a71d10 body=55 status=ok
// SIG undefined FUN_143a71d10(void)

undefined8 * FUN_143a71d10(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14addf8d0;
  FUN_148195d96(param_1 + 0x1b);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a71d48 FUN_143a71d48 body=282 status=ok
// SIG undefined FUN_143a71d48(void)

undefined8 * FUN_143a71d48(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a6cf3b);
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



// FUNCTION 143a71e62 FUN_143a71e62 body=127 status=ok
// SIG undefined FUN_143a71e62(void)

void FUN_143a71e62(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a710f2(0xb0,&DAT_14ca85100);
    FUN_148195d96(0x178);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a710f2(param_1 + 0x16,&DAT_14ca85100);
  FUN_148195d96(param_1 + 0x2f);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a71ed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a71ee2 FUN_143a71ee2 body=31 status=ok
// SIG undefined FUN_143a71ee2(void)

undefined8 FUN_143a71ee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a71f5c FUN_143a71f5c body=5328 status=ok
// SIG undefined FUN_143a71f5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a71f5c(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  char **local_b8;
  undefined **ppuStack_b0;
  undefined8 local_a8;
  char **local_a0;
  ulonglong *local_98;
  char *local_90;
  int local_88;
  undefined1 local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  ulonglong local_50 [4];
  
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400b22c2(&local_90,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_90,&DAT_14cb3d00c);
  if (cVar1 == '\0') {
    _DAT_14cb3d00c = 0;
    uRam000000014cb3d014 = 0;
  }
  if (local_90 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_90 = "bone";
  local_88 = 4;
  local_84 = 0;
  FUN_14001a6c0(&local_90,1);
  local_a8 = 0;
  local_b8 = (char **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14add7060,1,0);
  local_90 = "SetRenderTargetValue";
  local_88 = 0x14;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d038 = (ulonglong)uVar2;
  local_90 = "LoadRenderTargetValue";
  local_88 = 0x15;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d040 = (ulonglong)uVar2;
  local_90 = "SampleRenderTargetValue";
  local_88 = 0x17;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d048 = (ulonglong)uVar2;
  local_90 = "SetRenderTargetSize";
  local_88 = 0x13;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d050 = (ulonglong)uVar2;
  local_90 = "GetRenderTargetSize";
  local_88 = 0x13;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d058 = (ulonglong)uVar2;
  local_90 = "GetNumMipLevels";
  local_88 = 0xf;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d060 = (ulonglong)uVar2;
  local_90 = "SetRenderTargetFormat";
  local_88 = 0x15;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d068 = (ulonglong)uVar2;
  local_90 = "LinearToIndex";
  local_88 = 0xd;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d070 = (ulonglong)uVar2;
  local_90 = "ExecToIndex";
  local_88 = 0xb;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d078 = (ulonglong)uVar2;
  local_90 = "ExecToUnit";
  local_88 = 10;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d080 = (ulonglong)uVar2;
  local_90 = "GetRenderTargetValue";
  local_88 = 0x14;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d088 = (ulonglong)uVar2;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3d090,L"fx.Niagara.RenderTargetVolume.SimCacheEnabled",&DAT_14c762898,
                L"When enabled we can write data into the simulation cache.");
  atexit(FUN_143a5ba6c);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3d0a0,L"fx.Niagara.RenderTargetVolume.SimCacheCompressed",&DAT_14c76289c,
                L"When enabled compression is used for the sim cache data.");
  atexit(FUN_143a5bab1);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3d0b0,L"fx.Niagara.RenderTargetVolume.SimCacheDataStorageMode",
                &DAT_14c7628a0,
                L"Backing storage type for Volume RT sim cache data.  0 uses raw data, 1 uses OpenVDB, 2 uses SVT"
               );
  atexit(FUN_143a5baf6);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3d0c8,L"fx.Niagara.RenderTargetVolume.SimCacheUseOpenVDBFloatGrids",
                &DAT_14cb3d0c0,L"Use OpenVDB float grids as output.");
  atexit(FUN_143a5bb3b);
  DAT_14cb3d0d8 = 0;
  DAT_14cb3d0e0 = FUN_144830b78(&DAT_14cb3d0e0,&DAT_14cb42160);
  local_a8 = 0;
  local_b8 = (char **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14add81c0,2,0);
  FUN_1446f470e(&DAT_14cb3d120,L"FindActors",1);
  FUN_1446f470e(&DAT_14cb3d128,L"GetNumBoxes",1);
  FUN_1446f470e(&DAT_14cb3d130,L"GetNumSpheres",1);
  FUN_1446f470e(&DAT_14cb3d138,L"GetNumCapsules",1);
  FUN_1446f470e(&DAT_14cb3d140,L"GetNumElements",1);
  FUN_1446f470e(&DAT_14cb3d148,L"IsWorldPositionInsideCombinedBounds",1);
  FUN_1446f470e(&DAT_14cb3d150,L"GetClosestElement",1);
  FUN_1446f470e(&DAT_14cb3d158,L"GetElementPoint",1);
  FUN_1446f470e(&DAT_14cb3d160,L"GetElementPointMeshDistanceFieldNoNormal",1);
  FUN_1446f470e(&DAT_14cb3d168,L"GetElementDistance",1);
  FUN_1446f470e(&DAT_14cb3d170,L"GetClosestPoint",1);
  FUN_1446f470e(&DAT_14cb3d178,L"GetClosestPointSimple",1);
  FUN_1446f470e(&DAT_14cb3d180,L"GetClosestDistance",1);
  FUN_1446f470e(&DAT_14cb3d188,L"GetClosestPointMeshDistanceField",1);
  FUN_1446f470e(&DAT_14cb3d190,L"GetClosestPointMeshDistanceFieldAccurate",1);
  FUN_1446f470e(&DAT_14cb3d198,L"GetClosestPointMeshDistanceFieldNoNormal",1);
  FUN_1446f470e(&DAT_14cb3d1a0,L"GetMaxEncodedDistanceMeshDistanceField",1);
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
  DAT_14cb3d1a8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  atexit((_func_5014 *)&LAB_143a5e2e6);
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
  DAT_14cb3d1b0 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  atexit((_func_5014 *)&LAB_143a5e2fa);
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
  DAT_14cb3d1b8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  atexit((_func_5014 *)&LAB_143a5e30e);
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
  DAT_14cb3d1c0 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  atexit((_func_5014 *)&LAB_143a5e322);
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
  DAT_14cb3d1c8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  atexit((_func_5014 *)&LAB_143a5e336);
  ppuStack_b0 = &PTR_FUN_14add97b0;
  local_a8 = 1;
  local_b8 = (char **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14add97d0,3,0);
  FUN_140056680(&DAT_14cb3d230,L"_NumAttributes");
  atexit((_func_5014 *)&LAB_143a60459);
  FUN_140056680(&DAT_14cb3d240,L"_NumNamedAttributes");
  atexit((_func_5014 *)&LAB_143a6046a);
  FUN_140056680(&DAT_14cb3d250,L"_NumCells");
  atexit((_func_5014 *)&LAB_143a6047b);
  FUN_140056680(&DAT_14cb3d260,L"_UnitToUV");
  atexit((_func_5014 *)&LAB_143a6048c);
  FUN_140056680(&DAT_14cb3d270,L"_CellSize");
  atexit((_func_5014 *)&LAB_143a6049d);
  FUN_140056680(&DAT_14cb3d280,L"_WorldBBoxSize");
  atexit((_func_5014 *)&LAB_143a604ae);
  local_90 = "Attribute";
  local_88 = 9;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d8e0 = (ulonglong)uVar2;
  local_90 = "GetNumCells";
  local_88 = 0xb;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d8d8 = (ulonglong)uVar2;
  local_90 = "GetCellSize";
  local_88 = 0xb;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d8c0 = (ulonglong)uVar2;
  local_90 = "GetWorldBBoxSize";
  local_88 = 0x10;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d8d0 = (ulonglong)uVar2;
  local_90 = "SimulationToUnit";
  local_88 = 0x10;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d290 = (ulonglong)uVar2;
  local_90 = "UnitToSimulation";
  local_88 = 0x10;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d298 = (ulonglong)uVar2;
  local_90 = "UnitToIndex";
  local_88 = 0xb;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d2a0 = (ulonglong)uVar2;
  local_90 = "UnitToFloatIndex";
  local_88 = 0x10;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d8c8 = (ulonglong)uVar2;
  local_90 = "IndexToUnit";
  local_88 = 0xb;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d2a8 = (ulonglong)uVar2;
  local_90 = "IndexToUnitStaggeredX";
  local_88 = 0x15;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d2b0 = (ulonglong)uVar2;
  local_90 = "IndexToUnitStaggeredY";
  local_88 = 0x15;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d2b8 = (ulonglong)uVar2;
  local_90 = "IndexToLinear";
  local_88 = 0xd;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d2c0 = (ulonglong)uVar2;
  local_90 = "LinearToIndex";
  local_88 = 0xd;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d2c8 = (ulonglong)uVar2;
  local_90 = "ExecutionIndexToUnit";
  local_88 = 0x14;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d2d0 = (ulonglong)uVar2;
  local_90 = "ExecutionIndexToGridIndex";
  local_88 = 0x19;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  _DAT_14cb3d2d8 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_90,L"rInvalid resolution in tiff: zero or negative.");
  FUN_1400b22c2(local_80,&DAT_149e430c3);
  FUN_1400b22c2(local_70,&DAT_149e430b6);
  FUN_1400b22c2(local_60,&DAT_14a157a0d);
  local_98 = local_50;
  local_a0 = &local_90;
  FUN_141469cae(&DAT_14cb3d2e0);
  lVar4 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_a0 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0);
  atexit(FUN_143a60d19);
  ppuStack_b0 = &PTR_FUN_14adda750;
  local_b8 = (char **)0x0;
  local_a8 = 2;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adda790,1,0);
  local_90 = (char *)0x0;
  local_88 = 0;
  FUN_1446efa72(&local_90,0,2,0x10);
  local_88 = 2;
  *(undefined ***)local_90 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)(local_90 + 0x10) = lVar3;
  *(undefined ***)local_90 = &PTR_FUN_14addd400;
  ppuStack_b0 = (undefined **)((ulonglong)ppuStack_b0 & 0xffffffff00000000);
  local_b8 = &local_90;
  FUN_141703554(&DAT_14cb3d340,L"r.gbx.SetNiagaraInstanceWeight.Enable",&DAT_14c7628a4,
                L"Toggle to apply debug weight on the 2-parts GestaltMesh.");
  if (local_88 != 0) {
    if (local_90 == (char *)0x0) goto LAB_143a72bee;
    (*(code *)**(undefined8 **)local_90)(local_90,0);
    FUN_1446efa72(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143a72bee:
  atexit(FUN_143a60db8);
  local_90 = "GetPreSkinnedLocalBounds";
  local_88 = 0x18;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d350 = (ulonglong)uVar2;
  local_a8 = 0;
  local_b8 = (char **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14addb1b0,1,0);
  FUN_1446f470e(&DAT_14cb3d380,L"LoadSparseVolumeTexture",1);
  FUN_1446f470e(&DAT_14cb3d388,L"SampleSparseVolumeTexture",1);
  FUN_1446f470e(&DAT_14cb3d390,L"GetSparseVolumeTextureDimensions",1);
  FUN_1446f470e(&DAT_14cb3d398,L"GetSparseVolumeTextureNumMipLevels",1);
  FUN_1446f470e(&DAT_14cb3d3a0,L"RequestSparseVolumeTextureFrame",1);
  FUN_1446f470e(&DAT_14cb3d3a8,L"GetSparseVolumeTextureNumFrames",1);
  ppuStack_b0 = (undefined **)0x0;
  local_a8 = 0;
  local_b8 = (char **)0x1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14addbd20,1,&PTR_FUN_14addbcf0);
  local_90 = "SampleSplinePositionByUnitDistance";
  local_88 = 0x22;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d3e0 = (ulonglong)uVar2;
  local_90 = "SampleSplinePositionByUnitDistanceWS";
  local_88 = 0x24;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d3e8 = (ulonglong)uVar2;
  local_90 = "SampleSplineRotationByUnitDistance";
  local_88 = 0x22;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d3f0 = (ulonglong)uVar2;
  local_90 = "SampleSplineRotationByUnitDistanceWS";
  local_88 = 0x24;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d3f8 = (ulonglong)uVar2;
  local_90 = "SampleSplineUpVectorByUnitDistance";
  local_88 = 0x22;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d400 = (ulonglong)uVar2;
  local_90 = "SampleSplineUpVectorByUnitDistanceWS";
  local_88 = 0x24;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d408 = (ulonglong)uVar2;
  local_90 = "SampleSplineDirectionByUnitDistance";
  local_88 = 0x23;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d410 = (ulonglong)uVar2;
  local_90 = "SampleSplineDirectionByUnitDistanceWS";
  local_88 = 0x25;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d418 = (ulonglong)uVar2;
  local_90 = "SampleSplineRightVectorByUnitDistance";
  local_88 = 0x25;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d420 = (ulonglong)uVar2;
  local_90 = "SampleSplineRightVectorByUnitDistanceWS";
  local_88 = 0x27;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d428 = (ulonglong)uVar2;
  local_90 = "SampleSplineTangentByUnitDistance";
  local_88 = 0x21;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d430 = (ulonglong)uVar2;
  local_90 = "SampleSplineTangentByUnitDistanceWS";
  local_88 = 0x23;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d438 = (ulonglong)uVar2;
  local_90 = "FindClosestUnitDistanceFromPositionWS";
  local_88 = 0x25;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d440 = (ulonglong)uVar2;
  local_90 = "GetSplineLength";
  local_88 = 0xf;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d448 = (ulonglong)uVar2;
  local_90 = "GetSplineLocalToWorld";
  local_88 = 0x15;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d450 = (ulonglong)uVar2;
  local_90 = "GetSplineLocalToWorldInverseTransposed";
  local_88 = 0x26;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d458 = (ulonglong)uVar2;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb3d460,L"fx.Niagara.NDISpline.GDisableLUTs",&DAT_14cb3d470,
                L"Should we turn off all LUTs on CPU?");
  atexit(FUN_143a6b8af);
  local_a8 = 0;
  local_b8 = (char **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14addc540,1,0);
  local_90 = "IsValid";
  local_88 = 7;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d490 = (ulonglong)uVar2;
  local_90 = "GetSourceMode";
  local_88 = 0xd;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d498 = (ulonglong)uVar2;
  local_90 = "GetAlignment";
  local_88 = 0xc;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d4a0 = (ulonglong)uVar2;
  local_90 = "GetFacingMode";
  local_88 = 0xd;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d4a8 = (ulonglong)uVar2;
  local_90 = "GetSubUVDetails";
  local_88 = 0xf;
  local_84 = 0;
  uVar2 = FUN_14001a6c0(&local_90,1);
  DAT_14cb3d4b0 = (ulonglong)uVar2;
  if ((local_50[0] ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a73436 FUN_143a73436 body=1230 status=ok
// SIG undefined FUN_143a73436(void)

void FUN_143a73436(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a73495;
    if (iVar7 != 1) goto LAB_143a73490;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a73495;
  }
  else {
LAB_143a73490:
    if (iVar7 == 0x10) goto LAB_143a73495;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a73495:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a73495;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a73631;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a7d97b);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a73631:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a736b1;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a736b1:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14adf2cf0;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14adf2cd0;
    local_68[0] = &LAB_143a7d934;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"NDITexture_RemoveInstance",&DAT_14cb3e3fc);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a7391a FUN_143a7391a body=2539 status=ok
// SIG undefined FUN_143a7391a(void)

undefined8 FUN_143a7391a(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_158 [32];
  code **local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  uint local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  undefined4 uStack_bc;
  code *local_b8 [2];
  longlong *local_a8;
  longlong local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar12 = param_2[6];
  if ((ulonglong)uVar12 == 0xffffffff) {
    plVar13 = *(longlong **)(param_1 + 0x38);
    if (plVar13 == (longlong *)0x0) goto LAB_143a739b2;
LAB_143a73ab9:
    fVar21 = (float)(**(code **)(*plVar13 + 0x350))(plVar13);
    fVar22 = (float)(**(code **)(*plVar13 + 0x358))(plVar13);
    if (DAT_14cb0b4f0 == 0) {
      local_100 = local_b8;
      local_b8[0] = FUN_1449e2820;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_14580b774;
      local_108 = &LAB_147d6e27b;
      local_110 = &LAB_140307be8;
      local_118 = L"Engine";
      local_120 = 0;
      local_128 = 0x10000000;
      local_130 = 8;
      local_138 = (code **)CONCAT44(local_138._4_4_,0x158);
      FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
    }
    uVar15 = (ulonglong)(uint)(int)fVar21;
    uVar19 = (ulonglong)(uint)(int)fVar22;
    lVar16 = plVar13[2];
    iVar5 = *(int *)(lVar16 + 0x38);
    if ((*(int *)(DAT_14cb0b4f0 + 0x38) <= iVar5) &&
       (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(DAT_14cb0b4f0 + 0x38) * 8)
        == DAT_14cb0b4f0 + 0x30)) {
      lVar16 = plVar13[0x29];
      if (lVar16 != 0) {
        if (*(code **)(*plVar13 + 0x330) == (code *)&LAB_14014d366) {
          if (((*(byte *)((longlong)plVar13 + 0xfe) & 4) != 0) &&
             (lVar11 = *(longlong *)(lVar16 + 0x28), lVar11 != 0)) {
LAB_143a74059:
            uVar12 = *(uint *)(lVar11 + 4);
            goto LAB_143a739c6;
          }
        }
        else {
          cVar3 = (**(code **)(*plVar13 + 0x330))(plVar13);
          lVar16 = plVar13[0x29];
          if (cVar3 != '\0') {
            lVar11 = *(longlong *)(lVar16 + 0x28);
            goto LAB_143a74059;
          }
        }
        uVar12 = *(uint *)(lVar16 + 0x20);
        goto LAB_143a739c6;
      }
      goto LAB_143a739c3;
    }
    if (DAT_14cb0b9a0 == 0) {
      local_100 = local_b8;
      local_b8[0] = FUN_1449e2820;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_146408884;
      local_108 = &LAB_147d719e1;
      local_110 = &LAB_140fb41fe;
      local_118 = L"Engine";
      local_120 = 0;
      local_128 = 0x10000000;
      local_130 = 8;
      local_138 = (code **)CONCAT44(local_138._4_4_,0x168);
      FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
      lVar16 = plVar13[2];
      iVar5 = *(int *)(lVar16 + 0x38);
    }
    uVar12 = 1;
    if ((*(int *)(DAT_14cb0b9a0 + 0x38) <= iVar5) &&
       (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8)
        == DAT_14cb0b9a0 + 0x30)) {
      uVar12 = *(uint *)((longlong)plVar13 + 0x164);
    }
  }
  else {
    if (((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(*(longlong *)(param_2 + 8) + 0x48))) &&
       (plVar13 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_2 + 8) + 0x40) + (ulonglong)uVar12 * 8),
       plVar13 != (longlong *)0x0)) {
      if (DAT_14cb0b430 == 0) {
        local_100 = local_b8;
        local_b8[0] = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = &LAB_145892f94;
        local_108 = &LAB_147d6dbf3;
        local_110 = &LAB_1464081e0;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10000001;
        local_130 = 8;
        local_138 = (code **)CONCAT44(local_138._4_4_,0x138);
        FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
      }
      if ((*(int *)(DAT_14cb0b430 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) ==
          DAT_14cb0b430 + 0x30)) goto LAB_143a73ab9;
    }
LAB_143a739b2:
    uVar19 = DAT_14c967818 >> 0x20;
    plVar13 = (longlong *)0x0;
    uVar15 = DAT_14c967818;
LAB_143a739c3:
    uVar12 = 0;
  }
LAB_143a739c6:
  cVar3 = FUN_144b34b0c(param_2,plVar13);
  if ((((cVar3 != '\0') && (param_2[2] == (uint)uVar15)) && (param_2[3] == (uint)uVar19)) &&
     (param_2[4] == uVar12)) goto LAB_143a73cd8;
  if (plVar13 == (longlong *)0x0) {
    *param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)((longlong)plVar13 + 0xc);
    *param_2 = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    uVar4 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar18 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar20) {
        local_e4 = uVar18;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar18);
        uVar18 = local_e4;
      }
      LOCK();
      uVar4 = *(uint *)(lVar16 + 0x10);
      bVar20 = uVar4 == 0;
      if (bVar20) {
        *(uint *)(lVar16 + 0x10) = uVar18;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar20) {
        uVar4 = uVar18;
      }
    }
  }
  param_2[1] = uVar4;
  uStack_c8 = uVar15 & 0xffffffff | uVar19 << 0x20;
  *(ulonglong *)(param_2 + 2) = uStack_c8;
  param_2[4] = uVar12;
  local_e0 = *(undefined8 *)(param_1 + 0x28);
  uStack_d8 = *(undefined8 *)(param_3 + 0x100);
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar16 + 0xc60);
  local_d0 = plVar13;
  local_c0 = uVar12;
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_143a73a94;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143a73a9d;
      goto LAB_143a73bf2;
    }
  }
  else {
LAB_143a73a94:
    if (iVar5 != 0x10) {
LAB_143a73bf2:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar16 + 0xc60), iVar5 == 2))
        goto LAB_143a73a9d;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_143a73a9d;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_143a73db8;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a7d97b);
          }
          lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar16 + 0x310);
          *(undefined8 *)(lVar16 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_143a73db8:
          puVar17 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar17 + 0x1a);
          uVar12 = puVar9[0x12];
          if (puVar14 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar4 = *puVar9;
            *puVar9 = *puVar9 + uVar12 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar12) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            puVar17 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar17 + 0x1a);
            uVar12 = 0;
            if (puVar14 <= puVar9 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a73e38;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a73e38:
        *(uint **)(puVar9 + 0x10) = puVar14;
        puVar9[0x12] = uVar12;
        iVar5 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adf2d20;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_e0;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_e0._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_d8;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_d8._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_d0;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_d0._4_4_;
        *(undefined4 *)(puVar17 + 0x18) = (undefined4)uStack_c8;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_c8._4_4_;
        puVar17[0x19] = CONCAT44(uStack_bc,local_c0);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar5 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar16 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar16 == 0) {
          uVar19 = 1;
          if ((char)uVar15 != '\x06') {
            uVar19 = uVar15;
          }
          uVar15 = uVar19;
          uVar10 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x30);
        }
        puVar17[0xf] = uVar10;
        puVar17[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar5;
        if (puVar17 == (undefined8 *)0x0) {
          local_b8[0] = (code *)CONCAT71(local_b8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_b8[0] = (code *)CONCAT71(local_b8[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_b8[0] = (code *)0x0;
        local_a8 = (longlong *)FUN_14001cc68(0x30,8);
        *local_a8 = (longlong)&PTR_LAB_14adf2d00;
        local_a8[5] = CONCAT44(uStack_bc,local_c0);
        *(undefined4 *)(local_a8 + 3) = (undefined4)local_d0;
        *(undefined4 *)((longlong)local_a8 + 0x1c) = local_d0._4_4_;
        *(undefined4 *)(local_a8 + 4) = (undefined4)uStack_c8;
        *(undefined4 *)((longlong)local_a8 + 0x24) = uStack_c8._4_4_;
        *(undefined4 *)(local_a8 + 1) = (undefined4)local_e0;
        *(undefined4 *)((longlong)local_a8 + 0xc) = local_e0._4_4_;
        *(undefined4 *)(local_a8 + 2) = (undefined4)uStack_d8;
        *(undefined4 *)((longlong)local_a8 + 0x14) = uStack_d8._4_4_;
        if (local_a8 + 1 != (longlong *)0x0) {
          local_b8[0] = (code *)&LAB_143a7e518;
        }
        local_138 = local_b8;
        FUN_14005a792(&DAT_14ca9a440,L"NDITexture_UpdateInstance",&DAT_14cb3e400);
        if (local_b8[0] != (code *)0x0) {
          plVar13 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar13 = local_98;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      goto LAB_143a73cd8;
    }
  }
LAB_143a73a9d:
  FUN_143a7db32(&local_e0);
LAB_143a73cd8:
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a74306 FUN_143a74306 body=435 status=ok
// SIG undefined FUN_143a74306(void)

void FUN_143a74306(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*param_2 != DAT_14cb3d958) || ((int)param_2[3] != 1)) || ((int)param_2[4] != 2))
  goto LAB_143a74434;
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  puVar2 = local_30;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_30[2] = lVar4;
  *local_30 = &PTR_FUN_14adf2d30;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_143a743df:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_143a743df;
    }
  }
  *param_4 = (longlong)puVar2;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_143a74434;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143a74434:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a744fc FUN_143a744fc body=435 status=ok
// SIG undefined FUN_143a744fc(void)

void FUN_143a744fc(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*param_2 != DAT_14cb3d998) || ((int)param_2[3] != 1)) || ((int)param_2[4] != 3))
  goto LAB_143a7462a;
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  puVar2 = local_30;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_30[2] = lVar4;
  *local_30 = &PTR_FUN_14adf2ef0;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_143a745d5:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_143a745d5;
    }
  }
  *param_4 = (longlong)puVar2;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_143a7462a;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143a7462a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a746c6 FUN_143a746c6 body=2479 status=ok
// SIG undefined FUN_143a746c6(void)

void FUN_143a746c6(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStack_198 [32];
  code **local_178;
  longlong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined2 local_118;
  undefined1 local_116;
  longlong *local_110;
  undefined1 local_108 [8];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  code *local_e8 [2];
  longlong *local_d8;
  longlong local_c8 [5];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar20 = *(longlong *)(param_1 + 0x28);
  FUN_14182cf6c(param_1,&local_100);
  uVar26 = 0;
  uVar27 = 0x3ff00000;
  uVar28 = 0;
  uVar29 = 0xbff00000;
  uVar34 = uVar26;
  uVar35 = uVar27;
  uVar36 = uVar26;
  uVar37 = uVar27;
  if (*(longlong *)(param_1 + 0x38) == 0) {
LAB_143a747fb:
    lVar22 = 0;
    uVar30 = uVar28;
    uVar31 = uVar29;
    uVar32 = uVar28;
    uVar33 = uVar29;
  }
  else {
    lVar12 = FUN_140d5a4a0();
    lVar22 = *(longlong *)(param_1 + 0x38);
    if (lVar22 == 0) goto LAB_143a747fb;
    uVar28 = 0;
    uVar29 = 0xbff00000;
    uVar30 = uVar28;
    uVar31 = uVar29;
    uVar32 = uVar28;
    uVar33 = uVar29;
    if ((((lVar12 != 0) && (lVar7 = *(longlong *)(lVar22 + 0x10), lVar7 != 0)) &&
        (*(int *)(lVar12 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
        lVar12 + 0x30)) {
      uVar28 = (undefined4)*(undefined8 *)(lVar22 + 0x28);
      uVar29 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x28) >> 0x20);
      uVar30 = (int)*(undefined8 *)(lVar22 + 0x38);
      uVar31 = (int)((ulonglong)*(undefined8 *)(lVar22 + 0x38) >> 0x20);
      uVar32 = (int)*(undefined8 *)(lVar22 + 0x30);
      uVar33 = (int)((ulonglong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
    }
    lVar12 = FUN_140d5a4a0();
    lVar22 = *(longlong *)(param_1 + 0x38);
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else if (((lVar12 != 0) && (lVar7 = *(longlong *)(lVar22 + 0x10), lVar7 != 0)) &&
            ((*(int *)(lVar12 + 0x38) <= *(int *)(lVar7 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
              lVar12 + 0x30)))) {
      uVar26 = (undefined4)*(undefined8 *)(lVar22 + 0x50);
      uVar27 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x50) >> 0x20);
      uVar34 = (int)*(undefined8 *)(lVar22 + 0x48);
      uVar35 = (int)((ulonglong)*(undefined8 *)(lVar22 + 0x48) >> 0x20);
      uVar36 = (int)*(undefined8 *)(lVar22 + 0x40);
      uVar37 = (int)((ulonglong)*(undefined8 *)(lVar22 + 0x40) >> 0x20);
    }
  }
  uVar6 = *(undefined2 *)(param_1 + 0x40);
  uVar4 = *(undefined1 *)(param_1 + 0x42);
  FUN_140d5a412(local_108,lVar22);
  local_160 = local_100;
  uStack_15c = uStack_fc;
  uStack_158 = uStack_f8;
  uStack_154 = uStack_f4;
  local_150 = local_f0;
  local_148 = CONCAT44(uVar29,uVar28);
  uStack_140 = CONCAT44(uVar33,uVar32);
  local_138 = CONCAT44(uVar31,uVar30);
  local_130 = CONCAT44(uVar37,uVar36);
  uStack_128 = CONCAT44(uVar35,uVar34);
  local_120 = CONCAT44(uVar27,uVar26);
  local_168 = lVar20;
  local_118 = uVar6;
  local_116 = uVar4;
  FUN_1417f835a(&local_110,local_108);
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar20 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_143a748ac;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_143a748b5;
      goto LAB_143a749f1;
    }
  }
  else {
LAB_143a748ac:
    if (iVar9 != 0x10) {
LAB_143a749f1:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar20 + 0xc60), iVar9 == 2)) {
LAB_143a74f12:
          *(undefined1 *)(local_168 + 0x58) = (undefined1)local_118;
          *(undefined1 *)(local_168 + 0x59) = local_118._1_1_;
          *(undefined1 *)(local_168 + 0x5a) = local_116;
          *(undefined8 *)(local_168 + 0x20) = local_150;
          *(ulonglong *)(local_168 + 0x10) = CONCAT44(uStack_15c,local_160);
          *(ulonglong *)(local_168 + 0x18) = CONCAT44(uStack_154,uStack_158);
          *(undefined8 *)(local_168 + 0x38) = local_138;
          *(undefined8 *)(local_168 + 0x28) = local_148;
          *(undefined8 *)(local_168 + 0x30) = uStack_140;
          *(undefined8 *)(local_168 + 0x50) = local_120;
          *(undefined4 *)(local_168 + 0x40) = (undefined4)local_130;
          *(undefined4 *)(local_168 + 0x44) = local_130._4_4_;
          *(undefined4 *)(local_168 + 0x48) = (undefined4)uStack_128;
          *(undefined4 *)(local_168 + 0x4c) = uStack_128._4_4_;
          if (((local_110 == (longlong *)0x0) || (*local_110 == 0)) ||
             (lVar20 = *(longlong *)(*local_110 + 0x10), lVar20 == 0)) {
            lVar20 = *(longlong *)(DAT_14ca94db8 + 0x10);
          }
          lVar22 = *(longlong *)(local_168 + 0x60);
          if (lVar22 != lVar20) {
            *(longlong *)(local_168 + 0x60) = lVar20;
            if (lVar20 != 0) {
              LOCK();
              *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
              UNLOCK();
            }
            if (lVar22 != 0) {
              LOCK();
              puVar15 = (uint *)(lVar22 + 8);
              uVar19 = *puVar15;
              *puVar15 = *puVar15 - 1;
              UNLOCK();
              if ((uVar19 & 0x3fffffff) == 1) {
                puVar15 = (uint *)(lVar22 + 8);
                LOCK();
                uVar19 = *puVar15;
                *puVar15 = *puVar15 | 0x40000000;
                UNLOCK();
                if ((uVar19 >> 0x1e & 1) == 0) {
                  bVar5 = *(byte *)(lVar22 + 0xd);
                  plVar13 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar13[1] = lVar22;
                  plVar18 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c8;
                  if ((bVar5 & 2) == 0) {
                    do {
                      *plVar13 = (longlong)plVar18;
                      LOCK();
                      bVar25 = plVar18 != DAT_14ca843c0;
                      plVar17 = plVar13;
                      if (bVar25) {
                        plVar18 = DAT_14ca843c0;
                        plVar17 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar17;
                      UNLOCK();
                    } while (bVar25);
                  }
                  else {
                    do {
                      *plVar13 = (longlong)plVar17;
                      LOCK();
                      bVar25 = plVar17 != DAT_14ca843c8;
                      plVar18 = plVar13;
                      if (bVar25) {
                        plVar17 = DAT_14ca843c8;
                        plVar18 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar18;
                      UNLOCK();
                    } while (bVar25);
                  }
                }
              }
            }
          }
          goto LAB_143a74aea;
        }
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_143a74f12;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar15 = (uint *)*puVar2;
        if (puVar15 != (uint *)0x0) goto LAB_143a74bfd;
        while( true ) {
          uVar19 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar19 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar19 | 1;
            __tlregdtor(&LAB_143a7d97b);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar14 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_143a74bfd:
          puVar24 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar21 = (uint *)(puVar24 + 0x21);
          uVar19 = puVar15[0x12];
          if (puVar21 <= puVar15 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar3 = *puVar15;
            *puVar15 = *puVar15 + uVar19 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar19) != 0xffffffff) break;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar24 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
            puVar21 = (uint *)(puVar24 + 0x21);
            uVar19 = 0;
            if (puVar21 <= puVar15 + 0x4000) {
              uVar19 = 1;
              goto LAB_143a74c7d;
            }
          }
        }
        uVar19 = uVar19 + 1;
LAB_143a74c7d:
        *(uint **)(puVar15 + 0x10) = puVar21;
        puVar15[0x12] = uVar19;
        iVar9 = 0;
        FUN_1447247dc(puVar24,0);
        *puVar24 = &PTR_FUN_14adf30f0;
        plVar18 = &local_168;
        plVar17 = puVar24 + 0x15;
        for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
          *plVar17 = *plVar18;
          plVar18 = plVar18 + 1;
          plVar17 = plVar17 + 1;
        }
        *(undefined2 *)(puVar24 + 0x1f) = local_118;
        *(undefined1 *)((longlong)puVar24 + 0xfa) = local_116;
        FUN_1417f835a(puVar24 + 0x20,&local_110);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar19 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
            uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
            iVar9 = 0;
          }
          else {
            uVar23 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar23 = 5;
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
        lVar20 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar20 == 0) {
          uVar8 = 1;
          if ((char)uVar23 != '\x06') {
            uVar8 = uVar23;
          }
          uVar23 = uVar8;
          uVar16 = 0;
        }
        else {
          if ((char)uVar23 == '\x06') {
            uVar23 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
          }
          uVar16 = *(undefined8 *)(lVar20 + 0x30);
        }
        puVar24[0xf] = uVar16;
        puVar24[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar24 + 0x1c) = iVar9;
        if (puVar24 == (undefined8 *)0x0) {
          local_e8[0] = (code *)CONCAT71(local_e8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
          UNLOCK();
          local_e8[0] = (code *)CONCAT71(local_e8[0]._1_7_,1);
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
        local_e8[0] = (code *)0x0;
        plVar13 = (longlong *)FUN_14001cc68(0x68,8);
        local_d8 = plVar13;
        *plVar13 = (longlong)&PTR_LAB_14adf30a0;
        plVar17 = &local_168;
        plVar18 = plVar13;
        for (lVar20 = 10; plVar18 = plVar18 + 1, lVar20 != 0; lVar20 = lVar20 + -1) {
          *plVar18 = *plVar17;
          plVar17 = plVar17 + 1;
        }
        *(undefined1 *)((longlong)plVar13 + 0x5a) = local_116;
        *(undefined2 *)(plVar13 + 0xb) = local_118;
        FUN_1417f835a(plVar13 + 0xc,&local_110);
        if (plVar13 != (longlong *)&DAT_fffffffffffffff8) {
          local_e8[0] = FUN_143a7ea3c;
        }
        local_178 = local_e8;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateDIVectorField",&DAT_14cb3e514);
        if (local_e8[0] != (code *)0x0) {
          plVar18 = local_d8;
          if (local_d8 == (longlong *)0x0) {
            plVar18 = local_c8;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
      }
      goto LAB_143a74aea;
    }
  }
LAB_143a748b5:
  *(undefined1 *)(local_168 + 0x58) = (undefined1)local_118;
  *(undefined1 *)(local_168 + 0x59) = local_118._1_1_;
  *(undefined1 *)(local_168 + 0x5a) = local_116;
  *(undefined8 *)(local_168 + 0x20) = local_150;
  *(ulonglong *)(local_168 + 0x10) = CONCAT44(uStack_15c,local_160);
  *(ulonglong *)(local_168 + 0x18) = CONCAT44(uStack_154,uStack_158);
  *(undefined8 *)(local_168 + 0x38) = local_138;
  *(undefined8 *)(local_168 + 0x28) = local_148;
  *(undefined8 *)(local_168 + 0x30) = uStack_140;
  *(undefined8 *)(local_168 + 0x50) = local_120;
  *(undefined4 *)(local_168 + 0x40) = (undefined4)local_130;
  *(undefined4 *)(local_168 + 0x44) = local_130._4_4_;
  *(undefined4 *)(local_168 + 0x48) = (undefined4)uStack_128;
  *(undefined4 *)(local_168 + 0x4c) = uStack_128._4_4_;
  if (((local_110 == (longlong *)0x0) || (*local_110 == 0)) ||
     (lVar20 = *(longlong *)(*local_110 + 0x10), lVar20 == 0)) {
    lVar20 = *(longlong *)(DAT_14ca94db8 + 0x10);
  }
  lVar22 = *(longlong *)(local_168 + 0x60);
  if (lVar22 != lVar20) {
    *(longlong *)(local_168 + 0x60) = lVar20;
    if (lVar20 != 0) {
      LOCK();
      *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
      UNLOCK();
    }
    if (lVar22 != 0) {
      LOCK();
      puVar15 = (uint *)(lVar22 + 8);
      uVar19 = *puVar15;
      *puVar15 = *puVar15 - 1;
      UNLOCK();
      if ((uVar19 & 0x3fffffff) == 1) {
        puVar15 = (uint *)(lVar22 + 8);
        LOCK();
        uVar19 = *puVar15;
        *puVar15 = *puVar15 | 0x40000000;
        UNLOCK();
        if ((uVar19 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar22 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar22;
          plVar18 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c0;
              plVar17 = plVar13;
              if (bVar25) {
                plVar18 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar13 = (longlong)plVar17;
              LOCK();
              bVar25 = plVar17 != DAT_14ca843c8;
              plVar18 = plVar13;
              if (bVar25) {
                plVar17 = DAT_14ca843c8;
                plVar18 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
  }
LAB_143a74aea:
  FUN_1417f83cc(&local_110);
  FUN_1417f83cc(local_108);
  if ((local_a0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a75076 FUN_143a75076 body=1685 status=ok
// SIG undefined FUN_143a75076(void)

undefined8 FUN_143a75076(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_c8 [32];
  code **local_a8;
  longlong local_98;
  longlong local_90;
  longlong *plStack_88;
  longlong local_80;
  undefined8 *local_78;
  int local_6c;
  code *local_68;
  undefined8 **local_60;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0xffffffff;
  param_2[1] = DAT_14c9a5298;
  *(undefined4 *)(param_2 + 2) = DAT_14c9a52a0;
  local_60 = &local_78;
  local_98 = *(longlong *)(param_3 + 0x100);
  local_68 = (code *)&local_98;
  local_78 = param_2;
  FUN_1481c3dac(param_1 + 0x40,&local_6c,&local_68);
  lVar9 = *(longlong *)(param_1 + 0x38);
  if (lVar9 == 0) goto LAB_143a7528d;
  *(undefined4 *)(local_78 + 2) = *(undefined4 *)(lVar9 + 0x44);
  local_78[1] = *(undefined8 *)(lVar9 + 0x3c);
  local_98 = *(longlong *)(param_1 + 0x28);
  local_90 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x50);
  plStack_88 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x58);
  if (plStack_88 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_88 + 1) = (int)plStack_88[1] + 1;
    UNLOCK();
  }
  local_80 = *(longlong *)(param_3 + 0x100);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a75175;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a755f2;
      goto LAB_143a7517e;
    }
LAB_143a755f2:
    lVar9 = local_98;
    local_68 = (code *)&local_80;
    FUN_1481c4278(local_98 + 0x10,&local_6c);
    lVar9 = *(longlong *)(lVar9 + 0x10);
    lVar15 = (longlong)local_6c * 0x50;
    if (plStack_88 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_88 + 1) = (int)plStack_88[1] + 1;
      UNLOCK();
    }
    plVar14 = *(longlong **)(lVar9 + 0x40 + lVar15);
    *(longlong *)(lVar9 + lVar15 + 0x38) = local_90;
    *(longlong **)(lVar9 + 0x40 + lVar15) = plStack_88;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          lVar9 = *plVar14;
          goto LAB_143a75263;
        }
      }
    }
  }
  else {
LAB_143a75175:
    if (iVar6 == 0x10) goto LAB_143a755f2;
LAB_143a7517e:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
      goto LAB_143a755f2;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143a755f2;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar3;
      if (puVar11 != (uint *)0x0) goto LAB_143a75356;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_143a7d97b);
        }
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar9 + 0x310);
        *(undefined8 *)(lVar9 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar3 = puVar10;
        FUN_140217a48(puVar3);
        puVar11 = (uint *)*puVar3;
LAB_143a75356:
        puVar18 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x19);
        uVar13 = puVar11[0x12];
        if (puVar16 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar4 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar3;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar3 = puVar11;
          puVar18 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x19);
          uVar13 = 0;
          if (puVar16 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_143a753d6;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_143a753d6:
      *(uint **)(puVar11 + 0x10) = puVar16;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14adf3120;
      puVar18[0x15] = local_98;
      puVar18[0x16] = local_90;
      puVar18[0x17] = plStack_88;
      local_90 = 0;
      plStack_88 = (longlong *)0x0;
      puVar18[0x18] = local_80;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
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
        uVar12 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar9 + 0x30);
      }
      puVar18[0xf] = uVar12;
      puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar6;
      if (puVar18 == (undefined8 *)0x0) {
        local_68 = (code *)CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        local_68 = (code *)CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(puVar18);
        LOCK();
        piVar2 = (int *)(puVar18 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
    }
    else {
      local_68 = (code *)0x0;
      local_58 = (longlong *)FUN_14001cc68(0x28,8);
      *local_58 = (longlong)&PTR_LAB_14adf3100;
      local_58[1] = local_98;
      local_58[2] = local_90;
      local_58[3] = (longlong)plStack_88;
      local_90 = 0;
      plStack_88 = (longlong *)0x0;
      local_58[4] = local_80;
      if (local_58 + 1 != (longlong *)0x0) {
        local_68 = FUN_143a7ee70;
      }
      local_a8 = &local_68;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3e518);
      if (local_68 == (code *)0x0) goto LAB_143a75266;
      plVar14 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar14 = local_48;
      }
      lVar9 = *plVar14;
LAB_143a75263:
      (**(code **)(lVar9 + 0x10))(plVar14);
    }
  }
LAB_143a75266:
  plVar14 = plStack_88;
  if (plStack_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
LAB_143a7528d:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a7570c FUN_143a7570c body=1261 status=ok
// SIG undefined FUN_143a7570c(void)

void FUN_143a7570c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1481c4816(param_1 + 0x40,*(undefined8 *)(param_3 + 0x100));
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a75b54;
    if (iVar7 != 1) goto LAB_143a7576c;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a75b54;
  }
  else {
LAB_143a7576c:
    if (iVar7 == 0x10) goto LAB_143a75b54;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a75b54:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a75b54;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a758d9;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a7d97b);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a758d9:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a75959;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a75959:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14adf3170;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14adf3130;
    local_68[0] = &LAB_143a7f1f6;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveInstance",&DAT_14cb3e51c);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a75c0e FUN_143a75c0e body=883 status=ok
// SIG undefined FUN_143a75c0e(void)

void FUN_143a75c0e(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88 [2];
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_52;
  undefined1 local_4e;
  undefined2 local_4d;
  undefined1 local_4b;
  undefined4 local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar10 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x50);
    }
    iVar12 = *(int *)(lVar10 + (ulonglong)
                               (*(int *)(param_1 + 0x58) - 1U &
                               (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
    if (iVar12 != -1) {
      do {
        lVar10 = *(longlong *)(param_1 + 0x10) + (longlong)iVar12 * 0x50;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar12 * 0x50) == lVar5)
        goto LAB_143a75c98;
        iVar12 = *(int *)(lVar10 + 0x48);
      } while (iVar12 != -1);
    }
  }
  lVar10 = 0;
LAB_143a75c98:
  puVar11 = (undefined4 *)(lVar10 + 8);
  if (lVar10 == 0) {
    puVar11 = (undefined4 *)0x0;
  }
  cVar6 = FUN_1402181e8(param_2);
  if ((((cVar6 == '\0') || (puVar11 == (undefined4 *)0x0)) || (*(char *)(puVar11 + 1) != '\x01')) ||
     (plVar9 = *(longlong **)(puVar11 + 0xc), plVar9 == (longlong *)0x0)) goto LAB_143a75f0f;
  local_90 = *(longlong *)(puVar11 + 6);
  if (local_90 == 0) {
    plVar9 = (longlong *)(puVar11 + 6);
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_5c = CONCAT44((int)(float)puVar11[9],(int)(float)puVar11[8]);
    local_30 = 0;
    uStack_28 = 0;
    local_4e = 2;
    local_88[1] = 0x48;
    local_4d = 10;
    local_54 = (undefined2)(int)(float)puVar11[10];
    local_52 = 0x1010001;
    local_78 = 1;
    local_60 = 0;
    local_74 = 0;
    uStack_6c = 0;
    local_4b = 0xff;
    local_40 = L"NiagaraVolumeCache";
    local_38 = 0;
    local_48 = 0x70;
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,local_88,&DAT_14ca85100);
    if (plVar9 == local_88) {
LAB_143a75e14:
      lVar5 = local_88[0];
      if (local_88[0] != 0) {
        LOCK();
        puVar1 = (uint *)(local_88[0] + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_88[0] + 8);
          LOCK();
          uVar3 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(local_88[0] + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar5;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar13 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar13) {
                  plVar9 = DAT_14ca843c0;
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
                plVar9 = plVar7;
                if (bVar13) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    else {
      lVar5 = *plVar9;
      *plVar9 = local_88[0];
      local_88[0] = 0;
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
                bVar13 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar13) {
                  plVar9 = DAT_14ca843c0;
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
                plVar9 = plVar7;
                if (bVar13) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_143a75e14;
      }
    }
    lVar10 = DAT_14c9c0de0;
    lVar5 = *(longlong *)(puVar11 + 2);
    if (lVar5 != DAT_14c9c0de0) {
      *(longlong *)(puVar11 + 2) = DAT_14c9c0de0;
      if (lVar10 != 0) {
        LOCK();
        piVar2 = (int *)(lVar10 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
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
                bVar13 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar13) {
                  plVar9 = DAT_14ca843c0;
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
                plVar9 = plVar7;
                if (bVar13) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    local_90 = *(longlong *)(puVar11 + 6);
    plVar9 = *(longlong **)(puVar11 + 0xc);
    if (local_90 != 0) goto LAB_143a75efe;
  }
  else {
LAB_143a75efe:
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,*puVar11,&local_90);
LAB_143a75f0f:
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a75f82 FUN_143a75f82 body=289 status=ok
// SIG undefined FUN_143a75f82(void)

void FUN_143a75f82(longlong param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48 [2];
  undefined1 local_38 [8];
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481b89fc(local_38);
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    uVar6 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    piVar4 = (int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar6 = uVar1 & 0x7fff;
    lVar3 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar5 = (ulonglong)(uVar6 * *(int *)(lVar3 + 0x80)) + *(longlong *)(lVar3 + 0x70);
    }
    else {
      iVar7 = **(int **)(lVar3 + 0x20);
      lVar5 = 0;
      if (iVar7 <= (int)uVar6) {
        do {
          uVar6 = uVar6 - iVar7;
          iVar7 = (*(int **)(lVar3 + 0x20))[lVar5 + 1];
          lVar5 = lVar5 + 1;
        } while (iVar7 <= (int)uVar6);
      }
      lVar5 = (longlong)(int)uVar6 + *(longlong *)(*(longlong *)(lVar3 + 0x18) + lVar5 * 8);
    }
    uVar6 = (uint)(uVar1 >> 0xf);
    piVar4 = (int *)(lVar3 + 0x4c);
  }
  iVar7 = *piVar4;
  FUN_140126e42(local_48,param_2);
  *local_30 = *(undefined4 *)(lVar5 + (ulonglong)uVar6 * (longlong)iVar7 * 4);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1482048cc(*(longlong *)(param_1 + 0x38),*local_30);
  }
  *local_48[0] = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a760aa FUN_143a760aa body=1259 status=ok
// SIG undefined FUN_143a760aa(void)

void FUN_143a760aa(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a764f0;
    if (iVar7 != 1) goto LAB_143a76108;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a764f0;
  }
  else {
LAB_143a76108:
    if (iVar7 == 0x10) goto LAB_143a764f0;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a764f0:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a764f0;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a76275;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a7d97b);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a76275:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a762f5;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a762f5:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14adf3210;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14adf31f0;
    local_68[0] = &LAB_143a7f3da;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"NDITexture_RemoveInstance",&DAT_14cb3e5a4);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a765aa FUN_143a765aa body=2002 status=ok
// SIG undefined FUN_143a765aa(void)

undefined8 FUN_143a765aa(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar21 = param_2[6];
  if ((ulonglong)uVar21 != 0xffffffff) {
    if (((-1 < (int)uVar21) && ((int)uVar21 < *(int *)(*(longlong *)(param_2 + 8) + 0x48))) &&
       (lVar20 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_2 + 8) + 0x40) + (ulonglong)uVar21 * 8),
       lVar20 != 0)) {
      if (DAT_14cb0b430 == 0) {
        local_d0 = local_88;
        local_88[0] = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = &LAB_145892f94;
        local_d8 = &LAB_147d6dbf3;
        local_e0 = &LAB_1464081e0;
        local_e8 = L"Engine";
        local_f0 = 0;
        local_f8 = 0x10000001;
        local_100 = 8;
        local_108 = (code **)CONCAT44(local_108._4_4_,0x138);
        FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
      }
      if ((*(int *)(DAT_14cb0b430 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) == DAT_14cb0b430 + 0x30))
      goto LAB_143a7663d;
    }
    FUN_144b34b0c(param_2,0);
    goto LAB_143a768db;
  }
  lVar20 = *(longlong *)(param_1 + 0x38);
LAB_143a7663d:
  cVar4 = FUN_144b34b0c(param_2,lVar20);
  if (lVar20 == 0 || cVar4 != '\0') goto LAB_143a768db;
  lVar9 = FUN_14085eb5a();
  if (*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) {
    lVar22 = 0;
  }
  else {
    lVar22 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30) {
      lVar22 = lVar20;
    }
  }
  lVar9 = FUN_14129eed6();
  if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
      != lVar9 + 0x30)) {
    if (lVar22 == 0) goto LAB_143a768db;
LAB_143a766ad:
    puVar11 = *(uint **)(lVar22 + 0x138);
    if (puVar11 != (uint *)0x0) {
      uVar21 = puVar11[2] & 0x1fffffff;
      puVar13 = puVar11 + 1;
      goto LAB_143a766c7;
    }
    uVar21 = 0;
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    if (lVar22 != 0) goto LAB_143a766ad;
    uVar21 = *(uint *)(lVar20 + 0x148);
    puVar13 = (uint *)(lVar20 + 0x144);
    puVar11 = (uint *)(lVar20 + 0x140);
LAB_143a766c7:
    uVar18 = *puVar13;
    uVar19 = *puVar11;
  }
  uVar5 = *(uint *)(lVar20 + 0xc);
  *param_2 = uVar5;
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  uVar5 = *(uint *)(lVar9 + 0x10);
  if (*(uint *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    uVar17 = DAT_14c964868 + 1;
    bVar23 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar23) {
      local_b4 = uVar17;
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar17);
      uVar17 = local_b4;
    }
    LOCK();
    uVar5 = *(uint *)(lVar9 + 0x10);
    bVar23 = uVar5 == 0;
    if (bVar23) {
      *(uint *)(lVar9 + 0x10) = uVar17;
      uVar5 = 0;
    }
    UNLOCK();
    if (bVar23) {
      uVar5 = uVar17;
    }
  }
  param_2[1] = uVar5;
  param_2[2] = uVar19;
  param_2[3] = uVar18;
  param_2[4] = uVar21;
  local_b0 = *(undefined8 *)(param_1 + 0x28);
  uStack_a8 = *(undefined8 *)(param_3 + 0x100);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  local_a0 = lVar20;
  uStack_98 = uVar19;
  uStack_94 = uVar18;
  local_90 = uVar21;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a76776;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a7677b;
      goto LAB_143a767f5;
    }
  }
  else {
LAB_143a76776:
    if (iVar6 != 0x10) {
LAB_143a767f5:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_143a7677b;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a7677b;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a769ab;
        while( true ) {
          uVar21 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar21 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar21 | 1;
            __tlregdtor(&LAB_143a7d97b);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143a769ab:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar16 + 0x1a);
          uVar21 = puVar11[0x12];
          if (puVar13 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar18 = *puVar11;
            *puVar11 = *puVar11 + uVar21 + 1;
            UNLOCK();
            if ((uVar18 ^ uVar21) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar13 = (uint *)(puVar16 + 0x1a);
            uVar21 = 0;
            if (puVar13 <= puVar11 + 0x4000) {
              uVar21 = 1;
              goto LAB_143a76a2b;
            }
          }
        }
        uVar21 = uVar21 + 1;
LAB_143a76a2b:
        *(uint **)(puVar11 + 0x10) = puVar13;
        puVar11[0x12] = uVar21;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14adf3240;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_b0._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_a8._4_4_;
        *(undefined4 *)(puVar16 + 0x17) = (undefined4)local_a0;
        *(undefined4 *)((longlong)puVar16 + 0xbc) = local_a0._4_4_;
        *(uint *)(puVar16 + 0x18) = uStack_98;
        *(uint *)((longlong)puVar16 + 0xc4) = uStack_94;
        puVar16[0x19] = CONCAT44(uStack_8c,local_90);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar21 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar21 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar21];
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
        lVar20 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar20 == 0) {
          uVar3 = 1;
          if ((char)uVar15 != '\x06') {
            uVar3 = uVar15;
          }
          uVar15 = uVar3;
          uVar12 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar20 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
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
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adf3220;
        local_78[5] = CONCAT44(uStack_8c,local_90);
        *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
        *(uint *)(local_78 + 4) = uStack_98;
        *(uint *)((longlong)local_78 + 0x24) = uStack_94;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = (code *)&LAB_143a7f884;
        }
        local_108 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDITexture_UpdateInstance",&DAT_14cb3e5a8);
        if (local_88[0] != (code *)0x0) {
          plVar14 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar14 = local_68;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a768db;
    }
  }
LAB_143a7677b:
  FUN_143a7f5b2(&local_b0);
LAB_143a768db:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a76d7e FUN_143a76d7e body=1011 status=ok
// SIG undefined FUN_143a76d7e(void)

void FUN_143a76d7e(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_78 [32];
  uint *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_2[9];
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar8 = *(longlong *)(param_2[2] + 0x10);
    lVar13 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar13 = *(longlong *)(lVar2 + 0x50);
    }
    iVar9 = *(int *)(lVar13 + (ulonglong)
                              (*(int *)(lVar2 + 0x58) - 1U &
                              (int)lVar8 + (int)((ulonglong)lVar8 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar13 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 0x38;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 0x38) == lVar8)
        goto LAB_143a76e0d;
        iVar9 = *(int *)(lVar13 + 0x30);
      } while (iVar9 != -1);
    }
  }
  lVar13 = 0;
LAB_143a76e0d:
  lVar2 = *param_2;
  uVar16 = (int)param_2[10] + 0xfU & 0xfffffff0;
  FUN_1414281c4();
  puVar17 = (undefined8 *)((ulonglong)uVar16 + param_2[7]);
  *(uint *)(param_2 + 10) = DAT_14cb3e5ec + uVar16;
  if ((lVar13 == 0) || (*(longlong *)(lVar13 + 0x10) == 0)) {
    *(undefined4 *)(puVar17 + 1) = DAT_14c846338;
    *puVar17 = DAT_14c846330;
    puVar17[3] = DAT_14c9c0d80;
    uVar5 = FUN_140579634(param_2[1],lVar2,2);
    puVar17[2] = uVar5;
  }
  else {
    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar13 + 0x20);
    *puVar17 = *(undefined8 *)(lVar13 + 0x18);
    puVar17[3] = *(undefined8 *)(lVar13 + 8);
    lVar8 = *(longlong *)param_2[5];
    uVar11 = *(ulonglong *)(lVar8 + 0x20);
    if ((uVar11 & 1) != 0) {
      uVar11 = ((longlong)uVar11 >> 0x18) + lVar8 + 0x20;
    }
    sVar3 = (short)(puVar17 + 2) - (short)param_2[7];
    if ((longlong)*(int *)(lVar8 + 0x28) != 0) {
      lVar14 = 0;
      do {
        if (*(short *)(uVar11 + lVar14) == sVar3) goto LAB_143a76f53;
        lVar14 = lVar14 + 6;
      } while ((longlong)*(int *)(lVar8 + 0x28) * 6 != lVar14);
    }
    uVar11 = *(ulonglong *)(lVar8 + 0x10);
    if ((uVar11 & 1) != 0) {
      uVar11 = ((longlong)uVar11 >> 0x18) + lVar8 + 0x10;
    }
    if ((longlong)*(int *)(lVar8 + 0x18) != 0) {
      lVar14 = 0;
      do {
        if (*(short *)(uVar11 + lVar14) == sVar3) goto LAB_143a76f53;
        lVar14 = lVar14 + 4;
      } while ((longlong)*(int *)(lVar8 + 0x18) * 4 != lVar14);
    }
  }
  goto LAB_143a76efb;
LAB_143a76f53:
  lVar8 = *(longlong *)(lVar13 + 0x28);
  if (lVar8 == 0) {
    uVar11 = *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + 0x60);
    if (uVar11 != 0) {
      LOCK();
      *(int *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1;
      UNLOCK();
      puVar12 = (uint *)(uVar11 + 8);
      uVar16 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      uVar4 = uVar16 & 0x7fffffff ^ uVar16 >> 0x10;
      uVar16 = *(uint *)(lVar2 + 0x248);
      uVar10 = uVar16 & uVar4;
      lVar8 = lVar2 + 0x230;
      if (*(longlong *)(lVar2 + 0x238) != 0) {
        lVar8 = *(longlong *)(lVar2 + 0x238);
      }
      do {
        if (*(uint *)(lVar8 + (longlong)(int)uVar10 * 4) == uVar4) {
          lVar14 = *(longlong *)(lVar2 + 0x220);
          if (*(longlong *)(lVar2 + 0x220) == 0) {
            lVar14 = lVar2 + 0x218;
          }
          iVar9 = *(int *)(lVar14 + (longlong)(int)uVar10 * 4);
          lVar14 = (longlong)iVar9 * 0x10;
          if (uVar11 == *(ulonglong *)(*(longlong *)(lVar2 + 0x1d8) + lVar14)) {
            if ((iVar9 != -1) &&
               (plVar15 = (longlong *)(*(longlong *)(lVar2 + 0x1d8) + lVar14 + 8),
               plVar15 != (longlong *)0x0)) {
              lVar8 = *plVar15;
              *(longlong *)(lVar13 + 0x28) = lVar8;
              if (lVar8 == 0) goto LAB_143a7703f;
              goto LAB_143a770ea;
            }
            break;
          }
        }
        uVar10 = uVar10 + 1 & uVar16;
      } while (uVar10 != (*(int *)(lVar2 + 0x24c) + uVar4 + 1 & uVar16));
      *(undefined8 *)(lVar13 + 0x28) = 0;
LAB_143a7703f:
      FUN_1447ec05f(&local_50,uVar11,L"NiagaraTextureVolume");
      uVar5 = FUN_14473c272(lVar2,&local_50,0);
      *(undefined8 *)(lVar13 + 0x28) = uVar5;
      local_58 = puVar12;
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x38))();
        uVar5 = *(undefined8 *)(lVar13 + 0x28);
      }
      FUN_14022b18a(lVar2,uVar5);
      lVar8 = *(longlong *)(lVar13 + 0x28);
      if (lVar8 == 0) {
        lVar8 = 0;
        puVar12 = local_58;
      }
      else {
        lVar14 = param_2[1];
        iVar9 = *(int *)(lVar14 + 0x260);
        *(uint *)(lVar14 + 0x260) = iVar9 + 1U;
        if (*(uint *)(lVar14 + 0x264) < iVar9 + 1U) {
          FUN_144904f42((longlong *)(lVar14 + 600),iVar9);
        }
        lVar14 = *(longlong *)(lVar14 + 600);
        lVar18 = (longlong)iVar9 * 0x10;
        *(longlong *)(lVar14 + lVar18) = lVar8;
        *(undefined4 *)(lVar14 + 8 + lVar18) = 0x70;
        *(undefined1 *)(lVar14 + 0xc + lVar18) = 1;
        lVar8 = *(longlong *)(lVar13 + 0x28);
        puVar12 = local_58;
      }
LAB_143a770ea:
      LOCK();
      uVar16 = *puVar12;
      *puVar12 = *puVar12 - 1;
      UNLOCK();
      if ((uVar16 & 0x3fffffff) == 1) {
        LOCK();
        uVar16 = *puVar12;
        *puVar12 = *puVar12 | 0x40000000;
        UNLOCK();
        if ((uVar16 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(uVar11 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = uVar11;
          plVar15 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar15;
              LOCK();
              bVar19 = plVar15 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar19) {
                plVar15 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar19 = plVar7 != DAT_14ca843c8;
              plVar15 = plVar6;
              if (bVar19) {
                plVar7 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
      if (lVar8 != 0) goto LAB_143a77152;
    }
    lVar8 = FUN_140579634(param_2[1],lVar2,2);
  }
LAB_143a77152:
  puVar17[2] = lVar8;
LAB_143a76efb:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a77191 FUN_143a77191 body=69 status=ok
// SIG undefined FUN_143a77191(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a77191(void)

{
  _DAT_14cb3dad8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a771d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3dae0,1);
  return;
}



// FUNCTION 143a771d6 FUN_143a771d6 body=69 status=ok
// SIG undefined FUN_143a771d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a771d6(void)

{
  _DAT_14cb3dae8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a77218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3daf0,1);
  return;
}



// FUNCTION 143a7721b FUN_143a7721b body=69 status=ok
// SIG undefined FUN_143a7721b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7721b(void)

{
  _DAT_14cb3daf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7725d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3db00,1);
  return;
}



// FUNCTION 143a77260 FUN_143a77260 body=69 status=ok
// SIG undefined FUN_143a77260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a77260(void)

{
  _DAT_14cb3db08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a772a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3db10,1);
  return;
}



// FUNCTION 143a772a5 FUN_143a772a5 body=69 status=ok
// SIG undefined FUN_143a772a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a772a5(void)

{
  _DAT_14cb3db18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a772e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3db20,1);
  return;
}



// FUNCTION 143a772ea FUN_143a772ea body=69 status=ok
// SIG undefined FUN_143a772ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a772ea(void)

{
  _DAT_14cb3db30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7732c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3db38,1);
  return;
}



// FUNCTION 143a77330 FUN_143a77330 body=102 status=ok
// SIG undefined FUN_143a77330(void)

void FUN_143a77330(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0xffffffff00000002;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 **)(param_1 + 8) = &DAT_14cb3db48;
  return;
}



// FUNCTION 143a77396 FUN_143a77396 body=185 status=ok
// SIG undefined FUN_143a77396(void)

void FUN_143a77396(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14ade2d80;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xffffffff00000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return;
}



// FUNCTION 143a77450 FUN_143a77450 body=153 status=ok
// SIG undefined FUN_143a77450(void)

void FUN_143a77450(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x54) < 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_14481578e(param_1 + 0x48,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_144893a1c(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_144893a1c(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_144893a1c(param_1 + 0x38,0);
    return;
  }
  return;
}



// FUNCTION 143a774ea FUN_143a774ea body=3217 status=ok
// SIG undefined FUN_143a774ea(void)

/* WARNING: Removing unreachable block (ram,0x000143a77dbd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a774ea(longlong param_1,uint param_2,int param_3,undefined8 param_4,longlong *param_5)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *pvVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  float *pfVar21;
  int iVar22;
  float *pfVar23;
  int iVar24;
  float *pfVar25;
  float *pfVar26;
  int iVar27;
  float fVar28;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  undefined4 local_140;
  undefined8 local_138;
  wchar_t *local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  code **local_110;
  code *local_108;
  code *local_100;
  int local_f4;
  longlong local_f0;
  float *local_e8;
  ulonglong local_e0;
  code *local_d8;
  undefined8 local_d0;
  void *local_c8;
  uint local_c0;
  float *local_b8;
  undefined8 uStack_b0;
  longlong local_a0;
  longlong *local_98;
  ulonglong uStack_90;
  uint local_88;
  code *local_80;
  code *local_78;
  void *pvStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
  local_78 = (code *)*plVar20;
  pvStack_70 = (void *)CONCAT44(pvStack_70._4_4_,(int)plVar20[1]);
  local_a0 = param_1;
  local_88 = param_2;
  FUN_1481bce32(&local_78);
  iVar16 = *(int *)(param_1 + 0x120);
  iVar24 = iVar16 - param_2;
  if (param_3 != -1) {
    iVar24 = param_3;
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar24);
  local_b8 = (float *)0x0;
  uStack_b0 = 0;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  if (iVar16 != 0) {
    FUN_1481c5304(&local_b8);
  }
  local_f0 = 0;
  if (local_a0 != 0) {
    iVar16 = 0;
    local_f0 = 0;
    do {
      if ((*(uint *)(local_a0 + 0x120) <= local_88) || ((int)local_e0 <= iVar16)) break;
      local_f4 = iVar16;
      FUN_1481ba61e(&local_a0);
      FUN_140056680(&local_c8,&DAT_14a1e3d48);
      fVar28 = 0.0;
      if ((longlong)(int)uStack_90 != 0) {
        lVar19 = (longlong)(int)uStack_90 << 5;
        plVar20 = local_98;
        do {
          FUN_1481ba76a(plVar20,&local_d8);
          iVar16 = (int)local_d0;
          iVar18 = ((int)local_d0 == 0) + 3;
          local_78 = local_d8;
          local_d8 = (code *)0x0;
          iVar24 = local_d0._4_4_;
          pvStack_70 = local_d0;
          local_d0 = (void *)0x0;
          iVar17 = iVar18 + iVar16;
          if (iVar17 < iVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar18);
          }
          if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar17);
          }
          if (iVar24 < iVar17) {
            FUN_1446f8c06(&local_78);
          }
          FUN_1400020e8(&local_78,&DAT_149e895f6,3);
          iVar16 = (int)pvStack_70 + -1;
          if ((int)pvStack_70 == 0) {
            iVar16 = 0;
          }
          FUN_1400020e8(&local_c8,local_78,iVar16);
          if (local_78 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_d8 != (code *)0x0) {
            FUN_1400020a8();
          }
          if ((*param_5 != 0) && (*plVar20 == *param_5)) {
            plVar9 = plVar20 + 1;
            plVar8 = (longlong *)FUN_144741050(plVar9);
            lVar12 = DAT_14cb420f0;
            if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(DAT_14cb420f0);
            }
            if (((*plVar8 == lVar12) && ((short)plVar8[1] == (short)DAT_14cb420f8)) &&
               (*(char *)((longlong)plVar8 + 10) == DAT_14cb420f8._2_1_)) {
              plVar9 = (longlong *)FUN_144741050(plVar9);
              uVar6 = *(ushort *)((longlong)plVar9 + 0xc);
              if (uVar6 == 0xffff) {
                lVar12 = *plVar9;
                if (lVar12 == 0) {
LAB_143a779b8:
                  uVar6 = 0;
                }
                else {
                  lVar11 = DAT_14cb420c0;
                  if ((short)plVar9[1] == 3) goto LAB_143a778f9;
                  if ((short)plVar9[1] == 1) goto LAB_143a779b8;
                  if (DAT_14c948f88 == 0) {
                    local_80 = (code *)&DAT_1427db2a2;
                    lVar12 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                    DAT_14c948f88 = lVar12;
                    FUN_1446f470e(&local_d8,L"Struct",1);
                    local_110 = &local_80;
                    local_118 = &LAB_146891313;
                    local_120 = FUN_146272f63;
                    local_130 = L"Engine";
                    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,199);
                    local_138 = 8;
                    local_140 = 0x10000020;
                    local_148._0_4_ = 8;
                    FUN_14574b4b2(lVar12);
                    DAT_14c948f88 = lVar12;
                    if (DAT_14c927740 == 0) {
                      local_78 = FUN_1449e2820;
                      local_100 = FUN_14081d0ea;
                      local_108 = FUN_14081d0ea;
                      local_118 = &LAB_146856450;
                      local_120 = FUN_1427b121c;
                      local_128 = L"Engine";
                      local_130 = (wchar_t *)0x0;
                      local_138 = CONCAT44(local_138._4_4_,0x10000021);
                      local_140 = 8;
                      local_148._0_4_ = 0x28;
                      local_110 = &local_78;
                      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                    }
                    lVar11 = DAT_14c948f88;
                    lVar12 = DAT_14c927740;
                    uVar13 = FUN_1400163b0();
                    local_148 = L"Struct";
                    FUN_14574b446(uVar13,lVar11,lVar12,L"/Script/CoreUObject");
                    lVar12 = *plVar9;
                    if (lVar12 != 0) goto LAB_143a778c1;
LAB_143a77b57:
                    lVar11 = 0;
                  }
                  else {
LAB_143a778c1:
                    if (DAT_14c948f88 == 0) goto LAB_143a77b57;
                    lVar3 = *(longlong *)(lVar12 + 0x10);
                    lVar11 = 0;
                    if (lVar3 != 0) {
                      if (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14c948f88 + 0x38))
                      goto LAB_143a77b57;
                      lVar11 = lVar12;
                      if (*(longlong *)
                           (*(longlong *)(lVar3 + 0x30) +
                           (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) != DAT_14c948f88 + 0x30) {
                        lVar11 = 0;
                      }
                    }
                  }
LAB_143a778f9:
                  sVar5 = (short)*(undefined4 *)(lVar11 + 0x5c);
                  uVar6 = -sVar5 & ((short)*(undefined4 *)(lVar11 + 0x58) + sVar5) - 1U;
                }
                *(ushort *)((longlong)plVar9 + 0xc) = uVar6;
              }
              pvVar10 = memcpy(&local_78,(void *)plVar20[2],(longlong)(short)uVar6);
              local_f0 = CONCAT71((int7)((ulonglong)pvVar10 >> 8),1);
              fVar28 = local_78._0_4_;
            }
            else {
              plVar8 = (longlong *)FUN_144741050(plVar9);
              lVar12 = DAT_14cb420d0;
              if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(DAT_14cb420d0);
              }
              if (((*plVar8 != lVar12) || ((short)plVar8[1] != DAT_14cb420d8)) ||
                 (*(char *)((longlong)plVar8 + 10) != DAT_14cb420da)) goto LAB_143a77879;
              plVar9 = (longlong *)FUN_144741050(plVar9);
              uVar6 = *(ushort *)((longlong)plVar9 + 0xc);
              if (uVar6 == 0xffff) {
                lVar12 = *plVar9;
                if (lVar12 == 0) {
LAB_143a77b5e:
                  uVar6 = 0;
                }
                else {
                  lVar11 = DAT_14cb420c0;
                  if ((short)plVar9[1] == 3) goto LAB_143a7797f;
                  if ((short)plVar9[1] == 1) goto LAB_143a77b5e;
                  if (DAT_14c948f88 == 0) {
                    local_80 = (code *)&DAT_1427db2a2;
                    lVar12 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                    DAT_14c948f88 = lVar12;
                    FUN_1446f470e(&local_d8,L"Struct",1);
                    local_110 = &local_80;
                    local_118 = &LAB_146891313;
                    local_120 = FUN_146272f63;
                    local_130 = L"Engine";
                    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,199);
                    local_138 = 8;
                    local_140 = 0x10000020;
                    local_148._0_4_ = 8;
                    FUN_14574b4b2(lVar12);
                    DAT_14c948f88 = lVar12;
                    if (DAT_14c927740 == 0) {
                      local_78 = FUN_1449e2820;
                      local_100 = FUN_14081d0ea;
                      local_108 = FUN_14081d0ea;
                      local_118 = &LAB_146856450;
                      local_120 = FUN_1427b121c;
                      local_128 = L"Engine";
                      local_130 = (wchar_t *)0x0;
                      local_138 = CONCAT44(local_138._4_4_,0x10000021);
                      local_140 = 8;
                      local_148._0_4_ = 0x28;
                      local_110 = &local_78;
                      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                    }
                    lVar11 = DAT_14c948f88;
                    lVar12 = DAT_14c927740;
                    uVar13 = FUN_1400163b0();
                    local_148 = L"Struct";
                    FUN_14574b446(uVar13,lVar11,lVar12,L"/Script/CoreUObject");
                    lVar12 = *plVar9;
                    if (lVar12 != 0) goto LAB_143a77947;
LAB_143a77cfd:
                    lVar11 = 0;
                  }
                  else {
LAB_143a77947:
                    if (DAT_14c948f88 == 0) goto LAB_143a77cfd;
                    lVar3 = *(longlong *)(lVar12 + 0x10);
                    lVar11 = 0;
                    if (lVar3 != 0) {
                      if (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14c948f88 + 0x38))
                      goto LAB_143a77cfd;
                      lVar11 = lVar12;
                      if (*(longlong *)
                           (*(longlong *)(lVar3 + 0x30) +
                           (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) != DAT_14c948f88 + 0x30) {
                        lVar11 = 0;
                      }
                    }
                  }
LAB_143a7797f:
                  sVar5 = (short)*(undefined4 *)(lVar11 + 0x5c);
                  uVar6 = -sVar5 & ((short)*(undefined4 *)(lVar11 + 0x58) + sVar5) - 1U;
                }
                *(ushort *)((longlong)plVar9 + 0xc) = uVar6;
              }
              pvVar10 = memcpy(&local_78,(void *)plVar20[2],(longlong)(short)uVar6);
              local_f0 = CONCAT71((int7)((ulonglong)pvVar10 >> 8),1);
              fVar28 = (float)(int)local_78._0_4_;
            }
          }
LAB_143a77879:
          plVar20 = plVar20 + 4;
          lVar19 = lVar19 + -0x20;
        } while (lVar19 != 0);
      }
      pvVar10 = local_c8;
      local_78 = (code *)CONCAT44(local_78._4_4_,fVar28);
      pvStack_70 = (void *)0x0;
      lVar19 = (longlong)(int)local_c0;
      local_68 = CONCAT44(local_68._4_4_,local_c0);
      if (lVar19 == 0) {
        local_68 = (ulonglong)local_c0;
      }
      else {
        FUN_1446dd670(&pvStack_70,local_c0,0);
        memcpy(pvStack_70,pvVar10,lVar19 * 2);
      }
      uVar15 = uStack_b0;
      iVar16 = local_f4;
      lVar19 = (longlong)(int)uStack_b0;
      uVar7 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
      if (uStack_b0._4_4_ < uVar7) {
        FUN_1481c536c(&local_b8,uVar15 & 0xffffffff);
      }
      local_b8[lVar19 * 6] = local_78._0_4_;
      (local_b8 + lVar19 * 6 + 2)[0] = 0.0;
      (local_b8 + lVar19 * 6 + 2)[1] = 0.0;
      *(void **)(local_b8 + lVar19 * 6 + 2) = pvStack_70;
      local_b8[lVar19 * 6 + 4] = (float)local_68;
      local_b8[lVar19 * 6 + 5] = local_68._4_4_;
      local_68 = 0;
      pvStack_70 = (void *)0x0;
      local_88 = local_88 + 1;
      if (local_c8 != (void *)0x0) {
        FUN_1400020a8();
      }
      iVar16 = iVar16 + 1;
    } while (local_a0 != 0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3dba0) && (FUN_144b3d300(&DAT_14cb3dba0), DAT_14cb3dba0 == -1)) {
    DAT_14cb3db90 = 0;
    _DAT_14cb3db98 = 0;
    atexit((_func_5014 *)&LAB_143a7a5c6);
    _Init_thread_footer(&DAT_14cb3dba0);
  }
  if (DAT_14cb3db98 < 2) {
    iVar16 = 0x32;
    do {
      FUN_140002184(&DAT_14cb3db90,0x3d);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  uVar15 = uStack_b0 & 0xffffffff;
  local_e8 = local_b8;
  if (((byte)local_f0 & 0 < (int)uStack_b0) == 1) {
    uVar14 = 0;
    pfVar21 = local_b8;
    do {
      if ((uVar14 + 1 < uVar15) && (pfVar21[6] <= *pfVar21 && *pfVar21 != pfVar21[6])) {
        local_68 = *(ulonglong *)(pfVar21 + 4);
        local_78 = *(code **)pfVar21;
        pvStack_70 = *(void **)(pfVar21 + 2);
        *(undefined8 *)(pfVar21 + 4) = *(undefined8 *)(pfVar21 + 10);
        *(undefined8 *)pfVar21 = *(undefined8 *)(pfVar21 + 6);
        *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar21 + 8);
        *(ulonglong *)(pfVar21 + 10) = local_68;
        *(code **)(pfVar21 + 6) = local_78;
        *(void **)(pfVar21 + 8) = pvStack_70;
      }
      uVar14 = uVar14 + 2;
      pfVar21 = pfVar21 + 0xc;
    } while (uVar14 < uVar15);
    if (2 < (int)uStack_b0) {
      iVar16 = 2;
      do {
        local_f4 = iVar16 * 2;
        local_f0 = (longlong)local_f4;
        lVar19 = 0;
        do {
          iVar24 = (int)uStack_b0 - (int)lVar19;
          if (local_f4 <= iVar24) {
            iVar24 = local_f4;
          }
          if (iVar16 < iVar24 && 0 < iVar16) {
            iVar17 = 0;
            iVar18 = iVar16;
            while( true ) {
              pfVar21 = local_b8 + lVar19 * 6 + (longlong)iVar18 * 6;
              iVar22 = 0;
              if (iVar18 - iVar17 != 0 && iVar17 <= iVar18) {
                iVar22 = 0;
                uVar7 = iVar18 - iVar17;
                do {
                  iVar27 = iVar22 + (uVar7 >> 1);
                  if (local_b8[lVar19 * 6 + (longlong)iVar17 * 6 + (longlong)iVar27 * 6] <= *pfVar21
                     ) {
                    iVar22 = iVar27 + (uVar7 & 1);
                  }
                  bVar4 = 1 < uVar7;
                  uVar7 = uVar7 >> 1;
                } while (bVar4);
              }
              iVar22 = iVar22 + iVar17;
              iVar17 = iVar18 - iVar22;
              if (iVar17 == 0 || iVar18 < iVar22) break;
              if (iVar24 - iVar18 == 0 || iVar24 < iVar18) {
                iVar27 = 0;
              }
              else {
                pfVar25 = local_b8 + lVar19 * 6 + (longlong)iVar22 * 6;
                iVar27 = 0;
                uVar7 = iVar24 - iVar18;
                do {
                  uVar2 = (uVar7 >> 1) + iVar27;
                  if (pfVar21[(ulonglong)uVar2 * 6] <= *pfVar25 &&
                      *pfVar25 != pfVar21[(ulonglong)uVar2 * 6]) {
                    iVar27 = uVar2 + (uVar7 & 1);
                  }
                  bVar4 = 1 < uVar7;
                  uVar7 = uVar7 >> 1;
                } while (bVar4);
                iVar18 = iVar18 + iVar27;
                if (0 < iVar27) {
                  pfVar21 = pfVar25 + (longlong)(iVar18 - iVar22) * 6;
                  pfVar23 = pfVar25 + (longlong)iVar17 * 6;
                  pfVar26 = pfVar25 + (longlong)iVar17 * 6;
                  do {
                    while( true ) {
                      pfVar1 = pfVar23 + 6;
                      local_68 = *(ulonglong *)(pfVar25 + 4);
                      local_78 = *(code **)pfVar25;
                      pvStack_70 = *(void **)(pfVar25 + 2);
                      *(undefined8 *)(pfVar25 + 4) = *(undefined8 *)(pfVar23 + 4);
                      uVar13 = *(undefined8 *)(pfVar23 + 2);
                      *(undefined8 *)pfVar25 = *(undefined8 *)pfVar23;
                      *(undefined8 *)(pfVar25 + 2) = uVar13;
                      pfVar25 = pfVar25 + 6;
                      *(ulonglong *)(pfVar23 + 4) = local_68;
                      *(code **)pfVar23 = local_78;
                      *(void **)(pfVar23 + 2) = pvStack_70;
                      if (pfVar1 == pfVar21) break;
                      pfVar23 = pfVar1;
                      if (pfVar25 == pfVar26) {
                        pfVar26 = pfVar1;
                      }
                    }
                    pfVar23 = pfVar26;
                  } while (pfVar25 != pfVar26);
                }
              }
              if ((iVar24 <= iVar18) || (iVar17 = iVar22 + iVar27 + 1, iVar18 <= iVar17)) break;
            }
          }
          lVar19 = lVar19 + local_f0;
        } while (lVar19 < (longlong)uVar15);
        iVar16 = local_f4;
        local_e0 = uVar15;
      } while (local_f4 < (int)uStack_b0);
    }
  }
  FUN_1481c52d5(local_b8);
  if (local_b8 != (float *)0x0) {
    FUN_1400020a8();
  }
  FUN_1406fc1fc(local_98,uStack_90 & 0xffffffff);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a7817e FUN_143a7817e body=4580 status=ok
// SIG undefined FUN_143a7817e(void)

void FUN_143a7817e(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined2 *param_5)

{
  uint *puVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_1a8 [32];
  uint local_188;
  undefined1 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined2 *local_158;
  undefined2 *local_150;
  ulonglong *local_148;
  char local_140;
  undefined2 local_138 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(int *)(param_1 + 0x124) = param_3;
  uVar9 = param_3 + 0x3fU >> 6;
  iVar8 = uVar9 * 0x100;
  *(int *)(param_1 + 0x128) = iVar8;
  *(int *)(param_1 + 300) = iVar8;
  iVar10 = uVar9 << 7;
  *(int *)(param_1 + 0x130) = iVar10;
  if (param_3 + 0x3fU < 0x40) {
    lVar4 = *(longlong *)(param_1 + 0x60);
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar9 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar9 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar9 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar9 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar13 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar13) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar13 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar13) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x68);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x68) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar9 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar4 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar4;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x70);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x70) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar9 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar4 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar4;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x90);
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar9 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar9 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar9 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar9 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar13 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar13) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar13 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar13) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x98);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x98) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar9 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar4 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar4;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0xa0);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0xa0) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar9 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar4 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar4;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0xf0);
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar9 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar9 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar9 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar9 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar13 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar13) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar13 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar13) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0xf8);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0xf8) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar9 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar4 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar4;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x100);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x100) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar9 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar4 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar4;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0xc0);
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar9 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar9 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar9 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar9 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar4;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar6;
              LOCK();
              bVar13 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar3;
              if (bVar13) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar13 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar3;
              if (bVar13) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 200);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 200) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar9 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar4 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar4;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0xd0);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0xd0) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar9 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar4 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar4;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar7 = *(longlong *)(lVar4 + 8);
    uVar9 = -DAT_14c7628b0;
    uVar12 = (iVar8 * *(int *)(lVar7 + 0x2c) + DAT_14c7628b0) - 1U & uVar9;
    if ((*(int *)(param_1 + 0x78) < (int)uVar12) ||
       ((int)(DAT_14c7628b4 * uVar12) < *(int *)(param_1 + 0x78))) {
      lVar4 = *(longlong *)(param_1 + 0x60);
      if (lVar4 != 0) {
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar9 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar4 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar4;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (lVar4 != 0) {
          *(undefined8 *)(param_1 + 0x68) = 0;
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar9 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar9 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar9 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar9 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar4 + 0xd);
              plVar3 = (longlong *)FUN_14001cc68(0x10,8);
              plVar3[1] = lVar4;
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar3 = (longlong)plVar6;
                  LOCK();
                  bVar13 = plVar6 != DAT_14ca843c0;
                  plVar5 = plVar3;
                  if (bVar13) {
                    plVar6 = DAT_14ca843c0;
                    plVar5 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar5;
                  UNLOCK();
                } while (bVar13);
              }
              else {
                do {
                  *plVar3 = (longlong)plVar5;
                  LOCK();
                  bVar13 = plVar5 != DAT_14ca843c8;
                  plVar6 = plVar3;
                  if (bVar13) {
                    plVar5 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar13);
              }
            }
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x70);
        if (lVar4 != 0) {
          *(undefined8 *)(param_1 + 0x70) = 0;
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar9 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar9 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar9 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar9 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar4 + 0xd);
              plVar3 = (longlong *)FUN_14001cc68(0x10,8);
              plVar3[1] = lVar4;
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar3 = (longlong)plVar6;
                  LOCK();
                  bVar13 = plVar6 != DAT_14ca843c0;
                  plVar5 = plVar3;
                  if (bVar13) {
                    plVar6 = DAT_14ca843c0;
                    plVar5 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar5;
                  UNLOCK();
                } while (bVar13);
              }
              else {
                do {
                  *plVar3 = (longlong)plVar5;
                  LOCK();
                  bVar13 = plVar5 != DAT_14ca843c8;
                  plVar6 = plVar3;
                  if (bVar13) {
                    plVar5 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar13);
              }
            }
          }
        }
      }
      if (((0 < DAT_14cb3db28) && (DAT_14cb3db28 < (int)uVar12)) &&
         ((int)DAT_14cb3db40 < (int)uVar12)) {
        DAT_14cb3db40 = uVar12;
      }
      local_188 = (int)uVar12 >> 2;
      local_168 = 0;
      local_170 = 0x21;
      local_178 = 0x70;
      local_180 = 0xd;
      FUN_1407fe5c2((longlong *)(param_1 + 0x60),param_2,L"GPUBufferFloat",4);
      iVar10 = *(int *)(param_1 + 0x130);
      lVar4 = *(longlong *)(param_1 + 0x10);
      lVar7 = *(longlong *)(lVar4 + 8);
      uVar9 = -DAT_14c7628b0;
    }
    iVar8 = DAT_14c7628b0 + -1;
    uVar12 = iVar10 * *(int *)(lVar7 + 0x34) + iVar8 & uVar9;
    if ((*(int *)(param_1 + 0x108) < (int)uVar12) ||
       ((int)(DAT_14c7628b4 * uVar12) < *(int *)(param_1 + 0x108))) {
      lVar4 = *(longlong *)(param_1 + 0xf0);
      if (lVar4 != 0) {
        *(undefined4 *)(param_1 + 0x108) = 0;
        *(undefined8 *)(param_1 + 0xf0) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar9 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar4 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar4;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        lVar4 = *(longlong *)(param_1 + 0xf8);
        if (lVar4 != 0) {
          *(undefined8 *)(param_1 + 0xf8) = 0;
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar9 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar9 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar9 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar9 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar4 + 0xd);
              plVar3 = (longlong *)FUN_14001cc68(0x10,8);
              plVar3[1] = lVar4;
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar3 = (longlong)plVar6;
                  LOCK();
                  bVar13 = plVar6 != DAT_14ca843c0;
                  plVar5 = plVar3;
                  if (bVar13) {
                    plVar6 = DAT_14ca843c0;
                    plVar5 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar5;
                  UNLOCK();
                } while (bVar13);
              }
              else {
                do {
                  *plVar3 = (longlong)plVar5;
                  LOCK();
                  bVar13 = plVar5 != DAT_14ca843c8;
                  plVar6 = plVar3;
                  if (bVar13) {
                    plVar5 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar13);
              }
            }
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x100);
        if (lVar4 != 0) {
          *(undefined8 *)(param_1 + 0x100) = 0;
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar9 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar9 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar9 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar9 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar4 + 0xd);
              plVar3 = (longlong *)FUN_14001cc68(0x10,8);
              plVar3[1] = lVar4;
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar3 = (longlong)plVar6;
                  LOCK();
                  bVar13 = plVar6 != DAT_14ca843c0;
                  plVar5 = plVar3;
                  if (bVar13) {
                    plVar6 = DAT_14ca843c0;
                    plVar5 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar5;
                  UNLOCK();
                } while (bVar13);
              }
              else {
                do {
                  *plVar3 = (longlong)plVar5;
                  LOCK();
                  bVar13 = plVar5 != DAT_14ca843c8;
                  plVar6 = plVar3;
                  if (bVar13) {
                    plVar5 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar13);
              }
            }
          }
        }
      }
      if (((0 < DAT_14cb3db28) && (DAT_14cb3db28 < (int)uVar12)) &&
         ((int)DAT_14cb3db40 < (int)uVar12)) {
        DAT_14cb3db40 = uVar12;
      }
      local_188 = (int)uVar12 >> 1;
      local_168 = 0;
      local_170 = 0x21;
      local_178 = 0x70;
      local_180 = 0x15;
      FUN_1407fe5c2((longlong *)(param_1 + 0xf0),param_2,L"GPUBufferHalf",2);
      lVar4 = *(longlong *)(param_1 + 0x10);
      lVar7 = *(longlong *)(lVar4 + 8);
      iVar8 = DAT_14c7628b0 + -1;
      uVar9 = -DAT_14c7628b0;
    }
    uVar9 = *(int *)(lVar7 + 0x30) * *(int *)(param_1 + 300) + iVar8 & uVar9;
    if ((*(int *)(param_1 + 0xa8) < (int)uVar9) ||
       ((int)(DAT_14c7628b4 * uVar9) < *(int *)(param_1 + 0xa8))) {
      lVar4 = *(longlong *)(param_1 + 0x90);
      if (lVar4 != 0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar12 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar12 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar12 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar12 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar4 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar4;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x98);
        if (lVar4 != 0) {
          *(undefined8 *)(param_1 + 0x98) = 0;
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar12 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar12 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar12 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar12 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar4 + 0xd);
              plVar3 = (longlong *)FUN_14001cc68(0x10,8);
              plVar3[1] = lVar4;
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar3 = (longlong)plVar6;
                  LOCK();
                  bVar13 = plVar6 != DAT_14ca843c0;
                  plVar5 = plVar3;
                  if (bVar13) {
                    plVar6 = DAT_14ca843c0;
                    plVar5 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar5;
                  UNLOCK();
                } while (bVar13);
              }
              else {
                do {
                  *plVar3 = (longlong)plVar5;
                  LOCK();
                  bVar13 = plVar5 != DAT_14ca843c8;
                  plVar6 = plVar3;
                  if (bVar13) {
                    plVar5 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar13);
              }
            }
          }
        }
        lVar4 = *(longlong *)(param_1 + 0xa0);
        if (lVar4 != 0) {
          *(undefined8 *)(param_1 + 0xa0) = 0;
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar12 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar12 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar12 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar12 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar4 + 0xd);
              plVar3 = (longlong *)FUN_14001cc68(0x10,8);
              plVar3[1] = lVar4;
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar3 = (longlong)plVar6;
                  LOCK();
                  bVar13 = plVar6 != DAT_14ca843c0;
                  plVar5 = plVar3;
                  if (bVar13) {
                    plVar6 = DAT_14ca843c0;
                    plVar5 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar5;
                  UNLOCK();
                } while (bVar13);
              }
              else {
                do {
                  *plVar3 = (longlong)plVar5;
                  LOCK();
                  bVar13 = plVar5 != DAT_14ca843c8;
                  plVar6 = plVar3;
                  if (bVar13) {
                    plVar5 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar13);
              }
            }
          }
        }
      }
      if (((0 < DAT_14cb3db28) && (DAT_14cb3db28 < (int)uVar9)) && ((int)DAT_14cb3db40 < (int)uVar9)
         ) {
        DAT_14cb3db40 = uVar9;
      }
      local_188 = (int)uVar9 >> 2;
      local_168 = 0;
      local_170 = 0x21;
      local_178 = 0x70;
      local_180 = 0x1d;
      FUN_1407fe5c2((longlong *)(param_1 + 0x90),param_2,L"GPUBufferInt",4);
      lVar4 = *(longlong *)(param_1 + 0x10);
      lVar7 = *(longlong *)(lVar4 + 8);
    }
    if ((*(byte *)(lVar7 + 0x38) & 1) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xc0);
      if (lVar7 == 0) {
        uVar9 = *(uint *)(lVar4 + 0x70);
        if (uVar9 == 0) goto LAB_143a78838;
      }
      else {
        uVar9 = *(uint *)(lVar4 + 0x70);
        if (uVar9 <= *(uint *)(lVar7 + 0x20) >> 2) goto LAB_143a78838;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        LOCK();
        puVar1 = (uint *)(lVar7 + 8);
        uVar12 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar12 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar7 + 8);
          LOCK();
          uVar12 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar12 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar7 + 0xd);
            plVar3 = (longlong *)FUN_14001cc68(0x10,8);
            plVar3[1] = lVar7;
            plVar6 = DAT_14ca843c0;
            plVar5 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar3 = (longlong)plVar6;
                LOCK();
                bVar13 = plVar6 != DAT_14ca843c0;
                plVar5 = plVar3;
                if (bVar13) {
                  plVar6 = DAT_14ca843c0;
                  plVar5 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar5;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar3 = (longlong)plVar5;
                LOCK();
                bVar13 = plVar5 != DAT_14ca843c8;
                plVar6 = plVar3;
                if (bVar13) {
                  plVar5 = DAT_14ca843c8;
                  plVar6 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar6;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        lVar4 = *(longlong *)(param_1 + 200);
        if (lVar4 != 0) {
          *(undefined8 *)(param_1 + 200) = 0;
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar12 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar12 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar12 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar12 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar4 + 0xd);
              plVar3 = (longlong *)FUN_14001cc68(0x10,8);
              plVar3[1] = lVar4;
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar3 = (longlong)plVar6;
                  LOCK();
                  bVar13 = plVar6 != DAT_14ca843c0;
                  plVar5 = plVar3;
                  if (bVar13) {
                    plVar6 = DAT_14ca843c0;
                    plVar5 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar5;
                  UNLOCK();
                } while (bVar13);
              }
              else {
                do {
                  *plVar3 = (longlong)plVar5;
                  LOCK();
                  bVar13 = plVar5 != DAT_14ca843c8;
                  plVar6 = plVar3;
                  if (bVar13) {
                    plVar5 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar13);
              }
            }
          }
        }
        lVar4 = *(longlong *)(param_1 + 0xd0);
        if (lVar4 != 0) {
          *(undefined8 *)(param_1 + 0xd0) = 0;
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar12 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar12 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar12 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar12 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar4 + 0xd);
              plVar3 = (longlong *)FUN_14001cc68(0x10,8);
              plVar3[1] = lVar4;
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar3 = (longlong)plVar6;
                  LOCK();
                  bVar13 = plVar6 != DAT_14ca843c0;
                  plVar5 = plVar3;
                  if (bVar13) {
                    plVar6 = DAT_14ca843c0;
                    plVar5 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar5;
                  UNLOCK();
                } while (bVar13);
              }
              else {
                do {
                  *plVar3 = (longlong)plVar5;
                  LOCK();
                  bVar13 = plVar5 != DAT_14ca843c8;
                  plVar6 = plVar3;
                  if (bVar13) {
                    plVar5 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar13);
              }
            }
          }
        }
      }
      if (((0 < DAT_14cb3db28) && (uVar12 = uVar9 * 4, DAT_14cb3db28 < (int)uVar12)) &&
         ((int)DAT_14cb3db40 < (int)uVar12)) {
        DAT_14cb3db40 = uVar12;
      }
      local_158 = local_138;
      local_140 = '\0';
      local_148 = &local_38;
      puVar11 = &DAT_149dfb77a;
      if (param_5 != (undefined2 *)0x0) {
        puVar11 = param_5;
      }
      local_150 = local_158;
      FUN_140212e80(&local_158,L"NiagaraIDToIndexTable_%s_%p",puVar11,param_1);
      *local_150 = 0;
      local_168 = 0;
      local_170 = 0x21;
      local_178 = 0x10;
      local_180 = 0x1d;
      local_188 = uVar9;
      FUN_1407fe5c2(param_1 + 0xc0,param_2,local_158,4);
      if (local_140 == '\x01') {
        FUN_1400020a8(local_158);
      }
    }
  }
LAB_143a78838:
  if ((local_38 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a79364 FUN_143a79364 body=1874 status=ok
// SIG undefined FUN_143a79364(void)

void FUN_143a79364(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  lVar4 = *(longlong *)(param_1 + 0x60);
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
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
    lVar4 = *(longlong *)(param_1 + 0x68);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
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
    lVar4 = *(longlong *)(param_1 + 0x70);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
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
  }
  lVar4 = *(longlong *)(param_1 + 0x90);
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
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
    lVar4 = *(longlong *)(param_1 + 0x98);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x98) = 0;
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
    lVar4 = *(longlong *)(param_1 + 0xa0);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
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
  }
  lVar4 = *(longlong *)(param_1 + 0xf0);
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
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
    lVar4 = *(longlong *)(param_1 + 0xf8);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
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
      *(undefined8 *)(param_1 + 0x100) = 0;
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
  }
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
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
    lVar4 = *(longlong *)(param_1 + 200);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 200) = 0;
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
    lVar4 = *(longlong *)(param_1 + 0xd0);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
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
  }
  return;
}



// FUNCTION 143a79ab6 FUN_143a79ab6 body=2831 status=ok
// SIG undefined FUN_143a79ab6(void)

void FUN_143a79ab6(longlong param_1,ulonglong *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  size_t sVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x5c) == -1) {
    FUN_14009337e(param_4,0,0);
    *(undefined4 *)(param_4 + 0x120) = 0;
    goto LAB_143a7a533;
  }
  local_c8 = param_4;
  (**(code **)(*DAT_14ca83900 + 0xe0))(DAT_14ca83900,&local_98);
  local_70 = *(undefined8 *)(param_3 + 0x58);
  local_80 = -1;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x80000000f0;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  lVar9 = local_98;
  iVar2 = *(int *)(param_1 + 0x5c);
  uVar6 = *(undefined8 *)(param_3 + 0x58);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar7 + 5;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x30);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar7 + 5;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a338558;
  puVar7[2] = uVar6;
  puVar7[3] = lVar9;
  *(int *)(puVar7 + 4) = iVar2 << 2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 4;
  local_70 = *(undefined8 *)(param_3 + 0x58);
  local_80 = -1;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0xf000000080;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  lVar9 = 0;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  if (*(int *)(param_1 + 0x78) != 0) {
    (**(code **)(*DAT_14ca83900 + 0xe0))(DAT_14ca83900,&local_80);
    lVar9 = local_80;
    local_70 = *(undefined8 *)(param_1 + 0x60);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 2;
    local_64 = 0x8000000070;
    local_5c = 0;
    local_50 = 0;
    local_88 = 1;
    local_90 = &local_80;
    FUN_144760590(param_2,&local_90,0);
    uVar3 = *(undefined4 *)(param_1 + 0x78);
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar7 + 5;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x30);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar7 + 5;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar7;
    param_2[6] = (ulonglong)(puVar7 + 1);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a338558;
    puVar7[2] = uVar6;
    puVar7[3] = lVar9;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar3;
    local_70 = *(undefined8 *)(param_1 + 0x60);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 2;
    local_64 = 0x7000000080;
    local_5c = 0;
    local_50 = 0;
    local_88 = 1;
    local_90 = &local_80;
    FUN_144760590(param_2,&local_90,0);
  }
  if (*(int *)(param_1 + 0x108) == 0) {
    lVar15 = 0;
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0xe0))(DAT_14ca83900,&local_80);
    lVar15 = local_80;
    local_70 = *(undefined8 *)(param_1 + 0xf0);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 2;
    local_64 = 0x8000000070;
    local_5c = 0;
    local_50 = 0;
    local_88 = 1;
    local_90 = &local_80;
    FUN_144760590(param_2,&local_90,0);
    uVar3 = *(undefined4 *)(param_1 + 0x108);
    uVar6 = *(undefined8 *)(param_1 + 0xf0);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar7 + 5;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x30);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar7 + 5;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar7;
    param_2[6] = (ulonglong)(puVar7 + 1);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a338558;
    puVar7[2] = uVar6;
    puVar7[3] = lVar15;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar3;
    local_70 = *(undefined8 *)(param_1 + 0xf0);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 2;
    local_64 = 0x7000000080;
    local_5c = 0;
    local_50 = 0;
    local_88 = 1;
    local_90 = &local_80;
    FUN_144760590(param_2,&local_90,0);
  }
  local_c0 = lVar15;
  local_b8 = param_1;
  local_b0 = lVar9;
  if (*(int *)(param_1 + 0xa8) == 0) {
    lVar9 = 0;
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0xe0))(DAT_14ca83900,&local_80);
    lVar9 = local_80;
    local_70 = *(undefined8 *)(param_1 + 0x90);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 2;
    local_64 = 0x8000000070;
    local_5c = 0;
    local_50 = 0;
    local_88 = 1;
    local_90 = &local_80;
    FUN_144760590(param_2,&local_90,0);
    uVar3 = *(undefined4 *)(param_1 + 0xa8);
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar7 + 5;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x30);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar7 + 5;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar7;
    param_2[6] = (ulonglong)(puVar7 + 1);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a338558;
    puVar7[2] = uVar6;
    puVar7[3] = lVar9;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar3;
    local_70 = *(undefined8 *)(local_b8 + 0x90);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 2;
    local_64 = 0x7000000080;
    local_5c = 0;
    local_50 = 0;
    local_88 = 1;
    local_90 = &local_80;
    FUN_144760590(param_2,&local_90,0);
  }
  lVar15 = local_c0;
  local_80 = 0;
  local_78 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_80,5);
  (**(code **)(*DAT_14ca83900 + 0x370))();
  local_80 = 0;
  local_78 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_80,5);
  (**(code **)(*DAT_14ca83900 + 0x370))();
  local_d8 = 0;
  local_d0 = 4;
  puVar8 = (uint *)(**(code **)(*DAT_14ca83900 + 0xf8))(DAT_14ca83900,&DAT_14ca85100,local_98,0);
  uVar4 = *puVar8;
  uVar14 = (ulonglong)uVar4;
  (**(code **)(*DAT_14ca83900 + 0x100))(DAT_14ca83900,&DAT_14ca85100,local_98);
  lVar16 = local_c8;
  FUN_14009337e(local_c8,uVar14,0);
  *(uint *)(lVar16 + 0x120) = uVar4;
  if (uVar14 == 0) {
LAB_143a7a3bd:
    lVar18 = local_b0;
    if (lVar9 != 0) {
      LOCK();
      puVar8 = (uint *)(lVar9 + 8);
      uVar4 = *puVar8;
      *puVar8 = *puVar8 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar8 = (uint *)(lVar9 + 8);
        LOCK();
        uVar4 = *puVar8;
        *puVar8 = *puVar8 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(lVar9 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar9;
          plVar12 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar21 = plVar12 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar21) {
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar21 = plVar11 != DAT_14ca843c8;
              plVar12 = plVar10;
              if (bVar21) {
                plVar11 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
  }
  else {
    lVar18 = local_b0;
    lVar20 = lVar15;
    local_a8 = uVar14;
    local_a0 = lVar9;
    if (local_b0 != 0) {
      local_d0 = *(undefined4 *)(local_b8 + 0x78);
      iVar2 = *(int *)(local_b8 + 0x128);
      local_d8 = 0;
      uVar14 = 0;
      lVar9 = (**(code **)(*DAT_14ca83900 + 0xf8))(DAT_14ca83900,&DAT_14ca85100,local_b0,0);
      lVar15 = (longlong)*(int *)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + 8) + 0x2c);
      if (0 < lVar15) {
        iVar5 = *(int *)(local_c8 + 0x128);
        lVar16 = *(longlong *)(local_c8 + 0x18);
        sVar19 = local_a8 * 4;
        uVar17 = 0;
        do {
          memcpy((void *)(uVar17 + lVar16),(void *)(uVar14 + lVar9),sVar19);
          uVar17 = (ulonglong)(uint)((int)uVar17 + iVar5);
          uVar14 = (ulonglong)(uint)((int)uVar14 + iVar2);
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      lVar18 = local_b0;
      (**(code **)(*DAT_14ca83900 + 0x100))(DAT_14ca83900,&DAT_14ca85100,local_b0);
      lVar16 = local_c8;
      lVar20 = local_c0;
    }
    lVar15 = 0;
    if (lVar20 != 0) {
      local_d0 = *(undefined4 *)(local_b8 + 0x108);
      iVar2 = *(int *)(local_b8 + 0x130);
      local_d8 = 0;
      uVar14 = 0;
      lVar9 = (**(code **)(*DAT_14ca83900 + 0xf8))(DAT_14ca83900,&DAT_14ca85100,lVar20,0);
      lVar15 = (longlong)*(int *)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + 8) + 0x34);
      if (0 < lVar15) {
        iVar5 = *(int *)(local_c8 + 0x130);
        lVar16 = *(longlong *)(local_c8 + 0x38);
        sVar19 = local_a8 * 2;
        uVar17 = 0;
        do {
          memcpy((void *)(uVar17 + lVar16),(void *)(uVar14 + lVar9),sVar19);
          uVar17 = (ulonglong)(uint)((int)uVar17 + iVar5);
          uVar14 = (ulonglong)(uint)((int)uVar14 + iVar2);
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      lVar15 = local_c0;
      (**(code **)(*DAT_14ca83900 + 0x100))(DAT_14ca83900,&DAT_14ca85100,local_c0);
      lVar16 = local_c8;
      lVar18 = local_b0;
    }
    if (local_a0 != 0) {
      local_d0 = *(undefined4 *)(local_b8 + 0xa8);
      iVar2 = *(int *)(local_b8 + 300);
      local_d8 = 0;
      uVar14 = 0;
      lVar9 = (**(code **)(*DAT_14ca83900 + 0xf8))(DAT_14ca83900,&DAT_14ca85100,local_a0,0);
      lVar15 = (longlong)*(int *)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + 8) + 0x30);
      if (0 < lVar15) {
        iVar5 = *(int *)(lVar16 + 300);
        lVar16 = *(longlong *)(lVar16 + 0x28);
        sVar19 = local_a8 << 2;
        uVar17 = 0;
        do {
          memcpy((void *)(uVar17 + lVar16),(void *)(uVar14 + lVar9),sVar19);
          uVar17 = (ulonglong)(uint)((int)uVar17 + iVar5);
          uVar14 = (ulonglong)(uint)((int)uVar14 + iVar2);
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      lVar9 = local_a0;
      (**(code **)(*DAT_14ca83900 + 0x100))(DAT_14ca83900,&DAT_14ca85100,local_a0);
      lVar15 = local_c0;
      goto LAB_143a7a3bd;
    }
  }
  if (lVar15 != 0) {
    LOCK();
    puVar8 = (uint *)(lVar15 + 8);
    uVar4 = *puVar8;
    *puVar8 = *puVar8 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar8 = (uint *)(lVar15 + 8);
      LOCK();
      uVar4 = *puVar8;
      *puVar8 = *puVar8 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(lVar15 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = lVar15;
        plVar12 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar12;
            LOCK();
            bVar21 = plVar12 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar21) {
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar21 = plVar11 != DAT_14ca843c8;
            plVar12 = plVar10;
            if (bVar21) {
              plVar11 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
  if (lVar18 != 0) {
    LOCK();
    puVar8 = (uint *)(lVar18 + 8);
    uVar4 = *puVar8;
    *puVar8 = *puVar8 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar8 = (uint *)(lVar18 + 8);
      LOCK();
      uVar4 = *puVar8;
      *puVar8 = *puVar8 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(lVar18 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = lVar18;
        plVar12 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar12;
            LOCK();
            bVar21 = plVar12 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar21) {
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar21 = plVar11 != DAT_14ca843c8;
            plVar12 = plVar10;
            if (bVar21) {
              plVar11 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
  if (local_98 != 0) {
    LOCK();
    puVar8 = (uint *)(local_98 + 8);
    uVar4 = *puVar8;
    *puVar8 = *puVar8 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar8 = (uint *)(local_98 + 8);
      LOCK();
      uVar4 = *puVar8;
      *puVar8 = *puVar8 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(local_98 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = local_98;
        plVar12 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar12;
            LOCK();
            bVar21 = plVar12 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar21) {
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar21 = plVar11 != DAT_14ca843c8;
            plVar12 = plVar10;
            if (bVar21) {
              plVar11 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
LAB_143a7a533:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a7a5d7 FUN_143a7a5d7 body=66 status=ok
// SIG undefined FUN_143a7a5d7(void)

void FUN_143a7a5d7(void)

{
  FUN_14017aeb5(DAT_14cb3db58,DAT_14cb3db60);
  if (DAT_14cb3db58 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb3db48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143a7a61a FUN_143a7a61a body=3347 status=ok
// SIG undefined FUN_143a7a61a(void)

void FUN_143a7a61a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  uint *puVar19;
  undefined **ppuVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 unaff_RBP;
  undefined8 *puVar23;
  longlong lVar24;
  undefined **ppuVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  uint local_8c;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)((longlong)param_1 + 0x14) =
       *(undefined8 *)
        (*(longlong *)(*(longlong *)(param_2[1] + 0x38) + 0xb8) +
        (longlong)(int)param_2[0x19] * 0x48);
  plVar1 = param_1 + 4;
  FUN_1402ed004(plVar1,*(undefined8 *)(param_2[2] + 8));
  ppuVar5 = (undefined **)param_2[3];
  if (ppuVar5 == (undefined **)0x0) {
    lVar12 = *(longlong *)(param_2[2] + 0x78);
    if (lVar12 == 0) {
      plVar21 = param_1 + 0x15;
      plVar18 = (longlong *)param_1[0x17];
      if ((longlong *)param_1[0x17] == (longlong *)0x0) {
        plVar18 = plVar21;
      }
      lVar12 = param_1[0x18];
      if ((longlong)(int)lVar12 != 0) {
        lVar24 = 0;
        do {
          puVar11 = *(undefined8 **)((longlong)plVar18 + lVar24);
          if (puVar11 != (undefined8 *)param_1[0x13]) {
            LOCK();
            bVar27 = *(int *)(puVar11 + 1) == 0;
            if (bVar27) {
              *(int *)(puVar11 + 1) = -1;
            }
            UNLOCK();
            if (bVar27) goto LAB_143a7a99f;
          }
          lVar24 = lVar24 + 8;
        } while ((longlong)(int)lVar12 * 8 != lVar24);
      }
      puVar11 = (undefined8 *)FUN_14001cc68(0x198,0x10);
      *(undefined4 *)(puVar11 + 1) = 0;
      *puVar11 = &PTR_FUN_14ade2d80;
      puVar11[2] = plVar1;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0xffffffff00000000;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      puVar11[0xf] = 0;
      *(undefined8 *)((longlong)puVar11 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x84) = 0;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0;
      puVar11[0x14] = 0;
      puVar11[0x15] = 0;
      *(undefined8 *)((longlong)puVar11 + 0xac) = 0;
      *(undefined8 *)((longlong)puVar11 + 0xb4) = 0;
      puVar11[0x18] = 0;
      puVar11[0x19] = 0;
      puVar11[0x1a] = 0;
      puVar11[0x1b] = 0;
      *(undefined8 *)((longlong)puVar11 + 0xdc) = 0;
      *(undefined8 *)((longlong)puVar11 + 0xe4) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x10c) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x114) = 0;
      puVar11[0x20] = 0;
      puVar11[0x21] = 0;
      puVar11[0x1e] = 0;
      puVar11[0x1f] = 0;
      *(undefined8 *)((longlong)puVar11 + 300) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x134) = 0;
      puVar11[0x24] = 0;
      puVar11[0x25] = 0;
      puVar11[0x28] = 0;
      puVar11[0x29] = 0;
      puVar11[0x2c] = 0;
      puVar11[0x2d] = 0;
      puVar11[0x2e] = 0;
      puVar11[0x2f] = 0;
      *(undefined4 *)(puVar11 + 0x30) = 1;
      puVar11[0x31] = 0;
      puVar11[0x32] = 0;
      iVar8 = (int)param_1[0x18];
      *(uint *)(param_1 + 0x18) = iVar8 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc4) < iVar8 + 1U) {
        FUN_140e69270(plVar21,iVar8);
      }
      if ((longlong *)param_1[0x17] != (longlong *)0x0) {
        plVar21 = (longlong *)param_1[0x17];
      }
      plVar21[iVar8] = (longlong)puVar11;
      LOCK();
      if (*(int *)(puVar11 + 1) == 0) {
        *(int *)(puVar11 + 1) = -1;
      }
      UNLOCK();
LAB_143a7a99f:
      param_1[0x14] = (longlong)puVar11;
      *(undefined4 *)(puVar11 + 0x24) = 0;
      lVar12 = param_1[0x14];
      if (*(int *)(lVar12 + 0x54) < 0) {
        *(undefined4 *)(lVar12 + 0x50) = 0;
        FUN_14481578e(lVar12 + 0x48,0);
      }
      else {
        *(undefined4 *)(lVar12 + 0x50) = 0;
      }
      lVar12 = param_1[0x14];
      FUN_14009337e(lVar12,0,0);
      *(undefined4 *)(lVar12 + 0x120) = 0;
      LOCK();
      if (*(int *)(param_1[0x14] + 8) == -1) {
        *(int *)(param_1[0x14] + 8) = 0;
      }
      UNLOCK();
      param_1[0x13] = param_1[0x14];
      param_1[0x14] = 0;
    }
    else {
      local_98 = (undefined1 **)CONCAT71(local_98._1_7_,1);
      FUN_140803078(param_2[2],plVar1,0,*(undefined4 *)(lVar12 + 0x120));
    }
    lVar12 = (**(code **)(*param_2 + 0x68))(param_2);
    if (lVar12 != 0) {
      FUN_1402ae190(param_1 + 0x1b,lVar12 + 0x480);
    }
  }
  else {
    FUN_1402ae190(param_1 + 0x1b,ppuVar5 + 0xf);
    lVar12 = param_2[1];
    LOCK();
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    UNLOCK();
    ppuVar20 = (undefined **)param_1[1];
    uVar22 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (ppuVar20 == (undefined **)0x0) {
      ppuVar20 = (undefined **)0x0;
      ppuVar25 = (undefined **)0x0;
    }
    else {
      iVar8 = *(int *)(ppuVar20 + 1);
      ppuVar25 = (undefined **)0x0;
      do {
        if (iVar8 == 0) {
          ppuVar20 = (undefined **)0x0;
          goto LAB_143a7a6f6;
        }
        LOCK();
        iVar3 = *(int *)(ppuVar20 + 1);
        bVar27 = iVar8 == iVar3;
        if (bVar27) {
          *(int *)(ppuVar20 + 1) = iVar8 + 1;
          iVar3 = iVar8;
        }
        iVar8 = iVar3;
        UNLOCK();
      } while (!bVar27);
      ppuVar25 = (undefined **)*param_1;
      uVar22 = 0;
    }
LAB_143a7a6f6:
    ppuVar6 = *(undefined ***)(lVar12 + 0x870);
    lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar8 = *(int *)(lVar12 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar8 != 2) {
        local_8c = (uint)uVar22;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          bVar27 = DVar9 == DVar10;
        }
        else {
          bVar27 = iVar8 == 0x10;
        }
        uVar22 = (ulonglong)local_8c;
        if (!bVar27) goto LAB_143a7a72d;
      }
LAB_143a7adda:
      FUN_1481ba9ee(ppuVar25,&DAT_14ca85100,ppuVar6,ppuVar5);
    }
    else {
      if (iVar8 == 0x10) goto LAB_143a7adda;
LAB_143a7a72d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar12 + 0xc60), iVar8 == 2))
        goto LAB_143a7adda;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          uVar22 = uVar22 & 0xffffffff;
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a7adda;
        }
      }
      if (DAT_14ca9a43c == 0) {
        local_8c = (uint)uVar22;
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar15 = (uint *)*puVar11;
        if (puVar15 != (uint *)0x0) goto LAB_143a7ab36;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_143a7d97b);
          }
          lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar14 = *(undefined4 **)(lVar12 + 0x310);
          *(undefined8 *)(lVar12 + 0x310) = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar11 = puVar14;
          FUN_140217a48(puVar11);
          puVar15 = (uint *)*puVar11;
LAB_143a7ab36:
          puVar23 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar23 + 0x19);
          uVar16 = puVar15[0x12];
          if (puVar19 <= puVar15 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar4 = *puVar15;
            *puVar15 = *puVar15 + uVar16 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar16) != 0xffffffff) break;
            puVar15 = (uint *)*puVar11;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar11 = puVar15;
            puVar23 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar23 + 0x19);
            uVar16 = 0;
            if (puVar19 <= puVar15 + 0x4000) {
              uVar16 = 1;
              goto LAB_143a7abb8;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_143a7abb8:
        *(uint **)(puVar15 + 0x10) = puVar19;
        puVar15[0x12] = uVar16;
        FUN_1447247dc(puVar23,0);
        *puVar23 = &PTR_FUN_14adf3370;
        puVar23[0x15] = ppuVar25;
        puVar23[0x16] = ppuVar20;
        uVar22 = (ulonglong)local_8c;
        if ((char)local_8c == '\0') {
          LOCK();
          *(int *)(ppuVar20 + 1) = *(int *)(ppuVar20 + 1) + 1;
          UNLOCK();
        }
        puVar23[0x17] = ppuVar6;
        puVar23[0x18] = ppuVar5;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          iVar8 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar26 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar8 = 0;
          }
          else {
            uVar26 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar26 = 5;
        }
        if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
        }
        puVar23[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar23[9] = puVar23;
        puVar23[10] = puVar23;
        lVar12 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar12 == 0) {
          uVar7 = 1;
          if ((char)uVar26 != '\x06') {
            uVar7 = uVar26;
          }
          uVar26 = uVar7;
          uVar13 = 0;
        }
        else {
          if ((char)uVar26 == '\x06') {
            uVar26 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar12 + 0x30);
        }
        puVar23[0xf] = uVar13;
        puVar23[0x10] = uVar26 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar23 + 0x1c) = iVar8;
        if (puVar23 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar23);
          LOCK();
          piVar2 = (int *)(puVar23 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar23)(puVar23,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (undefined ***)FUN_14001cc68(0x28,8);
        *local_78 = &PTR_LAB_14adf3320;
        local_78[1] = ppuVar25;
        local_78[2] = ppuVar20;
        if ((char)uVar22 == '\0') {
          LOCK();
          *(int *)(ppuVar20 + 1) = *(int *)(ppuVar20 + 1) + 1;
          UNLOCK();
        }
        local_78[3] = ppuVar6;
        local_78[4] = ppuVar5;
        if (local_78 != (undefined ***)&DAT_fffffffffffffff8) {
          local_88[0] = &LAB_143a7ffac;
        }
        local_98 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NiagaraDataSetReadback",&DAT_14cb3e63c);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar17 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar17 = &local_68;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
    }
    if ((char)uVar22 == '\0') {
      LOCK();
      ppuVar5 = ppuVar20 + 1;
      *(int *)ppuVar5 = *(int *)ppuVar5 + -1;
      UNLOCK();
      if (*(int *)ppuVar5 == 0) {
        (**(code **)*ppuVar20)(ppuVar20);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*ppuVar20 + 0x10))(ppuVar20);
        }
      }
    }
  }
  if ((int)param_1[2] == 0) goto LAB_143a7aebf;
  lVar12 = *(longlong *)(param_2[1] + 0x870);
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar24 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143a7aa6d;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143a7aa76;
      goto LAB_143a7ae1b;
    }
LAB_143a7aa76:
    FUN_143a96774(*(undefined8 *)(lVar12 + 0x28),&DAT_14ca85100);
  }
  else {
LAB_143a7aa6d:
    if (iVar8 == 0x10) goto LAB_143a7aa76;
LAB_143a7ae1b:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar24 + 0xc60), iVar8 == 2))
      goto LAB_143a7aa76;
      if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_143a7aa76;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar11 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar15 = (uint *)*puVar11;
      if (puVar15 != (uint *)0x0) goto LAB_143a7af87;
      while( true ) {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_143a7d97b);
        }
        lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar14 = *(undefined4 **)(lVar24 + 0x310);
        *(undefined8 *)(lVar24 + 0x310) = 0;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar14 = 0xffffffff;
        *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
        puVar14[0x12] = 0;
        *puVar11 = puVar14;
        FUN_140217a48(puVar11);
        puVar15 = (uint *)*puVar11;
LAB_143a7af87:
        puVar23 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar23 + 0x16);
        uVar16 = puVar15[0x12];
        if (puVar19 <= puVar15 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
          LOCK();
          uVar4 = *puVar15;
          *puVar15 = *puVar15 + uVar16 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar16) != 0xffffffff) break;
          puVar15 = (uint *)*puVar11;
          *puVar15 = 0xffffffff;
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar11 = puVar15;
          puVar23 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar23 + 0x16);
          uVar16 = 0;
          if (puVar19 <= puVar15 + 0x4000) {
            uVar16 = 1;
            goto LAB_143a7b007;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_143a7b007:
      *(uint **)(puVar15 + 0x10) = puVar19;
      puVar15[0x12] = uVar16;
      iVar8 = 0;
      FUN_1447247dc(puVar23,0);
      *puVar23 = &PTR_FUN_14adf33d0;
      puVar23[0x15] = lVar12;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar16 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
          uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
          iVar8 = 0;
        }
        else {
          uVar22 = 2;
        }
      }
      else {
        iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar22 = 5;
      }
      if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
      }
      puVar23[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar23[9] = puVar23;
      puVar23[10] = puVar23;
      lVar12 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar12 == 0) {
        uVar26 = 1;
        if ((char)uVar22 != '\x06') {
          uVar26 = uVar22;
        }
        uVar22 = uVar26;
        uVar13 = 0;
      }
      else {
        if ((char)uVar22 == '\x06') {
          uVar22 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar12 + 0x30);
      }
      puVar23[0xf] = uVar13;
      puVar23[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar23 + 0x1c) = iVar8;
      if (puVar23 == (undefined8 *)0x0) {
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
        UNLOCK();
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar23);
        LOCK();
        piVar2 = (int *)(puVar23 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar23)(puVar23,1);
        }
      }
    }
    else {
      local_98 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14adf3380;
      local_88[0] = &LAB_143a801e2;
      local_60 = lVar12;
      FUN_14005a792(&DAT_14ca9a440,L"NiagaraFlushReadback",&DAT_14cb3e640);
      if (local_88[0] != (undefined1 *)0x0) {
        pppuVar17 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar17 = &local_68;
        }
        (*(code *)(*pppuVar17)[2])();
      }
    }
  }
  FUN_14080c2b4();
LAB_143a7aebf:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a7b32e FUN_143a7b32e body=55 status=ok
// SIG undefined FUN_143a7b32e(void)

void FUN_143a7b32e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dcb8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dcb8 = FUN_14171c317(FUN_146472d9c,uVar1,L"ENiagaraDebugPlaybackMode");
  }
  return;
}



// FUNCTION 143a7b365 FUN_143a7b365 body=55 status=ok
// SIG undefined FUN_143a7b365(void)

void FUN_143a7b365(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dcd0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dcd0 = FUN_14171c317(FUN_146472dcb,uVar1,L"ENiagaraDebugHudHAlign");
  }
  return;
}



// FUNCTION 143a7b39c FUN_143a7b39c body=55 status=ok
// SIG undefined FUN_143a7b39c(void)

void FUN_143a7b39c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dce8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dce8 = FUN_14171c317(FUN_146472dfa,uVar1,L"ENiagaraDebugHudVAlign");
  }
  return;
}



// FUNCTION 143a7b3d3 FUN_143a7b3d3 body=55 status=ok
// SIG undefined FUN_143a7b3d3(void)

void FUN_143a7b3d3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dd00 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dd00 = FUN_14171c317(FUN_146472e29,uVar1,L"ENiagaraDebugHudFont");
  }
  return;
}



// FUNCTION 143a7b40a FUN_143a7b40a body=55 status=ok
// SIG undefined FUN_143a7b40a(void)

void FUN_143a7b40a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dd18 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dd18 = FUN_14171c317(FUN_146472e58,uVar1,L"ENiagaraDebugHudVerbosity");
  }
  return;
}



// FUNCTION 143a7b441 FUN_143a7b441 body=55 status=ok
// SIG undefined FUN_143a7b441(void)

void FUN_143a7b441(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dd60 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dd60 = FUN_14171c317(FUN_146472fba,uVar1,L"ENiagaraDebugHUDOverviewMode");
  }
  return;
}



// FUNCTION 143a7b478 FUN_143a7b478 body=55 status=ok
// SIG undefined FUN_143a7b478(void)

void FUN_143a7b478(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dd78 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dd78 = FUN_14171c317(FUN_146472fe9,uVar1,L"ENiagaraDebugHUDPerfGraphMode");
  }
  return;
}



// FUNCTION 143a7b4af FUN_143a7b4af body=55 status=ok
// SIG undefined FUN_143a7b4af(void)

void FUN_143a7b4af(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dd90 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dd90 = FUN_14171c317(FUN_146473018,uVar1,L"ENiagaraDebugHUDPerfSampleMode");
  }
  return;
}



// FUNCTION 143a7b4e6 FUN_143a7b4e6 body=55 status=ok
// SIG undefined FUN_143a7b4e6(void)

void FUN_143a7b4e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dda8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dda8 = FUN_14171c317(FUN_146473047,uVar1,L"ENiagaraDebugHUDPerfUnits");
  }
  return;
}



// FUNCTION 143a7b51d FUN_143a7b51d body=55 status=ok
// SIG undefined FUN_143a7b51d(void)

void FUN_143a7b51d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3ddc0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3ddc0 = FUN_14171c317(FUN_146473076,uVar1,L"ENiagaraDebugHUDDOverviewSort");
  }
  return;
}



// FUNCTION 143a7b565 FUN_143a7b565 body=69 status=ok
// SIG undefined FUN_143a7b565(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7b565(void)

{
  _DAT_14cb3dee8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7b5a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3def0,1);
  return;
}



// FUNCTION 143a7b5aa FUN_143a7b5aa body=69 status=ok
// SIG undefined FUN_143a7b5aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7b5aa(void)

{
  _DAT_14cb3def8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7b5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3df00,1);
  return;
}



// FUNCTION 143a7b5f3 FUN_143a7b5f3 body=48 status=ok
// SIG undefined FUN_143a7b5f3(void)

void FUN_143a7b5f3(void)

{
  if (DAT_14cb3df18 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb3df08 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143a7b623 FUN_143a7b623 body=48 status=ok
// SIG undefined FUN_143a7b623(void)

void FUN_143a7b623(void)

{
  if (DAT_14cb3dfb8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb3dfa8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143a7b653 FUN_143a7b653 body=55 status=ok
// SIG undefined FUN_143a7b653(void)

void FUN_143a7b653(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e000 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e000 = FUN_14171c317(FUN_1464736a8,uVar1,L"ENiagaraCullReaction");
  }
  return;
}



// FUNCTION 143a7b68a FUN_143a7b68a body=55 status=ok
// SIG undefined FUN_143a7b68a(void)

void FUN_143a7b68a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e018 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e018 = FUN_14171c317(FUN_1464736d7,uVar1,L"ENiagaraScalabilityUpdateFrequency");
  }
  return;
}



// FUNCTION 143a7b6c1 FUN_143a7b6c1 body=55 status=ok
// SIG undefined FUN_143a7b6c1(void)

void FUN_143a7b6c1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e030 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e030 = FUN_14171c317(FUN_146473706,uVar1,L"ENiagaraCullProxyMode");
  }
  return;
}



// FUNCTION 143a7b6f8 FUN_143a7b6f8 body=91 status=ok
// SIG undefined FUN_143a7b6f8(void)

void FUN_143a7b6f8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14adeb190;
  return;
}



// FUNCTION 143a7b753 FUN_143a7b753 body=91 status=ok
// SIG undefined FUN_143a7b753(void)

void FUN_143a7b753(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14adeb4e0;
  return;
}



// FUNCTION 143a7b7ae FUN_143a7b7ae body=154 status=ok
// SIG undefined FUN_143a7b7ae(void)

void FUN_143a7b7ae(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14ade9250;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0x100000000;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(byte *)((longlong)puVar1 + 0x74) = *(byte *)((longlong)puVar1 + 0x74) & 0xfe;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  return;
}



// FUNCTION 143a7b848 FUN_143a7b848 body=472 status=ok
// SIG undefined FUN_143a7b848(void)

void FUN_143a7b848(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar10 = param_2[1];
  if (0 < (longlong)(int)lVar10) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      lVar6 = *param_3;
      uVar4 = *(ushort *)(*param_4 + 4 + (longlong)*(short *)(lVar6 + 8 + lVar13) * 6);
      bVar3 = *(byte *)(lVar6 + 10 + lVar13);
      if (((uVar4 & 1) == 0) || (cVar11 = '\x01', (bVar3 & 0xc) == 0xc)) {
        cVar11 = (char)((uVar4 & 2) >> 1);
      }
      if ((bVar3 & 4) == 0) {
        lVar7 = *(longlong *)(*param_2 + lVar12 * 8);
        lVar8 = *(longlong *)(lVar7 + 0x760);
        plVar9 = *(longlong **)(lVar7 + 0x768);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
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
        if (lVar8 != 0) {
          *(float *)(lVar6 + lVar13) = 1.0 / *(float *)(*(longlong *)(lVar8 + 0x30) + 0xd0);
        }
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
      else {
        *(undefined4 *)(lVar6 + lVar13) = 0;
      }
      if (cVar11 != '\0') {
        iVar5 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(param_5,iVar5);
        }
        *(int *)(*param_5 + (longlong)iVar5 * 4) = (int)lVar12;
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0xc;
    } while ((int)lVar10 != lVar12);
  }
  return;
}



// FUNCTION 143a7ba20 FUN_143a7ba20 body=55 status=ok
// SIG undefined FUN_143a7ba20(void)

void FUN_143a7ba20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e1c8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e1c8 = FUN_14171c317(FUN_146473f30,uVar1,L"EScriptExecutionMode");
  }
  return;
}



// FUNCTION 143a7ba57 FUN_143a7ba57 body=55 status=ok
// SIG undefined FUN_143a7ba57(void)

void FUN_143a7ba57(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e1e0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e1e0 = FUN_14171c317(FUN_146473f5f,uVar1,L"EParticleAllocationMode");
  }
  return;
}



// FUNCTION 143a7ba8e FUN_143a7ba8e body=55 status=ok
// SIG undefined FUN_143a7ba8e(void)

void FUN_143a7ba8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e1f8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e1f8 = FUN_14171c317(FUN_146473f8e,uVar1,L"ENiagaraEmitterCalculateBoundMode");
  }
  return;
}



// FUNCTION 143a7bac5 FUN_143a7bac5 body=124 status=ok
// SIG undefined FUN_143a7bac5(void)

void FUN_143a7bac5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14adedb10;
  puVar1[5] = &PTR_FUN_14adeddb0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 143a7bb41 FUN_143a7bb41 body=69 status=ok
// SIG undefined FUN_143a7bb41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7bb41(void)

{
  _DAT_14cb3e280 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7bb83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e288,1);
  return;
}



// FUNCTION 143a7bb86 FUN_143a7bb86 body=69 status=ok
// SIG undefined FUN_143a7bb86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7bb86(void)

{
  _DAT_14cb3e298 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7bbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e2a0,1);
  return;
}



// FUNCTION 143a7bbcb FUN_143a7bbcb body=69 status=ok
// SIG undefined FUN_143a7bbcb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7bbcb(void)

{
  _DAT_14cb3e2b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7bc0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e2b8,1);
  return;
}



// FUNCTION 143a7bc10 FUN_143a7bc10 body=69 status=ok
// SIG undefined FUN_143a7bc10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7bc10(void)

{
  _DAT_14cb3e2c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7bc52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e2d0,1);
  return;
}



// FUNCTION 143a7bc55 FUN_143a7bc55 body=69 status=ok
// SIG undefined FUN_143a7bc55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7bc55(void)

{
  _DAT_14cb3e2e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7bc97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e2e8,1);
  return;
}



// FUNCTION 143a7bc9a FUN_143a7bc9a body=69 status=ok
// SIG undefined FUN_143a7bc9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7bc9a(void)

{
  _DAT_14cb3e2f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7bcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e2f8,1);
  return;
}



// FUNCTION 143a7bcdf FUN_143a7bcdf body=69 status=ok
// SIG undefined FUN_143a7bcdf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7bcdf(void)

{
  _DAT_14cb3e308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7bd21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e310,1);
  return;
}



// FUNCTION 143a7bd24 FUN_143a7bd24 body=1029 status=ok
// SIG undefined FUN_143a7bd24(void)

void FUN_143a7bd24(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar9 = FUN_1400439fc(param_1,0,&local_78);
  if (cVar9 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  local_88 = 0xfcf57afa;
  uStack_84 = 0x50764283;
  uStack_80 = 0xb9a9e658;
  uStack_7c = 0xffa02d32;
  FUN_1448a256a(param_1);
  local_98 = 0x697dd581;
  uStack_94 = 0xe64f41ab;
  uStack_90 = 0xaa4a51ec;
  uStack_8c = 0xbeb7b628;
  FUN_1448a256a(param_1);
  if ((longlong)(int)param_1[10] != 0) {
    lVar13 = param_1[9];
    lVar14 = (longlong)(int)param_1[10] * 0x368 + lVar13;
    do {
      plVar11 = (longlong *)FUN_14001cc68(0x38,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_149e05c70;
      lpCriticalSection = (LPCRITICAL_SECTION)(plVar11 + 2);
      InitializeCriticalSection(lpCriticalSection);
      SetCriticalSectionSpinCount(lpCriticalSection,4000);
      if (plVar11 == (longlong *)0x0) {
        *(undefined8 *)(lVar13 + 0x340) = 0x10;
        plVar18 = *(longlong **)(lVar13 + 0x348);
        if (plVar18 != (longlong *)0x0) {
          *(undefined8 *)(lVar13 + 0x348) = 0;
LAB_143a7c04a:
          LOCK();
          plVar1 = plVar18 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar2 = (int *)((longlong)plVar18 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
          if (plVar11 != (longlong *)0x0) goto LAB_143a7be41;
        }
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        *(LPCRITICAL_SECTION *)(lVar13 + 0x340) = lpCriticalSection;
        plVar18 = *(longlong **)(lVar13 + 0x348);
        if (plVar11 == plVar18) {
          LOCK();
          plVar18 = plVar11 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        else {
          *(longlong **)(lVar13 + 0x348) = plVar11;
          if (plVar18 != (longlong *)0x0) goto LAB_143a7c04a;
        }
LAB_143a7be41:
        LOCK();
        plVar18 = plVar11 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      iVar3 = *(int *)(lVar13 + 0x230);
      if (0 < (longlong)iVar3) {
        plVar11 = (longlong *)(lVar13 + 0x228);
        iVar12 = -iVar3;
        uVar17 = (longlong)iVar3;
        do {
          lVar4 = *plVar11;
          lVar16 = *(longlong *)(lVar4 + -8 + uVar17 * 8);
          if (lVar16 == 0) {
            uVar10 = *(uint *)(lVar13 + 0x230);
            if (uVar17 != uVar10) {
              memmove((void *)(lVar4 + uVar17 * 8 + -8),(void *)(lVar4 + uVar17 * 8),
                      (longlong)(int)(uVar10 + iVar12) << 3);
              uVar10 = *(uint *)(lVar13 + 0x230);
            }
            *(uint *)(lVar13 + 0x230) = uVar10 - 1;
            FUN_14182ed8e(plVar11);
          }
          else {
            uVar6 = *(undefined4 *)(lVar13 + 0xc);
            uVar7 = *(undefined4 *)(lVar13 + 0x10);
            uVar8 = *(undefined4 *)(lVar13 + 0x14);
            *(undefined4 *)(lVar16 + 0x98) = *(undefined4 *)(lVar13 + 8);
            *(undefined4 *)(lVar16 + 0x9c) = uVar6;
            *(undefined4 *)(lVar16 + 0xa0) = uVar7;
            *(undefined4 *)(lVar16 + 0xa4) = uVar8;
            FUN_1400337aa(*(undefined8 *)(*plVar11 + -8 + uVar17 * 8));
          }
          iVar12 = iVar12 + 1;
          bVar5 = 1 < uVar17;
          uVar17 = uVar17 - 1;
        } while (bVar5);
      }
      iVar3 = *(int *)(lVar13 + 0x240);
      if (0 < (longlong)iVar3) {
        iVar12 = -iVar3;
        uVar17 = (longlong)iVar3;
        do {
          lVar4 = *(longlong *)(lVar13 + 0x238);
          lVar16 = *(longlong *)(lVar4 + -8 + uVar17 * 8);
          if ((lVar16 == 0) || (*(longlong *)(lVar16 + 0x28) == 0)) {
            uVar10 = *(uint *)(lVar13 + 0x240);
            if (uVar17 != uVar10) {
              memmove((void *)(lVar4 + uVar17 * 8 + -8),(void *)(lVar4 + uVar17 * 8),
                      (longlong)(int)(uVar10 + iVar12) << 3);
              uVar10 = *(uint *)(lVar13 + 0x240);
            }
            *(uint *)(lVar13 + 0x240) = uVar10 - 1;
            FUN_1481c5926((longlong *)(lVar13 + 0x238));
          }
          else {
            FUN_1400337aa();
          }
          iVar12 = iVar12 + 1;
          bVar5 = 1 < uVar17;
          uVar17 = uVar17 - 1;
        } while (bVar5);
      }
      if (*(longlong *)(lVar13 + 0x118) != 0) {
        FUN_1400337aa();
      }
      FUN_1400563e2(lVar13 + 0x140,param_1);
      lVar4 = *(longlong *)(lVar13 + 0x118);
      if (lVar4 != 0) {
        cVar9 = *(char *)(lVar4 + 0x30);
        if (((cVar9 == '\x04') != (bool)((byte)*(uint *)(lVar13 + 0x38) & 1)) &&
           (*(uint *)(lVar13 + 0x38) = *(uint *)(lVar13 + 0x38) & 0xfffffffe, cVar9 == '\x04')) {
          *(undefined1 *)(lVar4 + 0x30) = 3;
        }
      }
      local_78 = 0;
      uStack_70 = 0;
      FUN_1401358c4(lVar13,&local_78,0,0);
      lVar4 = local_78;
      lVar16 = (longlong)(int)uStack_70;
      if (lVar16 != 0) {
        lVar15 = 0;
        do {
          FUN_1400337aa(*(undefined8 *)(lVar4 + lVar15));
          lVar15 = lVar15 + 8;
        } while (lVar16 * 8 != lVar15);
      }
      if (*(longlong *)(lVar13 + 0x268) != 0) {
        FUN_1400337aa();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + 0x368;
    } while (lVar13 != lVar14);
  }
  FUN_143a7c12a(param_1);
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a7c12a FUN_143a7c12a body=80 status=ok
// SIG undefined FUN_143a7c12a(void)

void FUN_143a7c12a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    FUN_1405d548c();
    if ((longlong)*(int *)(param_1 + 0x50) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar1 = (longlong)*(int *)(param_1 + 0x50) * 0x368;
      do {
        FUN_14079463e(lVar2,param_1);
        lVar2 = lVar2 + 0x368;
        lVar1 = lVar1 + -0x368;
      } while (lVar1 != 0);
    }
  }
  return;
}



// FUNCTION 143a7c17a FUN_143a7c17a body=659 status=ok
// SIG undefined FUN_143a7c17a(void)

ulonglong FUN_143a7c17a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = FUN_14018d992();
  if (DAT_14c951858 == 0) {
    local_70 = local_58;
    local_58[0] = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_1468c5283;
    local_80 = FUN_142809da0;
    local_88 = L"Engine";
    local_90 = 0x400000000;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar8 = *(longlong *)(param_1 + 0x20);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (lVar8 == 0) {
LAB_143a7c254:
    lVar9 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (lVar9 = lVar8,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         != lVar6 + 0x30)) {
        lVar9 = 0;
      }
    } while ((lVar9 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
    if (lVar9 == 0) goto LAB_143a7c254;
    iVar1 = *(int *)(lVar9 + 0xc0);
    if ((longlong)iVar1 != 0) {
      lVar6 = *(longlong *)(lVar9 + 0xb8);
      lVar8 = 0;
      bVar3 = DAT_14c950c29;
      do {
        lVar2 = *(longlong *)(lVar6 + 0x28 + lVar8);
        if (((bVar3 & 1) != 0) && (lVar2 != 0)) {
          FUN_1456cec3c(lVar2);
          bVar3 = DAT_14c950c29;
        }
        if (lVar2 == param_1) {
          uVar7 = 0;
          if (*(char *)(lVar6 + 0x20 + lVar8) != '\x01') goto LAB_143a7c30a;
          goto LAB_143a7c267;
        }
        lVar8 = lVar8 + 0x48;
      } while ((longlong)iVar1 * 0x48 != lVar8);
    }
    uVar7 = 0;
  }
LAB_143a7c267:
  (**(code **)(*param_2 + 8))(param_2,local_58);
  iVar1 = DAT_14c762930;
  if (local_58[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  if (iVar1 == 0) {
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  else {
    if ((char)uVar7 == '\0') {
      (**(code **)(*param_2 + 8))(param_2,local_58);
      cVar4 = FUN_1481d079c(lVar9 + 0x88,local_58);
      if (local_58[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      if (cVar4 == '\0') {
        uVar7 = 0;
        goto LAB_143a7c30a;
      }
    }
    (**(code **)(*param_2 + 8))(param_2,local_58);
    if ((longlong)*(int *)(param_1 + 0x50) == 0) {
      uVar7 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(param_1 + 0x50) * 0x368;
      lVar6 = *(longlong *)(param_1 + 0x48) + 0x90;
      do {
        lVar8 = lVar8 + -0x368;
        uVar5 = FUN_1481d079c(lVar6,local_58);
        uVar7 = (ulonglong)uVar5;
        if ((char)uVar5 != '\0') break;
        lVar6 = lVar6 + 0x368;
      } while (lVar8 != 0);
    }
    if (local_58[0] != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143a7c30a:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 143a7c40e FUN_143a7c40e body=5 status=ok
// SIG undefined FUN_143a7c40e(void)

longlong FUN_143a7c40e(longlong param_1)

{
  return param_1 + 0x60;
}



// FUNCTION 143a7c414 FUN_143a7c414 body=186 status=ok
// SIG undefined FUN_143a7c414(void)

longlong FUN_143a7c414(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x50);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x40) == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x48);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) {
      lVar1 = lVar1 * 0x368;
      lVar2 = 0;
      do {
        if ((((*(int *)(lVar3 + 8) == *(int *)(param_1 + 0x30)) &&
             (*(int *)(lVar3 + 0xc) == *(int *)(param_1 + 0x34))) &&
            (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x38))) &&
           (*(int *)(lVar3 + 0x14) == *(int *)(param_1 + 0x3c))) {
          return lVar3;
        }
        lVar3 = lVar3 + 0x368;
        lVar1 = lVar1 + -0x368;
      } while (lVar1 != 0);
    }
    else {
      lVar1 = lVar1 * 0x368;
      lVar2 = 0;
      do {
        if (((*(int *)(lVar3 + 8) == *param_2) && (*(int *)(lVar3 + 0xc) == param_2[1])) &&
           ((*(int *)(lVar3 + 0x10) == param_2[2] && (*(int *)(lVar3 + 0x14) == param_2[3])))) {
          return lVar3;
        }
        lVar3 = lVar3 + 0x368;
        lVar1 = lVar1 + -0x368;
      } while (lVar1 != 0);
    }
  }
  return lVar2;
}



// FUNCTION 143a7c4ce FUN_143a7c4ce body=2634 status=ok
// SIG undefined FUN_143a7c4ce(void)

longlong FUN_143a7c4ce(longlong param_1,longlong param_2,longlong param_3)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  uint uVar2;
  byte bVar3;
  void *_Src;
  char cVar4;
  longlong lVar5;
  undefined8 extraout_RAX;
  longlong lVar6;
  undefined8 extraout_RAX_00;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint *puVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  size_t _Size;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_79;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0x400000000;
  *(undefined4 *)(param_1 + 0x360) = 2;
  if (DAT_14c7628c4 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar3 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_143a7ca9c;
      bVar3 = DAT_14c8442b8 & 1;
    }
    if ((bVar3 == 0) && (*(char *)(param_1 + 0x3c) == '\x01')) {
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x268) + 0x1c8);
      if ((lVar20 != 0) && (cVar4 = FUN_1405c07f8(*(longlong *)(param_1 + 0x268),1), cVar4 != '\0'))
      {
        if (DAT_14c7628c4 != 2) {
          if (DAT_14c7628c4 == 3) {
            local_58 = (undefined1 *)0x0;
            local_50 = 0x400000000;
            if (0 < *(int *)(lVar20 + 0xb4)) {
              local_f0 = 0;
              iVar17 = 0;
              do {
                FUN_140794830(lVar20,&local_d8,iVar17);
                if (CONCAT44(uStack_d4,local_d8) == 0) {
                  lVar5 = 0;
                }
                else {
                  lVar6 = *(longlong *)(CONCAT44(uStack_cc,uStack_d0) + 8);
                  lVar14 = (longlong)*(int *)(CONCAT44(uStack_d4,local_d8) + 0xd4);
                  lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar14 * 8);
                  if (lVar5 == 0) {
                    lVar5 = FUN_1400bafc2(lVar6,lVar14,1);
                  }
                }
                local_f8 = 1;
                FUN_14053ef1e(DAT_14ca811d0,&local_d8,lVar5,L"NiagaraEmitter");
                uVar19 = local_50;
                lVar14 = DAT_14ca811d0;
                lVar6 = CONCAT44(uStack_cc,uStack_d0);
                if (lVar6 == 0) {
                  uVar9 = 0;
                  if (((lVar5 != 0) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) {
                    SRWLock = (PSRWLOCK)(DAT_14ca811d0 + 8);
                    AcquireSRWLockShared(SRWLock);
                    if (*(int *)(lVar14 + 0x28) != *(int *)(lVar14 + 0x54)) {
                      lVar6 = lVar14 + 0x58;
                      if (*(longlong *)(lVar14 + 0x60) != 0) {
                        lVar6 = *(longlong *)(lVar14 + 0x60);
                      }
                      iVar18 = *(int *)(lVar6 + (ulonglong)
                                                (*(int *)(lVar14 + 0x68) - 1U &
                                                (int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5)
                                                * 4);
                      if (iVar18 != -1) {
                        do {
                          lVar6 = *(longlong *)(lVar14 + 0x20) + (longlong)iVar18 * 0x20;
                          if (*(longlong *)(*(longlong *)(lVar14 + 0x20) + (longlong)iVar18 * 0x20)
                              == lVar5) {
                            if ((lVar6 != 0) && (lVar6 != -8)) {
                              bVar3 = *(byte *)(lVar6 + 0x14);
                              ReleaseSRWLockShared(SRWLock);
                              uVar9 = extraout_RAX_00;
                              if (((bVar3 & 6) == 0) || ((bVar3 & 4) != 0)) goto LAB_143a7c758;
                              bVar21 = false;
                              uVar19 = 1;
                              goto LAB_143a7c7a1;
                            }
                            break;
                          }
                          iVar18 = *(int *)(lVar6 + 0x18);
                        } while (iVar18 != -1);
                      }
                    }
                    ReleaseSRWLockShared(SRWLock);
                    uVar9 = extraout_RAX;
                  }
LAB_143a7c758:
                  *(undefined4 *)(param_1 + 0x360) = 5;
                  bVar21 = true;
                  uVar19 = 1;
                  local_f0 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                }
                else {
                  lVar5 = (longlong)(int)local_50;
                  uVar10 = (int)local_50 + 1;
                  local_50 = CONCAT44(local_50._4_4_,uVar10);
                  if (local_50._4_4_ < uVar10) {
                    FUN_14476a5c8(local_78,uVar19 & 0xffffffff);
                    lVar6 = CONCAT44(uStack_cc,uStack_d0);
                    puVar12 = local_58;
                    if (local_58 == (undefined1 *)0x0) {
                      puVar12 = local_78;
                    }
                    *(longlong *)(puVar12 + lVar5 * 8) = lVar6;
                    if (lVar6 != 0) goto LAB_143a7c78f;
                  }
                  else {
                    puVar12 = local_58;
                    if (local_58 == (undefined1 *)0x0) {
                      puVar12 = local_78;
                    }
                    *(longlong *)(puVar12 + lVar5 * 8) = lVar6;
LAB_143a7c78f:
                    LOCK();
                    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
                    UNLOCK();
                  }
                  bVar21 = false;
                  uVar19 = local_f0 & 0xffffffff;
                }
LAB_143a7c7a1:
                puVar13 = (undefined8 *)CONCAT44(uStack_cc,uStack_d0);
                if (puVar13 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(puVar13 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar13)(puVar13,1);
                  }
                }
                if (bVar21) goto LAB_143a7ca4e;
                iVar17 = iVar17 + 1;
              } while (iVar17 < *(int *)(lVar20 + 0xb4));
            }
            lVar20 = *(longlong *)(param_1 + 0x268);
            local_a8 = *(undefined8 *)(lVar20 + 0x1a0);
            local_d8 = *(undefined4 *)(lVar20 + 0x170);
            uStack_d4 = *(undefined4 *)(lVar20 + 0x174);
            uStack_d0 = *(undefined4 *)(lVar20 + 0x178);
            uStack_cc = *(undefined4 *)(lVar20 + 0x17c);
            local_c8 = *(undefined4 *)(lVar20 + 0x180);
            uStack_c4 = *(undefined4 *)(lVar20 + 0x184);
            uStack_c0 = *(undefined4 *)(lVar20 + 0x188);
            uStack_bc = *(undefined4 *)(lVar20 + 0x18c);
            local_b8 = *(undefined4 *)(lVar20 + 400);
            uStack_b4 = *(undefined4 *)(lVar20 + 0x194);
            uStack_b0 = *(undefined4 *)(lVar20 + 0x198);
            uStack_ac = *(undefined4 *)(lVar20 + 0x19c);
            local_a0 = (void *)0x0;
            local_98 = *(int *)(lVar20 + 0x1b0);
            _Size = (size_t)local_98;
            _Src = *(void **)(lVar20 + 0x1a8);
            if (_Size == 0) {
              local_94 = 0;
            }
            else {
              FUN_1447a127e(&local_a0,local_98,0);
              memcpy(local_a0,_Src,_Size);
            }
            local_90 = *(undefined4 *)(lVar20 + 0x1b8);
            uStack_8c = *(undefined4 *)(lVar20 + 0x1bc);
            uStack_88 = *(undefined4 *)(lVar20 + 0x1c0);
            uStack_84 = *(undefined4 *)(lVar20 + 0x1c4);
            if ((int)local_50 < 1) {
              *(undefined4 *)(param_1 + 0x360) = 2;
            }
            else {
              *(undefined4 *)(param_1 + 0x360) = 1;
              local_e8 = 0;
              uStack_e0 = 0;
              if (param_3 == 0) {
                uVar10 = 0;
                iVar17 = 0;
              }
              else {
                uVar10 = *(uint *)(param_3 + 0xc);
                if ((int)uVar10 < DAT_14c9647dc) {
                  lVar20 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                }
                else {
                  lVar20 = 0;
                }
                iVar17 = *(int *)(lVar20 + 0x10);
                if (*(int *)(lVar20 + 0x10) == 0) {
                  LOCK();
                  iVar17 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar18 = DAT_14c964868 + 1;
                  bVar21 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar17;
                  if (bVar21) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar18);
                  }
                  LOCK();
                  iVar17 = *(int *)(lVar20 + 0x10);
                  bVar21 = iVar17 == 0;
                  if (bVar21) {
                    *(int *)(lVar20 + 0x10) = iVar18;
                    iVar17 = 0;
                  }
                  UNLOCK();
                  if (bVar21) {
                    iVar17 = iVar18;
                  }
                }
              }
              local_e8 = *(undefined8 *)(param_1 + 8);
              uStack_e0 = *(undefined8 *)(param_1 + 0x10);
              puVar13 = (undefined8 *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308)
              ;
              puVar8 = (uint *)*puVar13;
              if (puVar8 != (uint *)0x0) goto LAB_143a7cbce;
              while( true ) {
                uVar11 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar11 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar11 | 1;
                  __tlregdtor(&LAB_143a7d97b);
                }
                lVar20 = *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar7 = *(undefined4 **)(lVar20 + 0x310);
                *(undefined8 *)(lVar20 + 0x310) = 0;
                if (puVar7 == (undefined4 *)0x0) {
                  puVar7 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar7 = 0xffffffff;
                *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
                puVar7[0x12] = 0;
                *puVar13 = puVar7;
                FUN_140217a48(puVar13);
                puVar8 = (uint *)*puVar13;
LAB_143a7cbce:
                puVar16 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
                puVar15 = (uint *)(puVar16 + 0x18);
                uVar11 = puVar8[0x12];
                if (puVar15 <= puVar8 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
                  LOCK();
                  uVar2 = *puVar8;
                  *puVar8 = *puVar8 + uVar11 + 1;
                  UNLOCK();
                  if ((uVar2 ^ uVar11) != 0xffffffff) break;
                  puVar8 = (uint *)*puVar13;
                  *puVar8 = 0xffffffff;
                  *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
                  puVar8[0x12] = 0;
                  *puVar13 = puVar8;
                  puVar16 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
                  puVar15 = (uint *)(puVar16 + 0x18);
                  uVar11 = 0;
                  if (puVar15 <= puVar8 + 0x4000) {
                    uVar11 = 1;
                    goto LAB_143a7cc4e;
                  }
                }
              }
              uVar11 = uVar11 + 1;
LAB_143a7cc4e:
              *(uint **)(puVar8 + 0x10) = puVar15;
              puVar8[0x12] = uVar11;
              FUN_1447247dc(puVar16,local_78);
              *puVar16 = &PTR_FUN_14adf3578;
              *(uint *)(puVar16 + 0x15) = uVar10;
              *(int *)((longlong)puVar16 + 0xac) = iVar17;
              *(undefined4 *)(puVar16 + 0x16) = (undefined4)local_e8;
              *(undefined4 *)((longlong)puVar16 + 0xb4) = local_e8._4_4_;
              *(undefined4 *)(puVar16 + 0x17) = (undefined4)uStack_e0;
              *(undefined4 *)((longlong)puVar16 + 0xbc) = uStack_e0._4_4_;
              if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
              }
              puVar16[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar16[9] = puVar16;
              puVar16[10] = puVar16;
              lVar20 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar20 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = *(undefined8 *)(lVar20 + 0x30);
              }
              puVar16[0xf] = uVar9;
              puVar16[0x10] = 0xe80000527800b400;
              *(undefined4 *)((longlong)puVar16 + 0x1c) = 3;
              if (puVar16 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
                UNLOCK();
              }
              local_79 = 1;
              FUN_1447439e4(puVar16);
              iVar17 = *(int *)(param_2 + 0x28);
              *(uint *)(param_2 + 0x28) = iVar17 + 1U;
              if (*(uint *)(param_2 + 0x2c) < iVar17 + 1U) {
                FUN_14476a5c8(param_2,iVar17);
              }
              lVar20 = *(longlong *)(param_2 + 0x20);
              if (*(longlong *)(param_2 + 0x20) == 0) {
                lVar20 = param_2;
              }
              *(undefined8 **)(lVar20 + (longlong)iVar17 * 8) = puVar16;
            }
            if (local_a0 != (void *)0x0) {
              FUN_1400020a8();
            }
            uVar19 = 1;
LAB_143a7ca4e:
            puVar12 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar12 = local_78;
            }
            FUN_144717c65(puVar12,local_50 & 0xffffffff);
            if (local_58 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            if ((uVar19 & 1) == 0) {
              lVar20 = *(longlong *)(param_2 + 0x20);
              if (*(longlong *)(param_2 + 0x20) == 0) {
                lVar20 = param_2;
              }
              FUN_144717c65(lVar20,*(undefined4 *)(param_2 + 0x28));
              if (*(longlong *)(param_2 + 0x20) != 0) {
                FUN_1400020a8();
              }
            }
            goto LAB_143a7ca9c;
          }
          if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) goto LAB_143a7ca9c;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb3e328) &&
           (FUN_144b3d300(&DAT_14cb3e328), DAT_14cb3e328 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          DAT_14cb3e320 =
               (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.PSOPrecache.ProxyCreationWhenPSOReady",1);
          _Init_thread_footer(&DAT_14cb3e328);
        }
        bVar21 = true;
        if (DAT_14cb3e320 != (longlong *)0x0 && DAT_14c7628c4 == 1) {
          iVar17 = (**(code **)(*DAT_14cb3e320 + 0xb0))();
          bVar21 = iVar17 == 0;
        }
        if (0 < *(int *)(lVar20 + 0xb4)) {
          iVar17 = 0;
          do {
            FUN_140794830(lVar20,&local_d8,iVar17);
            if (CONCAT44(uStack_d4,local_d8) == 0) {
              lVar5 = 0;
            }
            else {
              lVar6 = *(longlong *)(CONCAT44(uStack_cc,uStack_d0) + 8);
              lVar14 = (longlong)*(int *)(CONCAT44(uStack_d4,local_d8) + 0xd4);
              lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar14 * 8);
              if (lVar5 == 0) {
                lVar5 = FUN_1400bafc2(lVar6,lVar14,1);
              }
            }
            local_f8 = 1;
            FUN_14053ef1e(DAT_14ca811d0,&local_d8,lVar5,L"NiagaraEmitter");
            puVar13 = (undefined8 *)CONCAT44(uStack_cc,uStack_d0);
            if ((bool)(puVar13 == (undefined8 *)0x0 | bVar21)) {
LAB_143a7c961:
              if (puVar13 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(puVar13 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar13)(puVar13,1);
                }
              }
            }
            else {
              iVar18 = *(int *)(param_2 + 0x28);
              *(uint *)(param_2 + 0x28) = iVar18 + 1U;
              if (iVar18 + 1U <= *(uint *)(param_2 + 0x2c)) {
                lVar5 = *(longlong *)(param_2 + 0x20);
                if (*(longlong *)(param_2 + 0x20) == 0) {
                  lVar5 = param_2;
                }
                *(undefined8 **)(lVar5 + (longlong)iVar18 * 8) = puVar13;
LAB_143a7c958:
                LOCK();
                *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
                UNLOCK();
                puVar13 = (undefined8 *)CONCAT44(uStack_cc,uStack_d0);
                goto LAB_143a7c961;
              }
              FUN_14476a5c8(param_2,iVar18);
              puVar13 = (undefined8 *)CONCAT44(uStack_cc,uStack_d0);
              lVar5 = *(longlong *)(param_2 + 0x20);
              if (*(longlong *)(param_2 + 0x20) == 0) {
                lVar5 = param_2;
              }
              *(undefined8 **)(lVar5 + (longlong)iVar18 * 8) = puVar13;
              if (puVar13 != (undefined8 *)0x0) goto LAB_143a7c958;
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)(lVar20 + 0xb4));
        }
      }
    }
  }
LAB_143a7ca9c:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143a7cf84 FUN_143a7cf84 body=31 status=ok
// SIG undefined FUN_143a7cf84(void)

undefined8 FUN_143a7cf84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7d132 FUN_143a7d132 body=386 status=ok
// SIG undefined FUN_143a7d132(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a7d132(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  size_t _Size;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3e380) {
    FUN_144b3d300(&DAT_14cb3e380);
    if (DAT_14cb3e380 == -1) {
      local_38 = 0xc2b40000;
      local_30 = 0x42b40000;
      FUN_1409545ce(&local_38,local_48);
      FUN_1446f470e(&local_38,L"Particles.DecalOrientation",1);
      DAT_14cb3e360 = local_38;
      DAT_14cb3e368 = FUN_144830b78(&DAT_14cb3e368,&DAT_14cb42190);
      DAT_14cb3e370 = (void *)0x0;
      _DAT_14cb3e378 = 0;
      FUN_140121138(&DAT_14cb3e360);
      memcpy(DAT_14cb3e370,local_48,(longlong)DAT_14cb3e378);
      atexit((_func_5014 *)&LAB_143a7d70a);
      _Init_thread_footer(&DAT_14cb3e380);
    }
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cb3e368;
  *param_1 = DAT_14cb3e360;
  param_1[2] = 0;
  uVar1 = _DAT_14cb3e378;
  _Src = DAT_14cb3e370;
  _Size = (size_t)DAT_14cb3e378;
  *(int *)(param_1 + 3) = DAT_14cb3e378;
  if (_Size == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,uVar1 & 0xffffffff,0);
    memcpy((void *)param_1[2],_Src,_Size);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a7d2b5 FUN_143a7d2b5 body=378 status=ok
// SIG undefined FUN_143a7d2b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a7d2b5(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  size_t _Size;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3e3a8) {
    FUN_144b3d300(&DAT_14cb3e3a8);
    if (DAT_14cb3e3a8 == -1) {
      local_38 = 0x4248000042480000;
      local_30 = 0x42480000;
      FUN_1446f470e(&local_40,L"Particles.DecalSize",1);
      DAT_14cb3e388 = local_40;
      DAT_14cb3e390 = FUN_144830b78(&DAT_14cb3e390,&DAT_14cb42140);
      DAT_14cb3e398 = (void *)0x0;
      _DAT_14cb3e3a0 = 0;
      FUN_140121138(&DAT_14cb3e388);
      memcpy(DAT_14cb3e398,&local_38,(longlong)DAT_14cb3e3a0);
      atexit((_func_5014 *)&LAB_143a7d71b);
      _Init_thread_footer(&DAT_14cb3e3a8);
    }
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cb3e390;
  *param_1 = DAT_14cb3e388;
  param_1[2] = 0;
  uVar1 = _DAT_14cb3e3a0;
  _Src = DAT_14cb3e398;
  _Size = (size_t)DAT_14cb3e3a0;
  *(int *)(param_1 + 3) = DAT_14cb3e3a0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,uVar1 & 0xffffffff,0);
    memcpy((void *)param_1[2],_Src,_Size);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a7d430 FUN_143a7d430 body=364 status=ok
// SIG undefined FUN_143a7d430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a7d430(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  size_t _Size;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3e3d0) {
    FUN_144b3d300(&DAT_14cb3e3d0);
    if (DAT_14cb3e3d0 == -1) {
      local_2c = 0x3f800000;
      FUN_1446f470e(&local_38,L"Particles.DecalFade",1);
      DAT_14cb3e3b0 = local_38;
      DAT_14cb3e3b8 = FUN_144830b78(&DAT_14cb3e3b8,&DAT_14cb420f0);
      DAT_14cb3e3c0 = (void *)0x0;
      _DAT_14cb3e3c8 = 0;
      FUN_140121138(&DAT_14cb3e3b0);
      memcpy(DAT_14cb3e3c0,&local_2c,(longlong)DAT_14cb3e3c8);
      atexit((_func_5014 *)&LAB_143a7d72c);
      _Init_thread_footer(&DAT_14cb3e3d0);
    }
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cb3e3b8;
  *param_1 = DAT_14cb3e3b0;
  param_1[2] = 0;
  uVar1 = _DAT_14cb3e3c8;
  _Src = DAT_14cb3e3c0;
  _Size = (size_t)DAT_14cb3e3c8;
  *(int *)(param_1 + 3) = DAT_14cb3e3c8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,uVar1 & 0xffffffff,0);
    memcpy((void *)param_1[2],_Src,_Size);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a7d59d FUN_143a7d59d body=364 status=ok
// SIG undefined FUN_143a7d59d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143a7d59d(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  size_t _Size;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3e3f8) {
    FUN_144b3d300(&DAT_14cb3e3f8);
    if (DAT_14cb3e3f8 == -1) {
      local_2c = 0xffffffff;
      FUN_1446f470e(&local_38,L"Particles.DecalVisible",1);
      DAT_14cb3e3d8 = local_38;
      DAT_14cb3e3e0 = FUN_144830b78(&DAT_14cb3e3e0,&DAT_14cb420e0);
      DAT_14cb3e3e8 = (void *)0x0;
      _DAT_14cb3e3f0 = 0;
      FUN_140121138(&DAT_14cb3e3d8);
      memcpy(DAT_14cb3e3e8,&local_2c,(longlong)DAT_14cb3e3f0);
      atexit((_func_5014 *)&LAB_143a7d73d);
      _Init_thread_footer(&DAT_14cb3e3f8);
    }
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cb3e3e0;
  *param_1 = DAT_14cb3e3d8;
  param_1[2] = 0;
  uVar1 = _DAT_14cb3e3f0;
  _Src = DAT_14cb3e3e8;
  _Size = (size_t)DAT_14cb3e3f0;
  *(int *)(param_1 + 3) = DAT_14cb3e3f0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,uVar1 & 0xffffffff,0);
    memcpy((void *)param_1[2],_Src,_Size);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a7d8c6 FUN_143a7d8c6 body=31 status=ok
// SIG undefined FUN_143a7d8c6(void)

undefined8 FUN_143a7d8c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7d952 FUN_143a7d952 body=12 status=ok
// SIG undefined FUN_143a7d952(void)

void FUN_143a7d952(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a7d95b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a7d95e FUN_143a7d95e body=29 status=ok
// SIG undefined FUN_143a7d95e(void)

undefined8 FUN_143a7d95e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7d9a2 FUN_143a7d9a2 body=282 status=ok
// SIG undefined FUN_143a7d9a2(void)

undefined8 * FUN_143a7d9a2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a7dabc FUN_143a7dabc body=117 status=ok
// SIG undefined FUN_143a7dabc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7dabc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14056b1b0(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14056b1b0(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a7db03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a7db32 FUN_143a7db32 body=2534 status=ok
// SIG undefined FUN_143a7db32(void)

void FUN_143a7db32(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
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
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  byte bVar24;
  int iVar25;
  uint *puVar26;
  ulonglong uVar27;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  int iVar35;
  longlong lVar36;
  uint uVar37;
  int iVar38;
  longlong *plVar39;
  ulonglong uVar40;
  bool bVar41;
  
  lVar21 = *param_1;
  lVar29 = param_1[1];
  plVar39 = (longlong *)(lVar21 + 0x10);
  uVar37 = (int)((ulonglong)lVar29 >> 0x20) * 0x17 + (int)lVar29;
  iVar31 = *(int *)(lVar21 + 0x18);
  iVar38 = *(int *)(lVar21 + 0x44);
  if (iVar31 != iVar38) {
    lVar19 = lVar21 + 0x48;
    if (*(longlong *)(lVar21 + 0x50) != 0) {
      lVar19 = *(longlong *)(lVar21 + 0x50);
    }
    iVar35 = *(int *)(lVar19 + (ulonglong)(*(int *)(lVar21 + 0x58) - 1U & uVar37) * 4);
    if (iVar35 != -1) {
      do {
        lVar19 = *plVar39 + (longlong)iVar35 * 0x38;
        if (*(longlong *)(*plVar39 + (longlong)iVar35 * 0x38) == lVar29) {
          if (lVar19 != 0) goto LAB_143a7dd3f;
          break;
        }
        iVar35 = *(int *)(lVar19 + 0x30);
      } while (iVar35 != -1);
    }
  }
  if (iVar38 == 0) {
    *(int *)(lVar21 + 0x18) = iVar31 + 1;
    if (*(int *)(lVar21 + 0x1c) == iVar31) {
      FUN_1447030e2(plVar39,iVar31);
    }
    iVar38 = *(int *)(lVar21 + 0x38);
    if (iVar38 == 0) {
      iVar35 = -1;
    }
    else {
      iVar35 = iVar38 + 0x1e;
      if (-1 < iVar38 + -1) {
        iVar35 = iVar38 + -1;
      }
      iVar35 = iVar35 >> 5;
    }
    lVar29 = lVar21 + 0x20;
    iVar25 = iVar38 + 1;
    iVar28 = iVar38 + 0x1f;
    if (-1 < iVar38) {
      iVar28 = iVar38;
    }
    if (iVar28 >> 5 == iVar35) {
      *(int *)(lVar21 + 0x38) = iVar25;
    }
    else {
      if (*(int *)(lVar21 + 0x3c) <= iVar38) {
        iVar35 = iVar38;
        if (iVar38 + 0x20U < 0xa0) {
          iVar25 = 0x80;
        }
        else {
          uVar32 = iVar38 + 0x20U >> 5;
          if (*(int *)(lVar21 + 0x3c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar32) {
              uVar15 = uVar32;
            }
          }
          else {
            uVar15 = uVar32 + (uVar32 * 3 >> 3) + 0x10;
          }
          uVar27 = (ulonglong)(uVar15 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar17 = (uint)(uVar27 + 0xf);
              if (uVar15 < 0x1ffd) {
                uVar27 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar27 + 0xf >> 4]];
              }
              else {
                uVar30 = (ulonglong)(uVar17 & 0xfffffff0);
                if (uVar30 < 0x7ff1) {
                  bVar24 = (&DAT_14c841e00)[uVar17 >> 4];
                  uVar40 = 0x32;
                  if (0x32 < bVar24) {
                    uVar40 = (ulonglong)bVar24;
                  }
                  uVar34 = 0x32 - (ulonglong)bVar24;
                  do {
                    uVar27 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0) goto LAB_143a7e381;
                    lVar19 = uVar40 + 1 + uVar34;
                    uVar34 = uVar34 - 1;
                  } while (lVar19 != 0x33);
                }
                uVar27 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar27 = (ulonglong)DAT_14c841df8;
                }
                uVar27 = -uVar27 & (uVar30 + uVar27) - 1;
              }
            }
            else {
              uVar27 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar27,0);
              iVar35 = *(int *)(lVar21 + 0x38);
            }
          }
LAB_143a7e381:
          iVar18 = (int)(uVar27 >> 2);
          iVar25 = -0x20;
          if ((int)uVar32 <= iVar18) {
            iVar25 = iVar18 << 5;
          }
        }
        *(int *)(lVar21 + 0x3c) = iVar25;
        FUN_1446efbd8(lVar29,iVar35);
        iVar25 = *(int *)(lVar21 + 0x38) + 1;
      }
      iVar35 = iVar25 + 0x1f;
      if (-1 < iVar25) {
        iVar35 = iVar25;
      }
      *(int *)(lVar21 + 0x38) = iVar25;
      if (iVar25 % 0x20 != 0) {
        lVar19 = *(longlong *)(lVar21 + 0x30);
        if (*(longlong *)(lVar21 + 0x30) == 0) {
          lVar19 = lVar29;
        }
        bVar24 = -(char)(iVar25 % 0x20);
        *(uint *)(lVar19 + (longlong)(iVar35 >> 5) * 4) =
             (uint)(*(int *)(lVar19 + (longlong)(iVar35 >> 5) * 4) << (bVar24 & 0x1f)) >>
             (bVar24 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar31;
    if (*(longlong *)(lVar21 + 0x30) != 0) {
      lVar29 = *(longlong *)(lVar21 + 0x30);
    }
    bVar24 = (byte)iVar38 & 0x1f;
    puVar3 = (uint *)(lVar29 + (longlong)(iVar28 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar24 | 0xfffffffeU >> 0x20 - bVar24);
  }
  else {
    iVar31 = *(int *)(lVar21 + 0x40);
    lVar19 = (longlong)iVar31;
    iVar35 = *(int *)(*(longlong *)(lVar21 + 0x10) + 4 + lVar19 * 0x38);
    *(int *)(lVar21 + 0x40) = iVar35;
    *(int *)(lVar21 + 0x44) = iVar38 + -1;
    if (iVar38 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(lVar21 + 0x10) + (longlong)iVar35 * 0x38) = 0xffffffff;
    }
  }
  puVar3 = (uint *)(lVar21 + 0x20);
  uVar32 = 1;
  puVar26 = *(uint **)(lVar21 + 0x30);
  if (*(uint **)(lVar21 + 0x30) == (uint *)0x0) {
    puVar26 = puVar3;
  }
  iVar38 = iVar31 + 0x1f;
  if (-1 < iVar31) {
    iVar38 = iVar31;
  }
  puVar26[iVar38 >> 5] = puVar26[iVar38 >> 5] | 1 << ((byte)iVar31 & 0x1f);
  lVar29 = *(longlong *)(lVar21 + 0x10);
  lVar19 = lVar19 * 0x38;
  puVar1 = (undefined4 *)(lVar29 + lVar19);
  lVar33 = param_1[1];
  *(longlong *)(lVar29 + lVar19) = lVar33;
  puVar4 = (undefined8 *)(lVar29 + 8 + lVar19);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(lVar29 + 0x18 + lVar19);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined8 *)(lVar29 + 0x28 + lVar19) = 0;
  *(undefined4 *)(lVar29 + 0x30 + lVar19) = 0xffffffff;
  uVar15 = *(int *)(lVar21 + 0x18) - *(int *)(lVar21 + 0x44);
  if ((uVar15 != 0) && (uVar15 != 1)) {
    lVar29 = lVar21 + 0x48;
    if (*(longlong *)(lVar21 + 0x50) != 0) {
      lVar29 = *(longlong *)(lVar21 + 0x50);
    }
    iVar38 = *(int *)(lVar29 + (ulonglong)(*(int *)(lVar21 + 0x58) - 1U & uVar37) * 4);
    if (iVar38 != -1) {
      do {
        puVar2 = (undefined4 *)(*plVar39 + (longlong)iVar38 * 0x38);
        if (*(longlong *)(*plVar39 + (longlong)iVar38 * 0x38) == lVar33) {
          FUN_1481bc360(puVar2 + 2);
          uVar16 = *puVar1;
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          uVar12 = puVar1[9];
          uVar13 = puVar1[10];
          uVar14 = puVar1[0xb];
          puVar2[8] = puVar1[8];
          puVar2[9] = uVar12;
          puVar2[10] = uVar13;
          puVar2[0xb] = uVar14;
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          *puVar2 = uVar16;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          FUN_14056b2ac(plVar39,iVar31);
          goto LAB_143a7dd2d;
        }
        iVar38 = puVar2[0xc];
      } while (iVar38 != -1);
    }
  }
  if (3 < uVar15) {
    uVar27 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
    lVar29 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    uVar32 = 1 << ((byte)lVar29 & 0x1f);
  }
  if (((int)uVar15 < 1) || ((int)uVar32 <= *(int *)(lVar21 + 0x58))) {
    uVar37 = *(int *)(lVar21 + 0x58) - 1U & uVar37;
    puVar1[0xd] = uVar37;
    lVar29 = *(longlong *)(lVar21 + 0x50);
    if (*(longlong *)(lVar21 + 0x50) == 0) {
      lVar29 = lVar21 + 0x48;
    }
    puVar1[0xc] = *(undefined4 *)
                   (lVar29 + ((longlong)*(int *)(lVar21 + 0x58) - 1U & (longlong)(int)uVar37) * 4);
    lVar29 = *(longlong *)(lVar21 + 0x50);
    if (*(longlong *)(lVar21 + 0x50) == 0) {
      lVar29 = lVar21 + 0x48;
    }
    *(int *)(lVar29 + ((longlong)*(int *)(lVar21 + 0x58) - 1U & (longlong)(int)uVar37) * 4) = iVar31
    ;
    goto LAB_143a7dd2d;
  }
  *(uint *)(lVar21 + 0x58) = uVar32;
  plVar22 = (longlong *)(lVar21 + 0x50);
  if (*(longlong *)(lVar21 + 0x50) != 0) {
    FUN_1446efa72(plVar22,0,0,4);
    uVar32 = *(uint *)(lVar21 + 0x58);
  }
  lVar29 = lVar21 + 0x48;
  if (uVar32 == 1) {
    if (*plVar22 != 0) {
      FUN_1446efa72(plVar22,0,0,4);
    }
LAB_143a7e0b8:
    uVar37 = 0;
    do {
      lVar19 = *(longlong *)(lVar21 + 0x50);
      if (*(longlong *)(lVar21 + 0x50) == 0) {
        lVar19 = lVar29;
      }
      *(undefined4 *)(lVar19 + (ulonglong)(*(int *)(lVar21 + 0x58) + 0x7fffffffU & uVar37) * 4) =
           0xffffffff;
      uVar37 = uVar37 + 1;
    } while (uVar32 != uVar37);
  }
  else {
    if (uVar32 == 0) goto LAB_143a7dd2d;
    FUN_1446efa72(plVar22,0,uVar32,4);
    if (0 < (int)uVar32) goto LAB_143a7e0b8;
  }
  iVar38 = *(int *)(lVar21 + 0x38);
  if (iVar38 == 0) {
    uVar27 = 0;
    uVar30 = 1;
    iVar35 = 0;
    iVar25 = 0;
  }
  else {
    puVar26 = *(uint **)(lVar21 + 0x30);
    if (*(uint **)(lVar21 + 0x30) == (uint *)0x0) {
      puVar26 = puVar3;
    }
    uVar37 = *puVar26;
    if (uVar37 == 0) {
      iVar35 = iVar38 + 0x1e;
      if (-1 < iVar38 + -1) {
        iVar35 = iVar38 + -1;
      }
      uVar27 = 0;
      uVar30 = (ulonglong)(uint)(iVar35 >> 5);
      if (iVar35 >> 5 < 1) {
        uVar30 = uVar27;
      }
      iVar25 = 0;
      do {
        if (uVar30 == uVar27) goto LAB_143a7dd2d;
        iVar25 = iVar25 + 0x20;
        uVar37 = puVar26[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar37 == 0);
    }
    else {
      uVar27 = 0;
      iVar25 = 0;
    }
    uVar30 = (ulonglong)(-uVar37 & uVar37);
    uVar40 = uVar30 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar40 != 0) {
      for (; uVar40 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar35 = (iVar25 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar38 <= iVar35) {
      iVar35 = iVar38;
    }
  }
  if (iVar35 < iVar38) {
    uVar37 = 0xffffffff;
    do {
      lVar19 = *(longlong *)(lVar21 + 0x10);
      lVar36 = (longlong)iVar35 * 0x38;
      uVar40 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar19 + lVar36) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar19 + lVar36)) & (longlong)*(int *)(lVar21 + 0x58) - 1U;
      iVar38 = (int)uVar40;
      *(int *)(lVar19 + 0x34 + lVar36) = iVar38;
      lVar33 = *(longlong *)(lVar21 + 0x50);
      if (*(longlong *)(lVar21 + 0x50) == 0) {
        lVar33 = lVar29;
      }
      *(undefined4 *)(lVar19 + 0x30 + lVar36) =
           *(undefined4 *)(lVar33 + ((longlong)*(int *)(lVar21 + 0x58) - 1U & uVar40) * 4);
      lVar19 = *(longlong *)(lVar21 + 0x50);
      if (*(longlong *)(lVar21 + 0x50) == 0) {
        lVar19 = lVar29;
      }
      *(int *)(lVar19 + ((longlong)iVar38 & (longlong)*(int *)(lVar21 + 0x58) - 1U) * 4) = iVar35;
      uVar37 = ~(uint)uVar30 & uVar37;
      puVar26 = *(uint **)(lVar21 + 0x30);
      if (*(uint **)(lVar21 + 0x30) == (uint *)0x0) {
        puVar26 = puVar3;
      }
      iVar38 = *(int *)(lVar21 + 0x38);
      iVar35 = (int)uVar27;
      lVar19 = (longlong)iVar35;
      uVar32 = puVar26[lVar19] & uVar37;
      if (uVar32 == 0) {
        iVar28 = iVar38 + 0x1e;
        if (-1 < iVar38 + -1) {
          iVar28 = iVar38 + -1;
        }
        iVar28 = iVar28 >> 5;
        iVar18 = iVar28;
        if (iVar28 < iVar35) {
          iVar18 = iVar35;
        }
        if (iVar28 <= iVar35) break;
        lVar33 = 0;
        while( true ) {
          iVar25 = iVar25 + 0x20;
          uVar32 = puVar26[lVar19 + lVar33 + 1];
          if (uVar32 != 0) break;
          lVar33 = lVar33 + 1;
          if (iVar18 - lVar19 == lVar33) goto LAB_143a7dd2d;
        }
        uVar27 = (ulonglong)(iVar35 + (int)lVar33 + 1);
        uVar37 = 0xffffffff;
      }
      uVar30 = (ulonglong)(-uVar32 & uVar32);
      uVar40 = uVar30 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar35 = (iVar25 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while (iVar35 < iVar38);
  }
LAB_143a7dd2d:
  lVar19 = *plVar39 + (longlong)iVar31 * 0x38;
LAB_143a7dd3f:
  plVar39 = (longlong *)(lVar19 + 8);
  if (param_1[2] == 0) {
    lVar21 = *(longlong *)(lVar19 + 0x10);
    if (lVar21 != 0) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      LOCK();
      puVar3 = (uint *)(lVar21 + 8);
      uVar37 = *puVar3;
      *puVar3 = *puVar3 - 1;
      UNLOCK();
      if ((uVar37 & 0x3fffffff) == 1) {
        puVar3 = (uint *)(lVar21 + 8);
        LOCK();
        uVar37 = *puVar3;
        *puVar3 = *puVar3 | 0x40000000;
        UNLOCK();
        if ((uVar37 >> 0x1e & 1) == 0) {
          bVar24 = *(byte *)(lVar21 + 0xd);
          plVar20 = (longlong *)FUN_14001cc68(0x10,8);
          plVar20[1] = lVar21;
          plVar22 = DAT_14ca843c0;
          plVar23 = DAT_14ca843c8;
          if ((bVar24 & 2) == 0) {
            do {
              *plVar20 = (longlong)plVar22;
              LOCK();
              bVar41 = plVar22 != DAT_14ca843c0;
              plVar23 = plVar20;
              if (bVar41) {
                plVar22 = DAT_14ca843c0;
                plVar23 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar23;
              UNLOCK();
            } while (bVar41);
          }
          else {
            do {
              *plVar20 = (longlong)plVar23;
              LOCK();
              bVar41 = plVar23 != DAT_14ca843c8;
              plVar22 = plVar20;
              if (bVar41) {
                plVar23 = DAT_14ca843c8;
                plVar22 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar22;
              UNLOCK();
            } while (bVar41);
          }
        }
      }
    }
    lVar21 = *plVar39;
    if (lVar21 != 0) {
      *plVar39 = 0;
      LOCK();
      puVar3 = (uint *)(lVar21 + 8);
      uVar37 = *puVar3;
      *puVar3 = *puVar3 - 1;
      UNLOCK();
      if ((uVar37 & 0x3fffffff) == 1) {
        puVar3 = (uint *)(lVar21 + 8);
        LOCK();
        uVar37 = *puVar3;
        *puVar3 = *puVar3 | 0x40000000;
        UNLOCK();
        if ((uVar37 >> 0x1e & 1) == 0) {
          bVar24 = *(byte *)(lVar21 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = lVar21;
          plVar39 = DAT_14ca843c0;
          plVar22 = DAT_14ca843c8;
          if ((bVar24 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar39;
              LOCK();
              bVar41 = plVar39 != DAT_14ca843c0;
              plVar22 = plVar23;
              if (bVar41) {
                plVar39 = DAT_14ca843c0;
                plVar22 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar22;
              UNLOCK();
            } while (bVar41);
          }
          else {
            do {
              *plVar23 = (longlong)plVar22;
              LOCK();
              bVar41 = plVar22 != DAT_14ca843c8;
              plVar39 = plVar23;
              if (bVar41) {
                plVar22 = DAT_14ca843c8;
                plVar39 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar39;
              UNLOCK();
            } while (bVar41);
          }
        }
      }
    }
    *(undefined8 *)(lVar19 + 0x18) = 0;
    uVar16 = 0;
  }
  else {
    lVar21 = *(longlong *)(*(longlong *)(param_1[2] + 0x128) + 0x10);
    lVar29 = *(longlong *)(lVar19 + 0x10);
    if (lVar29 != lVar21) {
      *(longlong *)(lVar19 + 0x10) = lVar21;
      if (lVar21 != 0) {
        LOCK();
        *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
        UNLOCK();
      }
      if (lVar29 != 0) {
        LOCK();
        puVar3 = (uint *)(lVar29 + 8);
        uVar37 = *puVar3;
        *puVar3 = *puVar3 - 1;
        UNLOCK();
        if ((uVar37 & 0x3fffffff) == 1) {
          puVar3 = (uint *)(lVar29 + 8);
          LOCK();
          uVar37 = *puVar3;
          *puVar3 = *puVar3 | 0x40000000;
          UNLOCK();
          if ((uVar37 >> 0x1e & 1) == 0) {
            bVar24 = *(byte *)(lVar29 + 0xd);
            plVar20 = (longlong *)FUN_14001cc68(0x10,8);
            plVar20[1] = lVar29;
            plVar22 = DAT_14ca843c0;
            plVar23 = DAT_14ca843c8;
            if ((bVar24 & 2) == 0) {
              do {
                *plVar20 = (longlong)plVar22;
                LOCK();
                bVar41 = plVar22 != DAT_14ca843c0;
                plVar23 = plVar20;
                if (bVar41) {
                  plVar22 = DAT_14ca843c0;
                  plVar23 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar23;
                UNLOCK();
              } while (bVar41);
            }
            else {
              do {
                *plVar20 = (longlong)plVar23;
                LOCK();
                bVar41 = plVar23 != DAT_14ca843c8;
                plVar22 = plVar20;
                if (bVar41) {
                  plVar23 = DAT_14ca843c8;
                  plVar22 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar22;
                UNLOCK();
              } while (bVar41);
            }
          }
        }
      }
    }
    lVar21 = FUN_1447b4020(param_1[2]);
    if (lVar21 == 0) {
      plVar22 = &DAT_14c9c0d80;
    }
    else {
      lVar21 = FUN_1447b4020(param_1[2]);
      plVar22 = (longlong *)(lVar21 + 0x18);
    }
    lVar21 = *plVar22;
    lVar29 = *plVar39;
    if (lVar29 != lVar21) {
      *plVar39 = lVar21;
      if (lVar21 != 0) {
        LOCK();
        *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
        UNLOCK();
      }
      if (lVar29 != 0) {
        LOCK();
        puVar3 = (uint *)(lVar29 + 8);
        uVar37 = *puVar3;
        *puVar3 = *puVar3 - 1;
        UNLOCK();
        if ((uVar37 & 0x3fffffff) == 1) {
          puVar3 = (uint *)(lVar29 + 8);
          LOCK();
          uVar37 = *puVar3;
          *puVar3 = *puVar3 | 0x40000000;
          UNLOCK();
          if ((uVar37 >> 0x1e & 1) == 0) {
            bVar24 = *(byte *)(lVar29 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10,8);
            plVar23[1] = lVar29;
            plVar39 = DAT_14ca843c0;
            plVar22 = DAT_14ca843c8;
            if ((bVar24 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar39;
                LOCK();
                bVar41 = plVar39 != DAT_14ca843c0;
                plVar22 = plVar23;
                if (bVar41) {
                  plVar39 = DAT_14ca843c0;
                  plVar22 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar22;
                UNLOCK();
              } while (bVar41);
            }
            else {
              do {
                *plVar23 = (longlong)plVar22;
                LOCK();
                bVar41 = plVar22 != DAT_14ca843c8;
                plVar39 = plVar23;
                if (bVar41) {
                  plVar22 = DAT_14ca843c8;
                  plVar39 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar39;
                UNLOCK();
              } while (bVar41);
            }
          }
        }
      }
    }
    *(longlong *)(lVar19 + 0x18) = param_1[3];
    uVar16 = (undefined4)param_1[4];
  }
  *(undefined4 *)(lVar19 + 0x20) = uVar16;
  return;
}



// FUNCTION 143a7e528 FUN_143a7e528 body=29 status=ok
// SIG undefined FUN_143a7e528(void)

void FUN_143a7e528(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a7e546 FUN_143a7e546 body=29 status=ok
// SIG undefined FUN_143a7e546(void)

undefined8 FUN_143a7e546(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7e564 FUN_143a7e564 body=282 status=ok
// SIG undefined FUN_143a7e564(void)

undefined8 * FUN_143a7e564(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a7e67e FUN_143a7e67e body=91 status=ok
// SIG undefined FUN_143a7e67e(void)

void FUN_143a7e67e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a7db32(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a7db32(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a7e6ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a7e6e6 FUN_143a7e6e6 body=31 status=ok
// SIG undefined FUN_143a7e6e6(void)

undefined8 FUN_143a7e6e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7e70a FUN_143a7e70a body=31 status=ok
// SIG undefined FUN_143a7e70a(void)

undefined8 FUN_143a7e70a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7e73a FUN_143a7e73a body=370 status=ok
// SIG undefined FUN_143a7e73a(void)

void FUN_143a7e73a(longlong param_1)

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
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x1010001;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 1;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_143a7e85d;
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
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
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
LAB_143a7e85d:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a7e8ae FUN_143a7e8ae body=397 status=ok
// SIG undefined FUN_143a7e8ae(void)

void FUN_143a7e8ae(longlong param_1)

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
  longlong local_48;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_39;
  undefined1 local_31;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x101;
  local_3a = 1;
  local_31 = 0;
  local_39 = 0;
  local_30 = 0x17f7fffff;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_143a7e9ec;
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
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
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
LAB_143a7e9ec:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a7ea3c FUN_143a7ea3c body=282 status=ok
// SIG undefined FUN_143a7ea3c(void)

void FUN_143a7ea3c(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  *(char *)(*param_1 + 0x58) = (char)param_1[10];
  *(undefined1 *)(*param_1 + 0x59) = *(undefined1 *)((longlong)param_1 + 0x51);
  *(undefined1 *)(*param_1 + 0x5a) = *(undefined1 *)((longlong)param_1 + 0x52);
  lVar7 = *param_1;
  *(longlong *)(lVar7 + 0x20) = param_1[3];
  lVar4 = param_1[2];
  *(longlong *)(lVar7 + 0x10) = param_1[1];
  *(longlong *)(lVar7 + 0x18) = lVar4;
  lVar7 = *param_1;
  *(longlong *)(lVar7 + 0x38) = param_1[6];
  lVar4 = param_1[5];
  *(longlong *)(lVar7 + 0x28) = param_1[4];
  *(longlong *)(lVar7 + 0x30) = lVar4;
  lVar7 = *param_1;
  *(longlong *)(lVar7 + 0x50) = param_1[9];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x3c);
  lVar4 = param_1[8];
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x44);
  *(int *)(lVar7 + 0x40) = (int)param_1[7];
  *(undefined4 *)(lVar7 + 0x44) = uVar5;
  *(int *)(lVar7 + 0x48) = (int)lVar4;
  *(undefined4 *)(lVar7 + 0x4c) = uVar6;
  if ((((longlong *)param_1[0xb] == (longlong *)0x0) ||
      (lVar7 = *(longlong *)param_1[0xb], lVar7 == 0)) ||
     (lVar7 = *(longlong *)(lVar7 + 0x10), lVar7 == 0)) {
    lVar7 = *(longlong *)(DAT_14ca94db8 + 0x10);
  }
  lVar4 = *(longlong *)(*param_1 + 0x60);
  if (lVar4 != lVar7) {
    *(longlong *)(*param_1 + 0x60) = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
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
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar4;
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
  }
  return;
}



// FUNCTION 143a7eb60 FUN_143a7eb60 body=29 status=ok
// SIG undefined FUN_143a7eb60(void)

void FUN_143a7eb60(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a7eb7e FUN_143a7eb7e body=52 status=ok
// SIG undefined FUN_143a7eb7e(void)

undefined8 * FUN_143a7eb7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adf30a0;
  FUN_1417f83cc(param_1 + 0xc);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7ebb2 FUN_143a7ebb2 body=282 status=ok
// SIG undefined FUN_143a7ebb2(void)

undefined8 * FUN_143a7ebb2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a7eccc FUN_143a7eccc body=420 status=ok
// SIG undefined FUN_143a7eccc(void)

void FUN_143a7eccc(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1[0x15] + 0x58) = *(undefined1 *)(param_1 + 0x1f);
  *(undefined1 *)(param_1[0x15] + 0x59) = *(undefined1 *)((longlong)param_1 + 0xf9);
  *(undefined1 *)(param_1[0x15] + 0x5a) = *(undefined1 *)((longlong)param_1 + 0xfa);
  lVar10 = param_1[0x15];
  *(undefined8 *)(lVar10 + 0x20) = param_1[0x18];
  uVar9 = param_1[0x17];
  *(undefined8 *)(lVar10 + 0x10) = param_1[0x16];
  *(undefined8 *)(lVar10 + 0x18) = uVar9;
  lVar10 = param_1[0x15];
  *(undefined8 *)(lVar10 + 0x38) = param_1[0x1b];
  uVar9 = param_1[0x1a];
  *(undefined8 *)(lVar10 + 0x28) = param_1[0x19];
  *(undefined8 *)(lVar10 + 0x30) = uVar9;
  lVar10 = param_1[0x15];
  *(undefined8 *)(lVar10 + 0x50) = param_1[0x1e];
  uVar6 = *(undefined4 *)((longlong)param_1 + 0xe4);
  uVar7 = *(undefined4 *)(param_1 + 0x1d);
  uVar8 = *(undefined4 *)((longlong)param_1 + 0xec);
  *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(lVar10 + 0x44) = uVar6;
  *(undefined4 *)(lVar10 + 0x48) = uVar7;
  *(undefined4 *)(lVar10 + 0x4c) = uVar8;
  if ((((longlong *)param_1[0x20] == (longlong *)0x0) ||
      (lVar10 = *(longlong *)param_1[0x20], lVar10 == 0)) ||
     (lVar10 = *(longlong *)(lVar10 + 0x10), lVar10 == 0)) {
    lVar10 = *(longlong *)(DAT_14ca94db8 + 0x10);
  }
  lVar5 = *(longlong *)(param_1[0x15] + 0x60);
  if (lVar5 != lVar10) {
    *(longlong *)(param_1[0x15] + 0x60) = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
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
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar5;
          plVar13 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar13;
              LOCK();
              bVar14 = plVar13 != DAT_14ca843c0;
              plVar12 = plVar11;
              if (bVar14) {
                plVar13 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar14 = plVar12 != DAT_14ca843c8;
              plVar13 = plVar11;
              if (bVar14) {
                plVar12 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
  FUN_1417f83cc(param_1 + 0x20);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a7ee3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}


