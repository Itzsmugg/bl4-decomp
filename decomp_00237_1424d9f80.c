// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1424d9f80 FUN_1424d9f80 body=100 status=ok
// SIG undefined FUN_1424d9f80(void)

undefined8 FUN_1424d9f80(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  if (DAT_14c77ed58 == (code *)0x0) {
    if (*param_3 < 1) {
      FUN_142532240(param_1);
    }
  }
  else if ((param_1 != 0) && (*param_3 < 1)) {
    FUN_142532240(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001424d9fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_14c77ed58)(DAT_14c77ed50,param_1 + 0x28,param_1 + 8,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1424d9ff0 FUN_1424d9ff0 body=64 status=ok
// SIG undefined FUN_1424d9ff0(void)

void FUN_1424d9ff0(longlong param_1)

{
  if ((param_1 != 0) && (DAT_14c77ed60 != (code *)0x0)) {
    (*DAT_14c77ed60)(DAT_14c77ed50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1424da030 FUN_1424da030 body=48 status=ok
// SIG undefined FUN_1424da030(void)

undefined * FUN_1424da030(size_t param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    return &DAT_149966ef0;
  }
  if (DAT_14c77ed68 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424da04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(*DAT_14c77ed68)(DAT_14c77ed70);
    return puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424da059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = malloc(param_1);
  return puVar1;
}



// FUNCTION 1424da060 FUN_1424da060 body=162 status=ok
// SIG undefined FUN_1424da060(void)

undefined * FUN_1424da060(undefined *param_1,size_t param_2)

{
  undefined *puVar1;
  
  if (param_1 == &DAT_149966ef0) {
    if (param_2 != 0) {
      if (DAT_14c77ed68 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424da0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar1 = (undefined *)(*DAT_14c77ed68)(DAT_14c77ed70,param_2);
        return puVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001424da0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = malloc(param_2);
      return puVar1;
    }
  }
  else {
    if (param_2 != 0) {
      if (DAT_14c77ed80 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424da092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar1 = (undefined *)(*DAT_14c77ed80)(DAT_14c77ed70);
        return puVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001424da0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = realloc(param_1,param_2);
      return puVar1;
    }
    if (DAT_14c77ed78 == (code *)0x0) {
      free(param_1);
    }
    else {
      (*DAT_14c77ed78)(DAT_14c77ed70);
    }
  }
  return &DAT_149966ef0;
}



// FUNCTION 1424da110 FUN_1424da110 body=48 status=ok
// SIG undefined FUN_1424da110(void)

void FUN_1424da110(undefined *param_1)

{
  if (param_1 == &DAT_149966ef0) {
    return;
  }
  if (DAT_14c77ed78 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424da132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c77ed78)(DAT_14c77ed70);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424da139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}



// FUNCTION 1424da140 FUN_1424da140 body=97 status=ok
// SIG undefined FUN_1424da140(void)

undefined * FUN_1424da140(longlong param_1,longlong param_2)

{
  undefined *_Dst;
  size_t _Size;
  
  _Size = param_1 * param_2;
  if (_Size == 0) {
    _Dst = &DAT_149966ef0;
  }
  else {
    if (DAT_14c77ed68 == (code *)0x0) {
      _Dst = malloc(_Size);
    }
    else {
      _Dst = (undefined *)(*DAT_14c77ed68)(DAT_14c77ed70);
    }
    if (_Dst == (undefined *)0x0) {
      return (undefined *)0x0;
    }
  }
  memset(_Dst,0,_Size);
  return _Dst;
}



// FUNCTION 1424da1b0 FUN_1424da1b0 body=62 status=ok
// SIG undefined FUN_1424da1b0(void)

void FUN_1424da1b0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  int *param_5)

{
  if (0 < *param_5) {
    return;
  }
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    DAT_14c77ed70 = param_1;
    DAT_14c77ed68 = param_2;
    DAT_14c77ed80 = param_3;
    DAT_14c77ed78 = param_4;
    return;
  }
  *param_5 = 1;
  return;
}



// FUNCTION 1424da1f0 FUN_1424da1f0 body=47 status=ok
// SIG undefined FUN_1424da1f0(void)

undefined1 FUN_1424da1f0(void)

{
  DAT_14c77ed70 = 0;
  DAT_14c77ed68 = 0;
  DAT_14c77ed80 = 0;
  DAT_14c77ed78 = 0;
  return 1;
}



// FUNCTION 1424da220 FUN_1424da220 body=46 status=ok
// SIG undefined FUN_1424da220(void)

undefined8 FUN_1424da220(char *param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    pcVar3 = (char *)thunk_FUN_1424a3ae0();
    cVar1 = *pcVar3;
  }
  else {
    cVar1 = *param_1;
  }
  if (cVar1 != '\0') {
    uVar2 = FUN_1424d6e10();
    return uVar2;
  }
  return 1;
}



// FUNCTION 1424da250 FUN_1424da250 body=124 status=ok
// SIG undefined FUN_1424da250(void)

void FUN_1424da250(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  char *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  
  if (param_5 == (char *)0x0) {
    param_5 = (char *)thunk_FUN_1424a3ae0();
  }
  if (*param_5 == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_1424d6e10();
  }
  FUN_14257de30(uVar1,0,0,param_1,param_2,param_3,param_4,FUN_14257d890,param_6);
  return;
}



// FUNCTION 1424da2d0 FUN_1424da2d0 body=1997 status=ok
// SIG undefined FUN_1424da2d0(void)

void FUN_1424da2d0(ushort *param_1,uint param_2,int *param_3,byte *param_4,uint param_5,uint param_6
                  ,int *param_7,int *param_8)

{
  ushort *puVar1;
  uint uVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ushort *puVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  int local_5c;
  int *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_8 < 1) {
    if (((((int)param_2 < 0) || ((int)param_5 < -1)) || (param_4 == (byte *)0x0 && param_5 != 0)) ||
       (((param_1 == (ushort *)0x0 && param_2 != 0 || (0x10ffff < (int)param_6)) ||
        ((param_6 & 0xfffff800) == 0xd800)))) {
      *param_8 = 1;
    }
    else {
      if (param_7 != (int *)0x0) {
        *param_7 = 0;
      }
      puVar1 = param_1 + param_2;
      puVar10 = param_1;
      local_58 = param_3;
      if ((int)param_5 < 0) {
        bVar4 = *param_4;
        uVar9 = 0;
        if ((bVar4 == 0) || (param_2 == 0)) {
          local_5c = 0;
        }
        else {
          uVar9 = 0;
          local_5c = 0;
          do {
            lVar6 = (longlong)(int)uVar9 + 1;
            local_4c = (uint)lVar6;
            if ((char)bVar4 < '\0') {
              if ((bVar4 & 0xf0) == 0xe0) {
                if ((((byte)(&DAT_14bd49f86)[bVar4 & 0xf] >> (param_4[lVar6] >> 5) & 1) == 0) ||
                   (0x3f < (byte)(param_4[(longlong)(int)uVar9 + 2] ^ 0x80))) {
LAB_1424da74d:
                  local_68 = 0xff;
                  uVar2 = FUN_142580cc0(param_4,&local_4c,0xffffffff);
                  if ((int)uVar2 < 0) {
                    if ((int)param_6 < 0) goto LAB_1424daa64;
                    local_5c = local_5c + 1;
                    uVar2 = param_6;
                  }
                  if (uVar2 < 0x10000) {
                    *puVar10 = (ushort)uVar2;
                    goto LAB_1424da6a7;
                  }
                  *puVar10 = (short)(uVar2 >> 10) + 0xd7c0;
                  if (puVar1 <= puVar10 + 1) {
                    uVar9 = (ulonglong)(int)local_4c;
                    bVar4 = param_4[uVar9];
                    iVar7 = 1;
                    puVar10 = puVar10 + 1;
                    goto joined_r0x0001424daa9d;
                  }
                  puVar10[1] = (ushort)uVar2 & 0x3ff | 0xdc00;
                  puVar10 = puVar10 + 2;
                }
                else {
                  *puVar10 = (param_4[lVar6] & 0x3f) << 6 | (ushort)bVar4 << 0xc |
                             param_4[(longlong)(int)uVar9 + 2] ^ 0x80;
                  puVar10 = puVar10 + 1;
                  local_4c = local_4c + 2;
                }
              }
              else {
                if ((0x1d < (byte)(bVar4 + 0x3e)) || (0x3f < (byte)(param_4[lVar6] ^ 0x80)))
                goto LAB_1424da74d;
                *puVar10 = (ushort)((bVar4 & 0x1f) << 6) | param_4[lVar6] ^ 0x80;
                puVar10 = puVar10 + 1;
                local_4c = local_4c + 1;
              }
            }
            else {
              *puVar10 = (ushort)bVar4;
LAB_1424da6a7:
              puVar10 = puVar10 + 1;
            }
            uVar9 = (ulonglong)(int)local_4c;
            bVar4 = param_4[uVar9];
          } while ((bVar4 != 0) && (puVar10 < puVar1));
        }
        iVar7 = 0;
joined_r0x0001424daa9d:
        if (bVar4 != 0) {
          do {
            iVar8 = (int)uVar9;
            uVar9 = (longlong)iVar8 + 1;
            local_4c = (uint)uVar9;
            if ((char)bVar4 < '\0') {
              if ((bVar4 & 0xf0) == 0xe0) {
                if ((((byte)(&DAT_14bd49f86)[bVar4 & 0xf] >> (param_4[uVar9] >> 5) & 1) == 0) ||
                   (-0x41 < (char)param_4[(longlong)iVar8 + 2])) {
LAB_1424daa27:
                  local_68 = 0xff;
                  uVar2 = FUN_142580cc0(param_4,&local_4c,0xffffffff);
                  if ((int)uVar2 < 0) {
                    if ((int)param_6 < 0) goto LAB_1424daa64;
                    local_5c = local_5c + 1;
                    uVar2 = param_6;
                  }
                  iVar7 = (iVar7 - (uint)(uVar2 < 0x10000)) + 2;
                  uVar9 = (ulonglong)local_4c;
                  goto LAB_1424da9b2;
                }
                local_4c = iVar8 + 3;
              }
              else {
                if ((0x1d < (byte)(bVar4 + 0x3e)) || (-0x41 < (char)param_4[uVar9]))
                goto LAB_1424daa27;
                local_4c = iVar8 + 2;
              }
              iVar7 = iVar7 + 1;
              uVar9 = (ulonglong)local_4c;
            }
            else {
              iVar7 = iVar7 + 1;
            }
LAB_1424da9b2:
            bVar4 = param_4[(int)uVar9];
            uVar9 = uVar9 & 0xffffffff;
          } while (bVar4 != 0);
        }
      }
      else {
        local_4c = 0;
        uVar2 = (int)param_5 / 3;
        if ((int)param_2 <= (int)param_5 / 3) {
          uVar2 = param_2;
        }
        uVar9 = (ulonglong)uVar2;
        iVar7 = 0;
        local_5c = 0;
        if (2 < (int)uVar2) {
          local_5c = 0;
LAB_1424da815:
          do {
            iVar8 = (int)uVar9;
            lVar5 = (longlong)(int)local_4c;
            lVar6 = lVar5 + 1;
            uVar2 = (uint)lVar6;
            bVar4 = param_4[lVar5];
            if ((char)bVar4 < '\0') {
              if ((bVar4 & 0xf0) != 0xe0) {
                if ((((byte)(bVar4 + 0x20) < 0xe2) || (uVar2 == param_5)) ||
                   (0x3f < (byte)(param_4[lVar6] ^ 0x80))) goto LAB_1424da900;
                *puVar10 = (ushort)((bVar4 & 0x1f) << 6) | param_4[lVar6] ^ 0x80;
                puVar10 = puVar10 + 1;
                local_4c = uVar2 + 1;
                goto LAB_1424da836;
              }
              if ((((int)(lVar5 + 2) < (int)param_5) &&
                  (((byte)(&DAT_14bd49f86)[bVar4 & 0xf] >> (param_4[lVar6] >> 5) & 1) != 0)) &&
                 ((byte)(param_4[lVar5 + 2] ^ 0x80) < 0x40)) {
                *puVar10 = (param_4[lVar6] & 0x3f) << 6 | (ushort)bVar4 << 0xc |
                           param_4[lVar5 + 2] ^ 0x80;
                puVar10 = puVar10 + 1;
                local_4c = uVar2 + 2;
                goto LAB_1424da836;
              }
LAB_1424da900:
              if ((((int)param_6 < 0x10000) && (bVar4 < 0xf0)) || (iVar8 = iVar8 + -1, iVar8 != 0))
              {
                local_68 = 0xff;
                local_4c = uVar2;
                uVar2 = FUN_142580cc0(param_4,&local_4c,param_5);
                if ((int)uVar2 < 0) {
                  if ((int)param_6 < 0) goto LAB_1424daa64;
                  local_5c = local_5c + 1;
                  uVar2 = param_6;
                }
                if (uVar2 < 0x10000) {
                  *puVar10 = (ushort)uVar2;
                  goto LAB_1424da832;
                }
                *puVar10 = (short)(uVar2 >> 10) + 0xd7c0;
                puVar10[1] = (ushort)uVar2 & 0x3ff | 0xdc00;
                puVar10 = puVar10 + 2;
                goto LAB_1424da836;
              }
            }
            else {
              *puVar10 = (ushort)bVar4;
              local_4c = uVar2;
LAB_1424da832:
              puVar10 = puVar10 + 1;
LAB_1424da836:
              uVar9 = (ulonglong)(iVar8 - 1);
              if (1 < iVar8) goto LAB_1424da815;
            }
            uVar3 = (ulonglong)((longlong)puVar1 - (longlong)puVar10) >> 1;
            uVar2 = (int)(param_5 - local_4c) / 3;
            uVar9 = (ulonglong)uVar2;
            if ((int)uVar3 <= (int)uVar2) {
              uVar9 = uVar3 & 0xffffffff;
            }
          } while (2 < (int)uVar9);
        }
        uVar2 = local_4c;
        if (((int)local_4c < (int)param_5) && (puVar10 < puVar1)) {
          do {
            lVar5 = (longlong)(int)local_4c;
            lVar6 = lVar5 + 1;
            local_4c = (uint)lVar6;
            bVar4 = param_4[lVar5];
            if ((char)bVar4 < '\0') {
              if ((bVar4 & 0xf0) == 0xe0) {
                if ((((int)(lVar5 + 2) < (int)param_5) &&
                    (((byte)(&DAT_14bd49f86)[bVar4 & 0xf] >> (param_4[lVar6] >> 5) & 1) != 0)) &&
                   ((byte)(param_4[lVar5 + 2] ^ 0x80) < 0x40)) {
                  *puVar10 = (param_4[lVar6] & 0x3f) << 6 | (ushort)bVar4 << 0xc |
                             param_4[lVar5 + 2] ^ 0x80;
                  puVar10 = puVar10 + 1;
                  local_4c = local_4c + 2;
                }
                else {
LAB_1424da4e0:
                  local_68 = 0xff;
                  uVar2 = FUN_142580cc0(param_4,&local_4c,param_5);
                  if ((int)uVar2 < 0) {
                    if ((int)param_6 < 0) goto LAB_1424daa64;
                    local_5c = local_5c + 1;
                    uVar2 = param_6;
                  }
                  if (uVar2 < 0x10000) {
                    *puVar10 = (ushort)uVar2;
                    goto LAB_1424da409;
                  }
                  *puVar10 = (short)(uVar2 >> 10) + 0xd7c0;
                  if (puVar1 <= puVar10 + 1) {
                    iVar7 = 1;
                    puVar10 = puVar10 + 1;
                    uVar2 = local_4c;
                    break;
                  }
                  puVar10[1] = (ushort)uVar2 & 0x3ff | 0xdc00;
                  puVar10 = puVar10 + 2;
                }
              }
              else {
                if ((((byte)(bVar4 + 0x20) < 0xe2) || (local_4c == param_5)) ||
                   (0x3f < (byte)(param_4[lVar6] ^ 0x80))) goto LAB_1424da4e0;
                *puVar10 = (ushort)((bVar4 & 0x1f) << 6) | param_4[lVar6] ^ 0x80;
                puVar10 = puVar10 + 1;
                local_4c = local_4c + 1;
              }
            }
            else {
              *puVar10 = (ushort)bVar4;
LAB_1424da409:
              puVar10 = puVar10 + 1;
            }
            uVar2 = local_4c;
            if (((int)param_5 <= (int)local_4c) || (puVar1 <= puVar10)) break;
          } while( true );
        }
        local_4c = uVar2;
        if ((int)uVar2 < (int)param_5) {
          do {
            lVar6 = (longlong)(int)uVar2;
            uVar9 = lVar6 + 1;
            local_4c = (uint)uVar9;
            bVar4 = param_4[lVar6];
            if ((char)bVar4 < '\0') {
              if ((bVar4 & 0xf0) == 0xe0) {
                if ((((int)param_5 <= (int)(lVar6 + 2)) ||
                    (((byte)(&DAT_14bd49f86)[bVar4 & 0xf] >> (param_4[uVar9] >> 5) & 1) == 0)) ||
                   (-0x41 < (char)param_4[lVar6 + 2])) {
LAB_1424da620:
                  local_68 = 0xff;
                  uVar2 = FUN_142580cc0(param_4,&local_4c,param_5);
                  if ((int)uVar2 < 0) {
                    if ((int)param_6 < 0) goto LAB_1424daa64;
                    local_5c = local_5c + 1;
                    uVar2 = param_6;
                  }
                  iVar7 = (iVar7 - (uint)(uVar2 < 0x10000)) + 2;
                  uVar9 = (ulonglong)local_4c;
                  goto LAB_1424da592;
                }
                local_4c = uVar2 + 3;
              }
              else {
                if ((((byte)(bVar4 + 0x20) < 0xe2) || (local_4c == param_5)) ||
                   (-0x41 < (char)param_4[uVar9])) goto LAB_1424da620;
                local_4c = uVar2 + 2;
              }
              iVar7 = iVar7 + 1;
              uVar9 = (ulonglong)local_4c;
            }
            else {
              iVar7 = iVar7 + 1;
            }
LAB_1424da592:
            uVar2 = (uint)uVar9;
          } while ((int)uVar2 < (int)param_5);
        }
      }
      if (param_7 != (int *)0x0) {
        *param_7 = local_5c;
      }
      iVar7 = iVar7 + (int)((ulonglong)((longlong)puVar10 - (longlong)param_1) >> 1);
      if (local_58 != (int *)0x0) {
        *local_58 = iVar7;
      }
      FUN_142504cc0(param_1,param_2,iVar7,param_8);
    }
  }
LAB_1424daadf:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
LAB_1424daa64:
  *param_8 = 10;
  goto LAB_1424daadf;
}



// FUNCTION 1424dab00 FUN_1424dab00 body=2318 status=ok
// SIG undefined FUN_1424dab00(void)

byte * FUN_1424dab00(byte *param_1,int param_2,int *param_3,ushort *param_4,uint param_5,
                    uint param_6,int *param_7,int *param_8)

{
  ushort uVar1;
  ushort *puVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte *pbVar18;
  int local_54;
  
  pbVar18 = param_1 + param_2;
  if (param_1 == (byte *)0x0) {
    pbVar18 = (byte *)0x0;
  }
  if (0 < *param_8) {
    return (byte *)0x0;
  }
  if ((((param_2 < 0) || ((int)param_5 < -1)) || (param_4 == (ushort *)0x0 && param_5 != 0)) ||
     (((param_1 == (byte *)0x0 && param_2 != 0 || (0x10ffff < (int)param_6)) ||
      ((param_6 & 0xfffff800) == 0xd800)))) {
    *param_8 = 1;
    return (byte *)0x0;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  pbVar4 = param_1;
  if (param_5 == 0xffffffff) {
    uVar6 = *param_4;
    if (uVar6 == 0) {
      uVar11 = 0;
      local_54 = 0;
    }
    else {
      local_54 = 0;
      do {
        uVar11 = (uint)uVar6;
        puVar2 = param_4 + 1;
        if (uVar6 < 0x80) {
          if (pbVar18 <= pbVar4) {
            uVar13 = 1;
            goto LAB_1424db342;
          }
LAB_1424dada8:
          *pbVar4 = (byte)uVar11;
          pbVar4 = pbVar4 + 1;
        }
        else {
          uVar7 = (uint)uVar6;
          if (uVar7 < 0x800) {
            if ((longlong)pbVar18 - (longlong)pbVar4 < 2) {
              uVar13 = 2;
              goto LAB_1424db342;
            }
LAB_1424dade1:
            *pbVar4 = (byte)(uVar11 >> 6) | 0xc0;
            pbVar4[1] = (byte)uVar11 & 0x3f | 0x80;
            pbVar4 = pbVar4 + 2;
          }
          else if ((ushort)(uVar6 + 0x2000) < 0xf800) {
            if ((longlong)pbVar18 - (longlong)pbVar4 < 3) {
              uVar13 = 3;
LAB_1424db342:
              uVar11 = (uint)uVar13;
              uVar6 = *puVar2;
              if (uVar6 == 0) goto LAB_1424db305;
              iVar12 = 3;
              if (param_6 < 0x800) {
                iVar12 = 2 - (uint)(param_6 < 0x80);
              }
              iVar8 = 0;
              if (0xdfff < param_6) {
                iVar8 = 4 - (uint)(param_6 < 0x10000);
              }
              if (param_6 < 0xd800) {
                iVar8 = iVar12;
              }
              goto LAB_1424db3b5;
            }
LAB_1424dae25:
            *pbVar4 = (byte)(uVar7 >> 0xc) | 0xe0;
            pbVar4[1] = (byte)(uVar7 >> 6) & 0x3f | 0x80;
            pbVar4[2] = (byte)uVar7 & 0x3f | 0x80;
            pbVar4 = pbVar4 + 3;
          }
          else {
            if (((uVar6 & 0x400) == 0) && (uVar1 = *puVar2, (uVar1 & 0xfc00) == 0xdc00)) {
              puVar2 = param_4 + 2;
              uVar11 = (uint)uVar6 * 0x400 + (uint)uVar1 + 0xfca02400;
            }
            else {
              if ((int)param_6 < 0) goto LAB_1424db42a;
              local_54 = local_54 + 1;
              uVar11 = param_6;
            }
            uVar13 = 1;
            if ((((0x7f < uVar11) && (uVar13 = 2, 0x7ff < uVar11)) && (uVar13 = 3, 0xd7ff < uVar11))
               && (uVar13 = 0, 0xffefdfff < uVar11 - 0x110000)) {
              uVar13 = (ulonglong)(4 - (uVar11 < 0x10000));
            }
            if ((longlong)pbVar18 - (longlong)pbVar4 < (longlong)uVar13) goto LAB_1424db342;
            if ((int)uVar11 < 0x80) goto LAB_1424dada8;
            if (uVar11 < 0x800) goto LAB_1424dade1;
            uVar7 = uVar11;
            if (uVar11 < 0x10000) goto LAB_1424dae25;
            *pbVar4 = (byte)(uVar11 >> 0x12) | 0xf0;
            pbVar4[1] = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
            pbVar4[2] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
            pbVar4[3] = (byte)uVar11 & 0x3f | 0x80;
            pbVar4 = pbVar4 + 4;
          }
        }
        uVar6 = *puVar2;
        param_4 = puVar2;
      } while (uVar6 != 0);
      uVar11 = 0;
    }
  }
  else {
    puVar2 = param_4 + param_5;
    if (param_4 == (ushort *)0x0) {
      puVar2 = (ushort *)0x0;
    }
    uVar13 = ((longlong)pbVar18 - (longlong)param_1) / 3;
    uVar3 = (ulonglong)((longlong)puVar2 - (longlong)param_4) >> 1;
    if ((int)uVar3 <= (int)uVar13) {
      uVar13 = uVar3;
    }
    uVar3 = uVar13 & 0xffffffff;
    if ((int)uVar13 < 3) {
      local_54 = 0;
    }
    else {
      bVar5 = (byte)(param_6 >> 0xc);
      bVar15 = (byte)(param_6 >> 6);
      bVar16 = bVar15 & 0x3f | 0x80;
      bVar14 = (byte)param_6 & 0x3f | 0x80;
      local_54 = 0;
LAB_1424dafe9:
      do {
        iVar12 = (int)uVar3;
        puVar9 = param_4 + 1;
        uVar6 = *param_4;
        bVar17 = (byte)uVar6;
        if (uVar6 < 0x80) {
          *pbVar4 = bVar17;
          pbVar4 = pbVar4 + 1;
LAB_1424db090:
          uVar3 = (ulonglong)(iVar12 - 1);
          param_4 = puVar9;
          if (1 < iVar12) goto LAB_1424dafe9;
        }
        else {
          if (uVar6 < 0x800) {
            *pbVar4 = (byte)(uVar6 >> 6) | 0xc0;
            pbVar4[1] = bVar17 & 0x3f | 0x80;
            pbVar4 = pbVar4 + 2;
            goto LAB_1424db090;
          }
          if ((uVar6 + 0x2000 & 0xffff) < 0xf800) {
            *pbVar4 = (byte)(uVar6 >> 0xc) | 0xe0;
            pbVar4[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
            pbVar4[2] = bVar17 & 0x3f | 0x80;
            pbVar4 = pbVar4 + 3;
            goto LAB_1424db090;
          }
          iVar12 = iVar12 + -1;
          if (iVar12 != 0) {
            if ((uVar6 & 0x400) == 0) {
              uVar1 = *puVar9;
              if ((uVar1 & 0xfc00) == 0xdc00) {
                puVar9 = param_4 + 2;
                uVar11 = (uint)uVar6 * 0x400 + (uint)uVar1 + 0xfca02400;
                *pbVar4 = (byte)(uVar11 >> 0x12) | 0xf0;
                pbVar4[1] = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
                pbVar4[2] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
                pbVar4[3] = (byte)uVar1 & 0x3f | 0x80;
                pbVar4 = pbVar4 + 4;
                goto LAB_1424db090;
              }
            }
            if (-1 < (int)param_6) {
              local_54 = local_54 + 1;
              if (param_6 < 0x80) {
                *pbVar4 = (byte)param_6;
                pbVar4 = pbVar4 + 1;
              }
              else if (param_6 < 0x800) {
                *pbVar4 = bVar15 | 0xc0;
                pbVar4[1] = bVar14;
                pbVar4 = pbVar4 + 2;
              }
              else if (param_6 < 0x10000) {
                *pbVar4 = bVar5 | 0xe0;
                pbVar4[1] = bVar16;
                pbVar4[2] = bVar14;
                pbVar4 = pbVar4 + 3;
              }
              else {
                *pbVar4 = (byte)(param_6 >> 0x12) | 0xf0;
                pbVar4[1] = bVar5 & 0x3f | 0x80;
                pbVar4[2] = bVar16;
                pbVar4[3] = bVar14;
                pbVar4 = pbVar4 + 4;
              }
              goto LAB_1424db090;
            }
            goto LAB_1424db42a;
          }
        }
        uVar13 = ((longlong)pbVar18 - (longlong)pbVar4) / 3;
        uVar3 = (ulonglong)((longlong)puVar2 - (longlong)param_4) >> 1;
        if ((int)uVar3 <= (int)uVar13) {
          uVar13 = uVar3;
        }
        uVar3 = uVar13 & 0xffffffff;
      } while (2 < (int)uVar13);
    }
    while (puVar9 = param_4, uVar11 = 0, param_4 < puVar2) {
      puVar9 = param_4 + 1;
      uVar6 = *param_4;
      bVar5 = (byte)uVar6;
      if (uVar6 < 0x80) {
        if (pbVar18 <= pbVar4) {
          uVar11 = 1;
          break;
        }
        *pbVar4 = bVar5;
        pbVar4 = pbVar4 + 1;
        param_4 = puVar9;
      }
      else if (uVar6 < 0x800) {
        if ((longlong)pbVar18 - (longlong)pbVar4 < 2) {
          uVar11 = 2;
          break;
        }
        *pbVar4 = (byte)(uVar6 >> 6) | 0xc0;
        pbVar4[1] = bVar5 & 0x3f | 0x80;
        pbVar4 = pbVar4 + 2;
        param_4 = puVar9;
      }
      else if ((ushort)(uVar6 + 0x2000) < 0xf800) {
        if ((longlong)pbVar18 - (longlong)pbVar4 < 3) {
          uVar11 = 3;
          break;
        }
        *pbVar4 = (byte)(uVar6 >> 0xc) | 0xe0;
        pbVar4[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
        pbVar4[2] = bVar5 & 0x3f | 0x80;
        pbVar4 = pbVar4 + 3;
        param_4 = puVar9;
      }
      else {
        if ((((uVar6 & 0x400) == 0) && (puVar9 < puVar2)) &&
           (uVar1 = *puVar9, (uVar1 & 0xfc00) == 0xdc00)) {
          puVar9 = param_4 + 2;
          uVar7 = (uint)uVar1 + (uint)uVar6 * 0x400 + 0xfca02400;
        }
        else {
          if ((int)param_6 < 0) goto LAB_1424db42a;
          local_54 = local_54 + 1;
          uVar7 = param_6;
        }
        uVar11 = 1;
        if ((((0x7f < uVar7) && (uVar11 = 2, 0x7ff < uVar7)) && (uVar11 = 3, 0xd7ff < uVar7)) &&
           (uVar11 = 0, 0xffefdfff < uVar7 - 0x110000)) {
          uVar11 = 4 - (uVar7 < 0x10000);
        }
        if ((longlong)pbVar18 - (longlong)pbVar4 < (longlong)(ulonglong)uVar11) break;
        pbVar4 = (byte *)FUN_1424db440();
        param_4 = puVar9;
      }
    }
    if (puVar9 < puVar2) {
      iVar12 = 3;
      if (param_6 < 0x800) {
        iVar12 = 2 - (uint)(param_6 < 0x80);
      }
      iVar8 = 0;
      if (0xdfff < param_6) {
        iVar8 = 4 - (uint)(param_6 < 0x10000);
      }
      if (param_6 < 0xd800) {
        iVar8 = iVar12;
      }
      do {
        puVar10 = puVar9 + 1;
        uVar6 = *puVar9;
        if (uVar6 < 0x80) {
          uVar11 = uVar11 + 1;
        }
        else if (uVar6 < 0x800) {
          uVar11 = uVar11 + 2;
        }
        else if ((uVar6 & 0xf800) == 0xd800) {
          if ((((uVar6 & 0x400) == 0) && (puVar10 < puVar2)) && ((*puVar10 & 0xfc00) == 0xdc00)) {
            puVar10 = puVar9 + 2;
            uVar11 = uVar11 + 4;
          }
          else {
            if ((int)param_6 < 0) {
LAB_1424db42a:
              *param_8 = 10;
              return (byte *)0x0;
            }
            uVar11 = uVar11 + iVar8;
            local_54 = local_54 + 1;
          }
        }
        else {
          uVar11 = uVar11 + 3;
        }
        puVar9 = puVar10;
      } while (puVar10 < puVar2);
    }
  }
LAB_1424db305:
  if (param_7 != (int *)0x0) {
    *param_7 = local_54;
  }
  iVar12 = uVar11 + ((int)pbVar4 - (int)param_1);
  if (param_3 != (int *)0x0) {
    *param_3 = iVar12;
  }
  FUN_142504d00(param_1,param_2,iVar12,param_8);
  return param_1;
LAB_1424db3b5:
  do {
    puVar9 = puVar2 + 1;
    iVar12 = (int)uVar13;
    if (uVar6 < 0x80) {
      uVar13 = (ulonglong)(iVar12 + 1);
      puVar2 = puVar9;
    }
    else if (uVar6 < 0x800) {
      uVar13 = (ulonglong)(iVar12 + 2);
      puVar2 = puVar9;
    }
    else if ((uVar6 & 0xf800) == 0xd800) {
      if (((uVar6 & 0x400) == 0) && ((*puVar9 & 0xfc00) == 0xdc00)) {
        uVar13 = (ulonglong)(iVar12 + 4);
        puVar2 = puVar2 + 2;
      }
      else {
        if ((int)param_6 < 0) goto LAB_1424db42a;
        uVar13 = (ulonglong)(uint)(iVar12 + iVar8);
        local_54 = local_54 + 1;
        puVar2 = puVar9;
      }
    }
    else {
      uVar13 = (ulonglong)(iVar12 + 3);
      puVar2 = puVar9;
    }
    uVar11 = (uint)uVar13;
    uVar6 = *puVar2;
  } while (uVar6 != 0);
  goto LAB_1424db305;
}



// FUNCTION 1424db440 FUN_1424db440 body=140 status=ok
// SIG undefined FUN_1424db440(void)

byte * FUN_1424db440(byte *param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if ((int)param_2 < 0x80) {
    *param_1 = bVar1;
    return param_1 + 1;
  }
  if (param_2 < 0x800) {
    *param_1 = (byte)(param_2 >> 6) | 0xc0;
    param_1[1] = bVar1 & 0x3f | 0x80;
    return param_1 + 2;
  }
  if (param_2 < 0x10000) {
    *param_1 = (byte)(param_2 >> 0xc) | 0xe0;
    param_1[1] = (byte)(param_2 >> 6) & 0x3f | 0x80;
    param_1[2] = bVar1 & 0x3f | 0x80;
    return param_1 + 3;
  }
  *param_1 = (byte)(param_2 >> 0x12) | 0xf0;
  param_1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
  param_1[2] = (byte)(param_2 >> 6) & 0x3f | 0x80;
  param_1[3] = bVar1 & 0x3f | 0x80;
  return param_1 + 4;
}



// FUNCTION 1424db4d0 FUN_1424db4d0 body=50 status=ok
// SIG undefined FUN_1424db4d0(void)

void FUN_1424db4d0(void)

{
  FUN_1424dab00();
  return;
}



// FUNCTION 1424db510 FUN_1424db510 body=90 status=ok
// SIG undefined FUN_1424db510(void)

undefined8 FUN_1424db510(longlong *param_1,int *param_2,char param_3,int param_4)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    if (param_3 != '\0') {
      lVar1 = FUN_1424da030((longlong)param_4);
      *param_1 = lVar1;
      if (lVar1 != 0) goto LAB_1424db55a;
    }
  }
  else {
    if (param_4 <= *param_2) {
      return 1;
    }
    if ((param_3 != '\0') && (lVar1 = FUN_1424da060(*param_1,(longlong)param_4), lVar1 != 0)) {
      *param_1 = lVar1;
LAB_1424db55a:
      *param_2 = param_4;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1424db570 FUN_1424db570 body=5805 status=ok
// SIG undefined FUN_1424db570(void)

void FUN_1424db570(undefined8 *param_1,wchar_t *param_2,undefined8 param_3,uint param_4,
                  longlong param_5,int *param_6)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte *pbVar16;
  char cVar17;
  byte bVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  void *_Src;
  size_t sVar24;
  byte *pbVar25;
  longlong *plVar26;
  undefined4 *puVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  undefined **ppuVar30;
  byte bVar31;
  char *pcVar32;
  ulonglong uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  longlong lVar37;
  ulonglong uVar38;
  bool bVar39;
  int iVar40;
  byte *pbVar41;
  uint uVar42;
  uint uVar43;
  int iVar44;
  ulonglong uVar45;
  uint uVar46;
  ulonglong uVar47;
  undefined8 *puVar48;
  int *piVar49;
  longlong lVar50;
  void *_Dst;
  byte bVar51;
  longlong lVar52;
  byte bVar53;
  undefined1 auStack_4d8 [32];
  int *local_4b8;
  int *local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  ulonglong local_498;
  uint local_48c;
  undefined8 local_488;
  longlong *local_480;
  byte *local_478;
  uint local_46c;
  ulonglong local_468;
  undefined8 *local_460;
  int aiStack_458 [127];
  int aiStack_25c [127];
  ulonglong local_60;
  
  iVar20 = (int)param_3;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  if ((param_6 == (int *)0x0) || (0 < *param_6)) goto LAB_1424dcc14;
  if ((param_1 == (undefined8 *)0x0) ||
     (((param_2 == (wchar_t *)0x0 || (iVar20 < -1)) ||
      (bVar18 = (byte)param_4, -1 < (char)(bVar18 + 0x82))))) {
    *param_6 = 1;
    goto LAB_1424dcc14;
  }
  if (iVar20 == -1) {
    sVar24 = wcslen(param_2);
    iVar20 = (int)sVar24;
    iVar34 = *(int *)((longlong)param_1 + 0x84);
  }
  else {
    iVar34 = *(int *)((longlong)param_1 + 0x84);
  }
  if (iVar34 == 3) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    if (iVar20 == 0) {
      local_4b0 = param_6;
      local_4b8 = (int *)0x0;
      lVar23 = 0;
      FUN_1424db570(param_1,param_2,0,param_4);
    }
    else {
      lVar50 = (longlong)iVar20;
      lVar23 = FUN_1424da030(lVar50 * 7);
      if (lVar23 == 0) {
        *param_6 = 7;
        lVar23 = 0;
      }
      else {
        uVar43 = *(uint *)(param_1 + 0x11);
        if ((uVar43 & 1) != 0) {
          *(uint *)(param_1 + 0x11) = uVar43 & 0xfffffffc | 2;
        }
        local_4b0 = param_6;
        local_4b8 = (int *)0x0;
        FUN_1424db570(param_1,param_2,iVar20,param_4 & 0xffffff01);
        if (*param_6 < 1) {
          local_468 = CONCAT71(local_468._1_7_,(char)(param_4 & 0xffffff01));
          plVar26 = (longlong *)(lVar23 + lVar50 * 4);
          _Dst = (void *)(lVar50 * 2 + (longlong)plVar26);
          _Src = (void *)FUN_1424dfca0(param_1,param_6);
          memcpy(_Dst,_Src,(longlong)*(int *)((longlong)param_1 + 0x14));
          uVar42 = *(uint *)((longlong)param_1 + 0xc4);
          uVar35 = *(uint *)((longlong)param_1 + 0x14);
          local_478 = (byte *)CONCAT44(local_478._4_4_,*(undefined4 *)(param_1 + 0x17));
          local_4b8 = param_6;
          local_480 = plVar26;
          uVar19 = FUN_142582140(param_1,plVar26,iVar20,2);
          local_498 = CONCAT44(local_498._4_4_,uVar19);
          FUN_1424e0680(param_1,lVar23,param_6);
          if (*param_6 < 1) {
            *(uint *)(param_1 + 0x11) = uVar43;
            *(undefined4 *)((longlong)param_1 + 0x84) = 5;
            uVar3 = *(undefined1 *)(param_1 + 0xd);
            *(undefined1 *)(param_1 + 0xd) = 0;
            local_4b0 = param_6;
            local_4b8 = (int *)0x0;
            local_48c = uVar42;
            local_46c = uVar35;
            FUN_1424db570(param_1,local_480,local_498 & 0xffffffff,(byte)local_468 ^ 1);
            *(undefined1 *)(param_1 + 0xd) = uVar3;
            FUN_1424dfde0(param_1,param_6);
            if (*param_6 < 1) {
              uVar43 = *(uint *)(param_1 + 0x25);
              uVar45 = (ulonglong)uVar43;
              if (0 < (int)uVar43) {
                puVar28 = (undefined8 *)param_1[0x26];
                uVar29 = 0;
                iVar40 = 0;
                iVar34 = 0;
                do {
                  iVar44 = *(int *)((longlong)puVar28 + uVar29 * 0xc + 4);
                  iVar34 = iVar44 - iVar34;
                  if (1 < iVar34) {
                    uVar42 = *(uint *)((longlong)puVar28 + uVar29 * 0xc) & 0x7fffffff;
                    uVar33 = (ulonglong)uVar42;
                    do {
                      iVar22 = *(int *)(lVar23 + 4 + uVar33 * 4);
                      iVar5 = *(int *)(lVar23 + (uVar33 & 0xffffffff) * 4);
                      if ((((iVar22 - iVar5) + 1U & 0xfffffffd) != 0) ||
                         (*(char *)((longlong)_Dst + (longlong)iVar22) !=
                          *(char *)((longlong)_Dst + (longlong)iVar5))) {
                        iVar40 = iVar40 + 1;
                      }
                      iVar22 = (int)uVar33;
                      uVar33 = uVar33 + 1;
                    } while (iVar22 + 2 < (int)(iVar34 + uVar42));
                  }
                  uVar29 = uVar29 + 1;
                  iVar34 = iVar44;
                } while (uVar29 != uVar45);
                if (iVar40 == 0) {
                  iVar40 = 0;
                }
                else {
                  local_480 = param_1 + 0xb;
                  cVar17 = FUN_1424db510(local_480,(longlong)param_1 + 0x2c,
                                         *(undefined1 *)((longlong)param_1 + 0x69),
                                         (iVar40 + uVar43) * 0xc);
                  if (cVar17 == '\0') goto LAB_1424db775;
                  if (uVar43 == 1) {
                    puVar48 = (undefined8 *)*local_480;
                    *(undefined4 *)(puVar48 + 1) = *(undefined4 *)(puVar28 + 1);
                    *puVar48 = *puVar28;
                  }
                  puVar28 = (undefined8 *)param_1[0xb];
                  param_1[0x26] = puVar28;
                  *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + iVar40;
                }
                if (0 < (int)uVar43) {
                  do {
                    uVar29 = uVar45 - 1;
                    iVar34 = (int)uVar29;
                    if (iVar34 == 0) {
                      iVar44 = *(int *)((longlong)puVar28 + 4);
                      uVar33 = 0;
                      iVar22 = iVar44;
                    }
                    else {
                      uVar33 = uVar29 & 0xffffffff;
                      iVar44 = *(int *)((longlong)puVar28 + uVar33 * 0xc + 4);
                      iVar22 = iVar44 - *(int *)((longlong)puVar28 +
                                                (ulonglong)((int)uVar45 - 2) * 0xc + 4);
                    }
                    puVar48 = (undefined8 *)(uVar33 * 0xc + (longlong)puVar28);
                    uVar43 = *(uint *)((longlong)puVar28 + uVar33 * 0xc);
                    uVar35 = uVar43 >> 0x1f;
                    local_488 = (byte *)CONCAT44(local_488._4_4_,uVar35);
                    uVar42 = uVar43 & 0x7fffffff;
                    uVar38 = (ulonglong)uVar42;
                    if (iVar22 < 2) {
                      lVar50 = (longlong)(iVar40 + iVar34);
                      if (iVar40 != 0) {
                        *(undefined4 *)((longlong)puVar28 + lVar50 * 0xc + 8) =
                             *(undefined4 *)(puVar48 + 1);
                        *(undefined8 *)((longlong)puVar28 + lVar50 * 0xc) = *puVar48;
                      }
                      uVar42 = *(uint *)(lVar23 + uVar38 * 4);
                    }
                    else {
                      uVar46 = iVar22 + -1 + uVar42;
                      uVar21 = uVar46;
                      if (-1 < (int)uVar43) {
                        uVar38 = (ulonglong)uVar46;
                        uVar21 = uVar42;
                        uVar42 = uVar46;
                      }
                      local_480 = (longlong *)CONCAT44(local_480._4_4_,uVar21);
                      if (uVar42 != uVar21) {
                        lVar50 = (ulonglong)((int)uVar43 < 0) * 2 + -1;
                        piVar49 = (int *)((longlong)puVar28 + uVar33 * 0xc + 4);
                        lVar37 = (longlong)(int)uVar42;
                        local_498 = (lVar23 + (ulonglong)((int)uVar43 < 0) * 8) - 4;
                        do {
                          while( true ) {
                            uVar42 = (uint)uVar38;
                            iVar36 = (int)lVar37;
                            uVar43 = *(uint *)(lVar23 + lVar37 * 4);
                            iVar22 = *(int *)(local_498 + lVar37 * 4);
                            lVar37 = lVar37 + lVar50;
                            iVar5 = (int)lVar50;
                            if ((((uVar43 - iVar22) + 1 & 0xfffffffd) != 0) ||
                               (*(char *)((longlong)_Dst + (longlong)(int)uVar43) !=
                                *(char *)((longlong)_Dst + (longlong)iVar22))) break;
                            if (iVar36 + iVar5 == uVar21) goto LAB_1424dc733;
                          }
                          uVar46 = *(uint *)(lVar23 + (longlong)(int)uVar42 * 4);
                          if ((int)uVar46 < (int)uVar43) {
                            uVar43 = uVar46;
                          }
                          lVar52 = (longlong)(iVar40 + iVar34);
                          *(uint *)((longlong)puVar28 + lVar52 * 0xc) =
                               uVar43 | (*(byte *)((longlong)_Dst + (longlong)(int)uVar43) ^ uVar35)
                                        << 0x1f;
                          *(int *)((longlong)puVar28 + lVar52 * 0xc + 4) = iVar44;
                          uVar43 = -(iVar36 - uVar42);
                          if ((int)uVar43 < 0) {
                            uVar43 = iVar36 - uVar42;
                          }
                          iVar44 = ~uVar43 + *piVar49;
                          *piVar49 = iVar44;
                          uVar43 = *(uint *)((longlong)puVar28 + uVar33 * 0xc + 8) & 10;
                          *(uint *)((longlong)puVar28 + lVar52 * 0xc + 8) = uVar43;
                          puVar1 = (uint *)((longlong)puVar28 + uVar33 * 0xc + 8);
                          *puVar1 = *puVar1 & ~uVar43;
                          iVar40 = iVar40 + -1;
                          uVar42 = iVar5 + iVar36;
                          uVar38 = (ulonglong)uVar42;
                        } while ((uint)lVar37 != uVar21);
                      }
LAB_1424dc733:
                      lVar50 = (longlong)(iVar40 + iVar34);
                      if (iVar40 != 0) {
                        *(undefined4 *)((longlong)puVar28 + lVar50 * 0xc + 8) =
                             *(undefined4 *)(puVar48 + 1);
                        *(undefined8 *)((longlong)puVar28 + lVar50 * 0xc) = *puVar48;
                      }
                      uVar43 = *(uint *)(lVar23 + (longlong)(int)uVar42 * 4);
                      uVar42 = *(uint *)(lVar23 + (longlong)(int)uVar21 * 4);
                      local_4a8 = uVar29;
                      local_468 = uVar45;
                      local_460 = puVar48;
                      if ((int)uVar43 < (int)uVar42) {
                        uVar42 = uVar43;
                      }
                    }
                    *(uint *)((longlong)puVar28 + lVar50 * 0xc) =
                         uVar42 | (uVar35 ^ *(byte *)((longlong)_Dst + (longlong)(int)uVar42)) <<
                                  0x1f;
                    bVar39 = 1 < (longlong)uVar45;
                    uVar45 = uVar29;
                    local_4a0 = puVar28;
                  } while (bVar39);
                }
              }
            }
LAB_1424db775:
            *(byte *)((longlong)param_1 + 0x8d) = *(byte *)((longlong)param_1 + 0x8d) ^ 1;
            uVar35 = local_46c;
            uVar42 = local_48c;
          }
          param_1[1] = param_2;
          *(uint *)((longlong)param_1 + 0x14) = uVar35;
          *(int *)(param_1 + 2) = iVar20;
          *(undefined4 *)(param_1 + 0x17) = local_478._0_4_;
          uVar43 = *(uint *)(param_1 + 4);
          if ((int)uVar35 < (int)*(uint *)(param_1 + 4)) {
            uVar43 = uVar35;
          }
          memcpy((void *)param_1[0xf],_Dst,(longlong)(int)uVar43);
          *(uint *)((longlong)param_1 + 0xc4) = uVar42;
          if (1 < *(int *)(param_1 + 0x25)) {
            *(undefined4 *)(param_1 + 0x17) = 2;
          }
        }
      }
    }
    FUN_1424da110(lVar23);
    *(undefined4 *)((longlong)param_1 + 0x84) = 3;
    goto LAB_1424dcc14;
  }
  *param_1 = 0;
  param_1[1] = param_2;
  *(int *)(param_1 + 3) = iVar20;
  *(int *)(param_1 + 2) = iVar20;
  *(int *)((longlong)param_1 + 0x14) = iVar20;
  *(byte *)((longlong)param_1 + 0x8d) = bVar18;
  bVar31 = bVar18 & 1;
  *(uint *)(param_1 + 0x17) = (uint)bVar31;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(bool *)((longlong)param_1 + 0x8e) = 0xfd < bVar18;
  if (iVar20 == 0) {
    if (0xfd < bVar18) {
      *(byte *)((longlong)param_1 + 0x8d) = bVar31;
      *(undefined1 *)((longlong)param_1 + 0x8e) = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0xbc) =
         *(undefined4 *)(&DAT_149966f20 + (ulonglong)bVar31 * 4);
    *(undefined4 *)(param_1 + 0x25) = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
    goto LAB_1424db917;
  }
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  pbVar41 = (byte *)(param_1 + 0x1b);
  pbVar25 = (byte *)param_1[10];
  if ((byte *)param_1[10] == (byte *)0x0) {
    pbVar25 = pbVar41;
  }
  plVar26 = (longlong *)param_1[7];
  param_1[0x1a] = pbVar25;
  if (plVar26 == (longlong *)0x0) {
    if (*(char *)(param_1 + 0xd) != '\0') {
      plVar26 = (longlong *)FUN_1424da030((longlong)iVar20);
      param_1[7] = plVar26;
      if (plVar26 != (longlong *)0x0) goto LAB_1424db96c;
    }
LAB_1424db99d:
    *param_6 = 7;
    goto LAB_1424dcc14;
  }
  if (*(int *)((longlong)param_1 + 0x1c) < iVar20) {
    if ((*(char *)(param_1 + 0xd) == '\0') ||
       (plVar26 = (longlong *)FUN_1424da060(plVar26,(longlong)iVar20), plVar26 == (longlong *)0x0))
    goto LAB_1424db99d;
    param_1[7] = plVar26;
LAB_1424db96c:
    *(int *)((longlong)param_1 + 0x1c) = iVar20;
    param_2 = (wchar_t *)param_1[1];
    iVar20 = *(int *)(param_1 + 2);
    param_4 = (uint)*(byte *)((longlong)param_1 + 0x8d);
  }
  param_1[0xe] = plVar26;
  bVar18 = (byte)param_4;
  if (bVar18 < 0xfe) {
    uVar19 = 0;
  }
  else {
    uVar19 = (undefined4)
             CONCAT71((int7)((ulonglong)param_3 >> 8),*(int *)((longlong)param_1 + 0x84) - 5U < 2);
  }
  local_498 = CONCAT44(local_498._4_4_,*(uint *)(param_1 + 0x11));
  if ((*(uint *)(param_1 + 0x11) & 4) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  lVar23 = param_1[0x1a];
  local_48c = CONCAT31(local_48c._1_3_,bVar18) & 0xffffff01;
  local_468 = CONCAT71(local_468._1_7_,bVar18);
  local_460 = (undefined8 *)CONCAT44(local_460._4_4_,uVar19);
  local_46c = (uint)(bVar18 & 1);
  local_480 = plVar26;
  if (bVar18 < 0xfe) {
    *(uint *)(lVar23 + 4) = param_4 & 0xff;
    local_4a0 = (undefined8 *)
                CONCAT44(local_4a0._4_4_,(int)CONCAT71((int7)((ulonglong)lVar23 >> 8),10));
    local_4a8 = (ulonglong)local_4a8._4_4_ << 0x20;
  }
  else {
    *(uint *)(lVar23 + 4) = local_46c;
    iVar34 = *(int *)(param_1 + 0x13);
    local_4a8 = CONCAT44(local_4a8._4_4_,1);
    if (0 < iVar34) {
      lVar23 = param_1[0x12];
      uVar43 = 10;
      iVar40 = 0;
      local_488 = pbVar41;
      do {
        iVar44 = iVar40 + 1;
        uVar4 = *(ushort *)(lVar23 + (longlong)iVar40 * 2);
        uVar42 = (uint)uVar4;
        if ((((uVar42 & 0xfc00) == 0xd800) && (iVar44 != iVar34)) &&
           (uVar35 = (uint)*(ushort *)(lVar23 + (longlong)iVar44 * 2), (uVar35 & 0xfc00) == 0xdc00))
        {
          iVar44 = iVar40 + 2;
          uVar42 = (uint)uVar4 * 0x400 + uVar35 + 0xfca02400;
        }
        if (((code *)param_1[0x38] == (code *)0x0) ||
           (uVar35 = (*(code *)param_1[0x38])(param_1[0x39],uVar42), uVar35 == 0x17)) {
          uVar35 = FUN_1425813e0(uVar42);
        }
        uVar42 = 10;
        if ((int)uVar35 < 0x17) {
          uVar42 = uVar35;
        }
        if ((char)uVar43 == '\n') {
          uVar43 = 10;
          if (((byte)uVar42 < 0xe) && ((0x2003U >> (uVar42 & 0x1f) & 1) != 0)) {
            uVar43 = uVar42;
          }
        }
        else {
          uVar43 = uVar43 & 0xff;
          if ((byte)uVar42 == 7) {
            uVar43 = 10;
          }
        }
        iVar40 = iVar44;
      } while (iVar44 < iVar34);
      local_4a0 = (undefined8 *)(CONCAT44(local_4a0._4_4_,local_48c) & 0xffffffff000000ff);
      pbVar41 = local_488;
      if ((char)uVar43 == '\n') goto LAB_1424dbb4a;
      if ((uVar43 & 0xff) == 0) {
        *(undefined4 *)(param_1[0x1a] + 4) = 0;
      }
      else {
        *(undefined4 *)(param_1[0x1a] + 4) = 1;
      }
      local_4a8 = local_4a8 & 0xffffffff00000000;
    }
    local_4a0 = (undefined8 *)(CONCAT44(local_4a0._4_4_,local_48c) & 0xffffffff000000ff);
  }
LAB_1424dbb4a:
  if (iVar20 < 1) {
    uVar43 = 0;
    local_478 = (byte *)CONCAT44(local_478._4_4_,0xffffffff);
    uVar42 = 0xffffffff;
    local_488 = (byte *)((ulonglong)local_488._4_4_ << 0x20);
  }
  else {
    iVar34 = 0;
    uVar42 = 0xffffffff;
    local_488 = (byte *)((ulonglong)local_488._4_4_ << 0x20);
    local_478 = (byte *)CONCAT44(local_478._4_4_,0xffffffff);
    uVar43 = 0;
    do {
      while( true ) {
        iVar40 = iVar34 + 1;
        uVar35 = (uint)(ushort)param_2[iVar34];
        if ((((uVar35 & 0xfc00) == 0xd800) && (iVar40 != iVar20)) &&
           (((ushort)param_2[iVar40] & 0xfc00) == 0xdc00)) {
          uVar35 = (uint)(ushort)param_2[iVar34] * 0x400 + (uint)(ushort)param_2[iVar40] +
                   0xfca02400;
          iVar40 = iVar34 + 2;
        }
        iVar34 = iVar40;
        if (((code *)param_1[0x38] == (code *)0x0) ||
           (uVar21 = (*(code *)param_1[0x38])(param_1[0x39],uVar35), uVar21 == 0x17)) {
          uVar21 = FUN_1425813e0(uVar35);
        }
        uVar46 = 10;
        if ((int)uVar21 < 0x17) {
          uVar46 = uVar21;
        }
        uVar43 = uVar43 | 1 << (uVar46 & 0x1f);
        lVar23 = (longlong)iVar34;
        cVar17 = (char)uVar46;
        *(char *)((longlong)local_480 + lVar23 + -1) = cVar17;
        if (0xffff < uVar35) {
          uVar43 = uVar43 | 0x40000;
          *(undefined1 *)(lVar23 + -2 + (longlong)local_480) = 0x12;
        }
        if ((local_498 & 2) != 0) {
          local_488 = (byte *)CONCAT44(local_488._4_4_,
                                       (int)local_488 +
                                       (uint)(uVar35 - 0x2066 < 4 ||
                                             (uVar35 - 0x202a < 5 || (uVar35 & 0xfffffffc) == 0x200c
                                             )));
        }
        uVar46 = uVar46 & 0xff;
        if (uVar46 != 0) break;
        if ((int)local_4a8 == 2) {
          if ((int)uVar42 < 0x7e) {
            uVar43 = uVar43 | 0x100000;
          }
          local_4a8 = CONCAT44(local_4a8._4_4_,3);
        }
        else if ((int)local_4a8 == 1) {
          *(undefined4 *)(param_1[0x1a] + -4 + (longlong)*(int *)(param_1 + 0x19) * 8) = 0;
          local_4a8 = (ulonglong)local_4a8._4_4_ << 0x20;
          local_4a0 = (undefined8 *)((ulonglong)local_4a0._4_4_ << 0x20);
          goto LAB_1424dbdd2;
        }
        local_4a0 = (undefined8 *)((ulonglong)local_4a0._4_4_ << 0x20);
LAB_1424dbdd2:
        if (iVar20 <= iVar34) goto LAB_1424dbb86;
      }
      pbVar25 = (byte *)(lVar23 + -1);
      if ((cVar17 == '\r') || (uVar46 == 1)) {
        if ((int)local_4a8 == 2) {
          local_4a8 = CONCAT44(local_4a8._4_4_,3);
          if ((int)uVar42 < 0x7e) {
            *(undefined1 *)((longlong)local_480 + (longlong)aiStack_25c[(longlong)(int)uVar42 + 1])
                 = 0x15;
            uVar43 = uVar43 | 0x200000;
          }
        }
        else if ((int)local_4a8 == 1) {
          *(undefined4 *)(param_1[0x1a] + -4 + (longlong)*(int *)(param_1 + 0x19) * 8) = 1;
          local_4a8 = (ulonglong)local_4a8._4_4_ << 0x20;
        }
        pbVar16 = local_478;
        if (uVar46 == 0xd) {
          pbVar16 = pbVar25;
        }
        local_478 = (byte *)CONCAT44(local_478._4_4_,(int)pbVar16);
        uVar35 = (uint)CONCAT71((uint7)((ulonglong)pbVar16 >> 8) & 0xffffff,1);
LAB_1424dc056:
        local_4a0 = (undefined8 *)CONCAT44(local_4a0._4_4_,uVar35);
        goto LAB_1424dbdd2;
      }
      if (uVar46 - 0x13 < 3) {
        uVar35 = uVar42 + 1;
        if ((int)uVar42 < 0x7d) {
          aiStack_25c[(longlong)(int)uVar35 + 1] = (int)pbVar25;
          aiStack_458[(int)uVar35] = (int)local_4a8;
        }
        local_4a8 = CONCAT44(local_4a8._4_4_,3);
        uVar42 = uVar35;
        if (uVar46 == 0x13) {
          *(byte *)((longlong)local_480 + (longlong)pbVar25) = 0x14;
          local_4a8 = CONCAT44(local_4a8._4_4_,2);
        }
      }
      else {
        if (cVar17 == '\a') {
          bVar39 = iVar34 < iVar20;
          if ((uVar35 == 0xd) && (iVar34 < iVar20)) {
            if (param_2[lVar23] == L'\n') goto joined_r0x0001424dbdef;
            bVar39 = true;
          }
          *(int *)(param_1[0x1a] + -8 + (longlong)*(int *)(param_1 + 0x19) * 8) = iVar34;
          if (((char)local_4a0 == '\x01' & (byte)local_460) == 1) {
            *(undefined4 *)(param_1[0x1a] + -4 + (longlong)*(int *)(param_1 + 0x19) * 8) = 1;
            bVar18 = *(byte *)(param_1 + 0x11);
          }
          else {
            bVar18 = *(byte *)(param_1 + 0x11);
          }
          if ((bVar18 & 4) != 0) {
            *(int *)((longlong)param_1 + 0x14) = iVar34;
            *(int *)(param_1 + 0x37) = (int)local_488;
          }
          if (!bVar39) goto LAB_1424dbdd2;
          iVar44 = *(int *)(param_1 + 0x19);
          iVar40 = iVar44 + 1;
          *(int *)(param_1 + 0x19) = iVar40;
          if ((byte *)param_1[0x1a] == pbVar41) {
            if (9 < iVar44) {
              puVar27 = (undefined4 *)param_1[10];
              if (puVar27 == (undefined4 *)0x0) {
                puVar27 = (undefined4 *)FUN_1424da030(0xa0);
                param_1[10] = puVar27;
                if (puVar27 != (undefined4 *)0x0) {
LAB_1424dc1b6:
                  *(undefined4 *)(param_1 + 5) = 0xa0;
                  goto LAB_1424dc1c0;
                }
              }
              else {
                if (0x9f < *(int *)(param_1 + 5)) {
LAB_1424dc1c0:
                  param_1[0x1a] = puVar27;
                  uVar11 = *(undefined8 *)(pbVar41 + 0x48);
                  *(undefined8 *)(puVar27 + 0x10) = *(undefined8 *)(pbVar41 + 0x40);
                  *(undefined8 *)(puVar27 + 0x12) = uVar11;
                  uVar19 = *(undefined4 *)pbVar41;
                  uVar6 = *(undefined4 *)(pbVar41 + 4);
                  uVar7 = *(undefined4 *)(pbVar41 + 8);
                  uVar8 = *(undefined4 *)(pbVar41 + 0xc);
                  uVar11 = *(undefined8 *)(pbVar41 + 0x10);
                  uVar12 = *(undefined8 *)(pbVar41 + 0x18);
                  uVar13 = *(undefined8 *)(pbVar41 + 0x20);
                  uVar14 = *(undefined8 *)(pbVar41 + 0x28);
                  uVar15 = *(undefined8 *)(pbVar41 + 0x38);
                  *(undefined8 *)(puVar27 + 0xc) = *(undefined8 *)(pbVar41 + 0x30);
                  *(undefined8 *)(puVar27 + 0xe) = uVar15;
                  *(undefined8 *)(puVar27 + 8) = uVar13;
                  *(undefined8 *)(puVar27 + 10) = uVar14;
                  *(undefined8 *)(puVar27 + 4) = uVar11;
                  *(undefined8 *)(puVar27 + 6) = uVar12;
                  *puVar27 = uVar19;
                  puVar27[1] = uVar6;
                  puVar27[2] = uVar7;
                  puVar27[3] = uVar8;
                  goto LAB_1424dc1ed;
                }
                puVar27 = (undefined4 *)FUN_1424da060(puVar27,0xa0);
                if (puVar27 != (undefined4 *)0x0) {
                  param_1[10] = puVar27;
                  goto LAB_1424dc1b6;
                }
              }
LAB_1424dcb61:
              *param_6 = 7;
              goto LAB_1424dcc14;
            }
          }
          else {
            iVar40 = iVar40 * 0x10;
            lVar23 = param_1[10];
            if (lVar23 == 0) {
              lVar23 = FUN_1424da030((longlong)iVar40);
              param_1[10] = lVar23;
              if (lVar23 == 0) goto LAB_1424dcb61;
LAB_1424dc190:
              *(int *)(param_1 + 5) = iVar40;
            }
            else if (*(int *)(param_1 + 5) < iVar40) {
              lVar23 = FUN_1424da060(lVar23,(longlong)iVar40);
              if (lVar23 == 0) goto LAB_1424dcb61;
              param_1[10] = lVar23;
              goto LAB_1424dc190;
            }
            param_1[0x1a] = lVar23;
          }
LAB_1424dc1ed:
          if ((byte)local_468 < 0xfe) {
            *(uint *)(param_1[0x1a] + -4 + (longlong)*(int *)(param_1 + 0x19) * 8) =
                 (uint)*(byte *)((longlong)param_1 + 0x8d);
            uVar42 = 0xffffffff;
            local_4a8 = (ulonglong)local_4a8._4_4_ << 0x20;
            goto LAB_1424dbdd2;
          }
          *(uint *)(param_1[0x1a] + -4 + (longlong)*(int *)(param_1 + 0x19) * 8) = local_46c;
          uVar42 = 0xffffffff;
          local_4a8 = CONCAT44(local_4a8._4_4_,1);
          uVar35 = local_48c & 0xff;
          goto LAB_1424dc056;
        }
        if (uVar46 == 0x16) {
          uVar35 = uVar43 | 0x100000;
          if (0x7d < (int)uVar42) {
            uVar35 = uVar43;
          }
          if ((int)local_4a8 != 2) {
            uVar35 = uVar43;
          }
          uVar43 = uVar35;
          if (-1 < (int)uVar42) {
            if ((int)uVar42 < 0x7e) {
              local_4a8 = CONCAT44(local_4a8._4_4_,aiStack_458[uVar42]);
            }
            uVar42 = uVar42 - 1;
          }
        }
      }
joined_r0x0001424dbdef:
    } while (iVar34 < iVar20);
  }
LAB_1424dbb86:
  uVar35 = 0x7d;
  if ((int)uVar42 < 0x7d) {
    uVar35 = uVar42;
  }
  if (-1 < (int)uVar35) {
    iVar34 = (int)local_4a8;
    if (0x7d < (int)uVar42) {
      iVar34 = 2;
    }
    lVar23 = (ulonglong)uVar35 + 1;
    do {
      if (iVar34 == 2) {
        uVar43 = uVar43 | 0x100000;
        break;
      }
      iVar34 = aiStack_458[lVar23 + -1];
      lVar50 = lVar23 + -1;
      bVar39 = 0 < lVar23;
      lVar23 = lVar50;
    } while (lVar50 != 0 && bVar39);
  }
  if ((*(byte *)(param_1 + 0x11) & 4) == 0) {
    *(int *)(param_1[0x1a] + -8 + (longlong)*(int *)(param_1 + 0x19) * 8) = iVar20;
    *(int *)(param_1 + 0x37) = (int)local_488;
  }
  else if (*(int *)((longlong)param_1 + 0x14) < iVar20) {
    *(int *)(param_1 + 0x19) = *(int *)(param_1 + 0x19) + -1;
  }
  if (((byte)local_460 & (char)local_4a0 == '\x01') == 1) {
    *(undefined4 *)(param_1[0x1a] + -4 + (longlong)*(int *)(param_1 + 0x19) * 8) = 1;
  }
  if (0xfd < (byte)local_468) {
    *(undefined1 *)((longlong)param_1 + 0x8d) = *(undefined1 *)(param_1[0x1a] + 4);
  }
  uVar42 = *(uint *)(param_1 + 0x19);
  if (0 < (int)uVar42) {
    lVar23 = param_1[0x1a];
    if (uVar42 < 4) {
      uVar45 = 0;
    }
    else {
      uVar45 = 0;
      do {
        uVar43 = uVar43 | *(uint *)(&DAT_149966f20 +
                                   (ulonglong)(*(uint *)(lVar23 + 4 + uVar45 * 8) & 1) * 4) |
                 *(uint *)(&DAT_149966f20 +
                          (ulonglong)(*(uint *)(lVar23 + 0xc + uVar45 * 8) & 1) * 4) |
                 *(uint *)(&DAT_149966f20 +
                          (ulonglong)(*(uint *)(lVar23 + 0x14 + uVar45 * 8) & 1) * 4) |
                 *(uint *)(&DAT_149966f20 +
                          (ulonglong)(*(uint *)(lVar23 + 0x1c + uVar45 * 8) & 1) * 4);
        uVar45 = uVar45 + 4;
      } while ((uVar42 & 0xfffffffc) != uVar45);
    }
    if ((ulonglong)(uVar42 & 3) != 0) {
      uVar29 = 0;
      do {
        uVar43 = uVar43 | *(uint *)(&DAT_149966f20 +
                                   (ulonglong)(*(uint *)(lVar23 + uVar45 * 8 + 4 + uVar29 * 8) & 1)
                                   * 4);
        uVar29 = uVar29 + 1;
      } while ((uVar42 & 3) != uVar29);
    }
  }
  *(uint *)((longlong)param_1 + 0xbc) =
       ((char)uVar43 < '\0' && *(char *)((longlong)param_1 + 0x8c) != '\0') | uVar43;
  *(undefined4 *)(param_1 + 0x18) = local_478._0_4_;
  plVar26 = (longlong *)param_1[0xe];
  local_498 = (ulonglong)*(uint *)((longlong)param_1 + 0x14);
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0x14);
  if (param_5 == 0) {
    cVar17 = FUN_1424db510(param_1 + 8,param_1 + 4);
    if (cVar17 != '\0') {
      param_1[0xf] = param_1[8];
      iVar20 = FUN_1424dcc60(param_1,param_6);
      goto LAB_1424dbd83;
    }
LAB_1424dc37d:
    *param_6 = 7;
    goto LAB_1424dcc14;
  }
  param_1[0xf] = param_5;
  iVar20 = FUN_1424dd750(param_1,param_6);
LAB_1424dbd83:
  if (0 < *param_6) goto LAB_1424dcc14;
  if (*(int *)((longlong)param_1 + 0x144) < 6) {
    puVar28 = param_1 + 0x2a;
  }
  else {
    if ((*(int *)(param_1 + 6) < *(int *)((longlong)param_1 + 0x144) << 4) &&
       (cVar17 = FUN_1424db510(param_1 + 0xc,param_1 + 6), cVar17 == '\0')) goto LAB_1424dc37d;
    puVar28 = (undefined8 *)param_1[0xc];
  }
  param_1[0x29] = puVar28;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(int *)(param_1 + 0x17) = iVar20;
  if ((iVar20 == 1) || (iVar20 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    goto LAB_1424dc2a2;
  }
  switch(*(undefined4 *)((longlong)param_1 + 0x84)) {
  case 0:
    ppuVar30 = &PTR_DAT_149966f28;
    break;
  case 1:
    ppuVar30 = &PTR_DAT_149966f48;
    break;
  case 2:
    ppuVar30 = &PTR_DAT_149966f68;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  case 4:
    ppuVar30 = &PTR_DAT_149966f88;
    break;
  case 5:
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      ppuVar30 = &PTR_DAT_149966fc8;
    }
    else {
      ppuVar30 = &PTR_DAT_149966fa8;
    }
    goto LAB_1424dc77b;
  case 6:
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      ppuVar30 = &PTR_DAT_149967008;
    }
    else {
      ppuVar30 = &PTR_DAT_149966fe8;
    }
LAB_1424dc77b:
    param_1[0x16] = ppuVar30;
    goto LAB_1424dc782;
  }
  param_1[0x16] = ppuVar30;
LAB_1424dc782:
  iVar20 = (int)local_498;
  local_480 = plVar26;
  if (((param_5 == 0) && (uVar43 = *(uint *)(param_1 + 0x19), (int)uVar43 < 2)) &&
     (-1 < *(int *)((longlong)param_1 + 0xbc))) {
    if (*(char *)((longlong)param_1 + 0x8e) == '\0') {
      bVar18 = *(byte *)((longlong)param_1 + 0x8d) & 1;
      bVar31 = *(byte *)((longlong)param_1 + 0x8d);
    }
    else {
      if (*(int *)param_1[0x1a] < iVar20) {
        iVar20 = 0;
        if ((int)uVar43 < 1) {
          iVar20 = uVar43 - 1;
        }
        bVar18 = *(byte *)((int *)param_1[0x1a] + (longlong)iVar20 * 2 + 1);
      }
      else {
        bVar18 = *(byte *)((longlong)param_1 + 0x8d);
      }
      bVar18 = bVar18 & 1;
      piVar49 = (int *)param_1[0x1a];
      if (*piVar49 < 1) {
        if ((int)uVar43 < 1) {
          uVar42 = uVar43 - 1;
        }
        else {
          uVar45 = 1;
          do {
            uVar29 = uVar45;
            uVar35 = uVar43;
            if (uVar43 == uVar29) goto LAB_1424dcbd2;
            uVar45 = uVar29 + 1;
          } while (piVar49[uVar29 * 2] < 1);
          uVar35 = (int)(uVar29 + 1) - 1;
LAB_1424dcbd2:
          uVar42 = uVar43 - 1;
          if (uVar29 < uVar43) {
            uVar42 = uVar35;
          }
        }
        bVar31 = *(byte *)(piVar49 + (longlong)(int)uVar42 * 2 + 1);
      }
      else {
        bVar31 = *(byte *)((longlong)param_1 + 0x8d);
      }
    }
    local_4b8 = (int *)CONCAT71(local_4b8._1_7_,bVar18);
    FUN_1424dd950(param_1,0,local_498 & 0xffffffff,bVar31 & 1);
  }
  else {
    local_488 = (byte *)param_1[0xf];
    if ((*(char *)((longlong)param_1 + 0x8e) == '\0') ||
       (piVar49 = (int *)param_1[0x1a], 0 < *piVar49)) {
      bVar18 = *(byte *)((longlong)param_1 + 0x8d);
    }
    else {
      uVar43 = *(uint *)(param_1 + 0x19);
      if ((int)uVar43 < 1) {
        uVar42 = uVar43 - 1;
      }
      else {
        uVar45 = 1;
        do {
          uVar29 = uVar45;
          uVar35 = uVar43;
          if (uVar43 == uVar29) goto LAB_1424dc82a;
          uVar45 = uVar29 + 1;
        } while (piVar49[uVar29 * 2] < 1);
        uVar35 = (int)(uVar29 + 1) - 1;
LAB_1424dc82a:
        uVar42 = uVar43 - 1;
        if (uVar29 < uVar43) {
          uVar42 = uVar35;
        }
      }
      bVar18 = *(byte *)(piVar49 + (longlong)(int)uVar42 * 2 + 1);
    }
    bVar31 = *local_488;
    bVar51 = bVar31;
    if (bVar31 < bVar18) {
      bVar51 = bVar18;
    }
    local_4a0 = (undefined8 *)CONCAT44(local_4a0._4_4_,iVar20 + -1);
    local_4a8 = (ulonglong)(1 - iVar20);
    local_478 = local_488 + 0x10;
    uVar45 = 0;
    uVar29 = local_498;
    do {
      bVar18 = bVar51 & 1;
      iVar34 = (int)uVar45;
      uVar33 = uVar45 & 0xffffffff;
      if ((0 < iVar34) && (*(char *)((longlong)local_480 + (ulonglong)(iVar34 - 1)) == '\a')) {
        if ((*(char *)((longlong)param_1 + 0x8e) == '\0') ||
           (piVar49 = (int *)param_1[0x1a], iVar34 < *piVar49)) {
          bVar18 = *(byte *)((longlong)param_1 + 0x8d);
        }
        else {
          uVar43 = *(uint *)(param_1 + 0x19);
          if ((int)uVar43 < 1) {
            uVar42 = uVar43 - 1;
          }
          else {
            uVar45 = 1;
            do {
              uVar38 = uVar45;
              uVar35 = uVar43;
              if (uVar43 == uVar38) goto LAB_1424dc91c;
              uVar45 = uVar38 + 1;
            } while (piVar49[uVar38 * 2] <= iVar34);
            uVar35 = (int)(uVar38 + 1) - 1;
LAB_1424dc91c:
            uVar42 = uVar43 - 1;
            if (uVar38 < uVar43) {
              uVar42 = uVar35;
            }
          }
          bVar18 = *(byte *)(piVar49 + (longlong)(int)uVar42 * 2 + 1);
        }
        bVar18 = bVar18 & 1;
      }
      lVar23 = (longlong)iVar34;
      uVar45 = lVar23 + 1;
      iVar40 = iVar34;
      if ((int)uVar45 < (int)uVar29) {
        bVar39 = true;
        lVar50 = 0;
        do {
          bVar53 = local_488[lVar50 + uVar45];
          if ((bVar53 != bVar31) &&
             ((0x5d800U >> (*(byte *)((longlong)local_480 + lVar50 + uVar45) & 0x1f) & 1) == 0)) {
            iVar40 = iVar34 + (int)lVar50;
            uVar45 = (ulonglong)(iVar34 + (int)lVar50 + 1);
            uVar29 = local_498;
            goto LAB_1424dca62;
          }
          bVar39 = (longlong)(lVar50 + uVar45 + 1) < (longlong)iVar20;
          lVar50 = lVar50 + 1;
        } while ((int)lVar50 + iVar34 + (int)local_4a8 != 0);
        uVar45 = local_498 & 0xffffffff;
        uVar29 = local_498;
        iVar40 = (int)local_4a0;
        if (*(char *)((longlong)param_1 + 0x8e) == '\0') goto LAB_1424dca26;
LAB_1424dc9f1:
        piVar49 = (int *)param_1[0x1a];
        if ((int)uVar29 <= *piVar49) goto LAB_1424dca26;
        uVar43 = *(uint *)(param_1 + 0x19);
        if ((int)uVar43 < 1) {
          uVar42 = uVar43 - 1;
        }
        else {
          uVar38 = 1;
          do {
            uVar47 = uVar38;
            uVar35 = uVar43;
            if (uVar43 == uVar47) goto LAB_1424dca38;
            uVar38 = uVar47 + 1;
          } while (piVar49[uVar47 * 2] < (int)uVar29);
          uVar35 = (int)(uVar47 + 1) - 1;
LAB_1424dca38:
          uVar29 = local_498;
          uVar42 = uVar43 - 1;
          if (uVar47 < uVar43) {
            uVar42 = uVar35;
          }
        }
        bVar53 = *(byte *)(piVar49 + (longlong)(int)uVar42 * 2 + 1);
      }
      else {
        bVar39 = false;
        if (*(char *)((longlong)param_1 + 0x8e) != '\0') goto LAB_1424dc9f1;
LAB_1424dca26:
        bVar53 = *(byte *)((longlong)param_1 + 0x8d);
      }
LAB_1424dca62:
      bVar51 = bVar31;
      if ((bVar31 & 0x7f) < (bVar53 & 0x7f)) {
        bVar51 = bVar53;
      }
      if ((char)bVar31 < '\0') {
        if (iVar40 <= iVar34) {
          iVar40 = iVar34;
        }
        uVar43 = iVar40 - iVar34;
        if (6 < uVar43) {
          uVar33 = (ulonglong)uVar43 + 1;
          if (uVar43 < 0x1f) {
            uVar38 = 0;
          }
          else {
            uVar38 = uVar33 & 0x1ffffffe0;
            uVar47 = 0;
            do {
              puVar2 = (uint *)(local_478 + uVar47 + lVar23 + -0x10);
              uVar43 = puVar2[1];
              uVar42 = puVar2[2];
              uVar35 = puVar2[3];
              puVar1 = (uint *)(local_478 + uVar47 + lVar23);
              uVar21 = *puVar1;
              uVar46 = puVar1[1];
              uVar9 = puVar1[2];
              uVar10 = puVar1[3];
              puVar1 = (uint *)(local_478 + uVar47 + lVar23 + -0x10);
              *puVar1 = *puVar2 & 0x7f7f7f7f;
              puVar1[1] = uVar43 & 0x7f7f7f7f;
              puVar1[2] = uVar42 & 0x7f7f7f7f;
              puVar1[3] = uVar35 & 0x7f7f7f7f;
              puVar1 = (uint *)(local_478 + uVar47 + lVar23);
              *puVar1 = uVar21 & 0x7f7f7f7f;
              puVar1[1] = uVar46 & 0x7f7f7f7f;
              puVar1[2] = uVar9 & 0x7f7f7f7f;
              puVar1[3] = uVar10 & 0x7f7f7f7f;
              uVar47 = uVar47 + 0x20;
            } while (uVar38 != uVar47);
            if (uVar33 == uVar38) goto LAB_1424dc8a1;
            if ((uVar33 & 0x18) == 0) {
              lVar23 = uVar38 + lVar23;
              goto LAB_1424dcb3e;
            }
          }
          uVar47 = uVar33 & 0x1fffffff8;
          do {
            *(ulonglong *)(local_488 + uVar38 + lVar23) =
                 *(ulonglong *)(local_488 + uVar38 + lVar23) & 0x7f7f7f7f7f7f7f7f;
            uVar38 = uVar38 + 8;
          } while (uVar47 != uVar38);
          lVar23 = uVar47 + lVar23;
          if (uVar33 == uVar47) goto LAB_1424dc8a1;
        }
LAB_1424dcb3e:
        lVar50 = 0;
        do {
          local_488[lVar50 + lVar23] = local_488[lVar50 + lVar23] & 0x7f;
          lVar50 = lVar50 + 1;
        } while ((iVar40 - (int)lVar23) + 1 != (int)lVar50);
      }
      else {
        local_4b8 = (int *)(CONCAT71(local_4b8._1_7_,bVar51) & 0xffffffffffffff01);
        FUN_1424dd950(param_1,uVar33,uVar45 & 0xffffffff,bVar18);
      }
LAB_1424dc8a1:
      bVar31 = bVar53;
    } while (bVar39);
  }
  if (*(int *)((longlong)param_1 + 0x1ac) < 1) {
    FUN_1424de090(param_1);
    plVar26 = local_480;
LAB_1424dc2a2:
    uVar43 = *(uint *)(param_1 + 0x11);
    if ((((*(char *)((longlong)param_1 + 0x8e) != '\0') && ((uVar43 & 1) != 0)) &&
        (*(int *)((longlong)param_1 + 0x84) - 5U < 2)) &&
       (iVar20 = *(int *)(param_1 + 0x19), 0 < iVar20)) {
      lVar23 = 0;
      do {
        lVar50 = param_1[0x1a];
        if (*(char *)(lVar50 + 4 + lVar23 * 8) != '\0') {
          if (lVar23 == 0) {
            iVar34 = 0;
          }
          else {
            iVar34 = *(int *)(lVar50 + -8 + lVar23 * 8);
          }
          iVar40 = *(int *)(lVar50 + lVar23 * 8);
          if (iVar34 < iVar40) {
            iVar44 = iVar40 + -1;
            lVar50 = (longlong)iVar40;
LAB_1424dc344:
            lVar50 = lVar50 + -1;
            if (*(byte *)((longlong)plVar26 + lVar50) != 0) goto code_r0x0001424dc34e;
            if ((int)lVar50 < iVar44) {
              pcVar32 = (char *)((longlong)plVar26 + (longlong)iVar40 + -1);
              iVar44 = iVar40;
              do {
                iVar44 = iVar44 + -1;
                cVar17 = *pcVar32;
                pcVar32 = pcVar32 + -1;
              } while (cVar17 == '\a');
            }
            FUN_1424de280(param_1,iVar44,4);
            iVar20 = *(int *)(param_1 + 0x19);
          }
        }
LAB_1424dc302:
        lVar23 = lVar23 + 1;
      } while (lVar23 < iVar20);
      uVar43 = *(uint *)(param_1 + 0x11);
    }
    if ((uVar43 & 2) == 0) {
      iVar20 = *(int *)(param_1 + 3) + *(int *)((longlong)param_1 + 0x1a4);
    }
    else {
      iVar20 = *(int *)(param_1 + 3) - *(int *)(param_1 + 0x37);
    }
    *(int *)(param_1 + 3) = iVar20;
LAB_1424db917:
    *(undefined4 *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    *param_1 = param_1;
  }
  else {
    *param_6 = *(int *)((longlong)param_1 + 0x1ac);
  }
LAB_1424dcc14:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_4d8);
code_r0x0001424dc34e:
  if (((0x2002U >> (*(byte *)((longlong)plVar26 + lVar50) & 0x1f) & 1) != 0) || (lVar50 <= iVar34))
  goto LAB_1424dc302;
  goto LAB_1424dc344;
}



// FUNCTION 1424dcc60 FUN_1424dcc60 body=2764 status=ok
// SIG undefined FUN_1424dcc60(void)

void FUN_1424dcc60(longlong param_1,int *param_2)

{
  ushort *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int *piVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  byte bVar9;
  undefined4 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  void *pvVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  int *piVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  byte bVar30;
  undefined1 auStack_b98 [44];
  uint local_b6c;
  undefined8 local_b68;
  longlong local_b60;
  int *local_b58;
  void *local_b50;
  longlong local_b48;
  ulonglong local_b40;
  ushort local_b38 [128];
  longlong local_a38 [62];
  undefined8 local_844;
  undefined4 uStack_83c;
  byte local_838 [4];
  uint local_834 [2];
  uint uStack_82c;
  byte abStack_827 [2015];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b98;
  if ((*(char *)(param_1 + 0x8e) == '\0') || (piVar26 = *(int **)(param_1 + 0xd0), 0 < *piVar26)) {
    bVar9 = *(byte *)(param_1 + 0x8d);
  }
  else {
    uVar19 = *(uint *)(param_1 + 200);
    if ((int)uVar19 < 1) {
      uVar18 = uVar19 - 1;
    }
    else {
      uVar28 = 1;
      do {
        uVar12 = uVar28;
        uVar24 = uVar19;
        if (uVar19 == uVar12) goto LAB_1424dccdd;
        uVar28 = uVar12 + 1;
      } while (piVar26[uVar12 * 2] < 1);
      uVar24 = (int)(uVar12 + 1) - 1;
LAB_1424dccdd:
      uVar18 = uVar19 - 1;
      if (uVar12 < uVar19) {
        uVar18 = uVar24;
      }
    }
    bVar9 = *(byte *)(piVar26 + (longlong)(int)uVar18 * 2 + 1);
  }
  uVar24 = (uint)bVar9;
  uVar19 = *(uint *)(param_1 + 0x14);
  lVar22 = *(longlong *)(param_1 + 8);
  pvVar15 = *(void **)(param_1 + 0x78);
  uVar18 = *(uint *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x144) = 0;
  if ((*param_2 < 1) &&
     ((((uVar18 & 0x20e002) != 0 || (((uVar18 & 0x20) != 0 && ((uVar18 & 0x7ddfd8) != 0)))) &&
      ((uVar18 & 0x1901825) != 0)))) {
    local_b50 = pvVar15;
    if (*(int *)(param_1 + 0x84) < 2) {
      local_b60 = *(longlong *)(param_1 + 0x70);
      if ((uVar18 & 0x79d800) == 0) {
        FUN_1424de360(param_1,local_a38);
        iVar21 = *(int *)(param_1 + 200);
        if (0 < iVar21) {
          lVar25 = 0;
          pvVar15 = local_b50;
          lVar13 = local_b60;
          local_b58 = param_2;
          local_b48 = lVar22;
          do {
            lVar22 = *(longlong *)(param_1 + 0xd0);
            iVar20 = 0;
            if (lVar25 != 0) {
              iVar20 = *(int *)(lVar22 + -8 + lVar25 * 8);
            }
            iVar27 = *(int *)(lVar22 + lVar25 * 8);
            if (iVar20 < iVar27) {
              uVar4 = *(undefined4 *)(lVar22 + 4 + lVar25 * 8);
              bVar9 = (byte)uVar4;
              local_b6c = CONCAT31(local_b6c._1_3_,bVar9) & 0xffffff01;
              local_b68 = CONCAT44(local_b68._4_4_,uVar4) & 0xffffffff00000001;
              lVar22 = (longlong)iVar20;
              do {
                lVar29 = lVar22 + 1;
                *(byte *)((longlong)pvVar15 + lVar22) = bVar9;
                cVar6 = *(char *)(lVar13 + -1 + lVar29);
                if (cVar6 != '\x12') {
                  if (cVar6 == '\a') {
                    if ((lVar29 < (int)uVar19) &&
                       ((*(short *)(local_b48 + -2 + lVar29 * 2) != 0xd ||
                        (*(short *)(local_b48 + lVar29 * 2) != 10)))) {
                      local_844 = 0;
                      uStack_83c._2_2_ = 0;
                      local_838[1] = (byte)local_b6c;
                      local_834[0] = (uint)local_b68;
                      local_838[0] = bVar9;
                      local_838[2] = local_838[1];
                    }
                  }
                  else {
                    cVar6 = FUN_1424de4e0(local_a38,iVar20);
                    pvVar15 = local_b50;
                    lVar13 = local_b60;
                    if (cVar6 == '\0') {
                      *local_b58 = 7;
                      goto LAB_1424dcd1e;
                    }
                  }
                }
                iVar20 = iVar20 + 1;
                lVar22 = lVar29;
              } while (lVar29 != iVar27);
              iVar21 = *(int *)(param_1 + 200);
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 < iVar21);
        }
      }
      else {
        piVar26 = (int *)(ulonglong)uVar19;
        FUN_1424de360(param_1,local_a38);
        local_b38[0] = (ushort)bVar9;
        if ((int)uVar19 < 1) {
          uVar19 = 0;
        }
        else {
          local_b40 = (ulonglong)uVar19;
          piVar17 = (int *)0x0;
          local_b68 = 0;
          iVar21 = 0;
          iVar20 = 0;
          uVar28 = 0;
          local_b6c = 0;
          lVar13 = local_b60;
          pvVar15 = local_b50;
          uVar18 = 0;
          local_b58 = piVar26;
          local_b48 = lVar22;
          uVar23 = uVar24;
          do {
            bVar9 = *(byte *)(lVar13 + (longlong)piVar17);
            bVar30 = (byte)uVar23;
            uVar16 = (uint)piVar17;
            bVar11 = (byte)uVar24;
            iVar27 = (int)uVar28;
            uVar8 = uVar23;
            switch(bVar9) {
            case 7:
              if ((*(char *)(param_1 + 0x8e) == '\0') ||
                 (piVar5 = *(int **)(param_1 + 0xd0), (longlong)piVar17 < (longlong)*piVar5)) {
                uVar7 = *(undefined1 *)(param_1 + 0x8d);
              }
              else {
                uVar19 = *(uint *)(param_1 + 200);
                if ((int)uVar19 < 1) {
                  uVar23 = uVar19 - 1;
                }
                else {
                  uVar12 = 1;
                  do {
                    uVar14 = uVar12;
                    uVar16 = uVar19;
                    if (uVar19 == uVar14) goto LAB_1424dd439;
                    uVar12 = uVar14 + 1;
                  } while ((longlong)piVar5[uVar14 * 2] <= (longlong)piVar17);
                  uVar16 = (int)(uVar14 + 1) - 1;
LAB_1424dd439:
                  lVar13 = local_b60;
                  piVar26 = local_b58;
                  uVar23 = uVar19 - 1;
                  if (uVar14 < uVar19) {
                    uVar23 = uVar16;
                  }
                }
                uVar7 = (undefined1)piVar5[(longlong)(int)uVar23 * 2 + 1];
              }
              uVar19 = uVar18 | 0x80;
              *(undefined1 *)((longlong)pvVar15 + (longlong)piVar17) = uVar7;
              uVar12 = (longlong)piVar17 + 1;
              if ((uVar12 < local_b40) &&
                 ((*(short *)(local_b48 + (longlong)piVar17 * 2) != 0xd ||
                  (*(short *)(local_b48 + 2 + (longlong)piVar17 * 2) != 10)))) {
                if ((*(char *)(param_1 + 0x8e) == '\0') ||
                   (piVar5 = *(int **)(param_1 + 0xd0), (longlong)uVar12 < (longlong)*piVar5)) {
                  local_838[0] = *(byte *)(param_1 + 0x8d);
                }
                else {
                  uVar18 = *(uint *)(param_1 + 200);
                  if ((int)uVar18 < 1) {
                    uVar24 = uVar18 - 1;
                  }
                  else {
                    uVar28 = 1;
                    do {
                      uVar14 = uVar28;
                      uVar23 = uVar18;
                      if (uVar18 == uVar14) goto LAB_1424dd507;
                      uVar28 = uVar14 + 1;
                    } while ((longlong)piVar5[uVar14 * 2] <= (longlong)uVar12);
                    uVar23 = (int)(uVar14 + 1) - 1;
LAB_1424dd507:
                    lVar13 = local_b60;
                    uVar24 = uVar18 - 1;
                    if (uVar14 < uVar18) {
                      uVar24 = uVar23;
                    }
                  }
                  local_838[0] = *(byte *)(piVar5 + (longlong)(int)uVar24 * 2 + 1);
                }
                local_b38[0] = (ushort)local_838[0];
                local_844 = 0;
                uStack_83c._2_2_ = 0;
                local_838[2] = local_838[0] & 1;
                local_838[1] = local_838[2];
                local_834[0] = (uint)local_838[2];
                uVar28 = 0;
                iVar20 = 0;
                iVar21 = 0;
                local_b68 = 0;
                uVar8 = (uint)local_838[0];
                uVar24 = (uint)local_838[0];
              }
              break;
            default:
              if ((uVar23 & 0x7f) != (uint)(bVar11 & 0x7f)) {
                if ((0x780000U >>
                     (*(byte *)(*(longlong *)(local_a38[0] + 0x70) + (longlong)(int)local_b6c) &
                     0x1f) & 1) == 0) {
                  lVar22 = (longlong)(int)local_844;
                  lVar13 = lVar22 * 0x10;
                  if ((bVar11 & 0x7f) < (bVar30 & 0x7f)) {
                    uVar24 = uVar23;
                  }
                  *(undefined2 *)(local_838 + lVar13 + -2) =
                       *(undefined2 *)(&uStack_83c + lVar22 * 4);
                  local_838[lVar13] = bVar30;
                  bVar9 = (byte)uVar24 & 1;
                  local_838[lVar13 + 2] = bVar9;
                  local_838[lVar13 + 1] = bVar9;
                  local_834[lVar22 * 4] = uVar24 & 1;
                  (&uStack_83c)[lVar22 * 4 + -1] = local_b6c;
                }
                puVar10 = &DAT_149967028;
                if (-1 < (char)bVar30) {
                  puVar10 = (undefined4 *)&DAT_149967030;
                }
                uVar18 = uVar18 | puVar10[uVar23 & 1] | 0x80000000;
              }
              *(byte *)((longlong)pvVar15 + (longlong)piVar17) = bVar30;
              cVar6 = FUN_1424de4e0(local_a38,(ulonglong)piVar17 & 0xffffffff);
              if (cVar6 == '\0') goto LAB_1424dcd1e;
              uVar19 = uVar18 | 1 << (*(byte *)(local_b60 + (longlong)piVar17) & 0x1f);
              lVar13 = local_b60;
              pvVar15 = local_b50;
              piVar26 = local_b58;
              uVar24 = uVar23;
              break;
            case 0xb:
            case 0xc:
            case 0xe:
            case 0xf:
              *(byte *)((longlong)pvVar15 + (longlong)piVar17) = bVar11;
              if ((byte)(bVar9 - 0xb) < 2) {
                uVar8 = uVar23 + 2 & 0xffffff7e;
              }
              else {
                uVar8 = (byte)((bVar30 & 0x7f) + 1) | 1;
              }
              uVar19 = uVar18 | 0x40000;
              if ((((byte)uVar8 < 0x7e) && (iVar20 == 0)) && (iVar21 == 0)) {
                if ((bVar9 == 0xf) || (bVar9 == 0xc)) {
                  uVar8 = uVar8 | 0x80;
                }
                uVar28 = (ulonglong)(iVar27 + 1);
                local_b38[uVar28] = (ushort)uVar8 & 0xff;
LAB_1424dcf57:
                uVar19 = uVar18 | 0x40000;
                iVar20 = 0;
                iVar21 = 0;
                local_b6c = uVar16;
              }
              else {
                iVar21 = iVar21 + (uint)(iVar20 == 0);
                uVar8 = uVar23;
              }
              break;
            case 0x10:
              uVar19 = uVar18 | 0x40000;
              *(byte *)((longlong)pvVar15 + (longlong)piVar17) = bVar11;
              if (iVar20 == 0) {
                if (iVar21 == 0) {
                  iVar20 = 0;
                  if (iVar27 == 0) {
                    uVar28 = 0;
                    iVar21 = 0;
                  }
                  else {
                    if (local_b38[uVar28] < 0x100) {
                      uVar28 = (ulonglong)(iVar27 - 1);
                      uVar8 = (uint)(byte)local_b38[uVar28];
                      goto LAB_1424dcf57;
                    }
                    iVar21 = 0;
                  }
                }
                else {
                  iVar21 = iVar21 + -1;
                  iVar20 = 0;
                }
              }
              break;
            case 0x12:
              *(byte *)((longlong)pvVar15 + (longlong)piVar17) = bVar11;
              uVar19 = uVar18 | 0x40000;
              break;
            case 0x14:
            case 0x15:
              uVar19 = *(uint *)(&DAT_149966f20 + (ulonglong)(uVar23 & 1) * 4);
              cVar6 = (char)(uVar23 & 0x7f);
              *(char *)((longlong)pvVar15 + (longlong)piVar17) = cVar6;
              if ((uVar23 & 0x7f) == (uint)(bVar11 & 0x7f)) {
                uVar19 = uVar18 | uVar19 | 0x400;
              }
              else {
                if ((0x780000U >>
                     (*(byte *)(*(longlong *)(local_a38[0] + 0x70) + (longlong)(int)local_b6c) &
                     0x1f) & 1) == 0) {
                  lVar22 = (longlong)(int)local_844;
                  lVar13 = lVar22 * 0x10;
                  if ((bVar11 & 0x7f) < (bVar30 & 0x7f)) {
                    uVar24 = uVar23;
                  }
                  *(undefined2 *)(local_838 + lVar13 + -2) =
                       *(undefined2 *)(&uStack_83c + lVar22 * 4);
                  local_838[lVar13] = bVar30;
                  bVar11 = (byte)uVar24 & 1;
                  local_838[lVar13 + 2] = bVar11;
                  local_838[lVar13 + 1] = bVar11;
                  local_834[lVar22 * 4] = uVar24 & 1;
                  (&uStack_83c)[lVar22 * 4 + -1] = local_b6c;
                }
                uVar19 = uVar18 | uVar19 | 0x80000400;
              }
              bVar11 = cVar6 + 1U | 1;
              if (bVar9 == 0x14) {
                bVar11 = bVar30 + 2 & 0x7e;
              }
              if (((bVar11 < 0x7e) && (iVar20 == 0)) && (iVar21 == 0)) {
                if (*(int *)(param_1 + 0x144) <= (int)(uint)local_b68) {
                  *(uint *)(param_1 + 0x144) = (uint)local_b68 + 1;
                }
                uVar19 = uVar19 | 1 << (bVar9 & 0x1f);
                uVar28 = (ulonglong)(iVar27 + 1);
                local_b38[uVar28] = bVar11 | 0x100;
                lVar22 = (longlong)(int)local_844;
                lVar13 = lVar22 * 0x10;
                local_838[lVar13 + 2] = 10;
                uVar2 = *(undefined2 *)(local_838 + lVar13 + -2);
                local_844 = CONCAT44(local_844._4_4_,(int)local_844 + 1);
                *(undefined2 *)((longlong)&uStack_82c + (lVar22 * 8 + 1) * 2) = uVar2;
                *(undefined2 *)(&uStack_82c + lVar22 * 4) = uVar2;
                *(byte *)(&uStack_82c + lVar22 * 4 + 1) = bVar11;
                bVar9 = bVar11 & 1;
                *(byte *)((longlong)&uStack_82c + (lVar22 * 8 + 3) * 2) = bVar9;
                abStack_827[lVar13] = bVar9;
                (&uStack_82c)[lVar22 * 4 + 2] = (uint)bVar9;
                local_834[lVar22 * 4 + 1] = 0;
                iVar20 = 0;
                iVar21 = 0;
                local_b68 = (ulonglong)((uint)local_b68 + 1);
                lVar13 = local_b60;
                piVar26 = local_b58;
                uVar8 = (uint)bVar11;
                local_b6c = uVar16;
                uVar24 = uVar23;
              }
              else {
                *(undefined1 *)(local_b60 + (longlong)piVar17) = 9;
                iVar20 = iVar20 + 1;
                lVar13 = local_b60;
                piVar26 = local_b58;
                uVar24 = uVar23;
              }
              break;
            case 0x16:
              if (((bVar11 ^ bVar30) & 0x7f) != 0) {
                if ((0x780000U >>
                     (*(byte *)(*(longlong *)(local_a38[0] + 0x70) + (longlong)(int)local_b6c) &
                     0x1f) & 1) == 0) {
                  lVar22 = (longlong)(int)local_844;
                  lVar25 = lVar22 * 0x10;
                  if ((bVar11 & 0x7f) < (bVar30 & 0x7f)) {
                    uVar24 = uVar23;
                  }
                  *(undefined2 *)(local_838 + lVar25 + -2) =
                       *(undefined2 *)(&uStack_83c + lVar22 * 4);
                  local_838[lVar25] = bVar30;
                  bVar9 = (byte)uVar24 & 1;
                  local_838[lVar25 + 2] = bVar9;
                  local_838[lVar25 + 1] = bVar9;
                  local_834[lVar22 * 4] = uVar24 & 1;
                  (&uStack_83c)[lVar22 * 4 + -1] = local_b6c;
                }
                uVar18 = uVar18 | 0x80000000;
              }
              if (iVar20 == 0) {
                if ((uint)local_b68 == 0) {
                  *(undefined1 *)(lVar13 + (longlong)piVar17) = 9;
                  iVar20 = 0;
                  local_b68 = 0;
                }
                else {
                  do {
                    puVar1 = local_b38 + uVar28;
                    uVar28 = (ulonglong)((int)uVar28 - 1);
                  } while (*puVar1 < 0x100);
                  uVar18 = uVar18 | 0x400000;
                  local_b68 = (ulonglong)((uint)local_b68 - 1);
                  lVar22 = (longlong)(int)local_844;
                  local_844 = CONCAT44(local_844._4_4_,(int)(lVar22 + -1));
                  local_838[(lVar22 + -1) * 0x10 + 2] = 10;
                  iVar20 = 0;
                  iVar21 = 0;
                  local_b6c = uVar16;
                }
              }
              else {
                iVar20 = iVar20 + -1;
                *(undefined1 *)(lVar13 + (longlong)piVar17) = 9;
              }
              uVar3 = local_b38[uVar28];
              uVar19 = uVar18 | *(uint *)(&DAT_149966f20 + (ulonglong)(uVar3 & 1) * 4) | 0x400;
              *(byte *)((longlong)pvVar15 + (longlong)piVar17) = (byte)uVar3 & 0x7f;
              uVar8 = (uint)uVar3;
              uVar24 = (uint)uVar3;
            }
            piVar17 = (int *)((longlong)piVar17 + 1);
            uVar18 = uVar19;
            uVar23 = uVar8;
          } while (piVar17 != piVar26);
          if ((uVar19 & 0x7fdfd8) != 0) {
            uVar19 = uVar19 | *(uint *)(&DAT_149966f20 +
                                       (ulonglong)(*(byte *)(param_1 + 0x8d) & 1) * 4);
          }
        }
        *(uint *)(param_1 + 0xbc) =
             ((char)uVar19 < '\0' && *(char *)(param_1 + 0x8c) != '\0') | uVar19;
      }
    }
    else {
      iVar21 = *(int *)(param_1 + 200);
      if (0 < iVar21) {
        uVar19 = **(uint **)(param_1 + 0xd0);
        if (0 < (int)uVar19) {
          memset(pvVar15,(uint)(byte)(*(uint **)(param_1 + 0xd0))[1],(ulonglong)uVar19);
          iVar21 = *(int *)(param_1 + 200);
        }
        if (1 < iVar21) {
          lVar22 = 1;
          pvVar15 = local_b50;
          do {
            lVar13 = *(longlong *)(param_1 + 0xd0);
            uVar19 = *(uint *)(lVar13 + -8 + lVar22 * 8);
            iVar20 = *(int *)(lVar13 + lVar22 * 8);
            if ((int)uVar19 < iVar20) {
              memset((void *)((longlong)(int)uVar19 + (longlong)pvVar15),
                     (uint)*(byte *)(lVar13 + 4 + lVar22 * 8),(ulonglong)(iVar20 + ~uVar19) + 1);
              iVar21 = *(int *)(param_1 + 200);
              pvVar15 = local_b50;
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 < iVar21);
        }
      }
    }
  }
LAB_1424dcd1e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b98);
}



// FUNCTION 1424dd750 FUN_1424dd750 body=476 status=ok
// SIG undefined FUN_1424dd750(void)

int FUN_1424dd750(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  lVar5 = *(longlong *)(param_1 + 0x78);
  uVar3 = *(uint *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x144) = 0;
  if ((int)uVar3 < 1) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
LAB_1424dd935:
    iVar6 = 0;
  }
  else {
    uVar9 = (uint)*(byte *)(param_1 + 0x8d);
    uVar7 = **(uint **)(param_1 + 0xd0);
    uVar13 = 0;
    iVar6 = 0;
    iVar14 = 0;
    uVar12 = 0;
    do {
      bVar1 = *(byte *)(lVar5 + uVar13);
      bVar10 = *(byte *)(lVar4 + uVar13);
      uVar8 = (uint)bVar10;
      if ((bVar10 & 0xfe) == 0x14) {
        iVar11 = iVar6 + 1;
        if (iVar6 < *(int *)(param_1 + 0x144)) {
          cVar2 = *(char *)(param_1 + 0x8e);
          iVar6 = iVar11;
        }
        else {
          *(int *)(param_1 + 0x144) = iVar11;
          iVar6 = iVar11;
LAB_1424dd829:
          cVar2 = *(char *)(param_1 + 0x8e);
        }
      }
      else if (uVar8 == 7) {
        cVar2 = *(char *)(param_1 + 0x8e);
        iVar6 = 0;
      }
      else {
        if (uVar8 != 0x16) goto LAB_1424dd829;
        iVar6 = iVar6 + -1;
        cVar2 = *(char *)(param_1 + 0x8e);
      }
      if (((cVar2 != '\0') && (uVar13 == uVar7)) &&
         (iVar11 = iVar14 + 1, iVar11 < *(int *)(param_1 + 200))) {
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar11 * 8);
        uVar9 = *(uint *)(*(longlong *)(param_1 + 0xd0) + 4 + (longlong)iVar11 * 8);
        iVar14 = iVar11;
      }
      bVar10 = bVar1 & 0x80;
      uVar15 = bVar1 & 0x7f;
      if ((0x7d < (byte)uVar15) || ((int)uVar15 < (int)uVar9)) {
        if ((byte)uVar15 != 0) {
          *param_2 = 1;
          goto LAB_1424dd935;
        }
        if (uVar8 == 7) {
          uVar15 = 0;
        }
        else {
          *(byte *)(lVar5 + uVar13) = bVar10 | (byte)uVar9;
          uVar15 = uVar9;
        }
      }
      uVar16 = (ulonglong)((byte)uVar15 & 1);
      if (bVar10 == 0) {
        uVar8 = *(uint *)(&DAT_149967030 + uVar16 * 4) | 1 << (uVar8 & 0x1f);
      }
      else {
        uVar8 = (&DAT_149967028)[uVar16];
      }
      uVar12 = uVar12 | uVar8;
      uVar13 = uVar13 + 1;
    } while (uVar3 != uVar13);
    if ((uVar12 & 0x7fdfd8) != 0) {
      uVar12 = uVar12 | *(uint *)(&DAT_149966f20 + (ulonglong)(*(byte *)(param_1 + 0x8d) & 1) * 4);
    }
    *(uint *)(param_1 + 0xbc) = uVar12;
    if (((uVar12 & 0x20e002) != 0) ||
       ((iVar6 = 0, (uVar12 & 0x20) != 0 && ((uVar12 & 0x7ddfd8) != 0)))) {
      iVar6 = 2 - (uint)((uVar12 & 0x1901825) == 0);
    }
  }
  return iVar6;
}



// FUNCTION 1424dd950 FUN_1424dd950 body=1772 status=ok
// SIG undefined FUN_1424dd950(void)

void FUN_1424dd950(ulonglong param_1,uint param_2,ulonglong param_3,uint param_4,byte param_5)

{
  int iVar1;
  byte *pbVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined2 uVar17;
  uint uVar18;
  undefined1 uVar19;
  ulonglong uVar20;
  undefined7 uVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_a4;
  ulonglong local_a0;
  int local_94;
  ulonglong local_90;
  int local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  uint local_50;
  byte local_4c;
  ulonglong local_48;
  
  uVar20 = (ulonglong)param_2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((int)param_2 < *(int *)(param_1 + 0xc0)) {
    if ((*(char *)(param_1 + 0x8e) == '\0') ||
       (piVar5 = *(int **)(param_1 + 0xd0), (int)param_2 < *piVar5)) {
      bVar9 = *(byte *)(param_1 + 0x8d);
    }
    else {
      uVar15 = *(uint *)(param_1 + 200);
      if ((int)uVar15 < 1) {
        uVar6 = uVar15 - 1;
      }
      else {
        uVar26 = 1;
        do {
          uVar11 = uVar26;
          uVar18 = uVar15;
          if (uVar15 == uVar11) goto LAB_1424dd9ee;
          uVar26 = uVar11 + 1;
        } while (piVar5[uVar11 * 2] <= (int)param_2);
        uVar18 = (int)(uVar11 + 1) - 1;
LAB_1424dd9ee:
        uVar6 = uVar15 - 1;
        if (uVar11 < uVar15) {
          uVar6 = uVar18;
        }
      }
      bVar9 = *(byte *)(piVar5 + (longlong)(int)uVar6 * 2 + 1);
    }
    if ((bVar9 & 1) == 0) goto LAB_1424dd9a8;
    uVar15 = *(int *)(param_1 + 0x84) - 5;
    local_84 = CONCAT31((int3)(uVar15 >> 8),uVar15 < 2);
  }
  else {
LAB_1424dd9a8:
    local_84 = 0;
  }
  lVar7 = *(longlong *)(param_1 + 0x70);
  local_5c = 0xffffffffffffffff;
  uVar26 = (ulonglong)(int)param_2;
  local_4c = *(byte *)(*(longlong *)(param_1 + 0x78) + uVar26);
  local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + (ulonglong)(local_4c & 1) * 8);
  local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x10 + (ulonglong)(local_4c & 1) * 8);
  local_a0 = param_1;
  local_90 = param_3;
  local_50 = param_2;
  if ((param_2 == 0) &&
     (uVar11 = (ulonglong)*(uint *)(param_1 + 0x98), 0 < (int)*(uint *)(param_1 + 0x98))) {
    lVar12 = *(longlong *)(param_1 + 0x90);
    do {
      uVar15 = (uint)uVar11;
      if ((int)uVar15 < 1) break;
      uVar3 = *(ushort *)(lVar12 + (ulonglong)(uVar15 - 1) * 2);
      uVar6 = (uint)uVar3;
      if ((uVar6 & 0xfc00) == 0xdc00) {
        if (uVar15 < 2) {
          uVar11 = 0;
        }
        else {
          uVar11 = (ulonglong)(uVar15 - 2);
          uVar4 = *(ushort *)(lVar12 + uVar11 * 2);
          if ((uVar4 & 0xfc00) != 0xd800) goto LAB_1424de000;
          uVar6 = (uint)uVar3 + (uint)uVar4 * 0x400 + 0xfca02400;
        }
      }
      else {
LAB_1424de000:
        uVar11 = (ulonglong)(uVar15 - 1);
      }
      if ((*(code **)(local_a0 + 0x1c0) == (code *)0x0) ||
         (uVar15 = (**(code **)(local_a0 + 0x1c0))(*(undefined8 *)(local_a0 + 0x1c8),uVar6),
         uVar15 == 0x17)) {
        uVar15 = FUN_1425813e0(uVar6);
      }
      uVar6 = 10;
      if ((int)uVar15 < 0x17) {
        uVar6 = uVar15;
      }
      switch(uVar6 & 0xff) {
      case 0:
        goto switchD_1424de063_caseD_0;
      case 1:
      case 0xd:
        uVar6 = 1;
        goto switchD_1424de063_caseD_0;
      case 7:
        goto switchD_1424de063_caseD_7;
      }
    } while( true );
  }
switchD_1424de063_caseD_7:
  uVar6 = param_4;
switchD_1424de063_caseD_0:
  uVar11 = local_a0;
  if (*(char *)(lVar7 + uVar26) == '\x16') {
    uVar15 = *(uint *)(local_a0 + 0x144);
    if (-1 < (int)uVar15) {
      lVar12 = *(longlong *)(local_a0 + 0x148);
      lVar13 = (ulonglong)uVar15 * 0x10;
      local_60 = *(undefined4 *)(lVar12 + lVar13);
      uVar6 = *(uint *)(lVar12 + 4 + lVar13);
      local_54 = *(undefined4 *)(lVar12 + 8 + lVar13);
      uVar18 = (uint)*(ushort *)(lVar12 + 0xc + lVar13);
      *(uint *)(local_a0 + 0x144) = uVar15 - 1;
      uVar22 = (ulonglong)uVar6;
      goto LAB_1424ddafa;
    }
  }
  local_60 = 0xffffffff;
  uVar18 = 0;
  if (*(char *)(lVar7 + uVar26) == '\x11') {
    uVar18 = (uVar6 & 0xff) + 1;
  }
  local_54 = 0;
  local_b8 = param_2;
  FUN_1424ded10(local_a0,&local_70,uVar6 & 0xff,uVar20);
  uVar22 = uVar20;
LAB_1424ddafa:
  uVar17 = (undefined2)uVar18;
  iVar23 = (int)local_90;
  uVar14 = (ulonglong)iVar23;
  local_80 = param_2;
  if ((int)param_2 <= iVar23) {
    local_7c = iVar23 - 1U;
    if ((int)param_2 < (int)(iVar23 - 1U)) {
      local_7c = param_2;
    }
    iVar23 = iVar23 + 1;
    local_78 = uVar14 - 1;
    local_a4 = (uint)CONCAT71((int7)((ulonglong)local_78 >> 8),1);
    local_94 = -1;
    uVar25 = uVar26;
    uVar27 = uVar20;
    uVar16 = uVar26;
    local_88 = iVar23;
    do {
      uVar17 = (undefined2)uVar18;
      uVar16 = uVar16 + 1;
      uVar8 = local_90;
      lVar12 = local_78;
      if ((longlong)uVar25 < (longlong)uVar14) {
        bVar9 = *(byte *)(lVar7 + uVar25);
        uVar8 = (ulonglong)bVar9;
        if (bVar9 == 7) {
          *(undefined4 *)(local_a0 + 0x144) = 0xffffffff;
          uVar11 = local_a0;
        }
        if ((char)local_84 != '\0') {
          if (bVar9 == 0xd) {
            uVar8 = 1;
          }
          else if (bVar9 == 2) {
            uVar8 = uVar16;
            iVar24 = (int)uVar20;
            if ((longlong)local_94 <= (longlong)uVar25) {
              do {
                local_94 = iVar24;
                if ((longlong)uVar14 <= (longlong)uVar8) {
                  uVar8 = 2;
                  local_a4 = (uint)CONCAT71((int7)(uVar11 >> 8),1);
                  local_94 = (int)local_90;
                  goto LAB_1424dde80;
                }
                local_a4 = (uint)*(byte *)(lVar7 + uVar8);
                local_94 = local_94 + 1;
                uVar8 = uVar8 + 1;
                iVar24 = local_94;
              } while ((0xd < local_a4) ||
                      (uVar11 = 0x2003, (0x2003U >> (local_a4 & 0x1f) & 1) == 0));
            }
            uVar8 = (ulonglong)((uint)((char)local_a4 == '\r') * 3 + 2);
          }
        }
LAB_1424dde80:
        bVar9 = (&DAT_1499672a0)[uVar8];
      }
      else {
        do {
          uVar15 = local_7c;
          if (lVar12 <= (longlong)uVar26) break;
          pbVar2 = (byte *)(lVar7 + lVar12);
          uVar15 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar15;
          lVar12 = lVar12 + -1;
        } while ((0x5d800U >> (*pbVar2 & 0x1f) & 1) != 0);
        bVar9 = param_5;
        if ((*(byte *)(lVar7 + (int)uVar15) & 0xfe) == 0x14) break;
      }
      bVar9 = (&DAT_1499672c0)[(ulonglong)bVar9 + (ulonglong)uVar18 * 0x10];
      uVar11 = (ulonglong)(uint)(bVar9 >> 5);
      if (bVar9 < 0x20) {
        uVar11 = 1;
      }
      if (uVar25 != uVar14) {
        uVar11 = (ulonglong)(uint)(bVar9 >> 5);
      }
      uVar15 = (uint)uVar27;
      if ((short)uVar11 == 0) goto LAB_1424ddd76;
      uVar6 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar6;
      if (3 < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar19 = (&DAT_1499672cf)[(ulonglong)uVar18 * 0x10];
      uVar6 = (uint)uVar25;
      switch(uVar11) {
      case 0:
        goto LAB_1424ddf34;
      case 1:
        uVar15 = uVar6;
        break;
      case 2:
        local_b8 = uVar15;
        FUN_1424ded10(local_a0,&local_70,uVar19);
        uVar19 = 4;
        uVar22 = uVar27;
LAB_1424ddf34:
        uVar11 = local_a0;
        local_b8 = uVar6;
        FUN_1424ded10(local_a0,&local_70,uVar19,uVar22);
        uVar22 = uVar25 & 0xffffffff;
        iVar23 = local_88;
        break;
      case 3:
        uVar11 = local_a0;
        local_b8 = uVar15;
        FUN_1424ded10(local_a0,&local_70,uVar19);
        uVar22 = uVar27;
        iVar23 = local_88;
        uVar15 = uVar6;
      }
LAB_1424ddd76:
      uVar18 = bVar9 & 0x1f;
      uVar17 = (undefined2)uVar18;
      uVar25 = uVar25 + 1;
      uVar20 = (ulonglong)((int)uVar20 + 1);
      uVar27 = (ulonglong)uVar15;
    } while (iVar23 != (int)uVar25);
  }
  uVar15 = (uint)uVar22;
  if ((*(int *)(local_a0 + 0x14) == (int)local_90) &&
     (iVar23 = *(int *)(local_a0 + 0xa8), 0 < iVar23)) {
    lVar12 = *(longlong *)(local_a0 + 0xa0);
    iVar24 = 0;
    local_a4 = uVar15;
    do {
      uVar15 = (uint)uVar22;
      if (iVar23 <= iVar24) break;
      iVar1 = iVar24 + 1;
      uVar3 = *(ushort *)(lVar12 + (longlong)iVar24 * 2);
      uVar15 = (uint)uVar3;
      if ((((uVar15 & 0xfc00) == 0xd800) && (iVar1 != iVar23)) &&
         (uVar6 = (uint)*(ushort *)(lVar12 + (longlong)iVar1 * 2), (uVar6 & 0xfc00) == 0xdc00)) {
        uVar15 = (uint)uVar3 * 0x400 + uVar6 + 0xfca02400;
        iVar1 = iVar24 + 2;
      }
      iVar24 = iVar1;
      if ((*(code **)(local_a0 + 0x1c0) == (code *)0x0) ||
         (uVar6 = (**(code **)(local_a0 + 0x1c0))(*(undefined8 *)(local_a0 + 0x1c8),uVar15),
         uVar6 == 0x17)) {
        uVar6 = FUN_1425813e0(uVar15);
      }
      uVar20 = 10;
      if ((int)uVar6 < 0x17) {
        uVar20 = (ulonglong)uVar6;
      }
      uVar22 = (ulonglong)local_a4;
      uVar21 = (undefined7)(uVar20 >> 8);
      uVar15 = local_a4;
      switch(uVar20 & 0xff) {
      case 0:
        goto switchD_1424ddc0f_caseD_0;
      case 1:
      case 0xd:
        uVar20 = CONCAT71(uVar21,1);
        goto switchD_1424ddc0f_caseD_0;
      case 2:
        uVar20 = CONCAT71(uVar21,2);
        goto switchD_1424ddc0f_caseD_0;
      case 5:
        uVar20 = CONCAT71(uVar21,3);
        goto switchD_1424ddc0f_caseD_0;
      }
    } while( true );
  }
  uVar20 = (ulonglong)param_5;
switchD_1424ddc0f_caseD_0:
  uVar6 = (uint)local_90;
  uVar11 = local_90;
  uVar18 = uVar6 - 1;
  if ((int)local_80 < (int)(uVar6 - 1)) {
    uVar18 = local_80;
  }
  do {
    uVar14 = uVar14 - 1;
    uVar10 = uVar18;
    if ((longlong)uVar14 <= (longlong)uVar26) break;
    uVar10 = (int)uVar11 - 1;
    uVar11 = (ulonglong)uVar10;
  } while ((0x5d800U >> (*(byte *)(lVar7 + uVar14) & 0x1f) & 1) != 0);
  if (((*(byte *)(lVar7 + (int)uVar10) & 0xfe) == 0x14) && ((int)uVar6 < *(int *)(local_a0 + 0x14)))
  {
    lVar7 = (longlong)*(int *)(local_a0 + 0x144) + 1;
    *(int *)(local_a0 + 0x144) = (int)lVar7;
    *(undefined2 *)(*(longlong *)(local_a0 + 0x148) + 0xc + lVar7 * 0x10) = uVar17;
    *(undefined4 *)
     (*(longlong *)(local_a0 + 0x148) + 8 + (longlong)*(int *)(local_a0 + 0x144) * 0x10) = local_54;
    *(uint *)(*(longlong *)(local_a0 + 0x148) + 4 + (longlong)*(int *)(local_a0 + 0x144) * 0x10) =
         uVar15;
    *(undefined4 *)(*(longlong *)(local_a0 + 0x148) + (longlong)*(int *)(local_a0 + 0x144) * 0x10) =
         local_60;
  }
  else {
    local_b8 = uVar6;
    FUN_1424ded10(local_a0,&local_70,uVar20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1424de090 FUN_1424de090 body=473 status=ok
// SIG undefined FUN_1424de090(void)

void FUN_1424de090(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  
  if (((*(uint *)(param_1 + 0xbc) & 0x7ddb80) == 0) ||
     (uVar8 = *(uint *)(param_1 + 0xc4), (int)uVar8 < 1)) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x70);
  lVar4 = *(longlong *)(param_1 + 0x78);
  cVar1 = *(char *)(param_1 + 0x8c);
  uVar11 = uVar8;
LAB_1424de0f6:
  do {
    uVar8 = uVar8 - 1;
    uVar9 = uVar11 - 1;
    bVar2 = *(byte *)(lVar3 + (ulonglong)uVar9);
    if ((0x7ddb80U >> (bVar2 & 0x1f) & 1) == 0) {
      if ((int)uVar9 < 1) {
        return;
      }
      uVar10 = (ulonglong)uVar8 + 1;
      do {
        uVar12 = (ulonglong)((int)uVar10 - 2);
        bVar2 = *(byte *)(lVar3 + uVar12);
        uVar11 = 1 << (bVar2 & 0x1f);
        if ((0x5d800U >> (bVar2 & 0x1f) & 1) == 0) {
          if ((cVar1 != '\0') && ((uVar11 & 0x80) != 0)) {
            uVar7 = 0;
            goto LAB_1424de25c;
          }
          if ((uVar11 & 0x180) != 0) goto code_r0x0001424de1f4;
        }
        else {
          *(undefined1 *)(lVar4 + uVar12) = *(undefined1 *)(lVar4 + -1 + uVar10);
        }
        uVar8 = uVar8 - 1;
        uVar10 = uVar10 - 1;
        if (uVar10 < 2) {
          return;
        }
      } while( true );
    }
    if ((cVar1 == '\0') || ((1 << (bVar2 & 0x1f) & 0x80U) == 0)) {
      if ((*(char *)(param_1 + 0x8e) == '\0') ||
         (piVar5 = *(int **)(param_1 + 0xd0), (int)uVar11 <= *piVar5)) {
        uVar7 = *(undefined1 *)(param_1 + 0x8d);
      }
      else {
        uVar14 = *(uint *)(param_1 + 200);
        if ((int)uVar14 < 1) {
          uVar16 = uVar14 - 1;
        }
        else {
          uVar10 = 1;
          do {
            uVar12 = uVar10;
            uVar13 = uVar14;
            if (uVar14 == uVar12) goto LAB_1424de17f;
            uVar10 = uVar12 + 1;
          } while (piVar5[uVar12 * 2] < (int)uVar11);
          uVar13 = (int)(uVar12 + 1) - 1;
LAB_1424de17f:
          uVar16 = uVar14 - 1;
          if (uVar12 < uVar14) {
            uVar16 = uVar13;
          }
        }
        uVar7 = (undefined1)piVar5[(longlong)(int)uVar16 * 2 + 1];
      }
    }
    else {
      uVar7 = 0;
    }
    *(undefined1 *)(lVar4 + (ulonglong)uVar9) = uVar7;
    bVar6 = (int)uVar11 < 2;
    uVar11 = uVar9;
    if (bVar6) {
      return;
    }
  } while( true );
code_r0x0001424de1f4:
  if ((*(char *)(param_1 + 0x8e) == '\0') ||
     (piVar5 = *(int **)(param_1 + 0xd0), (int)uVar8 <= *piVar5)) {
    uVar7 = *(undefined1 *)(param_1 + 0x8d);
  }
  else {
    uVar11 = *(uint *)(param_1 + 200);
    if ((int)uVar11 < 1) {
      uVar9 = uVar11 - 1;
    }
    else {
      uVar10 = 1;
      do {
        uVar15 = uVar10;
        uVar14 = uVar11;
        if (uVar11 == uVar15) goto LAB_1424de243;
        uVar10 = uVar15 + 1;
      } while (piVar5[uVar15 * 2] < (int)uVar8);
      uVar14 = (int)(uVar15 + 1) - 1;
LAB_1424de243:
      uVar9 = uVar11 - 1;
      if (uVar15 < uVar11) {
        uVar9 = uVar14;
      }
    }
    uVar7 = (undefined1)piVar5[(longlong)(int)uVar9 * 2 + 1];
  }
LAB_1424de25c:
  uVar8 = uVar8 - 1;
  *(undefined1 *)(lVar4 + uVar12) = uVar7;
  uVar11 = uVar8;
  if ((int)uVar8 < 1) {
    return;
  }
  goto LAB_1424de0f6;
}



// FUNCTION 1424de280 FUN_1424de280 body=172 status=ok
// SIG undefined FUN_1424de280(void)

void FUN_1424de280(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (iVar1 == 0) {
    lVar2 = FUN_1424da030(0x50);
    *(longlong *)(param_1 + 0x1b0) = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1a0) = 10;
      iVar1 = 10;
      goto LAB_1424de2c0;
    }
LAB_1424de318:
    *(undefined4 *)(param_1 + 0x1ac) = 7;
  }
  else {
LAB_1424de2c0:
    iVar4 = *(int *)(param_1 + 0x1a4);
    lVar2 = *(longlong *)(param_1 + 0x1b0);
    lVar3 = lVar2;
    if (iVar1 <= iVar4) {
      lVar3 = FUN_1424da060(lVar2,(longlong)(iVar1 * 2) << 3);
      *(longlong *)(param_1 + 0x1b0) = lVar3;
      if (lVar3 == 0) {
        *(longlong *)(param_1 + 0x1b0) = lVar2;
        goto LAB_1424de318;
      }
      *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) << 1;
      iVar4 = *(int *)(param_1 + 0x1a4);
    }
    *(undefined4 *)(lVar3 + (longlong)iVar4 * 8) = param_2;
    *(undefined4 *)(lVar3 + 4 + (longlong)iVar4 * 8) = param_3;
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
  }
  return;
}



// FUNCTION 1424de330 FUN_1424de330 body=33 status=ok
// SIG undefined FUN_1424de330(void)

undefined4 FUN_1424de330(longlong *param_1)

{
  longlong *plVar1;
  
  if ((param_1 != (longlong *)0x0) &&
     ((plVar1 = (longlong *)*param_1, plVar1 == param_1 ||
      ((plVar1 != (longlong *)0x0 && ((longlong *)*plVar1 == plVar1)))))) {
    return (int)param_1[0x17];
  }
  return 0;
}



// FUNCTION 1424de360 FUN_1424de360 body=375 status=ok
// SIG undefined FUN_1424de360(void)

void FUN_1424de360(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  *param_2 = param_1;
  *(undefined4 *)((longlong)param_2 + 500) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1fc) = 0;
  if ((*(char *)(param_1 + 0x8e) == '\0') || (piVar2 = *(int **)(param_1 + 0xd0), 0 < *piVar2)) {
    uVar4 = *(undefined1 *)(param_1 + 0x8d);
  }
  else {
    uVar1 = *(uint *)(param_1 + 200);
    if ((int)uVar1 < 1) {
      uVar6 = uVar1 - 1;
    }
    else {
      uVar3 = 1;
      do {
        uVar9 = uVar3;
        uVar8 = uVar1;
        if (uVar1 == uVar9) goto LAB_1424de3cf;
        uVar3 = uVar9 + 1;
      } while (piVar2[uVar9 * 2] < 1);
      uVar8 = (int)(uVar9 + 1) - 1;
LAB_1424de3cf:
      uVar6 = uVar1 - 1;
      if (uVar9 < uVar1) {
        uVar6 = uVar8;
      }
    }
    uVar4 = (undefined1)piVar2[(longlong)(int)uVar6 * 2 + 1];
  }
  *(undefined1 *)(param_2 + 0x40) = uVar4;
  if ((*(char *)(param_1 + 0x8e) == '\0') || (piVar2 = *(int **)(param_1 + 0xd0), 0 < *piVar2)) {
    bVar5 = *(byte *)(param_1 + 0x8d);
  }
  else {
    uVar1 = *(uint *)(param_1 + 200);
    if ((int)uVar1 < 1) {
      uVar6 = uVar1 - 1;
    }
    else {
      uVar3 = 1;
      do {
        uVar9 = uVar3;
        uVar8 = uVar1;
        if (uVar1 == uVar9) goto LAB_1424de43f;
        uVar3 = uVar9 + 1;
      } while (piVar2[uVar9 * 2] < 1);
      uVar8 = (int)(uVar9 + 1) - 1;
LAB_1424de43f:
      uVar6 = uVar1 - 1;
      if (uVar9 < uVar1) {
        uVar6 = uVar8;
      }
    }
    bVar5 = *(byte *)(piVar2 + (longlong)(int)uVar6 * 2 + 1);
  }
  bVar5 = bVar5 & 1;
  *(byte *)((longlong)param_2 + 0x202) = bVar5;
  *(byte *)((longlong)param_2 + 0x201) = bVar5;
  *(uint *)((longlong)param_2 + 0x204) = (uint)bVar5;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    param_2[0x3d] = (longlong)(param_2 + 1);
    uVar7 = 0x14;
  }
  else {
    param_2[0x3d] = *(longlong *)(param_1 + 0x48);
    uVar7 = (undefined4)((ulonglong)(longlong)*(int *)(param_1 + 0x24) / 0x18);
  }
  *(undefined4 *)(param_2 + 0x3e) = uVar7;
  *(bool *)(param_2 + 0x13d) = *(int *)(param_1 + 0x84) == 6 || *(int *)(param_1 + 0x84) == 1;
  return;
}



// FUNCTION 1424de4e0 FUN_1424de4e0 body=1517 status=ok
// SIG undefined FUN_1424de4e0(void)

undefined8 FUN_1424de4e0(longlong *param_1,int param_2)

{
  longlong lVar1;
  byte *pbVar2;
  uint *puVar3;
  longlong lVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined1 uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  bool bVar28;
  
  lVar21 = (longlong)*(int *)((longlong)param_1 + 500);
  lVar22 = lVar21 * 0x10;
  plVar24 = param_1 + lVar21 * 2 + 0x3f;
  uVar18 = *(ulonglong *)(*param_1 + 0x70);
  lVar23 = (longlong)param_2;
  bVar11 = *(byte *)(uVar18 + lVar23);
  if (bVar11 == 10) {
    uVar13 = *(ushort *)(*(longlong *)(*param_1 + 8) + lVar23 * 2);
    puVar8 = (ushort *)((longlong)param_1 + lVar22 + 0x1fe);
    uVar20 = *(ushort *)((longlong)param_1 + lVar22 + 0x1fe);
    uVar26 = (ulonglong)uVar20;
    uVar17 = (ulonglong)*(ushort *)((longlong)param_1 + lVar22 + 0x1fc);
    lVar27 = 0;
    lVar25 = 0;
    uVar9 = uVar17;
    lVar19 = uVar26 * 0x18;
    do {
      if ((longlong)(lVar27 + uVar26) <= (longlong)uVar17) {
        if (((uVar13 != 0) && (uVar14 = FUN_142581870(uVar13), uVar13 != (ushort)uVar14)) &&
           (iVar7 = FUN_1425816a0(uVar13), iVar7 == 1)) {
          if ((uVar14 & 0xffff) == 0x3009) {
            uVar10 = 0x232a;
LAB_1424de8f8:
            cVar5 = FUN_1424deae0(param_1,uVar10,param_2);
            if (cVar5 == '\0') {
              return 0;
            }
          }
          else if ((uVar14 & 0xffff) == 0x232a) {
            uVar10 = 0x3009;
            goto LAB_1424de8f8;
          }
          cVar5 = FUN_1424deae0(param_1,uVar14,param_2);
          if (cVar5 == '\0') {
            return 0;
          }
        }
        goto LAB_1424de92b;
      }
      lVar4 = param_1[0x3d];
      lVar25 = lVar25 + 1;
      lVar27 = lVar27 + -1;
      uVar9 = uVar9 + 1;
      lVar1 = lVar19 + -0x18;
      puVar3 = (uint *)(lVar4 + -0x14 + lVar19);
      lVar19 = lVar1;
    } while (*puVar3 != (uint)uVar13);
    uVar13 = *(ushort *)(lVar4 + 0xc + lVar1);
    uVar14 = *(byte *)(param_1 + lVar21 * 2 + 0x40) & 1;
    if ((*(byte *)(param_1 + lVar21 * 2 + 0x40) & 1) == 0) {
      if ((uVar13 & 1) == 0) goto LAB_1424de640;
      bVar28 = true;
      uVar16 = 0;
    }
    else {
      bVar28 = true;
      uVar16 = 1;
      if ((uVar13 & 2) == 0) {
LAB_1424de640:
        if ((uVar13 & 3) == 0) {
          *puVar8 = uVar20 - (short)lVar25;
          goto LAB_1424de92b;
        }
        bVar28 = (uint)uVar20 == (uint)uVar9;
        uVar15 = *(uint *)(lVar4 + 0x10 + lVar1);
        uVar16 = uVar14;
        if (uVar15 != uVar14) {
          uVar16 = uVar15;
        }
      }
    }
    uVar9 = uVar26 - lVar25;
    cVar5 = (char)uVar16;
    *(char *)(uVar18 + (longlong)*(int *)(lVar4 + lVar1)) = cVar5;
    *(char *)(*(longlong *)(*param_1 + 0x70) + lVar23) = cVar5;
    iVar7 = (int)uVar9;
    FUN_1424dec20(param_1,uVar9 & 0xffffffff,*(undefined4 *)(lVar4 + lVar1));
    if (bVar28) {
      uVar13 = (ushort)uVar9;
      *puVar8 = uVar13;
      while ((*(ushort *)((longlong)param_1 + lVar22 + 0x1fc) < uVar13 &&
             (*(int *)(param_1[0x3d] + (ulonglong)(((uint)uVar9 & 0xffff) - 1) * 0x18) ==
              *(int *)(lVar4 + lVar1)))) {
        uVar14 = (uint)uVar9 - 1;
        uVar9 = (ulonglong)uVar14;
        uVar13 = (ushort)uVar14;
        *puVar8 = uVar13;
      }
    }
    else {
      *(int *)(lVar4 + 4 + lVar1) = -param_2;
      if ((int)(uint)*(ushort *)((longlong)param_1 + lVar22 + 0x1fc) < iVar7) {
        uVar9 = uVar9 & 0xffffffff;
        do {
          uVar14 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar14;
          if (*(int *)(param_1[0x3d] + uVar9 * 0x18) != *(int *)(lVar4 + lVar1)) break;
          *(undefined4 *)(param_1[0x3d] + 4 + uVar9 * 0x18) = 0;
        } while ((int)(uint)*(ushort *)((longlong)param_1 + lVar22 + 0x1fc) < (int)uVar14);
      }
      uVar14 = (uint)*puVar8;
      if (iVar7 + 1 < (int)(uint)*puVar8) {
        uVar9 = (ulonglong)(((uint)uVar20 - (int)lVar25) + 1);
        lVar21 = uVar9 * 0x18 + 4;
        do {
          lVar19 = param_1[0x3d];
          if (param_2 <= *(int *)(lVar19 + -4 + lVar21)) break;
          if (0 < *(int *)(lVar19 + lVar21)) {
            *(undefined4 *)(lVar19 + lVar21) = 0;
            uVar14 = (uint)*puVar8;
          }
          uVar15 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar15;
          lVar21 = lVar21 + 0x18;
        } while ((int)uVar15 < (int)uVar14);
      }
    }
    if (cVar5 != '\n') {
      *(undefined1 *)((longlong)param_1 + lVar22 + 0x202) = 10;
      *(uint *)((longlong)param_1 + lVar22 + 0x204) = uVar16 & 0xff;
      *(int *)plVar24 = param_2;
      uVar18 = *(ulonglong *)(*param_1 + 0x78);
      if ((char)*(byte *)(uVar18 + lVar23) < '\0') {
        bVar11 = *(byte *)(uVar18 + lVar23) & 1;
        *(byte *)((longlong)param_1 + lVar22 + 0x201) = bVar11;
        uVar13 = *(ushort *)((longlong)param_1 + lVar22 + 0x1fc);
        uVar18 = (ulonglong)uVar13;
        if ((int)(uint)uVar13 < iVar7) {
          lVar21 = uVar26 - uVar18;
          uVar6 = (ushort)(1 << bVar11);
          if ((((uint)uVar20 - (uint)uVar13) - (int)lVar25 & 1) != 0) {
            puVar8 = (ushort *)(param_1[0x3d] + 0xc + uVar18 * 0x18);
            *puVar8 = *puVar8 | uVar6;
            uVar18 = uVar18 + 1;
          }
          if (lVar21 + -1 != lVar25) {
            lVar21 = uVar18 * 0x18;
            do {
              puVar8 = (ushort *)(param_1[0x3d] + 0xc + lVar21);
              *puVar8 = *puVar8 | uVar6;
              puVar8 = (ushort *)(param_1[0x3d] + 0x24 + lVar21);
              *puVar8 = *puVar8 | uVar6;
              uVar18 = uVar18 + 2;
              lVar21 = lVar21 + 0x30;
            } while ((longlong)uVar18 < (longlong)(uVar26 + lVar27));
          }
        }
        pbVar2 = (byte *)(*(longlong *)(*param_1 + 0x78) + lVar23);
        *pbVar2 = *pbVar2 & 0x7f;
        uVar18 = *(ulonglong *)(*param_1 + 0x78);
      }
      pbVar2 = (byte *)(uVar18 + (longlong)*(int *)(param_1[0x3d] + lVar1));
      *pbVar2 = *pbVar2 & 0x7f;
      goto LAB_1424dea2e;
    }
  }
LAB_1424de92b:
  uVar9 = *(ulonglong *)(*param_1 + 0x78);
  uVar14 = (uint)bVar11;
  if ((char)*(byte *)(uVar9 + lVar23) < '\0') {
    uVar16 = *(byte *)(uVar9 + lVar23) & 1;
    uVar12 = (undefined1)uVar16;
    uVar9 = (ulonglong)(uVar14 - 0xb);
    if ((byte)(uVar14 - 0xb) < 0xfd) {
      *(undefined1 *)(uVar18 + lVar23) = uVar12;
      uVar9 = uVar18;
    }
    *(undefined1 *)((longlong)param_1 + lVar22 + 0x202) = uVar12;
    *(undefined1 *)((longlong)param_1 + lVar22 + 0x201) = uVar12;
    uVar14 = uVar16;
LAB_1424de992:
    *(uint *)((longlong)param_1 + lVar22 + 0x204) = uVar14;
    *(int *)plVar24 = param_2;
  }
  else {
    if (uVar14 < 0x12) {
      uVar9 = (longlong)&switchD_1424de954::switchdataD_14996754c +
              (longlong)(int)(&switchD_1424de954::switchdataD_14996754c)[bVar11];
      switch(bVar11) {
      case 0:
      case 1:
      case 0xd:
        uVar14 = (uint)(bVar11 != 0);
        *(byte *)((longlong)param_1 + lVar22 + 0x202) = bVar11;
        *(byte *)((longlong)param_1 + lVar22 + 0x201) = bVar11;
        goto LAB_1424de992;
      case 2:
        *(undefined1 *)((longlong)param_1 + lVar22 + 0x202) = 2;
        cVar5 = *(char *)((longlong)param_1 + lVar22 + 0x201);
        if (cVar5 == '\r') {
          uVar12 = 5;
LAB_1424dea3b:
          *(undefined1 *)(uVar18 + lVar23) = uVar12;
          goto LAB_1424dea44;
        }
        if (cVar5 != '\0') {
          uVar12 = 0x18;
          goto LAB_1424dea3b;
        }
        uVar10 = 0;
        bVar11 = 0;
        if ((char)param_1[0x13d] == '\0') {
          *(undefined1 *)(uVar18 + lVar23) = 0x17;
          uVar10 = 0;
          bVar11 = 0;
        }
        break;
      default:
        goto switchD_1424de954_caseD_3;
      case 5:
        *(undefined1 *)((longlong)param_1 + lVar22 + 0x202) = 5;
LAB_1424dea44:
        bVar11 = 1;
        uVar10 = 1;
        break;
      case 0x11:
        bVar11 = *(byte *)((longlong)param_1 + lVar22 + 0x202);
        uVar14 = (uint)bVar11;
        if (bVar11 == 10) {
          *(undefined1 *)(uVar18 + lVar23) = 10;
LAB_1424dea2e:
          return CONCAT71((int7)(uVar18 >> 8),1);
        }
        goto LAB_1424de99d;
      }
      *(int *)((longlong)param_1 + lVar22 + 0x204) = (int)uVar10;
      *(int *)plVar24 = param_2;
      goto LAB_1424dea56;
    }
switchD_1424de954_caseD_3:
    *(byte *)((longlong)param_1 + lVar22 + 0x202) = bVar11;
  }
LAB_1424de99d:
  uVar10 = CONCAT71((int7)(uVar9 >> 8),1);
  bVar11 = (byte)uVar14;
  if (0xd < bVar11) {
    return uVar10;
  }
  if ((0x2003U >> (uVar14 & 0x1f) & 1) == 0) {
    return uVar10;
  }
LAB_1424dea56:
  uVar13 = *(ushort *)((longlong)param_1 + lVar22 + 0x1fc);
  uVar18 = (ulonglong)uVar13;
  uVar20 = *(ushort *)((longlong)param_1 + lVar22 + 0x1fe);
  if (uVar13 < uVar20) {
    lVar21 = uVar18 * 0x18 + 0xc;
    do {
      if (*(int *)(param_1[0x3d] + -0xc + lVar21) < param_2) {
        puVar8 = (ushort *)(param_1[0x3d] + lVar21);
        *puVar8 = *puVar8 | (ushort)(1 << (bVar11 != 0));
        uVar20 = *(ushort *)((longlong)param_1 + lVar22 + 0x1fe);
      }
      uVar18 = uVar18 + 1;
      lVar21 = lVar21 + 0x18;
    } while (uVar18 < uVar20);
  }
  return CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
}



// FUNCTION 1424deae0 FUN_1424deae0 body=305 status=ok
// SIG undefined FUN_1424deae0(void)

undefined8 FUN_1424deae0(longlong *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ushort uVar4;
  void *_Dst;
  ulonglong uVar5;
  longlong lVar6;
  ushort *puVar7;
  
  iVar1 = *(int *)((longlong)param_1 + 500);
  lVar6 = (longlong)iVar1 * 0x10;
  puVar7 = (ushort *)((longlong)param_1 + lVar6 + 0x1fe);
  uVar4 = *(ushort *)((longlong)param_1 + lVar6 + 0x1fe);
  if ((int)(uint)uVar4 < (int)param_1[0x3e]) {
    _Dst = (void *)param_1[0x3d];
    goto LAB_1424debbf;
  }
  lVar2 = *param_1;
  iVar3 = (uint)uVar4 * 0x30;
  _Dst = *(void **)(lVar2 + 0x48);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FUN_1424da030(iVar3);
    *(void **)(lVar2 + 0x48) = _Dst;
    if (_Dst == (void *)0x0) {
      return 0;
    }
LAB_1424deb76:
    *(int *)(lVar2 + 0x24) = iVar3;
  }
  else if (*(int *)(lVar2 + 0x24) < iVar3) {
    _Dst = (void *)FUN_1424da060(_Dst,iVar3);
    if (_Dst == (void *)0x0) {
      return 0;
    }
    *(void **)(lVar2 + 0x48) = _Dst;
    goto LAB_1424deb76;
  }
  if ((longlong *)param_1[0x3d] == param_1 + 1) {
    memcpy(_Dst,(longlong *)param_1[0x3d],0x1e0);
    _Dst = *(void **)(lVar2 + 0x48);
  }
  param_1[0x3d] = (longlong)_Dst;
  *(int *)(param_1 + 0x3e) = (int)((ulonglong)(longlong)*(int *)(lVar2 + 0x24) / 0x18);
  uVar4 = *puVar7;
LAB_1424debbf:
  uVar5 = (ulonglong)uVar4;
  *(undefined4 *)((longlong)_Dst + uVar5 * 0x18) = param_3;
  *(uint *)((longlong)_Dst + uVar5 * 0x18 + 4) = param_2 & 0xffff;
  *(undefined4 *)((longlong)_Dst + uVar5 * 0x18 + 0x10) =
       *(undefined4 *)((longlong)param_1 + lVar6 + 0x204);
  *(int *)((longlong)_Dst + uVar5 * 0x18 + 8) = (int)param_1[(longlong)iVar1 * 2 + 0x3f];
  *(undefined2 *)((longlong)_Dst + uVar5 * 0x18 + 0xc) = 0;
  *puVar7 = *puVar7 + 1;
  return CONCAT71((int7)(uVar5 * 3 >> 8),1);
}



// FUNCTION 1424dec20 FUN_1424dec20 body=225 status=ok
// SIG undefined FUN_1424dec20(void)

void FUN_1424dec20(longlong *param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  
  uVar7 = param_2 + 1;
  lVar6 = (longlong)*(int *)((longlong)param_1 + 500) * 0x10;
  uVar1 = *(ushort *)((longlong)param_1 + lVar6 + 0x1fe);
  uVar5 = (uint)uVar1;
  if ((int)uVar7 < (int)(uint)uVar1) {
    lVar4 = *(longlong *)(*param_1 + 0x70);
    piVar8 = (int *)((ulonglong)uVar7 * 0x18 + param_1[0x3d]);
    do {
      if (piVar8[1] < 0) {
        if (param_3 < piVar8[2]) {
          return;
        }
        iVar2 = *piVar8;
        if (param_3 < iVar2) {
          if (piVar8[4] == (param_4 & 0xff)) {
            return;
          }
          *(char *)(lVar4 + iVar2) = (char)param_4;
          iVar3 = piVar8[1];
          *(char *)(lVar4 - iVar3) = (char)param_4;
          piVar8[1] = 0;
          FUN_1424dec20(param_1,uVar7,(longlong)iVar2,param_4);
          FUN_1424dec20(param_1,uVar7,-iVar3,param_4);
          uVar5 = (uint)*(ushort *)((longlong)param_1 + lVar6 + 0x1fe);
        }
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 6;
    } while ((int)uVar7 < (int)uVar5);
  }
  return;
}



// FUNCTION 1424ded10 FUN_1424ded10 body=3914 status=ok
// SIG undefined FUN_1424ded10(void)

/* WARNING: Removing unreachable block (ram,0x0001424df8af) */
/* WARNING: Removing unreachable block (ram,0x0001424df888) */

void FUN_1424ded10(longlong param_1,longlong *param_2,byte param_3,ulonglong param_4,int param_5)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  uint uVar34;
  int iVar35;
  byte *pbVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  byte bVar40;
  int iVar41;
  int iVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  uint uVar45;
  ulonglong uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  byte bVar50;
  byte bVar51;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined1 auVar59 [16];
  uint local_54;
  undefined1 auVar52 [16];
  
  local_54 = (uint)param_4;
  lVar38 = *param_2;
  lVar6 = *(longlong *)(param_1 + 0x78);
  bVar40 = *(byte *)((longlong)param_2 + 0x1c);
  bVar51 = *(byte *)((ulonglong)param_3 + (ulonglong)bVar40 * 8 + lVar38);
  uVar34 = bVar51 & 0xf;
  *(uint *)((longlong)param_2 + 0x1c) = uVar34;
  bVar51 = *(byte *)(param_2[1] + (ulonglong)(bVar51 >> 4));
  if (0xe < bVar51) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  cVar4 = *(char *)(lVar38 + 7 + (ulonglong)uVar34 * 8);
  uVar34 = local_54;
  switch(bVar51) {
  case 1:
    goto switchD_1424ded81_caseD_1;
  case 2:
    uVar34 = *(uint *)(param_2 + 2);
    goto LAB_1424dfa86;
  case 3:
    lVar38 = (longlong)(int)param_2[2];
    if ((int)param_2[2] < (int)local_54) {
      cVar5 = *(char *)((longlong)param_2 + 0x24);
      lVar39 = *(longlong *)(param_1 + 0x70);
      lVar37 = *(longlong *)(param_1 + 0x78);
      iVar42 = 0;
      do {
        bVar40 = *(byte *)(lVar39 + lVar38);
        iVar42 = iVar42 - (uint)(bVar40 == 0x16);
        if (iVar42 == 0) {
          *(char *)(lVar37 + lVar38) = cVar5 + '\x01';
        }
        iVar42 = iVar42 + (uint)((bVar40 & 0xfe) == 0x14);
        lVar38 = lVar38 + 1;
      } while ((int)local_54 != lVar38);
    }
    goto LAB_1424dfa86;
  case 4:
    lVar38 = (longlong)(int)param_2[2];
    if ((int)param_2[2] < (int)local_54) {
      cVar5 = *(char *)((longlong)param_2 + 0x24);
      lVar39 = *(longlong *)(param_1 + 0x70);
      lVar37 = *(longlong *)(param_1 + 0x78);
      iVar42 = 0;
      do {
        bVar40 = *(byte *)(lVar39 + lVar38);
        iVar42 = iVar42 - (uint)(bVar40 == 0x16);
        if (iVar42 == 0) {
          *(char *)(lVar37 + lVar38) = cVar5 + '\x02';
        }
        iVar42 = iVar42 + (uint)((bVar40 & 0xfe) == 0x14);
        lVar38 = lVar38 + 1;
      } while ((int)local_54 != lVar38);
    }
    goto LAB_1424dfa86;
  case 5:
    iVar42 = *(int *)((longlong)param_2 + 0x14);
    if (-1 < iVar42) {
      iVar35 = *(int *)(param_1 + 0x1a0);
      if (iVar35 == 0) {
        lVar39 = FUN_1424da030(0x50);
        *(longlong *)(param_1 + 0x1b0) = lVar39;
        if (lVar39 != 0) {
          *(undefined4 *)(param_1 + 0x1a0) = 10;
          iVar35 = 10;
          param_4 = param_4 & 0xffffffff;
          goto LAB_1424df1f7;
        }
LAB_1424df8fe:
        *(undefined4 *)(param_1 + 0x1ac) = 7;
        param_4 = (ulonglong)local_54;
      }
      else {
        lVar39 = *(longlong *)(param_1 + 0x1b0);
LAB_1424df1f7:
        iVar41 = *(int *)(param_1 + 0x1a4);
        lVar37 = lVar39;
        if (iVar35 <= iVar41) {
          local_54 = (uint)param_4;
          lVar37 = FUN_1424da060(lVar39,(longlong)(iVar35 * 2) << 3);
          *(longlong *)(param_1 + 0x1b0) = lVar37;
          if (lVar37 == 0) {
            *(longlong *)(param_1 + 0x1b0) = lVar39;
            goto LAB_1424df8fe;
          }
          *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) << 1;
          iVar41 = *(int *)(param_1 + 0x1a4);
          param_4 = param_4 & 0xffffffff;
        }
        *(int *)(lVar37 + (longlong)iVar41 * 8) = iVar42;
        *(undefined4 *)(lVar37 + 4 + (longlong)iVar41 * 8) = 1;
        *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
      }
    }
    *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
    local_54 = (uint)param_4;
    uVar34 = local_54;
    if ((*(int *)(param_1 + 0x1a0) != 0) &&
       (iVar42 = *(int *)(param_1 + 0x1a4), *(int *)(param_1 + 0x1a8) < iVar42)) {
      iVar35 = (int)param_2[3];
      if (iVar35 + 1 < (int)local_54) {
        lVar38 = (longlong)iVar35 + 1;
        uVar45 = (local_54 - iVar35) - 2;
        if (uVar45 < 7) {
LAB_1424dfc1b:
          lVar39 = 0;
          do {
            *(byte *)(lVar6 + lVar38 + lVar39) = (*(byte *)(lVar6 + lVar38 + lVar39) & 0xfe) - 2;
            lVar39 = lVar39 + 1;
          } while (local_54 - (int)lVar38 != (int)lVar39);
        }
        else {
          uVar44 = (ulonglong)uVar45 + 1;
          if (uVar45 < 0x1f) {
            uVar43 = 0;
LAB_1424dfbb6:
            uVar46 = uVar44 & 0x1fffffff8;
            lVar39 = lVar6 + lVar38;
            lVar38 = lVar38 + uVar46;
            do {
              pbVar36 = (byte *)(lVar39 + uVar43);
              *(ulonglong *)(lVar39 + uVar43) =
                   CONCAT17((pbVar36[7] & 0xfe) - 2,
                            CONCAT16((pbVar36[6] & 0xfe) - 2,
                                     CONCAT15((pbVar36[5] & 0xfe) - 2,
                                              CONCAT14((pbVar36[4] & 0xfe) - 2,
                                                       CONCAT13((pbVar36[3] & 0xfe) - 2,
                                                                CONCAT12((pbVar36[2] & 0xfe) - 2,
                                                                         CONCAT11((pbVar36[1] & 0xfe
                                                                                  ) - 2,(*pbVar36 &
                                                                                        0xfe) - 2)))
                                                      ))));
              uVar43 = uVar43 + 8;
            } while (uVar46 != uVar43);
            if (uVar44 != uVar46) goto LAB_1424dfc1b;
          }
          else {
            uVar43 = uVar44 & 0x1ffffffe0;
            lVar39 = iVar35 + lVar6;
            uVar46 = 0;
            do {
              pbVar1 = (byte *)(lVar39 + 1 + uVar46);
              bVar58 = pbVar1[1];
              bVar20 = pbVar1[2];
              bVar21 = pbVar1[3];
              bVar22 = pbVar1[4];
              bVar23 = pbVar1[5];
              bVar24 = pbVar1[6];
              bVar25 = pbVar1[7];
              bVar26 = pbVar1[8];
              bVar27 = pbVar1[9];
              bVar28 = pbVar1[10];
              bVar29 = pbVar1[0xb];
              bVar30 = pbVar1[0xc];
              bVar31 = pbVar1[0xd];
              bVar32 = pbVar1[0xe];
              bVar33 = pbVar1[0xf];
              pbVar36 = (byte *)(lVar39 + 0x11 + uVar46);
              bVar40 = *pbVar36;
              bVar51 = pbVar36[1];
              bVar12 = pbVar36[2];
              bVar13 = pbVar36[3];
              bVar14 = pbVar36[4];
              bVar15 = pbVar36[5];
              bVar16 = pbVar36[6];
              bVar17 = pbVar36[7];
              bVar18 = pbVar36[8];
              bVar19 = pbVar36[9];
              bVar50 = pbVar36[10];
              bVar53 = pbVar36[0xb];
              bVar54 = pbVar36[0xc];
              bVar55 = pbVar36[0xd];
              bVar56 = pbVar36[0xe];
              bVar57 = pbVar36[0xf];
              pcVar2 = (char *)(lVar39 + 1 + uVar46);
              *pcVar2 = (*pbVar1 & 0xfe) - 2;
              pcVar2[1] = (bVar58 & 0xfe) - 2;
              pcVar2[2] = (bVar20 & 0xfe) - 2;
              pcVar2[3] = (bVar21 & 0xfe) - 2;
              pcVar2[4] = (bVar22 & 0xfe) - 2;
              pcVar2[5] = (bVar23 & 0xfe) - 2;
              pcVar2[6] = (bVar24 & 0xfe) - 2;
              pcVar2[7] = (bVar25 & 0xfe) - 2;
              pcVar2[8] = (bVar26 & 0xfe) - 2;
              pcVar2[9] = (bVar27 & 0xfe) - 2;
              pcVar2[10] = (bVar28 & 0xfe) - 2;
              pcVar2[0xb] = (bVar29 & 0xfe) - 2;
              pcVar2[0xc] = (bVar30 & 0xfe) - 2;
              pcVar2[0xd] = (bVar31 & 0xfe) - 2;
              pcVar2[0xe] = (bVar32 & 0xfe) - 2;
              pcVar2[0xf] = (bVar33 & 0xfe) - 2;
              pcVar2 = (char *)(lVar39 + 0x11 + uVar46);
              *pcVar2 = (bVar40 & 0xfe) - 2;
              pcVar2[1] = (bVar51 & 0xfe) - 2;
              pcVar2[2] = (bVar12 & 0xfe) - 2;
              pcVar2[3] = (bVar13 & 0xfe) - 2;
              pcVar2[4] = (bVar14 & 0xfe) - 2;
              pcVar2[5] = (bVar15 & 0xfe) - 2;
              pcVar2[6] = (bVar16 & 0xfe) - 2;
              pcVar2[7] = (bVar17 & 0xfe) - 2;
              pcVar2[8] = (bVar18 & 0xfe) - 2;
              pcVar2[9] = (bVar19 & 0xfe) - 2;
              pcVar2[10] = (bVar50 & 0xfe) - 2;
              pcVar2[0xb] = (bVar53 & 0xfe) - 2;
              pcVar2[0xc] = (bVar54 & 0xfe) - 2;
              pcVar2[0xd] = (bVar55 & 0xfe) - 2;
              pcVar2[0xe] = (bVar56 & 0xfe) - 2;
              pcVar2[0xf] = (bVar57 & 0xfe) - 2;
              uVar46 = uVar46 + 0x20;
            } while (uVar43 != uVar46);
            if (uVar44 != uVar43) {
              if ((uVar44 & 0x18) == 0) {
                lVar38 = lVar38 + uVar43;
                goto LAB_1424dfc1b;
              }
              goto LAB_1424dfbb6;
            }
          }
        }
        iVar42 = *(int *)(param_1 + 0x1a4);
      }
      *(int *)(param_1 + 0x1a8) = iVar42;
      *(undefined4 *)(param_2 + 3) = 0xffffffff;
      if (param_3 == 5) {
        FUN_1424de280(param_1,param_4 & 0xffffffff,1);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a4);
      }
      goto LAB_1424dfa86;
    }
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    if (((*(byte *)(lVar38 + 7 + (ulonglong)bVar40 * 8) & 1) != 0) &&
       (uVar34 = *(uint *)(param_2 + 2), (int)*(uint *)(param_2 + 2) < 1)) {
      uVar34 = local_54;
    }
    if (param_3 != 5) goto LAB_1424dfa86;
    iVar42 = *(int *)(param_1 + 0x1a0);
    if (iVar42 == 0) {
      lVar38 = FUN_1424da030(0x50);
      *(longlong *)(param_1 + 0x1b0) = lVar38;
      if (lVar38 != 0) {
        *(undefined4 *)(param_1 + 0x1a0) = 10;
        iVar42 = 10;
        goto LAB_1424df9e2;
      }
LAB_1424dfb3e:
      *(undefined4 *)(param_1 + 0x1ac) = 7;
    }
    else {
      lVar38 = *(longlong *)(param_1 + 0x1b0);
LAB_1424df9e2:
      iVar35 = *(int *)(param_1 + 0x1a4);
      lVar39 = lVar38;
      if (iVar42 <= iVar35) {
        lVar39 = FUN_1424da060(lVar38,(longlong)(iVar42 * 2) << 3);
        *(longlong *)(param_1 + 0x1b0) = lVar39;
        if (lVar39 == 0) {
          *(longlong *)(param_1 + 0x1b0) = lVar38;
          goto LAB_1424dfb3e;
        }
        *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) << 1;
        iVar35 = *(int *)(param_1 + 0x1a4);
      }
      *(uint *)(lVar39 + (longlong)iVar35 * 8) = local_54;
      *(undefined4 *)(lVar39 + 4 + (longlong)iVar35 * 8) = 1;
      *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    }
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a4);
    goto LAB_1424dfa86;
  case 6:
    if (0 < *(int *)(param_1 + 0x1a0)) {
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1a8);
    }
    param_2[2] = -1;
LAB_1424deeaa:
    *(int *)(param_2 + 3) = param_5 + -1;
    break;
  case 7:
    if (((param_3 == 3) &&
        (*(char *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)local_54) == '\x05')) &&
       (*(int *)(param_1 + 0x84) != 6)) {
      iVar42 = *(int *)((longlong)param_2 + 0x14);
      if (iVar42 != -1) {
        if (-1 < iVar42) {
          param_4 = param_4 & 0xffffffff;
          FUN_1424de280(param_1,iVar42,1);
          *(undefined4 *)((longlong)param_2 + 0x14) = 0xfffffffe;
        }
        local_54 = (uint)param_4;
        FUN_1424de280(param_1,param_4 & 0xffffffff,1);
        uVar34 = local_54;
        goto LAB_1424dfa86;
      }
      goto LAB_1424deeaa;
    }
    if (*(int *)((longlong)param_2 + 0x14) != -1) goto LAB_1424dfa86;
    *(uint *)((longlong)param_2 + 0x14) = local_54;
    break;
  case 8:
    *(int *)(param_2 + 3) = param_5 + -1;
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
    break;
  case 9:
    pbVar36 = (byte *)((param_4 & 0xffffffff) + lVar6);
    param_4 = param_4 & 0xffffffff;
    do {
      pbVar36 = pbVar36 + -1;
      if ((int)param_4 < 1) goto switchD_1424ded81_caseD_1;
      uVar45 = (int)param_4 - 1;
      param_4 = (ulonglong)uVar45;
    } while ((*pbVar36 & 1) == 0);
    iVar42 = *(int *)(param_1 + 0x1a0);
    if (iVar42 == 0) {
      lVar38 = FUN_1424da030(0x50);
      *(longlong *)(param_1 + 0x1b0) = lVar38;
      if (lVar38 != 0) {
        *(undefined4 *)(param_1 + 0x1a0) = 10;
        iVar42 = 10;
        goto LAB_1424df320;
      }
LAB_1424dfa66:
      *(undefined4 *)(param_1 + 0x1ac) = 7;
    }
    else {
      lVar38 = *(longlong *)(param_1 + 0x1b0);
LAB_1424df320:
      iVar35 = *(int *)(param_1 + 0x1a4);
      lVar39 = lVar38;
      if (iVar42 <= iVar35) {
        lVar39 = FUN_1424da060(lVar38,(longlong)(iVar42 * 2) << 3);
        *(longlong *)(param_1 + 0x1b0) = lVar39;
        if (lVar39 == 0) {
          *(longlong *)(param_1 + 0x1b0) = lVar38;
          goto LAB_1424dfa66;
        }
        *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) << 1;
        iVar35 = *(int *)(param_1 + 0x1a4);
      }
      *(uint *)(lVar39 + (longlong)iVar35 * 8) = uVar45;
      *(undefined4 *)(lVar39 + 4 + (longlong)iVar35 * 8) = 4;
      *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    }
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a4);
    goto switchD_1424ded81_caseD_1;
  case 10:
    iVar42 = *(int *)(param_1 + 0x1a0);
    if (iVar42 == 0) {
      lVar38 = FUN_1424da030(0x50);
      *(longlong *)(param_1 + 0x1b0) = lVar38;
      if (lVar38 != 0) {
        *(undefined4 *)(param_1 + 0x1a0) = 10;
        iVar42 = 10;
        goto LAB_1424df148;
      }
LAB_1424df382:
      *(undefined4 *)(param_1 + 0x1ac) = 7;
    }
    else {
      lVar38 = *(longlong *)(param_1 + 0x1b0);
LAB_1424df148:
      iVar35 = *(int *)(param_1 + 0x1a4);
      lVar39 = lVar38;
      if (iVar42 <= iVar35) {
        lVar39 = FUN_1424da060(lVar38,(longlong)(iVar42 * 2) << 3);
        *(longlong *)(param_1 + 0x1b0) = lVar39;
        if (lVar39 == 0) {
          *(longlong *)(param_1 + 0x1b0) = lVar38;
          goto LAB_1424df382;
        }
        *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) << 1;
        iVar35 = *(int *)(param_1 + 0x1a4);
      }
      *(uint *)(lVar39 + (longlong)iVar35 * 8) = local_54;
      *(undefined4 *)(lVar39 + 4 + (longlong)iVar35 * 8) = 1;
      *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    }
    iVar42 = *(int *)(param_1 + 0x1a0);
    if (iVar42 == 0) {
      lVar38 = FUN_1424da030(0x50);
      *(longlong *)(param_1 + 0x1b0) = lVar38;
      if (lVar38 != 0) {
        *(undefined4 *)(param_1 + 0x1a0) = 10;
        iVar42 = 10;
        goto LAB_1424df3d0;
      }
LAB_1424df42e:
      *(undefined4 *)(param_1 + 0x1ac) = 7;
      goto LAB_1424dfa86;
    }
    lVar38 = *(longlong *)(param_1 + 0x1b0);
LAB_1424df3d0:
    iVar35 = *(int *)(param_1 + 0x1a4);
    lVar39 = lVar38;
    if (iVar42 <= iVar35) {
      lVar39 = FUN_1424da060(lVar38,(longlong)(iVar42 * 2) << 3);
      *(longlong *)(param_1 + 0x1b0) = lVar39;
      if (lVar39 == 0) {
        *(longlong *)(param_1 + 0x1b0) = lVar38;
        goto LAB_1424df42e;
      }
      *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) << 1;
      iVar35 = *(int *)(param_1 + 0x1a4);
    }
    *(uint *)(lVar39 + (longlong)iVar35 * 8) = local_54;
    *(undefined4 *)(lVar39 + 4 + (longlong)iVar35 * 8) = 2;
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    break;
  case 0xb:
    iVar42 = *(int *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1a4) = iVar42;
    if (param_3 != 5) goto LAB_1424dfa86;
    iVar35 = *(int *)(param_1 + 0x1a0);
    if (iVar35 == 0) {
      lVar38 = FUN_1424da030(0x50);
      *(longlong *)(param_1 + 0x1b0) = lVar38;
      if (lVar38 != 0) {
        *(undefined4 *)(param_1 + 0x1a0) = 10;
        iVar42 = *(int *)(param_1 + 0x1a4);
        iVar35 = 10;
        lVar39 = lVar38;
        if (9 < iVar42) goto LAB_1424df29d;
        goto LAB_1424df2d3;
      }
LAB_1424dfa44:
      *(undefined4 *)(param_1 + 0x1ac) = 7;
    }
    else {
      lVar38 = *(longlong *)(param_1 + 0x1b0);
      lVar39 = lVar38;
      if (iVar35 <= iVar42) {
LAB_1424df29d:
        lVar38 = FUN_1424da060(lVar39,(longlong)(iVar35 * 2) << 3);
        *(longlong *)(param_1 + 0x1b0) = lVar38;
        if (lVar38 == 0) {
          *(longlong *)(param_1 + 0x1b0) = lVar39;
          goto LAB_1424dfa44;
        }
        *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) << 1;
        iVar42 = *(int *)(param_1 + 0x1a4);
      }
LAB_1424df2d3:
      *(uint *)(lVar38 + (longlong)iVar42 * 8) = local_54;
      *(undefined4 *)(lVar38 + 4 + (longlong)iVar42 * 8) = 4;
      *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
    }
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a4);
    break;
  case 0xc:
    lVar38 = (longlong)(int)param_2[2];
    if ((int)param_2[2] < (int)local_54) {
      bVar40 = *(char *)((longlong)param_2 + 0x24) + cVar4;
      uVar44 = (int)local_54 - lVar38;
      if (7 < uVar44) {
        if (uVar44 < 0x20) {
          uVar43 = 0;
        }
        else {
          uVar43 = uVar44 & 0xffffffffffffffe0;
          auVar47 = pshuflw(ZEXT216(CONCAT11(bVar40,bVar40)),ZEXT216(CONCAT11(bVar40,bVar40)),0);
          lVar39 = lVar6 + lVar38;
          uVar46 = 0;
          do {
            pbVar36 = (byte *)(lVar39 + uVar46);
            bVar15 = *pbVar36;
            bVar16 = pbVar36[1];
            bVar17 = pbVar36[2];
            bVar18 = pbVar36[3];
            bVar19 = pbVar36[4];
            bVar50 = pbVar36[5];
            bVar53 = pbVar36[6];
            bVar54 = pbVar36[7];
            bVar51 = auVar47[0];
            bVar12 = auVar47[1];
            bVar13 = auVar47[2];
            bVar14 = auVar47[3];
            bVar7 = (byte)((bVar15 < bVar51) * bVar51 | (bVar15 >= bVar51) * bVar15) == bVar15;
            bVar8 = (byte)((bVar17 < bVar13) * bVar13 | (bVar17 >= bVar13) * bVar17) == bVar17;
            bVar9 = (byte)((bVar19 < bVar51) * bVar51 | (bVar19 >= bVar51) * bVar19) == bVar19;
            bVar10 = (byte)((bVar53 < bVar13) * bVar13 | (bVar53 >= bVar13) * bVar53) == bVar53;
            bVar11 = (byte)((bVar54 < bVar14) * bVar14 | (bVar54 >= bVar14) * bVar54) != bVar54;
            if ((bool)(~bVar7 & 1)) {
              *(byte *)(lVar39 + uVar46) = bVar40;
            }
            if ((byte)((bVar16 < bVar12) * bVar12 | (bVar16 >= bVar12) * bVar16) != bVar16) {
              *(byte *)(lVar39 + 1 + uVar46) = bVar40;
            }
            if (!bVar8) {
              *(byte *)(lVar39 + 2 + uVar46) = bVar40;
            }
            if ((byte)((bVar18 < bVar14) * bVar14 | (bVar18 >= bVar14) * bVar18) != bVar18) {
              *(byte *)(lVar39 + 3 + uVar46) = bVar40;
            }
            if ((bool)(~bVar9 & 1)) {
              *(byte *)(lVar39 + 4 + uVar46) = bVar40;
            }
            if ((byte)((bVar50 < bVar12) * bVar12 | (bVar50 >= bVar12) * bVar50) != bVar50) {
              *(byte *)(lVar39 + 5 + uVar46) = bVar40;
            }
            if ((bool)(~bVar10 & 1)) {
              *(byte *)(lVar39 + 6 + uVar46) = bVar40;
            }
            if (bVar11) {
              *(byte *)(lVar39 + 7 + uVar46) = bVar40;
            }
            if ((bool)(~bVar7 & 1)) {
              *(byte *)(lVar39 + 8 + uVar46) = bVar40;
            }
            *(byte *)(lVar39 + 9 + uVar46) = bVar40;
            pbVar36 = (byte *)(lVar39 + 0x10 + uVar46);
            bVar15 = *pbVar36;
            bVar16 = pbVar36[1];
            bVar17 = pbVar36[2];
            bVar18 = pbVar36[3];
            bVar19 = pbVar36[4];
            bVar50 = pbVar36[5];
            bVar53 = pbVar36[6];
            bVar54 = pbVar36[7];
            if ((bool)(~bVar8 & 1)) {
              *(byte *)(lVar39 + 10 + uVar46) = bVar40;
            }
            *(byte *)(lVar39 + 0xb + uVar46) = bVar40;
            if ((bool)(~bVar9 & 1)) {
              *(byte *)(lVar39 + 0xc + uVar46) = bVar40;
            }
            *(byte *)(lVar39 + 0xd + uVar46) = bVar40;
            if ((bool)(~bVar10 & 1)) {
              *(byte *)(lVar39 + 0xe + uVar46) = bVar40;
            }
            if (bVar11) {
              *(byte *)(lVar39 + 0xf + uVar46) = bVar40;
            }
            bVar7 = (byte)((bVar15 < bVar51) * bVar51 | (bVar15 >= bVar51) * bVar15) == bVar15;
            bVar8 = (byte)((bVar17 < bVar13) * bVar13 | (bVar17 >= bVar13) * bVar17) == bVar17;
            bVar9 = (byte)((bVar19 < bVar51) * bVar51 | (bVar19 >= bVar51) * bVar19) == bVar19;
            bVar10 = (byte)((bVar53 < bVar13) * bVar13 | (bVar53 >= bVar13) * bVar53) == bVar53;
            bVar11 = (byte)((bVar54 < bVar14) * bVar14 | (bVar54 >= bVar14) * bVar54) != bVar54;
            if ((bool)(~bVar7 & 1)) {
              *(byte *)(lVar39 + 0x10 + uVar46) = bVar40;
            }
            if ((byte)((bVar16 < bVar12) * bVar12 | (bVar16 >= bVar12) * bVar16) != bVar16) {
              *(byte *)(lVar39 + 0x11 + uVar46) = bVar40;
            }
            if (!bVar8) {
              *(byte *)(lVar39 + 0x12 + uVar46) = bVar40;
            }
            if ((byte)((bVar18 < bVar14) * bVar14 | (bVar18 >= bVar14) * bVar18) != bVar18) {
              *(byte *)(lVar39 + 0x13 + uVar46) = bVar40;
            }
            if ((bool)(~bVar9 & 1)) {
              *(byte *)(lVar39 + 0x14 + uVar46) = bVar40;
            }
            if ((byte)((bVar50 < bVar12) * bVar12 | (bVar50 >= bVar12) * bVar50) != bVar50) {
              *(byte *)(lVar39 + 0x15 + uVar46) = bVar40;
            }
            if ((bool)(~bVar10 & 1)) {
              *(byte *)(lVar39 + 0x16 + uVar46) = bVar40;
            }
            if (bVar11) {
              *(byte *)(lVar39 + 0x17 + uVar46) = bVar40;
            }
            if ((bool)(~bVar7 & 1)) {
              *(byte *)(lVar39 + 0x18 + uVar46) = bVar40;
            }
            *(byte *)(lVar39 + 0x19 + uVar46) = bVar40;
            if ((bool)(~bVar8 & 1)) {
              *(byte *)(lVar39 + 0x1a + uVar46) = bVar40;
            }
            *(byte *)(lVar39 + 0x1b + uVar46) = bVar40;
            if ((bool)(~bVar9 & 1)) {
              *(byte *)(lVar39 + 0x1c + uVar46) = bVar40;
            }
            *(byte *)(lVar39 + 0x1d + uVar46) = bVar40;
            if ((bool)(~bVar10 & 1)) {
              *(byte *)(lVar39 + 0x1e + uVar46) = bVar40;
            }
            if (bVar11) {
              *(byte *)(lVar39 + 0x1f + uVar46) = bVar40;
            }
            uVar46 = uVar46 + 0x20;
          } while (uVar43 != uVar46);
          if (uVar44 == uVar43) goto LAB_1424df8d7;
          if ((uVar44 & 0x18) == 0) {
            lVar38 = uVar43 + lVar38;
            goto LAB_1424dfc0c;
          }
        }
        uVar46 = uVar44 & 0xfffffffffffffff8;
        auVar47 = pshuflw(ZEXT216(CONCAT11(bVar40,bVar40)),ZEXT216(CONCAT11(bVar40,bVar40)),0);
        lVar39 = lVar38 + lVar6;
        auVar48._8_4_ = 0xffffffff;
        auVar48._0_8_ = 0xffffffffffffffff;
        auVar48._12_4_ = 0xffffffff;
        do {
          uVar3 = *(undefined8 *)(lVar39 + uVar43);
          bVar51 = auVar47[0];
          bVar50 = (byte)uVar3;
          bVar12 = auVar47[1];
          bVar53 = (byte)((ulonglong)uVar3 >> 8);
          bVar13 = auVar47[2];
          bVar54 = (byte)((ulonglong)uVar3 >> 0x10);
          bVar14 = auVar47[3];
          bVar55 = (byte)((ulonglong)uVar3 >> 0x18);
          bVar15 = auVar47[4];
          bVar56 = (byte)((ulonglong)uVar3 >> 0x20);
          bVar16 = auVar47[5];
          bVar57 = (byte)((ulonglong)uVar3 >> 0x28);
          bVar17 = auVar47[6];
          bVar58 = (byte)((ulonglong)uVar3 >> 0x30);
          bVar19 = (byte)((ulonglong)uVar3 >> 0x38);
          bVar18 = auVar47[7];
          bVar51 = -((byte)((bVar50 < bVar51) * bVar51 | (bVar50 >= bVar51) * bVar50) == bVar50);
          auVar52._0_6_ =
               CONCAT15(-((byte)((bVar57 < bVar16) * bVar16 | (bVar57 >= bVar16) * bVar57) == bVar57
                         ),CONCAT14(-((byte)((bVar56 < bVar15) * bVar15 |
                                            (bVar56 >= bVar15) * bVar56) == bVar56),
                                    CONCAT13(-((byte)((bVar55 < bVar14) * bVar14 |
                                                     (bVar55 >= bVar14) * bVar55) == bVar55),
                                             CONCAT12(-((byte)((bVar54 < bVar13) * bVar13 |
                                                              (bVar54 >= bVar13) * bVar54) == bVar54
                                                       ),CONCAT11(-((byte)((bVar53 < bVar12) *
                                                                           bVar12 | (bVar53 >=
                                                                                    bVar12) * bVar53
                                                                          ) == bVar53),bVar51)))));
          auVar52[6] = -((byte)((bVar58 < bVar17) * bVar17 | (bVar58 >= bVar17) * bVar58) == bVar58)
          ;
          auVar52[7] = -((byte)((bVar19 < bVar18) * bVar18 | (bVar19 >= bVar18) * bVar19) == bVar19)
          ;
          auVar52[8] = -((char)((auVar47[8] != '\0') * auVar47[8]) == '\0');
          auVar52[9] = -((char)((auVar47[9] != '\0') * auVar47[9]) == '\0');
          auVar52[10] = -((char)((auVar47[10] != '\0') * auVar47[10]) == '\0');
          auVar52[0xb] = -((char)((auVar47[0xb] != '\0') * auVar47[0xb]) == '\0');
          auVar52[0xc] = -((char)((auVar47[0xc] != '\0') * auVar47[0xc]) == '\0');
          auVar52[0xd] = -((char)((auVar47[0xd] != '\0') * auVar47[0xd]) == '\0');
          auVar52[0xe] = -((char)((auVar47[0xe] != '\0') * auVar47[0xe]) == '\0');
          auVar52[0xf] = -((char)((auVar47[0xf] != '\0') * auVar47[0xf]) == '\0');
          if ((~bVar51 & 1) != 0) {
            *(byte *)(lVar39 + uVar43) = bVar40;
          }
          auVar49 = auVar52 ^ auVar48;
          auVar59._0_4_ = auVar49._0_4_ << 8;
          auVar59._4_4_ = auVar49._4_4_ << 8;
          auVar59._8_4_ = auVar49._8_4_ << 8;
          auVar59._12_4_ = auVar49._12_4_ << 8;
          if (((auVar49._0_4_ & 0xffffff) >> 8 & 1) != 0) {
            *(byte *)(lVar39 + 1 + uVar43) = bVar40;
          }
          auVar59 = pshuflw(auVar59,auVar52,0x55);
          if (((auVar59._4_2_ ^ 0xffff) & 1) != 0) {
            *(byte *)(lVar39 + 2 + uVar43) = bVar40;
          }
          if ((auVar49._3_2_ & 1) != 0) {
            *(byte *)(lVar39 + 3 + uVar43) = bVar40;
          }
          if ((((ushort)((uint6)auVar52._0_6_ >> 0x20) ^ 0xffff) & 1) != 0) {
            *(byte *)(lVar39 + 4 + uVar43) = bVar40;
          }
          if ((auVar49._0_8_ >> 0x18 & 0x10000) != 0) {
            *(byte *)(lVar39 + 5 + uVar43) = bVar40;
          }
          if ((auVar49._6_2_ & 1) != 0) {
            *(byte *)(lVar39 + 6 + uVar43) = bVar40;
          }
          if ((auVar49._0_8_ >> 8 & 0x1000000000000) != 0) {
            *(byte *)(lVar39 + 7 + uVar43) = bVar40;
          }
          uVar43 = uVar43 + 8;
        } while (uVar46 != uVar43);
        lVar38 = uVar46 + lVar38;
        if (uVar44 == uVar46) goto LAB_1424df8d7;
      }
LAB_1424dfc0c:
      do {
        if (*(byte *)(lVar6 + lVar38) < bVar40) {
          *(byte *)(lVar6 + lVar38) = bVar40;
        }
        lVar38 = lVar38 + 1;
      } while ((int)local_54 != lVar38);
    }
LAB_1424df8d7:
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a4);
    *(uint *)(param_2 + 2) = local_54;
    goto LAB_1424dfa86;
  case 0xd:
    if ((int)param_2[2] < (int)local_54) {
      bVar40 = *(byte *)((longlong)param_2 + 0x24);
      param_4 = param_4 & 0xffffffff;
      do {
        lVar38 = (longlong)(int)param_4;
        uVar44 = lVar38 - 1;
        uVar45 = (uint)*(byte *)(lVar6 + -1 + lVar38);
        if (bVar40 + 3 == uVar45) {
          iVar42 = (int)param_4 + -2;
          pcVar2 = (char *)(lVar6 + lVar38);
          do {
            iVar35 = iVar42;
            param_4 = uVar44 & 0xffffffff;
            pcVar2[-1] = (char)uVar45 + -2;
            uVar45 = (uint)(byte)pcVar2[-2];
            uVar44 = (ulonglong)((int)uVar44 - 1);
            iVar42 = iVar35 + -1;
            pcVar2 = pcVar2 + -1;
          } while (bVar40 + 3 == uVar45);
          lVar38 = ((longlong)iVar35 << 0x20) + 0x100000000;
          pbVar36 = (byte *)(lVar6 + iVar35);
          do {
            lVar38 = lVar38 + -0x100000000;
            param_4 = (ulonglong)((int)param_4 - 1);
            bVar51 = *pbVar36;
            pbVar36 = pbVar36 + -1;
          } while (bVar51 == bVar40);
          uVar44 = lVar38 >> 0x20;
          uVar45 = (uint)*(byte *)(lVar6 + uVar44);
        }
        else {
          param_4 = uVar44 & 0xffffffff;
        }
        *(byte *)(lVar6 + uVar44) = (bVar40 + 2 != uVar45) + bVar40;
      } while ((int)param_2[2] < (int)param_4);
    }
    goto LAB_1424dfa86;
  case 0xe:
    iVar42 = (int)param_2[2];
    if ((int)local_54 <= iVar42) goto LAB_1424dfa86;
    cVar5 = *(char *)((longlong)param_2 + 0x24);
    lVar38 = (longlong)(int)local_54;
    do {
      bVar40 = *(byte *)(lVar6 + -1 + lVar38);
      if ((byte)(cVar5 + 1U) < bVar40) {
        *(byte *)(lVar6 + -1 + lVar38) = bVar40 - 2;
        iVar42 = (int)param_2[2];
      }
      lVar38 = lVar38 + -1;
    } while (iVar42 < lVar38);
  }
switchD_1424ded81_caseD_0:
LAB_1424dfa86:
  if ((cVar4 != '\0') || ((int)uVar34 < (int)local_54)) {
    bVar40 = cVar4 + *(char *)((longlong)param_2 + 0x24);
    if ((int)uVar34 < (int)param_2[4]) {
      if ((int)uVar34 < param_5) {
        lVar38 = *(longlong *)(param_1 + 0x70);
        lVar6 = *(longlong *)(param_1 + 0x78);
        lVar39 = (longlong)(int)uVar34;
        iVar42 = 0;
        do {
          bVar51 = *(byte *)(lVar38 + lVar39);
          iVar42 = iVar42 - (uint)(bVar51 == 0x16);
          if (iVar42 == 0) {
            *(byte *)(lVar6 + lVar39) = bVar40;
          }
          iVar42 = iVar42 + (uint)((bVar51 & 0xfe) == 0x14);
          lVar39 = lVar39 + 1;
        } while (param_5 != lVar39);
      }
    }
    else if ((int)uVar34 < param_5) {
      memset((void *)(lVar6 + (int)uVar34),(uint)bVar40,(ulonglong)(~uVar34 + param_5) + 1);
      return;
    }
  }
  return;
switchD_1424ded81_caseD_1:
  *(uint *)(param_2 + 2) = local_54;
  goto switchD_1424ded81_caseD_0;
}



// FUNCTION 1424dfca0 FUN_1424dfca0 body=214 status=ok
// SIG undefined FUN_1424dfca0(void)

void * FUN_1424dfca0(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  void *_Dst;
  char cVar4;
  
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if ((param_1 == (longlong *)0x0) ||
       ((plVar3 = (longlong *)*param_1, plVar3 != param_1 &&
        ((plVar3 == (longlong *)0x0 || ((longlong *)*plVar3 != plVar3)))))) {
      *param_2 = 0x1b;
    }
    else {
      uVar1 = *(uint *)((longlong)param_1 + 0x14);
      if ((int)uVar1 < 1) {
        *param_2 = 1;
      }
      else {
        uVar2 = *(uint *)((longlong)param_1 + 0xc4);
        if (uVar1 == uVar2) {
          return (void *)param_1[0xf];
        }
        cVar4 = FUN_1424db510(param_1 + 8,param_1 + 4,(char)param_1[0xd],uVar1);
        if (cVar4 != '\0') {
          _Dst = (void *)param_1[8];
          if ((0 < (int)uVar2) && (_Dst != (void *)param_1[0xf])) {
            memcpy(_Dst,(void *)param_1[0xf],(ulonglong)uVar2);
          }
          memset((void *)((longlong)(int)uVar2 + (longlong)_Dst),
                 (uint)*(byte *)((longlong)param_1 + 0x8d),(longlong)(int)(uVar1 - uVar2));
          *(uint *)((longlong)param_1 + 0xc4) = uVar1;
          param_1[0xf] = (longlong)_Dst;
          return _Dst;
        }
        *param_2 = 7;
      }
    }
  }
  return (void *)0x0;
}



// FUNCTION 1424dfd80 FUN_1424dfd80 body=88 status=ok
// SIG undefined FUN_1424dfd80(void)

undefined4 FUN_1424dfd80(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if ((param_1 == (longlong *)0x0) ||
       ((plVar1 = (longlong *)*param_1, plVar1 != param_1 &&
        ((plVar1 == (longlong *)0x0 || ((longlong *)*plVar1 != plVar1)))))) {
      *param_2 = 0x1b;
    }
    else {
      FUN_1424dfde0(param_1);
      if (*param_2 < 1) {
        uVar2 = (undefined4)param_1[0x25];
      }
    }
  }
  return uVar2;
}



// FUNCTION 1424dfde0 FUN_1424dfde0 body=1931 status=ok
// SIG undefined FUN_1424dfde0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424dfde0(longlong param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [14];
  undefined1 auVar12 [12];
  unkbyte10 Var13;
  undefined1 auVar14 [14];
  undefined1 auVar15 [12];
  int *piVar16;
  char cVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  int *piVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  byte bVar29;
  undefined8 *puVar30;
  ushort *puVar31;
  uint uVar32;
  int *piVar33;
  int *piVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  byte bVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar75 [16];
  undefined1 auVar78 [16];
  undefined1 auStack_108 [36];
  uint local_e4;
  ulonglong local_e0;
  undefined8 *local_d8;
  uint local_d0;
  uint local_cc;
  byte *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  int local_98;
  ulonglong local_90;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar60 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar61 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined2 uVar63;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar76 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar77 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (-1 < *(int *)(param_1 + 0x128)) goto LAB_1424dfe32;
  if (*(int *)(param_1 + 0xb8) == 2) {
    uVar22 = *(uint *)(param_1 + 0x14);
    pbVar6 = *(byte **)(param_1 + 0x78);
    uVar5 = *(uint *)(param_1 + 0xc4);
    lVar40 = (longlong)(int)uVar5;
    if (lVar40 < 1) {
      uVar35 = 0;
    }
    else {
      if (uVar5 < 8) {
        uVar25 = 0xfe;
        uVar19 = 0;
        uVar35 = 0;
LAB_1424dfff0:
        do {
          pbVar1 = pbVar6 + uVar19;
          uVar35 = uVar35 + (*pbVar1 != (byte)uVar25);
          uVar19 = uVar19 + 1;
          uVar25 = (uint)*pbVar1;
        } while (uVar5 != uVar19);
      }
      else {
        uVar19 = (ulonglong)(uVar5 & 0xfffffff8);
        bVar41 = 0xfe;
        iVar18 = 0;
        iVar42 = 0;
        iVar43 = 0;
        iVar44 = 0;
        uVar21 = 0;
        iVar45 = 0;
        iVar46 = 0;
        iVar47 = 0;
        iVar48 = 0;
        do {
          iVar3 = *(int *)(pbVar6 + uVar21);
          bVar29 = (byte)((uint)iVar3 >> 0x18);
          auVar64 = ZEXT116(bVar41);
          uVar25 = *(uint *)(pbVar6 + uVar21 + 4);
          bVar41 = (byte)(uVar25 >> 0x18);
          auVar64 = ZEXT416(0) | auVar64 << 0x18;
          auVar49._0_4_ = auVar64._0_4_ >> 0x18;
          auVar49._4_4_ = 0;
          auVar49._8_4_ = auVar64._8_4_ >> 0x18;
          auVar49._12_4_ = auVar64._12_4_ >> 0x18;
          auVar49 = ZEXT416((uint)(iVar3 << 8)) | auVar49;
          auVar64 = ZEXT416(0) | ZEXT116(bVar29) << 0x18;
          auVar65._0_4_ = auVar64._0_4_ >> 0x18;
          auVar65._4_4_ = 0;
          auVar65._8_4_ = auVar64._8_4_ >> 0x18;
          auVar65._12_4_ = auVar64._12_4_ >> 0x18;
          auVar65 = ZEXT416(uVar25 << 8) | auVar65;
          auVar50[0] = -(auVar49[0] == (char)iVar3);
          auVar50[1] = -(auVar49[1] == (char)((uint)iVar3 >> 8));
          auVar50[2] = -(auVar49[2] == (char)((uint)iVar3 >> 0x10));
          auVar50[3] = -(auVar49[3] == bVar29);
          auVar50[4] = 0xff;
          auVar50[5] = 0xff;
          auVar50[6] = 0xff;
          auVar50[7] = 0xff;
          auVar50[8] = -(auVar49[8] == '\0');
          auVar50[9] = -(auVar49[9] == '\0');
          auVar50[10] = -(auVar49[10] == '\0');
          auVar50[0xb] = -(auVar49[0xb] == '\0');
          auVar50[0xc] = -(auVar49[0xc] == '\0');
          auVar50[0xd] = -(auVar49[0xd] == '\0');
          auVar50[0xe] = -(auVar49[0xe] == '\0');
          auVar50[0xf] = -(auVar49[0xf] == '\0');
          auVar64._8_4_ = 0xffffffff;
          auVar64._0_8_ = 0xffffffffffffffff;
          auVar64._12_4_ = 0xffffffff;
          auVar50 = auVar50 ^ auVar64;
          auVar58._0_14_ = auVar50._0_14_;
          auVar58[0xe] = auVar50[7];
          auVar58[0xf] = auVar50[7];
          auVar57._14_2_ = auVar58._14_2_;
          auVar57._0_13_ = auVar50._0_13_;
          auVar57[0xd] = auVar50[6];
          auVar56._13_3_ = auVar57._13_3_;
          auVar56._0_12_ = auVar50._0_12_;
          auVar56[0xc] = auVar50[6];
          auVar55._12_4_ = auVar56._12_4_;
          auVar55._0_11_ = auVar50._0_11_;
          auVar55[0xb] = auVar50[5];
          auVar54._11_5_ = auVar55._11_5_;
          auVar54._0_10_ = auVar50._0_10_;
          auVar54[10] = auVar50[5];
          auVar53._10_6_ = auVar54._10_6_;
          auVar53._0_9_ = auVar50._0_9_;
          auVar53[9] = auVar50[4];
          auVar52._9_7_ = auVar53._9_7_;
          auVar52._0_8_ = auVar50._0_8_;
          auVar52[8] = auVar50[4];
          Var13 = CONCAT91(CONCAT81(auVar52._8_8_,auVar50[3]),auVar50[3]);
          auVar12._2_10_ = Var13;
          auVar12[1] = auVar50[2];
          auVar12[0] = auVar50[2];
          auVar11._2_12_ = auVar12;
          auVar11[1] = auVar50[1];
          auVar11[0] = auVar50[1];
          auVar51._0_2_ = CONCAT11(auVar50[0],auVar50[0]);
          auVar51._2_14_ = auVar11;
          uVar63 = (undefined2)Var13;
          auVar61._0_12_ = auVar51._0_12_;
          auVar61._12_2_ = uVar63;
          auVar61._14_2_ = uVar63;
          auVar60._12_4_ = auVar61._12_4_;
          auVar60._0_10_ = auVar51._0_10_;
          auVar60._10_2_ = auVar12._0_2_;
          auVar59._10_6_ = auVar60._10_6_;
          auVar59._0_8_ = auVar51._0_8_;
          auVar59._8_2_ = auVar12._0_2_;
          auVar62._8_8_ = auVar59._8_8_;
          auVar62._6_2_ = auVar11._0_2_;
          auVar62._4_2_ = auVar11._0_2_;
          auVar62._2_2_ = auVar51._0_2_;
          auVar62._0_2_ = auVar51._0_2_;
          auVar62 = auVar62 & _DAT_149931e70;
          iVar18 = iVar18 + auVar62._0_4_;
          iVar42 = iVar42 + auVar62._4_4_;
          iVar43 = iVar43 + auVar62._8_4_;
          iVar44 = iVar44 + auVar62._12_4_;
          auVar66[0] = -(auVar65[0] == (char)uVar25);
          auVar66[1] = -(auVar65[1] == (char)(uVar25 >> 8));
          auVar66[2] = -(auVar65[2] == (char)(uVar25 >> 0x10));
          auVar66[3] = -(auVar65[3] == bVar41);
          auVar66[4] = 0xff;
          auVar66[5] = 0xff;
          auVar66[6] = 0xff;
          auVar66[7] = 0xff;
          auVar66[8] = -(auVar65[8] == '\0');
          auVar66[9] = -(auVar65[9] == '\0');
          auVar66[10] = -(auVar65[10] == '\0');
          auVar66[0xb] = -(auVar65[0xb] == '\0');
          auVar66[0xc] = -(auVar65[0xc] == '\0');
          auVar66[0xd] = -(auVar65[0xd] == '\0');
          auVar66[0xe] = -(auVar65[0xe] == '\0');
          auVar66[0xf] = -(auVar65[0xf] == '\0');
          auVar10._8_4_ = 0xffffffff;
          auVar10._0_8_ = 0xffffffffffffffff;
          auVar10._12_4_ = 0xffffffff;
          auVar66 = auVar66 ^ auVar10;
          auVar74._0_14_ = auVar66._0_14_;
          auVar74[0xe] = auVar66[7];
          auVar74[0xf] = auVar66[7];
          auVar73._14_2_ = auVar74._14_2_;
          auVar73._0_13_ = auVar66._0_13_;
          auVar73[0xd] = auVar66[6];
          auVar72._13_3_ = auVar73._13_3_;
          auVar72._0_12_ = auVar66._0_12_;
          auVar72[0xc] = auVar66[6];
          auVar71._12_4_ = auVar72._12_4_;
          auVar71._0_11_ = auVar66._0_11_;
          auVar71[0xb] = auVar66[5];
          auVar70._11_5_ = auVar71._11_5_;
          auVar70._0_10_ = auVar66._0_10_;
          auVar70[10] = auVar66[5];
          auVar69._10_6_ = auVar70._10_6_;
          auVar69._0_9_ = auVar66._0_9_;
          auVar69[9] = auVar66[4];
          auVar68._9_7_ = auVar69._9_7_;
          auVar68._0_8_ = auVar66._0_8_;
          auVar68[8] = auVar66[4];
          Var13 = CONCAT91(CONCAT81(auVar68._8_8_,auVar66[3]),auVar66[3]);
          auVar15._2_10_ = Var13;
          auVar15[1] = auVar66[2];
          auVar15[0] = auVar66[2];
          auVar14._2_12_ = auVar15;
          auVar14[1] = auVar66[1];
          auVar14[0] = auVar66[1];
          auVar67._0_2_ = CONCAT11(auVar66[0],auVar66[0]);
          auVar67._2_14_ = auVar14;
          uVar63 = (undefined2)Var13;
          auVar77._0_12_ = auVar67._0_12_;
          auVar77._12_2_ = uVar63;
          auVar77._14_2_ = uVar63;
          auVar76._12_4_ = auVar77._12_4_;
          auVar76._0_10_ = auVar67._0_10_;
          auVar76._10_2_ = auVar15._0_2_;
          auVar75._10_6_ = auVar76._10_6_;
          auVar75._0_8_ = auVar67._0_8_;
          auVar75._8_2_ = auVar15._0_2_;
          auVar78._8_8_ = auVar75._8_8_;
          auVar78._6_2_ = auVar14._0_2_;
          auVar78._4_2_ = auVar14._0_2_;
          auVar78._2_2_ = auVar67._0_2_;
          auVar78._0_2_ = auVar67._0_2_;
          auVar78 = auVar78 & _DAT_149931e70;
          iVar45 = iVar45 + auVar78._0_4_;
          iVar46 = iVar46 + auVar78._4_4_;
          iVar47 = iVar47 + auVar78._8_4_;
          iVar48 = iVar48 + auVar78._12_4_;
          uVar21 = uVar21 + 8;
        } while (uVar19 != uVar21);
        uVar35 = iVar48 + iVar44 + iVar46 + iVar42 + iVar47 + iVar43 + iVar45 + iVar18;
        if (uVar19 != uVar5) {
          uVar25 = uVar25 >> 0x18;
          goto LAB_1424dfff0;
        }
      }
      if ((uVar35 == 1) && (uVar22 == uVar5)) {
        bVar41 = *pbVar6;
        *(longlong *)(param_1 + 0x130) = param_1 + 0x138;
        *(undefined4 *)(param_1 + 0x128) = 1;
        *(uint *)(param_1 + 0x138) = (uint)bVar41 << 0x1f;
        *(uint *)(param_1 + 0x13c) = uVar22;
        *(undefined4 *)(param_1 + 0x140) = 0;
        goto LAB_1424e046f;
      }
    }
    uVar25 = ((int)uVar5 < (int)uVar22) + uVar35;
    local_d0 = uVar35;
    cVar17 = FUN_1424db510((longlong *)(param_1 + 0x58));
    if (cVar17 == '\0') goto LAB_1424dfe32;
    puVar7 = *(undefined8 **)(param_1 + 0x58);
    uVar27 = 0x7e;
    uVar35 = 0;
    uVar19 = 0;
    uVar32 = 0;
    do {
      lVar38 = (longlong)(int)uVar32;
      bVar41 = pbVar6[lVar38];
      if (bVar41 < (byte)uVar27) {
        uVar27 = (uint)bVar41;
      }
      if ((byte)uVar35 < bVar41) {
        uVar35 = (uint)bVar41;
      }
      uVar36 = uVar32;
      uVar26 = uVar32 + 1;
      if ((int)(uVar32 + 1) < (int)uVar5) {
        uVar26 = uVar5;
      }
      do {
        lVar38 = lVar38 + 1;
        uVar37 = uVar26;
        if (lVar40 <= lVar38) break;
        uVar37 = uVar36 + 1;
        uVar36 = uVar37;
      } while (pbVar6[lVar38] == bVar41);
      local_c0 = uVar19 + 1;
      *(uint *)((longlong)puVar7 + uVar19 * 0xc) = uVar32;
      *(uint *)((longlong)puVar7 + uVar19 * 0xc + 4) = uVar37 - uVar32;
      *(undefined4 *)((longlong)puVar7 + uVar19 * 0xc + 8) = 0;
      uVar19 = local_c0;
      uVar32 = uVar37;
    } while (lVar38 < lVar40);
    if (uVar22 - uVar5 != 0 && (int)uVar5 <= (int)uVar22) {
      *(uint *)((longlong)puVar7 + (local_c0 & 0xffffffff) * 0xc) = uVar5;
      *(uint *)((longlong)puVar7 + (local_c0 & 0xffffffff) * 0xc + 4) = uVar22 - uVar5;
      if (*(byte *)(param_1 + 0x8d) < (byte)uVar27) {
        uVar27 = (uint)*(byte *)(param_1 + 0x8d);
      }
    }
    *(undefined8 **)(param_1 + 0x130) = puVar7;
    *(uint *)(param_1 + 0x128) = uVar25;
    bVar41 = (byte)uVar27;
    if ((bVar41 | 1) < (byte)uVar35) {
      uVar32 = uVar25 - (*(int *)(param_1 + 0xc4) < *(int *)(param_1 + 0x14));
      bVar29 = (byte)uVar35 - 1;
      if (bVar41 < bVar29) {
        lVar40 = *(longlong *)(param_1 + 0x78);
        local_b8 = (longlong)puVar7 + 0xc;
        do {
          if (0 < (int)uVar32) {
            iVar18 = 0;
            do {
              lVar24 = (longlong)iVar18;
              piVar34 = (int *)((longlong)puVar7 + lVar24 * 0xc);
              iVar18 = -iVar18;
              piVar23 = (int *)(lVar24 * 0xc + local_b8);
              lVar38 = lVar24 + -1;
              while (piVar16 = piVar34, lVar39 = lVar24, *(byte *)(lVar40 + *piVar34) < bVar29) {
                lVar24 = lVar24 + 1;
                piVar34 = piVar34 + 3;
                iVar18 = iVar18 + -1;
                piVar23 = piVar23 + 3;
                lVar38 = lVar38 + 1;
                if ((int)uVar32 <= lVar24) goto LAB_1424e01d0;
              }
              do {
                iVar42 = iVar18;
                piVar33 = piVar16;
                lVar28 = lVar38;
                if ((longlong)(int)uVar32 <= lVar39 + 1) break;
                iVar43 = *piVar23;
                piVar23 = piVar23 + 3;
                lVar38 = lVar28 + 1;
                piVar16 = piVar33 + 3;
                lVar39 = lVar39 + 1;
                iVar18 = iVar42 + -1;
              } while (bVar29 <= *(byte *)(lVar40 + iVar43));
              if ((int)lVar24 < -iVar42) {
                do {
                  local_98 = piVar34[2];
                  local_a0 = *(undefined8 *)piVar34;
                  piVar34[2] = piVar33[2];
                  *(undefined8 *)piVar34 = *(undefined8 *)piVar33;
                  piVar33[2] = local_98;
                  *(undefined8 *)piVar33 = local_a0;
                  lVar24 = lVar24 + 1;
                  piVar34 = piVar34 + 3;
                  piVar33 = piVar33 + -3;
                  bVar9 = lVar24 < lVar28;
                  lVar28 = lVar28 + -1;
                } while (bVar9);
              }
            } while ((uVar32 + iVar42 != 1) && (iVar18 = 2 - iVar42, iVar18 < (int)uVar32));
          }
LAB_1424e01d0:
          bVar29 = bVar29 - 1;
          local_cc = uVar27;
          local_b0 = (ulonglong)uVar32;
          local_a8 = param_1;
        } while (bVar41 < bVar29);
      }
      local_d8 = puVar7;
      local_c8 = pbVar6;
      if (((uVar27 & 1) != 0) &&
         (uVar32 = uVar32 - (*(int *)(param_1 + 0xc4) == *(int *)(param_1 + 0x14)),
         uVar19 = (ulonglong)uVar32, 0 < (int)uVar32)) {
        puVar20 = (undefined8 *)((longlong)puVar7 + uVar19 * 0xc);
        lVar40 = 0;
        puVar30 = puVar7;
        do {
          uVar19 = uVar19 - 1;
          local_98 = *(int *)(puVar30 + 1);
          local_a0 = *puVar30;
          *(undefined4 *)(puVar30 + 1) = *(undefined4 *)(puVar20 + 1);
          *puVar30 = *puVar20;
          *(int *)(puVar20 + 1) = local_98;
          *puVar20 = local_a0;
          lVar40 = lVar40 + 1;
          puVar30 = (undefined8 *)((longlong)puVar30 + 0xc);
          puVar20 = (undefined8 *)((longlong)puVar20 + -0xc);
        } while (lVar40 < (longlong)uVar19);
      }
    }
    if (uVar25 != 0) {
      if ((ulonglong)((int)uVar5 < (int)uVar22) + (ulonglong)local_d0 == 1) {
        uVar19 = 0;
        iVar18 = 0;
      }
      else {
        piVar34 = (int *)(puVar7 + 2);
        uVar19 = 0;
        iVar18 = 0;
        do {
          piVar34[-4] = (uint)pbVar6[piVar34[-4]] << 0x1f | piVar34[-4];
          iVar42 = piVar34[-3];
          piVar34[-3] = iVar18 + iVar42;
          piVar34[-1] = (uint)pbVar6[piVar34[-1]] << 0x1f | piVar34[-1];
          iVar18 = iVar18 + iVar42 + *piVar34;
          *piVar34 = iVar18;
          uVar19 = uVar19 + 2;
          piVar34 = piVar34 + 6;
        } while ((uVar25 & 0xfffffffe) != uVar19);
      }
      if ((uVar25 & 1) != 0) {
        uVar5 = *(uint *)((longlong)puVar7 + uVar19 * 0xc);
        *(uint *)((longlong)puVar7 + uVar19 * 0xc) = (uint)pbVar6[(int)uVar5] << 0x1f | uVar5;
        piVar34 = (int *)((longlong)puVar7 + uVar19 * 0xc + 4);
        *piVar34 = *piVar34 + iVar18;
      }
    }
    local_e4 = uVar22;
    local_e0 = (ulonglong)uVar25;
    if ((uint)local_c0 < uVar25) {
      uVar19 = 0;
      if ((*(byte *)(param_1 + 0x8d) & 1) == 0) {
        uVar19 = local_c0 & 0xffffffff;
      }
      puVar2 = (uint *)((longlong)puVar7 + uVar19 * 0xc);
      *puVar2 = *puVar2 | (uint)*(byte *)(param_1 + 0x8d) << 0x1f;
    }
  }
  else {
    *(longlong *)(param_1 + 0x130) = param_1 + 0x138;
    *(undefined4 *)(param_1 + 0x128) = 1;
    *(uint *)(param_1 + 0x138) = (uint)*(byte *)(param_1 + 0x8d) << 0x1f;
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
LAB_1424e046f:
  if (0 < (int)*(uint *)(param_1 + 0x1a4)) {
    piVar23 = *(int **)(param_1 + 0x1b0);
    piVar34 = piVar23 + (ulonglong)*(uint *)(param_1 + 0x1a4) * 2;
    do {
      if ((int)*(uint *)(param_1 + 0x128) < 1) goto LAB_1424e05d3;
      lVar40 = *(longlong *)(param_1 + 0x130);
      lVar38 = 0;
      iVar18 = 0;
      while( true ) {
        iVar42 = *(int *)(lVar40 + 4 + lVar38);
        uVar22 = *(uint *)(lVar40 + lVar38) & 0x7fffffff;
        if (((int)uVar22 <= *piVar23) && (*piVar23 < (int)((iVar42 - iVar18) + uVar22))) break;
        lVar38 = lVar38 + 0xc;
        iVar18 = iVar42;
        if ((ulonglong)*(uint *)(param_1 + 0x128) * 0xc == lVar38) goto LAB_1424e05d3;
      }
      puVar2 = (uint *)(lVar40 + 8 + lVar38);
      *puVar2 = *puVar2 | piVar23[1];
      piVar23 = piVar23 + 2;
    } while (piVar23 < piVar34);
  }
  if ((0 < *(int *)(param_1 + 0x1b8)) && (iVar18 = *(int *)(param_1 + 0x14), 0 < (longlong)iVar18))
  {
    puVar8 = *(ushort **)(param_1 + 8);
    puVar31 = puVar8;
    do {
      uVar4 = *puVar31;
      if ((((uVar4 & 0xfffffffc) == 0x200c) || (uVar4 - 0x202a < 5)) || (uVar4 - 0x2066 < 4)) {
        if ((int)*(uint *)(param_1 + 0x128) < 1) {
LAB_1424e05d3:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar40 = *(longlong *)(param_1 + 0x130);
        lVar38 = 0;
        iVar42 = 0;
        while( true ) {
          iVar43 = *(int *)(lVar40 + 4 + lVar38);
          uVar22 = *(uint *)(lVar40 + lVar38) & 0x7fffffff;
          iVar44 = (int)((ulonglong)((longlong)puVar31 - (longlong)puVar8) >> 1);
          if (((int)uVar22 <= iVar44) && (iVar44 < (int)((iVar43 - iVar42) + uVar22))) break;
          lVar38 = lVar38 + 0xc;
          iVar42 = iVar43;
          if ((ulonglong)*(uint *)(param_1 + 0x128) * 0xc == lVar38) goto LAB_1424e05d3;
        }
        piVar34 = (int *)(lVar40 + 8 + lVar38);
        *piVar34 = *piVar34 + -1;
      }
      puVar31 = puVar31 + 1;
    } while (puVar31 < puVar8 + iVar18);
  }
LAB_1424dfe32:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_108);
}



// FUNCTION 1424e05e0 FUN_1424e05e0 body=154 status=ok
// SIG undefined FUN_1424e05e0(void)

uint FUN_1424e05e0(longlong *param_1,uint param_2,uint *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  if ((param_1 != (longlong *)0x0) &&
     ((plVar1 = (longlong *)*param_1, uVar5 = uVar4, plVar1 == param_1 ||
      ((plVar1 != (longlong *)0x0 && ((longlong *)*plVar1 == plVar1)))))) {
    FUN_1424dfde0(param_1);
    if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0x25])) {
      uVar5 = *(uint *)(param_1[0x26] + (ulonglong)param_2 * 0xc);
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar5 & 0x7fffffff;
      }
      if (param_4 != (int *)0x0) {
        lVar2 = param_1[0x26];
        if (param_2 == 0) {
          iVar3 = *(int *)(lVar2 + 4);
        }
        else {
          iVar3 = *(int *)(lVar2 + 4 + (ulonglong)param_2 * 0xc) -
                  *(int *)(lVar2 + 4 + (ulonglong)(param_2 - 1) * 0xc);
        }
        *param_4 = iVar3;
      }
      uVar5 = uVar5 >> 0x1f;
    }
  }
  return uVar5;
}



// FUNCTION 1424e0680 FUN_1424e0680 body=1880 status=ok
// SIG undefined FUN_1424e0680(void)

void FUN_1424e0680(longlong *param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  
  if ((param_3 != (int *)0x0) && (*param_3 < 1)) {
    if (param_2 == (uint *)0x0) {
      iVar20 = 1;
    }
    else {
      iVar20 = 0x1b;
      if ((param_1 != (longlong *)0x0) &&
         ((plVar3 = (longlong *)*param_1, plVar3 == param_1 ||
          ((plVar3 != (longlong *)0x0 && ((longlong *)*plVar3 == plVar3)))))) {
        FUN_1424dfde0(param_1);
        if (0 < *param_3) {
          return;
        }
        if ((int)param_1[3] < 1) {
          return;
        }
        if (0 < (int)param_1[0x25]) {
          puVar8 = (uint *)param_1[0x26];
          puVar15 = puVar8 + (longlong)(int)param_1[0x25] * 3;
          puVar17 = param_2;
          uVar14 = 0;
          do {
            uVar11 = *puVar8;
            uVar25 = puVar8[1];
            if ((int)uVar11 < 0) {
              uVar35 = (uVar25 - uVar14) + (uVar11 & 0x7fffffff);
              uVar23 = uVar14 + 1;
              uVar11 = uVar23;
              if ((int)uVar23 < (int)uVar25) {
                uVar11 = uVar25;
              }
              uVar11 = uVar11 + ~uVar14;
              if (uVar11 < 7) {
LAB_1424e0900:
                do {
                  *puVar17 = uVar35 - 1;
                  puVar16 = puVar17 + 1;
                  uVar14 = uVar14 + 1;
                  puVar17 = puVar16;
                  uVar35 = uVar35 - 1;
                } while ((int)uVar14 < (int)uVar25);
              }
              else {
                uVar9 = (ulonglong)uVar11 + 1;
                uVar13 = uVar9 & 0x1fffffff8;
                puVar16 = puVar17 + uVar13;
                uVar14 = uVar14 + (int)uVar13;
                uVar11 = uVar35 - (int)uVar13;
                iVar20 = uVar35 - 1;
                iVar28 = uVar35 - 2;
                iVar29 = uVar35 - 3;
                uVar21 = 0;
                do {
                  puVar1 = puVar17 + uVar21;
                  *puVar1 = uVar35 - 1;
                  puVar1[1] = iVar20 - 1;
                  puVar1[2] = iVar28 - 1;
                  puVar1[3] = iVar29 - 1;
                  puVar1 = puVar17 + uVar21 + 4;
                  *puVar1 = uVar35 - 5;
                  puVar1[1] = iVar20 - 5;
                  puVar1[2] = iVar28 - 5;
                  puVar1[3] = iVar29 - 5;
                  uVar21 = uVar21 + 8;
                  uVar35 = uVar35 - 8;
                  iVar20 = iVar20 + -8;
                  iVar28 = iVar28 + -8;
                  iVar29 = iVar29 + -8;
                } while (uVar13 != uVar21);
                puVar17 = puVar16;
                uVar35 = uVar11;
                if (uVar9 != uVar13) goto LAB_1424e0900;
              }
              if ((int)uVar23 < (int)uVar25) {
                uVar23 = uVar25;
              }
            }
            else {
              uVar23 = uVar14 + 1;
              if ((int)(uVar14 + 1) < (int)uVar25) {
                uVar23 = uVar25;
              }
              uVar25 = ~uVar14 + uVar23;
              puVar16 = puVar17;
              if (6 < uVar25) {
                uVar13 = (ulonglong)uVar25 + 1;
                uVar9 = uVar13 & 0x1fffffff8;
                puVar16 = puVar17 + uVar9;
                uVar14 = uVar14 + (int)uVar9;
                uVar25 = uVar11 + (int)uVar9;
                uVar35 = uVar11 + 1;
                uVar36 = uVar11 + 2;
                uVar37 = uVar11 + 3;
                uVar21 = 0;
                do {
                  puVar1 = puVar17 + uVar21;
                  *puVar1 = uVar11;
                  puVar1[1] = uVar35;
                  puVar1[2] = uVar36;
                  puVar1[3] = uVar37;
                  puVar1 = puVar17 + uVar21 + 4;
                  *puVar1 = uVar11 + 4;
                  puVar1[1] = uVar35 + 4;
                  puVar1[2] = uVar36 + 4;
                  puVar1[3] = uVar37 + 4;
                  uVar21 = uVar21 + 8;
                  uVar11 = uVar11 + 8;
                  uVar35 = uVar35 + 8;
                  uVar36 = uVar36 + 8;
                  uVar37 = uVar37 + 8;
                } while (uVar9 != uVar21);
                uVar11 = uVar25;
                if (uVar13 == uVar9) goto LAB_1424e079f;
              }
              iVar20 = uVar23 - uVar14;
              do {
                *puVar16 = uVar11;
                puVar16 = puVar16 + 1;
                uVar11 = uVar11 + 1;
                iVar20 = iVar20 + -1;
              } while (iVar20 != 0);
            }
LAB_1424e079f:
            puVar8 = puVar8 + 3;
            puVar17 = puVar16;
            uVar14 = uVar23;
          } while (puVar8 < puVar15);
        }
        if (*(int *)((longlong)param_1 + 0x1a4) < 1) {
          if ((int)param_1[0x37] < 1) {
            return;
          }
          uVar14 = *(uint *)(param_1 + 0x25);
          if ((int)uVar14 < 1) {
            return;
          }
          lVar4 = param_1[0x26];
          uVar21 = 0;
          uVar9 = 0;
          uVar11 = 0;
          do {
            uVar25 = *(uint *)(lVar4 + 4 + uVar21 * 0xc);
            iVar20 = *(int *)(lVar4 + 8 + uVar21 * 0xc);
            if ((iVar20 != 0) || (uVar13 = (ulonglong)uVar25, (uint)uVar9 != uVar11)) {
              uVar13 = uVar9;
              if (iVar20 == 0) {
                if ((int)uVar11 < (int)uVar25) {
                  uVar24 = (ulonglong)(int)uVar25;
                  uVar19 = (ulonglong)(int)(uint)uVar9;
                  uVar26 = (ulonglong)(int)uVar11;
                  uVar27 = uVar24 - uVar26;
                  uVar9 = uVar26;
                  uVar13 = uVar19;
                  if ((0xb < uVar27) && (0x1f < uVar19 * 4 + uVar26 * -4)) {
                    uVar22 = uVar27 & 0xfffffffffffffff8;
                    uVar9 = uVar26 + uVar22;
                    uVar13 = uVar19 + uVar22;
                    uVar12 = 0;
                    do {
                      uVar5 = *(undefined8 *)(param_2 + uVar26 + uVar12 + 2);
                      uVar6 = *(undefined8 *)(param_2 + uVar26 + uVar12 + 4);
                      uVar7 = *(undefined8 *)(param_2 + uVar26 + uVar12 + 4 + 2);
                      *(undefined8 *)(param_2 + uVar19 + uVar12) =
                           *(undefined8 *)(param_2 + uVar26 + uVar12);
                      *(undefined8 *)(param_2 + uVar19 + uVar12 + 2) = uVar5;
                      *(undefined8 *)(param_2 + uVar19 + uVar12 + 4) = uVar6;
                      *(undefined8 *)(param_2 + uVar19 + uVar12 + 4 + 2) = uVar7;
                      uVar12 = uVar12 + 8;
                    } while (uVar22 != uVar12);
                    if (uVar27 == uVar22) goto LAB_1424e097b;
                  }
                  uVar11 = uVar25 - (int)uVar9 & 3;
                  uVar27 = uVar9;
                  if (uVar11 != 0) {
                    lVar10 = 0;
                    puVar15 = param_2;
                    do {
                      puVar15[uVar13] = puVar15[uVar9];
                      lVar10 = lVar10 + -1;
                      puVar15 = puVar15 + 1;
                    } while (-lVar10 != (ulonglong)uVar11);
                    uVar13 = uVar13 - lVar10;
                    uVar27 = uVar9 - lVar10;
                  }
                  if (2 < ~uVar9 + uVar24) {
                    do {
                      param_2[uVar13] = param_2[uVar27];
                      param_2[uVar13 + 1] = param_2[uVar27 + 1];
                      param_2[uVar13 + 2] = param_2[uVar27 + 2];
                      param_2[uVar13 + 3] = param_2[uVar27 + 3];
                      uVar13 = uVar13 + 4;
                      uVar27 = uVar27 + 4;
                    } while (uVar24 != uVar27);
                  }
                }
              }
              else {
                iVar20 = uVar25 - uVar11;
                if (0 < iVar20) {
                  uVar11 = *(uint *)(lVar4 + uVar21 * 0xc);
                  uVar23 = uVar11 & 0x7fffffff;
                  iVar28 = uVar23 - 1;
                  do {
                    uVar35 = iVar28 + iVar20;
                    if (-1 < (int)uVar11) {
                      uVar35 = uVar23;
                    }
                    uVar2 = *(ushort *)(param_1[1] + (longlong)(int)uVar35 * 2);
                    if ((((uVar2 & 0xfffffffc) != 0x200c) && (4 < uVar2 - 0x202a)) &&
                       (3 < uVar2 - 0x2066)) {
                      iVar29 = (int)uVar9;
                      uVar9 = (ulonglong)(iVar29 + 1);
                      param_2[iVar29] = uVar35;
                    }
                    uVar23 = uVar23 + 1;
                    iVar20 = iVar20 + -1;
                    uVar13 = uVar9;
                  } while (iVar20 != 0);
                }
              }
            }
LAB_1424e097b:
            uVar21 = uVar21 + 1;
            uVar9 = uVar13 & 0xffffffff;
            uVar11 = uVar25;
            if (uVar21 == uVar14) {
              return;
            }
          } while( true );
        }
        uVar14 = *(uint *)(param_1 + 0x25);
        uVar9 = (ulonglong)uVar14;
        if ((int)uVar14 < 1) {
          return;
        }
        lVar4 = param_1[0x26];
        if (uVar14 < 9) {
          lVar18 = 0;
          iVar20 = 0;
        }
        else {
          uVar21 = 8;
          if ((uVar14 & 7) != 0) {
            uVar21 = (ulonglong)(uVar14 & 7);
          }
          lVar18 = uVar9 - uVar21;
          puVar15 = (uint *)(lVar4 + 0x5c);
          iVar31 = 0;
          iVar32 = 0;
          iVar33 = 0;
          iVar34 = 0;
          iVar20 = 0;
          iVar28 = 0;
          iVar29 = 0;
          iVar30 = 0;
          lVar10 = lVar18;
          do {
            iVar31 = iVar31 + (uint)((puVar15[-0x15] & 5) != 0) + (uint)((puVar15[-0x15] & 10) != 0)
            ;
            iVar32 = iVar32 + (uint)((puVar15[-0x12] & 5) != 0) + (uint)((puVar15[-0x12] & 10) != 0)
            ;
            iVar33 = iVar33 + (uint)((puVar15[-0xf] & 5) != 0) + (uint)((puVar15[-0xf] & 10) != 0);
            iVar34 = iVar34 + (uint)((puVar15[-0xc] & 5) != 0) + (uint)((puVar15[-0xc] & 10) != 0);
            iVar20 = iVar20 + (uint)((puVar15[-9] & 5) != 0) + (uint)((puVar15[-9] & 10) != 0);
            iVar28 = iVar28 + (uint)((puVar15[-6] & 5) != 0) + (uint)((puVar15[-6] & 10) != 0);
            iVar29 = iVar29 + (uint)((puVar15[-3] & 5) != 0) + (uint)((puVar15[-3] & 10) != 0);
            iVar30 = iVar30 + (uint)((*puVar15 & 5) != 0) + (uint)((*puVar15 & 10) != 0);
            puVar15 = puVar15 + 0x18;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
          iVar20 = iVar30 + iVar34 + iVar28 + iVar32 + iVar29 + iVar33 + iVar20 + iVar31;
        }
        puVar15 = (uint *)(lVar4 + lVar18 * 0xc + 8);
        lVar18 = uVar9 - lVar18;
        do {
          iVar20 = ((iVar20 - (uint)((*puVar15 & 5) == 0)) + 2) - (uint)((*puVar15 & 10) == 0);
          puVar15 = puVar15 + 3;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        if ((int)uVar14 < 1) {
          return;
        }
        if (iVar20 < 1) {
          return;
        }
        uVar21 = (ulonglong)*(uint *)(param_1 + 3);
        do {
          uVar13 = uVar9 - 1 & 0xffffffff;
          uVar14 = *(uint *)(lVar4 + 8 + uVar13 * 0xc);
          if ((uVar14 & 10) != 0) {
            iVar28 = (int)uVar21;
            uVar21 = (ulonglong)(iVar28 - 1);
            param_2[(longlong)iVar28 + -1] = 0xffffffff;
            iVar20 = iVar20 + -1;
          }
          iVar28 = 0;
          if (1 < uVar9) {
            iVar28 = *(int *)(lVar4 + 4 + (ulonglong)((int)uVar9 - 2) * 0xc);
          }
          iVar29 = *(int *)(lVar4 + 4 + uVar13 * 0xc);
          lVar10 = (longlong)iVar29;
          if ((iVar28 < iVar29) && (iVar20 != 0)) {
            uVar13 = (ulonglong)(int)uVar21;
            uVar24 = (ulonglong)iVar28;
            uVar27 = lVar10 - uVar24;
            if (0x2b < uVar27) {
              uVar21 = ~uVar24 + lVar10;
              puVar15 = param_2 + (uVar13 - 1);
              if (((puVar15 + -uVar21 <= puVar15) &&
                  (puVar8 = param_2 + lVar10 + -1, puVar8 + -uVar21 <= puVar8)) &&
                 ((uVar21 >> 0x3e == 0 && (0x1f < (ulonglong)((longlong)puVar8 - (longlong)puVar15))
                  ))) {
                uVar19 = uVar27 & 0xfffffffffffffff8;
                uVar21 = uVar13 - uVar19;
                lVar18 = 0;
                do {
                  uVar5 = *(undefined8 *)(param_2 + lVar10 + lVar18 + -8);
                  uVar6 = *(undefined8 *)(param_2 + lVar10 + lVar18 + -8 + 2);
                  uVar7 = *(undefined8 *)(param_2 + lVar10 + lVar18 + -4 + 2);
                  *(undefined8 *)(param_2 + uVar13 + lVar18 + -4) =
                       *(undefined8 *)(param_2 + lVar10 + lVar18 + -4);
                  *(undefined8 *)(param_2 + uVar13 + lVar18 + -4 + 2) = uVar7;
                  *(undefined8 *)(param_2 + uVar13 + lVar18 + -8) = uVar5;
                  *(undefined8 *)(param_2 + uVar13 + lVar18 + -8 + 2) = uVar6;
                  lVar18 = lVar18 + -8;
                } while (-lVar18 != uVar19);
                lVar10 = lVar10 - uVar19;
                uVar13 = uVar21;
                if (uVar27 == uVar19) goto LAB_1424e0db3;
              }
            }
            do {
              lVar18 = lVar10 + -1;
              param_2[uVar13 - 1] = param_2[lVar10 + -1];
              uVar21 = uVar13 - 1;
              lVar10 = lVar18;
              uVar13 = uVar21;
            } while ((longlong)uVar24 < lVar18);
          }
LAB_1424e0db3:
          if ((uVar14 & 5) != 0) {
            iVar28 = (int)uVar21;
            uVar21 = (ulonglong)(iVar28 - 1);
            param_2[(longlong)iVar28 + -1] = 0xffffffff;
            iVar20 = iVar20 + -1;
          }
          if ((longlong)uVar9 < 2) {
            return;
          }
          uVar9 = uVar9 - 1;
          if (iVar20 < 1) {
            return;
          }
        } while( true );
      }
    }
    *param_3 = iVar20;
  }
  return;
}



// FUNCTION 1424e0df0 FUN_1424e0df0 body=27 status=ok
// SIG undefined FUN_1424e0df0(void)

undefined8 FUN_1424e0df0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    uVar1 = FUN_14250bf60(0,param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1424e0e10 FUN_1424e0e10 body=782 status=ok
// SIG undefined FUN_1424e0e10(void)

void FUN_1424e0e10(undefined8 *param_1,void *param_2,uint *param_3,int *param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined4 *puVar13;
  void *_Dst;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 *local_e0;
  undefined4 *local_d8;
  undefined8 local_c8;
  void *pvStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  void *pvStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  pvStack_80 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_88 = 0x10038;
  pvStack_c0 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  local_c8 = 0x10038;
  if ((param_4 == (int *)0x0) || (0 < *param_4)) goto LAB_1424e0ea0;
  if (param_1 == (undefined8 *)0x0) {
    *param_4 = 1;
    goto LAB_1424e0ea0;
  }
  pcVar1 = *(code **)(*(longlong *)(param_1[6] + 0x20) + 0x70);
  if (pcVar1 == (code *)0x0) {
    local_40 = 0x120;
    if (param_3 != (uint *)0x0) goto LAB_1424e0f0d;
LAB_1424e0f45:
    local_3c = 1;
    param_3 = &local_3c;
  }
  else {
    local_40 = 0;
    (*pcVar1)(param_1,0,&local_40,param_4);
    if (0 < *param_4) goto LAB_1424e0ea0;
    if (param_3 == (uint *)0x0) goto LAB_1424e0f45;
LAB_1424e0f0d:
    local_3c = *param_3;
    if ((int)local_3c < 1) {
      *param_3 = local_40;
      goto LAB_1424e0ea0;
    }
  }
  if (((ulonglong)param_2 & 7) != 0) {
    uVar14 = 8 - (int)((ulonglong)param_2 & 7);
    bVar15 = local_3c < uVar14;
    local_3c = local_3c - uVar14;
    if (bVar15 || local_3c == 0) {
      local_3c = 1;
    }
    else {
      param_2 = (void *)((longlong)param_2 + (ulonglong)uVar14);
    }
  }
  if (((int)local_3c < (int)local_40) || (param_2 == (void *)0x0)) {
    pvVar12 = (void *)FUN_1424da030((longlong)(int)local_40);
    if (pvVar12 == (void *)0x0) {
      *param_4 = 7;
      goto LAB_1424e0ea0;
    }
    *param_4 = -0x7e;
    *param_3 = local_40;
    _Dst = pvVar12;
  }
  else {
    pvVar12 = (void *)0x0;
    _Dst = param_2;
  }
  memset(_Dst,0,(longlong)(int)local_40);
  memcpy(_Dst,param_1,0x120);
  *(undefined2 *)((longlong)_Dst + 0x3d) = 0;
  if ((undefined8 *)param_1[5] == param_1 + 0x11) {
    *(longlong *)((longlong)_Dst + 0x28) = (longlong)_Dst + 0x88;
LAB_1424e1042:
    pcVar1 = *(code **)(*(longlong *)(param_1[6] + 0x20) + 0x70);
    if (((pcVar1 == (code *)0x0) ||
        (_Dst = (void *)(*pcVar1)(param_1,_Dst,param_3,param_4), _Dst != (void *)0x0)) &&
       (*param_4 < 1)) {
      if (*(char *)(param_1[6] + 0x19) != '\0') {
        FUN_14250b570();
      }
      if (_Dst == param_2) {
        *(undefined1 *)((longlong)param_2 + 0x3d) = 1;
      }
      local_44 = 0;
      local_e8 = 5;
      local_e0 = &local_44;
      pvStack_c0 = _Dst;
      pvStack_80 = _Dst;
      (*(code *)param_1[1])(param_1[4],&local_88,0,0);
      local_44 = 0;
      local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,5);
      local_e8 = 0;
      local_d8 = &local_44;
      (*(code *)*param_1)(param_1[3],&local_c8,0,0);
      goto LAB_1424e0ea0;
    }
    if ((pvVar12 != (void *)0x0) &&
       (*(longlong *)((longlong)pvVar12 + 0x28) != (longlong)pvVar12 + 0x88)) {
      FUN_1424da110();
    }
  }
  else {
    puVar13 = (undefined4 *)FUN_1424da030(0x40);
    *(undefined4 **)((longlong)_Dst + 0x28) = puVar13;
    if (puVar13 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)param_1[5];
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      uVar7 = *(undefined8 *)(puVar2 + 4);
      uVar8 = *(undefined8 *)(puVar2 + 6);
      uVar9 = *(undefined8 *)(puVar2 + 8);
      uVar10 = *(undefined8 *)(puVar2 + 10);
      uVar11 = *(undefined8 *)(puVar2 + 0xe);
      *(undefined8 *)(puVar13 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
      *(undefined8 *)(puVar13 + 0xe) = uVar11;
      *(undefined8 *)(puVar13 + 8) = uVar9;
      *(undefined8 *)(puVar13 + 10) = uVar10;
      *(undefined8 *)(puVar13 + 4) = uVar7;
      *(undefined8 *)(puVar13 + 6) = uVar8;
      *puVar13 = uVar3;
      puVar13[1] = uVar4;
      puVar13[2] = uVar5;
      puVar13[3] = uVar6;
      goto LAB_1424e1042;
    }
  }
  FUN_1424da110(pvVar12);
LAB_1424e0ea0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_108);
}



// FUNCTION 1424e1140 FUN_1424e1140 body=362 status=ok
// SIG undefined FUN_1424e1140(void)

void FUN_1424e1140(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_14 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if ((code *)param_1[1] != (code *)&LAB_142582fe0) {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_28 = 0;
      local_58 = 0x10038;
      local_14 = 0;
      local_70 = &local_14;
      local_78 = 4;
      puStack_50 = param_1;
      (*(code *)param_1[1])(param_1[4],&local_58,0,0);
    }
    if ((code *)*param_1 != (code *)&LAB_142582eb0) {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_28 = 0;
      local_58 = 0x10038;
      local_14 = 0;
      local_68 = &local_14;
      local_70 = (undefined4 *)CONCAT44(local_70._4_4_,4);
      local_78 = 0;
      puStack_50 = param_1;
      (*(code *)*param_1)(param_1[3],&local_58,0,0);
    }
    pcVar1 = *(code **)(*(longlong *)(param_1[6] + 0x20) + 0x20);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    if ((undefined8 *)param_1[5] != param_1 + 0x11) {
      FUN_1424da110();
    }
    if (*(char *)(param_1[6] + 0x19) != '\0') {
      FUN_14250b3d0();
    }
    if (*(char *)((longlong)param_1 + 0x3d) == '\0') {
      FUN_1424da110(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_98);
}



// FUNCTION 1424e12c0 FUN_1424e12c0 body=10 status=ok
// SIG undefined FUN_1424e12c0(void)

void FUN_1424e12c0(undefined8 param_1)

{
  FUN_1424e12d0(param_1,0,1);
  return;
}



// FUNCTION 1424e12d0 FUN_1424e12d0 body=383 status=ok
// SIG undefined FUN_1424e12d0(void)

void FUN_1424e12d0(undefined8 *param_1,int param_2,char param_3)

{
  code *pcVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == (undefined8 *)0x0) goto LAB_1424e143f;
  if (param_3 != '\0') {
    if (param_2 < 2) {
      if ((code *)param_1[1] != (code *)&LAB_142582fe0) {
        local_38 = 0;
        uStack_30 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_28 = 0;
        local_58 = 0x10038;
        local_1c = 0;
        local_70 = &local_1c;
        local_78 = 3;
        puStack_50 = param_1;
        (*(code *)param_1[1])(param_1[4],&local_58,0,0);
      }
      if (param_2 == 1) goto LAB_1424e13e1;
    }
    if ((code *)*param_1 != (code *)&LAB_142582eb0) {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_28 = 0;
      local_58 = 0x10038;
      local_1c = 0;
      local_68 = &local_1c;
      local_70 = (undefined4 *)CONCAT44(local_70._4_4_,3);
      local_78 = 0;
      puStack_50 = param_1;
      (*(code *)*param_1)(param_1[3],&local_58,0,0);
    }
  }
LAB_1424e13e1:
  if (param_2 < 2) {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_1[6] + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)((longlong)param_1 + 0x5d) = 0;
    *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
    *(undefined1 *)((longlong)param_1 + 0x11a) = 0;
    if (param_2 != 1) goto LAB_1424e140c;
  }
  else {
LAB_1424e140c:
    param_1[10] = 0;
    *(undefined2 *)((longlong)param_1 + 0x5b) = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x119) = 0;
  }
  pcVar1 = *(code **)(*(longlong *)(param_1[6] + 0x20) + 0x28);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2);
  }
LAB_1424e143f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1424e1460 FUN_1424e1460 body=62 status=ok
// SIG undefined FUN_1424e1460(void)

longlong FUN_1424e1460(longlong param_1,int *param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  if (*param_2 < 1) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    pcVar1 = *(code **)(*(longlong *)(lVar2 + 0x20) + 0x60);
    if (pcVar1 != (code *)0x0) {
      lVar2 = (*pcVar1)(param_1);
      if (lVar2 != 0) {
        return lVar2;
      }
      lVar2 = *(longlong *)(param_1 + 0x30);
    }
    lVar2 = *(longlong *)(lVar2 + 0x10) + 4;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1424e14a0 FUN_1424e14a0 body=383 status=ok
// SIG undefined FUN_1424e14a0(void)

void FUN_1424e14a0(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong *param_4,
                  ulonglong param_5,undefined8 param_6,char param_7,int *param_8)

{
  ulonglong uVar1;
  int *piVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  int *local_88;
  undefined2 local_78;
  char local_76;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  piVar2 = param_8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_8 != (int *)0x0) && (*param_8 < 1)) {
    if ((param_1 != 0) && ((param_2 != (ulonglong *)0x0 && (param_4 != (ulonglong *)0x0)))) {
      uVar1 = *param_4;
      uVar5 = 0xffffffffffffffff;
      if (param_5 < 0xffffffff80000001) {
        uVar5 = param_5 + 0x7fffffff;
      }
      param_5 = param_5 - (uVar5 == param_5);
      if (((uVar1 <= param_5) && (uVar5 = *param_2, uVar5 <= param_3)) &&
         ((uVar4 = param_5 - uVar1, param_5 < uVar1 || uVar4 == 0 || (uVar4 < 0x7fffffff)))) {
        if (((uVar4 & 1) == 0) &&
           (param_3 - uVar5 >> 0x1f == 0 || (param_3 < uVar5 || param_3 - uVar5 == 0))) {
          if ('\0' < *(char *)(param_1 + 0x5b)) {
            local_88 = param_8;
            cVar3 = FUN_1424e1630(param_1,param_2,param_3,&param_6);
            if (cVar3 != '\0') goto LAB_1424e1612;
          }
          if (((param_7 != '\0') || (uVar1 != param_5)) || (*(char *)(param_1 + 0x119) < '\0')) {
            local_76 = param_7;
            local_48 = param_6;
            local_58 = *param_2;
            local_78 = 0x38;
            local_70 = param_1;
            local_68 = uVar1;
            local_60 = param_5;
            local_50 = param_3;
            FUN_1424e1760(&local_78,piVar2);
            *param_4 = local_68;
            *param_2 = local_58;
          }
          goto LAB_1424e1612;
        }
      }
    }
    *param_8 = 1;
  }
LAB_1424e1612:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1424e1630 FUN_1424e1630 body=296 status=ok
// SIG undefined FUN_1424e1630(void)

undefined8
FUN_1424e1630(longlong param_1,undefined8 *param_2,undefined1 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  
  if (param_4 == (undefined8 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)*param_4;
  }
  puVar3 = (undefined1 *)*param_2;
  bVar2 = *(byte *)(param_1 + 0x5b);
  puVar8 = puVar3;
  if ('\0' < (char)bVar2) {
    uVar12 = 0;
    do {
      if (puVar8 == param_3) {
        lVar9 = (longlong)(char)bVar2;
        uVar10 = (ulonglong)bVar2 - 1;
        if ((ulonglong)((longlong)param_3 - (longlong)puVar3) < uVar10) {
          uVar10 = (longlong)param_3 - (longlong)puVar3;
        }
        lVar14 = uVar10 + 1;
        if ((longlong)(uVar10 + 1) <= lVar9) {
          lVar14 = lVar9;
        }
        uVar10 = lVar14 - uVar10;
        uVar11 = 0;
        if ((uVar10 < 0x20) || (uVar12 == 0)) goto LAB_1424e1720;
        uVar11 = uVar10 & 0xffffffffffffffe0;
        puVar15 = (undefined8 *)(param_1 + 0x78);
        uVar13 = uVar11;
        do {
          puVar1 = (undefined8 *)((longlong)puVar15 + (uVar12 - 0x10));
          uVar4 = puVar1[1];
          uVar5 = *(undefined8 *)((longlong)puVar15 + uVar12);
          uVar6 = ((undefined8 *)((longlong)puVar15 + uVar12))[1];
          puVar15[-2] = *puVar1;
          puVar15[-1] = uVar4;
          *puVar15 = uVar5;
          puVar15[1] = uVar6;
          puVar15 = puVar15 + 4;
          uVar13 = uVar13 - 0x20;
        } while (uVar13 != 0);
        uVar12 = uVar12 + uVar11;
        if (uVar10 != uVar11) {
LAB_1424e1720:
          do {
            puVar3 = (undefined1 *)(param_1 + 0x68 + uVar12);
            uVar12 = uVar12 + 1;
            *(undefined1 *)(param_1 + 0x68 + uVar11) = *puVar3;
            uVar11 = uVar11 + 1;
          } while ((longlong)uVar12 < lVar9);
        }
        *(char *)(param_1 + 0x5b) = (char)uVar11;
        *param_2 = param_3;
        if (puVar7 != (undefined4 *)0x0) {
          *param_4 = puVar7;
        }
        *param_5 = 0xf;
        return CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
      }
      *puVar8 = *(undefined1 *)(param_1 + 0x68 + uVar12);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      uVar12 = uVar12 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar12 != bVar2);
  }
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *param_2 = puVar8;
  if (puVar7 != (undefined4 *)0x0) {
    *param_4 = puVar7;
  }
  return 0;
}



// FUNCTION 1424e1760 FUN_1424e1760 body=1516 status=ok
// SIG undefined FUN_1424e1760(void)

void FUN_1424e1760(longlong param_1,int *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  int *_Dst;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_108 [32];
  uint local_e8;
  uint local_e0;
  int *local_d8;
  ulonglong local_d0;
  int local_c4;
  int *local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  ushort *local_a8;
  undefined4 local_9c;
  code *local_98;
  void *local_90;
  undefined1 local_88 [40];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar2 = *(undefined8 **)(param_1 + 8);
  _Dst = *(int **)(param_1 + 0x30);
  if (_Dst == (int *)0x0) {
    iVar17 = 0;
  }
  else {
    local_98 = *(code **)(*(longlong *)(puVar2[6] + 0x20) + 0x48);
    iVar17 = 0;
    if (local_98 != (code *)0x0) goto LAB_1424e17cb;
    iVar17 = -1;
  }
  local_98 = *(code **)(*(longlong *)(puVar2[6] + 0x20) + 0x40);
LAB_1424e17cb:
  uVar12 = *(ulonglong *)(param_1 + 0x10);
  lVar15 = *(longlong *)(param_1 + 0x20);
  local_c0 = param_2;
  if (*(char *)((longlong)puVar2 + 0x119) < '\0') {
    local_b0 = *(undefined8 *)(param_1 + 0x18);
    local_b8 = (ulonglong)*(byte *)(param_1 + 2);
    local_c4 = iVar17;
    memcpy(local_88,(void *)((longlong)puVar2 + 0xd4),
           (ulonglong)(uint)(*(char *)((longlong)puVar2 + 0x119) * -2));
    *(undefined1 **)(param_1 + 0x10) = local_88;
    *(undefined1 **)(param_1 + 0x18) = local_88 + (longlong)*(char *)((longlong)puVar2 + 0x119) * -2
    ;
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x119) = 0;
    iVar17 = -1;
    local_d0 = uVar12;
  }
  else {
    local_d0 = 0;
    local_b0 = 0;
    local_c4 = 0;
    local_b8 = 0;
  }
  local_90 = (void *)((longlong)puVar2 + 0xd4);
  local_a8 = (ushort *)((longlong)puVar2 + 0x8c);
LAB_1424e1898:
  iVar9 = 0;
  uVar8 = 0;
  if (*local_c0 < 1) {
    (*local_98)(param_1);
    if (((*local_c0 < 1) && (*(char *)(param_1 + 2) != '\0')) &&
       (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x18))) {
      uVar8 = (undefined4)
              CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                       *(int *)((longlong)puVar2 + 0x54) == 0);
    }
    else {
      uVar8 = 0;
    }
  }
  bVar4 = 0;
  local_9c = uVar8;
  do {
    iVar16 = iVar17;
    if (_Dst == (int *)0x0) {
      _Dst = (int *)0x0;
    }
    else {
      uVar10 = *(longlong *)(param_1 + 0x20) - lVar15;
      if (0 < (int)uVar10) {
        iVar9 = iVar17 - iVar9;
        if (iVar17 < 0) {
          iVar9 = -1;
        }
        uVar10 = uVar10 & 0xffffffff;
        piVar1 = _Dst + uVar10;
        if (iVar9 != 0) {
          piVar11 = _Dst + uVar10;
          if (iVar9 < 1) {
            if (piVar11 <= _Dst + 1) {
              piVar11 = _Dst + 1;
            }
            memset(_Dst,-1,(~(ulonglong)_Dst + (longlong)piVar11 & 0xfffffffffffffffc) + 4);
          }
          else {
            if (piVar11 <= _Dst + 1) {
              piVar11 = _Dst + 1;
            }
            if (0x1b < ~(ulonglong)_Dst + (longlong)piVar11) {
              uVar10 = (~(ulonglong)_Dst + (longlong)piVar11 >> 2) + 1;
              uVar13 = uVar10 & 0xfffffffffffffff8;
              uVar14 = 0;
              do {
                piVar11 = _Dst + uVar14;
                iVar5 = piVar11[1];
                iVar6 = piVar11[2];
                iVar7 = piVar11[3];
                if (-1 < *piVar11) {
                  _Dst[uVar14] = *piVar11 + iVar9;
                }
                if (-1 < iVar5) {
                  _Dst[uVar14 + 1] = iVar5 + iVar9;
                }
                if (-1 < iVar6) {
                  _Dst[uVar14 + 2] = iVar6 + iVar9;
                }
                if (-1 < iVar7) {
                  _Dst[uVar14 + 3] = iVar7 + iVar9;
                }
                piVar11 = _Dst + uVar14 + 4;
                iVar5 = piVar11[1];
                iVar6 = piVar11[2];
                iVar7 = piVar11[3];
                if (-1 < *piVar11) {
                  _Dst[uVar14 + 4] = *piVar11 + iVar9;
                }
                if (-1 < iVar5) {
                  _Dst[uVar14 + 5] = iVar5 + iVar9;
                }
                if (-1 < iVar6) {
                  _Dst[uVar14 + 6] = iVar6 + iVar9;
                }
                if (-1 < iVar7) {
                  _Dst[uVar14 + 7] = iVar7 + iVar9;
                }
                uVar14 = uVar14 + 8;
              } while (uVar13 != uVar14);
              _Dst = _Dst + uVar13;
              if (uVar10 == uVar13) goto LAB_1424e1b10;
            }
            do {
              if (-1 < *_Dst) {
                *_Dst = *_Dst + iVar9;
              }
              _Dst = _Dst + 1;
            } while (_Dst < piVar1);
          }
        }
LAB_1424e1b10:
        *(int **)(param_1 + 0x30) = piVar1;
        _Dst = piVar1;
      }
      if (-1 < iVar17) {
        iVar16 = iVar17 + (int)(*(longlong *)(param_1 + 0x10) - uVar12 >> 1);
      }
    }
    iVar17 = iVar16;
    if (*(char *)((longlong)puVar2 + 0x119) < '\0') {
      if (local_d0 == 0) {
        local_d0 = *(ulonglong *)(param_1 + 0x10);
        local_b0 = *(undefined8 *)(param_1 + 0x18);
        local_b8 = (ulonglong)*(byte *)(param_1 + 2);
        memcpy(local_88,local_90,(ulonglong)(uint)(*(char *)((longlong)puVar2 + 0x119) * -2));
        *(undefined1 **)(param_1 + 0x10) = local_88;
        *(undefined1 **)(param_1 + 0x18) =
             local_88 + (longlong)*(char *)((longlong)puVar2 + 0x119) * -2;
        *(undefined1 *)(param_1 + 2) = 0;
        iVar17 = *(char *)((longlong)puVar2 + 0x119) + iVar16;
        if (iVar17 < 0) {
          iVar17 = -1;
        }
        *(undefined1 *)((longlong)puVar2 + 0x119) = 0;
        local_c4 = iVar16;
      }
      else {
        *local_c0 = 5;
      }
    }
    uVar12 = *(ulonglong *)(param_1 + 0x10);
    lVar15 = *(longlong *)(param_1 + 0x20);
    if (*local_c0 < 1) {
      if (uVar12 < *(ulonglong *)(param_1 + 0x18)) goto LAB_1424e1898;
      if (local_d0 != 0) {
        *(ulonglong *)(param_1 + 0x10) = local_d0;
        *(undefined8 *)(param_1 + 0x18) = local_b0;
        *(char *)(param_1 + 2) = (char)local_b8;
        local_d0 = 0;
        iVar17 = local_c4;
        goto LAB_1424e1898;
      }
      if (*(char *)(param_1 + 2) == '\0') goto LAB_1424e1d27;
      if (*(int *)((longlong)puVar2 + 0x54) == 0) break;
      *local_c0 = 0xb;
    }
    else if ((bool)(bVar4 | *local_c0 - 0xdU < 0xfffffffd)) {
      if (local_d0 != 0) {
        uVar12 = (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) >> 1;
        if (0 < (int)uVar12) {
          FUN_142504850(local_90,*(longlong *)(param_1 + 0x10),uVar12 & 0xffffffff);
          *(char *)((longlong)puVar2 + 0x119) = -(char)uVar12;
        }
        *(ulonglong *)(param_1 + 0x10) = local_d0;
        *(undefined8 *)(param_1 + 0x18) = local_b0;
        *(char *)(param_1 + 2) = (char)local_b8;
      }
      goto LAB_1424e1d27;
    }
    local_e8 = *(uint *)((longlong)puVar2 + 0x54);
    if (local_e8 < 0x10000) {
      *local_a8 = (ushort)local_e8;
      iVar9 = 1;
    }
    else {
      *(short *)((longlong)puVar2 + 0x8c) = (short)(local_e8 >> 10) + -0x2840;
      *(ushort *)((longlong)puVar2 + 0x8e) = (ushort)local_e8 & 0x3ff | 0xdc00;
      iVar9 = 2;
    }
    *(char *)((longlong)puVar2 + 0x5c) = (char)iVar9;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
    local_e0 = (uint)(*local_c0 != 10);
    local_d8 = local_c0;
    (*(code *)*puVar2)(puVar2[3],param_1);
    bVar4 = 1;
  } while( true );
  local_d0 = 0;
  if ((char)local_9c != '\0') {
    puVar2[10] = 0;
    *(undefined2 *)((longlong)puVar2 + 0x5b) = 0;
    *(undefined4 *)(puVar2 + 0x1a) = 0xffffffff;
    *(undefined1 *)((longlong)puVar2 + 0x119) = 0;
    pcVar3 = *(code **)(*(longlong *)(puVar2[6] + 0x20) + 0x28);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(puVar2,2);
    }
LAB_1424e1d27:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
  }
  goto LAB_1424e1898;
}



// FUNCTION 1424e1d90 FUN_1424e1d90 body=392 status=ok
// SIG undefined FUN_1424e1d90(void)

void FUN_1424e1d90(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong *param_4,
                  ulonglong param_5,undefined8 param_6,char param_7,int *param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  int *local_88;
  undefined2 local_78;
  char local_76;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  piVar3 = param_8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_8 != (int *)0x0) && (*param_8 < 1)) {
    if ((param_1 != 0) && ((param_2 != (ulonglong *)0x0 && (param_4 != (ulonglong *)0x0)))) {
      uVar1 = *param_4;
      uVar5 = 0xffffffffffffffff;
      if (param_3 < 0xffffffff80000001) {
        uVar5 = param_3 + 0x7fffffff;
      }
      if (uVar1 <= param_5) {
        uVar2 = *param_2;
        param_3 = param_3 - (uVar5 == param_3);
        if (((uVar2 <= param_3) &&
            (((param_5 <= uVar1 || (param_5 - uVar1 < 0x80000000)) &&
             (uVar5 = param_3 - uVar2, uVar5 < 0x7fffffff || (param_3 < uVar2 || uVar5 == 0))))) &&
           ((uVar5 & 1) == 0)) {
          if ('\0' < *(char *)(param_1 + 0x5d)) {
            local_88 = param_8;
            cVar4 = FUN_1424e1f30(param_1,param_2,param_3,&param_6);
            if (cVar4 != '\0') goto LAB_1424e1f0b;
          }
          if (((param_7 != '\0') || (uVar1 != param_5)) || (*(char *)(param_1 + 0x11a) < '\0')) {
            local_76 = param_7;
            local_48 = param_6;
            local_60 = param_5;
            local_58 = *param_2;
            local_78 = 0x38;
            local_70 = param_1;
            local_68 = uVar1;
            local_50 = param_3;
            FUN_1424e2080(&local_78,piVar3);
            *param_4 = local_68;
            *param_2 = local_58;
          }
          goto LAB_1424e1f0b;
        }
      }
    }
    *param_8 = 1;
  }
LAB_1424e1f0b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1424e1f30 FUN_1424e1f30 body=327 status=ok
// SIG undefined FUN_1424e1f30(void)

undefined8
FUN_1424e1f30(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  if (param_4 == (undefined8 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)*param_4;
  }
  lVar6 = *param_2;
  bVar3 = *(byte *)(param_1 + 0x5d);
  if ('\0' < (char)bVar3) {
    lVar8 = 1;
    lVar15 = 0;
    lVar11 = 0;
    uVar10 = 0;
    do {
      if (lVar6 + lVar15 == param_3) {
        lVar7 = (longlong)(char)bVar3;
        lVar6 = lVar7;
        if (lVar7 < lVar8) {
          lVar6 = lVar8;
        }
        uVar13 = lVar6 - uVar10;
        uVar14 = 0;
        if ((uVar13 < 0x10) || ((ulonglong)-lVar15 < 0x10)) goto LAB_1424e2040;
        uVar14 = uVar13 & 0xfffffffffffffff8;
        if (lVar8 <= lVar7) {
          lVar8 = lVar7;
        }
        uVar12 = (lVar11 + lVar8 & 0xfffffffffffffff8U) + uVar10;
        uVar9 = lVar8 - uVar10;
        uVar16 = 0;
        do {
          puVar1 = (undefined8 *)(param_1 + 0x90 + uVar10 * 2);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(param_1 + 0x90 + uVar16 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          uVar16 = uVar16 + 8;
          uVar10 = uVar10 + 8;
        } while ((uVar9 & 0xfffffffffffffff8) != uVar16);
        uVar10 = uVar12;
        if (uVar13 != uVar14) {
LAB_1424e2040:
          do {
            lVar6 = uVar10 * 2;
            uVar10 = uVar10 + 1;
            *(undefined2 *)(param_1 + 0x90 + uVar14 * 2) = *(undefined2 *)(param_1 + 0x90 + lVar6);
            uVar14 = uVar14 + 1;
          } while ((longlong)uVar10 < lVar7);
        }
        *(char *)(param_1 + 0x5d) = (char)uVar14;
        *param_2 = param_3;
        if (puVar5 != (undefined4 *)0x0) {
          *param_4 = puVar5;
        }
        *param_5 = 0xf;
        return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
      }
      *(undefined2 *)(lVar6 + uVar10 * 2) = *(undefined2 *)(param_1 + 0x90 + uVar10 * 2);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 1;
      lVar11 = lVar11 + -1;
      lVar15 = lVar15 + 2;
    } while (bVar3 != uVar10);
    lVar6 = lVar6 + lVar15;
  }
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *param_2 = lVar6;
  if (puVar5 != (undefined4 *)0x0) {
    *param_4 = puVar5;
  }
  return 0;
}



// FUNCTION 1424e2080 FUN_1424e2080 body=1484 status=ok
// SIG undefined FUN_1424e2080(void)

void FUN_1424e2080(longlong param_1,uint *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  int *_Dst;
  uint uVar10;
  void *_Src;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_108 [32];
  int local_e8;
  uint *local_e0;
  undefined4 local_cc;
  void *local_c8;
  int local_bc;
  ulonglong local_b8;
  undefined8 local_b0;
  code *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  undefined1 local_88 [40];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *(longlong *)(param_1 + 8);
  _Dst = *(int **)(param_1 + 0x30);
  lVar15 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x20);
  if (_Dst == (int *)0x0) {
    iVar14 = 0;
  }
  else {
    local_a8 = *(code **)(lVar15 + 0x38);
    iVar14 = 0;
    if (local_a8 != (code *)0x0) goto LAB_1424e20ee;
    iVar14 = -1;
  }
  local_a8 = *(code **)(lVar15 + 0x30);
LAB_1424e20ee:
  _Src = *(void **)(param_1 + 0x10);
  lVar15 = *(longlong *)(param_1 + 0x20);
  if ((longlong)*(char *)(lVar2 + 0x11a) < 0) {
    local_b0 = *(undefined8 *)(param_1 + 0x18);
    local_b8 = (ulonglong)*(byte *)(param_1 + 2);
    local_bc = iVar14;
    memcpy(local_88,(void *)(lVar2 + 0xfa),-(longlong)*(char *)(lVar2 + 0x11a));
    *(undefined1 **)(param_1 + 0x10) = local_88;
    *(longlong *)(param_1 + 0x18) = (longlong)local_88 - (longlong)*(char *)(lVar2 + 0x11a);
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(lVar2 + 0x11a) = 0;
    iVar14 = -1;
    local_c8 = _Src;
  }
  else {
    local_c8 = (void *)0x0;
    local_b0 = 0;
    local_bc = 0;
    local_b8 = 0;
  }
  local_a0 = (void *)(lVar2 + 0xfa);
  local_98 = (void *)(lVar2 + 0x60);
  local_90 = (void *)(lVar2 + 0x41);
LAB_1424e219e:
  uVar10 = 0;
  local_cc = 0;
  if ((int)*param_2 < 1) {
    (*local_a8)(param_1,param_2);
    if ((((int)*param_2 < 1) && (*(char *)(param_1 + 2) != '\0')) &&
       (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x18))) {
      local_cc = (undefined4)
                 CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                          *(char *)(lVar2 + 0x40) == '\0');
    }
    else {
      local_cc = 0;
    }
  }
  bVar13 = true;
  do {
    if (_Dst == (int *)0x0) {
      _Dst = (int *)0x0;
    }
    else {
      uVar8 = (ulonglong)(*(longlong *)(param_1 + 0x20) - lVar15) >> 1;
      if (0 < (int)uVar8) {
        iVar7 = iVar14 - uVar10;
        if (iVar14 < 0) {
          iVar7 = -1;
        }
        uVar8 = uVar8 & 0xffffffff;
        piVar1 = _Dst + uVar8;
        if (iVar7 != 0) {
          piVar9 = _Dst + uVar8;
          if (iVar7 < 1) {
            if (piVar9 <= _Dst + 1) {
              piVar9 = _Dst + 1;
            }
            memset(_Dst,-1,(~(ulonglong)_Dst + (longlong)piVar9 & 0xfffffffffffffffc) + 4);
          }
          else {
            if (piVar9 <= _Dst + 1) {
              piVar9 = _Dst + 1;
            }
            if (0x1b < ~(ulonglong)_Dst + (longlong)piVar9) {
              uVar8 = (~(ulonglong)_Dst + (longlong)piVar9 >> 2) + 1;
              uVar11 = uVar8 & 0xfffffffffffffff8;
              uVar12 = 0;
              do {
                piVar9 = _Dst + uVar12;
                iVar4 = piVar9[1];
                iVar5 = piVar9[2];
                iVar6 = piVar9[3];
                if (-1 < *piVar9) {
                  _Dst[uVar12] = *piVar9 + iVar7;
                }
                if (-1 < iVar4) {
                  _Dst[uVar12 + 1] = iVar4 + iVar7;
                }
                if (-1 < iVar5) {
                  _Dst[uVar12 + 2] = iVar5 + iVar7;
                }
                if (-1 < iVar6) {
                  _Dst[uVar12 + 3] = iVar6 + iVar7;
                }
                piVar9 = _Dst + uVar12 + 4;
                iVar4 = piVar9[1];
                iVar5 = piVar9[2];
                iVar6 = piVar9[3];
                if (-1 < *piVar9) {
                  _Dst[uVar12 + 4] = *piVar9 + iVar7;
                }
                if (-1 < iVar4) {
                  _Dst[uVar12 + 5] = iVar4 + iVar7;
                }
                if (-1 < iVar5) {
                  _Dst[uVar12 + 6] = iVar5 + iVar7;
                }
                if (-1 < iVar6) {
                  _Dst[uVar12 + 7] = iVar6 + iVar7;
                }
                uVar12 = uVar12 + 8;
              } while (uVar11 != uVar12);
              _Dst = _Dst + uVar11;
              if (uVar8 == uVar11) goto LAB_1424e23f0;
            }
            do {
              if (-1 < *_Dst) {
                *_Dst = *_Dst + iVar7;
              }
              _Dst = _Dst + 1;
            } while (_Dst < piVar1);
          }
        }
LAB_1424e23f0:
        *(int **)(param_1 + 0x30) = piVar1;
        _Dst = piVar1;
      }
      if (-1 < iVar14) {
        iVar14 = iVar14 + (*(int *)(param_1 + 0x10) - (int)_Src);
      }
    }
    iVar7 = iVar14;
    if (*(char *)(lVar2 + 0x11a) < '\0') {
      if (local_c8 == (void *)0x0) {
        local_c8 = *(void **)(param_1 + 0x10);
        local_b0 = *(undefined8 *)(param_1 + 0x18);
        local_b8 = (ulonglong)*(byte *)(param_1 + 2);
        memcpy(local_88,local_a0,(ulonglong)(uint)-(int)*(char *)(lVar2 + 0x11a));
        *(undefined1 **)(param_1 + 0x10) = local_88;
        *(longlong *)(param_1 + 0x18) = (longlong)local_88 - (longlong)*(char *)(lVar2 + 0x11a);
        *(undefined1 *)(param_1 + 2) = 0;
        iVar7 = *(char *)(lVar2 + 0x11a) + iVar14;
        if (iVar7 < 0) {
          iVar7 = -1;
        }
        *(undefined1 *)(lVar2 + 0x11a) = 0;
        local_bc = iVar14;
      }
      else {
        *param_2 = 5;
      }
    }
    iVar14 = iVar7;
    _Src = *(void **)(param_1 + 0x10);
    lVar15 = *(longlong *)(param_1 + 0x20);
    uVar10 = *param_2;
    if ((int)uVar10 < 1) {
      if (_Src < *(void **)(param_1 + 0x18)) goto LAB_1424e219e;
      if (local_c8 != (void *)0x0) {
        *(void **)(param_1 + 0x10) = local_c8;
        *(undefined8 *)(param_1 + 0x18) = local_b0;
        *(char *)(param_1 + 2) = (char)local_b8;
        local_c8 = (void *)0x0;
        iVar14 = local_bc;
        goto LAB_1424e219e;
      }
      if (*(char *)(param_1 + 2) == '\0') goto LAB_1424e2629;
      if (*(char *)(lVar2 + 0x40) < '\x01') break;
      *param_2 = 0xb;
    }
    else if (((!bVar13) || (0x13 < uVar10)) || ((0xc1c00U >> (uVar10 & 0x1f) & 1) == 0)) {
      if (local_c8 != (void *)0x0) {
        uVar8 = *(longlong *)(param_1 + 0x18) - (longlong)_Src;
        if (0 < (int)uVar8) {
          memcpy(local_a0,_Src,uVar8 & 0xffffffff);
          *(char *)(lVar2 + 0x11a) = -(char)uVar8;
        }
        *(void **)(param_1 + 0x10) = local_c8;
        *(undefined8 *)(param_1 + 0x18) = local_b0;
        *(char *)(param_1 + 2) = (char)local_b8;
      }
      goto LAB_1424e2629;
    }
    uVar10 = (uint)*(char *)(lVar2 + 0x40);
    *(char *)(lVar2 + 0x5a) = *(char *)(lVar2 + 0x40);
    if (0 < (int)uVar10) {
      memcpy(local_98,local_90,(ulonglong)uVar10);
    }
    *(undefined1 *)(lVar2 + 0x40) = 0;
    local_e8 = *(int *)(lVar2 + 0x11c);
    if ((local_e8 == 1) && (local_e8 = 1, *param_2 == 10)) {
      *(undefined4 *)(lVar2 + 0x11c) = 0;
      local_e8 = 0;
    }
    local_e0 = param_2;
    (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar2 + 0x20),param_1,local_98);
    *(undefined4 *)(lVar2 + 0x11c) = 1;
    bVar13 = false;
  } while( true );
  local_c8 = (void *)0x0;
  if ((char)local_cc != '\0') {
    *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(*(longlong *)(lVar2 + 0x30) + 0x28);
    *(undefined4 *)(lVar2 + 0x4c) = 0;
    *(undefined1 *)(lVar2 + 0x40) = 0;
    *(undefined1 *)(lVar2 + 0x5d) = 0;
    *(undefined1 *)(lVar2 + 0x5a) = 0;
    *(undefined1 *)(lVar2 + 0x11a) = 0;
    pcVar3 = *(code **)(*(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x20) + 0x28);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(lVar2,1);
    }
LAB_1424e2629:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
  }
  goto LAB_1424e219e;
}



// FUNCTION 1424e26a0 FUN_1424e26a0 body=346 status=ok
// SIG undefined FUN_1424e26a0(void)

void FUN_1424e26a0(undefined8 param_1,char *param_2,longlong param_3,int *param_4)

{
  size_t sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 local_78 [28];
  undefined4 local_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    sVar1 = strlen(param_2);
    if ((int)sVar1 < 0x10) {
      memcpy(local_78,param_2,(longlong)((int)sVar1 + 1));
      FUN_142503930(local_78);
      lVar2 = FUN_1424ebfe0("icudt64l-coll",param_1,param_4);
      lVar3 = FUN_1424ecc30(lVar2,"collations",0,param_4);
      lVar4 = FUN_1424ec1c0(lVar3,local_78,0,param_4);
      uVar5 = FUN_1424ecf00(lVar4,"Sequence",&local_5c,param_4);
      if (*param_4 < 1) {
        local_58 = lVar2;
        local_50 = lVar3;
        local_48 = lVar4;
        FUN_1424a8e40(param_3);
        if (*(short *)(param_3 + 8) < 0) {
          iVar6 = *(int *)(param_3 + 0xc);
        }
        else {
          iVar6 = (int)*(short *)(param_3 + 8) >> 5;
        }
        FUN_1424a9130(param_3,0,iVar6,uVar5,0,local_5c);
        lVar3 = local_50;
        lVar4 = local_48;
        lVar2 = local_58;
        if ((*(byte *)(param_3 + 8) & 1) != 0) {
          *param_4 = 7;
        }
      }
      if (lVar4 != 0) {
        FUN_1424ea9f0(lVar4);
      }
      if (lVar3 != 0) {
        FUN_1424ea9f0(lVar3);
      }
      if (lVar2 != 0) {
        FUN_1424ea9f0(lVar2);
      }
    }
    else {
      *param_4 = 1;
    }
  }
  return;
}



// FUNCTION 1424e2800 Unwind@1424e2800 body=87 status=ok
// SIG undefined Unwind@1424e2800(void)

void Unwind_1424e2800(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x60));
  }
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x58));
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}



// FUNCTION 1424e2860 FUN_1424e2860 body=74 status=ok
// SIG undefined FUN_1424e2860(void)

void FUN_1424e2860(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (*(longlong *)(param_2 + 0x1f8) == 0) {
    FUN_1424e2d50(param_2,param_3);
    return;
  }
  if (*(longlong *)(param_2 + 0x200) != 0) {
    if (*(longlong *)(param_2 + 0x208) != 0) {
      FUN_1424e3560(param_2,param_3);
      return;
    }
    FUN_1424e30f0(param_2,param_3);
    return;
  }
  FUN_1424e2f00(param_2,param_3);
  return;
}



// FUNCTION 1424e28b0 FUN_1424e28b0 body=211 status=ok
// SIG undefined FUN_1424e28b0(void)

undefined8 FUN_1424e28b0(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_240 [16];
  undefined1 local_230 [224];
  undefined1 local_150 [264];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar2 = FUN_1425637c0(param_2);
  if (*param_2 < 1) {
    if ((**(char **)(param_1 + 0x28) != '\0') &&
       (iVar1 = strcmp(*(char **)(param_1 + 0x28),"root"), iVar1 != 0)) {
      *param_2 = 0;
      FUN_1424e29c0(local_240,uVar2,param_1,param_2);
      uVar2 = FUN_1424e2be0(local_240,param_2);
      FUN_1424ea9f0(local_38);
      FUN_1424ea9f0(local_40);
      FUN_1424ea9f0(local_48);
      FUN_1414b3f60(local_150);
      FUN_1414b3f60(local_230);
      return uVar2;
    }
    FUN_142537c90(uVar2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1424e2990 Unwind@1424e2990 body=43 status=ok
// SIG undefined Unwind@1424e2990(void)

void Unwind_1424e2990(undefined8 param_1,longlong param_2)

{
  FUN_1424e2d00(param_2 + 0x28);
  return;
}



// FUNCTION 1424e29c0 FUN_1424e29c0 body=406 status=ok
// SIG undefined FUN_1424e29c0(void)

undefined8 * FUN_1424e29c0(undefined8 *param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char *_Str2;
  undefined1 local_128 [224];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar3 = FUN_14253ea50(param_4);
  *param_1 = uVar3;
  param_1[1] = param_2;
  local_48 = param_1 + 2;
  FUN_1424a3ce0(local_48,param_2 + 0x18);
  local_40 = param_1 + 0x1e;
  FUN_1424a3ce0(local_40,param_3);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((longlong)param_1 + 500) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  if (*param_4 < 1) {
    _Str2 = (char *)FUN_1424a5500(local_40);
    iVar2 = strcmp((char *)param_1[0x23],_Str2);
    if (iVar2 != 0) {
      FUN_1412ae150(local_128,_Str2,0,0,0);
      puVar1 = param_1 + 0x3a;
      FUN_1424a3e60(local_40,local_128);
      FUN_1414b3f60(local_128);
      iVar2 = FUN_1424a5490(param_3,"collation",puVar1,0xf,param_4);
      if (*param_4 < 1) {
        *(undefined1 *)((longlong)param_1 + (longlong)iVar2 + 0x1d0) = 0;
        if (iVar2 != 0) {
          iVar2 = FUN_142503a40(puVar1,"default");
          if (iVar2 == 0) {
            *(undefined1 *)puVar1 = 0;
          }
          else {
            FUN_142503930(puVar1);
            FUN_1424a54a0(local_40,"collation",puVar1,param_4);
          }
        }
      }
      else {
        *param_4 = 1;
      }
    }
  }
  return param_1;
}



// FUNCTION 1424e2b60 Unwind@1424e2b60 body=50 status=ok
// SIG undefined Unwind@1424e2b60(void)

void Unwind_1424e2b60(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x118));
  return;
}



// FUNCTION 1424e2ba0 Unwind@1424e2ba0 body=50 status=ok
// SIG undefined Unwind@1424e2ba0(void)

void Unwind_1424e2ba0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 1424e2be0 FUN_1424e2be0 body=161 status=ok
// SIG undefined FUN_1424e2be0(void)

undefined8 FUN_1424e2be0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_108 [224];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_110 = 0;
  local_10c = 0;
  local_118 = icu_64::LocaleCacheKey<icu_64::CollationCacheEntry>::vftable;
  FUN_1424a3ce0(local_108,param_1 + 0x1e);
  local_28 = 0;
  FUN_1424e3d20(*param_1,&local_118,param_1,&local_28,param_2);
  uVar1 = local_28;
  local_118 = icu_64::LocaleCacheKey<icu_64::CollationCacheEntry>::vftable;
  FUN_1414b3f60(local_108);
  thunk_FUN_1424b70d0(&local_118);
  return uVar1;
}



// FUNCTION 1424e2c90 Unwind@1424e2c90 body=57 status=ok
// SIG undefined Unwind@1424e2c90(void)

void Unwind_1424e2c90(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x30) = icu_64::LocaleCacheKey<icu_64::CollationCacheEntry>::vftable;
  FUN_1414b3f60(param_2 + 0x40);
  thunk_FUN_1424b70d0(param_2 + 0x30);
  return;
}



// FUNCTION 1424e2cd0 Unwind@1424e2cd0 body=37 status=ok
// SIG undefined Unwind@1424e2cd0(void)

void Unwind_1424e2cd0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x30);
  return;
}



// FUNCTION 1424e2d00 FUN_1424e2d00 body=73 status=ok
// SIG undefined FUN_1424e2d00(void)

void FUN_1424e2d00(longlong param_1)

{
  FUN_1424ea9f0(*(undefined8 *)(param_1 + 0x208));
  FUN_1424ea9f0(*(undefined8 *)(param_1 + 0x200));
  FUN_1424ea9f0(*(undefined8 *)(param_1 + 0x1f8));
  FUN_1414b3f60(param_1 + 0xf0);
  FUN_1414b3f60(param_1 + 0x10);
  return;
}



// FUNCTION 1424e2d50 FUN_1424e2d50 body=333 status=ok
// SIG undefined FUN_1424e2d50(void)

undefined8 FUN_1424e2d50(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_1f0 [224];
  undefined1 local_110 [224];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    lVar1 = param_1 + 0xf0;
    uVar3 = FUN_1424a5500(lVar1);
    uVar3 = FUN_1424edaa0("icudt64l-coll",uVar3,param_2);
    *(undefined8 *)(param_1 + 0x1f8) = uVar3;
    if (*param_2 == 2) {
      *param_2 = -0x7f;
      FUN_142537c90(*(undefined8 *)(param_1 + 8));
      uVar3 = *(undefined8 *)(param_1 + 8);
    }
    else {
      FUN_1424a3ce0(local_1f0,lVar1);
      uVar3 = 0;
      uVar4 = FUN_1424ed0b0(*(undefined8 *)(param_1 + 0x1f8),0,param_2);
      if (*param_2 < 1) {
        FUN_1412ae150(local_110,uVar4,0,0,0);
        uVar3 = FUN_1424a3e60(param_1 + 0x10,local_110);
        FUN_1424a3d10(lVar1,uVar3);
        FUN_1414b3f60(local_110);
        if (*(char *)(param_1 + 0x1d0) != '\0') {
          FUN_1424a54a0(lVar1,"collation",param_1 + 0x1d0,param_2);
        }
        cVar2 = FUN_1424a3f70(lVar1,local_1f0);
        if (cVar2 == '\0') {
          uVar3 = FUN_1424e2be0(param_1,param_2);
        }
        else {
          uVar3 = FUN_1424e2f00(param_1,param_2);
        }
      }
      FUN_1414b3f60(local_1f0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1424e2ea0 Unwind@1424e2ea0 body=46 status=ok
// SIG undefined Unwind@1424e2ea0(void)

void Unwind_1424e2ea0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x108);
  return;
}



// FUNCTION 1424e2ed0 Unwind@1424e2ed0 body=43 status=ok
// SIG undefined Unwind@1424e2ed0(void)

void Unwind_1424e2ed0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 1424e2f00 FUN_1424e2f00 body=481 status=ok
// SIG undefined FUN_1424e2f00(void)

undefined8 FUN_1424e2f00(longlong param_1,int *param_2)

{
  longlong *_Dest;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_28;
  int local_24;
  
  if (*param_2 < 1) {
    uVar4 = FUN_1424ecc30(*(undefined8 *)(param_1 + 0x1f8),"collations",0,param_2);
    *(undefined8 *)(param_1 + 0x200) = uVar4;
    if (*param_2 == 2) {
      *param_2 = -0x7f;
      FUN_142537c90(*(undefined8 *)(param_1 + 8));
      uVar4 = FUN_1424e3b60(param_1 + 0x10,*(undefined8 *)(param_1 + 8),param_2);
      return uVar4;
    }
    if (*param_2 < 1) {
      local_28 = 0;
      lVar5 = FUN_1424ec1c0(uVar4,"default",0,&local_28);
      uVar4 = FUN_1424eae00(lVar5,&local_24,&local_28);
      if (((local_28 < 1) && (0 < local_24)) && (local_24 < 0x10)) {
        FUN_14250ae10(uVar4,param_1 + 0x1e0,local_24 + 1);
      }
      else {
        *(undefined8 *)(param_1 + 0x1e0) = 0x647261646e617473;
        *(undefined1 *)(param_1 + 0x1e8) = 0;
      }
      if (lVar5 != 0) {
        FUN_1424ea9f0(lVar5);
      }
      _Dest = (longlong *)(param_1 + 0x1d0);
      if (*(char *)(param_1 + 0x1d0) != '\0') {
        iVar2 = strcmp((char *)_Dest,(char *)(param_1 + 0x1e0));
        if (iVar2 == 0) {
          *(byte *)(param_1 + 0x1f0) = *(byte *)(param_1 + 0x1f0) | 2;
        }
        if (*(int *)(param_1 + 0x1d3) == 0x686372 && *(int *)_Dest == 0x72616573) {
          *(byte *)(param_1 + 0x1f0) = *(byte *)(param_1 + 0x1f0) | 1;
        }
        if (*(char *)(param_1 + 0x1d8) == '\0' && *_Dest == 0x647261646e617473) {
          *(byte *)(param_1 + 0x1f0) = *(byte *)(param_1 + 0x1f0) | 4;
        }
        uVar4 = FUN_1424e30f0(param_1,param_2);
        return uVar4;
      }
      strcpy((char *)_Dest,(char *)(param_1 + 0x1e0));
      uVar1 = *(uint *)(param_1 + 0x1f0);
      uVar3 = uVar1 | 2;
      *(uint *)(param_1 + 0x1f0) = uVar3;
      if (*(int *)(param_1 + 0x1d3) == 0x686372 && *(int *)(param_1 + 0x1d0) == 0x72616573) {
        uVar3 = uVar1 | 3;
        *(uint *)(param_1 + 0x1f0) = uVar3;
      }
      if (*(char *)(param_1 + 0x1d8) == '\0' && *_Dest == 0x647261646e617473) {
        *(uint *)(param_1 + 0x1f0) = uVar3 | 4;
      }
      FUN_1424a54a0(param_1 + 0xf0,"collation",_Dest,param_2);
      uVar4 = FUN_1424e2be0(param_1,param_2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1424e30f0 FUN_1424e30f0 body=926 status=ok
// SIG undefined FUN_1424e30f0(void)

undefined8 FUN_1424e30f0(longlong param_1,int *param_2)

{
  longlong *_Str1;
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  size_t sVar5;
  char *_Str1_00;
  undefined8 uVar6;
  undefined1 local_210 [224];
  undefined1 local_130 [224];
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    return 0;
  }
  _Str1 = (longlong *)(param_1 + 0x1d0);
  lVar4 = FUN_1424ec1c0(*(undefined8 *)(param_1 + 0x200),_Str1,0,param_2);
  if (*param_2 == 2) {
    sVar5 = strlen((char *)_Str1);
    *param_2 = -0x7f;
    *(undefined1 *)(param_1 + 500) = 1;
    uVar1 = *(uint *)(param_1 + 0x1f0);
    if ((((uVar1 & 1) == 0) && (6 < (int)sVar5)) &&
       (*(short *)(param_1 + 0x1d4) == 0x6863 && *(int *)_Str1 == 0x72616573)) {
      *(uint *)(param_1 + 0x1f0) = uVar1 | 1;
      *(undefined1 *)(param_1 + 0x1d6) = 0;
    }
    else if ((uVar1 & 2) == 0) {
      *(uint *)(param_1 + 0x1f0) = uVar1 | 2;
      strcpy((char *)_Str1,(char *)(param_1 + 0x1e0));
    }
    else {
      if ((uVar1 & 4) != 0) {
        if (*param_2 < 1) {
          local_50 = lVar4;
          FUN_142537c90(*(undefined8 *)(param_1 + 8));
          local_50 = lVar4;
          uVar6 = FUN_1424e3b60(param_1 + 0x10,*(undefined8 *)(param_1 + 8),param_2);
          goto joined_r0x0001424e31b9;
        }
        goto LAB_1424e31b3;
      }
      *(uint *)(param_1 + 0x1f0) = uVar1 | 4;
      *_Str1 = 0x647261646e617473;
      *(undefined1 *)(param_1 + 0x1d8) = 0;
    }
    local_50 = lVar4;
    FUN_1424a54a0(param_1 + 0xf0,"collation",_Str1,param_2);
    local_50 = lVar4;
    uVar6 = FUN_1424e2be0(param_1,param_2);
  }
  else {
    if (*param_2 < 1) {
      *(longlong *)(param_1 + 0x208) = lVar4;
      _Str1_00 = (char *)FUN_1424ed0b0(lVar4,0,param_2);
      if (0 < *param_2) {
        return 0;
      }
      lVar4 = param_1 + 0x10;
      local_50 = 0;
      uVar6 = FUN_1424a5500(lVar4);
      local_50 = 0;
      FUN_1412ae150(local_130,_Str1_00,0,0,0);
      FUN_1412ae150(local_210,uVar6,0,0,0);
      cVar2 = FUN_1424a3f70(local_130,local_210);
      FUN_1414b3f60(local_210);
      FUN_1414b3f60(local_130);
      iVar3 = strcmp((char *)_Str1,(char *)(param_1 + 0x1e0));
      if (iVar3 != 0) {
        local_50 = 0;
        FUN_1424a54a0(lVar4,"collation",_Str1,param_2);
        if (0 < *param_2) {
          return 0;
        }
      }
      if (((*_Str1_00 == '\0') || (iVar3 = strcmp(_Str1_00,"root"), iVar3 == 0)) &&
         (*(char *)(param_1 + 0x1d8) == '\0' && *_Str1 == 0x647261646e617473)) {
        if (*(char *)(param_1 + 500) != '\0') {
          *param_2 = -0x7f;
        }
        local_50 = 0;
        uVar6 = FUN_1424e3b20(param_1);
        return uVar6;
      }
      local_50 = 0;
      FUN_1412ae150(local_130,_Str1_00,0,0,0);
      FUN_1424a3e60(param_1 + 0xf0,local_130);
      FUN_1414b3f60(local_130);
      if (cVar2 == '\0') {
        local_50 = 0;
        FUN_1424a54a0(param_1 + 0xf0,"collation",_Str1,param_2);
        local_50 = 0;
        uVar6 = FUN_1424e2be0(param_1,param_2);
        local_50 = 0;
        uVar6 = FUN_1424e3b60(lVar4,uVar6,param_2);
        return uVar6;
      }
      local_50 = 0;
      uVar6 = FUN_1424e3560(param_1,param_2);
      return uVar6;
    }
LAB_1424e31b3:
    uVar6 = 0;
  }
joined_r0x0001424e31b9:
  if (lVar4 != 0) {
    FUN_1424ea9f0(lVar4);
  }
  return uVar6;
}



// FUNCTION 1424e3490 Unwind@1424e3490 body=55 status=ok
// SIG undefined Unwind@1424e3490(void)

void Unwind_1424e3490(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 1424e34d0 Unwind@1424e34d0 body=68 status=ok
// SIG undefined Unwind@1424e34d0(void)

void Unwind_1424e34d0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x108);
  *(undefined8 *)(param_2 + 0x1e8) = 0;
  return;
}



// FUNCTION 1424e3520 Unwind@1424e3520 body=63 status=ok
// SIG undefined Unwind@1424e3520(void)

void Unwind_1424e3520(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x1e8) != 0) {
    FUN_1424ea9f0();
  }
  return;
}



// FUNCTION 1424e3560 FUN_1424e3560 body=1077 status=ok
// SIG undefined FUN_1424e3560(void)

longlong FUN_1424e3560(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *_Str2;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int local_230 [56];
  int local_150 [56];
  longlong local_70;
  undefined4 local_64;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    return 0;
  }
  puVar3 = (undefined8 *)thunk_FUN_1424da030(400);
  puVar9 = puVar3;
  if ((puVar3 == (undefined8 *)0x0) ||
     (local_50 = puVar3,
     FUN_142589f60(puVar3,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xf8) + 0x20)),
     puVar9 = local_50, local_50[4] == 0)) {
    *param_2 = 7;
    lVar7 = 0;
    goto LAB_1424e384b;
  }
  local_60 = FUN_1424ecc30(*(undefined8 *)(param_1 + 0x208),"%%CollationBin",0,param_2);
  uVar4 = FUN_1424eae50(local_60,&local_64,param_2);
  local_58 = puVar9;
  FUN_14258a410(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf8),uVar4,local_64,puVar9,param_2);
  if (*param_2 < 1) {
    local_150[0] = 0;
    uVar4 = FUN_1424ecf00(*(undefined8 *)(param_1 + 0x208),"Sequence",local_230,local_150);
    if (local_150[0] < 1) {
      local_58 = local_50;
      FUN_1424a8f10(puVar3 + 5,1,uVar4,local_230[0]);
    }
    lVar7 = param_1 + 0xf0;
    local_58 = local_50;
    uVar4 = FUN_1424a5500(lVar7);
    local_58 = local_50;
    uVar5 = FUN_1424a5500(param_1 + 0x10);
    local_58 = local_50;
    FUN_1412ae150(local_150,uVar4,0,0,0);
    FUN_1412ae150(local_230,uVar5,0,0,0);
    cVar1 = FUN_1424a3f70(local_150,local_230);
    FUN_1414b3f60(local_230);
    FUN_1414b3f60(local_150);
    if (cVar1 == '\0') {
      lVar6 = FUN_1424ebfe0("icudt64l-coll",uVar4,param_2);
      if (0 < *param_2) {
        if (lVar6 != 0) {
          FUN_1424ea9f0(lVar6);
        }
        goto LAB_1424e3831;
      }
      local_150[0] = 0;
      lVar8 = FUN_1424ec1c0(lVar6,"collations/default",0,local_150);
      uVar4 = FUN_1424eae00(lVar8,local_230,local_150);
      if ((local_150[0] < 1) && (local_230[0] < 0x10)) {
        FUN_14250ae10(uVar4,param_1 + 0x1e0,local_230[0] + 1);
      }
      else {
        *(undefined8 *)(param_1 + 0x1e0) = 0x647261646e617473;
        *(undefined1 *)(param_1 + 0x1e8) = 0;
      }
      if (lVar8 != 0) {
        FUN_1424ea9f0(lVar8);
      }
      if (lVar6 != 0) {
        FUN_1424ea9f0(lVar6);
      }
    }
    puVar3 = puVar3 + 0xd;
    local_58 = local_50;
    FUN_1424a3d10(puVar3,lVar7);
    iVar2 = strcmp((char *)(param_1 + 0x1d0),(char *)(param_1 + 0x1e0));
    if (iVar2 == 0) {
      local_58 = local_50;
      _Str2 = (char *)FUN_1424a5500(lVar7);
      iVar2 = strcmp(*(char **)(param_1 + 0x118),_Str2);
      if (iVar2 != 0) {
        local_58 = local_50;
        FUN_1424a54a0(puVar3,"collation",0,param_2);
      }
    }
    else {
      local_58 = local_50;
      FUN_1424a54a0(puVar3,"collation",(char *)(param_1 + 0x1d0),param_2);
    }
    puVar9 = local_50;
    if (0 < *param_2) goto LAB_1424e3831;
    if (*(char *)(param_1 + 500) != '\0') {
      *param_2 = -0x7f;
    }
    local_50[0x2d] = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    lVar7 = thunk_FUN_1424da030(0x100);
    if (lVar7 == 0) {
      *param_2 = 7;
      lVar7 = 0;
    }
    else {
      local_70 = lVar7;
      FUN_1424e3c80(lVar7,param_1 + 0x10,puVar9);
      lVar7 = local_70;
      local_58 = (undefined8 *)0x0;
      FUN_142537c90(local_70);
      puVar9 = (undefined8 *)0x0;
    }
  }
  else {
LAB_1424e3831:
    lVar7 = 0;
    puVar9 = local_50;
  }
  if (local_60 != 0) {
    FUN_1424ea9f0();
  }
LAB_1424e384b:
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9,1);
  }
  return lVar7;
}



// FUNCTION 1424e39a0 Unwind@1424e39a0 body=58 status=ok
// SIG undefined Unwind@1424e39a0(void)

void Unwind_1424e39a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x208));
  return;
}



// FUNCTION 1424e39e0 Unwind@1424e39e0 body=55 status=ok
// SIG undefined Unwind@1424e39e0(void)

void Unwind_1424e39e0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 1424e3a20 Unwind@1424e3a20 body=71 status=ok
// SIG undefined Unwind@1424e3a20(void)

void Unwind_1424e3a20(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x108);
  *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(param_2 + 0x208);
  return;
}



// FUNCTION 1424e3a70 Unwind@1424e3a70 body=71 status=ok
// SIG undefined Unwind@1424e3a70(void)

void Unwind_1424e3a70(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x1e8));
  *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(param_2 + 0x208);
  return;
}



// FUNCTION 1424e3ac0 Unwind@1424e3ac0 body=93 status=ok
// SIG undefined Unwind@1424e3ac0(void)

void Unwind_1424e3ac0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x200);
  if (*(longlong *)(param_2 + 0x1f8) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x1f8));
  }
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1424e3b20 FUN_1424e3b20 body=61 status=ok
// SIG undefined FUN_1424e3b20(void)

undefined8 FUN_1424e3b20(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  if (0 < *param_3) {
    return 0;
  }
  FUN_142537c90(*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_1424e3b60(param_1 + 0x10,*(undefined8 *)(param_1 + 8),param_3);
  return uVar1;
}



// FUNCTION 1424e3b60 FUN_1424e3b60 body=184 status=ok
// SIG undefined FUN_1424e3b60(void)

undefined8 * FUN_1424e3b60(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  
  puVar3 = param_2;
  if (*param_3 < 1) {
    cVar2 = FUN_1424a3f70(param_1,param_2 + 3);
    if (cVar2 == '\0') {
      puVar3 = (undefined8 *)thunk_FUN_1424da030(0x100);
      if (puVar3 == (undefined8 *)0x0) {
        *param_3 = 7;
        puVar3 = (undefined8 *)0x0;
      }
      else {
        lVar1 = param_2[0x1f];
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = icu_64::CollationCacheEntry::vftable;
        FUN_1424a3ce0(puVar3 + 3,param_1);
        puVar3[0x1f] = lVar1;
        if (lVar1 != 0) {
          FUN_142537c90(lVar1);
        }
        FUN_142537c90(puVar3);
      }
      FUN_142537ca0(param_2);
    }
  }
  return puVar3;
}



// FUNCTION 1424e3c20 Unwind@1424e3c20 body=36 status=ok
// SIG undefined Unwind@1424e3c20(void)

void Unwind_1424e3c20(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424e3c50 Unwind@1424e3c50 body=47 status=ok
// SIG undefined Unwind@1424e3c50(void)

void Unwind_1424e3c50(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  thunk_FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1424e3c80 FUN_1424e3c80 body=91 status=ok
// SIG undefined FUN_1424e3c80(void)

undefined8 * FUN_1424e3c80(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = icu_64::CollationCacheEntry::vftable;
  FUN_1424a3ce0();
  param_1[0x1f] = param_3;
  if (param_3 != 0) {
    FUN_142537c90(param_3);
  }
  return param_1;
}



// FUNCTION 1424e3ce0 Unwind@1424e3ce0 body=32 status=ok
// SIG undefined Unwind@1424e3ce0(void)

void Unwind_1424e3ce0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424e3d00 Unwind@1424e3d00 body=32 status=ok
// SIG undefined Unwind@1424e3d00(void)

void Unwind_1424e3d00(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424e3d20 FUN_1424e3d20 body=167 status=ok
// SIG undefined FUN_1424e3d20(void)

void FUN_1424e3d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  int *param_5)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  int *local_38;
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *param_5) goto LAB_1424e3dba;
  local_24 = 0;
  local_30 = 0;
  local_38 = &local_24;
  FUN_14253f870(param_1,param_2,&local_30,param_3);
  lVar1 = local_30;
  if ((local_24 < 1) && (*param_4 != local_30)) {
    if (*param_4 != 0) {
      FUN_142537ca0();
    }
    *param_4 = lVar1;
    if (lVar1 != 0) {
      FUN_142537c90(lVar1);
LAB_1424e3da3:
      FUN_142537ca0(lVar1);
    }
  }
  else if (local_30 != 0) goto LAB_1424e3da3;
  if ((*param_5 == 0) || (0 < local_24)) {
    *param_5 = local_24;
  }
LAB_1424e3dba:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424e3dd0 FUN_1424e3dd0 body=64 status=ok
// SIG undefined FUN_1424e3dd0(void)

void FUN_1424e3dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1424edce0(param_1,param_2,"icudt64l-coll","collations",param_3,param_4,param_5,1,param_6);
  return;
}



// FUNCTION 1424e3e10 FUN_1424e3e10 body=38 status=ok
// SIG undefined FUN_1424e3e10(void)

undefined8 FUN_1424e3e10(undefined8 param_1,int param_2)

{
  FUN_14258a330();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424e3e40 FUN_1424e3e40 body=60 status=ok
// SIG undefined FUN_1424e3e40(void)

undefined8 * FUN_1424e3e40(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::LocaleCacheKey<icu_64::CollationCacheEntry>::vftable;
  FUN_1414b3f60(param_1 + 2);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424e3e80 FUN_1424e3e80 body=76 status=ok
// SIG undefined FUN_1424e3e80(void)

int FUN_1424e3e80(longlong param_1)

{
  int iVar1;
  int iVar2;
  char *_Str;
  size_t sVar3;
  
  _Str = (char *)__std_type_info_name(0x14c6d91e8,&DAT_14c793310);
  sVar3 = strlen(_Str);
  iVar1 = FUN_142504d90(_Str,sVar3 & 0xffffffff);
  iVar2 = FUN_1424a4050(param_1 + 0x10);
  return iVar2 + iVar1 * 0x25;
}



// FUNCTION 1424e3ed0 FUN_1424e3ed0 body=102 status=ok
// SIG undefined FUN_1424e3ed0(void)

undefined8 * FUN_1424e3ed0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::CacheKeyBase::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *puVar1 = icu_64::LocaleCacheKey<icu_64::CollationCacheEntry>::vftable;
    FUN_1424a3ce0(puVar1 + 2,param_1 + 0x10);
  }
  return puVar1;
}



// FUNCTION 1424e3f40 Unwind@1424e3f40 body=43 status=ok
// SIG undefined Unwind@1424e3f40(void)

void Unwind_1424e3f40(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  thunk_FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1424e3f70 FUN_1424e3f70 body=94 status=ok
// SIG undefined FUN_1424e3f70(void)

undefined8 FUN_1424e3f70(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if (iVar1 == 0) {
      uVar4 = FUN_1424a3f70(param_1 + 0x10,param_2 + 0x10);
      return uVar4;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1424e3fd0 FUN_1424e3fd0 body=43 status=ok
// SIG undefined FUN_1424e3fd0(void)

char * FUN_1424e3fd0(longlong param_1,char *param_2,int param_3)

{
  strncpy(param_2,*(char **)(param_1 + 0x38),(longlong)param_3);
  param_2[(longlong)param_3 - 1] = '\0';
  return param_2;
}



// FUNCTION 1424e4000 FUN_1424e4000 body=400 status=ok
// SIG undefined FUN_1424e4000(void)

void FUN_1424e4000(longlong *param_1,longlong param_2,longlong param_3,char *param_4,
                  longlong param_5,undefined1 param_6,undefined8 param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  size_t sVar5;
  char *_Str;
  longlong *plVar6;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong lStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = (longlong)param_1 + 0x3d;
  *(undefined4 *)(param_1 + 7) = 0x28;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = (longlong)param_1 + 0x7d;
  *(undefined4 *)(param_1 + 0xf) = 0x28;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = (longlong)param_1 + 0xbd;
  *(undefined4 *)(param_1 + 0x17) = 0x28;
  *(undefined2 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_2 == 0) {
    param_2 = FUN_1424d9a80();
  }
  local_40 = param_1 + 6;
  local_48 = param_1 + 0x16;
  *param_1 = param_2;
  local_38 = param_1;
  if (param_3 != 0) {
    uVar3 = FUN_1425034d0(local_48,0x5c,param_7);
    FUN_1425038b0(&local_68,param_3);
    FUN_142503520(uVar3,local_68,local_60,param_7);
  }
  pcVar4 = strrchr(param_4,0x5c);
  plVar6 = local_38;
  _Str = pcVar4 + 1;
  if (pcVar4 == (char *)0x0) {
    _Str = param_4;
  }
  local_38[2] = (longlong)_Str;
  sVar5 = strlen(_Str);
  plVar1 = local_40;
  *(int *)(plVar6 + 5) = (int)sVar5;
  if (_Str != param_4) {
    FUN_142503520(local_40,param_4,(int)_Str - (int)param_4,param_7);
    plVar6 = plVar1;
  }
  plVar2 = local_38;
  plVar1 = local_38 + 3;
  local_38[1] = *plVar6;
  if (param_5 == 0) {
    FUN_1425038b0(&local_58,&DAT_149e02088);
  }
  else {
    FUN_1425038b0(&local_58);
  }
  *plVar1 = local_58;
  plVar2[4] = lStack_50;
  *(undefined1 *)(local_38 + 0x1e) = param_6;
  return;
}



// FUNCTION 1424e4190 Unwind@1424e4190 body=101 status=ok
// SIG undefined Unwind@1424e4190(void)

void Unwind_1424e4190(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x50) + 0xbc) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x40));
  }
  if (*(char *)(*(longlong *)(param_2 + 0x50) + 0x7c) != '\0') {
    FUN_1424da110(*(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x70));
  }
  if (*(char *)(*(longlong *)(param_2 + 0x50) + 0x3c) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x48));
  }
  return;
}



// FUNCTION 1424e4200 FUN_1424e4200 body=557 status=ok
// SIG undefined FUN_1424e4200(void)

longlong FUN_1424e4200(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  int iVar9;
  ulonglong uVar10;
  
  if (*param_2 < 1) {
    plVar1 = param_1 + 0xe;
    do {
      pcVar3 = (char *)param_1[1];
      if (pcVar3 == (char *)0x0) {
        return 0;
      }
      if (pcVar3 == (char *)param_1[6]) {
        param_1[1] = *param_1;
LAB_1424e4287:
        uVar10 = strlen(pcVar3);
        iVar9 = (int)uVar10;
      }
      else {
        pcVar6 = strchr(pcVar3,0x3b);
        param_1[1] = (longlong)pcVar6;
        if (pcVar6 == (char *)0x0) goto LAB_1424e4287;
        uVar10 = (longlong)pcVar6 - (longlong)pcVar3;
        param_1[1] = (longlong)(pcVar6 + 1);
        iVar9 = (int)uVar10;
      }
      if (iVar9 != 0) {
        *(undefined4 *)(param_1 + 0x15) = 0;
        *(undefined1 *)param_1[0xe] = 0;
        iVar9 = (int)uVar10;
        FUN_142503520(plVar1,pcVar3,uVar10 & 0xffffffff,param_2);
        pcVar3 = (char *)param_1[0xe];
        pcVar7 = strrchr(pcVar3,0x5c);
        pcVar6 = pcVar3;
        if (pcVar7 != (char *)0x0) {
          pcVar6 = pcVar7 + 1;
        }
        if (((3 < iVar9) && ((char)param_1[0x1e] == '\x01')) &&
           (iVar4 = strncmp(pcVar3 + (iVar9 - 4),(char *)param_1[3],4), iVar4 == 0)) {
          uVar2 = *(uint *)(param_1 + 5);
          iVar4 = strncmp(pcVar6,(char *)param_1[2],(ulonglong)uVar2);
          if ((iVar4 == 0) && (sVar8 = strlen(pcVar6), sVar8 == uVar2 + 4)) goto LAB_1424e4423;
        }
        if (pcVar3[(longlong)((uVar10 << 0x20) + -0x100000000) >> 0x20] != '\\') {
          if ((3 < iVar9) && (iVar4 = strncmp(pcVar3 + (iVar9 - 4),".dat",4), iVar4 == 0))
          goto LAB_1424e4230;
          iVar4 = (int)param_1[0x1d];
          if (((longlong)iVar4 != 0) &&
             ((iVar4 < iVar9 &&
              (iVar5 = strcmp(pcVar3 + (((longlong)(uVar10 << 0x20) >> 0x20) - (longlong)iVar4),
                              (char *)param_1[0x16]), iVar5 == 0)))) {
            FUN_1425034b0(plVar1,iVar9 - iVar4);
          }
          FUN_1425034d0(plVar1,0x5c,param_2);
        }
        FUN_142503520(plVar1,param_1[0x16] + 1,(int)param_1[0x1d] + -1,param_2);
        iVar9 = (int)param_1[4];
        if (iVar9 != 0) {
          if (4 < iVar9) {
            FUN_142503840(plVar1,param_2);
            iVar9 = (int)param_1[4];
          }
          FUN_142503520(plVar1,param_1[3],iVar9,param_2);
        }
LAB_1424e4423:
        return *plVar1;
      }
LAB_1424e4230:
    } while (*param_1 != 0);
  }
  return 0;
}



// FUNCTION 1424e4440 FUN_1424e4440 body=462 status=ok
// SIG undefined FUN_1424e4440(void)

void FUN_1424e4440(longlong param_1,char param_2,int *param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  uVar3 = FUN_142532290(param_3);
  if (0 < *param_3) {
    return;
  }
  FUN_142532260(uVar3,param_1);
  FUN_142501320(0);
  if (DAT_14c77edc0 == 0) {
    puVar4 = &DAT_14c77edc0;
LAB_1424e45bd:
    *puVar4 = uVar3;
    bVar2 = true;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(DAT_14c77edc0 + 8) != lVar1) {
      if (DAT_14c77edc8 == 0) {
        puVar4 = &DAT_14c77edc8;
      }
      else {
        if (*(longlong *)(DAT_14c77edc8 + 8) == lVar1) goto LAB_1424e4561;
        if (DAT_14c77edd0 == 0) {
          puVar4 = &DAT_14c77edd0;
        }
        else {
          if (*(longlong *)(DAT_14c77edd0 + 8) == lVar1) goto LAB_1424e4561;
          if (DAT_14c77edd8 == 0) {
            puVar4 = &DAT_14c77edd8;
          }
          else {
            if (*(longlong *)(DAT_14c77edd8 + 8) == lVar1) goto LAB_1424e4561;
            if (DAT_14c77ede0 == 0) {
              puVar4 = &DAT_14c77ede0;
            }
            else {
              if (*(longlong *)(DAT_14c77ede0 + 8) == lVar1) goto LAB_1424e4561;
              if (DAT_14c77ede8 == 0) {
                puVar4 = &DAT_14c77ede8;
              }
              else {
                if (*(longlong *)(DAT_14c77ede8 + 8) == lVar1) goto LAB_1424e4561;
                if (DAT_14c77edf0 == 0) {
                  puVar4 = &DAT_14c77edf0;
                }
                else {
                  if (*(longlong *)(DAT_14c77edf0 + 8) == lVar1) goto LAB_1424e4561;
                  if (DAT_14c77edf8 == 0) {
                    puVar4 = &DAT_14c77edf8;
                  }
                  else {
                    if (*(longlong *)(DAT_14c77edf8 + 8) == lVar1) goto LAB_1424e4561;
                    if (DAT_14c77ee00 == 0) {
                      puVar4 = &DAT_14c77ee00;
                    }
                    else {
                      if (*(longlong *)(DAT_14c77ee00 + 8) == lVar1) goto LAB_1424e4561;
                      if (DAT_14c77ee08 != 0) {
                        bVar5 = *(longlong *)(DAT_14c77ee08 + 8) != lVar1;
                        bVar2 = false;
                        goto LAB_1424e45c6;
                      }
                      puVar4 = &DAT_14c77ee08;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_1424e45bd;
    }
LAB_1424e4561:
    bVar2 = false;
  }
  bVar5 = false;
LAB_1424e45c6:
  FUN_142501400(0);
  if ((param_2 != '\0') && (bVar5)) {
    *param_3 = -0x7f;
  }
  if (bVar2) {
    FUN_1424d6720(0x12,FUN_1424e5270);
    return;
  }
  FUN_1424da110(uVar3);
  return;
}



// FUNCTION 1424e4610 FUN_1424e4610 body=346 status=ok
// SIG undefined FUN_1424e4610(void)

void FUN_1424e4610(char *param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  size_t sVar5;
  longlong lVar6;
  char *_Str;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  uVar1 = FUN_1424e53e0(param_3);
  if (*param_3 < 1) {
    puVar2 = (undefined8 *)FUN_1424da030(0x10);
    if (puVar2 == (undefined8 *)0x0) {
      *param_3 = 7;
    }
    else {
      uVar3 = FUN_142532290(param_3);
      puVar2[1] = uVar3;
      if (*param_3 < 1) {
        FUN_142532260(uVar3,param_2);
        pcVar4 = strrchr(param_1,0x5c);
        _Str = pcVar4 + 1;
        if (pcVar4 == (char *)0x0) {
          _Str = param_1;
        }
        sVar5 = strlen(_Str);
        pcVar4 = (char *)FUN_1424da030((longlong)((int)sVar5 + 1));
        *puVar2 = pcVar4;
        if (pcVar4 != (char *)0x0) {
          strcpy(pcVar4,_Str);
          FUN_142501320(0);
          lVar6 = FUN_142502620(uVar1,param_1);
          if (lVar6 == 0) {
            FUN_142502aa0(uVar1,*puVar2,puVar2,&local_34);
          }
          else {
            local_34 = -0x7f;
          }
          FUN_142501400(0);
          if ((local_34 == -0x7f) || (0 < local_34)) {
            *param_3 = local_34;
            FUN_1424da110(*puVar2);
            FUN_1424da110(puVar2[1]);
            FUN_1424da110(puVar2);
          }
          goto LAB_1424e4680;
        }
        *param_3 = 7;
        FUN_1424da110(puVar2[1]);
      }
      FUN_1424da110(puVar2);
    }
  }
LAB_1424e4680:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424e4780 FUN_1424e4780 body=64 status=ok
// SIG undefined FUN_1424e4780(void)

undefined8 FUN_1424e4780(undefined8 param_1,undefined8 param_2,char *param_3,int *param_4)

{
  undefined8 uVar1;
  
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      uVar1 = FUN_1424e47c0();
      return uVar1;
    }
    *param_4 = 1;
  }
  return 0;
}



// FUNCTION 1424e47c0 FUN_1424e47c0 body=2300 status=ok
// SIG undefined FUN_1424e47c0(void)

longlong FUN_1424e47c0(char *param_1,char *param_2,char *param_3,undefined8 param_4,
                      undefined8 param_5,int *param_6)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined4 local_160;
  char *local_158;
  undefined4 local_150;
  undefined2 local_14c;
  int local_120;
  longlong local_118;
  undefined4 local_110;
  undefined2 local_10c;
  int local_e0;
  char *local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined4 local_a0;
  char *local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong uVar6;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = 0;
  local_58 = param_4;
  if (param_1 == (char *)0x0) {
    local_d8 = (char *)((longlong)&local_cc + 1);
    local_d0 = 0x28;
    local_cc = 0;
    local_a0 = 0;
    local_4c = (undefined4)CONCAT71((int7)((ulonglong)local_d8 >> 8),1);
    bVar1 = false;
    param_1 = (char *)0x0;
  }
  else {
    uVar4 = strcmp(param_1,"ICUDATA");
    uVar6 = (ulonglong)uVar4;
    if (uVar4 == 0) {
LAB_1424e486a:
      local_4c = (undefined4)CONCAT71((int7)(uVar6 >> 8),1);
      bVar1 = false;
    }
    else {
      uVar4 = strncmp(param_1,"icudt64l-",9);
      uVar6 = (ulonglong)uVar4;
      if (uVar4 == 0) goto LAB_1424e486a;
      uVar4 = strncmp(param_1,"ICUDATA-",8);
      uVar6 = (ulonglong)uVar4;
      if (uVar4 == 0) goto LAB_1424e486a;
      bVar1 = true;
      local_4c = 0;
    }
    local_d8 = (char *)((longlong)&local_cc + 1);
    local_d0 = 0x28;
    local_cc = 0;
    local_a0 = 0;
    pcVar7 = strchr(param_1,0x2f);
    if (pcVar7 != (char *)0x0) {
      FUN_1425038b0(&local_278,param_1);
      FUN_142503520(&local_d8,local_278,local_270,param_6);
      while (param_1 = local_d8, pcVar7 = strchr(local_d8,0x2f), pcVar7 != (char *)0x0) {
        *pcVar7 = '\\';
      }
    }
  }
  local_118 = (longlong)&local_10c + 1;
  local_110 = 0x28;
  local_10c = 0;
  local_e0 = 0;
  local_198 = (longlong)&local_18c + 1;
  local_190 = 0x28;
  local_18c = 0;
  local_160 = 0;
  local_98 = (char *)((longlong)&local_8c + 1);
  local_90 = 0x28;
  local_8c = 0;
  local_60 = 0;
  local_158 = (char *)((longlong)&local_14c + 1);
  local_150 = 0x28;
  local_14c = 0;
  local_120 = 0;
  if (param_1 == (char *)0x0) {
    FUN_1425038b0(&local_268,"icudt64l");
    FUN_142503520(&local_98,local_268,local_260,param_6);
    param_1 = (char *)0x0;
  }
  else {
    pcVar7 = strrchr(param_1,0x5c);
    pcVar8 = strchr(param_1,0x5c);
    cVar3 = FUN_1424d9a50(param_1);
    if ((cVar3 == '\0') && (pcVar7 == pcVar8)) {
      pcVar8 = strchr(param_1,0x2d);
      if (pcVar8 == (char *)0x0) {
        if (bVar1) {
          FUN_1425038b0(&local_208,param_1);
          FUN_142503520(&local_98,local_208,local_200,param_6);
        }
        else {
          FUN_1425038b0(&local_218,"icudt64l");
          FUN_142503520(&local_98,local_218,local_210,param_6);
        }
      }
      else {
        FUN_1425038b0(&local_238,pcVar8 + 1);
        FUN_142503520(&local_158,local_238,local_230,param_6);
        if (bVar1) {
          FUN_142503520(&local_98,param_1,(int)pcVar8 - (int)param_1,param_6);
          if (pcVar7 == (char *)0x0) {
            param_1 = local_98;
          }
        }
        else {
          FUN_1425038b0(&local_228,"icudt64l");
          FUN_142503520(&local_98,local_228,local_220,param_6);
        }
      }
    }
    else if (pcVar7 == (char *)0x0) {
      FUN_1425038b0(&local_248,param_1);
      FUN_142503520(&local_98,local_248,local_240,param_6);
    }
    else {
      FUN_1425038b0(&local_258,pcVar7 + 1);
      FUN_142503520(&local_98,local_258,local_250,param_6);
    }
  }
  FUN_142503520(&local_118,local_98,local_60,param_6);
  FUN_142503520(&local_198,local_98,local_60,param_6);
  lVar12 = (longlong)local_e0;
  if (local_120 != 0) {
    uVar9 = FUN_1425034d0(&local_118,0x2f,param_6);
    FUN_142503520(uVar9,local_158,local_120,param_6);
    uVar9 = FUN_1425034d0(&local_198,0x5c,param_6);
    FUN_142503520(uVar9,local_158,local_120,param_6);
  }
  uVar9 = FUN_1425034d0(&local_118,0x2f,param_6);
  FUN_1425038b0(&local_1f8,param_3);
  FUN_142503520(uVar9,local_1f8,local_1f0,param_6);
  uVar9 = FUN_1425034d0(&local_198,0x5c,param_6);
  FUN_1425038b0(&local_1e8,param_3);
  FUN_142503520(uVar9,local_1e8,local_1e0,param_6);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    FUN_1425038b0(&local_1d8,L".Preview");
    uVar9 = FUN_142503520(&local_118,local_1d8,local_1d0,param_6);
    FUN_1425038b0(&local_1c8,param_2);
    FUN_142503520(uVar9,local_1c8,local_1c0,param_6);
    FUN_1425038b0(&local_1b8,L".Preview");
    uVar9 = FUN_142503520(&local_198,local_1b8,local_1b0,param_6);
    FUN_1425038b0(&local_1a8,param_2);
    FUN_142503520(uVar9,local_1a8,local_1a0,param_6);
  }
  lVar12 = local_198 + lVar12 + 1;
  pcVar7 = "icudt64l";
  if (param_1 != (char *)0x0) {
    pcVar7 = param_1;
  }
  pcVar8 = (char *)FUN_1424d9a80();
  if (((((byte)local_4c == '\0') || (iVar5 = strcmp(param_2,"res"), iVar5 != 0)) ||
      ((iVar5 = strcmp(param_3,"zoneinfo64"), iVar5 != 0 &&
       (((iVar5 = strcmp(param_3,"timezoneTypes"), iVar5 != 0 &&
         (iVar5 = strcmp(param_3,"windowsZones"), iVar5 != 0)) &&
        (iVar5 = strcmp(param_3,"metaZones"), iVar5 != 0)))))) ||
     (pcVar11 = (char *)FUN_1424d9ad0(param_6), *pcVar11 == '\0')) {
LAB_1424e4d9c:
    if (DAT_14c77edb0 == 2) {
      lVar10 = FUN_1424e5670(local_4c,local_118,pcVar7,param_2,param_3,local_58,param_5,&local_50,
                             param_6);
      if (lVar10 != 0) goto LAB_1424e5036;
      if (0 < *param_6) goto LAB_1424e5033;
    }
    if ((DAT_14c77edb0 & 0xfffffffd) == 0) {
      bVar2 = (byte)local_4c;
      if (pcVar8 != (char *)0x0) {
        bVar2 = (byte)local_4c & *pcVar8 == '\0';
      }
      if (bVar2 == 0) {
        lVar10 = FUN_1424e54c0(local_98,pcVar8,lVar12,pcVar7,param_2,param_3,local_58,param_5,
                               &local_50,param_6);
        if (lVar10 != 0) goto LAB_1424e5036;
        if (0 < *param_6) goto LAB_1424e5033;
      }
    }
    if (DAT_14c77edb0 < 2) {
      lVar10 = FUN_1424e5670(local_4c,local_118,pcVar7,param_2,param_3,local_58,param_5,&local_50,
                             param_6);
      if (lVar10 != 0) goto LAB_1424e5036;
      if (0 < *param_6) goto LAB_1424e5033;
    }
    if ((DAT_14c77edb0 == 3) &&
       (lVar10 = FUN_1424e5670(local_4c,local_118,pcVar7,param_2,param_3,local_58,param_5,&local_50,
                               param_6), lVar10 != 0)) goto LAB_1424e5036;
    if (*param_6 < 1) {
      iVar5 = 4;
      if (0 < local_50) {
        iVar5 = local_50;
      }
      *param_6 = iVar5;
    }
  }
  else {
    lVar10 = FUN_1424e54c0(&DAT_149e02088,pcVar11,lVar12,&DAT_149e02088,param_2,param_3,local_58,
                           param_5,&local_50,param_6);
    if (lVar10 != 0) goto LAB_1424e5036;
    if (*param_6 < 1) goto LAB_1424e4d9c;
  }
LAB_1424e5033:
  lVar10 = 0;
LAB_1424e5036:
  if ((char)local_14c != '\0') {
    FUN_1424da110(local_158);
  }
  if ((char)local_8c != '\0') {
    FUN_1424da110(local_98);
  }
  if ((char)local_18c != '\0') {
    FUN_1424da110(local_198);
  }
  if ((char)local_10c != '\0') {
    FUN_1424da110(local_118);
  }
  if ((char)local_cc != '\0') {
    FUN_1424da110(local_d8);
  }
  return lVar10;
}



// FUNCTION 1424e50d0 Unwind@1424e50d0 body=159 status=ok
// SIG undefined Unwind@1424e50d0(void)

/* WARNING: Type propagation algorithm not settling */

void Unwind_1424e50d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 0x17c) == '\0') {
    cVar1 = *(char *)(param_2 + 0x23c);
  }
  else {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x170));
    cVar1 = *(char *)(param_2 + 0x23c);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_2 + 0x13c);
  }
  else {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x230));
    cVar1 = *(char *)(param_2 + 0x13c);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_2 + 0x1bc);
  }
  else {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x130));
    cVar1 = *(char *)(param_2 + 0x1bc);
  }
  if (cVar1 != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x1b0));
  }
  return;
}



// FUNCTION 1424e5170 Unwind@1424e5170 body=67 status=ok
// SIG undefined Unwind@1424e5170(void)

void Unwind_1424e5170(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1fc) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x1f0));
  }
  return;
}



// FUNCTION 1424e51c0 FUN_1424e51c0 body=47 status=ok
// SIG undefined FUN_1424e51c0(void)

longlong FUN_1424e51c0(char *param_1,char *param_2,char *param_3,longlong param_4,undefined8 param_5
                      ,int *param_6)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  longlong lStack_198;
  undefined4 uStack_190;
  undefined2 uStack_18c;
  undefined4 uStack_160;
  char *pcStack_158;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  int iStack_120;
  longlong lStack_118;
  undefined4 uStack_110;
  undefined2 uStack_10c;
  int iStack_e0;
  char *pcStack_d8;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined4 uStack_a0;
  char *pcStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined4 uStack_60;
  longlong lStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulonglong uVar6;
  
  if ((param_6 == (int *)0x0) || (0 < *param_6)) {
    return 0;
  }
  if (((param_3 == (char *)0x0) || (param_4 == 0)) || (*param_3 == '\0')) {
    *param_6 = 1;
    return 0;
  }
  uStack_48 = 0xfffffffffffffffe;
  iStack_50 = 0;
  lStack_58 = param_4;
  if (param_1 == (char *)0x0) {
    pcStack_d8 = (char *)((longlong)&uStack_cc + 1);
    uStack_d0 = 0x28;
    uStack_cc = 0;
    uStack_a0 = 0;
    uStack_4c = (undefined4)CONCAT71((int7)((ulonglong)pcStack_d8 >> 8),1);
    bVar1 = false;
    param_1 = (char *)0x0;
  }
  else {
    uVar4 = strcmp(param_1,"ICUDATA");
    uVar6 = (ulonglong)uVar4;
    if (uVar4 == 0) {
LAB_1424e486a:
      uStack_4c = (undefined4)CONCAT71((int7)(uVar6 >> 8),1);
      bVar1 = false;
    }
    else {
      uVar4 = strncmp(param_1,"icudt64l-",9);
      uVar6 = (ulonglong)uVar4;
      if (uVar4 == 0) goto LAB_1424e486a;
      uVar4 = strncmp(param_1,"ICUDATA-",8);
      uVar6 = (ulonglong)uVar4;
      if (uVar4 == 0) goto LAB_1424e486a;
      bVar1 = true;
      uStack_4c = 0;
    }
    pcStack_d8 = (char *)((longlong)&uStack_cc + 1);
    uStack_d0 = 0x28;
    uStack_cc = 0;
    uStack_a0 = 0;
    pcVar7 = strchr(param_1,0x2f);
    if (pcVar7 != (char *)0x0) {
      FUN_1425038b0(&uStack_278,param_1);
      FUN_142503520(&pcStack_d8,uStack_278,uStack_270,param_6);
      while (param_1 = pcStack_d8, pcVar7 = strchr(pcStack_d8,0x2f), pcVar7 != (char *)0x0) {
        *pcVar7 = '\\';
      }
    }
  }
  lStack_118 = (longlong)&uStack_10c + 1;
  uStack_110 = 0x28;
  uStack_10c = 0;
  iStack_e0 = 0;
  lStack_198 = (longlong)&uStack_18c + 1;
  uStack_190 = 0x28;
  uStack_18c = 0;
  uStack_160 = 0;
  pcStack_98 = (char *)((longlong)&uStack_8c + 1);
  uStack_90 = 0x28;
  uStack_8c = 0;
  uStack_60 = 0;
  pcStack_158 = (char *)((longlong)&uStack_14c + 1);
  uStack_150 = 0x28;
  uStack_14c = 0;
  iStack_120 = 0;
  if (param_1 == (char *)0x0) {
    FUN_1425038b0(&uStack_268,"icudt64l");
    FUN_142503520(&pcStack_98,uStack_268,uStack_260,param_6);
    param_1 = (char *)0x0;
  }
  else {
    pcVar7 = strrchr(param_1,0x5c);
    pcVar8 = strchr(param_1,0x5c);
    cVar3 = FUN_1424d9a50(param_1);
    if ((cVar3 == '\0') && (pcVar7 == pcVar8)) {
      pcVar8 = strchr(param_1,0x2d);
      if (pcVar8 == (char *)0x0) {
        if (bVar1) {
          FUN_1425038b0(&uStack_208,param_1);
          FUN_142503520(&pcStack_98,uStack_208,uStack_200,param_6);
        }
        else {
          FUN_1425038b0(&uStack_218,"icudt64l");
          FUN_142503520(&pcStack_98,uStack_218,uStack_210,param_6);
        }
      }
      else {
        FUN_1425038b0(&uStack_238,pcVar8 + 1);
        FUN_142503520(&pcStack_158,uStack_238,uStack_230,param_6);
        if (bVar1) {
          FUN_142503520(&pcStack_98,param_1,(int)pcVar8 - (int)param_1,param_6);
          if (pcVar7 == (char *)0x0) {
            param_1 = pcStack_98;
          }
        }
        else {
          FUN_1425038b0(&uStack_228,"icudt64l");
          FUN_142503520(&pcStack_98,uStack_228,uStack_220,param_6);
        }
      }
    }
    else if (pcVar7 == (char *)0x0) {
      FUN_1425038b0(&uStack_248,param_1);
      FUN_142503520(&pcStack_98,uStack_248,uStack_240,param_6);
    }
    else {
      FUN_1425038b0(&uStack_258,pcVar7 + 1);
      FUN_142503520(&pcStack_98,uStack_258,uStack_250,param_6);
    }
  }
  FUN_142503520(&lStack_118,pcStack_98,uStack_60,param_6);
  FUN_142503520(&lStack_198,pcStack_98,uStack_60,param_6);
  lVar12 = (longlong)iStack_e0;
  if (iStack_120 != 0) {
    uVar9 = FUN_1425034d0(&lStack_118,0x2f,param_6);
    FUN_142503520(uVar9,pcStack_158,iStack_120,param_6);
    uVar9 = FUN_1425034d0(&lStack_198,0x5c,param_6);
    FUN_142503520(uVar9,pcStack_158,iStack_120,param_6);
  }
  uVar9 = FUN_1425034d0(&lStack_118,0x2f,param_6);
  FUN_1425038b0(&uStack_1f8,param_3);
  FUN_142503520(uVar9,uStack_1f8,uStack_1f0,param_6);
  uVar9 = FUN_1425034d0(&lStack_198,0x5c,param_6);
  FUN_1425038b0(&uStack_1e8,param_3);
  FUN_142503520(uVar9,uStack_1e8,uStack_1e0,param_6);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    FUN_1425038b0(&uStack_1d8,L".Preview");
    uVar9 = FUN_142503520(&lStack_118,uStack_1d8,uStack_1d0,param_6);
    FUN_1425038b0(&uStack_1c8,param_2);
    FUN_142503520(uVar9,uStack_1c8,uStack_1c0,param_6);
    FUN_1425038b0(&uStack_1b8,L".Preview");
    uVar9 = FUN_142503520(&lStack_198,uStack_1b8,uStack_1b0,param_6);
    FUN_1425038b0(&uStack_1a8,param_2);
    FUN_142503520(uVar9,uStack_1a8,uStack_1a0,param_6);
  }
  lVar12 = lStack_198 + lVar12 + 1;
  pcVar7 = "icudt64l";
  if (param_1 != (char *)0x0) {
    pcVar7 = param_1;
  }
  pcVar8 = (char *)FUN_1424d9a80();
  if (((((byte)uStack_4c == '\0') || (iVar5 = strcmp(param_2,"res"), iVar5 != 0)) ||
      ((iVar5 = strcmp(param_3,"zoneinfo64"), iVar5 != 0 &&
       (((iVar5 = strcmp(param_3,"timezoneTypes"), iVar5 != 0 &&
         (iVar5 = strcmp(param_3,"windowsZones"), iVar5 != 0)) &&
        (iVar5 = strcmp(param_3,"metaZones"), iVar5 != 0)))))) ||
     (pcVar11 = (char *)FUN_1424d9ad0(param_6), *pcVar11 == '\0')) {
LAB_1424e4d9c:
    if (DAT_14c77edb0 == 2) {
      lVar10 = FUN_1424e5670(uStack_4c,lStack_118,pcVar7,param_2,param_3,lStack_58,param_5,
                             &iStack_50,param_6);
      if (lVar10 != 0) goto LAB_1424e5036;
      if (0 < *param_6) goto LAB_1424e5033;
    }
    if ((DAT_14c77edb0 & 0xfffffffd) == 0) {
      bVar2 = (byte)uStack_4c;
      if (pcVar8 != (char *)0x0) {
        bVar2 = (byte)uStack_4c & *pcVar8 == '\0';
      }
      if (bVar2 == 0) {
        lVar10 = FUN_1424e54c0(pcStack_98,pcVar8,lVar12,pcVar7,param_2,param_3,lStack_58,param_5,
                               &iStack_50,param_6);
        if (lVar10 != 0) goto LAB_1424e5036;
        if (0 < *param_6) goto LAB_1424e5033;
      }
    }
    if (DAT_14c77edb0 < 2) {
      lVar10 = FUN_1424e5670(uStack_4c,lStack_118,pcVar7,param_2,param_3,lStack_58,param_5,
                             &iStack_50,param_6);
      if (lVar10 != 0) goto LAB_1424e5036;
      if (0 < *param_6) goto LAB_1424e5033;
    }
    if ((DAT_14c77edb0 == 3) &&
       (lVar10 = FUN_1424e5670(uStack_4c,lStack_118,pcVar7,param_2,param_3,lStack_58,param_5,
                               &iStack_50,param_6), lVar10 != 0)) goto LAB_1424e5036;
    if (*param_6 < 1) {
      iVar5 = 4;
      if (0 < iStack_50) {
        iVar5 = iStack_50;
      }
      *param_6 = iVar5;
    }
  }
  else {
    lVar10 = FUN_1424e54c0(&DAT_149e02088,pcVar11,lVar12,&DAT_149e02088,param_2,param_3,lStack_58,
                           param_5,&iStack_50,param_6);
    if (lVar10 != 0) goto LAB_1424e5036;
    if (*param_6 < 1) goto LAB_1424e4d9c;
  }
LAB_1424e5033:
  lVar10 = 0;
LAB_1424e5036:
  if ((char)uStack_14c != '\0') {
    FUN_1424da110(pcStack_158);
  }
  if ((char)uStack_8c != '\0') {
    FUN_1424da110(pcStack_98);
  }
  if ((char)uStack_18c != '\0') {
    FUN_1424da110(lStack_198);
  }
  if ((char)uStack_10c != '\0') {
    FUN_1424da110(lStack_118);
  }
  if ((char)uStack_cc != '\0') {
    FUN_1424da110(pcStack_d8);
  }
  return lVar10;
}



// FUNCTION 1424e51f0 FUN_1424e51f0 body=109 status=ok
// SIG undefined FUN_1424e51f0(void)

void FUN_1424e51f0(longlong param_1,ushort *param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (param_2 != (ushort *)0x0) {
    if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 8), lVar1 == 0)) {
      *param_2 = 0;
    }
    else {
      uVar2 = FUN_14258c8e0(lVar1 + 4);
      uVar3 = *param_2;
      if (uVar2 < *param_2) {
        *param_2 = uVar2;
        uVar3 = uVar2;
      }
      memcpy(param_2 + 1,(ushort *)(lVar1 + 6),(ulonglong)uVar3 - 2);
      if (*(char *)(lVar1 + 8) != '\0') {
        uVar3 = *(ushort *)(lVar1 + 6);
        param_2[1] = uVar3 << 8 | uVar3 >> 8;
      }
    }
  }
  return;
}



// FUNCTION 1424e5260 FUN_1424e5260 body=7 status=ok
// SIG undefined FUN_1424e5260(void)

void FUN_1424e5260(undefined4 param_1)

{
  DAT_14c77edb0 = param_1;
  return;
}



// FUNCTION 1424e5270 FUN_1424e5270 body=361 status=ok
// SIG undefined FUN_1424e5270(void)

undefined8 FUN_1424e5270(void)

{
  if (DAT_14c77ee10 != 0) {
    FUN_142502220();
    DAT_14c77ee10 = 0;
  }
  LOCK();
  DAT_14c77ee18 = 0;
  UNLOCK();
  if (DAT_14c77edc0 != 0) {
    FUN_142532330();
    DAT_14c77edc0 = 0;
    if (DAT_14c77edc8 != 0) {
      FUN_142532330();
      DAT_14c77edc8 = 0;
      if (DAT_14c77edd0 != 0) {
        FUN_142532330();
        DAT_14c77edd0 = 0;
        if (DAT_14c77edd8 != 0) {
          FUN_142532330();
          DAT_14c77edd8 = 0;
          if (DAT_14c77ede0 != 0) {
            FUN_142532330();
            DAT_14c77ede0 = 0;
            if (DAT_14c77ede8 != 0) {
              FUN_142532330();
              DAT_14c77ede8 = 0;
              if (DAT_14c77edf0 != 0) {
                FUN_142532330();
                DAT_14c77edf0 = 0;
                if (DAT_14c77edf8 != 0) {
                  FUN_142532330();
                  DAT_14c77edf8 = 0;
                  if (DAT_14c77ee00 != 0) {
                    FUN_142532330();
                    DAT_14c77ee00 = 0;
                    if (DAT_14c77ee08 != 0) {
                      FUN_142532330();
                      DAT_14c77ee08 = 0;
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
  LOCK();
  DAT_14c77ee20 = 0;
  UNLOCK();
  return 1;
}



// FUNCTION 1424e53e0 FUN_1424e53e0 body=161 status=ok
// SIG undefined FUN_1424e53e0(void)

undefined8 FUN_1424e53e0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*param_1 < 1) {
    if ((DAT_14c77ee18 != 2) && (cVar1 = FUN_142501800(&DAT_14c77ee18), cVar1 != '\0')) {
      DAT_14c77ee10 = FUN_142501e10(FUN_1425031c0,FUN_142503270,0,param_1);
      iVar2 = *param_1;
      if (iVar2 < 1) {
        FUN_142502350(DAT_14c77ee10,FUN_1424e5490);
        FUN_1424d6720(0x12,FUN_1424e5270);
        iVar2 = *param_1;
      }
      DAT_14c77ee1c = iVar2;
      FUN_1425019c0(&DAT_14c77ee18);
      return DAT_14c77ee10;
    }
    if (0 < DAT_14c77ee1c) {
      *param_1 = DAT_14c77ee1c;
    }
  }
  return DAT_14c77ee10;
}



// FUNCTION 1424e5490 FUN_1424e5490 body=38 status=ok
// SIG undefined FUN_1424e5490(void)

void FUN_1424e5490(undefined8 *param_1)

{
  FUN_142532330(param_1[1]);
  FUN_1424da110(*param_1);
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 1424e54c0 FUN_1424e54c0 body=355 status=ok
// SIG undefined FUN_1424e54c0(void)

longlong FUN_1424e54c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8,
                      undefined4 *param_9,int *param_10)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_178 [48];
  undefined8 local_148;
  char local_13c;
  undefined8 local_108;
  char local_fc;
  undefined8 local_c8;
  char local_bc;
  undefined1 local_80 [8];
  longlong local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1424e4000(local_178,param_2,param_1,param_4,param_3,0,param_10);
  lVar4 = 0;
  do {
    do {
      lVar2 = FUN_1424e4200(local_178,param_10);
      if (lVar2 == 0) {
LAB_1424e55df:
        if (local_bc != '\0') {
          FUN_1424da110(local_c8);
        }
        if (local_fc != '\0') {
          FUN_1424da110(local_108);
        }
        if (local_13c != '\0') {
          FUN_1424da110(local_148);
        }
        return lVar4;
      }
      cVar1 = FUN_1424d9f80(local_80,lVar2,param_10);
      lVar2 = local_78;
    } while (cVar1 == '\0');
    if (*param_10 < 1) {
      if ((*(char *)(local_78 + 2) == -0x26) && (*(char *)(local_78 + 3) == '\'')) {
        if (param_7 != (code *)0x0) {
          cVar1 = (*param_7)(param_8,param_5,param_6,local_78 + 4);
          if (cVar1 == '\0') goto LAB_1424e55a4;
        }
        lVar3 = FUN_142532290(param_10);
        if (*param_10 < 1) {
          *(longlong *)(lVar3 + 8) = lVar2;
          *(undefined8 *)(lVar3 + 0x20) = local_60;
          *(undefined8 *)(lVar3 + 0x28) = local_58;
          lVar4 = lVar3;
          goto LAB_1424e55df;
        }
      }
      else {
LAB_1424e55a4:
        *param_9 = 3;
      }
    }
    FUN_142532330(local_80);
    if (0 < *param_10) goto LAB_1424e55df;
    *param_9 = 3;
  } while( true );
}



// FUNCTION 1424e5630 Unwind@1424e5630 body=55 status=ok
// SIG undefined Unwind@1424e5630(void)

void Unwind_1424e5630(undefined8 param_1,longlong param_2)

{
  FUN_1424e5a10(param_2 + 0x40);
  return;
}



// FUNCTION 1424e5670 FUN_1424e5670 body=876 status=ok
// SIG undefined FUN_1424e5670(void)

void FUN_1424e5670(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,int *param_8,int *param_9)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  char *pcVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar9 = -(uint)(param_1 == '\0');
  bVar1 = false;
  local_a8 = param_4;
  local_a0 = param_2;
  while( true ) {
    while( true ) {
      puVar4 = (undefined8 *)FUN_1424e5a60(param_3,iVar9,param_8);
      iVar3 = *param_8;
      if ((puVar4 != (undefined8 *)0x0) && (iVar3 < 1)) {
        lVar5 = (**(code **)*puVar4)(puVar4,local_a0,local_98,param_8);
        if (lVar5 != 0) {
          if (0 < *param_9) goto LAB_1424e59c5;
          if (((*(char *)(lVar5 + 2) == -0x26) && (*(char *)(lVar5 + 3) == '\'')) &&
             ((param_6 == (code *)0x0 ||
              (cVar2 = (*param_6)(param_7,local_a8,param_5,lVar5 + 4), cVar2 != '\0')))) {
            lVar8 = FUN_142532290();
            if ((*param_9 < 1) && (*(longlong *)(lVar8 + 8) = lVar5, *param_9 < 1)) {
              *(undefined4 *)(lVar8 + 0x30) = local_98[0];
            }
            goto LAB_1424e59c5;
          }
          *param_8 = 3;
          if (0 < *param_9) goto LAB_1424e59c5;
        }
        iVar3 = *param_8;
      }
      if (iVar3 == 7) {
        *param_9 = 7;
        goto LAB_1424e59c5;
      }
      if (param_1 == '\0') goto LAB_1424e59c5;
      if (puVar4 == (undefined8 *)0x0) break;
      iVar9 = iVar9 + 1;
    }
    if (bVar1) goto LAB_1424e59c5;
    if (DAT_14c77ee20 == 0) {
      lVar5 = FUN_1424e5a60("icudt64l",0xffffffff,param_8);
      FUN_142532240(local_98);
      if (lVar5 != 0) {
        FUN_142532260(local_98,lVar5);
        local_78 = 0;
        uStack_70 = 0;
        FUN_1424e4440(local_98,0,param_8);
      }
      DAT_14c77ee20 = 1;
    }
    uVar6 = FUN_1424e53e0(param_8);
    if (0 < *param_8) goto LAB_1424e59c5;
    pcVar7 = strrchr("icudt64l",0x5c);
    pcVar10 = pcVar7 + 1;
    if (pcVar7 == (char *)0x0) {
      pcVar10 = "icudt64l";
    }
    FUN_142501320(0);
    lVar5 = FUN_142502620(uVar6,pcVar10);
    FUN_142501400(0);
    if (((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 8), lVar5 == 0)) || (0 < *param_8))
    goto LAB_1424e59c5;
    FUN_142501320(0);
    if (((((((DAT_14c77edc0 == 0) || (*(longlong *)(DAT_14c77edc0 + 8) != *(longlong *)(lVar5 + 8)))
           && ((DAT_14c77edc8 == 0 || (*(longlong *)(DAT_14c77edc8 + 8) != *(longlong *)(lVar5 + 8))
               ))) &&
          ((DAT_14c77edd0 == 0 || (*(longlong *)(DAT_14c77edd0 + 8) != *(longlong *)(lVar5 + 8)))))
         && (((DAT_14c77edd8 == 0 || (*(longlong *)(DAT_14c77edd8 + 8) != *(longlong *)(lVar5 + 8)))
             && ((((DAT_14c77ede0 == 0 ||
                   (*(longlong *)(DAT_14c77ede0 + 8) != *(longlong *)(lVar5 + 8))) &&
                  ((DAT_14c77ede8 == 0 ||
                   (*(longlong *)(DAT_14c77ede8 + 8) != *(longlong *)(lVar5 + 8))))) &&
                 ((DAT_14c77edf0 == 0 ||
                  (*(longlong *)(DAT_14c77edf0 + 8) != *(longlong *)(lVar5 + 8))))))))) &&
        ((DAT_14c77edf8 == 0 || (*(longlong *)(DAT_14c77edf8 + 8) != *(longlong *)(lVar5 + 8))))) &&
       (((DAT_14c77ee00 == 0 || (*(longlong *)(DAT_14c77ee00 + 8) != *(longlong *)(lVar5 + 8))) &&
        ((DAT_14c77ee08 == 0 || (*(longlong *)(DAT_14c77ee08 + 8) != *(longlong *)(lVar5 + 8)))))))
    break;
    FUN_142501400(0);
    bVar1 = true;
  }
  FUN_142501400(0);
LAB_1424e59c5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1424e5a10 FUN_1424e5a10 body=71 status=ok
// SIG undefined FUN_1424e5a10(void)

void FUN_1424e5a10(longlong param_1)

{
  if (*(char *)(param_1 + 0xbc) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0xb0));
  }
  if (*(char *)(param_1 + 0x7c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



// FUNCTION 1424e5a60 FUN_1424e5a60 body=577 status=ok
// SIG undefined FUN_1424e5a60(void)

longlong FUN_1424e5a60(char *param_1,uint param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  char *_Str;
  ulonglong uVar7;
  undefined1 local_168 [248];
  undefined1 local_70 [56];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (0 < *param_3) {
    return 0;
  }
  FUN_142532240(local_70);
  if (-1 < (int)param_2) {
    if (9 < param_2) {
      return 0;
    }
    FUN_142501320(0);
    uVar7 = (ulonglong)param_2;
    lVar5 = (&DAT_14c77edc0)[uVar7];
    if (lVar5 == 0) {
      if (param_2 != 0) {
        lVar5 = 0;
        lVar6 = 0;
        do {
          if (*(undefined **)(*(longlong *)((longlong)&DAT_14c77edc0 + lVar6) + 8) == &DAT_1499fb4d0
             ) goto LAB_1424e5b48;
          lVar6 = lVar6 + 8;
        } while (uVar7 * 8 - lVar6 != 0);
      }
      FUN_142501400(0);
      FUN_142532240(local_168);
      FUN_142532300(local_168,&DAT_1499fb4d0);
      FUN_14258c900(local_168,param_3);
      FUN_1424e4440(local_168,0,param_3);
      FUN_142501320(0);
      lVar5 = (&DAT_14c77edc0)[uVar7];
    }
LAB_1424e5b48:
    FUN_142501400(0);
    return lVar5;
  }
  pcVar2 = strrchr(param_1,0x5c);
  _Str = pcVar2 + 1;
  if (pcVar2 == (char *)0x0) {
    _Str = param_1;
  }
  if (*_Str == '\0') {
    if (0 < *param_3) {
      return 0;
    }
    *param_3 = 4;
    return 0;
  }
  uVar3 = FUN_1424e53e0(param_3);
  if (0 < *param_3) {
    return 0;
  }
  pcVar4 = strrchr(_Str,0x5c);
  pcVar2 = pcVar4 + 1;
  if (pcVar4 == (char *)0x0) {
    pcVar2 = _Str;
  }
  FUN_142501320(0);
  lVar5 = FUN_142502620(uVar3,pcVar2);
  FUN_142501400(0);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
    return *(longlong *)(lVar5 + 8);
  }
  if (0 < *param_3) {
    return 0;
  }
  uVar3 = FUN_1424d9a80();
  FUN_1424e4000(local_168,uVar3,_Str,param_1,&DAT_149967aa4,1,param_3);
  while ((cVar1 = FUN_1425323f0(local_70), cVar1 == '\0' &&
         (lVar5 = FUN_1424e4200(local_168,param_3), lVar5 != 0))) {
    FUN_1424d9f80(local_70,lVar5,param_3);
  }
  if (*param_3 < 1) {
    cVar1 = FUN_1425323f0(local_70);
    if (cVar1 != '\0') {
      FUN_14258c900(local_70,param_3);
      lVar5 = FUN_1424e4610(_Str,local_70,param_3);
      goto LAB_1424e5c8b;
    }
    *param_3 = 4;
  }
  lVar5 = 0;
LAB_1424e5c8b:
  FUN_1424e5a10(local_168);
  return lVar5;
}



// FUNCTION 1424e5cb0 Unwind@1424e5cb0 body=47 status=ok
// SIG undefined Unwind@1424e5cb0(void)

void Unwind_1424e5cb0(undefined8 param_1,longlong param_2)

{
  FUN_1424e5a10(param_2 + 0x40);
  return;
}



// FUNCTION 1424e5ce0 FUN_1424e5ce0 body=227 status=ok
// SIG undefined FUN_1424e5ce0(void)

void FUN_1424e5ce0(undefined8 *param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    if ((param_2 == (char *)0x0) || (param_3 < -1)) {
      param_1[0xc] = &LAB_1424e6010;
      param_1[0xd] = &LAB_1424e6020;
      param_1[10] = &LAB_1424e6000;
      param_1[0xb] = 0;
      param_1[8] = &LAB_1424e6000;
      param_1[9] = &LAB_1424e6000;
      param_1[6] = &LAB_1424e5ff0;
      param_1[7] = &LAB_1424e5ff0;
      param_1[4] = &LAB_1424e5fd0;
      param_1[5] = &LAB_1424e5fe0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[0xc] = &LAB_1424e6f40;
      param_1[0xd] = FUN_1424e6f50;
      param_1[10] = FUN_1424e6e90;
      param_1[0xb] = 0;
      param_1[8] = FUN_1424e6b90;
      param_1[9] = FUN_1424e6cd0;
      param_1[6] = &LAB_1424e6b60;
      param_1[7] = &LAB_1424e6b80;
      param_1[4] = FUN_1424e6320;
      param_1[5] = FUN_1424e6750;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = param_2;
      if (param_3 < 0) {
        sVar2 = strlen(param_2);
        param_3 = (int)sVar2;
      }
      *(int *)((longlong)param_1 + 0x14) = param_3;
      iVar1 = -1;
      if (param_3 < 2) {
        iVar1 = param_3;
      }
      *(int *)(param_1 + 1) = iVar1;
    }
  }
  return;
}



// FUNCTION 1424e5dd0 FUN_1424e5dd0 body=91 status=ok
// SIG undefined FUN_1424e5dd0(void)

uint FUN_1424e5dd0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(param_1 + 0x48))();
  if ((uVar1 & 0xfffffc00) == 0xd800) {
    uVar2 = (**(code **)(param_1 + 0x48))(param_1);
    if ((uVar2 & 0xfffffc00) == 0xdc00) {
      uVar1 = uVar1 * 0x400 + uVar2 + 0xfca02400;
    }
    else if (-1 < (int)uVar2) {
      (**(code **)(param_1 + 0x28))(param_1,0xffffffff,1);
    }
  }
  return uVar1;
}



// FUNCTION 1424e5e30 FUN_1424e5e30 body=91 status=ok
// SIG undefined FUN_1424e5e30(void)

uint FUN_1424e5e30(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(param_1 + 0x50))();
  if ((uVar1 & 0xfffffc00) == 0xdc00) {
    uVar2 = (**(code **)(param_1 + 0x50))(param_1);
    if ((uVar2 & 0xfffffc00) == 0xd800) {
      uVar1 = uVar1 + uVar2 * 0x400 + 0xfca02400;
    }
    else if (-1 < (int)uVar2) {
      (**(code **)(param_1 + 0x28))(param_1,1,1);
    }
  }
  return uVar1;
}



// FUNCTION 1424e6110 FUN_1424e6110 body=81 status=ok
// SIG undefined FUN_1424e6110(void)

ulonglong FUN_1424e6110(longlong *param_1,ulonglong param_2,uint param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if (param_3 < 3) {
                    /* WARNING: Could not recover jumptable at 0x0001424e6130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0xb8))();
    return uVar1;
  }
  if (param_3 == 4) {
    plVar2 = (longlong *)*param_1;
    param_2 = (ulonglong)(uint)((int)param_2 + (int)plVar2[1]);
  }
  else {
    if (param_3 != 3) {
      return 0xffffffff;
    }
    plVar2 = (longlong *)*param_1;
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
  return (ulonglong)*(uint *)(*param_1 + 0xc);
}



// FUNCTION 1424e6190 FUN_1424e6190 body=56 status=ok
// SIG undefined FUN_1424e6190(void)

uint FUN_1424e6190(undefined8 *param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x80))();
  uVar3 = (uint)uVar2;
  if (uVar2 == 0xffff) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))();
    uVar3 = -(uint)(cVar1 == '\0') | 0xffff;
  }
  return uVar3;
}



// FUNCTION 1424e61d0 FUN_1424e61d0 body=46 status=ok
// SIG undefined FUN_1424e61d0(void)

ulonglong FUN_1424e61d0(undefined8 *param_1)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))();
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x20))();
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}



// FUNCTION 1424e6200 FUN_1424e6200 body=52 status=ok
// SIG undefined FUN_1424e6200(void)

ulonglong FUN_1424e6200(undefined8 *param_1)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0xb0))();
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0xa0))();
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}



// FUNCTION 1424e6290 FUN_1424e6290 body=34 status=ok
// SIG undefined FUN_1424e6290(void)

ulonglong FUN_1424e6290(undefined8 *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 2) < *(int *)((longlong)param_1 + 0x14)) {
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))();
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2;
}



// FUNCTION 1424e62c0 FUN_1424e62c0 body=46 status=ok
// SIG undefined FUN_1424e62c0(void)

ulonglong FUN_1424e62c0(undefined8 *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 2) < *(int *)((longlong)param_1 + 0x14)) {
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1);
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2;
}



// FUNCTION 1424e62f0 FUN_1424e62f0 body=43 status=ok
// SIG undefined FUN_1424e62f0(void)

ulonglong FUN_1424e62f0(undefined8 *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0xc) < *(int *)(param_1 + 2)) {
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1);
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2;
}



// FUNCTION 1424e6320 FUN_1424e6320 body=1018 status=ok
// SIG undefined FUN_1424e6320(void)

int FUN_1424e6320(longlong *param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  switch(param_2) {
  case 0:
  case 3:
    iVar4 = 0;
    break;
  case 1:
    iVar4 = (int)param_1[2];
    if (iVar4 < 0) {
      uVar10 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar10 < 1) {
        uVar8 = 0;
        iVar4 = 0;
      }
      else {
        lVar3 = *param_1;
        iVar4 = 0;
        uVar8 = 0;
        do {
          lVar11 = (longlong)(int)uVar8;
          uVar7 = lVar11 + 1;
          bVar2 = *(byte *)(lVar3 + lVar11);
          if (((char)bVar2 < '\0') && (uVar8 = (uint)uVar7, uVar8 != uVar10)) {
            if (0xdf < bVar2) {
              if (bVar2 < 0xf0) {
                uVar9 = bVar2 & 0xf;
                if (((byte)(&DAT_14bd49f86)[uVar9] >> (*(byte *)(lVar3 + uVar7) >> 5) & 1) != 0) {
                  bVar5 = *(byte *)(lVar3 + uVar7) & 0x3f;
LAB_1424e63e8:
                  uVar8 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar10;
                  if (uVar8 != uVar10) {
                    uVar9 = (uint)bVar5 | uVar9 << 6;
                    goto LAB_1424e641e;
                  }
                }
              }
              else if (bVar2 < 0xf5) {
                pbVar1 = (byte *)(lVar3 + uVar7);
                if (((uint)(int)(char)(&DAT_14bd49f97)[*pbVar1 >> 4] >> (bVar2 - 0xf0 & 0x1f) & 1)
                    != 0) {
                  uVar12 = lVar11 + 2;
                  uVar7 = (ulonglong)uVar10;
                  if ((uint)uVar12 != uVar10) {
                    bVar5 = *(char *)(lVar3 + uVar12) + 0x80;
                    if (bVar5 < 0x40) {
                      uVar9 = *pbVar1 & 0x3f | (bVar2 - 0xf0) * 0x40;
                      uVar7 = uVar12 & 0xffffffff;
                      goto LAB_1424e63e8;
                    }
                    uVar7 = uVar12 & 0xffffffff;
                  }
                }
              }
              goto LAB_1424e6490;
            }
            if (bVar2 < 0xc2) goto LAB_1424e6490;
            uVar9 = bVar2 & 0x1f;
LAB_1424e641e:
            if (-0x41 < *(char *)(lVar3 + (int)uVar8)) {
              uVar7 = (ulonglong)uVar8;
              goto LAB_1424e6490;
            }
            uVar8 = uVar8 + 1;
            iVar6 = 2;
            uVar7 = (ulonglong)uVar8;
            if (uVar9 < 0x400) goto LAB_1424e6490;
          }
          else {
LAB_1424e6490:
            iVar6 = 1;
            uVar8 = (uint)uVar7;
          }
          iVar4 = iVar4 + iVar6;
        } while ((int)uVar8 < (int)uVar10);
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar8;
      if (uVar8 == *(uint *)((longlong)param_1 + 0x14)) {
        *(int *)(param_1 + 1) = iVar4;
      }
      iVar4 = iVar4 + -1 + (uint)((int)param_1[3] == 0);
      *(int *)(param_1 + 2) = iVar4;
    }
    break;
  case 2:
  case 4:
    iVar4 = (int)param_1[1];
    if (iVar4 < 0) {
      lVar3 = *param_1;
      uVar10 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)param_1[2] < 0) {
        if ((int)uVar10 < 1) {
          iVar4 = 0;
          uVar8 = 0;
        }
        else {
          iVar4 = 0;
          uVar8 = 0;
          do {
            lVar11 = (longlong)(int)uVar8;
            uVar7 = lVar11 + 1;
            bVar2 = *(byte *)(lVar3 + lVar11);
            if (((char)bVar2 < '\0') && (uVar8 = (uint)uVar7, uVar8 != uVar10)) {
              if (0xdf < bVar2) {
                if (bVar2 < 0xf0) {
                  uVar9 = bVar2 & 0xf;
                  if (((byte)(&DAT_14bd49f86)[uVar9] >> (*(byte *)(lVar3 + uVar7) >> 5) & 1) != 0) {
                    bVar5 = *(byte *)(lVar3 + uVar7) & 0x3f;
LAB_1424e6517:
                    uVar8 = (int)uVar7 + 1;
                    uVar7 = (ulonglong)uVar10;
                    if (uVar8 != uVar10) {
                      uVar9 = (uint)bVar5 | uVar9 << 6;
                      goto LAB_1424e654e;
                    }
                  }
                }
                else if (bVar2 < 0xf5) {
                  pbVar1 = (byte *)(lVar3 + uVar7);
                  if (((uint)(int)(char)(&DAT_14bd49f97)[*pbVar1 >> 4] >> (bVar2 - 0xf0 & 0x1f) & 1)
                      != 0) {
                    uVar12 = lVar11 + 2;
                    uVar7 = (ulonglong)uVar10;
                    if ((uint)uVar12 != uVar10) {
                      bVar5 = *(char *)(lVar3 + uVar12) + 0x80;
                      if (bVar5 < 0x40) {
                        uVar9 = *pbVar1 & 0x3f | (bVar2 - 0xf0) * 0x40;
                        uVar7 = uVar12 & 0xffffffff;
                        goto LAB_1424e6517;
                      }
                      uVar7 = uVar12 & 0xffffffff;
                    }
                  }
                }
                goto LAB_1424e65c0;
              }
              if (bVar2 < 0xc2) goto LAB_1424e65c0;
              uVar9 = bVar2 & 0x1f;
LAB_1424e654e:
              if (-0x41 < *(char *)(lVar3 + (int)uVar8)) {
                uVar7 = (ulonglong)uVar8;
                goto LAB_1424e65c0;
              }
              uVar8 = uVar8 + 1;
              iVar6 = 2;
              uVar7 = (ulonglong)uVar8;
              if (uVar9 < 0x400) goto LAB_1424e65c0;
            }
            else {
LAB_1424e65c0:
              iVar6 = 1;
              uVar8 = (uint)uVar7;
            }
            iVar4 = iVar4 + iVar6;
          } while ((int)uVar8 < (int)uVar10);
        }
        uVar10 = uVar8;
        *(uint *)((longlong)param_1 + 0xc) = uVar10;
        *(uint *)(param_1 + 2) = iVar4 + -1 + (uint)((int)param_1[3] == 0);
      }
      else {
        iVar4 = ((int)param_1[2] + 1) - (uint)((int)param_1[3] == 0);
      }
      uVar8 = *(uint *)((longlong)param_1 + 0x14);
      while ((int)uVar10 < (int)uVar8) {
        lVar11 = (longlong)(int)uVar10;
        uVar7 = lVar11 + 1;
        bVar2 = *(byte *)(lVar3 + lVar11);
        if (((char)bVar2 < '\0') && (uVar10 = (uint)uVar7, uVar10 != uVar8)) {
          if (0xdf < bVar2) {
            if (bVar2 < 0xf0) {
              uVar9 = bVar2 & 0xf;
              if (((byte)(&DAT_14bd49f86)[uVar9] >> (*(byte *)(lVar3 + uVar7) >> 5) & 1) != 0) {
                bVar5 = *(byte *)(lVar3 + uVar7) & 0x3f;
LAB_1424e6678:
                uVar10 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar8;
                if (uVar10 != uVar8) {
                  uVar9 = (uint)bVar5 | uVar9 << 6;
                  goto LAB_1424e66ae;
                }
              }
            }
            else if (bVar2 < 0xf5) {
              pbVar1 = (byte *)(lVar3 + uVar7);
              if (((uint)(int)(char)(&DAT_14bd49f97)[*pbVar1 >> 4] >> (bVar2 - 0xf0 & 0x1f) & 1) !=
                  0) {
                uVar12 = lVar11 + 2;
                uVar7 = (ulonglong)uVar8;
                if ((uint)uVar12 != uVar8) {
                  bVar5 = *(char *)(lVar3 + uVar12) + 0x80;
                  if (bVar5 < 0x40) {
                    uVar9 = *pbVar1 & 0x3f | (bVar2 - 0xf0) * 0x40;
                    uVar7 = uVar12 & 0xffffffff;
                    goto LAB_1424e6678;
                  }
                  uVar7 = uVar12 & 0xffffffff;
                }
              }
            }
            goto LAB_1424e6720;
          }
          if (bVar2 < 0xc2) goto LAB_1424e6720;
          uVar9 = bVar2 & 0x1f;
LAB_1424e66ae:
          if (-0x41 < *(char *)(lVar3 + (int)uVar10)) {
            uVar7 = (ulonglong)uVar10;
            goto LAB_1424e6720;
          }
          uVar10 = uVar10 + 1;
          iVar6 = 2;
          uVar7 = (ulonglong)uVar10;
          if (uVar9 < 0x400) goto LAB_1424e6720;
        }
        else {
LAB_1424e6720:
          iVar6 = 1;
          uVar10 = (uint)uVar7;
        }
        iVar4 = iVar4 + iVar6;
      }
      *(int *)(param_1 + 1) = iVar4;
    }
    break;
  default:
    iVar4 = -1;
  }
  return iVar4;
}



// FUNCTION 1424e6750 FUN_1424e6750 body=997 status=ok
// SIG undefined FUN_1424e6750(void)

void FUN_1424e6750(longlong *param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  byte bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  uint local_4c;
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switch(param_3) {
  case 0:
  case 3:
    break;
  case 1:
    uVar3 = *(uint *)(param_1 + 2);
    if (-1 < (int)uVar3) {
      param_2 = param_2 + uVar3;
      goto joined_r0x0001424e6804;
    }
    if (param_2 == 0) goto switchD_1424e678b_default;
    uVar16 = *(uint *)((longlong)param_1 + 0xc);
LAB_1424e6886:
    if ((int)uVar16 <= (int)-param_2) goto LAB_1424e68bb;
    if ((int)(*(int *)((longlong)param_1 + 0x14) - uVar16) <= (int)param_2) {
      *(int *)(param_1 + 2) = (int)param_1[1];
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0x14);
      *(undefined4 *)(param_1 + 3) = 0;
      goto switchD_1424e678b_default;
    }
    goto LAB_1424e6852;
  case 2:
  case 4:
    if ((int)param_1[1] < 0) {
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
      uVar16 = *(uint *)((longlong)param_1 + 0x14);
      *(uint *)((longlong)param_1 + 0xc) = uVar16;
      *(undefined4 *)(param_1 + 3) = 0;
      if (-1 < (int)param_2) goto switchD_1424e678b_default;
      uVar3 = 0xffffffff;
      goto LAB_1424e6886;
    }
    param_2 = param_2 + (int)param_1[1];
    break;
  default:
    goto switchD_1424e678b_default;
  }
joined_r0x0001424e6804:
  if ((int)param_2 < 1) {
LAB_1424e68bb:
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    goto switchD_1424e678b_default;
  }
  uVar16 = *(uint *)(param_1 + 1);
  if ((-1 < (int)uVar16) && ((int)uVar16 <= (int)param_2)) {
    *(uint *)(param_1 + 2) = uVar16;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x14);
    *(undefined4 *)(param_1 + 3) = 0;
    goto switchD_1424e678b_default;
  }
  puVar6 = (uint *)(param_1 + 2);
  uVar3 = *puVar6;
  if (((int)uVar3 < 0) || (param_2 < uVar3 >> 1)) {
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    uVar16 = 0;
LAB_1424e6843:
    *puVar6 = 0;
    uVar3 = uVar16;
  }
  else if ((-1 < (int)uVar16) && ((int)(uVar16 - param_2) < (int)(param_2 - uVar3))) {
    *(uint *)(param_1 + 2) = uVar16;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x14);
    puVar6 = (uint *)(param_1 + 3);
    goto LAB_1424e6843;
  }
  param_2 = param_2 - uVar3;
  if (param_2 == 0) goto switchD_1424e678b_default;
  uVar16 = *(uint *)((longlong)param_1 + 0xc);
LAB_1424e6852:
  uVar7 = (ulonglong)uVar16;
  lVar2 = *param_1;
  if ((int)param_2 < 1) {
    if ((int)param_1[3] != 0) {
      *(undefined4 *)(param_1 + 3) = 0;
      uVar7 = (ulonglong)(uVar16 - 4);
      uVar3 = uVar3 - 1;
      param_2 = param_2 + 1;
    }
    uVar16 = (uint)uVar7;
    uVar12 = uVar3;
    if (((int)param_2 < 0) && (0 < (int)uVar16)) {
      do {
        local_4c = (int)uVar7 - 1;
        iVar9 = 1;
        iVar13 = -1;
        if (*(char *)(lVar2 + (ulonglong)local_4c) < '\0') {
          local_58 = 0xfd;
          iVar4 = FUN_142580f00(lVar2,0,&local_4c);
          if (0xffff < iVar4) {
            if (-2 < (int)param_2) {
              *(int *)(param_1 + 3) = iVar4;
              uVar12 = uVar12 - 1;
              uVar16 = local_4c + 4;
              break;
            }
            iVar9 = 2;
            iVar13 = -2;
          }
        }
        uVar12 = uVar12 + iVar13;
        param_2 = param_2 + iVar9;
        uVar7 = (ulonglong)local_4c;
        uVar16 = local_4c;
        if ((-1 < (int)param_2) || ((int)local_4c < 1)) break;
      } while( true );
    }
LAB_1424e6b16:
    uVar5 = uVar16;
    iVar9 = (int)param_1[2];
  }
  else {
    uVar12 = uVar3;
    if ((int)param_1[3] != 0) {
      *(undefined4 *)(param_1 + 3) = 0;
      param_2 = param_2 - 1;
      uVar12 = uVar3 + 1;
    }
    uVar5 = *(uint *)((longlong)param_1 + 0x14);
    if (param_2 != 0) {
      do {
        if ((int)uVar5 <= (int)uVar16) break;
        lVar14 = (longlong)(int)uVar7;
        uVar10 = lVar14 + 1;
        bVar1 = *(byte *)(lVar2 + lVar14);
        iVar9 = -1;
        iVar13 = 1;
        uVar7 = uVar10;
        if (((char)bVar1 < '\0') && ((uint)uVar10 != uVar5)) {
          if (bVar1 < 0xe0) {
            if (0xc1 < bVar1) {
              uVar16 = bVar1 & 0x1f;
LAB_1424e6a1d:
              uVar8 = *(byte *)(lVar2 + (int)uVar10) ^ 0x80;
              uVar7 = uVar10;
              if ((byte)uVar8 < 0x40) {
                uVar8 = uVar16 << 6 | uVar8;
                uVar16 = (int)uVar10 + 1;
                uVar7 = (ulonglong)uVar16;
                if (0xffff < uVar8) {
                  if ((int)param_2 < 2) {
                    *(uint *)(param_1 + 3) = uVar8;
                    uVar12 = uVar12 + 1;
                    goto joined_r0x0001424e6b12;
                  }
                  iVar9 = -2;
                  iVar13 = 2;
                }
              }
            }
          }
          else if (bVar1 < 0xf0) {
            uVar16 = bVar1 & 0xf;
            if (((byte)(&DAT_14bd49f86)[uVar16] >> (*(byte *)(lVar2 + uVar10) >> 5) & 1) != 0) {
              bVar11 = *(byte *)(lVar2 + uVar10) & 0x3f;
LAB_1424e69ed:
              uVar8 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar8;
              uVar7 = (ulonglong)uVar5;
              if (uVar8 != uVar5) {
                uVar16 = (uint)bVar11 | uVar16 << 6;
                goto LAB_1424e6a1d;
              }
            }
          }
          else if (bVar1 < 0xf5) {
            if ((((uint)(int)(char)(&DAT_14bd49f97)[*(byte *)(lVar2 + uVar10) >> 4] >>
                  (bVar1 - 0xf0 & 0x1f) & 1) != 0) &&
               (uVar15 = lVar14 + 2, uVar7 = (ulonglong)uVar5, (uint)uVar15 != uVar5)) {
              bVar11 = *(char *)(lVar2 + uVar15) + 0x80;
              if (bVar11 < 0x40) {
                uVar16 = *(byte *)(lVar2 + uVar10) & 0x3f | (bVar1 - 0xf0) * 0x40;
                uVar10 = uVar15 & 0xffffffff;
                goto LAB_1424e69ed;
              }
              uVar7 = uVar15 & 0xffffffff;
            }
          }
        }
        uVar16 = (uint)uVar7;
        uVar12 = uVar12 + iVar13;
        bVar17 = SCARRY4(param_2,iVar9);
        param_2 = param_2 + iVar9;
      } while (param_2 != 0 && bVar17 == (int)param_2 < 0);
    }
    uVar8 = 0;
joined_r0x0001424e6b12:
    if (uVar16 != uVar5) goto LAB_1424e6b16;
    uVar16 = uVar5;
    if ((int)param_1[1] < 0) {
      if (-1 < (int)uVar3) {
        *(uint *)(param_1 + 1) = (uVar12 + 1) - (uint)(uVar8 == 0);
      }
      goto LAB_1424e6b16;
    }
    if (-1 < (int)uVar3) goto LAB_1424e6b16;
    iVar9 = (int)param_1[1] + -1 + (uint)(uVar8 == 0);
    *(int *)(param_1 + 2) = iVar9;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  if (iVar9 < 0) {
    if ((int)uVar5 < 2) {
      *(uint *)(param_1 + 2) = uVar5;
    }
  }
  else {
    *(uint *)(param_1 + 2) = uVar12;
  }
switchD_1424e678b_default:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424e6b90 FUN_1424e6b90 body=308 status=ok
// SIG undefined FUN_1424e6b90(void)

uint FUN_1424e6b90(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong uVar7;
  
  if (*(uint *)(param_1 + 3) == 0) {
    lVar8 = (longlong)*(int *)((longlong)param_1 + 0xc);
    uVar5 = *(uint *)((longlong)param_1 + 0x14);
    uVar3 = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) < (int)uVar5) {
      lVar2 = *param_1;
      bVar1 = *(byte *)(lVar2 + lVar8);
      uVar3 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar7 = lVar8 + 1;
        uVar3 = 0xfffd;
        if ((uint)uVar7 != uVar5) {
          if (bVar1 < 0xe0) {
            if (bVar1 < 0xc2) {
              return 0xfffd;
            }
            uVar5 = bVar1 & 0x1f;
          }
          else {
            if (bVar1 < 0xf0) {
              uVar4 = bVar1 & 0xf;
              if (((byte)(&DAT_14bd49f86)[uVar4] >> (*(byte *)(lVar2 + uVar7) >> 5) & 1) == 0) {
                return 0xfffd;
              }
              bVar10 = *(byte *)(lVar2 + uVar7) & 0x3f;
            }
            else {
              if (0xf4 < bVar1) {
                return 0xfffd;
              }
              if (((uint)(int)(char)(&DAT_14bd49f97)[*(byte *)(lVar2 + uVar7) >> 4] >>
                   (bVar1 - 0xf0 & 0x1f) & 1) == 0) {
                return 0xfffd;
              }
              uVar9 = lVar8 + 2;
              if ((uint)uVar9 == uVar5) {
                return 0xfffd;
              }
              bVar10 = *(char *)(lVar2 + uVar9) + 0x80;
              if (0x3f < bVar10) {
                return 0xfffd;
              }
              uVar4 = *(byte *)(lVar2 + uVar7) & 0x3f | (bVar1 - 0xf0) * 0x40;
              uVar7 = uVar9 & 0xffffffff;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            if (uVar6 == uVar5) {
              return 0xfffd;
            }
            uVar5 = (uint)bVar10 | uVar4 << 6;
          }
          uVar4 = *(byte *)(lVar2 + (int)uVar7) ^ 0x80;
          if (((byte)uVar4 < 0x40) && (uVar3 = uVar5 << 6 | uVar4, 0xffff < uVar3)) {
            uVar3 = (uVar5 >> 4) + 0xd7c0 & 0xffff;
          }
        }
      }
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 3) & 0x3ff | 0xdc00;
  }
  return uVar3;
}



// FUNCTION 1424e6cd0 FUN_1424e6cd0 body=440 status=ok
// SIG undefined FUN_1424e6cd0(void)

uint FUN_1424e6cd0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  
  if (*(uint *)(param_1 + 3) != 0) {
    uVar4 = *(uint *)(param_1 + 3) & 0x3ff | 0xdc00;
    *(undefined4 *)(param_1 + 3) = 0;
    if ((int)param_1[2] < 0) {
      return uVar4;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    return uVar4;
  }
  lVar8 = (longlong)*(int *)((longlong)param_1 + 0xc);
  uVar4 = *(uint *)((longlong)param_1 + 0x14);
  if ((int)uVar4 <= *(int *)((longlong)param_1 + 0xc)) {
    return 0xffffffff;
  }
  lVar3 = *param_1;
  uVar9 = lVar8 + 1;
  *(uint *)((longlong)param_1 + 0xc) = (uint)uVar9;
  bVar1 = *(byte *)(lVar3 + lVar8);
  uVar5 = (uint)bVar1;
  if (-1 < (char)bVar1) goto LAB_1424e6d35;
  if ((uint)uVar9 == uVar4) {
LAB_1424e6d2d:
    uVar9 = (ulonglong)uVar4;
  }
  else {
    uVar6 = (uint)bVar1;
    if (bVar1 < 0xe0) {
      if (0xc1 < bVar1) {
        uVar6 = uVar6 & 0x1f;
LAB_1424e6df4:
        uVar5 = *(byte *)(lVar3 + (int)uVar9) ^ 0x80;
        if ((byte)uVar5 < 0x40) {
          uVar5 = uVar6 << 6 | uVar5;
          uVar6 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar6;
          *(uint *)((longlong)param_1 + 0xc) = uVar6;
          goto LAB_1424e6d35;
        }
      }
    }
    else if (bVar1 < 0xf0) {
      uVar6 = uVar6 & 0xf;
      if (((byte)(&DAT_14bd49f86)[uVar6] >> (*(byte *)(lVar3 + uVar9) >> 5) & 1) != 0) {
        bVar10 = *(byte *)(lVar3 + uVar9) & 0x3f;
LAB_1424e6dca:
        uVar5 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar5;
        *(uint *)((longlong)param_1 + 0xc) = uVar5;
        if (uVar5 != uVar4) {
          uVar6 = (uint)bVar10 | uVar6 << 6;
          goto LAB_1424e6df4;
        }
        goto LAB_1424e6d2d;
      }
    }
    else if (bVar1 < 0xf5) {
      bVar1 = *(byte *)(lVar3 + uVar9);
      if (((uint)(int)(char)(&DAT_14bd49f97)[bVar1 >> 4] >> (uVar6 - 0xf0 & 0x1f) & 1) != 0) {
        uVar9 = lVar8 + 2;
        *(uint *)((longlong)param_1 + 0xc) = (uint)uVar9;
        if ((uint)uVar9 == uVar4) goto LAB_1424e6d2d;
        bVar10 = *(char *)(lVar3 + uVar9) + 0x80;
        if (bVar10 < 0x40) {
          uVar6 = bVar1 & 0x3f | (uVar6 - 0xf0) * 0x40;
          uVar9 = uVar9 & 0xffffffff;
          goto LAB_1424e6dca;
        }
        uVar9 = uVar9 & 0xffffffff;
      }
    }
  }
  uVar5 = 0xfffd;
LAB_1424e6d35:
  iVar2 = (int)param_1[2];
  if (iVar2 < 0) {
    if (((uint)uVar9 == uVar4) && (-1 < (int)param_1[1])) {
      *(uint *)(param_1 + 2) = (int)param_1[1] - (uint)(0xffff < (int)uVar5);
    }
  }
  else {
    *(int *)(param_1 + 2) = iVar2 + 1;
    if (((int)param_1[1] < 0) && ((uint)uVar9 == uVar4)) {
      iVar7 = iVar2 + 2;
      if ((int)uVar5 < 0x10000) {
        iVar7 = iVar2 + 1;
      }
      *(int *)(param_1 + 1) = iVar7;
    }
  }
  if (0xffff < (int)uVar5) {
    *(uint *)(param_1 + 3) = uVar5;
    uVar5 = (uVar5 >> 10) + 0xd7c0 & 0xffff;
  }
  return uVar5;
}



// FUNCTION 1424e6e90 FUN_1424e6e90 body=168 status=ok
// SIG undefined FUN_1424e6e90(void)

ulonglong FUN_1424e6e90(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 3);
  if (uVar2 != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -4;
    if (0 < (int)param_1[2]) {
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    }
    return (ulonglong)((uVar2 >> 10) + 0xd7c0 & 0xffff);
  }
  if (*(int *)((longlong)param_1 + 0xc) < 1) {
    return 0xffffffff;
  }
  uVar2 = *(int *)((longlong)param_1 + 0xc) - 1;
  *(uint *)((longlong)param_1 + 0xc) = uVar2;
  bVar1 = *(byte *)(*param_1 + (ulonglong)uVar2);
  uVar3 = (ulonglong)bVar1;
  if ((char)bVar1 < '\0') {
    uVar3 = FUN_142580f00(*param_1,0,(int *)((longlong)param_1 + 0xc),bVar1,0xfd);
  }
  uVar2 = (uint)uVar3;
  if ((int)param_1[2] < 1) {
    iVar4 = *(int *)((longlong)param_1 + 0xc);
    if (1 < iVar4) goto LAB_1424e6f1e;
    iVar4 = iVar4 + (uint)(0xffff < (int)uVar2);
  }
  else {
    iVar4 = (int)param_1[2] + -1;
  }
  *(int *)(param_1 + 2) = iVar4;
LAB_1424e6f1e:
  if (0xffff < (int)uVar2) {
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 4;
    *(uint *)(param_1 + 3) = uVar2;
    uVar3 = (ulonglong)(uVar2 & 0x3ff | 0xdc00);
  }
  return uVar3;
}



// FUNCTION 1424e6f50 FUN_1424e6f50 body=200 status=ok
// SIG undefined FUN_1424e6f50(void)

void FUN_1424e6f50(longlong *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_3 != (int *)0x0) && (*param_3 < 1)) {
    if (param_1 == (longlong *)0x0) {
      *param_3 = 1;
    }
    else if ((uint)((int)param_1[3] != 0) + *(int *)((longlong)param_1 + 0xc) * 2 != param_2) {
      if (((param_2 & 0xfffffff9) != 1) &&
         (uVar1 = param_2 >> 1, (int)uVar1 <= *(int *)((longlong)param_1 + 0x14))) {
        *(uint *)((longlong)param_1 + 0xc) = uVar1;
        uVar3 = 0xffffffff;
        if (param_2 < 4) {
          uVar3 = uVar1;
        }
        *(uint *)(param_1 + 2) = uVar3;
        if ((param_2 & 1) == 0) {
          *(undefined4 *)(param_1 + 3) = 0;
          goto LAB_1424e6f73;
        }
        local_1c = uVar1 - 1;
        if (*(char *)(*param_1 + -1 + (ulonglong)uVar1) < '\0') {
          local_28 = 0xfd;
          iVar2 = FUN_142580f00(*param_1,0,&local_1c);
          if (0xffff < iVar2) {
            *(int *)(param_1 + 3) = iVar2;
            goto LAB_1424e6f73;
          }
        }
      }
      *param_3 = 8;
    }
  }
LAB_1424e6f73:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424e7020 FUN_1424e7020 body=10 status=ok
// SIG undefined FUN_1424e7020(void)

void FUN_1424e7020(char *param_1)

{
  strchr(param_1,0x40);
  return;
}



// FUNCTION 1424e7030 thunk_FUN_1424e7040 body=5 status=ok
// SIG undefined thunk_FUN_1424e7040(void)

void thunk_FUN_1424e7040(char *param_1,char param_2,longlong param_3,int param_4,longlong param_5,
                        int param_6,int *param_7,char param_8,undefined4 *param_9)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  size_t sVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  char *pcVar16;
  bool bVar17;
  undefined1 auStack_548 [32];
  undefined8 uStack_528;
  undefined1 uStack_520;
  undefined4 *puStack_518;
  char *pcStack_510;
  char *pcStack_508;
  longlong lStack_500;
  char acStack_4f8 [28];
  int iStack_4dc;
  undefined8 uStack_4d8;
  int aiStack_4d0 [2];
  char acStack_4c8 [1152];
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_548;
  if (param_2 == '@') {
    uVar13 = 0;
    pcVar16 = param_1;
    lStack_500 = param_3;
    do {
      for (; *param_1 == ' '; param_1 = param_1 + 1) {
        pcVar16 = pcVar16 + 1;
      }
      if (*param_1 == '\0') break;
      if (uVar13 == 0x19) {
LAB_1424e74ce:
        *param_9 = 5;
        goto LAB_1424e74a8;
      }
      pcVar4 = strchr(param_1,0x3d);
      pcVar5 = strchr(param_1,0x3b);
      if ((pcVar4 == (char *)0x0) || ((pcVar5 != (char *)0x0 && (pcVar5 < pcVar4))))
      goto LAB_1424e7451;
      lVar10 = (longlong)pcVar4 - (longlong)pcVar16;
      if (0x18 < lVar10) goto LAB_1424e74ce;
      pcStack_508 = pcVar5;
      if (lVar10 < 1) {
LAB_1424e7451:
        *param_9 = 3;
        goto LAB_1424e74a8;
      }
      pcStack_510 = (char *)(ulonglong)uVar13;
      lVar6 = (longlong)pcStack_510 * 0x30;
      lVar15 = 0;
      iVar12 = 0;
      do {
        if (param_1[lVar15] != ' ') {
          cVar2 = FUN_142503910();
          lVar8 = (longlong)iVar12;
          iVar12 = iVar12 + 1;
          acStack_4f8[lVar8 + lVar6] = cVar2;
        }
        pcVar16 = pcStack_510;
        lVar15 = lVar15 + 1;
      } while (lVar15 < lVar10);
      if (iVar12 == 0) goto LAB_1424e7451;
      pcVar5 = acStack_4f8 + (longlong)pcStack_510 * 0x30;
      pcVar5[iVar12] = '\0';
      (&iStack_4dc)[(longlong)pcStack_510 * 0xc] = iVar12;
      iVar12 = (int)pcStack_508 - (int)pcVar4;
      do {
        iVar3 = iVar12;
        pcVar11 = pcVar4;
        pcVar4 = pcVar11 + 1;
        iVar12 = iVar3 + -1;
      } while (pcVar11[1] == ' ');
      if ((pcVar11[1] == '\0') || (pcVar4 == pcStack_508)) goto LAB_1424e7451;
      (&uStack_4d8)[(longlong)pcStack_510 * 6] = pcVar4;
      pcVar9 = pcStack_508;
      if (pcStack_508 == (char *)0x0) {
        sVar7 = strlen(pcVar4);
        iVar12 = (int)sVar7 + 1;
        lVar10 = (longlong)(int)sVar7;
        do {
          if (lVar10 == 0) {
            iVar12 = 0;
            break;
          }
          iVar12 = iVar12 + -1;
          pcVar4 = pcVar11 + lVar10;
          lVar10 = lVar10 + -1;
        } while (*pcVar4 == ' ');
        aiStack_4d0[(longlong)pcVar16 * 0xc] = iVar12;
        param_1 = (char *)0x0;
        if (uVar13 != 0) goto LAB_1424e7230;
LAB_1424e72cd:
        bVar17 = true;
      }
      else {
        do {
          pcVar9 = pcVar9 + -1;
          iVar3 = iVar3 + -1;
        } while (*pcVar9 == ' ');
        aiStack_4d0[(longlong)pcStack_510 * 0xc] = iVar3;
        param_1 = pcStack_508 + 1;
        if (uVar13 == 0) goto LAB_1424e72cd;
LAB_1424e7230:
        pcVar16 = pcStack_510;
        pcVar4 = acStack_4c8;
        iVar12 = strcmp(acStack_4f8,pcVar5);
        if (iVar12 == 0) {
          bVar17 = false;
        }
        else {
          pcVar11 = &DAT_00000001;
          do {
            pcVar9 = pcVar11;
            if (pcVar16 == pcVar9) break;
            iVar12 = strcmp(pcVar4,pcVar5);
            pcVar4 = pcVar4 + 0x30;
            pcVar11 = pcVar9 + 1;
          } while (iVar12 != 0);
          bVar17 = pcVar16 <= pcVar9;
        }
      }
      uVar13 = uVar13 + bVar17;
      pcVar16 = param_1;
    } while (param_1 != (char *)0x0);
    uStack_520 = 0;
    uStack_528 = 0;
    pcVar16 = acStack_4f8;
    puStack_518 = param_9;
    FUN_14258cce0(pcVar16,uVar13,0x30,&LAB_1424ea690);
    lVar10 = lStack_500;
    if ((int)uVar13 < 1) {
      uVar14 = 0;
      iVar12 = 0;
    }
    else {
      pcStack_508 = (char *)(ulonglong)(uVar13 - 1);
      pcStack_510 = (char *)(ulonglong)uVar13;
      pcVar4 = (char *)0x0;
      iVar12 = 0;
      uVar14 = 0;
      do {
        iVar3 = *(int *)(pcVar16 + 0x1c);
        iVar1 = (int)uVar14;
        if (iVar3 + iVar1 + 1 < param_4) {
          strcpy((char *)(iVar1 + lVar10),pcVar16);
          uVar13 = iVar1 + iVar3 + 1;
          uVar14 = (ulonglong)uVar13;
          if (param_8 == '\0') {
            *(undefined1 *)(lVar10 + (iVar3 + iVar1)) = 0;
          }
          else {
            *(undefined1 *)(lVar10 + (iVar3 + iVar1)) = 0x3d;
LAB_1424e73c0:
            uVar14 = (longlong)*(int *)(pcVar16 + 0x28) + (longlong)(int)uVar13;
            iVar3 = (int)uVar14;
            if (iVar3 <= param_4) {
              strncpy((char *)((int)uVar13 + lVar10),*(char **)(pcVar16 + 0x20),
                      (longlong)*(int *)(pcVar16 + 0x28));
            }
            if (pcVar4 < pcStack_508) {
              if (iVar3 < param_4) {
                *(undefined1 *)(lVar10 + uVar14) = 0x3b;
              }
              uVar14 = (ulonglong)(iVar3 + 1);
            }
          }
        }
        else {
          uVar13 = iVar1 + iVar3 + 1;
          uVar14 = (ulonglong)uVar13;
          if (param_8 != '\0') goto LAB_1424e73c0;
        }
        if (param_5 != 0) {
          iVar3 = *(int *)(pcVar16 + 0x28);
          if (iVar3 + iVar12 + 1 < param_6) {
            strcpy((char *)(iVar12 + param_5),*(char **)(pcVar16 + 0x20));
            *(undefined1 *)(param_5 + (iVar3 + iVar12)) = 0;
            lVar10 = lStack_500;
          }
          iVar12 = iVar12 + iVar3 + 1;
        }
        pcVar4 = pcVar4 + 1;
        pcVar16 = pcVar16 + 0x30;
      } while (pcStack_510 != pcVar4);
    }
    if ((param_5 != 0) && (*(undefined1 *)(param_5 + iVar12) = 0, param_7 != (int *)0x0)) {
      *param_7 = iVar12;
    }
    FUN_142504d00(lVar10,param_4,uVar14 & 0xffffffff,param_9);
  }
LAB_1424e74a8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_48 ^ (ulonglong)auStack_548);
}



// FUNCTION 1424e7040 FUN_1424e7040 body=1104 status=ok
// SIG undefined FUN_1424e7040(void)

void FUN_1424e7040(char *param_1,char param_2,longlong param_3,int param_4,longlong param_5,
                  int param_6,int *param_7,char param_8,undefined4 *param_9)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  size_t sVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  char *pcVar16;
  bool bVar17;
  undefined1 local_548 [32];
  undefined8 local_528;
  undefined1 local_520;
  undefined4 *local_518;
  char *local_510;
  char *local_508;
  longlong local_500;
  char local_4f8 [28];
  int local_4dc;
  undefined8 local_4d8;
  int local_4d0 [2];
  char local_4c8 [1152];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_548;
  if (param_2 == '@') {
    uVar13 = 0;
    pcVar16 = param_1;
    local_500 = param_3;
    do {
      for (; *param_1 == ' '; param_1 = param_1 + 1) {
        pcVar16 = pcVar16 + 1;
      }
      if (*param_1 == '\0') break;
      if (uVar13 == 0x19) {
LAB_1424e74ce:
        *param_9 = 5;
        goto LAB_1424e74a8;
      }
      pcVar4 = strchr(param_1,0x3d);
      pcVar5 = strchr(param_1,0x3b);
      if ((pcVar4 == (char *)0x0) || ((pcVar5 != (char *)0x0 && (pcVar5 < pcVar4))))
      goto LAB_1424e7451;
      lVar10 = (longlong)pcVar4 - (longlong)pcVar16;
      if (0x18 < lVar10) goto LAB_1424e74ce;
      local_508 = pcVar5;
      if (lVar10 < 1) {
LAB_1424e7451:
        *param_9 = 3;
        goto LAB_1424e74a8;
      }
      local_510 = (char *)(ulonglong)uVar13;
      lVar6 = (longlong)local_510 * 0x30;
      lVar15 = 0;
      iVar12 = 0;
      do {
        if (param_1[lVar15] != ' ') {
          cVar2 = FUN_142503910();
          lVar8 = (longlong)iVar12;
          iVar12 = iVar12 + 1;
          local_4f8[lVar8 + lVar6] = cVar2;
        }
        pcVar16 = local_510;
        lVar15 = lVar15 + 1;
      } while (lVar15 < lVar10);
      if (iVar12 == 0) goto LAB_1424e7451;
      pcVar5 = local_4f8 + (longlong)local_510 * 0x30;
      pcVar5[iVar12] = '\0';
      (&local_4dc)[(longlong)local_510 * 0xc] = iVar12;
      iVar12 = (int)local_508 - (int)pcVar4;
      do {
        iVar3 = iVar12;
        pcVar11 = pcVar4;
        pcVar4 = pcVar11 + 1;
        iVar12 = iVar3 + -1;
      } while (pcVar11[1] == ' ');
      if ((pcVar11[1] == '\0') || (pcVar4 == local_508)) goto LAB_1424e7451;
      (&local_4d8)[(longlong)local_510 * 6] = pcVar4;
      pcVar9 = local_508;
      if (local_508 == (char *)0x0) {
        sVar7 = strlen(pcVar4);
        iVar12 = (int)sVar7 + 1;
        lVar10 = (longlong)(int)sVar7;
        do {
          if (lVar10 == 0) {
            iVar12 = 0;
            break;
          }
          iVar12 = iVar12 + -1;
          pcVar4 = pcVar11 + lVar10;
          lVar10 = lVar10 + -1;
        } while (*pcVar4 == ' ');
        local_4d0[(longlong)pcVar16 * 0xc] = iVar12;
        param_1 = (char *)0x0;
        if (uVar13 != 0) goto LAB_1424e7230;
LAB_1424e72cd:
        bVar17 = true;
      }
      else {
        do {
          pcVar9 = pcVar9 + -1;
          iVar3 = iVar3 + -1;
        } while (*pcVar9 == ' ');
        local_4d0[(longlong)local_510 * 0xc] = iVar3;
        param_1 = local_508 + 1;
        if (uVar13 == 0) goto LAB_1424e72cd;
LAB_1424e7230:
        pcVar16 = local_510;
        pcVar4 = local_4c8;
        iVar12 = strcmp(local_4f8,pcVar5);
        if (iVar12 == 0) {
          bVar17 = false;
        }
        else {
          pcVar11 = &DAT_00000001;
          do {
            pcVar9 = pcVar11;
            if (pcVar16 == pcVar9) break;
            iVar12 = strcmp(pcVar4,pcVar5);
            pcVar4 = pcVar4 + 0x30;
            pcVar11 = pcVar9 + 1;
          } while (iVar12 != 0);
          bVar17 = pcVar16 <= pcVar9;
        }
      }
      uVar13 = uVar13 + bVar17;
      pcVar16 = param_1;
    } while (param_1 != (char *)0x0);
    local_520 = 0;
    local_528 = 0;
    pcVar16 = local_4f8;
    local_518 = param_9;
    FUN_14258cce0(pcVar16,uVar13,0x30,&LAB_1424ea690);
    lVar10 = local_500;
    if ((int)uVar13 < 1) {
      uVar14 = 0;
      iVar12 = 0;
    }
    else {
      local_508 = (char *)(ulonglong)(uVar13 - 1);
      local_510 = (char *)(ulonglong)uVar13;
      pcVar4 = (char *)0x0;
      iVar12 = 0;
      uVar14 = 0;
      do {
        iVar3 = *(int *)(pcVar16 + 0x1c);
        iVar1 = (int)uVar14;
        if (iVar3 + iVar1 + 1 < param_4) {
          strcpy((char *)(iVar1 + lVar10),pcVar16);
          uVar13 = iVar1 + iVar3 + 1;
          uVar14 = (ulonglong)uVar13;
          if (param_8 == '\0') {
            *(undefined1 *)(lVar10 + (iVar3 + iVar1)) = 0;
          }
          else {
            *(undefined1 *)(lVar10 + (iVar3 + iVar1)) = 0x3d;
LAB_1424e73c0:
            uVar14 = (longlong)*(int *)(pcVar16 + 0x28) + (longlong)(int)uVar13;
            iVar3 = (int)uVar14;
            if (iVar3 <= param_4) {
              strncpy((char *)((int)uVar13 + lVar10),*(char **)(pcVar16 + 0x20),
                      (longlong)*(int *)(pcVar16 + 0x28));
            }
            if (pcVar4 < local_508) {
              if (iVar3 < param_4) {
                *(undefined1 *)(lVar10 + uVar14) = 0x3b;
              }
              uVar14 = (ulonglong)(iVar3 + 1);
            }
          }
        }
        else {
          uVar13 = iVar1 + iVar3 + 1;
          uVar14 = (ulonglong)uVar13;
          if (param_8 != '\0') goto LAB_1424e73c0;
        }
        if (param_5 != 0) {
          iVar3 = *(int *)(pcVar16 + 0x28);
          if (iVar3 + iVar12 + 1 < param_6) {
            strcpy((char *)(iVar12 + param_5),*(char **)(pcVar16 + 0x20));
            *(undefined1 *)(param_5 + (iVar3 + iVar12)) = 0;
            lVar10 = local_500;
          }
          iVar12 = iVar12 + iVar3 + 1;
        }
        pcVar4 = pcVar4 + 1;
        pcVar16 = pcVar16 + 0x30;
      } while (local_510 != pcVar4);
    }
    if ((param_5 != 0) && (*(undefined1 *)(param_5 + iVar12) = 0, param_7 != (int *)0x0)) {
      *param_7 = iVar12;
    }
    FUN_142504d00(lVar10,param_4,uVar14 & 0xffffffff,param_9);
  }
LAB_1424e74a8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)local_548);
}



// FUNCTION 1424e74e0 FUN_1424e74e0 body=763 status=ok
// SIG undefined FUN_1424e74e0(void)

void FUN_1424e74e0(char *param_1,char *param_2,longlong param_3,int param_4,int *param_5)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_158 [32];
  int *local_138;
  char local_128 [160];
  char local_88 [32];
  char local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((param_5 != (int *)0x0) && (param_1 != (char *)0x0)) && (*param_5 < 1)) {
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      lVar2 = 0;
      do {
        lVar10 = lVar2;
        cVar3 = FUN_1425038e0();
        if ((cVar3 == '\0') && (9 < (byte)(param_2[lVar10] - 0x30U))) goto LAB_1424e77c3;
        if (lVar10 == 0x18) goto LAB_1424e7757;
        cVar3 = FUN_142503910(param_2[lVar10]);
        local_68[lVar10] = cVar3;
        lVar2 = lVar10 + 1;
      } while (param_2[lVar10 + 1] != '\0');
      if (lVar10 + 1 != 0) {
        local_68[lVar10 + 1] = '\0';
        if (*param_5 < 1) {
          pcVar6 = strchr(param_1,0x40);
          pcVar7 = param_1;
          if ((pcVar6 == (char *)0x0) && (iVar4 = FUN_1424e7800(param_1), iVar4 == 1)) {
            local_138 = param_5;
            iVar4 = FUN_142507760(param_1,local_128,0x9d,0);
            pcVar6 = param_1;
            if (((iVar4 < 1) || (pcVar6 = local_128, *param_5 < 1)) &&
               (pcVar7 = pcVar6, *param_5 == -0x7c)) {
              *param_5 = 0xf;
              pcVar7 = param_1;
            }
          }
          pcVar7 = strchr(pcVar7,0x40);
          if (pcVar7 != (char *)0x0) {
            do {
              if (pcVar7 == (char *)0x0) goto LAB_1424e77cb;
              pcVar6 = strchr(pcVar7 + 1,0x3d);
              if (pcVar6 == (char *)0x0) goto LAB_1424e77c3;
              do {
                pcVar8 = pcVar7 + 1;
                pcVar7 = pcVar7 + 1;
                pcVar1 = pcVar6;
              } while (*pcVar8 == ' ');
              do {
                pcVar8 = pcVar1;
                if (pcVar8 <= pcVar7) {
                  if (pcVar8 == pcVar7) goto LAB_1424e77c3;
                  uVar12 = 0;
                  goto LAB_1424e76df;
                }
                pcVar1 = pcVar8 + -1;
              } while (pcVar8[-1] == ' ');
              uVar11 = 0;
              do {
                cVar3 = FUN_1425038e0(pcVar7[uVar11]);
                if ((cVar3 == '\0') && (9 < (byte)(pcVar7[uVar11] - 0x30U))) goto LAB_1424e77c3;
                if (uVar11 == 0x18) goto LAB_1424e7757;
                cVar3 = FUN_142503910(pcVar7[uVar11]);
                uVar12 = uVar11 + 1;
                local_88[uVar11] = cVar3;
                lVar2 = uVar11 + 1;
                uVar11 = uVar12;
              } while (pcVar7 + lVar2 < pcVar8);
LAB_1424e76df:
              local_88[uVar12 & 0xffffffff] = '\0';
              pcVar7 = strchr(pcVar6,0x3b);
              iVar4 = strcmp(local_68,local_88);
            } while (iVar4 != 0);
            do {
              pcVar8 = pcVar6 + 1;
              pcVar6 = pcVar6 + 1;
            } while (*pcVar8 == ' ');
            if (pcVar7 == (char *)0x0) {
              sVar9 = strlen(pcVar6);
              pcVar7 = pcVar6 + sVar9;
            }
            do {
              pcVar8 = pcVar7;
              if (pcVar8 <= pcVar6) {
                uVar12 = 0;
                if (pcVar6 == pcVar8) goto LAB_1424e77c3;
                goto LAB_1424e77af;
              }
              pcVar7 = pcVar8 + -1;
            } while (pcVar8[-1] == ' ');
            uVar12 = 0;
            do {
              cVar3 = FUN_1425038e0(pcVar6[uVar12]);
              if (((cVar3 == '\0') && (9 < (byte)(pcVar6[uVar12] - 0x30U))) &&
                 ((uVar5 = (byte)pcVar6[uVar12] - 0x2b, 0x34 < uVar5 ||
                  ((0x10000000000015U >> ((ulonglong)uVar5 & 0x3f) & 1) == 0)))) goto LAB_1424e77c3;
              if ((longlong)uVar12 < (longlong)param_4) {
                *(char *)(param_3 + uVar12) = pcVar6[uVar12];
              }
              lVar2 = uVar12 + 1;
              uVar12 = uVar12 + 1;
            } while (pcVar6 + lVar2 < pcVar8);
LAB_1424e77af:
            FUN_142504d00(param_3,param_4,uVar12 & 0xffffffff,param_5);
          }
        }
        goto LAB_1424e77cb;
      }
    }
LAB_1424e77c3:
    *param_5 = 1;
  }
LAB_1424e77cb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
LAB_1424e7757:
  *param_5 = 5;
  goto LAB_1424e77cb;
}



// FUNCTION 1424e7800 FUN_1424e7800 body=201 status=ok
// SIG undefined FUN_1424e7800(void)

size_t FUN_1424e7800(char *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = strlen(param_1);
  sVar3 = uVar2;
  if (0 < (int)(uint)uVar2) {
    uVar7 = uVar2 & 0xffffffff;
    uVar4 = (ulonglong)((uint)uVar2 & 1);
    if (uVar7 == 1) {
      lVar6 = 0;
      uVar5 = 0;
    }
    else {
      lVar6 = 0;
      bVar1 = true;
      uVar5 = 0;
      do {
        if ((param_1[lVar6] == '-') || (param_1[lVar6] == '_')) {
          uVar8 = uVar2 & 0xffffffff;
          if ((int)uVar5 < (int)uVar2) {
            uVar8 = (ulonglong)uVar5;
          }
          uVar2 = uVar2 & 0xffffffff;
          if (uVar5 != 0) {
            uVar2 = uVar8;
          }
          bVar1 = false;
        }
        else {
          uVar5 = uVar5 + 1;
          if (bVar1) {
            uVar5 = 1;
          }
          bVar1 = true;
        }
        if ((param_1[lVar6 + 1] == '_') || (param_1[lVar6 + 1] == '-')) {
          uVar8 = uVar2 & 0xffffffff;
          if ((int)uVar5 < (int)uVar2) {
            uVar8 = (ulonglong)uVar5;
          }
          uVar2 = uVar2 & 0xffffffff;
          if (uVar5 != 0) {
            uVar2 = uVar8;
          }
          bVar1 = true;
        }
        else {
          uVar5 = uVar5 + 1;
          if (!bVar1) {
            uVar5 = 1;
          }
          bVar1 = false;
        }
        lVar6 = lVar6 + 2;
      } while (uVar7 - uVar4 != lVar6);
    }
    sVar3 = uVar2;
    if ((uVar4 != 0) && ((param_1[lVar6] == '_' || (param_1[lVar6] == '-')))) {
      sVar3 = uVar2 & 0xffffffff;
      if ((int)uVar5 < (int)uVar2) {
        sVar3 = (size_t)uVar5;
      }
      if (uVar5 == 0) {
        sVar3 = uVar2 & 0xffffffff;
      }
    }
  }
  return sVar3;
}



// FUNCTION 1424e78e0 FUN_1424e78e0 body=1432 status=ok
// SIG undefined FUN_1424e78e0(void)

ulonglong FUN_1424e78e0(char *param_1,char *param_2,char *param_3,int param_4,int *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 extraout_var;
  undefined8 uVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  char local_178 [112];
  char local_108 [40];
  ulonglong local_e0;
  char local_d8 [32];
  char *local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  uint local_80;
  char *local_78;
  char *local_70;
  size_t local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_b8 = (char *)((longlong)&local_ac + 1);
  local_b0 = 0x28;
  local_ac = 0;
  local_80 = 0;
  uVar14 = 0xffffffff;
  if (0 < *param_5) goto LAB_1424e796d;
  if ((((param_1 != (char *)0x0) && (1 < param_4)) && (cVar3 = *param_1, cVar3 != '\0')) &&
     (sVar7 = strlen(param_3), (int)sVar7 <= param_4)) {
    uVar1 = 0;
    local_70 = param_3;
    local_68 = sVar7;
    do {
      uVar17 = uVar1;
      cVar3 = FUN_1425038e0(cVar3);
      if ((cVar3 == '\0') && (9 < (byte)(param_1[uVar17] - 0x30U))) goto LAB_1424e7964;
      if (uVar17 == 0x18) goto LAB_1424e7df7;
      cVar3 = FUN_142503910(param_1[uVar17]);
      pcVar9 = local_70;
      uVar1 = uVar17 + 1;
      local_d8[uVar17] = cVar3;
      cVar3 = param_1[uVar17 + 1];
    } while (cVar3 != '\0');
    if ((int)uVar1 != 0) {
      local_d8[uVar17 + 1] = '\0';
      uVar14 = 0;
      if (0 < *param_5) goto LAB_1424e796d;
      uVar15 = 0;
      if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
        uVar14 = 0;
        do {
          cVar3 = FUN_1425038e0();
          if (((cVar3 == '\0') && (9 < (byte)(param_2[uVar14] - 0x30U))) &&
             ((uVar4 = (byte)param_2[uVar14] - 0x2b, 0x34 < uVar4 ||
              ((0x10000000000015U >> ((ulonglong)uVar4 & 0x3f) & 1) == 0)))) goto LAB_1424e7964;
          if (uVar14 == 0x60) goto LAB_1424e7df7;
          uVar15 = uVar14 + 1;
          local_178[uVar14] = param_2[uVar14];
          lVar2 = uVar14 + 1;
          uVar14 = uVar15;
        } while (param_2[lVar2] != '\0');
      }
      local_178[uVar15 & 0xffffffff] = '\0';
      pcVar8 = strchr(pcVar9,0x40);
      if ((pcVar8 == (char *)0x0) || (pcVar8[1] == '\0')) {
        uVar14 = local_68;
        if ((int)uVar15 == 0) goto LAB_1424e796d;
        uVar14 = ((int)local_68 + 1) + uVar1 +
                 (ulonglong)((int)uVar15 + (uint)(pcVar8 == (char *)0x0));
        if ((int)uVar14 < param_4) {
          pcVar9 = pcVar9 + (int)local_68;
          if (pcVar8 != (char *)0x0) {
            pcVar9 = pcVar8;
          }
          *pcVar9 = '@';
          strcpy(pcVar9 + 1,local_d8);
          pcVar9[uVar17 + 2] = '=';
          strcpy(pcVar9 + uVar17 + 3,local_178);
          goto LAB_1424e796d;
        }
      }
      else {
        local_49 = 0x40;
        local_60 = 0;
        local_78 = pcVar8;
        local_58 = uVar15;
        do {
          pcVar9 = strchr(pcVar8 + 1,0x3d);
          if (pcVar9 == (char *)0x0) goto LAB_1424e7964;
          do {
            pcVar10 = pcVar8 + 1;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar9;
          } while (*pcVar10 == ' ');
          do {
            pcVar10 = pcVar11;
            if (pcVar10 <= pcVar8) {
              uVar14 = 0;
              if (pcVar10 != pcVar8) goto LAB_1424e7bd9;
              goto LAB_1424e7964;
            }
            pcVar11 = pcVar10 + -1;
          } while (pcVar10[-1] == ' ');
          uVar17 = 0;
          do {
            cVar3 = FUN_1425038e0(pcVar8[uVar17]);
            if ((cVar3 == '\0') && (9 < (byte)(pcVar8[uVar17] - 0x30U))) goto LAB_1424e7964;
            if (uVar17 == 0x18) goto LAB_1424e7df7;
            cVar3 = FUN_142503910(pcVar8[uVar17]);
            uVar14 = uVar17 + 1;
            local_108[uVar17] = cVar3;
            lVar2 = uVar17 + 1;
            uVar17 = uVar14;
          } while (pcVar8 + lVar2 < pcVar10);
LAB_1424e7bd9:
          local_e0 = uVar14;
          local_108[uVar14 & 0xffffffff] = '\0';
          pcVar8 = strchr(pcVar9,0x3b);
          uVar4 = ~(uint)pcVar9;
          do {
            uVar5 = uVar4;
            pcVar10 = pcVar9 + 1;
            pcVar9 = pcVar9 + 1;
            uVar4 = uVar5 - 1;
          } while (*pcVar10 == ' ');
          pcVar10 = pcVar8;
          if (pcVar8 == (char *)0x0) {
            sVar7 = strlen(pcVar9);
            pcVar10 = pcVar9 + sVar7;
          }
          iVar6 = uVar5 + (int)pcVar10;
          do {
            iVar16 = iVar6;
            pcVar11 = pcVar10;
            if (pcVar11 <= pcVar9) break;
            pcVar10 = pcVar11 + -1;
            iVar6 = iVar16 + -1;
          } while (pcVar11[-1] == ' ');
          if (pcVar11 == pcVar9) goto LAB_1424e7964;
          iVar6 = strcmp(local_d8,local_108);
          if (iVar6 == 0) {
            local_60 = CONCAT71((int7)(CONCAT44(extraout_var,iVar6) >> 8),1);
            if ((int)local_58 != 0) {
              FUN_1425034d0(&local_b8,local_49,param_5);
              FUN_142503520(&local_b8,local_d8,uVar1 & 0xffffffff,param_5);
              FUN_1425034d0(&local_b8,0x3d,param_5);
              local_49 = 0x3b;
              FUN_142503520(&local_b8,local_178,local_58,param_5);
            }
          }
          else {
            uVar13 = local_49;
            if (((int)local_58 != 0) && (iVar6 < 0)) {
              if ((char)local_60 == '\0') {
                FUN_1425034d0(&local_b8,local_49,param_5);
                FUN_142503520(&local_b8,local_d8,uVar1 & 0xffffffff,param_5);
                FUN_1425034d0(&local_b8,0x3d,param_5);
                uVar12 = FUN_142503520(&local_b8,local_178,local_58,param_5);
                local_60 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                uVar13 = 0x3b;
              }
            }
            FUN_1425034d0(&local_b8,uVar13,param_5);
            FUN_142503520(&local_b8,local_108,local_e0,param_5);
            FUN_1425034d0(&local_b8,0x3d,param_5);
            FUN_142503520(&local_b8,pcVar9,iVar16,param_5);
            if ((int)local_58 == 0) {
              local_49 = 0x3b;
            }
            else {
              local_49 = 0x3b;
              if ((pcVar8 == (char *)0x0) && ((char)local_60 == '\0')) {
                FUN_1425034d0(&local_b8,0x3b,param_5);
                FUN_142503520(&local_b8,local_d8,uVar1 & 0xffffffff,param_5);
                FUN_1425034d0(&local_b8,0x3d,param_5);
                FUN_142503520(&local_b8,local_178,local_58,param_5);
                goto LAB_1424e7e0b;
              }
            }
          }
        } while (pcVar8 != (char *)0x0);
        uVar14 = local_68;
        if ((char)local_60 == '\0') goto LAB_1424e796d;
LAB_1424e7e0b:
        uVar14 = local_68;
        if (0 < *param_5) goto LAB_1424e796d;
        uVar4 = ((int)local_78 - (int)local_70) + local_80;
        uVar14 = (ulonglong)uVar4;
        if ((int)uVar4 < param_4) {
          if (0 < (int)local_80) {
            strncpy(local_78,local_b8,(ulonglong)local_80);
          }
          local_70[(int)uVar4] = '\0';
          goto LAB_1424e796d;
        }
      }
      *param_5 = 0xf;
      goto LAB_1424e796d;
    }
  }
LAB_1424e7964:
  *param_5 = 1;
  goto LAB_1424e796a;
LAB_1424e7df7:
  *param_5 = 5;
LAB_1424e796a:
  uVar14 = 0;
LAB_1424e796d:
  if ((char)local_ac != '\0') {
    FUN_1424da110(local_b8);
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 1424e7e80 Unwind@1424e7e80 body=61 status=ok
// SIG undefined Unwind@1424e7e80(void)

void Unwind_1424e7e80(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xec) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0xe0));
  }
  return;
}



// FUNCTION 1424e7ec0 FUN_1424e7ec0 body=555 status=ok
// SIG undefined FUN_1424e7ec0(void)

char * FUN_1424e7ec0(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp(param_1,"AN");
  iVar2 = 0x49967e00;
  if (iVar1 != 0) {
    iVar1 = strcmp(param_1,"BU");
    if (iVar1 == 0) {
      iVar2 = 0x49967e08;
    }
    else {
      iVar1 = strcmp(param_1,"CS");
      if (iVar1 == 0) {
        iVar2 = 0x49967e10;
      }
      else {
        iVar1 = strcmp(param_1,"DD");
        if (iVar1 == 0) {
          iVar2 = 0x49967e18;
        }
        else {
          iVar1 = strcmp(param_1,"DY");
          if (iVar1 == 0) {
            iVar2 = 0x49967e20;
          }
          else {
            iVar1 = strcmp(param_1,"FX");
            if (iVar1 == 0) {
              iVar2 = 0x49967e28;
            }
            else {
              iVar1 = strcmp(param_1,"HV");
              if (iVar1 == 0) {
                iVar2 = 0x49967e30;
              }
              else {
                iVar1 = strcmp(param_1,"NH");
                if (iVar1 == 0) {
                  iVar2 = 0x49967e38;
                }
                else {
                  iVar1 = strcmp(param_1,"RH");
                  if (iVar1 == 0) {
                    iVar2 = 0x49967e40;
                  }
                  else {
                    iVar1 = strcmp(param_1,"SU");
                    if (iVar1 == 0) {
                      iVar2 = 0x49967e48;
                    }
                    else {
                      iVar1 = strcmp(param_1,"TP");
                      if (iVar1 == 0) {
                        iVar2 = 0x49967e50;
                      }
                      else {
                        iVar1 = strcmp(param_1,"UK");
                        if (iVar1 == 0) {
                          iVar2 = 0x49967e58;
                        }
                        else {
                          iVar1 = strcmp(param_1,"VD");
                          if (iVar1 == 0) {
                            iVar2 = 0x49967e60;
                          }
                          else {
                            iVar1 = strcmp(param_1,"YD");
                            if (iVar1 == 0) {
                              iVar2 = 0x49967e68;
                            }
                            else {
                              iVar1 = strcmp(param_1,"YU");
                              if (iVar1 == 0) {
                                iVar2 = 0x49967e70;
                              }
                              else {
                                iVar1 = strcmp(param_1,"ZR");
                                if (iVar1 != 0) {
                                  return param_1;
                                }
                                iVar2 = 0x49967e78;
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
    }
  }
  if ((iVar2 + 0xb6698200U & 0x40000) == 0) {
    param_1 = (&PTR_DAT_149967e90)[iVar2 + 0xb6698200U >> 3 & 0xffff];
  }
  return param_1;
}



// FUNCTION 1424e80f0 FUN_1424e80f0 body=155 status=ok
// SIG undefined FUN_1424e80f0(void)

char * FUN_1424e80f0(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp(param_1,"in");
  iVar2 = 0x49967f20;
  if (iVar1 != 0) {
    iVar1 = strcmp(param_1,"iw");
    if (iVar1 == 0) {
      iVar2 = 0x49967f28;
    }
    else {
      iVar1 = strcmp(param_1,"ji");
      if (iVar1 == 0) {
        iVar2 = 0x49967f30;
      }
      else {
        iVar1 = strcmp(param_1,"jw");
        if (iVar1 != 0) {
          return param_1;
        }
        iVar2 = 0x49967f38;
      }
    }
  }
  if ((iVar2 + 0xb66980e0U & 0x40000) == 0) {
    param_1 = (&PTR_DAT_149967f50)[iVar2 + 0xb66980e0U >> 3 & 0xffff];
  }
  return param_1;
}



// FUNCTION 1424e8190 FUN_1424e8190 body=614 status=ok
// SIG undefined FUN_1424e8190(void)

void FUN_1424e8190(byte *param_1,undefined1 *param_2,int param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined **ppuVar10;
  longlong lVar11;
  undefined1 auStack_88 [36];
  int local_64;
  undefined8 *local_60;
  undefined1 *local_58;
  char local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c[0] = '\0';
  local_4c[1] = '\0';
  local_4c[2] = '\0';
  local_4c[3] = '\0';
  iVar5 = FUN_142503a40(param_1,&DAT_14a418301);
  if (iVar5 == 0) {
    param_1 = param_1 + 4;
  }
  else {
    iVar5 = FUN_142503ad0(param_1,&DAT_14993dbd2,3);
    if (iVar5 == 0) {
      uVar6 = param_1[3] - 0x2d;
      if (((uVar6 < 0x33) && ((0x4000000080001U >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) ||
         (param_1[3] == 0)) {
        param_1 = param_1 + 3;
      }
    }
  }
  lVar11 = 0;
  local_60 = param_4;
  if ((*param_1 - 0x49 < 0x30) &&
     ((0x800100008001U >> ((ulonglong)(*param_1 - 0x49) & 0x3f) & 1) != 0)) {
    if ((param_1[1] == 0x5f) || (param_1[1] == 0x2d)) {
      if (0 < param_3) {
        uVar3 = FUN_142503910();
        *param_2 = uVar3;
        param_2[1] = 0x2d;
      }
      param_1 = param_1 + 2;
      lVar11 = 2;
    }
    else {
      lVar11 = 0;
    }
  }
  lVar9 = 0;
  local_64 = param_3;
  local_58 = param_2;
  while( true ) {
    puVar2 = local_60;
    uVar1 = lVar11 + lVar9;
    uVar6 = param_1[lVar9] - 0x2d;
    if (((uVar6 < 0x33) && ((0x4000000080003U >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) ||
       (param_1[lVar9] == 0)) break;
    if ((longlong)uVar1 < (longlong)param_3) {
      uVar3 = FUN_142503910();
      param_2[lVar9 + lVar11] = uVar3;
    }
    if (uVar1 < 3) {
      cVar4 = FUN_142503910(param_1[lVar9]);
      local_4c[lVar9 + lVar11] = cVar4;
    }
    lVar9 = lVar9 + 1;
  }
  if ((int)uVar1 == 3) {
    pcVar7 = "aar";
    ppuVar10 = &PTR_DAT_149967f88;
    do {
      iVar5 = strcmp(local_4c,pcVar7);
      if (iVar5 == 0) {
        ppuVar10 = ppuVar10 + -1;
        goto LAB_1424e8382;
      }
      pcVar7 = *ppuVar10;
      ppuVar10 = ppuVar10 + 1;
    } while (pcVar7 != (char *)0x0);
    pcVar7 = *ppuVar10;
    if (pcVar7 != (char *)0x0) {
      do {
        iVar5 = strcmp(local_4c,pcVar7);
        if (iVar5 == 0) goto LAB_1424e8382;
        pcVar7 = ppuVar10[1];
        ppuVar10 = ppuVar10 + 1;
      } while (pcVar7 != (char *)0x0);
    }
  }
  goto LAB_1424e82e1;
LAB_1424e8382:
  if (((ulonglong)(ppuVar10 + -0x2932cff0) & 0x40000) == 0) {
    pcVar7 = (&PTR_DAT_149969250)[(uint)(ppuVar10 + -0x2932cff0) >> 3 & 0xffff];
    cVar4 = *pcVar7;
    if (cVar4 != '\0') {
      lVar8 = 1;
      lVar11 = 0;
      do {
        if (local_64 + (int)lVar11 < 1) {
          strlen(pcVar7 + -lVar11);
          break;
        }
        local_58[lVar8 + -1] = cVar4;
        cVar4 = pcVar7[lVar8];
        lVar11 = lVar11 + -1;
        lVar8 = lVar8 + 1;
      } while (cVar4 != '\0');
    }
  }
LAB_1424e82e1:
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_1 + lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 1424e8410 FUN_1424e8410 body=200 status=ok
// SIG undefined FUN_1424e8410(void)

uint FUN_1424e8410(undefined1 *param_1,undefined1 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = param_1;
  }
  lVar4 = 0;
  while( true ) {
    uVar3 = (byte)param_1[lVar4] - 0x2d;
    if (((uVar3 < 0x33) && ((0x4000000080003U >> ((ulonglong)uVar3 & 0x3f) & 1) != 0)) ||
       (param_1[lVar4] == 0)) break;
    cVar1 = FUN_1425038e0();
    if (cVar1 == '\0') break;
    lVar4 = lVar4 + 1;
  }
  uVar3 = 0;
  if ((int)lVar4 == 4) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = param_1 + lVar4;
    }
    uVar3 = 4;
    if ((int)param_3 < 4) {
      uVar3 = param_3;
    }
    if (0 < (int)param_3) {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = FUN_1425038f0(uVar2);
      *param_2 = uVar2;
    }
    if (1 < (int)uVar3) {
      lVar4 = 0;
      do {
        uVar2 = FUN_142503910(param_1[lVar4]);
        param_2[lVar4 + 1] = uVar2;
        lVar4 = lVar4 + 1;
      } while ((ulonglong)uVar3 - 1 != lVar4);
    }
  }
  return uVar3;
}



// FUNCTION 1424e84e0 FUN_1424e84e0 body=571 status=ok
// SIG undefined FUN_1424e84e0(void)

void FUN_1424e84e0(byte *param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  size_t sVar5;
  uint uVar6;
  char *pcVar7;
  undefined **ppuVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  char local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c[0] = '\0';
  local_4c[1] = '\0';
  local_4c[2] = '\0';
  local_4c[3] = '\0';
  uVar6 = *param_1 - 0x2d;
  if (((uVar6 < 0x33) && ((0x4000000080003U >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) ||
     (*param_1 == 0)) goto LAB_1424e8534;
  uVar1 = FUN_1425038f0();
  local_4c[0] = uVar1;
  uVar6 = param_1[1] - 0x2d;
  if (((uVar6 < 0x33) && ((0x4000000080003U >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) ||
     (param_1[1] == 0)) goto LAB_1424e8534;
  uVar1 = FUN_1425038f0();
  local_4c[1] = uVar1;
  uVar10 = 2;
  uVar6 = param_1[2] - 0x2d;
  if (((0x32 < uVar6) || ((0x4000000080003U >> ((ulonglong)uVar6 & 0x3f) & 1) == 0)) &&
     (param_1[2] != 0)) {
    uVar1 = FUN_1425038f0();
    local_4c[2] = uVar1;
    lVar4 = 0;
    while( true ) {
      uVar6 = param_1[lVar4 + 3] - 0x2d;
      if (((uVar6 < 0x33) && ((0x4000000080003U >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) ||
         (param_1[lVar4 + 3] == 0)) break;
      lVar4 = lVar4 + 1;
    }
    if (((uint)(lVar4 + 3U) & 0x7ffffffe) != 2) goto LAB_1424e8534;
    if ((int)lVar4 == 0) {
      pcVar7 = "AND";
      ppuVar8 = &PTR_DAT_14996a528;
      do {
        iVar3 = strcmp(local_4c,pcVar7);
        if (iVar3 == 0) {
          ppuVar8 = ppuVar8 + -1;
          goto LAB_1424e86b3;
        }
        pcVar7 = *ppuVar8;
        ppuVar8 = ppuVar8 + 1;
      } while (pcVar7 != (char *)0x0);
      pcVar7 = *ppuVar8;
      uVar10 = 3;
      if (pcVar7 != (char *)0x0) {
        do {
          iVar3 = strcmp(local_4c,pcVar7);
          if (iVar3 == 0) goto LAB_1424e86b3;
          pcVar7 = ppuVar8[1];
          ppuVar8 = ppuVar8 + 1;
        } while (pcVar7 != (char *)0x0);
      }
    }
    else {
      uVar10 = lVar4 + 3U & 0xffffffff;
    }
  }
LAB_1424e85bb:
  iVar3 = (int)uVar10;
  uVar9 = 0;
  do {
    if ((longlong)uVar9 < (longlong)param_3) {
      uVar1 = FUN_1425038f0(param_1[uVar9]);
      *(undefined1 *)(param_2 + uVar9) = uVar1;
    }
    uVar9 = uVar9 + 1;
  } while (uVar10 != uVar9);
LAB_1424e872e:
  param_1 = param_1 + iVar3;
LAB_1424e8534:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
LAB_1424e86b3:
  uVar10 = 3;
  if (((ulonglong)(ppuVar8 + -0x2932d4a4) & 0x40000) != 0) goto LAB_1424e85bb;
  pcVar7 = (&PTR_DAT_14996ad50)[(uint)(ppuVar8 + -0x2932d4a4) >> 3 & 0xffff];
  cVar2 = *pcVar7;
  pcVar11 = pcVar7;
  if (cVar2 != '\0') {
    lVar4 = 1;
    lVar12 = 0;
    do {
      if (param_3 + (int)lVar12 < 1) {
        sVar5 = strlen(pcVar7 + -lVar12);
        iVar3 = (int)sVar5 - (int)lVar12;
        goto LAB_1424e872e;
      }
      *(char *)(param_2 + -1 + lVar4) = cVar2;
      cVar2 = pcVar7[lVar4];
      lVar12 = lVar12 + -1;
      lVar4 = lVar4 + 1;
    } while (cVar2 != '\0');
    pcVar11 = pcVar7 + -lVar12;
  }
  iVar3 = (int)pcVar11 - (int)pcVar7;
  goto LAB_1424e872e;
}



// FUNCTION 1424e8740 FUN_1424e8740 body=924 status=ok
// SIG undefined FUN_1424e8740(void)

void FUN_1424e8740(char *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  void *_Dst;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_218 [32];
  int *local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  int *local_1d8;
  char *local_1d0;
  char local_1c8 [160];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if (param_1 == (char *)0x0) {
      local_1d0 = (char *)FUN_1424a3ae0();
    }
    else {
      pcVar7 = strchr(param_1,0x40);
      local_1d0 = param_1;
      if (pcVar7 == (char *)0x0) {
        uVar8 = strlen(param_1);
        uVar14 = (uint)uVar8;
        local_1d0 = param_1;
        if (0 < (int)uVar14) {
          uVar17 = uVar8 & 0xffffffff;
          uVar12 = uVar14 & 1;
          if (uVar17 == 1) {
            lVar16 = 0;
            uVar13 = 0;
          }
          else {
            lVar16 = 0;
            bVar2 = true;
            uVar15 = 0;
            do {
              iVar6 = (int)uVar15;
              if ((param_1[lVar16] == '-') || (param_1[lVar16] == '_')) {
                uVar18 = uVar8 & 0xffffffff;
                if (iVar6 < (int)uVar8) {
                  uVar18 = uVar15;
                }
                uVar8 = uVar8 & 0xffffffff;
                if (iVar6 != 0) {
                  uVar8 = uVar18;
                }
                bVar2 = false;
              }
              else {
                uVar15 = (ulonglong)(iVar6 + 1);
                if (bVar2) {
                  uVar15 = 1;
                }
                bVar2 = true;
              }
              iVar6 = (int)uVar15;
              if ((param_1[lVar16 + 1] == '_') || (param_1[lVar16 + 1] == '-')) {
                uVar18 = uVar8 & 0xffffffff;
                if (iVar6 < (int)uVar8) {
                  uVar18 = uVar15;
                }
                uVar8 = uVar8 & 0xffffffff;
                if (iVar6 != 0) {
                  uVar8 = uVar18;
                }
                bVar2 = true;
              }
              else {
                uVar15 = (ulonglong)(iVar6 + 1);
                if (!bVar2) {
                  uVar15 = 1;
                }
                bVar2 = false;
              }
              uVar14 = (uint)uVar8;
              uVar13 = (uint)uVar15;
              lVar16 = lVar16 + 2;
            } while (uVar17 - uVar12 != lVar16);
          }
          uVar4 = uVar14;
          if (((ulonglong)uVar12 != 0) && ((param_1[lVar16] == '_' || (param_1[lVar16] == '-')))) {
            if ((int)uVar13 < (int)uVar14) {
              uVar4 = uVar13;
            }
            if (uVar13 == 0) {
              uVar4 = uVar14;
            }
          }
          local_1d0 = param_1;
          if (uVar4 == 1) {
            local_1f8 = param_2;
            iVar5 = FUN_142507760(param_1,local_1c8,0x9d,0);
            iVar6 = *param_2;
            if (iVar5 < 1) {
              local_1d0 = param_1;
              if (iVar6 == -0x7c) {
                *param_2 = 0xf;
                local_1d0 = param_1;
              }
            }
            else {
              local_1d0 = param_1;
              if ((iVar6 < 1) && (local_1d0 = local_1c8, iVar6 == -0x7c)) {
                *param_2 = 0xf;
                local_1d0 = param_1;
              }
            }
          }
        }
      }
    }
    FUN_1424e8190(local_1d0,0,0,&local_1d0);
    pcVar7 = local_1d0;
    if ((*local_1d0 == '_') || (*local_1d0 == '-')) {
      lVar16 = 0;
      while( true ) {
        bVar1 = pcVar7[lVar16 + 1];
        uVar14 = bVar1 - 0x2d;
        if ((((uVar14 < 0x33) && ((0x4000000080003U >> ((ulonglong)uVar14 & 0x3f) & 1) != 0)) ||
            (bVar1 == 0)) || (cVar3 = FUN_1425038e0(), cVar3 == '\0')) break;
        lVar16 = lVar16 + 1;
      }
      lVar9 = 0;
      if ((int)lVar16 == 4) {
        lVar9 = lVar16;
      }
      pcVar7 = pcVar7 + lVar9 + 1;
      if (pcVar7 != local_1d0 + 1) {
        local_1d0 = pcVar7;
      }
      if ((*local_1d0 == '_') || (*local_1d0 == '-')) {
        FUN_1424e84e0(local_1d0 + 1,0,0,&local_1d0);
        cVar3 = *local_1d0;
        if ((cVar3 == '_') || (cVar3 == '-')) {
          local_1f8 = (int *)((ulonglong)local_1f8 & 0xffffffffffffff00);
          FUN_1424ea780(local_1d0 + 1,cVar3,0,0);
        }
      }
    }
    local_1d0 = strchr(local_1d0,0x40);
    if (local_1d0 != (char *)0x0) {
      local_1e0 = 0;
      local_1e8 = 0;
      local_1f0 = 0;
      local_1f8 = (int *)0x0;
      local_1d8 = param_2;
      iVar6 = FUN_1424e7040(local_1d0 + 1,0x40,local_128,0x100);
      if ((iVar6 != 0) && (*param_2 < 1)) {
        puVar10 = (undefined4 *)FUN_1424da030(0x38);
        if (puVar10 == (undefined4 *)0x0) {
          *param_2 = 7;
        }
        else {
          *(undefined1 **)(puVar10 + 0xc) = &LAB_1424ea770;
          *(code **)(puVar10 + 8) = FUN_1425649e0;
          *(code **)(puVar10 + 10) = FUN_1424ea720;
          *(code **)(puVar10 + 4) = FUN_1424ea6a0;
          *(code **)(puVar10 + 6) = FUN_1424ea6d0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          plVar11 = (longlong *)FUN_1424da030(0x10);
          if (plVar11 == (longlong *)0x0) {
            *param_2 = 7;
            FUN_1424da110(puVar10);
          }
          else {
            _Dst = (void *)FUN_1424da030((longlong)(iVar6 + 1));
            *plVar11 = (longlong)_Dst;
            memcpy(_Dst,local_128,(longlong)iVar6);
            *(undefined1 *)(*plVar11 + (longlong)iVar6) = 0;
            plVar11[1] = *plVar11;
            *(longlong **)(puVar10 + 2) = plVar11;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_218);
}



// FUNCTION 1424e8af0 thunk_FUN_1424a3ae0 body=5 status=ok
// SIG undefined thunk_FUN_1424a3ae0(void)

undefined8 thunk_FUN_1424a3ae0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1424a3b00();
  return *(undefined8 *)(lVar1 + 0x28);
}



// FUNCTION 1424e8b00 FUN_1424e8b00 body=210 status=ok
// SIG undefined FUN_1424e8b00(void)

undefined8 FUN_1424e8b00(char *param_1,char *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (*param_4 < 1) {
    if (param_1 == (char *)0x0) {
      param_1 = (char *)FUN_1424a3ae0();
    }
    pcVar3 = strrchr(param_1,0x5f);
    iVar5 = (int)pcVar3 - (int)param_1;
    iVar2 = 0;
    if (pcVar3 != (char *)0x0) {
      iVar2 = iVar5;
    }
    iVar1 = iVar2;
    if (0 < iVar2) {
      iVar1 = FUN_142503ad0(param_1,&DAT_14996b700,4);
      if (iVar1 == 0) {
        iVar1 = iVar2 + -3;
        iVar2 = FUN_142501310(iVar1,param_3);
        memmove(param_2,param_1 + 3,(longlong)iVar2);
      }
      else {
        iVar1 = iVar5;
        if (param_1 != param_2) {
          iVar2 = FUN_142501310(iVar2,param_3);
          memcpy(param_2,param_1,(longlong)iVar2);
        }
      }
    }
    uVar4 = FUN_142504d00(param_2,param_3,iVar1,param_4);
    return uVar4;
  }
  return 0;
}



// FUNCTION 1424e8be0 FUN_1424e8be0 body=87 status=ok
// SIG undefined FUN_1424e8be0(void)

undefined8 FUN_1424e8be0(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    if (param_1 == 0) {
      param_1 = FUN_1424a3ae0();
    }
    uVar1 = FUN_1424e8190(param_1,param_2,param_3,0);
    uVar2 = FUN_142504d00(param_2,param_3,uVar1,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1424e8c40 FUN_1424e8c40 body=310 status=ok
// SIG undefined FUN_1424e8c40(void)

void FUN_1424e8c40(char *param_1,undefined1 *param_2,uint param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_1;
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    if (param_1 == (char *)0x0) {
      param_1 = (char *)FUN_1424a3ae0();
    }
    uVar7 = 0;
    local_50 = param_1;
    FUN_1424e8190(param_1,0,0,&local_50);
    pcVar1 = local_50;
    if ((*local_50 == '_') || (*local_50 == '-')) {
      pcVar5 = local_50 + 1;
      lVar6 = 0;
      while( true ) {
        uVar4 = (byte)pcVar5[lVar6] - 0x2d;
        if (((uVar4 < 0x33) && ((0x4000000080003U >> ((ulonglong)uVar4 & 0x3f) & 1) != 0)) ||
           (pcVar5[lVar6] == 0)) break;
        cVar2 = FUN_1425038e0();
        if (cVar2 == '\0') break;
        lVar6 = lVar6 + 1;
      }
      uVar7 = 0;
      if ((int)lVar6 == 4) {
        uVar7 = 4;
        if ((int)param_3 < 4) {
          uVar7 = (ulonglong)param_3;
        }
        if (0 < (int)param_3) {
          pcVar5 = pcVar1 + 2;
          uVar3 = FUN_1425038f0(pcVar1[1]);
          *param_2 = uVar3;
        }
        if (1 < (int)uVar7) {
          lVar6 = 0;
          do {
            uVar3 = FUN_142503910(pcVar5[lVar6]);
            param_2[lVar6 + 1] = uVar3;
            lVar6 = lVar6 + 1;
          } while (uVar7 - 1 != lVar6);
        }
      }
    }
    FUN_142504d00(param_2,param_3,uVar7,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424e8d90 FUN_1424e8d90 body=284 status=ok
// SIG undefined FUN_1424e8d90(void)

void FUN_1424e8d90(char *param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined1 auStack_68 [32];
  char *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    if (param_1 == (char *)0x0) {
      param_1 = (char *)FUN_1424a3ae0();
    }
    uVar5 = 0;
    local_48 = param_1;
    FUN_1424e8190(param_1,0,0,&local_48);
    pcVar6 = local_48;
    if ((*local_48 == '_') || (*local_48 == '-')) {
      uVar4 = 0;
      while( true ) {
        bVar1 = pcVar6[uVar4 + 1];
        uVar3 = bVar1 - 0x2d;
        if (((uVar3 < 0x33) && ((0x4000000080003U >> ((ulonglong)uVar3 & 0x3f) & 1) != 0)) ||
           (bVar1 == 0)) break;
        cVar2 = FUN_1425038e0();
        if (cVar2 == '\0') break;
        uVar4 = uVar4 + 1;
      }
      uVar5 = 0;
      if ((int)uVar4 != 4) {
        uVar4 = uVar5;
      }
      pcVar6 = pcVar6 + uVar4 + 1;
      if (pcVar6 != local_48 + 1) {
        local_48 = pcVar6;
      }
      if ((*local_48 == '_') || (*local_48 == '-')) {
        uVar3 = FUN_1424e84e0(local_48 + 1,param_2,param_3,0);
        uVar5 = (ulonglong)uVar3;
      }
    }
    FUN_142504d00(param_2,param_3,uVar5,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
}



// FUNCTION 1424e8ec0 FUN_1424e8ec0 body=724 status=ok
// SIG undefined FUN_1424e8ec0(void)

void FUN_1424e8ec0(char *param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_128 [32];
  int *local_108;
  char *local_f8;
  char *local_f0;
  char local_e8 [168];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    if (param_1 == (char *)0x0) {
      local_f0 = (char *)FUN_1424a3ae0();
    }
    else {
      pcVar6 = strchr(param_1,0x40);
      local_f0 = param_1;
      if (pcVar6 == (char *)0x0) {
        uVar7 = strlen(param_1);
        uVar10 = (uint)uVar7;
        local_f0 = param_1;
        if (0 < (int)uVar10) {
          uVar15 = uVar7 & 0xffffffff;
          uVar8 = uVar10 & 1;
          if (uVar15 == 1) {
            lVar13 = 0;
            uVar9 = 0;
          }
          else {
            lVar13 = 0;
            bVar2 = true;
            uVar12 = 0;
            do {
              iVar11 = (int)uVar12;
              if ((param_1[lVar13] == '-') || (param_1[lVar13] == '_')) {
                uVar14 = uVar7 & 0xffffffff;
                if (iVar11 < (int)uVar7) {
                  uVar14 = uVar12;
                }
                uVar7 = uVar7 & 0xffffffff;
                if (iVar11 != 0) {
                  uVar7 = uVar14;
                }
                bVar2 = false;
              }
              else {
                uVar12 = (ulonglong)(iVar11 + 1);
                if (bVar2) {
                  uVar12 = 1;
                }
                bVar2 = true;
              }
              iVar11 = (int)uVar12;
              if ((param_1[lVar13 + 1] == '_') || (param_1[lVar13 + 1] == '-')) {
                uVar14 = uVar7 & 0xffffffff;
                if (iVar11 < (int)uVar7) {
                  uVar14 = uVar12;
                }
                uVar7 = uVar7 & 0xffffffff;
                if (iVar11 != 0) {
                  uVar7 = uVar14;
                }
                bVar2 = true;
              }
              else {
                uVar12 = (ulonglong)(iVar11 + 1);
                if (!bVar2) {
                  uVar12 = 1;
                }
                bVar2 = false;
              }
              uVar10 = (uint)uVar7;
              uVar9 = (uint)uVar12;
              lVar13 = lVar13 + 2;
            } while (uVar15 - uVar8 != lVar13);
          }
          uVar4 = uVar10;
          if (((ulonglong)uVar8 != 0) && ((param_1[lVar13] == '_' || (param_1[lVar13] == '-')))) {
            if ((int)uVar9 < (int)uVar10) {
              uVar4 = uVar9;
            }
            if (uVar9 == 0) {
              uVar4 = uVar10;
            }
          }
          local_f0 = param_1;
          if (uVar4 == 1) {
            local_108 = param_4;
            iVar5 = FUN_142507760(param_1,local_e8,0x9d,0);
            iVar11 = *param_4;
            if (iVar5 < 1) {
              local_f0 = param_1;
              if (iVar11 == -0x7c) {
                *param_4 = 0xf;
                local_f0 = param_1;
              }
            }
            else {
              local_f0 = param_1;
              if ((iVar11 < 1) && (local_f0 = local_e8, iVar11 == -0x7c)) {
                *param_4 = 0xf;
                local_f0 = param_1;
              }
            }
          }
        }
      }
    }
    uVar7 = 0;
    FUN_1424e8190(local_f0,0,0,&local_f0);
    pcVar6 = local_f0;
    if ((*local_f0 == '_') || (*local_f0 == '-')) {
      uVar15 = 0;
      while( true ) {
        bVar1 = pcVar6[uVar15 + 1];
        uVar10 = bVar1 - 0x2d;
        if ((((uVar10 < 0x33) && ((0x4000000080003U >> ((ulonglong)uVar10 & 0x3f) & 1) != 0)) ||
            (bVar1 == 0)) || (cVar3 = FUN_1425038e0(), cVar3 == '\0')) break;
        uVar15 = uVar15 + 1;
      }
      uVar7 = 0;
      if ((int)uVar15 != 4) {
        uVar15 = uVar7;
      }
      pcVar6 = pcVar6 + uVar15 + 1;
      if (pcVar6 != local_f0 + 1) {
        local_f0 = pcVar6;
      }
      if ((*local_f0 == '_') || (*local_f0 == '-')) {
        uVar7 = 0;
        FUN_1424e84e0(local_f0 + 1,0,0,&local_f8);
        if (local_f8 != local_f0 + 1) {
          local_f0 = local_f8;
        }
        cVar3 = *local_f0;
        if ((cVar3 == '_') || (cVar3 == '-')) {
          if ((local_f0 != local_f8) &&
             ((local_f0[1] == '_' || (local_f8 = local_f0, local_f0[1] == '-')))) {
            local_f8 = local_f0 + 1;
            cVar3 = *local_f8;
            local_f0 = local_f8;
          }
          local_108 = (int *)((ulonglong)local_108 & 0xffffffffffffff00);
          uVar10 = FUN_1424ea780(local_f8 + 1,cVar3,param_2,param_3);
          uVar7 = (ulonglong)uVar10;
        }
      }
    }
    FUN_142504d00(param_2,param_3,uVar7,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_128);
}



// FUNCTION 1424e91c0 FUN_1424e91c0 body=23 status=ok
// SIG undefined FUN_1424e91c0(void)

void FUN_1424e91c0(void)

{
  FUN_1424e91e0();
  return;
}



// FUNCTION 1424e91e0 FUN_1424e91e0 body=3907 status=ok
// SIG undefined FUN_1424e91e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424e91e0(byte *param_1,char *param_2,int param_3,uint param_4,int *param_5)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  ulonglong uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  longlong lVar18;
  size_t sVar19;
  ulonglong uVar20;
  size_t sVar21;
  char *pcVar22;
  char *pcVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar64;
  int iVar66;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auStack_2d8 [32];
  int *local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0;
  int *local_298;
  int local_288;
  uint local_284;
  char *local_280;
  uint local_278;
  int local_274;
  char *local_270;
  undefined1 local_268 [24];
  char *local_250;
  byte *local_248;
  byte *local_240;
  byte local_238 [160];
  char local_198 [168];
  ulonglong local_f0;
  int iVar65;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if (0 < *param_5) goto LAB_1424e9f42;
  local_284 = param_4;
  if (param_1 == (byte *)0x0) {
    local_240 = (byte *)FUN_1424a3ae0();
  }
  else {
    pcVar11 = strchr((char *)param_1,0x40);
    local_240 = param_1;
    if (pcVar11 == (char *)0x0) {
      uVar12 = strlen((char *)param_1);
      uVar8 = (uint)uVar12;
      local_240 = param_1;
      if (0 < (int)uVar8) {
        uVar17 = uVar12 & 0xffffffff;
        uVar14 = uVar8 & 1;
        if (uVar17 == 1) {
          lVar24 = 0;
          uVar15 = 0;
        }
        else {
          lVar24 = 0;
          bVar25 = true;
          uVar15 = 0;
          do {
            if ((param_1[lVar24] == 0x2d) || (param_1[lVar24] == 0x5f)) {
              uVar20 = uVar12 & 0xffffffff;
              if ((int)uVar15 < (int)uVar12) {
                uVar20 = (ulonglong)uVar15;
              }
              uVar12 = uVar12 & 0xffffffff;
              if (uVar15 != 0) {
                uVar12 = uVar20;
              }
              bVar25 = false;
            }
            else {
              uVar15 = uVar15 + 1;
              if (bVar25) {
                uVar15 = 1;
              }
              bVar25 = true;
            }
            if ((param_1[lVar24 + 1] == 0x5f) || (param_1[lVar24 + 1] == 0x2d)) {
              uVar20 = uVar12 & 0xffffffff;
              if ((int)uVar15 < (int)uVar12) {
                uVar20 = (ulonglong)uVar15;
              }
              uVar12 = uVar12 & 0xffffffff;
              if (uVar15 != 0) {
                uVar12 = uVar20;
              }
              bVar25 = true;
            }
            else {
              uVar15 = uVar15 + 1;
              if (!bVar25) {
                uVar15 = 1;
              }
              bVar25 = false;
            }
            uVar8 = (uint)uVar12;
            lVar24 = lVar24 + 2;
          } while (uVar17 - uVar14 != lVar24);
        }
        uVar6 = uVar8;
        if (((ulonglong)uVar14 != 0) && ((param_1[lVar24] == 0x5f || (param_1[lVar24] == 0x2d)))) {
          if ((int)uVar15 < (int)uVar8) {
            uVar6 = uVar15;
          }
          if (uVar15 == 0) {
            uVar6 = uVar8;
          }
        }
        local_240 = param_1;
        if (uVar6 == 1) {
          local_2b8 = param_5;
          iVar7 = FUN_142507760(param_1,local_238,0x9d,0);
          iVar9 = *param_5;
          if (iVar7 < 1) {
            local_240 = param_1;
            if (iVar9 == -0x7c) {
              *param_5 = 0xf;
              local_240 = param_1;
            }
          }
          else {
            local_240 = param_1;
            if ((iVar9 < 1) && (local_240 = local_238, iVar9 == -0x7c)) {
              *param_5 = 0xf;
              local_240 = param_1;
            }
          }
        }
      }
    }
  }
  pbVar13 = local_240;
  local_280 = param_2;
  local_288 = param_3;
  if (param_3 < 0x9d || param_2 == (char *)0x0) {
    local_280 = local_198;
    local_288 = 0x9d;
  }
  uVar8 = FUN_1424e8190(local_240,local_280,local_288,&local_240);
  sVar21 = (size_t)uVar8;
  local_274 = param_3;
  local_270 = param_2;
  if ((uVar8 == 9) && (iVar9 = strncmp((char *)pbVar13,"i-default",9), iVar9 == 0)) {
    pcVar11 = (char *)FUN_1424a3ae0();
    sVar21 = strlen(pcVar11);
    memcpy(local_280,pcVar11,(longlong)(int)sVar21);
LAB_1424e9557:
    uVar14 = 0;
    auVar38._12_4_ = 0;
    auVar38._0_12_ = local_268._4_12_;
    local_268._0_16_ = auVar38 << 0x20;
    local_278 = 0;
    uVar8 = local_284;
  }
  else {
    pbVar13 = local_240;
    if ((*local_240 != 0x5f) && (*local_240 != 0x2d)) goto LAB_1424e9557;
    if ((int)uVar8 < local_288) {
      local_280[(int)uVar8] = '_';
    }
    uVar14 = uVar8 + 1;
    sVar21 = (size_t)uVar14;
    pcVar23 = (char *)0x0;
    iVar9 = local_288 - uVar14;
    pcVar11 = local_280 + (longlong)(int)uVar8 + 1;
    if (iVar9 == 0 || local_288 < (int)uVar14) {
      pcVar11 = pcVar23;
    }
    pbVar1 = local_240 + 1;
    while( true ) {
      uVar8 = pbVar1[(longlong)pcVar23] - 0x2d;
      if (((uVar8 < 0x33) && ((0x4000000080003U >> ((ulonglong)uVar8 & 0x3f) & 1) != 0)) ||
         (pbVar1[(longlong)pcVar23] == 0)) break;
      cVar3 = FUN_1425038e0();
      if (cVar3 == '\0') break;
      pcVar23 = pcVar23 + 1;
    }
    local_278 = 1;
    if ((int)pcVar23 == 4) {
      local_268._0_4_ = 4;
      if (iVar9 < 4) {
        local_268._0_4_ = iVar9;
      }
      pbVar16 = pbVar1;
      if (0 < iVar9) {
        pbVar16 = pbVar13 + 2;
        cVar3 = FUN_1425038f0(pbVar13[1]);
        *pcVar11 = cVar3;
      }
      if (1 < (int)local_268._0_4_) {
        uVar12 = (ulonglong)(uint)local_268._0_4_;
        lVar24 = 0;
        do {
          cVar3 = FUN_142503910(pbVar16[lVar24]);
          pcVar11[lVar24 + 1] = cVar3;
          lVar24 = lVar24 + 1;
        } while (uVar12 - 1 != lVar24);
      }
      if (0 < iVar9) {
        local_240 = pbVar1 + (longlong)pcVar23;
        uVar14 = uVar14 + local_268._0_4_;
        sVar21 = (size_t)uVar14;
        local_278 = 2;
        if ((*local_240 == 0x5f) || (*local_240 == 0x2d)) {
          if ((int)uVar14 < local_288) {
            local_280[(int)uVar14] = '_';
          }
          sVar21 = (size_t)(uVar14 + 1);
        }
      }
    }
    else {
      auVar34._12_4_ = 0;
      auVar34._0_12_ = local_268._4_12_;
      local_268._0_16_ = auVar34 << 0x20;
    }
    param_2 = local_270;
    uVar8 = local_284;
    uVar14 = 0;
    if ((*local_240 == 0x5f) || (*local_240 == 0x2d)) {
      iVar9 = (int)sVar21;
      pcVar11 = (char *)0x0;
      if (local_288 - iVar9 != 0 && iVar9 <= local_288) {
        pcVar11 = local_280 + iVar9;
      }
      iVar7 = FUN_1424e84e0(local_240 + 1,pcVar11,local_288 - iVar9,&local_248);
      if (0 < iVar7) {
        local_240 = local_248;
        sVar21 = (size_t)(uint)(iVar9 + iVar7);
      }
      bVar5 = *local_240;
      if ((bVar5 == 0x5f) || (uVar14 = 0, bVar5 == 0x2d)) {
        if ((-1 < iVar7) && ((local_240[1] != 0x2d && (local_240[1] != 0x5f)))) {
          iVar9 = (int)sVar21;
          if (iVar9 < local_288) {
            local_280[iVar9] = '_';
            bVar5 = *local_240;
          }
          local_278 = local_278 + 1;
          sVar21 = (size_t)(iVar9 + 1);
        }
        iVar9 = (int)sVar21;
        pcVar11 = (char *)0x0;
        if (iVar9 < local_288) {
          pcVar11 = local_280 + iVar9;
        }
        local_2b8 = (int *)((ulonglong)local_2b8 & 0xffffffffffffff00);
        uVar14 = FUN_1424ea780(local_240 + 1,bVar5,pcVar11);
        if (0 < (int)uVar14) {
          sVar21 = (size_t)(iVar9 + uVar14);
          local_240 = local_240 + (ulonglong)uVar14 + 1;
        }
      }
    }
  }
  if (((uVar8 & 1) == 0) && (*local_240 == 0x2e)) {
    lVar24 = (longlong)(int)sVar21;
    bVar5 = 0x2e;
    while ((bVar5 & 0xbf) != 0) {
      if (lVar24 < local_288) {
        local_280[lVar24] = bVar5;
      }
      lVar24 = lVar24 + 1;
      sVar21 = (size_t)((int)sVar21 + 1);
      bVar5 = local_240[1];
      local_240 = local_240 + 1;
    }
  }
  iVar9 = (int)sVar21;
  pbVar13 = (byte *)strchr((char *)local_240,0x40);
  local_240 = pbVar13;
  if (pbVar13 == (byte *)0x0) {
    pbVar13 = (byte *)0x0;
    pcVar11 = (char *)0x0;
LAB_1424e97e5:
    iVar9 = (int)sVar21;
    pcVar23 = (char *)0x0;
    bVar25 = true;
    iVar7 = local_274;
  }
  else {
    pcVar23 = strchr((char *)pbVar13,0x3d);
    pcVar11 = strchr((char *)pbVar13,0x3b);
    bVar25 = pcVar23 == (char *)0x0;
    iVar7 = local_274;
    if (((uVar8 & 1) == 0) && (pcVar23 == (char *)0x0)) {
      bVar5 = *pbVar13;
      if (bVar5 == 0) {
        pcVar23 = (char *)0x0;
        goto LAB_1424e9e75;
      }
      lVar24 = (longlong)iVar9;
      do {
        pbVar13 = pbVar13 + 1;
        if (lVar24 < local_288) {
          local_280[lVar24] = bVar5;
        }
        lVar24 = lVar24 + 1;
        bVar5 = *pbVar13;
        sVar21 = (size_t)((int)sVar21 + 1);
        local_240 = pbVar13;
      } while (bVar5 != 0);
      goto LAB_1424e97e5;
    }
  }
  local_274 = iVar7;
  if ((uVar8 & 1) != 0) {
    iVar9 = (int)sVar21;
                    /* WARNING: Read-only address (ram,0x00014996b6e0) is written */
    local_250 = pcVar11;
    if ((bool)(pbVar13 != (byte *)0x0 & bVar25)) {
      if (((int)local_278 < 2) || ((0 < (int)local_268._0_4_ && (local_278 == 2)))) {
        sVar19 = (size_t)iVar9;
        uVar8 = 1;
        if (1 < (int)local_278) {
          uVar8 = local_278;
        }
        sVar21 = sVar19;
        uVar15 = local_278;
        if (0xe < uVar8 - local_278) {
          uVar12 = (ulonglong)(uVar8 - local_278) + 1;
          uVar17 = uVar12 & 0xfffffffffffffff0;
          sVar21 = uVar17 + sVar19;
          auVar40._0_8_ = (longlong)iVar9;
          auVar40._8_4_ = iVar9;
          auVar40._12_4_ = iVar9 >> 0x1f;
          auVar27._0_8_ = auVar40._0_8_ + 0xe;
          lVar24 = auVar40._8_8_;
          auVar27._8_8_ = lVar24 + 0xf;
          auVar28._0_8_ = auVar40._0_8_ + 0xc;
          auVar28._8_8_ = lVar24 + 0xd;
          auVar29._0_8_ = auVar40._0_8_ + 10;
          auVar29._8_8_ = lVar24 + 0xb;
          auVar30._0_8_ = auVar40._0_8_ + 8;
          auVar30._8_8_ = lVar24 + 9;
          auVar31._0_8_ = auVar40._0_8_ + 6;
          auVar31._8_8_ = lVar24 + 7;
          auVar32._0_8_ = auVar40._0_8_ + 4;
          auVar32._8_8_ = lVar24 + 5;
          auVar33._0_8_ = auVar40._0_8_ + 2;
          auVar33._8_8_ = lVar24 + 3;
          auVar26._8_8_ = lVar24 + 1;
          auVar26._0_8_ = auVar40._0_8_;
          local_268._0_8_ = (longlong)local_288;
          local_268._8_4_ = local_288;
          local_268._12_4_ = local_288 >> 0x1f;
          uVar20 = 0;
          auVar34 = local_268._0_16_;
          do {
            auVar40 = auVar26 ^ _DAT_14996b6e0;
            auVar38 = local_268._0_16_ ^ _DAT_14996b6e0;
            iVar7 = auVar38._0_4_;
            iVar9 = -(uint)(auVar40._0_4_ < iVar7);
            iVar10 = auVar38._4_4_;
            auVar41._4_4_ = -(uint)(auVar40._4_4_ < iVar10);
            iVar65 = auVar38._8_4_;
            iVar66 = auVar38._12_4_;
            iVar64 = -(uint)(auVar40._8_4_ < iVar65);
            auVar41._12_4_ = -(uint)(auVar40._12_4_ < iVar66);
            auVar53._4_4_ = iVar9;
            auVar53._0_4_ = iVar9;
            auVar53._8_4_ = iVar64;
            auVar53._12_4_ = iVar64;
            auVar38 = pshuflw(unaff_XMM15,auVar53,0xe8);
            auVar43._4_4_ = -(uint)(auVar40._4_4_ == iVar10);
            auVar43._12_4_ = -(uint)(auVar40._12_4_ == iVar66);
            auVar43._0_4_ = auVar43._4_4_;
            auVar43._8_4_ = auVar43._12_4_;
            auVar34 = pshuflw(auVar34,auVar43,0xe8);
            auVar41._0_4_ = auVar41._4_4_;
            auVar41._8_4_ = auVar41._12_4_;
            auVar40 = pshuflw(auVar38,auVar41,0xe8);
            auVar40 = auVar40 | auVar34 & auVar38;
            auVar34 = packssdw(auVar40,auVar40);
            if ((auVar34._0_4_ & 1) != 0) {
              local_280[uVar20 + sVar19] = '_';
            }
            auVar41 = auVar43 & auVar53 | auVar41;
            auVar38 = packssdw(auVar41,auVar41);
            auVar38 = packssdw(auVar38,auVar38);
            auVar38 = packsswb(auVar38,auVar38);
            if ((auVar38._0_4_ >> 8 & 1) != 0) {
              local_280[uVar20 + sVar19 + 1] = '_';
            }
            auVar38 = auVar33 ^ _DAT_14996b6e0;
            iVar9 = -(uint)(auVar38._0_4_ < iVar7);
            auVar61._4_4_ = -(uint)(auVar38._4_4_ < iVar10);
            iVar64 = -(uint)(auVar38._8_4_ < iVar65);
            auVar61._12_4_ = -(uint)(auVar38._12_4_ < iVar66);
            auVar42._4_4_ = iVar9;
            auVar42._0_4_ = iVar9;
            auVar42._8_4_ = iVar64;
            auVar42._12_4_ = iVar64;
            iVar9 = -(uint)(auVar38._4_4_ == iVar10);
            iVar64 = -(uint)(auVar38._12_4_ == iVar66);
            auVar54._4_4_ = iVar9;
            auVar54._0_4_ = iVar9;
            auVar54._8_4_ = iVar64;
            auVar54._12_4_ = iVar64;
            auVar61._0_4_ = auVar61._4_4_;
            auVar61._8_4_ = auVar61._12_4_;
            auVar38 = auVar54 & auVar42 | auVar61;
            auVar38 = packssdw(auVar38,auVar38);
            auVar38 = packssdw(auVar38,auVar38);
            auVar38 = packsswb(auVar38,auVar38);
            if ((auVar38._0_4_ >> 0x10 & 1) != 0) {
              local_280[uVar20 + sVar19 + 2] = '_';
            }
            auVar38 = pshufhw(auVar38,auVar42,0x84);
            auVar43 = pshufhw(auVar42,auVar54,0x84);
            auVar40 = pshufhw(auVar38,auVar61,0x84);
            auVar40 = auVar40 | auVar43 & auVar38;
            auVar38 = packssdw(auVar40,auVar40);
            auVar38 = packsswb(auVar38,auVar38);
            if ((auVar38._0_4_ >> 0x18 & 1) != 0) {
              local_280[uVar20 + sVar19 + 3] = '_';
            }
            auVar38 = auVar32 ^ _DAT_14996b6e0;
            iVar9 = -(uint)(auVar38._0_4_ < iVar7);
            auVar45._4_4_ = -(uint)(auVar38._4_4_ < iVar10);
            iVar64 = -(uint)(auVar38._8_4_ < iVar65);
            auVar45._12_4_ = -(uint)(auVar38._12_4_ < iVar66);
            auVar55._4_4_ = iVar9;
            auVar55._0_4_ = iVar9;
            auVar55._8_4_ = iVar64;
            auVar55._12_4_ = iVar64;
            auVar40 = pshuflw(auVar34,auVar55,0xe8);
            auVar35._0_4_ = -(uint)(auVar38._0_4_ == iVar7);
            auVar35._4_4_ = -(uint)(auVar38._4_4_ == iVar10);
            auVar35._8_4_ = -(uint)(auVar38._8_4_ == iVar65);
            auVar35._12_4_ = -(uint)(auVar38._12_4_ == iVar66);
            auVar44._4_4_ = auVar35._4_4_;
            auVar44._0_4_ = auVar35._4_4_;
            auVar44._8_4_ = auVar35._12_4_;
            auVar44._12_4_ = auVar35._12_4_;
            auVar34 = pshuflw(auVar35,auVar44,0xe8);
            auVar45._0_4_ = auVar45._4_4_;
            auVar45._8_4_ = auVar45._12_4_;
            auVar38 = pshuflw(auVar40,auVar45,0xe8);
            auVar38 = auVar38 | auVar34 & auVar40;
            auVar34 = packssdw(auVar34 & auVar40,auVar38);
            auVar34 = packsswb(auVar34,auVar34);
            if ((auVar34._4_2_ & 1) != 0) {
              local_280[uVar20 + sVar19 + 4] = '_';
            }
            auVar45 = auVar44 & auVar55 | auVar45;
            auVar40 = packssdw(auVar45,auVar45);
            auVar34 = packssdw(auVar34,auVar40);
            auVar34 = packsswb(auVar34,auVar34);
            if ((auVar34._4_2_ >> 8 & 1) != 0) {
              local_280[uVar20 + sVar19 + 5] = '_';
            }
            auVar34 = auVar31 ^ _DAT_14996b6e0;
            iVar9 = -(uint)(auVar34._0_4_ < iVar7);
            auVar62._4_4_ = -(uint)(auVar34._4_4_ < iVar10);
            iVar64 = -(uint)(auVar34._8_4_ < iVar65);
            auVar62._12_4_ = -(uint)(auVar34._12_4_ < iVar66);
            auVar46._4_4_ = iVar9;
            auVar46._0_4_ = iVar9;
            auVar46._8_4_ = iVar64;
            auVar46._12_4_ = iVar64;
            iVar9 = -(uint)(auVar34._4_4_ == iVar10);
            iVar64 = -(uint)(auVar34._12_4_ == iVar66);
            auVar56._4_4_ = iVar9;
            auVar56._0_4_ = iVar9;
            auVar56._8_4_ = iVar64;
            auVar56._12_4_ = iVar64;
            auVar62._0_4_ = auVar62._4_4_;
            auVar62._8_4_ = auVar62._12_4_;
            auVar34 = auVar56 & auVar46 | auVar62;
            auVar34 = packssdw(auVar34,auVar34);
            auVar34 = packssdw(auVar34,auVar34);
            auVar34 = packsswb(auVar34,auVar34);
            if ((auVar34._6_2_ & 1) != 0) {
              local_280[uVar20 + sVar19 + 6] = '_';
            }
            auVar34 = pshufhw(auVar34,auVar46,0x84);
            auVar43 = pshufhw(auVar46,auVar56,0x84);
            auVar40 = pshufhw(auVar34,auVar62,0x84);
            auVar40 = auVar40 | auVar43 & auVar34;
            auVar34 = packssdw(auVar40,auVar40);
            auVar34 = packsswb(auVar34,auVar34);
            if ((auVar34._6_2_ >> 8 & 1) != 0) {
              local_280[uVar20 + sVar19 + 7] = '_';
            }
            auVar34 = auVar30 ^ _DAT_14996b6e0;
            iVar9 = -(uint)(auVar34._0_4_ < iVar7);
            auVar48._4_4_ = -(uint)(auVar34._4_4_ < iVar10);
            iVar64 = -(uint)(auVar34._8_4_ < iVar65);
            auVar48._12_4_ = -(uint)(auVar34._12_4_ < iVar66);
            auVar57._4_4_ = iVar9;
            auVar57._0_4_ = iVar9;
            auVar57._8_4_ = iVar64;
            auVar57._12_4_ = iVar64;
            auVar38 = pshuflw(auVar38,auVar57,0xe8);
            auVar36._0_4_ = -(uint)(auVar34._0_4_ == iVar7);
            auVar36._4_4_ = -(uint)(auVar34._4_4_ == iVar10);
            auVar36._8_4_ = -(uint)(auVar34._8_4_ == iVar65);
            auVar36._12_4_ = -(uint)(auVar34._12_4_ == iVar66);
            auVar47._4_4_ = auVar36._4_4_;
            auVar47._0_4_ = auVar36._4_4_;
            auVar47._8_4_ = auVar36._12_4_;
            auVar47._12_4_ = auVar36._12_4_;
            auVar34 = pshuflw(auVar36,auVar47,0xe8);
            auVar48._0_4_ = auVar48._4_4_;
            auVar48._8_4_ = auVar48._12_4_;
            auVar40 = pshuflw(auVar38,auVar48,0xe8);
            auVar40 = auVar40 | auVar34 & auVar38;
            auVar40 = packssdw(auVar40,auVar40);
            auVar34 = packsswb(auVar34 & auVar38,auVar40);
            if ((auVar34._8_2_ & 1) != 0) {
              local_280[uVar20 + sVar19 + 8] = '_';
            }
            auVar48 = auVar47 & auVar57 | auVar48;
            auVar38 = packssdw(auVar48,auVar48);
            auVar38 = packssdw(auVar38,auVar38);
            auVar34 = packsswb(auVar34,auVar38);
            if ((auVar34._8_2_ >> 8 & 1) != 0) {
              local_280[uVar20 + sVar19 + 9] = '_';
            }
            auVar34 = auVar29 ^ _DAT_14996b6e0;
            iVar9 = -(uint)(auVar34._0_4_ < iVar7);
            auVar63._4_4_ = -(uint)(auVar34._4_4_ < iVar10);
            iVar64 = -(uint)(auVar34._8_4_ < iVar65);
            auVar63._12_4_ = -(uint)(auVar34._12_4_ < iVar66);
            auVar49._4_4_ = iVar9;
            auVar49._0_4_ = iVar9;
            auVar49._8_4_ = iVar64;
            auVar49._12_4_ = iVar64;
            iVar9 = -(uint)(auVar34._4_4_ == iVar10);
            iVar64 = -(uint)(auVar34._12_4_ == iVar66);
            auVar58._4_4_ = iVar9;
            auVar58._0_4_ = iVar9;
            auVar58._8_4_ = iVar64;
            auVar58._12_4_ = iVar64;
            auVar63._0_4_ = auVar63._4_4_;
            auVar63._8_4_ = auVar63._12_4_;
            auVar34 = auVar58 & auVar49 | auVar63;
            auVar34 = packssdw(auVar34,auVar34);
            auVar34 = packssdw(auVar34,auVar34);
            auVar34 = packsswb(auVar34,auVar34);
            if ((auVar34._10_2_ & 1) != 0) {
              local_280[uVar20 + sVar19 + 10] = '_';
            }
            auVar34 = pshufhw(auVar34,auVar49,0x84);
            auVar43 = pshufhw(auVar49,auVar58,0x84);
            auVar38 = pshufhw(auVar34,auVar63,0x84);
            auVar38 = auVar38 | auVar43 & auVar34;
            auVar34 = packssdw(auVar38,auVar38);
            auVar34 = packsswb(auVar34,auVar34);
            if ((auVar34._10_2_ >> 8 & 1) != 0) {
              local_280[uVar20 + sVar19 + 0xb] = '_';
            }
            auVar34 = auVar28 ^ _DAT_14996b6e0;
            iVar9 = -(uint)(auVar34._0_4_ < iVar7);
            auVar51._4_4_ = -(uint)(auVar34._4_4_ < iVar10);
            iVar64 = -(uint)(auVar34._8_4_ < iVar65);
            auVar51._12_4_ = -(uint)(auVar34._12_4_ < iVar66);
            auVar59._4_4_ = iVar9;
            auVar59._0_4_ = iVar9;
            auVar59._8_4_ = iVar64;
            auVar59._12_4_ = iVar64;
            auVar38 = pshuflw(auVar40,auVar59,0xe8);
            auVar37._0_4_ = -(uint)(auVar34._0_4_ == iVar7);
            auVar37._4_4_ = -(uint)(auVar34._4_4_ == iVar10);
            auVar37._8_4_ = -(uint)(auVar34._8_4_ == iVar65);
            auVar37._12_4_ = -(uint)(auVar34._12_4_ == iVar66);
            auVar50._4_4_ = auVar37._4_4_;
            auVar50._0_4_ = auVar37._4_4_;
            auVar50._8_4_ = auVar37._12_4_;
            auVar50._12_4_ = auVar37._12_4_;
            auVar34 = pshuflw(auVar37,auVar50,0xe8);
            auVar51._0_4_ = auVar51._4_4_;
            auVar51._8_4_ = auVar51._12_4_;
            auVar40 = pshuflw(auVar38,auVar51,0xe8);
            unaff_XMM15 = auVar40 | auVar34 & auVar38;
            auVar34 = packssdw(auVar34 & auVar38,unaff_XMM15);
            auVar34 = packsswb(auVar34,auVar34);
            if ((auVar34._12_2_ & 1) != 0) {
              local_280[uVar20 + sVar19 + 0xc] = '_';
            }
            auVar51 = auVar50 & auVar59 | auVar51;
            auVar38 = packssdw(auVar51,auVar51);
            auVar34 = packssdw(auVar34,auVar38);
            auVar34 = packsswb(auVar34,auVar34);
            if ((auVar34._12_2_ >> 8 & 1) != 0) {
              local_280[uVar20 + sVar19 + 0xd] = '_';
            }
            auVar34 = auVar27 ^ _DAT_14996b6e0;
            iVar9 = -(uint)(auVar34._0_4_ < iVar7);
            auVar60._4_4_ = -(uint)(auVar34._4_4_ < iVar10);
            iVar7 = -(uint)(auVar34._8_4_ < iVar65);
            auVar60._12_4_ = -(uint)(auVar34._12_4_ < iVar66);
            auVar52._4_4_ = iVar9;
            auVar52._0_4_ = iVar9;
            auVar52._8_4_ = iVar7;
            auVar52._12_4_ = iVar7;
            iVar9 = -(uint)(auVar34._4_4_ == iVar10);
            iVar7 = -(uint)(auVar34._12_4_ == iVar66);
            auVar39._4_4_ = iVar9;
            auVar39._0_4_ = iVar9;
            auVar39._8_4_ = iVar7;
            auVar39._12_4_ = iVar7;
            auVar60._0_4_ = auVar60._4_4_;
            auVar60._8_4_ = auVar60._12_4_;
            auVar34 = auVar39 & auVar52 | auVar60;
            auVar34 = packssdw(auVar34,auVar34);
            auVar34 = packssdw(auVar34,auVar34);
            auVar34 = packsswb(auVar34,auVar34);
            if ((auVar34._14_2_ & 1) != 0) {
              local_280[uVar20 + sVar19 + 0xe] = '_';
            }
            auVar34 = pshufhw(auVar34,auVar52,0x84);
            auVar40 = pshufhw(auVar39,auVar39,0x84);
            auVar38 = pshufhw(auVar34,auVar60,0x84);
            auVar38 = auVar38 | auVar40 & auVar34;
            auVar34 = packssdw(auVar38,auVar38);
            auVar34 = packsswb(auVar34,auVar34);
            if ((auVar34._14_2_ >> 8 & 1) != 0) {
              local_280[uVar20 + sVar19 + 0xf] = '_';
            }
            uVar20 = uVar20 + 0x10;
            lVar24 = auVar26._8_8_;
            auVar26._0_8_ = auVar26._0_8_ + 0x10;
            auVar26._8_8_ = lVar24 + 0x10;
            lVar24 = auVar33._8_8_;
            auVar33._0_8_ = auVar33._0_8_ + 0x10;
            auVar33._8_8_ = lVar24 + 0x10;
            lVar24 = auVar32._8_8_;
            auVar32._0_8_ = auVar32._0_8_ + 0x10;
            auVar32._8_8_ = lVar24 + 0x10;
            lVar24 = auVar31._8_8_;
            auVar31._0_8_ = auVar31._0_8_ + 0x10;
            auVar31._8_8_ = lVar24 + 0x10;
            lVar24 = auVar30._8_8_;
            auVar30._0_8_ = auVar30._0_8_ + 0x10;
            auVar30._8_8_ = lVar24 + 0x10;
            lVar24 = auVar29._8_8_;
            auVar29._0_8_ = auVar29._0_8_ + 0x10;
            auVar29._8_8_ = lVar24 + 0x10;
            lVar24 = auVar28._8_8_;
            auVar28._0_8_ = auVar28._0_8_ + 0x10;
            auVar28._8_8_ = lVar24 + 0x10;
            lVar24 = auVar27._8_8_;
            auVar27._0_8_ = auVar27._0_8_ + 0x10;
            auVar27._8_8_ = lVar24 + 0x10;
          } while (uVar17 != uVar20);
          uVar15 = local_278 | (uint)uVar17;
          if (uVar12 == uVar17) goto LAB_1424e9db1;
        }
        iVar9 = (uVar8 - uVar15) + 1;
        do {
          if ((longlong)sVar21 < (longlong)local_288) {
            local_280[sVar21] = '_';
          }
          sVar21 = sVar21 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
LAB_1424e9db1:
      iVar9 = (int)sVar21;
      bVar5 = pbVar13[1];
      if (((bVar5 != 0) && (bVar5 != 0x2e)) && (bVar5 != 0x40)) {
        iVar7 = local_288 - iVar9;
        pcVar11 = local_280 + iVar9;
        if ((int)uVar14 < 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
          if (0 < iVar7) {
            *pcVar11 = '_';
          }
        }
        if ((int)uVar8 < iVar7) {
          bVar4 = FUN_1425038f0(pbVar13[1]);
          bVar5 = 0x5f;
          if ((bVar4 & 0xfe) != 0x2c) {
            bVar5 = bVar4;
          }
          pcVar11[uVar8] = bVar5;
        }
        uVar12 = (ulonglong)uVar8;
        pbVar13 = pbVar13 + 2;
        while( true ) {
          uVar12 = uVar12 + 1;
          bVar5 = *pbVar13;
          if (((bVar5 == 0) || (bVar5 == 0x2e)) || (bVar5 == 0x40)) break;
          if ((int)uVar12 < iVar7) {
            bVar4 = FUN_1425038f0();
            bVar5 = 0x5f;
            if ((bVar4 & 0xfe) != 0x2c) {
              bVar5 = bVar4;
            }
            pcVar11[uVar12] = bVar5;
          }
          pbVar13 = pbVar13 + 1;
        }
        iVar9 = iVar9 + (int)uVar12;
      }
    }
    lVar24 = 8;
    do {
      pcVar11 = *(char **)("i-default" + lVar24 + 8);
      sVar21 = strlen(pcVar11);
      if ((iVar9 == (int)sVar21) &&
         (iVar10 = strncmp(local_280,pcVar11,(longlong)(int)sVar21), param_2 = local_270,
         iVar7 = local_274, iVar10 == 0)) {
        uVar8 = local_284;
        pcVar11 = local_250;
        if ((iVar9 != 0) || (iVar9 = 0, local_240 == (byte *)0x0)) {
          pcVar2 = *(char **)((longlong)&PTR_s_art_LOJBAN_14996b5c0 + lVar24);
          cVar3 = *pcVar2;
          pcVar22 = pcVar2;
          if (cVar3 == '\0') goto LAB_1424ea03c;
          lVar18 = 1;
          lVar24 = 0;
          goto LAB_1424ea010;
        }
        break;
      }
      lVar24 = lVar24 + 0x10;
      param_2 = local_270;
      pcVar11 = local_250;
      uVar8 = local_284;
      iVar7 = local_274;
    } while (lVar24 != 0xa8);
  }
  goto LAB_1424e9e75;
  while( true ) {
    local_280[lVar18 + -1] = cVar3;
    cVar3 = pcVar2[lVar18];
    lVar24 = lVar24 + -1;
    lVar18 = lVar18 + 1;
    if (cVar3 == '\0') break;
LAB_1424ea010:
    if (local_288 + (int)lVar24 < 1) {
      sVar21 = strlen(pcVar2 + -lVar24);
      iVar9 = (int)sVar21 - (int)lVar24;
      pcVar11 = local_250;
      uVar8 = local_284;
      goto LAB_1424e9e75;
    }
  }
  pcVar22 = pcVar2 + -lVar24;
LAB_1424ea03c:
  iVar9 = (int)pcVar22 - (int)pcVar2;
LAB_1424e9e75:
  if (((((uVar8 & 2) == 0) && (local_240 != (byte *)0x0)) && (pcVar23 != (char *)0x0)) &&
     ((pcVar11 == (char *)0x0 || (pcVar23 < pcVar11)))) {
    if (iVar9 < local_288) {
      local_280[iVar9] = '@';
    }
    pcVar11 = (char *)0x0;
    if (iVar9 + 1 < local_288) {
      pcVar11 = local_280 + (longlong)iVar9 + 1;
    }
    local_2a0 = 1;
    local_2a8 = 0;
    local_2b0 = 0;
    local_2b8 = (int *)0x0;
    local_298 = param_5;
    iVar10 = FUN_1424e7040(local_240 + 1,0x40,pcVar11);
    iVar9 = iVar10 + iVar9 + 1;
  }
  if (((local_280 == local_198) && (param_2 != (char *)0x0)) && (*param_5 < 1)) {
    iVar10 = iVar7;
    if (iVar9 < iVar7) {
      iVar10 = iVar9;
    }
    strncpy(param_2,local_198,(longlong)iVar10);
  }
  FUN_142504d00(param_2,iVar7,iVar9,param_5);
LAB_1424e9f42:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_2d8);
}



// FUNCTION 1424ea1d0 FUN_1424ea1d0 body=26 status=ok
// SIG undefined FUN_1424ea1d0(void)

void FUN_1424ea1d0(void)

{
  FUN_1424e91e0();
  return;
}



// FUNCTION 1424ea1f0 FUN_1424ea1f0 body=26 status=ok
// SIG undefined FUN_1424ea1f0(void)

void FUN_1424ea1f0(void)

{
  FUN_1424e91e0();
  return;
}



// FUNCTION 1424ea210 FUN_1424ea210 body=272 status=ok
// SIG undefined FUN_1424ea210(void)

void FUN_1424ea210(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined1 auStack_58 [40];
  int local_30;
  char local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  if ((param_1 == 0) && (param_1 = FUN_1424a3ae0(), param_1 == 0)) {
    param_1 = FUN_1424a3ae0(0);
  }
  uVar1 = FUN_1424e8190(param_1,local_2c,0xc,0);
  FUN_142504d00(local_2c,0xc,uVar1,&local_30);
  if (local_30 < 1) {
    pcVar3 = "aa";
    ppuVar4 = &PTR_DAT_149969258;
    do {
      iVar2 = strcmp(local_2c,pcVar3);
      if (iVar2 == 0) goto LAB_1424ea281;
      pcVar3 = *ppuVar4;
      ppuVar4 = ppuVar4 + 1;
    } while (pcVar3 != (char *)0x0);
    pcVar3 = *ppuVar4;
    if (pcVar3 != (char *)0x0) {
      do {
        iVar2 = strcmp(local_2c,pcVar3);
        if (iVar2 == 0) break;
        pcVar3 = ppuVar4[1];
        ppuVar4 = ppuVar4 + 1;
      } while (pcVar3 != (char *)0x0);
    }
  }
LAB_1424ea281:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424ea330 FUN_1424ea330 body=433 status=ok
// SIG undefined FUN_1424ea330(void)

void FUN_1424ea330(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  undefined1 auStack_1f8 [32];
  int *local_1d8;
  int local_1cc;
  char local_1c8 [160];
  undefined1 local_128 [96];
  undefined1 local_c8 [160];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1cc = 0;
  if ((((param_1 == (char *)0x0) || (sVar4 = strlen(param_1), sVar4 < 2)) ||
      (iVar1 = FUN_14258d6b0(param_1,&local_1cc), 0 < local_1cc)) || (iVar1 != 0))
  goto LAB_1424ea4d1;
  uVar2 = FUN_1424e8190(param_1,local_c8,0x9d,0);
  FUN_142504d00(local_c8,0x9d,uVar2,&local_1cc);
  if ((0 < local_1cc) || (local_1cc == -0x7c)) goto LAB_1424ea4d1;
  pcVar5 = strchr(param_1,0x40);
  if (pcVar5 != (char *)0x0) {
    local_1d8 = &local_1cc;
    uVar3 = FUN_1424e74e0(param_1,"collation",local_128,0x5f);
    if ((local_1cc < 1) && (0 < (int)uVar3)) {
      local_128[uVar3] = 0;
      local_1d8 = &local_1cc;
      uVar3 = FUN_1424e91e0(param_1,local_1c8,0x9c,2);
      if ((0 < (int)uVar3) && (local_1cc < 1)) {
        local_1c8[uVar3] = '\0';
        local_1d8 = &local_1cc;
        uVar3 = FUN_1424e78e0("collation",local_128,local_1c8,0x9c - uVar3);
        if ((local_1cc < 1) && (0 < (int)uVar3)) {
          local_1c8[uVar3] = '\0';
          param_1 = local_1c8;
          goto LAB_1424ea4ca;
        }
      }
    }
    local_1cc = 0;
  }
LAB_1424ea4ca:
  FUN_14258d950(local_c8,param_1,&local_1cc);
LAB_1424ea4d1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 1424ea4f0 thunk_FUN_14258d380 body=5 status=ok
// SIG undefined thunk_FUN_14258d380(void)

void thunk_FUN_14258d380(uint param_1,void *param_2,int param_3,int *param_4)

{
  short sVar1;
  WCHAR WVar2;
  char *_Str;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  uint *puVar6;
  size_t sVar7;
  size_t sVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined **ppuVar12;
  uint *puVar13;
  char *_Str_00;
  uint uVar14;
  int iVar15;
  undefined1 auStack_168 [30];
  short sStack_14a;
  WCHAR aWStack_148 [87];
  undefined1 uStack_99;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  uVar14 = param_1 & 0x3ff;
  if (uVar14 != 0x92) {
    aWStack_148[0x50] = 0;
    aWStack_148[0x51] = L'\0';
    aWStack_148[0x52] = L'\0';
    aWStack_148[0x53] = L'\0';
    aWStack_148[0x54] = L'\0';
    aWStack_148[0x48] = L'\0';
    aWStack_148[0x49] = L'\0';
    aWStack_148[0x4a] = L'\0';
    aWStack_148[0x4b] = L'\0';
    aWStack_148[0x4c] = 0;
    aWStack_148[0x4d] = L'\0';
    aWStack_148[0x4e] = L'\0';
    aWStack_148[0x4f] = L'\0';
    aWStack_148[0x40] = L'\0';
    aWStack_148[0x41] = L'\0';
    aWStack_148[0x42] = L'\0';
    aWStack_148[0x43] = L'\0';
    aWStack_148[0x44] = L'\0';
    aWStack_148[0x45] = L'\0';
    aWStack_148[0x46] = L'\0';
    aWStack_148[0x47] = L'\0';
    aWStack_148[0x38] = L'\0';
    aWStack_148[0x39] = L'\0';
    aWStack_148[0x3a] = L'\0';
    aWStack_148[0x3b] = L'\0';
    aWStack_148[0x3c] = L'\0';
    aWStack_148[0x3d] = L'\0';
    aWStack_148[0x3e] = L'\0';
    aWStack_148[0x3f] = L'\0';
    aWStack_148[0x30] = L'\0';
    aWStack_148[0x31] = L'\0';
    aWStack_148[0x32] = L'\0';
    aWStack_148[0x33] = L'\0';
    aWStack_148[0x34] = L'\0';
    aWStack_148[0x35] = L'\0';
    aWStack_148[0x36] = L'\0';
    aWStack_148[0x37] = L'\0';
    aWStack_148[0x28] = L'\0';
    aWStack_148[0x29] = L'\0';
    aWStack_148[0x2a] = L'\0';
    aWStack_148[0x2b] = L'\0';
    aWStack_148[0x2c] = L'\0';
    aWStack_148[0x2d] = L'\0';
    aWStack_148[0x2e] = L'\0';
    aWStack_148[0x2f] = L'\0';
    aWStack_148[0x20] = L'\0';
    aWStack_148[0x21] = L'\0';
    aWStack_148[0x22] = L'\0';
    aWStack_148[0x23] = L'\0';
    aWStack_148[0x24] = L'\0';
    aWStack_148[0x25] = L'\0';
    aWStack_148[0x26] = L'\0';
    aWStack_148[0x27] = L'\0';
    aWStack_148[0x18] = L'\0';
    aWStack_148[0x19] = L'\0';
    aWStack_148[0x1a] = L'\0';
    aWStack_148[0x1b] = L'\0';
    aWStack_148[0x1c] = L'\0';
    aWStack_148[0x1d] = L'\0';
    aWStack_148[0x1e] = L'\0';
    aWStack_148[0x1f] = L'\0';
    aWStack_148[0x10] = L'\0';
    aWStack_148[0x11] = L'\0';
    aWStack_148[0x12] = L'\0';
    aWStack_148[0x13] = L'\0';
    aWStack_148[0x14] = L'\0';
    aWStack_148[0x15] = L'\0';
    aWStack_148[0x16] = L'\0';
    aWStack_148[0x17] = L'\0';
    aWStack_148[8] = L'\0';
    aWStack_148[9] = L'\0';
    aWStack_148[10] = L'\0';
    aWStack_148[0xb] = L'\0';
    aWStack_148[0xc] = L'\0';
    aWStack_148[0xd] = L'\0';
    aWStack_148[0xe] = L'\0';
    aWStack_148[0xf] = L'\0';
    aWStack_148[0] = L'\0';
    aWStack_148[1] = L'\0';
    aWStack_148[2] = L'\0';
    aWStack_148[3] = L'\0';
    aWStack_148[4] = L'\0';
    aWStack_148[5] = L'\0';
    aWStack_148[6] = L'\0';
    aWStack_148[7] = L'\0';
    iVar5 = LCIDToLocaleName(param_1,aWStack_148,0x55,0x8000000);
    if (1 < iVar5) {
      lVar9 = 1;
      do {
        sVar1 = (&sStack_14a)[lVar9];
        (&uStack_99)[lVar9] = (char)sVar1;
        bVar3 = true;
        if (sVar1 == 0x2d) {
          (&uStack_99)[lVar9] = 0x5f;
        }
        else {
          if (sVar1 == 0) goto LAB_14258d5cc;
          if (sVar1 == 0x5f) {
            puVar4 = (undefined8 *)&uStack_99;
            lVar11 = lVar9 + -1;
            goto LAB_14258d5c4;
          }
        }
        if (lVar9 == 0x55) goto LAB_14258d5cc;
        WVar2 = aWStack_148[lVar9];
        *(char *)((longlong)&uStack_98 + lVar9) = (char)WVar2;
        if (WVar2 == L'-') {
          *(undefined1 *)((longlong)&uStack_98 + lVar9) = 0x5f;
        }
        else {
          if (WVar2 == L'\0') goto LAB_14258d5cc;
          if (WVar2 == L'_') goto code_r0x00014258d4e0;
        }
        lVar9 = lVar9 + 2;
      } while( true );
    }
  }
  _Str_00 = (char *)0x0;
LAB_14258d4f2:
  lVar9 = 2;
  ppuVar12 = &PTR_DAT_1499fb538;
  do {
    puVar6 = (uint *)ppuVar12[-4];
    if (uVar14 == *puVar6) {
      lVar9 = lVar9 + -2;
LAB_14258d536:
      if ((ulonglong)(uint)(&DAT_1499fb510)[lVar9 * 4] == 0) goto LAB_14258d561;
      uVar10 = 0;
      puVar13 = puVar6;
      goto LAB_14258d550;
    }
    puVar6 = (uint *)ppuVar12[-2];
    if (uVar14 == *puVar6) {
      lVar9 = lVar9 + -1;
      goto LAB_14258d536;
    }
    puVar6 = (uint *)*ppuVar12;
    if (uVar14 == *puVar6) goto LAB_14258d536;
    lVar9 = lVar9 + 3;
    ppuVar12 = ppuVar12 + 6;
  } while (lVar9 != 0x8f);
LAB_14258d59a:
  if (_Str_00 == (char *)0x0) {
    iVar5 = 1;
  }
  else {
LAB_14258d63d:
    sVar8 = strlen(_Str_00);
    iVar15 = (int)sVar8;
    iVar5 = param_3;
    if (iVar15 < param_3) {
      iVar5 = iVar15;
    }
    memcpy(param_2,_Str_00,(longlong)iVar5);
    if (iVar15 < param_3) {
      *(undefined1 *)((longlong)param_2 + (longlong)iVar15) = 0;
      iVar5 = 0;
      if (*param_4 != -0x7c) goto LAB_14258d683;
    }
    else {
      iVar5 = 0xf;
      if (iVar15 == param_3) {
        iVar5 = -0x7c;
      }
    }
  }
  *param_4 = iVar5;
LAB_14258d683:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_40 ^ (ulonglong)auStack_168);
code_r0x00014258d4e0:
  puVar4 = &uStack_98;
  lVar11 = lVar9;
LAB_14258d5c4:
  *(undefined1 *)((longlong)puVar4 + lVar9) = 0;
  bVar3 = false;
  iVar5 = (int)lVar11;
LAB_14258d5cc:
  if (2 < iVar5) {
    if ((((char)uStack_98 != 'q') || (uStack_98._1_1_ != 'u')) || (uStack_98._2_1_ != 'z')) {
      if ((((char)uStack_98 != 'p') || (uStack_98._1_1_ != 'r')) || (uStack_98._2_1_ != 's'))
      goto LAB_14258d62c;
      uStack_98 = CONCAT62(uStack_98._2_6_,0x6166);
    }
    uStack_98._0_3_ = (uint3)(ushort)uStack_98;
    strcat((char *)&uStack_98,(char *)((longlong)&uStack_98 + 3));
  }
LAB_14258d62c:
  _Str_00 = (char *)&uStack_98;
  if (bVar3) goto LAB_14258d63d;
  goto LAB_14258d4f2;
  while( true ) {
    uVar10 = uVar10 + 1;
    puVar13 = puVar13 + 4;
    if ((uint)(&DAT_1499fb510)[lVar9 * 4] == uVar10) break;
LAB_14258d550:
    if (*puVar13 == param_1) goto LAB_14258d563;
  }
LAB_14258d561:
  uVar10 = 0;
LAB_14258d563:
  _Str = *(char **)(puVar6 + uVar10 * 4 + 2);
  if (_Str == (char *)0x0) goto LAB_14258d59a;
  if (_Str_00 != (char *)0x0) {
    sVar8 = strlen(_Str);
    sVar7 = strlen(_Str_00);
    if (sVar8 <= sVar7) goto LAB_14258d63d;
  }
  _Str_00 = _Str;
  goto LAB_14258d63d;
}



// FUNCTION 1424ea500 FUN_1424ea500 body=8 status=ok
// SIG undefined FUN_1424ea500(void)

undefined ** FUN_1424ea500(void)

{
  return &PTR_DAT_149969250;
}



// FUNCTION 1424ea510 FUN_1424ea510 body=52 status=ok
// SIG undefined FUN_1424ea510(void)

longlong FUN_1424ea510(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_14258dc70();
  if ((lVar2 == 0) && (cVar1 = FUN_1425058f0(param_1,0xffffffff), cVar1 != '\0')) {
    return param_1;
  }
  return lVar2;
}



// FUNCTION 1424ea550 FUN_1424ea550 body=58 status=ok
// SIG undefined FUN_1424ea550(void)

longlong FUN_1424ea550(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_14258f450(param_1,param_2,0,0);
  if ((lVar2 == 0) && (cVar1 = FUN_142505950(param_2,0xffffffff), cVar1 != '\0')) {
    return param_2;
  }
  return lVar2;
}



// FUNCTION 1424ea590 FUN_1424ea590 body=83 status=ok
// SIG undefined FUN_1424ea590(void)

char * FUN_1424ea590(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = (char *)FUN_14258f410();
  if (pcVar3 == (char *)0x0) {
    cVar2 = *param_1;
    pcVar1 = param_1;
    while (pcVar3 = param_1, cVar2 != '\0') {
      cVar2 = FUN_1425038e0();
      if ((cVar2 == '\0') && (9 < (byte)(*pcVar1 - 0x30U))) {
        return (char *)0x0;
      }
      cVar2 = pcVar1[1];
      pcVar1 = pcVar1 + 1;
    }
  }
  return pcVar3;
}



// FUNCTION 1424ea5f0 FUN_1424ea5f0 body=137 status=ok
// SIG undefined FUN_1424ea5f0(void)

byte * FUN_1424ea5f0(undefined8 param_1,byte *param_2)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar4 = 0;
  pbVar2 = (byte *)FUN_14258f620(param_1,param_2,0,0);
  pbVar5 = param_2;
  if (pbVar2 != (byte *)0x0) {
    return pbVar2;
  }
  do {
    uVar3 = *pbVar5 - 0x2d;
    if ((uVar3 < 0x33) && ((0x4000000000005U >> ((ulonglong)uVar3 & 0x3f) & 1) != 0)) {
      bVar6 = iVar4 == 0;
      iVar4 = 0;
      if (bVar6) {
        return (byte *)0x0;
      }
    }
    else {
      if (*pbVar5 == 0) {
        if (iVar4 == 0) {
          return (byte *)0x0;
        }
        return param_2;
      }
      cVar1 = FUN_1425038e0();
      if ((cVar1 == '\0') && (9 < (byte)(*pbVar5 - 0x30))) {
        return (byte *)0x0;
      }
      iVar4 = iVar4 + 1;
    }
    pbVar5 = pbVar5 + 1;
  } while( true );
}



// FUNCTION 1424ea6a0 FUN_1424ea6a0 body=42 status=ok
// SIG undefined FUN_1424ea6a0(void)

void FUN_1424ea6a0(longlong param_1)

{
  FUN_1424da110(**(undefined8 **)(param_1 + 8));
  FUN_1424da110(*(undefined8 *)(param_1 + 8));
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 1424ea6d0 FUN_1424ea6d0 body=67 status=ok
// SIG undefined FUN_1424ea6d0(void)

int FUN_1424ea6d0(longlong param_1)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  char *_Str;
  
  _Str = (char *)**(undefined8 **)(param_1 + 8);
  if (*_Str == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      sVar2 = strlen(_Str);
      pcVar1 = _Str + sVar2 + 1;
      _Str = _Str + sVar2 + 1;
    } while (*pcVar1 != '\0');
  }
  return iVar3;
}



// FUNCTION 1424ea720 FUN_1424ea720 body=73 status=ok
// SIG undefined FUN_1424ea720(void)

char * FUN_1424ea720(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  size_t sVar3;
  char *_Str;
  
  lVar1 = *(longlong *)(param_1 + 8);
  _Str = *(char **)(lVar1 + 8);
  if (*_Str == '\0') {
    _Str = (char *)0x0;
    iVar2 = 0;
  }
  else {
    sVar3 = strlen(_Str);
    iVar2 = (int)sVar3;
    *(char **)(lVar1 + 8) = _Str + (iVar2 + 1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  return _Str;
}



// FUNCTION 1424ea780 FUN_1424ea780 body=332 status=ok
// SIG undefined FUN_1424ea780(void)

int FUN_1424ea780(char *param_1,char param_2,undefined1 *param_3,int param_4,char param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == '_') {
LAB_1424ea7ab:
    cVar4 = *param_1;
    if (((cVar4 != '\0') && (cVar4 != '.')) && (cVar4 != '@')) {
      if (param_5 == '\0') {
        uVar6 = 0;
        if (param_4 < 1) goto LAB_1424ea860;
      }
      else {
        uVar6 = 1;
        if (0 < param_4) {
          *param_3 = 0x5f;
        }
        if (param_4 < 2) goto LAB_1424ea860;
      }
      cVar4 = *param_1;
      do {
        cVar1 = FUN_1425038f0(cVar4);
        cVar4 = '_';
        if (cVar1 != '-') {
          cVar4 = cVar1;
        }
        param_3[uVar6] = cVar4;
LAB_1424ea860:
        do {
          cVar4 = param_1[1];
          if (((cVar4 == '\0') || (cVar4 == '.')) || (cVar4 == '@')) goto LAB_1424ea8bd;
          uVar6 = uVar6 + 1;
          param_1 = param_1 + 1;
        } while (param_4 <= (int)uVar6);
      } while( true );
    }
    if (param_2 == '@') goto LAB_1424ea7d9;
  }
  else {
    if (param_2 == '@') goto LAB_1424ea7d9;
    if (param_2 == '-') goto LAB_1424ea7ab;
  }
  param_1 = strchr(param_1,0x40);
  if (param_1 == (char *)0x0) {
    return 0;
  }
  param_1 = param_1 + 1;
LAB_1424ea7d9:
  cVar4 = *param_1;
  if (((cVar4 == '\0') || (cVar4 == '.')) || (cVar4 == '@')) {
    return 0;
  }
  if (param_5 == '\0') {
    uVar5 = 0;
    uVar6 = 0;
    if (param_4 < 1) goto LAB_1424ea8a0;
  }
  else {
    uVar5 = 1;
    if (0 < param_4) {
      *param_3 = 0x5f;
    }
    uVar6 = uVar5;
    if (param_4 < 2) goto LAB_1424ea8a0;
  }
  cVar4 = *param_1;
  uVar6 = uVar5;
  do {
    bVar2 = FUN_1425038f0(cVar4);
    bVar3 = 0x5f;
    if ((bVar2 & 0xfe) != 0x2c) {
      bVar3 = bVar2;
    }
    param_3[uVar6] = bVar3;
LAB_1424ea8a0:
    do {
      cVar4 = param_1[1];
      if (((cVar4 == '\0') || (cVar4 == '.')) || (cVar4 == '@')) {
LAB_1424ea8bd:
        return uVar6 + 1;
      }
      uVar6 = uVar6 + 1;
      param_1 = param_1 + 1;
    } while (param_4 <= (int)uVar6);
  } while( true );
}



// FUNCTION 1424ea8d0 FUN_1424ea8d0 body=74 status=ok
// SIG undefined FUN_1424ea8d0(void)

void FUN_1424ea8d0(undefined8 *param_1)

{
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x18] = 0;
  return;
}



// FUNCTION 1424ea920 FUN_1424ea920 body=77 status=ok
// SIG undefined FUN_1424ea920(void)

undefined8 * FUN_1424ea920(undefined8 *param_1)

{
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 1424ea970 FUN_1424ea970 body=121 status=ok
// SIG undefined FUN_1424ea970(void)

void FUN_1424ea970(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1424ee960();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1424da110();
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x20) != param_1 + 0x68)) {
    FUN_1424da110();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if ((*(int *)(param_1 + 0xb4) == 0x12c9b17) && (*(int *)(param_1 + 0xb8) == 0x12bb38b)) {
    FUN_1424da110(param_1);
    return;
  }
  return;
}



// FUNCTION 1424ea9f0 FUN_1424ea9f0 body=126 status=ok
// SIG undefined FUN_1424ea9f0(void)

void FUN_1424ea9f0(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1424ee960();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1424da110();
    }
    if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x20) != param_1 + 0x68)) {
      FUN_1424da110();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if ((*(int *)(param_1 + 0xb4) == 0x12c9b17) && (*(int *)(param_1 + 0xb8) == 0x12bb38b)) {
      FUN_1424da110(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1424eabe0 FUN_1424eabe0 body=167 status=ok
// SIG undefined FUN_1424eabe0(void)

void FUN_1424eabe0(longlong param_1,char *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  pcVar2 = *(char **)(param_1 + 0x20);
  iVar3 = iVar1;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)(param_1 + 0x68);
    *(char **)(param_1 + 0x20) = pcVar2;
    *(undefined1 *)(param_1 + 0x68) = 0;
    iVar3 = 0;
  }
  iVar3 = iVar3 + param_3;
  *(int *)(param_1 + 0xa8) = iVar3;
  if (0x3e < iVar3) {
    if (pcVar2 == (char *)(param_1 + 0x68)) {
      pcVar2 = (char *)FUN_1424da030(iVar3 + 1);
      *(char **)(param_1 + 0x20) = pcVar2;
      if (pcVar2 == (char *)0x0) goto LAB_1424eac76;
      strcpy(pcVar2,(char *)(param_1 + 0x68));
      pcVar2 = *(char **)(param_1 + 0x20);
    }
    else {
      pcVar2 = (char *)FUN_1424da060(pcVar2);
      if (pcVar2 == (char *)0x0) {
LAB_1424eac76:
        *param_4 = 7;
        return;
      }
      *(char **)(param_1 + 0x20) = pcVar2;
    }
  }
  strcpy(pcVar2 + iVar1,param_2);
  return;
}



// FUNCTION 1424eac90 FUN_1424eac90 body=356 status=ok
// SIG undefined FUN_1424eac90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424eac90(longlong param_1)

{
  longlong lVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c77ee80) && (FUN_144b3d300(&DAT_14c77ee80), DAT_14c77ee80 == -1)) {
    _DAT_14c77ee70 = 0;
    uRam000000014c77ee78 = 0;
    _DAT_14c77ee60 = 0;
    uRam000000014c77ee68 = 0;
    _DAT_14c77ee50 = 0;
    uRam000000014c77ee58 = 0;
    _DAT_14c77ee40 = 0;
    uRam000000014c77ee48 = 0;
    _DAT_14c77ee30 = 0;
    uRam000000014c77ee38 = 0;
    _Mtx_init_in_situ(&DAT_14c77ee30,2);
    atexit((_func_5014 *)&LAB_1424eeac0);
    _Init_thread_footer(&DAT_14c77ee80);
  }
  FUN_142501320(&DAT_14c77ee30);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  for (lVar1 = *(longlong *)(param_1 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
    *(int *)(lVar1 + 0x6c) = *(int *)(lVar1 + 0x6c) + 1;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c77ee80) && (FUN_144b3d300(&DAT_14c77ee80), DAT_14c77ee80 == -1)) {
    _DAT_14c77ee70 = 0;
    uRam000000014c77ee78 = 0;
    _DAT_14c77ee60 = 0;
    uRam000000014c77ee68 = 0;
    _DAT_14c77ee50 = 0;
    uRam000000014c77ee58 = 0;
    _DAT_14c77ee40 = 0;
    uRam000000014c77ee48 = 0;
    _DAT_14c77ee30 = 0;
    uRam000000014c77ee38 = 0;
    _Mtx_init_in_situ(&DAT_14c77ee30,2);
    atexit((_func_5014 *)&LAB_1424eeac0);
    _Init_thread_footer(&DAT_14c77ee80);
  }
  FUN_142501400(&DAT_14c77ee30);
  return;
}



// FUNCTION 1424eae00 FUN_1424eae00 body=68 status=ok
// SIG undefined FUN_1424eae00(void)

longlong FUN_1424eae00(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_3 != (int *)0x0) && (*param_3 < 1)) {
    if (param_1 == 0) {
      iVar1 = 1;
    }
    else {
      lVar2 = FUN_14258b230(param_1 + 0x28,*(undefined4 *)(param_1 + 0xac),param_2);
      if (lVar2 != 0) {
        return lVar2;
      }
      iVar1 = 0x11;
    }
    *param_3 = iVar1;
  }
  return 0;
}



// FUNCTION 1424eae50 FUN_1424eae50 body=68 status=ok
// SIG undefined FUN_1424eae50(void)

longlong FUN_1424eae50(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_3 != (int *)0x0) && (*param_3 < 1)) {
    if (param_1 == 0) {
      iVar1 = 1;
    }
    else {
      lVar2 = FUN_14258b370(param_1 + 0x28,*(undefined4 *)(param_1 + 0xac),param_2);
      if (lVar2 != 0) {
        return lVar2;
      }
      iVar1 = 0x11;
    }
    *param_3 = iVar1;
  }
  return 0;
}



// FUNCTION 1424eaea0 FUN_1424eaea0 body=68 status=ok
// SIG undefined FUN_1424eaea0(void)

longlong FUN_1424eaea0(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_3 != (int *)0x0) && (*param_3 < 1)) {
    if (param_1 == 0) {
      iVar1 = 1;
    }
    else {
      lVar2 = FUN_14258b3c0(param_1 + 0x28,*(undefined4 *)(param_1 + 0xac),param_2);
      if (lVar2 != 0) {
        return lVar2;
      }
      iVar1 = 0x11;
    }
    *param_3 = iVar1;
  }
  return 0;
}



// FUNCTION 1424eaef0 FUN_1424eaef0 body=69 status=ok
// SIG undefined FUN_1424eaef0(void)

int FUN_1424eaef0(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if ((param_2 == (int *)0x0) || (0 < *param_2)) {
    return iVar1;
  }
  if (param_1 == 0) {
    *param_2 = 1;
    return iVar1;
  }
  if ((*(uint *)(param_1 + 0xac) & 0xf0000000) == 0x70000000) {
    return (int)(*(uint *)(param_1 + 0xac) << 4) >> 4;
  }
  *param_2 = 0x11;
  return iVar1;
}



// FUNCTION 1424eaf40 FUN_1424eaf40 body=22 status=ok
// SIG undefined FUN_1424eaf40(void)

undefined8 FUN_1424eaf40(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_14258b220(*(undefined4 *)(param_1 + 0xac));
    return uVar1;
  }
  return 0xffffffff;
}



// FUNCTION 1424eaf60 FUN_1424eaf60 body=12 status=ok
// SIG undefined FUN_1424eaf60(void)

undefined8 FUN_1424eaf60(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 1424eaf70 FUN_1424eaf70 body=15 status=ok
// SIG undefined FUN_1424eaf70(void)

undefined4 FUN_1424eaf70(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0xc0);
  }
  return 0;
}



// FUNCTION 1424eaf80 FUN_1424eaf80 body=16 status=ok
// SIG undefined FUN_1424eaf80(void)

void FUN_1424eaf80(longlong param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  }
  return;
}



// FUNCTION 1424eaf90 FUN_1424eaf90 body=26 status=ok
// SIG undefined FUN_1424eaf90(void)

undefined4 FUN_1424eaf90(longlong param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc0) + -1;
    return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(param_1 + 0xbc) < iVar1);
  }
  return 0;
}



// FUNCTION 1424eafb0 FUN_1424eafb0 body=212 status=ok
// SIG undefined FUN_1424eafb0(void)

undefined8 FUN_1424eafb0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_4 == (int *)0x0) || (0 < *param_4)) goto switchD_1424eb028_caseD_a;
  if (param_1 == 0) {
    *param_4 = 1;
    goto switchD_1424eb028_caseD_a;
  }
  if (*(int *)(param_1 + 0xbc) == *(int *)(param_1 + 0xc0) + -1) {
    *param_4 = 8;
    goto switchD_1424eb028_caseD_a;
  }
  iVar3 = *(int *)(param_1 + 0xbc) + 1;
  *(int *)(param_1 + 0xbc) = iVar3;
  uVar1 = *(uint *)(param_1 + 0xac);
  switch(uVar1 >> 0x1c) {
  case 0:
  case 6:
    uVar2 = FUN_14258b230(param_1 + 0x28,uVar1,param_2);
    return uVar2;
  case 1:
  case 7:
  case 0xe:
    *param_4 = 0x11;
  default:
switchD_1424eb028_caseD_a:
    uVar2 = 0;
    break;
  case 2:
  case 4:
  case 5:
    uVar1 = FUN_14258c350(param_1 + 0x28);
    goto LAB_1424eb05c;
  case 3:
    goto LAB_1424eb06d;
  case 8:
  case 9:
    uVar1 = FUN_14258c580(param_1 + 0x28,uVar1,iVar3,param_3);
LAB_1424eb05c:
    iVar3 = *(int *)(param_1 + 0xbc);
LAB_1424eb06d:
    uVar2 = FUN_1424eb090(param_1,uVar1,iVar3,param_2,param_4);
  }
  return uVar2;
}



// FUNCTION 1424eb090 FUN_1424eb090 body=242 status=ok
// SIG undefined FUN_1424eb090(void)

longlong FUN_1424eb090(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      int *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((uint)param_2 & 0xf0000000) != 0x30000000) {
    lVar2 = FUN_14258b230(param_1 + 0x28,param_2,param_4);
    return lVar2;
  }
  lVar2 = FUN_1424ebd50(param_1,param_3,0,param_5);
  if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
    if (lVar2 == 0) {
      iVar1 = 1;
    }
    else {
      lVar3 = FUN_14258b230(lVar2 + 0x28,*(undefined4 *)(lVar2 + 0xac),param_4);
      if (lVar3 != 0) goto LAB_1424eb10f;
      iVar1 = 0x11;
    }
    *param_5 = iVar1;
  }
  lVar3 = 0;
  if (lVar2 == 0) {
    return 0;
  }
LAB_1424eb10f:
  if (*(longlong *)(lVar2 + 8) != 0) {
    FUN_1424ee960();
  }
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    FUN_1424da110();
  }
  if ((*(longlong *)(lVar2 + 0x20) != 0) && (*(longlong *)(lVar2 + 0x20) != lVar2 + 0x68)) {
    FUN_1424da110();
  }
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined4 *)(lVar2 + 0xa8) = 0;
  if ((*(int *)(lVar2 + 0xb4) == 0x12c9b17) && (*(int *)(lVar2 + 0xb8) == 0x12bb38b)) {
    FUN_1424da110(lVar2);
  }
  return lVar3;
}



// FUNCTION 1424eb190 FUN_1424eb190 body=320 status=ok
// SIG undefined FUN_1424eb190(void)

void FUN_1424eb190(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if ((param_3 != (int *)0x0) && (*param_3 < 1)) {
    if (param_1 == 0) {
      *param_3 = 1;
    }
    else if (*(int *)(param_1 + 0xbc) == *(int *)(param_1 + 0xc0) + -1) {
      *param_3 = 8;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xbc) + 1;
      *(int *)(param_1 + 0xbc) = iVar4;
      uVar2 = *(uint *)(param_1 + 0xac) >> 0x1c;
      if (uVar2 < 0xf) {
        if ((0x40c3U >> uVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
        }
        if ((0x34U >> uVar2 & 1) == 0) {
          if ((0x300U >> uVar2 & 1) == 0) goto LAB_1424eb1c2;
          uVar3 = FUN_14258c580(param_1 + 0x28);
          local_58 = *(undefined8 *)(param_1 + 8);
          uVar1 = *(undefined4 *)(param_1 + 0xbc);
          uVar5 = 0;
        }
        else {
          uVar3 = FUN_14258c350(param_1 + 0x28,*(uint *)(param_1 + 0xac),iVar4,&local_30);
          local_58 = *(undefined8 *)(param_1 + 8);
          uVar1 = *(undefined4 *)(param_1 + 0xbc);
          uVar5 = local_30;
        }
        local_48 = 0;
        local_50 = param_1;
        local_40 = param_2;
        local_38 = param_3;
        FUN_1424eb300(param_1 + 0x28,uVar3,uVar5,uVar1);
      }
    }
  }
LAB_1424eb1c2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424eb300 FUN_1424eb300 body=2603 status=ok
// SIG undefined FUN_1424eb300(void)

void FUN_1424eb300(undefined4 *param_1,uint param_2,char *param_3,int param_4,longlong param_5,
                  undefined8 *param_6,int param_7,undefined8 *param_8,int *param_9)

{
  char cVar1;
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
  int iVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  size_t sVar19;
  char *pcVar20;
  undefined8 *puVar21;
  char **_Dest;
  char *pcVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  char **ppcVar27;
  longlong lVar28;
  int *piVar29;
  undefined8 *puVar30;
  char *pcVar31;
  undefined1 auStack_2a8 [32];
  int *local_288;
  undefined8 *local_280;
  int local_278;
  undefined8 *local_270;
  int *local_268;
  char *local_258;
  int local_24c;
  undefined8 *local_248;
  char *local_240;
  char **local_238;
  int local_22c;
  undefined8 local_228;
  uint local_21c;
  char *local_218 [32];
  char local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (0 < *param_9) goto LAB_1424eb33d;
  if (param_6 == (undefined8 *)0x0) {
    *param_9 = 1;
    goto LAB_1424eb33d;
  }
  if ((param_2 & 0xf0000000) == 0x30000000) {
    local_24c = param_7;
    if (0xff < param_7) {
      *param_9 = 0x18;
      goto LAB_1424eb33d;
    }
    local_21c = 0;
    uVar18 = FUN_14258b320(param_1,param_2,&local_21c);
    if ((int)local_21c < 1) {
      *param_9 = 1;
      goto LAB_1424eb33d;
    }
    uVar26 = local_21c + 1;
    local_21c = uVar26;
    if ((char *)param_6[4] == (char *)0x0) {
      uVar25 = 0;
    }
    else {
      sVar19 = strlen((char *)param_6[4]);
      uVar25 = (int)sVar19 + 1;
    }
    if ((int)uVar25 <= (int)uVar26) {
      uVar25 = uVar26;
    }
    if (uVar25 < 0xc9) {
      pcVar22 = local_118;
      uVar25 = 200;
    }
    else {
      pcVar22 = (char *)FUN_1424da030(uVar25);
      uVar26 = local_21c;
      if (pcVar22 == (char *)0x0) {
        *param_9 = 7;
        goto LAB_1424eb33d;
      }
    }
    FUN_14250ae10(uVar18,pcVar22,uVar26);
    if (*pcVar22 == '/') {
      pcVar20 = pcVar22 + 1;
      local_258 = strchr(pcVar20,0x2f);
      if (local_258 == (char *)0x0) {
        sVar19 = strlen(pcVar22);
        local_258 = pcVar22 + sVar19;
      }
      else {
        *local_258 = '\0';
        local_258 = local_258 + 1;
      }
      iVar16 = strcmp(pcVar20,"LOCALE");
      if (iVar16 == 0) {
        pcVar20 = *(char **)(param_5 + 8);
        pcVar31 = *(char **)param_6[3];
      }
      else {
        iVar16 = strcmp(pcVar20,"ICUDATA");
        pcVar31 = local_258;
        if (iVar16 == 0) {
          pcVar20 = (char *)0x0;
        }
        local_258 = strchr(local_258,0x2f);
        if (local_258 == (char *)0x0) {
          local_258 = (char *)0x0;
        }
        else {
          *local_258 = '\0';
          local_258 = local_258 + 1;
        }
      }
    }
    else {
      local_258 = strchr(pcVar22,0x2f);
      if (local_258 == (char *)0x0) {
        local_258 = (char *)0x0;
      }
      else {
        *local_258 = '\0';
        local_258 = local_258 + 1;
      }
      pcVar20 = *(char **)(param_5 + 8);
      pcVar31 = pcVar22;
    }
    local_228 = 0;
    local_22c = 0;
    local_288 = &local_22c;
    puVar21 = (undefined8 *)FUN_1424ed0f0(0,pcVar20,pcVar31,2);
    if (local_22c < 1) {
      if (local_258 == (char *)0x0) {
        local_218[0] = (char *)param_6[4];
        if (local_218[0] == (char *)0x0) {
          uVar26 = *(uint *)((longlong)puVar21 + 0xac);
          local_218[0] = (char *)0x0;
        }
        else {
          strcpy(pcVar22,local_218[0]);
          local_218[0] = pcVar22;
          uVar26 = FUN_14258c630(puVar21 + 5,*(undefined4 *)((longlong)puVar21 + 0xac),local_218,
                                 &local_228);
        }
        if (param_3 == (char *)0x0) {
          if (param_4 != -1) {
            if (((uVar26 & 0xf0000000) == 0x20000000) || ((uVar26 & 0xe0000000) == 0x40000000)) {
              uVar26 = FUN_14258c350(puVar21 + 5,uVar26,param_4,local_218);
            }
            else {
              uVar26 = FUN_14258c580(puVar21 + 5,uVar26,param_4);
            }
          }
        }
        else {
          sVar19 = strlen(param_3);
          local_21c = (int)sVar19 + 1;
          if ((int)uVar25 < (int)local_21c) {
            if (pcVar22 == local_118) {
              pcVar22 = (char *)FUN_1424da030(local_21c);
            }
            else {
              pcVar22 = (char *)FUN_1424da060(pcVar22);
            }
            if (pcVar22 == (char *)0x0) {
              FUN_1424ea9f0(puVar21);
              goto LAB_1424ebd3d;
            }
          }
          memcpy(pcVar22,param_3,(longlong)(int)local_21c);
          local_218[0] = pcVar22;
          uVar26 = FUN_14258c630(puVar21 + 5,uVar26,local_218,&local_228);
        }
        if (uVar26 == 0xffffffff) {
          *param_9 = 2;
        }
        else {
          local_278 = param_7 + 1;
          local_288 = (int *)puVar21[1];
          local_268 = param_9;
          local_270 = param_8;
          local_280 = puVar21;
          param_8 = (undefined8 *)FUN_1424eb300(puVar21 + 5,uVar26,local_228,0xffffffff);
        }
      }
      else {
        piVar29 = (int *)puVar21[1];
        local_240 = pcVar22;
        local_238 = local_218;
        sVar19 = strlen(local_258);
        _Dest = local_218;
        if ((0xff < sVar19) && (_Dest = (char **)FUN_1424da030(sVar19 + 1), _Dest == (char **)0x0))
        {
          *param_9 = 7;
          FUN_1424ea9f0(puVar21);
          goto LAB_1424eb33d;
        }
        strcpy((char *)_Dest,local_258);
        local_24c = local_24c + 1;
        ppcVar27 = local_218;
        puVar30 = param_8;
        local_248 = puVar21;
        do {
          iVar16 = piVar29[0x12];
          cVar1 = *(char *)ppcVar27;
          while( true ) {
            if ((cVar1 == '\0') || (0 < *param_9)) goto LAB_1424ebad6;
            iVar16 = FUN_14258c630(piVar29 + 10,iVar16,&local_238,&local_228);
            if (iVar16 == -1) break;
            local_268 = param_9;
            local_278 = local_24c;
            local_288 = piVar29;
            local_280 = puVar21;
            local_270 = puVar30;
            puVar21 = (undefined8 *)FUN_1424eb300(piVar29 + 10,iVar16,local_228,0xffffffff);
            if (puVar21 != (undefined8 *)0x0) {
              iVar16 = *(int *)((longlong)puVar21 + 0xac);
              piVar29 = (int *)puVar21[1];
            }
            cVar1 = *(char *)local_238;
            puVar30 = puVar21;
          }
          iVar16 = -1;
LAB_1424ebad6:
          piVar29 = *(int **)(piVar29 + 4);
          strcpy((char *)_Dest,local_258);
          pcVar22 = local_240;
          local_238 = _Dest;
        } while ((iVar16 == -1) && (ppcVar27 = _Dest, piVar29 != (int *)0x0));
        param_8 = puVar21;
        if (iVar16 == -1) {
          *param_9 = 2;
          param_8 = puVar30;
        }
        puVar21 = local_248;
        if (_Dest != local_218) {
          FUN_1424da110(_Dest);
          puVar21 = local_248;
        }
      }
    }
    else {
      *param_9 = local_22c;
    }
    if (pcVar22 != local_118) {
      FUN_1424da110(pcVar22);
    }
    if (puVar21 != param_8) {
      FUN_1424ea9f0(puVar21);
    }
    goto LAB_1424eb33d;
  }
  if (param_8 == (undefined8 *)0x0) {
    puVar21 = (undefined8 *)FUN_1424da030(200);
    if (puVar21 == (undefined8 *)0x0) {
LAB_1424ebd3d:
      *param_9 = 7;
      goto LAB_1424eb33d;
    }
    *(undefined8 *)((longlong)puVar21 + 0xb4) = 0x12bb38b012c9b17;
LAB_1424eb487:
    puVar21[4] = 0;
    *(undefined4 *)(puVar21 + 0x15) = 0;
  }
  else {
    if (param_8[1] != 0) {
      FUN_1424ee960();
    }
    if (param_8[2] != 0) {
      FUN_1424da110();
    }
    puVar21 = param_6;
    if (param_6 != param_8) {
      puVar21 = param_8;
      if (((undefined8 *)param_8[4] != (undefined8 *)0x0) &&
         ((undefined8 *)param_8[4] != param_8 + 0xd)) {
        FUN_1424da110();
      }
      goto LAB_1424eb487;
    }
  }
  puVar21[1] = param_5;
  FUN_1424eac90(param_5);
  *(undefined2 *)(puVar21 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar21 + 0xbc) = 0xffffffff;
  *puVar21 = param_3;
  puVar21[3] = param_6[3];
  if ((puVar21 == param_6) || (pcVar22 = (char *)param_6[4], pcVar22 == (char *)0x0)) {
LAB_1424eb60a:
    if (param_3 != (char *)0x0) goto LAB_1424eb613;
LAB_1424eb718:
    if (-1 < param_4) {
      iVar23 = FUN_1425039b0(local_218,param_4,10);
      iVar16 = *(int *)(puVar21 + 0x15);
      pcVar22 = (char *)puVar21[4];
      iVar24 = iVar16;
      if (pcVar22 == (char *)0x0) {
        pcVar22 = (char *)(puVar21 + 0xd);
        puVar21[4] = pcVar22;
        *(undefined1 *)(puVar21 + 0xd) = 0;
        iVar24 = 0;
      }
      iVar24 = iVar24 + iVar23;
      *(int *)(puVar21 + 0x15) = iVar24;
      if (iVar24 < 0x3f) {
LAB_1424eb89f:
        strcpy(pcVar22 + iVar16,(char *)local_218);
      }
      else {
        if (pcVar22 == (char *)(puVar21 + 0xd)) {
          pcVar22 = (char *)FUN_1424da030(iVar24 + 1);
          puVar21[4] = pcVar22;
          if (pcVar22 != (char *)0x0) {
            strcpy(pcVar22,(char *)(puVar21 + 0xd));
            pcVar22 = (char *)puVar21[4];
            goto LAB_1424eb89f;
          }
        }
        else {
          pcVar22 = (char *)FUN_1424da060(pcVar22);
          if (pcVar22 != (char *)0x0) {
            puVar21[4] = pcVar22;
            goto LAB_1424eb89f;
          }
        }
        *param_9 = 7;
      }
      if (*(char *)((longlong)*(int *)(puVar21 + 0x15) + -1 + puVar21[4]) != '/') {
        FUN_1424eabe0(puVar21,L"/Disabled",1,param_9);
      }
    }
  }
  else {
    iVar16 = *(int *)(param_6 + 0x15);
    iVar24 = *(int *)(puVar21 + 0x15);
    pcVar20 = (char *)puVar21[4];
    iVar23 = iVar24;
    if (pcVar20 == (char *)0x0) {
      pcVar20 = (char *)(puVar21 + 0xd);
      puVar21[4] = pcVar20;
      *(undefined1 *)(puVar21 + 0xd) = 0;
      iVar23 = 0;
    }
    iVar23 = iVar23 + iVar16;
    *(int *)(puVar21 + 0x15) = iVar23;
    if (iVar23 < 0x3f) {
LAB_1424eb5fc:
      strcpy(pcVar20 + iVar24,pcVar22);
      goto LAB_1424eb60a;
    }
    if (pcVar20 == (char *)(puVar21 + 0xd)) {
      pcVar20 = (char *)FUN_1424da030(iVar23 + 1);
      puVar21[4] = pcVar20;
      if (pcVar20 != (char *)0x0) {
        strcpy(pcVar20,(char *)(puVar21 + 0xd));
        pcVar20 = (char *)puVar21[4];
        goto LAB_1424eb5fc;
      }
    }
    else {
      pcVar20 = (char *)FUN_1424da060(pcVar20);
      if (pcVar20 != (char *)0x0) {
        puVar21[4] = pcVar20;
        goto LAB_1424eb5fc;
      }
    }
    *param_9 = 7;
    if (param_3 == (char *)0x0) goto LAB_1424eb718;
LAB_1424eb613:
    sVar19 = strlen(param_3);
    iVar16 = *(int *)(puVar21 + 0x15);
    pcVar22 = (char *)puVar21[4];
    iVar24 = iVar16;
    if (pcVar22 == (char *)0x0) {
      pcVar22 = (char *)(puVar21 + 0xd);
      puVar21[4] = pcVar22;
      *(undefined1 *)(puVar21 + 0xd) = 0;
      iVar24 = 0;
    }
    iVar24 = iVar24 + (int)sVar19;
    *(int *)(puVar21 + 0x15) = iVar24;
    if (iVar24 < 0x3f) {
LAB_1424eb68c:
      strcpy(pcVar22 + iVar16,param_3);
    }
    else {
      if (pcVar22 == (char *)(puVar21 + 0xd)) {
        pcVar22 = (char *)FUN_1424da030(iVar24 + 1);
        puVar21[4] = pcVar22;
        if (pcVar22 != (char *)0x0) {
          strcpy(pcVar22,(char *)(puVar21 + 0xd));
          pcVar22 = (char *)puVar21[4];
          goto LAB_1424eb68c;
        }
      }
      else {
        pcVar22 = (char *)FUN_1424da060(pcVar22);
        if (pcVar22 != (char *)0x0) {
          puVar21[4] = pcVar22;
          goto LAB_1424eb68c;
        }
      }
      *param_9 = 7;
    }
    pcVar22 = (char *)puVar21[4];
    uVar26 = *(uint *)(puVar21 + 0x15);
    lVar28 = (longlong)(int)uVar26;
    if (pcVar22[lVar28 + -1] != '/') {
      *(uint *)(puVar21 + 0x15) = uVar26 + 1;
      if ((int)uVar26 < 0x3e) {
LAB_1424eb6e6:
        (pcVar22 + lVar28)[0] = '/';
        (pcVar22 + lVar28)[1] = '\0';
      }
      else {
        if (pcVar22 == (char *)(puVar21 + 0xd)) {
          pcVar22 = (char *)FUN_1424da030((ulonglong)uVar26 + 2);
          puVar21[4] = pcVar22;
          if (pcVar22 != (char *)0x0) {
            strcpy(pcVar22,(char *)(puVar21 + 0xd));
            *(undefined2 *)(puVar21[4] + lVar28) = 0x2f;
            goto LAB_1424eb8e1;
          }
        }
        else {
          pcVar22 = (char *)FUN_1424da060(pcVar22);
          if (pcVar22 != (char *)0x0) {
            puVar21[4] = pcVar22;
            goto LAB_1424eb6e6;
          }
        }
        *param_9 = 7;
      }
    }
  }
LAB_1424eb8e1:
  if (puVar21 + 0xd == (undefined8 *)puVar21[4]) {
    lVar28 = (longlong)*(int *)(puVar21 + 0x15);
  }
  else {
    lVar28 = 0;
  }
  memset((void *)((longlong)(puVar21 + 0xd) + lVar28),0,0x40 - lVar28);
  puVar21[2] = 0;
  *(uint *)((longlong)puVar21 + 0xac) = param_2;
  uVar17 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  uVar8 = param_1[8];
  uVar9 = param_1[9];
  uVar10 = param_1[10];
  uVar11 = param_1[0xb];
  uVar12 = param_1[0xc];
  uVar13 = param_1[0xd];
  uVar14 = param_1[0xe];
  uVar15 = param_1[0xf];
  *(undefined4 *)(puVar21 + 5) = *param_1;
  *(undefined4 *)((longlong)puVar21 + 0x2c) = uVar17;
  *(undefined4 *)(puVar21 + 6) = uVar2;
  *(undefined4 *)((longlong)puVar21 + 0x34) = uVar3;
  *(undefined4 *)(puVar21 + 0xb) = uVar12;
  *(undefined4 *)((longlong)puVar21 + 0x5c) = uVar13;
  *(undefined4 *)(puVar21 + 0xc) = uVar14;
  *(undefined4 *)((longlong)puVar21 + 100) = uVar15;
  *(undefined4 *)(puVar21 + 9) = uVar8;
  *(undefined4 *)((longlong)puVar21 + 0x4c) = uVar9;
  *(undefined4 *)(puVar21 + 10) = uVar10;
  *(undefined4 *)((longlong)puVar21 + 0x54) = uVar11;
  *(undefined4 *)(puVar21 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar21 + 0x3c) = uVar5;
  *(undefined4 *)(puVar21 + 8) = uVar6;
  *(undefined4 *)((longlong)puVar21 + 0x44) = uVar7;
  uVar17 = FUN_14258b410(puVar21 + 5,param_2);
  *(undefined4 *)(puVar21 + 0x18) = uVar17;
LAB_1424eb33d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_2a8);
}



// FUNCTION 1424ebd50 FUN_1424ebd50 body=316 status=ok
// SIG undefined FUN_1424ebd50(void)

void FUN_1424ebd50(longlong param_1,int param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  int *local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    if (param_1 == 0) {
      *param_4 = 1;
    }
    else if ((param_2 < 0) || (*(int *)(param_1 + 0xc0) <= param_2)) {
      *param_4 = 2;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xac);
      uVar2 = uVar1 >> 0x1c;
      if (uVar2 < 0xf) {
        if ((0x40c3U >> uVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
        }
        if ((0x34U >> uVar2 & 1) == 0) {
          if ((0x300U >> uVar2 & 1) == 0) goto LAB_1424ebe21;
          uVar3 = FUN_14258c580(param_1 + 0x28,uVar1,param_2);
          local_68 = *(undefined8 *)(param_1 + 8);
          uVar4 = 0;
        }
        else {
          uVar3 = FUN_14258c350(param_1 + 0x28,uVar1,param_2,&local_38);
          local_68 = *(undefined8 *)(param_1 + 8);
          uVar4 = local_38;
        }
        local_58 = 0;
        local_60 = param_1;
        local_50 = param_3;
        local_48 = param_4;
        FUN_1424eb300(param_1 + 0x28,uVar3,uVar4,param_2);
      }
    }
  }
LAB_1424ebe21:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 1424ebec0 FUN_1424ebec0 body=251 status=ok
// SIG undefined FUN_1424ebec0(void)

void FUN_1424ebec0(longlong param_1,int param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  int *local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  if ((param_4 == (int *)0x0) || (0 < *param_4)) goto LAB_1424ebf48;
  if (param_1 == 0) {
    *param_4 = 1;
    goto LAB_1424ebf48;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0xc0) <= param_2)) {
    *param_4 = 2;
    goto LAB_1424ebf48;
  }
  uVar1 = *(uint *)(param_1 + 0xac);
  switch(uVar1 >> 0x1c) {
  case 0:
  case 6:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  case 1:
  case 7:
  case 0xe:
    *param_4 = 0x11;
    goto LAB_1424ebf48;
  case 2:
  case 4:
  case 5:
    uVar1 = FUN_14258c350(param_1 + 0x28,uVar1,param_2,&local_38);
    break;
  case 3:
    break;
  case 8:
  case 9:
    uVar1 = FUN_14258c580(param_1 + 0x28,uVar1,param_2);
    break;
  default:
    *param_4 = 5;
    goto LAB_1424ebf48;
  }
  local_48 = param_4;
  FUN_1424eb090(param_1,uVar1,param_2,param_3);
LAB_1424ebf48:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1424ebfe0 FUN_1424ebfe0 body=34 status=ok
// SIG undefined FUN_1424ebfe0(void)

void FUN_1424ebfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1424ed0f0(0,param_1,param_2,0,param_3);
  return;
}



// FUNCTION 1424ec010 FUN_1424ec010 body=406 status=ok
// SIG undefined FUN_1424ec010(void)

void FUN_1424ec010(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  short *psVar1;
  undefined1 auStack_118 [44];
  int local_ec;
  undefined8 local_e8;
  longlong lStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  lStack_e0 = 0;
  local_28 = 0;
  FUN_1424ec1c0(0,param_2,&local_e8);
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    psVar1 = (short *)FUN_14258b230(&uStack_c0,uStack_40._4_4_,&local_ec);
    if (psVar1 != (short *)0x0) goto LAB_1424ec0ac;
    *param_4 = 0x11;
  }
  psVar1 = (short *)0x0;
LAB_1424ec0ac:
  if (lStack_e0 != 0) {
    FUN_1424ee960();
  }
  if (local_d8 != 0) {
    FUN_1424da110();
  }
  if ((local_c8 != (undefined8 *)0x0) && (local_c8 != &uStack_80)) {
    FUN_1424da110();
  }
  local_c8 = (undefined8 *)0x0;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  if ((local_38._4_4_ == 0x12c9b17) && ((int)uStack_30 == 0x12bb38b)) {
    FUN_1424da110(&local_e8);
  }
  if (*param_4 < 1) {
    if ((((local_ec == 3) && (local_ec = 3, *psVar1 == 0x2205)) && (psVar1[1] == 0x2205)) &&
       (psVar1[2] == 0x2205)) {
      *param_4 = 2;
      local_ec = 0;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_ec;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_118);
}



// FUNCTION 1424ec1c0 FUN_1424ec1c0 body=1179 status=ok
// SIG undefined FUN_1424ec1c0(void)

undefined8 FUN_1424ec1c0(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_cc [4];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined4 local_78;
  undefined8 local_70;
  int local_64;
  undefined8 local_60;
  char *local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((param_4 != (uint *)0x0) && ((int)*param_4 < 1)) {
    if (param_1 == 0) {
      *param_4 = 1;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0xac);
      if (((uVar3 & 0xf0000000) == 0x20000000) || ((uVar3 & 0xe0000000) == 0x40000000)) {
        local_b0 = (char *)((longlong)&local_a4 + 1);
        local_a8 = 0x28;
        local_a4 = 0;
        local_78 = 0;
        local_64 = 0;
        local_60 = param_3;
        FUN_1425038b0(&local_c8,param_2);
        FUN_142503520(&local_b0,local_c8,local_c0,&local_64);
        local_4c = 0xffffffff;
        uVar9 = local_4c;
        if ((local_64 < 1) && (pcVar11 = local_b0, uVar9 = uVar3, *local_b0 != '\0')) {
          do {
            if ((((uVar3 & 0xf0000000) != 0x20000000) && ((uVar3 & 0xe0000000) != 0x40000000)) &&
               (uVar9 = local_4c, (uVar3 & 0xe0000000) != 0x80000000)) goto LAB_1424ec2a1;
            pcVar7 = strchr(pcVar11,0x2f);
            if (pcVar7 == (char *)0x0) {
              sVar5 = strlen(pcVar11);
              pcVar7 = pcVar11 + sVar5;
            }
            else {
              *pcVar7 = '\0';
              pcVar7 = pcVar7 + 1;
            }
            local_58 = pcVar11;
            uVar3 = FUN_14258c010(param_1 + 0x28,uVar3,local_cc,&local_58);
          } while ((*pcVar7 != '\0') && (pcVar11 = pcVar7, uVar3 != 0xffffffff));
          uVar9 = local_4c;
          if (*pcVar7 == '\0') {
            uVar9 = uVar3;
          }
        }
LAB_1424ec2a1:
        local_4c = uVar9;
        if ((char)local_a4 != '\0') {
          FUN_1424da110(local_b0);
        }
        puVar12 = *(undefined8 **)(param_1 + 8);
        local_c8 = param_2;
        if (local_4c == 0xffffffff) {
          local_a8 = 0x28;
          local_a4 = 0;
          local_78 = 0;
          local_58 = (char *)0x0;
          local_b8 = *(undefined8 *)(param_1 + 0x20);
          local_4c = *(int *)(param_1 + 0xa8);
          lVar6 = 0;
          local_b0 = (char *)((longlong)&local_a4 + 1);
          local_70 = param_2;
          do {
            puVar12 = (undefined8 *)puVar12[2];
            if (puVar12 == (undefined8 *)0x0) {
              *param_4 = 2;
              bVar1 = true;
LAB_1424ec648:
              uVar8 = local_60;
              bVar2 = bVar1;
              if ((char)local_a4 == '\0') goto LAB_1424ec5a5;
              goto LAB_1424ec59c;
            }
            uVar3 = 0xffffffff;
            if (*(int *)(puVar12 + 0xe) == 0) {
              uVar10 = *(undefined4 *)(puVar12 + 9);
              local_78 = 0;
              *local_b0 = '\0';
              if (0 < (int)local_4c) {
                FUN_142503520(&local_b0,local_b8,local_4c,param_4);
              }
              FUN_1425038b0(&local_e0,local_70);
              FUN_142503520(&local_b0,local_e0,local_d8,param_4);
              if (0 < (int)*param_4) {
                FUN_1424ea9f0(lVar6);
                bVar1 = false;
                goto LAB_1424ec648;
              }
              local_58 = local_b0;
              local_c8 = local_70;
              do {
                uVar3 = FUN_14258c630(puVar12 + 5,uVar10,&local_58,&local_c8);
                if ((uVar3 & 0xf0000000) == 0x30000000) {
                  if (*local_58 == '\0') goto LAB_1424ec51d;
                  lVar6 = FUN_1424eb300(puVar12 + 5,uVar3,0,0xffffffff,puVar12,param_1,0,lVar6,
                                        param_4);
                  if (lVar6 == 0) {
                    lVar6 = 0;
                    goto LAB_1424ec51d;
                  }
                  puVar12 = *(undefined8 **)(lVar6 + 8);
                  local_b8 = *(undefined8 *)(lVar6 + 0x20);
                  uVar10 = *(undefined4 *)(lVar6 + 0xac);
                  local_4c = *(int *)(lVar6 + 0xa8);
                }
              } while (*local_58 != '\0');
            }
          } while (uVar3 == 0xffffffff);
LAB_1424ec51d:
          pcVar7 = (char *)thunk_FUN_1424a3ae0();
          pcVar11 = (char *)*puVar12;
          iVar4 = strcmp(pcVar11,pcVar7);
          if (iVar4 == 0) {
            uVar9 = 0xffffff81;
          }
          else {
            iVar4 = strcmp(pcVar11,"root");
            uVar9 = iVar4 == 0 | 0xffffff80;
          }
          *param_4 = uVar9;
          uVar8 = FUN_1424eb300(puVar12 + 5,uVar3,local_70,0xffffffff,puVar12,param_1,0,local_60,
                                param_4);
          bVar1 = true;
          bVar2 = true;
          if ((char)local_a4 != '\0') {
LAB_1424ec59c:
            bVar1 = bVar2;
            FUN_1424da110(local_b0);
          }
LAB_1424ec5a5:
          param_3 = local_60;
          if ((bVar1) && (param_3 = uVar8, lVar6 != 0)) {
            if (*(longlong *)(lVar6 + 8) != 0) {
              FUN_1424ee960();
            }
            if (*(longlong *)(lVar6 + 0x10) != 0) {
              FUN_1424da110();
            }
            if ((*(longlong *)(lVar6 + 0x20) != 0) && (*(longlong *)(lVar6 + 0x20) != lVar6 + 0x68))
            {
              FUN_1424da110();
            }
            *(undefined8 *)(lVar6 + 0x20) = 0;
            *(undefined4 *)(lVar6 + 0xa8) = 0;
            if ((*(int *)(lVar6 + 0xb4) == 0x12c9b17) && (*(int *)(lVar6 + 0xb8) == 0x12bb38b)) {
              FUN_1424da110(lVar6);
            }
          }
        }
        else {
          param_3 = FUN_1424eb300(param_1 + 0x28,local_4c,param_2,0xffffffff,puVar12,param_1,0,
                                  local_60,param_4);
        }
      }
      else {
        *param_4 = 0x11;
      }
    }
  }
  return param_3;
}



// FUNCTION 1424ec660 Unwind@1424ec660 body=61 status=ok
// SIG undefined Unwind@1424ec660(void)

void Unwind_1424ec660(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x84) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}



// FUNCTION 1424ec6a0 Unwind@1424ec6a0 body=61 status=ok
// SIG undefined Unwind@1424ec6a0(void)

void Unwind_1424ec6a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x84) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}



// FUNCTION 1424ec6e0 FUN_1424ec6e0 body=417 status=ok
// SIG undefined FUN_1424ec6e0(void)

void FUN_1424ec6e0(undefined8 param_1,char *param_2,undefined8 param_3,int *param_4)

{
  undefined8 local_108;
  longlong lStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    if (param_2 == (char *)0x0) {
      *param_4 = 1;
    }
    else {
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = (undefined8 *)0x0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      lStack_100 = 0;
      local_48 = 0;
      if ((*param_2 == '\0') ||
         (param_1 = FUN_1424ec1c0(0,param_2,&local_108,param_4), *param_4 < 1)) {
        local_38 = icu_64::ResourceDataValue::vftable;
        local_30 = 0;
        local_28 = 0xffffffff;
        FUN_1424ec8c0(param_1,&local_38,param_3,param_4);
        if (lStack_100 != 0) {
          FUN_1424ee960();
        }
        if (local_f8 != 0) {
          FUN_1424da110();
        }
        if ((local_e8 != (undefined8 *)0x0) && (local_e8 != &uStack_a0)) {
          FUN_1424da110();
        }
        local_e8 = (undefined8 *)0x0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        if ((local_58._4_4_ == 0x12c9b17) && ((int)uStack_50 == 0x12bb38b)) {
          FUN_1424da110(&local_108);
        }
        thunk_FUN_1424b70d0(&local_38);
      }
      else {
        if (lStack_100 != 0) {
          FUN_1424ee960();
        }
        if (local_f8 != 0) {
          FUN_1424da110();
        }
        if ((local_e8 != (undefined8 *)0x0) && (local_e8 != &uStack_a0)) {
          FUN_1424da110();
        }
        local_e8 = (undefined8 *)0x0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        if ((local_58._4_4_ == 0x12c9b17) && ((int)uStack_50 == 0x12bb38b)) {
          FUN_1424da110(&local_108);
        }
      }
    }
  }
  return;
}



// FUNCTION 1424ec890 Unwind@1424ec890 body=37 status=ok
// SIG undefined Unwind@1424ec890(void)

void Unwind_1424ec890(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0xf0);
  return;
}



// FUNCTION 1424ec8c0 FUN_1424ec8c0 body=856 status=ok
// SIG undefined FUN_1424ec8c0(void)

void FUN_1424ec8c0(undefined8 *param_1,longlong param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_218 [32];
  int *local_1f8;
  int local_1ec;
  undefined8 local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
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
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*param_4 < 1) {
    *(undefined8 **)(param_2 + 8) = param_1 + 5;
    lVar2 = *(longlong *)(param_1[1] + 0x10);
    local_1f8 = param_4;
    if (lVar2 == 0) {
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)((longlong)param_1 + 0xac);
      (**(code **)(*param_3 + 0x10))(param_3,*param_1,param_2,1);
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x70);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)((longlong)param_1 + 0xac);
      (**(code **)(*param_3 + 0x10))(param_3,*param_1,param_2,0 < iVar1);
      if (iVar1 < 1) {
        local_118 = 0;
        local_108 = 0;
        uStack_60 = 0;
        local_78 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        uStack_b0 = 0;
        local_f8 = (undefined8 *)0x0;
        local_58 = 0;
        uStack_f0 = *(undefined8 *)(lVar2 + 0x28);
        local_e8 = *(undefined8 *)(lVar2 + 0x30);
        uStack_e0 = *(undefined8 *)(lVar2 + 0x38);
        local_d8 = *(undefined8 *)(lVar2 + 0x40);
        uStack_d0 = *(undefined8 *)(lVar2 + 0x48);
        local_c8 = *(undefined8 *)(lVar2 + 0x50);
        uStack_c0 = *(undefined8 *)(lVar2 + 0x58);
        local_b8._0_1_ = (char)*(undefined4 *)(lVar2 + 0x60);
        local_68 = (ulonglong)CONCAT11(1,(char)local_b8 == '\0');
        uStack_70 = (ulonglong)*(uint *)(lVar2 + 0x48) << 0x20;
        lStack_110 = lVar2;
        lStack_100 = lVar2;
        local_b8 = *(undefined8 *)(lVar2 + 0x60);
        uVar4 = FUN_14258b410(&uStack_f0);
        local_58 = CONCAT44(local_58._4_4_,uVar4);
        uStack_60 = CONCAT44(0xffffffff,(int)uStack_60);
        FUN_1424eac90(lVar2);
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1c8 = (undefined8 *)0x0;
        uStack_1c0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1e8 = 0;
        lStack_1e0 = 0;
        local_128 = 0;
        local_1ec = 0;
        pcVar3 = (char *)param_1[4];
        puVar5 = &local_118;
        if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) ||
           (puVar5 = (undefined8 *)FUN_1424ec1c0(puVar5,pcVar3,&local_1e8,&local_1ec), local_1ec < 1
           )) {
          FUN_1424ec8c0(puVar5,param_2,param_3,param_4);
        }
        if (lStack_1e0 != 0) {
          FUN_1424ee960();
        }
        if (local_1d8 != 0) {
          FUN_1424da110();
        }
        if ((local_1c8 != (undefined8 *)0x0) && (local_1c8 != &uStack_180)) {
          FUN_1424da110();
        }
        local_1c8 = (undefined8 *)0x0;
        uStack_140 = uStack_140 & 0xffffffff00000000;
        if ((local_138._4_4_ == 0x12c9b17) && ((int)uStack_130 == 0x12bb38b)) {
          FUN_1424da110(&local_1e8);
        }
        if (lStack_110 != 0) {
          FUN_1424ee960();
        }
        if (local_108 != 0) {
          FUN_1424da110();
        }
        if ((local_f8 != (undefined8 *)0x0) && (local_f8 != &uStack_b0)) {
          FUN_1424da110();
        }
        local_f8 = (undefined8 *)0x0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        if ((local_68._4_4_ == 0x12c9b17) && ((int)uStack_60 == 0x12bb38b)) {
          FUN_1424da110(&local_118);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_218);
}



// FUNCTION 1424ecc30 FUN_1424ecc30 body=328 status=ok
// SIG undefined FUN_1424ecc30(void)

void FUN_1424ecc30(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  int *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  int *local_58;
  undefined1 local_4c [4];
  undefined8 local_48;
  int *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = (int *)0x0;
  local_48 = param_2;
  if ((param_4 == (int *)0x0) || (0 < *param_4)) goto LAB_1424ecc69;
  if (param_1 == 0) {
    *param_4 = 1;
    goto LAB_1424ecc69;
  }
  uVar1 = *(uint *)(param_1 + 0xac);
  if (((uVar1 & 0xf0000000) != 0x20000000) && ((uVar1 & 0xe0000000) != 0x40000000)) {
    *param_4 = 0x11;
    goto LAB_1424ecc69;
  }
  lVar2 = param_1 + 0x28;
  local_34 = FUN_14258c010(lVar2,uVar1,local_4c,&local_48);
  if (local_34 == -1) {
    local_48 = param_2;
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      local_78 = param_4;
      lVar2 = FUN_1424ecd90(param_1,&local_48,&local_40,&local_34);
      if (*param_4 < 1) {
        local_78 = local_40;
        goto LAB_1424ecd0b;
      }
    }
    *param_4 = 2;
  }
  else {
    local_78 = *(int **)(param_1 + 8);
LAB_1424ecd0b:
    local_68 = 0;
    local_70 = param_1;
    local_60 = param_3;
    local_58 = param_4;
    FUN_1424eb300(lVar2,local_34,local_48,0xffffffff);
  }
LAB_1424ecc69:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 1424ecd90 FUN_1424ecd90 body=332 status=ok
// SIG undefined FUN_1424ecd90(void)

void FUN_1424ecd90(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4,uint *param_5)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  char *_Str2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar5 = *(undefined8 **)(param_1 + 8);
  local_4c = 0xffffffff;
  *param_4 = -1;
  if (puVar5 == (undefined8 *)0x0) {
LAB_1424eceb8:
    *param_5 = 2;
    goto LAB_1424eced4;
  }
  puVar6 = puVar5;
  if (*(int *)(puVar5 + 0xe) == 0) {
    iVar2 = FUN_14258c010(puVar5 + 5,*(undefined4 *)(puVar5 + 9),&local_4c,param_2);
    *param_4 = iVar2;
    if (*(char *)(param_1 + 0xb0) != '\x01') {
      iVar4 = 1;
LAB_1424ece79:
      puVar5 = puVar6;
      if (iVar2 == -1) goto LAB_1424eceb8;
      goto LAB_1424ece81;
    }
    if (iVar2 == -1) {
      iVar4 = 1;
      goto LAB_1424ecdf5;
    }
  }
  else {
    iVar4 = 0;
    if (*(char *)(param_1 + 0xb0) != '\x01') goto LAB_1424eceb8;
LAB_1424ecdf5:
    iVar2 = -1;
    do {
      puVar5 = (undefined8 *)puVar6[2];
      if (puVar5 == (undefined8 *)0x0) goto LAB_1424ece79;
      iVar1 = -1;
      if (*(int *)(puVar5 + 0xe) == 0) {
        iVar4 = iVar4 + 1;
        iVar1 = FUN_14258c010(puVar5 + 5,*(undefined4 *)(puVar5 + 9),&local_4c,param_2);
        *param_4 = iVar1;
        iVar2 = iVar1;
      }
      puVar6 = puVar5;
    } while (iVar1 == -1);
LAB_1424ece81:
    if (1 < iVar4) {
      _Str2 = (char *)thunk_FUN_1424a3ae0();
      _Str1 = (char *)*puVar5;
      iVar2 = strcmp(_Str1,_Str2);
      if (iVar2 == 0) {
        uVar3 = 0xffffff81;
      }
      else {
        iVar2 = strcmp(_Str1,"root");
        uVar3 = iVar2 == 0 | 0xffffff80;
      }
      *param_5 = uVar3;
    }
  }
  *param_3 = (longlong)puVar5;
LAB_1424eced4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424ecf00 FUN_1424ecf00 body=353 status=ok
// SIG undefined FUN_1424ecf00(void)

void FUN_1424ecf00(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  int *local_68;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [12];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_2;
  if ((param_4 == (int *)0x0) || (0 < *param_4)) goto LAB_1424ecf30;
  if (param_1 == 0) {
    *param_4 = 1;
    goto LAB_1424ecf30;
  }
  uVar1 = *(uint *)(param_1 + 0xac);
  if (((uVar1 & 0xf0000000) != 0x20000000) && ((uVar1 & 0xe0000000) != 0x40000000)) {
    *param_4 = 0x11;
    goto LAB_1424ecf30;
  }
  local_54 = 0;
  lVar2 = param_1 + 0x28;
  local_3c = FUN_14258c010(lVar2,uVar1,&local_54,&local_50);
  if (local_3c == 0xffffffff) {
    iVar4 = 2;
    local_50 = param_2;
    if ((*(char *)(param_1 + 0xb0) != '\x01') ||
       (local_68 = param_4, lVar2 = FUN_1424ecd90(param_1,&local_50,local_48,&local_3c),
       0 < *param_4)) {
LAB_1424ed017:
      *param_4 = iVar4;
      goto LAB_1424ecf30;
    }
    uVar1 = local_3c >> 0x1c;
    if (uVar1 != 6) {
      if (uVar1 == 3) goto LAB_1424ed03f;
      goto joined_r0x0001424ecfcb;
    }
  }
  else if (local_3c >> 0x1c != 6) {
    if (local_3c >> 0x1c == 3) {
LAB_1424ed03f:
      uVar3 = FUN_1424ecc30(param_1,param_2,0,param_4);
      FUN_1424eae00(uVar3,param_3,param_4);
      FUN_1424ea9f0(uVar3);
      goto LAB_1424ecf30;
    }
    uVar1 = local_3c >> 0x1c;
joined_r0x0001424ecfcb:
    iVar4 = 0x11;
    if (uVar1 != 0) goto LAB_1424ed017;
  }
  FUN_14258b230(lVar2,local_3c,param_3);
LAB_1424ecf30:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 1424ed080 FUN_1424ed080 body=35 status=ok
// SIG undefined FUN_1424ed080(void)

undefined8 FUN_1424ed080(longlong param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (*param_2 < 1)) {
    if (param_1 != 0) {
      return **(undefined8 **)(param_1 + 8);
    }
    *param_2 = 1;
    return 0;
  }
  return 0;
}



// FUNCTION 1424ed0b0 FUN_1424ed0b0 body=54 status=ok
// SIG undefined FUN_1424ed0b0(void)

undefined8 FUN_1424ed0b0(longlong param_1,int param_2,int *param_3)

{
  if ((param_3 == (int *)0x0) || (0 < *param_3)) {
    return 0;
  }
  if (param_1 != 0) {
    if (param_2 == 1) {
      return **(undefined8 **)(param_1 + 0x18);
    }
    if (param_2 == 0) {
      return **(undefined8 **)(param_1 + 8);
    }
  }
  *param_3 = 1;
  return 0;
}



// FUNCTION 1424ed0f0 FUN_1424ed0f0 body=2445 status=ok
// SIG undefined FUN_1424ed0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424ed0f0(undefined8 *param_1,undefined8 param_2,char *param_3,int param_4,int *param_5)

{
  longlong lVar1;
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
  char cVar15;
  char cVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 *puVar20;
  size_t sVar21;
  char *pcVar22;
  undefined8 *puVar23;
  undefined4 uVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auStack_1d8 [32];
  char *local_1b8;
  int *local_1b0;
  char local_19b;
  char local_19a;
  char local_199;
  undefined8 *local_198;
  int local_18c;
  undefined8 *local_188 [20];
  int local_e8;
  char local_e4;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (0 < *param_5) goto LAB_1424ed124;
  if (param_4 == 2) {
    if ((DAT_14c77ee28 == 2) || (cVar15 = FUN_142501800(&DAT_14c77ee28), cVar15 == '\0')) {
      if (0 < DAT_14c77ee2c) {
        *param_5 = DAT_14c77ee2c;
        goto LAB_1424ed124;
      }
    }
    else {
      DAT_14c77ee88 = FUN_142501e10(FUN_1424ef150,FUN_1424ef110,0,param_5);
      FUN_1424d6720(0x16,FUN_1424ef180);
      DAT_14c77ee2c = *param_5;
      FUN_1425019c0(&DAT_14c77ee28);
    }
    if (0 < *param_5) goto LAB_1424ed124;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c77ee80) && (FUN_144b3d300(&DAT_14c77ee80), DAT_14c77ee80 == -1)) {
      _DAT_14c77ee70 = 0;
      uRam000000014c77ee78 = 0;
      _DAT_14c77ee60 = 0;
      uRam000000014c77ee68 = 0;
      _DAT_14c77ee50 = 0;
      uRam000000014c77ee58 = 0;
      _DAT_14c77ee40 = 0;
      uRam000000014c77ee48 = 0;
      _DAT_14c77ee30 = 0;
      uRam000000014c77ee38 = 0;
      _Mtx_init_in_situ(&DAT_14c77ee30,2);
      atexit((_func_5014 *)&LAB_1424eeac0);
      _Init_thread_footer(&DAT_14c77ee80);
    }
    FUN_142501320(&DAT_14c77ee30);
    puVar20 = (undefined8 *)FUN_1424eec10(param_3,param_2,param_5);
    if (*param_5 < 1) {
      if (*(int *)(puVar20 + 0xe) != 0) {
        *(int *)((longlong)puVar20 + 0x6c) = *(int *)((longlong)puVar20 + 0x6c) + -1;
        goto LAB_1424ed2ef;
      }
      local_188[0] = puVar20;
      iVar19 = strcmp(param_3,"root");
      puVar23 = puVar20;
      if ((((iVar19 != 0) && (puVar20[2] == 0)) && (*(char *)(puVar20 + 0xc) == '\0')) &&
         (sVar21 = strlen(param_3), sVar21 < 0x9d)) {
        strcpy((char *)&local_e8,param_3);
        pcVar22 = strrchr((char *)&local_e8,0x5f);
        if ((((pcVar22 == (char *)0x0) ||
             (*pcVar22 = '\0', local_e4 == '\0' && local_e8 == 0x746f6f72)) ||
            (cVar15 = FUN_1424eef30(local_188,&local_e8,param_5), puVar23 = local_188[0],
            cVar15 != '\0')) &&
           ((iVar19 = strcmp((char *)*puVar23,"root"), iVar19 != 0 && (puVar23[2] == 0)))) {
          FUN_1424ef090(local_188,param_5);
        }
        puVar23 = local_188[0];
        if (0 < *param_5) goto LAB_1424ed2ef;
      }
      lVar1 = puVar23[2];
      while (lVar1 != 0) {
        *(int *)(lVar1 + 0x6c) = *(int *)(lVar1 + 0x6c) + 1;
        puVar23 = (undefined8 *)puVar23[2];
        lVar1 = puVar23[2];
      }
    }
    else {
LAB_1424ed2ef:
      puVar20 = (undefined8 *)0x0;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c77ee80) && (FUN_144b3d300(&DAT_14c77ee80), DAT_14c77ee80 == -1)) {
      _DAT_14c77ee70 = 0;
      uRam000000014c77ee78 = 0;
      _DAT_14c77ee60 = 0;
      uRam000000014c77ee68 = 0;
      _DAT_14c77ee50 = 0;
      uRam000000014c77ee58 = 0;
      _DAT_14c77ee40 = 0;
      uRam000000014c77ee48 = 0;
      _DAT_14c77ee30 = 0;
      uRam000000014c77ee38 = 0;
      _Mtx_init_in_situ(&DAT_14c77ee30,2);
      atexit((_func_5014 *)&LAB_1424eeac0);
      _Init_thread_footer(&DAT_14c77ee80);
    }
    FUN_142501400(&DAT_14c77ee30);
    iVar17 = *param_5;
  }
  else {
    FUN_1424ea1d0(param_3,local_188,0x9d,param_5);
    if ((0 < *param_5) || (*param_5 == -0x7c)) {
      *param_5 = 1;
      goto LAB_1424ed124;
    }
    local_18c = 0;
    local_198 = (undefined8 *)0x0;
    local_199 = '\0';
    local_19a = '\0';
    local_19b = '\x01';
    if ((DAT_14c77ee28 == 2) || (cVar15 = FUN_142501800(&DAT_14c77ee28), cVar15 == '\0')) {
      if (DAT_14c77ee2c < 1) goto LAB_1424ed34b;
      puVar20 = (undefined8 *)0x0;
      iVar19 = DAT_14c77ee2c;
LAB_1424ed342:
      *param_5 = iVar19;
      iVar17 = iVar19;
    }
    else {
      DAT_14c77ee88 = FUN_142501e10(FUN_1424ef150,FUN_1424ef110,0,param_5);
      FUN_1424d6720(0x16,FUN_1424ef180);
      DAT_14c77ee2c = *param_5;
      FUN_1425019c0(&DAT_14c77ee28);
LAB_1424ed34b:
      iVar17 = *param_5;
      if (iVar17 < 1) {
        strncpy((char *)&local_e8,(char *)local_188,0x9c);
        local_4c = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c77ee80) &&
           (FUN_144b3d300(&DAT_14c77ee80), DAT_14c77ee80 == -1)) {
          _DAT_14c77ee70 = 0;
          uRam000000014c77ee78 = 0;
          _DAT_14c77ee60 = 0;
          uRam000000014c77ee68 = 0;
          _DAT_14c77ee50 = 0;
          uRam000000014c77ee58 = 0;
          _DAT_14c77ee40 = 0;
          uRam000000014c77ee48 = 0;
          _DAT_14c77ee30 = 0;
          uRam000000014c77ee38 = 0;
          _Mtx_init_in_situ(&DAT_14c77ee30,2);
          atexit((_func_5014 *)&LAB_1424eeac0);
          _Init_thread_footer(&DAT_14c77ee80);
        }
        FUN_142501320(&DAT_14c77ee30);
        local_1b0 = &local_18c;
        local_1b8 = &local_199;
        puVar20 = (undefined8 *)FUN_1424eeb00(param_2,&local_e8,&local_19a,&local_19b);
        cVar15 = local_19a;
        iVar19 = 7;
        if (local_18c == 7) goto LAB_1424ed3e8;
        if (puVar20 != (undefined8 *)0x0) {
          bVar25 = true;
          local_198 = puVar20;
          if ((local_19b == '\0') || (local_19a != '\0')) goto LAB_1424ed71f;
          cVar16 = FUN_1424eef30(&local_198,&local_e8,param_5);
          bVar25 = true;
          if (cVar16 != '\0') goto LAB_1424ed71f;
          goto LAB_1424ed3ea;
        }
        bVar25 = false;
LAB_1424ed71f:
        if ((((param_4 == 0) && (puVar20 == (undefined8 *)0x0)) && (local_199 == '\0')) &&
           (cVar15 == '\0')) {
          pcVar22 = (char *)thunk_FUN_1424a3ae0();
          strcpy((char *)&local_e8,pcVar22);
          local_1b0 = &local_18c;
          local_1b8 = &local_199;
          puVar20 = (undefined8 *)FUN_1424eeb00(param_2,&local_e8,&local_19a,&local_19b);
          if (local_18c == 7) goto LAB_1424ed3e8;
          local_18c = -0x7f;
          if (puVar20 != (undefined8 *)0x0) {
            bVar25 = true;
            cVar15 = local_19a;
            local_198 = puVar20;
            if ((local_19b == '\0') || (local_19a != '\0')) goto LAB_1424ed7dd;
            cVar15 = FUN_1424eef30(&local_198,&local_e8,param_5);
            bVar25 = true;
            if (cVar15 == '\0') goto LAB_1424ed3ea;
            goto LAB_1424ed7e6;
          }
LAB_1424ed83e:
          local_e4 = '\0';
          local_e8 = 0x746f6f72;
          local_1b0 = &local_18c;
          local_1b8 = &local_199;
          puVar20 = (undefined8 *)FUN_1424eeb00(param_2,&local_e8,&local_19a,&local_19b);
          if (local_18c != 7) {
            if (puVar20 != (undefined8 *)0x0) {
              local_18c = -0x7f;
              local_198 = puVar20;
              if (local_19a == '\0') goto LAB_1424ed8a5;
              goto LAB_1424ed3ea;
            }
            iVar19 = 2;
            puVar20 = (undefined8 *)0x0;
          }
LAB_1424ed3e8:
          *param_5 = iVar19;
        }
        else {
          if (puVar20 == (undefined8 *)0x0) goto LAB_1424ed83e;
LAB_1424ed7dd:
          if (cVar15 == '\0') {
LAB_1424ed7e6:
            puVar23 = local_198;
            iVar19 = strcmp((char *)*local_198,"root");
            if (((iVar19 != 0) && (puVar23[2] == 0)) && (*(char *)(puVar20 + 0xc) == '\0')) {
              cVar15 = FUN_1424ef090(&local_198,param_5);
              if (cVar15 == '\0') goto LAB_1424ed3ea;
              if (!bVar25) {
                *(undefined4 *)(puVar20 + 0xe) = 0xffffff81;
              }
            }
LAB_1424ed8a5:
            lVar1 = local_198[2];
            puVar23 = local_198;
            while (lVar1 != 0) {
              *(int *)(lVar1 + 0x6c) = *(int *)(lVar1 + 0x6c) + 1;
              puVar23 = (undefined8 *)puVar23[2];
              lVar1 = puVar23[2];
            }
          }
        }
LAB_1424ed3ea:
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c77ee80) &&
           (FUN_144b3d300(&DAT_14c77ee80), DAT_14c77ee80 == -1)) {
          _DAT_14c77ee70 = 0;
          uRam000000014c77ee78 = 0;
          _DAT_14c77ee60 = 0;
          uRam000000014c77ee68 = 0;
          _DAT_14c77ee50 = 0;
          uRam000000014c77ee58 = 0;
          _DAT_14c77ee40 = 0;
          uRam000000014c77ee48 = 0;
          _DAT_14c77ee30 = 0;
          uRam000000014c77ee38 = 0;
          _Mtx_init_in_situ(&DAT_14c77ee30,2);
          atexit((_func_5014 *)&LAB_1424eeac0);
          _Init_thread_footer(&DAT_14c77ee80);
        }
        FUN_142501400(&DAT_14c77ee30);
        iVar17 = *param_5;
        if (iVar17 < 1) {
          iVar19 = local_18c;
          if (local_18c != 0) goto LAB_1424ed342;
          goto LAB_1424ed428;
        }
      }
      puVar20 = (undefined8 *)0x0;
    }
  }
LAB_1424ed428:
  if (iVar17 < 1) {
    if (puVar20 == (undefined8 *)0x0) {
      *param_5 = 2;
    }
    else {
      if (param_1 == (undefined8 *)0x0) {
        param_1 = (undefined8 *)FUN_1424da030(200);
        if (param_1 == (undefined8 *)0x0) {
          FUN_1424ee960(puVar20);
          *param_5 = 7;
          goto LAB_1424ed124;
        }
        bVar25 = false;
      }
      else {
        bVar25 = true;
        if (*(int *)((longlong)param_1 + 0xb4) == 0x12c9b17) {
          bVar25 = *(int *)(param_1 + 0x17) != 0x12bb38b;
        }
        if (param_1[1] != 0) {
          FUN_1424ee960();
        }
        if (param_1[2] != 0) {
          FUN_1424da110();
        }
        if (((undefined8 *)param_1[4] != (undefined8 *)0x0) &&
           ((undefined8 *)param_1[4] != param_1 + 0xd)) {
          FUN_1424da110();
        }
        param_1[4] = 0;
        *(undefined4 *)(param_1 + 0x15) = 0;
      }
      bVar26 = false;
      uVar18 = 0x12c9b17;
      if (bVar25) {
        uVar18 = 0;
      }
      uVar24 = 0x12bb38b;
      if (bVar25) {
        uVar24 = 0;
      }
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[0x18] = 0;
      *(undefined4 *)((longlong)param_1 + 0xb4) = uVar18;
      *(undefined4 *)(param_1 + 0x17) = uVar24;
      param_1[1] = puVar20;
      param_1[3] = puVar20;
      uVar18 = *(undefined4 *)((longlong)puVar20 + 0x2c);
      uVar24 = *(undefined4 *)(puVar20 + 6);
      uVar2 = *(undefined4 *)((longlong)puVar20 + 0x34);
      uVar3 = *(undefined4 *)(puVar20 + 7);
      uVar4 = *(undefined4 *)((longlong)puVar20 + 0x3c);
      uVar5 = *(undefined4 *)(puVar20 + 8);
      uVar6 = *(undefined4 *)((longlong)puVar20 + 0x44);
      uVar7 = *(undefined4 *)(puVar20 + 9);
      uVar8 = *(undefined4 *)((longlong)puVar20 + 0x4c);
      uVar9 = *(undefined4 *)(puVar20 + 10);
      uVar10 = *(undefined4 *)((longlong)puVar20 + 0x54);
      uVar11 = *(undefined4 *)(puVar20 + 0xb);
      uVar12 = *(undefined4 *)((longlong)puVar20 + 0x5c);
      uVar13 = *(undefined4 *)(puVar20 + 0xc);
      uVar14 = *(undefined4 *)((longlong)puVar20 + 100);
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar20 + 5);
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar18;
      *(undefined4 *)(param_1 + 6) = uVar24;
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
      *(undefined4 *)(param_1 + 7) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
      *(undefined4 *)(param_1 + 8) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar6;
      *(undefined4 *)(param_1 + 9) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
      *(undefined4 *)(param_1 + 10) = uVar9;
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar10;
      *(undefined4 *)(param_1 + 0xb) = uVar11;
      *(undefined4 *)((longlong)param_1 + 0x5c) = uVar12;
      *(undefined4 *)(param_1 + 0xc) = uVar13;
      *(undefined4 *)((longlong)param_1 + 100) = uVar14;
      if (param_4 != 2) {
        bVar26 = *(char *)(param_1 + 0xc) == '\0';
      }
      *(bool *)(param_1 + 0x16) = bVar26;
      *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
      *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_1 + 9);
      uVar18 = FUN_14258b410(param_1 + 5);
      *(undefined4 *)(param_1 + 0x18) = uVar18;
      *(undefined4 *)((longlong)param_1 + 0xbc) = 0xffffffff;
    }
  }
LAB_1424ed124:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1d8);
}



// FUNCTION 1424edaa0 FUN_1424edaa0 body=37 status=ok
// SIG undefined FUN_1424edaa0(void)

void FUN_1424edaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1424ed0f0(0,param_1,param_2,1,param_3);
  return;
}



// FUNCTION 1424edad0 FUN_1424edad0 body=37 status=ok
// SIG undefined FUN_1424edad0(void)

void FUN_1424edad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1424ed0f0(0,param_1,param_2,2,param_3);
  return;
}



// FUNCTION 1424edb00 FUN_1424edb00 body=477 status=ok
// SIG undefined FUN_1424edb00(void)

undefined8 * FUN_1424edb00(undefined8 param_1,int *param_2)

{
  void *_Dst;
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*param_2 < 1) {
    _Dst = (void *)FUN_1424da030(400);
    puVar1 = (undefined8 *)FUN_1424da030(0x38);
    if ((puVar1 == (undefined8 *)0x0) || (_Dst == (void *)0x0)) {
      *param_2 = 7;
      FUN_1424da110(puVar1);
      FUN_1424da110(_Dst);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1[6] = &LAB_1424ef630;
      puVar1[4] = FUN_1425649e0;
      puVar1[5] = FUN_1424ef5d0;
      puVar1[2] = FUN_1424ef4b0;
      puVar1[3] = &LAB_1424ef5b0;
      *puVar1 = 0;
      puVar1[1] = 0;
      memset(_Dst,0,400);
      lVar2 = FUN_1424ed0f0(0,param_1,"res_index",2,param_2);
      FUN_1424ecc30(lVar2,"InstalledLocales",_Dst,param_2);
      if (*param_2 < 1) {
        puVar1[1] = _Dst;
      }
      else {
        if (*(longlong *)((longlong)_Dst + 8) != 0) {
          FUN_1424ee960();
        }
        if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
          FUN_1424da110();
        }
        if ((*(longlong *)((longlong)_Dst + 0x20) != 0) &&
           (*(longlong *)((longlong)_Dst + 0x20) != (longlong)_Dst + 0x68)) {
          FUN_1424da110();
        }
        *(undefined8 *)((longlong)_Dst + 0x20) = 0;
        *(undefined4 *)((longlong)_Dst + 0xa8) = 0;
        if ((*(int *)((longlong)_Dst + 0xb4) == 0x12c9b17) &&
           (*(int *)((longlong)_Dst + 0xb8) == 0x12bb38b)) {
          FUN_1424da110(_Dst);
        }
        FUN_1424da110(_Dst);
        FUN_1424da110(puVar1);
        puVar1 = (undefined8 *)0x0;
      }
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 8) != 0) {
          FUN_1424ee960();
        }
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          FUN_1424da110();
        }
        if ((*(longlong *)(lVar2 + 0x20) != 0) && (*(longlong *)(lVar2 + 0x20) != lVar2 + 0x68)) {
          FUN_1424da110();
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined4 *)(lVar2 + 0xa8) = 0;
        if ((*(int *)(lVar2 + 0xb4) == 0x12c9b17) && (*(int *)(lVar2 + 0xb8) == 0x12bb38b)) {
          FUN_1424da110(lVar2);
        }
      }
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 1424edce0 FUN_1424edce0 body=3129 status=ok
// SIG undefined FUN_1424edce0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1424edce0(char *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5,undefined8 param_6,undefined1 *param_7,char param_8,uint *param_9)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  size_t sVar9;
  size_t sVar10;
  undefined1 uVar11;
  undefined1 auStack_1e38 [32];
  uint *local_1e18;
  wchar_t *local_1e10;
  undefined4 local_1e04;
  undefined8 local_1e00;
  char *local_1df8;
  int local_1df0;
  uint local_1dec;
  undefined8 local_1de8;
  longlong lStack_1de0;
  longlong local_1dd8;
  undefined8 uStack_1dd0;
  undefined8 *local_1dc8;
  undefined8 uStack_1dc0;
  undefined8 local_1db8;
  undefined8 uStack_1db0;
  undefined8 local_1da8;
  undefined8 uStack_1da0;
  undefined8 local_1d98;
  undefined8 uStack_1d90;
  undefined8 local_1d88;
  undefined8 uStack_1d80;
  undefined8 local_1d78;
  undefined8 uStack_1d70;
  undefined8 local_1d68;
  undefined8 uStack_1d60;
  undefined8 local_1d58;
  undefined8 uStack_1d50;
  undefined8 local_1d48;
  ulonglong uStack_1d40;
  undefined8 local_1d38;
  undefined8 uStack_1d30;
  undefined8 local_1d28;
  undefined8 local_1d18;
  longlong lStack_1d10;
  longlong local_1d08;
  undefined8 uStack_1d00;
  undefined8 *local_1cf8;
  undefined8 uStack_1cf0;
  undefined8 local_1ce8;
  undefined8 uStack_1ce0;
  undefined8 local_1cd8;
  undefined8 uStack_1cd0;
  undefined8 local_1cc8;
  undefined8 uStack_1cc0;
  undefined8 local_1cb8;
  undefined8 uStack_1cb0;
  undefined8 local_1ca8;
  undefined8 uStack_1ca0;
  undefined8 local_1c98;
  undefined8 uStack_1c90;
  undefined8 local_1c88;
  undefined8 uStack_1c80;
  undefined8 local_1c78;
  ulonglong uStack_1c70;
  undefined8 local_1c68;
  undefined8 uStack_1c60;
  undefined8 local_1c58;
  char local_1c48 [1024];
  char local_1848 [1024];
  int local_1448;
  char local_1444;
  char local_1048 [1024];
  char local_c48 [1024];
  char local_848 [1024];
  char local_448;
  undefined7 uStack_447;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e38;
  memset(&local_448,0,0x400);
  memset(local_848,0,0x400);
  memset(local_c48,0,0x400);
  memset(local_1048,0,0x400);
  memset(local_1c48,0,0x400);
  local_1dec = 0;
  if (0 < (int)*param_9) goto LAB_1424ee8dd;
  local_1e18 = &local_1dec;
  local_1e00 = param_4;
  local_1df8 = param_1;
  FUN_1424e74e0(param_6,param_5,&local_448,0x3ff);
  if (CONCAT71(uStack_447,local_448) == 0x746c7561666564) {
    local_448 = '\0';
  }
  FUN_1424ea1d0(param_6,local_1048,0x3ff,&local_1dec);
  local_1d18 = 0;
  lStack_1d10 = 0;
  local_1d08 = 0;
  uStack_1d00 = 0;
  local_1cf8 = (undefined8 *)0x0;
  uStack_1cf0 = 0;
  local_1ce8 = 0;
  uStack_1ce0 = 0;
  local_1cd8 = 0;
  uStack_1cd0 = 0;
  local_1cc8 = 0;
  uStack_1cc0 = 0;
  local_1cb8 = 0;
  uStack_1cb0 = 0;
  local_1ca8 = 0;
  uStack_1ca0 = 0;
  local_1c98 = 0;
  uStack_1c90 = 0;
  local_1c88 = 0;
  uStack_1c80 = 0;
  local_1c78 = 0;
  uStack_1c70 = 0;
  local_1c68 = 0;
  uStack_1c60 = 0;
  local_1c58 = 0;
  local_1de8 = 0;
  lStack_1de0 = 0;
  local_1dd8 = 0;
  uStack_1dd0 = 0;
  local_1dc8 = (undefined8 *)0x0;
  uStack_1dc0 = 0;
  local_1db8 = 0;
  uStack_1db0 = 0;
  local_1da8 = 0;
  uStack_1da0 = 0;
  local_1d98 = 0;
  uStack_1d90 = 0;
  local_1d88 = 0;
  uStack_1d80 = 0;
  local_1d78 = 0;
  uStack_1d70 = 0;
  local_1d68 = 0;
  uStack_1d60 = 0;
  local_1d58 = 0;
  uStack_1d50 = 0;
  local_1d48 = 0;
  uStack_1d40 = 0;
  local_1d38 = 0;
  uStack_1d30 = 0;
  local_1d28 = 0;
  strcpy(local_1848,local_1048);
  strcpy((char *)&local_1448,local_1048);
  if (param_7 != (undefined1 *)0x0) {
    uVar5 = FUN_1424edb00(param_3,&local_1dec);
    *param_7 = 1;
    if ((int)local_1dec < 1) {
      local_1e04 = param_2;
      do {
        uVar11 = 0;
        pcVar6 = (char *)FUN_142564bc0(uVar5,0,&local_1dec);
        if (pcVar6 == (char *)0x0) goto LAB_1424edf66;
        iVar3 = strcmp(pcVar6,local_1848);
      } while (iVar3 != 0);
      uVar11 = 1;
LAB_1424edf66:
      *param_7 = uVar11;
      param_2 = local_1e04;
    }
    FUN_142564960(uVar5);
  }
  if (0 < (int)local_1dec) {
    *param_9 = local_1dec;
    goto LAB_1424ee8dd;
  }
  local_1e04 = param_2;
  do {
    local_1dec = 0;
    local_1e18 = &local_1dec;
    lVar7 = FUN_1424ed0f0(0,param_3,local_1848,0);
    if ((param_7 == (undefined1 *)0x0) || ((local_1dec & 0xfffffffe) != 0xffffff80)) {
      if ((int)local_1dec < 1) {
        if ((((local_1dec == 0) &&
             (FUN_1424ecc30(lVar7,local_1e00,&local_1d18,&local_1dec), local_1dec == 0)) &&
            (pwVar8 = (wchar_t *)FUN_1424ecf00(&local_1d18,"default",&local_1df0,&local_1dec),
            (int)local_1dec < 1)) && (local_1df0 != 0)) {
          sVar10 = wcslen(pwVar8);
          FUN_14250ae10(pwVar8,local_848,sVar10 & 0xffffffff);
          strcpy(local_c48,local_1848);
          if (local_448 == '\0') {
            strcpy(&local_448,local_848);
          }
        }
      }
      else {
        *param_9 = local_1dec;
      }
    }
    else {
      *param_7 = 0;
    }
    local_1dec = 0;
    if (lVar7 == 0) {
      FUN_1424e8b00(&local_1448,local_1848,0x400);
    }
    else {
      strcpy((char *)&local_1448,(char *)**(undefined8 **)(lVar7 + 0x18));
      FUN_1424e8b00(&local_1448,local_1848,0x400);
      if (*(longlong *)(lVar7 + 8) != 0) {
        FUN_1424ee960();
      }
      if (*(longlong *)(lVar7 + 0x10) != 0) {
        FUN_1424da110();
      }
      if ((*(longlong *)(lVar7 + 0x20) != 0) && (*(longlong *)(lVar7 + 0x20) != lVar7 + 0x68)) {
        FUN_1424da110();
      }
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined4 *)(lVar7 + 0xa8) = 0;
      if ((*(int *)(lVar7 + 0xb4) == 0x12c9b17) && (*(int *)(lVar7 + 0xb8) == 0x12bb38b)) {
        FUN_1424da110(lVar7);
      }
    }
  } while ((((local_848[0] == '\0') && ((char)local_1448 != '\0')) &&
           (local_1444 != '\0' || local_1448 != 0x746f6f72)) &&
          (param_7 = (undefined1 *)0x0, (int)*param_9 < 1));
  strcpy(local_1848,local_1048);
  strcpy((char *)&local_1448,local_1048);
  do {
    local_1dec = 0;
    local_1e18 = &local_1dec;
    lVar7 = FUN_1424ed0f0(0,param_3,local_1848,0);
    if ((int)local_1dec < 1) {
      if (((local_1dec == 0) &&
          (FUN_1424ecc30(lVar7,local_1e00,&local_1d18,&local_1dec), local_1dec == 0)) &&
         (FUN_1424ecc30(&local_1d18,&local_448,&local_1de8,&local_1dec), local_1dec == 0)) {
        strcpy(local_1c48,local_1848);
        if (local_1c48[0] == '\0') {
          builtin_strncpy(local_1c48,"root",5);
        }
        local_1e10 = (wchar_t *)strlen(local_c48);
        pwVar8 = (wchar_t *)strlen(local_1c48);
        if (((pwVar8 < local_1e10) &&
            (pwVar8 = (wchar_t *)FUN_1424ecf00(&local_1d18,"default",&local_1df0,&local_1dec),
            (int)local_1dec < 1)) && (local_1df0 != 0)) {
          local_1e10 = pwVar8;
          sVar10 = wcslen(pwVar8);
          FUN_14250ae10(local_1e10,local_848,sVar10 & 0xffffffff);
          strcpy(local_c48,local_1c48);
        }
      }
    }
    else {
      *param_9 = local_1dec;
    }
    local_1dec = 0;
    strcpy((char *)&local_1448,local_1848);
    FUN_1424e8b00(&local_1448,local_1848,0x3ff);
    if (lVar7 != 0) {
      if (*(longlong *)(lVar7 + 8) != 0) {
        FUN_1424ee960();
      }
      if (*(longlong *)(lVar7 + 0x10) != 0) {
        FUN_1424da110();
      }
      if ((*(longlong *)(lVar7 + 0x20) != 0) && (*(longlong *)(lVar7 + 0x20) != lVar7 + 0x68)) {
        FUN_1424da110();
      }
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined4 *)(lVar7 + 0xa8) = 0;
      if ((*(int *)(lVar7 + 0xb4) == 0x12c9b17) && (*(int *)(lVar7 + 0xb8) == 0x12bb38b)) {
        FUN_1424da110();
      }
    }
    if ((local_1c48[0] != '\0') || ((char)local_1448 == '\0')) {
      cVar2 = local_1c48[0];
      if (local_1c48[0] != '\0') goto LAB_1424ee696;
      break;
    }
  } while ((int)*param_9 < 1);
  iVar3 = strcmp(&local_448,local_848);
  if (iVar3 == 0) {
    cVar2 = '\0';
LAB_1424ee696:
    if ((int)*param_9 < 1) {
      if (cVar2 == '\0') {
        *param_9 = 2;
      }
      else if (param_8 != '\0') {
        sVar10 = strlen(local_c48);
        sVar9 = strlen(local_1c48);
        if ((sVar10 <= sVar9) && (iVar3 = strcmp(&local_448,local_848), iVar3 == 0)) {
          local_448 = '\0';
          strcpy((char *)&local_1448,local_1c48);
          goto LAB_1424ee78d;
        }
      }
      cVar2 = local_448;
      strcpy((char *)&local_1448,local_1c48);
      if (cVar2 == '\0') {
        if (param_8 != '\0') goto LAB_1424ee78d;
        sVar10 = strlen((char *)&local_1448);
        *(undefined2 *)((longlong)&local_1448 + sVar10) = 0x40;
        strcat((char *)&local_1448,param_5);
        sVar10 = strlen((char *)&local_1448);
        *(undefined2 *)((longlong)&local_1448 + sVar10) = 0x3d;
        pcVar6 = local_848;
      }
      else {
        sVar10 = strlen((char *)&local_1448);
        *(undefined2 *)((longlong)&local_1448 + sVar10) = 0x40;
        strcat((char *)&local_1448,param_5);
        sVar10 = strlen((char *)&local_1448);
        *(undefined2 *)((longlong)&local_1448 + sVar10) = 0x3d;
        pcVar6 = &local_448;
      }
      strcat((char *)&local_1448,pcVar6);
    }
  }
  else {
    strcpy(&local_448,local_848);
    strcpy(local_1848,local_1048);
    strcpy((char *)&local_1448,local_1048);
    do {
      local_1dec = 0;
      local_1e18 = &local_1dec;
      lVar7 = FUN_1424ed0f0(0,param_3,local_1848,0);
      if ((int)local_1dec < 1) {
        if (((local_1dec == 0) &&
            (FUN_1424ecc30(lVar7,local_1e00,&local_1d18,&local_1dec), local_1dec == 0)) &&
           (FUN_1424ecc30(&local_1d18,&local_448,&local_1de8,&local_1dec), local_1dec == 0)) {
          strcpy(local_1c48,local_1848);
          if (local_1c48[0] == '\0') {
            builtin_strncpy(local_1c48,"root",5);
          }
          local_1e10 = (wchar_t *)strlen(local_c48);
          pwVar8 = (wchar_t *)strlen(local_1c48);
          if (((pwVar8 < local_1e10) &&
              (pwVar8 = (wchar_t *)FUN_1424ecf00(&local_1d18,"default",&local_1df0,&local_1dec),
              (int)local_1dec < 1)) && (local_1df0 != 0)) {
            local_1e10 = pwVar8;
            sVar10 = wcslen(pwVar8);
            FUN_14250ae10(local_1e10,local_848,sVar10 & 0xffffffff);
            strcpy(local_c48,local_1c48);
          }
        }
      }
      else {
        *param_9 = local_1dec;
      }
      local_1dec = 0;
      strcpy((char *)&local_1448,local_1848);
      FUN_1424e8b00(&local_1448,local_1848,0x3ff);
      if (lVar7 != 0) {
        if (*(longlong *)(lVar7 + 8) != 0) {
          FUN_1424ee960();
        }
        if (*(longlong *)(lVar7 + 0x10) != 0) {
          FUN_1424da110();
        }
        if ((*(longlong *)(lVar7 + 0x20) != 0) && (*(longlong *)(lVar7 + 0x20) != lVar7 + 0x68)) {
          FUN_1424da110();
        }
        *(undefined8 *)(lVar7 + 0x20) = 0;
        *(undefined4 *)(lVar7 + 0xa8) = 0;
        if ((*(int *)(lVar7 + 0xb4) == 0x12c9b17) && (*(int *)(lVar7 + 0xb8) == 0x12bb38b)) {
          FUN_1424da110();
        }
      }
      cVar2 = local_1c48[0];
      if ((local_1c48[0] != '\0') || ((char)local_1448 == '\0')) goto LAB_1424ee696;
    } while ((int)*param_9 < 1);
  }
LAB_1424ee78d:
  if (lStack_1d10 != 0) {
    FUN_1424ee960();
  }
  pcVar6 = local_1df8;
  uVar1 = local_1e04;
  if (local_1d08 != 0) {
    FUN_1424da110();
  }
  if ((local_1cf8 != (undefined8 *)0x0) && (local_1cf8 != &uStack_1cb0)) {
    FUN_1424da110();
  }
  local_1cf8 = (undefined8 *)0x0;
  uStack_1c70 = uStack_1c70 & 0xffffffff00000000;
  if ((local_1c68._4_4_ == 0x12c9b17) && ((int)uStack_1c60 == 0x12bb38b)) {
    FUN_1424da110(&local_1d18);
  }
  if (lStack_1de0 != 0) {
    FUN_1424ee960();
  }
  if (local_1dd8 != 0) {
    FUN_1424da110();
  }
  if ((local_1dc8 != (undefined8 *)0x0) && (local_1dc8 != &uStack_1d80)) {
    FUN_1424da110();
  }
  local_1dc8 = (undefined8 *)0x0;
  uStack_1d40 = uStack_1d40 & 0xffffffff00000000;
  if ((local_1d38._4_4_ == 0x12c9b17) && ((int)uStack_1d30 == 0x12bb38b)) {
    FUN_1424da110(&local_1de8);
  }
  sVar10 = strlen((char *)&local_1448);
  if ((int)*param_9 < 1) {
    iVar3 = (int)sVar10;
    uVar4 = FUN_142501310(sVar10 & 0xffffffff,uVar1);
    if (0 < (int)uVar4) {
      strncpy(pcVar6,(char *)&local_1448,(ulonglong)uVar4);
    }
    if (iVar3 == 0) {
      *param_9 = 2;
      goto LAB_1424ee89f;
    }
  }
  else {
    *pcVar6 = '\0';
LAB_1424ee89f:
    iVar3 = 0;
  }
  FUN_142504d00(pcVar6,uVar1,iVar3,param_9);
LAB_1424ee8dd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1e38);
}



// FUNCTION 1424ee960 FUN_1424ee960 body=343 status=ok
// SIG undefined FUN_1424ee960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424ee960(longlong param_1)

{
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c77ee80) && (FUN_144b3d300(&DAT_14c77ee80), DAT_14c77ee80 == -1)) {
    _DAT_14c77ee70 = 0;
    uRam000000014c77ee78 = 0;
    _DAT_14c77ee60 = 0;
    uRam000000014c77ee68 = 0;
    _DAT_14c77ee50 = 0;
    uRam000000014c77ee58 = 0;
    _DAT_14c77ee40 = 0;
    uRam000000014c77ee48 = 0;
    _DAT_14c77ee30 = 0;
    uRam000000014c77ee38 = 0;
    _Mtx_init_in_situ(&DAT_14c77ee30,2);
    atexit((_func_5014 *)&LAB_1424eeac0);
    _Init_thread_footer(&DAT_14c77ee80);
  }
  FUN_142501320(&DAT_14c77ee30);
  while (param_1 != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
    param_1 = *(longlong *)(param_1 + 0x10);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c77ee80) && (FUN_144b3d300(&DAT_14c77ee80), DAT_14c77ee80 == -1)) {
    _DAT_14c77ee70 = 0;
    uRam000000014c77ee78 = 0;
    _DAT_14c77ee60 = 0;
    uRam000000014c77ee68 = 0;
    _DAT_14c77ee50 = 0;
    uRam000000014c77ee58 = 0;
    _DAT_14c77ee40 = 0;
    uRam000000014c77ee48 = 0;
    _DAT_14c77ee30 = 0;
    uRam000000014c77ee38 = 0;
    _Mtx_init_in_situ(&DAT_14c77ee30,2);
    atexit((_func_5014 *)&LAB_1424eeac0);
    _Init_thread_footer(&DAT_14c77ee80);
  }
  FUN_142501400(&DAT_14c77ee30);
  return;
}



// FUNCTION 1424eead0 FUN_1424eead0 body=38 status=ok
// SIG undefined FUN_1424eead0(void)

undefined8 FUN_1424eead0(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424eeb00 FUN_1424eeb00 body=248 status=ok
// SIG undefined FUN_1424eeb00(void)

undefined8 *
FUN_1424eeb00(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4,undefined8 param_5,
             int *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *_Str2;
  undefined8 *puVar4;
  size_t _MaxCount;
  char *pcVar5;
  
  _Str2 = (char *)thunk_FUN_1424a3ae0();
  *param_4 = '\x01';
  while( true ) {
    puVar4 = (undefined8 *)FUN_1424eec10(param_2,param_1,param_6);
    if (0 < *param_6) {
      return (undefined8 *)0x0;
    }
    _MaxCount = strlen(param_2);
    iVar2 = strncmp(param_2,_Str2,_MaxCount);
    *(bool *)param_5 = iVar2 == 0;
    iVar2 = *(int *)(puVar4 + 0xe);
    if (iVar2 == 0) {
      strcpy(param_2,(char *)*puVar4);
    }
    else {
      *(int *)((longlong)puVar4 + 0x6c) = *(int *)((longlong)puVar4 + 0x6c) + -1;
      *param_6 = -0x80;
      puVar4 = (undefined8 *)0x0;
    }
    iVar3 = strcmp(param_2,"root");
    *(bool *)param_3 = iVar3 == 0;
    pcVar5 = strrchr(param_2,0x5f);
    if (pcVar5 == (char *)0x0) break;
    *pcVar5 = '\0';
    *param_4 = '\x01';
    cVar1 = '\x01';
    if (*param_2 == '\0') {
      builtin_strncpy(param_2,"und",4);
      cVar1 = *param_4;
    }
    if (iVar2 == 0) {
      return puVar4;
    }
    if (cVar1 == '\0') {
      return puVar4;
    }
  }
  *param_4 = '\0';
  return puVar4;
}



// FUNCTION 1424eec10 FUN_1424eec10 body=768 status=ok
// SIG undefined FUN_1424eec10(void)

void FUN_1424eec10(char *param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  char *_Str;
  longlong *plVar3;
  size_t sVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_138 [32];
  int local_118;
  int local_114;
  char *local_110;
  longlong local_108;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_38 = 0;
  local_114 = 0;
  if (0 < *param_3) goto LAB_1424eec7e;
  if (param_1 == (char *)0x0) {
    _Str = (char *)thunk_FUN_1424a3ae0();
  }
  else {
    _Str = "root";
    if (*param_1 != '\0') {
      _Str = param_1;
    }
  }
  local_110 = _Str;
  local_108 = param_2;
  plVar3 = (longlong *)FUN_142502620(DAT_14c77ee88,&local_110);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_1424da030(0x78);
    if (plVar3 == (longlong *)0x0) {
      *param_3 = 7;
      goto LAB_1424eec7e;
    }
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[0xe] = 0;
    sVar4 = strlen(_Str);
    if ((int)sVar4 < 3) {
      plVar6 = plVar3 + 0xd;
      *plVar3 = (longlong)plVar6;
LAB_1424eed92:
      strcpy((char *)plVar6,_Str);
      if (*param_3 < 1) {
        if (param_2 == 0) {
          lVar5 = plVar3[1];
        }
        else {
          lVar5 = FUN_142503b70(param_2);
          plVar3[1] = lVar5;
          if (lVar5 == 0) goto LAB_1424eedb8;
        }
        plVar6 = plVar3 + 5;
        FUN_14258b150(plVar6,lVar5,*plVar3,param_3);
        if (*param_3 < 1) {
          if (*(char *)((longlong)plVar3 + 0x62) != '\0') {
            lVar5 = FUN_1424ef470(plVar3[1],param_3);
            plVar3[4] = lVar5;
            if (*param_3 < 1) {
              lVar1 = *(longlong *)(lVar5 + 0x30);
              if (*(int *)(plVar3[6] + 0x20) == *(int *)(lVar1 + 0x20)) {
                plVar3[8] = lVar1 + (ulonglong)*(byte *)(lVar1 + 4) * 4 + 4;
                plVar3[10] = *(longlong *)(lVar5 + 0x38);
              }
              else {
                *param_3 = 3;
                *(undefined4 *)(plVar3 + 0xe) = 3;
              }
            }
            else {
              *(int *)(plVar3 + 0xe) = *param_3;
            }
          }
          if ((((*param_3 < 1) && (iVar2 = FUN_14258c4a0(plVar6,"%%ALIAS"), iVar2 != -1)) &&
              (lVar5 = FUN_14258b230(plVar6,iVar2,&local_114), lVar5 != 0)) && (0 < local_114)) {
            FUN_14250ae10(lVar5,&local_98,local_114 + 1);
            lVar5 = FUN_1424eec10(&local_98,param_2,param_3);
            plVar3[3] = lVar5;
          }
        }
        else {
          if (*param_3 == 7) goto LAB_1424eede1;
          *param_3 = -0x80;
          *(undefined4 *)(plVar3 + 0xe) = 0xffffff80;
        }
        plVar6 = (longlong *)FUN_142502620(DAT_14c77ee88,plVar3);
        if (plVar6 == (longlong *)0x0) {
          local_118 = 0;
          FUN_142502aa0(DAT_14c77ee88,plVar3,plVar3,&local_118);
          if (0 < local_118) {
            *param_3 = local_118;
            FUN_1424ef400(plVar3);
            goto LAB_1424eec7e;
          }
        }
        else {
          FUN_1424ef400(plVar3);
          plVar3 = plVar6;
        }
        goto LAB_1424eecf0;
      }
    }
    else {
      plVar6 = (longlong *)FUN_1424da030((longlong)((int)sVar4 + 1));
      *plVar3 = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) goto LAB_1424eed92;
LAB_1424eedb8:
      *param_3 = 7;
    }
LAB_1424eede1:
    FUN_1424da110(plVar3);
  }
  else {
LAB_1424eecf0:
    do {
      plVar6 = plVar3;
      plVar3 = (longlong *)plVar6[3];
    } while ((longlong *)plVar6[3] != (longlong *)0x0);
    *(int *)((longlong)plVar6 + 0x6c) = *(int *)((longlong)plVar6 + 0x6c) + 1;
    if (((int)plVar6[0xe] != 0) && (*param_3 < 1)) {
      *param_3 = (int)plVar6[0xe];
    }
  }
LAB_1424eec7e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_138);
}



// FUNCTION 1424eef30 FUN_1424eef30 body=331 status=ok
// SIG undefined FUN_1424eef30(void)

void FUN_1424eef30(longlong *param_1,char *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_3 < 1) && (lVar2 = *param_1, *(longlong *)(lVar2 + 0x10) == 0)) {
    do {
      if ((*(char *)(lVar2 + 0x60) != '\0') ||
         (iVar1 = FUN_14258c4a0(lVar2 + 0x28,"%%ParentIsRoot"), iVar1 != -1)) break;
      iVar1 = FUN_14258c4a0(*param_1 + 0x28,"%%Parent");
      if (iVar1 != -1) {
        local_4c = 0;
        lVar2 = FUN_14258b230(*param_1 + 0x28,iVar1,&local_4c);
        if (((lVar2 != 0) && (0 < local_4c)) && (local_4c < 0x9d)) {
          FUN_14250ae10(lVar2,param_2,local_4c + 1);
          iVar1 = strcmp(param_2,"root");
          if (iVar1 == 0) break;
        }
      }
      local_4c = 0;
      lVar2 = FUN_1424eec10(param_2,*(undefined8 *)(*param_1 + 8),&local_4c);
      if (0 < local_4c) {
        *param_3 = local_4c;
        break;
      }
      *(longlong *)(*param_1 + 0x10) = lVar2;
      *param_1 = lVar2;
      pcVar3 = strrchr(param_2,0x5f);
      if (pcVar3 == (char *)0x0) break;
      *pcVar3 = '\0';
      lVar2 = *param_1;
    } while (*(longlong *)(lVar2 + 0x10) == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424ef090 FUN_1424ef090 body=108 status=ok
// SIG undefined FUN_1424ef090(void)

void FUN_1424ef090(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 < 1) {
    local_1c = 0;
    lVar1 = FUN_1424eec10(&DAT_14a418301,*(undefined8 *)(*param_1 + 8),&local_1c);
    if (local_1c < 1) {
      *(longlong *)(*param_1 + 0x10) = lVar1;
      *param_1 = lVar1;
    }
    else {
      *param_2 = local_1c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424ef110 FUN_1424ef110 body=62 status=ok
// SIG undefined FUN_1424ef110(void)

bool FUN_1424ef110(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  cVar3 = FUN_142503270(*param_1,*param_2);
  if (cVar3 == '\0') {
    bVar4 = false;
  }
  else {
    cVar3 = FUN_142503270(uVar1,uVar2);
    bVar4 = cVar3 != '\0';
  }
  return bVar4;
}



// FUNCTION 1424ef150 FUN_1424ef150 body=46 status=ok
// SIG undefined FUN_1424ef150(void)

int FUN_1424ef150(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1[1];
  iVar2 = FUN_1425031c0(*param_1);
  iVar3 = FUN_1425031c0(uVar1);
  return iVar3 * 0x25 + iVar2;
}



// FUNCTION 1424ef180 FUN_1424ef180 body=609 status=ok
// SIG undefined FUN_1424ef180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424ef180(void)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c77ee88 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c77ee80) {
      FUN_144b3d300(&DAT_14c77ee80);
      if (DAT_14c77ee80 == -1) {
        _DAT_14c77ee70 = 0;
        uRam000000014c77ee78 = 0;
        _DAT_14c77ee60 = 0;
        uRam000000014c77ee68 = 0;
        _DAT_14c77ee50 = 0;
        uRam000000014c77ee58 = 0;
        _DAT_14c77ee40 = 0;
        uRam000000014c77ee48 = 0;
        _DAT_14c77ee30 = 0;
        uRam000000014c77ee38 = 0;
        _Mtx_init_in_situ(&DAT_14c77ee30,2);
        atexit((_func_5014 *)&LAB_1424eeac0);
        _Init_thread_footer(&DAT_14c77ee80);
      }
    }
    FUN_142501320(&DAT_14c77ee30);
    if (DAT_14c77ee88 != 0) {
      do {
        local_24 = 0xffffffff;
        lVar4 = FUN_1425022e0(DAT_14c77ee88,&local_24);
        if (lVar4 == 0) break;
        bVar3 = false;
        do {
          plVar2 = *(longlong **)(lVar4 + 8);
          if (*(int *)((longlong)plVar2 + 0x6c) == 0) {
            FUN_142503000(DAT_14c77ee88,lVar4);
            FUN_14258b1f0(plVar2 + 5);
            if (((longlong *)*plVar2 != (longlong *)0x0) && ((longlong *)*plVar2 != plVar2 + 0xd)) {
              FUN_1424da110();
            }
            if (plVar2[1] != 0) {
              FUN_1424da110();
            }
            if (plVar2[4] != 0) {
              piVar1 = (int *)(plVar2[4] + 0x6c);
              *piVar1 = *piVar1 + -1;
            }
            lVar4 = plVar2[3];
            if (plVar2[3] != 0) {
              do {
                lVar5 = lVar4;
                lVar4 = *(longlong *)(lVar5 + 0x18);
              } while (lVar4 != 0);
              piVar1 = (int *)(lVar5 + 0x6c);
              *piVar1 = *piVar1 + -1;
            }
            FUN_1424da110(plVar2);
            bVar3 = true;
          }
          lVar4 = FUN_1425022e0(DAT_14c77ee88,&local_24);
        } while (lVar4 != 0);
      } while (bVar3);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c77ee80) {
      FUN_144b3d300(&DAT_14c77ee80);
      if (DAT_14c77ee80 == -1) {
        _DAT_14c77ee70 = 0;
        uRam000000014c77ee78 = 0;
        _DAT_14c77ee60 = 0;
        uRam000000014c77ee68 = 0;
        _DAT_14c77ee50 = 0;
        uRam000000014c77ee58 = 0;
        _DAT_14c77ee40 = 0;
        uRam000000014c77ee48 = 0;
        _DAT_14c77ee30 = 0;
        uRam000000014c77ee38 = 0;
        _Mtx_init_in_situ(&DAT_14c77ee30,2);
        atexit((_func_5014 *)&LAB_1424eeac0);
        _Init_thread_footer(&DAT_14c77ee80);
      }
    }
    FUN_142501400(&DAT_14c77ee30);
    FUN_142502220(DAT_14c77ee88);
    DAT_14c77ee88 = 0;
  }
  LOCK();
  DAT_14c77ee28 = 0;
  UNLOCK();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424ef400 FUN_1424ef400 body=108 status=ok
// SIG undefined FUN_1424ef400(void)

void FUN_1424ef400(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14258b1f0(param_1 + 5);
  if (((longlong *)*param_1 != (longlong *)0x0) && ((longlong *)*param_1 != param_1 + 0xd)) {
    FUN_1424da110();
  }
  if (param_1[1] != 0) {
    FUN_1424da110();
  }
  if (param_1[4] != 0) {
    piVar1 = (int *)(param_1[4] + 0x6c);
    *piVar1 = *piVar1 + -1;
  }
  lVar2 = param_1[3];
  if (param_1[3] != 0) {
    do {
      lVar3 = lVar2;
      lVar2 = *(longlong *)(lVar3 + 0x18);
    } while (lVar2 != 0);
    piVar1 = (int *)(lVar3 + 0x6c);
    *piVar1 = *piVar1 + -1;
  }
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 1424ef470 FUN_1424ef470 body=62 status=ok
// SIG undefined FUN_1424ef470(void)

void FUN_1424ef470(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1424eec10(&DAT_14996cad8,param_1,param_2);
  if ((*param_2 < 1) &&
     (((lVar1 == 0 || (*(int *)(lVar1 + 0x70) != 0)) || (*(char *)(lVar1 + 0x61) == '\0')))) {
    *param_2 = 3;
  }
  return;
}



// FUNCTION 1424ef4b0 FUN_1424ef4b0 body=256 status=ok
// SIG undefined FUN_1424ef4b0(void)

void FUN_1424ef4b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar1 + 0xd0) != 0) {
    FUN_1424ee960();
  }
  if (*(longlong *)(lVar1 + 0xd8) != 0) {
    FUN_1424da110();
  }
  if ((*(longlong *)(lVar1 + 0xe8) != 0) && (*(longlong *)(lVar1 + 0xe8) != lVar1 + 0x130)) {
    FUN_1424da110();
  }
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined4 *)(lVar1 + 0x170) = 0;
  if ((*(int *)(lVar1 + 0x17c) == 0x12c9b17) && (*(int *)(lVar1 + 0x180) == 0x12bb38b)) {
    FUN_1424da110(lVar1 + 200);
  }
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_1424ee960();
  }
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    FUN_1424da110();
  }
  if ((*(longlong *)(lVar1 + 0x20) != 0) && (*(longlong *)(lVar1 + 0x20) != lVar1 + 0x68)) {
    FUN_1424da110();
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0xa8) = 0;
  if ((*(int *)(lVar1 + 0xb4) == 0x12c9b17) && (*(int *)(lVar1 + 0xb8) == 0x12bb38b)) {
    FUN_1424da110(lVar1);
  }
  FUN_1424da110(lVar1);
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 1424ef5d0 FUN_1424ef5d0 body=90 status=ok
// SIG undefined FUN_1424ef5d0(void)

char * FUN_1424ef5d0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  char *_Str;
  size_t sVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 0xc0) + -1 <= *(int *)(lVar1 + 0xbc))) ||
     (puVar3 = (undefined8 *)FUN_1424eb190(lVar1,lVar1 + 200), puVar3 == (undefined8 *)0x0)) {
    _Str = (char *)0x0;
    uVar2 = 0;
  }
  else {
    _Str = (char *)*puVar3;
    sVar4 = strlen(_Str);
    uVar2 = (undefined4)sVar4;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar2;
  }
  return _Str;
}



// FUNCTION 1424ef650 FUN_1424ef650 body=121 status=ok
// SIG undefined FUN_1424ef650(void)

void FUN_1424ef650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  local_30 = &local_res20;
  puVar1 = (ulonglong *)FUN_144737586();
  local_48 = 0;
  local_40 = &local_res20;
  __stdio_common_vsprintf(*puVar1 | 1,param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 1424ef6e0 png_set_sig_bytes body=45 status=ok
// SIG undefined png_set_sig_bytes(void)

void png_set_sig_bytes(longlong param_1,int param_2)

{
  code *pcVar1;
  
                    /* 0x24ef6e0  810  png_set_sig_bytes */
  if (param_1 != 0) {
    if (8 < param_2) {
      png_error(param_1,"Too many bytes for PNG signature");
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_2 < 1) {
      param_2 = 0;
    }
    *(char *)(param_1 + 0x264) = (char)param_2;
  }
  return;
}



// FUNCTION 1424ef710 png_sig_cmp body=73 status=ok
// SIG undefined png_sig_cmp(void)

int png_sig_cmp(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  size_t _Size;
  
                    /* 0x24ef710  826  png_sig_cmp */
  uVar2 = 8;
  if (((8 < param_3) || (uVar2 = param_3, param_3 != 0)) && (param_2 < 8)) {
    _Size = 8 - param_2;
    if (uVar2 + param_2 < 9) {
      _Size = uVar2;
    }
    iVar1 = memcmp((void *)(param_1 + param_2),&DAT_14996efa0 + param_2,_Size);
    return iVar1;
  }
  return -1;
}



// FUNCTION 1424ef760 FUN_1424ef760 body=101 status=ok
// SIG undefined FUN_1424ef760(void)

undefined8 FUN_1424ef760(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    if (param_2 <= (uint)(0xffffffff / (ulonglong)param_3)) {
      uVar1 = *(uint *)(param_1 + 0x158);
      *(uint *)(param_1 + 0x158) = uVar1 | 0x100000;
      uVar2 = png_malloc(param_1,(ulonglong)param_3 * (ulonglong)param_2);
      *(uint *)(param_1 + 0x158) = uVar1;
      return uVar2;
    }
    png_warning(param_1,"Potential overflow in png_zalloc()");
  }
  return 0;
}



// FUNCTION 1424ef7d0 png_free body=5 status=ok
// SIG undefined png_free(void)

void png_free(longlong param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    if (*(code **)(param_1 + 0x430) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424f5fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x430))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001424f5fbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    free(param_2);
    return;
  }
  return;
}



// FUNCTION 1424ef7e0 FUN_1424ef7e0 body=32 status=ok
// SIG undefined FUN_1424ef7e0(void)

void FUN_1424ef7e0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144d90310(0,0,0);
  *(undefined4 *)(param_1 + 0x244) = uVar1;
  return;
}



// FUNCTION 1424ef800 FUN_1424ef800 body=67 status=ok
// SIG undefined FUN_1424ef800(void)

void FUN_1424ef800(longlong param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x254) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0x158) & 0x800) != 0) {
      return;
    }
  }
  else if ((*(uint *)(param_1 + 0x158) & 0x300) == 0x300) {
    return;
  }
  uVar1 = FUN_144d90310(*(undefined4 *)(param_1 + 0x244));
  *(undefined4 *)(param_1 + 0x244) = uVar1;
  return;
}



// FUNCTION 1424ef850 png_create_info_struct body=71 status=ok
// SIG undefined png_create_info_struct(void)

void * png_create_info_struct(longlong param_1)

{
  void *_Dst;
  
                    /* 0x24ef850  639  png_create_info_struct */
  if (param_1 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_1424f5d70(2,*(undefined8 *)(param_1 + 0x428),*(undefined8 *)(param_1 + 0x420)
                                );
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,0x140);
    }
  }
  return _Dst;
}



// FUNCTION 1424ef8a0 png_info_init_3 body=71 status=ok
// SIG undefined png_info_init_3(void)

void png_info_init_3(longlong *param_1,ulonglong param_2)

{
  void *_Dst;
  
                    /* 0x24ef8a0  728  png_info_init_3 */
  _Dst = (void *)*param_1;
  if (_Dst != (void *)0x0) {
    if (param_2 < 0x140) {
      FUN_1424f5e10();
      _Dst = (void *)FUN_1424f5d20(2);
      *param_1 = (longlong)_Dst;
    }
    memset(_Dst,0,0x140);
    return;
  }
  return;
}



// FUNCTION 1424ef8f0 png_destroy_info_struct body=153 status=ok
// SIG undefined png_destroy_info_struct(void)

void png_destroy_info_struct(longlong param_1,undefined8 *param_2)

{
  void *_Dst;
  
                    /* 0x24ef8f0  645  png_destroy_info_struct */
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) &&
     (_Dst = (void *)*param_2, _Dst != (void *)0x0)) {
    png_free_data(param_1,_Dst,0x7fff,0xffffffff);
    if (*(int *)(param_1 + 0x400) != 0) {
      png_free(param_1);
      *(undefined8 *)(param_1 + 0x408) = 0;
      *(undefined4 *)(param_1 + 0x400) = 0;
    }
    memset(_Dst,0,0x140);
    FUN_1424f5e20(_Dst,*(undefined8 *)(param_1 + 0x430),*(undefined8 *)(param_1 + 0x420));
    *param_2 = 0;
  }
  return;
}



// FUNCTION 1424ef990 FUN_1424ef990 body=109 status=ok
// SIG undefined FUN_1424ef990(void)

void FUN_1424ef990(longlong param_1,void *param_2)

{
  png_free_data(param_1,param_2,0x7fff,0xffffffff);
  if (*(int *)(param_1 + 0x400) != 0) {
    png_free(param_1);
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined4 *)(param_1 + 0x400) = 0;
  }
  if (param_2 != (void *)0x0) {
    memset(param_2,0,0x140);
    return;
  }
  return;
}



// FUNCTION 1424efa00 png_data_freer body=53 status=ok
// SIG undefined png_data_freer(void)

void png_data_freer(longlong param_1,longlong param_2,int param_3,uint param_4)

{
                    /* 0x24efa00  644  png_data_freer */
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 != 2) {
      if (param_3 == 1) {
        *(uint *)(param_2 + 0xec) = *(uint *)(param_2 + 0xec) | param_4;
        return;
      }
      png_warning(param_1,"Unknown freer parameter in png_data_freer");
      return;
    }
    *(uint *)(param_2 + 0xec) = *(uint *)(param_2 + 0xec) & ~param_4;
  }
  return;
}



// FUNCTION 1424efa40 png_free_data body=1104 status=ok
// SIG undefined png_free_data(void)

void png_free_data(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
                    /* 0x24efa40  650  png_free_data */
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(uint *)(param_2 + 0xec) & param_3 & 0x4000) != 0) {
      if (param_4 == -1) {
        if (0 < *(int *)(param_2 + 0x3c)) {
          iVar3 = 0;
          do {
            png_free_data(param_1,param_2,0x4000,iVar3);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_2 + 0x3c));
        }
        png_free(param_1,*(undefined8 *)(param_2 + 0x48));
        *(undefined8 *)(param_2 + 0x48) = 0;
        *(undefined4 *)(param_2 + 0x3c) = 0;
      }
      else if (*(longlong *)(param_2 + 0x48) != 0) {
        if (*(longlong *)(*(longlong *)(param_2 + 0x48) + 8 + (longlong)param_4 * 0x38) != 0) {
          png_free(param_1);
          *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 8 + (longlong)param_4 * 0x38) = 0;
        }
      }
    }
    uVar1 = *(uint *)(param_2 + 0xec);
    if ((param_3 & uVar1 & 0x2000) != 0) {
      png_free(param_1,*(undefined8 *)(param_2 + 0x68));
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xef;
      uVar1 = *(uint *)(param_2 + 0xec);
    }
    if ((uVar1 & param_3 & 0x100) != 0) {
      *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xbf;
    }
    if ((char)(uVar1 & param_3) < '\0') {
      png_free(param_1,*(undefined8 *)(param_2 + 200));
      png_free(param_1,*(undefined8 *)(param_2 + 0xd8));
      *(undefined8 *)(param_2 + 200) = 0;
      *(undefined8 *)(param_2 + 0xd8) = 0;
      lVar5 = *(longlong *)(param_2 + 0xe0);
      if (lVar5 != 0) {
        if (*(char *)(param_2 + 0xe9) != '\0') {
          uVar4 = 0;
          do {
            png_free(param_1,*(undefined8 *)(lVar5 + uVar4 * 8));
            *(undefined8 *)(*(longlong *)(param_2 + 0xe0) + uVar4 * 8) = 0;
            uVar4 = uVar4 + 1;
            lVar5 = *(longlong *)(param_2 + 0xe0);
          } while (uVar4 < *(byte *)(param_2 + 0xe9));
        }
        png_free(param_1);
        *(undefined8 *)(param_2 + 0xe0) = 0;
      }
      *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xfb;
      uVar1 = *(uint *)(param_2 + 0xec);
    }
    if ((param_3 & uVar1 & 0x10) != 0) {
      png_free(param_1,*(undefined8 *)(param_2 + 0x100));
      png_free(param_1,*(undefined8 *)(param_2 + 0x108));
      *(undefined8 *)(param_2 + 0x100) = 0;
      *(undefined8 *)(param_2 + 0x108) = 0;
      *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xef;
      uVar1 = *(uint *)(param_2 + 0xec);
    }
    if ((uVar1 & param_3 & 0x20) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0x120) != 0) {
          if (0 < *(int *)(param_2 + 0x120)) {
            iVar3 = 0;
            do {
              png_free_data(param_1,param_2,0x20,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0x120));
          }
          png_free(param_1,*(undefined8 *)(param_2 + 0x118));
          *(undefined8 *)(param_2 + 0x118) = 0;
          *(undefined4 *)(param_2 + 0x120) = 0;
        }
        *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xdf;
      }
      else if (*(longlong *)(param_2 + 0x118) != 0) {
        lVar5 = (longlong)param_4 * 0x20;
        png_free(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x118) + lVar5));
        png_free(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x118) + 0x10 + lVar5));
        *(undefined8 *)(*(longlong *)(param_2 + 0x118) + lVar5) = 0;
        *(undefined8 *)(*(longlong *)(param_2 + 0x118) + 0x10 + lVar5) = 0;
      }
    }
    if (*(longlong *)(param_1 + 0x478) != 0) {
      png_free(param_1);
      *(undefined8 *)(param_1 + 0x478) = 0;
    }
    if ((*(uint *)(param_2 + 0xec) & param_3 & 0x200) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xf8) != 0) {
          if (0 < *(int *)(param_2 + 0xf8)) {
            iVar3 = 0;
            do {
              png_free_data(param_1,param_2,0x200,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0xf8));
          }
          png_free(param_1,*(undefined8 *)(param_2 + 0xf0));
          *(undefined8 *)(param_2 + 0xf0) = 0;
          *(undefined4 *)(param_2 + 0xf8) = 0;
        }
      }
      else if (*(longlong *)(param_2 + 0xf0) != 0) {
        png_free(param_1,*(undefined8 *)
                          (*(longlong *)(param_2 + 0xf0) + 8 + (longlong)param_4 * 0x20));
        *(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 8 + (longlong)param_4 * 0x20) = 0;
      }
    }
    uVar1 = *(uint *)(param_2 + 0xec);
    if ((param_3 & uVar1 & 8) != 0) {
      png_free(param_1,*(undefined8 *)(param_2 + 0xa0));
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xbf;
      uVar1 = *(uint *)(param_2 + 0xec);
    }
    if ((param_3 & uVar1 & 0x1000) != 0) {
      png_free(param_1,*(undefined8 *)(param_2 + 0x18));
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xf7;
      *(undefined2 *)(param_2 + 0x20) = 0;
      uVar1 = *(uint *)(param_2 + 0xec);
    }
    if ((param_3 & uVar1 & 0x40) != 0) {
      lVar5 = *(longlong *)(param_2 + 0x138);
      if (lVar5 != 0) {
        if (0 < *(int *)(param_2 + 4)) {
          lVar6 = 0;
          do {
            png_free(param_1,*(undefined8 *)(lVar5 + lVar6 * 8));
            *(undefined8 *)(*(longlong *)(param_2 + 0x138) + lVar6 * 8) = 0;
            lVar6 = lVar6 + 1;
            lVar5 = *(longlong *)(param_2 + 0x138);
          } while (lVar6 < *(int *)(param_2 + 4));
        }
        png_free(param_1);
        *(undefined8 *)(param_2 + 0x138) = 0;
        uVar1 = *(uint *)(param_2 + 0xec);
      }
      *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0x7f;
    }
    uVar2 = param_3 & 0xffffbddf;
    if (param_4 == -1) {
      uVar2 = param_3;
    }
    *(uint *)(param_2 + 0xec) = ~uVar2 & uVar1;
  }
  return;
}



// FUNCTION 1424efe90 png_get_io_ptr body=16 status=ok
// SIG undefined png_get_io_ptr(void)

undefined8 png_get_io_ptr(longlong param_1)

{
                    /* 0x24efe90  681  png_get_io_ptr */
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x130);
  }
  return 0;
}



// FUNCTION 1424efea0 png_init_io body=13 status=ok
// SIG undefined png_init_io(void)

void png_init_io(longlong param_1,undefined8 param_2)

{
                    /* 0x24efea0  729  png_init_io */
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x130) = param_2;
  }
  return;
}



// FUNCTION 1424efeb0 png_convert_to_rfc1123 body=273 status=ok
// SIG undefined png_convert_to_rfc1123(void)

undefined8 png_convert_to_rfc1123(longlong param_1,undefined2 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  
                    /* 0x24efeb0  638  png_convert_to_rfc1123 */
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x3e0);
    if (lVar4 == 0) {
      lVar4 = png_malloc(param_1,0x1d);
      *(longlong *)(param_1 + 0x3e0) = lVar4;
    }
    bVar1 = *(byte *)(param_2 + 3);
    cVar6 = (char)((uint)bVar1 * 0xd >> 8);
    iVar3 = *(byte *)(param_2 + 1) - 1;
    iVar2 = iVar3 >> 0x1f;
    FUN_1424ef650(lVar4,0x1d,"%d %s %d %02d:%02d:%02d +0000",*(byte *)((longlong)param_2 + 3) & 0x1f
                  ,&DAT_14996efb0 +
                   (longlong)
                   (int)((uint)*(byte *)(param_2 + 1) +
                         (((uint)(iVar3 / 6 + iVar2) >> 1) - iVar2) * -0xc + -1) * 4,*param_2,
                  *(byte *)(param_2 + 2) + (*(byte *)(param_2 + 2) / 3 & 0xf8) * -3,
                  *(byte *)((longlong)param_2 + 5) % 0x3c,
                  bVar1 + ((byte)(((byte)(bVar1 - cVar6) >> 1) + cVar6) >> 5) * -0x3d);
    uVar5 = *(undefined8 *)(param_1 + 0x3e0);
  }
  return uVar5;
}



// FUNCTION 1424effd0 png_get_copyright body=8 status=ok
// SIG undefined png_get_copyright(void)

char * png_get_copyright(void)

{
                    /* 0x24effd0  664  png_get_copyright */
  return 
  "libpng version 1.5.2 - March 31, 2011      Copyright (c) 1998-2011 Glenn Randers-Pehrson      Copyright (c) 1996-1997 Andreas Dilger      Copyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc."
  ;
}



// FUNCTION 1424effe0 png_get_libpng_ver body=8 status=ok
// SIG undefined png_get_libpng_ver(void)

char * png_get_libpng_ver(void)

{
                    /* 0x24effe0  683  png_get_libpng_ver */
  return "1.5.2";
}



// FUNCTION 1424efff0 png_get_header_ver body=8 status=ok
// SIG undefined png_get_header_ver(void)

char * png_get_header_ver(void)

{
                    /* 0x24efff0  672  png_get_header_ver */
  return "1.5.2";
}



// FUNCTION 1424f0000 png_get_header_version body=8 status=ok
// SIG undefined png_get_header_version(void)

char * png_get_header_version(void)

{
                    /* 0x24f0000  673  png_get_header_version */
  return " libpng version 1.5.2 - March 31, 2011\n";
}



// FUNCTION 1424f0010 png_handle_as_unknown body=75 status=ok
// SIG undefined png_handle_as_unknown(void)

undefined1 png_handle_as_unknown(longlong param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int *piVar3;
  
                    /* 0x24f0010  727  png_handle_as_unknown */
  if (((param_1 != 0) && (param_2 != (int *)0x0)) &&
     (uVar2 = (ulonglong)*(int *)(param_1 + 0x400), 0 < (longlong)uVar2)) {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x408) + uVar2 * 5);
    do {
      if (*param_2 == *(int *)((longlong)piVar3 + -5)) {
        return *(undefined1 *)((longlong)piVar3 + -1);
      }
      uVar1 = (int)uVar2 - 1;
      uVar2 = (ulonglong)uVar1;
      piVar3 = (int *)((longlong)piVar3 + -5);
    } while (uVar1 != 0);
  }
  return 0;
}



// FUNCTION 1424f0060 png_reset_zstream body=23 status=ok
// SIG undefined png_reset_zstream(void)

undefined8 png_reset_zstream(longlong param_1)

{
  undefined8 uVar1;
  
                    /* 0x24f0060  742  png_reset_zstream */
  if (param_1 != 0) {
    uVar1 = FUN_144b4fbc0(param_1 + 0x160);
    return uVar1;
  }
  return 0xfffffffe;
}



// FUNCTION 1424f0080 png_access_version_number body=6 status=ok
// SIG undefined png_access_version_number(void)

undefined8 png_access_version_number(void)

{
                    /* 0x24f0080  629  png_access_version_number */
  return 0x2906;
}



// FUNCTION 1424f0090 FUN_1424f0090 body=446 status=ok
// SIG undefined FUN_1424f0090(void)

undefined8
FUN_1424f0090(longlong param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,
             uint param_7,uint param_8,uint param_9)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((param_3 < 1) ||
       (uVar1 = 1, (int)(param_4 | param_2 | param_5 | param_6 | param_7 | param_8 | param_9) < 0))
    {
      png_warning(param_1,"Ignoring attempt to set negative chromaticity value");
      uVar1 = 0;
    }
    if (100000 - param_3 < (int)param_2) {
      png_warning(param_1,"Invalid cHRM white point");
      uVar1 = 0;
    }
    if ((int)(100000 - param_5) < (int)param_4) {
      png_warning(param_1,"Invalid cHRM red point");
      uVar1 = 0;
    }
    if ((int)(100000 - param_7) < (int)param_6) {
      png_warning(param_1,"Invalid cHRM green point");
      uVar1 = 0;
    }
    if ((int)(100000 - param_9) < (int)param_8) {
      png_warning(param_1,"Invalid cHRM blue point");
      uVar1 = 0;
    }
    uVar4 = param_6 - param_4 >> 0x10;
    uVar3 = param_6 - param_4 & 0xffff;
    uVar10 = param_9 - param_5 >> 0x10;
    uVar2 = param_9 - param_5 & 0xffff;
    uVar8 = uVar2 * uVar3;
    uVar6 = (uVar8 >> 0x10) + uVar3 * uVar10 + uVar2 * uVar4;
    uVar2 = param_7 - param_5 >> 0x10;
    uVar7 = param_7 - param_5 & 0xffff;
    uVar3 = param_8 - param_4 >> 0x10;
    uVar5 = param_8 - param_4 & 0xffff;
    uVar9 = uVar5 * uVar7;
    uVar5 = (uVar9 >> 0x10) + uVar7 * uVar3 + uVar5 * uVar2;
    if ((uVar10 * uVar4 + (uVar6 >> 0x10) == uVar3 * uVar2 + (uVar5 >> 0x10)) &&
       ((uVar6 * 0x10000 | uVar8 & 0xffff) == (uVar5 * 0x10000 | uVar9 & 0xffff))) {
      png_warning(param_1,"Ignoring attempt to set cHRM RGB triangle with zero area");
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 1424f0250 FUN_1424f0250 body=694 status=ok
// SIG undefined FUN_1424f0250(void)

void FUN_1424f0250(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                  int param_7,int param_8)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = false;
  if (param_2 == 0) {
    png_warning(param_1,"Image width is zero in IHDR");
    bVar2 = true;
    if (param_3 != 0) goto LAB_1424f0279;
LAB_1424f0418:
    png_warning(param_1,"Image height is zero in IHDR");
    bVar2 = true;
    if (1000000 < param_2) goto LAB_1424f0438;
LAB_1424f0285:
    if (*(uint *)(param_1 + 0x45c) < param_2) goto LAB_1424f0438;
    if (param_3 < 0xf4241) goto LAB_1424f029d;
LAB_1424f0458:
    png_warning(param_1,"Image height exceeds user limit in IHDR");
    bVar2 = true;
  }
  else {
    if (param_3 == 0) goto LAB_1424f0418;
LAB_1424f0279:
    if (param_2 < 0xf4241) goto LAB_1424f0285;
LAB_1424f0438:
    png_warning(param_1,"Image width exceeds user limit in IHDR");
    bVar2 = true;
    if (1000000 < param_3) goto LAB_1424f0458;
LAB_1424f029d:
    if (*(uint *)(param_1 + 0x460) < param_3) goto LAB_1424f0458;
  }
  if ((int)param_2 < 0) {
    png_warning(param_1,"Invalid image width in IHDR");
    bVar2 = true;
  }
  if ((int)param_3 < 0) {
    png_warning(param_1,"Invalid image height in IHDR");
    bVar2 = true;
  }
  if (0x1fffff8e < param_2) {
    png_warning(param_1,"Width is too large for libpng to process pixels");
  }
  if ((0x10 < param_4) || ((0x10116U >> (param_4 & 0x1f) & 1) == 0)) {
    png_warning(param_1,"Invalid bit depth in IHDR");
    bVar2 = true;
  }
  uVar3 = param_5 | 4;
  if ((6 < param_5) || (uVar3 == 5)) {
    png_warning(param_1,"Invalid color type in IHDR");
    bVar2 = true;
  }
  if (((int)param_4 < 9) || (param_5 != 3)) {
    if ((7 < (int)param_4) || (param_5 != 4 && uVar3 != 6)) goto LAB_1424f0350;
  }
  png_warning(param_1,"Invalid color type/bit depth combination in IHDR");
  bVar2 = true;
LAB_1424f0350:
  if (1 < param_6) {
    png_warning(param_1,"Unknown interlace method in IHDR");
    bVar2 = true;
  }
  if (param_7 != 0) {
    png_warning(param_1,"Unknown compression method in IHDR");
    bVar2 = true;
  }
  if (((*(byte *)(param_1 + 0x155) & 0x10) != 0) && (*(int *)(param_1 + 0x418) != 0)) {
    png_warning(param_1,"MNG features are not allowed in a PNG datastream");
  }
  if ((param_8 == 0) ||
     ((((param_8 == 0x40 && ((*(uint *)(param_1 + 0x418) & 4) != 0)) && (uVar3 == 6)) &&
      ((*(uint *)(param_1 + 0x154) & 0x1000) == 0)))) {
    if (!bVar2) {
      return;
    }
  }
  else {
    png_warning(param_1,"Unknown filter method in IHDR");
    if ((*(byte *)(param_1 + 0x155) & 0x10) != 0) {
      png_warning(param_1,"Invalid filter method in IHDR");
    }
  }
  png_error(param_1,"Invalid IHDR data");
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424f0510 FUN_1424f0510 body=227 status=ok
// SIG undefined FUN_1424f0510(void)

uint FUN_1424f0510(longlong param_1,ulonglong param_2,uint *param_3,ulonglong *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = *param_3;
  for (uVar4 = *param_4; uVar4 < param_2; uVar4 = uVar4 + 1) {
    cVar1 = *(char *)(param_1 + uVar4);
    uVar3 = 8;
    if ((byte)(cVar1 - 0x30U) < 10) goto switchD_1424f0564_caseD_2b;
    uVar3 = 0;
    switch((int)cVar1) {
    case 0x2b:
    case 0x2d:
      break;
    case 0x2c:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
      goto switchD_1424f0564_caseD_2c;
    case 0x2e:
      uVar3 = 4;
      break;
    case 0x45:
      goto switchD_1424f0564_caseD_45;
    default:
      if (cVar1 != 0x65) goto switchD_1424f0564_caseD_2c;
switchD_1424f0564_caseD_45:
      uVar3 = 0xc;
    }
switchD_1424f0564_caseD_2b:
    switch(uVar2 & 3 | uVar3) {
    case 0:
    case 2:
      if ((uVar2 & 0x3c) != 0) goto switchD_1424f0564_caseD_2c;
      uVar3 = uVar2 | 4;
      break;
    default:
      goto switchD_1424f0564_caseD_2c;
    case 4:
      if ((uVar2 & 0x10) != 0) goto switchD_1424f0564_caseD_2c;
      if ((uVar2 & 8) == 0) {
        uVar3 = uVar2 & 0x40 | 0x11;
      }
      else {
        uVar3 = uVar2 | 0x10;
      }
      break;
    case 8:
      uVar3 = uVar2 | 0x48;
      if ((uVar2 & 0x10) != 0) {
        uVar3 = 0x59;
      }
      break;
    case 9:
    case 10:
      uVar3 = uVar2 | 0x48;
      break;
    case 0xc:
    case 0xd:
      if ((uVar2 & 8) == 0) goto switchD_1424f0564_caseD_2c;
      uVar3 = uVar2 & 0x40 | 2;
    }
    uVar2 = uVar3;
  }
switchD_1424f0564_caseD_2c:
  *param_3 = uVar2;
  *param_4 = uVar4;
  return uVar2 >> 3 & 1;
}



// FUNCTION 1424f06b0 FUN_1424f06b0 body=105 status=ok
// SIG undefined FUN_1424f06b0(void)

void FUN_1424f06b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  local_30 = 0;
  FUN_1424f0510(param_1,param_2,&local_24,&local_30);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424f0730 FUN_1424f0730 body=1921 status=ok
// SIG undefined FUN_1424f0730(void)

void FUN_1424f0730(undefined8 param_1,char *param_2,ulonglong param_3,double param_4,uint param_5)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined1 auVar80 [11];
  undefined1 auVar81 [15];
  undefined1 auVar82 [11];
  undefined1 auVar83 [15];
  undefined1 auVar84 [11];
  undefined1 auVar85 [15];
  undefined1 auVar86 [11];
  undefined1 auVar87 [15];
  undefined1 auVar88 [11];
  undefined1 auVar89 [15];
  undefined1 auVar90 [11];
  undefined1 auVar91 [15];
  undefined1 auVar92 [15];
  undefined1 auVar93 [15];
  undefined1 auVar94 [15];
  undefined1 auVar95 [15];
  undefined1 auVar96 [15];
  undefined1 auVar97 [15];
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  int iVar103;
  uint uVar104;
  uint uVar105;
  ulonglong uVar106;
  ulonglong uVar107;
  int iVar108;
  longlong lVar109;
  longlong lVar110;
  ulonglong uVar111;
  uint uVar112;
  char *pcVar113;
  ulonglong uVar114;
  int iVar115;
  int iVar116;
  bool bVar117;
  undefined1 auVar118 [11];
  undefined1 auVar120 [16];
  double dVar121;
  undefined1 auVar122 [11];
  undefined1 auVar123 [11];
  undefined1 auVar124 [11];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [11];
  undefined1 auVar131 [11];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  double dVar144;
  double dVar145;
  undefined8 uStack_100;
  undefined1 local_f8 [14];
  undefined1 auStack_ea [16];
  undefined1 auStack_da [10];
  undefined8 local_d0;
  double local_c8;
  uint local_c0;
  char acStack_bb [11];
  ulonglong local_b0;
  undefined1 auVar119 [15];
  undefined1 auVar125 [15];
  undefined1 auVar126 [15];
  undefined1 auVar127 [15];
  undefined1 auVar132 [15];
  undefined1 auVar133 [15];
  
  local_b0 = DAT_14c707940 ^ (ulonglong)local_f8;
  uVar112 = 0xf;
  if (param_5 != 0) {
    uVar112 = param_5;
  }
  uVar105 = 0x10;
  if (uVar112 < 0x10) {
    uVar105 = uVar112;
  }
  if (param_3 < uVar105 + 5) goto LAB_1424f0f21;
  if (param_4 < 0.0) {
    param_4 = -param_4;
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  }
  if ((param_4 < 2.2250738585072014e-308) || (1.79769313486232e+308 < param_4)) {
    if (param_4 < 2.2250738585072014e-308) {
      param_2[0] = '0';
      param_2[1] = '\0';
    }
    else {
      builtin_strncpy(param_2,"inf",4);
    }
    goto LAB_1424f0ec4;
  }
  uStack_100 = (undefined *)0x1424f07fd;
  frexp(param_4,(int *)&local_c0);
  iVar103 = local_c0 * 0x4d;
  uVar112 = iVar103 >> 8;
  if ((int)local_c0 < 0) {
    dVar121 = 0.0;
    local_c0 = uVar112;
    if (iVar103 < -0x13300) goto LAB_1424f08d0;
    uVar104 = -uVar112;
    bVar117 = true;
LAB_1424f085b:
    dVar121 = 10.0;
    dVar145 = 1.0;
    do {
      if ((uVar104 & 1) != 0) {
        dVar145 = dVar145 * dVar121;
      }
      dVar121 = dVar121 * dVar121;
      bVar3 = 1 < (int)uVar104;
      uVar104 = (int)uVar104 >> 1;
    } while (bVar3);
    if (bVar117) {
      dVar145 = 1.0 / dVar145;
    }
  }
  else {
    bVar117 = false;
    uVar104 = uVar112;
    if (uVar112 != 0) goto LAB_1424f085b;
    dVar145 = 1.0;
  }
joined_r0x0001424f08a8:
  do {
    dVar121 = dVar145;
    local_c0 = uVar112;
    if ((2.2250738585072014e-308 <= dVar121) && (param_4 <= dVar121)) break;
LAB_1424f08d0:
    uVar112 = local_c0 + 1;
    dVar144 = 1.0;
    if ((int)uVar112 < 0) {
      dVar145 = 0.0;
      if ((int)uVar112 < -0x133) goto joined_r0x0001424f08a8;
      uVar104 = ~local_c0;
      bVar117 = true;
    }
    else {
      bVar117 = false;
      uVar104 = uVar112;
      dVar145 = dVar144;
      if (uVar112 == 0) goto joined_r0x0001424f08a8;
    }
    dVar145 = 10.0;
    do {
      if ((uVar104 & 1) != 0) {
        dVar144 = dVar144 * dVar145;
      }
      dVar145 = dVar145 * dVar145;
      bVar3 = 1 < (int)uVar104;
      uVar104 = (int)uVar104 >> 1;
    } while (bVar3);
    if (bVar117) {
      dVar144 = 1.0 / dVar144;
    }
    dVar145 = dVar144;
  } while (dVar144 <= 1.79769313486232e+308);
  for (param_4 = param_4 / dVar121; 1.0 <= param_4; param_4 = param_4 / 10.0) {
    local_c0 = local_c0 + 1;
  }
  uVar112 = 0;
  iVar103 = 0;
  if (0xfffffffd < local_c0) {
    iVar103 = -local_c0;
    local_c0 = 0;
  }
  local_d0 = param_1;
  iVar115 = iVar103;
  do {
    pcVar113 = param_2;
    if ((int)(((iVar103 + 1) - iVar115) + uVar112) < (int)uVar105) {
      uStack_100 = (undefined *)0x1424f0a02;
      param_4 = modf(param_4 * 10.0,&local_c8);
LAB_1424f0b10:
      iVar116 = (int)param_3;
      if ((local_c8 != 0.0) || (NAN(local_c8))) goto LAB_1424f0b58;
      iVar115 = iVar115 + (uint)(uVar112 == 0);
      param_2 = pcVar113;
      param_1 = local_d0;
      iVar103 = iVar103 + 1;
    }
    else {
      uStack_100 = (undefined *)0x1424f0a2e;
      local_c8 = floor(param_4 * 10.0 + 0.5);
      param_4 = 0.0;
      if (local_c8 <= 9.0) goto LAB_1424f0b10;
      if (iVar103 < 1) {
        uVar104 = local_c0;
        if (0 < (int)uVar112) {
          do {
            pcVar113 = param_2 + -1;
            cVar2 = param_2[-1];
            if (uVar104 == 0xffffffff) {
              uVar104 = 0xffffffff;
              if (cVar2 == '.') {
                cVar2 = param_2[-2];
                pcVar113 = param_2 + -2;
                param_3 = param_3 + 1;
                local_c0 = 1;
                uVar104 = 1;
              }
            }
            else {
              uVar104 = uVar104 + 1;
              local_c0 = uVar104;
            }
            uVar112 = uVar112 - 1;
            iVar116 = cVar2 + -0x2f;
            local_c8 = (double)iVar116;
          } while ((9 < iVar116) && (param_2 = pcVar113, 0 < (int)uVar112));
          if (iVar116 < 10) goto LAB_1424f0b10;
        }
        if (local_c0 == 0xffffffff) {
          pcVar1 = pcVar113 + -1;
          pcVar113 = pcVar113 + -1;
          if (*pcVar1 == '.') {
            param_3 = param_3 + 1;
            local_c0 = 1;
          }
        }
        else {
          local_c0 = local_c0 + 1;
        }
        local_c8 = 1.0;
      }
      else {
        iVar103 = iVar103 + -1;
        local_c8 = 1.0;
        iVar115 = iVar115 - (uint)(uVar112 == 0);
      }
      local_c8 = 1.0;
      param_4 = 0.0;
LAB_1424f0b58:
      bVar117 = local_c0 != 0xffffffff;
      iVar116 = iVar103;
      iVar108 = iVar103;
      if (0 < iVar103) {
        do {
          if (bVar117) {
            if (local_c0 == 0) {
              *pcVar113 = '.';
              pcVar113 = pcVar113 + 1;
              param_3 = param_3 - 1;
            }
            local_c0 = local_c0 - 1;
          }
          *pcVar113 = '0';
          pcVar113 = pcVar113 + 1;
          bVar117 = local_c0 != 0xffffffff;
          iVar108 = iVar116 + -1;
          bVar3 = 0 < iVar116;
          iVar116 = iVar108;
        } while (iVar108 != 0 && bVar3);
        iVar108 = 0;
      }
      if (bVar117) {
        if (local_c0 == 0) {
          *pcVar113 = '.';
          pcVar113 = pcVar113 + 1;
          param_3 = param_3 - 1;
        }
        local_c0 = local_c0 - 1;
      }
      iVar116 = (int)param_3;
      *pcVar113 = (char)(int)local_c8 + '0';
      uVar112 = ((uVar112 + 1) - iVar115) + iVar103;
      iVar115 = 0;
      param_2 = pcVar113 + 1;
      param_1 = local_d0;
      iVar103 = iVar108;
    }
    local_d0 = param_1;
  } while ((2.2250738585072014e-308 < param_4) &&
          (iVar116 = (int)param_3, (int)((iVar103 - iVar115) + uVar112) < (int)uVar105));
  uVar105 = local_c0;
  if (local_c0 + 1 < 4) {
    while (local_c0 = uVar105 - 1, 0 < (int)uVar105) {
      *param_2 = '0';
      param_2 = param_2 + 1;
      uVar105 = local_c0;
    }
  }
  else {
    *param_2 = 'E';
    iVar116 = iVar116 + ~uVar112;
    if ((int)local_c0 < 0) {
      param_2[1] = '-';
      param_2 = param_2 + 2;
      iVar116 = iVar116 + -1;
      local_c0 = -local_c0;
    }
    else {
      param_2 = param_2 + 1;
    }
    lVar109 = 0;
    if (0 < (int)local_c0) {
      do {
        uVar112 = local_c0;
        acStack_bb[lVar109 + 1] = (char)uVar112 + (char)(uVar112 / 10) * -10 | 0x30;
        lVar109 = lVar109 + 1;
        local_c0 = uVar112 / 10;
      } while (9 < uVar112);
      local_c0 = uVar112 / 10;
    }
    uVar112 = (uint)lVar109;
    if (iVar116 <= (int)uVar112) {
LAB_1424f0f21:
      uStack_100 = (undefined *)0x1424f0f30;
      png_error(param_1,"ASCII conversion buffer too small");
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((int)uVar112 < 1) goto LAB_1424f0ec1;
    uVar106 = (ulonglong)(int)uVar112;
    if ((0x1f < uVar112) &&
       ((acStack_bb + uVar106 + 1 <= param_2 || (param_2 + uVar106 <= acStack_bb + 1)))) {
      uVar114 = uVar106 & 0xffffffffffffffe0;
      lVar109 = (uVar114 - 0x20 >> 5) + 1;
      uVar107 = (ulonglong)((uint)lVar109 & 1);
      if (uVar114 - 0x20 == 0) {
        uVar111 = 0;
LAB_1424f0e20:
        auVar128 = *(undefined1 (*) [16])(auStack_da + ~uVar111 + uVar106 + 1);
        auVar134 = *(undefined1 (*) [16])((longlong)&local_d0 + ~uVar111 + uVar106 + 7);
        auVar41[0xd] = 0;
        auVar41._0_13_ = auVar134._0_13_;
        auVar41[0xe] = auVar134[7];
        auVar47[0xc] = auVar134[6];
        auVar47._0_12_ = auVar134._0_12_;
        auVar47._13_2_ = auVar41._13_2_;
        auVar53[0xb] = 0;
        auVar53._0_11_ = auVar134._0_11_;
        auVar53._12_3_ = auVar47._12_3_;
        auVar59[10] = auVar134[5];
        auVar59._0_10_ = auVar134._0_10_;
        auVar59._11_4_ = auVar53._11_4_;
        auVar65[9] = 0;
        auVar65._0_9_ = auVar134._0_9_;
        auVar65._10_5_ = auVar59._10_5_;
        auVar71[8] = auVar134[4];
        auVar71._0_8_ = auVar134._0_8_;
        auVar71._9_6_ = auVar65._9_6_;
        auVar142[7] = 0;
        auVar142._0_7_ = auVar71._8_7_;
        auVar87._7_8_ = 0;
        auVar87._0_7_ = auVar71._8_7_;
        auVar99._1_8_ = SUB158(auVar87 << 0x40,7);
        auVar99[0] = auVar134[3];
        auVar99._9_6_ = 0;
        auVar88._1_10_ = SUB1510(auVar99 << 0x30,5);
        auVar88[0] = auVar134[2];
        auVar100._11_4_ = 0;
        auVar100._0_11_ = auVar88;
        auVar77._3_12_ = SUB1512(auVar100 << 0x20,3);
        auVar77[2] = auVar134[1];
        auVar77[1] = 0;
        auVar77[0] = auVar134[0];
        auVar142._8_4_ = auVar77._0_4_;
        auVar142._12_4_ = auVar88._0_4_;
        auVar136 = pshuflw(auVar142,auVar142,0x1b);
        auVar136 = pshufhw(auVar136,auVar136,0x1b);
        auVar129[8] = auVar134[8];
        auVar129[9] = 0;
        auVar129[10] = auVar134[9];
        auVar124._0_10_ = (unkuint10)auVar134[0xc] << 0x40;
        auVar124[10] = auVar134[0xd];
        auVar127[0xb] = 0;
        auVar127._0_11_ = auVar124;
        auVar127[0xc] = auVar134[0xe];
        auVar127[0xd] = 0;
        auVar127[0xe] = auVar134[0xf];
        auVar129[3] = 0;
        auVar129._0_3_ = auVar124._8_3_;
        auVar129._4_3_ = auVar127._12_3_;
        auVar129[7] = 0;
        auVar129[0xb] = 0;
        auVar129._12_3_ = (int3)(CONCAT16(auVar134[0xb],(uint6)auVar134[10] << 0x20) >> 0x20);
        auVar129[0xf] = 0;
        auVar134 = pshuflw(auVar129,auVar129,0x1b);
        auVar134 = pshufhw(auVar134,auVar134,0x1b);
        sVar5 = auVar134._0_2_;
        sVar7 = auVar134._2_2_;
        sVar9 = auVar134._4_2_;
        sVar11 = auVar134._6_2_;
        sVar13 = auVar134._8_2_;
        sVar15 = auVar134._10_2_;
        sVar17 = auVar134._12_2_;
        sVar19 = auVar134._14_2_;
        sVar21 = auVar136._0_2_;
        sVar23 = auVar136._2_2_;
        sVar25 = auVar136._4_2_;
        sVar27 = auVar136._6_2_;
        sVar29 = auVar136._8_2_;
        sVar31 = auVar136._10_2_;
        sVar33 = auVar136._12_2_;
        sVar35 = auVar136._14_2_;
        auVar42[0xd] = 0;
        auVar42._0_13_ = auVar128._0_13_;
        auVar42[0xe] = auVar128[7];
        auVar48[0xc] = auVar128[6];
        auVar48._0_12_ = auVar128._0_12_;
        auVar48._13_2_ = auVar42._13_2_;
        auVar54[0xb] = 0;
        auVar54._0_11_ = auVar128._0_11_;
        auVar54._12_3_ = auVar48._12_3_;
        auVar60[10] = auVar128[5];
        auVar60._0_10_ = auVar128._0_10_;
        auVar60._11_4_ = auVar54._11_4_;
        auVar66[9] = 0;
        auVar66._0_9_ = auVar128._0_9_;
        auVar66._10_5_ = auVar60._10_5_;
        auVar72[8] = auVar128[4];
        auVar72._0_8_ = auVar128._0_8_;
        auVar72._9_6_ = auVar66._9_6_;
        auVar143[7] = 0;
        auVar143._0_7_ = auVar72._8_7_;
        auVar89._7_8_ = 0;
        auVar89._0_7_ = auVar72._8_7_;
        auVar101._1_8_ = SUB158(auVar89 << 0x40,7);
        auVar101[0] = auVar128[3];
        auVar101._9_6_ = 0;
        auVar90._1_10_ = SUB1510(auVar101 << 0x30,5);
        auVar90[0] = auVar128[2];
        auVar102._11_4_ = 0;
        auVar102._0_11_ = auVar90;
        auVar78._3_12_ = SUB1512(auVar102 << 0x20,3);
        auVar78[2] = auVar128[1];
        auVar78[1] = 0;
        auVar78[0] = auVar128[0];
        auVar143._8_4_ = auVar78._0_4_;
        auVar143._12_4_ = auVar90._0_4_;
        auVar139 = pshuflw(auVar143,auVar143,0x1b);
        auVar139 = pshufhw(auVar139,auVar139,0x1b);
        auVar120[8] = auVar128[8];
        auVar120[9] = 0;
        auVar120[10] = auVar128[9];
        auVar118._0_10_ = (unkuint10)auVar128[0xc] << 0x40;
        auVar118[10] = auVar128[0xd];
        auVar119[0xb] = 0;
        auVar119._0_11_ = auVar118;
        auVar119[0xc] = auVar128[0xe];
        auVar119[0xd] = 0;
        auVar119[0xe] = auVar128[0xf];
        auVar120[3] = 0;
        auVar120._0_3_ = auVar118._8_3_;
        auVar120._4_3_ = auVar119._12_3_;
        auVar120[7] = 0;
        auVar120[0xb] = 0;
        auVar120._12_3_ = (int3)(CONCAT16(auVar128[0xb],(uint6)auVar128[10] << 0x20) >> 0x20);
        auVar120[0xf] = 0;
        auVar128 = pshuflw(auVar120,auVar120,0x1b);
        auVar128 = pshufhw(auVar128,auVar128,0x1b);
        sVar6 = auVar128._0_2_;
        sVar8 = auVar128._2_2_;
        sVar10 = auVar128._4_2_;
        sVar12 = auVar128._6_2_;
        sVar14 = auVar128._8_2_;
        sVar16 = auVar128._10_2_;
        sVar18 = auVar128._12_2_;
        sVar20 = auVar128._14_2_;
        sVar22 = auVar139._0_2_;
        sVar24 = auVar139._2_2_;
        sVar26 = auVar139._4_2_;
        sVar28 = auVar139._6_2_;
        sVar30 = auVar139._8_2_;
        sVar32 = auVar139._10_2_;
        sVar34 = auVar139._12_2_;
        sVar36 = auVar139._14_2_;
        pcVar113 = param_2 + uVar111;
        *pcVar113 = (0 < sVar5) * (sVar5 < 0x100) * auVar134[0] - (0xff < sVar5);
        pcVar113[1] = (0 < sVar7) * (sVar7 < 0x100) * auVar134[2] - (0xff < sVar7);
        pcVar113[2] = (0 < sVar9) * (sVar9 < 0x100) * auVar134[4] - (0xff < sVar9);
        pcVar113[3] = (0 < sVar11) * (sVar11 < 0x100) * auVar134[6] - (0xff < sVar11);
        pcVar113[4] = (0 < sVar13) * (sVar13 < 0x100) * auVar134[8] - (0xff < sVar13);
        pcVar113[5] = (0 < sVar15) * (sVar15 < 0x100) * auVar134[10] - (0xff < sVar15);
        pcVar113[6] = (0 < sVar17) * (sVar17 < 0x100) * auVar134[0xc] - (0xff < sVar17);
        pcVar113[7] = (0 < sVar19) * (sVar19 < 0x100) * auVar134[0xe] - (0xff < sVar19);
        pcVar113[8] = (0 < sVar21) * (sVar21 < 0x100) * auVar136[0] - (0xff < sVar21);
        pcVar113[9] = (0 < sVar23) * (sVar23 < 0x100) * auVar136[2] - (0xff < sVar23);
        pcVar113[10] = (0 < sVar25) * (sVar25 < 0x100) * auVar136[4] - (0xff < sVar25);
        pcVar113[0xb] = (0 < sVar27) * (sVar27 < 0x100) * auVar136[6] - (0xff < sVar27);
        pcVar113[0xc] = (0 < sVar29) * (sVar29 < 0x100) * auVar136[8] - (0xff < sVar29);
        pcVar113[0xd] = (0 < sVar31) * (sVar31 < 0x100) * auVar136[10] - (0xff < sVar31);
        pcVar113[0xe] = (0 < sVar33) * (sVar33 < 0x100) * auVar136[0xc] - (0xff < sVar33);
        pcVar113[0xf] = (0 < sVar35) * (sVar35 < 0x100) * auVar136[0xe] - (0xff < sVar35);
        pcVar113 = param_2 + uVar111 + 0x10;
        *pcVar113 = (0 < sVar6) * (sVar6 < 0x100) * auVar128[0] - (0xff < sVar6);
        pcVar113[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar128[2] - (0xff < sVar8);
        pcVar113[2] = (0 < sVar10) * (sVar10 < 0x100) * auVar128[4] - (0xff < sVar10);
        pcVar113[3] = (0 < sVar12) * (sVar12 < 0x100) * auVar128[6] - (0xff < sVar12);
        pcVar113[4] = (0 < sVar14) * (sVar14 < 0x100) * auVar128[8] - (0xff < sVar14);
        pcVar113[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar128[10] - (0xff < sVar16);
        pcVar113[6] = (0 < sVar18) * (sVar18 < 0x100) * auVar128[0xc] - (0xff < sVar18);
        pcVar113[7] = (0 < sVar20) * (sVar20 < 0x100) * auVar128[0xe] - (0xff < sVar20);
        pcVar113[8] = (0 < sVar22) * (sVar22 < 0x100) * auVar139[0] - (0xff < sVar22);
        pcVar113[9] = (0 < sVar24) * (sVar24 < 0x100) * auVar139[2] - (0xff < sVar24);
        pcVar113[10] = (0 < sVar26) * (sVar26 < 0x100) * auVar139[4] - (0xff < sVar26);
        pcVar113[0xb] = (0 < sVar28) * (sVar28 < 0x100) * auVar139[6] - (0xff < sVar28);
        pcVar113[0xc] = (0 < sVar30) * (sVar30 < 0x100) * auVar139[8] - (0xff < sVar30);
        pcVar113[0xd] = (0 < sVar32) * (sVar32 < 0x100) * auVar139[10] - (0xff < sVar32);
        pcVar113[0xe] = (0 < sVar34) * (sVar34 < 0x100) * auVar139[0xc] - (0xff < sVar34);
        pcVar113[0xf] = (0 < sVar36) * (sVar36 < 0x100) * auVar139[0xe] - (0xff < sVar36);
      }
      else {
        pcVar113 = param_2 + 0x30;
        lVar109 = uVar107 - lVar109;
        lVar110 = 0;
        do {
          auVar128 = *(undefined1 (*) [16])(auStack_da + lVar110 + uVar106);
          auVar134 = *(undefined1 (*) [16])((longlong)&local_d0 + lVar110 + uVar106 + 6);
          auVar37[0xd] = 0;
          auVar37._0_13_ = auVar134._0_13_;
          auVar37[0xe] = auVar134[7];
          auVar43[0xc] = auVar134[6];
          auVar43._0_12_ = auVar134._0_12_;
          auVar43._13_2_ = auVar37._13_2_;
          auVar49[0xb] = 0;
          auVar49._0_11_ = auVar134._0_11_;
          auVar49._12_3_ = auVar43._12_3_;
          auVar55[10] = auVar134[5];
          auVar55._0_10_ = auVar134._0_10_;
          auVar55._11_4_ = auVar49._11_4_;
          auVar61[9] = 0;
          auVar61._0_9_ = auVar134._0_9_;
          auVar61._10_5_ = auVar55._10_5_;
          auVar67[8] = auVar134[4];
          auVar67._0_8_ = auVar134._0_8_;
          auVar67._9_6_ = auVar61._9_6_;
          auVar135[7] = 0;
          auVar135._0_7_ = auVar67._8_7_;
          auVar79._7_8_ = 0;
          auVar79._0_7_ = auVar67._8_7_;
          auVar91._1_8_ = SUB158(auVar79 << 0x40,7);
          auVar91[0] = auVar134[3];
          auVar91._9_6_ = 0;
          auVar80._1_10_ = SUB1510(auVar91 << 0x30,5);
          auVar80[0] = auVar134[2];
          auVar92._11_4_ = 0;
          auVar92._0_11_ = auVar80;
          auVar73._3_12_ = SUB1512(auVar92 << 0x20,3);
          auVar73[2] = auVar134[1];
          auVar73[1] = 0;
          auVar73[0] = auVar134[0];
          auVar135._8_4_ = auVar73._0_4_;
          auVar135._12_4_ = auVar80._0_4_;
          auVar136 = pshuflw(auVar135,auVar135,0x1b);
          auVar137 = pshufhw(auVar136,auVar136,0x1b);
          auVar139[8] = auVar134[8];
          auVar139[9] = 0;
          auVar139[10] = auVar134[9];
          auVar130._0_10_ = (unkuint10)auVar134[0xc] << 0x40;
          auVar130[10] = auVar134[0xd];
          auVar132[0xb] = 0;
          auVar132._0_11_ = auVar130;
          auVar132[0xc] = auVar134[0xe];
          auVar132[0xd] = 0;
          auVar132[0xe] = auVar134[0xf];
          auVar139[3] = 0;
          auVar139._0_3_ = auVar130._8_3_;
          auVar139._4_3_ = auVar132._12_3_;
          auVar139[7] = 0;
          auVar139[0xb] = 0;
          auVar139._12_3_ = (int3)(CONCAT16(auVar134[0xb],(uint6)auVar134[10] << 0x20) >> 0x20);
          auVar139[0xf] = 0;
          auVar134 = pshuflw(auVar139,auVar139,0x1b);
          auVar136 = pshufhw(auVar134,auVar134,0x1b);
          sVar5 = auVar136._0_2_;
          sVar7 = auVar136._2_2_;
          sVar9 = auVar136._4_2_;
          sVar11 = auVar136._6_2_;
          sVar13 = auVar136._8_2_;
          sVar15 = auVar136._10_2_;
          sVar17 = auVar136._12_2_;
          sVar19 = auVar136._14_2_;
          sVar21 = auVar137._0_2_;
          sVar23 = auVar137._2_2_;
          sVar25 = auVar137._4_2_;
          sVar27 = auVar137._6_2_;
          sVar29 = auVar137._8_2_;
          sVar31 = auVar137._10_2_;
          sVar33 = auVar137._12_2_;
          sVar35 = auVar137._14_2_;
          auVar38[0xd] = 0;
          auVar38._0_13_ = auVar128._0_13_;
          auVar38[0xe] = auVar128[7];
          auVar44[0xc] = auVar128[6];
          auVar44._0_12_ = auVar128._0_12_;
          auVar44._13_2_ = auVar38._13_2_;
          auVar50[0xb] = 0;
          auVar50._0_11_ = auVar128._0_11_;
          auVar50._12_3_ = auVar44._12_3_;
          auVar56[10] = auVar128[5];
          auVar56._0_10_ = auVar128._0_10_;
          auVar56._11_4_ = auVar50._11_4_;
          auVar62[9] = 0;
          auVar62._0_9_ = auVar128._0_9_;
          auVar62._10_5_ = auVar56._10_5_;
          auVar68[8] = auVar128[4];
          auVar68._0_8_ = auVar128._0_8_;
          auVar68._9_6_ = auVar62._9_6_;
          auVar138[7] = 0;
          auVar138._0_7_ = auVar68._8_7_;
          auVar81._7_8_ = 0;
          auVar81._0_7_ = auVar68._8_7_;
          auVar93._1_8_ = SUB158(auVar81 << 0x40,7);
          auVar93[0] = auVar128[3];
          auVar93._9_6_ = 0;
          auVar82._1_10_ = SUB1510(auVar93 << 0x30,5);
          auVar82[0] = auVar128[2];
          auVar94._11_4_ = 0;
          auVar94._0_11_ = auVar82;
          auVar74._3_12_ = SUB1512(auVar94 << 0x20,3);
          auVar74[2] = auVar128[1];
          auVar74[1] = 0;
          auVar74[0] = auVar128[0];
          auVar138._8_4_ = auVar74._0_4_;
          auVar138._12_4_ = auVar82._0_4_;
          auVar134 = pshuflw(auVar138,auVar138,0x1b);
          auVar139 = pshufhw(auVar134,auVar134,0x1b);
          auVar134[8] = auVar128[8];
          auVar134[9] = 0;
          auVar134[10] = auVar128[9];
          auVar122._0_10_ = (unkuint10)auVar128[0xc] << 0x40;
          auVar122[10] = auVar128[0xd];
          auVar125[0xb] = 0;
          auVar125._0_11_ = auVar122;
          auVar125[0xc] = auVar128[0xe];
          auVar125[0xd] = 0;
          auVar125[0xe] = auVar128[0xf];
          auVar134[3] = 0;
          auVar134._0_3_ = auVar122._8_3_;
          auVar134._4_3_ = auVar125._12_3_;
          auVar134[7] = 0;
          auVar134[0xb] = 0;
          auVar134._12_3_ = (int3)(CONCAT16(auVar128[0xb],(uint6)auVar128[10] << 0x20) >> 0x20);
          auVar134[0xf] = 0;
          auVar128 = pshuflw(auVar134,auVar134,0x1b);
          auVar128 = pshufhw(auVar128,auVar128,0x1b);
          sVar6 = auVar128._0_2_;
          sVar8 = auVar128._2_2_;
          sVar10 = auVar128._4_2_;
          sVar12 = auVar128._6_2_;
          sVar14 = auVar128._8_2_;
          sVar16 = auVar128._10_2_;
          sVar18 = auVar128._12_2_;
          sVar20 = auVar128._14_2_;
          sVar22 = auVar139._0_2_;
          sVar24 = auVar139._2_2_;
          sVar26 = auVar139._4_2_;
          sVar28 = auVar139._6_2_;
          sVar30 = auVar139._8_2_;
          sVar32 = auVar139._10_2_;
          sVar34 = auVar139._12_2_;
          sVar36 = auVar139._14_2_;
          pcVar113[-0x30] = (0 < sVar5) * (sVar5 < 0x100) * auVar136[0] - (0xff < sVar5);
          pcVar113[-0x2f] = (0 < sVar7) * (sVar7 < 0x100) * auVar136[2] - (0xff < sVar7);
          pcVar113[-0x2e] = (0 < sVar9) * (sVar9 < 0x100) * auVar136[4] - (0xff < sVar9);
          pcVar113[-0x2d] = (0 < sVar11) * (sVar11 < 0x100) * auVar136[6] - (0xff < sVar11);
          pcVar113[-0x2c] = (0 < sVar13) * (sVar13 < 0x100) * auVar136[8] - (0xff < sVar13);
          pcVar113[-0x2b] = (0 < sVar15) * (sVar15 < 0x100) * auVar136[10] - (0xff < sVar15);
          pcVar113[-0x2a] = (0 < sVar17) * (sVar17 < 0x100) * auVar136[0xc] - (0xff < sVar17);
          pcVar113[-0x29] = (0 < sVar19) * (sVar19 < 0x100) * auVar136[0xe] - (0xff < sVar19);
          pcVar113[-0x28] = (0 < sVar21) * (sVar21 < 0x100) * auVar137[0] - (0xff < sVar21);
          pcVar113[-0x27] = (0 < sVar23) * (sVar23 < 0x100) * auVar137[2] - (0xff < sVar23);
          pcVar113[-0x26] = (0 < sVar25) * (sVar25 < 0x100) * auVar137[4] - (0xff < sVar25);
          pcVar113[-0x25] = (0 < sVar27) * (sVar27 < 0x100) * auVar137[6] - (0xff < sVar27);
          pcVar113[-0x24] = (0 < sVar29) * (sVar29 < 0x100) * auVar137[8] - (0xff < sVar29);
          pcVar113[-0x23] = (0 < sVar31) * (sVar31 < 0x100) * auVar137[10] - (0xff < sVar31);
          pcVar113[-0x22] = (0 < sVar33) * (sVar33 < 0x100) * auVar137[0xc] - (0xff < sVar33);
          pcVar113[-0x21] = (0 < sVar35) * (sVar35 < 0x100) * auVar137[0xe] - (0xff < sVar35);
          pcVar113[-0x20] = (0 < sVar6) * (sVar6 < 0x100) * auVar128[0] - (0xff < sVar6);
          pcVar113[-0x1f] = (0 < sVar8) * (sVar8 < 0x100) * auVar128[2] - (0xff < sVar8);
          pcVar113[-0x1e] = (0 < sVar10) * (sVar10 < 0x100) * auVar128[4] - (0xff < sVar10);
          pcVar113[-0x1d] = (0 < sVar12) * (sVar12 < 0x100) * auVar128[6] - (0xff < sVar12);
          pcVar113[-0x1c] = (0 < sVar14) * (sVar14 < 0x100) * auVar128[8] - (0xff < sVar14);
          pcVar113[-0x1b] = (0 < sVar16) * (sVar16 < 0x100) * auVar128[10] - (0xff < sVar16);
          pcVar113[-0x1a] = (0 < sVar18) * (sVar18 < 0x100) * auVar128[0xc] - (0xff < sVar18);
          pcVar113[-0x19] = (0 < sVar20) * (sVar20 < 0x100) * auVar128[0xe] - (0xff < sVar20);
          pcVar113[-0x18] = (0 < sVar22) * (sVar22 < 0x100) * auVar139[0] - (0xff < sVar22);
          pcVar113[-0x17] = (0 < sVar24) * (sVar24 < 0x100) * auVar139[2] - (0xff < sVar24);
          pcVar113[-0x16] = (0 < sVar26) * (sVar26 < 0x100) * auVar139[4] - (0xff < sVar26);
          pcVar113[-0x15] = (0 < sVar28) * (sVar28 < 0x100) * auVar139[6] - (0xff < sVar28);
          pcVar113[-0x14] = (0 < sVar30) * (sVar30 < 0x100) * auVar139[8] - (0xff < sVar30);
          pcVar113[-0x13] = (0 < sVar32) * (sVar32 < 0x100) * auVar139[10] - (0xff < sVar32);
          pcVar113[-0x12] = (0 < sVar34) * (sVar34 < 0x100) * auVar139[0xc] - (0xff < sVar34);
          pcVar113[-0x11] = (0 < sVar36) * (sVar36 < 0x100) * auVar139[0xe] - (0xff < sVar36);
          auVar128 = *(undefined1 (*) [16])(local_f8 + lVar110 + uVar106 + -2);
          auVar134 = *(undefined1 (*) [16])(auStack_ea + lVar110 + uVar106);
          auVar39[0xd] = 0;
          auVar39._0_13_ = auVar134._0_13_;
          auVar39[0xe] = auVar134[7];
          auVar45[0xc] = auVar134[6];
          auVar45._0_12_ = auVar134._0_12_;
          auVar45._13_2_ = auVar39._13_2_;
          auVar51[0xb] = 0;
          auVar51._0_11_ = auVar134._0_11_;
          auVar51._12_3_ = auVar45._12_3_;
          auVar57[10] = auVar134[5];
          auVar57._0_10_ = auVar134._0_10_;
          auVar57._11_4_ = auVar51._11_4_;
          auVar63[9] = 0;
          auVar63._0_9_ = auVar134._0_9_;
          auVar63._10_5_ = auVar57._10_5_;
          auVar69[8] = auVar134[4];
          auVar69._0_8_ = auVar134._0_8_;
          auVar69._9_6_ = auVar63._9_6_;
          auVar140[7] = 0;
          auVar140._0_7_ = auVar69._8_7_;
          auVar83._7_8_ = 0;
          auVar83._0_7_ = auVar69._8_7_;
          auVar95._1_8_ = SUB158(auVar83 << 0x40,7);
          auVar95[0] = auVar134[3];
          auVar95._9_6_ = 0;
          auVar84._1_10_ = SUB1510(auVar95 << 0x30,5);
          auVar84[0] = auVar134[2];
          auVar96._11_4_ = 0;
          auVar96._0_11_ = auVar84;
          auVar75._3_12_ = SUB1512(auVar96 << 0x20,3);
          auVar75[2] = auVar134[1];
          auVar75[1] = 0;
          auVar75[0] = auVar134[0];
          auVar140._8_4_ = auVar75._0_4_;
          auVar140._12_4_ = auVar84._0_4_;
          auVar136 = pshuflw(auVar140,auVar140,0x1b);
          auVar139 = pshufhw(auVar136,auVar136,0x1b);
          auVar137[8] = auVar134[8];
          auVar137[9] = 0;
          auVar137[10] = auVar134[9];
          auVar131._0_10_ = (unkuint10)auVar134[0xc] << 0x40;
          auVar131[10] = auVar134[0xd];
          auVar133[0xb] = 0;
          auVar133._0_11_ = auVar131;
          auVar133[0xc] = auVar134[0xe];
          auVar133[0xd] = 0;
          auVar133[0xe] = auVar134[0xf];
          auVar137[3] = 0;
          auVar137._0_3_ = auVar131._8_3_;
          auVar137._4_3_ = auVar133._12_3_;
          auVar137[7] = 0;
          auVar137[0xb] = 0;
          auVar137._12_3_ = (int3)(CONCAT16(auVar134[0xb],(uint6)auVar134[10] << 0x20) >> 0x20);
          auVar137[0xf] = 0;
          auVar134 = pshuflw(auVar137,auVar137,0x1b);
          auVar134 = pshufhw(auVar134,auVar134,0x1b);
          sVar5 = auVar134._0_2_;
          sVar7 = auVar134._2_2_;
          sVar9 = auVar134._4_2_;
          sVar11 = auVar134._6_2_;
          sVar13 = auVar134._8_2_;
          sVar15 = auVar134._10_2_;
          sVar17 = auVar134._12_2_;
          sVar19 = auVar134._14_2_;
          sVar21 = auVar139._0_2_;
          sVar23 = auVar139._2_2_;
          sVar25 = auVar139._4_2_;
          sVar27 = auVar139._6_2_;
          sVar29 = auVar139._8_2_;
          sVar31 = auVar139._10_2_;
          sVar33 = auVar139._12_2_;
          sVar35 = auVar139._14_2_;
          auVar40[0xd] = 0;
          auVar40._0_13_ = auVar128._0_13_;
          auVar40[0xe] = auVar128[7];
          auVar46[0xc] = auVar128[6];
          auVar46._0_12_ = auVar128._0_12_;
          auVar46._13_2_ = auVar40._13_2_;
          auVar52[0xb] = 0;
          auVar52._0_11_ = auVar128._0_11_;
          auVar52._12_3_ = auVar46._12_3_;
          auVar58[10] = auVar128[5];
          auVar58._0_10_ = auVar128._0_10_;
          auVar58._11_4_ = auVar52._11_4_;
          auVar64[9] = 0;
          auVar64._0_9_ = auVar128._0_9_;
          auVar64._10_5_ = auVar58._10_5_;
          auVar70[8] = auVar128[4];
          auVar70._0_8_ = auVar128._0_8_;
          auVar70._9_6_ = auVar64._9_6_;
          auVar141[7] = 0;
          auVar141._0_7_ = auVar70._8_7_;
          auVar85._7_8_ = 0;
          auVar85._0_7_ = auVar70._8_7_;
          auVar97._1_8_ = SUB158(auVar85 << 0x40,7);
          auVar97[0] = auVar128[3];
          auVar97._9_6_ = 0;
          auVar86._1_10_ = SUB1510(auVar97 << 0x30,5);
          auVar86[0] = auVar128[2];
          auVar98._11_4_ = 0;
          auVar98._0_11_ = auVar86;
          auVar76._3_12_ = SUB1512(auVar98 << 0x20,3);
          auVar76[2] = auVar128[1];
          auVar76[1] = 0;
          auVar76[0] = auVar128[0];
          auVar141._8_4_ = auVar76._0_4_;
          auVar141._12_4_ = auVar86._0_4_;
          auVar136 = pshuflw(auVar141,auVar141,0x1b);
          auVar137 = pshufhw(auVar136,auVar136,0x1b);
          auVar136[8] = auVar128[8];
          auVar136[9] = 0;
          auVar136[10] = auVar128[9];
          auVar123._0_10_ = (unkuint10)auVar128[0xc] << 0x40;
          auVar123[10] = auVar128[0xd];
          auVar126[0xb] = 0;
          auVar126._0_11_ = auVar123;
          auVar126[0xc] = auVar128[0xe];
          auVar126[0xd] = 0;
          auVar126[0xe] = auVar128[0xf];
          auVar136[3] = 0;
          auVar136._0_3_ = auVar123._8_3_;
          auVar136._4_3_ = auVar126._12_3_;
          auVar136[7] = 0;
          auVar136[0xb] = 0;
          auVar136._12_3_ = (int3)(CONCAT16(auVar128[0xb],(uint6)auVar128[10] << 0x20) >> 0x20);
          auVar136[0xf] = 0;
          auVar128 = pshuflw(auVar136,auVar136,0x1b);
          auVar128 = pshufhw(auVar128,auVar128,0x1b);
          sVar6 = auVar128._0_2_;
          sVar8 = auVar128._2_2_;
          sVar10 = auVar128._4_2_;
          sVar12 = auVar128._6_2_;
          sVar14 = auVar128._8_2_;
          sVar16 = auVar128._10_2_;
          sVar18 = auVar128._12_2_;
          sVar20 = auVar128._14_2_;
          sVar22 = auVar137._0_2_;
          sVar24 = auVar137._2_2_;
          sVar26 = auVar137._4_2_;
          sVar28 = auVar137._6_2_;
          sVar30 = auVar137._8_2_;
          sVar32 = auVar137._10_2_;
          sVar34 = auVar137._12_2_;
          sVar36 = auVar137._14_2_;
          pcVar113[-0x10] = (0 < sVar5) * (sVar5 < 0x100) * auVar134[0] - (0xff < sVar5);
          pcVar113[-0xf] = (0 < sVar7) * (sVar7 < 0x100) * auVar134[2] - (0xff < sVar7);
          pcVar113[-0xe] = (0 < sVar9) * (sVar9 < 0x100) * auVar134[4] - (0xff < sVar9);
          pcVar113[-0xd] = (0 < sVar11) * (sVar11 < 0x100) * auVar134[6] - (0xff < sVar11);
          pcVar113[-0xc] = (0 < sVar13) * (sVar13 < 0x100) * auVar134[8] - (0xff < sVar13);
          pcVar113[-0xb] = (0 < sVar15) * (sVar15 < 0x100) * auVar134[10] - (0xff < sVar15);
          pcVar113[-10] = (0 < sVar17) * (sVar17 < 0x100) * auVar134[0xc] - (0xff < sVar17);
          pcVar113[-9] = (0 < sVar19) * (sVar19 < 0x100) * auVar134[0xe] - (0xff < sVar19);
          pcVar113[-8] = (0 < sVar21) * (sVar21 < 0x100) * auVar139[0] - (0xff < sVar21);
          pcVar113[-7] = (0 < sVar23) * (sVar23 < 0x100) * auVar139[2] - (0xff < sVar23);
          pcVar113[-6] = (0 < sVar25) * (sVar25 < 0x100) * auVar139[4] - (0xff < sVar25);
          pcVar113[-5] = (0 < sVar27) * (sVar27 < 0x100) * auVar139[6] - (0xff < sVar27);
          pcVar113[-4] = (0 < sVar29) * (sVar29 < 0x100) * auVar139[8] - (0xff < sVar29);
          pcVar113[-3] = (0 < sVar31) * (sVar31 < 0x100) * auVar139[10] - (0xff < sVar31);
          pcVar113[-2] = (0 < sVar33) * (sVar33 < 0x100) * auVar139[0xc] - (0xff < sVar33);
          pcVar113[-1] = (0 < sVar35) * (sVar35 < 0x100) * auVar139[0xe] - (0xff < sVar35);
          *pcVar113 = (0 < sVar6) * (sVar6 < 0x100) * auVar128[0] - (0xff < sVar6);
          pcVar113[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar128[2] - (0xff < sVar8);
          pcVar113[2] = (0 < sVar10) * (sVar10 < 0x100) * auVar128[4] - (0xff < sVar10);
          pcVar113[3] = (0 < sVar12) * (sVar12 < 0x100) * auVar128[6] - (0xff < sVar12);
          pcVar113[4] = (0 < sVar14) * (sVar14 < 0x100) * auVar128[8] - (0xff < sVar14);
          pcVar113[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar128[10] - (0xff < sVar16);
          pcVar113[6] = (0 < sVar18) * (sVar18 < 0x100) * auVar128[0xc] - (0xff < sVar18);
          pcVar113[7] = (0 < sVar20) * (sVar20 < 0x100) * auVar128[0xe] - (0xff < sVar20);
          pcVar113[8] = (0 < sVar22) * (sVar22 < 0x100) * auVar137[0] - (0xff < sVar22);
          pcVar113[9] = (0 < sVar24) * (sVar24 < 0x100) * auVar137[2] - (0xff < sVar24);
          pcVar113[10] = (0 < sVar26) * (sVar26 < 0x100) * auVar137[4] - (0xff < sVar26);
          pcVar113[0xb] = (0 < sVar28) * (sVar28 < 0x100) * auVar137[6] - (0xff < sVar28);
          pcVar113[0xc] = (0 < sVar30) * (sVar30 < 0x100) * auVar137[8] - (0xff < sVar30);
          pcVar113[0xd] = (0 < sVar32) * (sVar32 < 0x100) * auVar137[10] - (0xff < sVar32);
          pcVar113[0xe] = (0 < sVar34) * (sVar34 < 0x100) * auVar137[0xc] - (0xff < sVar34);
          pcVar113[0xf] = (0 < sVar36) * (sVar36 < 0x100) * auVar137[0xe] - (0xff < sVar36);
          pcVar113 = pcVar113 + 0x40;
          lVar110 = lVar110 + -0x40;
          lVar109 = lVar109 + 2;
        } while (lVar109 != 0);
        uVar111 = -lVar110;
        if (uVar107 != 0) goto LAB_1424f0e20;
      }
      param_2 = param_2 + uVar114;
      if (uVar114 == uVar106) goto LAB_1424f0ec1;
      uVar106 = uVar106 - uVar114;
    }
    do {
      *param_2 = acStack_bb[uVar106];
      param_2 = param_2 + 1;
      uVar107 = uVar106 - 1;
      bVar117 = 0 < (longlong)uVar106;
      uVar106 = uVar107;
    } while (uVar107 != 0 && bVar117);
  }
LAB_1424f0ec1:
  *param_2 = '\0';
LAB_1424f0ec4:
                    /* WARNING: Subroutine does not return */
  uStack_100 = &UNK_1424f0ed1;
  FUN_144d8e3a0(local_b0 ^ (ulonglong)local_f8);
}



// FUNCTION 1424f0f40 FUN_1424f0f40 body=672 status=ok
// SIG undefined FUN_1424f0f40(void)

void FUN_1424f0f40(undefined8 param_1,char *param_2,ulonglong param_3,ulonglong param_4)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [11];
  undefined1 auVar52 [15];
  undefined1 auVar53 [11];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  ulonglong uVar58;
  uint uVar59;
  ulonglong uVar60;
  char *pcVar61;
  uint uVar62;
  uint uVar63;
  int iVar64;
  uint uVar65;
  uint uVar66;
  longlong lVar67;
  char *pcVar68;
  uint uVar69;
  undefined1 auVar70 [11];
  undefined1 auVar72 [16];
  undefined1 auVar73 [11];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auStack_68 [7];
  undefined1 auStack_61 [16];
  undefined1 auStack_51 [15];
  char acStack_42 [10];
  ulonglong local_38;
  undefined1 auVar71 [15];
  undefined1 auVar74 [15];
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 < 0xd) {
    png_error(param_1,"ASCII conversion buffer too small");
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  iVar64 = (int)param_4;
  if (iVar64 < 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_4 = (ulonglong)(uint)-iVar64;
LAB_1424f0f7b:
    uVar69 = 0x10;
    uVar65 = 0;
    uVar60 = 0;
    uVar63 = 0x1c;
    do {
      uVar59 = uVar63;
      uVar66 = (uint)param_4;
      iVar64 = uVar66 + (int)((param_4 & 0xffffffff) / 10) * -10;
      uVar62 = (int)uVar60 + 1;
      uVar58 = (ulonglong)uVar62;
      uVar63 = uVar69;
      if (iVar64 != 0) {
        uVar63 = uVar62;
      }
      if (uVar69 != 0x10) {
        uVar63 = uVar69;
      }
      uVar69 = uVar63;
      acStack_42[uVar60] = (char)iVar64 + '0';
      uVar65 = uVar65 - 1;
      param_4 = (param_4 & 0xffffffff) / 10;
      uVar60 = uVar58;
      uVar63 = uVar59 + 1;
    } while (9 < uVar66);
    if (uVar65 != 0) {
      if (5 < uVar62) {
        uVar60 = (ulonglong)(-uVar65 - 6);
        pcVar68 = param_2;
        if (uVar60 + 1 < 0x20) {
LAB_1424f10fd:
          pcVar61 = acStack_42 + ((int)uVar58 - 1);
          do {
            *pcVar68 = *pcVar61;
            pcVar68 = pcVar68 + 1;
            uVar63 = (int)uVar58 - 1;
            uVar58 = (ulonglong)uVar63;
            pcVar61 = pcVar61 + -1;
          } while (5 < uVar63);
        }
        else {
          uVar63 = ~uVar65;
          if ((param_2 < acStack_42 + (ulonglong)uVar63 + 1) &&
             (acStack_42 + (uVar63 - uVar60) < param_2 + uVar60 + 1)) goto LAB_1424f10fd;
          uVar62 = 0x1b - uVar65 & 0x1f;
          lVar67 = (uVar60 + 1) - (ulonglong)uVar62;
          uVar58 = uVar58 - lVar67;
          pcVar68 = param_2 + lVar67;
          lVar67 = 0;
          do {
            auVar72 = *(undefined1 (*) [16])(auStack_61 + uVar63);
            auVar75 = *(undefined1 (*) [16])(auStack_51 + uVar63);
            auVar34[0xd] = 0;
            auVar34._0_13_ = auVar75._0_13_;
            auVar34[0xe] = auVar75[7];
            auVar36[0xc] = auVar75[6];
            auVar36._0_12_ = auVar75._0_12_;
            auVar36._13_2_ = auVar34._13_2_;
            auVar38[0xb] = 0;
            auVar38._0_11_ = auVar75._0_11_;
            auVar38._12_3_ = auVar36._12_3_;
            auVar40[10] = auVar75[5];
            auVar40._0_10_ = auVar75._0_10_;
            auVar40._11_4_ = auVar38._11_4_;
            auVar42[9] = 0;
            auVar42._0_9_ = auVar75._0_9_;
            auVar42._10_5_ = auVar40._10_5_;
            auVar44[8] = auVar75[4];
            auVar44._0_8_ = auVar75._0_8_;
            auVar44._9_6_ = auVar42._9_6_;
            auVar77[7] = 0;
            auVar77._0_7_ = auVar44._8_7_;
            auVar50._7_8_ = 0;
            auVar50._0_7_ = auVar44._8_7_;
            auVar54._1_8_ = SUB158(auVar50 << 0x40,7);
            auVar54[0] = auVar75[3];
            auVar54._9_6_ = 0;
            auVar51._1_10_ = SUB1510(auVar54 << 0x30,5);
            auVar51[0] = auVar75[2];
            auVar55._11_4_ = 0;
            auVar55._0_11_ = auVar51;
            auVar46[2] = auVar75[1];
            auVar46._0_2_ = auVar75._0_2_;
            auVar46._3_12_ = SUB1512(auVar55 << 0x20,3);
            auVar48._2_13_ = auVar46._2_13_;
            auVar48._0_2_ = auVar75._0_2_ & 0xff;
            auVar77._8_4_ = auVar48._0_4_;
            auVar77._12_4_ = auVar51._0_4_;
            auVar76 = pshuflw(auVar77,auVar77,0x1b);
            auVar77 = pshufhw(auVar76,auVar76,0x1b);
            auVar76[8] = auVar75[8];
            auVar76[9] = 0;
            auVar76[10] = auVar75[9];
            auVar73._0_10_ = (unkuint10)auVar75[0xc] << 0x40;
            auVar73[10] = auVar75[0xd];
            auVar74[0xb] = 0;
            auVar74._0_11_ = auVar73;
            auVar74[0xc] = auVar75[0xe];
            auVar74[0xd] = 0;
            auVar74[0xe] = auVar75[0xf];
            auVar76[3] = 0;
            auVar76._0_3_ = auVar73._8_3_;
            auVar76._4_3_ = auVar74._12_3_;
            auVar76[7] = 0;
            auVar76[0xb] = 0;
            auVar76._12_3_ = (int3)(CONCAT16(auVar75[0xb],(uint6)auVar75[10] << 0x20) >> 0x20);
            auVar76[0xf] = 0;
            auVar75 = pshuflw(auVar76,auVar76,0x1b);
            auVar76 = pshufhw(auVar75,auVar75,0x1b);
            sVar2 = auVar76._0_2_;
            sVar4 = auVar76._2_2_;
            sVar6 = auVar76._4_2_;
            sVar8 = auVar76._6_2_;
            sVar10 = auVar76._8_2_;
            sVar12 = auVar76._10_2_;
            sVar14 = auVar76._12_2_;
            sVar16 = auVar76._14_2_;
            sVar18 = auVar77._0_2_;
            sVar20 = auVar77._2_2_;
            sVar22 = auVar77._4_2_;
            sVar24 = auVar77._6_2_;
            sVar26 = auVar77._8_2_;
            sVar28 = auVar77._10_2_;
            sVar30 = auVar77._12_2_;
            sVar32 = auVar77._14_2_;
            auVar35[0xd] = 0;
            auVar35._0_13_ = auVar72._0_13_;
            auVar35[0xe] = auVar72[7];
            auVar37[0xc] = auVar72[6];
            auVar37._0_12_ = auVar72._0_12_;
            auVar37._13_2_ = auVar35._13_2_;
            auVar39[0xb] = 0;
            auVar39._0_11_ = auVar72._0_11_;
            auVar39._12_3_ = auVar37._12_3_;
            auVar41[10] = auVar72[5];
            auVar41._0_10_ = auVar72._0_10_;
            auVar41._11_4_ = auVar39._11_4_;
            auVar43[9] = 0;
            auVar43._0_9_ = auVar72._0_9_;
            auVar43._10_5_ = auVar41._10_5_;
            auVar45[8] = auVar72[4];
            auVar45._0_8_ = auVar72._0_8_;
            auVar45._9_6_ = auVar43._9_6_;
            auVar78[7] = 0;
            auVar78._0_7_ = auVar45._8_7_;
            auVar52._7_8_ = 0;
            auVar52._0_7_ = auVar45._8_7_;
            auVar56._1_8_ = SUB158(auVar52 << 0x40,7);
            auVar56[0] = auVar72[3];
            auVar56._9_6_ = 0;
            auVar53._1_10_ = SUB1510(auVar56 << 0x30,5);
            auVar53[0] = auVar72[2];
            auVar57._11_4_ = 0;
            auVar57._0_11_ = auVar53;
            auVar47[2] = auVar72[1];
            auVar47._0_2_ = auVar72._0_2_;
            auVar47._3_12_ = SUB1512(auVar57 << 0x20,3);
            auVar49._2_13_ = auVar47._2_13_;
            auVar49._0_2_ = auVar72._0_2_ & 0xff;
            auVar78._8_4_ = auVar49._0_4_;
            auVar78._12_4_ = auVar53._0_4_;
            auVar75 = pshuflw(auVar78,auVar78,0x1b);
            auVar78 = pshufhw(auVar75,auVar75,0x1b);
            auVar75[8] = auVar72[8];
            auVar75[9] = 0;
            auVar75[10] = auVar72[9];
            auVar70._0_10_ = (unkuint10)auVar72[0xc] << 0x40;
            auVar70[10] = auVar72[0xd];
            auVar71[0xb] = 0;
            auVar71._0_11_ = auVar70;
            auVar71[0xc] = auVar72[0xe];
            auVar71[0xd] = 0;
            auVar71[0xe] = auVar72[0xf];
            auVar75[3] = 0;
            auVar75._0_3_ = auVar70._8_3_;
            auVar75._4_3_ = auVar71._12_3_;
            auVar75[7] = 0;
            auVar75[0xb] = 0;
            auVar75._12_3_ = (int3)(CONCAT16(auVar72[0xb],(uint6)auVar72[10] << 0x20) >> 0x20);
            auVar75[0xf] = 0;
            auVar72 = pshuflw(auVar75,auVar75,0x1b);
            auVar72 = pshufhw(auVar72,auVar72,0x1b);
            sVar3 = auVar72._0_2_;
            sVar5 = auVar72._2_2_;
            sVar7 = auVar72._4_2_;
            sVar9 = auVar72._6_2_;
            sVar11 = auVar72._8_2_;
            sVar13 = auVar72._10_2_;
            sVar15 = auVar72._12_2_;
            sVar17 = auVar72._14_2_;
            sVar19 = auVar78._0_2_;
            sVar21 = auVar78._2_2_;
            sVar23 = auVar78._4_2_;
            sVar25 = auVar78._6_2_;
            sVar27 = auVar78._8_2_;
            sVar29 = auVar78._10_2_;
            sVar31 = auVar78._12_2_;
            sVar33 = auVar78._14_2_;
            pcVar61 = param_2 + lVar67;
            *pcVar61 = (0 < sVar2) * (sVar2 < 0x100) * auVar76[0] - (0xff < sVar2);
            pcVar61[1] = (0 < sVar4) * (sVar4 < 0x100) * auVar76[2] - (0xff < sVar4);
            pcVar61[2] = (0 < sVar6) * (sVar6 < 0x100) * auVar76[4] - (0xff < sVar6);
            pcVar61[3] = (0 < sVar8) * (sVar8 < 0x100) * auVar76[6] - (0xff < sVar8);
            pcVar61[4] = (0 < sVar10) * (sVar10 < 0x100) * auVar76[8] - (0xff < sVar10);
            pcVar61[5] = (0 < sVar12) * (sVar12 < 0x100) * auVar76[10] - (0xff < sVar12);
            pcVar61[6] = (0 < sVar14) * (sVar14 < 0x100) * auVar76[0xc] - (0xff < sVar14);
            pcVar61[7] = (0 < sVar16) * (sVar16 < 0x100) * auVar76[0xe] - (0xff < sVar16);
            pcVar61[8] = (0 < sVar18) * (sVar18 < 0x100) * auVar77[0] - (0xff < sVar18);
            pcVar61[9] = (0 < sVar20) * (sVar20 < 0x100) * auVar77[2] - (0xff < sVar20);
            pcVar61[10] = (0 < sVar22) * (sVar22 < 0x100) * auVar77[4] - (0xff < sVar22);
            pcVar61[0xb] = (0 < sVar24) * (sVar24 < 0x100) * auVar77[6] - (0xff < sVar24);
            pcVar61[0xc] = (0 < sVar26) * (sVar26 < 0x100) * auVar77[8] - (0xff < sVar26);
            pcVar61[0xd] = (0 < sVar28) * (sVar28 < 0x100) * auVar77[10] - (0xff < sVar28);
            pcVar61[0xe] = (0 < sVar30) * (sVar30 < 0x100) * auVar77[0xc] - (0xff < sVar30);
            pcVar61[0xf] = (0 < sVar32) * (sVar32 < 0x100) * auVar77[0xe] - (0xff < sVar32);
            pcVar61 = param_2 + lVar67 + 0x10;
            *pcVar61 = (0 < sVar3) * (sVar3 < 0x100) * auVar72[0] - (0xff < sVar3);
            pcVar61[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar72[2] - (0xff < sVar5);
            pcVar61[2] = (0 < sVar7) * (sVar7 < 0x100) * auVar72[4] - (0xff < sVar7);
            pcVar61[3] = (0 < sVar9) * (sVar9 < 0x100) * auVar72[6] - (0xff < sVar9);
            pcVar61[4] = (0 < sVar11) * (sVar11 < 0x100) * auVar72[8] - (0xff < sVar11);
            pcVar61[5] = (0 < sVar13) * (sVar13 < 0x100) * auVar72[10] - (0xff < sVar13);
            pcVar61[6] = (0 < sVar15) * (sVar15 < 0x100) * auVar72[0xc] - (0xff < sVar15);
            pcVar61[7] = (0 < sVar17) * (sVar17 < 0x100) * auVar72[0xe] - (0xff < sVar17);
            pcVar61[8] = (0 < sVar19) * (sVar19 < 0x100) * auVar78[0] - (0xff < sVar19);
            pcVar61[9] = (0 < sVar21) * (sVar21 < 0x100) * auVar78[2] - (0xff < sVar21);
            pcVar61[10] = (0 < sVar23) * (sVar23 < 0x100) * auVar78[4] - (0xff < sVar23);
            pcVar61[0xb] = (0 < sVar25) * (sVar25 < 0x100) * auVar78[6] - (0xff < sVar25);
            pcVar61[0xc] = (0 < sVar27) * (sVar27 < 0x100) * auVar78[8] - (0xff < sVar27);
            pcVar61[0xd] = (0 < sVar29) * (sVar29 < 0x100) * auVar78[10] - (0xff < sVar29);
            pcVar61[0xe] = (0 < sVar31) * (sVar31 < 0x100) * auVar78[0xc] - (0xff < sVar31);
            pcVar61[0xf] = (0 < sVar33) * (sVar33 < 0x100) * auVar78[0xe] - (0xff < sVar33);
            lVar67 = lVar67 + 0x20;
            uVar63 = uVar63 - 0x20;
          } while (((ulonglong)(-uVar65 - 6) + 1) - (ulonglong)(uVar59 & 0x1f) != lVar67);
          if (uVar62 != 0) goto LAB_1424f10fd;
        }
        uVar58 = 5;
        param_2 = pcVar68;
      }
      if (uVar69 < 6) {
        *param_2 = '.';
        pcVar68 = param_2 + 1;
        uVar63 = (uint)uVar58;
        if (4 < uVar63) goto LAB_1424f11bd;
        memset(pcVar68,(int)CONCAT71((int7)((ulonglong)pcVar68 >> 8),0x30),
               (ulonglong)(4 - uVar63) + 1);
        if (uVar63 < 4) {
          if (uVar63 == 3) {
            param_2 = param_2 + 3;
          }
          else if (uVar63 < 2) {
            pcVar68 = param_2 + 6;
            param_2 = param_2 + 5;
            if (uVar63 == 0) {
              param_2 = pcVar68;
            }
          }
          else {
            param_2 = param_2 + 4;
          }
        }
        else {
          param_2 = param_2 + 2;
        }
        while (uVar69 <= uVar63) {
          uVar58 = (ulonglong)((int)uVar58 - 1);
          *param_2 = acStack_42[uVar58];
          pcVar68 = param_2 + 1;
LAB_1424f11bd:
          param_2 = pcVar68;
          uVar63 = (uint)uVar58;
        }
      }
      goto LAB_1424f11c2;
    }
  }
  else if (iVar64 != 0) goto LAB_1424f0f7b;
  *param_2 = '0';
  param_2 = param_2 + 1;
LAB_1424f11c2:
  *param_2 = '\0';
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1424f11f0 FUN_1424f11f0 body=85 status=ok
// SIG undefined FUN_1424f11f0(void)

int FUN_1424f11f0(undefined8 param_1,double param_2,undefined8 param_3)

{
  code *pcVar1;
  double dVar2;
  
  dVar2 = floor(param_2 * 100000.0 + 0.5);
  if ((dVar2 <= 2147483647.0) && (-2147483648.0 <= dVar2)) {
    return (int)dVar2;
  }
  FUN_1424f6550(param_1,param_3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424f1250 FUN_1424f1250 body=112 status=ok
// SIG undefined FUN_1424f1250(void)

undefined8 FUN_1424f1250(int *param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0;
  if (param_4 != 0) {
    if ((param_2 == 0) || (param_3 == 0)) {
      *param_1 = 0;
    }
    else {
      dVar2 = floor(((double)param_3 * (double)param_2) / (double)param_4 + 0.5);
      if (2147483647.0 < dVar2) {
        return 0;
      }
      if (dVar2 < -2147483648.0) {
        return 0;
      }
      *param_1 = (int)dVar2;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1424f12c0 FUN_1424f12c0 body=112 status=ok
// SIG undefined FUN_1424f12c0(void)

int FUN_1424f12c0(undefined8 param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  
  if (param_4 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    dVar1 = floor(((double)param_3 * (double)param_2) / (double)param_4 + 0.5);
    if ((dVar1 <= 2147483647.0) && (-2147483648.0 <= dVar1)) {
      return (int)dVar1;
    }
  }
  png_warning(param_1,"fixed point overflow ignored");
  return 0;
}



// FUNCTION 1424f1330 FUN_1424f1330 body=70 status=ok
// SIG undefined FUN_1424f1330(void)

int FUN_1424f1330(int param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = floor(10000000000.0 / (double)param_1 + 0.5);
  iVar1 = (int)dVar2;
  if (dVar2 < -2147483648.0) {
    iVar1 = 0;
  }
  if (2147483647.0 < dVar2) {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 1424f1380 FUN_1424f1380 body=78 status=ok
// SIG undefined FUN_1424f1380(void)

int FUN_1424f1380(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  
  dVar2 = floor((1e+15 / (double)param_1) / (double)param_2 + 0.5);
  iVar1 = (int)dVar2;
  if (dVar2 < -2147483648.0) {
    iVar1 = 0;
  }
  if (2147483647.0 < dVar2) {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 1424f13d0 FUN_1424f13d0 body=90 status=ok
// SIG undefined FUN_1424f13d0(void)

uint FUN_1424f13d0(uint param_1,int param_2)

{
  double dVar1;
  
  if (param_1 - 1 < 0xfe) {
    dVar1 = pow((double)param_1 / 255.0,(double)param_2 * 1e-05);
    dVar1 = floor(dVar1 * 255.0 + 0.5);
    param_1 = (uint)dVar1;
  }
  return param_1;
}



// FUNCTION 1424f1430 FUN_1424f1430 body=171 status=ok
// SIG undefined FUN_1424f1430(void)

uint FUN_1424f1430(longlong param_1,uint param_2,int param_3)

{
  double dVar1;
  
  if (*(char *)(param_1 + 0x25f) == '\b') {
    if (param_2 - 1 < 0xfe) {
      dVar1 = pow((double)param_2 / 255.0,(double)param_3 * 1e-05);
      dVar1 = floor(dVar1 * 255.0 + 0.5);
      param_2 = (uint)dVar1;
    }
    param_2 = param_2 & 0xff;
  }
  else if (param_2 - 1 < 0xfffe) {
    dVar1 = pow((double)param_2 / 65535.0,(double)param_3 * 1e-05);
    dVar1 = floor(dVar1 * 65535.0 + 0.5);
    param_2 = (uint)dVar1;
  }
  return param_2;
}



// FUNCTION 1424f14e0 FUN_1424f14e0 body=18 status=ok
// SIG undefined FUN_1424f14e0(void)

bool FUN_1424f14e0(int param_1)

{
  return 10000 < param_1 - 95000U;
}



// FUNCTION 1424f1500 FUN_1424f1500 body=2637 status=ok
// SIG undefined FUN_1424f1500(void)

void FUN_1424f1500(longlong param_1,int param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (param_2 < 9) {
    if (*(int *)(param_1 + 0x2a0) < 1) {
      iVar11 = 100000;
    }
    else {
      dVar1 = floor((1e+15 / (double)*(int *)(param_1 + 0x29c)) / (double)*(int *)(param_1 + 0x2a0)
                    + 0.5);
      iVar11 = (int)dVar1;
      if (dVar1 < -2147483648.0) {
        iVar11 = 0;
      }
      if (2147483647.0 < dVar1) {
        iVar11 = 0;
      }
    }
    puVar4 = (undefined8 *)png_malloc(param_1,0x100);
    *(undefined8 **)(param_1 + 0x2a8) = puVar4;
    if (iVar11 - 95000U < 0x2711) {
      *puVar4 = 0x706050403020100;
      puVar4[1] = 0xf0e0d0c0b0a0908;
      puVar4[2] = 0x1716151413121110;
      puVar4[3] = 0x1f1e1d1c1b1a1918;
      puVar4[4] = 0x2726252423222120;
      puVar4[5] = 0x2f2e2d2c2b2a2928;
      puVar4[6] = 0x3736353433323130;
      puVar4[7] = 0x3f3e3d3c3b3a3938;
      puVar4[8] = 0x4746454443424140;
      puVar4[9] = 0x4f4e4d4c4b4a4948;
      puVar4[10] = 0x5756555453525150;
      puVar4[0xb] = 0x5f5e5d5c5b5a5958;
      puVar4[0xc] = 0x6766656463626160;
      puVar4[0xd] = 0x6f6e6d6c6b6a6968;
      puVar4[0xe] = 0x7776757473727170;
      puVar4[0xf] = 0x7f7e7d7c7b7a7978;
      puVar4[0x10] = 0x8786858483828180;
      puVar4[0x11] = 0x8f8e8d8c8b8a8988;
      puVar4[0x12] = 0x9796959493929190;
      puVar4[0x13] = 0x9f9e9d9c9b9a9998;
      puVar4[0x14] = 0xa7a6a5a4a3a2a1a0;
      puVar4[0x15] = 0xafaeadacabaaa9a8;
      puVar4[0x16] = 0xb7b6b5b4b3b2b1b0;
      puVar4[0x17] = 0xbfbebdbcbbbab9b8;
      puVar4[0x18] = 0xc7c6c5c4c3c2c1c0;
      puVar4[0x19] = 0xcfcecdcccbcac9c8;
      puVar4[0x1a] = 0xd7d6d5d4d3d2d1d0;
      puVar4[0x1b] = 0xdfdedddcdbdad9d8;
      puVar4[0x1c] = 0xe7e6e5e4e3e2e1e0;
      puVar4[0x1d] = 0xefeeedecebeae9e8;
      puVar4[0x1e] = 0xf7f6f5f4f3f2f1f0;
      puVar4[0x1f] = 0xfffefdfcfbfaf9f8;
      uVar14 = *(uint *)(param_1 + 0x15c);
    }
    else {
      uVar13 = 0;
      do {
        iVar3 = (int)uVar13;
        if (iVar3 - 1U < 0xfe) {
          dVar1 = pow((double)(uVar13 & 0xffffffff) / 255.0,(double)iVar11 * 1e-05);
          dVar1 = floor(dVar1 * 255.0 + 0.5);
          iVar3 = (int)dVar1;
        }
        *(char *)((longlong)puVar4 + uVar13) = (char)iVar3;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x100);
      uVar14 = *(uint *)(param_1 + 0x15c);
    }
    if ((uVar14 & 0x600080) != 0) {
      dVar1 = floor(10000000000.0 / (double)*(int *)(param_1 + 0x29c) + 0.5);
      iVar11 = (int)dVar1;
      if (dVar1 < -2147483648.0) {
        iVar11 = 0;
      }
      if (2147483647.0 < dVar1) {
        iVar11 = 0;
      }
      puVar4 = (undefined8 *)png_malloc(param_1,0x100);
      *(undefined8 **)(param_1 + 0x2b8) = puVar4;
      if (iVar11 - 95000U < 0x2711) {
        *puVar4 = 0x706050403020100;
        puVar4[1] = 0xf0e0d0c0b0a0908;
        puVar4[2] = 0x1716151413121110;
        puVar4[3] = 0x1f1e1d1c1b1a1918;
        puVar4[4] = 0x2726252423222120;
        puVar4[5] = 0x2f2e2d2c2b2a2928;
        puVar4[6] = 0x3736353433323130;
        puVar4[7] = 0x3f3e3d3c3b3a3938;
        puVar4[8] = 0x4746454443424140;
        puVar4[9] = 0x4f4e4d4c4b4a4948;
        puVar4[10] = 0x5756555453525150;
        puVar4[0xb] = 0x5f5e5d5c5b5a5958;
        puVar4[0xc] = 0x6766656463626160;
        puVar4[0xd] = 0x6f6e6d6c6b6a6968;
        puVar4[0xe] = 0x7776757473727170;
        puVar4[0xf] = 0x7f7e7d7c7b7a7978;
        puVar4[0x10] = 0x8786858483828180;
        puVar4[0x11] = 0x8f8e8d8c8b8a8988;
        puVar4[0x12] = 0x9796959493929190;
        puVar4[0x13] = 0x9f9e9d9c9b9a9998;
        puVar4[0x14] = 0xa7a6a5a4a3a2a1a0;
        puVar4[0x15] = 0xafaeadacabaaa9a8;
        puVar4[0x16] = 0xb7b6b5b4b3b2b1b0;
        puVar4[0x17] = 0xbfbebdbcbbbab9b8;
        puVar4[0x18] = 0xc7c6c5c4c3c2c1c0;
        puVar4[0x19] = 0xcfcecdcccbcac9c8;
        puVar4[0x1a] = 0xd7d6d5d4d3d2d1d0;
        puVar4[0x1b] = 0xdfdedddcdbdad9d8;
        puVar4[0x1c] = 0xe7e6e5e4e3e2e1e0;
        puVar4[0x1d] = 0xefeeedecebeae9e8;
        *(undefined4 *)(puVar4 + 0x1e) = 0xf3f2f1f0;
        *(undefined4 *)((longlong)puVar4 + 0xf4) = 0xf7f6f5f4;
        *(undefined4 *)(puVar4 + 0x1f) = 0xfbfaf9f8;
        *(undefined4 *)((longlong)puVar4 + 0xfc) = 0xfffefdfc;
      }
      else {
        uVar13 = 0;
        do {
          iVar3 = (int)uVar13;
          if (iVar3 - 1U < 0xfe) {
            dVar1 = pow((double)(uVar13 & 0xffffffff) / 255.0,(double)iVar11 * 1e-05);
            dVar1 = floor(dVar1 * 255.0 + 0.5);
            iVar3 = (int)dVar1;
          }
          *(char *)((longlong)puVar4 + uVar13) = (char)iVar3;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x100);
      }
      if (*(int *)(param_1 + 0x2a0) < 1) {
        iVar11 = *(int *)(param_1 + 0x29c);
      }
      else {
        dVar1 = floor(10000000000.0 / (double)*(int *)(param_1 + 0x2a0) + 0.5);
        iVar11 = (int)dVar1;
        if (dVar1 < -2147483648.0) {
          iVar11 = 0;
        }
        if (2147483647.0 < dVar1) {
          iVar11 = 0;
        }
      }
      puVar4 = (undefined8 *)png_malloc(param_1,0x100);
      *(undefined8 **)(param_1 + 0x2b0) = puVar4;
      if (iVar11 - 95000U < 0x2711) {
        *puVar4 = 0x706050403020100;
        puVar4[1] = 0xf0e0d0c0b0a0908;
        puVar4[2] = 0x1716151413121110;
        puVar4[3] = 0x1f1e1d1c1b1a1918;
        puVar4[4] = 0x2726252423222120;
        puVar4[5] = 0x2f2e2d2c2b2a2928;
        puVar4[6] = 0x3736353433323130;
        puVar4[7] = 0x3f3e3d3c3b3a3938;
        puVar4[8] = 0x4746454443424140;
        puVar4[9] = 0x4f4e4d4c4b4a4948;
        puVar4[10] = 0x5756555453525150;
        puVar4[0xb] = 0x5f5e5d5c5b5a5958;
        puVar4[0xc] = 0x6766656463626160;
        puVar4[0xd] = 0x6f6e6d6c6b6a6968;
        puVar4[0xe] = 0x7776757473727170;
        puVar4[0xf] = 0x7f7e7d7c7b7a7978;
        puVar4[0x10] = 0x8786858483828180;
        puVar4[0x11] = 0x8f8e8d8c8b8a8988;
        puVar4[0x12] = 0x9796959493929190;
        puVar4[0x13] = 0x9f9e9d9c9b9a9998;
        puVar4[0x14] = 0xa7a6a5a4a3a2a1a0;
        puVar4[0x15] = 0xafaeadacabaaa9a8;
        puVar4[0x16] = 0xb7b6b5b4b3b2b1b0;
        puVar4[0x17] = 0xbfbebdbcbbbab9b8;
        puVar4[0x18] = 0xc7c6c5c4c3c2c1c0;
        puVar4[0x19] = 0xcfcecdcccbcac9c8;
        puVar4[0x1a] = 0xd7d6d5d4d3d2d1d0;
        puVar4[0x1b] = 0xdfdedddcdbdad9d8;
        puVar4[0x1c] = 0xe7e6e5e4e3e2e1e0;
        puVar4[0x1d] = 0xefeeedecebeae9e8;
        puVar4[0x1e] = 0xf7f6f5f4f3f2f1f0;
        puVar4[0x1f] = 0xfffefdfcfbfaf9f8;
      }
      else {
        uVar13 = 0;
        do {
          iVar3 = (int)uVar13;
          if (iVar3 - 1U < 0xfe) {
            dVar1 = pow((double)(uVar13 & 0xffffffff) / 255.0,(double)iVar11 * 1e-05);
            dVar1 = floor(dVar1 * 255.0 + 0.5);
            iVar3 = (int)dVar1;
          }
          *(char *)((longlong)puVar4 + uVar13) = (char)iVar3;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x100);
      }
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x25e) & 2) == 0) {
      bVar7 = *(byte *)(param_1 + 0x2db);
    }
    else {
      bVar9 = *(byte *)(param_1 + 0x2d9);
      if (*(byte *)(param_1 + 0x2d9) <= *(byte *)(param_1 + 0x2d8)) {
        bVar9 = *(byte *)(param_1 + 0x2d8);
      }
      bVar7 = *(byte *)(param_1 + 0x2da);
      if (*(byte *)(param_1 + 0x2da) <= bVar9) {
        bVar7 = bVar9;
      }
    }
    if ((byte)(bVar7 - 1) < 0xf) {
      bVar7 = 0x10 - bVar7;
    }
    else {
      bVar7 = 0;
    }
    bVar9 = 5;
    if (4 < bVar7) {
      bVar9 = bVar7;
    }
    iVar11 = *(int *)(param_1 + 0x2a0);
    if ((*(uint *)(param_1 + 0x15c) & 0x400) == 0) {
      bVar9 = bVar7;
    }
    if (7 < bVar9) {
      bVar9 = 8;
    }
    *(uint *)(param_1 + 0x298) = (uint)bVar9;
    if ((*(uint *)(param_1 + 0x15c) & 0x480) == 0) {
      if (iVar11 < 1) {
        iVar11 = 100000;
      }
      else {
        dVar1 = floor((1e+15 / (double)*(int *)(param_1 + 0x29c)) / (double)iVar11 + 0.5);
        iVar11 = (int)dVar1;
        if (dVar1 < -2147483648.0) {
          iVar11 = 0;
        }
        if (2147483647.0 < dVar1) {
          iVar11 = 0;
        }
      }
      FUN_1424f1f70(param_1,param_1 + 0x2c0,(uint)bVar9,iVar11);
      uVar14 = *(uint *)(param_1 + 0x15c);
    }
    else {
      if (iVar11 < 1) {
        uVar16 = 0;
        uVar17 = 0x3ff00000;
      }
      else {
        dVar1 = floor((double)iVar11 * (double)*(int *)(param_1 + 0x29c) * 1e-05 + 0.5);
        uVar13 = -(ulonglong)(dVar1 <= 2147483647.0) &
                 -(ulonglong)(-2147483648.0 <= dVar1) & (ulonglong)((double)(int)dVar1 * 1e-05);
        uVar16 = (undefined4)uVar13;
        uVar17 = (undefined4)(uVar13 >> 0x20);
      }
      bVar7 = 8 - bVar9;
      uVar14 = 1 << (bVar7 & 0x1f);
      lVar5 = png_calloc(param_1,(ulonglong)uVar14 * 8);
      *(longlong *)(param_1 + 0x2c0) = lVar5;
      uVar13 = 0;
      do {
        uVar6 = png_malloc(param_1,0x200);
        *(undefined8 *)(lVar5 + uVar13 * 8) = uVar6;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar14);
      uVar12 = 0xff >> (bVar9 & 0x1f);
      iVar11 = 0;
      uVar10 = 0;
      do {
        uVar8 = iVar11 * 0x101 & 0xffff;
        uVar2 = uVar8 + 0x80;
        if (uVar8 < 0xff7f) {
          dVar1 = pow((double)uVar2 / 65535.0,(double)CONCAT44(uVar17,uVar16));
          dVar1 = floor(dVar1 * 65535.0 + 0.5);
          uVar2 = (uint)dVar1;
        }
        uVar8 = (uVar2 & 0xffff) * ~(-1 << (0x10 - bVar9 & 0x1f)) + 0x8000;
        uVar2 = uVar10;
        if (uVar10 <= uVar8 / 0xffff) {
          do {
            *(short *)(*(longlong *)(lVar5 + (ulonglong)(uVar2 & uVar12) * 8) +
                      (ulonglong)(uVar2 >> (bVar7 & 0x1f)) * 2) = (short)(iVar11 * 0x101);
            uVar10 = uVar2 + 1;
            bVar15 = uVar2 < uVar8 / 0xffff;
            uVar2 = uVar10;
          } while (bVar15);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0xff);
      uVar14 = uVar14 * 0x100;
      if (uVar10 < uVar14) {
        uVar2 = ~uVar10;
        if ((-uVar10 & 3) != 0) {
          iVar11 = -(-uVar10 & 3);
          do {
            *(undefined2 *)
             (*(longlong *)(lVar5 + (ulonglong)(uVar10 & uVar12) * 8) +
             (ulonglong)(uVar10 >> (bVar7 & 0x1f)) * 2) = 0xffff;
            uVar10 = uVar10 + 1;
            iVar11 = iVar11 + 1;
          } while (iVar11 != 0);
        }
        if (2 < uVar2 + uVar14) {
          do {
            *(undefined2 *)
             (*(longlong *)(lVar5 + (ulonglong)(uVar10 & uVar12) * 8) +
             (ulonglong)(uVar10 >> (bVar7 & 0x1f)) * 2) = 0xffff;
            *(undefined2 *)
             (*(longlong *)(lVar5 + (ulonglong)(uVar10 + 1 & uVar12) * 8) +
             (ulonglong)(uVar10 + 1 >> (bVar7 & 0x1f)) * 2) = 0xffff;
            *(undefined2 *)
             (*(longlong *)(lVar5 + (ulonglong)(uVar10 + 2 & uVar12) * 8) +
             (ulonglong)(uVar10 + 2 >> (bVar7 & 0x1f)) * 2) = 0xffff;
            *(undefined2 *)
             (*(longlong *)(lVar5 + (ulonglong)(uVar10 + 3 & uVar12) * 8) +
             (ulonglong)(uVar10 + 3 >> (bVar7 & 0x1f)) * 2) = 0xffff;
            uVar10 = uVar10 + 4;
          } while (uVar10 != uVar14);
        }
      }
      uVar14 = *(uint *)(param_1 + 0x15c);
    }
    if ((uVar14 & 0x600080) != 0) {
      dVar1 = floor(10000000000.0 / (double)*(int *)(param_1 + 0x29c) + 0.5);
      iVar11 = (int)dVar1;
      if (dVar1 < -2147483648.0) {
        iVar11 = 0;
      }
      if (2147483647.0 < dVar1) {
        iVar11 = 0;
      }
      FUN_1424f1f70(param_1,param_1 + 0x2d0,bVar9,iVar11);
      if (*(int *)(param_1 + 0x2a0) < 1) {
        iVar11 = *(int *)(param_1 + 0x29c);
      }
      else {
        dVar1 = floor(10000000000.0 / (double)*(int *)(param_1 + 0x2a0) + 0.5);
        iVar11 = (int)dVar1;
        if (dVar1 < -2147483648.0) {
          iVar11 = 0;
        }
        if (2147483647.0 < dVar1) {
          iVar11 = 0;
        }
      }
      FUN_1424f1f70(param_1,param_1 + 0x2c8,bVar9,iVar11);
      return;
    }
  }
  return;
}



// FUNCTION 1424f1f70 FUN_1424f1f70 body=1185 status=ok
// SIG undefined FUN_1424f1f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1424f1f70(undefined8 param_1,ulonglong *param_2,int param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  double dVar20;
  int iVar21;
  int iVar22;
  int iVar24;
  int iVar25;
  undefined1 auVar23 [16];
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined2 uVar36;
  ushort uVar37;
  byte local_118;
  byte bStack_116;
  byte bStack_114;
  byte bStack_112;
  byte bStack_110;
  byte bStack_10e;
  byte bStack_10c;
  byte bStack_10a;
  
  iVar17 = 8 - param_3;
  uVar15 = (ulonglong)(uint)(1 << ((byte)iVar17 & 0x1f));
  uVar16 = (ulonglong)(uint)~(-1 << (0x10U - (char)param_3 & 0x1f));
  iVar18 = 1 << (0xfU - (char)param_3 & 0x1f);
  uVar11 = png_calloc(param_1,uVar15 * 8);
  *param_2 = uVar11;
  auVar23 = pshuflw(ZEXT116(param_3 == 0),ZEXT116(param_3 == 0),0xe0);
  iVar21 = auVar23._0_4_;
  uVar36 = auVar23._0_2_;
  uVar37 = auVar23._2_2_;
  auVar23._4_2_ = uVar36;
  auVar23._0_4_ = iVar21;
  auVar23._6_2_ = uVar37;
  auVar23._8_2_ = uVar36;
  auVar23._10_2_ = uVar37;
  auVar23._12_2_ = uVar36;
  auVar23._14_2_ = uVar37;
  auVar23 = _DAT_149931c40 ^ auVar23;
  local_118 = auVar23[0];
  bStack_116 = auVar23[2];
  bStack_114 = auVar23[4];
  bStack_112 = auVar23[6];
  bStack_110 = auVar23[8];
  bStack_10e = auVar23[10];
  bStack_10c = auVar23[0xc];
  uVar19 = 0;
  bStack_10a = auVar23[0xe];
  auVar10._2_2_ = uVar36;
  auVar10._0_2_ = uVar37;
  auVar10._4_8_ = 0;
  auVar8._12_2_ = uVar37;
  auVar8._0_12_ = auVar10 << 0x30;
  uVar13 = CONCAT44(auVar8._10_4_,CONCAT22(uVar36,uVar37));
  auVar9._4_2_ = uVar37;
  auVar9._0_4_ = iVar21;
  auVar9._6_8_ = uVar13 & 0xffffffffffff0000;
  auVar35._0_4_ = (iVar21 << 0x1f) >> 0x1f;
  auVar35._4_4_ = (auVar9._4_4_ << 0x1f) >> 0x1f;
  auVar35._8_4_ = ((int)(uVar13 >> 0x10) << 0x1f) >> 0x1f;
  auVar35._12_4_ = (int)((auVar8._10_4_ >> 0x10) << 0x1f) >> 0x1f;
  uVar4 = (ushort)(iVar21 * -0x80000000 >> 0x1f);
  sVar5 = (short)((int)((uint)uVar37 << 0x1f) >> 0x1f);
  sVar6 = (short)(iVar21 * -0x80000000 >> 0x1f);
  sVar7 = (short)((int)((uint)uVar37 << 0x1f) >> 0x1f);
  do {
    lVar12 = png_malloc(param_1,0x200);
    *(longlong *)(uVar11 + uVar19 * 8) = lVar12;
    iVar21 = (int)uVar19;
    if (param_4 - 95000U < 0x2711) {
      lVar14 = 0;
      iVar22 = 0;
      iVar24 = 1;
      iVar25 = 2;
      iVar26 = 3;
      iVar27 = 4;
      iVar28 = 5;
      iVar29 = 6;
      iVar30 = 7;
      uVar13 = uVar11;
      do {
        auVar33._0_4_ = (iVar22 << iVar17) + iVar21;
        auVar33._4_4_ = (iVar24 << iVar17) + iVar21;
        auVar33._8_4_ = (iVar25 << iVar17) + iVar21;
        auVar33._12_4_ = (iVar26 << iVar17) + iVar21;
        if ((local_118 & 1) != 0) {
          uVar13 = (uint)(auVar33._0_4_ * 0xffff + iVar18) / uVar16;
          in_XMM4 = ZEXT416((uint)uVar13);
        }
        if ((bStack_116 & 1) != 0) {
          uVar13 = (uint)(auVar33._4_4_ * 0xffff + iVar18) / uVar16;
          in_XMM4._4_4_ = (int)uVar13;
        }
        if ((bStack_114 & 1) != 0) {
          uVar13 = (uint)(auVar33._8_4_ * 0xffff + iVar18) / uVar16;
          in_XMM4._8_4_ = (int)uVar13;
        }
        if ((bStack_112 & 1) != 0) {
          uVar13 = (uint)(auVar33._12_4_ * 0xffff + iVar18) / uVar16;
          in_XMM4._12_4_ = (int)uVar13;
        }
        auVar32._0_4_ = (iVar27 << iVar17) + iVar21;
        auVar32._4_4_ = (iVar28 << iVar17) + iVar21;
        auVar32._8_4_ = (iVar29 << iVar17) + iVar21;
        auVar32._12_4_ = (iVar30 << iVar17) + iVar21;
        if ((bStack_110 & 1) != 0) {
          uVar13 = (uint)(auVar32._0_4_ * 0xffff + iVar18) / uVar16;
          unaff_XMM9_Da = (undefined4)uVar13;
        }
        if ((bStack_10e & 1) != 0) {
          uVar13 = (uint)(auVar32._4_4_ * 0xffff + iVar18) / uVar16;
          unaff_XMM9_Db = (undefined4)uVar13;
        }
        if ((bStack_10c & 1) != 0) {
          uVar13 = (uint)(auVar32._8_4_ * 0xffff + iVar18) / uVar16;
          unaff_XMM9_Dc = (undefined4)uVar13;
        }
        if ((bStack_10a & 1) != 0) {
          uVar13 = (uint)(auVar32._12_4_ * 0xffff + iVar18) / uVar16;
          unaff_XMM9_Dd = (undefined4)uVar13;
        }
        auVar23 = auVar33 & auVar35 | ~auVar35 & in_XMM4;
        auVar2._2_2_ = 0;
        auVar2._0_2_ = uVar4;
        auVar2._4_2_ = sVar5;
        auVar2._6_2_ = sVar5;
        auVar2._8_2_ = sVar6;
        auVar2._10_2_ = sVar6;
        auVar2._12_2_ = sVar7;
        auVar2._14_2_ = sVar7;
        auVar1._4_4_ = unaff_XMM9_Db;
        auVar1._0_4_ = unaff_XMM9_Da;
        auVar1._8_4_ = unaff_XMM9_Dc;
        auVar1._12_4_ = unaff_XMM9_Dd;
        in_XMM4 = ~auVar2 & auVar1;
        auVar3._2_2_ = 0;
        auVar3._0_2_ = uVar4;
        auVar3._4_2_ = sVar5;
        auVar3._6_2_ = sVar5;
        auVar3._8_2_ = sVar6;
        auVar3._10_2_ = sVar6;
        auVar3._12_2_ = sVar7;
        auVar3._14_2_ = sVar7;
        auVar33 = auVar32 & auVar3 | in_XMM4;
        auVar34._0_4_ = (int)auVar33._0_2_;
        auVar34._4_4_ = (int)auVar33._4_2_;
        auVar34._8_4_ = (int)auVar33._8_2_;
        auVar34._12_4_ = (int)auVar33._12_2_;
        auVar31._0_4_ = (int)auVar23._0_2_;
        auVar31._4_4_ = (int)auVar23._4_2_;
        auVar31._8_4_ = (int)auVar23._8_2_;
        auVar31._12_4_ = (int)auVar23._12_2_;
        auVar23 = packssdw(auVar31,auVar34);
        *(undefined1 (*) [16])(lVar12 + lVar14 * 2) = auVar23;
        lVar14 = lVar14 + 8;
        iVar22 = iVar22 + 8;
        iVar24 = iVar24 + 8;
        iVar25 = iVar25 + 8;
        iVar26 = iVar26 + 8;
        iVar27 = iVar27 + 8;
        iVar28 = iVar28 + 8;
        iVar29 = iVar29 + 8;
        iVar30 = iVar30 + 8;
      } while (lVar14 != 0x100);
    }
    else {
      lVar14 = 0;
      do {
        dVar20 = pow((double)(uint)(((int)lVar14 << ((byte)iVar17 & 0x1f)) + iVar21) /
                     (double)uVar16,(double)param_4 * 1e-05);
        dVar20 = floor(dVar20 * 65535.0 + 0.5);
        uVar13 = (ulonglong)(uint)(int)dVar20;
        *(short *)(lVar12 + lVar14 * 2) = (short)(int)dVar20;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x100);
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 < uVar15);
  return uVar13;
}



// FUNCTION 1424f2440 png_create_read_struct body=32 status=ok
// SIG undefined png_create_read_struct(void)

void png_create_read_struct(void)

{
                    /* 0x24f2440  640  png_create_read_struct */
  png_create_read_struct_2();
  return;
}


