// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1455cfe80 FUN_1455cfe80 body=211 status=ok
// SIG undefined FUN_1455cfe80(void)

void FUN_1455cfe80(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = param_1[3];
    uVar3 = param_1[2];
    lVar6 = 0x3f - lVar7 >> 3;
    puVar5 = (ulonglong *)*param_1;
    lVar1 = param_1[1];
    uVar2 = uVar3 << ((char)lVar7 + 1U & 0x3f);
    *puVar5 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
              | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18
              | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
    puVar5 = (ulonglong *)((longlong)puVar5 + lVar6);
    lVar7 = lVar7 + lVar6 * 8;
    lVar6 = 0;
    if (0 < param_3) {
      do {
        lVar7 = lVar7 - param_4;
        uVar3 = (ulonglong)*(byte *)(lVar6 + param_2) | uVar3 << ((byte)param_4 & 0x3f);
        lVar4 = 0x3f - lVar7 >> 3;
        uVar2 = uVar3 << ((char)lVar7 + 1U & 0x3f);
        lVar6 = lVar6 + 1;
        *puVar5 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                  (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                  (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28
                  | uVar2 << 0x38;
        lVar7 = lVar7 + lVar4 * 8;
        puVar5 = (ulonglong *)((longlong)puVar5 + lVar4);
      } while (lVar6 < param_3);
    }
    param_1[2] = uVar3;
    *param_1 = (longlong)puVar5;
    param_1[1] = lVar1;
    param_1[3] = lVar7;
  }
  return;
}



// FUNCTION 1455cff60 FUN_1455cff60 body=199 status=ok
// SIG undefined FUN_1455cff60(void)

void FUN_1455cff60(longlong *param_1,byte *param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = param_1[3];
  uVar5 = param_1[2];
  puVar6 = (ulonglong *)*param_1;
  lVar3 = param_1[1];
  lVar8 = 0x3f - lVar7 >> 3;
  uVar4 = uVar5 << ((char)lVar7 + 1U & 0x3f);
  *puVar6 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
            (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
            (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  puVar6 = (ulonglong *)((longlong)puVar6 + lVar8);
  lVar7 = lVar7 + lVar8 * 8;
  if (0 < param_4) {
    param_3 = param_3 - (longlong)param_2;
    do {
      pbVar1 = param_2 + param_3;
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      lVar7 = lVar7 - (ulonglong)*pbVar1;
      uVar5 = uVar5 << (*pbVar1 & 0x3f) | (ulonglong)bVar2;
      lVar8 = 0x3f - lVar7 >> 3;
      uVar4 = uVar5 << ((char)lVar7 + 1U & 0x3f);
      *puVar6 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
                uVar4 << 0x38;
      lVar7 = lVar7 + lVar8 * 8;
      puVar6 = (ulonglong *)((longlong)puVar6 + lVar8);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1[2] = uVar5;
  *param_1 = (longlong)puVar6;
  param_1[3] = lVar7;
  param_1[1] = lVar3;
  return;
}



// FUNCTION 1455d0040 FUN_1455d0040 body=282 status=ok
// SIG undefined FUN_1455d0040(void)

void FUN_1455d0040(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar7 = param_1[3];
  uVar10 = param_1[2];
  puVar5 = (ulonglong *)*param_1;
  lVar2 = param_1[1];
  lVar9 = 0x3f - lVar7 >> 3;
  lVar6 = 0;
  uVar3 = uVar10 << ((char)lVar7 + 1U & 0x3f);
  *puVar5 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
            (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
            (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  puVar5 = (ulonglong *)((longlong)puVar5 + lVar9);
  lVar7 = lVar7 + lVar9 * 8;
  if (0 < param_3) {
    do {
      bVar1 = *(byte *)(lVar6 + param_2);
      uVar8 = (uint)bVar1;
      if (0x17 < bVar1) {
        uVar3 = (ulonglong)(uint)bVar1 / 0x18;
        do {
          uVar10 = uVar10 << 0x18;
          uVar4 = uVar10 << ((char)lVar7 - 0x17U & 0x3f);
          lVar9 = 0x57 - lVar7 >> 3;
          uVar8 = uVar8 - 0x18;
          *puVar5 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                    (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                    (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                    (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
          puVar5 = (ulonglong *)((longlong)puVar5 + lVar9);
          lVar7 = lVar7 + lVar9 * 8 + -0x18;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      lVar7 = lVar7 - (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 << ((byte)(uVar8 + 1) & 0x3f) | 1;
      lVar9 = 0x3f - lVar7 >> 3;
      lVar6 = lVar6 + 1;
      uVar3 = uVar10 << ((char)lVar7 + 1U & 0x3f);
      *puVar5 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 |
                uVar3 << 0x38;
      lVar7 = lVar7 + lVar9 * 8;
      puVar5 = (ulonglong *)((longlong)puVar5 + lVar9);
    } while (lVar6 < param_3);
  }
  *param_1 = (longlong)puVar5;
  param_1[2] = uVar10;
  param_1[3] = lVar7;
  param_1[1] = lVar2;
  return;
}



// FUNCTION 1455d0160 FUN_1455d0160 body=283 status=ok
// SIG undefined FUN_1455d0160(void)

longlong FUN_1455d0160(int *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 1) {
    return param_2;
  }
  pbVar3 = (byte *)*param_3;
  piVar1 = (int *)((longlong)param_1 + param_2);
  pbVar4 = (byte *)param_3[1];
  if (pbVar3 < pbVar4) {
    uVar6 = -*(int *)(param_3 + 2);
    bVar5 = (byte)(0xff >> ((byte)*(int *)(param_3 + 2) & 0x1f)) & *pbVar3;
    iVar9 = 0;
    while( true ) {
      pbVar7 = pbVar3 + 1;
      if (bVar5 == 0) {
        uVar6 = uVar6 + 8;
      }
      else {
        uVar2 = *(uint *)(&DAT_149db1e90 + (ulonglong)bVar5 * 4);
        *param_1 = (uVar2 & 0xf0f0f0f) + uVar6;
        param_1[1] = uVar2 >> 4 & 0xf0f0f0f;
        param_1 = (int *)((longlong)param_1 + (ulonglong)(byte)(&DAT_149db2290)[bVar5]);
        if (piVar1 <= param_1) {
          if (piVar1 < param_1) {
            lVar8 = (longlong)param_1 - (longlong)piVar1;
            do {
              bVar5 = bVar5 & bVar5 - 1;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          if ((bVar5 & 1) == 0) {
            iVar9 = 0;
            if (bVar5 != 0) {
              for (; (bVar5 >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
              }
            }
            iVar9 = 8 - iVar9;
            pbVar7 = pbVar3;
          }
          *param_3 = pbVar7;
          *(int *)(param_3 + 2) = iVar9;
          return param_2;
        }
        uVar6 = uVar2 >> 0x1c;
      }
      if (pbVar4 <= pbVar7) break;
      bVar5 = *pbVar7;
      pbVar3 = pbVar7;
    }
  }
  return -1;
}



// FUNCTION 1455d0280 FUN_1455d0280 body=98 status=ok
// SIG undefined FUN_1455d0280(void)

void FUN_1455d0280(byte *param_1,longlong param_2,longlong param_3,longlong param_4,byte param_5)

{
  byte bVar1;
  byte *pbVar2;
  
  if (0 < param_4) {
    pbVar2 = param_1;
    do {
      bVar1 = pbVar2[param_3 - (longlong)param_1];
      *pbVar2 = bVar1 >> (param_5 & 0x1f);
      (pbVar2 + 1)[(param_2 - (longlong)param_1) + -1] = (char)(1 << (param_5 & 0x1f)) - 1U & bVar1;
      param_4 = param_4 + -1;
      pbVar2 = pbVar2 + 1;
    } while (param_4 != 0);
  }
  return;
}



// FUNCTION 1455d0300 FUN_1455d0300 body=686 status=ok
// SIG undefined FUN_1455d0300(void)

void FUN_1455d0300(longlong *param_1,longlong param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  size_t sVar10;
  uint *_Src;
  size_t _Size;
  longlong lVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_58;
  uint local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  if ((param_3 < 4) && (param_3 != 0)) {
    uVar2 = *(uint *)(param_4 + 2);
    puVar3 = (uint *)*param_4;
    lVar11 = (int)param_3 * param_2 + (ulonglong)uVar2;
    sVar10 = lVar11 + 7 >> 3;
    if ((longlong)sVar10 <= param_4[1] - (longlong)puVar3) {
      local_58 = *(longlong *)(param_2 + (longlong)param_1);
      _Size = 4;
      if ((longlong)sVar10 < 4) {
        _Size = sVar10;
      }
      local_50[0] = 0;
      local_50[1] = 0;
      plVar1 = (longlong *)(param_2 + (longlong)param_1);
      _Src = (uint *)((sVar10 - _Size) + (longlong)puVar3);
      if (0 < (longlong)_Size) {
        memcpy(local_50,_Src,_Size);
      }
      cVar5 = (char)uVar2;
      if (param_3 == 1) {
        puVar9 = puVar3;
        do {
          if (_Src <= puVar9) {
            lVar6 = (longlong)local_50 - (longlong)_Src;
            _Src = local_50 + 1;
            puVar9 = (uint *)((longlong)puVar9 + lVar6);
          }
          uVar2 = *puVar9;
          puVar9 = (uint *)((longlong)puVar9 + 1);
          uVar7 = (ulonglong)
                  ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                  >> (0x18U - cVar5 & 0x3f));
          uVar8 = (uVar7 << 0x1c ^ uVar7) & 0xf0000000f;
          uVar7 = uVar8 ^ uVar8 << 0xe;
          uVar7 = uVar7 << 7 ^ uVar7;
          *param_1 = (uVar8 >> 0x23 | (uVar7 & 0x1000000000000) >> 0x28 |
                      (uVar7 & 0x10000000000) >> 0x18 | (uVar7 & 0x100000000) >> 8 |
                      (uVar7 & 0x1000000) << 8 | (uVar7 & 0x10000) << 0x18 | (uVar7 & 0x100) << 0x28
                     | (uVar7 & 1) << 0x38) + *param_1 * 2;
          param_1 = param_1 + 1;
        } while (param_1 < plVar1);
      }
      else if (param_3 == 2) {
        puVar9 = puVar3;
        do {
          if (_Src <= puVar9) {
            lVar6 = (longlong)local_50 - (longlong)_Src;
            _Src = local_50 + 1;
            puVar9 = (uint *)((longlong)puVar9 + lVar6);
          }
          uVar2 = *puVar9;
          puVar9 = (uint *)((longlong)puVar9 + 2);
          uVar7 = (ulonglong)
                  ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                  >> (0x10U - cVar5 & 0x3f));
          uVar8 = (uVar7 << 0x18 ^ uVar7) & 0xff000000ff;
          uVar7 = uVar8 ^ uVar8 << 0xc;
          uVar7 = uVar7 << 6 ^ uVar7;
          *param_1 = (uVar8 >> 0x26 | (uVar7 & 0x3000000000000) >> 0x28 |
                      (uVar7 & 0x30000000000) >> 0x18 | (uVar7 & 0x300000000) >> 8 |
                      (uVar7 & 0x3000000) << 8 | (uVar7 & 0x30000) << 0x18 | (uVar7 & 0x300) << 0x28
                     | (uVar7 & 3) << 0x38) + *param_1 * 4;
          param_1 = param_1 + 1;
        } while (param_1 < plVar1);
      }
      else {
        if (param_3 != 3) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar9 = puVar3;
        do {
          if (_Src <= puVar9) {
            lVar6 = (longlong)local_50 - (longlong)_Src;
            _Src = local_50 + 1;
            puVar9 = (uint *)((longlong)puVar9 + lVar6);
          }
          uVar2 = *puVar9;
          puVar9 = (uint *)((longlong)puVar9 + 3);
          uVar7 = (ulonglong)
                  ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                  >> (8U - cVar5 & 0x3f));
          uVar7 = (uVar7 << 0x14 ^ uVar7) & 0xfff00000fff;
          uVar8 = (uVar7 << 10 ^ uVar7) & 0x3f003f003f003f;
          uVar8 = uVar8 << 5 ^ uVar8;
          *param_1 = (uVar7 >> 0x29 | (uVar8 & 0x7000000000000) >> 0x28 |
                      (uVar8 & 0x70000000000) >> 0x18 | (uVar8 & 0x700000000) >> 8 |
                      (uVar8 & 0x7000000) << 8 | (uVar8 & 0x70000) << 0x18 | (uVar8 & 0x700) << 0x28
                     | (uVar8 & 7) << 0x38) + *param_1 * 8;
          param_1 = param_1 + 1;
        } while (param_1 < plVar1);
      }
      *plVar1 = local_58;
      *param_4 = (lVar11 >> 3) + (longlong)puVar3;
      *(uint *)(param_4 + 2) = (uint)lVar11 & 7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 1455d05e0 FUN_1455d05e0 body=266 status=ok
// SIG undefined FUN_1455d05e0(void)

int FUN_1455d05e0(longlong param_1,byte *param_2,longlong param_3,int param_4,int *param_5,
                 int param_6)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  
  if (0xff < param_4) {
    return 0;
  }
  uVar3 = (uint)(*param_5 != 0);
  iVar8 = -uVar3;
  iVar9 = uVar3 + ((param_6 + -3) / 2) * 2;
  if (0 < iVar9) {
    pbVar7 = param_2;
    do {
      iVar8 = iVar8 + 1;
      pbVar1 = pbVar7 + 1;
      bVar5 = ~(byte)iVar8 & 1;
      uVar6 = (1 << bVar5) +
              param_5[(longlong)(pbVar7 + (1 - (ulonglong)uVar3) + -(longlong)param_2)] + -1;
      uVar4 = uVar6 >> bVar5;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      pbVar1[(param_1 - (longlong)param_2) + -1] = (byte)iVar2;
      bVar5 = bVar5 + (byte)iVar2;
      *pbVar7 = ('\x01' << (bVar5 & 0x1f)) - 1U & (byte)uVar6;
      pbVar1[(param_3 - (longlong)param_2) + -1] = bVar5;
      pbVar7 = pbVar1;
    } while (-(longlong)param_2 + (longlong)pbVar1 < (longlong)iVar9);
  }
  return iVar9;
}



// FUNCTION 1455d0700 FUN_1455d0700 body=155 status=ok
// SIG undefined FUN_1455d0700(void)

void FUN_1455d0700(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 != 0x100) {
    if (0x101 - param_3 <= param_3) {
      param_3 = 0x101 - param_3;
    }
    uVar3 = param_3 * 2 - 1;
    uVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar3 = uVar1 + 1;
    iVar2 = (1 << ((byte)uVar3 & 0x1f)) + param_3 * -2;
    if (param_2 < iVar2) {
      uVar4 = param_1[2] << ((byte)uVar1 & 0x3f) | (longlong)param_2;
      uVar3 = uVar1;
    }
    else {
      uVar4 = param_1[2] << ((byte)uVar3 & 0x3f) | (longlong)(iVar2 + param_2);
    }
    lVar6 = param_1[3] - (ulonglong)uVar3;
    param_1[2] = uVar4;
    lVar5 = 0x3f - lVar6 >> 3;
    uVar4 = param_1[2] << ((char)lVar6 + 1U & 0x3f);
    param_1[3] = lVar6;
    *(ulonglong *)*param_1 =
         uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
         (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
         (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
    *param_1 = *param_1 + lVar5;
    param_1[3] = param_1[3] + lVar5 * 8;
  }
  return;
}



// FUNCTION 1455d07a0 FUN_1455d07a0 body=1423 status=ok
// SIG undefined FUN_1455d07a0(void)

int FUN_1455d07a0(ushort *param_1,uint param_2,uint param_3,byte *param_4,undefined8 *param_5)

{
  byte bVar1;
  ushort *puVar2;
  char cVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  byte *local_58;
  byte *local_50;
  uint local_48;
  
  uVar12 = 0;
  uVar22 = param_3 >> 1;
  uVar11 = 0;
  uVar17 = param_5[2];
  lVar21 = param_5[3];
  puVar16 = (ulonglong *)*param_5;
  local_50 = (byte *)param_5[1];
  uVar14 = uVar12;
  if ((param_3 & 1) != 0) {
    lVar8 = (longlong)local_50 - (longlong)puVar16;
    if (lVar8 < 8) {
      if (0 < lVar8) {
        uVar14 = (ulonglong)(byte)*puVar16;
      }
      uVar18 = uVar12;
      if (lVar8 != 1 && -1 < lVar8 + -1) {
        uVar18 = (ulonglong)*(byte *)((longlong)puVar16 + 1);
      }
      uVar15 = uVar12;
      if (lVar8 != 2 && -1 < lVar8 + -2) {
        uVar15 = (ulonglong)*(byte *)((longlong)puVar16 + 2);
      }
      uVar5 = uVar12;
      if (lVar8 != 3 && -1 < lVar8 + -3) {
        uVar5 = (ulonglong)*(byte *)((longlong)puVar16 + 3);
      }
      lVar8 = (longlong)local_50 - ((longlong)puVar16 + 4);
      uVar6 = uVar12;
      if (0 < lVar8) {
        uVar6 = (ulonglong)*(byte *)((longlong)puVar16 + 4);
      }
      uVar7 = uVar12;
      if (lVar8 != 1 && -1 < lVar8 + -1) {
        uVar7 = (ulonglong)*(byte *)((longlong)puVar16 + 5);
      }
      uVar13 = uVar12;
      if (lVar8 != 2 && -1 < lVar8 + -2) {
        uVar13 = (ulonglong)*(byte *)((longlong)puVar16 + 6);
      }
      uVar9 = uVar12;
      if (lVar8 != 3 && -1 < lVar8 + -3) {
        uVar9 = (ulonglong)*(byte *)((longlong)puVar16 + 7);
      }
      uVar9 = ((((((uVar14 << 8 | uVar18) << 8 | uVar15) << 8 | uVar5) << 8 | uVar6) << 8 | uVar7)
               << 8 | uVar13) << 8 | uVar9;
    }
    else {
      uVar14 = *puVar16;
      uVar9 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
              (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
              (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28 |
              uVar14 << 0x38;
    }
    cVar3 = (char)lVar21;
    puVar16 = (ulonglong *)((longlong)puVar16 + (lVar21 >> 3));
    lVar21 = lVar21 + (lVar21 >> 3) * -8;
    uVar17 = uVar17 | uVar9 >> (0x3fU - cVar3 & 0x3f);
    if (*param_4 < 8) {
      uVar20 = *param_4 + 1;
      bVar1 = (byte)uVar20;
      uVar14 = uVar17 >> (0x40 - bVar1 & 0x3f);
      uVar17 = uVar17 << (bVar1 & 0x3f);
      lVar21 = lVar21 + (ulonglong)uVar20;
      uVar20 = (1 << (bVar1 & 0x1f)) + -1 + (int)uVar14;
    }
    else {
      uVar20 = 0x1ff;
    }
    param_4 = param_4 + 1;
    uVar14 = (ulonglong)(uVar20 & 0xffff);
  }
  uVar20 = (uint)uVar14;
  if ((DAT_14c748068 == '\0') || (((byte)DAT_14c7fc4c4 & 4) == 0)) {
    uVar18 = (ulonglong)uVar22;
    puVar2 = param_1;
    if (param_3 >> 1 == 0) goto LAB_1455d0abd;
    do {
      lVar8 = (longlong)local_50 - (longlong)puVar16;
      if (lVar8 < 8) {
        uVar15 = uVar12;
        if (0 < lVar8) {
          uVar15 = (ulonglong)(byte)*puVar16;
        }
        uVar5 = uVar12;
        if (lVar8 != 1 && -1 < lVar8 + -1) {
          uVar5 = (ulonglong)*(byte *)((longlong)puVar16 + 1);
        }
        uVar6 = uVar12;
        if (lVar8 != 2 && -1 < lVar8 + -2) {
          uVar6 = (ulonglong)*(byte *)((longlong)puVar16 + 2);
        }
        uVar7 = uVar12;
        if (lVar8 != 3 && -1 < lVar8 + -3) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar16 + 3);
        }
        lVar8 = (longlong)local_50 - ((longlong)puVar16 + 4);
        uVar13 = uVar12;
        if (0 < lVar8) {
          uVar13 = (ulonglong)*(byte *)((longlong)puVar16 + 4);
        }
        uVar9 = uVar12;
        if (lVar8 != 1 && -1 < lVar8 + -1) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar16 + 5);
        }
        uVar19 = uVar12;
        if (lVar8 != 2 && -1 < lVar8 + -2) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar16 + 6);
        }
        uVar10 = uVar12;
        if (lVar8 != 3 && -1 < lVar8 + -3) {
          uVar10 = (ulonglong)*(byte *)((longlong)puVar16 + 7);
        }
        uVar10 = ((((((uVar15 << 8 | uVar5) << 8 | uVar6) << 8 | uVar7) << 8 | uVar13) << 8 | uVar9)
                  << 8 | uVar19) << 8 | uVar10;
      }
      else {
        uVar15 = *puVar16;
        uVar10 = uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
                 (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
                 (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 |
                 (uVar15 & 0xff00) << 0x28 | uVar15 << 0x38;
      }
      bVar1 = *param_4;
      puVar16 = (ulonglong *)((longlong)puVar16 + (lVar21 >> 3));
      cVar3 = (char)lVar21;
      lVar21 = lVar21 + (lVar21 >> 3) * -8;
      uVar17 = uVar17 | uVar10 >> (0x3fU - cVar3 & 0x3f);
      if (bVar1 < 9) {
        uVar15 = uVar17 >> 1;
        lVar21 = lVar21 + (ulonglong)bVar1;
        uVar17 = uVar17 << (bVar1 & 0x3f);
        uVar4 = (short)(1 << (bVar1 & 0x1f)) + (short)(uVar15 >> (0x3f - bVar1 & 0x3f));
      }
      else {
        uVar4 = 0x1ff;
      }
      puVar2[1] = uVar4;
      if (param_4[1] < 8) {
        uVar11 = param_4[1] + 1;
        bVar1 = (byte)uVar11;
        uVar15 = uVar17 >> (0x40 - bVar1 & 0x3f);
        uVar17 = uVar17 << (bVar1 & 0x3f);
        lVar21 = lVar21 + (ulonglong)uVar11;
        uVar4 = (short)(1 << (bVar1 & 0x1f)) + -1 + (short)uVar15;
      }
      else {
        uVar4 = 0x1ff;
      }
      puVar2[2] = uVar4;
      param_4 = param_4 + 2;
      uVar18 = uVar18 - 1;
      puVar2 = puVar2 + 2;
    } while (uVar18 != 0);
  }
  else {
    local_48 = -((int)-lVar21 + 0x3f) & 7;
    local_58 = (byte *)((longlong)puVar16 - (-lVar21 + 0x46U >> 3));
    cVar3 = FUN_145631b00(param_1 + 1,&local_58,param_4,uVar22);
    if (cVar3 == '\0') {
      return -1;
    }
    uVar17 = uVar12;
    if (local_50 != local_58 && -1 < (longlong)local_50 - (longlong)local_58) {
      uVar17 = (ulonglong)*local_58;
    }
    puVar16 = (ulonglong *)(local_58 + 1);
    lVar21 = (longlong)local_50 - (longlong)puVar16;
    if (lVar21 < 8) {
      uVar18 = uVar12;
      if (0 < lVar21) {
        uVar18 = (ulonglong)(byte)*puVar16;
      }
      uVar15 = uVar12;
      if (lVar21 != 1 && -1 < lVar21 + -1) {
        uVar15 = (ulonglong)local_58[2];
      }
      uVar5 = uVar12;
      if (lVar21 != 2 && -1 < lVar21 + -2) {
        uVar5 = (ulonglong)local_58[3];
      }
      uVar6 = uVar12;
      if (lVar21 != 3 && -1 < lVar21 + -3) {
        uVar6 = (ulonglong)local_58[4];
      }
      lVar21 = (longlong)local_50 - (longlong)(local_58 + 5);
      uVar7 = uVar12;
      if (0 < lVar21) {
        uVar7 = (ulonglong)local_58[5];
      }
      uVar13 = uVar12;
      if (lVar21 != 1 && -1 < lVar21 + -1) {
        uVar13 = (ulonglong)local_58[6];
      }
      uVar9 = uVar12;
      if (lVar21 != 2 && -1 < lVar21 + -2) {
        uVar9 = (ulonglong)local_58[7];
      }
      uVar18 = ((((((uVar18 << 8 | uVar15) << 8 | uVar5) << 8 | uVar6) << 8 | uVar7) << 8 | uVar13)
                << 8 | uVar9) << 8;
    }
    else {
      uVar18 = *puVar16;
      uVar18 = (uVar18 & 0xff000000000000) >> 0x28 | (uVar18 & 0xff0000000000) >> 0x18 |
               (uVar18 & 0xff00000000) >> 8 | (uVar18 & 0xff000000) << 8 |
               (uVar18 & 0xff0000) << 0x18 | (uVar18 & 0xff00) << 0x28 | uVar18 << 0x38;
    }
    puVar16 = (ulonglong *)(local_58 + 7);
    uVar17 = (uVar18 >> 8 | uVar17 << 0x38) << ((byte)local_48 & 0x3f);
    lVar21 = (ulonglong)local_48 + 7;
LAB_1455d0abd:
    if (param_3 >> 1 == 0) goto LAB_1455d0aed;
  }
  uVar18 = (ulonglong)uVar22;
  puVar2 = param_1;
  do {
    uVar11 = (int)uVar12 + (uint)puVar2[1];
    uVar12 = (ulonglong)uVar11;
    *puVar2 = (ushort)uVar14;
    uVar20 = (int)uVar14 + (uint)puVar2[2] + (uint)puVar2[1];
    uVar14 = (ulonglong)uVar20;
    uVar18 = uVar18 - 1;
    puVar2 = puVar2 + 2;
  } while (uVar18 != 0);
LAB_1455d0aed:
  if (((uVar20 < 0x100) && (uVar11 < param_2)) && ((param_2 - uVar11) + uVar20 < 0x101)) {
    param_1[(int)(uVar22 * 2)] = (ushort)uVar20;
    param_1[(longlong)(int)(uVar22 * 2) + 1] = (ushort)(param_2 - uVar11);
    param_5[2] = uVar17;
    param_5[3] = lVar21;
    *param_5 = puVar16;
    param_5[1] = local_50;
    return uVar22 + 1;
  }
  return -1;
}



// FUNCTION 1455d0d40 FUN_1455d0d40 body=213 status=ok
// SIG undefined FUN_1455d0d40(void)

ulonglong FUN_1455d0d40(byte *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = 0;
  lVar6 = param_2 - (longlong)param_1;
  uVar4 = uVar5;
  if (0 < lVar6) {
    uVar4 = (ulonglong)*param_1;
  }
  uVar2 = uVar5;
  if (lVar6 != 1 && -1 < lVar6 + -1) {
    uVar2 = (ulonglong)param_1[1];
  }
  uVar8 = uVar5;
  if (lVar6 != 2 && -1 < lVar6 + -2) {
    uVar8 = (ulonglong)param_1[2];
  }
  uVar1 = uVar5;
  if (lVar6 != 3 && -1 < lVar6 + -3) {
    uVar1 = (ulonglong)param_1[3];
  }
  param_2 = param_2 - (longlong)(param_1 + 4);
  uVar3 = uVar5;
  if (0 < param_2) {
    uVar3 = (ulonglong)param_1[4];
  }
  uVar9 = uVar5;
  if (param_2 != 1 && -1 < param_2 + -1) {
    uVar9 = (ulonglong)param_1[5];
  }
  uVar7 = uVar5;
  if (param_2 != 2 && -1 < param_2 + -2) {
    uVar7 = (ulonglong)param_1[6];
  }
  if (param_2 != 3 && -1 < param_2 + -3) {
    uVar5 = (ulonglong)param_1[7];
  }
  return ((((((uVar4 << 8 | uVar2) << 8 | uVar8) << 8 | uVar1) << 8 | uVar3) << 8 | uVar9) << 8 |
         uVar7) << 8 | uVar5;
}



// FUNCTION 1455d0e20 FUN_1455d0e20 body=22 status=ok
// SIG undefined FUN_1455d0e20(void)

ulonglong FUN_1455d0e20(byte param_1)

{
  return (longlong)(1 << (param_1 & 0x1f)) * 2 + 0xc2fU & 0xfffffffffffffff0;
}



// FUNCTION 1455d0e40 FUN_1455d0e40 body=22 status=ok
// SIG undefined FUN_1455d0e40(void)

ulonglong FUN_1455d0e40(byte param_1)

{
  return (longlong)(1 << (param_1 & 0x1f)) * 8 + 0x1fU & 0xfffffffffffffff0;
}



// FUNCTION 1455d0e60 FUN_1455d0e60 body=77 status=ok
// SIG undefined FUN_1455d0e60(void)

int * FUN_1455d0e60(int *param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 1 << ((byte)param_3 & 0x1f);
  if (param_2 < (longlong)((longlong)iVar1 * 2 + 0xc2fU & 0xfffffffffffffff0)) {
    return (int *)0x0;
  }
  param_1[2] = 0x100;
  *param_1 = iVar1;
  *(ulonglong *)(param_1 + 0x304) = (longlong)param_1 + 0xc27U & 0xfffffffffffffff0;
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 1455d0ec0 FUN_1455d0ec0 body=63 status=ok
// SIG undefined FUN_1455d0ec0(void)

int * FUN_1455d0ec0(int *param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 1 << ((byte)param_3 & 0x1f);
  if (param_2 < (longlong)((longlong)iVar1 * 8 + 0x1fU & 0xfffffffffffffff0)) {
    return (int *)0x0;
  }
  *param_1 = iVar1;
  param_1[1] = param_3;
  *(ulonglong *)(param_1 + 2) = (longlong)param_1 + 0x1fU & 0xfffffffffffffff0;
  return param_1;
}



// FUNCTION 1455d0f00 FUN_1455d0f00 body=869 status=ok
// SIG undefined FUN_1455d0f00(void)

void FUN_1455d0f00(uint *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  short *psVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint local_78;
  uint local_74;
  ulonglong local_70;
  uint *local_68;
  longlong local_60;
  int local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_78;
  lVar5 = (longlong)(int)param_3;
  if (0 < (int)param_3) {
    piVar12 = (int *)(param_2 + -4 + lVar5 * 4);
    do {
      if (*piVar12 != 0) break;
      param_3 = param_3 - 1;
      lVar5 = lVar5 + -1;
      piVar12 = piVar12 + -1;
    } while (0 < lVar5);
  }
  uVar11 = *param_1;
  uVar13 = (ulonglong)(int)uVar11;
  local_74 = param_1[1];
  lVar5 = (longlong)(int)param_3 + -1;
  uVar15 = 0;
  param_1[2] = param_3;
  sVar3 = (short)uVar11;
  if (*(uint *)(param_2 + lVar5 * 4) == uVar11) {
    *(undefined2 *)((longlong)param_1 + lVar5 * 0xc + 0x1a) = 0;
    iVar1 = uVar11 * 2;
    *(short *)(param_1 + lVar5 * 3 + 6) = sVar3 * 2;
    *(ulonglong *)(param_1 + lVar5 * 3 + 4) = *(longlong *)(param_1 + 0x304) + uVar13 * -2;
    lVar2 = uVar13 * 2;
    while ((int)uVar11 < iVar1) {
      *(short *)(lVar2 + *(longlong *)(param_1 + lVar5 * 3 + 4)) = (short)uVar13;
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
      lVar2 = lVar2 + 2;
    }
    goto LAB_1455d1253;
  }
  local_70 = (ulonglong)(int)param_3;
  uVar7 = 0;
  if (0 < (int)param_3) {
    uVar6 = uVar15;
    uVar13 = uVar15;
    if (7 < local_70) {
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar7 = (int)param_3 >> 0x1f & 7;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      do {
        piVar12 = (int *)(param_2 + uVar6 * 4);
        uVar21 = uVar21 + 1 & -(uint)(*piVar12 == 1) | ~-(uint)(*piVar12 == 1) & uVar21;
        uVar22 = uVar22 + 1 & -(uint)(piVar12[1] == 1) | ~-(uint)(piVar12[1] == 1) & uVar22;
        uVar23 = uVar23 + 1 & -(uint)(piVar12[2] == 1) | ~-(uint)(piVar12[2] == 1) & uVar23;
        uVar24 = uVar24 + 1 & -(uint)(piVar12[3] == 1) | ~-(uint)(piVar12[3] == 1) & uVar24;
        piVar12 = (int *)(param_2 + 0x10 + uVar6 * 4);
        uVar6 = uVar6 + 8;
        uVar17 = uVar17 + 1 & -(uint)(*piVar12 == 1) | ~-(uint)(*piVar12 == 1) & uVar17;
        uVar18 = uVar18 + 1 & -(uint)(piVar12[1] == 1) | ~-(uint)(piVar12[1] == 1) & uVar18;
        uVar19 = uVar19 + 1 & -(uint)(piVar12[2] == 1) | ~-(uint)(piVar12[2] == 1) & uVar19;
        uVar20 = uVar20 + 1 & -(uint)(piVar12[3] == 1) | ~-(uint)(piVar12[3] == 1) & uVar20;
      } while ((longlong)uVar6 <
               (longlong)(local_70 - ((ulonglong)(param_3 + uVar7 & 7) - (ulonglong)uVar7)));
      uVar7 = uVar17 + uVar21 + uVar19 + uVar23 + uVar18 + uVar22 + uVar20 + uVar24;
      uVar13 = (ulonglong)uVar7;
      if ((longlong)local_70 <= (longlong)uVar6) goto LAB_1455d10b3;
    }
    do {
      uVar16 = (ulonglong)((int)uVar13 + 1);
      if (*(int *)(param_2 + uVar6 * 4) != 1) {
        uVar16 = uVar13;
      }
      uVar13 = uVar16;
      uVar7 = (uint)uVar13;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)local_70);
  }
LAB_1455d10b3:
  local_58[0] = 0;
  uVar11 = uVar11 - uVar7;
  uVar13 = (ulonglong)uVar11;
  local_78 = 0;
  uVar7 = uVar11 >> 2;
  uVar11 = uVar11 & 3;
  local_58[1] = uVar7 + 1;
  if (uVar11 == 0) {
    local_58[1] = uVar7;
  }
  local_58[2] = local_58[1] + uVar7 + 1;
  if (uVar11 < 2) {
    local_58[2] = local_58[1] + uVar7;
  }
  local_58[3] = local_58[2] + uVar7 + 1;
  if (uVar11 < 3) {
    local_58[3] = local_58[2] + uVar7;
  }
  if (0 < (longlong)local_70) {
    puVar9 = param_1 + 6;
    uVar6 = uVar15;
    uVar16 = uVar15;
    do {
      uVar11 = *(uint *)(param_2 + uVar16 * 4);
      if (uVar11 == 0) {
        puVar9[-2] = 0;
        puVar9[-1] = 0;
      }
      else if (uVar11 == 1) {
        *(ushort *)((longlong)puVar9 + 2) = (ushort)local_74 & 0xff;
        *(short *)puVar9 = sVar3 * 2;
        psVar8 = (short *)(*(longlong *)(param_1 + 0x304) + uVar13 * 2);
        *(short **)(puVar9 + -2) = psVar8 + -1;
        *psVar8 = sVar3 + (short)uVar13;
        uVar13 = (ulonglong)((int)uVar13 + 1);
      }
      else {
        uVar7 = 0;
        if (1 < uVar11) {
          iVar1 = 0x1f;
          if (uVar11 - 1 != 0) {
            for (; uVar11 - 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
            }
          }
          uVar7 = iVar1 + 1;
        }
        *(ushort *)((longlong)puVar9 + 2) = (ushort)(local_74 - uVar7) & 0xff;
        *(short *)puVar9 = (short)uVar11 * 2 << ((byte)(local_74 - uVar7) & 0x1f);
        psVar8 = (short *)(*(longlong *)(param_1 + 0x304) + (longlong)(int)uVar6 * 2);
        uVar7 = (int)uVar6 + 3;
        *(short **)(puVar9 + -2) = psVar8 + -(ulonglong)uVar11;
        uVar6 = uVar15;
        do {
          iVar1 = local_58[uVar6];
          uVar14 = (ulonglong)(uVar7 & 3) + (ulonglong)uVar11 >> 2;
          iVar4 = iVar1;
          for (uVar10 = uVar14; uVar10 != 0; uVar10 = uVar10 - 1) {
            *psVar8 = sVar3 + (short)iVar4;
            iVar4 = iVar4 + 1;
            psVar8 = psVar8 + 1;
          }
          uVar7 = uVar7 - 1;
          local_58[uVar6] = iVar1 + (int)uVar14;
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < 4);
        local_78 = local_78 + uVar11;
        uVar6 = (ulonglong)local_78;
      }
      uVar16 = uVar16 + 1;
      puVar9 = puVar9 + 3;
    } while ((longlong)uVar16 < (longlong)local_70);
  }
LAB_1455d1253:
  local_68 = param_1;
  local_60 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)&local_78);
}



// FUNCTION 1455d1280 FUN_1455d1280 body=869 status=ok
// SIG undefined FUN_1455d1280(void)

void FUN_1455d1280(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  byte bVar5;
  longlong lVar6;
  int *piVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  ulonglong uVar20;
  int iVar21;
  uint *puVar22;
  uint local_88;
  byte bStack_84;
  undefined1 uStack_83;
  ushort uStack_82;
  int local_80;
  int local_7c;
  ulonglong local_78;
  uint *local_70;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_88;
  local_68[0] = *(longlong *)(param_1 + 2);
  local_80 = *param_1;
  local_7c = param_1[1];
  uVar3 = local_80 - *param_2;
  uVar10 = uVar3 & 3;
  uVar15 = uVar3 >> 2;
  bVar8 = (byte)local_7c;
  uVar11 = uVar15 + 1;
  if (uVar10 == 0) {
    uVar11 = uVar15;
  }
  local_68[1] = local_68[0] + (ulonglong)uVar11 * 8;
  uVar2 = uVar11 + uVar15 + 1;
  if (uVar10 < 2) {
    uVar2 = uVar11 + uVar15;
  }
  local_68[2] = local_68[0] + (ulonglong)uVar2 * 8;
  uVar11 = uVar2 + uVar15 + 1;
  if (uVar10 < 3) {
    uVar11 = uVar2 + uVar15;
  }
  piVar17 = (int *)((longlong)param_2 + (longlong)*param_2 + 8);
  uStack_82 = 0;
  piVar7 = param_2 + 2;
  local_68[3] = local_68[0] + (ulonglong)uVar11 * 8;
  local_88 = (uint)(ushort)((1 << (bVar8 & 0x1f)) - 1);
  if (piVar7 != piVar17) {
    puVar4 = (ulonglong *)(local_68[0] + (ulonglong)uVar3 * 8);
    do {
      *puVar4 = (ulonglong)CONCAT15(uStack_83,CONCAT14(bVar8,local_88));
      iVar21 = *piVar7;
      piVar7 = (int *)((longlong)piVar7 + 1);
      *(char *)((longlong)puVar4 + 5) = (char)iVar21;
      puVar4 = puVar4 + 1;
    } while (piVar7 != piVar17);
  }
  iVar21 = 0;
  local_70 = (uint *)(param_2 + (longlong)param_2[1] + 0x42);
  bStack_84 = bVar8;
  for (puVar22 = (uint *)(param_2 + 0x42); puVar22 != local_70; puVar22 = puVar22 + 1) {
    uVar11 = *puVar22;
    uVar3 = uVar11 & 0xffff;
    uVar19 = (undefined1)(uVar11 >> 0x10);
    if (uVar3 < 5) {
      uVar11 = (1 << ((byte)uVar3 & 0x1f)) + -1 << ((byte)iVar21 & 3);
      uVar11 = uVar11 | uVar11 >> 4;
      if (uVar3 != 0) {
        uVar20 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          iVar16 = 0;
          if (uVar11 != 0) {
            for (; (uVar11 >> iVar16 & 1) == 0; iVar16 = iVar16 + 1) {
            }
          }
          uVar11 = uVar11 & uVar11 - 1;
          puVar1 = (uint *)local_68[iVar16];
          *(undefined1 *)((longlong)puVar1 + 5) = uVar19;
          local_68[iVar16] = (longlong)(puVar1 + 2);
          iVar16 = 0x1f;
          if (uVar10 != 0) {
            for (; uVar10 >> iVar16 == 0; iVar16 = iVar16 + -1) {
            }
          }
          bVar5 = bVar8 - (char)iVar16;
          *(byte *)(puVar1 + 1) = bVar5;
          *puVar1 = (uint)(ushort)((1 << (bVar5 & 0x1f)) - 1);
          sVar14 = (short)uVar10;
          uVar10 = uVar10 + 1;
          *(ushort *)((longlong)puVar1 + 6) = sVar14 << (bVar5 & 0x1f) & (short)local_80 - 1U;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    else {
      iVar16 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar16 == 0; iVar16 = iVar16 + -1) {
        }
      }
      uVar15 = local_7c - iVar16;
      bStack_84 = (byte)uVar15;
      uStack_82 = (short)uVar11 << (bStack_84 & 0x1f) & (short)local_80 - 1U;
      iVar12 = 1 << (bStack_84 & 0x1f);
      lVar9 = 0;
      uVar10 = iVar12 - 1;
      uVar13 = (ulonglong)uVar10 & 0xffff;
      uVar20 = (((ulonglong)uStack_82 << 8 | (ulonglong)(uVar11 >> 0x10) & 0xff) << 8 |
               (ulonglong)(uVar15 & 0xff)) << 0x20 | uVar13;
      local_78 = (ulonglong)(ushort)iVar12 << 0x30;
      uVar11 = (1 << ((char)iVar16 + 1U & 0x1f)) - uVar3;
      local_88 = (uint)uVar13;
      uVar13 = local_78;
      do {
        puVar4 = (ulonglong *)local_68[lVar9];
        uVar18 = (ulonglong)((iVar21 + 3) - (int)lVar9 & 3) + (ulonglong)uVar3 >> 2;
        iVar16 = (int)uVar18;
        if ((int)uVar11 < iVar16) {
          lVar6 = (longlong)(int)uVar11;
          if (0 < (int)uVar11) {
            do {
              *puVar4 = uVar20;
              puVar4 = puVar4 + 1;
              uVar20 = uVar20 + uVar13;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          uVar13 = uVar13 >> 1;
          uVar2 = uVar10 >> 1;
          uVar15 = uVar15 - 1;
          local_88 = uVar2 & 0xffff;
          iVar16 = iVar16 - uVar11;
          bStack_84 = (byte)uVar15;
          uStack_82 = 0;
          uVar20 = (ulonglong)(CONCAT15(uVar19,CONCAT14(bStack_84,uVar2)) & 0xffff0000ffff);
          lVar6 = (longlong)iVar16;
          uVar11 = uVar3;
          if (0 < iVar16) {
            do {
              *puVar4 = uVar20;
              puVar4 = puVar4 + 1;
              uVar20 = uVar20 + uVar13;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
        }
        else {
          if (iVar16 != 0) {
            do {
              *puVar4 = uVar20;
              puVar4 = puVar4 + 1;
              uVar20 = uVar20 + uVar13;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          uVar11 = uVar11 - iVar16;
        }
        local_68[lVar9] = (longlong)puVar4;
        lVar9 = lVar9 + 1;
        uStack_83 = uVar19;
      } while (lVar9 < 4);
    }
    iVar21 = iVar21 + uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)&local_88);
}



// FUNCTION 1455d1600 FUN_1455d1600 body=1746 status=ok
// SIG undefined FUN_1455d1600(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1455d1600(longlong *param_1,uint param_2,int *param_3,int param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  uint *puVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong *puVar23;
  undefined1 auStack_f68 [32];
  int *local_f48;
  int local_f40;
  uint local_f38;
  uint local_f34;
  int local_f30;
  int local_f2c;
  ulonglong *local_f28;
  longlong local_f20;
  int *local_f18;
  ulonglong local_f10;
  longlong local_f08;
  longlong *local_f00;
  undefined8 local_ef8;
  longlong local_ef0;
  ulonglong local_ee8;
  longlong local_ee0;
  uint auStack_ed8 [32];
  int local_e58 [128];
  uint auStack_c58 [255];
  int aiStack_85c [261];
  byte local_448 [256];
  undefined1 local_348 [256];
  undefined1 local_248 [256];
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f68;
  lVar18 = param_1[3];
  local_f20 = param_1[1];
  lVar15 = param_1[2];
  local_f28 = (ulonglong *)*param_1;
  lVar12 = 0x3f - lVar18 >> 3;
  uVar5 = lVar15 << ((char)lVar18 + 1U & 0x3f);
  *local_f28 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18
               | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
               (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  local_f28 = (ulonglong *)((longlong)local_f28 + lVar12);
  lVar18 = lVar18 + lVar12 * 8;
  local_f34 = param_2;
  local_f08 = lVar18;
  local_f00 = param_1;
  if (7 < param_5) {
    local_f10 = lVar15 * 2 | 1;
    memset(local_e58,0,0x200);
    uVar20 = 0;
    local_f34 = 0;
    local_f38 = 0;
    iVar19 = 0;
    local_f30 = 1;
    uVar8 = uVar20;
    uVar5 = uVar20;
    if (0 < param_4) {
      do {
        if (param_3[uVar8] != 0) break;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar8 = uVar8 + 1;
      } while ((longlong)uVar8 < (longlong)param_4);
    }
    iVar16 = (int)uVar5;
    aiStack_85c[1] = iVar16;
    iVar22 = 6;
    if (iVar16 < param_4) {
      local_f18 = aiStack_85c + 3;
      lVar15 = (longlong)iVar16;
      uVar8 = uVar20;
      uVar7 = uVar20;
      uVar21 = uVar20;
      do {
        local_f2c = (int)uVar5;
        do {
          uVar17 = (uint)uVar20;
          if (param_3[lVar15] == 0) break;
          uVar11 = param_3[lVar15] - 1;
          iVar19 = iVar22 >> 2;
          uVar2 = iVar19 * 2;
          uVar10 = uVar11;
          if ((int)uVar11 <= (int)uVar2) {
            uVar10 = (int)(uVar11 - iVar19) >> 0x1f ^ (uVar11 - iVar19) * 2;
            uVar17 = local_f38;
          }
          local_f38 = uVar17 + 1;
          auStack_c58[uVar8] = uVar10;
          uVar8 = uVar8 + 1;
          if (uVar10 < 0x80) {
            local_e58[uVar10] = local_e58[uVar10] + 1;
          }
          else {
            uVar7 = (ulonglong)((int)uVar7 + 1);
            auStack_ed8[uVar21] = uVar10;
            uVar21 = uVar21 + 1;
          }
          uVar20 = (ulonglong)local_f38;
          if ((int)uVar2 <= (int)uVar11) {
            uVar11 = uVar2;
          }
          local_f34 = local_f34 + 1;
          uVar17 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar17;
          iVar22 = iVar22 + (uVar11 - iVar19);
          lVar15 = lVar15 + 1;
        } while ((int)uVar17 < param_4);
        iVar19 = (int)uVar7;
        iVar3 = (int)uVar5;
        local_f18[-1] = iVar3 - local_f2c;
        for (; (iVar16 = (int)uVar5, lVar15 < param_4 && (param_3[lVar15] == 0));
            lVar15 = lVar15 + 1) {
          uVar5 = (ulonglong)(iVar16 + 1);
        }
        local_f30 = local_f30 + 2;
        uVar20 = (ulonglong)local_f38;
        *local_f18 = iVar16 - iVar3;
        local_f18 = local_f18 + 2;
        lVar18 = local_f08;
      } while (iVar16 < param_4);
    }
    uVar8 = 0;
    lVar15 = 0x40 - lVar18 >> 3;
    uVar20 = 1;
    aiStack_85c[local_f30] = aiStack_85c[local_f30] + (0x100 - iVar16);
    iVar16 = 0x7fffffff;
    uVar5 = local_f10 << ((byte)lVar18 & 0x3f);
    *local_f28 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 |
                 (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
                 (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 |
                 uVar5 << 0x38;
    local_f28 = (ulonglong *)((longlong)local_f28 + lVar15);
    uVar5 = uVar8;
    do {
      iVar3 = (int)uVar5;
      iVar22 = FUN_14547f0e0(local_e58,0x80,uVar5);
      uVar17 = local_f34;
      uVar7 = uVar8;
      if (0 < iVar19) {
        do {
          uVar2 = (auStack_ed8[uVar7] >> ((byte)uVar5 & 0x1f)) + 1;
          uVar7 = uVar7 + 1;
          iVar4 = 0x1f;
          if (uVar2 != 0) {
            for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          iVar22 = iVar22 + 1 + iVar3 + iVar4 * 2;
        } while ((longlong)uVar7 < (longlong)iVar19);
      }
      iVar4 = iVar3;
      if (iVar16 <= iVar22) {
        iVar4 = (int)uVar20;
      }
      uVar5 = (ulonglong)(iVar3 + 1U);
      uVar20 = (ulonglong)iVar4;
      if (iVar16 <= iVar22) {
        iVar22 = iVar16;
      }
      iVar16 = iVar22;
    } while ((int)(iVar3 + 1U) < 8);
    local_f40 = local_f30;
    local_f48 = aiStack_85c + 1;
    iVar19 = FUN_1455d05e0(local_348,local_148,local_248,local_f34);
    lVar18 = local_f08 + lVar15 * 8;
    local_ee8 = (local_f10 * 8 | uVar20) << 8 | (longlong)(int)(uVar17 - 1);
    lVar12 = 0x4b - lVar18 >> 3;
    uVar5 = local_ee8 << ((char)lVar18 - 0xbU & 0x3f);
    *local_f28 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 |
                 (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
                 (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 |
                 uVar5 << 0x38;
    local_ee0 = local_f08 + -0xc + (lVar15 + lVar12) * 8;
    local_ef8 = (ulonglong *)(lVar12 + (longlong)local_f28);
    local_ef0 = local_f20;
    FUN_1455d0700(&local_ef8,iVar19,uVar17);
    lVar18 = (longlong)(int)local_f38;
    bVar9 = (byte)iVar4;
    uVar5 = uVar8;
    if (0 < lVar18) {
      do {
        uVar2 = auStack_c58[uVar5] + (1 << (bVar9 & 0x1f));
        uVar17 = uVar2 >> (bVar9 & 0x1f);
        iVar16 = 0x1f;
        if (uVar17 != 0) {
          for (; uVar17 >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        local_448[uVar5] = (byte)iVar16;
        auStack_c58[uVar5] = (1 << ((byte)iVar16 + bVar9 & 0x1f)) - 1U & uVar2;
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < lVar18);
    }
    FUN_1455d0040(&local_ef8,local_448,lVar18);
    FUN_1455d0040(&local_ef8,local_348,(longlong)iVar19);
    FUN_1455cff60(&local_ef8,local_148,local_248,(longlong)iVar19);
    local_f20 = local_ef0;
    uVar5 = local_ee8;
    lVar12 = local_ee0;
    puVar23 = local_ef8;
    if (0 < lVar18) {
      do {
        uVar17 = (uint)local_448[uVar8] + iVar4;
        if (uVar17 != 0) {
          uVar20 = uVar5 << ((char)lVar12 + 1U & 0x3f);
          *puVar23 = uVar20 >> 0x38 | (uVar20 & 0xff000000000000) >> 0x28 |
                     (uVar20 & 0xff0000000000) >> 0x18 | (uVar20 & 0xff00000000) >> 8 |
                     (uVar20 & 0xff000000) << 8 | (uVar20 & 0xff0000) << 0x18 |
                     (uVar20 & 0xff00) << 0x28 | uVar20 << 0x38;
          lVar15 = 0x3f - lVar12 >> 3;
          puVar23 = (ulonglong *)((longlong)puVar23 + lVar15);
          uVar5 = uVar5 << ((byte)uVar17 & 0x3f) | (ulonglong)auStack_c58[uVar8];
          lVar12 = lVar12 + (lVar15 * 8 - (ulonglong)uVar17);
        }
        uVar8 = uVar8 + 1;
      } while ((longlong)uVar8 < lVar18);
    }
    lVar18 = 0x3f - lVar12 >> 3;
    uVar8 = uVar5 << ((char)lVar12 + 1U & 0x3f);
    *puVar23 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18
               | (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 |
               (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
    puVar23 = (ulonglong *)((longlong)puVar23 + lVar18);
    lVar12 = lVar12 + lVar18 * 8;
    goto LAB_1455d1c86;
  }
  uVar8 = 0;
  uVar5 = lVar15 * 2 << ((byte)lVar18 & 0x3f);
  lVar12 = 0x40 - lVar18 >> 3;
  uVar2 = 0;
  *local_f28 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18
               | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
               (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  puVar23 = (ulonglong *)((longlong)local_f28 + lVar12);
  uVar17 = uVar2;
  if (0 < param_4) {
    puVar13 = (uint *)&local_ef8;
    uVar5 = uVar8;
    uVar20 = uVar8;
    do {
      if (*param_3 != 0) {
        uVar20 = (ulonglong)((int)uVar20 + 1);
        *puVar13 = *param_3 << 0x10 | (uint)uVar5;
        puVar13 = puVar13 + 1;
      }
      uVar17 = (uint)uVar20;
      uVar10 = (uint)uVar5 + 1;
      uVar5 = (ulonglong)uVar10;
      param_3 = param_3 + 1;
    } while ((int)uVar10 < param_4);
  }
  puVar13 = (uint *)((longlong)&local_ef8 + (longlong)(int)uVar17 * 4);
  if ((uint *)&local_ef8 != puVar13) {
    puVar14 = (uint *)((longlong)&local_ef8 + 4);
    puVar6 = (uint *)((longlong)&local_ef8 + 4);
    while (puVar6 != puVar13) {
      uVar17 = *puVar14;
      puVar6 = puVar14;
      if (&local_ef8 < puVar14) {
        do {
          if (puVar6[-1] <= uVar17) break;
          *puVar6 = puVar6[-1];
          puVar6 = puVar6 + -1;
        } while (&local_ef8 < puVar6);
      }
      *puVar6 = uVar17;
      puVar14 = puVar14 + 1;
      puVar6 = puVar14;
    }
  }
  lVar1 = (longlong)param_5 + -1;
  uVar5 = uVar8;
  uVar20 = uVar8;
  uVar7 = uVar8;
  if (lVar1 < 1) {
LAB_1455d17b0:
    uVar11 = 1;
  }
  else {
    do {
      uVar17 = (uint)*(ushort *)((longlong)&local_ef8 + uVar5 * 4 + 2);
      uVar10 = uVar17 - (int)uVar20;
      iVar19 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      uVar11 = uVar2;
      if (uVar10 != 0) {
        uVar11 = iVar19 + 1;
      }
      if ((int)uVar11 < (int)(uint)uVar7) {
        uVar11 = (uint)uVar7;
      }
      uVar5 = uVar5 + 1;
      uVar20 = (ulonglong)uVar17;
      uVar7 = (ulonglong)uVar11;
    } while ((longlong)uVar5 < lVar1);
    if (uVar11 == 0) goto LAB_1455d17b0;
  }
  iVar19 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar19 == 0; iVar19 = iVar19 + -1) {
    }
  }
  if (param_2 != 0) {
    uVar2 = iVar19 + 1;
  }
  lVar12 = (lVar18 + lVar12 * 8 + -4) - (ulonglong)uVar2;
  uVar20 = ((longlong)(param_5 + -2) | lVar15 << 4) << ((byte)uVar2 & 0x3f) | (longlong)(int)uVar11;
  uVar5 = uVar8;
  if (0 < lVar1) {
    do {
      uVar17 = *(uint *)((longlong)&local_ef8 + uVar5 * 4);
      uVar2 = uVar17 >> 0x10;
      lVar18 = 0x3f - lVar12 >> 3;
      iVar19 = (int)uVar8;
      uVar8 = (ulonglong)uVar2;
      uVar5 = uVar5 + 1;
      uVar7 = uVar20 << ((char)lVar12 + 1U & 0x3f);
      *puVar23 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                 (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                 uVar7 << 0x38;
      puVar23 = (ulonglong *)((longlong)puVar23 + lVar18);
      uVar20 = (uVar20 << 8 | (ulonglong)(uVar17 & 0xff)) << ((byte)uVar11 & 0x3f) |
               (ulonglong)(uVar2 - iVar19);
      lVar12 = lVar12 + -8 + (lVar18 * 8 - (longlong)(int)uVar11);
    } while ((longlong)uVar5 < lVar1);
  }
  bVar9 = *(byte *)((longlong)&local_ef8 + lVar1 * 4);
  uVar5 = uVar20 << ((char)lVar12 + 1U & 0x3f);
  lVar18 = 0x3f - lVar12 >> 3;
  *puVar23 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
             (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
             (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  puVar23 = (ulonglong *)((longlong)puVar23 + lVar18);
  uVar5 = (ulonglong)bVar9 | uVar20 << 8;
  lVar12 = lVar12 + (lVar18 + -1) * 8;
LAB_1455d1c86:
  lVar18 = 0x3f - lVar12 >> 3;
  uVar8 = uVar5 << ((char)lVar12 + 1U & 0x3f);
  *puVar23 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
             (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
             (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
  local_f00[3] = lVar12 + lVar18 * 8;
  *local_f00 = lVar18 + (longlong)puVar23;
  local_f00[1] = local_f20;
  local_f00[2] = uVar5;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f68);
}



// FUNCTION 1455d1d00 FUN_1455d1d00 body=3538 status=ok
// SIG undefined FUN_1455d1d00(void)

void FUN_1455d1d00(undefined8 *param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  uint uVar21;
  undefined8 uVar22;
  byte *pbVar23;
  int iVar24;
  char *pcVar25;
  uint uVar26;
  int *piVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  byte *pbVar31;
  undefined1 auStack_548 [32];
  ulonglong **local_528;
  uint local_518;
  longlong local_510;
  uint local_508;
  ulonglong local_500;
  byte *local_4f8;
  int local_4f0;
  int local_4ec;
  ulonglong local_4e8;
  int *local_4e0;
  longlong local_4d8;
  ulonglong *local_4d0;
  byte *local_4c8;
  ulonglong local_4c0;
  longlong local_4b8;
  ulonglong local_4b0;
  byte *local_4a8;
  int *local_4a0;
  byte *local_498;
  byte *local_490;
  uint local_488;
  undefined8 *local_480;
  byte local_478 [8];
  undefined8 auStack_470 [65];
  ushort local_268 [272];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_548;
  lVar17 = param_1[3];
  pbVar2 = (byte *)param_1[1];
  puVar20 = (ulonglong *)*param_1;
  uVar16 = 0;
  lVar9 = (longlong)pbVar2 - (longlong)puVar20;
  if (lVar9 < 8) {
    uVar12 = uVar16;
    if (0 < lVar9) {
      uVar12 = (ulonglong)(byte)*puVar20;
    }
    uVar13 = uVar16;
    if (lVar9 != 1 && -1 < lVar9 + -1) {
      uVar13 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
    }
    uVar10 = uVar16;
    if (lVar9 != 2 && -1 < lVar9 + -2) {
      uVar10 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    }
    uVar7 = uVar16;
    if (lVar9 != 3 && -1 < lVar9 + -3) {
      uVar7 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
    }
    lVar9 = (longlong)pbVar2 - ((longlong)puVar20 + 4);
    uVar5 = uVar16;
    if (0 < lVar9) {
      uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
    }
    uVar6 = uVar16;
    if (lVar9 != 1 && -1 < lVar9 + -1) {
      uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
    }
    uVar19 = uVar16;
    if (lVar9 != 2 && -1 < lVar9 + -2) {
      uVar19 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
    }
    uVar11 = uVar16;
    if (lVar9 != 3 && -1 < lVar9 + -3) {
      uVar11 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
    }
    uVar11 = ((((((uVar12 << 8 | uVar13) << 8 | uVar10) << 8 | uVar7) << 8 | uVar5) << 8 | uVar6) <<
              8 | uVar19) << 8 | uVar11;
  }
  else {
    uVar12 = *puVar20;
    uVar11 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
             (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
             (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 |
             uVar12 << 0x38;
  }
  puVar20 = (ulonglong *)((longlong)puVar20 + (lVar17 >> 3));
  uVar12 = uVar11 >> (0x3fU - (char)lVar17 & 0x3f) | param_1[2];
  lVar17 = lVar17 + (lVar17 >> 3) * -8 + 1;
  uVar29 = 0;
  local_4f8 = pbVar2;
  local_4e0 = param_3;
  local_480 = param_1;
  if ((longlong)uVar12 < 0) {
    lVar17 = lVar17 + 0xb;
    local_4b0 = (uVar12 & 0x7fffffffffffffff) >> 0x3c;
    uVar30 = (byte)((uVar12 << 4) >> 0x38) + 1;
    if (uVar30 < 2) goto LAB_1455d2ad0;
    if (uVar30 != 0x100) {
      uVar29 = 0x101 - uVar30;
      if ((int)uVar30 < (int)(0x101 - uVar30)) {
        uVar29 = uVar30;
      }
      uVar21 = uVar29 * 2 - 1;
      uVar26 = 0x1f;
      if (uVar21 != 0) {
        for (; uVar21 >> uVar26 == 0; uVar26 = uVar26 - 1) {
        }
      }
      bVar8 = (byte)(uVar26 + 1);
      iVar4 = (1 << (bVar8 & 0x1f)) + uVar29 * -2;
      iVar24 = (int)((uVar12 << 0xc) >> (0x40 - bVar8 & 0x3f));
      uVar29 = iVar24 >> 1;
      if ((int)uVar29 < iVar4) {
        lVar17 = lVar17 + (ulonglong)uVar26;
      }
      else {
        uVar29 = iVar24 - iVar4;
        lVar17 = lVar17 + (ulonglong)(uVar26 + 1);
      }
    }
    local_488 = -((int)-lVar17 + 0x3f) & 7;
    local_498 = (byte *)((longlong)puVar20 - (-lVar17 + 0x46U >> 3));
    uVar13 = (ulonglong)(uVar29 + uVar30);
    local_490 = pbVar2;
    uVar12 = FUN_1455d0160(local_478,uVar29 + uVar30,&local_498);
    if (uVar12 != uVar13) goto LAB_1455d2ad0;
    pbVar2 = local_478 + uVar13;
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    *(undefined8 *)((longlong)auStack_470 + uVar13) = 0;
    local_4c8 = local_490;
    uVar12 = uVar16;
    if (local_490 != local_498 && -1 < (longlong)local_490 - (longlong)local_498) {
      uVar12 = (ulonglong)*local_498;
    }
    puVar20 = (ulonglong *)(local_498 + 1);
    lVar17 = (longlong)local_490 - (longlong)puVar20;
    if (lVar17 < 8) {
      uVar13 = uVar16;
      if (0 < lVar17) {
        uVar13 = (ulonglong)(byte)*puVar20;
      }
      uVar10 = uVar16;
      if (lVar17 != 1 && -1 < lVar17 + -1) {
        uVar10 = (ulonglong)local_498[2];
      }
      uVar7 = uVar16;
      if (lVar17 != 2 && -1 < lVar17 + -2) {
        uVar7 = (ulonglong)local_498[3];
      }
      uVar5 = uVar16;
      if (lVar17 != 3 && -1 < lVar17 + -3) {
        uVar5 = (ulonglong)local_498[4];
      }
      lVar17 = (longlong)local_490 - (longlong)(local_498 + 5);
      uVar6 = uVar16;
      if (0 < lVar17) {
        uVar6 = (ulonglong)local_498[5];
      }
      uVar19 = uVar16;
      if (lVar17 != 1 && -1 < lVar17 + -1) {
        uVar19 = (ulonglong)local_498[6];
      }
      uVar11 = uVar16;
      if (lVar17 != 2 && -1 < lVar17 + -2) {
        uVar11 = (ulonglong)local_498[7];
      }
      uVar13 = ((((((uVar13 << 8 | uVar10) << 8 | uVar7) << 8 | uVar5) << 8 | uVar6) << 8 | uVar19)
                << 8 | uVar11) << 8;
    }
    else {
      uVar13 = *puVar20;
      uVar13 = (uVar13 & 0xff000000000000) >> 0x28 | (uVar13 & 0xff0000000000) >> 0x18 |
               (uVar13 & 0xff00000000) >> 8 | (uVar13 & 0xff000000) << 8 |
               (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
    }
    local_4d0 = (ulonglong *)(local_498 + 7);
    local_4c0 = (uVar13 >> 8 | uVar12 << 0x38) << ((byte)local_488 & 0x3f);
    local_4b8 = (ulonglong)local_488 + 7;
    local_528 = &local_4d0;
    iVar4 = FUN_1455d07a0(local_268,uVar30,uVar29,local_478 + uVar30);
    lVar17 = local_4b8;
    puVar20 = local_4d0;
    lVar9 = (longlong)iVar4;
    if (iVar4 < 0) goto LAB_1455d2ad0;
    lVar18 = local_4b8 >> 3;
    local_4f8 = local_4c8;
    if ((longlong)local_4c8 - (longlong)local_4d0 < 8) {
      uVar12 = FUN_1455d0d40(local_4d0,local_4c8);
    }
    else {
      uVar12 = *local_4d0;
      uVar12 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
               (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
               (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28
               | uVar12 << 0x38;
    }
    local_500 = local_500 & 0xffffffff00000000;
    local_518 = 6;
    uVar12 = uVar12 >> (0x3fU - (char)lVar17 & 0x3f) | local_4c0;
    local_4a0 = local_4e0 + 2;
    local_4e8 = 0;
    local_4ec = 1 << ((byte)param_2 & 0x1f);
    piVar27 = local_4e0 + 0x42;
    lVar17 = lVar17 + lVar18 * -8;
    puVar20 = (ulonglong *)((longlong)puVar20 + lVar18);
    local_4f0 = 1 << ((byte)local_4b0 & 0x1f);
    local_4a8 = local_478;
    uVar13 = uVar16;
    local_4d8 = lVar9;
    if (0 < iVar4) {
      do {
        uVar1 = local_268[local_4e8 * 2];
        uVar29 = (uint)uVar1;
        iVar4 = (uint)uVar1 << 0x10;
        local_510 = CONCAT44(local_510._4_4_,(uint)uVar1);
        local_508 = (uint)local_268[local_4e8 * 2 + 1];
        do {
          lVar18 = (longlong)local_4f8 - (longlong)puVar20;
          if (lVar18 < 8) {
            uVar13 = uVar16;
            if (0 < lVar18) {
              uVar13 = (ulonglong)(byte)*puVar20;
            }
            uVar10 = uVar16;
            if (lVar18 != 1 && -1 < lVar18 + -1) {
              uVar10 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
            }
            uVar7 = uVar16;
            if (lVar18 != 2 && -1 < lVar18 + -2) {
              uVar7 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
            }
            uVar5 = uVar16;
            if (lVar18 != 3 && -1 < lVar18 + -3) {
              uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
            }
            lVar18 = (longlong)local_4f8 - ((longlong)puVar20 + 4);
            uVar6 = uVar16;
            if (0 < lVar18) {
              uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
            }
            uVar19 = uVar16;
            if (lVar18 != 1 && -1 < lVar18 + -1) {
              uVar19 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
            }
            uVar11 = uVar16;
            if (lVar18 != 2 && -1 < lVar18 + -2) {
              uVar11 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
            }
            uVar14 = uVar16;
            if (lVar18 != 3 && -1 < lVar18 + -3) {
              uVar14 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
            }
            uVar14 = ((((((uVar13 << 8 | uVar10) << 8 | uVar7) << 8 | uVar5) << 8 | uVar6) << 8 |
                      uVar19) << 8 | uVar11) << 8 | uVar14;
            uVar29 = (uint)local_510;
          }
          else {
            uVar13 = *puVar20;
            uVar14 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
                     (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
                     (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 |
                     (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
          }
          puVar20 = (ulonglong *)((longlong)puVar20 + (lVar17 >> 3));
          uVar13 = uVar12 | uVar14 >> (0x3fU - (char)lVar17 & 0x3f);
          iVar24 = (int)local_518 >> 2;
          bVar8 = *local_4a8;
          local_4a8 = local_4a8 + 1;
          uVar30 = (uint)bVar8 + (int)local_4b0;
          if (0xf < uVar30) {
            FUN_144d94340();
            if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_1455d2ac9;
            pcVar25 = "OODLE ERROR : corruption : nextra <= 15\n";
            uVar22 = 0x491;
            goto LAB_1455d2abe;
          }
          bVar8 = (byte)uVar30;
          uVar12 = uVar13 << (bVar8 & 0x3f);
          lVar17 = lVar17 + (lVar17 >> 3) * -8 + (ulonglong)uVar30;
          uVar30 = iVar24 * 2;
          uVar21 = ((1 << (bVar8 & 0x1f)) - local_4f0) +
                   (int)((uVar13 >> 1) >> (0x3f - bVar8 & 0x3f));
          if (((int)uVar21 <= (int)uVar30) &&
             (uVar21 = (uVar21 >> 1 ^ -(uVar21 & 1)) + iVar24, (int)uVar21 < (int)uVar30)) {
            uVar30 = uVar21;
          }
          *(char *)local_4a0 = (char)uVar29;
          local_518 = local_518 + (uVar30 - iVar24);
          iVar24 = uVar21 + 1;
          *piVar27 = iVar4 + iVar24;
          local_4a0 = (int *)((longlong)local_4a0 + (ulonglong)(iVar24 == 1));
          uVar10 = uVar16;
          if (1 < iVar24) {
            uVar10 = 4;
          }
          uVar13 = (ulonglong)(uint)((int)local_500 + iVar24);
          uVar29 = uVar29 + 1;
          piVar27 = (int *)((longlong)piVar27 + uVar10);
          local_500 = CONCAT44(local_500._4_4_,(int)local_500 + iVar24);
          iVar4 = iVar4 + 0x10000;
          local_510 = CONCAT44(local_510._4_4_,uVar29);
          local_508 = local_508 - 1;
        } while (local_508 != 0);
        local_4e8 = local_4e8 + 1;
      } while ((longlong)local_4e8 < lVar9);
    }
    *local_4e0 = ((int)local_4a0 - (int)local_4e0) + -8;
    local_4e0[1] = (int)((longlong)piVar27 + (-0x108 - (longlong)local_4e0) >> 2);
    if ((int)uVar13 == local_4ec) {
LAB_1455d2a7f:
      local_480[1] = local_4f8;
      local_480[2] = uVar12;
      local_480[3] = lVar17;
      *local_480 = puVar20;
      goto LAB_1455d2ad0;
    }
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      pcVar25 = "OODLE ERROR : corruption : count_sum == L\n";
      uVar22 = 0x4b7;
      goto LAB_1455d2abe;
    }
  }
  else {
    memset(local_478,0,0x100);
    piVar27 = local_4e0;
    uVar30 = 1 << ((byte)param_2 & 0x1f);
    local_4e8 = (ulonglong)uVar30;
    lVar9 = (longlong)pbVar2 - (longlong)puVar20;
    if (lVar9 < 8) {
      uVar13 = uVar16;
      if (0 < lVar9) {
        uVar13 = (ulonglong)(byte)*puVar20;
      }
      uVar10 = uVar16;
      if (lVar9 != 1 && -1 < lVar9 + -1) {
        uVar10 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
      }
      uVar7 = uVar16;
      if (lVar9 != 2 && -1 < lVar9 + -2) {
        uVar7 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
      }
      uVar5 = uVar16;
      if (lVar9 != 3 && -1 < lVar9 + -3) {
        uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
      }
      lVar9 = (longlong)pbVar2 - ((longlong)puVar20 + 4);
      uVar6 = uVar16;
      if (0 < lVar9) {
        uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
      }
      uVar19 = uVar16;
      if (lVar9 != 1 && -1 < lVar9 + -1) {
        uVar19 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
      }
      uVar11 = uVar16;
      if (lVar9 != 2 && -1 < lVar9 + -2) {
        uVar11 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
      }
      uVar14 = uVar16;
      if (lVar9 != 3 && -1 < lVar9 + -3) {
        uVar14 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
      }
      uVar14 = ((((((uVar13 << 8 | uVar10) << 8 | uVar7) << 8 | uVar5) << 8 | uVar6) << 8 | uVar19)
                << 8 | uVar11) << 8 | uVar14;
    }
    else {
      uVar13 = *puVar20;
      uVar14 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
               (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
               (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28
               | uVar13 << 0x38;
    }
    puVar20 = (ulonglong *)((longlong)puVar20 + (lVar17 >> 3));
    uVar12 = uVar12 * 2 | uVar14 >> (0x3fU - (char)lVar17 & 0x3f);
    local_500 = uVar12 << 3;
    iVar4 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    uVar21 = uVar29;
    if (param_2 != 0) {
      uVar21 = iVar4 + 1;
    }
    uVar13 = local_500 >> (0x40 - (byte)uVar21 & 0x3f);
    local_510 = lVar17 + (lVar17 >> 3) * -8 + 3 + (ulonglong)uVar21;
    local_500 = local_500 << ((byte)uVar21 & 0x3f);
    iVar4 = (int)uVar13;
    if (iVar4 == 0) {
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
        pcVar25 = "OODLE ERROR : max_delta_bits == 0\n";
        uVar22 = 0x318;
LAB_1455d2abe:
        (*(code *)PTR_FUN_14c6d9368)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlz_tans.cpp",uVar22,pcVar25);
      }
    }
    else if ((int)param_2 < iVar4) {
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
        pcVar25 = "OODLE ERROR : max_delta_bits > L_bits\n";
        uVar22 = 0x31d;
        goto LAB_1455d2abe;
      }
    }
    else {
      local_518 = 0;
      local_508 = 0;
      pbVar2 = (byte *)(local_4e0 + 2);
      puVar28 = (uint *)(local_4e0 + 0x42);
      local_4f0 = (uint)(uVar12 >> 0x3d) + 1;
      pbVar31 = pbVar2;
      if (local_4f0 != 0) {
        local_4d8 = (longlong)iVar4;
        local_4ec = 0x40 - iVar4;
        uVar12 = uVar16;
        uVar10 = uVar16;
        uVar7 = uVar16;
        do {
          lVar17 = (longlong)local_4f8 - (longlong)puVar20;
          if (lVar17 < 8) {
            uVar12 = uVar16;
            if (0 < lVar17) {
              uVar12 = (ulonglong)(byte)*puVar20;
            }
            uVar10 = uVar16;
            if (lVar17 != 1 && -1 < lVar17 + -1) {
              uVar10 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
            }
            uVar5 = uVar16;
            if (lVar17 != 2 && -1 < lVar17 + -2) {
              uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
            }
            uVar6 = uVar16;
            if (lVar17 != 3 && -1 < lVar17 + -3) {
              uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
            }
            lVar17 = (longlong)local_4f8 - ((longlong)puVar20 + 4);
            uVar19 = uVar16;
            if (0 < lVar17) {
              uVar19 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
            }
            uVar11 = uVar16;
            if (lVar17 != 1 && -1 < lVar17 + -1) {
              uVar11 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
            }
            uVar14 = uVar16;
            if (lVar17 != 2 && -1 < lVar17 + -2) {
              uVar14 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
            }
            uVar15 = uVar16;
            if (lVar17 != 3 && -1 < lVar17 + -3) {
              uVar15 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
            }
            uVar15 = ((((((uVar12 << 8 | uVar10) << 8 | uVar5) << 8 | uVar6) << 8 | uVar19) << 8 |
                      uVar11) << 8 | uVar14) << 8 | uVar15;
            uVar21 = local_518;
            uVar26 = local_508;
          }
          else {
            uVar5 = *puVar20;
            uVar15 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 |
                     (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
                     (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
                     (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
            uVar21 = (uint)uVar12;
            uVar26 = (uint)uVar10;
          }
          puVar20 = (ulonglong *)((longlong)puVar20 + (local_510 >> 3));
          uVar12 = local_500 | uVar15 >> (0x3fU - (char)local_510 & 0x3f);
          local_500 = uVar12 << 8;
          local_510 = local_510 + (local_510 >> 3) * -8 + 8;
          if (local_478[uVar12 >> 0x38] != 0) {
            FUN_144d94340();
            if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_1455d2ac9;
            pcVar25 = "OODLE ERROR : corruption : ! seen[sym]\n";
            uVar22 = 0x32c;
            goto LAB_1455d2abe;
          }
          local_510 = local_510 + local_4d8;
          uVar10 = local_500 >> ((byte)local_4ec & 0x3f);
          local_500 = local_500 << ((byte)uVar13 & 0x3f);
          uVar29 = (int)uVar7 + (int)uVar10;
          uVar7 = (ulonglong)uVar29;
          if (uVar29 == 0) {
            FUN_144d94340();
            if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_1455d2ac9;
            pcVar25 = "OODLE ERROR : corruption : cur > 0\n";
            uVar22 = 0x332;
            goto LAB_1455d2abe;
          }
          local_478[uVar12 >> 0x38] = 1;
          bVar8 = (byte)(uVar12 >> 0x38);
          if (uVar29 == 1) {
            *pbVar31 = bVar8;
            pbVar31 = pbVar31 + 1;
          }
          else {
            *puVar28 = (uint)bVar8 << 0x10 | uVar29;
            puVar28 = puVar28 + 1;
          }
          local_518 = uVar21 + uVar29;
          uVar12 = (ulonglong)local_518;
          if (uVar30 <= local_518) {
            FUN_144d94340();
            if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_1455d2ac9;
            pcVar25 = "OODLE ERROR : corruption : sum < L\n";
            uVar22 = 0x33b;
            goto LAB_1455d2abe;
          }
          local_508 = uVar26 + 1;
          uVar10 = (ulonglong)local_508;
        } while ((int)local_508 < local_4f0);
      }
      lVar17 = (longlong)local_4f8 - (longlong)puVar20;
      if (lVar17 < 8) {
        uVar12 = uVar16;
        if (0 < lVar17) {
          uVar12 = (ulonglong)(byte)*puVar20;
        }
        uVar13 = uVar16;
        if (lVar17 != 1 && -1 < lVar17 + -1) {
          uVar13 = (ulonglong)*(byte *)((longlong)puVar20 + 1);
        }
        uVar10 = uVar16;
        if (lVar17 != 2 && -1 < lVar17 + -2) {
          uVar10 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
        }
        uVar7 = uVar16;
        if (lVar17 != 3 && -1 < lVar17 + -3) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar20 + 3);
        }
        lVar17 = (longlong)local_4f8 - ((longlong)puVar20 + 4);
        uVar5 = uVar16;
        if (0 < lVar17) {
          uVar5 = (ulonglong)*(byte *)((longlong)puVar20 + 4);
        }
        uVar6 = uVar16;
        if (lVar17 != 1 && -1 < lVar17 + -1) {
          uVar6 = (ulonglong)*(byte *)((longlong)puVar20 + 5);
        }
        uVar19 = uVar16;
        if (lVar17 != 2 && -1 < lVar17 + -2) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
        }
        if (lVar17 != 3 && -1 < lVar17 + -3) {
          uVar16 = (ulonglong)*(byte *)((longlong)puVar20 + 7);
        }
        uVar16 = ((((((uVar12 << 8 | uVar13) << 8 | uVar10) << 8 | uVar7) << 8 | uVar5) << 8 | uVar6
                  ) << 8 | uVar19) << 8 | uVar16;
      }
      else {
        uVar16 = *puVar20;
        uVar16 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                 (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                 (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                 (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
      }
      puVar20 = (ulonglong *)((longlong)puVar20 + (local_510 >> 3));
      uVar16 = local_500 | uVar16 >> (0x3fU - (char)local_510 & 0x3f);
      local_500 = uVar16 << 8;
      local_510 = local_510 + (local_510 >> 3) * -8 + 8;
      if (local_478[uVar16 >> 0x38] == 0) {
        uVar30 = uVar30 - local_518;
        if ((uVar29 <= uVar30) && (1 < uVar30)) {
          *puVar28 = (uint)(byte)(uVar16 >> 0x38) << 0x10 | uVar30;
          if (pbVar2 != pbVar31) {
            for (pbVar23 = (byte *)((longlong)local_4e0 + 9); pbVar23 != pbVar31;
                pbVar23 = pbVar23 + 1) {
              bVar8 = *pbVar23;
              pbVar3 = pbVar23;
              while (pbVar2 < pbVar3) {
                if (pbVar3[-1] <= bVar8) break;
                *pbVar3 = pbVar3[-1];
                pbVar3 = pbVar3 + -1;
              }
              *pbVar3 = bVar8;
            }
          }
          FUN_1455d2b00(local_4e0 + 0x42,puVar28 + 1);
          piVar27[1] = (int)((longlong)(puVar28 + 1) + (-0x108 - (longlong)piVar27) >> 2);
          *piVar27 = ((int)pbVar31 - (int)piVar27) + -8;
          lVar17 = local_510;
          uVar12 = local_500;
          goto LAB_1455d2a7f;
        }
        FUN_144d94340();
        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
          pcVar25 = "OODLE ERROR : last too small\n";
          uVar22 = 0x34b;
          goto LAB_1455d2abe;
        }
      }
      else {
        FUN_144d94340();
        if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
          pcVar25 = "OODLE ERROR : corruption : ! seen[mps]\n";
          uVar22 = 0x342;
          goto LAB_1455d2abe;
        }
      }
    }
  }
LAB_1455d2ac9:
  FUN_144d94360();
LAB_1455d2ad0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_548);
}



// FUNCTION 1455d2b00 FUN_1455d2b00 body=70 status=ok
// SIG undefined FUN_1455d2b00(void)

void FUN_1455d2b00(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = param_1;
  if (param_1 != param_2) {
    while (puVar3 = puVar3 + 1, puVar3 != param_2) {
      uVar1 = *puVar3;
      puVar2 = puVar3;
      while (param_1 < puVar2) {
        if (puVar2[-1] <= uVar1) break;
        *puVar2 = puVar2[-1];
        puVar2 = puVar2 + -1;
      }
      *puVar2 = uVar1;
    }
  }
  return;
}



// FUNCTION 1455d2b60 FUN_1455d2b60 body=637 status=ok
// SIG undefined FUN_1455d2b60(void)

void FUN_1455d2b60(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  uint *puVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar12;
  uint uVar13;
  undefined1 auVar10 [16];
  uint uVar14;
  undefined1 auVar11 [16];
  int iVar15;
  int local_418 [4];
  uint local_408 [252];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)local_418;
  iVar15 = 0;
  uVar3 = (undefined4)(0x40000000 / (param_2 & 0xffffffff));
  lVar4 = param_1 - (longlong)local_408;
  auVar11._4_4_ = uVar3;
  auVar11._0_4_ = uVar3;
  auVar11._8_4_ = uVar3;
  auVar11._12_4_ = uVar3;
  lVar6 = 4;
  puVar7 = local_408;
  do {
    auVar10 = *(undefined1 (*) [16])(lVar4 + 0x10 + (longlong)puVar7);
    puVar1 = puVar7 + 0x40;
    auVar8 = pmulld(*(undefined1 (*) [16])(lVar4 + (longlong)puVar7),auVar11);
    puVar7[-4] = auVar8._0_4_ >> 0x11;
    puVar7[-3] = auVar8._4_4_ >> 0x11;
    puVar7[-2] = auVar8._8_4_ >> 0x11;
    puVar7[-1] = auVar8._12_4_ >> 0x11;
    auVar8 = *(undefined1 (*) [16])(lVar4 + -0xe0 + (longlong)puVar1);
    auVar10 = pmulld(auVar10,auVar11);
    *puVar7 = auVar10._0_4_ >> 0x11;
    puVar7[1] = auVar10._4_4_ >> 0x11;
    puVar7[2] = auVar10._8_4_ >> 0x11;
    puVar7[3] = auVar10._12_4_ >> 0x11;
    auVar10 = *(undefined1 (*) [16])(lVar4 + -0xd0 + (longlong)puVar1);
    auVar8 = pmulld(auVar8,auVar11);
    puVar7[4] = auVar8._0_4_ >> 0x11;
    puVar7[5] = auVar8._4_4_ >> 0x11;
    puVar7[6] = auVar8._8_4_ >> 0x11;
    puVar7[7] = auVar8._12_4_ >> 0x11;
    auVar8 = *(undefined1 (*) [16])(lVar4 + -0xc0 + (longlong)puVar1);
    auVar10 = pmulld(auVar10,auVar11);
    puVar7[8] = auVar10._0_4_ >> 0x11;
    puVar7[9] = auVar10._4_4_ >> 0x11;
    puVar7[10] = auVar10._8_4_ >> 0x11;
    puVar7[0xb] = auVar10._12_4_ >> 0x11;
    auVar10 = *(undefined1 (*) [16])(lVar4 + -0xb0 + (longlong)puVar1);
    auVar8 = pmulld(auVar8,auVar11);
    puVar7[0xc] = auVar8._0_4_ >> 0x11;
    puVar7[0xd] = auVar8._4_4_ >> 0x11;
    puVar7[0xe] = auVar8._8_4_ >> 0x11;
    puVar7[0xf] = auVar8._12_4_ >> 0x11;
    auVar8 = *(undefined1 (*) [16])(lVar4 + -0xa0 + (longlong)puVar1);
    auVar10 = pmulld(auVar10,auVar11);
    puVar7[0x10] = auVar10._0_4_ >> 0x11;
    puVar7[0x11] = auVar10._4_4_ >> 0x11;
    puVar7[0x12] = auVar10._8_4_ >> 0x11;
    puVar7[0x13] = auVar10._12_4_ >> 0x11;
    auVar10 = *(undefined1 (*) [16])(lVar4 + -0x90 + (longlong)puVar1);
    auVar8 = pmulld(auVar8,auVar11);
    puVar7[0x14] = auVar8._0_4_ >> 0x11;
    puVar7[0x15] = auVar8._4_4_ >> 0x11;
    puVar7[0x16] = auVar8._8_4_ >> 0x11;
    puVar7[0x17] = auVar8._12_4_ >> 0x11;
    auVar8 = *(undefined1 (*) [16])(lVar4 + -0x80 + (longlong)puVar1);
    auVar10 = pmulld(auVar10,auVar11);
    puVar7[0x18] = auVar10._0_4_ >> 0x11;
    puVar7[0x19] = auVar10._4_4_ >> 0x11;
    puVar7[0x1a] = auVar10._8_4_ >> 0x11;
    puVar7[0x1b] = auVar10._12_4_ >> 0x11;
    auVar10 = *(undefined1 (*) [16])(lVar4 + -0x70 + (longlong)puVar1);
    auVar8 = pmulld(auVar8,auVar11);
    puVar7[0x1c] = auVar8._0_4_ >> 0x11;
    puVar7[0x1d] = auVar8._4_4_ >> 0x11;
    puVar7[0x1e] = auVar8._8_4_ >> 0x11;
    puVar7[0x1f] = auVar8._12_4_ >> 0x11;
    auVar8 = *(undefined1 (*) [16])(lVar4 + -0x60 + (longlong)puVar1);
    auVar10 = pmulld(auVar10,auVar11);
    puVar7[0x20] = auVar10._0_4_ >> 0x11;
    puVar7[0x21] = auVar10._4_4_ >> 0x11;
    puVar7[0x22] = auVar10._8_4_ >> 0x11;
    puVar7[0x23] = auVar10._12_4_ >> 0x11;
    auVar10 = *(undefined1 (*) [16])(lVar4 + -0x50 + (longlong)puVar1);
    auVar8 = pmulld(auVar8,auVar11);
    puVar7[0x24] = auVar8._0_4_ >> 0x11;
    puVar7[0x25] = auVar8._4_4_ >> 0x11;
    puVar7[0x26] = auVar8._8_4_ >> 0x11;
    puVar7[0x27] = auVar8._12_4_ >> 0x11;
    auVar8 = *(undefined1 (*) [16])(lVar4 + -0x40 + (longlong)puVar1);
    auVar10 = pmulld(auVar10,auVar11);
    puVar7[0x28] = auVar10._0_4_ >> 0x11;
    puVar7[0x29] = auVar10._4_4_ >> 0x11;
    puVar7[0x2a] = auVar10._8_4_ >> 0x11;
    puVar7[0x2b] = auVar10._12_4_ >> 0x11;
    auVar10 = *(undefined1 (*) [16])(lVar4 + -0x30 + (longlong)puVar1);
    auVar8 = pmulld(auVar8,auVar11);
    puVar7[0x2c] = auVar8._0_4_ >> 0x11;
    puVar7[0x2d] = auVar8._4_4_ >> 0x11;
    puVar7[0x2e] = auVar8._8_4_ >> 0x11;
    puVar7[0x2f] = auVar8._12_4_ >> 0x11;
    auVar8 = *(undefined1 (*) [16])(lVar4 + -0x20 + (longlong)puVar1);
    auVar10 = pmulld(auVar10,auVar11);
    puVar7[0x30] = auVar10._0_4_ >> 0x11;
    puVar7[0x31] = auVar10._4_4_ >> 0x11;
    puVar7[0x32] = auVar10._8_4_ >> 0x11;
    puVar7[0x33] = auVar10._12_4_ >> 0x11;
    auVar10 = *(undefined1 (*) [16])(lVar4 + -0x10 + (longlong)puVar1);
    auVar8 = pmulld(auVar8,auVar11);
    puVar7[0x34] = auVar8._0_4_ >> 0x11;
    puVar7[0x35] = auVar8._4_4_ >> 0x11;
    puVar7[0x36] = auVar8._8_4_ >> 0x11;
    puVar7[0x37] = auVar8._12_4_ >> 0x11;
    auVar10 = pmulld(auVar10,auVar11);
    puVar7[0x38] = auVar10._0_4_ >> 0x11;
    puVar7[0x39] = auVar10._4_4_ >> 0x11;
    puVar7[0x3a] = auVar10._8_4_ >> 0x11;
    puVar7[0x3b] = auVar10._12_4_ >> 0x11;
    lVar6 = lVar6 + -1;
    puVar7 = puVar1;
  } while (lVar6 != 0);
  lVar4 = 0x40;
  piVar5 = local_418 + 3;
  do {
    iVar2 = *piVar5;
    uVar9 = *(uint *)(&DAT_149d5d1c0 + (longlong)piVar5[-3] * 4) >> 5;
    uVar12 = *(uint *)(&DAT_149d5d1c0 + (longlong)piVar5[-2] * 4) >> 5;
    uVar13 = *(uint *)(&DAT_149d5d1c0 + (longlong)piVar5[-1] * 4) >> 5;
    uVar14 = *(uint *)(&DAT_149d5d1c0 + (longlong)iVar2 * 4) >> 5;
    auVar10._0_4_ = (uint)(0xb00 < uVar9) * 0xb00 | (0xb00 >= uVar9) * uVar9;
    auVar10._4_4_ = (uint)(0xb00 < uVar12) * 0xb00 | (0xb00 >= uVar12) * uVar12;
    auVar10._8_4_ = (uint)(0xb00 < uVar13) * 0xb00 | (0xb00 >= uVar13) * uVar13;
    auVar10._12_4_ = (uint)(0xb00 < uVar14) * 0xb00 | (0xb00 >= uVar14) * uVar14;
    auVar11 = pmulld(auVar10,*(undefined1 (*) [16])
                              ((param_1 - (longlong)(local_418 + 3)) + -0x10 +
                              (longlong)(piVar5 + 4)));
    iVar15 = iVar15 + auVar11._0_4_;
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 4;
  } while (lVar4 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)local_418,(longlong)iVar2,iVar15);
}



// FUNCTION 1455d2df0 FUN_1455d2df0 body=97 status=ok
// SIG undefined FUN_1455d2df0(void)

void FUN_1455d2df0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_14c800930 == 0) {
    FUN_1455d33c0();
  }
  UNRECOVERED_JUMPTABLE = FUN_1455d3110;
  if ((DAT_14c800930 & 8) == 0) {
    UNRECOVERED_JUMPTABLE = FUN_1455d2e80;
  }
  PTR_FUN_14c746968 = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x0001455d2e4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 1455d2e60 FUN_1455d2e60 body=19 status=ok
// SIG undefined FUN_1455d2e60(void)

undefined8 FUN_1455d2e60(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001455d2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_FUN_14c746968)();
  return uVar1;
}



// FUNCTION 1455d2e80 FUN_1455d2e80 body=652 status=ok
// SIG undefined FUN_1455d2e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1455d2e80(uint param_1,undefined1 (*param_2) [16],longlong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [12];
  unkbyte10 Var5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [12];
  undefined1 *puVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar24 [16];
  short sVar31;
  short sVar38;
  undefined1 in_XMM3_Ba;
  undefined1 in_XMM3_Bb;
  undefined1 uVar45;
  undefined1 in_XMM3_Bc;
  undefined1 uVar46;
  undefined1 in_XMM3_Bd;
  undefined1 uVar47;
  undefined1 in_XMM3_Be;
  undefined1 uVar48;
  undefined1 in_XMM3_Bf;
  undefined1 uVar49;
  undefined1 in_XMM3_Bg;
  undefined1 uVar50;
  undefined1 in_XMM3_Bh;
  undefined1 uVar51;
  undefined1 in_XMM3_Bi;
  undefined1 uVar52;
  undefined1 in_XMM3_Bj;
  undefined1 uVar53;
  undefined1 in_XMM3_Bk;
  undefined1 uVar54;
  undefined1 in_XMM3_Bl;
  undefined1 uVar55;
  undefined1 in_XMM3_Bm;
  undefined1 uVar56;
  undefined1 in_XMM3_Bn;
  undefined1 uVar57;
  undefined1 in_XMM3_Bo;
  undefined1 uVar58;
  undefined1 in_XMM3_Bp;
  undefined1 uVar59;
  int iVar61;
  int iVar62;
  int iVar63;
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar18 [16];
  undefined1 auVar25 [16];
  undefined1 auVar19 [16];
  undefined1 auVar26 [16];
  undefined1 auVar20 [16];
  undefined1 auVar27 [16];
  undefined1 auVar21 [16];
  undefined1 auVar28 [16];
  undefined1 auVar22 [16];
  undefined1 auVar29 [16];
  undefined1 auVar23 [16];
  undefined1 auVar30 [16];
  undefined4 uVar32;
  undefined6 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [12];
  undefined1 auVar36 [14];
  undefined1 auVar37 [16];
  undefined4 uVar39;
  undefined6 uVar40;
  undefined8 uVar41;
  undefined1 auVar42 [12];
  undefined1 auVar43 [14];
  undefined1 auVar44 [16];
  
  uVar14 = param_1 >> 0x10;
  pauVar13 = (undefined1 (*) [16])(*param_2 + param_3);
  param_1 = param_1 & 0xffff;
  if ((param_2 != pauVar13) && (((ulonglong)param_2 & 0xf) != 0)) {
    do {
      puVar8 = *param_2;
      param_2 = (undefined1 (*) [16])(*param_2 + 1);
      param_1 = param_1 + (byte)*puVar8;
      uVar14 = uVar14 + param_1;
      if (param_2 == pauVar13) break;
    } while (((ulonglong)param_2 & 0xf) != 0);
    param_1 = param_1 % 0xfff1;
    uVar14 = uVar14 % 0xfff1;
  }
  pauVar12 = (undefined1 (*) [16])
             ((longlong)pauVar13 - (ulonglong)((int)pauVar13 - (int)param_2 & 0x1f));
  if (param_2 != pauVar12) {
    uVar1 = CONCAT13(in_XMM3_Bd,CONCAT12(in_XMM3_Bc,CONCAT11(in_XMM3_Bb,in_XMM3_Ba))) ^
            CONCAT13(in_XMM3_Bd,CONCAT12(in_XMM3_Bc,CONCAT11(in_XMM3_Bb,in_XMM3_Ba)));
    uVar45 = (undefined1)(uVar1 >> 8);
    uVar46 = (undefined1)(uVar1 >> 0x10);
    uVar47 = (undefined1)(uVar1 >> 0x18);
    uVar2 = CONCAT13(in_XMM3_Bh,CONCAT12(in_XMM3_Bg,CONCAT11(in_XMM3_Bf,in_XMM3_Be))) ^
            CONCAT13(in_XMM3_Bh,CONCAT12(in_XMM3_Bg,CONCAT11(in_XMM3_Bf,in_XMM3_Be)));
    uVar48 = (undefined1)uVar2;
    uVar49 = (undefined1)(uVar2 >> 8);
    uVar50 = (undefined1)(uVar2 >> 0x10);
    uVar51 = (undefined1)(uVar2 >> 0x18);
    uVar2 = CONCAT13(in_XMM3_Bl,CONCAT12(in_XMM3_Bk,CONCAT11(in_XMM3_Bj,in_XMM3_Bi))) ^
            CONCAT13(in_XMM3_Bl,CONCAT12(in_XMM3_Bk,CONCAT11(in_XMM3_Bj,in_XMM3_Bi)));
    uVar52 = (undefined1)uVar2;
    uVar53 = (undefined1)(uVar2 >> 8);
    uVar54 = (undefined1)(uVar2 >> 0x10);
    uVar55 = (undefined1)(uVar2 >> 0x18);
    uVar2 = CONCAT13(in_XMM3_Bp,CONCAT12(in_XMM3_Bo,CONCAT11(in_XMM3_Bn,in_XMM3_Bm))) ^
            CONCAT13(in_XMM3_Bp,CONCAT12(in_XMM3_Bo,CONCAT11(in_XMM3_Bn,in_XMM3_Bm)));
    uVar56 = (undefined1)uVar2;
    uVar57 = (undefined1)(uVar2 >> 8);
    uVar58 = (undefined1)(uVar2 >> 0x10);
    uVar59 = (undefined1)(uVar2 >> 0x18);
    pauVar10 = param_2;
    do {
      auVar60[4] = uVar48;
      auVar60._0_4_ = uVar1;
      auVar60[5] = uVar49;
      auVar60[6] = uVar50;
      auVar60[7] = uVar51;
      auVar60[8] = uVar52;
      auVar60[9] = uVar53;
      auVar60[10] = uVar54;
      auVar60[0xb] = uVar55;
      auVar60[0xc] = uVar56;
      auVar60[0xd] = uVar57;
      auVar60[0xe] = uVar58;
      auVar60[0xf] = uVar59;
      auVar66[4] = uVar48;
      auVar66._0_4_ = uVar1;
      auVar66[5] = uVar49;
      auVar66[6] = uVar50;
      auVar66[7] = uVar51;
      auVar66[8] = uVar52;
      auVar66[9] = uVar53;
      auVar66[10] = uVar54;
      auVar66[0xb] = uVar55;
      auVar66[0xc] = uVar56;
      auVar66[0xd] = uVar57;
      auVar66[0xe] = uVar58;
      auVar66[0xf] = uVar59;
      auVar68[4] = uVar48;
      auVar68._0_4_ = uVar1;
      auVar68[5] = uVar49;
      auVar68[6] = uVar50;
      auVar68[7] = uVar51;
      auVar68[8] = uVar52;
      auVar68[9] = uVar53;
      auVar68[10] = uVar54;
      auVar68[0xb] = uVar55;
      auVar68[0xc] = uVar56;
      auVar68[0xd] = uVar57;
      auVar68[0xe] = uVar58;
      auVar68[0xf] = uVar59;
      auVar70[4] = uVar48;
      auVar70._0_4_ = uVar1;
      auVar70[5] = uVar49;
      auVar70[6] = uVar50;
      auVar70[7] = uVar51;
      auVar70[8] = uVar52;
      auVar70[9] = uVar53;
      auVar70[10] = uVar54;
      auVar70[0xb] = uVar55;
      auVar70[0xc] = uVar56;
      auVar70[0xd] = uVar57;
      auVar70[0xe] = uVar58;
      auVar70[0xf] = uVar59;
      uVar11 = 0x1000;
      if ((ulonglong)((longlong)pauVar12 - (longlong)pauVar10) < 0x1001) {
        uVar11 = (longlong)pauVar12 - (longlong)pauVar10;
      }
      auVar73[4] = uVar48;
      auVar73._0_4_ = uVar1;
      auVar73[5] = uVar49;
      auVar73[6] = uVar50;
      auVar73[7] = uVar51;
      auVar73[8] = uVar52;
      auVar73[9] = uVar53;
      auVar73[10] = uVar54;
      auVar73[0xb] = uVar55;
      auVar73[0xc] = uVar56;
      auVar73[0xd] = uVar57;
      auVar73[0xe] = uVar58;
      auVar73[0xf] = uVar59;
      auVar71[4] = uVar48;
      auVar71._0_4_ = uVar1;
      auVar71[5] = uVar49;
      auVar71[6] = uVar50;
      auVar71[7] = uVar51;
      auVar71[8] = uVar52;
      auVar71[9] = uVar53;
      auVar71[10] = uVar54;
      auVar71[0xb] = uVar55;
      auVar71[0xc] = uVar56;
      auVar71[0xd] = uVar57;
      auVar71[0xe] = uVar58;
      auVar71[0xf] = uVar59;
      iVar9 = (int)uVar11 * param_1;
      param_2 = (undefined1 (*) [16])(*pauVar10 + uVar11);
      do {
        auVar24 = *pauVar10;
        auVar64._0_4_ = auVar66._0_4_ + auVar60._0_4_;
        iVar61 = auVar60._4_4_;
        auVar64._4_4_ = auVar66._4_4_ + iVar61;
        iVar62 = auVar60._8_4_;
        auVar64._8_4_ = auVar66._8_4_ + iVar62;
        iVar63 = auVar60._12_4_;
        auVar64._12_4_ = auVar66._12_4_ + iVar63;
        auVar66 = pauVar10[1];
        auVar15[4] = uVar48;
        auVar15._0_4_ = uVar1;
        auVar15[5] = uVar49;
        auVar15[6] = uVar50;
        auVar15[7] = uVar51;
        auVar15[8] = uVar52;
        auVar15[9] = uVar53;
        auVar15[10] = uVar54;
        auVar15[0xb] = uVar55;
        auVar15[0xc] = uVar56;
        auVar15[0xd] = uVar57;
        auVar15[0xe] = uVar58;
        auVar15[0xf] = uVar59;
        auVar15 = psadbw(auVar24,auVar15);
        pauVar10 = pauVar10 + 2;
        auVar16[4] = uVar48;
        auVar16._0_4_ = uVar1;
        auVar16[5] = uVar49;
        auVar16[6] = uVar50;
        auVar16[7] = uVar51;
        auVar16[8] = uVar52;
        auVar16[9] = uVar53;
        auVar16[10] = uVar54;
        auVar16[0xb] = uVar55;
        auVar16[0xc] = uVar56;
        auVar16[0xd] = uVar57;
        auVar16[0xe] = uVar58;
        auVar16[0xf] = uVar59;
        auVar16 = psadbw(auVar66,auVar16);
        auVar60._0_4_ = auVar60._0_4_ + auVar15._0_4_ + auVar16._0_4_;
        auVar60._4_4_ = iVar61 + auVar15._4_4_ + auVar16._4_4_;
        auVar60._8_4_ = iVar62 + auVar15._8_4_ + auVar16._8_4_;
        auVar60._12_4_ = iVar63 + auVar15._12_4_ + auVar16._12_4_;
        auVar23._0_14_ = auVar24._0_14_;
        auVar23[0xe] = auVar24[7];
        auVar23[0xf] = uVar51;
        auVar22._14_2_ = auVar23._14_2_;
        auVar22._0_13_ = auVar24._0_13_;
        auVar22[0xd] = uVar50;
        auVar21._13_3_ = auVar22._13_3_;
        auVar21._0_12_ = auVar24._0_12_;
        auVar21[0xc] = auVar24[6];
        auVar20._12_4_ = auVar21._12_4_;
        auVar20._0_11_ = auVar24._0_11_;
        auVar20[0xb] = uVar49;
        auVar19._11_5_ = auVar20._11_5_;
        auVar19._0_10_ = auVar24._0_10_;
        auVar19[10] = auVar24[5];
        auVar18._10_6_ = auVar19._10_6_;
        auVar18._0_9_ = auVar24._0_9_;
        auVar18[9] = uVar48;
        auVar17._9_7_ = auVar18._9_7_;
        auVar17._0_8_ = auVar24._0_8_;
        auVar17[8] = auVar24[4];
        Var5 = CONCAT91(CONCAT81(auVar17._8_8_,uVar47),auVar24[3]);
        auVar4._2_10_ = Var5;
        auVar4[1] = uVar46;
        auVar4[0] = auVar24[2];
        auVar3._2_12_ = auVar4;
        auVar3[1] = uVar45;
        auVar3[0] = auVar24[1];
        sVar31 = CONCAT11(uVar52,auVar24[8]);
        uVar32 = CONCAT13(uVar53,CONCAT12(auVar24[9],sVar31));
        uVar33 = CONCAT15(uVar54,CONCAT14(auVar24[10],uVar32));
        uVar34 = CONCAT17(uVar55,CONCAT16(auVar24[0xb],uVar33));
        auVar35._0_10_ = CONCAT19(uVar56,CONCAT18(auVar24[0xc],uVar34));
        auVar35[10] = auVar24[0xd];
        auVar35[0xb] = uVar57;
        auVar36[0xc] = auVar24[0xe];
        auVar36._0_12_ = auVar35;
        auVar36[0xd] = uVar58;
        auVar37[0xe] = auVar24[0xf];
        auVar37._0_14_ = auVar36;
        auVar37[0xf] = uVar59;
        auVar65._0_2_ = auVar68._0_2_ + CONCAT11((char)uVar1,auVar24[0]);
        auVar65._2_2_ = auVar68._2_2_ + auVar3._0_2_;
        auVar65._4_2_ = auVar68._4_2_ + auVar4._0_2_;
        auVar65._6_2_ = auVar68._6_2_ + (short)Var5;
        auVar65._8_2_ = auVar68._8_2_ + auVar17._8_2_;
        auVar65._10_2_ = auVar68._10_2_ + auVar19._10_2_;
        auVar65._12_2_ = auVar68._12_2_ + auVar21._12_2_;
        auVar65._14_2_ = auVar68._14_2_ + auVar22._14_2_;
        sVar38 = CONCAT11(uVar52,auVar66[8]);
        uVar39 = CONCAT13(uVar53,CONCAT12(auVar66[9],sVar38));
        uVar40 = CONCAT15(uVar54,CONCAT14(auVar66[10],uVar39));
        uVar41 = CONCAT17(uVar55,CONCAT16(auVar66[0xb],uVar40));
        auVar42._0_10_ = CONCAT19(uVar56,CONCAT18(auVar66[0xc],uVar41));
        auVar42[10] = auVar66[0xd];
        auVar42[0xb] = uVar57;
        auVar43[0xc] = auVar66[0xe];
        auVar43._0_12_ = auVar42;
        auVar43[0xd] = uVar58;
        auVar44[0xe] = auVar66[0xf];
        auVar44._0_14_ = auVar43;
        auVar44[0xf] = uVar59;
        auVar30._0_14_ = auVar66._0_14_;
        auVar30[0xe] = auVar66[7];
        auVar30[0xf] = uVar51;
        auVar29._14_2_ = auVar30._14_2_;
        auVar29._0_13_ = auVar66._0_13_;
        auVar29[0xd] = uVar50;
        auVar28._13_3_ = auVar29._13_3_;
        auVar28._0_12_ = auVar66._0_12_;
        auVar28[0xc] = auVar66[6];
        auVar27._12_4_ = auVar28._12_4_;
        auVar27._0_11_ = auVar66._0_11_;
        auVar27[0xb] = uVar49;
        auVar26._11_5_ = auVar27._11_5_;
        auVar26._0_10_ = auVar66._0_10_;
        auVar26[10] = auVar66[5];
        auVar25._10_6_ = auVar26._10_6_;
        auVar25._0_9_ = auVar66._0_9_;
        auVar25[9] = uVar48;
        auVar24._9_7_ = auVar25._9_7_;
        auVar24._0_8_ = auVar66._0_8_;
        auVar24[8] = auVar66[4];
        Var5 = CONCAT91(CONCAT81(auVar24._8_8_,uVar47),auVar66[3]);
        auVar7._2_10_ = Var5;
        auVar7[1] = uVar46;
        auVar7[0] = auVar66[2];
        auVar6._2_12_ = auVar7;
        auVar6[1] = uVar45;
        auVar6[0] = auVar66[1];
        auVar67._0_2_ = auVar70._0_2_ + sVar31;
        auVar67._2_2_ = auVar70._2_2_ + (short)((uint)uVar32 >> 0x10);
        auVar67._4_2_ = auVar70._4_2_ + (short)((uint6)uVar33 >> 0x20);
        auVar67._6_2_ = auVar70._6_2_ + (short)((ulonglong)uVar34 >> 0x30);
        auVar67._8_2_ = auVar70._8_2_ + (short)((unkuint10)auVar35._0_10_ >> 0x40);
        auVar67._10_2_ = auVar70._10_2_ + auVar35._10_2_;
        auVar67._12_2_ = auVar70._12_2_ + auVar36._12_2_;
        auVar67._14_2_ = auVar70._14_2_ + auVar37._14_2_;
        auVar69._0_2_ = auVar73._0_2_ + CONCAT11((char)uVar1,auVar66[0]);
        auVar69._2_2_ = auVar73._2_2_ + auVar6._0_2_;
        auVar69._4_2_ = auVar73._4_2_ + auVar7._0_2_;
        auVar69._6_2_ = auVar73._6_2_ + (short)Var5;
        auVar69._8_2_ = auVar73._8_2_ + auVar24._8_2_;
        auVar69._10_2_ = auVar73._10_2_ + auVar26._10_2_;
        auVar69._12_2_ = auVar73._12_2_ + auVar28._12_2_;
        auVar69._14_2_ = auVar73._14_2_ + auVar29._14_2_;
        auVar72._0_2_ = auVar71._0_2_ + sVar38;
        auVar72._2_2_ = auVar71._2_2_ + (short)((uint)uVar39 >> 0x10);
        auVar72._4_2_ = auVar71._4_2_ + (short)((uint6)uVar40 >> 0x20);
        auVar72._6_2_ = auVar71._6_2_ + (short)((ulonglong)uVar41 >> 0x30);
        auVar72._8_2_ = auVar71._8_2_ + (short)((unkuint10)auVar42._0_10_ >> 0x40);
        auVar72._10_2_ = auVar71._10_2_ + auVar42._10_2_;
        auVar72._12_2_ = auVar71._12_2_ + auVar43._12_2_;
        auVar72._14_2_ = auVar71._14_2_ + auVar44._14_2_;
        auVar66 = auVar64;
        auVar68 = auVar65;
        auVar70 = auVar67;
        auVar73 = auVar69;
        auVar71 = auVar72;
      } while (pauVar10 != param_2);
      auVar66 = pmaddwd(auVar65,_DAT_149db2550);
      auVar68 = pmaddwd(auVar67,_DAT_149db2540);
      auVar70 = pmaddwd(auVar69,_DAT_149db2530);
      auVar73 = pmaddwd(auVar72,_DAT_149db2520);
      param_1 = (param_1 + auVar60._8_4_ + auVar60._0_4_) % 0xfff1;
      uVar14 = (uVar14 + iVar9 +
               auVar66._12_4_ + auVar64._12_4_ * 0x20 + auVar68._12_4_ + auVar70._12_4_ +
               auVar73._12_4_ +
               auVar66._8_4_ + auVar64._8_4_ * 0x20 + auVar68._8_4_ + auVar70._8_4_ + auVar73._8_4_
               + auVar66._4_4_ + auVar64._4_4_ * 0x20 + auVar68._4_4_ + auVar70._4_4_ +
                 auVar73._4_4_ +
                 auVar66._0_4_ + auVar64._0_4_ * 0x20 + auVar68._0_4_ + auVar70._0_4_ +
                 auVar73._0_4_) % 0xfff1;
      pauVar10 = param_2;
    } while (param_2 != pauVar12);
  }
  if (param_2 != pauVar13) {
    do {
      puVar8 = *param_2;
      param_2 = (undefined1 (*) [16])(*param_2 + 1);
      param_1 = param_1 + (byte)*puVar8;
      uVar14 = uVar14 + param_1;
    } while (param_2 != pauVar13);
    param_1 = param_1 % 0xfff1;
    uVar14 = uVar14 % 0xfff1;
  }
  return uVar14 << 0x10 | param_1;
}



// FUNCTION 1455d3110 FUN_1455d3110 body=684 status=ok
// SIG undefined FUN_1455d3110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1455d3110(uint param_1,undefined1 (*param_2) [32],longlong param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 *puVar14;
  int iVar15;
  undefined1 (*pauVar16) [32];
  ulonglong uVar17;
  undefined1 (*pauVar18) [32];
  undefined1 (*pauVar19) [32];
  uint uVar20;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  
  uVar20 = param_1 >> 0x10;
  pauVar19 = (undefined1 (*) [32])(*param_2 + param_3);
  param_1 = param_1 & 0xffff;
  if ((param_2 != pauVar19) && (((ulonglong)param_2 & 0x1f) != 0)) {
    do {
      puVar14 = *param_2;
      param_2 = (undefined1 (*) [32])(*param_2 + 1);
      param_1 = param_1 + (byte)*puVar14;
      uVar20 = uVar20 + param_1;
      if (param_2 == pauVar19) break;
    } while (((ulonglong)param_2 & 0x1f) != 0);
    param_1 = param_1 % 0xfff1;
    uVar20 = uVar20 % 0xfff1;
  }
  pauVar18 = (undefined1 (*) [32])
             ((longlong)pauVar19 - (ulonglong)((int)pauVar19 - (int)param_2 & 0x3f));
  if (param_2 != pauVar18) {
    pauVar16 = param_2;
    do {
      auVar22 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      uVar17 = 0x1580;
      if ((ulonglong)((longlong)pauVar18 - (longlong)pauVar16) < 0x1581) {
        uVar17 = (longlong)pauVar18 - (longlong)pauVar16;
      }
      iVar15 = (int)uVar17 * param_1;
      param_2 = (undefined1 (*) [32])(*pauVar16 + uVar17);
      auVar21 = auVar22;
      auVar10 = auVar22;
      auVar7 = auVar22;
      auVar6 = auVar22;
      auVar9 = auVar22;
      auVar8 = auVar22;
      do {
        auVar1 = *pauVar16;
        auVar2 = pauVar16[1];
        auVar11 = vpsadbw_avx2(auVar1,auVar22);
        auVar11 = vpaddd_avx2(auVar11,auVar10);
        auVar13 = vpunpcklbw_avx2(auVar1,auVar22);
        auVar12 = vpsadbw_avx2(auVar2,auVar22);
        auVar21 = vpaddd_avx2(auVar21,auVar10);
        auVar10 = vpaddd_avx2(auVar11,auVar12);
        auVar1 = vpunpckhbw_avx2(auVar1,auVar22);
        auVar6 = vpaddw_avx2(auVar1,auVar6);
        pauVar16 = pauVar16 + 2;
        auVar7 = vpaddw_avx2(auVar13,auVar7);
        auVar1 = vpunpckhbw_avx2(auVar2,auVar22);
        auVar2 = vpunpcklbw_avx2(auVar2,auVar22);
        auVar8 = vpaddw_avx2(auVar1,auVar8);
        auVar9 = vpaddw_avx2(auVar2,auVar9);
      } while (pauVar16 != param_2);
      auVar21 = vpslld_avx2(auVar21,6);
      auVar22 = vpmaddwd_avx2(auVar7,_DAT_149db25c0);
      auVar22 = vpaddd_avx2(auVar22,auVar21);
      auVar6 = vpmaddwd_avx2(auVar6,_DAT_149db25a0);
      auVar22 = vpaddd_avx2(auVar22,auVar6);
      auVar6 = vpmaddwd_avx2(auVar9,_DAT_149db2580);
      auVar22 = vpaddd_avx2(auVar22,auVar6);
      auVar6 = vpmaddwd_avx2(auVar8,_DAT_149db2560);
      auVar22 = vpaddd_avx2(auVar22,auVar6);
      auVar3 = vpaddd_avx(auVar22._16_16_,auVar22._0_16_);
      auVar4 = vpshufd_avx(auVar3,0x31);
      auVar3 = vpaddd_avx(auVar4,auVar3);
      auVar4 = vpaddd_avx(auVar10._16_16_,auVar10._0_16_);
      auVar5 = vpshufd_avx(auVar4,2);
      auVar4 = vpaddd_avx(auVar5,auVar4);
      auVar5 = vpshufd_avx(auVar3,2);
      auVar3 = vpaddd_avx(auVar5,auVar3);
      param_1 = (param_1 + auVar4._0_4_) % 0xfff1;
      uVar20 = (uVar20 + iVar15 + auVar3._0_4_) % 0xfff1;
      pauVar16 = param_2;
    } while (param_2 != pauVar18);
  }
  if (param_2 != pauVar19) {
    do {
      puVar14 = *param_2;
      param_2 = (undefined1 (*) [32])(*param_2 + 1);
      param_1 = param_1 + (byte)*puVar14;
      uVar20 = uVar20 + param_1;
    } while (param_2 != pauVar19);
    param_1 = param_1 % 0xfff1;
    uVar20 = uVar20 % 0xfff1;
  }
  return uVar20 << 0x10 | param_1;
}



// FUNCTION 1455d33c0 FUN_1455d33c0 body=210 status=ok
// SIG undefined FUN_1455d33c0(void)

/* WARNING: Removing unreachable block (ram,0x0001455d3456) */
/* WARNING: Removing unreachable block (ram,0x0001455d33f4) */
/* WARNING: Removing unreachable block (ram,0x0001455d33ca) */

void FUN_1455d33c0(void)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  byte in_XCR0;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar6 = 0;
  bVar7 = false;
  if (*puVar1 != 0) {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar2 + 0xc);
    uVar5 = *(uint *)(lVar2 + 8) >> 0x1a & 1;
    uVar6 = uVar5 | 2;
    if ((uVar3 & 2) == 0) {
      uVar6 = uVar5;
    }
    if ((uVar3 >> 0x1b & 1) != 0) {
      uVar4 = xinuse(0);
      bVar7 = (in_XCR0 & (byte)uVar4 & 6) == 6;
    }
    if ((bVar7) && ((uVar3 >> 0x1c & 1) != 0)) {
      uVar6 = uVar6 | 4;
    }
    if (6 < *puVar1) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      if ((bVar7) && ((*(uint *)(lVar2 + 4) & 0x20) != 0)) {
        uVar6 = uVar6 | 8;
      }
      if ((*(uint *)(lVar2 + 4) >> 8 & 1) != 0) {
        uVar6 = uVar6 | 0x10;
      }
    }
  }
  DAT_14c800930 = uVar6 | 0x80000000;
  return;
}



// FUNCTION 1455d34a0 FUN_1455d34a0 body=1423 status=ok
// SIG undefined FUN_1455d34a0(void)

void FUN_1455d34a0(longlong param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  
  lVar11 = 4;
  lVar12 = 4;
  psVar1 = (short *)(param_1 + 4);
  do {
    iVar6 = (int)psVar1[-2] + (int)psVar1[5];
    iVar13 = (int)psVar1[-2] - (int)psVar1[5];
    iVar7 = (int)psVar1[-1] + (int)psVar1[4];
    iVar4 = (int)psVar1[-1] - (int)psVar1[4];
    iVar2 = (int)psVar1[3] + (int)*psVar1;
    iVar5 = (int)*psVar1 - (int)psVar1[3];
    sVar8 = (short)iVar7 + (short)iVar2;
    iVar7 = iVar7 - iVar2;
    iVar2 = (int)psVar1[1] + (int)psVar1[2];
    iVar3 = (int)psVar1[1] - (int)psVar1[2];
    sVar9 = (short)iVar6 + (short)iVar2;
    iVar6 = iVar6 - iVar2;
    psVar1[-2] = (sVar9 + sVar8) * 4;
    iVar2 = (iVar7 + iVar6) * 0x1151;
    psVar1[2] = (sVar9 - sVar8) * 4;
    *psVar1 = (short)(iVar6 * 0x187e + 0x400 + iVar2 >> 0xb);
    psVar1[4] = (short)(iVar2 + iVar7 * -0x3b21 + 0x400 >> 0xb);
    iVar10 = (iVar5 + iVar13 + iVar3 + iVar4) * 0x25a1;
    iVar2 = (iVar3 + iVar13) * -0x1ccd;
    iVar7 = (iVar5 + iVar4) * -0x5203;
    iVar6 = iVar10 + (iVar3 + iVar4) * -0x3ec5;
    psVar1[5] = (short)(iVar3 * 0x98e + 0x400 + iVar6 + iVar2 >> 0xb);
    iVar10 = iVar10 + (iVar5 + iVar13) * -0xc7c;
    psVar1[3] = (short)(iVar5 * 0x41b3 + 0x400 + iVar10 + iVar7 >> 0xb);
    psVar1[1] = (short)(iVar7 + 0x400 + iVar4 * 0x6254 + iVar6 >> 0xb);
    psVar1[-1] = (short)(iVar2 + 0x400 + iVar13 * 0x300b + iVar10 >> 0xb);
    iVar6 = (int)psVar1[6] + (int)psVar1[0xd];
    iVar13 = (int)psVar1[6] - (int)psVar1[0xd];
    iVar7 = (int)psVar1[7] + (int)psVar1[0xc];
    iVar4 = (int)psVar1[7] - (int)psVar1[0xc];
    iVar2 = (int)psVar1[8] + (int)psVar1[0xb];
    iVar5 = (int)psVar1[8] - (int)psVar1[0xb];
    sVar8 = (short)iVar7 + (short)iVar2;
    iVar7 = iVar7 - iVar2;
    iVar2 = (int)psVar1[9] + (int)psVar1[10];
    iVar3 = (int)psVar1[9] - (int)psVar1[10];
    sVar9 = (short)iVar6 + (short)iVar2;
    iVar6 = iVar6 - iVar2;
    psVar1[6] = (sVar9 + sVar8) * 4;
    iVar2 = (iVar7 + iVar6) * 0x1151;
    psVar1[10] = (sVar9 - sVar8) * 4;
    psVar1[8] = (short)(iVar6 * 0x187e + 0x400 + iVar2 >> 0xb);
    psVar1[0xc] = (short)(iVar2 + iVar7 * -0x3b21 + 0x400 >> 0xb);
    iVar10 = (iVar5 + iVar13 + iVar3 + iVar4) * 0x25a1;
    iVar2 = (iVar3 + iVar13) * -0x1ccd;
    iVar7 = (iVar5 + iVar4) * -0x5203;
    iVar6 = iVar10 + (iVar3 + iVar4) * -0x3ec5;
    psVar1[0xd] = (short)(iVar3 * 0x98e + 0x400 + iVar6 + iVar2 >> 0xb);
    iVar10 = iVar10 + (iVar5 + iVar13) * -0xc7c;
    psVar1[0xb] = (short)(iVar5 * 0x41b3 + 0x400 + iVar10 + iVar7 >> 0xb);
    psVar1[9] = (short)(iVar4 * 0x6254 + 0x400 + iVar6 + iVar7 >> 0xb);
    psVar1[7] = (short)(iVar2 + 0x400 + iVar13 * 0x300b + iVar10 >> 0xb);
    lVar12 = lVar12 + -1;
    psVar1 = psVar1 + 0x10;
  } while (lVar12 != 0);
  psVar1 = (short *)(param_1 + 0x20);
  do {
    iVar6 = (int)psVar1[-0x10] + (int)psVar1[0x28];
    iVar14 = (int)psVar1[-0x10] - (int)psVar1[0x28];
    iVar7 = (int)psVar1[-8] + (int)psVar1[0x20];
    iVar13 = (int)psVar1[-8] - (int)psVar1[0x20];
    iVar2 = (int)psVar1[0x18] + (int)*psVar1;
    iVar4 = (int)*psVar1 - (int)psVar1[0x18];
    iVar3 = (int)psVar1[8] + (int)psVar1[0x10];
    iVar5 = (int)psVar1[8] - (int)psVar1[0x10];
    iVar10 = iVar3 + iVar6;
    iVar6 = iVar6 - iVar3;
    iVar3 = iVar2 + iVar7;
    iVar7 = iVar7 - iVar2;
    psVar1[-0x10] = (short)(iVar10 + 2 + iVar3 >> 2);
    psVar1[0x10] = (short)((iVar10 - iVar3) + 2 >> 2);
    iVar2 = (iVar7 + iVar6) * 0x1151;
    *psVar1 = (short)(iVar6 * 0x187e + 0x4000 + iVar2 >> 0xf);
    psVar1[0x20] = (short)(iVar2 + iVar7 * -0x3b21 + 0x4000 >> 0xf);
    iVar6 = (iVar4 + iVar14 + iVar5 + iVar13) * 0x25a1;
    iVar3 = (iVar5 + iVar14) * -0x1ccd;
    iVar2 = (iVar4 + iVar13) * -0x5203;
    iVar7 = iVar6 + (iVar5 + iVar13) * -0x3ec5;
    psVar1[0x28] = (short)(iVar5 * 0x98e + 0x4000 + iVar7 + iVar3 >> 0xf);
    iVar6 = iVar6 + (iVar4 + iVar14) * -0xc7c;
    psVar1[0x18] = (short)(iVar4 * 0x41b3 + 0x4000 + iVar6 + iVar2 >> 0xf);
    psVar1[8] = (short)(iVar2 + 0x4000 + iVar13 * 0x6254 + iVar7 >> 0xf);
    psVar1[-8] = (short)(iVar3 + 0x4000 + iVar14 * 0x300b + iVar6 >> 0xf);
    iVar6 = (int)psVar1[-0xf] + (int)psVar1[0x29];
    iVar14 = (int)psVar1[-0xf] - (int)psVar1[0x29];
    iVar7 = (int)psVar1[-7] + (int)psVar1[0x21];
    iVar13 = (int)psVar1[-7] - (int)psVar1[0x21];
    iVar2 = (int)psVar1[1] + (int)psVar1[0x19];
    iVar4 = (int)psVar1[1] - (int)psVar1[0x19];
    iVar3 = (int)psVar1[9] + (int)psVar1[0x11];
    iVar5 = (int)psVar1[9] - (int)psVar1[0x11];
    iVar10 = iVar3 + iVar6;
    iVar6 = iVar6 - iVar3;
    iVar3 = iVar2 + iVar7;
    iVar7 = iVar7 - iVar2;
    psVar1[-0xf] = (short)(iVar10 + 2 + iVar3 >> 2);
    psVar1[0x11] = (short)((iVar10 - iVar3) + 2 >> 2);
    iVar2 = (iVar7 + iVar6) * 0x1151;
    psVar1[1] = (short)(iVar6 * 0x187e + 0x4000 + iVar2 >> 0xf);
    psVar1[0x21] = (short)(iVar2 + iVar7 * -0x3b21 + 0x4000 >> 0xf);
    iVar6 = (iVar4 + iVar14 + iVar5 + iVar13) * 0x25a1;
    iVar3 = (iVar5 + iVar14) * -0x1ccd;
    iVar2 = (iVar4 + iVar13) * -0x5203;
    iVar7 = iVar6 + (iVar5 + iVar13) * -0x3ec5;
    psVar1[0x29] = (short)(iVar5 * 0x98e + 0x4000 + iVar7 + iVar3 >> 0xf);
    iVar6 = iVar6 + (iVar4 + iVar14) * -0xc7c;
    psVar1[0x19] = (short)(iVar4 * 0x41b3 + 0x4000 + iVar6 + iVar2 >> 0xf);
    psVar1[9] = (short)(iVar13 * 0x6254 + 0x4000 + iVar7 + iVar2 >> 0xf);
    psVar1[-7] = (short)(iVar3 + 0x4000 + iVar14 * 0x300b + iVar6 >> 0xf);
    lVar11 = lVar11 + -1;
    psVar1 = psVar1 + 2;
  } while (lVar11 != 0);
  return;
}



// FUNCTION 1455d3a30 FUN_1455d3a30 body=2065 status=ok
// SIG undefined FUN_1455d3a30(void)

void FUN_1455d3a30(longlong param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar13 = 2;
  psVar4 = (short *)(param_1 + 4);
  lVar14 = 2;
  do {
    sVar3 = psVar4[2];
    sVar6 = psVar4[5] + psVar4[-2];
    sVar7 = psVar4[-2] - psVar4[5];
    sVar1 = psVar4[4] + psVar4[-1];
    sVar8 = psVar4[-1] - psVar4[4];
    sVar12 = psVar4[3] + *psVar4;
    sVar9 = *psVar4 - psVar4[3];
    sVar11 = sVar3 + psVar4[1];
    sVar2 = sVar6 + sVar11;
    sVar6 = sVar6 - sVar11;
    sVar11 = sVar1 + sVar12;
    psVar4[-2] = sVar2 + sVar11;
    psVar4[2] = sVar2 - sVar11;
    iVar5 = (int)(short)((psVar4[1] - sVar3) + sVar9);
    sVar1 = (short)((uint)(((int)(short)(sVar1 - sVar12) + (int)sVar6) * 0xb5) >> 8);
    *psVar4 = sVar6 + sVar1;
    iVar10 = (int)(short)(sVar8 + sVar7);
    sVar12 = (short)((uint)((iVar5 - iVar10) * 0x62) >> 8);
    sVar11 = (short)((uint)(iVar5 * 0x8b) >> 8) + sVar12;
    sVar12 = (short)((uint)(iVar10 * 0x14e) >> 8) + sVar12;
    psVar4[4] = sVar6 - sVar1;
    sVar1 = (short)((uint)((short)(sVar8 + sVar9) * 0xb5) >> 8);
    sVar6 = sVar1 + sVar7;
    sVar7 = sVar7 - sVar1;
    sVar3 = psVar4[10];
    psVar4[3] = sVar11 + sVar7;
    psVar4[-1] = sVar12 + sVar6;
    psVar4[1] = sVar7 - sVar11;
    psVar4[5] = sVar6 - sVar12;
    sVar6 = psVar4[0xd] + psVar4[6];
    sVar7 = psVar4[6] - psVar4[0xd];
    sVar1 = psVar4[0xc] + psVar4[7];
    sVar8 = psVar4[7] - psVar4[0xc];
    sVar12 = psVar4[8] + psVar4[0xb];
    sVar9 = psVar4[8] - psVar4[0xb];
    sVar11 = sVar3 + psVar4[9];
    sVar2 = sVar6 + sVar11;
    sVar6 = sVar6 - sVar11;
    sVar11 = sVar1 + sVar12;
    psVar4[6] = sVar2 + sVar11;
    psVar4[10] = sVar2 - sVar11;
    iVar5 = (int)(short)((psVar4[9] - sVar3) + sVar9);
    sVar1 = (short)((uint)(((int)(short)(sVar1 - sVar12) + (int)sVar6) * 0xb5) >> 8);
    psVar4[8] = sVar6 + sVar1;
    iVar10 = (int)(short)(sVar8 + sVar7);
    sVar12 = (short)((uint)((iVar5 - iVar10) * 0x62) >> 8);
    sVar11 = (short)((uint)(iVar5 * 0x8b) >> 8) + sVar12;
    sVar12 = (short)((uint)(iVar10 * 0x14e) >> 8) + sVar12;
    psVar4[0xc] = sVar6 - sVar1;
    sVar1 = (short)((uint)((short)(sVar8 + sVar9) * 0xb5) >> 8);
    sVar6 = sVar1 + sVar7;
    sVar7 = sVar7 - sVar1;
    sVar3 = psVar4[0x12];
    psVar4[0xb] = sVar11 + sVar7;
    psVar4[7] = sVar12 + sVar6;
    psVar4[0xd] = sVar6 - sVar12;
    psVar4[9] = sVar7 - sVar11;
    sVar6 = psVar4[0x15] + psVar4[0xe];
    sVar7 = psVar4[0xe] - psVar4[0x15];
    sVar1 = psVar4[0x14] + psVar4[0xf];
    sVar8 = psVar4[0xf] - psVar4[0x14];
    sVar12 = psVar4[0x10] + psVar4[0x13];
    sVar9 = psVar4[0x10] - psVar4[0x13];
    sVar11 = sVar3 + psVar4[0x11];
    sVar2 = sVar6 + sVar11;
    sVar6 = sVar6 - sVar11;
    sVar11 = sVar1 + sVar12;
    psVar4[0xe] = sVar2 + sVar11;
    psVar4[0x12] = sVar2 - sVar11;
    iVar5 = (int)(short)((psVar4[0x11] - sVar3) + sVar9);
    sVar1 = (short)((uint)(((int)(short)(sVar1 - sVar12) + (int)sVar6) * 0xb5) >> 8);
    psVar4[0x10] = sVar6 + sVar1;
    iVar10 = (int)(short)(sVar8 + sVar7);
    psVar4[0x14] = sVar6 - sVar1;
    sVar12 = (short)((uint)((iVar5 - iVar10) * 0x62) >> 8);
    sVar11 = (short)((uint)(iVar5 * 0x8b) >> 8) + sVar12;
    sVar12 = (short)((uint)(iVar10 * 0x14e) >> 8) + sVar12;
    sVar1 = (short)((uint)((short)(sVar8 + sVar9) * 0xb5) >> 8);
    sVar6 = sVar1 + sVar7;
    sVar7 = sVar7 - sVar1;
    sVar3 = psVar4[0x1a];
    psVar4[0x13] = sVar11 + sVar7;
    psVar4[0xf] = sVar12 + sVar6;
    psVar4[0x15] = sVar6 - sVar12;
    psVar4[0x11] = sVar7 - sVar11;
    sVar6 = psVar4[0x1d] + psVar4[0x16];
    sVar7 = psVar4[0x16] - psVar4[0x1d];
    sVar1 = psVar4[0x1c] + psVar4[0x17];
    sVar8 = psVar4[0x17] - psVar4[0x1c];
    sVar12 = psVar4[0x18] + psVar4[0x1b];
    sVar9 = psVar4[0x18] - psVar4[0x1b];
    sVar11 = sVar3 + psVar4[0x19];
    sVar2 = sVar6 + sVar11;
    sVar6 = sVar6 - sVar11;
    sVar11 = sVar1 + sVar12;
    psVar4[0x16] = sVar2 + sVar11;
    psVar4[0x1a] = sVar2 - sVar11;
    iVar5 = (int)(short)((psVar4[0x19] - sVar3) + sVar9);
    sVar1 = (short)((uint)(((int)(short)(sVar1 - sVar12) + (int)sVar6) * 0xb5) >> 8);
    psVar4[0x18] = sVar6 + sVar1;
    iVar10 = (int)(short)(sVar8 + sVar7);
    psVar4[0x1c] = sVar6 - sVar1;
    sVar12 = (short)((uint)((iVar5 - iVar10) * 0x62) >> 8);
    sVar11 = (short)((uint)(iVar5 * 0x8b) >> 8) + sVar12;
    sVar12 = (short)((uint)(iVar10 * 0x14e) >> 8) + sVar12;
    sVar1 = (short)((uint)((short)(sVar8 + sVar9) * 0xb5) >> 8);
    sVar6 = sVar1 + sVar7;
    sVar7 = sVar7 - sVar1;
    psVar4[0x1b] = sVar11 + sVar7;
    psVar4[0x17] = sVar12 + sVar6;
    psVar4[0x19] = sVar7 - sVar11;
    psVar4[0x1d] = sVar6 - sVar12;
    psVar4 = psVar4 + 0x20;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  psVar4 = (short *)(param_1 + 0x20);
  do {
    sVar3 = psVar4[0x10];
    sVar6 = psVar4[0x28] + psVar4[-0x10];
    sVar9 = psVar4[-0x10] - psVar4[0x28];
    sVar1 = psVar4[0x20] + psVar4[-8];
    sVar7 = psVar4[-8] - psVar4[0x20];
    sVar12 = psVar4[0x18] + *psVar4;
    sVar8 = *psVar4 - psVar4[0x18];
    sVar11 = sVar3 + psVar4[8];
    sVar2 = sVar6 + sVar11;
    sVar6 = sVar6 - sVar11;
    sVar11 = sVar1 + sVar12;
    psVar4[-0x10] = sVar2 + sVar11;
    psVar4[0x10] = sVar2 - sVar11;
    iVar5 = (int)(short)((psVar4[8] - sVar3) + sVar8);
    sVar1 = (short)((uint)(((int)(short)(sVar1 - sVar12) + (int)sVar6) * 0xb5) >> 8);
    *psVar4 = sVar6 + sVar1;
    iVar10 = (int)(short)(sVar9 + sVar7);
    sVar12 = (short)((uint)((iVar5 - iVar10) * 0x62) >> 8);
    sVar11 = (short)((uint)(iVar5 * 0x8b) >> 8) + sVar12;
    psVar4[0x20] = sVar6 - sVar1;
    sVar12 = (short)((uint)(iVar10 * 0x14e) >> 8) + sVar12;
    sVar1 = (short)((uint)((short)(sVar8 + sVar7) * 0xb5) >> 8);
    sVar6 = sVar9 + sVar1;
    sVar9 = sVar9 - sVar1;
    sVar3 = psVar4[0x11];
    psVar4[0x18] = sVar11 + sVar9;
    psVar4[-8] = sVar12 + sVar6;
    psVar4[8] = sVar9 - sVar11;
    psVar4[0x28] = sVar6 - sVar12;
    sVar6 = psVar4[-0xf] + psVar4[0x29];
    sVar9 = psVar4[-0xf] - psVar4[0x29];
    sVar1 = psVar4[0x21] + psVar4[-7];
    sVar7 = psVar4[-7] - psVar4[0x21];
    sVar12 = psVar4[1] + psVar4[0x19];
    sVar8 = psVar4[1] - psVar4[0x19];
    sVar11 = sVar3 + psVar4[9];
    sVar2 = sVar6 + sVar11;
    sVar6 = sVar6 - sVar11;
    sVar11 = sVar1 + sVar12;
    psVar4[-0xf] = sVar2 + sVar11;
    psVar4[0x11] = sVar2 - sVar11;
    iVar5 = (int)(short)((psVar4[9] - sVar3) + sVar8);
    sVar1 = (short)((uint)(((int)(short)(sVar1 - sVar12) + (int)sVar6) * 0xb5) >> 8);
    psVar4[1] = sVar6 + sVar1;
    iVar10 = (int)(short)(sVar9 + sVar7);
    sVar12 = (short)((uint)((iVar5 - iVar10) * 0x62) >> 8);
    sVar11 = (short)((uint)(iVar5 * 0x8b) >> 8) + sVar12;
    psVar4[0x21] = sVar6 - sVar1;
    sVar12 = (short)((uint)(iVar10 * 0x14e) >> 8) + sVar12;
    sVar1 = (short)((uint)((short)(sVar8 + sVar7) * 0xb5) >> 8);
    sVar6 = sVar9 + sVar1;
    sVar9 = sVar9 - sVar1;
    sVar3 = psVar4[0x12];
    psVar4[0x19] = sVar11 + sVar9;
    psVar4[-7] = sVar12 + sVar6;
    psVar4[0x29] = sVar6 - sVar12;
    psVar4[9] = sVar9 - sVar11;
    sVar6 = psVar4[-0xe] + psVar4[0x2a];
    sVar9 = psVar4[-0xe] - psVar4[0x2a];
    sVar1 = psVar4[0x22] + psVar4[-6];
    sVar7 = psVar4[-6] - psVar4[0x22];
    sVar12 = psVar4[2] + psVar4[0x1a];
    sVar8 = psVar4[2] - psVar4[0x1a];
    sVar11 = sVar3 + psVar4[10];
    sVar2 = sVar6 + sVar11;
    sVar6 = sVar6 - sVar11;
    sVar11 = sVar1 + sVar12;
    psVar4[-0xe] = sVar2 + sVar11;
    psVar4[0x12] = sVar2 - sVar11;
    iVar5 = (int)(short)((psVar4[10] - sVar3) + sVar8);
    sVar1 = (short)((uint)(((int)(short)(sVar1 - sVar12) + (int)sVar6) * 0xb5) >> 8);
    psVar4[2] = sVar6 + sVar1;
    iVar10 = (int)(short)(sVar9 + sVar7);
    psVar4[0x22] = sVar6 - sVar1;
    sVar12 = (short)((uint)((iVar5 - iVar10) * 0x62) >> 8);
    sVar11 = (short)((uint)(iVar5 * 0x8b) >> 8) + sVar12;
    sVar12 = (short)((uint)(iVar10 * 0x14e) >> 8) + sVar12;
    sVar1 = (short)((uint)((short)(sVar8 + sVar7) * 0xb5) >> 8);
    sVar6 = sVar9 + sVar1;
    sVar9 = sVar9 - sVar1;
    sVar3 = psVar4[0x13];
    psVar4[0x1a] = sVar11 + sVar9;
    psVar4[-6] = sVar12 + sVar6;
    psVar4[0x2a] = sVar6 - sVar12;
    psVar4[10] = sVar9 - sVar11;
    sVar6 = psVar4[-0xd] + psVar4[0x2b];
    sVar9 = psVar4[-0xd] - psVar4[0x2b];
    sVar1 = psVar4[0x23] + psVar4[-5];
    sVar7 = psVar4[-5] - psVar4[0x23];
    sVar12 = psVar4[3] + psVar4[0x1b];
    sVar8 = psVar4[3] - psVar4[0x1b];
    sVar11 = sVar3 + psVar4[0xb];
    sVar2 = sVar6 + sVar11;
    sVar6 = sVar6 - sVar11;
    sVar11 = sVar1 + sVar12;
    psVar4[-0xd] = sVar2 + sVar11;
    psVar4[0x13] = sVar2 - sVar11;
    iVar5 = (int)(short)((psVar4[0xb] - sVar3) + sVar8);
    sVar1 = (short)((uint)(((int)(short)(sVar1 - sVar12) + (int)sVar6) * 0xb5) >> 8);
    psVar4[3] = sVar6 + sVar1;
    iVar10 = (int)(short)(sVar9 + sVar7);
    psVar4[0x23] = sVar6 - sVar1;
    sVar12 = (short)((uint)((iVar5 - iVar10) * 0x62) >> 8);
    sVar11 = (short)((uint)(iVar5 * 0x8b) >> 8) + sVar12;
    sVar12 = (short)((uint)(iVar10 * 0x14e) >> 8) + sVar12;
    sVar1 = (short)((uint)((short)(sVar8 + sVar7) * 0xb5) >> 8);
    sVar6 = sVar9 + sVar1;
    sVar9 = sVar9 - sVar1;
    psVar4[0x1b] = sVar11 + sVar9;
    psVar4[-5] = sVar12 + sVar6;
    psVar4[0xb] = sVar9 - sVar11;
    psVar4[0x2b] = sVar6 - sVar12;
    psVar4 = psVar4 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}



// FUNCTION 1455d4250 FUN_1455d4250 body=2466 status=ok
// SIG undefined FUN_1455d4250(void)

void FUN_1455d4250(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
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
  
  lVar2 = 2;
  lVar3 = 2;
  pfVar1 = (float *)(param_1 + 8);
  do {
    fVar11 = *pfVar1 - pfVar1[3];
    fVar13 = pfVar1[-2] - pfVar1[5];
    fVar9 = pfVar1[-2] + pfVar1[5];
    fVar7 = *pfVar1 + pfVar1[3];
    fVar8 = pfVar1[-1] + pfVar1[4];
    fVar12 = pfVar1[-1] - pfVar1[4];
    fVar4 = pfVar1[1] + pfVar1[2];
    fVar5 = fVar7 + fVar8;
    fVar6 = fVar4 + fVar9;
    fVar9 = fVar9 - fVar4;
    fVar10 = (pfVar1[1] - pfVar1[2]) + fVar11;
    fVar11 = (fVar11 + fVar12) * 0.70710677;
    pfVar1[-2] = fVar5 + fVar6;
    pfVar1[2] = fVar6 - fVar5;
    fVar12 = fVar12 + fVar13;
    fVar4 = ((fVar8 - fVar7) + fVar9) * 0.70710677;
    fVar5 = fVar11 + fVar13;
    fVar13 = fVar13 - fVar11;
    fVar8 = pfVar1[7] + pfVar1[0xc];
    fVar7 = pfVar1[7] - pfVar1[0xc];
    *pfVar1 = fVar4 + fVar9;
    pfVar1[4] = fVar9 - fVar4;
    fVar4 = (fVar10 - fVar12) * 0.38268343;
    fVar6 = fVar12 * 1.306563 + fVar4;
    fVar4 = fVar10 * 0.5411961 + fVar4;
    pfVar1[3] = fVar13 + fVar4;
    pfVar1[1] = fVar13 - fVar4;
    pfVar1[-1] = fVar5 + fVar6;
    pfVar1[5] = fVar5 - fVar6;
    fVar12 = pfVar1[0xd] + pfVar1[6];
    fVar13 = pfVar1[6] - pfVar1[0xd];
    fVar6 = pfVar1[0xb] + pfVar1[8];
    fVar10 = pfVar1[8] - pfVar1[0xb];
    fVar4 = pfVar1[9] + pfVar1[10];
    fVar5 = fVar4 + fVar12;
    fVar12 = fVar12 - fVar4;
    fVar4 = fVar6 + fVar8;
    fVar9 = (pfVar1[9] - pfVar1[10]) + fVar10;
    fVar10 = (fVar10 + fVar7) * 0.70710677;
    pfVar1[6] = fVar4 + fVar5;
    pfVar1[10] = fVar5 - fVar4;
    fVar7 = fVar7 + fVar13;
    fVar4 = ((fVar8 - fVar6) + fVar12) * 0.70710677;
    fVar5 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    fVar8 = pfVar1[0xf] + pfVar1[0x14];
    fVar11 = pfVar1[0xf] - pfVar1[0x14];
    pfVar1[8] = fVar4 + fVar12;
    pfVar1[0xc] = fVar12 - fVar4;
    fVar4 = (fVar9 - fVar7) * 0.38268343;
    fVar6 = fVar7 * 1.306563 + fVar4;
    fVar4 = fVar9 * 0.5411961 + fVar4;
    pfVar1[0xb] = fVar13 + fVar4;
    pfVar1[9] = fVar13 - fVar4;
    pfVar1[7] = fVar5 + fVar6;
    pfVar1[0xd] = fVar5 - fVar6;
    fVar7 = pfVar1[0x15] + pfVar1[0xe];
    fVar13 = pfVar1[0xe] - pfVar1[0x15];
    fVar12 = pfVar1[0x13] + pfVar1[0x10];
    fVar10 = pfVar1[0x10] - pfVar1[0x13];
    fVar4 = pfVar1[0x11] + pfVar1[0x12];
    fVar5 = fVar12 + fVar8;
    fVar6 = fVar4 + fVar7;
    fVar7 = fVar7 - fVar4;
    fVar9 = (pfVar1[0x11] - pfVar1[0x12]) + fVar10;
    pfVar1[0xe] = fVar5 + fVar6;
    fVar4 = ((fVar8 - fVar12) + fVar7) * 0.70710677;
    pfVar1[0x12] = fVar6 - fVar5;
    fVar5 = fVar11 + fVar13;
    pfVar1[0x10] = fVar4 + fVar7;
    pfVar1[0x14] = fVar7 - fVar4;
    fVar8 = pfVar1[0x17] + pfVar1[0x1c];
    fVar12 = pfVar1[0x17] - pfVar1[0x1c];
    fVar4 = (fVar9 - fVar5) * 0.38268343;
    fVar7 = (fVar10 + fVar11) * 0.70710677;
    fVar6 = fVar5 * 1.306563 + fVar4;
    fVar4 = fVar9 * 0.5411961 + fVar4;
    fVar5 = fVar7 + fVar13;
    fVar13 = fVar13 - fVar7;
    pfVar1[0x11] = fVar13 - fVar4;
    pfVar1[0x13] = fVar13 + fVar4;
    pfVar1[0xf] = fVar5 + fVar6;
    pfVar1[0x15] = fVar5 - fVar6;
    fVar9 = pfVar1[0x1d] + pfVar1[0x16];
    fVar13 = pfVar1[0x16] - pfVar1[0x1d];
    fVar7 = pfVar1[0x1b] + pfVar1[0x18];
    fVar11 = pfVar1[0x18] - pfVar1[0x1b];
    fVar4 = pfVar1[0x19] + pfVar1[0x1a];
    fVar5 = fVar7 + fVar8;
    fVar6 = fVar4 + fVar9;
    fVar9 = fVar9 - fVar4;
    fVar10 = (pfVar1[0x19] - pfVar1[0x1a]) + fVar11;
    fVar11 = (fVar11 + fVar12) * 0.70710677;
    pfVar1[0x16] = fVar5 + fVar6;
    pfVar1[0x1a] = fVar6 - fVar5;
    fVar12 = fVar12 + fVar13;
    fVar4 = ((fVar8 - fVar7) + fVar9) * 0.70710677;
    fVar5 = fVar11 + fVar13;
    fVar13 = fVar13 - fVar11;
    pfVar1[0x18] = fVar4 + fVar9;
    pfVar1[0x1c] = fVar9 - fVar4;
    fVar4 = (fVar10 - fVar12) * 0.38268343;
    fVar6 = fVar10 * 0.5411961 + fVar4;
    fVar4 = fVar12 * 1.306563 + fVar4;
    pfVar1[0x1b] = fVar13 + fVar6;
    pfVar1[0x19] = fVar13 - fVar6;
    pfVar1[0x17] = fVar5 + fVar4;
    pfVar1[0x1d] = fVar5 - fVar4;
    pfVar1 = pfVar1 + 0x20;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  pfVar1 = (float *)(param_1 + 0x40);
  do {
    fVar9 = pfVar1[0x28] + pfVar1[-0x10];
    fVar13 = pfVar1[-0x10] - pfVar1[0x28];
    fVar8 = pfVar1[-8] + pfVar1[0x20];
    fVar12 = pfVar1[-8] - pfVar1[0x20];
    fVar7 = pfVar1[0x18] + *pfVar1;
    fVar11 = *pfVar1 - pfVar1[0x18];
    fVar4 = pfVar1[8] + pfVar1[0x10];
    fVar5 = fVar7 + fVar8;
    fVar6 = fVar4 + fVar9;
    fVar9 = fVar9 - fVar4;
    fVar10 = (pfVar1[8] - pfVar1[0x10]) + fVar11;
    fVar11 = (fVar11 + fVar12) * 0.70710677;
    pfVar1[-0x10] = fVar5 + fVar6;
    pfVar1[0x10] = fVar6 - fVar5;
    fVar12 = fVar12 + fVar13;
    fVar4 = ((fVar8 - fVar7) + fVar9) * 0.70710677;
    fVar5 = fVar11 + fVar13;
    fVar13 = fVar13 - fVar11;
    *pfVar1 = fVar4 + fVar9;
    pfVar1[0x20] = fVar9 - fVar4;
    fVar4 = (fVar10 - fVar12) * 0.38268343;
    fVar6 = fVar10 * 0.5411961 + fVar4;
    fVar4 = fVar12 * 1.306563 + fVar4;
    pfVar1[0x18] = fVar13 + fVar6;
    pfVar1[8] = fVar13 - fVar6;
    pfVar1[-8] = fVar5 + fVar4;
    pfVar1[0x28] = fVar5 - fVar4;
    fVar10 = pfVar1[0x29] + pfVar1[-0xf];
    fVar14 = pfVar1[-0xf] - pfVar1[0x29];
    fVar9 = pfVar1[-7] + pfVar1[0x21];
    fVar7 = pfVar1[-7] - pfVar1[0x21];
    fVar8 = pfVar1[0x19] + pfVar1[1];
    fVar13 = pfVar1[1] - pfVar1[0x19];
    fVar5 = pfVar1[9] + pfVar1[0x11];
    fVar6 = fVar8 + fVar9;
    fVar4 = pfVar1[0x12];
    fVar12 = fVar5 + fVar10;
    fVar10 = fVar10 - fVar5;
    fVar11 = (pfVar1[9] - pfVar1[0x11]) + fVar13;
    fVar13 = (fVar13 + fVar7) * 0.70710677;
    pfVar1[-0xf] = fVar6 + fVar12;
    pfVar1[0x11] = fVar12 - fVar6;
    fVar7 = fVar7 + fVar14;
    fVar5 = ((fVar9 - fVar8) + fVar10) * 0.70710677;
    fVar6 = fVar13 + fVar14;
    fVar14 = fVar14 - fVar13;
    pfVar1[1] = fVar5 + fVar10;
    pfVar1[0x21] = fVar10 - fVar5;
    fVar5 = (fVar11 - fVar7) * 0.38268343;
    fVar12 = fVar7 * 1.306563 + fVar5;
    fVar5 = fVar11 * 0.5411961 + fVar5;
    pfVar1[0x19] = fVar14 + fVar5;
    pfVar1[9] = fVar14 - fVar5;
    pfVar1[-7] = fVar6 + fVar12;
    fVar9 = pfVar1[-0xe] + pfVar1[0x2a];
    pfVar1[0x29] = fVar6 - fVar12;
    fVar13 = pfVar1[-0xe] - pfVar1[0x2a];
    fVar8 = pfVar1[0x22] + pfVar1[-6];
    fVar11 = pfVar1[-6] - pfVar1[0x22];
    fVar7 = pfVar1[0x1a] + pfVar1[2];
    fVar10 = pfVar1[2] - pfVar1[0x1a];
    fVar5 = fVar4 + pfVar1[10];
    fVar6 = fVar7 + fVar8;
    fVar12 = fVar5 + fVar9;
    fVar9 = fVar9 - fVar5;
    pfVar1[-0xe] = fVar6 + fVar12;
    fVar5 = ((fVar8 - fVar7) + fVar9) * 0.70710677;
    pfVar1[0x12] = fVar12 - fVar6;
    pfVar1[2] = fVar5 + fVar9;
    pfVar1[0x22] = fVar9 - fVar5;
    fVar6 = fVar11 + fVar13;
    fVar12 = (pfVar1[10] - fVar4) + fVar10;
    fVar7 = (fVar10 + fVar11) * 0.70710677;
    fVar4 = (fVar12 - fVar6) * 0.38268343;
    fVar5 = fVar7 + fVar13;
    fVar13 = fVar13 - fVar7;
    fVar6 = fVar6 * 1.306563 + fVar4;
    fVar4 = fVar12 * 0.5411961 + fVar4;
    pfVar1[0x1a] = fVar13 + fVar4;
    pfVar1[10] = fVar13 - fVar4;
    pfVar1[-6] = fVar5 + fVar6;
    pfVar1[0x2a] = fVar5 - fVar6;
    fVar9 = pfVar1[0x2b] + pfVar1[-0xd];
    fVar13 = pfVar1[-0xd] - pfVar1[0x2b];
    fVar8 = pfVar1[-5] + pfVar1[0x23];
    fVar12 = pfVar1[-5] - pfVar1[0x23];
    fVar7 = pfVar1[0x1b] + pfVar1[3];
    fVar11 = pfVar1[3] - pfVar1[0x1b];
    fVar4 = pfVar1[0xb] + pfVar1[0x13];
    fVar5 = fVar7 + fVar8;
    fVar6 = fVar4 + fVar9;
    fVar9 = fVar9 - fVar4;
    fVar10 = (pfVar1[0xb] - pfVar1[0x13]) + fVar11;
    fVar11 = (fVar11 + fVar12) * 0.70710677;
    pfVar1[-0xd] = fVar5 + fVar6;
    pfVar1[0x13] = fVar6 - fVar5;
    fVar12 = fVar12 + fVar13;
    fVar4 = ((fVar8 - fVar7) + fVar9) * 0.70710677;
    fVar5 = fVar11 + fVar13;
    fVar13 = fVar13 - fVar11;
    pfVar1[3] = fVar4 + fVar9;
    pfVar1[0x23] = fVar9 - fVar4;
    fVar4 = (fVar10 - fVar12) * 0.38268343;
    fVar6 = fVar10 * 0.5411961 + fVar4;
    fVar4 = fVar12 * 1.306563 + fVar4;
    pfVar1[0x1b] = fVar13 + fVar6;
    pfVar1[0xb] = fVar13 - fVar6;
    pfVar1[-5] = fVar5 + fVar4;
    pfVar1[0x2b] = fVar5 - fVar4;
    pfVar1 = pfVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1455d4c00 FUN_1455d4c00 body=1333 status=ok
// SIG undefined FUN_1455d4c00(void)

void FUN_1455d4c00(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  
  lVar9 = 4;
  piVar11 = (int *)(param_1 + 8);
  do {
    iVar3 = piVar11[-2] + piVar11[5];
    iVar10 = piVar11[-2] - piVar11[5];
    iVar2 = piVar11[-1] + piVar11[4];
    iVar5 = piVar11[-1] - piVar11[4];
    iVar1 = piVar11[3] + *piVar11;
    iVar6 = *piVar11 - piVar11[3];
    iVar8 = iVar2 - iVar1;
    iVar1 = iVar1 + iVar2;
    iVar2 = piVar11[1] + piVar11[2];
    iVar4 = piVar11[1] - piVar11[2];
    iVar7 = iVar3 - iVar2;
    iVar2 = iVar2 + iVar3;
    piVar11[-2] = (iVar2 + iVar1) * 2;
    piVar11[2] = (iVar2 - iVar1) * 2;
    iVar3 = (iVar8 + iVar7) * 0x1151;
    *piVar11 = iVar7 * 0x187e + 0x800 + iVar3 >> 0xc;
    piVar11[4] = iVar3 + iVar8 * -0x3b21 + 0x800 >> 0xc;
    iVar7 = (iVar6 + iVar10 + iVar4 + iVar5) * 0x25a1;
    iVar1 = (iVar4 + iVar10) * -0x1ccd;
    iVar2 = (iVar6 + iVar5) * -0x5203;
    iVar3 = iVar7 + (iVar4 + iVar5) * -0x3ec5;
    piVar11[5] = iVar4 * 0x98e + 0x800 + iVar3 + iVar1 >> 0xc;
    iVar7 = iVar7 + (iVar6 + iVar10) * -0xc7c;
    piVar11[3] = iVar6 * 0x41b3 + 0x800 + iVar7 + iVar2 >> 0xc;
    piVar11[1] = iVar2 + 0x800 + iVar5 * 0x6254 + iVar3 >> 0xc;
    piVar11[-1] = iVar1 + 0x800 + iVar10 * 0x300b + iVar7 >> 0xc;
    iVar3 = piVar11[0xd] + piVar11[6];
    iVar5 = piVar11[6] - piVar11[0xd];
    iVar2 = piVar11[7] + piVar11[0xc];
    iVar6 = piVar11[7] - piVar11[0xc];
    iVar1 = piVar11[0xb] + piVar11[8];
    iVar7 = piVar11[8] - piVar11[0xb];
    iVar10 = iVar2 - iVar1;
    iVar1 = iVar1 + iVar2;
    iVar2 = piVar11[9] + piVar11[10];
    iVar4 = piVar11[9] - piVar11[10];
    iVar8 = iVar3 - iVar2;
    iVar2 = iVar2 + iVar3;
    piVar11[6] = (iVar2 + iVar1) * 2;
    piVar11[10] = (iVar2 - iVar1) * 2;
    iVar3 = (iVar10 + iVar8) * 0x1151;
    piVar11[8] = iVar8 * 0x187e + 0x800 + iVar3 >> 0xc;
    piVar11[0xc] = iVar3 + iVar10 * -0x3b21 + 0x800 >> 0xc;
    iVar8 = (iVar7 + iVar5 + iVar4 + iVar6) * 0x25a1;
    iVar1 = (iVar4 + iVar5) * -0x1ccd;
    iVar2 = (iVar7 + iVar6) * -0x5203;
    iVar3 = iVar8 + (iVar4 + iVar6) * -0x3ec5;
    piVar11[0xd] = iVar4 * 0x98e + 0x800 + iVar3 + iVar1 >> 0xc;
    iVar8 = iVar8 + (iVar7 + iVar5) * -0xc7c;
    piVar11[0xb] = iVar7 * 0x41b3 + 0x800 + iVar8 + iVar2 >> 0xc;
    piVar11[9] = iVar6 * 0x6254 + 0x800 + iVar3 + iVar2 >> 0xc;
    piVar11[7] = iVar1 + 0x800 + iVar5 * 0x300b + iVar8 >> 0xc;
    lVar9 = lVar9 + -1;
    piVar11 = piVar11 + 0x10;
  } while (lVar9 != 0);
  lVar9 = 4;
  piVar11 = (int *)(param_1 + 0x40);
  do {
    iVar3 = piVar11[-0x10] + piVar11[0x28];
    iVar10 = piVar11[-0x10] - piVar11[0x28];
    iVar2 = piVar11[-8] + piVar11[0x20];
    iVar7 = piVar11[-8] - piVar11[0x20];
    iVar1 = piVar11[0x18] + *piVar11;
    iVar8 = *piVar11 - piVar11[0x18];
    iVar4 = piVar11[8] + piVar11[0x10];
    iVar6 = piVar11[8] - piVar11[0x10];
    iVar5 = iVar4 + iVar3;
    iVar3 = iVar3 - iVar4;
    iVar4 = iVar1 + iVar2;
    iVar2 = iVar2 - iVar1;
    piVar11[-0x10] = iVar5 + 1 + iVar4 >> 1;
    piVar11[0x10] = (iVar5 - iVar4) + 1 >> 1;
    iVar1 = (iVar2 + iVar3) * 0x1151;
    *piVar11 = iVar3 * 0x187e + 0x2000 + iVar1 >> 0xe;
    piVar11[0x20] = iVar1 + iVar2 * -0x3b21 + 0x2000 >> 0xe;
    iVar4 = (iVar8 + iVar10 + iVar6 + iVar7) * 0x25a1;
    iVar1 = (iVar6 + iVar10) * -0x1ccd;
    iVar2 = (iVar8 + iVar7) * -0x5203;
    iVar3 = iVar4 + (iVar6 + iVar7) * -0x3ec5;
    piVar11[0x28] = iVar6 * 0x98e + 0x2000 + iVar3 + iVar1 >> 0xe;
    iVar4 = iVar4 + (iVar8 + iVar10) * -0xc7c;
    piVar11[0x18] = iVar8 * 0x41b3 + 0x2000 + iVar4 + iVar2 >> 0xe;
    piVar11[8] = iVar2 + 0x2000 + iVar7 * 0x6254 + iVar3 >> 0xe;
    piVar11[-8] = iVar1 + 0x2000 + iVar10 * 0x300b + iVar4 >> 0xe;
    iVar3 = piVar11[0x29] + piVar11[-0xf];
    iVar7 = piVar11[-0xf] - piVar11[0x29];
    iVar2 = piVar11[-7] + piVar11[0x21];
    iVar8 = piVar11[-7] - piVar11[0x21];
    iVar1 = piVar11[0x19] + piVar11[1];
    iVar10 = piVar11[1] - piVar11[0x19];
    iVar4 = piVar11[9] + piVar11[0x11];
    iVar6 = piVar11[9] - piVar11[0x11];
    iVar5 = iVar4 + iVar3;
    iVar3 = iVar3 - iVar4;
    iVar4 = iVar1 + iVar2;
    iVar2 = iVar2 - iVar1;
    piVar11[-0xf] = iVar5 + 1 + iVar4 >> 1;
    piVar11[0x11] = (iVar5 - iVar4) + 1 >> 1;
    iVar1 = (iVar2 + iVar3) * 0x1151;
    piVar11[1] = iVar3 * 0x187e + 0x2000 + iVar1 >> 0xe;
    piVar11[0x21] = iVar1 + iVar2 * -0x3b21 + 0x2000 >> 0xe;
    iVar4 = (iVar10 + iVar7 + iVar6 + iVar8) * 0x25a1;
    iVar1 = (iVar6 + iVar7) * -0x1ccd;
    iVar2 = (iVar10 + iVar8) * -0x5203;
    iVar3 = iVar4 + (iVar6 + iVar8) * -0x3ec5;
    piVar11[0x29] = iVar6 * 0x98e + 0x2000 + iVar3 + iVar1 >> 0xe;
    iVar4 = iVar4 + (iVar10 + iVar7) * -0xc7c;
    piVar11[0x19] = iVar10 * 0x41b3 + 0x2000 + iVar4 + iVar2 >> 0xe;
    piVar11[9] = iVar8 * 0x6254 + 0x2000 + iVar3 + iVar2 >> 0xe;
    piVar11[-7] = iVar1 + 0x2000 + iVar7 * 0x300b + iVar4 >> 0xe;
    lVar9 = lVar9 + -1;
    piVar11 = piVar11 + 2;
  } while (lVar9 != 0);
  return;
}



// FUNCTION 1455d5140 FUN_1455d5140 body=1779 status=ok
// SIG undefined FUN_1455d5140(void)

void FUN_1455d5140(longlong param_1)

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
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  
  lVar10 = 2;
  lVar11 = 2;
  piVar1 = (int *)(param_1 + 8);
  do {
    iVar6 = piVar1[-2] + piVar1[5];
    iVar12 = piVar1[-2] - piVar1[5];
    iVar4 = piVar1[-1] + piVar1[4];
    iVar7 = piVar1[-1] - piVar1[4];
    iVar3 = *piVar1 + piVar1[3];
    iVar8 = *piVar1 - piVar1[3];
    iVar2 = piVar1[1] + piVar1[2];
    iVar5 = iVar2 + iVar6;
    iVar9 = (piVar1[1] - piVar1[2]) + iVar8;
    iVar6 = iVar6 - iVar2;
    iVar2 = iVar3 + iVar4;
    piVar1[-2] = iVar2 + iVar5;
    piVar1[2] = iVar5 - iVar2;
    iVar3 = ((iVar6 - iVar3) + iVar4) * 0xb5 >> 8;
    *piVar1 = iVar3 + iVar6;
    iVar4 = iVar7 + iVar12;
    iVar2 = (iVar9 - iVar4) * 0x62 >> 8;
    iVar9 = (iVar9 * 0x8b >> 8) + iVar2;
    piVar1[4] = iVar6 - iVar3;
    iVar2 = (iVar4 * 0x14e >> 8) + iVar2;
    iVar4 = (iVar8 + iVar7) * 0xb5 >> 8;
    iVar6 = iVar4 + iVar12;
    iVar12 = iVar12 - iVar4;
    piVar1[3] = iVar12 + iVar9;
    piVar1[-1] = iVar6 + iVar2;
    iVar5 = piVar1[10];
    piVar1[1] = iVar12 - iVar9;
    piVar1[5] = iVar6 - iVar2;
    iVar6 = piVar1[0xd] + piVar1[6];
    iVar12 = piVar1[6] - piVar1[0xd];
    iVar4 = piVar1[7] + piVar1[0xc];
    iVar8 = piVar1[7] - piVar1[0xc];
    iVar3 = piVar1[0xb] + piVar1[8];
    iVar9 = piVar1[8] - piVar1[0xb];
    iVar2 = piVar1[9] + iVar5;
    iVar7 = iVar2 + iVar6;
    iVar6 = iVar6 - iVar2;
    iVar2 = iVar3 + iVar4;
    piVar1[6] = iVar2 + iVar7;
    piVar1[10] = iVar7 - iVar2;
    iVar5 = (piVar1[9] - iVar5) + iVar9;
    iVar3 = ((iVar6 - iVar3) + iVar4) * 0xb5 >> 8;
    piVar1[8] = iVar3 + iVar6;
    iVar4 = iVar8 + iVar12;
    iVar2 = (iVar5 - iVar4) * 0x62 >> 8;
    iVar5 = (iVar5 * 0x8b >> 8) + iVar2;
    piVar1[0xc] = iVar6 - iVar3;
    iVar2 = (iVar4 * 0x14e >> 8) + iVar2;
    iVar4 = (iVar9 + iVar8) * 0xb5 >> 8;
    iVar6 = iVar4 + iVar12;
    iVar12 = iVar12 - iVar4;
    piVar1[0xb] = iVar12 + iVar5;
    piVar1[7] = iVar6 + iVar2;
    piVar1[0xd] = iVar6 - iVar2;
    piVar1[9] = iVar12 - iVar5;
    iVar6 = piVar1[0x15] + piVar1[0xe];
    iVar12 = piVar1[0xe] - piVar1[0x15];
    iVar4 = piVar1[0xf] + piVar1[0x14];
    iVar7 = piVar1[0xf] - piVar1[0x14];
    iVar3 = piVar1[0x13] + piVar1[0x10];
    iVar8 = piVar1[0x10] - piVar1[0x13];
    iVar2 = piVar1[0x11] + piVar1[0x12];
    iVar5 = iVar2 + iVar6;
    iVar9 = (piVar1[0x11] - piVar1[0x12]) + iVar8;
    iVar6 = iVar6 - iVar2;
    iVar2 = iVar3 + iVar4;
    piVar1[0xe] = iVar2 + iVar5;
    piVar1[0x12] = iVar5 - iVar2;
    iVar3 = ((iVar6 - iVar3) + iVar4) * 0xb5 >> 8;
    piVar1[0x10] = iVar3 + iVar6;
    iVar4 = iVar7 + iVar12;
    piVar1[0x14] = iVar6 - iVar3;
    iVar3 = (iVar9 - iVar4) * 0x62 >> 8;
    iVar2 = (iVar9 * 0x8b >> 8) + iVar3;
    iVar3 = (iVar4 * 0x14e >> 8) + iVar3;
    iVar4 = (iVar8 + iVar7) * 0xb5 >> 8;
    iVar6 = iVar4 + iVar12;
    iVar12 = iVar12 - iVar4;
    piVar1[0x13] = iVar12 + iVar2;
    piVar1[0xf] = iVar6 + iVar3;
    piVar1[0x15] = iVar6 - iVar3;
    piVar1[0x11] = iVar12 - iVar2;
    iVar6 = piVar1[0x1d] + piVar1[0x16];
    iVar12 = piVar1[0x16] - piVar1[0x1d];
    iVar4 = piVar1[0x17] + piVar1[0x1c];
    iVar7 = piVar1[0x17] - piVar1[0x1c];
    iVar3 = piVar1[0x1b] + piVar1[0x18];
    iVar8 = piVar1[0x18] - piVar1[0x1b];
    iVar2 = piVar1[0x19] + piVar1[0x1a];
    iVar5 = iVar2 + iVar6;
    iVar9 = (piVar1[0x19] - piVar1[0x1a]) + iVar8;
    iVar6 = iVar6 - iVar2;
    iVar2 = iVar3 + iVar4;
    piVar1[0x16] = iVar2 + iVar5;
    piVar1[0x1a] = iVar5 - iVar2;
    iVar3 = ((iVar6 - iVar3) + iVar4) * 0xb5 >> 8;
    piVar1[0x18] = iVar3 + iVar6;
    iVar4 = iVar7 + iVar12;
    piVar1[0x1c] = iVar6 - iVar3;
    iVar2 = (iVar9 - iVar4) * 0x62 >> 8;
    iVar5 = (iVar9 * 0x8b >> 8) + iVar2;
    iVar3 = (iVar8 + iVar7) * 0xb5 >> 8;
    iVar2 = (iVar4 * 0x14e >> 8) + iVar2;
    iVar6 = iVar3 + iVar12;
    iVar12 = iVar12 - iVar3;
    piVar1[0x1b] = iVar12 + iVar5;
    piVar1[0x19] = iVar12 - iVar5;
    piVar1[0x1d] = iVar6 - iVar2;
    piVar1[0x17] = iVar6 + iVar2;
    lVar11 = lVar11 + -1;
    piVar1 = piVar1 + 0x20;
  } while (lVar11 != 0);
  piVar1 = (int *)(param_1 + 0x40);
  do {
    iVar6 = piVar1[0x28] + piVar1[-0x10];
    iVar12 = piVar1[-0x10] - piVar1[0x28];
    iVar4 = piVar1[-8] + piVar1[0x20];
    iVar9 = piVar1[-8] - piVar1[0x20];
    iVar3 = piVar1[0x18] + *piVar1;
    iVar7 = *piVar1 - piVar1[0x18];
    iVar2 = piVar1[8] + piVar1[0x10];
    iVar8 = iVar2 + iVar6;
    iVar5 = (piVar1[8] - piVar1[0x10]) + iVar7;
    iVar6 = iVar6 - iVar2;
    iVar2 = iVar3 + iVar4;
    piVar1[-0x10] = iVar2 + iVar8;
    piVar1[0x10] = iVar8 - iVar2;
    iVar3 = ((iVar6 - iVar3) + iVar4) * 0xb5 >> 8;
    *piVar1 = iVar3 + iVar6;
    iVar4 = iVar9 + iVar12;
    iVar2 = (iVar5 - iVar4) * 0x62 >> 8;
    iVar8 = (iVar5 * 0x8b >> 8) + iVar2;
    piVar1[0x20] = iVar6 - iVar3;
    iVar2 = (iVar4 * 0x14e >> 8) + iVar2;
    iVar4 = (iVar7 + iVar9) * 0xb5 >> 8;
    iVar6 = iVar4 + iVar12;
    iVar12 = iVar12 - iVar4;
    piVar1[0x18] = iVar12 + iVar8;
    piVar1[-8] = iVar6 + iVar2;
    iVar5 = piVar1[0x11];
    piVar1[8] = iVar12 - iVar8;
    piVar1[0x28] = iVar6 - iVar2;
    iVar6 = piVar1[-0xf] + piVar1[0x29];
    iVar12 = piVar1[-0xf] - piVar1[0x29];
    iVar4 = piVar1[0x21] + piVar1[-7];
    iVar9 = piVar1[-7] - piVar1[0x21];
    iVar3 = piVar1[0x19] + piVar1[1];
    iVar7 = piVar1[1] - piVar1[0x19];
    iVar2 = iVar5 + piVar1[9];
    iVar8 = iVar2 + iVar6;
    iVar6 = iVar6 - iVar2;
    iVar2 = iVar3 + iVar4;
    piVar1[-0xf] = iVar2 + iVar8;
    piVar1[0x11] = iVar8 - iVar2;
    iVar2 = (piVar1[9] - iVar5) + iVar7;
    iVar3 = ((iVar6 - iVar3) + iVar4) * 0xb5 >> 8;
    piVar1[1] = iVar3 + iVar6;
    iVar4 = iVar9 + iVar12;
    iVar5 = (iVar2 - iVar4) * 0x62 >> 8;
    iVar2 = (iVar2 * 0x8b >> 8) + iVar5;
    piVar1[0x21] = iVar6 - iVar3;
    iVar5 = (iVar4 * 0x14e >> 8) + iVar5;
    iVar4 = (iVar7 + iVar9) * 0xb5 >> 8;
    iVar6 = iVar4 + iVar12;
    iVar12 = iVar12 - iVar4;
    piVar1[0x19] = iVar12 + iVar2;
    piVar1[-7] = iVar6 + iVar5;
    piVar1[0x29] = iVar6 - iVar5;
    piVar1[9] = iVar12 - iVar2;
    iVar6 = piVar1[0x2a] + piVar1[-0xe];
    iVar12 = piVar1[-0xe] - piVar1[0x2a];
    iVar4 = piVar1[-6] + piVar1[0x22];
    iVar9 = piVar1[-6] - piVar1[0x22];
    iVar3 = piVar1[0x1a] + piVar1[2];
    iVar7 = piVar1[2] - piVar1[0x1a];
    iVar2 = piVar1[10] + piVar1[0x12];
    iVar8 = iVar2 + iVar6;
    iVar5 = (piVar1[10] - piVar1[0x12]) + iVar7;
    iVar6 = iVar6 - iVar2;
    iVar2 = iVar3 + iVar4;
    piVar1[-0xe] = iVar2 + iVar8;
    piVar1[0x12] = iVar8 - iVar2;
    iVar3 = ((iVar6 - iVar3) + iVar4) * 0xb5 >> 8;
    piVar1[2] = iVar3 + iVar6;
    iVar4 = iVar9 + iVar12;
    piVar1[0x22] = iVar6 - iVar3;
    iVar3 = (iVar5 - iVar4) * 0x62 >> 8;
    iVar2 = (iVar5 * 0x8b >> 8) + iVar3;
    iVar3 = (iVar4 * 0x14e >> 8) + iVar3;
    iVar4 = (iVar7 + iVar9) * 0xb5 >> 8;
    iVar6 = iVar4 + iVar12;
    iVar12 = iVar12 - iVar4;
    piVar1[0x1a] = iVar12 + iVar2;
    piVar1[-6] = iVar6 + iVar3;
    piVar1[0x2a] = iVar6 - iVar3;
    piVar1[10] = iVar12 - iVar2;
    iVar6 = piVar1[0x2b] + piVar1[-0xd];
    iVar12 = piVar1[-0xd] - piVar1[0x2b];
    iVar4 = piVar1[-5] + piVar1[0x23];
    iVar9 = piVar1[-5] - piVar1[0x23];
    iVar3 = piVar1[0x1b] + piVar1[3];
    iVar7 = piVar1[3] - piVar1[0x1b];
    iVar2 = piVar1[0xb] + piVar1[0x13];
    iVar8 = iVar2 + iVar6;
    iVar5 = (piVar1[0xb] - piVar1[0x13]) + iVar7;
    iVar6 = iVar6 - iVar2;
    iVar2 = iVar3 + iVar4;
    piVar1[-0xd] = iVar2 + iVar8;
    piVar1[0x13] = iVar8 - iVar2;
    iVar3 = ((iVar6 - iVar3) + iVar4) * 0xb5 >> 8;
    piVar1[3] = iVar3 + iVar6;
    iVar4 = iVar9 + iVar12;
    piVar1[0x23] = iVar6 - iVar3;
    iVar2 = (iVar5 - iVar4) * 0x62 >> 8;
    iVar5 = (iVar5 * 0x8b >> 8) + iVar2;
    iVar3 = (iVar7 + iVar9) * 0xb5 >> 8;
    iVar2 = (iVar4 * 0x14e >> 8) + iVar2;
    iVar6 = iVar3 + iVar12;
    iVar12 = iVar12 - iVar3;
    piVar1[0x1b] = iVar12 + iVar5;
    piVar1[0xb] = iVar12 - iVar5;
    piVar1[0x2b] = iVar6 - iVar2;
    piVar1[-5] = iVar6 + iVar2;
    lVar10 = lVar10 + -1;
    piVar1 = piVar1 + 4;
  } while (lVar10 != 0);
  return;
}



// FUNCTION 1455d5840 FUN_1455d5840 body=236 status=ok
// SIG undefined FUN_1455d5840(void)

undefined8 FUN_1455d5840(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x3d0);
  iVar2 = FUN_144e93e30(param_1,&DAT_149dcaa88,1);
  if (iVar2 == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFPredictorInit",
                  "Merging Predictor codec-specific tags failed");
    return 0;
  }
  *(undefined8 *)(puVar1 + 0x16) = *(undefined8 *)(param_1 + 0x490);
  *(undefined1 **)(param_1 + 0x490) = &LAB_1455d6c80;
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(param_1 + 0x488);
  *(undefined1 **)(param_1 + 0x488) = &LAB_1455d6c50;
  *(undefined8 *)(puVar1 + 0x1a) = *(undefined8 *)(param_1 + 0x498);
  *(code **)(param_1 + 0x498) = FUN_1455d6cb0;
  *(undefined8 *)(puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x348);
  *(code **)(param_1 + 0x348) = FUN_1455d6940;
  *(undefined8 *)(puVar1 + 0x1e) = *(undefined8 *)(param_1 + 0x358);
  *(code **)(param_1 + 0x358) = FUN_1455d6ac0;
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  return 1;
}



// FUNCTION 1455d5930 FUN_1455d5930 body=68 status=ok
// SIG undefined FUN_1455d5930(void)

undefined8 FUN_1455d5930(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(lVar1 + 0x58);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(lVar1 + 0x60);
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(lVar1 + 0x68);
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(lVar1 + 0x78);
  return 1;
}



// FUNCTION 1455d5980 FUN_1455d5980 body=471 status=ok
// SIG undefined FUN_1455d5980(void)

undefined4 FUN_1455d5980(longlong param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 8);
  if (param_3 % lVar2 != 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"horAcc8",&DAT_149972340,"(cc%stride)!=0");
    return 0;
  }
  if (lVar2 < param_3) {
    if (lVar2 == 3) {
      cVar5 = *param_2;
      cVar6 = param_2[1];
      cVar3 = param_2[2];
      if (0 < param_3 + -3) {
        lVar2 = (param_3 - 4U) / 3 + 1;
        do {
          pcVar4 = param_2 + 3;
          cVar5 = cVar5 + *pcVar4;
          cVar6 = cVar6 + param_2[4];
          *pcVar4 = cVar5;
          cVar3 = cVar3 + param_2[5];
          param_2[4] = cVar6;
          param_2[5] = cVar3;
          lVar2 = lVar2 + -1;
          param_2 = pcVar4;
        } while (lVar2 != 0);
        return 1;
      }
    }
    else if (lVar2 == 4) {
      cVar5 = *param_2;
      cVar6 = param_2[1];
      cVar3 = param_2[2];
      cVar7 = param_2[3];
      if (0 < param_3 + -4) {
        lVar2 = (param_3 - 5U >> 2) + 1;
        do {
          pcVar4 = param_2 + 4;
          cVar5 = cVar5 + *pcVar4;
          cVar6 = cVar6 + param_2[5];
          *pcVar4 = cVar5;
          cVar3 = cVar3 + param_2[6];
          param_2[5] = cVar6;
          cVar7 = cVar7 + param_2[7];
          param_2[6] = cVar3;
          param_2[7] = cVar7;
          lVar2 = lVar2 + -1;
          param_2 = pcVar4;
        } while (lVar2 != 0);
        return 1;
      }
    }
    else {
      param_3 = param_3 - lVar2;
      do {
        if (lVar2 != 0) {
          if (lVar2 != 1) {
            if (lVar2 != 2) {
              if (lVar2 != 3) {
                if (lVar2 != 4) {
                  for (lVar1 = lVar2 + -4; 0 < lVar1; lVar1 = lVar1 + -1) {
                    param_2[lVar2] = param_2[lVar2] + *param_2;
                    param_2 = param_2 + 1;
                  }
                }
                param_2[lVar2] = param_2[lVar2] + *param_2;
                param_2 = param_2 + 1;
              }
              param_2[lVar2] = param_2[lVar2] + *param_2;
              param_2 = param_2 + 1;
            }
            param_2[lVar2] = param_2[lVar2] + *param_2;
            param_2 = param_2 + 1;
          }
          param_2[lVar2] = param_2[lVar2] + *param_2;
          param_2 = param_2 + 1;
        }
        param_3 = param_3 - lVar2;
      } while (0 < param_3);
    }
  }
  return 1;
}



// FUNCTION 1455d5b60 FUN_1455d5b60 body=256 status=ok
// SIG undefined FUN_1455d5b60(void)

undefined8 FUN_1455d5b60(longlong param_1,short *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 8);
  if (param_3 % (lVar1 * 2) != 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"horAcc16",&DAT_149972340,"cc%(2*stride))!=0");
    return 0;
  }
  if (lVar1 < param_3 / 2) {
    lVar3 = param_3 / 2 - lVar1;
    do {
      if (lVar1 != 0) {
        if (lVar1 != 1) {
          if (lVar1 != 2) {
            if (lVar1 != 3) {
              if (lVar1 != 4) {
                for (lVar2 = lVar1 + -4; 0 < lVar2; lVar2 = lVar2 + -1) {
                  param_2[lVar1] = param_2[lVar1] + *param_2;
                  param_2 = param_2 + 1;
                }
              }
              param_2[lVar1] = param_2[lVar1] + *param_2;
              param_2 = param_2 + 1;
            }
            param_2[lVar1] = param_2[lVar1] + *param_2;
            param_2 = param_2 + 1;
          }
          param_2[lVar1] = param_2[lVar1] + *param_2;
          param_2 = param_2 + 1;
        }
        param_2[lVar1] = param_2[lVar1] + *param_2;
        param_2 = param_2 + 1;
      }
      lVar3 = lVar3 - lVar1;
    } while (0 < lVar3);
  }
  return 1;
}



// FUNCTION 1455d5c60 FUN_1455d5c60 body=242 status=ok
// SIG undefined FUN_1455d5c60(void)

undefined8 FUN_1455d5c60(longlong param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 8);
  lVar3 = (longlong)((ulonglong)((uint)(param_3 >> 0x3f) & 3) + param_3) >> 2;
  if (param_3 % (lVar1 * 4) == 0) {
    if (lVar1 < lVar3) {
      lVar3 = lVar3 - lVar1;
      do {
        if (lVar1 != 0) {
          if (lVar1 != 1) {
            if (lVar1 != 2) {
              if (lVar1 != 3) {
                if (lVar1 != 4) {
                  for (lVar2 = lVar1 + -4; 0 < lVar2; lVar2 = lVar2 + -1) {
                    param_2[lVar1] = param_2[lVar1] + *param_2;
                    param_2 = param_2 + 1;
                  }
                }
                param_2[lVar1] = param_2[lVar1] + *param_2;
                param_2 = param_2 + 1;
              }
              param_2[lVar1] = param_2[lVar1] + *param_2;
              param_2 = param_2 + 1;
            }
            param_2[lVar1] = param_2[lVar1] + *param_2;
            param_2 = param_2 + 1;
          }
          param_2[lVar1] = param_2[lVar1] + *param_2;
          param_2 = param_2 + 1;
        }
        lVar3 = lVar3 - lVar1;
      } while (0 < lVar3);
    }
    return 1;
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"horAcc32",&DAT_149972340,"cc%(4*stride))!=0");
  return 0;
}



// FUNCTION 1455d5d60 FUN_1455d5d60 body=75 status=ok
// SIG undefined FUN_1455d5d60(void)

void FUN_1455d5d60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_144e930b0(param_2,param_3 / 2);
  FUN_1455d5b60(param_1,param_2,param_3);
  return;
}



// FUNCTION 1455d5db0 FUN_1455d5db0 body=76 status=ok
// SIG undefined FUN_1455d5db0(void)

void FUN_1455d5db0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_144e93110(param_2,(longlong)((ulonglong)((uint)(param_3 >> 0x3f) & 3) + param_3) >> 2);
  FUN_1455d5c60(param_1,param_2,param_3);
  return;
}



// FUNCTION 1455d5e00 FUN_1455d5e00 body=518 status=ok
// SIG undefined FUN_1455d5e00(void)

undefined8 FUN_1455d5e00(longlong param_1,char *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  char cVar11;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 8);
  if (param_3 % lVar5 != 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"horDiff8",&DAT_149972340,"(cc%stride)!=0");
    return 0;
  }
  if (lVar5 < param_3) {
    param_3 = param_3 - lVar5;
    if (lVar5 == 3) {
      pcVar10 = param_2 + 4;
      cVar11 = *param_2;
      cVar7 = param_2[1];
      cVar9 = param_2[2];
      do {
        cVar8 = pcVar10[-1];
        param_3 = param_3 + -3;
        cVar1 = *pcVar10;
        cVar2 = pcVar10[1];
        pcVar10[-1] = cVar8 - cVar11;
        *pcVar10 = cVar1 - cVar7;
        pcVar10[1] = cVar2 - cVar9;
        pcVar10 = pcVar10 + 3;
        cVar11 = cVar8;
        cVar7 = cVar1;
        cVar9 = cVar2;
      } while (0 < param_3);
      return 1;
    }
    if (lVar5 == 4) {
      pcVar10 = param_2 + 5;
      cVar11 = *param_2;
      cVar7 = param_2[1];
      cVar9 = param_2[3];
      cVar8 = param_2[2];
      do {
        cVar1 = pcVar10[-1];
        param_3 = param_3 + -4;
        cVar2 = *pcVar10;
        cVar3 = pcVar10[1];
        cVar4 = pcVar10[2];
        pcVar10[-1] = cVar1 - cVar11;
        *pcVar10 = cVar2 - cVar7;
        pcVar10[1] = cVar3 - cVar8;
        pcVar10[2] = cVar4 - cVar9;
        pcVar10 = pcVar10 + 4;
        cVar11 = cVar1;
        cVar7 = cVar2;
        cVar9 = cVar4;
        cVar8 = cVar3;
      } while (0 < param_3);
      return 1;
    }
    param_2 = param_2 + param_3 + -1;
    do {
      if (lVar5 != 0) {
        if (lVar5 != 1) {
          if (lVar5 != 2) {
            if (lVar5 != 3) {
              if (lVar5 != 4) {
                for (lVar6 = lVar5 + -4; 0 < lVar6; lVar6 = lVar6 + -1) {
                  param_2[lVar5] = param_2[lVar5] - *param_2;
                  param_2 = param_2 + -1;
                }
              }
              param_2[lVar5] = param_2[lVar5] - *param_2;
              param_2 = param_2 + -1;
            }
            param_2[lVar5] = param_2[lVar5] - *param_2;
            param_2 = param_2 + -1;
          }
          param_2[lVar5] = param_2[lVar5] - *param_2;
          param_2 = param_2 + -1;
        }
        param_2[lVar5] = param_2[lVar5] - *param_2;
        param_2 = param_2 + -1;
      }
      param_3 = param_3 - lVar5;
    } while (0 < param_3);
  }
  return 1;
}



// FUNCTION 1455d6010 FUN_1455d6010 body=247 status=ok
// SIG undefined FUN_1455d6010(void)

undefined8 FUN_1455d6010(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 8);
  if (param_3 % (lVar1 * 2) == 0) {
    if (lVar1 < param_3 / 2) {
      lVar4 = param_3 / 2 - lVar1;
      psVar2 = (short *)(param_2 + -2 + lVar4 * 2);
      do {
        if (lVar1 != 0) {
          if (lVar1 != 1) {
            if (lVar1 != 2) {
              if (lVar1 != 3) {
                if (lVar1 != 4) {
                  for (lVar3 = lVar1 + -4; 0 < lVar3; lVar3 = lVar3 + -1) {
                    psVar2[lVar1] = psVar2[lVar1] - *psVar2;
                    psVar2 = psVar2 + -1;
                  }
                }
                psVar2[lVar1] = psVar2[lVar1] - *psVar2;
                psVar2 = psVar2 + -1;
              }
              psVar2[lVar1] = psVar2[lVar1] - *psVar2;
              psVar2 = psVar2 + -1;
            }
            psVar2[lVar1] = psVar2[lVar1] - *psVar2;
            psVar2 = psVar2 + -1;
          }
          psVar2[lVar1] = psVar2[lVar1] - *psVar2;
          psVar2 = psVar2 + -1;
        }
        lVar4 = lVar4 - lVar1;
      } while (0 < lVar4);
    }
    return 1;
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"horDiff8",&DAT_149972340,"(cc%(2*stride))!=0");
  return 0;
}



// FUNCTION 1455d6110 FUN_1455d6110 body=237 status=ok
// SIG undefined FUN_1455d6110(void)

undefined8 FUN_1455d6110(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 8);
  lVar4 = (longlong)((ulonglong)((uint)(param_3 >> 0x3f) & 3) + param_3) >> 2;
  if (param_3 % (lVar1 * 4) != 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"horDiff32",&DAT_149972340,"(cc%(4*stride))!=0");
    return 0;
  }
  if (lVar1 < lVar4) {
    lVar4 = lVar4 - lVar1;
    piVar2 = (int *)(param_2 + -4 + lVar4 * 4);
    do {
      if (lVar1 != 0) {
        if (lVar1 != 1) {
          if (lVar1 != 2) {
            if (lVar1 != 3) {
              if (lVar1 != 4) {
                for (lVar3 = lVar1 + -4; 0 < lVar3; lVar3 = lVar3 + -1) {
                  piVar2[lVar1] = piVar2[lVar1] - *piVar2;
                  piVar2 = piVar2 + -1;
                }
              }
              piVar2[lVar1] = piVar2[lVar1] - *piVar2;
              piVar2 = piVar2 + -1;
            }
            piVar2[lVar1] = piVar2[lVar1] - *piVar2;
            piVar2 = piVar2 + -1;
          }
          piVar2[lVar1] = piVar2[lVar1] - *piVar2;
          piVar2 = piVar2 + -1;
        }
        piVar2[lVar1] = piVar2[lVar1] - *piVar2;
        piVar2 = piVar2 + -1;
      }
      lVar4 = lVar4 - lVar1;
    } while (0 < lVar4);
  }
  return 1;
}



// FUNCTION 1455d6200 FUN_1455d6200 body=74 status=ok
// SIG undefined FUN_1455d6200(void)

undefined8 FUN_1455d6200(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1455d6010();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  FUN_144e930b0(param_2,param_3 / 2);
  return 1;
}



// FUNCTION 1455d6250 FUN_1455d6250 body=75 status=ok
// SIG undefined FUN_1455d6250(void)

undefined8 FUN_1455d6250(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1455d6110();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  FUN_144e93110(param_2,(longlong)((ulonglong)((uint)(param_3 >> 0x3f) & 3) + param_3) >> 2);
  return 1;
}



// FUNCTION 1455d62a0 FUN_1455d62a0 body=388 status=ok
// SIG undefined FUN_1455d62a0(void)

undefined8 FUN_1455d62a0(longlong param_1,char *param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Memory;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar1 = *(ushort *)(param_1 + 100) >> 3;
  uVar9 = (uint)uVar1;
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 8);
  lVar3 = param_3 / (longlong)(ulonglong)uVar9;
  if (param_3 % (longlong)((ulonglong)uVar9 * lVar10) == 0) {
    _Memory = (void *)FUN_144e92f50(param_3);
    uVar4 = 0;
    lVar2 = param_3;
    pcVar8 = param_2;
    if (_Memory != (void *)0x0) {
      for (; lVar10 < lVar2; lVar2 = lVar2 - lVar10) {
        if (lVar10 != 0) {
          if (lVar10 != 1) {
            if (lVar10 != 2) {
              if (lVar10 != 3) {
                if (lVar10 != 4) {
                  for (lVar6 = lVar10 + -4; 0 < lVar6; lVar6 = lVar6 + -1) {
                    pcVar8[lVar10] = pcVar8[lVar10] + *pcVar8;
                    pcVar8 = pcVar8 + 1;
                  }
                }
                pcVar8[lVar10] = pcVar8[lVar10] + *pcVar8;
                pcVar8 = pcVar8 + 1;
              }
              pcVar8[lVar10] = pcVar8[lVar10] + *pcVar8;
              pcVar8 = pcVar8 + 1;
            }
            pcVar8[lVar10] = pcVar8[lVar10] + *pcVar8;
            pcVar8 = pcVar8 + 1;
          }
          pcVar8[lVar10] = pcVar8[lVar10] + *pcVar8;
          pcVar8 = pcVar8 + 1;
        }
      }
      FUN_144e92fa0(_Memory,param_2,param_3);
      lVar10 = 0;
      if (0 < lVar3) {
        do {
          uVar7 = 0;
          pcVar8 = param_2;
          if (uVar1 != 0) {
            do {
              iVar5 = uVar9 - uVar7;
              uVar7 = uVar7 + 1;
              *pcVar8 = *(char *)((longlong)_Memory + lVar10 + (ulonglong)(iVar5 - 1) * lVar3);
              pcVar8 = pcVar8 + 1;
            } while (uVar7 < uVar9);
          }
          lVar10 = lVar10 + 1;
          param_2 = param_2 + uVar9;
        } while (lVar10 < lVar3);
      }
      free(_Memory);
      uVar4 = 1;
    }
  }
  else {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"fpAcc",&DAT_149972340,"cc%(bps*stride))!=0");
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1455d6430 FUN_1455d6430 body=400 status=ok
// SIG undefined FUN_1455d6430(void)

undefined8 FUN_1455d6430(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  undefined1 *_Memory;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  
  uVar2 = *(ushort *)(param_1 + 100) >> 3;
  uVar8 = (uint)uVar2;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 8);
  lVar3 = param_3 / (longlong)(ulonglong)uVar8;
  if (param_3 % (longlong)((ulonglong)uVar8 * lVar1) == 0) {
    _Memory = (undefined1 *)FUN_144e92f50(param_3);
    uVar5 = 0;
    if (_Memory != (undefined1 *)0x0) {
      FUN_144e92fa0(_Memory,param_2,param_3);
      lVar10 = 0;
      puVar11 = _Memory;
      if (0 < lVar3) {
        do {
          uVar7 = 0;
          puVar9 = puVar11;
          if (uVar2 != 0) {
            do {
              iVar6 = uVar8 - uVar7;
              uVar7 = uVar7 + 1;
              *(undefined1 *)((ulonglong)(iVar6 - 1) * lVar3 + lVar10 + param_2) = *puVar9;
              puVar9 = puVar9 + 1;
            } while (uVar7 < uVar8);
          }
          lVar10 = lVar10 + 1;
          puVar11 = puVar11 + uVar8;
        } while (lVar10 < lVar3);
      }
      free(_Memory);
      pcVar4 = (char *)(param_3 + -1 + (param_2 - lVar1));
      for (; lVar1 < param_3; param_3 = param_3 - lVar1) {
        if (lVar1 != 0) {
          if (lVar1 != 1) {
            if (lVar1 != 2) {
              if (lVar1 != 3) {
                if (lVar1 != 4) {
                  for (lVar3 = lVar1 + -4; 0 < lVar3; lVar3 = lVar3 + -1) {
                    pcVar4[lVar1] = pcVar4[lVar1] - *pcVar4;
                    pcVar4 = pcVar4 + -1;
                  }
                }
                pcVar4[lVar1] = pcVar4[lVar1] - *pcVar4;
                pcVar4 = pcVar4 + -1;
              }
              pcVar4[lVar1] = pcVar4[lVar1] - *pcVar4;
              pcVar4 = pcVar4 + -1;
            }
            pcVar4[lVar1] = pcVar4[lVar1] - *pcVar4;
            pcVar4 = pcVar4 + -1;
          }
          pcVar4[lVar1] = pcVar4[lVar1] - *pcVar4;
          pcVar4 = pcVar4 + -1;
        }
      }
      uVar5 = 1;
    }
  }
  else {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"fpDiff",&DAT_149972340,"(cc%(bps*stride))!=0");
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1455d65c0 FUN_1455d65c0 body=80 status=ok
// SIG undefined FUN_1455d65c0(void)

undefined8 FUN_1455d65c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  iVar2 = (**(code **)(lVar1 + 0x38))();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(lVar1 + 0x50))(param_1,param_2,param_3);
  }
  return uVar3;
}



// FUNCTION 1455d6610 FUN_1455d6610 body=179 status=ok
// SIG undefined FUN_1455d6610(void)

undefined8 FUN_1455d6610(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  iVar3 = (**(code **)(lVar1 + 0x48))();
  if (iVar3 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (param_3 % lVar2 == 0) {
      while( true ) {
        if (param_3 < 1) {
          return 1;
        }
        iVar3 = (**(code **)(lVar1 + 0x50))(param_1,param_2,lVar2);
        if (iVar3 == 0) break;
        param_3 = param_3 - lVar2;
        param_2 = param_2 + lVar2;
      }
    }
    else {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PredictorDecodeTile",&DAT_149972340,
                    "occ0%rowsize != 0");
    }
  }
  return 0;
}



// FUNCTION 1455d66d0 FUN_1455d66d0 body=96 status=ok
// SIG undefined FUN_1455d66d0(void)

void FUN_1455d66d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  iVar2 = (**(code **)(lVar1 + 0x30))();
  if (iVar2 != 0) {
    (**(code **)(lVar1 + 0x18))(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 1455d6730 FUN_1455d6730 body=274 status=ok
// SIG undefined FUN_1455d6730(void)

undefined4 FUN_1455d6730(longlong param_1,void *param_2,size_t param_3,undefined2 param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  size_t sVar4;
  undefined4 uVar5;
  void *_Dst;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  _Dst = (void *)FUN_144e92f50(param_3);
  if (_Dst == (void *)0x0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PredictorEncodeTile",
                  "Out of memory allocating %lld byte temp buffer.",param_3);
    uVar5 = 0;
  }
  else {
    memcpy(_Dst,param_2,param_3);
    lVar2 = *(longlong *)(lVar1 + 0x10);
    pvVar3 = _Dst;
    sVar4 = param_3;
    if ((longlong)param_3 % lVar2 == 0) {
      for (; 0 < (longlong)sVar4; sVar4 = sVar4 - lVar2) {
        (**(code **)(lVar1 + 0x30))(param_1,pvVar3,lVar2);
        pvVar3 = (void *)((longlong)pvVar3 + lVar2);
      }
      uVar5 = (**(code **)(lVar1 + 0x28))(param_1,_Dst,param_3,param_4);
      free(_Dst);
    }
    else {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PredictorEncodeTile",&DAT_149972340,
                    "(cc0%rowsize)!=0");
      free(_Dst);
      uVar5 = 0;
    }
  }
  return uVar5;
}



// FUNCTION 1455d6850 FUN_1455d6850 body=239 status=ok
// SIG undefined FUN_1455d6850(void)

undefined8 FUN_1455d6850(longlong param_1)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  
  puVar2 = *(uint **)(param_1 + 0x3d0);
  uVar3 = *puVar2;
  if (uVar3 == 1) {
    return 1;
  }
  if (uVar3 == 2) {
    uVar1 = *(ushort *)(param_1 + 100);
    if (((uVar1 - 8 & 0xffe7) == 0) && (uVar1 != 0x18)) {
LAB_1455d68d8:
      if (*(short *)(param_1 + 0x9a) == 1) {
        uVar4 = (ulonglong)*(ushort *)(param_1 + 0x72);
      }
      else {
        uVar4 = 1;
      }
      *(ulonglong *)(puVar2 + 2) = uVar4;
      if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
        lVar5 = FUN_144b77aa0();
      }
      else {
        lVar5 = FUN_144b7ac10();
      }
      *(longlong *)(puVar2 + 4) = lVar5;
      if (lVar5 == 0) {
        return 0;
      }
      return 1;
    }
    pcVar6 = "Horizontal differencing \"Predictor\" not supported with %d-bit samples";
  }
  else {
    if (uVar3 != 3) {
      pcVar6 = "\"Predictor\" value %d not supported";
      goto LAB_1455d6924;
    }
    uVar3 = (uint)*(ushort *)(param_1 + 0x66);
    if (uVar3 != 3) {
      pcVar6 = "Floating point \"Predictor\" not supported with %d data format";
      goto LAB_1455d6924;
    }
    uVar1 = *(ushort *)(param_1 + 100);
    if (((ushort)(uVar1 - 0x10) < 0x31) &&
       ((0x1000000010101U >> ((ulonglong)(uVar1 - 0x10) & 0x3f) & 1) != 0)) goto LAB_1455d68d8;
    pcVar6 = "Floating point \"Predictor\" not supported with %d-bit samples";
  }
  uVar3 = (uint)uVar1;
LAB_1455d6924:
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PredictorSetup",pcVar6,uVar3);
  return 0;
}



// FUNCTION 1455d6940 FUN_1455d6940 body=378 status=ok
// SIG undefined FUN_1455d6940(void)

undefined8 FUN_1455d6940(longlong param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x3d0);
  iVar3 = (**(code **)(piVar2 + 0x1c))();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_1455d6850(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  if (*piVar2 == 2) {
    sVar1 = *(short *)(param_1 + 100);
    if (sVar1 == 8) {
      *(code **)(piVar2 + 0x14) = FUN_1455d5980;
    }
    else if (sVar1 == 0x10) {
      *(code **)(piVar2 + 0x14) = FUN_1455d5b60;
    }
    else if (sVar1 == 0x20) {
      *(code **)(piVar2 + 0x14) = FUN_1455d5c60;
    }
    if (*(code **)(param_1 + 0x378) != FUN_1455d65c0) {
      *(code **)(piVar2 + 0xe) = *(code **)(param_1 + 0x378);
      *(code **)(param_1 + 0x378) = FUN_1455d65c0;
      *(undefined8 *)(piVar2 + 0x10) = *(undefined8 *)(param_1 + 0x388);
      *(code **)(param_1 + 0x388) = FUN_1455d6610;
      *(undefined8 *)(piVar2 + 0x12) = *(undefined8 *)(param_1 + 0x398);
      *(code **)(param_1 + 0x398) = FUN_1455d6610;
    }
    if ((*(byte *)(param_1 + 0x10) & 0x80) == 0) {
      return 1;
    }
    if (*(code **)(piVar2 + 0x14) == FUN_1455d5b60) {
      *(code **)(piVar2 + 0x14) = FUN_1455d5d60;
    }
    else {
      if (*(code **)(piVar2 + 0x14) != FUN_1455d5c60) {
        return 1;
      }
      *(code **)(piVar2 + 0x14) = FUN_1455d5db0;
    }
  }
  else {
    if (*piVar2 != 3) {
      return 1;
    }
    *(code **)(piVar2 + 0x14) = FUN_1455d62a0;
    if (*(code **)(param_1 + 0x378) != FUN_1455d65c0) {
      *(code **)(piVar2 + 0xe) = *(code **)(param_1 + 0x378);
      *(code **)(param_1 + 0x378) = FUN_1455d65c0;
      *(undefined8 *)(piVar2 + 0x10) = *(undefined8 *)(param_1 + 0x388);
      *(code **)(param_1 + 0x388) = FUN_1455d6610;
      *(undefined8 *)(piVar2 + 0x12) = *(undefined8 *)(param_1 + 0x398);
      *(code **)(param_1 + 0x398) = FUN_1455d6610;
    }
    if ((*(byte *)(param_1 + 0x10) & 0x80) == 0) {
      return 1;
    }
  }
  *(undefined **)(param_1 + 0x468) = &DAT_144b83080;
  return 1;
}



// FUNCTION 1455d6ac0 FUN_1455d6ac0 body=386 status=ok
// SIG undefined FUN_1455d6ac0(void)

undefined8 FUN_1455d6ac0(longlong param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  piVar2 = *(int **)(param_1 + 0x3d0);
  iVar3 = (**(code **)(piVar2 + 0x1e))();
  if ((iVar3 == 0) || (iVar3 = FUN_1455d6850(param_1), iVar3 == 0)) {
    return 0;
  }
  if (*piVar2 == 2) {
    sVar1 = *(short *)(param_1 + 100);
    if (sVar1 == 8) {
      *(code **)(piVar2 + 0xc) = FUN_1455d5e00;
    }
    else if (sVar1 == 0x10) {
      *(code **)(piVar2 + 0xc) = FUN_1455d6010;
    }
    else if (sVar1 == 0x20) {
      *(code **)(piVar2 + 0xc) = FUN_1455d6110;
    }
    if (*(code **)(param_1 + 0x380) != FUN_1455d66d0) {
      *(code **)(piVar2 + 6) = *(code **)(param_1 + 0x380);
      *(code **)(param_1 + 0x380) = FUN_1455d66d0;
      *(undefined8 *)(piVar2 + 8) = *(undefined8 *)(param_1 + 0x390);
      *(code **)(param_1 + 0x390) = FUN_1455d6730;
      *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(param_1 + 0x3a0);
      *(code **)(param_1 + 0x3a0) = FUN_1455d6730;
    }
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      if (*(code **)(piVar2 + 0xc) == FUN_1455d6010) {
        pcVar4 = FUN_1455d6200;
      }
      else {
        if (*(code **)(piVar2 + 0xc) != FUN_1455d6110) {
          return 1;
        }
        pcVar4 = FUN_1455d6250;
      }
      *(code **)(piVar2 + 0xc) = pcVar4;
      *(undefined **)(param_1 + 0x468) = &DAT_144b83080;
      return 1;
    }
  }
  else if (*piVar2 == 3) {
    *(code **)(piVar2 + 0xc) = FUN_1455d6430;
    if (*(code **)(param_1 + 0x380) != FUN_1455d66d0) {
      *(code **)(piVar2 + 6) = *(code **)(param_1 + 0x380);
      *(code **)(param_1 + 0x380) = FUN_1455d66d0;
      *(undefined8 *)(piVar2 + 8) = *(undefined8 *)(param_1 + 0x390);
      *(code **)(param_1 + 0x390) = FUN_1455d6730;
      *(undefined8 *)(piVar2 + 10) = *(undefined8 *)(param_1 + 0x3a0);
      *(code **)(param_1 + 0x3a0) = FUN_1455d6730;
    }
  }
  return 1;
}



// FUNCTION 1455d6cb0 FUN_1455d6cb0 body=173 status=ok
// SIG undefined FUN_1455d6cb0(void)

void FUN_1455d6cb0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  piVar2 = *(int **)(param_1 + 0x3d0);
  if ((*(byte *)(param_1 + 0x40) & 4) == 0) goto LAB_1455d6d34;
  FUN_146c958a0(param_2,"  Predictor: ");
  iVar1 = *piVar2;
  if (iVar1 == 1) {
    pcVar3 = "none ";
LAB_1455d6d17:
    FUN_146c958a0(param_2,pcVar3);
  }
  else {
    if (iVar1 == 2) {
      pcVar3 = "horizontal differencing ";
      goto LAB_1455d6d17;
    }
    if (iVar1 == 3) {
      pcVar3 = "floating point predictor ";
      goto LAB_1455d6d17;
    }
  }
  FUN_146c958a0(param_2,"%d (0x%x)\n",*piVar2,*piVar2);
LAB_1455d6d34:
  if (*(code **)(piVar2 + 0x1a) != (code *)0x0) {
    (**(code **)(piVar2 + 0x1a))(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1455d6d60 FUN_1455d6d60 body=268 status=ok
// SIG undefined FUN_1455d6d60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1455d6d60(undefined8 param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar5;
  int iVar6;
  undefined1 local_res10;
  undefined1 local_res11;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_2 == 0) {
    uVar2 = FUN_144b9eb80(param_1,&DAT_149dfd150,1);
    if ((int)uVar2 == 1) {
      uVar2 = uVar2 & 0xffffffff;
    }
    else {
LAB_1455d6e64:
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar4 = uVar2;
    uVar5 = uVar2;
    if (0 < *param_2) {
      do {
        iVar6 = (int)uVar2;
        iVar3 = (int)uVar4;
        if ((iVar3 != 0) && (iVar3 == (iVar3 / 0x23) * 0x23)) {
          iVar1 = FUN_144b9eb80(param_1,&DAT_149d96358,2);
          if (iVar1 != 2) goto LAB_1455d6e64;
          iVar6 = iVar6 + 2;
        }
        local_res10 = PTR_s_0123456789ABCDEF_14c746970
                      [*(byte *)(*(longlong *)(param_2 + 2) + uVar5) >> 4];
        local_res11 = PTR_s_0123456789ABCDEF_14c746970
                      [*(byte *)(*(longlong *)(param_2 + 2) + uVar5) & 0xf];
        iVar1 = FUN_144b9eb80(param_1,&local_res10,2);
        if (iVar1 != 2) goto LAB_1455d6e64;
        uVar2 = (ulonglong)(iVar6 + 2);
        uVar4 = (ulonglong)(iVar3 + 1U);
        uVar5 = uVar5 + 1;
      } while ((int)(iVar3 + 1U) < *param_2);
    }
  }
  return uVar2;
}



// FUNCTION 1455d6e70 FUN_1455d6e70 body=675 status=ok
// SIG undefined FUN_1455d6e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d6e70(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  
  iVar1 = FUN_144babbf0();
  iVar6 = 0;
  if (0 < iVar1) {
    iVar7 = param_3 + 4;
    iVar8 = param_3 + 0x10;
    do {
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
      piVar3 = (int *)FUN_144babc00(param_1,iVar6);
      lVar4 = 0;
      if (param_5 != 0) {
        lVar4 = FUN_144eae360(param_5,*(undefined8 *)(piVar3 + 6),*(undefined8 *)(piVar3 + 8));
      }
      FUN_144ec7640(param_2,"%*sSigned Certificate Timestamp:",param_3,&DAT_149e02088);
      FUN_144ec7640(param_2,"\n%*sVersion   : ",iVar7,&DAT_149e02088);
      if (*piVar3 == 0) {
        FUN_144ec7640(param_2,"v1 (0x0)");
        if (lVar4 != 0) {
          uVar5 = FUN_144eae270(lVar4);
          FUN_144ec7640(param_2,"\n%*sLog       : %s",iVar7,&DAT_149e02088,uVar5);
          uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
        }
        FUN_144ec7640(param_2,"\n%*sLog ID    : ",iVar7,&DAT_149e02088);
        uVar5 = CONCAT44(uVar9,piVar3[8]);
        FUN_145287f20(param_2,iVar8,0x10,*(undefined8 *)(piVar3 + 6),uVar5);
        uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
        FUN_144ec7640(param_2,"\n%*sTimestamp : ",iVar7,&DAT_149e02088);
        FUN_1455d7120(*(undefined8 *)(piVar3 + 10),param_2);
        FUN_144ec7640(param_2,"\n%*sExtensions: ",iVar7,&DAT_149e02088);
        if (*(longlong *)(piVar3 + 0xe) == 0) {
          FUN_144ec7640(param_2,&DAT_149e62dd2);
        }
        else {
          uVar5 = CONCAT44(uVar9,piVar3[0xe]);
          FUN_145287f20(param_2,iVar8,0x10,*(undefined8 *)(piVar3 + 0xc),uVar5);
          uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
        }
        FUN_144ec7640(param_2,"\n%*sSignature : ",iVar7,&DAT_149e02088);
        iVar2 = FUN_144ead2f0(piVar3);
        if (iVar2 == 0) {
          FUN_144ec7640(param_2,"%02X%02X",(char)piVar3[0x10],
                        *(undefined1 *)((longlong)piVar3 + 0x41));
        }
        else {
          uVar5 = FUN_144ea8e20(iVar2);
          FUN_144ec7640(param_2,&DAT_149dfbe46,uVar5);
        }
        FUN_144ec7640(param_2,"\n%*s            ",iVar7,&DAT_149e02088);
        iVar2 = piVar3[0x14];
        uVar5 = *(undefined8 *)(piVar3 + 0x12);
      }
      else {
        FUN_144ec7640(param_2,"unknown\n%*s",iVar8,&DAT_149e02088);
        iVar2 = piVar3[4];
        uVar5 = *(undefined8 *)(piVar3 + 2);
      }
      in_stack_ffffffffffffffa8 = CONCAT44(uVar9,iVar2);
      FUN_145287f20(param_2,iVar8,0x10,uVar5,in_stack_ffffffffffffffa8);
      iVar2 = FUN_144babbf0(param_1);
      if (iVar6 < iVar2 + -1) {
        FUN_144ec7640(param_2,&DAT_149dfbe46,param_4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return;
}



// FUNCTION 1455d7120 FUN_1455d7120 body=269 status=ok
// SIG undefined FUN_1455d7120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d7120(ulonglong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  int local_48;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_144efead0();
  if (lVar5 != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    lVar8 = SUB168(ZEXT816(0x8daea1d7f4cf721b) * auVar1,8);
    uVar9 = (param_1 - lVar8 >> 1) + lVar8 >> 0x1a;
    uVar7 = param_1 + uVar9 * -86400000;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    lVar8 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar2,8);
    FUN_144ef1f30(lVar5,0,uVar9,lVar8 + (uVar7 - lVar8 >> 1) >> 9);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    lVar8 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar3,8);
    uVar6 = FUN_144f03e90(lVar5);
    local_48 = (int)param_1 + (int)((param_1 - lVar8 >> 1) + lVar8 >> 9) * -1000;
    FUN_144ec7760(local_38,0x14,"%.14s.%03dZ",uVar6);
    iVar4 = FUN_144ef1fc0(lVar5,local_38);
    if (iVar4 != 0) {
      FUN_144ef2040(param_2,lVar5);
    }
    FUN_144efeaf0(lVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 1455d7240 FUN_1455d7240 body=44 status=ok
// SIG undefined FUN_1455d7240(void)

longlong FUN_1455d7240(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(longlong *)(param_1 + 0x770), lVar1 == 0 &&
      ((*(longlong *)(param_1 + 0x598) == 0 ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x370), lVar1 == 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1455d7270 FUN_1455d7270 body=149 status=ok
// SIG undefined FUN_1455d7270(void)

void FUN_1455d7270(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (((param_3 + 0xf < param_1) || (param_1 + 0xf < param_3)) &&
     ((param_2 + 0xf < param_1 || (param_1 + 0xf < param_2)))) {
    lVar11 = 2;
    piVar10 = param_3 + 4;
    do {
      iVar4 = piVar10[-3];
      iVar5 = piVar10[-2];
      iVar6 = piVar10[-1];
      piVar2 = (int *)((longlong)param_2 + (-0x10 - (longlong)param_3) + (longlong)piVar10);
      iVar7 = piVar2[1];
      iVar8 = piVar2[2];
      iVar9 = piVar2[3];
      piVar1 = piVar10 + 8;
      piVar3 = (int *)((longlong)param_1 + (-0x30 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 + piVar10[-4];
      piVar3[1] = iVar7 + iVar4;
      piVar3[2] = iVar8 + iVar5;
      piVar3[3] = iVar9 + iVar6;
      piVar2 = (int *)((longlong)param_2 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      iVar4 = piVar2[1];
      iVar5 = piVar2[2];
      iVar6 = piVar2[3];
      iVar7 = piVar10[1];
      iVar8 = piVar10[2];
      iVar9 = piVar10[3];
      piVar3 = (int *)((longlong)param_1 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 + *piVar10;
      piVar3[1] = iVar4 + iVar7;
      piVar3[2] = iVar5 + iVar8;
      piVar3[3] = iVar6 + iVar9;
      lVar11 = lVar11 + -1;
      piVar10 = piVar1;
    } while (lVar11 != 0);
    return;
  }
  lVar12 = (longlong)param_2 - (longlong)param_3;
  lVar13 = 0x10;
  lVar11 = (longlong)param_1 - (longlong)param_3;
  do {
    *(int *)((longlong)param_3 + lVar11) = *(int *)((longlong)param_3 + lVar12) + *param_3;
    param_3 = param_3 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}



// FUNCTION 1455d7310 FUN_1455d7310 body=149 status=ok
// SIG undefined FUN_1455d7310(void)

void FUN_1455d7310(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (((param_3 + 0xf < param_1) || (param_1 + 0xf < param_3)) &&
     ((param_2 + 0xf < param_1 || (param_1 + 0xf < param_2)))) {
    lVar11 = 2;
    piVar10 = param_3 + 4;
    do {
      iVar4 = piVar10[-3];
      iVar5 = piVar10[-2];
      iVar6 = piVar10[-1];
      piVar2 = (int *)((longlong)param_2 + (-0x10 - (longlong)param_3) + (longlong)piVar10);
      iVar7 = piVar2[1];
      iVar8 = piVar2[2];
      iVar9 = piVar2[3];
      piVar1 = piVar10 + 8;
      piVar3 = (int *)((longlong)param_1 + (-0x30 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 - piVar10[-4];
      piVar3[1] = iVar7 - iVar4;
      piVar3[2] = iVar8 - iVar5;
      piVar3[3] = iVar9 - iVar6;
      piVar2 = (int *)((longlong)param_2 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      iVar4 = piVar2[1];
      iVar5 = piVar2[2];
      iVar6 = piVar2[3];
      iVar7 = piVar10[1];
      iVar8 = piVar10[2];
      iVar9 = piVar10[3];
      piVar3 = (int *)((longlong)param_1 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 - *piVar10;
      piVar3[1] = iVar4 - iVar7;
      piVar3[2] = iVar5 - iVar8;
      piVar3[3] = iVar6 - iVar9;
      lVar11 = lVar11 + -1;
      piVar10 = piVar1;
    } while (lVar11 != 0);
    return;
  }
  lVar12 = (longlong)param_2 - (longlong)param_3;
  lVar13 = 0x10;
  lVar11 = (longlong)param_1 - (longlong)param_3;
  do {
    *(int *)((longlong)param_3 + lVar11) = *(int *)((longlong)param_3 + lVar12) - *param_3;
    param_3 = param_3 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}



// FUNCTION 1455d73b0 FUN_1455d73b0 body=158 status=ok
// SIG undefined FUN_1455d73b0(void)

void FUN_1455d73b0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_2 * 0xfffffff;
  uVar1 = param_2 * 0xffffffe;
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 8;
    *param_1 = (~-(uint)(uVar3 == 8) & uVar2 | -(uint)(uVar3 == 8) & uVar1) + *param_1;
    param_1[1] = (~-(uint)(uVar3 == 7) & uVar2 | -(uint)(uVar3 == 7) & uVar1) + param_1[1];
    param_1[2] = (~-(uint)(uVar3 == 6) & uVar2 | -(uint)(uVar3 == 6) & uVar1) + param_1[2];
    param_1[3] = (~-(uint)(uVar3 == 5) & uVar2 | -(uint)(uVar3 == 5) & uVar1) + param_1[3];
    param_1[4] = (~-(uint)(uVar3 == 4) & uVar2 | -(uint)(uVar3 == 4) & uVar1) + param_1[4];
    param_1[5] = (~-(uint)(uVar3 == 3) & uVar2 | -(uint)(uVar3 == 3) & uVar1) + param_1[5];
    param_1[6] = (~-(uint)(uVar3 == 2) & uVar2 | -(uint)(uVar3 == 2) & uVar1) + param_1[6];
    param_1[7] = (~-(uint)(uVar3 == 1) & uVar2 | -(uint)(uVar3 == 1) & uVar1) + param_1[7];
    param_1 = param_1 + 8;
    uVar3 = uVar4;
  } while (uVar4 < 0x10);
  return;
}



// FUNCTION 1455d7450 FUN_1455d7450 body=201 status=ok
// SIG undefined FUN_1455d7450(void)

void FUN_1455d7450(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = param_1[0xf];
  param_1[8] = param_1[8] + (uVar1 >> 0x1c);
  puVar2 = param_1 + 0xd;
  uVar3 = 0xd;
  do {
    puVar2[2] = (param_1[uVar3 + 1] >> 0x1c) + (puVar2[2] & 0xfffffff);
    puVar2[1] = (param_1[uVar3] >> 0x1c) + (puVar2[1] & 0xfffffff);
    *puVar2 = (param_1[uVar3 - 1] >> 0x1c) + (*puVar2 & 0xfffffff);
    puVar2[-1] = (param_1[uVar3 - 2] >> 0x1c) + (puVar2[-1] & 0xfffffff);
    puVar2[-2] = (param_1[uVar3 - 3] >> 0x1c) + (puVar2[-2] & 0xfffffff);
    bVar4 = uVar3 != 3;
    puVar2 = puVar2 + -5;
    uVar3 = uVar3 - 5;
  } while (bVar4);
  *param_1 = (*param_1 & 0xfffffff) + (uVar1 >> 0x1c);
  return;
}



// FUNCTION 1455d7520 FUN_1455d7520 body=166 status=ok
// SIG undefined FUN_1455d7520(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d7520(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar5 = 0;
  puVar3 = param_1;
  FUN_1455d7450();
  lVar8 = 0x10;
  lVar7 = 0x10;
  uVar2 = uVar5;
  puVar6 = puVar3;
  do {
    lVar1 = uVar2 + ((ulonglong)*puVar6 -
                    (ulonglong)
                    *(uint *)(((longlong)&DAT_149dcc240 - (longlong)puVar3) + (longlong)puVar6));
    uVar2 = lVar1 >> 0x1c;
    *puVar6 = (uint)lVar1 & 0xfffffff;
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar7 != 0);
  do {
    uVar4 = uVar5 + *param_1 +
            ((ulonglong)*(uint *)((longlong)param_1 + ((longlong)&DAT_149dcc240 - (longlong)puVar3))
            & uVar2 & 0xffffffff);
    uVar5 = uVar4 >> 0x1c;
    *param_1 = (uint)uVar4 & 0xfffffff;
    lVar8 = lVar8 + -1;
    param_1 = param_1 + 1;
  } while (lVar8 != 0);
  return;
}



// FUNCTION 1455d75d0 FUN_1455d75d0 body=33 status=ok
// SIG undefined FUN_1455d75d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d75d0(undefined8 param_1)

{
  FUN_1455d7270();
  FUN_1455d7450(param_1);
  return;
}



// FUNCTION 1455d7600 FUN_1455d7600 body=46 status=ok
// SIG undefined FUN_1455d7600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d7600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x1455d760a;
  FUN_1455d7310();
  FUN_1455d73b0(param_1,2,param_3,param_4,uVar1);
  FUN_1455d7450(param_1);
  return;
}



// FUNCTION 1455d7630 FUN_1455d7630 body=886 status=ok
// SIG undefined FUN_1455d7630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d7630(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_148 [32];
  undefined1 local_128 [64];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [64];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1455d764d;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1455d82c0(&local_e8);
  FUN_1455d7e10(local_a8,param_2,&local_e8);
  FUN_1455d82c0(&local_e8,local_a8);
  FUN_1455d7e10(local_a8,param_2,&local_e8);
  FUN_1455d82c0(&local_e8,local_a8);
  FUN_1455d82c0(local_68,&local_e8);
  FUN_1455d82c0(&local_e8,local_68);
  FUN_1455d7e10(local_128,local_a8,&local_e8);
  FUN_1455d82c0(&local_e8,local_128);
  FUN_1455d82c0(local_68,&local_e8);
  FUN_1455d82c0(&local_e8,local_68);
  FUN_1455d7e10(local_128,local_a8,&local_e8);
  FUN_1455d82c0(local_a8,local_128);
  lVar1 = 4;
  do {
    FUN_1455d82c0(local_68,local_a8);
    FUN_1455d82c0(local_a8,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1455d7e10(&local_e8,local_128,local_a8);
  FUN_1455d82c0(local_128,&local_e8);
  FUN_1455d7e10(local_a8,param_2,local_128);
  FUN_1455d82c0(local_68,local_a8);
  FUN_1455d82c0(local_128,local_68);
  lVar1 = 8;
  do {
    FUN_1455d82c0(local_68,local_128);
    FUN_1455d82c0(local_128,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1455d7e10(local_a8,&local_e8,local_128);
  FUN_1455d82c0(local_128,local_a8);
  lVar1 = 0x12;
  lVar2 = 0x12;
  do {
    FUN_1455d82c0(local_68,local_128);
    FUN_1455d82c0(local_128,local_68);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1455d7e10(&local_e8,local_a8,local_128);
  FUN_1455d82c0(local_128,&local_e8);
  do {
    FUN_1455d82c0(local_68,local_128);
    FUN_1455d82c0(local_128,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1455d7e10(&local_e8,local_a8,local_128);
  FUN_1455d82c0(local_128,&local_e8);
  lVar1 = 0x37;
  do {
    FUN_1455d82c0(local_68,local_128);
    FUN_1455d82c0(local_128,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1455d7e10(local_a8,&local_e8,local_128);
  FUN_1455d82c0(local_128,local_a8);
  FUN_1455d7e10(&local_e8,param_2,local_128);
  FUN_1455d82c0(local_128,&local_e8);
  lVar1 = 0x6f;
  do {
    FUN_1455d82c0(local_68,local_128);
    FUN_1455d82c0(local_128,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1455d7e10(&local_e8,local_a8,local_128);
  FUN_1455d82c0(local_a8,&local_e8);
  FUN_1455d7e10(local_128,local_a8,param_2);
  *param_1 = local_e8;
  param_1[1] = uStack_e0;
  param_1[2] = local_d8;
  param_1[3] = uStack_d0;
  *(undefined4 *)(param_1 + 4) = local_c8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_c4;
  *(undefined4 *)(param_1 + 5) = uStack_c0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_bc;
  *(undefined4 *)(param_1 + 6) = local_b8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_b4;
  *(undefined4 *)(param_1 + 7) = uStack_b0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_ac;
  FUN_1455d79c0(local_128,&DAT_149dcc200);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_148);
}



// FUNCTION 1455d79c0 FUN_1455d79c0 body=397 status=ok
// SIG undefined FUN_1455d79c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1455d79c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_78 [16];
  int aiStack_68 [20];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1455d79cc;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar23 = 2;
  lVar22 = 2;
  piVar19 = (int *)(param_2 + 0x10);
  do {
    iVar5 = piVar19[-3];
    iVar6 = piVar19[-2];
    iVar7 = piVar19[-1];
    piVar2 = (int *)((param_1 - param_2) + -0x10 + (longlong)piVar19);
    iVar8 = piVar2[1];
    iVar9 = piVar2[2];
    iVar10 = piVar2[3];
    piVar1 = (int *)((param_1 - param_2) + (longlong)piVar19);
    iVar11 = *piVar1;
    iVar12 = piVar1[1];
    iVar13 = piVar1[2];
    iVar14 = piVar1[3];
    piVar1 = piVar19 + 8;
    iVar15 = *piVar19;
    iVar16 = piVar19[1];
    iVar17 = piVar19[2];
    iVar18 = piVar19[3];
    piVar3 = (int *)((longlong)aiStack_68 + -param_2 + -0x20 + (longlong)piVar1);
    *piVar3 = *piVar2 - piVar19[-4];
    piVar3[1] = iVar8 - iVar5;
    piVar3[2] = iVar9 - iVar6;
    piVar3[3] = iVar10 - iVar7;
    piVar19 = (int *)(auStack_78 + -param_2 + (longlong)piVar1);
    *piVar19 = iVar11 - iVar15;
    piVar19[1] = iVar12 - iVar16;
    piVar19[2] = iVar13 - iVar17;
    piVar19[3] = iVar14 - iVar18;
    lVar22 = lVar22 + -1;
    piVar19 = piVar1;
  } while (lVar22 != 0);
  piVar19 = aiStack_68 + 4;
  uVar20 = 0;
  do {
    uVar21 = uVar20 + 8;
    auVar24._0_4_ = -(uint)(uVar20 == 8);
    auVar24._4_4_ = -(uint)(uVar20 == 7);
    auVar24._8_4_ = -(uint)(uVar20 == 6);
    auVar24._12_4_ = -(uint)(uVar20 == 5);
    auVar24 = ~auVar24 & _DAT_149d94110 | auVar24 & _DAT_149d94100;
    auVar25._0_4_ = -(uint)(uVar20 == 4);
    auVar25._4_4_ = -(uint)(uVar20 == 3);
    auVar25._8_4_ = -(uint)(uVar20 == 2);
    auVar25._12_4_ = -(uint)(uVar20 == 1);
    *piVar19 = auVar24._0_4_ + *piVar19;
    piVar19[1] = auVar24._4_4_ + piVar19[1];
    piVar19[2] = auVar24._8_4_ + piVar19[2];
    piVar19[3] = auVar24._12_4_ + piVar19[3];
    auVar25 = ~auVar25 & _DAT_149d94110 | auVar25 & _DAT_149d94100;
    auVar24 = *(undefined1 (*) [16])(piVar19 + 4);
    piVar19[4] = auVar25._0_4_ + auVar24._0_4_;
    piVar19[5] = auVar25._4_4_ + auVar24._4_4_;
    piVar19[6] = auVar25._8_4_ + auVar24._8_4_;
    piVar19[7] = auVar25._12_4_ + auVar24._12_4_;
    piVar19 = piVar19 + 8;
    uVar20 = uVar21;
  } while (uVar21 < 0x10);
  FUN_1455d7450(aiStack_68 + 4);
  FUN_1455d7520(aiStack_68 + 4);
  auVar25 = ZEXT816(0);
  auVar24 = auVar25;
  pauVar4 = &auStack_78;
  do {
    auVar25 = auVar25 | pauVar4[2];
    auVar24 = pauVar4[3] | auVar24;
    lVar23 = lVar23 + -1;
    pauVar4 = pauVar4 + 2;
  } while (lVar23 != 0);
  auVar24 = auVar24 | auVar25 | (auVar24 | auVar25) >> 0x40;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78,auVar25._0_8_,auVar24._0_8_ | auVar24._4_8_);
}



// FUNCTION 1455d7b60 FUN_1455d7b60 body=95 status=ok
// SIG undefined FUN_1455d7b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d7b60(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x1455d7b6a;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  local_38 = *(undefined4 *)(param_1 + 4);
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 5);
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_28 = *(undefined4 *)(param_1 + 6);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_20 = *(undefined4 *)(param_1 + 7);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x3c);
  FUN_1455d7520(&local_58);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
}



// FUNCTION 1455d7bd0 FUN_1455d7bd0 body=129 status=ok
// SIG undefined FUN_1455d7bd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d7bd0(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  int local_58 [16];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x1455d7bda;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = 2;
  piVar10 = local_58 + 4;
  do {
    piVar1 = (int *)((param_1 - (longlong)(local_58 + 4)) + (longlong)piVar10);
    iVar3 = piVar1[1];
    iVar4 = piVar1[2];
    iVar5 = piVar1[3];
    piVar2 = (int *)((param_1 - (longlong)(local_58 + 4)) + 0x10 + (longlong)piVar10);
    iVar6 = *piVar2;
    iVar7 = piVar2[1];
    iVar8 = piVar2[2];
    iVar9 = piVar2[3];
    piVar10[-4] = *piVar1 * 2;
    piVar10[-3] = iVar3 * 2;
    piVar10[-2] = iVar4 * 2;
    piVar10[-1] = iVar5 * 2;
    *piVar10 = iVar6 * 2;
    piVar10[1] = iVar7 * 2;
    piVar10[2] = iVar8 * 2;
    piVar10[3] = iVar9 * 2;
    lVar11 = lVar11 + -1;
    piVar10 = piVar10 + 8;
  } while (lVar11 != 0);
  FUN_1455d7450(local_58);
  FUN_1455d7520(local_58);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
}



// FUNCTION 1455d7c60 FUN_1455d7c60 body=158 status=ok
// SIG undefined FUN_1455d7c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d7c60(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1455d7c72;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_60 = param_2[1];
  uVar3 = 0;
  local_58 = param_2[2];
  uStack_50 = param_2[3];
  uVar2 = 0;
  uVar4 = 0;
  local_48 = *(undefined4 *)(param_2 + 4);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_40 = *(undefined4 *)(param_2 + 5);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_38 = *(undefined4 *)(param_2 + 6);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_30 = *(undefined4 *)(param_2 + 7);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x3c);
  FUN_1455d7520(&local_68);
  lVar5 = 0;
  do {
    uVar1 = uVar2;
    if ((uVar2 < 8) && (uVar3 < 0x10)) {
      uVar1 = uVar2 + 0x1c;
      uVar4 = uVar4 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar3 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar3 = uVar3 + 1;
    }
    *(char *)(lVar5 + param_1) = (char)uVar4;
    uVar2 = uVar1 - 8;
    uVar4 = uVar4 >> 8;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 0x38);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 1455d7d10 FUN_1455d7d10 body=255 status=ok
// SIG undefined FUN_1455d7d10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1455d7d10(longlong param_1,longlong param_2,int param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar2 = 0;
  puVar8 = &DAT_149dcc240;
  uVar11 = 0;
  uVar7 = 0;
  lVar10 = 0;
  uVar9 = 0;
  do {
    for (; (uVar11 < 0x1c && (uVar2 < 0x38)); uVar2 = uVar2 + 1) {
      bVar4 = *(byte *)((ulonglong)uVar2 + param_2);
      if (uVar2 == 0x37) {
        bVar4 = bVar4 & ~param_4;
      }
      bVar3 = (byte)uVar11;
      uVar11 = uVar11 + 8;
      uVar7 = uVar7 | (ulonglong)bVar4 << (bVar3 & 0x3f);
    }
    uVar5 = uVar7;
    if (uVar9 < 0xf) {
      uVar5 = (ulonglong)((uint)uVar7 & 0xfffffff);
    }
    uVar1 = *puVar8;
    uVar11 = uVar11 - 0x1c;
    *(int *)(param_1 + -0x149dcc240 + (longlong)puVar8) = (int)uVar5;
    uVar9 = uVar9 + 1;
    puVar8 = puVar8 + 1;
    uVar7 = uVar7 >> 0x1c;
    lVar6 = ((uVar5 & 0xffffffff) - (ulonglong)uVar1) + lVar10;
    lVar10 = lVar6 >> 0x20;
  } while (uVar9 < 0x10);
  if (param_3 == 0) {
    uVar2 = FUN_1455d7bd0(param_1);
    uVar2 = ~uVar2;
  }
  else {
    uVar2 = 0xffffffff;
  }
  uVar11 = (uint)((ulonglong)lVar6 >> 0x20);
  return 0xffffffffU - ((int)(uVar11 - 1 & ~uVar11) >> 0x1f) &
         (int)((uint)uVar7 - 1 & ~(uint)uVar7) >> 0x1f & uVar2;
}



// FUNCTION 1455d7e10 FUN_1455d7e10 body=669 status=ok
// SIG undefined FUN_1455d7e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d7e10(uint *param_1,int *param_2,uint *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  longlong local_98;
  longlong local_90;
  uint *local_88;
  uint *local_80;
  uint local_78 [4];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58 [4];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1455d7e32;
  local_38 = DAT_14c707940 ^ (ulonglong)&local_98;
  local_80 = param_1;
  uVar9 = 0;
  uVar2 = 0;
  iVar11 = 1;
  local_58[1] = param_3[9] + param_3[1];
  local_78[2] = param_2[10] + param_2[2];
  local_58[2] = param_3[10] + param_3[2];
  local_78[3] = param_2[0xb] + param_2[3];
  local_58[3] = param_3[0xb] + param_3[3];
  local_68 = param_2[0xc] + param_2[4];
  local_48 = param_3[0xc] + param_3[4];
  local_64 = param_2[0xd] + param_2[5];
  local_44 = param_3[0xd] + param_3[5];
  local_60 = param_2[0xe] + param_2[6];
  local_40 = param_3[0xe] + param_3[6];
  local_5c = param_2[0xf] + param_2[7];
  local_3c = param_3[0xf] + param_3[7];
  local_88 = param_1 + 8;
  local_78[0] = param_2[8] + *param_2;
  local_78[1] = param_2[9] + param_2[1];
  local_58[0] = param_3[8] + *param_3;
  local_98 = (longlong)param_3 + (-0x1c - (longlong)param_1);
  local_90 = (longlong)param_2 + (-0x20 - (longlong)param_1);
  lVar3 = local_90;
  lVar6 = 1;
  puVar12 = local_88;
  do {
    lVar10 = 0;
    lVar4 = (longlong)iVar11;
    if (0 < iVar11) {
      puVar7 = param_3;
      puVar8 = (uint *)(lVar3 + (longlong)puVar12);
      do {
        lVar10 = lVar10 + (ulonglong)*puVar8 * (ulonglong)*puVar7;
        uVar2 = uVar2 + (ulonglong)
                        *(uint *)((longlong)local_78 + (4 - (longlong)param_2) +
                                 (longlong)(puVar8 + -1)) *
                        (ulonglong)
                        *(uint *)(((longlong)&local_5c - (longlong)param_3) + (longlong)(puVar7 + 1)
                                 );
        uVar9 = uVar9 + (ulonglong)puVar8[8] * (ulonglong)puVar7[8];
        lVar4 = lVar4 + -1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + -1;
      } while (lVar4 != 0);
    }
    lVar3 = uVar2 - lVar10;
    lVar10 = uVar9 + lVar10;
    lVar4 = 0;
    if (lVar6 < 8) {
      lVar5 = 8 - lVar6;
      puVar7 = (uint *)(local_98 + (longlong)puVar12);
      puVar8 = (uint *)(param_2 + 0xf);
      do {
        lVar10 = lVar10 - (ulonglong)puVar8[-8] * (ulonglong)*puVar7;
        lVar4 = lVar4 + (ulonglong)
                        *(uint *)((longlong)puVar7 + ((longlong)local_58 - (longlong)param_3)) *
                        (ulonglong)
                        *(uint *)((longlong)&local_98 + (4 - (longlong)param_2) +
                                 (longlong)(puVar8 + -1));
        lVar3 = lVar3 + (ulonglong)puVar7[8] * (ulonglong)*puVar8;
        lVar5 = lVar5 + -1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + -1;
      } while (lVar5 != 0);
    }
    uVar9 = (ulonglong)(lVar10 + lVar4) >> 0x1c;
    puVar12[-8] = (uint)(lVar10 + lVar4) & 0xfffffff;
    iVar11 = iVar11 + 1;
    uVar2 = (ulonglong)(lVar3 + lVar4) >> 0x1c;
    *puVar12 = (uint)(lVar3 + lVar4) & 0xfffffff;
    puVar12 = puVar12 + 1;
    bVar1 = lVar6 < 8;
    lVar3 = local_90;
    lVar6 = lVar6 + 1;
  } while (bVar1);
  uVar9 = uVar9 + *local_88 + uVar2;
  param_1[9] = param_1[9] + (int)(uVar9 >> 0x1c);
  *local_88 = (uint)uVar9 & 0xfffffff;
  param_1[1] = param_1[1] + (int)(uVar2 + *param_1 >> 0x1c);
  *param_1 = (uint)(uVar2 + *param_1) & 0xfffffff;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)&local_98);
}



// FUNCTION 1455d80d0 FUN_1455d80d0 body=486 status=ok
// SIG undefined FUN_1455d80d0(void)

void FUN_1455d80d0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = *param_2;
  uVar9 = (ulonglong)param_3;
  uVar2 = param_2[8];
  uVar6 = (uint)(uVar1 * uVar9) & 0xfffffff;
  *param_1 = uVar6;
  uVar5 = (uint)(uVar2 * uVar9) & 0xfffffff;
  param_1[8] = uVar5;
  uVar3 = param_2[9];
  uVar4 = param_2[1] * uVar9 + (uVar1 * uVar9 >> 0x1c);
  param_1[1] = (uint)uVar4 & 0xfffffff;
  uVar8 = uVar3 * uVar9 + (uVar2 * uVar9 >> 0x1c);
  param_1[9] = (uint)uVar8 & 0xfffffff;
  uVar4 = param_2[2] * uVar9 + (uVar4 >> 0x1c);
  uVar8 = param_2[10] * uVar9 + (uVar8 >> 0x1c);
  param_1[2] = (uint)uVar4 & 0xfffffff;
  param_1[10] = (uint)uVar8 & 0xfffffff;
  uVar7 = param_2[3] * uVar9 + (uVar4 >> 0x1c);
  uVar4 = param_2[0xb] * uVar9 + (uVar8 >> 0x1c);
  param_1[3] = (uint)uVar7 & 0xfffffff;
  param_1[0xb] = (uint)uVar4 & 0xfffffff;
  uVar8 = param_2[4] * uVar9 + (uVar7 >> 0x1c);
  uVar1 = param_2[0xc];
  param_1[4] = (uint)uVar8 & 0xfffffff;
  uVar7 = uVar1 * uVar9 + (uVar4 >> 0x1c);
  param_1[0xc] = (uint)uVar7 & 0xfffffff;
  uVar4 = param_2[5] * uVar9 + (uVar8 >> 0x1c);
  uVar8 = param_2[0xd] * uVar9 + (uVar7 >> 0x1c);
  param_1[5] = (uint)uVar4 & 0xfffffff;
  param_1[0xd] = (uint)uVar8 & 0xfffffff;
  uVar7 = param_2[6] * uVar9 + (uVar4 >> 0x1c);
  uVar1 = param_2[0xe];
  param_1[6] = (uint)uVar7 & 0xfffffff;
  uVar4 = uVar1 * uVar9 + (uVar8 >> 0x1c);
  param_1[0xe] = (uint)uVar4 & 0xfffffff;
  uVar8 = param_2[7] * uVar9 + (uVar7 >> 0x1c);
  uVar1 = param_2[0xf];
  param_1[7] = (uint)uVar8 & 0xfffffff;
  uVar4 = uVar1 * uVar9 + (uVar4 >> 0x1c);
  uVar7 = uVar4 >> 0x1c;
  param_1[0xf] = (uint)uVar4 & 0xfffffff;
  uVar4 = (uVar8 >> 0x1c) + uVar5 + uVar7;
  param_1[9] = param_1[9] + (int)(uVar4 >> 0x1c);
  param_1[8] = (uint)uVar4 & 0xfffffff;
  uVar7 = uVar7 + uVar6;
  param_1[1] = param_1[1] + (int)(uVar7 >> 0x1c);
  *param_1 = (uint)uVar7 & 0xfffffff;
  return;
}



// FUNCTION 1455d82c0 FUN_1455d82c0 body=25 status=ok
// SIG undefined FUN_1455d82c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d82c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1455d7e10(param_1,param_2,param_2);
  return;
}



// FUNCTION 1455d82e0 FUN_1455d82e0 body=218 status=ok
// SIG undefined FUN_1455d82e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1455d82e0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar7 = 0;
  uVar2 = uVar7;
  uVar3 = uVar7;
  uVar9 = uVar7;
  uVar10 = uVar7;
LAB_1455d8306:
  do {
    uVar8 = (uint)uVar9;
    if (uVar2 < 0x38) {
      pbVar1 = (byte *)(uVar2 + param_2);
      uVar2 = uVar2 + 1;
      uVar4 = uVar3 + 8;
      uVar8 = uVar8 | (uint)*pbVar1 << ((byte)uVar3 & 0x1f);
      uVar3 = uVar4;
      uVar9 = (ulonglong)uVar8;
      if (uVar4 < 0x20) goto LAB_1455d8306;
    }
    *(uint *)(param_1 + uVar10 * 4) = uVar8;
    uVar10 = uVar10 + 1;
    uVar3 = uVar7;
    uVar9 = uVar7;
    if (0xd < uVar10) {
      lVar11 = 7;
      puVar5 = &DAT_149dcc308;
      do {
        lVar6 = (((longlong)
                  (uVar7 + ((ulonglong)*(uint *)(param_1 + -0x149dcc308 + (longlong)puVar5) -
                           (ulonglong)*puVar5)) >> 0x20) - (ulonglong)puVar5[1]) +
                (ulonglong)*(uint *)(param_1 + -0x149dcc30c + (longlong)(puVar5 + 2));
        uVar7 = lVar6 >> 0x20;
        lVar11 = lVar11 + -1;
        puVar5 = puVar5 + 2;
      } while (lVar11 != 0);
      FUN_1455d8960(param_1,param_1,&DAT_149dcc400);
      FUN_1455d8960(param_1,param_1,&DAT_149dcc340);
      uVar8 = (uint)((ulonglong)lVar6 >> 0x20);
      return -1 - ((int)(uVar8 - 1 & ~uVar8) >> 0x1f);
    }
  } while( true );
}



// FUNCTION 1455d83c0 FUN_1455d83c0 body=589 status=ok
// SIG undefined FUN_1455d83c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d83c0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  uint local_50 [14];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1455d83d5;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    param_1[6] = 0;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    lVar7 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    lVar2 = ((param_3 - lVar7 >> 1) + lVar7 >> 5) * 0x38;
    lVar7 = lVar2 + -0x38;
    if (lVar2 - param_3 != 0) {
      lVar7 = lVar2;
    }
    uVar8 = 0;
    uVar12 = 0;
    do {
      uVar9 = 0;
      uVar5 = 0;
      do {
        if (param_3 - lVar7 <= uVar8) break;
        lVar2 = lVar7 + uVar8;
        uVar8 = uVar8 + 1;
        bVar4 = (byte)uVar5;
        uVar5 = uVar5 + 8;
        uVar9 = uVar9 | (uint)*(byte *)(lVar2 + param_2) << (bVar4 & 0x1f);
      } while (uVar5 < 0x20);
      *(uint *)((longlong)&local_88 + uVar12 * 4) = uVar9;
      uVar12 = uVar12 + 1;
    } while (uVar12 < 0xe);
    if (param_3 == 0x38) {
      FUN_1455d8960(param_1,&local_88,&DAT_149dcc400);
      FUN_1455d8960(param_1,param_1,&DAT_149dcc340);
      puVar6 = (uint *)&local_88;
    }
    else {
      while (lVar7 != 0) {
        lVar7 = lVar7 + -0x38;
        FUN_1455d8960(&local_88,&local_88);
        FUN_1455d82e0(local_50);
        uVar8 = 0;
        lVar10 = 0xe;
        lVar2 = 0;
        do {
          uVar12 = uVar8 + *(uint *)((longlong)&local_88 + lVar2) +
                   (ulonglong)*(uint *)((longlong)local_50 + lVar2);
          *(int *)((longlong)&local_88 + lVar2) = (int)uVar12;
          uVar8 = uVar12 >> 0x20;
          lVar10 = lVar10 + -1;
          lVar2 = lVar2 + 4;
        } while (lVar10 != 0);
        lVar10 = 0;
        lVar11 = 0xe;
        lVar2 = 0;
        do {
          lVar3 = lVar10 + ((ulonglong)*(uint *)((longlong)&local_88 + lVar2) -
                           (ulonglong)*(uint *)((longlong)&DAT_149dcc308 + lVar2));
          *(int *)((longlong)&local_88 + lVar2) = (int)lVar3;
          lVar10 = lVar3 >> 0x20;
          lVar11 = lVar11 + -1;
          lVar2 = lVar2 + 4;
        } while (lVar11 != 0);
        lVar10 = 0;
        lVar11 = 0xe;
        lVar2 = 0;
        do {
          lVar10 = lVar10 + (ulonglong)*(uint *)((longlong)&local_88 + lVar2) +
                   (ulonglong)
                   (*(uint *)((longlong)&DAT_149dcc308 + lVar2) &
                   (int)((ulonglong)lVar3 >> 0x20) + (int)(uVar12 >> 0x20));
          *(int *)((longlong)&local_88 + lVar2) = (int)lVar10;
          lVar10 = lVar10 >> 0x20;
          lVar11 = lVar11 + -1;
          lVar2 = lVar2 + 4;
        } while (lVar11 != 0);
      }
      *param_1 = local_88;
      param_1[1] = uStack_80;
      param_1[2] = local_78;
      param_1[3] = uStack_70;
      *(undefined4 *)(param_1 + 4) = local_68;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
      *(undefined4 *)(param_1 + 5) = uStack_60;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
      param_1[6] = local_58;
      FUN_14259f0c0(&local_88,0x38);
      puVar6 = local_50;
    }
    FUN_14259f0c0(puVar6,0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1455d8630 FUN_1455d8630 body=108 status=ok
// SIG undefined FUN_1455d8630(void)

void FUN_1455d8630(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 2;
  lVar3 = 0xe;
  do {
    *(char *)((ulonglong)(uVar2 - 2) + param_1) = (char)*param_2;
    *(char *)((ulonglong)(uVar2 - 1) + param_1) = (char)((uint)*param_2 >> 8);
    *(char *)((ulonglong)uVar2 + param_1) = (char)((uint)*param_2 >> 0x10);
    uVar1 = uVar2 + 1;
    uVar2 = uVar2 + 4;
    *(char *)((ulonglong)uVar1 + param_1) = (char)((uint)*param_2 >> 0x18);
    lVar3 = lVar3 + -1;
    param_2 = param_2 + 1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1455d86a0 FUN_1455d86a0 body=212 status=ok
// SIG undefined FUN_1455d86a0(void)

void FUN_1455d86a0(uint *param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar6 = 0;
  lVar4 = 0xe;
  lVar7 = 0xe;
  puVar3 = param_3;
  uVar9 = uVar6;
  do {
    uVar2 = *puVar3;
    puVar1 = (uint *)((param_2 - (longlong)param_3) + (longlong)puVar3);
    puVar3 = puVar3 + 1;
    uVar8 = uVar9 + uVar2 + (ulonglong)*puVar1;
    *(int *)((longlong)param_1 + (-4 - (longlong)param_3) + (longlong)puVar3) = (int)uVar8;
    uVar9 = uVar8 >> 0x20;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 0xe;
  uVar9 = uVar6;
  puVar3 = param_1;
  do {
    lVar5 = uVar9 + ((ulonglong)*puVar3 -
                    (ulonglong)
                    *(uint *)(((longlong)&DAT_149dcc308 - (longlong)param_1) + (longlong)puVar3));
    *puVar3 = (uint)lVar5;
    uVar9 = lVar5 >> 0x20;
    lVar7 = lVar7 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar7 != 0);
  puVar3 = param_1;
  do {
    lVar7 = uVar6 + *puVar3 +
            (ulonglong)
            (*(uint *)((longlong)puVar3 + ((longlong)&DAT_149dcc308 - (longlong)param_1)) &
            (int)((ulonglong)lVar5 >> 0x20) + (int)(uVar8 >> 0x20));
    *puVar3 = (uint)lVar7;
    uVar6 = lVar7 >> 0x20;
    lVar4 = lVar4 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 1455d8780 FUN_1455d8780 body=149 status=ok
// SIG undefined FUN_1455d8780(void)

void FUN_1455d8780(uint *param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = 0;
  lVar8 = 0xe;
  lVar5 = 0xe;
  lVar4 = lVar7;
  puVar6 = param_3;
  do {
    puVar1 = (uint *)((param_2 - (longlong)param_3) + (longlong)puVar6);
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    uVar3 = lVar4 + ((ulonglong)*puVar1 - (ulonglong)uVar2);
    *(int *)((longlong)param_1 + (-4 - (longlong)param_3) + (longlong)puVar6) = (int)uVar3;
    lVar4 = (longlong)uVar3 >> 0x20;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar6 = param_1;
  do {
    lVar7 = lVar7 + (ulonglong)*puVar6 +
            ((ulonglong)*(uint *)(((longlong)&DAT_149dcc308 - (longlong)param_1) + (longlong)puVar6)
            & uVar3 >> 0x20);
    *puVar6 = (uint)lVar7;
    lVar7 = lVar7 >> 0x20;
    lVar8 = lVar8 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar8 != 0);
  return;
}



// FUNCTION 1455d8820 FUN_1455d8820 body=46 status=ok
// SIG undefined FUN_1455d8820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d8820(undefined8 param_1)

{
  FUN_1455d8960();
  FUN_1455d8960(param_1,param_1,&DAT_149dcc340);
  return;
}



// FUNCTION 1455d8850 FUN_1455d8850 body=232 status=ok
// SIG undefined FUN_1455d8850(void)

void FUN_1455d8850(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  uVar2 = 0;
  lVar5 = 0xe;
  puVar3 = param_2;
  do {
    uVar2 = uVar2 + *puVar3 +
            (ulonglong)
            (*(uint *)(((longlong)&DAT_149dcc308 - (longlong)param_2) + (longlong)puVar3) &
            -(uVar1 & 1));
    *(int *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)(puVar3 + 1)) = (int)uVar2;
    uVar2 = uVar2 >> 0x20;
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar5 != 0);
  puVar3 = param_1 + 9;
  lVar5 = 5;
  *param_1 = param_1[1] << 0x1f | *param_1 >> 1;
  param_1[1] = param_1[2] << 0x1f | param_1[1] >> 1;
  param_1[2] = param_1[3] << 0x1f | param_1[2] >> 1;
  param_1[3] = param_1[4] << 0x1f | param_1[3] >> 1;
  param_1[4] = param_1[5] << 0x1f | param_1[4] >> 1;
  param_1[5] = param_1[6] << 0x1f | param_1[5] >> 1;
  param_1[6] = param_1[7] << 0x1f | param_1[6] >> 1;
  param_1[7] = param_1[8] << 0x1f | param_1[7] >> 1;
  puVar4 = param_1 + 8;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar4 = uVar1 << 0x1f | *puVar4 >> 1;
    lVar5 = lVar5 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar5 != 0);
  param_1[0xd] = (uint)(uVar2 << 0x1f) | param_1[0xd] >> 1;
  return;
}



// FUNCTION 1455d8940 FUN_1455d8940 body=25 status=ok
// SIG undefined FUN_1455d8940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d8940(undefined8 param_1)

{
  FUN_14259f0c0(param_1,0x38);
  return;
}



// FUNCTION 1455d8960 FUN_1455d8960 body=403 status=ok
// SIG undefined FUN_1455d8960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d8960(uint *param_1,uint *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint local_78 [16];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1455d897c;
  local_38 = DAT_14c707940 ^ (ulonglong)local_78;
  uVar11 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  lVar6 = 0xe;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_78[0xc] = 0;
  local_78[0xd] = 0;
  lVar12 = 0xe;
  local_78[0xe] = 0;
  uVar13 = uVar11;
  do {
    uVar5 = *param_2;
    lVar9 = 0xe;
    puVar4 = local_78;
    uVar8 = uVar11;
    do {
      uVar7 = uVar8 + *puVar4 +
              (ulonglong)*(uint *)((longlong)puVar4 + (param_3 - (longlong)local_78)) *
              (ulonglong)uVar5;
      *puVar4 = (uint)uVar7;
      uVar8 = uVar7 >> 0x20;
      lVar9 = lVar9 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar9 != 0);
    uVar5 = local_78[0] * -0x516e743b;
    local_78[0xe] = (int)(uVar7 >> 0x20);
    uVar8 = uVar11;
    uVar7 = uVar11;
    uVar10 = uVar11;
    do {
      uVar3 = uVar8;
      uVar7 = uVar7 + *(uint *)((longlong)local_78 + uVar10) +
              (ulonglong)*(uint *)((longlong)&DAT_149dcc308 + uVar10) * (ulonglong)uVar5;
      iVar1 = (int)uVar3;
      if (iVar1 != 0) {
        local_78[iVar1 - 1] = (uint)uVar7;
      }
      uVar7 = uVar7 >> 0x20;
      uVar2 = iVar1 + 1;
      uVar10 = uVar10 + 4;
      uVar8 = (ulonglong)uVar2;
    } while (uVar2 < 0xe);
    param_2 = param_2 + 1;
    uVar8 = uVar13 + uVar7 + (ulonglong)local_78[uVar2];
    local_78[uVar3] = (uint)uVar8;
    uVar13 = uVar8 >> 0x20;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  lVar12 = 0xe;
  uVar13 = uVar11;
  uVar7 = uVar11;
  do {
    lVar9 = uVar13 + ((ulonglong)*(uint *)((longlong)local_78 + uVar7) -
                     (ulonglong)*(uint *)((longlong)&DAT_149dcc308 + uVar7));
    *(int *)(uVar7 + (longlong)param_1) = (int)lVar9;
    uVar13 = lVar9 >> 0x20;
    lVar12 = lVar12 + -1;
    uVar7 = uVar7 + 4;
  } while (lVar12 != 0);
  puVar4 = param_1;
  do {
    lVar12 = uVar11 + *puVar4 +
             (ulonglong)
             (*(uint *)(((longlong)&DAT_149dcc308 - (longlong)param_1) + (longlong)puVar4) &
             (int)((ulonglong)lVar9 >> 0x20) + (int)(uVar8 >> 0x20));
    *puVar4 = (uint)lVar12;
    uVar11 = lVar12 >> 0x20;
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)local_78);
}



// FUNCTION 1455d8b10 FUN_1455d8b10 body=355 status=ok
// SIG undefined FUN_1455d8b10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1455d8b10(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1455d8b25;
  lVar6 = param_2;
  if (param_2 == 0) {
    puVar3 = (undefined8 *)FUN_1455d8e10();
    if (puVar3 == (undefined8 *)0x0) goto LAB_1455d8c41;
    puVar1 = (undefined4 *)*puVar3;
    if (puVar1 == (undefined4 *)0x0) {
      uVar4 = FUN_145505110();
    }
    else {
      if (puVar1[4] != 0x20) {
        lVar6 = FUN_144b9ff70(*(undefined8 *)(puVar1 + 2),*puVar1);
        goto LAB_1455d8b78;
      }
      uVar4 = FUN_144b9ff50();
    }
    lVar6 = FUN_144b9e650(uVar4);
  }
LAB_1455d8b78:
  if (lVar6 == 0) {
LAB_1455d8c41:
    FUN_144ba24f0(0x2e,0x6f,0x7f,"crypto\\cms\\cms_lib.c",0x40,uVar7);
    return 0;
  }
  iVar2 = FUN_144ea8fa0(*param_1);
  if (iVar2 == 0x15) {
    return lVar6;
  }
  if (iVar2 == 0x16) {
    lVar5 = FUN_1454eb550(param_1);
  }
  else if (iVar2 == 0x17) {
    lVar5 = FUN_1454ea650(param_1);
  }
  else if (iVar2 == 0x19) {
    lVar5 = FUN_145631de0(param_1);
  }
  else {
    if (iVar2 != 0x1a) {
      FUN_144ba24f0(0x2e,0x6f,0x9c,"crypto\\cms\\cms_lib.c",0x5e,uVar7);
      goto LAB_1455d8bc6;
    }
    lVar5 = FUN_1455d9530(param_1);
  }
  if (lVar5 != 0) {
    lVar6 = FUN_144b9f280(lVar5,lVar6);
    return lVar6;
  }
LAB_1455d8bc6:
  if (param_2 != 0) {
    return 0;
  }
  FUN_144b9e7b0(lVar6);
  return 0;
}



// FUNCTION 1455d8c80 FUN_1455d8c80 body=387 status=ok
// SIG undefined FUN_1455d8c80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455d8c80(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 local_res18 [2];
  undefined8 uVar6;
  
  uVar6 = 0x1455d8c8f;
  plVar3 = (longlong *)FUN_1455d8e10();
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  if ((*plVar3 != 0) && ((*(byte *)(*plVar3 + 0x10) & 0x20) != 0)) {
    lVar4 = FUN_144b9f470(param_2,0x401);
    if (lVar4 == 0) {
      FUN_144ba24f0(0x2e,0x6e,0x69,"crypto\\cms\\cms_lib.c",0x78,uVar6);
      return 0;
    }
    uVar1 = FUN_144b9efc0(lVar4,3,0,local_res18);
    FUN_144b9e620(lVar4,0x200);
    FUN_144b9efc0(lVar4,0x82,0,0);
    FUN_144f03e20(*plVar3,local_res18[0],uVar1);
    *(uint *)(*plVar3 + 0x10) = *(uint *)(*plVar3 + 0x10) & 0xffffffdf;
  }
  iVar2 = FUN_144ea8fa0(*param_1);
  if (iVar2 < 0x1a) {
    if (iVar2 == 0x19) {
      uVar6 = FUN_145631e00(param_1,param_2,0);
      return uVar6;
    }
    if (iVar2 == 0x15) {
      return 1;
    }
    if (iVar2 == 0x16) {
      uVar6 = FUN_1454eb650(param_1,param_2);
      return uVar6;
    }
    bVar5 = iVar2 == 0x17;
  }
  else {
    if (iVar2 == 0x1a) {
      return 1;
    }
    bVar5 = iVar2 == 0x312;
  }
  if (bVar5) {
    return 1;
  }
  FUN_144ba24f0(0x2e,0x6e,0x9c,"crypto\\cms\\cms_lib.c",0x93,uVar6);
  return 0;
}



// FUNCTION 1455d8e10 FUN_1455d8e10 body=216 status=ok
// SIG undefined FUN_1455d8e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_1455d8e10(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1455d8e1c;
  iVar1 = FUN_144ea8fa0(*param_1);
  if (iVar1 < 0x1a) {
    if (iVar1 != 0x19) {
      if (iVar1 == 0x15) {
        return (int *)(param_1 + 1);
      }
      if (iVar1 != 0x16) {
        if (iVar1 == 0x17) {
          return (int *)(*(longlong *)(param_1[1] + 0x18) + 0x10);
        }
        goto LAB_1455d8e81;
      }
    }
    piVar2 = *(int **)(param_1[1] + 0x10);
  }
  else {
    if (iVar1 == 0x1a) {
      return (int *)(*(longlong *)(param_1[1] + 8) + 0x10);
    }
    if (iVar1 == 0xcd) {
      return (int *)(*(longlong *)(param_1[1] + 0x28) + 8);
    }
    if (iVar1 == 0x312) {
      return (int *)(*(longlong *)(param_1[1] + 0x18) + 8);
    }
LAB_1455d8e81:
    piVar2 = (int *)param_1[1];
    if (*piVar2 != 4) {
      FUN_144ba24f0(0x2e,0x81,0x98,"crypto\\cms\\cms_lib.c",0xb9,uVar3);
      return (int *)0x0;
    }
  }
  return piVar2 + 2;
}



// FUNCTION 1455d8ef0 FUN_1455d8ef0 body=200 status=ok
// SIG undefined FUN_1455d8ef0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1455d8ef0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res10 [3];
  
  lVar5 = 0;
  FUN_144efded0(local_res10,0,0,param_1);
  uVar1 = FUN_144ea8fa0(local_res10[0]);
  uVar3 = FUN_144ea8ee0(uVar1);
  lVar4 = FUN_144baab30(uVar3);
  if (lVar4 == 0) {
    uVar1 = 0x128;
    uVar3 = 0x95;
  }
  else {
    uVar3 = FUN_145505650();
    lVar5 = FUN_144b9e650(uVar3);
    if (lVar5 != 0) {
      iVar2 = FUN_144b9efc0(lVar5,0x6f,0,lVar4);
      if (iVar2 != 0) {
        return lVar5;
      }
    }
    uVar1 = 0x12d;
    uVar3 = 0x77;
  }
  FUN_144ba24f0(0x2e,0x74,uVar3,"crypto\\cms\\cms_lib.c",uVar1);
  FUN_144b9e7b0(lVar5);
  return 0;
}



// FUNCTION 1455d8fc0 FUN_1455d8fc0 body=253 status=ok
// SIG undefined FUN_1455d8fc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455d8fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 uVar5;
  
  uVar5 = 0x1455d8fd5;
  FUN_144efded0(&local_res20,0,0,param_3);
  iVar1 = FUN_144ea8fa0(local_res20);
  lVar3 = FUN_144b9f470(param_2,0x208);
  while( true ) {
    if (lVar3 == 0) {
      FUN_144ba24f0(0x2e,0x73,0x83,"crypto\\cms\\cms_lib.c",0x145,uVar5);
      return 0;
    }
    FUN_144b9efc0(lVar3,0x78,0,&local_res10);
    uVar4 = FUN_144ba3d20(local_res10);
    iVar2 = FUN_144ba3cb0(uVar4);
    if (iVar2 == iVar1) break;
    uVar4 = FUN_144ba3d20(local_res10);
    iVar2 = FUN_144ba3cc0(uVar4);
    if (iVar2 == iVar1) break;
    uVar4 = FUN_144b9f4a0(lVar3);
    lVar3 = FUN_144b9f470(uVar4,0x208);
  }
  uVar5 = FUN_144ba5840(param_1,local_res10);
  return uVar5;
}



// FUNCTION 1455d90c0 FUN_1455d90c0 body=44 status=ok
// SIG undefined FUN_1455d90c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d90c0(void)

{
  FUN_144ed9740();
  return;
}



// FUNCTION 1455d90f0 FUN_1455d90f0 body=1049 status=ok
// SIG undefined FUN_1455d90f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d90f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar11;
  bool bVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  uint local_60;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined8 uStack_30;
  longlong lVar10;
  longlong lVar15;
  
  uStack_30 = 0x1455d9112;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = *(longlong *)(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 8);
  lVar10 = 0;
  lVar9 = 0;
  puVar13 = (undefined1 *)0x0;
  local_4c = 0;
  lVar15 = 0;
  lVar14 = 0;
  bVar2 = false;
  bVar12 = false;
  local_50 = (uint)(lVar8 != 0);
  uVar5 = FUN_145505fc0();
  lVar6 = FUN_144b9e650(uVar5);
  if (lVar6 == 0) {
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x29);
    FUN_144ba24f0(0x2e,0x78,0x41,"crypto\\cms\\cms_enc.c");
    goto LAB_1455d94fc;
  }
  FUN_144b9efc0(lVar6,0x81,0,&local_58);
  bVar11 = bVar12;
  if (lVar8 == 0) {
    uVar4 = FUN_144ea8fa0(*plVar1);
    uVar5 = FUN_144ea8ee0(uVar4);
    lVar7 = FUN_144baaaf0(uVar5);
    if (lVar7 != 0) goto LAB_1455d91aa;
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x3a);
    FUN_144ba24f0(0x2e,0x78,0x94,"crypto\\cms\\cms_enc.c");
LAB_1455d94ae:
    FUN_144ea66f0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  "crypto\\cms\\cms_enc.c",0xa0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    bVar12 = bVar11;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
LAB_1455d91aa:
    local_60 = local_50;
    local_68 = (undefined1 *)0x0;
    iVar3 = FUN_144ba4d00(local_58,lVar7,0,0);
    if (iVar3 < 1) {
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x41);
      FUN_144ba24f0(0x2e,0x78,0x65,"crypto\\cms\\cms_enc.c");
      lVar9 = lVar10;
      lVar14 = lVar15;
      bVar11 = bVar2;
      goto LAB_1455d94ae;
    }
    if (lVar8 == 0) {
      iVar3 = FUN_144ba4290(local_58,plVar1[1]);
      if (0 < iVar3) goto LAB_1455d92a9;
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x56);
      FUN_144ba24f0(0x2e,0x78,0x66,"crypto\\cms\\cms_enc.c");
      goto LAB_1455d94ae;
    }
    uVar5 = FUN_144ba3db0();
    uVar4 = FUN_144ba3f10(uVar5);
    lVar9 = FUN_144ea8d60(uVar4);
    *plVar1 = lVar9;
    if (lVar9 == 0) {
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x4a);
      FUN_144ba24f0(0x2e,0x2e,0xc2,"crypto\\cms\\cms_enc.c");
      lVar9 = lVar10;
      lVar14 = lVar15;
      bVar11 = bVar2;
      goto LAB_1455d94ae;
    }
    iVar3 = FUN_144ba3df0(local_58);
    if (0 < iVar3) {
      iVar3 = FUN_144bac850(local_48,iVar3);
      lVar9 = lVar10;
      lVar14 = lVar15;
      bVar11 = bVar2;
      if (iVar3 < 1) goto LAB_1455d94ae;
      puVar13 = local_48;
    }
LAB_1455d92a9:
    iVar3 = FUN_144ba3de0(local_58);
    lVar14 = (longlong)iVar3;
    if ((lVar8 == 0) || (lVar9 = lVar10, *(longlong *)(param_1 + 0x20) == 0)) {
      lVar9 = FUN_144ea64e0(lVar14,"crypto\\cms\\cms_enc.c",0x5c);
      if (lVar9 == 0) {
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x5e);
        FUN_144ba24f0(0x2e,0x78,0x41,"crypto\\cms\\cms_enc.c");
        bVar11 = bVar12;
      }
      else {
        iVar3 = FUN_144ba5300(local_58,lVar9);
        bVar11 = bVar12;
        if (0 < iVar3) goto LAB_1455d934c;
      }
      goto LAB_1455d94ae;
    }
LAB_1455d934c:
    if (*(longlong *)(param_1 + 0x20) == 0) {
      *(longlong *)(param_1 + 0x20) = lVar9;
      lVar9 = 0;
      *(longlong *)(param_1 + 0x28) = lVar14;
      if (lVar8 == 0) {
        FUN_144ba26f0();
      }
      else {
        local_4c = 1;
      }
    }
    if ((*(longlong *)(param_1 + 0x28) == lVar14) ||
       (iVar3 = FUN_144ba51b0(local_58,*(undefined4 *)(param_1 + 0x28)), 0 < iVar3)) {
LAB_1455d93b9:
      local_60 = local_50;
      local_68 = puVar13;
      iVar3 = FUN_144ba4d00(local_58,0,0,*(undefined8 *)(param_1 + 0x20));
      bVar12 = bVar2;
      if (iVar3 < 1) {
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x88);
        FUN_144ba24f0(0x2e,0x78,0x65,"crypto\\cms\\cms_enc.c");
      }
      else if (lVar8 == 0) {
LAB_1455d949c:
        bVar12 = true;
      }
      else {
        lVar8 = FUN_144efe770();
        plVar1[1] = lVar8;
        if (lVar8 == 0) {
          local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x8e);
          FUN_144ba24f0(0x2e,0x78,0x41,"crypto\\cms\\cms_enc.c");
        }
        else {
          iVar3 = FUN_144ba41b0(local_58,lVar8);
          if (0 < iVar3) {
            if (*(int *)plVar1[1] == -1) {
              FUN_144efe790();
              plVar1[1] = 0;
            }
            goto LAB_1455d949c;
          }
          local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x93);
          FUN_144ba24f0(0x2e,0x78,0x66,"crypto\\cms\\cms_enc.c");
        }
      }
    }
    else {
      if ((lVar8 == 0) && (*(int *)(param_1 + 0x30) == 0)) {
        FUN_144ea66f0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      "crypto\\cms\\cms_enc.c",0x7d);
        *(longlong *)(param_1 + 0x20) = lVar9;
        lVar9 = 0;
        *(longlong *)(param_1 + 0x28) = lVar14;
        FUN_144ba26f0();
        goto LAB_1455d93b9;
      }
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x79);
      FUN_144ba24f0(0x2e,0x78,0x76,"crypto\\cms\\cms_enc.c");
    }
    bVar11 = bVar12;
    if ((local_4c == 0) || (!bVar12)) goto LAB_1455d94ae;
  }
  FUN_144ea66f0(lVar9,lVar14,"crypto\\cms\\cms_enc.c",0xa3);
  if (!bVar12) {
    FUN_144b9e7b0(lVar6);
  }
LAB_1455d94fc:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 1455d9530 FUN_1455d9530 body=50 status=ok
// SIG undefined FUN_1455d9530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d9530(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((*(longlong *)(*(longlong *)(puVar1 + 2) + 0x18) != 0) && (*(longlong *)(puVar1 + 4) != 0)) {
    *puVar1 = 2;
  }
  FUN_1455d90f0();
  return;
}



// FUNCTION 1455d9570 FUN_1455d9570 body=950 status=ok
// SIG undefined FUN_1455d9570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1455d9570(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar16;
  undefined4 uVar17;
  longlong lVar15;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar16 = 0x1455d9582;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar15 = 0;
  lVar14 = 0;
  lVar11 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    FUN_144ba24f0(0x2e,0xa7,0xb2,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,0x125),0x1455d9582);
    return 0;
  }
  puVar7 = *(undefined8 **)(lVar1 + 0x10);
  if ((puVar7 == (undefined8 *)0x0) || (iVar4 = FUN_144ea8fa0(*puVar7), iVar4 != 0x37d)) {
    FUN_144ba24f0(0x2e,0xa7,0xb3,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,300),uVar16);
    return 0;
  }
  uVar6 = FUN_144efde20();
  puVar7 = (undefined8 *)FUN_144ed07c0(uVar6,puVar7[1]);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_144ba24f0(0x2e,0xa7,0xb0,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,0x135),uVar16);
    return 0;
  }
  uVar5 = FUN_144ea8fa0(*puVar7);
  uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar16 = FUN_144ea8ee0(uVar5);
  lVar8 = FUN_144baaaf0(uVar16);
  if (lVar8 == 0) {
    uVar16 = CONCAT44(uVar12,0x13c);
    uVar12 = 0x94;
  }
  else {
    lVar9 = FUN_144ba50b0();
    if (lVar9 != 0) {
      uVar16 = CONCAT44(uVar17,param_3);
      uVar12 = 0;
      iVar4 = FUN_144ba4d00(lVar9,lVar8,0,0,0,uVar16);
      uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
      lVar8 = lVar15;
      if (iVar4 != 0) {
        FUN_144ba5270(lVar9,0);
        iVar4 = FUN_144ba4290(lVar9,puVar7[1]);
        lVar8 = lVar11;
        if (iVar4 < 1) {
          FUN_144ba24f0(0x2e,0xa7,0x66,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,0x14b));
        }
        else {
          lVar11 = lVar9;
          iVar4 = FUN_144edaee0(**(undefined8 **)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x20),
                                *(undefined4 *)(lVar1 + 0x28),(*(undefined8 **)(lVar1 + 8))[1],lVar9
                                ,CONCAT44(uVar5,param_3));
          uVar12 = (undefined4)((ulonglong)lVar11 >> 0x20);
          if (iVar4 < 0) {
            FUN_144ba24f0(0x2e,0xa7,6,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,0x156));
          }
          else {
            lVar15 = lVar14;
            if (param_3 == 0) {
              lVar8 = FUN_144ea64e0((longlong)**(int **)(lVar1 + 0x18),"crypto\\cms\\cms_pwri.c",
                                    0x16b);
              if (lVar8 == 0) {
                FUN_144ba24f0(0x2e,0xa7,0x41,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar12,0x16e));
                goto LAB_1455d98c1;
              }
              iVar4 = FUN_1455d9930(lVar8,&local_res8,*(undefined8 *)(*(int **)(lVar1 + 0x18) + 2),
                                    (longlong)**(int **)(lVar1 + 0x18),lVar9);
              if (iVar4 == 0) {
                FUN_144ba24f0(0x2e,0xa7,0xb4,"crypto\\cms\\cms_pwri.c",0x174);
                goto LAB_1455d98c1;
              }
              FUN_144ea66f0(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                            "crypto\\cms\\cms_pwri.c",0x178);
              *(ulonglong *)(lVar2 + 0x28) = local_res8;
              *(longlong *)(lVar2 + 0x20) = lVar8;
            }
            else {
              uVar3 = *(ulonglong *)(lVar2 + 0x28);
              iVar4 = FUN_144ba3dd0(lVar9);
              uVar13 = (ulonglong)iVar4;
              uVar10 = uVar3 + 3 + uVar13;
              uVar10 = uVar10 - uVar10 % uVar13;
              if ((((uVar10 < uVar13 * 2) || (0xff < uVar3)) ||
                  (local_res8 = uVar10,
                  lVar8 = FUN_144ea64e0(uVar10,"crypto\\cms\\cms_pwri.c",0x161), lVar8 == 0)) ||
                 (iVar4 = FUN_1455d9b10(lVar8,&local_res8,*(undefined8 *)(lVar2 + 0x20),
                                        *(undefined8 *)(lVar2 + 0x28),lVar9), iVar4 == 0))
              goto LAB_1455d98c1;
              *(longlong *)(*(longlong *)(lVar1 + 0x18) + 8) = lVar8;
              **(undefined4 **)(lVar1 + 0x18) = (undefined4)local_res8;
            }
            lVar15 = 1;
          }
        }
      }
LAB_1455d98c1:
      FUN_144ba5170(lVar9);
      if ((int)lVar15 == 0) {
        FUN_144ea6530(lVar8,"crypto\\cms\\cms_pwri.c",0x185);
      }
      FUN_144efdff0(puVar7);
      return lVar15;
    }
    uVar16 = CONCAT44(uVar12,0x142);
    uVar12 = 0x41;
  }
  FUN_144ba24f0(0x2e,0xa7,uVar12,"crypto\\cms\\cms_pwri.c",uVar16);
  return 0;
}



// FUNCTION 1455d9930 FUN_1455d9930 body=468 status=ok
// SIG undefined FUN_1455d9930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1455d9930(void *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4,undefined8 param_5
             )

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 local_res20 [8];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar9 = 0x1455d994a;
  iVar2 = FUN_144ba3dd0(param_5);
  uVar7 = (ulonglong)iVar2;
  uVar6 = 0;
  uVar5 = 0;
  if ((uVar7 * 2 <= param_4) && (param_4 % uVar7 == 0)) {
    pbVar4 = (byte *)FUN_144ea64e0(param_4,"crypto\\cms\\cms_pwri.c",0xbf);
    if (pbVar4 == (byte *)0x0) {
      FUN_144ba24f0(0x2e,0xb4,0x41,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar8,0xc0));
      uVar6 = 0;
    }
    else {
      iVar3 = FUN_144ba4850(param_5,pbVar4 + param_4 + uVar7 * -2,local_res20,
                            param_3 + uVar7 * -2 + param_4,CONCAT44(uVar8,iVar2 * 2),uVar9);
      if (iVar3 != 0) {
        iVar3 = FUN_144ba4850(param_5,pbVar4,local_res20,pbVar4 + (param_4 - uVar7),iVar2,uVar9);
        if (iVar3 != 0) {
          iVar2 = FUN_144ba4850(param_5,pbVar4,local_res20,param_3,(int)param_4 - iVar2,uVar9);
          if (iVar2 != 0) {
            uVar8 = 0;
            iVar2 = FUN_144ba4820(param_5,0,0,0,0);
            uVar6 = uVar5;
            if (iVar2 != 0) {
              iVar2 = FUN_144ba4850(param_5,pbVar4,local_res20,pbVar4,CONCAT44(uVar8,(int)param_4));
              if ((iVar2 != 0) &&
                 ((byte)((pbVar4[6] ^ pbVar4[3]) & (pbVar4[5] ^ pbVar4[2]) & (pbVar4[1] ^ pbVar4[4])
                        ) == 0xff)) {
                bVar1 = *pbVar4;
                if ((ulonglong)(longlong)(int)(bVar1 - 4) <= param_4) {
                  *param_2 = (ulonglong)bVar1;
                  memcpy(param_1,pbVar4 + 4,(ulonglong)bVar1);
                  uVar6 = 1;
                }
              }
            }
          }
        }
      }
      FUN_144ea66f0(pbVar4,param_4,"crypto\\cms\\cms_pwri.c",0xe2);
    }
    return uVar6;
  }
  return 0;
}



// FUNCTION 1455d9b10 FUN_1455d9b10 body=278 status=ok
// SIG undefined FUN_1455d9b10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1455d9b10(undefined1 *param_1,ulonglong *param_2,byte *param_3,ulonglong param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_res20 [8];
  undefined8 uVar5;
  
  uVar5 = 0x1455d9b29;
  iVar1 = FUN_144ba3dd0(param_5);
  uVar4 = (ulonglong)iVar1;
  uVar3 = param_4 + 3 + uVar4;
  uVar3 = uVar3 - uVar3 % uVar4;
  if ((uVar3 < uVar4 * 2) || (0xff < param_4)) {
    return 0;
  }
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_4;
    param_1[1] = ~*param_3;
    param_1[2] = ~param_3[1];
    param_1[3] = ~param_3[2];
    memcpy(param_1 + 4,param_3,param_4);
    iVar1 = (int)uVar3;
    if ((param_4 + 4 < uVar3) &&
       (iVar2 = FUN_144bac850(param_1 + param_4 + 4,(iVar1 - (int)param_4) + -4), iVar2 < 1)) {
      return 0;
    }
    iVar2 = FUN_144ba4660(param_5,param_1,local_res20,param_1,iVar1,uVar5);
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_144ba4660(param_5,param_1,local_res20,param_1,iVar1,uVar5);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *param_2 = uVar3;
  return 1;
}



// FUNCTION 1455d9c30 FUN_1455d9c30 body=26 status=ok
// SIG undefined FUN_1455d9c30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d9c30(longlong param_1)

{
  FUN_1452afd00(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1455d9c50 FUN_1455d9c50 body=26 status=ok
// SIG undefined FUN_1455d9c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455d9c50(longlong param_1)

{
  FUN_1452afd20(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1455d9c70 FUN_1455d9c70 body=45 status=ok
// SIG undefined FUN_1455d9c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1455d9c70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1452aff20(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1455d9ca0 FUN_1455d9ca0 body=350 status=ok
// SIG undefined FUN_1455d9ca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455d9ca0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  
  iVar4 = FUN_1452afd00(*(undefined8 *)(param_1 + 0x18));
  iVar5 = FUN_1452afd00(*(undefined8 *)(param_1 + 0x30));
  puVar9 = &DAT_149dd193c;
  while( true ) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = puVar9[-1];
    uVar2 = *puVar9;
    iVar6 = FUN_1452afd20(uVar3,uVar1,0xffffffff);
    if ((iVar6 < 0) || (lVar8 = FUN_1452afe00(uVar3,iVar6), lVar8 == 0)) {
      if ((0 < iVar4) && (((byte)uVar2 & 0x11) == 0x11)) break;
    }
    else {
      iVar7 = FUN_1452b0280(lVar8);
      if ((((uVar2 & 1) == 0) ||
          (((((uVar2 & 0x20) != 0 && (iVar6 = FUN_1452afd20(uVar3,uVar1,iVar6), -1 < iVar6)) &&
            (lVar8 = FUN_1452afe00(uVar3,iVar6), lVar8 != 0)) ||
           (((uVar2 & 0x40) != 0 && (iVar7 != 1)))))) || (iVar7 == 0)) break;
    }
    iVar6 = FUN_1455d9e00(uVar1,uVar2,2,*(undefined8 *)(param_1 + 0x30),0 < iVar5);
    if (iVar6 == 0) break;
    puVar9 = puVar9 + 2;
    if (0x149dd1973 < (longlong)puVar9) {
      return 1;
    }
  }
  FUN_144ba24f0(0x2e,0xb7,0xa1,"crypto\\cms\\cms_att.c",0x117);
  return 0;
}



// FUNCTION 1455d9e00 FUN_1455d9e00 body=196 status=ok
// SIG undefined FUN_1455d9e00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1455d9e00(undefined4 param_1,uint param_2,uint param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = FUN_1452afd20(param_4,param_1,0xffffffff);
  if ((iVar1 < 0) || (lVar3 = FUN_1452afe00(param_4,iVar1), lVar3 == 0)) {
    if (param_5 == 0) {
      return 1;
    }
    if ((param_2 & 0x10) == 0) {
      return 1;
    }
    if ((param_3 & param_2) == 0) {
      return 1;
    }
  }
  else {
    iVar2 = FUN_1452b0280(lVar3);
    if ((((param_3 & param_2) != 0) &&
        ((((param_2 & 0x20) == 0 || (iVar1 = FUN_1452afd20(param_4,param_1,iVar1), iVar1 < 0)) ||
         (lVar3 = FUN_1452afe00(param_4,iVar1), lVar3 == 0)))) &&
       ((((param_2 & 0x40) == 0 || (iVar2 == 1)) && (iVar2 != 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1455d9ed0 FUN_1455d9ed0 body=99 status=ok
// SIG undefined FUN_1455d9ed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455d9ed0(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  undefined8 local_18;
  
  uVar1 = FUN_145298cb0();
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_144ba0740(local_18,uVar1 & 0xffffffff,in_R9);
  FUN_144ea6530(local_18,"crypto\\ec\\ec_print.c",0x1d);
  return uVar2;
}



// FUNCTION 1455d9f40 FUN_1455d9f40 body=142 status=ok
// SIG undefined FUN_1455d9f40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455d9f40(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1455d9f50;
  plVar1 = (longlong *)FUN_1455d8e10(param_2);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if (*plVar1 == 0) {
    lVar2 = FUN_144efe930();
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_144ba24f0(0x2e,0x9b,0x41,"crypto\\cms\\cms_io.c",0x1f,uVar3);
      return 0;
    }
  }
  *(uint *)(*plVar1 + 0x10) = *(uint *)(*plVar1 + 0x10) | 0x10;
  *(uint *)(*plVar1 + 0x10) = *(uint *)(*plVar1 + 0x10) & 0xffffffdf;
  *param_1 = *plVar1 + 8;
  return 1;
}



// FUNCTION 1455d9fd0 FUN_1455d9fd0 body=649 status=ok
// SIG undefined FUN_1455d9fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1455d9fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar8 = 0xfffffffe;
  uVar9 = 0;
  uVar10 = 0;
  FUN_144eede20(param_3);
  puVar4 = (undefined8 *)FUN_144eede90(param_3);
  puVar5 = (undefined8 *)FUN_144eede90(param_3);
  uVar13 = uVar10;
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = FUN_144ba06b0(puVar4,param_1);
    uVar13 = (uint)(lVar6 == 0);
    if (uVar13 == 0) {
      lVar6 = FUN_144ba06b0(puVar5,param_2);
      uVar13 = (uint)(lVar6 == 0);
      if (uVar13 == 0) {
        iVar3 = FUN_144ba0340(puVar5);
        if (iVar3 == 0) {
          iVar3 = FUN_144ba03a0(puVar4);
          if ((iVar3 != 0) || (iVar3 = FUN_144ba03a0(puVar5), uVar8 = uVar10, iVar3 != 0)) {
            iVar3 = FUN_144ba0d50(puVar5,0);
            uVar7 = uVar9;
            while (iVar3 == 0) {
              uVar10 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar10;
              iVar3 = FUN_144ba0d50(puVar5,uVar7);
            }
            iVar3 = FUN_144eefec0(puVar5,puVar5,uVar10);
            bVar14 = iVar3 == 0;
            uVar13 = (uint)bVar14;
            uVar8 = 0xfffffffe;
            if (uVar13 == 0) {
              if ((uVar10 & 1) == 0) {
                uVar10 = 1;
              }
              else if (*(int *)(puVar4 + 1) == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(uint *)(&DAT_149dd19b8 +
                                  (ulonglong)((uint)*(undefined8 *)*puVar4 & 7) * 4);
              }
              if ((*(int *)(puVar5 + 2) != 0) &&
                 (*(undefined4 *)(puVar5 + 2) = 0, *(int *)(puVar4 + 2) != 0)) {
                uVar10 = -uVar10;
              }
              iVar3 = FUN_144ba0340(puVar4);
              while (puVar1 = puVar4, iVar3 == 0) {
                uVar11 = 0;
                iVar3 = FUN_144ba0d50(puVar1,0);
                uVar7 = uVar9;
                uVar12 = uVar11;
                while (iVar3 == 0) {
                  uVar12 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar12;
                  iVar3 = FUN_144ba0d50(puVar1,uVar7);
                }
                iVar3 = FUN_144eefec0(puVar1,puVar1,uVar12);
                uVar13 = (uint)(iVar3 == 0);
                uVar8 = uVar10;
                if (uVar13 != 0) goto LAB_1455da227;
                if ((uVar12 & 1) != 0) {
                  if (*(int *)(puVar5 + 1) != 0) {
                    uVar11 = (uint)*(undefined8 *)*puVar5;
                  }
                  uVar10 = uVar10 * *(int *)(&DAT_149dd19b8 + (ulonglong)(uVar11 & 7) * 4);
                }
                if (*(int *)(puVar1 + 2) == 0) {
                  uVar7 = uVar9;
                  if (*(int *)(puVar1 + 1) != 0) {
                    uVar7 = *(ulonglong *)*puVar1;
                  }
                }
                else if (*(int *)(puVar1 + 1) == 0) {
                  uVar7 = 0xffffffffffffffff;
                }
                else {
                  uVar7 = ~*(ulonglong *)*puVar1;
                }
                if (*(int *)(puVar5 + 1) == 0) {
                  bVar2 = 0;
                }
                else {
                  bVar2 = (byte)*(undefined8 *)*puVar5;
                }
                uVar8 = -uVar10;
                if ((bVar2 & (byte)uVar7 & 2) == 0) {
                  uVar8 = uVar10;
                }
                iVar3 = FUN_1452a55e0(puVar5,puVar5,puVar1,param_3);
                bVar14 = iVar3 == 0;
                uVar13 = (uint)bVar14;
                if (uVar13 != 0) goto LAB_1455da227;
                *(undefined4 *)(puVar1 + 2) = 0;
                iVar3 = FUN_144ba0340(puVar5);
                puVar4 = puVar5;
                puVar5 = puVar1;
                uVar10 = uVar8;
              }
              uVar13 = (uint)bVar14;
              iVar3 = FUN_144ba0350(puVar5);
              uVar8 = 0;
              if (iVar3 != 0) {
                uVar8 = uVar10;
              }
            }
          }
        }
        else {
          uVar8 = FUN_144ba0310(puVar4,1);
        }
      }
    }
  }
LAB_1455da227:
  FUN_144eedf20(param_3);
  if (uVar13 != 0) {
    uVar8 = 0xfffffffe;
  }
  return uVar8;
}



// FUNCTION 1455da260 FUN_1455da260 body=1900 status=ok
// SIG undefined FUN_1455da260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1455da260(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  undefined8 in_stack_ffffffffffffffa8;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  iVar1 = FUN_144ba03a0(param_3);
  lVar7 = param_1;
  if ((iVar1 == 0) || (iVar1 = FUN_144ba0310(param_3,1), iVar1 != 0)) {
    iVar1 = FUN_144ba0310(param_3,2);
    if (iVar1 == 0) {
      FUN_144ba24f0(3,0x79,0x70,"crypto\\bn\\bn_sqrt.c",CONCAT44(uVar3,0x2a));
      return 0;
    }
    if ((param_1 != 0) || (lVar7 = FUN_144ba0570(), lVar7 != 0)) {
      iVar1 = FUN_144ba0d50(param_2,0);
LAB_1455da92f:
      iVar1 = FUN_144ba0bb0(lVar7,(longlong)iVar1);
      if (iVar1 == 0) {
        if (lVar7 != param_1) {
          FUN_144ba0cd0(lVar7);
        }
        return 0;
      }
      return lVar7;
    }
  }
  else {
    iVar1 = FUN_144ba0340(param_2);
    if ((iVar1 == 0) && (iVar1 = FUN_144ba0350(param_2), iVar1 == 0)) {
      FUN_144eede20(param_4);
      uVar5 = FUN_144eede90(param_4);
      uVar6 = FUN_144eede90(param_4);
      lVar7 = FUN_144eede90(param_4);
      uVar8 = FUN_144eede90(param_4);
      uVar9 = FUN_144eede90(param_4);
      lVar10 = FUN_144eede90(param_4);
      if ((lVar10 != 0) &&
         ((lVar11 = param_1, param_1 != 0 || (lVar11 = FUN_144ba0570(), lVar11 != 0)))) {
        iVar1 = FUN_1452a55e0(uVar5,param_2,param_3,param_4);
        if (iVar1 == 0) goto LAB_1455da8f0;
        iVar1 = 1;
        iVar2 = FUN_144ba0d50(param_3,1);
        if (iVar2 == 0) {
          do {
            iVar1 = iVar1 + 1;
            iVar2 = FUN_144ba0d50(param_3,iVar1);
          } while (iVar2 == 0);
          if (iVar1 == 1) goto LAB_1455da850;
          if (iVar1 != 2) {
            lVar12 = FUN_144ba06b0(lVar7,param_3);
            if (lVar12 == 0) goto LAB_1455da8f0;
            *(undefined4 *)(lVar7 + 0x10) = 0;
            iVar2 = 2;
            do {
              if (iVar2 < 0x16) {
LAB_1455da53c:
                iVar4 = FUN_144ba0bb0(lVar10,(longlong)iVar2);
                if (iVar4 == 0) goto LAB_1455da8f0;
              }
              else {
                uVar3 = FUN_144ba03d0(param_3);
                iVar4 = FUN_1452983c0(lVar10,uVar3,0,0);
                if (iVar4 == 0) goto LAB_1455da8f0;
                iVar4 = FUN_144ba0ef0(lVar10,param_3);
                if (-1 < iVar4) {
                  pcVar13 = FUN_144eee270;
                  if (*(int *)(param_3 + 0x10) != 0) {
                    pcVar13 = FUN_144eee4f0;
                  }
                  iVar4 = (*pcVar13)(lVar10,lVar10,param_3);
                  if (iVar4 == 0) goto LAB_1455da8f0;
                }
                iVar4 = FUN_144ba0340(lVar10);
                if (iVar4 != 0) goto LAB_1455da53c;
              }
              iVar4 = FUN_1455d9fd0(lVar10,lVar7);
              if (iVar4 < -1) goto LAB_1455da8f0;
              if (iVar4 == 0) {
                uVar5 = 0xc9;
                uVar3 = 0x70;
                goto LAB_1455da8dc;
              }
              if (iVar4 != 1) {
                if (iVar4 != -1) {
                  uVar5 = 0xd5;
                  uVar3 = 0x71;
                  goto LAB_1455da8dc;
                }
                iVar2 = FUN_144eefec0(lVar7,lVar7,iVar1);
                if ((iVar2 == 0) ||
                   (iVar2 = FUN_1452a5e00(lVar10,lVar10,lVar7,param_3,param_4), iVar2 == 0))
                goto LAB_1455da8f0;
                iVar2 = FUN_144ba0350(lVar10);
                if (iVar2 != 0) {
                  uVar5 = 0xe4;
                  uVar3 = 0x70;
                  goto LAB_1455da8dc;
                }
                iVar2 = FUN_144eeff20(uVar8,lVar7);
                if (iVar2 == 0) goto LAB_1455da8f0;
                iVar2 = FUN_144ba0340(uVar8);
                if (iVar2 == 0) {
                  iVar2 = FUN_1452a5e00(uVar9,uVar5,uVar8,param_3,param_4);
                  if (iVar2 == 0) goto LAB_1455da8f0;
                  iVar2 = FUN_144ba0340(uVar9);
                  if (iVar2 != 0) goto LAB_1455da640;
                }
                else {
                  iVar2 = FUN_1452a55e0(uVar8,uVar5,param_3,param_4);
                  if (iVar2 == 0) goto LAB_1455da8f0;
                  iVar2 = FUN_144ba0340(uVar8);
                  if (iVar2 != 0) {
LAB_1455da640:
                    FUN_144ba0bb0(lVar11,0);
                    FUN_144eedf20(param_4);
                    return lVar11;
                  }
                  iVar2 = FUN_144ba0bb0(uVar9,1);
                  if (iVar2 == 0) goto LAB_1455da8f0;
                }
                iVar2 = FUN_1452a5860(uVar6,uVar9,param_3,param_4);
                if (((iVar2 == 0) ||
                    (iVar2 = FUN_1452a57a0(uVar6,uVar6,uVar5,param_3,param_4), iVar2 == 0)) ||
                   (iVar2 = FUN_1452a57a0(uVar9,uVar9,uVar5,param_3,param_4), iVar2 == 0))
                goto LAB_1455da8f0;
                iVar2 = FUN_144ba0350(uVar6);
                goto joined_r0x0001455da70a;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < 0x52);
            uVar5 = 0xd5;
            uVar3 = 0x71;
            goto LAB_1455da8dc;
          }
          iVar1 = FUN_1452a58d0(uVar8,uVar5,param_3);
          if ((iVar1 != 0) && (iVar1 = FUN_144eefec0(lVar7,param_3,3), iVar1 != 0)) {
            *(undefined4 *)(lVar7 + 0x10) = 0;
            iVar1 = FUN_1452a5e00(uVar6,uVar8,lVar7,param_3,param_4);
            if (((iVar1 != 0) &&
                ((((iVar1 = FUN_1452a5860(lVar10,uVar6,param_3,param_4), iVar1 != 0 &&
                   (iVar1 = FUN_1452a57a0(uVar8,uVar8,lVar10,param_3,param_4), iVar1 != 0)) &&
                  (iVar1 = FUN_14526b300(uVar8,1), iVar1 != 0)) &&
                 ((iVar1 = FUN_1452a57a0(uVar9,uVar5,uVar6,param_3,param_4), iVar1 != 0 &&
                  (iVar1 = FUN_1452a57a0(uVar9,uVar9,uVar8,param_3,param_4), iVar1 != 0)))))) &&
               (lVar7 = FUN_144ba06b0(lVar11,uVar9), lVar7 != 0)) goto LAB_1455da8a6;
          }
        }
        else {
LAB_1455da850:
          iVar1 = FUN_144eefec0(lVar7,param_3,2);
          if (iVar1 != 0) {
            *(undefined4 *)(lVar7 + 0x10) = 0;
            iVar1 = FUN_14526b1f0(lVar7,1);
            if ((iVar1 != 0) &&
               (iVar1 = FUN_1452a5e00(lVar11,uVar5,lVar7,param_3,param_4), iVar1 != 0))
            goto LAB_1455da8a6;
          }
        }
        goto LAB_1455da8f0;
      }
    }
    else if ((param_1 != 0) || (lVar7 = FUN_144ba0570(), lVar7 != 0)) {
      iVar1 = FUN_144ba0350(param_2);
      goto LAB_1455da92f;
    }
  }
LAB_1455da970:
  lVar11 = 0;
LAB_1455da973:
  FUN_144eedf20(param_4);
  return lVar11;
joined_r0x0001455da70a:
  if (iVar2 != 0) goto LAB_1455da822;
  iVar4 = 1;
  if (iVar1 < 2) {
LAB_1455da765:
    uVar5 = 0x140;
    goto LAB_1455da8d6;
  }
  while( true ) {
    if (iVar4 == 1) {
      iVar2 = FUN_1452a5860(uVar8,uVar6,param_3,param_4);
    }
    else {
      iVar2 = FUN_1452a57a0(uVar8,uVar8,uVar8,param_3,param_4);
    }
    if (iVar2 == 0) goto LAB_1455da8f0;
    iVar2 = FUN_144ba0350(uVar8);
    if (iVar2 != 0) break;
    iVar4 = iVar4 + 1;
    if (iVar1 <= iVar4) goto LAB_1455da765;
  }
  lVar7 = FUN_144ba06b0(uVar8,lVar10);
  if (lVar7 == 0) goto LAB_1455da8f0;
  iVar1 = iVar1 - iVar4;
  while (iVar1 = iVar1 + -1, 0 < iVar1) {
    iVar2 = FUN_1452a5860(uVar8,uVar8,param_3,param_4);
    if (iVar2 == 0) goto LAB_1455da8f0;
  }
  iVar1 = FUN_1452a57a0(lVar10,uVar8,uVar8,param_3,param_4);
  if (((iVar1 == 0) || (iVar1 = FUN_1452a57a0(uVar9,uVar9,uVar8,param_3,param_4), iVar1 == 0)) ||
     (iVar1 = FUN_1452a57a0(uVar6,uVar6,lVar10,param_3,param_4), iVar1 == 0)) goto LAB_1455da8f0;
  iVar2 = FUN_144ba0350(uVar6);
  iVar1 = iVar4;
  goto joined_r0x0001455da70a;
LAB_1455da822:
  lVar7 = FUN_144ba06b0(lVar11,uVar9);
  if (lVar7 == 0) goto LAB_1455da8f0;
LAB_1455da8a6:
  iVar1 = FUN_1452a5860(uVar9,lVar11,param_3,param_4);
  if (iVar1 != 0) {
    iVar1 = FUN_144ba0c40(uVar9,uVar5);
    if (iVar1 == 0) goto LAB_1455da973;
    uVar5 = 0x15f;
LAB_1455da8d6:
    uVar3 = 0x6f;
LAB_1455da8dc:
    FUN_144ba24f0(3,0x79,uVar3,"crypto\\bn\\bn_sqrt.c",uVar5);
  }
LAB_1455da8f0:
  if (lVar11 != param_1) {
    FUN_144ba0630(lVar11);
    FUN_144eedf20(param_4);
    return 0;
  }
  goto LAB_1455da970;
}



// FUNCTION 1455da9d0 FUN_1455da9d0 body=209 status=ok
// SIG undefined FUN_1455da9d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455da9d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = param_2;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar3 = param_3;
    param_3 = param_2;
  }
  lVar2 = FUN_144ba1290(param_1,(int)param_3[1]);
  if (lVar2 != 0) {
    iVar1 = 0;
    if (0 < (int)plVar3[1]) {
      lVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        *(ulonglong *)(lVar2 + *param_1) =
             *(ulonglong *)(*plVar3 + -8 + lVar2 + 8) ^ *(ulonglong *)(lVar2 + *param_3);
        lVar2 = lVar2 + 8;
      } while (iVar1 < (int)plVar3[1]);
    }
    if (iVar1 < (int)param_3[1]) {
      lVar2 = (longlong)iVar1 * 8;
      do {
        iVar1 = iVar1 + 1;
        *(undefined8 *)(lVar2 + *param_1) = *(undefined8 *)(lVar2 + *param_3);
        lVar2 = lVar2 + 8;
      } while (iVar1 < (int)param_3[1]);
    }
    *(int *)(param_1 + 1) = (int)param_3[1];
    FUN_144ba1350(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 1455daab0 FUN_1455daab0 body=136 status=ok
// SIG undefined FUN_1455daab0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455daab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1455dbf50(param_3,local_28,6);
  if ((iVar1 == 0) || (6 < iVar1)) {
    local_38 = 0x18e;
    FUN_144ba24f0(3,0x83,0x6a,"crypto\\bn\\bn_gf2m.c");
  }
  else {
    FUN_1455dade0(param_1,param_2,local_28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 1455dab50 FUN_1455dab50 body=240 status=ok
// SIG undefined FUN_1455dab50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1455dab50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar5 = 0x1455dab74;
  iVar2 = 0;
  iVar1 = FUN_144ba03d0(param_4);
  iVar1 = iVar1 + 1;
  lVar3 = FUN_144ea64e0((longlong)iVar1 << 2,"crypto\\bn\\bn_gf2m.c",0x1da);
  if (lVar3 != 0) {
    iVar2 = FUN_1455dbf50(param_4,lVar3,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      FUN_144ba24f0(3,0x85,0x6a,"crypto\\bn\\bn_gf2m.c",CONCAT44(uVar4,0x1de),uVar5);
    }
    else {
      iVar2 = FUN_1455db070(param_1,param_2,param_3,lVar3,param_5);
    }
  }
  FUN_144ea6530(lVar3,"crypto\\bn\\bn_gf2m.c",0x1e4);
  return iVar2;
}



// FUNCTION 1455dac40 FUN_1455dac40 body=227 status=ok
// SIG undefined FUN_1455dac40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1455dac40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  FUN_144eede20(param_4);
  lVar2 = FUN_144eede90(param_4);
  uVar4 = 0;
  if (lVar2 != 0) {
    do {
      iVar1 = FUN_144ba03d0(param_3);
      iVar1 = FUN_1452983c0(lVar2,iVar1 + -1,0xffffffff,0);
      uVar4 = uVar3;
      if (iVar1 == 0) goto LAB_1455dad00;
      iVar1 = FUN_144ba0340(lVar2);
    } while (iVar1 != 0);
    iVar1 = FUN_1455dab50(param_1,param_2,lVar2,param_3,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_1455dc030(param_1,param_1,param_3,param_4);
      if (iVar1 != 0) {
        iVar1 = FUN_1455dab50(param_1,param_1,lVar2,param_3,param_4);
        uVar4 = 0;
        if (iVar1 != 0) {
          uVar4 = 1;
        }
      }
    }
  }
LAB_1455dad00:
  FUN_144eedf20(param_4);
  return uVar4;
}



// FUNCTION 1455dad30 FUN_1455dad30 body=176 status=ok
// SIG undefined FUN_1455dad30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1455dad30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1455dad54;
  FUN_144eede20(param_5);
  lVar2 = FUN_144eede90(param_5);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_1455dac40(lVar2,param_3,param_4,param_5);
    uVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_1455dab50(param_1,param_2,lVar2,param_4,param_5,uVar4);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = 1;
      }
    }
  }
  FUN_144eedf20(param_5);
  return uVar3;
}



// FUNCTION 1455dade0 FUN_1455dade0 body=652 status=ok
// SIG undefined FUN_1455dade0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455dade0(longlong *param_1,longlong *param_2,uint *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  if (*param_3 == 0) {
    FUN_144ba0bb0(param_1,0);
    return 1;
  }
  uVar13 = 0;
  if (param_2 != param_1) {
    lVar4 = FUN_144ba1290(param_1,(int)param_2[1]);
    if (lVar4 == 0) {
      return 0;
    }
    uVar5 = uVar13;
    if (0 < (int)param_2[1]) {
      do {
        uVar10 = (int)uVar5 + 1;
        *(undefined8 *)(uVar13 + *param_1) = *(undefined8 *)(uVar13 + *param_2);
        uVar13 = uVar13 + 8;
        uVar5 = (ulonglong)uVar10;
      } while ((int)uVar10 < (int)param_2[1]);
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  puVar2 = (ulonglong *)*param_1;
  iVar8 = (int)param_1[1] + -1;
  lVar14 = (longlong)((int)(*param_3 + ((int)*param_3 >> 0x1f & 0x3fU)) >> 6);
  lVar4 = (longlong)iVar8;
  if (lVar14 < lVar4) {
    puVar9 = puVar2 + (lVar4 - lVar14);
    do {
      uVar13 = puVar9[lVar14];
      if (uVar13 == 0) {
        iVar8 = iVar8 + -1;
        lVar4 = lVar4 + -1;
        puVar9 = puVar9 + -1;
      }
      else {
        puVar1 = param_3 + 1;
        puVar9[lVar14] = 0;
        lVar11 = 1;
        uVar10 = *puVar1;
        while (uVar10 != 0) {
          uVar7 = (int)(*param_3 - *puVar1) >> 0x1f & 0x3f;
          uVar10 = (*param_3 - *puVar1) + uVar7;
          iVar12 = (uVar10 & 0x3f) - uVar7;
          iVar3 = iVar8 - ((int)uVar10 >> 6);
          bVar6 = (byte)iVar12;
          puVar2[iVar3] = puVar2[iVar3] ^ uVar13 >> (bVar6 & 0x3f);
          if (iVar12 != 0) {
            puVar2[iVar3 + -1] = puVar2[iVar3 + -1] ^ uVar13 << (0x40 - bVar6 & 0x3f);
          }
          lVar11 = lVar11 + 1;
          puVar1 = param_3 + lVar11;
          uVar10 = param_3[lVar11];
        }
        uVar10 = *param_3 & 0x8000003f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
        }
        *puVar9 = *puVar9 ^ uVar13 >> ((byte)uVar10 & 0x3f);
        if (uVar10 != 0) {
          puVar9[-1] = puVar9[-1] ^ uVar13 << (0x40 - (byte)uVar10 & 0x3f);
        }
      }
    } while (lVar14 < lVar4);
  }
  if (iVar8 == lVar14) {
    while( true ) {
      uVar10 = *param_3 & 0x8000003f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
      }
      uVar13 = puVar2[lVar14] >> ((byte)uVar10 & 0x3f);
      if (uVar13 == 0) break;
      bVar6 = 0x40 - (byte)uVar10;
      if (uVar10 == 0) {
        puVar2[lVar14] = 0;
      }
      else {
        puVar2[lVar14] = (puVar2[lVar14] << (bVar6 & 0x3f)) >> (bVar6 & 0x3f);
      }
      *puVar2 = *puVar2 ^ uVar13;
      puVar1 = param_3 + 1;
      lVar4 = 1;
      uVar10 = *puVar1;
      while (uVar10 != 0) {
        uVar7 = (int)*puVar1 >> 0x1f & 0x3f;
        uVar10 = *puVar1 + uVar7;
        iVar8 = (uVar10 & 0x3f) - uVar7;
        iVar12 = (int)uVar10 >> 6;
        bVar6 = (byte)iVar8;
        puVar2[iVar12] = puVar2[iVar12] ^ uVar13 << (bVar6 & 0x3f);
        if ((iVar8 != 0) && (uVar5 = uVar13 >> (0x40 - bVar6 & 0x3f), uVar5 != 0)) {
          puVar2[iVar12 + 1] = puVar2[iVar12 + 1] ^ uVar5;
        }
        lVar4 = lVar4 + 1;
        puVar1 = param_3 + lVar4;
        uVar10 = param_3[lVar4];
      }
    }
  }
  FUN_144ba1350(param_1);
  return 1;
}



// FUNCTION 1455db070 FUN_1455db070 body=688 status=ok
// SIG undefined FUN_1455db070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455db070(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar9 = 0;
  local_90 = param_5;
  local_b0 = param_3;
  local_88 = param_4;
  local_80 = param_1;
  if (param_2 == param_3) {
    FUN_1455db330(param_1,param_2,param_4,param_5);
  }
  else {
    FUN_144eede20(param_5);
    plVar5 = (longlong *)FUN_144eede90(param_5);
    if (plVar5 != (longlong *)0x0) {
      uVar10 = (int)param_2[1] + (int)param_3[1] + 4;
      lVar6 = FUN_144ba1290(plVar5,uVar10);
      if (lVar6 != 0) {
        *(uint *)(plVar5 + 1) = uVar10;
        uVar8 = uVar9;
        if ((0 < (int)uVar10) && (uVar8 = 0, 1 < uVar10)) {
          plVar12 = (longlong *)*plVar5;
          param_3 = local_b0;
          if ((plVar5 < plVar12) || (uVar8 = uVar9, plVar12 + (int)(uVar10 - 1) < plVar5)) {
            uVar4 = uVar10 & 0x80000001;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
            }
            uVar8 = uVar9;
            do {
              uVar13 = (int)uVar8 + 2;
              uVar8 = (ulonglong)uVar13;
            } while ((int)uVar13 < (int)(uVar10 - uVar4));
            for (lVar6 = ((longlong)((int)((uVar10 - uVar4) + 1) / 2) & 0xfffffffffffffffU) << 1;
                lVar6 != 0; lVar6 = lVar6 + -1) {
              *plVar12 = 0;
              plVar12 = plVar12 + 1;
            }
          }
        }
        for (lVar6 = (longlong)(int)uVar8; lVar6 < (int)uVar10; lVar6 = lVar6 + 1) {
          *(undefined8 *)(*plVar5 + lVar6 * 8) = 0;
        }
        iVar7 = (int)param_3[1];
        local_b8 = 0;
        if (0 < iVar7) {
          iVar14 = (int)param_2[1];
          local_a0 = 0;
          uVar8 = uVar9;
          uVar15 = uVar9;
          do {
            uVar2 = *(undefined8 *)(*param_3 + local_a0);
            if ((uint)uVar8 + 1 == iVar7) {
              local_a8 = 0;
            }
            else {
              local_a8 = *(undefined8 *)(*param_3 + 8 + local_a0);
            }
            uVar3 = local_a8;
            uVar11 = uVar9;
            lVar6 = local_a0;
            uVar10 = (uint)uVar8;
            local_98 = uVar2;
            if (0 < iVar14) {
              do {
                uVar8 = uVar9;
                if ((int)uVar11 + 1 != iVar14) {
                  uVar8 = *(ulonglong *)(uVar15 + lVar6 + 8 + *param_2);
                }
                local_c8 = uVar2;
                FUN_14272f050(&local_78,uVar8,*(undefined8 *)(uVar15 + lVar6 + *param_2),uVar3);
                uVar4 = (int)uVar11 + 2;
                *(ulonglong *)(*plVar5 + lVar6) = *(ulonglong *)(*plVar5 + lVar6) ^ local_78;
                puVar1 = (ulonglong *)(*plVar5 + 8 + lVar6);
                *puVar1 = *puVar1 ^ local_70;
                puVar1 = (ulonglong *)(*plVar5 + 0x10 + lVar6);
                *puVar1 = *puVar1 ^ local_68;
                puVar1 = (ulonglong *)(*plVar5 + 0x18 + lVar6);
                *puVar1 = *puVar1 ^ local_60;
                iVar14 = (int)param_2[1];
                uVar11 = (ulonglong)uVar4;
                param_3 = local_b0;
                lVar6 = lVar6 + 0x10;
                uVar10 = local_b8;
              } while ((int)uVar4 < iVar14);
            }
            iVar7 = (int)param_3[1];
            local_b8 = uVar10 + 2;
            uVar8 = (ulonglong)local_b8;
            local_a0 = local_a0 + 0x10;
            uVar15 = uVar15 - 0x10;
            param_5 = local_90;
          } while ((int)local_b8 < iVar7);
        }
        FUN_144ba1350(plVar5);
        FUN_1455dade0(local_80,plVar5,local_88);
      }
    }
    FUN_144eedf20(param_5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1455db330 FUN_1455db330 body=1681 status=ok
// SIG undefined FUN_1455db330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1455db330(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  FUN_144eede20(param_4);
  plVar4 = (longlong *)FUN_144eede90(param_4);
  uVar6 = 0;
  if ((plVar4 != (longlong *)0x0) &&
     (lVar5 = FUN_144ba1290(plVar4,(int)param_2[1] * 2), uVar6 = 0, lVar5 != 0)) {
    iVar2 = (int)param_2[1] + -1;
    lVar5 = (longlong)iVar2;
    if (-1 < iVar2) {
      lVar7 = lVar5 << 4;
      do {
        uVar1 = *(ulonglong *)(*param_2 + lVar5 * 8);
        *(ulonglong *)(*plVar4 + 8 + lVar7) =
             (((((((((((((((((((((((((((((((uVar1 >> 1 & 0x80000000 | uVar1 & 0x200000000) >> 1 |
                                          uVar1 & 0x400000000) >> 1 | uVar1 & 0x800000000) >> 1 |
                                        uVar1 & 0x1000000000) >> 1 | uVar1 & 0x2000000000) >> 1 |
                                      uVar1 & 0x4000000000) >> 1 | uVar1 & 0x8000000000) >> 1 |
                                    uVar1 & 0x10000000000) >> 1 | uVar1 & 0x20000000000) >> 1 |
                                  uVar1 & 0x40000000000) >> 1 | uVar1 & 0x80000000000) >> 1 |
                                uVar1 & 0x100000000000) >> 1 | uVar1 & 0x200000000000) >> 1 |
                              uVar1 & 0x400000000000) >> 1 | uVar1 & 0x800000000000) >> 1 |
                            uVar1 & 0x1000000000000) >> 1 | uVar1 & 0x2000000000000) >> 1 |
                          uVar1 & 0x4000000000000) >> 1 | uVar1 & 0x8000000000000) >> 1 |
                        uVar1 & 0x10000000000000) >> 1 | uVar1 & 0x20000000000000) >> 1 |
                      uVar1 & 0x40000000000000) >> 1 | uVar1 & 0x80000000000000) >> 1 |
                    uVar1 & 0x100000000000000) >> 1 | uVar1 & 0x200000000000000) >> 1 |
                  uVar1 & 0x400000000000000) >> 1 | uVar1 & 0x800000000000000) >> 1 |
                uVar1 & 0x1000000000000000) >> 1 | uVar1 & 0x2000000000000000) >> 1 |
              uVar1 & 0x4000000000000000) >> 1 | uVar1 & 0x8000000000000001) >> 1;
        uVar1 = *(ulonglong *)(*param_2 + lVar5 * 8);
        uVar3 = (uint)uVar1;
        lVar5 = lVar5 + -1;
        *(ulonglong *)(lVar7 + *plVar4) =
             (((((((((((((((((((((((((((((((uVar1 & 0x80000000) * 2 |
                                          (ulonglong)(uVar3 & 0x40000000)) * 2 |
                                         (ulonglong)(uVar3 & 0x20000000)) * 2 |
                                        (ulonglong)(uVar3 & 0x10000000)) * 2 |
                                       (ulonglong)(uVar3 & 0x8000000)) * 2 |
                                      (ulonglong)(uVar3 & 0x4000000)) * 2 |
                                     (ulonglong)(uVar3 & 0x2000000)) * 2 |
                                    (ulonglong)(uVar3 & 0x1000000)) * 2 |
                                   (ulonglong)(uVar3 & 0x800000)) * 2 |
                                  (ulonglong)(uVar3 & 0x400000)) * 2 | (ulonglong)(uVar3 & 0x200000)
                                 ) * 2 | (ulonglong)(uVar3 & 0x100000)) * 2 |
                               (ulonglong)(uVar3 & 0x80000)) * 2 | (ulonglong)(uVar3 & 0x40000)) * 2
                             | (ulonglong)(uVar3 & 0x20000)) * 2 | (ulonglong)(uVar3 & 0x10000)) * 2
                           | (ulonglong)(uVar3 & 0x8000)) * 2 | (ulonglong)(uVar3 & 0x4000)) * 2 |
                         (ulonglong)(uVar3 & 0x2000)) * 2 | (ulonglong)(uVar3 & 0x1000)) * 2 |
                       (ulonglong)(uVar3 & 0x800)) * 2 | (ulonglong)(uVar3 & 0x400)) * 2 |
                     (ulonglong)(uVar3 & 0x200)) * 2 | (ulonglong)(uVar3 & 0x100)) * 2 |
                   (ulonglong)(uVar3 & 0x80)) * 2 | (ulonglong)(uVar3 & 0x40)) * 2 |
                 (ulonglong)(uVar3 & 0x20)) * 2 | (ulonglong)(uVar3 & 0x10)) * 2 |
               (ulonglong)(uVar3 & 8)) * 2 | (ulonglong)(uVar3 & 4)) * 2 | (ulonglong)(uVar3 & 2)) *
             2 | (ulonglong)(uVar3 & 1);
        lVar7 = lVar7 + -0x10;
      } while (-1 < lVar5);
    }
    *(int *)(plVar4 + 1) = (int)param_2[1] * 2;
    FUN_144ba1350(plVar4);
    iVar2 = FUN_1455dade0(param_1,plVar4,param_3);
    uVar6 = 0;
    if (iVar2 != 0) {
      uVar6 = 1;
    }
  }
  FUN_144eedf20(param_4);
  return uVar6;
}



// FUNCTION 1455db9d0 FUN_1455db9d0 body=333 status=ok
// SIG undefined FUN_1455db9d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1455db9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_144ba0340(param_3);
  if (iVar1 != 0) {
    uVar3 = FUN_144ba0bb0(param_1,1);
    return uVar3;
  }
  iVar1 = FUN_144ba0310(param_3,1);
  if (iVar1 == 0) {
    FUN_144eede20(param_5);
    lVar4 = FUN_144eede90(param_5);
    uVar5 = uVar3;
    if ((lVar4 != 0) && (iVar1 = FUN_1455dade0(lVar4,param_2,param_4), iVar1 != 0)) {
      iVar1 = FUN_144ba03d0(param_3);
      for (iVar1 = iVar1 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
        iVar2 = FUN_1455db330(lVar4,lVar4,param_4,param_5);
        uVar5 = uVar3;
        if ((iVar2 == 0) ||
           ((iVar2 = FUN_144ba0d50(param_3,iVar1), iVar2 != 0 &&
            (iVar2 = FUN_1455db070(lVar4,lVar4,param_2,param_4,param_5), uVar5 = 0, iVar2 == 0))))
        goto LAB_1455dbaf6;
      }
      lVar4 = FUN_144ba06b0(param_1,lVar4);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = 1;
      }
    }
LAB_1455dbaf6:
    FUN_144eedf20(param_5);
  }
  else {
    lVar4 = FUN_144ba06b0(param_1,param_2);
    uVar5 = (ulonglong)(lVar4 != 0);
  }
  return uVar5;
}



// FUNCTION 1455dbb20 FUN_1455dbb20 body=164 status=ok
// SIG undefined FUN_1455dbb20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1455dbb20(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (*param_3 == 0) {
    FUN_144ba0bb0(param_1,0);
    uVar2 = 1;
  }
  else {
    FUN_144eede20(param_4);
    lVar3 = FUN_144eede90(param_4);
    uVar2 = 0;
    if (lVar3 != 0) {
      iVar1 = FUN_144ba0f40(lVar3,*param_3 + -1);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = FUN_1455db9d0(param_1,param_2,lVar3,param_3,param_4);
      }
    }
    FUN_144eedf20(param_4);
  }
  return uVar2;
}



// FUNCTION 1455dbbd0 FUN_1455dbbd0 body=889 status=ok
// SIG undefined FUN_1455dbbd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1455dbbd0(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  bool bVar11;
  int local_res18;
  undefined8 in_stack_ffffffffffffffa8;
  
  local_res18 = 0;
  if (*(int *)param_3 == 0) {
    FUN_144ba0bb0(param_1,0);
    return true;
  }
  FUN_144eede20(param_4);
  uVar3 = FUN_144eede90(param_4);
  uVar4 = FUN_144eede90(param_4);
  lVar5 = FUN_144eede90(param_4);
  if ((lVar5 != 0) && (iVar1 = FUN_1455dade0(uVar3,param_2,param_3), iVar1 != 0)) {
    iVar1 = FUN_144ba0340(uVar3);
    if (iVar1 != 0) {
      FUN_144ba0bb0(param_1,0);
      bVar11 = true;
      goto LAB_1455dbe9b;
    }
    if ((*param_3 & 1) == 0) {
      uVar7 = FUN_144eede90(param_4);
      uVar8 = FUN_144eede90(param_4);
      lVar6 = FUN_144eede90(param_4);
      if (lVar6 != 0) {
        do {
          iVar2 = 1;
          iVar1 = FUN_1452983c0(uVar7,*(undefined4 *)param_3,0,0);
          if ((iVar1 == 0) || (iVar1 = FUN_1455dade0(uVar7,uVar7), iVar1 == 0)) goto LAB_1455dbe98;
          FUN_144ba0bb0(uVar4,0);
          lVar9 = FUN_144ba06b0(lVar5,uVar7);
          if (lVar9 == 0) goto LAB_1455dbe98;
          if (0 < *(int *)param_3 + -1) {
            do {
              iVar1 = FUN_1455db330(uVar4,uVar4,param_3,param_4);
              if ((((iVar1 == 0) || (iVar1 = FUN_1455db330(uVar8,lVar5,param_3,param_4), iVar1 == 0)
                   ) || (in_stack_ffffffffffffffa8 = param_4,
                        iVar1 = FUN_1455db070(lVar6,uVar8,uVar3,param_3,param_4), iVar1 == 0)) ||
                 ((iVar1 = FUN_1455da9d0(uVar4,uVar4,lVar6), iVar1 == 0 ||
                  (iVar1 = FUN_1455da9d0(lVar5,uVar8), iVar1 == 0)))) goto LAB_1455dbe98;
              iVar2 = iVar2 + 1;
            } while (iVar2 <= *(int *)param_3 + -1);
          }
          local_res18 = local_res18 + 1;
          iVar1 = FUN_144ba0340(lVar5);
          uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        } while ((iVar1 != 0) && (local_res18 < 0x32));
        iVar1 = FUN_144ba0340(lVar5);
        if (iVar1 == 0) goto LAB_1455dbed2;
        uVar3 = CONCAT44(uVar10,0x420);
        uVar10 = 0x71;
LAB_1455dbe93:
        FUN_144ba24f0(3,0x87,uVar10,"crypto\\bn\\bn_gf2m.c",uVar3);
      }
    }
    else {
      lVar6 = FUN_144ba06b0(uVar4,uVar3);
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
      if (lVar6 != 0) {
        iVar1 = 1;
        if (0 < (*(int *)param_3 + -1) / 2) {
          do {
            iVar2 = FUN_1455db330(uVar4,uVar4,param_3,param_4);
            if ((iVar2 == 0) || (iVar2 = FUN_1455db330(uVar4,uVar4,param_3,param_4), iVar2 == 0))
            goto LAB_1455dbe98;
            iVar2 = FUN_1455da9d0(uVar4,uVar4,uVar3);
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
            if (iVar2 == 0) goto LAB_1455dbe98;
            iVar1 = iVar1 + 1;
          } while (iVar1 <= (*(int *)param_3 + -1) / 2);
        }
LAB_1455dbed2:
        iVar1 = FUN_1455db330(lVar5,uVar4,param_3,param_4);
        if ((iVar1 != 0) && (iVar1 = FUN_1455da9d0(lVar5,uVar4,lVar5), iVar1 != 0)) {
          iVar1 = FUN_144ba0ef0(lVar5,uVar3);
          if (iVar1 == 0) {
            lVar5 = FUN_144ba06b0(param_1,uVar4);
            bVar11 = lVar5 != 0;
            goto LAB_1455dbe9b;
          }
          uVar3 = CONCAT44(uVar10,0x42a);
          uVar10 = 0x74;
          goto LAB_1455dbe93;
        }
      }
    }
  }
LAB_1455dbe98:
  bVar11 = false;
LAB_1455dbe9b:
  FUN_144eedf20(param_4);
  return bVar11;
}



// FUNCTION 1455dbf50 FUN_1455dbf50 body=222 status=ok
// SIG undefined FUN_1455dbf50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1455dbf50(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  
  uVar2 = 0;
  iVar1 = FUN_144ba0340();
  if (iVar1 == 0) {
    iVar1 = (int)param_1[1] + -1;
    uVar4 = uVar2;
    if (-1 < iVar1) {
      iVar7 = iVar1 * 0x40;
      lVar6 = (longlong)iVar1 * 8;
      do {
        if (*(longlong *)(lVar6 + *param_1) != 0) {
          uVar5 = 0x8000000000000000;
          iVar3 = 0x3f;
          do {
            if ((*(ulonglong *)(lVar6 + *param_1) & uVar5) != 0) {
              if ((longlong)uVar2 < (longlong)param_3) {
                *(int *)(param_2 + uVar2 * 4) = iVar7 + iVar3;
              }
              uVar4 = (ulonglong)((int)uVar4 + 1);
              uVar2 = uVar2 + 1;
            }
            uVar5 = uVar5 >> 1;
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
        }
        iVar7 = iVar7 + -0x40;
        lVar6 = lVar6 + -8;
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
    }
    iVar1 = (int)uVar4;
    if (iVar1 < param_3) {
      uVar4 = (ulonglong)(iVar1 + 1);
      *(undefined4 *)(param_2 + (longlong)iVar1 * 4) = 0xffffffff;
    }
    return uVar4;
  }
  return 0;
}



// FUNCTION 1455dc030 FUN_1455dc030 body=1244 status=ok
// SIG undefined FUN_1455dc030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1455dc030(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  ulonglong *local_58;
  ulonglong *local_50;
  undefined8 *local_48;
  
  lVar23 = 0;
  FUN_144eede20(param_4);
  local_60 = (undefined8 *)FUN_144eede90(param_4);
  local_70 = (undefined8 *)FUN_144eede90(param_4);
  local_48 = (undefined8 *)FUN_144eede90(param_4);
  local_68 = (undefined8 *)FUN_144eede90(param_4);
  lVar12 = lVar23;
  if ((((local_68 != (undefined8 *)0x0) &&
       (iVar8 = FUN_1455daab0(local_48,param_2,param_3), iVar8 != 0)) &&
      (iVar8 = FUN_144ba0340(local_48), iVar8 == 0)) &&
     (lVar11 = FUN_144ba06b0(local_68,param_3), lVar12 = 0, lVar11 != 0)) {
    iVar8 = FUN_144ba03d0(local_48);
    iVar9 = FUN_144ba03d0(local_68);
    uVar4 = *(uint *)(param_3 + 1);
    lVar24 = (longlong)(int)uVar4;
    lVar11 = FUN_144ba1290(local_48,uVar4);
    lVar12 = lVar23;
    if (lVar11 != 0) {
      lVar12 = (longlong)*(int *)(local_48 + 1);
      puVar16 = (ulonglong *)*local_48;
      if (lVar12 < lVar24) {
        puVar17 = puVar16 + lVar12;
        for (lVar11 = lVar24 - lVar12; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
      }
      *(uint *)(local_48 + 1) = uVar4;
      lVar11 = FUN_144ba1290(local_60,uVar4);
      lVar12 = lVar23;
      if (lVar11 != 0) {
        puVar17 = (ulonglong *)*local_60;
        *puVar17 = 1;
        if (1 < (int)uVar4) {
          puVar14 = puVar17;
          for (lVar12 = (longlong)(int)(uVar4 - 1); puVar14 = puVar14 + 1, lVar12 != 0;
              lVar12 = lVar12 + -1) {
            *puVar14 = 0;
          }
        }
        *(uint *)(local_60 + 1) = uVar4;
        lVar11 = FUN_144ba1290(local_70,uVar4);
        lVar12 = lVar23;
        if (lVar11 != 0) {
          local_58 = (ulonglong *)*local_70;
          lVar12 = lVar24;
          puVar14 = local_58;
          if (0 < (int)uVar4) {
            for (; lVar12 != 0; lVar12 = lVar12 + -1) {
              *puVar14 = 0;
              puVar14 = puVar14 + 1;
            }
          }
          *(uint *)(local_70 + 1) = uVar4;
          local_50 = (ulonglong *)*local_68;
          puVar14 = local_50;
          local_78 = iVar9;
joined_r0x0001455dc1c6:
          for (; puVar7 = local_68, puVar6 = local_70, iVar10 = iVar9, iVar8 != 0;
              iVar8 = iVar8 + -1) {
            uVar20 = *puVar16;
            puVar14 = local_50;
            iVar10 = local_78;
            if ((uVar20 & 1) != 0) break;
            uVar22 = -(ulonglong)((uint)*puVar17 & 1);
            iVar9 = uVar4 - 1;
            uVar18 = *puVar17 ^ *(ulonglong *)*param_3 & uVar22;
            lVar12 = 0;
            if (0 < iVar9) {
              lVar11 = (longlong)puVar16 - (longlong)puVar17;
              puVar13 = puVar17 + 1;
              lVar23 = (longlong)iVar9;
              do {
                puVar5 = puVar13 + 1;
                uVar21 = uVar20 >> 1;
                uVar19 = uVar18 >> 1;
                uVar20 = *(ulonglong *)(lVar11 + -8 + (longlong)puVar5);
                *(ulonglong *)(lVar11 + -0x10 + (longlong)puVar5) =
                     *(longlong *)(lVar11 + (longlong)puVar13) << 0x3f | uVar21;
                uVar18 = *(ulonglong *)(*param_3 + (-8 - (longlong)puVar17) + (longlong)puVar5) &
                         uVar22 ^ *puVar13;
                puVar13[-1] = uVar18 << 0x3f | uVar19;
                lVar23 = lVar23 + -1;
                puVar13 = puVar5;
                lVar12 = (longlong)iVar9;
              } while (lVar23 != 0);
            }
            puVar16[lVar12] = uVar20 >> 1;
            puVar17[lVar12] = uVar18 >> 1;
            iVar9 = local_78;
          }
          lVar12 = 0;
          if (iVar8 < 0x41) {
            if (*puVar16 == 0) goto LAB_1455dc4f1;
            if (*puVar16 == 1) goto LAB_1455dc4b8;
          }
          puVar13 = puVar14;
          iVar9 = iVar10;
          if (iVar8 < iVar10) {
            puVar13 = (ulonglong *)*local_48;
            puVar5 = (ulonglong *)*local_60;
            local_68 = local_48;
            local_70 = local_60;
            puVar16 = puVar14;
            puVar17 = local_58;
            local_78 = iVar8;
            local_60 = puVar6;
            local_58 = puVar5;
            local_50 = puVar13;
            local_48 = puVar7;
            iVar9 = iVar8;
            iVar8 = iVar10;
          }
          lVar11 = 0;
          lVar23 = lVar12;
          if ((0 < (int)uVar4) && (lVar23 = lVar11, 3 < uVar4)) {
            iVar10 = uVar4 - 1;
            puVar14 = puVar17 + iVar10;
            if (((((local_58 + iVar10 < puVar17) || (puVar14 < local_58)) &&
                 ((puVar5 = puVar16 + iVar10, puVar5 < puVar17 || (puVar14 < puVar16)))) &&
                ((puVar13 + iVar10 < puVar17 || (puVar14 < puVar13)))) &&
               (((local_58 + iVar10 < puVar16 || (puVar5 < local_58)) &&
                ((puVar13 + iVar10 < puVar16 || (puVar5 < puVar13)))))) {
              uVar15 = uVar4 & 0x80000003;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
              }
              puVar14 = puVar16 + 2;
              lVar23 = lVar12;
              do {
                lVar23 = lVar23 + 4;
                puVar1 = (ulonglong *)
                         ((longlong)puVar13 + (-0x10 - (longlong)puVar16) + (longlong)puVar14);
                uVar20 = puVar1[1];
                puVar5 = puVar14 + 4;
                puVar14[-2] = *puVar1 ^ puVar14[-2];
                puVar14[-1] = uVar20 ^ puVar14[-1];
                puVar1 = (ulonglong *)
                         ((longlong)puVar17 + (-0x30 - (longlong)puVar16) + (longlong)puVar5);
                uVar20 = puVar1[1];
                puVar2 = (ulonglong *)
                         ((longlong)local_58 + (-0x30 - (longlong)puVar16) + (longlong)puVar5);
                uVar18 = puVar2[1];
                puVar3 = (ulonglong *)
                         ((longlong)puVar17 + (-0x30 - (longlong)puVar16) + (longlong)puVar5);
                *puVar3 = *puVar2 ^ *puVar1;
                puVar3[1] = uVar18 ^ uVar20;
                puVar1 = (ulonglong *)
                         ((longlong)puVar13 + (-0x20 - (longlong)puVar16) + (longlong)puVar5);
                uVar20 = puVar1[1];
                *puVar14 = *puVar1 ^ *puVar14;
                puVar14[1] = uVar20 ^ puVar14[1];
                puVar14 = (ulonglong *)
                          ((longlong)local_58 + (-0x20 - (longlong)puVar16) + (longlong)puVar5);
                uVar18 = puVar14[1];
                puVar1 = (ulonglong *)
                         ((longlong)puVar17 + (-0x20 - (longlong)puVar16) + (longlong)puVar5);
                uVar20 = puVar1[1];
                puVar2 = (ulonglong *)
                         ((longlong)puVar17 + (-0x20 - (longlong)puVar16) + (longlong)puVar5);
                *puVar2 = *puVar14 ^ *puVar1;
                puVar2[1] = uVar18 ^ uVar20;
                puVar14 = puVar5;
              } while (lVar23 < (int)(uVar4 - uVar15));
            }
          }
          if (lVar23 < lVar24) {
            puVar14 = puVar16 + lVar23;
            lVar23 = lVar24 - lVar23;
            do {
              *puVar14 = *puVar14 ^
                         *(ulonglong *)((longlong)puVar14 + ((longlong)puVar13 - (longlong)puVar16))
              ;
              puVar5 = (ulonglong *)((longlong)puVar14 + ((longlong)puVar17 - (longlong)puVar16));
              *puVar5 = *puVar5 ^ *(ulonglong *)
                                   ((longlong)puVar14 + ((longlong)local_58 - (longlong)puVar16));
              puVar14 = puVar14 + 1;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          puVar14 = puVar13;
          if (iVar8 == iVar9) {
            uVar15 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x3fU)) >> 6;
            uVar18 = (ulonglong)(int)uVar15;
            uVar20 = puVar16[uVar18];
            uVar22 = uVar18;
            for (; (uVar20 == 0 && (uVar15 = (uint)uVar22, uVar18 != 0)); uVar18 = uVar18 - 1) {
              uVar20 = puVar16[uVar18 - 1];
              uVar15 = uVar15 - 1;
              uVar22 = (ulonglong)uVar15;
            }
            iVar8 = FUN_144ba0420();
            iVar8 = uVar15 * 0x40 + iVar8;
            puVar14 = local_50;
          }
          goto joined_r0x0001455dc1c6;
        }
      }
    }
  }
LAB_1455dc4f1:
  FUN_144eedf20(param_4);
  return lVar12;
LAB_1455dc4b8:
  FUN_144ba1350(local_60);
  lVar23 = FUN_144ba06b0(param_1,local_60);
  lVar12 = 0;
  if (lVar23 != 0) {
    lVar12 = 1;
  }
  goto LAB_1455dc4f1;
}



// FUNCTION 1455dc510 FUN_1455dc510 body=26 status=ok
// SIG undefined FUN_1455dc510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455dc510(longlong param_1)

{
  FUN_145631f60(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1455dc530 FUN_1455dc530 body=25 status=ok
// SIG undefined FUN_1455dc530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455dc530(undefined8 *param_1)

{
  FUN_144ea8fa0(*param_1);
  return;
}



// FUNCTION 1455dc550 FUN_1455dc550 body=62 status=ok
// SIG undefined FUN_1455dc550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455dc550(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144ea8fa0(*param_1);
  if (2 < iVar1 - 0x98U) {
    return 0xffffffff;
  }
  uVar2 = FUN_144ea8fa0(*(undefined8 *)param_1[1]);
  return uVar2;
}



// FUNCTION 1455dc590 FUN_1455dc590 body=86 status=ok
// SIG undefined FUN_1455dc590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455dc590(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144ea8fa0(*param_1);
  if (iVar1 == 0x98) {
    iVar1 = FUN_144ea8fa0(*(undefined8 *)param_1[1]);
    if (iVar1 == 0x9e) {
      uVar2 = FUN_144bb5d90();
      uVar2 = FUN_145281f40(*(undefined8 *)(param_1[1] + 8),uVar2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1455dc5f0 FUN_1455dc5f0 body=51 status=ok
// SIG undefined FUN_1455dc5f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455dc5f0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_144ea8fa0(*param_1);
  if (iVar1 != 0x9b) {
    return 0;
  }
  return param_1[1];
}



// FUNCTION 1455dc630 FUN_1455dc630 body=51 status=ok
// SIG undefined FUN_1455dc630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455dc630(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_144ea8fa0(*param_1);
  if (iVar1 != 0x96) {
    return 0;
  }
  return param_1[1];
}



// FUNCTION 1455dc670 FUN_1455dc670 body=26 status=ok
// SIG undefined FUN_1455dc670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455dc670(longlong param_1)

{
  FUN_1452a5580(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1455dc690 FUN_1455dc690 body=94 status=ok
// SIG undefined FUN_1455dc690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455dc690(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1455dc69c;
  iVar1 = FUN_144ea8fa0(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 != 0x15) {
    FUN_144ba24f0(0x23,0x83,0x79,"crypto\\pkcs12\\p12_add.c",0x4c,uVar2);
    return 0;
  }
  uVar2 = FUN_145501740();
  uVar2 = FUN_145281f40(*(undefined8 *)(param_1 + 0x20),uVar2);
  return uVar2;
}



// FUNCTION 1455dc6f0 FUN_1455dc6f0 body=147 status=ok
// SIG undefined FUN_1455dc6f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455dc6f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar2 = FUN_144ea8fa0(*(undefined8 *)(param_1 + 0x18));
  if (iVar2 != 0x1a) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
  uVar3 = FUN_145501740();
  uVar3 = FUN_145501110(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 8),uVar3,
                        param_2,param_3,*(undefined8 *)(lVar1 + 0x10),CONCAT44(uVar4,1));
  return uVar3;
}



// FUNCTION 1455dc790 FUN_1455dc790 body=102 status=ok
// SIG undefined FUN_1455dc790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455dc790(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1455dc79c;
  iVar1 = FUN_144ea8fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  if (iVar1 != 0x15) {
    FUN_144ba24f0(0x23,0x82,0x79,"crypto\\pkcs12\\p12_add.c",0x9f,uVar2);
    return 0;
  }
  uVar2 = FUN_145501750();
  uVar2 = FUN_145281f40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),uVar2);
  return uVar2;
}



// FUNCTION 1455dc800 FUN_1455dc800 body=8 status=ok
// SIG undefined FUN_1455dc800(void)

undefined ** FUN_1455dc800(void)

{
  return &PTR_s_OpenSSL_NULL_UI_149dd1a20;
}



// FUNCTION 1455dc810 FUN_1455dc810 body=337 status=ok
// SIG undefined FUN_1455dc810(void)

undefined8 FUN_1455dc810(void *param_1,void *param_2,void *param_3,undefined8 param_4)

{
  void *_Dst;
  ulonglong _Size;
  size_t _Size_00;
  ulonglong _Size_01;
  longlong lVar1;
  
  _Size = 0xffffffffffffffff;
  if (param_1 == (void *)0x0) {
    _Size_00 = 0;
    _Size_01 = 0xffffffffffffffff;
    do {
      _Size_01 = _Size_01 + 1;
    } while (*(char *)((longlong)param_2 + _Size_01) != '\0');
    do {
      _Size = _Size + 1;
    } while (*(char *)(_Size + (longlong)param_3) != '\0');
  }
  else {
    _Size_00 = 0xffffffffffffffff;
    do {
      _Size_00 = _Size_00 + 1;
    } while (*(char *)((longlong)param_1 + _Size_00) != '\0');
    _Size_01 = 0xffffffffffffffff;
    do {
      _Size_01 = _Size_01 + 1;
    } while (*(char *)((longlong)param_2 + _Size_01) != '\0');
    do {
      _Size = _Size + 1;
    } while (*(char *)(_Size + (longlong)param_3) != '\0');
    if (0x3fffffffffffffff < _Size_00) {
      return 0x1b;
    }
  }
  if ((_Size_01 < 0x4000000000000000) && (_Size < 0x7ffffffffffffffe)) {
    lVar1 = _Size + _Size_01 + _Size_00;
    _Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)(lVar1 + 3);
    if (_Dst != (void *)0x0) {
      if (_Size_00 != 0) {
        memcpy(_Dst,param_1,_Size_00);
      }
      *(undefined1 *)((longlong)_Dst + _Size_00) = 0;
      memcpy((void *)(_Size_00 + 1 + (longlong)_Dst),param_2,_Size_01);
      *(undefined1 *)((longlong)_Dst + _Size_00 + _Size_01 + 1) = 0;
      memcpy((void *)((longlong)_Dst + _Size_00 + _Size_01 + 2),param_3,_Size);
      *(undefined1 *)((longlong)_Dst + lVar1 + 2) = 0;
      FUN_14550c7c0(param_4,_Dst,lVar1 + 2,&DAT_1452ce920);
      return 0;
    }
  }
  return 0x1b;
}



// FUNCTION 1455dc970 FUN_1455dc970 body=47 status=ok
// SIG undefined FUN_1455dc970(void)

undefined8 FUN_1455dc970(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_1 + lVar1) != '\0');
  FUN_14550c7c0(param_2,param_1,lVar1,0);
  return 0;
}



// FUNCTION 1455dc9a0 FUN_1455dc9a0 body=47 status=ok
// SIG undefined FUN_1455dc9a0(void)

undefined8 FUN_1455dc9a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_1 + lVar1) != '\0');
  FUN_14550c7c0(param_2,param_1,lVar1,0);
  return 0;
}



// FUNCTION 1455dc9d0 FUN_1455dc9d0 body=531 status=ok
// SIG undefined FUN_1455dc9d0(void)

void FUN_1455dc9d0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_108 [32];
  uint local_e8;
  uint local_e0;
  uint local_d8;
  uint local_d0;
  uint local_c8;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  uint local_a8;
  uint local_a0;
  uint local_98;
  uint local_90;
  uint local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  byte local_66;
  byte local_65;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = -1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_3 + lVar4) != '\0');
  local_78 = param_2;
  local_70 = param_4;
  uVar1 = FUN_144f16fc0();
  lVar4 = FUN_14550e2a0(&PTR_FUN_149d9b778,param_3,uVar1);
  if (lVar4 != 0) {
    lVar2 = FUN_14550c830(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_14550c830(param_1);
      uVar1 = FUN_144f16fc0(uVar3);
      uVar3 = FUN_14550c820(param_1);
      FUN_14550e3f0(lVar4,uVar3,uVar1);
    }
    FUN_14550e410(lVar4,&local_68);
    local_80 = (uint)local_59;
    local_88 = (uint)local_5a;
    local_90 = (uint)local_5b;
    local_98 = (uint)local_5c;
    local_a0 = (uint)local_5d;
    local_a8 = (uint)local_5e;
    local_b0 = (uint)local_5f;
    local_b8 = (uint)local_60;
    local_c0 = (uint)local_61;
    local_c8 = (uint)local_62;
    local_d0 = (uint)local_63;
    local_d8 = (uint)local_64;
    local_e0 = (uint)local_65;
    local_e8 = (uint)local_66;
    lVar4 = FUN_144f2b8b0("%s %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
                          local_78,local_68,local_67);
    if (lVar4 != 0) {
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)(lVar4 + lVar5) != '\0');
      FUN_14550c7c0(local_70,lVar4,lVar5,&DAT_1452ce920);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_108);
}



// FUNCTION 1455dcbf0 FUN_1455dcbf0 body=120 status=ok
// SIG undefined FUN_1455dcbf0(void)

undefined8
FUN_1455dcbf0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 == 0) || (param_3 == 0x50)) {
    lVar1 = FUN_144f2b8b0(&DAT_149dd1ac8,param_1,param_2);
  }
  else {
    lVar1 = FUN_144f2b8b0(&DAT_149dd1af0,param_1,param_2,param_3,param_4);
  }
  if (lVar1 == 0) {
    return 0x1b;
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(lVar1 + lVar2) != '\0');
  FUN_14550c7c0(param_5,lVar1,lVar2,&DAT_1452ce920);
  return 0;
}



// FUNCTION 1455dcc70 FUN_1455dcc70 body=86 status=ok
// SIG undefined FUN_1455dcc70(void)

undefined8 FUN_1455dcc70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144f2b8b0(&DAT_149dd1b20,param_1,param_2);
  if (lVar1 == 0) {
    return 0x1b;
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(lVar1 + lVar2) != '\0');
  FUN_14550c7c0(param_3,lVar1,lVar2,&DAT_1452ce920);
  return 0;
}



// FUNCTION 1455dccd0 FUN_1455dccd0 body=114 status=ok
// SIG undefined FUN_1455dccd0(void)

void FUN_1455dccd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = FUN_1454f6690(local_88);
  if (iVar1 != 0) {
    uVar2 = FUN_144f16fc0(param_3);
    FUN_1454f66e0(local_88,param_2,uVar2);
    FUN_1454f6810(param_1,local_88);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1455dcd50 FUN_1455dcd50 body=14 status=ok
// SIG undefined FUN_1455dcd50(void)

void FUN_1455dcd50(longlong param_1)

{
  if (*(int *)(param_1 + 0x20) != -1) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return;
}



// FUNCTION 1455dcd60 FUN_1455dcd60 body=83 status=ok
// SIG undefined FUN_1455dcd60(void)

void FUN_1455dcd60(undefined8 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (iVar1 = *(int *)(param_1 + 4), iVar1 != -1)) {
    if (iVar1 < 1) {
      _wassert(L"rcbuf->ref > 0",
               L"D:\\Primary\\Engine\\Source\\ThirdParty\\nghttp2\\1.47.0\\lib\\nghttp2_rcbuf.c",
               0x58);
      iVar1 = *(int *)(param_1 + 4);
    }
    *(int *)(param_1 + 4) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      FUN_1455112b0(param_1[1],param_1,*param_1);
    }
  }
  return;
}



// FUNCTION 1455dcdc0 FUN_1455dcdc0 body=131 status=ok
// SIG undefined FUN_1455dcdc0(void)

undefined8 FUN_1455dcdc0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_145511290(param_3,param_2 + 0x28);
  if (puVar1 == (undefined8 *)0x0) {
    return 0xfffffc7b;
  }
  *param_1 = (longlong)puVar1;
  *puVar1 = *param_3;
  *(undefined8 *)(*param_1 + 8) = param_3[2];
  *(undefined8 **)(*param_1 + 0x10) = puVar1 + 5;
  *(longlong *)(*param_1 + 0x18) = param_2;
  *(undefined4 *)(*param_1 + 0x20) = 1;
  return 0;
}



// FUNCTION 1455dce50 FUN_1455dce50 body=171 status=ok
// SIG undefined FUN_1455dce50(void)

undefined8 FUN_1455dce50(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_145511290(param_4,param_3 + 0x29);
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0xfffffc7b;
  }
  else {
    *param_1 = (longlong)puVar1;
    *puVar1 = *param_4;
    *(undefined8 *)(*param_1 + 8) = param_4[2];
    *(undefined8 **)(*param_1 + 0x10) = puVar1 + 5;
    *(longlong *)(*param_1 + 0x18) = param_3 + 1;
    *(undefined4 *)(*param_1 + 0x20) = 1;
    *(longlong *)(*param_1 + 0x18) = param_3;
    puVar2 = (undefined1 *)FUN_1452e70f0(*(undefined8 *)(*param_1 + 0x10),param_2,param_3);
    *puVar2 = 0;
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1455dcf00 FUN_1455dcf00 body=246 status=ok
// SIG undefined FUN_1455dcf00(void)

ulonglong FUN_1455dcf00(longlong param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar6 = 0;
  uVar4 = uVar6;
  uVar8 = uVar6;
  if (3 < param_2) {
    lVar9 = 0;
    lVar10 = 0;
    lVar2 = 0;
    lVar3 = 0;
    pbVar5 = (byte *)(param_1 + 2);
    do {
      uVar4 = uVar4 + 4;
      lVar9 = lVar9 + (ulonglong)*(uint *)(&DAT_149de9f00 + (ulonglong)pbVar5[-2] * 8);
      lVar10 = lVar10 + (ulonglong)*(uint *)(&DAT_149de9f00 + (ulonglong)pbVar5[-1] * 8);
      lVar2 = lVar2 + (ulonglong)*(uint *)(&DAT_149de9f00 + (ulonglong)*pbVar5 * 8);
      lVar3 = lVar3 + (ulonglong)*(uint *)(&DAT_149de9f00 + (ulonglong)pbVar5[1] * 8);
      pbVar5 = pbVar5 + 4;
    } while (uVar4 < (param_2 & 0xfffffffffffffffc));
    auVar1._8_4_ = (int)(lVar3 + lVar10);
    auVar1._0_8_ = lVar2 + lVar9;
    auVar1._12_4_ = (int)((ulonglong)(lVar3 + lVar10) >> 0x20);
    uVar8 = lVar2 + lVar9 + auVar1._8_8_;
  }
  if (param_2 <= uVar4) goto LAB_1455dcfec;
  uVar7 = uVar6;
  if (param_2 - uVar4 < 2) {
LAB_1455dcfda:
    uVar8 = uVar8 + *(uint *)(&DAT_149de9f00 + (ulonglong)*(byte *)(uVar4 + param_1) * 8);
  }
  else {
    do {
      uVar7 = uVar7 + *(uint *)(&DAT_149de9f00 + (ulonglong)*(byte *)(uVar4 + param_1) * 8);
      lVar2 = uVar4 + 1;
      uVar4 = uVar4 + 2;
      uVar6 = uVar6 + *(uint *)(&DAT_149de9f00 + (ulonglong)*(byte *)(lVar2 + param_1) * 8);
    } while (uVar4 < param_2 - 1);
    if (uVar4 < param_2) goto LAB_1455dcfda;
  }
  uVar8 = uVar8 + uVar6 + uVar7;
LAB_1455dcfec:
  return uVar8 + 7 >> 3;
}



// FUNCTION 1455dd000 FUN_1455dd000 body=356 status=ok
// SIG undefined FUN_1455dd000(void)

undefined8 FUN_1455dd000(longlong param_1,byte *param_2,longlong param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 local_res8;
  
  pbVar2 = param_2 + param_3;
  uVar5 = 0;
  uVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) -
          *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
  uVar6 = uVar5;
  if (param_2 != pbVar2) {
    do {
      bVar3 = *param_2;
      param_2 = param_2 + 1;
      uVar6 = uVar6 | (ulonglong)*(uint *)(&DAT_149de9f04 + (ulonglong)bVar3 * 8) <<
                      (0x20U - (char)uVar5 & 0x3f);
      uVar5 = uVar5 + *(uint *)(&DAT_149de9f00 + (ulonglong)bVar3 * 8);
      if (0x1f < uVar5) {
        if (uVar7 < 4) {
          do {
            uVar4 = FUN_145511c30(param_1,uVar6 >> 0x38);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            uVar6 = uVar6 << 8;
            uVar5 = uVar5 - 8;
          } while (7 < uVar5);
          uVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) -
                  *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
        }
        else {
          uVar7 = uVar7 - 4;
          local_res8 = CONCAT13((char)(uVar6 >> 0x20),
                                CONCAT12((char)(uVar6 >> 0x28),
                                         CONCAT11((char)(uVar6 >> 0x30),(char)(uVar6 >> 0x38))));
          uVar6 = uVar6 << 0x20;
          **(undefined4 **)(*(longlong *)(param_1 + 8) + 0x20) = local_res8;
          plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0x20);
          *plVar1 = *plVar1 + 4;
          uVar5 = uVar5 - 0x20;
        }
      }
    } while (param_2 != pbVar2);
    for (; 7 < uVar5; uVar5 = uVar5 - 8) {
      uVar4 = FUN_145511c30(param_1,uVar6 >> 0x38);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar6 = uVar6 << 8;
    }
    if ((uVar5 != 0) &&
       (uVar4 = FUN_145511c30(param_1,('\x01' << (8U - (char)uVar5 & 0x1f)) - 1U |
                                      (byte)(uVar6 >> 0x38)), (int)uVar4 != 0)) {
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1455dd170 FUN_1455dd170 body=9 status=ok
// SIG undefined FUN_1455dd170(void)

void FUN_1455dd170(undefined2 *param_1)

{
  *param_1 = 0x4000;
  return;
}



// FUNCTION 1455dd180 FUN_1455dd180 body=224 status=ok
// SIG undefined FUN_1455dd180(void)

ulonglong FUN_1455dd180(ushort *param_1,longlong param_2,byte *param_3,ulonglong param_4,int param_5
                       )

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort *puVar7;
  ushort local_res8;
  undefined1 local_resa;
  
  local_res8 = *param_1;
  puVar7 = &local_res8;
  pbVar1 = param_3 + param_4;
  local_resa = 0;
  if (param_3 != pbVar1) {
    do {
      bVar2 = *param_3;
      param_3 = param_3 + 1;
      lVar6 = (ulonglong)(*puVar7 & 0x1ff) * 0x10 + (ulonglong)(bVar2 >> 4);
      uVar3 = *(ushort *)(&DAT_149dea710 + lVar6 * 4);
      lVar6 = lVar6 * 4;
      if ((short)uVar3 < 0) {
        **(undefined1 **)(param_2 + 0x18) = (&DAT_149dea712)[lVar6];
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + 1;
        uVar3 = *(ushort *)(&DAT_149dea710 + lVar6);
      }
      lVar4 = (ulonglong)(uVar3 & 0x1ff) * 0x10 + (ulonglong)(bVar2 & 0xf);
      lVar6 = lVar4 * 4;
      puVar7 = (ushort *)(&DAT_149dea710 + lVar6);
      if (*(short *)(&DAT_149dea710 + lVar4 * 4) < 0) {
        **(undefined1 **)(param_2 + 0x18) = (&DAT_149dea712)[lVar6];
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + 1;
      }
    } while (param_3 != pbVar1);
    local_res8 = *puVar7;
  }
  *param_1 = local_res8;
  if ((param_5 == 0) || (uVar5 = 0xfffffdf5, (local_res8 >> 0xe & 1) != 0)) {
    uVar5 = param_4 & 0xffffffff;
  }
  return uVar5;
}



// FUNCTION 1455dd260 FUN_1455dd260 body=14 status=ok
// SIG undefined FUN_1455dd260(void)

bool FUN_1455dd260(short *param_1)

{
  return *param_1 == 0x100;
}



// FUNCTION 1455dd270 FUN_1455dd270 body=92 status=ok
// SIG undefined FUN_1455dd270(void)

void FUN_1455dd270(int *param_1,longlong param_2,longlong param_3,short *param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (0 < (longlong)param_5) {
    do {
      iVar1 = *(short *)(param_3 + lVar3 * 2) * 0x100 + *param_1;
      *(int *)(param_2 + lVar3 * 4) = iVar1;
      lVar3 = lVar3 + 1;
      lVar2 = (longlong)(iVar1 * 4);
      *param_1 = (int)((ulonglong)(*param_4 * lVar2) >> 0x10) + param_1[1];
      param_1[1] = (int)((ulonglong)(param_4[1] * lVar2) >> 0x10);
    } while (lVar3 < param_5);
  }
  return;
}



// FUNCTION 1455dd2cc FUN_1455dd2cc body=428 status=ok
// SIG undefined FUN_1455dd2cc(void)

void FUN_1455dd2cc(void *param_1,longlong param_2,short *param_3,int param_4,int param_5)

{
  short *psVar1;
  short sVar2;
  longlong lVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  short *psVar8;
  longlong lVar9;
  short *psVar10;
  int iVar11;
  
  uVar6 = (ulonglong)param_5;
  if (param_5 < 6) {
    FUN_144bca940("assertion failed: d >= 6",
                  "../../../third_party/opus/src/silk/LPC_analysis_filter.c",0x43);
  }
  if ((uVar6 & 1) != 0) {
    FUN_144bca940("assertion failed: (d & 1) == 0",
                  "../../../third_party/opus/src/silk/LPC_analysis_filter.c",0x44);
  }
  if (param_4 < param_5) {
    FUN_144bca940("assertion failed: d <= len",
                  "../../../third_party/opus/src/silk/LPC_analysis_filter.c",0x45);
  }
  if ((longlong)uVar6 < (longlong)param_4) {
    psVar10 = (short *)(param_2 + (uVar6 - 6) * 2);
    lVar9 = (longlong)param_4 - uVar6;
    do {
      uVar7 = 6;
      iVar11 = (int)psVar10[4] * (int)param_3[1] + (int)psVar10[3] * (int)param_3[2] +
               (int)psVar10[2] * (int)param_3[3] + (int)param_3[4] * (int)psVar10[1] +
               (int)param_3[5] * (int)*psVar10 + (int)*param_3 * (int)psVar10[5];
      if (6 < (longlong)uVar6) {
        psVar8 = psVar10 + -1;
        do {
          psVar1 = param_3 + uVar7;
          uVar5 = ~uVar7;
          lVar3 = uVar7 + 1;
          uVar7 = uVar7 + 2;
          sVar2 = *psVar8;
          psVar8 = psVar8 + -2;
          iVar11 = iVar11 + (int)*psVar1 * (int)sVar2 +
                   (int)psVar10[uVar5 + 5] * (int)param_3[lVar3];
        } while ((longlong)uVar7 < (longlong)uVar6);
      }
      iVar11 = (psVar10[6] * 0x1000 - iVar11 >> 0xb) + 1 >> 1;
      uVar4 = (undefined2)iVar11;
      if (iVar11 < -0x8000) {
        uVar4 = 0x8000;
      }
      if (0x7fff < iVar11) {
        uVar4 = 0x7fff;
      }
      *(undefined2 *)((longlong)psVar10 + (longlong)param_1 + (0xc - param_2)) = uVar4;
      psVar10 = psVar10 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  memset(param_1,0,uVar6 * 2);
  return;
}



// FUNCTION 1455dd478 FUN_1455dd478 body=87 status=ok
// SIG undefined FUN_1455dd478(void)

void FUN_1455dd478(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = param_3 + -0x10000;
  lVar1 = (longlong)param_2 + -1;
  lVar2 = 0;
  if (0 < lVar1) {
    do {
      *(short *)(param_1 + lVar2 * 2) =
           (short)((*(short *)(param_1 + lVar2 * 2) * param_3 >> 0xf) + 1 >> 1);
      lVar2 = lVar2 + 1;
      param_3 = param_3 + ((iVar3 * param_3 >> 0xf) + 1 >> 1);
    } while (lVar2 < lVar1);
  }
  *(short *)(param_1 + lVar1 * 2) =
       (short)((*(short *)(param_1 + lVar1 * 2) * param_3 >> 0xf) + 1 >> 1);
  return;
}



// FUNCTION 1455dd4d0 FUN_1455dd4d0 body=102 status=ok
// SIG undefined FUN_1455dd4d0(void)

void FUN_1455dd4d0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  int local_78 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = 0;
  if (0 < param_2) {
    lVar3 = 0;
    do {
      iVar1 = (int)*(short *)(param_1 + lVar3 * 2);
      iVar2 = iVar2 + iVar1;
      local_78[lVar3] = iVar1 << 0xc;
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_2);
    if (0xfff < iVar2) goto LAB_1455dd526;
  }
  FUN_1455dd540(local_78,param_2);
LAB_1455dd526:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1455dd540 FUN_1455dd540 body=769 status=ok
// SIG undefined FUN_1455dd540(void)

int FUN_1455dd540(int *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  
  iVar16 = param_2 + -1;
  iVar17 = 0x40000000;
  if (0 < iVar16) {
    puVar7 = (uint *)(param_1 + iVar16);
    do {
      if (0x1ffdf3c < *puVar7 + 0xffef9e) goto LAB_1455dd82e;
      lVar18 = (longlong)(int)(*puVar7 * -0x80);
      uVar8 = 0x40000000 - (int)((ulonglong)(lVar18 * lVar18) >> 0x20);
      iVar17 = (int)((ulonglong)((longlong)iVar17 * (longlong)(int)uVar8) >> 0x20) * 4;
      if (iVar17 < 0x1a36e) goto LAB_1455dd82e;
      uVar1 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
      if (uVar1 == 0) {
        iVar3 = -0x20;
      }
      else {
        iVar3 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar3 = iVar3 + -0x1f;
      }
      iVar3 = iVar3 + 0x20;
      if (uVar1 == 0) {
        iVar14 = 0x1f;
      }
      else {
        iVar14 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        iVar14 = 0x1e - iVar14;
      }
      iVar9 = uVar8 << ((byte)iVar14 & 0x1f);
      lVar6 = 0x1fffffff / (longlong)(iVar9 >> 0x10);
      iVar5 = (int)lVar6;
      iVar5 = (int)((ulonglong)
                    ((longlong)
                     ((int)((ulonglong)((longlong)iVar9 * (longlong)(short)lVar6) >> 0x10) * -8) *
                    (longlong)iVar5) >> 0x10) + iVar5 * 0x10000;
      iVar14 = (0x1f - iVar14) - iVar3;
      if (iVar14 < 1) {
        bVar2 = -(byte)iVar14;
        iVar10 = -0x80000000 >> (bVar2 & 0x1f);
        iVar4 = 0x7fffffff >> (bVar2 & 0x1f);
        iVar9 = iVar5;
        if (iVar5 < iVar4) {
          iVar9 = iVar4;
        }
        iVar14 = iVar5;
        if (iVar5 < iVar10) {
          iVar14 = iVar10;
        }
        if (iVar10 < iVar5) {
          iVar9 = iVar10;
        }
        if (iVar4 < iVar5) {
          iVar14 = iVar4;
        }
        if (iVar4 < iVar10) {
          iVar14 = iVar9;
        }
        iVar14 = iVar14 << (bVar2 & 0x1f);
      }
      else if (iVar14 < 0x20) {
        iVar14 = iVar5 >> ((byte)iVar14 & 0x1f);
      }
      else {
        iVar14 = 0;
      }
      lVar6 = 0;
      if (0 < param_2 >> 1) {
        puVar15 = puVar7;
        do {
          puVar15 = puVar15 + -1;
          uVar8 = param_1[lVar6];
          uVar1 = *puVar15;
          uVar11 = (uint)(((int)uVar1 * lVar18 >> 0x1e) + 1 >> 1);
          iVar9 = uVar8 - uVar11;
          iVar5 = iVar9;
          if ((int)(uVar8 & ~uVar11) < 0) {
            iVar5 = -0x80000000;
          }
          iVar4 = iVar9;
          if ((int)(uVar11 & ~uVar8) < 0) {
            iVar4 = 0x7fffffff;
          }
          if (-1 < iVar9) {
            iVar4 = iVar5;
          }
          lVar12 = (longlong)iVar4 * (longlong)iVar14;
          lVar13 = (lVar12 >> ((char)iVar3 - 1U & 0x3f)) + 1 >> 1;
          if (iVar3 == 1) {
            lVar13 = (lVar12 >> 1) + (ulonglong)((uint)lVar12 & 1);
          }
          if (0xffffffff < lVar13 + 0x80000000U) goto LAB_1455dd82e;
          param_1[lVar6] = (int)lVar13;
          uVar8 = (uint)(((int)uVar8 * lVar18 >> 0x1e) + 1 >> 1);
          iVar9 = uVar1 - uVar8;
          iVar5 = iVar9;
          if ((int)(uVar1 & ~uVar8) < 0) {
            iVar5 = -0x80000000;
          }
          iVar4 = iVar9;
          if ((int)(uVar8 & ~uVar1) < 0) {
            iVar4 = 0x7fffffff;
          }
          if (-1 < iVar9) {
            iVar4 = iVar5;
          }
          lVar12 = (longlong)iVar4 * (longlong)iVar14;
          lVar13 = (lVar12 >> ((char)iVar3 - 1U & 0x3f)) + 1 >> 1;
          if (iVar3 == 1) {
            lVar13 = (lVar12 >> 1) + (ulonglong)((uint)lVar12 & 1);
          }
          if (0xffffffff < lVar13 + 0x80000000U) goto LAB_1455dd82e;
          *puVar15 = (uint)lVar13;
          lVar6 = lVar6 + 1;
        } while (lVar6 < param_2 >> 1);
      }
      iVar16 = iVar16 + -1;
      param_2 = param_2 + -1;
      puVar7 = puVar7 + -1;
    } while (0 < iVar16);
  }
  if ((0x1ffdf3c < param_1[iVar16] + 0xffef9eU) ||
     (iVar17 = (int)((ulonglong)
                     ((longlong)
                      (0x40000000 -
                      (int)((ulonglong)((longlong)(*param_1 * -0x80) * (longlong)(*param_1 * -0x80))
                           >> 0x20)) * (longlong)iVar17) >> 0x20) * 4, iVar17 < 0x1a36e)) {
LAB_1455dd82e:
    iVar17 = 0;
  }
  return iVar17;
}



// FUNCTION 1455dd844 FUN_1455dd844 body=288 status=ok
// SIG undefined FUN_1455dd844(void)

void FUN_1455dd844(int *param_1,int *param_2,short *param_3,uint param_4)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  
  iVar9 = 0;
  if (param_4 == 0) {
    iVar10 = 0x20;
  }
  else {
    iVar10 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar10 = 0x1f - iVar10;
  }
  iVar5 = 0;
  bVar4 = (byte)(0x1f - iVar10);
  uVar7 = param_4;
  if (0 < (int)(param_4 - 1)) {
    uVar3 = (param_4 - 2 >> 1) + 1;
    uVar11 = (ulonglong)uVar3;
    iVar5 = uVar3 * 2;
    psVar6 = param_3;
    do {
      psVar1 = psVar6 + 1;
      sVar2 = *psVar6;
      psVar6 = psVar6 + 2;
      uVar7 = uVar7 + ((uint)((int)*psVar1 * (int)*psVar1 + (int)sVar2 * (int)sVar2) >>
                      (bVar4 & 0x1f));
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (iVar5 < (int)param_4) {
    uVar7 = uVar7 + ((uint)((int)param_3[iVar5] * (int)param_3[iVar5]) >> (bVar4 & 0x1f));
  }
  if (uVar7 == 0) {
    iVar5 = 0x20;
  }
  else {
    iVar5 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = 0x1f - iVar5;
  }
  iVar8 = 0;
  iVar10 = ((0x1f - iVar10) - iVar5) + 3;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  if (0 < (int)(param_4 - 1)) {
    uVar7 = (param_4 - 2 >> 1) + 1;
    uVar11 = (ulonglong)uVar7;
    iVar8 = uVar7 * 2;
    psVar6 = param_3;
    do {
      psVar1 = psVar6 + 1;
      sVar2 = *psVar6;
      psVar6 = psVar6 + 2;
      iVar9 = iVar9 + ((uint)((int)sVar2 * (int)sVar2 + (int)*psVar1 * (int)*psVar1) >>
                      ((byte)iVar10 & 0x1f));
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (iVar8 < (int)param_4) {
    iVar9 = iVar9 + ((uint)((int)param_3[iVar8] * (int)param_3[iVar8]) >> ((byte)iVar10 & 0x1f));
  }
  *param_2 = iVar10;
  *param_1 = iVar9;
  return;
}



// FUNCTION 1455dd964 FUN_1455dd964 body=414 status=ok
// SIG undefined FUN_1455dd964(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1455dd964(longlong param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 auStack_188 [32];
  int local_168;
  int local_158 [14];
  int local_120 [13];
  int aiStack_ec [25];
  int local_88;
  undefined1 local_84 [92];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar3 = (longlong)param_3;
  if ((param_3 != 10) && (param_3 != 0x10)) {
    FUN_144bca940("assertion failed: d==10 || d==16","../../../third_party/opus/src/silk/NLSF2A.c",
                  0x59);
  }
  puVar6 = &DAT_149dd1ca0;
  if (param_3 == 0x10) {
    puVar6 = &DAT_149dd1c90;
  }
  if (0 < param_3) {
    lVar8 = 0;
    do {
      iVar4 = (int)*(short *)(param_2 + lVar8 * 2);
      iVar2 = iVar4 >> 8;
      pbVar1 = puVar6 + lVar8;
      lVar8 = lVar8 + 1;
      (&local_88)[*pbVar1] =
           ((iVar4 + iVar2 * -0x100) *
            ((int)(short)(&DAT_149dee752)[iVar2] - (int)(short)(&DAT_149dee750)[iVar2]) +
            (short)(&DAT_149dee750)[iVar2] * 0x100 >> 3) + 1 >> 1;
    } while (lVar8 < lVar3);
  }
  iVar2 = param_3 >> 1;
  FUN_1455ddb1c(local_158,&local_88,iVar2);
  FUN_1455ddb1c(local_120,local_84);
  lVar8 = (longlong)iVar2;
  if (0 < iVar2) {
    piVar7 = aiStack_ec + lVar3;
    lVar5 = 0;
    do {
      iVar4 = *(int *)((longlong)local_158 + lVar5 + 4) + *(int *)((longlong)local_158 + lVar5);
      iVar2 = *(int *)((longlong)local_120 + lVar5 + 4) - *(int *)((longlong)local_120 + lVar5);
      *(int *)((longlong)aiStack_ec + lVar5 + 4U) = -(iVar2 + iVar4);
      *piVar7 = iVar2 - iVar4;
      piVar7 = piVar7 + -1;
      lVar8 = lVar8 + -1;
      lVar5 = lVar5 + 4;
    } while (lVar8 != 0);
  }
  local_168 = param_3;
  FUN_145631fec(param_1,aiStack_ec + 1,0xc);
  iVar2 = 0;
  while( true ) {
    iVar4 = FUN_1455dd4d0(param_1,param_3);
    if ((iVar4 != 0) || (0xf < iVar2)) break;
    FUN_145631f94(aiStack_ec + 1,param_3,0x10000 - (2 << ((byte)iVar2 & 0x1f)));
    lVar8 = 0;
    if (0 < param_3) {
      do {
        *(short *)(param_1 + lVar8 * 2) = (short)((aiStack_ec[lVar8 + 1] >> 4) + 1 >> 1);
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar3);
    }
    iVar2 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_188);
}



// FUNCTION 1455ddb1c FUN_1455ddb1c body=171 status=ok
// SIG undefined FUN_1455ddb1c(void)

void FUN_1455ddb1c(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  
  *param_1 = 0x10000;
  param_1[1] = -*param_2;
  if (1 < param_3) {
    lVar4 = 1;
    piVar5 = param_1 + 2;
    uVar2 = (ulonglong)(param_3 - 1);
    do {
      iVar1 = param_2[lVar4 * 2];
      *piVar5 = piVar5[-2] * 2 - (int)(((longlong)piVar5[-1] * (longlong)iVar1 >> 0xf) + 1 >> 1);
      for (lVar3 = lVar4; 1 < lVar3; lVar3 = lVar3 + -1) {
        param_1[lVar3] =
             param_1[lVar3] +
             (param_1[lVar3 + -2] -
             (int)(((longlong)(int)param_1[lVar3 + -1] * (longlong)iVar1 >> 0xf) + 1 >> 1));
      }
      param_1[1] = param_1[1] - iVar1;
      lVar4 = lVar4 + 1;
      piVar5 = piVar5 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1455ddbc8 FUN_1455ddbc8 body=281 status=ok
// SIG undefined FUN_1455ddbc8(void)

void FUN_1455ddbc8(short param_1,char param_2,int *param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined *puVar7;
  longlong lVar8;
  
  if (param_4 == 8) {
    if (param_5 == 4) {
      puVar7 = &DAT_149dee858;
      lVar8 = 0xb;
    }
    else {
      if (param_5 != 2) {
        FUN_144bca940("assertion failed: nb_subfr == PE_MAX_NB_SUBFR >> 1",
                      "../../../third_party/opus/src/silk/decode_pitch.c",0x36);
      }
      puVar7 = &DAT_149dee934;
      lVar8 = 3;
    }
  }
  else if (param_5 == 4) {
    puVar7 = &DAT_149dee890;
    lVar8 = 0x22;
  }
  else {
    if (param_5 != 2) {
      FUN_144bca940("assertion failed: nb_subfr == PE_MAX_NB_SUBFR >> 1",
                    "../../../third_party/opus/src/silk/decode_pitch.c",0x3f);
    }
    puVar7 = &DAT_149dee940;
    lVar8 = 0xc;
  }
  iVar2 = (short)param_4 * 2;
  iVar1 = (short)param_4 * 0x12;
  if (0 < (int)param_5) {
    pcVar5 = puVar7 + param_2;
    uVar6 = (ulonglong)param_5;
    do {
      iVar3 = (int)*pcVar5 + param_1 + iVar2;
      if (iVar1 < iVar2) {
        iVar4 = iVar2;
        if ((iVar3 <= iVar2) && (iVar4 = iVar3, iVar3 < iVar1)) {
          iVar4 = iVar1;
        }
      }
      else {
        iVar4 = iVar1;
        if ((iVar3 <= iVar1) && (iVar4 = iVar3, iVar3 < iVar2)) {
          iVar4 = iVar2;
        }
      }
      *param_3 = iVar4;
      pcVar5 = pcVar5 + lVar8;
      param_3 = param_3 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1455ddce4 FUN_1455ddce4 body=314 status=ok
// SIG undefined FUN_1455ddce4(void)

void FUN_1455ddce4(longlong param_1,char *param_2,longlong param_3)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  short *psVar7;
  char *pcVar8;
  longlong lVar9;
  short sVar10;
  int iVar11;
  undefined1 auStack_a8 [31];
  byte abStack_89 [17];
  short local_78 [16];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145518bbc(local_58,abStack_89 + 1,param_3,(int)*param_2);
  sVar10 = *(short *)(param_3 + 2);
  iVar4 = 0;
  iVar11 = sVar10 + -1;
  lVar5 = (longlong)iVar11;
  if (-1 < iVar11) {
    sVar1 = *(short *)(param_3 + 4);
    pcVar8 = param_2 + lVar5 + 1;
    do {
      pbVar6 = (byte *)(pcVar8 + (longlong)(abStack_89 + -(longlong)param_2));
      iVar2 = *pcVar8 * 0x400;
      iVar11 = (int)*pcVar8 << 10;
      if (iVar11 < 1) {
        if (iVar11 < 0) {
          iVar2 = iVar2 + 0x66;
        }
      }
      else {
        iVar2 = iVar2 + -0x66;
      }
      pcVar8 = pcVar8 + -1;
      iVar4 = (int)((ulonglong)((longlong)iVar2 * (longlong)sVar1) >> 0x10) +
              ((int)((uint)*pbVar6 * (int)(short)iVar4) >> 8);
      local_78[lVar5] = (short)iVar4;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar11 = 0;
  lVar5 = (longlong)((int)*param_2 * (int)sVar10);
  pbVar6 = (byte *)(*(longlong *)(param_3 + 8) + lVar5);
  psVar7 = (short *)(*(longlong *)(param_3 + 0x10) + lVar5 * 2);
  if (0 < sVar10) {
    lVar5 = (longlong)local_78 - (longlong)psVar7;
    lVar9 = param_1 - (longlong)psVar7;
    do {
      iVar4 = ((int)*(short *)(lVar5 + (longlong)psVar7) << 0xe) / (int)*psVar7 +
              (uint)*pbVar6 * 0x80;
      uVar3 = (undefined2)iVar4;
      if (iVar4 < 0) {
        uVar3 = 0;
      }
      if (0x7fff < iVar4) {
        uVar3 = 0x7fff;
      }
      iVar11 = iVar11 + 1;
      *(undefined2 *)(lVar9 + (longlong)psVar7) = uVar3;
      pbVar6 = pbVar6 + 1;
      sVar10 = *(short *)(param_3 + 2);
      psVar7 = psVar7 + 1;
    } while (iVar11 < sVar10);
  }
  FUN_1456321bc(param_1,*(undefined8 *)(param_3 + 0x40),(int)sVar10);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1455dde38 FUN_1455dde38 body=49 status=ok
// SIG undefined FUN_1455dde38(void)

int FUN_1455dde38(longlong param_1,short *param_2,byte param_3,int param_4)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  lVar4 = (longlong)param_4;
  if (0 < lVar4) {
    param_1 = param_1 - (longlong)param_2;
    do {
      sVar2 = *param_2;
      psVar1 = (short *)(param_1 + (longlong)param_2);
      param_2 = param_2 + 1;
      iVar3 = iVar3 + ((int)*psVar1 * (int)sVar2 >> (param_3 & 0x1f));
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return iVar3;
}



// FUNCTION 1455dde6c FUN_1455dde6c body=323 status=ok
// SIG undefined FUN_1455dde6c(void)

void FUN_1455dde6c(longlong param_1,int *param_2,int *param_3,int *param_4,undefined2 *param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  lVar6 = (longlong)param_6;
  if (0 < lVar6) {
    param_1 = param_1 - (longlong)param_5;
    do {
      lVar8 = (longlong)*(short *)(param_1 + (longlong)param_5);
      iVar7 = *param_4 * 4 + (int)((ulonglong)(*param_2 * lVar8) >> 0x10) * 4;
      lVar5 = (longlong)iVar7;
      iVar4 = (((int)((ulonglong)(-iVar1 & 0x3fff) * lVar5 >> 0x10) >> 0xd) + 1 >> 1) +
              (int)((ulonglong)((short)(-iVar1 >> 0xe) * lVar5) >> 0x10) + param_4[1];
      *param_4 = iVar4;
      *param_4 = (int)((ulonglong)(param_2[1] * lVar8) >> 0x10) + iVar4;
      iVar4 = (((int)((ulonglong)(-iVar2 & 0x3fff) * lVar5 >> 0x10) >> 0xd) + 1 >> 1) +
              (int)((ulonglong)((short)(-iVar2 >> 0xe) * lVar5) >> 0x10);
      param_4[1] = iVar4;
      iVar7 = iVar7 + 0x3fff >> 0xe;
      param_4[1] = (int)((ulonglong)(param_2[2] * lVar8) >> 0x10) + iVar4;
      uVar3 = (undefined2)iVar7;
      if (iVar7 < -0x8000) {
        uVar3 = 0x8000;
      }
      if (0x7fff < iVar7) {
        uVar3 = 0x7fff;
      }
      *param_5 = uVar3;
      param_5 = param_5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1455ddfb0 FUN_1455ddfb0 body=52 status=ok
// SIG undefined FUN_1455ddfb0(void)

void FUN_1455ddfb0(longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = 0;
  lVar2 = (longlong)param_2 + -1;
  fVar3 = param_3;
  fVar4 = param_3;
  if (0 < lVar2) {
    do {
      fVar4 = fVar3 * param_3;
      *(float *)(param_1 + lVar1 * 4) = fVar3 * *(float *)(param_1 + lVar1 * 4);
      lVar1 = lVar1 + 1;
      fVar3 = fVar4;
    } while (lVar1 < lVar2);
  }
  *(float *)(param_1 + lVar2 * 4) = fVar4 * *(float *)(param_1 + lVar2 * 4);
  return;
}



// FUNCTION 1455ddfe4 FUN_1455ddfe4 body=263 status=ok
// SIG undefined FUN_1455ddfe4(void)

void FUN_1455ddfe4(longlong param_1,longlong param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  double *pdVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  double adStack_1a0 [49];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar9 = (ulonglong)(int)param_3;
  if (0x18 < param_3) {
    FUN_144bca940("assertion failed: order >= 0 && order <= SILK_MAX_ORDER_LPC",
                  "../../../third_party/opus/src/silk/float/schur_FLP.c",0x2c);
  }
  pauVar5 = (undefined1 (*) [16])local_1a8;
  lVar4 = 0;
  do {
    lVar6 = lVar4 * 4;
    lVar4 = lVar4 + 1;
    dVar14 = (double)*(float *)(param_2 + lVar6);
    auVar3._8_4_ = SUB84(dVar14,0);
    auVar3._0_8_ = dVar14;
    auVar3._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *pauVar5 = auVar3;
    pauVar5 = pauVar5 + 1;
  } while (lVar4 <= (longlong)uVar9);
  if (0 < (int)param_3) {
    lVar4 = 0;
    lVar6 = 8;
    uVar10 = uVar9;
    do {
      uVar12 = SUB84(adStack_1a0[0],0);
      uVar13 = (undefined4)((ulonglong)adStack_1a0[0] >> 0x20);
      iVar8 = (int)uVar10;
      lVar11 = (longlong)iVar8;
      if (adStack_1a0[0] <= 9.999999717180685e-10) {
        uVar12 = 0xe0000000;
        uVar13 = 0x3e112e0b;
      }
      dVar14 = -(*(double *)((longlong)adStack_1a0 + lVar6) / (double)CONCAT44(uVar13,uVar12));
      *(float *)(param_1 + lVar4 * 4) = (float)dVar14;
      if (0 < iVar8) {
        pdVar7 = adStack_1a0;
        do {
          dVar1 = *pdVar7;
          dVar2 = *(double *)(lVar6 + (longlong)pdVar7);
          *(double *)(lVar6 + (longlong)pdVar7) = dVar1 * dVar14 + dVar2;
          *pdVar7 = dVar2 * dVar14 + dVar1;
          pdVar7 = pdVar7 + 2;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar10 = (ulonglong)(iVar8 - 1);
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar4 < (longlong)uVar9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)adStack_1a0[0]);
}



// FUNCTION 1455de100 FUN_1455de100 body=135 status=ok
// SIG undefined FUN_1455de100(void)

void FUN_1455de100(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = (longlong)param_3;
  if (0 < param_3) {
    iVar6 = 1;
    lVar4 = param_1 - (longlong)param_2;
    do {
      fVar1 = *param_2;
      lVar8 = 0;
      if (0 < (longlong)iVar6 >> 1) {
        pfVar5 = (float *)(lVar4 + -4 + (longlong)param_2);
        do {
          fVar2 = *pfVar5;
          fVar3 = *(float *)(param_1 + lVar8 * 4);
          *(float *)(param_1 + lVar8 * 4) = fVar2 * fVar1 + fVar3;
          lVar8 = lVar8 + 1;
          *pfVar5 = fVar3 * fVar1 + fVar2;
          pfVar5 = pfVar5 + -1;
        } while (lVar8 < (longlong)iVar6 >> 1);
      }
      iVar6 = iVar6 + 1;
      *(float *)(lVar4 + (longlong)param_2) = -fVar1;
      param_2 = param_2 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 1455de188 FUN_1455de188 body=122 status=ok
// SIG undefined FUN_1455de188(void)

void FUN_1455de188(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  
  iVar2 = 0;
  iVar1 = param_3;
  if (param_4 <= param_3) {
    iVar1 = param_4;
  }
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      dVar4 = (double)FUN_145632464(param_2,param_2 + (longlong)iVar2 * 4,param_3);
      iVar2 = iVar2 + 1;
      param_3 = param_3 + -1;
      *(float *)(param_1 + lVar3 * 4) = (float)dVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 1455de204 FUN_1455de204 body=157 status=ok
// SIG undefined FUN_1455de204(void)

double FUN_1455de204(longlong param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  
  iVar7 = 0;
  dVar9 = 0.0;
  if (0 < param_2 + -3) {
    pfVar6 = (float *)(param_1 + 8);
    uVar5 = (param_2 - 4U >> 2) + 1;
    uVar8 = (ulonglong)uVar5;
    iVar7 = uVar5 * 4;
    do {
      pfVar1 = pfVar6 + -1;
      pfVar2 = pfVar6 + -2;
      fVar4 = *pfVar6;
      pfVar3 = pfVar6 + 1;
      pfVar6 = pfVar6 + 4;
      dVar9 = dVar9 + (double)*pfVar2 * (double)*pfVar2 + (double)*pfVar1 * (double)*pfVar1 +
                      (double)fVar4 * (double)fVar4 + (double)*pfVar3 * (double)*pfVar3;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (iVar7 < param_2) {
    pfVar6 = (float *)(param_1 + (longlong)iVar7 * 4);
    uVar8 = (ulonglong)(uint)(param_2 - iVar7);
    do {
      fVar4 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      dVar9 = dVar9 + (double)fVar4 * (double)fVar4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return dVar9;
}



// FUNCTION 1455de2a4 FUN_1455de2a4 body=388 status=ok
// SIG undefined FUN_1455de2a4(void)

void FUN_1455de2a4(longlong param_1,longlong param_2,float param_3,int param_4,int param_5)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1f8 [32];
  double local_1d8 [26];
  double local_108 [26];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar4 = (ulonglong)param_5;
  memset(local_1d8,0,200);
  memset(local_108,0,200);
  if ((uVar4 & 1) != 0) {
    FUN_144bca940("assertion failed: ( order & 1 ) == 0",
                  "../../../third_party/opus/src/silk/float/warped_autocorrelation_FLP.c",0x31);
  }
  lVar2 = 0;
  lVar5 = lVar2;
  if (0 < param_4) {
    do {
      dVar8 = (double)*(float *)(param_2 + lVar5 * 4);
      if (0 < param_5) {
        lVar3 = (uVar4 - 1 >> 1) + 1;
        lVar6 = lVar2;
        do {
          dVar7 = (*(double *)((longlong)local_1d8 + lVar6 + 8) - dVar8) * (double)param_3 +
                  *(double *)((longlong)local_1d8 + lVar6);
          *(double *)((longlong)local_1d8 + lVar6) = dVar8;
          dVar1 = *(double *)((longlong)local_1d8 + lVar6 + 0x10);
          *(double *)((longlong)local_108 + lVar6) =
               local_1d8[0] * dVar8 + *(double *)((longlong)local_108 + lVar6);
          dVar8 = (dVar1 - dVar7) * (double)param_3 + *(double *)((longlong)local_1d8 + lVar6 + 8);
          *(double *)((longlong)local_1d8 + lVar6 + 8) = dVar7;
          *(double *)((longlong)local_108 + lVar6 + 8) =
               local_1d8[0] * dVar7 + *(double *)((longlong)local_108 + lVar6 + 8);
          lVar6 = lVar6 + 0x10;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      local_1d8[uVar4] = dVar8;
      lVar5 = lVar5 + 1;
      local_108[uVar4] = local_1d8[0] * dVar8 + local_108[uVar4];
    } while (lVar5 < param_4);
  }
  if (0 < param_5 + 1) {
    do {
      *(float *)(param_1 + lVar2 * 4) = (float)local_108[lVar2];
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_5 + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 1455de448 FUN_1455de448 body=336 status=ok
// SIG undefined FUN_1455de448(void)

void FUN_1455de448(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (1 < param_3 - 1U) {
    FUN_144bca940("assertion failed: win_type == 1 || win_type == 2",
                  "../../../third_party/opus/src/silk/float/apply_sine_window_FLP.c",0x30);
  }
  if (((longlong)param_4 & 3U) != 0) {
    FUN_144bca940("assertion failed: ( length & 3 ) == 0",
                  "../../../third_party/opus/src/silk/float/apply_sine_window_FLP.c",0x33);
  }
  fVar3 = 3.1415927 / (float)(param_4 + 1);
  fVar4 = 2.0 - fVar3 * fVar3;
  if (param_3 < 2) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = 1.0;
    fVar3 = fVar4 * 0.5;
  }
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    pfVar2 = (float *)(param_1 + 4);
    lVar1 = ((longlong)param_4 - 1U >> 2) + 1;
    do {
      pfVar2[-1] = *(float *)(param_2 + -4 + (longlong)pfVar2) * 0.5 * (fVar3 + fVar5);
      *pfVar2 = fVar3 * *(float *)(param_2 + (longlong)pfVar2);
      fVar5 = fVar3 * fVar4 - fVar5;
      pfVar2[1] = *(float *)(param_2 + 4 + (longlong)pfVar2) * 0.5 * (fVar3 + fVar5);
      fVar3 = fVar5 * fVar4 - fVar3;
      pfVar2[2] = fVar5 * *(float *)(param_2 + 8 + (longlong)pfVar2);
      pfVar2 = pfVar2 + 4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1455de598 FUN_1455de598 body=4075 status=ok
// SIG undefined FUN_1455de598(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455de598(longlong param_1,int *param_2,short *param_3,undefined1 *param_4,float *param_5,
                  int param_6,float param_7,float param_8,int param_9,int param_10,uint param_11,
                  int param_12)

{
  short *psVar1;
  float *pfVar2;
  char cVar3;
  float fVar4;
  undefined2 uVar5;
  short sVar6;
  short sVar7;
  float fVar8;
  uint uVar9;
  float *pfVar10;
  undefined *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  float *pfVar17;
  short *psVar18;
  char *pcVar19;
  ulonglong uVar20;
  int iVar21;
  float *pfVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 *puVar25;
  int iVar26;
  ulonglong uVar27;
  int *piVar28;
  undefined2 *puVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int iVar32;
  uint uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_2d58 [32];
  uint local_2d38;
  int local_2d30;
  int local_2d28;
  float local_2d18;
  uint local_2d10;
  int local_2d0c;
  int local_2d08;
  undefined *local_2d00;
  float local_2cf8;
  int local_2cf4;
  int *local_2cf0;
  ulonglong local_2ce8;
  undefined1 *local_2ce0;
  float *local_2cd8;
  longlong local_2cd0;
  int local_2cc8;
  longlong local_2cc0;
  longlong local_2cb8;
  short *local_2cb0;
  undefined1 *local_2ca8;
  ulonglong local_2ca0;
  longlong local_2c98;
  longlong local_2c90;
  longlong local_2c88;
  undefined8 local_2c80;
  undefined8 local_2c78;
  undefined8 local_2c70;
  float local_2c68 [24];
  float local_2c08 [12];
  undefined1 local_2bd8 [252];
  float local_2adc [5];
  float local_2ac8 [80];
  float local_2988 [80];
  float local_2848 [5];
  undefined2 auStack_2832 [5];
  short local_2828 [127];
  short local_272a [1217];
  float local_1da8 [8];
  float local_1d88 [588];
  float afStack_1458 [160];
  undefined1 local_11d8 [640];
  float local_f58 [680];
  short local_4b8 [320];
  short local_238 [160];
  ulonglong local_f8;
  undefined8 uStack_48;
  
  uStack_48 = 0x1455de5b7;
  local_f8 = DAT_14c707940 ^ (ulonglong)auStack_2d58;
  lVar23 = (longlong)(int)param_11;
  local_2cd8 = param_5;
  local_2d0c = param_9;
  local_2d08 = param_10;
  local_2cf0 = param_2;
  local_2cd0 = param_1;
  local_2cb0 = param_3;
  local_2ca8 = param_4;
  if (((param_9 - 8U & 0xfffffff3) != 0) || (param_9 == 0x14)) {
    FUN_144bca940("assertion failed: Fs_kHz == 8 || Fs_kHz == 12 || Fs_kHz == 16",
                  "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x70);
  }
  if (param_10 < 0) {
    FUN_144bca940("assertion failed: complexity >= SILK_PE_MIN_COMPLEX",
                  "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x73);
  }
  if (2 < param_10) {
    FUN_144bca940("assertion failed: complexity <= SILK_PE_MAX_COMPLEX",
                  "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x74);
  }
  iVar13 = param_11 + 4;
  iVar32 = iVar13 * 0x14;
  local_2cf4 = param_9 * 2;
  iVar21 = iVar13 * 0x28;
  iVar13 = iVar13 * param_9 * 5;
  local_2cc8 = param_9 * 0x12;
  local_2cf8 = (float)(local_2cc8 + -1);
  local_2ca0 = 0xc;
  if (param_9 == 0x10) {
    iVar26 = iVar13 + -1;
    if (-1 < iVar26) {
      pfVar10 = (float *)(param_1 + (longlong)iVar26 * 4);
      puVar29 = (undefined2 *)((longlong)local_2848 + (longlong)iVar26 * 2);
      do {
        local_2d18 = *pfVar10;
        if ((int)ROUND(local_2d18) < 0x8000) {
          uVar5 = 0x8000;
          if (-0x8001 < (int)ROUND(local_2d18)) {
            uVar5 = (undefined2)(int)ROUND(local_2d18);
          }
        }
        else {
          uVar5 = 0x7fff;
        }
        *puVar29 = uVar5;
        pfVar10 = pfVar10 + -1;
        puVar29 = puVar29 + -1;
        iVar26 = iVar26 + -1;
      } while (-1 < iVar26);
    }
    local_2c80 = 0;
    FUN_145632544(&local_2c80,local_4b8,local_2848,iVar13);
    lVar16 = (longlong)(iVar21 + -1);
    if (-1 < iVar21 + -1) {
      do {
        afStack_1458[lVar16] = (float)(int)local_4b8[lVar16];
        lVar16 = lVar16 + -1;
      } while (-1 < lVar16);
    }
  }
  else if (param_9 == 0xc) {
    iVar26 = iVar13 + -1;
    if (-1 < iVar26) {
      pfVar10 = (float *)(param_1 + (longlong)iVar26 * 4);
      puVar29 = (undefined2 *)((longlong)local_2848 + (longlong)iVar26 * 2);
      do {
        local_2d18 = *pfVar10;
        if ((int)ROUND(local_2d18) < 0x8000) {
          uVar5 = 0x8000;
          if (-0x8001 < (int)ROUND(local_2d18)) {
            uVar5 = (undefined2)(int)ROUND(local_2d18);
          }
        }
        else {
          uVar5 = 0x7fff;
        }
        *puVar29 = uVar5;
        pfVar10 = pfVar10 + -1;
        puVar29 = puVar29 + -1;
        iVar26 = iVar26 + -1;
      } while (-1 < iVar26);
    }
    local_2c80 = 0;
    local_2c78 = 0;
    local_2c70 = 0;
    FUN_145632624(&local_2c80,local_4b8,local_2848,iVar13);
    lVar16 = (longlong)(iVar21 + -1);
    if (-1 < iVar21 + -1) {
      do {
        afStack_1458[lVar16] = (float)(int)local_4b8[lVar16];
        lVar16 = lVar16 + -1;
      } while (-1 < lVar16);
    }
  }
  else {
    if (param_9 != 8) {
      FUN_144bca940("assertion failed: Fs_kHz == 8",
                    "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x97);
    }
    iVar13 = iVar21 + -1;
    if (-1 < iVar13) {
      psVar18 = local_4b8 + iVar13;
      pfVar10 = (float *)(param_1 + (longlong)iVar13 * 4);
      do {
        local_2d18 = *pfVar10;
        if ((int)ROUND(local_2d18) < 0x8000) {
          sVar7 = -0x8000;
          if (-0x8001 < (int)ROUND(local_2d18)) {
            sVar7 = (short)(int)ROUND(local_2d18);
          }
        }
        else {
          sVar7 = 0x7fff;
        }
        *psVar18 = sVar7;
        pfVar10 = pfVar10 + -1;
        psVar18 = psVar18 + -1;
        iVar13 = iVar13 + -1;
        param_2 = local_2cf0;
      } while (-1 < iVar13);
    }
  }
  local_2c80 = 0;
  FUN_145632544(&local_2c80,local_238,local_4b8,iVar21);
  iVar13 = iVar32 + -1;
  for (lVar16 = (longlong)iVar32 + -1; -1 < lVar16; lVar16 = lVar16 + -1) {
    local_2ac8[lVar16] = (float)(int)local_238[lVar16];
  }
  if (0 < iVar13) {
    pfVar10 = local_2ac8 + (longlong)iVar32 + -1;
    fVar8 = *pfVar10;
    do {
      pfVar22 = pfVar10 + -1;
      iVar13 = iVar13 + -1;
      fVar36 = (float)(int)fVar8 + *pfVar22;
      fVar8 = -32768.0;
      if (-32768.0 <= fVar36) {
        fVar8 = fVar36;
      }
      fVar36 = 32767.0;
      if (fVar8 <= 32767.0) {
        fVar36 = fVar8;
      }
      *pfVar10 = (float)(int)(short)(int)fVar36;
      pfVar10 = pfVar10 + -1;
      fVar8 = *pfVar22;
    } while (0 < iVar13);
  }
  local_2cb8 = lVar23;
  memset(local_1da8,0,lVar23 * 0x254);
  if (0 < (int)param_11 >> 1) {
    uVar31 = (ulonglong)(uint)((int)param_11 >> 1);
    pfVar10 = local_2988;
    do {
      if (pfVar10 < local_2ac8) {
        FUN_144bca940("assertion failed: target_ptr >= frame_4kHz",
                      "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xac);
      }
      if (local_2ac8 + iVar32 < pfVar10 + 0x28) {
        FUN_144bca940("assertion failed: target_ptr + sf_length_8kHz <= frame_4kHz + frame_length_4kHz"
                      ,"../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xad);
      }
      pfVar22 = pfVar10 + -8;
      if (pfVar22 < local_2ac8) {
        FUN_144bca940("assertion failed: basis_ptr >= frame_4kHz",
                      "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xb2);
      }
      if (local_2ac8 + iVar32 < pfVar10 + 0x20) {
        FUN_144bca940("assertion failed: basis_ptr + sf_length_8kHz <= frame_4kHz + frame_length_4kHz"
                      ,"../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xb3);
      }
      local_2d30 = param_12;
      local_2d38 = 0x41;
      FUN_1452e93ac(pfVar10,pfVar10 + -0x48,local_2bd8,0x28);
      dVar39 = (double)local_2adc[1];
      dVar37 = (double)FUN_1455de204(pfVar22,0x28);
      dVar38 = (double)FUN_1455de204(pfVar10,0x28);
      lVar23 = 9;
      pfVar17 = local_2adc;
      dVar37 = dVar37 + dVar38 + 160000.0;
      local_1d88[0] = local_1d88[0] + (float)((dVar39 + dVar39) / dVar37);
      do {
        pfVar2 = pfVar22 + 0x27;
        pfVar22 = pfVar22 + -1;
        dVar37 = dVar37 + ((double)*pfVar22 * (double)*pfVar22 - (double)*pfVar2 * (double)*pfVar2);
        fVar8 = *pfVar17;
        pfVar17 = pfVar17 + -1;
        local_1da8[lVar23] = (float)(((double)fVar8 + (double)fVar8) / dVar37) + local_1da8[lVar23];
        lVar23 = lVar23 + 1;
      } while (lVar23 < 0x49);
      uVar31 = uVar31 - 1;
      pfVar10 = pfVar10 + 0x28;
      lVar23 = local_2cb8;
      param_2 = local_2cf0;
      param_9 = local_2d0c;
    } while (uVar31 != 0);
  }
  pfVar10 = local_1d88 + 0x40;
  iVar13 = 0x48;
  do {
    iVar21 = iVar13 + -1;
    *pfVar10 = *pfVar10 - (float)iVar13 * *pfVar10 * 0.00024414062;
    pfVar10 = pfVar10 + -1;
    iVar13 = iVar21;
  } while (7 < iVar21);
  uVar33 = local_2d08 * 2 + 4;
  if (0x18 < (int)(uVar33 * 3)) {
    FUN_144bca940("assertion failed: 3 * length_d_srch <= PE_D_SRCH_LENGTH",
                  "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xda);
  }
  FUN_145632810(local_1d88,local_2c68,0x41,uVar33);
  if (local_1d88[0] < 0.2) {
    memset(param_2,0,lVar23 << 2);
    *local_2cd8 = 0.0;
    *local_2cb0 = 0;
    *local_2ca8 = 0;
    goto LAB_1455dec99;
  }
  param_7 = local_1d88[0] * param_7;
  uVar15 = 0;
  if ((int)uVar33 < 1) {
LAB_1455ded3b:
    FUN_144bca940("assertion failed: length_d_srch > 0",
                  "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xf1);
  }
  else {
    do {
      uVar9 = uVar15;
      if (local_1d88[(int)uVar15] <= param_7) break;
      uVar14 = uVar15 + 1;
      local_2c68[(int)uVar15] = (float)((int)local_2c68[(int)uVar15] * 2 + 0x10);
      uVar9 = uVar33;
      uVar15 = uVar14;
    } while ((int)uVar14 < (int)uVar33);
    uVar33 = uVar9;
    if ((int)uVar33 < 1) goto LAB_1455ded3b;
  }
  iVar21 = 0;
  local_2ce8 = 0xb;
  iVar13 = 0xb;
  do {
    lVar23 = (longlong)iVar13;
    if (0x129 < (ulonglong)(lVar23 * 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    iVar13 = iVar13 + 1;
    *(undefined2 *)((longlong)local_2848 + lVar23 * 2) = 0;
  } while (iVar13 < 0x94);
  if (0 < (int)uVar33) {
    pfVar10 = local_2c68;
    uVar31 = (ulonglong)uVar33;
    do {
      fVar8 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      *(undefined2 *)((longlong)local_2848 + (longlong)(int)fVar8 * 2) = 1;
      uVar31 = uVar31 - 1;
    } while (uVar31 != 0);
  }
  lVar16 = 0x83;
  lVar23 = 0x83;
  psVar18 = local_272a + 3;
  sVar7 = local_272a[3];
  do {
    psVar1 = psVar18 + -1;
    sVar6 = psVar18[-2] + sVar7;
    sVar7 = *psVar1;
    *psVar18 = sVar6 + *psVar1;
    lVar23 = lVar23 + -1;
    psVar18 = psVar1;
  } while (lVar23 != 0);
  pfVar10 = local_2c68;
  psVar18 = local_2828;
  iVar13 = 0x10;
  fVar8 = 2.24208e-44;
  uVar33 = iVar21;
  do {
    psVar18 = psVar18 + 1;
    if (0 < *psVar18) {
      uVar33 = uVar33 + 1;
      *pfVar10 = fVar8;
      pfVar10 = pfVar10 + 1;
    }
    fVar8 = (float)((int)fVar8 + 1);
  } while ((int)fVar8 < 0x90);
  psVar18 = local_272a + 1;
  do {
    psVar1 = psVar18 + -1;
    sVar7 = psVar18[1] + local_272a[1];
    local_272a[1] = *psVar1;
    psVar18[2] = psVar18[2] + sVar7 + *psVar1;
    lVar16 = lVar16 + -1;
    psVar18 = psVar1;
  } while (lVar16 != 0);
  pfVar10 = local_2848;
  psVar18 = local_2828;
  do {
    if (0 < *psVar18) {
      iVar21 = iVar21 + 1;
      *(short *)pfVar10 = (short)iVar13 + -2;
      pfVar10 = (float *)((longlong)pfVar10 + 2);
    }
    iVar13 = iVar13 + 1;
    psVar18 = psVar18 + 1;
  } while (iVar13 < 0x93);
  local_2d10 = uVar33;
  memset(local_1da8,0,0x950);
  if (param_9 == 8) {
    puVar25 = (undefined1 *)(local_2cd0 + 0x280);
  }
  else {
    puVar25 = local_11d8;
  }
  lVar16 = 0;
  lVar23 = local_2cb8;
  if (0 < local_2cb8) {
    do {
      local_2d00 = (undefined *)lVar23;
      dVar39 = (double)FUN_1455de204(puVar25,0x28);
      lVar24 = 0;
      puVar11 = (undefined *)lVar23;
      if (0 < (longlong)iVar21) {
        do {
          lVar23 = (longlong)*(short *)((longlong)local_2848 + lVar24 * 2);
          dVar37 = (double)FUN_145632464(puVar25 + lVar23 * -4,puVar25,0x28);
          if (dVar37 <= 0.0) {
            fVar8 = 0.0;
          }
          else {
            dVar38 = (double)FUN_1455de204(puVar25 + lVar23 * -4,0x28);
            fVar8 = (float)((dVar37 * 2.0) / (dVar38 + dVar39 + 1.0));
          }
          lVar24 = lVar24 + 1;
          local_1da8[lVar23 + lVar16] = fVar8;
          puVar11 = local_2d00;
        } while (lVar24 < iVar21);
      }
      puVar25 = puVar25 + 0xa0;
      lVar16 = lVar16 + 0x95;
      lVar23 = (longlong)puVar11 + -1;
    } while ((longlong)puVar11 + -1 != 0);
    local_2d00 = (undefined *)0x0;
    param_9 = local_2d0c;
    uVar33 = local_2d10;
  }
  fVar46 = -1000.0;
  fVar8 = -NAN;
  fVar36 = 0.0;
  local_2d10 = 0;
  fVar45 = -1000.0;
  local_2d18 = -NAN;
  if (param_6 < 1) {
    fVar44 = 0.0;
  }
  else {
    if (param_9 == 0xc) {
      param_6 = (param_6 * 2) / 3;
    }
    else if (param_9 == 0x10) {
      param_6 = param_6 >> 1;
    }
    dVar39 = log10((double)param_6);
    fVar44 = (float)(dVar39 * 3.32192809488736);
  }
  if (param_11 == 4) {
    puVar11 = &DAT_149dee858;
    local_2d00 = &DAT_149dee858;
    if ((param_9 == 8) && (0 < local_2d08)) {
      lVar23 = 0xb;
    }
    else {
      lVar23 = 3;
    }
    local_2c98 = 0xb;
  }
  else {
    lVar23 = 3;
    puVar11 = &DAT_149dee934;
    local_2ce8 = CONCAT44(local_2ce8._4_4_,3);
    local_2d00 = &DAT_149dee934;
    local_2c98 = 3;
  }
  lVar16 = (longlong)(int)uVar33;
  fVar43 = (float)(int)param_11;
  local_2cc0 = lVar23;
  local_2c90 = lVar16;
  local_2c88 = lVar23;
  if (0 < lVar16) {
    local_2ce0 = (undefined1 *)0x0;
    do {
      puVar25 = local_2ce0;
      iVar13 = 0;
      fVar4 = local_2c68[(longlong)local_2ce0];
      if (local_2c88 != 0) {
        pfVar10 = local_2c08;
        lVar24 = local_2c88;
        do {
          lVar23 = 0;
          *pfVar10 = 0.0;
          fVar8 = 0.0;
          if (0 < (int)param_11) {
            pcVar19 = local_2d00 + iVar13;
            uVar31 = (ulonglong)param_11;
            do {
              cVar3 = *pcVar19;
              pcVar19 = pcVar19 + (local_2ce8 & 0xffffffff);
              lVar16 = ((int)cVar3 + (int)fVar4) + lVar23;
              lVar23 = lVar23 + 0x95;
              fVar8 = fVar8 + local_1da8[lVar16];
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
            *pfVar10 = fVar8;
          }
          iVar13 = iVar13 + 1;
          pfVar10 = pfVar10 + 1;
          lVar24 = lVar24 + -1;
          lVar23 = local_2cc0;
          lVar16 = local_2c90;
          fVar8 = local_2d18;
        } while (lVar24 != 0);
      }
      uVar15 = 0;
      fVar42 = -1000.0;
      uVar33 = uVar15;
      do {
        uVar9 = uVar15;
        fVar41 = local_2c08[(int)uVar15];
        if (local_2c08[(int)uVar15] <= fVar42) {
          uVar9 = uVar33;
          fVar41 = fVar42;
        }
        fVar42 = fVar41;
        uVar15 = uVar15 + 1;
        uVar33 = uVar9;
      } while ((int)uVar15 < (int)lVar23);
      dVar39 = log10((double)(int)fVar4);
      fVar41 = fVar42 - fVar43 * 0.2 * (float)(dVar39 * 3.32192809488736);
      if (0 < param_6) {
        fVar40 = (float)(dVar39 * 3.32192809488736) - fVar44;
        fVar40 = fVar40 * fVar40;
        fVar41 = fVar41 - (fVar43 * 0.2 * *local_2cd8 * fVar40) / (fVar40 + 0.5);
      }
      if ((fVar45 < fVar41) && (fVar43 * param_8 < fVar42)) {
        fVar36 = fVar42;
        fVar45 = fVar41;
        fVar8 = fVar4;
        local_2d18 = fVar4;
        local_2d10 = uVar9;
      }
      local_2ce0 = puVar25 + 1;
      puVar11 = local_2d00;
    } while ((longlong)local_2ce0 < lVar16);
  }
  iVar21 = local_2d08;
  iVar13 = local_2d0c;
  uVar31 = 0;
  if (fVar8 == -NAN) {
    local_2cf0[0] = 0;
    local_2cf0[1] = 0;
    local_2cf0[2] = 0;
    local_2cf0[3] = 0;
    *local_2cd8 = 0.0;
    *local_2cb0 = 0;
    *local_2ca8 = 0;
  }
  else {
    *local_2cd8 = fVar36 / fVar43;
    if (local_2d0c < 9) {
      if (0 < (int)param_11) {
        pcVar19 = puVar11 + (int)local_2d10;
        uVar31 = (ulonglong)param_11;
        piVar28 = local_2cf0;
        do {
          iVar21 = (int)*pcVar19 + (int)fVar8;
          iVar13 = 0x90;
          if ((iVar21 < 0x91) && (iVar13 = iVar21, iVar21 < 0x10)) {
            iVar13 = 0x10;
          }
          *piVar28 = iVar13;
          pcVar19 = pcVar19 + local_2c98;
          piVar28 = piVar28 + 1;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
      uVar31 = (ulonglong)local_2d10;
      sVar7 = SUB42(fVar8,0) + -0x10;
    }
    else {
      if (local_2d0c == 0xc) {
        uVar33 = SUB42(fVar8,0) * 3;
        fVar8 = (float)(((int)uVar33 >> 1) + (uVar33 & 1));
      }
      else {
        fVar8 = (float)((int)fVar8 * 2);
      }
      fVar36 = (float)(local_2d0c * 2);
      lVar23 = (longlong)local_2d08;
      fVar45 = fVar8;
      if ((int)fVar8 < (int)local_2cf8) {
        fVar45 = local_2cf8;
      }
      if ((int)fVar36 < (int)fVar8) {
        fVar45 = fVar36;
      }
      fVar44 = fVar8;
      if ((int)fVar8 < (int)fVar36) {
        fVar44 = fVar36;
      }
      if ((int)local_2cf8 < (int)fVar8) {
        fVar44 = local_2cf8;
      }
      if ((int)fVar36 - (int)local_2cf8 != 0 && (int)local_2cf8 <= (int)fVar36) {
        fVar44 = fVar45;
      }
      if ((int)fVar36 < (int)fVar44 + -2) {
        fVar36 = (float)((int)fVar44 + -2);
      }
      fVar8 = local_2cf8;
      if ((int)fVar44 + 2 < (int)local_2cf8) {
        fVar8 = (float)((int)fVar44 + 2);
      }
      local_2d28 = param_12;
      local_2d30 = local_2d08;
      local_2d38 = param_11;
      local_2d18 = fVar8;
      FUN_1455df5d8(local_2848,local_2cd0,fVar36,local_2d0c * 5);
      local_2d30 = iVar21;
      local_2d38 = param_11;
      FUN_1455df7fc(local_f58,local_2cd0,fVar36,iVar13 * 5);
      fVar45 = (float)(int)fVar44;
      if (param_11 == 4) {
        uVar34 = 0x22;
        local_2ca0 = (ulonglong)(uint)(int)(char)(&DAT_149dee930)[lVar23];
        puVar25 = &DAT_149dee890;
      }
      else {
        puVar25 = &DAT_149dee940;
        uVar34 = 0xc;
      }
      local_2ce8 = uVar34;
      local_2ce0 = puVar25;
      dVar39 = (double)FUN_1455de204(local_2cd0 + (longlong)(iVar13 * 0x14) * 4,
                                     iVar13 * 5 * param_11);
      if ((int)fVar36 <= (int)fVar8) {
        uVar35 = 0;
        uVar30 = uVar35;
        do {
          uVar34 = uVar35;
          uVar20 = uVar35;
          uVar27 = uVar30;
          if (0 < (longlong)(int)local_2ca0) {
            do {
              dVar38 = 0.0;
              uVar12 = uVar27;
              lVar23 = local_2cb8;
              dVar37 = dVar39 + 1.0;
              if (local_2cb8 < 1) {
LAB_1455df48a:
                fVar8 = 0.0;
              }
              else {
                do {
                  dVar38 = dVar38 + (double)*(float *)((longlong)local_2848 + uVar12);
                  dVar37 = dVar37 + (double)*(float *)((longlong)local_f58 + uVar12);
                  lVar23 = lVar23 + -1;
                  uVar12 = uVar12 + 0x2a8;
                } while (lVar23 != 0);
                if (dVar38 <= 0.0) goto LAB_1455df48a;
                fVar8 = (1.0 - (float)(int)uVar20 * (0.05 / fVar45)) *
                        (float)((dVar38 + dVar38) / dVar37);
              }
              if ((fVar46 < fVar8) &&
                 ((int)(char)(&DAT_149dee890)[uVar34] + (int)fVar36 <= (int)local_2cf8)) {
                uVar31 = uVar20;
                fVar46 = fVar8;
                fVar44 = fVar36;
              }
              uVar34 = uVar34 + 1;
              uVar20 = (ulonglong)((int)uVar20 + 1);
              uVar27 = uVar27 + 0x14;
              fVar8 = local_2d18;
            } while ((longlong)uVar34 < (longlong)(int)local_2ca0);
          }
          uVar30 = uVar30 + 4;
          fVar36 = (float)((int)fVar36 + 1);
          puVar25 = local_2ce0;
          uVar34 = local_2ce8;
        } while ((int)fVar36 <= (int)fVar8);
      }
      if (0 < (int)param_11) {
        uVar30 = (ulonglong)param_11;
        pcVar19 = puVar25 + (int)uVar31;
        piVar28 = local_2cf0;
        do {
          iVar13 = (int)*pcVar19 + (int)fVar44;
          if (local_2cc8 < local_2cf4) {
            iVar21 = local_2cf4;
            if ((iVar13 <= local_2cf4) && (iVar21 = iVar13, iVar13 < local_2cc8)) {
              iVar21 = local_2cc8;
            }
          }
          else {
            iVar21 = local_2cc8;
            if ((iVar13 <= local_2cc8) && (iVar21 = iVar13, iVar13 < local_2cf4)) {
              iVar21 = local_2cf4;
            }
          }
          *piVar28 = iVar21;
          pcVar19 = pcVar19 + uVar34;
          piVar28 = piVar28 + 1;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
      sVar7 = SUB42(fVar44,0) - (short)local_2cf4;
    }
    *local_2cb0 = sVar7;
    *local_2ca8 = (char)uVar31;
    if (*local_2cb0 < 0) {
      FUN_144bca940("assertion failed: *lagIndex >= 0",
                    "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x1da);
    }
  }
LAB_1455dec99:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f8 ^ (ulonglong)auStack_2d58);
}



// FUNCTION 1455df5d8 FUN_1455df5d8 body=525 status=ok
// SIG undefined FUN_1455df5d8(void)

void FUN_1455df5d8(undefined4 *param_1,longlong param_2,int param_3,int param_4,uint param_5,
                  int param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined4 auStack_514 [231];
  undefined1 auStack_178 [32];
  int local_158;
  undefined4 local_150;
  int local_148;
  undefined1 *local_140;
  ulonglong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined4 local_118 [24];
  undefined4 local_b8 [24];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_148 = param_4;
  if (param_6 < 0) {
    FUN_144bca940("assertion failed: complexity >= SILK_PE_MIN_COMPLEX",
                  "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x1fd);
  }
  if (2 < param_6) {
    FUN_144bca940("assertion failed: complexity <= SILK_PE_MAX_COMPLEX",
                  "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x1fe);
  }
  if (param_5 == 4) {
    local_140 = &DAT_149dee890;
    iVar12 = 0x22;
    iVar8 = (int)(char)(&DAT_149dee930)[param_6];
    pcVar10 = &DAT_149dee918 + (longlong)param_6 * 8;
  }
  else {
    if (param_5 != 2) {
      FUN_144bca940("assertion failed: nb_subfr == PE_MAX_NB_SUBFR >> 1",
                    "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x206);
    }
    iVar8 = 0xc;
    local_140 = &DAT_149dee940;
    pcVar10 = &DAT_149dee958;
    iVar12 = 0xc;
  }
  local_130 = (longlong)iVar8;
  param_2 = param_2 + (longlong)(param_4 << 2) * 4;
  if (0 < (int)param_5) {
    lVar13 = (longlong)param_4 << 2;
    iVar8 = 0;
    local_138 = (ulonglong)param_5;
    local_128 = lVar13;
    local_120 = (longlong)param_3;
    do {
      lVar6 = (longlong)pcVar10[1];
      cVar1 = *pcVar10;
      local_158 = ((int)pcVar10[1] - (int)cVar1) + 1;
      local_150 = param_7;
      FUN_1452e93ac(param_2,param_2 + (lVar6 + local_120) * -4,local_b8,local_148);
      if (cVar1 <= lVar6) {
        lVar6 = lVar6 - cVar1;
        puVar7 = local_118;
        puVar9 = local_b8 + lVar6;
        lVar6 = lVar6 + 1;
        do {
          uVar2 = *puVar9;
          puVar9 = puVar9 + -1;
          *puVar7 = uVar2;
          puVar7 = puVar7 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      cVar1 = *pcVar10;
      puVar9 = param_1;
      lVar6 = local_130;
      iVar11 = iVar8;
      if (0 < local_130) {
        do {
          lVar13 = (longlong)((int)(char)local_140[iVar11] - (int)cVar1);
          uVar3 = local_118[lVar13 + 1];
          uVar4 = local_118[lVar13 + 2];
          uVar5 = local_118[lVar13 + 3];
          uVar2 = local_118[lVar13 + 4];
          *puVar9 = local_118[lVar13];
          puVar9[1] = uVar3;
          puVar9[2] = uVar4;
          puVar9[3] = uVar5;
          puVar9[4] = uVar2;
          lVar6 = lVar6 + -1;
          puVar9 = puVar9 + 5;
          lVar13 = local_128;
          iVar11 = iVar11 + 1;
        } while (lVar6 != 0);
      }
      param_2 = param_2 + lVar13;
      iVar8 = iVar8 + iVar12;
      pcVar10 = pcVar10 + 2;
      param_1 = param_1 + 0xaa;
      local_138 = local_138 - 1;
    } while (local_138 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_178);
}



// FUNCTION 1455df7fc FUN_1455df7fc body=541 status=ok
// SIG undefined FUN_1455df7fc(void)

void FUN_1455df7fc(float *param_1,longlong param_2,int param_3,int param_4,uint param_5,int param_6)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  double dVar16;
  float afStack_4b4 [239];
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d4;
  longlong local_d0;
  undefined1 *local_c8;
  float local_b8 [24];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = param_3;
  local_d4 = param_4;
  if (param_6 < 0) {
    FUN_144bca940("assertion failed: complexity >= SILK_PE_MIN_COMPLEX",
                  "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x23f);
  }
  if (2 < param_6) {
    FUN_144bca940("assertion failed: complexity <= SILK_PE_MAX_COMPLEX",
                  "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x240);
  }
  uVar14 = (ulonglong)param_5;
  if (param_5 == 4) {
    local_c8 = &DAT_149dee890;
    iVar15 = 0x22;
    iVar7 = (int)(char)(&DAT_149dee930)[param_6];
    pcVar11 = &DAT_149dee918 + (longlong)param_6 * 8;
  }
  else {
    if (param_5 != 2) {
      FUN_144bca940("assertion failed: nb_subfr == PE_MAX_NB_SUBFR >> 1",
                    "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x248);
    }
    iVar7 = 0xc;
    local_c8 = &DAT_149dee940;
    pcVar11 = &DAT_149dee958;
    iVar15 = 0xc;
  }
  param_2 = param_2 + (longlong)(param_4 << 2) * 4;
  if (0 < (int)param_5) {
    local_d0 = (longlong)param_4 << 2;
    iVar10 = 0;
    do {
      pfVar9 = (float *)(param_2 + (longlong)(*pcVar11 + local_d8) * -4);
      dVar16 = (double)FUN_1455de204(pfVar9,local_d4);
      cVar2 = *pcVar11;
      dVar16 = dVar16 + 0.001;
      lVar8 = 1;
      lVar13 = (longlong)(((int)pcVar11[1] - (int)cVar2) + 1);
      local_b8[0] = (float)dVar16;
      if (1 < lVar13) {
        pfVar6 = (float *)(local_d0 + -4 + (longlong)pfVar9);
        do {
          pfVar9 = pfVar9 + -1;
          fVar1 = *pfVar6;
          pfVar6 = pfVar6 + -1;
          dVar16 = (dVar16 - (double)fVar1 * (double)fVar1) + (double)*pfVar9 * (double)*pfVar9;
          local_b8[lVar8] = (float)dVar16;
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar13);
      }
      pfVar9 = param_1;
      lVar8 = (longlong)iVar7;
      iVar12 = iVar10;
      if (0 < (longlong)iVar7) {
        do {
          lVar13 = (longlong)((int)(char)local_c8[iVar12] - (int)cVar2);
          fVar3 = local_b8[lVar13 + 1];
          fVar4 = local_b8[lVar13 + 2];
          fVar5 = local_b8[lVar13 + 3];
          fVar1 = local_b8[lVar13 + 4];
          *pfVar9 = local_b8[lVar13];
          pfVar9[1] = fVar3;
          pfVar9[2] = fVar4;
          pfVar9[3] = fVar5;
          pfVar9[4] = fVar1;
          lVar8 = lVar8 + -1;
          pfVar9 = pfVar9 + 5;
          iVar12 = iVar12 + 1;
        } while (lVar8 != 0);
      }
      param_2 = param_2 + local_d0;
      iVar10 = iVar10 + iVar15;
      pcVar11 = pcVar11 + 2;
      param_1 = param_1 + 0xaa;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1455dfa30 FUN_1455dfa30 body=903 status=ok
// SIG undefined FUN_1455dfa30(void)

void FUN_1455dfa30(void *param_1,float *param_2,longlong param_3,int param_4,int param_5)

{
  float *pfVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_4;
  if (param_4 < param_5) {
    FUN_144bca940("assertion failed: Order <= length",
                  "../../../third_party/opus/src/silk/float/LPC_analysis_filter_FLP.c",0xda);
  }
  if (param_5 == 6) {
    if (6 < lVar2) {
      pfVar1 = (float *)(param_3 + 0x10);
      lVar2 = lVar2 + -6;
      do {
        *(float *)((longlong)pfVar1 + (longlong)param_1 + (8 - param_3)) =
             pfVar1[2] -
             (*pfVar1 * param_2[1] + *param_2 * pfVar1[1] + pfVar1[-1] * param_2[2] +
              pfVar1[-2] * param_2[3] + pfVar1[-3] * param_2[4] + pfVar1[-4] * param_2[5]);
        pfVar1 = pfVar1 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (param_5 == 8) {
    if (8 < lVar2) {
      pfVar1 = (float *)(param_3 + 0x18);
      lVar2 = lVar2 + -8;
      do {
        *(float *)((longlong)pfVar1 + (longlong)param_1 + (8 - param_3)) =
             pfVar1[2] -
             (*pfVar1 * param_2[1] + pfVar1[1] * *param_2 + pfVar1[-1] * param_2[2] +
              pfVar1[-2] * param_2[3] + pfVar1[-3] * param_2[4] + pfVar1[-4] * param_2[5] +
              pfVar1[-5] * param_2[6] + pfVar1[-6] * param_2[7]);
        pfVar1 = pfVar1 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (param_5 == 10) {
    if (10 < lVar2) {
      pfVar1 = (float *)(param_3 + 0x20);
      lVar2 = lVar2 + -10;
      do {
        *(float *)((longlong)pfVar1 + (longlong)param_1 + (8 - param_3)) =
             pfVar1[2] -
             (*pfVar1 * param_2[1] + *param_2 * pfVar1[1] + pfVar1[-1] * param_2[2] +
              pfVar1[-2] * param_2[3] + pfVar1[-3] * param_2[4] + pfVar1[-4] * param_2[5] +
              pfVar1[-5] * param_2[6] + pfVar1[-6] * param_2[7] + pfVar1[-7] * param_2[8] +
             pfVar1[-8] * param_2[9]);
        pfVar1 = pfVar1 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (param_5 == 0xc) {
    if (0xc < lVar2) {
      pfVar1 = (float *)(param_3 + 0x28);
      lVar2 = lVar2 + -0xc;
      do {
        *(float *)((longlong)pfVar1 + (longlong)param_1 + (8 - param_3)) =
             pfVar1[2] -
             (*param_2 * pfVar1[1] + *pfVar1 * param_2[1] + pfVar1[-1] * param_2[2] +
              pfVar1[-2] * param_2[3] + pfVar1[-3] * param_2[4] + pfVar1[-4] * param_2[5] +
              pfVar1[-5] * param_2[6] + pfVar1[-6] * param_2[7] + pfVar1[-7] * param_2[8] +
              pfVar1[-8] * param_2[9] + pfVar1[-9] * param_2[10] + pfVar1[-10] * param_2[0xb]);
        pfVar1 = pfVar1 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (param_5 == 0x10) {
    FUN_1455dfdb8(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_144bca940("assertion failed: 0",
                  "../../../third_party/opus/src/silk/float/LPC_analysis_filter_FLP.c",0xf2);
  }
  memset(param_1,0,(longlong)param_5 << 2);
  return;
}



// FUNCTION 1455dfdb8 FUN_1455dfdb8 body=290 status=ok
// SIG undefined FUN_1455dfdb8(void)

void FUN_1455dfdb8(longlong param_1,float *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  float *pfVar2;
  
  if (0x10 < (longlong)param_4) {
    pfVar2 = (float *)(param_3 + 0x38);
    lVar1 = (longlong)param_4 + -0x10;
    do {
      *(float *)((longlong)pfVar2 + (param_1 - param_3) + 8) =
           pfVar2[2] -
           (*param_2 * pfVar2[1] + *pfVar2 * param_2[1] + pfVar2[-1] * param_2[2] +
            pfVar2[-2] * param_2[3] + pfVar2[-3] * param_2[4] + pfVar2[-4] * param_2[5] +
            pfVar2[-5] * param_2[6] + pfVar2[-6] * param_2[7] + pfVar2[-7] * param_2[8] +
            pfVar2[-8] * param_2[9] + pfVar2[-9] * param_2[10] + pfVar2[-10] * param_2[0xb] +
            pfVar2[-0xb] * param_2[0xc] + pfVar2[-0xc] * param_2[0xd] + pfVar2[-0xd] * param_2[0xe]
           + pfVar2[-0xe] * param_2[0xf]);
      pfVar2 = pfVar2 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1455dfedc FUN_1455dfedc body=130 status=ok
// SIG undefined FUN_1455dfedc(void)

void FUN_1455dfedc(float *param_1,longlong param_2,float param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_4 & 0xfffc) != 0) {
    lVar2 = ((ulonglong)(param_4 & 0xfffc) - 1 >> 2) + 1;
    iVar4 = (int)lVar2 << 2;
    pfVar3 = param_1;
    do {
      lVar1 = 4;
      do {
        *pfVar3 = param_3 * *(float *)((param_2 - (longlong)param_1) + (longlong)pfVar3);
        pfVar3 = pfVar3 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < (int)param_4) {
    pfVar3 = param_1 + lVar2;
    lVar2 = (int)param_4 - lVar2;
    do {
      *pfVar3 = param_3 * *(float *)((longlong)pfVar3 + (param_2 - (longlong)param_1));
      pfVar3 = pfVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1455dff60 FUN_1455dff60 body=112 status=ok
// SIG undefined FUN_1455dff60(void)

void FUN_1455dff60(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == 0) {
    fVar2 = (float)(*(int *)(param_1 + 0x1680) + *(int *)(param_1 + 0x1208)) *
            *(float *)(param_2 + 0x2c4) * 0.1;
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar2 = 2.0;
    if (fVar3 <= 2.0) {
      fVar2 = fVar3;
    }
    cVar1 = (char)(int)fVar2;
  }
  else {
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0x12b1) = cVar1;
  *(float *)(param_2 + 0xe0) = (float)(int)(short)(&DAT_149d32c0c)[cVar1] * 6.1035156e-05;
  return;
}



// FUNCTION 1455dffd0 FUN_1455dffd0 body=576 status=ok
// SIG undefined FUN_1455dffd0(void)

void FUN_1455dffd0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_758 [32];
  undefined4 local_738;
  int local_730;
  undefined1 local_728 [64];
  undefined1 local_6e8 [64];
  undefined1 local_6a8 [1536];
  undefined1 local_a8 [32];
  ulonglong local_88;
  
  local_88 = DAT_14c707940 ^ (ulonglong)auStack_758;
  local_730 = *(int *)(param_1 + 0x1220);
  local_738 = *(undefined4 *)(param_1 + 0x11e4);
  iVar5 = *(int *)(param_1 + 0x11ec) + local_730;
  *(undefined1 *)(param_1 + 0x12af) = 4;
  fVar6 = (float)FUN_145632990(local_6e8,param_3,param_4,iVar5);
  if (((*(int *)(param_1 + 0x1218) != 0) && (*(int *)(param_1 + 0x1238) == 0)) &&
     (*(int *)(param_1 + 0x11e4) == 4)) {
    local_730 = *(int *)(param_1 + 0x1220);
    local_738 = 2;
    fVar7 = (float)FUN_145632990(local_728,param_3 + (longlong)(iVar5 * 2) * 4,param_4,iVar5);
    fVar6 = fVar6 - fVar7;
    FUN_14551b30c(param_2,local_728,*(undefined4 *)(param_1 + 0x1220));
    iVar4 = 3;
    fVar7 = 3.4028235e+38;
    do {
      local_738 = *(undefined4 *)(param_1 + 0x1220);
      FUN_145633050(local_a8,param_1 + 0x1194,param_2,iVar4);
      FUN_14551b374(local_728,local_a8,*(undefined4 *)(param_1 + 0x1220),
                    *(undefined4 *)(param_1 + 0x13f4));
      local_738 = *(undefined4 *)(param_1 + 0x1220);
      FUN_1455dfa30(local_6a8,local_728,param_3,iVar5 * 2);
      iVar1 = *(int *)(param_1 + 0x1220);
      dVar3 = (double)FUN_1455de204(local_6a8 +
                                    ((longlong)*(int *)(param_1 + 0x1220) + (longlong)iVar5) * 4,
                                    iVar5 - *(int *)(param_1 + 0x1220));
      dVar2 = (double)FUN_1455de204(local_6a8 + (longlong)iVar1 * 4,iVar5 - iVar1);
      fVar8 = (float)(dVar3 + dVar2);
      if (fVar6 <= fVar8) {
        if (fVar7 < fVar8) break;
      }
      else {
        *(char *)(param_1 + 0x12af) = (char)iVar4;
        fVar6 = fVar8;
      }
      iVar4 = iVar4 + -1;
      fVar7 = fVar8;
    } while (-1 < iVar4);
  }
  if (*(char *)(param_1 + 0x12af) == '\x04') {
    FUN_14551b30c(param_2,local_6e8,*(undefined4 *)(param_1 + 0x1220));
    if (*(char *)(param_1 + 0x12af) == '\x04') goto LAB_1455e0200;
  }
  if (((*(int *)(param_1 + 0x1218) == 0) || (*(int *)(param_1 + 0x1238) != 0)) ||
     (*(int *)(param_1 + 0x11e4) != 4)) {
    FUN_144bca940("assertion failed: psEncC->indices.NLSFInterpCoef_Q2 == 4 || ( psEncC->useInterpolatedNLSFs && !psEncC->first_frame_after_reset && psEncC->nb_subfr == MAX_NB_SUBFR )"
                  ,"../../../third_party/opus/src/silk/float/find_LPC_FLP.c",0x67);
  }
LAB_1455e0200:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_88 ^ (ulonglong)auStack_758);
}



// FUNCTION 1455e0238 FUN_1455e0238 body=314 status=ok
// SIG undefined FUN_1455e0238(void)

void FUN_1455e0238(float *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = 0;
  if (0 < (longlong)param_6) {
    do {
      lVar1 = param_3 + (longlong)(*(int *)(param_4 + lVar2 * 4) + 2) * -4;
      FUN_145633160(lVar1,param_5,5,param_1);
      FUN_145633358(lVar1,param_3,param_5,5,param_2);
      dVar3 = (double)FUN_1455de204(param_3,param_5 + 5);
      fVar4 = (param_1[0x18] + *param_1) * 0.015 + 1.0;
      fVar5 = (float)dVar3;
      if ((float)dVar3 <= fVar4) {
        fVar5 = fVar4;
      }
      FUN_1456330fc(param_1,1.0 / fVar5,0x19);
      FUN_1456330fc(param_2,1.0 / fVar5,5);
      param_3 = param_3 + (longlong)param_5 * 4;
      param_1 = param_1 + 0x19;
      param_2 = param_2 + 0x14;
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_6);
  }
  return;
}



// FUNCTION 1455e0374 FUN_1455e0374 body=253 status=ok
// SIG undefined FUN_1455e0374(void)

void FUN_1455e0374(float *param_1,longlong param_2,float *param_3,longlong param_4,float *param_5,
                  int param_6,int param_7,int param_8)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  ulonglong uVar10;
  float fVar11;
  float local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)local_48;
  lVar5 = (longlong)param_7;
  if (0 < lVar5) {
    uVar7 = param_8 + param_6;
    param_4 = param_4 - (longlong)param_5;
    do {
      fVar2 = *param_5;
      local_48[4] = param_3[4];
      local_48[0] = *param_3;
      local_48[1] = param_3[1];
      local_48[2] = param_3[2];
      local_48[3] = param_3[3];
      if (0 < (int)uVar7) {
        uVar10 = (ulonglong)uVar7;
        pfVar9 = (float *)(param_2 + (longlong)*(int *)(param_4 + (longlong)param_5) * -4 + 8);
        pfVar4 = param_1;
        do {
          fVar11 = *(float *)((longlong)pfVar4 + (param_2 - (longlong)param_1));
          lVar8 = 0;
          *pfVar4 = fVar11;
          pfVar6 = pfVar9;
          do {
            pfVar1 = local_48 + lVar8;
            lVar8 = lVar8 + 1;
            fVar3 = *pfVar6;
            pfVar6 = pfVar6 + -1;
            fVar11 = fVar11 - *pfVar1 * fVar3;
            *pfVar4 = fVar11;
          } while (lVar8 < 5);
          pfVar9 = pfVar9 + 1;
          *pfVar4 = fVar11 * fVar2;
          pfVar4 = pfVar4 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      param_2 = param_2 + (longlong)param_6 * 4;
      param_5 = param_5 + 1;
      param_3 = param_3 + 5;
      param_1 = param_1 + (int)uVar7;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)local_48);
}



// FUNCTION 1455e0488 FUN_1455e0488 body=333 status=ok
// SIG undefined FUN_1455e0488(void)

void FUN_1455e0488(float *param_1,longlong param_2,longlong param_3,float *param_4,int param_5,
                  int param_6,int param_7)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_398 [32];
  int local_378;
  longlong local_368;
  undefined1 local_358 [768];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_398;
  local_378 = param_7;
  puVar1 = local_358 + (longlong)param_7 * 4;
  iVar3 = (param_7 + param_5) * 2;
  local_368 = param_3;
  FUN_1455dfa30(local_358,param_3,param_2,iVar3);
  fVar2 = *param_4;
  dVar4 = (double)FUN_1455de204(puVar1,param_5);
  *param_1 = (float)(dVar4 * (double)(fVar2 * fVar2));
  fVar2 = param_4[1];
  dVar4 = (double)FUN_1455de204(puVar1 + (longlong)(param_7 + param_5) * 4,param_5);
  param_1[1] = (float)(dVar4 * (double)(fVar2 * fVar2));
  if (param_6 == 4) {
    local_378 = param_7;
    FUN_1455dfa30(local_358,local_368 + 0x40,(longlong)iVar3 * 4 + param_2,iVar3);
    fVar2 = param_4[2];
    dVar4 = (double)FUN_1455de204(puVar1,param_5);
    param_1[2] = (float)(dVar4 * (double)(fVar2 * fVar2));
    fVar2 = param_4[3];
    dVar4 = (double)FUN_1455de204(puVar1 + (longlong)(param_7 + param_5) * 4,param_5);
    param_1[3] = (float)(dVar4 * (double)(fVar2 * fVar2));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_398);
}



// FUNCTION 1455e05f8 FUN_1455e05f8 body=858 status=ok
// SIG undefined FUN_1455e05f8(void)

void FUN_1455e05f8(short *param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_128 [32];
  uint local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined1 *local_f8;
  int local_f0;
  longlong local_e8;
  ulonglong local_e0;
  uint local_d8;
  short *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0 [2];
  undefined1 local_b0 [56];
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c0[0] = local_b0;
  iVar9 = param_3 >> 1;
  local_c0[1] = local_78;
  local_fc = param_3;
  local_d0 = param_1;
  local_c8 = param_2;
  FUN_1455e0a1c(param_2,local_b0,local_78,iVar9);
  puVar10 = local_b0;
  local_f8 = puVar10;
  uVar2 = FUN_1455e0970(local_b0,0x2000,iVar9);
  bVar13 = (int)uVar2 < 0;
  if (bVar13) {
    puVar10 = local_78;
    *param_1 = 0;
    local_f8 = puVar10;
    uVar2 = FUN_1455e0970(local_78,0x2000,iVar9);
  }
  local_108 = (uint)bVar13;
  local_f0 = 0;
  local_e0 = (ulonglong)local_108;
  do {
    local_100 = 1;
    local_e8 = 1;
    uVar6 = (ulonglong)uVar2;
    uVar2 = 0;
    iVar4 = 0x2000;
    do {
      while( true ) {
        iVar7 = local_100;
        local_104 = (int)(short)(&DAT_149dee750)[local_e8];
        uVar3 = FUN_1455e0970(puVar10,local_104,iVar9);
        puVar10 = local_f8;
        iVar8 = 0;
        uVar11 = (ulonglong)uVar3;
        if (((0 < (int)uVar6) || ((int)uVar3 < (int)uVar2)) &&
           (((int)uVar6 < 0 || ((int)-uVar2 < (int)uVar3)))) break;
        iVar12 = -0x100;
        local_d8 = (uint)(uVar3 == 0);
        iVar7 = local_104;
        do {
          local_104 = (iVar7 + iVar4 >> 1) + (iVar7 + iVar4 & 1U);
          uVar2 = FUN_1455e0970(puVar10,local_104,iVar9);
          if ((((int)uVar6 < 1) && (-1 < (int)uVar2)) || ((-1 < (int)uVar6 && ((int)uVar2 < 1)))) {
            uVar11 = (ulonglong)uVar2;
            iVar7 = local_104;
          }
          else {
            uVar6 = (ulonglong)uVar2;
            iVar12 = iVar12 + (0x80 >> ((byte)iVar8 & 0x1f));
            iVar4 = local_104;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 3);
        uVar2 = (uint)uVar6;
        iVar4 = uVar2 - (int)uVar11;
        if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 0x10000) {
          if (iVar4 != 0) {
            uVar2 = (iVar4 >> 1) + uVar2 * 0x20;
            goto LAB_1455e07b9;
          }
        }
        else {
          iVar4 = iVar4 >> 5;
LAB_1455e07b9:
          iVar12 = iVar12 + (int)uVar2 / iVar4;
        }
        uVar6 = 0x7fff;
        iVar12 = local_100 * 0x100 + iVar12;
        sVar1 = 0x7fff;
        if (iVar12 < 0x7fff) {
          sVar1 = (short)iVar12;
        }
        local_108 = local_108 + 1;
        local_d0[local_e0] = sVar1;
        local_e0 = local_e0 + 1;
        if (local_fc <= (int)local_108) goto LAB_1455e0946;
        local_f8 = local_c0[local_108 & 1];
        param_1 = local_d0;
        uVar6 = (ulonglong)((local_108 & 2) * -0x1000 + 0x1000);
        puVar10 = local_f8;
        uVar2 = local_d8;
        iVar4 = (int)*(short *)(&UNK_149dee74e + local_e8 * 2);
      }
      local_100 = iVar7 + 1;
      local_e8 = local_e8 + 1;
      uVar6 = uVar11;
      uVar2 = 0;
      iVar4 = local_104;
    } while (local_100 < 0x81);
    local_f0 = local_f0 + 1;
    if (0x10 < local_f0) {
      uVar6 = 0x8000 % (longlong)(local_fc + 1) & 0xffffffff;
      *param_1 = (short)(0x8000 / (longlong)(local_fc + 1));
      if (1 < (longlong)local_fc) {
        lVar5 = 1;
        do {
          param_1[lVar5] = param_1[lVar5 + -1] + *param_1;
          lVar5 = lVar5 + 1;
        } while (lVar5 < local_fc);
      }
LAB_1455e0946:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_128,uVar6);
    }
    FUN_145631f94(local_c8,local_fc,0x10000 - (1 << ((byte)local_f0 & 0x1f)));
    FUN_1455e0a1c(local_c8,local_b0,local_78,iVar9);
    puVar10 = local_b0;
    local_f8 = puVar10;
    uVar2 = FUN_1455e0970(local_b0,0x2000,iVar9);
    if ((int)uVar2 < 0) {
      *param_1 = 0;
      puVar10 = local_78;
      local_f8 = puVar10;
      uVar2 = FUN_1455e0970(local_78,0x2000,iVar9);
      local_108 = 1;
      local_e0 = 1;
    }
    else {
      local_108 = 0;
      local_e0 = 0;
    }
  } while( true );
}



// FUNCTION 1455e0970 FUN_1455e0970 body=169 status=ok
// SIG undefined FUN_1455e0970(void)

ulonglong FUN_1455e0970(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_1[param_3];
  if (param_3 == 8) {
    lVar1 = (longlong)(param_2 << 4);
    uVar2 = (ulonglong)
            (uint)((int)((ulonglong)
                         (((int)((ulonglong)
                                 (((int)((ulonglong)
                                         (((int)((ulonglong)
                                                 (((int)((ulonglong)
                                                         (((int)((ulonglong)
                                                                 (((int)((ulonglong)
                                                                         (((int)(uVar2 * lVar1 >>
                                                                                0x10) + param_1[7])
                                                                         * lVar1) >> 0x10) +
                                                                  param_1[6]) * lVar1) >> 0x10) +
                                                          param_1[5]) * lVar1) >> 0x10) + param_1[4]
                                                  ) * lVar1) >> 0x10) + param_1[3]) * lVar1) >> 0x10
                                        ) + param_1[2]) * lVar1) >> 0x10) + param_1[1]) * lVar1) >>
                        0x10) + *param_1);
  }
  else {
    lVar1 = (longlong)(param_3 + -1);
    if (-1 < param_3 + -1) {
      do {
        uVar2 = (ulonglong)
                (uint)((int)((ulonglong)((longlong)(int)uVar2 * (longlong)(param_2 << 4)) >> 0x10) +
                      param_1[lVar1]);
        lVar1 = lVar1 + -1;
      } while (-1 < lVar1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1455e0a1c FUN_1455e0a1c body=304 status=ok
// SIG undefined FUN_1455e0a1c(void)

void FUN_1455e0a1c(longlong param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  
  lVar5 = (longlong)param_4;
  param_2[lVar5] = 0x10000;
  param_3[lVar5] = 0x10000;
  if (0 < param_4) {
    piVar1 = (int *)(lVar5 * 4 + param_1);
    lVar3 = lVar5;
    piVar4 = piVar1;
    do {
      piVar4 = piVar4 + -1;
      *(int *)((longlong)param_2 + (lVar5 * -4 - param_1) + (longlong)piVar1) = -(*piVar1 + *piVar4)
      ;
      *(int *)((longlong)param_3 + (lVar5 * -4 - param_1) + (longlong)piVar1) = *piVar1 - *piVar4;
      piVar1 = piVar1 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (0 < lVar5) {
      piVar1 = param_3 + lVar5 + -1;
      lVar3 = lVar5;
      do {
        lVar3 = lVar3 + -1;
        piVar4 = (int *)(((longlong)param_2 - (longlong)param_3) + (longlong)piVar1);
        *piVar4 = *piVar4 - *(int *)(((longlong)param_2 - (longlong)param_3) + 4 + (longlong)piVar1)
        ;
        *piVar1 = *piVar1 + piVar1[1];
        piVar1 = piVar1 + -1;
      } while (0 < lVar3);
    }
  }
  lVar3 = 2;
  if (1 < lVar5) {
    lVar2 = 2;
    bVar8 = SBORROW8(lVar5,2);
    lVar6 = lVar5 + -2;
    bVar7 = lVar5 == 2;
    piVar1 = param_2;
    do {
      if (!bVar7 && bVar8 == lVar6 < 0) {
        piVar4 = param_2 + lVar5 + -2;
        lVar6 = lVar5 - lVar2;
        do {
          *piVar4 = *piVar4 - piVar4[2];
          piVar4 = piVar4 + -1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar2 = lVar2 + 1;
      *piVar1 = *piVar1 + piVar1[2] * -2;
      piVar1 = piVar1 + 1;
      bVar8 = SBORROW8(lVar5,lVar2);
      lVar6 = lVar5 - lVar2;
      bVar7 = lVar5 == lVar2;
    } while (lVar2 <= lVar5);
    bVar8 = SBORROW8(lVar5,2);
    lVar6 = lVar5 + -2;
    bVar7 = lVar5 == 2;
    piVar1 = param_3;
    do {
      if (!bVar7 && bVar8 == lVar6 < 0) {
        piVar4 = param_3 + lVar5 + -2;
        lVar6 = lVar5 - lVar3;
        do {
          *piVar4 = *piVar4 - piVar4[2];
          piVar4 = piVar4 + -1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar3 = lVar3 + 1;
      *piVar1 = *piVar1 + piVar1[2] * -2;
      piVar1 = piVar1 + 1;
      bVar8 = SBORROW8(lVar5,lVar3);
      lVar6 = lVar5 - lVar3;
      bVar7 = lVar5 == lVar3;
    } while (lVar3 <= lVar5);
  }
  return;
}



// FUNCTION 1455e0b4c FUN_1455e0b4c body=766 status=ok
// SIG undefined FUN_1455e0b4c(void)

void FUN_1455e0b4c(short *param_1,char *param_2,char *param_3,int *param_4,int *param_5,
                  longlong param_6,longlong param_7,undefined4 param_8,uint param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 local_88 [8];
  longlong local_80;
  char *local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  iVar6 = 0;
  local_78 = "\b\x10 ";
  local_9c = 0;
  local_98 = 0;
  iVar7 = 0x7fffffff;
  local_a0 = 0x7fffffff;
  local_80 = 0;
  do {
    uVar1 = *(undefined8 *)((longlong)&PTR_DAT_149da0a70 + local_80);
    iVar8 = 0;
    iVar13 = *param_4;
    local_50 = *(undefined8 *)((longlong)&PTR_DAT_149da0a88 + local_80);
    local_58 = *(undefined8 *)((longlong)&PTR_DAT_149da0aa0 + local_80);
    local_94 = (int)*local_78;
    local_70 = param_6;
    local_68 = param_7;
    iVar11 = 0;
    local_60 = uVar1;
    if (0 < (int)param_9) {
      puVar10 = local_88;
      uVar12 = (ulonglong)param_9;
      iVar11 = 0;
      lVar9 = param_6;
      lVar14 = param_7;
      iVar8 = 0;
      do {
        iVar6 = FUN_144f396e4(0x1855 - iVar13);
        FUN_1456333d0(puVar10,&local_90,&local_8c,&local_a4,lVar9,lVar14,local_50,local_58,uVar1,
                      param_8,iVar6 + -0x33,local_94);
        iVar8 = iVar8 + local_90;
        if (iVar8 < 0) {
          iVar8 = 0x7fffffff;
        }
        iVar11 = iVar11 + local_8c;
        if (iVar11 < 0) {
          iVar11 = 0x7fffffff;
        }
        iVar6 = FUN_144f39688(local_a4 + 0x33);
        if (iVar6 + iVar13 + -0x380 < 0) {
          iVar13 = 0;
        }
        else {
          iVar6 = FUN_144f39688(local_a4 + 0x33);
          iVar13 = iVar6 + iVar13 + -0x380;
        }
        lVar9 = lVar9 + 100;
        lVar14 = lVar14 + 0x14;
        puVar10 = puVar10 + 1;
        uVar12 = uVar12 - 1;
        iVar6 = local_9c;
        iVar7 = local_a0;
      } while (uVar12 != 0);
    }
    pcVar4 = local_78;
    lVar9 = local_80;
    iVar3 = local_98;
    if (iVar11 <= iVar7) {
      *param_3 = (char)local_98;
      local_a0 = iVar11;
      memcpy(param_2,local_88,(longlong)(int)param_9);
      iVar6 = iVar13;
      iVar7 = iVar11;
      local_9c = iVar13;
    }
    local_98 = iVar3 + 1;
    local_80 = lVar9 + 8;
    local_78 = pcVar4 + 1;
  } while (local_98 < 3);
  puVar2 = (&PTR_DAT_149da0a88)[*param_3];
  if (0 < (int)param_9) {
    uVar12 = (ulonglong)param_9;
    do {
      iVar7 = 0;
      do {
        iVar13 = iVar7 + *param_2 * 5;
        iVar7 = iVar7 + 1;
        *param_1 = (short)(char)puVar2[iVar13] << 7;
        param_1 = param_1 + 1;
      } while (iVar7 < 5);
      param_2 = param_2 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  *param_4 = iVar6;
  iVar6 = iVar8 >> 1;
  if (param_9 != 2) {
    iVar6 = iVar8 >> 2;
  }
  sVar5 = FUN_144f39688(iVar6);
  *param_5 = (short)(sVar5 + -0x780) * -3;
  return;
}



// FUNCTION 1455e0e4c FUN_1455e0e4c body=1838 status=ok
// SIG undefined FUN_1455e0e4c(void)

void FUN_1455e0e4c(longlong param_1,int param_2,int *param_3,char *param_4,undefined2 *param_5,
                  longlong param_6,short *param_7,short *param_8,short *param_9,int param_10,
                  int param_11,short param_12,int param_13,int param_14,int param_15,int param_16,
                  int param_17,uint param_18,int param_19)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  short sVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int *piVar21;
  int *local_res18;
  char *local_res20;
  int *local_60;
  longlong local_58;
  
  lVar19 = (longlong)(int)param_18;
  local_58 = (longlong)param_17;
  piVar21 = (int *)(param_1 + 0xf3c);
  local_60 = (int *)(param_1 + ((longlong)((*(int *)(param_1 + 0x10f0) - param_10) + 1) + 0x140) * 4
                    );
  piVar13 = (int *)(param_6 + (longlong)((*(int *)(param_1 + 0x10ec) - param_10) + 2) * 4);
  iVar7 = param_14 >> 6;
  if (0 < local_58) {
    iVar20 = *(int *)(param_1 + 0x10f4);
    local_res18 = param_3;
    local_res20 = param_4;
    do {
      *(int *)(param_1 + 0x10f4) = iVar20 * 0xbb38435 + 0x3619636b;
      iVar20 = (int)((ulonglong)((longlong)*param_7 * (longlong)*piVar21) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-2] * (longlong)param_7[2]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-4] * (longlong)param_7[4]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-6] * (longlong)param_7[6]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-9] * (longlong)param_7[9]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-8] * (longlong)param_7[8]) >> 0x10) +
               (param_19 >> 1) +
               (int)((ulonglong)((longlong)piVar21[-7] * (longlong)param_7[7]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-5] * (longlong)param_7[5]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-3] * (longlong)param_7[3]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-1] * (longlong)param_7[1]) >> 0x10);
      if (param_19 == 0x10) {
        iVar20 = (int)((ulonglong)((longlong)piVar21[-0xb] * (longlong)param_7[0xb]) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar21[-0xd] * (longlong)param_7[0xd]) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar21[-0xf] * (longlong)param_7[0xf]) >> 0x10) +
                 iVar20 + (int)((ulonglong)((longlong)piVar21[-0xe] * (longlong)param_7[0xe]) >>
                               0x10) +
                 (int)((ulonglong)((longlong)piVar21[-0xc] * (longlong)param_7[0xc]) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar21[-10] * (longlong)param_7[10]) >> 0x10);
      }
      if (param_2 == 2) {
        param_14 = (int)((ulonglong)((longlong)*param_8 * (longlong)*piVar13) >> 0x10) + 2 +
                   (int)((ulonglong)((longlong)piVar13[-4] * (longlong)param_8[4]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar13[-3] * (longlong)param_8[3]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar13[-2] * (longlong)param_8[2]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar13[-1] * (longlong)param_8[1]) >> 0x10);
        piVar13 = piVar13 + 1;
      }
      else {
        param_14 = 0;
      }
      if ((param_18 & 1) != 0) {
        FUN_144bca940("assertion failed: ( shapingLPCOrder & 1 ) == 0",
                      "../../../third_party/opus/src/silk/NSQ.c",0xfa);
      }
      iVar18 = *(int *)(param_1 + 0x1080);
      *(int *)(param_1 + 0x1080) = *(int *)(param_1 + 0x10e4);
      iVar14 = (int)((ulonglong)((longlong)*param_9 * (longlong)*(int *)(param_1 + 0x10e4)) >> 0x10)
               + ((int)param_18 >> 1);
      for (lVar16 = 2; lVar9 = (longlong)iVar18, lVar16 < lVar19; lVar16 = lVar16 + 2) {
        iVar15 = *(int *)(param_1 + 0x107c + lVar16 * 4);
        *(int *)(param_1 + 0x107c + lVar16 * 4) = iVar18;
        sVar10 = param_9[lVar16 + -1];
        iVar18 = *(int *)(param_1 + 0x1080 + lVar16 * 4);
        *(int *)(param_1 + 0x1080 + lVar16 * 4) = iVar15;
        iVar14 = iVar14 + (int)((ulonglong)(sVar10 * lVar9) >> 0x10) +
                 (int)((ulonglong)((longlong)param_9[lVar16] * (longlong)iVar15) >> 0x10);
      }
      *(int *)(param_1 + 0x107c + lVar19 * 4) = iVar18;
      iVar18 = (int)((ulonglong)((longlong)*(int *)(param_1 + 0x10e0) * (longlong)param_12) >> 0x10)
               + (int)((ulonglong)(param_9[lVar19 + -1] * lVar9) >> 0x10) * 2 + iVar14 * 2;
      iVar14 = (int)((ulonglong)
                     ((longlong)*(int *)(param_1 + 0x4fc + (longlong)*(int *)(param_1 + 0x10f0) * 4)
                     * (longlong)(short)param_13) >> 0x10) +
               (int)((ulonglong)
                     ((longlong)*(int *)(param_1 + 0x10e0) * ((longlong)param_13 >> 0x10)) >> 0x10);
      if ((param_10 < 1) && (param_2 == 2)) {
        FUN_144bca940("assertion failed: lag > 0 || signalType != TYPE_VOICED",
                      "../../../third_party/opus/src/silk/NSQ.c",0x102);
      }
      iVar15 = (iVar20 * 4 - iVar14) - iVar18;
      if (param_10 < 1) {
        iVar15 = iVar15 >> 1;
      }
      else {
        piVar1 = local_60 + -1;
        piVar2 = local_60 + -2;
        iVar8 = *local_60;
        local_60 = local_60 + 1;
        iVar15 = (iVar15 * 2 -
                 ((int)((ulonglong)((longlong)(*piVar2 + iVar8) * (longlong)(short)param_11) >> 0x10
                       ) * 2 +
                 (int)((ulonglong)((longlong)*piVar1 * ((longlong)param_11 >> 0x10)) >> 0x10) * 2))
                 + param_14 >> 2;
      }
      iVar15 = *local_res18 - (iVar15 + 1 >> 1);
      if (*(int *)(param_1 + 0x10f4) < 0) {
        iVar15 = -iVar15;
      }
      iVar8 = iVar15;
      if (iVar15 < -0x7c00) {
        iVar8 = -0x7c00;
      }
      if (0x7800 < iVar15) {
        iVar8 = 0x7800;
      }
      iVar11 = iVar8 - param_16;
      iVar15 = iVar11 >> 10;
      sVar10 = (short)param_16;
      if (param_15 < 0x801) {
LAB_1455e1348:
        if (iVar15 < 1) {
          if (iVar15 != 0) {
            if (iVar15 == -1) goto LAB_1455e137e;
            iVar15 = param_16 + 0x50 + iVar15 * 0x400;
            sVar17 = -(short)iVar15;
            iVar11 = iVar15 + 0x400;
            sVar10 = -(short)iVar11;
            goto LAB_1455e13b5;
          }
          iVar11 = param_16 + 0x3b0;
          iVar15 = param_16;
          sVar17 = sVar10;
        }
        else {
          iVar15 = param_16 + -0x50 + iVar15 * 0x400;
          iVar11 = iVar15 + 0x400;
          sVar17 = (short)iVar15;
        }
        sVar10 = (short)iVar11;
      }
      else {
        iVar15 = param_15;
        if (param_15 < 0) {
          iVar15 = param_15 + 1;
        }
        iVar15 = (iVar15 >> 1) + -0x200;
        if (iVar15 < iVar11) {
          iVar15 = -iVar15;
LAB_1455e133d:
          iVar15 = iVar11 + iVar15 >> 10;
          goto LAB_1455e1348;
        }
        if (iVar11 < -iVar15) goto LAB_1455e133d;
        if (-1 < iVar11) {
          iVar15 = 0;
          goto LAB_1455e1348;
        }
LAB_1455e137e:
        iVar15 = param_16 + -0x3b0;
        sVar17 = -(short)iVar15;
        iVar11 = param_16;
      }
LAB_1455e13b5:
      iVar12 = (int)(short)((short)iVar8 - (short)iVar15);
      iVar8 = (int)(short)((short)iVar8 - (short)iVar11);
      if ((int)sVar17 * (int)(short)param_15 + iVar12 * iVar12 <=
          (int)sVar10 * (int)(short)param_15 + iVar8 * iVar8) {
        iVar11 = iVar15;
      }
      iVar15 = iVar11 * 0x10;
      *local_res20 = (char)((iVar11 >> 9) + 1 >> 1);
      if (*(int *)(param_1 + 0x10f4) < 0) {
        iVar15 = iVar11 * -0x10;
      }
      iVar15 = iVar15 + param_14 * 2;
      iVar8 = iVar20 * 0x10 + iVar15;
      iVar20 = ((int)((ulonglong)((longlong)iVar8 * (longlong)iVar7) >> 0x10) >> 7) + 1 >> 1;
      uVar6 = (undefined2)iVar20;
      if (iVar20 < -0x8000) {
        uVar6 = 0x8000;
      }
      if (0x7fff < iVar20) {
        uVar6 = 0x7fff;
      }
      piVar21 = piVar21 + 1;
      *param_5 = uVar6;
      param_5 = param_5 + 1;
      *piVar21 = iVar8;
      iVar20 = *local_res18;
      local_res18 = local_res18 + 1;
      iVar8 = iVar8 + iVar20 * -0x10;
      *(int *)(param_1 + 0x10e4) = iVar8;
      iVar8 = iVar8 + iVar18 * -4;
      *(int *)(param_1 + 0x10e0) = iVar8;
      *(int *)(param_1 + 0x500 + (longlong)*(int *)(param_1 + 0x10f0) * 4) = iVar8 + iVar14 * -4;
      *(int *)(param_6 + (longlong)*(int *)(param_1 + 0x10ec) * 4) = iVar15 * 2;
      *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + 1;
      *(int *)(param_1 + 0x10ec) = *(int *)(param_1 + 0x10ec) + 1;
      cVar4 = *local_res20;
      local_res20 = local_res20 + 1;
      *(int *)(param_1 + 0x10f4) = *(int *)(param_1 + 0x10f4) + (int)cVar4;
      local_58 = local_58 + -1;
      iVar20 = *(int *)(param_1 + 0x10f4);
    } while (local_58 != 0);
  }
  lVar19 = (longlong)param_17;
  puVar3 = (undefined8 *)(param_1 + 0xf00 + lVar19 * 4);
  uVar5 = puVar3[1];
  *(undefined8 *)(param_1 + 0xf00) = *puVar3;
  *(undefined8 *)(param_1 + 0xf08) = uVar5;
  puVar3 = (undefined8 *)(param_1 + 0xf10 + lVar19 * 4);
  uVar5 = puVar3[1];
  *(undefined8 *)(param_1 + 0xf10) = *puVar3;
  *(undefined8 *)(param_1 + 0xf18) = uVar5;
  puVar3 = (undefined8 *)(param_1 + 0xf20 + lVar19 * 4);
  uVar5 = puVar3[1];
  *(undefined8 *)(param_1 + 0xf20) = *puVar3;
  *(undefined8 *)(param_1 + 0xf28) = uVar5;
  puVar3 = (undefined8 *)(param_1 + 0xf30 + lVar19 * 4);
  uVar5 = puVar3[1];
  *(undefined8 *)(param_1 + 0xf30) = *puVar3;
  *(undefined8 *)(param_1 + 0xf38) = uVar5;
  return;
}



// FUNCTION 1455e157c FUN_1455e157c body=1188 status=ok
// SIG undefined FUN_1455e157c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455e157c(longlong param_1,void *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6,longlong param_7,longlong param_8,longlong param_9,
                  longlong param_10,longlong param_11,longlong param_12,int *param_13,
                  undefined4 param_14,undefined4 param_15)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 auStack_140 [5];
  longlong lStack_118;
  longlong lStack_110;
  uint auStack_108 [2];
  longlong alStack_100 [2];
  int aiStack_f0 [22];
  char local_98 [4];
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  longlong local_80;
  void *local_78;
  char *local_70;
  longlong local_68;
  char *local_60;
  char *local_58;
  int *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)local_98;
  *(int *)((longlong)param_2 + 0x10f4) = (int)*(char *)(param_3 + 0x22);
  local_94 = *(int *)((longlong)param_2 + 0x10e8);
  cVar14 = *(char *)(param_3 + 0x1f);
  iVar9 = *(int *)(param_1 + 0x11f0);
  lVar12 = (longlong)(*(int *)(param_1 + 0x11e8) + iVar9);
  local_88 = (int)*(short *)(&DAT_149d32c78 +
                            ((longlong)*(char *)(param_3 + 0x1e) +
                            ((longlong)*(char *)(param_3 + 0x1d) >> 1) * 2) * 2);
  uVar10 = lVar12 * 4;
  uVar11 = uVar10 + 0xf;
  if (uVar11 <= uVar10) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_140[0] = 0x1455e163d;
  lVar3 = -(uVar11 & 0xfffffffffffffff0);
  local_60 = local_98 + lVar3;
  uVar10 = lVar12 * 2;
  uVar11 = uVar10 + 0xf;
  if (uVar11 <= uVar10) {
    uVar11 = 0xffffffffffffff0;
  }
  local_98[0] = cVar14;
  local_80 = param_4;
  *(undefined8 *)((longlong)auStack_140 + lVar3) = 0x1455e1668;
  lVar12 = -(uVar11 & 0xfffffffffffffff0);
  local_70 = local_98 + lVar12 + lVar3;
  uVar10 = (longlong)*(int *)(param_1 + 0x11ec) * 4;
  uVar11 = uVar10 + 0xf;
  if (uVar11 <= uVar10) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_140 + lVar12 + lVar3) = 0x1455e169a;
  lVar4 = -(uVar11 & 0xfffffffffffffff0);
  *(int *)((longlong)param_2 + 0x10f0) = iVar9;
  uVar16 = 0;
  local_58 = local_98 + lVar4 + lVar12 + lVar3;
  *(undefined4 *)((longlong)param_2 + 0x10ec) = *(undefined4 *)(param_1 + 0x11f0);
  local_78 = (void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x11f0) * 2);
  iVar9 = *(int *)(param_1 + 0x11e4);
  if (0 < iVar9) {
    local_84 = (uint)(cVar14 == '\x04');
    local_8c = 0;
    local_90 = 0;
    local_48 = param_12 - (longlong)param_13;
    local_50 = param_13;
    do {
      local_68 = param_6 + (longlong)(int)(((int)uVar16 >> 1 | local_84) << 4) * 2;
      local_38 = param_7 + (longlong)local_90 * 2;
      local_40 = param_8 + (longlong)local_8c * 2;
      iVar9 = *(int *)((param_9 - (longlong)param_13) + (longlong)local_50);
      *(undefined4 *)((longlong)param_2 + 0x10fc) = 0;
      if (*(char *)(param_3 + 0x1d) == '\x02') {
        local_94 = *local_50;
        uVar8 = 3;
        if (cVar14 != '\x04') {
          uVar8 = 1;
        }
        if ((uVar16 & uVar8) == 0) {
          iVar15 = *(int *)(param_1 + 0x11f0);
          iVar13 = *(int *)(param_1 + 0x1220);
          iVar17 = ((iVar15 - iVar13) - local_94) + -2;
          if (iVar17 < 1) {
            *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x1455e17ef;
            FUN_144bca940("assertion failed: start_idx > 0",
                          "../../../third_party/opus/src/silk/NSQ.c",0x92);
            iVar13 = *(int *)(param_1 + 0x1220);
            iVar15 = *(int *)(param_1 + 0x11f0);
          }
          iVar2 = *(int *)(param_1 + 0x11ec);
          pcVar1 = local_70 + (longlong)iVar17 * 2;
          *(undefined4 *)((longlong)&lStack_110 + lVar4 + lVar12 + lVar3) =
               *(undefined4 *)(param_1 + 0x13f4);
          *(int *)((longlong)&lStack_118 + lVar4 + lVar12 + lVar3) = iVar13;
          lVar5 = local_68;
          *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x1455e1836;
          FUN_1455dd2cc(pcVar1,(void *)((longlong)param_2 +
                                       (longlong)(int)(iVar2 * uVar16 + iVar17) * 2),lVar5,
                        iVar15 - iVar17);
          *(undefined4 *)((longlong)param_2 + 0x10fc) = 1;
          *(undefined4 *)((longlong)param_2 + 0x10ec) = *(undefined4 *)(param_1 + 0x11f0);
        }
      }
      piVar7 = local_50;
      pcVar6 = local_58;
      lVar5 = local_80;
      *(int *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 8) = (int)*(char *)(param_3 + 0x1d);
      *(int **)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3) = param_13;
      *(longlong *)((longlong)alStack_100 + lVar4 + lVar12 + lVar3 + 8) = param_12;
      *(undefined4 *)((longlong)alStack_100 + lVar4 + lVar12 + lVar3) = param_15;
      pcVar1 = local_60;
      *(uint *)((longlong)auStack_108 + lVar4 + lVar12 + lVar3) = uVar16;
      *(char **)((longlong)&lStack_110 + lVar4 + lVar12 + lVar3) = pcVar1;
      *(char **)((longlong)&lStack_118 + lVar4 + lVar12 + lVar3) = local_70;
      *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x1455e189d;
      FUN_1455e1a44(param_1,param_2,lVar5,pcVar6);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x50) =
           *(undefined4 *)(param_1 + 0x13f4);
      pcVar1 = local_58;
      cVar14 = *(char *)(param_3 + 0x1d);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x48) =
           *(undefined4 *)(param_1 + 0x1220);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x40) =
           *(undefined4 *)(param_1 + 0x121c);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x38) =
           *(undefined4 *)(param_1 + 0x11ec);
      *(int *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x30) = local_88;
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x28) = param_14;
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x20) =
           *(undefined4 *)(local_48 + (longlong)piVar7);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x18) =
           *(undefined4 *)((param_11 - (longlong)param_13) + (longlong)piVar7);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x10) =
           *(undefined4 *)((param_10 - (longlong)param_13) + (longlong)piVar7);
      iVar15 = local_94;
      *(int *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 8) =
           (iVar9 >> 1) << 0x10 | iVar9 >> 2;
      *(int *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3) = iVar15;
      *(longlong *)((longlong)alStack_100 + lVar4 + lVar12 + lVar3 + 8) = local_40;
      *(longlong *)((longlong)alStack_100 + lVar4 + lVar12 + lVar3) = local_38;
      *(longlong *)((longlong)auStack_108 + lVar4 + lVar12 + lVar3) = local_68;
      *(char **)((longlong)&lStack_110 + lVar4 + lVar12 + lVar3) = local_60;
      *(void **)((longlong)&lStack_118 + lVar4 + lVar12 + lVar3) = local_78;
      *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x1455e195f;
      FUN_1455e0e4c(param_2,(int)cVar14,pcVar1,param_5);
      local_50 = piVar7 + 1;
      param_5 = param_5 + *(int *)(param_1 + 0x11ec);
      local_90 = local_90 + 5;
      local_8c = local_8c + 0x18;
      lVar5 = (longlong)*(int *)(param_1 + 0x11ec) * 2;
      local_80 = local_80 + lVar5;
      local_78 = (void *)((longlong)local_78 + lVar5);
      uVar16 = uVar16 + 1;
      iVar9 = *(int *)(param_1 + 0x11e4);
      cVar14 = local_98[0];
    } while ((int)uVar16 < iVar9);
  }
  *(int *)((longlong)param_2 + 0x10e8) = param_13[(longlong)iVar9 + -1];
  iVar9 = *(int *)(param_1 + 0x11e8);
  iVar15 = *(int *)(param_1 + 0x11f0);
  *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x1455e19ec;
  memmove(param_2,(void *)((longlong)param_2 + (longlong)iVar9 * 2),(longlong)iVar15 * 2);
  iVar9 = *(int *)(param_1 + 0x11e8);
  iVar15 = *(int *)(param_1 + 0x11f0);
  *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x1455e1a14;
  memmove((void *)((longlong)param_2 + 0x500),
          (void *)((longlong)param_2 + ((longlong)iVar9 + 0x140) * 4),(longlong)iVar15 << 2);
  uVar11 = local_30 ^ (ulonglong)local_98;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = &UNK_1455e1a20;
  FUN_144d8e3a0(uVar11);
}



// FUNCTION 1455e1a44 FUN_1455e1a44 body=966 status=ok
// SIG undefined FUN_1455e1a44(void)

void FUN_1455e1a44(longlong param_1,longlong param_2,short *param_3,undefined4 *param_4,
                  longlong param_5,longlong param_6,int param_7,short param_8,longlong param_9,
                  longlong param_10,int param_11)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  longlong lVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  
  lVar9 = (longlong)param_7;
  iVar5 = *(int *)(param_10 + lVar9 * 4);
  uVar15 = 1;
  if (1 < *(int *)(param_9 + lVar9 * 4)) {
    uVar15 = *(uint *)(param_9 + lVar9 * 4);
  }
  uVar2 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
  if (uVar2 == 0) {
    iVar10 = 0x20;
  }
  else {
    iVar10 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar10 = 0x1f - iVar10;
  }
  iVar16 = uVar15 << ((byte)(iVar10 + -1) & 0x1f);
  lVar8 = 0x1fffffff / (longlong)(iVar16 >> 0x10);
  iVar17 = (int)lVar8;
  iVar10 = 0xe - (iVar10 + -1);
  iVar17 = (int)((ulonglong)
                 ((longlong)
                  ((int)((ulonglong)((longlong)iVar16 * (longlong)(short)lVar8) >> 0x10) * -8) *
                 (longlong)iVar17) >> 0x10) + iVar17 * 0x10000;
  if (iVar10 < 1) {
    bVar4 = -(byte)iVar10;
    iVar11 = -0x80000000 >> (bVar4 & 0x1f);
    iVar7 = 0x7fffffff >> (bVar4 & 0x1f);
    iVar16 = iVar17;
    if (iVar17 < iVar7) {
      iVar16 = iVar7;
    }
    iVar10 = iVar17;
    if (iVar17 < iVar11) {
      iVar10 = iVar11;
    }
    if (iVar11 < iVar17) {
      iVar16 = iVar11;
    }
    if (iVar7 < iVar17) {
      iVar10 = iVar7;
    }
    if (iVar7 < iVar11) {
      iVar10 = iVar16;
    }
    iVar10 = iVar10 << (bVar4 & 0x1f);
  }
  else if (iVar10 < 0x20) {
    iVar10 = iVar17 >> ((byte)iVar10 & 0x1f);
  }
  else {
    iVar10 = 0;
  }
  iVar17 = 0;
  if (0 < *(int *)(param_1 + 0x11ec)) {
    do {
      sVar1 = *param_3;
      iVar17 = iVar17 + 1;
      param_3 = param_3 + 1;
      *param_4 = (int)((ulonglong)((longlong)sVar1 * (longlong)((iVar10 >> 4) + 1 >> 1)) >> 0x10);
      param_4 = param_4 + 1;
    } while (iVar17 < *(int *)(param_1 + 0x11ec));
  }
  if (*(int *)(param_2 + 0x10fc) != 0) {
    if (param_7 == 0) {
      iVar10 = (int)((ulonglong)((longlong)iVar10 * (longlong)param_8) >> 0x10) << 2;
    }
    iVar17 = (*(int *)(param_2 + 0x10ec) - iVar5) + -2;
    if (iVar17 < *(int *)(param_2 + 0x10ec)) {
      puVar12 = (undefined4 *)(param_6 + (longlong)iVar17 * 4);
      psVar14 = (short *)(param_5 + (longlong)iVar17 * 2);
      do {
        sVar1 = *psVar14;
        iVar17 = iVar17 + 1;
        psVar14 = psVar14 + 1;
        *puVar12 = (int)((ulonglong)((longlong)sVar1 * (longlong)iVar10) >> 0x10);
        puVar12 = puVar12 + 1;
      } while (iVar17 < *(int *)(param_2 + 0x10ec));
    }
  }
  uVar15 = *(uint *)(param_9 + lVar9 * 4);
  uVar2 = *(uint *)(param_2 + 0x10f8);
  if (uVar15 != uVar2) {
    uVar3 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    if (uVar3 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      iVar10 = 0x1f - iVar10;
    }
    iVar17 = uVar2 << ((byte)(iVar10 + -1) & 0x1f);
    uVar2 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
    if (uVar2 == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar16 == 0; iVar16 = iVar16 + -1) {
        }
      }
      iVar16 = 0x1f - iVar16;
    }
    iVar11 = uVar15 << ((byte)(iVar16 + -1) & 0x1f);
    lVar8 = (longlong)(short)(0x1fffffff / (longlong)(iVar11 >> 0x10));
    iVar7 = (int)((ulonglong)(iVar17 * lVar8) >> 0x10);
    iVar7 = iVar7 + (int)((ulonglong)
                          ((iVar17 + (int)((ulonglong)((longlong)iVar7 * (longlong)iVar11) >> 0x20)
                                     * -8) * lVar8) >> 0x10);
    iVar10 = ((iVar10 + -1) - (iVar16 + -1)) + 0xd;
    if (iVar10 < 0) {
      bVar4 = -(byte)iVar10;
      iVar11 = -0x80000000 >> (bVar4 & 0x1f);
      iVar16 = 0x7fffffff >> (bVar4 & 0x1f);
      iVar17 = iVar7;
      if (iVar7 < iVar16) {
        iVar17 = iVar16;
      }
      iVar10 = iVar7;
      if (iVar7 < iVar11) {
        iVar10 = iVar11;
      }
      if (iVar11 < iVar7) {
        iVar17 = iVar11;
      }
      if (iVar16 < iVar7) {
        iVar10 = iVar16;
      }
      if (iVar16 < iVar11) {
        iVar10 = iVar17;
      }
      iVar10 = iVar10 << (bVar4 & 0x1f);
    }
    else if (iVar10 < 0x20) {
      iVar10 = iVar7 >> ((byte)iVar10 & 0x1f);
    }
    else {
      iVar10 = 0;
    }
    iVar17 = *(int *)(param_2 + 0x10f0) - *(int *)(param_1 + 0x11f0);
    lVar8 = (longlong)iVar10;
    if (iVar17 < *(int *)(param_2 + 0x10f0)) {
      piVar6 = (int *)(param_2 + ((longlong)iVar17 + 0x140) * 4);
      do {
        iVar17 = iVar17 + 1;
        *piVar6 = (int)((ulonglong)(*piVar6 * lVar8) >> 0x10);
        piVar6 = piVar6 + 1;
      } while (iVar17 < *(int *)(param_2 + 0x10f0));
    }
    if (((param_11 == 2) && (*(int *)(param_2 + 0x10fc) == 0)) &&
       (iVar5 = (*(int *)(param_2 + 0x10ec) - iVar5) + -2, iVar5 < *(int *)(param_2 + 0x10ec))) {
      piVar6 = (int *)(param_6 + (longlong)iVar5 * 4);
      do {
        iVar5 = iVar5 + 1;
        *piVar6 = (int)((ulonglong)(*piVar6 * lVar8) >> 0x10);
        piVar6 = piVar6 + 1;
      } while (iVar5 < *(int *)(param_2 + 0x10ec));
    }
    piVar6 = (int *)(param_2 + 0xf00);
    lVar13 = 0x10;
    *(int *)(param_2 + 0x10e0) = (int)((ulonglong)(*(int *)(param_2 + 0x10e0) * lVar8) >> 0x10);
    *(int *)(param_2 + 0x10e4) = (int)((ulonglong)(*(int *)(param_2 + 0x10e4) * lVar8) >> 0x10);
    do {
      *piVar6 = (int)((ulonglong)(*piVar6 * lVar8) >> 0x10);
      piVar6 = piVar6 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    piVar6 = (int *)(param_2 + 0x1080);
    lVar13 = 0x18;
    do {
      *piVar6 = (int)((ulonglong)(*piVar6 * lVar8) >> 0x10);
      piVar6 = piVar6 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    *(undefined4 *)(param_2 + 0x10f8) = *(undefined4 *)(param_9 + lVar9 * 4);
  }
  return;
}



// FUNCTION 1455e1e0c FUN_1455e1e0c body=2665 status=ok
// SIG undefined FUN_1455e1e0c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455e1e0c(longlong param_1,void *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6,longlong param_7,longlong param_8,longlong param_9,
                  longlong param_10,longlong param_11,longlong param_12,int *param_13,
                  undefined4 param_14,undefined4 param_15)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  size_t _Size;
  undefined2 *puVar20;
  int *piVar21;
  int *piVar22;
  longlong lVar23;
  void *pvVar24;
  int iVar25;
  char *pcVar26;
  char *_Dst;
  undefined8 auStack_260 [5];
  longlong lStack_238;
  longlong alStack_230 [2];
  uint auStack_220 [2];
  longlong lStack_218;
  longlong alStack_210 [2];
  int aiStack_200 [16];
  undefined8 local_1c0;
  undefined4 local_1b8 [8];
  longlong local_198;
  int local_190 [6];
  undefined1 local_178 [160];
  char local_d8 [4];
  uint local_d4;
  int local_d0;
  int local_c8;
  int iStack_c4;
  longlong lStack_c0;
  uint local_b8;
  int iStack_b4;
  uint uStack_b0;
  longlong local_a8;
  int *piStack_a0;
  longlong local_98;
  char *pcStack_90;
  longlong local_88;
  char *local_80;
  char *local_78;
  void *local_70;
  longlong local_68;
  char *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)local_d8;
  iVar25 = *(int *)((longlong)param_2 + 0x10e8);
  _Size = (longlong)*(int *)(param_1 + 0x1214) * 0x514;
  uVar9 = _Size + 0xf;
  if (uVar9 <= _Size) {
    uVar9 = 0xffffffffffffff0;
  }
  local_1c0 = 0x1455e1e98;
  lVar2 = -(uVar9 & 0xfffffffffffffff0);
  _Dst = local_d8 + lVar2;
  local_c8 = iVar25;
  local_a8 = param_4;
  local_98 = param_3;
  local_68 = param_1;
  local_60 = _Dst;
  *(undefined8 *)((longlong)local_1b8 + lVar2 + -8) = 0x1455e1eb1;
  memset(_Dst,0,_Size);
  iVar19 = 0;
  if (0 < *(int *)(param_1 + 0x1214)) {
    puVar16 = (uint *)(&stack0x00000434 + lVar2);
    do {
      cVar1 = *(char *)(param_3 + 0x22);
      puVar16[1] = 0;
      uVar6 = cVar1 + iVar19 & 3;
      iVar19 = iVar19 + 1;
      puVar16[-1] = uVar6;
      *puVar16 = uVar6;
      puVar16[-3] = *(uint *)((longlong)param_2 + 0x10e0);
      puVar16[-2] = *(uint *)((longlong)param_2 + 0x10e4);
      puVar16[-0x43] =
           *(uint *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x11f0) * 4 + 0x4fc);
      uVar5 = *(undefined8 *)((longlong)param_2 + 0xf08);
      *(undefined8 *)(puVar16 + -0x143) = *(undefined8 *)((longlong)param_2 + 0xf00);
      *(undefined8 *)(puVar16 + -0x141) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0xf18);
      *(undefined8 *)(puVar16 + -0x13f) = *(undefined8 *)((longlong)param_2 + 0xf10);
      *(undefined8 *)(puVar16 + -0x13d) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0xf28);
      *(undefined8 *)(puVar16 + -0x13b) = *(undefined8 *)((longlong)param_2 + 0xf20);
      *(undefined8 *)(puVar16 + -0x139) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0xf38);
      *(undefined8 *)(puVar16 + -0x137) = *(undefined8 *)((longlong)param_2 + 0xf30);
      *(undefined8 *)(puVar16 + -0x135) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x1088);
      *(undefined8 *)(puVar16 + -0x1b) = *(undefined8 *)((longlong)param_2 + 0x1080);
      *(undefined8 *)(puVar16 + -0x19) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x1098);
      *(undefined8 *)(puVar16 + -0x17) = *(undefined8 *)((longlong)param_2 + 0x1090);
      *(undefined8 *)(puVar16 + -0x15) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x10a8);
      *(undefined8 *)(puVar16 + -0x13) = *(undefined8 *)((longlong)param_2 + 0x10a0);
      *(undefined8 *)(puVar16 + -0x11) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x10b8);
      *(undefined8 *)(puVar16 + -0xf) = *(undefined8 *)((longlong)param_2 + 0x10b0);
      *(undefined8 *)(puVar16 + -0xd) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x10c8);
      *(undefined8 *)(puVar16 + -0xb) = *(undefined8 *)((longlong)param_2 + 0x10c0);
      *(undefined8 *)(puVar16 + -9) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x10d8);
      *(undefined8 *)(puVar16 + -7) = *(undefined8 *)((longlong)param_2 + 0x10d0);
      *(undefined8 *)(puVar16 + -5) = uVar5;
      puVar16 = puVar16 + 0x145;
    } while (iVar19 < *(int *)(param_1 + 0x1214));
  }
  iVar19 = 0;
  iVar13 = *(int *)(param_1 + 0x11ec);
  iStack_c4 = 0;
  iStack_b4 = (int)*(short *)(&DAT_149d32c78 +
                             ((longlong)*(char *)(param_3 + 0x1e) +
                             ((longlong)*(char *)(param_3 + 0x1d) >> 1) * 2) * 2);
  iVar7 = iVar13;
  if (0x28 < iVar13) {
    iVar7 = 0x28;
  }
  iVar18 = iVar7;
  if (*(char *)(param_3 + 0x1d) == '\x02') {
    if (0 < (longlong)*(int *)(param_1 + 0x11e4)) {
      lVar15 = 0;
      do {
        iVar25 = param_13[lVar15] + -3;
        if (iVar7 < param_13[lVar15] + -3) {
          iVar25 = iVar7;
        }
        iVar7 = iVar25;
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_1 + 0x11e4));
      iVar13 = *(int *)(param_1 + 0x11ec);
      iVar18 = iVar7;
    }
  }
  else if ((0 < iVar25) && (iVar18 = iVar25 + -3, iVar7 < iVar25 + -3)) {
    iVar18 = iVar7;
  }
  iVar25 = *(int *)(param_1 + 0x11f0);
  local_d8[0] = *(char *)(param_3 + 0x1f);
  lVar15 = (longlong)(*(int *)(param_1 + 0x11e8) + iVar25);
  uVar10 = lVar15 * 4;
  uVar9 = uVar10 + 0xf;
  if (uVar9 <= uVar10) {
    uVar9 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)local_1b8 + lVar2 + -8) = 0x1455e2073;
  lVar3 = -(uVar9 & 0xfffffffffffffff0);
  local_80 = local_d8 + lVar3 + lVar2;
  uVar10 = lVar15 * 2;
  uVar9 = uVar10 + 0xf;
  if (uVar9 <= uVar10) {
    uVar9 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)local_1b8 + lVar3 + lVar2 + -8) = 0x1455e209e;
  lVar15 = -(uVar9 & 0xfffffffffffffff0);
  pcStack_90 = local_d8 + lVar15 + lVar3 + lVar2;
  uVar9 = (longlong)iVar13 * 4 + 0xf;
  if (uVar9 <= (ulonglong)((longlong)iVar13 * 4)) {
    uVar9 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)local_1b8 + lVar15 + lVar3 + lVar2 + -8) = 0x1455e20cc;
  lVar4 = -(uVar9 & 0xfffffffffffffff0);
  local_78 = local_d8 + lVar4 + lVar15 + lVar3 + lVar2;
  local_40 = local_178 + lVar4 + lVar15 + lVar3 + lVar2;
  local_d0 = 0;
  pvVar24 = (void *)((longlong)param_2 + (longlong)iVar25 * 2);
  *(int *)((longlong)param_2 + 0x10f0) = iVar25;
  *(undefined4 *)((longlong)param_2 + 0x10ec) = *(undefined4 *)(param_1 + 0x11f0);
  local_70 = pvVar24;
  local_d4 = 0;
  if (*(int *)(param_1 + 0x11e4) < 1) {
    lStack_c0 = param_5;
  }
  else {
    lStack_c0 = param_5;
    local_b8 = (uint)(local_d8[0] == '\x04');
    local_58 = param_12 - (longlong)param_13;
    piStack_a0 = param_13;
    pcVar26 = _Dst;
    iVar25 = 0;
    do {
      local_88 = param_6 + (longlong)(int)(((int)local_d4 >> 1 | local_b8) << 4) * 2;
      local_48 = param_7 + (longlong)(int)(local_d4 * 5) * 2;
      local_50 = param_8 + (longlong)(int)(local_d4 * 0x18) * 2;
      iVar19 = *(int *)((param_9 - (longlong)param_13) + (longlong)piStack_a0);
      *(undefined4 *)((longlong)param_2 + 0x10fc) = 0;
      uStack_b0 = (iVar19 >> 1) << 0x10 | iVar19 >> 2;
      _Dst = pcVar26;
      lStack_c0 = param_5;
      local_70 = pvVar24;
      if (*(char *)(local_98 + 0x1d) == '\x02') {
        local_c8 = *piStack_a0;
        uVar6 = 3;
        if (local_d8[0] != '\x04') {
          uVar6 = 1;
        }
        if ((local_d4 & uVar6) == 0) {
          if (local_d4 == 2) {
            iVar19 = *(int *)(param_1 + 0x1214);
            piVar21 = (int *)(pcVar26 + 0x510);
            iVar13 = *piVar21;
            lVar12 = 0;
            if (1 < iVar19) {
              uVar9 = (ulonglong)(iVar19 - 1);
              lVar11 = 1;
              piVar22 = (int *)(pcVar26 + 0xa24);
              do {
                iVar19 = *piVar22;
                piVar22 = piVar22 + 0x145;
                lVar23 = lVar11;
                if (iVar13 <= iVar19) {
                  iVar19 = iVar13;
                  lVar23 = lVar12;
                }
                lVar12 = lVar23;
                iVar13 = iVar19;
                lVar11 = lVar11 + 1;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
              iVar19 = *(int *)(param_1 + 0x1214);
            }
            lVar23 = (longlong)iVar18;
            iVar13 = 0;
            lVar11 = 0;
            if (0 < iVar19) {
              do {
                if (lVar11 != lVar12) {
                  *piVar21 = *piVar21 + 0x7ffffff;
                }
                iVar13 = iVar13 + 1;
                lVar11 = lVar11 + 1;
                piVar21 = piVar21 + 0x145;
              } while (iVar13 < *(int *)(param_1 + 0x1214));
            }
            local_d0 = iVar18 + iVar25;
            lVar11 = 0;
            iVar25 = 0;
            if (0 < lVar23) {
              puVar20 = (undefined2 *)((longlong)pvVar24 + lVar23 * -2);
              do {
                iVar19 = (local_d0 + -1) % 0x28;
                local_d0 = iVar19 + 0x28;
                if (-1 < iVar19) {
                  local_d0 = iVar19;
                }
                lVar17 = (longlong)local_d0;
                *(char *)((param_5 - lVar23) + lVar11) =
                     (char)((*(int *)(pcVar26 + lVar17 * 4 + lVar12 * 0x514 + 0x220) >> 9) + 1 >> 1)
                ;
                iVar13 = ((int)((ulonglong)
                                ((longlong)*(int *)(pcVar26 + lVar17 * 4 + lVar12 * 0x514 + 0x2c0) *
                                (longlong)*(int *)(param_12 + 4)) >> 0x10) >> 0xd) + 1 >> 1;
                iVar19 = 0x7fff;
                if ((iVar13 < 0x8000) && (iVar19 = iVar13, iVar13 < -0x8000)) {
                  iVar19 = -0x8000;
                }
                *puVar20 = (short)iVar19;
                lVar11 = lVar11 + 1;
                puVar20 = puVar20 + 1;
                iVar19 = (*(int *)((longlong)param_2 + 0x10f0) - iVar18) + iVar25;
                iVar25 = iVar25 + 1;
                *(undefined4 *)((longlong)param_2 + (longlong)iVar19 * 4 + 0x500) =
                     *(undefined4 *)(pcVar26 + lVar17 * 4 + lVar12 * 0x514 + 0x400);
                param_1 = local_68;
                _Dst = local_60;
              } while (lVar11 < lVar23);
            }
            local_d0 = 0;
          }
          iVar25 = *(int *)(param_1 + 0x11f0);
          iVar19 = *(int *)(param_1 + 0x1220);
          iVar13 = ((iVar25 - iVar19) - local_c8) + -2;
          if (iVar13 < 1) {
            *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x1455e23d1;
            FUN_144bca940("assertion failed: start_idx > 0",
                          "../../../third_party/opus/src/silk/NSQ_del_dec.c",0xfd);
            iVar19 = *(int *)(param_1 + 0x1220);
            iVar25 = *(int *)(param_1 + 0x11f0);
          }
          iVar7 = local_d4 * *(int *)(param_1 + 0x11ec);
          pcVar26 = pcStack_90 + (longlong)iVar13 * 2;
          *(undefined4 *)((longlong)alStack_230 + lVar4 + lVar15 + lVar3 + lVar2) =
               *(undefined4 *)(param_1 + 0x13f4);
          *(int *)((longlong)&lStack_238 + lVar4 + lVar15 + lVar3 + lVar2) = iVar19;
          lVar12 = local_88;
          *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x1455e2418;
          FUN_1455dd2cc(pcVar26,(void *)((longlong)param_2 + (longlong)(iVar7 + iVar13) * 2),lVar12,
                        iVar25 - iVar13);
          *(undefined4 *)((longlong)param_2 + 0x10ec) = *(undefined4 *)(param_1 + 0x11f0);
          *(undefined4 *)((longlong)param_2 + 0x10fc) = 1;
        }
      }
      lVar11 = local_98;
      lVar12 = local_a8;
      uVar6 = local_d4;
      *(int *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x10) = iVar18;
      *(int *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 8) =
           (int)*(char *)(lVar11 + 0x1d);
      *(int **)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2) = param_13;
      *(longlong *)((longlong)alStack_210 + lVar4 + lVar15 + lVar3 + lVar2 + 8) = param_12;
      *(undefined4 *)((longlong)alStack_210 + lVar4 + lVar15 + lVar3 + lVar2) = param_15;
      *(undefined4 *)((longlong)&lStack_218 + lVar4 + lVar15 + lVar3 + lVar2) =
           *(undefined4 *)(param_1 + 0x1214);
      pcVar26 = local_80;
      *(uint *)((longlong)auStack_220 + lVar4 + lVar15 + lVar3 + lVar2) = uVar6;
      *(char **)((longlong)alStack_230 + lVar4 + lVar15 + lVar3 + lVar2 + 8) = pcVar26;
      *(char **)((longlong)alStack_230 + lVar4 + lVar15 + lVar3 + lVar2) = pcStack_90;
      *(char **)((longlong)&lStack_238 + lVar4 + lVar15 + lVar3 + lVar2) = local_78;
      *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x1455e249f;
      FUN_1455e289c(param_1,param_2,_Dst,lVar12);
      piVar21 = piStack_a0;
      *(undefined4 *)((longlong)local_190 + lVar4 + lVar15 + lVar3 + lVar2 + 8) =
           *(undefined4 *)(param_1 + 0x13f4);
      pcVar26 = local_78;
      cVar1 = *(char *)(lVar11 + 0x1d);
      *(int *)((longlong)local_190 + lVar4 + lVar15 + lVar3 + lVar2) = iVar18;
      *(int **)((longlong)&local_198 + lVar4 + lVar15 + lVar3 + lVar2) = &iStack_c4;
      *(undefined4 *)((longlong)local_1b8 + lVar4 + lVar15 + lVar3 + lVar2 + 0x18) =
           *(undefined4 *)(param_1 + 0x1214);
      *(undefined4 *)((longlong)local_1b8 + lVar4 + lVar15 + lVar3 + lVar2 + 0x10) =
           *(undefined4 *)(param_1 + 0x1240);
      *(undefined4 *)((longlong)local_1b8 + lVar4 + lVar15 + lVar3 + lVar2 + 8) =
           *(undefined4 *)(param_1 + 0x1220);
      *(undefined4 *)((longlong)local_1b8 + lVar4 + lVar15 + lVar3 + lVar2) =
           *(undefined4 *)(param_1 + 0x121c);
      *(int *)((longlong)local_1b8 + lVar4 + lVar15 + lVar3 + lVar2 + -8) = local_d0;
      *(undefined4 *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x38) =
           *(undefined4 *)(param_1 + 0x11ec);
      *(int *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x30) = iStack_b4;
      *(undefined4 *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x28) = param_14;
      *(undefined4 *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x20) =
           *(undefined4 *)(local_58 + (longlong)piVar21);
      *(undefined4 *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x18) =
           *(undefined4 *)((param_11 - (longlong)param_13) + (longlong)piVar21);
      *(undefined4 *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x10) =
           *(undefined4 *)((param_10 - (longlong)param_13) + (longlong)piVar21);
      *(uint *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 8) = uStack_b0;
      *(int *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2) = local_c8;
      *(longlong *)((longlong)alStack_210 + lVar4 + lVar15 + lVar3 + lVar2 + 8) = local_50;
      *(longlong *)((longlong)alStack_210 + lVar4 + lVar15 + lVar3 + lVar2) = local_48;
      *(longlong *)((longlong)&lStack_218 + lVar4 + lVar15 + lVar3 + lVar2) = local_88;
      *(undefined1 **)((longlong)auStack_220 + lVar4 + lVar15 + lVar3 + lVar2) = local_40;
      *(char **)((longlong)alStack_230 + lVar4 + lVar15 + lVar3 + lVar2 + 8) = local_80;
      lVar12 = lStack_c0;
      *(void **)((longlong)alStack_230 + lVar4 + lVar15 + lVar3 + lVar2) = pvVar24;
      *(longlong *)((longlong)&lStack_238 + lVar4 + lVar15 + lVar3 + lVar2) = lVar12;
      *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x1455e25b5;
      FUN_1455e2ccc(param_2,_Dst,(int)cVar1,pcVar26);
      local_d0 = local_d0 + 1;
      lVar12 = (longlong)*(int *)(param_1 + 0x11ec) * 2;
      pvVar24 = (void *)((longlong)pvVar24 + lVar12);
      local_d4 = local_d4 + 1;
      local_a8 = local_a8 + lVar12;
      piStack_a0 = piStack_a0 + 1;
      param_5 = lStack_c0 + *(int *)(param_1 + 0x11ec);
      lStack_c0 = param_5;
      local_70 = pvVar24;
      pcVar26 = _Dst;
      iVar19 = iStack_c4;
      iVar25 = iStack_c4;
    } while ((int)local_d4 < *(int *)(param_1 + 0x11e4));
  }
  lVar12 = (longlong)iVar18;
  iVar7 = 0;
  iVar25 = *(int *)(_Dst + 0x510);
  iVar13 = 1;
  if (1 < *(int *)(param_1 + 0x1214)) {
    piVar21 = (int *)(_Dst + 0xa24);
    iVar7 = 0;
    do {
      iVar14 = *piVar21;
      piVar21 = piVar21 + 0x145;
      iVar8 = iVar13;
      if (iVar25 <= iVar14) {
        iVar14 = iVar25;
        iVar8 = iVar7;
      }
      iVar7 = iVar8;
      iVar25 = iVar14;
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(param_1 + 0x1214));
  }
  iVar19 = iVar18 + iVar19;
  iVar13 = 0;
  *(char *)(local_98 + 0x22) = _Dst[(longlong)iVar7 * 0x514 + 0x50c];
  iVar25 = *(int *)(param_12 + -4 + (longlong)*(int *)(param_1 + 0x11e4) * 4);
  if (0 < lVar12) {
    puVar20 = (undefined2 *)((longlong)pvVar24 + lVar12 * -2);
    lVar11 = 0;
    do {
      iVar14 = (iVar19 + -1) % 0x28;
      iVar19 = iVar14 + 0x28;
      if (-1 < iVar14) {
        iVar19 = iVar14;
      }
      lVar23 = (longlong)iVar19;
      *(char *)((lStack_c0 - lVar12) + lVar11) =
           (char)((*(int *)(_Dst + lVar23 * 4 + (longlong)iVar7 * 0x514 + 0x220) >> 9) + 1 >> 1);
      iVar8 = ((int)((ulonglong)
                     ((longlong)*(int *)(_Dst + lVar23 * 4 + (longlong)iVar7 * 0x514 + 0x2c0) *
                     (longlong)(iVar25 >> 6)) >> 0x10) >> 7) + 1 >> 1;
      iVar14 = 0x7fff;
      if ((iVar8 < 0x8000) && (iVar14 = iVar8, iVar8 < -0x8000)) {
        iVar14 = -0x8000;
      }
      *puVar20 = (short)iVar14;
      lVar11 = lVar11 + 1;
      puVar20 = puVar20 + 1;
      iVar14 = (*(int *)((longlong)param_2 + 0x10f0) - iVar18) + iVar13;
      iVar13 = iVar13 + 1;
      *(undefined4 *)((longlong)param_2 + (longlong)iVar14 * 4 + 0x500) =
           *(undefined4 *)(_Dst + lVar23 * 4 + (longlong)iVar7 * 0x514 + 0x400);
      param_1 = local_68;
    } while (lVar11 < lVar12);
  }
  lVar12 = (longlong)*(int *)(param_1 + 0x11ec);
  uVar5 = *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 8);
  *(undefined8 *)((longlong)param_2 + 0xf00) =
       *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514);
  *(undefined8 *)((longlong)param_2 + 0xf08) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x10 + 8);
  *(undefined8 *)((longlong)param_2 + 0xf10) =
       *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x10);
  *(undefined8 *)((longlong)param_2 + 0xf18) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x20 + 8);
  *(undefined8 *)((longlong)param_2 + 0xf20) =
       *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x20);
  *(undefined8 *)((longlong)param_2 + 0xf28) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x30 + 8);
  *(undefined8 *)((longlong)param_2 + 0xf30) =
       *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x30);
  *(undefined8 *)((longlong)param_2 + 0xf38) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4a8);
  *(undefined8 *)((longlong)param_2 + 0x1080) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4a0);
  *(undefined8 *)((longlong)param_2 + 0x1088) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4b8);
  *(undefined8 *)((longlong)param_2 + 0x1090) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4b0);
  *(undefined8 *)((longlong)param_2 + 0x1098) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4c8);
  *(undefined8 *)((longlong)param_2 + 0x10a0) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4c0);
  *(undefined8 *)((longlong)param_2 + 0x10a8) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4d8);
  *(undefined8 *)((longlong)param_2 + 0x10b0) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4d0);
  *(undefined8 *)((longlong)param_2 + 0x10b8) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4e8);
  *(undefined8 *)((longlong)param_2 + 0x10c0) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4e0);
  *(undefined8 *)((longlong)param_2 + 0x10c8) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4f8);
  *(undefined8 *)((longlong)param_2 + 0x10d0) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4f0);
  *(undefined8 *)((longlong)param_2 + 0x10d8) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x10e0) =
       *(undefined4 *)(_Dst + (longlong)iVar7 * 0x514 + 0x500);
  *(undefined4 *)((longlong)param_2 + 0x10e4) =
       *(undefined4 *)(_Dst + (longlong)iVar7 * 0x514 + 0x504);
  *(int *)((longlong)param_2 + 0x10e8) = param_13[(longlong)*(int *)(param_1 + 0x11e4) + -1];
  iVar25 = *(int *)(param_1 + 0x11e8);
  iVar19 = *(int *)(param_1 + 0x11f0);
  local_70 = pvVar24;
  *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x1455e283e;
  memmove(param_2,(void *)((longlong)param_2 + (longlong)iVar25 * 2),(longlong)iVar19 * 2);
  iVar25 = *(int *)(param_1 + 0x11e8);
  iVar19 = *(int *)(param_1 + 0x11f0);
  *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x1455e2866;
  memmove((void *)((longlong)param_2 + 0x500),
          (void *)((longlong)param_2 + ((longlong)iVar25 + 0x140) * 4),(longlong)iVar19 << 2);
  uVar9 = local_38 ^ (ulonglong)local_d8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = &UNK_1455e2875;
  FUN_144d8e3a0(uVar9);
}



// FUNCTION 1455e289c FUN_1455e289c body=1071 status=ok
// SIG undefined FUN_1455e289c(void)

void FUN_1455e289c(longlong param_1,longlong param_2,longlong param_3,short *param_4,
                  undefined4 *param_5,longlong param_6,longlong param_7,int param_8,int param_9,
                  short param_10,longlong param_11,longlong param_12,int param_13,int param_14)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int *piVar15;
  short *psVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  
  lVar10 = (longlong)param_8;
  iVar6 = *(int *)(param_12 + lVar10 * 4);
  uVar4 = 1;
  if (1 < *(int *)(param_11 + lVar10 * 4)) {
    uVar4 = *(uint *)(param_11 + lVar10 * 4);
  }
  uVar2 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  if (uVar2 == 0) {
    iVar11 = 0x20;
  }
  else {
    iVar11 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar11 = 0x1f - iVar11;
  }
  iVar18 = uVar4 << ((byte)(iVar11 + -1) & 0x1f);
  lVar9 = 0x1fffffff / (longlong)(iVar18 >> 0x10);
  iVar19 = (int)lVar9;
  iVar11 = 0xe - (iVar11 + -1);
  iVar19 = (int)((ulonglong)
                 ((longlong)
                  ((int)((ulonglong)((longlong)iVar18 * (longlong)(short)lVar9) >> 0x10) * -8) *
                 (longlong)iVar19) >> 0x10) + iVar19 * 0x10000;
  if (iVar11 < 1) {
    bVar5 = -(byte)iVar11;
    iVar12 = -0x80000000 >> (bVar5 & 0x1f);
    iVar8 = 0x7fffffff >> (bVar5 & 0x1f);
    iVar18 = iVar19;
    if (iVar19 < iVar8) {
      iVar18 = iVar8;
    }
    iVar11 = iVar19;
    if (iVar19 < iVar12) {
      iVar11 = iVar12;
    }
    if (iVar12 < iVar19) {
      iVar18 = iVar12;
    }
    if (iVar8 < iVar19) {
      iVar11 = iVar8;
    }
    if (iVar8 < iVar12) {
      iVar11 = iVar18;
    }
    iVar11 = iVar11 << (bVar5 & 0x1f);
  }
  else if (iVar11 < 0x20) {
    iVar11 = iVar19 >> ((byte)iVar11 & 0x1f);
  }
  else {
    iVar11 = 0;
  }
  iVar19 = 0;
  if (0 < *(int *)(param_1 + 0x11ec)) {
    do {
      sVar1 = *param_4;
      iVar19 = iVar19 + 1;
      param_4 = param_4 + 1;
      *param_5 = (int)((ulonglong)((longlong)sVar1 * (longlong)((iVar11 >> 4) + 1 >> 1)) >> 0x10);
      param_5 = param_5 + 1;
    } while (iVar19 < *(int *)(param_1 + 0x11ec));
  }
  if (*(int *)(param_2 + 0x10fc) != 0) {
    if (param_8 == 0) {
      iVar11 = (int)((ulonglong)((longlong)iVar11 * (longlong)param_10) >> 0x10) << 2;
    }
    iVar19 = (*(int *)(param_2 + 0x10ec) - iVar6) + -2;
    if (iVar19 < *(int *)(param_2 + 0x10ec)) {
      puVar13 = (undefined4 *)(param_7 + (longlong)iVar19 * 4);
      psVar16 = (short *)(param_6 + (longlong)iVar19 * 2);
      do {
        sVar1 = *psVar16;
        iVar19 = iVar19 + 1;
        psVar16 = psVar16 + 1;
        *puVar13 = (int)((ulonglong)((longlong)sVar1 * (longlong)iVar11) >> 0x10);
        puVar13 = puVar13 + 1;
      } while (iVar19 < *(int *)(param_2 + 0x10ec));
    }
  }
  uVar4 = *(uint *)(param_2 + 0x10f8);
  uVar2 = *(uint *)(param_11 + lVar10 * 4);
  if (uVar2 != uVar4) {
    uVar3 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
    if (uVar3 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      iVar11 = 0x1f - iVar11;
    }
    iVar19 = uVar4 << ((byte)(iVar11 + -1) & 0x1f);
    uVar4 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    if (uVar4 == 0) {
      iVar18 = 0x20;
    }
    else {
      iVar18 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar18 == 0; iVar18 = iVar18 + -1) {
        }
      }
      iVar18 = 0x1f - iVar18;
    }
    iVar12 = uVar2 << ((byte)(iVar18 + -1) & 0x1f);
    lVar9 = (longlong)(short)(0x1fffffff / (longlong)(iVar12 >> 0x10));
    iVar8 = (int)((ulonglong)(iVar19 * lVar9) >> 0x10);
    iVar8 = iVar8 + (int)((ulonglong)
                          ((iVar19 + (int)((ulonglong)((longlong)iVar8 * (longlong)iVar12) >> 0x20)
                                     * -8) * lVar9) >> 0x10);
    iVar11 = ((iVar11 + -1) - (iVar18 + -1)) + 0xd;
    if (iVar11 < 0) {
      bVar5 = -(byte)iVar11;
      iVar18 = -0x80000000 >> (bVar5 & 0x1f);
      iVar12 = 0x7fffffff >> (bVar5 & 0x1f);
      iVar19 = iVar8;
      if (iVar8 < iVar12) {
        iVar19 = iVar12;
      }
      iVar11 = iVar8;
      if (iVar8 < iVar18) {
        iVar11 = iVar18;
      }
      if (iVar18 < iVar8) {
        iVar19 = iVar18;
      }
      if (iVar12 < iVar8) {
        iVar11 = iVar12;
      }
      if (iVar12 < iVar18) {
        iVar11 = iVar19;
      }
      iVar11 = iVar11 << (bVar5 & 0x1f);
    }
    else if (iVar11 < 0x20) {
      iVar11 = iVar8 >> ((byte)iVar11 & 0x1f);
    }
    else {
      iVar11 = 0;
    }
    iVar19 = *(int *)(param_2 + 0x10f0) - *(int *)(param_1 + 0x11f0);
    lVar9 = (longlong)iVar11;
    if (iVar19 < *(int *)(param_2 + 0x10f0)) {
      piVar7 = (int *)(param_2 + ((longlong)iVar19 + 0x140) * 4);
      do {
        iVar19 = iVar19 + 1;
        *piVar7 = (int)((ulonglong)(*piVar7 * lVar9) >> 0x10);
        piVar7 = piVar7 + 1;
      } while (iVar19 < *(int *)(param_2 + 0x10f0));
    }
    if (((param_13 == 2) && (*(int *)(param_2 + 0x10fc) == 0)) &&
       (iVar6 = (*(int *)(param_2 + 0x10ec) - iVar6) + -2,
       iVar6 < *(int *)(param_2 + 0x10ec) - param_14)) {
      piVar7 = (int *)(param_7 + (longlong)iVar6 * 4);
      do {
        iVar6 = iVar6 + 1;
        *piVar7 = (int)((ulonglong)(*piVar7 * lVar9) >> 0x10);
        piVar7 = piVar7 + 1;
      } while (iVar6 < *(int *)(param_2 + 0x10ec) - param_14);
    }
    lVar20 = (longlong)param_9;
    if (0 < lVar20) {
      piVar7 = (int *)(param_3 + 0x500);
      do {
        *piVar7 = (int)((ulonglong)(*piVar7 * lVar9) >> 0x10);
        piVar7[1] = (int)((ulonglong)(piVar7[1] * lVar9) >> 0x10);
        lVar14 = 0;
        do {
          piVar7[lVar14 + -0x140] = (int)((ulonglong)(piVar7[lVar14 + -0x140] * lVar9) >> 0x10);
          lVar14 = lVar14 + 1;
        } while (lVar14 < 0x10);
        piVar15 = piVar7 + -0x40;
        lVar14 = 0x18;
        piVar17 = piVar7 + -0x18;
        do {
          *piVar17 = (int)((ulonglong)(*piVar17 * lVar9) >> 0x10);
          piVar17 = piVar17 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        lVar14 = 0x28;
        do {
          piVar15[-0x28] = (int)((ulonglong)(piVar15[-0x28] * lVar9) >> 0x10);
          *piVar15 = (int)((ulonglong)(*piVar15 * lVar9) >> 0x10);
          piVar15 = piVar15 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        piVar7 = piVar7 + 0x145;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    *(undefined4 *)(param_2 + 0x10f8) = *(undefined4 *)(param_11 + lVar10 * 4);
  }
  return;
}



// FUNCTION 1455e2ccc FUN_1455e2ccc body=3503 status=ok
// SIG undefined FUN_1455e2ccc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455e2ccc(longlong param_1,undefined8 *param_2,int param_3,int *param_4,longlong param_5,
                  longlong param_6,longlong param_7,longlong param_8,short *param_9,short *param_10,
                  short *param_11,int param_12,int param_13,undefined4 param_14,int param_15,
                  int param_16,int param_17,int param_18,int param_19,int param_20,uint param_21,
                  int param_22,undefined4 param_23,uint param_24,int *param_25,int param_26)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  int *piVar22;
  longlong lVar23;
  ulonglong uVar24;
  int *piVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  size_t _Size;
  undefined4 *puVar30;
  short sVar31;
  int iVar32;
  short sVar33;
  int *piVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  undefined8 auStack_150 [5];
  int local_128;
  int local_124 [3];
  longlong local_118;
  int local_110;
  int local_10c;
  uint local_108;
  longlong local_100;
  int *local_f8;
  longlong local_f0;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  int local_d4;
  ulonglong local_d0;
  int local_c8;
  uint local_c4;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  int local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  int *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  longlong local_58;
  int *local_50;
  uint *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&local_128;
  uVar24 = (ulonglong)(int)param_24;
  local_e8 = param_3;
  local_f8 = param_4;
  local_68 = param_2;
  local_c0 = param_1;
  if ((int)param_24 < 1) {
    auStack_150[0] = 0x1455e2d48;
    FUN_144bca940("assertion failed: nStatesDelayedDecision > 0",
                  "../../../third_party/opus/src/silk/NSQ_del_dec.c",0x16c);
  }
  local_60 = uVar24;
  uVar17 = uVar24 * 0x38 + 0xf;
  if (uVar17 <= uVar24 * 0x38) {
    uVar17 = 0xffffffffffffff0;
  }
  auStack_150[0] = 0x1455e2d79;
  lVar5 = -(uVar17 & 0xfffffffffffffff0);
  local_124[1] = 0;
  local_f0 = (longlong)&local_128 + lVar5;
  local_48 = (uint *)(local_c0 +
                     ((longlong)((*(int *)(local_c0 + 0x10f0) - param_12) + 1) + 0x140) * 4);
  local_98 = param_16 >> 6;
  local_50 = (int *)(param_7 + (longlong)((*(int *)(local_c0 + 0x10ec) - param_12) + 2) * 4);
  uVar17 = uVar24;
  if (0 < param_19) {
    local_b8 = 0;
    local_b0 = 0;
    local_80 = (longlong)(int)param_21;
    local_70 = (int *)((longlong)local_124 + lVar5);
    local_118 = 0x4f4;
    local_a0 = (undefined1 *)(param_5 - param_26);
    local_c8 = 0x7fffffff;
    local_a8 = (undefined2 *)(param_6 + (longlong)param_26 * -2);
    local_58 = -0x4c4 - (longlong)param_4;
    local_40 = 0x1c - (longlong)param_4;
    local_e0 = param_23;
    local_d4 = param_18;
    local_10c = param_17;
    local_110 = param_15;
    local_d8 = param_14;
    local_e4 = param_13;
    do {
      if (local_e8 == 2) {
        piVar22 = local_50 + -4;
        piVar25 = local_50 + -3;
        piVar34 = local_50 + -2;
        piVar1 = local_50 + -1;
        iVar19 = *local_50;
        local_50 = local_50 + 1;
        local_124[0] = (int)((ulonglong)((longlong)*piVar25 * (longlong)param_10[3]) >> 0x10) * 2 +
                       (int)((ulonglong)((longlong)*piVar22 * (longlong)param_10[4]) >> 0x10) * 2 +
                       (int)((ulonglong)((longlong)*piVar34 * (longlong)param_10[2]) >> 0x10) * 2 +
                       (int)((ulonglong)((longlong)*piVar1 * (longlong)param_10[1]) >> 0x10) * 2 +
                       ((int)((ulonglong)((longlong)iVar19 * (longlong)*param_10) >> 0x10) + 2) * 2;
      }
      else {
        local_124[0] = 0;
      }
      if (param_12 < 1) {
        local_128 = 0;
      }
      else {
        uVar36 = local_48[-2];
        uVar29 = *local_48;
        iVar19 = uVar29 + uVar36;
        if (iVar19 < 0) {
          if (-1 < (int)(uVar29 | uVar36)) {
            iVar19 = 0x7fffffff;
          }
        }
        else if ((int)(uVar36 & uVar29) < 0) {
          iVar19 = -0x80000000;
        }
        local_128 = local_124[0] +
                    (int)((ulonglong)((longlong)(int)local_48[-1] * ((longlong)local_e4 >> 0x10)) >>
                         0x10) * -4 +
                    (int)((ulonglong)((longlong)(short)local_e4 * (longlong)iVar19) >> 0x10) * -4;
        local_48 = local_48 + 1;
      }
      uVar36 = (uint)uVar24;
      if (0 < (longlong)uVar17) {
        local_100 = (longlong)(short)local_e0;
        piVar25 = (int *)((longlong)param_2 + (longlong)param_4 + local_58 + 0x4e0);
        local_dc = (int)param_21 >> 1;
        local_90 = (longlong)local_110 >> 0x10;
        local_88 = (longlong)param_4 + (local_58 - (local_40 + (longlong)param_4));
        local_124[2] = param_22 >> 1;
        local_c4 = param_21 & 1;
        local_38 = (local_80 * 4 + 0x49c) - (local_40 + (longlong)param_4);
        piVar22 = local_70;
        iVar19 = local_128;
        local_78 = uVar17;
        do {
          lVar12 = local_100;
          *(int *)(local_118 + -8 + (longlong)piVar25) =
               *(int *)(local_118 + -8 + (longlong)piVar25) * 0xbb38435 + 0x3619636b;
          iVar35 = (int)((ulonglong)((longlong)*piVar25 * (longlong)param_9[8]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[1] * (longlong)param_9[7]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[3] * (longlong)param_9[5]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[5] * (longlong)param_9[3]) >> 0x10) +
                   (int)((ulonglong)
                         ((longlong)*(int *)(local_88 + 0x500 + (longlong)piVar25) *
                         (longlong)*param_9) >> 0x10) +
                   local_124[2] +
                   (int)((ulonglong)((longlong)piVar25[7] * (longlong)param_9[1]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[6] * (longlong)param_9[2]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[4] * (longlong)param_9[4]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[2] * (longlong)param_9[6]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[-1] * (longlong)param_9[9]) >> 0x10);
          if (param_22 == 0x10) {
            iVar35 = (int)((ulonglong)((longlong)piVar25[-3] * (longlong)param_9[0xb]) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar25[-5] * (longlong)param_9[0xd]) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar25[-7] * (longlong)param_9[0xf]) >> 0x10) +
                     iVar35 + (int)((ulonglong)((longlong)piVar25[-6] * (longlong)param_9[0xe]) >>
                                   0x10) +
                     (int)((ulonglong)((longlong)piVar25[-4] * (longlong)param_9[0xc]) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar25[-2] * (longlong)param_9[10]) >> 0x10);
          }
          uVar36 = iVar35 << 4;
          local_d0 = (ulonglong)uVar36;
          if (local_c4 != 0) {
            *(undefined8 *)((longlong)auStack_150 + lVar5) = 0x1455e31cd;
            FUN_144bca940("assertion failed: ( shapingLPCOrder & 1 ) == 0",
                          "../../../third_party/opus/src/silk/NSQ_del_dec.c",0x1a6);
          }
          piVar34 = (int *)((longlong)piVar25 + local_118 + -0x6c);
          iVar35 = *piVar34;
          iVar14 = (int)((ulonglong)(*(int *)(local_118 + -0x70 + (longlong)piVar25) * lVar12) >>
                        0x10) + *(int *)(local_118 + -0xc + (longlong)piVar25);
          iVar32 = (int)((ulonglong)((iVar35 - iVar14) * lVar12) >> 0x10) +
                   *(int *)(local_118 + -0x70 + (longlong)piVar25);
          *(int *)(local_118 + -0x70 + (longlong)piVar25) = iVar14;
          iVar14 = (int)((ulonglong)((longlong)*param_11 * (longlong)iVar14) >> 0x10) + local_dc;
          if (2 < (int)param_21) {
            uVar24 = (ulonglong)((param_21 - 3 >> 1) + 1);
            psVar6 = param_11;
            do {
              *piVar34 = iVar32;
              piVar1 = piVar34 + 1;
              piVar34 = piVar34 + 2;
              sVar33 = psVar6[1];
              lVar12 = (longlong)iVar32;
              iVar19 = (int)((ulonglong)((*piVar1 - iVar32) * local_100) >> 0x10) + iVar35;
              iVar35 = *piVar34;
              iVar32 = (int)((ulonglong)((iVar35 - iVar19) * local_100) >> 0x10) + *piVar1;
              *piVar1 = iVar19;
              iVar14 = iVar14 + (int)((ulonglong)(sVar33 * lVar12) >> 0x10) +
                       (int)((ulonglong)((longlong)psVar6[2] * (longlong)iVar19) >> 0x10);
              uVar24 = uVar24 - 1;
              psVar6 = psVar6 + 2;
            } while (uVar24 != 0);
            uVar36 = (uint)local_d0;
            iVar19 = local_128;
          }
          *(int *)(local_38 + (longlong)piVar25) = iVar32;
          lVar12 = (longlong)*(int *)(local_118 + -0x10 + (longlong)piVar25);
          uVar29 = (int)((ulonglong)(lVar12 * (short)local_d8) >> 0x10) * 4 +
                   (int)((ulonglong)((longlong)iVar32 * (longlong)param_11[local_80 + -1]) >> 0x10)
                   * 8 + iVar14 * 8;
          local_108 = uVar29;
          uVar11 = (int)((ulonglong)(lVar12 * local_90) >> 0x10) * 4 +
                   (int)((ulonglong)
                         ((longlong)
                          *(int *)((longlong)piVar25 + (longlong)*param_25 * 4 + local_118 + -0x110)
                         * (longlong)(short)local_110) >> 0x10) * 4;
          local_d0 = CONCAT44(local_d0._4_4_,uVar11);
          uVar20 = uVar11 + uVar29;
          uVar15 = uVar20;
          if ((int)(uVar29 & uVar11) < 0) {
            uVar15 = 0x80000000;
          }
          uVar28 = uVar20;
          if (-1 < (int)(uVar11 | uVar29)) {
            uVar28 = 0x7fffffff;
          }
          if (-1 < (int)uVar20) {
            uVar28 = uVar15;
          }
          uVar15 = uVar36 + iVar19;
          iVar14 = uVar15 - uVar28;
          iVar35 = iVar14;
          if ((int)(uVar15 & ~uVar28) < 0) {
            iVar35 = -0x80000000;
          }
          iVar32 = iVar14;
          if ((int)(uVar28 & ~uVar15) < 0) {
            iVar32 = 0x7fffffff;
          }
          if (-1 < iVar14) {
            iVar32 = iVar35;
          }
          iVar14 = (iVar32 >> 3) + 1 >> 1;
          iVar35 = *local_f8 - iVar14;
          if (*(int *)((longlong)piVar25 + local_118 + -8) < 0) {
            iVar35 = iVar14 - *local_f8;
          }
          iVar14 = iVar35;
          if (iVar35 < -0x7c00) {
            iVar14 = -0x7c00;
          }
          if (0x7800 < iVar35) {
            iVar14 = 0x7800;
          }
          iVar32 = iVar14 - local_d4;
          iVar35 = iVar32 >> 10;
          sVar33 = (short)local_d4;
          if (local_10c < 0x801) {
LAB_1455e340c:
            if (iVar35 < 1) {
              if (iVar35 != 0) {
                if (iVar35 == -1) goto LAB_1455e3441;
                iVar35 = local_d4 + 0x50 + iVar35 * 0x400;
                sVar31 = -(short)iVar35;
                iVar32 = iVar35 + 0x400;
                sVar33 = -(short)iVar32;
                goto LAB_1455e3479;
              }
              iVar32 = local_d4 + 0x3b0;
              iVar35 = local_d4;
              sVar31 = sVar33;
            }
            else {
              iVar35 = local_d4 + -0x50 + iVar35 * 0x400;
              iVar32 = iVar35 + 0x400;
              sVar31 = (short)iVar35;
            }
            sVar33 = (short)iVar32;
          }
          else {
            iVar35 = local_10c;
            if (local_10c < 0) {
              iVar35 = local_10c + 1;
            }
            iVar35 = (iVar35 >> 1) + -0x200;
            if (iVar35 < iVar32) {
              iVar35 = -iVar35;
LAB_1455e3401:
              iVar35 = iVar32 + iVar35 >> 10;
              goto LAB_1455e340c;
            }
            if (iVar32 < -iVar35) goto LAB_1455e3401;
            if (-1 < iVar32) {
              iVar35 = 0;
              goto LAB_1455e340c;
            }
LAB_1455e3441:
            iVar35 = local_d4 + -0x3b0;
            sVar31 = -(short)iVar35;
            iVar32 = local_d4;
          }
LAB_1455e3479:
          iVar16 = (int)(short)((short)iVar14 - (short)iVar35);
          iVar14 = (int)(short)((short)iVar14 - (short)iVar32);
          iVar16 = (int)sVar31 * (int)(short)local_10c + iVar16 * iVar16 >> 10;
          iVar14 = (int)sVar33 * (int)(short)local_10c + iVar14 * iVar14 >> 10;
          if (iVar16 < iVar14) {
            *piVar22 = *(int *)((longlong)piVar25 + local_118) + iVar16;
            iVar14 = *(int *)((longlong)piVar25 + local_118) + iVar14;
            iVar16 = iVar35;
            iVar35 = iVar32;
          }
          else {
            *piVar22 = *(int *)((longlong)piVar25 + local_118) + iVar14;
            iVar14 = *(int *)((longlong)piVar25 + local_118) + iVar16;
            iVar16 = iVar32;
          }
          piVar22[7] = iVar14;
          piVar22[-1] = iVar16;
          piVar22[6] = iVar35;
          iVar35 = piVar22[-1] * 0x10;
          if (*(int *)(local_118 + -8 + (longlong)piVar25) < 0) {
            iVar35 = piVar22[-1] * -0x10;
          }
          iVar14 = *local_f8;
          piVar22[5] = local_124[0] + iVar35;
          iVar35 = local_124[0] + iVar35 + uVar36;
          piVar22[1] = iVar35;
          iVar35 = iVar35 + iVar14 * -0x10;
          piVar22[3] = iVar35;
          uVar15 = iVar35 - uVar29;
          piVar22[2] = uVar15;
          iVar14 = uVar15 - uVar11;
          iVar35 = iVar14;
          if ((int)(uVar15 & ~uVar11) < 0) {
            iVar35 = -0x80000000;
          }
          iVar32 = iVar14;
          if ((int)(uVar11 & ~uVar15) < 0) {
            iVar32 = local_c8;
          }
          if (-1 < iVar14) {
            iVar32 = iVar35;
          }
          piVar22[4] = iVar32;
          iVar35 = piVar22[6] * 0x10;
          if (*(int *)(local_118 + -8 + (longlong)piVar25) < 0) {
            iVar35 = piVar22[6] * -0x10;
          }
          iVar14 = *local_f8;
          piVar22[0xc] = local_124[0] + iVar35;
          iVar35 = local_124[0] + iVar35 + uVar36;
          piVar22[8] = iVar35;
          iVar35 = iVar35 + iVar14 * -0x10;
          piVar22[10] = iVar35;
          uVar29 = iVar35 - uVar29;
          piVar22[9] = uVar29;
          iVar14 = uVar29 - uVar11;
          iVar35 = iVar14;
          if ((int)(uVar29 & ~uVar11) < 0) {
            iVar35 = -0x80000000;
          }
          iVar32 = iVar14;
          if ((int)(uVar11 & ~uVar29) < 0) {
            iVar32 = 0x7fffffff;
          }
          if (-1 < iVar14) {
            iVar32 = iVar35;
          }
          piVar22[0xb] = iVar32;
          piVar25 = piVar25 + 0x145;
          piVar22 = piVar22 + 0xe;
          local_78 = local_78 - 1;
          param_2 = local_68;
          uVar17 = local_60;
          uVar36 = param_24;
        } while (local_78 != 0);
      }
      lVar12 = local_f0;
      iVar19 = (*param_25 + -1) % 0x28;
      *param_25 = iVar19;
      if (iVar19 < 0) {
        iVar19 = iVar19 + 0x28;
        *param_25 = iVar19;
      }
      lVar26 = 0;
      local_100 = 0;
      lVar23 = 1;
      iVar35 = *(int *)(local_f0 + 4);
      piVar22 = (int *)(local_f0 + 4);
      if (1 < (int)uVar36) {
        piVar22 = (int *)(local_f0 + 0x3c);
        uVar24 = (ulonglong)(uVar36 - 1);
        do {
          iVar14 = *piVar22;
          piVar22 = piVar22 + 0xe;
          lVar13 = lVar23;
          if (iVar35 <= iVar14) {
            iVar14 = iVar35;
            lVar13 = lVar26;
          }
          lVar26 = lVar13;
          iVar35 = iVar14;
          lVar23 = lVar23 + 1;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
        local_100 = lVar26;
        piVar22 = local_70;
      }
      lVar23 = local_100;
      lVar26 = (longlong)((param_26 + iVar19) % 0x28);
      local_90 = lVar26;
      iVar19 = *(int *)((longlong)param_2 + (local_100 * 0x145 + lVar26) * 4 + 0x180);
      if (0 < (longlong)uVar17) {
        piVar34 = (int *)((longlong)param_2 + (lVar26 + 0x60) * 4);
        piVar25 = (int *)(local_f0 + 0x20);
        uVar24 = uVar17;
        do {
          if (*piVar34 != iVar19) {
            piVar25[-7] = piVar25[-7] + 0x7ffffff;
            *piVar25 = *piVar25 + 0x7ffffff;
          }
          piVar34 = piVar34 + 0x145;
          piVar25 = piVar25 + 0xe;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      iVar19 = *(int *)(lVar12 + 0x20);
      iVar16 = 0;
      iVar35 = *piVar22;
      lVar12 = 0;
      iVar14 = 0;
      lVar13 = 0;
      iVar32 = 1;
      if (1 < (int)param_24) {
        piVar22 = (int *)(local_f0 + 0x58);
        lVar27 = 1;
        iVar37 = 0;
        do {
          iVar14 = iVar32;
          iVar3 = piVar22[-7];
          lVar23 = lVar27;
          if (piVar22[-7] <= iVar35) {
            iVar14 = iVar16;
            iVar3 = iVar35;
            lVar23 = lVar12;
          }
          lVar12 = lVar23;
          iVar35 = iVar3;
          iVar16 = iVar14;
          iVar3 = *piVar22;
          iVar4 = *piVar22;
          piVar22 = piVar22 + 0xe;
          iVar14 = iVar32;
          lVar23 = lVar27;
          if (iVar19 <= iVar3) {
            iVar14 = iVar37;
            lVar23 = lVar13;
          }
          lVar13 = lVar23;
          if (iVar19 <= iVar4) {
            iVar4 = iVar19;
          }
          iVar19 = iVar4;
          iVar32 = iVar32 + 1;
          lVar27 = lVar27 + 1;
          param_2 = local_68;
          lVar23 = local_100;
          lVar26 = local_90;
          uVar17 = local_60;
          iVar37 = iVar14;
        } while (iVar32 < (int)param_24);
      }
      if (iVar19 < iVar35) {
        _Size = 0x514 - local_b0;
        lVar27 = (longlong)iVar14 * 0x145 + local_b8;
        lVar18 = (longlong)iVar16 * 0x145 + local_b8;
        *(undefined8 *)((longlong)auStack_150 + lVar5) = 0x1455e37e3;
        memcpy((void *)((longlong)param_2 + lVar18 * 4),(void *)((longlong)param_2 + lVar27 * 4),
               _Size);
        lVar13 = lVar13 * 0x38;
        lVar12 = lVar12 * 0x38;
        puVar30 = (undefined4 *)(lVar13 + 0x1c + local_f0);
        uVar7 = puVar30[1];
        uVar8 = puVar30[2];
        uVar9 = puVar30[3];
        puVar21 = (undefined4 *)(lVar12 + local_f0);
        *puVar21 = *puVar30;
        puVar21[1] = uVar7;
        puVar21[2] = uVar8;
        puVar21[3] = uVar9;
        *(undefined8 *)(lVar12 + 0x10 + local_f0) = *(undefined8 *)(lVar13 + 0x2c + local_f0);
        *(undefined4 *)(lVar12 + 0x18 + local_f0) = *(undefined4 *)(lVar13 + 0x34 + local_f0);
      }
      if ((0 < param_20) || (param_26 <= local_124[1])) {
        *local_a0 = (char)((*(int *)((longlong)param_2 + lVar26 * 4 + lVar23 * 0x514 + 0x220) >> 9)
                           + 1 >> 1);
        iVar35 = ((int)((ulonglong)
                        ((longlong)*(int *)((longlong)param_2 + lVar26 * 4 + lVar23 * 0x514 + 0x2c0)
                        * (longlong)*(int *)(param_8 + lVar26 * 4)) >> 0x10) >> 7) + 1 >> 1;
        iVar19 = 0x7fff;
        if ((iVar35 < 0x8000) && (iVar19 = iVar35, iVar35 < -0x8000)) {
          iVar19 = -0x8000;
        }
        *local_a8 = (short)iVar19;
        *(undefined4 *)(local_c0 + 0x500 + (longlong)(*(int *)(local_c0 + 0x10f0) - param_26) * 4) =
             *(undefined4 *)((longlong)param_2 + lVar26 * 4 + lVar23 * 0x514 + 0x400);
        *(undefined4 *)(param_7 + (longlong)(*(int *)(local_c0 + 0x10ec) - param_26) * 4) =
             *(undefined4 *)((longlong)param_2 + lVar26 * 4 + lVar23 * 0x514 + 0x360);
      }
      *(int *)(local_c0 + 0x10f0) = *(int *)(local_c0 + 0x10f0) + 1;
      *(int *)(local_c0 + 0x10ec) = *(int *)(local_c0 + 0x10ec) + 1;
      if (0 < (longlong)uVar17) {
        puVar21 = (undefined4 *)((longlong)param_2 + 0x504);
        puVar30 = (undefined4 *)(local_f0 + 8);
        uVar24 = uVar17;
        do {
          puVar21[-1] = puVar30[1];
          *puVar21 = puVar30[2];
          *(undefined4 *)(local_58 + (longlong)local_f8 + (longlong)puVar21) = *puVar30;
          puVar21[(longlong)*param_25 + -0x91] = *puVar30;
          puVar21[(longlong)*param_25 + -0xb9] = puVar30[-2];
          puVar21[(longlong)*param_25 + -0x69] = puVar30[4] * 2;
          puVar21[(longlong)*param_25 + -0x41] = puVar30[3];
          puVar21[1] = puVar21[1] + (((int)puVar30[-2] >> 9) + 1 >> 1);
          puVar21[(longlong)*param_25 + -0xe1] = puVar21[1];
          puVar21[3] = puVar30[-1];
          uVar24 = uVar24 - 1;
          puVar21 = puVar21 + 0x145;
          puVar30 = puVar30 + 0xe;
        } while (uVar24 != 0);
      }
      param_4 = local_f8 + 1;
      local_b8 = local_b8 + 1;
      local_b0 = local_b0 + 4;
      uVar24 = (ulonglong)param_24;
      *(int *)(param_8 + (longlong)*param_25 * 4) = local_98;
      local_124[1] = local_124[1] + 1;
      local_a8 = local_a8 + 1;
      local_a0 = local_a0 + 1;
      local_f8 = param_4;
      local_118 = local_118 + -4;
    } while (local_124[1] < param_19);
  }
  if (0 < (longlong)uVar17) {
    lVar12 = (longlong)param_19;
    do {
      puVar2 = (undefined8 *)((longlong)param_2 + lVar12 * 4);
      uVar10 = puVar2[1];
      *param_2 = *puVar2;
      param_2[1] = uVar10;
      puVar2 = (undefined8 *)((longlong)param_2 + lVar12 * 4 + 0x10);
      uVar10 = puVar2[1];
      param_2[2] = *puVar2;
      param_2[3] = uVar10;
      puVar21 = (undefined4 *)((longlong)param_2 + lVar12 * 4 + 0x20);
      uVar7 = puVar21[1];
      uVar8 = puVar21[2];
      uVar9 = puVar21[3];
      *(undefined4 *)(param_2 + 4) = *puVar21;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar7;
      *(undefined4 *)(param_2 + 5) = uVar8;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uVar9;
      puVar2 = (undefined8 *)((longlong)param_2 + lVar12 * 4 + 0x30);
      uVar10 = puVar2[1];
      param_2[6] = *puVar2;
      param_2[7] = uVar10;
      uVar17 = uVar17 - 1;
      param_2 = (undefined8 *)((longlong)param_2 + 0x514);
    } while (uVar17 != 0);
  }
  uVar24 = local_30 ^ (ulonglong)&local_128;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_150 + lVar5) = &UNK_1455e3a7b;
  FUN_144d8e3a0(uVar24);
}



// FUNCTION 1455e3aa4 FUN_1455e3aa4 body=556 status=ok
// SIG undefined FUN_1455e3aa4(void)

void FUN_1455e3aa4(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined4 local_c0;
  int local_b8;
  short local_a8 [16];
  undefined1 local_88 [32];
  short local_68 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar3 = true;
  if ((*(int *)(param_1 + 0x1218) != 1) && (*(char *)(param_1 + 0x12af) != '\x04')) {
    FUN_144bca940("assertion failed: psEncC->useInterpolatedNLSFs == 1 || psEncC->indices.NLSFInterpCoef_Q2 == ( 1 << 2 )"
                  ,"../../../third_party/opus/src/silk/process_NLSFs.c",0x33);
  }
  iVar5 = (int)((ulonglong)((longlong)*(short *)(&DAT_000011b4 + param_1) * -0x41892) >> 0x10) +
          0xc4a;
  if (*(int *)(param_1 + 0x11e4) == 2) {
    iVar5 = iVar5 + (iVar5 >> 1);
  }
  if (iVar5 < 1) {
    FUN_144bca940("assertion failed: NLSF_mu_Q20 > 0",
                  "../../../third_party/opus/src/silk/process_NLSFs.c",0x3f);
  }
  FUN_145633680(local_a8,param_3,*(undefined4 *)(param_1 + 0x1220));
  if ((*(int *)(param_1 + 0x1218) == 1) && (*(char *)(param_1 + 0x12af) < '\x04')) {
    local_c8 = *(undefined4 *)(param_1 + 0x1220);
    FUN_145633050(local_88,param_4,param_3,(int)*(char *)(param_1 + 0x12af));
    FUN_145633680(local_68,local_88,*(undefined4 *)(param_1 + 0x1220));
    cVar1 = *(char *)(param_1 + 0x12af);
    iVar2 = *(int *)(param_1 + 0x1220);
    if (0 < (longlong)iVar2) {
      lVar4 = 0;
      do {
        local_a8[lVar4] =
             (short)((uint)((int)local_68[lVar4] * (int)(short)((short)cVar1 * (short)cVar1 * 0x800)
                           ) >> 0x10) + (local_a8[lVar4] >> 1);
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
    }
  }
  else {
    bVar3 = false;
  }
  local_b8 = (int)*(char *)(param_1 + 0x12ad);
  local_c0 = *(undefined4 *)(param_1 + 0x1234);
  local_c8 = iVar5;
  FUN_1456337f4(param_1 + 0x1298,param_3,*(undefined8 *)(param_1 + 0x1260),local_a8);
  FUN_1455dd964((longlong)param_2 + 0x20,param_3,*(undefined4 *)(param_1 + 0x1220),
                *(undefined4 *)(param_1 + 0x13f4));
  iVar5 = *(int *)(param_1 + 0x1220);
  if (bVar3) {
    local_c8 = iVar5;
    FUN_145633050(local_88,param_4,param_3,(int)*(char *)(param_1 + 0x12af));
    FUN_1455dd964(param_2,local_88,*(undefined4 *)(param_1 + 0x1220),
                  *(undefined4 *)(param_1 + 0x13f4));
  }
  else {
    if (0x10 < iVar5) {
      FUN_144bca940("assertion failed: psEncC->predictLPCOrder <= MAX_LPC_ORDER",
                    "../../../third_party/opus/src/silk/process_NLSFs.c",0x68);
      iVar5 = *(int *)(param_1 + 0x1220);
    }
    memcpy(param_2,(void *)((longlong)param_2 + 0x20),(longlong)iVar5 * 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1455e3ce0 FUN_1455e3ce0 body=1700 status=ok
// SIG undefined FUN_1455e3ce0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455e3ce0(longlong param_1,undefined8 param_2)

{
  short *psVar1;
  uint *puVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  short *psVar15;
  ulonglong uVar16;
  int *piVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  int iVar23;
  int iVar24;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 auStack_d0 [5];
  uint auStack_a8 [3];
  short sStack_9a;
  uint local_98;
  int local_94;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  uint local_70 [4];
  int local_60 [4];
  int local_50 [4];
  ulonglong local_40;
  ulonglong uVar22;
  
  local_40 = DAT_14c707940 ^ (ulonglong)&local_98;
  local_80 = param_1 + 0x24;
  uVar7 = *(uint *)(param_1 + 0x11e8);
  local_88 = param_2;
  local_78 = param_1;
  if (0x140 < (int)uVar7) {
    auStack_d0[0] = 0x1455e3d4a;
    FUN_144bca940("assertion failed: MAX_FRAME_LENGTH >= psEncC->frame_length",
                  "../../../third_party/opus/src/silk/x86/VAD_sse4_1.c",0x44);
    uVar7 = *(uint *)(param_1 + 0x11e8);
  }
  if (0x200 < (int)uVar7) {
    auStack_d0[0] = 0x1455e3d6d;
    FUN_144bca940("assertion failed: psEncC->frame_length <= 512",
                  "../../../third_party/opus/src/silk/x86/VAD_sse4_1.c",0x45);
    uVar7 = *(uint *)(param_1 + 0x11e8);
  }
  if (uVar7 != (uVar7 & 0xfffffff8)) {
    auStack_d0[0] = 0x1455e3d91;
    FUN_144bca940("assertion failed: psEncC->frame_length == 8 * silk_RSHIFT( psEncC->frame_length, 3 )"
                  ,"../../../third_party/opus/src/silk/x86/VAD_sse4_1.c",0x46);
    uVar7 = *(uint *)(param_1 + 0x11e8);
  }
  lVar14 = local_88;
  uVar16 = 0;
  iVar23 = (int)uVar7 >> 2;
  iVar24 = (int)uVar7 >> 3;
  iVar11 = 0;
  local_60[0] = 0;
  iVar19 = iVar24 + iVar23;
  local_60[2] = iVar24 + iVar19;
  local_60[3] = local_60[2] + iVar23;
  uVar18 = (longlong)(local_60[3] + ((int)uVar7 >> 1)) * 2;
  uVar9 = uVar18 + 0xf;
  if (uVar9 <= uVar18) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x1455e3ded;
  lVar4 = -(uVar9 & 0xfffffffffffffff0);
  lVar10 = (longlong)local_60[3];
  psVar1 = (short *)((longlong)&local_98 + lVar4);
  local_60[1] = iVar19;
  *(uint *)((longlong)auStack_a8 + lVar4) = uVar7;
  lVar12 = local_80;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x1455e3e10;
  FUN_1455e439c(lVar14,lVar12,psVar1,psVar1 + lVar10);
  lVar14 = local_80 + 8;
  *(int *)((longlong)auStack_a8 + lVar4) = (int)uVar7 >> 1;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x1455e3e32;
  FUN_1455e439c(psVar1,lVar14,psVar1,psVar1 + (iVar24 + iVar19));
  lVar14 = local_80;
  *(int *)((longlong)auStack_a8 + lVar4) = iVar23;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x1455e3e51;
  auVar25._0_8_ = FUN_1455e439c(psVar1,lVar14 + 0x10,psVar1,psVar1 + iVar19);
  auVar25._8_8_ = extraout_XMM0_Qb;
  lVar12 = (longlong)iVar24 + -1;
  psVar1[lVar12] = psVar1[lVar12] >> 1;
  sVar6 = psVar1[lVar12];
  for (; 0 < lVar12; lVar12 = lVar12 + -1) {
    psVar15 = (short *)((longlong)&sStack_9a + lVar12 * 2 + lVar4);
    *psVar15 = *psVar15 >> 1;
    psVar1[lVar12] = psVar1[lVar12] - *(short *)((longlong)&sStack_9a + lVar12 * 2 + lVar4);
  }
  *psVar1 = *psVar1 - *(short *)(lVar14 + 0x38);
  lVar10 = local_78;
  lVar12 = local_80;
  *(short *)(lVar14 + 0x38) = sVar6;
  local_88 = lVar14 - (longlong)local_60;
  local_90._0_4_ = 0;
  uVar9 = uVar16;
  uVar18 = uVar16;
  lVar14 = local_88;
  do {
    local_98 = 0;
    iVar23 = 4 - (int)uVar18;
    iVar19 = 3;
    if (iVar23 < 3) {
      iVar19 = iVar23;
    }
    iVar23 = (*(int *)(param_1 + 0x11e8) >> ((byte)iVar19 & 0x1f)) >> 2;
    piVar17 = (int *)((longlong)local_60 + uVar9);
    iVar19 = *(int *)(lVar14 + 0x18 + (longlong)piVar17);
    *(int *)((longlong)local_70 + uVar9) = iVar19;
    uVar18 = uVar16;
    uVar22 = uVar16;
    do {
      local_94 = 0;
      auVar27 = ZEXT816(0);
      if (0 < iVar23 + -7) {
        pauVar20 = (undefined1 (*) [16])(psVar1 + (int)(*piVar17 + (uint)uVar18));
        uVar7 = (iVar23 - 8U >> 3) + 1;
        uVar13 = (ulonglong)uVar7;
        local_94 = uVar7 * 8;
        do {
          auVar25 = *pauVar20;
          pauVar20 = pauVar20 + 1;
          auVar25 = psraw(auVar25,3);
          auVar26 = pmaddwd(auVar25,auVar25);
          auVar25._0_4_ = auVar26._0_4_ + auVar27._0_4_;
          auVar25._4_4_ = auVar26._4_4_ + auVar27._4_4_;
          auVar25._8_4_ = auVar26._8_4_ + auVar27._8_4_;
          auVar25._12_4_ = auVar26._12_4_ + auVar27._12_4_;
          uVar13 = uVar13 - 1;
          auVar27 = auVar25;
        } while (uVar13 != 0);
      }
      auVar26._0_4_ = auVar27._8_4_ + auVar27._0_4_;
      auVar26._4_4_ = auVar27._12_4_ + auVar27._4_4_;
      iVar5 = auVar27._8_4_ * 2;
      auVar26._8_4_ = iVar5;
      iVar24 = auVar27._12_4_ * 2;
      auVar26._12_4_ = iVar24;
      auVar27 = pshuflw(auVar25,auVar26,0xe);
      auVar25._0_4_ = auVar27._0_4_ + auVar26._0_4_;
      auVar25._4_4_ = auVar27._4_4_ + auVar26._4_4_;
      auVar25._8_4_ = auVar27._8_4_ + iVar5;
      auVar25._12_4_ = auVar27._12_4_ + iVar24;
      uVar7 = (uint)uVar18;
      iVar24 = auVar25._0_4_;
      if ((longlong)local_94 < (longlong)iVar23) {
        psVar15 = psVar1 + (longlong)local_94 + (longlong)(int)local_98 + (longlong)*piVar17;
        lVar14 = (longlong)iVar23 - (longlong)local_94;
        do {
          sVar6 = *psVar15;
          psVar15 = psVar15 + 1;
          iVar24 = iVar24 + ((int)sVar6 >> 3) * ((int)sVar6 >> 3);
          lVar14 = lVar14 + -1;
          uVar7 = local_98;
        } while (lVar14 != 0);
      }
      iVar5 = iVar24;
      if (2 < (int)uVar22) {
        iVar5 = iVar24 >> 1;
      }
      iVar19 = iVar19 + iVar5;
      if (iVar19 < 0) {
        iVar19 = 0x7fffffff;
      }
      uVar18 = (ulonglong)(uVar7 + iVar23);
      uVar21 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar21;
      *(int *)((longlong)local_70 + uVar9) = iVar19;
      local_98 = uVar7 + iVar23;
    } while ((int)uVar21 < 4);
    uVar9 = uVar9 + 4;
    local_90._0_4_ = (uint)local_90 + 1;
    uVar18 = (ulonglong)(uint)local_90;
    *(int *)(local_88 + 0x18 + (longlong)piVar17) = iVar24;
    param_1 = local_78;
    lVar14 = local_88;
  } while ((int)(uint)local_90 < 4);
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x1455e3ff2;
  FUN_14551b800(local_70,lVar12);
  local_98 = 0;
  local_94 = 0;
  lVar12 = lVar12 - (longlong)local_70;
  local_88 = 4;
  local_90 = lVar12;
  uVar9 = uVar16;
  do {
    uVar7 = *(uint *)((longlong)local_70 + uVar9);
    iVar19 = *(int *)(&stack0xffffffffffffffcc + lVar12 + uVar9);
    uVar21 = uVar7 - iVar19;
    if ((int)uVar21 < 1) {
      *(undefined4 *)((longlong)local_50 + uVar9) = 0x100;
    }
    else {
      if ((uVar7 & 0xff800000) == 0) {
        iVar23 = (int)(uVar7 << 8) / (iVar19 + 1);
        uVar18 = (longlong)(int)(uVar7 << 8) % (longlong)(iVar19 + 1);
      }
      else {
        iVar19 = (iVar19 >> 8) + 1;
        iVar23 = (int)uVar7 / iVar19;
        uVar18 = (longlong)(int)uVar7 % (longlong)iVar19;
      }
      *(int *)((longlong)local_50 + uVar9) = iVar23;
      *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x1455e405d;
      sVar6 = FUN_144f39688(iVar23,uVar18 & 0xffffffff);
      sVar6 = sVar6 + -0x400;
      local_98 = local_98 + (int)sVar6 * (int)sVar6;
      if ((int)uVar21 < 0x100000) {
        iVar19 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> iVar19 == 0; iVar19 = iVar19 + -1) {
          }
        }
        uVar7 = 0x1f - iVar19;
        iVar19 = 0x18 - uVar7;
        if (iVar19 != 0) {
          if (iVar19 < 0) {
            bVar3 = -(byte)iVar19 & 0x1f;
            uVar21 = uVar21 << bVar3 | uVar21 >> 0x20 - bVar3;
          }
          else {
            bVar3 = (byte)iVar19 & 0x1f;
            uVar21 = uVar21 >> bVar3 | uVar21 << 0x20 - bVar3;
          }
        }
        iVar19 = (int)((-(uint)((uVar7 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
                 ((byte)((int)uVar7 >> 1) & 0x1f);
        sVar6 = (short)((ulonglong)
                        ((longlong)sVar6 *
                        (longlong)
                        (((int)((ulonglong)(uVar21 & 0x7f) * (longlong)iVar19 * 0xd5 >> 0x10) +
                         iVar19) * 0x40)) >> 0x10);
      }
      local_94 = local_94 +
                 (int)((ulonglong)
                       ((longlong)*(int *)((longlong)&DAT_149dd2540 + uVar9) * (longlong)sVar6) >>
                      0x10);
    }
    uVar9 = uVar9 + 4;
    local_88 = local_88 + -1;
  } while (local_88 != 0);
  uVar7 = (int)(local_98 + ((int)local_98 >> 0x1f & 3U)) >> 2;
  if ((int)uVar7 < 1) {
    sVar6 = 0;
  }
  else {
    iVar19 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    uVar21 = 0x1f - iVar19;
    iVar19 = 0x18 - uVar21;
    if (iVar19 != 0) {
      if (iVar19 < 0) {
        bVar3 = -(byte)iVar19 & 0x1f;
        uVar7 = uVar7 << bVar3 | uVar7 >> 0x20 - bVar3;
      }
      else {
        bVar3 = (byte)iVar19 & 0x1f;
        uVar7 = uVar7 >> bVar3 | uVar7 << 0x20 - bVar3;
      }
    }
    iVar19 = (int)((-(uint)((uVar21 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
             ((byte)((int)uVar21 >> 1) & 0x1f);
    sVar6 = (short)((ulonglong)(uVar7 & 0x7f) * (longlong)iVar19 * 0xd5 >> 0x10) + (short)iVar19;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x1455e41ae;
  iVar23 = FUN_1455e44b8((int)((ulonglong)((longlong)(short)(sVar6 * 3) * 45000) >> 0x10) + -0x80);
  iVar19 = local_94;
  uVar18 = (ulonglong)iVar23;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x1455e41b9;
  iVar19 = FUN_1455e44b8(iVar19);
  lVar14 = local_80;
  iVar24 = 1;
  *(int *)(lVar10 + 0x1278) = iVar19 * 2 + -0x8000;
  uVar9 = uVar16;
  do {
    puVar2 = local_70 + uVar9;
    lVar12 = uVar9 * 4;
    uVar9 = uVar9 + 1;
    iVar19 = ((int)(*puVar2 - *(int *)(&stack0xffffffffffffffcc + local_90 + lVar12)) >> 4) * iVar24
    ;
    iVar24 = iVar24 + 1;
    uVar7 = (int)uVar16 + iVar19;
    uVar16 = (ulonglong)uVar7;
  } while ((longlong)uVar9 < 4);
  if ((int)uVar7 < 1) {
    uVar18 = (ulonglong)(uint)(iVar23 >> 1);
  }
  else if ((int)uVar7 < 0x8000) {
    if (*(int *)(lVar10 + 0x11e8) == *(int *)(lVar10 + 0x11e0) * 10) {
      uVar21 = uVar7;
      if ((int)uVar7 < -0x8000) {
        uVar21 = 0xffff8000;
      }
      if (0x7fff < (int)uVar7) {
        uVar21 = 0x7fff;
      }
      uVar21 = uVar21 << 0x10;
    }
    else {
      uVar21 = uVar7;
      if ((int)uVar7 < -0x10000) {
        uVar21 = 0xffff0000;
      }
      if (0xffff < (int)uVar7) {
        uVar21 = 0xffff;
      }
      uVar21 = uVar21 << 0xf;
    }
    if (0 < (int)uVar21) {
      iVar19 = 0x1f;
      if (uVar21 != 0) {
        for (; uVar21 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      uVar7 = 0x1f - iVar19;
      iVar19 = 0x18 - uVar7;
      if (iVar19 != 0) {
        if (iVar19 < 0) {
          bVar3 = -(byte)iVar19 & 0x1f;
          uVar21 = uVar21 << bVar3 | uVar21 >> 0x20 - bVar3;
        }
        else {
          bVar3 = (byte)iVar19 & 0x1f;
          uVar21 = uVar21 >> bVar3 | uVar21 << 0x20 - bVar3;
        }
      }
      iVar11 = (int)((-(uint)((uVar7 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
               ((byte)((int)uVar7 >> 1) & 0x1f);
      iVar11 = (int)((ulonglong)(uVar21 & 0x7f) * (longlong)iVar11 * 0xd5 >> 0x10) + iVar11;
    }
    uVar18 = (longlong)(short)iVar23 * (longlong)(iVar11 + 0x8000) >> 0x10;
  }
  iVar11 = (int)uVar18 >> 7;
  iVar19 = 0xff;
  if (iVar11 < 0xff) {
    iVar19 = iVar11;
  }
  *(int *)(&DAT_000011b4 + lVar10) = iVar19;
  lVar12 = (longlong)(short)((longlong)(short)uVar18 * (uVar18 & 0xffffffff) >> 0x10) << 0xc;
  sVar6 = (short)((ulonglong)lVar12 >> 0x10);
  if (*(int *)(lVar10 + 0x11e8) == *(int *)(lVar10 + 0x11e0) * 10) {
    sVar6 = (short)((int)((ulonglong)lVar12 >> 0x10) >> 1);
  }
  lVar10 = lVar10 - local_80;
  lVar12 = 4;
  piVar17 = (int *)(local_80 + 0x28);
  do {
    *piVar17 = (int)((ulonglong)
                     ((longlong)
                      (*(int *)((longlong)local_70 + (-8 - lVar14) + (longlong)piVar17) - *piVar17)
                     * (longlong)sVar6) >> 0x10) + *piVar17;
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x1455e434f;
    iVar19 = FUN_144f39688();
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x1455e4365;
    uVar8 = FUN_1455e44b8(iVar19 * 3 + -0x1400 >> 4);
    *(undefined4 *)(lVar10 + 0x1240 + (longlong)piVar17) = uVar8;
    piVar17 = piVar17 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  uVar9 = local_40 ^ (ulonglong)&local_98;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_d0 + lVar4) = &UNK_1455e4384;
  FUN_144d8e3a0(uVar9);
}



// FUNCTION 1455e439c FUN_1455e439c body=284 status=ok
// SIG undefined FUN_1455e439c(void)

void FUN_1455e439c(longlong param_1,int *param_2,longlong param_3,undefined2 *param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = 0;
  if (0 < (longlong)param_5 >> 1) {
    lVar8 = (longlong)DAT_14c7469ec;
    param_3 = param_3 - (longlong)param_4;
    lVar7 = (longlong)DAT_14c7469e8;
    do {
      iVar6 = *param_2;
      iVar4 = *(short *)(param_1 + lVar3 * 4) * 0x400;
      iVar2 = iVar4 - iVar6;
      iVar2 = (int)((ulonglong)(iVar2 * lVar8) >> 0x10) + iVar2;
      *param_2 = iVar2 + iVar4;
      iVar6 = iVar6 + iVar2;
      iVar4 = *(short *)(param_1 + 2 + lVar3 * 4) * 0x400;
      iVar2 = (int)((ulonglong)((iVar4 - param_2[1]) * lVar7) >> 0x10);
      iVar5 = param_2[1] + iVar2;
      param_2[1] = iVar2 + iVar4;
      iVar2 = (iVar5 + iVar6 >> 10) + 1 >> 1;
      uVar1 = (undefined2)iVar2;
      if (iVar2 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar2) {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)(param_3 + (longlong)param_4) = uVar1;
      iVar6 = (iVar5 - iVar6 >> 10) + 1 >> 1;
      uVar1 = (undefined2)iVar6;
      if (iVar6 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar6) {
        uVar1 = 0x7fff;
      }
      lVar3 = lVar3 + 1;
      *param_4 = uVar1;
      param_4 = param_4 + 1;
    } while (lVar3 < (longlong)param_5 >> 1);
  }
  return;
}



// FUNCTION 1455e44b8 FUN_1455e44b8 body=112 status=ok
// SIG undefined FUN_1455e44b8(void)

int FUN_1455e44b8(uint param_1)

{
  if (-1 < (int)param_1) {
    if (0xbf < (int)param_1) {
      return 0x7fff;
    }
    return (int)*(short *)(&DAT_149dd2588 + ((longlong)(int)param_1 >> 5) * 4) * (param_1 & 0x1f) +
           *(int *)(&DAT_149dd25a0 + ((longlong)(int)param_1 >> 5) * 4);
  }
  param_1 = -param_1;
  if (0xbf < (int)param_1) {
    return 0;
  }
  return *(int *)(&DAT_149dd25b8 + ((longlong)(int)param_1 >> 5) * 4) -
         (int)*(short *)(&DAT_149dd2588 + ((longlong)(int)param_1 >> 5) * 4) * (param_1 & 0x1f);
}



// FUNCTION 1455e4530 FUN_1455e4530 body=75 status=ok
// SIG undefined FUN_1455e4530(void)

undefined8 FUN_1455e4530(longlong param_1,byte *param_2)

{
  longlong lVar1;
  
  if ((*param_2 & 3) != 0) {
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (((*(short *)((ulonglong)*(ushort *)(param_2 + 4) * 0x20 + 10 + lVar1) ==
        *(short *)(param_2 + 8)) &&
      (*(short *)((ulonglong)*(ushort *)(param_2 + 6) * 0x20 + 10 + lVar1) ==
       *(short *)(param_2 + 10))) &&
     (*(ushort *)((ulonglong)*(ushort *)(param_2 + 4) * 0x20 + 0x10 + lVar1) ==
      *(ushort *)(param_2 + 6))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1455e4580 FUN_1455e4580 body=131 status=ok
// SIG undefined FUN_1455e4580(void)

undefined8 FUN_1455e4580(longlong param_1,undefined4 param_2,ushort param_3)

{
  short sVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x108) +
                (longlong)(int)(((int)~*(uint *)(param_1 + 0x118) >> 5) * (uint)param_3) * -4) & 1)
      != 0) {
    sVar1 = (**(code **)**(undefined8 **)(param_1 + 0xe8))();
    if (sVar1 != -1) {
      uVar2 = FUN_145521790(param_1,param_2,sVar1);
      return uVar2;
    }
  }
  return 0xffff;
}



// FUNCTION 1455e4610 FUN_1455e4610 body=179 status=ok
// SIG undefined FUN_1455e4610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1455e4610(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_145633c90();
  *param_1 = hkaiCollisionAvoidance::SimpleObstacleGenerator::vftable;
  *(undefined1 *)(param_1 + 4) = 1;
  uVar1 = uRam000000014c6dae48;
  param_1[6] = _DAT_14c6dae40;
  param_1[7] = uVar1;
  uVar1 = uRam000000014c6dae58;
  param_1[8] = _DAT_14c6dae50;
  param_1[9] = uVar1;
  uVar1 = uRam000000014c6dae68;
  param_1[10] = _DAT_14c6dae60;
  param_1[0xb] = uVar1;
  uVar1 = _DAT_14c6dae78;
  param_1[0xc] = _DAT_14c6dae70;
  param_1[0xd] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  param_1[0x16] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  param_1[0x17] = uVar1;
  uVar2 = uRam000000014c6dae84 ^ 0x80000000;
  uVar3 = uRam000000014c6dae88 ^ 0x80000000;
  uVar4 = uRam000000014c6dae8c ^ 0x80000000;
  *(uint *)(param_1 + 0x18) = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xc4) = uVar2;
  *(uint *)(param_1 + 0x19) = uVar3;
  *(uint *)((longlong)param_1 + 0xcc) = uVar4;
  return param_1;
}



// FUNCTION 1455e46d0 FUN_1455e46d0 body=211 status=ok
// SIG undefined FUN_1455e46d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1455e46d0(longlong param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  char cVar5;
  float *pfVar6;
  undefined1 (*pauVar7) [16];
  float *pfVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  cVar5 = FUN_144b3e610(param_1 + 0xb0);
  if (cVar5 == '\0') {
    pfVar6 = *(float **)(param_1 + 0x90);
    auVar14._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
    auVar14._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
    auVar14._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
    pfVar8 = pfVar6 + (longlong)*(int *)(param_1 + 0x98) * 8;
    auVar15 = _DAT_14c6dae80;
    while (pfVar6 != pfVar8) {
      fVar1 = *pfVar6;
      pfVar2 = pfVar6 + 1;
      pfVar3 = pfVar6 + 2;
      fVar4 = pfVar6[3];
      pfVar6 = pfVar6 + 8;
      auVar10._0_4_ = fVar1 - fVar4;
      auVar10._4_4_ = *pfVar2 - fVar4;
      auVar10._8_4_ = *pfVar3 - fVar4;
      auVar10._12_4_ = fVar4 - fVar4;
      auVar15 = minps(auVar15,auVar10);
      auVar12._4_4_ = fVar4 + *pfVar2;
      auVar12._0_4_ = fVar4 + fVar1;
      auVar12._8_4_ = fVar4 + *pfVar3;
      auVar12._12_4_ = fVar4 + fVar4;
      auVar14 = maxps(auVar14,auVar12);
    }
    pauVar7 = *(undefined1 (**) [16])(param_1 + 0xa0);
    pauVar9 = pauVar7 + (longlong)*(int *)(param_1 + 0xa8) * 2;
    while (pauVar7 != pauVar9) {
      auVar12 = *pauVar7;
      fVar1 = auVar12._12_4_;
      auVar10 = minps(auVar12,pauVar7[1]);
      auVar12 = maxps(auVar12,pauVar7[1]);
      pauVar7 = pauVar7 + 2;
      auVar11._0_4_ = auVar10._0_4_ - fVar1;
      auVar11._4_4_ = auVar10._4_4_ - fVar1;
      auVar11._8_4_ = auVar10._8_4_ - fVar1;
      auVar11._12_4_ = auVar10._12_4_ - fVar1;
      auVar13._0_4_ = auVar12._0_4_ + fVar1;
      auVar13._4_4_ = auVar12._4_4_ + fVar1;
      auVar13._8_4_ = auVar12._8_4_ + fVar1;
      auVar13._12_4_ = auVar12._12_4_ + fVar1;
      auVar15 = minps(auVar15,auVar11);
      auVar14 = maxps(auVar14,auVar13);
    }
    *(undefined1 (*) [16])(param_1 + 0xb0) = auVar15;
    *(undefined1 (*) [16])(param_1 + 0xc0) = auVar14;
  }
  return;
}



// FUNCTION 1455e47b0 FUN_1455e47b0 body=41 status=ok
// SIG undefined FUN_1455e47b0(void)

void FUN_1455e47b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_144be9220(param_1 + 0x30,param_1 + 0xb0,&local_18,param_2);
  return;
}



// FUNCTION 1455e47e0 FUN_1455e47e0 body=706 status=ok
// SIG undefined FUN_1455e47e0(void)

void FUN_1455e47e0(longlong param_1,undefined1 (*param_2) [16],longlong *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float *in_RAX;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  pfVar8 = *(float **)(param_1 + 0x90);
  pfVar10 = pfVar8 + (longlong)*(int *)(param_1 + 0x98) * 8;
  for (; pfVar8 != pfVar10; pfVar8 = pfVar8 + 8) {
    local_68 = *pfVar8;
    fStack_64 = pfVar8[1];
    fStack_60 = pfVar8[2];
    fStack_7c = pfVar8[3];
    local_88 = local_68 * *(float *)(param_1 + 0x30) + fStack_64 * *(float *)(param_1 + 0x40) +
               fStack_60 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x60);
    fStack_84 = local_68 * *(float *)(param_1 + 0x34) + fStack_64 * *(float *)(param_1 + 0x44) +
                fStack_60 * *(float *)(param_1 + 0x54) + *(float *)(param_1 + 100);
    fStack_80 = local_68 * *(float *)(param_1 + 0x38) + fStack_64 * *(float *)(param_1 + 0x48) +
                fStack_60 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68);
    auVar15._4_4_ = fStack_84;
    auVar15._0_4_ = local_88;
    auVar15._8_4_ = fStack_80;
    auVar15._12_4_ =
         local_68 * *(float *)(param_1 + 0x3c) + fStack_64 * *(float *)(param_1 + 0x4c) +
         fStack_60 * *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x6c);
    auVar15 = maxps(auVar15,*param_2);
    auVar15 = minps(auVar15,param_2[1]);
    fVar14 = auVar15._0_4_ - local_88;
    fVar17 = auVar15._4_4_ - fStack_84;
    fVar18 = auVar15._8_4_ - fStack_80;
    if (fVar17 * fVar17 + fVar14 * fVar14 + fVar18 * fVar18 <= fStack_7c * fStack_7c) {
      fStack_5c = fStack_7c;
      FUN_144fd27b0(param_1 + 0x30,&local_68,pfVar8 + 4,&local_78);
      iVar9 = (int)param_3[3] + 1;
      if ((int)(*(uint *)((longlong)param_3 + 0x1c) & 0x7fffffff) < iVar9) {
        FUN_1455e4ab0(param_3 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      in_RAX = (float *)((longlong)(int)param_3[3] * 0x20 + param_3[2]);
      if (in_RAX != (float *)0x0) {
        *(ulonglong *)in_RAX = CONCAT44(fStack_84,local_88);
        *(ulonglong *)(in_RAX + 2) = CONCAT44(fStack_7c,fStack_80);
        *(undefined8 *)(in_RAX + 4) = local_78;
        *(undefined8 *)(in_RAX + 6) = uStack_70;
      }
      *(int *)(param_3 + 3) = iVar9;
    }
  }
  pfVar8 = *(float **)(param_1 + 0xa0);
  pfVar10 = pfVar8 + (longlong)*(int *)(param_1 + 0xa8) * 8;
  for (; pfVar8 != pfVar10; pfVar8 = pfVar8 + 8) {
    fVar14 = *pfVar8;
    fVar17 = pfVar8[1];
    fVar18 = pfVar8[2];
    fStack_7c = pfVar8[3];
    fVar2 = pfVar8[4];
    fVar3 = pfVar8[5];
    fVar4 = pfVar8[6];
    local_88 = fVar14 * *(float *)(param_1 + 0x30) + fVar17 * *(float *)(param_1 + 0x40) +
               fVar18 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x60);
    fStack_84 = fVar14 * *(float *)(param_1 + 0x34) + fVar17 * *(float *)(param_1 + 0x44) +
                fVar18 * *(float *)(param_1 + 0x54) + *(float *)(param_1 + 100);
    fStack_80 = fVar14 * *(float *)(param_1 + 0x38) + fVar17 * *(float *)(param_1 + 0x48) +
                fVar18 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68);
    local_68 = fVar2 * *(float *)(param_1 + 0x30) + fVar3 * *(float *)(param_1 + 0x40) +
               fVar4 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x60);
    fStack_64 = fVar2 * *(float *)(param_1 + 0x34) + fVar3 * *(float *)(param_1 + 0x44) +
                fVar4 * *(float *)(param_1 + 0x54) + *(float *)(param_1 + 100);
    fStack_60 = fVar2 * *(float *)(param_1 + 0x38) + fVar3 * *(float *)(param_1 + 0x48) +
                fVar4 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68);
    fStack_5c = fStack_7c;
    if (*(char *)(param_1 + 0x20) == '\0') {
      auVar11._4_4_ = fStack_84;
      auVar11._0_4_ = local_88;
      auVar11._8_4_ = fStack_80;
      auVar11._12_4_ = fStack_7c;
      auVar12._4_4_ = fStack_84;
      auVar12._0_4_ = local_88;
      auVar12._8_4_ = fStack_80;
      auVar12._12_4_ = fStack_7c;
      auVar13._4_4_ = fStack_64;
      auVar13._0_4_ = local_68;
      auVar13._8_4_ = fStack_60;
      auVar13._12_4_ = fStack_7c;
      auVar15 = maxps(auVar11,auVar13);
      auVar1._4_4_ = fStack_64;
      auVar1._0_4_ = local_68;
      auVar1._8_4_ = fStack_60;
      auVar1._12_4_ = fStack_7c;
      auVar13 = minps(auVar12,auVar1);
      auVar16._0_4_ =
           -(uint)(*(float *)*param_2 <= auVar15._0_4_ && auVar13._0_4_ <= *(float *)param_2[1]);
      auVar16._4_4_ =
           -(uint)(*(float *)(*param_2 + 4) <= auVar15._4_4_ &&
                  auVar13._4_4_ <= *(float *)(param_2[1] + 4));
      auVar16._8_4_ =
           -(uint)(*(float *)(*param_2 + 8) <= auVar15._8_4_ &&
                  auVar13._8_4_ <= *(float *)(param_2[1] + 8));
      auVar16._12_4_ =
           -(uint)(*(float *)(*param_2 + 0xc) <= auVar15._12_4_ &&
                  auVar13._12_4_ <= *(float *)(param_2[1] + 0xc));
      uVar7 = movmskps((int)in_RAX,auVar16);
      in_RAX = (float *)(ulonglong)(((byte)uVar7 & 7) == 7);
    }
    else {
      in_RAX = (float *)FUN_144c550f0(param_2,&local_88,&local_68);
    }
    fVar6 = fStack_5c;
    fVar5 = fStack_60;
    fVar4 = fStack_64;
    fVar3 = local_68;
    fVar2 = fStack_7c;
    fVar18 = fStack_80;
    fVar17 = fStack_84;
    fVar14 = local_88;
    if ((char)in_RAX != '\0') {
      iVar9 = (int)param_3[1] + 1;
      if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar9) {
        FUN_1455e4ba0(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      in_RAX = (float *)((longlong)(int)param_3[1] * 0x20 + *param_3);
      if (in_RAX != (float *)0x0) {
        *in_RAX = fVar14;
        in_RAX[1] = fVar17;
        in_RAX[2] = fVar18;
        in_RAX[3] = fVar2;
        in_RAX[4] = fVar3;
        in_RAX[5] = fVar4;
        in_RAX[6] = fVar5;
        in_RAX[7] = fVar6;
      }
      *(int *)(param_3 + 1) = iVar9;
    }
  }
  return;
}



// FUNCTION 1455e4ab0 FUN_1455e4ab0 body=236 status=ok
// SIG undefined FUN_1455e4ab0(void)

void FUN_1455e4ab0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 0x20;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 5);
  uVar1 = uVar3 * 0x20 + 0x20;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 1455e4ba0 FUN_1455e4ba0 body=236 status=ok
// SIG undefined FUN_1455e4ba0(void)

void FUN_1455e4ba0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 0x20;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 5);
  uVar1 = uVar3 * 0x20 + 0x20;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 1455e4c90 FUN_1455e4c90 body=63 status=ok
// SIG undefined FUN_1455e4c90(void)

void FUN_1455e4c90(undefined8 *param_1)

{
  *param_1 = hkaiCollisionAvoidance::DefaultBoundaryGatherer::vftable;
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 1455e4cd0 FUN_1455e4cd0 body=8 status=ok
// SIG undefined FUN_1455e4cd0(void)

void FUN_1455e4cd0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  return;
}



// FUNCTION 1455e4ce0 FUN_1455e4ce0 body=3 status=ok
// SIG undefined FUN_1455e4ce0(void)

void FUN_1455e4ce0(void)

{
  return;
}



// FUNCTION 1455e4cf0 FUN_1455e4cf0 body=1295 status=ok
// SIG undefined FUN_1455e4cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1455e4cf0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [12];
  undefined4 uVar11;
  uint *puVar12;
  float *pfVar13;
  longlong lVar14;
  undefined4 *puVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_188;
  int local_180;
  uint local_17c;
  ulonglong local_178;
  longlong local_170;
  longlong local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  uint local_148;
  undefined4 local_138;
  float local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_a8 [16];
  undefined1 local_98 [96];
  ulonglong uVar19;
  
  local_138 = *(undefined4 *)(param_2 + 0xac);
  uVar17 = 0;
  fVar22 = *(float *)(param_2 + 0x30);
  fVar23 = *(float *)(param_2 + 0x34);
  fVar24 = *(float *)(param_2 + 0x38);
  fVar2 = *(float *)(param_2 + 0x3c);
  lVar1 = *(longlong *)(param_2 + 0x100);
  fVar25 = *(float *)*(undefined1 (*) [12])(lVar1 + 0x40);
  fVar26 = *(float *)(lVar1 + 0x44);
  fVar3 = *(float *)(lVar1 + 0x48);
  auVar10 = *(undefined1 (*) [12])(lVar1 + 0x40);
  fVar4 = *(float *)(lVar1 + 0x4c);
  local_118 = *(undefined4 *)(param_1 + 0x20);
  local_128 = 0x3a83126f;
  uStack_124 = 0x3a83126f;
  uStack_120 = 0x3a83126f;
  uStack_11c = 0x3a83126f;
  fVar21 = *(float *)(param_2 + 0xb4);
  local_f8 = *(undefined8 *)(param_1 + 0x28);
  local_134 = fVar21;
  if (fVar21 <= *(float *)(param_2 + 0xb0)) {
    local_134 = *(float *)(param_2 + 0xb0);
  }
  local_res8 = CONCAT44((int)((ulonglong)local_res8 >> 0x20),fVar21);
  local_12c = 0x3f000000;
  local_110 = 0;
  local_c8 = ZEXT416(0);
  local_108 = 0xffffffffffffffff;
  local_100 = 0xffffffff;
  local_f0 = 0;
  local_130 = 0;
  local_b8 = 0xffffffff;
  local_e8 = 0x3dcccccd;
  uStack_e4 = 0x3dcccccd;
  uStack_e0 = 0x3dcccccd;
  uStack_dc = 0x3dcccccd;
  local_d8 = fVar22;
  fStack_d4 = fVar23;
  fStack_d0 = fVar24;
  fStack_cc = fVar2;
  puVar12 = (uint *)FUN_144beaab0(local_a8,&local_e8);
  local_b4 = *(undefined4 *)(param_2 + 0x20);
  local_c8._12_4_ = *puVar12 ^ 0x80000000;
  local_c8._0_12_ = auVar10;
  uVar11 = FUN_144fc0650(&local_158,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x140),&local_d8
                         ,&local_138);
  if (*(char *)(param_1 + 0x30) == '\0') {
LAB_1455e4ede:
    uVar27 = local_148;
    if (local_148 == 0xffffffff) goto LAB_1455e4ee7;
  }
  else {
    if (local_148 != 0xffffffff) {
      local_158 = local_158 - fVar22;
      fStack_154 = fStack_154 - fVar23;
      fStack_150 = fStack_150 - fVar24;
      fVar21 = fVar25 * local_158;
      fVar22 = fVar26 * fStack_154;
      fVar23 = fVar3 * fStack_150;
      fVar24 = local_158 - fVar25 * (fVar23 + fVar22 + fVar21);
      fVar25 = fStack_154 - fVar26 * (fVar23 + fVar22 + fVar21);
      fVar26 = fStack_150 - fVar3 * (fVar23 + fVar22 + fVar21);
      fVar21 = (fStack_14c - fVar2) - fVar4 * (fVar23 + fVar22 + fVar21);
      auVar20._4_4_ = -(uint)(ABS(fVar25) <= fRam000000014c6daea4);
      auVar20._0_4_ = -(uint)(ABS(fVar24) <= _DAT_14c6daea0);
      auVar20._8_4_ = -(uint)(ABS(fVar26) <= fRam000000014c6daea8);
      auVar20._12_4_ = -(uint)(ABS(fVar21) <= fRam000000014c6daeac);
      uVar11 = movmskps(uVar11,auVar20);
      if (((byte)uVar11 & 7) != 7) {
        iVar16 = (int)param_3[8] + 1;
        if ((int)(*(uint *)((longlong)param_3 + 0x44) & 0x7fffffff) < iVar16) {
          FUN_1455e5200(param_3 + 7,&PTR_vftable_14c6e47a0,(longlong)iVar16);
        }
        pfVar13 = (float *)((longlong)(int)param_3[8] * 0x10 + param_3[7]);
        if (pfVar13 != (float *)0x0) {
          *pfVar13 = fVar24;
          pfVar13[1] = fVar25;
          pfVar13[2] = fVar26;
          pfVar13[3] = fVar21;
        }
        *(int *)(param_3 + 8) = iVar16;
      }
      goto LAB_1455e4ede;
    }
LAB_1455e4ee7:
    uVar27 = 0xffffffff;
  }
  *(uint *)(param_2 + 0x20) = uVar27;
  FUN_145351440(param_2,local_98);
  local_180 = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar14 = *(longlong *)(lVar1 + 0xf0);
  if (lVar14 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar14;
  }
  local_res10 = 0x200;
  uVar19 = *(ulonglong *)(*(longlong *)(lVar14 + 0x3d0) + 0x10);
  local_168 = 0x200;
  local_178 = uVar17;
  if (*(longlong *)(uVar19 + 8) == 0) {
    local_178 = uVar19;
  }
  if (local_178 == 0) {
    local_188 = (*DAT_14c787670)(CONCAT71((int7)(uVar19 >> 8),1),&local_res10,0x40);
  }
  else {
    local_res8 = 0x200;
    if (0x1ff < *(ulonglong *)(local_178 + 0x28)) {
      local_188 = *(longlong *)(local_178 + 0x38);
      if (local_188 + 0x200U <= *(ulonglong *)(local_178 + 0x40)) {
        *(ulonglong *)(local_178 + 0x38) = local_188 + 0x200U;
        goto LAB_1455e4fd8;
      }
    }
    local_188 = FUN_144b454a0(local_178,&local_res8);
  }
LAB_1455e4fd8:
  local_17c = 0x80000020;
  local_170 = local_188;
  if (local_148 != 0xffffffff) {
    FUN_144b44850(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x140),local_148,local_98,
                  *(undefined8 *)(param_1 + 0x28),(float *)(param_2 + 0x30),&local_188);
    uVar27 = 0;
    if ((local_148 != 0xffffffff) &&
       (lVar1 = *(longlong *)
                 ((ulonglong)(local_148 >> 0x16) * 0x120 +
                 *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x140) + 0x38)),
       lVar1 != 0)) {
      uVar27 = *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x68) + 0xb0);
    }
    if (0 < local_180 / 2) {
      uVar27 = uVar27 ^ 0x80000000;
      uVar19 = uVar17;
      do {
        iVar16 = (int)param_3[1] + 1;
        puVar15 = (undefined4 *)(uVar17 + local_188);
        uVar11 = *puVar15;
        uVar5 = puVar15[1];
        uVar6 = puVar15[2];
        puVar15 = (undefined4 *)(uVar17 + 0x10 + local_188);
        uVar7 = *puVar15;
        uVar8 = puVar15[1];
        uVar9 = puVar15[2];
        if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar16) {
          FUN_1455e4ba0(param_3,uVar27,(longlong)iVar16);
        }
        puVar15 = (undefined4 *)((longlong)(int)param_3[1] * 0x20 + *param_3);
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = uVar11;
          puVar15[1] = uVar5;
          puVar15[2] = uVar6;
          puVar15[3] = uVar27;
          puVar15[4] = uVar7;
          puVar15[5] = uVar8;
          puVar15[6] = uVar9;
          puVar15[7] = uVar27;
        }
        uVar18 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
        *(int *)(param_3 + 1) = iVar16;
        uVar17 = uVar17 + 0x20;
      } while ((int)uVar18 < local_180 / 2);
    }
    if (local_170 != local_188) goto LAB_1455e511e;
  }
  local_180 = 0;
LAB_1455e511e:
  if (local_178 == 0) {
    (*DAT_14c787678)(1,local_170);
  }
  else {
    uVar17 = local_168 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_178 + 0x28) < uVar17) ||
       (uVar17 + local_170 != *(longlong *)(local_178 + 0x38))) {
      FUN_144be8550(local_178,local_170);
    }
    else {
      *(longlong *)(local_178 + 0x38) = local_170;
      if (*(longlong *)(local_178 + 0x48) == local_170) {
        FUN_144be8430(local_178);
      }
    }
  }
  local_180 = 0;
  if ((-1 < (int)local_17c) && (local_188 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_188,(ulonglong)(local_17c & 0x7fffffff) << 4);
  }
  return;
}



// FUNCTION 1455e5200 FUN_1455e5200 body=236 status=ok
// SIG undefined FUN_1455e5200(void)

void FUN_1455e5200(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 0x10;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 1455e52f0 FUN_1455e52f0 body=63 status=ok
// SIG undefined FUN_1455e52f0(void)

void FUN_1455e52f0(undefined8 *param_1)

{
  *param_1 = hkaiCollisionAvoidance::MediatorBoundaryGatherer::vftable;
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 1455e5330 FUN_1455e5330 body=96 status=ok
// SIG undefined FUN_1455e5330(void)

void FUN_1455e5330(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_218 [16];
  undefined1 local_208 [520];
  
  FUN_144bde670(local_218,local_208,0x200);
  FUN_144be6160(local_218,&DAT_149dd2610);
  iVar2 = FUN_144bfc110(0x427d313d,local_208,"BoundaryGatherer\\hkaiMediatorBoundaryGatherer.cpp",
                        0x22);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_144bde6e0(local_218);
  return;
}



// FUNCTION 1455e5390 FUN_1455e5390 body=3 status=ok
// SIG undefined FUN_1455e5390(void)

void FUN_1455e5390(void)

{
  return;
}



// FUNCTION 1455e53a0 FUN_1455e53a0 body=109 status=ok
// SIG undefined FUN_1455e53a0(void)

void FUN_1455e53a0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_238 [16];
  undefined1 local_228 [32];
  undefined1 local_208 [520];
  
  FUN_145351440(param_2,local_228);
  FUN_144bde670(local_238,local_208,0x200);
  FUN_144be6160(local_238,&DAT_149dd2610);
  iVar2 = FUN_144bfc110(0x23aa6a2e,local_208,"BoundaryGatherer\\hkaiMediatorBoundaryGatherer.cpp",
                        0x2e);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_144bde6e0(local_238);
  return;
}



// FUNCTION 1455e5410 FUN_1455e5410 body=33 status=ok
// SIG undefined FUN_1455e5410(void)

undefined8 * FUN_1455e5410(undefined8 *param_1)

{
  FUN_145542d40();
  *param_1 = &PTR_FUN_149dd2650;
  return param_1;
}



// FUNCTION 1455e5440 FUN_1455e5440 body=15 status=ok
// SIG undefined FUN_1455e5440(void)

void FUN_1455e5440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149dd2650;
  FUN_145542d70();
  return;
}



// FUNCTION 1455e5450 FUN_1455e5450 body=94 status=ok
// SIG undefined FUN_1455e5450(void)

void FUN_1455e5450(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  *(byte *)((longlong)param_1 + 0x36) =
       *(byte *)((longlong)param_1 + 0x36) ^ (*(byte *)((longlong)param_1 + 0x36) ^ bVar1) & 0x1f;
  iVar2 = (**(code **)(*param_1 + 0x48))();
  if (iVar2 == 1) {
    FUN_145542f30(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1455e54b0 FUN_1455e54b0 body=1285 status=ok
// SIG undefined FUN_1455e54b0(void)

undefined4 FUN_1455e54b0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  uVar4 = *(ushort *)((longlong)param_1 + 0x34);
  if (uVar4 < 0xc04) {
    if (uVar4 != 0xc03) {
      if (uVar4 < 0x904) {
        if (uVar4 == 0x903) {
LAB_1455e5511:
          lVar6 = FUN_145369e40();
          if (lVar6 == 0) {
            return 1;
          }
          (**(code **)(*param_1 + 0x78))(param_1,lVar6,*(undefined8 *)(param_2 + 0x40));
          goto LAB_1455e5570;
        }
        if (uVar4 < 0x705) {
          if (uVar4 == 0x704) goto LAB_1455e5976;
          if (uVar4 != 0x602) {
            if (uVar4 == 0x603) goto LAB_1455e55ca;
            if (uVar4 == 0x702) goto LAB_1455e5553;
            if (uVar4 != 0x703) {
              return 1;
            }
            goto LAB_1455e5511;
          }
        }
        else {
          if (uVar4 == 0x705) goto LAB_1455e5757;
          if (uVar4 != 0x802) {
            if (uVar4 != 0x803) {
              if (uVar4 != 0x902) {
                return 1;
              }
              goto LAB_1455e5553;
            }
            goto LAB_1455e55ca;
          }
        }
      }
      else if (uVar4 < 0xb03) {
        if (uVar4 == 0xb02) goto LAB_1455e5553;
        if (uVar4 == 0x904) {
LAB_1455e5976:
          FUN_1455e59c0(param_1,g_pRegistryMgr);
          lVar6 = DAT_14c791400;
          if (DAT_14c791400 == 0) {
            return 1;
          }
          do {
            FUN_1455e59c0(param_1,lVar6 + 0x20);
            lVar6 = *(longlong *)(lVar6 + 0x10);
          } while (lVar6 != 0);
          return 1;
        }
        if (uVar4 == 0x905) {
LAB_1455e5757:
          lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x28);
          if (lVar6 == 0) {
            return 1;
          }
          plVar7 = *(longlong **)(lVar6 + 0x20);
          if (plVar7 == (longlong *)0x0) {
            return 1;
          }
          lVar6 = 0;
          do {
            piVar1 = DAT_14c791060;
            uVar5 = *(uint *)(plVar7 + 1);
            if (*(char *)((longlong)plVar7 + 0xc) == '\0') {
              do {
                while (iVar2 = *piVar1, iVar2 < 0) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
                  if (*piVar1 < 0) goto LAB_1455e57b5;
                  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
                }
                LOCK();
                iVar3 = *piVar1;
                if (iVar2 == iVar3) {
                  *piVar1 = iVar2 + 1;
                }
                UNLOCK();
              } while (iVar2 != iVar3);
LAB_1455e57b5:
              lVar8 = lVar6;
              if (piVar1[0x12] != 0) {
                for (lVar9 = *(longlong *)
                              (*(longlong *)(piVar1 + 0x10) +
                              ((ulonglong)uVar5 % (ulonglong)(uint)piVar1[0x12]) * 8);
                    (lVar8 = lVar6, lVar9 != 0 && (lVar8 = lVar9, *(uint *)(lVar9 + 0x10) != uVar5))
                    ; lVar9 = *(longlong *)(lVar9 + 8)) {
                }
                if (lVar8 != 0) {
                  LOCK();
                  *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
                  UNLOCK();
                }
              }
              iVar2 = *piVar1;
              while (-1 < iVar2) {
                LOCK();
                iVar3 = *piVar1;
                if (iVar2 == iVar3) {
                  *piVar1 = iVar2 + -1;
                }
                UNLOCK();
                if (iVar2 == iVar3) {
                  if ((iVar2 + -1 != 0) || (piVar1[0xc] < 1)) goto LAB_1455e582a;
                  SetEvent(*(HANDLE *)(piVar1 + 0xe));
                  lVar9 = lVar8 + -0x10;
                  if (lVar8 == 0) {
                    lVar9 = lVar6;
                  }
                  goto LAB_1455e58f8;
                }
                iVar2 = *piVar1;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1455e582a:
              lVar9 = lVar8 + -0x10;
              if (lVar8 == 0) {
                lVar9 = lVar6;
              }
LAB_1455e58f8:
              if (lVar9 != 0) {
                (**(code **)(*param_1 + 0x88))(param_1,lVar9,*(undefined8 *)(param_2 + 0x40));
                LOCK();
                piVar1 = (int *)(lVar9 + 0x24);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*(longlong *)(lVar9 + 0x10) + 0x18))();
                }
              }
            }
            else {
              do {
                while (iVar2 = piVar1[0x16], iVar2 < 0) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
                  if (piVar1[0x16] < 0) goto LAB_1455e5871;
                  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
                }
                LOCK();
                bVar10 = iVar2 == piVar1[0x16];
                if (bVar10) {
                  piVar1[0x16] = iVar2 + 1;
                }
                UNLOCK();
              } while (!bVar10);
LAB_1455e5871:
              lVar9 = lVar6;
              if (piVar1[0x28] != 0) {
                for (lVar8 = *(longlong *)
                              (*(longlong *)(piVar1 + 0x26) +
                              ((ulonglong)uVar5 % (ulonglong)(uint)piVar1[0x28]) * 8);
                    (lVar9 = lVar6, lVar8 != 0 && (lVar9 = lVar8, *(uint *)(lVar8 + 0x10) != uVar5))
                    ; lVar8 = *(longlong *)(lVar8 + 8)) {
                }
                if (lVar9 != 0) {
                  LOCK();
                  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
                  UNLOCK();
                }
              }
              iVar2 = piVar1[0x16];
              while (-1 < iVar2) {
                LOCK();
                bVar10 = iVar2 == piVar1[0x16];
                if (bVar10) {
                  piVar1[0x16] = iVar2 + -1;
                }
                UNLOCK();
                if (bVar10) {
                  if ((iVar2 + -1 == 0) && (0 < piVar1[0x22])) {
                    SetEvent(*(HANDLE *)(piVar1 + 0x24));
                  }
                  goto LAB_1455e58ef;
                }
                iVar2 = piVar1[0x16];
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
LAB_1455e58ef:
              if (lVar9 != 0) {
                lVar9 = lVar9 + -0x10;
                goto LAB_1455e58f8;
              }
            }
            plVar7 = (longlong *)*plVar7;
            if (plVar7 == (longlong *)0x0) {
              return 1;
            }
          } while( true );
        }
        if (uVar4 != 0xa02) {
          if (uVar4 != 0xa03) {
            return 1;
          }
          goto LAB_1455e55ca;
        }
      }
      else {
        if (uVar4 == 0xb03) goto LAB_1455e5511;
        if (uVar4 == 0xb04) goto LAB_1455e5976;
        if (uVar4 == 0xb05) goto LAB_1455e5757;
        if (uVar4 != 0xc02) {
          return 1;
        }
      }
LAB_1455e56d4:
      lVar6 = FUN_145369e40();
      if (lVar6 == 0) {
        return 1;
      }
      (**(code **)(*param_1 + 0x70))(param_1,lVar6);
      goto LAB_1455e5570;
    }
  }
  else {
    if (uVar4 < 0x1303) {
      if (uVar4 == 0x1302) {
LAB_1455e5714:
        (**(code **)(*param_1 + 0x68))(param_1,0,*(undefined8 *)(param_2 + 0x40));
        return 1;
      }
      if (uVar4 < 0xe04) {
        if (uVar4 == 0xe03) goto LAB_1455e55ca;
        if (uVar4 == 0xd02) goto LAB_1455e5553;
        if (uVar4 != 0xd03) {
          if (uVar4 == 0xd04) goto LAB_1455e5976;
          if (uVar4 != 0xe02) {
            return 1;
          }
          goto LAB_1455e56d4;
        }
      }
      else {
        if (uVar4 == 0xf02) {
LAB_1455e5553:
          lVar6 = FUN_145369e40();
          if (lVar6 == 0) {
            return 1;
          }
          (**(code **)(*param_1 + 0x80))(param_1,lVar6);
          goto LAB_1455e5570;
        }
        if (uVar4 != 0xf03) {
          if (uVar4 != 0xf04) {
            if (uVar4 != 0xf05) {
              return 1;
            }
            goto LAB_1455e5757;
          }
          goto LAB_1455e5976;
        }
      }
      goto LAB_1455e5511;
    }
    if (0x2003 < uVar4) {
      if (uVar4 == 0x3002) goto LAB_1455e5553;
      if (uVar4 != 0x3003) {
        if (uVar4 != 0x3004) {
          if (uVar4 != 0x3005) {
            return 1;
          }
          goto LAB_1455e5757;
        }
        goto LAB_1455e5976;
      }
      goto LAB_1455e5511;
    }
    if (uVar4 != 0x2003) {
      if (uVar4 == 0x1303) goto LAB_1455e5714;
      if ((uVar4 == 0x1402) || (uVar4 == 0x1403)) {
        (**(code **)(*param_1 + 0x78))(param_1,0,*(undefined8 *)(param_2 + 0x40));
        return 1;
      }
      if (uVar4 != 0x2002) {
        return 1;
      }
      goto LAB_1455e56d4;
    }
  }
LAB_1455e55ca:
  lVar6 = FUN_145369e40();
  if (lVar6 == 0) {
    return 1;
  }
  (**(code **)(*param_1 + 0x68))(param_1,lVar6,*(undefined8 *)(param_2 + 0x40));
LAB_1455e5570:
  LOCK();
  piVar1 = (int *)(lVar6 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*(longlong *)(lVar6 + 0x10) + 0x18))();
  }
  return 1;
}



// FUNCTION 1455e59c0 FUN_1455e59c0 body=541 status=ok
// SIG undefined FUN_1455e59c0(void)

void FUN_1455e59c0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((param_2 != (longlong *)0x0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0))
  {
    lVar7 = 0;
    do {
      piVar1 = DAT_14c791060;
      uVar3 = *(uint *)(param_2 + 1);
      if (*(char *)((longlong)param_2 + 0xc) == '\0') {
        do {
          while (iVar4 = *piVar1, iVar4 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
            if (*piVar1 < 0) goto LAB_1455e5a23;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
          }
          LOCK();
          iVar2 = *piVar1;
          if (iVar4 == iVar2) {
            *piVar1 = iVar4 + 1;
          }
          UNLOCK();
        } while (iVar4 != iVar2);
LAB_1455e5a23:
        lVar5 = lVar7;
        if (piVar1[0x12] != 0) {
          for (lVar6 = *(longlong *)
                        (*(longlong *)(piVar1 + 0x10) +
                        ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8);
              (lVar5 = lVar7, lVar6 != 0 && (lVar5 = lVar6, *(uint *)(lVar6 + 0x10) != uVar3));
              lVar6 = *(longlong *)(lVar6 + 8)) {
          }
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar4 = *piVar1;
        while (-1 < iVar4) {
          LOCK();
          iVar2 = *piVar1;
          if (iVar4 == iVar2) {
            *piVar1 = iVar4 + -1;
          }
          UNLOCK();
          if (iVar4 == iVar2) {
            if ((iVar4 + -1 != 0) || (piVar1[0xc] < 1)) goto LAB_1455e5a9a;
            SetEvent(*(HANDLE *)(piVar1 + 0xe));
            lVar6 = lVar5 + -0x10;
            if (lVar5 == 0) {
              lVar6 = lVar7;
            }
            goto LAB_1455e5b68;
          }
          iVar4 = *piVar1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1455e5a9a:
        lVar6 = lVar5 + -0x10;
        if (lVar5 == 0) {
          lVar6 = lVar7;
        }
LAB_1455e5b68:
        if (lVar6 != 0) {
          (**(code **)(*param_1 + 0x90))(param_1);
          LOCK();
          piVar1 = (int *)(lVar6 + 0x24);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*(longlong *)(lVar6 + 0x10) + 0x18))();
          }
        }
      }
      else {
        do {
          while (iVar4 = piVar1[0x16], iVar4 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
            if (piVar1[0x16] < 0) goto LAB_1455e5ae1;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
          }
          LOCK();
          bVar8 = iVar4 == piVar1[0x16];
          if (bVar8) {
            piVar1[0x16] = iVar4 + 1;
          }
          UNLOCK();
        } while (!bVar8);
LAB_1455e5ae1:
        lVar6 = lVar7;
        if (piVar1[0x28] != 0) {
          for (lVar5 = *(longlong *)
                        (*(longlong *)(piVar1 + 0x26) +
                        ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x28]) * 8);
              (lVar6 = lVar7, lVar5 != 0 && (lVar6 = lVar5, *(uint *)(lVar5 + 0x10) != uVar3));
              lVar5 = *(longlong *)(lVar5 + 8)) {
          }
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar4 = piVar1[0x16];
        while (-1 < iVar4) {
          LOCK();
          bVar8 = iVar4 == piVar1[0x16];
          if (bVar8) {
            piVar1[0x16] = iVar4 + -1;
          }
          UNLOCK();
          if (bVar8) {
            if ((iVar4 + -1 == 0) && (0 < piVar1[0x22])) {
              SetEvent(*(HANDLE *)(piVar1 + 0x24));
            }
            goto LAB_1455e5b5f;
          }
          iVar4 = piVar1[0x16];
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
LAB_1455e5b5f:
        if (lVar6 != 0) {
          lVar6 = lVar6 + -0x10;
          goto LAB_1455e5b68;
        }
      }
      param_2 = (longlong *)*param_2;
    } while (param_2 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 1455e5be0 FUN_1455e5be0 body=62 status=ok
// SIG undefined FUN_1455e5be0(void)

undefined8 * FUN_1455e5be0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149dd2650;
  FUN_145542d70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1455e5c20 FUN_1455e5c20 body=103 status=ok
// SIG undefined FUN_1455e5c20(void)

undefined8 FUN_1455e5c20(float *param_1,float *param_2)

{
  undefined4 local_8;
  
  if (((uint)*param_1 & 0x7f800000) != 0x7f800000) {
    return 0;
  }
  local_8 = ABS(*param_1);
  if (local_8 == INFINITY) {
    *param_2 = *param_1 * 0.0;
    return 1;
  }
  *param_2 = *param_1 * *param_1;
  return 0;
}



// FUNCTION 1455e5c90 FUN_1455e5c90 body=567 status=ok
// SIG undefined FUN_1455e5c90(void)

undefined8 FUN_1455e5c90(short *param_1,short *param_2,int param_3,uint param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  
  if (param_3 != 0) {
    uVar6 = (ulonglong)param_5;
    do {
      uVar5 = (uint)*(byte *)(param_1 + 1);
      iVar3 = (int)*param_1;
      param_3 = param_3 + -1;
      *param_2 = *param_1;
      iVar7 = 0x1f;
      pbVar10 = (byte *)(param_1 + 2);
      param_2 = param_2 + uVar6;
      do {
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        iVar8 = ((bVar1 & 7) * 2 + 1) * (&DAT_149dd2730)[(int)uVar5];
        iVar4 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
        if ((bVar1 & 8) != 0) {
          iVar4 = -((int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3);
        }
        iVar4 = iVar4 + iVar3;
        iVar3 = iVar4;
        if ((short)iVar4 != iVar4) {
          iVar3 = 0x7fff;
          if (iVar4 < -0x8000) {
            iVar3 = -0x8000;
          }
        }
        iVar4 = *(int *)(&DAT_149dd26f0 + (ulonglong)(bVar1 & 0xf) * 4) + uVar5;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0x58 < iVar4) {
          iVar4 = 0x58;
        }
        bVar1 = bVar1 >> 4;
        *param_2 = (short)iVar3;
        iVar9 = ((bVar1 & 7) * 2 + 1) * (&DAT_149dd2730)[iVar4];
        iVar8 = (int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3;
        if ((bVar1 & 8) != 0) {
          iVar8 = -((int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3);
        }
        iVar8 = iVar8 + iVar3;
        iVar3 = iVar8;
        if ((short)iVar8 != iVar8) {
          iVar3 = 0x7fff;
          if (iVar8 < -0x8000) {
            iVar3 = -0x8000;
          }
        }
        uVar5 = *(int *)(&DAT_149dd26f0 + (ulonglong)(uint)bVar1 * 4) + iVar4;
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
        else if (0x58 < (int)uVar5) {
          uVar5 = 0x58;
        }
        param_2[uVar6] = (short)iVar3;
        param_2 = param_2 + uVar6 + uVar6;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = ((*pbVar10 & 7) * 2 + 1) * (&DAT_149dd2730)[(int)uVar5];
      iVar7 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
      if ((*pbVar10 & 8) != 0) {
        iVar7 = -((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3);
      }
      iVar7 = iVar7 + iVar3;
      if (((short)iVar7 != iVar7) && (bVar2 = iVar7 < -0x8000, iVar7 = 0x7fff, bVar2)) {
        iVar7 = -0x8000;
      }
      *param_2 = (short)iVar7;
      param_1 = (short *)((longlong)param_1 + (ulonglong)param_4);
      param_2 = param_2 + uVar6;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 1455e5ed0 FUN_1455e5ed0 body=483 status=ok
// SIG undefined FUN_1455e5ed0(void)

undefined8 FUN_1455e5ed0(short *param_1,short *param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  short *psVar10;
  uint uVar11;
  byte *pbVar12;
  bool bVar13;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar8 = (ulonglong)param_5;
  do {
    iVar4 = (int)*param_2;
    bVar1 = *(byte *)(param_2 + 2);
    uVar11 = param_3;
    if (0x40 < param_3) {
      uVar11 = 0x40;
    }
    sVar2 = param_2[1];
    iVar5 = (int)sVar2;
    param_3 = param_3 - uVar11;
    *param_1 = *param_2;
    param_1 = param_1 + uVar8;
    if (uVar11 == 1) {
      return 1;
    }
    uVar11 = uVar11 - 2;
    *param_1 = sVar2;
    pbVar12 = (byte *)((longlong)param_2 + 5);
    uVar7 = (uint)bVar1;
    psVar10 = param_1 + uVar8;
    for (uVar9 = uVar11 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      bVar1 = *pbVar12;
      lVar6 = (longlong)(int)((bVar1 & 0xf) + uVar7 * 0x10);
      iVar3 = *(int *)(&DAT_149dd28a4 + lVar6 * 8);
      iVar4 = (iVar5 * 2 - iVar4) + *(int *)(&DAT_149dd28a0 + lVar6 * 8);
      if ((iVar4 != (short)iVar4) && (bVar13 = -1 < iVar4, iVar4 = -0x8000, bVar13)) {
        iVar4 = 0x7fff;
      }
      *psVar10 = (short)iVar4;
      lVar6 = (longlong)(int)((uint)(bVar1 >> 4) + iVar3 * 0x10);
      uVar7 = *(uint *)(&DAT_149dd28a4 + lVar6 * 8);
      iVar5 = (iVar4 * 2 - iVar5) + *(int *)(&DAT_149dd28a0 + lVar6 * 8);
      if ((iVar5 != (short)iVar5) && (bVar13 = -1 < iVar5, iVar5 = -0x8000, bVar13)) {
        iVar5 = 0x7fff;
      }
      psVar10[uVar8] = (short)iVar5;
      pbVar12 = pbVar12 + 1;
      psVar10 = psVar10 + uVar8 + uVar8;
    }
    if ((uVar11 & 1) != 0) {
      iVar4 = (*(int *)(&DAT_149dd28a0 + (longlong)(int)((*pbVar12 & 0xf) + uVar7 * 0x10) * 8) +
              iVar5 * 2) - iVar4;
      if ((iVar4 != (short)iVar4) && (bVar13 = -1 < iVar4, iVar4 = -0x8000, bVar13)) {
        iVar4 = 0x7fff;
      }
      *psVar10 = (short)iVar4;
    }
    param_2 = (short *)((longlong)param_2 + (ulonglong)param_4);
    param_1 = param_1 + uVar8 + uVar11 * param_5;
  } while (param_3 != 0);
  return 1;
}



// FUNCTION 1455e60c0 ReadBytesSkip body=26 status=ok
// SIG undefined ReadBytesSkip(ReadBytesSkip * this)

/* public: __cdecl AK::ReadBytesSkip::ReadBytesSkip(void) __ptr64 */

ReadBytesSkip * __thiscall AK::ReadBytesSkip::ReadBytesSkip(ReadBytesSkip *this)

{
                    /* 0x55e60c0  7  ??0ReadBytesSkip@AK@@QEAA@XZ */
  *(undefined ***)this = &PTR_ReadBytes_149dd2ea0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}



// FUNCTION 1455e60e0 ReadBytesSkip body=29 status=ok
// SIG undefined ReadBytesSkip(ReadBytesSkip * this, void * param_1, int param_2)

/* public: __cdecl AK::ReadBytesSkip::ReadBytesSkip(void const * __ptr64,int) __ptr64 */

ReadBytesSkip * __thiscall
AK::ReadBytesSkip::ReadBytesSkip(ReadBytesSkip *this,void *param_1,int param_2)

{
                    /* 0x55e60e0  6  ??0ReadBytesSkip@AK@@QEAA@PEBXH@Z */
  *(int *)(this + 8) = param_2;
  *(undefined ***)this = &PTR_ReadBytes_149dd2ea0;
  *(void **)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}



// FUNCTION 1455e6100 ~ReadBytesSkip body=11 status=ok
// SIG void ~ReadBytesSkip(ReadBytesSkip * this)

/* public: virtual __cdecl AK::ReadBytesSkip::~ReadBytesSkip(void) __ptr64 */

void __thiscall AK::ReadBytesSkip::~ReadBytesSkip(ReadBytesSkip *this)

{
                    /* 0x55e6100  15  ??1ReadBytesSkip@AK@@UEAA@XZ */
  *(undefined ***)this = &PTR_ReadBytes_149dd2ea0;
  return;
}



// FUNCTION 1455e6110 ReadBytes body=44 status=ok
// SIG bool ReadBytes(ReadBytesSkip * this, void * param_1, int param_2, int * param_3)

/* public: virtual bool __cdecl AK::ReadBytesSkip::ReadBytes(void * __ptr64,int,int & __ptr64)
   __ptr64 */

bool __thiscall
AK::ReadBytesSkip::ReadBytes(ReadBytesSkip *this,void *param_1,int param_2,int *param_3)

{
  int iVar1;
  
                    /* 0x55e6110  220  ?ReadBytes@ReadBytesSkip@AK@@UEAA_NPEAXHAEAH@Z */
  if (*(longlong *)(this + 0x10) == 0) {
    return false;
  }
  iVar1 = *(int *)(this + 8) - *(int *)(this + 0x18);
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
  if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  *param_3 = iVar1;
  return iVar1 == param_2;
}



// FUNCTION 1455e6140 Attach body=16 status=ok
// SIG void Attach(ReadBytesSkip * this, void * param_1, int param_2)

/* public: void __cdecl AK::ReadBytesSkip::Attach(void const * __ptr64,int) __ptr64 */

void __thiscall AK::ReadBytesSkip::Attach(ReadBytesSkip *this,void *param_1,int param_2)

{
                    /* 0x55e6140  31  ?Attach@ReadBytesSkip@AK@@QEAAXPEBXH@Z */
  *(int *)(this + 8) = param_2;
  *(void **)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}



// FUNCTION 1455e6150 Count body=4 status=ok
// SIG int Count(ReadBytesSkip * this)

/* public: int __cdecl AK::ReadBytesSkip::Count(void) __ptr64 */

int __thiscall AK::ReadBytesSkip::Count(ReadBytesSkip *this)

{
                    /* 0x55e6150  45  ?Count@ReadBytesSkip@AK@@QEAAHXZ */
  return *(int *)(this + 0x18);
}



// FUNCTION 1455e6160 FUN_1455e6160 body=140 status=ok
// SIG undefined FUN_1455e6160(void)

undefined8 * FUN_1455e6160(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((param_2 & 2) != 0) {
    lVar2 = param_1[-1];
    puVar1 = param_1 + lVar2 * 4;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      puVar1[-4] = &PTR_ReadBytes_149dd2ea0;
      puVar1 = puVar1 + -4;
    }
    if ((param_2 & 1) != 0) {
      thunk_FUN_1400020a8(param_1 + -1,param_1[-1] * 0x20 + 8);
    }
    return param_1 + -1;
  }
  *param_1 = &PTR_ReadBytes_149dd2ea0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1455e61f0 WriteBytesCount body=21 status=ok
// SIG undefined WriteBytesCount(WriteBytesCount * this)

/* public: __cdecl AK::WriteBytesCount::WriteBytesCount(void) __ptr64 */

WriteBytesCount * __thiscall AK::WriteBytesCount::WriteBytesCount(WriteBytesCount *this)

{
                    /* 0x55e61f0  9  ??0WriteBytesCount@AK@@QEAA@XZ */
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_WriteBytes_149dd2eb0;
  return this;
}



// FUNCTION 1455e6210 ~WriteBytesCount body=11 status=ok
// SIG void ~WriteBytesCount(WriteBytesCount * this)

/* public: virtual __cdecl AK::WriteBytesCount::~WriteBytesCount(void) __ptr64 */

void __thiscall AK::WriteBytesCount::~WriteBytesCount(WriteBytesCount *this)

{
                    /* 0x55e6210  17  ??1WriteBytesCount@AK@@UEAA@XZ */
  *(undefined ***)this = &PTR_WriteBytes_149dd2eb0;
  return;
}



// FUNCTION 1455e6220 WriteBytes body=7 status=ok
// SIG bool WriteBytes(WriteBytesCount * this, void * param_1, int param_2, int * param_3)

/* public: virtual bool __cdecl AK::WriteBytesCount::WriteBytes(void const * __ptr64,int,int &
   __ptr64) __ptr64 */

bool __thiscall
AK::WriteBytesCount::WriteBytes(WriteBytesCount *this,void *param_1,int param_2,int *param_3)

{
                    /* 0x55e6220  362  ?WriteBytes@WriteBytesCount@AK@@UEAA_NPEBXHAEAH@Z */
  *(int *)(this + 8) = *(int *)(this + 8) + param_2;
  return true;
}



// FUNCTION 1455e6230 Reserve body=3 status=ok
// SIG bool Reserve(WriteBytesCount * this, int param_1)

/* public: virtual bool __cdecl AK::WriteBytesCount::Reserve(int) __ptr64 */

bool __thiscall AK::WriteBytesCount::Reserve(WriteBytesCount *this,int param_1)

{
                    /* 0x55e6230  242  ?Reserve@WriteBytesCount@AK@@UEAA_NH@Z */
  return false;
}



// FUNCTION 1455e6240 Count body=4 status=ok
// SIG int Count(WriteBytesCount * this)

/* public: virtual int __cdecl AK::WriteBytesCount::Count(void)const __ptr64 */

int __thiscall AK::WriteBytesCount::Count(WriteBytesCount *this)

{
                    /* 0x55e6240  46  ?Count@WriteBytesCount@AK@@UEBAHXZ */
  return *(int *)(this + 8);
}



// FUNCTION 1455e6250 SetCount body=4 status=ok
// SIG void SetCount(WriteBytesCount * this, int param_1)

/* public: virtual void __cdecl AK::WriteBytesCount::SetCount(int) __ptr64 */

void __thiscall AK::WriteBytesCount::SetCount(WriteBytesCount *this,int param_1)

{
                    /* 0x55e6250  278  ?SetCount@WriteBytesCount@AK@@UEAAXH@Z */
  *(int *)(this + 8) = param_1;
  return;
}



// FUNCTION 1455e6260 Bytes body=3 status=ok
// SIG uchar * Bytes(WriteBytesCount * this)

/* public: virtual unsigned char * __ptr64 __cdecl AK::WriteBytesCount::Bytes(void)const __ptr64 */

uchar * __thiscall AK::WriteBytesCount::Bytes(WriteBytesCount *this)

{
                    /* 0x55e6260  33  ?Bytes@WriteBytesCount@AK@@UEBAPEAEXZ */
  return (uchar *)0x0;
}



// FUNCTION 1455e6270 Detach body=3 status=ok
// SIG uchar * Detach(WriteBytesCount * this)

/* public: virtual unsigned char * __ptr64 __cdecl AK::WriteBytesCount::Detach(void) __ptr64 */

uchar * __thiscall AK::WriteBytesCount::Detach(WriteBytesCount *this)

{
                    /* 0x55e6270  52  ?Detach@WriteBytesCount@AK@@UEAAPEAEXZ */
  return (uchar *)0x0;
}



// FUNCTION 1455e6280 Clear body=8 status=ok
// SIG void Clear(WriteBytesCount * this)

/* public: virtual void __cdecl AK::WriteBytesCount::Clear(void) __ptr64 */

void __thiscall AK::WriteBytesCount::Clear(WriteBytesCount *this)

{
                    /* 0x55e6280  40  ?Clear@WriteBytesCount@AK@@UEAAXXZ */
  *(undefined4 *)(this + 8) = 0;
  return;
}



// FUNCTION 1455e6290 FUN_1455e6290 body=140 status=ok
// SIG undefined FUN_1455e6290(void)

undefined8 * FUN_1455e6290(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((param_2 & 2) != 0) {
    lVar2 = param_1[-1];
    puVar1 = param_1 + lVar2 * 2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      puVar1[-2] = &PTR_WriteBytes_149dd2eb0;
      puVar1 = puVar1 + -2;
    }
    if ((param_2 & 1) != 0) {
      thunk_FUN_1400020a8(param_1 + -1,param_1[-1] * 0x10 + 8);
    }
    return param_1 + -1;
  }
  *param_1 = &PTR_WriteBytes_149dd2eb0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1455e6320 FUN_1455e6320 body=65 status=ok
// SIG undefined FUN_1455e6320(void)

void FUN_1455e6320(longlong param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    AK::MemoryMgr::Free(*(int *)(param_1 + 0x14),*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1455e6370 FUN_1455e6370 body=102 status=ok
// SIG undefined FUN_1455e6370(void)

undefined4 * FUN_1455e6370(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  piVar1 = *(int **)(param_1 + 2);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    AK::MemoryMgr::Free(param_1[5],*(void **)(param_1 + 2));
  }
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  piVar1 = *(int **)(param_2 + 2);
  *(int **)(param_1 + 2) = piVar1;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  return param_1;
}



// FUNCTION 1455e63e0 FUN_1455e63e0 body=1043 status=ok
// SIG undefined FUN_1455e63e0(void)

bool FUN_1455e63e0(uint *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  byte *pbVar11;
  byte bVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ushort *puVar20;
  int local_res8;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  bVar4 = *(byte *)(param_3 + 1);
  iVar10 = (char)bVar4 + 2;
  uVar2 = *(ushort *)*param_3;
  *(byte *)(param_3 + 1) = (byte)iVar10 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar10 >> 3);
  *param_3 = ((longlong)iVar10 >> 3) + *param_3;
  *param_1 = uVar2 >> (bVar4 & 0x1f) & 3;
  iVar10 = (char)*(byte *)(param_3 + 1) + 0x18;
  uVar15 = (uint)(*(longlong *)*param_3 >> (*(byte *)(param_3 + 1) & 0x3f)) & DAT_14c746a60;
  *(byte *)(param_3 + 1) = (byte)iVar10 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar10 >> 3);
  *param_3 = ((longlong)iVar10 >> 3) + *param_3;
  param_1[6] = uVar15;
  iVar10 = (char)*(byte *)(param_3 + 1) + 0x18;
  uVar15 = (uint)(*(longlong *)*param_3 >> (*(byte *)(param_3 + 1) & 0x3f)) & DAT_14c746a60;
  *(byte *)(param_3 + 1) = (byte)iVar10 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar10 >> 3);
  *param_3 = ((longlong)iVar10 >> 3) + *param_3;
  param_1[7] = uVar15;
  iVar10 = (char)*(byte *)(param_3 + 1) + 0x18;
  uVar15 = (uint)(*(longlong *)*param_3 >> (*(byte *)(param_3 + 1) & 0x3f)) & DAT_14c746a60;
  *(byte *)(param_3 + 1) = (byte)iVar10 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar10 >> 3);
  *param_3 = ((longlong)iVar10 >> 3) + *param_3;
  param_1[8] = uVar15 + 1;
  bVar4 = *(byte *)(param_3 + 1);
  iVar10 = (char)bVar4 + 6;
  uVar2 = *(ushort *)*param_3;
  *(byte *)(param_3 + 1) = (byte)iVar10 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar10 >> 3);
  *param_3 = ((longlong)iVar10 >> 3) + *param_3;
  *(byte *)(param_1 + 9) = ((byte)(uVar2 >> (bVar4 & 0x1f)) & 0x3f) + 1;
  iVar10 = (char)*(byte *)(param_3 + 1) + 8;
  bVar4 = (byte)(*(short *)*param_3 >> (*(byte *)(param_3 + 1) & 0x1f));
  *(byte *)(param_3 + 1) = (byte)iVar10 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar10 >> 3);
  *param_3 = ((longlong)iVar10 >> 3) + *param_3;
  *(byte *)((longlong)param_1 + 0x25) = bVar4;
  if ((int)(uint)bVar4 < *(int *)(param_2 + 0x18)) {
    uVar18 = 0;
    uVar7 = uVar18;
    if ((char)param_1[9] != '\0') {
      uVar15 = (int)(char)param_1[9] + 3U & 0xfffffffc;
      uVar17 = *(int *)(param_4 + 0x50) + uVar15;
      if (uVar17 <= *(uint *)(param_4 + 0x54)) {
        uVar7 = *(ulonglong *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x50) = uVar17;
        *(ulonglong *)(param_4 + 0x48) = uVar15 + uVar7;
      }
    }
    *(ulonglong *)(param_1 + 2) = uVar7;
    uVar15 = (char)param_1[9] * 8;
    uVar7 = uVar18;
    if ((((int)(char)param_1[9] & 0x1fffffffU) != 0) &&
       (uVar17 = *(int *)(param_4 + 0x50) + uVar15, uVar17 <= *(uint *)(param_4 + 0x54))) {
      uVar7 = *(ulonglong *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar17;
      *(ulonglong *)(param_4 + 0x48) = uVar15 + uVar7;
    }
    cVar9 = (char)param_1[9];
    *(ulonglong *)(param_1 + 4) = uVar7;
    uVar7 = uVar18;
    uVar19 = uVar18;
    if ('\0' < cVar9) {
      do {
        bVar4 = *(byte *)(param_3 + 1);
        uVar2 = *(ushort *)*param_3;
        pbVar11 = (byte *)(((longlong)(char)bVar4 + 3 >> 3) + *param_3);
        *(int *)((longlong)param_3 + 0xc) =
             *(int *)((longlong)param_3 + 0xc) - ((char)bVar4 + 3 >> 3);
        bVar5 = (byte)((char)bVar4 + 3) & 7;
        bVar16 = (byte)(uVar2 >> (bVar4 & 0x1f)) & 7;
        *(byte *)(param_3 + 1) = bVar5;
        *param_3 = (longlong)pbVar11;
        bVar4 = *pbVar11;
        bVar12 = (byte)(bVar5 + 1) & 7;
        iVar10 = *(int *)((longlong)param_3 + 0xc) - (bVar5 + 1 >> 3);
        puVar20 = (ushort *)(pbVar11 + ((ulonglong)bVar5 + 1 >> 3));
        *(byte *)(param_3 + 1) = bVar12;
        *(int *)((longlong)param_3 + 0xc) = iVar10;
        *param_3 = (longlong)puVar20;
        if ((bVar4 >> bVar5 & 1) != 0) {
          uVar2 = *puVar20;
          uVar15 = bVar12 + 5;
          *(byte *)(param_3 + 1) = (byte)uVar15 & 7;
          *(uint *)((longlong)param_3 + 0xc) = iVar10 - (uVar15 >> 3);
          *param_3 = (longlong)((ulonglong)(uVar15 >> 3) + (longlong)puVar20);
          bVar16 = bVar16 | (char)(uVar2 >> bVar12) * '\b';
        }
        uVar15 = (int)uVar7 + 1;
        *(byte *)(uVar19 + *(longlong *)(param_1 + 2)) = bVar16;
        cVar9 = (char)param_1[9];
        uVar7 = (ulonglong)uVar15;
        uVar19 = uVar19 + 1;
      } while ((int)uVar15 < (int)cVar9);
    }
    local_res8 = 0;
    uVar7 = uVar18;
    uVar19 = uVar18;
    uVar14 = uVar18;
    if ('\0' < cVar9) {
      do {
        do {
          iVar10 = (int)uVar7;
          iVar13 = (int)uVar14;
          if ((*(byte *)(uVar19 + *(longlong *)(param_1 + 2)) >> ((byte)uVar7 & 0x1f) & 1) == 0) {
            uVar8 = (ulonglong)(iVar10 + 1);
            *(undefined1 *)((longlong)(iVar13 + iVar10) + *(longlong *)(param_1 + 4)) = 0xff;
          }
          else {
            bVar4 = *(byte *)(param_3 + 1);
            iVar1 = (char)bVar4 + 8;
            sVar3 = *(short *)*param_3;
            *(byte *)(param_3 + 1) = (byte)iVar1 & 7;
            *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar1 >> 3);
            bVar4 = (byte)(sVar3 >> (bVar4 & 0x1f));
            *param_3 = ((longlong)iVar1 >> 3) + *param_3;
            if (*(int *)(param_2 + 0x18) <= (int)(uint)bVar4) goto LAB_1455e67d9;
            *(byte *)((longlong)(iVar13 + iVar10) + *(longlong *)(param_1 + 4)) = bVar4;
            uVar8 = (ulonglong)(iVar10 + 1U);
            if ((int)*(char *)((longlong)param_1 + 0x26) < (int)(iVar10 + 1U)) {
              *(byte *)((longlong)param_1 + 0x26) = (byte)uVar7 + 1;
            }
          }
          uVar7 = uVar8;
        } while ((int)uVar8 < 8);
        local_res8 = local_res8 + 1;
        uVar7 = uVar18;
        uVar19 = uVar19 + 1;
        uVar14 = (ulonglong)(iVar13 + 8);
      } while (local_res8 < (char)param_1[9]);
    }
    bVar6 = *(int *)((longlong)param_3 + 0xc) < 0;
  }
  else {
LAB_1455e67d9:
    bVar6 = true;
  }
  return bVar6;
}



// FUNCTION 1455e6800 FUN_1455e6800 body=1593 status=ok
// SIG undefined FUN_1455e6800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1455e6800(longlong param_1,int *param_2,longlong *param_3,int *param_4,int param_5)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  char *pcVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined8 auStack_c0 [5];
  int aiStack_98 [4];
  undefined8 local_88;
  int local_80;
  ulonglong local_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  
  local_50 = *(longlong *)(param_1 + 0x18);
  local_68 = param_2[8];
  iVar6 = param_2[6];
  local_58 = (ulonglong)*(byte *)((longlong)param_2 + 0x25) * 0x20 + *(longlong *)(local_50 + 0x40);
  iVar16 = 0;
  bVar2 = *(byte *)(local_58 + 0x1a);
  uVar23 = (uint)bVar2;
  uVar24 = (ulonglong)uVar23;
  iVar9 = *(int *)(local_50 + (longlong)*(int *)(param_1 + 0x3c) * 4);
  iVar7 = param_2[7];
  local_60 = (ulonglong)bVar2;
  if (*param_2 < 2) {
    iVar9 = iVar9 >> 1;
    if (iVar9 <= iVar7) {
      iVar7 = iVar9;
    }
    if (0 < iVar7 - iVar6) {
      iVar6 = (iVar7 - iVar6) / local_68;
      lVar19 = (longlong)iVar6;
      iVar6 = (bVar2 - 1) + iVar6;
      if (0 < (longlong)param_5) {
        lVar10 = 0;
        plVar14 = param_3;
        do {
          if (param_4[lVar10] != 0) {
            iVar16 = iVar16 + 1;
            *plVar14 = param_3[lVar10];
            plVar14 = plVar14 + 1;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < param_5);
        if (iVar16 != 0) {
          lVar10 = (longlong)iVar16;
          uVar11 = lVar10 * 8 + 0xf;
          if (uVar11 <= (ulonglong)(lVar10 * 8)) {
            uVar11 = 0xffffffffffffff0;
          }
          auStack_c0[0] = 0x1455e6905;
          lVar22 = -(uVar11 & 0xfffffffffffffff0);
          plVar14 = (longlong *)((longlong)&local_88 + lVar22);
          iVar6 = iVar6 - iVar6 % (int)uVar23;
          local_40 = plVar14;
          uVar11 = (longlong)(iVar6 * iVar16) + 0xf;
          if (uVar11 <= (ulonglong)(longlong)(iVar6 * iVar16)) {
            uVar11 = 0xffffffffffffff0;
          }
          *(undefined8 *)((longlong)auStack_c0 + lVar22) = 0x1455e6939;
          lVar17 = -(uVar11 & 0xfffffffffffffff0);
          *plVar14 = (longlong)&local_88 + lVar17 + lVar22;
          if (1 < lVar10) {
            lVar12 = 1;
            iVar9 = iVar6;
            do {
              lVar8 = (longlong)iVar9;
              iVar9 = iVar9 + iVar6;
              plVar14[lVar12] = lVar8 + *plVar14;
              lVar12 = lVar12 + 1;
            } while (lVar12 < lVar10);
          }
          local_70 = lVar19;
          local_88._0_4_ = 0;
          if ('\0' < *(char *)((longlong)param_2 + 0x26)) {
            do {
              iVar6 = 0;
              lVar12 = 0;
              local_80 = 0;
              iVar9 = (int)local_88;
              if (0 < lVar19) {
                do {
                  if (iVar9 == 0) {
                    *(undefined1 *)(uVar24 + lVar12 + -1 + *plVar14) = 1;
                    for (lVar19 = uVar24 - 2; -1 < lVar19; lVar19 = lVar19 + -1) {
                      pcVar15 = (char *)(lVar19 + lVar12 + *plVar14);
                      *pcVar15 = pcVar15[1] * (char)param_2[9];
                    }
                    lVar19 = 1;
                    uVar11 = uVar24;
                    if (lVar10 < 2) {
                      lVar19 = local_70;
                      iVar9 = (int)local_88;
                      if (lVar10 < 1) goto LAB_1455e6acb;
                    }
                    else {
                      do {
                        while (uVar11 = uVar11 - 1, -1 < (longlong)uVar11) {
                          *(undefined1 *)(plVar14[lVar19] + uVar11 + lVar12) =
                               *(undefined1 *)(uVar11 + lVar12 + plVar14[lVar19 + -1]);
                        }
                        lVar19 = lVar19 + 1;
                        uVar11 = uVar24;
                      } while (lVar19 < lVar10);
                    }
                    lVar8 = 0;
                    plVar20 = plVar14;
                    do {
                      lVar19 = local_58;
                      *(undefined8 *)((longlong)auStack_c0 + lVar17 + lVar22) = 0x1455e6a5c;
                      uVar11 = FUN_1455ea1b0(lVar19,param_1);
                      uVar11 = uVar11 & 0xffffffff;
                      if (*(int *)(param_1 + 0xc) < 0) {
                        return 0;
                      }
                      lVar19 = 0;
                      if (uVar23 != 0) {
                        lVar13 = *plVar20;
                        do {
                          uVar21 = (uint)*(char *)(lVar13 + lVar19 + lVar12);
                          *(char *)(lVar13 + lVar19 + lVar12) = (char)(uVar11 / uVar21);
                          lVar13 = *plVar20;
                          lVar1 = lVar13 + lVar19;
                          lVar19 = lVar19 + 1;
                          uVar11 = (ulonglong)
                                   ((int)uVar11 - (int)*(char *)(lVar1 + lVar12) * uVar21);
                        } while (lVar19 < (longlong)uVar24);
                      }
                      lVar8 = lVar8 + 1;
                      plVar20 = plVar20 + 1;
                      lVar19 = local_70;
                      iVar6 = local_80;
                      iVar9 = (int)local_88;
                    } while (lVar8 < lVar10);
                  }
LAB_1455e6acb:
                  iVar7 = 0;
                  local_78 = local_78 & 0xffffffff00000000;
                  if (uVar23 != 0) {
                    iVar16 = iVar6 * local_68;
                    local_88._4_4_ = iVar16;
                    iVar18 = local_68;
                    do {
                      uVar24 = local_60;
                      local_88._4_4_ = iVar16;
                      if (lVar19 <= lVar12) goto LAB_1455e6bf1;
                      lVar19 = 0;
                      if (0 < lVar10) {
                        bVar2 = (byte)iVar9 & 0x1f;
                        plVar20 = param_3;
                        do {
                          cVar3 = *(char *)(lVar12 + *(longlong *)
                                                      (((longlong)plVar14 - (longlong)param_3) +
                                                      (longlong)plVar20));
                          if ((*(byte *)((longlong)cVar3 + *(longlong *)(param_2 + 2)) &
                              ((byte)(1 << bVar2) | (byte)(1 >> 0x20 - bVar2))) != 0) {
                            lVar13 = (ulonglong)
                                     *(byte *)((longlong)(iVar9 + cVar3 * 8) +
                                              *(longlong *)(param_2 + 4)) * 0x20 +
                                     *(longlong *)(local_50 + 0x40);
                            iVar6 = param_2[6];
                            lVar8 = *plVar20;
                            *(int *)((longlong)aiStack_98 + lVar17 + lVar22) = iVar18;
                            local_48 = lVar8 + (longlong)(iVar6 + iVar16) * 4;
                            pcVar4 = *(code **)(*(longlong *)(lVar13 + 0x10) + 0x48);
                            *(undefined8 *)((longlong)auStack_c0 + lVar17 + lVar22) = 0x1455e6b70;
                            (*pcVar4)(lVar13,&local_48,0,param_1);
                            iVar16 = local_88._4_4_;
                            iVar9 = (int)local_88;
                            iVar18 = local_68;
                          }
                          lVar19 = lVar19 + 1;
                          plVar20 = plVar20 + 1;
                        } while (lVar19 < lVar10);
                        plVar14 = local_40;
                        iVar6 = local_80;
                        iVar7 = (int)local_78;
                      }
                      iVar7 = iVar7 + 1;
                      iVar6 = iVar6 + 1;
                      iVar16 = iVar16 + iVar18;
                      local_78 = CONCAT44(local_78._4_4_,iVar7);
                      lVar12 = lVar12 + 1;
                      local_80 = iVar6;
                      local_88._4_4_ = iVar16;
                      lVar19 = local_70;
                      uVar24 = local_60;
                    } while (iVar7 < (int)uVar23);
                  }
                } while (lVar12 < lVar19);
              }
LAB_1455e6bf1:
              local_88._0_4_ = iVar9 + 1;
            } while (iVar9 + 1 < (int)*(char *)((longlong)param_2 + 0x26));
          }
        }
      }
    }
  }
  else {
    iVar9 = iVar9 * param_5 >> 1;
    if (iVar9 <= iVar7) {
      iVar7 = iVar9;
    }
    if (0 < iVar7 - iVar6) {
      iVar9 = (iVar7 - iVar6) / local_68;
      iVar7 = (bVar2 - 1) + iVar9;
      uVar11 = (ulonglong)(iVar7 - iVar7 % (int)(uint)bVar2);
      uVar24 = uVar11 + 0xf;
      if (uVar24 <= uVar11) {
        uVar24 = 0xffffffffffffff0;
      }
      auStack_c0[0] = 0x1455e6c5b;
      lVar19 = -(uVar24 & 0xfffffffffffffff0);
      local_70 = (longlong)&local_88 + lVar19;
      local_88._4_4_ = iVar6 / 2;
      if (param_4[1] != 0 || *param_4 != 0) {
        local_78 = (longlong)iVar9;
        local_88._0_4_ = 0;
        iVar6 = local_68 / 2;
        lVar10 = (longlong)&local_88 + lVar19;
        if ('\0' < *(char *)((longlong)param_2 + 0x26)) {
          do {
            iVar7 = 0;
            lVar17 = 0;
            uVar24 = local_78;
            lVar22 = lVar10;
            iVar9 = (int)local_88;
            if (0 < (longlong)local_78) {
              do {
                uVar11 = local_60;
                if ((int)local_88 == 0) {
                  *(undefined1 *)(local_60 + lVar17 + -1 + lVar10) = 1;
                  if (-1 < (longlong)(uVar11 - 2)) {
                    lVar22 = uVar11 - 1;
                    pcVar15 = (char *)(lVar17 + (uVar11 - 2) + lVar10);
                    do {
                      *pcVar15 = pcVar15[1] * (char)param_2[9];
                      lVar22 = lVar22 + -1;
                      pcVar15 = pcVar15 + -1;
                    } while (lVar22 != 0);
                  }
                  lVar22 = local_58;
                  *(undefined8 *)((longlong)auStack_c0 + lVar19) = 0x1455e6d05;
                  uVar21 = FUN_1455ea1b0(lVar22);
                  uVar24 = local_78;
                  if ((int)uVar11 == 0) goto LAB_1455e6d54;
                  pcVar15 = (char *)(lVar17 + lVar10);
                  do {
                    cVar3 = *pcVar15;
                    cVar5 = (char)(uVar21 / (uint)(int)cVar3);
                    *pcVar15 = cVar5;
                    uVar21 = uVar21 - (int)cVar5 * (int)cVar3;
                    uVar11 = uVar11 - 1;
                    pcVar15 = pcVar15 + 1;
                  } while (uVar11 != 0);
LAB_1455e6d62:
                  iVar16 = 0;
                  bVar2 = (byte)(int)local_88 & 0x1f;
                  iVar18 = iVar7 * iVar6 + local_88._4_4_;
                  iVar9 = (int)local_88;
                  do {
                    lVar22 = local_70;
                    if ((longlong)local_78 <= lVar17) goto LAB_1455e6e07;
                    cVar3 = *(char *)(lVar17 + local_70);
                    if ((*(byte *)((longlong)cVar3 + *(longlong *)(param_2 + 2)) &
                        ((byte)(1 << bVar2) | (byte)(1 >> 0x20 - bVar2))) != 0) {
                      lVar10 = *(longlong *)(param_2 + 4);
                      *(int *)((longlong)aiStack_98 + lVar19) = iVar6;
                      lVar10 = (ulonglong)*(byte *)((iVar9 + cVar3 * 8) + lVar10) * 0x20 +
                               *(longlong *)(local_50 + 0x40);
                      pcVar4 = *(code **)(*(longlong *)(lVar10 + 0x10) + 0x48);
                      *(undefined8 *)((longlong)auStack_c0 + lVar19) = 0x1455e6dc9;
                      (*pcVar4)(lVar10,param_3,iVar18,param_1);
                      iVar9 = (int)local_88;
                    }
                    iVar16 = iVar16 + 1;
                    iVar7 = iVar7 + 1;
                    iVar18 = iVar18 + iVar6;
                    lVar17 = lVar17 + 1;
                    uVar24 = local_78;
                    lVar10 = local_70;
                  } while (iVar16 < (int)uVar23);
                }
                else {
LAB_1455e6d54:
                  if (uVar23 != 0) goto LAB_1455e6d62;
                }
                lVar22 = local_70;
                iVar9 = (int)local_88;
              } while (lVar17 < (longlong)uVar24);
            }
LAB_1455e6e07:
            local_88._0_4_ = iVar9 + 1;
            lVar10 = lVar22;
          } while (iVar9 + 1 < (int)*(char *)((longlong)param_2 + 0x26));
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1455e6e40 FUN_1455e6e40 body=363 status=ok
// SIG undefined FUN_1455e6e40(void)

void FUN_1455e6e40(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int *piVar15;
  
  lVar12 = param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  uVar13 = 0;
  iVar5 = *(int *)(lVar12 + 0x34);
  uVar6 = *(uint *)(lVar12 + 0x38);
  iVar7 = *(int *)(lVar12 + 0x3c);
  piVar15 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar15 + param_5;
  while (piVar15 != piVar1) {
    iVar10 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar13 = uVar13 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar11 = iVar10;
    for (; ((int)(uint)bVar2 <= iVar11 && (piVar15 != piVar1)); piVar15 = piVar15 + 1) {
      uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar13) * 2);
      bVar3 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar13));
      uVar14 = (uint)bVar3;
      uVar13 = uVar13 >> (bVar3 & 0x3f);
      if (uVar4 < 0x8000) {
        lVar12 = *param_1 + (ulonglong)uVar4 * 2;
        uVar9 = 0;
        do {
          uVar8 = (uint)uVar13;
          uVar13 = uVar13 >> 1;
          uVar14 = uVar14 + 1;
          lVar12 = lVar12 + uVar9 * 2;
          bVar3 = *(byte *)((ulonglong)(uVar8 & 1) + lVar12);
          uVar9 = (ulonglong)bVar3;
        } while (bVar3 < 0x80);
        uVar8 = bVar3 & 0x7f;
      }
      else {
        uVar8 = uVar4 & 0x7fff;
      }
      iVar11 = iVar11 - uVar14;
      *piVar15 = *piVar15 + (uVar8 & uVar6) * iVar7 + iVar5;
    }
    iVar10 = ((char)param_4[1] - iVar11) + iVar10;
    *(byte *)(param_4 + 1) = (byte)iVar10 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar10 >> 3);
    *param_4 = *param_4 + ((longlong)iVar10 >> 3);
  }
  return;
}



// FUNCTION 1455e6fb0 FUN_1455e6fb0 body=380 status=ok
// SIG undefined FUN_1455e6fb0(void)

void FUN_1455e6fb0(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  
  lVar14 = param_1[2];
  bVar2 = *(byte *)(lVar14 + 0x50);
  iVar6 = *(int *)(lVar14 + 0x34);
  uVar7 = *(uint *)(lVar14 + 0x38);
  iVar8 = *(int *)(lVar14 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar16 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar13 = 0;
  piVar1 = piVar16 + param_5;
  while (piVar16 != piVar1) {
    iVar11 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar13 = uVar13 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar12 = iVar11;
    for (; ((int)(uint)bVar3 <= iVar12 && (piVar16 != piVar1)); piVar16 = piVar16 + 2) {
      uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar13) * 2);
      bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar13));
      uVar15 = (uint)bVar4;
      uVar13 = uVar13 >> (bVar4 & 0x3f);
      if (uVar5 < 0x8000) {
        lVar14 = *param_1 + (ulonglong)uVar5 * 2;
        uVar10 = 0;
        do {
          uVar9 = (uint)uVar13;
          uVar13 = uVar13 >> 1;
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + uVar10 * 2;
          bVar4 = *(byte *)((ulonglong)(uVar9 & 1) + lVar14);
          uVar10 = (ulonglong)bVar4;
        } while (bVar4 < 0x80);
        uVar9 = bVar4 & 0x7f;
      }
      else {
        uVar9 = uVar5 & 0x7fff;
      }
      iVar12 = iVar12 - uVar15;
      *piVar16 = *piVar16 + (uVar9 & uVar7) * iVar8 + iVar6;
      piVar16[1] = piVar16[1] + ((int)uVar9 >> (bVar2 & 0x1f) & uVar7) * iVar8 + iVar6;
    }
    iVar11 = ((char)param_4[1] - iVar12) + iVar11;
    *(byte *)(param_4 + 1) = (byte)iVar11 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar11 >> 3);
    *param_4 = *param_4 + ((longlong)iVar11 >> 3);
  }
  return;
}



// FUNCTION 1455e7130 FUN_1455e7130 body=425 status=ok
// SIG undefined FUN_1455e7130(void)

void FUN_1455e7130(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  
  lVar14 = param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar6 = *(int *)(lVar14 + 0x34);
  uVar7 = *(uint *)(lVar14 + 0x38);
  bVar3 = *(byte *)(lVar14 + 0x50);
  iVar8 = *(int *)(lVar14 + 0x3c);
  piVar16 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar13 = 0;
  piVar1 = piVar16 + param_5;
  do {
    if (piVar16 == piVar1) {
      return;
    }
    iVar11 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar13 = uVar13 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar12 = iVar11;
    if ((int)(uint)bVar2 <= iVar11) {
      do {
        if (piVar16 == piVar1) break;
        uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar13) * 2);
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar13));
        uVar15 = (uint)bVar4;
        uVar13 = uVar13 >> (bVar4 & 0x3f);
        if (uVar5 < 0x8000) {
          lVar14 = *param_1 + (ulonglong)uVar5 * 2;
          uVar10 = 0;
          do {
            uVar9 = (uint)uVar13;
            uVar13 = uVar13 >> 1;
            uVar15 = uVar15 + 1;
            lVar14 = lVar14 + uVar10 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar9 & 1) + lVar14);
            uVar10 = (ulonglong)bVar4;
          } while (bVar4 < 0x80);
          uVar9 = bVar4 & 0x7f;
        }
        else {
          uVar9 = uVar5 & 0x7fff;
        }
        iVar12 = iVar12 - uVar15;
        *piVar16 = *piVar16 + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar3 & 0x1f);
        piVar16[1] = piVar16[1] + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar3 & 0x1f);
        piVar16[2] = piVar16[2] + (uVar9 & uVar7) * iVar8 + iVar6;
        piVar16[3] = piVar16[3] + ((int)uVar9 >> (bVar3 & 0x1f) & uVar7) * iVar8 + iVar6;
        piVar16 = piVar16 + 4;
      } while ((int)(uint)bVar2 <= iVar12);
    }
    iVar11 = ((char)param_4[1] - iVar12) + iVar11;
    *(byte *)(param_4 + 1) = (byte)iVar11 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar11 >> 3);
    *param_4 = *param_4 + ((longlong)iVar11 >> 3);
  } while( true );
}



// FUNCTION 1455e72e0 FUN_1455e72e0 body=501 status=ok
// SIG undefined FUN_1455e72e0(void)

void FUN_1455e72e0(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  
  lVar15 = param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar6 = *(int *)(lVar15 + 0x34);
  uVar7 = *(uint *)(lVar15 + 0x38);
  bVar3 = *(byte *)(lVar15 + 0x50);
  iVar8 = *(int *)(lVar15 + 0x3c);
  piVar11 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar14 = 0;
  piVar1 = piVar11 + param_5;
  do {
    if (piVar11 == piVar1) {
      return;
    }
    iVar12 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar14 = uVar14 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar13 = iVar12;
    if ((int)(uint)bVar2 <= iVar12) {
      do {
        if (piVar11 == piVar1) break;
        uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar14) * 2);
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar14));
        uVar16 = (uint)bVar4;
        uVar14 = uVar14 >> (bVar4 & 0x3f);
        if (uVar5 < 0x8000) {
          lVar15 = *param_1 + (ulonglong)uVar5 * 2;
          uVar10 = 0;
          do {
            uVar9 = (uint)uVar14;
            uVar14 = uVar14 >> 1;
            uVar16 = uVar16 + 1;
            lVar15 = lVar15 + uVar10 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar9 & 1) + lVar15);
            uVar10 = (ulonglong)bVar4;
          } while (bVar4 < 0x80);
          uVar9 = bVar4 & 0x7f;
        }
        else {
          uVar9 = uVar5 & 0x7fff;
        }
        iVar13 = iVar13 - uVar16;
        *piVar11 = *piVar11 + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar3 & 0x1f);
        piVar11[1] = piVar11[1] + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar3 & 0x1f);
        piVar11[2] = piVar11[2] + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar3 & 0x1f);
        piVar11[3] = piVar11[3] + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar3 & 0x1f);
        piVar11[4] = piVar11[4] + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar3 & 0x1f);
        piVar11[5] = piVar11[5] + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar3 & 0x1f);
        piVar11[6] = piVar11[6] + (uVar9 & uVar7) * iVar8 + iVar6;
        piVar11[7] = piVar11[7] + ((int)uVar9 >> (bVar3 & 0x1f) & uVar7) * iVar8 + iVar6;
        piVar11 = piVar11 + 8;
      } while ((int)(uint)bVar2 <= iVar13);
    }
    iVar12 = ((char)param_4[1] - iVar13) + iVar12;
    *(byte *)(param_4 + 1) = (byte)iVar12 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar12 >> 3);
    *param_4 = *param_4 + ((longlong)iVar12 >> 3);
  } while( true );
}



// FUNCTION 1455e74e0 FUN_1455e74e0 body=367 status=ok
// SIG undefined FUN_1455e74e0(void)

void FUN_1455e74e0(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  uVar13 = 0;
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar5 = *(int *)(param_1[2] + 0x34);
  iVar6 = *(int *)(param_1[2] + 0x3c);
  piVar10 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar11 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar10 + param_5;
  while (piVar10 != piVar1) {
    iVar15 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar13 = uVar13 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar16 = iVar15;
    piVar7 = piVar10;
    while ((piVar10 = piVar7, (int)(uint)bVar2 <= iVar16 && (piVar10 != piVar1))) {
      uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar13) * 2);
      bVar3 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar13));
      uVar14 = (uint)bVar3;
      uVar13 = uVar13 >> (bVar3 & 0x3f);
      if (uVar4 < 0x8000) {
        lVar12 = *param_1 + (ulonglong)uVar4 * 2;
        uVar9 = 0;
        do {
          uVar8 = (uint)uVar13;
          uVar13 = uVar13 >> 1;
          uVar14 = uVar14 + 1;
          lVar12 = lVar12 + uVar9 * 2;
          bVar3 = *(byte *)((ulonglong)(uVar8 & 1) + lVar12);
          uVar9 = (ulonglong)bVar3;
        } while (bVar3 < 0x80);
        uVar8 = bVar3 & 0x7f;
      }
      else {
        uVar8 = uVar4 & 0x7fff;
      }
      iVar16 = iVar16 - uVar14;
      *piVar11 = *piVar11 + uVar8 * iVar6 + iVar5;
      piVar7 = piVar11 + 1;
      piVar11 = piVar10;
    }
    iVar15 = ((char)param_4[1] - iVar16) + iVar15;
    *(byte *)(param_4 + 1) = (byte)iVar15 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar15 >> 3);
    *param_4 = *param_4 + ((longlong)iVar15 >> 3);
  }
  return;
}



// FUNCTION 1455e7650 FUN_1455e7650 body=402 status=ok
// SIG undefined FUN_1455e7650(void)

void FUN_1455e7650(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  
  lVar14 = param_1[2];
  uVar15 = 0;
  bVar2 = *(byte *)(lVar14 + 0x50);
  iVar6 = *(int *)(lVar14 + 0x34);
  uVar7 = *(uint *)(lVar14 + 0x38);
  iVar8 = *(int *)(lVar14 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar17 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar13 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar17 + param_5;
  do {
    if (piVar17 == piVar1) {
      return;
    }
    iVar11 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar15 = uVar15 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar12 = iVar11;
    if ((int)(uint)bVar3 <= iVar11) {
      do {
        if (piVar17 == piVar1) break;
        uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar15) * 2);
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar15));
        uVar16 = (uint)bVar4;
        uVar15 = uVar15 >> (bVar4 & 0x3f);
        if (uVar5 < 0x8000) {
          lVar14 = *param_1 + (ulonglong)uVar5 * 2;
          uVar10 = 0;
          do {
            uVar9 = (uint)uVar15;
            uVar15 = uVar15 >> 1;
            uVar16 = uVar16 + 1;
            lVar14 = lVar14 + uVar10 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar9 & 1) + lVar14);
            uVar10 = (ulonglong)bVar4;
          } while (bVar4 < 0x80);
          uVar9 = bVar4 & 0x7f;
        }
        else {
          uVar9 = uVar5 & 0x7fff;
        }
        iVar12 = iVar12 - uVar16;
        *piVar13 = *piVar13 + (uVar9 & uVar7) * iVar8 + iVar6;
        piVar13 = piVar13 + 1;
        *piVar17 = *piVar17 + ((int)uVar9 >> (bVar2 & 0x1f) & uVar7) * iVar8 + iVar6;
        piVar17 = piVar17 + 1;
      } while ((int)(uint)bVar3 <= iVar12);
    }
    iVar11 = ((char)param_4[1] - iVar12) + iVar11;
    *(byte *)(param_4 + 1) = (byte)iVar11 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar11 >> 3);
    *param_4 = *param_4 + ((longlong)iVar11 >> 3);
  } while( true );
}



// FUNCTION 1455e77f0 FUN_1455e77f0 body=444 status=ok
// SIG undefined FUN_1455e77f0(void)

void FUN_1455e77f0(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar17;
  
  lVar15 = param_1[2];
  bVar2 = *(byte *)(lVar15 + 0x50);
  iVar6 = *(int *)(lVar15 + 0x34);
  uVar7 = *(uint *)(lVar15 + 0x38);
  iVar8 = *(int *)(lVar15 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar17 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar11 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar14 = 0;
  piVar1 = piVar17 + param_5;
  do {
    if (piVar17 == piVar1) {
      return;
    }
    iVar12 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar14 = uVar14 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar13 = iVar12;
    if ((int)(uint)bVar3 <= iVar12) {
      do {
        if (piVar17 == piVar1) break;
        uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar14) * 2);
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar14));
        uVar16 = (uint)bVar4;
        uVar14 = uVar14 >> (bVar4 & 0x3f);
        if (uVar5 < 0x8000) {
          lVar15 = *param_1 + (ulonglong)uVar5 * 2;
          uVar10 = 0;
          do {
            uVar9 = (uint)uVar14;
            uVar14 = uVar14 >> 1;
            uVar16 = uVar16 + 1;
            lVar15 = lVar15 + uVar10 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar9 & 1) + lVar15);
            uVar10 = (ulonglong)bVar4;
          } while (bVar4 < 0x80);
          uVar9 = bVar4 & 0x7f;
        }
        else {
          uVar9 = uVar5 & 0x7fff;
        }
        iVar13 = iVar13 - uVar16;
        *piVar11 = *piVar11 + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
        *piVar17 = *piVar17 + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
        piVar11[1] = piVar11[1] + (uVar9 & uVar7) * iVar8 + iVar6;
        piVar11 = piVar11 + 2;
        piVar17[1] = piVar17[1] + ((int)uVar9 >> (bVar2 & 0x1f) & uVar7) * iVar8 + iVar6;
        piVar17 = piVar17 + 2;
      } while ((int)(uint)bVar3 <= iVar13);
    }
    iVar12 = ((char)param_4[1] - iVar13) + iVar12;
    *(byte *)(param_4 + 1) = (byte)iVar12 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar12 >> 3);
    *param_4 = *param_4 + ((longlong)iVar12 >> 3);
  } while( true );
}



// FUNCTION 1455e79b0 FUN_1455e79b0 body=526 status=ok
// SIG undefined FUN_1455e79b0(void)

void FUN_1455e79b0(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar17;
  
  lVar15 = param_1[2];
  bVar2 = *(byte *)(lVar15 + 0x50);
  iVar6 = *(int *)(lVar15 + 0x34);
  uVar7 = *(uint *)(lVar15 + 0x38);
  iVar8 = *(int *)(lVar15 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar17 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar11 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar14 = 0;
  piVar1 = piVar17 + param_5;
  do {
    if (piVar17 == piVar1) {
      return;
    }
    iVar12 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar14 = uVar14 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar13 = iVar12;
    if ((int)(uint)bVar3 <= iVar12) {
      do {
        if (piVar17 == piVar1) break;
        uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar14) * 2);
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar14));
        uVar16 = (uint)bVar4;
        uVar14 = uVar14 >> (bVar4 & 0x3f);
        if (uVar5 < 0x8000) {
          lVar15 = *param_1 + (ulonglong)uVar5 * 2;
          uVar10 = 0;
          do {
            uVar9 = (uint)uVar14;
            uVar14 = uVar14 >> 1;
            uVar16 = uVar16 + 1;
            lVar15 = lVar15 + uVar10 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar9 & 1) + lVar15);
            uVar10 = (ulonglong)bVar4;
          } while (bVar4 < 0x80);
          uVar9 = bVar4 & 0x7f;
        }
        else {
          uVar9 = uVar5 & 0x7fff;
        }
        iVar13 = iVar13 - uVar16;
        *piVar11 = *piVar11 + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
        *piVar17 = *piVar17 + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
        piVar11[1] = piVar11[1] + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
        piVar17[1] = piVar17[1] + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
        piVar11[2] = piVar11[2] + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
        piVar17[2] = piVar17[2] + (uVar9 & uVar7) * iVar8 + iVar6;
        uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
        piVar11[3] = piVar11[3] + (uVar9 & uVar7) * iVar8 + iVar6;
        piVar11 = piVar11 + 4;
        piVar17[3] = piVar17[3] + ((int)uVar9 >> (bVar2 & 0x1f) & uVar7) * iVar8 + iVar6;
        piVar17 = piVar17 + 4;
      } while ((int)(uint)bVar3 <= iVar13);
    }
    iVar12 = ((char)param_4[1] - iVar13) + iVar12;
    *(byte *)(param_4 + 1) = (byte)iVar12 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar12 >> 3);
    *param_4 = *param_4 + ((longlong)iVar12 >> 3);
  } while( true );
}



// FUNCTION 1455e7bc0 FUN_1455e7bc0 body=346 status=ok
// SIG undefined FUN_1455e7bc0(void)

void FUN_1455e7bc0(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int *piVar15;
  
  lVar10 = param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar5 = *(int *)(lVar10 + 0x34);
  uVar6 = *(uint *)(lVar10 + 0x38);
  iVar7 = *(int *)(lVar10 + 0x3c);
  piVar15 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar13 = 0;
  piVar1 = piVar15 + param_5;
  while (piVar15 != piVar1) {
    iVar11 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar13 = uVar13 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar12 = iVar11;
    for (; ((int)(uint)bVar2 <= iVar12 && (piVar15 != piVar1)); piVar15 = piVar15 + 1) {
      uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar13) * 2);
      bVar3 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar13));
      uVar14 = (uint)bVar3;
      uVar13 = uVar13 >> (bVar3 & 0x3f);
      if (uVar4 < 0x8000) {
        lVar10 = *param_1 + (ulonglong)uVar4 * 2;
        uVar9 = 0;
        do {
          uVar8 = (uint)uVar13;
          uVar13 = uVar13 >> 1;
          uVar14 = uVar14 + 1;
          lVar10 = lVar10 + uVar9 * 2;
          bVar3 = *(byte *)((ulonglong)(uVar8 & 1) + lVar10);
          uVar9 = (ulonglong)bVar3;
        } while (bVar3 < 0x80);
        uVar8 = (uint)*(ushort *)(lVar10 + (ulonglong)(bVar3 & 0x7f) * 2);
      }
      else {
        uVar8 = uVar4 & 0x7fff;
      }
      iVar12 = iVar12 - uVar14;
      *piVar15 = *piVar15 + (uVar8 & uVar6) * iVar7 + iVar5;
    }
    iVar11 = ((char)param_4[1] - iVar12) + iVar11;
    *(byte *)(param_4 + 1) = (byte)iVar11 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar11 >> 3);
    *param_4 = *param_4 + ((longlong)iVar11 >> 3);
  }
  return;
}



// FUNCTION 1455e7d20 FUN_1455e7d20 body=386 status=ok
// SIG undefined FUN_1455e7d20(void)

void FUN_1455e7d20(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  
  lVar14 = param_1[2];
  uVar15 = 0;
  bVar2 = *(byte *)(lVar14 + 0x50);
  iVar6 = *(int *)(lVar14 + 0x34);
  uVar7 = *(uint *)(lVar14 + 0x38);
  iVar8 = *(int *)(lVar14 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar11 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar11 + param_5;
  do {
    if (piVar11 == piVar1) {
      return;
    }
    iVar12 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar15 = uVar15 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar13 = iVar12;
    if ((int)(uint)bVar3 <= iVar12) {
      do {
        if (piVar11 == piVar1) break;
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar15));
        uVar16 = (uint)bVar4;
        uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar15) * 2);
        uVar15 = uVar15 >> (bVar4 & 0x3f);
        if (uVar5 < 0x8000) {
          lVar14 = *param_1 + (ulonglong)uVar5 * 2;
          uVar9 = 0;
          do {
            uVar10 = (uint)uVar15;
            uVar15 = uVar15 >> 1;
            uVar16 = uVar16 + 1;
            lVar14 = lVar14 + uVar9 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar10 & 1) + lVar14);
            uVar9 = (ulonglong)bVar4;
          } while (bVar4 < 0x80);
          uVar10 = (uint)*(ushort *)(lVar14 + (ulonglong)(bVar4 & 0x7f) * 2);
        }
        else {
          uVar10 = uVar5 & 0x7fff;
        }
        iVar13 = iVar13 - uVar16;
        *piVar11 = *piVar11 + (uVar10 & uVar7) * iVar8 + iVar6;
        piVar11[1] = piVar11[1] + ((int)uVar10 >> (bVar2 & 0x1f) & uVar7) * iVar8 + iVar6;
        piVar11 = piVar11 + 2;
      } while ((int)(uint)bVar3 <= iVar13);
    }
    iVar12 = ((char)param_4[1] - iVar13) + iVar12;
    *(byte *)(param_4 + 1) = (byte)iVar12 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar12 >> 3);
    *param_4 = *param_4 + ((longlong)iVar12 >> 3);
  } while( true );
}



// FUNCTION 1455e7eb0 FUN_1455e7eb0 body=424 status=ok
// SIG undefined FUN_1455e7eb0(void)

void FUN_1455e7eb0(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  lVar16 = param_1[2];
  bVar2 = *(byte *)(lVar16 + 0x50);
  iVar6 = *(int *)(lVar16 + 0x34);
  uVar7 = *(uint *)(lVar16 + 0x38);
  iVar8 = *(int *)(lVar16 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar12 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar15 = 0;
  piVar1 = piVar12 + param_5;
  do {
    if (piVar12 == piVar1) {
      return;
    }
    iVar13 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar15 = uVar15 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar14 = iVar13;
    if ((int)(uint)bVar3 <= iVar13) {
      do {
        if (piVar12 == piVar1) break;
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar15));
        uVar11 = (uint)bVar4;
        uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar15) * 2);
        uVar15 = uVar15 >> (bVar4 & 0x3f);
        if (uVar5 < 0x8000) {
          lVar16 = *param_1 + (ulonglong)uVar5 * 2;
          uVar9 = 0;
          do {
            uVar10 = (uint)uVar15;
            uVar15 = uVar15 >> 1;
            uVar11 = uVar11 + 1;
            lVar16 = lVar16 + uVar9 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar10 & 1) + lVar16);
            uVar9 = (ulonglong)bVar4;
          } while (bVar4 < 0x80);
          uVar10 = (uint)*(ushort *)(lVar16 + (ulonglong)(bVar4 & 0x7f) * 2);
        }
        else {
          uVar10 = uVar5 & 0x7fff;
        }
        iVar14 = iVar14 - uVar11;
        uVar11 = (int)uVar10 >> (bVar2 & 0x1f);
        *piVar12 = *piVar12 + (uVar10 & uVar7) * iVar8 + iVar6;
        uVar10 = (int)uVar11 >> (bVar2 & 0x1f);
        piVar12[1] = piVar12[1] + (uVar11 & uVar7) * iVar8 + iVar6;
        piVar12[2] = piVar12[2] + (uVar10 & uVar7) * iVar8 + iVar6;
        piVar12[3] = piVar12[3] + ((int)uVar10 >> (bVar2 & 0x1f) & uVar7) * iVar8 + iVar6;
        piVar12 = piVar12 + 4;
      } while ((int)(uint)bVar3 <= iVar14);
    }
    iVar13 = ((char)param_4[1] - iVar14) + iVar13;
    *(byte *)(param_4 + 1) = (byte)iVar13 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar13 >> 3);
    *param_4 = *param_4 + ((longlong)iVar13 >> 3);
  } while( true );
}



// FUNCTION 1455e8060 FUN_1455e8060 body=489 status=ok
// SIG undefined FUN_1455e8060(void)

void FUN_1455e8060(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  lVar16 = param_1[2];
  bVar2 = *(byte *)(lVar16 + 0x50);
  iVar6 = *(int *)(lVar16 + 0x34);
  uVar7 = *(uint *)(lVar16 + 0x38);
  iVar8 = *(int *)(lVar16 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar14 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar15 = 0;
  piVar1 = piVar14 + param_5;
  do {
    if (piVar14 == piVar1) {
      return;
    }
    iVar12 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar15 = uVar15 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar13 = iVar12;
    if ((int)(uint)bVar3 <= iVar12) {
      do {
        if (piVar14 == piVar1) break;
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar15));
        uVar11 = (uint)bVar4;
        uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar15) * 2);
        uVar15 = uVar15 >> (bVar4 & 0x3f);
        if (uVar5 < 0x8000) {
          lVar16 = *param_1 + (ulonglong)uVar5 * 2;
          uVar9 = 0;
          do {
            uVar10 = (uint)uVar15;
            uVar15 = uVar15 >> 1;
            uVar11 = uVar11 + 1;
            lVar16 = lVar16 + uVar9 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar10 & 1) + lVar16);
            uVar9 = (ulonglong)bVar4;
          } while (bVar4 < 0x80);
          uVar10 = (uint)*(ushort *)(lVar16 + (ulonglong)(bVar4 & 0x7f) * 2);
        }
        else {
          uVar10 = uVar5 & 0x7fff;
        }
        iVar13 = iVar13 - uVar11;
        uVar11 = (int)uVar10 >> (bVar2 & 0x1f);
        *piVar14 = *piVar14 + (uVar10 & uVar7) * iVar8 + iVar6;
        uVar10 = (int)uVar11 >> (bVar2 & 0x1f);
        piVar14[1] = piVar14[1] + (uVar11 & uVar7) * iVar8 + iVar6;
        uVar11 = (int)uVar10 >> (bVar2 & 0x1f);
        piVar14[2] = piVar14[2] + (uVar10 & uVar7) * iVar8 + iVar6;
        uVar10 = (int)uVar11 >> (bVar2 & 0x1f);
        piVar14[3] = piVar14[3] + (uVar11 & uVar7) * iVar8 + iVar6;
        uVar11 = (int)uVar10 >> (bVar2 & 0x1f);
        piVar14[4] = piVar14[4] + (uVar10 & uVar7) * iVar8 + iVar6;
        uVar10 = (int)uVar11 >> (bVar2 & 0x1f);
        piVar14[5] = piVar14[5] + (uVar11 & uVar7) * iVar8 + iVar6;
        piVar14[6] = piVar14[6] + (uVar10 & uVar7) * iVar8 + iVar6;
        piVar14[7] = piVar14[7] + ((int)uVar10 >> (bVar2 & 0x1f) & uVar7) * iVar8 + iVar6;
        piVar14 = piVar14 + 8;
      } while ((int)(uint)bVar3 <= iVar13);
    }
    iVar12 = ((char)param_4[1] - iVar13) + iVar12;
    *(byte *)(param_4 + 1) = (byte)iVar12 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar12 >> 3);
    *param_4 = *param_4 + ((longlong)iVar12 >> 3);
  } while( true );
}



// FUNCTION 1455e8250 FUN_1455e8250 body=372 status=ok
// SIG undefined FUN_1455e8250(void)

void FUN_1455e8250(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  uVar13 = 0;
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar5 = *(int *)(param_1[2] + 0x34);
  iVar6 = *(int *)(param_1[2] + 0x3c);
  piVar10 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar11 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar10 + param_5;
  while (piVar10 != piVar1) {
    iVar15 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar13 = uVar13 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar16 = iVar15;
    piVar7 = piVar10;
    while ((piVar10 = piVar7, (int)(uint)bVar2 <= iVar16 && (piVar10 != piVar1))) {
      uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar13) * 2);
      bVar3 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar13));
      uVar14 = (uint)bVar3;
      uVar13 = uVar13 >> (bVar3 & 0x3f);
      if (uVar4 < 0x8000) {
        lVar12 = *param_1 + (ulonglong)uVar4 * 2;
        uVar9 = 0;
        do {
          uVar8 = (uint)uVar13;
          uVar13 = uVar13 >> 1;
          uVar14 = uVar14 + 1;
          lVar12 = lVar12 + uVar9 * 2;
          bVar3 = *(byte *)((ulonglong)(uVar8 & 1) + lVar12);
          uVar9 = (ulonglong)bVar3;
        } while (bVar3 < 0x80);
        uVar8 = (uint)*(ushort *)(lVar12 + (ulonglong)(bVar3 & 0x7f) * 2);
      }
      else {
        uVar8 = uVar4 & 0x7fff;
      }
      iVar16 = iVar16 - uVar14;
      *piVar11 = *piVar11 + uVar8 * iVar6 + iVar5;
      piVar7 = piVar11 + 1;
      piVar11 = piVar10;
    }
    iVar15 = ((char)param_4[1] - iVar16) + iVar15;
    *(byte *)(param_4 + 1) = (byte)iVar15 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar15 >> 3);
    *param_4 = *param_4 + ((longlong)iVar15 >> 3);
  }
  return;
}



// FUNCTION 1455e83d0 FUN_1455e83d0 body=412 status=ok
// SIG undefined FUN_1455e83d0(void)

void FUN_1455e83d0(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  
  lVar15 = param_1[2];
  uVar16 = 0;
  bVar2 = *(byte *)(lVar15 + 0x50);
  iVar6 = *(int *)(lVar15 + 0x34);
  uVar7 = *(uint *)(lVar15 + 0x38);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  iVar8 = *(int *)(lVar15 + 0x3c);
  piVar11 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar12 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar11 + param_5;
  do {
    if (piVar11 == piVar1) {
      return;
    }
    iVar13 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar16 = uVar16 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar14 = iVar13;
    if ((int)(uint)bVar3 <= iVar13) {
      do {
        if (piVar11 == piVar1) break;
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar16));
        uVar17 = (uint)bVar4;
        uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar16) * 2);
        uVar16 = uVar16 >> (bVar4 & 0x3f);
        if (uVar5 < 0x8000) {
          lVar15 = *param_1 + (ulonglong)uVar5 * 2;
          uVar9 = 0;
          do {
            uVar10 = (uint)uVar16;
            uVar16 = uVar16 >> 1;
            uVar17 = uVar17 + 1;
            lVar15 = lVar15 + uVar9 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar10 & 1) + lVar15);
            uVar9 = (ulonglong)bVar4;
          } while (bVar4 < 0x80);
          uVar10 = (uint)*(ushort *)(lVar15 + (ulonglong)(bVar4 & 0x7f) * 2);
        }
        else {
          uVar10 = uVar5 & 0x7fff;
        }
        iVar14 = iVar14 - uVar17;
        *piVar12 = *piVar12 + (uVar10 & uVar7) * iVar8 + iVar6;
        *piVar11 = *piVar11 + ((int)uVar10 >> (bVar2 & 0x1f) & uVar7) * iVar8 + iVar6;
        piVar12 = piVar12 + 1;
        piVar11 = piVar11 + 1;
      } while ((int)(uint)bVar3 <= iVar14);
    }
    iVar13 = ((char)param_4[1] - iVar14) + iVar13;
    *(byte *)(param_4 + 1) = (byte)iVar13 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar13 >> 3);
    *param_4 = *param_4 + ((longlong)iVar13 >> 3);
  } while( true );
}



// FUNCTION 1455e8570 FUN_1455e8570 body=453 status=ok
// SIG undefined FUN_1455e8570(void)

void FUN_1455e8570(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  lVar18 = param_1[2];
  bVar2 = *(byte *)(lVar18 + 0x50);
  iVar6 = *(int *)(lVar18 + 0x34);
  uVar7 = *(uint *)(lVar18 + 0x38);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  iVar8 = *(int *)(lVar18 + 0x3c);
  piVar13 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar14 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar17 = 0;
  piVar1 = piVar13 + param_5;
  do {
    if (piVar13 == piVar1) {
      return;
    }
    iVar15 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar17 = uVar17 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar16 = iVar15;
    if ((int)(uint)bVar3 <= iVar15) {
      do {
        if (piVar13 == piVar1) break;
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar17));
        uVar12 = (uint)bVar4;
        uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar17) * 2);
        uVar17 = uVar17 >> (bVar4 & 0x3f);
        if (uVar5 < 0x8000) {
          lVar18 = *param_1 + (ulonglong)uVar5 * 2;
          uVar9 = 0;
          do {
            uVar10 = (uint)uVar17;
            uVar17 = uVar17 >> 1;
            uVar12 = uVar12 + 1;
            lVar18 = lVar18 + uVar9 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar10 & 1) + lVar18);
            uVar9 = (ulonglong)bVar4;
          } while (bVar4 < 0x80);
          uVar10 = (uint)*(ushort *)(lVar18 + (ulonglong)(bVar4 & 0x7f) * 2);
        }
        else {
          uVar10 = uVar5 & 0x7fff;
        }
        uVar11 = (int)uVar10 >> (bVar2 & 0x1f);
        iVar16 = iVar16 - uVar12;
        *piVar14 = *piVar14 + (uVar10 & uVar7) * iVar8 + iVar6;
        uVar12 = (int)uVar11 >> (bVar2 & 0x1f);
        *piVar13 = *piVar13 + (uVar11 & uVar7) * iVar8 + iVar6;
        piVar14[1] = piVar14[1] + (uVar12 & uVar7) * iVar8 + iVar6;
        piVar13[1] = piVar13[1] + ((int)uVar12 >> (bVar2 & 0x1f) & uVar7) * iVar8 + iVar6;
        piVar14 = piVar14 + 2;
        piVar13 = piVar13 + 2;
      } while ((int)(uint)bVar3 <= iVar16);
    }
    iVar15 = ((char)param_4[1] - iVar16) + iVar15;
    *(byte *)(param_4 + 1) = (byte)iVar15 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar15 >> 3);
    *param_4 = *param_4 + ((longlong)iVar15 >> 3);
  } while( true );
}



// FUNCTION 1455e8740 FUN_1455e8740 body=521 status=ok
// SIG undefined FUN_1455e8740(void)

void FUN_1455e8740(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  int *piVar18;
  
  lVar17 = param_1[2];
  bVar2 = *(byte *)(lVar17 + 0x50);
  iVar6 = *(int *)(lVar17 + 0x34);
  uVar7 = *(uint *)(lVar17 + 0x38);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  iVar8 = *(int *)(lVar17 + 0x3c);
  piVar13 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar18 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar16 = 0;
  piVar1 = piVar13 + param_5;
  do {
    if (piVar13 == piVar1) {
      return;
    }
    iVar14 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar16 = uVar16 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar15 = iVar14;
    if ((int)(uint)bVar3 <= iVar14) {
      do {
        if (piVar13 == piVar1) break;
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar16));
        uVar12 = (uint)bVar4;
        uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar16) * 2);
        uVar16 = uVar16 >> (bVar4 & 0x3f);
        if (uVar5 < 0x8000) {
          lVar17 = *param_1 + (ulonglong)uVar5 * 2;
          uVar9 = 0;
          do {
            uVar10 = (uint)uVar16;
            uVar16 = uVar16 >> 1;
            uVar12 = uVar12 + 1;
            lVar17 = lVar17 + uVar9 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar10 & 1) + lVar17);
            uVar9 = (ulonglong)bVar4;
          } while (bVar4 < 0x80);
          uVar10 = (uint)*(ushort *)(lVar17 + (ulonglong)(bVar4 & 0x7f) * 2);
        }
        else {
          uVar10 = uVar5 & 0x7fff;
        }
        uVar11 = (int)uVar10 >> (bVar2 & 0x1f);
        iVar15 = iVar15 - uVar12;
        *piVar18 = *piVar18 + (uVar10 & uVar7) * iVar8 + iVar6;
        uVar12 = (int)uVar11 >> (bVar2 & 0x1f);
        *piVar13 = *piVar13 + (uVar11 & uVar7) * iVar8 + iVar6;
        uVar10 = (int)uVar12 >> (bVar2 & 0x1f);
        piVar18[1] = piVar18[1] + (uVar12 & uVar7) * iVar8 + iVar6;
        uVar12 = (int)uVar10 >> (bVar2 & 0x1f);
        piVar13[1] = piVar13[1] + (uVar10 & uVar7) * iVar8 + iVar6;
        uVar10 = (int)uVar12 >> (bVar2 & 0x1f);
        piVar18[2] = piVar18[2] + (uVar12 & uVar7) * iVar8 + iVar6;
        uVar12 = (int)uVar10 >> (bVar2 & 0x1f);
        piVar13[2] = piVar13[2] + (uVar10 & uVar7) * iVar8 + iVar6;
        piVar18[3] = piVar18[3] + (uVar12 & uVar7) * iVar8 + iVar6;
        piVar13[3] = piVar13[3] + ((int)uVar12 >> (bVar2 & 0x1f) & uVar7) * iVar8 + iVar6;
        piVar18 = piVar18 + 4;
        piVar13 = piVar13 + 4;
      } while ((int)(uint)bVar3 <= iVar15);
    }
    iVar14 = ((char)param_4[1] - iVar15) + iVar14;
    *(byte *)(param_4 + 1) = (byte)iVar14 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar14 >> 3);
    *param_4 = *param_4 + ((longlong)iVar14 >> 3);
  } while( true );
}



// FUNCTION 1455e8950 FUN_1455e8950 body=552 status=ok
// SIG undefined FUN_1455e8950(void)

void FUN_1455e8950(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  int *piVar31;
  ulonglong uVar32;
  int iVar33;
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  
  piVar31 = (int *)param_1[2];
  bVar1 = *(byte *)((longlong)param_1 + 0x1c);
  uVar32 = (ulonglong)param_3;
  iVar17 = piVar31[0x14];
  param_5 = param_5 + param_3;
  iVar4 = piVar31[0xc];
  iVar5 = *piVar31;
  iVar6 = piVar31[1];
  iVar7 = piVar31[2];
  iVar8 = piVar31[3];
  uVar9 = piVar31[4];
  uVar10 = piVar31[5];
  uVar11 = piVar31[6];
  uVar12 = piVar31[7];
  iVar18 = piVar31[8];
  sVar13 = *(short *)((longlong)piVar31 + 0x22);
  iVar19 = piVar31[9];
  sVar14 = *(short *)((longlong)piVar31 + 0x26);
  iVar20 = piVar31[10];
  sVar15 = *(short *)((longlong)piVar31 + 0x2a);
  iVar21 = piVar31[0xb];
  sVar16 = *(short *)((longlong)piVar31 + 0x2e);
  uVar22 = 0;
  piVar31 = (int *)(*param_2 + uVar32 * 4);
  while (param_3 < param_5) {
    iVar23 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar22 = uVar22 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar24 = iVar23;
    while ((param_3 = (int)uVar32, (int)((uint)bVar1 * 2) <= iVar24 && (param_3 < param_5))) {
      lVar29 = *param_1;
      uVar32 = (ulonglong)*(ushort *)(param_1 + 3) & uVar22 & 0xffffffff;
      uVar3 = *(ushort *)(lVar29 + uVar32 * 2);
      bVar2 = *(byte *)(uVar32 + param_1[1]);
      uVar28 = (uint)bVar2;
      uVar22 = uVar22 >> (bVar2 & 0x3f);
      if (uVar3 < 0x8000) {
        lVar26 = lVar29 + (ulonglong)uVar3 * 2;
        uVar32 = 0;
        do {
          uVar27 = (uint)uVar22;
          uVar22 = uVar22 >> 1;
          uVar28 = uVar28 + 1;
          lVar26 = lVar26 + uVar32 * 2;
          bVar2 = *(byte *)((ulonglong)(uVar27 & 1) + lVar26);
          uVar32 = (ulonglong)bVar2;
        } while (bVar2 < 0x80);
        uVar27 = bVar2 & 0x7f;
      }
      else {
        uVar27 = uVar3 & 0x7fff;
      }
      uVar32 = (ulonglong)*(ushort *)(param_1 + 3) & uVar22 & 0xffffffff;
      uVar3 = *(ushort *)(lVar29 + uVar32 * 2);
      bVar2 = *(byte *)(uVar32 + param_1[1]);
      uVar30 = (uint)bVar2;
      uVar22 = uVar22 >> (bVar2 & 0x3f);
      if (uVar3 < 0x8000) {
        lVar29 = lVar29 + (ulonglong)uVar3 * 2;
        uVar32 = 0;
        do {
          uVar25 = (uint)uVar22;
          uVar22 = uVar22 >> 1;
          uVar30 = uVar30 + 1;
          lVar29 = lVar29 + uVar32 * 2;
          bVar2 = *(byte *)((ulonglong)(uVar25 & 1) + lVar29);
          uVar32 = (ulonglong)bVar2;
        } while (bVar2 < 0x80);
        uVar25 = bVar2 & 0x7f;
      }
      else {
        uVar25 = uVar3 & 0x7fff;
      }
      iVar24 = (iVar24 - uVar28) - uVar30;
      uVar27 = uVar25 << ((char)iVar17 * '\x02' & 0x1fU) | uVar27;
      iVar33 = CONCAT22((short)((uVar27 & uVar9) >> 0x10) * sVar13,
                        (short)(uVar27 & uVar9) * (short)iVar18);
      auVar34._0_8_ =
           CONCAT26((short)((uVar27 & uVar10) >> 0x10) * sVar14,
                    CONCAT24((short)(uVar27 & uVar10) * (short)iVar19,iVar33));
      auVar34._8_2_ = (short)(uVar27 & uVar11) * (short)iVar20;
      auVar34._10_2_ = (short)((uVar27 & uVar11) >> 0x10) * sVar15;
      auVar35._12_2_ = (short)(uVar27 & uVar12) * (short)iVar21;
      auVar35._0_12_ = auVar34;
      auVar35._14_2_ = (short)((uVar27 & uVar12) >> 0x10) * sVar16;
      *piVar31 = (iVar33 >> iVar4) + iVar5 + *piVar31;
      piVar31[1] = ((int)((ulonglong)auVar34._0_8_ >> 0x20) >> iVar4) + iVar6 + piVar31[1];
      piVar31[2] = (auVar34._8_4_ >> iVar4) + iVar7 + piVar31[2];
      piVar31[3] = (auVar35._12_4_ >> iVar4) + iVar8 + piVar31[3];
      piVar31 = piVar31 + 4;
      uVar32 = (ulonglong)(param_3 + 4);
    }
    iVar23 = ((char)param_4[1] - iVar24) + iVar23;
    *(byte *)(param_4 + 1) = (byte)iVar23 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar23 >> 3);
    *param_4 = *param_4 + ((longlong)iVar23 >> 3);
  }
  return;
}



// FUNCTION 1455e8b80 FUN_1455e8b80 body=391 status=ok
// SIG undefined FUN_1455e8b80(void)

void FUN_1455e8b80(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
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
  int iVar14;
  int iVar15;
  ushort uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int *piVar24;
  
  piVar24 = (int *)param_1[2];
  uVar22 = 0;
  bVar1 = *(byte *)((longlong)param_1 + 0x1c);
  uVar23 = (ulonglong)param_3;
  iVar4 = *piVar24;
  iVar5 = piVar24[1];
  iVar6 = piVar24[2];
  iVar7 = piVar24[3];
  param_5 = param_5 + param_3;
  iVar8 = piVar24[4];
  iVar9 = piVar24[5];
  iVar10 = piVar24[6];
  iVar11 = piVar24[7];
  iVar12 = piVar24[8];
  iVar13 = piVar24[9];
  iVar14 = piVar24[10];
  iVar15 = piVar24[0xb];
  iVar3 = piVar24[0xc];
  piVar24 = (int *)(*param_2 + uVar23 * 4);
  while (param_3 < param_5) {
    iVar18 = 0x40 - (char)*(byte *)(param_4 + 1);
    uVar22 = uVar22 | *(ulonglong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f);
    iVar19 = iVar18;
    while ((param_3 = (int)uVar23, (int)(uint)bVar1 <= iVar19 && (param_3 < param_5))) {
      uVar16 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar22) * 2);
      bVar2 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar22));
      uVar21 = (uint)bVar2;
      uVar22 = uVar22 >> (bVar2 & 0x3f);
      if (uVar16 < 0x8000) {
        lVar20 = *param_1 + (ulonglong)uVar16 * 2;
        uVar23 = 0;
        do {
          uVar17 = (uint)uVar22;
          uVar22 = uVar22 >> 1;
          uVar21 = uVar21 + 1;
          lVar20 = lVar20 + uVar23 * 2;
          bVar2 = *(byte *)((ulonglong)(uVar17 & 1) + lVar20);
          uVar23 = (ulonglong)bVar2;
        } while (bVar2 < 0x80);
        uVar16 = bVar2 & 0x7f;
      }
      else {
        uVar16 = uVar16 & 0x7fff;
      }
      iVar19 = iVar19 - uVar21;
      *piVar24 = ((int)(uint)(ushort)((uVar16 & (ushort)iVar8) * (short)iVar12) >> iVar3) + iVar4 +
                 *piVar24;
      piVar24[1] = ((int)(uint)(ushort)((uVar16 & (ushort)iVar9) * (short)iVar13) >> iVar3) + iVar5
                   + piVar24[1];
      piVar24[2] = ((int)(uint)(ushort)((uVar16 & (ushort)iVar10) * (short)iVar14) >> iVar3) + iVar6
                   + piVar24[2];
      piVar24[3] = ((int)(uint)(ushort)((uVar16 & (ushort)iVar11) * (short)iVar15) >> iVar3) + iVar7
                   + piVar24[3];
      piVar24 = piVar24 + 4;
      uVar23 = (ulonglong)(param_3 + 4);
    }
    iVar18 = ((char)param_4[1] - iVar19) + iVar18;
    *(byte *)(param_4 + 1) = (byte)iVar18 & 7;
    *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar18 >> 3);
    *param_4 = *param_4 + ((longlong)iVar18 >> 3);
  }
  return;
}


