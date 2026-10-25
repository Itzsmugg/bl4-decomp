// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f46dd2 FUN_146f46dd2 body=122 status=ok
// SIG undefined FUN_146f46dd2(void)

undefined4 FUN_146f46dd2(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x218) != *(int *)(param_1 + 0x244)) {
    lVar1 = param_1 + 0x248;
    if (*(longlong *)(param_1 + 0x250) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x250);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 600) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x210) + (longlong)iVar2 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x210) + (longlong)iVar2 * 0x10) == param_2) {
          if ((undefined4 *)(lVar1 + 4) == (undefined4 *)0x0 || lVar1 == 0) {
            return 0;
          }
          return *(undefined4 *)(lVar1 + 4);
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f46e4c FUN_146f46e4c body=361 status=ok
// SIG undefined FUN_146f46e4c(void)

void FUN_146f46e4c(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  short *psVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x98);
  lVar9 = (longlong)(int)param_2 * 0x10;
  puVar1 = (undefined8 *)(lVar4 + lVar9);
  uVar7 = *(ulonglong *)(lVar4 + 8 + lVar9);
  uVar6 = uVar7 & 0xffffffffffe0ffff;
  *(ulonglong *)(lVar4 + 8 + lVar9) = uVar6;
  if (0x40 < ((uint)uVar7 & 0xffff)) {
    FUN_1400020a8(*puVar1);
    uVar6 = puVar1[1];
  }
  puVar1[1] = uVar6 & 0xfffffffff7ffffff;
  bVar5 = (byte)param_2 & 0x1f;
  uVar8 = -2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5;
  uVar7 = (ulonglong)(param_2 >> 5);
  puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + uVar7 * 4);
  *puVar2 = *puVar2 & uVar8;
  puVar2 = (uint *)(*(longlong *)(param_1 + 200) + uVar7 * 4);
  *puVar2 = *puVar2 & uVar8;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0xf8) + uVar7 * 4);
  *puVar2 = *puVar2 & uVar8;
  psVar3 = (short *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x2b0) +
                      (longlong)((int)param_2 / 100) * 8) +
                    (ulonglong)(uint)((int)param_2 % 100) * 2);
  *psVar3 = *psVar3 + -1;
  FUN_146f1d6c4(param_1 + 0x110,param_2);
  uVar7 = puVar1[1];
  uVar10 = (uint)(uVar7 >> 0x21) & 3;
  uVar8 = 2;
  if (uVar10 != 2) {
    FUN_146f176da(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0xc),param_2,uVar10,0);
    uVar7 = puVar1[1];
    uVar8 = (uint)(uVar7 >> 0x21) & 3;
  }
  uVar10 = (uint)(uVar7 >> 0x1f) & 3;
  if ((uVar8 != uVar10) && (uVar10 != 2)) {
    FUN_146f176da(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0xc),param_2,uVar10,0);
    uVar7 = puVar1[1];
  }
  puVar1[1] = uVar7 & 0xfffffff87fffffff | 0x500000000;
  return;
}



// FUNCTION 146f46fb6 FUN_146f46fb6 body=362 status=ok
// SIG undefined FUN_146f46fb6(void)

uint FUN_146f46fb6(longlong param_1,undefined4 param_2,longlong param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_4 & 1) != 0) &&
       ((((*(byte *)(param_3 + 10) & 0x80) != 0 ||
         (cVar1 = FUN_146f47122(param_1,param_2), cVar1 != '\0')) ||
        (cVar1 = FUN_146f49b96(param_1 + 0x318,param_2,1), uVar2 = 0, cVar1 != '\0')))) {
      uVar2 = 1;
    }
    uVar4 = uVar2;
    if ((param_4 & 2) != 0) {
      cVar1 = FUN_146f1575a(param_1 + 0x110,0,param_2);
      uVar4 = uVar2 + 2;
      if (cVar1 != '\0') {
        uVar4 = uVar2;
      }
    }
    uVar3 = uVar4 + 4;
    if ((*(uint *)(param_3 + 8) & 0x105f0000) != 0x104b0000) {
      uVar3 = uVar4;
    }
    if ((param_4 & 4) == 0) {
      uVar3 = uVar4;
    }
    uVar2 = uVar3;
    if (((*(uint *)(param_3 + 8) >> 0x16 & 1) == 0) && (uVar3 != param_4)) {
      FUN_146f1b984(*(longlong *)(param_1 + 0x180) + 0x300,&local_50,param_2);
      if ((longlong)local_48 != 0) {
        lVar5 = 0;
        do {
          uVar2 = FUN_146f46fb6(param_1,(longlong)*(int *)(local_50 + lVar5),
                                (longlong)*(int *)(local_50 + lVar5) * 0x10 +
                                *(longlong *)(param_1 + 0x98),param_4);
          uVar3 = uVar2 | uVar3;
          uVar2 = param_4;
          if (uVar3 == param_4) break;
          lVar5 = lVar5 + 4;
          uVar2 = uVar3;
        } while ((longlong)local_48 * 4 != lVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146f47122 FUN_146f47122 body=124 status=ok
// SIG undefined FUN_146f47122(void)

ulonglong FUN_146f47122(longlong param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + 2 + (longlong)param_2 * 4);
  if (uVar1 != 0x8000) {
    uVar3 = ((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x90) & 0x7fff) + *(int *)(param_1 + 0x34);
    uVar4 = (ulonglong)uVar3;
    lVar5 = (ulonglong)(*(uint *)(param_1 + 0x38) & uVar3) * 0x10 + *(longlong *)(param_1 + 0x40);
    if (lVar5 != 0) {
      while( true ) {
        uVar4 = CONCAT71((int7)(uVar4 >> 8),*(undefined1 *)(lVar5 + 0xb)) & 0xffffffffffffff02;
        bVar2 = (byte)uVar4 >> 1;
        uVar4 = CONCAT71((int7)(uVar4 >> 8),bVar2);
        if (bVar2 != 0) {
          return uVar4;
        }
        if (*(ushort *)(lVar5 + 0xc) == 0x8000) break;
        lVar5 = (ulonglong)
                (*(uint *)(param_1 + 0x38) &
                *(int *)(param_1 + 0x34) +
                ((uint)*(ushort *)(lVar5 + 0xc) - (uint)*(ushort *)(param_1 + 0x90) & 0x7fff)) *
                0x10 + *(longlong *)(param_1 + 0x40);
        if (lVar5 == 0) {
          return uVar4;
        }
      }
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 146f4719e FUN_146f4719e body=636 status=ok
// SIG undefined FUN_146f4719e(void)

void FUN_146f4719e(longlong param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  cVar4 = DAT_14c75f490;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = (uint)*(undefined8 *)(param_3 + 8);
  bVar7 = (byte)param_2;
  if ((uVar5 >> 0x16 & 1) == 0) {
    if ((uVar5 >> 0x15 & 1) != 0) {
      FUN_146f1b984(*(longlong *)(param_1 + 0x180) + 0x300,&local_48);
      if ((longlong)local_40 != 0) {
        lVar9 = 0;
        do {
          uVar5 = *(uint *)(local_48 + lVar9);
          uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (longlong)(int)uVar5 * 0x10);
          if (((uint)uVar6 & 0x1f0000) == 0x80000) {
            *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)(int)uVar5 * 0x10 + 8) =
                 uVar6 & 0xffffffffdfe0ffff | 0xa0000;
            bVar3 = (byte)uVar5 & 0x1f;
            puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar5 >> 5) * 4);
            *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          }
          lVar9 = lVar9 + 4;
        } while ((longlong)local_40 * 4 != lVar9);
      }
    }
  }
  else {
    lVar9 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
             (longlong)((int)param_2 / 100) * 8);
    lVar8 = (ulonglong)(uint)((int)param_2 % 100) * 0x38;
    uVar5 = *(uint *)(lVar9 + 0x28 + lVar8);
    if (((longlong)(int)uVar5 != 0) && ((*(byte *)(lVar9 + lVar8 + 0x32) & 4) != 0)) {
      lVar9 = *(longlong *)(param_1 + 0x98);
      lVar8 = (longlong)(int)uVar5 * 0x10;
      if ((byte)((*(byte *)(lVar9 + 10 + lVar8) & 0x1f) - 1) < 9) {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar5 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
        pbVar1 = (byte *)(lVar9 + lVar8 + 10);
        *pbVar1 = *pbVar1 | 0x20;
        lVar9 = (longlong)(int)param_2 * 0x10;
        *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar9) =
             *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar9) & 0xffffffffffe0ffff |
             0x80000;
        if ((cVar4 == '\x01') &&
           (8 < (byte)((*(byte *)(*(longlong *)(param_1 + 0x98) + 10 + lVar9) & 0x1f) - 1))) {
          uVar6 = (ulonglong)(param_2 >> 5);
          uVar5 = 1 << (bVar7 & 0x1f);
        }
        else {
          uVar5 = 1 << (bVar7 & 0x1f);
          uVar6 = (ulonglong)(param_2 >> 5);
          puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + uVar6 * 4);
          *puVar2 = *puVar2 | uVar5;
        }
        puVar2 = (uint *)(*(longlong *)(param_1 + 200) + uVar6 * 4);
        *puVar2 = *puVar2 | uVar5;
        uVar6 = *(ulonglong *)(param_3 + 8) | 0x20000000;
        goto LAB_146f47235;
      }
    }
  }
  puVar2 = (uint *)(*(longlong *)(param_1 + 200) + (ulonglong)(param_2 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << (bVar7 & 0x1f);
  puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(param_2 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << (bVar7 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar7 & 0x1f));
  lVar9 = (longlong)(int)param_2 * 0x10;
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar9) =
       *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar9) & 0xffffffffffe0ffff | 0xa0000;
  uVar6 = *(ulonglong *)(param_3 + 8) & 0xffffffffff7fffff;
LAB_146f47235:
  *(ulonglong *)(param_3 + 8) = uVar6;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4741c FUN_146f4741c body=2253 status=ok
// SIG undefined FUN_146f4741c(void)

void FUN_146f4741c(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  byte bVar21;
  bool bVar22;
  undefined1 auStack_c8 [40];
  uint local_a0;
  uint local_9c;
  int *local_98;
  longlong *local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  int *local_68;
  uint local_60;
  int local_5c;
  uint *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_5c = *(int *)(param_1 + 0x108);
  local_68 = *(int **)(param_1 + 0xf8);
  local_60 = local_5c + 0x1fU >> 5;
  if (local_5c == 0) {
    local_68 = &local_5c;
  }
  uVar12 = *(uint *)(param_2 + 1);
  local_9c = 0xffffffff >> (-*(char *)((longlong)param_2 + 0xc) & 0x1fU);
  local_98 = local_68;
  if ((ulonglong)uVar12 != 0) {
    local_80 = *param_2;
    local_88 = (ulonglong)(uVar12 - 1);
    uVar11 = 0;
    local_a0 = 0;
    local_90 = param_2;
    local_78 = (ulonglong)uVar12;
    do {
      uVar12 = *(uint *)(local_80 + uVar11 * 4);
      uVar20 = 0xffffffff;
      if (uVar11 == local_88) {
        uVar20 = local_9c;
      }
      uVar20 = uVar20 & (local_98[uVar11] ^ uVar12);
      uVar13 = local_a0;
      local_70 = uVar11;
      if (uVar20 != 0) {
        do {
          if ((uVar20 & 1) != 0) {
            lVar7 = *(longlong *)(param_1 + 0x98);
            lVar15 = (longlong)(int)uVar13 * 0x10;
            puVar2 = (uint *)(lVar7 + lVar15);
            uVar11 = *(ulonglong *)(lVar7 + 8 + lVar15);
            bVar10 = (byte)uVar13;
            bVar21 = (byte)(uVar11 >> 0x10);
            if ((uVar12 & 1) == 0) {
              if (((uint)uVar11 >> 0x1c & 1) == 0) {
                bVar21 = bVar21 & 0x1f;
                if (bVar21 < 10) {
                  if (bVar21 == 9) {
                    puVar2 = (uint *)(*(longlong *)(param_1 + 200) + (ulonglong)(uVar13 >> 5) * 4);
                    *puVar2 = *puVar2 | 1 << (bVar10 & 0x1f);
                    lVar7 = *(longlong *)(param_1 + 0x98);
                    uVar11 = *(ulonglong *)(lVar7 + 8 + lVar15) & 0xffffffffffe0ffff | 0xb0000;
LAB_146f47587:
                    *(ulonglong *)(lVar7 + 8 + lVar15) = uVar11;
                  }
                  else {
                    uVar16 = (uint)(uVar11 >> 0x23) & 7;
                    if (bVar21 == 3) {
                      iVar6 = FUN_146f46fb6(param_1,uVar13,puVar2,uVar16);
                      if ((iVar6 == 0) ||
                         ((*(byte *)(*(longlong *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
                                      (longlong)((int)uVar13 / 100) * 8) + 0x33 +
                                    (ulonglong)(uint)((int)uVar13 % 100) * 0x38) & 2) == 0))
                      goto LAB_146f47b81;
                    }
                    else {
                      uVar11 = FUN_146f46fb6(param_1,uVar13,puVar2,uVar16);
                      if ((int)uVar11 == 0) {
                        FUN_146f4719e(param_1,uVar13,puVar2);
                        goto LAB_146f474fa;
                      }
                      *(ulonglong *)(puVar2 + 2) =
                           *(ulonglong *)(puVar2 + 2) & 0xffffffc7ffffffff | uVar11 << 0x23;
                      if ((bVar21 != 4) &&
                         (*(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar15) =
                               *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar15) &
                               0xffffffffffe0ffff | 0x60000, (uVar11 & 1) == 0)) {
                        *(byte *)((longlong)puVar2 + 10) = *(byte *)((longlong)puVar2 + 10) & 0x7f;
                      }
                    }
                    puVar2 = (uint *)(*(longlong *)(param_1 + 200) + (ulonglong)(uVar13 >> 5) * 4);
                    *puVar2 = *puVar2 | 1 << (bVar10 & 0x1f);
                  }
                }
                else if (bVar21 == 0xd) {
LAB_146f47b81:
                  FUN_146f46e4c(param_1,uVar13);
                }
              }
            }
            else {
              bVar4 = bVar21 & 0x1f;
              if (bVar4 == 6) {
                if (((uint)uVar11 >> 0x1c & 1) == 0) {
                  uVar16 = 1 << (bVar10 & 0x1f);
                  uVar14 = -2 << (bVar10 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar10 & 0x1f);
                  uVar8 = (ulonglong)(uVar13 >> 5);
                  puVar9 = (uint *)(*(longlong *)(param_1 + 200) + uVar8 * 4);
                  *puVar9 = *puVar9 & uVar14;
                  *(ulonglong *)(puVar2 + 2) =
                       *(ulonglong *)(puVar2 + 2) & 0xffffffc7ffffffff | 0x1000000000;
                  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar15) =
                       *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar15) &
                       0xffffffffffe0ffff | 0x50000;
                  uVar11 = *(ulonglong *)(puVar2 + 2);
                  local_4c = (uint)uVar11 & 0xffff;
                  *(ulonglong *)(puVar2 + 2) = uVar11 & 0xffffffffdfffffff;
                  local_58 = puVar2;
                  if (0x40 < local_4c) {
                    local_58 = *(uint **)puVar2;
                  }
                  local_50 = local_4c + 0x1f >> 5;
                  if ((uVar11 & 0xffff) == 0) goto LAB_146f477bf;
                  bVar22 = true;
                  if (*local_58 == 0) {
                    uVar17 = (ulonglong)local_50;
                    uVar11 = 1;
                    do {
                      uVar19 = uVar11;
                      if (uVar17 == uVar19) break;
                      uVar11 = uVar19 + 1;
                    } while (local_58[uVar19] == 0);
                    goto LAB_146f47770;
                  }
                  goto LAB_146f477cc;
                }
              }
              else if (((uint)(uVar11 >> 0x10) & 0x1f) == 4) {
                uVar16 = 1 << (bVar10 & 0x1f);
                uVar14 = -2 << (bVar10 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar10 & 0x1f);
                uVar8 = (ulonglong)(uVar13 >> 5);
                puVar9 = (uint *)(*(longlong *)(param_1 + 200) + uVar8 * 4);
                *puVar9 = *puVar9 & uVar14;
                uVar11 = *(ulonglong *)(puVar2 + 2);
                *(ulonglong *)(puVar2 + 2) = uVar11 & 0xffffffc7dfffffff | 0x1000000000;
                local_4c = (uint)uVar11 & 0xffff;
                local_58 = puVar2;
                if (0x40 < local_4c) {
                  local_58 = *(uint **)puVar2;
                }
                local_50 = local_4c + 0x1f >> 5;
                if ((uVar11 & 0xffff) == 0) {
LAB_146f477bf:
                  local_58 = &local_4c;
                  bVar22 = false;
                }
                else {
                  bVar22 = true;
                  if (*local_58 == 0) {
                    uVar17 = (ulonglong)local_50;
                    uVar11 = 1;
                    do {
                      uVar19 = uVar11;
                      if (uVar17 == uVar19) break;
                      uVar11 = uVar19 + 1;
                    } while (local_58[uVar19] == 0);
LAB_146f47770:
                    bVar22 = uVar19 < uVar17;
                  }
                }
LAB_146f477cc:
                *(ulonglong *)(puVar2 + 2) =
                     *(ulonglong *)(puVar2 + 2) & 0xffffffffff7fffff |
                     (ulonglong)((byte)(*(ulonglong *)(puVar2 + 2) >> 0x17) & 1 | bVar22) << 0x17;
                if ((puVar2[2] >> 0x17 & 1) == 0) {
                  uVar16 = 0;
                }
                *(uint *)(*(longlong *)(param_1 + 0xe0) + uVar8 * 4) =
                     uVar14 & *(uint *)(*(longlong *)(param_1 + 0xe0) + uVar8 * 4) | uVar16;
              }
              else if ((uVar11 & 0x1f0000) == 0) {
                FUN_142a9dbc8(param_1,uVar13);
              }
              else {
                if ((bVar21 & 0x1d) == 9) {
                  puVar2 = (uint *)(*(longlong *)(param_1 + 200) + (ulonglong)(uVar13 >> 5) * 4);
                  *puVar2 = *puVar2 & (-2 << (bVar10 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar10 & 0x1f)
                                      );
                  lVar7 = *(longlong *)(param_1 + 0x98);
                  uVar11 = *(ulonglong *)(lVar7 + 8 + lVar15) & 0xffffffffffe0ffff | 0x90000;
                  goto LAB_146f47587;
                }
                if ((bVar4 | 2) == 10) {
                  *(ulonglong *)(lVar7 + 8 + lVar15) = uVar11 & 0xffffffffffe0ffff | 0xb0000;
                  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar15) =
                       *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar15) &
                       0xffffffffffe0ffff | 0x90000;
                  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar15) =
                       (ulonglong)((puVar2[2] & 0x8000000) >> 0xb) +
                       (*(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar15) &
                       0xffffffffffe0ffff) + 0x40000;
                  uVar11 = *(ulonglong *)(puVar2 + 2);
                  local_4c = (uint)uVar11 & 0xffff;
                  *(ulonglong *)(puVar2 + 2) = uVar11 & 0xffffffffdfffffff;
                  local_58 = puVar2;
                  if (0x40 < local_4c) {
                    local_58 = *(uint **)puVar2;
                  }
                  local_50 = local_4c + 0x1f >> 5;
                  if ((uVar11 & 0xffff) == 0) {
                    local_58 = &local_4c;
                    bVar22 = false;
                  }
                  else {
                    bVar22 = true;
                    if (*local_58 == 0) {
                      uVar11 = 1;
                      do {
                        uVar8 = uVar11;
                        if (local_50 == uVar8) break;
                        uVar11 = uVar8 + 1;
                      } while (local_58[uVar8] == 0);
                      bVar22 = uVar8 < local_50;
                    }
                  }
                  *(ulonglong *)(puVar2 + 2) =
                       *(ulonglong *)(puVar2 + 2) & 0xffffffffff7fffff |
                       (ulonglong)((byte)(*(ulonglong *)(puVar2 + 2) >> 0x17) & 1 | bVar22) << 0x17;
                  uVar14 = 1 << (bVar10 & 0x1f);
                  uVar16 = uVar14;
                  if ((puVar2[2] >> 0x17 & 1) == 0) {
                    uVar16 = 0;
                  }
                  uVar11 = (ulonglong)((uVar13 >> 5) * 4);
                  *(uint *)(*(longlong *)(param_1 + 0xe0) + uVar11) =
                       *(uint *)(*(longlong *)(param_1 + 0xe0) + uVar11) & ~(1 << (uVar13 & 0x1f)) |
                       uVar16;
                  puVar9 = (uint *)(*(longlong *)(param_1 + 200) + uVar11);
                  *puVar9 = *puVar9 & (-2 << (bVar10 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar10 & 0x1f)
                                      );
                  if (bVar4 == 8) {
                    lVar7 = *(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
                             (longlong)((int)uVar13 / 100) * 8);
                    lVar15 = (ulonglong)(uint)((int)uVar13 % 100) * 0x38;
                    lVar18 = (longlong)*(int *)(lVar7 + 0x28 + lVar15) * 0x10;
                    uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar18);
                    uVar16 = (uint)uVar11;
                    if ((uVar16 & 0x1e0000) < 0xa0000) {
                      *(ulonglong *)(*(longlong *)(param_1 + 0x98) + lVar18 + 8) =
                           uVar11 & 0xffffffffffdfffff |
                           (ulonglong)((puVar2[2] >> 2 | uVar16) & 0x200000);
                      uVar16 = *(uint *)(lVar7 + lVar15 + 0x28);
                      uVar5 = 1 << ((byte)uVar16 & 0x1f);
                      uVar14 = (uint)(*(ulonglong *)(puVar2 + 2) >> 0x17) & 1;
                      if ((*(ulonglong *)(puVar2 + 2) >> 0x17 & 1) != 0) {
                        uVar14 = uVar5;
                      }
                      uVar3 = *(uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar16 >> 5) * 4
                                       );
                      if ((uVar3 >> (uVar16 & 0x1f) & 1) != 0) {
                        uVar14 = uVar5;
                      }
                      *(uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar16 >> 5) * 4) =
                           uVar3 & ~(1 << (uVar16 & 0x1f)) | uVar14;
                    }
                  }
                  else if ((*(byte *)((longlong)puVar2 + 10) & 0x40) == 0) {
                    FUN_146f1b984(*(longlong *)(param_1 + 0x180) + 0x300,&local_58,uVar13);
                    if ((longlong)(int)local_50 != 0) {
                      bVar22 = false;
                      puVar9 = local_58;
                      do {
                        while( true ) {
                          uVar16 = *puVar9;
                          uVar11 = *(ulonglong *)
                                    (*(longlong *)(param_1 + 0x98) + 8 +
                                    (longlong)(int)uVar16 * 0x10);
                          if (((uint)uVar11 & 0x1f0000) == 0xa0000) break;
                          puVar9 = puVar9 + 1;
                          if (puVar9 == local_58 + (int)local_50) {
                            if (!bVar22) goto LAB_146f474fa;
                            goto LAB_146f47c40;
                          }
                        }
                        *(ulonglong *)
                         (*(longlong *)(param_1 + 0x98) + (longlong)(int)uVar16 * 0x10 + 8) =
                             uVar11 & 0xffffffffdfe8ffff | 0x20000000;
                        puVar1 = (uint *)(*(longlong *)(param_1 + 0xe0) +
                                         (ulonglong)(uVar16 >> 5) * 4);
                        *puVar1 = *puVar1 | 1 << ((byte)uVar16 & 0x1f);
                        puVar9 = puVar9 + 1;
                        bVar22 = true;
                      } while (puVar9 != local_58 + (int)local_50);
LAB_146f47c40:
                      puVar9 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar13 >> 5) * 4
                                       );
                      *puVar9 = *puVar9 | uVar14;
                      *(byte *)((longlong)puVar2 + 10) = *(byte *)((longlong)puVar2 + 10) | 0x20;
                    }
                  }
                }
              }
            }
          }
LAB_146f474fa:
          uVar12 = uVar12 >> 1;
          bVar22 = 1 < uVar20;
          uVar20 = uVar20 >> 1;
          uVar13 = uVar13 + 1;
        } while (bVar22);
      }
      uVar11 = local_70 + 1;
      local_a0 = local_a0 + 0x20;
    } while (uVar11 != local_78);
    if (((ulonglong)local_60 != 0) && ((int)local_90[1] != 0)) {
      memcpy(local_68,(void *)*local_90,(ulonglong)local_60 << 2);
    }
  }
  uVar12 = *(uint *)(param_1 + 0x100);
  if ((ulonglong)uVar12 != 0) {
    lVar7 = *(longlong *)(param_1 + 200);
    lVar15 = *(longlong *)(param_1 + 0xf8);
    uVar11 = 0;
    do {
      puVar2 = (uint *)(lVar15 + uVar11 * 4);
      *puVar2 = *puVar2 & ~*(uint *)(lVar7 + uVar11 * 4);
      uVar11 = uVar11 + 1;
    } while (uVar12 != uVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f47cea FUN_146f47cea body=290 status=ok
// SIG undefined FUN_146f47cea(void)

void FUN_146f47cea(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar6 = param_2[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_2;
    lVar11 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + lVar11);
      bVar7 = (byte)uVar2;
      uVar9 = (ulonglong)(uVar2 >> 5);
      if ((*(uint *)(*(longlong *)(param_1 + 0xf8) + uVar9 * 4) >> (uVar2 & 0x1f) & 1) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x98);
        lVar12 = (longlong)(int)uVar2 * 0x10;
        uVar5 = *(undefined8 *)(lVar4 + 8 + lVar12);
        if ((byte)(((byte)((ulonglong)uVar5 >> 0x10) & 0x1f) - 1) < 9) {
          if (((uint)uVar5 >> 0x16 & 1) == 0) {
LAB_146f47d6c:
            puVar8 = (ulonglong *)(lVar4 + lVar12 + 8);
            puVar1 = (uint *)(*(longlong *)(param_1 + 0xe0) + uVar9 * 4);
            *puVar1 = *puVar1 | 1 << (bVar7 & 0x1f);
            *puVar8 = *puVar8 | 0x4000200000;
          }
          else {
            lVar12 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
                      (longlong)((int)uVar2 / 100) * 8);
            lVar10 = (ulonglong)(uint)((int)uVar2 % 100) * 0x38;
            uVar2 = *(uint *)(lVar12 + 0x28 + lVar10);
            if ((uVar2 != 0) && ((*(byte *)(lVar12 + lVar10 + 0x32) & 4) != 0)) {
              bVar7 = (byte)uVar2;
              uVar9 = (ulonglong)(uVar2 >> 5);
              if (((*(uint *)(*(longlong *)(param_1 + 0xf8) + uVar9 * 4) >> (uVar2 & 0x1f) & 1) != 0
                  ) && (lVar12 = (longlong)(int)uVar2 * 0x10,
                       (byte)((*(byte *)(lVar4 + 10 + lVar12) & 0x1f) - 1) < 9)) goto LAB_146f47d6c;
            }
          }
        }
      }
      lVar11 = lVar11 + 4;
    } while ((longlong)(int)lVar6 * 4 != lVar11);
  }
  return;
}



// FUNCTION 146f47e0c FUN_146f47e0c body=498 status=ok
// SIG undefined FUN_146f47e0c(void)

void FUN_146f47e0c(longlong param_1,uint *param_2,uint param_3,byte param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [40];
  uint *local_70;
  uint *local_68;
  uint local_60;
  uint local_5c;
  uint *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  bVar5 = DAT_14c75f490;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_2 + 6;
  if (*(uint **)(param_2 + 8) != (uint *)0x0) {
    local_70 = *(uint **)(param_2 + 8);
  }
  puVar7 = *(uint **)(param_2 + 2);
  if (*(uint **)(param_2 + 2) == (uint *)0x0) {
    puVar7 = param_2;
  }
  if ((longlong)(int)param_2[4] != 0) {
    puVar1 = puVar7 + (longlong)(int)param_2[4] * 2;
    do {
      uVar3 = *puVar7;
      uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (longlong)(int)uVar3 * 0x10);
      if ((uVar9 & 0x1f0000) != 0) {
        puVar8 = (uint *)(*(longlong *)(param_1 + 0x98) + (longlong)(int)uVar3 * 0x10);
        uVar6 = 1 << ((byte)uVar3 & 0x1f);
        uVar4 = *(uint *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)(uVar3 >> 5) * 4);
        if (((uVar4 >> (uVar3 & 0x1f) & 1) != 0) &&
           (((bVar5 & 1) == 0 || ((byte)(((byte)(uVar9 >> 0x10) & 0x1f) - 1) < 9)))) {
          puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar3 >> 5) * 4);
          *puVar2 = *puVar2 | uVar6;
          uVar9 = *(ulonglong *)(puVar8 + 2);
        }
        if ((*(byte *)((longlong)puVar7 + 7) & 1) == 0) {
          *(ulonglong *)(puVar8 + 2) =
               (ulonglong)(((uint)(uVar9 >> 0x23) | param_3) & 7) << 0x23 |
               (ulonglong)((uint)((byte)(uVar9 >> 0x1c) & 1 | param_4) << 0x1c) |
               uVar9 & 0xffffffc7efffffff;
          if ((puVar7[1] >> 0x19 & 1) == 0) goto LAB_146f47f88;
          local_4c = (uint)uVar9 & 0xffff;
          local_58 = puVar8;
          if (0x40 < local_4c) {
            local_58 = *(uint **)puVar8;
          }
          local_60 = local_4c + 0x1f >> 5;
          if ((uVar9 & 0xffff) == 0) {
            local_58 = &local_4c;
            local_5c = 0;
            local_68 = &local_5c;
          }
          else {
            local_68 = local_70 + (puVar7[1] & 0xffffff);
            uVar9 = 0;
            do {
              local_58[uVar9] = local_58[uVar9] | local_68[uVar9];
              uVar9 = uVar9 + 1;
              local_5c = local_4c;
            } while (local_60 != uVar9);
          }
          uVar9 = *(ulonglong *)(puVar8 + 2) & 0xffffffffff7fffff |
                  (ulonglong)((uVar4 & uVar6) != 0) << 0x17;
          local_50 = local_60;
        }
        else {
          uVar9 = uVar9 | 0x200000;
        }
        *(ulonglong *)(puVar8 + 2) = uVar9;
      }
LAB_146f47f88:
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f48000 FUN_146f48000 body=39 status=ok
// SIG undefined FUN_146f48000(void)

void FUN_146f48000(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  short *psVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x98) + 8 + (longlong)(int)param_2 * 0x10) & 0x1f0000) !=
      0x30000) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x98);
  lVar9 = (longlong)(int)param_2 * 0x10;
  puVar1 = (undefined8 *)(lVar4 + lVar9);
  uVar7 = *(ulonglong *)(lVar4 + 8 + lVar9);
  uVar6 = uVar7 & 0xffffffffffe0ffff;
  *(ulonglong *)(lVar4 + 8 + lVar9) = uVar6;
  if (0x40 < ((uint)uVar7 & 0xffff)) {
    FUN_1400020a8(*puVar1);
    uVar6 = puVar1[1];
  }
  puVar1[1] = uVar6 & 0xfffffffff7ffffff;
  bVar5 = (byte)param_2 & 0x1f;
  uVar8 = -2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5;
  uVar7 = (ulonglong)(param_2 >> 5);
  puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + uVar7 * 4);
  *puVar2 = *puVar2 & uVar8;
  puVar2 = (uint *)(*(longlong *)(param_1 + 200) + uVar7 * 4);
  *puVar2 = *puVar2 & uVar8;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0xf8) + uVar7 * 4);
  *puVar2 = *puVar2 & uVar8;
  psVar3 = (short *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x2b0) +
                      (longlong)((int)param_2 / 100) * 8) +
                    (ulonglong)(uint)((int)param_2 % 100) * 2);
  *psVar3 = *psVar3 + -1;
  FUN_146f1d6c4(param_1 + 0x110,param_2);
  uVar7 = puVar1[1];
  uVar10 = (uint)(uVar7 >> 0x21) & 3;
  uVar8 = 2;
  if (uVar10 != 2) {
    FUN_146f176da(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0xc),param_2,uVar10,0);
    uVar7 = puVar1[1];
    uVar8 = (uint)(uVar7 >> 0x21) & 3;
  }
  uVar10 = (uint)(uVar7 >> 0x1f) & 3;
  if ((uVar8 != uVar10) && (uVar10 != 2)) {
    FUN_146f176da(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0xc),param_2,uVar10,0);
    uVar7 = puVar1[1];
  }
  puVar1[1] = uVar7 & 0xfffffff87fffffff | 0x500000000;
  return;
}



// FUNCTION 146f48028 FUN_146f48028 body=8 status=ok
// SIG undefined FUN_146f48028(void)

longlong FUN_146f48028(longlong param_1)

{
  return param_1 + 0xe0;
}



// FUNCTION 146f48030 FUN_146f48030 body=497 status=ok
// SIG undefined FUN_146f48030(void)

void FUN_146f48030(longlong param_1,undefined4 param_2,float param_3,longlong *param_4,
                  longlong param_5,uint *param_6)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  uint *local_c0;
  longlong *local_b0;
  longlong local_a8;
  int *local_a0;
  uint local_98;
  int local_94;
  longlong local_90;
  int local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_4;
  FUN_146f3d3b0(*(longlong *)(param_1 + 0x180) + 0x300,&local_90,param_2);
  if ((longlong)local_88 != 0) {
    lVar7 = 0;
    local_a8 = param_1;
    do {
      plVar5 = local_b0;
      uVar3 = *(uint *)(local_90 + lVar7);
      fVar8 = param_3;
      if ((*(uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f)
          & 1) != 0) {
        lVar6 = (longlong)(int)uVar3;
        cVar2 = *(char *)(local_90 + 4 + lVar7);
        if ((cVar2 == '\x01') ||
           ((cVar2 == '\x02' &&
            ((byte)((*(byte *)(*(longlong *)(param_1 + 0x98) + 10 + lVar6 * 0x10) & 0x1f) - 3) < 2))
           )) {
          fVar1 = *(float *)(*local_b0 + lVar6 * 4);
          fVar8 = (float)nextafterf(param_3,0x7f800000);
          if (fVar8 <= fVar1) {
            fVar8 = fVar1;
          }
          *(float *)(*plVar5 + lVar6 * 4) = fVar8;
          uVar4 = *param_6;
          *(uint *)(param_5 + (ulonglong)uVar4 * 8) = uVar3;
          *(float *)(param_5 + 4 + (ulonglong)uVar4 * 8) = fVar8;
          *param_6 = *param_6 + 1;
          param_1 = local_a8;
        }
      }
      local_94 = *(int *)(*(longlong *)(param_1 + 0x180) + 0x1a8);
      local_a0 = *(int **)(*(longlong *)(param_1 + 0x180) + 0x198);
      local_98 = local_94 + 0x1fU >> 5;
      if (local_94 == 0) {
        local_a0 = &local_94;
      }
      if ((local_a0[uVar3 >> 5] & 1 << ((byte)uVar3 & 0x1f)) != 0) {
        local_c0 = param_6;
        local_c8 = param_5;
        FUN_146f48030(param_1,uVar3,fVar8,local_b0);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)local_88 << 3 != lVar7);
  }
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f48222 FUN_146f48222 body=219 status=ok
// SIG undefined FUN_146f48222(void)

void FUN_146f48222(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)param_1[0x10];
    do {
      puVar3 = *(undefined4 **)(puVar7 + 0x17c);
      if ((longlong)(int)puVar7[0x17a] != 0) {
        lVar4 = *(longlong *)(puVar7 + 0x178);
        lVar8 = (longlong)(int)puVar7[0x17a] << 3;
        do {
          lVar5 = *(longlong *)(lVar4 + -8 + lVar8);
          if (lVar5 != 0) {
            uVar2 = *(uint *)(lVar5 + 0x20);
            if (1 < uVar2) goto LAB_146f482d6;
            if ((uVar2 == 1) &&
               (plVar6 = *(longlong **)(lVar4 + -8 + lVar8), plVar6 != (longlong *)0x0)) {
              *(undefined8 *)(lVar4 + -8 + lVar8) = 0;
              LOCK();
              plVar1 = plVar6 + 4;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar6 + 0x20))(plVar6,1);
              }
            }
          }
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      (*(code *)*param_2)(param_2[1],puVar7);
      FUN_144b016d0(param_1 + 5,*puVar7);
      FUN_146f4a0f4(param_1 + 0xf,puVar7);
      puVar7 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
LAB_146f482d6:
  if (*(int *)(param_1 + 6) == *(int *)((longlong)param_1 + 0x5c)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 146f482fe FUN_146f482fe body=138 status=ok
// SIG undefined FUN_146f482fe(void)

void FUN_146f482fe(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28;
  code *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_2 + 8) & 0x1f00000) == 0x200000) {
    local_38 = param_3;
    FUN_146f15a0e(param_1 + 0x110,2,2,0);
    local_18 = &local_28;
    local_20 = FUN_142aa22b4;
    local_28 = param_1;
    FUN_146f48222(param_1 + 0x318);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4838a FUN_146f4838a body=733 status=ok
// SIG undefined FUN_146f4838a(void)

void FUN_146f4838a(longlong param_1,byte param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  ushort uVar2;
  char cVar3;
  ulonglong *puVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_78 [40];
  uint *local_50;
  uint local_48;
  uint local_44;
  uint *local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  cVar3 = DAT_14c75f490;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar11 = param_3[2] & 0xfffff;
  if (4 < param_2) {
    if ((param_2 & 0xfd) == 8) {
      uVar10 = (ulonglong)(uVar11 << 4);
      *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + uVar10) =
           *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + uVar10) & 0xffffffffffe0ffff | 0xb0000
      ;
      lVar6 = *(longlong *)(param_1 + 0x98);
      uVar8 = *(ulonglong *)(lVar6 + 8 + uVar10) & 0xffffffffffe0ffff | 0xc0000;
      goto LAB_146f48635;
    }
    goto LAB_146f485b7;
  }
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) + ((ulonglong)uVar11 / 100) * 8);
  lVar7 = (ulonglong)(uVar11 % 100) * 0x38;
  uVar2 = *(ushort *)(lVar6 + 0x32 + lVar7);
  bVar5 = (byte)param_3[2];
  if (((uVar2 >> 9 & 1) == 0) &&
     (((uVar2 >> 8 & 1) != 0 ||
      ((1 << (bVar5 & 0x1f) & *(uint *)(*(longlong *)(param_1 + 200) + (ulonglong)(uVar11 >> 5) * 4)
       ) != 0)))) {
    lVar6 = *(longlong *)(param_1 + 0x98);
    uVar10 = (ulonglong)(uVar11 << 4);
    uVar8 = *(ulonglong *)(lVar6 + 8 + uVar10) & 0xffffffffffe0ffff | 0x30000;
LAB_146f48635:
    *(ulonglong *)(lVar6 + 8 + uVar10) = uVar8;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  if (DAT_14c75f490 == '\0') {
LAB_146f48450:
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar11 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (bVar5 & 0x1f);
    lVar9 = *(longlong *)(param_1 + 0x98);
    uVar10 = *(ulonglong *)(lVar9 + 8 + (ulonglong)(uVar11 << 4));
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x98);
    uVar10 = *(ulonglong *)(lVar9 + 8 + (ulonglong)(uVar11 << 4));
    if ((byte)(((byte)(uVar10 >> 0x10) & 0x1f) - 1) < 9) goto LAB_146f48450;
  }
  *(ulonglong *)(lVar9 + 8 + (ulonglong)(uVar11 << 4)) = uVar10 & 0xffffffffffe0ffff | 0x30000;
  uVar10 = *(ulonglong *)(param_4 + 2);
  local_34 = (uint)uVar10 & 0xffff;
  local_40 = param_4;
  if (0x40 < local_34) {
    local_40 = *(uint **)param_4;
  }
  local_48 = local_34 + 0x1f >> 5;
  if ((uVar10 & 0xffff) == 0) {
    local_40 = &local_34;
    local_50 = &local_44;
    local_44 = 0;
  }
  else {
    local_50 = param_3;
    if (0x40 < local_34) {
      local_50 = *(uint **)param_3;
    }
    uVar10 = 0;
    do {
      local_40[uVar10] = local_40[uVar10] | local_50[uVar10];
      uVar10 = uVar10 + 1;
    } while (local_48 != uVar10);
    uVar10 = *(ulonglong *)(param_4 + 2);
    local_44 = local_34;
  }
  *(ulonglong *)(param_4 + 2) = uVar10 | 0xa00000;
  *(ulonglong *)(param_4 + 2) =
       uVar10 & 0xfffffffffeffffff | 0xa00000 |
       (ulonglong)((param_3[2] >> 2 | (uint)uVar10) & 0x1000000);
  local_38 = local_48;
  if (((uint)uVar10 >> 0x16 & 1) != 0) {
    uVar11 = *(uint *)(lVar6 + lVar7 + 0x28);
    lVar6 = (longlong)(int)uVar11;
    uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar6 * 0x10);
    if (((uint)uVar10 & 0x1e0000) < 0xa0000) {
      puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0x98) + lVar6 * 0x10 + 8);
      if ((cVar3 == '\0') || ((byte)(((byte)(uVar10 >> 0x10) & 0x1f) - 1) < 9)) {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar11 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
        uVar10 = *puVar4;
      }
      *puVar4 = uVar10 | 0x200000;
      *(float *)(*(longlong *)(param_1 + 0xb8) + lVar6 * 4) =
           *(float *)(*(longlong *)(param_1 + 0xb8) + lVar6 * 4) + 1.0;
    }
  }
LAB_146f485b7:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4867c FUN_146f4867c body=848 status=ok
// SIG undefined FUN_146f4867c(void)

void FUN_146f4867c(longlong param_1,byte param_2,uint *param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint *puVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_68 [32];
  uint *local_48;
  uint local_40;
  uint local_3c;
  uint *local_38;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0xb < param_2) goto LAB_146f488a4;
  uVar2 = param_3[2];
  local_2c = 1;
  if ((uVar2 >> 0x19 & 1) != 0) {
    local_2c = (uint)*(ushort *)(param_4 + 1);
  }
  local_38 = param_3;
  if (0x40 < local_2c) {
    local_38 = *(uint **)param_3;
  }
  local_30 = local_2c + 0x1f >> 5;
  if (local_2c == 0) {
    local_38 = &local_2c;
  }
  if ((uVar2 >> 0x19 & 1) == 0) {
LAB_146f486ed:
    bVar12 = false;
  }
  else {
    if (((ushort)param_3[3] != 0x8000) &&
       (puVar10 = (uint *)((ulonglong)
                           (((uint)(ushort)param_3[3] - (uint)*(ushort *)(param_1 + 0x90) & 0x7fff)
                            + *(int *)(param_1 + 0x34) & *(uint *)(param_1 + 0x38)) * 0x10 +
                          *(longlong *)(param_1 + 0x40)), puVar10 != (uint *)0x0)) {
      do {
        if ((*(byte *)((longlong)puVar10 + 0xb) & 2) != 0) {
          uVar1 = *(ushort *)(param_4 + 1);
          local_48 = puVar10;
          if (0x40 < uVar1) {
            local_48 = *(uint **)puVar10;
          }
          local_40 = uVar1 + 0x1f >> 5;
          local_3c = (uint)uVar1;
          if (uVar1 == 0) {
            local_48 = &local_3c;
          }
          if ((ulonglong)local_30 != 0) {
            uVar7 = 0;
            do {
              local_38[uVar7] = local_38[uVar7] & ~local_48[uVar7];
              uVar7 = uVar7 + 1;
            } while (local_30 != uVar7);
          }
        }
      } while (((ushort)puVar10[3] != 0x8000) &&
              (puVar10 = (uint *)((ulonglong)
                                  (((uint)(ushort)puVar10[3] - (uint)*(ushort *)(param_1 + 0x90) &
                                   0x7fff) + *(int *)(param_1 + 0x34) & *(uint *)(param_1 + 0x38)) *
                                  0x10 + *(longlong *)(param_1 + 0x40)), puVar10 != (uint *)0x0));
    }
    if (local_30 == 0) goto LAB_146f486ed;
    lVar4 = 0;
    do {
      bVar12 = local_38[lVar4] != 0;
      if (bVar12) break;
      bVar13 = (ulonglong)local_30 - 1 != lVar4;
      lVar4 = lVar4 + 1;
    } while (bVar13);
  }
  uVar7 = param_4[1];
  if ((((uint)(uVar7 >> 0x1c) & 0xf | uVar2 >> 0x1a) & 1) != 0 || bVar12) {
    if (bVar12) {
      puVar5 = param_4;
      if (0x40 < ((uint)uVar7 & 0xffff)) {
        puVar5 = (undefined8 *)*param_4;
      }
      if ((uVar7 & 0xffff) != 0) {
        uVar8 = 0;
        do {
          puVar10 = (uint *)((longlong)puVar5 + uVar8 * 4);
          *puVar10 = *puVar10 | local_38[uVar8];
          uVar8 = uVar8 + 1;
        } while (((uint)uVar7 & 0xffff) + 0x1f >> 5 != uVar8);
      }
    }
    cVar3 = DAT_14c75f490;
    if (param_2 < 10) {
      uVar11 = uVar2 & 0xfffff;
      uVar7 = (ulonglong)uVar11;
      if ((DAT_14c75f490 == '\0') ||
         ((byte)((*(byte *)(*(longlong *)(param_1 + 0x98) + 10 + (ulonglong)(uVar11 << 4)) & 0x1f) -
                1) < 9)) {
        puVar10 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar11 >> 5) * 4);
        *puVar10 = *puVar10 | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar8 = param_4[1];
      uVar6 = uVar8 & 0x800000;
      if (bVar12) {
        uVar6 = 0x800000;
      }
      param_4[1] = (ulonglong)(((uVar2 >> 0x1a) << 0x18 | (uint)uVar8) & 0x1000000) |
                   uVar8 & 0xfffffffffe7fffff | uVar6;
      *(float *)(*(longlong *)(param_1 + 0xb8) + uVar7 * 4) =
           *(float *)(*(longlong *)(param_1 + 0xb8) + uVar7 * 4) + 1.0;
      if ((*(byte *)((longlong)param_4 + 10) & 0x40) != 0) {
        uVar2 = *(uint *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
                           (uVar7 / 100) * 8) + 0x28 + (ulonglong)(uVar11 % 100) * 0x38);
        lVar4 = (longlong)(int)uVar2;
        uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar4 * 0x10);
        if (((uint)uVar7 & 0x1e0000) < 0xa0000) {
          puVar9 = (ulonglong *)(*(longlong *)(param_1 + 0x98) + lVar4 * 0x10 + 8);
          if ((cVar3 == '\0') || ((byte)(((byte)(uVar7 >> 0x10) & 0x1f) - 1) < 9)) {
            puVar10 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar2 >> 5) * 4);
            *puVar10 = *puVar10 | 1 << ((byte)uVar2 & 0x1f);
            uVar7 = *puVar9;
          }
          *puVar9 = uVar7 | 0x200000;
          *(float *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 4) =
               *(float *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 4) + 1.0;
        }
      }
    }
  }
LAB_146f488a4:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f489ce FUN_146f489ce body=1621 status=ok
// SIG undefined FUN_146f489ce(void)

void FUN_146f489ce(longlong param_1,char param_2,undefined8 *param_3,uint *param_4)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_68 [40];
  uint *local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar12 = *(uint *)(param_3 + 1);
  uVar16 = uVar12 & 0xfffff;
  bVar3 = (byte)uVar12;
  if (param_2 == '\t') {
    uVar5 = *(ulonglong *)(param_4 + 2);
    local_34 = (uint)uVar5;
    local_40 = param_4;
    if ((local_34 >> 0x1d & 1) != 0 && (uVar12 >> 0x1c & 1) != 0) {
      local_34 = local_34 & 0xffff;
      if (0x40 < local_34) {
        local_40 = *(uint **)param_4;
      }
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
               ((ulonglong)uVar16 / 100) * 8);
      local_38 = local_34 + 0x1f >> 5;
      if ((uVar5 & 0xffff) == 0) {
        local_40 = &local_34;
        bVar19 = false;
      }
      else {
        bVar19 = true;
        if (*local_40 == 0) {
          uVar18 = 1;
          do {
            uVar11 = uVar18;
            if (local_38 == uVar11) break;
            uVar18 = uVar11 + 1;
          } while (local_40[uVar11] == 0);
          bVar19 = uVar11 < local_38;
        }
      }
      *(ulonglong *)(param_4 + 2) =
           uVar5 & 0xffffffffdf7fffff | (ulonglong)((byte)(uVar5 >> 0x17) & 1 | bVar19) << 0x17;
      uVar5 = (ulonglong)(uVar16 >> 5);
      puVar6 = (uint *)(*(longlong *)(param_1 + 200) + uVar5 * 4);
      *puVar6 = *puVar6 & (-2 << (bVar3 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar3 & 0x1f));
      *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar16 << 4)) =
           *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar16 << 4)) &
           0xffffffffffe0ffff | 0x50000;
      uVar9 = 1 << (bVar3 & 0x1f);
      if ((param_4[2] >> 0x17 & 1) == 0) {
        uVar9 = 0;
      }
      *(uint *)(*(longlong *)(param_1 + 0xe0) + uVar5 * 4) =
           *(uint *)(*(longlong *)(param_1 + 0xe0) + uVar5 * 4) & ~(1 << (uVar12 & 0x1f)) | uVar9;
      lVar13 = (ulonglong)(uVar16 % 100) * 0x38;
      lVar15 = (longlong)*(int *)(lVar2 + 0x28 + lVar13) * 0x10;
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar15);
      uVar12 = (uint)uVar5;
      if ((uVar12 & 0x1e0000) < 0xa0000) {
        uVar14 = (param_4[2] >> 2 | uVar12) & 0x200000;
        *(ulonglong *)(lVar15 + *(longlong *)(param_1 + 0x98) + 8) =
             uVar5 & 0xffffffffffdfffff | (ulonglong)uVar14;
        uVar12 = *(uint *)(lVar13 + lVar2 + 0x28);
        uVar17 = 1 << ((byte)uVar12 & 0x1f);
        uVar16 = *(uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar12 >> 5) * 4);
        uVar9 = 0;
        if ((uVar16 & uVar17) != 0 || uVar14 != 0) {
          uVar9 = uVar17;
        }
        *(uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar12 >> 5) * 4) =
             uVar16 & ~(1 << (uVar12 & 0x1f)) | uVar9;
      }
      goto LAB_146f48ae1;
    }
    local_34 = local_34 & 0xffff;
    if (0x40 < local_34) {
      local_40 = *(uint **)param_4;
    }
    local_38 = local_34 + 0x1f >> 5;
    if ((uVar5 & 0xffff) == 0) {
      local_40 = &local_34;
      bVar19 = false;
    }
    else {
      bVar19 = true;
      if (*local_40 == 0) {
        uVar18 = 1;
        do {
          uVar11 = uVar18;
          if (local_38 == uVar11) break;
          uVar18 = uVar11 + 1;
        } while (local_40[uVar11] == 0);
        bVar19 = uVar11 < local_38;
      }
    }
    bVar4 = (byte)(uVar5 >> 0x17) & 1 | bVar19;
    *(ulonglong *)(param_4 + 2) = uVar5 & 0xffffffffff7fffff | (ulonglong)bVar4 << 0x17;
    uVar9 = 0;
    if (bVar4 != 0) {
      uVar9 = 1 << (bVar3 & 0x1f);
    }
    uVar5 = (ulonglong)(uVar16 >> 5);
    *(uint *)(*(longlong *)(param_1 + 0xe0) + uVar5 * 4) =
         *(uint *)(*(longlong *)(param_1 + 0xe0) + uVar5 * 4) & ~(1 << (uVar12 & 0x1f)) | uVar9;
    puVar6 = (uint *)(*(longlong *)(param_1 + 200) + uVar5 * 4);
    *puVar6 = *puVar6 & (-2 << (bVar3 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar3 & 0x1f));
    lVar2 = *(longlong *)(param_1 + 0x98);
    uVar18 = (ulonglong)(uVar16 << 4);
    uVar5 = *(ulonglong *)(lVar2 + 8 + uVar18) & 0xffffffffffe0ffff | 0x50000;
  }
  else {
    if ((uVar12 >> 0x1b & 1) != 0) {
      *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar16 << 4)) =
           *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar16 << 4)) &
           0xffffffffffe0ffff | 0x70000;
      uVar12 = *(uint *)(param_3 + 1);
      uVar5 = *(ulonglong *)(param_4 + 2);
      if ((uVar12 >> 0x19 & 1) != 0) {
        puVar6 = param_4;
        if (0x40 < ((uint)uVar5 & 0xffff)) {
          puVar6 = *(uint **)param_4;
        }
        uVar12 = (uint)uVar5 & 0xffff;
        if ((uVar5 & 0xffff) != 0) {
          puVar10 = param_3;
          if (0x40 < uVar12) {
            puVar10 = (undefined8 *)*param_3;
          }
          uVar5 = 0;
          do {
            puVar6[uVar5] = puVar6[uVar5] | *(uint *)((longlong)puVar10 + uVar5 * 4);
            uVar5 = uVar5 + 1;
          } while (uVar12 + 0x1f >> 5 != uVar5);
          uVar5 = *(ulonglong *)(param_4 + 2);
        }
        uVar5 = uVar5 | 0x800000;
        *(ulonglong *)(param_4 + 2) = uVar5;
        uVar12 = *(uint *)(param_3 + 1);
      }
      uVar5 = uVar5 & 0xfffffffffeffffff | (ulonglong)((uVar12 >> 2 | (uint)uVar5) & 0x1000000);
      *(ulonglong *)(param_4 + 2) = uVar5;
      cVar1 = DAT_14c75f490;
      if ((DAT_14c75f490 != '\x01') ||
         ((byte)((*(byte *)(*(longlong *)(param_1 + 0x98) + 10 + (ulonglong)(uVar16 << 4)) & 0x1f) -
                1) < 9)) {
        puVar6 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar16 >> 5) * 4);
        *puVar6 = *puVar6 | 1 << (bVar3 & 0x1f);
        uVar5 = *(ulonglong *)(param_4 + 2);
      }
      if (((uint)uVar5 >> 0x16 & 1) != 0) {
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
                 ((ulonglong)uVar16 / 100) * 8);
        lVar15 = (ulonglong)(uVar16 % 100) * 0x38;
        uVar12 = *(uint *)(lVar2 + 0x28 + lVar15);
        lVar13 = (longlong)(int)uVar12;
        if (lVar13 != 0) {
          if (cVar1 == '\0') {
LAB_146f48e42:
            puVar6 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar12 >> 5) * 4);
            *puVar6 = *puVar6 | 1 << ((byte)uVar12 & 0x1f);
            lVar13 = (longlong)*(int *)(lVar2 + lVar15 + 0x28);
            lVar7 = *(longlong *)(param_1 + 0x98);
            uVar5 = *(ulonglong *)(lVar7 + 8 + lVar13 * 0x10);
          }
          else {
            lVar7 = *(longlong *)(param_1 + 0x98);
            uVar5 = *(ulonglong *)(lVar7 + 8 + lVar13 * 0x10);
            if ((byte)(((byte)(uVar5 >> 0x10) & 0x1f) - 1) < 9) goto LAB_146f48e42;
          }
          uVar16 = uVar12;
          if (((uint)uVar5 & 0x1e0000) < 0xa0000) {
            *(ulonglong *)(lVar7 + 8 + lVar13 * 0x10) = uVar5 | 0x200000;
          }
        }
      }
      *(float *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar16 * 4) =
           *(float *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar16 * 4) + 1.0;
      goto LAB_146f48ae1;
    }
    if (((uVar12 >> 0x1c & 1) != 0) && ((*(byte *)((longlong)param_4 + 0xb) & 0x20) != 0)) {
      uVar12 = *(uint *)(*(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
                          ((ulonglong)uVar16 / 100) * 8) + 0x28 + (ulonglong)(uVar16 % 100) * 0x38);
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (longlong)(int)uVar12 * 0x10);
      if (((uint)uVar5 & 0x1e0000) < 0xa0000) {
        puVar8 = (ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)(int)uVar12 * 0x10 + 8);
        if ((DAT_14c75f490 != '\x01') || ((byte)(((byte)(uVar5 >> 0x10) & 0x1f) - 1) < 9)) {
          puVar6 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar12 >> 5) * 4);
          *puVar6 = *puVar6 | 1 << ((byte)uVar12 & 0x1f);
          uVar5 = *puVar8;
        }
        *puVar8 = uVar5 | 0x200000;
        *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar16 << 4)) =
             *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar16 << 4)) &
             0xffffffffffe0ffff | 0x80000;
        uVar12 = 1 << (bVar3 & 0x1f);
        puVar6 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar16 >> 5) * 4);
        *puVar6 = *puVar6 | uVar12;
        puVar6 = (uint *)(*(longlong *)(param_1 + 200) + (ulonglong)(uVar16 >> 5) * 4);
        *puVar6 = *puVar6 | uVar12;
      }
      goto LAB_146f48ae1;
    }
    puVar6 = (uint *)(*(longlong *)(param_1 + 200) + (ulonglong)(uVar16 >> 5) * 4);
    *puVar6 = *puVar6 | 1 << (bVar3 & 0x1f);
    puVar6 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar16 >> 5) * 4);
    *puVar6 = *puVar6 & (-2 << (bVar3 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar3 & 0x1f));
    *(byte *)((longlong)param_4 + 10) = *(byte *)((longlong)param_4 + 10) & 0x7f;
    lVar2 = *(longlong *)(param_1 + 0x98);
    uVar18 = (ulonglong)(uVar16 << 4);
    uVar5 = *(ulonglong *)(lVar2 + 8 + uVar18) & 0xffffffffffe0ffff | 0xa0000;
  }
  *(ulonglong *)(lVar2 + 8 + uVar18) = uVar5;
LAB_146f48ae1:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f49024 FUN_146f49024 body=318 status=ok
// SIG undefined FUN_146f49024(void)

void FUN_146f49024(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  uint uVar6;
  undefined8 unaff_RBP;
  undefined8 uVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_2 + 8);
  uVar1 = *(undefined1 *)(param_3 + 10);
  uVar6 = uVar3 & 0xfffff;
  uVar8 = uVar3 >> 0x1d & 3;
  uVar4 = param_2;
  if (uVar8 != 2) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
    FUN_146f176da(*(undefined8 *)(param_1 + 400),uVar4,uVar6,uVar8,1);
    *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) & 0xfffffff9ffffffff | 0x400000000;
  }
  uVar3 = (uint)((byte)(uVar3 >> 0x14) & 0x1f);
  if (10 < uVar3 - 1) goto switchD_146f49085_caseD_3;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1);
  uVar5 = (undefined7)(uVar4 >> 8);
  switch(uVar3) {
  case 1:
    uVar7 = 1;
    goto LAB_146f49155;
  case 2:
    uVar7 = 2;
LAB_146f49155:
    uVar6 = 0;
    goto LAB_146f49158;
  case 4:
    uVar4 = uVar2 & 0xffffff1f;
    FUN_146f4838a(param_1,uVar4,param_2,param_3);
    break;
  case 5:
  case 6:
    uVar4 = uVar2 & 0xffffff1f;
    FUN_146f4867c(param_1,uVar4,param_2,param_3);
    break;
  case 0xb:
    uVar4 = uVar2 & 0xffffff1f;
    FUN_146f489ce(param_1,uVar4,param_2,param_3);
  }
switchD_146f49085_caseD_3:
  if ((*(byte *)(param_2 + 0xb) & 4) != 0) {
    uVar5 = (undefined7)(uVar4 >> 8);
    uVar7 = 0;
LAB_146f49158:
    FUN_146f15a0e(param_1 + 0x110,CONCAT71(uVar5,1),uVar7,uVar6,param_4);
  }
  return;
}



// FUNCTION 146f49162 FUN_146f49162 body=1057 status=ok
// SIG undefined FUN_146f49162(void)

void FUN_146f49162(longlong param_1,char param_2)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  short sVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  uint local_70 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar8 = *(uint *)(param_1 + 0x54);
  uVar1 = *(ushort *)
           (*(longlong *)(param_1 + 0x60) + (ulonglong)(*(uint *)(param_1 + 0x58) & uVar8) * 2);
  if (*(uint *)(param_1 + 0x50) != uVar8) {
    *(uint *)(param_1 + 0x54) = uVar8 + 1;
  }
  if (uVar1 != 0) {
    uVar8 = (uint)uVar1;
    if (param_2 == '\0') {
      uVar4 = *(uint *)(param_1 + 0x34);
      uVar10 = 0;
      do {
        lVar3 = (ulonglong)(uVar4 & *(uint *)(param_1 + 0x38)) * 0x10;
        if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0xb + lVar3) & 4) == 0) {
          uVar5 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x74);
          uVar5 = *(ulonglong *)
                   (*(longlong *)(param_1 + 0x80) +
                   (ulonglong)(*(uint *)(param_1 + 0x78) & uVar4) * 8);
          if (*(uint *)(param_1 + 0x70) != uVar4) {
            *(uint *)(param_1 + 0x74) = uVar4 + 1;
          }
        }
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar3);
        local_78 = 0;
        local_70[0] = 3;
        local_70[1] = 2;
        local_70[2] = 1;
        local_70[3] = 0;
        lVar3 = 0;
        do {
          *(short *)((longlong)&local_78 + (ulonglong)*(uint *)((longlong)local_70 + lVar3) * 2) =
               (short)uVar5;
          uVar5 = uVar5 >> 0x10;
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0x10);
        uVar9 = (ulonglong)(*(uint *)(puVar7 + 1) & 0xfffff);
        uVar5 = (ulonglong)((*(uint *)(puVar7 + 1) & 0xfffff) << 4);
        lVar3 = *(longlong *)(param_1 + 0xa8);
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x98) + 8 + uVar5);
        FUN_142a9e154(param_1,puVar7,*(longlong *)(param_1 + 0x98) + uVar5,&local_78);
        if (((*(byte *)((longlong)puVar7 + 0xb) & 2) != 0) && (0x40 < uVar1)) {
          FUN_1400020a8(*puVar7);
        }
        sVar6 = *(short *)(lVar3 + uVar9 * 4);
        sVar2 = *(short *)(param_1 + 0x90);
        *(undefined2 *)(lVar3 + 2 + uVar9 * 4) =
             *(undefined2 *)
              (*(longlong *)(param_1 + 0x40) + 0xc +
              (ulonglong)(*(uint *)(param_1 + 0x38) & *(uint *)(param_1 + 0x34)) * 0x10);
        if (sVar6 == sVar2) {
          sVar6 = -0x8000;
        }
        *(short *)(lVar3 + uVar9 * 4) = sVar6;
        *(ushort *)(param_1 + 0x90) = (short)*(undefined4 *)(param_1 + 0x90) + 1U & 0x7fff;
        uVar4 = *(uint *)(param_1 + 0x30);
        if (uVar4 != *(uint *)(param_1 + 0x34)) {
          uVar4 = *(uint *)(param_1 + 0x34) + 1;
          *(uint *)(param_1 + 0x34) = uVar4;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar8);
    }
    else if (param_2 == '\x01') {
      uVar4 = *(uint *)(param_1 + 0x34);
      uVar10 = 0;
      do {
        lVar3 = (ulonglong)(uVar4 & *(uint *)(param_1 + 0x38)) * 0x10;
        if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0xb + lVar3) & 4) == 0) {
          uVar5 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x74);
          uVar5 = *(ulonglong *)
                   (*(longlong *)(param_1 + 0x80) +
                   (ulonglong)(*(uint *)(param_1 + 0x78) & uVar4) * 8);
          if (*(uint *)(param_1 + 0x70) != uVar4) {
            *(uint *)(param_1 + 0x74) = uVar4 + 1;
          }
        }
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar3);
        local_78 = 0;
        local_70[0] = 3;
        local_70[1] = 2;
        local_70[2] = 1;
        local_70[3] = 0;
        lVar3 = 0;
        do {
          *(short *)((longlong)&local_78 + (ulonglong)*(uint *)((longlong)local_70 + lVar3) * 2) =
               (short)uVar5;
          uVar5 = uVar5 >> 0x10;
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0x10);
        uVar9 = (ulonglong)(*(uint *)(puVar7 + 1) & 0xfffff);
        uVar5 = (ulonglong)((*(uint *)(puVar7 + 1) & 0xfffff) << 4);
        lVar3 = *(longlong *)(param_1 + 0xa8);
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x98) + 8 + uVar5);
        FUN_146f49024(param_1,puVar7,*(longlong *)(param_1 + 0x98) + uVar5,&local_78);
        if (((*(byte *)((longlong)puVar7 + 0xb) & 2) != 0) && (0x40 < uVar1)) {
          FUN_1400020a8(*puVar7);
        }
        sVar6 = *(short *)(lVar3 + uVar9 * 4);
        sVar2 = *(short *)(param_1 + 0x90);
        *(undefined2 *)(lVar3 + 2 + uVar9 * 4) =
             *(undefined2 *)
              (*(longlong *)(param_1 + 0x40) + 0xc +
              (ulonglong)(*(uint *)(param_1 + 0x38) & *(uint *)(param_1 + 0x34)) * 0x10);
        if (sVar6 == sVar2) {
          sVar6 = -0x8000;
        }
        *(short *)(lVar3 + uVar9 * 4) = sVar6;
        *(ushort *)(param_1 + 0x90) = (short)*(undefined4 *)(param_1 + 0x90) + 1U & 0x7fff;
        uVar4 = *(uint *)(param_1 + 0x30);
        if (uVar4 != *(uint *)(param_1 + 0x34)) {
          uVar4 = *(uint *)(param_1 + 0x34) + 1;
          *(uint *)(param_1 + 0x34) = uVar4;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar8);
    }
    else if (param_2 == '\x02') {
      uVar4 = *(uint *)(param_1 + 0x34);
      uVar10 = 0;
      do {
        lVar3 = (ulonglong)(uVar4 & *(uint *)(param_1 + 0x38)) * 0x10;
        if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0xb + lVar3) & 4) == 0) {
          uVar5 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x74);
          uVar5 = *(ulonglong *)
                   (*(longlong *)(param_1 + 0x80) +
                   (ulonglong)(*(uint *)(param_1 + 0x78) & uVar4) * 8);
          if (*(uint *)(param_1 + 0x70) != uVar4) {
            *(uint *)(param_1 + 0x74) = uVar4 + 1;
          }
        }
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar3);
        local_78 = 0;
        local_70[0] = 3;
        local_70[1] = 2;
        local_70[2] = 1;
        local_70[3] = 0;
        lVar3 = 0;
        do {
          *(short *)((longlong)&local_78 + (ulonglong)*(uint *)((longlong)local_70 + lVar3) * 2) =
               (short)uVar5;
          uVar5 = uVar5 >> 0x10;
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0x10);
        uVar5 = (ulonglong)(*(uint *)(puVar7 + 1) & 0xfffff);
        lVar3 = *(longlong *)(param_1 + 0xa8);
        uVar1 = *(ushort *)
                 (*(longlong *)(param_1 + 0x98) + 8 +
                 (ulonglong)((*(uint *)(puVar7 + 1) & 0xfffff) << 4));
        FUN_146f482fe(param_1,puVar7,&local_78);
        if (((*(byte *)((longlong)puVar7 + 0xb) & 2) != 0) && (0x40 < uVar1)) {
          FUN_1400020a8(*puVar7);
        }
        sVar6 = *(short *)(lVar3 + uVar5 * 4);
        sVar2 = *(short *)(param_1 + 0x90);
        *(undefined2 *)(lVar3 + 2 + uVar5 * 4) =
             *(undefined2 *)
              (*(longlong *)(param_1 + 0x40) + 0xc +
              (ulonglong)(*(uint *)(param_1 + 0x38) & *(uint *)(param_1 + 0x34)) * 0x10);
        if (sVar6 == sVar2) {
          sVar6 = -0x8000;
        }
        *(short *)(lVar3 + uVar5 * 4) = sVar6;
        *(ushort *)(param_1 + 0x90) = (short)*(undefined4 *)(param_1 + 0x90) + 1U & 0x7fff;
        uVar4 = *(uint *)(param_1 + 0x30);
        if (uVar4 != *(uint *)(param_1 + 0x34)) {
          uVar4 = *(uint *)(param_1 + 0x34) + 1;
          *(uint *)(param_1 + 0x34) = uVar4;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f49584 FUN_146f49584 body=342 status=ok
// SIG undefined FUN_146f49584(void)

void FUN_146f49584(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *_Dst;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *(undefined8 *)(param_3 + 0xc);
  param_4[2] = uVar1;
  uVar8 = *(uint *)(param_3 + 8) & 0xfffff;
  uVar7 = *(uint *)(param_4 + 1);
  *(uint *)(param_4 + 1) = uVar7 & 0xfff00000 | uVar8;
  uVar9 = 0x200000;
  if (*(int *)(param_3 + 0x18) != 2) {
    uVar9 = (*(uint *)(param_2 + 8) & 0x1f0000) << 4;
  }
  uVar2 = (uint)(param_1 != (undefined8 *)0x0) << 0x19;
  uVar6 = (uint)((((uint)(ushort)((ulonglong)uVar1 >> 0x30) | (uint)uVar1 |
                  (uint)((ulonglong)uVar1 >> 0x20) | (uint)uVar1 >> 0x10) & 0xfc00) != 0) << 0x1a;
  *(uint *)(param_4 + 1) = uVar6 | uVar2 | uVar7 & 0xf8000000 | uVar8 | uVar9;
  uVar3 = (*(uint *)(param_3 + 0x20) & 0x40) << 0x15;
  *(uint *)(param_4 + 1) = uVar6 | uVar2 | uVar7 & 0xf0000000 | uVar8 | uVar9 | uVar3;
  uVar4 = *(uint *)(param_2 + 8) >> 1 & 0x10000000;
  *(uint *)(param_4 + 1) = uVar6 | uVar2 | uVar7 & 0xe0000000 | uVar8 | uVar9 | uVar3 | uVar4;
  uVar5 = 0x40000000;
  if ((*(uint *)(param_3 + 0x20) & 8) != 0) {
    uVar5 = (*(uint *)(param_3 + 0x20) & 3) << 0x1d;
  }
  *(uint *)(param_4 + 1) =
       uVar6 | uVar2 | uVar7 & 0x80000000 | uVar8 | uVar9 | uVar3 | uVar4 | uVar5;
  if (param_1 == (undefined8 *)0x0) {
    *param_4 = 0;
  }
  else {
    uVar7 = *(uint *)((longlong)param_1 + 0xc);
    if (uVar7 < 0x41) {
      _Dst = (undefined8 *)*param_4;
    }
    else {
      _Dst = (undefined8 *)FUN_14001cc68(uVar7 + 0x1f >> 3 & 0xfffffffc,4);
      *param_4 = _Dst;
      uVar7 = *(uint *)((longlong)param_1 + 0xc);
    }
    if (uVar7 < 0x41) {
      _Dst = param_4;
    }
    if (((uVar7 != 0) && (0x1f < uVar7 + 0x1f)) && (*(int *)(param_1 + 1) != 0)) {
      memcpy(_Dst,(void *)*param_1,(ulonglong)(uVar7 + 0x1f >> 3 & 0xfffffffc));
      return;
    }
  }
  return;
}



// FUNCTION 146f496da FUN_146f496da body=119 status=ok
// SIG undefined FUN_146f496da(void)

void FUN_146f496da(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_38 [32];
  uint local_18 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = 0;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  uVar2 = 0;
  lVar1 = 0;
  do {
    uVar2 = (ulonglong)
            *(ushort *)(param_3 + 0x10 + (ulonglong)*(uint *)((longlong)local_18 + lVar1) * 2) |
            uVar2 << 0x10;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_146f49752(param_1 + 0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38,
                (longlong)param_2 * 4 + *(longlong *)(param_1 + 0xa8),param_3,uVar2);
}



// FUNCTION 146f49752 FUN_146f49752 body=178 status=ok
// SIG undefined FUN_146f49752(void)

void FUN_146f49752(undefined4 *param_1,ushort *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ushort uVar9;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar7 = (undefined4 *)FUN_146f4cf32();
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *puVar7 = *param_3;
  puVar7[1] = uVar3;
  puVar7[2] = uVar4;
  puVar7[3] = uVar5;
  *(undefined2 *)(puVar7 + 3) = 0x8000;
  uVar9 = ((short)uVar1 - (short)uVar2) + *(short *)(param_1 + 0x18) & 0x7fff;
  if ((*(byte *)((longlong)param_3 + 0xb) & 4) != 0) {
    uVar6 = param_1[0x10];
    if ((ulonglong)(longlong)(int)param_1[0x16] <= (ulonglong)(uVar6 - param_1[0x11])) {
      FUN_146f4cb08(param_1 + 0x10,(ulonglong)(uVar6 - param_1[0x11]) + 1);
      uVar6 = param_1[0x10];
    }
    param_1[0x10] = uVar6 + 1;
    *(undefined8 *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uVar6 & param_1[0x12]) * 8) =
         param_4;
  }
  if ((*param_2 == 0x8000) ||
     (lVar8 = (ulonglong)
              (((uint)*param_2 - (uint)*(ushort *)(param_1 + 0x18) & 0x7fff) + param_1[1] &
              param_1[2]) * 0x10 + *(longlong *)(param_1 + 4), lVar8 == 0)) {
    param_2[1] = uVar9;
  }
  else {
    *(ushort *)(lVar8 + 0xc) = uVar9;
  }
  *param_2 = uVar9;
  return;
}



// FUNCTION 146f49804 FUN_146f49804 body=203 status=ok
// SIG undefined FUN_146f49804(void)

void FUN_146f49804(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6,undefined1 param_7)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((*(byte *)(param_5 + 0x3c) & 4) == 0) {
    param_6 = 0;
  }
  else {
    param_6 = (ulonglong)*(uint *)(param_5 + 0x28) + param_6;
  }
  puVar3 = param_4;
  if (0x40 < *(ushort *)(param_4 + 1)) {
    puVar3 = (undefined8 *)*param_4;
  }
  cVar2 = FUN_142a74eea(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0xc),
                        CONCAT71((int7)((ulonglong)in_RAX >> 8),param_7) & 0xffffffff,param_2,
                        param_3,puVar3,param_6,param_5);
  if (cVar2 != '\0') {
    uVar1 = param_4[1];
    puVar3 = param_4;
    if (0x40 < ((uint)uVar1 & 0xffff)) {
      puVar3 = (undefined8 *)*param_4;
    }
    if ((uVar1 & 0xffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      uVar5 = 0;
      do {
        if (*(int *)((longlong)puVar3 + uVar5 * 4) != 0) {
          uVar4 = 0x800000;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (((uint)uVar1 & 0xffff) + 0x1f >> 5 != uVar5);
    }
    param_4[1] = uVar1 & 0xffffffffff7fffff | uVar4;
  }
  return;
}



// FUNCTION 146f498d0 FUN_146f498d0 body=157 status=ok
// SIG undefined FUN_146f498d0(void)

void FUN_146f498d0(longlong param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + 2 + (longlong)param_2 * 4);
  if (uVar1 != 0x8000) {
    for (lVar2 = (ulonglong)
                 (((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x90) & 0x7fff) +
                  *(int *)(param_1 + 0x34) & *(uint *)(param_1 + 0x38)) * 0x10 +
                 *(longlong *)(param_1 + 0x40); lVar2 != 0;
        lVar2 = (ulonglong)
                (((uint)*(ushort *)(lVar2 + 0xc) - (uint)*(ushort *)(param_1 + 0x90) & 0x7fff) +
                 *(int *)(param_1 + 0x34) & *(uint *)(param_1 + 0x38)) * 0x10 +
                *(longlong *)(param_1 + 0x40)) {
      *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) & 0x9fffffff | 0x40000000;
      if (*(ushort *)(lVar2 + 0xc) == 0x8000) break;
    }
  }
  *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) & 0xfffffff87fffffff | 0x500000000;
  return;
}



// FUNCTION 146f4996e FUN_146f4996e body=324 status=ok
// SIG undefined FUN_146f4996e(void)

undefined8 FUN_146f4996e(longlong param_1,int param_2,uint *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  uint *local_38;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = (ushort)param_3[2];
  local_28 = param_3;
  if (0x40 < uVar1) {
    local_28 = *(uint **)param_3;
  }
  local_20 = uVar1 + 0x1f >> 5;
  local_1c = (uint)uVar1;
  if (uVar1 == 0) {
    local_28 = &local_1c;
  }
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + 2 + (longlong)param_2 * 4);
  if ((uVar1 == 0x8000) ||
     (puVar3 = (uint *)((ulonglong)
                        (((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x90) & 0x7fff) +
                         *(int *)(param_1 + 0x34) & *(uint *)(param_1 + 0x38)) * 0x10 +
                       *(longlong *)(param_1 + 0x40)), puVar3 == (uint *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      if ((*(byte *)((longlong)puVar3 + 0xb) & 2) != 0) {
        uVar1 = (ushort)param_3[2];
        local_38 = puVar3;
        if (0x40 < uVar1) {
          local_38 = *(uint **)puVar3;
        }
        local_30 = uVar1 + 0x1f >> 5;
        local_2c = (uint)uVar1;
        if (uVar1 == 0) {
          local_38 = &local_2c;
        }
        if ((ulonglong)local_20 != 0) {
          uVar4 = 0;
          do {
            local_28[uVar4] = local_28[uVar4] | local_38[uVar4];
            uVar4 = uVar4 + 1;
          } while (local_20 != uVar4);
        }
        uVar2 = CONCAT71((int7)((ulonglong)local_38 >> 8),1);
      }
    } while (((ushort)puVar3[3] != 0x8000) &&
            (puVar3 = (uint *)((ulonglong)
                               (((uint)(ushort)puVar3[3] - (uint)*(ushort *)(param_1 + 0x90) &
                                0x7fff) + *(int *)(param_1 + 0x34) & *(uint *)(param_1 + 0x38)) *
                               0x10 + *(longlong *)(param_1 + 0x40)), puVar3 != (uint *)0x0));
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146f49ab4 FUN_146f49ab4 body=225 status=ok
// SIG undefined FUN_146f49ab4(void)

void FUN_146f49ab4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_468 [40];
  undefined1 local_440 [1024];
  undefined1 *local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_468;
  lVar1 = *(longlong *)(param_2 + 0xf8);
  if (lVar1 != 0) {
    local_40 = (undefined1 *)0x0;
    local_38 = 0x2000000000;
    local_30 = 2;
    FUN_146f3bafe(param_2,local_440);
    puVar2 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar2 = local_440;
    }
    if ((longlong)(int)local_38 != 0) {
      lVar3 = (longlong)(int)local_38 << 5;
      puVar2 = puVar2 + 8;
      do {
        FUN_142a801b6(*(undefined8 *)(param_1 + 0x198),lVar1,puVar2);
        puVar2 = puVar2 + 0x20;
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f49b96 FUN_146f49b96 body=202 status=ok
// SIG undefined FUN_146f49b96(void)

undefined8 FUN_146f49b96(longlong param_1,uint param_2,char param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar2 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
    }
    uVar5 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar5 * 0xc);
        if (*puVar1 == param_2) {
          uVar4 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x28) >> 8),
                           puVar1 != (uint *)0x0);
          goto LAB_146f49be4;
        }
        uVar5 = puVar1[1];
      } while (uVar5 != 0xffffffff);
    }
    uVar4 = 0;
LAB_146f49be4:
    if (param_3 != '\x01' || (char)uVar4 != '\0') {
      return uVar4;
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (lVar2 != 0) {
      do {
        lVar3 = lVar2 + 8;
        if (*(longlong *)(lVar2 + 0x188) != 0) {
          lVar3 = *(longlong *)(lVar2 + 0x188);
        }
        if ((longlong)*(int *)(lVar2 + 400) != 0) {
          lVar6 = 0;
          do {
            if ((*(uint *)(lVar3 + 8 + lVar6) & 0xfffff) == param_2) {
              return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
            }
            lVar6 = lVar6 + 0x18;
          } while ((longlong)*(int *)(lVar2 + 400) * 0x18 != lVar6);
        }
        lVar2 = *(longlong *)(lVar2 + 0x5f0);
      } while (lVar2 != 0);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146f49c60 FUN_146f49c60 body=154 status=ok
// SIG undefined FUN_146f49c60(void)

void FUN_146f49c60(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_146f4cf7a(param_1);
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x19c) != 0) {
    FUN_146f2b22a(param_1 + 0x110,0);
  }
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  if (*(int *)(param_1 + 0x3ac) != 0) {
    FUN_146f2b1bc(param_1 + 0x1a0,0);
  }
  *(undefined4 *)(param_1 + 0x438) = 0;
  if (*(int *)(param_1 + 0x43c) == 0) {
    return;
  }
  FUN_146f2b22a(param_1 + 0x3b0,0);
  return;
}



// FUNCTION 146f49cfa FUN_146f49cfa body=215 status=ok
// SIG undefined FUN_146f49cfa(void)

undefined8 FUN_146f49cfa(longlong param_1,uint *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = 1;
  if (1 < DAT_14c75f48c) {
    iVar3 = DAT_14c75f48c;
  }
  if (iVar3 < *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c)) {
LAB_146f49d37:
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
      lVar4 = param_1 + 0x60;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x68);
      }
      uVar5 = *(uint *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & *param_2) * 4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar5 * 0xc);
          if (*puVar1 == *param_2) {
            if (puVar1 != (uint *)0x0) goto LAB_146f49d37;
            break;
          }
          uVar5 = puVar1[1];
        } while (uVar5 != 0xffffffff);
      }
    }
    FUN_144980568((longlong *)(param_1 + 0x28),local_1c,param_2,0);
    FUN_146f4a074(param_1 + 0x78,param_2);
    uVar2 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146f49dd2 FUN_146f49dd2 body=84 status=ok
// SIG undefined FUN_146f49dd2(void)

void FUN_146f49dd2(longlong param_1)

{
  FUN_146f1d381(*(undefined8 *)(param_1 + 0x5e0),*(undefined4 *)(param_1 + 0x5e8));
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FUN_1400020a8();
  }
  FUN_146f082ac(param_1 + 0x1a0);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f49e26 FUN_146f49e26 body=497 status=ok
// SIG undefined FUN_146f49e26(void)

undefined4 FUN_146f49e26(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_74;
  ulonglong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  ulonglong uVar11;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = &local_4c;
  local_4c = 0;
  uVar6 = *(uint *)(param_1 + 0x280);
  uVar3 = *(undefined8 *)(param_1 + 0x278);
  uVar10 = *(uint *)(param_1 + 0x288);
  bVar14 = *(byte *)(param_1 + 0x2a0) >> 1;
  uVar12 = *(uint *)(param_1 + 0x284);
  local_68 = param_1;
  local_60 = param_2;
  if ((uVar10 < uVar6 & bVar14) != 1) {
LAB_146f49f91:
    uVar7 = 2;
    if (uVar10 == uVar6) {
      uVar7 = (uint)(*(int *)(param_1 + 0x270) != 0) * 2;
    }
    *(uint *)(param_1 + 0x2a0) = *(uint *)(param_1 + 0x2a0) & 0xfffffffd | uVar7;
    *(uint *)(param_1 + 0x288) = uVar10;
    *(uint *)(param_1 + 0x284) = uVar12;
    memset(*(void **)(param_1 + 0x1d0),0,(longlong)*(int *)(param_1 + 0x1d8) << 2);
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return local_4c;
  }
  lVar1 = param_1 + 0x1e8;
  uVar9 = (ulonglong)uVar10;
  local_78 = uVar6;
LAB_146f49ea5:
  if (uVar12 <= (uint)uVar9) {
    iVar5 = FUN_142a9dfee(uVar3,local_78,uVar9 & 0xffffffff);
    uVar12 = uVar12 + iVar5;
  }
  uVar9 = uVar9 & 0xffffffff;
  uVar13 = (ulonglong)uVar12;
  local_74 = uVar12;
  local_70 = uVar13;
  if (uVar13 < uVar9) {
    local_70 = uVar9;
  }
LAB_146f49ed4:
  uVar11 = uVar9;
  iVar5 = *(int *)(param_1 + 0x270);
  if (0 < (longlong)iVar5) goto code_r0x000146f49ee0;
  goto LAB_146f49f49;
code_r0x000146f49ee0:
  lVar8 = *(longlong *)(param_1 + 0x268);
  if (*(longlong *)(param_1 + 0x268) == 0) {
    lVar8 = lVar1;
  }
  uVar2 = *(undefined4 *)(lVar8 + -4 + (longlong)iVar5 * 4);
  *(int *)(param_1 + 0x270) = iVar5 + -1;
  FUN_140d827d0(lVar1);
  cVar4 = FUN_142aa1336(&local_68);
  uVar9 = uVar11;
  if (cVar4 != '\0') goto LAB_146f49ed4;
  iVar5 = *(int *)(param_1 + 0x270);
  uVar6 = iVar5 + 1;
  *(uint *)(param_1 + 0x270) = uVar6;
  if (*(uint *)(param_1 + 0x274) < uVar6) {
    FUN_140724a48(lVar1);
  }
  lVar8 = *(longlong *)(param_1 + 0x268);
  if (*(longlong *)(param_1 + 0x268) == 0) {
    lVar8 = lVar1;
  }
  *(undefined4 *)(lVar8 + (longlong)iVar5 * 4) = uVar2;
  bVar14 = 0;
LAB_146f49f49:
  if (uVar11 < uVar13) {
    cVar4 = FUN_142aa1336(&local_68);
    uVar9 = uVar11 + 1;
    if (cVar4 == '\0') goto LAB_146f49f8d;
    goto LAB_146f49ed4;
  }
  uVar11 = local_70;
  if ((bVar14 & 1) == 0) {
LAB_146f49f8d:
    uVar10 = (uint)uVar11;
    uVar6 = local_78;
    uVar12 = local_74;
    goto LAB_146f49f91;
  }
  uVar10 = (uint)local_70;
  uVar9 = local_70;
  uVar6 = local_78;
  uVar12 = local_74;
  if (local_78 <= uVar10) goto LAB_146f49f91;
  goto LAB_146f49ea5;
}



// FUNCTION 146f4a018 FUN_146f4a018 body=83 status=ok
// SIG undefined FUN_146f4a018(void)

longlong FUN_146f4a018(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x188) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x18c) < iVar1 + 1U) {
    FUN_146f533d0(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f533c5(lVar2);
  return lVar2;
}



// FUNCTION 146f4a06c FUN_146f4a06c body=8 status=ok
// SIG undefined FUN_146f4a06c(void)

void FUN_146f4a06c(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1c0) = param_2;
  return;
}



// FUNCTION 146f4a074 FUN_146f4a074 body=128 status=ok
// SIG undefined FUN_146f4a074(void)

void FUN_146f4a074(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x600,0x10);
  FUN_146f53494(lVar1,param_2);
  *(undefined8 *)(lVar1 + 0x5f0) = 0;
  *(undefined8 *)(lVar1 + 0x5f8) = 0;
  if (lVar1 != 0) {
    if (param_1[2] == 0) {
      param_1[1] = lVar1;
    }
    else {
      *(longlong *)(param_1[2] + 0x5f0) = lVar1;
      *(longlong *)(lVar1 + 0x5f8) = param_1[2];
    }
    param_1[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x000146f4a0e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
    return;
  }
  return;
}



// FUNCTION 146f4a0f4 FUN_146f4a0f4 body=178 status=ok
// SIG undefined FUN_146f4a0f4(void)

void FUN_146f4a0f4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((int)param_1[3] == 1) {
    FUN_146f4a1a6(param_1);
    return;
  }
  if (param_1[1] == param_2) {
    lVar1 = *(longlong *)(param_1[1] + 0x5f0);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x5f8) = 0;
  }
  else if (param_1[2] == param_2) {
    lVar1 = *(longlong *)(param_1[2] + 0x5f8);
    param_1[2] = lVar1;
    *(undefined8 *)(lVar1 + 0x5f0) = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x5f8);
    *(longlong *)(*(longlong *)(param_2 + 0x5f0) + 0x5f8) = lVar1;
    *(undefined8 *)(lVar1 + 0x5f0) = *(undefined8 *)(param_2 + 0x5f0);
  }
  FUN_146f49dd2(param_2);
  thunk_FUN_1400020a8(param_2,0x600);
                    /* WARNING: Could not recover jumptable at 0x000146f4a15d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + -1);
  return;
}



// FUNCTION 146f4a1a6 FUN_146f4a1a6 body=94 status=ok
// SIG undefined FUN_146f4a1a6(void)

void FUN_146f4a1a6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x5f0);
    FUN_146f49dd2(lVar2);
    thunk_FUN_1400020a8(lVar2,0x600);
    param_1[1] = lVar1;
    lVar2 = lVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x000146f4a201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0);
  return;
}



// FUNCTION 146f4a204 FUN_146f4a204 body=74 status=ok
// SIG undefined FUN_146f4a204(void)

undefined8 FUN_146f4a204(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    plVar3 = (longlong *)*param_1;
    plVar1 = plVar3 + (int)param_1[1];
    do {
      uVar2 = *(ushort *)(*plVar3 + 0x80);
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(*plVar3 + 0x28) + lVar4) == param_2) {
            return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
          }
          lVar4 = lVar4 + 0x10;
        } while ((ulonglong)uVar2 * 0x10 != lVar4);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return 0;
}



// FUNCTION 146f4a24e FUN_146f4a24e body=204 status=ok
// SIG undefined FUN_146f4a24e(void)

undefined8 FUN_146f4a24e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (*(ushort *)(param_1 + 0x10) != 0) {
    lVar3 = param_1[5];
    lVar10 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar10) == param_2) {
        *param_3 = 0;
        *(undefined4 *)(param_3 + 1) = 0;
        uVar1 = *(ushort *)(lVar3 + 8 + lVar10);
        lVar4 = *param_1;
        iVar8 = *(int *)(lVar4 + (ulonglong)uVar1 * 8);
        *(int *)((longlong)param_3 + 4) = iVar8;
        iVar9 = *(int *)(lVar4 + 4 + (ulonglong)uVar1 * 8);
        *(int *)(param_3 + 1) = iVar9;
        puVar7 = (undefined8 *)((ulonglong)uVar1 * 0x10 + param_1[2]);
        uVar1 = *(ushort *)(lVar3 + 10 + lVar10);
        while( true ) {
          if (uVar1 == 0xffff) {
            param_3[2] = *puVar7;
            uVar6 = puVar7[1];
            param_3[3] = uVar6;
            return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          }
          if ((undefined *)*puVar7 != &DAT_14c99c038) break;
          plVar5 = *(longlong **)(puVar7[1] + 0x10);
          lVar3 = *plVar5;
          lVar10 = plVar5[5];
          uVar2 = *(ushort *)(lVar10 + 8 + (ulonglong)uVar1 * 0x10);
          iVar8 = iVar8 + *(int *)(lVar3 + (ulonglong)uVar2 * 8);
          *(int *)((longlong)param_3 + 4) = iVar8;
          iVar9 = iVar9 + *(int *)(lVar3 + 4 + (ulonglong)uVar2 * 8);
          *(int *)(param_3 + 1) = iVar9;
          puVar7 = (undefined8 *)((ulonglong)uVar2 * 0x10 + plVar5[2]);
          uVar1 = *(ushort *)(lVar10 + 10 + (ulonglong)uVar1 * 0x10);
        }
        return 0;
      }
      lVar10 = lVar10 + 0x10;
    } while ((ulonglong)*(ushort *)(param_1 + 0x10) * 0x10 != lVar10);
  }
  return 0;
}



// FUNCTION 146f4a31a FUN_146f4a31a body=144 status=ok
// SIG undefined FUN_146f4a31a(void)

undefined8 FUN_146f4a31a(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = param_1[1];
  iVar5 = 0;
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar7 = -lVar1;
    lVar6 = 0;
    do {
      uVar4 = (uint)*(ushort *)(*(longlong *)(lVar1 + lVar6) + 0x7a);
      uVar4 = -uVar4 & (iVar5 + uVar4) - 1;
      cVar3 = FUN_146f4a24e(*(longlong *)(lVar1 + lVar6),param_2,param_3);
      if (cVar3 != '\0') {
        *param_3 = (int)((ulonglong)-(lVar7 + *param_1) >> 3);
        param_3[2] = param_3[2] + uVar4;
        return 1;
      }
      iVar5 = uVar4 + *(int *)(*(longlong *)(lVar1 + lVar6) + 0x74);
      lVar7 = lVar7 + -8;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 146f4a3aa FUN_146f4a3aa body=135 status=ok
// SIG undefined FUN_146f4a3aa(void)

uint * FUN_146f4a3aa(undefined8 param_1,uint *param_2)

{
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  FUN_146f4a432(param_1,&local_2c);
  if (local_2c != 0) {
    FUN_146f2314e(param_1,&local_30,local_2c);
    *param_2 = local_30;
    if ((local_30 & 0xfffff) == 0) {
      FUN_146f2315e(param_1,param_2,local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4a432 FUN_146f4a432 body=534 status=ok
// SIG undefined FUN_146f4a432(void)

uint * FUN_146f4a432(longlong param_1,uint *param_2,wchar_t *param_3,int param_4)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *_Dest;
  uint uVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  uint local_6c;
  longlong local_68;
  longlong *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = param_4 * 2;
  local_68 = FUN_1447addd0(param_3,uVar3);
  plVar7 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar6 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x68);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U &
                             (int)local_68 + (int)((ulonglong)local_68 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*plVar7 + (longlong)iVar5 * 0x18);
        if (*plVar1 == local_68) {
          if ((uint *)(plVar1 + 1) != (uint *)0x0 && plVar1 != (longlong *)0x0) {
            *param_2 = *(uint *)(plVar1 + 1);
            goto LAB_146f4a4bf;
          }
          break;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar8 = 0;
  if ((ulonglong)uVar2 < 0x100000) {
    *(uint *)(param_1 + 0x10) = uVar2 + 1;
    local_6c = uVar2;
    if (*(uint *)(param_1 + 0x14) <= uVar2) {
      local_78 = plVar7;
      FUN_1459a0cf0((longlong *)(param_1 + 8),uVar2);
      plVar7 = local_78;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 4) = 0;
    if (uVar2 != 0) {
      _Dest = (wchar_t *)(*(longlong *)(param_1 + 0x88) + 1U & 0xfffffffffffffffe);
      uVar4 = (longlong)_Dest + (ulonglong)uVar3 + 2;
      if (*(ulonglong *)(param_1 + 0x90) < uVar4) {
        FUN_140023dd8((longlong *)(param_1 + 0x88),uVar3 + 4);
        _Dest = (wchar_t *)(*(longlong *)(param_1 + 0x88) + 1U & 0xfffffffffffffffe);
        uVar4 = (ulonglong)uVar3 + 2 + (longlong)_Dest;
      }
      *(ulonglong *)(param_1 + 0x88) = uVar4;
      wcsncpy(_Dest,param_3,(longlong)(param_4 + 1) - 1);
      _Dest[(longlong)(param_4 + 1) + -1] = L'\0';
      local_60 = &local_68;
      local_58 = &local_6c;
      FUN_146f53920(plVar7,local_4c);
      iVar5 = *(int *)(param_1 + 0x80);
      *(uint *)(param_1 + 0x80) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x84) < iVar5 + 1U) {
        FUN_1414d5cb2((longlong *)(param_1 + 0x78),iVar5);
      }
      *(wchar_t **)(*(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 8) = _Dest;
      uVar8 = local_6c;
    }
  }
  *param_2 = uVar8;
LAB_146f4a4bf:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f4a64a FUN_146f4a64a body=102 status=ok
// SIG undefined FUN_146f4a64a(void)

void FUN_146f4a64a(longlong param_1,longlong param_2,int param_3)

{
  size_t sVar1;
  undefined1 auStack_48 [40];
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(wchar_t **)(*(longlong *)(param_1 + 0x78) + (longlong)param_3 * 8);
  if (local_20 == (wchar_t *)0x0) {
    local_18 = 0;
  }
  else {
    sVar1 = wcslen(local_20);
    local_18 = (int)sVar1;
  }
  FUN_142aa2f3b(*(undefined8 *)(param_2 + 0xe0));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4a6b2 FUN_146f4a6b2 body=101 status=ok
// SIG undefined FUN_146f4a6b2(void)

void FUN_146f4a6b2(longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)param_3 * 8));
  FUN_14021219d(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4a718 FUN_146f4a718 body=162 status=ok
// SIG undefined FUN_146f4a718(void)

undefined4 * FUN_146f4a718(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_3 + 0xd8);
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_142aa319d(lVar1);
  if (*(int *)(lVar1 + 0x14) == 0) {
    iVar3 = (int)uStack_30 + -1;
    puVar2 = local_38;
    if ((int)uStack_30 == 0) {
      puVar2 = &DAT_149dfb77a;
      iVar3 = 0;
    }
    FUN_146f4a432(param_1,param_2,puVar2,iVar3);
  }
  else {
    *param_2 = 0;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4a7bc FUN_146f4a7bc body=158 status=ok
// SIG undefined FUN_146f4a7bc(void)

undefined4 * FUN_146f4a7bc(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_14021219d(param_3);
  if ((*(byte *)(param_3 + 0x29) & 2) == 0) {
    iVar2 = (int)uStack_30 + -1;
    puVar1 = local_38;
    if ((int)uStack_30 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_146f4a432(param_1,param_2,puVar1,iVar2);
  }
  else {
    *param_2 = 0;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4a85c FUN_146f4a85c body=52 status=ok
// SIG undefined FUN_146f4a85c(void)

void FUN_146f4a85c(longlong *param_1)

{
  FUN_146f4a890();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f4a890 FUN_146f4a890 body=89 status=ok
// SIG undefined FUN_146f4a890(void)

void FUN_146f4a890(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f4a8ea FUN_146f4a8ea body=52 status=ok
// SIG undefined FUN_146f4a8ea(void)

void FUN_146f4a8ea(longlong *param_1)

{
  FUN_146f4a91e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f4a91e FUN_146f4a91e body=89 status=ok
// SIG undefined FUN_146f4a91e(void)

void FUN_146f4a91e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f4a978 FUN_146f4a978 body=52 status=ok
// SIG undefined FUN_146f4a978(void)

void FUN_146f4a978(longlong *param_1)

{
  FUN_146f4a9ac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f4a9ac FUN_146f4a9ac body=89 status=ok
// SIG undefined FUN_146f4a9ac(void)

void FUN_146f4a9ac(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f4aa06 FUN_146f4aa06 body=52 status=ok
// SIG undefined FUN_146f4aa06(void)

void FUN_146f4aa06(longlong *param_1)

{
  FUN_146f4aa3a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f4aa3a FUN_146f4aa3a body=89 status=ok
// SIG undefined FUN_146f4aa3a(void)

void FUN_146f4aa3a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f4aa93 FUN_146f4aa93 body=41 status=ok
// SIG undefined FUN_146f4aa93(void)

void FUN_146f4aa93(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f4aabc(param_1);
    param_1 = param_1 + 0x128;
  }
  return;
}



// FUNCTION 146f4aabc FUN_146f4aabc body=88 status=ok
// SIG undefined FUN_146f4aabc(void)

void FUN_146f4aabc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f4ab14 FUN_146f4ab14 body=52 status=ok
// SIG undefined FUN_146f4ab14(void)

void FUN_146f4ab14(longlong *param_1)

{
  FUN_146f4ab48();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f4ab48 FUN_146f4ab48 body=89 status=ok
// SIG undefined FUN_146f4ab48(void)

void FUN_146f4ab48(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f4aba2 FUN_146f4aba2 body=52 status=ok
// SIG undefined FUN_146f4aba2(void)

void FUN_146f4aba2(longlong *param_1)

{
  FUN_146f4abd6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f4abd6 FUN_146f4abd6 body=313 status=ok
// SIG undefined FUN_146f4abd6(void)

void FUN_146f4abd6(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_146f43160(*local_68 + (longlong)iStack_4c * 0x178 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_146f4ad10(param_1);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4ad10 FUN_146f4ad10 body=48 status=ok
// SIG undefined FUN_146f4ad10(void)

void FUN_146f4ad10(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x178,8);
  }
  return;
}



// FUNCTION 146f4ad40 FUN_146f4ad40 body=93 status=ok
// SIG undefined FUN_146f4ad40(void)

longlong FUN_146f4ad40(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146f4ad9e(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 146f4ad9e FUN_146f4ad9e body=146 status=ok
// SIG undefined FUN_146f4ad9e(void)

longlong * FUN_146f4ad9e(longlong *param_1,longlong *param_2)

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



// FUNCTION 146f4ae30 FUN_146f4ae30 body=93 status=ok
// SIG undefined FUN_146f4ae30(void)

longlong FUN_146f4ae30(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146f4ae8e(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 146f4ae8e FUN_146f4ae8e body=146 status=ok
// SIG undefined FUN_146f4ae8e(void)

longlong * FUN_146f4ae8e(longlong *param_1,longlong *param_2)

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



// FUNCTION 146f4af20 FUN_146f4af20 body=52 status=ok
// SIG undefined FUN_146f4af20(void)

void FUN_146f4af20(longlong *param_1)

{
  FUN_146f4af54();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f4af54 FUN_146f4af54 body=89 status=ok
// SIG undefined FUN_146f4af54(void)

void FUN_146f4af54(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f4afae FUN_146f4afae body=124 status=ok
// SIG undefined FUN_146f4afae(void)

void FUN_146f4afae(longlong *param_1,int param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int *piVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    uVar3 = (longlong)param_2 & (longlong)(int)param_1[9] - 1U;
    iVar1 = *(int *)((longlong)plVar2 + uVar3 * 4);
    if (iVar1 != -1) {
      piVar4 = (int *)((longlong)plVar2 + uVar3 * 4);
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == *param_3) {
          FUN_146f4b02a(param_1);
        }
        else {
          piVar4 = (int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
        }
        iVar1 = *piVar4;
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f4b02a FUN_146f4b02a body=201 status=ok
// SIG undefined FUN_146f4b02a(void)

void FUN_146f4b02a(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x18;
  lVar9 = (longlong)*(int *)(lVar1 + 0x14);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x18 + 0x10);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0x10);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar5 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar5[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 146f4b0f4 FUN_146f4b0f4 body=251 status=ok
// SIG undefined FUN_146f4b0f4(void)

undefined4 * FUN_146f4b0f4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f4b1f0(param_1,local_48);
  puVar1 = (undefined8 *)param_4[1];
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
    local_40[5] = param_3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    local_40[4] = *(undefined4 *)
                   (lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4)
         = local_48[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_146f4b31a(param_1);
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4b1f0 FUN_146f4b1f0 body=230 status=ok
// SIG undefined FUN_146f4b1f0(void)

int * FUN_146f4b1f0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146f4b2d6 FUN_146f4b2d6 body=68 status=ok
// SIG undefined FUN_146f4b2d6(void)

void FUN_146f4b2d6(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_146f4b31a(param_1);
  return;
}



// FUNCTION 146f4b31a FUN_146f4b31a body=419 status=ok
// SIG undefined FUN_146f4b31a(void)

void FUN_146f4b31a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4b4be FUN_146f4b4be body=146 status=ok
// SIG undefined FUN_146f4b4be(void)

longlong FUN_146f4b4be(longlong *param_1,uint param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[9] == 0) {
    lVar2 = 0;
  }
  else {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
    do {
      if (iVar3 == -1) {
        return 0;
      }
      lVar2 = *param_1;
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
    } while (*(uint *)(lVar2 + lVar5 * 0x18) != param_2);
    uVar1 = *(ulonglong *)(lVar2 + 8 + lVar5 * 0x18);
    while (((uVar1 ^ *param_3) & 0xfffffffffffffff) != 0) {
      do {
        if (iVar3 == -1) {
          return 0;
        }
        lVar5 = (longlong)iVar3;
        iVar3 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
      } while (*(uint *)(lVar2 + lVar5 * 0x18) != param_2);
      uVar1 = *(ulonglong *)(lVar2 + 8 + lVar5 * 0x18);
    }
    lVar2 = lVar2 + lVar5 * 0x18 + 8;
  }
  return lVar2;
}



// FUNCTION 146f4b550 FUN_146f4b550 body=196 status=ok
// SIG undefined FUN_146f4b550(void)

void FUN_146f4b550(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x18);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x18);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x18) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x18);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_144727cd0(param_1,iVar5);
  return;
}



// FUNCTION 146f4b614 FUN_146f4b614 body=68 status=ok
// SIG undefined FUN_146f4b614(void)

void FUN_146f4b614(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_146f4b658(param_1);
  return;
}



// FUNCTION 146f4b658 FUN_146f4b658 body=454 status=ok
// SIG undefined FUN_146f4b658(void)

void FUN_146f4b658(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)(((uint)((ulonglong)uVar4 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar4)
                 & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4b820 FUN_146f4b820 body=174 status=ok
// SIG undefined FUN_146f4b820(void)

undefined8 FUN_146f4b820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28,&local_40);
  *puVar1 = &PTR_LAB_149e41aa0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f9df50;
  puVar1[3] = param_3;
  puVar1[4] = FUN_146f4b8d0;
  FUN_145ff191a(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4b8d0 FUN_146f4b8d0 body=144 status=ok
// SIG undefined FUN_146f4b8d0(void)

void FUN_146f4b8d0(longlong param_1,undefined4 param_2)

{
  FUN_146f14c7a(param_1 + 0x610);
  FUN_146f1a0f8(param_1 + 0xb68,param_2);
  thunk_FUN_146efc8cc(param_1 + 0x1050,param_2);
  FUN_146f53f24(param_1 + 0x1080,param_2);
  FUN_146f16a28(param_1 + 0x1210,param_2);
  FUN_146f16d66(param_1 + 0x1110,param_2);
  FUN_142a7861e(param_1 + 0x880,param_2);
  FUN_146f16256(param_1 + 0xbe0,param_2);
  FUN_146f383bc(param_1 + 0xca0,param_2);
  return;
}



// FUNCTION 146f4b960 FUN_146f4b960 body=197 status=ok
// SIG undefined FUN_146f4b960(void)

void FUN_146f4b960(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x50);
  FUN_1446f470e(&local_30,L"NotReplicated",1);
  FUN_142a776d0(*(longlong *)(lVar1 + 0x28) + 0xb68,&local_28,local_30);
  *(undefined8 *)(param_1 + 0x12f0) = local_28;
  FUN_146f45ffa(*(undefined8 *)(param_1 + 0x50));
  FUN_146f45be2(*(undefined8 *)(param_1 + 0x50),&local_28,DAT_14c997f08);
  *(undefined8 *)(param_1 + 0x12f8) = local_28;
  FUN_146f45be2(*(undefined8 *)(param_1 + 0x50),&local_28,DAT_14c997f10);
  *(undefined8 *)(param_1 + 0x1300) = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4ba26 FUN_146f4ba26 body=34 status=ok
// SIG undefined FUN_146f4ba26(void)

undefined8 FUN_146f4ba26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f4ba64 FUN_146f4ba64 body=60 status=ok
// SIG undefined FUN_146f4ba64(void)

void FUN_146f4ba64(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e41aa0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f9df50;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146f4baa0 FUN_146f4baa0 body=60 status=ok
// SIG undefined FUN_146f4baa0(void)

void FUN_146f4baa0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e41aa0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f9df50;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146f4badc FUN_146f4badc body=97 status=ok
// SIG undefined FUN_146f4badc(void)

void FUN_146f4badc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection(param_2);
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar2 = &PTR_LAB_149e41aa0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f9df50;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f4bb4c FUN_146f4bb4c body=21 status=ok
// SIG undefined FUN_146f4bb4c(void)

undefined8 FUN_146f4bb4c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146f4bb62 FUN_146f4bb62 body=230 status=ok
// SIG undefined FUN_146f4bb62(void)

undefined8 * FUN_146f4bb62(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4bc4a FUN_146f4bc4a body=130 status=ok
// SIG undefined FUN_146f4bc4a(void)

void FUN_146f4bc4a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4bcce FUN_146f4bcce body=84 status=ok
// SIG undefined FUN_146f4bcce(void)

void FUN_146f4bcce(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
    uVar1 = (uint)(uVar2 >> 3);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x14)) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar3;
  FUN_146f3c730(param_1,*(undefined4 *)(param_1 + 0x10),uVar3,8);
  return;
}



// FUNCTION 146f4bd22 FUN_146f4bd22 body=159 status=ok
// SIG undefined FUN_146f4bd22(void)

void FUN_146f4bd22(longlong param_1,uint param_2,char param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    uVar5 = 0;
    iVar4 = 0;
    do {
      uVar6 = 0xffffffff;
      if (uVar5 == param_2 - 1) {
        uVar6 = 0xffffffff >> (-param_3 & 0x1fU);
      }
      uVar6 = uVar6 & *(uint *)(param_1 + uVar5 * 4);
      iVar3 = iVar4;
      if (uVar6 != 0) {
        do {
          if ((uVar6 & 1) != 0) {
            iVar2 = FUN_142a8e260(*param_4,param_4[1],param_4[2],param_4[4],iVar3);
            *(int *)param_4[3] = *(int *)param_4[3] + iVar2;
          }
          bVar1 = 1 < uVar6;
          uVar6 = uVar6 >> 1;
          iVar3 = iVar3 + 1;
        } while (bVar1);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x20;
    } while (uVar5 != param_2);
  }
  return;
}



// FUNCTION 146f4bdc2 FUN_146f4bdc2 body=141 status=ok
// SIG undefined FUN_146f4bdc2(void)

void FUN_146f4bdc2(longlong param_1,uint param_2,char param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    uVar4 = 0;
    iVar5 = 0;
    do {
      uVar3 = 0xffffffff;
      if (uVar4 == param_2 - 1) {
        uVar3 = 0xffffffff >> (-param_3 & 0x1fU);
      }
      uVar3 = uVar3 & *(uint *)(param_1 + uVar4 * 4);
      iVar2 = iVar5;
      if (uVar3 != 0) {
        do {
          if ((uVar3 & 1) != 0) {
            FUN_146f4be50(param_4,iVar2);
          }
          bVar1 = 1 < uVar3;
          uVar3 = uVar3 >> 1;
          iVar2 = iVar2 + 1;
        } while (bVar1);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x20;
    } while (uVar4 != param_2);
  }
  return;
}



// FUNCTION 146f4be50 FUN_146f4be50 body=164 status=ok
// SIG undefined FUN_146f4be50(void)

void FUN_146f4be50(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  int *local_18;
  uint local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(uint *)(((longlong *)param_1[1])[4] + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) &
      1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)param_2 * 0x28 + *(longlong *)param_1[1];
  }
  local_c = *(int *)(*(longlong *)(*param_1 + 0x30) + 0x70 + (longlong)(int)param_2 * 0x160);
  local_18 = *(int **)(*(longlong *)(*param_1 + 0x30) + 0x60 + (longlong)(int)param_2 * 0x160);
  local_10 = local_c + 0x1fU >> 5;
  if (local_c == 0) {
    local_18 = &local_c;
  }
  FUN_146f4741c(*(undefined8 *)(lVar1 + 8),&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4bef6 FUN_146f4bef6 body=141 status=ok
// SIG undefined FUN_146f4bef6(void)

void FUN_146f4bef6(longlong param_1,uint param_2,char param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    uVar4 = 0;
    iVar5 = 0;
    do {
      uVar3 = 0xffffffff;
      if (uVar4 == param_2 - 1) {
        uVar3 = 0xffffffff >> (-param_3 & 0x1fU);
      }
      uVar3 = uVar3 & *(uint *)(param_1 + uVar4 * 4);
      iVar2 = iVar5;
      if (uVar3 != 0) {
        do {
          if ((uVar3 & 1) != 0) {
            FUN_146f4bf84(param_4,iVar2);
          }
          bVar1 = 1 < uVar3;
          uVar3 = uVar3 >> 1;
          iVar2 = iVar2 + 1;
        } while (bVar1);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x20;
    } while (uVar4 != param_2);
  }
  return;
}



// FUNCTION 146f4bf84 FUN_146f4bf84 body=70 status=ok
// SIG undefined FUN_146f4bf84(void)

void FUN_146f4bf84(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  if ((*(uint *)(((longlong *)*param_1)[4] + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1)
      == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)param_2 * 0x28 + *(longlong *)*param_1;
  }
  if (*(char *)(lVar1 + 0x20) != '\0') {
    return;
  }
  FUN_146f47e0c(*(undefined8 *)(lVar1 + 8),param_1[1],0,0);
  return;
}



// FUNCTION 146f4bfca FUN_146f4bfca body=141 status=ok
// SIG undefined FUN_146f4bfca(void)

void FUN_146f4bfca(longlong param_1,uint param_2,char param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    uVar4 = 0;
    iVar5 = 0;
    do {
      uVar3 = 0xffffffff;
      if (uVar4 == param_2 - 1) {
        uVar3 = 0xffffffff >> (-param_3 & 0x1fU);
      }
      uVar3 = uVar3 & *(uint *)(param_1 + uVar4 * 4);
      iVar2 = iVar5;
      if (uVar3 != 0) {
        do {
          if ((uVar3 & 1) != 0) {
            FUN_146f4c058(param_4,iVar2);
          }
          bVar1 = 1 < uVar3;
          uVar3 = uVar3 >> 1;
          iVar2 = iVar2 + 1;
        } while (bVar1);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x20;
    } while (uVar4 != param_2);
  }
  return;
}



// FUNCTION 146f4c058 FUN_146f4c058 body=69 status=ok
// SIG undefined FUN_146f4c058(void)

void FUN_146f4c058(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  if ((*(uint *)(((longlong *)*param_1)[4] + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1)
      == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)param_2 * 0x28 + *(longlong *)*param_1;
  }
  FUN_142a9be00(*(undefined8 *)(lVar1 + 0x10));
  FUN_146f4441c(*(undefined8 *)(lVar1 + 0x10));
  return;
}



// FUNCTION 146f4c09e FUN_146f4c09e body=137 status=ok
// SIG undefined FUN_146f4c09e(void)

void FUN_146f4c09e(longlong param_1,uint param_2,char param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    uVar4 = 0;
    iVar5 = 0;
    do {
      uVar3 = 0xffffffff;
      if (uVar4 == param_2 - 1) {
        uVar3 = 0xffffffff >> (-param_3 & 0x1fU);
      }
      uVar3 = uVar3 & *(uint *)(param_1 + uVar4 * 4);
      iVar2 = iVar5;
      if (uVar3 != 0) {
        do {
          if ((uVar3 & 1) != 0) {
            FUN_146f3b41e(*param_4,iVar2);
          }
          bVar1 = 1 < uVar3;
          uVar3 = uVar3 >> 1;
          iVar2 = iVar2 + 1;
        } while (bVar1);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x20;
    } while (uVar4 != param_2);
  }
  return;
}



// FUNCTION 146f4c128 FUN_146f4c128 body=137 status=ok
// SIG undefined FUN_146f4c128(void)

void FUN_146f4c128(longlong param_1,uint param_2,char param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    uVar4 = 0;
    iVar5 = 0;
    do {
      uVar3 = 0xffffffff;
      if (uVar4 == param_2 - 1) {
        uVar3 = 0xffffffff >> (-param_3 & 0x1fU);
      }
      uVar3 = uVar3 & *(uint *)(param_1 + uVar4 * 4);
      iVar2 = iVar5;
      if (uVar3 != 0) {
        do {
          if ((uVar3 & 1) != 0) {
            FUN_146f3b41e(*param_4,iVar2);
          }
          bVar1 = 1 < uVar3;
          uVar3 = uVar3 >> 1;
          iVar2 = iVar2 + 1;
        } while (bVar1);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x20;
    } while (uVar4 != param_2);
  }
  return;
}



// FUNCTION 146f4c1b2 FUN_146f4c1b2 body=78 status=ok
// SIG undefined FUN_146f4c1b2(void)

void FUN_146f4c1b2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_146f4bcce(param_1,0);
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14475fe8c(param_1 + 0x18,0);
  return;
}



// FUNCTION 146f4c200 FUN_146f4c200 body=360 status=ok
// SIG undefined FUN_146f4c200(void)

undefined8 * FUN_146f4c200(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xa0;
  *(undefined4 *)(param_1 + 4) = 10;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x10;
  *(undefined4 *)(param_1 + 5) = 0x20;
  FUN_146f4c368(param_1 + 6);
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_146f4c3d6(param_1 + 0x3a);
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  uVar1 = FUN_146efdb37(L"HugeObjectState",0x10);
  param_1[0x67] = uVar1;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x72] = &PTR_FUN_149f9e0f8;
  *(undefined2 *)(param_1 + 0x76) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  return param_1;
}



// FUNCTION 146f4c368 FUN_146f4c368 body=110 status=ok
// SIG undefined FUN_146f4c368(void)

undefined8 * FUN_146f4c368(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_146f4c46a(param_1,0x400);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_146f4c83a(param_1 + 4,0x100);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_146f4cb08(param_1 + 8,0x40);
  *(undefined2 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 146f4c3d6 FUN_146f4c3d6 body=148 status=ok
// SIG undefined FUN_146f4c3d6(void)

undefined8 * FUN_146f4c3d6(undefined8 *param_1)

{
  param_1[0x13] = 0;
  param_1[0x14] = 0x2000000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xef;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1b),4000);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return param_1;
}



// FUNCTION 146f4c46a FUN_146f4c46a body=717 status=ok
// SIG undefined FUN_146f4c46a(void)

void FUN_146f4c46a(uint *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  void *_Src;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  void *local_68;
  uint *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = param_2 + -1 + (ulonglong)(param_2 == 0);
  if (uVar4 == 0) {
    bVar2 = 0;
  }
  else {
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar2 = (byte)lVar13 ^ 0x3f;
  }
  uVar8 = 1L << (-bVar2 & 0x3f);
  uVar10 = param_1[6];
  if (uVar8 == (longlong)(int)uVar10) goto LAB_146f4c4c1;
  uVar6 = *param_1;
  uVar5 = param_1[1];
  uVar9 = uVar6 - uVar5;
  if (uVar8 < uVar9) goto LAB_146f4c4c1;
  puVar1 = param_1 + 4;
  uVar7 = (uint)uVar8;
  if ((int)uVar10 < 1) {
    param_1[2] = uVar7 - 1;
    param_1[6] = uVar10 + uVar7;
    if (param_1[7] - uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    goto LAB_146f4c4c1;
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8 & 0xffffffff);
  }
  if (uVar4 < 0x80000000) {
    FUN_146f4c754(&local_58,uVar8 & 0xffffffff);
    uVar6 = *param_1;
    uVar5 = param_1[1];
    uVar9 = uVar6 - uVar5;
  }
  uVar4 = uStack_50;
  uVar11 = param_1[2] & uVar5;
  uVar10 = param_1[2] & uVar6;
  _Src = *(void **)(param_1 + 4);
  iVar12 = (uint)uStack_50;
  local_60 = puVar1;
  if (uVar11 < uVar10 || uVar6 == uVar5) {
    iVar3 = (uint)uStack_50 + uVar9;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar9) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = (uint)uStack_50 + uVar9;
      FUN_146f4c7b4(&local_58,uVar4);
      iVar3 = (uint)uStack_50;
    }
    uStack_50._0_4_ = iVar3;
    if (uVar6 != uVar5) {
      _Src = (void *)((longlong)_Src + (ulonglong)uVar11 * 0x10);
      uVar10 = uVar9;
      goto LAB_146f4c62c;
    }
  }
  else {
    uVar6 = param_1[6];
    uVar5 = uVar6 - uVar11;
    lVar13 = (longlong)(int)(uint)uStack_50;
    uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + uVar5);
    if (uStack_50._4_4_ - iVar12 < uVar5) {
      local_68 = _Src;
      FUN_146f4c7b4(&local_58,uVar4 & 0xffffffff);
      _Src = local_68;
    }
    if (uVar6 != uVar11) {
      memcpy((void *)(lVar13 * 0x10 + local_58),(void *)((ulonglong)uVar11 * 0x10 + (longlong)_Src),
             (longlong)(int)uVar5 << 4);
    }
    iVar12 = (uint)uStack_50;
    iVar3 = (uint)uStack_50 + uVar10;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar10) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = iVar3;
      FUN_146f4c7b4(&local_58,uVar4);
    }
    else {
      uStack_50._0_4_ = iVar3;
      if (uVar10 == 0) goto LAB_146f4c647;
    }
LAB_146f4c62c:
    memcpy((void *)((longlong)iVar12 * 0x10 + local_58),_Src,(longlong)(int)uVar10 << 4);
  }
LAB_146f4c647:
  iVar12 = (uint)uStack_50;
  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + (uVar7 - uVar9));
  if (uStack_50._4_4_ - iVar12 < uVar7 - uVar9) {
    FUN_146f4c7b4(&local_58);
  }
  if (local_60 == (uint *)&local_58) {
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = local_58;
    param_1[6] = (uint)uStack_50;
    param_1[7] = uStack_50._4_4_;
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
  }
LAB_146f4c4c1:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4c754 FUN_146f4c754 body=95 status=ok
// SIG undefined FUN_146f4c754(void)

void FUN_146f4c754(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146f4c7b4 FUN_146f4c7b4 body=132 status=ok
// SIG undefined FUN_146f4c7b4(void)

void FUN_146f4c7b4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f4c83a FUN_146f4c83a body=688 status=ok
// SIG undefined FUN_146f4c83a(void)

void FUN_146f4c83a(uint *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Src;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  void *local_68;
  uint *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = param_2 + -1 + (ulonglong)(param_2 == 0);
  if (uVar4 == 0) {
    bVar2 = 0;
  }
  else {
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar2 = (byte)lVar13 ^ 0x3f;
  }
  uVar8 = 1L << (-bVar2 & 0x3f);
  uVar10 = param_1[6];
  if (uVar8 == (longlong)(int)uVar10) goto LAB_146f4c891;
  uVar6 = *param_1;
  uVar5 = param_1[1];
  uVar9 = uVar6 - uVar5;
  if (uVar8 < uVar9) goto LAB_146f4c891;
  puVar1 = param_1 + 4;
  uVar7 = (uint)uVar8;
  if ((int)uVar10 < 1) {
    param_1[2] = uVar7 - 1;
    param_1[6] = uVar10 + uVar7;
    if (param_1[7] - uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    goto LAB_146f4c891;
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8 & 0xffffffff);
  }
  if (uVar4 < 0x80000000) {
    FUN_1448759c8(&local_58,uVar8 & 0xffffffff);
    uVar6 = *param_1;
    uVar5 = param_1[1];
    uVar9 = uVar6 - uVar5;
  }
  uVar4 = uStack_50;
  uVar11 = param_1[2] & uVar5;
  uVar10 = param_1[2] & uVar6;
  _Src = *(void **)(param_1 + 4);
  iVar12 = (uint)uStack_50;
  local_60 = puVar1;
  if (uVar11 < uVar10 || uVar6 == uVar5) {
    iVar3 = (uint)uStack_50 + uVar9;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar9) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = (uint)uStack_50 + uVar9;
      FUN_14488eebe(&local_58,uVar4);
      iVar3 = (uint)uStack_50;
    }
    uStack_50._0_4_ = iVar3;
    if (uVar6 != uVar5) {
      _Src = (void *)((longlong)_Src + (ulonglong)uVar11 * 2);
      uVar10 = uVar9;
      goto LAB_146f4ca07;
    }
  }
  else {
    uVar6 = param_1[6];
    uVar5 = uVar6 - uVar11;
    lVar13 = (longlong)(int)(uint)uStack_50;
    uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + uVar5);
    if (uStack_50._4_4_ - iVar12 < uVar5) {
      local_68 = _Src;
      FUN_14488eebe(&local_58,uVar4 & 0xffffffff);
      _Src = local_68;
    }
    if (uVar6 != uVar11) {
      memcpy((void *)(lVar13 * 2 + local_58),(void *)((longlong)_Src + (ulonglong)uVar11 * 2),
             (longlong)(int)uVar5 * 2);
    }
    iVar12 = (uint)uStack_50;
    iVar3 = (uint)uStack_50 + uVar10;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar10) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = iVar3;
      FUN_14488eebe(&local_58,uVar4);
    }
    else {
      uStack_50._0_4_ = iVar3;
      if (uVar10 == 0) goto LAB_146f4ca1d;
    }
LAB_146f4ca07:
    memcpy((void *)((longlong)iVar12 * 2 + local_58),_Src,(longlong)(int)uVar10 * 2);
  }
LAB_146f4ca1d:
  iVar12 = (uint)uStack_50;
  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + (uVar7 - uVar9));
  if (uStack_50._4_4_ - iVar12 < uVar7 - uVar9) {
    FUN_14488eebe(&local_58);
  }
  if (local_60 == (uint *)&local_58) {
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = local_58;
    param_1[6] = (uint)uStack_50;
    param_1[7] = uStack_50._4_4_;
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
  }
LAB_146f4c891:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4cb08 FUN_146f4cb08 body=673 status=ok
// SIG undefined FUN_146f4cb08(void)

void FUN_146f4cb08(uint *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Src;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  void *local_68;
  uint *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = param_2 + -1 + (ulonglong)(param_2 == 0);
  if (uVar4 == 0) {
    bVar2 = 0;
  }
  else {
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar2 = (byte)lVar13 ^ 0x3f;
  }
  uVar8 = 1L << (-bVar2 & 0x3f);
  uVar10 = param_1[6];
  if (uVar8 == (longlong)(int)uVar10) goto LAB_146f4cb5f;
  uVar6 = *param_1;
  uVar5 = param_1[1];
  uVar9 = uVar6 - uVar5;
  if (uVar8 < uVar9) goto LAB_146f4cb5f;
  puVar1 = param_1 + 4;
  uVar7 = (uint)uVar8;
  if ((int)uVar10 < 1) {
    param_1[2] = uVar7 - 1;
    param_1[6] = uVar10 + uVar7;
    if (param_1[7] - uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    goto LAB_146f4cb5f;
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8 & 0xffffffff);
  }
  if (uVar4 < 0x80000000) {
    FUN_1448f21ac(&local_58,uVar8 & 0xffffffff);
    uVar6 = *param_1;
    uVar5 = param_1[1];
    uVar9 = uVar6 - uVar5;
  }
  uVar4 = uStack_50;
  uVar11 = param_1[2] & uVar5;
  uVar10 = param_1[2] & uVar6;
  _Src = *(void **)(param_1 + 4);
  iVar12 = (uint)uStack_50;
  local_60 = puVar1;
  if (uVar11 < uVar10 || uVar6 == uVar5) {
    iVar3 = (uint)uStack_50 + uVar9;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar9) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = (uint)uStack_50 + uVar9;
      FUN_14479d316(&local_58,uVar4);
      iVar3 = (uint)uStack_50;
    }
    uStack_50._0_4_ = iVar3;
    if (uVar6 != uVar5) {
      _Src = (void *)((longlong)_Src + (ulonglong)uVar11 * 8);
      uVar10 = uVar9;
      goto LAB_146f4cd04;
    }
  }
  else {
    uVar6 = param_1[6];
    uVar5 = uVar6 - uVar11;
    lVar13 = (longlong)(int)(uint)uStack_50;
    uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + uVar5);
    if (uStack_50._4_4_ - iVar12 < uVar5) {
      local_68 = _Src;
      FUN_14479d316(&local_58,uVar4 & 0xffffffff);
      _Src = local_68;
    }
    if (uVar6 != uVar11) {
      memcpy((void *)(lVar13 * 8 + local_58),(void *)((longlong)_Src + (ulonglong)uVar11 * 8),
             (longlong)(int)uVar5 << 3);
    }
    iVar12 = (uint)uStack_50;
    iVar3 = (uint)uStack_50 + uVar10;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar10) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = iVar3;
      FUN_14479d316(&local_58,uVar4);
    }
    else {
      uStack_50._0_4_ = iVar3;
      if (uVar10 == 0) goto LAB_146f4cd1c;
    }
LAB_146f4cd04:
    memcpy((void *)((longlong)iVar12 * 8 + local_58),_Src,(longlong)(int)uVar10 << 3);
  }
LAB_146f4cd1c:
  iVar12 = (uint)uStack_50;
  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + (uVar7 - uVar9));
  if (uStack_50._4_4_ - iVar12 < uVar7 - uVar9) {
    FUN_14479d316(&local_58);
  }
  if (local_60 == (uint *)&local_58) {
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = local_58;
    param_1[6] = (uint)uStack_50;
    param_1[7] = uStack_50._4_4_;
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
  }
LAB_146f4cb5f:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4cdc6 FUN_146f4cdc6 body=52 status=ok
// SIG undefined FUN_146f4cdc6(void)

void FUN_146f4cdc6(longlong *param_1)

{
  FUN_146f4cdfa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f4cdfa FUN_146f4cdfa body=310 status=ok
// SIG undefined FUN_146f4cdfa(void)

void FUN_146f4cdfa(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_146f14ffe(*local_68 + (longlong)iStack_4c * 0x40 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4cf32 FUN_146f4cf32 body=72 status=ok
// SIG undefined FUN_146f4cf32(void)

longlong FUN_146f4cf32(uint *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = *param_1;
  if ((ulonglong)(longlong)(int)param_1[6] <= (ulonglong)(uVar3 - param_1[1])) {
    FUN_146f4c46a(param_1,(ulonglong)(uVar3 - param_1[1]) + 1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar2 = *(longlong *)(param_1 + 4);
  lVar4 = (ulonglong)(uVar3 & param_1[2]) * 0x10;
  puVar1 = (undefined8 *)(lVar2 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  return lVar2 + lVar4;
}



// FUNCTION 146f4cf7a FUN_146f4cf7a body=90 status=ok
// SIG undefined FUN_146f4cf7a(void)

void FUN_146f4cf7a(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
    if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x100),
              (longlong)*(int *)((longlong)param_1 + 0x108) << 3);
      FUN_1446efa72((longlong)param_1 + 0x100,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 146f4cfd4 FUN_146f4cfd4 body=125 status=ok
// SIG undefined FUN_146f4cfd4(void)

void FUN_146f4cfd4(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_146f4d052(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f4d052 FUN_146f4d052 body=142 status=ok
// SIG undefined FUN_146f4d052(void)

void FUN_146f4d052(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f4d0e0 FUN_146f4d0e0 body=104 status=ok
// SIG undefined FUN_146f4d0e0(void)

void FUN_146f4d0e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146f4d14a(param_1,*param_2,*param_3);
  if (lVar1 == 0) {
    local_38 = param_2;
    local_30 = param_3;
    FUN_146f4d1fc(param_1,local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4d14a FUN_146f4d14a body=178 status=ok
// SIG undefined FUN_146f4d14a(void)

longlong FUN_146f4d14a(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[9] == 0) {
    return 0;
  }
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar3 = *(int *)((longlong)plVar4 +
                  (longlong)(int)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
  do {
    if (iVar3 == -1) {
      return 0;
    }
    lVar1 = *param_1;
    lVar5 = (longlong)iVar3;
    iVar3 = *(int *)(lVar1 + 0x10 + lVar5 * 0x18);
  } while (*(ulonglong *)(lVar1 + lVar5 * 0x18) != param_2);
  if (*(longlong *)(lVar1 + 8 + lVar5 * 0x18) == param_3) {
    return lVar1 + lVar5 * 0x18 + 8;
  }
  do {
    if (iVar3 == -1) {
      return 0;
    }
    lVar5 = (longlong)iVar3;
    iVar3 = *(int *)(lVar1 + 0x10 + lVar5 * 0x18);
  } while ((*(ulonglong *)(lVar1 + lVar5 * 0x18) != param_2) ||
          (*(longlong *)(lVar1 + 8 + lVar5 * 0x18) != param_3));
  return lVar1 + lVar5 * 0x18 + 8;
}



// FUNCTION 146f4d1fc FUN_146f4d1fc body=302 status=ok
// SIG undefined FUN_146f4d1fc(void)

undefined4 * FUN_146f4d1fc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  ulonglong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f4d32c(param_1,local_38);
  puVar1 = (ulonglong *)param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  *local_30 = uVar2;
  local_30[1] = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = *(int *)(param_1 + 0x48) - 1U & (uVar5 >> 0x10 ^ uVar5);
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_146f4d412(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4d32c FUN_146f4d32c body=230 status=ok
// SIG undefined FUN_146f4d32c(void)

int * FUN_146f4d32c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146f4d412 FUN_146f4d412 body=474 status=ok
// SIG undefined FUN_146f4d412(void)

void FUN_146f4d412(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4d5ee FUN_146f4d5ee body=100 status=ok
// SIG undefined FUN_146f4d5ee(void)

void FUN_146f4d5ee(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146f4d654(param_1,*param_2);
  if (lVar1 == 0) {
    local_38 = param_2;
    local_30 = param_3;
    FUN_146f4d6de(param_1,local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4d654 FUN_146f4d654 body=137 status=ok
// SIG undefined FUN_146f4d654(void)

longlong FUN_146f4d654(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if ((int)param_1[9] == 0) {
LAB_146f4d6d9:
    lVar4 = 0;
  }
  else {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
    do {
      iVar2 = iVar6;
      if (iVar2 == -1) {
        return 0;
      }
      lVar1 = *param_1;
      iVar6 = *(int *)(lVar1 + 0x18 + (longlong)iVar2 * 0x20);
    } while (*(uint *)(lVar1 + (longlong)iVar2 * 0x20) != param_2);
    while ((*(longlong *)(lVar1 + 8 + (longlong)iVar2 * 0x20) != *param_3 ||
           (lVar3 = (longlong)iVar2 * 0x20 + lVar1, lVar4 = lVar3 + 8,
           *(longlong *)(lVar3 + 0x10) != param_3[1]))) {
      do {
        iVar2 = iVar6;
        if (iVar2 == -1) goto LAB_146f4d6d9;
        iVar6 = *(int *)(lVar1 + 0x18 + (longlong)iVar2 * 0x20);
      } while (*(uint *)(lVar1 + (longlong)iVar2 * 0x20) != param_2);
    }
  }
  return lVar4;
}



// FUNCTION 146f4d6de FUN_146f4d6de body=248 status=ok
// SIG undefined FUN_146f4d6de(void)

undefined4 * FUN_146f4d6de(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f4d7d8(param_1,local_38);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_30 = uVar5;
  uVar7 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_30[2] = *puVar1;
  local_30[3] = uVar7;
  local_30[4] = uVar2;
  local_30[5] = uVar3;
  local_30[6] = 0xffffffff;
  uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar8 = 1;
  if (3 < uVar7) {
    uVar6 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar8 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
    uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
    local_30[7] = uVar5;
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    local_30[6] = *(uint *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5)
                                    * 4);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar8;
    FUN_146f4d8be(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4d7d8 FUN_146f4d7d8 body=229 status=ok
// SIG undefined FUN_146f4d7d8(void)

int * FUN_146f4d7d8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146f4d8be FUN_146f4d8be body=422 status=ok
// SIG undefined FUN_146f4d8be(void)

void FUN_146f4d8be(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4da66 FUN_146f4da66 body=326 status=ok
// SIG undefined FUN_146f4da66(void)

undefined4 * FUN_146f4da66(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f4dbae(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar8 = *(ulonglong *)*param_3;
  *local_40 = uVar8;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar2;
  *(undefined4 *)(local_40 + 2) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  cVar5 = FUN_146f4dc94(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146f4dd90(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4dbae FUN_146f4dbae body=229 status=ok
// SIG undefined FUN_146f4dbae(void)

int * FUN_146f4dbae(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146f4dc94 FUN_146f4dc94 body=137 status=ok
// SIG undefined FUN_146f4dc94(void)

undefined8 FUN_146f4dc94(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146f4dd1e((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f4dd1e FUN_146f4dd1e body=114 status=ok
// SIG undefined FUN_146f4dd1e(void)

void FUN_146f4dd1e(longlong *param_1,int param_2)

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



// FUNCTION 146f4dd90 FUN_146f4dd90 body=477 status=ok
// SIG undefined FUN_146f4dd90(void)

void FUN_146f4dd90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4df6e FUN_146f4df6e body=134 status=ok
// SIG undefined FUN_146f4df6e(void)

void FUN_146f4df6e(longlong *param_1,int *param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_3) goto LAB_146f4df7e;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_146f4df7e:
  *param_2 = iVar1;
  return;
}



// FUNCTION 146f4dff4 FUN_146f4dff4 body=90 status=ok
// SIG undefined FUN_146f4dff4(void)

void FUN_146f4dff4(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_146f4dd1e();
  return;
}



// FUNCTION 146f4e04e FUN_146f4e04e body=204 status=ok
// SIG undefined FUN_146f4e04e(void)

void FUN_146f4e04e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  lVar2 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar8 = (longlong)*(int *)(lVar2 + 0x1c + (longlong)param_2 * 0x20);
  iVar7 = *(int *)((longlong)plVar6 + lVar8 * 4);
  if (iVar7 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar8 * 4);
  }
  else {
    do {
      lVar8 = (longlong)iVar7;
      iVar7 = *(int *)(lVar2 + 0x18 + lVar8 * 0x20);
    } while (iVar7 != param_2);
    puVar5 = (undefined4 *)(lVar2 + lVar8 * 0x20 + 0x18);
  }
  *puVar5 = *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 0x18);
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
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146f4e11a FUN_146f4e11a body=201 status=ok
// SIG undefined FUN_146f4e11a(void)

void FUN_146f4e11a(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x18;
  lVar9 = (longlong)*(int *)(lVar1 + 0x14);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x18 + 0x10);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0x10);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar5 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar5[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 146f4e1e4 FUN_146f4e1e4 body=132 status=ok
// SIG undefined FUN_146f4e1e4(void)

void FUN_146f4e1e4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f4e26a FUN_146f4e26a body=62 status=ok
// SIG undefined FUN_146f4e26a(void)

void FUN_146f4e26a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f4e2a8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146f4e2a8 FUN_146f4e2a8 body=93 status=ok
// SIG undefined FUN_146f4e2a8(void)

ulonglong FUN_146f4e2a8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146f4e306 FUN_146f4e306 body=119 status=ok
// SIG undefined FUN_146f4e306(void)

void FUN_146f4e306(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_146f4e37e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f4e37e FUN_146f4e37e body=141 status=ok
// SIG undefined FUN_146f4e37e(void)

void FUN_146f4e37e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 146f4e40c FUN_146f4e40c body=116 status=ok
// SIG undefined FUN_146f4e40c(void)

void FUN_146f4e40c(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(((uint)(uVar2 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (((*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) ^ uVar2) & 0xfffffffffffffff) == 0)
        {
          FUN_146f4e480();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f4e480 FUN_146f4e480 body=87 status=ok
// SIG undefined FUN_146f4e480(void)

void FUN_146f4e480(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_146f4e4d8();
  return;
}



// FUNCTION 146f4e4d8 FUN_146f4e4d8 body=114 status=ok
// SIG undefined FUN_146f4e4d8(void)

void FUN_146f4e4d8(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 146f4e54a FUN_146f4e54a body=48 status=ok
// SIG undefined FUN_146f4e54a(void)

void FUN_146f4e54a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x128,8);
  }
  return;
}



// FUNCTION 146f4e57a FUN_146f4e57a body=63 status=ok
// SIG undefined FUN_146f4e57a(void)

void FUN_146f4e57a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146f4abd6(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146f4e704(param_1);
    return;
  }
  FUN_146f4e5ba(param_1);
  FUN_146f4abd6(param_1);
  return;
}



// FUNCTION 146f4e5ba FUN_146f4e5ba body=328 status=ok
// SIG undefined FUN_146f4e5ba(void)

void FUN_146f4e5ba(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x174 + (longlong)iVar4 * 0x178) * 4) =
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



// FUNCTION 146f4e704 FUN_146f4e704 body=432 status=ok
// SIG undefined FUN_146f4e704(void)

void FUN_146f4e704(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x178;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x174 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x170 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4e8b6 FUN_146f4e8b6 body=291 status=ok
// SIG undefined FUN_146f4e8b6(void)

undefined4 * FUN_146f4e8b6(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f4e9da(param_1,local_48);
  FUN_146f4ec02(param_3,local_40);
  local_40[0x5c] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_146f4eac8(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0x5d] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x5c] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146f4e704(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4e9da FUN_146f4e9da body=237 status=ok
// SIG undefined FUN_146f4e9da(void)

int * FUN_146f4e9da(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_146f4eb6a(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x178);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x178) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x178 + *param_1;
  return param_2;
}



// FUNCTION 146f4eac8 FUN_146f4eac8 body=162 status=ok
// SIG undefined FUN_146f4eac8(void)

undefined8 FUN_146f4eac8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x178);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x178) == *param_3) {
          FUN_146f43160((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x170);
          FUN_146f4ee9a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x170);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f4eb6a FUN_146f4eb6a body=150 status=ok
// SIG undefined FUN_146f4eb6a(void)

void FUN_146f4eb6a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x178,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x178)) {
      uVar5 = uVar4 / 0x178 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x178,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f4ec02 FUN_146f4ec02 body=299 status=ok
// SIG undefined FUN_146f4ec02(void)

undefined4 * FUN_146f4ec02(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_160 = 0;
  local_158 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_154 = 0xffffffff00000080;
  local_14c = 0;
  local_140 = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b4 = 0xffffffff00000080;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0x280000000000000;
  *param_2 = *(undefined4 *)*param_1;
  FUN_146f4ed2e(param_2 + 2,&local_188);
  FUN_146f43160(&local_188);
  if ((local_18 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4ed2e FUN_146f4ed2e body=116 status=ok
// SIG undefined FUN_146f4ed2e(void)

undefined8 * FUN_146f4ed2e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  FUN_146f4eda2(param_1 + 1,param_2 + 1);
  FUN_146f4eda2(param_1 + 0xb,param_2 + 0xb);
  FUN_146f4ee1e(param_1 + 0x15,param_2 + 0x15);
  FUN_146f4ee1e(param_1 + 0x1f,param_2 + 0x1f);
  uVar1 = param_2[0x2a];
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x154);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x15c);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x154) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x15c) = uVar3;
  return param_1;
}



// FUNCTION 146f4eda2 FUN_146f4eda2 body=123 status=ok
// SIG undefined FUN_146f4eda2(void)

undefined8 * FUN_146f4eda2(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146f4ad9e();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 146f4ee1e FUN_146f4ee1e body=123 status=ok
// SIG undefined FUN_146f4ee1e(void)

undefined8 * FUN_146f4ee1e(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146f4ae8e();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 146f4ee9a FUN_146f4ee9a body=122 status=ok
// SIG undefined FUN_146f4ee9a(void)

void FUN_146f4ee9a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x178) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x178) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x178 + 4) = uVar5;
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



// FUNCTION 146f4ef14 FUN_146f4ef14 body=87 status=ok
// SIG undefined FUN_146f4ef14(void)

void FUN_146f4ef14(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x178) == param_2) {
          FUN_146f4ef6c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x178 + *param_1 + 0x170);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f4ef6c FUN_146f4ef6c body=138 status=ok
// SIG undefined FUN_146f4ef6c(void)

void FUN_146f4ef6c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x178;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x174 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x170 + lVar6 * 0x178);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x178 + 0x170);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x170);
  FUN_146f43160(*param_1 + lVar2 + 8);
  FUN_146f4ee9a(param_1,param_2);
  return;
}



// FUNCTION 146f4eff6 FUN_146f4eff6 body=114 status=ok
// SIG undefined FUN_146f4eff6(void)

void FUN_146f4eff6(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (((*(ulonglong *)(lVar2 + uVar3) ^ *param_2) & 0xfffffffffffffff) == 0) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f2ac26(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(ulonglong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 146f4f068 FUN_146f4f068 body=100 status=ok
// SIG undefined FUN_146f4f068(void)

void FUN_146f4f068(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = (int)uVar2;
    FUN_146f3151c(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 146f4f0cc FUN_146f4f0cc body=19 status=ok
// SIG undefined FUN_146f4f0cc(void)

void FUN_146f4f0cc(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 146f4f0e0 FUN_146f4f0e0 body=110 status=ok
// SIG undefined FUN_146f4f0e0(void)

void FUN_146f4f0e0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_146f4f150(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f4f150 FUN_146f4f150 body=132 status=ok
// SIG undefined FUN_146f4f150(void)

void FUN_146f4f150(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 146f4f1d4 FUN_146f4f1d4 body=52 status=ok
// SIG undefined FUN_146f4f1d4(void)

void FUN_146f4f1d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f4f208(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_146f4f150(param_1,*(undefined4 *)(param_1 + 0x48),iVar1);
  return;
}



// FUNCTION 146f4f208 FUN_146f4f208 body=108 status=ok
// SIG undefined FUN_146f4f208(void)

ulonglong FUN_146f4f208(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146f4f274 FUN_146f4f274 body=86 status=ok
// SIG undefined FUN_146f4f274(void)

void FUN_146f4f274(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0x2000000000;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0x400000000;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0x400000000;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0x400000000;
  *(undefined8 *)(param_1 + 0x120) = 0;
  return;
}



// FUNCTION 146f4f2ca FUN_146f4f2ca body=146 status=ok
// SIG undefined FUN_146f4f2ca(void)

void FUN_146f4f2ca(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x128,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x128)) {
      uVar5 = uVar4 / 0x128 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x128,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f4f35e FUN_146f4f35e body=110 status=ok
// SIG undefined FUN_146f4f35e(void)

void FUN_146f4f35e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_146f4f3ce(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f4f3ce FUN_146f4f3ce body=132 status=ok
// SIG undefined FUN_146f4f3ce(void)

void FUN_146f4f3ce(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 146f4f452 FUN_146f4f452 body=411 status=ok
// SIG undefined FUN_146f4f452(void)

void FUN_146f4f452(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
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
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 146f4f5ee FUN_146f4f5ee body=93 status=ok
// SIG undefined FUN_146f4f5ee(void)

void FUN_146f4f5ee(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_146f30478(param_1,param_2,1);
  return;
}



// FUNCTION 146f4f64c FUN_146f4f64c body=281 status=ok
// SIG undefined FUN_146f4f64c(void)

undefined4 * FUN_146f4f64c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f302fa(param_1,local_38);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_30 = uVar2;
  *(undefined4 *)(local_30 + 1) = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = *(int *)(param_1 + 0x48) - 1U &
            ((uint)((ulonglong)uVar2 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar2;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_146f4f766(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4f766 FUN_146f4f766 body=454 status=ok
// SIG undefined FUN_146f4f766(void)

void FUN_146f4f766(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)(((uint)((ulonglong)uVar4 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar4)
                 & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f4f92e FUN_146f4f92e body=411 status=ok
// SIG undefined FUN_146f4f92e(void)

void FUN_146f4f92e(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
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
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 146f4faca FUN_146f4faca body=247 status=ok
// SIG undefined FUN_146f4faca(void)

undefined4 * FUN_146f4faca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f4b1f0(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_30 = uVar3;
  *(undefined8 *)(local_30 + 2) = *puVar1;
  local_30[4] = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    local_30[5] = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    local_30[4] = *(uint *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3)
                                    * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_146f4b31a(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4fbc2 FUN_146f4fbc2 body=132 status=ok
// SIG undefined FUN_146f4fbc2(void)

longlong FUN_146f4fbc2(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_146f4fc48();
  if (lVar1 == 0) {
    local_40 = param_3;
    local_38 = param_4;
    FUN_146f4fc9c(param_1,&local_2c,param_2);
    lVar1 = *param_1 + (longlong)local_2c * 0x18;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 146f4fc48 FUN_146f4fc48 body=84 status=ok
// SIG undefined FUN_146f4fc48(void)

ulonglong * FUN_146f4fc48(longlong *param_1,uint param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar2 * 0x18);
        if (((*puVar1 ^ *param_3) & 0xfffffffffffffff) == 0) {
          return puVar1;
        }
        iVar2 = (int)puVar1[2];
      } while (iVar2 != -1);
    }
  }
  return (ulonglong *)0x0;
}



// FUNCTION 146f4fc9c FUN_146f4fc9c body=281 status=ok
// SIG undefined FUN_146f4fc9c(void)

undefined4 * FUN_146f4fc9c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f4fdb6(param_1,local_48);
  puVar1 = (undefined2 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_146f4fe9c(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146f4b658(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f4fdb6 FUN_146f4fdb6 body=230 status=ok
// SIG undefined FUN_146f4fdb6(void)

int * FUN_146f4fdb6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146f4fe9c FUN_146f4fe9c body=132 status=ok
// SIG undefined FUN_146f4fe9c(void)

undefined8 FUN_146f4fe9c(longlong *param_1,uint param_2,ulonglong *param_3,int *param_4)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (((*puVar1 ^ *param_3) & 0xfffffffffffffff) == 0) {
          uVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          uVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)puVar1 = (int)uVar4;
          *(undefined4 *)((longlong)puVar1 + 4) = uVar2;
          *(int *)(puVar1 + 1) = (int)uVar5;
          *(undefined4 *)((longlong)puVar1 + 0xc) = uVar3;
          FUN_146f4e4d8((int)uVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = (int)puVar1[2];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f4ff20 FUN_146f4ff20 body=68 status=ok
// SIG undefined FUN_146f4ff20(void)

void FUN_146f4ff20(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146f4ff64();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146f4ff64 FUN_146f4ff64 body=322 status=ok
// SIG undefined FUN_146f4ff64(void)

void FUN_146f4ff64(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 146f500a8 FUN_146f500a8 body=68 status=ok
// SIG undefined FUN_146f500a8(void)

void FUN_146f500a8(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146f500ec();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146f500ec FUN_146f500ec body=322 status=ok
// SIG undefined FUN_146f500ec(void)

void FUN_146f500ec(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 146f50230 FUN_146f50230 body=100 status=ok
// SIG undefined FUN_146f50230(void)

void FUN_146f50230(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146f4b4be(param_1,*param_2);
  if (lVar1 == 0) {
    local_38 = param_2;
    local_30 = param_3;
    FUN_146f50296(param_1,local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f50296 FUN_146f50296 body=247 status=ok
// SIG undefined FUN_146f50296(void)

undefined4 * FUN_146f50296(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f4b1f0(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_30 = uVar3;
  *(undefined8 *)(local_30 + 2) = *puVar1;
  local_30[4] = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    local_30[5] = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    local_30[4] = *(uint *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3)
                                    * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_146f4b31a(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5038e FUN_146f5038e body=322 status=ok
// SIG undefined FUN_146f5038e(void)

void FUN_146f5038e(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 146f504d2 FUN_146f504d2 body=116 status=ok
// SIG undefined FUN_146f504d2(void)

void FUN_146f504d2(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(((uint)(uVar2 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (((*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) ^ uVar2) & 0xfffffffffffffff) == 0)
        {
          FUN_146f30dec();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f50546 FUN_146f50546 body=323 status=ok
// SIG undefined FUN_146f50546(void)

undefined4 * FUN_146f50546(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f302fa(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = ((uint)((ulonglong)uVar1 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar1;
  local_58 = 0;
  cVar2 = FUN_146f303e0(param_1,uVar5,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x14) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146f30502(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5068a FUN_146f5068a body=90 status=ok
// SIG undefined FUN_146f5068a(void)

void FUN_146f5068a(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x40c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
    if (*(void **)((longlong)param_1 + 0x400) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x400),
              (longlong)*(int *)((longlong)param_1 + 0x408) << 2);
      FUN_1446efa72((longlong)param_1 + 0x400,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 146f506e4 FUN_146f506e4 body=154 status=ok
// SIG undefined FUN_146f506e4(void)

void FUN_146f506e4(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int *piVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    uVar3 = (longlong)(int)(((uint)(*param_2 >> 0x20) & 0xfffffff) * 0x17 + (int)*param_2) &
            (longlong)(int)param_1[9] - 1U;
    iVar1 = *(int *)((longlong)plVar2 + uVar3 * 4);
    if (iVar1 != -1) {
      piVar4 = (int *)((longlong)plVar2 + uVar3 * 4);
      do {
        if (((*param_2 ^ *(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18)) & 0xfffffffffffffff) ==
            0) {
          FUN_146f4f5ee(param_1);
        }
        else {
          piVar4 = (int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
        }
        iVar1 = *piVar4;
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f5077e FUN_146f5077e body=62 status=ok
// SIG undefined FUN_146f5077e(void)

void FUN_146f5077e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f507bc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146f507bc FUN_146f507bc body=93 status=ok
// SIG undefined FUN_146f507bc(void)

ulonglong FUN_146f507bc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146f5081a FUN_146f5081a body=62 status=ok
// SIG undefined FUN_146f5081a(void)

void FUN_146f5081a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f50858(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x128,8);
  }
  return;
}



// FUNCTION 146f50858 FUN_146f50858 body=110 status=ok
// SIG undefined FUN_146f50858(void)

ulonglong FUN_146f50858(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x128) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f50891;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x128,8);
      param_2 = param_2 / 0x128;
    }
  }
LAB_146f50891:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f508c6 FUN_146f508c6 body=35 status=ok
// SIG undefined FUN_146f508c6(void)

void FUN_146f508c6(longlong param_1)

{
  FUN_146f509f8(param_1 + 0x10);
  thunk_FUN_1400020a8(param_1,0x1350);
  return;
}



// FUNCTION 146f508ea FUN_146f508ea body=269 status=ok
// SIG undefined FUN_146f508ea(void)

undefined8 * FUN_146f508ea(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = param_2;
  param_1[0xb] = *(undefined8 *)(param_3 + 0x38);
  local_40 = *(undefined4 *)(param_2 + 0x48);
  uStack_3c = *(undefined4 *)(param_3 + 8);
  local_38 = *(undefined4 *)(param_3 + 0x14);
  local_34 = *(undefined4 *)(param_3 + 0x18);
  FUN_146f523ac(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x263) = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x25f] = 0;
  param_1[0x260] = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  *(undefined4 *)(param_1 + 0x266) = 0;
  FUN_1446f470e(&local_40,L"TotalSubObjects",1);
  *(ulonglong *)((longlong)param_1 + 0x1324) = CONCAT44(uStack_3c,local_40);
  FUN_1446f470e(&local_40,L"TotalRootObjects",1);
  *(ulonglong *)((longlong)param_1 + 0x132c) = CONCAT44(uStack_3c,local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f509f8 FUN_146f509f8 body=68 status=ok
// SIG undefined FUN_146f509f8(void)

void FUN_146f509f8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1308) != 0) {
    FUN_1400020a8();
  }
  FUN_146f50a3c(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146f5231e(param_1);
  return;
}



// FUNCTION 146f50a3c FUN_146f50a3c body=321 status=ok
// SIG undefined FUN_146f50a3c(void)

void FUN_146f50a3c(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x1268),*(undefined4 *)(param_1 + 0x1270));
  if (*(longlong *)(param_1 + 0x1268) != 0) {
    FUN_1400020a8();
  }
  FUN_146f60214(param_1 + 0x1240);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11e0));
  FUN_146f169e4(param_1 + 0x11b0);
  FUN_146f16afe(param_1 + 0x10b0);
  FUN_146f50b7e(param_1 + 0x1020);
  FUN_146f50bd2(param_1 + 0xff0);
  FUN_146f50c0a(param_1 + 0xea0);
  FUN_146f50cb6(param_1 + 0xcd8);
  FUN_146f50d88(param_1 + 0xc40);
  FUN_146f50e18(param_1 + 0xb80);
  FUN_146f19f02(param_1 + 0xb08);
  FUN_146f50e90(param_1 + 0x820);
  FUN_146f510bc(param_1 + 0x7e8);
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x798) = 0;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    FUN_1400020a8();
  }
  FUN_146f51bda(param_1 + 0x750);
  FUN_146f14a92(param_1 + 0x5b0);
  FUN_146f17dd0(param_1 + 0x550);
  FUN_146f51106(param_1 + 0x100);
  FUN_146f423dc(param_1);
  return;
}



// FUNCTION 146f50b7e FUN_146f50b7e body=84 status=ok
// SIG undefined FUN_146f50b7e(void)

void FUN_146f50b7e(longlong *param_1)

{
  FUN_146f5131a(param_1 + 9);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f50bd2 FUN_146f50bd2 body=56 status=ok
// SIG undefined FUN_146f50bd2(void)

void FUN_146f50bd2(longlong *param_1)

{
  FUN_146f5137a(param_1 + 3);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f50c0a FUN_146f50c0a body=172 status=ok
// SIG undefined FUN_146f50c0a(void)

void FUN_146f50c0a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1 + 0xd0);
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_140113f3a();
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_140113f3a();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_140113f3a();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  FUN_146f513da(param_1 + 0x18);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f50cb6 FUN_146f50cb6 body=209 status=ok
// SIG undefined FUN_146f50cb6(void)

void FUN_146f50cb6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  FUN_146f51478(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_146f515e8(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_146f51676(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_146f51704(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146f51792(param_1);
  return;
}



// FUNCTION 146f50d88 FUN_146f50d88 body=144 status=ok
// SIG undefined FUN_146f50d88(void)

void FUN_146f50d88(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_146f40522(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_146f5181f(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_140113f3a();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146f50e18 FUN_146f50e18 body=119 status=ok
// SIG undefined FUN_146f50e18(void)

void FUN_146f50e18(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_146f51852(param_1 + 0x48);
  FUN_146f1e5e2(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f50e90 FUN_146f50e90 body=555 status=ok
// SIG undefined FUN_146f50e90(void)

void FUN_146f50e90(longlong *param_1)

{
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_146f519e4(param_1[0x4c],(int)param_1[0x4d]);
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_146f51a16(param_1 + 0x24);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_146f2b65c(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_140113f3a();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 146f510bc FUN_146f510bc body=73 status=ok
// SIG undefined FUN_146f510bc(void)

void FUN_146f510bc(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_146f51ba4(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f51106 FUN_146f51106 body=531 status=ok
// SIG undefined FUN_146f51106(void)

void FUN_146f51106(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x418),*(undefined4 *)(param_1 + 0x420));
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408));
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FUN_1400020a8();
  }
  FUN_146f51d64(param_1 + 0x300);
  FUN_146f27a06(param_1 + 0x2d0);
  FUN_146f2793a(param_1 + 0x2b0);
  FUN_146f279a0(param_1 + 0x290);
  FUN_146f278d4(param_1 + 0x270);
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_146f52290(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_146f4ab14(param_1 + 0x18);
  return;
}



// FUNCTION 146f5131a FUN_146f5131a body=96 status=ok
// SIG undefined FUN_146f5131a(void)

void FUN_146f5131a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        thunk_FUN_1400020a8(lVar2,0x10000);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 146f5137a FUN_146f5137a body=96 status=ok
// SIG undefined FUN_146f5137a(void)

void FUN_146f5137a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        thunk_FUN_1400020a8(lVar2,0x1000);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 146f513da FUN_146f513da body=81 status=ok
// SIG undefined FUN_146f513da(void)

void FUN_146f513da(longlong param_1)

{
  FUN_146f5142c(param_1 + 0x30);
  FUN_146f2e476(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_146f2e476(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f5142c FUN_146f5142c body=75 status=ok
// SIG undefined FUN_146f5142c(void)

void FUN_146f5142c(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f51478 FUN_146f51478 body=52 status=ok
// SIG undefined FUN_146f51478(void)

void FUN_146f51478(longlong *param_1)

{
  FUN_146f514ac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f514ac FUN_146f514ac body=315 status=ok
// SIG undefined FUN_146f514ac(void)

void FUN_146f514ac(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x28 + (longlong)iStack_4c * 0x48) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f515e8 FUN_146f515e8 body=52 status=ok
// SIG undefined FUN_146f515e8(void)

void FUN_146f515e8(longlong *param_1)

{
  FUN_146f5161c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f5161c FUN_146f5161c body=89 status=ok
// SIG undefined FUN_146f5161c(void)

void FUN_146f5161c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f51676 FUN_146f51676 body=52 status=ok
// SIG undefined FUN_146f51676(void)

void FUN_146f51676(longlong *param_1)

{
  FUN_146f516aa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f516aa FUN_146f516aa body=89 status=ok
// SIG undefined FUN_146f516aa(void)

void FUN_146f516aa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f51704 FUN_146f51704 body=52 status=ok
// SIG undefined FUN_146f51704(void)

void FUN_146f51704(longlong *param_1)

{
  FUN_146f51738();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f51738 FUN_146f51738 body=89 status=ok
// SIG undefined FUN_146f51738(void)

void FUN_146f51738(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f51792 FUN_146f51792 body=52 status=ok
// SIG undefined FUN_146f51792(void)

void FUN_146f51792(longlong *param_1)

{
  FUN_146f517c6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f517c6 FUN_146f517c6 body=89 status=ok
// SIG undefined FUN_146f517c6(void)

void FUN_146f517c6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f5181f FUN_146f5181f body=50 status=ok
// SIG undefined FUN_146f5181f(void)

void FUN_146f5181f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_140113f3a();
      *param_1 = 0;
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f51852 FUN_146f51852 body=52 status=ok
// SIG undefined FUN_146f51852(void)

void FUN_146f51852(longlong *param_1)

{
  FUN_146f51886();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f51886 FUN_146f51886 body=349 status=ok
// SIG undefined FUN_146f51886(void)

void FUN_146f51886(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_140202178(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f519e4 FUN_146f519e4 body=50 status=ok
// SIG undefined FUN_146f519e4(void)

void FUN_146f519e4(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_140113f3a();
      *param_1 = 0;
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f51a16 FUN_146f51a16 body=52 status=ok
// SIG undefined FUN_146f51a16(void)

void FUN_146f51a16(longlong *param_1)

{
  FUN_146f51a4a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f51a4a FUN_146f51a4a body=345 status=ok
// SIG undefined FUN_146f51a4a(void)

void FUN_146f51a4a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x68;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_146f2c44c(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f51ba4 FUN_146f51ba4 body=53 status=ok
// SIG undefined FUN_146f51ba4(void)

void FUN_146f51ba4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x120);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x26;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146f51bda FUN_146f51bda body=52 status=ok
// SIG undefined FUN_146f51bda(void)

void FUN_146f51bda(longlong *param_1)

{
  FUN_146f51c0e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f51c0e FUN_146f51c0e body=340 status=ok
// SIG undefined FUN_146f51c0e(void)

void FUN_146f51c0e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x30;
      FUN_146f1ad47(*(undefined8 *)(lVar2 + 0x10 + lVar3),*(undefined4 *)(lVar2 + 0x18 + lVar3));
      if (*(longlong *)(lVar2 + 0x10 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f51d64 FUN_146f51d64 body=75 status=ok
// SIG undefined FUN_146f51d64(void)

void FUN_146f51d64(longlong param_1)

{
  FUN_146f51db0(param_1 + 0xc0);
  FUN_146f51de4(param_1 + 0x88);
  FUN_146f51e18(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146f52202(param_1);
  return;
}



// FUNCTION 146f51db0 FUN_146f51db0 body=52 status=ok
// SIG undefined FUN_146f51db0(void)

void FUN_146f51db0(longlong *param_1)

{
  FUN_146f51e4c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f51de4 FUN_146f51de4 body=52 status=ok
// SIG undefined FUN_146f51de4(void)

void FUN_146f51de4(longlong *param_1)

{
  FUN_146f51f8a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f51e18 FUN_146f51e18 body=52 status=ok
// SIG undefined FUN_146f51e18(void)

void FUN_146f51e18(longlong *param_1)

{
  FUN_146f520c4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f51e4c FUN_146f51e4c body=317 status=ok
// SIG undefined FUN_146f51e4c(void)

void FUN_146f51e4c(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x40 + (longlong)iStack_4c * 0x50) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f51f8a FUN_146f51f8a body=313 status=ok
// SIG undefined FUN_146f51f8a(void)

void FUN_146f51f8a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f520c4 FUN_146f520c4 body=317 status=ok
// SIG undefined FUN_146f520c4(void)

void FUN_146f520c4(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x20 + (longlong)iStack_4c * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f52202 FUN_146f52202 body=52 status=ok
// SIG undefined FUN_146f52202(void)

void FUN_146f52202(longlong *param_1)

{
  FUN_146f52236();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f52236 FUN_146f52236 body=89 status=ok
// SIG undefined FUN_146f52236(void)

void FUN_146f52236(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f52290 FUN_146f52290 body=52 status=ok
// SIG undefined FUN_146f52290(void)

void FUN_146f52290(longlong *param_1)

{
  FUN_146f522c4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f522c4 FUN_146f522c4 body=89 status=ok
// SIG undefined FUN_146f522c4(void)

void FUN_146f522c4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f5231e FUN_146f5231e body=52 status=ok
// SIG undefined FUN_146f5231e(void)

void FUN_146f5231e(longlong *param_1)

{
  FUN_146f52352();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f52352 FUN_146f52352 body=89 status=ok
// SIG undefined FUN_146f52352(void)

void FUN_146f52352(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146f523ac FUN_146f523ac body=472 status=ok
// SIG undefined FUN_146f523ac(void)

longlong FUN_146f523ac(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_146f52584();
  FUN_146f272cc(param_1 + 0x100,param_1);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x540) = *param_2;
  *(undefined4 *)(param_1 + 0x544) = uVar1;
  *(undefined4 *)(param_1 + 0x548) = uVar2;
  *(undefined4 *)(param_1 + 0x54c) = uVar3;
  FUN_146f17d9c(param_1 + 0x550);
  FUN_146f149ce(param_1 + 0x5b0);
  FUN_146f148d8(param_1 + 0x750);
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  *(undefined8 *)(param_1 + 0x7c8) = 0x100000000;
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined8 *)(param_1 + 0x7d8) = 0;
  *(undefined8 *)(param_1 + 0x7e0) = 0x100000000;
  FUN_146f52606(param_1 + 0x7e8);
  FUN_146f20b02(param_1 + 0x820);
  FUN_142a77680(param_1 + 0xb08);
  FUN_146f1608e(param_1 + 0xb80);
  FUN_146f3814e(param_1 + 0xc40);
  FUN_146f297b4(param_1 + 0xcd8);
  FUN_146f23a86(param_1 + 0xea0);
  *(undefined8 *)(param_1 + 0xff0) = 0;
  *(undefined8 *)(param_1 + 0xff8) = 0;
  *(undefined4 *)(param_1 + 0x1000) = 0;
  *(undefined8 *)(param_1 + 0x1008) = 0;
  *(undefined8 *)(param_1 + 0x1010) = 0;
  *(undefined4 *)(param_1 + 0x1018) = 0;
  FUN_146f5137a(param_1 + 0x1008);
  *(undefined4 *)(param_1 + 0x1030) = 0;
  *(undefined8 *)(param_1 + 0x1020) = 0;
  *(undefined8 *)(param_1 + 0x1028) = 0;
  *(undefined8 *)(param_1 + 0x1038) = 0;
  *(undefined8 *)(param_1 + 0x1040) = 0;
  *(undefined4 *)(param_1 + 0x1048) = 0;
  *(undefined8 *)(param_1 + 0x1050) = 0;
  *(undefined8 *)(param_1 + 0x1058) = 0;
  *(undefined4 *)(param_1 + 0x1060) = 0;
  *(undefined8 *)(param_1 + 0x1068) = 0;
  *(undefined8 *)(param_1 + 0x1070) = 0;
  *(undefined4 *)(param_1 + 0x1078) = 0;
  FUN_146f5131a(param_1 + 0x1068);
  FUN_146f16a78(param_1 + 0x10b0);
  FUN_146f169c6(param_1 + 0x11b0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11e0));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x11e0),4000);
  *(undefined8 *)(param_1 + 0x1208) = 0;
  *(undefined8 *)(param_1 + 0x1210) = 0;
  *(undefined8 *)(param_1 + 0x1218) = 0;
  *(undefined8 *)(param_1 + 0x1220) = 0;
  *(undefined8 *)(param_1 + 0x1228) = 0;
  *(undefined8 *)(param_1 + 0x1230) = 0;
  *(undefined8 *)(param_1 + 0x1238) = 0;
  FUN_146f600ac(param_1 + 0x1240);
  *(undefined8 *)(param_1 + 0x1268) = 0;
  *(undefined8 *)(param_1 + 0x1270) = 0;
  *(undefined8 *)(param_1 + 0x1278) = 2;
  *(undefined4 *)(param_1 + 0x1280) = *param_2;
  *(undefined1 *)(param_1 + 0x1284) = 0;
  return param_1;
}



// FUNCTION 146f52584 FUN_146f52584 body=130 status=ok
// SIG undefined FUN_146f52584(void)

void FUN_146f52584(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return;
}



// FUNCTION 146f52606 FUN_146f52606 body=74 status=ok
// SIG undefined FUN_146f52606(void)

undefined8 * FUN_146f52606(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0x80;
  FUN_146f14ba4(param_1 + 4,0x80);
  FUN_146f52650(param_1);
  FUN_146f526cc(param_1 + 2);
  return param_1;
}



// FUNCTION 146f52650 FUN_146f52650 body=124 status=ok
// SIG undefined FUN_146f52650(void)

void FUN_146f52650(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0x80) {
    *(undefined4 *)(param_1 + 1) = 0x80;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 0x80U - iVar1) {
      FUN_146f52742(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x28 + *param_1),0,(ulonglong)(0x80U - iVar1) * 0x28);
    return;
  }
  if (iVar1 == 0x80) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0x80;
  FUN_146f527d6(param_1);
  return;
}



// FUNCTION 146f526cc FUN_146f526cc body=117 status=ok
// SIG undefined FUN_146f526cc(void)

void FUN_146f526cc(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0x80) {
    *(undefined4 *)(param_1 + 1) = 0x80;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 0x80U - iVar1) {
      FUN_146f528ae(param_1,iVar1);
    }
    FUN_146f52884((longlong)iVar1 * 0x130 + *param_1,0x80U - iVar1);
    return;
  }
  if (iVar1 == 0x80) {
    return;
  }
  FUN_146f52942(param_1,iVar1 + -0x80);
  FUN_146f5299c(param_1);
  return;
}



// FUNCTION 146f52742 FUN_146f52742 body=147 status=ok
// SIG undefined FUN_146f52742(void)

void FUN_146f52742(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f527d6 FUN_146f527d6 body=62 status=ok
// SIG undefined FUN_146f527d6(void)

void FUN_146f527d6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f52814(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 146f52814 FUN_146f52814 body=112 status=ok
// SIG undefined FUN_146f52814(void)

ulonglong FUN_146f52814(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f5284e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_146f5284e:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f52884 FUN_146f52884 body=41 status=ok
// SIG undefined FUN_146f52884(void)

void FUN_146f52884(longlong param_1,int param_2)

{
  param_1 = param_1 + 300;
  do {
    *(undefined8 *)(param_1 + -0xc) = 0;
    *(undefined8 *)(param_1 + -4) = 0x400000000;
    param_1 = param_1 + 0x130;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 146f528ae FUN_146f528ae body=146 status=ok
// SIG undefined FUN_146f528ae(void)

void FUN_146f528ae(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x130,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x130)) {
      uVar5 = uVar4 / 0x130 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x130,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f52942 FUN_146f52942 body=89 status=ok
// SIG undefined FUN_146f52942(void)

void FUN_146f52942(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x9800);
  FUN_146f51ba4(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 0x80);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x130 + (longlong)_Dst),(longlong)iVar2 * 0x130);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 146f5299c FUN_146f5299c body=62 status=ok
// SIG undefined FUN_146f5299c(void)

void FUN_146f5299c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f529da(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x130,8);
  }
  return;
}


