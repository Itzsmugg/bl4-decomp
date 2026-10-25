// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1452116f0 FUN_1452116f0 body=3236 status=ok
// SIG undefined FUN_1452116f0(void)

void FUN_1452116f0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *_Src;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  bool bVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  char *pcVar24;
  uint *puVar25;
  uint uVar26;
  undefined4 *puVar27;
  ulonglong uVar28;
  byte *pbVar29;
  uint uVar30;
  uint uVar31;
  byte *pbVar32;
  char cVar33;
  longlong *plVar34;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint local_94;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar34 = *(longlong **)(param_1 + 0x98);
  lVar9 = *(longlong *)(param_3 + 0x70);
  uVar22 = (ulonglong)param_4;
  local_90 = plVar34;
  local_88 = param_3;
  local_80 = param_2;
  if (((*(int *)(param_3 + 0x3c) == 0x4b6e6461) && (param_4 + 3 <= param_5)) &&
     ((*(byte *)(lVar9 + 0xc + uVar22 * 0x14) >> 5 & 1) == 0)) {
    bVar16 = *(byte *)(lVar9 + 0x12 + uVar22 * 0x14);
    uVar17 = 0;
    uVar26 = uVar17;
    if (bVar16 < 0x20) {
      uVar26 = 1 << (bVar16 & 0x1f);
    }
    if ((uVar26 & 0x10000) != 0) {
      uVar26 = param_4 + 1;
      puVar1 = (undefined8 *)(lVar9 + (ulonglong)uVar26 * 0x14);
      if ((*(byte *)(lVar9 + 0xc + (ulonglong)uVar26 * 0x14) >> 5 & 1) == 0) {
        uVar31 = uVar17;
        if (*(byte *)((longlong)puVar1 + 0x12) < 0x20) {
          uVar31 = 1 << (*(byte *)((longlong)puVar1 + 0x12) & 0x1f);
        }
        if (((uVar31 >> 4 & 1) != 0) &&
           (puVar2 = (undefined8 *)(lVar9 + (ulonglong)(param_4 + 2) * 0x14),
           (*(byte *)(lVar9 + 0xc + (ulonglong)(param_4 + 2) * 0x14) >> 5 & 1) == 0)) {
          if (*(byte *)((longlong)puVar2 + 0x12) < 0x20) {
            uVar17 = 1 << (*(byte *)((longlong)puVar2 + 0x12) & 0x1f);
          }
          if ((uVar17 >> 6 & 1) != 0) {
            if (1 < (param_4 + 3) - uVar26) {
              FUN_144b61d00(param_3);
            }
            uVar14 = puVar1[1];
            uVar7 = *(undefined4 *)(puVar1 + 2);
            uVar10 = *(undefined4 *)puVar2;
            uVar11 = *(undefined4 *)((longlong)puVar2 + 4);
            uVar12 = *(undefined4 *)(puVar2 + 1);
            uVar13 = *(undefined4 *)((longlong)puVar2 + 0xc);
            uVar8 = *(undefined4 *)(puVar2 + 2);
            *puVar2 = *puVar1;
            puVar2[1] = uVar14;
            *(undefined4 *)(puVar2 + 2) = uVar7;
            *(undefined4 *)puVar1 = uVar10;
            *(undefined4 *)((longlong)puVar1 + 4) = uVar11;
            *(undefined4 *)(puVar1 + 1) = uVar12;
            *(undefined4 *)((longlong)puVar1 + 0xc) = uVar13;
            *(undefined4 *)(puVar1 + 2) = uVar8;
          }
        }
      }
    }
  }
  uVar21 = 0;
  local_94 = local_94 & 0xffffff00;
  uVar23 = uVar22;
  uVar26 = param_5;
  if (((int)plVar34[0xb] == 0) || (param_5 < param_4 + 3)) {
LAB_145211a5a:
    uVar17 = local_94;
    if ((*(int *)(*plVar34 + 0x14) == 2) && (*(char *)(lVar9 + 0x12 + uVar22 * 0x14) == '\x0f')) {
      uVar23 = (ulonglong)(param_4 + 1);
      if (param_4 + 1 < param_5) {
        pbVar32 = (byte *)(lVar9 + 0x12 + uVar23 * 0x14);
        do {
          if ((pbVar32[-6] >> 5 & 1) != 0) break;
          uVar26 = 0;
          if (*pbVar32 < 0x20) {
            uVar26 = 1 << (*pbVar32 & 0x1f);
          }
          if ((uVar26 & 0x60) == 0) break;
          uVar26 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar26;
          pbVar32 = pbVar32 + 0x14;
        } while (uVar26 < param_5);
      }
      uVar26 = param_4;
      uVar17 = 1;
    }
  }
  else {
    iVar18 = *(int *)(*plVar34 + 0x14);
    if (iVar18 != 0) {
LAB_14521189c:
      if (iVar18 == 1) {
        uVar28 = (ulonglong)(param_4 + 2);
        puVar27 = (undefined4 *)(lVar9 + uVar28 * 0x14);
        if (*(char *)(lVar9 + 0x12 + uVar28 * 0x14) == '\x06') goto LAB_1452118bd;
      }
      goto LAB_145211a5a;
    }
    uVar28 = (ulonglong)(param_4 + 2);
    puVar27 = (undefined4 *)(lVar9 + uVar28 * 0x14);
    if ((*(byte *)(lVar9 + 0xc + uVar28 * 0x14) >> 5 & 1) == 0) {
      uVar17 = 0;
      if (*(byte *)((longlong)puVar27 + 0x12) < 0x20) {
        uVar17 = 1 << (*(byte *)((longlong)puVar27 + 0x12) & 0x1f);
      }
      if ((uVar17 & 0x60) != 0) goto LAB_14521189c;
    }
LAB_1452118bd:
    local_60 = (char *)CONCAT44(*(undefined4 *)(lVar9 + (ulonglong)(param_4 + 1) * 0x14),
                                *(undefined4 *)(lVar9 + uVar22 * 0x14));
    if (iVar18 == 1) {
      uStack_58 = *puVar27;
    }
    else {
      uStack_58 = 0;
    }
    if ((int)plVar34[3] != 0) {
      do {
        local_a8 = (uint)*(byte *)((longlong)plVar34 + 0x1c);
        iVar18 = FUN_1451e07d0(local_80,*(undefined2 *)(plVar34[2] + uVar21 * 8),&local_60);
        if (iVar18 != 0) goto LAB_1452119f8;
        uVar17 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar17;
      } while (uVar17 < *(uint *)(plVar34 + 3));
    }
    uVar21 = 0;
    uVar17 = local_94;
    if ((*(int *)(*plVar34 + 0x14) == 1) && ((int)plVar34[3] != 0)) {
      do {
        local_a8 = (uint)*(byte *)((longlong)plVar34 + 0x1c);
        iVar18 = FUN_1451e07d0(local_80,*(undefined2 *)(plVar34[2] + uVar21 * 8),&local_60);
        if (iVar18 != 0) goto LAB_1452119f8;
        uVar31 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar31;
        uVar17 = local_94;
      } while (uVar31 < *(uint *)(plVar34 + 3));
    }
  }
  uVar28 = uVar23;
  cVar33 = (char)uVar17;
  goto LAB_14521199e;
LAB_145211ca0:
  do {
    if ((pbVar32[-6] >> 5 & 1) == 0) {
      uVar31 = 0;
      if (*pbVar32 < 0x20) {
        uVar31 = 1 << (*pbVar32 & 0x1f);
      }
      if ((uVar31 & 0xb1806) != 0) {
        *(undefined1 *)(lVar9 + 0x13 + uVar21 * 0x14) = 0xd;
        break;
      }
    }
    uVar31 = (int)uVar21 + 1;
    uVar21 = (ulonglong)uVar31;
    pbVar32 = pbVar32 + 0x14;
  } while (uVar31 < param_5);
  goto LAB_145211cdb;
  while( true ) {
    if ((*(int *)(local_88 + 0x3c) == 0x4b6e6461) && (*pbVar32 == 4)) break;
    uVar19 = (int)uVar28 - 1;
    uVar28 = (ulonglong)uVar19;
    pbVar32 = pbVar32 + -0x14;
    if (uVar19 <= uVar31) break;
LAB_145211d40:
    if ((pbVar32[-6] >> 5 & 1) == 0) {
      uVar19 = 0;
      if (*pbVar32 < 0x20) {
        uVar19 = 1 << (*pbVar32 & 0x1f);
      }
      if ((uVar19 & 0xb1806) != 0) break;
    }
  }
LAB_145211d7e:
  puVar27 = (undefined4 *)(lVar9 + uVar28 * 0x14);
  if ((*(char *)(lVar9 + 0x12 + uVar28 * 0x14) != '\x04') && (uVar31 < (uint)uVar28)) {
    puVar4 = (undefined4 *)(lVar9 + uVar21 * 0x14);
    local_60._0_4_ = *puVar4;
    local_60._4_4_ = puVar4[1];
    uStack_58 = puVar4[2];
    uStack_54 = puVar4[3];
    uVar7 = *(undefined4 *)(lVar9 + 0x10 + uVar21 * 0x14);
    memmove((void *)(lVar9 + uVar21 * 0x14),(void *)(lVar9 + (ulonglong)(uVar31 + 1) * 0x14),
            (ulonglong)((uint)uVar28 - uVar31) * 0x14);
    *puVar27 = (undefined4)local_60;
    puVar27[1] = local_60._4_4_;
    puVar27[2] = uStack_58;
    puVar27[3] = uStack_54;
    puVar27[4] = uVar7;
  }
  goto LAB_145211dd3;
LAB_1452119f8:
  if ((uint)uVar28 < param_5) {
    pbVar32 = (byte *)(lVar9 + 0x12 + uVar28 * 0x14);
    do {
      if ((pbVar32[-6] >> 5 & 1) != 0) goto LAB_145211a4f;
      if (*pbVar32 < 0x20) {
        uVar26 = 1 << (*pbVar32 & 0x1f);
      }
      else {
        uVar26 = 0;
      }
      if ((uVar26 & 0x60) == 0) goto LAB_145211a4f;
      uVar26 = (int)uVar28 + 1;
      uVar28 = (ulonglong)uVar26;
      pbVar32 = pbVar32 + 0x14;
    } while (uVar26 < param_5);
    cVar33 = '\x01';
    uVar26 = param_4;
  }
  else {
LAB_145211a4f:
    cVar33 = '\x01';
    uVar26 = param_4;
  }
LAB_14521199e:
  uVar17 = (uint)uVar28;
  if (*(int *)(*plVar34 + 0xc) == 0) {
    if (cVar33 == '\0') {
      uVar26 = uVar17;
    }
    if (uVar17 < param_5) {
      pbVar32 = (byte *)(lVar9 + 0x12 + uVar28 * 0x14);
      do {
        uVar19 = (uint)uVar28;
        uVar31 = uVar26;
        if ((pbVar32[-6] >> 5 & 1) == 0) {
          if (*pbVar32 < 0x20) {
            uVar30 = 1 << (*pbVar32 & 0x1f);
          }
          else {
            uVar30 = 0;
          }
          if ((((uVar30 & 0xb1806) != 0) && (uVar31 = uVar19, uVar17 < uVar19)) &&
             (*(char *)(lVar9 + 0x12 + (ulonglong)(uVar19 - 1) * 0x14) == '\x06')) break;
        }
        uVar26 = uVar31;
        uVar28 = (ulonglong)(uVar19 + 1);
        pbVar32 = pbVar32 + 0x14;
      } while (uVar19 + 1 < param_5);
    }
    uVar31 = uVar26 + 1;
    if (uVar31 < param_5) {
      uVar23 = (ulonglong)(param_5 - uVar31);
      pbVar32 = (byte *)(lVar9 + 0x12 + (ulonglong)uVar31 * 0x14);
      do {
        if ((pbVar32[-6] >> 5 & 1) == 0) {
          if (*pbVar32 < 0x20) {
            uVar31 = 1 << (*pbVar32 & 0x1f);
          }
          else {
            uVar31 = 0;
          }
          if ((uVar31 & 0xb1806) != 0) {
            pbVar32[1] = 8;
          }
        }
        pbVar32 = pbVar32 + 0x14;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  else if (*(int *)(*plVar34 + 0xc) == 1) {
    uVar23 = (ulonglong)param_5;
    bVar15 = false;
    do {
      iVar18 = (int)uVar23;
      uVar31 = iVar18 - 1;
      uVar23 = (ulonglong)uVar31;
      lVar3 = lVar9 + uVar23 * 0x14;
      if ((*(byte *)(lVar9 + 0xc + uVar23 * 0x14) >> 5 & 1) == 0) {
        if (*(byte *)(lVar3 + 0x12) < 0x20) {
          uVar19 = 1 << (*(byte *)(lVar3 + 0x12) & 0x1f);
        }
        else {
          uVar19 = 0;
        }
        if ((uVar19 & 0xb1806) == 0) goto LAB_145211aef;
        cVar5 = *(char *)(lVar3 + 0x13);
        uVar26 = uVar31;
        if ((cVar5 != '\b') && ((cVar5 != '\v' || (bVar15)))) break;
        if (cVar5 == '\b') {
          bVar15 = true;
        }
      }
      else {
LAB_145211aef:
        if (((param_4 < uVar31) && (*(char *)(lVar3 + 0x12) == '\x06')) &&
           (*(char *)(lVar9 + 0x12 + (ulonglong)(iVar18 - 2) * 0x14) == '\x04')) break;
      }
    } while (uVar17 < uVar31);
  }
  if (((cVar33 != '\0') && (uVar26 == param_4)) && (uVar17 - uVar26 < 3)) {
    cVar33 = '\0';
  }
  if (param_4 < uVar26) {
    uVar23 = (ulonglong)(uVar26 - param_4);
    pbVar32 = (byte *)(lVar9 + 0x13 + uVar22 * 0x14);
    do {
      bVar16 = *pbVar32;
      if (3 < bVar16) {
        bVar16 = 3;
      }
      *pbVar32 = bVar16;
      uVar23 = uVar23 - 1;
      pbVar32 = pbVar32 + 0x14;
    } while (uVar23 != 0);
  }
  if (uVar26 < param_5) {
    *(undefined1 *)(lVar9 + 0x13 + (ulonglong)uVar26 * 0x14) = 4;
  }
  uVar17 = uVar26 + 1;
  uVar23 = (ulonglong)uVar17;
  if (uVar17 < param_5) {
    pcVar20 = (char *)(lVar9 + 0x12 + uVar23 * 0x14);
    uVar21 = uVar23;
    do {
      if (*pcVar20 == '\a') {
        uVar31 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar31;
        if (uVar31 < param_5) {
          pbVar32 = (byte *)(lVar9 + 0x12 + uVar21 * 0x14);
          goto LAB_145211ca0;
        }
        break;
      }
      uVar31 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar31;
      pcVar20 = pcVar20 + 0x14;
    } while (uVar31 < param_5);
  }
LAB_145211cdb:
  if (cVar33 != '\0') {
    *(undefined1 *)(lVar9 + 0x13 + uVar22 * 0x14) = 1;
  }
  if (((char)plVar34[1] != '\0') && (uVar17 < param_5)) {
    pcVar20 = (char *)(lVar9 + 0x12 + uVar23 * 0x14);
    uVar21 = uVar23;
    do {
      uVar31 = (uint)uVar21;
      if (*pcVar20 == '\x04') {
        uVar28 = (ulonglong)(param_5 - 1);
        if (param_5 - 1 <= uVar31) goto LAB_145211d7e;
        pbVar32 = (byte *)(lVar9 + 0x12 + uVar28 * 0x14);
        goto LAB_145211d40;
      }
      uVar21 = (ulonglong)(uVar31 + 1);
      pcVar20 = pcVar20 + 0x14;
    } while (uVar31 + 1 < param_5);
  }
LAB_145211dd3:
  cVar33 = '\0';
  if (param_4 < param_5) {
    pcVar20 = (char *)(lVar9 + 0x13 + uVar22 * 0x14);
    uVar31 = param_4;
    do {
      uVar21 = (ulonglong)uVar31;
      bVar16 = pcVar20[-1];
      if (bVar16 < 0x20) {
        uVar19 = 1 << (bVar16 & 0x1f);
      }
      else {
        uVar19 = 0;
      }
      if ((uVar19 & 0x22078) == 0) {
        if (*pcVar20 != '\x0e') {
          cVar33 = *pcVar20;
        }
      }
      else {
        *pcVar20 = cVar33;
        if ((bVar16 == 4) && (uVar19 = uVar31, cVar33 == '\x02')) {
          do {
            if (uVar19 <= param_4) goto LAB_145211e49;
            iVar18 = (int)uVar21;
            uVar19 = iVar18 - 1;
            uVar21 = (ulonglong)uVar19;
          } while (*(char *)(lVar9 + 0x13 + uVar21 * 0x14) == '\x02');
          *pcVar20 = *(char *)(lVar9 + 0x13 + (ulonglong)(iVar18 - 1) * 0x14);
        }
      }
LAB_145211e49:
      uVar31 = uVar31 + 1;
      pcVar20 = pcVar20 + 0x14;
      plVar34 = local_90;
    } while (uVar31 < param_5);
  }
  if (uVar17 < param_5) {
    pbVar32 = (byte *)(lVar9 + 0x12 + uVar23 * 0x14);
    do {
      uVar17 = (uint)uVar23;
      if ((pbVar32[-6] >> 5 & 1) == 0) {
        if (*pbVar32 < 0x20) {
          uVar31 = 1 << (*pbVar32 & 0x1f);
        }
        else {
          uVar31 = 0;
        }
        if ((uVar31 & 0xb1806) == 0) goto LAB_145211efa;
        uVar31 = uVar26 + 1;
        uVar26 = uVar17;
        if (uVar31 < uVar17) {
          pbVar29 = (byte *)(lVar9 + 0x13 + (ulonglong)uVar31 * 0x14);
          uVar23 = (ulonglong)(uVar17 - uVar31);
          do {
            if (*pbVar29 < 0xe) {
              *pbVar29 = pbVar32[1];
            }
            pbVar29 = pbVar29 + 0x14;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      else {
LAB_145211efa:
        if (*pbVar32 == 7) {
          uVar26 = uVar17;
        }
      }
      uVar23 = (ulonglong)(uVar17 + 1);
      pbVar32 = pbVar32 + 0x14;
      plVar34 = local_90;
    } while (uVar17 + 1 < param_5);
  }
  puVar27 = (undefined4 *)(lVar9 + uVar22 * 0x14);
  pcVar20 = (char *)((longlong)puVar27 + 0xf);
  local_78 = (uint)*(byte *)((longlong)puVar27 + 0xf);
  pcVar24 = pcVar20;
  for (uVar26 = param_4; uVar26 < param_5; uVar26 = uVar26 + 1) {
    *pcVar24 = (char)uVar26 - (char)param_4;
    pcVar24 = pcVar24 + 0x14;
  }
  uVar17 = 1;
  uVar26 = param_5 - param_4;
  puVar4 = puVar27;
  local_94 = uVar26;
  local_90 = (longlong *)puVar27;
  local_60 = pcVar20;
  if (1 < uVar26) {
    do {
      if (uVar17 != 0) {
        uVar31 = uVar17;
        do {
          uVar19 = uVar31 - 1;
          bVar16 = *(byte *)((longlong)puVar27 + (ulonglong)uVar19 * 0x14 + 0x13);
          if ((bVar16 < *(byte *)((longlong)puVar4 + 0x27)) ||
             (bVar16 == *(byte *)((longlong)puVar4 + 0x27))) break;
          uVar31 = uVar19;
        } while (uVar19 != 0);
        if (uVar17 != uVar31) {
          local_70 = puVar4[5];
          uStack_6c = puVar4[6];
          uStack_68 = puVar4[7];
          uStack_64 = puVar4[8];
          uVar7 = puVar4[9];
          _Src = puVar27 + (ulonglong)uVar31 * 5;
          memmove(puVar27 + (ulonglong)(uVar31 + 1) * 5,_Src,(ulonglong)(uVar17 - uVar31) * 0x14);
          *_Src = local_70;
          _Src[1] = uStack_6c;
          _Src[2] = uStack_68;
          _Src[3] = uStack_64;
          _Src[4] = uVar7;
          puVar27 = (undefined4 *)local_90;
          uVar26 = local_94;
        }
      }
      uVar17 = uVar17 + 1;
      puVar4 = puVar4 + 5;
    } while (uVar17 < uVar26);
    pcVar20 = (char *)((longlong)puVar27 + 0xf);
  }
  lVar3 = local_88;
  uVar22 = (ulonglong)param_5;
  if (param_4 < param_5) {
    pcVar24 = (char *)((longlong)puVar27 + 0x13);
    uVar17 = param_4;
    do {
      uVar22 = (ulonglong)uVar17;
      if (*pcVar24 == '\x04') break;
      uVar17 = uVar17 + 1;
      pcVar24 = pcVar24 + 0x14;
      uVar22 = (ulonglong)param_5;
    } while (uVar17 < param_5);
  }
  uVar17 = (uint)uVar22;
  if (((char)plVar34[1] == '\0') && (uVar26 < 0x80)) {
    uVar26 = local_94;
    if (uVar17 < param_5) {
      pbVar32 = (byte *)(lVar9 + 0xf + uVar22 * 0x14);
      do {
        uVar31 = (uint)uVar22;
        if ((*pbVar32 != 0xff) && (uVar26 = *pbVar32 + param_4, uVar23 = uVar22, uVar26 != uVar31))
        {
          do {
            uVar21 = (ulonglong)uVar26;
            if ((uint)uVar23 <= uVar26) {
              uVar23 = uVar21;
            }
            uVar26 = *(byte *)(lVar9 + 0xf + uVar21 * 0x14) + param_4;
            *(undefined1 *)(lVar9 + 0xf + uVar21 * 0x14) = 0xff;
          } while (uVar26 != uVar31);
          if ((uVar31 != (uint)uVar23) && (1 < ((uint)uVar23 + 1) - uVar31)) {
            FUN_144b61d00(lVar3,uVar22);
          }
        }
        uVar22 = (ulonglong)(uVar31 + 1);
        pbVar32 = pbVar32 + 0x14;
        pcVar20 = local_60;
        uVar26 = local_94;
      } while (uVar31 + 1 < param_5);
    }
  }
  else if (1 < param_5 - uVar17) {
    FUN_144b61d00(local_88,uVar22,param_5);
  }
  if (param_4 < param_5) {
    uVar22 = (ulonglong)uVar26;
    do {
      *pcVar20 = (char)local_78;
      pcVar20 = pcVar20 + 0x14;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if (param_4 < param_5) {
    puVar25 = (uint *)((longlong)local_90 + 4);
    uVar26 = param_4;
    do {
      if (*(char *)((longlong)puVar25 + 0xf) != '\x01') break;
      uVar26 = uVar26 + 1;
      *puVar25 = *puVar25 | *(uint *)(plVar34 + 0xb);
      puVar25 = puVar25 + 5;
    } while (uVar26 < param_5);
  }
  uVar26 = *(uint *)((longlong)plVar34 + 0x6c);
  if (((char)plVar34[1] == '\0') && (*(int *)(*plVar34 + 0x18) == 0)) {
    uVar26 = uVar26 | *(uint *)((longlong)plVar34 + 100);
  }
  if (param_4 < uVar17) {
    puVar25 = (uint *)((longlong)local_90 + 4);
    uVar22 = (ulonglong)(uVar17 - param_4);
    do {
      *puVar25 = *puVar25 | uVar26;
      puVar25 = puVar25 + 5;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  uVar26 = *(uint *)(plVar34 + 0xe);
  uVar30 = uVar17 + 1;
  uVar22 = (ulonglong)uVar30;
  uVar31 = *(uint *)(plVar34 + 0xd);
  uVar19 = *(uint *)((longlong)plVar34 + 100);
  if (uVar30 < param_5) {
    uVar23 = (ulonglong)(param_5 - uVar30);
    puVar25 = (uint *)(lVar9 + (uVar22 * 4 + 1 + (ulonglong)uVar30) * 4);
    do {
      *puVar25 = *puVar25 | uVar26 | uVar31 | uVar19;
      puVar25 = puVar25 + 5;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  if (((char)plVar34[1] != '\0') && (uVar26 = param_4, *(int *)(local_88 + 0x3c) == 0x44657661)) {
    while (uVar31 = uVar26, uVar26 = uVar31 + 1, uVar26 < uVar17) {
      if (((*(char *)(lVar9 + 0x12 + (ulonglong)uVar31 * 0x14) == '\x10') &&
          (*(char *)(lVar9 + 0x12 + (ulonglong)uVar26 * 0x14) == '\x04')) &&
         ((uVar31 + 2 == uVar17 ||
          (*(char *)(lVar9 + 0x12 + (ulonglong)(uVar31 + 2) * 0x14) != '\x06')))) {
        puVar25 = (uint *)(lVar9 + (ulonglong)uVar31 * 0x14 + 4);
        *puVar25 = *puVar25 | *(uint *)((longlong)plVar34 + 100);
        puVar25 = (uint *)(lVar9 + (ulonglong)uVar26 * 0x14 + 4);
        *puVar25 = *puVar25 | *(uint *)((longlong)plVar34 + 100);
      }
    }
  }
  if (((int)plVar34[0xc] != 0) && (uVar17 + 2 < param_5)) {
    for (uVar17 = uVar17 + 2; uVar17 < param_5; uVar17 = uVar17 + 1) {
      uVar26 = 0;
      local_90 = (longlong *)
                 CONCAT44(*(undefined4 *)(lVar9 + (ulonglong)uVar17 * 0x14),
                          *(undefined4 *)(lVar9 + uVar22 * 0x14));
      if ((int)plVar34[5] != 0) {
        do {
          local_a8 = (uint)*(byte *)((longlong)plVar34 + 0x2c);
          iVar18 = FUN_1451e07d0(local_80,*(undefined2 *)(plVar34[4] + (ulonglong)uVar26 * 8),
                                 &local_90,2);
          if (iVar18 != 0) {
            puVar25 = (uint *)(lVar9 + 4 + uVar22 * 0x14);
            *puVar25 = *puVar25 | *(uint *)(plVar34 + 0xc);
            puVar25 = (uint *)(lVar9 + (ulonglong)((int)uVar22 + 1) * 0x14 + 4);
            *puVar25 = *puVar25 | *(uint *)(plVar34 + 0xc);
            goto LAB_1452122e7;
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 < *(uint *)(plVar34 + 5));
      }
      uVar22 = (ulonglong)((int)uVar22 + 1);
    }
  }
LAB_1452122e7:
  uVar22 = (ulonglong)(param_4 + 1);
  if (param_4 + 1 < param_5) {
    pbVar32 = (byte *)(lVar9 + 0x12 + uVar22 * 0x14);
    do {
      iVar18 = (int)uVar22;
      if ((pbVar32[-6] >> 5 & 1) == 0) {
        bVar16 = *pbVar32;
        if (bVar16 < 0x20) {
          uVar26 = 1 << (bVar16 & 0x1f);
        }
        else {
          uVar26 = 0;
        }
        if ((uVar26 & 0x60) != 0) {
          do {
            do {
              uVar26 = (int)uVar22 - 1;
              uVar22 = (ulonglong)uVar26;
              if (bVar16 == 5) {
                puVar25 = (uint *)(lVar9 + 4 + uVar22 * 0x14);
                *puVar25 = *puVar25 & ~*(uint *)((longlong)plVar34 + 0x6c);
              }
              if (uVar26 <= param_4) goto LAB_145212377;
            } while ((*(byte *)(lVar9 + 0xc + uVar22 * 0x14) >> 5 & 1) != 0);
            bVar6 = *(byte *)(lVar9 + 0x12 + uVar22 * 0x14);
            if (bVar6 < 0x20) {
              uVar26 = 1 << (bVar6 & 0x1f);
            }
            else {
              uVar26 = 0;
            }
          } while ((uVar26 & 0xb1806) == 0);
        }
      }
LAB_145212377:
      uVar26 = iVar18 + 1;
      uVar22 = (ulonglong)uVar26;
      pbVar32 = pbVar32 + 0x14;
    } while (uVar26 < param_5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1452123b0 FUN_1452123b0 body=638 status=ok
// SIG undefined FUN_1452123b0(void)

void FUN_1452123b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  byte *pbVar13;
  byte bVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  undefined4 local_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((*(byte *)(param_3 + 0x18) & 0x10) == 0) {
    bVar14 = 0;
    uVar15 = 0;
    if (*(uint *)(param_3 + 0x60) != 0) {
      pbVar13 = (byte *)(*(longlong *)(param_3 + 0x70) + 0xf);
      while ((*pbVar13 & 0xf) != 4) {
        uVar15 = uVar15 + 1;
        pbVar13 = pbVar13 + 0x14;
        if (*(uint *)(param_3 + 0x60) <= uVar15) {
          return;
        }
      }
      local_res18[0] = 0;
      iVar12 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x130))
                         (param_2,*(undefined8 *)(param_2 + 0x48),0x25cc,local_res18,
                          *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
      if (iVar12 != 0) {
        local_38 = 0x25cc;
        uStack_34 = 0;
        uStack_2c = 0;
        FUN_1452108b0(&local_38);
        local_38 = local_res18[0];
        FUN_144b61b50(param_3);
        *(undefined4 *)(param_3 + 0x5c) = 0;
        if (*(int *)(param_3 + 0x60) != 0) {
          uVar10 = uStack_2c._4_4_;
          do {
            if (*(char *)(param_3 + 0x58) == '\0') break;
            uVar15 = *(uint *)(param_3 + 0x5c);
            lVar6 = *(longlong *)(param_3 + 0x70);
            bVar4 = *(byte *)(lVar6 + 0xf + (ulonglong)uVar15 * 0x14);
            lVar1 = lVar6 + (ulonglong)uVar15 * 0x14;
            if ((bVar14 == bVar4) || ((bVar4 & 0xf) != 4)) {
              if (*(char *)(param_3 + 0x59) != '\0') {
                if ((*(longlong *)(param_3 + 0x78) != lVar6) || (*(uint *)(param_3 + 100) != uVar15)
                   ) {
                  cVar11 = FUN_144b62480(param_3,1,1);
                  if (cVar11 == '\0') goto LAB_145212602;
                  uVar15 = *(uint *)(param_3 + 0x5c);
                  lVar1 = *(longlong *)(param_3 + 0x70);
                  uVar5 = *(uint *)(param_3 + 100);
                  puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar15 * 0x14);
                  uVar7 = puVar2[1];
                  uVar8 = puVar2[2];
                  uVar9 = puVar2[3];
                  lVar6 = *(longlong *)(param_3 + 0x78);
                  puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar7;
                  puVar3[2] = uVar8;
                  puVar3[3] = uVar9;
                  *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
                       *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x14);
                }
                *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
              }
              *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
            }
            else {
              uStack_18 = *(undefined4 *)(lVar1 + 8);
              local_20 = local_38;
              uStack_1c = *(undefined4 *)(lVar1 + 4);
              uStack_14 = CONCAT13(bVar4,(int3)uStack_2c);
              if (uVar15 < *(uint *)(param_3 + 0x60)) {
                while (*(char *)(param_3 + 0x58) != '\0') {
                  uVar15 = *(uint *)(param_3 + 0x5c);
                  lVar1 = *(longlong *)(param_3 + 0x70);
                  if ((bVar4 != *(byte *)(lVar1 + 0xf + (ulonglong)uVar15 * 0x14)) ||
                     (*(char *)(lVar1 + (ulonglong)uVar15 * 0x14 + 0x12) != '\x0f')) break;
                  if (*(char *)(param_3 + 0x59) == '\0') {
LAB_14521256d:
                    *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
                  }
                  else {
                    if ((*(longlong *)(param_3 + 0x78) == lVar1) &&
                       (*(uint *)(param_3 + 100) == uVar15)) {
LAB_14521256a:
                      *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
                      goto LAB_14521256d;
                    }
                    cVar11 = FUN_144b62480(param_3,1,1);
                    if (cVar11 != '\0') {
                      uVar15 = *(uint *)(param_3 + 0x5c);
                      lVar1 = *(longlong *)(param_3 + 0x70);
                      uVar5 = *(uint *)(param_3 + 100);
                      puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar15 * 0x14);
                      uVar7 = puVar2[1];
                      uVar8 = puVar2[2];
                      uVar9 = puVar2[3];
                      lVar6 = *(longlong *)(param_3 + 0x78);
                      puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
                      *puVar3 = *puVar2;
                      puVar3[1] = uVar7;
                      puVar3[2] = uVar8;
                      puVar3[3] = uVar9;
                      *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
                           *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x14);
                      goto LAB_14521256a;
                    }
                  }
                  if (*(uint *)(param_3 + 0x60) <= *(uint *)(param_3 + 0x5c)) break;
                }
              }
              cVar11 = FUN_144b62480(param_3,0,1);
              bVar14 = bVar4;
              if (cVar11 != '\0') {
                uVar15 = *(uint *)(param_3 + 100);
                lVar1 = *(longlong *)(param_3 + 0x78);
                puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar15 * 0x14);
                *puVar2 = local_20;
                puVar2[1] = uStack_1c;
                puVar2[2] = uStack_18;
                puVar2[3] = uStack_14;
                *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x14) = uVar10;
                *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
              }
            }
LAB_145212602:
          } while (*(uint *)(param_3 + 0x5c) < *(uint *)(param_3 + 0x60));
        }
        FUN_144b61af0(param_3);
      }
    }
  }
  return;
}



// FUNCTION 145212630 FUN_145212630 body=2838 status=ok
// SIG undefined FUN_145212630(void)

void FUN_145212630(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  ulonglong uVar15;
  char *pcVar16;
  byte bVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ushort *puVar24;
  void *_Src;
  bool bVar25;
  
  plVar5 = *(longlong **)(param_1 + 0x98);
  lVar6 = *(longlong *)(param_2 + 0x70);
  uVar21 = (ulonglong)param_3;
  iVar12 = *(int *)((longlong)plVar5 + 0xc);
  if ((iVar12 != 0) && (param_3 < param_4)) {
    uVar19 = (ulonglong)(param_4 - param_3);
    puVar24 = (ushort *)(lVar6 + uVar21 * 0x14 + 0xc);
    do {
      if ((*(int *)(puVar24 + -6) == iVar12) && (((byte)*puVar24 & 0x60) == 0x60)) {
        *(undefined1 *)(puVar24 + 3) = 4;
        *puVar24 = *puVar24 & 0xff9f;
      }
      puVar24 = puVar24 + 10;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  uVar18 = *(uint *)(plVar5 + 0xc);
  uVar19 = (ulonglong)param_3;
  bVar25 = uVar18 != 0;
  if (param_3 < param_4) {
    pbVar14 = (byte *)(lVar6 + 0x13 + uVar21 * 0x14);
    do {
      if (3 < *pbVar14) {
        if ((uVar18 == 0) || (uVar22 = (int)uVar19 + 1, param_4 <= uVar22)) goto LAB_1452127b4;
        goto LAB_145212720;
      }
      uVar22 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar22;
      pbVar14 = pbVar14 + 0x14;
    } while (uVar22 < param_4);
  }
  goto LAB_145212905;
  while (uVar22 = uVar22 + 1, uVar22 < param_4) {
LAB_145212720:
    uVar15 = (ulonglong)uVar22;
    if ((*(uint *)(lVar6 + 4 + uVar15 * 0x14) & uVar18) != 0) {
      lVar2 = lVar6 + uVar15 * 0x14;
      if ((((*(byte *)(lVar6 + 0xc + uVar15 * 0x14) >> 4 & 1) == 0) ||
          (bVar17 = (byte)*(undefined2 *)(lVar2 + 0xc), (bVar17 >> 5 & 1) == 0)) ||
         ((bVar17 >> 6 & 1) != 0)) {
        if (param_4 <= uVar22) goto LAB_1452127a0;
        pbVar14 = (byte *)(lVar2 + 0x12);
        goto LAB_145212770;
      }
      break;
    }
  }
  goto LAB_1452127b4;
joined_r0x000145212f82:
  if (uVar22 <= param_3) goto LAB_14521302b;
  uVar22 = (int)uVar19 - 1;
  if ((*(byte *)(lVar6 + 0xc + (ulonglong)uVar22 * 0x14) >> 5 & 1) == 0) {
    bVar17 = *(byte *)(lVar6 + 0x12 + (ulonglong)uVar22 * 0x14);
    if (bVar17 < 0x20) {
      uVar13 = 1 << (bVar17 & 0x1f);
    }
    else {
      uVar13 = 0;
    }
    if ((uVar13 & 0x90) != 0) goto LAB_145212fc5;
  }
  uVar19 = (ulonglong)uVar22;
  goto joined_r0x000145212f82;
LAB_145212fc5:
  uVar22 = (uint)uVar19;
  if ((param_3 < uVar22) &&
     ((*(byte *)(lVar6 + 0xc + (ulonglong)(uVar22 - 1) * 0x14) >> 5 & 1) == 0)) {
    bVar17 = *(byte *)(lVar6 + (ulonglong)(uVar22 - 1) * 0x14 + 0x12);
    if (bVar17 < 0x20) {
      uVar13 = 1 << (bVar17 & 0x1f);
    }
    else {
      uVar13 = 0;
    }
    if ((((uVar13 >> 4 & 1) != 0) && (uVar22 < param_4)) &&
       ((*(byte *)(lVar6 + 0xc + uVar19 * 0x14) >> 5 & 1) == 0)) {
      bVar17 = *(byte *)(lVar6 + 0x12 + uVar19 * 0x14);
      if (bVar17 < 0x20) {
        uVar18 = 1 << (bVar17 & 0x1f);
      }
      if ((uVar18 & 0x60) != 0) {
        uVar19 = (ulonglong)(uVar22 + 1);
      }
    }
  }
LAB_14521302b:
  iVar12 = (int)uVar19;
  if (1 < (uVar23 + 1) - iVar12) {
    FUN_144b61d00(param_2,uVar19);
  }
  uVar7 = *puVar3;
  uVar8 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  uVar4 = puVar3[4];
  puVar3 = (undefined4 *)(lVar6 + uVar19 * 0x14);
  memmove((void *)(lVar6 + (ulonglong)(iVar12 + 1) * 0x14),puVar3,
          (ulonglong)(uVar23 - iVar12) * 0x14);
  *puVar3 = uVar7;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  puVar3[4] = uVar4;
  goto LAB_14521308e;
  while( true ) {
    if (*pbVar14 < 0x20) {
      uVar18 = 1 << (*pbVar14 & 0x1f);
    }
    else {
      uVar18 = 0;
    }
    if ((uVar18 >> 4 & 1) == 0) break;
    uVar18 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar18;
    pbVar14 = pbVar14 + 0x14;
    if (param_4 <= uVar18) break;
LAB_145212770:
    if ((pbVar14[-6] >> 5 & 1) != 0) break;
  }
LAB_1452127a0:
  bVar25 = false;
  *(undefined1 *)(lVar6 + 0x13 + uVar15 * 0x14) = 4;
  uVar19 = uVar15;
LAB_1452127b4:
  if (*(int *)(param_2 + 0x3c) == 0x4d6c796d) {
    iVar12 = (int)uVar19;
    while (iVar12 + 1U < param_4) {
      uVar15 = (ulonglong)(iVar12 + 1U);
      pbVar14 = (byte *)(lVar6 + 0x12 + uVar15 * 0x14);
      do {
        if ((pbVar14[-6] >> 5 & 1) != 0) break;
        if (*pbVar14 < 0x20) {
          uVar18 = 1 << (*pbVar14 & 0x1f);
        }
        else {
          uVar18 = 0;
        }
        if ((uVar18 & 0x60) == 0) break;
        uVar18 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar18;
        pbVar14 = pbVar14 + 0x14;
      } while (uVar18 < param_4);
      if (((uint)uVar15 == param_4) || ((*(byte *)(lVar6 + 0xc + uVar15 * 0x14) >> 5 & 1) != 0))
      break;
      bVar17 = *(byte *)(lVar6 + 0x12 + uVar15 * 0x14);
      if (bVar17 < 0x20) {
        uVar18 = 1 << (bVar17 & 0x1f);
      }
      else {
        uVar18 = 0;
      }
      if ((uVar18 >> 4 & 1) == 0) break;
      uVar18 = (uint)uVar15 + 1;
      uVar15 = (ulonglong)uVar18;
      if (uVar18 < param_4) {
        pbVar14 = (byte *)(lVar6 + 0x12 + uVar15 * 0x14);
        do {
          if ((pbVar14[-6] >> 5 & 1) != 0) {
LAB_1452128a1:
            if (((uint)uVar15 < param_4) &&
               (lVar2 = lVar6 + uVar15 * 0x14,
               (*(byte *)(lVar6 + 0xc + uVar15 * 0x14) >> 5 & 1) == 0)) {
              if (*(byte *)(lVar2 + 0x12) < 0x20) {
                uVar18 = 1 << (*(byte *)(lVar2 + 0x12) & 0x1f);
              }
              else {
                uVar18 = 0;
              }
              if (((uVar18 & 0xb1806) != 0) && (*(char *)(lVar2 + 0x13) == '\b')) {
                *(undefined1 *)(lVar2 + 0x13) = 4;
                uVar19 = uVar15;
              }
            }
            break;
          }
          if (*pbVar14 < 0x20) {
            uVar18 = 1 << (*pbVar14 & 0x1f);
          }
          else {
            uVar18 = 0;
          }
          if ((uVar18 & 0x60) == 0) goto LAB_1452128a1;
          uVar18 = (uint)uVar15 + 1;
          uVar15 = (ulonglong)uVar18;
          pbVar14 = pbVar14 + 0x14;
        } while (uVar18 < param_4);
      }
      iVar12 = (int)uVar15;
    }
  }
  if ((param_3 < (uint)uVar19) && (4 < *(byte *)(lVar6 + 0x13 + uVar19 * 0x14))) {
    uVar19 = (ulonglong)((uint)uVar19 - 1);
  }
LAB_145212905:
  uVar18 = (uint)uVar19;
  if (uVar18 == param_4) {
    if (param_3 < uVar18) {
      uVar18 = uVar18 - 1;
      if ((*(byte *)(lVar6 + 0xc + (ulonglong)uVar18 * 0x14) >> 5 & 1) == 0) {
        bVar17 = *(byte *)(lVar6 + 0x12 + (ulonglong)uVar18 * 0x14);
        if (bVar17 < 0x20) {
          uVar22 = 1 << (bVar17 & 0x1f);
        }
        else {
          uVar22 = 0;
        }
        if ((uVar22 >> 6 & 1) != 0) {
          uVar19 = (ulonglong)uVar18;
        }
      }
    }
    uVar18 = (uint)uVar19;
  }
  if ((uVar18 < param_4) && (param_3 < (uint)uVar19)) {
    while ((*(byte *)(lVar6 + 0xc + uVar19 * 0x14) >> 5 & 1) == 0) {
      bVar17 = *(byte *)(lVar6 + 0x12 + uVar19 * 0x14);
      if (bVar17 < 0x20) {
        uVar18 = 1 << (bVar17 & 0x1f);
      }
      else {
        uVar18 = 0;
      }
      if (((uVar18 & 0x18) == 0) ||
         (uVar18 = (int)uVar19 - 1, uVar19 = (ulonglong)uVar18, uVar18 <= param_3)) break;
    }
  }
  uVar18 = param_3 + 1;
  uVar15 = (ulonglong)uVar18;
  if (uVar18 < param_4) {
    uVar22 = (uint)uVar19;
    if (param_3 < uVar22) {
      uVar23 = uVar22 - 2;
      if (uVar22 != param_4) {
        uVar23 = uVar22 - 1;
      }
      uVar20 = (ulonglong)uVar23;
      if ((*(int *)(param_2 + 0x3c) != 0x4d6c796d) && (*(int *)(param_2 + 0x3c) != 0x54616d6c)) {
        do {
          if (param_3 < (uint)uVar20) {
            pbVar14 = (byte *)(lVar6 + 0x12 + uVar20 * 0x14);
            do {
              if ((pbVar14[-6] >> 5 & 1) == 0) {
                if (*pbVar14 < 0x20) {
                  uVar23 = 1 << (*pbVar14 & 0x1f);
                }
                else {
                  uVar23 = 0;
                }
                if ((uVar23 & 0x90) != 0) break;
              }
              uVar23 = (int)uVar20 - 1;
              uVar20 = (ulonglong)uVar23;
              pbVar14 = pbVar14 + -0x14;
            } while (param_3 < uVar23);
          }
          lVar2 = lVar6 + uVar20 * 0x14;
          if ((*(byte *)(lVar6 + 0xc + uVar20 * 0x14) >> 5 & 1) != 0) goto LAB_145212b50;
          bVar17 = *(byte *)(lVar2 + 0x12);
          if (bVar17 < 0x20) {
            uVar23 = 1 << (bVar17 & 0x1f);
          }
          else {
            uVar23 = 0;
          }
          if (((uVar23 >> 4 & 1) == 0) || (*(char *)(lVar2 + 0x13) == '\x02')) goto LAB_145212b50;
          uVar23 = (uint)uVar20;
          if ((param_4 <= uVar23 + 1) ||
             (*(char *)(lVar6 + 0x12 + (ulonglong)(uVar23 + 1) * 0x14) != '\x06')) break;
          if (uVar23 <= param_3) goto LAB_145212b50;
          uVar20 = (ulonglong)(uVar23 - 1);
        } while( true );
      }
      if ((param_3 < (uint)uVar20) &&
         (_Src = (void *)(lVar6 + uVar20 * 0x14), *(char *)(lVar6 + 0x13 + uVar20 * 0x14) != '\x02')
         ) {
        uVar21 = uVar20;
        if (param_3 < (uint)uVar20) {
          do {
            iVar12 = (int)uVar20;
            uVar22 = iVar12 - 1;
            uVar20 = (ulonglong)uVar22;
            if (*(char *)(lVar6 + 0x13 + uVar20 * 0x14) == '\x02') {
              uVar23 = (uint)uVar19;
              uVar13 = (uint)uVar21;
              if ((uVar22 < uVar23) && (uVar23 <= uVar13)) {
                uVar19 = (ulonglong)(uVar23 - 1);
              }
              puVar3 = (undefined4 *)(lVar6 + uVar20 * 0x14);
              uVar7 = *puVar3;
              uVar8 = puVar3[1];
              uVar9 = puVar3[2];
              uVar10 = puVar3[3];
              uVar4 = *(undefined4 *)(lVar6 + 0x10 + uVar20 * 0x14);
              memmove((void *)(lVar6 + uVar20 * 0x14),_Src,(ulonglong)((uVar13 - iVar12) + 1) * 0x14
                     );
              uVar23 = (int)uVar19 + 1;
              puVar3 = (undefined4 *)(lVar6 + uVar21 * 0x14);
              *puVar3 = uVar7;
              puVar3[1] = uVar8;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              if (param_4 < uVar23) {
                uVar23 = param_4;
              }
              *(undefined4 *)(lVar6 + 0x10 + uVar21 * 0x14) = uVar4;
              if (1 < uVar23 - uVar13) {
                FUN_144b61d00(param_2,uVar21);
              }
              uVar21 = (ulonglong)(uVar13 - 1);
            }
            _Src = (void *)((longlong)_Src + -0x14);
          } while (param_3 < uVar22);
LAB_145212b8e:
          uVar15 = (ulonglong)(param_3 + 1);
        }
      }
      else {
LAB_145212b50:
        pcVar16 = (char *)(lVar6 + 0x13 + uVar21 * 0x14);
        uVar23 = param_3;
        do {
          if (*pcVar16 == '\x02') {
            uVar13 = uVar22 + 1;
            if (param_4 < uVar22 + 1) {
              uVar13 = param_4;
            }
            if (1 < uVar13 - uVar23) {
              FUN_144b61d00(param_2);
              goto LAB_145212b8e;
            }
            break;
          }
          uVar23 = uVar23 + 1;
          pcVar16 = pcVar16 + 0x14;
        } while (uVar23 < uVar22);
      }
    }
    uVar21 = (ulonglong)param_3;
    puVar3 = (undefined4 *)(lVar6 + uVar21 * 0x14);
    if (*(char *)(lVar6 + 0x13 + uVar21 * 0x14) == '\x01') {
      if ((((byte)*(undefined2 *)(puVar3 + 3) >> 5 & 1) == 0) ||
         (bVar11 = true, ((byte)*(undefined2 *)(puVar3 + 3) >> 6 & 1) != 0)) {
        bVar11 = false;
      }
      if ((*(char *)((longlong)puVar3 + 0x12) == '\x0f') != bVar11) {
        iVar12 = *(int *)(*plVar5 + 0x10);
        uVar22 = (uint)uVar19;
        if (iVar12 == 0xc) {
LAB_145212d31:
          if ((uint)uVar15 < uVar22) {
            pbVar14 = (byte *)(lVar6 + 0x12 + uVar15 * 0x14);
            uVar20 = uVar15;
            do {
              uVar23 = (uint)uVar20;
              if ((pbVar14[-6] >> 5 & 1) == 0) {
                if (*pbVar14 < 0x20) {
                  uVar13 = 1 << (*pbVar14 & 0x1f);
                }
                else {
                  uVar13 = 0;
                }
                if ((uVar13 >> 4 & 1) != 0) {
                  if ((uVar23 < uVar22) && ((*(byte *)(lVar6 + 0xc + uVar20 * 0x14) >> 5 & 1) == 0))
                  {
                    bVar17 = *(byte *)(lVar6 + 0x12 + uVar20 * 0x14);
                    if (bVar17 < 0x20) {
                      uVar13 = 1 << (bVar17 & 0x1f);
                    }
                    else {
                      uVar13 = 0;
                    }
                    if ((uVar13 >> 4 & 1) != 0) {
                      uVar23 = uVar23 + 1;
                      if ((uVar23 < uVar22) &&
                         ((*(byte *)(lVar6 + 0xc + (ulonglong)uVar23 * 0x14) >> 5 & 1) == 0)) {
                        bVar17 = *(byte *)(lVar6 + 0x12 + (ulonglong)uVar23 * 0x14);
                        if (bVar17 < 0x20) {
                          uVar13 = 1 << (bVar17 & 0x1f);
                        }
                        else {
LAB_145212ce0:
                          uVar13 = 0;
                        }
LAB_145212ce3:
                        if ((uVar13 & 0x60) != 0) {
                          uVar20 = (ulonglong)uVar23;
                        }
                      }
                      goto LAB_145212e68;
                    }
                  }
                  break;
                }
              }
              uVar20 = (ulonglong)(uVar23 + 1);
              pbVar14 = pbVar14 + 0x14;
            } while (uVar23 + 1 < uVar22);
          }
          uVar20 = (ulonglong)(param_4 - 1);
          if (param_3 < param_4 - 1) {
            pcVar16 = (char *)(lVar6 + 0x13 + uVar20 * 0x14);
            do {
              if (*pcVar16 != '\x0e') break;
              uVar23 = (int)uVar20 - 1;
              uVar20 = (ulonglong)uVar23;
              pcVar16 = pcVar16 + -0x14;
            } while (param_3 < uVar23);
          }
          if ((*(char *)((longlong)plVar5 + 9) == '\0') &&
             ((*(byte *)(lVar6 + 0xc + uVar20 * 0x14) >> 5 & 1) == 0)) {
            bVar17 = *(byte *)(lVar6 + 0x12 + uVar20 * 0x14);
            if (bVar17 < 0x20) {
              uVar23 = 1 << (bVar17 & 0x1f);
            }
            else {
              uVar23 = 0;
            }
            if (((uVar23 >> 4 & 1) != 0) && (uVar23 = uVar22 + 1, uVar23 < (uint)uVar20)) {
              do {
                uVar13 = (uint)uVar20 - 1;
                if (*(char *)(lVar6 + 0x12 + (ulonglong)uVar23 * 0x14) != '\a') {
                  uVar13 = (uint)uVar20;
                }
                uVar23 = uVar23 + 1;
                uVar20 = (ulonglong)uVar13;
              } while (uVar23 < uVar13);
            }
          }
        }
        else {
          if ((uint)uVar15 < uVar22) {
            pbVar14 = (byte *)(lVar6 + 0x12 + uVar15 * 0x14);
            uVar20 = uVar15;
            do {
              uVar23 = (uint)uVar20;
              if ((pbVar14[-6] >> 5 & 1) == 0) {
                if (*pbVar14 < 0x20) {
                  uVar13 = 1 << (*pbVar14 & 0x1f);
                }
                else {
                  uVar13 = 0;
                }
                if ((uVar13 >> 4 & 1) != 0) {
                  if ((uVar23 < uVar22) && ((*(byte *)(lVar6 + 0xc + uVar20 * 0x14) >> 5 & 1) == 0))
                  {
                    bVar17 = *(byte *)(lVar6 + 0x12 + uVar20 * 0x14);
                    if (bVar17 < 0x20) {
                      uVar13 = 1 << (bVar17 & 0x1f);
                    }
                    else {
                      uVar13 = 0;
                    }
                    if ((uVar13 >> 4 & 1) != 0) {
                      uVar23 = uVar23 + 1;
                      if ((uVar22 <= uVar23) ||
                         ((*(byte *)(lVar6 + 0xc + (ulonglong)uVar23 * 0x14) >> 5 & 1) != 0))
                      goto LAB_145212e68;
                      bVar17 = *(byte *)(lVar6 + 0x12 + (ulonglong)uVar23 * 0x14);
                      if (0x1f < bVar17) goto LAB_145212ce0;
                      uVar13 = 1 << (bVar17 & 0x1f);
                      goto LAB_145212ce3;
                    }
                  }
                  break;
                }
              }
              uVar20 = (ulonglong)(uVar23 + 1);
              pbVar14 = pbVar14 + 0x14;
            } while (uVar23 + 1 < uVar22);
          }
          uVar20 = uVar19;
          uVar23 = uVar22;
          if (iVar12 == 5) {
            while ((uVar23 = uVar23 + 1, uVar23 < param_4 &&
                   (*(byte *)(lVar6 + 0x13 + (ulonglong)uVar23 * 0x14) < 6))) {
              uVar20 = (ulonglong)((int)uVar20 + 1);
            }
          }
          else {
            if (iVar12 != 9) goto LAB_145212d31;
            while (uVar23 = uVar23 + 1, uVar23 < param_4) {
              bVar17 = *(byte *)(lVar6 + 0x13 + (ulonglong)uVar23 * 0x14);
              if (bVar17 < 0x20) {
                uVar13 = 1 << (bVar17 & 0x1f);
              }
              else {
                uVar13 = 0;
              }
              if ((uVar13 & 0x5800) != 0) break;
              uVar20 = (ulonglong)((int)uVar20 + 1);
            }
          }
          if (param_4 <= (uint)uVar20) goto LAB_145212d31;
        }
LAB_145212e68:
        uVar23 = (uint)uVar20;
        if (1 < (uVar23 + 1) - param_3) {
          FUN_144b61d00(param_2,uVar21);
          uVar15 = (ulonglong)uVar18;
        }
        uVar7 = *puVar3;
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        uVar4 = puVar3[4];
        memmove(puVar3,(void *)(lVar6 + uVar15 * 0x14),(ulonglong)(uVar23 - param_3) * 0x14);
        puVar3 = (undefined4 *)(lVar6 + uVar20 * 0x14);
        *puVar3 = uVar7;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        *(undefined4 *)(lVar6 + 0x10 + uVar20 * 0x14) = uVar4;
        if ((param_3 < uVar22) && (uVar22 <= uVar23)) {
          uVar19 = (ulonglong)(uVar22 - 1);
        }
      }
    }
  }
  uVar18 = 0;
  if (bVar25) {
    uVar22 = (uint)uVar19;
    uVar23 = uVar22 + 1;
    if (uVar23 < param_4) {
      do {
        uVar21 = (ulonglong)uVar23;
        if ((*(uint *)(lVar6 + 4 + uVar21 * 0x14) & *(uint *)(plVar5 + 0xc)) != 0) {
          puVar3 = (undefined4 *)(lVar6 + uVar21 * 0x14);
          bVar17 = (byte)*(undefined2 *)(lVar6 + 0xc + uVar21 * 0x14);
          if (((bVar17 >> 5 & 1) != 0) && ((bVar17 >> 6 & 1) == 0)) {
            if ((*(int *)(param_2 + 0x3c) == 0x4d6c796d) || (*(int *)(param_2 + 0x3c) == 0x54616d6c)
               ) goto LAB_145212fc5;
            goto joined_r0x000145212f82;
          }
          break;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_4);
    }
  }
LAB_14521308e:
  if (*(char *)(lVar6 + 0x13 + (ulonglong)param_3 * 0x14) == '\x02') {
    if ((param_3 == 0) ||
       ((1 << ((byte)*(undefined2 *)(lVar6 + 0x10 + (ulonglong)(param_3 - 1) * 0x14) & 0x1f) &
        0x1ffeU) == 0)) {
      puVar1 = (uint *)(lVar6 + (ulonglong)param_3 * 0x14 + 4);
      *puVar1 = *puVar1 | *(uint *)((longlong)plVar5 + 0x7c);
    }
    else {
      FUN_144b620d0(param_2,(ulonglong)(param_3 - 1),param_3 + 1);
    }
  }
  if (((*(char *)((longlong)plVar5 + 9) != '\0') && (*(int *)(param_1 + 4) != 0x53696e68)) &&
     ((*(int *)(param_1 + 4) != 0x54616d6c && (1 < param_4 - param_3)))) {
    FUN_144b61d00(param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 145213150 FUN_145213150 body=257 status=ok
// SIG undefined FUN_145213150(void)

undefined4 * FUN_145213150(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  
  puVar5 = (undefined4 *)FUN_142864336(1);
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar5 = 0xffffffff;
  FUN_145213970(puVar5 + 2,param_1 + 0x28,0x70726566,1);
  puVar10 = &DAT_149c5afa0;
  lVar7 = 0xc;
  puVar8 = puVar5 + 6;
  do {
    if ((puVar10[1] & 1) == 0) {
      iVar9 = 0;
      iVar6 = *(int *)(param_1 + 0x38) + -1;
      if (-1 < iVar6) {
        do {
          uVar3 = (uint)(iVar6 + iVar9) >> 1;
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar3 * 0x24);
          if (*puVar10 < uVar2) {
            iVar6 = uVar3 - 1;
          }
          else {
            if (*puVar10 <= uVar2) {
              lVar1 = *(longlong *)(param_1 + 0x40) + (ulonglong)uVar3 * 0x24;
              if (lVar1 != 0) {
                uVar4 = *(undefined4 *)(lVar1 + 0x1c);
                goto LAB_145213211;
              }
              break;
            }
            iVar9 = uVar3 + 1;
          }
        } while (iVar9 <= iVar6);
      }
    }
    uVar4 = 0;
LAB_145213211:
    *puVar8 = uVar4;
    puVar10 = puVar10 + 2;
    puVar8 = puVar8 + 1;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      return puVar5;
    }
  } while( true );
}



// FUNCTION 145213270 FUN_145213270 body=222 status=ok
// SIG undefined FUN_145213270(void)

void FUN_145213270(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  puVar6 = *(undefined4 **)(param_2 + 0x70);
  if (*(uint *)(param_2 + 0x60) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x60);
    do {
      uVar1 = *puVar6;
      uVar4 = FUN_145489270(uVar1);
      uVar2 = uVar4 >> 8;
      uVar3 = (undefined1)(uVar4 & 0x7f);
      switch(uVar1) {
      case 0x179a:
        uVar3 = 0x10;
        break;
      default:
        if ((uVar4 & 0x7f) == 7) {
          if (uVar2 == 3) {
            uVar3 = 0x1c;
          }
          else if (uVar2 == 6) {
            uVar3 = 0x1a;
          }
          else if (uVar2 == 8) {
            uVar3 = 0x1b;
          }
          else if (uVar2 == 0xb) {
            uVar3 = 0x1d;
          }
        }
        break;
      case 0x17c6:
      case 0x17cb:
      case 0x17cd:
      case 0x17ce:
      case 0x17cf:
      case 0x17d0:
      case 0x17d1:
        uVar3 = 0x15;
        break;
      case 0x17c7:
      case 0x17c8:
      case 0x17d3:
      case 0x17dd:
        uVar3 = 0x16;
        break;
      case 0x17c9:
      case 0x17ca:
      case 0x17cc:
        uVar3 = 0x14;
      }
      *(undefined1 *)((longlong)puVar6 + 0x12) = uVar3;
      puVar6 = puVar6 + 5;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1452133b0 FUN_1452133b0 body=185 status=ok
// SIG undefined FUN_1452133b0(void)

bool FUN_1452133b0(longlong param_1,int param_2,int *param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == 0x17be) {
    *param_3 = 0x17c1;
    *param_4 = 0x17be;
    return true;
  }
  if (param_2 == 0x17bf) {
    *param_3 = 0x17c1;
    *param_4 = 0x17bf;
    return true;
  }
  if (param_2 == 0x17c0) {
    *param_3 = 0x17c1;
    *param_4 = 0x17c0;
    return true;
  }
  if (param_2 != 0x17c4) {
    if (param_2 != 0x17c5) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      *param_3 = param_2;
      *param_4 = 0;
      iVar2 = (**(code **)(lVar1 + 0x48))(lVar1);
      return iVar2 != 0;
    }
    *param_3 = 0x17c1;
    *param_4 = 0x17c5;
    return true;
  }
  *param_3 = 0x17c1;
  *param_4 = 0x17c4;
  return true;
}



// FUNCTION 145213470 FUN_145213470 body=174 status=ok
// SIG undefined FUN_145213470(void)

bool FUN_145213470(longlong param_1,ulonglong param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = (**(code **)(lVar1 + 0x28))(lVar1,param_2,*(undefined8 *)(lVar1 + 0x68));
  uVar4 = 0;
  iVar5 = 0;
  if (uVar3 < 0x20) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    bVar2 = (**(code **)(lVar1 + 0x28))(lVar1,param_2 & 0xffffffff,*(undefined8 *)(lVar1 + 0x68));
    uVar4 = 1 << (bVar2 & 0x1f);
  }
  if ((uVar4 & 0x1c00) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    *param_4 = 0;
    if (((int)param_2 != 0) && (param_3 != 0)) {
      iVar5 = (**(code **)(lVar1 + 0x40))
                        (lVar1,param_2 & 0xffffffff,param_3,param_4,*(undefined8 *)(lVar1 + 0x80));
    }
    bVar6 = iVar5 != 0;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}



// FUNCTION 145213520 FUN_145213520 body=222 status=ok
// SIG undefined FUN_145213520(void)

void FUN_145213520(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  param_1 = param_1 + 0x28;
  FUN_145208de0(param_1,0,FUN_1452137d0);
  FUN_145208de0(param_1,0,FUN_145213870);
  FUN_145207a70(param_1,0x6c6f636c,1);
  FUN_145207a70(param_1,0x63636d70,1);
  puVar1 = &DAT_149c5afa0;
  lVar2 = 5;
  do {
    FUN_145207a70(param_1,*puVar1,puVar1[1],1);
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_145208de0(param_1,0,&LAB_145213950);
  puVar1 = &DAT_149c5afc8;
  lVar2 = 7;
  do {
    FUN_145207a70(param_1,*puVar1,puVar1[1],1);
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 145213600 FUN_145213600 body=102 status=ok
// SIG undefined FUN_145213600(void)

void FUN_145213600(longlong param_1)

{
  param_1 = param_1 + 0x28;
  FUN_145207a70(param_1,0x636c6967,1);
  if (DAT_14c7965f8 == 0) {
    FUN_144e2c1d0();
  }
  if ((DAT_14c7965f8 & 4) != 0) {
    FUN_145207a70(param_1,0x6b65726e,1);
  }
  FUN_145207a70(param_1,0x6c696761,1);
  return;
}



// FUNCTION 145213670 FUN_145213670 body=257 status=ok
// SIG undefined FUN_145213670(void)

void FUN_145213670(undefined4 *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  
  uVar1 = *param_1;
  uVar3 = FUN_145489270(uVar1);
  uVar2 = uVar3 >> 8;
  uVar4 = (undefined1)(uVar3 & 0x7f);
  switch(uVar1) {
  case 0x179a:
    *(undefined1 *)((longlong)param_1 + 0x12) = 0x10;
    return;
  case 0x17c6:
  case 0x17cb:
  case 0x17cd:
  case 0x17ce:
  case 0x17cf:
  case 0x17d0:
  case 0x17d1:
    *(undefined1 *)((longlong)param_1 + 0x12) = 0x15;
    return;
  case 0x17c7:
  case 0x17c8:
  case 0x17d3:
  case 0x17dd:
    *(undefined1 *)((longlong)param_1 + 0x12) = 0x16;
    return;
  case 0x17c9:
  case 0x17ca:
  case 0x17cc:
    *(undefined1 *)((longlong)param_1 + 0x12) = 0x14;
    return;
  }
  if ((uVar3 & 0x7f) == 7) {
    if (uVar2 == 3) {
      uVar4 = 0x1c;
    }
    else {
      if (uVar2 == 6) {
        *(undefined1 *)((longlong)param_1 + 0x12) = 0x1a;
        return;
      }
      if (uVar2 == 8) {
        *(undefined1 *)((longlong)param_1 + 0x12) = 0x1b;
        return;
      }
      if (uVar2 == 0xb) {
        *(undefined1 *)((longlong)param_1 + 0x12) = 0x1d;
        return;
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x12) = uVar4;
  return;
}



// FUNCTION 1452137d0 FUN_1452137d0 body=151 status=ok
// SIG undefined FUN_1452137d0(void)

void FUN_1452137d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  FUN_145213a10(param_3);
  uVar1 = *(uint *)(param_3 + 0x60);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
             *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar3;
        if (1 < (uint)uVar4 - (int)uVar5) {
          FUN_144b620d0(param_3,uVar5,uVar4);
        }
        uVar3 = uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if (*(uint *)(param_3 + 0x60) <= uVar2) break;
        } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar4 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
        uVar5 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 145213870 FUN_145213870 body=210 status=ok
// SIG undefined FUN_145213870(void)

void FUN_145213870(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar4;
  
  FUN_145214120();
  uVar1 = *(uint *)(param_3 + 0x60);
  uVar6 = 0;
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(param_3 + 0x70);
    uVar4 = uVar6;
    do {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      if (uVar1 <= uVar3) break;
    } while (*(char *)(lVar2 + 0xf) == *(char *)(lVar2 + 0xf + uVar4 * 0x14));
    if (uVar1 != 0) {
      do {
        uVar5 = uVar4;
        if ((*(byte *)(lVar2 + 0xf + uVar6 * 0x14) & 0xf) < 2) {
          FUN_145213e80(param_1,*(undefined8 *)(param_2 + 0x18),param_3,uVar6,(uint)uVar5);
        }
        lVar2 = *(longlong *)(param_3 + 0x70);
        uVar4 = uVar5;
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          if (*(uint *)(param_3 + 0x60) <= uVar3) break;
        } while (*(char *)(lVar2 + 0xf + uVar5 * 0x14) == *(char *)(lVar2 + 0xf + uVar4 * 0x14));
        uVar6 = uVar5;
      } while ((uint)uVar5 < uVar1);
    }
  }
  return;
}



// FUNCTION 145213970 FUN_145213970 body=154 status=ok
// SIG undefined FUN_145213970(void)

void FUN_145213970(longlong param_1,longlong param_2,uint param_3,undefined1 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 0xc) = param_4;
  iVar5 = 0;
  iVar6 = *(int *)(param_2 + 0x10) + -1;
  if (-1 < iVar6) {
    do {
      uVar3 = (uint)(iVar6 + iVar5) >> 1;
      uVar2 = *(uint *)(*(longlong *)(param_2 + 0x18) + (ulonglong)uVar3 * 0x24);
      if (param_3 < uVar2) {
        iVar6 = uVar3 - 1;
      }
      else {
        if (param_3 <= uVar2) {
          lVar1 = *(longlong *)(param_2 + 0x18) + (ulonglong)uVar3 * 0x24;
          if (lVar1 != 0) {
            uVar4 = *(undefined4 *)(lVar1 + 0xc);
            goto LAB_1452139d6;
          }
          break;
        }
        iVar5 = uVar3 + 1;
      }
    } while (iVar5 <= iVar6);
  }
  uVar4 = 0xffffffff;
LAB_1452139d6:
  FUN_145210620(param_2,0,uVar4,param_1,param_1 + 8);
  return;
}



// FUNCTION 145213a10 FUN_145213a10 body=1083 status=ok
// SIG undefined FUN_145213a10(void)

void FUN_145213a10(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  lVar3 = *(longlong *)(param_1 + 0x70);
  lVar17 = 0x14;
  uVar10 = 0;
  uVar13 = 0;
  iVar18 = 0;
  uVar9 = 0;
  iVar15 = 1;
  if (uVar2 != 0) goto LAB_145213dc6;
LAB_145213a6f:
  if ((&DAT_149c5aed8)[(int)lVar17] == 0) {
    return;
  }
  iVar4 = (byte)(&DAT_149c5aed8)[(int)lVar17] - 1;
  do {
    uVar11 = (uint)uVar9;
    lVar17 = (longlong)(char)(&DAT_149c5ae28)[iVar4];
    uVar16 = (uint)uVar10;
    uVar12 = uVar11;
    if ((&DAT_149c5ae58)[iVar4] == '\0') goto switchD_145213abf_caseD_6;
    cVar14 = (char)iVar15;
    switch((&DAT_149c5ae58)[iVar4]) {
    case 1:
      uVar12 = uVar13 - 1;
      if (uVar16 < uVar13) {
        pcVar5 = (char *)(uVar10 * 0x14 + 0xf + lVar3);
        uVar10 = (ulonglong)(uVar13 - uVar16);
        do {
          *pcVar5 = cVar14 << 4;
          pcVar5 = pcVar5 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      iVar15 = iVar15 + 1;
      if (iVar15 == 0x10) {
        iVar15 = 1;
      }
      break;
    case 2:
      goto switchD_145213abf_caseD_2;
    case 3:
      if (iVar18 == 2) {
        uVar12 = uVar13 - 1;
        if (uVar16 < uVar13) {
          uVar9 = (ulonglong)(uVar13 - uVar16);
          pbVar6 = (byte *)(lVar3 + 0xf + uVar10 * 0x14);
          do {
            *pbVar6 = cVar14 << 4 | 1;
            pbVar6 = pbVar6 + 0x14;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        iVar15 = iVar15 + 1;
        if (iVar15 == 0x10) {
          iVar15 = 1;
        }
      }
      else if (iVar18 == 3) {
        uVar12 = uVar13 - 1;
        if (uVar16 < uVar13) {
          uVar9 = (ulonglong)(uVar13 - uVar16);
          pbVar6 = (byte *)(lVar3 + 0xf + uVar10 * 0x14);
          do {
            *pbVar6 = cVar14 << 4 | 2;
            pbVar6 = pbVar6 + 0x14;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        iVar15 = iVar15 + 1;
        if (iVar15 == 0x10) {
          iVar15 = 1;
        }
      }
      break;
    case 4:
      iVar18 = 2;
      goto switchD_145213abf_caseD_2;
    case 5:
      if (uVar16 < uVar13) {
        uVar9 = (ulonglong)(uVar13 - uVar16);
        pbVar6 = (byte *)(lVar3 + 0xf + uVar10 * 0x14);
        do {
          *pbVar6 = cVar14 << 4 | 1;
          pbVar6 = pbVar6 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar15 = iVar15 + 1;
      uVar12 = uVar13 - 1;
      if (iVar15 == 0x10) {
        iVar15 = 1;
      }
      break;
    case 8:
      uVar13 = uVar11 + 1;
      if (uVar16 < uVar13) {
        uVar9 = (ulonglong)(uVar13 - uVar16);
        pbVar6 = (byte *)(lVar3 + 0xf + uVar10 * 0x14);
        do {
          *pbVar6 = cVar14 << 4 | 2;
          pbVar6 = pbVar6 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar15 = iVar15 + 1;
      if (iVar15 == 0x10) {
        iVar15 = 1;
      }
      break;
    case 9:
      iVar18 = 3;
switchD_145213abf_caseD_2:
      uVar13 = uVar11 + 1;
      break;
    case 10:
      if (uVar16 < uVar11) {
        uVar9 = (ulonglong)(uVar11 - uVar16);
        pcVar5 = (char *)(lVar3 + 0xf + uVar10 * 0x14);
        do {
          *pcVar5 = cVar14 << 4;
          pcVar5 = pcVar5 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar15 = iVar15 + 1;
      uVar13 = uVar11;
      uVar12 = uVar11 - 1;
      if (iVar15 == 0x10) {
        iVar15 = 1;
      }
      break;
    case 0xb:
      if (uVar16 < uVar11) {
        uVar9 = (ulonglong)(uVar11 - uVar16);
        pbVar6 = (byte *)(lVar3 + 0xf + uVar10 * 0x14);
        do {
          *pbVar6 = cVar14 << 4 | 2;
          pbVar6 = pbVar6 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar15 = iVar15 + 1;
      uVar13 = uVar11;
      uVar12 = uVar11 - 1;
      if (iVar15 == 0x10) {
        iVar15 = 1;
      }
      break;
    case 0xc:
      if (uVar16 < uVar11) {
        uVar9 = (ulonglong)(uVar11 - uVar16);
        pbVar6 = (byte *)(lVar3 + 0xf + uVar10 * 0x14);
        do {
          *pbVar6 = cVar14 << 4 | 1;
          pbVar6 = pbVar6 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar15 = iVar15 + 1;
      uVar13 = uVar11;
      uVar12 = uVar11 - 1;
      if (iVar15 == 0x10) {
        iVar15 = 1;
      }
    }
switchD_145213abf_caseD_6:
    uVar11 = 0;
    if ((&DAT_149c5ae88)[lVar17] != '\x06') {
      uVar11 = uVar16;
    }
    uVar9 = (ulonglong)(uVar12 + 1);
    uVar10 = (ulonglong)uVar11;
    if (uVar12 + 1 == uVar2) goto LAB_145213a6f;
LAB_145213dc6:
    lVar7 = (longlong)(int)lVar17;
    iVar4 = (int)lVar17 * 2;
    if ((&DAT_149c5aeb0)[lVar7] == '\a') {
      uVar10 = uVar9;
    }
    iVar8 = (int)(char)(&DAT_149c5aa68)[lVar7];
    if ('\0' < (char)(&DAT_149c5aa68)[lVar7]) {
      bVar1 = *(byte *)(lVar3 + 0x12 + uVar9 * 0x14);
      if (((byte)(&DAT_149c5aa10)[iVar4] <= bVar1) && (bVar1 <= (byte)(&DAT_149c5aa11)[iVar4])) {
        iVar8 = (uint)bVar1 - (uint)(byte)(&DAT_149c5aa10)[iVar4];
      }
    }
    iVar4 = (int)(char)(&DAT_149c5aae0)
                       [(longlong)iVar8 + (longlong)*(short *)(&DAT_149c5aa90 + lVar7 * 2)];
  } while( true );
}



// FUNCTION 145213e80 FUN_145213e80 body=661 status=ok
// SIG undefined FUN_145213e80(void)

void FUN_145213e80(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined8 *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  
  lVar4 = *(longlong *)(param_1 + 0x98);
  lVar5 = *(longlong *)(param_3 + 0x70);
  uVar17 = param_4 + 1;
  uVar16 = *(uint *)(lVar4 + 0x24);
  uVar15 = *(uint *)(lVar4 + 0x20);
  uVar13 = *(uint *)(lVar4 + 0x1c);
  if (uVar17 < param_5) {
    uVar14 = (ulonglong)(param_5 - uVar17);
    puVar12 = (uint *)(lVar5 + (ulonglong)uVar17 * 0x14 + 4);
    do {
      *puVar12 = *puVar12 | uVar16 | uVar15 | uVar13;
      puVar12 = puVar12 + 5;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar16 = 0;
  if (uVar17 < param_5) {
    puVar18 = (undefined8 *)(lVar5 + (ulonglong)uVar17 * 0x14);
    uVar15 = param_4 + 3;
    do {
      if (((*(char *)((longlong)puVar18 + 0x12) == '\x0e') && (uVar16 < 3)) &&
         (uVar13 = uVar15 - 1, uVar13 < param_5)) {
        uVar16 = uVar16 + 1;
        puVar1 = (undefined4 *)(lVar5 + (ulonglong)uVar13 * 0x14);
        if (*(char *)(lVar5 + 0x12 + (ulonglong)uVar13 * 0x14) == '\x10') {
          puVar12 = (uint *)(lVar5 + 4 + (ulonglong)(uVar15 - 2) * 0x14);
          *puVar12 = *puVar12 | *(uint *)(lVar4 + 0x18);
          puVar1[1] = puVar1[1] | *(uint *)(lVar4 + 0x18);
          if (1 < uVar15 + 1 + (-1 - param_4)) {
            FUN_144b61d00(param_3,param_4,(ulonglong)uVar15);
          }
          uVar10 = *puVar18;
          uVar11 = puVar18[1];
          uVar2 = puVar1[4];
          uVar3 = *(undefined4 *)(puVar18 + 2);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          _Src = (undefined8 *)(lVar5 + (ulonglong)param_4 * 0x14);
          memmove((void *)(lVar5 + (ulonglong)(param_4 + 2) * 0x14),_Src,
                  (ulonglong)((uVar15 - 2) - param_4) * 0x14);
          *_Src = uVar10;
          _Src[1] = uVar11;
          *(undefined4 *)(_Src + 2) = uVar3;
          puVar1 = (undefined4 *)(lVar5 + (ulonglong)uVar17 * 0x14);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          *(undefined4 *)(lVar5 + 0x10 + (ulonglong)uVar17 * 0x14) = uVar2;
          if ((*(int *)(lVar4 + 0x28) != 0) && (uVar15 < param_5)) {
            uVar14 = (ulonglong)(param_5 - uVar15);
            puVar12 = (uint *)(lVar5 + ((ulonglong)uVar15 * 5 + 1) * 4);
            do {
              *puVar12 = *puVar12 | *(uint *)(lVar4 + 0x28);
              puVar12 = puVar12 + 5;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          uVar16 = 2;
        }
      }
      else if (*(char *)((longlong)puVar18 + 0x12) == '\x1c') {
        if (1 < (-1 - param_4) + uVar15) {
          FUN_144b61d00(param_3,param_4,uVar15 - 1);
        }
        uVar3 = *(undefined4 *)puVar18;
        uVar6 = *(undefined4 *)((longlong)puVar18 + 4);
        uVar7 = *(undefined4 *)(puVar18 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar18 + 0xc);
        uVar2 = *(undefined4 *)(puVar18 + 2);
        puVar1 = (undefined4 *)(lVar5 + (ulonglong)param_4 * 0x14);
        memmove((void *)(lVar5 + (ulonglong)(param_4 + 1) * 0x14),puVar1,
                (ulonglong)((uVar15 - param_4) - 2) * 0x14);
        *puVar1 = uVar3;
        puVar1[1] = uVar6;
        puVar1[2] = uVar7;
        puVar1[3] = uVar8;
        puVar1[4] = uVar2;
      }
      puVar18 = (undefined8 *)((longlong)puVar18 + 0x14);
      uVar13 = uVar15 - 1;
      uVar15 = uVar15 + 1;
    } while (uVar13 < param_5);
  }
  return;
}



// FUNCTION 145214120 FUN_145214120 body=638 status=ok
// SIG undefined FUN_145214120(void)

void FUN_145214120(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  byte *pbVar13;
  byte bVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  undefined4 local_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((*(byte *)(param_3 + 0x18) & 0x10) == 0) {
    bVar14 = 0;
    uVar15 = 0;
    if (*(uint *)(param_3 + 0x60) != 0) {
      pbVar13 = (byte *)(*(longlong *)(param_3 + 0x70) + 0xf);
      while ((*pbVar13 & 0xf) != 1) {
        uVar15 = uVar15 + 1;
        pbVar13 = pbVar13 + 0x14;
        if (*(uint *)(param_3 + 0x60) <= uVar15) {
          return;
        }
      }
      local_res18[0] = 0;
      iVar12 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x130))
                         (param_2,*(undefined8 *)(param_2 + 0x48),0x25cc,local_res18,
                          *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
      if (iVar12 != 0) {
        local_38 = 0x25cc;
        uStack_34 = 0;
        uStack_2c = 0;
        FUN_145213670(&local_38);
        local_38 = local_res18[0];
        FUN_144b61b50(param_3);
        *(undefined4 *)(param_3 + 0x5c) = 0;
        if (*(int *)(param_3 + 0x60) != 0) {
          uVar10 = uStack_2c._4_4_;
          do {
            if (*(char *)(param_3 + 0x58) == '\0') break;
            uVar15 = *(uint *)(param_3 + 0x5c);
            lVar6 = *(longlong *)(param_3 + 0x70);
            bVar4 = *(byte *)(lVar6 + 0xf + (ulonglong)uVar15 * 0x14);
            lVar1 = lVar6 + (ulonglong)uVar15 * 0x14;
            if ((bVar14 == bVar4) || ((bVar4 & 0xf) != 1)) {
              if (*(char *)(param_3 + 0x59) != '\0') {
                if ((*(longlong *)(param_3 + 0x78) != lVar6) || (*(uint *)(param_3 + 100) != uVar15)
                   ) {
                  cVar11 = FUN_144b62480(param_3,1,1);
                  if (cVar11 == '\0') goto LAB_145214372;
                  uVar15 = *(uint *)(param_3 + 0x5c);
                  lVar1 = *(longlong *)(param_3 + 0x70);
                  uVar5 = *(uint *)(param_3 + 100);
                  puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar15 * 0x14);
                  uVar7 = puVar2[1];
                  uVar8 = puVar2[2];
                  uVar9 = puVar2[3];
                  lVar6 = *(longlong *)(param_3 + 0x78);
                  puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar7;
                  puVar3[2] = uVar8;
                  puVar3[3] = uVar9;
                  *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
                       *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x14);
                }
                *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
              }
              *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
            }
            else {
              uStack_18 = *(undefined4 *)(lVar1 + 8);
              local_20 = local_38;
              uStack_1c = *(undefined4 *)(lVar1 + 4);
              uStack_14 = CONCAT13(bVar4,(int3)uStack_2c);
              if (uVar15 < *(uint *)(param_3 + 0x60)) {
                while (*(char *)(param_3 + 0x58) != '\0') {
                  uVar15 = *(uint *)(param_3 + 0x5c);
                  lVar1 = *(longlong *)(param_3 + 0x70);
                  if ((bVar4 != *(byte *)(lVar1 + 0xf + (ulonglong)uVar15 * 0x14)) ||
                     (*(char *)(lVar1 + (ulonglong)uVar15 * 0x14 + 0x12) != '\x0f')) break;
                  if (*(char *)(param_3 + 0x59) == '\0') {
LAB_1452142dd:
                    *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
                  }
                  else {
                    if ((*(longlong *)(param_3 + 0x78) == lVar1) &&
                       (*(uint *)(param_3 + 100) == uVar15)) {
LAB_1452142da:
                      *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
                      goto LAB_1452142dd;
                    }
                    cVar11 = FUN_144b62480(param_3,1,1);
                    if (cVar11 != '\0') {
                      uVar15 = *(uint *)(param_3 + 0x5c);
                      lVar1 = *(longlong *)(param_3 + 0x70);
                      uVar5 = *(uint *)(param_3 + 100);
                      puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar15 * 0x14);
                      uVar7 = puVar2[1];
                      uVar8 = puVar2[2];
                      uVar9 = puVar2[3];
                      lVar6 = *(longlong *)(param_3 + 0x78);
                      puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
                      *puVar3 = *puVar2;
                      puVar3[1] = uVar7;
                      puVar3[2] = uVar8;
                      puVar3[3] = uVar9;
                      *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
                           *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x14);
                      goto LAB_1452142da;
                    }
                  }
                  if (*(uint *)(param_3 + 0x60) <= *(uint *)(param_3 + 0x5c)) break;
                }
              }
              cVar11 = FUN_144b62480(param_3,0,1);
              bVar14 = bVar4;
              if (cVar11 != '\0') {
                uVar15 = *(uint *)(param_3 + 100);
                lVar1 = *(longlong *)(param_3 + 0x78);
                puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar15 * 0x14);
                *puVar2 = local_20;
                puVar2[1] = uStack_1c;
                puVar2[2] = uStack_18;
                puVar2[3] = uStack_14;
                *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x14) = uVar10;
                *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
              }
            }
LAB_145214372:
          } while (*(uint *)(param_3 + 0x5c) < *(uint *)(param_3 + 0x60));
        }
        FUN_144b61af0(param_3);
      }
    }
  }
  return;
}



// FUNCTION 1452143c0 FUN_1452143c0 body=530 status=ok
// SIG undefined FUN_1452143c0(void)

void FUN_1452143c0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  
  if (*(uint *)(param_2 + 0x60) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x60);
    puVar6 = (undefined1 *)(*(longlong *)(param_2 + 0x70) + 0x13);
    do {
      uVar1 = *(uint *)(puVar6 + -0x13);
      uVar3 = FUN_145489270(uVar1);
      uVar2 = uVar3 >> 8;
      uVar7 = (undefined1)(uVar3 >> 8);
      uVar3 = uVar3 & 0x7f;
      if (uVar1 - 0xfe00 < 0x10) {
        uVar3 = 0x1e;
      }
      uVar4 = (undefined1)uVar3;
      if (uVar1 < 0x1005) {
        if (uVar1 == 0x1004) {
switchD_1452144c0_caseD_101b:
          uVar4 = 0x10;
          goto LAB_1452145a0;
        }
        if (((uVar1 == 0x2d) || (uVar1 == 0xa0)) || (uVar1 == 0xd7)) goto LAB_145214555;
switchD_1452144c0_caseD_101c:
        if (uVar3 == 7) {
          if (uVar2 == 3) {
            uVar4 = 0x1c;
            uVar7 = 2;
          }
          else if (uVar2 == 6) {
            uVar4 = 0x1a;
          }
          else if (uVar2 == 8) {
            uVar4 = 0x1b;
          }
          else if (uVar2 == 0xb) {
            uVar4 = 0x1d;
          }
        }
      }
      else {
        if (0x2015 < uVar1) {
          if (uVar1 < 0x25ff) {
            if (((0x25fa < uVar1) || (uVar1 == 0x2022)) || (uVar1 == 0x25cc)) goto LAB_145214555;
          }
          else if (0xaa73 < uVar1) {
            if (uVar1 < 0xaa77) goto switchD_1452144c0_caseD_104e;
            if (uVar1 == 0xaa7b) goto switchD_1452144c0_caseD_1063;
          }
          goto switchD_1452144c0_caseD_101c;
        }
        if (uVar1 < 0x2012) {
          switch(uVar1) {
          case 0x101b:
          case 0x105a:
            goto switchD_1452144c0_caseD_101b;
          default:
            goto switchD_1452144c0_caseD_101c;
          case 0x1032:
          case 0x1036:
            uVar4 = 10;
            break;
          case 0x1038:
          case 0x1087:
          case 0x1088:
          case 0x1089:
          case 0x108a:
          case 0x108b:
          case 0x108c:
          case 0x108d:
          case 0x108f:
          case 0x109a:
          case 0x109b:
          case 0x109c:
            uVar4 = 8;
            break;
          case 0x1039:
            uVar4 = 4;
            break;
          case 0x103a:
            uVar4 = 0x12;
            break;
          case 0x103b:
          case 0x105e:
          case 0x105f:
            uVar4 = 0x18;
            break;
          case 0x103c:
            uVar4 = 0x16;
            break;
          case 0x103d:
          case 0x1082:
            uVar4 = 0x17;
            break;
          case 0x103e:
          case 0x1060:
            uVar4 = 0x15;
            break;
          case 0x1040:
          case 0x1041:
          case 0x1042:
          case 0x1043:
          case 0x1044:
          case 0x1045:
          case 0x1046:
          case 0x1047:
          case 0x1048:
          case 0x1049:
          case 0x1090:
          case 0x1091:
          case 0x1092:
          case 0x1093:
          case 0x1094:
          case 0x1095:
          case 0x1096:
          case 0x1097:
          case 0x1098:
          case 0x1099:
            uVar4 = 0x20;
            break;
          case 0x104a:
          case 0x104b:
            uVar4 = 0x1f;
            break;
          case 0x104e:
switchD_1452144c0_caseD_104e:
            uVar4 = 1;
            break;
          case 0x1063:
          case 0x1064:
          case 0x1069:
          case 0x106a:
          case 0x106b:
          case 0x106c:
          case 0x106d:
switchD_1452144c0_caseD_1063:
            uVar4 = 0x19;
          }
        }
        else {
LAB_145214555:
          uVar4 = 0xb;
        }
      }
LAB_1452145a0:
      puVar6[-1] = uVar4;
      *puVar6 = uVar7;
      puVar6 = puVar6 + 0x14;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 145214690 FUN_145214690 body=306 status=ok
// SIG undefined FUN_145214690(void)

void FUN_145214690(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  
  param_1 = param_1 + 0x28;
  FUN_145208de0(param_1,0,FUN_145214b50);
  FUN_145207a70(param_1,0x6c6f636c,1);
  FUN_145207a70(param_1,0x63636d70,1);
  FUN_145208de0(param_1,0,FUN_145214bf0);
  lVar2 = 4;
  pcVar3 = "fhprferpfwlbftspserpsvbaswlbstsptsidmvbamwlb";
  lVar1 = 4;
  do {
    FUN_145207a70(param_1,*(undefined4 *)pcVar3,9);
    FUN_145208de0(param_1,0,0);
    pcVar3 = pcVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_145208de0(param_1,0,&LAB_145214ca0);
  pcVar3 = "serpsvbaswlbstsptsidmvbamwlb";
  do {
    FUN_145207a70(param_1,*(undefined4 *)pcVar3,9);
    pcVar3 = pcVar3 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  pcVar3 = "tsidmvbamwlb";
  lVar1 = 3;
  do {
    FUN_145207a70(param_1,*(undefined4 *)pcVar3,1);
    pcVar3 = pcVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1452147d0 FUN_1452147d0 body=702 status=ok
// SIG undefined FUN_1452147d0(void)

void FUN_1452147d0(uint *param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_1;
  uVar3 = FUN_145489270(uVar1);
  uVar2 = uVar3 >> 8;
  uVar5 = (undefined1)(uVar3 >> 8);
  uVar3 = uVar3 & 0x7f;
  if (uVar1 - 0xfe00 < 0x10) {
    uVar3 = 0x1e;
  }
  uVar4 = (undefined1)uVar3;
  if (uVar1 < 0x1005) {
    if (uVar1 == 0x1004) {
switchD_1452148b7_caseD_101b:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x10;
      return;
    }
    if (((uVar1 == 0x2d) || (uVar1 == 0xa0)) || (uVar1 == 0xd7)) goto LAB_1452149f1;
  }
  else if (uVar1 < 0x2016) {
    if (0x2011 < uVar1) {
LAB_1452149f1:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0xb;
      return;
    }
    switch(uVar1) {
    case 0x101b:
    case 0x105a:
      goto switchD_1452148b7_caseD_101b;
    case 0x1032:
    case 0x1036:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 10;
      return;
    case 0x1038:
    case 0x1087:
    case 0x1088:
    case 0x1089:
    case 0x108a:
    case 0x108b:
    case 0x108c:
    case 0x108d:
    case 0x108f:
    case 0x109a:
    case 0x109b:
    case 0x109c:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 8;
      return;
    case 0x1039:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 4;
      return;
    case 0x103a:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x12;
      return;
    case 0x103b:
    case 0x105e:
    case 0x105f:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x18;
      return;
    case 0x103c:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x16;
      return;
    case 0x103d:
    case 0x1082:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x17;
      return;
    case 0x103e:
    case 0x1060:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x15;
      return;
    case 0x1040:
    case 0x1041:
    case 0x1042:
    case 0x1043:
    case 0x1044:
    case 0x1045:
    case 0x1046:
    case 0x1047:
    case 0x1048:
    case 0x1049:
    case 0x1090:
    case 0x1091:
    case 0x1092:
    case 0x1093:
    case 0x1094:
    case 0x1095:
    case 0x1096:
    case 0x1097:
    case 0x1098:
    case 0x1099:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x20;
      return;
    case 0x104a:
    case 0x104b:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x1f;
      return;
    case 0x104e:
switchD_1452148b7_caseD_104e:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 1;
      return;
    case 0x1063:
    case 0x1064:
    case 0x1069:
    case 0x106a:
    case 0x106b:
    case 0x106c:
    case 0x106d:
switchD_1452148b7_caseD_1063:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x19;
      return;
    }
  }
  else if (uVar1 < 0x25ff) {
    if (((0x25fa < uVar1) || (uVar1 == 0x2022)) || (uVar1 == 0x25cc)) goto LAB_1452149f1;
  }
  else if (0xaa73 < uVar1) {
    if (uVar1 < 0xaa77) goto switchD_1452148b7_caseD_104e;
    if (uVar1 == 0xaa7b) goto switchD_1452148b7_caseD_1063;
  }
  if (uVar3 == 7) {
    if (uVar2 == 3) {
      uVar4 = 0x1c;
      uVar5 = 2;
    }
    else {
      if (uVar2 == 6) {
        *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
        *(undefined1 *)((longlong)param_1 + 0x12) = 0x1a;
        return;
      }
      if (uVar2 == 8) {
        *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
        *(undefined1 *)((longlong)param_1 + 0x12) = 0x1b;
        return;
      }
      if (uVar2 == 0xb) {
        *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
        *(undefined1 *)((longlong)param_1 + 0x12) = 0x1d;
        return;
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x12) = uVar4;
  *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
  return;
}



// FUNCTION 145214b50 FUN_145214b50 body=151 status=ok
// SIG undefined FUN_145214b50(void)

void FUN_145214b50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  FUN_145214cc0(param_3);
  uVar1 = *(uint *)(param_3 + 0x60);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
             *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar3;
        if (1 < (uint)uVar4 - (int)uVar5) {
          FUN_144b620d0(param_3,uVar5,uVar4);
        }
        uVar3 = uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if (*(uint *)(param_3 + 0x60) <= uVar2) break;
        } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar4 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
        uVar5 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 145214bf0 FUN_145214bf0 body=167 status=ok
// SIG undefined FUN_145214bf0(void)

void FUN_145214bf0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar3;
  
  FUN_145215280();
  uVar1 = *(uint *)(param_3 + 0x60);
  uVar6 = 0;
  if (uVar1 != 0) {
    lVar5 = *(longlong *)(param_3 + 0x70);
    uVar3 = uVar6;
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(lVar5 + 0xf) == *(char *)(lVar5 + 0xf + uVar3 * 0x14));
    if (uVar1 != 0) {
      do {
        uVar4 = uVar3;
        if ((*(byte *)(lVar5 + 0xf + uVar6 * 0x14) & 0xd) == 0) {
          FUN_1452150a0(param_3,uVar6,uVar4);
        }
        lVar5 = *(longlong *)(param_3 + 0x70);
        uVar3 = uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if (*(uint *)(param_3 + 0x60) <= uVar2) break;
        } while (*(char *)(lVar5 + 0xf + uVar4 * 0x14) == *(char *)(lVar5 + 0xf + uVar3 * 0x14));
        uVar6 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 145214cc0 FUN_145214cc0 body=916 status=ok
// SIG undefined FUN_145214cc0(void)

void FUN_145214cc0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  char *pcVar6;
  byte *pbVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  lVar3 = *(longlong *)(param_1 + 0x70);
  lVar15 = 0;
  uVar11 = 0;
  uVar5 = 0;
  iVar9 = 1;
  if (uVar2 != 0) goto LAB_145214fd2;
  while (0 < (short)(&DAT_149c5b6b0)[(int)lVar15]) {
    iVar4 = (short)(&DAT_149c5b6b0)[(int)lVar15] + -1;
    while( true ) {
      uVar12 = (uint)uVar5;
      lVar15 = (longlong)(char)(&DAT_149c5b5e0)[iVar4];
      if ((&DAT_149c5b618)[iVar4] != '\0') {
        cVar8 = (char)iVar9;
        uVar10 = (uint)uVar11;
        switch((&DAT_149c5b618)[iVar4]) {
        case 3:
          if (uVar10 < uVar12 + 1) {
            pbVar7 = (byte *)(lVar3 + 0xf + uVar11 * 0x14);
            uVar5 = (ulonglong)((uVar12 + 1) - uVar10);
            do {
              *pbVar7 = cVar8 << 4 | 3;
              pbVar7 = pbVar7 + 0x14;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          iVar9 = iVar9 + 1;
          if (iVar9 == 0x10) {
            iVar9 = 1;
          }
          break;
        case 4:
          if (uVar10 < uVar12 + 1) {
            pbVar7 = (byte *)(lVar3 + 0xf + uVar11 * 0x14);
            uVar5 = (ulonglong)((uVar12 + 1) - uVar10);
            do {
              *pbVar7 = cVar8 << 4 | 2;
              pbVar7 = pbVar7 + 0x14;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          iVar9 = iVar9 + 1;
          if (iVar9 == 0x10) {
            iVar9 = 1;
          }
          break;
        case 5:
          if (uVar10 < uVar12 + 1) {
            pbVar7 = (byte *)(lVar3 + 0xf + uVar11 * 0x14);
            uVar5 = (ulonglong)((uVar12 + 1) - uVar10);
            do {
              *pbVar7 = cVar8 << 4 | 3;
              pbVar7 = pbVar7 + 0x14;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          iVar9 = iVar9 + 1;
          if (iVar9 == 0x10) {
            iVar9 = 1;
          }
          break;
        case 6:
          uVar13 = uVar12 - 1;
          if (uVar10 < uVar12) {
            pcVar6 = (char *)(uVar11 * 0x14 + 0xf + lVar3);
            uVar5 = (ulonglong)(uVar12 - uVar10);
            do {
              *pcVar6 = cVar8 << 4;
              pcVar6 = pcVar6 + 0x14;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          iVar9 = iVar9 + 1;
          uVar12 = uVar13;
          if (iVar9 == 0x10) {
            iVar9 = 1;
          }
          break;
        case 7:
          if (uVar10 < uVar12 + 1) {
            pcVar6 = (char *)(lVar3 + 0xf + uVar11 * 0x14);
            uVar5 = (ulonglong)((uVar12 + 1) - uVar10);
            do {
              *pcVar6 = cVar8 << 4;
              pcVar6 = pcVar6 + 0x14;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          iVar9 = iVar9 + 1;
          if (iVar9 == 0x10) {
            iVar9 = 1;
          }
          break;
        case 8:
          uVar13 = uVar12 - 1;
          if (uVar10 < uVar12) {
            pbVar7 = (byte *)(lVar3 + 0xf + uVar11 * 0x14);
            uVar5 = (ulonglong)(uVar12 - uVar10);
            do {
              *pbVar7 = cVar8 << 4 | 2;
              pbVar7 = pbVar7 + 0x14;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          iVar9 = iVar9 + 1;
          uVar12 = uVar13;
          if (iVar9 == 0x10) {
            iVar9 = 1;
          }
          break;
        case 9:
          uVar13 = uVar12 - 1;
          if (uVar10 < uVar12) {
            pbVar7 = (byte *)(lVar3 + 0xf + uVar11 * 0x14);
            uVar5 = (ulonglong)(uVar12 - uVar10);
            do {
              *pbVar7 = cVar8 << 4 | 3;
              pbVar7 = pbVar7 + 0x14;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          iVar9 = iVar9 + 1;
          uVar12 = uVar13;
          if (iVar9 == 0x10) {
            iVar9 = 1;
          }
          break;
        case 10:
          if (uVar10 < uVar12 + 1) {
            pbVar7 = (byte *)(lVar3 + 0xf + uVar11 * 0x14);
            uVar5 = (ulonglong)((uVar12 + 1) - uVar10);
            do {
              *pbVar7 = cVar8 << 4 | 1;
              pbVar7 = pbVar7 + 0x14;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          iVar9 = iVar9 + 1;
          if (iVar9 == 0x10) {
            iVar9 = 1;
          }
        }
      }
      if ((&DAT_149c5b650)[lVar15] == '\x01') {
        uVar11 = 0;
      }
      uVar5 = (ulonglong)(uVar12 + 1);
      if (uVar12 + 1 == uVar2) break;
LAB_145214fd2:
      iVar14 = (int)lVar15;
      iVar4 = (int)(char)(&DAT_149c5b068)[iVar14];
      if ((&DAT_149c5b680)[iVar14] == '\x02') {
        uVar11 = uVar5;
      }
      if ('\0' < (char)(&DAT_149c5b068)[iVar14]) {
        bVar1 = *(byte *)(lVar3 + 0x12 + uVar5 * 0x14);
        if (((byte)(&DAT_149c5b000)[iVar14 * 2] <= bVar1) &&
           (bVar1 <= (byte)(&DAT_149c5b001)[iVar14 * 2])) {
          iVar4 = (uint)bVar1 - (uint)(byte)(&DAT_149c5b000)[iVar14 * 2];
        }
      }
      iVar4 = (int)(char)(&DAT_149c5b100)
                         [(longlong)iVar4 + (longlong)(short)(&DAT_149c5b0a0)[iVar14]];
    }
  }
  return;
}



// FUNCTION 1452150a0 FUN_1452150a0 body=480 status=ok
// SIG undefined FUN_1452150a0(void)

void FUN_1452150a0(longlong param_1,uint param_2,uint param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  bVar10 = 0;
  uVar5 = (ulonglong)param_2;
  if ((((param_2 + 3 <= param_3) && (*(char *)(lVar2 + 0x12 + (ulonglong)param_2 * 0x14) == '\x10'))
      && (*(char *)(lVar2 + 0x12 + (ulonglong)(param_2 + 1) * 0x14) == '\x12')) &&
     (*(char *)(lVar2 + 0x12 + (ulonglong)(param_2 + 2) * 0x14) == '\x04')) {
    uVar5 = (ulonglong)(param_2 + 3);
    bVar10 = 1;
  }
  uVar9 = param_2;
  if ((uint)uVar5 < param_3) {
    pbVar8 = (byte *)(lVar2 + 0x12 + uVar5 * 0x14);
    do {
      if ((pbVar8[-6] >> 5 & 1) == 0) {
        if (*pbVar8 < 0x20) {
          uVar3 = 1 << (*pbVar8 & 0x1f);
        }
        else {
          uVar3 = 0;
        }
        uVar9 = (uint)uVar5;
        if ((uVar3 & 0xb1806) != 0) break;
      }
      uVar3 = (uint)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
      pbVar8 = pbVar8 + 0x14;
      uVar9 = param_2;
    } while (uVar3 < param_3);
  }
  uVar7 = (-(uint)bVar10 & 3) + param_2;
  uVar3 = param_2;
  if (param_2 < uVar7) {
    puVar4 = (undefined1 *)((ulonglong)param_2 * 0x14 + 0x13 + lVar2);
    uVar7 = uVar7 - param_2;
    uVar5 = (ulonglong)uVar7;
    uVar3 = uVar7 + param_2;
    do {
      *puVar4 = 5;
      puVar4 = puVar4 + 0x14;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = (ulonglong)uVar3;
  if (uVar3 < uVar9) {
    uVar5 = (ulonglong)(uVar3 + (uVar9 - uVar3));
    puVar4 = (undefined1 *)(lVar2 + 0x13 + (ulonglong)uVar3 * 0x14);
    uVar6 = (ulonglong)(uVar9 - uVar3);
    do {
      *puVar4 = 3;
      puVar4 = puVar4 + 0x14;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar5;
  if ((uint)uVar5 < param_3) {
    uVar6 = (ulonglong)((uint)uVar5 + 1);
    *(undefined1 *)(lVar2 + 0x13 + uVar5 * 0x14) = 4;
  }
  bVar10 = 5;
  if ((uint)uVar6 < param_3) {
    pbVar8 = (byte *)(lVar2 + 0x13 + uVar6 * 0x14);
    do {
      bVar1 = pbVar8[-1];
      if (bVar1 == 0x16) {
        *pbVar8 = 3;
      }
      else if (3 < *pbVar8) {
        if (bVar1 == 0x1e) {
          *pbVar8 = *(byte *)(lVar2 + 0x13 + (ulonglong)((int)uVar6 - 1) * 0x14);
        }
        else {
          if (bVar10 == 5) {
            if (bVar1 == 0x1b) {
              bVar10 = 8;
            }
          }
          else if (bVar10 == 8) {
            if (bVar1 == 10) {
              *pbVar8 = 7;
            }
            else {
              if (bVar1 != 0x1b) {
                bVar10 = 9;
                goto LAB_145215247;
              }
              *pbVar8 = 8;
            }
            goto LAB_14521524a;
          }
LAB_145215247:
          *pbVar8 = bVar10;
        }
      }
LAB_14521524a:
      uVar9 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar9;
      pbVar8 = pbVar8 + 0x14;
    } while (uVar9 < param_3);
  }
  FUN_144b625b0(param_1,param_2,param_3,&LAB_145215080);
  return;
}



// FUNCTION 145215280 FUN_145215280 body=457 status=ok
// SIG undefined FUN_145215280(void)

void FUN_145215280(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  byte *pbVar13;
  byte bVar14;
  uint uVar15;
  undefined4 local_res18 [4];
  undefined4 local_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((*(byte *)(param_3 + 0x18) & 0x10) == 0) {
    bVar14 = 0;
    uVar15 = 0;
    if (*(uint *)(param_3 + 0x60) != 0) {
      pbVar13 = (byte *)(*(longlong *)(param_3 + 0x70) + 0xf);
      while ((*pbVar13 & 0xf) != 2) {
        uVar15 = uVar15 + 1;
        pbVar13 = pbVar13 + 0x14;
        if (*(uint *)(param_3 + 0x60) <= uVar15) {
          return;
        }
      }
      local_res18[0] = 0;
      iVar12 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x130))
                         (param_2,*(undefined8 *)(param_2 + 0x48),0x25cc,local_res18,
                          *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
      if (iVar12 != 0) {
        local_38 = 0x25cc;
        uStack_34 = 0;
        uStack_2c = 0;
        FUN_1452147d0(&local_38);
        local_38 = local_res18[0];
        FUN_144b61b50(param_3);
        *(undefined4 *)(param_3 + 0x5c) = 0;
        if (*(int *)(param_3 + 0x60) != 0) {
          uVar10 = uStack_2c._4_4_;
          do {
            if (*(char *)(param_3 + 0x58) == '\0') break;
            uVar15 = *(uint *)(param_3 + 0x5c);
            lVar6 = *(longlong *)(param_3 + 0x70);
            bVar4 = *(byte *)(lVar6 + 0xf + (ulonglong)uVar15 * 0x14);
            lVar1 = lVar6 + (ulonglong)uVar15 * 0x14;
            if ((bVar14 == bVar4) || ((bVar4 & 0xf) != 2)) {
              if (*(char *)(param_3 + 0x59) != '\0') {
                if ((*(longlong *)(param_3 + 0x78) != lVar6) || (*(uint *)(param_3 + 100) != uVar15)
                   ) {
                  cVar11 = FUN_144b62480(param_3,1,1);
                  if (cVar11 == '\0') goto LAB_145215425;
                  uVar15 = *(uint *)(param_3 + 0x5c);
                  lVar1 = *(longlong *)(param_3 + 0x70);
                  uVar5 = *(uint *)(param_3 + 100);
                  puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar15 * 0x14);
                  uVar7 = puVar2[1];
                  uVar8 = puVar2[2];
                  uVar9 = puVar2[3];
                  lVar6 = *(longlong *)(param_3 + 0x78);
                  puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar7;
                  puVar3[2] = uVar8;
                  puVar3[3] = uVar9;
                  *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
                       *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x14);
                }
                *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
              }
              *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
            }
            else {
              uStack_18 = *(undefined4 *)(lVar1 + 8);
              local_20 = local_38;
              uStack_14 = CONCAT13(bVar4,(int3)uStack_2c);
              uStack_1c = *(undefined4 *)(lVar1 + 4);
              cVar11 = FUN_144b62480(param_3,0,1);
              bVar14 = bVar4;
              if (cVar11 != '\0') {
                uVar15 = *(uint *)(param_3 + 100);
                lVar1 = *(longlong *)(param_3 + 0x78);
                puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar15 * 0x14);
                *puVar2 = local_20;
                puVar2[1] = uStack_1c;
                puVar2[2] = uStack_18;
                puVar2[3] = uStack_14;
                *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x14) = uVar10;
                *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
              }
            }
LAB_145215425:
          } while (*(uint *)(param_3 + 0x5c) < *(uint *)(param_3 + 0x60));
        }
        FUN_144b61af0(param_3);
      }
    }
  }
  return;
}



// FUNCTION 145215450 FUN_145215450 body=568 status=ok
// SIG undefined FUN_145215450(void)

void FUN_145215450(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  FUN_144b61b50(param_2);
  uVar4 = *(uint *)(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (uVar4 != 0) {
    do {
      if (*(char *)(param_2 + 0x58) == '\0') break;
      uVar5 = *(uint *)(*(longlong *)(param_2 + 0x70) + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14)
      ;
      if ((uVar5 & 0xffffff7f) == 0xe33) {
        lVar14 = FUN_1451e0a10(param_2,uVar5 + 0x1a);
        *(ushort *)(lVar14 + 0x10) = *(ushort *)(lVar14 + 0x10) | 0x80;
        FUN_1451e0990(param_2,uVar5 - 1);
        if (*(char *)(param_2 + 0x58) == '\0') {
          return;
        }
        uVar5 = *(uint *)(param_2 + 100);
        lVar7 = *(longlong *)(param_2 + 0x78);
        uVar16 = (ulonglong)(uVar5 - 2);
        lVar14 = uVar16 * 0x14;
        puVar3 = (ushort *)(lVar14 + 0x10 + lVar7);
        *puVar3 = *puVar3 & 0xe0;
        puVar3 = (ushort *)(lVar14 + 0x10 + lVar7);
        *puVar3 = *puVar3 | 0xc;
        if (uVar5 - 2 != 0) {
          do {
            uVar17 = (int)uVar16 - 1;
            uVar18 = (ulonglong)uVar17;
            uVar15 = *(uint *)(*(longlong *)(param_2 + 0x78) + uVar18 * 0x14) & 0xffffff7f;
            if (((3 < uVar15 - 0xe34) && (7 < uVar15 - 0xe47)) && (uVar15 != 0xe31)) break;
            uVar16 = uVar18;
          } while (uVar17 != 0);
        }
        iVar8 = (int)uVar16;
        if (iVar8 + 2U < uVar5) {
          FUN_144b61e90(param_2,uVar16,uVar5);
          lVar7 = *(longlong *)(param_2 + 0x78);
          puVar1 = (undefined4 *)(lVar14 + lVar7);
          uVar9 = *puVar1;
          uVar10 = puVar1[1];
          uVar11 = puVar1[2];
          uVar12 = puVar1[3];
          uVar6 = *(undefined4 *)(lVar14 + 0x10 + lVar7);
          lVar14 = uVar16 * 0x14;
          memmove((void *)(lVar7 + lVar14 + 0x14),(void *)(lVar7 + lVar14),
                  (ulonglong)((uVar5 - iVar8) - 2) * 0x14);
          lVar7 = *(longlong *)(param_2 + 0x78);
          puVar1 = (undefined4 *)(lVar7 + lVar14);
          *puVar1 = uVar9;
          puVar1[1] = uVar10;
          puVar1[2] = uVar11;
          puVar1[3] = uVar12;
          *(undefined4 *)(lVar7 + 0x10 + lVar14) = uVar6;
        }
        else if ((iVar8 != 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          FUN_144b61e90(param_2,iVar8 + -1,uVar5);
        }
      }
      else {
        if (*(char *)(param_2 + 0x59) != '\0') {
          if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
             (*(uint *)(param_2 + 100) != *(uint *)(param_2 + 0x5c))) {
            cVar13 = FUN_144b62480(param_2,1,1);
            if (cVar13 == '\0') goto LAB_145215638;
            uVar5 = *(uint *)(param_2 + 0x5c);
            lVar14 = *(longlong *)(param_2 + 0x70);
            uVar15 = *(uint *)(param_2 + 100);
            puVar1 = (undefined4 *)(lVar14 + (ulonglong)uVar5 * 0x14);
            uVar6 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            lVar7 = *(longlong *)(param_2 + 0x78);
            puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar15 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar2[2] = uVar9;
            puVar2[3] = uVar10;
            *(undefined4 *)(lVar7 + (ulonglong)uVar15 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar14 + 0x10 + (ulonglong)uVar5 * 0x14);
          }
          *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
        }
        *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
      }
LAB_145215638:
    } while (*(uint *)(param_2 + 0x5c) < uVar4);
  }
  FUN_144b61af0(param_2);
  if ((*(int *)(param_1 + 4) == 0x54686169) && (*(char *)(param_1 + 0x30) == '\0')) {
    FUN_145215780(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 145215690 FUN_145215690 body=225 status=ok
// SIG undefined FUN_145215690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_145215690(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 local_res10 [8];
  
  piVar2 = (int *)0x0;
  if (param_2 != 0) {
    if (param_2 == 1) {
      piVar2 = &DAT_149c5b970;
    }
    else if (param_2 == 2) {
      piVar2 = &DAT_149c5ba30;
    }
    else if (param_2 == 3) {
      piVar2 = &DAT_149c5b9e0;
    }
    else if (param_2 == 4) {
      piVar2 = &DAT_149c5bad0;
    }
    else if (_DAT_00000000 == 0) {
      return param_1;
    }
    iVar1 = *piVar2;
    while (iVar1 != param_1) {
      iVar1 = piVar2[3];
      piVar2 = piVar2 + 3;
      if (iVar1 == 0) {
        return param_1;
      }
    }
    iVar1 = FUN_144b63980(param_3,piVar2[1],0,local_res10);
    if (iVar1 != 0) {
      return piVar2[1];
    }
    iVar1 = FUN_144b63980(param_3,piVar2[2],0,local_res10);
    if (iVar1 != 0) {
      return piVar2[2];
    }
  }
  return param_1;
}



// FUNCTION 145215780 FUN_145215780 body=489 status=ok
// SIG undefined FUN_145215780(void)

void FUN_145215780(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  
  uVar5 = 0;
  uVar1 = *(uint *)(param_2 + 0x60);
  piVar2 = *(int **)(param_2 + 0x70);
  uVar8 = uVar5;
  piVar10 = piVar2;
  iVar6 = DAT_14c7315e8;
  iVar11 = DAT_14c731600;
  if (uVar1 != 0) {
    do {
      lVar9 = 0;
      iVar3 = *piVar10;
      if ((((iVar3 == 0xe31) || (iVar3 - 0xe34U < 4)) || (iVar3 == 0xe47)) || (iVar3 - 0xe4dU < 2))
      {
LAB_1452158ae:
        lVar4 = (lVar9 + (longlong)iVar6 * 3) * 8;
        iVar3 = *(int *)(&UNK_149c5b8c0 + lVar4);
        iVar6 = *(int *)(&UNK_149c5b8c4 + lVar4);
        lVar9 = lVar9 + (longlong)iVar11 * 3;
        iVar11 = *(int *)(&UNK_149c5b924 + lVar9 * 8);
        if (iVar3 == 0) {
          iVar3 = *(int *)(&UNK_149c5b920 + lVar9 * 8);
        }
        if (1 < (uint)((int)uVar8 - (int)uVar5)) {
          FUN_144b620d0(param_2,uVar5,uVar8);
        }
        if (iVar3 == 4) {
          iVar3 = FUN_145215690(piVar2[uVar5 * 5],4,param_3);
          piVar2[uVar5 * 5] = iVar3;
        }
        else {
          iVar3 = FUN_145215690(*piVar10,iVar3,param_3);
          *piVar10 = iVar3;
        }
      }
      else {
        if (iVar3 - 0xe38U < 3) {
          lVar9 = 1;
          goto LAB_1452158ae;
        }
        if (iVar3 - 0xe48U < 5) {
          lVar9 = 2;
          goto LAB_1452158ae;
        }
        if (((iVar3 - 0xe1bU & 0xfffffff9) == 0) && (iVar3 != 0xe21)) {
          lVar4 = 1;
        }
        else if ((iVar3 == 0xe0d) || (iVar3 == 0xe10)) {
          lVar4 = 2;
        }
        else if (iVar3 - 0xe0eU < 2) {
          lVar4 = 3;
        }
        else {
          lVar4 = 4;
          if (iVar3 - 0xe01U < 0x2e) {
            lVar4 = lVar9;
          }
        }
        iVar6 = (&DAT_14c7315d8)[lVar4];
        iVar11 = (&DAT_14c7315f0)[lVar4];
        uVar5 = uVar8;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      piVar10 = piVar10 + 5;
    } while (uVar7 < uVar1);
  }
  return;
}



// FUNCTION 145215970 FUN_145215970 body=86 status=ok
// SIG undefined FUN_145215970(void)

void FUN_145215970(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 8);
  if (lVar1 != 0) {
    FUN_14520bef0(lVar1,param_2,*(undefined4 *)(param_1 + 4));
  }
  puVar3 = *(undefined4 **)(param_2 + 0x70);
  if (*(uint *)(param_2 + 0x60) != 0) {
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x60);
    do {
      uVar2 = FUN_145489f90(*puVar3);
      *(undefined1 *)((longlong)puVar3 + 0x12) = uVar2;
      puVar3 = puVar3 + 5;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 1452159e0 FUN_1452159e0 body=174 status=ok
// SIG undefined FUN_1452159e0(void)

bool FUN_1452159e0(longlong param_1,ulonglong param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = (**(code **)(lVar1 + 0x28))(lVar1,param_2,*(undefined8 *)(lVar1 + 0x68));
  uVar4 = 0;
  iVar5 = 0;
  if (uVar3 < 0x20) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    bVar2 = (**(code **)(lVar1 + 0x28))(lVar1,param_2 & 0xffffffff,*(undefined8 *)(lVar1 + 0x68));
    uVar4 = 1 << (bVar2 & 0x1f);
  }
  if ((uVar4 & 0x1c00) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    *param_4 = 0;
    if (((int)param_2 != 0) && (param_3 != 0)) {
      iVar5 = (**(code **)(lVar1 + 0x40))
                        (lVar1,param_2 & 0xffffffff,param_3,param_4,*(undefined8 *)(lVar1 + 0x80));
    }
    bVar6 = iVar5 != 0;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}



// FUNCTION 145215a90 FUN_145215a90 body=514 status=ok
// SIG undefined FUN_145215a90(void)

void FUN_145215a90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  param_1 = param_1 + 0x28;
  FUN_145208de0(param_1,0,FUN_145215de0);
  FUN_145207a70(param_1,0x6c6f636c,1);
  FUN_145207a70(param_1,0x63636d70,1);
  FUN_145207a70(param_1,0x6e756b74,1);
  FUN_145207a70(param_1,0x616b686e,9);
  FUN_145208de0(param_1,0,&LAB_145215ea0);
  FUN_145207a70(param_1,0x72706866,8);
  FUN_145208de0(param_1,0,FUN_145215ed0);
  FUN_145208de0(param_1,0,&LAB_145215ea0);
  FUN_145207a70(param_1,0x70726566,9);
  FUN_145208de0(param_1,0,FUN_145215fb0);
  lVar2 = 7;
  pcVar3 = "frkrfvbafwlbflahftsputavtcjc";
  lVar1 = 7;
  do {
    FUN_145207a70(param_1,*(undefined4 *)pcVar3,9);
    pcVar3 = pcVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_145208de0(param_1,0,FUN_145216080);
  FUN_145208de0(param_1,0,&LAB_145216120);
  pcVar3 = "lositiniidemanif2dem2nif3nif";
  do {
    FUN_145207a70(param_1,*(undefined4 *)pcVar3,0,1);
    pcVar3 = pcVar3 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_145208de0(param_1,0,0);
  pcVar3 = "svbaswlbnlahserpstsp";
  lVar1 = 5;
  do {
    FUN_145207a70(param_1,*(undefined4 *)pcVar3,9);
    pcVar3 = pcVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  puVar4 = &DAT_149c5bbc0;
  lVar1 = 3;
  do {
    FUN_145207a70(param_1,*puVar4,1);
    puVar4 = puVar4 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 145215ca0 FUN_145215ca0 body=263 status=ok
// SIG undefined FUN_145215ca0(void)

undefined4 * FUN_145215ca0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar3 = (undefined4 *)FUN_142864336(1);
  if (puVar3 != (undefined4 *)0x0) {
    iVar6 = 0;
    uVar7 = 0;
    iVar5 = *(int *)(param_1 + 0x38) + -1;
    if (-1 < iVar5) {
      do {
        uVar2 = (uint)(iVar5 + iVar6) >> 1;
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2 * 0x24);
        if (uVar1 < 0x72706867) {
          if (0x72706865 < uVar1) {
            lVar4 = *(longlong *)(param_1 + 0x40) + (ulonglong)uVar2 * 0x24;
            if (lVar4 != 0) {
              uVar7 = *(undefined4 *)(lVar4 + 0x1c);
            }
            break;
          }
          iVar6 = uVar2 + 1;
        }
        else {
          iVar5 = uVar2 - 1;
        }
      } while (iVar6 <= iVar5);
    }
    *puVar3 = uVar7;
    iVar5 = *(int *)(param_1 + 4);
    if (iVar5 < 0x4d6f6e68) {
      if (((iVar5 != 0x4d6f6e67) && (iVar5 != 0x41646c6d)) &&
         ((iVar5 != 0x41726162 && ((iVar5 != 0x4d616e64 && (iVar5 != 0x4d616e69)))))) {
        return puVar3;
      }
    }
    else if ((((iVar5 != 0x4e6b6f6f) && (iVar5 != 0x50686167)) && (iVar5 != 0x50686c70)) &&
            (iVar5 != 0x53797263)) {
      return puVar3;
    }
    lVar4 = FUN_14520ba70(param_1);
    *(longlong *)(puVar3 + 2) = lVar4;
    if (lVar4 != 0) {
      return puVar3;
    }
    thunk_FUN_1400020a8(puVar3);
  }
  return (undefined4 *)0x0;
}



// FUNCTION 145215db0 FUN_145215db0 body=36 status=ok
// SIG undefined FUN_145215db0(void)

void FUN_145215db0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14520bc20();
  }
  thunk_FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145215de0 FUN_145215de0 body=192 status=ok
// SIG undefined FUN_145215de0(void)

void FUN_145215de0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  FUN_145216140(param_3);
  uVar1 = *(uint *)(param_3 + 0x60);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
             *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar3;
        if (1 < (uint)uVar4 - (int)uVar5) {
          FUN_144b620d0(param_3,uVar5,uVar4);
        }
        uVar3 = uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if (*(uint *)(param_3 + 0x60) <= uVar2) break;
        } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar4 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
        uVar5 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
  }
  FUN_145216720(param_1,param_3);
  FUN_145216820(param_1,param_3);
  return;
}



// FUNCTION 145215ed0 FUN_145215ed0 body=217 status=ok
// SIG undefined FUN_145215ed0(void)

void FUN_145215ed0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar5;
  ulonglong uVar9;
  
  uVar1 = **(uint **)(param_1 + 0x98);
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_3 + 0x60);
    lVar3 = *(longlong *)(param_3 + 0x70);
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if (uVar2 <= uVar4) break;
      } while (*(char *)(lVar3 + 0xf) == *(char *)(lVar3 + 0xf + uVar5 * 0x14));
      uVar9 = 0;
      if (uVar2 != 0) {
        do {
          uVar6 = uVar5;
          uVar4 = (uint)uVar6;
          if ((uint)uVar9 < uVar4) {
            pbVar7 = (byte *)(lVar3 + uVar9 * 0x14 + 0xc);
            do {
              if ((*(uint *)(pbVar7 + -8) & uVar1) == 0) break;
              if ((*pbVar7 >> 4 & 1) != 0) {
                *(undefined1 *)(lVar3 + 0x12 + uVar9 * 0x14) = 0x12;
                break;
              }
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
              pbVar7 = pbVar7 + 0x14;
            } while (uVar8 < uVar4);
          }
          uVar5 = uVar6;
          do {
            uVar8 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar8;
            if (*(uint *)(param_3 + 0x60) <= uVar8) break;
          } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar6 * 0x14) ==
                   *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar5 * 0x14));
          uVar9 = uVar6;
        } while (uVar4 < uVar2);
      }
    }
  }
  return;
}



// FUNCTION 145215fb0 FUN_145215fb0 body=199 status=ok
// SIG undefined FUN_145215fb0(void)

void FUN_145215fb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar4;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_3 + 0x60);
  lVar2 = *(longlong *)(param_3 + 0x70);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      if (uVar1 <= uVar3) break;
    } while (*(char *)(lVar2 + 0xf) == *(char *)(lVar2 + 0xf + uVar4 * 0x14));
    uVar8 = 0;
    if (uVar1 != 0) {
      do {
        uVar5 = uVar4;
        uVar3 = (uint)uVar5;
        if ((uint)uVar8 < uVar3) {
          pbVar6 = (byte *)(lVar2 + uVar8 * 0x14 + 0xc);
          do {
            if ((*pbVar6 >> 4 & 1) != 0) {
              *(undefined1 *)(lVar2 + 0x12 + uVar8 * 0x14) = 0x16;
              break;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            pbVar6 = pbVar6 + 0x14;
          } while (uVar7 < uVar3);
        }
        uVar4 = uVar5;
        do {
          uVar7 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar7;
          if (*(uint *)(param_3 + 0x60) <= uVar7) break;
        } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar5 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar4 * 0x14));
        uVar8 = uVar5;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 145216080 FUN_145216080 body=152 status=ok
// SIG undefined FUN_145216080(void)

void FUN_145216080(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  FUN_145216d40();
  uVar1 = *(uint *)(param_3 + 0x60);
  uVar5 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar5;
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
             *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
    if (uVar1 != 0) {
      do {
        uVar4 = uVar3;
        FUN_145216af0(param_3,uVar5,uVar4);
        uVar3 = uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if (*(uint *)(param_3 + 0x60) <= uVar2) break;
        } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar4 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
        uVar5 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 145216140 FUN_145216140 body=1419 status=ok
// SIG undefined FUN_145216140(void)

void FUN_145216140(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  lVar3 = *(longlong *)(param_1 + 0x70);
  uVar10 = 0;
  uVar14 = 0;
  iVar17 = 0;
  uVar12 = 0;
  lVar16 = 4;
  iVar8 = 1;
  uVar15 = 0;
  if (uVar2 != 0) goto LAB_145216643;
LAB_14521619e:
  if (*(short *)(&DAT_149c5c4e0 + (longlong)(int)lVar16 * 2) < 1) {
    return;
  }
  iVar4 = *(short *)(&DAT_149c5c4e0 + (longlong)(int)lVar16 * 2) + -1;
  do {
    uVar9 = (uint)uVar12;
    lVar16 = (longlong)(char)(&DAT_149c5c3c0)[iVar4];
    if ((&DAT_149c5c410)[iVar4] == '\0') goto switchD_1452161ef_caseD_5;
    cVar13 = (char)iVar8;
    uVar15 = uVar9;
    switch((&DAT_149c5c410)[iVar4]) {
    case 1:
      uVar15 = uVar10 - 1;
      if (uVar14 < uVar10) {
        uVar12 = (ulonglong)(uVar10 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 2;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 2:
      if (iVar17 == 7) {
        uVar15 = uVar10 - 1;
        if (uVar14 < uVar10) {
          uVar12 = (ulonglong)(uVar10 - uVar14);
          pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
          do {
            *pbVar6 = cVar13 << 4 | 6;
            pbVar6 = pbVar6 + 0x14;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      else {
        if (iVar17 != 8) goto switchD_1452161ef_caseD_5;
        uVar15 = uVar10 - 1;
        if (uVar14 < uVar10) {
          uVar12 = (ulonglong)(uVar10 - uVar14);
          pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
          do {
            *pbVar6 = cVar13 << 4 | 7;
            pbVar6 = pbVar6 + 0x14;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      break;
    case 3:
      iVar17 = 7;
      goto switchD_1452161ef_caseD_7;
    case 4:
      uVar15 = uVar10 - 1;
      if (uVar14 < uVar10) {
        uVar12 = (ulonglong)(uVar10 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 6;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    default:
      goto switchD_1452161ef_caseD_5;
    case 7:
      goto switchD_1452161ef_caseD_7;
    case 8:
      uVar10 = uVar9 + 1;
      if (uVar14 < uVar10) {
        uVar12 = (ulonglong)(uVar10 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 7;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 9:
      uVar10 = uVar9 + 1;
      if (uVar14 < uVar10) {
        uVar12 = (ulonglong)(uVar10 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 6;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 10:
      iVar17 = 8;
      goto switchD_1452161ef_caseD_7;
    case 0xb:
      uVar10 = uVar9;
      uVar15 = uVar9 - 1;
      if (uVar14 < uVar9) {
        pcVar5 = (char *)((ulonglong)uVar14 * 0x14 + 0xf + lVar3);
        uVar12 = (ulonglong)(uVar9 - uVar14);
        do {
          *pcVar5 = cVar13 << 4;
          pcVar5 = pcVar5 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 0xc:
      uVar10 = uVar9 + 1;
      if (uVar14 < uVar10) {
        uVar12 = (ulonglong)(uVar10 - uVar14);
        pcVar5 = (char *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pcVar5 = cVar13 << 4;
          pcVar5 = pcVar5 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 0xd:
      uVar10 = uVar9;
      uVar15 = uVar9 - 1;
      if (uVar14 < uVar9) {
        uVar12 = (ulonglong)(uVar9 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 2;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 0xe:
      uVar10 = uVar9 + 1;
      if (uVar14 < uVar10) {
        uVar12 = (ulonglong)(uVar10 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 2;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 0xf:
      uVar10 = uVar9;
      uVar15 = uVar9 - 1;
      if (uVar14 < uVar9) {
        uVar12 = (ulonglong)(uVar9 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 1;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 0x10:
      uVar10 = uVar9;
      uVar15 = uVar9 - 1;
      if (uVar14 < uVar9) {
        uVar12 = (ulonglong)(uVar9 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 4;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 0x11:
      uVar10 = uVar9;
      uVar15 = uVar9 - 1;
      if (uVar14 < uVar9) {
        uVar12 = (ulonglong)(uVar9 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 3;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 0x12:
      uVar10 = uVar9;
      uVar15 = uVar9 - 1;
      if (uVar14 < uVar9) {
        uVar12 = (ulonglong)(uVar9 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 6;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 0x13:
      uVar10 = uVar9;
      uVar15 = uVar9 - 1;
      if (uVar14 < uVar9) {
        uVar12 = (ulonglong)(uVar9 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 7;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      break;
    case 0x14:
      uVar10 = uVar9;
      uVar15 = uVar9 - 1;
      if (uVar14 < uVar9) {
        uVar12 = (ulonglong)(uVar9 - uVar14);
        pbVar6 = (byte *)(lVar3 + 0xf + (ulonglong)uVar14 * 0x14);
        do {
          *pbVar6 = cVar13 << 4 | 5;
          pbVar6 = pbVar6 + 0x14;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    uVar9 = uVar15;
    iVar8 = iVar8 + 1;
    if (iVar8 == 0x10) {
      iVar8 = 1;
    }
switchD_1452161ef_caseD_5:
    uVar15 = 0;
    if ((&DAT_149c5c460)[lVar16] != '\x05') {
      uVar15 = uVar14;
    }
    uVar14 = uVar15;
    uVar12 = (ulonglong)(uVar9 + 1);
    uVar15 = uVar14;
    if (uVar9 + 1 == uVar2) goto LAB_14521619e;
LAB_145216643:
    lVar7 = (longlong)(int)lVar16;
    iVar4 = (int)lVar16 * 2;
    uVar14 = uVar15;
    if ((&DAT_149c5c4a0)[lVar7] == '\x06') {
      uVar14 = (uint)uVar12;
    }
    iVar11 = (int)(char)(&DAT_149c5bc48)[lVar7];
    if ('\0' < (char)(&DAT_149c5bc48)[lVar7]) {
      bVar1 = *(byte *)(lVar3 + 0x12 + uVar12 * 0x14);
      if (((byte)(&DAT_149c5bbd0)[iVar4] <= bVar1) && (bVar1 <= (byte)(&DAT_149c5bbd1)[iVar4])) {
        iVar11 = (uint)bVar1 - (uint)(byte)(&DAT_149c5bbd0)[iVar4];
      }
    }
    iVar4 = (int)(char)(&DAT_149c5bd10)
                       [(longlong)iVar11 + (longlong)*(short *)(&DAT_149c5bc90 + lVar7 * 2)];
  } while( true );
switchD_1452161ef_caseD_7:
  uVar10 = uVar9 + 1;
  goto switchD_1452161ef_caseD_5;
}



// FUNCTION 145216720 FUN_145216720 body=254 status=ok
// SIG undefined FUN_145216720(void)

void FUN_145216720(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar5;
  
  uVar1 = **(uint **)(param_1 + 0x98);
  if (uVar1 != 0) {
    uVar9 = 0;
    lVar3 = *(longlong *)(param_2 + 0x70);
    uVar2 = *(uint *)(param_2 + 0x60);
    if (uVar2 != 0) {
      uVar5 = uVar9;
      do {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if (uVar2 <= uVar4) break;
      } while (*(char *)(lVar3 + 0xf) == *(char *)(lVar3 + 0xf + uVar5 * 0x14));
      if (uVar2 != 0) {
        do {
          uVar6 = uVar5;
          uVar4 = (uint)uVar9;
          if (*(char *)(lVar3 + 0x12 + uVar9 * 0x14) == '\x12') {
            uVar7 = 1;
          }
          else {
            uVar7 = (uint)uVar6 - uVar4;
            if (3 < uVar7) {
              uVar7 = 3;
            }
          }
          if (uVar4 < uVar7 + uVar4) {
            puVar8 = (uint *)(lVar3 + uVar9 * 0x14 + 4);
            uVar9 = (ulonglong)((uVar7 + uVar4) - uVar4);
            do {
              *puVar8 = *puVar8 | uVar1;
              puVar8 = puVar8 + 5;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uVar5 = uVar6;
          do {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            if (*(uint *)(param_2 + 0x60) <= uVar4) break;
          } while (*(char *)(*(longlong *)(param_2 + 0x70) + 0xf + uVar6 * 0x14) ==
                   *(char *)(*(longlong *)(param_2 + 0x70) + 0xf + uVar5 * 0x14));
          uVar9 = uVar6;
        } while ((uint)uVar6 < uVar2);
      }
    }
  }
  return;
}



// FUNCTION 145216820 FUN_145216820 body=666 status=ok
// SIG undefined FUN_145216820(void)

void FUN_145216820(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong local_48;
  uint auStack_40 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&local_48;
  if (*(longlong *)(*(longlong *)(param_1 + 0x98) + 8) == 0) {
    uVar8 = 0;
    uVar12 = 0;
    lVar4 = *(longlong *)(param_1 + 0x40);
    lVar15 = 0;
    lVar13 = 4;
    uVar2 = *(uint *)(param_1 + 0x34);
    iVar19 = *(int *)(param_1 + 0x38) + -1;
    do {
      iVar16 = 0;
      iVar10 = iVar19;
      if (-1 < iVar19) {
        do {
          uVar6 = (uint)(iVar10 + iVar16) >> 1;
          uVar7 = *(uint *)(lVar4 + (ulonglong)uVar6 * 0x24);
          if (*(uint *)("lositiniidemanif2dem2nif3nif" + lVar15) < uVar7) {
            iVar10 = uVar6 - 1;
          }
          else {
            if (*(uint *)("lositiniidemanif2dem2nif3nif" + lVar15) <= uVar7) {
              lVar1 = lVar4 + (ulonglong)uVar6 * 0x24;
              if (lVar1 != 0) {
                uVar7 = *(uint *)(lVar1 + 0x1c);
                goto LAB_1452168e6;
              }
              break;
            }
            iVar16 = uVar6 + 1;
          }
        } while (iVar16 <= iVar10);
      }
      uVar7 = 0;
LAB_1452168e6:
      uVar6 = 0;
      if (uVar7 != uVar2) {
        uVar6 = uVar7;
      }
      *(uint *)((longlong)auStack_40 + lVar15) = uVar6;
      uVar12 = uVar12 | uVar6;
      lVar15 = lVar15 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if (uVar12 != 0) {
      lVar4 = *(longlong *)(param_2 + 0x70);
      uVar18 = 4;
      uVar2 = *(uint *)(param_2 + 0x60);
      uVar14 = 0;
      if (uVar2 != 0) {
        uVar17 = 0;
        do {
          uVar7 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar7;
          if (uVar2 <= uVar7) break;
        } while (*(char *)(lVar4 + 0xf) == *(char *)(lVar4 + 0xf + uVar17 * 0x14));
        if (uVar2 != 0) {
          do {
            uVar9 = uVar17;
            uVar6 = (uint)uVar14;
            uVar7 = (uint)uVar9;
            switch(*(byte *)(lVar4 + 0xf + uVar14 * 0x14) & 0xf) {
            case 0:
            case 5:
            case 7:
              uVar18 = 4;
              break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 6:
              iVar19 = (int)uVar18;
              if ((iVar19 == 3) || (iVar19 == 0)) {
                bVar5 = 1;
                if (uVar8 < uVar6) {
                  lVar13 = 4;
                  if (iVar19 == 3) {
                    lVar13 = 8;
                  }
                  uVar3 = *(uint *)((longlong)auStack_40 + lVar13);
                  uVar18 = (ulonglong)(uVar6 - uVar8);
                  puVar11 = (uint *)(lVar4 + (ulonglong)uVar8 * 0x14 + 4);
                  do {
                    *puVar11 = *puVar11 & ~uVar12 | uVar3;
                    uVar18 = uVar18 - 1;
                    puVar11 = puVar11 + 5;
                  } while (uVar18 != 0);
                }
              }
              else {
                bVar5 = 0;
              }
              uVar18 = (ulonglong)(-(uint)bVar5 & 3);
              if (uVar6 < uVar7) {
                uVar8 = auStack_40[uVar18];
                uVar17 = (ulonglong)(uVar7 - uVar6);
                puVar11 = (uint *)(lVar4 + uVar14 * 0x14 + 4);
                do {
                  *puVar11 = *puVar11 & ~uVar12 | uVar8;
                  uVar17 = uVar17 - 1;
                  puVar11 = puVar11 + 5;
                } while (uVar17 != 0);
              }
            }
            uVar17 = uVar9;
            do {
              uVar8 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar8;
              if (*(uint *)(param_2 + 0x60) <= uVar8) break;
            } while (*(char *)(*(longlong *)(param_2 + 0x70) + 0xf + uVar9 * 0x14) ==
                     *(char *)(*(longlong *)(param_2 + 0x70) + 0xf + uVar17 * 0x14));
            uVar14 = uVar9;
            uVar8 = uVar6;
          } while (uVar7 < uVar2);
        }
      }
    }
  }
  local_48 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)&local_48);
}



// FUNCTION 145216af0 FUN_145216af0 body=585 status=ok
// SIG undefined FUN_145216af0(void)

void * FUN_145216af0(longlong param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  void *pvVar12;
  void *pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  void *pvVar18;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  uVar14 = (ulonglong)param_2;
  uVar10 = *(byte *)(uVar14 * 0x14 + 0xf + lVar4) & 0xf;
  pvVar12 = (void *)(ulonglong)uVar10;
  if ((1 << (sbyte)uVar10 & 0x46U) != 0) {
    puVar1 = (undefined4 *)(uVar14 * 0x14 + lVar4);
    pbVar17 = (byte *)((longlong)puVar1 + 0x12);
    uVar15 = uVar14;
    if (((*(char *)((longlong)puVar1 + 0x12) == '\x12') &&
        (pvVar12 = (void *)(ulonglong)(param_3 - param_2), 1 < param_3 - param_2)) &&
       (pvVar18 = (void *)(ulonglong)(param_2 + 1), param_2 + 1 < param_3)) {
      pbVar16 = (byte *)(lVar4 + 0x12 + (longlong)pvVar18 * 0x14);
      pvVar13 = pvVar18;
      do {
        bVar2 = *pbVar16;
        if (bVar2 < 0x40) {
          uVar11 = 1L << (bVar2 & 0x3f);
        }
        else {
          uVar11 = 0;
        }
        uVar10 = (uint)pvVar13;
        if (((uVar11 & 0xee7fc00100) != 0) ||
           (((bVar2 - 0xc & 0xdf) == 0 && ((pbVar16[-6] >> 5 & 1) == 0)))) {
          bVar9 = true;
LAB_145216bdc:
          pvVar12 = (void *)(ulonglong)(uVar10 - 1);
          if (!bVar9) {
            pvVar12 = pvVar13;
          }
          if (1 < ((int)pvVar12 + 1) - param_2) {
            FUN_144b61d00(param_1,uVar14);
          }
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          uVar3 = puVar1[4];
          memmove(puVar1,(void *)(lVar4 + (longlong)pvVar18 * 0x14),
                  (ulonglong)((int)pvVar12 - param_2) * 0x14);
          puVar1 = (undefined4 *)(lVar4 + (longlong)pvVar12 * 0x14);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          puVar1[2] = uVar7;
          puVar1[3] = uVar8;
          *(undefined4 *)(lVar4 + 0x10 + (longlong)pvVar12 * 0x14) = uVar3;
          break;
        }
        bVar9 = false;
        pvVar12 = (void *)(ulonglong)(param_3 - 1);
        if (uVar10 == param_3 - 1) goto LAB_145216bdc;
        pvVar13 = (void *)(ulonglong)(uVar10 + 1);
        pbVar16 = pbVar16 + 0x14;
      } while (uVar10 + 1 < param_3);
    }
    while (param_2 < param_3) {
      bVar2 = *pbVar17;
      if (bVar2 < 0x20) {
        uVar10 = 1 << (bVar2 & 0x1f);
      }
      else {
        uVar10 = 0;
      }
      param_2 = (uint)uVar14;
      if (((bVar2 - 0xc & 0xdf) == 0) &&
         (pvVar12 = (void *)(ulonglong)(pbVar17[-6] >> 5), (pbVar17[-6] >> 5 & 1) == 0)) {
        uVar15 = (ulonglong)(param_2 + 1);
      }
      else if ((uVar10 & 0xc00000) != 0) {
        bVar2 = pbVar17[-4];
        pvVar12 = (void *)(ulonglong)bVar2;
        if ((((bVar2 & 0x10) != 0) ||
            (pvVar12 = (void *)(ulonglong)(bVar2 & 0xf), (bVar2 & 0xf) == 0)) &&
           (uVar10 = (uint)uVar15, uVar10 < param_2)) {
          if (1 < (param_2 - uVar10) + 1) {
            FUN_144b61d00(param_1,uVar15,param_2 + 1);
          }
          uVar5 = *(undefined4 *)(pbVar17 + -0x12);
          uVar6 = *(undefined4 *)(pbVar17 + -0xe);
          uVar7 = *(undefined4 *)(pbVar17 + -10);
          uVar8 = *(undefined4 *)(pbVar17 + -6);
          uVar3 = *(undefined4 *)(pbVar17 + -2);
          puVar1 = (undefined4 *)(lVar4 + uVar15 * 0x14);
          pvVar12 = memmove((void *)(lVar4 + (ulonglong)(uVar10 + 1) * 0x14),puVar1,
                            (ulonglong)(param_2 - uVar10) * 0x14);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          puVar1[2] = uVar7;
          puVar1[3] = uVar8;
          puVar1[4] = uVar3;
        }
      }
      param_2 = param_2 + 1;
      uVar14 = (ulonglong)param_2;
      pbVar17 = pbVar17 + 0x14;
    }
  }
  return pvVar12;
}



// FUNCTION 145216d40 FUN_145216d40 body=632 status=ok
// SIG undefined FUN_145216d40(void)

void FUN_145216d40(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  byte bVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_3 + 0x18) & 0x10) == 0) {
    bVar16 = 0;
    uVar15 = 0;
    if (*(uint *)(param_3 + 0x60) != 0) {
      pbVar14 = (byte *)(*(longlong *)(param_3 + 0x70) + 0xf);
      do {
        if ((*pbVar14 & 0xf) == 6) {
          uStack_3c = 0;
          uStack_34 = 0;
          local_40 = 0;
          local_68 = *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20);
          iVar13 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x130))
                             (param_2,*(undefined8 *)(param_2 + 0x48),0x25cc,&local_40);
          if (iVar13 != 0) {
            uVar11 = FUN_145489f90(0x25cc);
            uStack_34._0_7_ = CONCAT16(uVar11,(undefined6)uStack_34);
            FUN_144b61b50(param_3);
            *(undefined4 *)(param_3 + 0x5c) = 0;
            if (*(int *)(param_3 + 0x60) != 0) goto LAB_145216e13;
            goto LAB_145216f9b;
          }
          break;
        }
        uVar15 = uVar15 + 1;
        pbVar14 = pbVar14 + 0x14;
      } while (uVar15 < *(uint *)(param_3 + 0x60));
    }
  }
  goto LAB_145216fab;
LAB_145216e13:
  do {
    if (*(char *)(param_3 + 0x58) == '\0') break;
    uVar15 = *(uint *)(param_3 + 0x5c);
    lVar6 = *(longlong *)(param_3 + 0x70);
    bVar4 = *(byte *)(lVar6 + 0xf + (ulonglong)uVar15 * 0x14);
    lVar1 = lVar6 + (ulonglong)uVar15 * 0x14;
    if ((bVar16 == bVar4) || ((bVar4 & 0xf) != 6)) {
      if (*(char *)(param_3 + 0x59) != '\0') {
        if ((*(longlong *)(param_3 + 0x78) != lVar6) || (*(uint *)(param_3 + 100) != uVar15)) {
          cVar12 = FUN_144b62480(param_3,1,1);
          if (cVar12 == '\0') goto LAB_145216f85;
          uVar15 = *(uint *)(param_3 + 0x5c);
          lVar1 = *(longlong *)(param_3 + 0x70);
          uVar5 = *(uint *)(param_3 + 100);
          puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar15 * 0x14);
          uVar10 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          lVar6 = *(longlong *)(param_3 + 0x78);
          puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
               *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x14);
        }
        *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
      }
      *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
    }
    else {
      uStack_50 = *(undefined4 *)(lVar1 + 8);
      uVar10 = uStack_34._4_4_;
      local_58 = local_40;
      uStack_54 = *(undefined4 *)(lVar1 + 4);
      uStack_4c = CONCAT13(bVar4,(int3)uStack_34);
      if (uVar15 < *(uint *)(param_3 + 0x60)) {
        while (*(char *)(param_3 + 0x58) != '\0') {
          uVar15 = *(uint *)(param_3 + 0x5c);
          lVar1 = *(longlong *)(param_3 + 0x70);
          if ((bVar4 != *(byte *)(lVar1 + 0xf + (ulonglong)uVar15 * 0x14)) ||
             (*(char *)(lVar1 + (ulonglong)uVar15 * 0x14 + 0x12) != '\x12')) break;
          if (*(char *)(param_3 + 0x59) == '\0') {
LAB_145216ef0:
            *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
          }
          else {
            if ((*(longlong *)(param_3 + 0x78) == lVar1) && (*(uint *)(param_3 + 100) == uVar15)) {
LAB_145216eed:
              *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
              goto LAB_145216ef0;
            }
            cVar12 = FUN_144b62480(param_3,1,1);
            if (cVar12 != '\0') {
              uVar15 = *(uint *)(param_3 + 0x5c);
              lVar1 = *(longlong *)(param_3 + 0x70);
              uVar5 = *(uint *)(param_3 + 100);
              puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar15 * 0x14);
              uVar7 = puVar2[1];
              uVar8 = puVar2[2];
              uVar9 = puVar2[3];
              lVar6 = *(longlong *)(param_3 + 0x78);
              puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar7;
              puVar3[2] = uVar8;
              puVar3[3] = uVar9;
              *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x14);
              goto LAB_145216eed;
            }
          }
          if (*(uint *)(param_3 + 0x60) <= *(uint *)(param_3 + 0x5c)) break;
        }
      }
      cVar12 = FUN_144b62480(param_3,0,1);
      bVar16 = bVar4;
      if (cVar12 != '\0') {
        uVar15 = *(uint *)(param_3 + 100);
        lVar1 = *(longlong *)(param_3 + 0x78);
        puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar15 * 0x14);
        *puVar2 = local_58;
        puVar2[1] = uStack_54;
        puVar2[2] = uStack_50;
        puVar2[3] = uStack_4c;
        *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x14) = uVar10;
        *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
      }
    }
LAB_145216f85:
  } while (*(uint *)(param_3 + 0x5c) < *(uint *)(param_3 + 0x60));
LAB_145216f9b:
  FUN_144b61af0(param_3);
LAB_145216fab:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 145216fd0 FUN_145216fd0 body=729 status=ok
// SIG undefined FUN_145216fd0(void)

void FUN_145216fd0(undefined8 *param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  undefined1 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined1 local_d0 [8];
  undefined8 *local_c8;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = param_1;
  FUN_144e497d0();
  *param_1 = Imf_3_2::B44Compressor::vftable;
  *(undefined1 *)(param_1 + 2) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  *(int *)(param_1 + 3) = (int)param_4;
  uVar12 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar11 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar5 = FUN_144b67b80(param_2);
  param_1[7] = uVar5;
  param_1[8] = 0;
  uVar6 = FUN_145218cc0(param_3 >> 1,param_4);
  if (0x7fffffffffffffff < uVar6) {
    FUN_144e47140(local_b8,"Integer multiplication overflow.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d5240);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  uVar5 = SUB168(ZEXT816(2) * auVar1,0);
  if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  uVar5 = FUN_144a7d36f(uVar5);
  param_1[4] = uVar5;
  uVar5 = FUN_144b67b80(param_1[1]);
  FUN_144b65f20(uVar5,&local_d8);
  plVar7 = (longlong *)FUN_144b65f40(uVar5,local_d0);
  uVar6 = uVar12;
  if (local_d8 != *plVar7) {
    do {
      *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
      uVar11 = (uint)uVar6 + 1;
      if (*(int *)(local_d8 + 0x11c) != 1) {
        uVar11 = (uint)uVar6;
      }
      FUN_144b663b0(&local_d8);
      plVar7 = (longlong *)FUN_144b65f40(uVar5,local_d0);
      uVar6 = (ulonglong)uVar11;
    } while (local_d8 != *plVar7);
  }
  uVar10 = (ulonglong)((longlong)(int)(uVar11 * 0xc) * (param_4 + 3)) >> 2;
  uVar6 = FUN_145218cc0(param_3,param_4);
  if (~uVar10 < uVar6) {
    FUN_144e47140(local_b8,"Integer addition overflow.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d5240);
  }
  uVar8 = FUN_144a7d36f(uVar10 + uVar6);
  param_1[5] = uVar8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)*(int *)(param_1 + 6);
  uVar8 = SUB168(ZEXT816(0x28) * auVar2,0);
  if (SUB168(ZEXT816(0x28) * auVar2,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  uVar8 = FUN_144a7d36f(uVar8);
  param_1[8] = uVar8;
  FUN_144b65f20(uVar5,&local_d8);
  plVar7 = (longlong *)FUN_144b65f40(uVar5,local_d0);
  if (local_d8 != *plVar7) {
    do {
      *(undefined4 *)(uVar12 + 0x18 + param_1[8]) = *(undefined4 *)(local_d8 + 0x124);
      *(undefined4 *)(uVar12 + 0x1c + param_1[8]) = *(undefined4 *)(local_d8 + 0x11c);
      *(undefined1 *)(uVar12 + 0x20 + param_1[8]) = *(undefined1 *)(local_d8 + 0x128);
      iVar3 = FUN_144e66f70(*(undefined4 *)(local_d8 + 0x11c));
      iVar4 = FUN_144e66f70(1);
      *(int *)(uVar12 + 0x24 + param_1[8]) = iVar3 / iVar4;
      FUN_144b663b0(&local_d8);
      uVar12 = uVar12 + 0x28;
      plVar7 = (longlong *)FUN_144b65f40(uVar5,local_d0);
    } while (local_d8 != *plVar7);
  }
  puVar9 = (undefined4 *)FUN_144b67b20(param_2);
  *(undefined4 *)(param_1 + 9) = *puVar9;
  *(undefined4 *)((longlong)param_1 + 0x4c) = puVar9[2];
  *(undefined4 *)(param_1 + 10) = puVar9[3];
  if (*(uint *)(param_1 + 6) == uVar11) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1452172c0 FUN_1452172c0 body=4 status=ok
// SIG undefined FUN_1452172c0(void)

undefined4 FUN_1452172c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 1452172d0 FUN_1452172d0 body=4 status=ok
// SIG undefined FUN_1452172d0(void)

undefined4 FUN_1452172d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// FUNCTION 1452172e0 FUN_1452172e0 body=122 status=ok
// SIG undefined FUN_1452172e0(void)

void FUN_1452172e0(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = (**(code **)(*param_1 + 8))();
  local_c = param_4 + -1 + local_c;
  local_18 = (undefined4)param_1[9];
  local_10 = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_14 = param_4;
  FUN_145217460(param_1,param_2,param_3,&local_18,param_5);
  return;
}



// FUNCTION 145217360 FUN_145217360 body=60 status=ok
// SIG undefined FUN_145217360(void)

void FUN_145217360(void)

{
  FUN_145217460();
  return;
}



// FUNCTION 1452173a0 FUN_1452173a0 body=122 status=ok
// SIG undefined FUN_1452173a0(void)

void FUN_1452173a0(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = (**(code **)(*param_1 + 8))();
  local_c = param_4 + -1 + local_c;
  local_18 = (undefined4)param_1[9];
  local_10 = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_14 = param_4;
  FUN_145217a80(param_1,param_2,param_3,&local_18,param_5);
  return;
}



// FUNCTION 145217420 FUN_145217420 body=60 status=ok
// SIG undefined FUN_145217420(void)

void FUN_145217420(void)

{
  FUN_145217a80();
  return;
}



// FUNCTION 145217460 FUN_145217460 body=1549 status=ok
// SIG undefined FUN_145217460(void)

void FUN_145217460(longlong param_1,undefined2 *param_2,int param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined2 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  size_t sVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  void *_Dst;
  int iVar22;
  ulonglong *puVar23;
  int iVar24;
  bool bVar25;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  undefined1 local_78 [8];
  undefined2 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_5 = *(undefined8 *)(param_1 + 0x28);
  local_90 = param_1;
  local_70 = param_2;
  if (param_3 != 0) {
    local_94 = *param_4;
    iVar24 = param_4[2];
    if (*(int *)(param_1 + 0x4c) < (int)param_4[2]) {
      iVar24 = *(int *)(param_1 + 0x4c);
    }
    iVar22 = param_4[1];
    iVar7 = param_4[3];
    if (*(int *)(param_1 + 0x50) < (int)param_4[3]) {
      iVar7 = *(int *)(param_1 + 0x50);
    }
    lVar20 = *(longlong *)(param_1 + 0x20);
    local_98 = iVar7;
    FUN_144b65f20(*(undefined8 *)(param_1 + 0x38),&local_80);
    plVar8 = (longlong *)FUN_144b65f40(*(undefined8 *)(param_1 + 0x38),local_78);
    iVar13 = local_94;
    local_88 = (longlong *)(param_1 + 0x40);
    if (local_80 != *plVar8) {
      lVar19 = 0;
      do {
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar19);
        *plVar8 = lVar20;
        plVar8[1] = lVar20;
        uVar6 = FUN_144e67000(*(undefined4 *)(local_80 + 0x120),iVar13,iVar24);
        *(undefined4 *)(plVar8 + 2) = uVar6;
        iVar7 = FUN_144e67000(*(undefined4 *)(local_80 + 0x124),iVar22,local_98);
        *(int *)((longlong)plVar8 + 0x14) = iVar7;
        lVar20 = lVar20 + (longlong)(iVar7 * *(int *)((longlong)plVar8 + 0x24) * (int)plVar8[2]) * 2
        ;
        FUN_144b663b0(&local_80);
        lVar19 = lVar19 + 0x28;
        plVar8 = (longlong *)FUN_144b65f40(*(undefined8 *)(param_1 + 0x38),local_78);
        param_2 = local_70;
        iVar7 = local_98;
      } while (local_80 != *plVar8);
    }
    plVar8 = local_88;
    if (*(int *)(param_1 + 0x14) == 1) {
      if (iVar22 <= iVar7) {
        do {
          iVar24 = 0;
          if (0 < *(int *)(param_1 + 0x30)) {
            lVar20 = 0;
            do {
              lVar19 = *plVar8 + lVar20;
              uVar2 = *(uint *)(lVar19 + 0x18);
              if (iVar22 < 0) {
                if ((int)uVar2 < 0) {
                  iVar7 = ~uVar2 - iVar22;
                }
                else {
                  iVar7 = (uVar2 - iVar22) + -1;
                }
                iVar7 = -(iVar7 / (int)uVar2);
              }
              else {
                iVar7 = iVar22 / (int)uVar2;
              }
              if (iVar22 == iVar7 * uVar2) {
                iVar7 = *(int *)(lVar19 + 0x10);
                if (*(int *)(lVar19 + 0x1c) == 1) {
                  for (; plVar8 = local_88, 0 < iVar7; iVar7 = iVar7 + -1) {
                    uVar3 = *param_2;
                    param_2 = param_2 + 1;
                    **(undefined2 **)(lVar19 + 8) = uVar3;
                    *(longlong *)(lVar19 + 8) = *(longlong *)(lVar19 + 8) + 2;
                  }
                }
                else {
                  lVar15 = (longlong)(iVar7 * *(int *)(lVar19 + 0x24));
                  sVar16 = lVar15 * 2;
                  memcpy(*(void **)(lVar19 + 8),param_2,sVar16);
                  param_2 = param_2 + lVar15;
                  *(longlong *)(lVar19 + 8) = *(longlong *)(lVar19 + 8) + sVar16;
                  plVar8 = local_88;
                  param_1 = local_90;
                }
              }
              iVar24 = iVar24 + 1;
              lVar20 = lVar20 + 0x28;
              iVar7 = local_98;
            } while (iVar24 < *(int *)(param_1 + 0x30));
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 <= iVar7);
      }
    }
    else if (iVar22 <= iVar7) {
      do {
        iVar24 = 0;
        if (0 < *(int *)(param_1 + 0x30)) {
          lVar20 = 0;
          do {
            lVar19 = *plVar8 + lVar20;
            uVar2 = *(uint *)(lVar19 + 0x18);
            if (iVar22 < 0) {
              if ((int)uVar2 < 0) {
                iVar7 = ~uVar2 - iVar22;
              }
              else {
                iVar7 = (uVar2 - iVar22) + -1;
              }
              iVar7 = -(iVar7 / (int)uVar2);
            }
            else {
              iVar7 = iVar22 / (int)uVar2;
            }
            if (iVar22 == iVar7 * uVar2) {
              lVar15 = (longlong)(*(int *)(lVar19 + 0x24) * *(int *)(lVar19 + 0x10));
              sVar16 = lVar15 * 2;
              memcpy(*(void **)(lVar19 + 8),param_2,sVar16);
              param_2 = param_2 + lVar15;
              *(longlong *)(lVar19 + 8) = *(longlong *)(lVar19 + 8) + sVar16;
              plVar8 = local_88;
              param_1 = local_90;
            }
            iVar24 = iVar24 + 1;
            lVar20 = lVar20 + 0x28;
            iVar7 = local_98;
          } while (iVar24 < *(int *)(param_1 + 0x30));
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 <= iVar7);
    }
    _Dst = *(void **)(param_1 + 0x28);
    local_94 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      local_80 = 0;
      do {
        lVar20 = local_80;
        plVar21 = (longlong *)(*plVar8 + local_80);
        if (*(int *)((longlong)plVar21 + 0x1c) == 1) {
          iVar24 = *(int *)((longlong)plVar21 + 0x14);
          local_80 = lVar20;
          if (0 < iVar24) {
            local_98 = 1;
            do {
              iVar22 = (int)plVar21[2];
              uVar14 = (ulonglong)iVar22;
              puVar18 = (ulonglong *)(*plVar21 + (longlong)((local_98 + -1) * iVar22) * 2);
              puVar1 = (ulonglong *)((longlong)puVar18 + uVar14 * 2);
              puVar17 = (ulonglong *)((longlong)puVar1 + uVar14 * 2);
              puVar9 = puVar1;
              puVar23 = (ulonglong *)((longlong)puVar17 + uVar14 * 2);
              if (iVar24 <= local_98 + 2) {
                puVar9 = puVar18;
                if (local_98 < iVar24) {
                  puVar9 = puVar1;
                }
                puVar23 = puVar17;
                if (iVar24 <= local_98 + 1) {
                  puVar17 = puVar9;
                  puVar23 = puVar9;
                }
              }
              iVar24 = 0;
              if (0 < iVar22) {
                do {
                  if (iVar24 + 3 < (int)uVar14) {
                    local_68 = *puVar18;
                    local_60 = *puVar9;
                    local_58 = *puVar17;
                    local_50 = *puVar23;
                  }
                  else {
                    iVar7 = 0;
                    iVar22 = ((int)uVar14 - iVar24) + -1;
                    do {
                      iVar13 = iVar7;
                      if (iVar22 < iVar7) {
                        iVar13 = iVar22;
                      }
                      lVar20 = (longlong)iVar13 * 2;
                      *(undefined2 *)((longlong)&local_68 + (longlong)iVar7 * 2) =
                           *(undefined2 *)(lVar20 + (longlong)puVar18);
                      *(undefined2 *)((longlong)&local_60 + (longlong)iVar7 * 2) =
                           *(undefined2 *)(lVar20 + (longlong)puVar9);
                      *(undefined2 *)((longlong)&local_58 + (longlong)iVar7 * 2) =
                           *(undefined2 *)(lVar20 + (longlong)puVar17);
                      *(undefined2 *)((longlong)&local_50 + (longlong)iVar7 * 2) =
                           *(undefined2 *)(lVar20 + (longlong)puVar23);
                      iVar7 = iVar7 + 1;
                      param_1 = local_90;
                    } while (iVar7 < 4);
                  }
                  uVar5 = local_50;
                  uVar4 = local_58;
                  uVar12 = local_60;
                  uVar14 = local_68;
                  puVar18 = puVar18 + 1;
                  puVar17 = puVar17 + 1;
                  puVar9 = puVar9 + 1;
                  puVar23 = puVar23 + 1;
                  bVar25 = (char)plVar21[4] == '\0';
                  if (!bVar25) {
                    uVar10 = local_68 & 0xffff;
                    uVar11 = local_68 >> 0x10;
                    local_68 = CONCAT26(*(undefined2 *)(&DAT_149c5c570 + (uVar14 >> 0x30) * 2),
                                        CONCAT24(*(undefined2 *)
                                                  (&DAT_149c5c570 + (uVar14 >> 0x20 & 0xffff) * 2),
                                                 CONCAT22(*(undefined2 *)
                                                           (&DAT_149c5c570 + (uVar11 & 0xffff) * 2),
                                                          *(undefined2 *)
                                                           (&DAT_149c5c570 + uVar10 * 2))));
                    uVar11 = local_60 & 0xffff;
                    uVar14 = local_60 >> 0x10;
                    local_60 = CONCAT26(*(undefined2 *)(&DAT_149c5c570 + (uVar12 >> 0x30) * 2),
                                        CONCAT24(*(undefined2 *)
                                                  (&DAT_149c5c570 + (uVar12 >> 0x20 & 0xffff) * 2),
                                                 CONCAT22(*(undefined2 *)
                                                           (&DAT_149c5c570 + (uVar14 & 0xffff) * 2),
                                                          *(undefined2 *)
                                                           (&DAT_149c5c570 + uVar11 * 2))));
                    uVar12 = local_58 & 0xffff;
                    uVar14 = local_58 >> 0x10;
                    local_58 = CONCAT26(*(undefined2 *)(&DAT_149c5c570 + (uVar4 >> 0x30) * 2),
                                        CONCAT24(*(undefined2 *)
                                                  (&DAT_149c5c570 + (uVar4 >> 0x20 & 0xffff) * 2),
                                                 CONCAT22(*(undefined2 *)
                                                           (&DAT_149c5c570 + (uVar14 & 0xffff) * 2),
                                                          *(undefined2 *)
                                                           (&DAT_149c5c570 + uVar12 * 2))));
                    uVar12 = local_50 & 0xffff;
                    uVar14 = local_50 >> 0x10;
                    local_50 = CONCAT26(*(undefined2 *)(&DAT_149c5c570 + (uVar5 >> 0x30) * 2),
                                        CONCAT24(*(undefined2 *)
                                                  (&DAT_149c5c570 + (uVar5 >> 0x20 & 0xffff) * 2),
                                                 CONCAT22(*(undefined2 *)
                                                           (&DAT_149c5c570 + (uVar14 & 0xffff) * 2),
                                                          *(undefined2 *)
                                                           (&DAT_149c5c570 + uVar12 * 2))));
                  }
                  iVar22 = FUN_1452184c0(&local_68,_Dst,*(undefined1 *)(param_1 + 0x10),bVar25);
                  uVar14 = (ulonglong)*(uint *)(plVar21 + 2);
                  iVar24 = iVar24 + 4;
                  _Dst = (void *)((longlong)_Dst + (longlong)iVar22);
                  param_1 = local_90;
                } while (iVar24 < (int)*(uint *)(plVar21 + 2));
              }
              iVar24 = *(int *)((longlong)plVar21 + 0x14);
              local_98 = local_98 + 4;
              plVar8 = local_88;
            } while (local_98 <= iVar24);
          }
        }
        else {
          sVar16 = (size_t)(*(int *)((longlong)plVar21 + 0x24) * (int)plVar21[2] *
                            *(int *)((longlong)plVar21 + 0x14) * 2);
          memcpy(_Dst,(void *)*plVar21,sVar16);
          _Dst = (void *)((longlong)_Dst + sVar16);
          local_80 = lVar20;
          plVar8 = local_88;
          param_1 = local_90;
        }
        local_94 = local_94 + 1;
        local_80 = local_80 + 0x28;
      } while (local_94 < *(int *)(param_1 + 0x30));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 145217a80 FUN_145217a80 body=2510 status=ok
// SIG undefined FUN_145217a80(void)

void FUN_145217a80(longlong param_1,char *param_2,int param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  byte bVar4;
  char *_Dst;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  char *_Dst_00;
  longlong lVar12;
  longlong *plVar13;
  size_t sVar14;
  longlong lVar15;
  int iVar16;
  undefined1 *_Dst_01;
  longlong lVar17;
  short sVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined4 uStack_d4;
  longlong *local_d0;
  longlong local_c8;
  int local_c0;
  int local_bc;
  char *local_b8;
  char *local_b0;
  longlong local_a8;
  int local_a0;
  void *local_98;
  char *local_90;
  undefined8 *local_88;
  ushort local_80 [11];
  ushort local_6a;
  ushort local_68;
  ushort local_66;
  ushort local_64;
  ushort local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_5 = *(undefined8 *)(param_1 + 0x28);
  local_88 = param_5;
  local_e8 = param_3;
  local_c8 = param_1;
  local_b0 = param_2;
  if (param_3 != 0) {
    local_dc = *param_4;
    lVar12 = *(longlong *)(param_1 + 0x20);
    iVar11 = param_4[2];
    if (*(int *)(param_1 + 0x4c) < (int)param_4[2]) {
      iVar11 = *(int *)(param_1 + 0x4c);
    }
    iVar16 = param_4[1];
    local_e0 = param_4[3];
    if (*(int *)(param_1 + 0x50) < (int)param_4[3]) {
      local_e0 = *(int *)(param_1 + 0x50);
    }
    local_a0 = iVar16;
    FUN_144b65f20(*(undefined8 *)(param_1 + 0x38),&local_d8);
    plVar8 = (longlong *)FUN_144b65f40(*(undefined8 *)(param_1 + 0x38),&local_a8);
    lVar17 = local_c8;
    iVar10 = local_dc;
    plVar13 = (longlong *)(param_1 + 0x40);
    local_d0 = plVar13;
    if (CONCAT44(uStack_d4,local_d8) != *plVar8) {
      lVar15 = 0;
      do {
        plVar13 = (longlong *)(*plVar13 + lVar15);
        *plVar13 = lVar12;
        plVar13[1] = lVar12;
        uVar6 = FUN_144e67000(*(undefined4 *)(CONCAT44(uStack_d4,local_d8) + 0x120),iVar10,iVar11);
        *(undefined4 *)(plVar13 + 2) = uVar6;
        iVar7 = FUN_144e67000(*(undefined4 *)(CONCAT44(uStack_d4,local_d8) + 0x124),iVar16,local_e0)
        ;
        *(int *)((longlong)plVar13 + 0x14) = iVar7;
        lVar12 = lVar12 + (longlong)(iVar7 * *(int *)((longlong)plVar13 + 0x24) * (int)plVar13[2]) *
                          2;
        FUN_144b663b0(&local_d8);
        lVar15 = lVar15 + 0x28;
        plVar8 = (longlong *)FUN_144b65f40(*(undefined8 *)(lVar17 + 0x38),&local_a8);
        plVar13 = (longlong *)(lVar17 + 0x40);
        param_1 = local_c8;
        param_2 = local_b0;
        param_3 = local_e8;
      } while (CONCAT44(uStack_d4,local_d8) != *plVar8);
    }
    iVar11 = *(int *)(param_1 + 0x30);
    local_dc = 0;
    plVar13 = local_d0;
    if (0 < iVar11) {
      local_a8 = 0;
      do {
        lVar12 = local_a8;
        plVar8 = (longlong *)(*plVar13 + local_a8);
        if (*(int *)((longlong)plVar8 + 0x1c) == 1) {
          local_d8 = 0;
          local_a8 = lVar12;
          if (0 < *(int *)((longlong)plVar8 + 0x14)) {
            local_e4 = 1;
            do {
              iVar11 = (int)plVar8[2];
              lVar12 = (longlong)iVar11;
              local_bc = 0;
              local_98 = (void *)(*plVar8 + (longlong)(iVar11 * local_d8) * 2);
              local_b0 = (char *)((longlong)local_98 + lVar12 * 2);
              local_b8 = local_b0 + lVar12 * 2;
              local_90 = local_b8 + lVar12 * 2;
              iVar16 = local_e8;
              if (0 < iVar11) {
                do {
                  pvVar5 = local_98;
                  _Dst = local_b0;
                  iVar11 = local_bc;
                  if (param_3 < 3) goto LAB_145218458;
                  bVar1 = param_2[2];
                  if (bVar1 < 0x34) {
                    if (param_3 < 0xe) goto LAB_145218458;
                    bVar4 = bVar1 >> 2;
                    sVar18 = 0x20 << (bVar4 & 0x1f);
                    local_80[0] = CONCAT11(*param_2,param_2[1]);
                    local_80[4] = ((((ushort)((byte)param_2[3] >> 4) | (bVar1 & 3) << 4) <<
                                   (bVar4 & 0x1f)) - sVar18) + local_80[0];
                    local_80[8] = ((((ushort)((byte)param_2[4] >> 6) | ((byte)param_2[3] & 0xf) << 2
                                    ) << (bVar4 & 0x1f)) - sVar18) + local_80[4];
                    local_68 = (((ushort)(param_2[4] & 0x3f) << (bVar4 & 0x1f)) - sVar18) +
                               local_80[8];
                    local_80[1] = (((ushort)((byte)param_2[5] >> 2) << (bVar4 & 0x1f)) - sVar18) +
                                  local_80[0];
                    local_80[5] = ((((ushort)((byte)param_2[6] >> 4) | ((byte)param_2[5] & 3) << 4)
                                   << (bVar4 & 0x1f)) - sVar18) + local_80[4];
                    local_80[9] = ((((ushort)((byte)param_2[7] >> 6) | ((byte)param_2[6] & 0xf) << 2
                                    ) << (bVar4 & 0x1f)) - sVar18) + local_80[8];
                    local_66 = (((ushort)(param_2[7] & 0x3f) << (bVar4 & 0x1f)) - sVar18) + local_68
                    ;
                    local_80[2] = (((ushort)((byte)param_2[8] >> 2) << (bVar4 & 0x1f)) - sVar18) +
                                  local_80[1];
                    local_80[6] = ((((ushort)((byte)param_2[9] >> 4) | ((byte)param_2[8] & 3) << 4)
                                   << (bVar4 & 0x1f)) - sVar18) + local_80[5];
                    local_80[10] = ((((ushort)((byte)param_2[10] >> 6) |
                                     ((byte)param_2[9] & 0xf) << 2) << (bVar4 & 0x1f)) - sVar18) +
                                   local_80[9];
                    local_80[3] = (((ushort)((byte)param_2[0xb] >> 2) << (bVar4 & 0x1f)) - sVar18) +
                                  local_80[2];
                    local_64 = (((ushort)(param_2[10] & 0x3f) << (bVar4 & 0x1f)) - sVar18) +
                               local_66;
                    local_80[7] = ((((ushort)((byte)param_2[0xc] >> 4) |
                                    ((byte)param_2[0xb] & 3) << 4) << (bVar4 & 0x1f)) - sVar18) +
                                  local_80[6];
                    local_6a = ((((ushort)((byte)param_2[0xd] >> 6) |
                                 ((byte)param_2[0xc] & 0xf) << 2) << (bVar4 & 0x1f)) - sVar18) +
                               local_80[10];
                    lVar12 = 2;
                    local_62 = (((ushort)(param_2[0xd] & 0x3f) << (bVar4 & 0x1f)) - sVar18) +
                               local_64;
                    puVar9 = local_80;
                    do {
                      uVar19 = *puVar9;
                      uVar20 = puVar9[1];
                      uVar21 = puVar9[2];
                      uVar22 = puVar9[3];
                      uVar23 = puVar9[4];
                      uVar24 = puVar9[5];
                      uVar25 = puVar9[6];
                      uVar26 = puVar9[7];
                      uVar27 = -(ushort)((uVar19 & 0x8000) == 0);
                      uVar28 = -(ushort)((uVar20 & 0x8000) == 0);
                      uVar29 = -(ushort)((uVar21 & 0x8000) == 0);
                      uVar30 = -(ushort)((uVar22 & 0x8000) == 0);
                      uVar31 = -(ushort)((uVar23 & 0x8000) == 0);
                      uVar32 = -(ushort)((uVar24 & 0x8000) == 0);
                      uVar33 = -(ushort)((uVar25 & 0x8000) == 0);
                      uVar34 = -(ushort)((uVar26 & 0x8000) == 0);
                      uVar19 = uVar19 & 0x7fff & ~uVar27 | uVar27 & uVar19;
                      uVar20 = uVar20 & 0x7fff & ~uVar28 | uVar28 & uVar20;
                      uVar21 = uVar21 & 0x7fff & ~uVar29 | uVar29 & uVar21;
                      uVar22 = uVar22 & 0x7fff & ~uVar30 | uVar30 & uVar22;
                      uVar23 = uVar23 & 0x7fff & ~uVar31 | uVar31 & uVar23;
                      uVar24 = uVar24 & 0x7fff & ~uVar32 | uVar32 & uVar24;
                      uVar25 = uVar25 & 0x7fff & ~uVar33 | uVar33 & uVar25;
                      uVar26 = uVar26 & 0x7fff & ~uVar34 | uVar34 & uVar26;
                      *puVar9 = uVar27 & ~uVar19 | uVar19 & ~uVar27;
                      puVar9[1] = uVar28 & ~uVar20 | uVar20 & ~uVar28;
                      puVar9[2] = uVar29 & ~uVar21 | uVar21 & ~uVar29;
                      puVar9[3] = uVar30 & ~uVar22 | uVar22 & ~uVar30;
                      puVar9[4] = uVar31 & ~uVar23 | uVar23 & ~uVar31;
                      puVar9[5] = uVar32 & ~uVar24 | uVar24 & ~uVar32;
                      puVar9[6] = uVar33 & ~uVar25 | uVar25 & ~uVar33;
                      puVar9[7] = uVar34 & ~uVar26 | uVar26 & ~uVar34;
                      lVar12 = lVar12 + -1;
                      puVar9 = puVar9 + 8;
                    } while (lVar12 != 0);
                    lVar12 = 0xe;
                    local_c0 = -0xe;
                  }
                  else {
                    local_80[0] = CONCAT11(*param_2,param_2[1]);
                    if (*param_2 < '\0') {
                      local_80[0] = local_80[0] & 0x7fff;
                    }
                    else {
                      local_80[0] = ~local_80[0];
                    }
                    lVar12 = 3;
                    local_c0 = -3;
                    local_e8 = param_3;
                    local_80[1] = local_80[0];
                    local_80[2] = local_80[0];
                    local_80[3] = local_80[0];
                    local_80[4] = local_80[0];
                    local_80[5] = local_80[0];
                    local_80[6] = local_80[0];
                    local_80[7] = local_80[0];
                    local_80[8] = local_80[0];
                    local_80[9] = local_80[0];
                    local_80[10] = local_80[0];
                    local_6a = local_80[0];
                    local_68 = local_80[0];
                    local_66 = local_80[0];
                    local_64 = local_80[0];
                    local_62 = local_80[0];
                  }
                  param_3 = local_e8 + local_c0;
                  param_2 = param_2 + lVar12;
                  if ((char)plVar8[4] != '\0') {
                    local_80[0] = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_80[0] * 2);
                    local_80[1] = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_80[1] * 2);
                    local_80[2] = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_80[2] * 2);
                    local_80[3] = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_80[3] * 2);
                    local_80[4] = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_80[4] * 2);
                    local_80[5] = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_80[5] * 2);
                    local_80[6] = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_80[6] * 2);
                    local_80[7] = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_80[7] * 2);
                    local_80[8] = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_80[8] * 2);
                    local_80[9] = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_80[9] * 2);
                    local_80[10] = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_80[10] * 2);
                    local_6a = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_6a * 2);
                    local_68 = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_68 * 2);
                    local_66 = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_66 * 2);
                    local_64 = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_64 * 2);
                    local_62 = *(ushort *)(&DAT_149c7c570 + (ulonglong)local_62 * 2);
                  }
                  if (local_bc + 3 < (int)plVar8[2]) {
                    iVar16 = 8;
                  }
                  else {
                    iVar16 = ((int)plVar8[2] - local_bc) * 2;
                  }
                  sVar14 = (size_t)iVar16;
                  local_e8 = param_3;
                  if (local_e4 + 2 < *(int *)((longlong)plVar8 + 0x14)) {
                    memcpy(local_98,local_80,sVar14);
                    memcpy(_Dst,local_80 + 4,sVar14);
                    memcpy(local_b8,local_80 + 8,sVar14);
                    puVar9 = &local_68;
                    _Dst_00 = local_90;
LAB_1452181b7:
                    memcpy(_Dst_00,puVar9,sVar14);
                  }
                  else {
                    memcpy(local_98,local_80,sVar14);
                    if (local_e4 < *(int *)((longlong)plVar8 + 0x14)) {
                      memcpy(_Dst,local_80 + 4,sVar14);
                    }
                    if (local_e4 + 1 < *(int *)((longlong)plVar8 + 0x14)) {
                      puVar9 = local_80 + 8;
                      _Dst_00 = local_b8;
                      goto LAB_1452181b7;
                    }
                  }
                  local_b8 = local_b8 + 8;
                  local_98 = (void *)((longlong)pvVar5 + 8);
                  local_90 = local_90 + 8;
                  local_b0 = _Dst + 8;
                  local_bc = iVar11 + 4;
                  iVar16 = param_3;
                } while (local_bc < (int)plVar8[2]);
              }
              local_e8 = iVar16;
              local_e4 = local_e4 + 4;
              local_d8 = local_d8 + 4;
              plVar13 = local_d0;
              param_1 = local_c8;
            } while (local_d8 < *(int *)((longlong)plVar8 + 0x14));
          }
        }
        else {
          iVar16 = *(int *)((longlong)plVar8 + 0x24) * (int)plVar8[2] *
                   *(int *)((longlong)plVar8 + 0x14);
          iVar11 = iVar16 * 2;
          if (param_3 < iVar11) {
LAB_145218458:
                    /* WARNING: Subroutine does not return */
            FUN_145218c40();
          }
          memcpy((void *)*plVar8,param_2,(longlong)iVar11);
          param_2 = param_2 + iVar11;
          local_e8 = param_3 + iVar16 * -2;
          plVar13 = local_d0;
          local_a8 = lVar12;
          param_3 = local_e8;
        }
        local_a8 = local_a8 + 0x28;
        iVar11 = *(int *)(param_1 + 0x30);
        local_dc = local_dc + 1;
        iVar16 = local_a0;
      } while (local_dc < iVar11);
    }
    lVar12 = local_c8;
    _Dst_01 = *(undefined1 **)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x14) == 1) {
      iVar10 = local_e0;
      if (iVar16 <= local_e0) {
        do {
          iVar7 = 0;
          if (0 < iVar11) {
            lVar17 = 0;
            do {
              lVar15 = *plVar13 + lVar17;
              uVar3 = *(uint *)(lVar15 + 0x18);
              if (iVar16 < 0) {
                if ((int)uVar3 < 0) {
                  iVar11 = ~uVar3 - iVar16;
                }
                else {
                  iVar11 = (uVar3 - iVar16) + -1;
                }
                iVar11 = -(iVar11 / (int)uVar3);
              }
              else {
                iVar11 = iVar16 / (int)uVar3;
              }
              if (iVar16 == iVar11 * uVar3) {
                iVar11 = *(int *)(lVar15 + 0x10);
                if (*(int *)(lVar15 + 0x1c) == 1) {
                  for (; 0 < iVar11; iVar11 = iVar11 + -1) {
                    uVar2 = **(undefined2 **)(lVar15 + 8);
                    *_Dst_01 = (char)uVar2;
                    _Dst_01[1] = (char)((ushort)uVar2 >> 8);
                    _Dst_01 = _Dst_01 + 2;
                    *(longlong *)(lVar15 + 8) = *(longlong *)(lVar15 + 8) + 2;
                  }
                }
                else {
                  sVar14 = (longlong)(iVar11 * *(int *)(lVar15 + 0x24)) * 2;
                  memcpy(_Dst_01,*(void **)(lVar15 + 8),sVar14);
                  _Dst_01 = _Dst_01 + sVar14;
                  *(longlong *)(lVar15 + 8) = *(longlong *)(lVar15 + 8) + sVar14;
                }
              }
              iVar11 = *(int *)(lVar12 + 0x30);
              iVar7 = iVar7 + 1;
              lVar17 = lVar17 + 0x28;
              plVar13 = local_d0;
              iVar10 = local_e0;
            } while (iVar7 < iVar11);
          }
          iVar16 = iVar16 + 1;
          plVar13 = local_d0;
          param_1 = local_c8;
          param_3 = local_e8;
        } while (iVar16 <= iVar10);
      }
    }
    else {
      iVar10 = local_e0;
      if (iVar16 <= local_e0) {
        do {
          iVar7 = 0;
          if (0 < iVar11) {
            lVar17 = 0;
            do {
              lVar15 = *plVar13 + lVar17;
              uVar3 = *(uint *)(lVar15 + 0x18);
              if (iVar16 < 0) {
                if ((int)uVar3 < 0) {
                  iVar11 = ~uVar3 - iVar16;
                }
                else {
                  iVar11 = (uVar3 - iVar16) + -1;
                }
                iVar11 = -(iVar11 / (int)uVar3);
              }
              else {
                iVar11 = iVar16 / (int)uVar3;
              }
              if (iVar16 == iVar11 * uVar3) {
                sVar14 = (longlong)(*(int *)(lVar15 + 0x24) * *(int *)(lVar15 + 0x10)) * 2;
                memcpy(_Dst_01,*(void **)(lVar15 + 8),sVar14);
                _Dst_01 = _Dst_01 + sVar14;
                *(longlong *)(lVar15 + 8) = *(longlong *)(lVar15 + 8) + sVar14;
              }
              iVar11 = *(int *)(lVar12 + 0x30);
              iVar7 = iVar7 + 1;
              lVar17 = lVar17 + 0x28;
              plVar13 = local_d0;
              iVar10 = local_e0;
            } while (iVar7 < iVar11);
          }
          iVar16 = iVar16 + 1;
          plVar13 = local_d0;
          param_1 = local_c8;
          param_3 = local_e8;
        } while (iVar16 <= iVar10);
      }
    }
    if (0 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_145218c80();
    }
    *local_88 = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
}



// FUNCTION 145218460 FUN_145218460 body=92 status=ok
// SIG undefined FUN_145218460(void)

undefined8 * FUN_145218460(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::B44Compressor::vftable;
  thunk_FUN_1400020a8(param_1[4]);
  thunk_FUN_1400020a8(param_1[5]);
  thunk_FUN_1400020a8(param_1[8]);
  FUN_144e497f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1452184c0 FUN_1452184c0 body=1856 status=ok
// SIG undefined FUN_1452184c0(void)

void FUN_1452184c0(longlong param_1,undefined1 *param_2,char param_3,char param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ushort uVar22;
  int iVar23;
  ushort uVar24;
  ushort uVar26;
  uint uVar25;
  ushort uVar27;
  ushort uVar29;
  uint uVar28;
  ushort uVar31;
  uint uVar30;
  ushort uVar32;
  ushort uVar34;
  uint uVar33;
  ushort uVar35;
  ushort uVar37;
  uint uVar36;
  ushort uVar38;
  ushort uVar40;
  uint uVar39;
  ushort uVar41;
  ushort uVar43;
  uint uVar42;
  ushort uVar44;
  ushort uVar46;
  uint uVar45;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  ushort uVar51;
  ushort uVar52;
  ushort uVar54;
  ushort uVar55;
  uint uVar53;
  ushort uVar56;
  ushort uVar57;
  ushort uVar59;
  ushort uVar60;
  uint uVar58;
  ushort uVar61;
  ushort uVar62;
  ushort uVar64;
  ushort uVar65;
  uint uVar63;
  ushort uVar66;
  ushort uVar67;
  ushort uVar69;
  ushort uVar70;
  uint uVar68;
  char local_158;
  char local_157;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  uint local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined1 *local_e8;
  uint local_e0 [4];
  int iStack_d0;
  int local_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  ushort local_a0 [11];
  ushort uStack_8a;
  ushort uStack_88;
  ushort uStack_86;
  ushort uStack_84;
  ushort uStack_82;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)&local_158;
  puVar7 = local_a0;
  lVar10 = 2;
  do {
    puVar1 = (ushort *)((param_1 - (longlong)local_a0) + (longlong)puVar7);
    uVar31 = *puVar1;
    uVar32 = puVar1[1];
    uVar22 = puVar1[2];
    uVar24 = puVar1[3];
    uVar29 = puVar1[4];
    uVar27 = puVar1[5];
    uVar34 = puVar1[6];
    uVar26 = puVar1[7];
    uVar35 = -(ushort)((uVar31 & 0x7c00) == 0x7c00);
    uVar37 = -(ushort)((uVar32 & 0x7c00) == 0x7c00);
    uVar38 = -(ushort)((uVar22 & 0x7c00) == 0x7c00);
    uVar40 = -(ushort)((uVar24 & 0x7c00) == 0x7c00);
    uVar41 = -(ushort)((uVar29 & 0x7c00) == 0x7c00);
    uVar43 = -(ushort)((uVar27 & 0x7c00) == 0x7c00);
    uVar44 = -(ushort)((uVar34 & 0x7c00) == 0x7c00);
    uVar46 = -(ushort)((uVar26 & 0x7c00) == 0x7c00);
    uVar51 = -(ushort)((uVar31 & 0x8000) == 0);
    uVar54 = -(ushort)((uVar32 & 0x8000) == 0);
    uVar56 = -(ushort)((uVar22 & 0x8000) == 0);
    uVar59 = -(ushort)((uVar24 & 0x8000) == 0);
    uVar61 = -(ushort)((uVar29 & 0x8000) == 0);
    uVar64 = -(ushort)((uVar27 & 0x8000) == 0);
    uVar66 = -(ushort)((uVar34 & 0x8000) == 0);
    uVar69 = -(ushort)((uVar26 & 0x8000) == 0);
    uVar52 = uVar51 & (uVar35 ^ 0xffff);
    uVar55 = uVar54 & (uVar37 ^ 0xffff);
    uVar57 = uVar56 & (uVar38 ^ 0xffff);
    uVar60 = uVar59 & (uVar40 ^ 0xffff);
    uVar62 = uVar61 & (uVar41 ^ 0xffff);
    uVar65 = uVar64 & (uVar43 ^ 0xffff);
    uVar67 = uVar66 & (uVar44 ^ 0xffff);
    uVar70 = uVar69 & (uVar46 ^ 0xffff);
    uVar51 = ~uVar51 & (uVar35 ^ 0xffff);
    uVar54 = ~uVar54 & (uVar37 ^ 0xffff);
    uVar56 = ~uVar56 & (uVar38 ^ 0xffff);
    uVar59 = ~uVar59 & (uVar40 ^ 0xffff);
    uVar61 = ~uVar61 & (uVar41 ^ 0xffff);
    uVar64 = ~uVar64 & (uVar43 ^ 0xffff);
    uVar66 = ~uVar66 & (uVar44 ^ 0xffff);
    uVar69 = ~uVar69 & (uVar46 ^ 0xffff);
    *puVar7 = ~uVar52 & (~uVar51 & (~uVar35 & *puVar7 | uVar35 & 0x8000) | ~uVar31 & uVar51) |
              (uVar31 | 0x8000) & uVar52;
    puVar7[1] = ~uVar55 & (~uVar54 & (~uVar37 & puVar7[1] | uVar37 & 0x8000) | ~uVar32 & uVar54) |
                (uVar32 | 0x8000) & uVar55;
    puVar7[2] = ~uVar57 & (~uVar56 & (~uVar38 & puVar7[2] | uVar38 & 0x8000) | ~uVar22 & uVar56) |
                (uVar22 | 0x8000) & uVar57;
    puVar7[3] = ~uVar60 & (~uVar59 & (~uVar40 & puVar7[3] | uVar40 & 0x8000) | ~uVar24 & uVar59) |
                (uVar24 | 0x8000) & uVar60;
    puVar7[4] = ~uVar62 & (~uVar61 & (~uVar41 & puVar7[4] | uVar41 & 0x8000) | ~uVar29 & uVar61) |
                (uVar29 | 0x8000) & uVar62;
    puVar7[5] = ~uVar65 & (~uVar64 & (~uVar43 & puVar7[5] | uVar43 & 0x8000) | ~uVar27 & uVar64) |
                (uVar27 | 0x8000) & uVar65;
    puVar7[6] = ~uVar67 & (~uVar66 & (~uVar44 & puVar7[6] | uVar44 & 0x8000) | ~uVar34 & uVar66) |
                (uVar34 | 0x8000) & uVar67;
    puVar7[7] = ~uVar70 & (~uVar69 & (~uVar46 & puVar7[7] | uVar46 & 0x8000) | ~uVar26 & uVar69) |
                (uVar26 | 0x8000) & uVar70;
    puVar7 = puVar7 + 8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  uVar22 = 0;
  if (DAT_14c707900 < 2) {
    puVar7 = local_a0;
    lVar10 = 0x10;
    uVar24 = uVar22;
    do {
      uVar31 = *puVar7;
      puVar7 = puVar7 + 1;
      if (uVar31 <= uVar24) {
        uVar31 = uVar24;
      }
      uVar24 = uVar31;
      local_130 = (uint)uVar24;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  else {
    uVar35 = (local_a0[0] != 0) * local_a0[0];
    uVar26 = (local_a0[1] != 0) * local_a0[1];
    uVar27 = (local_a0[2] != 0) * local_a0[2];
    uVar29 = (local_a0[3] != 0) * local_a0[3];
    uVar32 = (local_a0[4] != 0) * local_a0[4];
    uVar31 = (local_a0[5] != 0) * local_a0[5];
    uVar24 = (local_a0[6] != 0) * local_a0[6];
    uVar34 = (local_a0[7] != 0) * local_a0[7];
    uVar37 = (local_a0[8] != 0) * local_a0[8];
    uVar38 = (local_a0[9] != 0) * local_a0[9];
    uVar40 = (local_a0[10] != 0) * local_a0[10];
    uVar41 = (uStack_8a != 0) * uStack_8a;
    uVar43 = (uStack_88 != 0) * uStack_88;
    uVar44 = (uStack_86 != 0) * uStack_86;
    uVar46 = (uStack_84 != 0) * uStack_84;
    uVar51 = (uStack_82 != 0) * uStack_82;
    uVar35 = (uVar35 < uVar37) * uVar37 | (uVar35 >= uVar37) * uVar35;
    uVar26 = (uVar26 < uVar38) * uVar38 | (uVar26 >= uVar38) * uVar26;
    uVar27 = (uVar27 < uVar40) * uVar40 | (uVar27 >= uVar40) * uVar27;
    uVar29 = (uVar29 < uVar41) * uVar41 | (uVar29 >= uVar41) * uVar29;
    uVar37 = (uVar32 < uVar43) * uVar43 | (uVar32 >= uVar43) * uVar32;
    uVar31 = (uVar31 < uVar44) * uVar44 | (uVar31 >= uVar44) * uVar31;
    uVar32 = (uVar24 < uVar46) * uVar46 | (uVar24 >= uVar46) * uVar24;
    uVar34 = (uVar34 < uVar51) * uVar51 | (uVar34 >= uVar51) * uVar34;
    uVar24 = (uVar35 < uVar37) * uVar37 | (uVar35 >= uVar37) * uVar35;
    uVar31 = (uVar26 < uVar31) * uVar31 | (uVar26 >= uVar31) * uVar26;
    uVar32 = (uVar27 < uVar32) * uVar32 | (uVar27 >= uVar32) * uVar27;
    uVar29 = (uVar29 < uVar34) * uVar34 | (uVar29 >= uVar34) * uVar29;
    uVar24 = (uVar24 < uVar32) * uVar32 | (uVar24 >= uVar32) * uVar24;
    uVar31 = (uVar31 < uVar29) * uVar29 | (uVar31 >= uVar29) * uVar31;
    uVar32 = (uVar32 < uVar37) * uVar37 | (uVar32 >= uVar37) * uVar32;
    local_130 = CONCAT22((uVar31 < uVar32) * uVar32 | (uVar31 >= uVar32) * uVar31,
                         (uVar24 < uVar31) * uVar31 | (uVar24 >= uVar31) * uVar24);
  }
  uVar25 = local_130 & 0xffff;
  local_154 = -1;
  iVar2 = (uVar25 - local_a0[0]) * 2;
  local_138 = ((local_130 & 0xffff) - (uint)local_a0[1]) * 2;
  iVar3 = (uVar25 - local_a0[2]) * 2;
  local_108 = (uVar25 - local_a0[3]) * 2;
  local_12c = (uVar25 - local_a0[4]) * 2;
  local_128 = (uVar25 - local_a0[5]) * 2;
  local_124 = (uVar25 - local_a0[6]) * 2;
  local_104 = (uVar25 - local_a0[7]) * 2;
  local_120 = (uVar25 - local_a0[8]) * 2;
  local_11c = (uVar25 - local_a0[9]) * 2;
  local_118 = (uVar25 - local_a0[10]) * 2;
  local_100 = (uVar25 - uStack_8a) * 2;
  local_114 = (uVar25 - uStack_88) * 2;
  local_110 = (uVar25 - uStack_86) * 2;
  local_10c = (uVar25 - uStack_84) * 2;
  iVar4 = (uVar25 - uStack_82) * 2;
  do {
    local_154 = local_154 + 1;
    uVar22 = uVar22 + 1;
    bVar8 = (byte)local_154;
    iVar11 = 1 << (bVar8 & 0x1f);
    bVar9 = (byte)uVar22;
    iVar12 = (int)((local_138 >> (bVar9 & 0x1f) & 1U) + local_138 + -1 + iVar11) >> (bVar9 & 0x1f);
    iVar5 = (int)((iVar3 >> (bVar9 & 0x1f) & 1U) + iVar3 + -1 + iVar11) >> (bVar9 & 0x1f);
    local_134 = (int)(((iVar2 >> (bVar9 & 0x1f) & 1U) - 1) + iVar2 + iVar11) >> (bVar9 & 0x1f);
    iVar16 = (int)((local_12c >> (bVar9 & 0x1f) & 1U) + local_12c + -1 + iVar11) >> (bVar9 & 0x1f);
    iVar18 = (int)(local_128 + -1 + (local_128 >> (bVar9 & 0x1f) & 1U) + iVar11) >> (bVar9 & 0x1f);
    iVar13 = (int)(local_124 + -1 + (local_124 >> (bVar9 & 0x1f) & 1U) + iVar11) >> (bVar9 & 0x1f);
    iVar23 = (int)((local_120 >> (bVar9 & 0x1f) & 1U) + local_120 + -1 + iVar11) >> (bVar9 & 0x1f);
    iVar20 = (int)((local_11c >> (bVar9 & 0x1f) & 1U) + local_11c + -1 + iVar11) >> (bVar9 & 0x1f);
    iVar21 = (int)((local_118 >> (bVar9 & 0x1f) & 1U) + local_118 + -1 + iVar11) >> (bVar9 & 0x1f);
    local_e0[0] = (local_134 - iVar16) + 0x20;
    iVar14 = (int)(local_114 + -1 + (local_114 >> (bVar9 & 0x1f) & 1U) + iVar11) >> (bVar9 & 0x1f);
    iVar6 = (int)((local_110 >> (bVar9 & 0x1f) & 1U) + local_110 + -1 + iVar11) >> (bVar9 & 0x1f);
    local_fc = (iVar16 - iVar23) + 0x20;
    iVar15 = (int)(local_10c + -1 + (local_10c >> (bVar9 & 0x1f) & 1U) + iVar11) >> (bVar9 & 0x1f);
    local_f4 = (iVar16 - iVar18) + 0x20;
    local_e0[1] = local_fc;
    local_f8 = (iVar23 - iVar14) + 0x20;
    local_148 = (iVar14 - iVar6) + 0x20;
    local_e0[2] = local_f8;
    local_cc = (iVar23 - iVar20) + 0x20;
    local_bc = (iVar20 - iVar21) + 0x20;
    local_f0 = (local_134 - iVar12) + 0x20;
    local_144 = (iVar12 - iVar5) + 0x20;
    iStack_c8 = local_148;
    iStack_c4 = local_144;
    iStack_d0 = local_f4;
    local_ec = (iVar18 - iVar13) + 0x20;
    iStack_c0 = local_ec;
    local_150 = (iVar6 - iVar15) + 0x20;
    local_e0[3] = local_f0;
    local_b8 = local_150;
    local_14c = (iVar5 - ((int)((local_108 >> (bVar9 & 0x1f) & 1U) + local_108 + -1 + iVar11) >>
                         (bVar9 & 0x1f))) + 0x20;
    local_b4 = local_14c;
    local_140 = (iVar13 - ((int)((local_104 >> (bVar9 & 0x1f) & 1U) + iVar11 + local_104 + -1) >>
                          (bVar9 & 0x1f))) + 0x20;
    local_b0 = local_140;
    local_ac = (iVar21 - ((int)((local_100 >> (bVar9 & 0x1f) & 1U) + local_100 + -1 + iVar11) >>
                         (bVar9 & 0x1f))) + 0x20;
    lVar10 = 1;
    local_13c = (iVar15 - ((int)((iVar4 >> (bVar9 & 0x1f) & 1U) + iVar4 + iVar11 + -1) >>
                          (bVar9 & 0x1f))) + 0x20;
    iVar5 = -1;
    local_a8 = local_13c;
    uVar25 = local_e0[0];
    uVar28 = local_e0[0];
    if (1 < DAT_14c707900) {
      lVar10 = 9;
      iVar5 = -9;
      uVar53 = (uint)(local_fc < (int)local_e0[0]) * local_fc |
               (local_fc >= (int)local_e0[0]) * local_e0[0];
      uVar58 = (uint)(local_f8 < (int)local_e0[0]) * local_f8 |
               (local_f8 >= (int)local_e0[0]) * local_e0[0];
      uVar63 = (uint)(local_f0 < (int)local_e0[0]) * local_f0 |
               (local_f0 >= (int)local_e0[0]) * local_e0[0];
      uVar68 = (uint)(local_f4 < (int)local_e0[0]) * local_f4 |
               (local_f4 >= (int)local_e0[0]) * local_e0[0];
      uVar47 = (uint)((int)local_e0[0] < local_fc) * local_fc |
               ((int)local_e0[0] >= local_fc) * local_e0[0];
      uVar48 = (uint)((int)local_e0[0] < local_f8) * local_f8 |
               ((int)local_e0[0] >= local_f8) * local_e0[0];
      uVar49 = (uint)((int)local_e0[0] < local_f0) * local_f0 |
               ((int)local_e0[0] >= local_f0) * local_e0[0];
      uVar50 = (uint)((int)local_e0[0] < local_f4) * local_f4 |
               ((int)local_e0[0] >= local_f4) * local_e0[0];
      uVar25 = (uint)((int)local_e0[0] < local_cc) * local_cc |
               ((int)local_e0[0] >= local_cc) * local_e0[0];
      uVar28 = (uint)((int)local_e0[0] < local_148) * local_148 |
               ((int)local_e0[0] >= local_148) * local_e0[0];
      uVar30 = (uint)((int)local_e0[0] < local_144) * local_144 |
               ((int)local_e0[0] >= local_144) * local_e0[0];
      uVar33 = (uint)((int)local_e0[0] < local_ec) * local_ec |
               ((int)local_e0[0] >= local_ec) * local_e0[0];
      uVar36 = (uint)(local_cc < (int)local_e0[0]) * local_cc |
               (local_cc >= (int)local_e0[0]) * local_e0[0];
      uVar39 = (uint)(local_148 < (int)local_e0[0]) * local_148 |
               (local_148 >= (int)local_e0[0]) * local_e0[0];
      uVar42 = (uint)(local_144 < (int)local_e0[0]) * local_144 |
               (local_144 >= (int)local_e0[0]) * local_e0[0];
      uVar45 = (uint)(local_ec < (int)local_e0[0]) * local_ec |
               (local_ec >= (int)local_e0[0]) * local_e0[0];
      uVar25 = ((int)uVar47 < (int)uVar25) * uVar25 | ((int)uVar47 >= (int)uVar25) * uVar47;
      uVar28 = ((int)uVar48 < (int)uVar28) * uVar28 | ((int)uVar48 >= (int)uVar28) * uVar48;
      uVar30 = ((int)uVar49 < (int)uVar30) * uVar30 | ((int)uVar49 >= (int)uVar30) * uVar49;
      uVar33 = ((int)uVar50 < (int)uVar33) * uVar33 | ((int)uVar50 >= (int)uVar33) * uVar50;
      uVar36 = ((int)uVar36 < (int)uVar53) * uVar36 | ((int)uVar36 >= (int)uVar53) * uVar53;
      uVar39 = ((int)uVar39 < (int)uVar58) * uVar39 | ((int)uVar39 >= (int)uVar58) * uVar58;
      uVar42 = ((int)uVar42 < (int)uVar63) * uVar42 | ((int)uVar42 >= (int)uVar63) * uVar63;
      uVar45 = ((int)uVar45 < (int)uVar68) * uVar45 | ((int)uVar45 >= (int)uVar68) * uVar68;
      uVar25 = ((int)uVar25 < (int)uVar30) * uVar30 | ((int)uVar25 >= (int)uVar30) * uVar25;
      uVar28 = ((int)uVar28 < (int)uVar33) * uVar33 | ((int)uVar28 >= (int)uVar33) * uVar28;
      uVar25 = ((int)uVar25 < (int)uVar28) * uVar28 | ((int)uVar25 >= (int)uVar28) * uVar25;
      uVar28 = ((int)uVar42 < (int)uVar36) * uVar42 | ((int)uVar42 >= (int)uVar36) * uVar36;
      uVar30 = ((int)uVar45 < (int)uVar39) * uVar45 | ((int)uVar45 >= (int)uVar39) * uVar39;
      uVar28 = ((int)uVar30 < (int)uVar28) * uVar30 | ((int)uVar30 >= (int)uVar28) * uVar28;
    }
    puVar17 = local_e0 + lVar10;
    uVar19 = (ulonglong)(iVar5 + 0xf);
    do {
      uVar30 = *puVar17;
      puVar17 = puVar17 + 1;
      uVar33 = uVar30;
      if ((int)uVar28 <= (int)uVar30) {
        uVar33 = uVar28;
      }
      if ((int)uVar30 <= (int)uVar25) {
        uVar30 = uVar25;
      }
      uVar25 = uVar30;
      uVar19 = uVar19 - 1;
      uVar28 = uVar33;
    } while (uVar19 != 0);
  } while (((int)uVar33 < 0) || (0x3f < (int)uVar25));
  if ((uVar33 == 0x20) && ((uVar25 == 0x20 && (param_3 != '\0')))) {
    param_2[1] = (char)local_a0[0];
    *param_2 = (char)(local_a0[0] >> 8);
    param_2[2] = 0xfc;
  }
  else {
    if (param_4 != '\0') {
      local_a0[0] = (short)local_130 - ((short)local_134 << (bVar8 & 0x1f));
    }
    *param_2 = (char)(local_a0[0] >> 8);
    param_2[2] = (byte)((int)local_e0[0] >> 4) | bVar8 << 2;
    param_2[3] = (byte)(local_fc >> 2) | (char)local_e0[0] << 4;
    param_2[4] = (char)local_fc << 6 | (byte)local_f8;
    param_2[1] = (char)local_a0[0];
    param_2[5] = (byte)(local_f4 >> 4) | (char)local_f0 << 2;
    param_2[6] = (byte)(local_cc >> 2) | (char)local_f4 << 4;
    param_2[8] = (byte)(local_ec >> 4) | (char)local_144 << 2;
    param_2[9] = (byte)(local_bc >> 2) | (char)local_ec << 4;
    param_2[7] = (char)local_cc << 6 | (byte)local_148;
    param_2[0xb] = (byte)(local_140 >> 4) | (char)local_14c << 2;
    param_2[0xc] = (byte)(local_ac >> 2) | (char)local_140 << 4;
    param_2[0xd] = (char)local_ac << 6 | (byte)local_13c;
    param_2[10] = (char)local_bc << 6 | (byte)local_150;
  }
  local_158 = param_3;
  local_157 = param_4;
  local_e8 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_80 ^ (ulonglong)&local_158);
}



// FUNCTION 145218c40 FUN_145218c40 body=59 status=ok
// SIG undefined FUN_145218c40(void)

void FUN_145218c40(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error decompressing data (input data are shorter than expected).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 145218c80 FUN_145218c80 body=59 status=ok
// SIG undefined FUN_145218c80(void)

void FUN_145218c80(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error decompressing data (input data are longer than expected).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 145218cc0 FUN_145218cc0 body=107 status=ok
// SIG undefined FUN_145218cc0(void)

void FUN_145218cc0(ulonglong param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = param_2;
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff), uVar3 = SUB168(auVar2 % auVar1,0),
     SUB168(auVar2 / auVar1,0) < param_2)) {
    FUN_144e47140(local_78,"Integer multiplication overflow.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5240);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98,uVar3);
}



// FUNCTION 145218d40 FUN_145218d40 body=443 status=ok
// SIG undefined FUN_145218d40(void)

void FUN_145218d40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined8 *local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = param_1;
  FUN_144e497d0();
  *param_1 = Imf_3_2::PizCompressor::vftable;
  *(int *)(param_1 + 2) = (int)param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  *(int *)(param_1 + 3) = (int)param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar6 = FUN_144b67b80(param_2);
  param_1[7] = uVar6;
  param_1[8] = 0;
  uVar7 = FUN_145218cc0(param_3,param_4);
  uVar8 = FUN_145218cc0(param_3,param_4);
  if (uVar8 < 0xfffffffffffee000) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar7 >> 1;
    uVar6 = SUB168(ZEXT816(2) * auVar1,0);
    if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    uVar6 = FUN_144a7d36f(uVar6);
    param_1[4] = uVar6;
    uVar6 = FUN_144a7d36f(uVar8 + 0x12000);
    param_1[5] = uVar6;
    uVar6 = FUN_144b67b80(param_1[1]);
    bVar3 = true;
    FUN_144b65f20(uVar6,&local_c8);
    plVar9 = (longlong *)FUN_144b65f40(uVar6,local_c0);
    if (local_c8 != *plVar9) {
      do {
        *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
        bVar4 = false;
        if (*(int *)(local_c8 + 0x11c) == 1) {
          bVar4 = bVar3;
        }
        bVar3 = bVar4;
        FUN_144b663b0(&local_c8);
        plVar9 = (longlong *)FUN_144b65f40(uVar6,local_c0);
      } while (local_c8 != *plVar9);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)*(int *)(param_1 + 6);
    uVar6 = SUB168(ZEXT816(0x20) * auVar2,0);
    if (SUB168(ZEXT816(0x20) * auVar2,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    uVar6 = FUN_144a7d36f(uVar6);
    param_1[8] = uVar6;
    puVar10 = (undefined4 *)FUN_144b67b20(param_2);
    *(undefined4 *)(param_1 + 9) = *puVar10;
    *(undefined4 *)((longlong)param_1 + 0x4c) = puVar10[2];
    *(undefined4 *)(param_1 + 10) = puVar10[3];
    if (bVar3) {
      iVar5 = FUN_144e66f70(1);
      if (iVar5 == 2) {
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
  }
  FUN_144e47140(local_a8,"Integer addition overflow.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5240);
}



// FUNCTION 145218f10 FUN_145218f10 body=4 status=ok
// SIG undefined FUN_145218f10(void)

undefined4 FUN_145218f10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 145218f20 FUN_145218f20 body=4 status=ok
// SIG undefined FUN_145218f20(void)

undefined4 FUN_145218f20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// FUNCTION 145218f30 FUN_145218f30 body=122 status=ok
// SIG undefined FUN_145218f30(void)

void FUN_145218f30(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = (**(code **)(*param_1 + 8))();
  local_c = param_4 + -1 + local_c;
  local_18 = (undefined4)param_1[9];
  local_10 = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_14 = param_4;
  FUN_1452190b0(param_1,param_2,param_3,&local_18,param_5);
  return;
}



// FUNCTION 145218fb0 FUN_145218fb0 body=60 status=ok
// SIG undefined FUN_145218fb0(void)

void FUN_145218fb0(void)

{
  FUN_1452190b0();
  return;
}



// FUNCTION 145218ff0 FUN_145218ff0 body=122 status=ok
// SIG undefined FUN_145218ff0(void)

void FUN_145218ff0(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = (**(code **)(*param_1 + 8))();
  local_c = param_4 + -1 + local_c;
  local_18 = (undefined4)param_1[9];
  local_10 = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_14 = param_4;
  FUN_145219630(param_1,param_2,param_3,&local_18,param_5);
  return;
}



// FUNCTION 145219070 FUN_145219070 body=60 status=ok
// SIG undefined FUN_145219070(void)

void FUN_145219070(void)

{
  FUN_145219630();
  return;
}



// FUNCTION 1452190b0 FUN_1452190b0 body=1397 status=ok
// SIG undefined FUN_1452190b0(void)

int FUN_1452190b0(longlong param_1,undefined2 *param_2,int param_3,uint *param_4,undefined8 *param_5
                 )

{
  undefined1 *puVar1;
  size_t _Size;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  byte *_Dst;
  void *_Dst_00;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined2 uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  void *pvVar23;
  longlong local_50;
  longlong local_48;
  byte *local_40;
  
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x28);
    iVar4 = 0;
  }
  else {
    uVar15 = (ulonglong)*param_4;
    uVar12 = param_4[1];
    uVar9 = *(uint *)(param_1 + 0x50);
    if ((int)param_4[3] <= (int)*(uint *)(param_1 + 0x50)) {
      uVar9 = param_4[3];
    }
    uVar20 = *(uint *)(param_1 + 0x4c);
    if ((int)param_4[2] <= (int)*(uint *)(param_1 + 0x4c)) {
      uVar20 = param_4[2];
    }
    local_48 = *(longlong *)(param_1 + 0x20);
    FUN_144b65f20(*(undefined8 *)(param_1 + 0x38),&local_50);
    plVar6 = (longlong *)FUN_144b65f40(*(undefined8 *)(param_1 + 0x38));
    lVar22 = 0;
    if (local_50 != *plVar6) {
      do {
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar22);
        *plVar6 = local_48;
        plVar6[1] = local_48;
        uVar3 = FUN_144e67000(*(undefined4 *)(local_50 + 0x120),uVar15 & 0xffffffff,uVar20);
        *(undefined4 *)(plVar6 + 2) = uVar3;
        uVar3 = FUN_144e67000(*(undefined4 *)(local_50 + 0x124),uVar12,uVar9);
        *(undefined4 *)((longlong)plVar6 + 0x14) = uVar3;
        *(undefined4 *)(plVar6 + 3) = *(undefined4 *)(local_50 + 0x124);
        iVar4 = FUN_144e66f70(*(undefined4 *)(local_50 + 0x11c));
        iVar5 = FUN_144e66f70(1);
        *(int *)((longlong)plVar6 + 0x1c) = iVar4 / iVar5;
        local_48 = local_48 +
                   (longlong)((iVar4 / iVar5) * *(int *)((longlong)plVar6 + 0x14) * (int)plVar6[2])
                   * 2;
        FUN_144b663b0(&local_50,(longlong)iVar4 % (longlong)iVar5 & 0xffffffff);
        lVar22 = lVar22 + 0x20;
        plVar6 = (longlong *)FUN_144b65f40(*(undefined8 *)(param_1 + 0x38));
      } while (local_50 != *plVar6);
    }
    if (*(int *)(param_1 + 0x14) == 1) {
      for (; (int)uVar12 <= (int)uVar9; uVar12 = uVar12 + 1) {
        uVar15 = 0;
        uVar21 = 0;
        if (0 < *(int *)(param_1 + 0x30)) {
          do {
            lVar22 = *(longlong *)(param_1 + 0x40) + uVar15;
            uVar20 = *(uint *)(lVar22 + 0x18);
            if ((int)uVar12 < 0) {
              if ((int)uVar20 < 0) {
                iVar4 = ~uVar20 - uVar12;
              }
              else {
                iVar4 = (uVar20 - uVar12) + -1;
              }
              iVar4 = -(iVar4 / (int)uVar20);
            }
            else {
              iVar4 = (int)uVar12 / (int)uVar20;
            }
            if (uVar12 == iVar4 * uVar20) {
              for (iVar4 = *(int *)(lVar22 + 0x1c) * *(int *)(lVar22 + 0x10); 0 < iVar4;
                  iVar4 = iVar4 + -1) {
                **(undefined2 **)(lVar22 + 8) = *param_2;
                *(longlong *)(lVar22 + 8) = *(longlong *)(lVar22 + 8) + 2;
                param_2 = param_2 + 1;
              }
            }
            uVar20 = (int)uVar21 + 1;
            uVar15 = uVar15 + 0x20;
            uVar21 = (ulonglong)uVar20;
          } while ((int)uVar20 < *(int *)(param_1 + 0x30));
        }
      }
    }
    else {
      for (; (int)uVar12 <= (int)uVar9; uVar12 = uVar12 + 1) {
        uVar21 = 0;
        uVar15 = uVar21;
        if (0 < *(int *)(param_1 + 0x30)) {
          do {
            lVar22 = *(longlong *)(param_1 + 0x40) + uVar15;
            uVar20 = *(uint *)(lVar22 + 0x18);
            if ((int)uVar12 < 0) {
              if ((int)uVar20 < 0) {
                iVar4 = ~uVar20 - uVar12;
              }
              else {
                iVar4 = (uVar20 - uVar12) + -1;
              }
              iVar4 = -(iVar4 / (int)uVar20);
            }
            else {
              iVar4 = (int)uVar12 / (int)uVar20;
            }
            if (uVar12 == iVar4 * uVar20) {
              lVar14 = (longlong)(*(int *)(lVar22 + 0x1c) * *(int *)(lVar22 + 0x10));
              _Size = lVar14 * 2;
              memcpy(*(void **)(lVar22 + 8),param_2,_Size);
              param_2 = param_2 + lVar14;
              *(longlong *)(lVar22 + 8) = *(longlong *)(lVar22 + 8) + _Size;
            }
            uVar20 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar20;
            uVar15 = uVar15 + 0x20;
          } while ((int)uVar20 < *(int *)(param_1 + 0x30));
        }
      }
    }
    uVar21 = 0;
    _Dst = (byte *)FUN_144a7d36f(0x2000);
    local_40 = _Dst;
    memset(_Dst,0,0x2000);
    lVar14 = local_48;
    lVar22 = *(longlong *)(param_1 + 0x20);
    iVar4 = (int)(local_48 - lVar22 >> 1);
    uVar15 = uVar21;
    if (0 < iVar4) {
      do {
        uVar8 = *(ushort *)(lVar22 + uVar15 * 2);
        uVar2 = uVar8 >> 3;
        _Dst[uVar2] = _Dst[uVar2] | (byte)(1 << (uVar8 & 7));
        uVar15 = uVar15 + 1;
      } while ((longlong)uVar15 < (longlong)iVar4);
    }
    *_Dst = *_Dst & 0xfe;
    uVar12 = 0x1fff;
    uVar15 = 0;
    pbVar16 = _Dst;
    do {
      iVar4 = (int)uVar15;
      if (*pbVar16 != 0) {
        uVar8 = (ushort)uVar15;
        if ((int)uVar12 <= iVar4) {
          uVar8 = (ushort)uVar12;
        }
        uVar12 = (uint)uVar8;
        if ((int)uVar21 < iVar4) {
          uVar21 = uVar15 & 0xffff;
        }
      }
      uVar15 = (ulonglong)(iVar4 + 1U);
      pbVar16 = pbVar16 + 1;
    } while ((int)(iVar4 + 1U) < 0x2000);
    _Dst_00 = (void *)FUN_144a7d36f(0x20000);
    pvVar23 = _Dst_00;
    memset(_Dst_00,0,0x20000);
    uVar19 = 0;
    bVar7 = 1;
    uVar15 = uVar19;
    uVar13 = uVar19;
    uVar17 = uVar19;
    uVar18 = uVar19;
    do {
      if (((int)uVar15 == 0) || ((_Dst[uVar17 >> 3] & bVar7) != 0)) {
        uVar11 = (undefined2)uVar13;
        uVar13 = (ulonglong)((int)uVar13 + 1);
      }
      else {
        uVar11 = 0;
      }
      *(undefined2 *)(uVar18 + (longlong)_Dst_00) = uVar11;
      uVar9 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar9;
      uVar17 = uVar17 + 1;
      bVar7 = bVar7 << 1 | (char)bVar7 < '\0';
      uVar18 = uVar18 + 2;
    } while ((int)uVar9 < 0x10000);
    lVar22 = *(longlong *)(param_1 + 0x20);
    iVar4 = (int)(lVar14 - lVar22 >> 1);
    uVar15 = uVar19;
    if (0 < iVar4) {
      do {
        *(undefined2 *)(lVar22 + uVar15 * 2) =
             *(undefined2 *)((longlong)_Dst_00 + (ulonglong)*(ushort *)(lVar22 + uVar15 * 2) * 2);
        uVar15 = uVar15 + 1;
      } while ((longlong)uVar15 < (longlong)iVar4);
    }
    puVar1 = *(undefined1 **)(param_1 + 0x28);
    *puVar1 = (char)uVar12;
    puVar1[1] = (char)(uVar12 >> 8);
    puVar1[2] = (char)uVar21;
    puVar1[3] = (char)(uVar21 >> 8);
    pbVar16 = puVar1 + 4;
    if ((ushort)uVar12 <= (ushort)uVar21) {
      pbVar10 = _Dst + uVar12;
      for (iVar4 = ((int)uVar21 - uVar12) + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pbVar16 = *pbVar10;
        pbVar16 = pbVar16 + 1;
        pbVar10 = pbVar10 + 1;
      }
    }
    if (0 < *(int *)(param_1 + 0x30)) {
      local_50 = 0;
      do {
        iVar5 = 0;
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x40) + local_50);
        iVar4 = *(int *)((longlong)plVar6 + 0x1c);
        if (0 < iVar4) {
          do {
            FUN_14548a320(*plVar6 + (longlong)iVar5 * 2,(int)plVar6[2],iVar4,
                          *(undefined4 *)((longlong)plVar6 + 0x14),iVar4 * (int)plVar6[2],
                          (short)uVar13 + -1,pvVar23);
            iVar5 = iVar5 + 1;
            iVar4 = *(int *)((longlong)plVar6 + 0x1c);
          } while (iVar5 < iVar4);
        }
        uVar12 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar12;
        local_50 = local_50 + 0x20;
        _Dst = local_40;
      } while ((int)uVar12 < *(int *)(param_1 + 0x30));
    }
    pbVar16[0] = 0;
    pbVar16[1] = 0;
    pbVar16[2] = 0;
    pbVar16[3] = 0;
    iVar4 = FUN_14521aee0(*(longlong *)(param_1 + 0x20),
                          local_48 - *(longlong *)(param_1 + 0x20) >> 1,pbVar16 + 4);
    *pbVar16 = (byte)iVar4;
    pbVar16[1] = (byte)((uint)iVar4 >> 8);
    pbVar16[2] = (byte)((uint)iVar4 >> 0x10);
    pbVar16[3] = (byte)((uint)iVar4 >> 0x18);
    *param_5 = *(undefined8 *)(param_1 + 0x28);
    iVar4 = ((int)(pbVar16 + 4) - *(int *)(param_1 + 0x28)) + iVar4;
    thunk_FUN_1400020a8(_Dst_00);
    thunk_FUN_1400020a8(_Dst);
  }
  return iVar4;
}



// FUNCTION 145219630 FUN_145219630 body=1590 status=ok
// SIG undefined FUN_145219630(void)

void FUN_145219630(longlong param_1,ushort *param_2,int param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined2 uVar1;
  int iVar2;
  size_t _Size;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ushort *_Dst;
  ushort *_Dst_00;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ushort *puVar12;
  longlong lVar13;
  ushort *puVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  ushort *puVar20;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined2 local_f0;
  int local_e8;
  longlong local_e0;
  int local_d8;
  longlong local_d0;
  ushort *local_c8;
  ushort *local_c0;
  undefined8 *local_b0;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b0 = param_5;
  puVar12 = (ushort *)((longlong)param_3 + (longlong)param_2);
  local_c8 = puVar12;
  local_c0 = param_2;
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    local_e8 = *param_4;
    iVar19 = param_4[1];
    iVar6 = *(int *)(param_1 + 0x50);
    if ((int)param_4[3] <= *(int *)(param_1 + 0x50)) {
      iVar6 = param_4[3];
    }
    iVar15 = *(int *)(param_1 + 0x4c);
    if ((int)param_4[2] <= *(int *)(param_1 + 0x4c)) {
      iVar15 = param_4[2];
    }
    lVar10 = *(longlong *)(param_1 + 0x20);
    local_d8 = iVar6;
    local_d0 = lVar10;
    FUN_144b65f20(*(undefined8 *)(param_1 + 0x38),&local_e0);
    plVar8 = (longlong *)FUN_144b65f40(*(undefined8 *)(param_1 + 0x38));
    iVar2 = local_e8;
    lVar13 = 0;
    lVar11 = local_d0;
    if (local_e0 != *plVar8) {
      do {
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar13);
        *plVar8 = lVar10;
        plVar8[1] = lVar10;
        uVar5 = FUN_144e67000(*(undefined4 *)(local_e0 + 0x120),iVar2,iVar15);
        *(undefined4 *)(plVar8 + 2) = uVar5;
        uVar5 = FUN_144e67000(*(undefined4 *)(local_e0 + 0x124),iVar19,iVar6);
        *(undefined4 *)((longlong)plVar8 + 0x14) = uVar5;
        *(undefined4 *)(plVar8 + 3) = *(undefined4 *)(local_e0 + 0x124);
        iVar6 = FUN_144e66f70(*(undefined4 *)(local_e0 + 0x11c));
        iVar7 = FUN_144e66f70(1);
        *(int *)((longlong)plVar8 + 0x1c) = iVar6 / iVar7;
        lVar10 = lVar10 + (longlong)
                          ((iVar6 / iVar7) * *(int *)((longlong)plVar8 + 0x14) * (int)plVar8[2]) * 2
        ;
        FUN_144b663b0(&local_e0,(longlong)iVar6 % (longlong)iVar7 & 0xffffffff);
        lVar13 = lVar13 + 0x20;
        plVar8 = (longlong *)FUN_144b65f40(*(undefined8 *)(param_1 + 0x38));
        puVar12 = local_c8;
        param_2 = local_c0;
        iVar6 = local_d8;
        lVar11 = lVar10;
      } while (local_e0 != *plVar8);
    }
    local_d0 = lVar11;
    _Dst = (ushort *)FUN_144a7d36f(0x2000);
    local_c8 = _Dst;
    memset(_Dst,0,0x2000);
    if (puVar12 < param_2 + 2) {
      FUN_144e41060(local_a8,"PIZ compressed data too short");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d51d8);
    }
    uVar3 = *param_2;
    puVar20 = param_2 + 2;
    uVar4 = param_2[1];
    if (0x1fff < uVar4) {
      FUN_144e41060(local_a8,"Error in header for PIZ-compressed data (invalid bitmap size).");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d51d8);
    }
    if (uVar3 <= uVar4) {
      iVar6 = ((uint)uVar4 - (uint)uVar3) + 1;
      if (puVar12 < (ushort *)((longlong)iVar6 + (longlong)puVar20)) {
        FUN_144e41060(local_a8,"PIZ compressed data too short");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d51d8);
      }
      puVar9 = (undefined1 *)((ulonglong)uVar3 + (longlong)_Dst);
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = (char)*puVar20;
        puVar9 = puVar9 + 1;
        puVar20 = (ushort *)((longlong)puVar20 + 1);
      }
    }
    _Dst_00 = (ushort *)FUN_144a7d36f(0x20000);
    local_c0 = _Dst_00;
    memset(_Dst_00,0,0x20000);
    iVar15 = 0;
    iVar6 = 0;
    uVar18 = 0;
    puVar14 = _Dst_00;
    do {
      if ((iVar6 == 0) ||
         ((*(byte *)((uVar18 >> 3) + (longlong)_Dst) & (byte)(1 << ((byte)iVar6 & 7))) != 0)) {
        *puVar14 = (ushort)iVar6;
        iVar15 = iVar15 + 1;
        puVar14 = puVar14 + 1;
      }
      iVar6 = iVar6 + 1;
      uVar18 = uVar18 + 1;
    } while (iVar6 < 0x10000);
    local_e8 = iVar15 + -1;
    if (iVar15 < 0x10000) {
      puVar14 = _Dst_00 + iVar15;
      for (lVar10 = (longlong)(0x10000 - iVar15); lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
    }
    puVar14 = puVar20 + 2;
    if (puVar12 < puVar14) {
      FUN_144e41060(local_a8,"PIZ compressed data too short");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d51d8);
    }
    if ((puVar12 < (ushort *)((longlong)*(int *)puVar20 + (longlong)puVar14)) ||
       (*(int *)puVar20 < 0)) {
      FUN_144e41060(local_a8,"Error in header for PIZ-compressed data (invalid array length).");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d51d8);
    }
    FUN_14521b090(puVar14);
    iVar6 = local_e8;
    iVar15 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      local_e0 = 0;
      do {
        iVar7 = 0;
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0x40) + local_e0);
        iVar2 = *(int *)((longlong)plVar8 + 0x1c);
        if (0 < iVar2) {
          do {
            local_f8 = iVar2 * (int)plVar8[2];
            local_f0 = (undefined2)iVar6;
            FUN_14548a6f0(*plVar8 + (longlong)iVar7 * 2);
            iVar7 = iVar7 + 1;
            iVar2 = *(int *)((longlong)plVar8 + 0x1c);
          } while (iVar7 < iVar2);
        }
        iVar15 = iVar15 + 1;
        local_e0 = local_e0 + 0x20;
        _Dst = local_c8;
      } while (iVar15 < *(int *)(param_1 + 0x30));
    }
    lVar11 = 0;
    lVar10 = *(longlong *)(param_1 + 0x20);
    iVar6 = (int)(local_d0 - lVar10 >> 1);
    if (0 < iVar6) {
      do {
        *(ushort *)(lVar10 + lVar11 * 2) = _Dst_00[*(ushort *)(lVar10 + lVar11 * 2)];
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar6);
    }
    puVar9 = *(undefined1 **)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x14) == 1) {
      for (; iVar19 <= local_d8; iVar19 = iVar19 + 1) {
        uVar16 = 0;
        uVar18 = uVar16;
        if (0 < *(int *)(param_1 + 0x30)) {
          do {
            lVar10 = *(longlong *)(param_1 + 0x40) + uVar18;
            uVar17 = *(uint *)(lVar10 + 0x18);
            if (iVar19 < 0) {
              if ((int)uVar17 < 0) {
                iVar6 = ~uVar17 - iVar19;
              }
              else {
                iVar6 = (uVar17 - iVar19) + -1;
              }
              iVar6 = -(iVar6 / (int)uVar17);
            }
            else {
              iVar6 = iVar19 / (int)uVar17;
            }
            if (iVar19 == iVar6 * uVar17) {
              for (iVar6 = *(int *)(lVar10 + 0x1c) * *(int *)(lVar10 + 0x10); 0 < iVar6;
                  iVar6 = iVar6 + -1) {
                uVar1 = **(undefined2 **)(lVar10 + 8);
                *puVar9 = (char)uVar1;
                puVar9[1] = (char)((ushort)uVar1 >> 8);
                puVar9 = puVar9 + 2;
                *(longlong *)(lVar10 + 8) = *(longlong *)(lVar10 + 8) + 2;
              }
            }
            uVar17 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar17;
            uVar18 = uVar18 + 0x20;
          } while ((int)uVar17 < *(int *)(param_1 + 0x30));
        }
      }
    }
    else {
      iVar6 = local_d8;
      if (iVar19 <= local_d8) {
        do {
          iVar15 = 0;
          if (0 < *(int *)(param_1 + 0x30)) {
            local_d0 = 0;
            do {
              lVar10 = *(longlong *)(param_1 + 0x40) + local_d0;
              uVar17 = *(uint *)(lVar10 + 0x18);
              if (iVar19 < 0) {
                if ((int)uVar17 < 0) {
                  iVar6 = ~uVar17 - iVar19;
                }
                else {
                  iVar6 = (uVar17 - iVar19) + -1;
                }
                iVar6 = -(iVar6 / (int)uVar17);
              }
              else {
                iVar6 = iVar19 / (int)uVar17;
              }
              if (iVar19 == iVar6 * uVar17) {
                _Size = (longlong)(*(int *)(lVar10 + 0x1c) * *(int *)(lVar10 + 0x10)) * 2;
                memcpy(puVar9,*(void **)(lVar10 + 8),_Size);
                puVar9 = puVar9 + _Size;
                *(longlong *)(lVar10 + 8) = *(longlong *)(lVar10 + 8) + _Size;
              }
              iVar15 = iVar15 + 1;
              local_d0 = local_d0 + 0x20;
              iVar6 = local_d8;
            } while (iVar15 < *(int *)(param_1 + 0x30));
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 <= iVar6);
      }
    }
    *local_b0 = *(undefined8 *)(param_1 + 0x28);
    thunk_FUN_1400020a8(_Dst_00);
    thunk_FUN_1400020a8(_Dst);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
}



// FUNCTION 145219c90 FUN_145219c90 body=92 status=ok
// SIG undefined FUN_145219c90(void)

undefined8 * FUN_145219c90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::PizCompressor::vftable;
  thunk_FUN_1400020a8(param_1[4]);
  thunk_FUN_1400020a8(param_1[5]);
  thunk_FUN_1400020a8(param_1[8]);
  FUN_144e497f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 145219d10 FUN_145219d10 body=230 status=ok
// SIG undefined FUN_145219d10(void)

void FUN_145219d10(undefined8 *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  FUN_144e497d0();
  *param_1 = Imf_3_2::Pxr24Compressor::vftable;
  *(int *)(param_1 + 2) = (int)param_3;
  *(int *)((longlong)param_1 + 0x14) = (int)param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar2 = FUN_144b67b80(param_2);
  param_1[5] = uVar2;
  if ((param_3 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_4)) {
    FUN_144e47140(local_98,"Integer multiplication overflow.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d5240);
  }
  uVar2 = FUN_14521ad00(param_4 * param_3);
  uVar3 = FUN_144a7d36f(param_4 * param_3);
  param_1[3] = uVar3;
  uVar2 = FUN_144a7d36f(uVar2);
  param_1[4] = uVar2;
  puVar4 = (undefined4 *)FUN_144b67b20(param_2);
  *(undefined4 *)(param_1 + 6) = *puVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = puVar4[2];
  *(undefined4 *)(param_1 + 7) = puVar4[3];
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
}



// FUNCTION 145219e10 FUN_145219e10 body=4 status=ok
// SIG undefined FUN_145219e10(void)

undefined4 FUN_145219e10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// FUNCTION 145219e20 FUN_145219e20 body=3 status=ok
// SIG undefined FUN_145219e20(void)

undefined8 FUN_145219e20(void)

{
  return 0;
}



// FUNCTION 145219e30 FUN_145219e30 body=60 status=ok
// SIG undefined FUN_145219e30(void)

void FUN_145219e30(void)

{
  FUN_145219f30();
  return;
}



// FUNCTION 145219e70 FUN_145219e70 body=60 status=ok
// SIG undefined FUN_145219e70(void)

void FUN_145219e70(void)

{
  FUN_145219f30();
  return;
}



// FUNCTION 145219eb0 FUN_145219eb0 body=60 status=ok
// SIG undefined FUN_145219eb0(void)

void FUN_145219eb0(void)

{
  FUN_14521a330();
  return;
}



// FUNCTION 145219ef0 FUN_145219ef0 body=60 status=ok
// SIG undefined FUN_145219ef0(void)

void FUN_145219ef0(void)

{
  FUN_14521a330();
  return;
}



// FUNCTION 145219f30 FUN_145219f30 body=1011 status=ok
// SIG undefined FUN_145219f30(void)

void FUN_145219f30(longlong param_1,uint *param_2,int param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined8 *local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_b8 = param_5;
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    puVar8 = *(undefined1 **)(param_1 + 0x18);
    uVar10 = *param_4;
    iVar4 = param_4[2];
    if (*(int *)(param_1 + 0x34) < (int)param_4[2]) {
      iVar4 = *(int *)(param_1 + 0x34);
    }
    iVar16 = param_4[1];
    local_d8 = param_4[3];
    if (*(int *)(param_1 + 0x38) < (int)param_4[3]) {
      local_d8 = *(int *)(param_1 + 0x38);
    }
    local_e8 = uVar10;
    if (iVar16 <= local_d8) {
      do {
        FUN_144b65f20(*(undefined8 *)(param_1 + 0x28),&local_d0);
        plVar5 = (longlong *)FUN_144b65f40(*(undefined8 *)(param_1 + 0x28),local_c0);
        puVar7 = puVar8;
        if (local_d0 != *plVar5) {
          do {
            lVar9 = local_d0;
            uVar11 = *(uint *)(local_d0 + 0x124);
            if (iVar16 < 0) {
              if ((int)uVar11 < 0) {
                iVar6 = ~uVar11 - iVar16;
              }
              else {
                iVar6 = (uVar11 - iVar16) + -1;
              }
              iVar6 = -(iVar6 / (int)uVar11);
            }
            else {
              iVar6 = iVar16 / (int)uVar11;
            }
            puVar8 = puVar7;
            if (iVar16 == iVar6 * uVar11) {
              uVar3 = FUN_144e67000(*(undefined4 *)(local_d0 + 0x120),uVar10,iVar4);
              uVar14 = (ulonglong)uVar3;
              uVar11 = 0;
              iVar6 = *(int *)(lVar9 + 0x11c);
              uVar10 = local_e8;
              if (iVar6 == 0) {
                lVar9 = (longlong)(int)uVar3;
                puVar13 = puVar7 + lVar9 * 2;
                puVar8 = puVar13 + lVar9 + lVar9;
                if (0 < (int)uVar3) {
                  puVar15 = puVar13;
                  puVar12 = puVar13 + lVar9;
                  do {
                    puVar1 = puVar15 + 1;
                    local_e0 = *param_2;
                    param_2 = param_2 + 1;
                    iVar6 = local_e0 - uVar11;
                    puVar1[(longlong)(puVar7 + (-1 - (longlong)puVar13))] =
                         (char)((uint)iVar6 >> 0x18);
                    puVar1[(longlong)(puVar7 + (lVar9 - (longlong)puVar13) + -1)] =
                         (char)((uint)iVar6 >> 0x10);
                    *puVar15 = (char)((uint)iVar6 >> 8);
                    *puVar12 = (char)iVar6;
                    uVar14 = uVar14 - 1;
                    puVar15 = puVar1;
                    puVar12 = puVar12 + 1;
                    uVar11 = local_e0;
                  } while (uVar14 != 0);
                }
              }
              else if (iVar6 == 1) {
                puVar13 = puVar7 + (int)uVar3;
                puVar8 = puVar13 + (int)uVar3;
                if (0 < (int)uVar3) {
                  do {
                    uVar3 = *param_2;
                    iVar6 = (ushort)uVar3 - uVar11;
                    param_2 = (uint *)((longlong)param_2 + 2);
                    *puVar7 = (char)((uint)iVar6 >> 8);
                    *puVar13 = (char)iVar6;
                    uVar14 = uVar14 - 1;
                    puVar13 = puVar13 + 1;
                    puVar7 = puVar7 + 1;
                    uVar11 = (uint)(ushort)uVar3;
                  } while (uVar14 != 0);
                }
              }
              else if (iVar6 == 2) {
                puVar13 = puVar7 + (int)uVar3;
                puVar15 = puVar13 + (int)uVar3;
                puVar8 = puVar15 + (int)uVar3;
                if (0 < (int)uVar3) {
                  do {
                    local_e4 = *param_2;
                    param_2 = param_2 + 1;
                    uVar3 = local_e4 & 0x7fffff;
                    if ((local_e4 & 0x7f800000) == 0x7f800000) {
                      if (uVar3 == 0) {
                        uVar3 = 0x7f8000;
                      }
                      else {
                        uVar3 = (uint)(uVar3 < 0x100) | (uVar3 | 0x7f800000) >> 8;
                      }
                    }
                    else {
                      uVar3 = (local_e4 & 0x80) + (local_e4 & 0x7fffffff) >> 8;
                      if (0x7f7fff < uVar3) {
                        uVar3 = (local_e4 & 0x7fffffff) >> 8;
                      }
                    }
                    uVar3 = (local_e4 & 0x80000000) >> 8 | uVar3;
                    iVar6 = uVar3 - uVar11;
                    *puVar7 = (char)((uint)iVar6 >> 0x10);
                    puVar7 = puVar7 + 1;
                    *puVar13 = (char)((uint)iVar6 >> 8);
                    puVar13 = puVar13 + 1;
                    *puVar15 = (char)iVar6;
                    puVar15 = puVar15 + 1;
                    uVar14 = uVar14 - 1;
                    uVar11 = uVar3;
                    local_dc = local_e4;
                  } while (uVar14 != 0);
                }
              }
            }
            FUN_144b663b0(&local_d0);
            plVar5 = (longlong *)FUN_144b65f40(*(undefined8 *)(param_1 + 0x28),local_c0);
            puVar7 = puVar8;
          } while (local_d0 != *plVar5);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 <= local_d8);
    }
    puVar2 = local_b8;
    lVar9 = (longlong)puVar8 - *(longlong *)(param_1 + 0x18);
    local_100 = FUN_14521ad00(lVar9);
    local_f8 = &local_c8;
    local_108 = *(undefined8 *)(param_1 + 0x20);
    local_c8 = local_100;
    iVar4 = FUN_14521ad50(0,0xffffffff,*(undefined8 *)(param_1 + 0x18),lVar9);
    if (iVar4 != 0) {
      FUN_144e408c0(local_a8,"Data compression (zlib) failed.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d53a8);
    }
    *puVar2 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
}



// FUNCTION 14521a330 FUN_14521a330 body=936 status=ok
// SIG undefined FUN_14521a330(void)

void FUN_14521a330(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  ulonglong *local_f0;
  undefined4 local_e8;
  ulonglong local_e0;
  int local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  undefined8 *local_c0;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = param_5;
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    local_f8 = (ulonglong)(*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10));
    local_f0 = &local_e0;
    local_e0 = local_f8;
    iVar5 = FUN_14521ae20(0,param_2,(longlong)param_3,*(undefined8 *)(param_1 + 0x18));
    if (iVar5 != 0) {
      FUN_144e41060(local_b8,"Data decompression (zlib) failed.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
    }
    puVar14 = *(undefined1 **)(param_1 + 0x18);
    puVar15 = *(undefined2 **)(param_1 + 0x20);
    iVar5 = param_4[2];
    if (*(int *)(param_1 + 0x34) < (int)param_4[2]) {
      iVar5 = *(int *)(param_1 + 0x34);
    }
    uVar4 = *param_4;
    local_d8 = param_4[3];
    if (*(int *)(param_1 + 0x38) < (int)param_4[3]) {
      local_d8 = *(int *)(param_1 + 0x38);
    }
    iVar18 = param_4[1];
    if (iVar18 <= local_d8) {
      do {
        FUN_144b65f20(*(undefined8 *)(param_1 + 0x28),&local_d0);
        plVar7 = (longlong *)FUN_144b65f40(*(undefined8 *)(param_1 + 0x28),local_c8);
        puVar13 = puVar14;
        if (local_d0 != *plVar7) {
          do {
            lVar9 = local_d0;
            uVar6 = *(uint *)(local_d0 + 0x124);
            if (iVar18 < 0) {
              if ((int)uVar6 < 0) {
                iVar8 = ~uVar6 - iVar18;
              }
              else {
                iVar8 = (uVar6 - iVar18) + -1;
              }
              uVar10 = (ulonglong)(uint)(iVar8 % (int)uVar6);
              iVar8 = -(iVar8 / (int)uVar6);
            }
            else {
              iVar8 = iVar18 / (int)uVar6;
              uVar10 = (longlong)iVar18 % (longlong)(int)uVar6 & 0xffffffff;
            }
            puVar14 = puVar13;
            if (iVar18 == iVar8 * uVar6) {
              uVar6 = FUN_144e67000(*(undefined4 *)(local_d0 + 0x120),uVar4,iVar5);
              uVar17 = (ulonglong)uVar6;
              uVar11 = 0;
              iVar8 = *(int *)(lVar9 + 0x11c);
              uVar10 = 0;
              if (iVar8 == 0) {
                lVar9 = (longlong)(int)uVar6;
                puVar16 = puVar13 + lVar9;
                puVar14 = puVar16 + lVar9 * 3;
                if (local_e0 < (ulonglong)((longlong)puVar14 - *(longlong *)(param_1 + 0x18))) {
LAB_14521a6b8:
                    /* WARNING: Subroutine does not return */
                  FUN_14521a750();
                }
                if (0 < (int)uVar6) {
                  lVar12 = (longlong)puVar13 - (longlong)puVar16;
                  do {
                    uVar2 = *puVar16;
                    puVar13 = puVar16 + lVar12;
                    puVar16 = puVar16 + 1;
                    uVar6 = (int)uVar11 +
                            CONCAT31(CONCAT21(CONCAT11(*puVar13,uVar2),puVar16[lVar9 + -1]),
                                     puVar16[lVar9 * 2 + -1]);
                    uVar11 = (ulonglong)uVar6;
                    local_e8._1_1_ = (undefined1)(uVar6 >> 8);
                    *(undefined1 *)((longlong)puVar15 + 1) = local_e8._1_1_;
                    local_e8._2_1_ = (undefined1)(uVar6 >> 0x10);
                    *(undefined1 *)(puVar15 + 1) = local_e8._2_1_;
                    local_e8._3_1_ = (undefined1)(uVar6 >> 0x18);
                    *(undefined1 *)((longlong)puVar15 + 3) = local_e8._3_1_;
                    *(char *)puVar15 = (char)uVar6;
                    puVar15 = puVar15 + 2;
                    uVar17 = uVar17 - 1;
                    uVar10 = uVar11;
                    local_e8 = uVar6;
                  } while (uVar17 != 0);
                }
              }
              else if (iVar8 == 1) {
                puVar16 = puVar13 + (int)uVar6;
                puVar14 = puVar16 + (int)uVar6;
                if (local_e0 < (ulonglong)((longlong)puVar14 - *(longlong *)(param_1 + 0x18)))
                goto LAB_14521a6b8;
                if (0 < (int)uVar6) {
                  do {
                    uVar2 = *puVar13;
                    puVar13 = puVar13 + 1;
                    uVar3 = *puVar16;
                    puVar16 = puVar16 + 1;
                    uVar6 = (int)uVar11 + (uint)CONCAT11(uVar2,uVar3);
                    uVar11 = (ulonglong)uVar6;
                    *puVar15 = (short)uVar6;
                    puVar15 = puVar15 + 1;
                    uVar17 = uVar17 - 1;
                    uVar10 = uVar11;
                  } while (uVar17 != 0);
                }
              }
              else {
                uVar10 = uVar11;
                if (iVar8 == 2) {
                  lVar9 = (longlong)(int)uVar6;
                  puVar16 = puVar13 + lVar9 * 2;
                  puVar14 = puVar16 + lVar9;
                  if (local_e0 < (ulonglong)((longlong)puVar14 - *(longlong *)(param_1 + 0x18)))
                  goto LAB_14521a6b8;
                  if (0 < (int)uVar6) {
                    do {
                      uVar2 = *puVar13;
                      puVar1 = puVar13 + lVar9;
                      puVar13 = puVar13 + 1;
                      uVar6 = (int)uVar11 + (uint)CONCAT21(CONCAT11(uVar2,*puVar1),*puVar16) * 0x100
                      ;
                      uVar11 = (ulonglong)uVar6;
                      local_e8._1_1_ = (undefined1)(uVar6 >> 8);
                      *(undefined1 *)((longlong)puVar15 + 1) = local_e8._1_1_;
                      local_e8._2_1_ = (undefined1)(uVar6 >> 0x10);
                      *(undefined1 *)(puVar15 + 1) = local_e8._2_1_;
                      local_e8._3_1_ = (undefined1)(uVar6 >> 0x18);
                      *(undefined1 *)((longlong)puVar15 + 3) = local_e8._3_1_;
                      *(undefined1 *)puVar15 = 0;
                      puVar15 = puVar15 + 2;
                      uVar17 = uVar17 - 1;
                      uVar10 = uVar11;
                      puVar16 = puVar16 + 1;
                      local_e8 = uVar6;
                    } while (uVar17 != 0);
                  }
                }
              }
            }
            FUN_144b663b0(&local_d0,uVar10);
            plVar7 = (longlong *)FUN_144b65f40(*(undefined8 *)(param_1 + 0x28),local_c8);
            puVar13 = puVar14;
          } while (local_d0 != *plVar7);
        }
        iVar18 = iVar18 + 1;
        param_5 = local_c0;
      } while (iVar18 <= local_d8);
    }
    if ((ulonglong)((longlong)puVar14 - *(longlong *)(param_1 + 0x18)) < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_14521a790();
    }
    *param_5 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_118);
}



// FUNCTION 14521a6f0 FUN_14521a6f0 body=83 status=ok
// SIG undefined FUN_14521a6f0(void)

undefined8 * FUN_14521a6f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::Pxr24Compressor::vftable;
  thunk_FUN_1400020a8(param_1[3]);
  thunk_FUN_1400020a8(param_1[4]);
  FUN_144e497f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14521a750 FUN_14521a750 body=59 status=ok
// SIG undefined FUN_14521a750(void)

void FUN_14521a750(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error decompressing data (input data are shorter than expected).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 14521a790 FUN_14521a790 body=59 status=ok
// SIG undefined FUN_14521a790(void)

void FUN_14521a790(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error decompressing data (input data are longer than expected).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 14521a7d0 FUN_14521a7d0 body=218 status=ok
// SIG undefined FUN_14521a7d0(void)

void FUN_14521a7d0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  FUN_144e497d0();
  *param_1 = Imf_3_2::RleCompressor::vftable;
  *(int *)(param_1 + 2) = (int)param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  if (0x7fffffff < param_3) {
    FUN_144e47140(local_78,"ScanLine size too large for RleCompressor");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5240);
  }
  uVar2 = FUN_144a7d36f(param_3);
  param_1[3] = uVar2;
  if ((param_3 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 3)) {
    FUN_144e47140(local_78,"Integer multiplication overflow.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5240);
  }
  uVar2 = FUN_144a7d36f(param_3 * 3 >> 1);
  param_1[4] = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14521a8c0 FUN_14521a8c0 body=6 status=ok
// SIG undefined FUN_14521a8c0(void)

undefined8 FUN_14521a8c0(void)

{
  return 1;
}



// FUNCTION 14521a8d0 FUN_14521a8d0 body=203 status=ok
// SIG undefined FUN_14521a8d0(void)

undefined8
FUN_14521a8d0(longlong param_1,undefined1 *param_2,int param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
    return 0;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x18);
  puVar1 = param_2 + param_3;
  puVar8 = puVar4 + (param_3 + 1) / 2;
  for (; param_2 < puVar1; param_2 = param_2 + 2) {
    *puVar4 = *param_2;
    puVar4 = puVar4 + 1;
    if (puVar1 <= param_2 + 1) break;
    *puVar8 = param_2[1];
    puVar8 = puVar8 + 1;
  }
  pcVar5 = *(char **)(param_1 + 0x18);
  pcVar2 = pcVar5 + param_3;
  cVar6 = *pcVar5;
  while (pcVar5 = pcVar5 + 1, pcVar5 < pcVar2) {
    cVar3 = *pcVar5;
    *pcVar5 = (cVar3 - cVar6) + -0x80;
    cVar6 = cVar3;
  }
  *param_5 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = FUN_14521c900(param_3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return uVar7;
}



// FUNCTION 14521a9a0 FUN_14521a9a0 body=254 status=ok
// SIG undefined FUN_14521a9a0(void)

void FUN_14521a9a0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    iVar6 = FUN_14521ca00(param_3,*(undefined4 *)(param_1 + 0x10),param_2,
                          *(undefined8 *)(param_1 + 0x18));
    if (iVar6 == 0) {
      FUN_144e41060(local_78,"Data decoding (rle) failed.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
    }
    pcVar2 = *(char **)(param_1 + 0x18);
    pcVar5 = pcVar2;
    while (pcVar4 = pcVar5 + 1, pcVar4 < pcVar2 + iVar6) {
      *pcVar4 = *pcVar4 + *pcVar5 + -0x80;
      pcVar5 = pcVar4;
    }
    puVar3 = *(undefined1 **)(param_1 + 0x18);
    puVar7 = *(undefined1 **)(param_1 + 0x20);
    puVar8 = puVar3 + (iVar6 + 1) / 2;
    puVar9 = puVar7 + iVar6;
    for (; puVar7 < puVar9; puVar7 = puVar7 + 2) {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *puVar7 = uVar1;
      if (puVar9 <= puVar7 + 1) break;
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7[1] = uVar1;
    }
    *param_5 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 14521aab0 FUN_14521aab0 body=83 status=ok
// SIG undefined FUN_14521aab0(void)

undefined8 * FUN_14521aab0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::RleCompressor::vftable;
  thunk_FUN_1400020a8(param_1[3]);
  thunk_FUN_1400020a8(param_1[4]);
  FUN_144e497f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14521ab10 FUN_14521ab10 body=137 status=ok
// SIG undefined FUN_14521ab10(void)

undefined8 *
FUN_14521ab10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_144e497d0();
  *param_1 = Imf_3_2::ZipCompressor::vftable;
  *(int *)(param_1 + 2) = (int)param_3;
  *(int *)((longlong)param_1 + 0x14) = (int)param_4;
  param_1[3] = 0;
  uVar1 = FUN_144b67c20(param_2);
  FUN_144e4a6b0(param_1 + 4,param_3,param_4,uVar1);
  uVar2 = FUN_144e4a770(param_1 + 4);
  uVar2 = FUN_144a7d36f(uVar2);
  param_1[3] = uVar2;
  return param_1;
}



// FUNCTION 14521aba0 FUN_14521aba0 body=4 status=ok
// SIG undefined FUN_14521aba0(void)

undefined4 FUN_14521aba0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// FUNCTION 14521abb0 FUN_14521abb0 body=61 status=ok
// SIG undefined FUN_14521abb0(void)

undefined8
FUN_14521abb0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 *param_5
             )

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x18);
    return 0;
  }
  uVar1 = FUN_144e4a780(param_1 + 0x20);
  *param_5 = *(undefined8 *)(param_1 + 0x18);
  return uVar1;
}



// FUNCTION 14521abf0 FUN_14521abf0 body=61 status=ok
// SIG undefined FUN_14521abf0(void)

undefined8
FUN_14521abf0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 *param_5
             )

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x18);
    return 0;
  }
  uVar1 = FUN_144e4a8a0(param_1 + 0x20);
  *param_5 = *(undefined8 *)(param_1 + 0x18);
  return uVar1;
}



// FUNCTION 14521ac30 FUN_14521ac30 body=83 status=ok
// SIG undefined FUN_14521ac30(void)

undefined8 * FUN_14521ac30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::ZipCompressor::vftable;
  thunk_FUN_1400020a8(param_1[3]);
  FUN_144e4a750(param_1 + 4);
  FUN_144e497f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14521ac90 FUN_14521ac90 body=103 status=ok
// SIG undefined FUN_14521ac90(void)

/* WARNING: Removing unreachable block (ram,0x00014521acba) */
/* WARNING: Removing unreachable block (ram,0x00014521acad) */

byte * FUN_14521ac90(byte *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  piVar1 = (int *)cpuid_basic_info(0);
  if (0 < *piVar1) {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(undefined4 *)(lVar2 + 8);
    uVar4 = *(uint *)(lVar2 + 0xc);
    param_1[1] = (byte)uVar4 & 1;
    *param_1 = (byte)((uint)uVar3 >> 0x1a) & 1;
    param_1[2] = (byte)(uVar4 >> 9) & 1;
    param_1[3] = (byte)(uVar4 >> 0x13) & 1;
    param_1[4] = (byte)(uVar4 >> 0x14) & 1;
  }
  return param_1;
}



// FUNCTION 14521ad00 FUN_14521ad00 body=71 status=ok
// SIG undefined FUN_14521ad00(void)

ulonglong FUN_14521ad00(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_145493720(0,param_1);
  if (uVar1 < 0xfffffffffffffff7) {
    if (param_1 <= param_1 * 0x82) {
      uVar2 = param_1 * 0x82 >> 7;
      if (uVar2 <= uVar1 + 9) {
        uVar2 = uVar1 + 9;
      }
      return uVar2;
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 14521ad50 FUN_14521ad50 body=204 status=ok
// SIG undefined FUN_14521ad50(void)

undefined8
FUN_14521ad50(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  code *pcVar4;
  int local_res10 [2];
  
  if (param_1 == 0) {
    pcVar4 = FUN_14521e970;
    pcVar3 = FUN_14521e930;
  }
  else {
    pcVar4 = *(code **)(param_1 + 0x60);
    pcVar3 = *(code **)(param_1 + 0x58);
  }
  local_res10[0] = param_2;
  FUN_145495680(pcVar3,pcVar4);
  if (local_res10[0] < 0) {
    FUN_144e66020(local_res10);
    if (local_res10[0] < 0) {
      local_res10[0] = 4;
    }
  }
  lVar1 = FUN_14548aae0();
  if (lVar1 != 0) {
    lVar2 = FUN_145493620(lVar1,param_3,param_4,param_5,param_6);
    thunk_FUN_1454956f0(lVar1);
    if (lVar2 != 0) {
      if (param_7 != (longlong *)0x0) {
        *param_7 = lVar2;
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14521ae20 FUN_14521ae20 body=180 status=ok
// SIG undefined FUN_14521ae20(void)

undefined8
FUN_14521ae20(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Memory;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  longlong local_res8;
  
  if (param_1 == 0) {
    pcVar4 = FUN_14521e970;
    pcVar3 = FUN_14521e930;
  }
  else {
    pcVar4 = *(code **)(param_1 + 0x60);
    pcVar3 = *(code **)(param_1 + 0x58);
  }
  FUN_145495680(pcVar3,pcVar4);
  _Memory = (void *)FUN_1454937c0();
  if (_Memory == (void *)0x0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_145495560(_Memory,param_2,param_3,param_4,param_5,&local_res8,param_6);
    free(_Memory);
    uVar2 = 0x17;
    if ((iVar1 == 0) && (uVar2 = 0x17, param_3 == local_res8)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 14521aee0 FUN_14521aee0 body=418 status=ok
// SIG undefined FUN_14521aee0(void)

int FUN_14521aee0(ushort *param_1,uint param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *_Dst;
  ushort *puVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined1 *local_48 [2];
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    _Dst = (undefined1 *)FUN_144a7d36f(0x80008);
    local_48[0] = _Dst;
    memset(_Dst,0,0x80008);
    puVar4 = param_1;
    uVar5 = (ulonglong)param_2;
    if (0 < (int)param_2) {
      do {
        *(longlong *)(_Dst + (ulonglong)*puVar4 * 8) =
             *(longlong *)(_Dst + (ulonglong)*puVar4 * 8) + 1;
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    local_res20[0] = 0;
    local_res10[0] = 0;
    FUN_14521b7f0(_Dst,local_res20,local_res10);
    uVar2 = local_res20[0];
    uVar1 = local_res10[0];
    local_48[0] = param_3 + 0x14;
    FUN_14521bd00(_Dst,local_res20[0],local_res10[0],local_48);
    iVar7 = (int)local_48[0];
    iVar6 = iVar7 - (int)(param_3 + 0x14);
    iVar3 = FUN_14521c230(_Dst,param_1,(ulonglong)param_2,uVar1,local_48[0]);
    *param_3 = (char)uVar2;
    param_3[1] = (char)((uint)uVar2 >> 8);
    param_3[2] = (char)((uint)uVar2 >> 0x10);
    param_3[3] = (char)((uint)uVar2 >> 0x18);
    param_3[4] = (char)uVar1;
    param_3[5] = (char)((uint)uVar1 >> 8);
    param_3[6] = (char)((uint)uVar1 >> 0x10);
    param_3[7] = (char)((uint)uVar1 >> 0x18);
    param_3[8] = (char)iVar6;
    param_3[9] = (char)((uint)iVar6 >> 8);
    param_3[10] = (char)((uint)iVar6 >> 0x10);
    param_3[0xb] = (char)((uint)iVar6 >> 0x18);
    param_3[0xc] = (char)iVar3;
    param_3[0xd] = (char)((uint)iVar3 >> 8);
    param_3[0xe] = (char)((uint)iVar3 >> 0x10);
    param_3[0xf] = (char)((uint)iVar3 >> 0x18);
    *(undefined4 *)(param_3 + 0x10) = 0;
    iVar3 = (iVar7 - (int)param_3) + ((int)((iVar3 + 7 >> 0x1f & 7U) + iVar3 + 7) >> 3);
    thunk_FUN_1400020a8(_Dst);
  }
  return iVar3;
}



// FUNCTION 14521b090 FUN_14521b090 body=624 status=ok
// SIG undefined FUN_14521b090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14521b090(uint *param_1,int param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  void *_Dst;
  void *_Dst_00;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_5488 [32];
  void *local_5468;
  uint local_5460;
  undefined8 local_5458;
  uint local_5448;
  uint *local_5440;
  int local_5438;
  undefined8 local_5430;
  void *local_5428;
  void *local_5420;
  undefined1 local_5418 [21456];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14521b0a6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5488;
  uVar5 = (ulonglong)param_2;
  local_5438 = param_2;
  local_5430 = param_3;
  if (param_2 < 0x14) {
    if (param_4 != 0) {
LAB_14521b305:
                    /* WARNING: Subroutine does not return */
      FUN_14521b3a0();
    }
  }
  else {
    local_5448 = *param_1;
    uVar1 = param_1[1];
    uVar2 = param_1[3];
    if ((0x10000 < local_5448) || (0x10000 < uVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_14521b420();
    }
    local_5440 = param_1 + 5;
    uVar4 = (longlong)(int)uVar2 + 7U >> 3;
    if (uVar5 + (longlong)param_1 < (longlong)local_5440 + uVar4) goto LAB_14521b305;
    cVar3 = FUN_145496070();
    if ((cVar3 == '\0') || ((int)uVar2 < 0x81)) {
      _Dst = (void *)FUN_144a7d36f(0x80008);
      local_5420 = _Dst;
      memset(_Dst,0,0x80008);
      _Dst_00 = (void *)FUN_144a7d36f(0x40000);
      local_5428 = _Dst_00;
      memset(_Dst_00,0,0x40000);
      local_5468 = _Dst;
      FUN_14521be90(&local_5440,((int)param_1 - (int)local_5440) + local_5438,local_5448,uVar1);
      if ((longlong)(((uVar5 - (longlong)local_5440) + (longlong)param_1) * 8) <
          (longlong)(int)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_14521b320();
      }
      FUN_14521c040(_Dst,local_5448,uVar1,_Dst_00);
      local_5458 = local_5430;
      local_5468 = (void *)CONCAT44(local_5468._4_4_,uVar1);
      local_5460 = param_4;
      FUN_14521c510(_Dst,_Dst_00,local_5440,uVar2);
      FUN_14521c1e0(_Dst_00);
      thunk_FUN_1400020a8(_Dst_00);
      thunk_FUN_1400020a8(_Dst);
    }
    else {
      local_5460 = uVar1;
      local_5468._0_4_ = uVar1;
      FUN_145495710(local_5418,&local_5440,((int)param_1 - (int)local_5440) + param_2,local_5448);
      if (uVar5 < (uVar4 - (longlong)param_1) + (longlong)local_5440) {
                    /* WARNING: Subroutine does not return */
        FUN_14521b3a0();
      }
      local_5468 = (void *)CONCAT44(local_5468._4_4_,param_4);
      FUN_145496080(local_5418,local_5440,uVar2,local_5430);
      FUN_145496060(local_5418);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_5488);
}



// FUNCTION 14521b320 FUN_14521b320 body=59 status=ok
// SIG undefined FUN_14521b320(void)

void FUN_14521b320(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error in header for Huffman-encoded data (invalid number of bits).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 14521b360 FUN_14521b360 body=59 status=ok
// SIG undefined FUN_14521b360(void)

void FUN_14521b360(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error in Huffman-encoded data (decoded data are longer than expected).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 14521b3a0 FUN_14521b3a0 body=59 status=ok
// SIG undefined FUN_14521b3a0(void)

void FUN_14521b3a0(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error in Huffman-encoded data (decoded data are shorter than expected).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 14521b3e0 FUN_14521b3e0 body=59 status=ok
// SIG undefined FUN_14521b3e0(void)

void FUN_14521b3e0(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error in Huffman-encoded data (invalid code).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 14521b420 FUN_14521b420 body=59 status=ok
// SIG undefined FUN_14521b420(void)

void FUN_14521b420(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error in Huffman-encoded data (invalid code table size).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 14521b460 FUN_14521b460 body=59 status=ok
// SIG undefined FUN_14521b460(void)

void FUN_14521b460(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error in Huffman-encoded data (unexpected end of code table data).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 14521b4a0 FUN_14521b4a0 body=59 status=ok
// SIG undefined FUN_14521b4a0(void)

void FUN_14521b4a0(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error in Huffman-encoded data (code table is longer than expected).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 14521b4e0 FUN_14521b4e0 body=59 status=ok
// SIG undefined FUN_14521b4e0(void)

void FUN_14521b4e0(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,"Error in Huffman-encoded data (invalid code table entry).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 14521b520 FUN_14521b520 body=705 status=ok
// SIG undefined FUN_14521b520(void)

void FUN_14521b520(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong local_1f8 [56];
  ulonglong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)local_1f8;
  lVar8 = 3;
  plVar5 = local_1f8;
  do {
    puVar2 = plVar5;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    lVar8 = lVar8 + -1;
    plVar5 = puVar2 + 0x10;
  } while (lVar8 != 0);
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  lVar8 = 0x10001;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  plVar5 = param_1;
  do {
    lVar1 = *plVar5;
    plVar5 = plVar5 + 1;
    local_1f8[lVar1] = local_1f8[lVar1] + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar9 = 0;
  lVar8 = 2;
  uVar3 = uVar9;
  puVar10 = local_38;
  do {
    uVar7 = puVar10[-1];
    uVar6 = puVar10[2] + uVar3 >> 1;
    puVar10[2] = uVar3;
    uVar3 = puVar10[1];
    puVar10[1] = uVar6;
    uVar4 = *puVar10;
    uVar6 = uVar3 + uVar6 >> 1;
    *puVar10 = uVar6;
    uVar3 = puVar10[-3];
    uVar6 = uVar4 + uVar6 >> 1;
    puVar10[-1] = uVar6;
    uVar4 = puVar10[-2];
    uVar6 = uVar7 + uVar6 >> 1;
    puVar10[-2] = uVar6;
    uVar7 = puVar10[-5];
    uVar6 = uVar4 + uVar6 >> 1;
    puVar10[-3] = uVar6;
    uVar4 = puVar10[-4];
    uVar6 = uVar3 + uVar6 >> 1;
    puVar10[-4] = uVar6;
    uVar3 = puVar10[-7];
    uVar6 = uVar4 + uVar6 >> 1;
    puVar10[-5] = uVar6;
    uVar4 = puVar10[-6];
    uVar6 = uVar7 + uVar6 >> 1;
    puVar10[-6] = uVar6;
    uVar7 = puVar10[-9];
    uVar6 = uVar4 + uVar6 >> 1;
    puVar10[-7] = uVar6;
    uVar4 = puVar10[-8];
    uVar6 = uVar3 + uVar6 >> 1;
    puVar10[-8] = uVar6;
    uVar3 = puVar10[-0xb];
    uVar6 = uVar4 + uVar6 >> 1;
    puVar10[-9] = uVar6;
    uVar4 = puVar10[-10];
    uVar6 = uVar7 + uVar6 >> 1;
    puVar10[-10] = uVar6;
    uVar7 = puVar10[-0xd];
    uVar6 = uVar4 + uVar6 >> 1;
    puVar10[-0xb] = uVar6;
    uVar4 = puVar10[-0xc];
    uVar6 = uVar3 + uVar6 >> 1;
    puVar10[-0xc] = uVar6;
    uVar3 = puVar10[-0xf];
    uVar6 = uVar4 + uVar6 >> 1;
    puVar10[-0xd] = uVar6;
    uVar4 = puVar10[-0xe];
    uVar6 = uVar7 + uVar6 >> 1;
    puVar10[-0xe] = uVar6;
    uVar7 = puVar10[-0x11];
    uVar6 = uVar4 + uVar6 >> 1;
    puVar10[-0xf] = uVar6;
    uVar4 = puVar10[-0x10];
    uVar3 = uVar3 + uVar6 >> 1;
    puVar10[-0x10] = uVar3;
    uVar3 = uVar4 + uVar3 >> 1;
    puVar10[-0x11] = uVar3;
    uVar6 = uVar7 + uVar3 >> 1;
    uVar3 = puVar10[-0x13];
    uVar7 = puVar10[-0x12] + uVar6 >> 1;
    puVar10[-0x13] = uVar7;
    uVar4 = uVar3 + uVar7 >> 1;
    puVar10[-0x12] = uVar6;
    uVar3 = puVar10[-0x15];
    uVar6 = puVar10[-0x14] + uVar4 >> 1;
    puVar10[-0x15] = uVar6;
    uVar7 = puVar10[-0x16];
    puVar10[-0x14] = uVar4;
    uVar4 = puVar10[-0x17];
    uVar6 = uVar3 + uVar6 >> 1;
    puVar10[-0x16] = uVar6;
    uVar3 = puVar10[-0x18];
    uVar6 = uVar7 + uVar6 >> 1;
    puVar10[-0x17] = uVar6;
    uVar7 = puVar10[-0x19];
    uVar6 = uVar4 + uVar6 >> 1;
    puVar10[-0x18] = uVar6;
    uVar4 = puVar10[-0x1a];
    uVar3 = uVar3 + uVar6 >> 1;
    puVar10[-0x19] = uVar3;
    uVar3 = uVar7 + uVar3 >> 1;
    puVar10[-0x1a] = uVar3;
    uVar3 = uVar4 + uVar3 >> 1;
    lVar8 = lVar8 + -1;
    puVar10 = puVar10 + -0x1d;
  } while (lVar8 != 0);
  do {
    uVar3 = (ulonglong)(int)param_1[uVar9];
    if (0 < (int)param_1[uVar9]) {
      lVar8 = local_1f8[uVar3];
      param_1[uVar9] = lVar8 << 6 | uVar3;
      local_1f8[uVar3] = lVar8 + 1;
    }
    uVar9 = uVar9 + 1;
  } while ((longlong)uVar9 < 0x10001);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)local_1f8);
}



// FUNCTION 14521b7f0 FUN_14521b7f0 body=1234 status=ok
// SIG undefined FUN_14521b7f0(void)

void FUN_14521b7f0(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  void *_Dst;
  ulonglong *_Dst_00;
  longlong *plVar8;
  longlong lVar9;
  void *_Dst_01;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  ulonglong *puVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  
  _Dst = (void *)FUN_144a7d36f(0x40004);
  memset(_Dst,0,0x40004);
  _Dst_00 = (ulonglong *)FUN_144a7d36f(0x80008);
  memset(_Dst_00,0,0x80008);
  *param_2 = 0;
  iVar10 = 0;
  lVar17 = *param_1;
  while (lVar17 == 0) {
    iVar10 = iVar10 + 1;
    *param_2 = iVar10;
    lVar17 = param_1[iVar10];
  }
  iVar16 = 0;
  if (iVar10 < 0x10001) {
    plVar8 = param_1 + iVar10;
    piVar14 = (int *)((longlong)_Dst + (longlong)iVar10 * 4);
    plVar11 = plVar8;
    puVar15 = _Dst_00;
    do {
      *piVar14 = iVar10;
      if (*plVar11 != 0) {
        *puVar15 = (ulonglong)plVar8;
        iVar16 = iVar16 + 1;
        puVar15 = puVar15 + 1;
        *param_3 = iVar10;
      }
      iVar10 = iVar10 + 1;
      plVar8 = plVar8 + 1;
      piVar14 = piVar14 + 1;
      plVar11 = plVar11 + 1;
    } while (iVar10 < 0x10001);
  }
  iVar10 = *param_3;
  *param_3 = iVar10 + 1;
  param_1[(longlong)iVar10 + 1] = 1;
  _Dst_00[iVar16] = (ulonglong)(param_1 + *param_3);
  uVar18 = (ulonglong)(iVar16 + 1);
  lVar17 = (longlong)uVar18 >> 1;
  if (0 < lVar17) {
    lVar12 = (longlong)(uVar18 - 1) >> 1;
    do {
      lVar17 = lVar17 + -1;
      puVar15 = (ulonglong *)_Dst_00[lVar17];
      lVar13 = lVar17;
      while (lVar13 < lVar12) {
        uVar2 = *(ulonglong *)_Dst_00[lVar13 * 2 + 2];
        uVar19 = *(ulonglong *)_Dst_00[lVar13 * 2 + 1];
        if ((uVar19 < uVar2) ||
           ((uVar2 == uVar19 &&
            ((ulonglong *)_Dst_00[lVar13 * 2 + 1] < (ulonglong *)_Dst_00[lVar13 * 2 + 2])))) {
          lVar9 = 1;
        }
        else {
          lVar9 = 2;
        }
        lVar9 = lVar13 * 2 + lVar9;
        _Dst_00[lVar13] = _Dst_00[lVar9];
        lVar13 = lVar9;
      }
      if ((lVar13 == lVar12) && ((uVar18 & 1) == 0)) {
        _Dst_00[lVar13] = _Dst_00[uVar18 - 1];
        lVar13 = uVar18 - 1;
      }
      while (lVar17 < lVar13) {
        lVar9 = lVar13 + -1 >> 1;
        puVar3 = (ulonglong *)_Dst_00[lVar9];
        if ((*puVar3 <= *puVar15) && ((*puVar3 != *puVar15 || (puVar3 <= puVar15)))) break;
        _Dst_00[lVar13] = (ulonglong)puVar3;
        lVar13 = lVar9;
      }
      _Dst_00[lVar13] = (ulonglong)puVar15;
    } while (0 < lVar17);
  }
  _Dst_01 = (void *)FUN_144a7d36f(0x80008);
  memset(_Dst_01,0,0x80008);
  if (1 < (longlong)uVar18) {
    puVar15 = _Dst_00 + uVar18;
    do {
      uVar2 = *_Dst_00;
      if (1 < uVar18) {
        puVar15 = puVar15 + -1;
        puVar3 = (ulonglong *)*puVar15;
        *puVar15 = uVar2;
        uVar19 = (longlong)puVar15 - (longlong)_Dst_00 >> 3;
        lVar17 = 0;
        lVar13 = (longlong)(uVar19 - 1) >> 1;
        lVar12 = lVar17;
        if (0 < lVar13) {
          do {
            lVar9 = lVar12 * 2;
            lVar17 = lVar9 + 2;
            uVar20 = *(ulonglong *)_Dst_00[lVar17];
            uVar4 = *(ulonglong *)_Dst_00[lVar9 + 1];
            if ((uVar4 < uVar20) ||
               ((uVar20 == uVar4 && ((ulonglong *)_Dst_00[lVar9 + 1] < (ulonglong *)_Dst_00[lVar17])
                ))) {
              lVar17 = lVar9 + 1;
            }
            _Dst_00[lVar12] = _Dst_00[lVar17];
            lVar12 = lVar17;
          } while (lVar17 < lVar13);
        }
        if ((lVar17 == lVar13) && ((uVar19 & 1) == 0)) {
          _Dst_00[lVar17] = _Dst_00[uVar19 - 1];
          lVar17 = uVar19 - 1;
        }
        while (0 < lVar17) {
          lVar12 = lVar17 + -1 >> 1;
          puVar15 = (ulonglong *)_Dst_00[lVar12];
          if ((*puVar15 <= *puVar3) && ((*puVar15 != *puVar3 || (puVar15 <= puVar3)))) break;
          _Dst_00[lVar17] = (ulonglong)puVar15;
          lVar17 = lVar12;
        }
        _Dst_00[lVar17] = (ulonglong)puVar3;
      }
      uVar19 = uVar18 - 1;
      iVar10 = (int)((longlong)(*_Dst_00 - (longlong)param_1) >> 3);
      puVar15 = _Dst_00 + uVar19;
      puVar3 = puVar15 + -1;
      if (1 < (longlong)uVar19) {
        puVar5 = (ulonglong *)*puVar3;
        *puVar3 = *_Dst_00;
        uVar20 = (longlong)puVar3 - (longlong)_Dst_00 >> 3;
        lVar12 = 0;
        lVar13 = (longlong)(uVar20 - 1) >> 1;
        lVar17 = lVar12;
        if (0 < lVar13) {
          do {
            lVar9 = lVar12 * 2;
            lVar17 = lVar9 + 2;
            uVar4 = *(ulonglong *)_Dst_00[lVar17];
            uVar6 = *(ulonglong *)_Dst_00[lVar9 + 1];
            if ((uVar6 < uVar4) ||
               ((uVar4 == uVar6 && ((ulonglong *)_Dst_00[lVar9 + 1] < (ulonglong *)_Dst_00[lVar17]))
               )) {
              lVar17 = lVar9 + 1;
            }
            _Dst_00[lVar12] = _Dst_00[lVar17];
            lVar12 = lVar17;
          } while (lVar17 < lVar13);
        }
        if ((lVar17 == lVar13) && ((uVar20 & 1) == 0)) {
          _Dst_00[lVar17] = _Dst_00[uVar20 - 1];
          lVar17 = uVar20 - 1;
        }
        while (0 < lVar17) {
          lVar12 = lVar17 + -1 >> 1;
          puVar7 = (ulonglong *)_Dst_00[lVar12];
          if ((*puVar7 <= *puVar5) && ((*puVar7 != *puVar5 || (puVar7 <= puVar5)))) break;
          _Dst_00[lVar17] = (ulonglong)puVar7;
          lVar17 = lVar12;
        }
        _Dst_00[lVar17] = (ulonglong)puVar5;
      }
      lVar17 = (longlong)iVar10;
      iVar16 = (int)((longlong)(uVar2 - (longlong)param_1) >> 3);
      lVar12 = (longlong)iVar16;
      param_1[lVar17] = param_1[lVar17] + param_1[lVar12];
      if (1 < (longlong)uVar19) {
        puVar3 = (ulonglong *)*puVar3;
        lVar13 = uVar18 - 2;
        while (0 < lVar13) {
          lVar9 = lVar13 + -1 >> 1;
          puVar5 = (ulonglong *)_Dst_00[lVar9];
          if ((*puVar5 <= *puVar3) && ((*puVar5 != *puVar3 || (puVar5 <= puVar3)))) break;
          _Dst_00[lVar13] = (ulonglong)puVar5;
          lVar13 = lVar9;
        }
        _Dst_00[lVar13] = (ulonglong)puVar3;
      }
      plVar11 = (longlong *)((longlong)_Dst_01 + lVar17 * 8);
      *plVar11 = *plVar11 + 1;
      iVar1 = *(int *)((longlong)_Dst + lVar17 * 4);
      if (iVar1 != iVar10) {
        do {
          iVar10 = iVar1;
          plVar11 = (longlong *)((longlong)_Dst_01 + (longlong)iVar10 * 8);
          *plVar11 = *plVar11 + 1;
          iVar1 = *(int *)((longlong)_Dst + (longlong)iVar10 * 4);
        } while (iVar1 != iVar10);
      }
      *(int *)((longlong)_Dst + (longlong)iVar10 * 4) = iVar16;
      plVar11 = (longlong *)((longlong)_Dst_01 + lVar12 * 8);
      *plVar11 = *plVar11 + 1;
      iVar10 = *(int *)((longlong)_Dst + lVar12 * 4);
      if (iVar10 != iVar16) {
        do {
          plVar11 = (longlong *)((longlong)_Dst_01 + (longlong)iVar10 * 8);
          *plVar11 = *plVar11 + 1;
          iVar16 = *(int *)((longlong)_Dst + (longlong)iVar10 * 4);
          bVar21 = iVar16 != iVar10;
          iVar10 = iVar16;
        } while (bVar21);
      }
      uVar18 = uVar19;
    } while (1 < (longlong)uVar19);
  }
  FUN_14521b520(_Dst_01);
  memcpy(param_1,_Dst_01,0x80008);
  thunk_FUN_1400020a8(_Dst_01);
  thunk_FUN_1400020a8(_Dst_00);
  thunk_FUN_1400020a8(_Dst);
  return;
}



// FUNCTION 14521bd00 FUN_14521bd00 body=386 status=ok
// SIG undefined FUN_14521bd00(void)

void FUN_14521bd00(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  
  puVar9 = (undefined1 *)*param_4;
  uVar3 = 0;
  uVar6 = (ulonglong)param_2;
  uVar8 = uVar6;
  uVar10 = uVar3;
  if (param_2 <= param_3) {
    do {
      uVar5 = (uint)uVar8;
      uVar7 = *(uint *)(param_1 + uVar6 * 8) & 0x3f;
      if ((uVar7 == 0) && (iVar4 = 1, (longlong)uVar6 < (longlong)param_3)) {
        pbVar1 = (byte *)(param_1 + 8 + uVar6 * 8);
        do {
          uVar5 = (uint)uVar8;
          if ((0x104 < iVar4) || ((*pbVar1 & 0x3f) != 0)) break;
          uVar5 = uVar5 + 1;
          uVar8 = (ulonglong)uVar5;
          uVar6 = uVar6 + 1;
          pbVar1 = pbVar1 + 8;
          iVar4 = iVar4 + 1;
        } while ((longlong)uVar6 < (longlong)param_3);
        if (iVar4 < 2) goto LAB_14521be16;
        uVar7 = (int)uVar3 + 6;
        uVar3 = (ulonglong)uVar7;
        if (iVar4 < 6) {
          uVar10 = (longlong)(iVar4 + 0x39) | uVar10 << 6;
          while (7 < (int)uVar7) {
            uVar7 = (int)uVar3 - 8;
            uVar3 = (ulonglong)uVar7;
            *puVar9 = (char)(uVar10 >> ((byte)uVar7 & 0x3f));
            puVar9 = puVar9 + 1;
          }
        }
        else {
          uVar8 = uVar10 << 6 | 0x3f;
          while (7 < (int)uVar7) {
            uVar7 = (int)uVar3 - 8;
            uVar3 = (ulonglong)uVar7;
            *puVar9 = (char)(uVar8 >> ((byte)uVar7 & 0x3f));
            puVar9 = puVar9 + 1;
          }
          uVar7 = uVar7 + 8;
          uVar10 = (longlong)(iVar4 + -6) | uVar8 << 8;
          while (uVar3 = (ulonglong)uVar7, 7 < (int)uVar7) {
            uVar7 = uVar7 - 8;
            *puVar9 = (char)(uVar10 >> ((byte)uVar7 & 0x3f));
            puVar9 = puVar9 + 1;
          }
        }
      }
      else {
LAB_14521be16:
        uVar2 = (int)uVar3 + 6;
        uVar10 = uVar10 << 6 | (ulonglong)uVar7;
        while (uVar3 = (ulonglong)uVar2, 7 < (int)uVar2) {
          uVar2 = uVar2 - 8;
          *puVar9 = (char)(uVar10 >> ((byte)uVar2 & 0x3f));
          puVar9 = puVar9 + 1;
        }
      }
      uVar6 = uVar6 + 1;
      uVar8 = (ulonglong)(uVar5 + 1);
    } while ((int)(uVar5 + 1) <= param_3);
    if (0 < (int)uVar3) {
      *puVar9 = (char)(uVar10 << (8U - (char)uVar3 & 0x3f));
      puVar9 = puVar9 + 1;
    }
  }
  *param_4 = (longlong)puVar9;
  return;
}



// FUNCTION 14521be90 FUN_14521be90 body=420 status=ok
// SIG undefined FUN_14521be90(void)

void FUN_14521be90(longlong *param_1,int param_2,int param_3,int param_4,void *param_5)

{
  ulonglong *_Dst;
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  
  memset(param_5,0,0x80008);
  pbVar6 = (byte *)*param_1;
  uVar5 = 0;
  uVar3 = uVar5;
  while( true ) {
    if (param_4 < param_3) {
      *param_1 = (longlong)pbVar6;
      FUN_14521b520(param_5);
      return;
    }
    iVar7 = (int)uVar3;
    if ((longlong)param_2 < (longlong)pbVar6 - *param_1) break;
    if (iVar7 < 6) {
      uVar2 = (5U - iVar7 >> 3) + 1;
      uVar3 = (ulonglong)uVar2;
      iVar7 = iVar7 + uVar2 * 8;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar5 = uVar5 << 8 | (ulonglong)bVar1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar8 = iVar7 - 6;
    uVar3 = (ulonglong)uVar8;
    _Dst = (ulonglong *)((longlong)param_5 + (longlong)param_3 * 8);
    uVar2 = (uint)(uVar5 >> ((byte)uVar8 & 0x3f)) & 0x3f;
    uVar4 = (ulonglong)uVar2;
    *_Dst = uVar4;
    if (uVar4 == 0x3f) {
      if ((longlong)param_2 < (longlong)pbVar6 - *param_1) break;
      if ((int)uVar8 < 8) {
        uVar2 = (7 - uVar8 >> 3) + 1;
        uVar3 = (ulonglong)uVar2;
        uVar8 = uVar8 + uVar2 * 8;
        do {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar5 = uVar5 << 8 | (ulonglong)bVar1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar3 = (ulonglong)(uVar8 - 8);
      uVar2 = (uint)(uVar5 >> ((byte)(uVar8 - 8) & 0x3f)) & 0xff;
      uVar8 = uVar2 + 6;
      if (param_4 + 1 < (int)(uVar8 + param_3)) {
LAB_14521c030:
                    /* WARNING: Subroutine does not return */
        FUN_14521b4a0();
      }
      memset(_Dst,0,(ulonglong)uVar8 << 3);
      param_3 = param_3 + uVar2 + 5;
    }
    else if (0x3a < uVar4) {
      uVar2 = uVar2 - 0x39;
      if (param_4 + 1 < (int)(uVar2 + param_3)) goto LAB_14521c030;
      if (uVar2 != 0) {
        memset(_Dst,0,(ulonglong)uVar2 << 3);
        param_3 = param_3 + uVar2;
      }
      param_3 = param_3 + -1;
    }
    param_3 = param_3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14521b460();
}



// FUNCTION 14521c040 FUN_14521c040 body=412 status=ok
// SIG undefined FUN_14521c040(void)

void FUN_14521c040(longlong param_1,int param_2,int param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  sbyte sVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong *puVar13;
  
  uVar10 = (ulonglong)param_2;
  if (param_2 <= param_3) {
    puVar13 = (ulonglong *)(param_1 + uVar10 * 8);
    do {
      uVar1 = *puVar13;
      uVar6 = (uint)uVar1 & 0x3f;
      uVar7 = uVar1 >> 6;
      sVar5 = (sbyte)uVar6;
      if (uVar7 >> sVar5 != 0) {
LAB_14521c1d7:
                    /* WARNING: Subroutine does not return */
        FUN_14521b4e0();
      }
      iVar9 = (int)uVar10;
      if (uVar6 < 0xf) {
        if ((uVar1 & 0x3f) != 0) {
          iVar12 = 1 << (0xeU - sVar5 & 0x1f);
          puVar8 = (uint *)((uVar7 << (0xeU - sVar5 & 0x3f)) * 0x10 + param_4);
          lVar4 = (longlong)iVar12;
          if (iVar12 != 0) {
            do {
              if (((char)*puVar8 != '\0') || (*(longlong *)(puVar8 + 2) != 0)) goto LAB_14521c1d7;
              *(sbyte *)puVar8 = sVar5;
              *puVar8 = *puVar8 & 0xff;
              *puVar8 = *puVar8 | iVar9 << 8;
              puVar8 = puVar8 + 4;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
        }
      }
      else {
        puVar8 = (uint *)((uVar7 >> (sVar5 - 0xeU & 0x3f)) * 0x10 + param_4);
        if ((char)*puVar8 != '\0') goto LAB_14521c1d7;
        lVar4 = *(longlong *)(puVar8 + 2);
        uVar6 = (*puVar8 & 0xffffff00) + 0x100 | *puVar8 & 0xff;
        *puVar8 = uVar6;
        if (lVar4 == 0) {
          lVar4 = FUN_144a7d36f(4);
          *(longlong *)(puVar8 + 2) = lVar4;
          *(int *)(lVar4 + -4 + ((longlong)(int)*puVar8 >> 8) * 4) = iVar9;
        }
        else {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = (longlong)((int)uVar6 >> 8);
          uVar3 = SUB168(ZEXT816(4) * auVar2,0);
          if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
            uVar3 = 0xffffffffffffffff;
          }
          uVar3 = FUN_144a7d36f(uVar3);
          *(undefined8 *)(puVar8 + 2) = uVar3;
          iVar12 = 0;
          if (0 < ((int)*puVar8 >> 8) + -1) {
            lVar11 = 0;
            do {
              iVar12 = iVar12 + 1;
              *(undefined4 *)(lVar11 + *(longlong *)(puVar8 + 2)) = *(undefined4 *)(lVar11 + lVar4);
              lVar11 = lVar11 + 4;
            } while (iVar12 < ((int)*puVar8 >> 8) + -1);
          }
          thunk_FUN_1400020a8(lVar4);
          *(int *)(*(longlong *)(puVar8 + 2) + -4 + ((longlong)(int)*puVar8 >> 8) * 4) = iVar9;
        }
      }
      uVar10 = (ulonglong)(iVar9 + 1U);
      puVar13 = puVar13 + 1;
    } while ((int)(iVar9 + 1U) <= param_3);
  }
  return;
}



// FUNCTION 14521c1e0 FUN_14521c1e0 body=74 status=ok
// SIG undefined FUN_14521c1e0(void)

void FUN_14521c1e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = 0x4000;
  do {
    if (*plVar1 != 0) {
      thunk_FUN_1400020a8();
      *plVar1 = 0;
    }
    plVar1 = plVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 14521c230 FUN_14521c230 body=735 status=ok
// SIG undefined FUN_14521c230(void)

int FUN_14521c230(longlong param_1,ushort *param_2,int param_3,int param_4,undefined1 *param_5)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  uVar8 = (ulonglong)*param_2;
  iVar2 = 0;
  iVar4 = 0;
  puVar7 = param_5;
  if (1 < (longlong)param_3) {
    lVar5 = 1;
    do {
      if (((uint)uVar8 == (uint)param_2[lVar5]) && (iVar4 < 0xff)) {
        iVar4 = iVar4 + 1;
      }
      else {
        uVar8 = *(ulonglong *)(param_1 + uVar8 * 8);
        uVar1 = *(ulonglong *)(param_1 + (longlong)param_4 * 8);
        uVar6 = (uint)uVar8;
        uVar3 = (uint)uVar1;
        if ((ulonglong)(uVar3 & 0x3f) + 8 + (ulonglong)(uVar6 & 0x3f) <
            (longlong)iVar4 * (ulonglong)(uVar6 & 0x3f)) {
          iVar2 = iVar2 + (uVar6 & 0x3f);
          uVar8 = uVar9 << (sbyte)(uVar6 & 0x3f) | uVar8 >> 6;
          while (7 < iVar2) {
            iVar2 = iVar2 + -8;
            *puVar7 = (char)(uVar8 >> ((byte)iVar2 & 0x3f));
            puVar7 = puVar7 + 1;
          }
          uVar3 = uVar3 & 0x3f;
          iVar2 = iVar2 + uVar3;
          uVar8 = uVar8 << (sbyte)uVar3 | uVar1 >> 6;
          while (7 < iVar2) {
            iVar2 = iVar2 + -8;
            *puVar7 = (char)(uVar8 >> ((byte)iVar2 & 0x3f));
            puVar7 = puVar7 + 1;
          }
          iVar2 = iVar2 + 8;
          uVar9 = uVar8 << 8 | (longlong)iVar4;
          while (7 < iVar2) {
            iVar2 = iVar2 + -8;
            *puVar7 = (char)(uVar9 >> ((byte)iVar2 & 0x3f));
            puVar7 = puVar7 + 1;
          }
        }
        else if (-1 < iVar4) {
          do {
            iVar4 = iVar4 + -1;
            iVar2 = iVar2 + (uVar6 & 0x3f);
            uVar9 = uVar9 << (sbyte)(uVar6 & 0x3f) | uVar8 >> 6;
            while (7 < iVar2) {
              iVar2 = iVar2 + -8;
              *puVar7 = (char)(uVar9 >> ((byte)iVar2 & 0x3f));
              puVar7 = puVar7 + 1;
            }
          } while (-1 < iVar4);
        }
        iVar4 = 0;
      }
      uVar8 = (ulonglong)param_2[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_3);
  }
  uVar8 = *(ulonglong *)(param_1 + uVar8 * 8);
  uVar1 = *(ulonglong *)(param_1 + (longlong)param_4 * 8);
  uVar6 = (uint)uVar8;
  uVar3 = (uint)uVar1;
  if ((ulonglong)(uVar3 & 0x3f) + 8 + (ulonglong)(uVar6 & 0x3f) <
      (ulonglong)(uVar6 & 0x3f) * (longlong)iVar4) {
    iVar2 = iVar2 + (uVar6 & 0x3f);
    uVar8 = uVar9 << (sbyte)(uVar6 & 0x3f) | uVar8 >> 6;
    while (7 < iVar2) {
      iVar2 = iVar2 + -8;
      *puVar7 = (char)(uVar8 >> ((byte)iVar2 & 0x3f));
      puVar7 = puVar7 + 1;
    }
    uVar3 = uVar3 & 0x3f;
    iVar2 = iVar2 + uVar3;
    uVar8 = uVar8 << (sbyte)uVar3 | uVar1 >> 6;
    while (7 < iVar2) {
      iVar2 = iVar2 + -8;
      *puVar7 = (char)(uVar8 >> ((byte)iVar2 & 0x3f));
      puVar7 = puVar7 + 1;
    }
    iVar2 = iVar2 + 8;
    uVar9 = uVar8 << 8 | (longlong)iVar4;
    while (7 < iVar2) {
      iVar2 = iVar2 + -8;
      *puVar7 = (char)(uVar9 >> ((byte)iVar2 & 0x3f));
      puVar7 = puVar7 + 1;
    }
  }
  else if (-1 < iVar4) {
    do {
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + (uVar6 & 0x3f);
      uVar9 = uVar9 << (sbyte)(uVar6 & 0x3f) | uVar8 >> 6;
      while (7 < iVar2) {
        iVar2 = iVar2 + -8;
        *puVar7 = (char)(uVar9 >> ((byte)iVar2 & 0x3f));
        puVar7 = puVar7 + 1;
      }
    } while (-1 < iVar4);
  }
  if (iVar2 != 0) {
    *puVar7 = (char)(uVar9 << (8U - (char)iVar2 & 0x3f));
  }
  return iVar2 + ((int)puVar7 - (int)param_5) * 8;
}



// FUNCTION 14521c510 FUN_14521c510 body=970 status=ok
// SIG undefined FUN_14521c510(void)

void FUN_14521c510(longlong param_1,longlong param_2,byte *param_3,int param_4,int param_5,
                  int param_6,undefined2 *param_7)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  undefined2 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  uVar15 = 0;
  iVar16 = 0;
  puVar1 = param_7 + param_6;
  pbVar10 = param_3 + ((int)(param_4 + 7 + (param_4 + 7 >> 0x1f & 7U)) >> 3);
  puVar9 = param_7;
  while (param_3 < pbVar10) {
    bVar4 = *param_3;
    iVar16 = iVar16 + 8;
    param_3 = param_3 + 1;
    uVar15 = uVar15 << 8 | (ulonglong)bVar4;
    while (0xd < iVar16) {
      auVar3 = *(undefined1 (*) [16])
                (param_2 +
                (ulonglong)((uint)(uVar15 >> ((char)iVar16 - 0xeU & 0x3f)) & 0x3fff) * 0x10);
      iVar17 = auVar3._0_4_ >> 8;
      if (auVar3[0] == '\0') {
        if (auVar3._8_8_ == 0) goto LAB_14521c8d7;
        iVar18 = 0;
        lVar14 = 0;
        if (0 < iVar17) {
          do {
            iVar6 = *(int *)(auVar3._8_8_ + lVar14 * 4);
            uVar12 = *(uint *)(param_1 + (longlong)iVar6 * 8) & 0x3f;
            for (; iVar16 < (int)uVar12; iVar16 = iVar16 + 8) {
              if (pbVar10 <= param_3) goto LAB_14521c6f7;
              bVar4 = *param_3;
              param_3 = param_3 + 1;
              uVar15 = uVar15 << 8 | (ulonglong)bVar4;
            }
            iVar11 = iVar16 - uVar12;
            if (*(ulonglong *)(param_1 + (longlong)iVar6 * 8) >> 6 ==
                (uVar15 >> ((byte)iVar11 & 0x3f) & (1L << (sbyte)uVar12) - 1U)) {
              if (iVar6 == param_5) {
                if (iVar11 < 8) {
                  bVar4 = *param_3;
                  param_3 = param_3 + 1;
                  uVar15 = uVar15 << 8 | (ulonglong)bVar4;
                  iVar11 = iVar11 + 8;
                }
                iVar16 = iVar11 + -8;
                uVar7 = uVar15 >> ((byte)iVar16 & 0x3f);
                uVar8 = uVar7 & 0xff;
                puVar2 = puVar9 + uVar8;
                if (puVar1 < puVar2) goto LAB_14521c8d1;
                if (puVar9 + -1 < param_7) goto LAB_14521c8cb;
                if ((char)uVar7 != '\0') {
                  uVar5 = puVar9[-1];
                  puVar13 = puVar9;
                  for (; puVar9 = puVar2, uVar8 != 0; uVar8 = uVar8 - 1) {
                    *puVar13 = uVar5;
                    puVar13 = puVar13 + 1;
                  }
                }
              }
              else {
                if (puVar1 <= puVar9) goto LAB_14521c8d1;
                *puVar9 = (short)iVar6;
                puVar9 = puVar9 + 1;
                iVar16 = iVar11;
              }
              break;
            }
LAB_14521c6f7:
            iVar18 = iVar18 + 1;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iVar17);
        }
        if (iVar18 == iVar17) goto LAB_14521c8d7;
      }
      else {
        iVar16 = iVar16 - auVar3[0];
        if (iVar16 < 0) goto LAB_14521c8d7;
        if (iVar17 == param_5) {
          if (iVar16 < 8) {
            bVar4 = *param_3;
            param_3 = param_3 + 1;
            uVar15 = uVar15 << 8 | (ulonglong)bVar4;
            iVar16 = iVar16 + 8;
          }
          iVar16 = iVar16 + -8;
          uVar7 = uVar15 >> ((byte)iVar16 & 0x3f);
          uVar8 = uVar7 & 0xff;
          puVar2 = puVar9 + uVar8;
          if (puVar1 < puVar2) goto LAB_14521c8d1;
          if (puVar9 + -1 < param_7) goto LAB_14521c8cb;
          if ((char)uVar7 != '\0') {
            uVar5 = puVar9[-1];
            puVar13 = puVar9;
            for (; puVar9 = puVar2, uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar13 = uVar5;
              puVar13 = puVar13 + 1;
            }
          }
        }
        else {
          if (puVar1 <= puVar9) goto LAB_14521c8d1;
          *puVar9 = auVar3._1_2_;
          puVar9 = puVar9 + 1;
        }
      }
    }
  }
  iVar16 = iVar16 - (-param_4 & 7U);
  uVar15 = uVar15 >> (sbyte)(-param_4 & 7U);
  while (0 < iVar16) {
    iVar17 = *(int *)(param_2 +
                     (ulonglong)((uint)(uVar15 << (0xeU - (char)iVar16 & 0x3f)) & 0x3fff) * 0x10);
    if (((char)iVar17 == '\0') || (iVar16 = iVar16 - (char)iVar17, iVar16 < 0)) {
LAB_14521c8d7:
                    /* WARNING: Subroutine does not return */
      FUN_14521b3e0();
    }
    if (iVar17 >> 8 == param_5) {
      if (iVar16 < 8) {
        bVar4 = *param_3;
        param_3 = param_3 + 1;
        uVar15 = uVar15 << 8 | (ulonglong)bVar4;
        iVar16 = iVar16 + 8;
      }
      iVar16 = iVar16 + -8;
      uVar7 = uVar15 >> ((byte)iVar16 & 0x3f);
      uVar8 = uVar7 & 0xff;
      puVar2 = puVar9 + uVar8;
      if (puVar1 < puVar2) {
LAB_14521c8d1:
                    /* WARNING: Subroutine does not return */
        FUN_14521b360();
      }
      if (puVar9 + -1 < param_7) goto LAB_14521c8cb;
      if ((char)uVar7 != '\0') {
        uVar5 = puVar9[-1];
        puVar13 = puVar9;
        for (; puVar9 = puVar2, uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar13 = uVar5;
          puVar13 = puVar13 + 1;
        }
      }
    }
    else {
      if (puVar1 <= puVar9) goto LAB_14521c8d1;
      *puVar9 = (short)((uint)iVar17 >> 8);
      puVar9 = puVar9 + 1;
    }
  }
  if ((longlong)puVar9 - (longlong)param_7 >> 1 == (longlong)param_6) {
    return;
  }
LAB_14521c8cb:
                    /* WARNING: Subroutine does not return */
  FUN_14521b3a0();
}



// FUNCTION 14521c8f0 FUN_14521c8f0 body=4 status=ok
// SIG undefined FUN_14521c8f0(void)

undefined8 FUN_14521c8f0(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 14521c900 FUN_14521c900 body=251 status=ok
// SIG undefined FUN_14521c900(void)

int FUN_14521c900(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = param_2 + param_1;
  pcVar3 = param_2;
  pcVar4 = param_3;
joined_r0x00014521c918:
  do {
    if (pcVar5 <= pcVar3) {
      return (int)pcVar4 - (int)param_3;
    }
    param_2 = param_2 + 1;
    if (param_2 < pcVar5) {
      do {
        if ((*pcVar3 != *param_2) || (0x7e < (longlong)(param_2 + ~(ulonglong)pcVar3))) break;
        param_2 = param_2 + 1;
      } while (param_2 < pcVar5);
    }
    if (2 < (longlong)param_2 - (longlong)pcVar3) {
      *pcVar4 = ((char)param_2 - (char)pcVar3) + -1;
      pcVar4[1] = *pcVar3;
      pcVar4 = pcVar4 + 2;
      pcVar3 = param_2;
      goto joined_r0x00014521c918;
    }
    if (param_2 < pcVar5) {
      pcVar2 = param_2 + 2;
      do {
        if (((((pcVar2 + -1 < pcVar5) && (cVar1 = pcVar2[-1], *param_2 == cVar1)) &&
             (pcVar2 < pcVar5)) && (cVar1 == *pcVar2)) ||
           (0x7e < (longlong)(pcVar2 + (-2 - (longlong)pcVar3)))) break;
        param_2 = param_2 + 1;
        pcVar2 = pcVar2 + 1;
      } while (param_2 < pcVar5);
    }
    *pcVar4 = (char)pcVar3 - (char)param_2;
    for (; pcVar4 = pcVar4 + 1, pcVar3 < param_2; pcVar3 = pcVar3 + 1) {
      *pcVar4 = *pcVar3;
    }
  } while( true );
}



// FUNCTION 14521ca00 FUN_14521ca00 body=178 status=ok
// SIG undefined FUN_14521ca00(void)

int FUN_14521ca00(int param_1,int param_2,char *param_3,void *param_4)

{
  int iVar1;
  char *_Src;
  void *_Dst;
  size_t _Size;
  
  _Dst = param_4;
  do {
    if (param_1 < 1) {
      return (int)_Dst - (int)param_4;
    }
    iVar1 = (int)*param_3;
    _Src = param_3 + 1;
    if (*param_3 < '\0') {
      param_1 = param_1 + iVar1 + -1;
      param_2 = param_2 + iVar1;
      if ((param_2 < 0) || (param_1 < 0)) {
        return 0;
      }
      _Size = (size_t)-iVar1;
      memcpy(_Dst,_Src,_Size);
      param_3 = _Src + _Size;
    }
    else {
      param_1 = param_1 + -2;
      param_2 = param_2 + (-1 - iVar1);
      if (param_2 < 0) {
        return 0;
      }
      if (param_1 < 0) {
        return 0;
      }
      _Size = (size_t)(iVar1 + 1);
      memset(_Dst,(int)*_Src,_Size);
      param_3 = param_3 + 2;
    }
    _Dst = (void *)((longlong)_Dst + _Size);
  } while( true );
}



// FUNCTION 14521cac0 FUN_14521cac0 body=16 status=ok
// SIG undefined FUN_14521cac0(void)

undefined4 * FUN_14521cac0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 14521cad0 FUN_14521cad0 body=91 status=ok
// SIG undefined FUN_14521cad0(void)

int * FUN_14521cad0(int *param_1,int *param_2)

{
  int iVar1;
  void *_Dst;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 4) != (void *)0x0) {
      free(*(void **)(param_1 + 4));
    }
    _Dst = malloc((longlong)*param_2);
    *(void **)(param_1 + 4) = _Dst;
    iVar1 = *param_2;
    *param_1 = iVar1;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    memcpy(_Dst,*(void **)(param_2 + 4),(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 14521cb30 FUN_14521cb30 body=38 status=ok
// SIG undefined FUN_14521cb30(void)

void FUN_14521cb30(undefined4 *param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 14521cb60 FUN_14521cb60 body=400 status=ok
// SIG undefined FUN_14521cb60(void)

void FUN_14521cb60(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (99 < param_2) {
    FUN_144e40d70(local_78,"Invalid key code film manufacturer code (must be between 0 and 99).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
  }
  *param_1 = param_2;
  if (99 < param_3) {
    FUN_144e40d70(local_78,"Invalid key code film type (must be between 0 and 99).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
  }
  param_1[1] = param_3;
  if (999999 < param_4) {
    FUN_144e40d70(local_78,"Invalid key code prefix (must be between 0 and 999999).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
  }
  param_1[2] = param_4;
  if (param_5 < 10000) {
    param_1[3] = param_5;
    if (0x77 < param_6) {
      FUN_144e40d70(local_78,"Invalid key code perforation offset (must be between 0 and 119).");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
    }
    param_1[4] = param_6;
    if (param_7 - 1 < 0xf) {
      param_1[5] = param_7;
      if (param_8 - 0x14 < 0x65) {
        param_1[6] = param_8;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
      FUN_144e40d70(local_78,
                    "Invalid key code number of perforations per count (must be between 20 and 120)."
                   );
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
    }
    FUN_144e40d70(local_78,
                  "Invalid key code number of perforations per frame (must be between 1 and 15).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
  }
  FUN_144e40d70(local_78,"Invalid key code count (must be between 0 and 9999).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 14521cd00 FUN_14521cd00 body=49 status=ok
// SIG undefined FUN_14521cd00(void)

undefined4 * FUN_14521cd00(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
  }
  return param_1;
}



// FUNCTION 14521cd40 FUN_14521cd40 body=3 status=ok
// SIG undefined FUN_14521cd40(void)

undefined4 FUN_14521cd40(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 14521cd50 FUN_14521cd50 body=82 status=ok
// SIG undefined FUN_14521cd50(void)

void FUN_14521cd50(uint *param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 < 100) {
    *param_1 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  FUN_144e40d70(local_78,"Invalid key code film manufacturer code (must be between 0 and 99).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 14521cdb0 FUN_14521cdb0 body=4 status=ok
// SIG undefined FUN_14521cdb0(void)

undefined4 FUN_14521cdb0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 14521cdc0 FUN_14521cdc0 body=83 status=ok
// SIG undefined FUN_14521cdc0(void)

void FUN_14521cdc0(longlong param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 < 100) {
    *(uint *)(param_1 + 4) = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  FUN_144e40d70(local_78,"Invalid key code film type (must be between 0 and 99).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 14521ce20 FUN_14521ce20 body=4 status=ok
// SIG undefined FUN_14521ce20(void)

undefined4 FUN_14521ce20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 14521ce30 FUN_14521ce30 body=86 status=ok
// SIG undefined FUN_14521ce30(void)

void FUN_14521ce30(longlong param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 < 1000000) {
    *(uint *)(param_1 + 8) = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  FUN_144e40d70(local_78,"Invalid key code prefix (must be between 0 and 999999).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 14521ce90 FUN_14521ce90 body=4 status=ok
// SIG undefined FUN_14521ce90(void)

undefined4 FUN_14521ce90(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 14521cea0 FUN_14521cea0 body=86 status=ok
// SIG undefined FUN_14521cea0(void)

void FUN_14521cea0(longlong param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 < 10000) {
    *(uint *)(param_1 + 0xc) = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  FUN_144e40d70(local_78,"Invalid key code count (must be between 0 and 9999).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 14521cf00 FUN_14521cf00 body=4 status=ok
// SIG undefined FUN_14521cf00(void)

undefined4 FUN_14521cf00(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 14521cf10 FUN_14521cf10 body=83 status=ok
// SIG undefined FUN_14521cf10(void)

void FUN_14521cf10(longlong param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 < 0x78) {
    *(uint *)(param_1 + 0x10) = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  FUN_144e40d70(local_78,"Invalid key code perforation offset (must be between 0 and 119).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 14521cf70 FUN_14521cf70 body=4 status=ok
// SIG undefined FUN_14521cf70(void)

undefined4 FUN_14521cf70(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// FUNCTION 14521cf80 FUN_14521cf80 body=86 status=ok
// SIG undefined FUN_14521cf80(void)

void FUN_14521cf80(longlong param_1,int param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 - 1U < 0xf) {
    *(int *)(param_1 + 0x14) = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  FUN_144e40d70(local_78,
                "Invalid key code number of perforations per frame (must be between 1 and 15).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 14521cfe0 FUN_14521cfe0 body=4 status=ok
// SIG undefined FUN_14521cfe0(void)

undefined4 FUN_14521cfe0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 14521cff0 FUN_14521cff0 body=86 status=ok
// SIG undefined FUN_14521cff0(void)

void FUN_14521cff0(longlong param_1,int param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 - 0x14U < 0x65) {
    *(int *)(param_1 + 0x18) = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  FUN_144e40d70(local_78,
                "Invalid key code number of perforations per count (must be between 20 and 120).");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 14521d050 FUN_14521d050 body=348 status=ok
// SIG undefined FUN_14521d050(void)

void FUN_14521d050(uint *param_1,uint param_2,uint param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) && ((uint)(0xffffffff / (ulonglong)param_2) < param_3)) {
    FUN_144e47140(local_78,"Integer multiplication overflow.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5240);
  }
  uVar7 = CONCAT44(0,param_2 * param_3);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar7;
  uVar3 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  local_88 = FUN_144a7d36f(uVar3);
  uVar4 = 0;
  if (local_88 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = local_88;
    if (uVar7 != 0) {
      lVar5 = local_88 + 2;
      do {
        *(undefined4 *)(lVar5 + -2) = 0xff000000;
        lVar5 = lVar5 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  *(longlong *)(param_1 + 2) = lVar6;
  if (param_4 == 0) {
    if (*param_1 * param_1[1] != 0) {
      uVar7 = (ulonglong)local_88 >> 0x20;
      local_88 = CONCAT44((int)uVar7,0xff000000);
      do {
        uVar2 = (int)uVar4 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 2) + uVar4 * 4) = 0xff000000;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 < *param_1 * param_1[1]);
    }
  }
  else if (*param_1 * param_1[1] != 0) {
    do {
      uVar2 = (int)uVar4 + 1;
      *(undefined4 *)(uVar4 * 4 + *(longlong *)(param_1 + 2)) = *(undefined4 *)(uVar4 * 4 + param_4)
      ;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < *param_1 * param_1[1]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14521d1c0 FUN_14521d1c0 body=9 status=ok
// SIG undefined FUN_14521d1c0(void)

void FUN_14521d1c0(longlong param_1)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14521d1d0 FUN_14521d1d0 body=213 status=ok
// SIG undefined FUN_14521d1d0(void)

int * FUN_14521d1d0(int *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (param_1 != param_2) {
    thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 2));
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar6 = CONCAT44(0,param_2[1] * *param_2);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar6;
    uVar2 = SUB168(ZEXT816(4) * auVar1,0);
    if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    uVar3 = FUN_144a7d36f(uVar2);
    uVar4 = 0;
    if ((uVar3 != 0) && (uVar4 = uVar3, uVar6 != 0)) {
      lVar5 = uVar3 + 2;
      do {
        *(undefined4 *)(lVar5 + -2) = 0xff000000;
        lVar5 = lVar5 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *(ulonglong *)(param_1 + 2) = uVar4;
    uVar6 = 0;
    if (param_1[1] * *param_1 != 0) {
      do {
        uVar7 = (int)uVar6 + 1;
        *(undefined4 *)(uVar6 * 4 + *(longlong *)(param_1 + 2)) =
             *(undefined4 *)(uVar6 * 4 + *(longlong *)(param_2 + 2));
        uVar6 = (ulonglong)uVar7;
      } while (uVar7 < (uint)(param_1[1] * *param_1));
    }
  }
  return param_1;
}



// FUNCTION 14521d2b0 FUN_14521d2b0 body=9 status=ok
// SIG undefined FUN_14521d2b0(void)

undefined8 * FUN_14521d2b0(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14521d2c0 FUN_14521d2c0 body=19 status=ok
// SIG undefined FUN_14521d2c0(void)

undefined4 * FUN_14521d2c0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != param_1) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return param_1;
}



// FUNCTION 14521d2e0 FUN_14521d2e0 body=61 status=ok
// SIG undefined FUN_14521d2e0(void)

uint FUN_14521d2e0(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (param_2 == 1) {
    return uVar1 >> 8 & 0x808000 | (uVar1 & 0xffff8000) << 0x10 | uVar1 & 0x7f7f7fbf;
  }
  if (param_2 == 2) {
    uVar1 = uVar1 & 0xffffff3f;
  }
  return uVar1;
}



// FUNCTION 14521d320 FUN_14521d320 body=77 status=ok
// SIG undefined FUN_14521d320(void)

void FUN_14521d320(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 1) {
    uVar1 = param_2 & 0x3f7f7fbf;
    *param_1 = uVar1;
    if ((param_2 >> 0xf & 1) != 0) {
      uVar1 = uVar1 | 0x800000;
      *param_1 = uVar1;
    }
    if ((param_2 >> 0x17 & 1) != 0) {
      uVar1 = uVar1 | 0x80000000;
      *param_1 = uVar1;
    }
    if ((param_2 >> 0x1e & 1) != 0) {
      uVar1 = uVar1 | 0x40000000;
      *param_1 = uVar1;
    }
    if ((int)param_2 < 0) {
      *param_1 = uVar1 | 0x8000;
      return;
    }
  }
  else {
    if (param_3 == 2) {
      param_2 = param_2 & 0xffffff3f;
    }
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 14521d370 FUN_14521d370 body=4 status=ok
// SIG undefined FUN_14521d370(void)

undefined4 FUN_14521d370(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 14521d380 FUN_14521d380 body=4 status=ok
// SIG undefined FUN_14521d380(void)

void FUN_14521d380(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// FUNCTION 14521d390 FUN_14521d390 body=20 status=ok
// SIG undefined FUN_14521d390(void)

longlong FUN_14521d390(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*param_1 == iVar1) && (iVar1 = param_2[1], param_1[1] == iVar1)) {
    return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
  }
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}



// FUNCTION 14521d3b0 FUN_14521d3b0 body=72 status=ok
// SIG undefined FUN_14521d3b0(void)

longlong FUN_14521d3b0(ushort param_1)

{
  if (-1 < (short)param_1) {
    if ((param_1 & 0x7c00) != 0x7c00) {
      return (longlong)*(float *)(PTR_DAT_14c731618 + (ulonglong)param_1 * 4);
    }
    if ((param_1 & 0x3ff) == 0) {
      return 0xffffffff;
    }
  }
  return 0;
}



// FUNCTION 14521d400 FUN_14521d400 body=83 status=ok
// SIG undefined FUN_14521d400(void)

ulonglong FUN_14521d400(float param_1)

{
  ulonglong uVar1;
  
  if (((int)param_1 < 0) || (0x7f800000 < (uint)ABS(param_1))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
    if (ABS(param_1) != INFINITY) {
      uVar1 = 0xffffffff;
      if (param_1 <= 4.2949673e+09) {
        uVar1 = (longlong)param_1 & 0xffffffff;
      }
      return uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 14521d460 FUN_14521d460 body=63 status=ok
// SIG undefined FUN_14521d460(void)

undefined2 * FUN_14521d460(undefined2 *param_1,uint param_2)

{
  if (*(float *)(PTR_DAT_14c731618 + 0x1effc) <= (float)param_2 &&
      (float)param_2 != *(float *)(PTR_DAT_14c731618 + 0x1effc)) {
    *param_1 = 0x7c00;
    return param_1;
  }
  FUN_144e66df0();
  return param_1;
}



// FUNCTION 14521d4a0 FUN_14521d4a0 body=102 status=ok
// SIG undefined FUN_14521d4a0(void)

undefined2 * FUN_14521d4a0(undefined2 *param_1,float param_2)

{
  if (((uint)param_2 & 0x7f800000) != 0x7f800000) {
    if (*(float *)(PTR_DAT_14c731618 + 0x1effc) <= param_2 &&
        param_2 != *(float *)(PTR_DAT_14c731618 + 0x1effc)) {
      *param_1 = 0x7c00;
      return param_1;
    }
    if (param_2 < *(float *)(PTR_DAT_14c731618 + 0x3effc)) {
      *param_1 = 0xfc00;
      return param_1;
    }
  }
  FUN_144e66df0();
  return param_1;
}



// FUNCTION 14521d510 FUN_14521d510 body=89 status=ok
// SIG undefined FUN_14521d510(void)

longlong FUN_14521d510(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6)

{
  FUN_144b670b0(param_1,param_3);
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x20) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14521d570 FUN_14521d570 body=14 status=ok
// SIG undefined FUN_14521d570(void)

undefined8 * FUN_14521d570(undefined8 *param_1)

{
  *param_1 = Imf_3_2::DeepCompositing::vftable;
  return param_1;
}



// FUNCTION 14521d580 FUN_14521d580 body=11 status=ok
// SIG undefined FUN_14521d580(void)

void FUN_14521d580(undefined8 *param_1)

{
  *param_1 = Imf_3_2::DeepCompositing::vftable;
  return;
}



// FUNCTION 14521d590 FUN_14521d590 body=792 status=ok
// SIG undefined FUN_14521d590(void)

void FUN_14521d590(longlong *param_1,void *param_2,longlong param_3,undefined8 param_4,int param_5,
                  uint param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int *piVar12;
  float fVar13;
  int *local_40;
  undefined8 uStack_38;
  longlong local_30;
  
  uVar1 = param_6;
  lVar7 = (longlong)(int)param_6;
  lVar11 = (longlong)param_5;
  if (0 < param_5) {
    memset(param_2,0,lVar11 << 2);
  }
  if (uVar1 == 0) {
    return;
  }
  local_40 = (int *)0x0;
  uStack_38 = 0;
  local_30 = 0;
  if (param_7 < 2) {
    piVar12 = (int *)0x0;
    goto LAB_14521d714;
  }
  FUN_146c960b8(&local_40,lVar7,&param_6);
  piVar12 = local_40;
  iVar2 = 0;
  if (0 < (int)uVar1) {
    if (0xf < uVar1) {
      iVar8 = 8;
      piVar4 = local_40 + 8;
      do {
        piVar4[-8] = iVar2;
        piVar4[-7] = iVar2 + 1;
        piVar4[-6] = iVar2 + 2;
        piVar4[-5] = iVar2 + 3;
        piVar4[-4] = iVar8 + -4;
        piVar4[-3] = iVar8 + -3;
        piVar4[-2] = iVar8 + -2;
        piVar4[-1] = iVar8 + -1;
        *piVar4 = iVar8;
        piVar4[1] = iVar8 + 1;
        piVar4[2] = iVar8 + 2;
        piVar4[3] = iVar8 + 3;
        piVar4[4] = iVar8 + 4;
        piVar4[5] = iVar8 + 5;
        piVar4[6] = iVar8 + 6;
        piVar4[7] = iVar8 + 7;
        iVar2 = iVar2 + 0x10;
        iVar8 = iVar8 + 0x10;
        piVar4 = piVar4 + 0x10;
      } while (iVar2 < (int)(uVar1 & 0xfffffff0));
      if ((int)uVar1 <= iVar2) goto LAB_14521d6dc;
    }
    piVar4 = local_40 + iVar2;
    do {
      *piVar4 = iVar2;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < (int)uVar1);
  }
LAB_14521d6dc:
  (**(code **)(*param_1 + 0x10))(param_1,local_40,param_3,param_4,param_5,uVar1,param_7);
LAB_14521d714:
  iVar2 = 0;
  piVar4 = piVar12;
  if (0 < (int)uVar1) {
    do {
      iVar8 = iVar2;
      if (1 < param_7) {
        iVar8 = *piVar12;
      }
      piVar4 = local_40;
      if (1.0 <= *(float *)((longlong)param_2 + 8)) break;
      fVar13 = 1.0 - *(float *)((longlong)param_2 + 8);
      lVar7 = (longlong)iVar8;
      if (lVar11 < 4) {
        lVar3 = 0;
        if (0 < lVar11) goto LAB_14521d806;
      }
      else {
        pfVar5 = (float *)((longlong)param_2 + 8);
        plVar10 = (longlong *)(param_3 + 0x10);
        lVar9 = (lVar11 - 4U >> 2) + 1;
        lVar3 = lVar9 * 4;
        do {
          pfVar5[-2] = fVar13 * *(float *)(plVar10[-2] + lVar7 * 4) + pfVar5[-2];
          pfVar5[-1] = fVar13 * *(float *)(plVar10[-1] + lVar7 * 4) + pfVar5[-1];
          *pfVar5 = fVar13 * *(float *)(*plVar10 + lVar7 * 4) + *pfVar5;
          pfVar5[1] = fVar13 * *(float *)(plVar10[1] + lVar7 * 4) + pfVar5[1];
          plVar10 = plVar10 + 4;
          pfVar5 = pfVar5 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        if (lVar3 < lVar11) {
LAB_14521d806:
          pfVar5 = (float *)(lVar3 * 4 + (longlong)param_2);
          do {
            *pfVar5 = fVar13 * *(float *)(*(longlong *)(param_3 + lVar3 * 8) + lVar7 * 4) + *pfVar5;
            lVar3 = lVar3 + 1;
            pfVar5 = pfVar5 + 1;
          } while (lVar3 < lVar11);
        }
      }
      iVar2 = iVar2 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar2 < (int)uVar1);
  }
  if (piVar4 != (int *)0x0) {
    uVar6 = local_30 - (longlong)piVar4 & 0xfffffffffffffffc;
    piVar12 = piVar4;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      piVar12 = *(int **)(piVar4 + -2);
      if (0x1f < (ulonglong)((longlong)piVar4 + (-8 - (longlong)piVar12))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(piVar12,uVar6);
  }
  return;
}



// FUNCTION 14521d8b0 FUN_14521d8b0 body=20 status=ok
// SIG undefined FUN_14521d8b0(void)

void FUN_14521d8b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  FUN_14521d900(param_2,param_2 + (longlong)param_6 * 4,(longlong)param_6,param_3);
  return;
}



// FUNCTION 14521d8d0 FUN_14521d8d0 body=43 status=ok
// SIG undefined FUN_14521d8d0(void)

undefined8 * FUN_14521d8d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::DeepCompositing::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14521d900 FUN_14521d900 body=556 status=ok
// SIG undefined FUN_14521d900(void)

void FUN_14521d900(int *param_1,int *param_2,longlong param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  size_t _Size;
  int *piVar9;
  int *piVar10;
  int local_res8 [2];
  int *local_38;
  int *local_30;
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  while (0x80 < (longlong)(uVar6 & 0xfffffffffffffffc)) {
    if (param_3 < 1) {
      FUN_14521db30(param_1,param_2,param_4);
      if ((longlong)((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffffcU) < 8) {
        return;
      }
      param_2 = param_2 + -1;
      do {
        local_res8[0] = *param_2;
        *param_2 = *param_1;
        FUN_14521e060(param_1,0,(longlong)param_2 - (longlong)param_1 >> 2,local_res8,param_4);
        param_2 = param_2 + -1;
      } while (7 < (longlong)((4 - (longlong)param_1) + (longlong)param_2 & 0xfffffffffffffffcU));
      return;
    }
    FUN_14521dcb0(&local_38,param_1,param_2,param_4);
    piVar9 = local_30;
    piVar10 = local_38;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_38 - (longlong)param_1 & 0xfffffffffffffffcU) <
        (longlong)((longlong)param_2 - (longlong)local_30 & 0xfffffffffffffffcU)) {
      FUN_14521d900(param_1,local_38,param_3,param_4);
      param_1 = piVar9;
      piVar10 = param_2;
    }
    else {
      FUN_14521d900(local_30,param_2,param_3,param_4);
    }
    param_2 = piVar10;
    uVar6 = (longlong)piVar10 - (longlong)param_1;
  }
  if ((param_1 == param_2) || (piVar10 = param_1 + 1, piVar10 == param_2)) {
    return;
  }
  _Size = 4;
  piVar9 = piVar10;
LAB_14521d9f0:
  iVar3 = *piVar9;
  lVar8 = (longlong)iVar3;
  iVar4 = *param_1;
  fVar1 = *(float *)(*param_4 + lVar8 * 4);
  fVar2 = *(float *)(*param_4 + (longlong)iVar4 * 4);
  if (fVar2 <= fVar1) {
    piVar7 = piVar9;
    if (fVar2 < fVar1) {
LAB_14521da40:
      do {
        iVar4 = piVar7[-1];
        fVar1 = *(float *)(*param_4 + lVar8 * 4);
        fVar2 = *(float *)(*param_4 + (longlong)iVar4 * 4);
        if (fVar2 <= fVar1) {
          if (fVar2 < fVar1) goto LAB_14521daec;
          lVar5 = param_4[1];
          fVar1 = *(float *)(lVar5 + lVar8 * 4);
          fVar2 = *(float *)(lVar5 + (longlong)iVar4 * 4);
          if ((fVar2 <= fVar1) && ((fVar2 < fVar1 || (iVar4 <= iVar3)))) goto LAB_14521daec;
        }
        *piVar7 = iVar4;
        piVar7 = piVar7 + -1;
      } while( true );
    }
    lVar5 = param_4[1];
    fVar1 = *(float *)(lVar5 + lVar8 * 4);
    fVar2 = *(float *)(lVar5 + (longlong)iVar4 * 4);
    if ((fVar2 <= fVar1) && ((fVar2 < fVar1 || (iVar4 <= iVar3)))) goto LAB_14521da40;
  }
  memmove(piVar10,param_1,_Size);
  *param_1 = iVar3;
  goto LAB_14521db01;
LAB_14521daec:
  *piVar7 = iVar3;
LAB_14521db01:
  piVar9 = piVar9 + 1;
  _Size = _Size + 4;
  if (piVar9 == param_2) {
    return;
  }
  goto LAB_14521d9f0;
}



// FUNCTION 14521db30 FUN_14521db30 body=378 status=ok
// SIG undefined FUN_14521db30(void)

void FUN_14521db30(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar11 = param_2 - param_1 >> 2;
  lVar9 = param_2 - param_1 >> 3;
  if (0 < lVar9) {
    lVar10 = (longlong)(uVar11 - 1) >> 1;
    do {
      iVar4 = *(int *)(param_1 + -4 + lVar9 * 4);
      lVar9 = lVar9 + -1;
      lVar1 = lVar9;
      while (lVar1 < lVar10) {
        iVar5 = *(int *)(param_1 + 4 + lVar1 * 8);
        iVar6 = *(int *)(param_1 + 8 + lVar1 * 8);
        fVar2 = *(float *)(*param_3 + (longlong)iVar5 * 4);
        fVar3 = *(float *)(*param_3 + (longlong)iVar6 * 4);
        if (fVar2 <= fVar3) {
          if (fVar3 <= fVar2) {
            fVar2 = *(float *)(param_3[1] + (longlong)iVar6 * 4);
            fVar3 = *(float *)(param_3[1] + (longlong)iVar5 * 4);
            if (fVar3 <= fVar2) {
              if (fVar2 <= fVar3) {
                uVar7 = (ulonglong)(iVar5 <= iVar6);
              }
              else {
                uVar7 = 1;
              }
            }
            else {
              uVar7 = 0;
            }
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = 0;
        }
        lVar8 = uVar7 + 1 + lVar1 * 2;
        *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + lVar8 * 4);
        lVar1 = lVar8;
      }
      if ((lVar1 == lVar10) && ((uVar11 & 1) == 0)) {
        *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + -4 + uVar11 * 4);
        lVar1 = uVar11 - 1;
      }
      while (lVar9 < lVar1) {
        lVar8 = lVar1 + -1 >> 1;
        fVar2 = *(float *)(*param_3 + (longlong)iVar4 * 4);
        iVar5 = *(int *)(param_1 + lVar8 * 4);
        fVar3 = *(float *)(*param_3 + (longlong)iVar5 * 4);
        if (fVar2 <= fVar3) {
          if (fVar2 < fVar3) break;
          fVar2 = *(float *)(param_3[1] + (longlong)iVar5 * 4);
          fVar3 = *(float *)(param_3[1] + (longlong)iVar4 * 4);
          if ((fVar3 <= fVar2) && ((fVar3 < fVar2 || (iVar4 <= iVar5)))) break;
        }
        *(int *)(param_1 + lVar1 * 4) = iVar5;
        lVar1 = lVar8;
      }
      *(int *)(param_1 + lVar1 * 4) = iVar4;
    } while (0 < lVar9);
  }
  return;
}



// FUNCTION 14521dcb0 FUN_14521dcb0 body=934 status=ok
// SIG undefined FUN_14521dcb0(void)

void FUN_14521dcb0(ulonglong *param_1,int *param_2,int *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  
  piVar14 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 3);
  lVar7 = (longlong)param_3 + (-4 - (longlong)param_2) >> 2;
  if (lVar7 < 0x29) {
    FUN_14521e1b0(param_2,piVar14,param_3 + -1);
  }
  else {
    lVar7 = lVar7 + 1 >> 3;
    FUN_14521e1b0(param_2,param_2 + lVar7,param_2 + lVar7 * 2);
    FUN_14521e1b0(piVar14 + -lVar7,piVar14,piVar14 + lVar7,param_4);
    FUN_14521e1b0(param_3 + lVar7 * -2 + -1,param_3 + (-1 - lVar7),param_3 + -1,param_4);
    FUN_14521e1b0(param_2 + lVar7,piVar14,param_3 + (-1 - lVar7),param_4);
  }
  piVar10 = piVar14 + 1;
  if (param_2 < piVar14) {
    iVar9 = *piVar14;
    while( true ) {
      iVar5 = piVar14[-1];
      lVar7 = (longlong)iVar5;
      piVar11 = piVar14 + -1;
      lVar13 = (longlong)iVar9;
      fVar1 = *(float *)(*param_4 + lVar7 * 4);
      fVar2 = *(float *)(*param_4 + lVar13 * 4);
      if ((fVar1 < fVar2) || (fVar2 < fVar1)) break;
      fVar3 = *(float *)(param_4[1] + lVar7 * 4);
      fVar4 = *(float *)(param_4[1] + lVar13 * 4);
      if ((fVar3 < fVar4) || (((fVar3 <= fVar4 && (iVar5 < iVar9)) || (fVar2 < fVar1)))) break;
      if (fVar2 <= fVar1) {
        fVar1 = *(float *)(param_4[1] + lVar13 * 4);
        fVar2 = *(float *)(param_4[1] + lVar7 * 4);
        if ((fVar1 < fVar2) || ((fVar1 <= fVar2 && (iVar9 < iVar5)))) break;
      }
      piVar14 = piVar11;
      iVar9 = iVar5;
      if (piVar11 <= param_2) break;
    }
  }
  piVar11 = piVar10;
  piVar12 = piVar14;
  if (piVar10 < param_3) {
    iVar9 = *piVar14;
    lVar7 = (longlong)iVar9;
    fVar1 = *(float *)(*param_4 + lVar7 * 4);
    while( true ) {
      iVar5 = *piVar10;
      lVar13 = (longlong)iVar5;
      fVar2 = *(float *)(*param_4 + lVar13 * 4);
      piVar11 = piVar10;
      if ((fVar2 < fVar1) || (fVar1 < fVar2)) break;
      fVar3 = *(float *)(param_4[1] + lVar13 * 4);
      fVar4 = *(float *)(param_4[1] + lVar7 * 4);
      if ((fVar3 < fVar4) || (((fVar3 <= fVar4 && (iVar5 < iVar9)) || (fVar1 < fVar2)))) break;
      if (fVar1 <= fVar2) {
        fVar2 = *(float *)(param_4[1] + lVar7 * 4);
        fVar3 = *(float *)(param_4[1] + lVar13 * 4);
        if ((fVar2 < fVar3) || ((fVar2 <= fVar3 && (iVar9 < iVar5)))) break;
      }
      piVar10 = piVar10 + 1;
      piVar11 = piVar10;
      if (param_3 <= piVar10) break;
    }
  }
joined_r0x00014521de83:
  do {
    piVar8 = piVar12;
    if (param_3 <= piVar10) {
joined_r0x00014521df1a:
      for (; param_2 < piVar12; piVar12 = piVar12 + -1) {
        piVar8 = piVar8 + -1;
        iVar9 = *piVar14;
        lVar7 = (longlong)iVar9;
        iVar5 = *piVar8;
        lVar13 = (longlong)iVar5;
        fVar1 = *(float *)(*param_4 + lVar7 * 4);
        fVar2 = *(float *)(*param_4 + lVar13 * 4);
        if (fVar1 <= fVar2) {
          if (fVar1 < fVar2) break;
          lVar6 = param_4[1];
          fVar3 = *(float *)(lVar6 + lVar13 * 4);
          fVar4 = *(float *)(lVar6 + lVar7 * 4);
          if ((fVar4 <= fVar3) && ((fVar4 < fVar3 || (iVar9 <= iVar5)))) {
            if (fVar1 < fVar2) break;
            if (fVar1 <= fVar2) {
              lVar6 = param_4[1];
              fVar1 = *(float *)(lVar6 + lVar7 * 4);
              fVar2 = *(float *)(lVar6 + lVar13 * 4);
              if ((fVar1 < fVar2) || ((fVar1 <= fVar2 && (iVar9 < iVar5)))) break;
            }
            piVar14 = piVar14 + -1;
            if (piVar14 != piVar8) {
              iVar9 = *piVar14;
              *piVar14 = iVar5;
              *piVar8 = iVar9;
            }
          }
        }
      }
      if (piVar12 == param_2) {
        if (piVar10 == param_3) {
          *param_1 = (ulonglong)piVar14;
          param_1[1] = (ulonglong)piVar11;
          return;
        }
        if (piVar11 != piVar10) {
          iVar9 = *piVar14;
          *piVar14 = *piVar11;
          *piVar11 = iVar9;
        }
        iVar9 = *piVar14;
        *piVar14 = *piVar10;
        piVar14 = piVar14 + 1;
        *piVar10 = iVar9;
        piVar10 = piVar10 + 1;
        piVar11 = piVar11 + 1;
      }
      else {
        piVar12 = piVar12 + -1;
        if (piVar10 == param_3) {
          piVar14 = piVar14 + -1;
          if (piVar12 != piVar14) {
            iVar9 = *piVar12;
            *piVar12 = *piVar14;
            *piVar14 = iVar9;
          }
          iVar9 = *piVar14;
          *piVar14 = piVar11[-1];
          piVar11[-1] = iVar9;
          piVar11 = piVar11 + -1;
        }
        else {
          iVar9 = *piVar10;
          *piVar10 = *piVar12;
          piVar10 = piVar10 + 1;
          *piVar12 = iVar9;
        }
      }
      goto joined_r0x00014521de83;
    }
    iVar9 = *piVar10;
    lVar7 = (longlong)iVar9;
    iVar5 = *piVar14;
    lVar13 = (longlong)iVar5;
    fVar1 = *(float *)(*param_4 + lVar7 * 4);
    fVar2 = *(float *)(*param_4 + lVar13 * 4);
    if (fVar1 <= fVar2) {
      if (fVar1 < fVar2) goto joined_r0x00014521df1a;
      lVar6 = param_4[1];
      fVar3 = *(float *)(lVar6 + lVar13 * 4);
      fVar4 = *(float *)(lVar6 + lVar7 * 4);
      if ((fVar4 <= fVar3) && ((fVar4 < fVar3 || (iVar9 <= iVar5)))) {
        if (fVar1 < fVar2) goto joined_r0x00014521df1a;
        if (fVar1 <= fVar2) {
          lVar6 = param_4[1];
          fVar1 = *(float *)(lVar6 + lVar7 * 4);
          fVar2 = *(float *)(lVar6 + lVar13 * 4);
          if ((fVar1 < fVar2) || ((fVar1 <= fVar2 && (iVar9 < iVar5)))) goto joined_r0x00014521df1a;
        }
        if (piVar11 != piVar10) {
          iVar5 = *piVar11;
          *piVar11 = iVar9;
          *piVar10 = iVar5;
        }
        piVar11 = piVar11 + 1;
      }
    }
    piVar10 = piVar10 + 1;
  } while( true );
}



// FUNCTION 14521e060 FUN_14521e060 body=325 status=ok
// SIG undefined FUN_14521e060(void)

void FUN_14521e060(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar7) {
    iVar4 = *(int *)(param_1 + 4 + lVar1 * 8);
    iVar5 = *(int *)(param_1 + 8 + lVar1 * 8);
    fVar2 = *(float *)(*param_5 + (longlong)iVar4 * 4);
    fVar3 = *(float *)(*param_5 + (longlong)iVar5 * 4);
    if (fVar2 <= fVar3) {
      if (fVar3 <= fVar2) {
        fVar2 = *(float *)(param_5[1] + (longlong)iVar5 * 4);
        fVar3 = *(float *)(param_5[1] + (longlong)iVar4 * 4);
        if (fVar3 <= fVar2) {
          if (fVar2 <= fVar3) {
            uVar6 = (ulonglong)(iVar4 <= iVar5);
          }
          else {
            uVar6 = 1;
          }
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 0;
    }
    lVar8 = uVar6 + 1 + lVar1 * 2;
    *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + lVar8 * 4);
    lVar1 = lVar8;
  }
  if ((lVar1 == lVar7) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar1 = param_3 - 1;
  }
  while (param_2 < lVar1) {
    iVar4 = *param_4;
    lVar7 = lVar1 + -1 >> 1;
    fVar2 = *(float *)(*param_5 + (longlong)iVar4 * 4);
    iVar5 = *(int *)(param_1 + lVar7 * 4);
    fVar3 = *(float *)(*param_5 + (longlong)iVar5 * 4);
    if (fVar2 <= fVar3) {
      if (fVar2 < fVar3) break;
      fVar2 = *(float *)(param_5[1] + (longlong)iVar5 * 4);
      fVar3 = *(float *)(param_5[1] + (longlong)iVar4 * 4);
      if ((fVar3 <= fVar2) && ((fVar3 < fVar2 || (iVar4 <= iVar5)))) break;
    }
    *(int *)(param_1 + lVar1 * 4) = iVar5;
    lVar1 = lVar7;
  }
  *(int *)(param_1 + lVar1 * 4) = *param_4;
  return;
}



// FUNCTION 14521e1b0 FUN_14521e1b0 body=235 status=ok
// SIG undefined FUN_14521e1b0(void)

void FUN_14521e1b0(int *param_1,int *param_2,int *param_3,longlong *param_4)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = *param_1;
  plVar1 = param_4 + 1;
  iVar5 = *param_2;
  fVar2 = *(float *)(*param_4 + (longlong)iVar4 * 4);
  fVar3 = *(float *)(*param_4 + (longlong)iVar5 * 4);
  if (fVar2 <= fVar3) {
    if (fVar2 < fVar3) goto LAB_14521e20d;
    fVar2 = *(float *)(*plVar1 + (longlong)iVar5 * 4);
    fVar3 = *(float *)(*plVar1 + (longlong)iVar4 * 4);
    if ((fVar3 <= fVar2) && ((fVar3 < fVar2 || (iVar4 <= iVar5)))) goto LAB_14521e20d;
  }
  *param_2 = iVar4;
  *param_1 = iVar5;
LAB_14521e20d:
  iVar4 = *param_2;
  iVar5 = *param_3;
  lVar6 = (longlong)iVar5;
  fVar2 = *(float *)(*param_4 + (longlong)iVar4 * 4);
  fVar3 = *(float *)(*param_4 + lVar6 * 4);
  if (fVar2 <= fVar3) {
    if (fVar2 < fVar3) {
      return;
    }
    fVar2 = *(float *)(*plVar1 + lVar6 * 4);
    fVar3 = *(float *)(*plVar1 + (longlong)iVar4 * 4);
    if (fVar3 <= fVar2) {
      if (fVar3 < fVar2) {
        return;
      }
      if (iVar4 <= iVar5) {
        return;
      }
    }
  }
  *param_3 = iVar4;
  *param_2 = iVar5;
  iVar4 = *param_1;
  fVar2 = *(float *)(*param_4 + lVar6 * 4);
  fVar3 = *(float *)(*param_4 + (longlong)iVar4 * 4);
  if (fVar3 <= fVar2) {
    if (fVar3 < fVar2) {
      return;
    }
    fVar2 = *(float *)(*plVar1 + lVar6 * 4);
    fVar3 = *(float *)(*plVar1 + (longlong)iVar4 * 4);
    if (fVar3 <= fVar2) {
      if (fVar3 < fVar2) {
        return;
      }
      if (iVar4 <= iVar5) {
        return;
      }
    }
  }
  *param_2 = iVar4;
  *param_1 = iVar5;
  return;
}



// FUNCTION 14521e2a0 FUN_14521e2a0 body=107 status=ok
// SIG undefined FUN_14521e2a0(void)

longlong FUN_14521e2a0(longlong param_1)

{
  undefined4 in_stack_00000030;
  
  FUN_144b72800();
  *(undefined4 *)(param_1 + 0x38) = in_stack_00000030;
  return param_1;
}



// FUNCTION 14521e310 FUN_14521e310 body=652 status=ok
// SIG undefined FUN_14521e310(void)

void FUN_14521e310(longlong *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  undefined1 local_2d0;
  longlong *local_2c8;
  undefined8 uStack_2c0;
  longlong *local_2b8;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_298 [16];
  undefined1 local_288 [240];
  undefined1 local_198 [96];
  byte local_138 [255];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if (*param_2 == '\0') {
    FUN_144e47110();
    FUN_1470a639e(local_298,1);
    FUN_141302cc4(local_288,"Frame buffer slice name cannot be an empty string.");
    FUN_144e40dd0(local_198,local_298);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_198,(ThrowInfo *)&DAT_14c6d50e0);
  }
  strncpy((char *)local_138,param_2,0xff);
  local_39 = 0;
  plVar3 = (longlong *)*param_1;
  plVar11 = (longlong *)plVar3[1];
  uStack_2b0 = 0;
  cVar1 = *(char *)((longlong)plVar11 + 0x19);
  plVar10 = plVar3;
  local_2b8 = plVar11;
  while (plVar8 = plVar11, cVar1 == '\0') {
    pbVar9 = (byte *)(plVar8 + 4);
    lVar13 = -(longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar12 = (uint)pbVar9[(longlong)(local_138 + lVar13)];
      if (bVar2 != uVar12) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar12 != 0);
    bVar14 = -1 < (int)(bVar2 - uVar12);
    if (bVar14) {
      plVar11 = (longlong *)*plVar8;
      plVar10 = plVar8;
    }
    else {
      plVar11 = (longlong *)plVar8[2];
    }
    uStack_2b0 = (uint)bVar14;
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    local_2b8 = plVar8;
  }
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    pbVar9 = local_138;
    lVar13 = 0x20 - (longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar12 = (uint)pbVar9[(longlong)plVar10 + lVar13];
      if (bVar2 != uVar12) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar12 != 0);
    if (-1 < (int)(bVar2 - uVar12)) goto LAB_14521e503;
  }
  if (param_1[1] == 0xba2e8ba2e8ba2e) {
                    /* WARNING: Subroutine does not return */
    FUN_1470a938d();
  }
  uStack_2c0 = (longlong *)0x0;
  local_2c8 = param_1;
  plVar10 = (longlong *)FUN_14494321d(0x160);
  pbVar9 = local_138;
  lVar13 = 2;
  plVar11 = plVar10 + 4;
  do {
    lVar7 = *(longlong *)(pbVar9 + 8);
    *plVar11 = *(longlong *)pbVar9;
    plVar11[1] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x18);
    plVar11[2] = *(longlong *)(pbVar9 + 0x10);
    plVar11[3] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x28);
    plVar11[4] = *(longlong *)(pbVar9 + 0x20);
    plVar11[5] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x38);
    plVar11[6] = *(longlong *)(pbVar9 + 0x30);
    plVar11[7] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x48);
    plVar11[8] = *(longlong *)(pbVar9 + 0x40);
    plVar11[9] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x58);
    plVar11[10] = *(longlong *)(pbVar9 + 0x50);
    plVar11[0xb] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x68);
    plVar11[0xc] = *(longlong *)(pbVar9 + 0x60);
    plVar11[0xd] = lVar7;
    uVar4 = *(undefined4 *)(pbVar9 + 0x74);
    uVar5 = *(undefined4 *)(pbVar9 + 0x78);
    uVar6 = *(undefined4 *)(pbVar9 + 0x7c);
    *(undefined4 *)(plVar11 + 0xe) = *(undefined4 *)(pbVar9 + 0x70);
    *(undefined4 *)((longlong)plVar11 + 0x74) = uVar4;
    *(undefined4 *)(plVar11 + 0xf) = uVar5;
    *(undefined4 *)((longlong)plVar11 + 0x7c) = uVar6;
    pbVar9 = pbVar9 + 0x80;
    lVar13 = lVar13 + -1;
    plVar11 = plVar11 + 0x10;
  } while (lVar13 != 0);
  local_2d0 = 0;
  local_2d8 = 0;
  local_2e0 = 0;
  local_2e8 = 1;
  local_2f0 = 1;
  local_2f8 = 0;
  uStack_2c0 = plVar10;
  FUN_144b72800(plVar10 + 0x24,1,0);
  *(undefined4 *)(plVar10 + 0x2b) = 0;
  *plVar10 = (longlong)plVar3;
  plVar10[1] = (longlong)plVar3;
  plVar10[2] = (longlong)plVar3;
  *(undefined2 *)(plVar10 + 3) = 0;
  local_2c8 = local_2b8;
  uStack_2c0 = (longlong *)CONCAT44(uStack_2ac,uStack_2b0);
  plVar10 = (longlong *)FUN_14521e670(param_1,&local_2c8,plVar10);
LAB_14521e503:
  lVar13 = param_3[1];
  plVar10[0x24] = *param_3;
  plVar10[0x25] = lVar13;
  lVar13 = param_3[3];
  plVar10[0x26] = param_3[2];
  plVar10[0x27] = lVar13;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar13 = param_3[5];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(int *)(plVar10 + 0x28) = (int)param_3[4];
  *(undefined4 *)((longlong)plVar10 + 0x144) = uVar4;
  *(int *)(plVar10 + 0x29) = (int)lVar13;
  *(undefined4 *)((longlong)plVar10 + 0x14c) = uVar5;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar13 = param_3[7];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(plVar10 + 0x2a) = (int)param_3[6];
  *(undefined4 *)((longlong)plVar10 + 0x154) = uVar4;
  *(int *)(plVar10 + 0x2b) = (int)lVar13;
  *(undefined4 *)((longlong)plVar10 + 0x15c) = uVar5;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_318);
}



// FUNCTION 14521e5c0 FUN_14521e5c0 body=13 status=ok
// SIG undefined FUN_14521e5c0(void)

undefined8 * FUN_14521e5c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)*param_1;
  return param_2;
}



// FUNCTION 14521e5d0 FUN_14521e5d0 body=10 status=ok
// SIG undefined FUN_14521e5d0(void)

undefined8 * FUN_14521e5d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 14521e5e0 FUN_14521e5e0 body=113 status=ok
// SIG undefined FUN_14521e5e0(void)

void FUN_14521e5e0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    iVar1 = param_2[9];
    iVar2 = param_2[10];
    iVar3 = param_2[0xb];
    *(int *)(param_1 + 0x30) = param_2[8];
    *(int *)(param_1 + 0x34) = iVar1;
    *(int *)(param_1 + 0x38) = iVar2;
    *(int *)(param_1 + 0x3c) = iVar3;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  FUN_144e40d70(local_78,"The type of sample count slice should be UINT.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 14521e660 FUN_14521e660 body=5 status=ok
// SIG undefined FUN_14521e660(void)

longlong FUN_14521e660(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 14521e670 FUN_14521e670 body=603 status=ok
// SIG undefined FUN_14521e670(void)

longlong * FUN_14521e670(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar6 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar6;
  if (plVar6 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar6[2] = (longlong)param_3;
    if (plVar6 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar6 = (longlong)param_3;
    if (plVar6 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar6 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar7 = (longlong *)plVar6[1];
    lVar3 = *(longlong *)plVar7[1];
    if (plVar7 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar7[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar6[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar7[2];
        if (plVar6 == plVar8) {
          plVar7[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar6 = (longlong *)plVar7[1];
            if (plVar7 == (longlong *)*plVar6) {
              *plVar6 = (longlong)plVar8;
            }
            else {
              plVar6[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)*plVar7;
        *plVar7 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar7;
        }
        else {
          plVar4 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
        }
LAB_14521e8ad:
        plVar7[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar7;
        if (plVar6 == plVar8) {
          *plVar7 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar7[1];
            if (plVar7 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)plVar7[2];
        plVar7[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar7[1];
          if (plVar7 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar7;
        goto LAB_14521e8ad;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 14521e8f0 FUN_14521e8f0 body=8 status=ok
// SIG undefined FUN_14521e8f0(void)

void FUN_14521e8f0(undefined8 *param_1)

{
  FUN_144e7a770(*param_1);
  return;
}



// FUNCTION 14521e900 FUN_14521e900 body=8 status=ok
// SIG undefined FUN_14521e900(void)

void FUN_14521e900(undefined8 *param_1)

{
  FUN_144e7a780(*param_1);
  return;
}



// FUNCTION 14521e910 FUN_14521e910 body=8 status=ok
// SIG undefined FUN_14521e910(void)

void FUN_14521e910(undefined8 *param_1)

{
  FUN_144e7af00(*param_1);
  return;
}



// FUNCTION 14521e920 FUN_14521e920 body=8 status=ok
// SIG undefined FUN_14521e920(void)

void FUN_14521e920(undefined8 *param_1)

{
  FUN_144e7b1a0(*param_1);
  return;
}



// FUNCTION 14521e930 FUN_14521e930 body=55 status=ok
// SIG undefined FUN_14521e930(void)

void FUN_14521e930(SIZE_T param_1)

{
  HANDLE hHeap;
  
  if (DAT_14c7fc4d0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014521e94a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c7fc4d0)();
    return;
  }
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x00014521e960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(hHeap,0,param_1);
  return;
}



// FUNCTION 14521e970 FUN_14521e970 body=59 status=ok
// SIG undefined FUN_14521e970(void)

void FUN_14521e970(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    if (DAT_14c7fc4d8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014521e98e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14c7fc4d8)();
      return;
    }
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}



// FUNCTION 14521e9b0 FUN_14521e9b0 body=120 status=ok
// SIG undefined FUN_14521e9b0(void)

void FUN_14521e9b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x40);
  *(undefined8 **)(param_1 + 0x1c0) = puVar1;
  *puVar1 = FUN_14521faa0;
  puVar1[1] = FUN_14521fb00;
  puVar1[2] = FUN_14521fc40;
  puVar1[3] = &LAB_14521fdb0;
  puVar1[4] = FUN_14521fdc0;
  puVar1[5] = FUN_14521f9f0;
  puVar1[6] = FUN_14521fa50;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 14521ea30 FUN_14521ea30 body=120 status=ok
// SIG undefined FUN_14521ea30(void)

void FUN_14521ea30(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = 0xff;
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])();
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = param_2;
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  return;
}



// FUNCTION 14521eab0 FUN_14521eab0 body=127 status=ok
// SIG undefined FUN_14521eab0(void)

void FUN_14521eab0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar2 = (longlong *)param_1[5];
  *(char *)*plVar2 = (char)((ulonglong)param_2 >> 8);
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])();
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar2 = (longlong *)param_1[5];
  *(char *)*plVar2 = (char)param_2;
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  return;
}



// FUNCTION 14521eb30 FUN_14521eb30 body=587 status=ok
// SIG undefined FUN_14521eb30(void)

char FUN_14521eb30(longlong *param_1,int param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  ushort *puVar6;
  undefined1 uVar7;
  longlong lVar8;
  char cVar9;
  int *piVar10;
  
  lVar2 = param_1[(longlong)param_2 + 0xc];
  if (lVar2 == 0) {
    *(undefined4 *)(*param_1 + 0x28) = 0x34;
    *(int *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)();
  }
  cVar9 = '\0';
  lVar8 = 0x10;
  puVar6 = (ushort *)(lVar2 + 4);
  do {
    if (0xff < puVar6[-2]) {
      cVar9 = '\x01';
    }
    if (0xff < puVar6[-1]) {
      cVar9 = '\x01';
    }
    if (0xff < *puVar6) {
      cVar9 = '\x01';
    }
    if (0xff < puVar6[1]) {
      cVar9 = '\x01';
    }
    lVar8 = lVar8 + -1;
    puVar6 = puVar6 + 4;
  } while (lVar8 != 0);
  if (*(char *)(lVar2 + 0x80) == '\0') {
    plVar3 = (longlong *)param_1[5];
    *(undefined1 *)*plVar3 = 0xff;
    *plVar3 = *plVar3 + 1;
    plVar4 = plVar3 + 1;
    *plVar4 = *plVar4 + -1;
    if (*plVar4 == 0) {
      cVar5 = (*(code *)plVar3[3])(param_1);
      if (cVar5 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        (**(code **)*param_1)(param_1);
      }
    }
    plVar3 = (longlong *)param_1[5];
    *(undefined1 *)*plVar3 = 0xdb;
    *plVar3 = *plVar3 + 1;
    plVar4 = plVar3 + 1;
    *plVar4 = *plVar4 + -1;
    if (*plVar4 == 0) {
      cVar5 = (*(code *)plVar3[3])(param_1);
      if (cVar5 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        (**(code **)*param_1)(param_1);
      }
    }
    plVar3 = (longlong *)param_1[5];
    *(undefined1 *)*plVar3 = 0;
    *plVar3 = *plVar3 + 1;
    plVar4 = plVar3 + 1;
    *plVar4 = *plVar4 + -1;
    if (*plVar4 == 0) {
      cVar5 = (*(code *)plVar3[3])(param_1);
      if (cVar5 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        (**(code **)*param_1)(param_1);
      }
    }
    plVar4 = (longlong *)param_1[5];
    uVar7 = 0x43;
    if (cVar9 != '\0') {
      uVar7 = 0x83;
    }
    *(undefined1 *)*plVar4 = uVar7;
    *plVar4 = *plVar4 + 1;
    plVar3 = plVar4 + 1;
    *plVar3 = *plVar3 + -1;
    if (*plVar3 == 0) {
      cVar5 = (*(code *)plVar4[3])(param_1);
      if (cVar5 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        (**(code **)*param_1)(param_1);
      }
    }
    plVar3 = (longlong *)param_1[5];
    *(char *)*plVar3 = cVar9 * '\x10' + (char)param_2;
    *plVar3 = *plVar3 + 1;
    plVar4 = plVar3 + 1;
    *plVar4 = *plVar4 + -1;
    if (*plVar4 == 0) {
      cVar5 = (*(code *)plVar3[3])(param_1);
      if (cVar5 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        (**(code **)*param_1)(param_1);
      }
    }
    piVar10 = &DAT_149bcaf90;
    do {
      uVar1 = *(undefined2 *)(lVar2 + (longlong)*piVar10 * 2);
      if (cVar9 != '\0') {
        plVar3 = (longlong *)param_1[5];
        *(char *)*plVar3 = (char)((ushort)uVar1 >> 8);
        *plVar3 = *plVar3 + 1;
        plVar4 = plVar3 + 1;
        *plVar4 = *plVar4 + -1;
        if (*plVar4 == 0) {
          cVar5 = (*(code *)plVar3[3])(param_1);
          if (cVar5 == '\0') {
            *(undefined4 *)(*param_1 + 0x28) = 0x18;
            (**(code **)*param_1)(param_1);
          }
        }
      }
      plVar3 = (longlong *)param_1[5];
      *(char *)*plVar3 = (char)uVar1;
      *plVar3 = *plVar3 + 1;
      plVar4 = plVar3 + 1;
      *plVar4 = *plVar4 + -1;
      if (*plVar4 == 0) {
        cVar5 = (*(code *)plVar3[3])(param_1);
        if (cVar5 == '\0') {
          *(undefined4 *)(*param_1 + 0x28) = 0x18;
          (**(code **)*param_1)(param_1);
        }
      }
      piVar10 = piVar10 + 1;
    } while ((longlong)piVar10 < 0x149bcb090);
    *(undefined1 *)(lVar2 + 0x80) = 1;
  }
  return cVar9;
}



// FUNCTION 14521ed80 FUN_14521ed80 body=536 status=ok
// SIG undefined FUN_14521ed80(void)

void FUN_14521ed80(longlong *param_1,int param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  uint5 uVar6;
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  char cVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  if (param_3 == '\0') {
    lVar12 = param_1[(longlong)param_2 + 0x10];
  }
  else {
    lVar12 = param_1[(longlong)param_2 + 0x14];
    param_2 = param_2 + 0x10;
  }
  if (lVar12 == 0) {
    *(undefined4 *)(*param_1 + 0x28) = 0x32;
    *(int *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)();
  }
  if (*(char *)(lVar12 + 0x111) == '\0') {
    FUN_14521ea30(param_1,0xc4);
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    lVar11 = 2;
    puVar10 = (uint *)(lVar12 + 1);
    do {
      uVar2 = *puVar10;
      auVar4[0xc] = (char)(uVar2 >> 0x18);
      auVar4._0_12_ = ZEXT712(0);
      uVar6 = CONCAT32(auVar4._10_3_,(ushort)(byte)(uVar2 >> 0x10));
      auVar7._5_8_ = 0;
      auVar7._0_5_ = uVar6;
      iVar17 = iVar17 + (uVar2 & 0xff);
      iVar18 = iVar18 + (int)CONCAT72(SUB137(auVar7 << 0x40,6),(ushort)(byte)(uVar2 >> 8));
      iVar19 = iVar19 + (int)uVar6;
      iVar20 = iVar20 + (uint)(uint3)(auVar4._10_3_ >> 0x10);
      uVar2 = puVar10[1];
      auVar5[0xc] = (char)(uVar2 >> 0x18);
      auVar5._0_12_ = ZEXT712(0);
      uVar6 = CONCAT32(auVar5._10_3_,(ushort)(byte)(uVar2 >> 0x10));
      auVar8._5_8_ = 0;
      auVar8._0_5_ = uVar6;
      iVar13 = iVar13 + (uVar2 & 0xff);
      iVar14 = iVar14 + (int)CONCAT72(SUB137(auVar8 << 0x40,6),(ushort)(byte)(uVar2 >> 8));
      iVar15 = iVar15 + (int)uVar6;
      iVar16 = iVar16 + (uint)(uint3)(auVar5._10_3_ >> 0x10);
      lVar11 = lVar11 + -1;
      puVar10 = puVar10 + 2;
    } while (lVar11 != 0);
    plVar3 = (longlong *)param_1[5];
    iVar13 = iVar13 + iVar17 + iVar15 + iVar19 + iVar14 + iVar18 + iVar16 + iVar20;
    *(char *)*plVar3 = (char)((uint)(iVar13 + 0x13) >> 8);
    *plVar3 = *plVar3 + 1;
    plVar1 = plVar3 + 1;
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      cVar9 = (*(code *)plVar3[3])(param_1);
      if (cVar9 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        (**(code **)*param_1)(param_1);
      }
    }
    plVar3 = (longlong *)param_1[5];
    *(char *)*plVar3 = (char)(iVar13 + 0x13);
    *plVar3 = *plVar3 + 1;
    plVar1 = plVar3 + 1;
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      cVar9 = (*(code *)plVar3[3])(param_1);
      if (cVar9 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        (**(code **)*param_1)(param_1);
      }
    }
    plVar3 = (longlong *)param_1[5];
    *(char *)*plVar3 = (char)param_2;
    *plVar3 = *plVar3 + 1;
    plVar1 = plVar3 + 1;
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      cVar9 = (*(code *)plVar3[3])(param_1);
      if (cVar9 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        (**(code **)*param_1)(param_1);
      }
    }
    lVar11 = 1;
    do {
      plVar3 = (longlong *)param_1[5];
      *(undefined1 *)*plVar3 = *(undefined1 *)(lVar11 + lVar12);
      *plVar3 = *plVar3 + 1;
      plVar1 = plVar3 + 1;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        cVar9 = (*(code *)plVar3[3])(param_1);
        if (cVar9 == '\0') {
          *(undefined4 *)(*param_1 + 0x28) = 0x18;
          (**(code **)*param_1)(param_1);
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < 0x11);
    if (0 < (longlong)iVar13) {
      lVar11 = 0;
      do {
        plVar3 = (longlong *)param_1[5];
        *(undefined1 *)*plVar3 = *(undefined1 *)(lVar12 + 0x11 + lVar11);
        *plVar3 = *plVar3 + 1;
        plVar1 = plVar3 + 1;
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          cVar9 = (*(code *)plVar3[3])(param_1);
          if (cVar9 == '\0') {
            *(undefined4 *)(*param_1 + 0x28) = 0x18;
            (**(code **)*param_1)(param_1);
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar13);
    }
    *(undefined1 *)(lVar12 + 0x111) = 1;
  }
  return;
}



// FUNCTION 14521efa0 FUN_14521efa0 body=724 status=ok
// SIG undefined FUN_14521efa0(void)

void FUN_14521efa0(longlong *param_1)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  char acStack_108 [16];
  char acStack_f8 [136];
  undefined *puStack_70;
  undefined1 auStack_68 [32];
  char local_48 [16];
  char local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar9 = 0;
  uVar12 = uVar9;
  do {
    uVar8 = (ulonglong)(int)uVar12;
    if (0xf < uVar8) {
                    /* WARNING: Subroutine does not return */
      puStack_70 = &UNK_14521f27b;
      FUN_144e2bb84();
    }
    uVar7 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar7;
    local_38[uVar8] = '\0';
    local_48[uVar8] = '\0';
  } while ((int)uVar7 < 0x10);
  if (0 < (int)*(uint *)((longlong)param_1 + 0x134)) {
    iVar10 = *(int *)((longlong)param_1 + 0x18c);
    plVar11 = param_1 + 0x27;
    lVar13 = param_1[0x32];
    uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0x134);
    do {
      lVar3 = *plVar11;
      if ((iVar10 == 0) && (*(int *)((longlong)param_1 + 0x194) == 0)) {
        local_48[*(int *)(lVar3 + 0x14)] = '\x01';
      }
      if ((int)lVar13 != 0) {
        local_38[*(int *)(lVar3 + 0x18)] = '\x01';
      }
      plVar11 = plVar11 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  lVar13 = 0x10;
  uVar12 = uVar9;
  uVar8 = uVar9;
  do {
    pcVar1 = local_48 + uVar12;
    pcVar2 = local_38 + uVar12;
    uVar12 = uVar12 + 1;
    uVar7 = (int)uVar8 + (int)*pcVar1 + (int)*pcVar2;
    uVar8 = (ulonglong)uVar7;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if (uVar7 != 0) {
    plVar4 = (longlong *)param_1[5];
    *(undefined1 *)*plVar4 = 0xff;
    *plVar4 = *plVar4 + 1;
    plVar11 = plVar4 + 1;
    *plVar11 = *plVar11 + -1;
    if (*plVar11 == 0) {
      puStack_70 = (undefined *)0x14521f094;
      cVar6 = (*(code *)plVar4[3])(param_1);
      if (cVar6 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        puStack_70 = (undefined *)0x14521f0aa;
        (**(code **)*param_1)(param_1);
      }
    }
    plVar4 = (longlong *)param_1[5];
    *(undefined1 *)*plVar4 = 0xcc;
    *plVar4 = *plVar4 + 1;
    plVar11 = plVar4 + 1;
    *plVar11 = *plVar11 + -1;
    if (*plVar11 == 0) {
      puStack_70 = (undefined *)0x14521f0c4;
      cVar6 = (*(code *)plVar4[3])(param_1);
      if (cVar6 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        puStack_70 = (undefined *)0x14521f0da;
        (**(code **)*param_1)(param_1);
      }
    }
    plVar4 = (longlong *)param_1[5];
    iVar10 = uVar7 * 2 + 2;
    *(char *)*plVar4 = (char)((uint)iVar10 >> 8);
    *plVar4 = *plVar4 + 1;
    plVar11 = plVar4 + 1;
    *plVar11 = *plVar11 + -1;
    if (*plVar11 == 0) {
      puStack_70 = (undefined *)0x14521f0ff;
      cVar6 = (*(code *)plVar4[3])(param_1);
      if (cVar6 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        puStack_70 = (undefined *)0x14521f115;
        (**(code **)*param_1)(param_1);
      }
    }
    plVar4 = (longlong *)param_1[5];
    *(char *)*plVar4 = (char)iVar10;
    *plVar4 = *plVar4 + 1;
    plVar11 = plVar4 + 1;
    *plVar11 = *plVar11 + -1;
    if (*plVar11 == 0) {
      puStack_70 = (undefined *)0x14521f12f;
      cVar6 = (*(code *)plVar4[3])(param_1);
      if (cVar6 == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        puStack_70 = (undefined *)0x14521f145;
        (**(code **)*param_1)(param_1);
      }
    }
    plVar11 = param_1 + 0x18;
    do {
      if (*(char *)((longlong)plVar11 + (longlong)(acStack_108 + -(longlong)param_1)) != '\0') {
        plVar5 = (longlong *)param_1[5];
        *(char *)*plVar5 = (char)uVar9;
        *plVar5 = *plVar5 + 1;
        plVar4 = plVar5 + 1;
        *plVar4 = *plVar4 + -1;
        if (*plVar4 == 0) {
          puStack_70 = (undefined *)0x14521f184;
          cVar6 = (*(code *)plVar5[3])(param_1);
          if (cVar6 == '\0') {
            *(undefined4 *)(*param_1 + 0x28) = 0x18;
            puStack_70 = (undefined *)0x14521f19a;
            (**(code **)*param_1)(param_1);
          }
        }
        plVar5 = (longlong *)param_1[5];
        *(char *)*plVar5 = (char)plVar11[2] * '\x10' + (char)*plVar11;
        *plVar5 = *plVar5 + 1;
        plVar4 = plVar5 + 1;
        *plVar4 = *plVar4 + -1;
        if (*plVar4 == 0) {
          puStack_70 = (undefined *)0x14521f1bc;
          cVar6 = (*(code *)plVar5[3])(param_1);
          if (cVar6 == '\0') {
            *(undefined4 *)(*param_1 + 0x28) = 0x18;
            puStack_70 = (undefined *)0x14521f1d2;
            (**(code **)*param_1)(param_1);
          }
        }
      }
      if ((acStack_f8 + -(longlong)param_1)[(longlong)plVar11] != '\0') {
        plVar5 = (longlong *)param_1[5];
        *(char *)*plVar5 = (char)uVar9 + '\x10';
        *plVar5 = *plVar5 + 1;
        plVar4 = plVar5 + 1;
        *plVar4 = *plVar4 + -1;
        if (*plVar4 == 0) {
          puStack_70 = (undefined *)0x14521f1f9;
          cVar6 = (*(code *)plVar5[3])(param_1);
          if (cVar6 == '\0') {
            *(undefined4 *)(*param_1 + 0x28) = 0x18;
            puStack_70 = (undefined *)0x14521f20f;
            (**(code **)*param_1)(param_1);
          }
        }
        plVar5 = (longlong *)param_1[5];
        *(char *)*plVar5 = (char)plVar11[4];
        *plVar5 = *plVar5 + 1;
        plVar4 = plVar5 + 1;
        *plVar4 = *plVar4 + -1;
        if (*plVar4 == 0) {
          puStack_70 = (undefined *)0x14521f22c;
          cVar6 = (*(code *)plVar5[3])(param_1);
          if (cVar6 == '\0') {
            *(undefined4 *)(*param_1 + 0x28) = 0x18;
            puStack_70 = (undefined *)0x14521f242;
            (**(code **)*param_1)(param_1);
          }
        }
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
      plVar11 = (longlong *)((longlong)plVar11 + 1);
    } while ((int)uVar7 < 0x10);
  }
                    /* WARNING: Subroutine does not return */
  puStack_70 = &UNK_14521f26f;
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 14521f280 FUN_14521f280 body=414 status=ok
// SIG undefined FUN_14521f280(void)

void FUN_14521f280(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  
  FUN_14521ea30();
  FUN_14521eab0(param_1,*(int *)((longlong)param_1 + 0x4c) * 3 + 8);
  if ((0xffff < *(int *)((longlong)param_1 + 0x34)) || (0xffff < (int)param_1[6])) {
    *(undefined4 *)(*param_1 + 0x28) = 0x29;
    *(undefined4 *)(*param_1 + 0x2c) = 0xffff;
    (**(code **)*param_1)(param_1);
  }
  plVar2 = (longlong *)param_1[5];
  *(char *)*plVar2 = (char)param_1[9];
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  FUN_14521eab0(param_1,*(undefined4 *)((longlong)param_1 + 0x34));
  FUN_14521eab0(param_1,(int)param_1[6]);
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = *(undefined1 *)((longlong)param_1 + 0x4c);
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  puVar5 = (undefined1 *)param_1[0xb];
  iVar4 = 0;
  if (0 < *(int *)((longlong)param_1 + 0x4c)) {
    do {
      plVar2 = (longlong *)param_1[5];
      *(undefined1 *)*plVar2 = *puVar5;
      *plVar2 = *plVar2 + 1;
      plVar1 = plVar2 + 1;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        cVar3 = (*(code *)plVar2[3])(param_1);
        if (cVar3 == '\0') {
          *(undefined4 *)(*param_1 + 0x28) = 0x18;
          (**(code **)*param_1)(param_1);
        }
      }
      plVar2 = (longlong *)param_1[5];
      *(char *)*plVar2 = puVar5[8] * '\x10' + puVar5[0xc];
      *plVar2 = *plVar2 + 1;
      plVar1 = plVar2 + 1;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        cVar3 = (*(code *)plVar2[3])(param_1);
        if (cVar3 == '\0') {
          *(undefined4 *)(*param_1 + 0x28) = 0x18;
          (**(code **)*param_1)(param_1);
        }
      }
      plVar2 = (longlong *)param_1[5];
      *(undefined1 *)*plVar2 = puVar5[0x10];
      *plVar2 = *plVar2 + 1;
      plVar1 = plVar2 + 1;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        cVar3 = (*(code *)plVar2[3])(param_1);
        if (cVar3 == '\0') {
          *(undefined4 *)(*param_1 + 0x28) = 0x18;
          (**(code **)*param_1)(param_1);
        }
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x60;
    } while (iVar4 < *(int *)((longlong)param_1 + 0x4c));
  }
  return;
}



// FUNCTION 14521f420 FUN_14521f420 body=506 status=ok
// SIG undefined FUN_14521f420(void)

void FUN_14521f420(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  
  FUN_14521ea30(param_1,0xda);
  FUN_14521eab0(param_1,*(int *)((longlong)param_1 + 0x134) * 2 + 6);
  plVar1 = (longlong *)param_1[5];
  *(undefined1 *)*plVar1 = *(undefined1 *)((longlong)param_1 + 0x134);
  *plVar1 = *plVar1 + 1;
  plVar7 = plVar1 + 1;
  *plVar7 = *plVar7 + -1;
  if ((*plVar7 == 0) && (cVar4 = (*(code *)plVar1[3])(param_1), cVar4 == '\0')) {
    *(undefined4 *)(*param_1 + 0x28) = 0x18;
    (**(code **)*param_1)(param_1);
  }
  iVar6 = 0;
  if (0 < *(int *)((longlong)param_1 + 0x134)) {
    plVar7 = param_1 + 0x27;
    do {
      plVar2 = (longlong *)param_1[5];
      puVar3 = (undefined1 *)*plVar7;
      *(undefined1 *)*plVar2 = *puVar3;
      *plVar2 = *plVar2 + 1;
      plVar1 = plVar2 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar4 = (*(code *)plVar2[3])(), cVar4 == '\0')) {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        (**(code **)*param_1)();
      }
      if ((*(int *)((longlong)param_1 + 0x18c) == 0) && (*(int *)((longlong)param_1 + 0x194) == 0))
      {
        cVar4 = (char)*(undefined4 *)(puVar3 + 0x14);
      }
      else {
        cVar4 = '\0';
      }
      if ((int)param_1[0x32] == 0) {
        cVar5 = '\0';
      }
      else {
        cVar5 = (char)*(undefined4 *)(puVar3 + 0x18);
      }
      plVar2 = (longlong *)param_1[5];
      *(char *)*plVar2 = cVar4 * '\x10' + cVar5;
      *plVar2 = *plVar2 + 1;
      plVar1 = plVar2 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar4 = (*(code *)plVar2[3])(param_1), cVar4 == '\0')) {
        *(undefined4 *)(*param_1 + 0x28) = 0x18;
        (**(code **)*param_1)(param_1);
      }
      iVar6 = iVar6 + 1;
      plVar7 = plVar7 + 1;
    } while (iVar6 < *(int *)((longlong)param_1 + 0x134));
  }
  plVar1 = (longlong *)param_1[5];
  *(undefined1 *)*plVar1 = *(undefined1 *)((longlong)param_1 + 0x18c);
  *plVar1 = *plVar1 + 1;
  plVar7 = plVar1 + 1;
  *plVar7 = *plVar7 + -1;
  if ((*plVar7 == 0) && (cVar4 = (*(code *)plVar1[3])(param_1), cVar4 == '\0')) {
    *(undefined4 *)(*param_1 + 0x28) = 0x18;
    (**(code **)*param_1)(param_1);
  }
  plVar1 = (longlong *)param_1[5];
  *(char *)*plVar1 = (char)param_1[0x32];
  *plVar1 = *plVar1 + 1;
  plVar7 = plVar1 + 1;
  *plVar7 = *plVar7 + -1;
  if ((*plVar7 == 0) && (cVar4 = (*(code *)plVar1[3])(param_1), cVar4 == '\0')) {
    *(undefined4 *)(*param_1 + 0x28) = 0x18;
    (**(code **)*param_1)(param_1);
  }
  plVar1 = (longlong *)param_1[5];
  *(char *)*plVar1 = *(char *)((longlong)param_1 + 0x194) * '\x10' + (char)param_1[0x33];
  *plVar1 = *plVar1 + 1;
  plVar7 = plVar1 + 1;
  *plVar7 = *plVar7 + -1;
  if ((*plVar7 == 0) && (cVar4 = (*(code *)plVar1[3])(param_1), cVar4 == '\0')) {
    *(undefined4 *)(*param_1 + 0x28) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00014521f611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1);
    return;
  }
  return;
}



// FUNCTION 14521f620 FUN_14521f620 body=572 status=ok
// SIG undefined FUN_14521f620(void)

void FUN_14521f620(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  FUN_14521ea30(param_1,0xe0);
  FUN_14521eab0(param_1,0x10);
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = 0x4a;
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = 0x46;
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = 0x49;
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = 0x46;
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = 0;
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = *(undefined1 *)((longlong)param_1 + 0x115);
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = *(undefined1 *)((longlong)param_1 + 0x116);
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = *(undefined1 *)((longlong)param_1 + 0x117);
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  FUN_14521eab0(param_1,(short)param_1[0x23]);
  FUN_14521eab0(param_1,*(undefined2 *)((longlong)param_1 + 0x11a));
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = 0;
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = 0;
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00014521f853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14521f860 FUN_14521f860 body=391 status=ok
// SIG undefined FUN_14521f860(void)

void FUN_14521f860(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  FUN_14521ea30(param_1,0xee);
  FUN_14521eab0(param_1,0xe);
  plVar1 = (longlong *)param_1[5];
  *(undefined1 *)*plVar1 = 0x41;
  *plVar1 = *plVar1 + 1;
  plVar2 = plVar1 + 1;
  *plVar2 = *plVar2 + -1;
  if (*plVar2 == 0) {
    cVar3 = (*(code *)plVar1[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar1 = (longlong *)param_1[5];
  *(undefined1 *)*plVar1 = 100;
  *plVar1 = *plVar1 + 1;
  plVar2 = plVar1 + 1;
  *plVar2 = *plVar2 + -1;
  if (*plVar2 == 0) {
    cVar3 = (*(code *)plVar1[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar1 = (longlong *)param_1[5];
  *(undefined1 *)*plVar1 = 0x6f;
  *plVar1 = *plVar1 + 1;
  plVar2 = plVar1 + 1;
  *plVar2 = *plVar2 + -1;
  if (*plVar2 == 0) {
    cVar3 = (*(code *)plVar1[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar1 = (longlong *)param_1[5];
  *(undefined1 *)*plVar1 = 0x62;
  *plVar1 = *plVar1 + 1;
  plVar2 = plVar1 + 1;
  *plVar2 = *plVar2 + -1;
  if (*plVar2 == 0) {
    cVar3 = (*(code *)plVar1[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar1 = (longlong *)param_1[5];
  *(undefined1 *)*plVar1 = 0x65;
  *plVar1 = *plVar1 + 1;
  plVar2 = plVar1 + 1;
  *plVar2 = *plVar2 + -1;
  if (*plVar2 == 0) {
    cVar3 = (*(code *)plVar1[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  FUN_14521eab0(param_1,100);
  FUN_14521eab0(param_1,0);
  FUN_14521eab0(param_1,0);
  plVar2 = (longlong *)param_1[5];
  if ((int)param_1[10] == 3) {
    *(undefined1 *)*plVar2 = 1;
  }
  else if ((int)param_1[10] == 5) {
    *(undefined1 *)*plVar2 = 2;
  }
  else {
    *(undefined1 *)*plVar2 = 0;
  }
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00014521f9de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14521f9f0 FUN_14521f9f0 body=83 status=ok
// SIG undefined FUN_14521f9f0(void)

void FUN_14521f9f0(longlong *param_1,undefined4 param_2,uint param_3)

{
  if (0xfffd < param_3) {
    *(undefined4 *)(*param_1 + 0x28) = 0xb;
    (**(code **)*param_1)();
  }
  FUN_14521ea30(param_1,param_2);
  FUN_14521eab0(param_1,param_3 + 2);
  return;
}



// FUNCTION 14521fa50 FUN_14521fa50 body=66 status=ok
// SIG undefined FUN_14521fa50(void)

void FUN_14521fa50(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar2 = (longlong *)param_1[5];
  *(undefined1 *)*plVar2 = param_2;
  *plVar2 = *plVar2 + 1;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar3 = (*(code *)plVar2[3])();
    if (cVar3 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00014521fa89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14521faa0 FUN_14521faa0 body=82 status=ok
// SIG undefined FUN_14521faa0(void)

void FUN_14521faa0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  FUN_14521ea30(param_1,0xd8);
  *(undefined4 *)(lVar1 + 0x38) = 0;
  if (*(char *)(param_1 + 0x114) != '\0') {
    FUN_14521f620(param_1);
  }
  if (*(char *)(param_1 + 0x11c) != '\0') {
    FUN_14521f860(param_1);
  }
  return;
}



// FUNCTION 14521fb00 FUN_14521fb00 body=312 status=ok
// SIG undefined FUN_14521fb00(void)

void FUN_14521fb00(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = 0;
  iVar5 = 0;
  if ((*(char *)(param_1[0x34] + 0x1a) == '\0') &&
     (iVar5 = 0, 0 < *(int *)((longlong)param_1 + 0x4c))) {
    puVar7 = (undefined4 *)(param_1[0xb] + 0x10);
    iVar5 = iVar6;
    do {
      iVar2 = FUN_14521eb30(param_1,*puVar7);
      iVar5 = iVar5 + iVar2;
      puVar7 = puVar7 + 0x18;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)((longlong)param_1 + 0x4c));
  }
  if ((((*(char *)((longlong)param_1 + 0x101) == '\0') &&
       (*(char *)((longlong)param_1 + 0x124) == '\0')) && (*(char *)(param_1[0x34] + 0x1a) == '\0'))
     && ((int)param_1[9] == 8)) {
    uVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x4c);
    bVar1 = true;
    if (0 < (int)*(uint *)((longlong)param_1 + 0x4c)) {
      piVar3 = (int *)(param_1[0xb] + 0x18);
      do {
        if ((1 < piVar3[-1]) || (1 < *piVar3)) {
          bVar1 = false;
        }
        piVar3 = piVar3 + 0x18;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if ((iVar5 != 0) && (bVar1)) {
      bVar1 = false;
      *(undefined4 *)(*param_1 + 0x28) = 0x4b;
      (**(code **)(*param_1 + 8))(param_1,0);
    }
  }
  else {
    bVar1 = false;
  }
  if (*(char *)((longlong)param_1 + 0x101) == '\0') {
    if (*(char *)((longlong)param_1 + 0x124) == '\0') {
      if (*(char *)(param_1[0x34] + 0x1a) == '\0') {
        iVar5 = 0xc1 - (uint)bVar1;
      }
      else {
        iVar5 = 0xc3;
      }
    }
    else {
      iVar5 = 0xc2;
    }
  }
  else {
    iVar5 = (*(char *)((longlong)param_1 + 0x124) != '\0') + 0xc9;
  }
  FUN_14521f280(param_1,iVar5);
  return;
}



// FUNCTION 14521fc40 FUN_14521fc40 body=361 status=ok
// SIG undefined FUN_14521fc40(void)

void FUN_14521fc40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar1 = param_1[0x38];
  if (*(char *)((longlong)param_1 + 0x101) == '\0') {
    iVar6 = 0;
    if (0 < *(int *)((longlong)param_1 + 0x134)) {
      plVar5 = param_1 + 0x27;
      do {
        lVar2 = *plVar5;
        if (((*(int *)((longlong)param_1 + 0x18c) == 0) &&
            (*(int *)((longlong)param_1 + 0x194) == 0)) || (*(char *)(param_1[0x34] + 0x1a) != '\0')
           ) {
          FUN_14521ed80(param_1,*(undefined4 *)(lVar2 + 0x14),0);
        }
        if (((int)param_1[0x32] != 0) && (*(char *)(param_1[0x34] + 0x1a) == '\0')) {
          FUN_14521ed80(param_1,*(undefined4 *)(lVar2 + 0x18),1);
        }
        iVar6 = iVar6 + 1;
        plVar5 = plVar5 + 1;
      } while (iVar6 < *(int *)((longlong)param_1 + 0x134));
    }
  }
  else {
    FUN_14521efa0();
  }
  if (*(int *)((longlong)param_1 + 0x10c) != *(int *)(lVar1 + 0x38)) {
    plVar3 = (longlong *)param_1[5];
    *(undefined1 *)*plVar3 = 0xff;
    *plVar3 = *plVar3 + 1;
    plVar5 = plVar3 + 1;
    *plVar5 = *plVar5 + -1;
    if ((*plVar5 == 0) && (cVar4 = (*(code *)plVar3[3])(param_1), cVar4 == '\0')) {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
    plVar3 = (longlong *)param_1[5];
    *(undefined1 *)*plVar3 = 0xdd;
    *plVar3 = *plVar3 + 1;
    plVar5 = plVar3 + 1;
    *plVar5 = *plVar5 + -1;
    if ((*plVar5 == 0) && (cVar4 = (*(code *)plVar3[3])(param_1), cVar4 == '\0')) {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
    FUN_14521eab0(param_1,4);
    FUN_14521eab0(param_1,*(undefined4 *)((longlong)param_1 + 0x10c));
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)((longlong)param_1 + 0x10c);
  }
  FUN_14521f420(param_1);
  return;
}



// FUNCTION 14521fdc0 FUN_14521fdc0 body=263 status=ok
// SIG undefined FUN_14521fdc0(void)

void FUN_14521fdc0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  FUN_14521ea30(param_1,0xd8);
  iVar3 = 0;
  plVar4 = param_1 + 0xc;
  iVar5 = iVar3;
  do {
    if (*plVar4 != 0) {
      FUN_14521eb30(param_1,iVar5);
    }
    iVar5 = iVar5 + 1;
    plVar4 = plVar4 + 1;
  } while (iVar5 < 4);
  if (*(char *)((longlong)param_1 + 0x101) == '\0') {
    plVar4 = param_1 + 0x14;
    do {
      if (plVar4[-4] != 0) {
        FUN_14521ed80(param_1,iVar3,0);
      }
      if (*plVar4 != 0) {
        FUN_14521ed80(param_1,iVar3,1);
      }
      iVar3 = iVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (iVar3 < 4);
  }
  plVar1 = (longlong *)param_1[5];
  *(undefined1 *)*plVar1 = 0xff;
  *plVar1 = *plVar1 + 1;
  plVar4 = plVar1 + 1;
  *plVar4 = *plVar4 + -1;
  if (*plVar4 == 0) {
    cVar2 = (*(code *)plVar1[3])(param_1);
    if (cVar2 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  plVar1 = (longlong *)param_1[5];
  *(undefined1 *)*plVar1 = 0xd9;
  *plVar1 = *plVar1 + 1;
  plVar4 = plVar1 + 1;
  *plVar4 = *plVar4 + -1;
  if (*plVar4 == 0) {
    cVar2 = (*(code *)plVar1[3])(param_1);
    if (cVar2 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  return;
}



// FUNCTION 14521fed0 FUN_14521fed0 body=457 status=ok
// SIG undefined FUN_14521fed0(void)

void FUN_14521fed0(longlong *param_1)

{
  longlong lVar1;
  errno_t eVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  char local_48 [4];
  int local_44;
  size_t local_40;
  char local_38 [32];
  ulonglong local_18;
  longlong lVar6;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  local_44 = FUN_145496fe0();
  puVar4 = (undefined8 *)FUN_145496f70(param_1,0xa0);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_145496ff0(param_1);
    *(undefined4 *)(*param_1 + 0x28) = 0x36;
    *(undefined4 *)(*param_1 + 0x2c) = 0;
    (**(code **)*param_1)(param_1);
  }
  *(undefined4 *)((longlong)puVar4 + 0x5c) = 1000000000;
  *puVar4 = FUN_1452200b0;
  puVar4[1] = FUN_145220260;
  puVar4[2] = FUN_145220380;
  puVar4[3] = FUN_145220590;
  puVar4[4] = FUN_145220680;
  puVar4[5] = FUN_145220730;
  puVar4[6] = FUN_1452207e0;
  puVar4[7] = FUN_145220a60;
  puVar4[8] = FUN_145220db0;
  puVar4[9] = FUN_145221020;
  puVar4[10] = FUN_145221170;
  *(int *)(puVar4 + 0xb) = local_44;
  puVar4[0xd] = 0;
  puVar4[0xf] = 0;
  puVar4[0xc] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0xa0;
  param_1[1] = (longlong)puVar4;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  local_38[0x10] = '\0';
  local_38[0x11] = '\0';
  local_38[0x12] = '\0';
  local_38[0x13] = '\0';
  local_38[0x14] = '\0';
  local_38[0x15] = '\0';
  local_38[0x16] = '\0';
  local_38[0x17] = '\0';
  local_38[0x18] = '\0';
  local_38[0x19] = '\0';
  local_38[0x1a] = '\0';
  local_38[0x1b] = '\0';
  local_38[0x1c] = '\0';
  local_38[0x1d] = '\0';
  eVar2 = getenv_s(&local_40,local_38,0x1e,"JPEGMEM");
  if (eVar2 == 0) {
    lVar6 = -1;
    do {
      lVar5 = lVar6 + 1;
      lVar1 = lVar6 + 1;
      lVar6 = lVar5;
    } while (local_38[lVar1] != '\0');
    if (lVar5 != 0) {
      local_48[0] = 'x';
      local_58 = 1;
      iVar3 = FUN_144bcade0(local_38,"%ld%c",&local_44,local_48);
      if (0 < iVar3) {
        iVar3 = local_44;
        if ((local_48[0] + 0xb3U & 0xdf) == 0) {
          iVar3 = local_44 * 1000;
        }
        *(int *)(puVar4 + 0xb) = iVar3 * 1000;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
}



// FUNCTION 1452200b0 FUN_1452200b0 body=428 status=ok
// SIG undefined FUN_1452200b0(void)

longlong FUN_1452200b0(longlong *param_1,uint param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  lVar2 = param_1[1];
  lVar9 = (longlong)(int)param_2;
  if (1000000000 < param_3) {
    *(undefined4 *)(*param_1 + 0x28) = 0x36;
    *(undefined4 *)(*param_1 + 0x2c) = 7;
    (**(code **)*param_1)();
  }
  uVar6 = param_3 + 0x1f & 0xffffffffffffffe0;
  uVar1 = uVar6 + 0x37;
  if (1000000000 < uVar1) {
    *(undefined4 *)(*param_1 + 0x28) = 0x36;
    *(undefined4 *)(*param_1 + 0x2c) = 1;
    (**(code **)*param_1)(param_1);
  }
  if (1 < param_2) {
    *(undefined4 *)(*param_1 + 0x28) = 0xe;
    *(uint *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x60 + lVar9 * 8);
  puVar8 = (undefined8 *)0x0;
  while (puVar4 = puVar3, puVar4 != (undefined8 *)0x0) {
    if (uVar6 <= (ulonglong)puVar4[2]) goto LAB_145220217;
    puVar8 = puVar4;
    puVar3 = (undefined8 *)*puVar4;
  }
  if (puVar8 == (undefined8 *)0x0) {
    uVar5 = *(ulonglong *)(&DAT_149cdcd60 + lVar9 * 8);
  }
  else {
    uVar5 = *(ulonglong *)(&DAT_149cdcd70 + lVar9 * 8);
  }
  uVar7 = 1000000000 - uVar1;
  if (uVar5 <= 1000000000 - uVar1) {
    uVar7 = uVar5;
  }
  puVar4 = (undefined8 *)FUN_145496f70(param_1,uVar7 + uVar1);
  while (puVar4 == (undefined8 *)0x0) {
    uVar7 = uVar7 >> 1;
    if (uVar7 < 0x32) {
      *(undefined4 *)(*param_1 + 0x28) = 0x36;
      *(undefined4 *)(*param_1 + 0x2c) = 2;
      (**(code **)*param_1)(param_1);
    }
    puVar4 = (undefined8 *)FUN_145496f70(param_1,uVar7 + uVar1);
  }
  *(longlong *)(lVar2 + 0x90) = *(longlong *)(lVar2 + 0x90) + uVar7 + uVar1;
  puVar4[2] = uVar7 + uVar6;
  *puVar4 = 0;
  puVar4[1] = 0;
  if (puVar8 == (undefined8 *)0x0) {
    *(undefined8 **)(lVar2 + lVar9 * 8 + 0x60) = puVar4;
  }
  else {
    *puVar8 = puVar4;
  }
LAB_145220217:
  puVar8 = puVar4 + 3;
  if (((ulonglong)puVar8 & 0x1f) != 0) {
    puVar8 = (undefined8 *)(((ulonglong)puVar8 & 0xffffffffffffffe0) + 0x20);
  }
  lVar2 = puVar4[1];
  puVar4[2] = puVar4[2] - uVar6;
  puVar4[1] = lVar2 + uVar6;
  return lVar2 + (longlong)puVar8;
}



// FUNCTION 145220260 FUN_145220260 body=279 status=ok
// SIG undefined FUN_145220260(void)

undefined8 * FUN_145220260(longlong *param_1,uint param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  if (1000000000 < param_3) {
    *(undefined4 *)(*param_1 + 0x28) = 0x36;
    *(undefined4 *)(*param_1 + 0x2c) = 8;
    (**(code **)*param_1)();
  }
  uVar5 = param_3 + 0x1f & 0xffffffffffffffe0;
  if (1000000000 < uVar5 + 0x37) {
    *(undefined4 *)(*param_1 + 0x28) = 0x36;
    *(undefined4 *)(*param_1 + 0x2c) = 3;
    (**(code **)*param_1)(param_1);
  }
  if (1 < param_2) {
    *(undefined4 *)(*param_1 + 0x28) = 0xe;
    *(uint *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar3 = (undefined8 *)FUN_145496f90(param_1,uVar5 + 0x37);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined4 *)(*param_1 + 0x28) = 0x36;
    *(undefined4 *)(*param_1 + 0x2c) = 4;
    (**(code **)*param_1)(param_1);
  }
  plVar1 = (longlong *)(lVar2 + 0x90);
  *plVar1 = *plVar1 + uVar5 + 0x37;
  lVar2 = lVar2 + (longlong)(int)param_2 * 8;
  *puVar3 = *(undefined8 *)(lVar2 + 0x70);
  puVar4 = puVar3 + 3;
  puVar3[1] = uVar5;
  puVar3[2] = 0;
  *(undefined8 **)(lVar2 + 0x70) = puVar3;
  if (((ulonglong)puVar4 & 0x1f) != 0) {
    puVar4 = (undefined8 *)(((ulonglong)puVar4 & 0xffffffffffffffe0) + 0x20);
  }
  return puVar4;
}



// FUNCTION 145220380 FUN_145220380 body=525 status=ok
// SIG undefined FUN_145220380(void)

longlong FUN_145220380(longlong *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  lVar4 = param_1[1];
  if ((char)param_1[4] == '\0') {
    iVar10 = (int)param_1[9];
  }
  else {
    iVar10 = (int)param_1[0x23];
  }
  uVar8 = 0;
  if (iVar10 == 0x10) {
    uVar12 = 2;
  }
  else {
    uVar12 = (ulonglong)(iVar10 == 0xc) + 1;
  }
  if (1000000000 < param_3) {
    *(undefined4 *)(*param_1 + 0x28) = 0x36;
    *(undefined4 *)(*param_1 + 0x2c) = 9;
    (**(code **)*param_1)();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar12;
  iVar3 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x40)) / auVar1,0);
  uVar13 = (param_3 - 1) + iVar3 & -iVar3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(int)((int)uVar12 * uVar13);
  auVar2 = (ZEXT816(0) << 0x40 | ZEXT816(0x3b9ac9e8)) / auVar2;
  iVar3 = auVar2._0_4_;
  if (iVar3 == 0) {
    *(undefined4 *)(*param_1 + 0x28) = 0x46;
    (**(code **)*param_1)(param_1);
  }
  uVar11 = (ulonglong)param_4;
  if (iVar3 < (int)param_4) {
    uVar11 = auVar2._0_8_;
  }
  *(int *)(lVar4 + 0x98) = (int)uVar11;
  lVar4 = FUN_1452200b0(param_1,param_2,(ulonglong)param_4 << 3);
  if (iVar10 == 0x10) {
    if (param_4 != 0) {
      do {
        uVar6 = param_4 - (int)uVar8;
        if ((uint)uVar11 < uVar6) {
          uVar6 = (uint)uVar11;
        }
        uVar11 = (ulonglong)uVar6;
        lVar5 = FUN_145220260(param_1,param_2,uVar6 * uVar12 * (ulonglong)uVar13);
        if (uVar6 != 0) {
          uVar7 = uVar11;
          uVar9 = uVar8;
          do {
            uVar8 = (ulonglong)((int)uVar9 + 1);
            *(longlong *)(lVar4 + uVar9 * 8) = lVar5;
            lVar5 = lVar5 + (ulonglong)uVar13 * 2;
            uVar6 = (int)uVar7 - 1;
            uVar7 = (ulonglong)uVar6;
            uVar9 = uVar8;
          } while (uVar6 != 0);
        }
      } while ((uint)uVar8 < param_4);
    }
  }
  else if (iVar10 == 0xc) {
    if (param_4 != 0) {
      do {
        uVar6 = param_4 - (int)uVar8;
        if ((uint)uVar11 < uVar6) {
          uVar6 = (uint)uVar11;
        }
        uVar11 = (ulonglong)uVar6;
        lVar5 = FUN_145220260(param_1,param_2,uVar6 * uVar12 * (ulonglong)uVar13);
        if (uVar6 != 0) {
          uVar7 = uVar11;
          uVar9 = uVar8;
          do {
            uVar8 = (ulonglong)((int)uVar9 + 1);
            *(longlong *)(lVar4 + uVar9 * 8) = lVar5;
            lVar5 = lVar5 + (ulonglong)uVar13 * 2;
            uVar6 = (int)uVar7 - 1;
            uVar7 = (ulonglong)uVar6;
            uVar9 = uVar8;
          } while (uVar6 != 0);
        }
      } while ((uint)uVar8 < param_4);
    }
  }
  else if (param_4 != 0) {
    do {
      uVar6 = param_4 - (int)uVar8;
      if ((uint)uVar11 < uVar6) {
        uVar6 = (uint)uVar11;
      }
      uVar11 = (ulonglong)uVar6;
      lVar5 = FUN_145220260(param_1,param_2,uVar6 * uVar12 * (ulonglong)uVar13);
      uVar7 = uVar11;
      while (uVar6 != 0) {
        *(longlong *)(lVar4 + uVar8 * 8) = lVar5;
        lVar5 = lVar5 + (ulonglong)uVar13;
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
        uVar8 = (ulonglong)((uint)uVar8 + 1);
      }
    } while ((uint)uVar8 < param_4);
  }
  return lVar4;
}



// FUNCTION 145220590 FUN_145220590 body=228 status=ok
// SIG undefined FUN_145220590(void)

longlong FUN_145220590(longlong *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar3 = param_1[1];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(int)param_3 << 7;
  auVar1 = (ZEXT416(0) << 0x40 | ZEXT816(0x3b9ac9e8)) / auVar1;
  iVar2 = auVar1._0_4_;
  if (iVar2 == 0) {
    *(undefined4 *)(*param_1 + 0x28) = 0x46;
    (**(code **)*param_1)();
  }
  uVar8 = (ulonglong)param_4;
  if (iVar2 < (int)param_4) {
    uVar8 = auVar1._0_8_;
  }
  *(int *)(lVar3 + 0x98) = (int)uVar8;
  lVar3 = FUN_1452200b0(param_1,param_2,(ulonglong)param_4 << 3);
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      uVar5 = param_4 - (int)uVar7;
      if ((uint)uVar8 < uVar5) {
        uVar5 = (uint)uVar8;
      }
      uVar8 = (ulonglong)uVar5;
      lVar4 = FUN_145220260(param_1,param_2,(ulonglong)uVar5 * (ulonglong)param_3 * 0x80);
      if (uVar5 != 0) {
        uVar6 = uVar8;
        do {
          *(longlong *)(lVar3 + uVar7 * 8) = lVar4;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          lVar4 = lVar4 + (ulonglong)param_3 * 0x80;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 != 0);
      }
    } while ((uint)uVar7 < param_4);
  }
  return lVar3;
}



// FUNCTION 145220680 FUN_145220680 body=161 status=ok
// SIG undefined FUN_145220680(void)

void FUN_145220680(longlong *param_1,int param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[1];
  if (param_2 != 1) {
    *(undefined4 *)(*param_1 + 0x28) = 0xe;
    *(int *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)();
  }
  puVar2 = (undefined8 *)FUN_1452200b0(param_1,param_2,0x90);
  *(undefined4 *)(puVar2 + 1) = param_5;
  *(undefined4 *)((longlong)puVar2 + 0xc) = param_4;
  *(undefined4 *)(puVar2 + 2) = param_6;
  *puVar2 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x24) = param_3;
  *(undefined1 *)((longlong)puVar2 + 0x26) = 0;
  puVar2[5] = *(undefined8 *)(lVar1 + 0x80);
  *(undefined8 **)(lVar1 + 0x80) = puVar2;
  return;
}



// FUNCTION 145220730 FUN_145220730 body=161 status=ok
// SIG undefined FUN_145220730(void)

void FUN_145220730(longlong *param_1,int param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[1];
  if (param_2 != 1) {
    *(undefined4 *)(*param_1 + 0x28) = 0xe;
    *(int *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)();
  }
  puVar2 = (undefined8 *)FUN_1452200b0(param_1,param_2,0x90);
  *(undefined4 *)(puVar2 + 1) = param_5;
  *(undefined4 *)((longlong)puVar2 + 0xc) = param_4;
  *(undefined4 *)(puVar2 + 2) = param_6;
  *puVar2 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x24) = param_3;
  *(undefined1 *)((longlong)puVar2 + 0x26) = 0;
  puVar2[5] = *(undefined8 *)(lVar1 + 0x88);
  *(undefined8 **)(lVar1 + 0x88) = puVar2;
  return;
}



// FUNCTION 1452207e0 FUN_1452207e0 body=625 status=ok
// SIG undefined FUN_1452207e0(void)

void FUN_1452207e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar1 = param_1[1];
  if ((char)param_1[4] == '\0') {
    iVar3 = (int)param_1[9];
  }
  else {
    iVar3 = (int)param_1[0x23];
  }
  uVar7 = 0;
  if (iVar3 == 0x10) {
    lVar5 = 2;
  }
  else {
    lVar5 = (ulonglong)(iVar3 == 0xc) + 1;
  }
  uVar8 = uVar7;
  for (plVar2 = *(longlong **)(lVar1 + 0x80); plVar2 != (longlong *)0x0;
      plVar2 = (longlong *)plVar2[5]) {
    if (*plVar2 == 0) {
      uVar6 = (*(int *)((longlong)plVar2 + 0xc) * (int)plVar2[1]) * lVar5;
      uVar8 = uVar8 + (*(int *)((longlong)plVar2 + 0xc) * (int)plVar2[2]) * lVar5;
      if (~uVar7 < uVar6) {
        *(undefined4 *)(*param_1 + 0x28) = 0x36;
        *(undefined4 *)(*param_1 + 0x2c) = 10;
        (**(code **)*param_1)(param_1);
      }
      uVar7 = uVar7 + uVar6;
    }
  }
  for (plVar2 = *(longlong **)(lVar1 + 0x88); plVar2 != (longlong *)0x0;
      plVar2 = (longlong *)plVar2[5]) {
    if (*plVar2 == 0) {
      uVar8 = uVar8 + (longlong)(*(int *)((longlong)plVar2 + 0xc) * (int)plVar2[2]) * 0x80;
      uVar6 = (longlong)(*(int *)((longlong)plVar2 + 0xc) * (int)plVar2[1]) * 0x80;
      if (~uVar7 < uVar6) {
        *(undefined4 *)(*param_1 + 0x28) = 0x36;
        *(undefined4 *)(*param_1 + 0x2c) = 0xb;
        (**(code **)*param_1)(param_1);
      }
      uVar7 = uVar7 + uVar6;
    }
  }
  if (uVar8 != 0) {
    uVar6 = FUN_145496fb0(param_1,uVar8,uVar7,*(undefined8 *)(lVar1 + 0x90));
    if (uVar6 < uVar7) {
      uVar6 = uVar6 / uVar8;
      if (uVar6 == 0) {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 1000000000;
    }
    for (plVar2 = *(longlong **)(lVar1 + 0x80); plVar2 != (longlong *)0x0;
        plVar2 = (longlong *)plVar2[5]) {
      if (*plVar2 == 0) {
        iVar3 = (int)plVar2[1];
        if (uVar6 < (iVar3 - 1U) / *(uint *)(plVar2 + 2) + 1) {
          *(uint *)((longlong)plVar2 + 0x14) = *(uint *)(plVar2 + 2) * (int)uVar6;
          FUN_145496fd0(param_1,plVar2 + 6,iVar3 * *(int *)((longlong)plVar2 + 0xc) * (int)lVar5);
          iVar3 = *(int *)((longlong)plVar2 + 0x14);
          *(undefined1 *)((longlong)plVar2 + 0x26) = 1;
        }
        else {
          *(int *)((longlong)plVar2 + 0x14) = iVar3;
        }
        lVar4 = FUN_145220380(param_1,1,*(undefined4 *)((longlong)plVar2 + 0xc),iVar3);
        *plVar2 = lVar4;
        *(undefined4 *)(plVar2 + 3) = *(undefined4 *)(lVar1 + 0x98);
        *(undefined8 *)((longlong)plVar2 + 0x1c) = 0;
        *(undefined1 *)((longlong)plVar2 + 0x25) = 0;
      }
    }
    for (plVar2 = *(longlong **)(lVar1 + 0x88); plVar2 != (longlong *)0x0;
        plVar2 = (longlong *)plVar2[5]) {
      if (*plVar2 == 0) {
        iVar3 = (int)plVar2[1];
        if (uVar6 < (iVar3 - 1U) / *(uint *)(plVar2 + 2) + 1) {
          *(uint *)((longlong)plVar2 + 0x14) = *(uint *)(plVar2 + 2) * (int)uVar6;
          FUN_145496fd0(param_1,plVar2 + 6,iVar3 * *(int *)((longlong)plVar2 + 0xc) * 0x80);
          iVar3 = *(int *)((longlong)plVar2 + 0x14);
          *(undefined1 *)((longlong)plVar2 + 0x26) = 1;
        }
        else {
          *(int *)((longlong)plVar2 + 0x14) = iVar3;
        }
        lVar5 = FUN_145220590(param_1,1,*(undefined4 *)((longlong)plVar2 + 0xc),iVar3);
        *plVar2 = lVar5;
        *(undefined4 *)(plVar2 + 3) = *(undefined4 *)(lVar1 + 0x98);
        *(undefined8 *)((longlong)plVar2 + 0x1c) = 0;
        *(undefined1 *)((longlong)plVar2 + 0x25) = 0;
      }
    }
  }
  return;
}



// FUNCTION 145220a60 FUN_145220a60 body=845 status=ok
// SIG undefined FUN_145220a60(void)

longlong FUN_145220a60(longlong *param_1,longlong *param_2,uint param_3,uint param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong local_res10;
  
  uVar10 = param_3 + param_4;
  if ((char)param_1[4] == '\0') {
    iVar3 = (int)param_1[9];
  }
  else {
    iVar3 = (int)param_1[0x23];
  }
  iVar13 = 0;
  iVar12 = 2;
  if (iVar3 == 0x10) {
    local_res10 = 2;
  }
  else {
    local_res10 = (ulonglong)(iVar3 == 0xc) + 1;
  }
  if (((*(uint *)(param_2 + 1) < uVar10) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0))
  {
    *(undefined4 *)(*param_1 + 0x28) = 0x16;
    (**(code **)*param_1)(param_1);
  }
  uVar5 = *(uint *)((longlong)param_2 + 0x1c);
  if ((param_3 < uVar5) || (*(int *)((longlong)param_2 + 0x14) + uVar5 < uVar10)) {
    if (*(char *)((longlong)param_2 + 0x26) == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x45;
      (**(code **)*param_1)(param_1);
      uVar5 = *(uint *)((longlong)param_2 + 0x1c);
    }
    if (*(char *)((longlong)param_2 + 0x25) == '\0') {
      iVar3 = *(int *)((longlong)param_2 + 0x14);
    }
    else {
      if ((char)param_1[4] == '\0') {
        iVar1 = (int)param_1[9];
      }
      else {
        iVar1 = (int)param_1[0x23];
      }
      if (iVar1 != 0x10) {
        iVar12 = (iVar1 == 0xc) + 1;
      }
      iVar12 = iVar12 * *(int *)((longlong)param_2 + 0xc);
      iVar3 = *(int *)((longlong)param_2 + 0x14);
      iVar14 = uVar5 * iVar12;
      if (0 < iVar3) {
        iVar9 = (int)param_2[3];
        iVar11 = iVar13;
        do {
          if (iVar3 - iVar11 <= iVar9) {
            iVar9 = iVar3 - iVar11;
          }
          iVar4 = *(int *)((longlong)param_2 + 0x1c) + iVar11;
          iVar2 = (int)param_2[4] - iVar4;
          if (iVar9 < iVar2) {
            iVar2 = iVar9;
          }
          iVar4 = (int)param_2[1] - iVar4;
          if (iVar2 < iVar4) {
            iVar4 = iVar2;
          }
          if (iVar4 < 1) break;
          iVar4 = iVar4 * iVar12;
          if (iVar1 == 0x10) {
            (*(code *)param_2[7])();
          }
          else {
            (*(code *)param_2[7])
                      (param_1,param_2 + 6,*(undefined8 *)(*param_2 + (longlong)iVar11 * 8),iVar14,
                       iVar4);
          }
          iVar3 = *(int *)((longlong)param_2 + 0x14);
          iVar14 = iVar14 + iVar4;
          iVar9 = (int)param_2[3];
          iVar11 = iVar11 + iVar9;
        } while (iVar11 < iVar3);
      }
      uVar5 = *(uint *)((longlong)param_2 + 0x1c);
      *(undefined1 *)((longlong)param_2 + 0x25) = 0;
    }
    iVar12 = 2;
    uVar6 = param_3;
    if ((param_3 <= uVar5) && (uVar6 = 0, -1 < (int)(uVar10 - iVar3))) {
      uVar6 = uVar10 - iVar3;
    }
    *(uint *)((longlong)param_2 + 0x1c) = uVar6;
    if ((char)param_1[4] == '\0') {
      iVar1 = (int)param_1[9];
    }
    else {
      iVar1 = (int)param_1[0x23];
    }
    if (iVar1 != 0x10) {
      iVar12 = (iVar1 == 0xc) + 1;
    }
    iVar12 = iVar12 * *(int *)((longlong)param_2 + 0xc);
    iVar14 = uVar6 * iVar12;
    if (0 < iVar3) {
      iVar9 = (int)param_2[3];
      do {
        if (iVar3 - iVar13 <= iVar9) {
          iVar9 = iVar3 - iVar13;
        }
        iVar11 = *(int *)((longlong)param_2 + 0x1c) + iVar13;
        iVar3 = (int)param_2[4] - iVar11;
        if (iVar9 < iVar3) {
          iVar3 = iVar9;
        }
        iVar11 = (int)param_2[1] - iVar11;
        if (iVar3 < iVar11) {
          iVar11 = iVar3;
        }
        if (iVar11 < 1) break;
        iVar11 = iVar11 * iVar12;
        if (iVar1 == 0x10) {
          (*(code *)param_2[6])();
        }
        else {
          (*(code *)param_2[6])
                    (param_1,param_2 + 6,*(undefined8 *)(*param_2 + (longlong)iVar13 * 8),iVar14,
                     iVar11);
        }
        iVar9 = (int)param_2[3];
        iVar14 = iVar14 + iVar11;
        iVar3 = *(int *)((longlong)param_2 + 0x14);
        iVar13 = iVar13 + iVar9;
      } while (iVar13 < iVar3);
    }
  }
  uVar5 = *(uint *)(param_2 + 4);
  if (uVar5 < uVar10) {
    if ((uVar5 < param_3) && (uVar5 = param_3, param_5 != '\0')) {
      *(undefined4 *)(*param_1 + 0x28) = 0x16;
      (**(code **)*param_1)(param_1);
    }
    if (param_5 != '\0') {
      *(uint *)(param_2 + 4) = uVar10;
    }
    if (*(char *)((longlong)param_2 + 0x24) != '\0') {
      uVar6 = *(uint *)((longlong)param_2 + 0xc);
      uVar10 = uVar10 - *(int *)((longlong)param_2 + 0x1c);
      uVar5 = uVar5 - *(int *)((longlong)param_2 + 0x1c);
      if (uVar5 < uVar10) {
        lVar8 = (ulonglong)uVar5 * 8;
        uVar7 = (ulonglong)(uVar10 - uVar5);
        do {
          FUN_144e92a10(*(undefined8 *)(lVar8 + *param_2),(ulonglong)uVar6 * local_res10);
          lVar8 = lVar8 + 8;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      goto LAB_145220d69;
    }
    if (param_5 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x16;
      (**(code **)*param_1)(param_1);
      goto LAB_145220d72;
    }
  }
  else {
LAB_145220d69:
    if (param_5 == '\0') goto LAB_145220d72;
  }
  *(undefined1 *)((longlong)param_2 + 0x25) = 1;
LAB_145220d72:
  return *param_2 + (ulonglong)(param_3 - *(int *)((longlong)param_2 + 0x1c)) * 8;
}



// FUNCTION 145220db0 FUN_145220db0 body=622 status=ok
// SIG undefined FUN_145220db0(void)

longlong FUN_145220db0(longlong *param_1,longlong *param_2,uint param_3,uint param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  uVar11 = param_4 + param_3;
  if (((*(uint *)(param_2 + 1) < uVar11) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0))
  {
    *(undefined4 *)(*param_1 + 0x28) = 0x16;
    (**(code **)*param_1)();
  }
  uVar5 = *(uint *)((longlong)param_2 + 0x1c);
  if ((param_3 < uVar5) || (*(int *)((longlong)param_2 + 0x14) + uVar5 < uVar11)) {
    if (*(char *)((longlong)param_2 + 0x26) == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x45;
      (**(code **)*param_1)(param_1);
      uVar5 = *(uint *)((longlong)param_2 + 0x1c);
    }
    iVar4 = *(int *)((longlong)param_2 + 0x14);
    iVar13 = 0;
    if (*(char *)((longlong)param_2 + 0x25) != '\0') {
      iVar6 = 0;
      iVar1 = *(int *)((longlong)param_2 + 0xc) * 0x80;
      iVar12 = uVar5 * iVar1;
      if (0 < iVar4) {
        iVar9 = (int)param_2[3];
        do {
          if (iVar4 - iVar6 <= iVar9) {
            iVar9 = iVar4 - iVar6;
          }
          iVar3 = *(int *)((longlong)param_2 + 0x1c) + iVar6;
          iVar2 = (int)param_2[4] - iVar3;
          if (iVar2 <= iVar9) {
            iVar9 = iVar2;
          }
          iVar3 = (int)param_2[1] - iVar3;
          if (iVar3 <= iVar9) {
            iVar9 = iVar3;
          }
          if (iVar9 < 1) break;
          iVar9 = iVar9 * iVar1;
          (*(code *)param_2[7])
                    (param_1,param_2 + 6,*(undefined8 *)(*param_2 + (longlong)iVar6 * 8),iVar12,
                     iVar9);
          iVar4 = *(int *)((longlong)param_2 + 0x14);
          iVar12 = iVar12 + iVar9;
          iVar9 = (int)param_2[3];
          iVar6 = iVar6 + iVar9;
        } while (iVar6 < iVar4);
      }
      uVar5 = *(uint *)((longlong)param_2 + 0x1c);
      *(undefined1 *)((longlong)param_2 + 0x25) = 0;
    }
    uVar7 = param_3;
    if (param_3 <= uVar5) {
      uVar7 = 0;
      if (-1 < (int)(uVar11 - iVar4)) {
        uVar7 = uVar11 - iVar4;
      }
    }
    iVar6 = *(int *)((longlong)param_2 + 0xc) * 0x80;
    *(uint *)((longlong)param_2 + 0x1c) = uVar7;
    iVar1 = uVar7 * iVar6;
    if (0 < iVar4) {
      iVar12 = (int)param_2[3];
      do {
        if (iVar4 - iVar13 <= iVar12) {
          iVar12 = iVar4 - iVar13;
        }
        iVar4 = *(int *)((longlong)param_2 + 0x1c) + iVar13;
        iVar9 = (int)param_2[4] - iVar4;
        if (iVar9 <= iVar12) {
          iVar12 = iVar9;
        }
        iVar4 = (int)param_2[1] - iVar4;
        if (iVar12 < iVar4) {
          iVar4 = iVar12;
        }
        if (iVar4 < 1) break;
        iVar4 = iVar4 * iVar6;
        (*(code *)param_2[6])
                  (param_1,param_2 + 6,*(undefined8 *)(*param_2 + (longlong)iVar13 * 8),iVar1,iVar4)
        ;
        iVar12 = (int)param_2[3];
        iVar1 = iVar1 + iVar4;
        iVar4 = *(int *)((longlong)param_2 + 0x14);
        iVar13 = iVar13 + iVar12;
      } while (iVar13 < iVar4);
    }
  }
  uVar5 = *(uint *)(param_2 + 4);
  if (uVar5 < uVar11) {
    if ((uVar5 < param_3) && (uVar5 = param_3, param_5 != '\0')) {
      *(undefined4 *)(*param_1 + 0x28) = 0x16;
      (**(code **)*param_1)(param_1);
    }
    if (param_5 != '\0') {
      *(uint *)(param_2 + 4) = uVar11;
    }
    if (*(char *)((longlong)param_2 + 0x24) != '\0') {
      uVar7 = *(uint *)((longlong)param_2 + 0xc);
      uVar11 = uVar11 - *(int *)((longlong)param_2 + 0x1c);
      uVar5 = uVar5 - *(int *)((longlong)param_2 + 0x1c);
      if (uVar5 < uVar11) {
        lVar10 = (ulonglong)uVar5 * 8;
        uVar8 = (ulonglong)(uVar11 - uVar5);
        do {
          FUN_144e92a10(*(undefined8 *)(*param_2 + lVar10),(ulonglong)uVar7 << 7);
          lVar10 = lVar10 + 8;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      goto LAB_145220fda;
    }
    if (param_5 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x16;
      (**(code **)*param_1)(param_1);
      goto LAB_145220fe3;
    }
  }
  else {
LAB_145220fda:
    if (param_5 == '\0') goto LAB_145220fe3;
  }
  *(undefined1 *)((longlong)param_2 + 0x25) = 1;
LAB_145220fe3:
  return *param_2 + (ulonglong)(param_3 - *(int *)((longlong)param_2 + 0x1c)) * 8;
}



// FUNCTION 145221020 FUN_145221020 body=329 status=ok
// SIG undefined FUN_145221020(void)

void FUN_145221020(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1[1];
  lVar5 = (longlong)(int)param_2;
  if (1 < param_2) {
    *(undefined4 *)(*param_1 + 0x28) = 0xe;
    *(uint *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)();
  }
  if (param_2 == 1) {
    for (lVar4 = *(longlong *)(lVar1 + 0x80); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
      if (*(char *)(lVar4 + 0x26) != '\0') {
        *(undefined1 *)(lVar4 + 0x26) = 0;
        (**(code **)(lVar4 + 0x40))(param_1,lVar4 + 0x30);
      }
    }
    lVar4 = *(longlong *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x80) = 0;
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
      if (*(char *)(lVar4 + 0x26) != '\0') {
        *(undefined1 *)(lVar4 + 0x26) = 0;
        (**(code **)(lVar4 + 0x40))(param_1,lVar4 + 0x30);
      }
    }
    *(undefined8 *)(lVar1 + 0x88) = 0;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x70 + lVar5 * 8);
  *(undefined8 *)(lVar1 + 0x70 + lVar5 * 8) = 0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    lVar4 = puVar2[1] + puVar2[2] + 0x37;
    FUN_145496fa0(param_1,puVar2,lVar4);
    *(longlong *)(lVar1 + 0x90) = *(longlong *)(lVar1 + 0x90) - lVar4;
    puVar2 = puVar3;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x60 + lVar5 * 8);
  *(undefined8 *)(lVar1 + 0x60 + lVar5 * 8) = 0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    lVar5 = puVar2[1] + puVar2[2] + 0x37;
    FUN_145496f80(param_1,puVar2,lVar5);
    *(longlong *)(lVar1 + 0x90) = *(longlong *)(lVar1 + 0x90) - lVar5;
    puVar2 = puVar3;
  }
  return;
}



// FUNCTION 145221170 FUN_145221170 body=358 status=ok
// SIG undefined FUN_145221170(void)

void FUN_145221170(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 1;
  lVar6 = 0x68;
  do {
    lVar1 = *(longlong *)(param_1 + 8);
    if (iVar5 == 1) {
      for (lVar4 = *(longlong *)(lVar1 + 0x80); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
        if (*(char *)(lVar4 + 0x26) != '\0') {
          *(undefined1 *)(lVar4 + 0x26) = 0;
          (**(code **)(lVar4 + 0x40))(param_1,lVar4 + 0x30);
        }
      }
      lVar4 = *(longlong *)(lVar1 + 0x88);
      *(undefined8 *)(lVar1 + 0x80) = 0;
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
        if (*(char *)(lVar4 + 0x26) != '\0') {
          *(undefined1 *)(lVar4 + 0x26) = 0;
          (**(code **)(lVar4 + 0x40))(param_1,lVar4 + 0x30);
        }
      }
      *(undefined8 *)(lVar1 + 0x88) = 0;
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10 + lVar6);
    *(undefined8 *)(lVar1 + 0x10 + lVar6) = 0;
    while (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      lVar4 = puVar2[1] + puVar2[2] + 0x37;
      FUN_145496fa0(param_1,puVar2,lVar4);
      *(longlong *)(lVar1 + 0x90) = *(longlong *)(lVar1 + 0x90) - lVar4;
      puVar2 = puVar3;
    }
    puVar2 = *(undefined8 **)(lVar6 + lVar1);
    *(undefined8 *)(lVar6 + lVar1) = 0;
    while (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      lVar4 = puVar2[1] + puVar2[2] + 0x37;
      FUN_145496f80(param_1,puVar2,lVar4);
      *(longlong *)(lVar1 + 0x90) = *(longlong *)(lVar1 + 0x90) - lVar4;
      puVar2 = puVar3;
    }
    lVar6 = lVar6 + -8;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  FUN_145496f80(param_1,*(undefined8 *)(param_1 + 8),0xa0);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_145496ff0(param_1);
  return;
}



// FUNCTION 1452212e0 FUN_1452212e0 body=87 status=ok
// SIG undefined FUN_1452212e0(void)

void FUN_1452212e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x30);
  *(undefined8 **)(param_1 + 0x220) = puVar1;
  *puVar1 = FUN_145221340;
  puVar1[1] = FUN_145221a20;
  puVar1[2] = FUN_1452218a0;
  puVar1[3] = &LAB_145221a00;
  *(undefined2 *)(puVar1 + 4) = 0;
  *(undefined1 *)(puVar1 + 5) = 1;
  return;
}



// FUNCTION 145221340 FUN_145221340 body=261 status=ok
// SIG undefined FUN_145221340(void)

int FUN_145221340(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1[0x44];
  if (*(char *)(lVar1 + 0x21) != '\0') {
    return 2;
  }
  iVar2 = (**(code **)(param_1[0x45] + 8))();
  if (iVar2 == 1) {
    if (*(char *)(lVar1 + 0x28) != '\0') {
      FUN_145221450(param_1);
      *(undefined1 *)(lVar1 + 0x28) = 0;
      return 1;
    }
    if (*(char *)(lVar1 + 0x20) == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x23;
      (**(code **)*param_1)(param_1);
    }
    FUN_1452218a0(param_1);
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(lVar1 + 0x21) = 1;
    if (*(char *)(lVar1 + 0x28) == '\0') {
      if (*(int *)((longlong)param_1 + 0x9c) < *(int *)((longlong)param_1 + 0xa4)) {
        *(int *)((longlong)param_1 + 0xa4) = *(int *)((longlong)param_1 + 0x9c);
        return 2;
      }
    }
    else if (*(char *)(param_1[0x45] + 0x19) != '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x3b;
      (**(code **)*param_1)(param_1);
      return 2;
    }
  }
  return iVar2;
}



// FUNCTION 145221450 FUN_145221450 body=621 status=ok
// SIG undefined FUN_145221450(void)

void FUN_145221450(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = 1;
  iVar9 = 8;
  if (*(char *)(param_1[0x40] + 0x11) != '\0') {
    iVar9 = 1;
  }
  if ((0xffdc < *(int *)((longlong)param_1 + 0x34)) || (0xffdc < (int)param_1[6])) {
    *(undefined4 *)(*param_1 + 0x28) = 0x29;
    *(undefined4 *)(*param_1 + 0x2c) = 0xffdc;
    (**(code **)*param_1)();
  }
  if ((((int)param_1[0x23] - 8U & 0xfffffff3) != 0) || ((int)param_1[0x23] == 0x14)) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
    (**(code **)*param_1)(param_1);
  }
  iVar3 = (int)param_1[7];
  if (10 < iVar3) {
    *(undefined4 *)(*param_1 + 0x28) = 0x1a;
    *(int *)(*param_1 + 0x2c) = (int)param_1[7];
    *(undefined4 *)(*param_1 + 0x30) = 10;
    (**(code **)*param_1)(param_1);
    iVar3 = (int)param_1[7];
  }
  lVar7 = param_1[0x24];
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x2f) = 1;
  iVar8 = 1;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 1;
  if (0 < iVar3) {
    piVar6 = (int *)(lVar7 + 0xc);
    iVar4 = iVar5;
    do {
      iVar3 = piVar6[-1];
      if (((3 < iVar3 - 1U) || (*piVar6 < 1)) || (4 < *piVar6)) {
        *(undefined4 *)(*param_1 + 0x28) = 0x12;
        (**(code **)*param_1)(param_1);
        iVar8 = (int)param_1[0x2f];
        iVar3 = piVar6[-1];
        iVar1 = *(int *)((longlong)param_1 + 0x17c);
      }
      if (iVar8 <= iVar3) {
        iVar8 = iVar3;
      }
      *(int *)(param_1 + 0x2f) = iVar8;
      if (iVar1 <= *piVar6) {
        iVar1 = *piVar6;
      }
      iVar4 = iVar4 + 1;
      *(int *)((longlong)param_1 + 0x17c) = iVar1;
      piVar6 = piVar6 + 0x18;
      iVar3 = (int)param_1[7];
    } while (iVar4 < iVar3);
    lVar7 = param_1[0x24];
  }
  *(int *)(param_1 + 0x30) = iVar9;
  if (0 < iVar3) {
    piVar6 = (int *)(lVar7 + 0x1c);
    lVar7 = 0x44;
    do {
      piVar6[2] = iVar9;
      iVar1 = FUN_144e92950((int)param_1[6] * piVar6[-5],iVar9 * (int)param_1[0x2f]);
      *piVar6 = iVar1;
      iVar1 = FUN_144e92950(*(int *)((longlong)param_1 + 0x34) * piVar6[-4],
                            iVar9 * *(int *)((longlong)param_1 + 0x17c));
      piVar6[1] = iVar1;
      *(undefined4 *)(lVar7 + -0x28 + param_1[0x40]) = 0;
      *(int *)(lVar7 + param_1[0x40]) = *piVar6 + -1;
      iVar1 = FUN_144e92950((int)param_1[6] * piVar6[-5],(int)param_1[0x2f]);
      piVar6[3] = iVar1;
      iVar1 = FUN_144e92950(*(int *)((longlong)param_1 + 0x34) * piVar6[-4],
                            *(undefined4 *)((longlong)param_1 + 0x17c));
      piVar6[4] = iVar1;
      lVar7 = lVar7 + 4;
      *(undefined1 *)(piVar6 + 5) = 1;
      iVar5 = iVar5 + 1;
      piVar6[0xd] = 0;
      piVar6[0xe] = 0;
      piVar6 = piVar6 + 0x18;
    } while (iVar5 < (int)param_1[7]);
    iVar1 = *(int *)((longlong)param_1 + 0x17c);
  }
  uVar2 = FUN_144e92950(*(undefined4 *)((longlong)param_1 + 0x34),iVar1 * iVar9);
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar2;
  if (((int)param_1[7] <= (int)param_1[0x32]) && ((char)param_1[0x25] == '\0')) {
    *(undefined1 *)(param_1[0x44] + 0x20) = 0;
    return;
  }
  *(undefined1 *)(param_1[0x44] + 0x20) = 1;
  return;
}



// FUNCTION 1452216c0 FUN_1452216c0 body=465 status=ok
// SIG undefined FUN_1452216c0(void)

ulonglong FUN_1452216c0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  
  iVar7 = 8;
  if (*(char *)(param_1[0x40] + 0x11) != '\0') {
    iVar7 = 1;
  }
  if ((int)param_1[0x32] == 1) {
    lVar2 = param_1[0x33];
    *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(lVar2 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)(lVar2 + 0x20);
    *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar2 + 0x24);
    uVar6 = *(uint *)(lVar2 + 0x20);
    uVar1 = *(uint *)(lVar2 + 0xc);
    uVar5 = uVar6 % uVar1;
    *(undefined4 *)(lVar2 + 0x34) = 1;
    *(undefined4 *)(lVar2 + 0x38) = 1;
    *(undefined4 *)(lVar2 + 0x3c) = 1;
    if (uVar5 == 0) {
      uVar5 = *(uint *)(lVar2 + 0xc);
    }
    *(uint *)(lVar2 + 0x48) = uVar5;
    *(undefined4 *)(lVar2 + 0x44) = 1;
    param_1[0x38] = 1;
    return (ulonglong)uVar6 / (ulonglong)uVar1;
  }
  if (3 < (int)param_1[0x32] - 1U) {
    *(undefined4 *)(*param_1 + 0x28) = 0x1a;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x32];
    *(undefined4 *)(*param_1 + 0x30) = 4;
    (**(code **)*param_1)(param_1);
  }
  uVar3 = FUN_144e92950((int)param_1[6],iVar7 * (int)param_1[0x2f]);
  *(undefined4 *)(param_1 + 0x37) = uVar3;
  uVar4 = FUN_144e92950(*(undefined4 *)((longlong)param_1 + 0x34));
  iVar7 = 0;
  *(int *)((longlong)param_1 + 0x1bc) = (int)uVar4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0 < (int)param_1[0x32]) {
    plVar9 = param_1 + 0x33;
    do {
      lVar2 = *plVar9;
      uVar6 = *(uint *)(lVar2 + 8);
      uVar1 = *(uint *)(lVar2 + 0xc);
      iVar8 = uVar1 * uVar6;
      *(uint *)(lVar2 + 0x34) = uVar6;
      *(uint *)(lVar2 + 0x38) = uVar1;
      *(uint *)(lVar2 + 0x40) = uVar6 * *(int *)(lVar2 + 0x24);
      uVar5 = *(uint *)(lVar2 + 0x1c) % uVar6;
      *(int *)(lVar2 + 0x3c) = iVar8;
      if (uVar5 == 0) {
        uVar5 = uVar6;
      }
      *(uint *)(lVar2 + 0x44) = uVar5;
      uVar4 = (ulonglong)*(uint *)(lVar2 + 0x20) / (ulonglong)uVar1;
      uVar6 = (uint)((ulonglong)*(uint *)(lVar2 + 0x20) % (ulonglong)uVar1);
      if (uVar6 == 0) {
        uVar6 = uVar1;
      }
      *(uint *)(lVar2 + 0x48) = uVar6;
      if (10 < (int)param_1[0x38] + iVar8) {
        *(undefined4 *)(*param_1 + 0x28) = 0xd;
        uVar4 = (**(code **)*param_1)(param_1);
      }
      for (; 0 < iVar8; iVar8 = iVar8 + -1) {
        uVar4 = (ulonglong)(int)param_1[0x38];
        *(int *)((longlong)param_1 + uVar4 * 4 + 0x1c4) = iVar7;
        *(int *)(param_1 + 0x38) = (int)param_1[0x38] + 1;
      }
      iVar7 = iVar7 + 1;
      plVar9 = plVar9 + 1;
    } while (iVar7 < (int)param_1[0x32]);
  }
  return uVar4;
}



// FUNCTION 1452218a0 FUN_1452218a0 body=341 status=ok
// SIG undefined FUN_1452218a0(void)

void FUN_1452218a0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  
  FUN_1452216c0();
  if ((*(char *)(param_1[0x40] + 0x11) == '\0') && (iVar9 = 0, 0 < (int)param_1[0x32])) {
    plVar10 = param_1 + 0x33;
    do {
      lVar2 = *plVar10;
      if (*(longlong *)(lVar2 + 0x50) == 0) {
        uVar1 = *(uint *)(lVar2 + 0x10);
        if ((3 < uVar1) || (param_1[(longlong)(int)uVar1 + 0x17] == 0)) {
          *(undefined4 *)(*param_1 + 0x28) = 0x34;
          *(uint *)(*param_1 + 0x2c) = uVar1;
          (**(code **)*param_1)(param_1);
        }
        puVar8 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x82);
        puVar3 = (undefined8 *)param_1[(longlong)(int)uVar1 + 0x17];
        uVar7 = puVar3[1];
        *puVar8 = *puVar3;
        puVar8[1] = uVar7;
        uVar7 = puVar3[3];
        puVar8[2] = puVar3[2];
        puVar8[3] = uVar7;
        uVar7 = puVar3[5];
        puVar8[4] = puVar3[4];
        puVar8[5] = uVar7;
        uVar7 = puVar3[7];
        puVar8[6] = puVar3[6];
        puVar8[7] = uVar7;
        uVar7 = puVar3[9];
        puVar8[8] = puVar3[8];
        puVar8[9] = uVar7;
        uVar7 = puVar3[0xb];
        puVar8[10] = puVar3[10];
        puVar8[0xb] = uVar7;
        uVar4 = *(undefined4 *)((longlong)puVar3 + 100);
        uVar5 = *(undefined4 *)(puVar3 + 0xd);
        uVar6 = *(undefined4 *)((longlong)puVar3 + 0x6c);
        *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar3 + 0xc);
        *(undefined4 *)((longlong)puVar8 + 100) = uVar4;
        *(undefined4 *)(puVar8 + 0xd) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar6;
        uVar7 = puVar3[0xf];
        puVar8[0xe] = puVar3[0xe];
        puVar8[0xf] = uVar7;
        *(undefined2 *)(puVar8 + 0x10) = *(undefined2 *)(puVar3 + 0x10);
        *(undefined8 **)(lVar2 + 0x50) = puVar8;
      }
      iVar9 = iVar9 + 1;
      plVar10 = plVar10 + 1;
    } while (iVar9 < (int)param_1[0x32]);
  }
  (**(code **)param_1[0x46])(param_1);
  (**(code **)param_1[0x42])(param_1);
  *(undefined8 *)param_1[0x44] = *(undefined8 *)(param_1[0x42] + 8);
  return;
}



// FUNCTION 145221a20 FUN_145221a20 body=74 status=ok
// SIG undefined FUN_145221a20(void)

void FUN_145221a20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x44];
  *puVar1 = FUN_145221340;
  *(undefined2 *)(puVar1 + 4) = 0;
  *(undefined1 *)(puVar1 + 5) = 1;
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)param_1[0x45])(param_1);
  param_1[0x16] = 0;
  return;
}



// FUNCTION 145221a70 FUN_145221a70 body=279 status=ok
// SIG undefined FUN_145221a70(void)

undefined8 FUN_145221a70(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((longlong)param_1 + 0x1fc);
  *(undefined4 *)(*param_1 + 0x28) = 0x79;
  *(int *)(*param_1 + 0x2c) = iVar3;
  *(int *)(*param_1 + 0x30) = param_2;
  (**(code **)(*param_1 + 8))(param_1,0xffffffff);
  do {
    if (iVar3 < 0xc0) {
LAB_145221ab8:
      iVar2 = 2;
    }
    else if (((iVar3 - 0xd0U < 8) && (iVar3 != (param_2 + 1U & 7) + 0xd0)) &&
            (iVar3 != (param_2 + 2U & 7) + 0xd0)) {
      if ((iVar3 == (param_2 - 1U & 7) + 0xd0) || (iVar3 == (param_2 - 2U & 7) + 0xd0))
      goto LAB_145221ab8;
      iVar2 = 1;
    }
    else {
      iVar2 = 3;
    }
    *(undefined4 *)(*param_1 + 0x28) = 0x61;
    *(int *)(*param_1 + 0x2c) = iVar3;
    *(int *)(*param_1 + 0x30) = iVar2;
    (**(code **)(*param_1 + 8))(param_1,4);
    if (iVar2 == 1) {
      *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
      return 1;
    }
    if (iVar2 == 2) {
      cVar1 = FUN_145223160(param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar3 = *(int *)((longlong)param_1 + 0x1fc);
    }
    else if (iVar2 == 3) {
      return 1;
    }
  } while( true );
}



// FUNCTION 145221b90 FUN_145221b90 body=272 status=ok
// SIG undefined FUN_145221b90(void)

void FUN_145221b90(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x108);
  *(undefined8 **)(param_1 + 0x228) = puVar2;
  *puVar2 = &LAB_145223910;
  puVar2[1] = FUN_1452232a0;
  puVar2[2] = FUN_145223870;
  puVar2[5] = FUN_145223080;
  puVar2[0x16] = 0;
  puVar2[7] = FUN_145223080;
  puVar2[0x17] = 0;
  puVar2[8] = FUN_145223080;
  puVar2[9] = FUN_145223080;
  puVar2[0x18] = 0;
  puVar2[10] = FUN_145223080;
  puVar2[0xb] = FUN_145223080;
  puVar2[0x19] = 0;
  puVar2[0xc] = FUN_145223080;
  puVar2[0xd] = FUN_145223080;
  puVar2[0x1a] = 0;
  puVar2[0xe] = FUN_145223080;
  puVar2[0xf] = FUN_145223080;
  puVar2[0x1b] = 0;
  puVar2[0x10] = FUN_145223080;
  puVar2[0x11] = FUN_145223080;
  puVar2[0x1c] = 0;
  puVar2[0x12] = FUN_145223080;
  puVar2[0x13] = FUN_145223080;
  puVar2[0x1d] = 0;
  puVar2[0x15] = FUN_145223080;
  *(undefined4 *)(puVar2 + 0x1e) = 0;
  puVar2[6] = FUN_145222f00;
  puVar2[0x14] = FUN_145222f00;
  lVar1 = *(longlong *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  return;
}



// FUNCTION 145221ca0 FUN_145221ca0 body=855 status=ok
// SIG undefined FUN_145221ca0(void)

ulonglong FUN_145221ca0(longlong *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint *puVar11;
  
  puVar3 = (undefined8 *)param_1[5];
  lVar7 = puVar3[1];
  pbVar9 = (byte *)*puVar3;
  *(undefined1 *)(param_1 + 0x25) = param_2;
  *(undefined1 *)(param_1[0x40] + 0x11) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x129) = param_4;
  if (lVar7 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 != '\0') {
      pbVar9 = (byte *)*puVar3;
      lVar7 = puVar3[1];
      goto LAB_145221cf5;
    }
LAB_145221ff3:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
LAB_145221cf5:
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_145221ff3;
      pbVar9 = (byte *)*puVar3;
      lVar7 = puVar3[1];
    }
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_145221ff3;
      pbVar9 = (byte *)*puVar3;
      lVar7 = puVar3[1];
    }
    pbVar10 = pbVar9 + 1;
    *(uint *)(param_1 + 0x23) = (uint)*pbVar9;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_145221ff3;
      pbVar10 = (byte *)*puVar3;
      lVar7 = puVar3[1];
    }
    pbVar9 = pbVar10 + 1;
    iVar6 = (uint)*pbVar10 << 8;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_145221ff3;
      pbVar9 = (byte *)*puVar3;
      lVar7 = puVar3[1];
      iVar6 = *(int *)((longlong)param_1 + 0x34);
    }
    pbVar10 = pbVar9 + 1;
    *(uint *)((longlong)param_1 + 0x34) = (uint)*pbVar9 + iVar6;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_145221ff3;
      pbVar10 = (byte *)*puVar3;
      lVar7 = puVar3[1];
    }
    pbVar9 = pbVar10 + 1;
    iVar6 = (uint)*pbVar10 << 8;
    *(int *)(param_1 + 6) = iVar6;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_145221ff3;
      pbVar9 = (byte *)*puVar3;
      lVar7 = puVar3[1];
      iVar6 = (int)param_1[6];
    }
    pbVar10 = pbVar9 + 1;
    *(uint *)(param_1 + 6) = (uint)*pbVar9 + iVar6;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_145221ff3;
      pbVar10 = (byte *)*puVar3;
      lVar7 = puVar3[1];
    }
    lVar5 = *param_1;
    lVar7 = lVar7 + -1;
    *(uint *)(param_1 + 7) = (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
    *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x1fc);
    *(int *)(lVar5 + 0x30) = (int)param_1[6];
    *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x34);
    *(int *)(lVar5 + 0x38) = (int)param_1[7];
    *(undefined4 *)(*param_1 + 0x28) = 100;
    (**(code **)(*param_1 + 8))(param_1,1);
    if (*(char *)(param_1[0x45] + 0x19) != '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x3a;
      (**(code **)*param_1)(param_1);
    }
    if (((*(int *)((longlong)param_1 + 0x34) == 0) || ((int)param_1[6] == 0)) ||
       (iVar6 = (int)param_1[7], iVar6 < 1)) {
      *(undefined4 *)(*param_1 + 0x28) = 0x20;
      (**(code **)*param_1)(param_1);
      iVar6 = (int)param_1[7];
    }
    if ((uint)bVar1 * 0x100 + (uint)bVar2 + -8 != iVar6 * 3) {
      *(undefined4 *)(*param_1 + 0x28) = 0xb;
      (**(code **)*param_1)(param_1);
      iVar6 = (int)param_1[7];
    }
    lVar5 = param_1[0x24];
    if (lVar5 == 0) {
      lVar5 = (**(code **)param_1[1])(param_1,1,(longlong)iVar6 * 0x60);
      iVar6 = (int)param_1[7];
      param_1[0x24] = lVar5;
    }
    uVar8 = 0;
    if (0 < iVar6) {
      puVar11 = (uint *)(lVar5 + 8);
      do {
        puVar11[-1] = uVar8;
        if (lVar7 == 0) {
          uVar4 = (*(code *)puVar3[3])(param_1);
          if ((char)uVar4 == '\0') goto LAB_145221ff3;
          pbVar10 = (byte *)*puVar3;
          lVar7 = puVar3[1];
        }
        pbVar9 = pbVar10 + 1;
        puVar11[-2] = (uint)*pbVar10;
        lVar7 = lVar7 + -1;
        if (lVar7 == 0) {
          uVar4 = (*(code *)puVar3[3])(param_1);
          if ((char)uVar4 == '\0') goto LAB_145221ff3;
          pbVar9 = (byte *)*puVar3;
          lVar7 = puVar3[1];
        }
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        *puVar11 = (uint)(bVar1 >> 4);
        puVar11[1] = bVar1 & 0xf;
        lVar7 = lVar7 + -1;
        if (lVar7 == 0) {
          uVar4 = (*(code *)puVar3[3])(param_1);
          if ((char)uVar4 == '\0') goto LAB_145221ff3;
          pbVar9 = (byte *)*puVar3;
          lVar7 = puVar3[1];
        }
        puVar11[2] = (uint)*pbVar9;
        lVar7 = lVar7 + -1;
        pbVar10 = pbVar9 + 1;
        lVar5 = *param_1;
        *(uint *)(lVar5 + 0x2c) = puVar11[-2];
        *(uint *)(lVar5 + 0x30) = *puVar11;
        *(uint *)(lVar5 + 0x34) = puVar11[1];
        *(uint *)(lVar5 + 0x38) = puVar11[2];
        *(undefined4 *)(*param_1 + 0x28) = 0x65;
        (**(code **)(*param_1 + 8))(param_1,1);
        uVar8 = uVar8 + 1;
        puVar11 = puVar11 + 0x18;
      } while ((int)uVar8 < (int)param_1[7]);
    }
    lVar5 = param_1[0x45];
    *(undefined1 *)(lVar5 + 0x19) = 1;
    uVar4 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    *puVar3 = pbVar10;
    puVar3[1] = lVar7;
  }
  return uVar4;
}



// FUNCTION 145222000 FUN_145222000 body=905 status=ok
// SIG undefined FUN_145222000(void)

ulonglong FUN_145222000(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong *local_res8;
  longlong local_res10;
  
  plVar4 = (longlong *)param_1[5];
  pbVar12 = (byte *)*plVar4;
  lVar10 = plVar4[1];
  if (*(char *)(param_1[0x45] + 0x19) == '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x3e;
    (**(code **)*param_1)();
  }
  if (lVar10 == 0) {
    uVar5 = (*(code *)plVar4[3])(param_1);
    if ((char)uVar5 != '\0') {
      pbVar12 = (byte *)*plVar4;
      lVar10 = plVar4[1];
      goto LAB_145222064;
    }
LAB_1452222e0:
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
LAB_145222064:
    bVar1 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      uVar5 = (*(code *)plVar4[3])(param_1);
      if ((char)uVar5 == '\0') goto LAB_1452222e0;
      pbVar12 = (byte *)*plVar4;
      lVar10 = plVar4[1];
    }
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      uVar5 = (*(code *)plVar4[3])(param_1);
      if ((char)uVar5 == '\0') goto LAB_1452222e0;
      pbVar12 = (byte *)*plVar4;
      lVar10 = plVar4[1];
    }
    bVar3 = *pbVar12;
    lVar10 = lVar10 + -1;
    pbVar12 = pbVar12 + 1;
    *(undefined4 *)(*param_1 + 0x28) = 0x67;
    *(uint *)(*param_1 + 0x2c) = (uint)bVar3;
    (**(code **)(*param_1 + 8))();
    if (((uint)bVar2 + (uint)bVar1 * 0x100 != (uint)bVar3 * 2 + 6) || (3 < (byte)(bVar3 - 1))) {
      *(undefined4 *)(*param_1 + 0x28) = 0xb;
      (**(code **)*param_1)();
    }
    *(uint *)(param_1 + 0x32) = (uint)bVar3;
    local_res8 = param_1 + 0x33;
    *local_res8 = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    if (bVar3 != 0) {
      local_res10 = 0;
      do {
        if (lVar10 == 0) {
          uVar5 = (*(code *)plVar4[3])();
          if ((char)uVar5 == '\0') goto LAB_1452222e0;
          pbVar12 = (byte *)*plVar4;
          lVar10 = plVar4[1];
        }
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) {
          uVar5 = (*(code *)plVar4[3])();
          if ((char)uVar5 == '\0') goto LAB_1452222e0;
          pbVar12 = (byte *)*plVar4;
          lVar10 = plVar4[1];
        }
        bVar2 = *pbVar12;
        lVar10 = lVar10 + -1;
        pbVar12 = pbVar12 + 1;
        puVar9 = (uint *)param_1[0x24];
        iVar8 = 0;
        lVar7 = 0;
        uVar11 = (uint)bVar1;
        if (0 < (int)param_1[7]) {
          plVar6 = param_1 + 0x33;
          do {
            if (3 < lVar7) break;
            if ((uVar11 == *puVar9) && (*plVar6 == 0)) goto LAB_1452221f0;
            iVar8 = iVar8 + 1;
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            puVar9 = puVar9 + 0x18;
          } while (iVar8 < (int)param_1[7]);
        }
        *(undefined4 *)(*param_1 + 0x28) = 5;
        *(uint *)(*param_1 + 0x2c) = uVar11;
        (**(code **)*param_1)(param_1);
LAB_1452221f0:
        *local_res8 = (longlong)puVar9;
        puVar9[5] = (uint)(bVar2 >> 4);
        puVar9[6] = bVar2 & 0xf;
        lVar7 = *param_1;
        *(uint *)(lVar7 + 0x2c) = uVar11;
        *(uint *)(lVar7 + 0x30) = puVar9[5];
        *(uint *)(lVar7 + 0x34) = puVar9[6];
        *(undefined4 *)(*param_1 + 0x28) = 0x68;
        (**(code **)(*param_1 + 8))();
        if (0 < local_res10) {
          plVar6 = param_1 + 0x33;
          lVar7 = local_res10;
          do {
            if ((uint *)*plVar6 == puVar9) {
              *(undefined4 *)(*param_1 + 0x28) = 5;
              *(uint *)(*param_1 + 0x2c) = uVar11;
              (**(code **)*param_1)();
            }
            plVar6 = plVar6 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        local_res8 = local_res8 + 1;
        local_res10 = local_res10 + 1;
      } while (local_res10 < (longlong)(ulonglong)bVar3);
    }
    if (lVar10 == 0) {
      uVar5 = (*(code *)plVar4[3])(param_1);
      if ((char)uVar5 == '\0') goto LAB_1452222e0;
      pbVar12 = (byte *)*plVar4;
      lVar10 = plVar4[1];
    }
    pbVar13 = pbVar12 + 1;
    *(uint *)((longlong)param_1 + 0x1ec) = (uint)*pbVar12;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      uVar5 = (*(code *)plVar4[3])(param_1);
      if ((char)uVar5 == '\0') goto LAB_1452222e0;
      pbVar13 = (byte *)*plVar4;
      lVar10 = plVar4[1];
    }
    pbVar12 = pbVar13 + 1;
    *(uint *)(param_1 + 0x3e) = (uint)*pbVar13;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      uVar5 = (*(code *)plVar4[3])(param_1);
      if ((char)uVar5 == '\0') goto LAB_1452222e0;
      pbVar12 = (byte *)*plVar4;
      lVar10 = plVar4[1];
    }
    bVar1 = *pbVar12;
    *(uint *)(param_1 + 0x3f) = bVar1 & 0xf;
    lVar7 = *param_1;
    *(uint *)((longlong)param_1 + 500) = (uint)(bVar1 >> 4);
    *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x1ec);
    *(int *)(lVar7 + 0x30) = (int)param_1[0x3e];
    *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)((longlong)param_1 + 500);
    *(int *)(lVar7 + 0x38) = (int)param_1[0x3f];
    *(undefined4 *)(*param_1 + 0x28) = 0x69;
    (**(code **)(*param_1 + 8))(param_1,1);
    *(undefined4 *)(param_1[0x45] + 0x1c) = 0;
    *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + 1;
    *plVar4 = (longlong)(pbVar12 + 1);
    plVar4[1] = lVar10 + -1;
    uVar5 = CONCAT71((int7)((ulonglong)(lVar10 + -1) >> 8),1);
  }
  return uVar5;
}



// FUNCTION 145222390 FUN_145222390 body=441 status=ok
// SIG undefined FUN_145222390(void)

undefined8 FUN_145222390(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  
  puVar3 = (undefined8 *)param_1[5];
  lVar8 = puVar3[1];
  pbVar7 = (byte *)*puVar3;
  if (lVar8 == 0) {
    cVar4 = (*(code *)puVar3[3])();
    if (cVar4 != '\0') {
      pbVar7 = (byte *)*puVar3;
      lVar8 = puVar3[1];
      goto LAB_1452223d3;
    }
LAB_145222545:
    uVar5 = 0;
  }
  else {
LAB_1452223d3:
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      cVar4 = (*(code *)puVar3[3])(param_1);
      if (cVar4 == '\0') goto LAB_145222545;
      pbVar7 = (byte *)*puVar3;
      lVar8 = puVar3[1];
    }
    iVar10 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar7;
    while( true ) {
      pbVar7 = pbVar7 + 1;
      lVar8 = lVar8 + -1;
      if (iVar10 < 1) break;
      if (lVar8 == 0) {
        cVar4 = (*(code *)puVar3[3])(param_1);
        if (cVar4 == '\0') goto LAB_145222545;
        pbVar7 = (byte *)*puVar3;
        lVar8 = puVar3[1];
      }
      bVar1 = *pbVar7;
      uVar9 = (ulonglong)bVar1;
      pbVar7 = pbVar7 + 1;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) {
        cVar4 = (*(code *)puVar3[3])(param_1);
        if (cVar4 == '\0') goto LAB_145222545;
        pbVar7 = (byte *)*puVar3;
        lVar8 = puVar3[1];
      }
      bVar2 = *pbVar7;
      iVar10 = iVar10 + -2;
      *(undefined4 *)(*param_1 + 0x28) = 0x4f;
      *(uint *)(*param_1 + 0x2c) = (uint)bVar1;
      *(uint *)(*param_1 + 0x30) = (uint)bVar2;
      (**(code **)(*param_1 + 8))(param_1,1);
      if (bVar1 < 0x20) {
        pbVar6 = (byte *)((longlong)param_1 + uVar9 + 0x13a);
        if (bVar1 < 0x10) {
          *(byte *)(uVar9 + 0x12a + (longlong)param_1) = bVar2 & 0xf;
          *pbVar6 = bVar2 >> 4;
          if (bVar2 >> 4 < (bVar2 & 0xf)) {
            *(undefined4 *)(*param_1 + 0x28) = 0x1d;
            *(uint *)(*param_1 + 0x2c) = (uint)bVar2;
            (**(code **)*param_1)(param_1);
          }
        }
        else {
          *pbVar6 = bVar2;
        }
      }
      else {
        *(undefined4 *)(*param_1 + 0x28) = 0x1c;
        *(uint *)(*param_1 + 0x2c) = (uint)bVar1;
        (**(code **)*param_1)(param_1);
        *(byte *)((longlong)param_1 + uVar9 + 0x13a) = bVar2;
      }
    }
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + 0x28) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    *puVar3 = pbVar7;
    uVar5 = 1;
    puVar3[1] = lVar8;
  }
  return uVar5;
}



// FUNCTION 145222550 FUN_145222550 body=913 status=ok
// SIG undefined FUN_145222550(void)

void FUN_145222550(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  undefined1 auStack_178 [32];
  uint local_158;
  int local_154;
  byte local_150 [24];
  byte local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar3 = (undefined8 *)param_1[5];
  lVar18 = puVar3[1];
  pbVar20 = (byte *)*puVar3;
  if (lVar18 == 0) {
    cVar13 = (*(code *)puVar3[3])();
    if (cVar13 == '\0') goto LAB_1452228cd;
    pbVar20 = (byte *)*puVar3;
    lVar18 = puVar3[1];
  }
  bVar1 = *pbVar20;
  pbVar20 = pbVar20 + 1;
  lVar18 = lVar18 + -1;
  if (lVar18 == 0) {
    cVar13 = (*(code *)puVar3[3])(param_1);
    if (cVar13 == '\0') goto LAB_1452228cd;
    pbVar20 = (byte *)*puVar3;
    lVar18 = puVar3[1];
  }
  iVar21 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar20;
  lVar18 = lVar18 + -1;
  pbVar20 = pbVar20 + 1;
  while (0x10 < iVar21) {
    if (lVar18 == 0) {
      cVar13 = (*(code *)puVar3[3])(param_1);
      if (cVar13 == '\0') goto LAB_1452228cd;
      pbVar20 = (byte *)*puVar3;
      lVar18 = puVar3[1];
    }
    bVar1 = *pbVar20;
    uVar14 = (uint)bVar1;
    lVar18 = lVar18 + -1;
    pbVar20 = pbVar20 + 1;
    *(undefined4 *)(*param_1 + 0x28) = 0x50;
    *(uint *)(*param_1 + 0x2c) = uVar14;
    local_158 = uVar14;
    (**(code **)(*param_1 + 8))(param_1,1);
    iVar22 = 0;
    local_150[0] = 0;
    lVar19 = 1;
    do {
      if (lVar18 == 0) {
        cVar13 = (*(code *)puVar3[3])(param_1);
        if (cVar13 == '\0') goto LAB_1452228cd;
        pbVar20 = (byte *)*puVar3;
        lVar18 = puVar3[1];
      }
      bVar2 = *pbVar20;
      lVar18 = lVar18 + -1;
      local_150[lVar19] = bVar2;
      pbVar20 = pbVar20 + 1;
      lVar19 = lVar19 + 1;
      iVar22 = iVar22 + (uint)bVar2;
    } while (lVar19 < 0x11);
    lVar19 = *param_1;
    *(uint *)(lVar19 + 0x2c) = (uint)local_150[1];
    *(uint *)(lVar19 + 0x30) = (uint)local_150[2];
    *(uint *)(lVar19 + 0x34) = (uint)local_150[3];
    *(uint *)(lVar19 + 0x38) = (uint)local_150[4];
    *(uint *)(lVar19 + 0x3c) = (uint)local_150[5];
    *(uint *)(lVar19 + 0x40) = (uint)local_150[6];
    *(uint *)(lVar19 + 0x44) = (uint)local_150[7];
    *(uint *)(lVar19 + 0x48) = (uint)local_150[8];
    *(undefined4 *)(*param_1 + 0x28) = 0x56;
    local_154 = iVar21 + -0x11;
    (**(code **)(*param_1 + 8))(param_1,2);
    lVar19 = *param_1;
    *(uint *)(lVar19 + 0x2c) = (uint)local_150[9];
    *(uint *)(lVar19 + 0x30) = (uint)local_150[10];
    *(uint *)(lVar19 + 0x34) = (uint)local_150[0xb];
    *(uint *)(lVar19 + 0x38) = (uint)local_150[0xc];
    *(uint *)(lVar19 + 0x3c) = (uint)local_150[0xd];
    *(uint *)(lVar19 + 0x40) = (uint)local_150[0xe];
    *(uint *)(lVar19 + 0x44) = (uint)local_150[0xf];
    *(uint *)(lVar19 + 0x48) = (uint)local_150[0x10];
    *(undefined4 *)(*param_1 + 0x28) = 0x56;
    (**(code **)(*param_1 + 8))(param_1);
    if ((0x100 < iVar22) || (iVar21 + -0x11 < iVar22)) {
      *(undefined4 *)(*param_1 + 0x28) = 8;
      (**(code **)*param_1)(param_1);
    }
    lVar19 = 0;
    if (0 < iVar22) {
      do {
        if (lVar18 == 0) {
          cVar13 = (*(code *)puVar3[3])(param_1);
          if (cVar13 == '\0') goto LAB_1452228cd;
          pbVar20 = (byte *)*puVar3;
          lVar18 = puVar3[1];
        }
        lVar18 = lVar18 + -1;
        local_138[lVar19] = *pbVar20;
        pbVar20 = pbVar20 + 1;
        lVar19 = lVar19 + 1;
      } while (lVar19 < iVar22);
    }
    memset(local_138 + iVar22,0,(longlong)(0x100 - iVar22));
    uVar12 = local_158;
    iVar21 = local_154 - iVar22;
    if ((bVar1 & 0x10) == 0) {
      if (3 < (byte)local_158) {
        *(undefined4 *)(*param_1 + 0x28) = 0x1e;
        *(uint *)(*param_1 + 0x2c) = uVar14;
        (**(code **)*param_1)(param_1);
      }
      lVar19 = (ulonglong)(uVar12 & 0xff) + 0x1b;
    }
    else {
      if (3 < uVar14 - 0x10) {
        *(undefined4 *)(*param_1 + 0x28) = 0x1e;
        *(uint *)(*param_1 + 0x2c) = uVar14 - 0x10;
        (**(code **)*param_1)(param_1);
      }
      lVar19 = (ulonglong)(local_158 & 0xff) + 0xf;
    }
    puVar15 = (undefined8 *)param_1[lVar19];
    if (puVar15 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)FUN_144e8d2c0(param_1);
      param_1[lVar19] = (longlong)puVar15;
    }
    lVar17 = 2;
    *puVar15 = CONCAT17(local_150[7],
                        CONCAT16(local_150[6],
                                 CONCAT15(local_150[5],
                                          CONCAT14(local_150[4],
                                                   CONCAT13(local_150[3],
                                                            CONCAT12(local_150[2],
                                                                     CONCAT11(local_150[1],
                                                                              local_150[0])))))));
    puVar15[1] = CONCAT17(local_150[0xf],
                          CONCAT16(local_150[0xe],
                                   CONCAT15(local_150[0xd],
                                            CONCAT14(local_150[0xc],
                                                     CONCAT13(local_150[0xb],
                                                              CONCAT12(local_150[10],
                                                                       CONCAT11(local_150[9],
                                                                                local_150[8])))))));
    *(byte *)(puVar15 + 2) = local_150[0x10];
    puVar15 = (undefined8 *)(param_1[lVar19] + 0x11);
    pbVar16 = local_138;
    do {
      uVar8 = *(undefined8 *)(pbVar16 + 8);
      uVar9 = *(undefined8 *)(pbVar16 + 0x10);
      uVar10 = *(undefined8 *)(pbVar16 + 0x18);
      *puVar15 = *(undefined8 *)pbVar16;
      puVar15[1] = uVar8;
      uVar8 = *(undefined8 *)(pbVar16 + 0x20);
      uVar11 = *(undefined8 *)(pbVar16 + 0x28);
      puVar15[2] = uVar9;
      puVar15[3] = uVar10;
      uVar9 = *(undefined8 *)(pbVar16 + 0x30);
      uVar10 = *(undefined8 *)(pbVar16 + 0x38);
      puVar15[4] = uVar8;
      puVar15[5] = uVar11;
      uVar8 = *(undefined8 *)(pbVar16 + 0x40);
      uVar11 = *(undefined8 *)(pbVar16 + 0x48);
      puVar15[6] = uVar9;
      puVar15[7] = uVar10;
      uVar9 = *(undefined8 *)(pbVar16 + 0x50);
      uVar10 = *(undefined8 *)(pbVar16 + 0x58);
      puVar15[8] = uVar8;
      puVar15[9] = uVar11;
      uVar4 = *(undefined4 *)(pbVar16 + 0x60);
      uVar5 = *(undefined4 *)(pbVar16 + 100);
      uVar6 = *(undefined4 *)(pbVar16 + 0x68);
      uVar7 = *(undefined4 *)(pbVar16 + 0x6c);
      puVar15[10] = uVar9;
      puVar15[0xb] = uVar10;
      uVar8 = *(undefined8 *)(pbVar16 + 0x70);
      uVar9 = *(undefined8 *)(pbVar16 + 0x78);
      *(undefined4 *)(puVar15 + 0xc) = uVar4;
      *(undefined4 *)((longlong)puVar15 + 100) = uVar5;
      *(undefined4 *)(puVar15 + 0xd) = uVar6;
      *(undefined4 *)((longlong)puVar15 + 0x6c) = uVar7;
      puVar15[0xe] = uVar8;
      puVar15[0xf] = uVar9;
      lVar17 = lVar17 + -1;
      puVar15 = puVar15 + 0x10;
      pbVar16 = pbVar16 + 0x80;
    } while (lVar17 != 0);
  }
  if (iVar21 != 0) {
    *(undefined4 *)(*param_1 + 0x28) = 0xb;
    (**(code **)*param_1)(param_1);
  }
  *puVar3 = pbVar20;
  puVar3[1] = lVar18;
LAB_1452228cd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_178);
}



// FUNCTION 145222910 FUN_145222910 body=652 status=ok
// SIG undefined FUN_145222910(void)

undefined8 FUN_145222910(longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ushort uVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  ushort *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  
  puVar2 = (undefined8 *)param_1[5];
  lVar10 = puVar2[1];
  pbVar14 = (byte *)*puVar2;
  if (lVar10 == 0) {
    cVar4 = (*(code *)puVar2[3])();
    if (cVar4 != '\0') {
      pbVar14 = (byte *)*puVar2;
      lVar10 = puVar2[1];
      goto LAB_145222951;
    }
LAB_145222b98:
    uVar7 = 0;
  }
  else {
LAB_145222951:
    bVar1 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      cVar4 = (*(code *)puVar2[3])(param_1);
      if (cVar4 == '\0') goto LAB_145222b98;
      pbVar14 = (byte *)*puVar2;
      lVar10 = puVar2[1];
    }
    lVar10 = lVar10 + -1;
    pbVar15 = pbVar14 + 1;
    for (iVar16 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar14; 0 < iVar16; iVar16 = iVar16 - iVar5) {
      if (lVar10 == 0) {
        cVar4 = (*(code *)puVar2[3])(param_1);
        if (cVar4 == '\0') goto LAB_145222b98;
        pbVar15 = (byte *)*puVar2;
        lVar10 = puVar2[1];
      }
      uVar8 = (uint)(*pbVar15 >> 4);
      uVar11 = *pbVar15 & 0xf;
      lVar10 = lVar10 + -1;
      pbVar15 = pbVar15 + 1;
      *(undefined4 *)(*param_1 + 0x28) = 0x51;
      *(uint *)(*param_1 + 0x2c) = uVar11;
      *(uint *)(*param_1 + 0x30) = uVar8;
      (**(code **)(*param_1 + 8))(param_1,1);
      if (3 < uVar11) {
        *(undefined4 *)(*param_1 + 0x28) = 0x1f;
        *(uint *)(*param_1 + 0x2c) = uVar11;
        (**(code **)*param_1)(param_1);
      }
      lVar6 = param_1[(ulonglong)uVar11 + 0x17];
      if (lVar6 == 0) {
        lVar6 = FUN_144e8d2a0(param_1);
        param_1[(ulonglong)uVar11 + 0x17] = lVar6;
      }
      piVar12 = &DAT_149bcaf90;
      do {
        if (uVar8 == 0) {
          if (lVar10 == 0) {
            cVar4 = (*(code *)puVar2[3])(param_1);
            if (cVar4 == '\0') goto LAB_145222b98;
            pbVar15 = (byte *)*puVar2;
            lVar10 = puVar2[1];
          }
          uVar9 = (ushort)*pbVar15;
        }
        else {
          if (lVar10 == 0) {
            cVar4 = (*(code *)puVar2[3])(param_1);
            if (cVar4 == '\0') goto LAB_145222b98;
            pbVar15 = (byte *)*puVar2;
            lVar10 = puVar2[1];
          }
          bVar1 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          lVar10 = lVar10 + -1;
          if (lVar10 == 0) {
            cVar4 = (*(code *)puVar2[3])(param_1);
            if (cVar4 == '\0') goto LAB_145222b98;
            pbVar15 = (byte *)*puVar2;
            lVar10 = puVar2[1];
          }
          uVar9 = (ushort)bVar1 * 0x100 + (ushort)*pbVar15;
        }
        iVar5 = *piVar12;
        pbVar15 = pbVar15 + 1;
        piVar12 = piVar12 + 1;
        lVar10 = lVar10 + -1;
        *(ushort *)(lVar6 + (longlong)iVar5 * 2) = uVar9;
      } while ((longlong)piVar12 < 0x149bcb090);
      if (1 < *(int *)(*param_1 + 0x7c)) {
        puVar13 = (ushort *)(lVar6 + 4);
        lVar6 = 8;
        do {
          lVar3 = *param_1;
          *(uint *)(lVar3 + 0x2c) = (uint)puVar13[-2];
          *(uint *)(lVar3 + 0x30) = (uint)puVar13[-1];
          *(uint *)(lVar3 + 0x34) = (uint)*puVar13;
          *(uint *)(lVar3 + 0x38) = (uint)puVar13[1];
          *(uint *)(lVar3 + 0x3c) = (uint)puVar13[2];
          *(uint *)(lVar3 + 0x40) = (uint)puVar13[3];
          *(uint *)(lVar3 + 0x44) = (uint)puVar13[4];
          *(uint *)(lVar3 + 0x48) = (uint)puVar13[5];
          *(undefined4 *)(*param_1 + 0x28) = 0x5d;
          (**(code **)(*param_1 + 8))(param_1,2);
          puVar13 = puVar13 + 8;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      iVar5 = 0x81;
      if (uVar8 == 0) {
        iVar5 = 0x41;
      }
    }
    if (iVar16 != 0) {
      *(undefined4 *)(*param_1 + 0x28) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    *puVar2 = pbVar15;
    uVar7 = 1;
    puVar2[1] = lVar10;
  }
  return uVar7;
}



// FUNCTION 145222ba0 FUN_145222ba0 body=638 status=ok
// SIG undefined FUN_145222ba0(void)

void FUN_145222ba0(longlong *param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  
  param_4 = param_3 + param_4;
  if (param_3 < 0xe) {
    if (5 < param_3) goto LAB_145222d56;
  }
  else if (*param_2 == 'J') {
    if ((((param_2[1] == 'F') && (param_2[2] == 'I')) && (param_2[3] == 'F')) &&
       (param_2[4] == '\0')) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
      cVar1 = param_2[5];
      *(char *)((longlong)param_1 + 0x161) = cVar1;
      *(char *)((longlong)param_1 + 0x162) = param_2[6];
      *(char *)((longlong)param_1 + 0x163) = param_2[7];
      *(ushort *)((longlong)param_1 + 0x164) =
           (ushort)(byte)param_2[8] * 0x100 + (ushort)(byte)param_2[9];
      *(ushort *)((longlong)param_1 + 0x166) =
           (ushort)(byte)param_2[10] * 0x100 + (ushort)(byte)param_2[0xb];
      bVar3 = 1;
      if (cVar1 != '\x01') {
        *(undefined4 *)(*param_1 + 0x28) = 0x77;
        *(uint *)(*param_1 + 0x2c) = (uint)*(byte *)((longlong)param_1 + 0x161);
        *(uint *)(*param_1 + 0x30) = (uint)*(byte *)((longlong)param_1 + 0x162);
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        bVar3 = *(byte *)((longlong)param_1 + 0x161);
      }
      lVar2 = *param_1;
      *(uint *)(lVar2 + 0x2c) = (uint)bVar3;
      *(uint *)(lVar2 + 0x30) = (uint)*(byte *)((longlong)param_1 + 0x162);
      *(uint *)(lVar2 + 0x34) = (uint)*(ushort *)((longlong)param_1 + 0x164);
      *(uint *)(lVar2 + 0x38) = (uint)*(ushort *)((longlong)param_1 + 0x166);
      *(uint *)(lVar2 + 0x3c) = (uint)*(byte *)((longlong)param_1 + 0x163);
      *(undefined4 *)(*param_1 + 0x28) = 0x57;
      (**(code **)(*param_1 + 8))(param_1,1);
      bVar3 = param_2[0xc];
      bVar4 = param_2[0xd];
      if (bVar3 != 0 || bVar4 != 0) {
        *(undefined4 *)(*param_1 + 0x28) = 0x5a;
        *(uint *)(*param_1 + 0x2c) = (uint)(byte)param_2[0xc];
        *(uint *)(*param_1 + 0x30) = (uint)(byte)param_2[0xd];
        (**(code **)(*param_1 + 8))(param_1,1);
        bVar4 = param_2[0xd];
        bVar3 = param_2[0xc];
      }
      if (param_4 + -0xe == (uint)bVar3 * (uint)bVar4 * 3) {
        return;
      }
      *(undefined4 *)(*param_1 + 0x28) = 0x58;
      *(int *)(*param_1 + 0x2c) = param_4 + -0xe;
      lVar2 = *param_1;
      goto LAB_145222e06;
    }
LAB_145222d56:
    if (((*param_2 == 'J') && (param_2[1] == 'F')) &&
       ((param_2[2] == 'X' && ((param_2[3] == 'X' && (param_2[4] == '\0')))))) {
      lVar2 = *param_1;
      cVar1 = param_2[5];
      if (cVar1 == '\x10') {
        *(undefined4 *)(lVar2 + 0x28) = 0x6c;
        *(int *)(*param_1 + 0x2c) = param_4;
        lVar2 = *param_1;
      }
      else if (cVar1 == '\x11') {
        *(undefined4 *)(lVar2 + 0x28) = 0x6d;
        *(int *)(*param_1 + 0x2c) = param_4;
        lVar2 = *param_1;
      }
      else if (cVar1 == '\x13') {
        *(undefined4 *)(lVar2 + 0x28) = 0x6e;
        *(int *)(*param_1 + 0x2c) = param_4;
        lVar2 = *param_1;
      }
      else {
        *(undefined4 *)(lVar2 + 0x28) = 0x59;
        *(uint *)(*param_1 + 0x2c) = (uint)(byte)param_2[5];
        *(int *)(*param_1 + 0x30) = param_4;
        lVar2 = *param_1;
      }
      goto LAB_145222e06;
    }
  }
  *(undefined4 *)(*param_1 + 0x28) = 0x4d;
  *(int *)(*param_1 + 0x2c) = param_4;
  lVar2 = *param_1;
LAB_145222e06:
  (**(code **)(lVar2 + 8))(param_1,1);
  return;
}



// FUNCTION 145222e20 FUN_145222e20 body=224 status=ok
// SIG undefined FUN_145222e20(void)

void FUN_145222e20(longlong *param_1,char *param_2,uint param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  
  if ((((0xb < param_3) && (*param_2 == 'A')) && (param_2[1] == 'd')) &&
     (((param_2[2] == 'o' && (param_2[3] == 'b')) && (param_2[4] == 'e')))) {
    bVar1 = param_2[9];
    bVar2 = param_2[10];
    bVar3 = param_2[0xb];
    lVar6 = *param_1;
    bVar4 = param_2[5];
    bVar5 = param_2[6];
    *(uint *)(lVar6 + 0x30) = (uint)(byte)param_2[7] * 0x100 + (uint)(byte)param_2[8];
    *(uint *)(lVar6 + 0x2c) = (uint)bVar4 * 0x100 + (uint)bVar5;
    *(uint *)(lVar6 + 0x34) = (uint)bVar1 * 0x100 + (uint)bVar2;
    *(uint *)(lVar6 + 0x38) = (uint)bVar3;
    *(undefined4 *)(*param_1 + 0x28) = 0x4c;
    (**(code **)(*param_1 + 8))(param_1,1);
    *(byte *)((longlong)param_1 + 0x169) = bVar3;
    *(undefined1 *)(param_1 + 0x2d) = 1;
    return;
  }
  *(undefined4 *)(*param_1 + 0x28) = 0x4e;
  *(uint *)(*param_1 + 0x2c) = param_3 + param_4;
                    /* WARNING: Could not recover jumptable at 0x000145222efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,1);
  return;
}



// FUNCTION 145222f00 FUN_145222f00 body=352 status=ok
// SIG undefined FUN_145222f00(void)

void FUN_145222f00(longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [32];
  byte local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)param_1[5];
  lVar4 = puVar2[1];
  pbVar7 = (byte *)*puVar2;
  if (lVar4 == 0) {
    cVar3 = (*(code *)puVar2[3])();
    if (cVar3 == '\0') goto LAB_145223053;
    pbVar7 = (byte *)*puVar2;
    lVar4 = puVar2[1];
  }
  bVar1 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  lVar4 = lVar4 + -1;
  if (lVar4 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') goto LAB_145223053;
    pbVar7 = (byte *)*puVar2;
    lVar4 = puVar2[1];
  }
  uVar5 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar7;
  lVar4 = lVar4 + -1;
  pbVar7 = pbVar7 + 1;
  if ((int)uVar5 < 0xe) {
    uVar10 = uVar5;
    if (0 < (int)uVar5) goto LAB_145222f92;
    uVar10 = 0;
  }
  else {
    uVar10 = 0xe;
LAB_145222f92:
    pbVar8 = local_48;
    uVar9 = 0;
    do {
      if (lVar4 == 0) {
        cVar3 = (*(code *)puVar2[3])(param_1);
        if (cVar3 == '\0') goto LAB_145223053;
        pbVar7 = (byte *)*puVar2;
        lVar4 = puVar2[1];
      }
      lVar4 = lVar4 + -1;
      *pbVar8 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar10);
  }
  iVar6 = uVar5 - uVar10;
  if (*(int *)((longlong)param_1 + 0x1fc) == 0xe0) {
    FUN_145222ba0(param_1,local_48,uVar10,iVar6);
  }
  else if (*(int *)((longlong)param_1 + 0x1fc) == 0xee) {
    FUN_145222e20(param_1,local_48,uVar10,iVar6);
  }
  else {
    *(undefined4 *)(*param_1 + 0x28) = 0x44;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x1fc);
    (**(code **)*param_1)(param_1);
  }
  *puVar2 = pbVar7;
  puVar2[1] = lVar4;
  if (0 < iVar6) {
    (**(code **)(param_1[5] + 0x20))(param_1,iVar6);
  }
LAB_145223053:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 145223080 FUN_145223080 body=213 status=ok
// SIG undefined FUN_145223080(void)

undefined8 FUN_145223080(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  
  plVar2 = (longlong *)param_1[5];
  lVar6 = plVar2[1];
  pbVar5 = (byte *)*plVar2;
  if (lVar6 == 0) {
    cVar3 = (*(code *)plVar2[3])();
    if (cVar3 != '\0') {
      pbVar5 = (byte *)*plVar2;
      lVar6 = plVar2[1];
      goto LAB_1452230bb;
    }
LAB_1452230d7:
    uVar4 = 0;
  }
  else {
LAB_1452230bb:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      cVar3 = (*(code *)plVar2[3])(param_1);
      if (cVar3 == '\0') goto LAB_1452230d7;
      pbVar5 = (byte *)*plVar2;
      lVar6 = plVar2[1];
    }
    iVar7 = (uint)bVar1 * 0x100 + (*pbVar5 - 2);
    *(undefined4 *)(*param_1 + 0x28) = 0x5b;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x1fc);
    *(int *)(*param_1 + 0x30) = iVar7;
    (**(code **)(*param_1 + 8))(param_1,1);
    *plVar2 = (longlong)(pbVar5 + 1);
    plVar2[1] = lVar6 + -1;
    if (0 < iVar7) {
      (**(code **)(param_1[5] + 0x20))(param_1,iVar7);
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 145223160 FUN_145223160 body=311 status=ok
// SIG undefined FUN_145223160(void)

ulonglong FUN_145223160(longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  
  puVar2 = (undefined8 *)param_1[5];
  pbVar6 = (byte *)*puVar2;
  lVar5 = puVar2[1];
  do {
    if (lVar5 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') {
LAB_145223226:
        return uVar3 & 0xffffffffffffff00;
      }
      pbVar6 = (byte *)*puVar2;
      lVar5 = puVar2[1];
    }
    bVar1 = *pbVar6;
    while( true ) {
      pbVar6 = pbVar6 + 1;
      lVar5 = lVar5 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x45] + 0x20) = *(int *)(param_1[0x45] + 0x20) + 1;
      *puVar2 = pbVar6;
      puVar2[1] = lVar5;
      if (lVar5 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_145223226;
        pbVar6 = (byte *)*puVar2;
        lVar5 = puVar2[1];
      }
      bVar1 = *pbVar6;
    }
    do {
      if (lVar5 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_145223226;
        pbVar6 = (byte *)*puVar2;
        lVar5 = puVar2[1];
      }
      bVar1 = *pbVar6;
      lVar5 = lVar5 + -1;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 == 0xff);
    lVar4 = param_1[0x45];
    if (bVar1 != 0) {
      if (*(int *)(lVar4 + 0x20) != 0) {
        *(undefined4 *)(*param_1 + 0x28) = 0x74;
        *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)(param_1[0x45] + 0x20);
        *(uint *)(*param_1 + 0x30) = (uint)bVar1;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        lVar4 = param_1[0x45];
        *(undefined4 *)(lVar4 + 0x20) = 0;
      }
      *(uint *)((longlong)param_1 + 0x1fc) = (uint)bVar1;
      *puVar2 = pbVar6;
      puVar2[1] = lVar5;
      return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    }
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 2;
    *puVar2 = pbVar6;
    puVar2[1] = lVar5;
  } while( true );
}



// FUNCTION 1452232a0 FUN_1452232a0 body=1146 status=ok
// SIG undefined FUN_1452232a0(void)

undefined8 FUN_1452232a0(longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  
  iVar5 = *(int *)((longlong)param_1 + 0x1fc);
LAB_1452232e0:
  if (iVar5 == 0) {
    if (*(char *)(param_1[0x45] + 0x18) == '\0') {
      puVar2 = (undefined8 *)param_1[5];
      lVar10 = puVar2[1];
      pbVar8 = (byte *)*puVar2;
      if (lVar10 == 0) {
        cVar4 = (*(code *)puVar2[3])(param_1);
        if (cVar4 == '\0') {
          return 0;
        }
        pbVar8 = (byte *)*puVar2;
        lVar10 = puVar2[1];
      }
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        cVar4 = (*(code *)puVar2[3])(param_1);
        if (cVar4 == '\0') {
          return 0;
        }
        pbVar8 = (byte *)*puVar2;
        lVar10 = puVar2[1];
      }
      uVar12 = (uint)*pbVar8;
      if ((bVar1 != 0xff) || (uVar12 != 0xd8)) {
        *(undefined4 *)(*param_1 + 0x28) = 0x35;
        *(uint *)(*param_1 + 0x2c) = (uint)bVar1;
        *(uint *)(*param_1 + 0x30) = uVar12;
        (**(code **)*param_1)(param_1);
      }
      *(uint *)((longlong)param_1 + 0x1fc) = uVar12;
      *puVar2 = pbVar8 + 1;
      puVar2[1] = lVar10 + -1;
    }
    else {
      cVar4 = FUN_145223160(param_1);
      if (cVar4 == '\0') {
        return 0;
      }
    }
  }
  iVar13 = *(int *)((longlong)param_1 + 0x1fc);
  iVar5 = 0;
  switch(iVar13) {
  case 1:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
    *(undefined4 *)(*param_1 + 0x28) = 0x5c;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x1fc);
    (**(code **)(*param_1 + 8))(param_1,1);
    iVar5 = 0;
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
    goto LAB_1452232e0;
  default:
    *(undefined4 *)(*param_1 + 0x28) = 0x44;
    goto LAB_1452236a0;
  case 0xc0:
  case 0xc1:
    uVar11 = 0;
    goto LAB_1452234b9;
  case 0xc2:
    uVar11 = 0;
    uVar7 = CONCAT71((int7)(int3)((uint)iVar13 >> 8),1);
    uVar6 = 0;
    goto LAB_1452234be;
  case 0xc3:
    uVar11 = 0;
    uVar6 = 1;
    goto LAB_1452234bc;
  case 0xc4:
    cVar4 = FUN_145222550(param_1);
    break;
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xcd:
  case 0xce:
  case 0xcf:
    *(undefined4 *)(*param_1 + 0x28) = 0x3c;
LAB_1452236a0:
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x1fc);
    (**(code **)*param_1)(param_1);
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
    goto LAB_1452232e0;
  case 0xc9:
    uVar11 = 1;
LAB_1452234b9:
    uVar6 = 0;
    goto LAB_1452234bc;
  case 0xca:
    uVar11 = 1;
    uVar6 = 0;
    uVar7 = 1;
    goto LAB_1452234be;
  case 0xcb:
    uVar11 = 1;
    uVar6 = 1;
LAB_1452234bc:
    uVar7 = 0;
LAB_1452234be:
    cVar4 = FUN_145221ca0(param_1,uVar7,uVar6,uVar11);
    break;
  case 0xcc:
    cVar4 = FUN_145222390(param_1);
    break;
  case 0xd8:
    *(undefined4 *)(*param_1 + 0x28) = 0x66;
    (**(code **)(*param_1 + 8))(param_1,1);
    lVar10 = param_1[0x45];
    if (*(char *)(lVar10 + 0x18) != '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x3d;
      (**(code **)*param_1)(param_1);
      lVar10 = param_1[0x45];
    }
    *(undefined8 *)((longlong)param_1 + 0x12a) = 0;
    *(undefined4 *)((longlong)param_1 + 0x13a) = 0x1010101;
    *(undefined4 *)((longlong)param_1 + 0x14a) = 0x5050505;
    *(undefined4 *)((longlong)param_1 + 0x13e) = 0x1010101;
    *(undefined4 *)((longlong)param_1 + 0x14e) = 0x5050505;
    *(undefined8 *)((longlong)param_1 + 0x132) = 0;
    *(undefined4 *)((longlong)param_1 + 0x142) = 0x1010101;
    *(undefined4 *)((longlong)param_1 + 0x152) = 0x5050505;
    *(undefined4 *)((longlong)param_1 + 0x146) = 0x1010101;
    *(undefined4 *)((longlong)param_1 + 0x156) = 0x5050505;
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined2 *)((longlong)param_1 + 0x169) = 0;
    *(undefined2 *)(param_1 + 0x2c) = 0x100;
    *(undefined4 *)((longlong)param_1 + 0x162) = 0x10001;
    *(undefined2 *)((longlong)param_1 + 0x166) = 1;
    *(undefined1 *)(param_1 + 0x2d) = 0;
    *(undefined1 *)(lVar10 + 0x18) = 1;
    iVar5 = 0;
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
    goto LAB_1452232e0;
  case 0xd9:
    *(undefined4 *)(*param_1 + 0x28) = 0x55;
    (**(code **)(*param_1 + 8))(param_1,1);
    uVar6 = 2;
    goto LAB_1452236f3;
  case 0xda:
    cVar4 = FUN_145222000(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    uVar6 = 1;
LAB_1452236f3:
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
    return uVar6;
  case 0xdb:
    cVar4 = FUN_145222910(param_1);
    break;
  case 0xdc:
    cVar4 = FUN_145223080(param_1);
    break;
  case 0xdd:
    goto switchD_1452233cf_caseD_dd;
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
    cVar4 = (**(code **)(param_1[0x45] + -0x6d0 + (longlong)iVar13 * 8))(param_1);
    break;
  case 0xfe:
    cVar4 = (**(code **)(param_1[0x45] + 0x28))(param_1);
  }
  if (cVar4 == '\0') {
    return 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  goto LAB_1452232e0;
switchD_1452233cf_caseD_dd:
  plVar3 = (longlong *)param_1[5];
  lVar10 = plVar3[1];
  pbVar8 = (byte *)*plVar3;
  if (lVar10 == 0) {
    cVar4 = (*(code *)plVar3[3])(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    pbVar8 = (byte *)*plVar3;
    lVar10 = plVar3[1];
  }
  bVar1 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  lVar10 = lVar10 + -1;
  if (lVar10 == 0) {
    cVar4 = (*(code *)plVar3[3])(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    pbVar8 = (byte *)*plVar3;
    lVar10 = plVar3[1];
  }
  lVar10 = lVar10 + -1;
  pbVar9 = pbVar8 + 1;
  if ((uint)*pbVar8 + (uint)bVar1 * 0x100 != 4) {
    *(undefined4 *)(*param_1 + 0x28) = 0xb;
    (**(code **)*param_1)(param_1);
  }
  if (lVar10 == 0) {
    cVar4 = (*(code *)plVar3[3])(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    pbVar9 = (byte *)*plVar3;
    lVar10 = plVar3[1];
  }
  bVar1 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  lVar10 = lVar10 + -1;
  if (lVar10 == 0) {
    cVar4 = (*(code *)plVar3[3])(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    pbVar9 = (byte *)*plVar3;
    lVar10 = plVar3[1];
  }
  iVar13 = (uint)bVar1 * 0x100 + (uint)*pbVar9;
  *(undefined4 *)(*param_1 + 0x28) = 0x52;
  *(int *)(*param_1 + 0x2c) = iVar13;
  (**(code **)(*param_1 + 8))(param_1,1);
  *(int *)((longlong)param_1 + 0x15c) = iVar13;
  *plVar3 = (longlong)(pbVar9 + 1);
  plVar3[1] = lVar10 + -1;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  goto LAB_1452232e0;
}



// FUNCTION 145223870 FUN_145223870 body=149 status=ok
// SIG undefined FUN_145223870(void)

ulonglong FUN_145223870(longlong *param_1)

{
  ulonglong uVar1;
  
  if (*(int *)((longlong)param_1 + 0x1fc) == 0) {
    uVar1 = FUN_145223160();
    if ((char)uVar1 == '\0') goto LAB_1452238fd;
  }
  if (*(int *)((longlong)param_1 + 0x1fc) == *(int *)(param_1[0x45] + 0x1c) + 0xd0) {
    *(undefined4 *)(*param_1 + 0x28) = 0x62;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)(param_1[0x45] + 0x1c);
    (**(code **)(*param_1 + 8))(param_1,3);
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  }
  else {
    uVar1 = (**(code **)(param_1[5] + 0x28))(param_1);
    if ((char)uVar1 == '\0') {
LAB_1452238fd:
      return uVar1 & 0xffffffffffffff00;
    }
  }
  *(uint *)(param_1[0x45] + 0x1c) = *(int *)(param_1[0x45] + 0x1c) + 1U & 7;
  return 1;
}



// FUNCTION 145223940 FUN_145223940 body=600 status=ok
// SIG undefined FUN_145223940(void)

void FUN_145223940(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_144e8f4a0(param_1,0);
  if ((char)param_1[0x20] == '\0') {
    if ((int)param_1[9] == 0x10) {
      FUN_14549f040();
      FUN_14549fb70(param_1);
      FUN_14549e7e0(param_1,0);
    }
    else if ((int)param_1[9] == 0xc) {
      FUN_145499b60();
      FUN_14549b7c0(param_1);
      FUN_145497d40(param_1,0);
    }
    else {
      FUN_144e902d0(param_1);
      FUN_144e91cd0(param_1);
      FUN_1454974e0(param_1,0);
    }
  }
  iVar1 = (int)param_1[9];
  if (*(char *)(param_1[0x34] + 0x1a) == '\0') {
    if (iVar1 == 0x10) {
      *(undefined4 *)(*param_1 + 0x28) = 0xf;
      *(int *)(*param_1 + 0x2c) = (int)param_1[9];
      (**(code **)*param_1)(param_1);
      iVar1 = (int)param_1[9];
    }
    if (iVar1 == 0xc) {
      FUN_14549d540();
    }
    else {
      FUN_14549c4d0(param_1);
    }
    if (*(char *)((longlong)param_1 + 0x101) == '\0') {
      if (*(char *)((longlong)param_1 + 0x124) == '\0') {
        FUN_1452453a0(param_1);
      }
      else {
        FUN_145255b50();
      }
    }
    else {
      FUN_145256e10();
    }
    if ((int)param_1[9] == 0xc) {
      if (((int)param_1[0x1e] < 2) && (*(char *)((longlong)param_1 + 0x102) == '\0')) {
        FUN_145499080(param_1,0);
      }
      else {
        FUN_145499080(param_1,1);
      }
    }
    else {
      if (((int)param_1[0x1e] < 2) && (*(char *)((longlong)param_1 + 0x102) == '\0')) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      FUN_1454985a0(param_1,uVar2);
    }
  }
  else {
    if (iVar1 == 0x10) {
      FUN_1454a43f0(param_1);
    }
    else if (iVar1 == 0xc) {
      FUN_1454a3bc0();
    }
    else {
      FUN_1454a33a0(param_1);
    }
    if (*(char *)((longlong)param_1 + 0x101) == '\0') {
      FUN_1454a28e0(param_1);
    }
    else {
      *(undefined4 *)(*param_1 + 0x28) = 1;
      (**(code **)*param_1)();
    }
    iVar1 = (int)param_1[0x1e];
    if ((int)param_1[9] == 0x10) {
      if ((iVar1 < 2) && (*(char *)((longlong)param_1 + 0x102) == '\0')) {
        FUN_1454a1e10(param_1,0);
      }
      else {
        FUN_1454a1e10(param_1,1);
      }
    }
    else if ((int)param_1[9] == 0xc) {
      if ((iVar1 < 2) && (*(char *)((longlong)param_1 + 0x102) == '\0')) {
        FUN_1454a1340(param_1,0);
      }
      else {
        FUN_1454a1340(param_1,1);
      }
    }
    else if ((iVar1 < 2) && (*(char *)((longlong)param_1 + 0x102) == '\0')) {
      FUN_1454a0870(param_1,0);
    }
    else {
      FUN_1454a0870(param_1,1);
    }
  }
  if ((int)param_1[9] == 0x10) {
    FUN_14549e570();
  }
  else if ((int)param_1[9] == 0xc) {
    FUN_145497270();
  }
  else {
    FUN_145497000(param_1,0);
  }
  FUN_14521e9b0(param_1);
  (**(code **)(param_1[1] + 0x30))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000145223b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1[0x38])(param_1);
  return;
}



// FUNCTION 145223ba0 FUN_145223ba0 body=783 status=ok
// SIG undefined FUN_145223ba0(void)

void FUN_145223ba0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  int *piVar10;
  undefined8 *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined1 *puVar15;
  
  if ((int)param_1[0x23] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
    (**(code **)*param_1)(param_1);
  }
  if (*(char *)(param_1[0x40] + 0x6c) == '\0') {
    puVar7 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x110);
    param_1[0x48] = (longlong)puVar7;
    *puVar7 = &LAB_145223eb0;
    puVar7[1] = FUN_145223ed0;
    *(undefined1 *)(puVar7 + 4) = 0;
  }
  else {
    puVar7 = (undefined8 *)param_1[0x48];
  }
  if (*(char *)((longlong)param_1 + 0x16a) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  if (((char)param_1[0xc] == '\0') || ((int)param_1[0x30] < 2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar14 = 0;
  if (0 < (int)param_1[7]) {
    piVar13 = (int *)(puVar7 + 0x1a);
    piVar10 = (int *)(param_1[0x24] + 8);
    puVar11 = puVar7 + 0xf;
    puVar15 = (undefined1 *)((longlong)puVar7 + 0x102);
    do {
      iVar5 = *(int *)((longlong)param_1 + 0x17c);
      iVar12 = (piVar10[7] * *piVar10) / (int)param_1[0x30];
      iVar1 = (int)param_1[0x2f];
      iVar4 = (piVar10[7] * piVar10[1]) / (int)param_1[0x30];
      *piVar13 = iVar4;
      if ((char)piVar10[10] == '\0') {
        *puVar11 = &LAB_145224030;
      }
      else if ((iVar12 == iVar1) && (iVar4 == iVar5)) {
        *puVar11 = &LAB_145224020;
      }
      else {
        if ((iVar12 * 2 == iVar1) && (iVar4 == iVar5)) {
          if ((bVar3) && (2 < (uint)piVar10[8])) {
            iVar5 = FUN_145258f70();
            pcVar9 = FUN_1452242d0;
            if (iVar5 != 0) {
              pcVar9 = FUN_145259060;
            }
            *puVar11 = pcVar9;
          }
          else {
            iVar5 = FUN_145258dd0();
            pcVar9 = FUN_1452241a0;
            if (iVar5 != 0) {
              pcVar9 = FUN_145258e90;
            }
            *puVar11 = pcVar9;
          }
        }
        else if (((iVar12 == iVar1) && (iVar4 * 2 == iVar5)) && (bVar3)) {
          *puVar11 = FUN_1452243d0;
          *(undefined1 *)(puVar7 + 4) = 1;
        }
        else if ((iVar12 * 2 == iVar1) && (iVar4 * 2 == iVar5)) {
          if ((bVar3) && (2 < (uint)piVar10[8])) {
            iVar5 = FUN_145258f10();
            pcVar9 = FUN_145224520;
            if (iVar5 != 0) {
              pcVar9 = FUN_145258fd0;
            }
            *puVar11 = pcVar9;
            *(undefined1 *)(puVar7 + 4) = 1;
          }
          else {
            iVar5 = FUN_145258d90();
            pcVar9 = FUN_145224210;
            if (iVar5 != 0) {
              pcVar9 = FUN_145258e10;
            }
            *puVar11 = pcVar9;
          }
        }
        else if ((iVar1 % iVar12 == 0) && (iVar5 % iVar4 == 0)) {
          *puVar11 = FUN_145224040;
          puVar15[-10] = (char)(iVar1 / iVar12);
          *puVar15 = (char)(iVar5 / iVar4);
        }
        else {
          *(undefined4 *)(*param_1 + 0x28) = 0x26;
          (**(code **)*param_1)(param_1);
        }
        if (*(char *)(param_1[0x40] + 0x6c) == '\0') {
          lVar2 = param_1[1];
          uVar6 = FUN_144e92960(*(undefined4 *)((longlong)param_1 + 0x74),(int)param_1[0x2f]);
          uVar8 = (**(code **)(lVar2 + 0x10))
                            (param_1,1,uVar6,*(undefined4 *)((longlong)param_1 + 0x17c));
          puVar11[-10] = uVar8;
        }
      }
      piVar13 = piVar13 + 1;
      iVar14 = iVar14 + 1;
      puVar11 = puVar11 + 1;
      puVar15 = puVar15 + 1;
      piVar10 = piVar10 + 0x18;
    } while (iVar14 < (int)param_1[7]);
  }
  return;
}



// FUNCTION 145223ed0 FUN_145223ed0 body=335 status=ok
// SIG undefined FUN_145223ed0(void)

void FUN_145223ed0(longlong param_1,longlong *param_2,int *param_3,undefined8 param_4,
                  longlong param_5,uint *param_6,int param_7)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x240);
  iVar4 = *(int *)(lVar1 + 200);
  if (*(int *)(param_1 + 0x17c) <= iVar4) {
    iVar4 = 0;
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar5 = lVar1 - (longlong)param_2;
      piVar7 = (int *)(lVar1 + 0xd0);
      do {
        (**(code **)((longlong)param_2 + lVar5 + 0x78))
                  (param_1,lVar6,*param_2 + (ulonglong)(uint)(*param_3 * *piVar7) * 8,
                   lVar1 + 0x28 + (longlong)iVar4 * 8);
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 1;
        lVar6 = lVar6 + 0x60;
        param_2 = param_2 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x38));
    }
    iVar4 = 0;
    *(undefined4 *)(lVar1 + 200) = 0;
  }
  uVar3 = *(int *)(param_1 + 0x17c) - iVar4;
  uVar2 = *(uint *)(lVar1 + 0xcc);
  if (uVar3 <= *(uint *)(lVar1 + 0xcc)) {
    uVar2 = uVar3;
  }
  uVar3 = param_7 - *param_6;
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  (**(code **)(*(longlong *)(param_1 + 0x248) + 8))
            (param_1,lVar1 + 0x28,iVar4,param_5 + (ulonglong)*param_6 * 8,uVar3);
  *param_6 = *param_6 + uVar3;
  *(int *)(lVar1 + 200) = *(int *)(lVar1 + 200) + uVar3;
  *(int *)(lVar1 + 0xcc) = *(int *)(lVar1 + 0xcc) - uVar3;
  if (*(int *)(param_1 + 0x17c) <= *(int *)(lVar1 + 200)) {
    *param_3 = *param_3 + 1;
  }
  return;
}



// FUNCTION 145224040 FUN_145224040 body=348 status=ok
// SIG undefined FUN_145224040(void)

void FUN_145224040(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Dst;
  void *pvVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  int iVar11;
  
  iVar11 = 0;
  puVar3 = (ulonglong *)*param_4;
  bVar1 = *(byte *)((longlong)*(int *)(param_2 + 4) + 0xf8 + *(longlong *)(param_1 + 0x240));
  bVar2 = *(byte *)((longlong)*(int *)(param_2 + 4) + 0x102 + *(longlong *)(param_1 + 0x240));
  uVar5 = (ulonglong)bVar2;
  uVar4 = (uint)bVar2;
  if (0 < *(int *)(param_1 + 0x17c)) {
    uVar7 = (ulonglong)uVar4;
    uVar6 = uVar5;
    puVar10 = puVar3;
    do {
      _Dst = (void *)*puVar10;
      pbVar9 = (byte *)*param_3;
      pvVar8 = (void *)((ulonglong)*(uint *)(param_1 + 0x74) + (longlong)_Dst);
      if (_Dst < pvVar8) {
        do {
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          if (bVar1 != 0) {
            memset(_Dst,(uint)bVar2,(ulonglong)bVar1);
            _Dst = (void *)((longlong)_Dst + (ulonglong)bVar1);
          }
        } while (_Dst < pvVar8);
        uVar6 = (ulonglong)uVar4;
        uVar7 = uVar5;
      }
      if (1 < uVar7) {
        FUN_144e92980(puVar3,iVar11,puVar3,iVar11 + 1,(int)uVar6 + -1,
                      *(undefined4 *)(param_1 + 0x74));
        uVar6 = (ulonglong)uVar4;
        uVar7 = uVar5;
      }
      param_3 = param_3 + 1;
      iVar11 = iVar11 + (int)uVar6;
      puVar10 = puVar10 + uVar5;
    } while (iVar11 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 1452241a0 FUN_1452241a0 body=107 status=ok
// SIG undefined FUN_1452241a0(void)

void FUN_1452241a0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  param_4 = (undefined8 *)*param_4;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    param_3 = param_3 - (longlong)param_4;
    do {
      puVar3 = (undefined1 *)*param_4;
      puVar2 = *(undefined1 **)(param_3 + (longlong)param_4);
      puVar4 = puVar3 + *(uint *)(param_1 + 0x74);
      for (; puVar3 < puVar4; puVar3 = puVar3 + 2) {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        *puVar3 = uVar1;
        puVar3[1] = uVar1;
      }
      iVar5 = iVar5 + 1;
      param_4 = param_4 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 145224210 FUN_145224210 body=179 status=ok
// SIG undefined FUN_145224210(void)

void FUN_145224210(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  param_4 = (undefined8 *)*param_4;
  iVar6 = 0;
  puVar7 = param_4;
  if (0 < *(int *)(param_1 + 0x17c)) {
    do {
      puVar3 = (undefined1 *)*puVar7;
      uVar4 = *(uint *)(param_1 + 0x74);
      puVar5 = (undefined1 *)*param_3;
      puVar1 = puVar3 + uVar4;
      if (puVar3 < puVar1) {
        do {
          uVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar3 = uVar2;
          puVar3[1] = uVar2;
          puVar3 = puVar3 + 2;
        } while (puVar3 < puVar1);
        uVar4 = *(uint *)(param_1 + 0x74);
      }
      FUN_144e92980(param_4,iVar6,param_4,iVar6 + 1,1,uVar4);
      param_3 = param_3 + 1;
      iVar6 = iVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (iVar6 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 1452242d0 FUN_1452242d0 body=249 status=ok
// SIG undefined FUN_1452242d0(void)

void FUN_1452242d0(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  param_4 = (undefined8 *)*param_4;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    param_3 = param_3 - (longlong)param_4;
    do {
      pbVar7 = *(byte **)(param_3 + (longlong)param_4);
      pbVar3 = (byte *)*param_4;
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      *pbVar3 = bVar2;
      pbVar3[1] = (byte)(*pbVar7 + 2 + (uint)bVar2 + (uint)bVar2 * 2 >> 2);
      for (iVar6 = *(int *)(param_2 + 0x28) + -2; pbVar3 = pbVar3 + 2, iVar6 != 0;
          iVar6 = iVar6 + -1) {
        bVar2 = *pbVar7;
        pbVar1 = pbVar7 + -1;
        pbVar7 = pbVar7 + 1;
        iVar5 = (uint)bVar2 + (uint)bVar2 * 2;
        *pbVar3 = (byte)(*pbVar1 + 1 + iVar5 >> 2);
        pbVar3[1] = (byte)(iVar5 + 2 + (uint)*pbVar7 >> 2);
      }
      bVar2 = *pbVar7;
      iVar4 = iVar4 + 1;
      param_4 = param_4 + 1;
      *pbVar3 = (byte)(pbVar7[-1] + 1 + (uint)bVar2 + (uint)bVar2 * 2 >> 2);
      pbVar3[1] = bVar2;
    } while (iVar4 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 1452243d0 FUN_1452243d0 body=322 status=ok
// SIG undefined FUN_1452243d0(void)

void FUN_1452243d0(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  
  lVar2 = *param_4;
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    uVar7 = *(uint *)(param_2 + 0x28);
    lVar10 = 0;
    do {
      iVar5 = 0;
      uVar4 = uVar7;
      do {
        pbVar3 = (byte *)*param_3;
        if (iVar5 == 0) {
          pbVar6 = (byte *)param_3[-1];
        }
        else {
          pbVar6 = (byte *)param_3[1];
        }
        uVar9 = 0;
        puVar8 = *(undefined1 **)(lVar2 + lVar10 * 8);
        if (uVar4 != 0) {
          do {
            bVar1 = *pbVar3;
            uVar9 = uVar9 + 1;
            pbVar3 = pbVar3 + 1;
            *puVar8 = (char)((uint)*pbVar6 + (uint)bVar1 + (uint)bVar1 * 2 + (iVar5 != 0) + 1 >> 2);
            uVar7 = *(uint *)(param_2 + 0x28);
            pbVar6 = pbVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar9 < uVar7);
          pbVar3 = (byte *)*param_3;
          uVar4 = uVar7;
        }
        if (iVar5 == -1) {
          pbVar6 = (byte *)param_3[-1];
        }
        else {
          pbVar6 = (byte *)param_3[1];
        }
        uVar9 = 0;
        puVar8 = *(undefined1 **)(lVar2 + 8 + lVar10 * 8);
        if (uVar4 != 0) {
          do {
            bVar1 = *pbVar3;
            uVar9 = uVar9 + 1;
            pbVar3 = pbVar3 + 1;
            *puVar8 = (char)((uint)*pbVar6 + (uint)bVar1 + (uint)bVar1 * 2 + (iVar5 != -1) + 1 >> 2)
            ;
            uVar7 = *(uint *)(param_2 + 0x28);
            pbVar6 = pbVar6 + 1;
            puVar8 = puVar8 + 1;
            uVar4 = uVar7;
          } while (uVar9 < uVar7);
        }
        iVar11 = iVar11 + 2;
        lVar10 = lVar10 + 2;
        iVar5 = iVar5 + 2;
      } while (iVar5 < 2);
      param_3 = param_3 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 145224520 FUN_145224520 body=374 status=ok
// SIG undefined FUN_145224520(void)

void FUN_145224520(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  int iVar15;
  
  lVar2 = *param_4;
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    lVar7 = 0;
    lVar14 = 0;
    do {
      iVar8 = 0;
      do {
        pbVar3 = *(byte **)(param_3 + lVar7 * 8);
        if (iVar8 == 0) {
          pbVar12 = *(byte **)(param_3 + -8 + lVar7 * 8);
        }
        else {
          pbVar12 = *(byte **)(param_3 + 8 + lVar7 * 8);
        }
        iVar15 = iVar15 + 1;
        puVar4 = *(undefined1 **)(lVar2 + lVar14 * 8);
        lVar14 = lVar14 + 1;
        iVar6 = (uint)*pbVar3 + (uint)*pbVar3 * 2 + (uint)*pbVar12;
        pbVar13 = pbVar3 + 2;
        iVar10 = (uint)pbVar3[1] + (uint)pbVar3[1] * 2 + (uint)pbVar12[1];
        puVar4[1] = (char)((uint)(iVar6 * 3 + 7 + iVar10) >> 4);
        *puVar4 = (char)(iVar6 * 4 + 8U >> 4);
        pbVar3 = pbVar12 + 2;
        for (iVar9 = *(int *)(param_2 + 0x28) + -2; puVar5 = puVar4 + 2, iVar9 != 0;
            iVar9 = iVar9 + -1) {
          bVar1 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          iVar11 = (uint)bVar1 + (uint)bVar1 * 2 + (uint)*pbVar3;
          *puVar5 = (char)((uint)(iVar6 + 8 + iVar10 * 3) >> 4);
          puVar4[3] = (char)((uint)(iVar11 + 7 + iVar10 * 3) >> 4);
          iVar6 = iVar10;
          iVar10 = iVar11;
          pbVar3 = pbVar3 + 1;
          puVar4 = puVar5;
        }
        iVar8 = iVar8 + 1;
        *puVar5 = (char)((uint)(iVar6 + iVar10 * 3 + 8) >> 4);
        puVar4[3] = (char)(iVar10 * 4 + 7U >> 4);
      } while (iVar8 < 2);
      lVar7 = lVar7 + 1;
    } while (iVar15 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 1452246a0 FUN_1452246a0 body=696 status=ok
// SIG undefined FUN_1452246a0(void)

void FUN_1452246a0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined1 *puVar15;
  
  if ((int)param_1[0x23] != 0xc) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
    (**(code **)*param_1)(param_1);
  }
  if (*(char *)(param_1[0x40] + 0x6c) == '\0') {
    puVar7 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x110);
    param_1[0x48] = (longlong)puVar7;
    *puVar7 = &LAB_145224960;
    puVar7[2] = FUN_145224980;
    *(undefined1 *)(puVar7 + 4) = 0;
  }
  else {
    puVar7 = (undefined8 *)param_1[0x48];
  }
  if (*(char *)((longlong)param_1 + 0x16a) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  if (((char)param_1[0xc] == '\0') || ((int)param_1[0x30] < 2)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  iVar14 = 0;
  if (0 < (int)param_1[7]) {
    piVar13 = (int *)(puVar7 + 0x1a);
    puVar11 = puVar7 + 0xf;
    puVar15 = (undefined1 *)((longlong)puVar7 + 0x102);
    piVar10 = (int *)(param_1[0x24] + 8);
    do {
      iVar1 = *(int *)((longlong)param_1 + 0x17c);
      iVar12 = (piVar10[7] * *piVar10) / (int)param_1[0x30];
      iVar2 = (int)param_1[0x2f];
      iVar5 = (piVar10[7] * piVar10[1]) / (int)param_1[0x30];
      *piVar13 = iVar5;
      if ((char)piVar10[10] == '\0') {
        *puVar11 = &LAB_145224ae0;
      }
      else if ((iVar12 == iVar2) && (iVar5 == iVar1)) {
        *puVar11 = &LAB_145224ad0;
      }
      else {
        if ((iVar12 * 2 == iVar2) && (iVar5 == iVar1)) {
          if ((!bVar4) || (pcVar8 = FUN_145224d00, (uint)piVar10[8] < 3)) {
            pcVar8 = FUN_145224be0;
          }
          *puVar11 = pcVar8;
        }
        else if (((iVar12 == iVar2) && (iVar5 * 2 == iVar1)) && (bVar4)) {
          *puVar11 = FUN_145224df0;
          *(undefined1 *)(puVar7 + 4) = 1;
        }
        else if ((iVar12 * 2 == iVar2) && (iVar5 * 2 == iVar1)) {
          if ((bVar4) && (2 < (uint)piVar10[8])) {
            *puVar11 = FUN_145224f40;
            *(undefined1 *)(puVar7 + 4) = 1;
          }
          else {
            *puVar11 = FUN_145224c50;
          }
        }
        else if ((iVar2 % iVar12 == 0) && (iVar1 % iVar5 == 0)) {
          *puVar11 = FUN_145224af0;
          puVar15[-10] = (char)(iVar2 / iVar12);
          *puVar15 = (char)(iVar1 / iVar5);
        }
        else {
          *(undefined4 *)(*param_1 + 0x28) = 0x26;
          (**(code **)*param_1)(param_1);
        }
        if (*(char *)(param_1[0x40] + 0x6c) == '\0') {
          lVar3 = param_1[1];
          uVar6 = FUN_144e92960(*(undefined4 *)((longlong)param_1 + 0x74),(int)param_1[0x2f]);
          uVar9 = (**(code **)(lVar3 + 0x10))
                            (param_1,1,uVar6,*(undefined4 *)((longlong)param_1 + 0x17c));
          puVar11[-10] = uVar9;
        }
      }
      piVar13 = piVar13 + 1;
      iVar14 = iVar14 + 1;
      puVar11 = puVar11 + 1;
      puVar15 = puVar15 + 1;
      piVar10 = piVar10 + 0x18;
    } while (iVar14 < (int)param_1[7]);
  }
  return;
}



// FUNCTION 145224980 FUN_145224980 body=335 status=ok
// SIG undefined FUN_145224980(void)

void FUN_145224980(longlong param_1,longlong *param_2,int *param_3,undefined8 param_4,
                  longlong param_5,uint *param_6,int param_7)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x240);
  iVar4 = *(int *)(lVar1 + 200);
  if (*(int *)(param_1 + 0x17c) <= iVar4) {
    iVar4 = 0;
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar5 = lVar1 - (longlong)param_2;
      piVar7 = (int *)(lVar1 + 0xd0);
      do {
        (**(code **)((longlong)param_2 + lVar5 + 0x78))
                  (param_1,lVar6,*param_2 + (ulonglong)(uint)(*param_3 * *piVar7) * 8,
                   lVar1 + 0x28 + (longlong)iVar4 * 8);
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 1;
        lVar6 = lVar6 + 0x60;
        param_2 = param_2 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x38));
    }
    iVar4 = 0;
    *(undefined4 *)(lVar1 + 200) = 0;
  }
  uVar3 = *(int *)(param_1 + 0x17c) - iVar4;
  uVar2 = *(uint *)(lVar1 + 0xcc);
  if (uVar3 <= *(uint *)(lVar1 + 0xcc)) {
    uVar2 = uVar3;
  }
  uVar3 = param_7 - *param_6;
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  (**(code **)(*(longlong *)(param_1 + 0x248) + 0x10))
            (param_1,lVar1 + 0x28,iVar4,param_5 + (ulonglong)*param_6 * 8,uVar3);
  *param_6 = *param_6 + uVar3;
  *(int *)(lVar1 + 200) = *(int *)(lVar1 + 200) + uVar3;
  *(int *)(lVar1 + 0xcc) = *(int *)(lVar1 + 0xcc) - uVar3;
  if (*(int *)(param_1 + 0x17c) <= *(int *)(lVar1 + 200)) {
    *param_3 = *param_3 + 1;
  }
  return;
}



// FUNCTION 145224af0 FUN_145224af0 body=239 status=ok
// SIG undefined FUN_145224af0(void)

void FUN_145224af0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  
  iVar7 = 0;
  param_4 = (undefined8 *)*param_4;
  bVar2 = *(byte *)((longlong)*(int *)(param_2 + 4) + 0xf8 + *(longlong *)(param_1 + 0x240));
  bVar3 = *(byte *)((longlong)*(int *)(param_2 + 4) + 0x102 + *(longlong *)(param_1 + 0x240));
  if (0 < *(int *)(param_1 + 0x17c)) {
    uVar11 = (ulonglong)(int)(uint)bVar3;
    lVar9 = uVar11 * 8;
    puVar12 = param_4;
    do {
      puVar6 = (undefined2 *)*puVar12;
      puVar10 = (undefined2 *)*param_3;
      puVar1 = puVar6 + *(uint *)(param_1 + 0x74);
      if (puVar6 < puVar1) {
        do {
          uVar4 = *puVar10;
          puVar10 = puVar10 + 1;
          uVar5 = (ulonglong)bVar2;
          puVar8 = puVar6;
          if (bVar2 != 0) {
            for (; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar8 = uVar4;
              puVar8 = puVar8 + 1;
            }
            puVar6 = puVar6 + bVar2;
          }
        } while (puVar6 < puVar1);
        lVar9 = uVar11 * 8;
      }
      if (1 < uVar11) {
        FUN_1454a4c20(param_4,iVar7,param_4,iVar7 + 1,bVar3 - 1,*(undefined4 *)(param_1 + 0x74));
        uVar11 = (ulonglong)bVar3;
      }
      param_3 = param_3 + 1;
      iVar7 = iVar7 + (uint)bVar3;
      puVar12 = (undefined8 *)((longlong)puVar12 + lVar9);
    } while (iVar7 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 145224be0 FUN_145224be0 body=109 status=ok
// SIG undefined FUN_145224be0(void)

void FUN_145224be0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  param_4 = (undefined8 *)*param_4;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    param_3 = param_3 - (longlong)param_4;
    do {
      puVar4 = (undefined2 *)*param_4;
      puVar3 = *(undefined2 **)(param_3 + (longlong)param_4);
      puVar1 = puVar4 + *(uint *)(param_1 + 0x74);
      for (; puVar4 < puVar1; puVar4 = puVar4 + 2) {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar4 = uVar2;
        puVar4[1] = uVar2;
      }
      iVar5 = iVar5 + 1;
      param_4 = param_4 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 145224c50 FUN_145224c50 body=167 status=ok
// SIG undefined FUN_145224c50(void)

void FUN_145224c50(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  param_4 = (undefined8 *)*param_4;
  iVar6 = 0;
  puVar7 = param_4;
  if (0 < *(int *)(param_1 + 0x17c)) {
    do {
      puVar3 = (undefined2 *)*puVar7;
      uVar4 = *(uint *)(param_1 + 0x74);
      puVar5 = (undefined2 *)*param_3;
      puVar1 = puVar3 + uVar4;
      if (puVar3 < puVar1) {
        do {
          uVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar3 = uVar2;
          puVar3[1] = uVar2;
          puVar3 = puVar3 + 2;
        } while (puVar3 < puVar1);
        uVar4 = *(uint *)(param_1 + 0x74);
      }
      FUN_1454a4c20(param_4,iVar6,param_4,iVar6 + 1,1,uVar4);
      param_3 = param_3 + 1;
      iVar6 = iVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (iVar6 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 145224d00 FUN_145224d00 body=238 status=ok
// SIG undefined FUN_145224d00(void)

void FUN_145224d00(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  param_4 = (undefined8 *)*param_4;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    param_3 = param_3 - (longlong)param_4;
    do {
      psVar6 = *(short **)(param_3 + (longlong)param_4);
      psVar3 = (short *)*param_4;
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
      *psVar3 = sVar2;
      psVar3[1] = (short)(*psVar6 + 2 + sVar2 * 3 >> 2);
      for (iVar5 = *(int *)(param_2 + 0x28) + -2; psVar3 = psVar3 + 2, iVar5 != 0;
          iVar5 = iVar5 + -1) {
        sVar2 = *psVar6;
        psVar1 = psVar6 + -1;
        psVar6 = psVar6 + 1;
        *psVar3 = (short)(*psVar1 + 1 + sVar2 * 3 >> 2);
        psVar3[1] = (short)(sVar2 * 3 + 2 + (int)*psVar6 >> 2);
      }
      sVar2 = *psVar6;
      iVar4 = iVar4 + 1;
      param_4 = param_4 + 1;
      *psVar3 = (short)(psVar6[-1] + 1 + sVar2 * 3 >> 2);
      psVar3[1] = sVar2;
    } while (iVar4 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 145224df0 FUN_145224df0 body=323 status=ok
// SIG undefined FUN_145224df0(void)

void FUN_145224df0(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  
  lVar2 = *param_4;
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    uVar7 = *(uint *)(param_2 + 0x28);
    lVar10 = 0;
    do {
      iVar5 = 0;
      uVar4 = uVar7;
      do {
        psVar3 = (short *)*param_3;
        if (iVar5 == 0) {
          psVar6 = (short *)param_3[-1];
        }
        else {
          psVar6 = (short *)param_3[1];
        }
        uVar9 = 0;
        puVar8 = *(undefined2 **)(lVar2 + lVar10 * 8);
        if (uVar4 != 0) {
          do {
            sVar1 = *psVar3;
            uVar9 = uVar9 + 1;
            psVar3 = psVar3 + 1;
            *puVar8 = (short)((int)((int)*psVar6 + sVar1 * 3 + (iVar5 != 0) + 1) >> 2);
            uVar7 = *(uint *)(param_2 + 0x28);
            psVar6 = psVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar9 < uVar7);
          psVar3 = (short *)*param_3;
          uVar4 = uVar7;
        }
        if (iVar5 == -1) {
          psVar6 = (short *)param_3[-1];
        }
        else {
          psVar6 = (short *)param_3[1];
        }
        uVar9 = 0;
        puVar8 = *(undefined2 **)(lVar2 + 8 + lVar10 * 8);
        if (uVar4 != 0) {
          do {
            sVar1 = *psVar3;
            uVar9 = uVar9 + 1;
            psVar3 = psVar3 + 1;
            *puVar8 = (short)((int)((int)*psVar6 + sVar1 * 3 + (iVar5 != -1) + 1) >> 2);
            uVar7 = *(uint *)(param_2 + 0x28);
            psVar6 = psVar6 + 1;
            puVar8 = puVar8 + 1;
            uVar4 = uVar7;
          } while (uVar9 < uVar7);
        }
        iVar11 = iVar11 + 2;
        lVar10 = lVar10 + 2;
        iVar5 = iVar5 + 2;
      } while (iVar5 < 2);
      param_3 = param_3 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 145224f40 FUN_145224f40 body=378 status=ok
// SIG undefined FUN_145224f40(void)

void FUN_145224f40(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  short *psVar12;
  longlong lVar13;
  int iVar14;
  
  lVar2 = *param_4;
  iVar14 = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    lVar6 = 0;
    lVar13 = 0;
    do {
      iVar7 = 0;
      do {
        psVar3 = *(short **)(param_3 + lVar6 * 8);
        if (iVar7 == 0) {
          psVar11 = *(short **)(param_3 + -8 + lVar6 * 8);
        }
        else {
          psVar11 = *(short **)(param_3 + 8 + lVar6 * 8);
        }
        iVar14 = iVar14 + 1;
        puVar4 = *(undefined2 **)(lVar2 + lVar13 * 8);
        lVar13 = lVar13 + 1;
        iVar5 = *psVar3 * 3 + (int)*psVar11;
        psVar12 = psVar3 + 2;
        iVar9 = psVar3[1] * 3 + (int)psVar11[1];
        puVar4[1] = (short)(iVar5 * 3 + 7 + iVar9 >> 4);
        *puVar4 = (short)(iVar5 * 4 + 8 >> 4);
        psVar3 = psVar11 + 2;
        for (iVar8 = *(int *)(param_2 + 0x28) + -2; puVar4 = puVar4 + 2, iVar8 != 0;
            iVar8 = iVar8 + -1) {
          sVar1 = *psVar12;
          psVar12 = psVar12 + 1;
          iVar10 = sVar1 * 3 + (int)*psVar3;
          *puVar4 = (short)(iVar5 + 8 + iVar9 * 3 >> 4);
          puVar4[1] = (short)(iVar10 + 7 + iVar9 * 3 >> 4);
          iVar5 = iVar9;
          iVar9 = iVar10;
          psVar3 = psVar3 + 1;
        }
        iVar7 = iVar7 + 1;
        *puVar4 = (short)(iVar5 + iVar9 * 3 + 8 >> 4);
        puVar4[1] = (short)(iVar9 * 4 + 7 >> 4);
      } while (iVar7 < 2);
      lVar6 = lVar6 + 1;
    } while (iVar14 < *(int *)(param_1 + 0x17c));
  }
  return;
}



// FUNCTION 1452250c0 FUN_1452250c0 body=526 status=ok
// SIG undefined FUN_1452250c0(void)

void FUN_1452250c0(longlong *param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  
  if ((int)param_1[0x23] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
    (**(code **)*param_1)(param_1);
  }
  puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x98);
  param_1[0x41] = (longlong)puVar3;
  *puVar3 = FUN_145225730;
  if (param_2 != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 4;
    (**(code **)*param_1)(param_1);
  }
  uVar6 = 0;
  iVar8 = (int)param_1[0x30];
  if (*(char *)(param_1[0x48] + 0x20) == '\0') {
    iVar2 = (int)param_1[7];
  }
  else {
    if (iVar8 < 2) {
      *(undefined4 *)(*param_1 + 0x28) = 0x2f;
      (**(code **)*param_1)(param_1);
      iVar8 = (int)param_1[0x30];
    }
    lVar1 = param_1[0x41];
    lVar4 = (**(code **)param_1[1])(param_1,1,(longlong)((int)param_1[7] * 2) << 3);
    *(longlong *)(lVar1 + 0x78) = lVar4;
    *(longlong *)(lVar1 + 0x80) = lVar4 + (longlong)(int)param_1[7] * 8;
    iVar2 = (int)param_1[7];
    if (0 < iVar2) {
      piVar11 = (int *)(param_1[0x24] + 0xc);
      uVar10 = uVar6;
      do {
        iVar2 = (piVar11[6] * *piVar11) / (int)param_1[0x30];
        iVar7 = (iVar8 + 4) * iVar2;
        lVar4 = (**(code **)param_1[1])(param_1,1,(longlong)(iVar7 * 2) << 3);
        uVar9 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar9;
        piVar11 = piVar11 + 0x18;
        lVar4 = lVar4 + (longlong)iVar2 * 8;
        *(longlong *)(uVar10 + *(longlong *)(lVar1 + 0x78)) = lVar4;
        *(longlong *)(uVar10 + *(longlong *)(lVar1 + 0x80)) = lVar4 + (longlong)iVar7 * 8;
        iVar2 = (int)param_1[7];
        uVar10 = uVar10 + 8;
      } while ((int)uVar9 < iVar2);
    }
    iVar8 = (int)param_1[0x30] + 2;
  }
  iVar7 = 0;
  if (0 < iVar2) {
    piVar11 = (int *)(param_1[0x24] + 0xc);
    puVar3 = puVar3 + 4;
    do {
      uVar5 = (**(code **)(param_1[1] + 0x10))
                        (param_1,1,piVar11[6] * piVar11[4],
                         ((piVar11[6] * *piVar11) / (int)param_1[0x30]) * iVar8);
      *puVar3 = uVar5;
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 1;
      piVar11 = piVar11 + 0x18;
    } while (iVar7 < (int)param_1[7]);
  }
  return;
}



// FUNCTION 1452252d0 FUN_1452252d0 body=166 status=ok
// SIG undefined FUN_1452252d0(void)

void FUN_1452252d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x208);
  if (*(char *)(lVar2 + 0x70) == '\0') {
    iVar3 = (**(code **)(*(longlong *)(param_1 + 0x210) + 0x18))(param_1,lVar2 + 0x20);
    if (iVar3 == 0) {
      return;
    }
    *(undefined1 *)(lVar2 + 0x70) = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x180);
  (**(code **)(*(longlong *)(param_1 + 0x218) + 8))
            (param_1,lVar2 + 0x20,lVar2 + 0x74,uVar1,param_2,param_3,param_4);
  if (uVar1 <= *(uint *)(lVar2 + 0x74)) {
    *(undefined1 *)(lVar2 + 0x70) = 0;
    *(undefined4 *)(lVar2 + 0x74) = 0;
  }
  return;
}



// FUNCTION 145225380 FUN_145225380 body=881 status=ok
// SIG undefined FUN_145225380(void)

void FUN_145225380(longlong param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int *piVar17;
  uint uVar18;
  longlong lVar20;
  ulonglong uVar19;
  
  lVar3 = *(longlong *)(param_1 + 0x208);
  if (*(char *)(lVar3 + 0x70) == '\0') {
    iVar6 = (**(code **)(*(longlong *)(param_1 + 0x210) + 0x18))
                      (param_1,*(undefined8 *)(lVar3 + 0x78 + (longlong)*(int *)(lVar3 + 0x88) * 8))
    ;
    if (iVar6 == 0) {
      return;
    }
    *(int *)(lVar3 + 0x94) = *(int *)(lVar3 + 0x94) + 1;
    *(undefined1 *)(lVar3 + 0x70) = 1;
  }
  iVar6 = *(int *)(lVar3 + 0x8c);
  uVar13 = 0;
  if (iVar6 != 0) {
    if (iVar6 == 1) goto LAB_14522552a;
    if (iVar6 != 2) {
      return;
    }
    (**(code **)(*(longlong *)(param_1 + 0x218) + 8))
              (param_1,*(undefined8 *)(lVar3 + 0x78 + (longlong)*(int *)(lVar3 + 0x88) * 8),
               lVar3 + 0x74,*(undefined4 *)(lVar3 + 0x90),param_2,param_3,param_4);
    if (*(uint *)(lVar3 + 0x74) < *(uint *)(lVar3 + 0x90)) {
      return;
    }
    *(undefined4 *)(lVar3 + 0x8c) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(lVar3 + 0x74) = 0;
  *(int *)(lVar3 + 0x90) = *(int *)(param_1 + 0x180) + -1;
  if (*(int *)(lVar3 + 0x94) == *(int *)(param_1 + 0x184)) {
    lVar4 = *(longlong *)(param_1 + 0x208);
    if (0 < *(int *)(param_1 + 0x38)) {
      piVar17 = (int *)(*(longlong *)(param_1 + 0x120) + 0xc);
      uVar15 = uVar13;
      uVar19 = uVar13;
      do {
        uVar9 = piVar17[6] * *piVar17;
        iVar6 = (int)uVar9 / *(int *)(param_1 + 0x180);
        uVar18 = (uint)piVar17[8] % uVar9;
        if ((uint)piVar17[8] % uVar9 == 0) {
          uVar18 = uVar9;
        }
        if (uVar15 == 0) {
          *(int *)(lVar4 + 0x90) = (int)(uVar18 - 1) / iVar6 + 1;
        }
        iVar6 = iVar6 * 2;
        lVar11 = (longlong)iVar6;
        if (0 < iVar6) {
          puVar8 = (undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(lVar4 + 0x78 + (longlong)*(int *)(lVar4 + 0x88) * 8) +
                     uVar15 * 8) + (longlong)(int)uVar18 * 8);
          puVar12 = puVar8 + -1;
          do {
            *puVar8 = *puVar12;
            puVar8 = puVar8 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        uVar18 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
        uVar15 = uVar15 + 1;
        piVar17 = piVar17 + 0x18;
      } while ((int)uVar18 < *(int *)(param_1 + 0x38));
    }
  }
  *(undefined4 *)(lVar3 + 0x8c) = 1;
LAB_14522552a:
  puVar2 = (uint *)(lVar3 + 0x74);
  (**(code **)(*(longlong *)(param_1 + 0x218) + 8))
            (param_1,*(undefined8 *)(lVar3 + 0x78 + (longlong)*(int *)(lVar3 + 0x88) * 8),puVar2,
             *(undefined4 *)(lVar3 + 0x90),param_2,param_3,param_4);
  if (*(uint *)(lVar3 + 0x90) <= *puVar2) {
    if (*(int *)(lVar3 + 0x94) == 1) {
      lVar4 = *(longlong *)(param_1 + 0x208);
      iVar6 = *(int *)(param_1 + 0x180);
      if (0 < *(int *)(param_1 + 0x38)) {
        piVar17 = (int *)(*(longlong *)(param_1 + 0x120) + 0xc);
        uVar15 = uVar13;
        do {
          lVar11 = *(longlong *)(uVar13 + *(longlong *)(lVar4 + 0x78));
          iVar7 = (piVar17[6] * *piVar17) / *(int *)(param_1 + 0x180);
          lVar20 = (longlong)iVar7;
          lVar5 = *(longlong *)(uVar13 + *(longlong *)(lVar4 + 0x80));
          if (0 < iVar7) {
            iVar1 = iVar6 + 2;
            iVar14 = iVar1 * iVar7;
            puVar12 = (undefined8 *)(lVar5 + lVar20 * -8);
            lVar16 = lVar20;
            do {
              lVar10 = (longlong)(iVar14 + ((iVar6 - iVar1) + 1) * iVar7);
              puVar8 = puVar12 + 1;
              *(undefined8 *)((lVar11 - lVar5) + -8 + (longlong)puVar8) =
                   *(undefined8 *)(lVar11 + lVar10 * 8);
              *puVar12 = *(undefined8 *)(lVar5 + lVar10 * 8);
              lVar10 = (longlong)iVar14;
              iVar14 = iVar14 + 1;
              *(undefined8 *)(lVar10 * 8 + lVar11) =
                   *(undefined8 *)((lVar20 * 8 - lVar5) + lVar11 + -8 + (longlong)puVar8);
              *(undefined8 *)(lVar10 * 8 + lVar5) = puVar12[lVar20];
              lVar16 = lVar16 + -1;
              puVar12 = puVar8;
            } while (lVar16 != 0);
          }
          uVar18 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar18;
          uVar13 = uVar13 + 8;
          piVar17 = piVar17 + 0x18;
        } while ((int)uVar18 < *(int *)(param_1 + 0x38));
      }
    }
    *(uint *)(lVar3 + 0x88) = *(uint *)(lVar3 + 0x88) ^ 1;
    *(undefined1 *)(lVar3 + 0x70) = 0;
    *puVar2 = *(int *)(param_1 + 0x180) + 1;
    iVar6 = *(int *)(param_1 + 0x180);
    *(undefined4 *)(lVar3 + 0x8c) = 2;
    *(int *)(lVar3 + 0x90) = iVar6 + 2;
  }
  return;
}



// FUNCTION 145225700 FUN_145225700 body=42 status=ok
// SIG undefined FUN_145225700(void)

void FUN_145225700(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(*(longlong *)(param_1 + 0x218) + 8))(param_1,0,0,0,param_2,param_3,param_4);
  return;
}



// FUNCTION 145225730 FUN_145225730 body=555 status=ok
// SIG undefined FUN_145225730(void)

void FUN_145225730(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  
  lVar2 = param_1[0x41];
  if (param_2 == 0) {
    if (*(char *)(param_1[0x48] + 0x20) == '\0') {
      *(undefined1 *)(lVar2 + 0x70) = 0;
      *(code **)(lVar2 + 8) = FUN_1452252d0;
      *(undefined4 *)(lVar2 + 0x74) = 0;
      return;
    }
    *(code **)(lVar2 + 8) = FUN_145225380;
    lVar3 = param_1[0x41];
    iVar1 = (int)param_1[0x30];
    iVar13 = 0;
    if (0 < (int)param_1[7]) {
      piVar16 = (int *)(param_1[0x24] + 0xc);
      lVar18 = 0;
      do {
        lVar4 = *(longlong *)(lVar18 + 0x20 + lVar3);
        puVar5 = *(undefined8 **)(lVar18 + *(longlong *)(lVar3 + 0x78));
        iVar7 = (piVar16[6] * *piVar16) / (int)param_1[0x30];
        lVar17 = (longlong)iVar7;
        uVar11 = (iVar1 + 2) * iVar7;
        uVar12 = (ulonglong)uVar11;
        puVar9 = *(undefined8 **)(lVar18 + *(longlong *)(lVar3 + 0x80));
        if (0 < (int)uVar11) {
          puVar10 = puVar9;
          do {
            uVar6 = *(undefined8 *)((lVar4 - (longlong)puVar9) + (longlong)puVar10);
            *puVar10 = uVar6;
            *(undefined8 *)(((longlong)puVar5 - (longlong)puVar9) + (longlong)puVar10) = uVar6;
            puVar10 = puVar10 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        lVar15 = (longlong)(iVar7 * 2);
        if (0 < iVar7 * 2) {
          iVar14 = (iVar1 + -2) * iVar7;
          puVar10 = puVar9 + iVar7 * iVar1;
          do {
            lVar8 = (longlong)iVar14;
            iVar14 = iVar14 + 1;
            puVar9[lVar8] = *(undefined8 *)((longlong)puVar10 + (lVar4 - (longlong)puVar9));
            *puVar10 = *(undefined8 *)(lVar8 * 8 + lVar4);
            lVar15 = lVar15 + -1;
            puVar10 = puVar10 + 1;
          } while (lVar15 != 0);
        }
        if (0 < iVar7) {
          puVar9 = puVar5 + -lVar17;
          do {
            *puVar9 = *puVar5;
            puVar9 = puVar9 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        iVar13 = iVar13 + 1;
        lVar18 = lVar18 + 8;
        piVar16 = piVar16 + 0x18;
      } while (iVar13 < (int)param_1[7]);
    }
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined4 *)(lVar2 + 0x94) = 0;
    *(undefined1 *)(lVar2 + 0x70) = 0;
    *(undefined4 *)(lVar2 + 0x74) = 0;
    return;
  }
  if (param_2 == 2) {
    *(code **)(lVar2 + 8) = FUN_145225700;
    return;
  }
  *(undefined4 *)(*param_1 + 0x28) = 4;
                    /* WARNING: Could not recover jumptable at 0x000145225764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



// FUNCTION 145225960 FUN_145225960 body=526 status=ok
// SIG undefined FUN_145225960(void)

void FUN_145225960(longlong *param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  
  if ((int)param_1[0x23] != 0xc) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
    (**(code **)*param_1)(param_1);
  }
  puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x98);
  param_1[0x41] = (longlong)puVar3;
  *puVar3 = FUN_145225fd0;
  if (param_2 != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 4;
    (**(code **)*param_1)(param_1);
  }
  uVar6 = 0;
  iVar8 = (int)param_1[0x30];
  if (*(char *)(param_1[0x48] + 0x20) == '\0') {
    iVar2 = (int)param_1[7];
  }
  else {
    if (iVar8 < 2) {
      *(undefined4 *)(*param_1 + 0x28) = 0x2f;
      (**(code **)*param_1)(param_1);
      iVar8 = (int)param_1[0x30];
    }
    lVar1 = param_1[0x41];
    lVar4 = (**(code **)param_1[1])(param_1,1,(longlong)((int)param_1[7] * 2) << 3);
    *(longlong *)(lVar1 + 0x78) = lVar4;
    *(longlong *)(lVar1 + 0x80) = lVar4 + (longlong)(int)param_1[7] * 8;
    iVar2 = (int)param_1[7];
    if (0 < iVar2) {
      piVar11 = (int *)(param_1[0x24] + 0xc);
      uVar10 = uVar6;
      do {
        iVar2 = (piVar11[6] * *piVar11) / (int)param_1[0x30];
        iVar7 = (iVar8 + 4) * iVar2;
        lVar4 = (**(code **)param_1[1])(param_1,1,(longlong)(iVar7 * 2) << 3);
        uVar9 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar9;
        piVar11 = piVar11 + 0x18;
        lVar4 = lVar4 + (longlong)iVar2 * 8;
        *(longlong *)(uVar10 + *(longlong *)(lVar1 + 0x78)) = lVar4;
        *(longlong *)(uVar10 + *(longlong *)(lVar1 + 0x80)) = lVar4 + (longlong)iVar7 * 8;
        iVar2 = (int)param_1[7];
        uVar10 = uVar10 + 8;
      } while ((int)uVar9 < iVar2);
    }
    iVar8 = (int)param_1[0x30] + 2;
  }
  iVar7 = 0;
  if (0 < iVar2) {
    piVar11 = (int *)(param_1[0x24] + 0xc);
    puVar3 = puVar3 + 4;
    do {
      uVar5 = (**(code **)(param_1[1] + 0x10))
                        (param_1,1,piVar11[6] * piVar11[4],
                         ((piVar11[6] * *piVar11) / (int)param_1[0x30]) * iVar8);
      *puVar3 = uVar5;
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 1;
      piVar11 = piVar11 + 0x18;
    } while (iVar7 < (int)param_1[7]);
  }
  return;
}



// FUNCTION 145225b70 FUN_145225b70 body=166 status=ok
// SIG undefined FUN_145225b70(void)

void FUN_145225b70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x208);
  if (*(char *)(lVar2 + 0x70) == '\0') {
    iVar3 = (**(code **)(*(longlong *)(param_1 + 0x210) + 0x20))(param_1,lVar2 + 0x20);
    if (iVar3 == 0) {
      return;
    }
    *(undefined1 *)(lVar2 + 0x70) = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x180);
  (**(code **)(*(longlong *)(param_1 + 0x218) + 0x10))
            (param_1,lVar2 + 0x20,lVar2 + 0x74,uVar1,param_2,param_3,param_4);
  if (uVar1 <= *(uint *)(lVar2 + 0x74)) {
    *(undefined1 *)(lVar2 + 0x70) = 0;
    *(undefined4 *)(lVar2 + 0x74) = 0;
  }
  return;
}



// FUNCTION 145225c20 FUN_145225c20 body=881 status=ok
// SIG undefined FUN_145225c20(void)

void FUN_145225c20(longlong param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int *piVar17;
  uint uVar18;
  longlong lVar20;
  ulonglong uVar19;
  
  lVar3 = *(longlong *)(param_1 + 0x208);
  if (*(char *)(lVar3 + 0x70) == '\0') {
    iVar6 = (**(code **)(*(longlong *)(param_1 + 0x210) + 0x20))
                      (param_1,*(undefined8 *)(lVar3 + 0x78 + (longlong)*(int *)(lVar3 + 0x88) * 8))
    ;
    if (iVar6 == 0) {
      return;
    }
    *(int *)(lVar3 + 0x94) = *(int *)(lVar3 + 0x94) + 1;
    *(undefined1 *)(lVar3 + 0x70) = 1;
  }
  iVar6 = *(int *)(lVar3 + 0x8c);
  uVar13 = 0;
  if (iVar6 != 0) {
    if (iVar6 == 1) goto LAB_145225dca;
    if (iVar6 != 2) {
      return;
    }
    (**(code **)(*(longlong *)(param_1 + 0x218) + 0x10))
              (param_1,*(undefined8 *)(lVar3 + 0x78 + (longlong)*(int *)(lVar3 + 0x88) * 8),
               lVar3 + 0x74,*(undefined4 *)(lVar3 + 0x90),param_2,param_3,param_4);
    if (*(uint *)(lVar3 + 0x74) < *(uint *)(lVar3 + 0x90)) {
      return;
    }
    *(undefined4 *)(lVar3 + 0x8c) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(lVar3 + 0x74) = 0;
  *(int *)(lVar3 + 0x90) = *(int *)(param_1 + 0x180) + -1;
  if (*(int *)(lVar3 + 0x94) == *(int *)(param_1 + 0x184)) {
    lVar4 = *(longlong *)(param_1 + 0x208);
    if (0 < *(int *)(param_1 + 0x38)) {
      piVar17 = (int *)(*(longlong *)(param_1 + 0x120) + 0xc);
      uVar15 = uVar13;
      uVar19 = uVar13;
      do {
        uVar9 = piVar17[6] * *piVar17;
        iVar6 = (int)uVar9 / *(int *)(param_1 + 0x180);
        uVar18 = (uint)piVar17[8] % uVar9;
        if ((uint)piVar17[8] % uVar9 == 0) {
          uVar18 = uVar9;
        }
        if (uVar15 == 0) {
          *(int *)(lVar4 + 0x90) = (int)(uVar18 - 1) / iVar6 + 1;
        }
        iVar6 = iVar6 * 2;
        lVar11 = (longlong)iVar6;
        if (0 < iVar6) {
          puVar8 = (undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(lVar4 + 0x78 + (longlong)*(int *)(lVar4 + 0x88) * 8) +
                     uVar15 * 8) + (longlong)(int)uVar18 * 8);
          puVar12 = puVar8 + -1;
          do {
            *puVar8 = *puVar12;
            puVar8 = puVar8 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        uVar18 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
        uVar15 = uVar15 + 1;
        piVar17 = piVar17 + 0x18;
      } while ((int)uVar18 < *(int *)(param_1 + 0x38));
    }
  }
  *(undefined4 *)(lVar3 + 0x8c) = 1;
LAB_145225dca:
  puVar2 = (uint *)(lVar3 + 0x74);
  (**(code **)(*(longlong *)(param_1 + 0x218) + 0x10))
            (param_1,*(undefined8 *)(lVar3 + 0x78 + (longlong)*(int *)(lVar3 + 0x88) * 8),puVar2,
             *(undefined4 *)(lVar3 + 0x90),param_2,param_3,param_4);
  if (*(uint *)(lVar3 + 0x90) <= *puVar2) {
    if (*(int *)(lVar3 + 0x94) == 1) {
      lVar4 = *(longlong *)(param_1 + 0x208);
      iVar6 = *(int *)(param_1 + 0x180);
      if (0 < *(int *)(param_1 + 0x38)) {
        piVar17 = (int *)(*(longlong *)(param_1 + 0x120) + 0xc);
        uVar15 = uVar13;
        do {
          lVar11 = *(longlong *)(uVar13 + *(longlong *)(lVar4 + 0x78));
          iVar7 = (piVar17[6] * *piVar17) / *(int *)(param_1 + 0x180);
          lVar20 = (longlong)iVar7;
          lVar5 = *(longlong *)(uVar13 + *(longlong *)(lVar4 + 0x80));
          if (0 < iVar7) {
            iVar1 = iVar6 + 2;
            iVar14 = iVar1 * iVar7;
            puVar12 = (undefined8 *)(lVar5 + lVar20 * -8);
            lVar16 = lVar20;
            do {
              lVar10 = (longlong)(iVar14 + ((iVar6 - iVar1) + 1) * iVar7);
              puVar8 = puVar12 + 1;
              *(undefined8 *)((lVar11 - lVar5) + -8 + (longlong)puVar8) =
                   *(undefined8 *)(lVar11 + lVar10 * 8);
              *puVar12 = *(undefined8 *)(lVar5 + lVar10 * 8);
              lVar10 = (longlong)iVar14;
              iVar14 = iVar14 + 1;
              *(undefined8 *)(lVar10 * 8 + lVar11) =
                   *(undefined8 *)((lVar20 * 8 - lVar5) + lVar11 + -8 + (longlong)puVar8);
              *(undefined8 *)(lVar10 * 8 + lVar5) = puVar12[lVar20];
              lVar16 = lVar16 + -1;
              puVar12 = puVar8;
            } while (lVar16 != 0);
          }
          uVar18 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar18;
          uVar13 = uVar13 + 8;
          piVar17 = piVar17 + 0x18;
        } while ((int)uVar18 < *(int *)(param_1 + 0x38));
      }
    }
    *(uint *)(lVar3 + 0x88) = *(uint *)(lVar3 + 0x88) ^ 1;
    *(undefined1 *)(lVar3 + 0x70) = 0;
    *puVar2 = *(int *)(param_1 + 0x180) + 1;
    iVar6 = *(int *)(param_1 + 0x180);
    *(undefined4 *)(lVar3 + 0x8c) = 2;
    *(int *)(lVar3 + 0x90) = iVar6 + 2;
  }
  return;
}



// FUNCTION 145225fa0 FUN_145225fa0 body=42 status=ok
// SIG undefined FUN_145225fa0(void)

void FUN_145225fa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(*(longlong *)(param_1 + 0x218) + 0x10))(param_1,0,0,0,param_2,param_3,param_4);
  return;
}



// FUNCTION 145225fd0 FUN_145225fd0 body=555 status=ok
// SIG undefined FUN_145225fd0(void)

void FUN_145225fd0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  
  lVar2 = param_1[0x41];
  if (param_2 == 0) {
    if (*(char *)(param_1[0x48] + 0x20) == '\0') {
      *(undefined1 *)(lVar2 + 0x70) = 0;
      *(code **)(lVar2 + 0x10) = FUN_145225b70;
      *(undefined4 *)(lVar2 + 0x74) = 0;
      return;
    }
    *(code **)(lVar2 + 0x10) = FUN_145225c20;
    lVar3 = param_1[0x41];
    iVar1 = (int)param_1[0x30];
    iVar13 = 0;
    if (0 < (int)param_1[7]) {
      piVar16 = (int *)(param_1[0x24] + 0xc);
      lVar18 = 0;
      do {
        lVar4 = *(longlong *)(lVar18 + 0x20 + lVar3);
        puVar5 = *(undefined8 **)(lVar18 + *(longlong *)(lVar3 + 0x78));
        iVar7 = (piVar16[6] * *piVar16) / (int)param_1[0x30];
        lVar17 = (longlong)iVar7;
        uVar11 = (iVar1 + 2) * iVar7;
        uVar12 = (ulonglong)uVar11;
        puVar9 = *(undefined8 **)(lVar18 + *(longlong *)(lVar3 + 0x80));
        if (0 < (int)uVar11) {
          puVar10 = puVar9;
          do {
            uVar6 = *(undefined8 *)((lVar4 - (longlong)puVar9) + (longlong)puVar10);
            *puVar10 = uVar6;
            *(undefined8 *)(((longlong)puVar5 - (longlong)puVar9) + (longlong)puVar10) = uVar6;
            puVar10 = puVar10 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        lVar15 = (longlong)(iVar7 * 2);
        if (0 < iVar7 * 2) {
          iVar14 = (iVar1 + -2) * iVar7;
          puVar10 = puVar9 + iVar7 * iVar1;
          do {
            lVar8 = (longlong)iVar14;
            iVar14 = iVar14 + 1;
            puVar9[lVar8] = *(undefined8 *)((longlong)puVar10 + (lVar4 - (longlong)puVar9));
            *puVar10 = *(undefined8 *)(lVar8 * 8 + lVar4);
            lVar15 = lVar15 + -1;
            puVar10 = puVar10 + 1;
          } while (lVar15 != 0);
        }
        if (0 < iVar7) {
          puVar9 = puVar5 + -lVar17;
          do {
            *puVar9 = *puVar5;
            puVar9 = puVar9 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        iVar13 = iVar13 + 1;
        lVar18 = lVar18 + 8;
        piVar16 = piVar16 + 0x18;
      } while (iVar13 < (int)param_1[7]);
    }
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined4 *)(lVar2 + 0x94) = 0;
    *(undefined1 *)(lVar2 + 0x70) = 0;
    *(undefined4 *)(lVar2 + 0x74) = 0;
    return;
  }
  if (param_2 == 2) {
    *(code **)(lVar2 + 0x10) = FUN_145225fa0;
    return;
  }
  *(undefined4 *)(*param_1 + 0x28) = 4;
                    /* WARNING: Could not recover jumptable at 0x000145226004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



// FUNCTION 145226200 FUN_145226200 body=517 status=ok
// SIG undefined FUN_145226200(void)

void FUN_145226200(longlong *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  code *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  
  if ((int)param_1[0x23] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
    (**(code **)*param_1)(param_1);
  }
  puVar4 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x108);
  param_1[0x42] = (longlong)puVar4;
  puVar11 = (undefined8 *)0x0;
  *puVar4 = &LAB_145227be0;
  puVar4[2] = FUN_145227c30;
  puVar4[0x20] = 0;
  if (param_2 == '\0') {
    lVar7 = (**(code **)(param_1[1] + 8))(param_1,1,0x500);
    puVar4[0xb] = lVar7;
    puVar4[0xc] = lVar7 + 0x80;
    puVar4[0xd] = lVar7 + 0x100;
    puVar4[0xe] = lVar7 + 0x180;
    puVar4[0xf] = lVar7 + 0x200;
    puVar4[0x10] = lVar7 + 0x280;
    puVar4[0x11] = lVar7 + 0x300;
    puVar4[0x12] = lVar7 + 0x380;
    puVar4[0x13] = lVar7 + 0x400;
    pcVar8 = (code *)&LAB_145227cb0;
    puVar4[0x14] = lVar7 + 0x480;
    pcVar6 = FUN_145226410;
  }
  else {
    if (0 < (int)param_1[7]) {
      puVar9 = (undefined4 *)(param_1[0x24] + 0x20);
      puVar12 = puVar4 + 0x16;
      do {
        iVar1 = puVar9[-5];
        iVar13 = iVar1;
        if ((char)param_1[0x25] != '\0') {
          iVar13 = iVar1 * 5;
        }
        lVar7 = param_1[1];
        uVar2 = FUN_144e92960(*puVar9,iVar1);
        uVar3 = FUN_144e92960(puVar9[-1],puVar9[-6]);
        uVar5 = (**(code **)(lVar7 + 0x28))(param_1,1,1,uVar3,uVar2,iVar13);
        *puVar12 = uVar5;
        uVar10 = (int)puVar11 + 1;
        puVar11 = (undefined8 *)(ulonglong)uVar10;
        puVar12 = puVar12 + 1;
        puVar9 = puVar9 + 0x18;
      } while ((int)uVar10 < (int)param_1[7]);
    }
    puVar11 = puVar4 + 0x16;
    pcVar6 = FUN_145226740;
    pcVar8 = FUN_145227cc0;
  }
  puVar4[1] = pcVar8;
  puVar4[3] = pcVar6;
  puVar4[8] = puVar11;
  uVar5 = (**(code **)param_1[1])(param_1,1,0x80);
  puVar4[0x15] = uVar5;
  return;
}



// FUNCTION 145226410 FUN_145226410 body=814 status=ok
// SIG undefined FUN_145226410(void)

undefined8 FUN_145226410(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint local_res8;
  int local_res20;
  int local_80;
  
  lVar3 = *(longlong *)(param_1 + 0x210);
  uVar9 = *(uint *)(param_1 + 0x184);
  uVar18 = *(int *)(param_1 + 0x1b8) - 1;
  iVar13 = *(int *)(lVar3 + 0x4c);
  if (iVar13 < *(int *)(lVar3 + 0x50)) {
    local_res8 = *(uint *)(lVar3 + 0x48);
    do {
      if (local_res8 <= uVar18) {
        do {
          FUN_144e92a10(*(undefined8 *)(lVar3 + 0x58),(longlong)*(int *)(param_1 + 0x1c0) << 7);
          lVar7 = *(longlong *)(param_1 + 0x230);
          if (*(char *)(lVar7 + 0x20) == '\0') {
            *(undefined4 *)(*(longlong *)(param_1 + 0x200) + 0x70) = *(undefined4 *)(param_1 + 0xa0)
            ;
            lVar7 = *(longlong *)(param_1 + 0x230);
          }
          cVar5 = (**(code **)(lVar7 + 8))(param_1,(undefined8 *)(lVar3 + 0x58));
          if (cVar5 == '\0') {
            *(int *)(lVar3 + 0x4c) = iVar13;
            *(uint *)(lVar3 + 0x48) = local_res8;
            return 0;
          }
          if ((*(uint *)(*(longlong *)(param_1 + 0x200) + 0x14) <= local_res8) &&
             (local_res8 <= *(uint *)(*(longlong *)(param_1 + 0x200) + 0x18))) {
            iVar17 = 0;
            local_80 = 0;
            if (0 < *(int *)(param_1 + 400)) {
              plVar16 = (longlong *)(param_1 + 0x198);
              do {
                lVar7 = *plVar16;
                if (*(char *)(lVar7 + 0x30) == '\0') {
                  iVar17 = iVar17 + *(int *)(lVar7 + 0x3c);
                }
                else {
                  lVar19 = (longlong)*(int *)(lVar7 + 4) * 8;
                  pcVar4 = *(code **)(*(longlong *)(param_1 + 0x238) + 8 + lVar19);
                  if (local_res8 < uVar18) {
                    iVar15 = *(int *)(lVar7 + 0x34);
                  }
                  else {
                    iVar15 = *(int *)(lVar7 + 0x44);
                  }
                  iVar10 = *(int *)(lVar7 + 0x24);
                  local_res20 = 0;
                  lVar19 = *(longlong *)(lVar19 + param_2) + (longlong)(iVar10 * iVar13) * 8;
                  iVar1 = *(int *)(*(longlong *)(param_1 + 0x200) + 0x14);
                  iVar2 = *(int *)(lVar7 + 0x40);
                  if (0 < *(int *)(lVar7 + 0x38)) {
                    do {
                      if (((*(uint *)(param_1 + 0xa0) < uVar9 - 1) ||
                          (local_res20 + iVar13 < *(int *)(lVar7 + 0x48))) &&
                         (lVar11 = (longlong)iVar15, 0 < iVar15)) {
                        puVar14 = (undefined8 *)(lVar3 + 0x58 + (longlong)iVar17 * 8);
                        iVar12 = (local_res8 - iVar1) * iVar2;
                        do {
                          (*pcVar4)(param_1,lVar7,*puVar14,lVar19,iVar12);
                          iVar10 = *(int *)(lVar7 + 0x24);
                          puVar14 = puVar14 + 1;
                          iVar12 = iVar12 + iVar10;
                          lVar11 = lVar11 + -1;
                        } while (lVar11 != 0);
                      }
                      iVar17 = iVar17 + *(int *)(lVar7 + 0x34);
                      local_res20 = local_res20 + 1;
                      lVar19 = lVar19 + (longlong)iVar10 * 8;
                    } while (local_res20 < *(int *)(lVar7 + 0x38));
                  }
                }
                local_80 = local_80 + 1;
                plVar16 = plVar16 + 1;
              } while (local_80 < *(int *)(param_1 + 400));
            }
          }
          local_res8 = local_res8 + 1;
        } while (local_res8 <= uVar18);
      }
      iVar13 = iVar13 + 1;
      *(undefined4 *)(lVar3 + 0x48) = 0;
      local_res8 = 0;
    } while (iVar13 < *(int *)(lVar3 + 0x50));
    uVar9 = *(uint *)(param_1 + 0x184);
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  uVar18 = *(int *)(param_1 + 0xa0) + 1;
  *(uint *)(param_1 + 0xa0) = uVar18;
  if (uVar18 < uVar9) {
    lVar3 = *(longlong *)(param_1 + 0x210);
    if (*(int *)(param_1 + 400) < 2) {
      if (uVar18 < uVar9 - 1) {
        uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x198) + 0xc);
      }
      else {
        uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x198) + 0x48);
      }
    }
    else {
      uVar6 = 1;
    }
    *(undefined4 *)(lVar3 + 0x50) = uVar6;
    uVar8 = 3;
    *(undefined8 *)(lVar3 + 0x48) = 0;
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x220) + 0x18))(param_1);
    uVar8 = 4;
  }
  return uVar8;
}



// FUNCTION 145226740 FUN_145226740 body=598 status=ok
// SIG undefined FUN_145226740(void)

ulonglong FUN_145226740(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int local_res18;
  longlong local_res20;
  uint in_stack_ffffffffffffff78;
  
  iVar1 = *(int *)(param_1 + 0x184);
  lVar2 = *(longlong *)(param_1 + 0x210);
  while ((*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0xa4) ||
         ((*(int *)(param_1 + 0x9c) == *(int *)(param_1 + 0xa4) &&
          (*(uint *)(param_1 + 0xa0) <= *(uint *)(param_1 + 0xa8)))))) {
    uVar4 = (*(code *)**(undefined8 **)(param_1 + 0x220))(param_1);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  lVar13 = *(longlong *)(param_1 + 0x120);
  local_res18 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar12 = 0x44;
    plVar10 = param_2;
    do {
      if (*(char *)(lVar13 + 0x30) != '\0') {
        in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 & 0xffffff00;
        lVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))
                          (param_1,*(undefined8 *)
                                    ((lVar2 - (longlong)param_2) + 0xb0 + (longlong)plVar10),
                           *(int *)(lVar13 + 0xc) * *(int *)(param_1 + 0xa8),*(int *)(lVar13 + 0xc),
                           in_stack_ffffffffffffff78);
        if (*(uint *)(param_1 + 0xa8) < iVar1 - 1U) {
          uVar7 = *(uint *)(lVar13 + 0xc);
        }
        else {
          uVar7 = *(uint *)(lVar13 + 0x20) % *(uint *)(lVar13 + 0xc);
          if (uVar7 == 0) {
            uVar7 = *(uint *)(lVar13 + 0xc);
          }
        }
        local_res20 = 0;
        lVar14 = *plVar10;
        pcVar3 = *(code **)((*(longlong *)(param_1 + 0x238) - (longlong)param_2) + 8 +
                           (longlong)plVar10);
        if (0 < (int)uVar7) {
          iVar6 = *(int *)(lVar13 + 0x24);
          do {
            uVar8 = 0;
            uVar9 = *(uint *)(lVar12 + -0x28 + *(longlong *)(param_1 + 0x200));
            lVar11 = (ulonglong)uVar9 * 0x80 + *(longlong *)(lVar5 + local_res20 * 8);
            if (uVar9 <= *(uint *)(lVar12 + *(longlong *)(param_1 + 0x200))) {
              do {
                in_stack_ffffffffffffff78 = uVar8;
                (*pcVar3)(param_1,lVar13,lVar11,lVar14,uVar8);
                lVar11 = lVar11 + 0x80;
                iVar6 = *(int *)(lVar13 + 0x24);
                uVar9 = uVar9 + 1;
                uVar8 = uVar8 + iVar6;
              } while (uVar9 <= *(uint *)(lVar12 + *(longlong *)(param_1 + 0x200)));
            }
            local_res20 = local_res20 + 1;
            lVar14 = lVar14 + (longlong)iVar6 * 8;
          } while (local_res20 < (int)uVar7);
        }
      }
      local_res18 = local_res18 + 1;
      plVar10 = plVar10 + 1;
      lVar12 = lVar12 + 4;
      lVar13 = lVar13 + 0x60;
    } while (local_res18 < *(int *)(param_1 + 0x38));
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  return (ulonglong)(4 - (*(uint *)(param_1 + 0xa8) < *(uint *)(param_1 + 0x184)));
}



// FUNCTION 1452269a0 FUN_1452269a0 body=787 status=ok
// SIG undefined FUN_1452269a0(void)

ulonglong FUN_1452269a0(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  short *in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  
  lVar7 = *(longlong *)(param_1 + 0x210);
  uVar4 = 0;
  if ((*(char *)(param_1 + 0x128) == '\0') || (*(longlong *)(param_1 + 0xb0) == 0)) {
LAB_145226c98:
    uVar4 = (ulonglong)in_RAX & 0xffffffffffffff00;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + 0x100);
    if (lVar3 == 0) {
      lVar3 = (*(code *)**(undefined8 **)(param_1 + 8))
                        (param_1,1,(longlong)(*(int *)(param_1 + 0x38) * 2) * 0x28);
      *(longlong *)(lVar7 + 0x100) = lVar3;
    }
    iVar5 = *(int *)(param_1 + 0x38);
    iVar8 = 0;
    if (0 < iVar5) {
      lVar7 = 0;
      puVar11 = (undefined4 *)(lVar3 + ((longlong)(iVar5 * 10) + 2) * 4);
      puVar10 = (undefined4 *)(lVar3 + 8);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x50);
      do {
        in_RAX = (short *)*puVar12;
        if ((((((in_RAX == (short *)0x0) || (*in_RAX == 0)) || (in_RAX[1] == 0)) ||
             ((in_RAX[8] == 0 || (in_RAX[0x10] == 0)))) ||
            ((in_RAX[9] == 0 || ((in_RAX[2] == 0 || (in_RAX[3] == 0)))))) ||
           ((in_RAX[10] == 0 || ((in_RAX[0x11] == 0 || (in_RAX[0x18] == 0)))))) goto LAB_145226c98;
        lVar3 = *(longlong *)(param_1 + 0xb0);
        lVar6 = (longlong)(iVar5 + iVar8) * 0x100 + lVar3;
        uVar1 = *(uint *)(lVar3 + lVar7);
        in_RAX = (short *)(ulonglong)uVar1;
        if ((int)uVar1 < 0) goto LAB_145226c98;
        puVar10[-2] = uVar1;
        if (*(int *)(param_1 + 0x9c) < 2) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(lVar6 + 4);
        }
        puVar11[-1] = uVar2;
        puVar10[-1] = *(undefined4 *)(lVar3 + 4 + lVar7);
        bVar9 = (byte)uVar4;
        if (*(int *)(lVar3 + 4 + lVar7) != 0) {
          bVar9 = 1;
        }
        if (*(int *)(param_1 + 0x9c) < 2) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(lVar6 + 8);
        }
        *puVar11 = uVar2;
        *puVar10 = *(undefined4 *)(lVar3 + 8 + lVar7);
        if (*(int *)(lVar3 + 8 + lVar7) != 0) {
          bVar9 = 1;
        }
        if (*(int *)(param_1 + 0x9c) < 2) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(lVar6 + 0xc);
        }
        puVar11[1] = uVar2;
        puVar10[1] = *(undefined4 *)(lVar3 + 0xc + lVar7);
        if (*(int *)(lVar3 + 0xc + lVar7) != 0) {
          bVar9 = 1;
        }
        if (*(int *)(param_1 + 0x9c) < 2) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(lVar6 + 0x10);
        }
        puVar11[2] = uVar2;
        puVar10[2] = *(undefined4 *)(lVar3 + 0x10 + lVar7);
        if (*(int *)(lVar3 + 0x10 + lVar7) != 0) {
          bVar9 = 1;
        }
        if (*(int *)(param_1 + 0x9c) < 2) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(lVar6 + 0x14);
        }
        puVar11[3] = uVar2;
        puVar10[3] = *(undefined4 *)(lVar3 + 0x14 + lVar7);
        if (*(int *)(lVar3 + 0x14 + lVar7) != 0) {
          bVar9 = 1;
        }
        if (*(int *)(param_1 + 0x9c) < 2) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(lVar6 + 0x18);
        }
        puVar11[4] = uVar2;
        puVar10[4] = *(undefined4 *)(lVar3 + 0x18 + lVar7);
        uVar4 = (ulonglong)bVar9;
        if (*(int *)(lVar3 + 0x18 + lVar7) != 0) {
          uVar4 = 1;
        }
        if (*(int *)(param_1 + 0x9c) < 2) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(lVar6 + 0x1c);
        }
        puVar11[5] = uVar2;
        puVar10[5] = *(undefined4 *)(lVar3 + 0x1c + lVar7);
        if (*(int *)(lVar3 + 0x1c + lVar7) != 0) {
          uVar4 = 1;
        }
        if (*(int *)(param_1 + 0x9c) < 2) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(lVar6 + 0x20);
        }
        puVar11[6] = uVar2;
        puVar10[6] = *(undefined4 *)(lVar3 + 0x20 + lVar7);
        if (*(int *)(lVar3 + 0x20 + lVar7) != 0) {
          uVar4 = 1;
        }
        if (*(int *)(param_1 + 0x9c) < 2) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(lVar6 + 0x24);
        }
        puVar11[7] = uVar2;
        puVar10[7] = *(undefined4 *)(lVar3 + 0x24 + lVar7);
        iVar5 = *(int *)(param_1 + 0x38);
        if (*(int *)(lVar3 + 0x24 + lVar7) != 0) {
          uVar4 = 1;
        }
        puVar10 = puVar10 + 10;
        puVar11 = puVar11 + 10;
        iVar8 = iVar8 + 1;
        lVar7 = lVar7 + 0x100;
        puVar12 = puVar12 + 0xc;
      } while (iVar8 < iVar5);
    }
  }
  return uVar4;
}



// FUNCTION 145226cc0 FUN_145226cc0 body=3864 status=ok
// SIG undefined FUN_145226cc0(void)

int FUN_145226cc0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  short *psVar7;
  undefined8 uVar8;
  ushort *puVar9;
  code *pcVar10;
  uint uVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  short *psVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  longlong lVar33;
  int iVar34;
  int local_res20;
  uint in_stack_fffffffffffffea8;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  longlong local_f0;
  uint local_e8;
  int local_e4;
  short *local_d0;
  short *local_c8;
  short *local_c0;
  short *local_b8;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  longlong local_70;
  ulonglong local_68;
  
  lVar6 = *(longlong *)(param_1 + 0x210);
  local_a4 = 0;
  iVar13 = *(int *)(param_1 + 0x9c);
  psVar7 = *(short **)(lVar6 + 0xa8);
  uVar22 = *(int *)(param_1 + 0x184) - 1;
  local_a0 = 0;
  local_a8 = 0;
  iVar21 = *(int *)(param_1 + 0xa4);
  local_ac = 0;
  if (iVar13 <= iVar21) {
    do {
      if (*(char *)((longlong)*(undefined8 **)(param_1 + 0x220) + 0x21) != '\0') break;
      if (iVar13 == iVar21) {
        iVar13 = 0;
        if (*(int *)(param_1 + 0x1ec) == 0) {
          iVar13 = 2;
        }
        if ((uint)(iVar13 + *(int *)(param_1 + 0xa8)) < *(uint *)(param_1 + 0xa0)) break;
      }
      iVar13 = (*(code *)**(undefined8 **)(param_1 + 0x220))(param_1);
      if (iVar13 == 0) {
        return 0;
      }
      iVar13 = *(int *)(param_1 + 0x9c);
      iVar21 = *(int *)(param_1 + 0xa4);
    } while (iVar13 <= iVar21);
  }
  lVar33 = *(longlong *)(param_1 + 0x120);
  local_e4 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    local_f0 = 0;
    do {
      if (*(char *)(lVar33 + 0x30) != '\0') {
        uVar31 = *(uint *)(param_1 + 0xa8);
        if (uVar31 + 1 < uVar22) {
          uVar19 = *(uint *)(lVar33 + 0xc);
          uVar23 = uVar19;
          uVar14 = uVar19 * 3;
        }
        else if (uVar31 < uVar22) {
          uVar19 = *(uint *)(lVar33 + 0xc);
          uVar23 = uVar19;
          uVar14 = uVar19 * 2;
        }
        else {
          uVar19 = *(uint *)(lVar33 + 0xc);
          uVar23 = *(uint *)(lVar33 + 0x20) % uVar19;
          uVar14 = uVar23;
          if (uVar23 == 0) {
            uVar23 = uVar19;
            uVar14 = uVar19;
          }
        }
        in_stack_fffffffffffffea8 = in_stack_fffffffffffffea8 & 0xffffff00;
        if (uVar31 < 2) {
          uVar8 = *(undefined8 *)(lVar6 + 0xb0 + local_f0 * 8);
          pcVar10 = *(code **)(*(longlong *)(param_1 + 8) + 0x40);
          if (uVar31 == 0) {
            lVar16 = (*pcVar10)(param_1,uVar8,0,uVar14,in_stack_fffffffffffffea8);
          }
          else {
            lVar16 = (*pcVar10)(param_1,uVar8,(uVar31 - 1) * uVar19,uVar14,in_stack_fffffffffffffea8
                               );
            lVar16 = lVar16 + (longlong)*(int *)(lVar33 + 0xc) * 8;
          }
        }
        else {
          lVar16 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))
                             (param_1,*(undefined8 *)(lVar6 + 0xb0 + local_f0 * 8),
                              (uVar31 - 2) * uVar19,uVar14 + uVar19 * 2);
          lVar16 = lVar16 + (longlong)(*(int *)(lVar33 + 0xc) * 2) * 8;
        }
        if (*(uint *)(*(longlong *)(param_1 + 0x200) + 0x70) < *(uint *)(param_1 + 0xa8)) {
          lVar26 = *(longlong *)(lVar6 + 0x100) +
                   (longlong)((*(int *)(param_1 + 0x38) + local_e4) * 10) * 4;
        }
        else {
          lVar26 = *(longlong *)(lVar6 + 0x100) + (longlong)(local_e4 * 10) * 4;
        }
        if ((((((*(int *)(lVar26 + 4) == -1) && (*(int *)(lVar26 + 8) == -1)) &&
              (*(int *)(lVar26 + 0xc) == -1)) &&
             ((*(int *)(lVar26 + 0x10) == -1 && (*(int *)(lVar26 + 0x14) == -1)))) &&
            ((*(int *)(lVar26 + 0x18) == -1 &&
             ((*(int *)(lVar26 + 0x1c) == -1 && (*(int *)(lVar26 + 0x20) == -1)))))) &&
           (*(int *)(lVar26 + 0x24) == -1)) {
          bVar18 = true;
        }
        else {
          bVar18 = false;
        }
        puVar9 = *(ushort **)(lVar33 + 0x50);
        uVar1 = puVar9[1];
        uVar2 = puVar9[8];
        uVar31 = (uint)*puVar9;
        uVar3 = puVar9[0x10];
        uVar4 = puVar9[2];
        uVar5 = puVar9[9];
        if (bVar18) {
          local_a0 = (uint)puVar9[3];
          local_a4 = (uint)puVar9[0x18];
          local_ac = (uint)puVar9[10];
          local_a8 = (uint)puVar9[0x11];
        }
        local_f4 = 0;
        pcVar10 = *(code **)(*(longlong *)(param_1 + 0x238) + 8 + local_f0 * 8);
        local_70 = *(longlong *)(param_2 + local_f0 * 8);
        local_68 = 0;
        if (0 < (int)uVar23) {
          uVar19 = *(uint *)(param_1 + 0xa8);
          lVar29 = *(longlong *)(param_1 + 0x200);
          uVar20 = uVar19;
          uVar14 = uVar19;
          do {
            uVar24 = *(uint *)(lVar29 + 0x1c + local_f0 * 4);
            lVar28 = (ulonglong)uVar24 * 0x80;
            psVar17 = (short *)(*(longlong *)(lVar16 + local_68 * 8) + lVar28);
            if ((local_68 != 0) || (local_d0 = psVar17, local_c0 = psVar17, uVar14 != 0)) {
              uVar11 = uVar14;
              if (local_68 != 0) {
                uVar11 = uVar20;
              }
              local_d0 = (short *)(*(longlong *)(lVar16 + -8 + local_68 * 8) + lVar28);
              if ((1 < local_68) || (uVar11 = uVar14, local_c0 = local_d0, 1 < uVar14)) {
                uVar14 = uVar11;
                local_c0 = (short *)(*(longlong *)(lVar16 + -0x10 + local_68 * 8) + lVar28);
              }
            }
            uVar20 = uVar14;
            if ((local_f4 < (int)(uVar23 - 1)) || (local_c8 = psVar17, uVar20 < uVar22)) {
              local_c8 = (short *)(*(longlong *)(lVar16 + 8 + local_68 * 8) + lVar28);
            }
            if ((local_f4 < (int)(uVar23 - 2)) || (local_b8 = local_c8, uVar20 + 1 < uVar22)) {
              local_b8 = (short *)(lVar28 + *(longlong *)(lVar16 + 0x10 + local_68 * 8));
              uVar20 = uVar19;
            }
            local_144 = (int)*local_c0;
            local_128 = (int)*local_d0;
            local_11c = (int)*local_c8;
            local_138 = (int)*local_b8;
            local_res20 = (int)*psVar17;
            uVar14 = *(int *)(lVar33 + 0x1c) - 1;
            local_e8 = 0;
            iVar13 = local_128;
            iVar21 = local_11c;
            local_148 = local_11c;
            local_13c = local_res20;
            local_130 = local_144;
            local_12c = local_144;
            local_124 = local_res20;
            local_118 = local_138;
            local_114 = local_138;
            local_10c = local_144;
            local_108 = local_128;
            local_104 = local_res20;
            local_100 = local_11c;
            local_fc = local_138;
            local_f8 = local_128;
            if (*(uint *)(lVar29 + 0x44 + local_f0 * 4) < uVar24) {
              iVar27 = *(int *)(lVar33 + 0x24);
              uVar14 = *(uint *)(param_1 + 0xa8);
            }
            else {
              do {
                iVar30 = iVar21;
                iVar34 = iVar13;
                local_120 = local_104;
                FUN_144e929f0(psVar17,psVar7,1);
                iVar25 = local_128;
                iVar32 = local_11c;
                local_140 = local_12c;
                local_134 = local_114;
                if ((uVar24 == *(uint *)(*(longlong *)(param_1 + 0x200) + 0x1c + local_f0 * 4)) &&
                   (uVar24 < uVar14)) {
                  local_140 = (int)local_c0[0x40];
                  local_104 = (int)psVar17[0x40];
                  local_134 = (int)local_b8[0x40];
                  iVar25 = (int)local_d0[0x40];
                  iVar32 = (int)local_c8[0x40];
                }
                uVar24 = uVar24 + 1;
                if (uVar24 < uVar14) {
                  local_128 = (int)local_d0[0x80];
                  local_12c = (int)local_c0[0x80];
                  local_120 = (int)psVar17[0x80];
                  local_114 = (int)local_b8[0x80];
                  local_11c = (int)local_c8[0x80];
                }
                iVar13 = *(int *)(lVar26 + 4);
                if ((iVar13 != 0) && (psVar7[1] == 0)) {
                  if (bVar18) {
                    iVar21 = (((((((((local_11c - local_100) - local_124) - local_108) + local_120 +
                                  local_128) * 3 + (((iVar30 - iVar32) - iVar25) + iVar34) * 0xd +
                                 (local_res20 - local_104) * 0x26) - local_118) - local_fc) -
                              local_130) - local_10c) + local_114 + local_134 + local_12c +
                             local_140;
                  }
                  else {
                    iVar21 = (local_120 - local_124) * 7 + (local_res20 - local_104) * 0x32;
                  }
                  iVar21 = iVar21 * uVar31;
                  iVar15 = (uint)uVar1 * 0x80;
                  iVar27 = (uint)uVar1 << 8;
                  if (iVar21 < 0) {
                    iVar27 = (iVar15 - iVar21) / iVar27;
                    if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= iVar27)) {
                      iVar27 = iVar13 + -1;
                    }
                    sVar12 = -(short)iVar27;
                  }
                  else {
                    lVar29 = (longlong)(iVar15 + iVar21) / (longlong)iVar27;
                    sVar12 = (short)lVar29;
                    if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= (int)lVar29)
                       ) {
                      sVar12 = (short)iVar13 + -1;
                    }
                  }
                  psVar7[1] = sVar12;
                }
                iVar13 = *(int *)(lVar26 + 8);
                if ((iVar13 != 0) && (psVar7[8] == 0)) {
                  if (bVar18) {
                    iVar21 = (((((((((local_134 - local_140) - local_144) - local_130) + local_138 +
                                  local_118) * 3 + (((iVar25 - iVar32) - iVar30) + iVar34) * 0xd +
                                 (local_f8 - local_148) * 0x26) - local_128) - local_108) -
                              local_12c) - local_10c) + local_114 + local_fc + local_11c + local_100
                    ;
                  }
                  else {
                    iVar21 = (local_138 - local_144) * 7 + (local_f8 - local_148) * 0x32;
                  }
                  iVar21 = iVar21 * uVar31;
                  iVar15 = (uint)uVar2 * 0x80;
                  iVar27 = (uint)uVar2 << 8;
                  if (iVar21 < 0) {
                    iVar27 = (iVar15 - iVar21) / iVar27;
                    if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= iVar27)) {
                      iVar27 = iVar13 + -1;
                    }
                    sVar12 = -(short)iVar27;
                  }
                  else {
                    lVar29 = (longlong)(iVar15 + iVar21) / (longlong)iVar27;
                    sVar12 = (short)lVar29;
                    if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= (int)lVar29)
                       ) {
                      sVar12 = (short)iVar13 + -1;
                    }
                  }
                  psVar7[8] = sVar12;
                }
                iVar13 = *(int *)(lVar26 + 0xc);
                if ((iVar13 != 0) && (psVar7[0x10] == 0)) {
                  if (bVar18) {
                    iVar21 = (local_148 + local_13c * -2 + local_f8) * 7 +
                             local_138 +
                             (iVar32 + iVar30 + iVar25 + iVar34) * 2 +
                             (local_res20 + local_104) * -5 + local_144;
                  }
                  else {
                    iVar21 = (((local_148 + local_f8) * 0xd + local_13c * -0x18) - local_138) -
                             local_144;
                  }
                  iVar21 = iVar21 * uVar31;
                  iVar15 = (uint)uVar3 * 0x80;
                  iVar27 = (uint)uVar3 << 8;
                  if (iVar21 < 0) {
                    iVar27 = (iVar15 - iVar21) / iVar27;
                    if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= iVar27)) {
                      iVar27 = iVar13 + -1;
                    }
                    sVar12 = -(short)iVar27;
                  }
                  else {
                    lVar29 = (longlong)(iVar15 + iVar21) / (longlong)iVar27;
                    sVar12 = (short)lVar29;
                    if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= (int)lVar29)
                       ) {
                      sVar12 = (short)iVar13 + -1;
                    }
                  }
                  psVar7[0x10] = sVar12;
                }
                iVar13 = *(int *)(lVar26 + 0x10);
                if ((iVar13 != 0) && (psVar7[9] == 0)) {
                  iVar21 = ((iVar32 - iVar30) - iVar25) + iVar34;
                  if (bVar18) {
                    iVar21 = ((iVar21 * 9 - local_114) - local_10c) + local_fc + local_12c;
                  }
                  else {
                    iVar21 = ((((iVar21 * 10 - local_134) - local_11c) - local_108) - local_130) +
                             local_118 + local_100 + local_128 + local_140;
                  }
                  iVar21 = iVar21 * uVar31;
                  iVar15 = (uint)uVar5 * 0x80;
                  iVar27 = (uint)uVar5 << 8;
                  if (iVar21 < 0) {
                    iVar27 = (iVar15 - iVar21) / iVar27;
                    if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= iVar27)) {
                      iVar27 = iVar13 + -1;
                    }
                    sVar12 = -(short)iVar27;
                  }
                  else {
                    lVar29 = (longlong)(iVar21 + iVar15) / (longlong)iVar27;
                    sVar12 = (short)lVar29;
                    if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= (int)lVar29)
                       ) {
                      sVar12 = (short)iVar13 + -1;
                    }
                  }
                  psVar7[9] = sVar12;
                }
                iVar13 = *(int *)(lVar26 + 0x14);
                if ((iVar13 != 0) && (psVar7[2] == 0)) {
                  if (bVar18) {
                    iVar21 = (local_104 + local_13c * -2 + local_res20) * 7 +
                             local_120 +
                             (iVar32 + iVar30 + iVar25 + iVar34) * 2 + (local_148 + local_f8) * -5 +
                             local_124;
                  }
                  else {
                    iVar21 = (((local_res20 + local_104) * 0xd + local_13c * -0x18) - local_120) -
                             local_124;
                  }
                  iVar21 = iVar21 * uVar31;
                  iVar15 = (uint)uVar4 * 0x80;
                  iVar27 = (uint)uVar4 << 8;
                  if (iVar21 < 0) {
                    iVar27 = (iVar15 - iVar21) / iVar27;
                    if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= iVar27)) {
                      iVar27 = iVar13 + -1;
                    }
                    sVar12 = -(short)iVar27;
                  }
                  else {
                    lVar29 = (longlong)(iVar15 + iVar21) / (longlong)iVar27;
                    sVar12 = (short)lVar29;
                    if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= (int)lVar29)
                       ) {
                      sVar12 = (short)iVar13 + -1;
                    }
                  }
                  psVar7[2] = sVar12;
                }
                if (bVar18) {
                  iVar13 = *(int *)(lVar26 + 0x18);
                  if ((iVar13 != 0) && (psVar7[3] == 0)) {
                    iVar21 = ((((local_res20 - local_104) * 2 - iVar32) - iVar25) + iVar30 + iVar34)
                             * uVar31;
                    if (iVar21 < 0) {
                      iVar21 = (int)(local_a0 * 0x80 - iVar21) / (int)(local_a0 << 8);
                      if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= iVar21)) {
                        iVar21 = iVar13 + -1;
                      }
                      sVar12 = -(short)iVar21;
                    }
                    else {
                      lVar29 = (longlong)(int)(iVar21 + local_a0 * 0x80) /
                               (longlong)(int)(local_a0 << 8);
                      sVar12 = (short)lVar29;
                      if ((0 < iVar13) &&
                         (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= (int)lVar29)) {
                        sVar12 = (short)iVar13 + -1;
                      }
                    }
                    psVar7[3] = sVar12;
                  }
                  iVar13 = *(int *)(lVar26 + 0x1c);
                  if ((iVar13 != 0) && (psVar7[10] == 0)) {
                    iVar21 = ((((local_148 - local_f8) * 3 - iVar32) - iVar30) + iVar25 + iVar34) *
                             uVar31;
                    if (iVar21 < 0) {
                      iVar21 = (int)(local_ac * 0x80 - iVar21) / (int)(local_ac << 8);
                      if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= iVar21)) {
                        iVar21 = iVar13 + -1;
                      }
                      sVar12 = -(short)iVar21;
                    }
                    else {
                      lVar29 = (longlong)(int)(local_ac * 0x80 + iVar21) /
                               (longlong)(int)(local_ac << 8);
                      sVar12 = (short)lVar29;
                      if ((0 < iVar13) &&
                         (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= (int)lVar29)) {
                        sVar12 = (short)iVar13 + -1;
                      }
                    }
                    psVar7[10] = sVar12;
                  }
                  iVar13 = *(int *)(lVar26 + 0x20);
                  if ((iVar13 != 0) && (psVar7[0x11] == 0)) {
                    iVar21 = ((((local_104 - local_res20) * 3 - iVar32) - iVar25) + iVar30 + iVar34)
                             * uVar31;
                    if (iVar21 < 0) {
                      iVar21 = (int)(local_a8 * 0x80 - iVar21) / (int)(local_a8 << 8);
                      if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= iVar21)) {
                        iVar21 = iVar13 + -1;
                      }
                      sVar12 = -(short)iVar21;
                    }
                    else {
                      lVar29 = (longlong)(int)(local_a8 * 0x80 + iVar21) /
                               (longlong)(int)(local_a8 << 8);
                      sVar12 = (short)lVar29;
                      if ((0 < iVar13) &&
                         (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= (int)lVar29)) {
                        sVar12 = (short)iVar13 + -1;
                      }
                    }
                    psVar7[0x11] = sVar12;
                  }
                  iVar13 = *(int *)(lVar26 + 0x24);
                  if ((iVar13 != 0) && (psVar7[0x18] == 0)) {
                    iVar21 = ((((local_f8 - local_148) * 2 - iVar32) - iVar30) + iVar25 + iVar34) *
                             uVar31;
                    if (iVar21 < 0) {
                      iVar21 = (int)(local_a4 * 0x80 - iVar21) / (int)(local_a4 << 8);
                      if ((0 < iVar13) && (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= iVar21)) {
                        iVar21 = iVar13 + -1;
                      }
                      sVar12 = -(short)iVar21;
                    }
                    else {
                      lVar29 = (longlong)(int)(iVar21 + local_a4 * 0x80) /
                               (longlong)(int)(local_a4 << 8);
                      sVar12 = (short)lVar29;
                      if ((0 < iVar13) &&
                         (iVar13 = 1 << ((byte)iVar13 & 0x1f), iVar13 <= (int)lVar29)) {
                        sVar12 = (short)iVar13 + -1;
                      }
                    }
                    psVar7[0x18] = sVar12;
                  }
                  iVar21 = (((((((((((((((local_148 + local_104 + local_res20 + local_f8) * 7 -
                                        local_134) - local_118) - local_11c) - local_100) -
                                    local_128) - local_108) - local_140) - local_130) + iVar32 +
                                 iVar30 + iVar25 + iVar34) * 3 +
                               ((((local_13c * 0x13 - local_138) - local_120) - local_124) -
                               local_144) * 4) - local_114) - local_fc) - local_12c) - local_10c) *
                           uVar31;
                  iVar13 = iVar21 * 2;
                  if (iVar13 < 0) {
                    sVar12 = -(short)((int)(uVar31 * 0x80 + iVar21 * -2) / (int)(uVar31 << 8));
                  }
                  else {
                    sVar12 = (short)((int)(uVar31 * 0x80 + iVar13) / (int)(uVar31 << 8));
                  }
                  *psVar7 = sVar12;
                }
                in_stack_fffffffffffffea8 = local_e8;
                (*pcVar10)(param_1,lVar33,psVar7,local_70,local_e8);
                local_d0 = local_d0 + 0x40;
                psVar17 = psVar17 + 0x40;
                local_c8 = local_c8 + 0x40;
                lVar29 = *(longlong *)(param_1 + 0x200);
                local_c0 = local_c0 + 0x40;
                local_b8 = local_b8 + 0x40;
                local_10c = local_130;
                local_130 = local_144;
                local_144 = local_140;
                local_124 = local_res20;
                local_res20 = local_13c;
                local_13c = local_104;
                local_104 = local_120;
                local_fc = local_118;
                local_118 = local_138;
                local_138 = local_134;
                iVar27 = *(int *)(lVar33 + 0x24);
                local_e8 = local_e8 + iVar27;
                iVar13 = local_f8;
                iVar21 = local_148;
                local_148 = iVar32;
                local_108 = iVar34;
                local_100 = iVar30;
                local_f8 = iVar25;
              } while (uVar24 <= *(uint *)(lVar29 + 0x44 + local_f0 * 4));
              uVar19 = *(uint *)(param_1 + 0xa8);
              uVar20 = uVar19;
              uVar14 = uVar19;
            }
            local_f4 = local_f4 + 1;
            local_68 = local_68 + 1;
            local_70 = local_70 + (longlong)iVar27 * 8;
          } while ((longlong)local_68 < (longlong)(int)uVar23);
        }
      }
      local_e4 = local_e4 + 1;
      local_f0 = local_f0 + 1;
      lVar33 = lVar33 + 0x60;
    } while (local_e4 < *(int *)(param_1 + 0x38));
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  return 4 - (uint)(*(uint *)(param_1 + 0xa8) < *(uint *)(param_1 + 0x184));
}



// FUNCTION 145227c30 FUN_145227c30 body=127 status=ok
// SIG undefined FUN_145227c30(void)

void FUN_145227c30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x210);
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    cVar2 = FUN_1452269a0();
    if (cVar2 != '\0') {
      *(code **)(lVar1 + 0x18) = FUN_145226cc0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      return;
    }
  }
  *(code **)(lVar1 + 0x18) = FUN_145226740;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}


