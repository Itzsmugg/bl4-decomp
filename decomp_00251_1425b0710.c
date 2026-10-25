// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425b0710 FUN_1425b0710 body=52 status=ok
// SIG undefined FUN_1425b0710(void)

void FUN_1425b0710(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x15) = param_5;
  *(undefined8 *)((longlong)param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 1425b0750 FUN_1425b0750 body=981 status=ok
// SIG undefined FUN_1425b0750(void)

undefined8 FUN_1425b0750(longlong *param_1,char param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  undefined7 uVar7;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  
  if (0 < *param_3) {
    return 0;
  }
  puVar5 = (undefined8 *)((longlong)param_1 + 0x16);
  uVar7 = (undefined7)((ulonglong)puVar5 >> 8);
  if (*(char *)((longlong)param_1 + 0x16) < '\x01') {
    iVar13 = (int)param_1[2];
    if ((*(char *)((longlong)param_1 + 0x16) != '\0') && (0 < iVar13)) {
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      *(undefined1 *)((longlong)param_1 + 0x16) = 1;
      return CONCAT71(uVar7,1);
    }
    *(undefined1 *)puVar5 = 1;
  }
  else {
    *(int *)(param_1 + 4) = (int)param_1[4] + (int)param_1[3];
    if (*(char *)((longlong)param_1 + 0x17) != '\0') {
      *(int *)((longlong)param_1 + 0x24) =
           *(int *)((longlong)param_1 + 0x24) + *(int *)((longlong)param_1 + 0x1c);
    }
    *(int *)(param_1 + 5) = (int)param_1[5] + *(int *)((longlong)param_1 + 0x1c);
    iVar13 = (int)param_1[2];
  }
  if (0 < iVar13) {
    if (iVar13 != 1) {
      *(int *)(param_1 + 2) = iVar13 + -1;
      return CONCAT71(uVar7,1);
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  iVar13 = (int)param_1[1];
  lVar11 = (longlong)iVar13;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar2 <= iVar13) {
LAB_1425b08fc:
    *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
    *puVar5 = 0;
    return 0;
  }
  lVar3 = *param_1;
  uVar14 = lVar11 + 1;
  *(int *)(param_1 + 1) = (int)uVar14;
  uVar1 = *(ushort *)(lVar3 + lVar11 * 2);
  uVar9 = (uint)uVar1;
  if (uVar1 < 0x1000) {
    *(undefined1 *)((longlong)param_1 + 0x17) = 0;
    iVar15 = uVar1 + 1;
    *(int *)(param_1 + 3) = iVar15;
    if ((int)uVar14 < (int)uVar2) {
      uVar1 = *(ushort *)(lVar3 + 2 + lVar11 * 2);
      uVar9 = (uint)uVar1;
      bVar4 = true;
      if (uVar1 < 0x1000) {
        lVar11 = 0;
        do {
          *(int *)(param_1 + 1) = iVar13 + (int)lVar11 + 2;
          iVar15 = iVar15 + uVar9 + 1;
          *(int *)(param_1 + 3) = iVar15;
          if ((2 - uVar2) + iVar13 + (int)lVar11 == 0) {
            bVar4 = (longlong)(uVar14 + lVar11 + 1) < (longlong)(int)uVar2;
            uVar14 = (ulonglong)uVar2;
            goto LAB_1425b089f;
          }
          uVar9 = (uint)*(ushort *)(lVar3 + uVar14 * 2 + 2 + lVar11 * 2);
          lVar11 = lVar11 + 1;
        } while (uVar9 < 0x1000);
        bVar4 = (longlong)(uVar14 + lVar11) < (longlong)(int)uVar2;
        uVar14 = (ulonglong)(iVar13 + (int)lVar11 + 1);
      }
    }
    else {
      bVar4 = false;
    }
LAB_1425b089f:
    *(int *)((longlong)param_1 + 0x1c) = iVar15;
    if (param_2 == '\0') goto LAB_1425b0b1e;
    *(int *)(param_1 + 4) = (int)param_1[4] + iVar15;
    *(int *)(param_1 + 5) = (int)param_1[5] + iVar15;
    if (!bVar4) goto LAB_1425b08fc;
    uVar12 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar12;
    *(uint *)(param_1 + 1) = uVar12;
  }
  *(undefined1 *)((longlong)param_1 + 0x17) = 1;
  if (uVar9 < 0x7000) {
    uVar16 = uVar9 >> 9 & 7;
    iVar13 = (uVar9 & 0x1ff) + 1;
    if (*(char *)((longlong)param_1 + 0x15) == '\0') {
      *(uint *)(param_1 + 3) = uVar9 >> 0xc;
      *(uint *)((longlong)param_1 + 0x1c) = uVar16;
      if ((uVar9 & 0x1ff) != 0) {
        *(int *)(param_1 + 2) = iVar13;
        return CONCAT71(uVar7,1);
      }
      return CONCAT71(uVar7,1);
    }
    uVar12 = (uVar9 >> 0xc) * iVar13;
    *(uint *)(param_1 + 3) = uVar12;
    uVar16 = uVar16 * iVar13;
    *(uint *)((longlong)param_1 + 0x1c) = uVar16;
  }
  else {
    uVar12 = uVar9 >> 6 & 0x3f;
    if (0x3c < uVar12) {
      iVar13 = (int)uVar14;
      puVar5 = (undefined8 *)(longlong)iVar13;
      if (uVar12 == 0x3d) {
        uVar14 = (ulonglong)(iVar13 + 1U);
        *(uint *)(param_1 + 1) = iVar13 + 1U;
        uVar12 = *(ushort *)(lVar3 + (longlong)puVar5 * 2) & 0x7fff;
      }
      else {
        uVar12 = *(ushort *)(lVar3 + 2 + (longlong)puVar5 * 2) & 0x7fff |
                 (*(ushort *)(lVar3 + (longlong)puVar5 * 2) & 0x7fff) << 0xf |
                 (uVar9 >> 6 & 1) << 0x1e;
        uVar16 = iVar13 + 2;
        puVar5 = (undefined8 *)(ulonglong)uVar16;
        *(uint *)(param_1 + 1) = uVar16;
        uVar14 = (ulonglong)uVar16;
      }
    }
    *(uint *)(param_1 + 3) = uVar12;
    uVar16 = uVar9 & 0x3f;
    if (0x3c < uVar16) {
      iVar13 = (int)uVar14;
      puVar5 = (undefined8 *)(longlong)iVar13;
      if (uVar16 == 0x3d) {
        uVar14 = (ulonglong)(iVar13 + 1U);
        *(uint *)(param_1 + 1) = iVar13 + 1U;
        uVar16 = *(ushort *)(lVar3 + (longlong)puVar5 * 2) & 0x7fff;
      }
      else {
        uVar16 = *(ushort *)(lVar3 + 2 + (longlong)puVar5 * 2) & 0x7fff |
                 (*(ushort *)(lVar3 + (longlong)puVar5 * 2) & 0x7fff) << 0xf | (uVar9 & 1) << 0x1e;
        uVar9 = iVar13 + 2;
        puVar5 = (undefined8 *)(ulonglong)uVar9;
        *(uint *)(param_1 + 1) = uVar9;
        uVar14 = (ulonglong)uVar9;
      }
    }
    *(uint *)((longlong)param_1 + 0x1c) = uVar16;
    if (*(char *)((longlong)param_1 + 0x15) == '\0') {
LAB_1425b0b1e:
      return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
    }
  }
  uVar6 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
  uVar9 = (uint)uVar14;
  while( true ) {
    if ((int)uVar2 <= (int)uVar9) {
      return uVar6;
    }
    iVar13 = (int)uVar14;
    uVar1 = *(ushort *)(lVar3 + (longlong)iVar13 * 2);
    uVar10 = (uint)uVar1;
    if (uVar10 < 0x1000) break;
    uVar9 = iVar13 + 1;
    *(uint *)(param_1 + 1) = uVar9;
    if (uVar10 < 0x7000) {
      iVar13 = (uVar10 & 0x1ff) + 1;
      uVar12 = uVar12 + (uint)(uVar1 >> 0xc) * iVar13;
      *(uint *)(param_1 + 3) = uVar12;
      uVar8 = (uVar1 >> 9 & 7) * iVar13;
    }
    else {
      uVar8 = uVar1 >> 6 & 0x3f;
      if (0x3c < uVar8) {
        lVar11 = (longlong)(int)uVar9;
        if (uVar8 == 0x3d) {
          uVar9 = iVar13 + 2;
          *(uint *)(param_1 + 1) = uVar9;
          uVar8 = *(ushort *)(lVar3 + lVar11 * 2) & 0x7fff;
        }
        else {
          uVar8 = *(ushort *)(lVar3 + 4 + (longlong)iVar13 * 2) & 0x7fff |
                  (*(ushort *)(lVar3 + lVar11 * 2) & 0x7fff) << 0xf | (uVar1 >> 6 & 1) << 0x1e;
          uVar9 = iVar13 + 3;
          *(uint *)(param_1 + 1) = uVar9;
        }
      }
      uVar12 = uVar12 + uVar8;
      *(uint *)(param_1 + 3) = uVar12;
      uVar8 = uVar10 & 0x3f;
      if (0x3c < uVar8) {
        lVar11 = (longlong)(int)uVar9;
        if (uVar8 == 0x3d) {
          uVar9 = uVar9 + 1;
          *(uint *)(param_1 + 1) = uVar9;
          uVar8 = *(ushort *)(lVar3 + lVar11 * 2) & 0x7fff;
        }
        else {
          uVar8 = *(ushort *)(lVar3 + 2 + lVar11 * 2) & 0x7fff |
                  (*(ushort *)(lVar3 + lVar11 * 2) & 0x7fff) << 0xf | (uVar10 & 1) << 0x1e;
          uVar9 = uVar9 + 2;
          *(uint *)(param_1 + 1) = uVar9;
        }
      }
    }
    uVar16 = uVar16 + uVar8;
    *(uint *)((longlong)param_1 + 0x1c) = uVar16;
    uVar14 = (ulonglong)uVar9;
  }
  return uVar6;
}



// FUNCTION 1425b0b30 FUN_1425b0b30 body=555 status=ok
// SIG undefined FUN_1425b0b30(void)

void FUN_1425b0b30(longlong param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  byte *pbVar5;
  undefined *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  undefined1 auStack_68 [36];
  byte local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 8);
  puVar7 = *(ushort **)(param_1 + 0x10);
  puVar4 = *(ushort **)(param_1 + 0x18);
  pbVar11 = *(byte **)(param_1 + 0x20);
  pbVar5 = *(byte **)(param_1 + 0x28);
  puVar6 = *(undefined **)(lVar3 + 0x30);
  uVar10 = *(uint *)(lVar3 + 0x54);
  if (uVar10 == 0) goto LAB_1425b0b86;
  if (pbVar5 <= pbVar11) goto LAB_1425b0b86;
  *(undefined4 *)(lVar3 + 0x54) = 0;
  do {
    if (puVar4 <= puVar7) {
      *(uint *)(lVar3 + 0x54) = uVar10;
joined_r0x0001425b0d75:
      if ((puVar7 < puVar4) && ((pbVar5 <= pbVar11 && (*param_2 < 1)))) {
        *param_2 = 0xf;
      }
      *(byte **)(param_1 + 0x20) = pbVar11;
      *(ushort **)(param_1 + 0x10) = puVar7;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
    }
    if (((uVar10 & 0x400) != 0) || ((*puVar7 & 0xfc00) != 0xdc00)) {
      *(uint *)(lVar3 + 0x54) = uVar10;
      *param_2 = 0xc;
      goto joined_r0x0001425b0d75;
    }
    uVar10 = uVar10 * 0x400 + (uint)*puVar7 + 0xfca02400;
    puVar7 = puVar7 + 1;
    do {
      pbVar8 = local_44;
      if (3 < (longlong)pbVar5 - (longlong)pbVar11) {
        pbVar8 = pbVar11;
      }
      if ((int)uVar10 < 0x10000) {
        bVar9 = (byte)(uVar10 >> 0xc) | 0xe0;
        uVar12 = 2;
      }
      else {
        bVar9 = (byte)(uVar10 >> 0x12) | 0xf0;
        pbVar13 = local_44;
        if (3 < (longlong)pbVar5 - (longlong)pbVar11) {
          pbVar13 = pbVar11;
        }
        pbVar13[1] = (byte)(uVar10 >> 0xc) & 0x3f | 0x80;
        uVar12 = 3;
      }
      *pbVar8 = bVar9;
      pbVar8[uVar12 - 1] = (byte)(uVar10 >> 6) & 0x3f | 0x80;
      pbVar8[uVar12] = (byte)uVar10 & 0x3f | 0x80;
      if (pbVar8 == pbVar11) {
        pbVar11 = pbVar11 + (ulonglong)uVar12 + 1;
      }
      else {
        for (; pbVar8 <= local_44 + uVar12; pbVar8 = pbVar8 + 1) {
          while (bVar9 = *pbVar8, pbVar11 < pbVar5) {
            *pbVar11 = bVar9;
            pbVar11 = pbVar11 + 1;
            pbVar8 = pbVar8 + 1;
            if (local_44 + uVar12 < pbVar8) goto LAB_1425b0b86;
          }
          cVar1 = *(char *)(lVar3 + 0x5b);
          *(char *)(lVar3 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar3 + 0x68 + (longlong)cVar1) = bVar9;
          *param_2 = 0xf;
        }
      }
LAB_1425b0b86:
      if ((puVar4 <= puVar7) || (pbVar5 <= pbVar11)) goto joined_r0x0001425b0d75;
      uVar2 = *puVar7;
      uVar10 = (uint)uVar2;
      puVar7 = puVar7 + 1;
      if (uVar10 < 0x80) {
        *pbVar11 = (byte)uVar2;
        pbVar11 = pbVar11 + 1;
        goto LAB_1425b0b86;
      }
      if (uVar10 < 0x800) {
        *pbVar11 = (byte)(uVar2 >> 6) | 0xc0;
        bVar9 = (byte)uVar2 & 0x3f | 0x80;
        if (pbVar11 + 1 < pbVar5) {
          pbVar11[1] = bVar9;
          pbVar11 = pbVar11 + 2;
        }
        else {
          *(byte *)(lVar3 + 0x68) = bVar9;
          *(undefined1 *)(lVar3 + 0x5b) = 1;
          *param_2 = 0xf;
          pbVar11 = pbVar11 + 1;
        }
        goto LAB_1425b0b86;
      }
    } while ((puVar6 == &DAT_149c3bb78) || ((uVar10 & 0xf800) != 0xd800));
  } while( true );
}



// FUNCTION 1425b0d80 FUN_1425b0d80 body=681 status=ok
// SIG undefined FUN_1425b0d80(void)

void FUN_1425b0d80(longlong param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  ushort *puVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined *local_58;
  byte local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 8);
  puVar11 = *(ushort **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x30);
  puVar4 = *(ushort **)(param_1 + 0x18);
  pbVar12 = *(byte **)(param_1 + 0x20);
  pbVar5 = *(byte **)(param_1 + 0x28);
  local_58 = *(undefined **)(lVar3 + 0x30);
  uVar15 = *(uint *)(lVar3 + 0x54);
  iVar8 = 0;
  if (uVar15 == 0) goto LAB_1425b0dfe;
  iVar8 = 0;
  if (pbVar5 <= pbVar12) goto LAB_1425b0dfe;
  *(undefined4 *)(lVar3 + 0x54) = 0;
  iVar7 = 0;
  iVar8 = -1;
  do {
    if (puVar4 <= puVar11) {
      *(uint *)(lVar3 + 0x54) = uVar15;
LAB_1425b100d:
      if ((puVar11 < puVar4) && ((pbVar5 <= pbVar12 && (*param_2 < 1)))) {
        *param_2 = 0xf;
      }
      *(byte **)(param_1 + 0x20) = pbVar12;
      *(ushort **)(param_1 + 0x10) = puVar11;
      *(int **)(param_1 + 0x30) = piVar6;
      local_60 = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    if (((uVar15 & 0x400) != 0) || ((*puVar11 & 0xfc00) != 0xdc00)) {
      *(uint *)(lVar3 + 0x54) = uVar15;
      *param_2 = 0xc;
      goto LAB_1425b100d;
    }
    uVar15 = uVar15 * 0x400 + (uint)*puVar11 + 0xfca02400;
    puVar11 = puVar11 + 1;
    iVar9 = iVar8;
    iVar7 = iVar7 + 1;
    do {
      iVar8 = iVar7;
      pbVar16 = local_4c;
      if (3 < (longlong)pbVar5 - (longlong)pbVar12) {
        pbVar16 = pbVar12;
      }
      if ((int)uVar15 < 0x10000) {
        bVar13 = (byte)(uVar15 >> 0xc) | 0xe0;
        uVar14 = 2;
      }
      else {
        bVar13 = (byte)(uVar15 >> 0x12) | 0xf0;
        pbVar10 = local_4c;
        if (3 < (longlong)pbVar5 - (longlong)pbVar12) {
          pbVar10 = pbVar12;
        }
        pbVar10[1] = (byte)(uVar15 >> 0xc) & 0x3f | 0x80;
        uVar14 = 3;
      }
      *pbVar16 = bVar13;
      pbVar16[uVar14 - 1] = (byte)(uVar15 >> 6) & 0x3f | 0x80;
      pbVar16[uVar14] = (byte)uVar15 & 0x3f | 0x80;
      if (pbVar16 == pbVar12) {
        pbVar12 = pbVar12 + (ulonglong)uVar14 + 1;
        *piVar6 = iVar9;
        piVar6[1] = iVar9;
        piVar6[2] = iVar9;
        if (0xffff < (int)uVar15) {
          piVar6[3] = iVar9;
        }
        piVar6 = piVar6 + (ulonglong)uVar14 + 1;
      }
      else {
        for (; pbVar16 <= local_4c + uVar14; pbVar16 = pbVar16 + 1) {
          if (pbVar12 < pbVar5) {
            *piVar6 = iVar9;
            piVar6 = piVar6 + 1;
            *pbVar12 = *pbVar16;
            pbVar12 = pbVar12 + 1;
          }
          else {
            bVar13 = *pbVar16;
            cVar1 = *(char *)(lVar3 + 0x5b);
            *(char *)(lVar3 + 0x5b) = cVar1 + '\x01';
            *(byte *)(lVar3 + 0x68 + (longlong)cVar1) = bVar13;
            *param_2 = 0xf;
          }
        }
      }
LAB_1425b0dfe:
      while( true ) {
        while( true ) {
          if ((puVar4 <= puVar11) || (pbVar5 <= pbVar12)) goto LAB_1425b100d;
          uVar2 = *puVar11;
          uVar15 = (uint)uVar2;
          puVar11 = puVar11 + 1;
          bVar13 = (byte)uVar2;
          if (0x7f < uVar15) break;
          *piVar6 = iVar8;
          piVar6 = piVar6 + 1;
          iVar8 = iVar8 + 1;
          *pbVar12 = bVar13;
          pbVar12 = pbVar12 + 1;
        }
        if (0x7ff < uVar15) break;
        *piVar6 = iVar8;
        *pbVar12 = (byte)(uVar2 >> 6) | 0xc0;
        if (pbVar12 + 1 < pbVar5) {
          piVar6[1] = iVar8;
          piVar6 = piVar6 + 2;
          iVar8 = iVar8 + 1;
          pbVar12[1] = bVar13 & 0x3f | 0x80;
          pbVar12 = pbVar12 + 2;
        }
        else {
          piVar6 = piVar6 + 1;
          *(byte *)(lVar3 + 0x68) = bVar13 & 0x3f | 0x80;
          *(undefined1 *)(lVar3 + 0x5b) = 1;
          *param_2 = 0xf;
          pbVar12 = pbVar12 + 1;
        }
      }
      iVar7 = iVar8 + 1;
      iVar9 = iVar8;
    } while ((local_58 == &DAT_149c3bb78) || ((uVar15 & 0xf800) != 0xd800));
  } while( true );
}



// FUNCTION 1425b1060 FUN_1425b1060 body=674 status=ok
// SIG undefined FUN_1425b1060(void)

void FUN_1425b1060(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  ushort *puVar14;
  undefined *puVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  lVar2 = *(longlong *)(param_1 + 8);
  pbVar9 = *(byte **)(param_1 + 0x10);
  puVar14 = *(ushort **)(param_1 + 0x20);
  pbVar3 = *(byte **)(param_1 + 0x18);
  puVar4 = *(ushort **)(param_1 + 0x28);
  puVar5 = *(undefined **)(lVar2 + 0x30);
  uVar16 = (uint)*(byte *)(lVar2 + 0x40);
  if ((char)*(byte *)(lVar2 + 0x40) < '\x01') goto LAB_1425b10cb;
  if (puVar4 <= puVar14) goto LAB_1425b10cb;
  uVar13 = *(uint *)(lVar2 + 0x48);
  uVar10 = *(uint *)(lVar2 + 0x4c);
  *(undefined1 *)(lVar2 + 0x40) = 0;
  *(undefined4 *)(lVar2 + 0x48) = 0;
  pbVar8 = pbVar9;
  do {
    if ((int)uVar16 < (int)uVar10) {
      uVar17 = (ulonglong)uVar16;
      lVar18 = 0;
      do {
        pbVar9 = pbVar8 + lVar18;
        if (pbVar3 <= pbVar9) {
          *(uint *)(lVar2 + 0x48) = uVar13;
          *(uint *)(lVar2 + 0x4c) = uVar10;
          *(char *)(lVar2 + 0x40) = (char)uVar16 + (char)lVar18;
          goto LAB_1425b122b;
        }
        bVar1 = *pbVar9;
        *(byte *)(uVar17 + lVar2 + 0x41 + lVar18) = bVar1;
        if (((int)uVar10 < 3) || (1 < uVar17 + lVar18)) {
          if (-0x41 < (char)bVar1) goto LAB_1425b11d5;
        }
        else {
          if (uVar10 == 3) {
            bVar11 = '\x01' << (bVar1 >> 5);
            uVar7 = (ulonglong)(uVar13 & 0xf);
            puVar15 = &DAT_14bd49f86;
          }
          else {
            bVar11 = (byte)(1 << ((byte)uVar13 & 7));
            uVar7 = (ulonglong)(bVar1 >> 4);
            puVar15 = &DAT_14bd49f97;
          }
          if ((bVar11 & puVar15[uVar7]) == 0) {
LAB_1425b11d5:
            if ((((puVar5 != &DAT_149c3bb78) || (uVar17 + lVar18 != 1)) || (uVar13 != 0xed)) ||
               (-0x41 < (char)bVar1)) {
              uVar6 = uVar16 + (int)lVar18;
              break;
            }
          }
        }
        uVar13 = uVar13 * 0x40 + (uint)bVar1;
        lVar18 = lVar18 + 1;
        uVar6 = uVar10;
      } while ((uVar16 - uVar10) + (int)lVar18 != 0);
      uVar16 = uVar6;
      pbVar8 = pbVar8 + lVar18;
    }
    pbVar9 = pbVar8;
    if ((uVar16 != uVar10) || (puVar5 == &DAT_149c3bb78 && 3 < (int)uVar16)) {
      *(char *)(lVar2 + 0x40) = (char)uVar16;
      *param_2 = 0xc;
LAB_1425b122b:
      if ((pbVar9 < pbVar3) && ((puVar4 <= puVar14 && (*param_2 < 1)))) {
        *param_2 = 0xf;
      }
      *(ushort **)(param_1 + 0x20) = puVar14;
      *(byte **)(param_1 + 0x10) = pbVar9;
      return;
    }
    uVar13 = uVar13 - *(int *)(&DAT_149c3bca0 + (longlong)(int)uVar10 * 4);
    if (uVar13 < 0x10000) {
      *puVar14 = (ushort)uVar13;
      puVar14 = puVar14 + 1;
    }
    else {
      *puVar14 = (short)(uVar13 >> 10) + 0xd7c0;
      uVar12 = (ushort)uVar13 & 0x3ff | 0xdc00;
      if (puVar4 <= puVar14 + 1) {
        *(ushort *)(lVar2 + 0x90) = uVar12;
        *(undefined1 *)(lVar2 + 0x5d) = 1;
        *param_2 = 0xf;
        puVar14 = puVar14 + 1;
        goto LAB_1425b122b;
      }
      puVar14[1] = uVar12;
      puVar14 = puVar14 + 2;
    }
LAB_1425b10cb:
    while( true ) {
      if ((pbVar3 <= pbVar9) || (puVar4 <= puVar14)) goto LAB_1425b122b;
      bVar1 = *pbVar9;
      uVar13 = (uint)bVar1;
      if ((char)bVar1 < '\0') break;
      *puVar14 = (ushort)bVar1;
      puVar14 = puVar14 + 1;
      pbVar9 = pbVar9 + 1;
    }
    *(byte *)(lVar2 + 0x41) = bVar1;
    pbVar8 = pbVar9 + 1;
    uVar10 = 0;
    uVar16 = 1;
    if ((byte)(bVar1 + 0x3e) < 0x33) {
      uVar10 = ((uint)(0xdf < bVar1) - (uint)(bVar1 < 0xf0)) + 3;
    }
  } while( true );
}



// FUNCTION 1425b1310 FUN_1425b1310 body=756 status=ok
// SIG undefined FUN_1425b1310(void)

void FUN_1425b1310(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined *puVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  ushort *puVar13;
  int *piVar14;
  undefined *puVar15;
  ushort *puVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar20;
  uint uVar21;
  
  lVar2 = *(longlong *)(param_1 + 8);
  pbVar11 = *(byte **)(param_1 + 0x10);
  puVar13 = *(ushort **)(param_1 + 0x20);
  piVar14 = *(int **)(param_1 + 0x30);
  pbVar3 = *(byte **)(param_1 + 0x18);
  puVar4 = *(ushort **)(param_1 + 0x28);
  puVar5 = *(undefined **)(lVar2 + 0x30);
  uVar17 = (uint)*(byte *)(lVar2 + 0x40);
  iVar10 = 0;
  pbVar12 = pbVar11;
  if ((char)*(byte *)(lVar2 + 0x40) < '\x01') goto LAB_1425b1380;
  if (puVar4 <= puVar13) goto LAB_1425b1380;
  uVar21 = *(uint *)(lVar2 + 0x48);
  uVar9 = *(uint *)(lVar2 + 0x4c);
  *(undefined1 *)(lVar2 + 0x40) = 0;
  *(undefined4 *)(lVar2 + 0x48) = 0;
  iVar10 = 0;
  puVar16 = puVar13;
  do {
    if ((int)uVar17 < (int)uVar9) {
      uVar18 = (ulonglong)uVar17;
      lVar19 = 0;
      do {
        pbVar12 = pbVar11 + lVar19;
        if (pbVar3 <= pbVar12) {
          *(uint *)(lVar2 + 0x48) = uVar21;
          *(uint *)(lVar2 + 0x4c) = uVar9;
          *(char *)(lVar2 + 0x40) = (char)uVar17 + (char)lVar19;
          goto LAB_1425b14fb;
        }
        bVar1 = *pbVar12;
        *(byte *)(uVar18 + lVar2 + 0x41 + lVar19) = bVar1;
        if (((int)uVar9 < 3) || (1 < uVar18 + lVar19)) {
          if (-0x41 < (char)bVar1) goto LAB_1425b14a1;
        }
        else {
          if (uVar9 == 3) {
            bVar7 = '\x01' << (bVar1 >> 5);
            uVar8 = (ulonglong)(uVar21 & 0xf);
            puVar15 = &DAT_14bd49f86;
          }
          else {
            bVar7 = (byte)(1 << ((byte)uVar21 & 7));
            uVar8 = (ulonglong)(bVar1 >> 4);
            puVar15 = &DAT_14bd49f97;
          }
          if ((bVar7 & puVar15[uVar8]) == 0) {
LAB_1425b14a1:
            if ((((puVar5 != &DAT_149c3bb78) || (uVar18 + lVar19 != 1)) || (uVar21 != 0xed)) ||
               (-0x41 < (char)bVar1)) {
              uVar6 = uVar17 + (int)lVar19;
              break;
            }
          }
        }
        uVar21 = uVar21 * 0x40 + (uint)bVar1;
        lVar19 = lVar19 + 1;
        uVar6 = uVar9;
      } while ((uVar17 - uVar9) + (int)lVar19 != 0);
      uVar17 = uVar6;
      pbVar11 = pbVar11 + lVar19;
    }
    pbVar12 = pbVar11;
    if ((uVar17 != uVar9) || (puVar5 == &DAT_149c3bb78 && 3 < (int)uVar17)) {
      *(char *)(lVar2 + 0x40) = (char)uVar17;
      *param_2 = 0xc;
LAB_1425b14fb:
      puVar13 = puVar16;
      if (pbVar12 < pbVar3) {
LAB_1425b1504:
        puVar13 = puVar16;
        if ((puVar4 <= puVar16) && (*param_2 < 1)) {
          *param_2 = 0xf;
        }
      }
LAB_1425b1514:
      *(ushort **)(param_1 + 0x20) = puVar13;
      *(byte **)(param_1 + 0x10) = pbVar12;
      *(int **)(param_1 + 0x30) = piVar14;
      return;
    }
    uVar21 = uVar21 - *(int *)(&DAT_149c3bca0 + (longlong)(int)uVar9 * 4);
    if (uVar21 < 0x10000) {
      *puVar16 = (ushort)uVar21;
      puVar13 = puVar16 + 1;
      *piVar14 = iVar10;
      piVar14 = piVar14 + 1;
    }
    else {
      puVar13 = puVar16 + 1;
      *puVar16 = (short)(uVar21 >> 10) + 0xd7c0;
      *piVar14 = iVar10;
      uVar20 = (ushort)uVar21 & 0x3ff | 0xdc00;
      if (puVar13 < puVar4) {
        puVar16[1] = uVar20;
        puVar13 = puVar16 + 2;
        piVar14[1] = iVar10;
        piVar14 = piVar14 + 2;
      }
      else {
        piVar14 = piVar14 + 1;
        *(ushort *)(lVar2 + 0x90) = uVar20;
        *(undefined1 *)(lVar2 + 0x5d) = 1;
        *param_2 = 0xf;
      }
    }
    iVar10 = uVar9 + iVar10;
LAB_1425b1380:
    while( true ) {
      puVar16 = puVar13;
      if ((pbVar3 <= pbVar12) || (puVar4 <= puVar13)) {
        if (pbVar3 <= pbVar12) goto LAB_1425b1514;
        goto LAB_1425b1504;
      }
      bVar1 = *pbVar12;
      uVar21 = (uint)bVar1;
      if ((char)bVar1 < '\0') break;
      *puVar13 = (ushort)bVar1;
      puVar13 = puVar13 + 1;
      *piVar14 = iVar10;
      piVar14 = piVar14 + 1;
      iVar10 = iVar10 + 1;
      pbVar12 = pbVar12 + 1;
    }
    *(byte *)(lVar2 + 0x41) = bVar1;
    pbVar11 = pbVar12 + 1;
    uVar9 = 0;
    uVar17 = 1;
    if ((byte)(bVar1 + 0x3e) < 0x33) {
      uVar9 = ((uint)(0xdf < bVar1) - (uint)(bVar1 < 0xf0)) + 3;
    }
  } while( true );
}



// FUNCTION 1425b1620 FUN_1425b1620 body=720 status=ok
// SIG undefined FUN_1425b1620(void)

uint FUN_1425b1620(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  byte *pbVar17;
  ulonglong uVar18;
  byte bVar19;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  if (*(byte **)(param_1 + 0x18) <= pbVar5) {
    *param_2 = 8;
    return 0xffff;
  }
  pbVar17 = pbVar5 + 1;
  bVar2 = *pbVar5;
  if (-1 < (char)bVar2) {
    *(byte **)(param_1 + 0x10) = pbVar17;
    return (uint)bVar2;
  }
  lVar6 = *(longlong *)(param_1 + 8);
  if (0x32 < (byte)(bVar2 + 0x3e)) {
    *(byte *)(lVar6 + 0x41) = bVar2;
    *(undefined1 *)(lVar6 + 0x40) = 1;
    *param_2 = 0xc;
    *(byte **)(param_1 + 0x10) = pbVar17;
    return 0xffff;
  }
  uVar15 = ((0xdf < bVar2) + 1) - (uint)(bVar2 < 0xf0);
  uVar11 = (uint)bVar2;
  if (*(byte **)(param_1 + 0x18) < pbVar17 + (ulonglong)uVar15 + 1) {
    *(byte *)(lVar6 + 0x41) = bVar2;
    *param_2 = 0xb;
    lVar16 = 1;
    if (pbVar17 < *(byte **)(param_1 + 0x18)) {
      lVar16 = 1;
      do {
        bVar3 = pbVar5[lVar16];
        if ((uVar15 == 0) || ('\x01' < (char)lVar16)) {
          if (-0x41 < (char)bVar3) goto LAB_1425b172d;
        }
        else {
          if (uVar15 == 1) {
            bVar19 = '\x01' << (bVar3 >> 5) & (&DAT_14bd49f86)[uVar11 & 0xf];
          }
          else {
            bVar19 = (&DAT_14bd49f97)[bVar3 >> 4] & '\x01' << (bVar2 & 7);
          }
          if (bVar19 == 0) {
LAB_1425b172d:
            *param_2 = 0xc;
            break;
          }
        }
        *(byte *)(lVar6 + 0x41 + (longlong)(char)lVar16) = bVar3;
        lVar10 = lVar16 + 1;
        lVar16 = lVar16 + 1;
      } while (pbVar5 + lVar10 < *(byte **)(param_1 + 0x18));
      pbVar17 = pbVar5 + lVar16;
    }
    *(char *)(lVar6 + 0x40) = (char)lVar16;
    *(byte **)(param_1 + 0x10) = pbVar17;
    return 0xffff;
  }
  pbVar12 = pbVar17;
  if (uVar15 == 0) {
    bVar3 = *pbVar17;
    if ((char)bVar3 < -0x40) {
      *(byte **)(param_1 + 0x10) = pbVar5 + 2;
      return ((uint)bVar2 * 0x40 + (uint)bVar3) - 0x3080;
    }
  }
  else if (uVar15 == 1) {
    bVar3 = *pbVar17;
    if (((byte)(&DAT_14bd49f86)[uVar11 & 0xf] >> (bVar3 >> 5) & 1) != 0) {
      bVar19 = pbVar5[2];
      if ((char)bVar19 < -0x40) {
        *(byte **)(param_1 + 0x10) = pbVar5 + 3;
        return ((uint)bVar19 + ((uint)bVar2 * 0x40 + (uint)bVar3) * 0x40) - 0xe2080;
      }
LAB_1425b1828:
      pbVar12 = pbVar5 + 2;
    }
  }
  else {
    bVar3 = *pbVar17;
    if (((byte)(&DAT_14bd49f97)[bVar3 >> 4] >> (uVar11 & 7) & 1) != 0) {
      bVar19 = pbVar5[2];
      if (-0x41 < (char)bVar19) goto LAB_1425b1828;
      bVar4 = pbVar5[3];
      if ((char)bVar4 < -0x40) {
        *(byte **)(param_1 + 0x10) = pbVar5 + 4;
        return (uint)bVar19 * 0x40 + ((uint)bVar2 * 0x40 + (uint)bVar3) * 0x1000 + (uint)bVar4 +
               0xfc37df80;
      }
      pbVar12 = pbVar5 + 3;
    }
  }
  if (pbVar17 < pbVar12) {
    pbVar17 = pbVar12;
  }
  *(byte **)(param_1 + 0x10) = pbVar12;
  uVar18 = (longlong)pbVar17 - (longlong)pbVar5;
  if (uVar18 < 0x20) {
LAB_1425b1870:
    uVar13 = 0;
    pbVar17 = pbVar5;
  }
  else {
    pbVar17 = pbVar5 + 1;
    if (pbVar5 + 1 < pbVar12) {
      pbVar17 = pbVar12;
    }
    if ((&DAT_0000007f < pbVar17 + ~(ulonglong)pbVar5) ||
       ((lVar6 - (longlong)pbVar5) + 0x41U < 0x20)) goto LAB_1425b1870;
    uVar13 = uVar18 & 0xffffffffffffffe0;
    pbVar17 = pbVar5 + uVar13;
    lVar16 = 0;
    uVar14 = 0;
    do {
      uVar7 = *(undefined8 *)(pbVar5 + uVar14 + 8);
      uVar8 = *(undefined8 *)(pbVar5 + uVar14 + 0x10);
      uVar9 = *(undefined8 *)(pbVar5 + uVar14 + 0x10 + 8);
      puVar1 = (undefined8 *)(lVar6 + 0x41 + (lVar16 >> 0x38));
      *puVar1 = *(undefined8 *)(pbVar5 + uVar14);
      puVar1[1] = uVar7;
      puVar1 = (undefined8 *)(lVar6 + 0x51 + (lVar16 >> 0x38));
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      uVar14 = uVar14 + 0x20;
      lVar16 = lVar16 + 0x2000000000000000;
    } while (uVar13 != uVar14);
    if (uVar18 == uVar13) goto LAB_1425b1897;
  }
  do {
    bVar2 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    *(byte *)(lVar6 + 0x41 + (longlong)(char)uVar13) = bVar2;
    uVar13 = (ulonglong)(byte)((char)uVar13 + 1);
  } while (pbVar17 < pbVar12);
LAB_1425b1897:
  *(char *)(lVar6 + 0x40) = (char)uVar13;
  *param_2 = 0xc;
  return 0xffff;
}



// FUNCTION 1425b18f0 FUN_1425b18f0 body=2166 status=ok
// SIG undefined FUN_1425b18f0(void)

void FUN_1425b18f0(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  char cVar18;
  ulonglong uVar19;
  byte bVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte bVar25;
  uint uVar26;
  char cVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  bool bVar31;
  
  lVar2 = *(longlong *)(param_2 + 8);
  pbVar28 = *(byte **)(param_2 + 0x10);
  pbVar30 = *(byte **)(param_2 + 0x18);
  uVar13 = (ulonglong)*(byte *)(lVar2 + 0x40);
  if ((char)*(byte *)(lVar2 + 0x40) < '\x01') {
    cVar18 = '\0';
    uVar26 = 0;
    uVar13 = 0;
  }
  else {
    cVar18 = *(char *)(lVar2 + 0x4c);
    uVar26 = *(uint *)(lVar2 + 0x48);
  }
  pbVar23 = *(byte **)(param_1 + 0x20);
  iVar14 = (int)uVar13 + ((int)pbVar30 - (int)pbVar28);
  iVar7 = (int)cVar18;
  if (iVar14 < iVar7) goto LAB_1425b197a;
  iVar8 = *(int *)(param_1 + 0x28) - (int)pbVar23;
  if (iVar8 < iVar7) {
    *param_3 = -0x7f;
    return;
  }
  if (iVar14 < iVar8) {
    iVar8 = iVar14;
  }
  uVar9 = iVar8 - iVar7;
  uVar15 = uVar9;
  if (uVar9 != 0 && iVar7 <= iVar8) {
    bVar20 = pbVar28[uVar9 - 1];
    if (((((char)bVar20 < '\0') && (uVar15 = uVar9 - 1, 0x32 < (byte)(bVar20 + 0x3e))) &&
        (uVar15 = uVar9, bVar20 < 0xc0)) && (uVar15 = 1, 1 < uVar9)) {
      uVar16 = uVar9 - 2;
      bVar6 = pbVar28[uVar16];
      if ((byte)(bVar6 + 0x20) < 0x15) {
        pbVar24 = &DAT_14bd49f97 + (bVar20 >> 4);
        bVar25 = bVar6 & 7;
        if (bVar6 < 0xf0) {
          bVar25 = bVar20 >> 5;
          pbVar24 = &DAT_14bd49f86 + (bVar6 & 0xf);
        }
        bVar20 = *pbVar24 >> bVar25;
LAB_1425b1a25:
        uVar15 = uVar16;
        if ((bVar20 & 1) == 0) {
          uVar15 = uVar9;
        }
      }
      else {
        uVar15 = uVar9;
        if (((char)bVar6 < -0x40) && (uVar15 = 2, 2 < uVar9)) {
          uVar16 = uVar9 - 3;
          uVar15 = uVar9;
          if ((byte)(pbVar28[uVar16] + 0x10) < 5) {
            bVar20 = (byte)(&DAT_14bd49f97)[bVar6 >> 4] >> (pbVar28[uVar16] & 7);
            goto LAB_1425b1a25;
          }
        }
      }
    }
  }
  iVar14 = uVar15 + iVar7;
LAB_1425b197a:
  if (uVar26 == 0) goto LAB_1425b1a7a;
  *(undefined4 *)(lVar2 + 0x48) = 0;
  *(undefined1 *)(lVar2 + 0x40) = 0;
  pbVar24 = pbVar28;
  uVar22 = uVar13;
  do {
    bVar20 = (byte)uVar13;
    uVar10 = uVar22;
    pbVar29 = pbVar24;
    if ((char)uVar22 < cVar18) {
      uVar21 = uVar22 - uVar13;
      do {
        bVar6 = (byte)uVar10;
        if (pbVar30 <= pbVar29) {
          pbVar29 = pbVar29 + -uVar21;
          if ((char)bVar6 <= (char)bVar20) goto LAB_1425b1f49;
          uVar13 = (ulonglong)(char)bVar20;
          if ((uVar21 < 0x20) || (lVar2 + (uVar22 - (longlong)pbVar24) + 0x41 < 0x20))
          goto LAB_1425b1df0;
          uVar12 = uVar21 & 0xffffffffffffffe0;
          pbVar29 = pbVar29 + uVar12;
          uVar19 = 0;
          do {
            uVar3 = *(undefined8 *)(pbVar24 + uVar19 + (uVar13 - uVar22) + 8);
            uVar4 = *(undefined8 *)(pbVar24 + uVar19 + (uVar13 - uVar22) + 0x10);
            uVar5 = *(undefined8 *)(pbVar24 + uVar19 + (uVar13 - uVar22) + 0x10 + 8);
            puVar1 = (undefined8 *)(uVar13 + lVar2 + 0x41 + uVar19);
            *puVar1 = *(undefined8 *)(pbVar24 + uVar19 + (uVar13 - uVar22));
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(uVar13 + lVar2 + 0x51 + uVar19);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            uVar19 = uVar19 + 0x20;
          } while (uVar12 != uVar19);
          uVar13 = uVar12 + uVar13;
          if (uVar21 != uVar12) {
LAB_1425b1df0:
            do {
              bVar20 = *pbVar29;
              pbVar29 = pbVar29 + 1;
              *(byte *)(lVar2 + 0x41 + uVar13) = bVar20;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar10);
          }
LAB_1425b1f49:
          *(uint *)(lVar2 + 0x48) = uVar26;
          *(byte *)(lVar2 + 0x40) = bVar6;
          *(int *)(lVar2 + 0x4c) = (int)cVar18;
          *(byte **)(param_2 + 0x10) = pbVar29;
          *(byte **)(param_1 + 0x20) = pbVar23;
          return;
        }
        bVar25 = *pbVar29;
        if ((cVar18 < '\x03') || (1 < bVar6)) {
          if (-0x41 < (char)bVar25) goto LAB_1425b1c2a;
        }
        else {
          if (cVar18 == '\x03') {
            bVar6 = '\x01' << (bVar25 >> 5) & (&DAT_14bd49f86)[uVar26 & 0xf];
          }
          else {
            bVar6 = (byte)(1 << ((byte)uVar26 & 7)) & (&DAT_14bd49f97)[bVar25 >> 4];
          }
          if (bVar6 == 0) goto LAB_1425b1c2a;
        }
        pbVar29 = pbVar29 + 1;
        uVar26 = uVar26 * 0x40 + (uint)bVar25;
        uVar21 = uVar21 + 1;
        uVar10 = uVar10 + 1;
      } while ((char)uVar10 < cVar18);
      iVar7 = (int)cVar18;
    }
    else {
LAB_1425b1c2a:
      cVar27 = (char)uVar10;
      iVar7 = (int)cVar27;
      if (cVar27 != cVar18) {
        pbVar28 = pbVar29 + ((char)bVar20 - iVar7);
        pbVar30 = pbVar28;
        if ((char)bVar20 < cVar27) goto LAB_1425b1ed0;
        goto LAB_1425b1f24;
      }
    }
    uVar22 = 0;
    if ('\0' < (char)bVar20) {
      uVar22 = uVar13;
      if ((bVar20 < 8) || (pbVar23 + (-0x41 - lVar2) < (byte *)0x8)) {
        uVar10 = 0;
        pbVar28 = pbVar23;
      }
      else {
        uVar10 = (ulonglong)((uint)uVar13 & 0xfffffff8);
        pbVar28 = pbVar23 + uVar10;
        uVar21 = 0;
        do {
          *(undefined8 *)(pbVar23 + uVar21) = *(undefined8 *)(lVar2 + 0x41 + uVar21);
          uVar21 = uVar21 + 8;
        } while (uVar10 != uVar21);
        pbVar23 = pbVar28;
        if (uVar10 == uVar13) goto LAB_1425b1d43;
      }
      uVar12 = ~uVar10;
      for (uVar21 = uVar13 & 7; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pbVar28 = *(byte *)(lVar2 + 0x41 + uVar10);
        pbVar28 = pbVar28 + 1;
        uVar10 = uVar10 + 1;
      }
      pbVar23 = pbVar28;
      if (6 < uVar12 + uVar13) {
        lVar17 = uVar10 + lVar2;
        lVar11 = 0;
        do {
          pbVar28[lVar11] = *(byte *)(lVar17 + 0x41 + lVar11);
          pbVar28[lVar11 + 1] = *(byte *)(lVar17 + 0x42 + lVar11);
          pbVar28[lVar11 + 2] = *(byte *)(lVar17 + 0x43 + lVar11);
          pbVar28[lVar11 + 3] = *(byte *)(lVar17 + 0x44 + lVar11);
          pbVar28[lVar11 + 4] = *(byte *)(lVar17 + 0x45 + lVar11);
          pbVar28[lVar11 + 5] = *(byte *)(lVar17 + 0x46 + lVar11);
          pbVar28[lVar11 + 6] = *(byte *)(lVar17 + 0x47 + lVar11);
          pbVar28[lVar11 + 7] = *(byte *)(lVar17 + 0x48 + lVar11);
          lVar11 = lVar11 + 8;
        } while (uVar13 - uVar10 != lVar11);
        pbVar23 = pbVar28 + lVar11;
      }
    }
LAB_1425b1d43:
    pbVar28 = pbVar29 + ((char)bVar20 - iVar7);
    if ((char)uVar22 < cVar18) {
      if (((byte)(~bVar20 + cVar18) < 0x1f) ||
         (pbVar23 + ((longlong)iVar7 - (longlong)(pbVar29 + uVar13)) < &DAT_00000020)) {
LAB_1425b1eb0:
        do {
          bVar20 = *pbVar28;
          pbVar28 = pbVar28 + 1;
          *pbVar23 = bVar20;
          pbVar24 = pbVar23 + 1;
          bVar20 = (char)uVar22 + 1;
          uVar22 = (ulonglong)bVar20;
          pbVar23 = pbVar24;
        } while ((char)bVar20 < cVar18);
      }
      else {
        uVar10 = (ulonglong)(byte)(~bVar20 + cVar18) + 1;
        uVar26 = (uint)uVar10 & 0xffffffe0;
        uVar21 = (ulonglong)uVar26;
        uVar22 = (ulonglong)(byte)((char)uVar22 + (char)uVar26);
        pbVar28 = pbVar28 + uVar21;
        pbVar24 = pbVar23 + uVar21;
        lVar17 = uVar13 - (longlong)iVar7;
        uVar13 = 0;
        do {
          uVar3 = *(undefined8 *)(pbVar29 + uVar13 + lVar17 + 8);
          uVar4 = *(undefined8 *)(pbVar29 + uVar13 + lVar17 + 0x10);
          uVar5 = *(undefined8 *)(pbVar29 + uVar13 + lVar17 + 0x10 + 8);
          *(undefined8 *)(pbVar23 + uVar13) = *(undefined8 *)(pbVar29 + uVar13 + lVar17);
          *(undefined8 *)(pbVar23 + uVar13 + 8) = uVar3;
          *(undefined8 *)(pbVar23 + uVar13 + 0x10) = uVar4;
          *(undefined8 *)(pbVar23 + uVar13 + 0x10 + 8) = uVar5;
          uVar13 = uVar13 + 0x20;
        } while (uVar21 != uVar13);
        pbVar23 = pbVar24;
        if (uVar10 != uVar21) goto LAB_1425b1eb0;
      }
      iVar14 = iVar14 - iVar7;
      pbVar23 = pbVar24;
    }
    else {
      iVar14 = iVar14 - iVar7;
    }
LAB_1425b1a7a:
    if (iVar14 < 1) {
LAB_1425b1f6a:
      if ((0 < *param_3) || (pbVar30 <= pbVar28)) goto LAB_1425b208e;
      if (pbVar23 == *(byte **)(param_1 + 0x28)) {
        *param_3 = 0xf;
        goto LAB_1425b208e;
      }
      bVar20 = *pbVar28;
      bVar6 = 1;
      if ((char)bVar20 < '\0') {
        if ((byte)(bVar20 + 0x3e) < 0x33) {
          bVar6 = ((0xdf < bVar20) - (bVar20 < 0xf0)) + 3;
        }
        else {
          bVar6 = 0;
        }
      }
      if ((longlong)(ulonglong)bVar6 <= (longlong)pbVar30 - (longlong)pbVar28) {
        *param_3 = -0x7f;
        goto LAB_1425b208e;
      }
      uVar26 = (uint)bVar20;
      *(byte *)(lVar2 + 0x41) = bVar20;
      if (pbVar28 + 1 == pbVar30) {
        lVar17 = 1;
        goto LAB_1425b20af;
      }
      lVar17 = 1;
      break;
    }
    while( true ) {
      pbVar24 = pbVar28 + 1;
      bVar20 = *pbVar28;
      if ((char)bVar20 < '\0') break;
      *pbVar23 = bVar20;
      pbVar23 = pbVar23 + 1;
      iVar7 = -1;
      pbVar28 = pbVar24;
LAB_1425b1a9b:
      bVar31 = SCARRY4(iVar14,iVar7);
      iVar14 = iVar14 + iVar7;
      if (iVar14 == 0 || bVar31 != iVar14 < 0) goto LAB_1425b1f6a;
    }
    uVar26 = (uint)bVar20;
    if (bVar20 < 0xe0) {
      if (bVar20 < 0xc2) {
LAB_1425b1ecb:
        cVar27 = '\x01';
        bVar20 = 0;
        goto LAB_1425b1ed0;
      }
      bVar6 = *pbVar24;
      if ((char)bVar6 < -0x40) {
        *pbVar23 = bVar20;
        pbVar23[1] = bVar6;
        pbVar23 = pbVar23 + 2;
        iVar7 = -2;
        pbVar28 = pbVar28 + 2;
        goto LAB_1425b1a9b;
      }
    }
    else if (bVar20 < 0xf0) {
      bVar6 = *pbVar24;
      if ((((byte)(&DAT_14bd49f86)[uVar26 & 0xf] >> (bVar6 >> 5) & 1) != 0) &&
         (bVar25 = pbVar28[2], (char)bVar25 < -0x40)) {
        *pbVar23 = bVar20;
        pbVar23[1] = bVar6;
        pbVar23[2] = bVar25;
        pbVar23 = pbVar23 + 3;
        iVar7 = -3;
        pbVar28 = pbVar28 + 3;
        goto LAB_1425b1a9b;
      }
    }
    else if (0x32 < (byte)(bVar20 + 0x3e)) goto LAB_1425b1ecb;
    cVar18 = ((0xdf < bVar20) - (bVar20 < 0xf0)) + '\x03';
    uVar22 = 1;
    uVar13 = 0;
  } while( true );
LAB_1425b2020:
  bVar20 = pbVar28[lVar17];
  cVar18 = (char)lVar17;
  if ((bVar6 < 3) || ('\x01' < cVar18)) {
    if (-0x41 < (char)bVar20) goto LAB_1425b2070;
  }
  else {
    if (bVar6 == 3) {
      bVar25 = '\x01' << (bVar20 >> 5) & (&DAT_14bd49f86)[uVar26 & 0xf];
    }
    else {
      bVar25 = (byte)(1 << ((byte)uVar26 & 7)) & (&DAT_14bd49f97)[bVar20 >> 4];
    }
    if (bVar25 == 0) {
LAB_1425b2070:
      *(char *)(lVar2 + 0x40) = cVar18;
      *param_3 = 0xc;
      pbVar28 = pbVar28 + lVar17;
      goto LAB_1425b208e;
    }
  }
  uVar26 = uVar26 * 0x40 + (uint)bVar20;
  *(byte *)(lVar2 + 0x41 + (longlong)cVar18) = bVar20;
  lVar11 = lVar17 + 1;
  lVar17 = lVar17 + 1;
  if (pbVar28 + lVar11 == pbVar30) {
LAB_1425b20af:
    *(uint *)(lVar2 + 0x48) = uVar26;
    *(char *)(lVar2 + 0x40) = (char)lVar17;
    *(uint *)(lVar2 + 0x4c) = (uint)bVar6;
    pbVar28 = pbVar30;
LAB_1425b208e:
    *(byte **)(param_2 + 0x10) = pbVar28;
    *(byte **)(param_1 + 0x20) = pbVar23;
    return;
  }
  goto LAB_1425b2020;
LAB_1425b1ed0:
  uVar13 = (ulonglong)bVar20;
  lVar11 = (longlong)cVar27;
  lVar17 = uVar13 + 1;
  if ((longlong)(uVar13 + 1) <= lVar11) {
    lVar17 = lVar11;
  }
  uVar22 = lVar17 - uVar13;
  if ((0xf < uVar22) && (7 < ((lVar2 + uVar13) - (longlong)pbVar28) + 0x41)) {
    uVar10 = uVar22 & 0xfffffffffffffff8;
    pbVar30 = pbVar28 + uVar10;
    uVar21 = 0;
    do {
      *(undefined8 *)(uVar13 + lVar2 + 0x41 + uVar21) = *(undefined8 *)(pbVar28 + uVar21);
      uVar21 = uVar21 + 8;
    } while (uVar10 != uVar21);
    uVar13 = uVar10 + uVar13;
    pbVar28 = pbVar30;
    if (uVar22 == uVar10) goto LAB_1425b1f24;
  }
  do {
    *(byte *)(lVar2 + 0x41 + uVar13) = *pbVar28;
    uVar13 = uVar13 + 1;
    pbVar30 = pbVar28 + 1;
    pbVar28 = pbVar28 + 1;
  } while ((longlong)uVar13 < lVar11);
LAB_1425b1f24:
  *(char *)(lVar2 + 0x40) = cVar27;
  *(byte **)(param_2 + 0x10) = pbVar30;
  *(byte **)(param_1 + 0x20) = pbVar23;
  *param_3 = 0xc;
  return;
}



// FUNCTION 1425b2180 FUN_1425b2180 body=707 status=ok
// SIG undefined FUN_1425b2180(void)

void FUN_1425b2180(longlong param_1,undefined4 *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  ushort *puVar29;
  ushort *puVar30;
  ulonglong uVar31;
  ushort *puVar32;
  ulonglong uVar33;
  ushort *puVar34;
  uint *puVar35;
  uint uVar36;
  int iVar37;
  uint *puVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  puVar29 = *(ushort **)(param_1 + 0x10);
  puVar32 = *(ushort **)(param_1 + 0x20);
  puVar35 = *(uint **)(param_1 + 0x30);
  uVar25 = *(int *)(param_1 + 0x18) - (int)puVar29;
  uVar26 = (uint)((ulonglong)(*(longlong *)(param_1 + 0x28) - (longlong)puVar32) >> 1);
  if ((int)uVar26 < (int)uVar25) {
    *param_2 = 0xf;
    uVar25 = uVar26;
  }
  uVar26 = 0;
  if ((int)uVar25 < 8) {
LAB_1425b228d:
    puVar38 = puVar35;
    if ((int)uVar25 < 1) {
      *(ushort **)(param_1 + 0x10) = puVar29;
      *(ushort **)(param_1 + 0x20) = puVar32;
      if (puVar35 == (uint *)0x0) {
        return;
      }
      goto LAB_1425b23bf;
    }
  }
  else {
    uVar36 = uVar25 >> 3;
    uVar26 = uVar36 + 1;
    do {
      *puVar32 = (ushort)(byte)*puVar29;
      puVar32[1] = (ushort)*(byte *)((longlong)puVar29 + 1);
      puVar32[2] = (ushort)(byte)puVar29[1];
      puVar32[3] = (ushort)*(byte *)((longlong)puVar29 + 3);
      puVar32[4] = (ushort)(byte)puVar29[2];
      puVar32[5] = (ushort)*(byte *)((longlong)puVar29 + 5);
      puVar32[6] = (ushort)(byte)puVar29[3];
      puVar32[7] = (ushort)*(byte *)((longlong)puVar29 + 7);
      puVar32 = puVar32 + 8;
      puVar29 = puVar29 + 4;
      uVar26 = uVar26 - 1;
    } while (1 < uVar26);
    uVar25 = uVar25 & 7;
    if (puVar35 != (uint *)0x0) {
      iVar37 = uVar36 + 1;
      uVar36 = 0;
      do {
        *puVar35 = uVar36;
        puVar35[1] = uVar36 | 1;
        puVar35[2] = uVar36 | 2;
        puVar35[3] = uVar36 | 3;
        puVar35[4] = uVar36 | 4;
        puVar35[5] = uVar36 + 5;
        puVar35[6] = uVar36 + 6;
        uVar26 = uVar36 + 8;
        puVar35[7] = uVar36 + 7;
        puVar35 = puVar35 + 8;
        iVar37 = iVar37 + -1;
        uVar36 = uVar26;
      } while (1 < iVar37);
      goto LAB_1425b228d;
    }
    if (uVar25 == 0) {
      *(ushort **)(param_1 + 0x10) = puVar29;
      *(ushort **)(param_1 + 0x20) = puVar32;
      return;
    }
    uVar26 = 0;
    puVar38 = (uint *)0x0;
  }
  uVar27 = (uVar25 - 1) + (uint)(uVar25 == 0);
  uVar36 = uVar25;
  if ((uVar27 < 0x17) ||
     ((uVar28 = (ulonglong)((uVar25 - 1) + (uint)(uVar25 == 0)),
      puVar32 < (ushort *)((longlong)puVar29 + uVar28 + 1) && (puVar29 < puVar32 + uVar28 + 1)))) {
LAB_1425b22d8:
    uVar36 = uVar36 + 1;
    puVar30 = puVar29;
    puVar34 = puVar32;
    do {
      uVar24 = *puVar30;
      puVar30 = (ushort *)((longlong)puVar30 + 1);
      *puVar34 = (ushort)(byte)uVar24;
      puVar34 = puVar34 + 1;
      uVar36 = uVar36 - 1;
    } while (1 < uVar36);
  }
  else {
    uVar28 = (ulonglong)uVar27 + 1;
    uVar31 = uVar28 & 0xfffffffffffffff0;
    puVar34 = puVar32 + uVar31;
    puVar30 = (ushort *)((longlong)puVar29 + uVar31);
    uVar33 = 0;
    do {
      uVar2 = *(ulonglong *)((longlong)puVar29 + uVar33);
      uVar3 = *(ulonglong *)((longlong)puVar29 + uVar33 + 8);
      auVar4._8_6_ = 0;
      auVar4._0_8_ = uVar2;
      auVar4[0xe] = (char)(uVar2 >> 0x38);
      auVar6._8_4_ = 0;
      auVar6._0_8_ = uVar2;
      auVar6[0xc] = (char)(uVar2 >> 0x30);
      auVar6._13_2_ = auVar4._13_2_;
      auVar8._8_4_ = 0;
      auVar8._0_8_ = uVar2;
      auVar8._12_3_ = auVar6._12_3_;
      auVar10._8_2_ = 0;
      auVar10._0_8_ = uVar2;
      auVar10[10] = (char)(uVar2 >> 0x28);
      auVar10._11_4_ = auVar8._11_4_;
      auVar12._8_2_ = 0;
      auVar12._0_8_ = uVar2;
      auVar12._10_5_ = auVar10._10_5_;
      auVar14[8] = (char)(uVar2 >> 0x20);
      auVar14._0_8_ = uVar2;
      auVar14._9_6_ = auVar12._9_6_;
      auVar18._7_8_ = 0;
      auVar18._0_7_ = auVar14._8_7_;
      auVar20._1_8_ = SUB158(auVar18 << 0x40,7);
      auVar20[0] = (char)(uVar2 >> 0x18);
      auVar20._9_6_ = 0;
      auVar21._1_10_ = SUB1510(auVar20 << 0x30,5);
      auVar21[0] = (char)(uVar2 >> 0x10);
      auVar21._11_4_ = 0;
      auVar16[2] = (char)(uVar2 >> 8);
      auVar16._0_2_ = (ushort)uVar2;
      auVar16._3_12_ = SUB1512(auVar21 << 0x20,3);
      auVar41._0_2_ = (ushort)uVar2 & 0xff;
      auVar41._2_13_ = auVar16._2_13_;
      auVar41[0xf] = 0;
      auVar5._8_6_ = 0;
      auVar5._0_8_ = uVar3;
      auVar5[0xe] = (char)(uVar3 >> 0x38);
      auVar7._8_4_ = 0;
      auVar7._0_8_ = uVar3;
      auVar7[0xc] = (char)(uVar3 >> 0x30);
      auVar7._13_2_ = auVar5._13_2_;
      auVar9._8_4_ = 0;
      auVar9._0_8_ = uVar3;
      auVar9._12_3_ = auVar7._12_3_;
      auVar11._8_2_ = 0;
      auVar11._0_8_ = uVar3;
      auVar11[10] = (char)(uVar3 >> 0x28);
      auVar11._11_4_ = auVar9._11_4_;
      auVar13._8_2_ = 0;
      auVar13._0_8_ = uVar3;
      auVar13._10_5_ = auVar11._10_5_;
      auVar15[8] = (char)(uVar3 >> 0x20);
      auVar15._0_8_ = uVar3;
      auVar15._9_6_ = auVar13._9_6_;
      auVar19._7_8_ = 0;
      auVar19._0_7_ = auVar15._8_7_;
      auVar22._1_8_ = SUB158(auVar19 << 0x40,7);
      auVar22[0] = (char)(uVar3 >> 0x18);
      auVar22._9_6_ = 0;
      auVar23._1_10_ = SUB1510(auVar22 << 0x30,5);
      auVar23[0] = (char)(uVar3 >> 0x10);
      auVar23._11_4_ = 0;
      auVar17[2] = (char)(uVar3 >> 8);
      auVar17._0_2_ = (ushort)uVar3;
      auVar17._3_12_ = SUB1512(auVar23 << 0x20,3);
      auVar42._0_2_ = (ushort)uVar3 & 0xff;
      auVar42._2_13_ = auVar17._2_13_;
      auVar42[0xf] = 0;
      *(undefined1 (*) [16])(puVar32 + uVar33) = auVar41;
      *(undefined1 (*) [16])(puVar32 + uVar33 + 8) = auVar42;
      uVar33 = uVar33 + 0x10;
    } while (uVar31 != uVar33);
    puVar29 = puVar30;
    puVar32 = puVar34;
    uVar36 = uVar25 - (int)uVar31;
    if (uVar28 != uVar31) goto LAB_1425b22d8;
  }
  *(ushort **)(param_1 + 0x10) = puVar30;
  *(ushort **)(param_1 + 0x20) = puVar34;
  if (puVar38 == (uint *)0x0) {
    return;
  }
  puVar35 = puVar38;
  uVar36 = uVar26;
  if (6 < uVar25 - 1) {
    uVar33 = (ulonglong)(uVar25 - 1) + 1;
    uVar28 = uVar33 & 0x1fffffff8;
    uVar27 = uVar26 + 1;
    uVar39 = uVar26 + 2;
    uVar40 = uVar26 + 3;
    puVar35 = puVar38 + uVar28;
    uVar31 = 0;
    do {
      puVar1 = puVar38 + uVar31;
      *puVar1 = uVar36;
      puVar1[1] = uVar27;
      puVar1[2] = uVar39;
      puVar1[3] = uVar40;
      puVar1 = puVar38 + uVar31 + 4;
      *puVar1 = uVar36 + 4;
      puVar1[1] = uVar27 + 4;
      puVar1[2] = uVar39 + 4;
      puVar1[3] = uVar40 + 4;
      uVar31 = uVar31 + 8;
      uVar36 = uVar36 + 8;
      uVar27 = uVar27 + 8;
      uVar39 = uVar39 + 8;
      uVar40 = uVar40 + 8;
    } while (uVar28 != uVar31);
    uVar36 = uVar26 + (int)uVar28;
    if (uVar33 == uVar28) goto LAB_1425b23bf;
  }
  do {
    *puVar35 = uVar36;
    puVar35 = puVar35 + 1;
    uVar36 = uVar36 + 1;
  } while (uVar25 + uVar26 != uVar36);
LAB_1425b23bf:
  *(uint **)(param_1 + 0x30) = puVar35;
  return;
}



// FUNCTION 1425b2450 FUN_1425b2450 body=1113 status=ok
// SIG undefined FUN_1425b2450(void)

void FUN_1425b2450(longlong param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  longlong lVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  int *piVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined4 uVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  lVar9 = *(longlong *)(param_1 + 8);
  puVar12 = *(ushort **)(param_1 + 0x10);
  puVar10 = *(ushort **)(param_1 + 0x18);
  puVar16 = *(undefined1 **)(param_1 + 0x20);
  uVar14 = *(int *)(param_1 + 0x28) - (int)puVar16;
  uVar22 = *(uint *)(lVar9 + 0x54);
  iVar19 = -(uint)(uVar22 != 0);
  uVar21 = (ulonglong)((longlong)puVar10 - (longlong)puVar12) >> 1;
  uVar15 = (ulonglong)uVar14;
  if ((int)uVar21 < (int)uVar14) {
    uVar15 = uVar21 & 0xffffffff;
  }
  piVar17 = *(int **)(param_1 + 0x30);
  iVar20 = (int)uVar15;
  puVar18 = puVar16;
  if ((uVar22 == 0) || (iVar20 < 1)) {
    uVar14 = (uint)(*(undefined **)(lVar9 + 0x30) == &DAT_149c3bdb0) << 7 | 0x7f;
    uVar13 = (ushort)uVar14;
    if (0xf < iVar20) {
      uVar15 = uVar15 >> 4;
      iVar28 = (int)uVar15;
      do {
        iVar29 = (int)uVar15;
        uVar3 = *puVar12;
        *puVar18 = (char)uVar3;
        uVar4 = puVar12[1];
        puVar18[1] = (char)uVar4;
        uVar5 = puVar12[2];
        puVar18[2] = (char)uVar5;
        uVar6 = puVar12[3];
        puVar18[3] = (char)uVar6;
        uVar7 = puVar12[4];
        puVar18[4] = (char)uVar7;
        uVar8 = puVar12[5];
        puVar18[5] = (char)uVar8;
        auVar25._2_2_ = uVar4;
        auVar25._0_2_ = uVar3;
        uVar3 = puVar12[6];
        puVar18[6] = (char)uVar3;
        auVar25._6_2_ = uVar6;
        auVar25._4_2_ = uVar5;
        uVar4 = puVar12[7];
        puVar18[7] = (char)uVar4;
        uVar5 = puVar12[8];
        puVar18[8] = (char)uVar5;
        auVar25._10_2_ = uVar8;
        auVar25._8_2_ = uVar7;
        uVar6 = puVar12[9];
        puVar18[9] = (char)uVar6;
        auVar25._14_2_ = uVar4;
        auVar25._12_2_ = uVar3;
        uVar3 = puVar12[10];
        puVar18[10] = (char)uVar3;
        uVar4 = puVar12[0xb];
        puVar18[0xb] = (char)uVar4;
        uVar7 = puVar12[0xc];
        puVar18[0xc] = (char)uVar7;
        auVar31._2_2_ = uVar6;
        auVar31._0_2_ = uVar5;
        uVar5 = puVar12[0xd];
        puVar18[0xd] = (char)uVar5;
        auVar31._6_2_ = uVar4;
        auVar31._4_2_ = uVar3;
        uVar3 = puVar12[0xe];
        puVar18[0xe] = (char)uVar3;
        auVar31._10_2_ = uVar5;
        auVar31._8_2_ = uVar7;
        auVar31._14_2_ = puVar12[0xf];
        auVar31._12_2_ = uVar3;
        auVar31 = auVar31 | auVar25;
        auVar26._0_8_ = auVar31._8_8_;
        auVar26._8_4_ = auVar31._8_4_;
        auVar26._12_4_ = auVar31._12_4_;
        uVar27 = SUB164(auVar26 | auVar31,4);
        auVar32._4_4_ = uVar27;
        auVar32._0_4_ = uVar27;
        auVar32._8_4_ = uVar27;
        auVar32._12_4_ = uVar27;
        auVar32 = auVar32 | auVar26 | auVar31;
        puVar18[0xf] = (char)puVar12[0xf];
        if (uVar13 < (ushort)(auVar32._2_2_ | auVar32._0_2_)) goto LAB_1425b2680;
        puVar18 = puVar18 + 0x10;
        puVar12 = puVar12 + 0x10;
        uVar15 = (ulonglong)(iVar29 - 1);
      } while (1 < iVar29);
      iVar29 = 0;
LAB_1425b2680:
      uVar22 = iVar28 - iVar29;
      iVar20 = iVar20 + uVar22 * -0x10;
      if (piVar17 == (int *)0x0) {
        piVar17 = (int *)0x0;
      }
      else {
        puVar16 = puVar16 + (int)(uVar22 * 0x10);
        if (0 < (int)uVar22) {
          do {
            *piVar17 = iVar19;
            piVar17[1] = iVar19 + 1;
            piVar17[2] = iVar19 + 2;
            piVar17[3] = iVar19 + 3;
            piVar17[4] = iVar19 + 4;
            piVar17[5] = iVar19 + 5;
            piVar17[6] = iVar19 + 6;
            piVar17[7] = iVar19 + 7;
            piVar17[8] = iVar19 + 8;
            piVar17[9] = iVar19 + 9;
            piVar17[10] = iVar19 + 10;
            piVar17[0xb] = iVar19 + 0xb;
            piVar17[0xc] = iVar19 + 0xc;
            piVar17[0xd] = iVar19 + 0xd;
            piVar17[0xe] = iVar19 + 0xe;
            piVar17[0xf] = iVar19 + 0xf;
            piVar17 = piVar17 + 0x10;
            iVar19 = iVar19 + 0x10;
            bVar24 = 1 < uVar22;
            uVar22 = uVar22 - 1;
          } while (bVar24);
        }
      }
    }
    if (0 < iVar20) {
      iVar20 = iVar20 + 1;
      puVar11 = puVar12;
      do {
        puVar12 = puVar11 + 1;
        uVar3 = *puVar11;
        uVar22 = (uint)uVar3;
        if (uVar13 < uVar3) break;
        *puVar18 = (char)uVar3;
        puVar18 = puVar18 + 1;
        iVar20 = iVar20 + -1;
        puVar11 = puVar12;
      } while (1 < iVar20);
      if (uVar14 < uVar22) {
        if ((uVar22 & 0xfc00) == 0xd800) goto LAB_1425b24c0;
        goto LAB_1425b2799;
      }
    }
  }
  else {
LAB_1425b24c0:
    if (puVar12 < puVar10) {
      bVar24 = (*puVar12 & 0xfc00) == 0xdc00;
      if (bVar24) {
        uVar22 = uVar22 * 0x400 + (uint)*puVar12 + 0xfca02400;
      }
      puVar12 = puVar12 + bVar24;
LAB_1425b2799:
      *param_2 = (uint)((uVar22 & 0xfffff800) == 0xd800) * 2 + 10;
    }
    *(uint *)(lVar9 + 0x54) = uVar22;
  }
  if (piVar17 == (int *)0x0) {
    piVar17 = (int *)0x0;
  }
  else {
    uVar15 = (longlong)puVar18 - (longlong)puVar16;
    if (uVar15 != 0) {
      if (7 < uVar15) {
        uVar21 = uVar15 & 0xfffffffffffffff8;
        piVar1 = piVar17 + uVar21;
        iVar28 = iVar19 + 1;
        iVar29 = iVar19 + 2;
        iVar30 = iVar19 + 3;
        iVar20 = iVar19 + (int)uVar21;
        uVar23 = 0;
        do {
          piVar2 = piVar17 + uVar23;
          *piVar2 = iVar19;
          piVar2[1] = iVar28;
          piVar2[2] = iVar29;
          piVar2[3] = iVar30;
          piVar2 = piVar17 + uVar23 + 4;
          *piVar2 = iVar19 + 4;
          piVar2[1] = iVar28 + 4;
          piVar2[2] = iVar29 + 4;
          piVar2[3] = iVar30 + 4;
          uVar23 = uVar23 + 8;
          iVar19 = iVar19 + 8;
          iVar28 = iVar28 + 8;
          iVar29 = iVar29 + 8;
          iVar30 = iVar30 + 8;
        } while (uVar21 != uVar23);
        bVar24 = uVar15 == uVar21;
        piVar17 = piVar1;
        uVar15 = (ulonglong)((uint)uVar15 & 7);
        iVar19 = iVar20;
        if (bVar24) goto LAB_1425b285f;
      }
      do {
        *piVar17 = iVar19;
        piVar17 = piVar17 + 1;
        uVar15 = uVar15 - 1;
        iVar19 = iVar19 + 1;
      } while (uVar15 != 0);
    }
  }
LAB_1425b285f:
  if (((*param_2 < 1) && (puVar12 < puVar10)) && (*(undefined1 **)(param_1 + 0x28) <= puVar18)) {
    *param_2 = 0xf;
  }
  *(ushort **)(param_1 + 0x10) = puVar12;
  *(undefined1 **)(param_1 + 0x20) = puVar18;
  *(int **)(param_1 + 0x30) = piVar17;
  return;
}



// FUNCTION 1425b2900 FUN_1425b2900 body=362 status=ok
// SIG undefined FUN_1425b2900(void)

void FUN_1425b2900(longlong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  lVar3 = *(longlong *)(param_2 + 8);
  pbVar7 = *(byte **)(param_2 + 0x10);
  pbVar9 = *(byte **)(param_2 + 0x18);
  pbVar4 = *(byte **)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x28) - (int)pbVar4;
  if ((('\0' < *(char *)(lVar3 + 0x40)) && (uVar2 = *(uint *)(lVar3 + 0x48), uVar2 != 0)) &&
     (pbVar7 < pbVar9)) {
    if (iVar6 == 0) {
      *param_3 = 0xf;
      return;
    }
    if (((uVar2 & 0xfffffffe) != 0xc2) || (bVar5 = *pbVar7, 0x3f < (byte)(bVar5 + 0x80))) {
      *param_3 = -0x7f;
      return;
    }
    pbVar7 = pbVar7 + 1;
    *pbVar4 = bVar5 + 0x80 | (char)uVar2 << 6;
    pbVar4 = pbVar4 + 1;
    iVar6 = iVar6 + -1;
    *(undefined4 *)(lVar3 + 0x48) = 0;
    *(undefined1 *)(lVar3 + 0x40) = 0;
  }
  if ((pbVar7 < pbVar9) && ((byte)(pbVar9[-1] + 0x3e) < 0x33)) {
    pbVar9 = pbVar9 + -1;
  }
  do {
    if (pbVar9 <= pbVar7) {
      if ((*param_3 < 1) && (pbVar7 < *(byte **)(param_2 + 0x18))) {
        bVar5 = *pbVar7;
        *(byte *)(lVar3 + 0x41) = bVar5;
        *(uint *)(lVar3 + 0x48) = (uint)bVar5;
        *(undefined1 *)(lVar3 + 0x40) = 1;
        iVar6 = 1;
        if (((char)bVar5 < '\0') && (iVar6 = 0, (byte)(bVar5 + 0x3e) < 0x33)) {
          iVar6 = ((uint)(0xdf < bVar5) - (uint)(bVar5 < 0xf0)) + 3;
        }
        pbVar7 = pbVar7 + 1;
        *(int *)(lVar3 + 0x4c) = iVar6;
      }
LAB_1425b2a47:
      *(byte **)(param_2 + 0x10) = pbVar7;
      *(byte **)(param_1 + 0x20) = pbVar4;
      return;
    }
    if (iVar6 < 1) {
      *param_3 = 0xf;
      goto LAB_1425b2a47;
    }
    pbVar8 = pbVar7 + 1;
    bVar5 = *pbVar7;
    if ((char)bVar5 < '\0') {
      if (((bVar5 & 0xfe) != 0xc2) || (bVar1 = *pbVar8, 0x3f < (byte)(bVar1 + 0x80))) {
        *(byte **)(param_2 + 0x10) = pbVar7;
        *(byte **)(param_1 + 0x20) = pbVar4;
        *param_3 = -0x7f;
        return;
      }
      pbVar8 = pbVar7 + 2;
      bVar5 = bVar5 << 6 | bVar1 + 0x80;
    }
    *pbVar4 = bVar5;
    pbVar4 = pbVar4 + 1;
    iVar6 = iVar6 + -1;
    pbVar7 = pbVar8;
  } while( true );
}



// FUNCTION 1425b2a70 FUN_1425b2a70 body=594 status=ok
// SIG undefined FUN_1425b2a70(void)

void FUN_1425b2a70(longlong param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte *pbVar11;
  ushort *puVar12;
  longlong lVar13;
  byte *pbVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ushort *puVar25;
  undefined4 uVar26;
  bool bVar27;
  uint uVar28;
  uint uVar29;
  
  pbVar14 = *(byte **)(param_1 + 0x10);
  pbVar11 = *(byte **)(param_1 + 0x18);
  puVar12 = *(ushort **)(param_1 + 0x20);
  uVar24 = (ulonglong)(*(longlong *)(param_1 + 0x28) - (longlong)puVar12) >> 1;
  puVar15 = *(uint **)(param_1 + 0x30);
  uVar20 = (int)pbVar11 - (int)pbVar14;
  uVar22 = (ulonglong)uVar20;
  if ((int)uVar24 <= (int)uVar20) {
    uVar22 = uVar24 & 0xffffffff;
  }
  uVar20 = 0;
  iVar21 = (int)uVar22;
  puVar25 = puVar12;
  if (7 < iVar21) {
    iVar16 = (int)(uVar22 >> 3);
    iVar18 = iVar16 + 1;
    do {
      bVar3 = *pbVar14;
      *puVar25 = (ushort)bVar3;
      bVar4 = pbVar14[1];
      puVar25[1] = (ushort)bVar4;
      bVar5 = pbVar14[2];
      puVar25[2] = (ushort)bVar5;
      bVar6 = pbVar14[3];
      puVar25[3] = (ushort)bVar6;
      bVar7 = pbVar14[4];
      puVar25[4] = (ushort)bVar7;
      bVar8 = pbVar14[5];
      puVar25[5] = (ushort)bVar8;
      bVar9 = pbVar14[6];
      puVar25[6] = (ushort)bVar9;
      bVar10 = pbVar14[7];
      puVar25[7] = (ushort)bVar10;
      if ((char)(bVar10 | bVar7 | bVar8 | bVar9 | bVar5 | bVar6 | bVar4 | bVar3) < '\0') {
        iVar18 = iVar18 + -1;
        goto LAB_1425b2b43;
      }
      pbVar14 = pbVar14 + 8;
      puVar25 = puVar25 + 8;
      iVar18 = iVar18 + -1;
    } while (1 < iVar18);
    iVar18 = 0;
LAB_1425b2b43:
    iVar16 = iVar16 - iVar18;
    iVar21 = iVar21 + iVar16 * -8;
    uVar20 = 0;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)0x0;
    }
    else {
      puVar12 = puVar12 + iVar16 * 8;
      if (0 < iVar16) {
        uVar17 = iVar16 + 1;
        uVar19 = 0;
        do {
          *puVar15 = uVar19;
          puVar15[1] = uVar19 | 1;
          puVar15[2] = uVar19 | 2;
          puVar15[3] = uVar19 | 3;
          puVar15[4] = uVar19 | 4;
          puVar15[5] = uVar19 + 5;
          puVar15[6] = uVar19 + 6;
          uVar20 = uVar19 + 8;
          puVar15[7] = uVar19 + 7;
          puVar15 = puVar15 + 8;
          uVar17 = uVar17 - 1;
          uVar19 = uVar20;
        } while (1 < uVar17);
      }
    }
  }
  if (0 < iVar21) {
    iVar21 = iVar21 + 1;
    do {
      bVar3 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      if ((char)bVar3 < '\0') {
        lVar13 = *(longlong *)(param_1 + 8);
        *(byte *)(lVar13 + 0x41) = bVar3;
        *(undefined1 *)(lVar13 + 0x40) = 1;
        uVar26 = 0xc;
        goto LAB_1425b2c0b;
      }
      *puVar25 = (ushort)bVar3;
      puVar25 = puVar25 + 1;
      iVar21 = iVar21 + -1;
    } while (1 < iVar21);
  }
  if ((pbVar14 < pbVar11) && (uVar26 = 0xf, *(ushort **)(param_1 + 0x28) <= puVar25)) {
LAB_1425b2c0b:
    *param_2 = uVar26;
  }
  if (puVar15 == (uint *)0x0) {
    puVar15 = (uint *)0x0;
  }
  else {
    uVar22 = (longlong)puVar25 - (longlong)puVar12;
    if (uVar22 != 0) {
      uVar24 = (longlong)uVar22 >> 1;
      if (0xf < uVar22) {
        uVar23 = uVar24 & 0xfffffffffffffff8;
        puVar1 = puVar15 + uVar23;
        uVar17 = uVar20 + 1;
        uVar28 = uVar20 + 2;
        uVar29 = uVar20 + 3;
        uVar19 = uVar20 + (int)uVar23;
        uVar22 = 0;
        do {
          puVar2 = puVar15 + uVar22;
          *puVar2 = uVar20;
          puVar2[1] = uVar17;
          puVar2[2] = uVar28;
          puVar2[3] = uVar29;
          puVar2 = puVar15 + uVar22 + 4;
          *puVar2 = uVar20 + 4;
          puVar2[1] = uVar17 + 4;
          puVar2[2] = uVar28 + 4;
          puVar2[3] = uVar29 + 4;
          uVar22 = uVar22 + 8;
          uVar20 = uVar20 + 8;
          uVar17 = uVar17 + 8;
          uVar28 = uVar28 + 8;
          uVar29 = uVar29 + 8;
        } while (uVar23 != uVar22);
        bVar27 = uVar24 == uVar23;
        puVar15 = puVar1;
        uVar24 = (ulonglong)((uint)uVar24 & 7);
        uVar20 = uVar19;
        if (bVar27) goto LAB_1425b2cad;
      }
      do {
        *puVar15 = uVar20;
        puVar15 = puVar15 + 1;
        uVar24 = uVar24 - 1;
        uVar20 = uVar20 + 1;
      } while (uVar24 != 0);
    }
  }
LAB_1425b2cad:
  *(byte **)(param_1 + 0x10) = pbVar14;
  *(ushort **)(param_1 + 0x20) = puVar25;
  *(uint **)(param_1 + 0x30) = puVar15;
  return;
}



// FUNCTION 1425b2d30 FUN_1425b2d30 body=497 status=ok
// SIG undefined FUN_1425b2d30(void)

void FUN_1425b2d30(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char *pcVar8;
  bool bVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (*(char *)(*(longlong *)(param_2 + 8) + 0x40) < '\x01') {
    pcVar10 = *(char **)(param_2 + 0x10);
    pcVar8 = *(char **)(param_2 + 0x18);
    pcVar12 = *(char **)(param_1 + 0x20);
    uVar11 = *(int *)(param_1 + 0x28) - (int)pcVar12;
    uVar13 = (int)pcVar8 - (int)pcVar10;
    if ((int)uVar11 <= (int)uVar13) {
      uVar13 = uVar11;
    }
    if (0xf < (int)uVar13) {
      uVar11 = uVar13 >> 4;
      do {
        cVar1 = *pcVar10;
        *pcVar12 = cVar1;
        cVar2 = pcVar10[1];
        pcVar12[1] = cVar2;
        cVar3 = pcVar10[2];
        pcVar12[2] = cVar3;
        cVar4 = pcVar10[3];
        pcVar12[3] = cVar4;
        cVar5 = pcVar10[4];
        pcVar12[4] = cVar5;
        cVar6 = pcVar10[5];
        pcVar12[5] = cVar6;
        auVar15[1] = cVar2;
        auVar15[0] = cVar1;
        cVar1 = pcVar10[6];
        pcVar12[6] = cVar1;
        auVar15[3] = cVar4;
        auVar15[2] = cVar3;
        cVar2 = pcVar10[7];
        pcVar12[7] = cVar2;
        cVar3 = pcVar10[8];
        pcVar12[8] = cVar3;
        auVar15[5] = cVar6;
        auVar15[4] = cVar5;
        cVar4 = pcVar10[9];
        pcVar12[9] = cVar4;
        auVar15[7] = cVar2;
        auVar15[6] = cVar1;
        cVar1 = pcVar10[10];
        pcVar12[10] = cVar1;
        cVar2 = pcVar10[0xb];
        pcVar12[0xb] = cVar2;
        cVar5 = pcVar10[0xc];
        pcVar12[0xc] = cVar5;
        cVar6 = pcVar10[0xd];
        pcVar12[0xd] = cVar6;
        cVar7 = pcVar10[0xe];
        pcVar12[0xe] = cVar7;
        auVar17._0_4_ = CONCAT22(CONCAT11(cVar2,cVar1),CONCAT11(cVar4,cVar3));
        uVar19 = CONCAT22(CONCAT11(pcVar10[0xf],cVar7),CONCAT11(cVar6,cVar5));
        auVar15._12_4_ = uVar19;
        auVar15._8_4_ = auVar17._0_4_;
        pcVar12[0xf] = pcVar10[0xf];
        auVar17._4_4_ = uVar19;
        auVar17._8_4_ = auVar17._0_4_;
        auVar17._12_4_ = uVar19;
        uVar19 = SUB164(auVar17 | auVar15,4);
        auVar16._4_4_ = uVar19;
        auVar16._0_4_ = uVar19;
        auVar16._8_4_ = uVar19;
        auVar16._12_4_ = uVar19;
        auVar16 = auVar16 | auVar17 | auVar15;
        auVar18._0_4_ = auVar16._0_4_ >> 0x10;
        auVar18._4_4_ = 0;
        auVar18._8_4_ = auVar16._8_4_ >> 0x10;
        auVar18._12_4_ = auVar16._12_4_ >> 0x10;
        if ((char)(SUB161(auVar18 | auVar16,1) | SUB161(auVar18 | auVar16,0)) < '\0')
        goto LAB_1425b2ec6;
        pcVar12 = pcVar12 + 0x10;
        pcVar10 = pcVar10 + 0x10;
        bVar9 = 1 < (int)uVar11;
        uVar11 = uVar11 - 1;
      } while (bVar9);
      uVar11 = 0;
LAB_1425b2ec6:
      uVar13 = (uVar11 - (uVar13 >> 4)) * 0x10 + uVar13;
    }
    if (0 < (int)uVar13) {
      iVar14 = uVar13 + 1;
      do {
        cVar1 = *pcVar10;
        if (cVar1 < '\0') {
          uVar19 = 0xffffff81;
          goto LAB_1425b2f12;
        }
        pcVar10 = pcVar10 + 1;
        *pcVar12 = cVar1;
        pcVar12 = pcVar12 + 1;
        iVar14 = iVar14 + -1;
      } while (1 < iVar14);
    }
    if ((pcVar10 < pcVar8) && (uVar19 = 0xf, *(char **)(param_1 + 0x28) <= pcVar12)) {
LAB_1425b2f12:
      *param_3 = uVar19;
    }
    *(char **)(param_2 + 0x10) = pcVar10;
    *(char **)(param_1 + 0x20) = pcVar12;
  }
  else {
    *param_3 = 0xffffff81;
  }
  return;
}



// FUNCTION 1425b2f90 FUN_1425b2f90 body=1240 status=ok
// SIG undefined FUN_1425b2f90(void)

void FUN_1425b2f90(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar10;
  ushort *puVar11;
  int *piVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  int *piVar16;
  longlong lVar17;
  char cVar18;
  int iVar19;
  uint local_50;
  int iVar9;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar2 + 0x4c) < 8) {
    FUN_1425b3bf0();
    return;
  }
  puVar13 = *(ushort **)(param_1 + 0x10);
  iVar9 = (int)*(undefined8 *)(param_1 + 0x18);
  uVar7 = (uint)puVar13;
  uVar8 = iVar9 - uVar7;
  if ((uVar8 == 0) && (*(int *)(lVar2 + 0x48) == 0)) {
    return;
  }
  puVar11 = *(ushort **)(param_1 + 0x20);
  if (*(ushort **)(param_1 + 0x28) <= puVar11) {
    *param_2 = 0xf;
    return;
  }
  local_50 = (uint)((ulonglong)((longlong)*(ushort **)(param_1 + 0x28) - (longlong)puVar11) >> 1);
  piVar12 = *(int **)(param_1 + 0x30);
  if (*(int *)(lVar2 + 0x48) == 0) {
    cVar18 = *(char *)(lVar2 + 0x40);
    if (cVar18 != '\0') goto LAB_1425b3029;
    uVar10 = 0;
    uVar4 = 0;
  }
  else {
    *(char *)(lVar2 + 0x41) = (char)*(int *)(lVar2 + 0x48);
    *(undefined1 *)(lVar2 + 0x40) = 1;
    *(undefined4 *)(lVar2 + 0x48) = 0;
    cVar18 = '\x01';
LAB_1425b3029:
    iVar19 = (int)cVar18;
    uVar10 = (ulonglong)(4 - iVar19);
    uVar15 = ((iVar19 + iVar9) - uVar7) - 4;
    uVar7 = ~uVar7 + iVar9;
    lVar17 = 0;
    do {
      lVar6 = lVar17;
      uVar5 = (int)lVar6 + iVar19;
      *(byte *)(lVar2 + 0x41 + (ulonglong)uVar5) = *(byte *)((longlong)puVar13 + lVar6);
      if (uVar5 == 1) {
        uVar3 = *(ushort *)(lVar2 + 0x41) << 8;
        uVar4 = uVar3 | *(ushort *)(lVar2 + 0x41) >> 8;
        if ((uVar3 & 0xf800) != 0xd800) {
          *puVar11 = uVar4;
          uVar10 = lVar6 + 1;
          cVar18 = '\0';
          if (piVar12 == (int *)0x0) {
            piVar12 = (int *)0x0;
          }
          else {
            *piVar12 = -1;
            piVar12 = piVar12 + 1;
          }
          puVar11 = puVar11 + 1;
          local_50 = local_50 - 1;
          uVar15 = uVar7;
          goto LAB_1425b31d3;
        }
        if ((uVar3 & 0x400) != 0) {
          uVar10 = (ulonglong)((int)lVar6 + 1);
          cVar18 = '\x02';
          uVar8 = uVar7;
          goto LAB_1425b31d5;
        }
      }
      else if (uVar5 == 3) {
        if ((*(byte *)(lVar2 + 0x43) & 0xfc) != 0xdc) {
          *param_2 = 0xc;
          if ((longlong)((~(ulonglong)puVar13 + *(longlong *)(param_1 + 0x10)) - lVar6) < 2) {
            puVar13 = (ushort *)((longlong)puVar13 + lVar6);
            *(uint *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x43) | 0x100;
            *(undefined1 *)(lVar2 + 0x40) = 2;
          }
          else {
            puVar13 = (ushort *)((longlong)puVar13 + lVar6 + -1);
            *(undefined1 *)(lVar2 + 0x40) = 2;
          }
          goto LAB_1425b3442;
        }
        uVar4 = CONCAT11(*(byte *)(lVar2 + 0x43),*(undefined1 *)(lVar2 + 0x44));
        *puVar11 = *(ushort *)(lVar2 + 0x41) << 8 | *(ushort *)(lVar2 + 0x41) >> 8;
        if (local_50 < 2) {
          puVar11 = puVar11 + 1;
          *(ushort *)(lVar2 + 0x90) = uVar4;
          *(undefined1 *)(lVar2 + 0x5d) = 1;
          *param_2 = 0xf;
          local_50 = 0;
          cVar18 = '\0';
        }
        else {
          puVar11[1] = uVar4;
          cVar18 = '\0';
          if (piVar12 == (int *)0x0) {
            piVar12 = (int *)0x0;
          }
          else {
            piVar12[0] = -1;
            piVar12[1] = -1;
            piVar12 = piVar12 + 2;
          }
          puVar11 = puVar11 + 2;
          local_50 = local_50 - 2;
        }
        goto LAB_1425b31d3;
      }
      uVar7 = uVar7 - 1;
      lVar17 = lVar6 + 1;
    } while (uVar8 != (uint)lVar17);
    cVar18 = cVar18 + (char)lVar17;
    uVar10 = (ulonglong)uVar8;
    uVar15 = 0;
LAB_1425b31d3:
    uVar4 = 0;
    uVar8 = uVar15;
LAB_1425b31d5:
    *(char *)(lVar2 + 0x40) = cVar18;
    puVar13 = (ushort *)((longlong)puVar13 + lVar6 + 1);
  }
  iVar9 = (int)uVar10;
  uVar7 = uVar8 & 0xfffffffe;
  if (local_50 * 2 <= uVar8) {
    uVar7 = local_50 * 2;
  }
  if ((uVar4 == 0) && (uVar7 != 0)) {
    uVar8 = uVar8 - uVar7;
    uVar7 = uVar7 >> 1;
    local_50 = local_50 - uVar7;
    puVar14 = puVar13;
    if (piVar12 == (int *)0x0) {
      piVar12 = (int *)0x0;
      do {
        while( true ) {
          uVar3 = *puVar14 << 8;
          uVar4 = uVar3 | *puVar14 >> 8;
          puVar13 = puVar14 + 1;
          if ((uVar3 & 0xf800) != 0xd800) break;
          if (((uVar3 & 0x400) != 0) || (uVar7 < 2)) goto LAB_1425b337b;
          uVar3 = *puVar13;
          if (((byte)uVar3 & 0xfc) != 0xdc) goto LAB_1425b3384;
          bVar1 = *(byte *)((longlong)puVar14 + 3);
          puVar13 = puVar14 + 2;
          *puVar11 = uVar4;
          puVar11[1] = CONCAT11((byte)uVar3,bVar1);
          puVar11 = puVar11 + 2;
          uVar7 = uVar7 - 2;
          puVar14 = puVar13;
          if (uVar7 == 0) goto joined_r0x0001425b33f1;
        }
        *puVar11 = uVar4;
        puVar11 = puVar11 + 1;
        uVar7 = uVar7 - 1;
        puVar14 = puVar13;
      } while (uVar7 != 0);
    }
    else {
      do {
        uVar3 = *puVar14 << 8;
        uVar4 = uVar3 | *puVar14 >> 8;
        puVar13 = puVar14 + 1;
        iVar9 = (int)uVar10;
        if ((uVar3 & 0xf800) == 0xd800) {
          if (((uVar3 & 0x400) != 0) || (uVar7 < 2)) goto LAB_1425b337b;
          uVar3 = *puVar13;
          if (((byte)uVar3 & 0xfc) != 0xdc) goto LAB_1425b3384;
          bVar1 = *(byte *)((longlong)puVar14 + 3);
          puVar13 = puVar14 + 2;
          uVar7 = uVar7 - 1;
          *puVar11 = uVar4;
          puVar11[1] = CONCAT11((byte)uVar3,bVar1);
          puVar11 = puVar11 + 2;
          *piVar12 = iVar9;
          iVar19 = 4;
          lVar17 = 2;
          piVar16 = piVar12 + 1;
        }
        else {
          *puVar11 = uVar4;
          puVar11 = puVar11 + 1;
          iVar19 = 2;
          lVar17 = 1;
          piVar16 = piVar12;
        }
        piVar12 = piVar12 + lVar17;
        *piVar16 = iVar9;
        uVar10 = (ulonglong)(uint)(iVar9 + iVar19);
        uVar7 = uVar7 - 1;
        puVar14 = puVar13;
      } while (uVar7 != 0);
    }
    goto joined_r0x0001425b33f1;
  }
joined_r0x0001425b3377:
  if (uVar4 != 0) {
    *(ushort *)(lVar2 + 0x41) = uVar4 << 8 | uVar4 >> 8;
    *(undefined1 *)(lVar2 + 0x40) = 2;
    iVar19 = 0xc;
    if ((uVar4 & 0x400) == 0) {
      if (uVar8 < 2) goto joined_r0x0001425b33f1;
      uVar3 = *puVar13;
      if (((byte)uVar3 & 0xfc) == 0xdc) {
        bVar1 = *(byte *)((longlong)puVar13 + 1);
        *puVar11 = uVar4;
        if (piVar12 == (int *)0x0) {
          piVar12 = (int *)0x0;
        }
        else {
          *piVar12 = iVar9;
          piVar12 = piVar12 + 1;
        }
        puVar13 = puVar13 + 1;
        uVar8 = uVar8 - 2;
        puVar11 = puVar11 + 1;
        *(ushort *)(lVar2 + 0x90) = CONCAT11((byte)uVar3,bVar1);
        *(undefined1 *)(lVar2 + 0x5d) = 1;
        *(undefined1 *)(lVar2 + 0x40) = 0;
        iVar19 = 0xf;
      }
      else {
        uVar8 = 1;
      }
    }
    *param_2 = iVar19;
  }
joined_r0x0001425b33f1:
  if ((uVar8 != 0) && (*param_2 < 1)) {
    if (local_50 == 0) {
      *param_2 = 0xf;
    }
    else {
      uVar4 = *puVar13;
      puVar13 = (ushort *)((longlong)puVar13 + 1);
      cVar18 = *(char *)(lVar2 + 0x40);
      *(char *)(lVar2 + 0x40) = cVar18 + '\x01';
      *(byte *)(lVar2 + 0x41 + (longlong)cVar18) = (byte)uVar4;
    }
  }
LAB_1425b3442:
  *(ushort **)(param_1 + 0x10) = puVar13;
  *(ushort **)(param_1 + 0x20) = puVar11;
  *(int **)(param_1 + 0x30) = piVar12;
  return;
LAB_1425b337b:
  if (uVar7 == 0) goto joined_r0x0001425b33f1;
LAB_1425b3384:
  uVar8 = (uVar8 + uVar7 * 2) - 2;
  local_50 = local_50 + uVar7;
  goto joined_r0x0001425b3377;
}



// FUNCTION 1425b3490 FUN_1425b3490 body=1200 status=ok
// SIG undefined FUN_1425b3490(void)

void FUN_1425b3490(longlong param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int **local_80;
  int local_78;
  int *local_70;
  int *local_60;
  undefined1 *local_58;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar12 = *(ushort **)(param_1 + 0x10);
  iVar13 = (int)((ulonglong)(*(longlong *)(param_1 + 0x18) - (longlong)puVar12) >> 1);
  if (iVar13 == 0) goto LAB_1425b3941;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar3 + 0x50) == 1) {
    local_80 = (int **)(param_1 + 0x30);
    local_88 = *(undefined8 *)(param_1 + 0x28);
    local_78 = -1;
    local_70 = param_2;
    FUN_142637760(lVar3,&DAT_149c3c9c0,2,param_1 + 0x20);
    *(undefined4 *)(lVar3 + 0x50) = 0;
  }
  local_58 = *(undefined1 **)(param_1 + 0x20);
  if (*(undefined1 **)(param_1 + 0x28) <= local_58) {
    *param_2 = 0xf;
    goto LAB_1425b3941;
  }
  uVar4 = (int)*(undefined1 **)(param_1 + 0x28) - (int)local_58;
  piVar10 = *(int **)(param_1 + 0x30);
  uVar6 = *(uint *)(lVar3 + 0x54);
  local_60 = piVar10;
  if ((((short)uVar6 == 0) || (uVar4 < 4)) || (uVar1 = *puVar12, (uVar1 & 0xfc00) != 0xdc00)) {
    iVar5 = 0;
    if ((short)uVar6 != 0) goto LAB_1425b386e;
  }
  else {
    *local_58 = (char)(uVar6 >> 8);
    local_58[1] = (char)uVar6;
    local_58[2] = (char)(uVar1 >> 8);
    local_58[3] = (char)uVar1;
    local_58 = local_58 + 4;
    if (piVar10 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      *piVar10 = -1;
      piVar10[1] = -1;
      piVar10[2] = -1;
      piVar9 = piVar10 + 4;
      piVar10[3] = -1;
      local_60 = piVar9;
    }
    puVar12 = puVar12 + 1;
    iVar13 = iVar13 + -1;
    uVar4 = uVar4 - 4;
    *(undefined4 *)(lVar3 + 0x54) = 0;
    iVar5 = 1;
    piVar10 = piVar9;
  }
  uVar6 = uVar4 & 0xfffffffe;
  if ((uint)(iVar13 * 2) <= uVar4) {
    uVar6 = iVar13 * 2;
  }
  uVar4 = uVar4 - uVar6;
  uVar8 = uVar6 >> 1;
  iVar13 = iVar13 - uVar8;
  puVar11 = puVar12;
  if (piVar10 == (int *)0x0) {
    while (uVar6 != 0) {
      puVar12 = puVar11 + 1;
      uVar1 = *puVar11;
      uVar6 = (uint)uVar1;
      uVar7 = (undefined1)(uVar1 >> 8);
      if ((uVar6 & 0xf800) == 0xd800) {
        if (((uVar8 < 2) || ((uVar1 & 0x400) != 0)) ||
           (uVar2 = *puVar12, (uVar2 & 0xfc00) != 0xdc00)) goto LAB_1425b3862;
        puVar12 = puVar11 + 2;
        uVar8 = uVar8 - 1;
        *local_58 = uVar7;
        local_58[1] = (char)uVar1;
        local_58[2] = (char)(uVar2 >> 8);
        local_58[3] = (char)uVar2;
        local_58 = local_58 + 4;
      }
      else {
        *local_58 = uVar7;
        local_58[1] = (char)uVar1;
        local_58 = local_58 + 2;
      }
      uVar8 = uVar8 - 1;
      puVar11 = puVar12;
      uVar6 = uVar8;
    }
  }
  else {
    while (uVar6 != 0) {
      while( true ) {
        puVar12 = puVar11 + 1;
        uVar1 = *puVar11;
        uVar6 = (uint)uVar1;
        uVar7 = (undefined1)(uVar1 >> 8);
        if ((uVar6 & 0xf800) != 0xd800) break;
        if (((uVar8 < 2) || ((uVar1 & 0x400) != 0)) ||
           (uVar2 = *puVar12, (uVar2 & 0xfc00) != 0xdc00)) goto LAB_1425b3862;
        *local_58 = uVar7;
        local_58[1] = (char)uVar1;
        local_58[2] = (char)(uVar2 >> 8);
        local_58[3] = (char)uVar2;
        local_58 = local_58 + 4;
        puVar11 = puVar11 + 2;
        *local_60 = iVar5;
        local_60[1] = iVar5;
        piVar10 = local_60 + 3;
        local_60[2] = iVar5;
        local_60 = local_60 + 4;
        *piVar10 = iVar5;
        iVar5 = iVar5 + 2;
        uVar8 = uVar8 - 2;
        if (uVar8 == 0) goto LAB_1425b376c;
      }
      *local_58 = uVar7;
      local_58[1] = (char)uVar1;
      local_58 = local_58 + 2;
      piVar10 = local_60 + 1;
      *local_60 = iVar5;
      local_60 = local_60 + 2;
      *piVar10 = iVar5;
      iVar5 = iVar5 + 1;
      uVar8 = uVar8 - 1;
      puVar11 = puVar12;
      uVar6 = uVar8;
    }
  }
LAB_1425b376c:
  puVar12 = puVar11;
  if ((iVar13 != 0) && (uVar4 != 0)) {
    uVar1 = *puVar11;
    uVar6 = (uint)uVar1;
    puVar12 = puVar11 + 1;
    if ((uVar6 & 0xf800) == 0xd800) {
      if ((uVar1 & 0x400) == 0) goto LAB_1425b387a;
LAB_1425b37ac:
      *param_2 = 0xc;
      iVar13 = 0;
      goto LAB_1425b38cf;
    }
    local_4c = uVar1 << 8 | uVar1 >> 8;
    iVar13 = 2;
    goto LAB_1425b38de;
  }
  goto LAB_1425b3916;
LAB_1425b3862:
  uVar4 = uVar4 + uVar8 * 2;
  if ((short)uVar6 != 0) {
LAB_1425b386e:
    if ((uVar6 & 0x400) != 0) goto LAB_1425b37ac;
LAB_1425b387a:
    iVar13 = 0;
    if (puVar12 < *(ushort **)(param_1 + 0x18)) {
      uVar1 = *puVar12;
      if ((uVar1 & 0xfc00) == 0xdc00) {
        puVar12 = puVar12 + 1;
        local_4c = CONCAT11((char)uVar6,(char)(uVar6 >> 8));
        local_4a = (undefined1)(uVar1 >> 8);
        local_49 = (undefined1)uVar1;
        iVar13 = 4;
        uVar6 = 0;
      }
      else {
        *param_2 = 0xc;
      }
    }
LAB_1425b38cf:
    *(uint *)(lVar3 + 0x54) = uVar6 & 0xffff;
  }
  if (iVar13 != 0) {
LAB_1425b38de:
    local_88 = *(undefined8 *)(param_1 + 0x28);
    local_80 = &local_60;
    local_78 = iVar5;
    local_70 = param_2;
    FUN_142637760(lVar3,&local_4c,iVar13,&local_58);
    uVar4 = *(int *)(param_1 + 0x28) - (int)local_58;
  }
LAB_1425b3916:
  if (((*param_2 < 1) && (puVar12 < *(ushort **)(param_1 + 0x18))) && (uVar4 == 0)) {
    *param_2 = 0xf;
  }
  *(ushort **)(param_1 + 0x10) = puVar12;
  *(undefined1 **)(param_1 + 0x20) = local_58;
  *(int **)(param_1 + 0x30) = local_60;
LAB_1425b3941:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1425b3960 FUN_1425b3960 body=614 status=ok
// SIG undefined FUN_1425b3960(void)

uint FUN_1425b3960(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  longlong lVar15;
  byte *pbVar16;
  uint uVar17;
  ulonglong uVar18;
  
  lVar15 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar15 + 0x4c) < 8) {
    return 0xfffffff7;
  }
  pbVar10 = *(byte **)(param_1 + 0x10);
  pbVar4 = *(byte **)(param_1 + 0x18);
  if (pbVar4 <= pbVar10) {
    *param_2 = 8;
    return 0xffff;
  }
  pbVar16 = pbVar10 + 2;
  if (pbVar4 < pbVar16) {
    *(byte *)(lVar15 + 0x41) = *pbVar10;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
    *(byte **)(param_1 + 0x10) = pbVar10 + 1;
    *param_2 = 0xb;
    return 0xffff;
  }
  bVar2 = *pbVar10;
  bVar3 = pbVar10[1];
  if ((bVar2 & 0xf8) != 0xd8) {
    *(byte **)(param_1 + 0x10) = pbVar16;
    return (uint)CONCAT11(bVar2,bVar3);
  }
  if ((bVar2 & 4) == 0) {
    pbVar13 = pbVar10 + 4;
    if (pbVar13 <= pbVar4) {
      if (((*pbVar16 & 0xfc) == 0xdc) &&
         (uVar17 = (uint)CONCAT11(bVar2,bVar3) * 0x400 + (uint)CONCAT11(*pbVar16,pbVar10[3]),
         uVar9 = uVar17 + 0xfca02400, pbVar16 = pbVar13, 0x35fdbff < uVar17)) goto LAB_1425b3b3c;
      goto LAB_1425b3b13;
    }
    pbVar16 = (byte *)(lVar15 + 0x41);
    uVar12 = (longlong)pbVar4 - (longlong)pbVar10;
    *(char *)(lVar15 + 0x40) = (char)uVar12;
    pbVar13 = pbVar4;
    if ((uVar12 < 8) || ((lVar15 - (longlong)pbVar10) + 0x41U < 0x20)) {
LAB_1425b3a21:
      uVar12 = ~(ulonglong)pbVar10;
      uVar17 = (int)pbVar4 - (int)pbVar10 & 7;
      uVar18 = (ulonglong)uVar17;
      if (uVar17 != 0) {
        do {
          bVar2 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          *pbVar16 = bVar2;
          pbVar16 = pbVar16 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      uVar14 = 0xb;
      if (&DAT_00000006 < pbVar4 + uVar12) {
        lVar15 = 0;
        do {
          pbVar16[lVar15] = pbVar10[lVar15];
          pbVar16[lVar15 + 1] = pbVar10[lVar15 + 1];
          pbVar16[lVar15 + 2] = pbVar10[lVar15 + 2];
          pbVar16[lVar15 + 3] = pbVar10[lVar15 + 3];
          pbVar16[lVar15 + 4] = pbVar10[lVar15 + 4];
          pbVar16[lVar15 + 5] = pbVar10[lVar15 + 5];
          pbVar16[lVar15 + 6] = pbVar10[lVar15 + 6];
          pbVar16[lVar15 + 7] = pbVar10[lVar15 + 7];
          lVar8 = lVar15 + 8;
          lVar15 = lVar15 + 8;
        } while (pbVar10 + lVar8 != pbVar4);
      }
    }
    else if (uVar12 < 0x20) {
      uVar11 = 0;
LAB_1425b3b88:
      uVar18 = uVar12 & 0xfffffffffffffff8;
      do {
        *(undefined8 *)(pbVar16 + uVar11) = *(undefined8 *)(pbVar10 + uVar11);
        uVar11 = uVar11 + 8;
      } while (uVar18 != uVar11);
      uVar14 = 0xb;
      pbVar10 = pbVar10 + uVar18;
      pbVar16 = pbVar16 + uVar18;
      if (uVar12 != uVar18) goto LAB_1425b3a21;
    }
    else {
      uVar11 = uVar12 & 0xffffffffffffffe0;
      uVar18 = 0;
      do {
        uVar5 = *(undefined8 *)(pbVar10 + uVar18 + 8);
        uVar6 = *(undefined8 *)(pbVar10 + uVar18 + 0x10);
        uVar7 = *(undefined8 *)(pbVar10 + uVar18 + 0x10 + 8);
        puVar1 = (undefined8 *)(lVar15 + 0x41 + uVar18);
        *puVar1 = *(undefined8 *)(pbVar10 + uVar18);
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)(lVar15 + 0x51 + uVar18);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        uVar18 = uVar18 + 0x20;
      } while (uVar11 != uVar18);
      uVar14 = 0xb;
      if (uVar12 != uVar11) {
        if ((uVar12 & 0x18) == 0) {
          pbVar16 = pbVar16 + uVar11;
          pbVar10 = pbVar10 + uVar11;
          goto LAB_1425b3a21;
        }
        goto LAB_1425b3b88;
      }
    }
  }
  else {
LAB_1425b3b13:
    *(undefined1 *)(lVar15 + 0x40) = 2;
    *(byte *)(lVar15 + 0x41) = pbVar16[-2];
    *(byte *)(lVar15 + 0x42) = pbVar16[-1];
    uVar14 = 0xc;
    pbVar13 = pbVar16;
  }
  *param_2 = uVar14;
  uVar9 = 0xffff;
LAB_1425b3b3c:
  *(byte **)(param_1 + 0x10) = pbVar13;
  return uVar9;
}



// FUNCTION 1425b3bf0 FUN_1425b3bf0 body=640 status=ok
// SIG undefined FUN_1425b3bf0(void)

void FUN_1425b3bf0(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  char cVar15;
  undefined4 uVar16;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  
  lVar2 = *(longlong *)(param_1 + 8);
  pcVar14 = *(char **)(param_1 + 0x10);
  pcVar3 = *(char **)(param_1 + 0x18);
  uVar19 = *(uint *)(lVar2 + 0x4c);
  if (pcVar14 < pcVar3) {
    piVar18 = *(int **)(param_1 + 0x30);
    iVar23 = 0;
    do {
      if (0 < *param_2) break;
      switch(uVar19) {
      case 0:
        cVar15 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        *(char *)(lVar2 + 0x41) = cVar15;
        *(undefined1 *)(lVar2 + 0x40) = 1;
        uVar19 = 1;
        break;
      case 1:
        cVar15 = *pcVar14;
        if ((*(char *)(lVar2 + 0x41) == -2) && (cVar15 == -1)) {
          uVar19 = 8;
          if (*(undefined **)(lVar2 + 0x30) == &DAT_149c3c458) {
            uVar16 = 9;
            cVar15 = -1;
            goto LAB_1425b3e5a;
          }
        }
        else {
          puVar4 = *(undefined **)(lVar2 + 0x30);
          if ((*(char *)(lVar2 + 0x41) != -1) || (cVar15 != -2)) {
            if (((puVar4 == &DAT_149c3c678) || (puVar4 == &DAT_149c3c898)) &&
               ((*(uint *)(lVar2 + 0x38) & 0xf) == 1)) {
              uVar16 = 8;
              goto LAB_1425b3e5a;
            }
            pcVar5 = *(char **)(param_1 + 0x10);
            if (pcVar14 != pcVar5) {
              *(undefined1 *)(lVar2 + 0x40) = 0;
              pcVar14 = pcVar5;
            }
            uVar19 = puVar4 == &DAT_149c3c458 | 8;
            *(uint *)(lVar2 + 0x4c) = uVar19;
            break;
          }
          uVar19 = 9;
          if (puVar4 == &DAT_149c3c238) {
            uVar16 = 8;
            cVar15 = -2;
LAB_1425b3e5a:
            *(char *)(lVar2 + 0x42) = cVar15;
            *(undefined1 *)(lVar2 + 0x40) = 2;
            *(char **)(param_1 + 0x10) = pcVar14 + 1;
            *(undefined4 *)(lVar2 + 0x4c) = uVar16;
            *param_2 = 0x12;
            return;
          }
        }
        pcVar14 = pcVar14 + 1;
        *(undefined1 *)(lVar2 + 0x40) = 0;
        iVar23 = (int)pcVar14 - *(int *)(param_1 + 0x10);
        *(uint *)(lVar2 + 0x4c) = uVar19;
        break;
      case 8:
        *(char **)(param_1 + 0x10) = pcVar14;
        FUN_1425b2f90(param_1,param_2);
        pcVar14 = *(char **)(param_1 + 0x10);
        uVar19 = 8;
        break;
      case 9:
        *(char **)(param_1 + 0x10) = pcVar14;
        FUN_1425b3e80(param_1,param_2);
        pcVar14 = *(char **)(param_1 + 0x10);
        uVar19 = 9;
      }
    } while (pcVar14 < pcVar3);
    if (((piVar18 != (int *)0x0) && (iVar23 != 0)) &&
       (piVar6 = *(int **)(param_1 + 0x30), piVar18 < piVar6)) {
      piVar17 = piVar18 + 1;
      if (piVar18 + 1 < piVar6) {
        piVar17 = piVar6;
      }
      if (0x1b < ~(ulonglong)piVar18 + (longlong)piVar17) {
        uVar20 = (~(ulonglong)piVar18 + (longlong)piVar17 >> 2) + 1;
        uVar21 = uVar20 & 0xfffffffffffffff8;
        uVar22 = 0;
        do {
          piVar17 = piVar18 + uVar22;
          iVar7 = piVar17[1];
          iVar8 = piVar17[2];
          iVar9 = piVar17[3];
          piVar1 = piVar18 + uVar22 + 4;
          iVar10 = *piVar1;
          iVar11 = piVar1[1];
          iVar12 = piVar1[2];
          iVar13 = piVar1[3];
          piVar1 = piVar18 + uVar22;
          *piVar1 = *piVar17 + iVar23;
          piVar1[1] = iVar7 + iVar23;
          piVar1[2] = iVar8 + iVar23;
          piVar1[3] = iVar9 + iVar23;
          piVar17 = piVar18 + uVar22 + 4;
          *piVar17 = iVar10 + iVar23;
          piVar17[1] = iVar11 + iVar23;
          piVar17[2] = iVar12 + iVar23;
          piVar17[3] = iVar13 + iVar23;
          uVar22 = uVar22 + 8;
        } while (uVar21 != uVar22);
        piVar18 = piVar18 + uVar21;
        if (uVar20 == uVar21) goto LAB_1425b3dfc;
      }
      do {
        *piVar18 = *piVar18 + iVar23;
        piVar18 = piVar18 + 1;
      } while (piVar18 < piVar6);
    }
  }
LAB_1425b3dfc:
  *(char **)(param_1 + 0x10) = pcVar14;
  if ((pcVar14 == pcVar3) && (*(char *)(param_1 + 2) != '\0')) {
    if (uVar19 == 9) {
      FUN_1425b3e80(param_1,param_2);
    }
    else if (uVar19 == 8) {
      FUN_1425b2f90(param_1,param_2);
    }
  }
  *(uint *)(lVar2 + 0x4c) = uVar19;
  return;
}



// FUNCTION 1425b3e80 FUN_1425b3e80 body=1218 status=ok
// SIG undefined FUN_1425b3e80(void)

void FUN_1425b3e80(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar11;
  ushort *puVar12;
  int *piVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  int *piVar17;
  longlong lVar18;
  char cVar19;
  int iVar20;
  int iVar10;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar2 + 0x4c) < 8) {
    FUN_1425b3bf0();
    return;
  }
  puVar14 = *(ushort **)(param_1 + 0x10);
  iVar10 = (int)*(undefined8 *)(param_1 + 0x18);
  uVar8 = (uint)puVar14;
  uVar9 = iVar10 - uVar8;
  if ((uVar9 == 0) && (*(int *)(lVar2 + 0x48) == 0)) {
    return;
  }
  puVar12 = *(ushort **)(param_1 + 0x20);
  if (*(ushort **)(param_1 + 0x28) <= puVar12) {
    *param_2 = 0xf;
    return;
  }
  uVar4 = (uint)((ulonglong)((longlong)*(ushort **)(param_1 + 0x28) - (longlong)puVar12) >> 1);
  piVar13 = *(int **)(param_1 + 0x30);
  if (*(int *)(lVar2 + 0x48) == 0) {
    cVar19 = *(char *)(lVar2 + 0x40);
    if (cVar19 != '\0') goto LAB_1425b3f16;
    uVar11 = 0;
    uVar5 = 0;
  }
  else {
    *(char *)(lVar2 + 0x41) = (char)*(int *)(lVar2 + 0x48);
    *(undefined1 *)(lVar2 + 0x40) = 1;
    *(undefined4 *)(lVar2 + 0x48) = 0;
    cVar19 = '\x01';
LAB_1425b3f16:
    iVar20 = (int)cVar19;
    uVar11 = (ulonglong)(4 - iVar20);
    uVar16 = ((iVar20 + iVar10) - uVar8) - 4;
    uVar8 = ~uVar8 + iVar10;
    lVar18 = 0;
    do {
      lVar7 = lVar18;
      uVar6 = (int)lVar7 + iVar20;
      *(undefined1 *)(lVar2 + 0x41 + (ulonglong)uVar6) = *(undefined1 *)((longlong)puVar14 + lVar7);
      if (uVar6 == 1) {
        uVar5 = *(ushort *)(lVar2 + 0x41);
        if ((uVar5 & 0xf800) != 0xd800) {
          *puVar12 = uVar5;
          uVar11 = lVar7 + 1;
          cVar19 = '\0';
          if (piVar13 == (int *)0x0) {
            piVar13 = (int *)0x0;
          }
          else {
            *piVar13 = -1;
            piVar13 = piVar13 + 1;
          }
          puVar12 = puVar12 + 1;
          uVar4 = uVar4 - 1;
          uVar16 = uVar8;
          goto LAB_1425b4091;
        }
        if ((uVar5 & 0x400) != 0) {
          uVar11 = (ulonglong)((int)lVar7 + 1);
          cVar19 = '\x02';
          uVar9 = uVar8;
          goto LAB_1425b4093;
        }
      }
      else if (uVar6 == 3) {
        if ((*(byte *)(lVar2 + 0x44) & 0xfc) != 0xdc) {
          *param_2 = 0xc;
          if ((longlong)((~(ulonglong)puVar14 + *(longlong *)(param_1 + 0x10)) - lVar7) < 2) {
            puVar14 = (ushort *)((longlong)puVar14 + lVar7);
            *(uint *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x43) | 0x100;
            *(undefined1 *)(lVar2 + 0x40) = 2;
          }
          else {
            puVar14 = (ushort *)((longlong)puVar14 + lVar7 + -1);
            *(undefined1 *)(lVar2 + 0x40) = 2;
          }
          goto LAB_1425b430e;
        }
        uVar5 = CONCAT11(*(byte *)(lVar2 + 0x44),*(undefined1 *)(lVar2 + 0x43));
        *puVar12 = *(ushort *)(lVar2 + 0x41);
        if (uVar4 < 2) {
          puVar12 = puVar12 + 1;
          *(ushort *)(lVar2 + 0x90) = uVar5;
          *(undefined1 *)(lVar2 + 0x5d) = 1;
          *param_2 = 0xf;
          uVar4 = 0;
          cVar19 = '\0';
        }
        else {
          puVar12[1] = uVar5;
          cVar19 = '\0';
          if (piVar13 == (int *)0x0) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13[0] = -1;
            piVar13[1] = -1;
            piVar13 = piVar13 + 2;
          }
          puVar12 = puVar12 + 2;
          uVar4 = uVar4 - 2;
        }
        goto LAB_1425b4091;
      }
      uVar8 = uVar8 - 1;
      lVar18 = lVar7 + 1;
    } while (uVar9 != (uint)lVar18);
    cVar19 = cVar19 + (char)lVar18;
    uVar11 = (ulonglong)uVar9;
    uVar16 = 0;
LAB_1425b4091:
    uVar5 = 0;
    uVar9 = uVar16;
LAB_1425b4093:
    *(char *)(lVar2 + 0x40) = cVar19;
    puVar14 = (ushort *)((longlong)puVar14 + lVar7 + 1);
  }
  iVar10 = (int)uVar11;
  uVar8 = uVar9 & 0xfffffffe;
  if (uVar4 * 2 <= uVar9) {
    uVar8 = uVar4 * 2;
  }
  if ((uVar5 == 0) && (uVar8 != 0)) {
    uVar9 = uVar9 - uVar8;
    uVar8 = uVar8 >> 1;
    uVar4 = uVar4 - uVar8;
    puVar15 = puVar14;
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)0x0;
      do {
        while( true ) {
          uVar5 = *puVar15;
          puVar14 = puVar15 + 1;
          if ((uVar5 & 0xf800) != 0xd800) break;
          if (((uVar5 & 0x400) != 0) || (uVar8 < 2)) goto LAB_1425b423c;
          bVar1 = *(byte *)((longlong)puVar15 + 3);
          if ((bVar1 & 0xfc) != 0xdc) goto LAB_1425b4245;
          uVar3 = puVar15[1];
          puVar14 = puVar15 + 2;
          *puVar12 = uVar5;
          puVar12[1] = CONCAT11(bVar1,(char)uVar3);
          puVar12 = puVar12 + 2;
          uVar8 = uVar8 - 2;
          puVar15 = puVar14;
          if (uVar8 == 0) goto joined_r0x0001425b42b5;
        }
        *puVar12 = uVar5;
        puVar12 = puVar12 + 1;
        uVar8 = uVar8 - 1;
        puVar15 = puVar14;
      } while (uVar8 != 0);
    }
    else {
      do {
        uVar5 = *puVar15;
        puVar14 = puVar15 + 1;
        iVar10 = (int)uVar11;
        if ((uVar5 & 0xf800) == 0xd800) {
          if (((uVar5 & 0x400) != 0) || (uVar8 < 2)) goto LAB_1425b423c;
          bVar1 = *(byte *)((longlong)puVar15 + 3);
          if ((bVar1 & 0xfc) != 0xdc) goto LAB_1425b4245;
          uVar3 = puVar15[1];
          puVar14 = puVar15 + 2;
          uVar8 = uVar8 - 1;
          *puVar12 = uVar5;
          puVar12[1] = CONCAT11(bVar1,(char)uVar3);
          puVar12 = puVar12 + 2;
          *piVar13 = iVar10;
          iVar20 = 4;
          lVar18 = 2;
          piVar17 = piVar13 + 1;
        }
        else {
          *puVar12 = uVar5;
          puVar12 = puVar12 + 1;
          iVar20 = 2;
          lVar18 = 1;
          piVar17 = piVar13;
        }
        piVar13 = piVar13 + lVar18;
        *piVar17 = iVar10;
        uVar11 = (ulonglong)(uint)(iVar10 + iVar20);
        uVar8 = uVar8 - 1;
        puVar15 = puVar14;
      } while (uVar8 != 0);
    }
    goto joined_r0x0001425b42b5;
  }
joined_r0x0001425b4238:
  if (uVar5 != 0) {
    *(ushort *)(lVar2 + 0x41) = uVar5;
    *(undefined1 *)(lVar2 + 0x40) = 2;
    iVar20 = 0xc;
    if ((uVar5 & 0x400) == 0) {
      if (uVar9 < 2) goto joined_r0x0001425b42b5;
      bVar1 = *(byte *)((longlong)puVar14 + 1);
      if ((bVar1 & 0xfc) == 0xdc) {
        uVar3 = *puVar14;
        *puVar12 = uVar5;
        if (piVar13 == (int *)0x0) {
          piVar13 = (int *)0x0;
        }
        else {
          *piVar13 = iVar10;
          piVar13 = piVar13 + 1;
        }
        puVar14 = puVar14 + 1;
        uVar9 = uVar9 - 2;
        puVar12 = puVar12 + 1;
        *(ushort *)(lVar2 + 0x90) = CONCAT11(bVar1,(char)uVar3);
        *(undefined1 *)(lVar2 + 0x5d) = 1;
        *(undefined1 *)(lVar2 + 0x40) = 0;
        iVar20 = 0xf;
      }
      else {
        uVar9 = 1;
      }
    }
    *param_2 = iVar20;
  }
joined_r0x0001425b42b5:
  if ((uVar9 != 0) && (*param_2 < 1)) {
    if (uVar4 == 0) {
      *param_2 = 0xf;
    }
    else {
      uVar5 = *puVar14;
      puVar14 = (ushort *)((longlong)puVar14 + 1);
      cVar19 = *(char *)(lVar2 + 0x40);
      *(char *)(lVar2 + 0x40) = cVar19 + '\x01';
      *(char *)(lVar2 + 0x41 + (longlong)cVar19) = (char)uVar5;
    }
  }
LAB_1425b430e:
  *(ushort **)(param_1 + 0x10) = puVar14;
  *(ushort **)(param_1 + 0x20) = puVar12;
  *(int **)(param_1 + 0x30) = piVar13;
  return;
LAB_1425b423c:
  if (uVar8 == 0) goto joined_r0x0001425b42b5;
LAB_1425b4245:
  uVar9 = (uVar9 + uVar8 * 2) - 2;
  uVar4 = uVar4 + uVar8;
  goto joined_r0x0001425b4238;
}



// FUNCTION 1425b43c0 FUN_1425b43c0 body=1172 status=ok
// SIG undefined FUN_1425b43c0(void)

void FUN_1425b43c0(longlong param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar7;
  uint uVar6;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int **local_80;
  int local_78;
  int *local_70;
  int *local_60;
  undefined1 *local_58;
  ushort local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar12 = *(ushort **)(param_1 + 0x10);
  iVar13 = (int)((ulonglong)(*(longlong *)(param_1 + 0x18) - (longlong)puVar12) >> 1);
  if (iVar13 == 0) goto LAB_1425b4853;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar3 + 0x50) == 1) {
    local_80 = (int **)(param_1 + 0x30);
    local_88 = *(undefined8 *)(param_1 + 0x28);
    local_78 = -1;
    local_70 = param_2;
    FUN_142637760(lVar3,&DAT_149c3c9c2,2,param_1 + 0x20);
    *(undefined4 *)(lVar3 + 0x50) = 0;
  }
  local_58 = *(undefined1 **)(param_1 + 0x20);
  if (*(undefined1 **)(param_1 + 0x28) <= local_58) {
    *param_2 = 0xf;
    goto LAB_1425b4853;
  }
  uVar10 = (int)*(undefined1 **)(param_1 + 0x28) - (int)local_58;
  piVar9 = *(int **)(param_1 + 0x30);
  uVar6 = *(uint *)(lVar3 + 0x54);
  local_60 = piVar9;
  if ((((short)uVar6 == 0) || (uVar10 < 4)) || (uVar1 = *puVar12, (uVar1 & 0xfc00) != 0xdc00)) {
    iVar4 = 0;
    if ((short)uVar6 != 0) goto LAB_1425b4784;
  }
  else {
    *local_58 = (char)uVar6;
    local_58[1] = (char)(uVar6 >> 8);
    local_58[2] = (char)uVar1;
    local_58[3] = (char)(uVar1 >> 8);
    local_58 = local_58 + 4;
    if (piVar9 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      *piVar9 = -1;
      piVar9[1] = -1;
      piVar9[2] = -1;
      piVar8 = piVar9 + 4;
      piVar9[3] = -1;
      local_60 = piVar8;
    }
    puVar12 = puVar12 + 1;
    iVar13 = iVar13 + -1;
    uVar10 = uVar10 - 4;
    *(undefined4 *)(lVar3 + 0x54) = 0;
    iVar4 = 1;
    piVar9 = piVar8;
  }
  uVar6 = uVar10 & 0xfffffffe;
  if ((uint)(iVar13 * 2) <= uVar10) {
    uVar6 = iVar13 * 2;
  }
  uVar10 = uVar10 - uVar6;
  uVar5 = uVar6 >> 1;
  iVar13 = iVar13 - uVar5;
  puVar11 = puVar12;
  if (piVar9 == (int *)0x0) {
    while (uVar6 != 0) {
      puVar12 = puVar11 + 1;
      uVar1 = *puVar11;
      uVar6 = (uint)uVar1;
      uVar7 = (undefined1)(uVar1 >> 8);
      if ((uVar6 & 0xf800) == 0xd800) {
        if (((uVar5 < 2) || ((uVar1 & 0x400) != 0)) ||
           (uVar2 = *puVar12, (uVar2 & 0xfc00) != 0xdc00)) goto LAB_1425b4778;
        puVar12 = puVar11 + 2;
        uVar5 = uVar5 - 1;
        *local_58 = (char)uVar1;
        local_58[1] = uVar7;
        local_58[2] = (char)uVar2;
        local_58[3] = (char)(uVar2 >> 8);
        local_58 = local_58 + 4;
      }
      else {
        *local_58 = (char)uVar1;
        local_58[1] = uVar7;
        local_58 = local_58 + 2;
      }
      uVar5 = uVar5 - 1;
      puVar11 = puVar12;
      uVar6 = uVar5;
    }
  }
  else {
    while (uVar6 != 0) {
      while( true ) {
        puVar12 = puVar11 + 1;
        uVar1 = *puVar11;
        uVar6 = (uint)uVar1;
        uVar7 = (undefined1)(uVar1 >> 8);
        if ((uVar6 & 0xf800) != 0xd800) break;
        if (((uVar5 < 2) || ((uVar1 & 0x400) != 0)) ||
           (uVar2 = *puVar12, (uVar2 & 0xfc00) != 0xdc00)) goto LAB_1425b4778;
        *local_58 = (char)uVar1;
        local_58[1] = uVar7;
        local_58[2] = (char)uVar2;
        local_58[3] = (char)(uVar2 >> 8);
        local_58 = local_58 + 4;
        puVar11 = puVar11 + 2;
        *local_60 = iVar4;
        local_60[1] = iVar4;
        piVar9 = local_60 + 3;
        local_60[2] = iVar4;
        local_60 = local_60 + 4;
        *piVar9 = iVar4;
        iVar4 = iVar4 + 2;
        uVar5 = uVar5 - 2;
        if (uVar5 == 0) goto LAB_1425b4694;
      }
      *local_58 = (char)uVar1;
      local_58[1] = uVar7;
      local_58 = local_58 + 2;
      piVar9 = local_60 + 1;
      *local_60 = iVar4;
      local_60 = local_60 + 2;
      *piVar9 = iVar4;
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 - 1;
      puVar11 = puVar12;
      uVar6 = uVar5;
    }
  }
LAB_1425b4694:
  puVar12 = puVar11;
  if ((iVar13 != 0) && (uVar10 != 0)) {
    uVar1 = *puVar11;
    uVar6 = (uint)uVar1;
    puVar12 = puVar11 + 1;
    if ((uVar6 & 0xf800) == 0xd800) {
      if ((uVar1 & 0x400) == 0) goto LAB_1425b4790;
LAB_1425b46d0:
      *param_2 = 0xc;
      iVar13 = 0;
      goto LAB_1425b47de;
    }
    iVar13 = 2;
    local_4c = uVar1;
    goto LAB_1425b47ed;
  }
  goto LAB_1425b4827;
LAB_1425b4778:
  uVar10 = uVar10 + uVar5 * 2;
  if ((short)uVar6 != 0) {
LAB_1425b4784:
    if ((uVar6 & 0x400) != 0) goto LAB_1425b46d0;
LAB_1425b4790:
    iVar13 = 0;
    if (puVar12 < *(ushort **)(param_1 + 0x18)) {
      uVar1 = *puVar12;
      if ((uVar1 & 0xfc00) == 0xdc00) {
        puVar12 = puVar12 + 1;
        local_4c = (ushort)uVar6;
        local_4a = (undefined1)uVar1;
        local_49 = (undefined1)(uVar1 >> 8);
        iVar13 = 4;
        uVar6 = 0;
      }
      else {
        *param_2 = 0xc;
      }
    }
LAB_1425b47de:
    *(uint *)(lVar3 + 0x54) = uVar6 & 0xffff;
  }
  if (iVar13 != 0) {
LAB_1425b47ed:
    local_88 = *(undefined8 *)(param_1 + 0x28);
    local_80 = &local_60;
    local_78 = iVar4;
    local_70 = param_2;
    FUN_142637760(lVar3,&local_4c,iVar13,&local_58);
    uVar10 = *(int *)(param_1 + 0x28) - (int)local_58;
  }
LAB_1425b4827:
  if (((*param_2 < 1) && (puVar12 < *(ushort **)(param_1 + 0x18))) && (uVar10 == 0)) {
    *param_2 = 0xf;
  }
  *(ushort **)(param_1 + 0x10) = puVar12;
  *(undefined1 **)(param_1 + 0x20) = local_58;
  *(int **)(param_1 + 0x30) = local_60;
LAB_1425b4853:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1425b4880 FUN_1425b4880 body=628 status=ok
// SIG undefined FUN_1425b4880(void)

uint FUN_1425b4880(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ushort uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ushort *puVar14;
  longlong lVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ushort *puVar18;
  
  lVar15 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar15 + 0x4c) < 8) {
    return 0xfffffff7;
  }
  puVar10 = *(ushort **)(param_1 + 0x10);
  puVar14 = *(ushort **)(param_1 + 0x18);
  if (puVar14 <= puVar10) {
    *param_2 = 8;
    return 0xffff;
  }
  puVar7 = puVar10 + 1;
  if (puVar14 < puVar7) {
    *(char *)(lVar15 + 0x41) = (char)*puVar10;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
    *(undefined1 **)(param_1 + 0x10) = (undefined1 *)((longlong)puVar10 + 1);
    *param_2 = 0xb;
    return 0xffff;
  }
  uVar8 = (uint)*puVar10;
  puVar18 = puVar7;
  if ((*puVar10 & 0xf800) != 0xd800) goto LAB_1425b4a69;
  if ((*puVar10 & 0x400) == 0) {
    puVar18 = puVar10 + 2;
    if (puVar18 <= puVar14) {
      if (((*(byte *)((longlong)puVar10 + 3) & 0xfc) == 0xdc) &&
         (uVar9 = uVar8 * 0x400 + (uint)CONCAT11(*(byte *)((longlong)puVar10 + 3),(char)*puVar7),
         uVar8 = uVar9 + 0xfca02400, puVar7 = puVar18, 0x35fdbff < uVar9)) goto LAB_1425b4a69;
      goto LAB_1425b4a40;
    }
    puVar16 = (undefined1 *)(lVar15 + 0x41);
    uVar12 = (longlong)puVar14 - (longlong)puVar10;
    *(char *)(lVar15 + 0x40) = (char)uVar12;
    if ((uVar12 < 8) || ((lVar15 - (longlong)puVar10) + 0x41U < 0x20)) {
LAB_1425b494e:
      uVar12 = ~(ulonglong)puVar10;
      uVar8 = (int)puVar14 - (int)puVar10 & 7;
      uVar17 = (ulonglong)uVar8;
      if (uVar8 != 0) {
        do {
          uVar6 = *puVar10;
          puVar10 = (ushort *)((longlong)puVar10 + 1);
          *puVar16 = (char)uVar6;
          puVar16 = puVar16 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      uVar13 = 0xb;
      if (&DAT_00000006 < (undefined1 *)(uVar12 + (longlong)puVar14)) {
        lVar15 = 0;
        do {
          puVar16[lVar15] = *(undefined1 *)((longlong)puVar10 + lVar15);
          puVar16[lVar15 + 1] = *(undefined1 *)((longlong)puVar10 + lVar15 + 1);
          puVar16[lVar15 + 2] = *(undefined1 *)((longlong)puVar10 + lVar15 + 2);
          puVar16[lVar15 + 3] = *(undefined1 *)((longlong)puVar10 + lVar15 + 3);
          puVar16[lVar15 + 4] = *(undefined1 *)((longlong)puVar10 + lVar15 + 4);
          puVar16[lVar15 + 5] = *(undefined1 *)((longlong)puVar10 + lVar15 + 5);
          puVar16[lVar15 + 6] = *(undefined1 *)((longlong)puVar10 + lVar15 + 6);
          puVar16[lVar15 + 7] = *(undefined1 *)((longlong)puVar10 + lVar15 + 7);
          lVar5 = lVar15 + 8;
          lVar15 = lVar15 + 8;
        } while ((ushort *)((longlong)puVar10 + lVar5) != puVar14);
      }
    }
    else if (uVar12 < 0x20) {
      uVar11 = 0;
LAB_1425b4ab6:
      uVar17 = uVar12 & 0xfffffffffffffff8;
      do {
        *(undefined8 *)(puVar16 + uVar11) = *(undefined8 *)((longlong)puVar10 + uVar11);
        uVar11 = uVar11 + 8;
      } while (uVar17 != uVar11);
      uVar13 = 0xb;
      puVar10 = (ushort *)((longlong)puVar10 + uVar17);
      puVar16 = puVar16 + uVar17;
      if (uVar12 != uVar17) goto LAB_1425b494e;
    }
    else {
      uVar11 = uVar12 & 0xffffffffffffffe0;
      uVar17 = 0;
      do {
        uVar2 = ((undefined8 *)((longlong)puVar10 + uVar17))[1];
        puVar1 = (undefined8 *)((longlong)puVar10 + uVar17 + 0x10);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        puVar1 = (undefined8 *)(lVar15 + 0x41 + uVar17);
        *puVar1 = *(undefined8 *)((longlong)puVar10 + uVar17);
        puVar1[1] = uVar2;
        puVar1 = (undefined8 *)(lVar15 + 0x51 + uVar17);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        uVar17 = uVar17 + 0x20;
      } while (uVar11 != uVar17);
      uVar13 = 0xb;
      if (uVar12 != uVar11) {
        if ((uVar12 & 0x18) == 0) {
          puVar16 = puVar16 + uVar11;
          puVar10 = (ushort *)((longlong)puVar10 + uVar11);
          goto LAB_1425b494e;
        }
        goto LAB_1425b4ab6;
      }
    }
  }
  else {
LAB_1425b4a40:
    puVar14 = puVar7;
    *(undefined1 *)(lVar15 + 0x40) = 2;
    *(char *)(lVar15 + 0x41) = (char)puVar14[-1];
    *(undefined1 *)(lVar15 + 0x42) = *(undefined1 *)((longlong)puVar14 - 1);
    uVar13 = 0xc;
  }
  *param_2 = uVar13;
  uVar8 = 0xffff;
  puVar18 = puVar14;
LAB_1425b4a69:
  *(ushort **)(param_1 + 0x10) = puVar18;
  return uVar8;
}



// FUNCTION 1425b4bd0 FUN_1425b4bd0 body=471 status=ok
// SIG undefined FUN_1425b4bd0(void)

void FUN_1425b4bd0(longlong param_1,int *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  ushort *puVar3;
  undefined1 uVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  
  lVar1 = *(longlong *)(param_1 + 8);
  pbVar14 = *(byte **)(param_1 + 0x10);
  puVar5 = *(ushort **)(param_1 + 0x20);
  pbVar2 = *(byte **)(param_1 + 0x18);
  puVar3 = *(ushort **)(param_1 + 0x28);
  uVar12 = (uint)*(byte *)(lVar1 + 0x40);
  if ((char)*(byte *)(lVar1 + 0x40) < '\x01') goto LAB_1425b4c12;
  if (puVar3 <= puVar5) goto LAB_1425b4c12;
  *(undefined1 *)(lVar1 + 0x40) = 0;
  uVar10 = (ulonglong)(*(int *)(*(longlong *)(param_1 + 8) + 0x48) - 1);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48) = 0;
  pbVar13 = pbVar14;
  do {
    uVar9 = (uint)uVar10;
    pbVar14 = pbVar13;
    if (uVar12 < 4) {
      uVar6 = (ulonglong)uVar12;
      uVar7 = uVar6;
      if (pbVar13 < pbVar2) {
        uVar9 = uVar9 << 8 | (uint)*pbVar13;
        pbVar14 = pbVar13 + 1;
        uVar7 = uVar6 + 1;
        *(byte *)(lVar1 + 0x41 + uVar6) = *pbVar13;
        uVar12 = 4;
        uVar11 = 4;
        if (uVar7 == 4) {
joined_r0x0001425b4c8f:
          uVar10 = (ulonglong)uVar9;
          uVar4 = 4;
          if (uVar9 < 0x110000) goto LAB_1425b4cc7;
          goto LAB_1425b4d3b;
        }
        if (pbVar14 < pbVar2) {
          uVar9 = uVar9 << 8 | (uint)pbVar13[1];
          pbVar14 = pbVar13 + 2;
          uVar7 = uVar6 + 2;
          *(byte *)(lVar1 + 0x42 + uVar6) = pbVar13[1];
          if (uVar7 == 4) goto joined_r0x0001425b4c8f;
          if (pbVar14 < pbVar2) {
            uVar9 = uVar9 << 8 | (uint)pbVar13[2];
            uVar10 = (ulonglong)uVar9;
            pbVar14 = pbVar13 + 3;
            *(byte *)(lVar1 + 0x43 + uVar6) = pbVar13[2];
            uVar7 = uVar6 + 3;
            if (uVar7 == 4) goto LAB_1425b4cbf;
            if (pbVar14 < pbVar2) {
              uVar9 = uVar9 << 8 | (uint)pbVar13[3];
              pbVar14 = pbVar13 + 4;
              *(byte *)(lVar1 + 0x41 + uVar7) = pbVar13[3];
              goto joined_r0x0001425b4c8f;
            }
          }
        }
      }
      *(uint *)(*(longlong *)(param_1 + 8) + 0x48) = uVar9 + 1;
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)uVar7;
      break;
    }
LAB_1425b4cbf:
    uVar11 = (undefined1)uVar12;
    uVar4 = uVar11;
    if (0x10ffff < (uint)uVar10) {
LAB_1425b4d3b:
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = uVar11;
      *param_2 = 0xc;
      break;
    }
LAB_1425b4cc7:
    uVar11 = uVar4;
    if (((uint)uVar10 & 0xfffff800) == 0xd800) goto LAB_1425b4d3b;
    if ((uint)uVar10 < 0x10000) {
      *puVar5 = (ushort)uVar10;
      puVar5 = puVar5 + 1;
    }
    else {
      *puVar5 = (short)(uVar10 >> 10) + 0xd7c0;
      uVar8 = (ushort)uVar10 & 0x3ff | 0xdc00;
      if (puVar3 <= puVar5 + 1) {
        *(ushort *)(*(longlong *)(param_1 + 8) + 0x90) = uVar8;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x5d) = 1;
        *param_2 = 0xf;
        puVar5 = puVar5 + 1;
        break;
      }
      puVar5[1] = uVar8;
      puVar5 = puVar5 + 2;
    }
LAB_1425b4c12:
    if (pbVar2 <= pbVar14) break;
    uVar10 = 0;
    uVar12 = 0;
    pbVar13 = pbVar14;
  } while (puVar5 < puVar3);
  if (((pbVar14 < pbVar2) && (puVar3 <= puVar5)) && (*param_2 < 1)) {
    *param_2 = 0xf;
  }
  *(ushort **)(param_1 + 0x20) = puVar5;
  *(byte **)(param_1 + 0x10) = pbVar14;
  return;
}



// FUNCTION 1425b4db0 FUN_1425b4db0 body=548 status=ok
// SIG undefined FUN_1425b4db0(void)

void FUN_1425b4db0(longlong param_1,int *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  ushort *puVar3;
  int *piVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  
  lVar1 = *(longlong *)(param_1 + 8);
  pbVar12 = *(byte **)(param_1 + 0x10);
  puVar10 = *(ushort **)(param_1 + 0x20);
  piVar4 = *(int **)(param_1 + 0x30);
  pbVar2 = *(byte **)(param_1 + 0x18);
  puVar3 = *(ushort **)(param_1 + 0x28);
  uVar8 = (uint)*(byte *)(lVar1 + 0x40);
  iVar9 = 0;
  if ((char)*(byte *)(lVar1 + 0x40) < '\x01') goto LAB_1425b4dfc;
  iVar9 = 0;
  if (puVar3 <= puVar10) goto LAB_1425b4dfc;
  *(undefined1 *)(lVar1 + 0x40) = 0;
  uVar6 = *(int *)(*(longlong *)(param_1 + 8) + 0x48) - 1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48) = 0;
  iVar9 = 0;
  pbVar11 = pbVar12;
  do {
    pbVar12 = pbVar11;
    if (uVar8 < 4) {
      uVar13 = (ulonglong)uVar8;
      uVar14 = uVar13;
      if (pbVar11 < pbVar2) {
        uVar6 = uVar6 << 8 | (uint)*pbVar11;
        pbVar12 = pbVar11 + 1;
        uVar14 = uVar13 + 1;
        *(byte *)(lVar1 + 0x41 + uVar13) = *pbVar11;
        uVar8 = 4;
        if (uVar14 == 4) {
joined_r0x0001425b4e7e:
          if (uVar6 < 0x110000) goto LAB_1425b4ebf;
          goto LAB_1425b4f5e;
        }
        if (pbVar12 < pbVar2) {
          uVar6 = uVar6 << 8 | (uint)pbVar11[1];
          pbVar12 = pbVar11 + 2;
          uVar14 = uVar13 + 2;
          *(byte *)(lVar1 + 0x42 + uVar13) = pbVar11[1];
          if (uVar14 == 4) goto joined_r0x0001425b4e7e;
          if (pbVar12 < pbVar2) {
            uVar6 = uVar6 << 8 | (uint)pbVar11[2];
            pbVar12 = pbVar11 + 3;
            *(byte *)(lVar1 + 0x43 + uVar13) = pbVar11[2];
            uVar14 = uVar13 + 3;
            if (uVar14 == 4) goto LAB_1425b4eb3;
            if (pbVar12 < pbVar2) {
              uVar6 = uVar6 << 8 | (uint)pbVar11[3];
              pbVar12 = pbVar11 + 4;
              *(byte *)(lVar1 + 0x41 + uVar14) = pbVar11[3];
              goto joined_r0x0001425b4e7e;
            }
          }
        }
      }
      *(uint *)(*(longlong *)(param_1 + 8) + 0x48) = uVar6 + 1;
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)uVar14;
      break;
    }
LAB_1425b4eb3:
    if (0x10ffff < uVar6) {
LAB_1425b4f5e:
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)uVar8;
      *param_2 = 0xc;
      break;
    }
LAB_1425b4ebf:
    if ((uVar6 & 0xfffff800) == 0xd800) goto LAB_1425b4f5e;
    if (uVar6 < 0x10000) {
      *puVar10 = (ushort)uVar6;
      puVar10 = puVar10 + 1;
      lVar7 = 1;
      piVar15 = piVar4;
    }
    else {
      *puVar10 = (short)(uVar6 >> 10) + 0xd7c0;
      piVar15 = piVar4 + 1;
      *piVar4 = iVar9;
      uVar5 = (ushort)uVar6 & 0x3ff | 0xdc00;
      if (puVar3 <= puVar10 + 1) {
        *(ushort *)(*(longlong *)(param_1 + 8) + 0x90) = uVar5;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x5d) = 1;
        *param_2 = 0xf;
        piVar4 = piVar15;
        puVar10 = puVar10 + 1;
        break;
      }
      puVar10[1] = uVar5;
      puVar10 = puVar10 + 2;
      lVar7 = 2;
    }
    piVar4 = piVar4 + lVar7;
    *piVar15 = iVar9;
    iVar9 = iVar9 + uVar8;
LAB_1425b4dfc:
    if (pbVar2 <= pbVar12) break;
    uVar6 = 0;
    uVar8 = 0;
    pbVar11 = pbVar12;
  } while (puVar10 < puVar3);
  if (((pbVar12 < pbVar2) && (puVar3 <= puVar10)) && (*param_2 < 1)) {
    *param_2 = 0xf;
  }
  *(ushort **)(param_1 + 0x20) = puVar10;
  *(byte **)(param_1 + 0x10) = pbVar12;
  *(int **)(param_1 + 0x30) = piVar4;
  return;
}



// FUNCTION 1425b4fe0 FUN_1425b4fe0 body=519 status=ok
// SIG undefined FUN_1425b4fe0(void)

void FUN_1425b4fe0(longlong param_1,int *param_2)

{
  char cVar1;
  ushort *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  ushort *puVar8;
  byte bVar9;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  puVar2 = *(ushort **)(param_1 + 0x18);
  if (puVar8 < puVar2) {
    pbVar3 = *(byte **)(param_1 + 0x28);
    lVar6 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar6 + 0x50) == 1) {
      FUN_142637760(lVar6,&DAT_149c3d098,4,param_1 + 0x20,pbVar3,param_1 + 0x30,0xffffffff,param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
      lVar6 = *(longlong *)(param_1 + 8);
    }
    pbVar4 = *(byte **)(param_1 + 0x20);
    uVar7 = *(uint *)(lVar6 + 0x54);
    if (uVar7 == 0) goto joined_r0x0001425b519a;
    *(undefined4 *)(lVar6 + 0x54) = 0;
    do {
      if (puVar2 <= puVar8) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar7;
        if (*(char *)(param_1 + 2) == '\0') goto LAB_1425b51be;
        goto LAB_1425b51b8;
      }
      if ((*puVar8 & 0xfc00) != 0xdc00) break;
      uVar7 = uVar7 * 0x400 + (uint)*puVar8 + 0xfca02400;
      puVar8 = puVar8 + 1;
      do {
        bVar9 = (byte)(uVar7 >> 0x10) & 0x1f;
        bVar5 = (byte)(uVar7 >> 8);
        if (pbVar4 < pbVar3) {
          *pbVar4 = 0;
          pbVar4 = pbVar4 + 1;
          if (pbVar4 < pbVar3) goto LAB_1425b5162;
LAB_1425b50f8:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = bVar9;
          *param_2 = 0xf;
          if (pbVar4 < pbVar3) goto LAB_1425b516d;
LAB_1425b5119:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = bVar5;
          *param_2 = 0xf;
          if (pbVar4 < pbVar3) goto LAB_1425b5064;
LAB_1425b517b:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = (byte)uVar7;
          *param_2 = 0xf;
        }
        else {
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar1) = 0;
          *param_2 = 0xf;
          if (pbVar3 <= pbVar4) goto LAB_1425b50f8;
LAB_1425b5162:
          *pbVar4 = bVar9;
          pbVar4 = pbVar4 + 1;
          if (pbVar3 <= pbVar4) goto LAB_1425b5119;
LAB_1425b516d:
          *pbVar4 = bVar5;
          pbVar4 = pbVar4 + 1;
          if (pbVar3 <= pbVar4) goto LAB_1425b517b;
LAB_1425b5064:
          *pbVar4 = (byte)uVar7;
          pbVar4 = pbVar4 + 1;
        }
joined_r0x0001425b519a:
        if ((puVar2 <= puVar8) || (pbVar3 <= pbVar4)) goto LAB_1425b51be;
        uVar7 = (uint)*puVar8;
        puVar8 = puVar8 + 1;
      } while ((uVar7 & 0xf800) != 0xd800);
    } while ((uVar7 & 0xfc00) == 0xd800);
    *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar7;
LAB_1425b51b8:
    *param_2 = 0xc;
LAB_1425b51be:
    if (((puVar8 < puVar2) && (pbVar3 <= pbVar4)) && (*param_2 < 1)) {
      *param_2 = 0xf;
    }
    *(byte **)(param_1 + 0x20) = pbVar4;
    *(ushort **)(param_1 + 0x10) = puVar8;
  }
  return;
}



// FUNCTION 1425b51f0 FUN_1425b51f0 body=586 status=ok
// SIG undefined FUN_1425b51f0(void)

void FUN_1425b51f0(longlong param_1,int *param_2)

{
  char cVar1;
  ushort *puVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  byte *pbVar7;
  ushort *puVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  puVar2 = *(ushort **)(param_1 + 0x18);
  if (puVar8 < puVar2) {
    pbVar3 = *(byte **)(param_1 + 0x28);
    lVar6 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar6 + 0x50) == 1) {
      FUN_142637760(lVar6,&DAT_149c3d09c,4,param_1 + 0x20,pbVar3,param_1 + 0x30,0xffffffff,param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
      lVar6 = *(longlong *)(param_1 + 8);
    }
    pbVar7 = *(byte **)(param_1 + 0x20);
    piVar4 = *(int **)(param_1 + 0x30);
    uVar9 = *(uint *)(lVar6 + 0x54);
    if (uVar9 == 0) {
      iVar5 = 0;
      goto LAB_1425b5281;
    }
    *(undefined4 *)(lVar6 + 0x54) = 0;
    iVar5 = 0;
    do {
      if (puVar2 <= puVar8) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar9;
        if (*(char *)(param_1 + 2) != '\0') goto LAB_1425b5404;
        goto LAB_1425b540a;
      }
      if ((*puVar8 & 0xfc00) != 0xdc00) break;
      uVar9 = uVar9 * 0x400 + (uint)*puVar8 + 0xfca02400;
      puVar8 = puVar8 + 1;
      do {
        bVar10 = (byte)(uVar9 >> 0x10) & 0x1f;
        bVar11 = (byte)(uVar9 >> 8);
        if (pbVar7 < pbVar3) {
          *pbVar7 = 0;
          pbVar7 = pbVar7 + 1;
          *piVar4 = iVar5;
          piVar4 = piVar4 + 1;
          if (pbVar3 <= pbVar7) goto LAB_1425b5327;
LAB_1425b53b0:
          *pbVar7 = bVar10;
          pbVar7 = pbVar7 + 1;
          *piVar4 = iVar5;
          piVar4 = piVar4 + 1;
          if (pbVar7 < pbVar3) goto LAB_1425b53c1;
LAB_1425b5349:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = bVar11;
          *param_2 = 0xf;
          if (pbVar3 <= pbVar7) goto LAB_1425b536b;
LAB_1425b53d2:
          *pbVar7 = (byte)uVar9;
          pbVar7 = pbVar7 + 1;
          *piVar4 = iVar5;
          piVar4 = piVar4 + 1;
        }
        else {
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar1) = 0;
          *param_2 = 0xf;
          if (pbVar7 < pbVar3) goto LAB_1425b53b0;
LAB_1425b5327:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = bVar10;
          *param_2 = 0xf;
          if (pbVar3 <= pbVar7) goto LAB_1425b5349;
LAB_1425b53c1:
          *pbVar7 = bVar11;
          pbVar7 = pbVar7 + 1;
          *piVar4 = iVar5;
          piVar4 = piVar4 + 1;
          if (pbVar7 < pbVar3) goto LAB_1425b53d2;
LAB_1425b536b:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = (byte)uVar9;
          *param_2 = 0xf;
        }
        iVar5 = (iVar5 - (uint)((uVar9 & 0x1f0000) == 0)) + 2;
LAB_1425b5281:
        if ((puVar2 <= puVar8) || (pbVar3 <= pbVar7)) goto LAB_1425b540a;
        uVar9 = (uint)*puVar8;
        puVar8 = puVar8 + 1;
      } while ((uVar9 & 0xf800) != 0xd800);
    } while ((uVar9 & 0xfc00) == 0xd800);
    *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar9;
LAB_1425b5404:
    *param_2 = 0xc;
LAB_1425b540a:
    if (((puVar8 < puVar2) && (pbVar3 <= pbVar7)) && (*param_2 < 1)) {
      *param_2 = 0xf;
    }
    *(byte **)(param_1 + 0x20) = pbVar7;
    *(ushort **)(param_1 + 0x10) = puVar8;
    *(int **)(param_1 + 0x30) = piVar4;
  }
  return;
}



// FUNCTION 1425b5440 FUN_1425b5440 body=192 status=ok
// SIG undefined FUN_1425b5440(void)

uint FUN_1425b5440(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *_Src;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  _Src = *(byte **)(param_1 + 0x10);
  uVar2 = 8;
  if (_Src < *(byte **)(param_1 + 0x18)) {
    lVar6 = (longlong)*(byte **)(param_1 + 0x18) - (longlong)_Src;
    iVar5 = (int)lVar6;
    if (iVar5 < 4) {
      memcpy((void *)(*(longlong *)(param_1 + 8) + 0x41),_Src,(longlong)iVar5);
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)lVar6;
      *(byte **)(param_1 + 0x10) = _Src + iVar5;
      uVar2 = 0xb;
    }
    else {
      uVar4 = (uint)_Src[1] << 0x10 | (uint)*_Src << 0x18;
      bVar1 = _Src[2];
      uVar3 = (uint)_Src[3] | (uint)bVar1 << 8 | uVar4;
      *(byte **)(param_1 + 0x10) = _Src + 4;
      if ((uVar3 < 0x110000) && (((uint)bVar1 << 8 & 0xfffff800 | uVar4) != 0xd800)) {
        return uVar3;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x41) = *(undefined4 *)_Src;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 4;
      uVar2 = 0xc;
    }
  }
  *param_2 = uVar2;
  return 0xffff;
}



// FUNCTION 1425b5500 FUN_1425b5500 body=525 status=ok
// SIG undefined FUN_1425b5500(void)

void FUN_1425b5500(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  uint uVar10;
  ushort *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  lVar2 = *(longlong *)(param_1 + 8);
  pbVar13 = *(byte **)(param_1 + 0x10);
  puVar11 = *(ushort **)(param_1 + 0x20);
  pbVar3 = *(byte **)(param_1 + 0x18);
  puVar4 = *(ushort **)(param_1 + 0x28);
  uVar10 = (uint)*(byte *)(lVar2 + 0x40);
  if ((char)*(byte *)(lVar2 + 0x40) < '\x01') goto LAB_1425b5544;
  if (puVar4 <= puVar11) goto LAB_1425b5544;
  *(undefined1 *)(lVar2 + 0x40) = 0;
  uVar8 = (ulonglong)(*(int *)(*(longlong *)(param_1 + 8) + 0x48) - 1);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48) = 0;
  pbVar12 = pbVar13;
  do {
    uVar7 = (uint)uVar8;
    pbVar13 = pbVar12;
    if (uVar10 < 4) {
      uVar14 = (ulonglong)uVar10;
      uVar15 = uVar14;
      if (pbVar12 < pbVar3) {
        bVar1 = *pbVar12;
        *(byte *)(lVar2 + 0x41 + uVar14) = bVar1;
        uVar7 = uVar7 | (uint)bVar1 << ((byte)(uVar10 << 3) & 0x1f);
        pbVar13 = pbVar12 + 1;
        uVar15 = uVar14 + 1;
        uVar10 = 4;
        uVar9 = 4;
        if (uVar15 == 4) {
joined_r0x0001425b55cf:
          uVar8 = (ulonglong)uVar7;
          uVar5 = 4;
          if (uVar7 < 0x110000) goto LAB_1425b560d;
          goto LAB_1425b569b;
        }
        if (pbVar13 < pbVar3) {
          bVar1 = pbVar12[1];
          *(byte *)(lVar2 + 0x42 + uVar14) = bVar1;
          uVar7 = uVar7 | (uint)bVar1 << ((byte)((int)uVar15 << 3) & 0x1f);
          pbVar13 = pbVar12 + 2;
          uVar15 = uVar14 + 2;
          if (uVar15 == 4) goto joined_r0x0001425b55cf;
          if (pbVar13 < pbVar3) {
            bVar1 = pbVar12[2];
            *(byte *)(lVar2 + 0x43 + uVar14) = bVar1;
            uVar7 = uVar7 | (uint)bVar1 << ((byte)((int)uVar15 << 3) & 0x1f);
            uVar8 = (ulonglong)uVar7;
            pbVar13 = pbVar12 + 3;
            uVar15 = uVar14 + 3;
            if (uVar15 == 4) goto LAB_1425b5601;
            if (pbVar13 < pbVar3) {
              bVar1 = pbVar12[3];
              *(byte *)(lVar2 + 0x41 + uVar15) = bVar1;
              uVar7 = uVar7 | (uint)bVar1 << ((char)uVar15 * '\b' & 0x1fU);
              pbVar13 = pbVar12 + 4;
              goto joined_r0x0001425b55cf;
            }
          }
        }
      }
      *(uint *)(*(longlong *)(param_1 + 8) + 0x48) = uVar7 + 1;
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)uVar15;
      break;
    }
LAB_1425b5601:
    uVar9 = (undefined1)uVar10;
    uVar5 = uVar9;
    if (0x10ffff < (uint)uVar8) {
LAB_1425b569b:
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = uVar9;
      *param_2 = 0xc;
      break;
    }
LAB_1425b560d:
    uVar9 = uVar5;
    if (((uint)uVar8 & 0xfffff800) == 0xd800) goto LAB_1425b569b;
    if ((uint)uVar8 < 0x10000) {
      *puVar11 = (ushort)uVar8;
      puVar11 = puVar11 + 1;
    }
    else {
      *puVar11 = (short)(uVar8 >> 10) + 0xd7c0;
      uVar6 = (ushort)uVar8 & 0x3ff | 0xdc00;
      if (puVar4 <= puVar11 + 1) {
        *(ushort *)(*(longlong *)(param_1 + 8) + 0x90) = uVar6;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x5d) = 1;
        *param_2 = 0xf;
        puVar11 = puVar11 + 1;
        break;
      }
      puVar11[1] = uVar6;
      puVar11 = puVar11 + 2;
    }
LAB_1425b5544:
    if (pbVar3 <= pbVar13) break;
    uVar8 = 0;
    uVar10 = 0;
    pbVar12 = pbVar13;
  } while (puVar11 < puVar4);
  if (((pbVar13 < pbVar3) && (puVar4 <= puVar11)) && (*param_2 < 1)) {
    *param_2 = 0xf;
  }
  *(ushort **)(param_1 + 0x20) = puVar11;
  *(byte **)(param_1 + 0x10) = pbVar13;
  return;
}



// FUNCTION 1425b5710 FUN_1425b5710 body=604 status=ok
// SIG undefined FUN_1425b5710(void)

void FUN_1425b5710(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  ushort *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ushort uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  lVar2 = *(longlong *)(param_1 + 8);
  pbVar11 = *(byte **)(param_1 + 0x10);
  puVar9 = *(ushort **)(param_1 + 0x20);
  piVar8 = *(int **)(param_1 + 0x30);
  pbVar3 = *(byte **)(param_1 + 0x18);
  puVar4 = *(ushort **)(param_1 + 0x28);
  uVar7 = (uint)*(byte *)(lVar2 + 0x40);
  iVar6 = 0;
  if ((char)*(byte *)(lVar2 + 0x40) < '\x01') goto LAB_1425b5762;
  iVar6 = 0;
  if (puVar4 <= puVar9) goto LAB_1425b5762;
  *(undefined1 *)(lVar2 + 0x40) = 0;
  uVar13 = *(int *)(*(longlong *)(param_1 + 8) + 0x48) - 1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48) = 0;
  iVar6 = 0;
  pbVar10 = pbVar11;
  do {
    pbVar11 = pbVar10;
    if (uVar7 < 4) {
      uVar15 = (ulonglong)uVar7;
      uVar16 = uVar15;
      if (pbVar10 < pbVar3) {
        bVar1 = *pbVar10;
        *(byte *)(lVar2 + 0x41 + uVar15) = bVar1;
        uVar13 = uVar13 | (uint)bVar1 << ((byte)(uVar7 << 3) & 0x1f);
        pbVar11 = pbVar10 + 1;
        uVar16 = uVar15 + 1;
        uVar7 = 4;
        if (uVar16 == 4) {
joined_r0x0001425b57f7:
          if (uVar13 < 0x110000) goto LAB_1425b583c;
          goto LAB_1425b58ed;
        }
        if (pbVar11 < pbVar3) {
          bVar1 = pbVar10[1];
          *(byte *)(lVar2 + 0x42 + uVar15) = bVar1;
          uVar13 = uVar13 | (uint)bVar1 << ((byte)((int)uVar16 << 3) & 0x1f);
          pbVar11 = pbVar10 + 2;
          uVar16 = uVar15 + 2;
          if (uVar16 == 4) goto joined_r0x0001425b57f7;
          if (pbVar11 < pbVar3) {
            bVar1 = pbVar10[2];
            *(byte *)(lVar2 + 0x43 + uVar15) = bVar1;
            uVar13 = uVar13 | (uint)bVar1 << ((byte)((int)uVar16 << 3) & 0x1f);
            pbVar11 = pbVar10 + 3;
            uVar16 = uVar15 + 3;
            if (uVar16 == 4) goto LAB_1425b582f;
            if (pbVar11 < pbVar3) {
              bVar1 = pbVar10[3];
              *(byte *)(lVar2 + 0x41 + uVar16) = bVar1;
              uVar13 = uVar13 | (uint)bVar1 << ((char)uVar16 * '\b' & 0x1fU);
              pbVar11 = pbVar10 + 4;
              goto joined_r0x0001425b57f7;
            }
          }
        }
      }
      *(uint *)(*(longlong *)(param_1 + 8) + 0x48) = uVar13 + 1;
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)uVar16;
      break;
    }
LAB_1425b582f:
    if (0x10ffff < uVar13) {
LAB_1425b58ed:
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)uVar7;
      *param_2 = 0xc;
      break;
    }
LAB_1425b583c:
    if ((uVar13 & 0xfffff800) == 0xd800) goto LAB_1425b58ed;
    if (uVar13 < 0x10000) {
      *puVar9 = (ushort)uVar13;
      puVar9 = puVar9 + 1;
      lVar14 = 1;
      piVar5 = piVar8;
    }
    else {
      *puVar9 = (short)(uVar13 >> 10) + 0xd7c0;
      piVar5 = piVar8 + 1;
      *piVar8 = iVar6;
      uVar12 = (ushort)uVar13 & 0x3ff | 0xdc00;
      if (puVar4 <= puVar9 + 1) {
        *(ushort *)(*(longlong *)(param_1 + 8) + 0x90) = uVar12;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x5d) = 1;
        *param_2 = 0xf;
        piVar8 = piVar5;
        puVar9 = puVar9 + 1;
        break;
      }
      puVar9[1] = uVar12;
      puVar9 = puVar9 + 2;
      lVar14 = 2;
    }
    piVar8 = piVar8 + lVar14;
    *piVar5 = iVar6;
    iVar6 = iVar6 + uVar7;
LAB_1425b5762:
    if (pbVar3 <= pbVar11) break;
    uVar13 = 0;
    uVar7 = 0;
    pbVar10 = pbVar11;
  } while (puVar9 < puVar4);
  if (((pbVar11 < pbVar3) && (puVar4 <= puVar9)) && (*param_2 < 1)) {
    *param_2 = 0xf;
  }
  *(ushort **)(param_1 + 0x20) = puVar9;
  *(byte **)(param_1 + 0x10) = pbVar11;
  *(int **)(param_1 + 0x30) = piVar8;
  return;
}



// FUNCTION 1425b5970 FUN_1425b5970 body=517 status=ok
// SIG undefined FUN_1425b5970(void)

void FUN_1425b5970(longlong param_1,int *param_2)

{
  char cVar1;
  ushort *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  ushort *puVar8;
  byte bVar9;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  puVar2 = *(ushort **)(param_1 + 0x18);
  if (puVar8 < puVar2) {
    pbVar3 = *(byte **)(param_1 + 0x28);
    lVar6 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar6 + 0x50) == 1) {
      FUN_142637760(lVar6,&DAT_149c3d0a0,4,param_1 + 0x20,pbVar3,param_1 + 0x30,0xffffffff,param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
      lVar6 = *(longlong *)(param_1 + 8);
    }
    pbVar4 = *(byte **)(param_1 + 0x20);
    uVar7 = *(uint *)(lVar6 + 0x54);
    if (uVar7 == 0) goto joined_r0x0001425b5b28;
    *(undefined4 *)(lVar6 + 0x54) = 0;
    do {
      if (puVar2 <= puVar8) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar7;
        if (*(char *)(param_1 + 2) == '\0') goto LAB_1425b5b4c;
        goto LAB_1425b5b46;
      }
      if ((*puVar8 & 0xfc00) != 0xdc00) break;
      uVar7 = uVar7 * 0x400 + (uint)*puVar8 + 0xfca02400;
      puVar8 = puVar8 + 1;
      do {
        bVar5 = (byte)(uVar7 >> 0x10) & 0x1f;
        bVar9 = (byte)(uVar7 >> 8);
        if (pbVar4 < pbVar3) {
          *pbVar4 = (byte)uVar7;
          pbVar4 = pbVar4 + 1;
          if (pbVar4 < pbVar3) goto LAB_1425b5af0;
LAB_1425b5a87:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = bVar9;
          *param_2 = 0xf;
          if (pbVar4 < pbVar3) goto LAB_1425b5afb;
LAB_1425b5aa8:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = bVar5;
          *param_2 = 0xf;
          if (pbVar4 < pbVar3) goto LAB_1425b59f4;
LAB_1425b5b09:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar1) = 0;
          *param_2 = 0xf;
        }
        else {
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = (byte)uVar7;
          *param_2 = 0xf;
          if (pbVar3 <= pbVar4) goto LAB_1425b5a87;
LAB_1425b5af0:
          *pbVar4 = bVar9;
          pbVar4 = pbVar4 + 1;
          if (pbVar3 <= pbVar4) goto LAB_1425b5aa8;
LAB_1425b5afb:
          *pbVar4 = bVar5;
          pbVar4 = pbVar4 + 1;
          if (pbVar3 <= pbVar4) goto LAB_1425b5b09;
LAB_1425b59f4:
          *pbVar4 = 0;
          pbVar4 = pbVar4 + 1;
        }
joined_r0x0001425b5b28:
        if ((puVar2 <= puVar8) || (pbVar3 <= pbVar4)) goto LAB_1425b5b4c;
        uVar7 = (uint)*puVar8;
        puVar8 = puVar8 + 1;
      } while ((uVar7 & 0xf800) != 0xd800);
    } while ((uVar7 & 0xfc00) == 0xd800);
    *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar7;
LAB_1425b5b46:
    *param_2 = 0xc;
LAB_1425b5b4c:
    if (((puVar8 < puVar2) && (pbVar3 <= pbVar4)) && (*param_2 < 1)) {
      *param_2 = 0xf;
    }
    *(byte **)(param_1 + 0x20) = pbVar4;
    *(ushort **)(param_1 + 0x10) = puVar8;
  }
  return;
}



// FUNCTION 1425b5b80 FUN_1425b5b80 body=584 status=ok
// SIG undefined FUN_1425b5b80(void)

void FUN_1425b5b80(longlong param_1,int *param_2)

{
  char cVar1;
  ushort *puVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  byte *pbVar7;
  ushort *puVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  puVar2 = *(ushort **)(param_1 + 0x18);
  if (puVar8 < puVar2) {
    pbVar3 = *(byte **)(param_1 + 0x28);
    lVar6 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar6 + 0x50) == 1) {
      FUN_142637760(lVar6,&DAT_149c3d0a4,4,param_1 + 0x20,pbVar3,param_1 + 0x30,0xffffffff,param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
      lVar6 = *(longlong *)(param_1 + 8);
    }
    pbVar7 = *(byte **)(param_1 + 0x20);
    piVar4 = *(int **)(param_1 + 0x30);
    uVar10 = *(uint *)(lVar6 + 0x54);
    if (uVar10 == 0) {
      iVar5 = 0;
      goto LAB_1425b5c11;
    }
    *(undefined4 *)(lVar6 + 0x54) = 0;
    iVar5 = 0;
    do {
      if (puVar2 <= puVar8) {
        *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar10;
        if (*(char *)(param_1 + 2) != '\0') goto LAB_1425b5d92;
        goto LAB_1425b5d98;
      }
      if ((*puVar8 & 0xfc00) != 0xdc00) break;
      uVar10 = uVar10 * 0x400 + (uint)*puVar8 + 0xfca02400;
      puVar8 = puVar8 + 1;
      do {
        bVar9 = (byte)(uVar10 >> 0x10) & 0x1f;
        bVar11 = (byte)(uVar10 >> 8);
        if (pbVar7 < pbVar3) {
          *pbVar7 = (byte)uVar10;
          pbVar7 = pbVar7 + 1;
          *piVar4 = iVar5;
          piVar4 = piVar4 + 1;
          if (pbVar3 <= pbVar7) goto LAB_1425b5cb7;
LAB_1425b5d3e:
          *pbVar7 = bVar11;
          pbVar7 = pbVar7 + 1;
          *piVar4 = iVar5;
          piVar4 = piVar4 + 1;
          if (pbVar7 < pbVar3) goto LAB_1425b5d4f;
LAB_1425b5cd8:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = bVar9;
          *param_2 = 0xf;
          if (pbVar3 <= pbVar7) goto LAB_1425b5cf9;
LAB_1425b5d60:
          *pbVar7 = 0;
          pbVar7 = pbVar7 + 1;
          *piVar4 = iVar5;
          piVar4 = piVar4 + 1;
        }
        else {
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = (byte)uVar10;
          *param_2 = 0xf;
          if (pbVar7 < pbVar3) goto LAB_1425b5d3e;
LAB_1425b5cb7:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(byte *)(lVar6 + 0x68 + (longlong)cVar1) = bVar11;
          *param_2 = 0xf;
          if (pbVar3 <= pbVar7) goto LAB_1425b5cd8;
LAB_1425b5d4f:
          *pbVar7 = bVar9;
          pbVar7 = pbVar7 + 1;
          *piVar4 = iVar5;
          piVar4 = piVar4 + 1;
          if (pbVar7 < pbVar3) goto LAB_1425b5d60;
LAB_1425b5cf9:
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar6 + 0x5b);
          *(char *)(lVar6 + 0x5b) = cVar1 + '\x01';
          *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar1) = 0;
          *param_2 = 0xf;
        }
        iVar5 = (iVar5 - (uint)((uVar10 & 0x1f0000) == 0)) + 2;
LAB_1425b5c11:
        if ((puVar2 <= puVar8) || (pbVar3 <= pbVar7)) goto LAB_1425b5d98;
        uVar10 = (uint)*puVar8;
        puVar8 = puVar8 + 1;
      } while ((uVar10 & 0xf800) != 0xd800);
    } while ((uVar10 & 0xfc00) == 0xd800);
    *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar10;
LAB_1425b5d92:
    *param_2 = 0xc;
LAB_1425b5d98:
    if (((puVar8 < puVar2) && (pbVar3 <= pbVar7)) && (*param_2 < 1)) {
      *param_2 = 0xf;
    }
    *(byte **)(param_1 + 0x20) = pbVar7;
    *(ushort **)(param_1 + 0x10) = puVar8;
    *(int **)(param_1 + 0x30) = piVar4;
  }
  return;
}



// FUNCTION 1425b5dd0 FUN_1425b5dd0 body=183 status=ok
// SIG undefined FUN_1425b5dd0(void)

uint FUN_1425b5dd0(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *_Src;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  _Src = *(byte **)(param_1 + 0x10);
  uVar3 = 8;
  if (_Src < *(byte **)(param_1 + 0x18)) {
    lVar6 = (longlong)*(byte **)(param_1 + 0x18) - (longlong)_Src;
    iVar5 = (int)lVar6;
    if (iVar5 < 4) {
      memcpy((void *)(*(longlong *)(param_1 + 8) + 0x41),_Src,(longlong)iVar5);
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)lVar6;
      *(byte **)(param_1 + 0x10) = _Src + iVar5;
      uVar3 = 0xb;
    }
    else {
      uVar2 = *(ushort *)(_Src + 2);
      bVar1 = _Src[1];
      uVar4 = (uint)*_Src | (uint)bVar1 << 8 | (uint)uVar2 << 0x10;
      *(byte **)(param_1 + 0x10) = _Src + 4;
      if ((uVar4 < 0x110000) && (((uint)bVar1 << 8 & 0xfffff800 | (uint)uVar2 << 0x10) != 0xd800)) {
        return uVar4;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x41) = *(undefined4 *)_Src;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 4;
      uVar3 = 0xc;
    }
  }
  *param_2 = uVar3;
  return 0xffff;
}



// FUNCTION 1425b5ec0 FUN_1425b5ec0 body=692 status=ok
// SIG undefined FUN_1425b5ec0(void)

void FUN_1425b5ec0(longlong param_1,int *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  lVar3 = *(longlong *)(param_1 + 8);
  pcVar14 = *(char **)(param_1 + 0x10);
  pcVar4 = *(char **)(param_1 + 0x18);
  piVar18 = *(int **)(param_1 + 0x30);
  uVar12 = *(uint *)(lVar3 + 0x4c);
  iVar16 = 0;
  if (pcVar14 < pcVar4) {
    iVar16 = 0;
    pcVar13 = pcVar14;
    while (pcVar14 = pcVar13, *param_2 < 1) {
      if (9 < uVar12) goto switchD_1425b5f2e_caseD_4;
      switch((ulonglong)uVar12) {
      case 0:
        if (*pcVar13 == '\0') {
          uVar12 = 1;
          pcVar14 = pcVar13 + 1;
        }
        else {
          if (*pcVar13 != -1) goto switchD_1425b5f2e_caseD_8;
          uVar12 = 5;
          pcVar14 = pcVar13 + 1;
        }
        break;
      default:
        if (*pcVar13 == (&DAT_149c3d0a8)[uVar12]) {
          pcVar14 = pcVar13 + 1;
          if (uVar12 == 7) {
            iVar16 = (int)pcVar14 - *(int *)(param_1 + 0x10);
            goto LAB_1425b6035;
          }
          if (uVar12 != 3) {
            uVar12 = uVar12 + 1;
            break;
          }
          iVar16 = (int)pcVar14 - *(int *)(param_1 + 0x10);
          goto LAB_1425b5f09;
        }
        pcVar14 = *(char **)(param_1 + 0x10);
        iVar15 = (uVar12 & 3) - ((int)pcVar13 - (int)pcVar14);
        if (iVar15 != 0) {
          uVar2 = *(undefined1 *)(param_1 + 2);
          *(undefined **)(param_1 + 0x10) = &DAT_149c3d0a8 + (uVar12 & 4);
          *(undefined **)(param_1 + 0x18) = &DAT_149c3d0a8 + (uVar12 & 4) + iVar15;
          *(undefined1 *)(param_1 + 2) = 0;
          FUN_1425b4bd0(param_1,param_2);
          *(char **)(param_1 + 0x18) = pcVar4;
          *(undefined1 *)(param_1 + 2) = uVar2;
        }
        uVar12 = 8;
        if ((pcVar14 < pcVar4) && (*param_2 < 1)) goto LAB_1425b5fe9;
        goto LAB_1425b604f;
      case 4:
        break;
      case 8:
switchD_1425b5f2e_caseD_8:
LAB_1425b5fe9:
        *(char **)(param_1 + 0x10) = pcVar14;
        if (piVar18 == (int *)0x0) {
          FUN_1425b4bd0(param_1,param_2);
        }
        else {
          FUN_1425b4db0();
        }
        pcVar14 = *(char **)(param_1 + 0x10);
LAB_1425b5f09:
        uVar12 = 8;
        break;
      case 9:
        *(char **)(param_1 + 0x10) = pcVar13;
        if (piVar18 == (int *)0x0) {
          FUN_1425b5500(param_1,param_2);
        }
        else {
          FUN_1425b5710();
        }
        pcVar14 = *(char **)(param_1 + 0x10);
LAB_1425b6035:
        uVar12 = 9;
      }
switchD_1425b5f2e_caseD_4:
      pcVar13 = pcVar14;
      if (pcVar4 <= pcVar14) break;
    }
  }
LAB_1425b604f:
  if (((piVar18 != (int *)0x0) && (iVar16 != 0)) &&
     (piVar5 = *(int **)(param_1 + 0x30), piVar18 < piVar5)) {
    piVar17 = piVar18 + 1;
    if (piVar18 + 1 < piVar5) {
      piVar17 = piVar5;
    }
    if (0x1b < ~(ulonglong)piVar18 + (longlong)piVar17) {
      uVar19 = (~(ulonglong)piVar18 + (longlong)piVar17 >> 2) + 1;
      uVar20 = uVar19 & 0xfffffffffffffff8;
      uVar21 = 0;
      do {
        piVar17 = piVar18 + uVar21;
        iVar15 = piVar17[1];
        iVar6 = piVar17[2];
        iVar7 = piVar17[3];
        piVar1 = piVar18 + uVar21 + 4;
        iVar8 = *piVar1;
        iVar9 = piVar1[1];
        iVar10 = piVar1[2];
        iVar11 = piVar1[3];
        piVar1 = piVar18 + uVar21;
        *piVar1 = *piVar17 + iVar16;
        piVar1[1] = iVar15 + iVar16;
        piVar1[2] = iVar6 + iVar16;
        piVar1[3] = iVar7 + iVar16;
        piVar17 = piVar18 + uVar21 + 4;
        *piVar17 = iVar8 + iVar16;
        piVar17[1] = iVar9 + iVar16;
        piVar17[2] = iVar10 + iVar16;
        piVar17[3] = iVar11 + iVar16;
        uVar21 = uVar21 + 8;
      } while (uVar20 != uVar21);
      piVar18 = piVar18 + uVar20;
      if (uVar19 == uVar20) goto LAB_1425b60ec;
    }
    do {
      *piVar18 = *piVar18 + iVar16;
      piVar18 = piVar18 + 1;
    } while (piVar18 < piVar5);
  }
LAB_1425b60ec:
  *(char **)(param_1 + 0x10) = pcVar14;
  if (((pcVar14 == pcVar4) && (*(char *)(param_1 + 2) != '\0')) && (uVar12 != 0)) {
    if (uVar12 == 9) {
      FUN_1425b5500(param_1,param_2);
      uVar12 = 9;
    }
    else {
      if (uVar12 == 8) {
        FUN_1425b4bd0(param_1,param_2);
      }
      else {
        *(undefined **)(param_1 + 0x10) = &DAT_149c3d0a8 + (uVar12 & 4);
        *(undefined **)(param_1 + 0x18) = &DAT_149c3d0a8 + (uVar12 & 4) + (uVar12 & 3);
        FUN_1425b4bd0(param_1,param_2);
        *(char **)(param_1 + 0x10) = pcVar4;
        *(char **)(param_1 + 0x18) = pcVar4;
      }
      uVar12 = 8;
    }
  }
  *(uint *)(lVar3 + 0x4c) = uVar12;
  return;
}



// FUNCTION 1425b6180 FUN_1425b6180 body=262 status=ok
// SIG undefined FUN_1425b6180(void)

uint FUN_1425b6180(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *_Src;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar2 + 0x4c) == 9) {
    _Src = *(byte **)(param_1 + 0x10);
    uVar3 = 8;
    if (*(byte **)(param_1 + 0x18) <= _Src) goto LAB_1425b6273;
    iVar5 = (int)*(byte **)(param_1 + 0x18) - (int)_Src;
    if (iVar5 < 4) goto LAB_1425b6207;
    uVar4 = (uint)_Src[1] << 8 | (uint)*(ushort *)(_Src + 2) << 0x10;
    bVar1 = *_Src;
  }
  else {
    if (*(int *)(lVar2 + 0x4c) != 8) {
      return 0xfffffff7;
    }
    _Src = *(byte **)(param_1 + 0x10);
    uVar3 = 8;
    if (*(byte **)(param_1 + 0x18) <= _Src) goto LAB_1425b6273;
    iVar5 = (int)*(byte **)(param_1 + 0x18) - (int)_Src;
    if (iVar5 < 4) {
LAB_1425b6207:
      memcpy((void *)(lVar2 + 0x41),_Src,(longlong)iVar5);
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)iVar5;
      *(byte **)(param_1 + 0x10) = _Src + iVar5;
      uVar3 = 0xb;
      goto LAB_1425b6273;
    }
    uVar4 = (uint)_Src[2] << 8 | (uint)_Src[1] << 0x10 | (uint)*_Src << 0x18;
    bVar1 = _Src[3];
  }
  *(byte **)(param_1 + 0x10) = _Src + 4;
  if (((bVar1 | uVar4) < 0x110000) && ((uVar4 & 0xfffff800) != 0xd800)) {
    return bVar1 | uVar4;
  }
  *(undefined4 *)(lVar2 + 0x41) = *(undefined4 *)_Src;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 4;
  uVar3 = 0xc;
LAB_1425b6273:
  *param_2 = uVar3;
  return 0xffff;
}



// FUNCTION 1425b6290 FUN_1425b6290 body=1265 status=ok
// SIG undefined FUN_1425b6290(void)

void FUN_1425b6290(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  char *pcVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined2 local_124;
  undefined1 local_120 [224];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_124 = 0x2020;
  local_128 = 0x20202020;
  puVar2 = (undefined8 *)FUN_1424da030(0x98);
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    *param_3 = 7;
    goto LAB_1425b6405;
  }
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_158 = 0x28;
  uStack_150 = (ulonglong)*(byte *)(param_2 + 8);
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(char **)(param_2 + 0x20) == (char *)0x0) {
    *(uint *)((longlong)puVar2 + 0x6c) = *(uint *)(param_2 + 0xc) & 0xf;
LAB_1425b63ff:
    *param_3 = 2;
    goto LAB_1425b6405;
  }
  strncpy((char *)&local_128,*(char **)(param_2 + 0x20),6);
  uVar6 = *(uint *)(param_2 + 0xc) & 0xf;
  *(uint *)((longlong)puVar2 + 0x6c) = uVar6;
  if ((local_128 & 0xff) == 0x6b) {
    if ((((local_128._1_1_ != 'r') && (local_128._1_1_ != 'o')) ||
        ((local_128._2_1_ != '_' && (local_128._2_1_ != '\0')))) || (1 < uVar6)) goto LAB_1425b63ff;
    if (uVar6 == 1) {
      pcVar5 = "icu-internal-25546";
    }
    else {
      *(undefined4 *)((longlong)puVar2 + 0x6c) = 0;
      pcVar5 = "ibm-949";
    }
    if (*(char *)(param_2 + 8) != '\0') {
      FUN_14250c130(pcVar5,param_3);
      FUN_1424da110(*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
      goto LAB_1425b6405;
    }
    lVar7 = FUN_1424e0df0(pcVar5,param_3);
    puVar2[10] = lVar7;
    if (*param_3 < 1) {
      if (uVar6 == 1) {
        builtin_strncpy((char *)((longlong)puVar2 + 0x7e),"le=ko,ve",8);
        builtin_strncpy((char *)((longlong)puVar2 + 0x86),"rsion=1",8);
        builtin_strncpy((char *)((longlong)puVar2 + 0x71),"ISO_2022",8);
        builtin_strncpy((char *)((longlong)puVar2 + 0x79),",locale=",8);
        **(undefined4 **)(param_1 + 0x28) = **(undefined4 **)(lVar7 + 0x28);
        *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(puVar2[10] + 0x59);
      }
      else {
        builtin_strncpy((char *)((longlong)puVar2 + 0x7e),"le=ko,ve",8);
        builtin_strncpy((char *)((longlong)puVar2 + 0x86),"rsion=0",8);
        builtin_strncpy((char *)((longlong)puVar2 + 0x71),"ISO_2022",8);
        builtin_strncpy((char *)((longlong)puVar2 + 0x79),",locale=",8);
      }
      if (*(int *)((longlong)puVar2 + 0x6c) == 1) {
        lVar7 = puVar2[10];
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined1 *)(lVar7 + 0x40) = 0;
        if (*(char *)(param_1 + 0x5b) == '\0') goto LAB_1425b6745;
LAB_1425b675f:
        iVar1 = *(int *)((longlong)puVar2 + 0x6c);
      }
      else {
        if (*(char *)(param_1 + 0x5b) != '\0') goto LAB_1425b675f;
LAB_1425b6745:
        *(undefined1 *)(param_1 + 0x5b) = 4;
        *(undefined4 *)(param_1 + 0x68) = 0x4329241b;
        iVar1 = *(int *)((longlong)puVar2 + 0x6c);
      }
      if (iVar1 == 1) {
        *(undefined8 *)(puVar2[10] + 0x50) = 1;
      }
      *(undefined **)(param_1 + 0x30) = &DAT_149c3d438;
      *(undefined1 *)((longlong)puVar2 + 0x91) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x8f) = 0x6f6b;
      goto LAB_1425b66e8;
    }
  }
  else {
    if ((local_128 & 0xff) == 0x6a) {
      if ((((local_128._1_1_ != 'p') && (local_128._1_1_ != 'a')) ||
          ((local_128._2_1_ != '_' && (local_128._2_1_ != '\0')))) || (4 < uVar6))
      goto LAB_1425b63ff;
      if (uVar6 < 2) {
        uVar3 = FUN_14250b6d0("Shift-JIS",local_120,&local_158,param_3);
        puVar2[4] = uVar3;
        if (uVar6 != 0) {
          lVar7 = 5;
          pcVar5 = "jisx-212";
          goto LAB_1425b65bc;
        }
      }
      else {
        uVar3 = FUN_14250b6d0("ISO8859_7",local_120,&local_158,param_3);
        puVar2[2] = uVar3;
        uVar3 = FUN_14250b6d0("Shift-JIS",local_120,&local_158,param_3);
        puVar2[4] = uVar3;
        uVar3 = FUN_14250b6d0("jisx-212",local_120,&local_158,param_3);
        puVar2[5] = uVar3;
        uVar3 = FUN_14250b6d0("ibm-5478",local_120,&local_158,param_3);
        puVar2[6] = uVar3;
        lVar7 = 7;
        pcVar5 = "ksc_5601";
LAB_1425b65bc:
        uVar3 = FUN_14250b6d0(pcVar5,local_120,&local_158,param_3);
        puVar2[lVar7] = uVar3;
      }
      *(undefined **)(param_1 + 0x30) = &DAT_149c3d310;
      *(undefined1 *)((longlong)puVar2 + 0x91) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x8f) = 0x616a;
      builtin_strncpy((char *)((longlong)puVar2 + 0x71),"ISO_2022",8);
      builtin_strncpy((char *)((longlong)puVar2 + 0x79),",locale=",8);
      builtin_strncpy((char *)((longlong)puVar2 + 0x7d),"ale=ja,v",8);
      builtin_strncpy((char *)((longlong)puVar2 + 0x85),"ersion=",8);
      sVar4 = strlen((char *)((longlong)puVar2 + 0x71));
      *(char *)((longlong)puVar2 + sVar4 + 0x71) = *(char *)((longlong)puVar2 + 0x6c) + '0';
      *(undefined1 *)((longlong)puVar2 + sVar4 + 0x72) = 0;
    }
    else {
      if (((((char)local_128 != 'z') || (local_128._1_1_ != 'h')) &&
          (((char)local_128 != 'c' || (local_128._1_1_ != 'n')))) ||
         (((local_128._2_1_ != '_' && (local_128._2_1_ != '\0')) || (2 < uVar6))))
      goto LAB_1425b63ff;
      uVar3 = FUN_14250b6d0("ibm-5478",local_120,&local_158,param_3);
      puVar2[1] = uVar3;
      if (uVar6 == 1) {
        uVar3 = FUN_14250b6d0("iso-ir-165",local_120,&local_158,param_3);
        puVar2[2] = uVar3;
      }
      uVar3 = FUN_14250b6d0("cns-11643-1992",local_120,&local_158,param_3);
      puVar2[3] = uVar3;
      *(undefined **)(param_1 + 0x30) = &DAT_149c3d560;
      *(undefined1 *)((longlong)puVar2 + 0x91) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x8f) = 0x6e63;
      if (uVar6 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0x6c) = 0;
        builtin_strncpy((char *)((longlong)puVar2 + 0x71),"ISO_2022",8);
        builtin_strncpy((char *)((longlong)puVar2 + 0x79),",locale=",8);
        builtin_strncpy((char *)((longlong)puVar2 + 0x7e),"le=zh,ve",8);
        builtin_strncpy((char *)((longlong)puVar2 + 0x86),"rsion=0",8);
      }
      else {
        if (uVar6 == 1) {
          *(undefined4 *)((longlong)puVar2 + 0x6c) = 1;
          builtin_strncpy((char *)((longlong)puVar2 + 0x7e),"le=zh,ve",8);
          builtin_strncpy((char *)((longlong)puVar2 + 0x86),"rsion=1",8);
        }
        else {
          *(undefined4 *)((longlong)puVar2 + 0x6c) = 2;
          builtin_strncpy((char *)((longlong)puVar2 + 0x7e),"le=zh,ve",8);
          builtin_strncpy((char *)((longlong)puVar2 + 0x86),"rsion=2",8);
        }
        builtin_strncpy((char *)((longlong)puVar2 + 0x71),"ISO_",4);
        builtin_strncpy((char *)((longlong)puVar2 + 0x75),"2022",4);
        builtin_strncpy((char *)((longlong)puVar2 + 0x79),",loc",4);
        builtin_strncpy((char *)((longlong)puVar2 + 0x7d),"ale=",4);
      }
    }
LAB_1425b66e8:
    *(undefined1 *)(param_1 + 0x58) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x47);
    if ((*param_3 < 1) && (*(char *)(param_2 + 8) == '\0')) goto LAB_1425b6405;
  }
  FUN_1425b67a0(param_1);
LAB_1425b6405:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_178);
}



// FUNCTION 1425b67a0 FUN_1425b67a0 body=200 status=ok
// SIG undefined FUN_1425b67a0(void)

void FUN_1425b67a0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[1] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[2] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[3] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[4] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[5] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[6] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[7] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[8] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[9] != 0) {
      FUN_14250b3d0();
    }
    FUN_1424e1140(plVar1[10]);
    if (*(char *)(param_1 + 0x3e) == '\0') {
      FUN_1424da110(*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



// FUNCTION 1425b6940 FUN_1425b6940 body=462 status=ok
// SIG undefined FUN_1425b6940(void)

void FUN_1425b6940(longlong param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_68 [32];
  int *local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(lVar3 + 0x10);
  puVar5 = *(undefined1 **)(lVar3 + 0x28);
  cVar1 = *(char *)(lVar4 + 0x8f);
  if (cVar1 == 'c') {
    if (*(char *)(lVar4 + 0x66) == '\0') {
LAB_1425b6aad:
      puVar10 = (undefined2 *)local_40;
    }
    else {
      *(undefined1 *)(lVar4 + 0x66) = 0;
LAB_1425b69b5:
      puVar10 = (undefined2 *)(local_40 + 1);
      local_40[0] = 0xf;
    }
LAB_1425b6ab2:
    *(undefined1 *)puVar10 = *puVar5;
    iVar9 = (int)puVar10 + 1;
  }
  else if (cVar1 == 'k') {
    cVar1 = *(char *)(lVar3 + 0x59);
    if (*(int *)(lVar4 + 0x6c) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x50);
      uVar7 = *(undefined8 *)(lVar6 + 0x28);
      uVar2 = *(undefined1 *)(lVar6 + 0x59);
      *(undefined1 **)(lVar6 + 0x28) = puVar5;
      *(char *)(*(longlong *)(lVar4 + 0x50) + 0x59) = cVar1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar4 + 0x50);
      *(undefined4 *)(*(longlong *)(lVar4 + 0x50) + 0x54) = *(undefined4 *)(lVar3 + 0x54);
      FUN_142635dd0(param_1,0,param_3,param_2);
      *(undefined4 *)(lVar3 + 0x54) = *(undefined4 *)(*(longlong *)(lVar4 + 0x50) + 0x54);
      *(longlong *)(param_1 + 8) = lVar3;
      *(undefined8 *)(*(longlong *)(lVar4 + 0x50) + 0x28) = uVar7;
      *(undefined1 *)(*(longlong *)(lVar4 + 0x50) + 0x59) = uVar2;
      if (*param_3 == 0xf) {
        bVar8 = *(byte *)(*(longlong *)(lVar4 + 0x50) + 0x5b);
        if ('\0' < (char)bVar8) {
          memcpy((void *)(lVar3 + 0x68),(void *)(*(longlong *)(lVar4 + 0x50) + 0x68),
                 (ulonglong)bVar8);
          bVar8 = *(byte *)(*(longlong *)(lVar4 + 0x50) + 0x5b);
        }
        *(byte *)(lVar3 + 0x5b) = bVar8;
        *(undefined1 *)(*(longlong *)(lVar4 + 0x50) + 0x5b) = 0;
      }
      goto LAB_1425b6ad0;
    }
    if (cVar1 == '\x01') {
      if (*(int *)(lVar3 + 0x50) == 0) goto LAB_1425b6aad;
      *(undefined4 *)(lVar3 + 0x50) = 0;
      goto LAB_1425b69b5;
    }
    if (*(int *)(lVar3 + 0x50) == 0) {
      *(undefined4 *)(lVar3 + 0x50) = 1;
      puVar11 = local_40 + 1;
      local_40[0] = 0xe;
    }
    else {
      puVar11 = local_40;
    }
    *puVar11 = *puVar5;
    puVar11[1] = puVar5[1];
    iVar9 = (int)puVar11 + 2;
  }
  else {
    if (cVar1 == 'j') {
      if (*(char *)(lVar4 + 0x66) == '\x01') {
        *(undefined1 *)(lVar4 + 0x66) = 0;
        puVar10 = (undefined2 *)(local_40 + 1);
        local_40[0] = 0xf;
      }
      else {
        puVar10 = (undefined2 *)local_40;
      }
      if ((*(char *)(lVar4 + 0x62) != '\0') && (*(char *)(lVar4 + 0x62) != '\x03')) {
        *(undefined1 *)(lVar4 + 0x62) = 0;
        *puVar10 = 0x281b;
        *(undefined1 *)(puVar10 + 1) = 0x42;
        puVar10 = (undefined2 *)((longlong)puVar10 + 3);
      }
      goto LAB_1425b6ab2;
    }
    iVar9 = (int)local_40;
  }
  local_48 = param_3;
  FUN_142635c30(param_1,local_40,iVar9 - (int)local_40);
LAB_1425b6ad0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1425b6b20 FUN_1425b6b20 body=294 status=ok
// SIG undefined FUN_1425b6b20(void)

void FUN_1425b6b20(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  longlong *_Src;
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 == 0) {
    *param_3 = 0x2e0;
  }
  else {
    _Src = *(longlong **)(param_1 + 0x10);
    memcpy((void *)(param_2 + 0x248),_Src,0x98);
    *(void **)(param_2 + 0x10) = (void *)(param_2 + 0x248);
    *(undefined1 *)(param_2 + 0x3e) = 1;
    if (_Src[10] != 0) {
      local_2c = 0x128;
      uVar1 = FUN_1424e0e10(_Src[10],param_2 + 0x120,&local_2c,param_4);
      *(undefined8 *)(param_2 + 0x298) = uVar1;
      if (0 < *param_4) goto LAB_1425b6c39;
    }
    if (*_Src != 0) {
      FUN_14250b570();
    }
    if (_Src[1] != 0) {
      FUN_14250b570();
    }
    if (_Src[2] != 0) {
      FUN_14250b570();
    }
    if (_Src[3] != 0) {
      FUN_14250b570();
    }
    if (_Src[4] != 0) {
      FUN_14250b570();
    }
    if (_Src[5] != 0) {
      FUN_14250b570();
    }
    if (_Src[6] != 0) {
      FUN_14250b570();
    }
    if (_Src[7] != 0) {
      FUN_14250b570();
    }
    if (_Src[8] != 0) {
      FUN_14250b570();
    }
    if (_Src[9] != 0) {
      FUN_14250b570();
    }
  }
LAB_1425b6c39:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1425b6c60 FUN_1425b6c60 body=401 status=ok
// SIG undefined FUN_1425b6c60(void)

void FUN_1425b6c60(longlong param_1,undefined8 *param_2,int param_3,int *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *param_4) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  switch(*(undefined1 *)(lVar2 + 0x8f)) {
  case 99:
  case 0x7a:
    (*(code *)param_2[2])(*param_2,0,0x7f);
    break;
  case 0x6a:
    (*(code *)param_2[1])(*param_2,0xa5);
    (*(code *)param_2[1])(*param_2,0x203e);
    (*(code *)param_2[2])(*param_2,0,(uint)(1 < *(uint *)(lVar2 + 0x6c)) << 7 | 0x7f);
    if (((*(int *)(lVar2 + 0x6c) == 3) || (param_3 == 1)) || (*(int *)(lVar2 + 0x6c) == 4)) {
      (*(code *)param_2[2])(*param_2,0xff61,0xff9f);
    }
    break;
  case 0x6b:
    (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x30) + 0x20) + 0x78))
              (*(longlong *)(lVar2 + 0x50),param_2,param_3,param_4);
  }
  lVar4 = 0;
  do {
    if (*(longlong *)(lVar2 + lVar4) != 0) {
      cVar1 = *(char *)(lVar2 + 0x8f);
      if (((lVar4 != 0x20) || (lVar3 = 3, cVar1 != 'j')) &&
         (((cVar1 != 'z' && (cVar1 != 'c')) ||
          ((lVar4 != 0x18 || (lVar3 = 2, *(int *)(lVar2 + 0x6c) != 0)))))) {
        lVar3 = (ulonglong)(lVar4 == 0x38) << 2;
      }
      FUN_142583010(*(longlong *)(lVar2 + lVar4),param_2,param_3,lVar3,param_4);
    }
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x50);
  (*(code *)param_2[4])(*param_2,0xe);
  (*(code *)param_2[4])(*param_2,0xf);
  (*(code *)param_2[4])(*param_2,0x1b);
                    /* WARNING: Could not recover jumptable at 0x0001425b6dda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[5])(*param_2,0x80,0x9f);
  return;
}



// FUNCTION 1425b6e00 FUN_1425b6e00 body=1447 status=ok
// SIG undefined FUN_1425b6e00(void)

void FUN_1425b6e00(longlong param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  byte bVar16;
  char cVar17;
  byte *pbVar18;
  byte *pbVar19;
  ushort *puVar20;
  ushort *puVar21;
  undefined1 auStack_88 [32];
  int *local_68;
  byte *local_58;
  undefined2 local_4a;
  ulonglong local_48;
  ulonglong uVar15;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pbVar18 = *(byte **)(param_1 + 0x10);
  puVar20 = *(ushort **)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 8);
  pbVar2 = *(byte **)(param_1 + 0x18);
  lVar3 = *(longlong *)(lVar7 + 0x10);
  if (*(int *)(lVar3 + 0x68) != 0) goto LAB_1425b7016;
  local_58 = pbVar18;
  if (*(char *)(lVar7 + 0x40) != '\x01') goto LAB_1425b6e97;
  if (pbVar2 <= pbVar18) goto LAB_1425b6e97;
  if (*(ushort **)(param_1 + 0x28) <= puVar20) goto LAB_1425b6e97;
  uVar14 = (ulonglong)*(byte *)(lVar7 + 0x41);
  *(undefined1 *)(lVar7 + 0x40) = 0;
  iVar6 = (int)*(char *)(lVar3 + 0x5c + (longlong)*(char *)(lVar3 + 0x60));
LAB_1425b7160:
  bVar1 = *local_58;
  uVar12 = (uint)bVar1;
  iVar4 = (int)uVar14;
  puVar21 = puVar20;
  if ((0x5d < (iVar4 + 0xdfU & 0xfe)) || (0x5d < (byte)(bVar1 - 0x21))) {
    uVar8 = 0xffff;
    pbVar19 = local_58;
    if ((0x5d < (byte)(bVar1 - 0x21)) &&
       ((0x1f < bVar1 || ((0x800c000U >> (uVar12 & 0x1f) & 1) == 0)))) {
      uVar14 = (ulonglong)(iVar4 * 0x100 + uVar12 + 0x10000);
      pbVar19 = local_58 + 1;
      local_58 = local_58 + 1;
    }
    goto LAB_1425b725d;
  }
  pbVar19 = local_58 + 1;
  uVar12 = iVar4 << 8 | uVar12;
  uVar15 = (ulonglong)uVar12;
  if (iVar6 == 7) {
    uVar12 = uVar12 + 0x8080;
LAB_1425b7239:
    local_4a = (ushort)uVar12 << 8 | (ushort)uVar12 >> 8;
  }
  else {
    if (iVar6 != 4) goto LAB_1425b7239;
    cVar17 = '~';
    if ((uVar14 & 1) != 0) {
      cVar17 = ' ' - (bVar1 < 0x60);
    }
    bVar16 = ((byte)uVar14 & 1) + (byte)uVar14;
    cVar10 = (bVar16 >> 1) + 0xb0;
    if ((char)bVar16 < '\0') {
      cVar10 = '\0';
    }
    cVar11 = (bVar16 >> 1) + 0x70;
    if (0x5f < bVar16) {
      cVar11 = cVar10;
    }
    local_4a = CONCAT11(cVar17 + bVar1,cVar11);
  }
  local_58 = pbVar19;
  uVar8 = FUN_142584b30(*(undefined8 *)(lVar3 + (longlong)iVar6 * 8),&local_4a,2,0);
  uVar14 = uVar15;
LAB_1425b725d:
  uVar12 = (uint)uVar8;
  uVar13 = (uint)uVar14;
  if (uVar12 < 0xfffe) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      iVar6 = -1;
      if (0xff < uVar13) {
        iVar6 = -2;
      }
      *(int *)(*(longlong *)(param_1 + 0x30) +
              ((longlong)puVar21 - *(longlong *)(param_1 + 0x20)) * 2) =
           ((int)pbVar19 + iVar6) - *(int *)(param_1 + 0x10);
    }
    *puVar21 = (ushort)uVar8;
    puVar20 = puVar21 + 1;
  }
  else {
    if (uVar12 < 0x10000) {
      lVar7 = *(longlong *)(param_1 + 8);
      uVar9 = 1;
      if (0xff < uVar13) {
        *(char *)(lVar7 + 0x42) = (char)uVar14;
        uVar14 = uVar14 >> 8;
        uVar9 = 2;
      }
      *(char *)(lVar7 + 0x41) = (char)uVar14;
      *(undefined1 *)(lVar7 + 0x40) = uVar9;
      *param_2 = (uint)(uVar12 != 0xfffe) * 2 + 10;
      puVar20 = puVar21;
LAB_1425b6f59:
      *(ushort **)(param_1 + 0x20) = puVar20;
      *(byte **)(param_1 + 0x10) = pbVar19;
LAB_1425b6f61:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    *puVar21 = (short)(uVar12 + 0x3ff0000 >> 10) + 0xd800;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      iVar6 = -1;
      if (0xff < uVar13) {
        iVar6 = -2;
      }
      *(int *)(*(longlong *)(param_1 + 0x30) +
              ((longlong)puVar21 - *(longlong *)(param_1 + 0x20)) * 2) =
           (iVar6 + (int)local_58) - *(int *)(param_1 + 0x10);
    }
    puVar20 = puVar21 + 1;
    uVar5 = (ushort)uVar8 & 0x3ff | 0xdc00;
    if (puVar20 < *(ushort **)(param_1 + 0x28)) {
      *puVar20 = uVar5;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        iVar6 = -1;
        if (0xff < uVar13) {
          iVar6 = -2;
        }
        *(int *)(*(longlong *)(param_1 + 0x30) +
                ((longlong)puVar20 - *(longlong *)(param_1 + 0x20)) * 2) =
             (iVar6 + (int)local_58) - *(int *)(param_1 + 0x10);
      }
      puVar20 = puVar21 + 2;
    }
    else {
      lVar7 = *(longlong *)(param_1 + 8);
      cVar17 = *(char *)(lVar7 + 0x5d);
      *(char *)(lVar7 + 0x5d) = cVar17 + '\x01';
      *(ushort *)(lVar7 + 0x90 + (longlong)cVar17 * 2) = uVar5;
    }
  }
LAB_1425b6e97:
  pbVar19 = local_58;
  if (local_58 < pbVar2) {
    lVar7 = (longlong)pbVar2 - (longlong)local_58;
    pbVar18 = local_58;
LAB_1425b6edb:
    if (*(ushort **)(param_1 + 0x28) <= puVar20) {
      *param_2 = 0xf;
      pbVar19 = pbVar18;
      goto LAB_1425b6f59;
    }
    bVar1 = *pbVar18;
    uVar14 = (ulonglong)bVar1;
    puVar21 = puVar20;
    switch(bVar1) {
    case 10:
    case 0xd:
      bVar16 = *(byte *)(lVar3 + 0x5c);
      if ((bVar16 != 0) && (bVar16 != 3)) {
        *(undefined1 *)(lVar3 + 0x5c) = 0;
        bVar16 = 0;
      }
      *(undefined1 *)(lVar3 + 0x5e) = 0;
      *(undefined1 *)(lVar3 + 0x60) = 0;
      *(undefined1 *)(lVar3 + 0x70) = 0;
      break;
    default:
      pbVar19 = pbVar18 + 1;
      *(undefined1 *)(lVar3 + 0x70) = 0;
      bVar16 = *(byte *)(lVar3 + 0x5c + (longlong)*(char *)(lVar3 + 0x60));
      if ((((byte)(bVar1 + 0x5f) < 0x3f) && (*(int *)(lVar3 + 0x6c) == 4)) && ((bVar16 & 0xfc) != 4)
         ) {
        uVar8 = (ulonglong)(bVar1 + 0xfec0);
        local_58 = pbVar19;
        if ('\x01' < *(char *)(lVar3 + 0x60)) {
          *(undefined1 *)(lVar3 + 0x60) = *(undefined1 *)(lVar3 + 0x61);
        }
        goto LAB_1425b725d;
      }
      break;
    case 0xe:
      if (*(int *)(lVar3 + 0x6c) == 3) {
        *(undefined1 *)(lVar3 + 0x5d) = 8;
        uVar9 = 1;
        goto LAB_1425b6ece;
      }
      *(undefined1 *)(lVar3 + 0x70) = 0;
      uVar14 = 0xe;
      uVar8 = 0xffff;
      pbVar19 = pbVar18 + 1;
      local_58 = pbVar18 + 1;
      goto LAB_1425b725d;
    case 0xf:
      if (*(int *)(lVar3 + 0x6c) != 3) {
        *(undefined1 *)(lVar3 + 0x70) = 0;
        uVar14 = 0xf;
        uVar8 = 0xffff;
        pbVar19 = pbVar18 + 1;
        local_58 = pbVar18 + 1;
        goto LAB_1425b725d;
      }
      uVar9 = 0;
LAB_1425b6ece:
      pbVar18 = pbVar18 + 1;
      *(undefined1 *)(lVar3 + 0x60) = uVar9;
      lVar7 = lVar7 + -1;
      pbVar19 = pbVar2;
      if (lVar7 == 0) goto LAB_1425b6f59;
      goto LAB_1425b6edb;
    case 0x1b:
      goto switchD_1425b6efe_caseD_1b;
    }
    iVar6 = (int)(char)bVar16;
    pbVar19 = pbVar18 + 1;
    local_58 = pbVar19;
    switch(iVar6) {
    case 0:
      uVar8 = 0xffff;
      if (-1 < (char)bVar1) {
        uVar8 = (ulonglong)(uint)bVar1;
      }
      break;
    case 1:
      *(undefined1 *)(lVar3 + 0x60) = *(undefined1 *)(lVar3 + 0x61);
      uVar8 = 0xffff;
      if (-1 < (char)bVar1) {
        uVar8 = (ulonglong)(bVar1 + 0x80);
      }
      break;
    case 2:
      uVar8 = 0xffff;
      if (-1 < (char)bVar1) {
        uVar8 = (ulonglong)
                *(ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x38) + (uVar14 ^ 0x80) * 4)
        ;
      }
      *(undefined1 *)(lVar3 + 0x60) = *(undefined1 *)(lVar3 + 0x61);
      break;
    case 3:
      uVar8 = 0xffff;
      if ((-1 < (char)bVar1) && (uVar8 = uVar14, 0x5b < bVar1)) {
        if (bVar1 == 0x7e) {
          uVar8 = 0x203e;
        }
        else if (bVar1 == 0x5c) {
          uVar8 = 0xa5;
        }
      }
      break;
    default:
      if (pbVar19 < pbVar2) {
        uVar14 = (ulonglong)(uint)bVar1;
        goto LAB_1425b7160;
      }
      *(byte *)(*(longlong *)(param_1 + 8) + 0x41) = bVar1;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
      goto LAB_1425b6f59;
    case 8:
      uVar8 = 0xffff;
      if ((byte)(bVar1 - 0x21) < 0x3f) {
        uVar8 = (ulonglong)(bVar1 + 0xff40);
      }
    }
    goto LAB_1425b725d;
  }
  goto LAB_1425b6f59;
switchD_1425b6efe_caseD_1b:
  lVar7 = *(longlong *)(param_1 + 8);
LAB_1425b7016:
  cVar17 = *(char *)(lVar7 + 0x40);
  local_68 = param_2;
  local_58 = pbVar18;
  FUN_1425b8240(lVar7,&local_58,pbVar2,1);
  if ((*(int *)(lVar3 + 0x6c) == 0) && (*(int *)(lVar3 + 0x68) == 0)) {
    if (0 < *param_2) goto LAB_1425b7343;
    if (*(char *)(lVar3 + 0x70) != '\0') {
      *param_2 = 0x12;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x11c) = 2;
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = cVar17 + ((char)local_58 - (char)pbVar18);
    }
  }
  if (*param_2 < 1) {
    if (*(int *)(lVar3 + 0x68) == 0) {
      *(undefined1 *)(lVar3 + 0x70) = 1;
    }
    goto LAB_1425b6e97;
  }
LAB_1425b7343:
  *(ushort **)(param_1 + 0x20) = puVar20;
  *(byte **)(param_1 + 0x10) = local_58;
  *(undefined1 *)(lVar3 + 0x70) = 0;
  goto LAB_1425b6f61;
}



// FUNCTION 1425b73d0 FUN_1425b73d0 body=3670 status=ok
// SIG undefined FUN_1425b73d0(void)

/* WARNING: Removing unreachable block (ram,0x0001425b75d5) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1425b73d0(longlong param_1,int *param_2)

{
  int *piVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ushort *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  int **local_110;
  uint local_108;
  int *local_100;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 *local_c8;
  uint local_c0;
  uint local_bc;
  int *local_b8;
  longlong local_b0;
  ushort *local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined1 *local_90;
  ushort *local_88;
  ulonglong local_80;
  ulonglong local_78;
  int *local_70;
  undefined1 *local_68;
  char acStack_5b [11];
  undefined2 local_50;
  undefined1 auStack_4e [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar16 = *(longlong *)(param_1 + 8);
  puVar19 = *(ushort **)(param_1 + 0x10);
  puVar9 = *(undefined1 **)(param_1 + 0x20);
  puVar25 = *(undefined1 **)(param_1 + 0x28);
  local_a8 = *(ushort **)(param_1 + 0x18);
  local_70 = *(int **)(param_1 + 0x30);
  lVar23 = *(longlong *)(lVar16 + 0x10);
  uVar27 = *(uint *)(lVar16 + 0x54);
  local_ec = 0;
  local_d8 = lVar23;
  local_d0 = param_1;
  local_b8 = param_2;
  local_b0 = lVar16;
  local_90 = puVar25;
  if (uVar27 == 0) {
    uVar20 = 0;
    goto LAB_1425b7475;
  }
  uVar20 = 0;
  if (puVar25 <= puVar9) goto LAB_1425b7475;
  uVar20 = 0;
  if (local_a8 <= puVar19) {
LAB_1425b7dcd:
    *(uint *)(lVar16 + 0x54) = uVar27;
LAB_1425b7dd1:
    if ((*local_b8 < 1) &&
       ((((*(char *)(local_d8 + 0x66) != '\0' || (*(char *)(local_d8 + 0x62) != '\0')) &&
         (*(char *)(local_d0 + 2) != '\0')) &&
        ((local_a8 <= puVar19 && (*(int *)(lVar16 + 0x54) == 0)))))) {
      bVar29 = *(char *)(local_d8 + 0x66) != '\0';
      if (bVar29) {
        local_50._0_1_ = 0xf;
        *(undefined1 *)(local_d8 + 0x66) = 0;
      }
      uVar20 = (ulonglong)bVar29;
      if (*(char *)(local_d8 + 0x62) != '\0') {
        auStack_4e[uVar20] = 0x42;
        *(undefined2 *)((longlong)&local_50 + uVar20) = 0x281b;
        uVar20 = (ulonglong)(bVar29 + 3);
        *(undefined1 *)(local_d8 + 0x62) = 0;
      }
      lVar23 = *(longlong *)(local_d0 + 0x10);
      iVar28 = (int)((ulonglong)((longlong)puVar19 - lVar23) >> 1);
      if (iVar28 < 1) {
        local_108 = 0xffffffff;
      }
      else {
        local_108 = iVar28 - 1;
        if (((*(ushort *)(lVar23 + (ulonglong)local_108 * 2) & 0xfc00) == 0xdc00) &&
           ((local_108 == 0 ||
            ((*(ushort *)(lVar23 + (ulonglong)(iVar28 - 2) * 2) & 0xfc00) == 0xd800)))) {
          local_108 = iVar28 - 2;
        }
      }
      local_100 = local_b8;
      local_110 = &local_70;
      local_118 = puVar25;
      local_68 = puVar9;
      FUN_142637760(lVar16,&local_50,uVar20,&local_68);
      puVar9 = local_68;
    }
LAB_1425b8209:
    *(ushort **)(local_d0 + 0x10) = puVar19;
    *(undefined1 **)(local_d0 + 0x20) = puVar9;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
  }
LAB_1425b74c2:
  uVar2 = *puVar19;
  if ((uVar2 & 0xfc00) == 0xdc00) {
    puVar19 = puVar19 + 1;
    uVar27 = uVar27 * 0x400 + (uint)uVar2 + 0xfca02400;
    *(undefined4 *)(lVar16 + 0x54) = 0;
    if ((int)uVar27 < 0x20) goto LAB_1425b7504;
LAB_1425b7513:
    if ((int)uVar20 == 0) {
      uVar2 = *(ushort *)(&DAT_149c3d300 + (ulonglong)*(uint *)(lVar23 + 0x6c) * 2);
      bVar29 = *(uint *)(lVar23 + 0x6c) - 3 < 2;
      if (bVar29) {
        acStack_5b[1] = 8;
      }
      uVar26 = (uint)bVar29;
      bVar3 = *(byte *)(lVar23 + 0x62);
      uVar17 = (ulonglong)uVar26;
      acStack_5b[uVar17 + 1] = bVar3;
      uVar20 = uVar17 + 1;
      uVar15 = (uint)uVar2 & ~(1 << (bVar3 & 0x1f)) & 0xfeff;
      bVar3 = *(byte *)(lVar23 + 100);
      if (bVar3 != 0) {
        acStack_5b[uVar17 + 2] = bVar3;
        uVar15 = uVar15 & ~(1 << (bVar3 & 0x1f));
        uVar20 = (ulonglong)(uVar26 | 2);
      }
      if ((uVar15 & 1) == 0) {
        uVar17 = uVar20;
        uVar26 = uVar15;
        uVar18 = uVar15;
        if ((uVar15 & 8) == 0) goto LAB_1425b7598;
LAB_1425b7ccd:
        uVar20 = (ulonglong)((int)uVar17 + 1);
        acStack_5b[uVar17 + 1] = '\x03';
        uVar18 = uVar26 & 0xfff7;
        uVar17 = uVar20;
        uVar15 = uVar18;
        if ((uVar26 & 2) != 0) goto LAB_1425b7ceb;
LAB_1425b75a1:
        uVar21 = uVar17;
        uVar26 = uVar15;
        if ((uVar15 & 0x10) == 0) goto LAB_1425b75aa;
LAB_1425b7d09:
        uVar21 = (ulonglong)((int)uVar17 + 1);
        acStack_5b[uVar17 + 1] = '\x04';
        uVar26 = uVar15 & 0xffef;
        uVar20 = uVar21;
        uVar18 = uVar26;
        if ((uVar15 & 4) != 0) goto LAB_1425b7d27;
LAB_1425b75b3:
        bVar3 = (byte)uVar18;
        if ((uVar18 & 0x20) == 0) goto LAB_1425b75bc;
LAB_1425b7d45:
        acStack_5b[uVar20 + 1] = '\x05';
        bVar4 = (byte)uVar18 & 0xdf;
        uVar20 = (ulonglong)((int)uVar20 + 1);
        bVar3 = bVar4;
      }
      else {
        uVar17 = (ulonglong)((int)uVar20 + 1);
        acStack_5b[uVar20 + 1] = '\0';
        uVar26 = uVar15 & 0xfffe;
        uVar20 = uVar17;
        uVar18 = uVar26;
        if ((uVar15 & 8) != 0) goto LAB_1425b7ccd;
LAB_1425b7598:
        uVar17 = uVar20;
        uVar15 = uVar18;
        if ((uVar18 & 2) == 0) goto LAB_1425b75a1;
LAB_1425b7ceb:
        uVar17 = (ulonglong)((int)uVar20 + 1);
        acStack_5b[uVar20 + 1] = '\x01';
        uVar15 = uVar18 & 0xfffd;
        uVar21 = uVar17;
        uVar26 = uVar15;
        if ((uVar18 & 0x10) != 0) goto LAB_1425b7d09;
LAB_1425b75aa:
        uVar20 = uVar21;
        uVar18 = uVar26;
        if ((uVar26 & 4) == 0) goto LAB_1425b75b3;
LAB_1425b7d27:
        uVar20 = (ulonglong)((int)uVar21 + 1);
        acStack_5b[uVar21 + 1] = '\x02';
        uVar18 = uVar26 & 0xfffb;
        bVar3 = (byte)uVar18;
        if ((uVar26 & 0x20) != 0) goto LAB_1425b7d45;
LAB_1425b75bc:
        bVar4 = (byte)uVar18;
      }
      if ((uVar18 & 0x40) != 0) {
        acStack_5b[uVar20 + 1] = '\x06';
        uVar20 = (ulonglong)((int)uVar20 + 1);
        bVar4 = bVar3;
      }
      if ((char)bVar4 < '\0') {
        acStack_5b[uVar20 + 1] = '\a';
        uVar20 = (ulonglong)((int)uVar20 + 1);
      }
LAB_1425b75e3:
      local_f0 = (uint)*(byte *)(lVar16 + 0x3f);
      lVar24 = (longlong)((int)uVar27 >> 10);
      uVar22 = (ulonglong)(uVar27 >> 4 & 0x3f);
      uVar26 = uVar27 & 0xf;
      uVar15 = 1 << (char)uVar26 + 0x10;
      local_bc = uVar27 - 0xe000;
      local_c0 = uVar27 - 0xf0000;
      uVar17 = (ulonglong)(uVar27 - 0xff61);
      local_9c = uVar27 - 0xfec0;
      local_a0 = uVar27 - 0xff40;
      local_94 = uVar27 - 0xa0;
      local_98 = uVar27 - 0x80;
      iVar28 = 0;
      uVar21 = 1;
      local_e4 = 0;
      local_e8 = 0;
      local_e0 = uVar20;
      local_c8 = puVar9;
      local_88 = puVar19;
      local_80 = uVar17;
      local_78 = uVar20;
LAB_1425b76b0:
      cVar5 = acStack_5b[uVar21];
      uVar18 = (uint)cVar5;
      lVar8 = (longlong)(int)uVar18;
      lVar16 = local_b0;
      puVar25 = local_90;
      puVar19 = local_88;
      puVar9 = local_c8;
      switch(uVar18) {
      case 0:
        if (0x7f < (int)uVar27) goto joined_r0x0001425b797d;
        uVar20 = 0;
        local_ec = uVar27;
        break;
      case 1:
        if (0x5f < local_94) goto joined_r0x0001425b797d;
        uVar20 = 2;
        local_ec = local_98;
        break;
      case 2:
        lVar8 = *(longlong *)(lVar23 + lVar8 * 8);
        if (((int)uVar27 < 0x10000) || ((*(byte *)(lVar8 + 0xfd) & 1) != 0)) {
          uVar2 = *(ushort *)
                   (*(longlong *)(lVar8 + 0xe8) +
                   ((ulonglong)uVar26 +
                   (ulonglong)
                   *(ushort *)
                    (*(longlong *)(lVar8 + 0x58) +
                    (uVar22 + *(ushort *)(*(longlong *)(lVar8 + 0x58) + lVar24 * 2)) * 2)) * 2);
          iVar12 = 1;
          if (uVar2 < 0xf00) {
            if ((char)local_f0 == '\0') {
              iVar12 = -1;
              if (0xbff < uVar2) goto LAB_1425b7a92;
              local_f0 = 0;
            }
            else {
              iVar12 = -1;
              if (0x7ff < uVar2) goto LAB_1425b7a92;
            }
          }
          else {
LAB_1425b7a92:
            if ((iVar28 == 0 || 0xeff < uVar2) && (0x9f < (uVar2 & 0xff))) {
              local_ec = (byte)uVar2 - 0x80;
              local_e4 = 2;
joined_r0x0001425b797d:
              local_f0 = 0;
              local_e8 = uVar18;
              iVar28 = iVar12;
              puVar9 = local_c8;
              lVar16 = local_b0;
              puVar25 = local_90;
              puVar19 = local_88;
            }
          }
        }
        goto joined_r0x0001425b797d;
      case 3:
        if (uVar27 < 0x80) {
          if ((uVar27 == 0x5c) || (uVar6 = uVar27, uVar27 == 0x7e)) goto joined_r0x0001425b797d;
        }
        else if (uVar27 == 0xa5) {
          uVar6 = 0x5c;
        }
        else {
          if (uVar27 != 0x203e) goto joined_r0x0001425b797d;
          uVar6 = 0x7e;
        }
        uVar20 = 0;
        local_ec = uVar6;
        break;
      case 4:
        lVar16 = *(longlong *)(lVar23 + lVar8 * 8);
        if ((0xffff < (int)uVar27) && ((*(byte *)(lVar16 + 0xfd) & 1) == 0)) goto LAB_1425b77a7;
        uVar6 = *(uint *)(*(longlong *)(lVar16 + 0x58) +
                         (*(ushort *)(*(longlong *)(lVar16 + 0x58) + lVar24 * 2) + uVar22) * 4);
        uVar2 = *(ushort *)
                 (*(longlong *)(lVar16 + 0xe8) + (ulonglong)((uVar6 & 0xffff) << 4 | uVar26) * 2);
        uVar14 = (uint)uVar2;
        uVar13 = (uint)uVar2;
        if ((uVar6 & uVar15) == 0) {
          if (((char)local_f0 == '\0') && (0x18ff < local_bc)) {
            uVar20 = local_e0;
            if ((local_c0 < 0x20000) && (uVar2 != 0)) goto LAB_1425b7b01;
LAB_1425b77a7:
            if (*(longlong *)(lVar16 + 0x120) == 0) goto LAB_1425b7927;
            uVar6 = FUN_142636f00(*(longlong *)(lVar16 + 0x120),uVar27,&local_68,local_f0);
            iVar12 = 2;
            lVar23 = local_d8;
            uVar17 = local_80;
            if (uVar6 != 2) goto LAB_1425b7b0e;
          }
          else {
            uVar20 = local_e0;
            if (uVar2 == 0) goto LAB_1425b77a7;
LAB_1425b7b01:
            uVar6 = uVar2 < 0x100 | 0xfffffffe;
            local_68 = (undefined1 *)CONCAT44(local_68._4_4_,uVar13);
LAB_1425b7b0e:
            uVar20 = local_e0;
            if ((uVar6 != 0xfffffffe) || (iVar12 = -2, iVar28 != 0)) goto LAB_1425b7927;
          }
          uVar14 = (uint)local_68;
        }
        else {
          local_68 = (undefined1 *)CONCAT44(local_68._4_4_,uVar13);
          iVar12 = 2;
          uVar20 = local_e0;
          if (uVar13 < 0x100) {
LAB_1425b7927:
            puVar9 = local_c8;
            lVar16 = local_b0;
            puVar25 = local_90;
            puVar19 = local_88;
            if (((iVar28 == 0) && ((char)local_f0 != '\0')) && (iVar28 = 0, (uint)uVar17 < 0x3f)) {
              local_ec = (uint)*(ushort *)(&DAT_149c3daa0 + uVar17 * 2);
              iVar12 = -2;
              local_e4 = 0;
              goto joined_r0x0001425b797d;
            }
            goto joined_r0x0001425b797d;
          }
        }
        uVar20 = local_e0;
        puVar9 = local_c8;
        lVar16 = local_b0;
        puVar25 = local_90;
        puVar19 = local_88;
        if (uVar14 < 0xeffd) {
          iVar28 = (uint)((uVar14 & 0xff00) < 0x9f01) * 0x4000 + (uVar14 & 0xff00);
          uVar14 = uVar14 & 0xff;
          uVar6 = uVar14 < 0x7f | 0xffffffe0;
          uVar13 = iVar28 * 2 - 0x16100;
          if (0x9e < uVar14) {
            uVar6 = 0xffffff82;
            uVar13 = iVar28 * 2 - 0x16000;
          }
          uVar6 = uVar6 + uVar14 | uVar13;
          goto LAB_1425b7c27;
        }
        goto joined_r0x0001425b797d;
      default:
        lVar8 = *(longlong *)(lVar23 + lVar8 * 8);
        if ((0xffff < (int)uVar27) && ((*(byte *)(lVar8 + 0xfd) & 1) == 0)) goto LAB_1425b782d;
        uVar6 = *(uint *)(*(longlong *)(lVar8 + 0x58) +
                         (uVar22 + *(ushort *)(*(longlong *)(lVar8 + 0x58) + lVar24 * 2)) * 4);
        uVar2 = *(ushort *)
                 (*(longlong *)(lVar8 + 0xe8) + (ulonglong)((uVar6 & 0xffff) << 4 | uVar26) * 2);
        uVar13 = (uint)uVar2;
        if ((uVar6 & uVar15) == 0) {
          if (((char)local_f0 == '\0') && (0x18ff < local_bc)) {
            uVar20 = local_e0;
            if ((local_c0 < 0x20000) && (uVar2 != 0)) goto LAB_1425b7bc2;
LAB_1425b782d:
            if (*(longlong *)(lVar8 + 0x120) == 0) goto joined_r0x0001425b797d;
            uVar6 = FUN_142636f00(*(longlong *)(lVar8 + 0x120),uVar27,&local_68,local_f0);
            iVar12 = 2;
            lVar23 = local_d8;
            uVar17 = local_80;
            if (uVar6 == 2) goto LAB_1425b7be5;
          }
          else {
            uVar20 = local_e0;
            if (uVar2 == 0) goto LAB_1425b782d;
LAB_1425b7bc2:
            uVar6 = uVar2 < 0x100 | 0xfffffffe;
            local_68 = (undefined1 *)CONCAT44(local_68._4_4_,uVar13);
          }
          uVar20 = local_e0;
          puVar9 = local_c8;
          lVar16 = local_b0;
          puVar25 = local_90;
          puVar19 = local_88;
          if ((uVar6 != 0xfffffffe) || (iVar12 = -2, iVar28 != 0)) goto joined_r0x0001425b797d;
        }
        else {
          local_68 = (undefined1 *)CONCAT44(local_68._4_4_,uVar13);
          iVar12 = 2;
          uVar20 = local_e0;
          if (uVar13 < 0x100) goto joined_r0x0001425b797d;
        }
LAB_1425b7be5:
        uVar6 = (uint)local_68;
        if ((cVar5 == '\a') &&
           (((uVar20 = local_e0, puVar9 = local_c8, lVar16 = local_b0, puVar25 = local_90,
             puVar19 = local_88, 0x5d5d < ((uint)local_68 + 0x5e5f & 0xfffe) ||
             (0x5d < ((uint)local_68 + 0x5f & 0xfe))) ||
            (uVar6 = (uint)local_68 - 0x8080, (uint)local_68 - 0x8080 == 0))))
        goto joined_r0x0001425b797d;
LAB_1425b7c27:
        local_ec = uVar6;
        local_f0 = 0;
        local_e4 = 0;
        local_e8 = uVar18;
        uVar20 = local_e0;
        iVar28 = iVar12;
        puVar9 = local_c8;
        lVar16 = local_b0;
        puVar25 = local_90;
        puVar19 = local_88;
joined_r0x0001425b797d:
        uVar18 = local_e8;
        local_e8 = uVar18;
        local_c8 = puVar9;
        local_b0 = lVar16;
        local_90 = puVar25;
        local_88 = puVar19;
        if ((uVar20 <= uVar21) || (uVar21 = uVar21 + 1, 0 < iVar28)) goto LAB_1425b7c77;
        goto LAB_1425b76b0;
      case 8:
        if (0x3e < (uint)uVar17) goto joined_r0x0001425b797d;
        if (*(int *)(lVar23 + 0x6c) == 4) {
          uVar18 = 3;
          if ((*(byte *)(lVar23 + 0x62) & 0xfc) != 4) {
            uVar18 = (uint)*(byte *)(lVar23 + 0x62);
          }
          uVar20 = 0;
          local_ec = local_9c;
        }
        else {
          if (*(int *)(lVar23 + 0x6c) != 3) goto joined_r0x0001425b797d;
          *(char *)(lVar23 + 99) = cVar5;
          uVar20 = 1;
          local_ec = local_a0;
        }
      }
      iVar28 = 1;
      goto LAB_1425b7ea6;
    }
    if (0 < (int)uVar20) goto LAB_1425b75e3;
    iVar28 = 10;
    goto LAB_1425b7dc3;
  }
  goto LAB_1425b7dbe;
LAB_1425b7c77:
  uVar20 = (ulonglong)local_e4;
  if (iVar28 == 0) {
    iVar28 = 10;
    goto LAB_1425b7dc3;
  }
LAB_1425b7ea6:
  puVar19 = local_88;
  puVar25 = local_90;
  iVar12 = -iVar28;
  if (-iVar28 < 0) {
    iVar12 = iVar28;
  }
  cVar5 = *(char *)(lVar23 + 0x66);
  uVar21 = 0;
  uVar17 = uVar20 & 0xff;
  if ((cVar5 == '\x01') && ((char)uVar20 == '\0')) {
    local_50._0_1_ = 0xf;
    *(undefined1 *)(lVar23 + 0x66) = 0;
    uVar21 = 1;
    cVar5 = '\0';
  }
  cVar10 = (char)uVar18;
  if (cVar10 == *(char *)(lVar23 + 0x62 + uVar17)) {
    uVar20 = local_78 & 0xffffffff;
  }
  else {
    cVar5 = (&DAT_149c3db1e)[cVar10];
    local_e8 = uVar18;
    memcpy((void *)((longlong)&local_50 + uVar21),&DAT_149c3db30 + (longlong)cVar10 * 6,
           (longlong)cVar5);
    uVar21 = (ulonglong)(uint)((int)uVar21 + (int)cVar5);
    *(char *)(local_d8 + 0x62 + uVar17) = (char)local_e8;
    cVar5 = *(char *)(local_d8 + 0x66);
    uVar20 = 0;
    lVar23 = local_d8;
  }
  lVar16 = local_b0;
  piVar1 = local_b8;
  iVar7 = (int)uVar21;
  iVar28 = iVar7;
  if ((int)uVar17 != (int)cVar5) {
    lVar24 = (longlong)iVar7;
    iVar28 = iVar7 + 1;
    if ((int)uVar17 == 1) {
      *(undefined1 *)((longlong)&local_50 + lVar24) = 0xe;
      *(undefined1 *)(lVar23 + 0x66) = 1;
    }
    else {
      *(undefined1 *)((longlong)&local_50 + lVar24) = 0x1b;
      iVar28 = iVar7 + 2;
      *(undefined1 *)((longlong)&local_50 + lVar24 + 1) = 0x4e;
    }
  }
  iVar11 = 1;
  iVar7 = iVar28;
  if (iVar12 != 1) {
    iVar7 = iVar28 + 1;
    *(char *)((longlong)&local_50 + (longlong)iVar28) = (char)(local_ec >> 8);
    iVar11 = 2;
  }
  iVar28 = iVar28 + iVar11;
  *(char *)((longlong)&local_50 + (longlong)iVar7) = (char)local_ec;
  if ((uVar27 == 0xd) || (uVar27 == 10)) {
    *(undefined1 *)(lVar23 + 100) = 0;
    uVar20 = 0;
  }
  if (iVar28 == 2) {
    puVar9 = local_c8 + 2;
    if (puVar9 <= puVar25) {
      *local_c8 = (undefined1)local_50;
      local_c8[1] = local_50._1_1_;
      if (local_70 != (int *)0x0) {
        iVar28 = -1;
        if (0xffff < uVar27) {
          iVar28 = -2;
        }
        iVar28 = (int)((ulonglong)((longlong)puVar19 - *(longlong *)(local_d0 + 0x10)) >> 1) +
                 iVar28;
        piVar1 = local_70 + 1;
        *local_70 = iVar28;
        local_70 = local_70 + 2;
        *piVar1 = iVar28;
      }
      goto LAB_1425b7475;
    }
  }
  else if (iVar28 == 1) {
    *local_c8 = (undefined1)local_50;
    puVar9 = local_c8 + 1;
    if (local_70 != (int *)0x0) {
      *local_70 = (int)((ulonglong)((longlong)puVar19 - *(longlong *)(local_d0 + 0x10)) >> 1) + -1;
      local_70 = local_70 + 1;
    }
    goto LAB_1425b7475;
  }
  iVar12 = -1;
  if (0xffff < uVar27) {
    iVar12 = -2;
  }
  local_108 = (int)((ulonglong)((longlong)puVar19 - *(longlong *)(local_d0 + 0x10)) >> 1) + iVar12;
  local_68 = local_c8;
  local_100 = local_b8;
  local_110 = &local_70;
  local_118 = puVar25;
  FUN_142637760(local_b0,&local_50,iVar28,&local_68);
  lVar23 = local_d8;
  puVar9 = local_68;
  if (0 < *piVar1) goto LAB_1425b8209;
LAB_1425b7475:
  if (local_a8 <= puVar19) goto LAB_1425b7dd1;
  if (puVar25 <= puVar9) {
    *local_b8 = 0xf;
    goto LAB_1425b8209;
  }
  uVar2 = *puVar19;
  uVar27 = (uint)uVar2;
  puVar19 = puVar19 + 1;
  if ((uVar27 & 0xf800) != 0xd800) {
    if (uVar27 < 0x20) {
LAB_1425b7504:
      if ((0x800c000U >> (uVar27 & 0x1f) & 1) != 0) goto LAB_1425b7dbe;
    }
    goto LAB_1425b7513;
  }
  if ((uVar2 & 0x400) != 0) {
LAB_1425b7dbe:
    iVar28 = 0xc;
LAB_1425b7dc3:
    *local_b8 = iVar28;
    goto LAB_1425b7dcd;
  }
  if (local_a8 <= puVar19) goto LAB_1425b7dcd;
  goto LAB_1425b74c2;
}



// FUNCTION 1425b8240 FUN_1425b8240 body=664 status=ok
// SIG undefined FUN_1425b8240(void)

void FUN_1425b8240(longlong param_1,longlong *param_2,byte *param_3,int param_4,int *param_5)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  pbVar9 = (byte *)*param_2;
  if (param_3 <= pbVar9) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x40);
  iVar12 = *(int *)(lVar4 + 0x68);
  do {
    *param_2 = (longlong)(pbVar9 + 1);
    bVar2 = *pbVar9;
    cVar10 = *(char *)(param_1 + 0x40);
    *(char *)(param_1 + 0x40) = cVar10 + '\x01';
    *(byte *)(param_1 + 0x41 + (longlong)cVar10) = bVar2;
    if ((&DAT_149c3d9a0)[bVar2] == '\0') {
      iVar14 = 0;
LAB_1425b8322:
      *(int *)(lVar4 + 0x68) = iVar14;
      goto LAB_1425b8326;
    }
    iVar12 = iVar12 * 0x20 + (int)(char)(&DAT_149c3d9a0)[bVar2];
    iVar15 = 0;
    iVar13 = 0;
    iVar7 = 0x4a;
    while( true ) {
      iVar11 = iVar7 + iVar15 >> 1;
      iVar14 = 0;
      if (iVar11 == iVar13) goto LAB_1425b8322;
      lVar16 = (longlong)iVar11;
      iVar5 = iVar11;
      if ((*(int *)(&DAT_149c3d820 + lVar16 * 4) <= iVar12) &&
         (iVar5 = iVar7, iVar15 = iVar11, iVar12 <= *(int *)(&DAT_149c3d820 + lVar16 * 4))) break;
      iVar13 = iVar11;
      iVar7 = iVar5;
      if (iVar5 == iVar15) goto LAB_1425b8322;
    }
    iVar13 = (int)(char)(&DAT_149c3d950)[lVar16];
    if (iVar13 - 1U < 2) {
      *(undefined4 *)(lVar4 + 0x68) = 0;
      goto LAB_1425b8392;
    }
    iVar14 = iVar12;
    if (iVar13 == -1) goto LAB_1425b8322;
    pbVar9 = (byte *)*param_2;
  } while (pbVar9 < param_3);
  *(int *)(lVar4 + 0x68) = iVar12;
  if (iVar13 == -1) goto LAB_1425b8326;
  if (iVar13 == 0) {
    return;
  }
LAB_1425b8392:
  if (param_4 != 3) {
    if (param_4 == 2) {
      if (iVar11 == 0x30) goto LAB_1425b84a0;
    }
    else {
      if (param_4 != 1) goto LAB_1425b8326;
      cVar10 = (&DAT_149c3d780)[lVar16];
      uVar8 = (uint)cVar10;
      if (uVar8 - 1 < 2) {
        if ((*(ushort *)(&DAT_149c3d300 + (ulonglong)*(uint *)(lVar4 + 0x6c) * 2) >> (uVar8 & 0x1f)
            & 1) != 0) {
          *(char *)(lVar4 + 0x5e) = cVar10;
          goto LAB_1425b84a0;
        }
      }
      else if (uVar8 != 0xffffffff) {
        if (uVar8 == 0x10) goto switchD_1425b841e_caseD_10;
        if ((*(ushort *)(&DAT_149c3d300 + (ulonglong)*(uint *)(lVar4 + 0x6c) * 2) >> (uVar8 & 0x1f)
            & 1) != 0) {
          *(char *)(lVar4 + 0x5c) = cVar10;
          goto LAB_1425b84a0;
        }
      }
    }
    goto switchD_1425b841e_caseD_ffffffff;
  }
  uVar3 = (&DAT_149c3d7d0)[lVar16];
  switch(uVar3) {
  default:
    if (*(int *)(lVar4 + 0x6c) != 0) {
      *(undefined1 *)(lVar4 + 0x5f) = uVar3;
      break;
    }
    goto switchD_1425b841e_caseD_ffffffff;
  case 1:
  case 0x21:
switchD_1425b841e_caseD_1:
    *(undefined1 *)(lVar4 + 0x5d) = uVar3;
    break;
  case 2:
    if (*(int *)(lVar4 + 0x6c) != 0) goto switchD_1425b841e_caseD_1;
switchD_1425b841e_caseD_ffffffff:
    *param_5 = 0x13;
    goto LAB_1425b84c0;
  case 0x10:
switchD_1425b841e_caseD_10:
    if (*(char *)(lVar4 + 0x5e) == '\0') {
LAB_1425b8326:
      *param_5 = 0x12;
      goto LAB_1425b8334;
    }
    if (*(char *)(lVar4 + 0x60) < '\x02') {
      *(char *)(lVar4 + 0x61) = *(char *)(lVar4 + 0x60);
    }
    *(undefined1 *)(lVar4 + 0x60) = 2;
    break;
  case 0x11:
    if (*(char *)(lVar4 + 0x5f) == '\0') goto LAB_1425b8326;
    if (*(char *)(lVar4 + 0x60) < '\x02') {
      *(char *)(lVar4 + 0x61) = *(char *)(lVar4 + 0x60);
    }
    *(undefined1 *)(lVar4 + 0x60) = 3;
    break;
  case 0x22:
    *(undefined1 *)(lVar4 + 0x5e) = uVar3;
    break;
  case 0xffffffff:
    goto switchD_1425b841e_caseD_ffffffff;
  }
LAB_1425b84a0:
  iVar12 = *param_5;
  if (iVar12 < 1) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    return;
  }
  if (iVar12 == 0x12) {
LAB_1425b8334:
    cVar10 = *(char *)(param_1 + 0x40);
    if (cVar10 < '\x02') {
      return;
    }
    bVar2 = cVar10 - 1;
    cVar10 = cVar10 - cVar1;
    uVar6 = (ulonglong)bVar2;
    if ((int)cVar10 < (int)(uint)bVar2) {
      *(byte *)(param_1 + 0x11a) = cVar10 - bVar2;
      memcpy((void *)(param_1 + 0xfa),(void *)(param_1 + 0x42),-(longlong)(char)(cVar10 - bVar2));
      uVar6 = (ulonglong)cVar10;
    }
    *param_2 = *param_2 - uVar6;
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  if (iVar12 != 0x13) {
    return;
  }
LAB_1425b84c0:
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return;
}



// FUNCTION 1425b84e0 FUN_1425b84e0 body=1236 status=ok
// SIG undefined FUN_1425b84e0(void)

void FUN_1425b84e0(uint *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined2 *puVar13;
  byte *pbVar14;
  uint uVar15;
  undefined1 auStack_c8 [32];
  int *local_a8;
  undefined1 local_91;
  undefined8 local_90;
  byte *local_88;
  undefined2 local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pbVar8 = *(byte **)(param_1 + 4);
  lVar4 = *(longlong *)(param_1 + 2);
  pbVar14 = *(byte **)(param_1 + 6);
  lVar10 = *(longlong *)(lVar4 + 0x10);
  local_88 = pbVar8;
  if (*(int *)(lVar10 + 0x6c) != 1) {
    puVar13 = *(undefined2 **)(param_1 + 8);
    local_90 = *(undefined8 *)(*(longlong *)(lVar10 + 0x50) + 0x30);
    local_91 = *(undefined1 *)(lVar4 + 0x3f);
    if (*(int *)(lVar10 + 0x68) != 0) goto LAB_1425b87ff;
    if (*(char *)(lVar4 + 0x40) != '\x01') goto LAB_1425b8760;
    if (pbVar14 <= pbVar8) goto LAB_1425b8760;
    if (*(undefined2 **)(param_1 + 10) <= puVar13) goto LAB_1425b8760;
    uVar12 = (uint)*(byte *)(lVar4 + 0x41);
    *(undefined1 *)(lVar4 + 0x40) = 0;
LAB_1425b888a:
    bVar1 = *pbVar8;
    if ((((short)uVar12 + 0xdfU & 0xfe) < 0x5e) && ((byte)(bVar1 - 0x21) < 0x5e)) {
      local_88 = pbVar8 + 1;
      local_80 = CONCAT11(bVar1 + 0x80,(char)uVar12 + -0x80);
      iVar2 = FUN_142584b30(local_90,&local_80,2,local_91);
      uVar12 = uVar12 << 8 | (uint)bVar1;
    }
    else {
      iVar2 = 0xffff;
      local_88 = pbVar8;
      if (((byte)(bVar1 - 0x21) < 0x5e) ||
         ((bVar1 < 0x20 && ((0x800c000U >> (bVar1 & 0x1f) & 1) != 0)))) goto LAB_1425b8943;
      local_88 = pbVar8 + 1;
      uVar12 = uVar12 << 8 | (uint)bVar1;
    }
    pbVar8 = pbVar8 + 1;
LAB_1425b8943:
    if (iVar2 < 0xfffe) {
      if (*(longlong *)(param_1 + 0xc) != 0) {
        iVar9 = -1;
        if (0xff < uVar12) {
          iVar9 = -2;
        }
        *(uint *)(*(longlong *)(param_1 + 0xc) +
                 ((longlong)puVar13 - *(longlong *)(param_1 + 8)) * 2) =
             ((int)pbVar8 + iVar9) - param_1[4];
      }
      *puVar13 = (short)iVar2;
      puVar13 = puVar13 + 1;
LAB_1425b8760:
      pbVar8 = local_88;
      if (local_88 < pbVar14) {
        lVar4 = (longlong)pbVar14 - (longlong)local_88;
        pbVar7 = local_88;
        do {
          if (*(undefined2 **)(param_1 + 10) <= puVar13) {
            *param_2 = 0xf;
            pbVar8 = pbVar7;
            break;
          }
          bVar1 = *pbVar7;
          uVar12 = (uint)bVar1;
          if (bVar1 == 0xe) {
            *(undefined1 *)(lVar10 + 0x60) = 1;
            *(undefined1 *)(lVar10 + 0x70) = 1;
          }
          else {
            if (bVar1 != 0xf) goto LAB_1425b87f4;
            *(undefined1 *)(lVar10 + 0x60) = 0;
            if (*(char *)(lVar10 + 0x70) != '\0') {
              *(undefined1 *)(lVar10 + 0x70) = 0;
              *param_2 = 0x12;
              *(undefined4 *)(*(longlong *)(param_1 + 2) + 0x11c) = 2;
              *(undefined1 *)(*(longlong *)(param_1 + 2) + 0x41) = 0xf;
              *(undefined1 *)(*(longlong *)(param_1 + 2) + 0x40) = 1;
              *(undefined2 **)(param_1 + 8) = puVar13;
              *(byte **)(param_1 + 4) = pbVar7 + 1;
              goto LAB_1425b8842;
            }
          }
          pbVar7 = pbVar7 + 1;
          lVar4 = lVar4 + -1;
          pbVar8 = pbVar14;
          if (lVar4 == 0) break;
        } while( true );
      }
      goto LAB_1425b883a;
    }
    lVar4 = *(longlong *)(param_1 + 2);
    uVar5 = 1;
    uVar15 = uVar12;
    if (0xff < uVar12) {
      uVar15 = uVar12 >> 8;
      *(char *)(lVar4 + 0x42) = (char)uVar12;
      uVar5 = 2;
    }
    *(char *)(lVar4 + 0x41) = (char)uVar15;
    *(undefined1 *)(lVar4 + 0x40) = uVar5;
    *param_2 = (uint)(iVar2 != 0xfffe) * 2 + 10;
    goto LAB_1425b883a;
  }
  uVar12 = 0x38;
  if ((ushort)*param_1 < 0x38) {
    uVar12 = *param_1;
  }
  memcpy(&local_80,param_1,(ulonglong)(uVar12 & 0xffff));
  local_80 = (undefined2)uVar12;
  local_78 = *(longlong *)(lVar10 + 0x50);
  if (*(int *)(lVar10 + 0x68) != 0) goto LAB_1425b8742;
  while (lVar4 = local_78, iVar2 = *param_2, iVar2 < 1) {
    uVar6 = *(ulonglong *)(param_1 + 4);
    uVar11 = *(ulonglong *)(param_1 + 6);
    if (uVar11 <= uVar6) break;
    lVar10 = 0;
    do {
      if (*(char *)(uVar6 + lVar10) == '\x1b') {
        uVar11 = lVar10 + uVar6;
        break;
      }
      lVar10 = lVar10 + 1;
    } while (uVar11 - uVar6 != lVar10);
    local_70 = uVar6;
    local_68 = uVar11;
    if (uVar6 != uVar11) {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 2) + 0x40);
      if ('\0' < (char)bVar1) {
        memcpy((void *)(local_78 + 0x41),(void *)(*(longlong *)(param_1 + 2) + 0x41),
               (ulonglong)bVar1);
        bVar1 = *(byte *)(*(longlong *)(param_1 + 2) + 0x40);
      }
      *(byte *)(lVar4 + 0x40) = bVar1;
      FUN_142583420(&local_80,param_2);
      lVar4 = local_78;
      piVar3 = *(int **)(param_1 + 0xc);
      if (((piVar3 != (int *)0x0) && (pbVar14 = *(byte **)(param_1 + 4), pbVar8 != pbVar14)) &&
         (uVar6 = *(ulonglong *)(param_1 + 8), uVar6 < local_60)) {
        do {
          if (-1 < *piVar3) {
            *piVar3 = *piVar3 + ((int)pbVar14 - (int)pbVar8);
          }
          piVar3 = piVar3 + 1;
          uVar6 = uVar6 + 2;
        } while (uVar6 < local_60);
      }
      *(ulonglong *)(param_1 + 4) = local_70;
      *(ulonglong *)(param_1 + 8) = local_60;
      *(undefined8 *)(param_1 + 0xc) = local_50;
      bVar1 = *(byte *)(local_78 + 0x40);
      if ('\0' < (char)bVar1) {
        memcpy((void *)(*(longlong *)(param_1 + 2) + 0x41),(void *)(local_78 + 0x41),
               (ulonglong)bVar1);
        bVar1 = *(byte *)(lVar4 + 0x40);
      }
      *(byte *)(*(longlong *)(param_1 + 2) + 0x40) = bVar1;
      iVar2 = *param_2;
      if (iVar2 == 0xf) {
        bVar1 = *(byte *)(lVar4 + 0x5d);
        if ('\0' < (char)bVar1) {
          memcpy((void *)(*(longlong *)(param_1 + 2) + 0x90),(void *)(lVar4 + 0x90),(ulonglong)bVar1
                );
          bVar1 = *(byte *)(lVar4 + 0x5d);
        }
        *(byte *)(*(longlong *)(param_1 + 2) + 0x5d) = bVar1;
        *(undefined1 *)(lVar4 + 0x5d) = 0;
        iVar2 = *param_2;
      }
    }
    if ((0 < iVar2) || (pbVar14 = *(byte **)(param_1 + 6), *(byte **)(param_1 + 4) == pbVar14))
    break;
    lVar4 = *(longlong *)(param_1 + 2);
LAB_1425b8742:
    local_a8 = param_2;
    FUN_1425b8240(lVar4,param_1 + 4,pbVar14,2);
  }
LAB_1425b8842:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
LAB_1425b87f4:
  local_88 = pbVar7;
  if (bVar1 != 0x1b) goto LAB_1425b8867;
LAB_1425b87ff:
  *(undefined1 *)(lVar10 + 0x70) = 0;
  local_a8 = param_2;
  FUN_1425b8240(*(undefined8 *)(param_1 + 2),&local_88,pbVar14,2);
  if (0 < *param_2) {
    *(undefined2 **)(param_1 + 8) = puVar13;
    *(byte **)(param_1 + 4) = local_88;
    goto LAB_1425b8842;
  }
  goto LAB_1425b8760;
LAB_1425b8867:
  pbVar8 = pbVar7 + 1;
  *(undefined1 *)(lVar10 + 0x70) = 0;
  local_88 = pbVar8;
  if (*(char *)(lVar10 + 0x60) != '\x01') {
    iVar2 = 0xffff;
    if (-1 < (char)bVar1) {
      iVar2 = FUN_142584b30(local_90,pbVar7,1,local_91);
    }
    goto LAB_1425b8943;
  }
  if (pbVar14 <= pbVar8) goto LAB_1425b89d0;
  goto LAB_1425b888a;
LAB_1425b89d0:
  *(byte *)(*(longlong *)(param_1 + 2) + 0x41) = bVar1;
  *(undefined1 *)(*(longlong *)(param_1 + 2) + 0x40) = 1;
LAB_1425b883a:
  *(undefined2 **)(param_1 + 8) = puVar13;
  *(byte **)(param_1 + 4) = pbVar8;
  goto LAB_1425b8842;
}



// FUNCTION 1425b89f0 FUN_1425b89f0 body=1393 status=ok
// SIG undefined FUN_1425b89f0(void)

void FUN_1425b89f0(longlong param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  byte *pbVar5;
  longlong lVar6;
  ushort *puVar7;
  char cVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  ushort *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  ushort *puVar16;
  char cVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  byte *local_98;
  int **local_90;
  uint local_88;
  int *local_80;
  char local_71;
  longlong local_70;
  byte *local_68;
  uint local_5c;
  int *local_58;
  byte *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar13 = *(ushort **)(param_1 + 0x10);
  puVar4 = *(ushort **)(param_1 + 0x18);
  pbVar15 = *(byte **)(param_1 + 0x20);
  pbVar5 = *(byte **)(param_1 + 0x28);
  local_58 = *(int **)(param_1 + 0x30);
  local_5c = 0;
  lVar6 = *(longlong *)(param_1 + 8);
  lVar12 = *(longlong *)(lVar6 + 0x10);
  if (*(int *)(lVar12 + 0x6c) == 1) {
    *(longlong *)(param_1 + 8) = *(longlong *)(lVar12 + 0x50);
    *(undefined4 *)(*(longlong *)(lVar12 + 0x50) + 0x54) = *(undefined4 *)(lVar6 + 0x54);
    FUN_142584cd0(param_1,param_2);
    *(undefined4 *)(lVar6 + 0x54) = *(undefined4 *)(*(longlong *)(lVar12 + 0x50) + 0x54);
    if (*param_2 == 0xf) {
      bVar10 = *(byte *)(*(longlong *)(lVar12 + 0x50) + 0x5b);
      if ('\0' < (char)bVar10) {
        memcpy((void *)(lVar6 + 0x68),(void *)(*(longlong *)(lVar12 + 0x50) + 0x68),
               (ulonglong)bVar10);
        bVar10 = *(byte *)(*(longlong *)(lVar12 + 0x50) + 0x5b);
      }
      *(byte *)(lVar6 + 0x5b) = bVar10;
      *(undefined1 *)(*(longlong *)(lVar12 + 0x50) + 0x5b) = 0;
    }
    *(longlong *)(param_1 + 8) = lVar6;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + 0x30);
    cVar17 = *(char *)(lVar6 + 0x50);
    uVar18 = *(uint *)(lVar6 + 0x54);
    if ((uVar18 == 0) || (pbVar5 <= pbVar15)) {
      puVar7 = puVar13;
      puVar16 = puVar13;
      cVar8 = *(char *)(lVar6 + 0x3f);
      if (puVar13 < puVar4) {
        do {
          local_71 = cVar8;
          puVar13 = puVar7;
          puVar16 = puVar16 + 1;
          local_5c = 0xffff;
          if (*(byte **)(param_1 + 0x28) <= pbVar15) {
            *param_2 = 0xf;
            goto LAB_1425b8e60;
          }
          uVar1 = *puVar13;
          uVar18 = (uint)uVar1;
          if ((uVar18 < 0x20) && ((0x800c000U >> (uVar18 & 0x1f) & 1) != 0)) {
            *param_2 = 0xc;
            *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar18;
            puVar13 = puVar13 + 1;
            goto LAB_1425b8e60;
          }
          uVar3 = *(uint *)(*(longlong *)(lVar12 + 0x58) +
                           ((ulonglong)(uVar1 >> 4 & 0x3f) +
                           (ulonglong)
                           *(ushort *)(*(longlong *)(lVar12 + 0x58) + (ulonglong)(uVar1 >> 10) * 2))
                           * 4);
          uVar2 = *(ushort *)
                   (*(longlong *)(lVar12 + 0xe8) +
                   (ulonglong)(uVar18 & 0xf | (uVar3 & 0xffff) << 4) * 2);
          uVar11 = (uint)uVar2;
          iVar9 = 2 - (uint)(uVar11 < 0x100);
          pbVar14 = pbVar15;
          if (((uVar3 >> ((byte)((byte)uVar1 | 0x10) & 0x1f) & 1) == 0) &&
             ((local_71 == '\0' && uVar18 - 0xf900 < 0xffffe700 || (uVar2 == 0)))) {
            if (*(longlong *)(lVar12 + 0x120) != 0) {
              local_70 = lVar12;
              local_68 = pbVar15;
              iVar9 = FUN_142636f00(*(longlong *)(lVar12 + 0x120),uVar18,&local_5c,local_71);
              lVar12 = local_70;
              pbVar14 = local_68;
              uVar11 = local_5c;
              if (iVar9 < 0) {
                iVar9 = -iVar9;
              }
              goto LAB_1425b8c11;
            }
LAB_1425b8e22:
            local_5c = 0xffff;
LAB_1425b8e2a:
            puVar13 = puVar13 + 1;
            iVar9 = 10;
            if (((uVar18 & 0xf800) != 0xd800) || (iVar9 = 0xc, (uVar1 & 0x400) != 0))
            goto LAB_1425b8e56;
            goto LAB_1425b8ace;
          }
LAB_1425b8c11:
          local_5c = uVar11;
          pbVar15 = pbVar14;
          if ((((2 < iVar9) || (iVar9 == 0)) || ((iVar9 == 1 && (0x7f < local_5c)))) ||
             ((iVar9 == 2 &&
              ((0x5d5d < (local_5c + 0x5e5f & 0xfffe) || (0x5d < (local_5c + 0x5f & 0xfe)))))))
          goto LAB_1425b8e22;
          if (local_5c == 0xffff) goto LAB_1425b8e2a;
          bVar19 = 0xff < local_5c;
          if ((int)cVar17 != (uint)bVar19) {
            *pbVar14 = 0xff < local_5c ^ 0xf;
            pbVar14 = pbVar14 + 1;
            if (local_58 != (int *)0x0) {
              *local_58 = (int)((ulonglong)((longlong)puVar16 - *(longlong *)(param_1 + 0x10)) >> 1)
                          + -1;
              local_58 = local_58 + 1;
            }
          }
          if (local_5c < 0x100) {
            if (pbVar14 < pbVar5) {
              *pbVar14 = (byte)local_5c;
              pbVar15 = pbVar14 + 1;
LAB_1425b8d2f:
              if (local_58 != (int *)0x0) {
                *local_58 = (int)((ulonglong)((longlong)puVar16 - *(longlong *)(param_1 + 0x10)) >>
                                 1) + -1;
                local_58 = local_58 + 1;
              }
            }
            else {
              lVar6 = *(longlong *)(param_1 + 8);
              cVar17 = *(char *)(lVar6 + 0x5b);
              *(char *)(lVar6 + 0x5b) = cVar17 + '\x01';
              *(byte *)(lVar6 + 0x68 + (longlong)cVar17) = (byte)local_5c;
LAB_1425b8b40:
              *param_2 = 0xf;
              pbVar15 = pbVar14;
            }
          }
          else {
            bVar10 = (char)(local_5c >> 8) + 0x80;
            if (pbVar5 <= pbVar14) {
              lVar6 = *(longlong *)(param_1 + 8);
              cVar17 = *(char *)(lVar6 + 0x5b);
              *(char *)(lVar6 + 0x5b) = cVar17 + '\x01';
              *(byte *)(lVar6 + 0x68 + (longlong)cVar17) = bVar10;
              lVar6 = *(longlong *)(param_1 + 8);
              cVar17 = *(char *)(lVar6 + 0x5b);
              *(char *)(lVar6 + 0x5b) = cVar17 + '\x01';
              *(byte *)(lVar6 + 0x68 + (longlong)cVar17) = (byte)local_5c + 0x80;
              goto LAB_1425b8b40;
            }
            *pbVar14 = bVar10;
            if (local_58 != (int *)0x0) {
              *local_58 = (int)((ulonglong)((longlong)puVar16 - *(longlong *)(param_1 + 0x10)) >> 1)
                          + -1;
              local_58 = local_58 + 1;
            }
            pbVar15 = pbVar14 + 1;
            if (pbVar15 < pbVar5) {
              pbVar14[1] = (byte)local_5c + 0x80;
              pbVar15 = pbVar14 + 2;
              goto LAB_1425b8d2f;
            }
            lVar6 = *(longlong *)(param_1 + 8);
            cVar17 = *(char *)(lVar6 + 0x5b);
            *(char *)(lVar6 + 0x5b) = cVar17 + '\x01';
            *(byte *)(lVar6 + 0x68 + (longlong)cVar17) = (byte)local_5c + 0x80;
            *param_2 = 0xf;
          }
          puVar7 = puVar13 + 1;
          cVar17 = bVar19;
          cVar8 = local_71;
        } while (puVar13 + 1 < puVar4);
        puVar13 = puVar13 + 1;
      }
    }
    else {
LAB_1425b8ace:
      iVar9 = 0;
      if (puVar13 < puVar4) {
        bVar19 = (*puVar13 & 0xfc00) == 0xdc00;
        iVar9 = !bVar19 + 10 + (uint)!bVar19;
        uVar3 = uVar18 * 0x400 + (uint)*puVar13 + 0xfca02400;
        if (!bVar19) {
          uVar3 = uVar18;
        }
        uVar18 = uVar3;
        puVar13 = puVar13 + bVar19;
      }
LAB_1425b8e56:
      *param_2 = iVar9;
      *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar18;
    }
LAB_1425b8e60:
    if ((((*param_2 < 1) && (cVar17 != '\0')) && (*(char *)(param_1 + 2) != '\0')) &&
       ((puVar4 <= puVar13 && (*(int *)(*(longlong *)(param_1 + 8) + 0x54) == 0)))) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      iVar9 = (int)((ulonglong)((longlong)puVar13 - lVar6) >> 1);
      if (iVar9 < 1) {
        local_88 = 0xffffffff;
      }
      else {
        local_88 = iVar9 - 1;
        if (((*(ushort *)(lVar6 + (ulonglong)local_88 * 2) & 0xfc00) == 0xdc00) &&
           ((local_88 == 0 || ((*(ushort *)(lVar6 + (ulonglong)(iVar9 - 2) * 2) & 0xfc00) == 0xd800)
            ))) {
          local_88 = iVar9 - 2;
        }
      }
      local_90 = &local_58;
      local_98 = pbVar5;
      local_80 = param_2;
      local_50 = pbVar15;
      FUN_142637760(*(longlong *)(param_1 + 8),&DAT_149c3dc60,1,&local_50);
      cVar17 = '\0';
      pbVar15 = local_50;
    }
    *(ushort **)(param_1 + 0x10) = puVar13;
    *(byte **)(param_1 + 0x20) = pbVar15;
    *(int *)(*(longlong *)(param_1 + 8) + 0x50) = (int)cVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1425b8f90 FUN_1425b8f90 body=1108 status=ok
// SIG undefined FUN_1425b8f90(void)

void FUN_1425b8f90(longlong param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  longlong lVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  ushort *puVar16;
  ushort *puVar17;
  undefined1 auStack_88 [32];
  int *local_68;
  undefined4 *local_60;
  byte *local_58;
  byte local_4b;
  byte local_4a;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pbVar12 = *(byte **)(param_1 + 0x10);
  puVar16 = *(ushort **)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 8);
  pbVar3 = *(byte **)(param_1 + 0x18);
  lVar4 = *(longlong *)(lVar7 + 0x10);
  local_60 = (undefined4 *)(lVar4 + 0x5c);
  if (*(int *)(lVar4 + 0x68) == 0) {
    local_58 = pbVar12;
    if (*(char *)(lVar7 + 0x40) != '\x01') goto LAB_1425b900d;
    if (pbVar3 <= pbVar12) goto LAB_1425b900d;
    if (*(ushort **)(param_1 + 0x28) <= puVar16) goto LAB_1425b900d;
    uVar13 = (ulonglong)*(byte *)(lVar7 + 0x41);
    *(undefined1 *)(lVar7 + 0x40) = 0;
    goto LAB_1425b9106;
  }
LAB_1425b92c0:
  cVar2 = *(char *)(lVar7 + 0x40);
  local_68 = param_2;
  local_58 = pbVar12;
  FUN_1425b8240(lVar7,&local_58,pbVar3,3);
  iVar10 = *param_2;
  if (*(int *)(lVar4 + 0x68) == 0) {
    if (0 < iVar10) {
LAB_1425b93df:
      *(ushort **)(param_1 + 0x20) = puVar16;
      *(byte **)(param_1 + 0x10) = local_58;
      *(undefined1 *)(lVar4 + 0x70) = 0;
LAB_1425b90c5:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    if (*(char *)(lVar4 + 0x70) != '\0') {
      *param_2 = 0x12;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x11c) = 2;
      *(char *)(*(longlong *)(param_1 + 8) + 0x40) = cVar2 + ((char)local_58 - (char)pbVar12);
      iVar10 = *param_2;
    }
  }
  if (iVar10 < 1) {
LAB_1425b900d:
    pbVar15 = local_58;
    if (local_58 < pbVar3) {
      lVar7 = (longlong)pbVar3 - (longlong)local_58;
      pbVar12 = local_58;
      do {
        if (*(ushort **)(param_1 + 0x28) <= puVar16) {
          *param_2 = 0xf;
          pbVar15 = pbVar12;
          break;
        }
        bVar1 = *pbVar12;
        uVar13 = (ulonglong)bVar1;
        puVar17 = puVar16;
        switch(bVar1) {
        case 10:
        case 0xd:
          goto switchD_1425b9069_caseD_a;
        default:
          pbVar15 = pbVar12 + 1;
          *(undefined1 *)(lVar4 + 0x70) = 0;
          local_58 = pbVar15;
          if (*(char *)(lVar4 + 0x60) == '\0') {
            uVar6 = 0xffff;
            if (-1 < (char)bVar1) goto LAB_1425b90ad;
            goto LAB_1425b91bd;
          }
          pbVar12 = pbVar15;
          if (pbVar15 < pbVar3) goto LAB_1425b9106;
          *(byte *)(*(longlong *)(param_1 + 8) + 0x41) = bVar1;
          *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
          goto LAB_1425b90bd;
        case 0xe:
          if (*(char *)(lVar4 + 0x5d) == '\0') {
            pbVar15 = pbVar12 + 1;
            *(undefined1 *)(lVar4 + 0x70) = 0;
            uVar6 = 0xffff;
            uVar13 = 0xe;
            local_58 = pbVar15;
            goto LAB_1425b91bd;
          }
          *(undefined1 *)(lVar4 + 0x60) = 1;
          *(undefined1 *)(lVar4 + 0x70) = 1;
          break;
        case 0xf:
          *(undefined1 *)(lVar4 + 0x60) = 0;
          if (*(char *)(lVar4 + 0x70) != '\0') {
            *(undefined1 *)(lVar4 + 0x70) = 0;
            *param_2 = 0x12;
            *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x11c) = 2;
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x41) = 0xf;
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
            *(ushort **)(param_1 + 0x20) = puVar16;
            *(byte **)(param_1 + 0x10) = pbVar12 + 1;
            goto LAB_1425b90c5;
          }
          break;
        case 0x1b:
          lVar7 = *(longlong *)(param_1 + 8);
          goto LAB_1425b92c0;
        }
        pbVar12 = pbVar12 + 1;
        lVar7 = lVar7 + -1;
        pbVar15 = pbVar3;
        if (lVar7 == 0) break;
      } while( true );
    }
    goto LAB_1425b90bd;
  }
  goto LAB_1425b93df;
LAB_1425b9106:
  bVar1 = *pbVar12;
  iVar10 = (int)uVar13;
  uVar11 = (uint)bVar1;
  if (((iVar10 + 0xdfU & 0xfe) < 0x5e) && ((byte)(bVar1 - 0x21) < 0x5e)) {
    cVar2 = *(char *)(lVar4 + 0x5c + (longlong)*(char *)(lVar4 + 0x60));
    if ((longlong)cVar2 < 0x20) {
      uVar8 = *(undefined8 *)(lVar4 + (longlong)cVar2 * 8);
      uVar14 = 2;
      local_4b = (byte)uVar13;
      local_4a = bVar1;
    }
    else {
      uVar8 = *(undefined8 *)(lVar4 + 0x18);
      uVar14 = 3;
      local_4b = cVar2 + 0x60;
      local_4a = (byte)uVar13;
      local_49 = bVar1;
    }
    local_58 = pbVar12 + 1;
    uVar6 = FUN_142584b30(uVar8,&local_4b,uVar14,0);
    uVar13 = (ulonglong)(iVar10 << 8 | uVar11);
    pbVar15 = pbVar12 + 1;
  }
  else {
    uVar6 = 0xffff;
    pbVar15 = pbVar12;
    local_58 = pbVar12;
    if ((0x5d < (byte)(bVar1 - 0x21)) &&
       ((0x1f < bVar1 || ((0x800c000U >> (uVar11 & 0x1f) & 1) == 0)))) {
      pbVar15 = pbVar12 + 1;
      uVar13 = (ulonglong)(iVar10 << 8 | uVar11 | 0x10000);
      local_58 = pbVar15;
    }
  }
  puVar17 = puVar16;
  if ('\x01' < *(char *)(lVar4 + 0x60)) {
    *(undefined1 *)(lVar4 + 0x60) = *(undefined1 *)(lVar4 + 0x61);
  }
  goto LAB_1425b91bd;
switchD_1425b9069_caseD_a:
  *(undefined2 *)(local_60 + 1) = 0;
  *local_60 = 0;
  *(undefined1 *)(lVar4 + 0x70) = 0;
LAB_1425b90ad:
  pbVar15 = pbVar12 + 1;
  uVar6 = (uint)bVar1;
  local_58 = pbVar15;
LAB_1425b91bd:
  uVar11 = (uint)uVar13;
  if (uVar6 < 0xfffe) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      iVar10 = -1;
      if (0xff < uVar11) {
        iVar10 = -2;
      }
      *(int *)(*(longlong *)(param_1 + 0x30) +
              ((longlong)puVar17 - *(longlong *)(param_1 + 0x20)) * 2) =
           ((int)pbVar15 + iVar10) - *(int *)(param_1 + 0x10);
    }
    *puVar17 = (ushort)uVar6;
    puVar16 = puVar17 + 1;
  }
  else {
    if (uVar6 < 0x10000) {
      lVar4 = *(longlong *)(param_1 + 8);
      uVar9 = 1;
      if (0xff < uVar11) {
        *(char *)(lVar4 + 0x42) = (char)uVar13;
        uVar13 = uVar13 >> 8;
        uVar9 = 2;
      }
      *(char *)(lVar4 + 0x41) = (char)uVar13;
      *(undefined1 *)(lVar4 + 0x40) = uVar9;
      *param_2 = (uint)(uVar6 != 0xfffe) * 2 + 10;
      puVar16 = puVar17;
LAB_1425b90bd:
      *(ushort **)(param_1 + 0x20) = puVar16;
      *(byte **)(param_1 + 0x10) = pbVar15;
      goto LAB_1425b90c5;
    }
    *puVar17 = (short)(uVar6 + 0x3ff0000 >> 10) + 0xd800;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      iVar10 = -1;
      if (0xff < uVar11) {
        iVar10 = -2;
      }
      *(int *)(*(longlong *)(param_1 + 0x30) +
              ((longlong)puVar17 - *(longlong *)(param_1 + 0x20)) * 2) =
           (iVar10 + (int)local_58) - *(int *)(param_1 + 0x10);
    }
    puVar16 = puVar17 + 1;
    uVar5 = (ushort)uVar6 & 0x3ff | 0xdc00;
    if (puVar16 < *(ushort **)(param_1 + 0x28)) {
      *puVar16 = uVar5;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        iVar10 = -1;
        if (0xff < uVar11) {
          iVar10 = -2;
        }
        *(int *)(*(longlong *)(param_1 + 0x30) +
                ((longlong)puVar16 - *(longlong *)(param_1 + 0x20)) * 2) =
             (iVar10 + (int)local_58) - *(int *)(param_1 + 0x10);
      }
      puVar16 = puVar17 + 2;
    }
    else {
      lVar7 = *(longlong *)(param_1 + 8);
      cVar2 = *(char *)(lVar7 + 0x5d);
      *(char *)(lVar7 + 0x5d) = cVar2 + '\x01';
      *(ushort *)(lVar7 + 0x90 + (longlong)cVar2 * 2) = uVar5;
    }
  }
  goto LAB_1425b900d;
}



// FUNCTION 1425b9410 FUN_1425b9410 body=2350 status=ok
// SIG undefined FUN_1425b9410(void)

void FUN_1425b9410(longlong param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  char cVar13;
  byte bVar14;
  ushort *puVar15;
  undefined4 *puVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  longlong lVar22;
  undefined1 *puVar23;
  ushort *puVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  int **local_f0;
  uint local_e8;
  int *local_e0;
  uint local_d8;
  uint local_d4;
  ushort *local_d0;
  longlong local_c8;
  int *local_c0;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  longlong local_98;
  ushort *local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined4 *local_70;
  int *local_68;
  undefined1 *local_60;
  byte abStack_54 [2];
  undefined2 local_52;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar27 = *(longlong *)(param_1 + 8);
  puVar15 = *(ushort **)(param_1 + 0x10);
  puVar21 = *(undefined1 **)(param_1 + 0x20);
  puVar23 = *(undefined1 **)(param_1 + 0x28);
  puVar24 = *(ushort **)(param_1 + 0x18);
  local_68 = *(int **)(param_1 + 0x30);
  lVar22 = *(longlong *)(lVar27 + 0x10);
  puVar16 = (undefined4 *)(lVar22 + 0x62);
  uVar25 = *(uint *)(lVar27 + 0x54);
  uVar18 = 0;
  local_d0 = puVar24;
  local_c8 = lVar27;
  local_c0 = param_2;
  local_a0 = puVar23;
  local_98 = param_1;
  local_88 = lVar22;
  local_70 = puVar16;
  if (uVar25 == 0) {
    local_d8 = 0;
    goto LAB_1425b94be;
  }
  local_d8 = 0;
  uVar18 = 0;
  if (puVar23 <= puVar21) goto LAB_1425b94be;
  if (puVar15 < puVar24) {
    do {
      uVar3 = *puVar15;
      if ((uVar3 & 0xfc00) != 0xdc00) {
LAB_1425b965d:
        iVar20 = 0xc;
LAB_1425b9c5c:
        *param_2 = iVar20;
        break;
      }
      puVar15 = puVar15 + 1;
      uVar25 = uVar25 * 0x400 + (uint)uVar3 + 0xfca02400;
      *(undefined4 *)(lVar27 + 0x54) = 0;
      do {
        if (0x7f < (int)uVar25) {
          local_a8 = puVar21;
          if (uVar18 == 0) {
            bVar14 = *(byte *)(lVar22 + 99);
            abStack_54[1] = bVar14 + (bVar14 == 0);
            if (*(int *)(lVar22 + 0x6c) == 1) {
              if (abStack_54[1] == '\x02') {
                local_52 = 0x2101;
              }
              else if (abStack_54[1] == '\x01') {
                local_52 = 0x221;
              }
              else {
                local_52 = 0x201;
              }
              uVar18 = 3;
            }
            else {
              if (*(int *)(lVar22 + 0x6c) != 0) {
                iVar20 = 10;
                goto LAB_1425b9c5c;
              }
              if (bVar14 < 2) {
                local_52 = CONCAT11(local_52._1_1_,0x21);
              }
              else {
                local_52 = CONCAT11(local_52._1_1_,1);
              }
              uVar18 = 2;
            }
LAB_1425b9691:
            local_d4 = (uint)*(byte *)(lVar27 + 0x3f);
            local_78 = (ulonglong)(uVar25 >> 10);
            local_80 = (ulonglong)(uVar25 & 0xf);
            local_ac = 1 << (char)(uVar25 & 0xf) + 0x10;
            uVar19 = uVar25 >> 4 & 0x3f;
            local_b0 = uVar25 - 0xe000;
            local_b4 = uVar25 - 0xf0000;
            uVar26 = 1;
            bVar17 = 0;
            bVar14 = 0;
            iVar20 = 0;
            local_b8 = uVar18;
            local_90 = puVar15;
            do {
              bVar2 = abStack_54[uVar26];
              if ((char)bVar2 < '\x01') goto LAB_1425b99f0;
              if (0x1f < bVar2) {
                lVar27 = *(longlong *)(lVar22 + 0x18);
                if ((uVar25 < 0x10000) || ((*(byte *)(lVar27 + 0xfd) & 1) != 0)) {
                  lVar12 = *(longlong *)(lVar27 + 0xe8);
                  uVar4 = *(uint *)(*(longlong *)(lVar27 + 0x58) +
                                   ((ulonglong)
                                    *(ushort *)(*(longlong *)(lVar27 + 0x58) + local_78 * 2) +
                                   (ulonglong)uVar19) * 4);
                  lVar5 = (((uVar4 & 0xffff) << 4) + local_80) * 3;
                  uVar11 = (uint)*(byte *)(lVar12 + 2 + lVar5) |
                           (uint)*(byte *)(lVar12 + 1 + lVar5) << 8 |
                           (uint)*(byte *)(lVar12 + lVar5) << 0x10;
                  iVar10 = 3 - (uint)(uVar11 < 0x10000);
                  if (uVar11 < 0x100) {
                    iVar10 = 1;
                  }
                  if ((local_ac & uVar4) == 0) {
                    if (((((char)local_d4 == '\0') && (0x18ff < local_b0)) && (0x1ffff < local_b4))
                       || (uVar11 == 0)) goto LAB_1425b98da;
                    local_60 = (undefined1 *)CONCAT44(local_60._4_4_,uVar11);
                    if (iVar10 != 3) goto LAB_1425b99f0;
                  }
                  else {
                    local_60 = (undefined1 *)CONCAT44(local_60._4_4_,uVar11);
                    if (iVar10 == 3) goto LAB_1425b97bf;
LAB_1425b9910:
                    if (iVar10 != -3) goto LAB_1425b99f0;
                  }
                  if (iVar20 == 0) {
                    local_d4 = 0;
                    iVar20 = -2;
                    iVar10 = -2;
LAB_1425b992e:
                    local_d8 = (uint)local_60;
                    cVar13 = (char)((ulonglong)local_60 >> 0x10);
                    if (cVar13 == -0x7f) {
                      bVar17 = 1;
                      bVar14 = 0x21;
                      iVar20 = iVar10;
                    }
                    else if (((uint)local_60 >> 0x10 & 0xff) == 0x82) {
                      bVar17 = 2;
                      bVar14 = 0x22;
                      iVar20 = iVar10;
                    }
                    else {
                      bVar14 = cVar13 + 0xa0;
                      if (*(int *)(lVar22 + 0x6c) == 1) {
                        bVar17 = 3;
                      }
                      else {
                        iVar20 = 0;
                      }
                    }
                  }
                }
                else {
LAB_1425b98da:
                  if (*(longlong *)(lVar27 + 0x120) != 0) {
                    iVar10 = FUN_142636f00(*(longlong *)(lVar27 + 0x120),uVar25,&local_60,local_d4);
                    lVar22 = local_88;
                    if (iVar10 != 3) goto LAB_1425b9910;
LAB_1425b97bf:
                    iVar20 = 2;
                    iVar10 = 2;
                    goto LAB_1425b992e;
                  }
                }
                goto LAB_1425b99f0;
              }
              lVar27 = *(longlong *)(lVar22 + (ulonglong)bVar2 * 8);
              if ((0xffff < uVar25) && ((*(byte *)(lVar27 + 0xfd) & 1) == 0)) goto LAB_1425b97ea;
              uVar4 = *(uint *)(*(longlong *)(lVar27 + 0x58) +
                               ((ulonglong)uVar19 +
                               (ulonglong)*(ushort *)(*(longlong *)(lVar27 + 0x58) + local_78 * 2))
                               * 4);
              uVar3 = *(ushort *)
                       (*(longlong *)(lVar27 + 0xe8) +
                       (ulonglong)((uVar4 & 0xffff) * 0x10 + (int)local_80) * 2);
              uVar11 = (uint)uVar3;
              if ((local_ac & uVar4) == 0) {
                if (((char)local_d4 == '\0') && (0x18ff < local_b0)) {
                  if ((0x1ffff < local_b4) || (uVar3 == 0)) goto LAB_1425b97ea;
LAB_1425b99ab:
                  local_60 = (undefined1 *)CONCAT44(local_60._4_4_,uVar11);
                  if ((uVar3 < 0x100 | 0xfffffffe) != 0xfffffffe) goto LAB_1425b99f0;
LAB_1425b99bd:
                  iVar10 = -2;
                  if (iVar20 == 0) goto LAB_1425b99c6;
                }
                else {
                  if (uVar3 != 0) goto LAB_1425b99ab;
LAB_1425b97ea:
                  if (*(longlong *)(lVar27 + 0x120) != 0) {
                    iVar8 = FUN_142636f00(*(longlong *)(lVar27 + 0x120),uVar25,&local_60,local_d4);
                    lVar22 = local_88;
                    iVar10 = 2;
                    if (iVar8 == 2) goto LAB_1425b99c6;
                    if (iVar8 == -2) goto LAB_1425b99bd;
                  }
                }
              }
              else {
                local_60 = (undefined1 *)CONCAT44(local_60._4_4_,uVar11);
                iVar10 = 2;
                if (uVar11 < 0x100) goto LAB_1425b99f0;
LAB_1425b99c6:
                iVar20 = iVar10;
                bVar17 = 1;
                local_d8 = (uint)local_60;
                local_d4 = 0;
                bVar14 = bVar2;
              }
LAB_1425b99f0:
            } while ((uVar26 < uVar18) && (uVar26 = uVar26 + 1, iVar20 < 1));
            puVar15 = local_90;
            param_1 = local_98;
            param_2 = local_c0;
            puVar23 = local_a0;
            lVar27 = local_c8;
            if (iVar20 != 0) {
              uVar26 = 0;
              uVar18 = local_b8;
              if (bVar14 != *(byte *)((longlong)local_70 + (ulonglong)bVar17)) {
                lVar12 = (longlong)(char)bVar14 + -0x1e;
                if ((char)bVar14 < '\x03') {
                  lVar12 = (longlong)(char)bVar14;
                }
                local_50 = *(int *)(&DAT_149c3dd58 + *(int *)(&DAT_149c3dd58 + lVar12 * 4));
                *(byte *)((longlong)local_70 + (ulonglong)bVar17) = bVar14;
                if (bVar17 == 1) {
                  uVar18 = 0;
                }
                uVar26 = 4;
              }
              if ((uint)bVar17 != (int)*(char *)(lVar22 + 0x66)) {
                uVar19 = (uint)uVar26;
                if (bVar17 == 2) {
                  *(undefined1 *)((longlong)&local_50 + uVar26) = 0x1b;
                  uVar9 = uVar26 | 1;
                  uVar26 = (ulonglong)(uVar19 | 2);
                  *(undefined1 *)((longlong)&local_50 + uVar9) = 0x4e;
                }
                else if (bVar17 == 1) {
                  *(undefined1 *)((longlong)&local_50 + uVar26) = 0xe;
                  *(undefined1 *)(lVar22 + 0x66) = 1;
                  uVar26 = (ulonglong)(uVar19 | 1);
                }
                else {
                  *(undefined1 *)((longlong)&local_50 + uVar26) = 0x1b;
                  uVar9 = uVar26 | 1;
                  uVar26 = (ulonglong)(uVar19 | 2);
                  *(undefined1 *)((longlong)&local_50 + uVar9) = 0x4f;
                }
              }
              iVar20 = (int)uVar26 + 2;
              *(ushort *)((longlong)&local_50 + uVar26) =
                   (ushort)local_d8 << 8 | (ushort)local_d8 >> 8;
              puVar24 = local_d0;
              puVar21 = local_a8;
              puVar16 = local_70;
              puVar6 = local_60;
              iVar10 = local_50;
              goto joined_r0x0001425b9b26;
            }
          }
          else if (0 < (int)uVar18) goto LAB_1425b9691;
          iVar20 = 10;
          puVar21 = local_a8;
          puVar24 = local_d0;
          goto LAB_1425b9c5c;
        }
        if (((int)uVar25 < 0x20) && ((0x800c000U >> (uVar25 & 0x1f) & 1) != 0)) goto LAB_1425b965d;
        iVar20 = 1;
        uVar7 = (undefined1)uVar25;
        if (*(char *)(lVar22 + 0x66) != '\0') {
          local_50 = (uint)CONCAT21(local_50._2_2_,uVar7) << 8;
          *(undefined1 *)(lVar22 + 0x66) = 0;
          iVar20 = 2;
          uVar18 = 0;
          uVar7 = 0xf;
        }
        local_50 = CONCAT31(local_50._1_3_,uVar7);
        puVar6 = local_60;
        iVar10 = local_50;
        if ((uVar25 == 0xd) || (uVar25 == 10)) {
          *(undefined2 *)(puVar16 + 1) = 0;
          *puVar16 = 0;
          uVar18 = 0;
        }
joined_r0x0001425b9b26:
        local_60 = puVar21;
        local_50._0_1_ = (undefined1)iVar10;
        local_50 = iVar10;
        if (iVar20 == 2) {
          puVar21 = local_60 + 2;
          if (puVar23 < puVar21) goto LAB_1425b9b35;
          *local_60 = (undefined1)local_50;
          local_50._1_1_ = (undefined1)((uint)iVar10 >> 8);
          local_60[1] = local_50._1_1_;
          local_60 = puVar6;
          if (local_68 != (int *)0x0) {
            iVar20 = -1;
            if (0xffff < uVar25) {
              iVar20 = -2;
            }
            iVar20 = (int)((ulonglong)((longlong)puVar15 - *(longlong *)(param_1 + 0x10)) >> 1) +
                     iVar20;
            piVar1 = local_68 + 1;
            *local_68 = iVar20;
            local_68 = local_68 + 2;
            *piVar1 = iVar20;
          }
        }
        else if (iVar20 == 1) {
          *local_60 = (undefined1)local_50;
          puVar21 = local_60 + 1;
          local_60 = puVar6;
          if (local_68 != (int *)0x0) {
            *local_68 = (int)((ulonglong)((longlong)puVar15 - *(longlong *)(param_1 + 0x10)) >> 1) +
                        -1;
            local_68 = local_68 + 1;
          }
        }
        else {
LAB_1425b9b35:
          iVar10 = -1;
          if (0xffff < uVar25) {
            iVar10 = -2;
          }
          local_e8 = (int)((ulonglong)((longlong)puVar15 - *(longlong *)(param_1 + 0x10)) >> 1) +
                     iVar10;
          local_f0 = &local_68;
          local_f8 = puVar23;
          local_e0 = param_2;
          FUN_142637760(lVar27,&local_50,iVar20,&local_60);
          puVar21 = local_60;
          lVar22 = local_88;
          if (0 < *param_2) goto LAB_1425b9c69;
        }
LAB_1425b94be:
        if (puVar24 <= puVar15) goto LAB_1425b9c63;
        if (puVar23 <= puVar21) {
          *param_2 = 0xf;
          goto LAB_1425b9c69;
        }
        uVar3 = *puVar15;
        uVar25 = (uint)uVar3;
        puVar15 = puVar15 + 1;
      } while ((uVar25 & 0xf800) != 0xd800);
      if ((uVar3 & 0x400) != 0) goto LAB_1425b965d;
    } while (puVar15 < puVar24);
  }
  *(uint *)(lVar27 + 0x54) = uVar25;
LAB_1425b9c63:
  if ((((*param_2 < 1) && (*(char *)(lVar22 + 0x66) != '\0')) && (*(char *)(param_1 + 2) != '\0'))
     && ((puVar24 <= puVar15 && (*(int *)(lVar27 + 0x54) == 0)))) {
    *(undefined1 *)(lVar22 + 0x66) = 0;
    lVar22 = *(longlong *)(param_1 + 0x10);
    iVar20 = (int)((ulonglong)((longlong)puVar15 - lVar22) >> 1);
    if (iVar20 < 1) {
      local_e8 = 0xffffffff;
    }
    else {
      local_e8 = iVar20 - 1;
      if (((*(ushort *)(lVar22 + (ulonglong)local_e8 * 2) & 0xfc00) == 0xdc00) &&
         ((local_e8 == 0 || ((*(ushort *)(lVar22 + (ulonglong)(iVar20 - 2) * 2) & 0xfc00) == 0xd800)
          ))) {
        local_e8 = iVar20 - 2;
      }
    }
    local_f0 = &local_68;
    local_f8 = puVar23;
    local_e0 = param_2;
    local_60 = puVar21;
    FUN_142637760(lVar27,&DAT_149c3dc60,1,&local_60);
    puVar21 = local_60;
  }
LAB_1425b9c69:
  *(ushort **)(param_1 + 0x10) = puVar15;
  *(undefined1 **)(param_1 + 0x20) = puVar21;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
}



// FUNCTION 1425b9d80 FUN_1425b9d80 body=343 status=ok
// SIG undefined FUN_1425b9d80(void)

void FUN_1425b9d80(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[1] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[2] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[3] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[4] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[5] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[6] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[7] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[8] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[9] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[10] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0xb] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0xc] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0xd] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0xe] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0xf] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0x10] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0x11] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0x12] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0x13] != 0) {
      FUN_14250b3d0();
    }
    if (*(char *)(param_1 + 0x3e) == '\0') {
      FUN_1424da110(*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



// FUNCTION 1425b9ee0 FUN_1425b9ee0 body=482 status=ok
// SIG undefined FUN_1425b9ee0(void)

void FUN_1425b9ee0(longlong param_1,int *param_2)

{
  char cVar1;
  undefined1 *_Src;
  undefined1 *puVar2;
  ushort *puVar3;
  int *piVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  size_t _Size;
  undefined1 *_Dst;
  byte bVar8;
  uint uVar9;
  ulonglong _Size_00;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_4b [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 < 1) {
    local_58 = *(undefined8 *)(param_1 + 0x10);
    do {
      _Src = *(undefined1 **)(param_1 + 0x10);
      puVar2 = *(undefined1 **)(param_1 + 0x18);
      uVar7 = (longlong)puVar2 - (longlong)_Src;
      if (puVar2 < _Src || uVar7 == 0) goto LAB_1425b9f1b;
      if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x20)) {
        iVar6 = 0xf;
        if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x20)) goto LAB_1425b9f19;
        goto LAB_1425b9f1b;
      }
      cVar1 = *(char *)(*(longlong *)(param_1 + 8) + 0x40);
      _Size = (size_t)cVar1;
      if (_Size == 0) {
        uVar5 = FUN_1425bb290(param_1,param_2);
        uVar9 = *(int *)(param_1 + 0x10) - (int)_Src;
        iVar6 = *param_2;
        puVar2 = _Src;
      }
      else {
        _Size_00 = 3 - _Size;
        if (uVar7 <= 3 - _Size) {
          _Size_00 = uVar7;
        }
        memcpy(local_4b,(void *)(*(longlong *)(param_1 + 8) + 0x41),_Size);
        _Dst = local_4b + _Size;
        memcpy(_Dst,_Src,_Size_00);
        *(undefined1 **)(param_1 + 0x10) = local_4b;
        *(undefined1 **)(param_1 + 0x18) = _Dst + _Size_00;
        bVar8 = (char)_Size_00 + cVar1;
        uVar9 = (uint)bVar8;
        uVar5 = FUN_1425bb290(param_1,param_2);
        *(undefined1 **)(param_1 + 0x10) = _Src + (*(longlong *)(param_1 + 0x10) - (longlong)_Dst);
        *(undefined1 **)(param_1 + 0x18) = puVar2;
        if (*param_2 == 0xb) {
          *(byte *)(*(longlong *)(param_1 + 8) + 0x40) = bVar8;
          memcpy((void *)(*(longlong *)(param_1 + 8) + 0x41),local_4b,(longlong)(char)bVar8);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
          iVar6 = 0;
          goto LAB_1425b9f19;
        }
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
        iVar6 = *param_2;
        puVar2 = local_4b;
      }
      if (0 < iVar6) break;
      if (0xfffd < uVar5) {
        *param_2 = (uint)(uVar5 != 0xfffe) * 2 + 10;
        break;
      }
      puVar3 = *(ushort **)(param_1 + 0x20);
      *(ushort **)(param_1 + 0x20) = puVar3 + 1;
      *puVar3 = uVar5;
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        *(int **)(param_1 + 0x30) = piVar4 + 1;
        *piVar4 = (int)_Src - (int)local_58;
      }
    } while (*param_2 < 1);
    *(char *)(*(longlong *)(param_1 + 8) + 0x40) = (char)uVar9;
    if ('\0' < (char)uVar9) {
      memcpy((void *)(*(longlong *)(param_1 + 8) + 0x41),puVar2,(ulonglong)(uVar9 & 0xff));
    }
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
  }
  iVar6 = 0;
  if (*param_2 == 0xb) {
LAB_1425b9f19:
    *param_2 = iVar6;
  }
LAB_1425b9f1b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1425ba0f0 FUN_1425ba0f0 body=3577 status=ok
// SIG undefined FUN_1425ba0f0(void)

void FUN_1425ba0f0(longlong param_1,int *param_2,undefined8 param_3,byte *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  byte *pbVar16;
  longlong lVar17;
  ushort *puVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  byte bVar24;
  byte bVar25;
  ulonglong uVar26;
  byte *pbVar27;
  ulonglong uVar28;
  char cVar29;
  ulonglong uVar30;
  int iVar31;
  bool bVar32;
  undefined1 auStack_d8 [47];
  undefined1 local_a9;
  ulonglong local_a8;
  byte *local_a0;
  int *local_98;
  byte *local_90;
  byte *local_88;
  uint local_80;
  byte local_7b [27];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar15 = *(ushort **)(param_1 + 0x10);
  if (puVar15 < *(ushort **)(param_1 + 0x18)) {
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10);
    iVar31 = 0;
    local_a8 = 0;
    do {
      if (0 < *param_2) break;
      if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x20)) {
        *param_2 = 0xf;
        break;
      }
      local_a9 = *(undefined1 *)((longlong)puVar4 + 0xa1);
      uVar3 = *puVar15;
      uVar21 = (uint)uVar3;
      bVar24 = (byte)uVar3;
      pbVar20 = local_7b;
      if ((uVar21 & 0xff80) == 0x80) {
        if (((0x30 < uVar21 - 0xa7) ||
            ((0x100000000a603U >> ((ulonglong)(uVar21 - 0xa7) & 0x3f) & 1) == 0)) &&
           (uVar21 != 0xf7)) {
          *(undefined1 *)((longlong)puVar4 + 0xa1) = 1;
LAB_1425ba200:
          if ((uVar3 < 0x1a) && ((0x2002601U >> (uVar21 & 0x1f) & 1) != 0)) {
            local_7b[0] = bVar24;
            pbVar20 = local_7b + 1;
          }
        }
        if ((uVar3 < 0x1a) && (pbVar23 = (byte *)0x1, (0x2002601U >> (uVar21 & 0x1f) & 1) != 0))
        goto LAB_1425ba23e;
        puVar15 = &DAT_149c3fc22;
        do {
          puVar18 = puVar15;
          puVar15 = puVar18 + 3;
        } while (*puVar18 < uVar3);
        bVar12 = (byte)(uVar3 >> 8);
        if (uVar3 < puVar18[-1]) {
LAB_1425ba3db:
          bVar25 = bVar12;
          uVar11 = uVar3;
          if (bVar24 == 0) {
            bVar25 = 0xf6;
            uVar11 = uVar3 >> 8;
          }
          *pbVar20 = 0x14;
          pbVar20[1] = bVar25;
          pbVar20[2] = (byte)uVar11;
          pbVar23 = pbVar20 + (3 - (longlong)local_7b);
          pbVar20 = pbVar20 + 3;
          param_4 = (byte *)CONCAT71((int7)((ulonglong)param_4 >> 8),0x14);
          goto LAB_1425ba412;
        }
        bVar25 = (byte)puVar18[1];
        param_4 = (byte *)(ulonglong)bVar25;
        if (bVar25 == 0xf) {
          if (uVar3 < 0x20) {
            *pbVar20 = 0xf;
            pbVar20[1] = bVar24 + 0x20;
LAB_1425ba70e:
            pbVar20 = pbVar20 + 2;
          }
          else if ((ushort)(uVar3 - 0x80) < 0x21) {
            *pbVar20 = 0xf;
            pbVar20[1] = bVar24;
            goto LAB_1425ba70e;
          }
          pbVar23 = pbVar20 + -(longlong)local_7b;
          param_4 = &DAT_0000000f;
LAB_1425ba412:
          if ((int)pbVar23 != 0) goto LAB_1425ba23e;
        }
        else {
          if (bVar25 == 0x14) goto LAB_1425ba3db;
          if (bVar25 < 0x14) {
            iVar14 = FUN_142586e50(puVar4[(longlong)param_4],uVar21,&local_80,0);
            if (iVar14 < 1) {
              param_4[(longlong)(local_7b + 3)] = 1;
              pbVar23 = (byte *)0x0;
              goto LAB_1425ba412;
            }
            pbVar23 = pbVar20;
            if ((bVar25 != 0) && (*(byte *)(puVar4 + 0x14) != bVar25)) {
              pbVar23 = pbVar20 + 1;
              *pbVar20 = bVar25;
              if ((0xf < bVar25) && (iVar14 == 1)) {
                pbVar23 = pbVar20 + 2;
                pbVar20[1] = bVar25;
              }
            }
            if ((iVar14 == 1) && ((local_80 & 0xe0) == 0)) {
              local_a8 = (ulonglong)(uint)bVar25;
              pbVar23 = (byte *)0x0;
              goto LAB_1425ba412;
            }
            switch(iVar14) {
            case 1:
              goto LAB_1425bad22;
            case 2:
              goto LAB_1425bad18;
            case 3:
              break;
            case 4:
              *pbVar23 = (byte)(local_80 >> 0x18);
              pbVar23 = pbVar23 + 1;
              break;
            default:
              goto switchD_1425ba80a_default;
            }
            *pbVar23 = (byte)(local_80 >> 0x10);
            pbVar23 = pbVar23 + 1;
LAB_1425bad18:
            *pbVar23 = (byte)(local_80 >> 8);
            pbVar23 = pbVar23 + 1;
LAB_1425bad22:
            *pbVar23 = (byte)local_80;
            pbVar23 = pbVar23 + 1;
switchD_1425ba80a_default:
            pbVar23 = pbVar23 + -(longlong)pbVar20;
            local_a8 = (ulonglong)(uint)bVar25;
            goto LAB_1425ba412;
          }
        }
        local_7b[3] = 0;
        local_7b[4] = 0;
        local_7b[5] = 0;
        local_7b[6] = 0;
        local_7b[7] = 0;
        local_7b[8] = 0;
        local_7b[9] = 0;
        local_7b[10] = 0;
        local_7b[0xb] = 0;
        local_7b[0xc] = 0;
        local_7b[0xd] = 0;
        local_7b[0xe] = 0;
        local_7b[0xf] = 0;
        local_7b[0x10] = 0;
        local_7b[0x11] = 0;
        local_7b[0x12] = 0;
        local_7b[0x13] = 0;
        local_7b[0x14] = 0;
        local_7b[0x15] = 0;
        local_7b[0x16] = 0;
        bVar25 = *(byte *)(puVar4 + 0x14);
        iVar14 = (int)pbVar20;
        local_a0 = param_4;
        if ((bVar25 != 1) &&
           (((((char)param_4 == -0x80 && (bVar25 < 0x10)) || ((char)param_4 == -0x7e)) ||
            ((((uint)param_4 & 0xff) == 0x81 && (0xf < bVar25)))))) {
          bVar25 = *(byte *)((longlong)puVar4 + 0xa1);
          pbVar27 = (byte *)(ulonglong)bVar25;
          pbVar16 = pbVar20;
          if (&DAT_0000000f < pbVar27) {
            iVar13 = FUN_142586e50(puVar4[(longlong)pbVar27],uVar21,&local_80,0);
            if (iVar13 < 1) goto LAB_1425bae6f;
            if (*(byte *)(puVar4 + 0x14) == bVar25) {
LAB_1425ba766:
              if ((iVar13 != 1) || ((local_80 & 0xe0) != 0)) goto LAB_1425ba81f;
              goto LAB_1425bae66;
            }
            *pbVar20 = bVar25;
            if (iVar13 == 1) {
              pbVar16 = pbVar20 + 2;
              pbVar20[1] = bVar25;
              goto LAB_1425ba766;
            }
            pbVar16 = pbVar20 + 1;
LAB_1425ba81f:
            switch(iVar13) {
            case 1:
              goto switchD_1425bae9e_caseD_1;
            case 2:
              goto switchD_1425bae9e_caseD_2;
            case 3:
              goto switchD_1425bae9e_caseD_3;
            case 4:
              goto switchD_1425bae9e_caseD_4;
            }
switchD_1425bae9e_default:
            pbVar23 = pbVar16 + -(longlong)pbVar20;
          }
          else {
            iVar13 = FUN_142586e50(puVar4[1],uVar21,&local_80,0);
            if (iVar13 < 1) {
              local_7b[4] = 1;
            }
            else {
              pbVar23 = pbVar20;
              if (*(char *)(puVar4 + 0x14) != '\x01') {
                pbVar23 = pbVar20 + 1;
                *pbVar20 = 1;
              }
              if ((iVar13 == 1) && (local_a8 = 1, (local_80 & 0xe0) == 0)) goto LAB_1425bac62;
              uVar26 = (ulonglong)(iVar13 - 1U);
              if (iVar13 - 1U < 4) {
                uVar28 = (longlong)&switchD_1425ba631::switchdataD_149c40008 +
                         (longlong)(int)(&switchD_1425ba631::switchdataD_149c40008)[uVar26];
                switch(uVar26) {
                case 0:
                  goto LAB_1425bac4c;
                case 1:
                  break;
                case 3:
                  *pbVar23 = (byte)(local_80 >> 0x18);
                  pbVar23 = pbVar23 + 1;
                case 2:
                  *pbVar23 = (byte)(local_80 >> 0x10);
                  pbVar23 = pbVar23 + 1;
                }
                uVar28 = (ulonglong)local_80;
                *pbVar23 = (byte)(local_80 >> 8);
                pbVar23 = pbVar23 + 1;
LAB_1425bac4c:
                *pbVar23 = (byte)local_80;
                pbVar23 = pbVar23 + 1;
                uVar26 = uVar28;
              }
              local_a8 = CONCAT71((int7)(uVar26 >> 8),1);
              uVar22 = (int)pbVar23 - iVar14;
              pbVar23 = (byte *)(ulonglong)uVar22;
              param_4 = (byte *)(ulonglong)local_80;
              if (uVar22 != 0) goto LAB_1425ba23e;
            }
LAB_1425bac62:
            param_4 = (byte *)0x0;
            iVar13 = FUN_142586e50(*puVar4,uVar21,&local_80,0);
            if (iVar13 < 1) {
              local_7b[3] = 1;
            }
            else {
              if ((iVar13 == 1) && ((local_80 & 0xe0) == 0)) {
                local_a8 = 0;
                goto LAB_1425bade3;
              }
              pbVar23 = pbVar20;
              switch(iVar13) {
              case 1:
                pbVar23 = pbVar20;
                goto LAB_1425badce;
              case 2:
                pbVar23 = pbVar20;
                break;
              case 4:
                pbVar23 = pbVar20 + 1;
                *pbVar20 = (byte)(local_80 >> 0x18);
              case 3:
                *pbVar23 = (byte)(local_80 >> 0x10);
                pbVar23 = pbVar23 + 1;
                break;
              default:
                goto switchD_1425bacd9_default;
              }
              *pbVar23 = (byte)(local_80 >> 8);
              pbVar23 = pbVar23 + 1;
LAB_1425badce:
              *pbVar23 = (byte)local_80;
              pbVar23 = pbVar23 + 1;
switchD_1425bacd9_default:
              local_a8 = 0;
              uVar22 = (int)pbVar23 - iVar14;
              pbVar23 = (byte *)(ulonglong)uVar22;
              if (uVar22 != 0) goto LAB_1425ba23e;
            }
LAB_1425bade3:
            local_90 = (byte *)(ulonglong)*(byte *)((longlong)puVar4 + 0xa1);
            pbVar27 = (byte *)(ulonglong)*(byte *)((longlong)puVar4 + 0xa1);
            iVar13 = FUN_142586e50(puVar4[(longlong)pbVar27],uVar21,&local_80,0);
            if (0 < iVar13) {
              bVar25 = (byte)local_90;
              if ((bVar25 != 0) && (*(byte *)(puVar4 + 0x14) != bVar25)) {
                pbVar16 = pbVar20 + 1;
                *pbVar20 = bVar25;
                if ((0xf < bVar25) && (iVar13 == 1)) {
                  pbVar16 = pbVar20 + 2;
                  pbVar20[1] = bVar25;
                }
              }
              pbVar27 = local_90;
              if ((iVar13 == 1) && ((local_80 & 0xe0) == 0)) {
LAB_1425bae66:
                pbVar23 = (byte *)0x0;
                goto LAB_1425baee9;
              }
              switch(iVar13) {
              case 1:
switchD_1425bae9e_caseD_1:
                break;
              case 2:
switchD_1425bae9e_caseD_2:
                bVar25 = (byte)(local_80 >> 8);
                goto LAB_1425baed6;
              case 4:
switchD_1425bae9e_caseD_4:
                *pbVar16 = (byte)(local_80 >> 0x18);
                pbVar16 = pbVar16 + 1;
              case 3:
switchD_1425bae9e_caseD_3:
                *pbVar16 = (byte)(local_80 >> 0x10);
                pbVar16 = pbVar16 + 1;
                bVar25 = (byte)(local_80 >> 8);
LAB_1425baed6:
                *pbVar16 = bVar25;
                pbVar16 = pbVar16 + 1;
                break;
              default:
                goto switchD_1425bae9e_default;
              }
              *pbVar16 = (byte)local_80;
              pbVar16 = pbVar16 + 1;
              goto switchD_1425bae9e_default;
            }
LAB_1425bae6f:
            pbVar27[(longlong)(local_7b + 3)] = 1;
            pbVar27 = (byte *)(local_a8 & 0xffffffff);
            pbVar23 = (byte *)0x0;
          }
LAB_1425baee9:
          local_a8 = (ulonglong)pbVar27 & 0xffffffff;
          param_4 = local_a0;
          if ((int)pbVar23 != 0) goto LAB_1425ba23e;
        }
        bVar25 = *(byte *)((longlong)puVar4 + 0xa1);
        uVar26 = (ulonglong)bVar25;
        pbVar23 = (byte *)0x0;
        if ((uVar26 != 0) &&
           (((((char)local_a0 == -0x80 && (bVar25 < 0x10)) || ((char)local_a0 == -0x7e)) ||
            ((((uint)local_a0 & 0xff) == 0x81 && (0xf < bVar25)))))) {
          iVar13 = FUN_142586e50(puVar4[uVar26],uVar21,&local_80,0);
          if (iVar13 < 1) {
            local_7b[uVar26 + 3] = 1;
            pbVar23 = (byte *)0x0;
            goto LAB_1425ba884;
          }
          pbVar23 = pbVar20;
          if (*(byte *)(puVar4 + 0x14) != bVar25) {
            pbVar23 = pbVar20 + 1;
            *pbVar20 = bVar25;
            if ((0xf < bVar25) && (iVar13 == 1)) {
              pbVar23 = pbVar20 + 2;
              pbVar20[1] = bVar25;
            }
          }
          local_a8 = uVar26;
          if ((iVar13 == 1) && ((local_80 & 0xe0) == 0)) {
            pbVar23 = (byte *)0x0;
            goto LAB_1425ba884;
          }
          switch(iVar13) {
          case 1:
            goto LAB_1425ba876;
          case 2:
            break;
          case 4:
            *pbVar23 = (byte)(local_80 >> 0x18);
            pbVar23 = pbVar23 + 1;
          case 3:
            *pbVar23 = (byte)(local_80 >> 0x10);
            pbVar23 = pbVar23 + 1;
            break;
          default:
            goto switchD_1425ba7c7_default;
          }
          *pbVar23 = (byte)(local_80 >> 8);
          pbVar23 = pbVar23 + 1;
LAB_1425ba876:
          *pbVar23 = (byte)local_80;
          pbVar23 = pbVar23 + 1;
switchD_1425ba7c7_default:
          pbVar23 = pbVar23 + -(longlong)pbVar20;
        }
LAB_1425ba884:
        if (((int)pbVar23 != 0) || (bVar25 = (byte)local_a8, (byte)local_a8 == 0))
        goto LAB_1425ba9c0;
        cVar29 = (char)local_a0;
        if ((cVar29 == -0x80) && ((byte)local_a8 < 0x10)) {
LAB_1425ba8c1:
          uVar26 = local_a8 & 0xff;
          local_98 = param_2;
          iVar13 = FUN_142586e50(puVar4[uVar26],uVar21,&local_80,0);
          param_2 = local_98;
          if (iVar13 < 1) {
            local_7b[uVar26 + 3] = 1;
            pbVar23 = (byte *)0x0;
          }
          else {
            pbVar23 = pbVar20;
            if (*(byte *)(puVar4 + 0x14) != bVar25) {
              pbVar23 = pbVar20 + 1;
              *pbVar20 = bVar25;
              if ((0xf < bVar25) && (iVar13 == 1)) {
                pbVar23 = pbVar20 + 2;
                pbVar20[1] = bVar25;
              }
            }
            if ((iVar13 == 1) && ((local_80 & 0xe0) == 0)) {
              pbVar23 = (byte *)0x0;
              goto LAB_1425ba9c0;
            }
            switch(iVar13) {
            case 1:
              goto LAB_1425ba9b7;
            case 2:
              break;
            case 4:
              *pbVar23 = (byte)(local_80 >> 0x18);
              pbVar23 = pbVar23 + 1;
            case 3:
              *pbVar23 = (byte)(local_80 >> 0x10);
              pbVar23 = pbVar23 + 1;
              break;
            default:
              goto switchD_1425ba975_default;
            }
            *pbVar23 = (byte)(local_80 >> 8);
            pbVar23 = pbVar23 + 1;
LAB_1425ba9b7:
            *pbVar23 = (byte)local_80;
            pbVar23 = pbVar23 + 1;
switchD_1425ba975_default:
            pbVar23 = pbVar23 + -(longlong)pbVar20;
          }
LAB_1425ba9c0:
          param_4 = local_a0;
          if ((int)pbVar23 != 0) goto LAB_1425ba23e;
        }
        else if ((cVar29 == -0x7e) || (cVar29 == -0x7f && 0xf < (byte)local_a8)) goto LAB_1425ba8c1;
        uVar22 = 0x10;
        if ((char)local_a0 != -0x7f) {
          uVar22 = 1;
        }
        uVar19 = (uint)((byte)((char)local_a0 + 0x7fU) < 2) * 8 + 0xb;
        param_4 = local_a0;
        local_98 = param_2;
        if (uVar19 < uVar22) {
          bVar32 = true;
          pbVar23 = (byte *)0x0;
        }
        else {
          local_90 = pbVar20 + 1;
          local_88 = pbVar20 + 2;
          uVar26 = (ulonglong)uVar22;
          do {
            pbVar23 = (byte *)0x0;
            if ((puVar4[uVar26] != 0) && (local_7b[uVar26 + 3] == 0)) {
              iVar13 = FUN_142586e50(puVar4[uVar26],uVar21,&local_80,0);
              param_4 = local_a0;
              if (iVar13 < 1) {
                local_7b[uVar26 + 3] = 1;
                pbVar23 = (byte *)0x0;
                goto LAB_1425baa92;
              }
              pbVar23 = pbVar20;
              if (uVar26 != *(byte *)(puVar4 + 0x14)) {
                *pbVar20 = (byte)uVar26;
                pbVar23 = local_90;
                if ((0xf < uVar26) && (iVar13 == 1)) {
                  *local_90 = (byte)uVar26;
                  pbVar23 = local_88;
                }
              }
              if ((iVar13 == 1) && ((local_80 & 0xe0) == 0)) {
                local_a8 = uVar26 & 0xffffffff;
                pbVar23 = (byte *)0x0;
                goto LAB_1425baa92;
              }
              switch(iVar13) {
              case 1:
                goto LAB_1425baba1;
              case 2:
                break;
              case 4:
                *pbVar23 = (byte)(local_80 >> 0x18);
                pbVar23 = pbVar23 + 1;
              case 3:
                *pbVar23 = (byte)(local_80 >> 0x10);
                pbVar23 = pbVar23 + 1;
                break;
              default:
                goto switchD_1425bab5f_default;
              }
              *pbVar23 = (byte)(local_80 >> 8);
              pbVar23 = pbVar23 + 1;
LAB_1425baba1:
              *pbVar23 = (byte)local_80;
              pbVar23 = pbVar23 + 1;
switchD_1425bab5f_default:
              pbVar23 = pbVar23 + -(longlong)pbVar20;
              local_a8 = uVar26 & 0xffffffff;
            }
LAB_1425baa92:
            bVar32 = (int)pbVar23 == 0;
          } while ((uVar26 < uVar19) && (uVar26 = uVar26 + 1, (int)pbVar23 == 0));
        }
        if (((char)param_4 == -0x7f) || (!bVar32)) {
          param_2 = local_98;
          if ((int)pbVar23 == 0) goto LAB_1425bad76;
          goto LAB_1425ba23e;
        }
        param_4 = (byte *)0x0;
        iVar13 = FUN_142586e50(*puVar4,uVar21,&local_80,0);
        if (iVar13 < 1) {
          local_7b[3] = 1;
        }
        else {
          if ((iVar13 == 1) && ((local_80 & 0xe0) == 0)) {
            local_a8 = 0;
            goto LAB_1425bad76;
          }
          pbVar23 = pbVar20;
          switch(iVar13) {
          case 1:
            pbVar23 = pbVar20;
            goto LAB_1425bad5f;
          case 2:
            pbVar23 = pbVar20;
            break;
          case 4:
            pbVar23 = pbVar20 + 1;
            *pbVar20 = (byte)(local_80 >> 0x18);
          case 3:
            *pbVar23 = (byte)(local_80 >> 0x10);
            pbVar23 = pbVar23 + 1;
            break;
          default:
            goto switchD_1425bac09_default;
          }
          *pbVar23 = (byte)(local_80 >> 8);
          pbVar23 = pbVar23 + 1;
LAB_1425bad5f:
          *pbVar23 = (byte)local_80;
          pbVar23 = pbVar23 + 1;
switchD_1425bac09_default:
          pbVar23 = pbVar23 + -(longlong)pbVar20;
          local_a8 = 0;
          param_2 = local_98;
          if ((int)pbVar23 != 0) goto LAB_1425ba23e;
        }
LAB_1425bad76:
        if (bVar24 == 0) {
          bVar12 = 0xf6;
        }
        *pbVar20 = 0x14;
        if (bVar24 == 0) {
          uVar21 = (uint)(uVar3 >> 8);
        }
        pbVar20[1] = bVar12;
        pbVar20[2] = (byte)uVar21;
        pbVar23 = (byte *)(ulonglong)((iVar14 - (int)local_7b) + 3);
        param_2 = local_98;
      }
      else {
        if (0x5f < (ushort)(uVar3 - 0x20)) goto LAB_1425ba200;
        local_7b[0] = bVar24;
        pbVar23 = (byte *)0x1;
      }
LAB_1425ba23e:
      pbVar16 = local_7b;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 2;
      pbVar20 = *(byte **)(param_1 + 0x20);
      if (pbVar20 < *(byte **)(param_1 + 0x28)) {
        do {
          iVar14 = (int)pbVar23;
          pbVar23 = (byte *)(ulonglong)(iVar14 - 1);
          if (iVar14 == 0) goto LAB_1425ba150;
          bVar24 = *pbVar16;
          param_4 = pbVar20 + 1;
          *(byte **)(param_1 + 0x20) = param_4;
          *pbVar20 = bVar24;
          piVar5 = *(int **)(param_1 + 0x30);
          if (piVar5 != (int *)0x0) {
            *(int **)(param_1 + 0x30) = piVar5 + 1;
            *piVar5 = iVar31;
          }
          pbVar16 = pbVar16 + 1;
          pbVar20 = *(byte **)(param_1 + 0x20);
        } while (pbVar20 < *(byte **)(param_1 + 0x28));
      }
      uVar21 = (uint)pbVar23;
      if (0 < (int)uVar21) {
        lVar17 = *(longlong *)(param_1 + 8);
        param_4 = (byte *)(lVar17 + 0x68);
        *param_2 = 0xf;
        *(char *)(*(longlong *)(param_1 + 8) + 0x5b) = (char)pbVar23;
        pbVar20 = param_4;
        pbVar27 = pbVar16;
        if ((7 < uVar21) && (0x1f < (lVar17 - (longlong)pbVar16) + 0x68U)) {
          uVar26 = (ulonglong)pbVar23 & 0xffffffff;
          if (uVar21 < 0x20) {
            uVar30 = 0;
          }
          else {
            uVar30 = (ulonglong)(uVar21 & 0xffffffe0);
            uVar28 = 0;
            do {
              pbVar20 = pbVar16 + uVar28;
              uVar6 = *(undefined4 *)(pbVar20 + 4);
              uVar7 = *(undefined4 *)(pbVar20 + 8);
              uVar8 = *(undefined4 *)(pbVar20 + 0xc);
              uVar9 = *(undefined8 *)(pbVar16 + uVar28 + 0x10);
              uVar10 = *(undefined8 *)(pbVar16 + uVar28 + 0x10 + 8);
              puVar1 = (undefined4 *)(lVar17 + 0x68 + uVar28);
              *puVar1 = *(undefined4 *)pbVar20;
              puVar1[1] = uVar6;
              puVar1[2] = uVar7;
              puVar1[3] = uVar8;
              puVar2 = (undefined8 *)(lVar17 + 0x78 + uVar28);
              *puVar2 = uVar9;
              puVar2[1] = uVar10;
              uVar28 = uVar28 + 0x20;
            } while (uVar30 != uVar28);
            if (uVar30 == uVar26) goto LAB_1425ba150;
            if (((ulonglong)pbVar23 & 0x18) == 0) {
              pbVar23 = (byte *)(ulonglong)(uVar21 - (uVar21 & 0xffffffe0));
              pbVar27 = pbVar16 + uVar30;
              pbVar20 = param_4 + uVar30;
              goto LAB_1425ba2e7;
            }
          }
          uVar28 = (ulonglong)(uVar21 & 0xfffffff8);
          pbVar20 = param_4 + uVar28;
          pbVar27 = pbVar16 + uVar28;
          pbVar23 = (byte *)(ulonglong)(uVar21 - (uVar21 & 0xfffffff8));
          do {
            *(undefined8 *)(param_4 + uVar30) = *(undefined8 *)(pbVar16 + uVar30);
            uVar30 = uVar30 + 8;
          } while (uVar28 != uVar30);
          if (uVar28 == uVar26) goto LAB_1425ba150;
        }
LAB_1425ba2e7:
        uVar21 = (uint)pbVar23;
        if (((ulonglong)pbVar23 & 7) == 0) {
          pbVar23 = (byte *)((ulonglong)pbVar23 & 0xffffffff);
        }
        else {
          lVar17 = 0;
          do {
            pbVar20[lVar17] = pbVar27[lVar17];
            lVar17 = lVar17 + 1;
          } while ((uVar21 & 7) != (uint)lVar17);
          pbVar20 = pbVar20 + lVar17;
          pbVar27 = pbVar27 + lVar17;
          pbVar23 = (byte *)(ulonglong)(uVar21 - (uint)lVar17);
        }
        param_4 = pbVar23;
        if (6 < uVar21 - 1) {
          lVar17 = 0;
          do {
            pbVar20[lVar17] = pbVar27[lVar17];
            pbVar20[lVar17 + 1] = pbVar27[lVar17 + 1];
            pbVar20[lVar17 + 2] = pbVar27[lVar17 + 2];
            pbVar20[lVar17 + 3] = pbVar27[lVar17 + 3];
            pbVar20[lVar17 + 4] = pbVar27[lVar17 + 4];
            pbVar20[lVar17 + 5] = pbVar27[lVar17 + 5];
            pbVar20[lVar17 + 6] = pbVar27[lVar17 + 6];
            param_4 = (byte *)0x0;
            pbVar20[lVar17 + 7] = pbVar27[lVar17 + 7];
            lVar17 = lVar17 + 8;
          } while ((int)pbVar23 != (int)lVar17);
        }
      }
LAB_1425ba150:
      iVar31 = iVar31 + 1;
      *(undefined1 *)((longlong)puVar4 + 0xa1) = local_a9;
      puVar15 = *(ushort **)(param_1 + 0x10);
    } while (puVar15 < *(ushort **)(param_1 + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1425baf30 FUN_1425baf30 body=369 status=ok
// SIG undefined FUN_1425baf30(void)

longlong FUN_1425baf30(longlong param_1,longlong param_2,int *param_3)

{
  longlong *_Src;
  
  if (*param_3 < 1) {
    *param_3 = 0x1c8;
    param_2 = 0;
  }
  else {
    _Src = *(longlong **)(param_1 + 0x10);
    memcpy((void *)(param_2 + 0x120),_Src,0xa8);
    if (*_Src != 0) {
      FUN_14250b570();
    }
    if (_Src[1] != 0) {
      FUN_14250b570();
    }
    if (_Src[2] != 0) {
      FUN_14250b570();
    }
    if (_Src[3] != 0) {
      FUN_14250b570();
    }
    if (_Src[4] != 0) {
      FUN_14250b570();
    }
    if (_Src[5] != 0) {
      FUN_14250b570();
    }
    if (_Src[6] != 0) {
      FUN_14250b570();
    }
    if (_Src[7] != 0) {
      FUN_14250b570();
    }
    if (_Src[8] != 0) {
      FUN_14250b570();
    }
    if (_Src[9] != 0) {
      FUN_14250b570();
    }
    if (_Src[10] != 0) {
      FUN_14250b570();
    }
    if (_Src[0xb] != 0) {
      FUN_14250b570();
    }
    if (_Src[0xc] != 0) {
      FUN_14250b570();
    }
    if (_Src[0xd] != 0) {
      FUN_14250b570();
    }
    if (_Src[0xe] != 0) {
      FUN_14250b570();
    }
    if (_Src[0xf] != 0) {
      FUN_14250b570();
    }
    if (_Src[0x10] != 0) {
      FUN_14250b570();
    }
    if (_Src[0x11] != 0) {
      FUN_14250b570();
    }
    if (_Src[0x12] != 0) {
      FUN_14250b570();
    }
    if (_Src[0x13] != 0) {
      FUN_14250b570();
    }
    *(void **)(param_2 + 0x10) = (void *)(param_2 + 0x120);
    *(undefined1 *)(param_2 + 0x3e) = 1;
  }
  return param_2;
}



// FUNCTION 1425bb0b0 FUN_1425bb0b0 body=444 status=ok
// SIG undefined FUN_1425bb0b0(void)

void FUN_1425bb0b0(longlong param_1,longlong param_2,int *param_3,undefined1 param_4)

{
  char cVar1;
  char *_Str2;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  size_t _MaxCount;
  ulonglong uVar5;
  char *_Str;
  undefined **ppuVar6;
  undefined1 auStack_188 [39];
  undefined1 local_161;
  longlong local_160;
  undefined8 local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_128 [224];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  puVar3 = (undefined8 *)FUN_1424da030(0xa8);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    *param_3 = 7;
  }
  else {
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_158 = 0x28;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[0x14] = 0;
    uStack_150 = (ulonglong)*(byte *)(param_2 + 8);
    ppuVar6 = &PTR_s_lmb_excp_149c3f9f0;
    uVar5 = 0;
    local_161 = param_4;
    local_160 = param_2;
    do {
      if (0 < *param_3) goto LAB_1425bb1cb;
      if ((0xf680UL >> (uVar5 & 0x3f) & 1) == 0) {
        uVar4 = FUN_14250b6d0(*ppuVar6,local_128,&local_158,param_3);
        puVar3[uVar5] = uVar4;
      }
      uVar5 = uVar5 + 1;
      ppuVar6 = ppuVar6 + 1;
    } while (uVar5 != 0x14);
    if ((*param_3 < 1) && (*(char *)(local_160 + 8) == '\0')) {
      *(undefined1 *)(puVar3 + 0x14) = local_161;
      _Str2 = *(char **)(local_160 + 0x20);
      if ((_Str2 == (char *)0x0) || (cVar1 = *_Str2, cVar1 == '\0')) {
        *(undefined1 *)((longlong)puVar3 + 0xa1) = 0;
      }
      else {
        _Str = "ar";
        ppuVar6 = &PTR_DAT_149c3faa0;
        do {
          if (*_Str == cVar1) {
            _MaxCount = strlen(_Str);
            iVar2 = strncmp(_Str,_Str2,_MaxCount);
            if (iVar2 == 0) {
              *(undefined1 *)((longlong)puVar3 + 0xa1) = *(undefined1 *)(ppuVar6 + -1);
              goto LAB_1425bb1d3;
            }
          }
          else if (cVar1 < *_Str) break;
          _Str = *ppuVar6;
          ppuVar6 = ppuVar6 + 2;
        } while (_Str != (char *)0x0);
        *(undefined1 *)((longlong)puVar3 + 0xa1) = 1;
      }
    }
    else {
LAB_1425bb1cb:
      FUN_1425b9d80(param_1);
    }
  }
LAB_1425bb1d3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_188);
}



// FUNCTION 1425bb290 FUN_1425bb290 body=569 status=ok
// SIG undefined FUN_1425bb290(void)

void FUN_1425bb290(longlong param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  byte *pbVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [46];
  byte local_2a;
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pbVar7 = *(byte **)(param_1 + 0x10);
  pbVar3 = *(byte **)(param_1 + 0x18);
  if (pbVar3 <= pbVar7) {
    *param_2 = 1;
    goto LAB_1425bb335;
  }
  pbVar1 = pbVar7 + 1;
  *(byte **)(param_1 + 0x10) = pbVar1;
  bVar2 = *pbVar7;
  if ('\x1f' < (char)bVar2) goto LAB_1425bb335;
  if (bVar2 < 0x1a) {
    uVar5 = (uint)bVar2;
    if ((0x2002601U >> (uVar5 & 0x1f) & 1) != 0) goto LAB_1425bb335;
    if (uVar5 == 0xf) {
      if (pbVar7 + 2 <= pbVar3) {
        *(byte **)(param_1 + 0x10) = pbVar7 + 2;
        goto LAB_1425bb335;
      }
    }
    else {
      if (uVar5 != 0x14) goto LAB_1425bb367;
      if (pbVar7 + 3 <= pbVar3) {
        *(byte **)(param_1 + 0x10) = pbVar7 + 2;
        *(byte **)(param_1 + 0x10) = pbVar7 + 3;
        goto LAB_1425bb335;
      }
    }
  }
  else {
LAB_1425bb367:
    if (bVar2 < 0x21) {
      if (bVar2 < 0x14) {
        lVar6 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)bVar2 * 8);
        if (lVar6 != 0) {
          if (bVar2 < 0x10) {
            if (pbVar7 + 2 <= pbVar3) {
              *(byte **)(param_1 + 0x10) = pbVar7 + 2;
              if (-1 < (char)*pbVar1) {
                local_2a = bVar2;
                local_29 = *pbVar1;
                FUN_142584b30(**(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10),&local_2a,2,0);
              }
              goto LAB_1425bb335;
            }
          }
          else if (pbVar7 + 3 <= pbVar3) {
            if ((int)(char)*pbVar1 != (uint)bVar2) {
              FUN_142584b30(lVar6,pbVar1,2,0);
              *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 2;
              goto LAB_1425bb425;
            }
            pbVar7 = pbVar7 + 2;
            *(byte **)(param_1 + 0x10) = pbVar7;
            uVar9 = 1;
            goto LAB_1425bb419;
          }
          goto LAB_1425bb357;
        }
      }
      *param_2 = 10;
      goto LAB_1425bb335;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    uVar8 = (ulonglong)*(byte *)(lVar6 + 0xa0);
    lVar6 = *(longlong *)(lVar6 + uVar8 * 8);
    if (uVar8 < 0x10) goto LAB_1425bb335;
    cVar4 = FUN_142586fa0(lVar6,(ulonglong)bVar2);
    uVar8 = *(ulonglong *)(param_1 + 0x10);
    if (cVar4 == '\0') {
      if (uVar8 <= *(ulonglong *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
    else if (uVar8 + 1 <= *(ulonglong *)(param_1 + 0x18)) {
      pbVar7 = (byte *)(uVar8 - 1);
      uVar9 = 2;
LAB_1425bb419:
      FUN_142584b30(lVar6,pbVar7,uVar9,0);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
LAB_1425bb425:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
LAB_1425bb357:
  *param_2 = 0xb;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
LAB_1425bb335:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1425bb5b0 FUN_1425bb5b0 body=122 status=ok
// SIG undefined FUN_1425bb5b0(void)

void FUN_1425bb5b0(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_2 + 8) != '\0') {
    FUN_14250c130(&DAT_149c40298,param_3);
    return;
  }
  uVar1 = FUN_1424e0df0(&DAT_149c40298,param_3);
  if (*param_3 < 1) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    puVar2 = (undefined8 *)FUN_1424da140(1,0x18);
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      FUN_1424e1140(uVar1);
      *param_3 = 7;
    }
    else {
      *puVar2 = uVar1;
    }
  }
  return;
}



// FUNCTION 1425bb630 FUN_1425bb630 body=54 status=ok
// SIG undefined FUN_1425bb630(void)

void FUN_1425bb630(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    FUN_1424e1140(**(undefined8 **)(param_1 + 0x10));
    if (*(char *)(param_1 + 0x3e) == '\0') {
      FUN_1424da110(*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1425bb6d0 FUN_1425bb6d0 body=756 status=ok
// SIG undefined FUN_1425bb6d0(void)

void FUN_1425bb6d0(longlong param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong lVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 uVar8;
  byte bVar9;
  short sVar10;
  int iVar12;
  byte *pbVar13;
  undefined2 *puVar14;
  byte *pbVar15;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined2 local_4a;
  ulonglong local_48;
  uint uVar11;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pbVar13 = *(byte **)(param_1 + 0x10);
  puVar14 = *(undefined2 **)(param_1 + 0x20);
  pbVar3 = *(byte **)(param_1 + 0x18);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
  local_4a = 0;
  if (pbVar13 < pbVar3) {
LAB_1425bb71b:
    pbVar6 = pbVar13;
    do {
      pbVar15 = pbVar6;
      if (*(undefined2 **)(param_1 + 0x28) <= puVar14) {
        *param_2 = 0xf;
        pbVar13 = pbVar15;
        break;
      }
      bVar1 = *pbVar15;
      uVar7 = (uint)bVar1;
      lVar5 = *(longlong *)(param_1 + 8);
      iVar12 = (int)pbVar13;
      uVar11 = (uint)bVar1;
      if (*(int *)(lVar5 + 0x4c) == 0x7e) {
        *(undefined4 *)(lVar5 + 0x4c) = 0;
        if (bVar1 < 0x7d) {
          if (uVar11 != 10) {
            if (uVar11 == 0x7b) goto LAB_1425bb7ad;
LAB_1425bb921:
            *(undefined1 *)((longlong)plVar4 + 0x13) = 0;
            *param_2 = 0x12;
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x41) = 0x7e;
            if (*(char *)((longlong)plVar4 + 0x11) == '\0') {
              uVar8 = 1;
              if ((char)bVar1 < '\0') goto LAB_1425bb947;
            }
            else {
              uVar8 = 1;
              if (0x5d < (byte)(bVar1 - 0x21)) {
LAB_1425bb947:
                pbVar15 = pbVar15 + 1;
                *(byte *)(*(longlong *)(param_1 + 8) + 0x42) = bVar1;
                uVar8 = 2;
              }
            }
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = uVar8;
            pbVar13 = pbVar15;
            break;
          }
        }
        else {
          if (bVar1 != 0x7d) {
            if (uVar11 != 0x7e) goto LAB_1425bb921;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              *(uint *)(*(longlong *)(param_1 + 0x30) +
                       ((longlong)puVar14 - *(longlong *)(param_1 + 0x20)) * 2) =
                   ~*(uint *)(param_1 + 0x10) + iVar12;
            }
            *puVar14 = 0x7e;
            *(undefined1 *)((longlong)plVar4 + 0x13) = 0;
            goto LAB_1425bb8a6;
          }
LAB_1425bb7ad:
          *(bool *)((longlong)plVar4 + 0x11) = bVar1 == 0x7b;
          if (*(char *)((longlong)plVar4 + 0x13) != '\0') {
            *(undefined1 *)((longlong)plVar4 + 0x13) = 0;
            *param_2 = 0x12;
            *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x11c) = 2;
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x41) = 0x7e;
            *(byte *)(*(longlong *)(param_1 + 8) + 0x42) = bVar1;
            goto LAB_1425bb8ef;
          }
          *(undefined1 *)((longlong)plVar4 + 0x13) = 1;
        }
      }
      else {
        if (*(char *)((longlong)plVar4 + 0x11) == '\0') {
          if (bVar1 != 0x7e) goto LAB_1425bb86c;
        }
        else {
          uVar2 = *(uint *)(lVar5 + 0x48);
          if (uVar2 != 0) {
            bVar9 = (byte)uVar2;
            if (((uVar2 + 0xdf & 0xff) < 0x5d) && ((byte)(bVar1 - 0x21) < 0x5e)) {
              local_4a = CONCAT11(bVar1 + 0x80,bVar9 + 0x80);
              local_58 = param_2;
              uVar7 = FUN_142584b30(*(undefined8 *)(*plVar4 + 0x30),&local_4a,2,
                                    *(undefined1 *)(lVar5 + 0x3f));
              *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48) = 0;
              param_2 = local_58;
              if ((int)uVar7 < 0xfffe) goto LAB_1425bb87c;
              uVar11 = uVar11 | (uVar2 & 0xff) << 8;
              sVar10 = (short)uVar11;
              *local_58 = (uint)(uVar7 != 0xfffe) * 2 + 10;
              if (uVar11 < 0x100) goto LAB_1425bb9aa;
            }
            else {
              *(undefined4 *)(lVar5 + 0x48) = 0;
              *param_2 = 0xc;
              if ((byte)(bVar1 - 0x21) < 0x5e) goto LAB_1425bb9ad;
              sVar10 = (ushort)bVar1 + (short)uVar2 * 0x100;
            }
            *(char *)(*(longlong *)(param_1 + 8) + 0x41) = (char)((ushort)sVar10 >> 8);
            *(char *)(*(longlong *)(param_1 + 8) + 0x42) = (char)sVar10;
LAB_1425bb8ef:
            *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 2;
            goto LAB_1425bb8f7;
          }
          if (bVar1 != 0x7e) {
            *(uint *)(lVar5 + 0x48) = uVar11 | 0x100;
            *(undefined1 *)((longlong)plVar4 + 0x13) = 0;
            goto LAB_1425bb72f;
          }
        }
        *(undefined4 *)(lVar5 + 0x4c) = 0x7e;
      }
LAB_1425bb72f:
      pbVar13 = (byte *)(ulonglong)(iVar12 + 1);
      pbVar6 = pbVar15 + 1;
      if (pbVar3 <= pbVar15 + 1) goto LAB_1425bb8f7;
    } while( true );
  }
LAB_1425bb8fa:
  *(undefined2 **)(param_1 + 0x20) = puVar14;
  *(byte **)(param_1 + 0x10) = pbVar13;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
LAB_1425bb86c:
  *(undefined1 *)((longlong)plVar4 + 0x13) = 0;
  if ((char)bVar1 < '\0') {
    *param_2 = 0xc;
LAB_1425bb9aa:
    pbVar15 = pbVar15 + 1;
    bVar9 = bVar1;
LAB_1425bb9ad:
    *(byte *)(*(longlong *)(param_1 + 8) + 0x41) = bVar9;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
    pbVar13 = pbVar15;
    goto LAB_1425bb8fa;
  }
LAB_1425bb87c:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(int *)(*(longlong *)(param_1 + 0x30) + ((longlong)puVar14 - *(longlong *)(param_1 + 0x20)) * 2
            ) = iVar12 - ((int)*(char *)((longlong)plVar4 + 0x11) + *(int *)(param_1 + 0x10));
  }
  *puVar14 = (short)uVar7;
LAB_1425bb8a6:
  puVar14 = puVar14 + 1;
  pbVar13 = pbVar15 + 1;
  if (pbVar3 <= pbVar13) goto LAB_1425bb8f7;
  goto LAB_1425bb71b;
LAB_1425bb8f7:
  pbVar13 = pbVar15 + 1;
  goto LAB_1425bb8fa;
}



// FUNCTION 1425bb9e0 FUN_1425bb9e0 body=1227 status=ok
// SIG undefined FUN_1425bb9e0(void)

void FUN_1425bb9e0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  byte bVar20;
  undefined1 auStack_98 [35];
  byte local_75;
  int local_74;
  undefined4 *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar14 = *(longlong *)(param_1 + 0x20);
  piVar18 = *(int **)(param_1 + 0x30);
  iVar11 = *(int *)(param_1 + 0x28) - (int)lVar14;
  local_4c = 0;
  plVar15 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
  bVar20 = *(byte *)((longlong)plVar15 + 0x12);
  uVar4 = (uint)bVar20;
  iVar19 = (int)((ulonglong)(*(longlong *)(param_1 + 0x18) - lVar3) >> 1);
  if ((*(int *)(*(longlong *)(param_1 + 8) + 0x54) == 0) || (uVar12 = 0, iVar11 < 1)) {
    if (iVar19 < 1) {
      iVar13 = 0;
      iVar16 = 0;
    }
    else {
      local_58 = (longlong)iVar19;
      lVar17 = 0;
      uVar7 = 0;
      do {
        local_75 = (byte)uVar4;
        lVar17 = (longlong)(int)lVar17;
        uVar7 = uVar7 & 0xffffffff;
LAB_1425bbafd:
        local_4c = 0xffff;
        iVar13 = (int)uVar7;
        if (iVar11 <= iVar13) {
          *param_2 = 0xf;
          goto LAB_1425bbe23;
        }
        uVar2 = *(ushort *)(lVar3 + lVar17 * 2);
        uVar12 = (uint)uVar2;
        iVar16 = (int)lVar17;
        if (uVar12 == 0x7e) goto code_r0x0001425bbb17;
        local_74 = iVar16 + 1;
        uVar10 = uVar12;
        if (0x7f < uVar12) {
          local_70 = param_2;
          local_68 = plVar15;
          local_60 = lVar14;
          iVar6 = FUN_142586e50(*(undefined8 *)(*plVar15 + 0x30),uVar12,&local_4c,
                                *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3f));
          param_2 = local_70;
          plVar15 = local_68;
          if (((iVar6 == 2) && ((local_4c + 0x5e5f & 0xfffe) < 0x5c5e)) &&
             ((local_4c + 0x5f & 0xfe) < 0x5e)) {
            uVar10 = local_4c - 0x8080;
            lVar14 = local_60;
            goto LAB_1425bbbd8;
          }
          local_4c = 0xffff;
LAB_1425bbe6e:
          uVar5 = 10;
          iVar16 = local_74;
          bVar20 = local_75;
          if (((uVar12 & 0xf800) != 0xd800) || (uVar5 = 0xc, (uVar2 & 0x400) != 0))
          goto LAB_1425bba93;
          *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar12;
          goto LAB_1425bba4a;
        }
LAB_1425bbbd8:
        local_4c = uVar10;
        if (uVar10 == 0xffff) goto LAB_1425bbe6e;
        bVar20 = 0xff < uVar10;
        *(byte *)((longlong)plVar15 + 0x12) = bVar20;
        uVar4 = (uint)bVar20;
        local_4c._0_1_ = (undefined1)uVar10;
        if (((int)(char)local_75 == uVar4) && ((char)plVar15[2] != '\0')) {
          if (0xff < uVar10) goto LAB_1425bbcc9;
LAB_1425bbd5d:
          iVar13 = (int)uVar7;
          if (iVar13 < iVar11) {
            uVar7 = (ulonglong)(iVar13 + 1);
            *(undefined1 *)(lVar14 + iVar13) = (undefined1)local_4c;
            if (piVar18 == (int *)0x0) goto LAB_1425bbdd0;
            *piVar18 = iVar16;
            piVar18 = piVar18 + 1;
            goto LAB_1425bbda2;
          }
          lVar8 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar8 + 0x5b);
LAB_1425bbd89:
          *(char *)(lVar8 + 0x5b) = cVar1 + '\x01';
          *(undefined1 *)(lVar8 + 0x68 + (longlong)cVar1) = (undefined1)local_4c;
          *param_2 = 0xf;
        }
        else {
          lVar8 = (longlong)iVar13;
          *(undefined1 *)(*(longlong *)(param_1 + 0x20) + lVar8) = 0x7e;
          if (uVar10 < 0x100) {
            if (*(longlong *)(param_1 + 0x30) != 0) {
              *piVar18 = iVar16;
              piVar18 = piVar18 + 1;
            }
            uVar7 = lVar8 + 1;
            if ((int)uVar7 < iVar11) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x20) + uVar7) = 0x7d;
              if (*(longlong *)(param_1 + 0x30) != 0) {
                *piVar18 = iVar16;
                piVar18 = piVar18 + 1;
              }
              uVar7 = (ulonglong)(iVar13 + 2);
              *(undefined1 *)(plVar15 + 2) = 1;
            }
            else {
              lVar8 = *(longlong *)(param_1 + 8);
              cVar1 = *(char *)(lVar8 + 0x5b);
              *(char *)(lVar8 + 0x5b) = cVar1 + '\x01';
              *(undefined1 *)(lVar8 + 0x68 + (longlong)cVar1) = 0x7d;
              *param_2 = 0xf;
              *(undefined1 *)(plVar15 + 2) = 1;
              uVar7 = uVar7 & 0xffffffff;
            }
            goto LAB_1425bbd5d;
          }
          if (*(longlong *)(param_1 + 0x30) != 0) {
            *piVar18 = iVar16;
            piVar18 = piVar18 + 1;
          }
          uVar7 = lVar8 + 1;
          if ((int)uVar7 < iVar11) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x20) + uVar7) = 0x7b;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              *piVar18 = iVar16;
              piVar18 = piVar18 + 1;
            }
            uVar7 = (ulonglong)(iVar13 + 2);
            *(undefined1 *)(plVar15 + 2) = 1;
          }
          else {
            lVar8 = *(longlong *)(param_1 + 8);
            cVar1 = *(char *)(lVar8 + 0x5b);
            *(char *)(lVar8 + 0x5b) = cVar1 + '\x01';
            *(undefined1 *)(lVar8 + 0x68 + (longlong)cVar1) = 0x7b;
            *param_2 = 0xf;
            *(undefined1 *)(plVar15 + 2) = 1;
            uVar7 = uVar7 & 0xffffffff;
          }
LAB_1425bbcc9:
          local_4c._1_1_ = (undefined1)(uVar10 >> 8);
          iVar13 = (int)uVar7;
          if (iVar11 <= iVar13) {
            lVar8 = *(longlong *)(param_1 + 8);
            cVar1 = *(char *)(lVar8 + 0x5b);
            *(char *)(lVar8 + 0x5b) = cVar1 + '\x01';
            *(undefined1 *)(lVar8 + 0x68 + (longlong)cVar1) = local_4c._1_1_;
            lVar8 = *(longlong *)(param_1 + 8);
            cVar1 = *(char *)(lVar8 + 0x5b);
            goto LAB_1425bbd89;
          }
          *(undefined1 *)(lVar14 + iVar13) = local_4c._1_1_;
          uVar9 = (longlong)iVar13 + 1;
          if (piVar18 == (int *)0x0) {
            if (iVar11 <= (int)uVar9) {
              piVar18 = (int *)0x0;
              goto LAB_1425bbdec;
            }
            uVar7 = (ulonglong)(iVar13 + 2);
            *(undefined1 *)(lVar14 + uVar9) = (undefined1)local_4c;
LAB_1425bbdd0:
            piVar18 = (int *)0x0;
          }
          else {
            *piVar18 = iVar16;
            if ((int)uVar9 < iVar11) {
              uVar7 = (ulonglong)(iVar13 + 2);
              *(undefined1 *)(lVar14 + uVar9) = (undefined1)local_4c;
              piVar18[1] = iVar16;
              piVar18 = piVar18 + 2;
            }
            else {
              piVar18 = piVar18 + 1;
LAB_1425bbdec:
              lVar8 = *(longlong *)(param_1 + 8);
              cVar1 = *(char *)(lVar8 + 0x5b);
              *(char *)(lVar8 + 0x5b) = cVar1 + '\x01';
              *(undefined1 *)(lVar8 + 0x68 + (longlong)cVar1) = (undefined1)local_4c;
              *param_2 = 0xf;
              uVar7 = uVar9;
            }
          }
        }
LAB_1425bbda2:
        lVar17 = lVar17 + 1;
        local_4c = 0xffff;
      } while (local_74 < iVar19);
      iVar16 = iVar16 + 1;
      iVar13 = (int)uVar7;
    }
  }
  else {
    iVar13 = 0;
    iVar16 = 0;
LAB_1425bba4a:
    uVar5 = 0;
    if (iVar16 < iVar19) {
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar16 * 2);
      uVar5 = 0xc;
      if ((uVar2 & 0xfc00) == 0xdc00) {
        uVar12 = (uint)uVar2 + *(int *)(*(longlong *)(param_1 + 8) + 0x54) * 0x400 + 0xfca02400;
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x54) = 0;
        uVar5 = 10;
        iVar16 = iVar16 + 1;
      }
    }
LAB_1425bba93:
    *param_2 = uVar5;
    *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar12;
  }
LAB_1425bbe28:
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + (longlong)iVar13;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)iVar16 * 2;
  *(byte *)((longlong)plVar15 + 0x12) = bVar20;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
code_r0x0001425bbb17:
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar13) = 0x7e;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *piVar18 = iVar16;
    piVar18 = piVar18 + 1;
  }
  uVar7 = (longlong)iVar13 + 1;
  if ((int)uVar7 < iVar11) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + uVar7) = 0x7e;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      *piVar18 = iVar16;
      piVar18 = piVar18 + 1;
    }
    uVar7 = (ulonglong)(iVar13 + 2);
  }
  else {
    lVar8 = *(longlong *)(param_1 + 8);
    cVar1 = *(char *)(lVar8 + 0x5b);
    *(char *)(lVar8 + 0x5b) = cVar1 + '\x01';
    *(undefined1 *)(lVar8 + 0x68 + (longlong)cVar1) = 0x7e;
    *param_2 = 0xf;
    uVar7 = uVar7 & 0xffffffff;
  }
  iVar13 = (int)uVar7;
  lVar17 = lVar17 + 1;
  if (local_58 <= lVar17) {
LAB_1425bbe23:
    iVar16 = (int)lVar17;
    bVar20 = local_75;
    goto LAB_1425bbe28;
  }
  goto LAB_1425bbafd;
}



// FUNCTION 1425bbed0 FUN_1425bbed0 body=105 status=ok
// SIG undefined FUN_1425bbed0(void)

void FUN_1425bbed0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined2 local_c;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(lVar2 + 0x12) == '\0') {
    puVar3 = &local_c;
  }
  else {
    local_c = 0x7d7e;
    puVar3 = &local_a;
    *(undefined1 *)(lVar2 + 0x12) = 0;
  }
  *(undefined1 *)puVar3 = **(undefined1 **)(lVar1 + 0x28);
  local_18 = param_3;
  FUN_142635c30(param_1,&local_c,((int)puVar3 - (int)&local_c) + 1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1425bbf40 FUN_1425bbf40 body=140 status=ok
// SIG undefined FUN_1425bbf40(void)

void FUN_1425bbf40(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*param_4 < 1) {
    if (*param_3 == 0) {
      *param_3 = 0x260;
    }
    else {
      puVar1 = *(undefined4 **)(param_1 + 0x10);
      *(undefined8 *)(param_2 + 600) = *(undefined8 *)(puVar1 + 4);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(param_2 + 0x248) = *puVar1;
      *(undefined4 *)(param_2 + 0x24c) = uVar2;
      *(undefined4 *)(param_2 + 0x250) = uVar3;
      *(undefined4 *)(param_2 + 0x254) = uVar4;
      *(longlong *)(param_2 + 0x10) = param_2 + 0x248;
      *(undefined1 *)(param_2 + 0x3e) = 1;
      local_14 = 0x128;
      uVar5 = FUN_1424e0e10(**(undefined8 **)(param_1 + 0x10),param_2 + 0x120,&local_14);
      **(undefined8 **)(param_2 + 0x10) = uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1425bbfe0 FUN_1425bbfe0 body=79 status=ok
// SIG undefined FUN_1425bbfe0(void)

void FUN_1425bbfe0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  (*(code *)param_2[2])(*param_2,0,0x7f);
  FUN_142583010(*(undefined8 *)(**(longlong **)(param_1 + 0x10) + 0x30),param_2,param_3,5,param_4);
  return;
}



// FUNCTION 1425bc030 FUN_1425bc030 body=216 status=ok
// SIG undefined FUN_1425bc030(void)

void FUN_1425bc030(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_2 + 8) == '\0') {
    pcVar1 = *(char **)(param_2 + 0x20);
    lVar3 = FUN_1424da030();
    *(longlong *)(param_1 + 0x10) = lVar3;
    if (lVar3 == 0) {
      *param_3 = 7;
    }
    else {
      if (((pcVar1 == (char *)0x0) || (*pcVar1 != 'j')) || (pcVar1[1] != 'a')) {
        bVar4 = false;
      }
      else {
        bVar4 = pcVar1[2] == '_' || pcVar1[2] == '\0';
      }
      *(bool *)(lVar3 + 0x4a) = bVar4;
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      puVar2[2] = 0x304000000900;
      puVar2[3] = 0xff00000030a0;
      *puVar2 = 0xc000000080;
      puVar2[1] = 0x60000000400;
      *(undefined1 *)(puVar2 + 8) = 1;
      *(undefined4 *)((longlong)puVar2 + 0x41) = 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
      puVar2[6] = 0x304000000900;
      puVar2[7] = 0xff00000030a0;
      puVar2[4] = 0xc000000080;
      puVar2[5] = 0x60000000400;
      *(undefined2 *)(puVar2 + 9) = 1;
      *(undefined1 *)((longlong)puVar2 + 0x4b) = 0;
      uVar5 = 0x106050402030007;
      if (*(char *)((longlong)puVar2 + 0x4a) == '\x01') {
        uVar5 = 0x605070001040203;
      }
      *(undefined8 *)((longlong)puVar2 + 0x4c) = uVar5;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    *(undefined2 *)(param_1 + 0x88) = 0xfffd;
    *(undefined1 *)(param_1 + 0x59) = 0xff;
  }
  return;
}



// FUNCTION 1425bc110 FUN_1425bc110 body=42 status=ok
// SIG undefined FUN_1425bc110(void)

void FUN_1425bc110(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x3e) == '\0') {
      FUN_1424da110();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1425bc1c0 FUN_1425bc1c0 body=2080 status=ok
// SIG undefined FUN_1425bc1c0(void)

void FUN_1425bc1c0(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  ushort *puVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  char cVar19;
  undefined1 uVar20;
  byte bVar21;
  byte local_77;
  char local_76;
  byte local_75;
  uint local_74;
  
  lVar2 = *(longlong *)(param_1 + 8);
  pbVar6 = *(byte **)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  pbVar8 = *(byte **)(param_1 + 0x18);
  puVar10 = *(ushort **)(param_1 + 0x20);
  puVar4 = *(ushort **)(param_1 + 0x28);
  cVar11 = *(char *)(lVar3 + 0x40);
  bVar21 = *(byte *)(lVar3 + 0x41);
  local_76 = *(char *)(lVar3 + 0x42);
  local_75 = *(byte *)(lVar3 + 0x43);
  local_74 = (uint)local_75;
  local_77 = *(byte *)(lVar3 + 0x44);
  if (cVar11 == '\0') {
    pbVar7 = pbVar6;
    if (bVar21 != 0) goto LAB_1425bc81f;
    goto LAB_1425bc7b5;
  }
  uVar17 = (uint)local_77;
  pbVar7 = pbVar6;
  uVar16 = (uint)local_77;
  if (bVar21 != 0) goto LAB_1425bc314;
LAB_1425bc24e:
  uVar17 = uVar16;
  local_75 = (byte)local_74;
  if ((pbVar6 < pbVar8) && (puVar10 < puVar4)) {
    while( true ) {
      bVar21 = *pbVar6;
      uVar16 = (uint)bVar21;
      if (bVar21 < 0x20) break;
      pbVar6 = pbVar6 + 1;
      if (((char)bVar21 < '\0') &&
         (uVar16 = (bVar21 & 0x7f) + *(int *)(lVar3 + (longlong)(char)local_75 * 4), 0xffff < uVar16
         )) {
        *puVar10 = (short)(uVar16 >> 10) + 0xd7c0;
        uVar15 = (ushort)uVar16 & 0x3ff | 0xdc00;
        if (puVar4 <= puVar10 + 1) {
          *(ushort *)(lVar2 + 0x90) = uVar15;
          *(undefined1 *)(lVar2 + 0x5d) = 1;
          *param_2 = 0xf;
          pbVar8 = pbVar6;
          puVar10 = puVar10 + 1;
          bVar18 = 0;
          cVar19 = local_76;
          local_77 = (byte)uVar17;
          local_74._0_1_ = local_75;
          goto LAB_1425bc91a;
        }
        puVar10[1] = uVar15;
        puVar10 = puVar10 + 2;
      }
      else {
        *puVar10 = (ushort)uVar16;
        puVar10 = puVar10 + 1;
      }
      if ((pbVar8 <= pbVar6) || (puVar4 <= puVar10)) break;
    }
  }
  bVar21 = 0;
  pbVar7 = pbVar6;
LAB_1425bc314:
  bVar14 = (byte)uVar17;
  bVar18 = bVar21;
  cVar19 = local_76;
  local_77 = bVar14;
  if (pbVar7 < pbVar8) {
    lVar9 = (longlong)pbVar8 - (longlong)pbVar7;
    local_74 = (uint)local_75;
    pbVar5 = pbVar7;
LAB_1425bc391:
    pbVar6 = pbVar5 + 1;
    if (puVar4 <= puVar10) {
      *param_2 = 0xf;
      local_74._0_1_ = local_75;
      pbVar8 = pbVar7;
      bVar18 = bVar21;
      cVar19 = local_76;
      local_77 = bVar14;
      goto LAB_1425bc91a;
    }
    if (6 < bVar18) goto LAB_1425bc385;
    bVar1 = *pbVar5;
    uVar15 = (ushort)bVar1;
    uVar20 = 2;
    uVar16 = (uint)bVar1;
    pbVar5 = (byte *)(lVar2 + 0x42);
    switch(bVar18) {
    case 0:
      if ((0x2601U >> (bVar1 & 0x1f) & 1) != 0) {
LAB_1425bc50d:
        *puVar10 = uVar15;
        goto LAB_1425bc522;
      }
      pbVar5 = (byte *)(lVar2 + 0x41);
      if (0xf < bVar1) {
        if (bVar1 < 0x18) {
          local_74 = (uint)(byte)(bVar1 - 0x10);
          uVar16 = (uint)local_77;
          local_76 = cVar19;
          goto LAB_1425bc24e;
        }
        local_74 = bVar1 - 0x18;
        bVar18 = 6;
LAB_1425bc440:
        uVar20 = 1;
        break;
      }
      if (bVar1 < 9) {
        cVar19 = bVar1 - 1;
        bVar18 = 3;
        goto LAB_1425bc440;
      }
      if (bVar1 == 0xb) {
        bVar18 = 4;
        goto LAB_1425bc440;
      }
      if (uVar16 == 0xe) {
        uVar20 = 1;
        bVar18 = 1;
        break;
      }
      local_76 = cVar19;
      if (uVar16 == 0xf) {
LAB_1425bc7b5:
        pbVar7 = pbVar6;
        if ((pbVar6 + 1 < pbVar8) && (puVar10 < puVar4)) {
          bVar21 = 0;
          do {
            pbVar7 = pbVar6;
            if (0xec < (byte)(*pbVar6 + 0xd)) goto LAB_1425bc818;
            *puVar10 = CONCAT11(*pbVar6,pbVar6[1]);
            puVar10 = puVar10 + 1;
            pbVar7 = pbVar6 + 2;
          } while ((pbVar6 + 3 < pbVar8) && (pbVar6 = pbVar7, puVar10 < puVar4));
        }
        else {
LAB_1425bc818:
          bVar21 = 0;
        }
LAB_1425bc81f:
        cVar19 = local_76;
        if (pbVar7 < pbVar8) {
          lVar9 = (longlong)pbVar8 - (longlong)pbVar7;
          uVar17 = (uint)local_77;
          bVar18 = bVar21;
          pbVar5 = pbVar7;
          do {
            pbVar6 = pbVar5 + 1;
            if (puVar4 <= puVar10) {
              *param_2 = 0xf;
              break;
            }
            bVar14 = *pbVar5;
            uVar13 = (uint)bVar14;
            if (bVar18 == 0) {
              if ((byte)(uVar13 + 0x20) < 0x13) {
                if (bVar14 < 0xe8) {
                  cVar11 = '\x01';
                  uVar16 = uVar17;
                  local_74 = uVar13 + 0x20;
                  goto LAB_1425bc24e;
                }
                if (bVar14 < 0xf0) {
                  local_74._0_1_ = bVar14 + 0x18;
                  bVar21 = 6;
                }
                else {
                  if (bVar14 == 0xf0) {
                    *(undefined1 *)(lVar2 + 0x41) = 0xf0;
                    uVar20 = 1;
                    bVar18 = 1;
                    goto LAB_1425bc85a;
                  }
                  if (bVar14 != 0xf1) {
                    *param_2 = 0xc;
                    *(byte *)(lVar2 + 0x41) = bVar14;
                    *(undefined1 *)(lVar2 + 0x40) = 1;
                    cVar11 = '\0';
                    pbVar8 = pbVar6;
                    bVar18 = 0;
                    local_77 = (byte)uVar17;
                    goto LAB_1425bc91a;
                  }
                  bVar21 = 4;
                }
                *(byte *)(lVar2 + 0x41) = bVar14;
                *(undefined1 *)(lVar2 + 0x40) = 1;
                cVar11 = '\x01';
                pbVar7 = pbVar6;
                local_75 = (byte)local_74;
                goto LAB_1425bc314;
              }
              *(byte *)(lVar2 + 0x41) = bVar14;
              bVar18 = 2;
              uVar20 = 1;
              uVar17 = uVar13;
LAB_1425bc85a:
              *(undefined1 *)(lVar2 + 0x40) = uVar20;
            }
            else {
              if (bVar18 == 1) {
                *(byte *)(lVar2 + 0x42) = bVar14;
                uVar20 = 2;
                bVar18 = 2;
                uVar17 = uVar13;
                goto LAB_1425bc85a;
              }
              if (bVar18 == 2) goto LAB_1425bc970;
            }
            lVar9 = lVar9 + -1;
            pbVar5 = pbVar6;
            if (lVar9 == 0) {
              cVar11 = '\0';
              local_77 = (byte)uVar17;
              goto LAB_1425bc91a;
            }
          } while( true );
        }
        cVar11 = '\0';
        pbVar8 = pbVar7;
        bVar18 = bVar21;
        goto LAB_1425bc91a;
      }
      *param_2 = 0xc;
      *(byte *)(lVar2 + 0x41) = bVar1;
      *(undefined1 *)(lVar2 + 0x40) = 1;
      bVar18 = 0;
      pbVar8 = pbVar6;
LAB_1425bc91a:
      if ((*param_2 < 1) || (*param_2 == 0xf)) {
        if (bVar18 == 0) {
          *(undefined1 *)(lVar2 + 0x40) = 0;
          bVar18 = 0;
        }
      }
      else {
        bVar18 = 0;
      }
      *(char *)(lVar3 + 0x40) = cVar11;
      *(byte *)(lVar3 + 0x41) = bVar18;
      *(char *)(lVar3 + 0x42) = cVar19;
      *(byte *)(lVar3 + 0x43) = (byte)local_74;
      *(byte *)(lVar3 + 0x44) = local_77;
      *(byte **)(param_1 + 0x10) = pbVar8;
      *(ushort **)(param_1 + 0x20) = puVar10;
      return;
    case 1:
      bVar18 = 2;
      local_77 = bVar1;
      break;
    case 2:
      *puVar10 = CONCAT11(local_77,bVar1);
      puVar10 = puVar10 + 1;
      uVar16 = (uint)local_77;
      local_76 = cVar19;
      goto LAB_1425bc24e;
    case 3:
      if (-1 < (char)bVar1) {
        uVar15 = (ushort)bVar1 + (short)*(undefined4 *)(&DAT_149c404e0 + (longlong)cVar19 * 4);
        goto LAB_1425bc50d;
      }
      uVar16 = (uVar16 & 0x7f) + *(int *)(lVar3 + (longlong)cVar19 * 4);
      if (0xffff < uVar16) {
        *puVar10 = (short)(uVar16 >> 10) + 0xd7c0;
        uVar15 = (ushort)uVar16 & 0x3ff | 0xdc00;
        if (puVar10 + 1 < puVar4) {
          puVar10[1] = uVar15;
          puVar10 = puVar10 + 2;
          uVar16 = (uint)local_77;
          local_76 = cVar19;
          goto LAB_1425bc24e;
        }
        *(ushort *)(lVar2 + 0x90) = uVar15;
        *(undefined1 *)(lVar2 + 0x5d) = 1;
        *param_2 = 0xf;
        bVar18 = 3;
        pbVar8 = pbVar6;
        puVar10 = puVar10 + 1;
        goto LAB_1425bc91a;
      }
      *puVar10 = (ushort)uVar16;
LAB_1425bc522:
      puVar10 = puVar10 + 1;
      uVar16 = (uint)local_77;
      local_76 = cVar19;
      goto LAB_1425bc24e;
    case 4:
      local_74 = (uint)(bVar1 >> 5);
      bVar18 = 5;
      local_77 = bVar1 & 0x1f;
      break;
    case 5:
      *(uint *)(lVar3 + (longlong)(char)(byte)local_74 * 4) =
           (uint)local_77 * 0x8000 + uVar16 * 0x80 + 0x10000;
      uVar16 = (uint)local_77;
      local_76 = cVar19;
      goto LAB_1425bc24e;
    case 6:
      if (bVar1 == 0) {
        *(undefined1 *)(lVar2 + 0x42) = 0;
        *(undefined1 *)(lVar2 + 0x40) = 2;
        bVar18 = 6;
        pbVar8 = pbVar6;
        goto LAB_1425bc91a;
      }
      if (bVar1 < 0x68) {
        iVar12 = uVar16 << 7;
      }
      else if ((byte)(bVar1 + 0x98) < 0x40) {
        iVar12 = uVar16 * 0x80 + 0xac00;
      }
      else {
        if (bVar1 < 0xf9) {
          *(byte *)(lVar2 + 0x42) = bVar1;
          *(undefined1 *)(lVar2 + 0x40) = 2;
          bVar18 = 6;
          pbVar8 = pbVar6;
          goto LAB_1425bc91a;
        }
        iVar12 = *(int *)(&DAT_149c40500 + (ulonglong)(uVar16 - 0xf9) * 4);
      }
      *(int *)(lVar3 + (longlong)(char)(byte)local_74 * 4) = iVar12;
      uVar16 = (uint)local_77;
      local_76 = cVar19;
      goto LAB_1425bc24e;
    }
    *pbVar5 = bVar1;
    *(undefined1 *)(lVar2 + 0x40) = uVar20;
LAB_1425bc385:
    lVar9 = lVar9 + -1;
    pbVar5 = pbVar6;
    if (lVar9 == 0) goto LAB_1425bc91a;
    goto LAB_1425bc391;
  }
  local_74._0_1_ = local_75;
  pbVar8 = pbVar7;
  goto LAB_1425bc91a;
LAB_1425bc970:
  *puVar10 = (ushort)bVar14 | (ushort)(uVar17 << 8);
  puVar10 = puVar10 + 1;
  local_77 = (byte)uVar17;
  goto LAB_1425bc7b5;
}



// FUNCTION 1425bca20 FUN_1425bca20 body=2626 status=ok
// SIG undefined FUN_1425bca20(void)

void FUN_1425bca20(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  ushort *puVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  undefined1 uVar13;
  byte bVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte bVar19;
  ushort uVar20;
  int *piVar21;
  ushort *puVar22;
  ulonglong uVar23;
  byte bVar24;
  byte bVar25;
  char cVar26;
  int iVar27;
  ulonglong uVar28;
  char local_97;
  byte local_96;
  byte local_95;
  
  lVar2 = *(longlong *)(param_1 + 8);
  pbVar15 = *(byte **)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  pbVar4 = *(byte **)(param_1 + 0x18);
  puVar22 = *(ushort **)(param_1 + 0x20);
  puVar5 = *(ushort **)(param_1 + 0x28);
  piVar21 = *(int **)(param_1 + 0x30);
  cVar26 = *(char *)(lVar3 + 0x40);
  bVar24 = *(byte *)(lVar3 + 0x41);
  local_97 = *(char *)(lVar3 + 0x42);
  bVar7 = *(byte *)(lVar3 + 0x43);
  local_96 = *(byte *)(lVar3 + 0x44);
  bVar25 = bVar7;
  if (cVar26 == '\0') {
    uVar28 = 0xffffffff;
    uVar23 = 0;
    iVar9 = 0;
    pbVar17 = pbVar15;
    if (bVar24 != 0) goto LAB_1425bd260;
    goto LAB_1425bd18c;
  }
  uVar28 = 0xffffffff;
  uVar23 = 0;
  local_95 = local_96;
  if (bVar24 != 0) goto LAB_1425bcbf2;
LAB_1425bcaed:
  if ((pbVar15 < pbVar4) && (puVar22 < puVar5)) {
    while( true ) {
      bVar24 = *pbVar15;
      uVar11 = (uint)bVar24;
      if (bVar24 < 0x20) break;
      pbVar15 = pbVar15 + 1;
      iVar9 = (int)uVar23;
      if (((char)bVar24 < '\0') &&
         (uVar11 = (bVar24 & 0x7f) + *(int *)(lVar3 + (longlong)(char)bVar7 * 4), 0xffff < uVar11))
      {
        *puVar22 = (short)(uVar11 >> 10) + 0xd7c0;
        if (puVar5 <= puVar22 + 1) {
          if (piVar21 == (int *)0x0) {
            piVar21 = (int *)0x0;
          }
          else {
            *piVar21 = iVar9;
            piVar21 = piVar21 + 1;
          }
          *(ushort *)(lVar2 + 0x90) = (ushort)uVar11 & 0x3ff | 0xdc00;
          *(undefined1 *)(lVar2 + 0x5d) = 1;
          *param_2 = 0xf;
          puVar22 = puVar22 + 1;
          pbVar17 = pbVar15;
          bVar19 = 0;
          bVar14 = local_96;
          cVar8 = local_97;
          goto LAB_1425bd385;
        }
        puVar22[1] = (ushort)uVar11 & 0x3ff | 0xdc00;
        puVar22 = puVar22 + 2;
        if (piVar21 == (int *)0x0) goto LAB_1425bcbb0;
        *piVar21 = iVar9;
        lVar10 = 2;
        piVar12 = piVar21 + 1;
LAB_1425bcb59:
        piVar21 = piVar21 + lVar10;
        *piVar12 = iVar9;
      }
      else {
        *puVar22 = (ushort)uVar11;
        puVar22 = puVar22 + 1;
        lVar10 = 1;
        piVar12 = piVar21;
        if (piVar21 != (int *)0x0) goto LAB_1425bcb59;
LAB_1425bcbb0:
        piVar21 = (int *)0x0;
      }
      uVar23 = (ulonglong)(iVar9 + 1);
      if ((pbVar4 <= pbVar15) || (puVar5 <= puVar22)) break;
    }
  }
  local_95 = local_96;
  bVar24 = 0;
  uVar28 = uVar23 & 0xffffffff;
  bVar25 = bVar7;
LAB_1425bcbf2:
  pbVar17 = pbVar15;
  bVar19 = bVar24;
  bVar14 = local_95;
  cVar8 = local_97;
  bVar7 = bVar25;
  if (pbVar4 <= pbVar15) {
LAB_1425bd385:
    if ((*param_2 < 1) || (*param_2 == 0xf)) {
      if (bVar19 == 0) {
        *(undefined1 *)(lVar2 + 0x40) = 0;
        bVar19 = 0;
      }
    }
    else {
      bVar19 = 0;
    }
    *(char *)(lVar3 + 0x40) = cVar26;
    *(byte *)(lVar3 + 0x41) = bVar19;
    *(char *)(lVar3 + 0x42) = cVar8;
    *(byte *)(lVar3 + 0x43) = bVar7;
    *(byte *)(lVar3 + 0x44) = bVar14;
    *(byte **)(param_1 + 0x10) = pbVar17;
    *(ushort **)(param_1 + 0x20) = puVar22;
    *(int **)(param_1 + 0x30) = piVar21;
    return;
  }
  lVar10 = 0;
  local_96 = local_95;
  pbVar18 = pbVar15;
LAB_1425bcc7a:
  pbVar16 = pbVar18 + 1;
  if (puVar5 <= puVar22) {
    *param_2 = 0xf;
    pbVar17 = pbVar15;
    bVar19 = bVar24;
    bVar14 = local_95;
    cVar8 = local_97;
    bVar7 = bVar25;
    goto LAB_1425bd385;
  }
  if (6 < bVar19) goto LAB_1425bcc6b;
  bVar14 = *pbVar18;
  uVar11 = (uint)bVar14;
  uVar13 = 2;
  iVar9 = (int)uVar23;
  iVar27 = (int)uVar28;
  pbVar17 = pbVar16;
  pbVar18 = (byte *)(lVar2 + 0x42);
  switch(bVar19) {
  case 0:
    if ((0x2601U >> (bVar14 & 0x1f) & 1) != 0) {
      *puVar22 = (ushort)bVar14;
      uVar23 = (ulonglong)(iVar9 + 1) - lVar10;
      if (piVar21 == (int *)0x0) {
        piVar21 = (int *)0x0;
      }
      else {
        *piVar21 = iVar27;
        piVar21 = piVar21 + 1;
      }
      goto LAB_1425bcf96;
    }
    pbVar18 = (byte *)(lVar2 + 0x41);
    if (0xf < bVar14) {
      if (bVar14 < 0x18) {
        bVar7 = bVar14 - 0x10;
        goto LAB_1425bcf07;
      }
      bVar7 = bVar14 - 0x18;
      bVar19 = 6;
LAB_1425bcd1d:
      uVar13 = 1;
      break;
    }
    if (bVar14 < 9) {
      cVar8 = bVar14 - 1;
      bVar19 = 3;
      goto LAB_1425bcd1d;
    }
    if (bVar14 == 0xb) {
      bVar19 = 4;
      goto LAB_1425bcd1d;
    }
    if (uVar11 == 0xe) {
      uVar13 = 1;
      bVar19 = 1;
      break;
    }
    if (uVar11 == 0xf) {
      uVar23 = (ulonglong)((iVar9 - (int)lVar10) + 1);
      pbVar15 = pbVar16;
      local_97 = cVar8;
      bVar25 = bVar7;
LAB_1425bd18c:
      bVar24 = 0;
      iVar9 = (int)uVar23;
      if ((pbVar15 + 1 < pbVar4) && (puVar22 < puVar5)) {
        uVar28 = uVar23 & 0xffffffff;
        lVar10 = 0;
        do {
          if (0xec < (byte)(pbVar15[lVar10] + 0xd)) {
            puVar22 = (ushort *)((longlong)puVar22 + lVar10);
            iVar9 = iVar9 + (int)lVar10;
            bVar24 = 0;
            pbVar17 = pbVar15 + lVar10;
            goto LAB_1425bd260;
          }
          *(ushort *)((longlong)puVar22 + lVar10) = CONCAT11(pbVar15[lVar10],pbVar15[lVar10 + 1]);
          if (piVar21 == (int *)0x0) {
            piVar21 = (int *)0x0;
          }
          else {
            *piVar21 = (int)uVar28;
            piVar21 = piVar21 + 1;
          }
          lVar1 = lVar10 + 2;
        } while ((pbVar15 + lVar10 + 3 < pbVar4) &&
                (uVar28 = (uVar23 & 0xffffffff) + lVar10, lVar6 = lVar10 + 2, lVar10 = lVar1,
                (ushort *)((longlong)puVar22 + lVar6) < puVar5));
        puVar22 = (ushort *)((longlong)puVar22 + lVar1);
        uVar28 = (ulonglong)((iVar9 + (int)lVar1) - 2);
        iVar9 = iVar9 + (int)lVar1;
        bVar24 = 0;
        pbVar17 = pbVar15 + lVar1;
      }
      else {
        uVar28 = uVar23 & 0xffffffff;
        pbVar17 = pbVar15;
      }
LAB_1425bd260:
      pbVar18 = pbVar17;
      bVar19 = bVar24;
      local_95 = local_96;
      cVar8 = local_97;
      if (pbVar17 < pbVar4) {
        lVar10 = 0;
        pbVar16 = pbVar17;
        do {
          pbVar15 = pbVar16 + 1;
          if (puVar5 <= puVar22) {
            *param_2 = 0xf;
            cVar26 = '\0';
            bVar19 = bVar24;
            bVar14 = local_96;
            bVar7 = bVar25;
            goto LAB_1425bd385;
          }
          bVar14 = *pbVar16;
          if (bVar19 == 0) {
            bVar7 = bVar14 + 0x20;
            if (bVar7 < 0x13) {
              if (bVar14 < 0xe8) {
                uVar23 = (ulonglong)((iVar9 - (int)lVar10) + 1);
                cVar26 = '\x01';
                local_96 = local_95;
                goto LAB_1425bcaed;
              }
              if (bVar14 < 0xf0) {
                bVar25 = bVar14 + 0x18;
                bVar24 = 6;
              }
              else {
                if (bVar14 == 0xf0) {
                  *(undefined1 *)(lVar2 + 0x41) = 0xf0;
                  uVar13 = 1;
                  bVar19 = 1;
                  goto LAB_1425bd29e;
                }
                if (bVar14 != 0xf1) {
                  *param_2 = 0xc;
                  *(byte *)(lVar2 + 0x41) = bVar14;
                  *(undefined1 *)(lVar2 + 0x40) = 1;
                  pbVar18 = pbVar15;
                  bVar19 = 0;
                  break;
                }
                bVar24 = 4;
              }
              *(byte *)(lVar2 + 0x41) = bVar14;
              *(undefined1 *)(lVar2 + 0x40) = 1;
              uVar23 = (ulonglong)((iVar9 - (int)lVar10) + 1);
              cVar26 = '\x01';
              goto LAB_1425bcbf2;
            }
            *(byte *)(lVar2 + 0x41) = bVar14;
            bVar19 = 2;
            uVar13 = 1;
            local_95 = bVar14;
LAB_1425bd29e:
            *(undefined1 *)(lVar2 + 0x40) = uVar13;
          }
          else {
            if (bVar19 == 1) {
              *(byte *)(lVar2 + 0x42) = bVar14;
              uVar13 = 2;
              bVar19 = 2;
              local_95 = bVar14;
              goto LAB_1425bd29e;
            }
            if (bVar19 == 2) goto LAB_1425bd3da;
          }
          lVar10 = lVar10 + -1;
          pbVar18 = pbVar4;
          pbVar16 = pbVar15;
          if ((longlong)pbVar17 - (longlong)pbVar4 == lVar10) break;
        } while( true );
      }
      cVar26 = '\0';
      pbVar17 = pbVar18;
      bVar14 = local_95;
      bVar7 = bVar25;
      goto LAB_1425bd385;
    }
    *param_2 = 0xc;
    *(byte *)(lVar2 + 0x41) = bVar14;
    *(undefined1 *)(lVar2 + 0x40) = 1;
    bVar19 = 0;
    bVar14 = local_96;
    goto LAB_1425bd385;
  case 1:
    bVar19 = 2;
    local_96 = bVar14;
    break;
  case 2:
    *puVar22 = CONCAT11(local_96,bVar14);
    uVar23 = (ulonglong)(iVar9 + 1) - lVar10;
    if (piVar21 == (int *)0x0) {
      piVar21 = (int *)0x0;
    }
    else {
      *piVar21 = iVar27;
      piVar21 = piVar21 + 1;
    }
LAB_1425bcf96:
    puVar22 = puVar22 + 1;
    pbVar15 = pbVar16;
    local_97 = cVar8;
    goto LAB_1425bcaed;
  case 3:
    uVar23 = (ulonglong)(iVar9 + 1) - lVar10;
    piVar12 = piVar21;
    if ((char)bVar14 < '\0') {
      uVar11 = (uVar11 & 0x7f) + *(int *)(lVar3 + (longlong)cVar8 * 4);
      uVar20 = (ushort)uVar11;
      if (uVar11 < 0x10000) {
        *puVar22 = uVar20;
        puVar22 = puVar22 + 1;
        lVar10 = 1;
        if (piVar21 == (int *)0x0) {
LAB_1425bd0b7:
          piVar21 = (int *)0x0;
          pbVar15 = pbVar16;
          local_97 = cVar8;
          goto LAB_1425bcaed;
        }
      }
      else {
        *puVar22 = (short)(uVar11 >> 10) + 0xd7c0;
        if (puVar5 <= puVar22 + 1) {
          if (piVar21 == (int *)0x0) {
            piVar21 = (int *)0x0;
          }
          else {
            *piVar21 = iVar27;
            piVar21 = piVar21 + 1;
          }
          *(ushort *)(lVar2 + 0x90) = uVar20 & 0x3ff | 0xdc00;
          *(undefined1 *)(lVar2 + 0x5d) = 1;
          *param_2 = 0xf;
          puVar22 = puVar22 + 1;
          bVar19 = 3;
          bVar14 = local_96;
          goto LAB_1425bd385;
        }
        puVar22[1] = uVar20 & 0x3ff | 0xdc00;
        puVar22 = puVar22 + 2;
        if (piVar21 == (int *)0x0) goto LAB_1425bd0b7;
        *piVar21 = iVar27;
        lVar10 = 2;
        piVar12 = piVar21 + 1;
      }
    }
    else {
      *puVar22 = (ushort)bVar14 + (short)*(undefined4 *)(&DAT_149c404e0 + (longlong)cVar8 * 4);
      puVar22 = puVar22 + 1;
      lVar10 = 1;
      if (piVar21 == (int *)0x0) {
        piVar21 = (int *)0x0;
        pbVar15 = pbVar16;
        local_97 = cVar8;
        goto LAB_1425bcaed;
      }
    }
    piVar21 = piVar21 + lVar10;
    *piVar12 = iVar27;
    pbVar15 = pbVar16;
    local_97 = cVar8;
    goto LAB_1425bcaed;
  case 4:
    bVar7 = bVar14 >> 5;
    bVar19 = 5;
    local_96 = bVar14 & 0x1f;
    break;
  case 5:
    *(uint *)(lVar3 + (longlong)(char)bVar7 * 4) = (uint)local_96 * 0x8000 + uVar11 * 0x80 + 0x10000
    ;
LAB_1425bcf07:
    uVar23 = (ulonglong)((iVar9 - (int)lVar10) + 1);
    pbVar15 = pbVar16;
    local_97 = cVar8;
    goto LAB_1425bcaed;
  case 6:
    if (bVar14 == 0) {
      *(undefined1 *)(lVar2 + 0x42) = 0;
      *(undefined1 *)(lVar2 + 0x40) = 2;
      bVar19 = 6;
      bVar14 = local_96;
      goto LAB_1425bd385;
    }
    uVar23 = (ulonglong)(iVar9 + 1) - lVar10;
    if (bVar14 < 0x68) {
      iVar9 = uVar11 << 7;
    }
    else if ((byte)(bVar14 + 0x98) < 0x40) {
      iVar9 = uVar11 * 0x80 + 0xac00;
    }
    else {
      if (bVar14 < 0xf9) {
        *(byte *)(lVar2 + 0x42) = bVar14;
        *(undefined1 *)(lVar2 + 0x40) = 2;
        bVar19 = 6;
        bVar14 = local_96;
        goto LAB_1425bd385;
      }
      iVar9 = *(int *)(&DAT_149c40500 + (ulonglong)(uVar11 - 0xf9) * 4);
    }
    *(int *)(lVar3 + (longlong)(char)bVar7 * 4) = iVar9;
    pbVar15 = pbVar16;
    local_97 = cVar8;
    goto LAB_1425bcaed;
  }
  *pbVar18 = bVar14;
  *(undefined1 *)(lVar2 + 0x40) = uVar13;
LAB_1425bcc6b:
  lVar10 = lVar10 + -1;
  pbVar17 = pbVar4;
  bVar14 = local_96;
  pbVar18 = pbVar16;
  if ((longlong)pbVar15 - (longlong)pbVar4 == lVar10) goto LAB_1425bd385;
  goto LAB_1425bcc7a;
LAB_1425bd3da:
  *puVar22 = CONCAT11(local_95,bVar14);
  puVar22 = puVar22 + 1;
  uVar23 = (ulonglong)(iVar9 + 1) - lVar10;
  local_96 = local_95;
  if (piVar21 == (int *)0x0) {
    piVar21 = (int *)0x0;
  }
  else {
    *piVar21 = (int)uVar28;
    piVar21 = piVar21 + 1;
  }
  goto LAB_1425bd18c;
}



// FUNCTION 1425bd490 FUN_1425bd490 body=4374 status=ok
// SIG undefined FUN_1425bd490(void)

void FUN_1425bd490(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  uint3 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  char cVar16;
  char cVar17;
  uint *puVar18;
  uint *puVar19;
  undefined7 uVar20;
  ushort *puVar21;
  ushort *puVar22;
  uint *puVar23;
  uint uVar24;
  uint *puVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  undefined1 auStack_a8 [44];
  uint local_7c;
  uint *local_78;
  longlong local_70;
  longlong local_68;
  uint *local_60;
  undefined4 *local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(local_70 + 0x10);
  puVar18 = *(uint **)(param_1 + 0x18);
  puVar21 = *(ushort **)(param_1 + 0x20);
  uVar27 = *(int *)(param_1 + 0x28) - (int)puVar21;
  cVar16 = *(char *)(lVar2 + 0x48);
  uVar8 = *(uint *)(lVar2 + 0x20 + (longlong)(ulonglong)*(byte *)(lVar2 + 0x49) * 4);
  uVar31 = *(uint *)(local_70 + 0x54);
  puVar23 = (uint *)0x0;
  local_78 = (uint *)(ulonglong)*(byte *)(lVar2 + 0x49);
  puVar15 = *(uint **)(param_1 + 0x10);
  local_68 = param_1;
  local_60 = puVar18;
  local_58 = param_2;
LAB_1425bd4ff:
  iVar9 = 7;
  puVar25 = local_78;
  puVar32 = puVar15;
  uVar12 = uVar8;
  if (cVar16 != '\0') {
    uVar7 = uVar31;
    if ((int)uVar27 < 1 || uVar31 == 0) goto LAB_1425be0e0;
LAB_1425bd51e:
    uVar31 = uVar7;
    local_7c = uVar8;
    if (local_60 <= puVar32) goto LAB_1425be583;
    uVar1 = (ushort)*puVar32;
    puVar18 = (uint *)(ulonglong)uVar1;
    if ((uVar1 & 0xfc00) != 0xdc00) goto LAB_1425be449;
    puVar32 = (uint *)((longlong)puVar32 + 2);
    uVar7 = uVar31 * 0x400 + (uint)uVar1 + 0xfca02400;
    uVar24 = uVar7 - uVar8;
    if (uVar24 < 0x80) {
LAB_1425bd567:
      *(byte *)puVar21 = (byte)uVar24 | 0x80;
      do {
        puVar21 = (ushort *)((longlong)puVar21 + 1);
        uVar27 = uVar27 - 1;
        uVar31 = 0;
LAB_1425be0e0:
        if (local_60 <= puVar32) goto LAB_1425be583;
        if ((int)uVar27 < 1) {
          uVar10 = 0xf;
          goto LAB_1425be581;
        }
        uVar1 = (ushort)*puVar32;
        uVar31 = (uint)uVar1;
        puVar32 = (uint *)((longlong)puVar32 + 2);
        if (0x5f < uVar1 - 0x20) {
          uVar29 = (uint)uVar1;
          uVar7 = (uint)uVar1;
          uVar28 = uVar27;
          if (0x1f < uVar1) goto LAB_1425be125;
          if ((0x2601U >> (uVar29 & 0x1f) & 1) == 0) {
            uVar31 = uVar7 | 0x100;
            goto LAB_1425be176;
          }
        }
        *(byte *)puVar21 = (byte)uVar1;
      } while( true );
    }
    uVar12 = *(uint *)(lVar2 + 0x20);
    uVar24 = uVar7 - uVar12;
    uVar28 = uVar27;
    if (0x7f < uVar24) {
      uVar12 = *(uint *)(lVar2 + 0x24);
      uVar4 = (uint3)(uVar24 >> 8);
      uVar24 = (uint)CONCAT71((uint7)uVar4,1);
      if (uVar7 - uVar12 < 0x80) goto LAB_1425bd6a0;
      uVar12 = *(uint *)(lVar2 + 0x28);
      uVar24 = CONCAT31(uVar4,2);
      if (uVar7 - uVar12 < 0x80) goto LAB_1425bd6a0;
      uVar12 = *(uint *)(lVar2 + 0x2c);
      uVar24 = (uint)CONCAT71((uint7)uVar4,3);
      if (uVar7 - uVar12 < 0x80) goto LAB_1425bd6a0;
      uVar12 = *(uint *)(lVar2 + 0x30);
      uVar24 = CONCAT31(uVar4,4);
      if (uVar7 - uVar12 < 0x80) goto LAB_1425bd6a0;
      uVar12 = *(uint *)(lVar2 + 0x34);
      uVar24 = (uint)CONCAT71((uint7)uVar4,5);
      if (uVar7 - uVar12 < 0x80) goto LAB_1425bd6a0;
      uVar12 = *(uint *)(lVar2 + 0x38);
      uVar24 = CONCAT31(uVar4,6);
      if (uVar7 - uVar12 < 0x80) goto LAB_1425bd6a0;
      uVar12 = *(uint *)(lVar2 + 0x3c);
      uVar24 = (uint)CONCAT71((uint7)uVar4,7);
      if (uVar7 - uVar12 < 0x80) goto LAB_1425bd6a0;
      iVar13 = uVar31 * 0x400 + (uint)uVar1;
      if (iVar13 + 0xfca02340U < 0x80) {
        uVar12 = 0xf9;
        local_4c = 0xc0;
      }
      else if (iVar13 + 0xfca021b0U < 0x80) {
        uVar12 = 0xfa;
        local_4c = 0x250;
      }
      else if (iVar13 + 0xfca02090U < 0x80) {
        uVar12 = 0xfb;
        local_4c = 0x370;
      }
      else if (iVar13 + 0xfca01ed0U < 0x80) {
        uVar12 = 0xfc;
        local_4c = 0x530;
      }
      else if (iVar13 + 0xfc9ff3c0U < 0x80) {
        uVar12 = 0xfd;
        local_4c = 0x3040;
      }
      else if (iVar13 + 0xfc9ff360U < 0x80) {
        uVar12 = 0xfe;
        local_4c = 0x30a0;
      }
      else if (iVar13 + 0xfc9f24a0U < 0x80) {
        uVar12 = 0xff;
        local_4c = 0xff60;
      }
      else {
        if (uVar7 < 0x80) {
LAB_1425bdf96:
          *(byte *)puVar21 = 0xf;
          puVar21 = (ushort *)((longlong)puVar21 + 1);
          uVar31 = uVar31 << 0x10 | (uint)uVar1;
          iVar13 = 4;
          cVar16 = '\0';
          uVar28 = uVar27 - 1;
          uVar12 = uVar8;
          goto LAB_1425bd984;
        }
        uVar12 = uVar7;
        if (((0x2fff < iVar13 + 0xfc9e5400U) && (0x33ff < uVar7)) &&
           ((uVar7 & 0xffffc000) != 0x10000)) {
          if ((uVar7 == 0xfeff) || (0x1fef < iVar13 + 0xfc9f4400U)) goto LAB_1425bdf96;
          uVar12 = iVar13 + 0xfc9f7800;
        }
        local_4c = uVar7 & 0x7fffff80;
        uVar12 = uVar12 >> 7;
      }
      bVar6 = *(byte *)(lVar2 + 0x4c + (longlong)*(char *)(lVar2 + 0x4b));
      puVar25 = (uint *)(ulonglong)bVar6;
      cVar17 = *(char *)(lVar2 + 0x4b) + '\x01';
      if (cVar17 == '\b') {
        cVar17 = '\0';
      }
      *(char *)(lVar2 + 0x4b) = cVar17;
      *(uint *)(lVar2 + 0x20 + (longlong)puVar25 * 4) = local_4c;
      iVar13 = (int)*(char *)(lVar2 + 0x4b);
      do {
        bVar3 = iVar13 < 1;
        iVar13 = iVar13 + -1;
        if (bVar3) {
          iVar13 = iVar9;
        }
        lVar26 = (longlong)iVar13;
      } while (*(byte *)(lVar2 + 0x4c + lVar26) != bVar6);
      puVar18 = (uint *)(ulonglong)(iVar13 + 1U);
      if (iVar13 + 1U == 8) {
        puVar18 = puVar23;
      }
      if ((int)puVar18 != (int)*(char *)(lVar2 + 0x4b)) {
        do {
          lVar14 = (longlong)iVar13;
          iVar13 = (int)puVar18;
          lVar26 = (longlong)iVar13;
          *(undefined1 *)(lVar2 + 0x4c + lVar14) = *(undefined1 *)(lVar2 + 0x4c + lVar26);
          puVar18 = (uint *)(ulonglong)(iVar13 + 1U);
          if (iVar13 + 1U == 8) {
            puVar18 = puVar23;
          }
        } while ((int)puVar18 != (int)*(char *)(lVar2 + 0x4b));
      }
      *(byte *)(lVar2 + 0x4c + lVar26) = bVar6;
      puVar18 = (uint *)((ulonglong)bVar6 << 0x15);
      uVar31 = uVar7 - local_4c | (uint)bVar6 << 0x15 | uVar12 * 0x100 - 0x20000 | 0xb000080;
      iVar13 = 4;
      uVar12 = local_4c;
      goto LAB_1425bd984;
    }
    uVar24 = 0;
LAB_1425bd6a0:
    iVar13 = (int)*(char *)(lVar2 + 0x4b);
    do {
      bVar3 = iVar13 < 1;
      iVar13 = iVar13 + -1;
      if (bVar3) {
        iVar13 = iVar9;
      }
      puVar18 = (uint *)(longlong)iVar13;
    } while (*(char *)(lVar2 + 0x4c + (longlong)puVar18) != (char)uVar24);
    puVar15 = (uint *)(ulonglong)(iVar13 + 1U);
    if (iVar13 + 1U == 8) {
      puVar15 = puVar23;
    }
    if ((int)puVar15 != (int)*(char *)(lVar2 + 0x4b)) {
      do {
        lVar26 = (longlong)iVar13;
        iVar13 = (int)puVar15;
        puVar18 = (uint *)(longlong)iVar13;
        *(undefined1 *)(lVar2 + 0x4c + lVar26) = *(undefined1 *)(lVar2 + 0x4c + (longlong)puVar18);
        puVar15 = (uint *)(ulonglong)(iVar13 + 1U);
        if (iVar13 + 1U == 8) {
          puVar15 = puVar23;
        }
      } while ((int)puVar15 != (int)*(char *)(lVar2 + 0x4b));
    }
    *(char *)(lVar2 + 0x4c + (longlong)puVar18) = (char)uVar24;
    uVar31 = uVar7 - uVar12 | (uVar24 & 0xff) << 8 | 0x1080;
    iVar13 = 2;
    puVar25 = (uint *)(ulonglong)uVar24;
    goto LAB_1425bd984;
  }
  if ((int)uVar27 >= 1 && uVar31 != 0) {
LAB_1425bd5a8:
    if (local_60 <= puVar32) {
LAB_1425be556:
      cVar16 = '\0';
      goto LAB_1425be583;
    }
    uVar1 = (ushort)*puVar32;
    puVar18 = (uint *)(ulonglong)uVar1;
    if ((uVar1 & 0xfc00) == 0xdc00) {
      puVar32 = (uint *)((longlong)puVar32 + 2);
      uVar8 = uVar31 * 0x400 + (uint)uVar1 + 0xfca02400;
      uVar7 = uVar8 - *(int *)(lVar2 + 0x20);
      uVar28 = uVar27;
      if (uVar7 < 0x80) {
        puVar25 = (uint *)0x0;
LAB_1425bd88f:
        if ((local_60 <= puVar32) || (0xa3ff < *(ushort *)puVar32 - 0x3400)) {
          uVar12 = *(uint *)(lVar2 + 0x20 + ((ulonglong)puVar25 & 0xff) * 4);
          puVar18 = (uint *)(ulonglong)(uint)(int)*(char *)(lVar2 + 0x4b);
          do {
            iVar9 = (int)puVar18;
            puVar18 = (uint *)(ulonglong)(iVar9 - 1);
            if (iVar9 < 1) {
              puVar18 = (uint *)&DAT_00000007;
            }
            lVar26 = (longlong)(int)puVar18;
          } while (*(char *)(lVar2 + 0x4c + lVar26) != (char)puVar25);
          uVar27 = (int)puVar18 + 1;
          puVar15 = (uint *)(ulonglong)uVar27;
          if (uVar27 == 8) {
            puVar15 = puVar23;
          }
          puVar19 = puVar18;
          if ((uint)puVar15 != (int)*(char *)(lVar2 + 0x4b)) {
            do {
              puVar18 = puVar15;
              lVar26 = (longlong)(int)puVar18;
              *(undefined1 *)(lVar2 + 0x4c + (longlong)(int)puVar19) =
                   *(undefined1 *)(lVar2 + 0x4c + lVar26);
              uVar27 = (int)puVar18 + 1;
              puVar15 = (uint *)(ulonglong)uVar27;
              if (uVar27 == 8) {
                puVar15 = puVar23;
              }
              puVar19 = puVar18;
            } while ((int)puVar15 != (int)*(char *)(lVar2 + 0x4b));
          }
          *(char *)(lVar2 + 0x4c + lVar26) = (char)puVar25;
          uVar31 = uVar8 - uVar12 | (int)((ulonglong)puVar25 & 0xff) << 8 | 0xe080;
          iVar13 = 2;
          cVar16 = '\x01';
          goto LAB_1425bd984;
        }
      }
      else {
        uVar4 = (uint3)(uVar7 >> 8);
        puVar25 = (uint *)CONCAT71((uint7)uVar4,1);
        if (((((uVar8 - *(int *)(lVar2 + 0x24) < 0x80) ||
              (puVar25 = (uint *)(ulonglong)CONCAT31(uVar4,2), uVar8 - *(int *)(lVar2 + 0x28) < 0x80
              )) || ((puVar25 = (uint *)CONCAT71((uint7)uVar4,3),
                     uVar8 - *(int *)(lVar2 + 0x2c) < 0x80 ||
                     ((puVar25 = (uint *)(ulonglong)CONCAT31(uVar4,4),
                      uVar8 - *(int *)(lVar2 + 0x30) < 0x80 ||
                      (puVar25 = (uint *)CONCAT71((uint7)uVar4,5),
                      uVar8 - *(int *)(lVar2 + 0x34) < 0x80)))))) ||
            (puVar25 = (uint *)(ulonglong)CONCAT31(uVar4,6), uVar8 - *(int *)(lVar2 + 0x38) < 0x80))
           || (puVar25 = (uint *)CONCAT71((uint7)uVar4,7), uVar8 - *(int *)(lVar2 + 0x3c) < 0x80))
        goto LAB_1425bd88f;
      }
      if ((local_60 <= puVar32) || (*(ushort *)puVar32 != (ushort)uVar31)) goto LAB_1425bdd31;
      iVar13 = uVar31 * 0x400 + (uint)uVar1;
      if (iVar13 + 0xfca02340U < 0x80) {
        uVar27 = 0xf9;
        local_4c = 0xc0;
      }
      else if (iVar13 + 0xfca021b0U < 0x80) {
        uVar27 = 0xfa;
        local_4c = 0x250;
      }
      else if (iVar13 + 0xfca02090U < 0x80) {
        uVar27 = 0xfb;
        local_4c = 0x370;
      }
      else if (iVar13 + 0xfca01ed0U < 0x80) {
        uVar27 = 0xfc;
        local_4c = 0x530;
      }
      else if (iVar13 + 0xfc9ff3c0U < 0x80) {
        uVar27 = 0xfd;
        local_4c = 0x3040;
      }
      else if (iVar13 + 0xfc9ff360U < 0x80) {
        uVar27 = 0xfe;
        local_4c = 0x30a0;
      }
      else if (iVar13 + 0xfc9f24a0U < 0x80) {
        uVar27 = 0xff;
        local_4c = 0xff60;
      }
      else {
        if (uVar8 < 0x80) {
LAB_1425bdd31:
          uVar31 = uVar31 << 0x10 | (uint)uVar1;
          iVar13 = 4;
          cVar16 = '\0';
          puVar25 = local_78;
          goto LAB_1425bd984;
        }
        uVar27 = uVar8;
        if (((0x2fff < iVar13 + 0xfc9e5400U) && (0x33ff < uVar8)) &&
           ((uVar8 & 0xffffc000) != 0x10000)) {
          if ((uVar8 == 0xfeff) || (0x1fef < iVar13 + 0xfc9f4400U)) goto LAB_1425bdd31;
          uVar27 = iVar13 + 0xfc9f7800;
        }
        local_4c = uVar8 & 0x7fffff80;
        uVar27 = uVar27 >> 7;
      }
      bVar6 = *(byte *)(lVar2 + 0x4c + (longlong)*(char *)(lVar2 + 0x4b));
      puVar25 = (uint *)(ulonglong)bVar6;
      cVar16 = *(char *)(lVar2 + 0x4b) + '\x01';
      if (cVar16 == '\b') {
        cVar16 = '\0';
      }
      *(char *)(lVar2 + 0x4b) = cVar16;
      *(uint *)(lVar2 + 0x20 + (longlong)puVar25 * 4) = local_4c;
      iVar13 = (int)*(char *)(lVar2 + 0x4b);
      do {
        bVar3 = iVar13 < 1;
        iVar13 = iVar13 + -1;
        if (bVar3) {
          iVar13 = iVar9;
        }
        lVar26 = (longlong)iVar13;
      } while (*(byte *)(lVar2 + 0x4c + lVar26) != bVar6);
      puVar18 = (uint *)(ulonglong)(iVar13 + 1U);
      if (iVar13 + 1U == 8) {
        puVar18 = puVar23;
      }
      if ((int)puVar18 != (int)*(char *)(lVar2 + 0x4b)) {
        do {
          lVar14 = (longlong)iVar13;
          iVar13 = (int)puVar18;
          lVar26 = (longlong)iVar13;
          *(undefined1 *)(lVar2 + 0x4c + lVar14) = *(undefined1 *)(lVar2 + 0x4c + lVar26);
          puVar18 = (uint *)(ulonglong)(iVar13 + 1U);
          if (iVar13 + 1U == 8) {
            puVar18 = puVar23;
          }
        } while ((int)puVar18 != (int)*(char *)(lVar2 + 0x4b));
      }
      *(byte *)(lVar2 + 0x4c + lVar26) = bVar6;
      puVar18 = (uint *)((ulonglong)bVar6 << 0x15);
      uVar31 = uVar8 - local_4c | (uint)bVar6 << 0x15 | uVar27 * 0x100 + 0xffe0000 | 0xf1000080;
      iVar13 = 4;
      cVar16 = '\x01';
      uVar12 = local_4c;
      goto LAB_1425bd984;
    }
LAB_1425be56a:
    puVar15 = puVar32;
    uVar5 = 0xc;
LAB_1425be56f:
    uVar10 = uVar5;
    cVar16 = '\0';
    puVar32 = puVar15;
    goto LAB_1425be581;
  }
  if (local_60 <= puVar15) goto LAB_1425be556;
  uVar10 = 0xf;
  uVar5 = 0xf;
  if ((int)uVar27 < 1) goto LAB_1425be56f;
  puVar32 = (uint *)((longlong)puVar15 + 2);
  uVar1 = (ushort)*puVar15;
  uVar31 = (uint)uVar1;
  uVar7 = uVar1 - 0x3400;
  if (uVar7 < 0xa400) {
    puVar18 = (uint *)0x0;
    uVar28 = 1;
    iVar13 = 2;
    cVar16 = '\0';
    local_7c = uVar8;
    if (uVar27 < 2) goto LAB_1425be4a1;
    puVar22 = puVar21 + 1;
    *puVar21 = uVar1 << 8 | uVar1 >> 8;
    if (local_60 <= puVar32) {
LAB_1425be54c:
      cVar16 = '\0';
      uVar31 = 0;
      puVar21 = puVar22;
      goto LAB_1425be583;
    }
    lVar26 = 0;
    uVar24 = uVar27;
    while( true ) {
      lVar14 = lVar26;
      if ((int)uVar24 < 3) {
        puVar21 = (ushort *)((longlong)puVar21 + lVar14 + 2);
        puVar32 = (uint *)((longlong)puVar15 + lVar14 + 2);
        cVar16 = '\0';
        uVar31 = 0;
        goto LAB_1425be581;
      }
      uVar27 = uVar24 - 2;
      uVar1 = *(ushort *)((longlong)puVar15 + lVar14 + 2);
      uVar31 = (uint)uVar1;
      uVar7 = uVar1 - 0x3400;
      if (0xa3ff < uVar7) break;
      if (uVar27 < 2) {
        puVar21 = (ushort *)((longlong)puVar21 + lVar14 + 2);
        puVar32 = (uint *)((longlong)puVar15 + lVar14 + 4);
        cVar16 = '\0';
        goto LAB_1425be4a1;
      }
      *(ushort *)((longlong)puVar22 + lVar14) = uVar1 << 8 | uVar1 >> 8;
      uVar24 = uVar24 - 2;
      lVar26 = lVar14 + 2;
      if (local_60 <= (uint *)((longlong)puVar15 + lVar14 + 4)) {
        puVar22 = (ushort *)((longlong)puVar21 + lVar14 + 4);
        puVar32 = (uint *)((longlong)puVar15 + lVar14 + 4);
        goto LAB_1425be54c;
      }
    }
    puVar21 = (ushort *)((longlong)puVar22 + lVar14);
    puVar32 = (uint *)((longlong)puVar15 + lVar14 + 4);
  }
  uVar31 = (uint)uVar1;
  uVar28 = uVar27;
  if (0xbeff < uVar7) {
    if ((puVar32 < local_60) && ((ushort)*puVar32 - 0x3400 < 0xa400)) {
      iVar13 = 2;
      cVar16 = '\0';
      local_7c = uVar8;
      goto LAB_1425bd984;
    }
    if (((uVar31 - 0x30 < 10) || (uVar31 - 0x61 < 0x1a)) || (uVar31 - 0x41 < 0x1a)) {
      uVar31 = ((uint)local_78 & 0xff) * 0x100 + 0xe000 | uVar31;
      iVar13 = 2;
      cVar16 = '\x01';
      local_7c = uVar8;
      goto LAB_1425bd984;
    }
    uVar12 = *(uint *)(lVar2 + 0x20);
    if (uVar31 - uVar12 < 0x80) {
      puVar18 = (uint *)0x0;
LAB_1425bdb25:
      iVar13 = (int)*(char *)(lVar2 + 0x4b);
      do {
        bVar3 = iVar13 < 1;
        iVar13 = iVar13 + -1;
        if (bVar3) {
          iVar13 = iVar9;
        }
        lVar26 = (longlong)iVar13;
      } while (*(char *)(lVar2 + 0x4c + lVar26) != (char)puVar18);
      puVar15 = (uint *)(ulonglong)(iVar13 + 1U);
      if (iVar13 + 1U == 8) {
        puVar15 = puVar23;
      }
      if ((int)puVar15 != (int)*(char *)(lVar2 + 0x4b)) {
        do {
          lVar14 = (longlong)iVar13;
          iVar13 = (int)puVar15;
          lVar26 = (longlong)iVar13;
          *(undefined1 *)(lVar2 + 0x4c + lVar14) = *(undefined1 *)(lVar2 + 0x4c + lVar26);
          puVar15 = (uint *)(ulonglong)(iVar13 + 1U);
          if (iVar13 + 1U == 8) {
            puVar15 = puVar23;
          }
        } while ((int)puVar15 != (int)*(char *)(lVar2 + 0x4b));
      }
      *(char *)(lVar2 + 0x4c + lVar26) = (char)puVar18;
      uVar31 = uVar31 - uVar12 | ((uint)puVar18 & 0xff) << 8 | 0xe080;
      iVar13 = 2;
      cVar16 = '\x01';
      puVar25 = (uint *)((ulonglong)puVar18 & 0xffffffff);
      local_7c = uVar8;
      goto LAB_1425bd984;
    }
    uVar12 = *(uint *)(lVar2 + 0x24);
    uVar20 = (undefined7)((ulonglong)puVar18 >> 8);
    puVar18 = (uint *)CONCAT71(uVar20,1);
    if (uVar31 - uVar12 < 0x80) goto LAB_1425bdb25;
    uVar12 = *(uint *)(lVar2 + 0x28);
    puVar18 = (uint *)CONCAT71(uVar20,2);
    if (uVar31 - uVar12 < 0x80) goto LAB_1425bdb25;
    uVar12 = *(uint *)(lVar2 + 0x2c);
    puVar18 = (uint *)CONCAT71(uVar20,3);
    if (uVar31 - uVar12 < 0x80) goto LAB_1425bdb25;
    uVar12 = *(uint *)(lVar2 + 0x30);
    puVar18 = (uint *)CONCAT71(uVar20,4);
    if (uVar31 - uVar12 < 0x80) goto LAB_1425bdb25;
    uVar12 = *(uint *)(lVar2 + 0x34);
    puVar18 = (uint *)CONCAT71(uVar20,5);
    if (uVar31 - uVar12 < 0x80) goto LAB_1425bdb25;
    uVar12 = *(uint *)(lVar2 + 0x38);
    puVar18 = (uint *)CONCAT71(uVar20,6);
    if (uVar31 - uVar12 < 0x80) goto LAB_1425bdb25;
    uVar12 = *(uint *)(lVar2 + 0x3c);
    puVar18 = (uint *)CONCAT71(uVar20,7);
    if (uVar31 - uVar12 < 0x80) goto LAB_1425bdb25;
    puVar18 = &local_4c;
    local_7c = uVar8;
    iVar9 = FUN_1425bfad0((uint)uVar1);
    if (-1 < iVar9) {
      local_78 = (uint *)CONCAT44(local_78._4_4_,iVar9);
      uVar27 = (int)*(char *)(lVar2 + 0x4b) + 1;
      puVar18 = (uint *)(ulonglong)(uVar27 & 0xff);
      if ((char)uVar27 == '\b') {
        puVar18 = puVar23;
      }
      bVar6 = *(byte *)(lVar2 + 0x4c + (longlong)*(char *)(lVar2 + 0x4b));
      puVar25 = (uint *)(ulonglong)bVar6;
      *(char *)(lVar2 + 0x4b) = (char)puVar18;
      local_7c = local_4c;
      *(uint *)(lVar2 + 0x20 + (longlong)puVar25 * 4) = local_4c;
      puVar18 = puVar25;
      FUN_1425bfa60(lVar2);
      uVar31 = uVar31 - local_7c | (int)local_78 << 8 | (uint)bVar6 * 0x10000 + 0xe80000 | 0x80;
      iVar13 = 3;
      cVar16 = '\x01';
      uVar12 = local_7c;
      goto LAB_1425bd984;
    }
    iVar13 = 2;
    uVar31 = (uint)uVar1;
    goto LAB_1425bde86;
  }
  if (uVar1 < 0xe000) {
    local_7c = uVar8;
    if ((uVar1 & 0x400) == 0) goto LAB_1425bd5a8;
    goto LAB_1425be56a;
  }
  uVar31 = uVar31 | 0xf00000;
  iVar13 = 3;
  cVar16 = '\0';
  local_7c = uVar8;
  goto LAB_1425bd984;
LAB_1425be125:
  uVar30 = (uint)uVar1;
  uVar24 = uVar1 - uVar8;
  if (0x7f < uVar24) goto code_r0x0001425be138;
  goto LAB_1425bd567;
code_r0x0001425be138:
  if ((uVar30 & 0xf800) != 0xd800) goto LAB_1425be162;
  uVar7 = (uint)uVar1;
  if ((uVar1 & 0x400) != 0) {
LAB_1425be449:
    uVar10 = 0xc;
    goto LAB_1425be581;
  }
  goto LAB_1425bd51e;
LAB_1425be162:
  if (uVar30 < 0xa0) {
    uVar31 = uVar29 & 0x7f | 0x200;
LAB_1425be176:
    iVar13 = 2;
  }
  else if ((uVar30 == 0xfeff) || (0xffef < uVar1)) {
    uVar31 = uVar29 | 0xe0000;
    iVar13 = 3;
  }
  else {
    uVar31 = uVar30 - *(int *)(lVar2 + 0x20);
    if (uVar31 < 0x80) {
      uVar24 = 0;
    }
    else {
      uVar4 = (uint3)(uVar31 >> 8);
      uVar24 = (uint)CONCAT71((uint7)uVar4,1);
      if ((((0x7f < uVar30 - *(int *)(lVar2 + 0x24)) &&
           (uVar24 = CONCAT31(uVar4,2), 0x7f < uVar30 - *(int *)(lVar2 + 0x28))) &&
          (uVar24 = (uint)CONCAT71((uint7)uVar4,3), 0x7f < uVar30 - *(int *)(lVar2 + 0x2c))) &&
         (((uVar24 = CONCAT31(uVar4,4), 0x7f < uVar7 - *(int *)(lVar2 + 0x30) &&
           (uVar24 = (uint)CONCAT71((uint7)uVar4,5), 0x7f < uVar7 - *(int *)(lVar2 + 0x34))) &&
          ((uVar24 = CONCAT31(uVar4,6), 0x7f < uVar7 - *(int *)(lVar2 + 0x38) &&
           (uVar24 = (uint)CONCAT71((uint7)uVar4,7), 0x7f < uVar7 - *(int *)(lVar2 + 0x3c))))))) {
        puVar18 = (uint *)(ulonglong)uVar7;
        local_7c = uVar8;
        bVar6 = FUN_1425bf9d0(&DAT_149c404e0);
        if ((char)bVar6 < '\0') {
          puVar18 = &local_4c;
          local_50 = FUN_1425bfad0(uVar7);
          if (local_50 < 0) {
            if ((uVar1 - 0x3400 < 0xa400) &&
               ((local_60 <= puVar32 || (*(ushort *)puVar32 - 0x3400 < 0xa400)))) {
              iVar13 = 3;
              uVar31 = uVar7 | 0xf0000;
LAB_1425bde86:
              cVar16 = '\0';
              puVar25 = local_78;
              uVar28 = uVar27;
              uVar12 = local_7c;
            }
            else {
              uVar31 = uVar7 | 0xe0000;
              iVar13 = 3;
              puVar25 = local_78;
              uVar12 = local_7c;
            }
          }
          else {
            uVar27 = (int)*(char *)(lVar2 + 0x4b) + 1;
            puVar15 = (uint *)(ulonglong)(uVar27 & 0xff);
            if ((char)uVar27 == '\b') {
              puVar15 = puVar23;
            }
            puVar18 = (uint *)(ulonglong)*(byte *)(lVar2 + 0x4c + (longlong)*(char *)(lVar2 + 0x4b))
            ;
            *(char *)(lVar2 + 0x4b) = (char)puVar15;
            local_7c = local_4c;
            *(uint *)(lVar2 + 0x20 + (longlong)puVar18 * 4) = local_4c;
            local_78 = puVar18;
            FUN_1425bfa60(lVar2);
            uVar31 = uVar7 - local_7c | local_50 << 8 | (int)local_78 * 0x10000 + 0x180000U | 0x80;
            iVar13 = 3;
            puVar25 = local_78;
            uVar12 = local_7c;
          }
        }
        else {
          uVar31 = uVar7 - *(int *)(&DAT_149c404e0 + (ulonglong)bVar6 * 4) |
                   (uint)bVar6 * 0x100 + 0x100;
          iVar13 = 2;
          puVar25 = local_78;
          uVar12 = local_7c;
        }
        goto LAB_1425bd984;
      }
    }
    bVar6 = (byte)uVar24;
    if (puVar32 < local_60) {
      uVar1 = *(ushort *)puVar32;
      uVar12 = *(uint *)(lVar2 + 0x20 + (ulonglong)bVar6 * 4);
      if ((uVar12 + 0x7f < (uint)uVar1) ||
         ((uVar1 <= uVar12 && uVar12 != uVar1 &&
          ((0x7f < uVar1 || ((uVar1 < 0x20 && ((1 << ((byte)uVar1 & 0x1f) & 0x2601U) == 0)))))))) {
        uVar31 = (uVar24 & 0xff) * 0x100 + 0x180 | uVar7 - uVar12;
        puVar18 = (uint *)(ulonglong)uVar31;
        iVar13 = 2;
        uVar12 = uVar8;
        local_7c = uVar8;
        goto LAB_1425bd984;
      }
    }
    else {
      uVar12 = *(uint *)(lVar2 + 0x20 + (ulonglong)bVar6 * 4);
    }
    iVar13 = (int)*(char *)(lVar2 + 0x4b);
    do {
      bVar3 = iVar13 < 1;
      iVar13 = iVar13 + -1;
      if (bVar3) {
        iVar13 = iVar9;
      }
      lVar26 = (longlong)iVar13;
    } while (*(byte *)(lVar2 + 0x4c + lVar26) != bVar6);
    puVar18 = (uint *)(ulonglong)(iVar13 + 1U);
    if (iVar13 + 1U == 8) {
      puVar18 = puVar23;
    }
    if ((int)puVar18 != (int)*(char *)(lVar2 + 0x4b)) {
      do {
        lVar14 = (longlong)iVar13;
        iVar13 = (int)puVar18;
        lVar26 = (longlong)iVar13;
        *(undefined1 *)(lVar2 + 0x4c + lVar14) = *(undefined1 *)(lVar2 + 0x4c + lVar26);
        puVar18 = (uint *)(ulonglong)(iVar13 + 1U);
        if (iVar13 + 1U == 8) {
          puVar18 = puVar23;
        }
      } while ((int)puVar18 != (int)*(char *)(lVar2 + 0x4b));
    }
    *(byte *)(lVar2 + 0x4c + lVar26) = bVar6;
    uVar27 = (uVar24 & 0xff) << 8;
    puVar18 = (uint *)(ulonglong)uVar27;
    uVar31 = uVar7 - uVar12 | uVar27 | 0x1080;
    iVar13 = 2;
    puVar25 = (uint *)(ulonglong)uVar24;
    local_7c = uVar8;
  }
LAB_1425bd984:
  uVar8 = uVar12;
  uVar27 = uVar28 - iVar13;
  local_78 = puVar25;
  if ((int)uVar28 < iVar13) goto LAB_1425be4a1;
  if (iVar13 != 2) {
    if (iVar13 != 3) {
      if (iVar13 != 4) goto LAB_1425bd9c1;
      *(byte *)puVar21 = (byte)(uVar31 >> 0x18);
      puVar21 = (ushort *)((longlong)puVar21 + 1);
    }
    *(byte *)puVar21 = (byte)(uVar31 >> 0x10);
    puVar21 = (ushort *)((longlong)puVar21 + 1);
  }
  *puVar21 = (ushort)uVar31 << 8 | (ushort)uVar31 >> 8;
  puVar21 = puVar21 + 1;
LAB_1425bd9c1:
  uVar31 = 0;
  puVar15 = puVar32;
  goto LAB_1425bd4ff;
LAB_1425be4a1:
  iVar13 = iVar13 - uVar28;
  if (iVar13 - 1U < 4) {
    puVar11 = (undefined1 *)(local_70 + 0x68);
    switch(iVar13) {
    case 4:
      puVar11 = (undefined1 *)(local_70 + 0x69);
      *(char *)(local_70 + 0x68) = (char)(uVar31 >> 0x18);
    case 3:
      *puVar11 = (char)(uVar31 >> 0x10);
      puVar11 = puVar11 + 1;
    case 2:
      *puVar11 = (char)(uVar31 >> 8);
      puVar11 = puVar11 + 1;
    case 1:
      *puVar11 = (char)uVar31;
    }
  }
  *(char *)(local_70 + 0x5b) = (char)iVar13;
  uVar27 = uVar31 >> ((char)iVar13 * '\b' & 0x1fU);
  uVar31 = 0;
  uVar10 = 0xf;
  if (uVar28 != 1) {
    if (uVar28 != 2) {
      if (uVar28 != 3) goto LAB_1425be581;
      *(byte *)puVar21 = (byte)(uVar27 >> 0x10);
      puVar21 = (ushort *)((longlong)puVar21 + 1);
    }
    *(byte *)puVar21 = (byte)(uVar27 >> 8);
    puVar21 = (ushort *)((longlong)puVar21 + 1);
  }
  *(byte *)puVar21 = (byte)uVar27;
  puVar21 = (ushort *)((longlong)puVar21 + 1);
LAB_1425be581:
  *local_58 = uVar10;
LAB_1425be583:
  *(char *)(lVar2 + 0x48) = cVar16;
  *(char *)(lVar2 + 0x49) = (char)local_78;
  *(uint *)(local_70 + 0x54) = uVar31;
  *(uint **)(local_68 + 0x10) = puVar32;
  *(ushort **)(local_68 + 0x20) = puVar21;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1425be5d0 FUN_1425be5d0 body=4893 status=ok
// SIG undefined FUN_1425be5d0(void)

void FUN_1425be5d0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  bool bVar2;
  uint3 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar9;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined7 uVar18;
  undefined1 *puVar17;
  uint uVar19;
  ushort *puVar20;
  ushort *puVar21;
  uint uVar22;
  undefined4 uVar23;
  longlong lVar24;
  ushort uVar25;
  uint uVar26;
  int iVar27;
  ushort *puVar28;
  uint uVar29;
  longlong lVar30;
  uint *puVar31;
  ushort *puVar32;
  ushort *puVar33;
  uint uVar34;
  undefined1 auStack_b8 [44];
  uint local_8c;
  uint local_88;
  uint local_84;
  ushort *local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  uint local_5c;
  undefined4 *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = *(longlong *)(param_1 + 8);
  lVar1 = *(longlong *)(local_70 + 0x10);
  puVar28 = *(ushort **)(param_1 + 0x18);
  puVar20 = *(ushort **)(param_1 + 0x20);
  uVar6 = *(int *)(param_1 + 0x28) - (int)puVar20;
  puVar31 = *(uint **)(param_1 + 0x30);
  local_8c = (uint)*(byte *)(lVar1 + 0x48);
  local_78 = (ulonglong)*(byte *)(lVar1 + 0x49);
  local_84 = *(uint *)(lVar1 + 0x20 + local_78 * 4);
  uVar7 = *(uint *)(local_70 + 0x54);
  uVar13 = -(uint)(uVar7 != 0);
  puVar32 = *(ushort **)(param_1 + 0x10);
  local_80 = puVar28;
  local_68 = param_1;
  local_58 = param_2;
  uVar22 = 0;
  while( true ) {
    iVar14 = 7;
    puVar33 = puVar32;
    uVar29 = uVar13;
    if ((char)local_8c == '\0') break;
    uVar11 = uVar7;
    if ((int)uVar6 < 1 || uVar7 == 0) goto LAB_1425bf3d0;
LAB_1425be6b5:
    uVar7 = uVar11;
    puVar21 = puVar20;
    local_88 = uVar29;
    if (puVar28 <= puVar33) goto LAB_1425bf8b3;
    uVar25 = *puVar33;
    if ((uVar25 & 0xfc00) != 0xdc00) goto LAB_1425bf73a;
    puVar33 = puVar33 + 1;
    uVar13 = uVar22 + 1;
    uVar22 = uVar7 * 0x400 + (uint)uVar25 + 0xfca02400;
    if (uVar22 - local_84 < 0x80) {
      *(byte *)puVar20 = (byte)(uVar22 - local_84) | 0x80;
      if (puVar31 == (uint *)0x0) {
        puVar31 = (uint *)0x0;
      }
      else {
        *puVar31 = uVar29;
        puVar31 = puVar31 + 1;
      }
LAB_1425bf440:
      while( true ) {
        puVar20 = (ushort *)((longlong)puVar20 + 1);
        uVar6 = uVar6 - 1;
        uVar7 = 0;
        uVar22 = uVar13;
        uVar29 = uVar13;
LAB_1425bf3d0:
        puVar21 = puVar20;
        if (puVar28 <= puVar33) goto LAB_1425bf8b3;
        if ((int)uVar6 < 1) {
          uVar23 = 0xf;
          puVar32 = puVar33;
          goto LAB_1425bf8b0;
        }
        uVar25 = *puVar33;
        uVar7 = (uint)uVar25;
        puVar33 = puVar33 + 1;
        uVar13 = uVar22 + 1;
        if (0x5f < uVar25 - 0x20) break;
LAB_1425bf408:
        *(byte *)puVar20 = (byte)uVar25;
        if (puVar31 == (uint *)0x0) goto LAB_1425bf430;
LAB_1425bf410:
        *puVar31 = uVar29;
        puVar31 = puVar31 + 1;
      }
      uVar22 = (uint)uVar25;
      uVar19 = (uint)uVar25;
      uVar34 = uVar6;
      if (uVar25 < 0x20) {
        if ((0x2601U >> (uVar22 & 0x1f) & 1) != 0) goto LAB_1425bf408;
        uVar19 = uVar19 | 0x100;
        goto LAB_1425bf48e;
      }
      uVar11 = (uint)uVar25;
      if (uVar25 - local_84 < 0x80) {
        *(byte *)puVar20 = (byte)(uVar25 - local_84) | 0x80;
        if (puVar31 != (uint *)0x0) goto LAB_1425bf410;
LAB_1425bf430:
        puVar31 = (uint *)0x0;
        goto LAB_1425bf440;
      }
      if ((uVar11 & 0xf800) == 0xd800) goto code_r0x0001425bf45e;
      if (uVar11 < 0xa0) {
        uVar19 = uVar22 & 0x7f | 0x200;
LAB_1425bf48e:
        iVar12 = 2;
      }
      else if ((uVar11 == 0xfeff) || (0xffef < uVar25)) {
        iVar12 = 3;
        uVar19 = uVar22 | 0xe0000;
      }
      else {
        uVar7 = uVar11 - *(int *)(lVar1 + 0x20);
        local_88 = uVar29;
        if (uVar7 < 0x80) {
          uVar8 = 0;
        }
        else {
          uVar3 = (uint3)(uVar7 >> 8);
          uVar8 = CONCAT71((uint7)uVar3,1);
          if ((((((0x7f < uVar11 - *(int *)(lVar1 + 0x24)) &&
                 (uVar8 = (ulonglong)CONCAT31(uVar3,2), 0x7f < uVar11 - *(int *)(lVar1 + 0x28))) &&
                (uVar8 = CONCAT71((uint7)uVar3,3), 0x7f < uVar11 - *(int *)(lVar1 + 0x2c))) &&
               ((uVar8 = (ulonglong)CONCAT31(uVar3,4), 0x7f < uVar19 - *(int *)(lVar1 + 0x30) &&
                (uVar8 = CONCAT71((uint7)uVar3,5), 0x7f < uVar19 - *(int *)(lVar1 + 0x34))))) &&
              (uVar8 = (ulonglong)CONCAT31(uVar3,6), 0x7f < uVar19 - *(int *)(lVar1 + 0x38))) &&
             (uVar8 = CONCAT71((uint7)uVar3,7), 0x7f < uVar19 - *(int *)(lVar1 + 0x3c))) {
            bVar5 = FUN_1425bf9d0(&DAT_149c404e0,uVar19);
            if ((char)bVar5 < '\0') {
              local_5c = FUN_1425bfad0(uVar19,&local_4c);
              if ((int)local_5c < 0) {
                puVar28 = local_80;
                uVar29 = local_88;
                if ((uVar25 - 0x3400 < 0xa400) &&
                   ((local_80 <= puVar33 || (*puVar33 - 0x3400 < 0xa400)))) {
                  uVar19 = uVar19 | 0xf0000;
                  iVar12 = 3;
                  local_8c = 0;
                }
                else {
                  uVar19 = uVar19 | 0xe0000;
                  iVar12 = 3;
                }
              }
              else {
                cVar10 = *(char *)(lVar1 + 0x4b) + '\x01';
                if (cVar10 == '\b') {
                  cVar10 = '\0';
                }
                local_78 = (ulonglong)*(byte *)(lVar1 + 0x4c + (longlong)*(char *)(lVar1 + 0x4b));
                *(char *)(lVar1 + 0x4b) = cVar10;
                local_84 = local_4c;
                *(uint *)(lVar1 + 0x20 + local_78 * 4) = local_4c;
                FUN_1425bfa60(lVar1);
                uVar19 = uVar19 - local_84 | local_5c << 8 | (int)local_78 * 0x10000 + 0x180000U |
                         0x80;
                iVar12 = 3;
                puVar28 = local_80;
                uVar29 = local_88;
              }
            }
            else {
              uVar19 = uVar19 - *(int *)(&DAT_149c404e0 + (ulonglong)bVar5 * 4) |
                       (uint)bVar5 * 0x100 + 0x100;
              iVar12 = 2;
              puVar28 = local_80;
              uVar29 = local_88;
            }
            goto LAB_1425beb13;
          }
        }
        uVar15 = uVar8 & 0xff;
        if (puVar33 < puVar28) {
          uVar25 = *puVar33;
          uVar7 = *(uint *)(lVar1 + 0x20 + uVar15 * 4);
          if ((uVar7 + 0x7f < (uint)uVar25) ||
             ((uVar25 <= uVar7 && uVar7 != uVar25 &&
              ((0x7f < uVar25 || ((uVar25 < 0x20 && ((1 << ((byte)uVar25 & 0x1f) & 0x2601U) == 0))))
              )))) {
            iVar12 = 2;
            uVar19 = (int)uVar15 * 0x100 + 0x180U | uVar19 - uVar7;
            goto LAB_1425beb13;
          }
        }
        else {
          uVar7 = *(uint *)(lVar1 + 0x20 + uVar15 * 4);
        }
        local_84 = uVar7;
        iVar12 = (int)*(char *)(lVar1 + 0x4b);
        do {
          bVar2 = iVar12 < 1;
          iVar12 = iVar12 + -1;
          if (bVar2) {
            iVar12 = iVar14;
          }
          lVar24 = (longlong)iVar12;
        } while (*(char *)(lVar1 + 0x4c + lVar24) != (char)uVar8);
        iVar14 = iVar12 + 1;
        if (iVar12 + 1 == 8) {
          iVar14 = 0;
        }
        if (iVar14 != *(char *)(lVar1 + 0x4b)) {
          do {
            lVar24 = (longlong)iVar14;
            *(undefined1 *)(lVar1 + 0x4c + (longlong)iVar12) =
                 *(undefined1 *)(lVar1 + 0x4c + lVar24);
            iVar27 = iVar14 + 1;
            if (iVar14 + 1 == 8) {
              iVar27 = 0;
            }
            iVar12 = iVar14;
            iVar14 = iVar27;
          } while (iVar27 != *(char *)(lVar1 + 0x4b));
        }
        *(char *)(lVar1 + 0x4c + lVar24) = (char)uVar8;
        uVar19 = uVar19 - local_84 | (int)uVar15 << 8 | 0x1080;
        iVar12 = 2;
        local_78 = uVar8;
      }
    }
    else {
      uVar11 = *(uint *)(lVar1 + 0x20);
      uVar26 = uVar22 - uVar11;
      uVar34 = uVar6;
      if (uVar26 < 0x80) {
        uVar26 = 0;
LAB_1425be860:
        iVar12 = (int)*(char *)(lVar1 + 0x4b);
        do {
          bVar2 = iVar12 < 1;
          iVar12 = iVar12 + -1;
          if (bVar2) {
            iVar12 = iVar14;
          }
          lVar24 = (longlong)iVar12;
        } while (*(char *)(lVar1 + 0x4c + lVar24) != (char)uVar26);
        iVar14 = iVar12 + 1;
        if (iVar14 == 8) {
          iVar14 = 0;
        }
        if (iVar14 != *(char *)(lVar1 + 0x4b)) {
          do {
            lVar24 = (longlong)iVar14;
            *(undefined1 *)(lVar1 + 0x4c + (longlong)iVar12) =
                 *(undefined1 *)(lVar1 + 0x4c + lVar24);
            iVar27 = iVar14 + 1;
            if (iVar14 + 1 == 8) {
              iVar27 = 0;
            }
            iVar12 = iVar14;
            iVar14 = iVar27;
          } while (iVar27 != *(char *)(lVar1 + 0x4b));
        }
        *(char *)(lVar1 + 0x4c + lVar24) = (char)uVar26;
        uVar19 = uVar22 - uVar11 | (uVar26 & 0xff) << 8 | 0x1080;
        iVar12 = 2;
        local_78 = (ulonglong)uVar26;
        puVar28 = local_80;
        local_84 = uVar11;
        goto LAB_1425beb13;
      }
      uVar11 = *(uint *)(lVar1 + 0x24);
      uVar3 = (uint3)(uVar26 >> 8);
      uVar26 = (uint)CONCAT71((uint7)uVar3,1);
      if (uVar22 - uVar11 < 0x80) goto LAB_1425be860;
      uVar11 = *(uint *)(lVar1 + 0x28);
      uVar26 = CONCAT31(uVar3,2);
      if (uVar22 - uVar11 < 0x80) goto LAB_1425be860;
      uVar11 = *(uint *)(lVar1 + 0x2c);
      uVar26 = (uint)CONCAT71((uint7)uVar3,3);
      if (uVar22 - uVar11 < 0x80) goto LAB_1425be860;
      uVar11 = *(uint *)(lVar1 + 0x30);
      uVar26 = CONCAT31(uVar3,4);
      if (uVar22 - uVar11 < 0x80) goto LAB_1425be860;
      uVar11 = *(uint *)(lVar1 + 0x34);
      uVar26 = (uint)CONCAT71((uint7)uVar3,5);
      if (uVar22 - uVar11 < 0x80) goto LAB_1425be860;
      uVar11 = *(uint *)(lVar1 + 0x38);
      uVar26 = CONCAT31(uVar3,6);
      if (uVar22 - uVar11 < 0x80) goto LAB_1425be860;
      uVar11 = *(uint *)(lVar1 + 0x3c);
      uVar26 = (uint)CONCAT71((uint7)uVar3,7);
      if (uVar22 - uVar11 < 0x80) goto LAB_1425be860;
      iVar12 = uVar7 * 0x400 + (uint)uVar25;
      if (iVar12 + 0xfca02340U < 0x80) {
        uVar11 = 0xf9;
        local_4c = 0xc0;
      }
      else if (iVar12 + 0xfca021b0U < 0x80) {
        uVar11 = 0xfa;
        local_4c = 0x250;
      }
      else if (iVar12 + 0xfca02090U < 0x80) {
        uVar11 = 0xfb;
        local_4c = 0x370;
      }
      else if (iVar12 + 0xfca01ed0U < 0x80) {
        uVar11 = 0xfc;
        local_4c = 0x530;
      }
      else if (iVar12 + 0xfc9ff3c0U < 0x80) {
        uVar11 = 0xfd;
        local_4c = 0x3040;
      }
      else if (iVar12 + 0xfc9ff360U < 0x80) {
        uVar11 = 0xfe;
        local_4c = 0x30a0;
      }
      else if (iVar12 + 0xfc9f24a0U < 0x80) {
        uVar11 = 0xff;
        local_4c = 0xff60;
      }
      else {
        if (uVar22 < 0x80) {
LAB_1425bf25d:
          *(byte *)puVar20 = 0xf;
          if (puVar31 == (uint *)0x0) {
            puVar31 = (uint *)0x0;
          }
          else {
            *puVar31 = uVar29;
            puVar31 = puVar31 + 1;
          }
          puVar20 = (ushort *)((longlong)puVar20 + 1);
          uVar19 = uVar7 << 0x10 | (uint)uVar25;
          iVar12 = 4;
          local_8c = 0;
          puVar28 = local_80;
          uVar34 = uVar6 - 1;
          goto LAB_1425beb13;
        }
        uVar11 = uVar22;
        if (((0x2fff < iVar12 + 0xfc9e5400U) && (0x33ff < uVar22)) &&
           ((uVar22 & 0xffffc000) != 0x10000)) {
          if ((uVar22 == 0xfeff) || (0x1fef < iVar12 + 0xfc9f4400U)) goto LAB_1425bf25d;
          uVar11 = iVar12 + 0xfc9f7800;
        }
        local_4c = uVar22 & 0x7fffff80;
        uVar11 = uVar11 >> 7;
      }
      bVar5 = *(byte *)(lVar1 + 0x4c + (longlong)*(char *)(lVar1 + 0x4b));
      local_78 = (ulonglong)bVar5;
      cVar10 = *(char *)(lVar1 + 0x4b) + '\x01';
      if (cVar10 == '\b') {
        cVar10 = '\0';
      }
      *(char *)(lVar1 + 0x4b) = cVar10;
      *(uint *)(lVar1 + 0x20 + local_78 * 4) = local_4c;
      iVar12 = (int)*(char *)(lVar1 + 0x4b);
      do {
        bVar2 = iVar12 < 1;
        iVar12 = iVar12 + -1;
        if (bVar2) {
          iVar12 = iVar14;
        }
        lVar24 = (longlong)iVar12;
      } while (*(byte *)(lVar1 + 0x4c + lVar24) != bVar5);
      iVar14 = iVar12 + 1;
      if (iVar12 + 1 == 8) {
        iVar14 = 0;
      }
      if (iVar14 != *(char *)(lVar1 + 0x4b)) {
        do {
          lVar24 = (longlong)iVar14;
          *(undefined1 *)(lVar1 + 0x4c + (longlong)iVar12) = *(undefined1 *)(lVar1 + 0x4c + lVar24);
          iVar27 = iVar14 + 1;
          if (iVar27 == 8) {
            iVar27 = 0;
          }
          iVar12 = iVar14;
          iVar14 = iVar27;
        } while (iVar27 != *(char *)(lVar1 + 0x4b));
      }
      *(byte *)(lVar1 + 0x4c + lVar24) = bVar5;
      uVar19 = uVar22 - local_4c | (uint)bVar5 << 0x15 | uVar11 * 0x100 - 0x20000 | 0xb000080;
      iVar12 = 4;
      puVar28 = local_80;
      local_84 = local_4c;
    }
LAB_1425beb13:
    uVar6 = uVar34 - iVar12;
    if ((int)uVar34 < iVar12) goto LAB_1425bf795;
    bVar9 = (byte)(uVar19 >> 0x18);
    bVar5 = (byte)(uVar19 >> 0x10);
    if (puVar31 == (uint *)0x0) {
      if (iVar12 != 2) {
        if (iVar12 != 3) {
          if (iVar12 != 4) {
            puVar31 = (uint *)0x0;
            goto LAB_1425be689;
          }
          *(byte *)puVar20 = bVar9;
          puVar20 = (ushort *)((longlong)puVar20 + 1);
        }
        *(byte *)puVar20 = bVar5;
        puVar20 = (ushort *)((longlong)puVar20 + 1);
      }
      *puVar20 = (ushort)uVar19 << 8 | (ushort)uVar19 >> 8;
      puVar20 = puVar20 + 1;
      puVar31 = (uint *)0x0;
    }
    else {
      if (iVar12 != 2) {
        if (iVar12 != 3) {
          if (iVar12 != 4) goto LAB_1425be689;
          *(byte *)puVar20 = bVar9;
          puVar20 = (ushort *)((longlong)puVar20 + 1);
          *puVar31 = uVar29;
          puVar31 = puVar31 + 1;
        }
        *(byte *)puVar20 = bVar5;
        puVar20 = (ushort *)((longlong)puVar20 + 1);
        *puVar31 = uVar29;
        puVar31 = puVar31 + 1;
      }
      *(byte *)puVar20 = (byte)(uVar19 >> 8);
      *puVar31 = uVar29;
      *(byte *)((longlong)puVar20 + 1) = (byte)uVar19;
      puVar20 = puVar20 + 1;
      puVar31[1] = uVar29;
      puVar31 = puVar31 + 2;
    }
LAB_1425be689:
    uVar7 = 0;
    puVar32 = puVar33;
    uVar22 = uVar13;
  }
  if ((int)uVar6 >= 1 && uVar7 != 0) {
    uVar26 = uVar7;
    if (puVar32 < puVar28) {
LAB_1425be77a:
      uVar25 = *puVar33;
      uVar7 = (uint)uVar25;
      uVar19 = uVar26;
      if ((uVar7 & 0xfc00) == 0xdc00) {
        puVar33 = puVar33 + 1;
        uVar13 = uVar22 + 1;
        uVar22 = uVar26 * 0x400 + uVar7 + 0xfca02400;
        uVar11 = uVar22 - *(int *)(lVar1 + 0x20);
        uVar34 = uVar6;
        if (uVar11 < 0x80) {
          uVar8 = 0;
LAB_1425bea03:
          if ((puVar28 <= puVar33) || (0xa3ff < *puVar33 - 0x3400)) {
            local_84 = *(uint *)(lVar1 + 0x20 + (uVar8 & 0xff) * 4);
            uVar15 = (ulonglong)(uint)(int)*(char *)(lVar1 + 0x4b);
            do {
              iVar14 = (int)uVar15;
              uVar15 = (ulonglong)(iVar14 - 1);
              if (iVar14 < 1) {
                uVar15 = 7;
              }
              lVar24 = (longlong)(int)uVar15;
            } while (*(char *)(lVar1 + 0x4c + lVar24) != (char)uVar8);
            uVar7 = (int)uVar15 + 1;
            if (uVar7 == 8) {
              uVar7 = 0;
            }
            uVar16 = uVar15;
            if (uVar7 != (int)*(char *)(lVar1 + 0x4b)) {
              do {
                uVar15 = (ulonglong)uVar7;
                lVar24 = (longlong)(int)uVar7;
                *(undefined1 *)(lVar1 + 0x4c + (longlong)(int)uVar16) =
                     *(undefined1 *)(lVar1 + 0x4c + lVar24);
                uVar7 = uVar7 + 1;
                if (uVar7 == 8) {
                  uVar7 = 0;
                }
                uVar16 = uVar15;
              } while (uVar7 != (int)*(char *)(lVar1 + 0x4b));
            }
            *(char *)(lVar1 + 0x4c + lVar24) = (char)uVar8;
            uVar19 = uVar22 - local_84 | (int)(uVar8 & 0xff) << 8 | 0xe080;
            iVar12 = 2;
            local_8c = (uint)CONCAT71((int7)(uVar15 >> 8),1);
            puVar28 = local_80;
            local_88 = uVar29;
            local_78 = uVar8;
            goto LAB_1425beb13;
          }
        }
        else {
          uVar3 = (uint3)(uVar11 >> 8);
          uVar8 = CONCAT71((uint7)uVar3,1);
          if (((((uVar22 - *(int *)(lVar1 + 0x24) < 0x80) ||
                (uVar8 = (ulonglong)CONCAT31(uVar3,2), uVar22 - *(int *)(lVar1 + 0x28) < 0x80)) ||
               ((uVar8 = CONCAT71((uint7)uVar3,3), uVar22 - *(int *)(lVar1 + 0x2c) < 0x80 ||
                ((uVar8 = (ulonglong)CONCAT31(uVar3,4), uVar22 - *(int *)(lVar1 + 0x30) < 0x80 ||
                 (uVar8 = CONCAT71((uint7)uVar3,5), uVar22 - *(int *)(lVar1 + 0x34) < 0x80)))))) ||
              (uVar8 = (ulonglong)CONCAT31(uVar3,6), uVar22 - *(int *)(lVar1 + 0x38) < 0x80)) ||
             (uVar8 = CONCAT71((uint7)uVar3,7), uVar22 - *(int *)(lVar1 + 0x3c) < 0x80))
          goto LAB_1425bea03;
        }
        if ((puVar28 <= puVar33) || (*puVar33 != (ushort)uVar26)) goto LAB_1425befec;
        iVar12 = uVar26 * 0x400 + (uint)uVar25;
        if (iVar12 + 0xfca02340U < 0x80) {
          uVar6 = 0xf9;
          local_4c = 0xc0;
        }
        else if (iVar12 + 0xfca021b0U < 0x80) {
          uVar6 = 0xfa;
          local_4c = 0x250;
        }
        else if (iVar12 + 0xfca02090U < 0x80) {
          uVar6 = 0xfb;
          local_4c = 0x370;
        }
        else if (iVar12 + 0xfca01ed0U < 0x80) {
          uVar6 = 0xfc;
          local_4c = 0x530;
        }
        else if (iVar12 + 0xfc9ff3c0U < 0x80) {
          uVar6 = 0xfd;
          local_4c = 0x3040;
        }
        else if (iVar12 + 0xfc9ff360U < 0x80) {
          uVar6 = 0xfe;
          local_4c = 0x30a0;
        }
        else if (iVar12 + 0xfc9f24a0U < 0x80) {
          uVar6 = 0xff;
          local_4c = 0xff60;
        }
        else {
          local_88 = uVar29;
          if (uVar22 < 0x80) {
LAB_1425befec:
            iVar12 = 4;
            local_8c = 0;
            uVar19 = uVar26 << 0x10 | uVar7;
            goto LAB_1425beb13;
          }
          uVar6 = uVar22;
          if (((0x2fff < iVar12 + 0xfc9e5400U) && (0x33ff < uVar22)) &&
             ((uVar22 & 0xffffc000) != 0x10000)) {
            if ((uVar22 == 0xfeff) || (0x1fef < iVar12 + 0xfc9f4400U)) goto LAB_1425befec;
            uVar6 = iVar12 + 0xfc9f7800;
          }
          local_4c = uVar22 & 0x7fffff80;
          uVar6 = uVar6 >> 7;
        }
        bVar5 = *(byte *)(lVar1 + 0x4c + (longlong)*(char *)(lVar1 + 0x4b));
        cVar10 = *(char *)(lVar1 + 0x4b) + '\x01';
        if (cVar10 == '\b') {
          cVar10 = '\0';
        }
        *(char *)(lVar1 + 0x4b) = cVar10;
        *(uint *)(lVar1 + 0x20 + (ulonglong)bVar5 * 4) = local_4c;
        iVar12 = (int)*(char *)(lVar1 + 0x4b);
        do {
          bVar2 = iVar12 < 1;
          iVar12 = iVar12 + -1;
          if (bVar2) {
            iVar12 = iVar14;
          }
          lVar24 = (longlong)iVar12;
        } while (*(byte *)(lVar1 + 0x4c + lVar24) != bVar5);
        iVar14 = iVar12 + 1;
        if (iVar12 + 1 == 8) {
          iVar14 = 0;
        }
        if (iVar14 != *(char *)(lVar1 + 0x4b)) {
          do {
            lVar24 = (longlong)iVar14;
            *(undefined1 *)(lVar1 + 0x4c + (longlong)iVar12) =
                 *(undefined1 *)(lVar1 + 0x4c + lVar24);
            iVar27 = iVar14 + 1;
            if (iVar14 + 1 == 8) {
              iVar27 = 0;
            }
            iVar12 = iVar14;
            iVar14 = iVar27;
          } while (iVar27 != *(char *)(lVar1 + 0x4b));
        }
        *(byte *)(lVar1 + 0x4c + lVar24) = bVar5;
        uVar19 = uVar22 - local_4c | (uint)bVar5 << 0x15 | uVar6 * 0x100 + 0xffe0000 | 0xf1000080;
        iVar12 = 4;
        local_8c = (uint)CONCAT71((uint7)(uint3)(((uint)bVar5 << 0x15) >> 8),1);
        local_88 = uVar29;
        local_84 = local_4c;
        local_78 = (ulonglong)bVar5;
        goto LAB_1425beb13;
      }
LAB_1425bf893:
      uVar7 = uVar19;
      puVar32 = puVar33;
      uVar4 = 0xc;
LAB_1425bf899:
      uVar23 = uVar4;
      local_8c = 0;
      goto LAB_1425bf8b0;
    }
LAB_1425bf84c:
    local_8c = 0;
    puVar21 = puVar20;
    goto LAB_1425bf8b3;
  }
  if (puVar28 <= puVar32) goto LAB_1425bf84c;
  uVar23 = 0xf;
  uVar4 = 0xf;
  if ((int)uVar6 < 1) goto LAB_1425bf899;
  puVar33 = puVar32 + 1;
  uVar25 = *puVar32;
  uVar22 = uVar22 + 1;
  uVar8 = (ulonglong)uVar22;
  uVar11 = uVar25 - 0x3400;
  if (0xa3ff < uVar11) {
    uVar15 = (ulonglong)uVar13;
LAB_1425beba5:
    uVar26 = (uint)uVar25;
    uVar19 = (uint)uVar25;
    uVar29 = (uint)uVar15;
    uVar7 = (uint)uVar25;
    uVar13 = uVar22;
    uVar34 = uVar6;
    if (uVar11 < 0xbf00) {
      if (uVar25 < 0xe000) {
        if ((uVar25 & 0x400) != 0) goto LAB_1425bf893;
        puVar28 = local_80;
        if (puVar33 < local_80) goto LAB_1425be77a;
        goto LAB_1425bf84c;
      }
      uVar19 = uVar7 | 0xf00000;
      iVar12 = 3;
      local_8c = 0;
      puVar28 = local_80;
    }
    else if ((puVar33 < local_80) && (*puVar33 - 0x3400 < 0xa400)) {
      iVar12 = 2;
      local_8c = 0;
      puVar28 = local_80;
      uVar19 = uVar7;
    }
    else {
      uVar18 = (undefined7)(uVar8 >> 8);
      if (((uVar25 - 0x30 < 10) || (uVar25 - 0x61 < 0x1a)) || (uVar25 - 0x41 < 0x1a)) {
        uVar19 = (uint)(byte)local_78 * 0x100 + 0xe000 | (uint)uVar25;
        iVar12 = 2;
        local_8c = (uint)CONCAT71(uVar18,1);
        puVar28 = local_80;
      }
      else {
        uVar6 = *(uint *)(lVar1 + 0x20);
        uVar11 = (uint)uVar25;
        local_88 = uVar29;
        local_5c = uVar22;
        if (uVar11 - uVar6 < 0x80) {
          uVar8 = 0;
        }
        else {
          uVar6 = *(uint *)(lVar1 + 0x24);
          uVar8 = CONCAT71(uVar18,1);
          if (0x7f < uVar11 - uVar6) {
            uVar6 = *(uint *)(lVar1 + 0x28);
            uVar8 = CONCAT71(uVar18,2);
            if (0x7f < uVar11 - uVar6) {
              uVar6 = *(uint *)(lVar1 + 0x2c);
              uVar8 = CONCAT71(uVar18,3);
              if (0x7f < uVar11 - uVar6) {
                uVar6 = *(uint *)(lVar1 + 0x30);
                uVar8 = CONCAT71(uVar18,4);
                if (0x7f < uVar11 - uVar6) {
                  uVar6 = *(uint *)(lVar1 + 0x34);
                  uVar8 = CONCAT71(uVar18,5);
                  if (0x7f < uVar11 - uVar6) {
                    uVar6 = *(uint *)(lVar1 + 0x38);
                    uVar8 = CONCAT71(uVar18,6);
                    if (0x7f < uVar11 - uVar6) {
                      uVar6 = *(uint *)(lVar1 + 0x3c);
                      uVar8 = CONCAT71(uVar18,7);
                      if (0x7f < uVar11 - uVar6) {
                        local_8c = FUN_1425bfad0(uVar25,&local_4c);
                        if ((int)local_8c < 0) {
                          iVar12 = 2;
                          local_8c = 0;
                          puVar28 = local_80;
                          uVar13 = local_5c;
                          uVar29 = local_88;
                        }
                        else {
                          cVar10 = *(char *)(lVar1 + 0x4b) + '\x01';
                          if (cVar10 == '\b') {
                            cVar10 = '\0';
                          }
                          bVar5 = *(byte *)(lVar1 + 0x4c + (longlong)*(char *)(lVar1 + 0x4b));
                          uVar8 = (ulonglong)bVar5;
                          *(char *)(lVar1 + 0x4b) = cVar10;
                          local_84 = local_4c;
                          *(uint *)(lVar1 + 0x20 + uVar8 * 4) = local_4c;
                          FUN_1425bfa60(lVar1,uVar8);
                          uVar13 = (uint)bVar5 * 0x10000 + 0xe80000;
                          uVar19 = uVar7 - local_84 | local_8c << 8 | uVar13 | 0x80;
                          iVar12 = 3;
                          local_8c = (uint)CONCAT71((uint7)(uint3)(uVar13 >> 8),1);
                          puVar28 = local_80;
                          uVar13 = local_5c;
                          uVar29 = local_88;
                          local_78 = uVar8;
                        }
                        goto LAB_1425beb13;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar12 = (int)*(char *)(lVar1 + 0x4b);
        do {
          bVar2 = iVar12 < 1;
          iVar12 = iVar12 + -1;
          if (bVar2) {
            iVar12 = iVar14;
          }
          lVar24 = (longlong)iVar12;
        } while (*(char *)(lVar1 + 0x4c + lVar24) != (char)uVar8);
        iVar14 = iVar12 + 1;
        if (iVar14 == 8) {
          iVar14 = 0;
        }
        if (iVar14 != *(char *)(lVar1 + 0x4b)) {
          do {
            lVar24 = (longlong)iVar14;
            *(undefined1 *)(lVar1 + 0x4c + (longlong)iVar12) =
                 *(undefined1 *)(lVar1 + 0x4c + lVar24);
            iVar27 = iVar14 + 1;
            if (iVar27 == 8) {
              iVar27 = 0;
            }
            iVar12 = iVar14;
            iVar14 = iVar27;
          } while (iVar27 != *(char *)(lVar1 + 0x4b));
        }
        *(char *)(lVar1 + 0x4c + lVar24) = (char)uVar8;
        uVar19 = uVar25 - uVar6 | ((uint)uVar8 & 0xff) << 8 | 0xe080;
        iVar12 = 2;
        local_8c = (uint)CONCAT71((int7)((ulonglong)lVar24 >> 8),1);
        puVar28 = local_80;
        local_84 = uVar6;
        local_78 = uVar8;
      }
    }
    goto LAB_1425beb13;
  }
  iVar12 = 2;
  if (1 < uVar6) {
    *puVar20 = uVar25 << 8 | uVar25 >> 8;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)0x0;
    }
    else {
      *puVar31 = uVar13;
      puVar31[1] = uVar13;
      puVar31 = puVar31 + 2;
    }
    puVar21 = puVar20 + 1;
    if (local_80 <= puVar33) {
LAB_1425bf848:
      local_8c = 0;
      uVar7 = 0;
      goto LAB_1425bf8b3;
    }
    lVar24 = 0;
    while( true ) {
      lVar30 = lVar24;
      if ((int)uVar6 < 3) {
        puVar20 = (ushort *)((longlong)puVar20 + lVar30 + 2);
        puVar32 = (ushort *)((longlong)puVar32 + lVar30 + 2);
        local_8c = 0;
        uVar7 = 0;
        goto LAB_1425bf8b0;
      }
      uVar25 = *(ushort *)((longlong)puVar32 + lVar30 + 2);
      uVar11 = uVar25 - 0x3400;
      uVar13 = (uint)uVar8;
      if (0xa3ff < uVar11) break;
      if (uVar6 - 2 < 2) {
        puVar20 = (ushort *)((longlong)puVar20 + lVar30 + 2);
        puVar33 = (ushort *)((longlong)puVar32 + lVar30 + 4);
        goto LAB_1425bf78f;
      }
      *(ushort *)((longlong)puVar21 + lVar30) = uVar25 << 8 | uVar25 >> 8;
      if (puVar31 == (uint *)0x0) {
        puVar31 = (uint *)0x0;
      }
      else {
        *puVar31 = uVar13;
        puVar31[1] = uVar13;
        puVar31 = puVar31 + 2;
      }
      uVar8 = (ulonglong)(uVar13 + 1);
      uVar6 = uVar6 - 2;
      lVar24 = lVar30 + 2;
      if (local_80 <= (ushort *)((longlong)puVar32 + lVar30 + 4)) {
        puVar21 = (ushort *)((longlong)puVar20 + lVar30 + 4);
        puVar33 = (ushort *)((longlong)puVar32 + lVar30 + 4);
        goto LAB_1425bf848;
      }
    }
    uVar22 = uVar13 + 1;
    puVar20 = (ushort *)((longlong)puVar21 + lVar30);
    puVar33 = (ushort *)((longlong)puVar32 + lVar30 + 4);
    uVar15 = uVar8;
    uVar6 = uVar6 - 2;
    goto LAB_1425beba5;
  }
LAB_1425bf78f:
  local_8c = 0;
  uVar19 = (uint)uVar25;
  uVar34 = 1;
  uVar29 = uVar13;
LAB_1425bf795:
  iVar12 = iVar12 - uVar34;
  if (iVar12 - 1U < 4) {
    puVar17 = (undefined1 *)(local_70 + 0x68);
    switch(iVar12) {
    case 4:
      puVar17 = (undefined1 *)(local_70 + 0x69);
      *(char *)(local_70 + 0x68) = (char)(uVar19 >> 0x18);
    case 3:
      *puVar17 = (char)(uVar19 >> 0x10);
      puVar17 = puVar17 + 1;
    case 2:
      *puVar17 = (char)(uVar19 >> 8);
      puVar17 = puVar17 + 1;
    case 1:
      *puVar17 = (char)uVar19;
    }
  }
  *(char *)(local_70 + 0x5b) = (char)iVar12;
  uVar19 = uVar19 >> ((char)iVar12 * '\b' & 0x1fU);
  uVar7 = 0;
  uVar23 = 0xf;
  bVar5 = (byte)uVar19;
  puVar32 = puVar33;
  if (uVar34 == 1) {
    *(byte *)puVar20 = bVar5;
    puVar20 = (ushort *)((longlong)puVar20 + 1);
    if (puVar31 == (uint *)0x0) {
LAB_1425bf8fe:
      puVar31 = (uint *)0x0;
      uVar7 = 0;
      goto LAB_1425bf8b0;
    }
  }
  else {
    bVar9 = (byte)(uVar19 >> 8);
    if (uVar34 == 2) {
      *(byte *)puVar20 = bVar9;
      puVar20 = (ushort *)((longlong)puVar20 + 1);
      if (puVar31 == (uint *)0x0) {
LAB_1425bf8f8:
        *(byte *)puVar20 = bVar5;
        puVar20 = (ushort *)((longlong)puVar20 + 1);
        goto LAB_1425bf8fe;
      }
    }
    else {
      if (uVar34 != 3) goto LAB_1425bf8b0;
      *(byte *)puVar20 = (byte)(uVar19 >> 0x10);
      if (puVar31 == (uint *)0x0) {
        *(byte *)((longlong)puVar20 + 1) = bVar9;
        puVar20 = puVar20 + 1;
        goto LAB_1425bf8f8;
      }
      *puVar31 = uVar29;
      puVar31 = puVar31 + 1;
      *(byte *)((longlong)puVar20 + 1) = bVar9;
      puVar20 = puVar20 + 1;
    }
    *puVar31 = uVar29;
    puVar31 = puVar31 + 1;
    *(byte *)puVar20 = bVar5;
    puVar20 = (ushort *)((longlong)puVar20 + 1);
  }
  *puVar31 = uVar29;
  puVar31 = puVar31 + 1;
LAB_1425bf8b0:
  *local_58 = uVar23;
  puVar21 = puVar20;
  puVar33 = puVar32;
LAB_1425bf8b3:
  *(char *)(lVar1 + 0x48) = (char)local_8c;
  *(char *)(lVar1 + 0x49) = (char)local_78;
  *(uint *)(local_70 + 0x54) = uVar7;
  *(ushort **)(local_68 + 0x10) = puVar33;
  *(ushort **)(local_68 + 0x20) = puVar21;
  *(uint **)(local_68 + 0x30) = puVar31;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
code_r0x0001425bf45e:
  uVar11 = (uint)uVar25;
  uVar22 = uVar13;
  if ((uVar25 & 0x400) != 0) {
LAB_1425bf73a:
    uVar23 = 0xc;
    puVar32 = puVar33;
    goto LAB_1425bf8b0;
  }
  goto LAB_1425be6b5;
}



// FUNCTION 1425bf9d0 FUN_1425bf9d0 body=136 status=ok
// SIG undefined FUN_1425bf9d0(void)

ulonglong FUN_1425bf9d0(int *param_1,int param_2)

{
  uint3 uVar1;
  ulonglong uVar2;
  
  if ((uint)(param_2 - *param_1) < 0x80) {
    return 0;
  }
  uVar1 = (uint3)((uint)(param_2 - *param_1) >> 8);
  uVar2 = CONCAT71((uint7)uVar1,1);
  if ((((0x7f < (uint)(param_2 - param_1[1])) &&
       (uVar2 = (ulonglong)CONCAT31(uVar1,2), 0x7f < (uint)(param_2 - param_1[2]))) &&
      (uVar2 = CONCAT71((uint7)uVar1,3), 0x7f < (uint)(param_2 - param_1[3]))) &&
     (((uVar2 = (ulonglong)CONCAT31(uVar1,4), 0x7f < (uint)(param_2 - param_1[4]) &&
       (uVar2 = CONCAT71((uint7)uVar1,5), 0x7f < (uint)(param_2 - param_1[5]))) &&
      (uVar2 = (ulonglong)CONCAT31(uVar1,6), 0x7f < (uint)(param_2 - param_1[6]))))) {
    uVar2 = (ulonglong)CONCAT31(uVar1,-(0x7fU < (uint)(param_2 - param_1[7]))) | 7;
  }
  return uVar2;
}



// FUNCTION 1425bfa60 FUN_1425bfa60 body=111 status=ok
// SIG undefined FUN_1425bfa60(void)

void FUN_1425bfa60(longlong param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = (int)*(char *)(param_1 + 0x4b);
  do {
    bVar1 = iVar4 < 1;
    iVar4 = iVar4 + -1;
    if (bVar1) {
      iVar4 = 7;
    }
    lVar5 = (longlong)iVar4;
  } while (*(char *)(param_1 + 0x4c + lVar5) != param_2);
  iVar2 = iVar4 + 1;
  if (iVar4 + 1 == 8) {
    iVar2 = 0;
  }
  if (iVar2 != *(char *)(param_1 + 0x4b)) {
    do {
      lVar5 = (longlong)iVar2;
      *(undefined1 *)(param_1 + 0x4c + (longlong)iVar4) = *(undefined1 *)(param_1 + 0x4c + lVar5);
      iVar3 = iVar2 + 1;
      if (iVar2 + 1 == 8) {
        iVar3 = 0;
      }
      iVar4 = iVar2;
      iVar2 = iVar3;
    } while (iVar3 != *(char *)(param_1 + 0x4b));
  }
  *(char *)(param_1 + 0x4c + lVar5) = param_2;
  return;
}



// FUNCTION 1425bfad0 FUN_1425bfad0 body=292 status=ok
// SIG undefined FUN_1425bfad0(void)

uint FUN_1425bfad0(uint param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_1 - 0xc0 < 0x80) {
    *param_2 = 0xc0;
    return 0xf9;
  }
  if (param_1 - 0x250 < 0x80) {
    *param_2 = 0x250;
    return 0xfa;
  }
  if (param_1 - 0x370 < 0x80) {
    *param_2 = 0x370;
    return 0xfb;
  }
  if (0x7f < param_1 - 0x530) {
    if (param_1 - 0x3040 < 0x80) {
      *param_2 = 0x3040;
      return 0xfd;
    }
    if (param_1 - 0x30a0 < 0x80) {
      *param_2 = 0x30a0;
      return 0xfe;
    }
    if (param_1 - 0xff60 < 0x80) {
      *param_2 = 0xff60;
      return 0xff;
    }
    uVar1 = 0xffffffff;
    if (0x7f < param_1) {
      if (((param_1 - 0x1d000 < 0x3000) || (param_1 < 0x3400)) ||
         ((param_1 & 0xffffc000) == 0x10000)) {
        *param_2 = param_1 & 0x7fffff80;
      }
      else {
        if (param_1 == 0xfeff) {
          return 0xffffffff;
        }
        if (0x1fef < param_1 - 0xe000) {
          return 0xffffffff;
        }
        *param_2 = param_1 & 0x7fffff80;
        param_1 = param_1 - 0xac00;
      }
      uVar1 = param_1 >> 7;
    }
    return uVar1;
  }
  *param_2 = 0x530;
  return 0xfc;
}



// FUNCTION 1425bfc00 FUN_1425bfc00 body=270 status=ok
// SIG undefined FUN_1425bfc00(void)

void FUN_1425bfc00(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  size_t sVar5;
  
  if (*(char *)(param_2 + 8) == '\0') {
    puVar4 = (undefined2 *)FUN_1424da030(0x30);
    *(undefined2 **)(param_1 + 0x10) = puVar4;
    if (puVar4 == (undefined2 *)0x0) {
      *param_3 = 7;
    }
    else {
      *puVar4 = 0xfffe;
      *(undefined4 *)(param_1 + 0x48) = 0xffff;
      puVar4[1] = 0;
      *(undefined1 *)((longlong)puVar4 + 0x19) = 0;
      uVar3 = *(uint *)(param_2 + 0xc) & 0xf;
      if (uVar3 < 9) {
        uVar2 = (undefined2)(*(int *)(&DAT_149c407b0 + (ulonglong)uVar3 * 0xc) << 7);
        puVar4[2] = uVar2;
        puVar4[4] = uVar2;
        puVar4[3] = uVar2;
        uVar1 = (&DAT_149c407b4)[(ulonglong)(*(uint *)(param_2 + 0xc) & 0xf) * 3];
        *(undefined4 *)(puVar4 + 10) = uVar1;
        *(undefined4 *)(puVar4 + 8) = uVar1;
        *(undefined4 *)(puVar4 + 6) = uVar1;
        *(undefined1 *)(puVar4 + 0xc) = 1;
        *(undefined8 *)(puVar4 + 0xd) = 0x65762c4949435349;
        *(undefined8 *)((longlong)puVar4 + 0x21) = 0x3d6e6f69737265;
        sVar5 = strlen((char *)(puVar4 + 0xd));
        *(byte *)((longlong)puVar4 + (longlong)(int)sVar5 + 0x1a) =
             *(byte *)(param_2 + 0xc) & 0xf | 0x30;
        *(undefined1 *)((longlong)puVar4 + (longlong)((int)sVar5 + 1) + 0x1a) = 0;
        *(undefined4 *)(puVar4 + 0x16) = 0;
      }
      else {
        FUN_1424da110(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = 0;
        *param_3 = 1;
      }
    }
  }
  return;
}



// FUNCTION 1425bfd10 FUN_1425bfd10 body=42 status=ok
// SIG undefined FUN_1425bfd10(void)

void FUN_1425bfd10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x3e) == '\0') {
      FUN_1424da110();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1425bfd90 FUN_1425bfd90 body=3636 status=ok
// SIG undefined FUN_1425bfd90(void)

void FUN_1425bfd90(longlong param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort *puVar5;
  ushort *puVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  byte *pbVar16;
  int *piVar17;
  ushort *puVar18;
  ushort *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    *param_2 = 1;
  }
  else {
    uVar4 = *(ulonglong *)(param_1 + 0x18);
    uVar20 = *(ulonglong *)(param_1 + 0x10);
    puVar10 = *(ushort **)(param_1 + 0x20);
    puVar5 = *(ushort **)(lVar3 + 0x10);
    iVar15 = *param_2;
    if ((iVar15 < 1) && (uVar20 < uVar4)) {
      puVar6 = *(ushort **)(param_1 + 0x28);
      uVar21 = uVar20;
      do {
        lVar22 = 0;
        while( true ) {
          if (puVar6 <= puVar10) {
            *param_2 = 0xf;
            goto LAB_1425c0b92;
          }
          uVar20 = uVar21 + lVar22 + 1;
          bVar1 = *(byte *)(uVar21 + lVar22);
          uVar14 = (ulonglong)bVar1;
          uVar8 = *puVar5;
          if (uVar8 != 0xef) break;
          if ((byte)(bVar1 + 0xbe) < 10) {
            puVar5[4] = (ushort)(*(int *)(&DAT_149c40820 + (ulonglong)(bVar1 & 0xf) * 4) << 7);
            uVar9 = (uint)*(ushort *)(&DAT_149c40822 + (ulonglong)(bVar1 & 0xf) * 4);
LAB_1425bfe54:
            *(uint *)(puVar5 + 8) = uVar9;
          }
          else {
            if (bVar1 == 0x40) {
              puVar5[4] = puVar5[2];
              uVar9 = *(uint *)(puVar5 + 10);
              goto LAB_1425bfe54;
            }
            if (0x1e < (byte)(bVar1 - 0x21)) {
              *param_2 = 0xc;
              *puVar5 = 0xfffe;
              goto LAB_1425c0ae9;
            }
          }
          *puVar5 = 0xfffe;
          iVar15 = *param_2;
          if ((0 < iVar15) || (lVar22 = lVar22 + 1, uVar4 <= uVar20)) goto joined_r0x0001425c0afd;
        }
        iVar23 = (int)uVar21;
        iVar15 = (int)lVar22;
        if (uVar8 != 0xd9) {
          if (uVar8 != 0xf0) goto LAB_1425c003d;
          if ((byte)(bVar1 + 0x5f) < 0x4e) {
            if ((bVar1 != 0xbf) && (bVar1 != 0xb8)) {
LAB_1425c0bab:
              *param_2 = 10;
              goto LAB_1425c0ae9;
            }
            sVar7 = 0x952;
            if (bVar1 == 0xbf) {
              sVar7 = 0x970;
            }
            pbVar16 = &DAT_149c40ae2;
            if (bVar1 == 0xbf) {
              pbVar16 = &DAT_149c40b00;
            }
            if ((*(uint *)(puVar5 + 8) & (uint)*pbVar16) == 0) goto LAB_1425c0bab;
            *puVar5 = 0xfffe;
            if (*(int *)(puVar5 + 0x16) != 0) {
              uVar8 = (ushort)*(int *)(puVar5 + 0x16);
              if (puVar10 < *(ushort **)(param_1 + 0x28)) {
                *puVar10 = uVar8;
                puVar10 = puVar10 + 1;
                piVar17 = *(int **)(param_1 + 0x30);
                if (piVar17 != (int *)0x0) {
                  *(int **)(param_1 + 0x30) = piVar17 + 1;
                  *piVar17 = iVar15 + (iVar23 - *(int *)(param_1 + 0x10));
                }
              }
              else {
                lVar22 = *(longlong *)(param_1 + 8);
                cVar2 = *(char *)(lVar22 + 0x5d);
                *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
                *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = uVar8;
                *param_2 = 0xf;
              }
              puVar5[0x16] = 0;
              puVar5[0x17] = 0;
            }
            uVar8 = puVar5[4];
            if (puVar10 < *(ushort **)(param_1 + 0x28)) {
              *puVar10 = sVar7 + uVar8;
              puVar10 = puVar10 + 1;
              piVar17 = *(int **)(param_1 + 0x30);
              if (piVar17 != (int *)0x0) {
                *(int **)(param_1 + 0x30) = piVar17 + 1;
                *piVar17 = (iVar23 - *(int *)(param_1 + 0x10)) + iVar15 + -1;
              }
            }
            else {
              lVar22 = *(longlong *)(param_1 + 8);
              cVar2 = *(char *)(lVar22 + 0x5d);
              *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
              *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = sVar7 + uVar8;
              *param_2 = 0xf;
            }
            goto LAB_1425c06b0;
          }
          *puVar5 = 0xfffe;
          *param_2 = 0xc;
LAB_1425c0ae9:
          *(byte *)(*(longlong *)(param_1 + 8) + 0x41) = bVar1;
          *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x40) = 1;
          iVar15 = *param_2;
          break;
        }
        puVar18 = *(ushort **)(param_1 + 0x28);
        if (*(int *)(puVar5 + 0x16) != 0) {
          uVar8 = (ushort)*(int *)(puVar5 + 0x16);
          if (puVar10 < puVar18) {
            *puVar10 = uVar8;
            puVar10 = puVar10 + 1;
            piVar17 = *(int **)(param_1 + 0x30);
            if (piVar17 != (int *)0x0) {
              *(int **)(param_1 + 0x30) = piVar17 + 1;
              *piVar17 = iVar15 + (iVar23 - *(int *)(param_1 + 0x10));
            }
          }
          else {
            lVar22 = *(longlong *)(param_1 + 8);
            cVar2 = *(char *)(lVar22 + 0x5d);
            *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
            *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = uVar8;
            *param_2 = 0xf;
          }
          puVar5[0x16] = 0;
          puVar5[0x17] = 0;
          puVar18 = *(ushort **)(param_1 + 0x28);
        }
        uVar8 = 0x200d;
        if (bVar1 == 0xe8) {
          uVar8 = 0x20;
        }
        if (puVar10 < puVar18) {
          *puVar10 = uVar8;
          puVar10 = puVar10 + 1;
          piVar17 = *(int **)(param_1 + 0x30);
          if (piVar17 != (int *)0x0) {
            *(int **)(param_1 + 0x30) = piVar17 + 1;
            *piVar17 = (iVar23 - *(int *)(param_1 + 0x10)) + iVar15 + -1;
          }
        }
        else {
          lVar22 = *(longlong *)(param_1 + 8);
          cVar2 = *(char *)(lVar22 + 0x5d);
          *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
          *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = uVar8;
          *param_2 = 0xf;
        }
        *puVar5 = 0xfffe;
        uVar8 = 0xfffe;
LAB_1425c003d:
        switch(bVar1) {
        case 0xd9:
        case 0xef:
        case 0xf0:
          *puVar5 = (ushort)bVar1;
          iVar13 = *(int *)(lVar3 + 0x48);
          if (iVar13 != 0xffff) {
            if (*(int *)(puVar5 + 0x16) != 0) {
              uVar8 = (ushort)*(int *)(puVar5 + 0x16);
              if (puVar10 < *(ushort **)(param_1 + 0x28)) {
                *puVar10 = uVar8;
                puVar10 = puVar10 + 1;
                piVar17 = *(int **)(param_1 + 0x30);
                if (piVar17 != (int *)0x0) {
                  *(int **)(param_1 + 0x30) = piVar17 + 1;
                  *piVar17 = iVar15 + (iVar23 - *(int *)(param_1 + 0x10));
                }
              }
              else {
                lVar22 = *(longlong *)(param_1 + 8);
                cVar2 = *(char *)(lVar22 + 0x5d);
                *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
                *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = uVar8;
                *param_2 = 0xf;
              }
              puVar5[0x16] = 0;
              puVar5[0x17] = 0;
              iVar13 = *(int *)(lVar3 + 0x48);
            }
            if (((0xa0 < iVar13) && (1 < iVar13 - 0x964U)) && (1 < iVar13 - 0x200cU)) {
              iVar13 = iVar13 + (uint)puVar5[4];
              *(int *)(lVar3 + 0x48) = iVar13;
            }
            if (puVar10 < *(ushort **)(param_1 + 0x28)) {
              *puVar10 = (ushort)iVar13;
              puVar10 = puVar10 + 1;
              piVar17 = *(int **)(param_1 + 0x30);
              if (piVar17 != (int *)0x0) {
                *(int **)(param_1 + 0x30) = piVar17 + 1;
                *piVar17 = (iVar23 - *(int *)(param_1 + 0x10)) + iVar15 + -1;
              }
            }
            else {
              lVar22 = *(longlong *)(param_1 + 8);
              cVar2 = *(char *)(lVar22 + 0x5d);
              *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
              *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = (ushort)iVar13;
              *param_2 = 0xf;
            }
            goto LAB_1425c06a6;
          }
          goto LAB_1425c06b0;
        case 0xda:
        case 0xdb:
        case 0xdc:
        case 0xdd:
        case 0xde:
        case 0xdf:
        case 0xe1:
        case 0xe2:
        case 0xe3:
        case 0xe4:
        case 0xe5:
        case 0xe6:
        case 0xe7:
        case 0xeb:
        case 0xec:
        case 0xed:
        case 0xee:
switchD_1425c0063_caseD_da:
          uVar9 = (uint)*(ushort *)(&DAT_149c40850 + uVar14 * 2);
          if (bVar1 < 0xa1) break;
LAB_1425c0198:
          if ((*(uint *)(puVar5 + 8) & (uint)(byte)(&DAT_149c40a90)[uVar9 & 0x7f]) == 0) {
            if (bVar1 != 0xd0) {
              uVar9 = 0xffff;
            }
            if (puVar5[4] != 0x300) {
              uVar9 = 0xffff;
            }
          }
          break;
        case 0xe0:
          if (((char)uVar8 != -0x5c) || (uVar9 = 0x904, (*(uint *)(puVar5 + 8) & 0x80) == 0)) {
            uVar9 = 0x946;
            if ((*(uint *)(puVar5 + 8) & 0x87) == 0) {
              uVar9 = 0xffff;
            }
            uVar14 = 0xe0;
            break;
          }
LAB_1425c0245:
          *puVar5 = 0xfffe;
          goto LAB_1425c0525;
        case 0xe8:
          if (uVar8 == 0xe8) {
            uVar9 = 0x200c;
            uVar14 = 0xfffe;
          }
          else {
            uVar9 = 0x94d;
            if ((char)puVar5[8] == '\0') {
              uVar9 = 0xffff;
            }
            uVar14 = 0xe8;
          }
          break;
        case 0xe9:
          if (uVar8 == 0xe8) {
            uVar9 = 0x200d;
            uVar14 = 0xfffe;
            break;
          }
          if ((uVar8 == 0xc0) && (puVar5[4] == 0x100)) {
            puVar18 = *(ushort **)(param_1 + 0x28);
            puVar19 = puVar10;
            if (*(int *)(puVar5 + 0x16) != 0) {
              uVar8 = (ushort)*(int *)(puVar5 + 0x16);
              if (puVar10 < puVar18) {
                *puVar10 = uVar8;
                puVar10 = puVar10 + 1;
                piVar17 = *(int **)(param_1 + 0x30);
                if (piVar17 != (int *)0x0) {
                  *(int **)(param_1 + 0x30) = piVar17 + 1;
                  *piVar17 = iVar15 + (iVar23 - *(int *)(param_1 + 0x10));
                }
              }
              else {
                lVar22 = *(longlong *)(param_1 + 8);
                cVar2 = *(char *)(lVar22 + 0x5d);
                *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
                *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = uVar8;
                *param_2 = 0xf;
              }
              puVar5[0x16] = 0;
              puVar5[0x17] = 0;
              puVar18 = *(ushort **)(param_1 + 0x28);
              puVar19 = puVar10;
            }
            if (puVar19 < puVar18) {
              *puVar19 = 0xa5c;
              piVar17 = *(int **)(param_1 + 0x30);
              if (piVar17 != (int *)0x0) {
                *(int **)(param_1 + 0x30) = piVar17 + 1;
                *piVar17 = (iVar23 - *(int *)(param_1 + 0x10)) + iVar15 + -1;
              }
              puVar10 = puVar19 + 1;
              if (0 < *param_2) goto LAB_1425c07b5;
              if (puVar10 < *(ushort **)(param_1 + 0x28)) {
                puVar19[1] = 0xa4d;
                piVar17 = *(int **)(param_1 + 0x30);
                if (piVar17 != (int *)0x0) {
                  *(int **)(param_1 + 0x30) = piVar17 + 1;
                  *piVar17 = (iVar23 - *(int *)(param_1 + 0x10)) + iVar15 + -1;
                }
                puVar10 = puVar19 + 2;
                if (0 < *param_2) goto LAB_1425c0891;
                if (puVar10 < *(ushort **)(param_1 + 0x28)) {
                  puVar19[2] = 0xa39;
                  puVar10 = puVar19 + 3;
                  piVar17 = *(int **)(param_1 + 0x30);
                  if (piVar17 != (int *)0x0) {
                    *(int **)(param_1 + 0x30) = piVar17 + 1;
                    *piVar17 = (iVar23 - *(int *)(param_1 + 0x10)) + iVar15 + -1;
                  }
                }
                else {
                  lVar22 = *(longlong *)(param_1 + 8);
                  cVar2 = *(char *)(lVar22 + 0x5d);
                  *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
                  *(undefined2 *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = 0xa39;
                  *param_2 = 0xf;
                }
              }
              else {
                lVar22 = *(longlong *)(param_1 + 8);
                cVar2 = *(char *)(lVar22 + 0x5d);
                *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
                *(undefined2 *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = 0xa4d;
                *param_2 = 0xf;
LAB_1425c0891:
                lVar22 = *(longlong *)(param_1 + 8);
                cVar2 = *(char *)(lVar22 + 0x5d);
                *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
                *(undefined2 *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = 0xa39;
              }
            }
            else {
              lVar22 = *(longlong *)(param_1 + 8);
              cVar2 = *(char *)(lVar22 + 0x5d);
              *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
              *(undefined2 *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = 0xa5c;
              *param_2 = 0xf;
              puVar10 = puVar19;
LAB_1425c07b5:
              lVar22 = *(longlong *)(param_1 + 8);
              cVar2 = *(char *)(lVar22 + 0x5d);
              *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
              *(undefined2 *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = 0xa4d;
              lVar22 = *(longlong *)(param_1 + 8);
              cVar2 = *(char *)(lVar22 + 0x5d);
              *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
              *(undefined2 *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = 0xa39;
            }
            *(undefined4 *)(lVar3 + 0x48) = 0xffff;
            *puVar5 = 0xfffe;
            goto LAB_1425c06b0;
          }
          switch(uVar8 & 0xff) {
          case 0xa1:
            lVar22 = 4;
            break;
          default:
            goto switchD_1425c06eb_caseD_a2;
          case 0xa6:
            lVar22 = 1;
            break;
          case 0xa7:
            lVar22 = 0xd;
            break;
          case 0xaa:
            lVar22 = 0xc;
            break;
          case 0xb3:
            lVar22 = 5;
            break;
          case 0xb4:
            lVar22 = 6;
            break;
          case 0xb5:
            lVar22 = 7;
            break;
          case 0xba:
            lVar22 = 8;
            break;
          case 0xbf:
            lVar22 = 9;
            break;
          case 0xc0:
            lVar22 = 10;
            break;
          case 0xc9:
            lVar22 = 0xb;
            break;
          case 0xdb:
            lVar22 = 0xe;
            break;
          case 0xdc:
            lVar22 = 0xf;
            break;
          case 0xdf:
            lVar22 = 3;
            break;
          case 0xea:
            lVar22 = 2;
          }
          uVar8 = *(ushort *)(&UNK_149c40a52 + lVar22 * 4);
          uVar9 = (uint)uVar8;
          if ((*(uint *)(puVar5 + 8) & (uint)(byte)(&DAT_149c40a90)[(ulonglong)uVar8 & 0xff]) == 0)
          {
switchD_1425c06eb_caseD_a2:
            uVar9 = (uint)*(ushort *)(&DAT_149c40850 + uVar14 * 2);
            goto LAB_1425c0198;
          }
          *puVar5 = 0xfffe;
          *(undefined4 *)(lVar3 + 0x48) = 0xffff;
          if (puVar5[4] == 0x100) {
            if (*(int *)(puVar5 + 0x16) != 0) {
              uVar11 = (ushort)*(int *)(puVar5 + 0x16);
              if (puVar10 < *(ushort **)(param_1 + 0x28)) {
                *puVar10 = uVar11;
                puVar10 = puVar10 + 1;
                piVar17 = *(int **)(param_1 + 0x30);
                if (piVar17 != (int *)0x0) {
                  *(int **)(param_1 + 0x30) = piVar17 + 1;
                  *piVar17 = iVar15 + (iVar23 - *(int *)(param_1 + 0x10));
                }
              }
              else {
                lVar22 = *(longlong *)(param_1 + 8);
                cVar2 = *(char *)(lVar22 + 0x5d);
                *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
                *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = uVar11;
                *param_2 = 0xf;
              }
              puVar5[0x16] = 0;
              puVar5[0x17] = 0;
            }
            if ((1 < uVar8 - 0x964) && (1 < uVar8 - 0x200c)) {
              uVar8 = uVar8 + puVar5[4];
            }
            if (puVar10 < *(ushort **)(param_1 + 0x28)) {
              *puVar10 = uVar8;
              puVar10 = puVar10 + 1;
              piVar17 = *(int **)(param_1 + 0x30);
              if (piVar17 != (int *)0x0) {
                *(int **)(param_1 + 0x30) = piVar17 + 1;
                *piVar17 = (iVar23 - *(int *)(param_1 + 0x10)) + iVar15 + -1;
              }
            }
            else {
              lVar22 = *(longlong *)(param_1 + 8);
              cVar2 = *(char *)(lVar22 + 0x5d);
              *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
              *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = uVar8;
              *param_2 = 0xf;
            }
            goto LAB_1425c06b0;
          }
          goto LAB_1425c0519;
        case 0xea:
          uVar9 = 0x965;
          if (uVar8 == 0xea) goto LAB_1425c0245;
          uVar9 = 0x964;
          if ((puVar5[8] & 0x80) == 0) {
            uVar9 = 0xffff;
          }
          uVar14 = 0xea;
          break;
        default:
          if ((bVar1 != 10) && (bVar1 != 0xd)) goto switchD_1425c0063_caseD_da;
          *(undefined1 *)((longlong)puVar5 + 0x19) = 1;
          uVar9 = (uint)*(ushort *)(&DAT_149c40850 + uVar14 * 2);
        }
        *puVar5 = (ushort)uVar14;
        if (*(int *)(lVar3 + 0x48) == 0xffff) {
LAB_1425c0519:
          if (uVar9 == 0xffff) {
            *param_2 = 10;
            goto LAB_1425c0ae9;
          }
LAB_1425c0525:
          *(uint *)(lVar3 + 0x48) = uVar9;
          if (*(char *)((longlong)puVar5 + 0x19) == '\x01') {
            puVar5[4] = puVar5[2];
            *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(puVar5 + 10);
            *(undefined1 *)((longlong)puVar5 + 0x19) = 0;
          }
        }
        else {
          uVar8 = puVar5[4];
          iVar13 = *(int *)(puVar5 + 0x16);
          if ((uVar8 != 0x100) || (iVar13 - 0xa50U < 0xffffffb0)) {
            puVar18 = puVar10;
            if (iVar13 != 0) goto LAB_1425c038a;
LAB_1425c03e6:
            uVar12 = (uint)uVar8;
            puVar10 = puVar18;
            if ((uVar12 == 0x100) && (uVar9 == 0x902)) {
              iVar13 = *(int *)(lVar3 + 0x48);
              if ((iVar13 - 0x950U < 0xffffffb0) || ((byte)(&DAT_149c40b10)[iVar13 - 0x900] < 2))
              goto LAB_1425c0495;
              *(int *)(lVar3 + 0x48) = iVar13 + 0x100;
              uVar8 = (ushort)(iVar13 + 0x100);
              if (puVar18 < *(ushort **)(param_1 + 0x28)) {
                *puVar18 = uVar8;
                puVar10 = puVar18 + 1;
                piVar17 = *(int **)(param_1 + 0x30);
                uVar9 = 0x970;
                if (piVar17 == (int *)0x0) goto LAB_1425c0511;
LAB_1425c04d8:
                *(int **)(param_1 + 0x30) = piVar17 + 1;
                *piVar17 = (iVar23 - *(int *)(param_1 + 0x10)) + iVar15 + -1;
                puVar10 = puVar18 + 1;
              }
              else {
                lVar22 = *(longlong *)(param_1 + 8);
                cVar2 = *(char *)(lVar22 + 0x5d);
                *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
                *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = uVar8;
                *param_2 = 0xf;
                uVar9 = 0x970;
              }
            }
            else {
              iVar13 = *(int *)(lVar3 + 0x48);
              if (((uVar12 == 0x100) && ((uVar9 == 0x94d && (0xffffffaf < iVar13 - 0x950U)))) &&
                 (((&DAT_149c40b10)[iVar13 - 0x900] & 1) != 0)) {
                *(int *)(puVar5 + 0x16) = iVar13 + 0x100;
                uVar9 = 0x94d;
                goto LAB_1425c0511;
              }
LAB_1425c0495:
              if ((0xa0 < iVar13) && ((1 < iVar13 - 0x964U && (1 < iVar13 - 0x200cU)))) {
                iVar13 = iVar13 + uVar12;
                *(int *)(lVar3 + 0x48) = iVar13;
              }
              if (puVar18 < *(ushort **)(param_1 + 0x28)) {
                *puVar18 = (ushort)iVar13;
                piVar17 = *(int **)(param_1 + 0x30);
                puVar10 = puVar18 + 1;
                if (piVar17 != (int *)0x0) goto LAB_1425c04d8;
              }
              else {
                lVar22 = *(longlong *)(param_1 + 8);
                cVar2 = *(char *)(lVar22 + 0x5d);
                *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
                *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = (ushort)iVar13;
                *param_2 = 0xf;
              }
            }
LAB_1425c0511:
            *(undefined4 *)(lVar3 + 0x48) = 0xffff;
            goto LAB_1425c0519;
          }
          if (((*(int *)(lVar3 + 0x48) != 0x94d) || (((&DAT_149c40b10)[iVar13 - 0xa00] & 1) == 0))
             || (uVar9 + 0x100 != iVar13)) {
LAB_1425c038a:
            if (puVar10 < *(ushort **)(param_1 + 0x28)) {
              *puVar10 = (ushort)iVar13;
              puVar10 = puVar10 + 1;
              piVar17 = *(int **)(param_1 + 0x30);
              if (piVar17 != (int *)0x0) {
                *(int **)(param_1 + 0x30) = piVar17 + 1;
                *piVar17 = iVar15 + (iVar23 - *(int *)(param_1 + 0x10));
              }
            }
            else {
              lVar22 = *(longlong *)(param_1 + 8);
              cVar2 = *(char *)(lVar22 + 0x5d);
              *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
              *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = (ushort)iVar13;
              *param_2 = 0xf;
            }
            puVar5[0x16] = 0;
            puVar5[0x17] = 0;
            uVar8 = puVar5[4];
            puVar18 = puVar10;
            goto LAB_1425c03e6;
          }
          iVar15 = (iVar23 + -2 + iVar15) - *(int *)(param_1 + 0x10);
          if (puVar10 < *(ushort **)(param_1 + 0x28)) {
            *puVar10 = 0xa71;
            puVar10 = puVar10 + 1;
            piVar17 = *(int **)(param_1 + 0x30);
            if (piVar17 != (int *)0x0) {
              *(int **)(param_1 + 0x30) = piVar17 + 1;
              *piVar17 = iVar15;
            }
          }
          else {
            lVar22 = *(longlong *)(param_1 + 8);
            cVar2 = *(char *)(lVar22 + 0x5d);
            *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
            *(undefined2 *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = 0xa71;
            *param_2 = 0xf;
          }
          uVar8 = puVar5[0x16];
          if (puVar10 < *(ushort **)(param_1 + 0x28)) {
            *puVar10 = uVar8;
            puVar10 = puVar10 + 1;
            piVar17 = *(int **)(param_1 + 0x30);
            if (piVar17 != (int *)0x0) {
              *(int **)(param_1 + 0x30) = piVar17 + 1;
              *piVar17 = iVar15;
            }
          }
          else {
            lVar22 = *(longlong *)(param_1 + 8);
            cVar2 = *(char *)(lVar22 + 0x5d);
            *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
            *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = uVar8;
            *param_2 = 0xf;
          }
          puVar5[0x16] = 0;
          puVar5[0x17] = 0;
LAB_1425c06a6:
          *(undefined4 *)(lVar3 + 0x48) = 0xffff;
        }
LAB_1425c06b0:
        iVar15 = *param_2;
        if ((0 < iVar15) || (uVar21 = uVar20, uVar4 <= uVar20)) break;
      } while( true );
    }
joined_r0x0001425c0afd:
    uVar21 = uVar20;
    if ((iVar15 < 1) && ((*(char *)(param_1 + 2) != '\0' && (uVar21 == uVar4)))) {
      lVar22 = *(longlong *)(param_1 + 8);
      uVar9 = *puVar5 - 0xd9;
      if ((uVar9 < 0x18) && ((0xc00001U >> (uVar9 & 0x1f) & 1) != 0)) {
        *(char *)(lVar22 + 0x41) = (char)*puVar5;
        *(undefined1 *)(lVar22 + 0x40) = 1;
        *puVar5 = 0xfffe;
      }
      else {
        *(undefined1 *)(lVar22 + 0x40) = 0;
      }
      iVar15 = *(int *)(lVar3 + 0x48);
      if (iVar15 != 0xffff) {
        if (((0xa0 < iVar15) && (1 < iVar15 - 0x964U)) && (1 < iVar15 - 0x200cU)) {
          iVar15 = iVar15 + (uint)puVar5[4];
          *(int *)(lVar3 + 0x48) = iVar15;
        }
        if (puVar10 < *(ushort **)(param_1 + 0x28)) {
          *puVar10 = (ushort)iVar15;
          puVar10 = puVar10 + 1;
          piVar17 = *(int **)(param_1 + 0x30);
          if (piVar17 != (int *)0x0) {
            *(int **)(param_1 + 0x30) = piVar17 + 1;
            *piVar17 = (int)uVar4 + ~*(uint *)(param_1 + 0x10);
          }
        }
        else {
          lVar22 = *(longlong *)(param_1 + 8);
          cVar2 = *(char *)(lVar22 + 0x5d);
          *(char *)(lVar22 + 0x5d) = cVar2 + '\x01';
          *(ushort *)(lVar22 + 0x90 + (longlong)cVar2 * 2) = (ushort)iVar15;
          *param_2 = 0xf;
        }
        *(undefined4 *)(lVar3 + 0x48) = 0xffff;
      }
    }
LAB_1425c0b92:
    *(ushort **)(param_1 + 0x20) = puVar10;
    *(ulonglong *)(param_1 + 0x10) = uVar21;
  }
  return;
}



// FUNCTION 1425c0be0 FUN_1425c0be0 body=2129 status=ok
// SIG undefined FUN_1425c0be0(void)

void FUN_1425c0be0(longlong param_1,int *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ushort *puVar8;
  longlong lVar9;
  int iVar10;
  undefined1 uVar11;
  ushort uVar12;
  undefined1 uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  int *piVar19;
  uint uVar20;
  ushort *puVar21;
  ushort *puVar22;
  bool bVar23;
  
  lVar6 = *(longlong *)(param_1 + 8);
  if (lVar6 != 0) {
    puVar15 = *(undefined1 **)(param_1 + 0x20);
    puVar7 = *(undefined1 **)(param_1 + 0x28);
    if (puVar15 <= puVar7) {
      puVar22 = *(ushort **)(param_1 + 0x10);
      puVar8 = *(ushort **)(param_1 + 0x18);
      if (puVar22 <= puVar8) {
        uVar20 = *(uint *)(lVar6 + 0x54);
        if (uVar20 == 0) {
          if (puVar22 < puVar8) {
            piVar19 = *(int **)(param_1 + 0x30);
            lVar6 = *(longlong *)(lVar6 + 0x10);
            uVar16 = (uint)(*(ushort *)(lVar6 + 6) >> 7);
            do {
              puVar21 = puVar22;
              lVar9 = 0;
LAB_1425c0ce2:
              lVar18 = lVar9;
              if (*(int *)(*(longlong *)(param_1 + 8) + 0x50) == 10) {
                uVar5 = *(undefined4 *)(&DAT_149c407b8 + (ulonglong)(uVar16 & 0xffff) * 0xc);
                *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
                puVar22 = (ushort *)((longlong)puVar21 + lVar18);
                uVar11 = (undefined1)uVar5;
                if (puVar7 <= puVar15) {
                  lVar6 = *(longlong *)(param_1 + 8);
                  cVar3 = *(char *)(lVar6 + 0x5b);
                  *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                  *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = 0xef;
                  lVar6 = *(longlong *)(param_1 + 8);
                  cVar3 = *(char *)(lVar6 + 0x5b);
                  *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                  *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = uVar11;
                  *param_2 = 0xf;
                  goto LAB_1425c129e;
                }
                lVar9 = *(longlong *)(param_1 + 0x10);
                puVar1 = puVar15 + 1;
                *puVar15 = 0xef;
                if (piVar19 == (int *)0x0) {
                  if (puVar7 <= puVar1) goto LAB_1425c1259;
                  *puVar1 = uVar11;
                  piVar19 = (int *)0x0;
                }
                else {
                  iVar10 = (int)((ulonglong)((longlong)puVar22 - lVar9) >> 1) + -1;
                  *piVar19 = iVar10;
                  if (puVar7 <= puVar1) {
LAB_1425c1259:
                    lVar6 = *(longlong *)(param_1 + 8);
                    cVar3 = *(char *)(lVar6 + 0x5b);
                    *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                    *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = uVar11;
                    *param_2 = 0xf;
                    puVar15 = puVar1;
                    goto LAB_1425c129e;
                  }
                  *puVar1 = uVar11;
                  piVar19[1] = iVar10;
                  piVar19 = piVar19 + 2;
                }
                puVar15 = puVar15 + 2;
                if (0 < *param_2) goto LAB_1425c129e;
              }
              uVar12 = *(ushort *)((longlong)puVar21 + lVar18);
              uVar20 = (uint)uVar12;
              if (uVar20 < 0xa1) {
                *(uint *)(*(longlong *)(param_1 + 8) + 0x50) = uVar20;
                if (puVar15 < puVar7) {
                  lVar9 = *(longlong *)(param_1 + 0x10);
                  *puVar15 = (char)uVar12;
                  if (piVar19 == (int *)0x0) {
                    piVar19 = (int *)0x0;
                  }
                  else {
                    *piVar19 = (int)((ulonglong)((longlong)puVar21 + (lVar18 - lVar9) + 2) >> 1) +
                               -1;
                    piVar19 = piVar19 + 1;
                  }
                  puVar15 = puVar15 + 1;
                  if (*param_2 < 1) goto LAB_1425c0ccd;
                }
                else {
                  lVar6 = *(longlong *)(param_1 + 8);
                  cVar3 = *(char *)(lVar6 + 0x5b);
                  *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                  *(char *)(lVar6 + 0x68 + (longlong)cVar3) = (char)uVar12;
                  *param_2 = 0xf;
                }
                goto LAB_1425c1293;
              }
              sVar4 = *(short *)(lVar6 + 2);
              if (uVar20 == 0x200c) {
                *(undefined2 *)(lVar6 + 2) = 0;
                if (sVar4 == 0) goto LAB_1425c0ccd;
                uVar20 = 0x200c;
                uVar17 = 0xe8;
              }
              else {
                if (uVar20 == 0x200d) {
                  uVar17 = (uint)(sVar4 != 0) * 0x10 + 0xd9;
                  *(undefined2 *)(lVar6 + 2) = 0;
                  uVar20 = 0x200d;
                  goto LAB_1425c0ffd;
                }
                uVar2 = uVar20 - 0x900;
                uVar17 = 0xffff;
                if ((uVar2 & 0xffff) < 0x480) {
                  if ((ushort)(uVar12 - 0x966) < 0xfffe) {
                    uVar17 = uVar20 - 0x881;
                    if (-1 < (int)uVar2) {
                      uVar17 = uVar2;
                    }
                    uVar16 = (int)uVar17 >> 7;
                    uVar17 = uVar17 & 0xff80;
                    if (((short)uVar17 == *(short *)(lVar6 + 6)) &&
                       (*(char *)(lVar6 + 0x18) == '\0')) {
                      bVar23 = false;
                    }
                    else {
                      *(short *)(lVar6 + 6) = (short)uVar17;
                      *(undefined4 *)(lVar6 + 0xc) =
                           (&DAT_149c407b4)[(ulonglong)(uVar16 & 0xffff) * 3];
                      *(undefined1 *)(lVar6 + 0x18) = 0;
                      bVar23 = true;
                    }
                    if (uVar17 == 0x100) {
                      if (uVar20 == 0xa70) {
                        uVar20 = 0xa02;
                      }
                      else if (uVar20 == 0xa71) {
                        *(undefined2 *)(lVar6 + 2) = 0xa71;
                        uVar20 = 0xa71;
                      }
                    }
                    uVar20 = uVar20 - uVar17;
                  }
                  else {
                    bVar23 = false;
                  }
                  uVar12 = *(ushort *)(&DAT_149c40b60 + (ulonglong)(uVar20 & 0xff) * 2);
                  if ((*(uint *)(lVar6 + 0xc) & (uint)(byte)(&DAT_149c40a90)[uVar20 & 0xff]) == 0) {
                    if (*(short *)(lVar6 + 6) != 0x300) {
                      uVar12 = 0xffff;
                    }
                    if (uVar20 != 0x931) {
                      uVar12 = 0xffff;
                    }
                  }
                  uVar17 = (uint)uVar12;
                  if (bVar23) {
                    uVar11 = (undefined1)
                             *(undefined4 *)(&DAT_149c407b8 + (ulonglong)(uVar16 & 0xffff) * 0xc);
                    if (puVar7 <= puVar15) {
                      lVar9 = *(longlong *)(param_1 + 8);
                      cVar3 = *(char *)(lVar9 + 0x5b);
                      *(char *)(lVar9 + 0x5b) = cVar3 + '\x01';
                      *(undefined1 *)(lVar9 + 0x68 + (longlong)cVar3) = 0xef;
                      lVar9 = *(longlong *)(param_1 + 8);
                      cVar3 = *(char *)(lVar9 + 0x5b);
                      *(char *)(lVar9 + 0x5b) = cVar3 + '\x01';
                      *(undefined1 *)(lVar9 + 0x68 + (longlong)cVar3) = uVar11;
                      *param_2 = 0xf;
                      goto LAB_1425c0ffd;
                    }
                    lVar9 = *(longlong *)(param_1 + 0x10);
                    puVar1 = puVar15 + 1;
                    *puVar15 = 0xef;
                    if (piVar19 == (int *)0x0) {
                      if (puVar7 <= puVar1) {
                        piVar19 = (int *)0x0;
                        goto LAB_1425c11f9;
                      }
                      *puVar1 = uVar11;
                      piVar19 = (int *)0x0;
                    }
                    else {
                      iVar10 = (int)((ulonglong)((longlong)puVar21 + (lVar18 - lVar9) + 2) >> 1) +
                               -1;
                      *piVar19 = iVar10;
                      if (puVar7 <= puVar1) {
                        piVar19 = piVar19 + 1;
LAB_1425c11f9:
                        lVar9 = *(longlong *)(param_1 + 8);
                        cVar3 = *(char *)(lVar9 + 0x5b);
                        *(char *)(lVar9 + 0x5b) = cVar3 + '\x01';
                        *(undefined1 *)(lVar9 + 0x68 + (longlong)cVar3) = uVar11;
                        *param_2 = 0xf;
                        puVar15 = puVar1;
                        goto LAB_1425c0ffd;
                      }
                      *puVar1 = uVar11;
                      piVar19[1] = iVar10;
                      piVar19 = piVar19 + 2;
                    }
                    puVar15 = puVar15 + 2;
                    if (0 < *param_2) goto LAB_1425c0ffd;
                  }
                  if ((uVar20 == 0x971) && (*(short *)(lVar6 + 6) == 0x100)) goto LAB_1425c11d7;
                }
                *(undefined2 *)(lVar6 + 2) = 0;
              }
LAB_1425c0ffd:
              uVar11 = (undefined1)uVar17;
              if ((((*(short *)(lVar6 + 6) == 0x100) && (sVar4 == 0xa71)) &&
                  (0xffffffaf < uVar20 - 0x950)) && (((&DAT_149c40b10)[uVar20 - 0x900] & 1) != 0)) {
                *(undefined2 *)(lVar6 + 2) = 0;
                uVar20 = uVar17 << 0x10 | uVar17 | 0xe800;
                uVar13 = (undefined1)(uVar20 >> 8);
                if (puVar15 < puVar7) {
                  iVar10 = (int)((ulonglong)
                                 ((longlong)puVar21 + (lVar18 - *(longlong *)(param_1 + 0x10)) + 2)
                                >> 1);
                  iVar14 = iVar10 + -1;
                  if (uVar20 < 0x10000) {
LAB_1425c115d:
                    if (puVar15 < puVar7) {
                      *puVar15 = uVar13;
                      if (piVar19 == (int *)0x0) goto LAB_1425c119f;
                      *piVar19 = iVar14;
                      piVar19 = piVar19 + 1;
LAB_1425c11a2:
                      if (puVar15 + 1 < puVar7) {
                        puVar15[1] = uVar11;
                        if (piVar19 == (int *)0x0) {
                          piVar19 = (int *)0x0;
                        }
                        else {
                          *piVar19 = iVar14;
                          piVar19 = piVar19 + 1;
                        }
                        puVar15 = puVar15 + 2;
                        goto LAB_1425c11cb;
                      }
                      lVar6 = *(longlong *)(param_1 + 8);
                      cVar3 = *(char *)(lVar6 + 0x5b);
                      *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                      *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = uVar11;
                      *param_2 = 0xf;
                      puVar22 = (ushort *)((longlong)puVar21 + lVar18 + 2);
                      puVar15 = puVar15 + 1;
                      goto LAB_1425c129e;
                    }
                  }
                  else {
                    *puVar15 = uVar11;
                    puVar15 = puVar15 + 1;
                    if (piVar19 != (int *)0x0) {
                      iVar14 = iVar10 + -2;
                      *piVar19 = iVar14;
                      piVar19 = piVar19 + 1;
                      goto LAB_1425c115d;
                    }
                    if (puVar15 < puVar7) {
                      *puVar15 = uVar13;
LAB_1425c119f:
                      piVar19 = (int *)0x0;
                      goto LAB_1425c11a2;
                    }
                  }
                  lVar6 = *(longlong *)(param_1 + 8);
                  cVar3 = *(char *)(lVar6 + 0x5b);
                  *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                  *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = uVar13;
                  lVar6 = *(longlong *)(param_1 + 8);
                  cVar3 = *(char *)(lVar6 + 0x5b);
                  *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                  *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = uVar11;
LAB_1425c13ce:
                  *param_2 = 0xf;
                  puVar22 = (ushort *)((longlong)puVar21 + lVar18 + 2);
                }
                else {
                  if ((uVar17 << 0x10 & 0xff0000) != 0) {
                    lVar6 = *(longlong *)(param_1 + 8);
                    cVar3 = *(char *)(lVar6 + 0x5b);
                    *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                    *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = uVar11;
                  }
                  puVar22 = (ushort *)((longlong)puVar21 + lVar18 + 2);
                  lVar6 = *(longlong *)(param_1 + 8);
                  cVar3 = *(char *)(lVar6 + 0x5b);
                  *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                  *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = uVar13;
                  lVar6 = *(longlong *)(param_1 + 8);
                  cVar3 = *(char *)(lVar6 + 0x5b);
                  *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                  *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = uVar11;
                  *param_2 = 0xf;
                }
                goto LAB_1425c129e;
              }
              if (uVar17 == 0xe8) {
                *(undefined2 *)(lVar6 + 2) = 0xe8;
                if (puVar15 < puVar7) {
                  iVar10 = (int)((ulonglong)
                                 ((longlong)puVar21 + (lVar18 - *(longlong *)(param_1 + 0x10)) + 2)
                                >> 1) + -1;
LAB_1425c10dd:
                  *puVar15 = uVar11;
                  puVar15 = puVar15 + 1;
                  if (piVar19 == (int *)0x0) {
                    piVar19 = (int *)0x0;
                  }
                  else {
                    *piVar19 = iVar10;
                    piVar19 = piVar19 + 1;
                  }
                  goto LAB_1425c11cb;
                }
LAB_1425c131f:
                lVar6 = *(longlong *)(param_1 + 8);
                cVar3 = *(char *)(lVar6 + 0x5b);
                *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = uVar11;
                goto LAB_1425c13ce;
              }
              if (uVar17 == 0xffff) {
                puVar22 = (ushort *)((longlong)puVar21 + lVar18 + 2);
                iVar10 = 10;
                if (((uVar20 & 0xfffff800) != 0xd800) || (iVar10 = 0xc, (uVar20 & 0x400) != 0))
                goto LAB_1425c0c60;
                goto LAB_1425c0c1c;
              }
              uVar13 = (undefined1)(uVar17 >> 8);
              if (puVar7 <= puVar15) {
                if ((uVar17 & 0xff00) != 0) {
                  lVar6 = *(longlong *)(param_1 + 8);
                  cVar3 = *(char *)(lVar6 + 0x5b);
                  *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                  *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = uVar13;
                }
                goto LAB_1425c131f;
              }
              iVar10 = (int)((ulonglong)
                             ((longlong)puVar21 + (lVar18 - *(longlong *)(param_1 + 0x10)) + 2) >> 1
                            ) + -1;
              if (uVar17 < 0x100) goto LAB_1425c10dd;
              puVar1 = puVar15 + 1;
              *puVar15 = uVar13;
              if (piVar19 == (int *)0x0) {
                if (puVar7 <= puVar1) goto LAB_1425c1411;
                puVar15[1] = uVar11;
                puVar15 = puVar15 + 2;
                piVar19 = (int *)0x0;
              }
              else {
                *piVar19 = iVar10;
                if (puVar7 <= puVar1) {
LAB_1425c1411:
                  lVar6 = *(longlong *)(param_1 + 8);
                  cVar3 = *(char *)(lVar6 + 0x5b);
                  *(char *)(lVar6 + 0x5b) = cVar3 + '\x01';
                  *(undefined1 *)(lVar6 + 0x68 + (longlong)cVar3) = uVar11;
                  *param_2 = 0xf;
                  puVar22 = (ushort *)((longlong)puVar21 + lVar18 + 2);
                  puVar15 = puVar1;
                  goto LAB_1425c129e;
                }
                puVar15[1] = uVar11;
                puVar15 = puVar15 + 2;
                piVar19[1] = iVar10;
                piVar19 = piVar19 + 2;
              }
LAB_1425c11cb:
              if (0 < *param_2) break;
LAB_1425c11d7:
              puVar22 = (ushort *)((longlong)puVar21 + lVar18 + 2);
            } while (puVar22 < puVar8);
            puVar22 = (ushort *)((longlong)puVar21 + lVar18 + 2);
          }
        }
        else {
LAB_1425c0c1c:
          iVar10 = 0;
          if (puVar22 < puVar8) {
            bVar23 = (*puVar22 & 0xfc00) == 0xdc00;
            iVar10 = !bVar23 + 10 + (uint)!bVar23;
            uVar16 = uVar20 * 0x400 + (uint)*puVar22 + 0xfca02400;
            if (!bVar23) {
              uVar16 = uVar20;
            }
            uVar20 = uVar16;
            puVar22 = puVar22 + bVar23;
          }
LAB_1425c0c60:
          *param_2 = iVar10;
          *(uint *)(*(longlong *)(param_1 + 8) + 0x54) = uVar20;
        }
LAB_1425c129e:
        *(ushort **)(param_1 + 0x10) = puVar22;
        *(undefined1 **)(param_1 + 0x20) = puVar15;
        return;
      }
    }
  }
  *param_2 = 1;
  return;
LAB_1425c0ccd:
  lVar9 = lVar18 + 2;
  if (puVar8 <= (ushort *)((longlong)puVar21 + lVar18 + 2)) {
LAB_1425c1293:
    puVar22 = (ushort *)((longlong)puVar21 + lVar18 + 2);
    goto LAB_1425c129e;
  }
  goto LAB_1425c0ce2;
}



// FUNCTION 1425c14b0 FUN_1425c14b0 body=200 status=ok
// SIG undefined FUN_1425c14b0(void)

void FUN_1425c14b0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  (*(code *)param_2[2])(*param_2,0,0xa0);
  iVar2 = 0x900;
  do {
    uVar1 = (&DAT_149c407b4)[lVar3 * 3];
    lVar4 = 0;
    do {
      if (((uVar1 & (byte)(&DAT_149c40a90)[lVar4]) != 0) || (lVar4 == 0x31 && lVar3 == 6)) {
        (*(code *)param_2[1])(*param_2,iVar2 + (int)lVar4);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x80);
    lVar3 = lVar3 + 1;
    iVar2 = iVar2 + 0x80;
  } while (lVar3 != 9);
  (*(code *)param_2[1])(*param_2,0x964);
  (*(code *)param_2[1])(*param_2,0x965);
  (*(code *)param_2[1])(*param_2,0x200c);
                    /* WARNING: Could not recover jumptable at 0x0001425c1584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[1])(*param_2,0x200d);
  return;
}



// FUNCTION 1425c15f0 FUN_1425c15f0 body=1051 status=ok
// SIG undefined FUN_1425c15f0(void)

void FUN_1425c15f0(longlong param_1,int *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  byte bVar10;
  ushort *puVar11;
  int *piVar12;
  byte *pbVar13;
  byte *pbVar14;
  ushort uVar15;
  uint uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  
  lVar1 = *(longlong *)(param_1 + 8);
  pbVar13 = *(byte **)(param_1 + 0x10);
  pbVar2 = *(byte **)(param_1 + 0x18);
  puVar11 = *(ushort **)(param_1 + 0x20);
  puVar3 = *(ushort **)(param_1 + 0x28);
  piVar12 = *(int **)(param_1 + 0x30);
  uVar4 = *(uint *)(lVar1 + 0x48);
  uVar9 = uVar4 >> 0x10;
  bVar18 = *(byte *)(lVar1 + 0x40);
  iVar20 = -(uint)(bVar18 != 0);
  iVar21 = 0;
  uVar6 = uVar4;
  pbVar14 = pbVar13;
  iVar5 = iVar20;
  if ((uVar4 & 0x1000000) != 0) goto LAB_1425c187f;
joined_r0x0001425c1662:
  if (pbVar14 < pbVar2) {
    lVar7 = (longlong)pbVar2 - (longlong)pbVar14;
    pbVar13 = pbVar14;
    iVar20 = iVar21;
    do {
      uVar6 = uVar4;
      if (puVar3 <= puVar11) {
        iVar20 = 0xf;
        uVar16 = 0;
        goto LAB_1425c1944;
      }
      bVar19 = *pbVar13;
      bVar10 = bVar18 + 1;
      *(byte *)(lVar1 + 0x41 + (ulonglong)bVar18) = bVar19;
      cVar8 = (char)uVar9;
      if (0x7d < (ulonglong)bVar19) {
        bVar17 = 0xfd;
LAB_1425c17de:
        if (cVar8 == -1) {
          *(undefined1 *)(lVar1 + 0x41) = 0x2b;
          uVar9 = 0xff;
          bVar18 = 1;
          goto LAB_1425c1a14;
        }
        if ((short)uVar4 != 0) goto LAB_1425c1a14;
        uVar4 = 0;
        uVar6 = uVar4;
        if (bVar17 != 0xfd) goto LAB_1425c187f;
        pbVar13 = pbVar13 + 1;
        bVar18 = bVar10;
        goto LAB_1425c1a14;
      }
      bVar17 = (&DAT_149c41230)[bVar19];
      if ((~bVar17 & 0xfd) == 0) goto LAB_1425c17de;
      if ((char)bVar17 < '\0') goto LAB_1425c180f;
      bVar18 = bVar10;
      if ((int)cVar8 + 1U < 9) {
        uVar9 = (uint)(char)bVar17;
        switch((int)cVar8) {
        default:
          uVar4 = uVar4 << 6 | uVar9;
          uVar9 = (uint)(byte)(cVar8 + 1);
          break;
        case 2:
          *puVar11 = (ushort)(uVar9 >> 2) | (ushort)(uVar4 << 4);
          if (piVar12 == (int *)0x0) {
            piVar12 = (int *)0x0;
          }
          else {
            *piVar12 = iVar5;
            piVar12 = piVar12 + 1;
            iVar5 = iVar20;
          }
          puVar11 = puVar11 + 1;
          *(byte *)(lVar1 + 0x41) = bVar19;
          uVar9 = 3;
          uVar4 = (ushort)bVar17 & 3;
          bVar18 = 1;
          break;
        case 5:
          *puVar11 = (ushort)(uVar9 >> 4) | (ushort)(uVar4 << 2);
          if (piVar12 == (int *)0x0) {
            piVar12 = (int *)0x0;
          }
          else {
            *piVar12 = iVar5;
            piVar12 = piVar12 + 1;
            iVar5 = iVar20;
          }
          puVar11 = puVar11 + 1;
          *(byte *)(lVar1 + 0x41) = bVar19;
          uVar9 = 6;
          uVar4 = (ushort)bVar17 & 0xf;
          bVar18 = 1;
          break;
        case 7:
          *puVar11 = (ushort)(uVar4 << 6) | (short)(char)bVar17;
          puVar11 = puVar11 + 1;
          if (piVar12 == (int *)0x0) {
            piVar12 = (int *)0x0;
            uVar9 = 0;
            uVar4 = 0;
            bVar18 = 0;
          }
          else {
            *piVar12 = iVar5;
            piVar12 = piVar12 + 1;
            uVar9 = 0;
            uVar4 = 0;
            iVar5 = iVar20 + 1;
            bVar18 = 0;
          }
          break;
        case -1:
        case 0:
          uVar9 = 1;
          uVar4 = (uint)bVar17;
        }
      }
      pbVar13 = pbVar13 + 1;
      lVar7 = lVar7 + -1;
      pbVar14 = pbVar2;
      iVar20 = iVar20 + 1;
      if (lVar7 == 0) break;
    } while( true );
  }
  uVar16 = 0;
  iVar20 = *param_2;
joined_r0x0001425c1949:
  bVar19 = bVar18;
  if ((iVar20 < 1) && (*(char *)(param_1 + 2) != '\0')) {
    bVar19 = 0;
    if ((short)uVar4 != 0) {
      bVar19 = bVar18;
    }
    if (pbVar14 != pbVar2) {
      bVar19 = bVar18;
    }
  }
  *(uint *)(lVar1 + 0x48) = uVar16 | uVar4 & 0xffff | (uVar9 & 0xff) << 0x10;
  *(byte *)(lVar1 + 0x40) = bVar19;
  *(byte **)(param_1 + 0x10) = pbVar14;
  *(ushort **)(param_1 + 0x20) = puVar11;
  *(int **)(param_1 + 0x30) = piVar12;
  return;
LAB_1425c180f:
  pbVar13 = pbVar13 + 1;
  iVar20 = iVar20 + 1;
  if (cVar8 == -1) {
    *puVar11 = 0x2b;
    puVar11 = puVar11 + 1;
    uVar9 = 0xff;
    if (piVar12 == (int *)0x0) {
      piVar12 = (int *)0x0;
    }
    else {
      *piVar12 = iVar5 + -1;
      piVar12 = piVar12 + 1;
    }
LAB_1425c187f:
    iVar5 = (int)pbVar2 - (int)pbVar13;
    iVar21 = (int)((ulonglong)((longlong)puVar3 - (longlong)puVar11) >> 1);
    if (iVar21 <= iVar5) {
      iVar5 = iVar21;
    }
    if (0 < iVar5) {
      iVar5 = iVar5 + 1;
      pbVar14 = pbVar13;
      do {
        pbVar13 = pbVar14 + 1;
        bVar18 = *pbVar14;
        uVar15 = (ushort)bVar18;
        if (uVar15 == 0x5c || 0x5d < (byte)(bVar18 - 0x20)) {
          if ((0xd < uVar15) || ((0x2600U >> (uVar15 & 0x1f) & 1) == 0)) {
            *(byte *)(lVar1 + 0x41) = bVar18;
            *param_2 = 0xc;
            bVar18 = 1;
            goto LAB_1425c192b;
          }
        }
        else if (bVar18 == 0x2b) goto LAB_1425c19ac;
        *puVar11 = (ushort)bVar18;
        if (piVar12 == (int *)0x0) {
          piVar12 = (int *)0x0;
        }
        else {
          *piVar12 = iVar20;
          piVar12 = piVar12 + 1;
          iVar20 = iVar20 + 1;
        }
        puVar11 = puVar11 + 1;
        iVar5 = iVar5 + -1;
        pbVar14 = pbVar13;
        if (iVar5 < 2) break;
      } while( true );
    }
    bVar18 = 0;
LAB_1425c192b:
    uVar16 = 0x1000000;
    if ((pbVar2 <= pbVar13) || (iVar20 = 0xf, puVar11 < puVar3)) goto LAB_1425c1946;
  }
  else {
    uVar6 = 0;
    bVar18 = bVar10;
    if ((short)uVar4 == 0) goto LAB_1425c187f;
LAB_1425c1a14:
    uVar16 = 0x1000000;
    iVar20 = 0xc;
    uVar6 = uVar4;
  }
LAB_1425c1944:
  *param_2 = iVar20;
LAB_1425c1946:
  iVar20 = *param_2;
  pbVar14 = pbVar13;
  uVar4 = uVar6;
  goto joined_r0x0001425c1949;
LAB_1425c19ac:
  iVar21 = iVar20 + 1;
  uVar9 = 0xff;
  bVar18 = 0;
  uVar4 = 0;
  pbVar14 = pbVar13;
  iVar5 = iVar21;
  goto joined_r0x0001425c1662;
}



// FUNCTION 1425c1a20 FUN_1425c1a20 body=1624 status=ok
// SIG undefined FUN_1425c1a20(void)

void FUN_1425c1a20(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  char *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined *puVar11;
  ushort *puVar12;
  int *piVar13;
  char *pcVar14;
  int iVar15;
  byte bVar16;
  ulonglong uVar17;
  char *pcVar18;
  char cVar19;
  uint uVar20;
  
  lVar3 = *(longlong *)(param_1 + 8);
  puVar12 = *(ushort **)(param_1 + 0x10);
  puVar4 = *(ushort **)(param_1 + 0x18);
  pcVar14 = *(char **)(param_1 + 0x20);
  pcVar5 = *(char **)(param_1 + 0x28);
  piVar13 = *(int **)(param_1 + 0x30);
  uVar8 = *(uint *)(lVar3 + 0x50);
  puVar11 = &DAT_149c41330;
  if (uVar8 < 0x10000000) {
    puVar11 = &DAT_149c412b0;
  }
  uVar20 = uVar8 >> 0x10;
  iVar15 = 0;
  iVar9 = 0;
  if ((uVar8 & 0x1000000) == 0) goto LAB_1425c1b81;
  do {
    do {
      cVar19 = (char)uVar20;
      uVar10 = (longlong)puVar4 - (longlong)puVar12;
      uVar20 = (int)pcVar5 - (int)pcVar14;
      uVar17 = (ulonglong)uVar20;
      if ((int)(uVar10 >> 1) < (int)uVar20) {
        uVar17 = uVar10 >> 1 & 0xffffffff;
      }
      pcVar18 = pcVar14;
      if ((int)uVar17 < 1) {
LAB_1425c1f0e:
        uVar20 = 0x1000000;
        bVar6 = false;
        if ((puVar4 <= puVar12) || (uVar7 = 0x1000000, bVar6 = false, pcVar14 < pcVar5))
        goto LAB_1425c1f29;
        goto LAB_1425c1f1f;
      }
      while( true ) {
        uVar10 = uVar10 - 2;
        uVar2 = *puVar12;
        if (0x7f < (ulonglong)uVar2) break;
        if (puVar11[uVar2] == '\0') {
          if (uVar2 != 0x2b) break;
          pcVar14 = pcVar18 + 1;
          *pcVar18 = '+';
          if (pcVar5 <= pcVar14) {
            if (piVar13 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            else {
              *piVar13 = iVar15;
              piVar13 = piVar13 + 1;
              iVar15 = iVar15 + 1;
            }
            puVar12 = puVar12 + 1;
            *(undefined1 *)(lVar3 + 0x68) = 0x2d;
            *(undefined1 *)(lVar3 + 0x5b) = 1;
            *param_2 = 0xf;
            goto LAB_1425c1f0e;
          }
          pcVar18[1] = '-';
          if (piVar13 == (int *)0x0) {
            piVar13 = (int *)0x0;
          }
          else {
            *piVar13 = iVar15;
            piVar13[1] = iVar15;
            piVar13 = piVar13 + 2;
            iVar15 = iVar15 + 1;
          }
          pcVar14 = pcVar18 + 2;
          uVar20 = (int)pcVar5 - (int)pcVar14;
          uVar17 = (ulonglong)uVar20;
          if ((int)(uVar10 >> 1) < (int)uVar20) {
            uVar17 = uVar10 >> 1 & 0xffffffff;
          }
          if ((int)uVar17 < 1) goto LAB_1425c1b6c;
        }
        else {
          *pcVar18 = (char)uVar2;
          if (piVar13 == (int *)0x0) {
            piVar13 = (int *)0x0;
          }
          else {
            *piVar13 = iVar15;
            piVar13 = piVar13 + 1;
            iVar15 = iVar15 + 1;
          }
          pcVar14 = pcVar18 + 1;
          if ((int)uVar17 < 2) {
LAB_1425c1b6c:
            puVar12 = puVar12 + 1;
            goto LAB_1425c1f0e;
          }
          uVar17 = (ulonglong)((int)uVar17 - 1);
        }
        puVar12 = puVar12 + 1;
        pcVar18 = pcVar14;
      }
      *pcVar18 = '+';
      pcVar14 = pcVar18 + 1;
      if (piVar13 == (int *)0x0) {
        piVar13 = (int *)0x0;
      }
      else {
        *piVar13 = iVar15;
        piVar13 = piVar13 + 1;
      }
      uVar20 = 0;
      iVar9 = iVar15;
LAB_1425c1b81:
      cVar19 = (char)uVar20;
      iVar15 = iVar9;
      while( true ) {
        if (puVar4 <= puVar12) {
          uVar20 = 0;
          bVar6 = true;
          goto LAB_1425c1f29;
        }
        cVar19 = (char)uVar20;
        if (pcVar5 <= pcVar14) {
          bVar6 = true;
          uVar7 = 0;
          goto LAB_1425c1f1f;
        }
        uVar2 = *puVar12;
        if ((uVar2 < 0x80) && (puVar11[uVar2] != '\0')) break;
        if (cVar19 == '\x02') {
          pcVar18 = pcVar14 + 1;
          *pcVar14 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                     [(ulonglong)(uVar8 & 0xff) | (ulonglong)(uVar2 >> 0xc)];
          if (pcVar18 < pcVar5) {
            pcVar18 = pcVar14 + 2;
            pcVar14[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                         [uVar2 >> 6 & 0x3f];
            if (pcVar5 <= pcVar18) {
              if (piVar13 == (int *)0x0) {
                piVar13 = (int *)0x0;
              }
              else {
                *piVar13 = iVar15;
                piVar13[1] = iVar15;
                piVar13 = piVar13 + 2;
                iVar15 = iVar15 + 1;
              }
              *(char *)(lVar3 + 0x68) =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                   [uVar2 & 0x3f];
              *(undefined1 *)(lVar3 + 0x5b) = 1;
              goto LAB_1425c1e53;
            }
            pcVar14[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                         [uVar2 & 0x3f];
            pcVar18 = pcVar14 + 3;
            if (piVar13 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            else {
              *piVar13 = iVar15;
              piVar13[1] = iVar15;
              piVar13[2] = iVar15;
              piVar13 = piVar13 + 3;
              iVar15 = iVar15 + 1;
            }
          }
          else {
            if (piVar13 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            else {
              *piVar13 = iVar15;
              piVar13 = piVar13 + 1;
              iVar15 = iVar15 + 1;
            }
            *(char *)(lVar3 + 0x68) =
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                 [uVar2 >> 6 & 0x3f];
            *(char *)(lVar3 + 0x69) =
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                 [uVar2 & 0x3f];
            *(undefined1 *)(lVar3 + 0x5b) = 2;
LAB_1425c1e53:
            *param_2 = 0xf;
          }
          uVar8 = 0;
          uVar20 = 0;
        }
        else {
          if (cVar19 == '\x01') {
            pcVar18 = pcVar14 + 1;
            *pcVar14 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                       [(ulonglong)(uVar8 & 0xff) | (ulonglong)(uVar2 >> 0xe)];
            if (pcVar18 < pcVar5) {
              pcVar18 = pcVar14 + 2;
              pcVar14[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                           [uVar2 >> 8 & 0x3f];
              if (pcVar5 <= pcVar18) {
                if (piVar13 == (int *)0x0) {
                  piVar13 = (int *)0x0;
                }
                else {
                  *piVar13 = iVar15;
                  piVar13[1] = iVar15;
                  piVar13 = piVar13 + 2;
                  iVar15 = iVar15 + 1;
                }
                *(char *)(lVar3 + 0x68) =
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                     [uVar2 >> 2 & 0x3f];
                *(undefined1 *)(lVar3 + 0x5b) = 1;
                goto LAB_1425c1e83;
              }
              pcVar14[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                           [uVar2 >> 2 & 0x3f];
              pcVar18 = pcVar14 + 3;
              if (piVar13 == (int *)0x0) {
                piVar13 = (int *)0x0;
              }
              else {
                *piVar13 = iVar15;
                piVar13[1] = iVar15;
                piVar13[2] = iVar15;
                piVar13 = piVar13 + 3;
                iVar15 = iVar15 + 1;
              }
            }
            else {
              if (piVar13 == (int *)0x0) {
                piVar13 = (int *)0x0;
              }
              else {
                *piVar13 = iVar15;
                piVar13 = piVar13 + 1;
                iVar15 = iVar15 + 1;
              }
              *(char *)(lVar3 + 0x68) =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                   [uVar2 >> 8 & 0x3f];
              *(char *)(lVar3 + 0x69) =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                   [uVar2 >> 2 & 0x3f];
              *(undefined1 *)(lVar3 + 0x5b) = 2;
LAB_1425c1e83:
              *param_2 = 0xf;
            }
            bVar16 = ((byte)uVar2 & 3) << 4;
            uVar20 = 2;
          }
          else {
            pcVar18 = pcVar14;
            if (cVar19 != '\0') goto LAB_1425c1bd3;
            pcVar18 = pcVar14 + 1;
            *pcVar14 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                       [uVar2 >> 10];
            if (pcVar18 < pcVar5) {
              pcVar14[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                           [uVar2 >> 4 & 0x3f];
              pcVar18 = pcVar14 + 2;
              if (piVar13 == (int *)0x0) {
                piVar13 = (int *)0x0;
              }
              else {
                *piVar13 = iVar15;
                piVar13[1] = iVar15;
                piVar13 = piVar13 + 2;
                iVar15 = iVar15 + 1;
              }
            }
            else {
              if (piVar13 == (int *)0x0) {
                piVar13 = (int *)0x0;
              }
              else {
                *piVar13 = iVar15;
                piVar13 = piVar13 + 1;
                iVar15 = iVar15 + 1;
              }
              *(char *)(lVar3 + 0x68) =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                   [uVar2 >> 4 & 0x3f];
              *(undefined1 *)(lVar3 + 0x5b) = 1;
              *param_2 = 0xf;
            }
            bVar16 = ((byte)uVar2 & 0xf) << 2;
            uVar20 = 1;
          }
          uVar8 = (uint)bVar16;
        }
LAB_1425c1bd3:
        cVar19 = (char)uVar20;
        puVar12 = puVar12 + 1;
        pcVar14 = pcVar18;
      }
      if (cVar19 != '\0') {
        *pcVar14 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                   [uVar8 & 0xff];
        pcVar14 = pcVar14 + 1;
        if (piVar13 == (int *)0x0) {
          piVar13 = (int *)0x0;
        }
        else {
          *piVar13 = iVar15 + -1;
          piVar13 = piVar13 + 1;
        }
      }
    } while ((&DAT_149c41230)[uVar2] == -1);
    if (pcVar5 <= pcVar14) break;
    *pcVar14 = '-';
    pcVar14 = pcVar14 + 1;
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)0x0;
    }
    else {
      *piVar13 = iVar15 + -1;
      piVar13 = piVar13 + 1;
    }
  } while( true );
  *(undefined1 *)(lVar3 + 0x68) = 0x2d;
  *(undefined1 *)(lVar3 + 0x5b) = 1;
  bVar6 = false;
  uVar7 = 0x1000000;
LAB_1425c1f1f:
  uVar20 = uVar7;
  *param_2 = 0xf;
LAB_1425c1f29:
  if ((*(char *)(param_1 + 2) == '\0') || (puVar12 < puVar4)) {
    uVar8 = uVar20 | uVar8 & 0xff | (int)cVar19 << 0x10 | *(uint *)(lVar3 + 0x50) & 0xf0000000;
    goto LAB_1425c2071;
  }
  if (bVar6) {
    if (cVar19 == '\0') {
LAB_1425c1fc3:
      if (pcVar14 < pcVar5) {
LAB_1425c1fcb:
        *pcVar14 = '-';
        pcVar14 = pcVar14 + 1;
        if (piVar13 == (int *)0x0) {
          piVar13 = (int *)0x0;
        }
        else {
          *piVar13 = iVar15 + -1;
          piVar13 = piVar13 + 1;
        }
        goto LAB_1425c2060;
      }
    }
    else {
      cVar19 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
               [uVar8 & 0xff];
      if (pcVar5 <= pcVar14) {
        cVar1 = *(char *)(lVar3 + 0x5b);
        *(char *)(lVar3 + 0x5b) = cVar1 + '\x01';
        *(char *)(lVar3 + 0x68 + (longlong)cVar1) = cVar19;
        *param_2 = 0xf;
        goto LAB_1425c1fc3;
      }
      pcVar18 = pcVar14 + 1;
      *pcVar14 = cVar19;
      if (piVar13 != (int *)0x0) {
        *piVar13 = iVar15 + -1;
        piVar13 = piVar13 + 1;
        pcVar14 = pcVar18;
        if (pcVar5 <= pcVar18) goto LAB_1425c2044;
        goto LAB_1425c1fcb;
      }
      if (pcVar18 < pcVar5) {
        pcVar14[1] = '-';
        pcVar14 = pcVar14 + 2;
        piVar13 = (int *)0x0;
        goto LAB_1425c2060;
      }
      piVar13 = (int *)0x0;
      pcVar14 = pcVar18;
    }
LAB_1425c2044:
    cVar19 = *(char *)(lVar3 + 0x5b);
    *(char *)(lVar3 + 0x5b) = cVar19 + '\x01';
    *(undefined1 *)(lVar3 + 0x68 + (longlong)cVar19) = 0x2d;
    *param_2 = 0xf;
  }
LAB_1425c2060:
  uVar8 = *(uint *)(lVar3 + 0x50) & 0xf0000000 | 0x1000000;
LAB_1425c2071:
  *(uint *)(lVar3 + 0x50) = uVar8;
  *(ushort **)(param_1 + 0x10) = puVar12;
  *(char **)(param_1 + 0x20) = pcVar14;
  *(int **)(param_1 + 0x30) = piVar13;
  return;
}



// FUNCTION 1425c20d0 FUN_1425c20d0 body=1079 status=ok
// SIG undefined FUN_1425c20d0(void)

void FUN_1425c20d0(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  ushort *puVar14;
  byte *pbVar15;
  int *piVar16;
  byte *pbVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int local_64;
  
  lVar2 = *(longlong *)(param_1 + 8);
  pbVar17 = *(byte **)(param_1 + 0x10);
  pbVar3 = *(byte **)(param_1 + 0x18);
  puVar14 = *(ushort **)(param_1 + 0x20);
  puVar4 = *(ushort **)(param_1 + 0x28);
  piVar16 = *(int **)(param_1 + 0x30);
  uVar7 = *(uint *)(lVar2 + 0x48);
  uVar10 = uVar7 >> 0x10;
  bVar11 = *(byte *)(lVar2 + 0x40);
  iVar20 = -(uint)(bVar11 != 0);
  pbVar15 = pbVar17;
  iVar13 = 0;
  if ((uVar7 & 0x1000000) == 0) goto LAB_1425c21eb;
LAB_1425c212d:
  iVar13 = (int)pbVar3 - (int)pbVar17;
  iVar5 = (int)((ulonglong)((longlong)puVar4 - (longlong)puVar14) >> 1);
  if (iVar5 <= iVar13) {
    iVar13 = iVar5;
  }
  if (iVar13 < 1) {
LAB_1425c21a1:
    bVar8 = 0;
LAB_1425c21b7:
    uVar19 = 0x1000000;
    if ((pbVar3 <= pbVar17) || (iVar13 = 0xf, puVar14 < puVar4)) goto LAB_1425c2423;
  }
  else {
    iVar13 = iVar13 + 1;
    pbVar15 = pbVar17;
    while( true ) {
      pbVar17 = pbVar15 + 1;
      bVar11 = *pbVar15;
      if (0x5e < (byte)(bVar11 - 0x20)) {
        *(byte *)(lVar2 + 0x41) = bVar11;
        *param_2 = 0xc;
        bVar8 = 1;
        goto LAB_1425c21b7;
      }
      if (bVar11 == 0x26) break;
      *puVar14 = (ushort)bVar11;
      if (piVar16 == (int *)0x0) {
        piVar16 = (int *)0x0;
      }
      else {
        *piVar16 = iVar20;
        piVar16 = piVar16 + 1;
        iVar20 = iVar20 + 1;
      }
      puVar14 = puVar14 + 1;
      iVar13 = iVar13 + -1;
      pbVar15 = pbVar17;
      if (iVar13 < 2) goto LAB_1425c21a1;
    }
    iVar20 = iVar20 + 1;
    uVar10 = 0xff;
    bVar11 = 0;
    uVar7 = 0;
    pbVar15 = pbVar17;
    iVar13 = iVar20;
LAB_1425c21eb:
    pbVar17 = pbVar15;
    bVar8 = bVar11;
    if (pbVar15 < pbVar3) {
      lVar18 = (longlong)pbVar3 - (longlong)pbVar15;
      local_64 = iVar20;
      do {
        if (puVar4 <= puVar14) {
          *param_2 = 0xf;
          pbVar17 = pbVar15;
          bVar8 = bVar11;
          break;
        }
        bVar1 = *pbVar15;
        bVar8 = bVar11 + 1;
        *(byte *)(lVar2 + 0x41 + (ulonglong)bVar11) = bVar1;
        if (0x7e < (ulonglong)bVar1) goto LAB_1425c23c1;
        bVar9 = (byte)uVar10;
        if (bVar1 == 0x2c) {
          bVar12 = 0x3f;
          uVar19 = 0x3f;
        }
        else {
          if (bVar1 == 0x2f) goto LAB_1425c24ac;
          bVar12 = (&DAT_149c41230)[bVar1];
          if ((char)bVar12 < '\0') goto LAB_1425c245e;
          uVar19 = (uint)bVar12;
        }
        bVar11 = bVar8;
        switch(bVar9) {
        case 1:
        case 3:
        case 4:
        case 6:
          uVar7 = uVar19 | uVar7 << 6;
          uVar10 = (uint)(byte)(bVar9 + 1);
          break;
        case 2:
          uVar6 = (uVar7 & 0xffff) << 4;
          if ((uVar19 >> 2 | uVar6 & 0xffff) - 0x20 < 0x5f) goto LAB_1425c23c1;
          *puVar14 = (ushort)(uVar19 >> 2) | (ushort)uVar6;
          if (piVar16 == (int *)0x0) {
            piVar16 = (int *)0x0;
          }
          else {
            *piVar16 = local_64;
            piVar16 = piVar16 + 1;
            local_64 = iVar13;
          }
          puVar14 = puVar14 + 1;
          *(byte *)(lVar2 + 0x41) = bVar1;
          uVar7 = (uint)(bVar12 & 3);
          uVar10 = 3;
          bVar11 = 1;
          break;
        case 5:
          uVar6 = (uVar7 & 0xffff) << 2;
          if ((uVar19 >> 4 | uVar6 & 0xffff) - 0x20 < 0x5f) goto LAB_1425c23c1;
          *puVar14 = (ushort)(uVar19 >> 4) | (ushort)uVar6;
          if (piVar16 == (int *)0x0) {
            piVar16 = (int *)0x0;
          }
          else {
            *piVar16 = local_64;
            piVar16 = piVar16 + 1;
            local_64 = iVar13;
          }
          puVar14 = puVar14 + 1;
          *(byte *)(lVar2 + 0x41) = bVar1;
          uVar7 = (uint)(bVar12 & 0xf);
          uVar10 = 6;
          bVar11 = 1;
          break;
        case 7:
          uVar6 = (uVar7 & 0xffff) << 6;
          if ((uVar19 | uVar6 & 0xffff) - 0x20 < 0x5f) goto LAB_1425c23c1;
          *puVar14 = (ushort)uVar19 | (ushort)uVar6;
          puVar14 = puVar14 + 1;
          if (piVar16 == (int *)0x0) {
            piVar16 = (int *)0x0;
            uVar7 = 0;
            uVar10 = 0;
            bVar11 = 0;
          }
          else {
            *piVar16 = local_64;
            piVar16 = piVar16 + 1;
            uVar7 = 0;
            uVar10 = 0;
            local_64 = iVar13 + 1;
            bVar11 = 0;
          }
          break;
        case 0xffffffff:
        case 0:
          uVar7 = (uint)bVar12;
          uVar10 = 1;
        }
        pbVar15 = pbVar15 + 1;
        lVar18 = lVar18 + -1;
        pbVar17 = pbVar3;
        iVar13 = iVar13 + 1;
        bVar8 = bVar11;
        if (lVar18 == 0) break;
      } while( true );
    }
    uVar19 = 0;
    if ((0 < *param_2) || (bVar8 != 0)) goto LAB_1425c2423;
    bVar8 = 0;
    if ((*(char *)(param_1 + 2) == '\0') || (pbVar17 < pbVar3)) {
      uVar19 = 0;
      goto LAB_1425c2423;
    }
    iVar13 = 0xb;
    if ((char)uVar10 == -1) {
      *(undefined1 *)(lVar2 + 0x41) = 0x26;
      bVar8 = 1;
    }
    else {
      bVar8 = 0;
    }
  }
LAB_1425c23c6:
  *param_2 = iVar13;
  uVar19 = 0x1000000;
LAB_1425c2423:
  *(uint *)(lVar2 + 0x48) = uVar7 & 0xffff | uVar19 | (uVar10 & 0xff) << 0x10;
  *(byte *)(lVar2 + 0x40) = bVar8;
  *(byte **)(param_1 + 0x10) = pbVar17;
  *(ushort **)(param_1 + 0x20) = puVar14;
  *(int **)(param_1 + 0x30) = piVar16;
  return;
LAB_1425c245e:
  if (bVar1 != 0x2d) {
LAB_1425c24ac:
    if (bVar9 == 0xff) {
      *(undefined1 *)(lVar2 + 0x41) = 0x26;
      *(byte *)(lVar2 + 0x42) = bVar1;
      bVar8 = 2;
    }
LAB_1425c23c1:
    pbVar17 = pbVar15 + 1;
    iVar13 = 0xc;
    goto LAB_1425c23c6;
  }
  pbVar17 = pbVar15 + 1;
  iVar20 = iVar13 + 1;
  if (bVar9 == 0xff) {
    *puVar14 = 0x26;
    puVar14 = puVar14 + 1;
    uVar10 = 0xff;
    if (piVar16 == (int *)0x0) {
      piVar16 = (int *)0x0;
    }
    else {
      *piVar16 = local_64 + -1;
      piVar16 = piVar16 + 1;
    }
  }
  else {
    iVar13 = 0xc;
    if ((((short)uVar7 != 0) || (6 < bVar9)) || ((0x49U >> (uVar10 & 0x1f) & 1) == 0))
    goto LAB_1425c23c6;
    uVar7 = 0;
  }
  goto LAB_1425c212d;
}



// FUNCTION 1425c2520 FUN_1425c2520 body=1757 status=ok
// SIG undefined FUN_1425c2520(void)

void FUN_1425c2520(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  char *pcVar4;
  byte bVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  ushort *puVar14;
  int *piVar15;
  int iVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  
  lVar2 = *(longlong *)(param_1 + 8);
  puVar14 = *(ushort **)(param_1 + 0x10);
  puVar3 = *(ushort **)(param_1 + 0x18);
  pcVar12 = *(char **)(param_1 + 0x20);
  pcVar4 = *(char **)(param_1 + 0x28);
  piVar15 = *(int **)(param_1 + 0x30);
  uVar13 = *(uint *)(lVar2 + 0x50);
  uVar22 = uVar13 >> 0x10;
  cVar9 = (char)(uVar13 >> 0x10);
  iVar16 = 0;
  iVar8 = 0;
  if ((uVar13 & 0x1000000) != 0) goto LAB_1425c297f;
joined_r0x0001425c2571:
  iVar16 = iVar8;
  if (puVar14 < puVar3) {
    while( true ) {
      cVar9 = (char)uVar22;
      if (pcVar4 <= pcVar12) {
        bVar6 = true;
        uVar22 = 0;
        goto LAB_1425c2acb;
      }
      uVar1 = *puVar14;
      uVar19 = (uint)uVar1;
      bVar17 = (byte)uVar13;
      if ((ushort)(uVar1 - 0x20) < 0x5f) break;
      bVar5 = (byte)(uVar1 >> 8);
      if (cVar9 == '\x02') {
        bVar17 = bVar17 | bVar5 >> 4;
        cVar9 = ',';
        if (bVar17 < 0x3f) {
          cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                  [bVar17];
        }
        *pcVar12 = cVar9;
        if (pcVar12 + 1 < pcVar4) {
          uVar20 = (ulonglong)(uVar1 >> 6 & 0x3f);
          cVar9 = ',';
          if (uVar20 != 0x3f) {
            cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                    [uVar20];
          }
          pcVar12[1] = cVar9;
          if (pcVar4 <= pcVar12 + 2) {
            if (piVar15 == (int *)0x0) {
              piVar15 = (int *)0x0;
            }
            else {
              *piVar15 = iVar16;
              piVar15[1] = iVar16;
              piVar15 = piVar15 + 2;
              iVar16 = iVar16 + 1;
            }
            cVar9 = ',';
            if ((ulonglong)(uVar19 & 0x3f) != 0x3f) {
              cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                      [uVar19 & 0x3f];
            }
            *(char *)(lVar2 + 0x68) = cVar9;
            *(undefined1 *)(lVar2 + 0x5b) = 1;
            pcVar12 = pcVar12 + 2;
            goto LAB_1425c28b4;
          }
          cVar9 = ',';
          if ((ulonglong)(uVar19 & 0x3f) != 0x3f) {
            cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                    [uVar19 & 0x3f];
          }
          pcVar12[2] = cVar9;
          pcVar12 = pcVar12 + 3;
          if (piVar15 == (int *)0x0) {
            piVar15 = (int *)0x0;
          }
          else {
            *piVar15 = iVar16;
            piVar15[1] = iVar16;
            piVar15[2] = iVar16;
            piVar15 = piVar15 + 3;
            iVar16 = iVar16 + 1;
          }
        }
        else {
          if (piVar15 == (int *)0x0) {
            piVar15 = (int *)0x0;
          }
          else {
            *piVar15 = iVar16;
            piVar15 = piVar15 + 1;
            iVar16 = iVar16 + 1;
          }
          uVar20 = (ulonglong)(uVar1 >> 6 & 0x3f);
          cVar10 = ',';
          cVar9 = ',';
          if (uVar20 != 0x3f) {
            cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                    [uVar20];
          }
          *(char *)(lVar2 + 0x68) = cVar9;
          if ((ulonglong)(uVar19 & 0x3f) != 0x3f) {
            cVar10 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                     [uVar19 & 0x3f];
          }
          *(char *)(lVar2 + 0x69) = cVar10;
          *(undefined1 *)(lVar2 + 0x5b) = 2;
          pcVar12 = pcVar12 + 1;
LAB_1425c28b4:
          *param_2 = 0xf;
        }
        uVar13 = 0;
        uVar22 = 0;
      }
      else {
        bVar18 = (byte)uVar1;
        if (cVar9 == '\x01') {
          bVar17 = bVar17 | bVar5 >> 6;
          cVar9 = ',';
          if (bVar17 < 0x3f) {
            cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                    [bVar17];
          }
          *pcVar12 = cVar9;
          if (pcVar12 + 1 < pcVar4) {
            uVar20 = (ulonglong)(uVar1 >> 8 & 0x3f);
            cVar9 = ',';
            if (uVar20 != 0x3f) {
              cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                      [uVar20];
            }
            pcVar12[1] = cVar9;
            if (pcVar4 <= pcVar12 + 2) {
              if (piVar15 == (int *)0x0) {
                piVar15 = (int *)0x0;
              }
              else {
                *piVar15 = iVar16;
                piVar15[1] = iVar16;
                piVar15 = piVar15 + 2;
                iVar16 = iVar16 + 1;
              }
              cVar9 = ',';
              if (bVar18 >> 2 != 0x3f) {
                cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                        [(uint)(bVar18 >> 2)];
              }
              *(char *)(lVar2 + 0x68) = cVar9;
              *(undefined1 *)(lVar2 + 0x5b) = 1;
              pcVar12 = pcVar12 + 2;
              goto LAB_1425c28e8;
            }
            cVar9 = ',';
            if (bVar18 >> 2 != 0x3f) {
              cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                      [(uint)(bVar18 >> 2)];
            }
            pcVar12[2] = cVar9;
            pcVar12 = pcVar12 + 3;
            if (piVar15 == (int *)0x0) {
              piVar15 = (int *)0x0;
            }
            else {
              *piVar15 = iVar16;
              piVar15[1] = iVar16;
              piVar15[2] = iVar16;
              piVar15 = piVar15 + 3;
              iVar16 = iVar16 + 1;
            }
          }
          else {
            if (piVar15 == (int *)0x0) {
              piVar15 = (int *)0x0;
            }
            else {
              *piVar15 = iVar16;
              piVar15 = piVar15 + 1;
              iVar16 = iVar16 + 1;
            }
            uVar20 = (ulonglong)(uVar1 >> 8 & 0x3f);
            cVar10 = ',';
            cVar9 = ',';
            if (uVar20 != 0x3f) {
              cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                      [uVar20];
            }
            *(char *)(lVar2 + 0x68) = cVar9;
            if (bVar18 >> 2 != 0x3f) {
              cVar10 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                       [(uint)(bVar18 >> 2)];
            }
            *(char *)(lVar2 + 0x69) = cVar10;
            *(undefined1 *)(lVar2 + 0x5b) = 2;
            pcVar12 = pcVar12 + 1;
LAB_1425c28e8:
            *param_2 = 0xf;
          }
          bVar17 = (bVar18 & 3) << 4;
          uVar22 = 2;
        }
        else {
          if (cVar9 != '\0') goto LAB_1425c25a5;
          cVar9 = ',';
          if (uVar1 >> 10 != 0x3f) {
            cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                    [(uint)(uVar1 >> 10)];
          }
          pcVar11 = pcVar12 + 1;
          *pcVar12 = cVar9;
          if (pcVar11 < pcVar4) {
            uVar20 = (ulonglong)(uVar1 >> 4 & 0x3f);
            cVar9 = ',';
            if (uVar20 != 0x3f) {
              cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                      [uVar20];
            }
            pcVar12[1] = cVar9;
            pcVar11 = pcVar12 + 2;
            if (piVar15 == (int *)0x0) {
              piVar15 = (int *)0x0;
            }
            else {
              *piVar15 = iVar16;
              piVar15[1] = iVar16;
              piVar15 = piVar15 + 2;
              iVar16 = iVar16 + 1;
            }
          }
          else {
            if (piVar15 == (int *)0x0) {
              piVar15 = (int *)0x0;
            }
            else {
              *piVar15 = iVar16;
              piVar15 = piVar15 + 1;
              iVar16 = iVar16 + 1;
            }
            uVar20 = (ulonglong)(uVar1 >> 4 & 0x3f);
            cVar9 = ',';
            if (uVar20 != 0x3f) {
              cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                      [uVar20];
            }
            *(char *)(lVar2 + 0x68) = cVar9;
            *(undefined1 *)(lVar2 + 0x5b) = 1;
            *param_2 = 0xf;
          }
          bVar17 = (bVar18 & 0xf) << 2;
          uVar22 = 1;
          pcVar12 = pcVar11;
        }
        uVar13 = (uint)bVar17;
      }
LAB_1425c25a5:
      cVar9 = (char)uVar22;
      puVar14 = puVar14 + 1;
      if (puVar3 <= puVar14) {
        uVar19 = 0;
        bVar6 = true;
        goto LAB_1425c2ad5;
      }
    }
    if (cVar9 == '\0') {
LAB_1425c2939:
      if (pcVar12 < pcVar4) {
        *pcVar12 = '-';
        piVar7 = (int *)0x0;
        if (piVar15 != (int *)0x0) {
          *piVar15 = iVar16 + -1;
          piVar7 = piVar15 + 1;
        }
        goto LAB_1425c2976;
      }
LAB_1425c2c07:
      *(undefined1 *)(lVar2 + 0x68) = 0x2d;
      *(undefined1 *)(lVar2 + 0x5b) = 1;
      bVar6 = false;
      uVar22 = 0x1000000;
    }
    else {
      cVar10 = ',';
      if (bVar17 < 0x3f) {
        cVar10 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                 [uVar13 & 0xff];
      }
      *pcVar12 = cVar10;
      pcVar12 = pcVar12 + 1;
      if (piVar15 != (int *)0x0) {
        *piVar15 = iVar16 + -1;
        piVar15 = piVar15 + 1;
        goto LAB_1425c2939;
      }
      if (pcVar4 <= pcVar12) {
        piVar15 = (int *)0x0;
        goto LAB_1425c2c07;
      }
      *pcVar12 = '-';
      piVar7 = (int *)0x0;
LAB_1425c2976:
      piVar15 = piVar7;
      pcVar12 = pcVar12 + 1;
LAB_1425c297f:
      uVar20 = (longlong)puVar3 - (longlong)puVar14;
      uVar22 = (int)pcVar4 - (int)pcVar12;
      uVar21 = (ulonglong)uVar22;
      if ((int)(uVar20 >> 1) < (int)uVar22) {
        uVar21 = uVar20 >> 1 & 0xffffffff;
      }
      pcVar11 = pcVar12;
      if (0 < (int)uVar21) {
        do {
          uVar20 = uVar20 - 2;
          uVar1 = *puVar14;
          pcVar12 = pcVar11 + 1;
          if ((uVar1 == 0x26) || (0x5e < (ushort)(uVar1 - 0x20))) {
            *pcVar11 = '&';
            if (uVar1 != 0x26) goto LAB_1425c2a56;
            if (pcVar4 <= pcVar12) {
              if (piVar15 == (int *)0x0) {
                piVar15 = (int *)0x0;
              }
              else {
                *piVar15 = iVar16;
                piVar15 = piVar15 + 1;
                iVar16 = iVar16 + 1;
              }
              puVar14 = puVar14 + 1;
              *(undefined1 *)(lVar2 + 0x68) = 0x2d;
              *(undefined1 *)(lVar2 + 0x5b) = 1;
              *param_2 = 0xf;
              break;
            }
            pcVar11[1] = '-';
            if (piVar15 == (int *)0x0) {
              piVar15 = (int *)0x0;
            }
            else {
              *piVar15 = iVar16;
              piVar15[1] = iVar16;
              piVar15 = piVar15 + 2;
              iVar16 = iVar16 + 1;
            }
            pcVar12 = pcVar11 + 2;
            uVar22 = (int)pcVar4 - (int)pcVar12;
            uVar21 = (ulonglong)uVar22;
            if ((int)(uVar20 >> 1) < (int)uVar22) {
              uVar21 = uVar20 >> 1 & 0xffffffff;
            }
            if ((int)uVar21 < 1) goto LAB_1425c2a6d;
          }
          else {
            *pcVar11 = (char)uVar1;
            if (piVar15 == (int *)0x0) {
              piVar15 = (int *)0x0;
            }
            else {
              *piVar15 = iVar16;
              piVar15 = piVar15 + 1;
              iVar16 = iVar16 + 1;
            }
            if ((int)uVar21 < 2) {
LAB_1425c2a6d:
              puVar14 = puVar14 + 1;
              break;
            }
            uVar21 = (ulonglong)((int)uVar21 - 1);
          }
          puVar14 = puVar14 + 1;
          pcVar11 = pcVar12;
        } while( true );
      }
      uVar19 = 0x1000000;
      bVar6 = false;
      if ((puVar3 <= puVar14) || (uVar22 = 0x1000000, bVar6 = false, pcVar12 < pcVar4))
      goto LAB_1425c2ad5;
    }
LAB_1425c2acb:
    uVar19 = uVar22;
    *param_2 = 0xf;
  }
  else {
    bVar6 = true;
    uVar19 = 0;
  }
LAB_1425c2ad5:
  if ((*(char *)(param_1 + 2) == '\0') || (puVar14 < puVar3)) {
    uVar13 = uVar19 | uVar13 & 0xff | (int)cVar9 << 0x10 | *(uint *)(lVar2 + 0x50) & 0xf0000000;
    goto LAB_1425c2be4;
  }
  pcVar11 = pcVar12;
  if (bVar6) {
    if (cVar9 == '\0') {
joined_r0x0001425c2b84:
      if (pcVar11 < pcVar4) {
        *pcVar11 = '-';
        pcVar11 = pcVar11 + 1;
        if (piVar15 == (int *)0x0) {
          piVar15 = (int *)0x0;
        }
        else {
          *piVar15 = iVar16 + -1;
          piVar15 = piVar15 + 1;
        }
        goto LAB_1425c2bd6;
      }
    }
    else {
      cVar9 = ',';
      if (pcVar4 <= pcVar12) {
        if ((byte)uVar13 < 0x3f) {
          cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                  [uVar13 & 0xff];
        }
        cVar10 = *(char *)(lVar2 + 0x5b);
        *(char *)(lVar2 + 0x5b) = cVar10 + '\x01';
        *(char *)(lVar2 + 0x68 + (longlong)cVar10) = cVar9;
        *param_2 = 0xf;
        goto joined_r0x0001425c2b84;
      }
      if ((byte)uVar13 < 0x3f) {
        cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/UTF-7,version=1"
                [uVar13 & 0xff];
      }
      pcVar11 = pcVar12 + 1;
      *pcVar12 = cVar9;
      if (piVar15 != (int *)0x0) {
        *piVar15 = iVar16 + -1;
        piVar15 = piVar15 + 1;
        goto joined_r0x0001425c2b84;
      }
      if (pcVar11 < pcVar4) {
        pcVar12[1] = '-';
        pcVar11 = pcVar12 + 2;
        piVar15 = (int *)0x0;
        goto LAB_1425c2bd6;
      }
      piVar15 = (int *)0x0;
    }
    cVar9 = *(char *)(lVar2 + 0x5b);
    *(char *)(lVar2 + 0x5b) = cVar9 + '\x01';
    *(undefined1 *)(lVar2 + 0x68 + (longlong)cVar9) = 0x2d;
    *param_2 = 0xf;
  }
LAB_1425c2bd6:
  uVar13 = *(uint *)(lVar2 + 0x50) & 0xf0000000 | 0x1000000;
  pcVar12 = pcVar11;
LAB_1425c2be4:
  *(uint *)(lVar2 + 0x50) = uVar13;
  *(ushort **)(param_1 + 0x10) = puVar14;
  *(char **)(param_1 + 0x20) = pcVar12;
  *(int **)(param_1 + 0x30) = piVar15;
  return;
LAB_1425c2a56:
  if (piVar15 == (int *)0x0) {
    piVar15 = (int *)0x0;
  }
  else {
    *piVar15 = iVar16;
    piVar15 = piVar15 + 1;
  }
  uVar22 = 0;
  cVar9 = '\0';
  iVar8 = iVar16;
  goto joined_r0x0001425c2571;
}



// FUNCTION 1425c2c20 FUN_1425c2c20 body=1291 status=ok
// SIG undefined FUN_1425c2c20(void)

void FUN_1425c2c20(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort *puVar4;
  char cVar5;
  ushort *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ushort *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  char cVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  ushort uVar20;
  uint uVar21;
  
  lVar2 = *(longlong *)(param_1 + 8);
  pbVar11 = *(byte **)(param_1 + 0x10);
  pbVar3 = *(byte **)(param_1 + 0x18);
  puVar10 = *(ushort **)(param_1 + 0x20);
  puVar4 = *(ushort **)(param_1 + 0x28);
  uVar9 = 0x40;
  if (*(uint *)(lVar2 + 0x48) != 0) {
    uVar9 = *(uint *)(lVar2 + 0x48);
  }
  uVar18 = *(uint *)(lVar2 + 0x4c);
  cVar13 = *(char *)(lVar2 + 0x40);
  uVar21 = uVar18 & 3;
  puVar6 = puVar4;
  if (((uVar21 != 0) && ('\0' < cVar13)) && (puVar10 < puVar4)) goto LAB_1425c2f3a;
LAB_1425c2c77:
  uVar18 = (int)pbVar3 - (int)pbVar11;
  uVar7 = (ulonglong)((longlong)puVar6 - (longlong)puVar10) >> 1;
  uVar8 = uVar7 & 0xffffffff;
  if ((int)uVar18 <= (int)uVar7) {
    uVar8 = (ulonglong)uVar18;
  }
  if (0 < (int)uVar8) {
    do {
      bVar15 = *pbVar11;
      if ((char)(bVar15 + 0xb0) < '\0') {
        if (0x20 < bVar15) goto LAB_1425c2cee;
        if (bVar15 != 0x20) {
          uVar9 = 0x40;
        }
        *puVar10 = (ushort)bVar15;
      }
      else {
        uVar21 = (bVar15 + uVar9) - 0x90;
        if (0x2fff < (int)uVar21) goto LAB_1425c2cee;
        *puVar10 = (ushort)uVar21;
        uVar9 = uVar21 & 0xffffff80 | 0x40;
      }
      puVar10 = puVar10 + 1;
      pbVar11 = pbVar11 + 1;
      iVar14 = (int)uVar8;
      uVar8 = (ulonglong)(iVar14 - 1);
    } while (1 < iVar14);
    uVar8 = 0;
  }
LAB_1425c2cee:
  do {
    uVar19 = (uint)uVar8;
    pbVar12 = pbVar11;
joined_r0x0001425c2cf1:
    if (pbVar3 <= pbVar12) {
      iVar14 = *param_2;
      goto joined_r0x0001425c2dad;
    }
    if (puVar4 <= puVar10) goto LAB_1425c3111;
    pbVar11 = pbVar12 + 1;
    bVar15 = *pbVar12;
    uVar16 = (uint)bVar15;
    puVar6 = puVar10;
    if ((char)(bVar15 + 0xb0) < '\0') {
      if (bVar15 < 0x21) break;
      if (((byte)(bVar15 - 0x25) < 0xd6) && (pbVar11 < pbVar3)) {
LAB_1425c2dd1:
        uVar18 = uVar16 * 0xf3 - 0xc530;
        if ((byte)uVar16 < 0x90) {
          uVar18 = uVar16 * 0xf3 - 0x4c30;
        }
        bVar15 = pbVar12[1];
        pbVar12 = pbVar12 + 2;
        if (bVar15 < 0x21) {
          iVar14 = (int)(char)(&DAT_149c41670)[bVar15];
          if ((0x10c00ff81U >> ((ulonglong)bVar15 & 0x3f) & 1) == 0) goto LAB_1425c2e5d;
        }
        else {
          iVar14 = bVar15 - 0xd;
LAB_1425c2e5d:
          uVar21 = uVar9 + uVar18 + iVar14;
          if (uVar21 < 0x110000) goto LAB_1425c3000;
        }
        *(byte *)(lVar2 + 0x41) = (byte)uVar16;
        *(byte *)(lVar2 + 0x42) = *pbVar11;
        cVar13 = '\x02';
        goto LAB_1425c30b9;
      }
      pbVar12 = pbVar11;
      if (bVar15 == 0xff) {
        while( true ) {
          if (pbVar3 <= pbVar12) {
            uVar9 = 0x40;
            iVar14 = *param_2;
            goto joined_r0x0001425c2dad;
          }
          pbVar11 = pbVar12 + 1;
          bVar15 = *pbVar12;
          uVar16 = (uint)bVar15;
          if (-1 < (char)(bVar15 + 0xb0)) {
            uVar9 = 0x40;
            goto LAB_1425c2eb3;
          }
          if (bVar15 < 0x21) break;
          if (((byte)(bVar15 - 0x25) < 0xd6) && (pbVar11 < pbVar3)) {
            uVar9 = 0x40;
            goto LAB_1425c2dd1;
          }
          pbVar12 = pbVar11;
          if (bVar15 != 0xff) {
            uVar9 = 0x40;
            goto LAB_1425c2e29;
          }
        }
        uVar9 = 0x40;
        break;
      }
LAB_1425c2e29:
      bVar15 = (byte)uVar16;
      *(byte *)(lVar2 + 0x41) = bVar15;
      if (bVar15 < 0x50) {
        if (bVar15 < 0x25) {
          uVar21 = 3;
          iVar14 = -0xddcf77;
          if (0x21 < bVar15) {
            iVar14 = uVar16 * 0xe6a9 + -0x217f7e;
            goto LAB_1425c2f2d;
          }
        }
        else {
          iVar14 = uVar16 * 0xf3 + -0x4c30;
          uVar21 = 1;
        }
      }
      else if (bVar15 < 0xfb) {
        iVar14 = uVar16 * 0xf3 + -0xc530;
        uVar21 = 1;
      }
      else {
        uVar21 = 3;
        iVar14 = 0x2dd0c;
        if (bVar15 < 0xfe) {
          iVar14 = uVar16 * 0xe6a9 + -0xe1fea2;
LAB_1425c2f2d:
          uVar21 = 2;
        }
      }
      uVar18 = uVar21 + iVar14 * 4;
      cVar13 = '\x01';
LAB_1425c2f3a:
      uVar18 = (int)uVar18 >> 2;
      lVar1 = 0;
      uVar19 = uVar21;
      do {
        lVar17 = lVar1;
        pbVar12 = pbVar11 + lVar17;
        cVar5 = (char)lVar17;
        if (pbVar3 <= pbVar12) {
          cVar13 = cVar13 + cVar5;
          iVar14 = *param_2;
joined_r0x0001425c2dad:
          if (iVar14 == 0xc) goto LAB_1425c30c5;
          goto LAB_1425c311a;
        }
        bVar15 = *pbVar12;
        *(byte *)(lVar2 + 0x41 + (longlong)(char)(cVar13 + cVar5)) = bVar15;
        if ((ulonglong)bVar15 < 0x21) {
          iVar14 = (int)(char)(&DAT_149c41670)[bVar15];
          if (uVar19 != 1) goto LAB_1425c2fa9;
LAB_1425c2fb5:
          if (-1 < iVar14) goto LAB_1425c2fd0;
LAB_1425c30aa:
          cVar13 = cVar13 + cVar5 + '\x01';
          pbVar12 = pbVar11 + lVar17 + 1;
LAB_1425c30b9:
          *param_2 = 0xc;
LAB_1425c30c5:
          *(undefined4 *)(lVar2 + 0x48) = 0x40;
          uVar19 = 0;
          goto LAB_1425c3124;
        }
        iVar14 = bVar15 - 0xd;
        if (uVar19 == 1) goto LAB_1425c2fb5;
LAB_1425c2fa9:
        if (uVar19 == 2) {
          iVar14 = iVar14 * 0xf3;
          goto LAB_1425c2fb5;
        }
        iVar14 = iVar14 * 0xe6a9;
        if (iVar14 < 0) goto LAB_1425c30aa;
LAB_1425c2fd0:
        uVar18 = uVar18 + iVar14;
        uVar19 = uVar19 - 1;
        lVar1 = lVar17 + 1;
        if (uVar21 == (uint)lVar1) {
          uVar21 = uVar9 + uVar18;
          uVar8 = 0;
          cVar13 = '\0';
          if (0x10ffff < uVar21) {
            pbVar12 = pbVar11 + lVar17 + 1;
            goto LAB_1425c30b9;
          }
          cVar13 = '\0';
          puVar6 = puVar10;
          pbVar12 = pbVar11 + lVar1;
          goto LAB_1425c3000;
        }
      } while( true );
    }
LAB_1425c2eb3:
    uVar21 = (uVar9 + bVar15) - 0x90;
    pbVar12 = pbVar11;
    if ((int)uVar21 < 0x3000) goto code_r0x0001425c2ecf;
LAB_1425c3000:
    uVar19 = (uint)uVar8;
    pbVar11 = pbVar12;
    if (uVar21 - 0xd7a4 < 0xffff589c) {
      uVar9 = uVar21 & 0xffffff80 | 0x40;
      if (0xffff < uVar21) {
        puVar10 = puVar6 + 1;
        *puVar6 = (short)(uVar21 >> 10) + 0xd7c0;
        uVar20 = (ushort)uVar21 & 0x3ff | 0xdc00;
        if (puVar4 <= puVar10) {
          *(ushort *)(lVar2 + 0x90) = uVar20;
          *(undefined1 *)(lVar2 + 0x5d) = 1;
LAB_1425c3111:
          *param_2 = 0xf;
LAB_1425c311a:
          *(uint *)(lVar2 + 0x48) = uVar9;
          uVar19 = uVar18 << 2 | uVar19;
LAB_1425c3124:
          *(uint *)(lVar2 + 0x4c) = uVar19;
          *(char *)(lVar2 + 0x40) = cVar13;
          *(byte **)(param_1 + 0x10) = pbVar12;
          *(ushort **)(param_1 + 0x20) = puVar10;
          return;
        }
        puVar6[1] = uVar20;
        puVar10 = puVar6 + 2;
        goto LAB_1425c2cee;
      }
    }
    else {
      uVar9 = 0x3070;
      if (((0x309f < uVar21) && (uVar9 = 0x7711, 0x51a5 < uVar21 - 0x4e00)) &&
         (uVar9 = 0xc1d1, uVar21 < 0xac00)) {
        uVar9 = uVar21 & 0xffffff80 | 0x40;
      }
    }
    *puVar6 = (ushort)uVar21;
    puVar10 = puVar6 + 1;
  } while( true );
  if (bVar15 != 0x20) {
    uVar9 = 0x40;
  }
  *puVar10 = (ushort)bVar15;
  puVar10 = puVar10 + 1;
  pbVar12 = pbVar11;
  goto joined_r0x0001425c2cf1;
code_r0x0001425c2ecf:
  *puVar10 = (ushort)uVar21;
  puVar10 = puVar10 + 1;
  uVar9 = uVar21 & 0xffffff80 | 0x40;
  puVar6 = *(ushort **)(param_1 + 0x28);
  goto LAB_1425c2c77;
}



// FUNCTION 1425c3150 FUN_1425c3150 body=1426 status=ok
// SIG undefined FUN_1425c3150(void)

void FUN_1425c3150(longlong param_1,int *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  ushort *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  byte *pbVar14;
  byte *pbVar15;
  ushort *puVar16;
  char cVar17;
  int iVar18;
  byte bVar19;
  uint uVar20;
  ushort *puVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  
  lVar1 = *(longlong *)(param_1 + 8);
  pbVar14 = *(byte **)(param_1 + 0x10);
  pbVar2 = *(byte **)(param_1 + 0x18);
  puVar16 = *(ushort **)(param_1 + 0x20);
  puVar3 = *(ushort **)(param_1 + 0x28);
  piVar13 = *(int **)(param_1 + 0x30);
  uVar7 = 0x40;
  if (*(uint *)(lVar1 + 0x48) != 0) {
    uVar7 = *(uint *)(lVar1 + 0x48);
  }
  uVar22 = *(uint *)(lVar1 + 0x4c);
  iVar12 = 0;
  cVar17 = *(char *)(lVar1 + 0x40);
  uVar11 = uVar22 & 3;
  puVar21 = puVar3;
  iVar5 = 0;
  if (((uVar11 != 0) && ('\0' < cVar17)) && (iVar18 = -1, iVar5 = iVar12, puVar16 < puVar3))
  goto LAB_1425c34c5;
LAB_1425c31ce:
  iVar12 = iVar5;
  uVar22 = (int)pbVar2 - (int)pbVar14;
  uVar24 = (ulonglong)((longlong)puVar21 - (longlong)puVar16) >> 1;
  uVar25 = uVar24 & 0xffffffff;
  if ((int)uVar22 <= (int)uVar24) {
    uVar25 = (ulonglong)uVar22;
  }
  if (0 < (int)uVar25) {
    do {
      bVar19 = *pbVar14;
      if ((char)(bVar19 + 0xb0) < '\0') {
        if (0x20 < bVar19) goto LAB_1425c324b;
        if (bVar19 != 0x20) {
          uVar7 = 0x40;
        }
        *puVar16 = (ushort)bVar19;
        *piVar13 = iVar12;
      }
      else {
        uVar11 = (bVar19 + uVar7) - 0x90;
        if (0x2fff < (int)uVar11) goto LAB_1425c324b;
        *puVar16 = (ushort)uVar11;
        *piVar13 = iVar12;
        uVar7 = uVar11 & 0xffffff80 | 0x40;
      }
      piVar13 = piVar13 + 1;
      puVar16 = puVar16 + 1;
      iVar12 = iVar12 + 1;
      pbVar14 = pbVar14 + 1;
      iVar5 = (int)uVar25;
      uVar25 = (ulonglong)(iVar5 - 1);
    } while (1 < iVar5);
    uVar25 = 0;
  }
LAB_1425c324b:
  do {
    uVar23 = (uint)uVar25;
    pbVar15 = pbVar14;
    iVar18 = iVar12;
    while( true ) {
      if (pbVar2 <= pbVar15) goto LAB_1425c3665;
      if (puVar3 <= puVar16) {
        iVar12 = 0xf;
        goto LAB_1425c365c;
      }
      iVar12 = iVar18 + 1;
      pbVar14 = pbVar15 + 1;
      bVar19 = *pbVar15;
      uVar20 = (uint)bVar19;
      puVar21 = puVar16;
      if (-1 < (char)(bVar19 + 0xb0)) break;
      if (0x20 < bVar19) {
        if (((byte)(bVar19 - 0x25) < 0xd6) && (pbVar14 < pbVar2)) {
LAB_1425c3353:
          uVar22 = uVar20 * 0xf3 - 0xc530;
          if ((byte)uVar20 < 0x90) {
            uVar22 = uVar20 * 0xf3 - 0x4c30;
          }
          bVar19 = pbVar15[1];
          pbVar15 = pbVar15 + 2;
          if (bVar19 < 0x21) {
            iVar5 = (int)(char)(&DAT_149c41670)[bVar19];
            if ((0x10c00ff81U >> ((ulonglong)bVar19 & 0x3f) & 1) == 0) goto LAB_1425c33de;
          }
          else {
            iVar5 = bVar19 - 0xd;
LAB_1425c33de:
            iVar12 = iVar18 + 2;
            uVar11 = iVar5 + uVar22 + uVar7;
            if (uVar11 < 0x110000) goto LAB_1425c3590;
          }
          *(byte *)(lVar1 + 0x41) = (byte)uVar20;
          *(byte *)(lVar1 + 0x42) = *pbVar14;
          cVar17 = '\x02';
        }
        else {
          pbVar15 = pbVar14;
          if (bVar19 == 0xff) {
            while( true ) {
              iVar12 = iVar18;
              if (pbVar2 <= pbVar15) {
                uVar7 = 0x40;
                goto LAB_1425c3665;
              }
              pbVar14 = pbVar15 + 1;
              bVar19 = *pbVar15;
              uVar20 = (uint)bVar19;
              if (-1 < (char)(bVar19 + 0xb0)) {
                iVar18 = iVar12 + 1;
                iVar12 = iVar12 + 2;
                uVar7 = 0x40;
                goto LAB_1425c343f;
              }
              if (bVar19 < 0x21) break;
              if (((byte)(bVar19 - 0x25) < 0xd6) && (pbVar14 < pbVar2)) {
                iVar18 = iVar12 + 1;
                uVar7 = 0x40;
                goto LAB_1425c3353;
              }
              iVar18 = iVar12 + 1;
              pbVar15 = pbVar14;
              if (bVar19 != 0xff) {
                iVar12 = iVar12 + 2;
                uVar7 = 0x40;
                goto LAB_1425c33a9;
              }
            }
            iVar18 = iVar12 + 1;
            iVar12 = iVar12 + 2;
            uVar7 = 0x40;
            goto LAB_1425c3288;
          }
LAB_1425c33a9:
          bVar19 = (byte)uVar20;
          *(byte *)(lVar1 + 0x41) = bVar19;
          if (bVar19 < 0x50) {
            if (bVar19 < 0x25) {
              uVar11 = 3;
              iVar5 = -0xddcf77;
              if (0x21 < bVar19) {
                iVar5 = uVar20 * 0xe6a9 + -0x217f7e;
                goto LAB_1425c34b9;
              }
            }
            else {
              iVar5 = uVar20 * 0xf3 + -0x4c30;
              uVar11 = 1;
            }
          }
          else if (bVar19 < 0xfb) {
            iVar5 = uVar20 * 0xf3 + -0xc530;
            uVar11 = 1;
          }
          else {
            uVar11 = 3;
            iVar5 = 0x2dd0c;
            if (bVar19 < 0xfe) {
              iVar5 = uVar20 * 0xe6a9 + -0xe1fea2;
LAB_1425c34b9:
              uVar11 = 2;
            }
          }
          uVar22 = uVar11 + iVar5 * 4;
          cVar17 = '\x01';
LAB_1425c34c5:
          uVar22 = (int)uVar22 >> 2;
          iVar12 = iVar12 + uVar11;
          lVar8 = 0;
          uVar23 = uVar11;
          while( true ) {
            lVar9 = lVar8;
            pbVar15 = pbVar14 + lVar9;
            cVar4 = (char)lVar9;
            if (pbVar2 <= pbVar15) {
              cVar17 = cVar17 + cVar4;
              goto LAB_1425c3665;
            }
            bVar19 = *pbVar15;
            *(byte *)(lVar1 + 0x41 + (longlong)(char)(cVar17 + cVar4)) = bVar19;
            if ((ulonglong)bVar19 < 0x21) {
              iVar5 = (int)(char)(&DAT_149c41670)[bVar19];
            }
            else {
              iVar5 = bVar19 - 0xd;
            }
            if (uVar23 == 1) break;
            if (uVar23 == 2) {
              iVar5 = iVar5 * 0xf3;
              break;
            }
            iVar5 = iVar5 * 0xe6a9;
            if (iVar5 < 0) goto LAB_1425c364b;
LAB_1425c355e:
            uVar22 = uVar22 + iVar5;
            uVar23 = uVar23 - 1;
            lVar8 = lVar9 + 1;
            if (uVar11 == (uint)lVar8) {
              uVar11 = uVar22 + uVar7;
              uVar25 = 0;
              uVar23 = 0;
              if (0x10ffff < uVar11) {
                pbVar15 = pbVar14 + lVar9 + 1;
                iVar12 = 0xc;
                cVar17 = '\0';
                goto LAB_1425c365c;
              }
              cVar17 = '\0';
              pbVar15 = pbVar14 + lVar8;
              puVar21 = puVar16;
              goto LAB_1425c3590;
            }
          }
          if (-1 < iVar5) goto LAB_1425c355e;
LAB_1425c364b:
          cVar17 = cVar17 + cVar4 + '\x01';
          pbVar15 = pbVar14 + lVar9 + 1;
        }
        iVar12 = 0xc;
        goto LAB_1425c365c;
      }
LAB_1425c3288:
      if (bVar19 != 0x20) {
        uVar7 = 0x40;
      }
      *puVar16 = (ushort)bVar19;
      puVar16 = puVar16 + 1;
      *piVar13 = iVar18;
      piVar13 = piVar13 + 1;
      pbVar15 = pbVar14;
      iVar18 = iVar12;
    }
LAB_1425c343f:
    uVar11 = (uVar7 + bVar19) - 0x90;
    pbVar15 = pbVar14;
    if ((int)uVar11 < 0x3000) break;
LAB_1425c3590:
    uVar23 = (uint)uVar25;
    uVar10 = (ushort)uVar11;
    if (uVar11 - 0xd7a4 < 0xffff589c) {
      uVar7 = uVar11 & 0xffffff80 | 0x40;
      if (uVar11 < 0x10000) goto LAB_1425c3622;
      puVar16 = puVar21 + 1;
      *puVar21 = (short)(uVar11 >> 10) + 0xd7c0;
      if (puVar3 <= puVar16) {
        *piVar13 = iVar18;
        piVar13 = piVar13 + 1;
        *(ushort *)(lVar1 + 0x90) = uVar10 & 0x3ff | 0xdc00;
        *(undefined1 *)(lVar1 + 0x5d) = 1;
        iVar12 = 0xf;
LAB_1425c365c:
        *param_2 = iVar12;
LAB_1425c3665:
        uVar11 = 0x40;
        if (*param_2 != 0xc) {
          uVar11 = uVar7;
        }
        uVar7 = 0;
        if (*param_2 != 0xc) {
          uVar7 = uVar22 << 2 | uVar23;
        }
        *(uint *)(lVar1 + 0x48) = uVar11;
        *(uint *)(lVar1 + 0x4c) = uVar7;
        *(char *)(lVar1 + 0x40) = cVar17;
        *(byte **)(param_1 + 0x10) = pbVar15;
        *(ushort **)(param_1 + 0x20) = puVar16;
        *(int **)(param_1 + 0x30) = piVar13;
        return;
      }
      puVar21[1] = uVar10 & 0x3ff | 0xdc00;
      puVar16 = puVar21 + 2;
      *piVar13 = iVar18;
      lVar8 = 2;
      piVar6 = piVar13 + 1;
    }
    else {
      uVar7 = 0x3070;
      if (((0x309f < uVar11) && (uVar7 = 0x7711, 0x51a5 < uVar11 - 0x4e00)) &&
         (uVar7 = 0xc1d1, uVar11 < 0xac00)) {
        uVar7 = uVar11 & 0xffffff80 | 0x40;
      }
LAB_1425c3622:
      *puVar21 = uVar10;
      puVar16 = puVar21 + 1;
      lVar8 = 1;
      piVar6 = piVar13;
    }
    piVar13 = piVar13 + lVar8;
    *piVar6 = iVar18;
    pbVar14 = pbVar15;
  } while( true );
  *puVar16 = (ushort)uVar11;
  puVar16 = puVar16 + 1;
  *piVar13 = iVar18;
  piVar13 = piVar13 + 1;
  uVar7 = uVar11 & 0xffffff80 | 0x40;
  puVar21 = *(ushort **)(param_1 + 0x28);
  iVar5 = iVar12;
  goto LAB_1425c31ce;
}



// FUNCTION 1425c3700 FUN_1425c3700 body=993 status=ok
// SIG undefined FUN_1425c3700(void)

void FUN_1425c3700(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  uint uVar17;
  uint uVar18;
  ushort *puVar19;
  ushort *puVar20;
  bool bVar21;
  
  lVar2 = *(longlong *)(param_1 + 8);
  puVar20 = *(ushort **)(param_1 + 0x10);
  puVar3 = *(ushort **)(param_1 + 0x18);
  pcVar10 = *(char **)(param_1 + 0x20);
  uVar11 = *(int *)(param_1 + 0x28) - (int)pcVar10;
  uVar17 = *(uint *)(lVar2 + 0x54);
  uVar18 = 0x40;
  if (*(uint *)(lVar2 + 0x50) != 0) {
    uVar18 = *(uint *)(lVar2 + 0x50);
  }
  if ((uVar17 != 0) && (0 < (int)uVar11)) goto LAB_1425c3851;
  do {
    uVar14 = (uint)((ulonglong)((longlong)puVar3 - (longlong)puVar20) >> 1);
    if ((int)uVar11 < (int)uVar14) {
      uVar14 = uVar11;
    }
    if (0 < (int)uVar14) {
      iVar4 = uVar14 + 1;
      do {
        uVar1 = *puVar20;
        uVar17 = (uint)uVar1;
        if (0x2fff < uVar17) break;
        if (uVar1 < 0x21) {
          if (uVar17 != 0x20) {
            uVar18 = 0x40;
          }
          cVar12 = (char)uVar1;
        }
        else {
          iVar13 = uVar17 - uVar18;
          if (0x7f < iVar13 + 0x40U) break;
          uVar18 = uVar17 & 0xffffff80 | 0x40;
          cVar12 = (char)iVar13 + -0x70;
        }
        *pcVar10 = cVar12;
        pcVar10 = pcVar10 + 1;
        puVar20 = puVar20 + 1;
        iVar4 = iVar4 + -1;
      } while (1 < iVar4);
    }
    uVar11 = *(int *)(param_1 + 0x28) - (int)pcVar10;
    puVar19 = puVar20;
LAB_1425c37c7:
    do {
      puVar20 = puVar19;
      if (puVar3 <= puVar19) goto LAB_1425c38b7;
      if ((int)uVar11 < 1) {
LAB_1425c382a:
        *param_2 = 0xf;
        goto LAB_1425c38b7;
      }
      iVar4 = 1;
      lVar8 = 0;
      puVar16 = puVar19;
      while( true ) {
        puVar20 = puVar16 + 1;
        uVar17 = (uint)puVar19[lVar8];
        if (0x20 < uVar17) break;
        if (uVar17 != 0x20) {
          uVar18 = 0x40;
        }
        pcVar10[lVar8] = (char)puVar19[lVar8];
        if (puVar3 <= puVar20) {
          pcVar10 = pcVar10 + lVar8 + 1;
          puVar20 = puVar16 + 1;
          goto LAB_1425c38b7;
        }
        lVar8 = lVar8 + 1;
        iVar4 = iVar4 + -1;
        puVar16 = puVar20;
        if ((int)(uVar11 + iVar4) < 2) {
          pcVar10 = pcVar10 + lVar8;
          goto LAB_1425c382a;
        }
      }
      pcVar10 = pcVar10 + lVar8;
      uVar11 = uVar11 - (int)lVar8;
      if ((uVar17 & 0xfc00) == 0xd800) {
LAB_1425c3851:
        if (puVar3 <= puVar20) {
          uVar17 = -uVar17;
          goto LAB_1425c38b7;
        }
        bVar21 = (*puVar20 & 0xfc00) == 0xdc00;
        uVar14 = uVar17 * 0x400 + (uint)*puVar20 + 0xfca02400;
        if (!bVar21) {
          uVar14 = uVar17;
        }
        uVar17 = uVar14;
        puVar20 = puVar20 + bVar21;
      }
      iVar4 = uVar17 - uVar18;
      if ((uVar17 - 0xd7a4 < 0xffff589c) ||
         (((uVar18 = 0x3070, 0x309f < uVar17 && (uVar18 = 0x7711, 0x51a5 < uVar17 - 0x4e00)) &&
          (uVar18 = 0xc1d1, uVar17 < 0xac00)))) {
        uVar18 = uVar17 & 0xffffff80 | 0x40;
      }
      puVar19 = puVar20;
      if (0x7f < iVar4 + 0x40U) {
        if ((iVar4 + 0x2911U < 0x5222) && (1 < uVar11)) {
          if (iVar4 < 0) {
            uVar14 = -iVar4 - 0x40;
            uVar15 = uVar14 % 0xf3;
            iVar4 = 0xf3 - uVar15;
            bVar6 = ~(byte)(uVar14 / 0xf3);
            if (uVar15 == 0) {
              bVar6 = -(char)(uVar14 / 0xf3);
            }
            cVar12 = bVar6 + 0x50;
            if (uVar15 != 0) goto LAB_1425c3a0f;
            *pcVar10 = cVar12;
            iVar4 = 0;
LAB_1425c3a50:
            cVar12 = (&DAT_149c416a0)[iVar4];
          }
          else {
            sVar7 = (short)iVar4 + -0x40;
            iVar13 = (int)sVar7 / 0xf3 + ((int)sVar7 >> 0x1f);
            iVar4 = (int)(short)(sVar7 + ((short)iVar13 - (sVar7 >> 0xf)) * -0xf3);
            cVar12 = ((char)iVar13 - (char)(sVar7 >> 7)) + -0x30;
LAB_1425c3a0f:
            *pcVar10 = cVar12;
            if (iVar4 < 0x14) goto LAB_1425c3a50;
            cVar12 = (char)iVar4 + '\r';
          }
          pcVar10[1] = cVar12;
          pcVar10 = pcVar10 + 2;
          uVar11 = uVar11 - 2;
          goto LAB_1425c37c7;
        }
        uVar14 = FUN_1425c3fb0();
        iVar4 = 4;
        if (uVar14 < 0x4000000) {
          iVar4 = (int)uVar14 >> 0x18;
        }
        iVar13 = iVar4 - uVar11;
        cVar12 = (char)(uVar14 >> 8);
        cVar5 = (char)(uVar14 >> 0x10);
        if (iVar13 != 0 && (int)uVar11 <= iVar4) {
          pcVar9 = (char *)(lVar2 + 0x68);
          if (iVar13 == 1) {
LAB_1425c3ab2:
            *pcVar9 = (char)uVar14;
          }
          else {
            if (iVar13 == 2) {
LAB_1425c3aa3:
              *pcVar9 = cVar12;
              pcVar9 = pcVar9 + 1;
              goto LAB_1425c3ab2;
            }
            if (iVar13 == 3) {
              pcVar9 = (char *)(lVar2 + 0x69);
              *(char *)(lVar2 + 0x68) = cVar5;
              goto LAB_1425c3aa3;
            }
          }
          *(char *)(lVar2 + 0x5b) = (char)iVar13;
          iVar4 = (int)uVar14 >> ((char)iVar13 * '\b' & 0x1fU);
          if (uVar11 == 1) {
LAB_1425c3adc:
            *pcVar10 = (char)iVar4;
            pcVar10 = pcVar10 + 1;
          }
          else {
            if (uVar11 == 2) {
LAB_1425c3ad6:
              *pcVar10 = (char)((uint)iVar4 >> 8);
              pcVar10 = pcVar10 + 1;
              goto LAB_1425c3adc;
            }
            if (uVar11 == 3) {
              *pcVar10 = (char)((uint)iVar4 >> 0x10);
              pcVar10 = pcVar10 + 1;
              goto LAB_1425c3ad6;
            }
          }
          *param_2 = 0xf;
LAB_1425c38b7:
          *(uint *)(lVar2 + 0x54) = (int)uVar17 >> 0x1f & -uVar17;
          *(uint *)(lVar2 + 0x50) = uVar18;
          *(ushort **)(param_1 + 0x10) = puVar20;
          *(char **)(param_1 + 0x20) = pcVar10;
          return;
        }
        if (iVar4 != 3) {
          if (iVar4 != 4) {
            uVar11 = uVar11 - iVar4;
            goto LAB_1425c37c7;
          }
          *pcVar10 = (char)(uVar14 >> 0x18);
          pcVar10 = pcVar10 + 1;
        }
        *pcVar10 = cVar5;
        pcVar10[1] = cVar12;
        pcVar10[2] = (char)uVar14;
        pcVar10 = pcVar10 + 3;
        uVar11 = uVar11 - iVar4;
        goto LAB_1425c37c7;
      }
      *pcVar10 = (char)iVar4 + -0x70;
      pcVar10 = pcVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (0x2fff < (int)uVar17);
  } while( true );
}



// FUNCTION 1425c3af0 FUN_1425c3af0 body=1193 status=ok
// SIG undefined FUN_1425c3af0(void)

void FUN_1425c3af0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  uint uVar4;
  ushort *puVar5;
  char cVar6;
  byte bVar7;
  short sVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  char *pcVar15;
  uint uVar16;
  ulonglong uVar17;
  char *pcVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ushort *puVar22;
  uint *puVar23;
  ushort *puVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  
  lVar1 = *(longlong *)(param_1 + 8);
  puVar5 = *(ushort **)(param_1 + 0x10);
  pcVar18 = *(char **)(param_1 + 0x20);
  uVar16 = *(int *)(param_1 + 0x28) - (int)pcVar18;
  uVar17 = (ulonglong)uVar16;
  uVar26 = *(uint *)(lVar1 + 0x54);
  uVar25 = 0x40;
  if (*(uint *)(lVar1 + 0x50) != 0) {
    uVar25 = *(uint *)(lVar1 + 0x50);
  }
  uVar20 = 0;
  puVar2 = *(ushort **)(param_1 + 0x18);
  puVar10 = *(uint **)(param_1 + 0x30);
  if (uVar26 == 0) goto LAB_1425c3b5b;
  if ((int)uVar16 < 1) goto LAB_1425c3b5b;
  lVar21 = 0xffffffff;
  do {
    if (puVar2 <= puVar5) {
      uVar26 = -uVar26;
      puVar24 = puVar5;
LAB_1425c3cec:
      *(uint *)(lVar1 + 0x54) = (int)uVar26 >> 0x1f & -uVar26;
      *(uint *)(lVar1 + 0x50) = uVar25;
      *(ushort **)(param_1 + 0x10) = puVar24;
      *(char **)(param_1 + 0x20) = pcVar18;
      *(uint **)(param_1 + 0x30) = puVar10;
      return;
    }
    bVar27 = (*puVar5 & 0xfc00) == 0xdc00;
    uVar16 = uVar26 * 0x400 + (uint)*puVar5 + 0xfca02400;
    if (!bVar27) {
      uVar16 = uVar26;
    }
    uVar26 = uVar16;
    uVar20 = (ulonglong)((int)uVar20 + (uint)bVar27);
    puVar5 = puVar5 + bVar27;
    do {
      uVar19 = (uint)uVar20;
      iVar9 = uVar26 - uVar25;
      if ((uVar26 - 0xd7a4 < 0xffff589c) ||
         (((uVar25 = 0x3070, 0x309f < uVar26 && (uVar25 = 0x7711, 0x51a5 < uVar26 - 0x4e00)) &&
          (uVar25 = 0xc1d1, uVar26 < 0xac00)))) {
        uVar25 = uVar26 & 0xffffff80 | 0x40;
      }
      uVar16 = (uint)uVar17;
      uVar4 = (uint)lVar21;
      puVar24 = puVar5;
      if (iVar9 + 0x40U < 0x80) {
        *pcVar18 = (char)iVar9 + -0x70;
        pcVar18 = pcVar18 + 1;
        *puVar10 = uVar4;
        puVar10 = puVar10 + 1;
        uVar16 = uVar16 - 1;
        if ((int)uVar26 < 0x3000) {
LAB_1425c3b5b:
          uVar19 = (uint)uVar20;
          uVar4 = (uint)((ulonglong)((longlong)puVar2 - (longlong)puVar5) >> 1);
          if ((int)uVar16 < (int)uVar4) {
            uVar4 = uVar16;
          }
          if (0 < (int)uVar4) {
            iVar9 = uVar4 + 1;
            do {
              uVar19 = (uint)uVar20;
              uVar26 = (uint)*puVar5;
              if (0x2fff < uVar26) break;
              if (*puVar5 < 0x21) {
                uVar16 = uVar26;
                if (uVar26 != 0x20) {
                  uVar25 = 0x40;
                }
              }
              else {
                iVar11 = uVar26 - uVar25;
                if (0x7f < iVar11 + 0x40U) break;
                uVar25 = uVar26 & 0xffffff80 | 0x40;
                uVar16 = (uint)(byte)((char)iVar11 + 0x90);
              }
              *pcVar18 = (char)uVar16;
              *puVar10 = uVar19;
              puVar5 = puVar5 + 1;
              puVar10 = puVar10 + 1;
              pcVar18 = pcVar18 + 1;
              uVar19 = uVar19 + 1;
              uVar20 = (ulonglong)uVar19;
              iVar9 = iVar9 + -1;
            } while (1 < iVar9);
          }
          uVar16 = *(int *)(param_1 + 0x28) - (int)pcVar18;
          puVar24 = puVar5;
        }
      }
      else {
        if ((0x5221 < iVar9 + 0x2911U) || (uVar16 < 2)) {
          uVar12 = FUN_1425c3fb0();
          iVar9 = 4;
          if (uVar12 < 0x4000000) {
            iVar9 = (int)uVar12 >> 0x18;
          }
          iVar11 = iVar9 - uVar16;
          cVar3 = (char)(uVar12 >> 8);
          cVar6 = (char)(uVar12 >> 0x10);
          if (iVar11 == 0 || iVar9 < (int)uVar16) {
            if (iVar9 == 2) {
LAB_1425c3e58:
              *pcVar18 = cVar3;
              *puVar10 = uVar4;
              pcVar18[1] = (char)uVar12;
              pcVar18 = pcVar18 + 2;
              puVar10[1] = uVar4;
              puVar10 = puVar10 + 2;
            }
            else {
              if (iVar9 == 3) {
LAB_1425c3e45:
                *pcVar18 = cVar6;
                pcVar18 = pcVar18 + 1;
                *puVar10 = uVar4;
                puVar10 = puVar10 + 1;
                goto LAB_1425c3e58;
              }
              if (iVar9 == 4) {
                *pcVar18 = (char)(uVar12 >> 0x18);
                pcVar18 = pcVar18 + 1;
                *puVar10 = uVar4;
                puVar10 = puVar10 + 1;
                goto LAB_1425c3e45;
              }
            }
            uVar16 = uVar16 - iVar9;
            goto LAB_1425c3be8;
          }
          pcVar15 = (char *)(lVar1 + 0x68);
          if (iVar11 == 1) {
LAB_1425c3f3c:
            *pcVar15 = (char)uVar12;
          }
          else {
            if (iVar11 == 2) {
LAB_1425c3f30:
              *pcVar15 = cVar3;
              pcVar15 = pcVar15 + 1;
              goto LAB_1425c3f3c;
            }
            if (iVar11 == 3) {
              pcVar15 = (char *)(lVar1 + 0x69);
              *(char *)(lVar1 + 0x68) = cVar6;
              goto LAB_1425c3f30;
            }
          }
          *(char *)(lVar1 + 0x5b) = (char)iVar11;
          iVar9 = (int)uVar12 >> ((char)iVar11 * '\b' & 0x1fU);
          if (uVar16 == 1) {
LAB_1425c3f8a:
            *pcVar18 = (char)iVar9;
            pcVar18 = pcVar18 + 1;
            *puVar10 = uVar4;
            puVar10 = puVar10 + 1;
          }
          else {
            if (uVar16 == 2) {
LAB_1425c3f7c:
              *pcVar18 = (char)((uint)iVar9 >> 8);
              pcVar18 = pcVar18 + 1;
              *puVar10 = uVar4;
              puVar10 = puVar10 + 1;
              goto LAB_1425c3f8a;
            }
            if (uVar16 == 3) {
              *pcVar18 = (char)((uint)iVar9 >> 0x10);
              pcVar18 = pcVar18 + 1;
              *puVar10 = uVar4;
              puVar10 = puVar10 + 1;
              goto LAB_1425c3f7c;
            }
          }
          *param_2 = 0xf;
          goto LAB_1425c3cec;
        }
        if (iVar9 < 0) {
          uVar12 = -iVar9 - 0x40;
          uVar13 = uVar12 % 0xf3;
          iVar9 = 0xf3 - uVar13;
          bVar7 = ~(byte)(uVar12 / 0xf3);
          if (uVar13 == 0) {
            bVar7 = -(char)(uVar12 / 0xf3);
          }
          cVar3 = bVar7 + 0x50;
          if (uVar13 != 0) goto LAB_1425c3eae;
          *pcVar18 = cVar3;
          iVar9 = 0;
LAB_1425c3ed0:
          cVar3 = (&DAT_149c416a0)[iVar9];
        }
        else {
          sVar8 = (short)iVar9 + -0x40;
          iVar11 = (int)sVar8 / 0xf3 + ((int)sVar8 >> 0x1f);
          iVar9 = (int)(short)(sVar8 + ((short)iVar11 - (sVar8 >> 0xf)) * -0xf3);
          cVar3 = ((char)iVar11 - (char)(sVar8 >> 7)) + -0x30;
LAB_1425c3eae:
          *pcVar18 = cVar3;
          if (iVar9 < 0x14) goto LAB_1425c3ed0;
          cVar3 = (char)iVar9 + '\r';
        }
        pcVar18[1] = cVar3;
        pcVar18 = pcVar18 + 2;
        *puVar10 = uVar4;
        puVar10[1] = uVar4;
        puVar10 = puVar10 + 2;
        uVar16 = uVar16 - 2;
      }
LAB_1425c3be8:
      if (puVar2 <= puVar24) goto LAB_1425c3cec;
      if ((int)uVar16 < 1) {
LAB_1425c3c65:
        *param_2 = 0xf;
        goto LAB_1425c3cec;
      }
      iVar9 = 1;
      lVar14 = 0;
      puVar22 = puVar24;
      puVar23 = puVar10;
      while( true ) {
        puVar5 = puVar22 + 1;
        uVar26 = (uint)puVar24[lVar14];
        if (0x20 < uVar26) break;
        if (uVar26 != 0x20) {
          uVar25 = 0x40;
        }
        pcVar18[lVar14] = (char)puVar24[lVar14];
        puVar23 = puVar23 + 1;
        puVar10[lVar14] = uVar19 + (int)lVar14;
        if (puVar2 <= puVar5) {
          pcVar18 = pcVar18 + lVar14 + 1;
          puVar10 = puVar23;
          puVar24 = puVar22 + 1;
          goto LAB_1425c3cec;
        }
        lVar14 = lVar14 + 1;
        iVar9 = iVar9 + -1;
        puVar22 = puVar5;
        if ((int)(uVar16 + iVar9) < 2) {
          pcVar18 = pcVar18 + lVar14;
          puVar10 = puVar23;
          puVar24 = puVar5;
          goto LAB_1425c3c65;
        }
      }
      pcVar18 = pcVar18 + lVar14;
      uVar17 = (ulonglong)uVar16 - lVar14;
      lVar21 = (ulonglong)uVar19 + lVar14;
      uVar20 = (ulonglong)uVar19 + lVar14 + 1;
      puVar10 = puVar23;
    } while ((uVar26 & 0xfc00) != 0xd800);
  } while( true );
}



// FUNCTION 1425c3fb0 FUN_1425c3fb0 body=1064 status=ok
// SIG undefined FUN_1425c3fb0(void)

uint FUN_1425c3fb0(uint param_1)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if ((int)param_1 < -0x40) {
    if (param_1 < 0xffffd6ef) {
      if (0xfffd22f3 < param_1) {
        uVar5 = (-param_1 - 0x2911) % 0xf3;
        uVar1 = 0xf3 - uVar5;
        if (uVar5 == 0) {
          uVar1 = 0;
        }
        uVar5 = (uint)(uVar5 != 0) + (-param_1 - 0x2911) / 0xf3;
        if (uVar1 < 0x14) {
          uVar1 = (uint)(char)(&DAT_149c416a0)[uVar1];
        }
        else {
          uVar1 = uVar1 + 0xd;
        }
        uVar6 = (uVar5 & 0xffff) * 0xdb3 >> 0x10;
        uVar6 = ((uVar5 - uVar6 & 0xffff) >> 1) + uVar6 >> 7;
        sVar2 = (short)uVar5 + (short)uVar6 * -0xf3;
        uVar5 = -uVar6;
        uVar3 = 0;
        if (sVar2 != 0) {
          uVar3 = 0xf3 - sVar2;
          uVar5 = ~uVar6;
        }
        if (uVar3 < 0x14) {
          iVar4 = (int)(char)(&DAT_149c416a0)[uVar3];
        }
        else {
          iVar4 = uVar3 + 0xd;
        }
        return uVar5 * 0x10000 + 0x250000 | uVar1 | iVar4 << 8 | 0x3000000;
      }
      uVar5 = (-param_1 - 0x2dd0c) % 0xf3;
      uVar1 = 0xf3 - uVar5;
      if (uVar5 == 0) {
        uVar1 = 0;
      }
      uVar5 = (uint)(uVar5 != 0) + (-param_1 - 0x2dd0c) / 0xf3;
      if (uVar1 < 0x14) {
        uVar1 = (uint)(char)(&DAT_149c416a0)[uVar1];
      }
      else {
        uVar1 = uVar1 + 0xd;
      }
      uVar7 = 0xf3 - uVar5 % 0xf3;
      uVar6 = ~(uVar5 / 0xf3);
      if (uVar5 % 0xf3 == 0) {
        uVar7 = 0;
        uVar6 = -(uVar5 / 0xf3);
      }
      if (uVar7 < 0x14) {
        iVar4 = (int)(char)(&DAT_149c416a0)[uVar7];
      }
      else {
        iVar4 = uVar7 + 0xd;
      }
      if ((int)uVar6 < -0xdf) {
        iVar8 = (int)(char)(&DAT_149c41793)[(int)uVar6];
      }
      else {
        iVar8 = uVar6 + 0x100;
      }
      return uVar1 | iVar4 << 8 | iVar8 << 0x10 | 0x21000000;
    }
    uVar6 = -param_1 - 0x40;
    uVar1 = (uVar6 & 0xffff) * 0xdb3 >> 0x10;
    uVar5 = ((uVar6 - uVar1 & 0xffff) >> 1) + uVar1 >> 7;
    sVar2 = (short)uVar6 + (short)uVar5 * -0xf3;
    uVar1 = -uVar5;
    uVar3 = 0;
    if (sVar2 != 0) {
      uVar3 = 0xf3 - sVar2;
      uVar1 = ~uVar5;
    }
    if (uVar3 < 0x14) {
      uVar5 = (uint)(char)(&DAT_149c416a0)[uVar3];
    }
    else {
      uVar5 = uVar3 + 0xd;
    }
    uVar1 = uVar1 * 0x100 + 0x5000;
  }
  else {
    if (0x2910 < (int)param_1) {
      if (param_1 < 0x2dd0c) {
        param_1 = param_1 - 0x2911;
        uVar1 = param_1 % 0xf3;
        if (uVar1 < 0x14) {
          uVar1 = (uint)(char)(&DAT_149c416a0)[uVar1];
        }
        else {
          uVar1 = uVar1 + 0xd;
        }
        uVar5 = (param_1 / 0xf3 & 0xffff) * 0xdb3 >> 0x10;
        uVar5 = param_1 / 0xf3 + (((param_1 / 0xf3 - uVar5 & 0xffff) >> 1) + uVar5 >> 7) * -0xf3;
        if ((ushort)uVar5 < 0x14) {
          uVar5 = (uint)(char)(&DAT_149c416a0)[uVar5 & 0xffff];
        }
        else {
          uVar5 = uVar5 + 0xd & 0xffff;
        }
        return (param_1 / 0xe6a9) * 0x10000 + 0xfb0000 | uVar1 | uVar5 << 8 | 0x3000000;
      }
      param_1 = param_1 - 0x2dd0c;
      uVar1 = param_1 % 0xf3;
      if (uVar1 < 0x14) {
        uVar1 = (uint)(char)(&DAT_149c416a0)[uVar1];
      }
      else {
        uVar1 = uVar1 + 0xd;
      }
      uVar5 = param_1 / 0xf3 + (param_1 / 0xe6a9) * -0xf3;
      if (uVar5 < 0x14) {
        iVar4 = (int)(char)(&DAT_149c416a0)[uVar5];
      }
      else {
        iVar4 = uVar5 + 0xd;
      }
      if (param_1 < 0x120534) {
        iVar8 = (int)(char)(&DAT_149c416a0)[param_1 / 0xe6a9];
      }
      else {
        iVar8 = param_1 / 0xe6a9 + 0xd;
      }
      return uVar1 | iVar4 << 8 | iVar8 << 0x10 | 0xfe000000;
    }
    uVar1 = (int)(short)(param_1 - 0x40) / 0xf3;
    iVar4 = (param_1 - 0x40) + uVar1 * -0xf3;
    sVar2 = (short)iVar4;
    if (sVar2 < 0x14) {
      uVar5 = (uint)(char)(&DAT_149c416a0)[sVar2];
    }
    else {
      uVar5 = iVar4 + 0xdU & 0xffff;
    }
    uVar1 = (uVar1 & 0xffff) * 0x100 + 0xd000;
  }
  return uVar1 | uVar5 | 0x2000000;
}



// FUNCTION 1425c43e0 FUN_1425c43e0 body=659 status=ok
// SIG undefined FUN_1425c43e0(void)

void FUN_1425c43e0(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 local_118 [224];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar1 = (undefined8 *)FUN_1424da030(0xa8);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    *param_3 = 7;
  }
  else {
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    local_148 = 0x28;
    *puVar1 = 0;
    uVar2 = FUN_14250b6d0("icu-internal-compound-s1",local_118,&local_148,param_3);
    puVar1[1] = uVar2;
    uVar2 = FUN_14250b6d0("icu-internal-compound-s2",local_118,&local_148,param_3);
    puVar1[2] = uVar2;
    uVar2 = FUN_14250b6d0("icu-internal-compound-s3",local_118,&local_148,param_3);
    puVar1[3] = uVar2;
    uVar2 = FUN_14250b6d0("icu-internal-compound-d1",local_118,&local_148,param_3);
    puVar1[4] = uVar2;
    uVar2 = FUN_14250b6d0("icu-internal-compound-d2",local_118,&local_148,param_3);
    puVar1[5] = uVar2;
    uVar2 = FUN_14250b6d0("icu-internal-compound-d3",local_118,&local_148,param_3);
    puVar1[6] = uVar2;
    uVar2 = FUN_14250b6d0("icu-internal-compound-d4",local_118,&local_148,param_3);
    puVar1[7] = uVar2;
    uVar2 = FUN_14250b6d0("icu-internal-compound-d5",local_118,&local_148,param_3);
    puVar1[8] = uVar2;
    uVar2 = FUN_14250b6d0("icu-internal-compound-d6",local_118,&local_148,param_3);
    puVar1[9] = uVar2;
    uVar2 = FUN_14250b6d0("icu-internal-compound-d7",local_118,&local_148,param_3);
    puVar1[10] = uVar2;
    uVar2 = FUN_14250b6d0("icu-internal-compound-t",local_118,&local_148,param_3);
    puVar1[0xb] = uVar2;
    uVar2 = FUN_14250b6d0("ibm-915_P100-1995",local_118,&local_148,param_3);
    puVar1[0xc] = uVar2;
    uVar2 = FUN_14250b6d0("ibm-916_P100-1995",local_118,&local_148,param_3);
    puVar1[0xd] = uVar2;
    uVar2 = FUN_14250b6d0("ibm-914_P100-1995",local_118,&local_148,param_3);
    puVar1[0xe] = uVar2;
    uVar2 = FUN_14250b6d0("ibm-874_P100-1995",local_118,&local_148,param_3);
    puVar1[0xf] = uVar2;
    uVar2 = FUN_14250b6d0("ibm-912_P100-1995",local_118,&local_148,param_3);
    puVar1[0x10] = uVar2;
    uVar2 = FUN_14250b6d0("ibm-913_P100-2000",local_118,&local_148,param_3);
    puVar1[0x11] = uVar2;
    uVar2 = FUN_14250b6d0("iso-8859_14-1998",local_118,&local_148,param_3);
    puVar1[0x12] = uVar2;
    uVar2 = FUN_14250b6d0("ibm-923_P100-1998",local_118,&local_148,param_3);
    puVar1[0x13] = uVar2;
    if ((*param_3 < 1) && (*(char *)(param_2 + 8) == '\0')) {
      *(undefined4 *)(puVar1 + 0x14) = 0;
    }
    else {
      FUN_1425c4690(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_168);
}



// FUNCTION 1425c4690 FUN_1425c4690 body=337 status=ok
// SIG undefined FUN_1425c4690(void)

void FUN_1425c4690(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[1] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[2] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[3] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[4] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[5] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[6] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[7] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[8] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[9] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[10] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0xb] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0xc] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0xd] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0xe] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0xf] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0x10] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0x11] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0x12] != 0) {
      FUN_14250b3d0();
    }
    if (plVar1[0x13] != 0) {
      FUN_14250b3d0();
    }
    FUN_1424da110(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1425c4800 FUN_1425c4800 body=789 status=ok
// SIG undefined FUN_1425c4800(void)

void FUN_1425c4800(uint *param_1,int *param_2)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  size_t sVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined1 *puVar13;
  longlong lVar14;
  byte bVar15;
  byte *pbVar16;
  byte *pbVar17;
  ushort *puVar18;
  undefined1 auStack_a8 [40];
  undefined2 local_80 [4];
  longlong local_78;
  byte *local_70;
  byte *local_68;
  ushort *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pbVar17 = *(byte **)(param_1 + 4);
  puVar18 = *(ushort **)(param_1 + 8);
  pbVar2 = *(byte **)(param_1 + 6);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 2) + 0x10);
  uVar5 = 0x38;
  if ((ushort)*param_1 < 0x38) {
    uVar5 = *param_1;
  }
  memcpy(local_80,param_1,(ulonglong)(uVar5 & 0xffff));
  local_80[0] = (undefined2)uVar5;
  iVar12 = *(int *)(lVar3 + 0xa0);
LAB_1425c48bd:
  do {
    if (pbVar2 <= pbVar17) goto LAB_1425c4adb;
    if (*(ushort **)(param_1 + 10) <= puVar18) {
      *param_2 = 0xf;
      goto LAB_1425c4adb;
    }
    lVar9 = (longlong)*(char *)(*(longlong *)(param_1 + 2) + 0x40);
    pbVar6 = (byte *)(*(longlong *)(param_1 + 2) + 0x41);
    pbVar16 = pbVar17;
    if (0 < lVar9) {
      pbVar16 = pbVar6;
    }
    if (*pbVar16 == 0x1b) {
      puVar13 = &DAT_149c418e1;
      lVar11 = 0;
      do {
        bVar15 = 0x1b;
        lVar14 = 0;
LAB_1425c4923:
        if (lVar14 < lVar9) {
          if (pbVar6[lVar14] != bVar15) goto LAB_1425c4946;
LAB_1425c4916:
          bVar15 = puVar13[lVar14];
          lVar14 = lVar14 + 1;
          if (bVar15 == 0) {
            if (*param_2 == 0xb) goto LAB_1425c4a3c;
            iVar10 = (int)lVar11;
            if (iVar10 == -2) goto LAB_1425c4ac9;
            sVar7 = strlen(&DAT_149c418e0 + (longlong)iVar10 * 5);
            pbVar17 = pbVar17 + ((int)sVar7 - (int)*(char *)(*(longlong *)(param_1 + 2) + 0x40));
            *(undefined1 *)(*(longlong *)(param_1 + 2) + 0x40) = 0;
            iVar12 = iVar10;
            goto LAB_1425c499d;
          }
          goto LAB_1425c4923;
        }
        if (pbVar17 + (lVar14 - lVar9) < pbVar2) {
          if ((int)(char)pbVar17[lVar14 - lVar9] != (uint)bVar15) goto LAB_1425c4946;
          goto LAB_1425c4916;
        }
        *param_2 = 0xb;
LAB_1425c4946:
        lVar11 = lVar11 + 1;
        puVar13 = puVar13 + 5;
      } while (lVar11 != 0x14);
      if (*param_2 == 0xb) {
LAB_1425c4a3c:
        pbVar16 = pbVar17;
        if (pbVar17 < pbVar2) {
          uVar8 = ~(ulonglong)pbVar17;
          if (((int)pbVar2 - (int)pbVar17 & 1U) != 0) {
            bVar15 = *pbVar17;
            pbVar17 = pbVar17 + 1;
            lVar9 = *(longlong *)(param_1 + 2);
            cVar1 = *(char *)(lVar9 + 0x40);
            *(char *)(lVar9 + 0x40) = cVar1 + '\x01';
            *(byte *)(lVar9 + 0x41 + (longlong)cVar1) = bVar15;
          }
          pbVar16 = pbVar2;
          if (pbVar2 + uVar8 != (byte *)0x0) {
            do {
              bVar15 = *pbVar17;
              lVar9 = *(longlong *)(param_1 + 2);
              cVar1 = *(char *)(lVar9 + 0x40);
              *(char *)(lVar9 + 0x40) = cVar1 + '\x01';
              *(byte *)(lVar9 + 0x41 + (longlong)cVar1) = bVar15;
              bVar15 = pbVar17[1];
              lVar9 = *(longlong *)(param_1 + 2);
              cVar1 = *(char *)(lVar9 + 0x40);
              *(char *)(lVar9 + 0x40) = cVar1 + '\x01';
              *(byte *)(lVar9 + 0x41 + (longlong)cVar1) = bVar15;
              pbVar17 = pbVar17 + 2;
            } while (pbVar17 != pbVar2);
          }
        }
        *param_2 = 0;
        pbVar17 = pbVar16;
      }
      else {
LAB_1425c4ac9:
        pbVar17 = pbVar17 + (*(char *)(*(longlong *)(param_1 + 2) + 0x40) == '\0');
        *param_2 = 0xc;
      }
      goto LAB_1425c4adb;
    }
LAB_1425c499d:
    if (iVar12 == 0) {
      if (pbVar17 < pbVar2) {
        lVar9 = (longlong)pbVar2 - (longlong)pbVar17;
        pbVar16 = pbVar17;
        do {
          bVar15 = *pbVar16;
          pbVar17 = pbVar16;
          if (bVar15 == 0x1b) break;
          if (*(ushort **)(param_1 + 10) <= puVar18) {
            *param_2 = 0xf;
            break;
          }
          pbVar16 = pbVar16 + 1;
          *puVar18 = (ushort)bVar15;
          puVar18 = puVar18 + 1;
          lVar9 = lVar9 + -1;
          pbVar17 = pbVar2;
        } while (lVar9 != 0);
      }
      goto LAB_1425c48bd;
    }
    if (pbVar17 < pbVar2) {
      uVar5 = (int)pbVar2 - (int)pbVar17;
      if (1 < (int)uVar5) {
        uVar8 = 1;
        do {
          if (pbVar17[uVar8] == 0x1b) {
            uVar5 = (uint)uVar8;
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
      local_68 = pbVar17 + (int)uVar5;
      uVar4 = *(undefined8 *)(local_78 + 0x30);
      *(undefined8 *)(local_78 + 0x30) = *(undefined8 *)(lVar3 + (longlong)iVar12 * 8);
      local_70 = pbVar17;
      local_60 = puVar18;
      FUN_142583420(local_80,param_2);
      puVar18 = local_60;
      pbVar17 = local_70;
      *(undefined8 *)(local_78 + 0x30) = uVar4;
      if (0 < *param_2) {
        if (*param_2 == 0xf) {
          bVar15 = *(byte *)(local_78 + 0x5d);
          if ('\0' < (char)bVar15) {
            memcpy((void *)(*(longlong *)(param_1 + 2) + 0x90),(void *)(local_78 + 0x90),
                   (ulonglong)bVar15);
            bVar15 = *(byte *)(local_78 + 0x5d);
          }
          *(byte *)(*(longlong *)(param_1 + 2) + 0x5d) = bVar15;
          *(undefined1 *)(local_78 + 0x5d) = 0;
        }
LAB_1425c4adb:
        *(int *)(lVar3 + 0xa0) = iVar12;
        *(ushort **)(param_1 + 8) = puVar18;
        *(byte **)(param_1 + 4) = pbVar17;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
      }
    }
  } while( true );
}



// FUNCTION 1425c4b40 FUN_1425c4b40 body=3617 status=ok
// SIG undefined FUN_1425c4b40(void)

void FUN_1425c4b40(longlong param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  byte bVar12;
  byte bVar20;
  undefined8 uVar28;
  ulonglong uVar29;
  int iVar30;
  int iVar31;
  ulonglong uVar32;
  char cVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  char *pcVar39;
  char *pcVar40;
  undefined4 uVar41;
  ulonglong uVar42;
  uint uVar43;
  ushort *puVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  uint uVar73;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  uint uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  uint uVar85;
  uint uVar86;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  uint uVar87;
  undefined1 auVar81 [16];
  uint uVar88;
  uint uVar89;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uVar90;
  uint uVar91;
  undefined1 unaff_XMM14 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint uVar96;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  uint uVar97;
  undefined1 auStack_138 [43];
  undefined1 local_10d;
  uint local_10c;
  int *local_108;
  longlong local_100;
  ushort *local_f8;
  uint local_ec;
  char local_e7 [7];
  undefined1 local_e0 [40];
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  
  local_e0._0_8_ = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_100 = *(longlong *)(param_1 + 8);
  puVar44 = *(ushort **)(param_1 + 0x10);
  pcVar40 = *(char **)(param_1 + 0x20);
  pcVar3 = *(char **)(param_1 + 0x28);
  local_f8 = *(ushort **)(param_1 + 0x18);
  local_10d = *(undefined1 *)(local_100 + 0x3f);
  lVar4 = *(longlong *)(local_100 + 0x10);
  uVar42 = (ulonglong)*(uint *)(lVar4 + 0xa0);
  uVar43 = *(uint *)(local_100 + 0x54);
  local_108 = param_2;
  if ((uVar43 != 0) && (pcVar39 = pcVar40, pcVar40 < pcVar3)) goto LAB_1425c4c2f;
  do {
    uVar41 = (undefined4)uVar42;
    if (local_f8 <= puVar44) {
LAB_1425c5715:
      *(undefined4 *)(lVar4 + 0xa0) = uVar41;
      *(ushort **)(param_1 + 0x10) = puVar44;
      *(char **)(param_1 + 0x20) = pcVar40;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0._0_8_ ^ (ulonglong)auStack_138);
    }
    if (pcVar3 <= pcVar40) {
      *local_108 = 0xf;
      goto LAB_1425c5715;
    }
    uVar2 = *puVar44;
    uVar43 = (uint)uVar2;
    puVar44 = puVar44 + 1;
    pcVar39 = pcVar40;
    if ((uVar43 & 0xf800) == 0xd800) {
      if ((uVar2 & 0x400) == 0) {
LAB_1425c4c2f:
        uVar41 = (undefined4)uVar42;
        pcVar40 = pcVar39;
        if (puVar44 < local_f8) {
          uVar2 = *puVar44;
          if ((uVar2 & 0xfc00) == 0xdc00) {
            puVar44 = puVar44 + 1;
            uVar43 = uVar43 * 0x400 + (uint)uVar2 + 0xfca02400;
            *(undefined4 *)(local_100 + 0x54) = 0;
            goto LAB_1425c4c70;
          }
          goto LAB_1425c56f4;
        }
      }
      else {
LAB_1425c56f4:
        *local_108 = 0xc;
        pcVar40 = pcVar39;
      }
      *(uint *)(local_100 + 0x54) = uVar43;
      goto LAB_1425c5715;
    }
LAB_1425c4c70:
    uVar63 = (uint)uVar42;
    if ((((uVar43 < 0xb) && (uVar73 = 0, (0x601U >> (uVar43 & 0x1f) & 1) != 0)) ||
        (uVar73 = 0, (uVar43 & 0xffffff60) - 0x20 < 0x60)) ||
       ((uVar43 - 0x102 < 0x10 && (uVar73 = 0x10, (0xfc3fU >> (uVar43 - 0x102 & 0x1f) & 1) != 0))))
    goto switchD_1425c503a_caseD_1e0a;
    uVar74 = uVar43 & 0xfffffffc;
    uVar73 = 0x10;
    if ((((uVar74 == 0x118) || ((uVar43 & 0xfffffffb) - 0x139 < 2)) ||
        (((uVar43 - 0x141 < 0x15 && ((0x19804fU >> (uVar43 - 0x141 & 0x1f) & 1) != 0)) ||
         (uVar74 == 0x158)))) ||
       (((((uVar85 = uVar43 & 0xfffffffe, uVar85 == 0x15e ||
           ((uVar43 - 0x160 < 0x1f && ((0x7e03c03fU >> (uVar43 - 0x160 & 0x1f) & 1) != 0)))) ||
          ((uVar43 - 0x2c7 < 0x17 && ((0x560001U >> (uVar43 - 0x2c7 & 0x1f) & 1) != 0)))) ||
         (((uVar73 = 0x11, uVar74 == 0x108 ||
           (((uVar43 - 0x11c < 6 && ((0x33U >> (uVar43 - 0x11c & 0x1f) & 1) != 0)) ||
            (uVar74 == 0x124)))) ||
          ((uVar43 - 0x134 < 0x3a &&
           ((0x300030000000003U >> ((ulonglong)(uVar43 - 0x134) & 0x3f) & 1) != 0)))))) ||
        (uVar73 = 0x12, uVar74 == 0x174)))) goto switchD_1425c503a_caseD_1e0a;
    if (0x1ef1 < (int)uVar43) {
      if (1 < uVar43 - 0x1ef2) {
        if (uVar43 == 0x20ac) goto LAB_1425c57d8;
        goto switchD_1425c503a_caseD_1e0c;
      }
      goto switchD_1425c503a_caseD_1e0a;
    }
    switch(uVar43) {
    case 0x1e0a:
    case 0x1e0b:
    case 0x1e1e:
    case 0x1e1f:
    case 0x1e40:
    case 0x1e41:
    case 0x1e56:
    case 0x1e57:
    case 0x1e60:
    case 0x1e61:
    case 0x1e6a:
    case 0x1e6b:
    case 0x1e80:
    case 0x1e81:
    case 0x1e82:
    case 0x1e83:
    case 0x1e84:
    case 0x1e85:
      goto switchD_1425c503a_caseD_1e0a;
    case 0x1e0c:
    case 0x1e0d:
    case 0x1e0e:
    case 0x1e0f:
    case 0x1e10:
    case 0x1e11:
    case 0x1e12:
    case 0x1e13:
    case 0x1e14:
    case 0x1e15:
    case 0x1e16:
    case 0x1e17:
    case 0x1e18:
    case 0x1e19:
    case 0x1e1a:
    case 0x1e1b:
    case 0x1e1c:
    case 0x1e1d:
    case 0x1e20:
    case 0x1e21:
    case 0x1e22:
    case 0x1e23:
    case 0x1e24:
    case 0x1e25:
    case 0x1e26:
    case 0x1e27:
    case 0x1e28:
    case 0x1e29:
    case 0x1e2a:
    case 0x1e2b:
    case 0x1e2c:
    case 0x1e2d:
    case 0x1e2e:
    case 0x1e2f:
    case 0x1e30:
    case 0x1e31:
    case 0x1e32:
    case 0x1e33:
    case 0x1e34:
    case 0x1e35:
    case 0x1e36:
    case 0x1e37:
    case 0x1e38:
    case 0x1e39:
    case 0x1e3a:
    case 0x1e3b:
    case 0x1e3c:
    case 0x1e3d:
    case 0x1e3e:
    case 0x1e3f:
    case 0x1e42:
    case 0x1e43:
    case 0x1e44:
    case 0x1e45:
    case 0x1e46:
    case 0x1e47:
    case 0x1e48:
    case 0x1e49:
    case 0x1e4a:
    case 0x1e4b:
    case 0x1e4c:
    case 0x1e4d:
    case 0x1e4e:
    case 0x1e4f:
    case 0x1e50:
    case 0x1e51:
    case 0x1e52:
    case 0x1e53:
    case 0x1e54:
    case 0x1e55:
    case 0x1e58:
    case 0x1e59:
    case 0x1e5a:
    case 0x1e5b:
    case 0x1e5c:
    case 0x1e5d:
    case 0x1e5e:
    case 0x1e5f:
    case 0x1e62:
    case 0x1e63:
    case 0x1e64:
    case 0x1e65:
    case 0x1e66:
    case 0x1e67:
    case 0x1e68:
    case 0x1e69:
    case 0x1e6c:
    case 0x1e6d:
    case 0x1e6e:
    case 0x1e6f:
    case 0x1e70:
    case 0x1e71:
    case 0x1e72:
    case 0x1e73:
    case 0x1e74:
    case 0x1e75:
    case 0x1e76:
    case 0x1e77:
    case 0x1e78:
    case 0x1e79:
    case 0x1e7a:
    case 0x1e7b:
    case 0x1e7c:
    case 0x1e7d:
    case 0x1e7e:
    case 0x1e7f:
switchD_1425c503a_caseD_1e0c:
      uVar73 = 0xf;
      if ((uVar43 - 0xe01 < 0x3a) || (uVar73 = 0xf, uVar43 - 0xe3f < 0x1d))
      goto switchD_1425c503a_caseD_1e0a;
      uVar73 = 0xe;
      if (((uVar43 - 0x100 < 0x24) &&
          ((0xc00cc0003U >> ((ulonglong)(uVar43 - 0x100) & 0x3f) & 1) != 0)) ||
         (((uVar74 == 0x128 || (uVar85 == 0x12e)) ||
          ((uVar43 - 0x136 < 0x3e &&
           (uVar73 = 0xe, (0x303f000300f18067U >> ((ulonglong)(uVar43 - 0x136) & 0x3f) & 1) != 0))))
         )) goto switchD_1425c503a_caseD_1e0a;
      uVar73 = 2;
      if (((uVar85 == 700) || (uVar43 == 0x2015)) || (uVar73 = 2, uVar43 - 900 < 0x4b))
      goto switchD_1425c503a_caseD_1e0a;
      uVar73 = 3;
      if ((((uVar43 - 0x60c < 0x14) && ((0x88001U >> (uVar43 - 0x60c & 0x1f) & 1) != 0)) ||
          ((uVar43 - 0x621 < 0x1a || ((uVar43 - 0x640 < 0x13 || (uVar43 == 0x200b)))))) ||
         (uVar43 - 0x660 < 0xe)) goto switchD_1425c503a_caseD_1e0a;
      if (uVar43 - 0xfe70 < 5) {
        if (((0x17U >> (uVar43 - 0xfe70 & 0x1f) & 1) == 0) && (uVar73 = 3, 0x48 < uVar43 - 0xfe76))
        goto LAB_1425c5930;
        goto switchD_1425c503a_caseD_1e0a;
      }
      uVar73 = 3;
      if (uVar43 - 0xfe76 < 0x49) goto switchD_1425c503a_caseD_1e0a;
LAB_1425c5930:
      uVar73 = 0xd;
      if (((uVar43 - 0x5d0 < 0x1b) || (uVar43 == 0x2017)) || (uVar73 = 0xd, uVar43 == 0x203e))
      goto switchD_1425c503a_caseD_1e0a;
      uVar73 = 0xc;
      if ((uVar43 == 0x2116) || (uVar73 = 0xc, uVar43 - 0x401 < 0x5f))
      goto switchD_1425c503a_caseD_1e0a;
      uVar73 = 1;
      if (((uVar43 - 0x11e < 0x14) && ((0xc0003U >> (uVar43 - 0x11e & 0x1f) & 1) != 0)) ||
         (uVar36 = 0, uVar73 = 1, uVar74 == 0x218)) goto switchD_1425c503a_caseD_1e0a;
      goto LAB_1425c4cd8;
    }
    if ((0x26 < uVar43 - 0x152) ||
       ((0x4000000003U >> ((ulonglong)(uVar43 - 0x152) & 0x3f) & 1) == 0))
    goto switchD_1425c503a_caseD_1e0c;
LAB_1425c57d8:
    uVar73 = 0x13;
switchD_1425c503a_caseD_1e0a:
    uVar36 = 0;
    if (uVar63 != uVar73) {
      cVar33 = (&DAT_149c418e0)[(ulonglong)uVar73 * 5];
      uVar36 = 0;
      do {
        local_e7[uVar36] = cVar33;
        cVar33 = (&DAT_149c418e1)[uVar36 + (ulonglong)uVar73 * 5];
        uVar36 = uVar36 + 1;
      } while (cVar33 != '\0');
      uVar42 = (ulonglong)uVar73;
    }
    iVar30 = (int)uVar42;
    if (iVar30 == 0) {
      uVar37 = uVar36 & 0xffffffff;
      uVar36 = (ulonglong)((int)uVar36 + 1);
      local_e7[uVar37] = (char)uVar43;
    }
    else if (iVar30 == -1) {
      uVar63 = 0xffffffff;
LAB_1425c4cd8:
      iVar31 = (int)uVar36;
      local_10c = uVar63;
      iVar30 = FUN_142586e50(*(undefined8 *)(lVar4 + 8),uVar43,&local_ec,local_10d);
      uVar42 = 1;
      if (iVar30 < 1) {
        iVar30 = FUN_142586e50(*(undefined8 *)(lVar4 + 0x10),uVar43,&local_ec,local_10d);
        uVar42 = 2;
        if (iVar30 < 1) {
          iVar30 = FUN_142586e50(*(undefined8 *)(lVar4 + 0x18),uVar43,&local_ec,local_10d);
          uVar42 = 3;
          if (iVar30 < 1) {
            iVar30 = FUN_142586e50(*(undefined8 *)(lVar4 + 0x20),uVar43,&local_ec,local_10d);
            uVar42 = 4;
            if (iVar30 < 1) {
              iVar30 = FUN_142586e50(*(undefined8 *)(lVar4 + 0x28),uVar43,&local_ec,local_10d);
              uVar42 = 5;
              if (iVar30 < 1) {
                iVar30 = FUN_142586e50(*(undefined8 *)(lVar4 + 0x30),uVar43,&local_ec,local_10d);
                uVar42 = 6;
                if (iVar30 < 1) {
                  iVar30 = FUN_142586e50(*(undefined8 *)(lVar4 + 0x38),uVar43,&local_ec,local_10d);
                  uVar42 = 7;
                  if (iVar30 < 1) {
                    iVar30 = FUN_142586e50(*(undefined8 *)(lVar4 + 0x40),uVar43,&local_ec,local_10d)
                    ;
                    uVar42 = 8;
                    if (iVar30 < 1) {
                      iVar30 = FUN_142586e50(*(undefined8 *)(lVar4 + 0x48),uVar43,&local_ec,
                                             local_10d);
                      uVar42 = 9;
                      if (iVar30 < 1) {
                        iVar30 = FUN_142586e50(*(undefined8 *)(lVar4 + 0x50),uVar43,&local_ec,
                                               local_10d);
                        uVar42 = 10;
                        if (iVar30 < 1) {
                          iVar30 = FUN_142586e50(*(undefined8 *)(lVar4 + 0x58),uVar43,&local_ec,
                                                 local_10d);
                          uVar42 = 0xb;
                          if (iVar30 < 1) {
                            uVar42 = (ulonglong)local_10c;
                            goto LAB_1425c55a7;
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
      if (local_10c == (uint)uVar42) {
        uVar42 = (ulonglong)local_10c;
      }
      else {
        cVar33 = (&DAT_149c418e0)[uVar42 * 5];
        lVar34 = 0;
        do {
          local_e7[lVar34 + (uVar36 & 0xffffffff)] = cVar33;
          cVar33 = (&DAT_149c418e1)[lVar34 + uVar42 * 5];
          lVar34 = lVar34 + 1;
        } while (cVar33 != '\0');
        uVar36 = (uVar36 & 0xffffffff) + lVar34;
        iVar31 = (int)uVar36;
        if (iVar30 < 1) goto LAB_1425c55a7;
      }
      uVar37 = (ulonglong)iVar31;
      uVar43 = iVar30 + -1 + (uint)(iVar30 == 0);
      uVar36 = uVar37;
      if (0xe < uVar43) {
        uVar32 = (ulonglong)uVar43 + 1;
        uVar35 = uVar32 & 0xfffffffffffffff0;
        uVar36 = uVar35 + uVar37;
        iVar48 = iVar30 + -0xc;
        iVar49 = iVar30 + -0xd;
        iVar50 = iVar30 + -0xe;
        iVar51 = iVar30 + -0xf;
        iVar52 = iVar30 + -8;
        iVar53 = iVar30 + -9;
        iVar54 = iVar30 + -10;
        iVar55 = iVar30 + -0xb;
        iVar56 = iVar30 + -4;
        iVar57 = iVar30 + -5;
        iVar58 = iVar30 + -6;
        iVar59 = iVar30 + -7;
        iVar45 = iVar30 + -1;
        iVar46 = iVar30 + -2;
        iVar47 = iVar30 + -3;
        iVar31 = iVar30 - (int)uVar35;
        uVar38 = 0;
        do {
          auVar70._0_4_ = iVar30 * 8 + -8;
          auVar70._4_4_ = iVar45 * 8 + -8;
          auVar70._8_4_ = iVar46 * 8 + -8;
          auVar70._12_4_ = iVar47 * 8 + -8;
          auVar67._0_4_ = iVar56 * 8 + -8;
          auVar67._4_4_ = iVar57 * 8 + -8;
          auVar67._8_4_ = iVar58 * 8 + -8;
          auVar67._12_4_ = iVar59 * 8 + -8;
          auVar75._0_4_ = iVar52 * 8 + -8;
          auVar75._4_4_ = iVar53 * 8 + -8;
          auVar75._8_4_ = iVar54 * 8 + -8;
          auVar75._12_4_ = iVar55 * 8 + -8;
          auVar69._0_4_ = iVar48 * 8 + -8;
          auVar69._4_4_ = iVar49 * 8 + -8;
          auVar69._8_4_ = iVar50 * 8 + -8;
          auVar69._12_4_ = iVar51 * 8 + -8;
          auVar60 = pshuflw(unaff_XMM8,auVar69,0xfe);
          lVar34 = auVar60._0_8_;
          auVar79._0_4_ = local_ec >> lVar34;
          auVar79._4_4_ = local_ec >> lVar34;
          auVar79._8_4_ = local_ec >> lVar34;
          auVar79._12_4_ = local_ec >> lVar34;
          auVar60 = pshuflw(unaff_XMM14,auVar69,0x54);
          uVar43 = local_ec >> auVar60._0_8_;
          auVar64._4_4_ = auVar69._12_4_;
          auVar64._0_4_ = auVar69._8_4_;
          auVar64._8_4_ = auVar69._8_4_;
          auVar64._12_4_ = auVar69._12_4_;
          auVar60 = pshuflw(auVar79,auVar64,0xfe);
          lVar34 = auVar60._0_8_;
          auVar92._0_4_ = local_ec >> lVar34;
          auVar92._4_4_ = local_ec >> lVar34;
          auVar92._8_4_ = local_ec >> lVar34;
          auVar92._12_4_ = local_ec >> lVar34;
          auVar60 = pshuflw(auVar64,auVar64,0x54);
          uVar86 = local_ec >> auVar60._0_8_;
          auVar60 = pshuflw(auVar60,auVar75,0xfe);
          lVar34 = auVar60._0_8_;
          auVar80._0_4_ = local_ec >> lVar34;
          auVar80._4_4_ = local_ec >> lVar34;
          auVar80._8_4_ = local_ec >> lVar34;
          auVar80._12_4_ = local_ec >> lVar34;
          auVar60 = pshuflw(auVar92,auVar75,0x54);
          uVar63 = local_ec >> auVar60._0_8_;
          auVar76._4_4_ = auVar75._12_4_;
          auVar76._0_4_ = auVar75._8_4_;
          auVar76._8_4_ = auVar75._8_4_;
          auVar76._12_4_ = auVar75._12_4_;
          auVar60 = pshuflw(auVar80,auVar76,0xfe);
          lVar34 = auVar60._0_8_;
          auVar93._0_4_ = local_ec >> lVar34;
          auVar93._4_4_ = local_ec >> lVar34;
          auVar93._8_4_ = local_ec >> lVar34;
          auVar93._12_4_ = local_ec >> lVar34;
          auVar60 = pshuflw(auVar76,auVar76,0x54);
          uVar87 = local_ec >> auVar60._0_8_;
          auVar60 = pshuflw(auVar60,auVar67,0xfe);
          lVar34 = auVar60._0_8_;
          auVar81._0_4_ = local_ec >> lVar34;
          auVar81._4_4_ = local_ec >> lVar34;
          auVar81._8_4_ = local_ec >> lVar34;
          auVar81._12_4_ = local_ec >> lVar34;
          auVar60 = pshuflw(auVar93,auVar67,0x54);
          uVar74 = local_ec >> auVar60._0_8_;
          auVar68._4_4_ = auVar67._12_4_;
          auVar68._0_4_ = auVar67._8_4_;
          auVar68._8_4_ = auVar67._8_4_;
          auVar68._12_4_ = auVar67._12_4_;
          auVar60 = pshuflw(auVar81,auVar68,0xfe);
          uVar96 = local_ec >> auVar60._0_8_;
          auVar60 = pshuflw(auVar68,auVar68,0x54);
          uVar88 = local_ec >> auVar60._0_8_;
          auVar60 = pshuflw(auVar60,auVar70,0xfe);
          uVar85 = local_ec >> auVar60._0_8_;
          auVar69 = pshuflw(auVar60,auVar70,0x54);
          uVar90 = local_ec >> auVar69._0_8_;
          auVar60._4_4_ = auVar70._12_4_;
          auVar60._0_4_ = auVar70._8_4_;
          auVar60._8_4_ = auVar70._8_4_;
          auVar60._12_4_ = auVar70._12_4_;
          auVar70 = pshuflw(auVar69,auVar60,0xfe);
          uVar89 = local_ec >> auVar70._0_8_;
          auVar60 = pshuflw(auVar60,auVar60,0x54);
          uVar73 = local_ec >> auVar60._0_8_;
          uVar2 = (ushort)uVar90 & 0xff;
          uVar5 = (ushort)uVar85 & 0xff;
          uVar6 = (ushort)uVar73 & 0xff;
          uVar7 = (ushort)uVar89 & 0xff;
          uVar8 = (ushort)uVar74 & 0xff;
          uVar9 = (ushort)auVar81._4_4_ & 0xff;
          uVar10 = (ushort)uVar88 & 0xff;
          uVar11 = (ushort)uVar96 & 0xff;
          bVar12 = ((uVar90 & 0xff) != 0) * (uVar2 < 0x100) * (char)uVar90 - (0xff < uVar2);
          bVar13 = ((uVar85 & 0xff) != 0) * (uVar5 < 0x100) * (char)uVar85 - (0xff < uVar5);
          bVar14 = ((uVar73 & 0xff) != 0) * (uVar6 < 0x100) * (char)uVar73 - (0xff < uVar6);
          bVar15 = ((uVar89 & 0xff) != 0) * (uVar7 < 0x100) * (char)uVar89 - (0xff < uVar7);
          bVar16 = ((uVar74 & 0xff) != 0) * (uVar8 < 0x100) * (char)uVar74 - (0xff < uVar8);
          bVar17 = ((auVar81._4_4_ & 0xff) != 0) * (uVar9 < 0x100) * (char)auVar81._4_4_ -
                   (0xff < uVar9);
          bVar18 = ((uVar88 & 0xff) != 0) * (uVar10 < 0x100) * (char)uVar88 - (0xff < uVar10);
          bVar19 = ((uVar96 & 0xff) != 0) * (uVar11 < 0x100) * (char)uVar96 - (0xff < uVar11);
          uVar2 = (ushort)uVar63 & 0xff;
          uVar5 = (ushort)auVar80._4_4_ & 0xff;
          uVar6 = (ushort)uVar87 & 0xff;
          uVar7 = (ushort)auVar93._12_4_ & 0xff;
          uVar8 = (ushort)uVar43 & 0xff;
          uVar9 = (ushort)auVar79._4_4_ & 0xff;
          uVar29 = CONCAT44(auVar79._4_4_,uVar43);
          unaff_XMM8._0_8_ = uVar29 & 0xff000000ff;
          unaff_XMM8._8_4_ = uVar86 & 0xff;
          unaff_XMM8._12_4_ = auVar92._12_4_ & 0xff;
          bVar20 = ((uVar63 & 0xff) != 0) * (uVar2 < 0x100) * (char)uVar63 - (0xff < uVar2);
          bVar21 = ((auVar80._4_4_ & 0xff) != 0) * (uVar5 < 0x100) * (char)auVar80._4_4_ -
                   (0xff < uVar5);
          bVar22 = ((uVar87 & 0xff) != 0) * (uVar6 < 0x100) * (char)uVar87 - (0xff < uVar6);
          bVar23 = ((auVar93._12_4_ & 0xff) != 0) * (uVar7 < 0x100) * (char)auVar93._12_4_ -
                   (0xff < uVar7);
          bVar24 = ((uVar43 & 0xff) != 0) * (uVar8 < 0x100) * (char)uVar43 - (0xff < uVar8);
          bVar25 = ((auVar79._4_4_ & 0xff) != 0) * (uVar9 < 0x100) * (char)auVar79._4_4_ -
                   (0xff < uVar9);
          uVar2 = (ushort)unaff_XMM8._8_4_;
          bVar26 = (uVar2 != 0) * (uVar2 < 0x100) * (char)uVar86 - (0xff < uVar2);
          uVar2 = (ushort)unaff_XMM8._12_4_;
          bVar27 = (uVar2 != 0) * (uVar2 < 0x100) * (char)auVar92._12_4_ - (0xff < uVar2);
          unaff_XMM14[1] = (bVar13 != 0) * (bVar13 < 0x100) * bVar13 - (0xff < bVar13);
          unaff_XMM14[0] = (bVar12 != 0) * (bVar12 < 0x100) * bVar12 - (0xff < bVar12);
          unaff_XMM14[2] = (bVar14 != 0) * (bVar14 < 0x100) * bVar14 - (0xff < bVar14);
          unaff_XMM14[3] = (bVar15 != 0) * (bVar15 < 0x100) * bVar15 - (0xff < bVar15);
          unaff_XMM14[4] = (bVar16 != 0) * (bVar16 < 0x100) * bVar16 - (0xff < bVar16);
          unaff_XMM14[5] = (bVar17 != 0) * (bVar17 < 0x100) * bVar17 - (0xff < bVar17);
          unaff_XMM14[6] = (bVar18 != 0) * (bVar18 < 0x100) * bVar18 - (0xff < bVar18);
          unaff_XMM14[7] = (bVar19 != 0) * (bVar19 < 0x100) * bVar19 - (0xff < bVar19);
          unaff_XMM14[8] = (bVar20 != 0) * (bVar20 < 0x100) * bVar20 - (0xff < bVar20);
          unaff_XMM14[9] = (bVar21 != 0) * (bVar21 < 0x100) * bVar21 - (0xff < bVar21);
          unaff_XMM14[10] = (bVar22 != 0) * (bVar22 < 0x100) * bVar22 - (0xff < bVar22);
          unaff_XMM14[0xb] = (bVar23 != 0) * (bVar23 < 0x100) * bVar23 - (0xff < bVar23);
          unaff_XMM14[0xc] = (bVar24 != 0) * (bVar24 < 0x100) * bVar24 - (0xff < bVar24);
          unaff_XMM14[0xd] = (bVar25 != 0) * (bVar25 < 0x100) * bVar25 - (0xff < bVar25);
          unaff_XMM14[0xe] = (bVar26 != 0) * (bVar26 < 0x100) * bVar26 - (0xff < bVar26);
          unaff_XMM14[0xf] = (bVar27 != 0) * (bVar27 < 0x100) * bVar27 - (0xff < bVar27);
          *(undefined1 (*) [16])(local_e7 + uVar38 + uVar37) = unaff_XMM14;
          uVar38 = uVar38 + 0x10;
          iVar30 = iVar30 + -0x10;
          iVar45 = iVar45 + -0x10;
          iVar46 = iVar46 + -0x10;
          iVar47 = iVar47 + -0x10;
          iVar56 = iVar56 + -0x10;
          iVar57 = iVar57 + -0x10;
          iVar58 = iVar58 + -0x10;
          iVar59 = iVar59 + -0x10;
          iVar52 = iVar52 + -0x10;
          iVar53 = iVar53 + -0x10;
          iVar54 = iVar54 + -0x10;
          iVar55 = iVar55 + -0x10;
          iVar48 = iVar48 + -0x10;
          iVar49 = iVar49 + -0x10;
          iVar50 = iVar50 + -0x10;
          iVar51 = iVar51 + -0x10;
        } while (uVar35 != uVar38);
        iVar30 = iVar31;
        if (uVar32 == uVar35) goto LAB_1425c55a7;
      }
      uVar43 = iVar30 + 1;
      iVar30 = iVar30 * 8;
      do {
        iVar30 = iVar30 + -8;
        local_e7[uVar36] = (char)(local_ec >> ((byte)iVar30 & 0x1f));
        uVar36 = uVar36 + 1;
        uVar43 = uVar43 - 1;
      } while (1 < uVar43);
    }
    else {
      uVar37 = FUN_142586e50(*(undefined8 *)(lVar4 + (longlong)iVar30 * 8),uVar43,&local_ec,
                             local_10d);
      uVar43 = (uint)uVar37;
      if (0 < (int)uVar43) {
        uVar32 = uVar36 & 0xffffffff;
        uVar36 = uVar32;
        if (0xf < uVar43) {
          uVar35 = (ulonglong)(uVar43 & 0xfffffff0);
          uVar36 = uVar35 + uVar32;
          iVar46 = uVar43 - 0xc;
          iVar47 = uVar43 - 0xd;
          iVar48 = uVar43 - 0xe;
          iVar49 = uVar43 - 0xf;
          iVar50 = uVar43 - 8;
          iVar51 = uVar43 - 9;
          iVar52 = uVar43 - 10;
          iVar53 = uVar43 - 0xb;
          iVar54 = uVar43 - 4;
          iVar55 = uVar43 - 5;
          iVar56 = uVar43 - 6;
          iVar57 = uVar43 - 7;
          iVar30 = uVar43 - 1;
          iVar31 = uVar43 - 2;
          iVar45 = uVar43 - 3;
          uVar63 = uVar43 - (uVar43 & 0xfffffff0);
          uVar38 = 0;
          do {
            auVar61._0_4_ = uVar43 * 8 + -8;
            auVar61._4_4_ = iVar30 * 8 + -8;
            auVar61._8_4_ = iVar31 * 8 + -8;
            auVar61._12_4_ = iVar45 * 8 + -8;
            auVar71._0_4_ = iVar54 * 8 + -8;
            auVar71._4_4_ = iVar55 * 8 + -8;
            auVar71._8_4_ = iVar56 * 8 + -8;
            auVar71._12_4_ = iVar57 * 8 + -8;
            auVar77._0_4_ = iVar50 * 8 + -8;
            auVar77._4_4_ = iVar51 * 8 + -8;
            auVar77._8_4_ = iVar52 * 8 + -8;
            auVar77._12_4_ = iVar53 * 8 + -8;
            auVar65._0_4_ = iVar46 * 8 + -8;
            auVar65._4_4_ = iVar47 * 8 + -8;
            auVar65._8_4_ = iVar48 * 8 + -8;
            auVar65._12_4_ = iVar49 * 8 + -8;
            auVar60 = pshuflw(unaff_XMM8,auVar65,0xfe);
            lVar34 = auVar60._0_8_;
            auVar82._0_4_ = local_ec >> lVar34;
            auVar82._4_4_ = local_ec >> lVar34;
            auVar82._8_4_ = local_ec >> lVar34;
            auVar82._12_4_ = local_ec >> lVar34;
            auVar60 = pshuflw(unaff_XMM14,auVar65,0x54);
            uVar73 = local_ec >> auVar60._0_8_;
            auVar66._4_4_ = auVar65._12_4_;
            auVar66._0_4_ = auVar65._8_4_;
            auVar66._8_4_ = auVar65._8_4_;
            auVar66._12_4_ = auVar65._12_4_;
            auVar60 = pshuflw(auVar82,auVar66,0xfe);
            lVar34 = auVar60._0_8_;
            auVar94._0_4_ = local_ec >> lVar34;
            auVar94._4_4_ = local_ec >> lVar34;
            auVar94._8_4_ = local_ec >> lVar34;
            auVar94._12_4_ = local_ec >> lVar34;
            auVar60 = pshuflw(auVar66,auVar66,0x54);
            uVar88 = local_ec >> auVar60._0_8_;
            auVar60 = pshuflw(auVar60,auVar77,0xfe);
            lVar34 = auVar60._0_8_;
            auVar83._0_4_ = local_ec >> lVar34;
            auVar83._4_4_ = local_ec >> lVar34;
            auVar83._8_4_ = local_ec >> lVar34;
            auVar83._12_4_ = local_ec >> lVar34;
            auVar60 = pshuflw(auVar94,auVar77,0x54);
            uVar74 = local_ec >> auVar60._0_8_;
            auVar78._4_4_ = auVar77._12_4_;
            auVar78._0_4_ = auVar77._8_4_;
            auVar78._8_4_ = auVar77._8_4_;
            auVar78._12_4_ = auVar77._12_4_;
            auVar60 = pshuflw(auVar83,auVar78,0xfe);
            lVar34 = auVar60._0_8_;
            auVar95._0_4_ = local_ec >> lVar34;
            auVar95._4_4_ = local_ec >> lVar34;
            auVar95._8_4_ = local_ec >> lVar34;
            auVar95._12_4_ = local_ec >> lVar34;
            auVar60 = pshuflw(auVar78,auVar78,0x54);
            uVar89 = local_ec >> auVar60._0_8_;
            auVar60 = pshuflw(auVar60,auVar71,0xfe);
            lVar34 = auVar60._0_8_;
            auVar84._0_4_ = local_ec >> lVar34;
            auVar84._4_4_ = local_ec >> lVar34;
            auVar84._8_4_ = local_ec >> lVar34;
            auVar84._12_4_ = local_ec >> lVar34;
            auVar60 = pshuflw(auVar95,auVar71,0x54);
            uVar86 = local_ec >> auVar60._0_8_;
            auVar72._4_4_ = auVar71._12_4_;
            auVar72._0_4_ = auVar71._8_4_;
            auVar72._8_4_ = auVar71._8_4_;
            auVar72._12_4_ = auVar71._12_4_;
            auVar60 = pshuflw(auVar84,auVar72,0xfe);
            uVar97 = local_ec >> auVar60._0_8_;
            auVar60 = pshuflw(auVar72,auVar72,0x54);
            uVar90 = local_ec >> auVar60._0_8_;
            auVar60 = pshuflw(auVar60,auVar61,0xfe);
            uVar87 = local_ec >> auVar60._0_8_;
            auVar60 = pshuflw(auVar60,auVar61,0x54);
            uVar91 = local_ec >> auVar60._0_8_;
            auVar62._4_4_ = auVar61._12_4_;
            auVar62._0_4_ = auVar61._8_4_;
            auVar62._8_4_ = auVar61._8_4_;
            auVar62._12_4_ = auVar61._12_4_;
            auVar60 = pshuflw(auVar60,auVar62,0xfe);
            uVar96 = local_ec >> auVar60._0_8_;
            auVar60 = pshuflw(auVar62,auVar62,0x54);
            uVar85 = local_ec >> auVar60._0_8_;
            uVar2 = (ushort)uVar91 & 0xff;
            uVar5 = (ushort)uVar87 & 0xff;
            uVar6 = (ushort)uVar85 & 0xff;
            uVar7 = (ushort)uVar96 & 0xff;
            uVar8 = (ushort)uVar86 & 0xff;
            uVar9 = (ushort)auVar84._4_4_ & 0xff;
            uVar10 = (ushort)uVar90 & 0xff;
            uVar11 = (ushort)uVar97 & 0xff;
            bVar13 = ((uVar91 & 0xff) != 0) * (uVar2 < 0x100) * (char)uVar91 - (0xff < uVar2);
            bVar12 = ((uVar87 & 0xff) != 0) * (uVar5 < 0x100) * (char)uVar87 - (0xff < uVar5);
            bVar19 = ((uVar85 & 0xff) != 0) * (uVar6 < 0x100) * (char)uVar85 - (0xff < uVar6);
            bVar18 = ((uVar96 & 0xff) != 0) * (uVar7 < 0x100) * (char)uVar96 - (0xff < uVar7);
            bVar17 = ((uVar86 & 0xff) != 0) * (uVar8 < 0x100) * (char)uVar86 - (0xff < uVar8);
            bVar16 = ((auVar84._4_4_ & 0xff) != 0) * (uVar9 < 0x100) * (char)auVar84._4_4_ -
                     (0xff < uVar9);
            bVar15 = ((uVar90 & 0xff) != 0) * (uVar10 < 0x100) * (char)uVar90 - (0xff < uVar10);
            bVar14 = ((uVar97 & 0xff) != 0) * (uVar11 < 0x100) * (char)uVar97 - (0xff < uVar11);
            uVar2 = (ushort)uVar74 & 0xff;
            uVar5 = (ushort)auVar83._4_4_ & 0xff;
            uVar6 = (ushort)uVar89 & 0xff;
            uVar7 = (ushort)auVar95._12_4_ & 0xff;
            uVar8 = (ushort)uVar73 & 0xff;
            uVar9 = (ushort)auVar82._4_4_ & 0xff;
            uVar29 = CONCAT44(auVar82._4_4_,uVar73);
            unaff_XMM8._0_8_ = uVar29 & 0xff000000ff;
            unaff_XMM8._8_4_ = uVar88 & 0xff;
            unaff_XMM8._12_4_ = auVar94._12_4_ & 0xff;
            bVar22 = ((uVar74 & 0xff) != 0) * (uVar2 < 0x100) * (char)uVar74 - (0xff < uVar2);
            bVar27 = ((auVar83._4_4_ & 0xff) != 0) * (uVar5 < 0x100) * (char)auVar83._4_4_ -
                     (0xff < uVar5);
            bVar26 = ((uVar89 & 0xff) != 0) * (uVar6 < 0x100) * (char)uVar89 - (0xff < uVar6);
            bVar25 = ((auVar95._12_4_ & 0xff) != 0) * (uVar7 < 0x100) * (char)auVar95._12_4_ -
                     (0xff < uVar7);
            bVar24 = ((uVar73 & 0xff) != 0) * (uVar8 < 0x100) * (char)uVar73 - (0xff < uVar8);
            bVar23 = ((auVar82._4_4_ & 0xff) != 0) * (uVar9 < 0x100) * (char)auVar82._4_4_ -
                     (0xff < uVar9);
            uVar2 = (ushort)unaff_XMM8._8_4_;
            bVar21 = (uVar2 != 0) * (uVar2 < 0x100) * (char)uVar88 - (0xff < uVar2);
            uVar2 = (ushort)unaff_XMM8._12_4_;
            bVar20 = (uVar2 != 0) * (uVar2 < 0x100) * (char)auVar94._12_4_ - (0xff < uVar2);
            unaff_XMM14[1] = (bVar12 != 0) * (bVar12 < 0x100) * bVar12 - (0xff < bVar12);
            unaff_XMM14[0] = (bVar13 != 0) * (bVar13 < 0x100) * bVar13 - (0xff < bVar13);
            unaff_XMM14[2] = (bVar19 != 0) * (bVar19 < 0x100) * bVar19 - (0xff < bVar19);
            unaff_XMM14[3] = (bVar18 != 0) * (bVar18 < 0x100) * bVar18 - (0xff < bVar18);
            unaff_XMM14[4] = (bVar17 != 0) * (bVar17 < 0x100) * bVar17 - (0xff < bVar17);
            unaff_XMM14[5] = (bVar16 != 0) * (bVar16 < 0x100) * bVar16 - (0xff < bVar16);
            unaff_XMM14[6] = (bVar15 != 0) * (bVar15 < 0x100) * bVar15 - (0xff < bVar15);
            unaff_XMM14[7] = (bVar14 != 0) * (bVar14 < 0x100) * bVar14 - (0xff < bVar14);
            unaff_XMM14[8] = (bVar22 != 0) * (bVar22 < 0x100) * bVar22 - (0xff < bVar22);
            unaff_XMM14[9] = (bVar27 != 0) * (bVar27 < 0x100) * bVar27 - (0xff < bVar27);
            unaff_XMM14[10] = (bVar26 != 0) * (bVar26 < 0x100) * bVar26 - (0xff < bVar26);
            unaff_XMM14[0xb] = (bVar25 != 0) * (bVar25 < 0x100) * bVar25 - (0xff < bVar25);
            unaff_XMM14[0xc] = (bVar24 != 0) * (bVar24 < 0x100) * bVar24 - (0xff < bVar24);
            unaff_XMM14[0xd] = (bVar23 != 0) * (bVar23 < 0x100) * bVar23 - (0xff < bVar23);
            unaff_XMM14[0xe] = (bVar21 != 0) * (bVar21 < 0x100) * bVar21 - (0xff < bVar21);
            unaff_XMM14[0xf] = (bVar20 != 0) * (bVar20 < 0x100) * bVar20 - (0xff < bVar20);
            *(undefined1 (*) [16])(local_e7 + uVar38 + uVar32) = unaff_XMM14;
            uVar38 = uVar38 + 0x10;
            uVar43 = uVar43 - 0x10;
            iVar30 = iVar30 + -0x10;
            iVar31 = iVar31 + -0x10;
            iVar45 = iVar45 + -0x10;
            iVar54 = iVar54 + -0x10;
            iVar55 = iVar55 + -0x10;
            iVar56 = iVar56 + -0x10;
            iVar57 = iVar57 + -0x10;
            iVar50 = iVar50 + -0x10;
            iVar51 = iVar51 + -0x10;
            iVar52 = iVar52 + -0x10;
            iVar53 = iVar53 + -0x10;
            iVar46 = iVar46 + -0x10;
            iVar47 = iVar47 + -0x10;
            iVar48 = iVar48 + -0x10;
            iVar49 = iVar49 + -0x10;
          } while (uVar35 != uVar38);
          uVar43 = uVar63;
          if (uVar35 == (uVar37 & 0xffffffff)) goto LAB_1425c55a7;
        }
        uVar63 = uVar43 + 1;
        iVar30 = uVar43 * 8;
        do {
          iVar30 = iVar30 + -8;
          local_e7[uVar36] = (char)(local_ec >> ((byte)iVar30 & 0x1f));
          uVar36 = uVar36 + 1;
          uVar63 = uVar63 - 1;
        } while (1 < uVar63);
      }
    }
LAB_1425c55a7:
    uVar37 = 0;
    iVar30 = (int)uVar36;
    uVar32 = uVar36 & 0xffffffff;
    pcVar40 = pcVar39;
    if (0 < iVar30) {
      uVar37 = 0;
      uVar35 = (longlong)pcVar3 - (longlong)pcVar39;
      if (pcVar3 < pcVar39) {
        uVar35 = uVar37;
      }
      if (uVar32 - 1 <= uVar35) {
        uVar35 = uVar32 - 1;
      }
      uVar35 = uVar35 + 1;
      if ((0x10 < uVar35) && (0xf < (ulonglong)((longlong)pcVar39 - (longlong)local_e7))) {
        uVar37 = 0x10;
        if ((uVar35 & 0xf) != 0) {
          uVar37 = (ulonglong)((uint)uVar35 & 0xf);
        }
        uVar37 = uVar35 - uVar37;
        pcVar40 = pcVar39 + uVar37;
        uVar35 = 0;
        do {
          uVar28 = *(undefined8 *)(local_e0 + uVar35 + 1);
          *(undefined8 *)(pcVar39 + uVar35) = *(undefined8 *)(local_e7 + uVar35);
          *(undefined8 *)(pcVar39 + uVar35 + 8) = uVar28;
          uVar35 = uVar35 + 0x10;
        } while (uVar37 != uVar35);
      }
      do {
        if (pcVar3 <= pcVar40) {
          *local_108 = 0xf;
          goto LAB_1425c5665;
        }
        *pcVar40 = local_e7[uVar37];
        pcVar40 = pcVar40 + 1;
        uVar37 = uVar37 + 1;
      } while (uVar32 != uVar37);
      uVar37 = uVar36 & 0xffffffff;
    }
    if (*local_108 == 0xf) {
LAB_1425c5665:
      if ((int)uVar37 < iVar30) {
        uVar35 = uVar37 & 0xffffffff;
        uVar36 = ~uVar35;
        if ((iVar30 - (int)uVar37 & 1U) != 0) {
          cVar33 = local_e7[uVar35];
          lVar34 = *(longlong *)(param_1 + 8);
          cVar1 = *(char *)(lVar34 + 0x5b);
          *(char *)(lVar34 + 0x5b) = cVar1 + '\x01';
          *(char *)(lVar34 + 0x68 + (longlong)cVar1) = cVar33;
          uVar35 = uVar35 + 1;
        }
        if (uVar36 + uVar32 != 0) {
          do {
            cVar33 = local_e7[uVar35];
            lVar34 = *(longlong *)(param_1 + 8);
            cVar1 = *(char *)(lVar34 + 0x5b);
            *(char *)(lVar34 + 0x5b) = cVar1 + '\x01';
            *(char *)(lVar34 + 0x68 + (longlong)cVar1) = cVar33;
            cVar33 = local_e7[uVar35 + 1];
            lVar34 = *(longlong *)(param_1 + 8);
            cVar1 = *(char *)(lVar34 + 0x5b);
            *(char *)(lVar34 + 0x5b) = cVar1 + '\x01';
            *(char *)(lVar34 + 0x68 + (longlong)cVar1) = cVar33;
            uVar35 = uVar35 + 2;
          } while (uVar32 != uVar35);
        }
      }
    }
  } while( true );
}



// FUNCTION 1425c59d0 FUN_1425c59d0 body=444 status=ok
// SIG undefined FUN_1425c59d0(void)

void FUN_1425c59d0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 8));
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x10),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x18),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x20),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x28),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x30),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x38),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x40),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x48),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x50),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x58),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x60),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x68),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x70),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x78),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x80),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x88),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x90),param_2,param_3,param_4);
  FUN_1425833f0(*(undefined8 *)(lVar1 + 0x98),param_2,param_3,param_4);
  (*(code *)param_2[1])(*param_2,0);
  (*(code *)param_2[1])(*param_2,9);
  (*(code *)param_2[1])(*param_2,10);
  (*(code *)param_2[2])(*param_2,0x20,0x7f);
                    /* WARNING: Could not recover jumptable at 0x0001425c5b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[2])(*param_2,0xa0,0xff);
  return;
}



// FUNCTION 1425c5b90 FUN_1425c5b90 body=117 status=ok
// SIG undefined FUN_1425c5b90(void)

undefined8 * FUN_1425c5b90(undefined8 *param_1)

{
  *param_1 = icu_64::UnicodeSet::vftable;
  param_1[1] = icu_64::UnicodeSet::vftable;
  param_1[2] = param_1 + 0xc;
  param_1[3] = 0x100000019;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1425c5c30();
  return param_1;
}



// FUNCTION 1425c5c10 Unwind@1425c5c10 body=30 status=ok
// SIG undefined Unwind@1425c5c10(void)

void Unwind_1425c5c10(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425c5c30 FUN_1425c5c30 body=153 status=ok
// SIG undefined FUN_1425c5c30(void)

undefined8 FUN_1425c5c30(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined **local_40;
  undefined8 local_38;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  local_40 = icu_64::ParsePosition::vftable;
  local_38 = 0xffffffff00000000;
  FUN_1425c5d00(param_1,param_2,&local_40,0,param_3);
  if (*param_3 < 1) {
    local_2c[0] = (int)local_38;
    FUN_1425cc780(param_2,local_2c,1);
    if (*(short *)(param_2 + 8) < 0) {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar1 = (int)*(short *)(param_2 + 8) >> 5;
    }
    if (local_2c[0] != iVar1) {
      *param_3 = 1;
    }
  }
  thunk_FUN_1424b70d0(&local_40);
  return param_1;
}



// FUNCTION 1425c5cd0 Unwind@1425c5cd0 body=36 status=ok
// SIG undefined Unwind@1425c5cd0(void)

void Unwind_1425c5cd0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1425c5d00 FUN_1425c5d00 body=217 status=ok
// SIG undefined FUN_1425c5d00(void)

void FUN_1425c5d00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  undefined1 local_a0 [24];
  longlong local_88;
  undefined **local_78;
  undefined2 local_70;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    if (*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) {
      local_78 = &PTR_FUN_149e18960;
      local_70 = 2;
      FUN_1426a5c90(local_a0,param_2,param_4,param_3);
      local_38 = 0;
      local_30 = 0;
      FUN_1425c5e10(param_1,local_a0,param_4,&local_78,1,&local_38,0,param_5);
      if (*param_5 < 1) {
        if (local_88 == 0) {
          FUN_1425c6a20(param_1,&local_78);
        }
        else {
          *param_5 = 0x10002;
        }
      }
      FUN_140859a90(&local_78);
    }
    else {
      *param_5 = 0x1e;
    }
  }
  return;
}



// FUNCTION 1425c5de0 Unwind@1425c5de0 body=39 status=ok
// SIG undefined Unwind@1425c5de0(void)

void Unwind_1425c5de0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1425c5e10 FUN_1425c5e10 body=2870 status=ok
// SIG undefined FUN_1425c5e10(void)

void FUN_1425c5e10(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  uint param_5,undefined8 *param_6,int param_7,int *param_8)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  undefined **local_148;
  short local_140;
  int local_13c;
  code *local_108;
  int local_100;
  undefined *local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined **local_d0;
  short local_c8;
  int local_c4;
  longlong local_90;
  longlong local_88;
  code *local_80;
  undefined8 local_78;
  longlong *local_70;
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  int local_50;
  short local_4c;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_8) {
    return;
  }
  local_68 = param_7;
  if (100 < param_7) {
    *param_8 = 1;
    return;
  }
  local_80 = (code *)*param_6;
  local_64 = *(int *)(param_6 + 1);
  local_d0 = &PTR_FUN_149e18960;
  local_c8 = 2;
  local_148 = &PTR_FUN_149e18960;
  local_140 = 2;
  local_90 = 0;
  local_78 = param_4;
  local_70 = param_3;
  local_60 = param_1;
  FUN_142513500();
  iVar4 = (param_5 & 1) * 4 + 3;
  local_68 = local_68 + 1;
  local_58 = 0;
  local_88 = 0;
  cVar8 = '\0';
  local_50 = 0;
  sVar7 = 0;
  local_e8 = 0;
  cVar2 = '\0';
  bVar9 = false;
LAB_1425c5f10:
  if (cVar8 == '\x02') {
LAB_1425c67f8:
    FUN_1426a6190(param_2,iVar4);
    if ((param_5 & 2) == 0) {
      if ((param_5 & 4) != 0) {
        (*local_80)(local_64 + local_60,4);
      }
    }
    else {
      (*local_80)(local_64 + local_60,2);
    }
    if ((char)local_e8 != '\0') {
      FUN_1425146a0(local_60);
    }
    if (bVar9) {
      if (-1 < local_c8) {
        local_c4 = (int)local_c8 >> 5;
      }
      FUN_1424a9690(local_78,&local_d0,0,local_c4);
    }
    else {
      FUN_142514e70(local_60,local_78,0);
    }
    lVar6 = local_58;
    if (((*(byte *)(local_60 + 0x20) & 1) != 0) && (*param_8 < 1)) {
      *param_8 = 7;
    }
joined_r0x0001425c694c:
    if (lVar6 != 0) {
      FUN_1425121d0(lVar6);
      FUN_1401773f0(lVar6);
    }
    FUN_140859a90(&local_148);
    FUN_140859a90(&local_d0);
    return;
  }
  cVar1 = FUN_1426a5cb0(param_2);
  if (cVar1 != '\0') {
LAB_1425c67d4:
    *param_8 = 0x10002;
    lVar6 = local_58;
    goto joined_r0x0001425c694c;
  }
  local_49 = '\0';
  cVar1 = FUN_1425c6a60(param_2,iVar4);
  if (cVar1 == '\0') {
    FUN_1426a6150(param_2,local_e0);
    iVar3 = FUN_1426a5ce0(param_2,iVar4,&local_49,param_8);
    lVar6 = local_58;
    if (0 < *param_8) goto joined_r0x0001425c694c;
    if ((iVar3 == 0x5b) && (local_49 == '\0')) {
      if (cVar8 == '\x01') {
        FUN_1426a6170(param_2,local_e0);
        cVar1 = '\x01';
        goto LAB_1425c5f43;
      }
      local_4c = 0x5b;
      FUN_1424a6cf0(&local_d0,&local_4c,0,1);
      FUN_1426a6150(param_2,local_e0);
      iVar3 = FUN_1426a5ce0(param_2,iVar4,&local_49,param_8);
      lVar6 = local_58;
      if (0 < *param_8) goto joined_r0x0001425c694c;
      if ((iVar3 == 0x5e) && (local_49 == '\0')) {
        local_4c = 0x5e;
        FUN_1424a6cf0(&local_d0,&local_4c,0,1);
        FUN_1426a6150(param_2,local_e0);
        iVar3 = FUN_1426a5ce0(param_2,iVar4,&local_49,param_8);
        lVar6 = local_58;
        if (0 < *param_8) goto joined_r0x0001425c694c;
        local_e8 = CONCAT71((int7)((ulonglong)param_8 >> 8),1);
      }
      if (iVar3 == 0x2d) {
        local_49 = '\x01';
        iVar3 = 0x2d;
        cVar8 = '\x01';
        goto LAB_1425c63c3;
      }
      cVar8 = '\x01';
      FUN_1426a6170(param_2,local_e0);
      goto LAB_1425c5f10;
    }
    if ((local_70 != (longlong *)0x0) &&
       (lVar6 = (**(code **)(*local_70 + 0x10))(local_70,iVar3), lVar6 != 0)) {
      lVar5 = __RTDynamicCast(lVar6,0,&icu_64::UnicodeFunctor::RTTI_Type_Descriptor,
                              &icu_64::UnicodeSet::RTTI_Type_Descriptor,0);
      if (lVar5 != 0) {
        cVar1 = '\x03';
        goto joined_r0x0001425c5f49;
      }
      goto LAB_1425c690c;
    }
    if (cVar8 == '\0') goto LAB_1425c6928;
    if (local_49 == '\0') {
      if (iVar3 < 0x5d) {
        if (iVar3 == 0x24) {
          FUN_1426a6150(param_2,local_e0);
          iVar3 = FUN_1426a5ce0(param_2,iVar4,&local_49,param_8);
          lVar6 = local_58;
          if (0 < *param_8) goto joined_r0x0001425c694c;
          if ((local_70 == (longlong *)0x0) && (local_49 != '\0' || iVar3 != 0x5d)) {
            iVar3 = 0x24;
            FUN_1426a6170(param_2,local_e0);
            goto LAB_1425c63c3;
          }
          if ((local_49 != '\0' || iVar3 != 0x5d) || sVar7 != 0) goto LAB_1425c67d4;
          if (cVar2 == '\x01') {
            FUN_142511a00(local_60,local_50,local_50);
            FUN_142514c30(&local_d0,local_50,0);
          }
          FUN_142513960(local_60,0xffff);
          local_4c = 0x24;
          FUN_1424a6cf0(&local_d0,&local_4c,0,1);
          local_4c = 0x5d;
          FUN_1424a6cf0(&local_d0,&local_4c,0,1);
          bVar9 = true;
          cVar8 = '\x02';
          sVar7 = 0;
          goto LAB_1425c5f10;
        }
        if (iVar3 == 0x26) {
          if ((cVar2 == '\x02') && (sVar7 == 0)) {
            cVar2 = '\x02';
            sVar7 = 0x26;
            goto LAB_1425c5f10;
          }
        }
        else {
          if (iVar3 != 0x2d) goto LAB_1425c63c3;
          if (sVar7 == 0) {
            sVar7 = 0x2d;
            if (cVar2 != '\0') goto LAB_1425c5f10;
            FUN_142511a00(local_60,0x2d,0x2d);
            iVar3 = FUN_1426a5ce0(param_2,iVar4,&local_49,param_8);
            lVar6 = local_58;
            if (0 < *param_8) goto joined_r0x0001425c694c;
            if ((iVar3 == 0x5d) && (local_49 == '\0')) {
              FUN_1424a6cf0(&local_d0,&DAT_149c41d24,0,2);
              local_f0 = &DAT_149c41d24;
              cVar8 = '\x02';
              goto LAB_1425c67ca;
            }
          }
        }
      }
      else {
        if (iVar3 == 0x5d) {
          if (cVar2 == '\x01') {
            FUN_142511a00(local_60,local_50,local_50);
            FUN_142514c30(&local_d0,local_50,0);
          }
          if (sVar7 == 0x2d) {
            FUN_142511a00(local_60,0x2d,0x2d);
            local_4c = 0x2d;
            FUN_1424a6cf0(&local_d0,&local_4c,0,1);
          }
          else if (sVar7 == 0x26) goto LAB_1425c6928;
          local_4c = 0x5d;
          FUN_1424a6cf0(&local_d0,&local_4c,0,1);
          cVar8 = '\x02';
          goto LAB_1425c5f10;
        }
        if (iVar3 == 0x7b) {
          if (sVar7 == 0) {
            if (cVar2 == '\x01') {
              FUN_142511a00(local_60,local_50,local_50);
              FUN_142514c30(&local_d0,local_50,0);
            }
            FUN_1425c6c80(&local_148,0);
            while (cVar2 = FUN_1426a5cb0(param_2), cVar2 == '\0') {
              iVar3 = FUN_1426a5ce0(param_2,iVar4,&local_49,param_8);
              lVar6 = local_58;
              if (0 < *param_8) goto joined_r0x0001425c694c;
              if ((iVar3 == 0x7d) && (local_49 == '\0')) break;
              FUN_1424a7d60(&local_148,iVar3);
            }
            iVar3 = local_13c;
            if (-1 < local_140) {
              iVar3 = (int)local_140 >> 5;
            }
            if ((cVar2 == '\0') && (0 < iVar3)) {
              FUN_142513b40(local_60,&local_148);
              local_4c = 0x7b;
              FUN_1424a6cf0(&local_d0,&local_4c,0,1);
              FUN_142514bb0(&local_d0,&local_148,0);
              local_4c = 0x7d;
              FUN_1424a6cf0(&local_d0,&local_4c,0,1);
LAB_1425c67ca:
              sVar7 = 0;
              cVar2 = '\0';
              goto LAB_1425c5f10;
            }
          }
        }
        else if (iVar3 != 0x5e) goto LAB_1425c63c3;
      }
LAB_1425c6928:
      iVar4 = 0x10002;
      lVar6 = local_58;
LAB_1425c6945:
      *param_8 = iVar4;
      goto joined_r0x0001425c694c;
    }
LAB_1425c63c3:
    if (cVar2 == '\x02') {
      if (sVar7 != 0) goto LAB_1425c690c;
      cVar2 = '\x01';
      sVar7 = 0;
      local_50 = iVar3;
      goto LAB_1425c5f10;
    }
    if (cVar2 != '\x01') {
      if (cVar2 == '\0') {
        cVar2 = '\x01';
        local_50 = iVar3;
      }
      goto LAB_1425c5f10;
    }
    if (sVar7 != 0x2d) {
      FUN_142511a00(local_60,local_50,local_50);
      FUN_142514c30(&local_d0,local_50,0);
      local_50 = iVar3;
      goto LAB_1425c5f10;
    }
    if (local_50 < iVar3) {
      FUN_142511a00(local_60,local_50,iVar3);
      FUN_142514c30(&local_d0,local_50,0);
      local_4c = 0x2d;
      FUN_1424a6cf0(&local_d0,&local_4c,0,1);
      sVar7 = 0;
      FUN_142514c30(&local_d0,iVar3,0);
      cVar2 = '\0';
      goto LAB_1425c5f10;
    }
LAB_1425c690c:
    iVar4 = 0x10002;
    lVar6 = local_58;
    goto LAB_1425c6945;
  }
  cVar1 = '\x02';
LAB_1425c5f43:
  lVar5 = 0;
joined_r0x0001425c5f49:
  if (cVar2 == '\x01') {
    if (sVar7 != 0) goto LAB_1425c690c;
    FUN_142511a00(local_60);
    sVar7 = 0;
    FUN_142514c30(&local_d0,local_50);
  }
  else if ((sVar7 == 0x2d) || (sVar7 == 0x26)) {
    local_4c = sVar7;
    FUN_1424a6cf0(&local_d0,&local_4c,0,1);
  }
  if ((lVar5 == 0) && (bVar9 = local_88 == 0, local_88 = local_58, lVar5 = local_58, bVar9)) {
    lVar6 = thunk_FUN_1424da030(200);
    if (lVar6 == 0) {
      local_90 = 0;
      iVar4 = 7;
      lVar6 = 0;
      goto LAB_1425c6945;
    }
    local_58 = lVar6;
    FUN_142511900(lVar6);
    local_90 = local_58;
    local_88 = local_58;
    lVar5 = local_58;
    if (cVar1 == '\x03') goto LAB_1425c6277;
LAB_1425c60c3:
    if (cVar1 == '\x02') {
      FUN_1426a6190(param_2,iVar4);
      FUN_1425c6b40(lVar5,param_2,&local_d0,param_8);
      lVar6 = local_58;
      if (0 < *param_8) goto joined_r0x0001425c694c;
    }
    else if (cVar1 == '\x01') {
      local_108 = local_80;
      local_100 = local_64;
      FUN_1425c5e10(lVar5,param_2,local_70,&local_d0,param_5,&local_108,local_68,param_8);
    }
  }
  else {
    if (cVar1 != '\x03') goto LAB_1425c60c3;
LAB_1425c6277:
    FUN_142514ce0(lVar5,&local_d0);
  }
  if (cVar8 == '\0') {
    FUN_142511c30(local_60,lVar5);
    bVar9 = true;
    goto LAB_1425c67f8;
  }
  bVar9 = true;
  cVar2 = '\x02';
  if (sVar7 == 0) {
    FUN_142513300(local_60,lVar5);
    sVar7 = 0;
  }
  else if (sVar7 == 0x26) {
    FUN_142513f30(local_60,lVar5);
    sVar7 = 0;
  }
  else if (sVar7 == 0x2d) {
    FUN_142514040(local_60,lVar5);
    sVar7 = 0;
  }
  else {
    sVar7 = 0;
  }
  goto LAB_1425c5f10;
}



// FUNCTION 1425c6950 Unwind@1425c6950 body=56 status=ok
// SIG undefined Unwind@1425c6950(void)

void Unwind_1425c6950(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x90) = &DAT_149c41d24;
  return;
}



// FUNCTION 1425c6990 Unwind@1425c6990 body=58 status=ok
// SIG undefined Unwind@1425c6990(void)

void Unwind_1425c6990(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x130));
  return;
}



// FUNCTION 1425c69d0 Unwind@1425c69d0 body=73 status=ok
// SIG undefined Unwind@1425c69d0(void)

void Unwind_1425c69d0(undefined8 param_1,longlong param_2)

{
  FUN_1425c6cf0(param_2 + 0xf8);
  FUN_140859a90(param_2 + 0x40);
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 1425c6a20 FUN_1425c6a20 body=58 status=ok
// SIG undefined FUN_1425c6a20(void)

void FUN_1425c6a20(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x18);
    }
    else {
      lVar3 = param_2 + 10;
    }
  }
  else {
    lVar3 = 0;
  }
  iVar2 = (int)(short)uVar1 >> 5;
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  FUN_142512160(param_1,lVar3,iVar2);
  return;
}



// FUNCTION 1425c6a60 FUN_1425c6a60 body=206 status=ok
// SIG undefined FUN_1425c6a60(void)

void FUN_1425c6a60(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1426a6150(param_1,local_38);
  iVar1 = FUN_1426a5ce0(param_1,param_2 & 0xfffffffd,&local_21,&local_28);
  if (iVar1 - 0x5bU < 2) {
    iVar2 = FUN_1426a5ce0(param_1,param_2 & 0xfffffff9,&local_21,&local_28);
    if (iVar1 == 0x5b) {
      FUN_1426a6170(param_1,local_38);
      goto LAB_1425c6b21;
    }
    if ((iVar2 - 0x4eU < 0x23) && ((0x400000005U >> ((ulonglong)(iVar2 - 0x4eU) & 0x3f) & 1) != 0))
    {
      FUN_1426a6170(param_1,local_38);
      goto LAB_1425c6b21;
    }
  }
  FUN_1426a6170(param_1,local_38);
LAB_1425c6b21:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1425c6b40 FUN_1425c6b40 body=214 status=ok
// SIG undefined FUN_1425c6b40(void)

void FUN_1425c6b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  ulonglong uVar1;
  undefined **local_80;
  undefined2 local_78;
  undefined **local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    local_80 = &PTR_FUN_149e18960;
    local_78 = 2;
    FUN_1426a6080(param_2,&local_80,0xffffffff);
    local_40 = icu_64::ParsePosition::vftable;
    local_38 = 0xffffffff00000000;
    FUN_1425c76a0(param_1,&local_80,&local_40,param_4);
    uVar1 = local_38;
    if (*param_4 < 1) {
      if ((int)local_38 == 0) {
        *param_4 = 0x10002;
      }
      else {
        FUN_1426a60e0(param_2,local_38 & 0xffffffff);
        FUN_1424a9690(param_3,&local_80,0,uVar1 & 0xffffffff);
      }
    }
    thunk_FUN_1424b70d0(&local_40);
    FUN_140859a90(&local_80);
  }
  return;
}



// FUNCTION 1425c6c20 Unwind@1425c6c20 body=43 status=ok
// SIG undefined Unwind@1425c6c20(void)

void Unwind_1425c6c20(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x68);
  return;
}



// FUNCTION 1425c6c50 Unwind@1425c6c50 body=43 status=ok
// SIG undefined Unwind@1425c6c50(void)

void Unwind_1425c6c50(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425c6c80 FUN_1425c6c80 body=102 status=ok
// SIG undefined FUN_1425c6c80(void)

undefined8 FUN_1425c6c80(longlong param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((param_2 == 0) && ((uVar1 & 1) != 0)) {
    FUN_1424a8e40();
    uVar3 = 0;
  }
  else {
    if ((short)uVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar2 = (int)(short)uVar1 >> 5;
    }
    if (param_2 < uVar2) {
      if ((int)param_2 < 0x400) {
        uVar2 = uVar1 & 0x1f;
        *(ushort *)(param_1 + 8) = (ushort)(param_2 << 5) | (ushort)uVar2;
      }
      else {
        uVar2 = uVar1 | 0xffe0;
        *(short *)(param_1 + 8) = (short)uVar2;
        *(uint *)(param_1 + 0xc) = param_2;
      }
      uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1425c6cf0 FUN_1425c6cf0 body=41 status=ok
// SIG undefined FUN_1425c6cf0(void)

void FUN_1425c6cf0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 1425c6d20 FUN_1425c6d20 body=269 status=ok
// SIG undefined FUN_1425c6d20(void)

void FUN_1425c6d20(longlong param_1,code *param_2,undefined8 param_3,undefined8 param_4,int *param_5
                  )

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*param_5 < 1) {
    FUN_142513500();
    iVar2 = FUN_142512820(param_4);
    if (0 < iVar2) {
      iVar5 = 0;
      iVar7 = -1;
      do {
        iVar3 = FUN_142512850(param_4,iVar5);
        iVar4 = FUN_142512830(param_4,iVar5);
        if (iVar3 <= iVar4) {
          iVar3 = iVar3 + -1;
          do {
            iVar6 = iVar3 + 1;
            cVar1 = (*param_2)(iVar6,param_3);
            if (cVar1 == '\0') {
              if (-1 < iVar7) {
                FUN_142511a00(param_1,iVar7,iVar3);
                iVar7 = -1;
              }
            }
            else if (iVar7 < 0) {
              iVar7 = iVar6;
            }
            iVar3 = iVar6;
          } while (iVar4 != iVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar2);
      if (-1 < iVar7) {
        FUN_142511a00(param_1,iVar7,0x10ffff);
      }
    }
    if (((*(byte *)(param_1 + 0x20) & 1) != 0) && (*param_5 < 1)) {
      *param_5 = 7;
    }
  }
  return;
}



// FUNCTION 1425c6e50 FUN_1425c6e50 body=493 status=ok
// SIG undefined FUN_1425c6e50(void)

void FUN_1425c6e50(longlong param_1,uint param_2,uint param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = param_3;
  if ((*param_4 < 1) && (*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0))
  {
    if (param_2 == 0x7000) {
      uVar4 = FUN_1426a6280(0x7000,param_4);
      if (*param_4 < 1) {
        FUN_142513500(param_1);
        local_58 = FUN_142512820(uVar4);
        if (0 < local_58) {
          iVar7 = 0;
          iVar8 = -1;
          do {
            iVar2 = FUN_142512850(uVar4,iVar7);
            iVar3 = FUN_142512830(uVar4,iVar7);
            if (iVar2 <= iVar3) {
              do {
                cVar1 = FUN_1424d9370(iVar2,param_3);
                if (cVar1 == '\0') {
                  if (-1 < iVar8) {
                    FUN_142511a00(param_1,iVar8,iVar2 + -1);
                    iVar8 = -1;
                  }
                }
                else if (iVar8 < 0) {
                  iVar8 = iVar2;
                }
                iVar2 = iVar2 + 1;
              } while (iVar3 + 1 != iVar2);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 != local_58);
          if (-1 < iVar8) {
            FUN_142511a00(param_1,iVar8,0x10ffff);
          }
        }
        if (((*(byte *)(param_1 + 0x20) & 1) != 0) && (*param_4 < 1)) {
          *param_4 = 7;
        }
      }
    }
    else {
      if (param_2 == 0x2000) {
        uVar4 = FUN_1426a6280(0x2000,param_4);
        pcVar5 = FUN_1425c7070;
        puVar6 = &local_4c;
      }
      else {
        if (param_2 < 0x41) {
          if (param_3 < 2) {
            uVar4 = FUN_1426a6810(param_2,param_4);
            if (*param_4 < 1) {
              FUN_142512270(param_1,uVar4,1);
              if (param_3 == 0) {
                FUN_1425146a0(param_1);
              }
            }
          }
          else {
            FUN_142513500(param_1);
          }
          goto LAB_1425c7043;
        }
        if (0x18 < param_2 - 0x1000) {
          *param_4 = 1;
          goto LAB_1425c7043;
        }
        uVar4 = FUN_1426a6280(param_2,param_4);
        pcVar5 = FUN_1425c7090;
        puVar6 = &local_54;
        local_54 = param_2;
        local_50 = param_3;
      }
      local_68 = param_4;
      FUN_1425c6d20(param_1,pcVar5,puVar6,uVar4);
    }
  }
LAB_1425c7043:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 1425c7070 FUN_1425c7070 body=27 status=ok
// SIG undefined FUN_1425c7070(void)

bool FUN_1425c7070(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = *param_2;
  bVar2 = FUN_1424d86a0();
  return (uVar1 >> (bVar2 & 0x1f) & 1) != 0;
}



// FUNCTION 1425c7090 FUN_1425c7090 body=27 status=ok
// SIG undefined FUN_1425c7090(void)

bool FUN_1425c7090(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_142516e50(param_1,*param_2);
  return iVar1 == param_2[1];
}



// FUNCTION 1425c70b0 FUN_1425c70b0 body=1193 status=ok
// SIG undefined FUN_1425c70b0(void)

longlong FUN_1425c70b0(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  double dVar11;
  char *local_148 [16];
  longlong local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_90;
  char *local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_50;
  double local_48 [2];
  
  local_48[1] = -NAN;
  if (0 < *param_4) {
    return param_1;
  }
  if (*(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x58) != 0) {
    return param_1;
  }
  uVar1 = *(ushort *)(param_2 + 8);
  if ((short)uVar1 < 0) {
    iVar5 = *(int *)(param_2 + 0xc);
    if ((uVar1 & 0x11) != 0) goto LAB_1425c7109;
LAB_1425c7116:
    if ((uVar1 & 2) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x18);
    }
    else {
      lVar9 = param_2 + 10;
    }
  }
  else {
    iVar5 = (int)(short)uVar1 >> 5;
    if ((uVar1 & 0x11) == 0) goto LAB_1425c7116;
LAB_1425c7109:
    lVar9 = 0;
  }
  cVar3 = FUN_14250aed0(lVar9,iVar5);
  if (cVar3 == '\0') goto LAB_1425c71db;
  uVar1 = *(ushort *)(param_3 + 8);
  if ((short)uVar1 < 0) {
    iVar5 = *(int *)(param_3 + 0xc);
    if ((uVar1 & 0x11) != 0) goto LAB_1425c7144;
LAB_1425c7151:
    if ((uVar1 & 2) == 0) {
      lVar9 = *(longlong *)(param_3 + 0x18);
    }
    else {
      lVar9 = param_3 + 10;
    }
  }
  else {
    iVar5 = (int)(short)uVar1 >> 5;
    if ((uVar1 & 0x11) == 0) goto LAB_1425c7151;
LAB_1425c7144:
    lVar9 = 0;
  }
  cVar3 = FUN_14250aed0(lVar9,iVar5);
  if (cVar3 == '\0') {
LAB_1425c71db:
    *param_4 = 1;
    return param_1;
  }
  local_c8 = (longlong)&local_bc + 1;
  local_c0 = 0x28;
  local_bc = 0;
  local_90 = 0;
  local_88 = (char *)((longlong)&local_7c + 1);
  local_80 = 0x28;
  local_7c = 0;
  local_50 = 0;
  FUN_142503780(&local_c8,param_2,param_4);
  FUN_142503780(&local_88,param_3,param_4);
  if (0 < *param_4) goto LAB_1425c74fa;
  if (*(short *)(param_3 + 8) < 0) {
    iVar5 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar5 = (int)*(short *)(param_3 + 8) >> 5;
  }
  if (iVar5 < 1) {
    uVar10 = 0x2000;
    iVar5 = FUN_1425634b0(0x2000);
    bVar2 = true;
    if (iVar5 == -1) {
      iVar5 = FUN_1425634b0(0x100a,local_c8);
      if (iVar5 == -1) {
        uVar4 = FUN_1425634a0(local_c8);
        iVar5 = 1;
        if (0x40 < uVar4) {
          iVar7 = FUN_1425630c0(&DAT_149c41d2a,local_c8);
          if (iVar7 == 0) {
            FUN_1425133e0(param_1,0,0x10ffff);
            goto LAB_1425c74fa;
          }
          iVar7 = FUN_1425630c0("ASCII",local_c8);
          if (iVar7 == 0) {
            FUN_1425133e0(param_1,0,0x7f);
            goto LAB_1425c74fa;
          }
          iVar7 = FUN_1425630c0("Assigned",local_c8);
          if (iVar7 != 0) goto LAB_1425c74f4;
          bVar2 = false;
          uVar4 = uVar10;
        }
      }
      else {
        uVar4 = 0x100a;
      }
    }
    else {
LAB_1425c72dd:
      bVar2 = true;
      uVar4 = uVar10;
    }
LAB_1425c72e0:
    FUN_1425c6e50(param_1,uVar4,iVar5,param_4);
    if (!bVar2) {
      FUN_1425146a0(param_1);
    }
    if (((*(byte *)(param_1 + 0x20) & 1) != 0) && (*param_4 < 1)) {
      *param_4 = 7;
    }
  }
  else {
    uVar4 = FUN_1425634a0(local_c8);
    if (uVar4 != 0xffffffff) {
      uVar10 = 0x2000;
      if (uVar4 != 0x1005) {
        uVar10 = uVar4;
      }
      if (((uVar10 == 0x2000) || (uVar10 < 0x41)) || (uVar10 - 0x1000 < 0x19)) {
        iVar5 = FUN_1425634b0(uVar10,local_88);
        bVar2 = true;
        if (iVar5 != -1) goto LAB_1425c72dd;
        if (((uVar10 - 0x1002 < 0x10) && ((0xc001U >> (uVar10 - 0x1002 & 0x1f) & 1) != 0)) &&
           ((dVar11 = strtod(local_88,local_148), *local_148[0] == '\0' &&
            ((0.0 <= dVar11 && (dVar11 <= 255.0)))))) {
          if ((dVar11 == (double)(int)dVar11) && (!NAN(dVar11) && !NAN((double)(int)dVar11))) {
            iVar5 = (int)dVar11;
            goto LAB_1425c72e0;
          }
        }
      }
      else if ((int)uVar10 < 0x4005) {
        if (uVar10 == 0x3000) {
          local_48[0] = strtod(local_88,local_148);
          if (*local_148[0] == '\0') {
            uVar8 = FUN_1426a6280(0x3000,param_4);
            FUN_1425c6d20(param_1,FUN_1425c75b0,local_48,uVar8,param_4);
            goto LAB_1425c74fa;
          }
        }
        else if ((uVar10 == 0x4000) && (cVar3 = FUN_1425c75d0(local_148,local_88), cVar3 != '\0')) {
          FUN_1424d9e10(local_48,local_148);
          uVar8 = FUN_1426a6280(0x4000,param_4);
          FUN_1425c6d20(param_1,FUN_1425c7640,local_48,uVar8,param_4);
          goto LAB_1425c74fa;
        }
      }
      else if (uVar10 == 0x4005) {
        cVar3 = FUN_1425c75d0(local_148,local_88);
        if ((cVar3 != '\0') && (uVar6 = FUN_1425d7cb0(2,local_148,param_4), *param_4 < 1)) {
          FUN_142513500(param_1);
          FUN_142513960(param_1,uVar6);
          goto LAB_1425c74fa;
        }
      }
      else if (((uVar10 != 0x400b) && (uVar10 == 0x7000)) &&
              (iVar5 = FUN_1425634b0(0x100a,local_88), iVar5 != -1)) {
        bVar2 = true;
        uVar4 = 0x7000;
        goto LAB_1425c72e0;
      }
    }
LAB_1425c74f4:
    *param_4 = 1;
  }
LAB_1425c74fa:
  if ((char)local_7c != '\0') {
    FUN_1424da110(local_88);
  }
  if ((char)local_bc == '\0') {
    return param_1;
  }
  FUN_1424da110(local_c8);
  return param_1;
}



// FUNCTION 1425c7560 Unwind@1425c7560 body=72 status=ok
// SIG undefined Unwind@1425c7560(void)

void Unwind_1425c7560(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xfc) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0xf0));
  }
  if (*(char *)(param_2 + 0xbc) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0xb0));
  }
  return;
}



// FUNCTION 1425c75b0 FUN_1425c75b0 body=32 status=ok
// SIG undefined FUN_1425c75b0(void)

byte FUN_1425c75b0(undefined8 param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_1424d8e40();
  return -(dVar1 == *param_2) & 1;
}



// FUNCTION 1425c75d0 FUN_1425c75d0 body=94 status=ok
// SIG undefined FUN_1425c75d0(void)

undefined8 FUN_1425c75d0(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = 0;
  do {
    uVar2 = (uint)lVar3;
    pcVar4 = param_2;
    do {
      param_2 = pcVar4 + 1;
      cVar1 = *pcVar4;
      if (cVar1 != ' ') {
        if (cVar1 == '\0') {
          if (uVar2 == 0) {
            lVar3 = 0;
          }
          else {
            if (*(char *)(param_1 + (ulonglong)(uVar2 - 1)) == ' ') {
              uVar2 = uVar2 - 1;
            }
            lVar3 = (longlong)(int)uVar2;
          }
          *(undefined1 *)(param_1 + lVar3) = 0;
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        }
        break;
      }
      pcVar4 = param_2;
    } while ((lVar3 == 0) || (*(char *)(param_1 + (ulonglong)(uVar2 - 1)) == ' '));
    if (lVar3 == 0x7f) {
      return 0;
    }
    *(char *)(param_1 + lVar3) = cVar1;
    lVar3 = lVar3 + 1;
  } while( true );
}



// FUNCTION 1425c7640 FUN_1425c7640 body=86 status=ok
// SIG undefined FUN_1425c7640(void)

void FUN_1425c7640(undefined8 param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1424d91f0(param_1,&local_14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1425c76a0 FUN_1425c76a0 body=921 status=ok
// SIG undefined FUN_1425c76a0(void)

undefined8 FUN_1425c76a0(undefined8 param_1,longlong *param_2,longlong param_3,int *param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 unaff_R12;
  longlong lVar12;
  bool bVar13;
  undefined1 local_118 [64];
  undefined **local_d8;
  undefined2 local_d0;
  undefined **local_98;
  undefined2 local_90;
  undefined4 local_54;
  int local_50;
  uint local_4c [3];
  
  local_4c[1] = 0xfffffffe;
  local_4c[2] = 0xffffffff;
  local_4c[0] = *(uint *)(param_3 + 8);
  if (0 < *param_4) {
    return param_1;
  }
  sVar1 = (short)param_2[1];
  if (sVar1 < 0) {
    uVar3 = *(uint *)((longlong)param_2 + 0xc);
  }
  else {
    uVar3 = (int)sVar1 >> 5;
  }
  if (((int)uVar3 < (int)(local_4c[0] + 5)) || (uVar3 <= local_4c[0])) goto LAB_1425c790a;
  lVar9 = (longlong)(int)local_4c[0];
  lVar12 = (longlong)param_2 + 10;
  lVar6 = lVar12;
  if (((int)sVar1 & 2U) == 0) {
    lVar6 = param_2[3];
  }
  sVar1 = *(short *)(lVar6 + lVar9 * 2);
  if (sVar1 == 0x5c) {
    if (((uVar3 <= local_4c[0] + 1) ||
        (uVar8 = *(ushort *)(lVar6 + 2 + lVar9 * 2), (uVar8 & 0xffdf) != 0x50)) &&
       ((uVar3 <= local_4c[0] + 1 ||
        (uVar8 = 0x4e, *(short *)(lVar6 + (longlong)(int)(local_4c[0] + 1) * 2) != 0x4e))))
    goto LAB_1425c790a;
    uVar11 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),uVar8 == 0x50);
    bVar13 = uVar8 == 0x4e;
    local_4c[0] = local_4c[0] + 2;
    uVar3 = FUN_1425cc780(param_2,local_4c,0);
    sVar1 = (short)param_2[1];
    if (sVar1 < 0) {
      uVar4 = *(uint *)((longlong)param_2 + 0xc);
    }
    else {
      uVar4 = (int)sVar1 >> 5;
    }
    if ((uVar3 == uVar4) || (local_4c[0] = uVar3 + 1, uVar4 <= uVar3)) goto LAB_1425c790a;
    if (((int)sVar1 & 2U) == 0) {
      lVar12 = param_2[3];
    }
    if (*(short *)(lVar12 + (longlong)(int)uVar3 * 2) != 0x7b) goto LAB_1425c790a;
    uVar5 = 0;
    if (((int)uVar3 < -1) || (uVar5 = uVar4, uVar2 = local_4c[0], (int)uVar4 <= (int)uVar3)) {
      uVar2 = uVar5;
    }
    uVar3 = FUN_1424a8940(param_2,0x7d,uVar2,uVar4 - uVar2);
    local_50 = 1;
  }
  else {
    if (((sVar1 != 0x5b) || (uVar3 <= local_4c[0] + 1)) ||
       (*(short *)(lVar6 + 2 + lVar9 * 2) != 0x3a)) goto LAB_1425c790a;
    local_4c[0] = local_4c[0] + 2;
    uVar11 = 0;
    local_4c[0] = FUN_1425cc780(param_2,local_4c,0);
    sVar1 = (short)param_2[1];
    if (sVar1 < 0) {
      uVar3 = *(uint *)((longlong)param_2 + 0xc);
    }
    else {
      uVar3 = (int)sVar1 >> 5;
    }
    if (local_4c[0] < uVar3 && (int)local_4c[0] < (int)uVar3) {
      if (((int)sVar1 & 2U) == 0) {
        lVar12 = param_2[3];
      }
      if (*(short *)(lVar12 + (longlong)(int)local_4c[0] * 2) == 0x5e) {
        local_4c[0] = local_4c[0] + 1;
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
      }
    }
    if ((int)local_4c[0] < 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar3;
      if ((int)local_4c[0] <= (int)uVar3) {
        uVar4 = local_4c[0];
      }
    }
    bVar13 = false;
    local_50 = 2;
    uVar3 = FUN_1424a8860(param_2,&DAT_149c41d3e,0,2,uVar4,uVar3 - uVar4);
  }
  if (-1 < (int)uVar3) {
    sVar1 = (short)param_2[1];
    if ((int)local_4c[0] < 0) {
      uVar4 = *(uint *)((longlong)param_2 + 0xc);
      uVar7 = 0;
      uVar10 = uVar7;
    }
    else {
      uVar4 = *(uint *)((longlong)param_2 + 0xc);
      uVar5 = (int)sVar1 >> 5;
      if (sVar1 < 0) {
        uVar5 = uVar4;
      }
      uVar7 = (ulonglong)uVar5;
      uVar10 = uVar7;
      if ((int)local_4c[0] <= (int)uVar5) {
        uVar10 = (ulonglong)local_4c[0];
      }
    }
    uVar5 = (int)sVar1 >> 5;
    if (sVar1 < 0) {
      uVar5 = uVar4;
    }
    local_54 = uVar11;
    uVar4 = FUN_1424a8940(param_2,CONCAT62((int6)(uVar7 >> 0x10),0x3d),uVar10,uVar5 - (int)uVar10);
    local_98 = &PTR_FUN_149e18960;
    local_90 = 2;
    local_d8 = &PTR_FUN_149e18960;
    local_d0 = 2;
    if ((((int)uVar4 < 0) || (bVar13)) || (uVar3 <= uVar4)) {
      (**(code **)(*param_2 + 0x10))(param_2,local_4c[0],uVar3,&local_98);
      if (bVar13) {
        FUN_1424a7c80(&local_d8,&local_98);
        FUN_1424a7220(local_118,&DAT_14996c19f,2,0);
        FUN_1424a7ca0(&local_98,local_118);
        FUN_140859a90(local_118);
      }
    }
    else {
      (**(code **)(*param_2 + 0x10))(param_2,local_4c[0],uVar4,&local_98);
      (**(code **)(*param_2 + 0x10))(param_2,uVar4 + 1,uVar3,&local_d8);
    }
    FUN_1425c70b0(param_1,&local_98,&local_d8,param_4);
    if (*param_4 < 1) {
      if ((char)local_54 != '\0') {
        FUN_1425146a0(param_1);
      }
      *(uint *)(param_3 + 8) = uVar3 + local_50;
    }
    FUN_140859a90(&local_d8);
    FUN_140859a90(&local_98);
    return param_1;
  }
LAB_1425c790a:
  *param_4 = 1;
  return param_1;
}



// FUNCTION 1425c7a40 Unwind@1425c7a40 body=64 status=ok
// SIG undefined Unwind@1425c7a40(void)

void Unwind_1425c7a40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  FUN_140859a90(param_2 + 0xb0);
  return;
}



// FUNCTION 1425c7a80 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 1425c7a90 FUN_1425c7a90 body=5 status=ok
// SIG undefined FUN_1425c7a90(void)

longlong FUN_1425c7a90(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1425c7aa0 FUN_1425c7aa0 body=1 status=ok
// SIG undefined FUN_1425c7aa0(void)

void FUN_1425c7aa0(void)

{
  return;
}



// FUNCTION 1425c7ab0 FUN_1425c7ab0 body=181 status=ok
// SIG undefined FUN_1425c7ab0(void)

bool FUN_1425c7ab0(longlong param_1,longlong *param_2,int *param_3,int param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)(param_1 + -8);
  iVar4 = *param_3;
  if (iVar4 < param_4) {
    uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
    cVar1 = (**(code **)(*plVar5 + 0x30))(plVar5,uVar2);
    iVar4 = *param_3;
    if (cVar1 != '\0') {
      *param_3 = (iVar4 - (uint)(uVar2 < 0x10000)) + 2;
      return (bool)2;
    }
  }
  if (param_4 < iVar4) {
    uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    cVar1 = (**(code **)(*plVar5 + 0x30))(plVar5,uVar3);
    iVar4 = *param_3;
    if (cVar1 != '\0') {
      *param_3 = iVar4 + -1;
      if (iVar4 < 1) {
        return (bool)2;
      }
      uVar2 = (**(code **)(*param_2 + 0x48))(param_2,iVar4 + -1);
      *param_3 = *param_3 + -1 + (uint)(uVar2 < 0x10000);
      return (bool)2;
    }
  }
  return iVar4 == param_4 && param_5 != '\0';
}



// FUNCTION 1425c7b70 FUN_1425c7b70 body=1960 status=ok
// SIG undefined FUN_1425c7b70(void)

longlong FUN_1425c7b70(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ushort *puVar18;
  longlong local_80;
  longlong local_70;
  longlong local_68;
  int local_58;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_142511960(param_1,0,0x10ffff);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(bool *)(param_1 + 0xfc) = param_4 == 0x3f;
  local_50 = param_1;
  FUN_142513f30(param_1,param_2);
  if ((param_4 & 1) != 0) {
    *(longlong *)(local_50 + 200) = local_50;
  }
  plVar1 = (longlong *)(local_50 + 0xd8);
  iVar3 = *(int *)(*(longlong *)(local_50 + 0xd0) + 8);
  lVar10 = (longlong)iVar3;
  bVar4 = false;
  lVar11 = local_50;
  for (iVar12 = 0; iVar12 < iVar3; iVar12 = iVar12 + 1) {
    lVar11 = FUN_142516630(*(undefined8 *)(lVar11 + 0xd0),iVar12);
    uVar2 = *(ushort *)(lVar11 + 8);
    if ((uVar2 & 0x11) == 0) {
      if ((uVar2 & 2) != 0) {
        lVar16 = lVar11 + 10;
        goto joined_r0x0001425c7cb5;
      }
      lVar16 = *(longlong *)(lVar11 + 0x18);
      if (-1 < (short)uVar2) goto LAB_1425c7ca0;
LAB_1425c7cc0:
      iVar17 = *(int *)(lVar11 + 0xc);
    }
    else {
      lVar16 = 0;
joined_r0x0001425c7cb5:
      if ((short)uVar2 < 0) goto LAB_1425c7cc0;
LAB_1425c7ca0:
      iVar17 = (int)(short)uVar2 >> 5;
    }
    iVar7 = FUN_142512b70(local_50,lVar16,iVar17,1);
    lVar11 = local_50;
    if (iVar7 < iVar17) {
      bVar4 = true;
    }
    if (((param_4 & 8) != 0) && (*(int *)(local_50 + 0xf4) < iVar17)) {
      *(int *)(local_50 + 0xf4) = iVar17;
    }
    if (((param_4 & 4) != 0) && ((param_4 & 2) != 0 || iVar7 < iVar17)) {
      local_58 = 0;
      local_54 = 0;
      FUN_1424db4d0(0,0,&local_54,lVar16,iVar17,&local_58);
      iVar17 = 0;
      if (local_58 == 0xf) {
        iVar17 = local_54;
      }
      if (local_58 < 1) {
        iVar17 = local_54;
      }
      *(int *)(lVar11 + 0xf0) = *(int *)(lVar11 + 0xf0) + iVar17;
      if (*(int *)(lVar11 + 0xf8) < iVar17) {
        *(int *)(lVar11 + 0xf8) = iVar17;
      }
    }
  }
  if (!bVar4) goto LAB_1425c7e21;
  if (*(char *)(lVar11 + 0xfc) == '\0') {
LAB_1425c7dbf:
    if ((param_4 & 4) == 0) {
      cVar6 = '\0';
      iVar12 = iVar3;
    }
    else {
      iVar12 = iVar3 * 5 + *(int *)(lVar11 + 0xf0);
      cVar6 = '\0';
    }
  }
  else {
    FUN_1425151b0(lVar11);
    cVar6 = *(char *)(local_50 + 0xfc);
    lVar11 = local_50;
    if (cVar6 == '\0') goto LAB_1425c7dbf;
    iVar12 = iVar3 * 8 + *(int *)(local_50 + 0xf0);
  }
  if (iVar12 < 0x81) {
    local_80 = lVar11 + 0x100;
    *(longlong *)(lVar11 + 0xd8) = local_80;
  }
  else {
    local_80 = FUN_1424da030(iVar12);
    *plVar1 = local_80;
    if (local_80 == 0) {
LAB_1425c7e21:
      *(undefined8 *)(lVar11 + 0xf4) = 0;
      return local_50;
    }
    cVar6 = *(char *)(lVar11 + 0xfc);
  }
  if (cVar6 == '\0') {
    if ((param_4 & 4) != 0) {
      local_80 = local_80 + lVar10 * 4;
      *(longlong *)(lVar11 + 0xe8) = lVar10 + local_80;
    }
    *(longlong *)(lVar11 + 0xe0) = local_80;
    local_70 = local_80;
    local_68 = local_80;
  }
  else {
    local_80 = local_80 + lVar10 * 4;
    *(longlong *)(lVar11 + 0xe0) = local_80;
    local_80 = local_80 + lVar10;
    local_68 = local_80 + lVar10;
    local_70 = local_68 + lVar10;
    *(longlong *)(lVar11 + 0xe8) = lVar10 + local_70;
  }
  iVar12 = 0;
  uVar15 = 0;
  do {
    if (iVar3 <= (int)uVar15) {
      if (*(char *)(lVar11 + 0xfc) != '\0') {
        FUN_1425151b0(*(undefined8 *)(local_50 + 200));
      }
      return local_50;
    }
    lVar11 = FUN_142516630(*(undefined8 *)(lVar11 + 0xd0),uVar15);
    uVar2 = *(ushort *)(lVar11 + 8);
    if ((uVar2 & 0x11) == 0) {
      if ((uVar2 & 2) != 0) {
        puVar18 = (ushort *)(lVar11 + 10);
        goto joined_r0x0001425c7f25;
      }
      puVar18 = *(ushort **)(lVar11 + 0x18);
      if (-1 < (short)uVar2) goto LAB_1425c7f10;
LAB_1425c7f30:
      iVar17 = *(int *)(lVar11 + 0xc);
    }
    else {
      puVar18 = (ushort *)0x0;
joined_r0x0001425c7f25:
      if ((short)uVar2 < 0) goto LAB_1425c7f30;
LAB_1425c7f10:
      iVar17 = (int)(short)uVar2 >> 5;
    }
    iVar7 = FUN_142512b70(local_50,puVar18,iVar17,1);
    if (iVar7 < iVar17) {
      if ((param_4 & 8) != 0) {
        if ((param_4 & 2) == 0) {
          *(undefined1 *)(local_80 + (ulonglong)uVar15) = 0;
          *(undefined1 *)(*(longlong *)(local_50 + 0xe0) + (ulonglong)uVar15) = 0;
        }
        else {
          if ((param_4 & 0x20) != 0) {
            uVar5 = (undefined1)iVar7;
            if (0xfd < iVar7) {
              uVar5 = 0xfe;
            }
            *(undefined1 *)(*(longlong *)(local_50 + 0xe0) + (ulonglong)uVar15) = uVar5;
          }
          if ((param_4 & 0x10) != 0) {
            iVar8 = FUN_142515360(local_50,puVar18,iVar17,1);
            iVar7 = iVar17 - iVar8;
            if (0xfd < iVar17 - iVar8) {
              iVar7 = 0xfe;
            }
            *(char *)(local_80 + (ulonglong)uVar15) = (char)iVar7;
          }
        }
      }
      lVar11 = local_50;
      if ((param_4 & 4) != 0) {
        lVar10 = (longlong)iVar12 + *(longlong *)(local_50 + 0xe8);
        local_58 = 0;
        local_54 = 0;
        FUN_1424db4d0(lVar10,*(int *)(local_50 + 0xf0) - iVar12,&local_54,puVar18,iVar17,&local_58);
        iVar7 = 0;
        if (local_58 < 1) {
          iVar7 = local_54;
        }
        uVar13 = (ulonglong)uVar15;
        *(int *)(*(longlong *)(lVar11 + 0xd8) + uVar13 * 4) = iVar7;
        iVar12 = iVar12 + iVar7;
        lVar11 = local_68;
        if (iVar7 == 0) {
          *(undefined1 *)(local_70 + uVar13) = 0xff;
          uVar5 = 0xff;
        }
        else if ((param_4 & 2) == 0) {
          *(undefined1 *)(local_70 + uVar13) = 0;
          uVar5 = 0;
        }
        else {
          if ((param_4 & 0x20) != 0) {
            iVar8 = FUN_1425155c0(local_50,lVar10,iVar7,1);
            uVar5 = (undefined1)iVar8;
            if (0xfd < iVar8) {
              uVar5 = 0xfe;
            }
            *(undefined1 *)(local_68 + uVar13) = uVar5;
          }
          if ((param_4 & 0x10) == 0) goto LAB_1425c814a;
          iVar9 = FUN_1425158e0(local_50,lVar10,iVar7,1);
          iVar8 = iVar7 - iVar9;
          if (0xfd < iVar7 - iVar9) {
            iVar8 = 0xfe;
          }
          uVar5 = (undefined1)iVar8;
          lVar11 = local_70;
        }
        *(undefined1 *)(lVar11 + uVar13) = uVar5;
      }
LAB_1425c814a:
      if ((param_4 & 1) != 0) {
        if ((param_4 & 0x20) != 0) {
          uVar2 = *puVar18;
          uVar14 = (uint)uVar2;
          if (((iVar17 != 1) && ((uVar2 & 0xfc00) == 0xd800)) && ((puVar18[1] & 0xfc00) == 0xdc00))
          {
            uVar14 = (uint)uVar2 * 0x400 + (uint)puVar18[1] + 0xfca02400;
          }
          lVar11 = *(longlong *)(local_50 + 200);
          if ((lVar11 == 0) || (lVar11 == local_50)) {
            cVar6 = FUN_142512880(local_50,uVar14);
            if ((cVar6 != '\0') || (lVar11 = FUN_1425125a0(local_50), lVar11 == 0))
            goto LAB_1425c8250;
            *(longlong *)(local_50 + 200) = lVar11;
          }
          FUN_142513960(lVar11,uVar14);
        }
LAB_1425c8250:
        if ((param_4 & 0x10) != 0) {
          uVar2 = puVar18[(longlong)iVar17 + -1];
          uVar14 = (uint)uVar2;
          if (((1 < iVar17) && ((uVar2 & 0xfc00) == 0xdc00)) &&
             ((puVar18[iVar17 - 2] & 0xfc00) == 0xd800)) {
            uVar14 = (uint)uVar2 + (uint)puVar18[iVar17 - 2] * 0x400 + 0xfca02400;
          }
          lVar11 = *(longlong *)(local_50 + 200);
          if ((lVar11 == 0) || (lVar11 == local_50)) {
            cVar6 = FUN_142512880(local_50,uVar14);
            if ((cVar6 != '\0') || (lVar11 = FUN_1425125a0(local_50), lVar11 == 0))
            goto LAB_1425c7eaa;
            *(longlong *)(local_50 + 200) = lVar11;
          }
          FUN_142513960(lVar11,uVar14);
        }
      }
    }
    else {
      uVar13 = (ulonglong)uVar15;
      if ((param_4 & 4) != 0) {
        if ((param_4 & 2) == 0) {
          *(undefined4 *)(*plVar1 + uVar13 * 4) = 0;
        }
        else {
          local_58 = 0;
          local_54 = 0;
          FUN_1424db4d0(*(longlong *)(local_50 + 0xe8) + (longlong)iVar12,
                        *(int *)(local_50 + 0xf0) - iVar12,&local_54,puVar18,iVar17,&local_58);
          iVar17 = 0;
          if (local_58 < 1) {
            iVar17 = local_54;
          }
          *(int *)(*(longlong *)(local_50 + 0xd8) + uVar13 * 4) = iVar17;
          iVar12 = iVar12 + iVar17;
        }
      }
      if (*(char *)(local_50 + 0xfc) != '\0') {
        *(undefined1 *)(local_70 + uVar13) = 0xff;
        *(undefined1 *)(local_68 + uVar13) = 0xff;
        *(undefined1 *)(local_80 + uVar13) = 0xff;
      }
      *(undefined1 *)(uVar13 + *(longlong *)(local_50 + 0xe0)) = 0xff;
    }
LAB_1425c7eaa:
    uVar15 = uVar15 + 1;
    lVar11 = local_50;
  } while( true );
}



// FUNCTION 1425c8350 Unwind@1425c8350 body=52 status=ok
// SIG undefined Unwind@1425c8350(void)

void Unwind_1425c8350(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1425c8390 FUN_1425c8390 body=308 status=ok
// SIG undefined FUN_1425c8390(void)

longlong FUN_1425c8390(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong _Size;
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  
  FUN_142511b90();
  *(undefined8 *)(param_1 + 200) = 0;
  *(longlong *)(param_1 + 0xd0) = param_3;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  iVar4 = *(int *)(param_2 + 0xf0);
  *(int *)(param_1 + 0xf0) = iVar4;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0xfc) = 1;
  lVar3 = param_1;
  if (*(longlong *)(param_2 + 200) != param_2) {
    lVar3 = FUN_1425124d0();
    param_3 = *(longlong *)(param_1 + 0xd0);
    iVar4 = *(int *)(param_1 + 0xf0);
  }
  *(longlong *)(param_1 + 200) = lVar3;
  iVar2 = *(int *)(param_3 + 8);
  _Size = (longlong)iVar4 + (longlong)iVar2 * 8;
  if ((int)_Size < 0x81) {
    _Dst = (void *)(param_1 + 0x100);
    *(void **)(param_1 + 0xd8) = _Dst;
  }
  else {
    _Dst = (void *)FUN_1424da030(_Size & 0xffffffff);
    *(void **)(param_1 + 0xd8) = _Dst;
    if (_Dst == (void *)0x0) {
      *(undefined8 *)(param_1 + 0xf4) = 0;
      return param_1;
    }
  }
  pvVar1 = (void *)((longlong)_Dst + (longlong)iVar2 * 4);
  *(void **)(param_1 + 0xe0) = pvVar1;
  *(longlong *)(param_1 + 0xe8) = (longlong)(iVar2 << 2) + (longlong)pvVar1;
  memcpy(_Dst,*(void **)(param_2 + 0xd8),_Size);
  return param_1;
}



// FUNCTION 1425c84d0 Unwind@1425c84d0 body=44 status=ok
// SIG undefined Unwind@1425c84d0(void)

void Unwind_1425c84d0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425c8500 FUN_1425c8500 body=85 status=ok
// SIG undefined FUN_1425c8500(void)

void FUN_1425c8500(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if ((lVar1 != 0) && (lVar1 != param_1)) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  if ((*(longlong *)(param_1 + 0xd8) != 0) && (*(longlong *)(param_1 + 0xd8) != param_1 + 0x100)) {
    FUN_1424da110();
  }
  FUN_1425121d0(param_1);
  return;
}



// FUNCTION 1425c8560 FUN_1425c8560 body=1778 status=ok
// SIG undefined FUN_1425c8560(void)

ulonglong FUN_1425c8560(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ushort *puVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 *local_98;
  undefined8 local_90;
  int local_88;
  undefined1 local_84 [24];
  uint local_6c;
  longlong local_68;
  longlong local_60;
  uint local_54;
  uint local_50;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_4 == 0) {
    uVar11 = FUN_1425c8ce0(param_1,param_2,param_3);
    return uVar11;
  }
  uVar8 = FUN_142512b70(param_1,param_2,param_3,1);
  local_4c = param_3 - uVar8;
  if (local_4c == 0) {
LAB_1425c8c80:
    return (ulonglong)param_3;
  }
  local_98 = local_84;
  local_90 = 0;
  local_88 = 0;
  if (param_4 == 1) {
    uVar18 = *(uint *)(param_1 + 0xf4);
    if ((int)uVar18 < 0x11) {
      local_90 = 0x10;
      uVar18 = 0x10;
    }
    else {
      puVar12 = (undefined1 *)FUN_1424da030(uVar18);
      if (puVar12 == (undefined1 *)0x0) {
        local_90._0_4_ = 0;
        uVar18 = (uint)local_90;
      }
      else {
        local_90 = (ulonglong)uVar18;
        local_98 = puVar12;
      }
    }
    memset(local_98,0,(longlong)(int)uVar18);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xd0) + 8);
  lVar13 = (longlong)(int)param_3;
  local_6c = param_3;
  local_68 = param_1;
  local_50 = uVar8;
  local_54 = uVar8;
LAB_1425c8667:
  lVar14 = (longlong)(int)local_54;
  puVar1 = (ushort *)(param_2 + lVar14 * 2);
  if (param_4 == 1) {
    for (uVar8 = 0; uVar18 = local_54, (int)uVar8 < iVar5; uVar8 = uVar8 + 1) {
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar8);
      if (bVar3 != 0xff) {
        lVar15 = FUN_142516630(*(undefined8 *)(local_68 + 0xd0),uVar8);
        uVar4 = *(ushort *)(lVar15 + 8);
        if ((uVar4 & 0x11) == 0) {
          if ((uVar4 & 2) != 0) {
            lVar16 = lVar15 + 10;
            goto joined_r0x0001425c870a;
          }
          lVar16 = *(longlong *)(lVar15 + 0x18);
          if (-1 < (short)uVar4) goto LAB_1425c8710;
LAB_1425c86dd:
          iVar9 = *(int *)(lVar15 + 0xc);
        }
        else {
          lVar16 = 0;
joined_r0x0001425c870a:
          if ((short)uVar4 < 0) goto LAB_1425c86dd;
LAB_1425c8710:
          iVar9 = (int)(short)uVar4 >> 5;
        }
        lVar15 = (longlong)iVar9;
        uVar18 = (uint)bVar3;
        if (((0xfd < bVar3) && (uVar18 = iVar9 - 1, 1 < iVar9)) &&
           (((*(ushort *)(lVar16 + -2 + lVar15 * 2) & 0xfc00) == 0xdc00 &&
            ((*(ushort *)(lVar16 + (ulonglong)(iVar9 - 2U) * 2) & 0xfc00) == 0xd800)))) {
          uVar18 = iVar9 - 2U;
        }
        uVar19 = local_50;
        if ((int)uVar18 < (int)local_50) {
          uVar19 = uVar18;
        }
        if ((int)(iVar9 - uVar19) <= local_4c) {
          if ((int)local_50 <= (int)uVar18) {
            uVar18 = local_50;
          }
          local_60 = (longlong)(iVar9 + -1);
          lVar25 = (longlong)(int)uVar18;
          puVar20 = puVar1 + -lVar25;
          iVar21 = iVar9 - uVar19;
          do {
            iVar24 = (uint)local_90;
            if (local_88 + iVar21 < (int)(uint)local_90) {
              iVar24 = 0;
            }
            iVar24 = (local_88 + iVar21) - iVar24;
            if (local_98[iVar24] == '\0') {
              lVar27 = lVar14 - lVar25;
              puVar2 = (ushort *)(param_2 + lVar27 * 2);
              lVar28 = 0;
              iVar26 = iVar9 + 1;
              do {
                if (*(short *)((longlong)puVar20 + lVar28) != *(short *)(lVar16 + lVar28))
                goto LAB_1425c87d6;
                iVar26 = iVar26 + -1;
                lVar28 = lVar28 + 2;
              } while (1 < iVar26);
              if ((((lVar27 < 1) || ((puVar2[-1] & 0xfc00) != 0xd800)) ||
                  ((*puVar2 & 0xfc00) != 0xdc00)) &&
                 (((lVar13 - lVar15 <= lVar27 || ((puVar2[local_60] & 0xfc00) != 0xd800)) ||
                  ((puVar2[lVar15] & 0xfc00) != 0xdc00)))) {
                param_3 = local_6c;
                if (iVar21 == local_4c) goto LAB_1425c8c6e;
                local_98[iVar24] = 1;
                local_90 = CONCAT44(local_90._4_4_ + 1,(uint)local_90);
              }
            }
LAB_1425c87d6:
            if ((int)lVar25 == 0) break;
            lVar25 = lVar25 + -1;
            puVar20 = puVar20 + 1;
            bVar29 = iVar21 != local_4c;
            iVar21 = iVar21 + 1;
          } while (bVar29);
        }
      }
      param_1 = local_68;
    }
LAB_1425c8ae0:
    if ((local_50 != 0) || (uVar18 == 0)) {
      param_3 = uVar18;
      if (local_90._4_4_ != 0) {
LAB_1425c8b6c:
        lVar14 = (longlong)local_88;
        iVar9 = local_88;
LAB_1425c8b90:
        lVar14 = lVar14 + 1;
        if (lVar14 < (int)(uint)local_90) goto code_r0x0001425c8b95;
        lVar14 = -1;
        do {
          lVar15 = lVar14 + 1;
          lVar14 = lVar14 + 1;
        } while (local_98[lVar15] == '\0');
        local_98[lVar14] = 0;
        iVar21 = (uint)local_90 - local_88;
        local_88 = (int)lVar14;
        iVar21 = iVar21 + local_88;
        goto LAB_1425c8bd9;
      }
      goto LAB_1425c8c6e;
    }
    if (local_90._4_4_ != 0) {
      if (((local_4c < 2) || ((*puVar1 & 0xfc00) != 0xd800)) || ((puVar1[1] & 0xfc00) != 0xdc00)) {
        cVar7 = FUN_142512880(param_1);
        iVar9 = 1;
        param_3 = local_6c;
      }
      else {
        cVar7 = FUN_142512880(param_1,(uint)*puVar1 * 0x400 + (uint)puVar1[1] + -0x35fdc00);
        iVar9 = 2;
        param_3 = local_6c;
      }
      local_6c = param_3;
      if (cVar7 == '\0') goto LAB_1425c8b6c;
      local_4c = local_4c - iVar9;
      if (local_4c == 0) goto LAB_1425c8c6e;
      iVar21 = (uint)local_90;
      if (local_88 + iVar9 < (int)(uint)local_90) {
        iVar21 = 0;
      }
      local_88 = (local_88 + iVar9) - iVar21;
      if (local_98[local_88] != '\0') {
        local_98[local_88] = 0;
        local_90 = CONCAT44(local_90._4_4_ + -1,(uint)local_90);
      }
      local_50 = 0;
      local_54 = uVar18 + iVar9;
      goto LAB_1425c8667;
    }
    uVar8 = FUN_142512b70(param_1,puVar1,local_4c,1);
    local_4c = local_4c - uVar8;
    if ((local_4c == 0) || (uVar19 = uVar8, uVar8 == 0)) {
      param_3 = uVar8 + uVar18;
LAB_1425c8c6e:
      if (local_98 != local_84) {
        FUN_1424da110();
      }
      goto LAB_1425c8c80;
    }
  }
  else {
    uVar8 = 0;
    uVar11 = 0;
    uVar18 = local_54;
    for (uVar19 = 0; iVar9 = (int)uVar11, (int)uVar19 < iVar5; uVar19 = uVar19 + 1) {
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar19);
      lVar15 = FUN_142516630(*(undefined8 *)(param_1 + 0xd0),uVar19);
      uVar4 = *(ushort *)(lVar15 + 8);
      if ((uVar4 & 0x11) == 0) {
        if ((uVar4 & 2) != 0) {
          lVar16 = lVar15 + 10;
          goto joined_r0x0001425c893a;
        }
        lVar16 = *(longlong *)(lVar15 + 0x18);
        if (-1 < (short)uVar4) goto LAB_1425c8940;
LAB_1425c890d:
        uVar17 = *(uint *)(lVar15 + 0xc);
      }
      else {
        lVar16 = 0;
joined_r0x0001425c893a:
        if ((short)uVar4 < 0) goto LAB_1425c890d;
LAB_1425c8940:
        uVar17 = (int)(short)uVar4 >> 5;
      }
      uVar22 = (uint)bVar3;
      if (0xfd < bVar3) {
        uVar22 = uVar17;
      }
      uVar6 = local_50;
      if ((int)uVar22 < (int)local_50) {
        uVar6 = uVar22;
      }
      uVar10 = uVar17 - uVar6;
      if (((int)uVar10 <= local_4c) && (iVar9 <= (int)uVar6)) {
        local_60 = CONCAT44(local_60._4_4_,uVar19);
        if ((int)local_50 <= (int)uVar22) {
          uVar22 = local_50;
        }
        puVar20 = puVar1 + -(longlong)(int)uVar22;
        uVar23 = (longlong)(int)uVar22;
        do {
          param_1 = local_68;
          uVar18 = local_54;
          if (((longlong)iVar9 < (longlong)uVar23) || ((int)uVar8 < (int)uVar10)) {
            lVar25 = lVar14 - uVar23;
            puVar2 = (ushort *)(param_2 + lVar25 * 2);
            lVar15 = 0;
            iVar21 = uVar17 + 1;
            do {
              if (*(short *)((longlong)puVar20 + lVar15) != *(short *)(lVar16 + lVar15))
              goto LAB_1425c8a70;
              iVar21 = iVar21 + -1;
              lVar15 = lVar15 + 2;
            } while (1 < iVar21);
            if ((((lVar25 < 1) || ((puVar2[-1] & 0xfc00) != 0xd800)) ||
                ((*puVar2 & 0xfc00) != 0xdc00)) &&
               (((lVar13 - (int)uVar17 <= lVar25 || ((puVar2[(int)(uVar17 - 1)] & 0xfc00) != 0xd800)
                 ) || ((puVar2[(int)uVar17] & 0xfc00) != 0xdc00)))) {
              uVar11 = uVar23 & 0xffffffff;
              uVar8 = uVar10;
              break;
            }
          }
LAB_1425c8a70:
          if (local_4c <= (int)uVar10) break;
          uVar10 = uVar10 + 1;
          puVar20 = puVar20 + 1;
          bVar29 = (longlong)iVar9 < (longlong)uVar23;
          uVar23 = uVar23 - 1;
        } while (bVar29);
      }
    }
    if (iVar9 == 0 && uVar8 == 0) goto LAB_1425c8ae0;
    local_50 = 0;
    local_4c = local_4c - uVar8;
    param_3 = local_6c;
    uVar19 = local_50;
    if (local_4c == 0) goto LAB_1425c8c6e;
  }
  local_50 = uVar19;
  local_54 = uVar18 + uVar8;
  goto LAB_1425c8667;
code_r0x0001425c8b95:
  iVar9 = iVar9 + 1;
  if (local_98[lVar14] != '\0') goto code_r0x0001425c8ba5;
  goto LAB_1425c8b90;
code_r0x0001425c8ba5:
  local_98[lVar14] = 0;
  iVar21 = iVar9 - local_88;
  local_88 = iVar9;
LAB_1425c8bd9:
  local_90 = CONCAT44(local_90._4_4_ + -1,(uint)local_90);
  local_4c = local_4c - iVar21;
  local_50 = 0;
  local_54 = uVar18 + iVar21;
  goto LAB_1425c8667;
}



// FUNCTION 1425c8ca0 Unwind@1425c8ca0 body=64 status=ok
// SIG undefined Unwind@1425c8ca0(void)

void Unwind_1425c8ca0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != param_2 + 0x74) {
    FUN_1424da110();
  }
  return;
}



// FUNCTION 1425c8ce0 FUN_1425c8ce0 body=501 status=ok
// SIG undefined FUN_1425c8ce0(void)

int FUN_1425c8ce0(longlong param_1,longlong param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0xd0) + 8);
  iVar11 = 0;
  iVar9 = param_3;
  do {
    iVar5 = FUN_142512b70(*(undefined8 *)(param_1 + 200),param_2 + (longlong)iVar11 * 2,iVar9,0);
    iVar9 = iVar9 - iVar5;
    if (iVar9 == 0) {
      return param_3;
    }
    iVar5 = iVar5 + iVar11;
    puVar1 = (ushort *)(param_2 + (longlong)iVar5 * 2);
    uVar2 = *(ushort *)(param_2 + (longlong)iVar5 * 2);
    if (((iVar9 < 2) || ((uVar2 & 0xfc00) != 0xd800)) || ((puVar1[1] & 0xfc00) != 0xdc00)) {
      cVar4 = FUN_142512880(param_1);
      iVar10 = -1;
    }
    else {
      cVar4 = FUN_142512880(param_1,(uint)uVar2 * 0x400 + (uint)puVar1[1] + -0x35fdc00);
      iVar10 = -2;
    }
    if (cVar4 != '\0') {
      return iVar5;
    }
    if (0 < (int)uVar3) {
      uVar12 = 0;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0xe0) + uVar12) != -1) {
          lVar6 = FUN_142516630(*(undefined8 *)(param_1 + 0xd0),uVar12 & 0xffffffff);
          uVar2 = *(ushort *)(lVar6 + 8);
          if ((uVar2 & 0x11) == 0) {
            if ((uVar2 & 2) != 0) {
              lVar7 = lVar6 + 10;
              goto joined_r0x0001425c8e5a;
            }
            lVar7 = *(longlong *)(lVar6 + 0x18);
            if (-1 < (short)uVar2) goto LAB_1425c8e60;
LAB_1425c8e29:
            iVar11 = *(int *)(lVar6 + 0xc);
          }
          else {
            lVar7 = 0;
joined_r0x0001425c8e5a:
            if ((short)uVar2 < 0) goto LAB_1425c8e29;
LAB_1425c8e60:
            iVar11 = (int)(short)uVar2 >> 5;
          }
          if (iVar11 <= iVar9) {
            iVar8 = iVar11 + 1;
            lVar6 = 0;
            do {
              if (*(short *)((longlong)puVar1 + lVar6) != *(short *)(lVar7 + lVar6))
              goto LAB_1425c8df0;
              iVar8 = iVar8 + -1;
              lVar6 = lVar6 + 2;
            } while (1 < iVar8);
            if (((iVar5 < 1) || ((puVar1[-1] & 0xfc00) != 0xd800)) || ((*puVar1 & 0xfc00) != 0xdc00)
               ) {
              if (param_3 - iVar5 <= iVar11) {
                return iVar5;
              }
              if ((puVar1[(longlong)iVar11 + -1] & 0xfc00) != 0xd800) {
                return iVar5;
              }
              if ((puVar1[iVar11] & 0xfc00) != 0xdc00) {
                return iVar5;
              }
            }
          }
        }
LAB_1425c8df0:
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar3);
    }
    iVar11 = iVar5 - iVar10;
    iVar9 = iVar9 + iVar10;
    if (iVar9 == 0) {
      return param_3;
    }
  } while( true );
}



// FUNCTION 1425c8f10 FUN_1425c8f10 body=1900 status=ok
// SIG undefined FUN_1425c8f10(void)

ulonglong FUN_1425c8f10(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  longlong lVar1;
  ushort *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ushort *puVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 *local_98;
  undefined8 local_90;
  int local_88;
  undefined1 local_84 [20];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_4 == 0) {
    uVar20 = FUN_1425c9700(param_1,param_2,param_3);
    return uVar20;
  }
  local_68 = param_1;
  uVar8 = FUN_142515360(param_1,param_2,param_3,1);
  if (uVar8 == 0) {
    uVar20 = 0;
  }
  else {
    uVar27 = (ulonglong)uVar8;
    local_98 = local_84;
    local_90 = 0;
    local_88 = 0;
    if (param_4 == 1) {
      uVar15 = *(uint *)(local_68 + 0xf4);
      if ((int)uVar15 < 0x11) {
        local_90 = 0x10;
        uVar15 = 0x10;
      }
      else {
        puVar11 = (undefined1 *)FUN_1424da030(uVar15);
        if (puVar11 == (undefined1 *)0x0) {
          uVar15 = 0;
        }
        else {
          local_90 = (ulonglong)uVar15;
          local_98 = puVar11;
        }
      }
      memset(local_98,0,(longlong)(int)uVar15);
    }
    local_4c = param_3 - uVar8;
    iVar6 = *(int *)(*(longlong *)(local_68 + 0xd0) + 8);
    lVar19 = 0;
    if (*(char *)(local_68 + 0xfc) != '\0') {
      lVar19 = (longlong)iVar6;
    }
    lVar19 = lVar19 + *(longlong *)(local_68 + 0xe0);
    local_70 = param_2;
LAB_1425c9056:
    do {
      lVar17 = (longlong)(int)uVar27;
      local_58 = uVar27;
      if (param_4 == 1) {
        lVar1 = local_70 + lVar17 * 2;
        lVar12 = (longlong)(int)local_4c;
        for (uVar8 = 0; uVar15 = (uint)local_58, (int)uVar8 < iVar6; uVar8 = uVar8 + 1) {
          bVar3 = *(byte *)(lVar19 + (ulonglong)uVar8);
          uVar15 = (uint)bVar3;
          if (bVar3 != 0xff) {
            lVar13 = FUN_142516630(*(undefined8 *)(local_68 + 0xd0),uVar8);
            uVar4 = *(ushort *)(lVar13 + 8);
            if ((uVar4 & 0x11) == 0) {
              if ((uVar4 & 2) != 0) {
                puVar14 = (ushort *)(lVar13 + 10);
                goto joined_r0x0001425c910a;
              }
              puVar14 = *(ushort **)(lVar13 + 0x18);
              if (-1 < (short)uVar4) goto LAB_1425c9110;
LAB_1425c90e1:
              iVar9 = *(int *)(lVar13 + 0xc);
            }
            else {
              puVar14 = (ushort *)0x0;
joined_r0x0001425c910a:
              if ((short)uVar4 < 0) goto LAB_1425c90e1;
LAB_1425c9110:
              iVar9 = (int)(short)uVar4 >> 5;
            }
            if (0xfd < bVar3) {
              uVar15 = 0xffffffff;
              if ((iVar9 != 1) && ((*puVar14 & 0xfc00) == 0xd800)) {
                uVar15 = ~(uint)((puVar14[1] & 0xfc00) == 0xdc00);
              }
              uVar15 = uVar15 + iVar9;
            }
            uVar18 = local_4c;
            if ((int)uVar15 < (int)local_4c) {
              uVar18 = uVar15;
            }
            if ((int)(iVar9 - uVar18) <= (int)local_58) {
              lVar13 = (longlong)iVar9;
              iVar22 = (int)uVar27 + 1 + uVar18;
              uVar23 = local_4c;
              if ((int)uVar15 < (int)local_4c) {
                uVar23 = uVar15;
              }
              lVar16 = (longlong)(int)uVar15;
              if (lVar12 <= (int)uVar15) {
                lVar16 = lVar12;
              }
              local_60 = (longlong)(iVar9 + -1);
              lVar29 = (longlong)(int)(iVar9 - uVar18);
              lVar16 = lVar16 * 2 + lVar13 * -2 + lVar1;
              do {
                iVar21 = local_88 + (int)lVar29;
                iVar24 = (int)local_90;
                if (iVar21 < (int)local_90) {
                  iVar24 = 0;
                }
                iVar21 = iVar21 - iVar24;
                if (local_98[iVar21] == '\0') {
                  lVar28 = lVar17 - lVar29;
                  puVar2 = (ushort *)(local_70 + lVar28 * 2);
                  lVar25 = 0;
                  iVar24 = iVar9 + 1;
                  do {
                    if (*(short *)(lVar16 + lVar25) != *(short *)((longlong)puVar14 + lVar25))
                    goto LAB_1425c91e7;
                    iVar24 = iVar24 + -1;
                    lVar25 = lVar25 + 2;
                  } while (1 < iVar24);
                  if ((((lVar28 < 1) || ((puVar2[-1] & 0xfc00) != 0xd800)) ||
                      ((*puVar2 & 0xfc00) != 0xdc00)) &&
                     ((((int)param_3 - lVar13 <= lVar28 || ((puVar2[local_60] & 0xfc00) != 0xd800))
                      || ((puVar2[lVar13] & 0xfc00) != 0xdc00)))) {
                    if ((int)local_58 == (int)lVar29) {
                      uVar20 = 0;
                      goto LAB_1425c9685;
                    }
                    local_98[iVar21] = 1;
                    local_90 = CONCAT44(local_90._4_4_ + 1,(int)local_90);
                  }
                }
LAB_1425c91e7:
                bVar30 = uVar18 == 0;
                uVar18 = uVar18 - 1;
                if (bVar30) break;
                lVar29 = lVar29 + 1;
                lVar16 = lVar16 + -2;
              } while (iVar22 - uVar23 != (int)lVar29);
            }
          }
        }
LAB_1425c94e9:
        if ((local_4c == 0) && (uVar15 != param_3)) {
          if (local_90._4_4_ == 0) {
            uVar8 = FUN_142515360(local_68,local_70,uVar15,1);
            uVar20 = (ulonglong)uVar8;
            if (uVar8 == 0) break;
            local_4c = uVar15 - uVar8;
            uVar27 = (ulonglong)uVar8;
            if (local_4c == 0) break;
            goto LAB_1425c9056;
          }
          uVar4 = *(ushort *)(local_70 + -2 + lVar17 * 2);
          if ((((int)uVar15 < 2) || ((uVar4 & 0xfc00) != 0xdc00)) ||
             (uVar5 = *(ushort *)(local_70 + (ulonglong)(uVar15 - 2) * 2),
             (uVar5 & 0xfc00) != 0xd800)) {
            cVar7 = FUN_142512880(local_68);
            iVar9 = 1;
          }
          else {
            cVar7 = FUN_142512880(local_68,(uint)uVar4 + (uint)uVar5 * 0x400 + -0x35fdc00);
            iVar9 = 2;
          }
          if (cVar7 != '\0') {
            uVar27 = (ulonglong)(uVar15 - iVar9);
            if (uVar15 - iVar9 == 0) {
              uVar20 = 0;
              break;
            }
            iVar22 = (int)local_90;
            if (iVar9 + local_88 < (int)local_90) {
              iVar22 = 0;
            }
            local_88 = (iVar9 + local_88) - iVar22;
            if (local_98[local_88] != '\0') {
              local_98[local_88] = 0;
              local_90 = CONCAT44(local_90._4_4_ + -1,(int)local_90);
            }
            local_4c = 0;
            goto LAB_1425c9056;
          }
        }
        else if (local_90._4_4_ == 0) {
          uVar20 = (ulonglong)uVar15;
          break;
        }
        lVar17 = (longlong)local_88;
        iVar9 = local_88;
LAB_1425c9590:
        lVar17 = lVar17 + 1;
        if (lVar17 < (int)local_90) goto code_r0x0001425c9595;
        lVar17 = -1;
        do {
          lVar1 = lVar17 + 1;
          lVar17 = lVar17 + 1;
        } while (local_98[lVar1] == '\0');
        local_98[lVar17] = 0;
        iVar22 = (int)local_90 - local_88;
        local_88 = (int)lVar17;
        iVar22 = iVar22 + local_88;
        goto LAB_1425c95ed;
      }
      lVar1 = local_70 + lVar17 * 2;
      lVar12 = (longlong)(int)local_4c;
      uVar20 = 0;
      uVar26 = 0;
      uVar8 = 0;
      while( true ) {
        iVar9 = (int)uVar20;
        uVar15 = (uint)uVar27;
        iVar22 = (int)uVar26;
        if (iVar6 <= iVar9) break;
        bVar3 = *(byte *)(lVar19 + uVar20);
        lVar13 = FUN_142516630(*(undefined8 *)(local_68 + 0xd0),uVar20);
        uVar4 = *(ushort *)(lVar13 + 8);
        if ((uVar4 & 0x11) == 0) {
          if ((uVar4 & 2) != 0) {
            lVar16 = lVar13 + 10;
            goto joined_r0x0001425c935a;
          }
          lVar16 = *(longlong *)(lVar13 + 0x18);
          if (-1 < (short)uVar4) goto LAB_1425c9360;
LAB_1425c9333:
          uVar18 = *(uint *)(lVar13 + 0xc);
        }
        else {
          lVar16 = 0;
joined_r0x0001425c935a:
          if ((short)uVar4 < 0) goto LAB_1425c9333;
LAB_1425c9360:
          uVar18 = (int)(short)uVar4 >> 5;
        }
        uVar23 = (uint)bVar3;
        if (0xfd < bVar3) {
          uVar23 = uVar18;
        }
        uVar10 = local_4c;
        if ((int)uVar23 < (int)local_4c) {
          uVar10 = uVar23;
        }
        if (((int)(uVar18 - uVar10) <= (int)uVar15) && ((int)uVar8 <= (int)uVar10)) {
          local_60 = CONCAT44(local_60._4_4_,iVar9);
          lVar29 = (longlong)(int)uVar18;
          uVar20 = (ulonglong)(int)(uVar18 - uVar10);
          lVar13 = (longlong)(int)uVar23;
          if (lVar12 <= (int)uVar23) {
            lVar13 = lVar12;
          }
          lVar13 = lVar13 * 2 + lVar29 * -2 + lVar1;
          do {
            if (((int)uVar8 < (int)uVar10) || ((longlong)iVar22 < (longlong)uVar20)) {
              lVar28 = lVar17 - uVar20;
              puVar14 = (ushort *)(local_70 + lVar28 * 2);
              lVar25 = 0;
              iVar24 = uVar18 + 1;
              do {
                if (*(short *)(lVar13 + lVar25) != *(short *)(lVar16 + lVar25)) goto LAB_1425c94a0;
                iVar24 = iVar24 + -1;
                lVar25 = lVar25 + 2;
              } while (1 < iVar24);
              if ((((lVar28 < 1) || ((puVar14[-1] & 0xfc00) != 0xd800)) ||
                  ((*puVar14 & 0xfc00) != 0xdc00)) &&
                 (((uVar15 = uVar10, uVar27 = uVar20, (int)param_3 - lVar29 <= lVar28 ||
                   ((puVar14[(int)(uVar18 - 1)] & 0xfc00) != 0xd800)) ||
                  ((puVar14[lVar29] & 0xfc00) != 0xdc00)))) break;
            }
LAB_1425c94a0:
            uVar15 = uVar8;
            uVar27 = uVar26;
            if (lVar17 <= (longlong)uVar20) break;
            uVar20 = uVar20 + 1;
            lVar13 = lVar13 + -2;
            bVar30 = (int)uVar8 < (int)uVar10;
            uVar10 = uVar10 - 1;
          } while (bVar30);
          uVar8 = uVar15;
          uVar26 = uVar27 & 0xffffffff;
          uVar27 = local_58;
        }
        uVar20 = (ulonglong)(iVar9 + 1);
      }
      if (uVar8 == 0 && iVar22 == 0) goto LAB_1425c94e9;
      local_4c = 0;
      uVar20 = 0;
      uVar27 = (ulonglong)(uVar15 - iVar22);
    } while (uVar15 - iVar22 != 0);
LAB_1425c9685:
    if (local_98 != local_84) {
      FUN_1424da110();
    }
  }
  return uVar20;
code_r0x0001425c9595:
  iVar9 = iVar9 + 1;
  if (local_98[lVar17] != '\0') goto code_r0x0001425c95a6;
  goto LAB_1425c9590;
code_r0x0001425c95a6:
  local_98[lVar17] = 0;
  iVar22 = iVar9 - local_88;
  local_88 = iVar9;
LAB_1425c95ed:
  local_90 = CONCAT44(local_90._4_4_ + -1,(int)local_90);
  uVar27 = (ulonglong)(uVar15 - iVar22);
  local_4c = 0;
  goto LAB_1425c9056;
}



// FUNCTION 1425c96c0 Unwind@1425c96c0 body=64 status=ok
// SIG undefined Unwind@1425c96c0(void)

void Unwind_1425c96c0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x80) != param_2 + 0x94) {
    FUN_1424da110();
  }
  return;
}



// FUNCTION 1425c9700 FUN_1425c9700 body=489 status=ok
// SIG undefined FUN_1425c9700(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_1425c9700(longlong param_1,longlong param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0xd0) + 8);
  iVar10 = param_3;
  do {
    iVar6 = FUN_142515360(*(undefined8 *)(param_1 + 200),param_2,iVar10,0);
    if (iVar6 == 0) {
      return 0;
    }
    uVar2 = *(ushort *)(param_2 + -2 + (longlong)iVar6 * 2);
    if (((iVar6 < 2) || ((uVar2 & 0xfc00) != 0xdc00)) ||
       (uVar3 = *(ushort *)(param_2 + (ulonglong)(iVar6 - 2) * 2), (uVar3 & 0xfc00) != 0xd800)) {
      cVar5 = FUN_142512880(param_1);
      iVar10 = -1;
    }
    else {
      cVar5 = FUN_142512880(param_1,(uint)uVar2 + (uint)uVar3 * 0x400 + -0x35fdc00);
      iVar10 = -2;
    }
    if (cVar5 != '\0') {
      return iVar6;
    }
    if (0 < (int)uVar4) {
      uVar13 = 0;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0xe0) + uVar13) != -1) {
          lVar8 = FUN_142516630(*(undefined8 *)(param_1 + 0xd0),uVar13 & 0xffffffff);
          uVar2 = *(ushort *)(lVar8 + 8);
          if ((uVar2 & 0x11) == 0) {
            if ((uVar2 & 2) != 0) {
              lVar9 = lVar8 + 10;
              goto joined_r0x0001425c983a;
            }
            lVar9 = *(longlong *)(lVar8 + 0x18);
            if ((short)uVar2 < 0) goto LAB_1425c9819;
LAB_1425c9840:
            iVar7 = (int)(short)uVar2 >> 5;
          }
          else {
            lVar9 = 0;
joined_r0x0001425c983a:
            if (-1 < (short)uVar2) goto LAB_1425c9840;
LAB_1425c9819:
            iVar7 = *(int *)(lVar8 + 0xc);
          }
          iVar11 = iVar6 - iVar7;
          if (iVar7 <= iVar6) {
            puVar1 = (ushort *)(param_2 + (longlong)iVar11 * 2);
            iVar12 = iVar7 + 1;
            lVar8 = 0;
            do {
              if (*(short *)((longlong)puVar1 + lVar8) != *(short *)(lVar9 + lVar8))
              goto LAB_1425c97e0;
              iVar12 = iVar12 + -1;
              lVar8 = lVar8 + 2;
            } while (1 < iVar12);
            if (((iVar11 < 1) || ((puVar1[-1] & 0xfc00) != 0xd800)) ||
               ((*puVar1 & 0xfc00) != 0xdc00)) {
              if (param_3 - iVar11 <= iVar7) {
                return iVar6;
              }
              if ((puVar1[(longlong)iVar7 + -1] & 0xfc00) != 0xd800) {
                return iVar6;
              }
              if ((puVar1[iVar7] & 0xfc00) != 0xdc00) {
                return iVar6;
              }
            }
          }
        }
LAB_1425c97e0:
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar4);
    }
    iVar10 = iVar10 + iVar6;
    if (iVar10 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 1425c9900 FUN_1425c9900 body=1260 status=ok
// SIG undefined FUN_1425c9900(void)

ulonglong FUN_1425c9900(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 *local_88;
  undefined8 local_80;
  int local_78;
  undefined1 local_74 [20];
  longlong local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_4 == 0) {
    uVar12 = FUN_1425c9e80(param_1,param_2,param_3);
    return uVar12;
  }
  local_60 = param_1;
  uVar4 = FUN_1425155c0(param_1,param_2,param_3,1);
  iVar18 = param_3 - uVar4;
  if (iVar18 != 0) {
    local_88 = local_74;
    local_80 = 0;
    local_78 = 0;
    local_54 = param_3;
    if (param_4 == 1) {
      uVar19 = *(uint *)(local_60 + 0xf8);
      if ((int)uVar19 < 0x11) {
        local_80 = 0x10;
        uVar19 = 0x10;
      }
      else {
        puVar5 = (undefined1 *)FUN_1424da030(uVar19);
        if (puVar5 == (undefined1 *)0x0) {
          local_80._0_4_ = 0;
          uVar19 = (uint)local_80;
        }
        else {
          local_80 = (ulonglong)uVar19;
          local_88 = puVar5;
        }
      }
      memset(local_88,0,(longlong)(int)uVar19);
    }
    uVar19 = *(uint *)(*(longlong *)(local_60 + 0xd0) + 8);
    lVar16 = 0;
    if (*(char *)(local_60 + 0xfc) != '\0') {
      lVar16 = (longlong)(int)uVar19 * 2;
    }
    lVar16 = lVar16 + *(longlong *)(local_60 + 0xe0);
    local_50 = uVar4;
    local_4c = uVar4;
LAB_1425c9a48:
    lVar20 = *(longlong *)(local_60 + 0xe8);
    lVar6 = local_60;
    if (param_4 == 1) {
      if (0 < (int)uVar19) {
        lVar21 = (longlong)(int)local_50;
        uVar12 = 0;
        do {
          iVar14 = *(int *)(*(longlong *)(lVar6 + 0xd8) + uVar12 * 4);
          lVar23 = (longlong)iVar14;
          if (lVar23 != 0) {
            bVar1 = *(byte *)(lVar16 + uVar12);
            uVar4 = (uint)bVar1;
            if (bVar1 == 0xff) {
              lVar20 = lVar20 + lVar23;
            }
            else {
              if (bVar1 == 0xfe) {
                uVar4 = (uint)(lVar23 - 1U);
                if (*(char *)(lVar20 + -1 + lVar23) < -0x40) {
                  uVar4 = FUN_142581150(lVar20,0,lVar23 - 1U & 0xffffffff);
                }
              }
              uVar13 = local_4c;
              if ((int)uVar4 < (int)local_4c) {
                uVar13 = uVar4;
              }
              if ((int)(iVar14 - uVar13) <= iVar18) {
                if ((int)local_4c <= (int)uVar4) {
                  uVar4 = local_4c;
                }
                lVar6 = (longlong)(int)uVar4;
                lVar15 = (param_2 + lVar21) - lVar6;
                iVar7 = iVar14 - uVar13;
                do {
                  if (-0x41 < *(char *)(param_2 + (lVar21 - lVar6))) {
                    iVar9 = (uint)local_80;
                    if (local_78 + iVar7 < (int)(uint)local_80) {
                      iVar9 = 0;
                    }
                    iVar9 = (local_78 + iVar7) - iVar9;
                    if (local_88[iVar9] == '\0') {
                      lVar17 = 0;
                      iVar10 = iVar14 + 1;
                      do {
                        if (*(char *)(lVar15 + lVar17) != *(char *)(lVar20 + lVar17))
                        goto LAB_1425c9b70;
                        iVar10 = iVar10 + -1;
                        lVar17 = lVar17 + 1;
                      } while (1 < iVar10);
                      param_3 = local_54;
                      if (iVar7 == iVar18) goto LAB_1425c9e06;
                      local_88[iVar9] = 1;
                      local_80 = CONCAT44(local_80._4_4_ + 1,(uint)local_80);
                    }
                  }
LAB_1425c9b70:
                  if ((int)lVar6 == 0) break;
                  lVar6 = lVar6 + -1;
                  lVar15 = lVar15 + 1;
                  bVar24 = iVar7 != iVar18;
                  iVar7 = iVar7 + 1;
                } while (bVar24);
              }
              lVar20 = lVar20 + lVar23;
              lVar6 = local_60;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar19);
      }
LAB_1425c9cd2:
      uVar13 = local_50;
      if ((local_4c == 0) && (local_50 != 0)) {
        if (local_80._4_4_ == 0) {
          uVar4 = FUN_1425155c0(lVar6,(int)local_50 + param_2,iVar18);
          iVar18 = iVar18 - uVar4;
          if ((iVar18 != 0) && (uVar8 = uVar4, uVar4 != 0)) goto LAB_1425c9a43;
          param_3 = uVar4 + uVar13;
        }
        else {
          uVar4 = FUN_1425c9fa0(lVar6,(int)local_50 + param_2,iVar18);
          if ((int)uVar4 < 1) goto LAB_1425c9d58;
          iVar18 = iVar18 - uVar4;
          param_3 = local_54;
          if (iVar18 != 0) {
            iVar14 = (uint)local_80;
            if ((int)(local_78 + uVar4) < (int)(uint)local_80) {
              iVar14 = 0;
            }
            local_78 = (local_78 + uVar4) - iVar14;
            if (local_88[local_78] != '\0') {
              local_88[local_78] = 0;
              local_80 = CONCAT44(local_80._4_4_ + -1,(uint)local_80);
            }
            goto LAB_1425c9dd4;
          }
        }
      }
      else {
        param_3 = local_50;
        if (local_80._4_4_ != 0) {
LAB_1425c9d58:
          lVar20 = (longlong)local_78;
          iVar14 = local_78;
LAB_1425c9d70:
          lVar20 = lVar20 + 1;
          if (lVar20 < (int)(uint)local_80) goto code_r0x0001425c9d75;
          lVar20 = -1;
          do {
            lVar6 = lVar20 + 1;
            lVar20 = lVar20 + 1;
          } while (local_88[lVar6] == '\0');
          local_88[lVar20] = 0;
          iVar14 = (uint)local_80 - local_78;
          local_78 = (int)lVar20;
          uVar4 = iVar14 + local_78;
          goto LAB_1425c9dcd;
        }
      }
    }
    else {
      if ((int)uVar19 < 1) {
        uVar4 = 0;
        iVar14 = 0;
      }
      else {
        uVar12 = 0;
        iVar14 = 0;
        uVar4 = 0;
        do {
          uVar13 = *(uint *)(*(longlong *)(local_60 + 0xd8) + uVar12 * 4);
          if ((longlong)(int)uVar13 != 0) {
            uVar8 = (uint)*(byte *)(lVar16 + uVar12);
            if (0xfd < uVar8) {
              uVar8 = uVar13;
            }
            uVar2 = local_4c;
            if ((int)uVar8 < (int)local_4c) {
              uVar2 = uVar8;
            }
            uVar11 = uVar13 - uVar2;
            iVar7 = iVar14;
            uVar3 = uVar4;
            if (((int)uVar11 <= iVar18) && (iVar14 <= (int)uVar2)) {
              if ((int)local_4c <= (int)uVar8) {
                uVar8 = local_4c;
              }
              uVar22 = (longlong)(int)uVar8;
              do {
                if ((-0x41 < *(char *)(param_2 + ((longlong)(int)local_50 - uVar22))) &&
                   (((longlong)iVar14 < (longlong)uVar22 || ((int)uVar4 < (int)uVar11)))) {
                  lVar21 = 0;
                  iVar9 = uVar13 + 1;
                  while (*(char *)(((param_2 + (int)local_50) - (uVar22 & 0xffffffff)) + lVar21) ==
                         *(char *)(lVar20 + lVar21)) {
                    iVar9 = iVar9 + -1;
                    lVar21 = lVar21 + 1;
                    iVar7 = (int)uVar22;
                    uVar3 = uVar11;
                    if (iVar9 < 2) goto LAB_1425c9be2;
                  }
                }
                iVar7 = iVar14;
                uVar3 = uVar4;
                if (iVar18 <= (int)uVar11) break;
                uVar11 = uVar11 + 1;
                bVar24 = (longlong)iVar14 < (longlong)uVar22;
                uVar22 = uVar22 - 1;
              } while (bVar24);
            }
LAB_1425c9be2:
            uVar4 = uVar3;
            lVar20 = lVar20 + (int)uVar13;
            iVar14 = iVar7;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar19);
      }
      if (iVar14 == 0 && uVar4 == 0) goto LAB_1425c9cd2;
      local_4c = 0;
      iVar18 = iVar18 - uVar4;
      param_3 = local_54;
      uVar13 = local_50;
      uVar8 = local_4c;
      if (iVar18 != 0) goto LAB_1425c9a43;
    }
LAB_1425c9e06:
    if (local_88 != local_74) {
      FUN_1424da110();
    }
  }
  return (ulonglong)param_3;
code_r0x0001425c9d75:
  iVar14 = iVar14 + 1;
  if (local_88[lVar20] != '\0') goto code_r0x0001425c9d86;
  goto LAB_1425c9d70;
code_r0x0001425c9d86:
  local_88[lVar20] = 0;
  uVar4 = iVar14 - local_78;
  local_78 = iVar14;
LAB_1425c9dcd:
  local_80 = CONCAT44(local_80._4_4_ + -1,(uint)local_80);
  iVar18 = iVar18 - uVar4;
LAB_1425c9dd4:
  local_4c = 0;
  uVar8 = local_4c;
LAB_1425c9a43:
  local_4c = uVar8;
  local_50 = uVar13 + uVar4;
  goto LAB_1425c9a48;
}



// FUNCTION 1425c9e40 Unwind@1425c9e40 body=64 status=ok
// SIG undefined Unwind@1425c9e40(void)

void Unwind_1425c9e40(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != param_2 + 0x74) {
    FUN_1424da110();
  }
  return;
}



// FUNCTION 1425c9e80 FUN_1425c9e80 body=273 status=ok
// SIG undefined FUN_1425c9e80(void)

int FUN_1425c9e80(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xd0) + 8);
  iVar11 = 0;
  lVar10 = 0;
  if (*(char *)(param_1 + 0xfc) != '\0') {
    lVar10 = (longlong)(int)uVar1 * 2;
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  iVar6 = param_3;
  do {
    iVar3 = FUN_1425155c0(*(undefined8 *)(param_1 + 200),iVar11 + param_2,iVar6,0);
    iVar6 = iVar6 - iVar3;
    if (iVar6 == 0) {
      return param_3;
    }
    iVar3 = iVar3 + iVar11;
    iVar4 = FUN_1425c9fa0(param_1,iVar3 + param_2);
    if (0 < iVar4) {
      return iVar3;
    }
    if (0 < (int)uVar1) {
      lVar5 = *(longlong *)(param_1 + 0xe8);
      uVar7 = 0;
      do {
        iVar11 = *(int *)(*(longlong *)(param_1 + 0xd8) + uVar7 * 4);
        if ((((longlong)iVar11 != 0) && (iVar11 <= iVar6)) &&
           (*(char *)(lVar10 + lVar2 + uVar7) != -1)) {
          iVar8 = iVar11 + 1;
          lVar9 = 0;
          while (*(char *)(iVar3 + param_2 + lVar9) == *(char *)(lVar5 + lVar9)) {
            iVar8 = iVar8 + -1;
            lVar9 = lVar9 + 1;
            if (iVar8 < 2) {
              return iVar3;
            }
          }
        }
        lVar5 = lVar5 + iVar11;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
    iVar11 = iVar3 - iVar4;
    iVar6 = iVar6 + iVar4;
  } while (iVar6 != 0);
  return param_3;
}



// FUNCTION 1425c9fa0 FUN_1425c9fa0 body=306 status=ok
// SIG undefined FUN_1425c9fa0(void)

ulonglong FUN_1425c9fa0(undefined8 param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  
  bVar1 = *param_2;
  if (-1 < (char)bVar1) {
    cVar2 = FUN_142512880(param_1,bVar1);
    return (ulonglong)(-(uint)(cVar2 == '\0') | 1);
  }
  uVar4 = 1;
  uVar5 = 0xfffd;
  if (param_3 == 1) goto LAB_1425ca0bb;
  if (bVar1 < 0xe0) {
    if (bVar1 < 0xc2) goto LAB_1425ca0bb;
    uVar6 = bVar1 & 0x1f;
LAB_1425ca09e:
    if ((byte)(param_2[uVar4] ^ 0x80) < 0x40) {
      uVar5 = uVar6 << 6 | param_2[uVar4] ^ 0x80;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    }
  }
  else {
    if (bVar1 < 0xf0) {
      uVar6 = bVar1 & 0xf;
      if (((byte)(&DAT_14bd49f86)[uVar6] >> (param_2[1] >> 5) & 1) == 0) goto LAB_1425ca0bb;
      bVar7 = param_2[1] & 0x3f;
      uVar4 = 2;
      if (param_3 != 2) {
LAB_1425ca093:
        uVar6 = (uint)bVar7 | uVar6 << 6;
        goto LAB_1425ca09e;
      }
    }
    else {
      if (0xf4 < bVar1) goto LAB_1425ca0bb;
      if (((((uint)(int)(char)(&DAT_14bd49f97)[param_2[1] >> 4] >> (bVar1 - 0xf0 & 0x1f) & 1) == 0)
          || (uVar4 = 2, param_3 == 2)) || (bVar7 = param_2[2] + 0x80, 0x3f < bVar7))
      goto LAB_1425ca0bb;
      uVar6 = param_2[1] & 0x3f | (bVar1 - 0xf0) * 0x40;
      uVar4 = 3;
      if (param_3 != 3) goto LAB_1425ca093;
    }
    uVar4 = (ulonglong)param_3;
  }
LAB_1425ca0bb:
  cVar2 = FUN_142512880(param_1,uVar5);
  uVar3 = (ulonglong)(uint)-(int)uVar4;
  if (cVar2 != '\0') {
    uVar3 = uVar4;
  }
  return uVar3;
}



// FUNCTION 1425ca0e0 FUN_1425ca0e0 body=1622 status=ok
// SIG undefined FUN_1425ca0e0(void)

ulonglong FUN_1425ca0e0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  byte *pbVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  int local_9c;
  int local_98;
  int local_94;
  longlong local_90;
  undefined1 *local_88;
  undefined8 local_80;
  int local_78;
  undefined1 local_74 [24];
  int local_5c;
  ulonglong local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = param_4;
  if (param_4 == 0) {
    uVar19 = FUN_1425ca7b0(param_1,param_2);
    return uVar19;
  }
  local_94 = (int)param_3;
  local_58 = FUN_1425158e0(param_1,param_2,param_3,1);
  if ((int)local_58 == 0) {
    uVar19 = 0;
  }
  else {
    local_88 = local_74;
    local_80 = 0;
    local_78 = 0;
    if (local_98 == 1) {
      iVar16 = *(int *)(param_1 + 0xf8);
      if (iVar16 < 0x11) {
        local_80 = 0x10;
        iVar16 = 0x10;
      }
      else {
        puVar6 = (undefined1 *)FUN_1424da030(iVar16);
        if (puVar6 == (undefined1 *)0x0) {
          iVar16 = (int)local_80;
        }
        else {
          local_80 = CONCAT44(local_80._4_4_,iVar16);
          local_88 = puVar6;
        }
      }
      memset(local_88,0,(longlong)iVar16);
    }
    local_4c = local_94 - (int)local_58;
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0xd0) + 8);
    lVar9 = 0;
    if (*(char *)(param_1 + 0xfc) != '\0') {
      lVar9 = (longlong)(int)uVar3 * 3;
    }
    lVar9 = lVar9 + *(longlong *)(param_1 + 0xe0);
LAB_1425ca211:
    do {
      pbVar10 = *(byte **)(param_1 + 0xe8);
      if (local_98 == 1) {
        if (0 < (int)uVar3) {
          local_90 = (longlong)(int)local_4c;
          uVar19 = 0;
          do {
            iVar16 = *(int *)(*(longlong *)(param_1 + 0xd8) + uVar19 * 4);
            lVar12 = (longlong)iVar16;
            if (lVar12 != 0) {
              bVar1 = *(byte *)(lVar9 + uVar19);
              uVar7 = (uint)bVar1;
              if (bVar1 == 0xff) {
                pbVar10 = pbVar10 + lVar12;
              }
              else {
                if (bVar1 == 0xfe) {
                  uVar7 = 0xffffffff;
                  if ((iVar16 != 1) && (bVar1 = *pbVar10, 0xcc < (byte)(bVar1 + 0xb))) {
                    bVar2 = pbVar10[1];
                    if ((bVar1 & 0xf0) == 0xe0) {
                      if ((((byte)(&DAT_14bd49f86)[bVar1 & 0xf] >> (bVar2 >> 5) & 1) != 0) &&
                         (uVar7 = 0xfffffffe, iVar16 != 2)) {
                        uVar7 = (-0x41 < (char)pbVar10[2]) - 3;
                      }
                    }
                    else if (bVar1 < 0xe0) {
                      uVar7 = ~(uint)((char)bVar2 < -0x40);
                    }
                    else if ((((((byte)(&DAT_14bd49f97)[bVar2 >> 4] >> (bVar1 & 7) & 1) != 0) &&
                              (uVar7 = 0xfffffffe, iVar16 != 2)) && ((char)pbVar10[2] < -0x40)) &&
                            (uVar7 = 0xfffffffd, iVar16 != 3)) {
                      uVar7 = (char)pbVar10[3] < -0x40 ^ 0xfffffffd;
                    }
                  }
                  uVar7 = uVar7 + iVar16;
                }
                uVar11 = local_4c;
                if ((int)uVar7 < (int)local_4c) {
                  uVar11 = uVar7;
                }
                if ((int)(iVar16 - uVar11) <= (int)local_58) {
                  lVar21 = (longlong)(int)(iVar16 - uVar11);
                  iVar17 = (int)local_58 + 1 + uVar11;
                  uVar8 = local_4c;
                  if ((int)uVar7 < (int)local_4c) {
                    uVar8 = uVar7;
                  }
                  lVar13 = (longlong)(int)uVar7;
                  if (local_90 <= (int)uVar7) {
                    lVar13 = local_90;
                  }
                  local_5c = iVar16 + 1;
                  lVar13 = (lVar13 - iVar16) + param_2 + (int)local_58;
                  do {
                    if (-0x41 < *(char *)(param_2 + ((int)local_58 - lVar21))) {
                      iVar15 = local_78 + (int)lVar21;
                      iVar16 = (int)local_80;
                      if (iVar15 < (int)local_80) {
                        iVar16 = 0;
                      }
                      iVar15 = iVar15 - iVar16;
                      if (local_88[iVar15] == '\0') {
                        lVar22 = 0;
                        iVar16 = local_5c;
                        do {
                          if (*(byte *)(lVar13 + lVar22) != pbVar10[lVar22]) goto LAB_1425ca420;
                          iVar16 = iVar16 + -1;
                          lVar22 = lVar22 + 1;
                        } while (1 < iVar16);
                        if ((int)local_58 == (int)lVar21) {
                          uVar19 = 0;
                          goto LAB_1425ca743;
                        }
                        local_88[iVar15] = 1;
                        local_80 = CONCAT44(local_80._4_4_ + 1,(int)local_80);
                      }
                    }
LAB_1425ca420:
                    bVar23 = uVar11 == 0;
                    uVar11 = uVar11 - 1;
                    if (bVar23) break;
                    lVar21 = lVar21 + 1;
                    lVar13 = lVar13 + -1;
                  } while (iVar17 - uVar8 != (int)lVar21);
                }
                pbVar10 = pbVar10 + lVar12;
              }
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar3);
        }
LAB_1425ca57b:
        if ((local_4c != 0) || ((int)local_58 == local_94)) {
          if (local_80._4_4_ != 0) goto LAB_1425ca5d8;
          uVar19 = local_58 & 0xffffffff;
          break;
        }
        if (local_80._4_4_ != 0) {
          cVar4 = *(char *)(param_2 + -1 + (longlong)(int)local_58);
          if (cVar4 < '\0') {
            local_9c = (int)local_58 + -1;
            uVar5 = FUN_142580f00(param_2,0,&local_9c,cVar4,0xfd);
            iVar17 = local_9c;
            cVar4 = FUN_142512880(param_1,uVar5);
            iVar17 = (int)local_58 - iVar17;
            iVar16 = -iVar17;
            if (cVar4 != '\0') {
              iVar16 = iVar17;
            }
            if (iVar16 < 1) goto LAB_1425ca5d8;
          }
          else {
            cVar4 = FUN_142512880(param_1,cVar4);
            iVar16 = 1;
            if (cVar4 == '\0') {
LAB_1425ca5d8:
              lVar12 = (longlong)local_78;
              iVar16 = local_78;
LAB_1425ca5f0:
              lVar12 = lVar12 + 1;
              if (lVar12 < (int)local_80) goto code_r0x0001425ca5f5;
              lVar12 = -1;
              do {
                lVar21 = lVar12 + 1;
                lVar12 = lVar12 + 1;
              } while (local_88[lVar21] == '\0');
              local_88[lVar12] = 0;
              iVar17 = (int)local_80 - local_78;
              local_78 = (int)lVar12;
              iVar17 = iVar17 + local_78;
              goto LAB_1425ca200;
            }
          }
          uVar7 = (int)local_58 - iVar16;
          local_58 = (ulonglong)uVar7;
          if (uVar7 == 0) {
            uVar19 = 0;
            break;
          }
          iVar17 = (int)local_80;
          if (iVar16 + local_78 < (int)local_80) {
            iVar17 = 0;
          }
          local_78 = (iVar16 + local_78) - iVar17;
          if (local_88[local_78] != '\0') {
            local_88[local_78] = 0;
            local_80 = CONCAT44(local_80._4_4_ + -1,(int)local_80);
          }
          local_4c = 0;
          goto LAB_1425ca211;
        }
        uVar7 = FUN_1425158e0(param_1,param_2,local_58,1);
        uVar19 = (ulonglong)uVar7;
        if (uVar7 == 0) break;
        uVar11 = (int)local_58 - uVar7;
        local_4c = uVar11;
      }
      else {
        if ((int)uVar3 < 1) {
          iVar16 = 0;
          uVar7 = 0;
        }
        else {
          local_90 = *(longlong *)(param_1 + 0xd8);
          lVar12 = (longlong)(int)local_58;
          uVar20 = 0;
          uVar7 = 0;
          uVar19 = 0;
          do {
            uVar11 = *(uint *)(local_90 + uVar20 * 4);
            lVar21 = (longlong)(int)uVar11;
            if (lVar21 != 0) {
              uVar8 = (uint)*(byte *)(lVar9 + uVar20);
              if (0xfd < uVar8) {
                uVar8 = uVar11;
              }
              uVar18 = local_4c;
              if ((int)uVar8 < (int)local_4c) {
                uVar18 = uVar8;
              }
              if (((int)(uVar11 - uVar18) <= (int)local_58) && ((int)uVar7 <= (int)uVar18)) {
                uVar14 = (ulonglong)(int)(uVar11 - uVar18);
                local_5c = (int)uVar19;
                lVar13 = (longlong)(int)uVar8;
                if ((longlong)(int)local_4c <= (longlong)(int)uVar8) {
                  lVar13 = (longlong)(int)local_4c;
                }
                lVar13 = (lVar13 - lVar21) + param_2 + lVar12;
                do {
                  if ((-0x41 < *(char *)(param_2 + (lVar12 - uVar14))) &&
                     (((int)uVar7 < (int)uVar18 || ((longlong)local_5c < (longlong)uVar14)))) {
                    lVar22 = 0;
                    iVar16 = uVar11 + 1;
                    while (*(byte *)(lVar13 + lVar22) == pbVar10[lVar22]) {
                      iVar16 = iVar16 + -1;
                      lVar22 = lVar22 + 1;
                      if (iVar16 < 2) {
                        uVar19 = uVar14 & 0xffffffff;
                        uVar7 = uVar18;
                        goto LAB_1425ca483;
                      }
                    }
                  }
                  if (lVar12 <= (longlong)uVar14) break;
                  uVar14 = uVar14 + 1;
                  lVar13 = lVar13 + -1;
                  bVar23 = (int)uVar7 < (int)uVar18;
                  uVar18 = uVar18 - 1;
                } while (bVar23);
              }
LAB_1425ca483:
              pbVar10 = pbVar10 + lVar21;
            }
            iVar16 = (int)uVar19;
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar3);
        }
        if (uVar7 == 0 && iVar16 == 0) goto LAB_1425ca57b;
        local_4c = 0;
        uVar19 = 0;
        uVar11 = (int)local_58 - iVar16;
        uVar7 = uVar11;
      }
      local_58 = (ulonglong)uVar7;
    } while (uVar11 != 0);
LAB_1425ca743:
    if (local_88 != local_74) {
      FUN_1424da110();
    }
  }
  return uVar19;
code_r0x0001425ca5f5:
  iVar16 = iVar16 + 1;
  if (local_88[lVar12] != '\0') goto code_r0x0001425ca606;
  goto LAB_1425ca5f0;
code_r0x0001425ca606:
  local_88[lVar12] = 0;
  iVar17 = iVar16 - local_78;
  local_78 = iVar16;
LAB_1425ca200:
  local_80 = CONCAT44(local_80._4_4_ + -1,(int)local_80);
  local_58 = (ulonglong)(uint)((int)local_58 - iVar17);
  local_4c = 0;
  goto LAB_1425ca211;
}



// FUNCTION 1425ca770 Unwind@1425ca770 body=64 status=ok
// SIG undefined Unwind@1425ca770(void)

void Unwind_1425ca770(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != param_2 + 0x84) {
    FUN_1424da110();
  }
  return;
}



// FUNCTION 1425ca7b0 FUN_1425ca7b0 body=337 status=ok
// SIG undefined FUN_1425ca7b0(void)

void FUN_1425ca7b0(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xd0) + 8);
  lVar10 = 0;
  if (*(char *)(param_1 + 0xfc) != '\0') {
    lVar10 = (longlong)(int)uVar1 * 3;
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  while (iVar4 = FUN_1425158e0(*(undefined8 *)(param_1 + 200),param_2,param_3,0), iVar4 != 0) {
    if (*(char *)(param_2 + -1 + (longlong)iVar4) < '\0') {
      local_4c = iVar4 + -1;
      local_58 = 0xfd;
      FUN_142580f00(param_2,0,&local_4c);
      iVar9 = iVar4 - local_4c;
      cVar3 = FUN_142512880(param_1);
      iVar7 = -iVar9;
      if (cVar3 != '\0') {
        iVar7 = iVar9;
      }
      if (0 < iVar7) break;
    }
    else {
      cVar3 = FUN_142512880(param_1);
      iVar7 = -1;
      if (cVar3 != '\0') break;
    }
    if (0 < (int)uVar1) {
      lVar5 = *(longlong *)(param_1 + 0xe8);
      uVar6 = 0;
      do {
        iVar9 = *(int *)(*(longlong *)(param_1 + 0xd8) + uVar6 * 4);
        lVar8 = (longlong)iVar9;
        if (((lVar8 != 0) && (iVar9 <= iVar4)) && (*(char *)(lVar10 + lVar2 + uVar6) != -1)) {
          iVar9 = iVar9 + 1;
          lVar11 = 0;
          while (*(char *)(((iVar4 + param_2) - lVar8) + lVar11) == *(char *)(lVar5 + lVar11)) {
            iVar9 = iVar9 + -1;
            lVar11 = lVar11 + 1;
            if (iVar9 < 2) goto LAB_1425ca90f;
          }
        }
        lVar5 = lVar5 + lVar8;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
    param_3 = (ulonglong)(uint)(iVar7 + iVar4);
    if (iVar7 + iVar4 == 0) break;
  }
LAB_1425ca90f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1425ca930 FUN_1425ca930 body=1241 status=ok
// SIG undefined FUN_1425ca930(void)

undefined8 * FUN_1425ca930(undefined8 *param_1,int *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
  *param_1 = icu_64::BMPSet::vftable;
  param_1[0x6b] = param_2;
  *(int *)(param_1 + 0x6c) = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
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
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  uVar9 = 0;
  memset((void *)((longlong)param_1 + 0x10c),0,0x200);
  if (*param_2 < 0x801) {
    uVar9 = param_3 - 1;
    if (((1 < param_3) && (param_3 != 2)) && (0x800 < param_2[param_3 - 2])) {
      uVar5 = uVar9 >> 1;
      uVar3 = 0;
      do {
        uVar2 = uVar5;
        if (0x800 < param_2[(int)uVar5]) {
          uVar9 = uVar5;
          uVar2 = uVar3;
        }
        uVar5 = (int)(uVar9 + uVar2) >> 1;
        uVar3 = uVar2;
      } while (uVar5 != uVar2);
    }
  }
  *(uint *)((longlong)param_1 + 0x30c) = uVar9;
  lVar4 = 1;
  do {
    lVar7 = lVar4 * 0x1000;
    lVar1 = param_1[0x6b];
    uVar5 = uVar9;
    if (*(int *)(lVar1 + (longlong)(int)uVar9 * 4) <= lVar7) {
      uVar5 = *(int *)(param_1 + 0x6c) - 1;
      if (((int)uVar9 < (int)uVar5) &&
         (lVar7 < *(int *)(lVar1 + -8 + (longlong)*(int *)(param_1 + 0x6c) * 4))) {
        while (uVar3 = uVar9, uVar9 = (int)(uVar5 + uVar3) >> 1, uVar9 != uVar3) {
          if (lVar7 < *(int *)(lVar1 + (longlong)(int)uVar9 * 4)) {
            uVar5 = uVar9;
            uVar9 = uVar3;
          }
        }
      }
    }
    *(uint *)((longlong)param_1 + lVar4 * 4 + 0x30c) = uVar5;
    lVar4 = lVar4 + 1;
    uVar9 = uVar5;
  } while (lVar4 != 0x11);
  *(int *)(param_1 + 0x6a) = *(int *)(param_1 + 0x6c) + -1;
  uVar9 = *(uint *)(param_1 + 0x69);
  uVar6 = (ulonglong)(int)uVar9;
  lVar4 = param_1[0x6b];
  uVar5 = uVar9;
  if (((*(int *)(lVar4 + uVar6 * 4) < 0xfffe) &&
      (uVar5 = *(uint *)((longlong)param_1 + 0x34c), (int)uVar9 < (int)uVar5)) &&
     (0xfffd < *(int *)(lVar4 + -4 + (longlong)(int)uVar5 * 4))) {
    iVar8 = uVar9 + uVar5;
    while( true ) {
      uVar9 = iVar8 >> 1;
      if (uVar9 == (uint)uVar6) break;
      if (*(int *)(lVar4 + (longlong)(int)uVar9 * 4) < 0xfffe) {
        uVar6 = (ulonglong)uVar9;
        iVar8 = uVar5 + uVar9;
      }
      else {
        iVar8 = uVar9 + (uint)uVar6;
        uVar5 = uVar9;
      }
    }
  }
  *(byte *)(param_1 + 0x21) = (byte)uVar5 & 1;
  FUN_1425cae80(param_1);
  if (*(char *)(param_1 + 0x21) == '\0') {
    *(uint *)((longlong)param_1 + 0x28c) = *(uint *)((longlong)param_1 + 0x28c) & 0xdfffdfff;
    *(uint *)(param_1 + 0x52) = *(uint *)(param_1 + 0x52) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x294) = *(uint *)((longlong)param_1 + 0x294) & 0xdfffdfff;
    *(uint *)(param_1 + 0x53) = *(uint *)(param_1 + 0x53) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x29c) = *(uint *)((longlong)param_1 + 0x29c) & 0xdfffdfff;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x2a4) = *(uint *)((longlong)param_1 + 0x2a4) & 0xdfffdfff;
    *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) & 0xdfffdfff;
    *(uint *)(param_1 + 0x56) = *(uint *)(param_1 + 0x56) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x2b4) = *(uint *)((longlong)param_1 + 0x2b4) & 0xdfffdfff;
    *(uint *)(param_1 + 0x57) = *(uint *)(param_1 + 0x57) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 700) = *(uint *)((longlong)param_1 + 700) & 0xdfffdfff;
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x2c4) = *(uint *)((longlong)param_1 + 0x2c4) & 0xdfffdfff;
    *(uint *)(param_1 + 0x59) = *(uint *)(param_1 + 0x59) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x2cc) = *(uint *)((longlong)param_1 + 0x2cc) & 0xdfffdfff;
    *(uint *)(param_1 + 0x5a) = *(uint *)(param_1 + 0x5a) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x2d4) = *(uint *)((longlong)param_1 + 0x2d4) & 0xdfffdfff;
    *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x2dc) = *(uint *)((longlong)param_1 + 0x2dc) & 0xdfffdfff;
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x2e4) = *(uint *)((longlong)param_1 + 0x2e4) & 0xdfffdfff;
    *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x2ec) = *(uint *)((longlong)param_1 + 0x2ec) & 0xdfffdfff;
    *(uint *)(param_1 + 0x5e) = *(uint *)(param_1 + 0x5e) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x2f4) = *(uint *)((longlong)param_1 + 0x2f4) & 0xdfffdfff;
    *(uint *)(param_1 + 0x5f) = *(uint *)(param_1 + 0x5f) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x2fc) = *(uint *)((longlong)param_1 + 0x2fc) & 0xdfffdfff;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xdfffdfff;
    *(uint *)((longlong)param_1 + 0x304) = *(uint *)((longlong)param_1 + 0x304) & 0xdfffdfff;
    *(uint *)(param_1 + 0x61) = *(uint *)(param_1 + 0x61) & 0xdfffdfff;
  }
  else {
    *(ulonglong *)((longlong)param_1 + 0x10c) =
         *(ulonglong *)((longlong)param_1 + 0x10c) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x114) =
         *(ulonglong *)((longlong)param_1 + 0x114) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x11c) =
         *(ulonglong *)((longlong)param_1 + 0x11c) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x124) =
         *(ulonglong *)((longlong)param_1 + 0x124) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 300) = *(ulonglong *)((longlong)param_1 + 300) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x134) =
         *(ulonglong *)((longlong)param_1 + 0x134) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x13c) =
         *(ulonglong *)((longlong)param_1 + 0x13c) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x144) =
         *(ulonglong *)((longlong)param_1 + 0x144) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x14c) =
         *(ulonglong *)((longlong)param_1 + 0x14c) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x154) =
         *(ulonglong *)((longlong)param_1 + 0x154) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x15c) =
         *(ulonglong *)((longlong)param_1 + 0x15c) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x164) =
         *(ulonglong *)((longlong)param_1 + 0x164) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x16c) =
         *(ulonglong *)((longlong)param_1 + 0x16c) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x174) =
         *(ulonglong *)((longlong)param_1 + 0x174) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x17c) =
         *(ulonglong *)((longlong)param_1 + 0x17c) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x184) =
         *(ulonglong *)((longlong)param_1 + 0x184) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x18c) =
         *(ulonglong *)((longlong)param_1 + 0x18c) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x194) =
         *(ulonglong *)((longlong)param_1 + 0x194) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x19c) =
         *(ulonglong *)((longlong)param_1 + 0x19c) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x1a4) =
         *(ulonglong *)((longlong)param_1 + 0x1a4) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x1ac) =
         *(ulonglong *)((longlong)param_1 + 0x1ac) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x1b4) =
         *(ulonglong *)((longlong)param_1 + 0x1b4) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x1bc) =
         *(ulonglong *)((longlong)param_1 + 0x1bc) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x1c4) =
         *(ulonglong *)((longlong)param_1 + 0x1c4) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x1cc) =
         *(ulonglong *)((longlong)param_1 + 0x1cc) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x1d4) =
         *(ulonglong *)((longlong)param_1 + 0x1d4) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x1dc) =
         *(ulonglong *)((longlong)param_1 + 0x1dc) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x1e4) =
         *(ulonglong *)((longlong)param_1 + 0x1e4) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x1ec) =
         *(ulonglong *)((longlong)param_1 + 0x1ec) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 500) = *(ulonglong *)((longlong)param_1 + 500) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x1fc) =
         *(ulonglong *)((longlong)param_1 + 0x1fc) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x204) =
         *(ulonglong *)((longlong)param_1 + 0x204) | 0x300000003;
    *(ulonglong *)((longlong)param_1 + 0x20c) =
         *(ulonglong *)((longlong)param_1 + 0x20c) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x214) =
         *(ulonglong *)((longlong)param_1 + 0x214) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x21c) =
         *(ulonglong *)((longlong)param_1 + 0x21c) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x224) =
         *(ulonglong *)((longlong)param_1 + 0x224) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x22c) =
         *(ulonglong *)((longlong)param_1 + 0x22c) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x234) =
         *(ulonglong *)((longlong)param_1 + 0x234) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x23c) =
         *(ulonglong *)((longlong)param_1 + 0x23c) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x244) =
         *(ulonglong *)((longlong)param_1 + 0x244) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x24c) =
         *(ulonglong *)((longlong)param_1 + 0x24c) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x254) =
         *(ulonglong *)((longlong)param_1 + 0x254) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x25c) =
         *(ulonglong *)((longlong)param_1 + 0x25c) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x264) =
         *(ulonglong *)((longlong)param_1 + 0x264) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x26c) =
         *(ulonglong *)((longlong)param_1 + 0x26c) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x274) =
         *(ulonglong *)((longlong)param_1 + 0x274) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x27c) =
         *(ulonglong *)((longlong)param_1 + 0x27c) | 0x100000001;
    *(ulonglong *)((longlong)param_1 + 0x284) =
         *(ulonglong *)((longlong)param_1 + 0x284) | 0x100000001;
    *(uint *)((longlong)param_1 + 0x28c) =
         *(uint *)((longlong)param_1 + 0x28c) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x52) = *(uint *)(param_1 + 0x52) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x294) =
         *(uint *)((longlong)param_1 + 0x294) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x53) = *(uint *)(param_1 + 0x53) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x29c) =
         *(uint *)((longlong)param_1 + 0x29c) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x2a4) =
         *(uint *)((longlong)param_1 + 0x2a4) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x2ac) =
         *(uint *)((longlong)param_1 + 0x2ac) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x56) = *(uint *)(param_1 + 0x56) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x2b4) =
         *(uint *)((longlong)param_1 + 0x2b4) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x57) = *(uint *)(param_1 + 0x57) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 700) = *(uint *)((longlong)param_1 + 700) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x2c4) =
         *(uint *)((longlong)param_1 + 0x2c4) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x59) = *(uint *)(param_1 + 0x59) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x2cc) =
         *(uint *)((longlong)param_1 + 0x2cc) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x5a) = *(uint *)(param_1 + 0x5a) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x2d4) =
         *(uint *)((longlong)param_1 + 0x2d4) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x2dc) =
         *(uint *)((longlong)param_1 + 0x2dc) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x2e4) =
         *(uint *)((longlong)param_1 + 0x2e4) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x2ec) =
         *(uint *)((longlong)param_1 + 0x2ec) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x5e) = *(uint *)(param_1 + 0x5e) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x2f4) =
         *(uint *)((longlong)param_1 + 0x2f4) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x5f) = *(uint *)(param_1 + 0x5f) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x2fc) =
         *(uint *)((longlong)param_1 + 0x2fc) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xdfffdfff | 0x2000;
    *(uint *)((longlong)param_1 + 0x304) =
         *(uint *)((longlong)param_1 + 0x304) & 0xdfffdfff | 0x2000;
    *(uint *)(param_1 + 0x61) = *(uint *)(param_1 + 0x61) & 0xdfffdfff | 0x2000;
  }
  return param_1;
}



// FUNCTION 1425cae30 FUN_1425cae30 body=72 status=ok
// SIG undefined FUN_1425cae30(void)

uint FUN_1425cae30(longlong param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x358);
  if (*(int *)(lVar1 + (longlong)(int)param_3 * 4) <= param_2) {
    if (((int)param_3 < (int)param_4) &&
       (param_2 < *(int *)(lVar1 + -4 + (longlong)(int)param_4 * 4))) {
      while (uVar2 = param_3, param_3 = (int)(param_4 + uVar2) >> 1, param_3 != uVar2) {
        if (param_2 < *(int *)(lVar1 + (longlong)(int)param_3 * 4)) {
          param_4 = param_3;
          param_3 = uVar2;
        }
      }
    }
    return param_4 & 0xffffff01;
  }
  return param_3 & 0xffffff01;
}



// FUNCTION 1425cae80 FUN_1425cae80 body=625 status=ok
// SIG undefined FUN_1425cae80(void)

void FUN_1425cae80(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  
  iVar13 = 0;
  do {
    lVar2 = *(longlong *)(param_1 + 0x358);
    iVar6 = iVar13 + 1;
    iVar3 = *(int *)(param_1 + 0x360);
    iVar7 = 0x110000;
    if (iVar6 < iVar3) {
      lVar11 = (longlong)iVar6;
      iVar6 = iVar13 + 2;
      iVar7 = *(int *)(lVar2 + lVar11 * 4);
    }
    uVar9 = *(uint *)(lVar2 + (longlong)iVar13 * 4);
    if (0xff < (int)uVar9) goto LAB_1425caf18;
    iVar13 = uVar9 + 1;
    if ((int)(uVar9 + 1) < iVar7) {
      iVar13 = iVar7;
    }
    uVar4 = 0xff - uVar9;
    uVar8 = ~uVar9 + iVar13;
    if (uVar4 <= ~uVar9 + iVar13) {
      uVar8 = uVar4;
    }
    memset((void *)((longlong)(int)uVar9 + param_1 + 8),(int)CONCAT71((uint7)(uint3)(uVar4 >> 8),1),
           (ulonglong)uVar8 + 1);
    iVar13 = iVar6;
  } while (iVar7 < 0x101);
  lVar2 = *(longlong *)(param_1 + 0x358);
  iVar3 = *(int *)(param_1 + 0x360);
LAB_1425caf18:
  iVar13 = 0;
  lVar11 = 1;
  do {
    lVar12 = lVar11;
    if (iVar3 <= lVar12) {
      uVar9 = 0x110000;
      iVar13 = (int)lVar12;
      break;
    }
    uVar9 = *(uint *)(lVar2 + lVar12 * 4);
    iVar13 = iVar13 + 2;
    lVar11 = lVar12 + 2;
  } while ((int)uVar9 < 0x81);
  uVar8 = *(uint *)(lVar2 + -4 + lVar12 * 4);
  uVar5 = 0x80;
  if (0x80 < (int)uVar8) {
    uVar5 = (ulonglong)uVar8;
  }
  if ((uint)uVar5 < 0x800) {
    do {
      uVar8 = 0x800;
      if ((int)uVar9 < 0x800) {
        uVar8 = uVar9;
      }
      FUN_1425cb1d0(param_1 + 0x10c,uVar5,uVar8);
      uVar5 = 0x800;
      if (0x800 < (int)uVar9) goto LAB_1425cafea;
      iVar6 = iVar13 + 1;
      uVar9 = 0x110000;
      if (iVar6 < *(int *)(param_1 + 0x360)) {
        lVar2 = (longlong)iVar6;
        iVar6 = iVar13 + 2;
        uVar9 = *(uint *)(*(longlong *)(param_1 + 0x358) + lVar2 * 4);
      }
      uVar8 = *(uint *)(*(longlong *)(param_1 + 0x358) + (longlong)iVar13 * 4);
      uVar5 = (ulonglong)uVar8;
      iVar13 = iVar6;
    } while ((int)uVar8 < 0x800);
  }
  if ((uint)uVar5 < 0x10000) {
LAB_1425cafea:
    uVar8 = 0x800;
    do {
      uVar10 = (ulonglong)uVar9;
      if (0xffff < (int)uVar9) {
        uVar10 = 0x10000;
      }
      uVar9 = (uint)uVar10;
      if ((int)uVar5 <= (int)uVar8) {
        uVar5 = (ulonglong)uVar8;
      }
      uVar4 = (uint)uVar5;
      if ((int)uVar4 < (int)uVar9) {
        if ((uVar5 & 0x3f) != 0) {
          puVar1 = (uint *)(param_1 + 0x20c + (ulonglong)((uint)(uVar5 >> 6) & 0x3f) * 4);
          *puVar1 = *puVar1 | 0x10001 << ((byte)(uVar5 >> 0xc) & 0x1f);
          uVar8 = (uVar4 & 0xffffffc0) + 0x40;
          uVar4 = uVar8;
        }
        if ((int)uVar4 < (int)uVar9) {
          if ((int)uVar4 < (int)(uVar9 & 0xffffffc0)) {
            FUN_1425cb1d0(param_1 + 0x20c,(int)uVar4 >> 6,(int)uVar9 >> 6);
          }
          if ((uVar10 & 0x3f) != 0) {
            puVar1 = (uint *)(param_1 + 0x20c + (ulonglong)((uint)(uVar10 >> 6) & 0x3f) * 4);
            *puVar1 = *puVar1 | 0x10001 << ((byte)(uVar9 >> 0xc) & 0x1f);
            uVar8 = (uVar9 & 0xffffffc0) + 0x40;
            uVar9 = uVar8;
          }
        }
      }
      if (uVar9 == 0x10000) {
        return;
      }
      iVar6 = iVar13 + 1;
      uVar9 = 0x110000;
      if (iVar6 < *(int *)(param_1 + 0x360)) {
        lVar2 = (longlong)iVar6;
        iVar6 = iVar13 + 2;
        uVar9 = *(uint *)(*(longlong *)(param_1 + 0x358) + lVar2 * 4);
      }
      uVar4 = *(uint *)(*(longlong *)(param_1 + 0x358) + (longlong)iVar13 * 4);
      uVar5 = (ulonglong)uVar4;
      iVar13 = iVar6;
    } while ((int)uVar4 < 0x10000);
  }
  return;
}



// FUNCTION 1425cb100 FUN_1425cb100 body=198 status=ok
// SIG undefined FUN_1425cb100(void)

undefined8 *
FUN_1425cb100(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = icu_64::BMPSet::vftable;
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x108);
  param_1[0x6b] = param_3;
  *(undefined4 *)(param_1 + 0x6c) = param_4;
  memcpy(param_1 + 1,(void *)(param_2 + 8),0x100);
  memcpy((void *)((longlong)param_1 + 0x10c),(void *)(param_2 + 0x10c),0x100);
  memcpy((void *)((longlong)param_1 + 0x20c),(void *)(param_2 + 0x20c),0x100);
  uVar1 = *(undefined8 *)(param_2 + 0x314);
  uVar2 = *(undefined8 *)(param_2 + 0x31c);
  uVar3 = *(undefined8 *)(param_2 + 0x324);
  uVar4 = *(undefined8 *)(param_2 + 0x32c);
  uVar5 = *(undefined8 *)(param_2 + 0x334);
  uVar6 = *(undefined8 *)(param_2 + 0x33c);
  uVar7 = *(undefined8 *)(param_2 + 0x344);
  *(undefined8 *)((longlong)param_1 + 0x30c) = *(undefined8 *)(param_2 + 0x30c);
  *(undefined8 *)((longlong)param_1 + 0x314) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x31c) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x324) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x32c) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x334) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x33c) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x344) = uVar7;
  *(undefined8 *)((longlong)param_1 + 0x34c) = *(undefined8 *)(param_2 + 0x34c);
  return param_1;
}



// FUNCTION 1425cb1d0 FUN_1425cb1d0 body=785 status=ok
// SIG undefined FUN_1425cb1d0(void)

void FUN_1425cb1d0(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  
  iVar13 = (int)param_2 >> 6;
  uVar18 = 1 << ((byte)iVar13 & 0x1f);
  uVar9 = param_2 & 0x3f;
  uVar12 = (ulonglong)uVar9;
  if (param_2 + 1 == param_3) {
    param_1[uVar9] = param_1[uVar9] | uVar18;
    return;
  }
  iVar10 = (int)param_3 >> 6;
  uVar15 = param_3 & 0x3f;
  if (iVar13 == iVar10) {
    if (uVar15 <= uVar9) {
      return;
    }
    uVar14 = uVar15 - uVar12;
    if (7 < uVar14) {
      uVar17 = uVar14 & 0xfffffffffffffff8;
      uVar11 = 0;
      do {
        puVar2 = param_1 + uVar12 + uVar11;
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar1 = param_1 + uVar12 + uVar11 + 4;
        uVar9 = *puVar1;
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar1 = param_1 + uVar12 + uVar11;
        *puVar1 = *puVar2 | uVar18;
        puVar1[1] = uVar6 | uVar18;
        puVar1[2] = uVar7 | uVar18;
        puVar1[3] = uVar8 | uVar18;
        puVar1 = param_1 + uVar12 + uVar11 + 4;
        *puVar1 = uVar9 | uVar18;
        puVar1[1] = uVar3 | uVar18;
        puVar1[2] = uVar4 | uVar18;
        puVar1[3] = uVar5 | uVar18;
        uVar11 = uVar11 + 8;
      } while (uVar17 != uVar11);
      uVar12 = uVar17 + uVar12;
      if (uVar14 == uVar17) {
        return;
      }
    }
    do {
      param_1[uVar12] = param_1[uVar12] | uVar18;
      uVar12 = uVar12 + 1;
    } while (uVar15 != uVar12);
    return;
  }
  if (uVar9 == 0) goto LAB_1425cb2b0;
  if (uVar9 < 0x3d) {
    uVar11 = 0x40 - uVar12;
    uVar14 = (ulonglong)((uint)uVar11 & 0xfffffffc);
    lVar16 = 0;
    do {
      puVar1 = (uint *)((longlong)param_1 + lVar16 + uVar12 * 4);
      uVar9 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      puVar2 = (uint *)((longlong)param_1 + lVar16 + uVar12 * 4);
      *puVar2 = *puVar1 | uVar18;
      puVar2[1] = uVar9 | uVar18;
      puVar2[2] = uVar3 | uVar18;
      puVar2[3] = uVar4 | uVar18;
      lVar16 = lVar16 + 0x10;
    } while ((uVar11 >> 2 & 0x3fffffff) << 4 != lVar16);
    uVar12 = uVar14 + uVar12;
    if (uVar11 != uVar14) goto LAB_1425cb2a0;
  }
  else {
LAB_1425cb2a0:
    do {
      param_1[uVar12] = param_1[uVar12] | uVar18;
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0x40);
  }
  iVar13 = iVar13 + 1;
LAB_1425cb2b0:
  if (iVar13 < iVar10) {
    uVar9 = ~(-1 << ((byte)iVar10 & 0x1f));
    if (0x7ff < (int)param_3) {
      uVar9 = 0xffffffff;
    }
    uVar9 = (uVar9 >> ((byte)iVar13 & 0x1f)) << ((byte)iVar13 & 0x1f);
    *param_1 = *param_1 | uVar9;
    param_1[1] = param_1[1] | uVar9;
    param_1[2] = param_1[2] | uVar9;
    param_1[3] = param_1[3] | uVar9;
    param_1[4] = param_1[4] | uVar9;
    param_1[5] = param_1[5] | uVar9;
    param_1[6] = param_1[6] | uVar9;
    param_1[7] = param_1[7] | uVar9;
    param_1[8] = param_1[8] | uVar9;
    param_1[9] = param_1[9] | uVar9;
    param_1[10] = param_1[10] | uVar9;
    param_1[0xb] = param_1[0xb] | uVar9;
    param_1[0xc] = param_1[0xc] | uVar9;
    param_1[0xd] = param_1[0xd] | uVar9;
    param_1[0xe] = param_1[0xe] | uVar9;
    param_1[0xf] = param_1[0xf] | uVar9;
    param_1[0x10] = param_1[0x10] | uVar9;
    param_1[0x11] = param_1[0x11] | uVar9;
    param_1[0x12] = param_1[0x12] | uVar9;
    param_1[0x13] = param_1[0x13] | uVar9;
    param_1[0x14] = param_1[0x14] | uVar9;
    param_1[0x15] = param_1[0x15] | uVar9;
    param_1[0x16] = param_1[0x16] | uVar9;
    param_1[0x17] = param_1[0x17] | uVar9;
    param_1[0x18] = param_1[0x18] | uVar9;
    param_1[0x19] = param_1[0x19] | uVar9;
    param_1[0x1a] = param_1[0x1a] | uVar9;
    param_1[0x1b] = param_1[0x1b] | uVar9;
    param_1[0x1c] = param_1[0x1c] | uVar9;
    param_1[0x1d] = param_1[0x1d] | uVar9;
    param_1[0x1e] = param_1[0x1e] | uVar9;
    param_1[0x1f] = param_1[0x1f] | uVar9;
    param_1[0x20] = param_1[0x20] | uVar9;
    param_1[0x21] = param_1[0x21] | uVar9;
    param_1[0x22] = param_1[0x22] | uVar9;
    param_1[0x23] = param_1[0x23] | uVar9;
    param_1[0x24] = param_1[0x24] | uVar9;
    param_1[0x25] = param_1[0x25] | uVar9;
    param_1[0x26] = param_1[0x26] | uVar9;
    param_1[0x27] = param_1[0x27] | uVar9;
    param_1[0x28] = param_1[0x28] | uVar9;
    param_1[0x29] = param_1[0x29] | uVar9;
    param_1[0x2a] = param_1[0x2a] | uVar9;
    param_1[0x2b] = param_1[0x2b] | uVar9;
    param_1[0x2c] = param_1[0x2c] | uVar9;
    param_1[0x2d] = param_1[0x2d] | uVar9;
    param_1[0x2e] = param_1[0x2e] | uVar9;
    param_1[0x2f] = param_1[0x2f] | uVar9;
    param_1[0x30] = param_1[0x30] | uVar9;
    param_1[0x31] = param_1[0x31] | uVar9;
    param_1[0x32] = param_1[0x32] | uVar9;
    param_1[0x33] = param_1[0x33] | uVar9;
    param_1[0x34] = param_1[0x34] | uVar9;
    param_1[0x35] = param_1[0x35] | uVar9;
    param_1[0x36] = param_1[0x36] | uVar9;
    param_1[0x37] = param_1[0x37] | uVar9;
    param_1[0x38] = param_1[0x38] | uVar9;
    param_1[0x39] = param_1[0x39] | uVar9;
    param_1[0x3a] = param_1[0x3a] | uVar9;
    param_1[0x3b] = param_1[0x3b] | uVar9;
    param_1[0x3c] = param_1[0x3c] | uVar9;
    param_1[0x3d] = param_1[0x3d] | uVar9;
    param_1[0x3e] = param_1[0x3e] | uVar9;
    param_1[0x3f] = param_1[0x3f] | uVar9;
  }
  uVar9 = 0x80000000;
  if (iVar10 != 0x20) {
    uVar9 = 1 << ((byte)iVar10 & 0x1f);
  }
  if (uVar15 != 0) {
    if (uVar15 < 4) {
      uVar12 = 0;
    }
    else {
      uVar12 = (ulonglong)(param_3 & 0x3c);
      lVar16 = 0;
      do {
        puVar1 = (uint *)((longlong)param_1 + lVar16);
        uVar18 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        puVar2 = (uint *)((longlong)param_1 + lVar16);
        *puVar2 = *puVar1 | uVar9;
        puVar2[1] = uVar18 | uVar9;
        puVar2[2] = uVar3 | uVar9;
        puVar2[3] = uVar4 | uVar9;
        lVar16 = lVar16 + 0x10;
      } while ((ulonglong)(uVar15 >> 2) << 4 != lVar16);
      if (uVar12 == uVar15) {
        return;
      }
    }
    do {
      param_1[uVar12] = param_1[uVar12] | uVar9;
      uVar12 = uVar12 + 1;
    } while (uVar15 != uVar12);
  }
  return;
}



// FUNCTION 1425cb4f0 FUN_1425cb4f0 body=300 status=ok
// SIG undefined FUN_1425cb4f0(void)

ulonglong FUN_1425cb4f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 < 0x100) {
    return (ulonglong)*(byte *)(param_1 + 8 + (ulonglong)param_2);
  }
  if (param_2 < 0x800) {
    uVar6 = *(uint *)(param_1 + 0x10c + (ulonglong)(param_2 & 0x3f) * 4);
    return (ulonglong)CONCAT31((int3)(uVar6 >> 8),(uVar6 >> (param_2 >> 6 & 0x1f) & 1) != 0);
  }
  if ((param_2 < 0xd800) || ((param_2 & 0xffffe000) == 0xe000)) {
    uVar3 = param_2 >> 0xc;
    uVar6 = *(uint *)(param_1 + 0x20c + (ulonglong)(param_2 >> 6 & 0x3f) * 4) >>
            ((byte)uVar3 & 0x1f) & 0x10001;
    if (uVar6 < 2) {
      return (ulonglong)uVar6;
    }
    iVar5 = *(int *)(param_1 + 0x30c + (ulonglong)uVar3 * 4);
    uVar4 = (ulonglong)iVar5;
    lVar1 = *(longlong *)(param_1 + 0x358);
    if (*(int *)(lVar1 + uVar4 * 4) <= (int)param_2) {
      uVar6 = *(uint *)(param_1 + 0x310 + (ulonglong)uVar3 * 4);
      uVar2 = (ulonglong)uVar6;
      if ((iVar5 < (int)uVar6) && ((int)param_2 < *(int *)(lVar1 + -4 + (longlong)(int)uVar6 * 4)))
      {
        iVar5 = iVar5 + uVar6;
        while( true ) {
          uVar6 = iVar5 >> 1;
          if (uVar6 == (uint)uVar4) break;
          if ((int)param_2 < *(int *)(lVar1 + (longlong)(int)uVar6 * 4)) {
            iVar5 = uVar6 + (uint)uVar4;
            uVar2 = (ulonglong)uVar6;
          }
          else {
            uVar4 = (ulonglong)uVar6;
            iVar5 = (int)uVar2 + uVar6;
          }
        }
      }
      goto LAB_1425cb619;
    }
  }
  else {
    if (0x10ffff < param_2) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x340);
    uVar4 = (ulonglong)iVar5;
    lVar1 = *(longlong *)(param_1 + 0x358);
    if (*(int *)(lVar1 + uVar4 * 4) <= (int)param_2) {
      uVar6 = *(uint *)(param_1 + 0x350);
      uVar2 = (ulonglong)uVar6;
      if ((iVar5 < (int)uVar6) && ((int)param_2 < *(int *)(lVar1 + -4 + (longlong)(int)uVar6 * 4)))
      {
        iVar5 = iVar5 + uVar6;
        while( true ) {
          uVar6 = iVar5 >> 1;
          if (uVar6 == (uint)uVar4) break;
          if ((int)param_2 < *(int *)(lVar1 + (longlong)(int)uVar6 * 4)) {
            iVar5 = uVar6 + (uint)uVar4;
            uVar2 = (ulonglong)uVar6;
          }
          else {
            uVar4 = (ulonglong)uVar6;
            iVar5 = (int)uVar2 + uVar6;
          }
        }
      }
      goto LAB_1425cb619;
    }
  }
  uVar2 = uVar4 & 0xffffffff;
LAB_1425cb619:
  return uVar2 & 0xffffffffffffff01;
}



// FUNCTION 1425cb620 FUN_1425cb620 body=1150 status=ok
// SIG undefined FUN_1425cb620(void)

ushort * FUN_1425cb620(longlong param_1,ushort *param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  uVar2 = *(uint *)(param_1 + 0x350);
  uVar3 = *(uint *)(param_1 + 0x34c);
  uVar7 = (int)(uVar3 + uVar2) >> 1;
  uVar4 = *(uint *)(param_1 + 0x340);
  uVar5 = *(uint *)(param_1 + 0x344);
  uVar12 = (int)(uVar4 + uVar5) >> 1;
  lVar6 = *(longlong *)(param_1 + 0x358);
  if (param_4 == 0) {
    do {
      uVar1 = *param_2;
      puVar11 = param_2;
      if (uVar1 < 0x100) {
        if (*(char *)(param_1 + 8 + (ulonglong)uVar1) != '\0') {
          return param_2;
        }
      }
      else {
        if (uVar1 < 0x800) {
          uVar15 = *(uint *)(param_1 + 0x10c + (ulonglong)(uVar1 & 0x3f) * 4) >> (uVar1 >> 6 & 0x1f)
          ;
        }
        else if ((ushort)(uVar1 + 0x2000) < 0xf800) {
          uVar14 = (uint)uVar1;
          uVar13 = *(uint *)(param_1 + 0x20c + (ulonglong)(uVar1 >> 6 & 0x3f) * 4) >>
                   (byte)(uVar1 >> 0xc) & 0x10001;
          if (uVar13 < 2) {
            if (uVar13 != 0) {
              return param_2;
            }
            goto LAB_1425cb8cf;
          }
          uVar13 = *(uint *)(param_1 + 0x30c + (ulonglong)(uVar1 >> 0xc) * 4);
          uVar16 = (ulonglong)(int)uVar13;
          uVar15 = uVar13;
          if (((*(int *)(lVar6 + uVar16 * 4) <= (int)uVar14) &&
              (uVar15 = *(uint *)(param_1 + 0x310 + (ulonglong)(uVar1 >> 0xc) * 4),
              (int)uVar13 < (int)uVar15)) &&
             ((int)uVar14 < *(int *)(lVar6 + -4 + (longlong)(int)uVar15 * 4))) {
            iVar10 = uVar15 + uVar13;
            while( true ) {
              uVar13 = iVar10 >> 1;
              if (uVar13 == (uint)uVar16) break;
              if ((int)uVar14 < *(int *)(lVar6 + (longlong)(int)uVar13 * 4)) {
                iVar10 = uVar13 + (uint)uVar16;
                uVar15 = uVar13;
              }
              else {
                uVar16 = (ulonglong)uVar13;
                iVar10 = uVar15 + uVar13;
              }
            }
          }
        }
        else {
          uVar13 = (uint)uVar1;
          if (((uVar13 < 0xdc00) && (puVar11 = param_2 + 1, puVar11 != param_3)) &&
             (0xfbff < (ushort)(*puVar11 + 0x2000))) {
            iVar10 = (uint)uVar1 * 0x400 + (uint)*puVar11 + -0x35fdc00;
            uVar15 = uVar3;
            if ((((*(int *)(lVar6 + (longlong)(int)uVar3 * 4) <= iVar10) &&
                 (uVar15 = uVar2, (int)uVar3 < (int)uVar2)) &&
                (iVar10 < *(int *)(lVar6 + -4 + (longlong)(int)uVar2 * 4))) &&
               (uVar13 = uVar7, uVar14 = uVar3, uVar7 != uVar3)) {
              do {
                uVar9 = uVar13;
                if (iVar10 < *(int *)(lVar6 + (longlong)(int)uVar13 * 4)) {
                  uVar9 = uVar14;
                  uVar15 = uVar13;
                }
                uVar13 = (int)(uVar15 + uVar9) >> 1;
                uVar14 = uVar9;
              } while (uVar13 != uVar9);
            }
          }
          else {
            puVar11 = param_2;
            uVar15 = uVar4;
            if (((*(int *)(lVar6 + (longlong)(int)uVar4 * 4) <= (int)uVar13) &&
                (uVar15 = uVar5, (int)uVar4 < (int)uVar5)) &&
               (((int)uVar13 < *(int *)(lVar6 + -4 + (longlong)(int)uVar5 * 4) &&
                (uVar14 = uVar12, uVar9 = uVar4, uVar12 != uVar4)))) {
              do {
                uVar8 = uVar14;
                if ((int)uVar13 < *(int *)(lVar6 + (longlong)(int)uVar14 * 4)) {
                  uVar8 = uVar9;
                  uVar15 = uVar14;
                }
                uVar14 = (int)(uVar15 + uVar8) >> 1;
                uVar9 = uVar8;
              } while (uVar14 != uVar8);
            }
          }
        }
        if ((uVar15 & 1) != 0) {
          return param_2;
        }
      }
LAB_1425cb8cf:
      param_2 = puVar11 + 1;
    } while (param_2 < param_3);
  }
  else {
    do {
      uVar1 = *param_2;
      puVar11 = param_2;
      if (uVar1 < 0x100) {
        if (*(char *)(param_1 + 8 + (ulonglong)uVar1) == '\0') {
          return param_2;
        }
      }
      else {
        if (uVar1 < 0x800) {
          uVar15 = *(uint *)(param_1 + 0x10c + (ulonglong)(uVar1 & 0x3f) * 4) >> (uVar1 >> 6 & 0x1f)
          ;
        }
        else {
          if ((ushort)(uVar1 + 0x2000) < 0xf800) {
            uVar15 = (uint)uVar1;
            uVar13 = *(uint *)(param_1 + 0x20c + (ulonglong)(uVar1 >> 6 & 0x3f) * 4) >>
                     (byte)(uVar1 >> 0xc) & 0x10001;
            if (1 < uVar13) {
              uVar14 = *(uint *)(param_1 + 0x30c + (ulonglong)(uVar1 >> 0xc) * 4);
              uVar16 = (ulonglong)(int)uVar14;
              uVar13 = uVar14;
              if (((*(int *)(lVar6 + uVar16 * 4) <= (int)uVar15) &&
                  (uVar13 = *(uint *)(param_1 + 0x310 + (ulonglong)(uVar1 >> 0xc) * 4),
                  (int)uVar14 < (int)uVar13)) &&
                 ((int)uVar15 < *(int *)(lVar6 + -4 + (longlong)(int)uVar13 * 4))) {
                iVar10 = uVar14 + uVar13;
                while( true ) {
                  uVar14 = iVar10 >> 1;
                  if (uVar14 == (uint)uVar16) break;
                  if ((int)uVar15 < *(int *)(lVar6 + (longlong)(int)uVar14 * 4)) {
                    iVar10 = (uint)uVar16 + uVar14;
                    uVar13 = uVar14;
                  }
                  else {
                    uVar16 = (ulonglong)uVar14;
                    iVar10 = uVar14 + uVar13;
                  }
                }
              }
              uVar13 = uVar13 & 1;
            }
            if (uVar13 == 0) {
              return param_2;
            }
            goto LAB_1425cb69f;
          }
          uVar13 = (uint)uVar1;
          if (((uVar13 < 0xdc00) && (puVar11 = param_2 + 1, puVar11 != param_3)) &&
             (0xfbff < (ushort)(*puVar11 + 0x2000))) {
            iVar10 = (uint)uVar1 * 0x400 + (uint)*puVar11 + -0x35fdc00;
            uVar15 = uVar3;
            if ((((*(int *)(lVar6 + (longlong)(int)uVar3 * 4) <= iVar10) &&
                 (uVar15 = uVar2, (int)uVar3 < (int)uVar2)) &&
                (iVar10 < *(int *)(lVar6 + -4 + (longlong)(int)uVar2 * 4))) &&
               (uVar13 = uVar7, uVar14 = uVar3, uVar7 != uVar3)) {
              do {
                uVar9 = uVar13;
                if (iVar10 < *(int *)(lVar6 + (longlong)(int)uVar13 * 4)) {
                  uVar9 = uVar14;
                  uVar15 = uVar13;
                }
                uVar13 = (int)(uVar15 + uVar9) >> 1;
                uVar14 = uVar9;
              } while (uVar13 != uVar9);
            }
          }
          else {
            puVar11 = param_2;
            uVar15 = uVar4;
            if (((*(int *)(lVar6 + (longlong)(int)uVar4 * 4) <= (int)uVar13) &&
                (uVar15 = uVar5, (int)uVar4 < (int)uVar5)) &&
               (((int)uVar13 < *(int *)(lVar6 + -4 + (longlong)(int)uVar5 * 4) &&
                (uVar14 = uVar12, uVar9 = uVar4, uVar12 != uVar4)))) {
              do {
                uVar8 = uVar14;
                if ((int)uVar13 < *(int *)(lVar6 + (longlong)(int)uVar14 * 4)) {
                  uVar8 = uVar9;
                  uVar15 = uVar14;
                }
                uVar14 = (int)(uVar15 + uVar8) >> 1;
                uVar9 = uVar8;
              } while (uVar14 != uVar8);
            }
          }
        }
        if ((uVar15 & 1) == 0) {
          return param_2;
        }
      }
LAB_1425cb69f:
      param_2 = puVar11 + 1;
    } while (param_2 < param_3);
  }
  return param_2;
}



// FUNCTION 1425cbae0 FUN_1425cbae0 body=1190 status=ok
// SIG undefined FUN_1425cbae0(void)

longlong FUN_1425cbae0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  uVar3 = *(uint *)(param_1 + 0x350);
  uVar4 = *(uint *)(param_1 + 0x34c);
  uVar8 = (int)(uVar4 + uVar3) >> 1;
  uVar5 = *(uint *)(param_1 + 0x340);
  uVar6 = *(uint *)(param_1 + 0x344);
  uVar9 = (int)(uVar5 + uVar6) >> 1;
  lVar7 = *(longlong *)(param_1 + 0x358);
  if (param_4 == 0) {
    do {
      lVar1 = param_3 + -2;
      uVar2 = *(ushort *)(param_3 + -2);
      if (uVar2 < 0x100) {
        if (*(char *)(param_1 + 8 + (ulonglong)uVar2) != '\0') {
          return param_3;
        }
      }
      else {
        if (uVar2 < 0x800) {
          uVar14 = *(uint *)(param_1 + 0x10c + (ulonglong)(uVar2 & 0x3f) * 4) >> (uVar2 >> 6 & 0x1f)
          ;
joined_r0x0001425cbf94:
          uVar14 = uVar14 & 1;
        }
        else {
          if (0xf7ff < (ushort)(uVar2 + 0x2000)) {
            uVar10 = (uint)uVar2;
            if (((0xdbff < uVar10) && (lVar1 != param_2)) &&
               (0xfbff < (ushort)(*(ushort *)(param_3 + -4) + 0x2400))) {
              iVar15 = (uint)*(ushort *)(param_3 + -4) * 0x400 + uVar10 + -0x35fdc00;
              uVar10 = uVar4;
              if ((((*(int *)(lVar7 + (longlong)(int)uVar4 * 4) <= iVar15) &&
                   (uVar10 = uVar3, (int)uVar4 < (int)uVar3)) &&
                  (iVar15 < *(int *)(lVar7 + -4 + (longlong)(int)uVar3 * 4))) &&
                 (uVar14 = uVar8, uVar16 = uVar4, uVar8 != uVar4)) {
                do {
                  uVar13 = uVar14;
                  if (iVar15 < *(int *)(lVar7 + (longlong)(int)uVar14 * 4)) {
                    uVar13 = uVar16;
                    uVar10 = uVar14;
                  }
                  uVar14 = (int)(uVar10 + uVar13) >> 1;
                  uVar16 = uVar13;
                } while (uVar14 != uVar13);
              }
              if ((uVar10 & 1) != 0) {
                return param_3;
              }
              lVar1 = param_3 + -4;
              goto LAB_1425cbd9c;
            }
            uVar14 = uVar5;
            if (((*(int *)(lVar7 + (longlong)(int)uVar5 * 4) <= (int)uVar10) &&
                (uVar14 = uVar6, (int)uVar5 < (int)uVar6)) &&
               (((int)uVar10 < *(int *)(lVar7 + -4 + (longlong)(int)uVar6 * 4) &&
                (uVar16 = uVar9, uVar13 = uVar5, uVar9 != uVar5)))) {
              do {
                uVar12 = uVar16;
                if ((int)uVar10 < *(int *)(lVar7 + (longlong)(int)uVar16 * 4)) {
                  uVar12 = uVar13;
                  uVar14 = uVar16;
                }
                uVar16 = (int)(uVar14 + uVar12) >> 1;
                uVar13 = uVar12;
              } while (uVar16 != uVar12);
            }
            goto joined_r0x0001425cbf94;
          }
          uVar10 = (uint)uVar2;
          uVar14 = *(uint *)(param_1 + 0x20c + (ulonglong)(uVar2 >> 6 & 0x3f) * 4) >>
                   (byte)(uVar2 >> 0xc) & 0x10001;
          if (1 < uVar14) {
            uVar16 = *(uint *)(param_1 + 0x30c + (ulonglong)(uVar2 >> 0xc) * 4);
            uVar11 = (ulonglong)(int)uVar16;
            uVar14 = uVar16;
            if (((*(int *)(lVar7 + uVar11 * 4) <= (int)uVar10) &&
                (uVar14 = *(uint *)(param_1 + 0x310 + (ulonglong)(uVar2 >> 0xc) * 4),
                (int)uVar16 < (int)uVar14)) &&
               ((int)uVar10 < *(int *)(lVar7 + -4 + (longlong)(int)uVar14 * 4))) {
              iVar15 = uVar14 + uVar16;
              while( true ) {
                uVar16 = iVar15 >> 1;
                if (uVar16 == (uint)uVar11) break;
                if ((int)uVar10 < *(int *)(lVar7 + (longlong)(int)uVar16 * 4)) {
                  iVar15 = uVar16 + (uint)uVar11;
                  uVar14 = uVar16;
                }
                else {
                  uVar11 = (ulonglong)uVar16;
                  iVar15 = uVar14 + uVar16;
                }
              }
            }
            goto joined_r0x0001425cbf94;
          }
        }
        if (uVar14 != 0) {
          return param_3;
        }
      }
LAB_1425cbd9c:
      param_3 = lVar1;
    } while (param_3 != param_2);
  }
  else {
    do {
      lVar1 = param_3 + -2;
      uVar2 = *(ushort *)(param_3 + -2);
      if (uVar2 < 0x100) {
        if (*(char *)(param_1 + 8 + (ulonglong)uVar2) == '\0') {
          return param_3;
        }
      }
      else {
        if (uVar2 < 0x800) {
          uVar14 = *(uint *)(param_1 + 0x10c + (ulonglong)(uVar2 & 0x3f) * 4) >> (uVar2 >> 6 & 0x1f)
          ;
joined_r0x0001425cbd64:
          uVar14 = uVar14 & 1;
        }
        else {
          if (0xf7ff < (ushort)(uVar2 + 0x2000)) {
            uVar10 = (uint)uVar2;
            if (((0xdbff < uVar10) && (lVar1 != param_2)) &&
               (0xfbff < (ushort)(*(ushort *)(param_3 + -4) + 0x2400))) {
              iVar15 = (uint)*(ushort *)(param_3 + -4) * 0x400 + uVar10 + -0x35fdc00;
              uVar10 = uVar4;
              if (((*(int *)(lVar7 + (longlong)(int)uVar4 * 4) <= iVar15) &&
                  (uVar10 = uVar3, (int)uVar4 < (int)uVar3)) &&
                 ((iVar15 < *(int *)(lVar7 + -4 + (longlong)(int)uVar3 * 4) &&
                  (uVar14 = uVar8, uVar16 = uVar4, uVar8 != uVar4)))) {
                do {
                  uVar13 = uVar14;
                  if (iVar15 < *(int *)(lVar7 + (longlong)(int)uVar14 * 4)) {
                    uVar13 = uVar16;
                    uVar10 = uVar14;
                  }
                  uVar14 = (int)(uVar10 + uVar13) >> 1;
                  uVar16 = uVar13;
                } while (uVar14 != uVar13);
              }
              if ((uVar10 & 1) == 0) {
                return param_3;
              }
              lVar1 = param_3 + -4;
              goto LAB_1425cbb6c;
            }
            uVar14 = uVar5;
            if (((*(int *)(lVar7 + (longlong)(int)uVar5 * 4) <= (int)uVar10) &&
                (uVar14 = uVar6, (int)uVar5 < (int)uVar6)) &&
               (((int)uVar10 < *(int *)(lVar7 + -4 + (longlong)(int)uVar6 * 4) &&
                (uVar16 = uVar9, uVar13 = uVar5, uVar9 != uVar5)))) {
              do {
                uVar12 = uVar16;
                if ((int)uVar10 < *(int *)(lVar7 + (longlong)(int)uVar16 * 4)) {
                  uVar12 = uVar13;
                  uVar14 = uVar16;
                }
                uVar16 = (int)(uVar14 + uVar12) >> 1;
                uVar13 = uVar12;
              } while (uVar16 != uVar12);
            }
            goto joined_r0x0001425cbd64;
          }
          uVar10 = (uint)uVar2;
          uVar14 = *(uint *)(param_1 + 0x20c + (ulonglong)(uVar2 >> 6 & 0x3f) * 4) >>
                   (byte)(uVar2 >> 0xc) & 0x10001;
          if (1 < uVar14) {
            uVar16 = *(uint *)(param_1 + 0x30c + (ulonglong)(uVar2 >> 0xc) * 4);
            uVar11 = (ulonglong)(int)uVar16;
            uVar14 = uVar16;
            if (((*(int *)(lVar7 + uVar11 * 4) <= (int)uVar10) &&
                (uVar14 = *(uint *)(param_1 + 0x310 + (ulonglong)(uVar2 >> 0xc) * 4),
                (int)uVar16 < (int)uVar14)) &&
               ((int)uVar10 < *(int *)(lVar7 + -4 + (longlong)(int)uVar14 * 4))) {
              iVar15 = uVar14 + uVar16;
              while( true ) {
                uVar16 = iVar15 >> 1;
                if (uVar16 == (uint)uVar11) break;
                if ((int)uVar10 < *(int *)(lVar7 + (longlong)(int)uVar16 * 4)) {
                  iVar15 = uVar16 + (uint)uVar11;
                  uVar14 = uVar16;
                }
                else {
                  uVar11 = (ulonglong)uVar16;
                  iVar15 = uVar14 + uVar16;
                }
              }
            }
            goto joined_r0x0001425cbd64;
          }
        }
        if (uVar14 == 0) {
          return param_3;
        }
      }
LAB_1425cbb6c:
      param_3 = lVar1;
    } while (param_3 != param_2);
  }
  return param_2;
}



// FUNCTION 1425cbfd0 FUN_1425cbfd0 body=825 status=ok
// SIG undefined FUN_1425cbfd0(void)

byte * FUN_1425cbfd0(longlong param_1,byte *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  
  pbVar1 = param_2 + (int)param_3;
  bVar6 = *param_2;
  if (-1 < (char)bVar6) {
    lVar4 = (longlong)(int)param_3 + -1;
    if (param_4 == 0) {
      do {
        if (*(char *)(param_1 + 8 + (ulonglong)bVar6) != '\0') {
          return param_2;
        }
        if (lVar4 == 0) {
          return pbVar1;
        }
        param_2 = param_2 + 1;
        bVar6 = *param_2;
        lVar4 = lVar4 + -1;
      } while (-1 < (char)bVar6);
    }
    else {
      do {
        if (*(char *)(param_1 + 8 + (ulonglong)bVar6) == '\0') {
          return param_2;
        }
        if (lVar4 == 0) {
          return pbVar1;
        }
        param_2 = param_2 + 1;
        bVar6 = *param_2;
        lVar4 = lVar4 + -1;
      } while (-1 < (char)bVar6);
    }
    param_3 = (int)pbVar1 - (int)param_2;
  }
  uVar8 = (uint)(param_4 != 0);
  pbVar13 = pbVar1;
  if ((char)pbVar1[-1] < '\0') {
    if (pbVar1[-1] < 0xc0) {
      if ((int)param_3 < 2) goto joined_r0x0001425cc0af;
      if (pbVar1[-2] < 0xe0) {
        if (((-0x41 < (char)pbVar1[-2]) || (param_3 < 3)) || (pbVar1[-3] < 0xf0))
        goto joined_r0x0001425cc0af;
        pbVar13 = pbVar1 + -3;
      }
      else {
        pbVar13 = pbVar1 + -2;
      }
    }
    else {
      pbVar13 = pbVar1 + -1;
    }
    if ((int)*(char *)(param_1 + 0x108) != uVar8) {
      pbVar1 = pbVar13;
    }
  }
joined_r0x0001425cc0af:
  do {
    pbVar9 = param_2;
    if (pbVar13 <= pbVar9) {
      return pbVar1;
    }
    bVar6 = *pbVar9;
    if (-1 < (char)bVar6) {
      pbVar9 = pbVar9 + 1;
      if (param_4 == 0) {
        do {
          if (*(char *)(param_1 + 8 + (ulonglong)bVar6) != '\0') goto LAB_1425cc2e7;
          if (pbVar9 == pbVar13) {
            return pbVar1;
          }
          bVar6 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (-1 < (char)bVar6);
      }
      else {
        do {
          if (*(char *)(param_1 + 8 + (ulonglong)bVar6) == '\0') {
LAB_1425cc2e7:
            return pbVar9 + -1;
          }
          if (pbVar9 == pbVar13) {
            return pbVar1;
          }
          bVar6 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (-1 < (char)bVar6);
      }
      pbVar9 = pbVar9 + -1;
    }
    param_2 = pbVar9 + 1;
    if (bVar6 < 0xe0) {
      if ((0xbf < bVar6) && ((byte)((ulonglong)*param_2 ^ 0x80) < 0x40)) {
        if ((param_4 != 0) ==
            ((*(uint *)(param_1 + 0x10c + ((ulonglong)*param_2 ^ 0x80) * 4) >> (bVar6 & 0x1f) & 1)
            == 0)) {
          return pbVar9;
        }
        param_2 = pbVar9 + 2;
        goto joined_r0x0001425cc0af;
      }
    }
    else {
      uVar5 = (ulonglong)*param_2 ^ 0x80;
      if (bVar6 < 0xf0) {
        if (((byte)uVar5 < 0x40) && ((byte)(pbVar9[2] ^ 0x80) < 0x40)) {
          uVar11 = *(uint *)(param_1 + 0x20c + uVar5 * 4) >> (bVar6 & 0xf) & 0x10001;
          if (uVar11 < 2) {
            if (uVar11 != uVar8) {
              return pbVar9;
            }
          }
          else {
            uVar10 = bVar6 & 0xf;
            uVar3 = (int)uVar5 << 6 | uVar10 << 0xc | pbVar9[2] ^ 0x80;
            uVar11 = *(uint *)(param_1 + 0x30c + (ulonglong)uVar10 * 4);
            uVar5 = (ulonglong)(int)uVar11;
            lVar4 = *(longlong *)(param_1 + 0x358);
            uVar7 = uVar11;
            if (((*(int *)(lVar4 + uVar5 * 4) <= (int)uVar3) &&
                (uVar7 = *(uint *)(param_1 + 0x310 + (ulonglong)uVar10 * 4),
                (int)uVar11 < (int)uVar7)) &&
               ((int)uVar3 < *(int *)(lVar4 + -4 + (longlong)(int)uVar7 * 4))) {
              iVar12 = uVar11 + uVar7;
              while( true ) {
                uVar11 = iVar12 >> 1;
                if (uVar11 == (uint)uVar5) break;
                if ((int)uVar3 < *(int *)(lVar4 + (longlong)(int)uVar11 * 4)) {
                  iVar12 = uVar11 + (uint)uVar5;
                  uVar7 = uVar11;
                }
                else {
                  uVar5 = (ulonglong)uVar11;
                  iVar12 = uVar7 + uVar11;
                }
              }
            }
            if ((param_4 != 0) == ((uVar7 & 1) == 0)) {
              return pbVar9;
            }
          }
          param_2 = pbVar9 + 3;
          goto joined_r0x0001425cc0af;
        }
      }
      else if ((((byte)uVar5 < 0x40) && ((byte)(pbVar9[2] ^ 0x80) < 0x40)) &&
              ((byte)(pbVar9[3] ^ 0x80) < 0x40)) {
        uVar11 = (int)uVar5 << 0xc | (uint)bVar6 * 0x40000 + 0xfc400000;
        if (uVar11 - 0x10000 < 0x100000) {
          cVar2 = FUN_1425cae30(param_1,(pbVar9[2] ^ 0x80) << 6 | pbVar9[3] ^ 0x80 | uVar11,
                                *(undefined4 *)(param_1 + 0x34c),*(undefined4 *)(param_1 + 0x350));
        }
        else {
          cVar2 = *(char *)(param_1 + 0x108);
        }
        if ((int)cVar2 != uVar8) {
          return pbVar9;
        }
        param_2 = pbVar9 + 4;
        goto joined_r0x0001425cc0af;
      }
    }
    if ((int)*(char *)(param_1 + 0x108) != uVar8) {
      return pbVar9;
    }
  } while( true );
}



// FUNCTION 1425cc330 FUN_1425cc330 body=556 status=ok
// SIG undefined FUN_1425cc330(void)

void FUN_1425cc330(longlong param_1,longlong param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  do {
    lVar3 = (longlong)param_3;
    local_44 = param_3 + -1;
    bVar4 = *(byte *)(param_2 + -1 + lVar3);
    if (-1 < (char)bVar4) {
      cVar1 = *(char *)(param_1 + 8 + (ulonglong)bVar4);
      if (param_4 == 0) {
        if (cVar1 != '\0') break;
        iVar9 = param_3 + -2;
        while( true ) {
          if (lVar3 == 1) goto LAB_1425cc559;
          bVar4 = *(byte *)(param_2 + -2 + lVar3);
          local_44 = iVar9;
          if ((char)bVar4 < '\0') break;
          lVar3 = lVar3 + -1;
          iVar9 = iVar9 + -1;
          if (*(char *)(param_1 + 8 + (ulonglong)bVar4) != '\0') goto LAB_1425cc559;
        }
      }
      else {
        if (cVar1 == '\0') break;
        lVar3 = (longlong)param_3;
        iVar9 = param_3 + -2;
        while( true ) {
          if (lVar3 == 1) goto LAB_1425cc559;
          bVar4 = *(byte *)(param_2 + -2 + lVar3);
          local_44 = iVar9;
          if ((char)bVar4 < '\0') break;
          lVar3 = lVar3 + -1;
          iVar9 = iVar9 + -1;
          if (*(char *)(param_1 + 8 + (ulonglong)bVar4) == '\0') goto LAB_1425cc559;
        }
      }
    }
    local_58 = 0xfd;
    uVar2 = FUN_142580f00(param_2,0,&local_44,bVar4);
    if ((int)uVar2 < 0x800) {
      if (((*(uint *)(param_1 + 0x10c + (ulonglong)(uVar2 & 0x3f) * 4) >> (uVar2 >> 6 & 0x1f) & 1)
          == 0) == (param_4 != 0)) break;
    }
    else {
      if (uVar2 < 0x10000) {
        uVar5 = uVar2 >> 0xc;
        uVar7 = *(uint *)(param_1 + 0x20c + (ulonglong)(uVar2 >> 6 & 0x3f) * 4) >>
                ((byte)uVar5 & 0x1f) & 0x10001;
        if (uVar7 < 2) {
          if (uVar7 == (param_4 != 0)) goto LAB_1425cc509;
          break;
        }
        iVar9 = *(int *)(param_1 + 0x30c + (ulonglong)uVar5 * 4);
        uVar8 = (ulonglong)iVar9;
        lVar3 = *(longlong *)(param_1 + 0x358);
        if ((int)uVar2 < *(int *)(lVar3 + uVar8 * 4)) goto LAB_1425cc4f8;
        uVar5 = *(uint *)(param_1 + 0x310 + (ulonglong)uVar5 * 4);
        uVar6 = (ulonglong)uVar5;
        if ((iVar9 < (int)uVar5) && ((int)uVar2 < *(int *)(lVar3 + -4 + (longlong)(int)uVar5 * 4)))
        {
          iVar9 = iVar9 + uVar5;
          while( true ) {
            uVar5 = iVar9 >> 1;
            if (uVar5 == (uint)uVar8) break;
            if ((int)uVar2 < *(int *)(lVar3 + (longlong)(int)uVar5 * 4)) {
              iVar9 = uVar5 + (uint)uVar8;
              uVar6 = (ulonglong)uVar5;
            }
            else {
              uVar8 = (ulonglong)uVar5;
              iVar9 = (int)uVar6 + uVar5;
            }
          }
        }
      }
      else {
        iVar9 = *(int *)(param_1 + 0x34c);
        uVar8 = (ulonglong)iVar9;
        lVar3 = *(longlong *)(param_1 + 0x358);
        if ((int)uVar2 < *(int *)(lVar3 + uVar8 * 4)) {
LAB_1425cc4f8:
          uVar6 = uVar8 & 0xffffffff;
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x350);
          uVar6 = (ulonglong)uVar5;
          if ((iVar9 < (int)uVar5) && ((int)uVar2 < *(int *)(lVar3 + -4 + (longlong)(int)uVar5 * 4))
             ) {
            iVar9 = iVar9 + uVar5;
            while( true ) {
              uVar5 = iVar9 >> 1;
              if (uVar5 == (uint)uVar8) break;
              if ((int)uVar2 < *(int *)(lVar3 + (longlong)(int)uVar5 * 4)) {
                iVar9 = uVar5 + (uint)uVar8;
                uVar6 = (ulonglong)uVar5;
              }
              else {
                uVar8 = (ulonglong)uVar5;
                iVar9 = (int)uVar6 + uVar5;
              }
            }
          }
        }
      }
      if (((uVar6 & 1) == 0) == (param_4 != 0)) break;
    }
LAB_1425cc509:
    param_3 = local_44;
  } while (0 < local_44);
LAB_1425cc559:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 1425cc580 FUN_1425cc580 body=29 status=ok
// SIG undefined FUN_1425cc580(void)

undefined8 FUN_1425cc580(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425cc5a0 FUN_1425cc5a0 body=10 status=ok
// SIG undefined FUN_1425cc5a0(void)

bool FUN_1425cc5a0(int param_1)

{
  return param_1 - 0x7fU < 0xffffffa1;
}



// FUNCTION 1425cc5b0 FUN_1425cc5b0 body=451 status=ok
// SIG undefined FUN_1425cc5b0(void)

void FUN_1425cc5b0(undefined8 param_1,uint param_2)

{
  undefined1 auStack_48 [38];
  wchar_t local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0x5e < param_2 - 0x20) {
    local_22 = L'\\';
    FUN_1424a6cf0(param_1,&local_22,0,1);
    if (param_2 < 0x10000) {
      local_22 = L'u';
    }
    else {
      local_22 = L'U';
      FUN_1424a6cf0(param_1,&local_22,0,1);
      local_22 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[param_2 >> 0x1c];
      FUN_1424a6cf0(param_1,&local_22,0,1);
      local_22 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[param_2 >> 0x18 & 0xf];
      FUN_1424a6cf0(param_1,&local_22,0,1);
      local_22 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[param_2 >> 0x14 & 0xf];
      FUN_1424a6cf0(param_1,&local_22,0,1);
      local_22 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[param_2 >> 0x10 & 0xf];
    }
    FUN_1424a6cf0(param_1,&local_22,0,1);
    local_22 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[param_2 >> 0xc & 0xf];
    FUN_1424a6cf0(param_1,&local_22,0,1);
    local_22 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[param_2 >> 8 & 0xf];
    FUN_1424a6cf0(param_1,&local_22,0,1);
    local_22 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[param_2 >> 4 & 0xf];
    FUN_1424a6cf0(param_1,&local_22,0,1);
    local_22 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[param_2 & 0xf];
    FUN_1424a6cf0(param_1,&local_22,0,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425cc780 FUN_1425cc780 body=99 status=ok
// SIG undefined FUN_1425cc780(void)

void FUN_1425cc780(longlong param_1,int *param_2,char param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      lVar4 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar4 = param_1 + 10;
    }
  }
  else {
    lVar4 = 0;
  }
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = (int)(short)uVar1 >> 5;
  }
  lVar2 = FUN_1425cc830(lVar4 + (longlong)*param_2 * 2,iVar3 - *param_2);
  if (param_3 != '\0') {
    *param_2 = (int)((ulonglong)(lVar2 - lVar4) >> 1);
  }
  return;
}



// FUNCTION 1425cc7f0 FUN_1425cc7f0 body=58 status=ok
// SIG undefined FUN_1425cc7f0(void)

uint FUN_1425cc7f0(uint param_1)

{
  if (-1 < (int)param_1) {
    if (param_1 < 0x100) {
      return (uint)((byte)(&DAT_149c41f30)[param_1] >> 2 & 1);
    }
    if (param_1 - 0x200e < 0x1c) {
      return CONCAT31((int3)(param_1 - 0x200e >> 8),param_1 - 0x2028 < 0xffffffe8);
    }
  }
  return 0;
}



// FUNCTION 1425cc830 FUN_1425cc830 body=97 status=ok
// SIG undefined FUN_1425cc830(void)

void FUN_1425cc830(ushort *param_1,int param_2)

{
  ushort uVar1;
  
  if (0 < param_2) {
    param_2 = param_2 + 1;
    do {
      uVar1 = *param_1;
      if (uVar1 < 0x100) {
        if (((byte)(&DAT_149c41f30)[uVar1] >> 2 & 1) == 0) {
          return;
        }
      }
      else {
        if (0x1b < uVar1 - 0x200e) {
          return;
        }
        if (0xffffffe7 < uVar1 - 0x2028) {
          return;
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (1 < param_2);
  }
  return;
}



// FUNCTION 1425cc8a0 FUN_1425cc8a0 body=168 status=ok
// SIG undefined FUN_1425cc8a0(void)

uint FUN_1425cc8a0(longlong param_1,uint param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  
  sVar1 = *(short *)(param_1 + 8);
  if (sVar1 < 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar3 = (int)sVar1 >> 5;
  }
  if (uVar3 <= param_2 || (int)uVar3 <= (int)param_2) {
    return param_2;
  }
  if (((int)sVar1 & 2U) == 0) {
    param_1 = *(longlong *)(param_1 + 0x18);
  }
  else {
    param_1 = param_1 + 10;
  }
  lVar4 = (longlong)(int)param_2;
  do {
    lVar4 = lVar4 + 1;
    uVar2 = *(ushort *)(param_1 + -2 + lVar4 * 2);
    if (uVar2 < 0x100) {
      if (((byte)(&DAT_149c41f30)[uVar2] >> 2 & 1) == 0) {
        return param_2;
      }
    }
    else {
      if (0x1b < uVar2 - 0x200e) {
        return param_2;
      }
      if (0xffffffe7 < uVar2 - 0x2028) {
        return param_2;
      }
    }
    if ((int)uVar3 <= lVar4) {
      return uVar3;
    }
    param_2 = param_2 + 1;
  } while (param_2 < uVar3);
  return uVar3;
}



// FUNCTION 1425cc960 FUN_1425cc960 body=370 status=ok
// SIG undefined FUN_1425cc960(void)

ushort * FUN_1425cc960(ushort *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ushort *puVar6;
  bool bVar7;
  
  uVar3 = *param_2;
  uVar4 = (ulonglong)(int)uVar3;
  if ((longlong)uVar4 < 1) {
    return param_1;
  }
  uVar1 = *param_1;
  if (uVar1 < 0x100) {
    if (((byte)(&DAT_149c41f30)[uVar1] >> 2 & 1) == 0) {
LAB_1425cc9bd:
      uVar1 = param_1[uVar3 - 1];
      if (uVar1 < 0x100) {
        if (((byte)(&DAT_149c41f30)[uVar1] >> 2 & 1) == 0) {
          return param_1;
        }
      }
      else {
        if (0x1b < uVar1 - 0x200e) {
          return param_1;
        }
        if (0xffffffe7 < uVar1 - 0x2028) {
          return param_1;
        }
      }
    }
  }
  else if ((0x1b < uVar1 - 0x200e) || (0xffffffe7 < uVar1 - 0x2028)) goto LAB_1425cc9bd;
  uVar5 = 0;
  do {
    uVar1 = param_1[uVar5];
    if (uVar1 < 0x100) {
      if (((byte)(&DAT_149c41f30)[uVar1] >> 2 & 1) == 0) {
LAB_1425cca7a:
        puVar6 = param_1 + uVar4;
        goto LAB_1425ccaaa;
      }
    }
    else if ((0x1b < uVar1 - 0x200e) || (0xffffffe7 < uVar1 - 0x2028)) goto LAB_1425cca7a;
    uVar5 = uVar5 + 1;
    uVar2 = uVar3;
  } while (uVar3 != uVar5);
LAB_1425ccad9:
  *param_2 = uVar2 - uVar3;
  return param_1 + uVar3;
LAB_1425ccaaa:
  do {
    puVar6 = puVar6 + -1;
    uVar2 = (uint)uVar4;
    uVar1 = *puVar6;
    if (uVar1 < 0x100) {
      bVar7 = (bool)((byte)(&DAT_149c41f30)[uVar1] >> 2 & 1);
    }
    else {
      if (0x1b < uVar1 - 0x200e) break;
      bVar7 = uVar1 - 0x2028 < 0xffffffe8;
    }
    uVar4 = (ulonglong)(uVar2 - 1);
  } while (bVar7 != false);
  uVar3 = (uint)uVar5;
  goto LAB_1425ccad9;
}



// FUNCTION 1425ccaf0 FUN_1425ccaf0 body=165 status=ok
// SIG undefined FUN_1425ccaf0(void)

undefined8 FUN_1425ccaf0(ushort *param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  bool bVar3;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  puVar1 = param_1 + param_2;
  do {
    uVar2 = *param_1;
    if (uVar2 < 0x100) {
      if (((&DAT_149c41f30)[uVar2] & 1) != 0) {
        return 0;
      }
    }
    else if (0x200d < uVar2) {
      if (uVar2 < 0x3031) {
        bVar3 = (*(uint *)(&DAT_149c41f00 +
                          (ulonglong)(byte)(&DAT_149c41e70)[uVar2 - 0x2000 >> 5] * 4) >>
                 (uVar2 & 0x1f) & 1) != 0;
      }
      else {
        if (0x108 < uVar2 - 0xfd3e) goto LAB_1425ccb31;
        bVar3 = uVar2 - 0xfe45 < 0xfffffefb;
      }
      if (bVar3) {
        return 0;
      }
    }
LAB_1425ccb31:
    param_1 = param_1 + 1;
    if (puVar1 <= param_1) {
      return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
    }
  } while( true );
}



// FUNCTION 1425ccba0 FUN_1425ccba0 body=163 status=ok
// SIG undefined FUN_1425ccba0(void)

void FUN_1425ccba0(ushort *param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  
  if (0 < param_2) {
    param_2 = param_2 + 1;
    do {
      uVar1 = *param_1;
      if (uVar1 < 0x100) {
        if (((&DAT_149c41f30)[uVar1] & 1) != 0) {
          return;
        }
      }
      else if (0x200d < uVar1) {
        if (uVar1 < 0x3031) {
          bVar2 = (*(uint *)(&DAT_149c41f00 +
                            (ulonglong)(byte)(&DAT_149c41e70)[uVar1 - 0x2000 >> 5] * 4) >>
                   (uVar1 & 0x1f) & 1) != 0;
        }
        else {
          if (0x108 < uVar1 - 0xfd3e) goto LAB_1425ccc50;
          bVar2 = uVar1 - 0xfe45 < 0xfffffefb;
        }
        if (bVar2) {
          return;
        }
      }
LAB_1425ccc50:
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (1 < param_2);
  }
  return;
}



// FUNCTION 1425ccc60 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 1425ccc70 FUN_1425ccc70 body=3 status=ok
// SIG undefined FUN_1425ccc70(void)

undefined8 FUN_1425ccc70(void)

{
  return 0;
}



// FUNCTION 1425ccc80 FUN_1425ccc80 body=536 status=ok
// SIG undefined FUN_1425ccc80(void)

longlong *
FUN_1425ccc80(uint param_1,uint param_2,int *param_3,uint param_4,uint *param_5,int *param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if (*param_6 < 1) {
    if (((((int)param_4 < 1) || (param_2 - 3 < 0xfffffffc)) || (param_1 - 2 < 0xfffffffd)) ||
       (((ulonglong)param_3 & 3) != 0)) {
      *param_6 = 1;
    }
    else {
      if (((0xf < param_4) && (*param_3 == 0x54726933)) &&
         (uVar1 = *(ushort *)(param_3 + 1), (uVar1 & 0x38) == 0)) {
        uVar9 = uVar1 & 7;
        if ((uVar9 < 3) && (uVar13 = uVar1 >> 6 & 3, uVar13 < 2)) {
          if (((int)param_2 < 0 || uVar9 == param_2) && ((int)param_1 < 0 || uVar13 == param_1)) {
            uVar2 = *(ushort *)((longlong)param_3 + 6);
            uVar11 = (uint)*(ushort *)(param_3 + 2) | (uVar1 & 0xf000) << 4;
            if (uVar9 == 1) {
              uVar12 = uVar11 * 4;
            }
            else {
              uVar12 = uVar11;
              if ((uVar1 & 7) == 0) {
                uVar12 = uVar11 * 2;
              }
            }
            uVar12 = (uint)uVar2 * 2 + 0x10 + uVar12;
            if (uVar12 <= param_4) {
              uVar3 = *(ushort *)((longlong)param_3 + 0xe);
              uVar4 = *(ushort *)(param_3 + 3);
              uVar5 = *(undefined2 *)((longlong)param_3 + 10);
              plVar7 = (longlong *)FUN_1424da030(0x30);
              if (plVar7 == (longlong *)0x0) {
                *param_6 = 7;
                return (longlong *)0x0;
              }
              iVar6 = (uint)uVar3 * 0x200;
              uVar10 = (uVar1 & 0xf00) * 0x100 + (uint)uVar4;
              plVar7[1] = 0;
              *(uint *)(plVar7 + 2) = (uint)uVar2;
              *(uint *)((longlong)plVar7 + 0x14) = uVar11;
              *(int *)(plVar7 + 3) = iVar6;
              *(short *)((longlong)plVar7 + 0x1c) = (short)(iVar6 + 0xfffU >> 0xc);
              *(char *)((longlong)plVar7 + 0x1e) = (char)uVar13;
              *(char *)((longlong)plVar7 + 0x1f) = (char)uVar9;
              *(undefined4 *)(plVar7 + 4) = 0;
              *(undefined2 *)((longlong)plVar7 + 0x24) = 0;
              *(undefined2 *)((longlong)plVar7 + 0x26) = uVar5;
              *(uint *)(plVar7 + 5) = uVar10;
              *(undefined4 *)((longlong)plVar7 + 0x2c) = 0;
              *plVar7 = (longlong)(param_3 + 4);
              lVar8 = (longlong)param_3 + (ulonglong)uVar2 * 2 + 0x10;
              uVar13 = uVar11 - 2;
              if (uVar10 < uVar11) {
                uVar13 = uVar10;
              }
              if (uVar9 == 2) {
                plVar7[1] = lVar8;
                uVar9 = (uint)*(byte *)(lVar8 + (int)uVar13);
LAB_1425cce7c:
                *(uint *)((longlong)plVar7 + 0x2c) = uVar9;
                if (param_5 != (uint *)0x0) {
                  *param_5 = uVar12;
                  return plVar7;
                }
                return plVar7;
              }
              if (uVar9 == 1) {
                plVar7[1] = lVar8;
                uVar9 = *(uint *)(lVar8 + (longlong)(int)uVar13 * 4);
                goto LAB_1425cce7c;
              }
              if ((uVar1 & 7) == 0) {
                plVar7[1] = lVar8;
                uVar9 = (uint)*(ushort *)(lVar8 + (longlong)(int)uVar13 * 2);
                goto LAB_1425cce7c;
              }
            }
          }
        }
      }
      *param_6 = 3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1425ccea0 FUN_1425ccea0 body=5 status=ok
// SIG undefined FUN_1425ccea0(void)

void FUN_1425ccea0(undefined *param_1)

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



// FUNCTION 1425cceb0 FUN_1425cceb0 body=154 status=ok
// SIG undefined FUN_1425cceb0(void)

int FUN_1425cceb0(longlong *param_1,uint param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar3 = ((int)param_2 >> 0xe) + 0x3fc;
  if (*(char *)((longlong)param_1 + 0x1e) != '\0') {
    iVar3 = ((int)param_2 >> 0xe) + 0x40;
  }
  lVar2 = *param_1;
  uVar1 = *(ushort *)
           (lVar2 + ((ulonglong)(param_2 >> 9 & 0x1f) +
                    (ulonglong)*(ushort *)(lVar2 + (longlong)iVar3 * 2)) * 2);
  uVar5 = param_2 >> 4;
  if ((short)uVar1 < 0) {
    lVar4 = (ulonglong)((uVar5 & 0x1f) >> 3 | uVar5 & 0x18) + (ulonglong)(uVar1 & 0x7fff);
    uVar5 = (uint)*(ushort *)(lVar2 + (ulonglong)((uVar5 & 7) + (int)lVar4 + 1) * 2) |
            (uint)*(ushort *)(lVar2 + lVar4 * 2) << (char)(uVar5 & 7) * '\x02' + 2 & 0x30000;
  }
  else {
    uVar5 = (uint)*(ushort *)(lVar2 + ((ulonglong)(uVar5 & 0x1f) + (ulonglong)uVar1) * 2);
  }
  return (param_2 & 0xf) + uVar5;
}



// FUNCTION 1425ccf50 FUN_1425ccf50 body=179 status=ok
// SIG undefined FUN_1425ccf50(void)

int FUN_1425ccf50(longlong *param_1,int param_2,byte param_3,byte param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(uint)(param_2 << 0xc) | (ulonglong)param_4;
  uVar6 = (uint)uVar7 | (uint)param_3 << 6;
  if ((int)uVar6 < (int)param_1[3]) {
    iVar3 = (param_2 << 0xc) >> 0xe;
    iVar4 = iVar3 + 0x3fc;
    if (*(char *)((longlong)param_1 + 0x1e) != '\0') {
      iVar4 = iVar3 + 0x40;
    }
    lVar2 = *param_1;
    uVar1 = *(ushort *)
             (lVar2 + ((ulonglong)((uint)((uVar7 | (ulonglong)param_3 << 6) >> 9) & 0x1f) +
                      (ulonglong)*(ushort *)(lVar2 + (longlong)iVar4 * 2)) * 2);
    uVar6 = uVar6 >> 4;
    if ((short)uVar1 < 0) {
      lVar5 = (ulonglong)((uVar6 & 0x1f) >> 3 | uVar6 & 0x18) + (ulonglong)(uVar1 & 0x7fff);
      uVar6 = (uint)*(ushort *)(lVar2 + (ulonglong)((uVar6 & 7) + (int)lVar5 + 1) * 2) |
              (uint)*(ushort *)(lVar2 + lVar5 * 2) << (char)(uVar6 & 7) * '\x02' + 2 & 0x30000;
    }
    else {
      uVar6 = (uint)*(ushort *)(lVar2 + ((ulonglong)(uVar6 & 0x1f) + (ulonglong)uVar1) * 2);
    }
    return (param_4 & 0xf) + uVar6;
  }
  return *(int *)((longlong)param_1 + 0x14) + -2;
}



// FUNCTION 1425cd010 FUN_1425cd010 body=294 status=ok
// SIG undefined FUN_1425cd010(void)

void FUN_1425cd010(undefined8 param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = 7;
  lVar1 = param_4 + -7;
  if (param_4 - param_3 < 8) {
    iVar2 = (int)(param_4 - param_3);
    lVar1 = param_3;
  }
  local_38 = 0xff;
  local_24 = iVar2;
  FUN_142580f00(lVar1,0,&local_24,param_2);
  local_24 = iVar2 - local_24;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1425cd140 FUN_1425cd140 body=298 status=ok
// SIG undefined FUN_1425cd140(void)

uint FUN_1425cd140(longlong *param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_2 < 0x80) goto LAB_1425cd1ed;
  uVar5 = 0xfff;
  if (*(char *)((longlong)param_1 + 0x1e) == '\0') {
    uVar5 = 0xffff;
  }
  if (uVar5 < param_2) {
    if (0x10ffff < param_2) {
      param_2 = *(int *)((longlong)param_1 + 0x14) - 1;
      goto LAB_1425cd1ed;
    }
    if ((int)param_1[3] <= (int)param_2) {
      param_2 = *(int *)((longlong)param_1 + 0x14) - 2;
      goto LAB_1425cd1ed;
    }
    uVar5 = (param_2 >> 0xe) + 0x3fc;
    if (*(char *)((longlong)param_1 + 0x1e) != '\0') {
      uVar5 = (param_2 >> 0xe) + 0x40;
    }
    lVar3 = *param_1;
    uVar2 = *(ushort *)
             (lVar3 + ((ulonglong)(param_2 >> 9 & 0x1f) +
                      (ulonglong)*(ushort *)(lVar3 + (ulonglong)uVar5 * 2)) * 2);
    uVar5 = param_2 >> 4;
    if ((short)uVar2 < 0) {
      lVar4 = (ulonglong)((uVar5 & 0x1f) >> 3 | uVar5 & 0x18) + (ulonglong)(uVar2 & 0x7fff);
      uVar5 = (uint)*(ushort *)(lVar3 + (ulonglong)((uVar5 & 7) + (int)lVar4 + 1) * 2) |
              (uint)*(ushort *)(lVar3 + lVar4 * 2) << (char)(uVar5 & 7) * '\x02' + 2 & 0x30000;
    }
    else {
      uVar5 = (uint)*(ushort *)(lVar3 + ((ulonglong)(uVar5 & 0x1f) + (ulonglong)uVar2) * 2);
    }
    param_2 = param_2 & 0xf;
  }
  else {
    uVar5 = (uint)*(ushort *)(*param_1 + (ulonglong)(param_2 >> 6) * 2);
    param_2 = param_2 & 0x3f;
  }
  param_2 = param_2 + uVar5;
LAB_1425cd1ed:
  cVar1 = *(char *)((longlong)param_1 + 0x1f);
  lVar3 = param_1[1];
  if (cVar1 == '\x02') {
    uVar5 = (uint)*(byte *)(lVar3 + (int)param_2);
  }
  else {
    if (cVar1 == '\x01') {
      return *(uint *)(lVar3 + (longlong)(int)param_2 * 4);
    }
    uVar5 = 0xffffffff;
    if (cVar1 == '\0') {
      return (uint)*(ushort *)(lVar3 + (longlong)(int)param_2 * 2);
    }
  }
  return uVar5;
}



// FUNCTION 1425cd270 FUN_1425cd270 body=273 status=ok
// SIG undefined FUN_1425cd270(void)

void FUN_1425cd270(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,int *param_7)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) {
    local_58 = param_7;
    FUN_1425cd3a0(param_1,param_2,param_5,param_6);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  piVar3 = &local_4c;
  if (param_7 != (int *)0x0) {
    piVar3 = param_7;
  }
  uVar2 = (uint)(param_3 == 2) << 10 | 0xdbff;
  local_58 = piVar3;
  uVar1 = FUN_1425cd3a0(param_1,param_2,param_5,param_6);
  if ((param_2 <= (int)uVar2) && (0xd7fe < (int)uVar1)) {
    if (*piVar3 == param_4) {
      if (uVar2 <= uVar1) goto LAB_1425cd378;
    }
    else if ((param_2 < 0xd800) || (*piVar3 = param_4, uVar2 < uVar1)) goto LAB_1425cd378;
    local_58 = &local_50;
    FUN_1425cd3a0(param_1,uVar2 + 1,param_5,param_6);
  }
LAB_1425cd378:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1425cd3a0 FUN_1425cd3a0 body=1488 status=ok
// SIG undefined FUN_1425cd3a0(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_1425cd3a0(longlong *param_1,uint param_2,code *param_3,undefined8 param_4,uint *param_5)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint local_c0;
  uint local_b8;
  longlong local_58;
  
  iVar14 = -1;
  if (param_2 < 0x110000) {
    cVar1 = *(char *)((longlong)param_1 + 0x1f);
    if ((int)param_2 < (int)param_1[3]) {
      uVar7 = *(uint *)((longlong)param_1 + 0x2c);
      if (param_3 != (code *)0x0) {
        uVar7 = (*param_3)(param_4,uVar7);
      }
      lVar4 = *param_1;
      uVar11 = 0xffffffff;
      uVar12 = 0;
      bVar6 = false;
      uVar19 = (ulonglong)param_2;
      local_b8 = 0xffffffff;
      do {
        cVar2 = *(char *)((longlong)param_1 + 0x1e);
        uVar9 = (uint)uVar19;
        if (((int)uVar9 < 0x10000) && (((int)uVar9 < 0x1000 || (cVar2 == '\0')))) {
          uVar9 = (int)uVar9 >> 6;
          local_58 = 0x40;
          if (cVar2 == '\0') {
            local_58 = 0x400;
          }
          iVar14 = 0x40;
          uVar17 = 0;
LAB_1425cd52c:
          uVar13 = iVar14 - 1;
          lVar20 = (longlong)(int)uVar9;
          do {
            uVar9 = (uint)uVar19;
            if (uVar17 < 0x8000) {
              uVar3 = *(ushort *)(lVar4 + ((ulonglong)uVar17 + lVar20) * 2);
              uVar10 = (uint)uVar3;
              if (uVar3 != uVar11) goto LAB_1425cd600;
LAB_1425cd5f2:
              if ((int)(uVar9 - param_2) < iVar14) goto LAB_1425cd600;
              uVar19 = (ulonglong)(uVar9 + iVar14);
            }
            else {
              uVar10 = (uint)lVar20;
              iVar18 = ((int)uVar10 >> 3) + (uVar10 & 0xfffffff8) + (uVar17 & 0x7fff);
              uVar10 = (uint)*(ushort *)(lVar4 + (longlong)(int)((uVar10 & 7) + iVar18 + 1) * 2) |
                       (uint)*(ushort *)(lVar4 + (longlong)iVar18 * 2) <<
                       (char)(uVar10 & 7) * '\x02' + 2 & 0x30000;
              if (uVar10 == uVar11) goto LAB_1425cd5f2;
LAB_1425cd600:
              uVar11 = uVar10;
              if (uVar10 == *(uint *)(param_1 + 5)) {
                if (bVar6) {
                  if (uVar7 != local_c0) goto LAB_1425cd966;
                }
                else {
                  uVar12 = *(uint *)((longlong)param_1 + 0x2c);
                  bVar6 = true;
                  if (param_5 != (uint *)0x0) {
                    *param_5 = uVar7;
                  }
                }
                uVar19 = (ulonglong)(uVar9 + iVar14 & -iVar14);
                local_c0 = uVar7;
              }
              else {
                uVar16 = (ulonglong)(uVar9 & uVar13) + (ulonglong)uVar10;
                lVar15 = param_1[1];
                if (cVar1 == '\x02') {
                  uVar10 = (uint)*(byte *)(lVar15 + uVar16);
LAB_1425cd682:
                  if (bVar6) goto LAB_1425cd6ec;
LAB_1425cd689:
                  local_c0 = uVar10;
                  if (uVar10 == *(uint *)((longlong)param_1 + 0x2c)) {
                    local_c0 = uVar7;
                  }
                  if ((param_3 != (code *)0x0) && (uVar10 != *(uint *)((longlong)param_1 + 0x2c))) {
                    local_c0 = (*param_3)(param_4,uVar10);
                  }
                  bVar6 = true;
                  uVar12 = uVar10;
                  if (param_5 != (uint *)0x0) {
                    *param_5 = local_c0;
                  }
                }
                else {
                  if (cVar1 == '\x01') {
                    uVar10 = *(uint *)(lVar15 + (uVar16 & 0xffffffff) * 4);
                  }
                  else {
                    uVar10 = 0xffffffff;
                    if (cVar1 != '\0') goto LAB_1425cd682;
                    uVar10 = (uint)*(ushort *)(lVar15 + (uVar16 & 0xffffffff) * 2);
                  }
                  if (!bVar6) goto LAB_1425cd689;
LAB_1425cd6ec:
                  if (uVar10 != uVar12) {
                    if (param_3 == (code *)0x0) goto LAB_1425cd966;
                    uVar8 = uVar7;
                    if (uVar10 != *(uint *)((longlong)param_1 + 0x2c)) {
                      uVar8 = (*param_3)(param_4,uVar10);
                    }
                    uVar12 = uVar10;
                    if (uVar8 != local_c0) goto LAB_1425cd966;
                  }
                }
                uVar10 = uVar9 + 1;
                if ((uVar13 & uVar10) != 0) {
                  lVar15 = 0;
                  do {
                    lVar5 = param_1[1];
                    iVar18 = (int)lVar15;
                    if (cVar1 == '\x02') {
                      uVar10 = (uint)*(byte *)(lVar15 + lVar5 + uVar16 + 1);
                    }
                    else if (cVar1 == '\x01') {
                      uVar10 = *(uint *)(lVar5 + uVar16 * 4 + 4 + lVar15 * 4);
                    }
                    else {
                      uVar10 = 0xffffffff;
                      if (cVar1 == '\0') {
                        uVar10 = (uint)*(ushort *)(lVar5 + uVar16 * 2 + 2 + lVar15 * 2);
                      }
                    }
                    if (uVar10 != uVar12) {
                      if (param_3 == (code *)0x0) {
LAB_1425cd926:
                        return uVar9 + iVar18;
                      }
                      uVar8 = uVar7;
                      if (uVar10 != *(uint *)((longlong)param_1 + 0x2c)) {
                        uVar8 = (*param_3)(param_4,uVar10);
                      }
                      uVar12 = uVar10;
                      if (uVar8 != local_c0) goto LAB_1425cd926;
                    }
                    lVar15 = lVar15 + 1;
                  } while ((uVar13 & uVar9 + iVar18 + 2) != 0);
                  uVar10 = uVar9 + (int)lVar15 + 1;
                }
                uVar19 = (ulonglong)uVar10;
              }
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < local_58);
        }
        else {
          iVar14 = (int)(uVar19 >> 0xe);
          uVar17 = iVar14 + 0x3fc;
          if (cVar2 != '\0') {
            uVar17 = iVar14 + 0x40;
          }
          uVar3 = *(ushort *)
                   (*param_1 +
                   ((ulonglong)((uint)(uVar19 >> 9) & 0x1f) +
                   (ulonglong)*(ushort *)(*param_1 + (ulonglong)uVar17 * 2)) * 2);
          uVar17 = (uint)uVar3;
          if ((local_b8 == uVar3) && (0x1ff < (int)(uVar9 - param_2))) {
            uVar19 = (ulonglong)(uVar9 + 0x200);
          }
          else {
            if (uVar3 != *(ushort *)((longlong)param_1 + 0x26)) {
              uVar9 = (uint)(uVar19 >> 4) & 0x1f;
              local_58 = 0x20;
              iVar14 = 0x10;
              local_b8 = (uint)uVar3;
              goto LAB_1425cd52c;
            }
            if (bVar6) {
              if (uVar7 != local_c0) {
LAB_1425cd966:
                return (int)uVar19 + -1;
              }
            }
            else {
              uVar12 = *(uint *)((longlong)param_1 + 0x2c);
              bVar6 = true;
              if (param_5 != (uint *)0x0) {
                *param_5 = uVar7;
              }
            }
            uVar11 = *(uint *)(param_1 + 5);
            uVar19 = (ulonglong)((uVar9 & 0xfffffe00) + 0x200);
            local_b8 = uVar17;
            local_c0 = uVar7;
          }
        }
      } while ((int)uVar19 < (int)param_1[3]);
      lVar4 = (longlong)*(int *)((longlong)param_1 + 0x14) + -2;
      lVar20 = param_1[1];
      if (cVar1 == '\x02') {
        uVar12 = (uint)*(byte *)(lVar20 + lVar4);
      }
      else if (cVar1 == '\x01') {
        uVar12 = *(uint *)(lVar20 + (longlong)(int)lVar4 * 4);
      }
      else {
        uVar12 = 0xffffffff;
        if (cVar1 == '\0') {
          uVar12 = (uint)*(ushort *)(lVar20 + -4 + (longlong)*(int *)((longlong)param_1 + 0x14) * 2)
          ;
        }
      }
      if (uVar12 != *(uint *)((longlong)param_1 + 0x2c)) {
        uVar7 = uVar12;
      }
      if ((param_3 != (code *)0x0) && (uVar12 != *(uint *)((longlong)param_1 + 0x2c))) {
        uVar7 = (*param_3)(param_4);
      }
      iVar14 = 0x10ffff;
      if (uVar7 != local_c0) {
        iVar14 = (int)uVar19 + -1;
      }
    }
    else {
      iVar14 = 0x10ffff;
      if (param_5 != (uint *)0x0) {
        lVar4 = (longlong)*(int *)((longlong)param_1 + 0x14) + -2;
        lVar20 = param_1[1];
        if (cVar1 == '\x02') {
          uVar7 = (uint)*(byte *)(lVar20 + lVar4);
        }
        else if (cVar1 == '\x01') {
          uVar7 = *(uint *)(lVar20 + (longlong)(int)lVar4 * 4);
        }
        else {
          uVar7 = 0xffffffff;
          if (cVar1 == '\0') {
            uVar7 = (uint)*(ushort *)
                           (lVar20 + -4 + (longlong)*(int *)((longlong)param_1 + 0x14) * 2);
          }
        }
        if (param_3 != (code *)0x0) {
          uVar7 = (*param_3)(param_4,uVar7);
        }
        *param_5 = uVar7;
      }
    }
  }
  return iVar14;
}



// FUNCTION 1425cd9f0 FUN_1425cd9f0 body=185 status=ok
// SIG undefined FUN_1425cd9f0(void)

void FUN_1425cd9f0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  
  if (*param_4 < 1) {
    uVar3 = FUN_1424e51c0(param_2,&DAT_149c42048,param_3,&LAB_1425cd9b0,param_1,param_4);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    if (*param_4 < 1) {
      puVar4 = (uint *)FUN_142532380(uVar3);
      uVar1 = *puVar4;
      if ((int)uVar1 < 0x4c) {
        *param_4 = 3;
      }
      else {
        uVar2 = puVar4[1];
        uVar3 = FUN_1425ccc80(0,0,(ulonglong)uVar1 + (longlong)puVar4,uVar2 - uVar1,0,param_4);
        *(undefined8 *)(param_1 + 0x58) = uVar3;
        if (*param_4 < 1) {
          FUN_1425d0a60(param_1,puVar4,uVar3,(longlong)(int)uVar2 + (longlong)puVar4,
                        (longlong)(int)puVar4[2] + (longlong)puVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425cdab0 FUN_1425cdab0 body=365 status=ok
// SIG undefined FUN_1425cdab0(void)

void FUN_1425cdab0(char *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = strcmp(param_1,"nfkc");
  if (iVar1 == 0) {
    if (*param_2 < 1) {
      puVar2 = (undefined8 *)thunk_FUN_1424da030(0x60);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = icu_64::Normalizer2Impl::vftable;
        puVar2[4] = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        puVar2[9] = 0;
        LOCK();
        *(undefined4 *)(puVar2 + 8) = 0;
        UNLOCK();
        *puVar2 = icu_64::LoadedNormalizer2Impl::vftable;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        FUN_1425cd9f0(puVar2,0,&DAT_149c4204c,param_2);
        DAT_14c7fbe60 = FUN_1425ce360(puVar2,param_2);
        goto LAB_1425cdb76;
      }
      *param_2 = 7;
    }
    DAT_14c7fbe60 = 0;
  }
  else {
    iVar1 = strcmp(param_1,"nfkc_cf");
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*param_2 < 1) {
      puVar2 = (undefined8 *)thunk_FUN_1424da030(0x60);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = icu_64::Normalizer2Impl::vftable;
        puVar2[4] = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        puVar2[9] = 0;
        LOCK();
        *(undefined4 *)(puVar2 + 8) = 0;
        UNLOCK();
        *puVar2 = icu_64::LoadedNormalizer2Impl::vftable;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        FUN_1425cd9f0(puVar2,0,"nfkc_cf",param_2);
        DAT_14c7fbe68 = FUN_1425ce360(puVar2,param_2);
        goto LAB_1425cdb76;
      }
      *param_2 = 7;
    }
    DAT_14c7fbe68 = 0;
  }
LAB_1425cdb76:
  FUN_1424d6720(10,FUN_1425cdca0);
  return;
}



// FUNCTION 1425cdc20 FUN_1425cdc20 body=117 status=ok
// SIG undefined FUN_1425cdc20(void)

longlong FUN_1425cdc20(int *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 < 1) {
    if ((DAT_14c7fbe78 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fbe78), cVar1 == '\0')) {
      lVar3 = DAT_14c7fbe60;
      if (0 < DAT_14c7fbe7c) {
        *param_1 = DAT_14c7fbe7c;
        lVar3 = DAT_14c7fbe60;
      }
    }
    else {
      FUN_1425cdab0(&DAT_149c4204c,param_1);
      DAT_14c7fbe7c = *param_1;
      FUN_1425019c0(&DAT_14c7fbe78);
      lVar3 = DAT_14c7fbe60;
    }
  }
  else {
    lVar3 = 0;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1425cdca0 FUN_1425cdca0 body=132 status=ok
// SIG undefined FUN_1425cdca0(void)

undefined8 FUN_1425cdca0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c7fbe60;
  if (DAT_14c7fbe60 != 0) {
    FUN_1425ce310(DAT_14c7fbe60);
    FUN_1401773f0(lVar1);
  }
  lVar1 = DAT_14c7fbe68;
  DAT_14c7fbe60 = 0;
  LOCK();
  DAT_14c7fbe78 = 0;
  UNLOCK();
  if (DAT_14c7fbe68 != 0) {
    FUN_1425ce310(DAT_14c7fbe68);
    FUN_1401773f0(lVar1);
  }
  DAT_14c7fbe68 = 0;
  LOCK();
  DAT_14c7fbe80 = 0;
  UNLOCK();
  FUN_142502220(DAT_14c7fbe70);
  DAT_14c7fbe70 = 0;
  return 1;
}



// FUNCTION 1425cdd30 FUN_1425cdd30 body=289 status=ok
// SIG undefined FUN_1425cdd30(void)

longlong FUN_1425cdd30(undefined4 param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*param_2 < 1) {
    switch(param_1) {
    case 2:
      lVar2 = FUN_1425ce570(param_2);
      return lVar2;
    case 3:
      if ((DAT_14c7fbe78 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fbe78), cVar1 == '\0')) {
        if (0 < DAT_14c7fbe7c) {
          *param_2 = DAT_14c7fbe7c;
        }
      }
      else {
        FUN_1425cdab0(&DAT_149c4204c,param_2);
        DAT_14c7fbe7c = *param_2;
        FUN_1425019c0(&DAT_14c7fbe78);
      }
      lVar2 = DAT_14c7fbe60 + 0x20;
      break;
    case 4:
      lVar2 = FUN_1425ce4e0(param_2);
      return lVar2;
    case 5:
      if ((DAT_14c7fbe78 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fbe78), cVar1 == '\0')) {
        if (0 < DAT_14c7fbe7c) {
          *param_2 = DAT_14c7fbe7c;
        }
      }
      else {
        FUN_1425cdab0(&DAT_149c4204c,param_2);
        DAT_14c7fbe7c = *param_2;
        FUN_1425019c0(&DAT_14c7fbe78);
      }
      lVar2 = DAT_14c7fbe60 + 8;
      break;
    case 6:
      lVar2 = FUN_1425ce600(param_2);
      return lVar2;
    default:
      lVar2 = FUN_1425ce260(param_2);
      return lVar2;
    }
    if (DAT_14c7fbe60 == 0) {
      lVar2 = 0;
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1425cde60 FUN_1425cde60 body=114 status=ok
// SIG undefined FUN_1425cde60(void)

undefined8 FUN_1425cde60(int *param_1)

{
  char cVar1;
  
  if (*param_1 < 1) {
    if ((DAT_14c7fbe78 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fbe78), cVar1 == '\0')) {
      if (0 < DAT_14c7fbe7c) {
        *param_1 = DAT_14c7fbe7c;
      }
    }
    else {
      FUN_1425cdab0(&DAT_149c4204c,param_1);
      DAT_14c7fbe7c = *param_1;
      FUN_1425019c0(&DAT_14c7fbe78);
    }
    if (DAT_14c7fbe60 != (undefined8 *)0x0) {
      return *DAT_14c7fbe60;
    }
  }
  return 0;
}



// FUNCTION 1425cdee0 FUN_1425cdee0 body=114 status=ok
// SIG undefined FUN_1425cdee0(void)

undefined8 FUN_1425cdee0(int *param_1)

{
  char cVar1;
  
  if (*param_1 < 1) {
    if ((DAT_14c7fbe80 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fbe80), cVar1 == '\0')) {
      if (0 < DAT_14c7fbe84) {
        *param_1 = DAT_14c7fbe84;
      }
    }
    else {
      FUN_1425cdab0("nfkc_cf",param_1);
      DAT_14c7fbe84 = *param_1;
      FUN_1425019c0(&DAT_14c7fbe80);
    }
    if (DAT_14c7fbe68 != (undefined8 *)0x0) {
      return *DAT_14c7fbe68;
    }
  }
  return 0;
}



// FUNCTION 1425cdf60 FUN_1425cdf60 body=101 status=ok
// SIG undefined FUN_1425cdf60(void)

void FUN_1425cdf60(undefined4 param_1,int param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0xfffffffb < param_2 - 6U) {
    local_1c = 0;
    plVar1 = (longlong *)FUN_1425cdd30(param_2,&local_1c);
    if (local_1c < 1) {
      (**(code **)(*plVar1 + 0xa0))(plVar1,param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425cdfd0 FUN_1425cdfd0 body=69 status=ok
// SIG undefined FUN_1425cdfd0(void)

undefined8 * FUN_1425cdfd0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::LoadedNormalizer2Impl::vftable;
  FUN_142532330(param_1[10]);
  FUN_1425ccea0(param_1[0xb]);
  FUN_1425d0a10(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425ce020 FUN_1425ce020 body=38 status=ok
// SIG undefined FUN_1425ce020(void)

undefined8 FUN_1425ce020(undefined8 param_1,int param_2)

{
  FUN_1425d0a10();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425ce050 FUN_1425ce050 body=170 status=ok
// SIG undefined FUN_1425ce050(void)

void FUN_1425ce050(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  longlong param_5,int *param_6)

{
  undefined1 local_c8 [64];
  undefined **local_88;
  undefined2 local_80;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_6 < 1) {
    if (param_5 == 0) {
      local_48 = *param_3;
      uStack_44 = param_3[1];
      uStack_40 = param_3[2];
      uStack_3c = param_3[3];
      FUN_1424a7a70(local_c8,&local_48);
      local_88 = &PTR_FUN_149e18960;
      local_80 = 2;
      (**(code **)(*param_1 + 0x10))(param_1,local_c8,&local_88,param_6);
      FUN_1424a86b0(&local_88,param_4);
      FUN_140859a90(&local_88);
      FUN_140859a90(local_c8);
    }
    else {
      *param_6 = 0x10;
    }
  }
  return;
}



// FUNCTION 1425ce100 Unwind@1425ce100 body=43 status=ok
// SIG undefined Unwind@1425ce100(void)

void Unwind_1425ce100(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 1425ce130 Unwind@1425ce130 body=43 status=ok
// SIG undefined Unwind@1425ce130(void)

void Unwind_1425ce130(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 1425ce160 Unwind@1425ce160 body=43 status=ok
// SIG undefined Unwind@1425ce160(void)

void Unwind_1425ce160(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425ce190 FUN_1425ce190 body=3 status=ok
// SIG undefined FUN_1425ce190(void)

undefined8 FUN_1425ce190(void)

{
  return 0;
}



// FUNCTION 1425ce1a0 FUN_1425ce1a0 body=6 status=ok
// SIG undefined FUN_1425ce1a0(void)

undefined8 FUN_1425ce1a0(void)

{
  return 0xffffffff;
}



// FUNCTION 1425ce1b0 FUN_1425ce1b0 body=3 status=ok
// SIG undefined FUN_1425ce1b0(void)

undefined8 FUN_1425ce1b0(void)

{
  return 0;
}



// FUNCTION 1425ce1c0 FUN_1425ce1c0 body=101 status=ok
// SIG undefined FUN_1425ce1c0(void)

ulonglong FUN_1425ce1c0(longlong *param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 local_78 [64];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    FUN_1424a7a70(local_78,&local_38);
    cVar1 = (**(code **)(*param_1 + 0x50))(param_1,local_78,param_3);
    uVar2 = CONCAT71((int7)((ulonglong)param_3 >> 8),cVar1 != '\0');
    FUN_140859a90(local_78);
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1425ce230 Unwind@1425ce230 body=36 status=ok
// SIG undefined Unwind@1425ce230(void)

void Unwind_1425ce230(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425ce260 FUN_1425ce260 body=173 status=ok
// SIG undefined FUN_1425ce260(void)

undefined8 * FUN_1425ce260(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*param_1 < 1) {
    if ((DAT_14c7fbe98 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fbe98), cVar1 == '\0')) {
      puVar3 = DAT_14c7fbe88;
      if (0 < DAT_14c7fbe9c) {
        *param_1 = DAT_14c7fbe9c;
        puVar3 = DAT_14c7fbe88;
      }
    }
    else {
      iVar2 = *param_1;
      if (iVar2 < 1) {
        DAT_14c7fbe88 = (undefined8 *)thunk_FUN_1424da030(8);
        if (DAT_14c7fbe88 == (undefined8 *)0x0) {
          DAT_14c7fbe88 = (undefined8 *)0x0;
          *param_1 = 7;
          iVar2 = 7;
        }
        else {
          *DAT_14c7fbe88 = icu_64::NoopNormalizer2::vftable;
          FUN_1424d6720(0xb,FUN_1425cea90);
          iVar2 = *param_1;
        }
      }
      DAT_14c7fbe9c = iVar2;
      FUN_1425019c0(&DAT_14c7fbe98);
      puVar3 = DAT_14c7fbe88;
    }
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}



// FUNCTION 1425ce310 FUN_1425ce310 body=70 status=ok
// SIG undefined FUN_1425ce310(void)

void FUN_1425ce310(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424b70d0(param_1 + 8);
  FUN_1424b70d0(param_1 + 6);
  FUN_1424b70d0(param_1 + 4);
  FUN_1424b70d0(param_1 + 1);
  return;
}



// FUNCTION 1425ce360 FUN_1425ce360 body=138 status=ok
// SIG undefined FUN_1425ce360(void)

undefined8 * FUN_1425ce360(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  
  if (*param_2 < 1) {
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x58);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[2] = param_1;
      puVar1[1] = icu_64::ComposeNormalizer2::vftable;
      *(undefined1 *)(puVar1 + 3) = 0;
      puVar1[5] = param_1;
      puVar1[4] = icu_64::DecomposeNormalizer2::vftable;
      puVar1[7] = param_1;
      puVar1[6] = icu_64::FCDNormalizer2::vftable;
      puVar1[9] = param_1;
      puVar1[8] = icu_64::ComposeNormalizer2::vftable;
      *(undefined1 *)(puVar1 + 10) = 1;
      return puVar1;
    }
    *param_2 = 7;
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425ce3f0 FUN_1425ce3f0 body=235 status=ok
// SIG undefined FUN_1425ce3f0(void)

undefined8 * FUN_1425ce3f0(int *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*param_1 < 1) {
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x50);
    if (puVar1 == (undefined8 *)0x0) {
      *param_1 = 7;
    }
    else {
      *puVar1 = icu_64::Normalizer2Impl::vftable;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      puVar1[9] = 0;
      LOCK();
      *(undefined4 *)(puVar1 + 8) = 0;
      UNLOCK();
      FUN_1425d0a60(puVar1,&DAT_149c45ef0,&PTR_DAT_149c45eb8,&DAT_149c42260,&DAT_149c42160);
      if (*param_1 < 1) {
        puVar2 = (undefined8 *)thunk_FUN_1424da030(0x58);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = puVar1;
          puVar2[2] = puVar1;
          puVar2[1] = icu_64::ComposeNormalizer2::vftable;
          *(undefined1 *)(puVar2 + 3) = 0;
          puVar2[5] = puVar1;
          puVar2[4] = icu_64::DecomposeNormalizer2::vftable;
          puVar2[7] = puVar1;
          puVar2[6] = icu_64::FCDNormalizer2::vftable;
          puVar2[9] = puVar1;
          puVar2[8] = icu_64::ComposeNormalizer2::vftable;
          *(undefined1 *)(puVar2 + 10) = 1;
          return puVar2;
        }
        *param_1 = 7;
      }
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425ce4e0 FUN_1425ce4e0 body=134 status=ok
// SIG undefined FUN_1425ce4e0(void)

longlong FUN_1425ce4e0(int *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 < 1) {
    if ((DAT_14c7fbea0 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fbea0), cVar1 == '\0')) {
      lVar3 = DAT_14c7fbe90;
      if (0 < DAT_14c7fbea4) {
        *param_1 = DAT_14c7fbea4;
        lVar3 = DAT_14c7fbe90;
      }
    }
    else {
      DAT_14c7fbe90 = FUN_1425ce3f0(param_1);
      FUN_1424d6720(0xb,FUN_1425cea90);
      DAT_14c7fbea4 = *param_1;
      FUN_1425019c0(&DAT_14c7fbea0);
      lVar3 = DAT_14c7fbe90;
    }
  }
  else {
    lVar3 = 0;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1425ce570 FUN_1425ce570 body=134 status=ok
// SIG undefined FUN_1425ce570(void)

longlong FUN_1425ce570(int *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 < 1) {
    if ((DAT_14c7fbea0 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fbea0), cVar1 == '\0')) {
      lVar3 = DAT_14c7fbe90;
      if (0 < DAT_14c7fbea4) {
        *param_1 = DAT_14c7fbea4;
        lVar3 = DAT_14c7fbe90;
      }
    }
    else {
      DAT_14c7fbe90 = FUN_1425ce3f0(param_1);
      FUN_1424d6720(0xb,FUN_1425cea90);
      DAT_14c7fbea4 = *param_1;
      FUN_1425019c0(&DAT_14c7fbea0);
      lVar3 = DAT_14c7fbe90;
    }
  }
  else {
    lVar3 = 0;
  }
  lVar2 = lVar3 + 0x20;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1425ce600 FUN_1425ce600 body=134 status=ok
// SIG undefined FUN_1425ce600(void)

longlong FUN_1425ce600(int *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 < 1) {
    if ((DAT_14c7fbea0 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fbea0), cVar1 == '\0')) {
      lVar3 = DAT_14c7fbe90;
      if (0 < DAT_14c7fbea4) {
        *param_1 = DAT_14c7fbea4;
        lVar3 = DAT_14c7fbe90;
      }
    }
    else {
      DAT_14c7fbe90 = FUN_1425ce3f0(param_1);
      FUN_1424d6720(0xb,FUN_1425cea90);
      DAT_14c7fbea4 = *param_1;
      FUN_1425019c0(&DAT_14c7fbea0);
      lVar3 = DAT_14c7fbe90;
    }
  }
  else {
    lVar3 = 0;
  }
  lVar2 = lVar3 + 0x30;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1425ce690 FUN_1425ce690 body=131 status=ok
// SIG undefined FUN_1425ce690(void)

undefined8 FUN_1425ce690(int *param_1)

{
  char cVar1;
  
  if (*param_1 < 1) {
    if ((DAT_14c7fbea0 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fbea0), cVar1 == '\0')) {
      if (0 < DAT_14c7fbea4) {
        *param_1 = DAT_14c7fbea4;
      }
    }
    else {
      DAT_14c7fbe90 = (undefined8 *)FUN_1425ce3f0(param_1);
      FUN_1424d6720(0xb,FUN_1425cea90);
      DAT_14c7fbea4 = *param_1;
      FUN_1425019c0(&DAT_14c7fbea0);
    }
    if (DAT_14c7fbe90 != (undefined8 *)0x0) {
      return *DAT_14c7fbe90;
    }
  }
  return 0;
}



// FUNCTION 1425ce720 FUN_1425ce720 body=134 status=ok
// SIG undefined FUN_1425ce720(void)

longlong FUN_1425ce720(int *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 < 1) {
    if ((DAT_14c7fbea0 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fbea0), cVar1 == '\0')) {
      lVar3 = DAT_14c7fbe90;
      if (0 < DAT_14c7fbea4) {
        *param_1 = DAT_14c7fbea4;
        lVar3 = DAT_14c7fbe90;
      }
    }
    else {
      DAT_14c7fbe90 = FUN_1425ce3f0(param_1);
      FUN_1424d6720(0xb,FUN_1425cea90);
      DAT_14c7fbea4 = *param_1;
      FUN_1425019c0(&DAT_14c7fbea0);
      lVar3 = DAT_14c7fbe90;
    }
  }
  else {
    lVar3 = 0;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1425ce7b0 FUN_1425ce7b0 body=169 status=ok
// SIG undefined FUN_1425ce7b0(void)

undefined4
FUN_1425ce7b0(longlong *param_1,undefined4 param_2,longlong param_3,int param_4,int *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_80 [64];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return 0;
  }
  if (param_3 == 0) {
    if (param_4 != 0) goto LAB_1425ce830;
  }
  else if (param_4 < 0) {
LAB_1425ce830:
    *param_5 = 1;
    return 0;
  }
  FUN_1424a7170(local_80,param_3,0,param_4);
  cVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,local_80);
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1424a8350(local_80,param_3,param_4,param_5);
  }
  FUN_140859a90(local_80);
  return uVar2;
}



// FUNCTION 1425ce860 Unwind@1425ce860 body=48 status=ok
// SIG undefined Unwind@1425ce860(void)

void Unwind_1425ce860(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425ce890 FUN_1425ce890 body=10 status=ok
// SIG undefined FUN_1425ce890(void)

void FUN_1425ce890(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425ce897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



// FUNCTION 1425ce8a0 FUN_1425ce8a0 body=189 status=ok
// SIG undefined FUN_1425ce8a0(void)

void FUN_1425ce8a0(void)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if ((DAT_14c7fbea0 == 2) || (cVar2 = FUN_142501800(&DAT_14c7fbea0), cVar2 == '\0')) {
    iVar1 = local_24;
    if (0 < DAT_14c7fbea4) goto LAB_1425ce92a;
  }
  else {
    DAT_14c7fbe90 = FUN_1425ce3f0(&local_24);
    FUN_1424d6720(0xb,FUN_1425cea90);
    iVar1 = local_24;
    DAT_14c7fbea4 = local_24;
    FUN_1425019c0(&DAT_14c7fbea0);
  }
  if (iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
LAB_1425ce92a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425ce980 FUN_1425ce980 body=241 status=ok
// SIG undefined FUN_1425ce980(void)

void FUN_1425ce980(int param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  if ((DAT_14c7fbea0 == 2) || (cVar2 = FUN_142501800(&DAT_14c7fbea0), cVar2 == '\0')) {
    if (0 < DAT_14c7fbea4) {
      local_1c = DAT_14c7fbea4;
    }
  }
  else {
    DAT_14c7fbe90 = (longlong *)FUN_1425ce3f0(&local_1c);
    FUN_1424d6720(0xb,FUN_1425cea90);
    DAT_14c7fbea4 = local_1c;
    FUN_1425019c0(&DAT_14c7fbea0);
  }
  if (DAT_14c7fbe90 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *DAT_14c7fbe90;
  }
  if ((local_1c < 1) && ((int)(uint)*(ushort *)(lVar3 + 8) <= param_1)) {
    if (param_1 < 0x10000) {
      bVar1 = *(byte *)(*(longlong *)(lVar3 + 0x38) + (longlong)(param_1 >> 8));
      if ((bVar1 == 0) || ((1 << ((byte)param_1 >> 5) & (uint)bVar1) == 0)) goto LAB_1425cea2b;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
LAB_1425cea2b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425cea90 FUN_1425cea90 body=149 status=ok
// SIG undefined FUN_1425cea90(void)

undefined8 FUN_1425cea90(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (DAT_14c7fbe88 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c7fbe88)(DAT_14c7fbe88,1);
  }
  plVar2 = DAT_14c7fbe90;
  DAT_14c7fbe88 = (undefined8 *)0x0;
  LOCK();
  DAT_14c7fbe98 = 0;
  UNLOCK();
  if (DAT_14c7fbe90 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*DAT_14c7fbe90;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    FUN_1424b70d0(plVar2 + 8);
    FUN_1424b70d0(plVar2 + 6);
    FUN_1424b70d0(plVar2 + 4);
    FUN_1424b70d0(plVar2 + 1);
    FUN_1401773f0(plVar2);
  }
  DAT_14c7fbe90 = (longlong *)0x0;
  LOCK();
  DAT_14c7fbea0 = 0;
  UNLOCK();
  return 1;
}



// FUNCTION 1425ceb30 FUN_1425ceb30 body=38 status=ok
// SIG undefined FUN_1425ceb30(void)

undefined8 FUN_1425ceb30(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425ceb60 FUN_1425ceb60 body=45 status=ok
// SIG undefined FUN_1425ceb60(void)

longlong FUN_1425ceb60(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)

{
  if (*param_4 < 1) {
    if (param_3 == param_2) {
      *param_4 = 1;
    }
    else {
      FUN_1424a7c80(param_3);
    }
  }
  return param_3;
}



// FUNCTION 1425ceb90 FUN_1425ceb90 body=117 status=ok
// SIG undefined FUN_1425ceb90(void)

void FUN_1425ceb90(undefined8 param_1,ulonglong param_2,undefined8 *param_3,longlong *param_4,
                  longlong param_5,int *param_6)

{
  if (0 < *param_6) {
    return;
  }
  if (param_5 != 0) {
    if ((param_2 & 0x2000) == 0) {
      FUN_1425b00a0(param_5);
    }
    FUN_1425b00d0(param_5,*(undefined4 *)(param_3 + 1));
  }
  if ((param_2 & 0x4000) == 0) {
    (**(code **)(*param_4 + 8))(param_4,*param_3,*(undefined4 *)(param_3 + 1));
  }
                    /* WARNING: Could not recover jumptable at 0x0001425cec01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x18))(param_4);
  return;
}



// FUNCTION 1425cec10 FUN_1425cec10 body=72 status=ok
// SIG undefined FUN_1425cec10(void)

longlong FUN_1425cec10(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)

{
  int iVar1;
  
  if (*param_4 < 1) {
    if (param_2 == param_3) {
      *param_4 = 1;
    }
    else {
      if (*(short *)(param_3 + 8) < 0) {
        iVar1 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar1 = (int)*(short *)(param_3 + 8) >> 5;
      }
      FUN_1424a9690(param_2,param_3,0,iVar1);
    }
  }
  return param_2;
}



// FUNCTION 1425cec60 FUN_1425cec60 body=72 status=ok
// SIG undefined FUN_1425cec60(void)

longlong FUN_1425cec60(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)

{
  int iVar1;
  
  if (*param_4 < 1) {
    if (param_2 == param_3) {
      *param_4 = 1;
    }
    else {
      if (*(short *)(param_3 + 8) < 0) {
        iVar1 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar1 = (int)*(short *)(param_3 + 8) >> 5;
      }
      FUN_1424a9690(param_2,param_3,0,iVar1);
    }
  }
  return param_2;
}



// FUNCTION 1425cecb0 FUN_1425cecb0 body=3 status=ok
// SIG undefined FUN_1425cecb0(void)

undefined8 FUN_1425cecb0(void)

{
  return 0;
}



// FUNCTION 1425cecc0 FUN_1425cecc0 body=8 status=ok
// SIG undefined FUN_1425cecc0(void)

bool FUN_1425cecc0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  return *param_3 < 1;
}



// FUNCTION 1425cecd0 FUN_1425cecd0 body=8 status=ok
// SIG undefined FUN_1425cecd0(void)

bool FUN_1425cecd0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  return *param_3 < 1;
}



// FUNCTION 1425cece0 FUN_1425cece0 body=6 status=ok
// SIG undefined FUN_1425cece0(void)

undefined8 FUN_1425cece0(void)

{
  return 1;
}



// FUNCTION 1425cecf0 FUN_1425cecf0 body=17 status=ok
// SIG undefined FUN_1425cecf0(void)

int FUN_1425cecf0(undefined8 param_1,longlong param_2)

{
  if (*(short *)(param_2 + 8) < 0) {
    return *(int *)(param_2 + 0xc);
  }
  return (int)*(short *)(param_2 + 8) >> 5;
}



// FUNCTION 1425ced10 FUN_1425ced10 body=3 status=ok
// SIG undefined FUN_1425ced10(void)

undefined1 FUN_1425ced10(void)

{
  return 1;
}



// FUNCTION 1425ced20 FUN_1425ced20 body=3 status=ok
// SIG undefined FUN_1425ced20(void)

undefined1 FUN_1425ced20(void)

{
  return 1;
}



// FUNCTION 1425ced30 FUN_1425ced30 body=3 status=ok
// SIG undefined FUN_1425ced30(void)

undefined1 FUN_1425ced30(void)

{
  return 1;
}



// FUNCTION 1425ced40 FUN_1425ced40 body=38 status=ok
// SIG undefined FUN_1425ced40(void)

undefined8 FUN_1425ced40(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425ced70 FUN_1425ced70 body=275 status=ok
// SIG undefined FUN_1425ced70(void)

longlong FUN_1425ced70(longlong *param_1,longlong param_2,longlong param_3,int *param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    if ((*(ushort *)(param_2 + 8) & 0x11) == 0) {
      if ((*(ushort *)(param_2 + 8) & 2) == 0) {
        lVar4 = *(longlong *)(param_2 + 0x18);
      }
      else {
        lVar4 = param_2 + 10;
      }
      if ((param_3 != param_2) && (lVar4 != 0)) {
        uVar2 = 2;
        if ((*(ushort *)(param_3 + 8) & 1) == 0) {
          uVar2 = *(ushort *)(param_3 + 8) & 0x1f;
        }
        *(ushort *)(param_3 + 8) = uVar2;
        local_78 = param_1[1];
        local_68 = 0;
        uStack_60 = 0;
        uStack_5b = 0;
        local_58 = 0;
        uStack_53 = 0;
        uStack_50 = 0;
        if (*(short *)(param_2 + 8) < 0) {
          iVar3 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar3 = (int)*(short *)(param_2 + 8) >> 5;
        }
        local_70 = param_3;
        cVar1 = FUN_1425cfe40(&local_78,iVar3,param_4);
        if (cVar1 != '\0') {
          if (*(short *)(param_2 + 8) < 0) {
            iVar3 = *(int *)(param_2 + 0xc);
          }
          else {
            iVar3 = (int)*(short *)(param_2 + 8) >> 5;
          }
          (**(code **)(*param_1 + 0x88))
                    (param_1,lVar4,lVar4 + (longlong)iVar3 * 2,&local_78,param_4);
        }
        if (local_68 == 0) {
          return param_3;
        }
        FUN_1408550d0(local_70,(ulonglong)(CONCAT35(uStack_53,local_58) - local_68) >> 1);
        return param_3;
      }
    }
    *param_4 = 1;
  }
  FUN_1424a7130(param_3);
  return param_3;
}



// FUNCTION 1425cee90 Unwind@1425cee90 body=26 status=ok
// SIG undefined Unwind@1425cee90(void)

void Unwind_1425cee90(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1425ceeb0 Unwind@1425ceeb0 body=44 status=ok
// SIG undefined Unwind@1425ceeb0(void)

void Unwind_1425ceeb0(undefined8 param_1,longlong param_2)

{
  FUN_142517840(param_2 + 0x30);
  return;
}



// FUNCTION 1425ceee0 FUN_1425ceee0 body=151 status=ok
// SIG undefined FUN_1425ceee0(void)

void FUN_1425ceee0(longlong param_1,uint param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,int *param_6)

{
  if (0 < *param_6) {
    return;
  }
  if (((param_2 & 0x2000) == 0) && (param_5 != 0)) {
    FUN_1425b00a0(param_5);
  }
  FUN_1425d4b30(*(undefined8 *)(param_1 + 8),param_2,*(undefined1 *)(param_1 + 0x10),*param_3,
                (longlong)(int)param_3[1] + *param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x0001425cef73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x18))(param_4);
  return;
}



// FUNCTION 1425cef80 FUN_1425cef80 body=23 status=ok
// SIG undefined FUN_1425cef80(void)

void FUN_1425cef80(void)

{
  FUN_1425cf940();
  return;
}



// FUNCTION 1425cefa0 FUN_1425cefa0 body=23 status=ok
// SIG undefined FUN_1425cefa0(void)

void FUN_1425cefa0(void)

{
  FUN_1425cf940();
  return;
}



// FUNCTION 1425cefc0 FUN_1425cefc0 body=155 status=ok
// SIG undefined FUN_1425cefc0(void)

void FUN_1425cefc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_2c;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined1 *)FUN_1425d1f70(*(undefined8 *)(param_1 + 8),param_2,local_28,&local_2c);
  if (puVar1 != (undefined1 *)0x0) {
    if (puVar1 == local_28) {
      FUN_1424a8e40(param_3);
      if (*(short *)(param_3 + 8) < 0) {
        iVar2 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_3 + 8) >> 5;
      }
      local_40 = local_2c;
      local_48 = 0;
      FUN_1424a9130(param_3,0,iVar2,local_28);
    }
    else {
      FUN_1424a8f10(param_3,0,puVar1,local_2c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 1425cf070 FUN_1425cf070 body=164 status=ok
// SIG undefined FUN_1425cf070(void)

void FUN_1425cf070(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_6c;
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined1 *)FUN_1425d21a0(*(undefined8 *)(param_1 + 8),param_2,local_68,&local_6c);
  if (puVar1 != (undefined1 *)0x0) {
    if (puVar1 == local_68) {
      FUN_1424a8e40(param_3);
      if (*(short *)(param_3 + 8) < 0) {
        iVar2 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_3 + 8) >> 5;
      }
      local_80 = local_6c;
      local_88 = 0;
      FUN_1424a9130(param_3,0,iVar2,local_68);
    }
    else {
      FUN_1424a8f10(param_3,0,puVar1,local_6c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1425cf130 FUN_1425cf130 body=9 status=ok
// SIG undefined FUN_1425cf130(void)

void FUN_1425cf130(longlong param_1)

{
  FUN_1425d30c0(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1425cf140 FUN_1425cf140 body=164 status=ok
// SIG undefined FUN_1425cf140(void)

ushort FUN_1425cf140(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar6 = (uint)param_2;
  uVar5 = 1;
  if ((uVar6 & 0xfffffc00) != 0xd800) {
    plVar2 = *(longlong **)(lVar1 + 0x20);
    lVar3 = plVar2[1];
    if (uVar6 < 0x10000) {
      iVar7 = (uVar6 & 0x3f) + (uint)*(ushort *)(*plVar2 + (param_2 >> 6 & 0x3ffffff) * 2);
    }
    else if (uVar6 < 0x110000) {
      if ((int)uVar6 < (int)plVar2[3]) {
        iVar7 = FUN_1425cceb0();
      }
      else {
        iVar7 = *(int *)((longlong)plVar2 + 0x14) + -2;
      }
    }
    else {
      iVar7 = *(int *)((longlong)plVar2 + 0x14) + -1;
    }
    uVar5 = *(ushort *)(lVar3 + (longlong)iVar7 * 2);
    if (0xfbff < uVar5) {
      return uVar5 >> 1;
    }
  }
  uVar4 = 0;
  if ((*(ushort *)(lVar1 + 0x12) <= uVar5) && (uVar4 = 0, uVar5 < *(ushort *)(lVar1 + 0x1a))) {
    if ((*(byte *)(*(longlong *)(lVar1 + 0x30) + (ulonglong)(uVar5 >> 1) * 2) & 0x80) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ushort)*(byte *)(*(longlong *)(lVar1 + 0x30) + -2 + (ulonglong)(uVar5 >> 1) * 2);
    }
  }
  return uVar4;
}



// FUNCTION 1425cf1f0 FUN_1425cf1f0 body=276 status=ok
// SIG undefined FUN_1425cf1f0(void)

undefined4 FUN_1425cf1f0(longlong param_1,longlong param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined **local_b8;
  undefined2 local_b0;
  undefined8 local_78;
  undefined ***local_70;
  longlong local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (0 < *param_3) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 8) & 0x11) == 0) {
    if ((*(ushort *)(param_2 + 8) & 2) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (lVar4 == 0) goto LAB_1425cf22a;
    }
    else {
      lVar4 = param_2 + 10;
    }
    local_b8 = &PTR_FUN_149e18960;
    local_b0 = 2;
    local_78 = *(undefined8 *)(param_1 + 8);
    local_70 = &local_b8;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5b = 0;
    local_58 = 0;
    uStack_53 = 0;
    uStack_50 = 0;
    cVar1 = FUN_1425cfe40(&local_78,5,param_3);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      if (*(short *)(param_2 + 8) < 0) {
        iVar2 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_2 + 8) >> 5;
      }
      uVar3 = FUN_1425d32e0(*(undefined8 *)(param_1 + 8),lVar4,lVar4 + (longlong)iVar2 * 2,
                            *(undefined1 *)(param_1 + 0x10),0,&local_78,param_3);
    }
    if (local_68 != 0) {
      FUN_1408550d0(local_70,(ulonglong)(CONCAT35(uStack_53,local_58) - local_68) >> 1);
    }
    FUN_140859a90(&local_b8);
  }
  else {
LAB_1425cf22a:
    *param_3 = 1;
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1425cf310 Unwind@1425cf310 body=29 status=ok
// SIG undefined Unwind@1425cf310(void)

void Unwind_1425cf310(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1425cf330 Unwind@1425cf330 body=55 status=ok
// SIG undefined Unwind@1425cf330(void)

void Unwind_1425cf330(undefined8 param_1,longlong param_2)

{
  FUN_142517840(param_2 + 0x80);
  FUN_140859a90(param_2 + 0x40);
  return;
}



// FUNCTION 1425cf370 FUN_1425cf370 body=70 status=ok
// SIG undefined FUN_1425cf370(void)

undefined8 FUN_1425cf370(longlong param_1,longlong *param_2,int *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 < 1) {
    uVar1 = FUN_1425d4b30(*(undefined8 *)(param_1 + 8),0,*(undefined1 *)(param_1 + 0x10),*param_2,
                          (longlong)(int)param_2[1] + *param_2,0,0,param_3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1425cf3c0 FUN_1425cf3c0 body=152 status=ok
// SIG undefined FUN_1425cf3c0(void)

void FUN_1425cf3c0(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < *param_3) goto LAB_1425cf44b;
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x18);
      if (lVar2 == 0) goto LAB_1425cf3ea;
    }
    else {
      lVar2 = param_2 + 10;
    }
    local_14 = 1;
    if ((short)uVar1 < 0) {
      iVar3 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar3 = (int)(short)uVar1 >> 5;
    }
    local_28 = &local_14;
    FUN_1425d4110(*(undefined8 *)(param_1 + 8),lVar2,lVar2 + (longlong)iVar3 * 2,
                  *(undefined1 *)(param_1 + 0x10));
  }
  else {
LAB_1425cf3ea:
    *param_3 = 1;
  }
LAB_1425cf44b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425cf460 FUN_1425cf460 body=109 status=ok
// SIG undefined FUN_1425cf460(void)

ulonglong FUN_1425cf460(longlong *param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < *param_3) {
    return 0;
  }
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x18);
      if (lVar5 == 0) goto LAB_1425cf47b;
      if (-1 < (short)uVar1) goto LAB_1425cf4a8;
LAB_1425cf499:
      iVar2 = *(int *)(param_2 + 0xc);
    }
    else {
      lVar5 = param_2 + 10;
      if ((short)uVar1 < 0) goto LAB_1425cf499;
LAB_1425cf4a8:
      iVar2 = (int)(short)uVar1 >> 5;
    }
    lVar3 = (**(code **)(*param_1 + 0x98))(param_1,lVar5,lVar5 + (longlong)iVar2 * 2);
    uVar4 = (ulonglong)(lVar3 - lVar5) >> 1;
  }
  else {
LAB_1425cf47b:
    *param_3 = 1;
  }
  return uVar4;
}



// FUNCTION 1425cf4d0 FUN_1425cf4d0 body=150 status=ok
// SIG undefined FUN_1425cf4d0(void)

ulonglong FUN_1425cf4d0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined7 uVar8;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar7 = CONCAT71(uVar8,1);
  uVar5 = (uint)param_2;
  if ((int)(uint)*(ushort *)(lVar1 + 10) <= (int)uVar5) {
    uVar4 = 1;
    if ((uVar5 & 0xfffffc00) != 0xd800) {
      plVar2 = *(longlong **)(lVar1 + 0x20);
      lVar3 = plVar2[1];
      if (uVar5 < 0x10000) {
        iVar6 = (uVar5 & 0x3f) + (uint)*(ushort *)(*plVar2 + (param_2 >> 6 & 0x3ffffff) * 2);
      }
      else if (uVar5 < 0x110000) {
        if ((int)uVar5 < (int)plVar2[3]) {
          iVar6 = FUN_1425cceb0();
        }
        else {
          iVar6 = *(int *)((longlong)plVar2 + 0x14) + -2;
        }
      }
      else {
        iVar6 = *(int *)((longlong)plVar2 + 0x14) + -1;
      }
      uVar4 = *(ushort *)(lVar3 + (longlong)iVar6 * 2);
    }
    if (*(ushort *)(lVar1 + 0x16) <= uVar4) {
      uVar7 = CONCAT71(uVar8,uVar4 < *(ushort *)(lVar1 + 0x1e) && *(ushort *)(lVar1 + 0x1a) <= uVar4
                      );
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1425cf570 FUN_1425cf570 body=183 status=ok
// SIG undefined FUN_1425cf570(void)

ulonglong FUN_1425cf570(longlong param_1,ulonglong param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  cVar1 = *(char *)(param_1 + 0x10);
  uVar7 = (uint)param_2;
  if ((uVar7 & 0xfffffc00) == 0xd800) {
    uVar6 = 0xd801;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 8);
    plVar4 = *(longlong **)(lVar3 + 0x20);
    lVar5 = plVar4[1];
    if (uVar7 < 0x10000) {
      iVar8 = (uVar7 & 0x3f) + (uint)*(ushort *)(*plVar4 + (param_2 >> 6 & 0x3ffffff) * 2);
    }
    else if (uVar7 < 0x110000) {
      if ((int)uVar7 < (int)plVar4[3]) {
        iVar8 = FUN_1425cceb0();
      }
      else {
        iVar8 = *(int *)((longlong)plVar4 + 0x14) + -2;
      }
    }
    else {
      iVar8 = *(int *)((longlong)plVar4 + 0x14) + -1;
    }
    uVar2 = *(ushort *)(lVar5 + (longlong)iVar8 * 2);
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = CONCAT71((int7)(int3)((uint)iVar8 >> 8),1);
      if ((cVar1 != '\0') && (uVar2 != 1)) {
        if (uVar2 < *(ushort *)(lVar3 + 0x1a)) {
          uVar2 = *(ushort *)(*(longlong *)(lVar3 + 0x30) + (ulonglong)(uVar2 & 0xfffffffe));
          uVar6 = (ulonglong)uVar2;
          bVar9 = uVar2 < 0x200;
        }
        else {
          bVar9 = (uVar2 & 6) < 3;
        }
        uVar6 = CONCAT71((int7)(uVar6 >> 8),bVar9);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1425cf630 FUN_1425cf630 body=167 status=ok
// SIG undefined FUN_1425cf630(void)

undefined2 FUN_1425cf630(longlong param_1,ulonglong param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  lVar3 = *(longlong *)(param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x10);
  uVar8 = (uint)param_2;
  uVar7 = 1;
  if ((uVar8 & 0xfffffc00) != 0xd800) {
    plVar4 = *(longlong **)(lVar3 + 0x20);
    lVar5 = plVar4[1];
    if (uVar8 < 0x10000) {
      iVar9 = (uVar8 & 0x3f) + (uint)*(ushort *)(*plVar4 + (param_2 >> 6 & 0x3ffffff) * 2);
    }
    else if (uVar8 < 0x110000) {
      if ((int)uVar8 < (int)plVar4[3]) {
        iVar9 = FUN_1425cceb0();
      }
      else {
        iVar9 = *(int *)((longlong)plVar4 + 0x14) + -2;
      }
    }
    else {
      iVar9 = *(int *)((longlong)plVar4 + 0x14) + -1;
    }
    uVar7 = (uint)*(ushort *)(lVar5 + (longlong)iVar9 * 2);
  }
  uVar6 = 0;
  if (((((ushort)uVar7 < *(ushort *)(lVar3 + 0x12)) && ((uVar7 & 1) != 0)) &&
      (uVar6 = 1, cVar1 != '\0')) && ((ushort)uVar7 != 1)) {
    uVar2 = *(ushort *)(*(longlong *)(lVar3 + 0x30) + (ulonglong)(uVar7 & 0xfffe));
    uVar6 = CONCAT11((char)(uVar2 >> 8),uVar2 < 0x200);
  }
  return uVar6;
}



// FUNCTION 1425cf6e0 FUN_1425cf6e0 body=50 status=ok
// SIG undefined FUN_1425cf6e0(void)

void FUN_1425cf6e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1425d32e0(*(undefined8 *)(param_1 + 8),param_2,param_3,*(undefined1 *)(param_1 + 0x10),1,
                param_4,param_5);
  return;
}



// FUNCTION 1425cf720 FUN_1425cf720 body=53 status=ok
// SIG undefined FUN_1425cf720(void)

void FUN_1425cf720(longlong param_1)

{
  FUN_1425d45c0(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1425cf760 FUN_1425cf760 body=36 status=ok
// SIG undefined FUN_1425cf760(void)

void FUN_1425cf760(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1425d4110(*(undefined8 *)(param_1 + 8),param_2,param_3,*(undefined1 *)(param_1 + 0x10),0);
  return;
}



// FUNCTION 1425cf790 FUN_1425cf790 body=147 status=ok
// SIG undefined FUN_1425cf790(void)

char FUN_1425cf790(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar6 = (uint)param_2;
  uVar5 = 1;
  if ((uVar6 & 0xfffffc00) != 0xd800) {
    plVar2 = *(longlong **)(lVar1 + 0x20);
    lVar3 = plVar2[1];
    if (uVar6 < 0x10000) {
      iVar7 = (uVar6 & 0x3f) + (uint)*(ushort *)(*plVar2 + (param_2 >> 6 & 0x3ffffff) * 2);
    }
    else if (uVar6 < 0x110000) {
      if ((int)uVar6 < (int)plVar2[3]) {
        iVar7 = FUN_1425cceb0();
      }
      else {
        iVar7 = *(int *)((longlong)plVar2 + 0x14) + -2;
      }
    }
    else {
      iVar7 = *(int *)((longlong)plVar2 + 0x14) + -1;
    }
    uVar5 = *(ushort *)(lVar3 + (longlong)iVar7 * 2);
  }
  cVar4 = (*(ushort *)(lVar1 + 0x1e) <= uVar5) * '\x02';
  if (uVar5 < *(ushort *)(lVar1 + 0x12)) {
    cVar4 = '\x01';
  }
  if (0xfe01 < uVar5) {
    cVar4 = '\x01';
  }
  return cVar4;
}



// FUNCTION 1425cf830 FUN_1425cf830 body=118 status=ok
// SIG undefined FUN_1425cf830(void)

bool FUN_1425cf830(longlong *param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (0 < *param_3) {
    return false;
  }
  uVar2 = *(ushort *)(param_2 + 8);
  if ((uVar2 & 0x11) == 0) {
    if ((uVar2 & 2) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x18);
      if (lVar3 == 0) goto LAB_1425cf84d;
      if (-1 < (short)uVar2) goto LAB_1425cf87c;
LAB_1425cf86d:
      iVar4 = *(int *)(param_2 + 0xc);
    }
    else {
      lVar3 = param_2 + 10;
      if ((short)uVar2 < 0) goto LAB_1425cf86d;
LAB_1425cf87c:
      iVar4 = (int)(short)uVar2 >> 5;
    }
    lVar1 = lVar3 + (longlong)iVar4 * 2;
    lVar3 = (**(code **)(*param_1 + 0x98))(param_1,lVar3,lVar1);
    bVar5 = lVar1 == lVar3;
  }
  else {
LAB_1425cf84d:
    *param_3 = 1;
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 1425cf8b0 FUN_1425cf8b0 body=117 status=ok
// SIG undefined FUN_1425cf8b0(void)

bool FUN_1425cf8b0(longlong *param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  bVar5 = false;
  if (0 < *param_3) {
    return false;
  }
  uVar2 = *(ushort *)(param_2 + 8);
  if ((uVar2 & 0x11) == 0) {
    if ((uVar2 & 2) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (lVar4 == 0) goto LAB_1425cf8cb;
      if (-1 < (short)uVar2) goto LAB_1425cf8f8;
LAB_1425cf8e9:
      iVar3 = *(int *)(param_2 + 0xc);
    }
    else {
      lVar4 = param_2 + 10;
      if ((short)uVar2 < 0) goto LAB_1425cf8e9;
LAB_1425cf8f8:
      iVar3 = (int)(short)uVar2 >> 5;
    }
    lVar1 = lVar4 + (longlong)iVar3 * 2;
    lVar4 = (**(code **)(*param_1 + 0x98))(param_1,lVar4,lVar1);
    bVar5 = lVar1 == lVar4;
  }
  else {
LAB_1425cf8cb:
    *param_3 = 1;
  }
  return bVar5;
}



// FUNCTION 1425cf930 FUN_1425cf930 body=6 status=ok
// SIG undefined FUN_1425cf930(void)

undefined8 FUN_1425cf930(void)

{
  return 1;
}



// FUNCTION 1425cf940 FUN_1425cf940 body=401 status=ok
// SIG undefined FUN_1425cf940(void)

longlong FUN_1425cf940(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
                      int *param_5)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined ***in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  longlong *plVar6;
  undefined4 uVar7;
  undefined **local_c8;
  short local_c0;
  int local_bc;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 local_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined8 local_48;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  plVar6 = &local_88;
  local_48 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    if (((*(byte *)(param_2 + 8) & 1) == 0) &&
       (uVar1 = *(ushort *)(param_3 + 8), (uVar1 & 0x11) == 0)) {
      if ((uVar1 & 2) == 0) {
        lVar5 = *(longlong *)(param_3 + 0x18);
      }
      else {
        lVar5 = param_3 + 10;
      }
      if ((param_2 != param_3) && (lVar5 != 0)) {
        if (*(short *)(param_2 + 8) < 0) {
          iVar4 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar4 = (int)*(short *)(param_2 + 8) >> 5;
        }
        local_c8 = &PTR_FUN_149e18960;
        local_c0 = 2;
        local_88 = param_1[1];
        local_78 = 0;
        uStack_70 = 0;
        uStack_6b = 0;
        local_68 = 0;
        uStack_63 = 0;
        uStack_60 = 0;
        if ((short)uVar1 < 0) {
          iVar3 = *(int *)(param_3 + 0xc);
        }
        else {
          iVar3 = (int)(short)uVar1 >> 5;
        }
        local_80 = param_2;
        cVar2 = FUN_1425cfe40(plVar6,iVar3 + iVar4,param_5);
        if (cVar2 != '\0') {
          if (*(short *)(param_3 + 8) < 0) {
            iVar3 = *(int *)(param_3 + 0xc);
          }
          else {
            iVar3 = (int)*(short *)(param_3 + 8) >> 5;
          }
          in_stack_ffffffffffffff18 = &local_c8;
          (**(code **)(*param_1 + 0x90))
                    (param_1,lVar5,(longlong)iVar3 * 2 + lVar5,param_4,in_stack_ffffffffffffff18,
                     plVar6,param_5);
          uVar7 = (undefined4)((ulonglong)plVar6 >> 0x20);
        }
        if (local_78 != 0) {
          FUN_1408550d0(local_80,(ulonglong)(CONCAT35(uStack_63,local_68) - local_78) >> 1);
        }
        if (0 < *param_5) {
          if (-1 < local_c0) {
            local_bc = (int)local_c0 >> 5;
          }
          FUN_1424a9610(param_2,iVar4 - local_bc,0x7fffffff,&local_c8,
                        (ulonglong)in_stack_ffffffffffffff18 & 0xffffffff00000000,
                        CONCAT44(uVar7,local_bc));
        }
        FUN_140859a90(&local_c8);
        return param_2;
      }
    }
    *param_5 = 1;
  }
  return param_2;
}



// FUNCTION 1425cfae0 Unwind@1425cfae0 body=33 status=ok
// SIG undefined Unwind@1425cfae0(void)

void Unwind_1425cfae0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1425cfb10 Unwind@1425cfb10 body=54 status=ok
// SIG undefined Unwind@1425cfb10(void)

void Unwind_1425cfb10(undefined8 param_1,longlong param_2)

{
  FUN_142517840(param_2 + 0x80);
  return;
}



// FUNCTION 1425cfb50 Unwind@1425cfb50 body=55 status=ok
// SIG undefined Unwind@1425cfb50(void)

void Unwind_1425cfb50(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x40);
  return;
}



// FUNCTION 1425cfb90 FUN_1425cfb90 body=38 status=ok
// SIG undefined FUN_1425cfb90(void)

undefined8 FUN_1425cfb90(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425cfbc0 FUN_1425cfbc0 body=9 status=ok
// SIG undefined FUN_1425cfbc0(void)

void FUN_1425cfbc0(longlong param_1)

{
  FUN_1425d2680(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1425cfbd0 FUN_1425cfbd0 body=9 status=ok
// SIG undefined FUN_1425cfbd0(void)

void FUN_1425cfbd0(longlong param_1)

{
  FUN_1425d2780(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1425cfbe0 FUN_1425cfbe0 body=149 status=ok
// SIG undefined FUN_1425cfbe0(void)

undefined8 FUN_1425cfbe0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined7 uVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar8 = (uint)param_2;
  uVar4 = (ulonglong)(uVar8 & 0xfffffc00);
  uVar7 = 1;
  if ((uVar8 & 0xfffffc00) != 0xd800) {
    plVar2 = *(longlong **)(lVar1 + 0x20);
    lVar3 = plVar2[1];
    if (uVar8 < 0x10000) {
      iVar9 = (uVar8 & 0x3f) + (uint)*(ushort *)(*plVar2 + (param_2 >> 6 & 0x3ffffff) * 2);
    }
    else if (uVar8 < 0x110000) {
      if ((int)uVar8 < (int)plVar2[3]) {
        iVar9 = FUN_1425cceb0();
      }
      else {
        iVar9 = *(int *)((longlong)plVar2 + 0x14) + -2;
      }
    }
    else {
      iVar9 = *(int *)((longlong)plVar2 + 0x14) + -1;
    }
    uVar4 = (ulonglong)iVar9;
    uVar7 = *(ushort *)(lVar3 + uVar4 * 2);
  }
  uVar6 = (undefined7)(uVar4 >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if ((uVar7 != 0xfe00) && (*(ushort *)(lVar1 + 0xe) <= uVar7)) {
    uVar5 = CONCAT71(uVar6,uVar7 < 0xfc01 && *(ushort *)(lVar1 + 0x1e) <= uVar7);
  }
  return uVar5;
}



// FUNCTION 1425cfc80 FUN_1425cfc80 body=9 status=ok
// SIG undefined FUN_1425cfc80(void)

void FUN_1425cfc80(longlong param_1)

{
  FUN_1425d1000(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1425cfc90 FUN_1425cfc90 body=9 status=ok
// SIG undefined FUN_1425cfc90(void)

void FUN_1425cfc90(longlong param_1)

{
  FUN_1425d23c0(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1425cfca0 FUN_1425cfca0 body=27 status=ok
// SIG undefined FUN_1425cfca0(void)

void FUN_1425cfca0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1425d1000(*(undefined8 *)(param_1 + 8),param_2,param_3,0,param_4);
  return;
}


