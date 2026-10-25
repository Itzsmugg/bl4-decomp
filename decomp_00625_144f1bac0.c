// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144f1bac0 FUN_144f1bac0 body=102 status=ok
// SIG undefined FUN_144f1bac0(void)

void FUN_144f1bac0(longlong param_1,undefined8 param_2)

{
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0xe8) == 0)) {
    FUN_144f1ac70(param_2);
    if (param_1 == 0) {
      return;
    }
  }
  else {
    FUN_144bbeca0(param_1,3,2);
    FUN_144f1ac70(param_2);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_144bbece0(param_1,3);
  }
  return;
}



// FUNCTION 144f1bb30 FUN_144f1bb30 body=1291 status=ok
// SIG undefined FUN_144f1bb30(void)

void FUN_144f1bb30(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  char *pcVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auStack_1f8 [32];
  ulong local_1d8;
  char *local_1d0;
  char *local_1c8;
  char local_1b8;
  ulong local_1b4;
  longlong *local_1b0;
  char *local_1a8;
  ulonglong local_1a0;
  char *local_198;
  undefined1 local_188 [64];
  undefined1 local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  plVar19 = *(longlong **)(param_1 + 0x1280);
  *(undefined1 *)(param_1 + 0x13d6) = 0;
  do {
    local_1b0 = plVar19;
    if (plVar19 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1280) = 0;
LAB_144f1bfe2:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1f8);
    }
    pcVar15 = (char *)*plVar19;
    if (pcVar15 != (char *)0x0) {
      local_1b8 = *pcVar15;
      if (local_1b8 != '-') {
        lVar7 = 0;
        if (local_1b8 == '+') {
          pcVar15 = pcVar15 + 1;
        }
        pcVar6 = strchr(pcVar15,0x3a);
        lVar17 = lVar7;
        if (pcVar6 != (char *)0x0) {
          uVar11 = (longlong)pcVar6 - (longlong)pcVar15;
          local_1a0 = uVar11;
          uVar3 = strtoul(pcVar6 + 1,&local_1a8,10);
          local_1b4 = uVar3;
          if (((uVar3 < 0x10000) && (local_1a8 != pcVar6 + 1)) && (lVar17 = 0, *local_1a8 == ':')) {
            local_198 = local_1a8 + 1;
            lVar14 = 0;
            lVar17 = lVar7;
            do {
              pcVar5 = local_1a8;
              pcVar6 = local_1a8 + 1;
              local_1a8 = strchr(pcVar6,0x2c);
              if (local_1a8 == (char *)0x0) {
                lVar7 = -1;
                do {
                  lVar7 = lVar7 + 1;
                } while (pcVar6[lVar7] != '\0');
                local_1a8 = pcVar6 + lVar7;
              }
              pcVar8 = local_1a8;
              if (*pcVar6 == '[') {
                if ((local_1a8 == pcVar6) || (pcVar8 = local_1a8 + -1, *pcVar8 != ']'))
                goto LAB_144f1c027;
                pcVar6 = pcVar5 + 2;
              }
              uVar9 = (longlong)pcVar8 - (longlong)pcVar6;
              lVar7 = lVar14;
              lVar18 = lVar17;
              if (uVar9 != 0) {
                if (0x3f < uVar9) goto LAB_144f1c027;
                memcpy(local_188,pcVar6,uVar9);
                local_188[uVar9] = 0;
                lVar7 = FUN_1452b2d60(local_188,uVar3);
                if (lVar7 == 0) {
                  FUN_144f14ad0(param_1,"Resolve address \'%s\' found illegal",local_188);
                  goto LAB_144f1c027;
                }
                lVar18 = lVar7;
                if (lVar14 != 0) {
                  *(longlong *)(lVar14 + 0x28) = lVar7;
                  lVar18 = lVar17;
                }
              }
              uVar9 = local_1a0;
              lVar14 = lVar7;
              lVar17 = lVar18;
            } while (*local_1a8 != '\0');
            if (lVar18 != 0) {
              puVar16 = local_148;
              if (uVar11 == 0) {
                uVar11 = 0xffffffffffffffff;
                do {
                  uVar11 = uVar11 + 1;
                } while (pcVar15[uVar11] != '\0');
              }
              uVar12 = 0;
              if (uVar11 < 0x100) {
                if (uVar11 != 0) goto LAB_144f1be3e;
              }
              else {
                uVar11 = 0xff;
                local_1b4 = uVar3;
LAB_144f1be3e:
                uVar10 = uVar11;
                do {
                  uVar2 = FUN_144f19640(puVar16[(longlong)pcVar15 - (longlong)local_148]);
                  *puVar16 = uVar2;
                  puVar16 = puVar16 + 1;
                  uVar10 = uVar10 - 1;
                  uVar12 = uVar11;
                } while (uVar10 != 0);
              }
              uVar3 = local_1b4;
              iVar4 = FUN_144f2b7e0(puVar16,7,&DAT_149c072d8,local_1b4);
              if (*(longlong *)(param_1 + 0xe8) != 0) {
                FUN_144bbeca0(param_1,3,2);
              }
              lVar7 = FUN_144f1ab60(*(undefined8 *)(param_1 + 200),local_148,
                                    uVar12 + 1 + (longlong)iVar4);
              uVar11 = local_1a0;
              if (lVar7 != 0) {
                local_1d8 = uVar3;
                FUN_144f14ad0(param_1,"RESOLVE %.*s:%d - old addresses discarded",
                              local_1a0 & 0xffffffff,pcVar15);
                FUN_144f1aab0(*(undefined8 *)(param_1 + 200),local_148,uVar12 + 1 + (longlong)iVar4)
                ;
              }
              local_1d8 = uVar3;
              lVar7 = FUN_144f1b810(param_1,lVar18,pcVar15,uVar9);
              cVar1 = local_1b8;
              if (lVar7 != 0) {
                if (local_1b8 != '+') {
                  *(undefined8 *)(lVar7 + 8) = 0;
                }
                *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
              }
              if (*(longlong *)(param_1 + 0xe8) != 0) {
                FUN_144bbece0(param_1,3);
              }
              if (lVar7 != 0) {
                local_1c8 = " (non-permanent)";
                if (cVar1 != '+') {
                  local_1c8 = "";
                }
                local_1d0 = local_198;
                local_1d8 = uVar3;
                FUN_144f14ad0(param_1,"Added %.*s:%d:%s to DNS cache%s",uVar11 & 0xffffffff,pcVar15)
                ;
                plVar19 = local_1b0;
                if ((uVar9 == 1) && (*pcVar15 == '*')) {
                  FUN_144f14ad0(param_1,"RESOLVE *:%d using wildcard",uVar3);
                  *(undefined1 *)(param_1 + 0x13d6) = 1;
                  plVar19 = local_1b0;
                }
                goto LAB_144f1bfc2;
              }
              FUN_1452b2970(lVar18);
              goto LAB_144f1bfe2;
            }
          }
        }
LAB_144f1c027:
        FUN_144f14b70(param_1,"Couldn\'t parse CURLOPT_RESOLVE entry \'%s\'",*local_1b0);
        FUN_1452b2970(lVar17);
        goto LAB_144f1bfe2;
      }
      pcVar6 = (char *)0x0;
      uVar3 = 0;
      pcVar5 = strchr(pcVar15 + 1,0x3a);
      pcVar15 = pcVar5;
      if (pcVar5 == (char *)0x0) {
LAB_144f1bbe5:
        lVar7 = *plVar19;
        if (pcVar15 != (char *)0x0) {
          puVar13 = local_148;
          puVar16 = (undefined1 *)(lVar7 + 1);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = (char *)0xffffffffffffffff;
            do {
              pcVar6 = pcVar6 + 1;
            } while (puVar16[(longlong)pcVar6] != '\0');
          }
          pcVar5 = (char *)0x0;
          pcVar15 = pcVar6;
          if (pcVar6 < (char *)0x100) goto joined_r0x000144f1bc3e;
          pcVar6 = (char *)0xff;
          pcVar15 = pcVar6;
          do {
            uVar2 = FUN_144f19640(*puVar16);
            *puVar13 = uVar2;
            puVar16 = puVar16 + 1;
            puVar13 = puVar13 + 1;
            pcVar6 = pcVar6 + -1;
            pcVar5 = pcVar15;
joined_r0x000144f1bc3e:
          } while (pcVar6 != (char *)0x0);
          iVar4 = FUN_144f2b7e0(puVar13,7,&DAT_149c072d8,uVar3);
          if (*(longlong *)(param_1 + 0xe8) != 0) {
            FUN_144bbeca0(param_1,3,2);
          }
          FUN_144f1aab0(*(undefined8 *)(param_1 + 200),local_148,pcVar5 + (longlong)iVar4 + 1);
          if (*(longlong *)(param_1 + 0xe8) != 0) {
            FUN_144bbece0(param_1,3);
          }
          goto LAB_144f1bfc2;
        }
      }
      else {
        lVar7 = *plVar19;
        pcVar15 = pcVar5 + 1;
        uVar3 = strtoul(pcVar15,(char **)0x0,10);
        pcVar6 = pcVar5 + (-1 - lVar7);
        if ((pcVar6 != (char *)0x0) && (uVar3 < 0x10000)) goto LAB_144f1bbe5;
        lVar7 = *plVar19;
      }
      FUN_144f14ad0(param_1,"Bad syntax CURLOPT_RESOLVE removal entry \'%s\'",lVar7);
    }
LAB_144f1bfc2:
    plVar19 = (longlong *)plVar19[1];
  } while( true );
}



// FUNCTION 144f1c060 FUN_144f1c060 body=22 status=ok
// SIG undefined FUN_144f1c060(void)

void FUN_144f1c060(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  void *_Dst;
  int iVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  char *pcVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint *puVar23;
  ulonglong uVar24;
  undefined1 auStack_3a8 [32];
  undefined8 uStack_388;
  uint uStack_380;
  int iStack_378;
  undefined8 uStack_370;
  longlong lStack_368;
  size_t sStack_360;
  longlong lStack_358;
  void *pvStack_350;
  longlong *plStack_348;
  undefined1 auStack_338 [132];
  undefined4 uStack_2b4;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined1 auStack_c8 [10];
  undefined1 auStack_be [118];
  ulonglong uStack_48;
  
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x2e2) == '\0') {
    FUN_144f074b0();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar16 = *(longlong *)(param_1 + 0x1b0);
  *param_2 = 0;
  lStack_368 = lVar16;
  lStack_358 = param_1;
  plStack_348 = param_2;
  if (lVar16 == 0) goto LAB_1452d9ee5;
  lVar15 = lVar16 + 8;
  if ((*(longlong *)(lVar16 + 8) == 0) && (*(longlong *)(lVar16 + 0x240) == 0)) {
    FUN_144f14b70(param_1,"Could not DoH-resolve: %s",*(undefined8 *)(param_1 + 0xe40));
    goto LAB_1452d9ee5;
  }
  if (*(int *)(lVar16 + 0x478) != 0) goto LAB_1452d9ee5;
  uStack_370 = (byte *)0x0;
  lVar12 = 2;
  do {
    FUN_144bba090(*(undefined8 *)(param_1 + 0xd8));
    FUN_144f0e6d0(lVar15);
    lVar15 = lVar15 + 0x238;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  memset(auStack_338,0,0x270);
  uStack_d4 = 0x7fffffff;
  puVar10 = auStack_338;
  lVar15 = 4;
  do {
    FUN_144f07cf0(puVar10,0x100);
    lVar12 = lStack_368;
    puVar10 = puVar10 + 0x20;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar16 = lVar16 + 0x220;
  lVar15 = 2;
  puVar23 = (uint *)&uStack_370;
  do {
    iVar9 = *(int *)(lVar16 + -0x210);
    if (iVar9 != 0) {
      uVar6 = FUN_144f07ea0(lVar16);
      uVar7 = FUN_144f07e90(lVar16);
      uVar5 = FUN_1452da980(uVar7,uVar6,iVar9,auStack_338);
      *puVar23 = uVar5;
      FUN_144f07d10(lVar16);
      if (uVar5 != 0) {
        if (uVar5 < 0xe) {
          pcVar17 = (&PTR_DAT_149d2bcb0)[(int)uVar5];
        }
        else {
          pcVar17 = "bad error code";
        }
        puVar18 = &DAT_149d2bebc;
        if (*(int *)(lVar16 + -0x210) == 1) {
          puVar18 = &DAT_1499720c8;
        }
        uStack_388 = *(undefined8 *)(lVar12 + 0x480);
        FUN_144f14ad0(param_1,"DoH: %s type %s for %s",pcVar17,puVar18);
      }
    }
    lVar13 = lStack_368;
    lVar16 = lVar16 + 0x238;
    puVar23 = puVar23 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  if (((uint)uStack_370 == 0) || (uStack_370._4_4_ == 0)) {
    FUN_144f14ad0(param_1,"DoH Host name: %s",*(undefined8 *)(lStack_368 + 0x480));
    FUN_144f14ad0(param_1,"TTL: %u seconds",uStack_d4);
    iStack_378 = 0;
    if (0 < iStack_d8) {
      pbVar20 = (byte *)((longlong)&uStack_2b4 + 2);
      do {
        iVar9 = iStack_378;
        uStack_370 = pbVar20;
        if (*(int *)(pbVar20 + -6) == 1) {
          uStack_380 = (uint)pbVar20[1];
          uStack_388 = CONCAT44(uStack_388._4_4_,(uint)*pbVar20);
          FUN_144f14ad0(param_1,"DoH A: %u.%u.%u.%u",pbVar20[-2],pbVar20[-1]);
          uStack_370 = pbVar20;
          iStack_378 = iVar9;
        }
        else {
          iStack_378 = iVar9;
          if (*(int *)(pbVar20 + -6) == 0x1c) {
            FUN_144f2b7e0(auStack_c8,0x80,"DoH AAAA: ");
            lVar16 = 0x76;
            pbVar20 = pbVar20 + -2;
            iVar9 = 0;
            puVar10 = auStack_be;
            lVar15 = 8;
            do {
              puVar19 = &DAT_14996de1b;
              uStack_380 = (uint)pbVar20[1];
              uStack_388 = CONCAT44(uStack_388._4_4_,(uint)*pbVar20);
              if (iVar9 != 0) {
                puVar19 = &DAT_149c05284;
              }
              FUN_144f2b7e0(puVar10,lVar16,"%s%02x%02x",puVar19);
              param_1 = lStack_358;
              lVar12 = -1;
              do {
                lVar12 = lVar12 + 1;
              } while (puVar10[lVar12] != '\0');
              lVar16 = lVar16 - lVar12;
              puVar10 = puVar10 + lVar12;
              iVar9 = iVar9 + 2;
              pbVar20 = pbVar20 + 2;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            FUN_144f14ad0(lStack_358,&DAT_149972340,auStack_c8);
          }
        }
        iStack_378 = iStack_378 + 1;
        pbVar20 = uStack_370 + 0x14;
        lVar13 = lStack_368;
        uStack_370 = pbVar20;
      } while (iStack_378 < iStack_d8);
    }
    uVar24 = 0;
    iVar9 = 0;
    if (0 < iStack_d0) {
      do {
        uVar6 = FUN_144f07e80(auStack_338 + (longlong)iVar9 * 0x20);
        FUN_144f14ad0(param_1,"CNAME: %s",uVar6);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iStack_d0);
    }
    iStack_378 = *(undefined4 *)(lVar13 + 0x47c);
    pvStack_350 = *(void **)(lVar13 + 0x480);
    lVar16 = -1;
    do {
      lVar15 = lVar16;
      lVar16 = lVar15 + 1;
    } while (*(char *)((longlong)pvStack_350 + lVar16) != '\0');
    sStack_360 = lVar15 + 2;
    uStack_370 = (byte *)((ulonglong)uStack_370 & 0xffffffff00000000);
    if (0 < iStack_d8) {
      puVar14 = &uStack_2b4;
      uVar21 = uVar24;
      uVar22 = uVar24;
      do {
        lVar16 = 0x1c;
        uVar4 = 0x17;
        if (puVar14[-1] != 0x1c) {
          lVar16 = 0x10;
          uVar4 = 2;
        }
        uVar8 = (*(code *)PTR_calloc_14c6d9f40)(1,sStack_360 + 0x30 + lVar16);
        if (uVar8 == 0) {
          FUN_1452b2970(uVar21);
          goto LAB_1452d9eae;
        }
        *(ulonglong *)(uVar8 + 0x20) = uVar8 + 0x30;
        _Dst = (void *)(uVar8 + 0x30 + lVar16);
        *(void **)(uVar8 + 0x18) = _Dst;
        memcpy(_Dst,pvStack_350,sStack_360);
        if (uVar21 == 0) {
          uVar21 = uVar8;
        }
        if (uVar22 != 0) {
          *(ulonglong *)(uVar22 + 0x28) = uVar8;
        }
        *(uint *)(uVar8 + 4) = (uint)uVar4;
        *(undefined4 *)(uVar8 + 8) = 1;
        *(int *)(uVar8 + 0x10) = (int)lVar16;
        if (uVar4 == 2) {
          puVar11 = *(ushort **)(uVar8 + 0x20);
          *(undefined4 *)(puVar11 + 2) = *puVar14;
LAB_1452d9d9a:
          *puVar11 = uVar4;
          uVar4 = Ordinal_9((undefined2)iStack_378);
          puVar11[1] = uVar4;
        }
        else if (uVar4 == 0x17) {
          puVar11 = *(ushort **)(uVar8 + 0x20);
          uVar1 = puVar14[1];
          uVar2 = puVar14[2];
          uVar3 = puVar14[3];
          *(undefined4 *)(puVar11 + 4) = *puVar14;
          *(undefined4 *)(puVar11 + 6) = uVar1;
          *(undefined4 *)(puVar11 + 8) = uVar2;
          *(undefined4 *)(puVar11 + 10) = uVar3;
          goto LAB_1452d9d9a;
        }
        param_1 = lStack_358;
        puVar14 = puVar14 + 5;
        iVar9 = (uint)uStack_370 + 1;
        uStack_370 = (byte *)CONCAT44(uStack_370._4_4_,iVar9);
        uVar22 = uVar8;
      } while (iVar9 < iStack_d8);
      if (uVar21 != 0) {
        if (*(longlong *)(lStack_358 + 0xe8) != 0) {
          FUN_144bbeca0(lStack_358,3,2);
        }
        uStack_388 = CONCAT44(uStack_388._4_4_,*(undefined4 *)(lStack_368 + 0x47c));
        lVar16 = FUN_144f1b810(param_1,uVar21,*(undefined8 *)(lStack_368 + 0x480),0);
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          FUN_144bbece0(param_1,3);
        }
        if (lVar16 == 0) {
          FUN_1452b2970(uVar21);
        }
        else {
          *(longlong *)(param_1 + 0xe48) = lVar16;
          *plStack_348 = lVar16;
        }
        goto LAB_1452d9e5e;
      }
    }
LAB_1452d9eae:
    if (0 < iStack_d0) {
      do {
        FUN_144f07d10(auStack_338 + (longlong)(int)uVar24 * 0x20);
        uVar5 = (int)uVar24 + 1;
        uVar24 = (ulonglong)uVar5;
      } while ((int)uVar5 < iStack_d0);
    }
  }
  else {
LAB_1452d9e5e:
    iVar9 = 0;
    if (0 < iStack_d0) {
      do {
        FUN_144f07d10(auStack_338 + (longlong)iVar9 * 0x20);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iStack_d0);
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1b0));
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
LAB_1452d9ee5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_48 ^ (ulonglong)auStack_3a8);
}



// FUNCTION 144f1c080 FUN_144f1c080 body=21 status=ok
// SIG undefined FUN_144f1c080(void)

undefined8 FUN_144f1c080(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x2e2) != '\0') {
    return 0;
  }
  uVar1 = FUN_144f073f0();
  return uVar1;
}



// FUNCTION 144f1c0a0 FUN_144f1c0a0 body=72 status=ok
// SIG undefined FUN_144f1c0a0(void)

int FUN_144f1c0a0(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = "proxy";
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x20) + 0x2c8);
  if (cVar1 == '\0') {
    pcVar2 = "host";
  }
  FUN_144f14b70(param_1,"Could not resolve %s: %s",pcVar2,*(undefined8 *)(param_1 + 0xe40));
  return 6 - (uint)(cVar1 != '\0');
}



// FUNCTION 144f1c0f0 FUN_144f1c0f0 body=44 status=ok
// SIG undefined FUN_144f1c0f0(void)

void FUN_144f1c0f0(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 2);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_1452b2970(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000144f1c10f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_14c6d9f28)(param_1);
    return;
  }
  return;
}



// FUNCTION 144f1c150 FUN_144f1c150 body=465 status=ok
// SIG undefined FUN_144f1c150(void)

void FUN_144f1c150(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_188 [32];
  longlong local_168 [2];
  int local_158;
  undefined1 local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  puVar9 = local_148;
  uVar7 = 0xffffffffffffffff;
  do {
    uVar7 = uVar7 + 1;
  } while (*(char *)(param_2 + uVar7) != '\0');
  uVar11 = 0;
  if (uVar7 < 0x100) {
    if (uVar7 != 0) goto LAB_144f1c1b1;
  }
  else {
    uVar7 = 0xff;
LAB_144f1c1b1:
    uVar8 = uVar7;
    do {
      uVar3 = FUN_144f19640(puVar9[param_2 - (longlong)local_148]);
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
      uVar11 = uVar7;
    } while (uVar8 != 0);
  }
  iVar4 = FUN_144f2b7e0(puVar9,7,&DAT_149c072d8,param_3);
  lVar10 = (longlong)iVar4 + uVar11;
  plVar5 = (longlong *)FUN_144f1ab60(*(undefined8 *)(param_1 + 200),local_148,lVar10 + 1);
  if (plVar5 == (longlong *)0x0) {
    if (*(char *)(param_1 + 0x13d6) == '\0') goto LAB_144f1c311;
    local_148[0] = FUN_144f19640(0x2a);
    iVar4 = FUN_144f2b7e0(local_148 + 1,7,&DAT_149c072d8,param_3);
    lVar10 = (longlong)iVar4 + 1;
    plVar5 = (longlong *)FUN_144f1ab60(*(undefined8 *)(param_1 + 200),local_148,(longlong)iVar4 + 2)
    ;
    if (plVar5 == (longlong *)0x0) goto LAB_144f1c311;
  }
  if (*(int *)(param_1 + 0x6c8) == -1) {
LAB_144f1c2ce:
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x20) + 0x4d8);
    if (cVar1 == '\0') goto LAB_144f1c311;
    lVar2 = *plVar5;
    iVar4 = 0x17;
    if (cVar1 != '\x02') {
      iVar4 = 2;
    }
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28)) {
      if (*(int *)(lVar2 + 4) == iVar4) goto LAB_144f1c311;
    }
    pcVar6 = "Hostname in DNS cache doesn\'t have needed family, zapped";
  }
  else {
    _time64(local_168);
    local_158 = *(int *)(param_1 + 0x6c8);
    local_168[1] = 0;
    if ((plVar5[1] == 0) || (local_168[0] - plVar5[1] < (longlong)local_158)) {
      if (plVar5 == (longlong *)0x0) goto LAB_144f1c311;
      goto LAB_144f1c2ce;
    }
    pcVar6 = "Hostname in DNS cache was stale, zapped";
  }
  FUN_144f14ad0(param_1,pcVar6);
  FUN_144f1aab0(*(undefined8 *)(param_1 + 200),local_148,lVar10 + 1);
LAB_144f1c311:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_188);
}



// FUNCTION 144f1c340 FUN_144f1c340 body=252 status=ok
// SIG undefined FUN_144f1c340(void)

void FUN_144f1c340(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_48;
  longlong local_40;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)&local_48;
  if (param_2 != (longlong *)0x0) {
    lVar1 = *param_1;
    local_40 = 0;
    local_48 = 0;
    plVar4 = &local_48;
    plVar5 = &local_48;
LAB_144f1c380:
    while (lVar1 < param_2[4]) {
LAB_144f1c3ce:
      plVar2 = (longlong *)*param_2;
      if (plVar2 == (longlong *)0x0) goto LAB_144f1c409;
      if ((lVar1 < plVar2[4]) ||
         ((plVar3 = param_2, lVar1 <= plVar2[4] && ((int)param_1[1] < (int)plVar2[5])))) {
        *param_2 = plVar2[1];
        plVar2[1] = (longlong)param_2;
        param_2 = plVar2;
        plVar3 = plVar2;
        if (*plVar2 == 0) goto LAB_144f1c409;
      }
      *plVar5 = (longlong)plVar3;
      plVar5 = plVar3;
      param_2 = (longlong *)*plVar3;
    }
    if (lVar1 <= param_2[4]) {
      if ((int)param_1[1] < (int)param_2[5]) goto LAB_144f1c3ce;
      if ((int)param_1[1] <= (int)param_2[5]) goto LAB_144f1c409;
    }
    plVar2 = (longlong *)param_2[1];
    if (plVar2 == (longlong *)0x0) goto LAB_144f1c409;
    plVar3 = param_2;
    if ((plVar2[4] <= lVar1) && ((plVar2[4] < lVar1 || ((int)plVar2[5] < (int)param_1[1])))) {
      param_2[1] = *plVar2;
      *plVar2 = (longlong)param_2;
      param_2 = plVar2;
      plVar3 = plVar2;
      if (plVar2[1] == 0) goto LAB_144f1c409;
    }
    plVar4[1] = (longlong)plVar3;
    param_2 = (longlong *)plVar3[1];
    plVar4 = plVar3;
    goto LAB_144f1c380;
  }
LAB_144f1c42f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)&local_48);
LAB_144f1c409:
  plVar4[1] = *param_2;
  *plVar5 = param_2[1];
  *param_2 = local_40;
  param_2[1] = local_48;
  goto LAB_144f1c42f;
}



// FUNCTION 144f1c450 FUN_144f1c450 body=229 status=ok
// SIG undefined FUN_144f1c450(void)

undefined8 * FUN_144f1c450(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_3 == (undefined8 *)0x0) {
    return param_2;
  }
  if (param_2 == (undefined8 *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    goto LAB_144f1c518;
  }
  local_18 = (undefined4)*param_1;
  uStack_14 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_10 = (undefined4)param_1[1];
  uStack_c = *(undefined4 *)((longlong)param_1 + 0xc);
  puVar5 = (undefined8 *)FUN_144f1c340(&local_18);
  lVar3 = *param_1;
  lVar4 = puVar5[4];
  if (lVar3 < lVar4) {
LAB_144f1c4fe:
    *param_3 = *puVar5;
    param_3[1] = puVar5;
    *puVar5 = 0;
  }
  else {
    if (lVar3 <= lVar4) {
      iVar1 = (int)param_1[1];
      iVar2 = *(int *)(puVar5 + 5);
      if (iVar2 <= iVar1) {
        if (iVar1 <= iVar2) {
          param_3[2] = puVar5;
          param_3[4] = 0xffffffffffffffff;
          param_3[5] = 0xffffffff;
          param_3[3] = puVar5[3];
          *(undefined8 **)(puVar5[3] + 0x10) = param_3;
          puVar5[3] = param_3;
          return puVar5;
        }
        if (lVar3 < lVar4) goto LAB_144f1c4fe;
        if (lVar4 < lVar3) goto LAB_144f1c4eb;
      }
      if (iVar1 < iVar2) goto LAB_144f1c4fe;
    }
LAB_144f1c4eb:
    param_3[1] = puVar5[1];
    *param_3 = puVar5;
    puVar5[1] = 0;
  }
LAB_144f1c518:
  lVar3 = *param_1;
  lVar4 = param_1[1];
  param_3[2] = param_3;
  param_3[3] = param_3;
  param_3[4] = lVar3;
  param_3[5] = lVar4;
  return param_3;
}



// FUNCTION 144f1c540 FUN_144f1c540 body=181 status=ok
// SIG undefined FUN_144f1c540(void)

undefined8 * FUN_144f1c540(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 == 0) {
    *param_3 = 0;
    return (undefined8 *)0x0;
  }
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  puVar3 = (undefined8 *)FUN_144f1c340(&local_18);
  if (((longlong)puVar3[4] <= *param_1) &&
     (((longlong)puVar3[4] < *param_1 || (*(int *)(puVar3 + 5) <= (int)param_1[1])))) {
    puVar1 = (undefined8 *)puVar3[2];
    if (puVar1 != puVar3) {
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      puVar1[1] = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[3] = puVar3[3];
      *(undefined8 **)(puVar3[3] + 0x10) = puVar1;
      *param_3 = puVar3;
      return puVar1;
    }
    puVar1 = (undefined8 *)puVar3[1];
    *param_3 = puVar3;
    return puVar1;
  }
  *param_3 = 0;
  return puVar3;
}



// FUNCTION 144f1c600 FUN_144f1c600 body=338 status=ok
// SIG undefined FUN_144f1c600(void)

undefined8 FUN_144f1c600(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((param_1 == 0) || (param_2 == (longlong *)0x0)) {
    return 1;
  }
  if (((param_2[4] == -1) && (0x7fffffff < *(uint *)(param_2 + 5))) &&
     (-2 < (int)*(uint *)(param_2 + 5))) {
    if ((longlong *)param_2[2] == param_2) {
      return 3;
    }
    *(longlong **)(param_2[3] + 0x10) = (longlong *)param_2[2];
    *(longlong *)(param_2[2] + 0x18) = param_2[3];
    param_2[2] = (longlong)param_2;
    *param_3 = param_1;
    return 0;
  }
  local_18 = (undefined4)param_2[4];
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_10 = (undefined4)param_2[5];
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x2c);
  plVar2 = (longlong *)FUN_144f1c340(&local_18);
  if (plVar2 != param_2) {
    return 2;
  }
  plVar1 = (longlong *)plVar2[2];
  if (plVar1 != plVar2) {
    lVar3 = plVar2[5];
    plVar1[4] = plVar2[4];
    plVar1[5] = lVar3;
    plVar1[1] = plVar2[1];
    *plVar1 = *plVar2;
    plVar1[3] = plVar2[3];
    *(longlong **)(plVar2[3] + 0x10) = plVar1;
    *param_3 = (longlong)plVar1;
    return 0;
  }
  if (*plVar2 == 0) {
    *param_3 = plVar2[1];
    return 0;
  }
  local_18 = (undefined4)param_2[4];
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_10 = (undefined4)param_2[5];
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar3 = FUN_144f1c340(&local_18);
  *(longlong *)(lVar3 + 8) = plVar2[1];
  *param_3 = lVar3;
  return 0;
}



// FUNCTION 144f1c760 FUN_144f1c760 body=3227 status=ok
// SIG undefined FUN_144f1c760(void)

void FUN_144f1c760(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined1 auStack_188 [32];
  char *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  char *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  char *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  char *local_108;
  char *local_100;
  undefined1 *local_f8;
  undefined1 local_f0 [32];
  undefined1 *local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = *(longlong *)(param_1 + 0x20);
  *param_2 = 1;
  local_d0 = &DAT_14996de1b;
  local_f8 = (undefined1 *)0x0;
  cVar4 = *(char *)(lVar1 + 0x4d5);
  if (cVar4 != '\x02') {
    if (cVar4 == '\x03') {
      cVar4 = FUN_144f28210(param_1,lVar1,0);
      if (((cVar4 == '\0') && (*(char *)(lVar1 + 0x2cd) != '\0')) &&
         (*(char *)(lVar1 + 0x2cb) == '\0')) {
        iVar7 = FUN_144f282d0(param_1,lVar1,0);
        goto joined_r0x000144f1c80d;
      }
    }
    else if ((cVar4 != '\x1e') && (cVar4 = FUN_144f28250(param_1,lVar1,0), cVar4 != '\0')) {
      iVar7 = FUN_144f282d0(param_1,lVar1,0);
joined_r0x000144f1c80d:
      if (iVar7 != 0) goto LAB_144f1d201;
    }
  }
  local_c8 = *(longlong **)(param_1 + 0x1a8);
  iVar7 = FUN_144f1e4a0(param_1,lVar1);
  if (iVar7 != 0) goto LAB_144f1d201;
  lVar9 = FUN_144f23930(param_1,"User-Agent",10);
  if (lVar9 != 0) {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1358));
    *(undefined8 *)(param_1 + 0x1358) = 0;
  }
  cVar4 = *(char *)(param_1 + 0x13c2);
  if (((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x84) & 7) != 0) &&
     (*(char *)(param_1 + 0x13d8) != '\0')) {
    cVar4 = '\x04';
  }
  local_108 = *(char **)(param_1 + 0x750);
  if (local_108 != (char *)0x0) goto LAB_144f1c8f0;
  if (*(char *)(param_1 + 0x1d4) == '\0') {
    switch(cVar4) {
    default:
      local_108 = "GET";
      break;
    case '\x01':
    case '\x02':
    case '\x03':
      local_108 = "POST";
      break;
    case '\x04':
      local_108 = "PUT";
      break;
    case '\x05':
      goto switchD_144f1c8d1_caseD_5;
    }
  }
  else {
switchD_144f1c8d1_caseD_5:
    local_108 = "HEAD";
  }
LAB_144f1c8f0:
  pcVar10 = *(char **)(param_1 + 0x1260);
  pcVar11 = (char *)0x0;
  if ((*(longlong *)(param_1 + 0x1268) != 0) &&
     (local_100 = pcVar10, pcVar10 = (char *)FUN_144f2b8b0("%s?%s",pcVar10), pcVar11 = pcVar10,
     pcVar10 == (char *)0x0)) goto LAB_144f1d201;
  local_100 = pcVar10;
  if (((*(char *)(lVar1 + 0x2c8) == '\0') || (*(char *)(lVar1 + 0x2ca) == '\0')) &&
     ((*(longlong *)(param_1 + 0x13a0) == 0 && (*(longlong *)(param_1 + 0x920) == 0)))) {
    *(undefined1 *)(param_1 + 0xe2c) = 1;
    *(undefined1 *)(param_1 + 0xe3c) = 1;
    (*(code *)PTR_free_14c6d9f28)(pcVar11);
  }
  else {
    iVar7 = *(int *)(param_1 + 0xe20);
    if ((iVar7 != 0) && (*(int *)(param_1 + 0xe24) == 0)) {
      *(int *)(param_1 + 0xe24) = iVar7;
    }
    iVar7 = *(int *)(param_1 + 0xe30);
    if ((iVar7 != 0) && (*(int *)(param_1 + 0xe34) == 0)) {
      *(int *)(param_1 + 0xe34) = iVar7;
    }
    if ((*(char *)(lVar1 + 0x2c8) == '\0') || (*(char *)(lVar1 + 0x2cb) != '\0')) {
      *(undefined1 *)(param_1 + 0xe3c) = 1;
    }
    else {
      local_160 = (undefined1 *)CONCAT71(local_160._1_7_,1);
      local_168 = pcVar10;
      iVar7 = FUN_144f22120(param_1,lVar1,(int *)(param_1 + 0xe30),local_108);
      if (iVar7 != 0) {
        (*(code *)PTR_free_14c6d9f28)(pcVar11);
        goto LAB_144f1d201;
      }
    }
    iVar7 = 0;
    cVar6 = FUN_1452db800(param_1);
    if ((cVar6 == '\0') && (*(char *)(lVar1 + 0x2dd) == '\0')) {
      *(undefined1 *)(param_1 + 0xe2c) = 1;
    }
    else {
      local_160 = (undefined1 *)((ulonglong)local_160 & 0xffffffffffffff00);
      local_168 = local_100;
      iVar7 = FUN_144f22120(param_1,lVar1,(int *)(param_1 + 0xe20),local_108);
    }
    if ((((*(char *)(param_1 + 0xe2d) == '\0') || (*(char *)(param_1 + 0xe2c) != '\0')) &&
        ((*(char *)(param_1 + 0xe3d) == '\0' || (*(char *)(param_1 + 0xe3c) != '\0')))) ||
       ((cVar4 == '\0' || (cVar4 == '\x05')))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(lVar1 + 0x2d8) = uVar5;
    (*(code *)PTR_free_14c6d9f28)(pcVar11);
    if (iVar7 != 0) goto LAB_144f1d201;
  }
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1378));
  pcVar10 = (char *)0x0;
  *(undefined8 *)(param_1 + 0x1378) = 0;
  if ((*(longlong *)(param_1 + 0x1278) != 0) &&
     (lVar9 = FUN_144f23930(param_1,"Referer",7), lVar9 == 0)) {
    lVar9 = FUN_144f2b8b0("Referer: %s\r\n",*(undefined8 *)(param_1 + 0x1278));
    *(longlong *)(param_1 + 0x1378) = lVar9;
    if (lVar9 == 0) goto LAB_144f1d201;
  }
  lVar9 = FUN_144f23930(param_1,"Accept-Encoding",0xf);
  if ((lVar9 == 0) && (*(longlong *)(param_1 + 0x768) != 0)) {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1360));
    *(undefined8 *)(param_1 + 0x1360) = 0;
    lVar9 = FUN_144f2b8b0("Accept-Encoding: %s\r\n",*(undefined8 *)(param_1 + 0x768));
    *(longlong *)(param_1 + 0x1360) = lVar9;
    if (lVar9 == 0) goto LAB_144f1d201;
  }
  else {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1360));
    *(undefined8 *)(param_1 + 0x1360) = 0;
  }
  iVar7 = 2;
  lVar9 = FUN_144f23930(param_1,&DAT_149c07e20,2);
  if ((lVar9 == 0) && (*(char *)(param_1 + 0xac9) != '\0')) {
    lVar9 = FUN_144f23930(param_1,"Connection",10);
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1398));
    *(undefined8 *)(param_1 + 0x1398) = 0;
    pcVar11 = (char *)0x0;
    if (lVar9 == 0) {
LAB_144f1cbd8:
      puVar16 = &DAT_14996de1b;
    }
    else {
      pcVar11 = (char *)FUN_144f1d730(lVar9);
      if (pcVar11 == (char *)0x0) goto LAB_144f1d201;
      puVar16 = &DAT_14997153c;
      if (*pcVar11 == '\0') goto LAB_144f1cbd8;
    }
    pcVar15 = "";
    if (pcVar11 != (char *)0x0) {
      pcVar15 = pcVar11;
    }
    uVar12 = FUN_144f2b8b0("Connection: %s%sTE\r\nTE: gzip\r\n",pcVar15,puVar16);
    *(undefined8 *)(param_1 + 0x1398) = uVar12;
    (*(code *)PTR_free_14c6d9f28)(pcVar11);
    if (*(longlong *)(param_1 + 0x1398) == 0) goto LAB_144f1d201;
  }
  iVar8 = FUN_144f1f200(param_1,lVar1,cVar4,&local_d0);
  if (iVar8 != 0) goto LAB_144f1d201;
  lVar9 = FUN_144f23930(param_1,"Accept",6);
  local_100 = "Accept: */*\r\n";
  if (lVar9 != 0) {
    local_100 = pcVar10;
  }
  if (((cVar4 == '\x01') || (cVar4 == '\x04')) && (*(longlong *)(param_1 + 0x11c0) != 0)) {
    if (*(longlong *)(param_1 + 0x11c0) < 0) {
      *(undefined8 *)(param_1 + 0x11c0) = 0;
    }
    else if (*(int *)(param_1 + 0xda0) == 0) {
      if (*(longlong *)(lVar1 + 0x338) == 0) {
LAB_144f1cd27:
        if (iVar7 != 2) {
          FUN_144f14b70(param_1,"Could not seek stream");
          goto LAB_144f1d201;
        }
        do {
          uVar13 = (ulonglong)*(uint *)(param_1 + 0x6cc);
          if (*(longlong *)(param_1 + 0x11c0) - (longlong)pcVar10 <= (longlong)uVar13) {
            uVar13 = FUN_144f17010();
          }
          uVar14 = (**(code **)(param_1 + 0x1218))
                             (*(undefined8 *)(param_1 + 0xcd8),1,uVar13,
                              *(undefined8 *)(param_1 + 0x1220));
          pcVar10 = pcVar10 + uVar14;
          if ((uVar14 == 0) || (uVar13 < uVar14)) {
            FUN_144f14b70(param_1,"Could only read %I64d bytes from the input",pcVar10);
            goto LAB_144f1d201;
          }
        } while ((longlong)pcVar10 < *(longlong *)(param_1 + 0x11c0));
      }
      else {
        FUN_144bbace0(param_1,1);
        iVar7 = (**(code **)(lVar1 + 0x338))
                          (*(undefined8 *)(lVar1 + 0x340),*(undefined8 *)(param_1 + 0x11c0),0);
        FUN_144bbace0(param_1,0);
        if (iVar7 != 0) goto LAB_144f1cd27;
      }
      if ((0 < *(longlong *)(param_1 + 0x11f8)) &&
         (lVar9 = *(longlong *)(param_1 + 0x11f8) - *(longlong *)(param_1 + 0x11c0),
         *(longlong *)(param_1 + 0x11f8) = lVar9, lVar9 < 1)) {
        FUN_144f14b70(param_1,"File already completely uploaded");
        goto LAB_144f1d201;
      }
    }
  }
  if (*(char *)(param_1 + 0x13cd) != '\0') {
    if (((cVar4 == '\0') || (cVar4 == '\x05')) &&
       (lVar9 = FUN_144f23930(param_1,"Range",5), lVar9 == 0)) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1370));
      uVar12 = FUN_144f2b8b0("Range: bytes=%s\r\n",*(undefined8 *)(param_1 + 0x11b8));
      *(undefined8 *)(param_1 + 0x1370) = uVar12;
    }
    else if (((cVar4 == '\x01') || (cVar4 == '\x04')) &&
            (lVar9 = FUN_144f23930(param_1,"Content-Range",0xd), lVar9 == 0)) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1370));
      if (*(longlong *)(param_1 + 0x340) < 0) {
        lVar9 = *(longlong *)(param_1 + 0x11f8) + -1;
        pcVar10 = "Content-Range: bytes 0-%I64d/%I64d\r\n";
LAB_144f1ce7d:
        lVar9 = FUN_144f2b8b0(pcVar10,lVar9);
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x11b8);
        if (*(longlong *)(param_1 + 0x11c0) == 0) {
          pcVar10 = "Content-Range: bytes %s/%I64d\r\n";
          goto LAB_144f1ce7d;
        }
        lVar9 = FUN_144f2b8b0("Content-Range: bytes %s%I64d/%I64d\r\n",lVar9,
                              *(longlong *)(param_1 + 0x11c0) + *(longlong *)(param_1 + 0x11f8) + -1
                             );
      }
      *(longlong *)(param_1 + 0x1370) = lVar9;
      if (lVar9 == 0) goto LAB_144f1d201;
    }
  }
  cVar6 = FUN_144f28210(param_1,lVar1,0);
  if (cVar6 == '\0') {
    if ((*(char *)(param_1 + 0x13c1) != '\n') && (*(byte *)(lVar1 + 0x4d9) != 10)) {
      if (*(char *)(param_1 + 0x13c0) == '\x01') {
        if (*(byte *)(lVar1 + 0x4d9) < 0xb) goto LAB_144f1cee1;
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      puVar17 = &DAT_149c078bc;
      if (bVar2) goto LAB_144f1cee8;
    }
LAB_144f1cee1:
    puVar17 = &DAT_149c078c0;
  }
  else {
    puVar17 = &DAT_149c078b8;
  }
LAB_144f1cee8:
  FUN_144f07cf0(local_f0,0x100000);
  FUN_144f07dc0(param_1 + 0xcb8);
  iVar7 = FUN_144f07d70(local_f0,&DAT_149c07ea8,local_108);
  if ((iVar7 == 0) && (iVar7 = FUN_144f1e700(param_1,lVar1,local_f0), iVar7 == 0)) {
    if ((*(char *)(lVar1 + 0x2d0) != '\0') &&
       ((lVar9 = FUN_144f23930(param_1,"Alt-Used",8), lVar9 == 0 &&
        (local_f8 = (undefined1 *)
                    FUN_144f2b8b0("Alt-Used: %s:%d\r\n",*(undefined8 *)(lVar1 + 0xa0),
                                  *(undefined4 *)(lVar1 + 0x4c8)), local_f8 == (undefined1 *)0x0))))
    {
      FUN_144f07d10(local_f0);
      goto LAB_144f1d201;
    }
    if ((((*(char *)(lVar1 + 0x2c8) == '\0') || (*(char *)(lVar1 + 0x2cb) != '\0')) ||
        (lVar9 = FUN_144f23930(param_1,"Proxy-Connection",0x10), lVar9 != 0)) ||
       (lVar9 = FUN_144f1d840(param_1,lVar1,"Proxy-Connection",0x10), lVar9 != 0)) {
      local_108 = "";
    }
    else {
      local_108 = "Proxy-Connection: Keep-Alive\r\n";
    }
    if ((*(longlong *)(param_1 + 0x1278) == 0) ||
       (local_130 = *(undefined1 **)(param_1 + 0x1378), local_130 == (undefined1 *)0x0)) {
      local_130 = &DAT_14996de1b;
    }
    if (((*(char **)(param_1 + 0x768) == (char *)0x0) || (**(char **)(param_1 + 0x768) == '\0')) ||
       (local_138 = *(undefined1 **)(param_1 + 0x1360), local_138 == (undefined1 *)0x0)) {
      local_138 = &DAT_14996de1b;
    }
    local_140 = &DAT_14996de1b;
    if (*(undefined1 **)(param_1 + 0x1398) != (undefined1 *)0x0) {
      local_140 = *(undefined1 **)(param_1 + 0x1398);
    }
    if (((*(char **)(param_1 + 0x840) == (char *)0x0) || (**(char **)(param_1 + 0x840) == '\0')) ||
       (local_150 = *(undefined1 **)(param_1 + 0x1358), local_150 == (undefined1 *)0x0)) {
      local_150 = &DAT_14996de1b;
    }
    if ((*(char *)(param_1 + 0x13cd) == '\0') ||
       (local_158 = *(undefined1 **)(param_1 + 0x1370), local_158 == (undefined1 *)0x0)) {
      local_158 = &DAT_14996de1b;
    }
    local_160 = &DAT_14996de1b;
    if (*(undefined1 **)(param_1 + 0x1368) != (undefined1 *)0x0) {
      local_160 = *(undefined1 **)(param_1 + 0x1368);
    }
    local_168 = "";
    if (*(char **)(param_1 + 0x1350) != (char *)0x0) {
      local_168 = *(char **)(param_1 + 0x1350);
    }
    puVar16 = &DAT_14996de1b;
    if (*(undefined1 **)(param_1 + 0x1380) != (undefined1 *)0x0) {
      puVar16 = *(undefined1 **)(param_1 + 0x1380);
    }
    local_118 = &DAT_14996de1b;
    if (local_f8 != (undefined1 *)0x0) {
      local_118 = local_f8;
    }
    local_148 = "";
    if (local_100 != (char *)0x0) {
      local_148 = local_100;
    }
    local_120 = local_d0;
    local_128 = local_108;
    iVar7 = FUN_144f07d70(local_f0," HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s%s",puVar17,puVar16);
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1368));
    *(undefined8 *)(param_1 + 0x1368) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1350));
    *(undefined8 *)(param_1 + 0x1350) = 0;
    (*(code *)PTR_free_14c6d9f28)(local_f8);
    uVar12 = 0xd;
    if ((iVar7 == 0) &&
       (((((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x8c) & 1) != 0 ||
          (0x13 < *(byte *)(lVar1 + 0x4d9))) ||
         ((*(char *)(param_1 + 0x13c0) != '\x03' ||
          (iVar7 = FUN_144f280a0(local_f0,param_1), iVar7 == 0)))) &&
        (iVar7 = FUN_144f1fbe0(param_1,lVar1,local_f0), iVar7 == 0)))) {
      if (*(char *)(param_1 + 0x530) != '\0') {
        iVar7 = FUN_1452b1c90(*(undefined8 *)(param_1 + 0x528),&local_c0);
        if (iVar7 != 0) {
          FUN_144f14b70(param_1,"Invalid TIMEVALUE");
          goto LAB_144f1d1d6;
        }
        cVar6 = *(char *)(param_1 + 0x530);
        if (cVar6 == '\x01') {
          pcVar10 = "If-Modified-Since";
          uVar12 = 0x11;
        }
        else if (cVar6 == '\x02') {
          pcVar10 = "If-Unmodified-Since";
          uVar12 = 0x13;
        }
        else {
          if (cVar6 != '\x03') goto LAB_144f1d1d6;
          pcVar10 = "Last-Modified";
        }
        lVar9 = FUN_144f23930(param_1,pcVar10,uVar12);
        if (lVar9 == 0) {
          if ((int)local_a8 == 0) {
            local_a8._0_4_ = 6;
          }
          else {
            local_a8._0_4_ = (int)local_a8 + -1;
          }
          local_138 = (undefined1 *)CONCAT44(local_138._4_4_,local_c0);
          local_140 = (undefined1 *)CONCAT44(local_140._4_4_,local_bc);
          local_148 = (char *)CONCAT44(local_148._4_4_,local_b8);
          local_150 = (undefined1 *)CONCAT44(local_150._4_4_,local_ac + 0x76c);
          local_158 = (&PTR_DAT_149d24a00)[local_b0];
          local_160 = (undefined1 *)CONCAT44(local_160._4_4_,local_b4);
          local_168 = (&PTR_DAT_149d249c0)[(int)local_a8];
          FUN_144f2b7e0(local_98,0x50,"%s: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",pcVar10);
          iVar7 = FUN_144f07d50(local_f0,local_98);
          if (iVar7 != 0) goto LAB_144f1d1d6;
        }
      }
      iVar7 = FUN_144f1dcd0(param_1,0,local_f0);
      plVar3 = local_c8;
      if (iVar7 == 0) {
        local_c8[1] = 0;
        if ((cVar4 == '\0') || (cVar4 == '\x05')) {
          FUN_144f25d20(param_1,0);
        }
        iVar7 = FUN_144f1f4a0(param_1,lVar1,local_f0,cVar4);
        if (iVar7 == 0) {
          if (((-1 < *plVar3) && (*plVar3 <= *(longlong *)(param_1 + 0x108))) &&
             ((int)plVar3[7] != 1)) {
            *(undefined1 *)(param_1 + 0x1cc) = 1;
          }
          if (*(longlong *)(param_1 + 0x108) != 0) {
            FUN_144f25da0(param_1);
            FUN_144f25e70(param_1);
            if (*plVar3 == 0) {
              FUN_144f14ad0(param_1,"upload completely sent off: %I64d out of %I64d bytes",
                            *(undefined8 *)(param_1 + 0x108),0);
              *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffd;
              *(undefined1 *)(param_1 + 0x1cc) = 1;
              *(undefined4 *)(param_1 + 0x168) = 0;
              FUN_144bbab00(param_1,0);
            }
          }
          if (*(char *)(param_1 + 0x1cc) != '\0') {
            FUN_144f14570(param_1);
          }
          if ((0x13 < *(byte *)(lVar1 + 0x4d9)) && (*(char *)(param_1 + 0x1d1) != '\0')) {
            *(undefined1 *)(param_1 + 0x1d1) = 0;
          }
          goto LAB_144f1d201;
        }
      }
    }
  }
LAB_144f1d1d6:
  FUN_144f07d10(local_f0);
LAB_144f1d201:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_188);
}



// FUNCTION 144f1d430 FUN_144f1d430 body=224 status=ok
// SIG undefined FUN_144f1d430(void)

int FUN_144f1d430(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0xe2d) = 0;
  *(undefined1 *)(param_1 + 0xe3d) = 0;
  *(undefined8 *)(lVar1 + 0x338) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(lVar1 + 0x340) = *(undefined8 *)(param_1 + 0x2b8);
  if (lVar2 != 0) {
    FUN_144f07d10(lVar2 + 0x50);
    FUN_144f07dc0(param_1 + 0xcb8);
    if (param_2 != 0) {
      return param_2;
    }
    if ((((param_3 == '\0') && (*(char *)(lVar1 + 0x2d7) == '\0')) &&
        (*(char *)(param_1 + 0xab2) == '\0')) &&
       ((longlong)
        (((ulonglong)*(uint *)(param_1 + 0x128) - (ulonglong)*(uint *)(param_1 + 0x130)) +
        *(longlong *)(param_1 + 0x100)) < 1)) {
      FUN_144f14b70(param_1,"Empty reply from server");
      FUN_144f16220(lVar1,2);
      return 0x34;
    }
  }
  return 0;
}



// FUNCTION 144f1d510 FUN_144f1d510 body=53 status=ok
// SIG undefined FUN_144f1d510(void)

void FUN_144f1d510(longlong param_1,undefined8 param_2)

{
  FUN_144f16220(*(undefined8 *)(param_1 + 0x20),0);
  FUN_144f13f00(param_1,0,0,param_2);
  return;
}



// FUNCTION 144f1d550 FUN_144f1d550 body=30 status=ok
// SIG undefined FUN_144f1d550(void)

undefined8 FUN_144f1d550(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144f14170(param_1,0);
  *param_3 = uVar1;
  return 0x10000;
}



// FUNCTION 144f1d570 FUN_144f1d570 body=111 status=ok
// SIG undefined FUN_144f1d570(void)

undefined8 FUN_144f1d570(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (*(code *)PTR_calloc_14c6d9f40)(1);
  if (lVar1 == 0) {
    return 0x1b;
  }
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  FUN_144f16220(param_2,0);
  if (*(char *)(param_1 + 0x13c0) == '\x1f') {
    uVar2 = FUN_1452dc230(param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144f1d5e0 FUN_144f1d5e0 body=126 status=ok
// SIG undefined FUN_144f1d5e0(void)

undefined8 FUN_144f1d5e0(longlong param_1,ulonglong param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = 0x4b000;
  if (param_2 < 0x4b000) {
    iVar1 = (int)param_2;
    uVar2 = iVar1 + *(uint *)(param_1 + 300);
    uVar4 = *(int *)(param_1 + 0x1430) + iVar1;
    *(uint *)(param_1 + 300) = uVar2;
    *(uint *)(param_1 + 0x1430) = uVar4;
    if (param_3 == '\0') {
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + iVar1;
    }
    if (uVar2 < 0x4b001) {
      if (uVar4 < 0x5dc001) {
        return 0;
      }
      uVar3 = 0x5dc000;
      uVar2 = uVar4;
    }
    param_2 = (ulonglong)uVar2;
  }
  else {
    param_2 = param_2 + *(uint *)(param_1 + 300);
  }
  if (param_2 == 0) {
    return 0;
  }
  FUN_144f14b70(param_1,"Too large response headers: %zu > %u",param_2,uVar3);
  return 0x38;
}



// FUNCTION 144f1d660 FUN_144f1d660 body=200 status=ok
// SIG undefined FUN_144f1d660(void)

undefined8
FUN_144f1d660(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             ulonglong param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *_Str;
  ulonglong uVar4;
  
  iVar2 = FUN_144f195b0();
  if (iVar2 != 0) {
    _Str = (char *)(param_3 + param_1);
    cVar1 = *_Str;
    while ((cVar1 != '\0' && (((cVar1 == ' ' || (cVar1 == '\t')) || ((byte)(cVar1 - 10U) < 4))))) {
      pcVar3 = _Str + 1;
      _Str = _Str + 1;
      cVar1 = *pcVar3;
    }
    pcVar3 = strchr(_Str,0xd);
    if ((pcVar3 == (char *)0x0) && (pcVar3 = strchr(_Str,10), pcVar3 == (char *)0x0)) {
      pcVar3 = strchr(_Str,0);
    }
    for (uVar4 = (longlong)pcVar3 - (longlong)_Str; param_5 <= uVar4; uVar4 = uVar4 - 1) {
      iVar2 = FUN_144f195b0(_Str,param_4,param_5);
      if (iVar2 != 0) {
        return 1;
      }
      _Str = _Str + 1;
    }
  }
  return 0;
}



// FUNCTION 144f1d730 FUN_144f1d730 body=263 status=ok
// SIG undefined FUN_144f1d730(void)

void * FUN_144f1d730(char *param_1)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  char *pcVar3;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != ':'))) {
    pcVar3 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar3;
  }
  pcVar3 = param_1 + 1;
  if (cVar1 == '\0') {
    pcVar3 = param_1;
  }
  cVar1 = *pcVar3;
  while ((cVar1 != '\0' && (((cVar1 == ' ' || (cVar1 == '\t')) || ((byte)(cVar1 - 10U) < 4))))) {
    pcVar2 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar2;
  }
  pcVar2 = strchr(pcVar3,0xd);
  if (((pcVar2 != (char *)0x0) || (pcVar2 = strchr(pcVar3,10), pcVar2 != (char *)0x0)) ||
     (pcVar2 = strchr(pcVar3,0), pcVar2 != (char *)0x0)) {
    for (; (pcVar3 < pcVar2 &&
           (((cVar1 = *pcVar2, cVar1 == ' ' || (cVar1 == '\t')) || ((byte)(cVar1 - 10U) < 4))));
        pcVar2 = pcVar2 + -1) {
    }
    _Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)(pcVar2 + (2 - (longlong)pcVar3));
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,pcVar3,(size_t)(pcVar2 + (1 - (longlong)pcVar3)));
      pcVar2[(longlong)_Dst + (1 - (longlong)pcVar3)] = '\0';
      return _Dst;
    }
  }
  return (void *)0x0;
}



// FUNCTION 144f1d840 FUN_144f1d840 body=141 status=ok
// SIG undefined FUN_144f1d840(void)

longlong FUN_144f1d840(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if ((*(char *)(param_2 + 0x2cd) == '\0') || (*(char *)(param_1 + 0xab5) == '\0')) {
    plVar1 = *(longlong **)(param_1 + 0x348);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x6a8);
  }
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    iVar2 = FUN_144f195b0(*plVar1,param_3,param_4);
    if ((iVar2 != 0) && ((byte)(*(char *)(*plVar1 + param_4) - 0x3aU) < 2)) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return *plVar1;
}



// FUNCTION 144f1d8d0 FUN_144f1d8d0 body=637 status=ok
// SIG undefined FUN_144f1d8d0(void)

int FUN_144f1d8d0(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                 longlong param_5,undefined4 param_6)

{
  int iVar1;
  void *_Src;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong local_res10 [2];
  longlong *local_res20;
  
  lVar5 = *(longlong *)(param_2 + 0x20);
  local_res20 = param_4;
  _Src = (void *)FUN_144f07e80();
  uVar2 = FUN_144f07ea0(param_1);
  uVar3 = uVar2 - param_5;
  if ((((*(byte *)(*(longlong *)(lVar5 + 0x2e8) + 0x8c) & 1) == 0) &&
      (1 < (byte)(*(char *)(lVar5 + 0x10c) - 2U))) || (0x13 < *(byte *)(lVar5 + 0x4d9))) {
    lVar5 = *(longlong *)(param_2 + 0x330);
    uVar4 = uVar2;
    if ((lVar5 != 0) && (lVar5 < param_5)) {
      uVar4 = (lVar5 - param_5) + uVar2;
    }
    if ((param_3 != (longlong *)0x0) && (*(uint *)(param_2 + 0x6d0) < uVar4)) {
      uVar4 = (ulonglong)*(uint *)(param_2 + 0x6d0);
    }
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x330);
    uVar7 = uVar2;
    if ((lVar5 != 0) && (lVar5 < param_5)) {
      uVar7 = (lVar5 - param_5) + uVar2;
    }
    iVar1 = FUN_144f24bb0(param_2);
    if (iVar1 != 0) {
      FUN_144f07d10(param_1);
      return iVar1;
    }
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x6d0);
    if (uVar7 <= *(uint *)(param_2 + 0x6d0)) {
      uVar4 = uVar7;
    }
    memcpy(*(void **)(param_2 + 0xce0),_Src,uVar4);
    _Src = *(void **)(param_2 + 0xce0);
  }
  iVar1 = FUN_144f15180(param_2,param_6,_Src,uVar4,local_res10);
  uVar4 = local_res10[0];
  if (iVar1 == 0) {
    uVar7 = local_res10[0];
    if (uVar3 < local_res10[0]) {
      uVar7 = uVar3;
    }
    FUN_144f149e0(param_2,2,_Src,uVar7);
    lVar5 = uVar4 - uVar7;
    if (lVar5 != 0) {
      FUN_144f149e0(param_2,4,uVar7 + (longlong)_Src,lVar5);
    }
    *local_res20 = *local_res20 + (longlong)(int)local_res10[0];
    if (param_3 == (longlong *)0x0) {
      if (local_res10[0] != uVar2) {
        return 0x37;
      }
    }
    else {
      *(longlong *)(param_2 + 0x108) = *(longlong *)(param_2 + 0x108) + lVar5;
      FUN_144f25da0(param_2,*(undefined8 *)(param_2 + 0x108));
      if (local_res10[0] != uVar2) {
        lVar6 = uVar2 - local_res10[0];
        lVar5 = FUN_144f07e80(param_1);
        param_3[2] = *(longlong *)(param_2 + 0x1218);
        param_3[3] = *(longlong *)(param_2 + 0x1220);
        param_3[4] = param_3[1];
        param_3[5] = *param_3;
        param_3[6] = param_2;
        *(code **)(param_2 + 0x1218) = FUN_144f22450;
        *(longlong **)(param_2 + 0x1220) = param_3;
        param_3[1] = lVar5 + local_res10[0];
        *param_3 = lVar6;
        *(ulonglong *)(param_2 + 0x110) = uVar3 - uVar7;
        lVar5 = param_1[1];
        param_3[10] = *param_1;
        param_3[0xb] = lVar5;
        lVar5 = param_1[2];
        lVar6 = param_1[3];
        *(undefined4 *)(param_3 + 7) = 1;
        param_3[0xc] = lVar5;
        param_3[0xd] = lVar6;
        return 0;
      }
      *(undefined4 *)(param_3 + 7) = 2;
    }
  }
  FUN_144f07d10(param_1);
  *(undefined8 *)(param_2 + 0x110) = 0;
  return iVar1;
}



// FUNCTION 144f1db50 FUN_144f1db50 body=363 status=ok
// SIG undefined FUN_144f1db50(void)

void FUN_144f1db50(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [32];
  undefined *local_d8;
  undefined4 local_d0;
  undefined *local_c8;
  int local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x530) != '\0') {
    iVar2 = FUN_1452b1c90(*(undefined8 *)(param_1 + 0x528),&local_98);
    if (iVar2 == 0) {
      cVar1 = *(char *)(param_1 + 0x530);
      if (cVar1 == '\x01') {
        pcVar4 = "If-Modified-Since";
        uVar5 = 0x11;
      }
      else if (cVar1 == '\x02') {
        pcVar4 = "If-Unmodified-Since";
        uVar5 = 0x13;
      }
      else {
        if (cVar1 != '\x03') goto LAB_144f1dcab;
        pcVar4 = "Last-Modified";
        uVar5 = 0xd;
      }
      lVar3 = FUN_144f23930(param_1,pcVar4,uVar5);
      if (lVar3 == 0) {
        iVar2 = local_80 + -1;
        if (local_80 == 0) {
          iVar2 = 6;
        }
        local_a8 = local_98;
        local_c0 = local_84 + 0x76c;
        local_b0 = local_94;
        local_b8 = local_90;
        local_c8 = (&PTR_DAT_149d24a00)[local_88];
        local_d0 = local_8c;
        local_d8 = (&PTR_DAT_149d249c0)[iVar2];
        FUN_144f2b7e0(local_68,0x50,"%s: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",pcVar4);
        FUN_144f07d50(param_2,local_68);
      }
    }
    else {
      FUN_144f14b70(param_1,"Invalid TIMEVALUE");
    }
  }
LAB_144f1dcab:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144f1dcd0 FUN_144f1dcd0 body=824 status=ok
// SIG undefined FUN_144f1dcd0(void)

int FUN_144f1dcd0(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_38 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (param_2 == '\0') {
    if ((*(char *)(lVar1 + 0x2c8) != '\0') && (*(char *)(lVar1 + 0x2cb) == '\0')) {
      lVar10 = 1;
      local_38[0] = *(undefined8 *)(param_1 + 0x348);
      if (*(char *)(param_1 + 0xab5) != '\0') {
        lVar10 = 2;
        local_38[1] = *(undefined8 *)(param_1 + 0x6a8);
      }
      goto LAB_144f1dd69;
    }
LAB_144f1dd5d:
    local_38[0] = *(undefined8 *)(param_1 + 0x348);
  }
  else {
    if (*(char *)(param_1 + 0xab5) == '\0') goto LAB_144f1dd5d;
    local_38[0] = *(undefined8 *)(param_1 + 0x6a8);
  }
  lVar10 = 1;
LAB_144f1dd69:
  lVar11 = 0;
  do {
    for (plVar2 = (longlong *)local_38[lVar11]; plVar2 != (longlong *)0x0;
        plVar2 = (longlong *)plVar2[1]) {
      pcVar8 = (char *)0x0;
      pcVar7 = strchr((char *)*plVar2,0x3a);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = strchr((char *)*plVar2,0x3b);
        if (pcVar7 != (char *)0x0) {
          cVar3 = pcVar7[1];
          pcVar9 = pcVar7 + 1;
          if (cVar3 != '\0') {
            do {
              if ((cVar3 != ' ') && (cVar3 != '\t')) {
                if (cVar3 < '\n') break;
                if ('\r' < cVar3) goto LAB_144f1dfbb;
              }
              cVar3 = pcVar9[1];
              pcVar9 = pcVar9 + 1;
            } while (cVar3 != '\0');
            if (cVar3 != '\0') goto LAB_144f1dfbb;
          }
          if (pcVar9[-1] == ';') {
            pcVar8 = (char *)(*(code *)PTR__strdup_14c6d9f38)(*plVar2);
            if (pcVar8 == (char *)0x0) {
              FUN_144f07d10(param_3);
              return 0x1b;
            }
            pcVar8[(longlong)(pcVar9 + (-1 - *plVar2))] = ':';
            pcVar7 = pcVar8 + (longlong)(pcVar9 + (-1 - *plVar2));
          }
          if (pcVar7 != (char *)0x0) goto LAB_144f1de27;
        }
      }
      else {
LAB_144f1de27:
        if (pcVar7 != (char *)*plVar2) {
          cVar3 = pcVar7[1];
          if (cVar3 == '\0') {
LAB_144f1de66:
            if (pcVar8 == (char *)0x0) goto LAB_144f1dfbb;
          }
          else {
            do {
              if ((cVar3 != ' ') && (cVar3 != '\t')) {
                if (cVar3 < '\n') break;
                if ('\r' < cVar3) goto LAB_144f1de6f;
              }
              cVar3 = pcVar7[2];
              pcVar7 = pcVar7 + 1;
            } while (cVar3 != '\0');
            if (cVar3 == '\0') goto LAB_144f1de66;
          }
LAB_144f1de6f:
          iVar6 = 0;
          iVar5 = 0;
          pcVar7 = (char *)*plVar2;
          if (pcVar8 != (char *)0x0) {
            pcVar7 = pcVar8;
          }
          if ((((((*(longlong *)(param_1 + 0x1380) == 0) ||
                 (iVar4 = FUN_144f195b0(pcVar7,"Host:",5), iVar4 == 0)) &&
                ((*(char *)(param_1 + 0x13c2) != '\x02' ||
                 (iVar4 = FUN_144f195b0(pcVar7,"Content-Type:",0xd), iVar4 == 0)))) &&
               ((*(char *)(param_1 + 0x13c2) != '\x03' ||
                (iVar4 = FUN_144f195b0(pcVar7,"Content-Type:",0xd), iVar4 == 0)))) &&
              ((iVar6 = iVar5, *(char *)(lVar1 + 0x2d8) == '\0' ||
               (iVar5 = FUN_144f195b0(pcVar7,"Content-Length:",0xf), iVar5 == 0)))) &&
             ((((*(longlong *)(param_1 + 0x1398) == 0 ||
                (iVar5 = FUN_144f195b0(pcVar7,"Connection:",0xb), iVar5 == 0)) &&
               ((*(byte *)(lVar1 + 0x4d9) < 0x14 ||
                (iVar5 = FUN_144f195b0(pcVar7,"Transfer-Encoding:",0x12), iVar5 == 0)))) &&
              (((iVar5 = FUN_144f195b0(pcVar7,"Authorization:",0xe), iVar5 == 0 &&
                (iVar5 = FUN_144f195b0(pcVar7,"Cookie:",7), iVar5 == 0)) ||
               (cVar3 = FUN_1452db800(param_1), cVar3 != '\0')))))) {
            iVar6 = FUN_144f07d70(param_3,&DAT_149c07998,pcVar7);
          }
          if (pcVar8 != (char *)0x0) {
            (*(code *)PTR_free_14c6d9f28)(pcVar8);
          }
          if (iVar6 != 0) {
            return iVar6;
          }
        }
      }
LAB_144f1dfbb:
    }
    lVar11 = lVar11 + 1;
    if (lVar10 <= lVar11) {
      return 0;
    }
  } while( true );
}



// FUNCTION 144f1e010 FUN_144f1e010 body=810 status=ok
// SIG undefined FUN_144f1e010(void)

undefined8 FUN_144f1e010(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *_Str;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res8;
  longlong local_48 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (param_2 == '\0') {
    if ((*(char *)(lVar1 + 0x2c8) != '\0') && (*(char *)(lVar1 + 0x2cb) == '\0')) {
      lVar10 = 1;
      local_48[0] = *(longlong *)(param_1 + 0x348);
      if (*(char *)(param_1 + 0xab5) != '\0') {
        lVar10 = 2;
        local_48[1] = *(undefined8 *)(param_1 + 0x6a8);
      }
      goto LAB_144f1e0a3;
    }
LAB_144f1e097:
    local_48[0] = *(longlong *)(param_1 + 0x348);
  }
  else {
    if (*(char *)(param_1 + 0xab5) == '\0') goto LAB_144f1e097;
    local_48[0] = *(longlong *)(param_1 + 0x6a8);
  }
  lVar10 = 1;
LAB_144f1e0a3:
  local_res8 = 0;
  do {
    for (puVar2 = (undefined8 *)local_48[local_res8]; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)puVar2[1]) {
      pcVar5 = strchr((char *)*puVar2,0x3a);
      _Str = (char *)*puVar2;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = strchr(_Str,0x3b);
        if (pcVar5 != (char *)0x0) {
          _Str = (char *)*puVar2;
          pcVar7 = pcVar5 + 1;
          lVar8 = (longlong)pcVar5 - (longlong)_Str;
          cVar3 = *pcVar7;
          if (cVar3 != '\0') {
            do {
              if ((cVar3 != ' ') && (cVar3 != '\t')) {
                if (cVar3 < '\n') break;
                if ('\r' < cVar3) goto LAB_144f1e2f7;
              }
              cVar3 = pcVar7[1];
              pcVar7 = pcVar7 + 1;
            } while (cVar3 != '\0');
            if (cVar3 != '\0') goto LAB_144f1e2f7;
          }
          pcVar7 = "";
          lVar9 = 0;
LAB_144f1e196:
          if ((((((*(longlong *)(param_1 + 0x1380) == 0) || (lVar8 != 5)) ||
                (iVar4 = FUN_144f195b0(_Str,"Host:",5), iVar4 == 0)) &&
               (((*(char *)(param_1 + 0x13c2) != '\x02' || (lVar8 != 0xd)) ||
                (iVar4 = FUN_144f195b0(_Str,"Content-Type:",0xd), iVar4 == 0)))) &&
              (((*(char *)(param_1 + 0x13c2) != '\x03' || (lVar8 != 0xd)) ||
               (iVar4 = FUN_144f195b0(_Str,"Content-Type:",0xd), iVar4 == 0)))) &&
             ((((*(char *)(lVar1 + 0x2d8) == '\0' || (lVar8 != 0xf)) ||
               (iVar4 = FUN_144f195b0(_Str,"Content-Length:",0xf), iVar4 == 0)) &&
              (((*(longlong *)(param_1 + 0x1398) == 0 || (lVar8 != 0xb)) ||
               (iVar4 = FUN_144f195b0(_Str,"Connection:",0xb), iVar4 == 0)))))) {
            if ((*(byte *)(lVar1 + 0x4d9) < 0x14) || (lVar8 != 0x12)) {
              if (lVar8 == 0xe) {
                iVar4 = FUN_144f195b0(_Str,"Authorization:",0xe);
              }
              else {
                if (lVar8 != 7) goto LAB_144f1e2d8;
                iVar4 = FUN_144f195b0(_Str,"Cookie:",7);
              }
              if ((iVar4 == 0) || (cVar3 = FUN_1452db800(param_1), cVar3 != '\0'))
              goto LAB_144f1e2d8;
            }
            else {
              iVar4 = FUN_144f195b0(_Str,"Transfer-Encoding:",0x12);
              if (iVar4 == 0) {
LAB_144f1e2d8:
                uVar6 = FUN_1452db3d0(param_3,_Str,lVar8,pcVar7,lVar9);
                if ((int)uVar6 != 0) {
                  return uVar6;
                }
              }
            }
          }
        }
      }
      else {
        cVar3 = pcVar5[1];
        pcVar7 = pcVar5 + 1;
        lVar8 = (longlong)pcVar5 - (longlong)_Str;
        if (cVar3 != '\0') {
          do {
            if ((cVar3 != ' ') && (cVar3 != '\t')) {
              if (cVar3 < '\n') break;
              if ('\r' < cVar3) goto LAB_144f1e119;
            }
            cVar3 = pcVar7[1];
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          if (cVar3 != '\0') {
LAB_144f1e119:
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while (pcVar7[lVar9] != '\0');
            goto LAB_144f1e196;
          }
        }
      }
LAB_144f1e2f7:
    }
    local_res8 = local_res8 + 1;
    if (lVar10 <= local_res8) {
      return 0;
    }
  } while( true );
}



// FUNCTION 144f1e340 FUN_144f1e340 body=176 status=ok
// SIG undefined FUN_144f1e340(void)

void FUN_144f1e340(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_14997f410;
  if (*(char *)(param_3 + 0xab7) == '\0') {
    puVar3 = &DAT_149c058e8;
  }
  do {
    if (param_1 == (undefined8 *)0x0) {
      FUN_144f07d50(param_2,puVar3);
      return;
    }
    pcVar2 = strchr((char *)*param_1,0x3a);
    if ((pcVar2 == (char *)0x0) || (pcVar2[1] != ' ')) {
      FUN_144f14ad0(param_3,"Malformatted trailing header, skipping trailer");
    }
    else {
      iVar1 = FUN_144f07d50(param_2,*param_1);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = FUN_144f07d50(param_2,puVar3);
      if (iVar1 != 0) {
        return;
      }
    }
    param_1 = (undefined8 *)param_1[1];
  } while( true );
}



// FUNCTION 144f1e3f0 FUN_144f1e3f0 body=144 status=ok
// SIG undefined FUN_144f1e3f0(void)

void FUN_144f1e3f0(longlong param_1,longlong param_2,undefined8 *param_3,uint *param_4)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x13c2);
  if (((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 7) != 0) &&
     (*(char *)(param_1 + 0x13d8) != '\0')) {
    uVar2 = 4;
  }
  puVar1 = *(undefined **)(param_1 + 0x750);
  if (puVar1 != (undefined *)0x0) {
LAB_144f1e479:
    *param_3 = puVar1;
    *param_4 = uVar2;
    return;
  }
  if (*(char *)(param_1 + 0x1d4) == '\0') {
    switch(uVar2) {
    default:
      puVar1 = &DAT_149c067b0;
      goto LAB_144f1e479;
    case 1:
    case 2:
    case 3:
      *param_3 = &DAT_149c067a4;
      *param_4 = uVar2;
      return;
    case 4:
      *param_3 = &DAT_149c067ac;
      *param_4 = uVar2;
      return;
    case 5:
      break;
    }
  }
  *param_3 = &DAT_149c0679c;
  *param_4 = uVar2;
  return;
}



// FUNCTION 144f1e4a0 FUN_144f1e4a0 body=606 status=ok
// SIG undefined FUN_144f1e4a0(void)

undefined8 FUN_144f1e4a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *_Str;
  char *pcVar5;
  undefined1 *puVar6;
  longlong lVar7;
  size_t sVar8;
  undefined1 *puVar9;
  size_t _Size;
  
  if (*(char *)(param_1 + 0x13c5) == '\0') {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0xcf0));
    lVar3 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_2 + 0x70));
    *(longlong *)(param_1 + 0xcf0) = lVar3;
    if (lVar3 == 0) {
      return 0x1b;
    }
    *(undefined4 *)(param_1 + 0xcf8) = *(undefined4 *)(param_2 + 0x4c4);
    *(undefined4 *)(param_1 + 0xcfc) = *(undefined4 *)(*(longlong *)(param_2 + 0x2e8) + 0x84);
  }
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1380));
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x1380) = 0;
  lVar4 = FUN_144f23930(param_1,&DAT_149c07670,4);
  if ((lVar4 == 0) ||
     ((*(char *)(param_1 + 0x13c5) != '\0' &&
      (iVar2 = FUN_144f19540(*(undefined8 *)(param_1 + 0xcf0),*(undefined8 *)(param_2 + 0x70)),
      iVar2 == 0)))) {
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x2f0) + 0x84);
    if ((((uVar1 & 2) == 0) || (*(int *)(param_2 + 0x4c4) != 0x1bb)) &&
       (((uVar1 & 1) == 0 || (*(int *)(param_2 + 0x4c4) != 0x50)))) {
      puVar6 = &DAT_14996de1b;
      puVar9 = &DAT_14996de1b;
      if (*(char *)(param_2 + 0x2d3) != '\0') {
        puVar9 = &DAT_149c06564;
        puVar6 = &DAT_149c06568;
      }
      lVar3 = FUN_144f2b8b0("Host: %s%s%s:%d\r\n",puVar6,*(undefined8 *)(param_2 + 0x70),puVar9,
                            *(undefined4 *)(param_2 + 0x4c4));
    }
    else {
      puVar6 = &DAT_14996de1b;
      puVar9 = &DAT_14996de1b;
      if (*(char *)(param_2 + 0x2d3) != '\0') {
        puVar9 = &DAT_149c06564;
        puVar6 = &DAT_149c06568;
      }
      lVar3 = FUN_144f2b8b0("Host: %s%s%s\r\n",puVar6,*(undefined8 *)(param_2 + 0x70),puVar9);
    }
    *(longlong *)(param_1 + 0x1380) = lVar3;
    if (lVar3 == 0) {
      return 0x1b;
    }
    return 0;
  }
  _Str = (char *)FUN_144f1d730(lVar4);
  if (_Str != (char *)0x0) {
    if (*_Str == '\0') {
      (*(code *)PTR_free_14c6d9f28)(_Str);
    }
    else {
      if (*_Str == '[') {
        sVar8 = 0xffffffffffffffff;
        do {
          _Size = sVar8;
          sVar8 = _Size + 1;
        } while (_Str[sVar8] != '\0');
        memmove(_Str,_Str + 1,_Size);
        iVar2 = 0x5d;
      }
      else {
        iVar2 = 0x3a;
      }
      pcVar5 = strchr(_Str,iVar2);
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
      }
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 5000));
      *(char **)(param_1 + 5000) = _Str;
    }
    while (lVar7 = lVar3 + 1, "Host:"[lVar3] == *(char *)(lVar3 + lVar4)) {
      lVar3 = lVar7;
      if (lVar7 == 6) {
        return 0;
      }
    }
    lVar3 = FUN_144f2b8b0("Host:%s\r\n",lVar4 + 5);
    *(longlong *)(param_1 + 0x1380) = lVar3;
    if (lVar3 != 0) {
      return 0;
    }
  }
  return 0x1b;
}



// FUNCTION 144f1e700 FUN_144f1e700 body=561 status=ok
// SIG undefined FUN_144f1e700(void)

ulonglong FUN_144f1e700(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char *_Str;
  longlong local_res8;
  
  pcVar5 = *(char **)(param_1 + 0x930);
  _Str = *(char **)(param_1 + 0x1260);
  if (pcVar5 != (char *)0x0) {
    _Str = pcVar5;
  }
  lVar4 = 0;
  if (pcVar5 == (char *)0x0) {
    lVar4 = *(longlong *)(param_1 + 0x1268);
  }
  if ((*(char *)(param_2 + 0x2c8) == '\0') || (*(char *)(param_2 + 0x2cb) != '\0')) {
    uVar6 = FUN_144f07d50(param_3,_Str);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if (lVar4 == 0) {
      return uVar6 & 0xffffffff;
    }
    uVar3 = FUN_144f07d70(param_3,&DAT_149c07a84,lVar4);
    return (ulonglong)uVar3;
  }
  lVar4 = FUN_1452cb950(*(undefined8 *)(param_1 + 0x1228));
  if (lVar4 != 0) {
    if (((((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_2 + 0x70)) ||
          (iVar2 = FUN_1452cc2c0(lVar4,5), iVar2 == 0)) &&
         (iVar2 = FUN_1452cc2c0(lVar4,9,0), iVar2 == 0)) &&
        ((iVar2 = FUN_144f19540(&DAT_14997dd78,*(undefined8 *)(param_1 + 0x1230)), iVar2 == 0 ||
         ((iVar2 = FUN_1452cc2c0(lVar4,2,0), iVar2 == 0 &&
          (iVar2 = FUN_1452cc2c0(lVar4,3,0,0), iVar2 == 0)))))) &&
       (iVar2 = FUN_1452cbab0(lVar4,0,&local_res8,2), iVar2 == 0)) {
      FUN_1452cb920(lVar4);
      lVar4 = local_res8;
      if (*(longlong *)(param_1 + 0x930) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x930);
      }
      uVar3 = FUN_144f07d50(param_3,lVar4);
      (*(code *)PTR_free_14c6d9f28)(local_res8);
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      iVar2 = FUN_144f19540(&DAT_14997dd58,*(undefined8 *)(param_1 + 0x1230));
      if (iVar2 == 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0xad8) != '\0') {
        pcVar5 = strstr(_Str,";type=");
        if (pcVar5 != (char *)0x0) {
          if (pcVar5[6] == '\0') {
            return 0;
          }
          if (pcVar5[7] != '\0') {
            return 0;
          }
          cVar1 = FUN_144f19630();
          if (((byte)(cVar1 + 0xbfU) < 9) && ((0x109U >> ((byte)(cVar1 + 0xbfU) & 0x1f) & 1) != 0))
          {
            return 0;
          }
        }
        uVar7 = 0x69;
        if (*(char *)(param_1 + 0x13d2) != '\0') {
          uVar7 = 0x61;
        }
        uVar6 = FUN_144f07d70(param_3,";type=%c",uVar7);
        if ((int)uVar6 == 0) {
          return uVar6 & 0xffffffff;
        }
        return uVar6;
      }
      return 0;
    }
    FUN_1452cb920(lVar4);
  }
  return 0x1b;
}



// FUNCTION 144f1e940 FUN_144f1e940 body=2237 status=ok
// SIG undefined FUN_144f1e940(void)

ulonglong FUN_144f1e940(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  __time64_t _Var7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  longlong local_res8;
  
  if (((*(char *)(param_1 + 0x1ce) == '\0') && (*(char *)(param_1 + 0xad5) == '\0')) &&
     (iVar3 = FUN_144f195b0(param_3,"Content-Length:",0xf), iVar3 != 0)) {
    iVar3 = FUN_1452b1ac0(param_3 + 0xf,0,10,&local_res8);
    if (iVar3 == 0) {
      *(longlong *)(param_1 + 0xf0) = local_res8;
      *(longlong *)(param_1 + 0xf8) = local_res8;
      return 0;
    }
    if (iVar3 != 1) {
      FUN_144f14b70(param_1,"Invalid Content-Length: value");
      return 8;
    }
    if (*(longlong *)(param_1 + 0x6f0) != 0) {
      FUN_144f14b70(param_1,"Maximum file size exceeded");
      return 0x3f;
    }
    FUN_144f16220(param_2,2);
    pcVar10 = "Overflow Content-Length: value";
  }
  else {
    iVar3 = FUN_144f195b0(param_3,"Content-Type:",0xd);
    if (iVar3 != 0) {
      pcVar10 = (char *)FUN_144f1d730(param_3);
      if (pcVar10 == (char *)0x0) {
        return 0x1b;
      }
      if (*pcVar10 == '\0') {
        (*(code *)PTR_free_14c6d9f28)(pcVar10);
        return 0;
      }
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1418));
      *(char **)(param_1 + 0x1418) = pcVar10;
      return 0;
    }
    if (((*(char *)(param_2 + 0x4d9) == '\n') && (*(char *)(param_2 + 0x2c8) != '\0')) &&
       (cVar1 = FUN_144f1d660(param_3,"Proxy-Connection:",0x11,"keep-alive",10), cVar1 != '\0')) {
      FUN_144f16220(param_2,0);
      pcVar10 = "HTTP/1.0 proxy connection set to keep alive";
    }
    else if (((*(char *)(param_2 + 0x4d9) == '\v') && (*(char *)(param_2 + 0x2c8) != '\0')) &&
            (cVar1 = FUN_144f1d660(param_3,"Proxy-Connection:",0x11,"close",5), cVar1 != '\0')) {
      FUN_144f16220(param_2,1);
      pcVar10 = "HTTP/1.1 proxy connection set close";
    }
    else if ((*(char *)(param_2 + 0x4d9) == '\n') &&
            (cVar1 = FUN_144f1d660(param_3,"Connection:",0xb,"keep-alive",10), cVar1 != '\0')) {
      FUN_144f16220(param_2,0);
      pcVar10 = "HTTP/1.0 connection set to keep alive";
    }
    else {
      cVar1 = FUN_144f1d660(param_3,"Connection:",0xb,"close",5);
      if (cVar1 != '\0') {
        FUN_144f16220(param_2,2);
        return 0;
      }
      if (*(char *)(param_1 + 0x1ce) == '\0') {
        iVar3 = FUN_144f195b0(param_3,"Transfer-Encoding:",0x12);
        if (iVar3 != 0) {
          uVar5 = FUN_144f19ff0(param_1,param_3 + 0x12,1);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (*(char *)(param_1 + 0x1cf) != (char)uVar5) {
            return 0;
          }
          if (*(char *)(param_1 + 0xac9) == (char)uVar5) {
            return 0;
          }
          FUN_144f16220(param_2,1);
          *(undefined1 *)(param_1 + 0x1d0) = 1;
          return 0;
        }
        if (((*(char *)(param_1 + 0x1ce) == '\0') &&
            (iVar3 = FUN_144f195b0(param_3,"Content-Encoding:",0x11), iVar3 != 0)) &&
           (*(longlong *)(param_1 + 0x768) != 0)) {
          uVar5 = FUN_144f19ff0(param_1,param_3 + 0x11,0);
          if ((int)uVar5 == 0) {
            return 0;
          }
          return uVar5;
        }
      }
      iVar3 = FUN_144f195b0(param_3,"Retry-After:",0xc);
      if (iVar3 != 0) {
        local_res8 = 0;
        FUN_1452b1ac0(param_3 + 0xc,0,10,&local_res8);
        if ((local_res8 == 0) && (lVar6 = FUN_1452b1ce0(param_3 + 0xc), lVar6 != -1)) {
          _Var7 = _time64((__time64_t *)0x0);
          *(longlong *)(param_1 + 0x1428) = lVar6 - _Var7;
          return 0;
        }
        *(longlong *)(param_1 + 0x1428) = local_res8;
        return 0;
      }
      if ((*(char *)(param_1 + 0x1ce) == '\0') &&
         (iVar3 = FUN_144f195b0(param_3,"Content-Range:",0xe), iVar3 != 0)) {
        lVar6 = param_3 + 0xe;
        cVar1 = *(char *)(param_3 + 0xe);
        while ((cVar1 != '\0' && (((cVar1 < '0' || ('9' < cVar1)) && (cVar1 != '*'))))) {
          pcVar10 = (char *)(lVar6 + 1);
          lVar6 = lVar6 + 1;
          cVar1 = *pcVar10;
        }
        if (9 < (byte)(cVar1 - 0x30U)) {
          *(undefined8 *)(param_1 + 0x11c0) = 0;
          return 0;
        }
        iVar3 = FUN_1452b1ac0(lVar6,0,10,param_1 + 0x148);
        if (iVar3 != 0) {
          return 0;
        }
        if (*(longlong *)(param_1 + 0x11c0) != *(longlong *)(param_1 + 0x148)) {
          return 0;
        }
        *(undefined1 *)(param_1 + 0x1cb) = 1;
        return 0;
      }
      if (((*(longlong *)(param_1 + 0xaf0) != 0) && (*(char *)(param_1 + 0x13d1) != '\0')) &&
         (iVar3 = FUN_144f195b0(param_3,"Set-Cookie:",0xb), iVar3 != 0)) {
        pcVar10 = *(char **)(param_1 + 5000);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = *(char **)(param_2 + 0x70);
        }
        if ((((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 2) == 0) &&
            (iVar3 = FUN_144f19540("localhost",pcVar10), iVar3 == 0)) &&
           (iVar3 = strcmp(pcVar10,"127.0.0.1"), iVar3 != 0)) {
          lVar6 = 0;
          do {
            lVar9 = lVar6 + 1;
            if (pcVar10[lVar6] != (&DAT_149c07360)[lVar6]) {
              uVar12 = 0;
              goto LAB_144f1eea7;
            }
            lVar6 = lVar9;
          } while (lVar9 != 4);
        }
        uVar12 = 1;
LAB_144f1eea7:
        FUN_144bbeca0(param_1,2,2);
        FUN_144f04b50(param_1,*(undefined8 *)(param_1 + 0xaf0),1,0,param_3 + 0xb,pcVar10,
                      *(undefined8 *)(param_1 + 0x1260),uVar12);
        FUN_144bbece0(param_1,2);
        return 0;
      }
      if (((*(char *)(param_1 + 0x1ce) == '\0') &&
          (iVar3 = FUN_144f195b0(param_3,"Last-Modified:",0xe), iVar3 != 0)) &&
         ((*(char *)(param_1 + 0x530) != '\0' || (*(char *)(param_1 + 0xaba) != '\0')))) {
        uVar8 = FUN_1452b1ce0(param_3 + 0xe);
        *(undefined8 *)(param_1 + 0x178) = uVar8;
        if (*(char *)(param_1 + 0xaba) == '\0') {
          return 0;
        }
        *(undefined8 *)(param_1 + 0x13f8) = uVar8;
        return 0;
      }
      iVar3 = FUN_144f195b0(param_3,"WWW-Authenticate:",0x11);
      if (((iVar3 != 0) && (iVar3 = *(int *)(param_1 + 0x150), iVar3 == 0x191)) ||
         ((iVar3 = FUN_144f195b0(param_3,"Proxy-authenticate:",0x13), iVar3 != 0 &&
          (iVar3 = *(int *)(param_1 + 0x150), iVar3 == 0x197)))) {
        lVar6 = FUN_144f1d730(param_3);
        if (lVar6 == 0) {
          return 0x1b;
        }
        uVar4 = FUN_144f20010(param_1,iVar3 == 0x197,lVar6);
        (*(code *)PTR_free_14c6d9f28)(lVar6);
        if (uVar4 == 0) {
          return 0;
        }
        return (ulonglong)uVar4;
      }
      if (((*(int *)(param_1 + 0x150) - 300U < 100) &&
          (iVar3 = FUN_144f195b0(param_3,"Location:",9), iVar3 != 0)) &&
         (*(longlong *)(param_1 + 0x188) == 0)) {
        pcVar10 = (char *)FUN_144f1d730(param_3);
        if (pcVar10 == (char *)0x0) {
          return 0x1b;
        }
        if (*pcVar10 == '\0') {
          (*(code *)PTR_free_14c6d9f28)(pcVar10);
          return 0;
        }
        *(char **)(param_1 + 0x188) = pcVar10;
        if (*(char *)(param_1 + 0xac8) == '\0') {
          return 0;
        }
        lVar6 = (*(code *)PTR__strdup_14c6d9f38)(pcVar10);
        *(longlong *)(param_1 + 400) = lVar6;
        if (lVar6 != 0) {
          uVar5 = FUN_144f21f90(param_1,param_2);
          if ((int)uVar5 == 0) {
            *(undefined1 *)(param_1 + 0x13c5) = 1;
            return uVar5;
          }
          return uVar5;
        }
        return 0x1b;
      }
      if (((*(longlong *)(param_1 + 0xaf8) == 0) ||
          (iVar3 = FUN_144f195b0(param_3,"Strict-Transport-Security:",0x1a), iVar3 == 0)) ||
         ((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) & 1) == 0)) {
        if (*(longlong *)(param_1 + 0xb00) != 0) {
          uVar11 = 8;
          iVar3 = FUN_144f195b0(param_3,"Alt-Svc:",8);
          if ((iVar3 != 0) && ((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x8c) & 1) != 0)) {
            if (*(char *)(param_2 + 0x4d9) == '\x1e') {
              uVar11 = 0x20;
            }
            else if (*(char *)(param_2 + 0x4d9) == '\x14') {
              uVar11 = 0x10;
            }
            uVar2 = FUN_144f17020(*(undefined4 *)(param_2 + 0x4c4));
            uVar5 = FUN_144f17b50(param_1,*(undefined8 *)(param_1 + 0xb00),param_3 + 8,uVar11,
                                  *(undefined8 *)(param_2 + 0x70),uVar2);
            if ((int)uVar5 == 0) {
              return 0;
            }
            return uVar5;
          }
        }
        if ((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 0x40000) == 0) {
          return 0;
        }
        uVar5 = FUN_1452c4fb0(param_1,param_3);
        return uVar5;
      }
      iVar3 = FUN_144f18980(*(undefined8 *)(param_1 + 0xaf8),*(undefined8 *)(param_2 + 0x70),
                            param_3 + 0x1a);
      if (iVar3 == 0) {
        return 0;
      }
      pcVar10 = "Illegal STS header skipped";
    }
  }
  FUN_144f14ad0(param_1,pcVar10);
  return 0;
}



// FUNCTION 144f1f200 FUN_144f1f200 body=669 status=ok
// SIG undefined FUN_144f1f200(void)

ulonglong FUN_144f1f200(longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  plVar4 = *(longlong **)(param_1 + 0x1a8);
  *plVar4 = 0;
  if (param_3 == 2) {
    if (*(longlong *)(param_1 + 0x1290) == 0) {
      lVar9 = (*(code *)PTR_calloc_14c6d9f40)(0x1b8,1);
      *(longlong *)(param_1 + 0x1290) = lVar9;
      if (lVar9 == 0) {
        return 0x1b;
      }
      FUN_144f08d20(lVar9);
      uVar8 = FUN_1452dadd0(param_1,*(undefined8 *)(param_1 + 0x1290),
                            *(undefined8 *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x1218));
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      lVar9 = *(longlong *)(param_1 + 0x1290);
      goto LAB_144f1f2ad;
    }
  }
  else if (param_3 == 3) {
    lVar9 = param_1 + 0x358;
LAB_144f1f2ad:
    *(longlong *)(param_1 + 0x1288) = lVar9;
  }
  else {
    *(undefined8 *)(param_1 + 0x1288) = 0;
  }
  if (*(longlong *)(param_1 + 0x1288) != 0) {
    lVar9 = FUN_144f23930(param_1,"Content-Type",0xc);
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x1288) + 0x14);
    *puVar1 = *puVar1 | 2;
    if (lVar9 == 0) {
      pcVar10 = "multipart/form-data";
      if (*(int *)(*(longlong *)(param_1 + 0x1288) + 0x10) != 4) {
        pcVar10 = (char *)0x0;
      }
    }
    else {
      pcVar10 = (char *)(lVar9 + 0xd);
      cVar2 = *pcVar10;
      while (cVar2 == ' ') {
        pcVar10 = pcVar10 + 1;
        cVar2 = *pcVar10;
      }
    }
    FUN_144f08bc0(*(undefined8 *)(param_1 + 0x1288),*(undefined8 *)(param_1 + 0x348),0);
    uVar7 = FUN_144f093b0(param_1,*(undefined8 *)(param_1 + 0x1288),pcVar10,0,CONCAT44(uVar11,1));
    FUN_144f08bc0(*(undefined8 *)(param_1 + 0x1288),0,0);
    if ((uVar7 != 0) || (uVar7 = FUN_144f09ad0(*(undefined8 *)(param_1 + 0x1288)), uVar7 != 0)) {
      return (ulonglong)uVar7;
    }
    lVar9 = FUN_144f09970(*(undefined8 *)(param_1 + 0x1288));
    *plVar4 = lVar9;
  }
  lVar9 = FUN_144f23930(param_1,"Transfer-Encoding",0x11);
  if (lVar9 == 0) {
    if (((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 3) == 0) ||
       (((1 < param_3 - 2U || (-1 < *plVar4)) &&
        (((*(char *)(param_1 + 0x13d8) == '\0' && (param_3 != 1)) ||
         (*(longlong *)(param_1 + 0x11f8) != -1)))))) {
      *(undefined1 *)(param_1 + 0x1d1) = 0;
    }
    else if (*(char *)(param_2 + 0x2d8) == '\0') {
      if ((*(char *)(param_1 + 0x13c1) == '\n') || (bVar3 = *(byte *)(param_2 + 0x4d9), bVar3 == 10)
         ) {
LAB_144f1f452:
        FUN_144f14b70(param_1,"Chunky upload is not supported by HTTP 1.0");
        return 0x19;
      }
      if (*(char *)(param_1 + 0x13c0) == '\x01') {
        if (bVar3 < 0xb) goto LAB_144f1f452;
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_144f1f452;
      if (bVar3 < 0x14) {
        *(undefined1 *)(param_1 + 0x1d1) = 1;
      }
    }
    if (*(char *)(param_1 + 0x1d1) != '\0') {
      *param_4 = "Transfer-Encoding: chunked\r\n";
    }
  }
  else {
    uVar6 = FUN_144f1d660(lVar9,"Transfer-Encoding:",0x12,"chunked",7);
    *(undefined1 *)(param_1 + 0x1d1) = uVar6;
  }
  return 0;
}



// FUNCTION 144f1f4a0 FUN_144f1f4a0 body=1834 status=ok
// SIG undefined FUN_144f1f4a0(void)

void FUN_144f1f4a0(ulonglong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined4 local_50;
  char local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = *(ulonglong **)(param_1 + 0x1a8);
  uVar11 = 0;
  uVar9 = 0;
  if (param_4 == 1) {
    if (*(char *)(param_2 + 0x2d8) == '\0') {
      uVar3 = *(ulonglong *)(param_1 + 0x11f8);
      *puVar1 = uVar3;
      if (uVar3 != 0xffffffffffffffff) goto LAB_144f1f89c;
    }
    else {
      *puVar1 = 0;
LAB_144f1f89c:
      if ((*(char *)(param_1 + 0x1d1) == '\0') &&
         (((*(char *)(param_2 + 0x2d8) != '\0' ||
           (lVar7 = FUN_144f23930(param_1,"Content-Length",0xe), lVar7 == 0)) &&
          (iVar6 = FUN_144f07d70(param_3,"Content-Length: %I64d\r\n",*puVar1), iVar6 != 0))))
      goto LAB_144f1fbbd;
    }
    lVar7 = FUN_144f23930(param_1,"Content-Type",0xc);
    if ((lVar7 == 0) &&
       (iVar6 = thunk_FUN_144f07eb0(param_3,"Content-Type: application/x-www-form-urlencoded\r\n",
                                    0x31), iVar6 != 0)) goto LAB_144f1fbbd;
    lVar7 = FUN_144f23930(param_1,"Expect",6);
    if (lVar7 == 0) {
      if (*puVar1 < 0x100001) {
        *(undefined1 *)(param_1 + 0x13cb) = 0;
      }
      else {
        iVar6 = FUN_144f22550(param_1,param_2,param_3);
        if (iVar6 != 0) goto LAB_144f1fbbd;
      }
    }
    else {
      local_58 = 0xc;
      uVar5 = FUN_144f1d660(lVar7,"Expect:",7,"100-continue");
      *(undefined1 *)(param_1 + 0x13cb) = uVar5;
    }
    if (*(ulonglong *)(param_1 + 0x218) == 0) {
      iVar6 = thunk_FUN_144f07eb0(param_3,&DAT_149c058e8,2);
      if (iVar6 != 0) goto LAB_144f1fbbd;
      if ((*(char *)(param_1 + 0x1d1) != '\0') && (*(char *)(param_2 + 0x2d8) != '\0')) {
        uVar12 = 5;
        pcVar8 = "0\r\n\r\n";
        goto LAB_144f1fadd;
      }
      if (*(longlong *)(param_1 + 0x11f8) != 0) {
        uVar11 = 0xffffffffffffffff;
        if (*puVar1 != 0) {
          uVar11 = *puVar1;
        }
        FUN_144f25d20(param_1,uVar11);
        if (*(char *)(param_2 + 0x2d8) == '\0') {
          puVar1[1] = (ulonglong)(puVar1 + 1);
        }
      }
    }
    else if ((*(char *)(param_1 + 0x13cb) == '\0') && ((longlong)*puVar1 < 0x10000)) {
      iVar6 = thunk_FUN_144f07eb0(param_3,&DAT_149c058e8,2);
      if (iVar6 != 0) goto LAB_144f1fbbd;
      if (*(char *)(param_1 + 0x1d1) == '\0') {
        iVar6 = thunk_FUN_144f07eb0(param_3,*(undefined8 *)(param_1 + 0x218),*puVar1);
        uVar9 = *puVar1;
      }
      else {
        if (*puVar1 != 0) {
          FUN_144f2b7e0(local_48,0x10,&DAT_149c07b8c,*puVar1 & 0xffffffff);
          iVar6 = FUN_144f07d50(param_3,local_48);
          if (iVar6 != 0) goto LAB_144f1fbbd;
          uVar9 = *puVar1;
          lVar7 = -1;
          do {
            lVar10 = lVar7 + 1;
            lVar4 = lVar7 + 1;
            lVar7 = lVar10;
          } while (local_48[lVar4] != '\0');
          iVar6 = thunk_FUN_144f07eb0(param_3,*(undefined8 *)(param_1 + 0x218));
          if (iVar6 == 0) {
            iVar6 = thunk_FUN_144f07eb0(param_3,&DAT_149c058e8,2);
          }
          uVar11 = lVar10 + uVar9 + 2;
          if (iVar6 != 0) goto LAB_144f1fbbd;
        }
        iVar6 = thunk_FUN_144f07eb0(param_3,"0\r\n\r\n",5);
        uVar9 = uVar11 + 5;
      }
      if (iVar6 != 0) goto LAB_144f1fbbd;
      FUN_144f25d20(param_1,*puVar1);
    }
    else {
      puVar1[1] = *(ulonglong *)(param_1 + 0x218);
      *(undefined4 *)(puVar1 + 7) = 2;
      puVar1[6] = param_1;
      *(code **)(param_1 + 0x1218) = FUN_144f22450;
      *(ulonglong **)(param_1 + 0x1220) = puVar1;
      FUN_144f25d20(param_1,*puVar1);
      uVar12 = 2;
      pcVar8 = "\r\n";
LAB_144f1fadd:
      iVar6 = thunk_FUN_144f07eb0(param_3,pcVar8,uVar12);
      uVar9 = uVar11;
      if (iVar6 != 0) goto LAB_144f1fbbd;
    }
    local_50 = 0;
    local_58 = uVar9;
    iVar6 = FUN_144f1d8d0(param_3,param_1,*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1400);
    if (iVar6 != 0) {
      FUN_144f14b70(param_1,"Failed sending HTTP POST request");
      goto LAB_144f1fbbd;
    }
    uVar9 = puVar1[1];
LAB_144f1fb9a:
    local_58 = CONCAT44(local_58._4_4_,(uVar9 != 0) - 1);
  }
  else {
    if ((param_4 == 2) || (param_4 == 3)) {
      if (*(char *)(param_2 + 0x2d8) != '\0') {
        iVar6 = thunk_FUN_144f07eb0(param_3,"Content-Length: 0\r\n\r\n",0x15);
        if (iVar6 != 0) goto LAB_144f1fbbd;
        local_50 = 0;
        local_58 = 0;
        iVar6 = FUN_144f1d8d0(param_3,param_1,*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1400);
        if (iVar6 != 0) {
          FUN_144f14b70(param_1,"Failed sending POST request");
          goto LAB_144f1fbbd;
        }
        goto LAB_144f1f551;
      }
      *(ulonglong *)(param_1 + 0x11f8) = *puVar1;
      if ((((*puVar1 != 0xffffffffffffffff) && (*(char *)(param_1 + 0x1d1) == '\0')) &&
          (lVar7 = FUN_144f23930(param_1,"Content-Length",0xe), lVar7 == 0)) &&
         (iVar6 = FUN_144f07d70(param_3,"Content-Length: %I64d\r\n",*puVar1), iVar6 != 0))
      goto LAB_144f1fbbd;
      for (puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x1288) + 0x48);
          puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[1]) {
        iVar6 = FUN_144f07d70(param_3,&DAT_149c07998,*puVar2);
        if (iVar6 != 0) goto LAB_144f1fbbd;
      }
      lVar7 = FUN_144f23930(param_1,"Expect",6);
      if (lVar7 == 0) {
        if (*puVar1 < 0x100001) {
          *(undefined1 *)(param_1 + 0x13cb) = 0;
        }
        else {
          iVar6 = FUN_144f22550(param_1,param_2,param_3);
          if (iVar6 != 0) goto LAB_144f1fbbd;
        }
      }
      else {
        local_58 = 0xc;
        uVar5 = FUN_144f1d660(lVar7,"Expect:",7,"100-continue");
        *(undefined1 *)(param_1 + 0x13cb) = uVar5;
      }
      iVar6 = thunk_FUN_144f07eb0(param_3,&DAT_149c058e8,2);
      if (iVar6 != 0) goto LAB_144f1fbbd;
      FUN_144f25d20(param_1,*puVar1);
      local_50 = 0;
      *(code **)(param_1 + 0x1218) = FUN_144f09a80;
      *(undefined8 *)(param_1 + 0x1220) = *(undefined8 *)(param_1 + 0x1288);
      *(undefined4 *)(puVar1 + 7) = 2;
      local_58 = 0;
      iVar6 = FUN_144f1d8d0(param_3,param_1,*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1400);
      if (iVar6 != 0) {
        FUN_144f14b70(param_1,"Failed sending POST request");
        goto LAB_144f1fbbd;
      }
LAB_144f1f691:
      uVar9 = *puVar1;
      goto LAB_144f1fb9a;
    }
    if (param_4 == 4) {
      if (*(char *)(param_2 + 0x2d8) == '\0') {
        uVar9 = *(ulonglong *)(param_1 + 0x11f8);
        *puVar1 = uVar9;
        if (uVar9 != 0xffffffffffffffff) goto LAB_144f1f57c;
      }
      else {
        *puVar1 = 0;
LAB_144f1f57c:
        if (((*(char *)(param_1 + 0x1d1) == '\0') &&
            ((*(char *)(param_2 + 0x2d8) != '\0' ||
             (lVar7 = FUN_144f23930(param_1,"Content-Length",0xe), lVar7 == 0)))) &&
           (iVar6 = FUN_144f07d70(param_3,"Content-Length: %I64d\r\n",*puVar1), iVar6 != 0))
        goto LAB_144f1fbbd;
      }
      lVar7 = FUN_144f23930(param_1,"Expect",6);
      if (lVar7 == 0) {
        if (((0x100000 < (longlong)*puVar1) || ((longlong)*puVar1 < 0)) &&
           (iVar6 = FUN_144f22550(param_1,param_2,param_3), iVar6 != 0)) goto LAB_144f1fbbd;
      }
      else {
        local_58 = 0xc;
        uVar5 = FUN_144f1d660(lVar7,"Expect:",7,"100-continue");
        *(undefined1 *)(param_1 + 0x13cb) = uVar5;
      }
      iVar6 = thunk_FUN_144f07eb0(param_3,&DAT_149c058e8,2);
      if (iVar6 != 0) goto LAB_144f1fbbd;
      FUN_144f25d20(param_1,*puVar1);
      local_50 = 0;
      local_58 = 0;
      iVar6 = FUN_144f1d8d0(param_3,param_1,*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1400);
      if (iVar6 != 0) {
        FUN_144f14b70(param_1,"Failed sending PUT request");
        goto LAB_144f1fbbd;
      }
      goto LAB_144f1f691;
    }
    iVar6 = thunk_FUN_144f07eb0(param_3,&DAT_149c058e8,2);
    if (iVar6 != 0) goto LAB_144f1fbbd;
    local_50 = 0;
    local_58 = 0;
    iVar6 = FUN_144f1d8d0(param_3,param_1,*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1400);
    if (iVar6 != 0) {
      FUN_144f14b70(param_1,"Failed sending HTTP request");
      goto LAB_144f1fbbd;
    }
LAB_144f1f551:
    local_58 = CONCAT44(local_58._4_4_,0xffffffff);
  }
  FUN_144f24c20(param_1,0,0xffffffffffffffff,1);
LAB_144f1fbbd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 144f1fbe0 FUN_144f1fbe0 body=725 status=ok
// SIG undefined FUN_144f1fbe0(void)

ulonglong FUN_144f1fbe0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  char *_Str1;
  longlong *plVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  
  uVar12 = 0;
  uVar16 = uVar12;
  if ((*(longlong *)(param_1 + 0x740) != 0) &&
     (lVar6 = FUN_144f23930(param_1,"Cookie",6), uVar16 = 0, lVar6 == 0)) {
    uVar16 = *(ulonglong *)(param_1 + 0x740);
  }
  if ((*(longlong *)(param_1 + 0xaf0) != 0) || (uVar16 != 0)) {
    iVar4 = 0;
    bVar2 = false;
    if ((*(longlong *)(param_1 + 0xaf0) != 0) && (iVar4 = 0, *(char *)(param_1 + 0x13d1) != '\0')) {
      _Str1 = *(char **)(param_1 + 5000);
      if (_Str1 == (char *)0x0) {
        _Str1 = *(char **)(param_2 + 0x70);
      }
      if ((((*(byte *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 2) == 0) &&
          (iVar4 = FUN_144f19540("localhost",_Str1), iVar4 == 0)) &&
         (iVar4 = strcmp(_Str1,"127.0.0.1"), uVar9 = uVar12, iVar4 != 0)) {
        do {
          uVar10 = uVar9 + 1;
          if (_Str1[uVar9] != (&DAT_149c07360)[uVar9]) {
            uVar13 = 0;
            goto LAB_144f1fcda;
          }
          uVar9 = uVar10;
        } while (uVar10 != 4);
      }
      uVar13 = 1;
LAB_144f1fcda:
      FUN_144bbeca0(param_1,2,2);
      plVar7 = (longlong *)
               FUN_144f059a0(param_1,*(undefined8 *)(param_1 + 0xaf0),_Str1,
                             *(undefined8 *)(param_1 + 0x1260),uVar13);
      FUN_144bbece0(param_1,2);
      iVar4 = 0;
      bVar2 = false;
      if (plVar7 != (longlong *)0x0) {
        lVar6 = 8;
        uVar9 = uVar12;
        plVar14 = plVar7;
        do {
          iVar4 = (int)uVar9;
          if (plVar14[2] != 0) {
            if (iVar4 == 0) {
              uVar5 = thunk_FUN_144f07eb0(param_3,"Cookie: ",8);
              uVar12 = (ulonglong)uVar5;
              if (uVar5 != 0) break;
            }
            lVar11 = -1;
            lVar1 = plVar14[1];
            do {
              lVar11 = lVar11 + 1;
            } while (*(char *)(lVar1 + lVar11) != '\0');
            lVar3 = -1;
            do {
              lVar8 = lVar3;
              lVar3 = lVar8 + 1;
            } while (*(char *)(plVar14[2] + 1 + lVar8) != '\0');
            lVar11 = lVar8 + 2 + lVar11;
            if (0x1ffd < (ulonglong)(lVar11 + lVar6)) {
              FUN_144f14ad0(param_1,
                            "Restricted outgoing cookies due to header size, \'%s\' not sent",lVar1)
              ;
              bVar2 = true;
              goto LAB_144f1fdf5;
            }
            puVar15 = &DAT_14996de1b;
            if (iVar4 != 0) {
              puVar15 = &DAT_149c07c40;
            }
            uVar5 = FUN_144f07d70(param_3,"%s%s=%s",puVar15,lVar1,plVar14[2]);
            uVar12 = (ulonglong)uVar5;
            if (uVar5 != 0) break;
            lVar6 = lVar6 + (ulonglong)(-(uint)(iVar4 != 0) & 2) + lVar11;
            uVar9 = (ulonglong)(iVar4 + 1);
          }
          iVar4 = (int)uVar9;
          plVar14 = (longlong *)*plVar14;
        } while (plVar14 != (longlong *)0x0);
        bVar2 = false;
LAB_144f1fdf5:
        FUN_144f05df0(plVar7);
      }
    }
    puVar15 = &DAT_14996de1b;
    if (((uVar16 != 0) && ((int)uVar12 == 0)) && (!bVar2)) {
      if (iVar4 == 0) {
        uVar5 = thunk_FUN_144f07eb0(param_3,"Cookie: ",8);
        if (uVar5 != 0) {
          return (ulonglong)uVar5;
        }
      }
      if (iVar4 != 0) {
        puVar15 = &DAT_149c07c40;
      }
      uVar5 = FUN_144f07d70(param_3,&DAT_149c07c50,puVar15,uVar16);
      uVar12 = (ulonglong)uVar5;
      iVar4 = iVar4 + 1;
    }
    if ((iVar4 != 0) && ((int)uVar12 == 0)) {
      uVar5 = thunk_FUN_144f07eb0(param_3,&DAT_149c058e8,2);
      uVar12 = (ulonglong)uVar5;
    }
  }
  return uVar12;
}



// FUNCTION 144f1fec0 FUN_144f1fec0 body=325 status=ok
// SIG undefined FUN_144f1fec0(void)

undefined8 FUN_144f1fec0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 400) != 0) {
    if (*(char *)(param_2 + 0x2ce) != '\0') {
      *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffe;
      *param_3 = 1;
      return 0;
    }
    *(undefined1 *)(param_1 + 0x1cd) = 1;
    FUN_144f14ad0(param_1,"Ignoring the response-body");
  }
  if ((((*(longlong *)(param_1 + 0x11c0) != 0) && (*(char *)(param_1 + 0x1cb) == '\0')) &&
      (*(char *)(param_1 + 0x13c2) == '\0')) && (*(char *)(param_1 + 0x1cd) == '\0')) {
    if (*(longlong *)(param_1 + 0xf0) == *(longlong *)(param_1 + 0x11c0)) {
      FUN_144f14ad0(param_1,"The entire document is already downloaded");
      FUN_144f16220(param_2,2);
      *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffe;
      *param_3 = 1;
      return 0;
    }
    FUN_144f14b70(param_1,"HTTP server doesn\'t seem to support byte ranges. Cannot resume.");
    return 0x21;
  }
  if ((*(char *)(param_1 + 0x530) != '\0') && (*(longlong *)(param_1 + 0x11b8) == 0)) {
    cVar1 = FUN_144f24b40(param_1,*(undefined8 *)(param_1 + 0x178));
    if (cVar1 == '\0') {
      *param_3 = 1;
      *(undefined4 *)(param_1 + 0x13e8) = 0x130;
      FUN_144f14ad0(param_1,"Simulate an HTTP 304 response");
      FUN_144f16220(param_2,2);
    }
  }
  return 0;
}



// FUNCTION 144f20010 FUN_144f20010 body=620 status=ok
// SIG undefined FUN_144f20010(void)

undefined8 FUN_144f20010(longlong param_1,char param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = 0xe30;
  if (param_2 == '\0') {
    lVar6 = 0xe20;
  }
  lVar6 = lVar6 + param_1;
  lVar4 = 0x1408;
  if (param_2 == '\0') {
    lVar4 = 0x140c;
  }
  puVar5 = (uint *)(lVar4 + param_1);
  cVar2 = *param_3;
joined_r0x000144f20054:
  if (cVar2 != '\0') {
LAB_144f20080:
    iVar3 = FUN_144f195b0(param_3,&DAT_14997de3c,4);
    if (((iVar3 == 0) || (0x2c < (byte)param_3[4])) ||
       ((0x100100003e01U >> ((longlong)param_3[4] & 0x3fU) & 1) == 0)) {
      iVar3 = FUN_144f195b0(param_3,"Digest",6);
      if (((iVar3 == 0) || (0x2c < (byte)param_3[6])) ||
         ((0x100100003e01U >> ((longlong)param_3[6] & 0x3fU) & 1) == 0)) {
        iVar3 = FUN_144f195b0(param_3,"Basic",5);
        if (((iVar3 == 0) || (0x2c < (byte)param_3[5])) ||
           ((0x100100003e01U >> ((longlong)param_3[5] & 0x3fU) & 1) == 0)) {
          iVar3 = FUN_144f195b0(param_3,"Bearer",6);
          if (((iVar3 == 0) || (0x2c < (byte)param_3[6])) ||
             ((0x100100003e01U >> ((longlong)param_3[6] & 0x3fU) & 1) == 0)) goto LAB_144f201ed;
          *puVar5 = *puVar5 | 0x40;
          *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40;
          bVar7 = *(int *)(lVar6 + 4) == 0x40;
        }
        else {
          *puVar5 = *puVar5 | 1;
          *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 1;
          bVar7 = *(int *)(lVar6 + 4) == 1;
        }
        if (bVar7) {
          *(undefined4 *)(lVar6 + 8) = 0;
LAB_144f201d7:
          FUN_144f14ad0(param_1,"Authentication problem. Ignoring this.");
          *(undefined1 *)(param_1 + 0x13c9) = 1;
        }
      }
      else if ((*(byte *)(lVar6 + 8) & 2) == 0) {
        cVar2 = FUN_1452d7bf0();
        if (cVar2 != '\0') {
          *puVar5 = *puVar5 | 2;
          *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 2;
          iVar3 = FUN_144f17070(param_1,param_2,param_3);
          if (iVar3 != 0) goto LAB_144f201d7;
        }
      }
      else {
        FUN_144f14ad0(param_1,"Ignoring duplicate digest auth header.");
      }
    }
    else if (((*(byte *)(lVar6 + 8) & 0x28) != 0) || (cVar2 = FUN_1452db8d0(), cVar2 != '\0')) {
      *puVar5 = *puVar5 | 8;
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 8;
      if ((*(int *)(lVar6 + 4) == 8) || (*(int *)(lVar6 + 4) == 0x20)) {
        iVar3 = FUN_1452cef10(param_1,param_2,param_3);
        if (iVar3 != 0) goto LAB_144f201d7;
        *(undefined1 *)(param_1 + 0x13c9) = 0;
      }
    }
LAB_144f201ed:
    cVar2 = *param_3;
    while ((cVar2 != '\0' && (cVar2 != ','))) {
      pcVar1 = param_3 + 1;
      param_3 = param_3 + 1;
      cVar2 = *pcVar1;
    }
    if (cVar2 == ',') {
      cVar2 = param_3[1];
      param_3 = param_3 + 1;
    }
    if (cVar2 != '\0') {
      do {
        if ((cVar2 != ' ') && (cVar2 != '\t')) {
          if (cVar2 < '\n') goto joined_r0x000144f20054;
          if ('\r' < cVar2) goto LAB_144f20080;
        }
        cVar2 = param_3[1];
        param_3 = param_3 + 1;
        if (cVar2 == '\0') goto joined_r0x000144f20054;
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 144f20280 FUN_144f20280 body=571 status=ok
// SIG undefined FUN_144f20280(void)

ulonglong FUN_144f20280(longlong param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  
  cVar2 = '\0';
  lVar4 = *(longlong *)(param_1 + 0x20);
  cVar3 = '\0';
  uVar6 = 0;
  uVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x150);
  puVar7 = &DAT_ffffffbf;
  if (*(longlong *)(param_1 + 0x920) != 0) {
    puVar7 = (undefined1 *)0xffffffff;
  }
  if (iVar1 - 100U < 100) {
    return 0;
  }
  if (*(char *)(param_1 + 0x13c9) != '\0') {
    return (ulonglong)(-(uint)(*(char *)(param_1 + 0xac6) != '\0') & 0x16);
  }
  if (((*(longlong *)(param_1 + 0x13a0) != 0) || (*(longlong *)(param_1 + 0x920) != 0)) &&
     ((iVar1 == 0x191 || ((*(char *)(lVar4 + 0x2d8) != '\0' && (iVar1 < 300)))))) {
    cVar2 = FUN_144f21ed0(param_1 + 0xe20,puVar7);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x13c9) = 1;
    }
    if ((*(int *)(param_1 + 0xe24) == 8) && (0xb < *(byte *)(lVar4 + 0x4d9))) {
      FUN_144f14ad0(param_1,"Forcing HTTP/1.1 for NTLM");
      FUN_144f16220(lVar4,1);
      *(undefined1 *)(param_1 + 0x13c0) = 2;
    }
  }
  if (((*(char *)(lVar4 + 0x2ca) != '\0') &&
      ((*(int *)(param_1 + 0x150) == 0x197 ||
       ((*(char *)(lVar4 + 0x2d8) != '\0' && (*(int *)(param_1 + 0x150) < 300)))))) &&
     (cVar3 = FUN_144f21ed0(param_1 + 0xe30,&DAT_ffffffbf), cVar3 == '\0')) {
    *(undefined1 *)(param_1 + 0x13c9) = 1;
  }
  if ((cVar2 == '\0') && (cVar3 == '\0')) {
    if ((((*(int *)(param_1 + 0x150) < 300) && (*(char *)(param_1 + 0xe2c) == '\0')) &&
        (*(char *)(lVar4 + 0x2d8) != '\0')) &&
       ((uVar6 = uVar5, *(char *)(param_1 + 0x13c2) != '\0' &&
        (*(char *)(param_1 + 0x13c2) != '\x05')))) {
      lVar4 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_1 + 0x1270));
      *(longlong *)(param_1 + 400) = lVar4;
      if (lVar4 == 0) {
        return 0x1b;
      }
      *(undefined1 *)(param_1 + 0xe2c) = 1;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x13c2) != '\0') &&
       ((*(char *)(param_1 + 0x13c2) != '\x05' && (*(char *)(param_1 + 0x13d7) == '\0')))) {
      uVar5 = FUN_144f21f90(param_1,lVar4);
      uVar6 = uVar5 & 0xffffffff;
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 400));
    *(undefined8 *)(param_1 + 400) = 0;
    lVar4 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_1 + 0x1270));
    *(longlong *)(param_1 + 400) = lVar4;
    if (lVar4 == 0) {
      return 0x1b;
    }
  }
  cVar2 = FUN_144f21e60(param_1);
  if (cVar2 != '\0') {
    FUN_144f14b70();
    uVar6 = 0x16;
  }
  return uVar6;
}



// FUNCTION 144f204c0 FUN_144f204c0 body=4037 status=ok
// SIG undefined FUN_144f204c0(void)

ulonglong FUN_144f204c0(longlong param_1,longlong param_2,size_t *param_3,char *param_4)

{
  char *pcVar1;
  longlong lVar2;
  size_t sVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  size_t sVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  char *pcVar20;
  byte *pbVar21;
  bool bVar22;
  
  sVar3 = *param_3;
  lVar2 = param_1 + 0xcb8;
  pcVar4 = *(char **)(param_1 + 0x140);
  sVar13 = sVar3;
  pcVar20 = pcVar4;
  do {
    pvVar8 = memchr(pcVar20,10,sVar13);
    if (pvVar8 == (void *)0x0) {
      uVar9 = thunk_FUN_144f07eb0(lVar2,pcVar20,sVar13);
      if ((int)uVar9 == 0) {
        if (*(int *)(param_1 + 0x138) == 0) {
          uVar10 = FUN_144f07ea0(lVar2);
          uVar12 = FUN_144f07e80(lVar2);
          iVar7 = FUN_144f22720(param_1,param_2,uVar12,uVar10);
          if (iVar7 == 2) {
            *(undefined1 *)(param_1 + 0x1ca) = 0;
            *(undefined4 *)(param_1 + 0x134) = 2;
            FUN_144f16220(param_2,2);
            if (*(char *)(param_1 + 0xae8) == '\0') {
LAB_144f2146c:
              FUN_144f14b70(param_1,"Received HTTP/0.9 when not allowed");
              return 1;
            }
          }
        }
LAB_144f21231:
        uVar9 = 0;
      }
      return uVar9;
    }
    *param_3 = (size_t)(pcVar20 + sVar13 + (-1 - (longlong)pvVar8));
    *(longlong *)(param_1 + 0x140) = (longlong)pvVar8 + 1;
    uVar9 = thunk_FUN_144f07eb0(lVar2,pcVar20,((longlong)pvVar8 + 1) - (longlong)pcVar20);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar9 = FUN_144f07ea0(lVar2);
      uVar10 = FUN_144f07e80(lVar2);
      if ((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 0x40000) == 0) {
        uVar18 = FUN_144f22650(param_1,uVar10,uVar9);
      }
      else {
        bVar22 = 4 < uVar9;
        if (5 < uVar9) {
          uVar9 = 5;
        }
        iVar7 = FUN_144f195b0("RTSP/",uVar10,uVar9);
        uVar18 = 2;
        if (iVar7 != 0) {
          uVar18 = (uint)bVar22;
        }
      }
      if (uVar18 == 2) {
        FUN_144f16220(param_2,2);
        if (*(char *)(param_1 + 0xae8) == '\0') goto LAB_144f2146c;
        *(undefined1 *)(param_1 + 0x1ca) = 0;
        if (*param_3 == 0) {
          *(undefined4 *)(param_1 + 0x134) = 2;
          *param_3 = sVar3;
          *(char **)(param_1 + 0x140) = pcVar4;
        }
        else {
          *(undefined4 *)(param_1 + 0x134) = 1;
        }
        goto LAB_144f21231;
      }
    }
    pcVar11 = (char *)FUN_144f07e80(lVar2);
    if ((*pcVar11 == '\n') || (*pcVar11 == '\r')) {
      iVar7 = *(int *)(param_1 + 0x150);
      if (iVar7 - 100U < 100) {
        if (iVar7 == 100) {
          *(undefined1 *)(param_1 + 0x1ca) = 1;
          *(undefined4 *)(param_1 + 0x138) = 0;
          if (0 < *(int *)(param_1 + 0x168)) {
            *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 2;
            *(undefined4 *)(param_1 + 0x168) = 0;
            FUN_144bbab00(param_1,0);
          }
        }
        else if (iVar7 == 0x65) {
          if (*(int *)(param_1 + 0x16c) == 2) {
            FUN_144f14ad0(param_1,"Received 101, Switching to HTTP/2");
            *(undefined1 *)(param_1 + 0x1ca) = 1;
            *(undefined4 *)(param_1 + 0x16c) = 3;
            *(undefined4 *)(param_1 + 0x138) = 0;
            uVar9 = FUN_144f284e0(param_1,param_2,0,*(undefined8 *)(param_1 + 0x140),*param_3);
            if ((int)uVar9 != 0) {
              return uVar9;
            }
            *param_3 = 0;
          }
          else {
            *(undefined1 *)(param_1 + 0x1ca) = 0;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x138) = 0;
          *(undefined1 *)(param_1 + 0x1ca) = 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0x16c) == 2) {
          FUN_144bbad90(*(undefined8 *)(param_1 + 0xd8));
        }
        *(undefined1 *)(param_1 + 0x1ca) = 0;
        if (((((*(longlong *)(param_1 + 0xf0) == -1) && (*(char *)(param_1 + 0x1cf) == '\0')) &&
             (*(char *)(param_2 + 0x2ce) == '\0')) &&
            ((*(char *)(param_2 + 0x4d9) == '\v' &&
             ((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 0x40000) == 0)))) &&
           (*(char *)(param_1 + 0x13c2) != '\x05')) {
          FUN_144f14ad0(param_1,"no chunk, no close, no size. Assume close to signal end");
          FUN_144f16220(param_2,2);
        }
      }
      plVar19 = (longlong *)(param_1 + 0xf0);
      if (*(char *)(param_1 + 0x1ca) == '\0') {
        if ((*(char *)(param_1 + 0x1d0) == '\0') && (*(char *)(param_1 + 0x1cf) == '\0')) {
          if (*plVar19 != -1) {
            if ((*(longlong *)(param_1 + 0x6f0) != 0) && (*(longlong *)(param_1 + 0x6f0) < *plVar19)
               ) {
              FUN_144f14b70(param_1,"Maximum file size exceeded");
              return 0x3f;
            }
            FUN_144f25ce0(param_1);
            *(longlong *)(param_1 + 0xf8) = *plVar19;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
          *plVar19 = -1;
        }
      }
      if (*(char *)(param_2 + 0x2ce) != '\0') {
        if (*(int *)(param_1 + 0x150) == 0x191) {
          iVar7 = *(int *)(param_2 + 0x348);
        }
        else {
          if (*(int *)(param_1 + 0x150) != 0x197) goto LAB_144f20d49;
          iVar7 = *(int *)(param_2 + 0x34c);
        }
        if (iVar7 == 2) {
          FUN_144f14ad0(param_1,"Connection closure while negotiating auth (HTTP 1.0?)");
          *(undefined1 *)(param_1 + 0x13c9) = 1;
        }
      }
LAB_144f20d49:
      uVar10 = 4;
      if (*(int *)(param_1 + 0x150) - 100U < 100) {
        uVar10 = 0x24;
      }
      uVar9 = FUN_144f07ea0(lVar2);
      uVar12 = FUN_144f07e80(lVar2);
      uVar14 = FUN_144f14dc0(param_1,uVar10,uVar12,uVar9);
      if ((int)uVar14 != 0) {
        return uVar14;
      }
      uVar10 = 0x4b000;
      if (uVar9 < 0x4b000) {
        iVar7 = (int)uVar9;
        uVar17 = *(uint *)(param_1 + 300) + iVar7;
        uVar14 = (ulonglong)uVar17;
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + iVar7;
        uVar18 = *(int *)(param_1 + 0x1430) + iVar7;
        *(uint *)(param_1 + 0x1430) = uVar18;
        *(uint *)(param_1 + 300) = uVar17;
        if (0x4b000 < uVar17) goto LAB_144f20dd9;
        if (0x5dc000 < uVar18) {
          uVar10 = 0x5dc000;
          uVar14 = (ulonglong)uVar18;
          goto LAB_144f20dd9;
        }
      }
      else {
        uVar14 = *(uint *)(param_1 + 300) + uVar9;
LAB_144f20dd9:
        if (uVar14 != 0) goto LAB_144f20b14;
      }
      iVar7 = *(int *)(param_1 + 0x150);
      cVar5 = FUN_144f21e60(param_1);
      if (cVar5 != '\0') {
        FUN_144f14b70();
        return 0x16;
      }
      if (iVar7 - 100U < 100) {
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x128);
      }
      else {
        lVar15 = *(longlong *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x130) = 0;
        if (*(char *)(param_1 + 0x13c9) == '\0') {
          if (((*(longlong *)(param_1 + 0x13a0) != 0) ||
              (cVar5 = '\0', *(longlong *)(param_1 + 0x920) != 0)) &&
             ((iVar7 == 0x191 ||
              ((cVar5 = '\0', *(char *)(lVar15 + 0x2d8) != '\0' && (iVar7 < 300)))))) {
            cVar5 = FUN_144f21ed0(param_1 + 0xe20);
            if (cVar5 == '\0') {
              *(undefined1 *)(param_1 + 0x13c9) = 1;
            }
            if ((*(int *)(param_1 + 0xe24) == 8) && (0xb < *(byte *)(lVar15 + 0x4d9))) {
              FUN_144f14ad0(param_1,"Forcing HTTP/1.1 for NTLM");
              FUN_144f16220(lVar15,1);
              *(undefined1 *)(param_1 + 0x13c0) = 2;
            }
          }
          cVar6 = '\0';
          if ((*(char *)(lVar15 + 0x2ca) != '\0') &&
             (((*(int *)(param_1 + 0x150) == 0x197 ||
               ((*(char *)(lVar15 + 0x2d8) != '\0' && (*(int *)(param_1 + 0x150) < 300)))) &&
              (cVar6 = FUN_144f21ed0(param_1 + 0xe30,&DAT_ffffffbf), cVar6 == '\0')))) {
            *(undefined1 *)(param_1 + 0x13c9) = 1;
          }
          if ((cVar5 == '\0') && (cVar6 == '\0')) {
            uVar18 = 0;
            if (((*(int *)(param_1 + 0x150) < 300) && (*(char *)(param_1 + 0xe2c) == '\0')) &&
               ((*(char *)(lVar15 + 0x2d8) != '\0' &&
                ((*(char *)(param_1 + 0x13c2) != '\0' && (*(char *)(param_1 + 0x13c2) != '\x05')))))
               ) {
              lVar15 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_1 + 0x1270));
              *(longlong *)(param_1 + 400) = lVar15;
              if (lVar15 == 0) {
LAB_144f213da:
                uVar18 = 0x1b;
                goto LAB_144f213df;
              }
              *(undefined1 *)(param_1 + 0xe2c) = 1;
            }
          }
          else {
            uVar18 = 0;
            if ((*(char *)(param_1 + 0x13c2) != '\0') &&
               (((*(char *)(param_1 + 0x13c2) != '\x05' && (*(char *)(param_1 + 0x13d7) == '\0')) &&
                (uVar18 = FUN_144f21f90(param_1,lVar15), uVar18 != 0)))) goto LAB_144f213df;
            (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 400));
            *(undefined8 *)(param_1 + 400) = 0;
            lVar15 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_1 + 0x1270));
            *(longlong *)(param_1 + 400) = lVar15;
            if (lVar15 == 0) goto LAB_144f213da;
          }
          cVar5 = FUN_144f21e60(param_1);
          if (cVar5 != '\0') {
            FUN_144f14b70();
            uVar18 = 0x16;
          }
        }
        else {
          uVar18 = -(uint)(*(char *)(param_1 + 0xac6) != '\0') & 0x16;
        }
        if (uVar18 != 0) {
LAB_144f213df:
          return (ulonglong)uVar18;
        }
      }
      if (299 < *(int *)(param_1 + 0x150)) {
        if ((*(char *)(param_2 + 0x2d8) == '\0') && (*(char *)(param_2 + 0x2ce) == '\0')) {
          if (*(char *)(param_1 + 0x13d7) == '\0') {
            cVar5 = *(char *)(param_1 + 0x13c2);
            if (((((cVar5 == '\x01') || (cVar5 == '\x02')) || (cVar5 == '\x03')) ||
                (cVar5 == '\x04')) && (FUN_144bbab00(param_1,0), *(char *)(param_1 + 0x1cc) == '\0')
               ) {
              if ((*(int *)(param_1 + 0x150) == 0x1a1) && (*(char *)(param_1 + 0x13cb) != '\0')) {
                if ((*(longlong *)(param_1 + 0x108) == 0) && (*(int *)(param_1 + 0x168) == 1)) {
                  FUN_144f14ad0(param_1,"Got HTTP failure 417 while waiting for a 100");
                }
                else {
                  FUN_144f14ad0(param_1,"Got HTTP failure 417 while sending data");
                  FUN_144f16220(param_2,2);
                  uVar14 = FUN_144f21f90(param_1,param_2);
                  if ((int)uVar14 != 0) {
                    return uVar14;
                  }
                }
                *(undefined1 *)(param_1 + 0x13cc) = 1;
                uVar10 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_1 + 0x1270));
                *(undefined8 *)(param_1 + 400) = uVar10;
                FUN_144f24c00(param_1,param_1 + 0xf0);
              }
              else if (*(char *)(param_1 + 0xac7) == '\0') {
                FUN_144f14ad0(param_1,"HTTP error before end of send, stop sending");
                FUN_144f16220(param_2,2);
                uVar14 = FUN_144f24c00(param_1,param_1 + 0xf0);
                if ((int)uVar14 != 0) {
                  return uVar14;
                }
                *(undefined1 *)(param_1 + 0x1cc) = 1;
                if (*(char *)(param_1 + 0x13cb) != (char)uVar14) {
                  *(undefined4 *)(param_1 + 0x168) = 3;
                }
              }
              else {
                FUN_144f14ad0(param_1,"HTTP error before end of send, keep sending");
                if (0 < *(int *)(param_1 + 0x168)) {
                  *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 2;
                  *(undefined4 *)(param_1 + 0x168) = 0;
                }
              }
            }
            goto LAB_144f2119d;
          }
        }
        else {
LAB_144f2119d:
          if (*(char *)(param_1 + 0x13d7) == '\0') goto LAB_144f211c6;
        }
        if (*(longlong *)(param_2 + 0x310) != -1) {
          FUN_144f14ad0(param_1,"Keep sending data to get tossed away");
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 2;
        }
      }
LAB_144f211c6:
      if (*(char *)(param_1 + 0x1ca) == '\0') {
        if ((*(char *)(param_1 + 0x1d4) != '\0') ||
           ((((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 0x40000) != 0 &&
             (*(int *)(param_1 + 0x9f8) == 2)) &&
            (0x7fffffffffffffff < *(ulonglong *)(param_1 + 0xf0))))) {
          *param_4 = '\x01';
        }
        if ((*(longlong *)(param_1 + 0xf8) == 0) &&
           (cVar5 = FUN_144f28210(param_1,param_2,0), cVar5 == '\0')) {
          *param_4 = '\x01';
LAB_144f213bb:
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffe;
        }
        else if (*param_4 != '\0') goto LAB_144f213bb;
        FUN_144f149e0(param_1,1,pcVar20,uVar9);
        goto LAB_144f21231;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x138);
      uVar18 = 4;
      *(int *)(param_1 + 0x138) = iVar7 + 1;
      if (iVar7 == 0) {
        uVar18 = *(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x84);
        if ((uVar18 & 3) == 0) {
          if ((uVar18 >> 0x12 & 1) != 0) {
            cVar5 = *pcVar11;
            pcVar20 = pcVar11;
            while ((cVar5 != '\0' && ((cVar5 == ' ' || (cVar5 == '\t'))))) {
              pcVar1 = pcVar20 + 1;
              pcVar20 = pcVar20 + 1;
              cVar5 = *pcVar1;
            }
            iVar7 = strncmp(pcVar20,"RTSP/",5);
            if (iVar7 == 0) {
              if (((((9 < (byte)(pcVar20[5] - 0x30U)) || (pcVar20[6] != '.')) ||
                   (9 < (byte)(pcVar20[7] - 0x30U))) ||
                  ((pcVar20[8] != ' ' && (pcVar20[8] != '\t')))) ||
                 ((9 < (byte)(pcVar20[9] - 0x30U) ||
                  ((9 < (byte)(pcVar20[10] - 0x30U) || (9 < (byte)(pcVar20[0xb] - 0x30U))))))) {
                return 8;
              }
              *(int *)(param_1 + 0x150) =
                   (int)pcVar20[0xb] + (((int)pcVar20[10] + pcVar20[9] * 10) * 5 + -0xa68) * 2;
              cVar5 = pcVar20[0xc];
              if (((cVar5 != ' ') && (cVar5 != '\t')) && (3 < (byte)(cVar5 - 10U))) {
                return 8;
              }
              *(undefined1 *)(param_2 + 0x4d9) = 0xb;
              goto LAB_144f2090f;
            }
          }
LAB_144f212f6:
          *(undefined1 *)(param_1 + 0x1ca) = 0;
          goto LAB_144f21231;
        }
        cVar5 = *pcVar11;
        pcVar20 = pcVar11;
        while ((cVar5 != '\0' && ((cVar5 == ' ' || (cVar5 == '\t'))))) {
          pcVar1 = pcVar20 + 1;
          pcVar20 = pcVar20 + 1;
          cVar5 = *pcVar1;
        }
        iVar7 = strncmp(pcVar20,"HTTP/",5);
        if (iVar7 == 0) {
          iVar7 = (int)pcVar20[5];
          if (iVar7 != 0x31) {
            if ((iVar7 != 0x32) && (iVar7 != 0x33)) {
              FUN_144f14b70(param_1,"Unsupported HTTP version in response");
              return 1;
            }
            if ((pcVar20[6] == ' ') || (pcVar20[6] == '\t')) {
              iVar7 = (iVar7 + -0x30) * 10;
              if (((byte)(pcVar20[7] - 0x30U) < 10) &&
                 (((byte)(pcVar20[8] - 0x30U) < 10 && ((byte)(pcVar20[9] - 0x30U) < 10)))) {
                iVar16 = (int)pcVar20[9] + (((int)pcVar20[8] + pcVar20[7] * 10) * 5 + -0xa68) * 2;
                *(int *)(param_1 + 0x150) = iVar16;
                if ((pcVar20[10] == ' ') || ((byte)(pcVar20[10] - 9U) < 5)) goto LAB_144f207c5;
              }
            }
            goto LAB_144f206f7;
          }
          if (((pcVar20[6] != '.') || (1 < (byte)(pcVar20[7] - 0x30U))) ||
             ((pcVar20[8] != ' ' && (pcVar20[8] != '\t')))) {
LAB_144f212d3:
            FUN_144f14b70(param_1,"Unsupported HTTP/1 subversion in response");
            return 1;
          }
          iVar7 = pcVar20[7] + -0x26;
          if (((9 < (byte)(pcVar20[9] - 0x30U)) || (9 < (byte)(pcVar20[10] - 0x30U))) ||
             (9 < (byte)(pcVar20[0xb] - 0x30U))) goto LAB_144f212d3;
          iVar16 = (int)pcVar20[0xb] + (((int)pcVar20[10] + pcVar20[9] * 10) * 5 + -0xa68) * 2;
          *(int *)(param_1 + 0x150) = iVar16;
          cVar5 = pcVar20[0xc];
          if (((cVar5 != ' ') && (cVar5 != '\t')) && (3 < (byte)(cVar5 - 10U))) goto LAB_144f212d3;
LAB_144f207c5:
          if (iVar16 < 100) {
            FUN_144f14b70(param_1,"Unsupported response code in HTTP response");
            return 1;
          }
          if (((iVar7 != 10) && (iVar7 != 0xb)) && (iVar7 != 0x14)) {
            FUN_144f14b70(param_1,"Unsupported HTTP version (%u.%d) in response",iVar7 / 10,
                          iVar7 % 10);
            return 1;
          }
          *(byte *)(param_2 + 0x4d9) = (byte)iVar7;
          if ((*(int *)(param_1 + 0x16c) == 3) && ((byte)iVar7 != 0x14)) {
            FUN_144f14ad0(param_1,"Lying server, not serving HTTP/2");
          }
          if (*(byte *)(param_2 + 0x4d9) < 0x14) {
            **(undefined4 **)(param_2 + 0x4a0) = 0xffffffff;
          }
        }
        else {
LAB_144f206f7:
          uVar10 = FUN_144f07ea0(lVar2);
          uVar12 = FUN_144f07e80(lVar2);
          iVar7 = FUN_144f22650(param_1,uVar12,uVar10);
          if (iVar7 != 1) goto LAB_144f212f6;
          *(undefined4 *)(param_1 + 0x150) = 200;
          *(undefined1 *)(param_2 + 0x4d9) = 10;
        }
LAB_144f2090f:
        pbVar21 = (byte *)(param_2 + 0x4d9);
        iVar7 = *(int *)(param_1 + 0x150);
        *(int *)(param_1 + 0x13e8) = iVar7;
        *(uint *)(param_1 + 0x13f0) = (uint)*pbVar21;
        if ((*(byte *)(param_1 + 0x13c1) == 0) || (*pbVar21 < *(byte *)(param_1 + 0x13c1))) {
          *(byte *)(param_1 + 0x13c1) = *pbVar21;
        }
        if (((*(longlong *)(param_1 + 0x11c0) != 0) && (*(char *)(param_1 + 0x13c2) == '\0')) &&
           (iVar7 == 0x1a0)) {
          *(undefined1 *)(param_1 + 0x1cd) = 1;
        }
        if (*pbVar21 == 10) {
          FUN_144f14ad0(param_1,"HTTP 1.0, assume close after body");
          FUN_144f16220(param_2);
        }
        else if ((*pbVar21 == 0x14) || ((*(int *)(param_1 + 0x16c) == 2 && (iVar7 == 0x65)))) {
          **(undefined4 **)(param_2 + 0x4a0) = 2;
        }
        iVar7 = *(int *)(param_1 + 0x150);
        *(bool *)(param_1 + 0x1ce) = iVar7 - 100U < 100;
        if (iVar7 == 0xcc) {
LAB_144f209d4:
          *(undefined8 *)(param_1 + 0xf0) = 0;
          *(undefined8 *)(param_1 + 0xf8) = 0;
          *(undefined1 *)(param_1 + 0x1ce) = 1;
        }
        else if (iVar7 == 0x130) {
          if (*(char *)(param_1 + 0x530) != '\0') {
            *(undefined1 *)(param_1 + 0x14c4) = 1;
          }
          goto LAB_144f209d4;
        }
        uVar18 = 0xc;
      }
      pcVar20 = (char *)FUN_144f07e80(lVar2);
      sVar13 = FUN_144f07ea0(lVar2);
      pvVar8 = memchr(pcVar20,0,sVar13);
      if (pvVar8 != (void *)0x0) {
        FUN_144f14b70(param_1,"Nul byte in header");
        return 8;
      }
      if ((1 < *(int *)(param_1 + 0x138)) &&
         ((((*pcVar20 != ' ' && (*pcVar20 != '\t')) || (*(int *)(param_1 + 0x138) < 3)) &&
          (pvVar8 = memchr(pcVar20,0x3a,sVar13), pvVar8 == (void *)0x0)))) {
        FUN_144f14b70(param_1,"Header without colon");
        return 8;
      }
      uVar9 = FUN_144f1e940(param_1,param_2,pcVar11);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      if (*(int *)(param_1 + 0x150) - 100U < 100) {
        uVar18 = uVar18 | 0x20;
      }
      uVar10 = FUN_144f07ea0(lVar2);
      FUN_144f149e0(param_1,1,pcVar11,uVar10);
      uVar10 = FUN_144f07ea0(lVar2);
      uVar9 = FUN_144f14dc0(param_1,uVar18,pcVar11,uVar10);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      uVar14 = FUN_144f07ea0(lVar2);
      uVar10 = 0x4b000;
      if (uVar14 < 0x4b000) {
        iVar7 = (int)uVar14;
        uVar18 = *(uint *)(param_1 + 300) + iVar7;
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + iVar7;
        uVar17 = *(int *)(param_1 + 0x1430) + iVar7;
        *(uint *)(param_1 + 0x1430) = uVar17;
        *(uint *)(param_1 + 300) = uVar18;
        if (uVar18 < 0x4b001) {
          if (0x5dc000 < uVar17) {
            uVar10 = 0x5dc000;
            uVar18 = uVar17;
            goto LAB_144f20b03;
          }
          goto LAB_144f211d0;
        }
LAB_144f20b03:
        uVar14 = (ulonglong)uVar18;
      }
      else {
        uVar14 = *(uint *)(param_1 + 300) + uVar14;
      }
      if (uVar14 != 0) {
LAB_144f20b14:
        FUN_144f14b70(param_1,"Too large response headers: %zu > %u",uVar14,uVar10);
        return 0x38;
      }
    }
LAB_144f211d0:
    FUN_144f07dc0(lVar2);
    pcVar20 = *(char **)(param_1 + 0x140);
    if (*pcVar20 == '\0') goto LAB_144f21231;
    sVar13 = *param_3;
  } while( true );
}



// FUNCTION 144f21490 FUN_144f21490 body=338 status=ok
// SIG undefined FUN_144f21490(void)

ulonglong FUN_144f21490(longlong param_1,longlong param_2,undefined8 param_3,int param_4,
                       undefined8 param_5,char param_6)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if ((((*(char *)(param_2 + 0x2c8) == '\0') || (*(char *)(param_2 + 0x2ca) == '\0')) &&
      (*(longlong *)(param_1 + 0x13a0) == 0)) && (*(longlong *)(param_1 + 0x920) == 0)) {
    *(undefined1 *)(param_1 + 0xe2c) = 1;
    uVar5 = 0;
    *(undefined1 *)(param_1 + 0xe3c) = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe20);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xe24) == 0)) {
      *(int *)(param_1 + 0xe24) = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0xe30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xe34) == 0)) {
      *(int *)(param_1 + 0xe34) = iVar1;
    }
    if ((*(char *)(param_2 + 0x2c8) == '\0') || (*(char *)(param_2 + 0x2cb) != param_6)) {
      *(undefined1 *)(param_1 + 0xe3c) = 1;
    }
    else {
      uVar4 = FUN_144f22120(param_1,param_2,(int *)(param_1 + 0xe30),param_3,param_5,1);
      uVar5 = uVar4 & 0xffffffff;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    cVar2 = FUN_1452db800(param_1);
    if ((cVar2 == '\0') && (*(char *)(param_2 + 0x2dd) == '\0')) {
      *(undefined1 *)(param_1 + 0xe2c) = 1;
    }
    else {
      uVar5 = FUN_144f22120(param_1,param_2,(int *)(param_1 + 0xe20),param_3,param_5,0);
      uVar5 = uVar5 & 0xffffffff;
    }
    if ((((*(char *)(param_1 + 0xe2d) == '\0') || (*(char *)(param_1 + 0xe2c) != '\0')) &&
        ((*(char *)(param_1 + 0xe3d) == '\0' || (*(char *)(param_1 + 0xe3c) != '\0')))) ||
       ((param_4 == 0 || (param_4 == 5)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_2 + 0x2d8) = uVar3;
  }
  return uVar5;
}



// FUNCTION 144f215f0 FUN_144f215f0 body=93 status=ok
// SIG undefined FUN_144f215f0(void)

int FUN_144f215f0(int *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0x2b;
  if (param_3 == 3) {
    lVar2 = 0;
    do {
      pcVar1 = (char *)(lVar2 + param_2);
      if (9 < (byte)(*pcVar1 - 0x30U)) goto LAB_144f21635;
      lVar2 = lVar2 + 1;
      iVar3 = (int)*pcVar1 + (iVar3 * 5 + -0x18) * 2;
    } while (lVar2 < 3);
    iVar4 = 0;
  }
LAB_144f21635:
  if (iVar4 != 0) {
    iVar3 = -1;
  }
  *param_1 = iVar3;
  return iVar4;
}



// FUNCTION 144f21650 FUN_144f21650 body=334 status=ok
// SIG undefined FUN_144f21650(void)

int FUN_144f21650(undefined8 *param_1,void *param_2,size_t param_3,longlong param_4,
                 undefined8 param_5,longlong param_6,undefined8 param_7,longlong param_8,
                 undefined8 param_9)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0x1b;
  if (0xb < param_3 + 1) {
    return 0x2b;
  }
  _Dst = (void *)(*(code *)PTR_calloc_14c6d9f40)(1,0x98);
  if (_Dst == (void *)0x0) goto LAB_144f21775;
  memcpy(_Dst,param_2,param_3);
  if (param_4 == 0) {
LAB_144f216d8:
    if (param_6 != 0) {
      lVar1 = FUN_144f22790(param_6,param_7);
      *(longlong *)((longlong)_Dst + 0x18) = lVar1;
      if (lVar1 == 0) goto LAB_144f21715;
    }
    if (param_8 != 0) {
      lVar1 = FUN_144f22790(param_8,param_9);
      *(longlong *)((longlong)_Dst + 0x20) = lVar1;
      if (lVar1 == 0) goto LAB_144f21715;
    }
    FUN_1452db160((longlong)_Dst + 0x28,0,0x100000);
    FUN_1452db160((longlong)_Dst + 0x60,0,0x100000);
    iVar2 = 0;
  }
  else {
    lVar1 = FUN_144f22790(param_4,param_5);
    *(longlong *)((longlong)_Dst + 0x10) = lVar1;
    if (lVar1 != 0) goto LAB_144f216d8;
LAB_144f21715:
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)((longlong)_Dst + 0x10));
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)((longlong)_Dst + 0x18));
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)((longlong)_Dst + 0x20));
    FUN_1452db180((longlong)_Dst + 0x28);
    FUN_1452db180((longlong)_Dst + 0x60);
    (*(code *)PTR_free_14c6d9f28)(_Dst);
  }
LAB_144f21775:
  if (iVar2 != 0) {
    _Dst = (void *)0x0;
  }
  *param_1 = _Dst;
  return iVar2;
}



// FUNCTION 144f217a0 FUN_144f217a0 body=646 status=ok
// SIG undefined FUN_144f217a0(void)

int FUN_144f217a0(undefined8 *param_1,void *param_2,size_t param_3,undefined8 param_4,
                 longlong param_5)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong local_res18 [2];
  longlong local_58;
  undefined1 local_50 [40];
  
  iVar2 = 0x1b;
  if (0xb < param_3 + 1) {
    return 0x2b;
  }
  _Dst = (void *)(*(code *)PTR_calloc_14c6d9f40)(1,0x98);
  if (_Dst == (void *)0x0) goto LAB_144f219ff;
  memcpy(_Dst,param_2,param_3);
  iVar1 = FUN_1452cbab0(param_4,1,(longlong)_Dst + 0x10,0);
  iVar2 = 0x1b;
  if ((iVar1 == 0) || (iVar1 == 10)) {
    if ((*(longlong *)((longlong)_Dst + 0x10) == 0) && (param_5 != 0)) {
      lVar3 = (*(code *)PTR__strdup_14c6d9f38)();
      *(longlong *)((longlong)_Dst + 0x10) = lVar3;
      if (lVar3 == 0) goto LAB_144f219c6;
    }
    iVar2 = FUN_144f227f0(_Dst,param_4);
    if (iVar2 == 0) {
      local_res18[0] = 0;
      local_58 = 0;
      iVar2 = 3;
      FUN_144f07cf0(local_50,0x100000);
      iVar1 = FUN_1452cbab0(param_4,7,&local_58,0x10);
      if ((iVar1 == 0) &&
         (uVar4 = FUN_1452cbab0(param_4,8,local_res18,0), (uVar4 & 0xffffffef) == 0)) {
        if (local_58 == 0) {
          if (local_res18[0] != 0) {
LAB_144f21920:
            iVar2 = FUN_144f07d70(local_50,&DAT_149c07a84);
            if (iVar2 == 0) {
LAB_144f21937:
              uVar5 = FUN_144f07e80(local_50);
              lVar3 = (*(code *)PTR__strdup_14c6d9f38)(uVar5);
              *(longlong *)((longlong)_Dst + 0x20) = lVar3;
              if (lVar3 != 0) goto LAB_144f21958;
            }
            goto LAB_144f21978;
          }
          *(undefined8 *)((longlong)_Dst + 0x20) = 0;
        }
        else {
          if (local_res18[0] != 0) {
            if ((local_58 == 0) || (iVar2 = FUN_144f07d50(local_50,local_58), iVar2 == 0)) {
              if (local_res18[0] != 0) goto LAB_144f21920;
              goto LAB_144f21937;
            }
            goto LAB_144f21978;
          }
          *(longlong *)((longlong)_Dst + 0x20) = local_58;
          local_58 = 0;
        }
LAB_144f21958:
        (*(code *)PTR_free_14c6d9f28)(local_58);
        (*(code *)PTR_free_14c6d9f28)(local_res18[0]);
        FUN_144f07d10(local_50);
      }
      else {
LAB_144f21978:
        (*(code *)PTR_free_14c6d9f28)(local_58);
        (*(code *)PTR_free_14c6d9f28)(local_res18[0]);
        FUN_144f07d10(local_50);
        if (iVar2 != 0) goto LAB_144f219c6;
      }
      FUN_1452db160((longlong)_Dst + 0x28,0,0x100000);
      FUN_1452db160((longlong)_Dst + 0x60,0,0x100000);
      iVar2 = 0;
      goto LAB_144f219ff;
    }
  }
LAB_144f219c6:
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)((longlong)_Dst + 0x10));
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)((longlong)_Dst + 0x18));
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)((longlong)_Dst + 0x20));
  FUN_1452db180((longlong)_Dst + 0x28);
  FUN_1452db180((longlong)_Dst + 0x60);
  (*(code *)PTR_free_14c6d9f28)(_Dst);
LAB_144f219ff:
  if (iVar2 != 0) {
    _Dst = (void *)0x0;
  }
  *param_1 = _Dst;
  return iVar2;
}



// FUNCTION 144f21a30 FUN_144f21a30 body=76 status=ok
// SIG undefined FUN_144f21a30(void)

void FUN_144f21a30(longlong param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x10));
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x18));
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x20));
    FUN_1452db180(param_1 + 0x28);
    FUN_1452db180(param_1 + 0x60);
    (*(code *)PTR_free_14c6d9f28)(param_1);
  }
  return;
}



// FUNCTION 144f21a80 FUN_144f21a80 body=673 status=ok
// SIG undefined FUN_144f21a80(void)

int FUN_144f21a80(undefined8 param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  
  pcVar10 = *(char **)(param_2 + 0x10);
  if (pcVar10 == (char *)0x0) {
    lVar9 = 0;
    do {
      pcVar10 = "CONNECT" + lVar9;
      lVar9 = lVar9 + 1;
      if (*pcVar10 != *(char *)(param_2 + -1 + lVar9)) {
        lVar9 = FUN_144f23930(param_3,":scheme",7);
        if (lVar9 == 0) {
          if ((*(longlong *)(param_3 + 0x20) == 0) ||
             (pcVar10 = "https",
             (*(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x20) + 0x2e8) + 0x8c) & 1) == 0)) {
            pcVar10 = "http";
          }
        }
        else {
          pcVar10 = (char *)(lVar9 + 8);
          cVar2 = *(char *)(lVar9 + 8);
          while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
            pcVar1 = pcVar10 + 1;
            pcVar10 = pcVar10 + 1;
            cVar2 = *pcVar1;
          }
          FUN_144f14ad0(param_3,"set pseudo header %s to %s",":scheme",pcVar10);
        }
        break;
      }
      pcVar10 = (char *)0x0;
    } while (lVar9 != 8);
  }
  lVar14 = *(longlong *)(param_2 + 0x18);
  lVar9 = param_2 + 0x28;
  if ((lVar14 == 0) && (lVar6 = FUN_1452db2a0(lVar9,&DAT_149c07670,4), lVar14 = 0, lVar6 != 0)) {
    lVar14 = *(longlong *)(lVar6 + 8);
  }
  FUN_1452db1f0(param_1);
  FUN_1452db270(param_1,1);
  lVar13 = -1;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(param_2 + lVar6) != '\0');
  iVar4 = FUN_1452db3d0(param_1,":method",7,param_2,lVar6);
  if (iVar4 == 0) {
    if (pcVar10 != (char *)0x0) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pcVar10[lVar6] != '\0');
      iVar4 = FUN_1452db3d0(param_1,":scheme",7,pcVar10,lVar6);
      if (iVar4 != 0) goto LAB_144f21c76;
    }
    if (lVar14 != 0) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(lVar14 + lVar6) != '\0');
      iVar4 = FUN_1452db3d0(param_1,":authority",10,lVar14,lVar6);
      if (iVar4 != 0) goto LAB_144f21c76;
    }
    lVar14 = *(longlong *)(param_2 + 0x20);
    if (lVar14 != 0) {
      do {
        lVar13 = lVar13 + 1;
      } while (*(char *)(lVar14 + lVar13) != '\0');
      iVar4 = FUN_1452db3d0(param_1,&DAT_149c08474,5,lVar14,lVar13);
    }
  }
LAB_144f21c76:
  uVar12 = 0;
  do {
    if ((iVar4 != 0) || (uVar7 = FUN_1452db260(lVar9), uVar7 <= uVar12)) {
      return iVar4;
    }
    puVar8 = (undefined8 *)FUN_1452db280(lVar9,uVar12);
    uVar11 = 0;
    uVar7 = puVar8[2];
    uVar3 = *puVar8;
    do {
      if (uVar7 < *(ulonglong *)((longlong)&DAT_14c70f328 + uVar11)) break;
      if ((uVar7 == *(ulonglong *)((longlong)&DAT_14c70f328 + uVar11)) &&
         (iVar5 = FUN_144f19540(*(undefined8 *)((longlong)&PTR_DAT_14c70f320 + uVar11),uVar3),
         iVar5 != 0)) goto LAB_144f21cf8;
      uVar11 = uVar11 + 0x10;
    } while (uVar11 < 0x60);
    iVar4 = FUN_1452db3d0(param_1,*puVar8,puVar8[2],puVar8[1],puVar8[3]);
LAB_144f21cf8:
    uVar12 = uVar12 + 1;
  } while( true );
}



// FUNCTION 144f21d30 FUN_144f21d30 body=213 status=ok
// SIG undefined FUN_144f21d30(void)

int FUN_144f21d30(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0x1b;
  puVar1 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(1,0x88);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    if (param_3 != 0) {
      lVar2 = (*(code *)PTR__strdup_14c6d9f38)(param_3);
      *(longlong *)(puVar1 + 2) = lVar2;
      if (lVar2 == 0) {
        (*(code *)PTR_free_14c6d9f28)(0);
        FUN_1452db180(puVar1 + 4);
        FUN_1452db180(puVar1 + 0x12);
        if (*(longlong *)(puVar1 + 0x20) != 0) {
          FUN_144f21e10();
        }
        (*(code *)PTR_free_14c6d9f28)(puVar1);
        goto LAB_144f21de1;
      }
    }
    FUN_1452db160(puVar1 + 4,0,0x100000);
    FUN_1452db160(puVar1 + 0x12,0,0x100000);
    iVar3 = 0;
  }
LAB_144f21de1:
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)0x0;
  }
  *param_1 = (longlong)puVar1;
  return iVar3;
}



// FUNCTION 144f21e10 FUN_144f21e10 body=73 status=ok
// SIG undefined FUN_144f21e10(void)

void FUN_144f21e10(longlong param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 8));
    FUN_1452db180(param_1 + 0x10);
    FUN_1452db180(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_144f21e10();
    }
    (*(code *)PTR_free_14c6d9f28)(param_1);
  }
  return;
}



// FUNCTION 144f21e60 FUN_144f21e60 body=99 status=ok
// SIG undefined FUN_144f21e60(void)

ulonglong FUN_144f21e60(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x150);
  uVar2 = (ulonglong)uVar1;
  if (((*(char *)(param_1 + 0xac6) == '\0') || ((int)uVar1 < 400)) ||
     ((*(longlong *)(param_1 + 0x11c0) != 0 &&
      ((*(char *)(param_1 + 0x13c2) == '\0' && (uVar1 == 0x1a0)))))) {
    return (ulonglong)(uint3)(uVar1 >> 8) << 8;
  }
  if (uVar1 == 0x191) {
    if (*(longlong *)(param_1 + 0x13a0) != 0) goto LAB_144f21eb8;
  }
  else if ((uVar1 == 0x197) &&
          (uVar2 = *(ulonglong *)(param_1 + 0x20), *(char *)(uVar2 + 0x2ca) != '\0')) {
LAB_144f21eb8:
    return (ulonglong)*(byte *)(param_1 + 0x13c9);
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 144f21ed0 FUN_144f21ed0 body=183 status=ok
// SIG undefined FUN_144f21ed0(void)

undefined8 FUN_144f21ed0(uint *param_1,uint param_2)

{
  param_2 = param_1[2] & *param_1 & param_2;
  if ((param_2 & 4) != 0) {
    param_1[1] = 4;
    param_1[2] = 0;
    return 1;
  }
  if ((param_2 & 0x40) != 0) {
    param_1[1] = 0x40;
    param_1[2] = 0;
    return 1;
  }
  if ((param_2 & 2) != 0) {
    param_1[1] = 2;
    param_1[2] = 0;
    return 1;
  }
  if ((param_2 & 8) != 0) {
    param_1[1] = 8;
    param_1[2] = 0;
    return 1;
  }
  if ((param_2 & 0x20) != 0) {
    param_1[1] = 0x20;
    param_1[2] = 0;
    return 1;
  }
  if ((param_2 & 1) != 0) {
    param_1[1] = 1;
    param_1[2] = 0;
    return 1;
  }
  if ((char)param_2 < '\0') {
    param_1[1] = 0x80;
    param_1[2] = 0;
    return 1;
  }
  param_1[1] = 0x40000000;
  param_1[2] = 0;
  return 0;
}



// FUNCTION 144f21f90 FUN_144f21f90 body=398 status=ok
// SIG undefined FUN_144f21f90(void)

undefined8 FUN_144f21f90(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  
  if (*(longlong **)(param_1 + 0x1a8) == (longlong *)0x0) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x13c2);
  if (cVar1 == '\0') {
    return 0;
  }
  if (cVar1 == '\x05') {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x108);
  if (*(char *)(param_2 + 0x2d8) == '\0') {
    if (*(char *)(param_2 + 0x2d6) == '\0') {
      lVar5 = 0;
      *(undefined1 *)(param_1 + 0x13d7) = 0;
      goto LAB_144f22037;
    }
    lVar3 = -1;
    if (cVar1 == '\x01') {
LAB_144f220c4:
      lVar5 = *(longlong *)(param_1 + 0x11f8);
      if (lVar5 != -1) {
        *(undefined1 *)(param_1 + 0x13d7) = 0;
        goto LAB_144f22037;
      }
    }
    else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      lVar3 = **(longlong **)(param_1 + 0x1a8);
    }
    else if (cVar1 == '\x04') goto LAB_144f220c4;
    lVar5 = lVar3;
    *(undefined1 *)(param_1 + 0x13d7) = 0;
    if (lVar5 != -1) goto LAB_144f22037;
LAB_144f2203c:
    if ((((*(int *)(param_1 + 0xe34) == 8) || (*(int *)(param_1 + 0xe24) == 8)) ||
        (*(int *)(param_1 + 0xe34) == 0x20)) || (*(int *)(param_1 + 0xe24) == 0x20)) {
      if (((lVar5 - lVar2 < 2000) || (*(int *)(param_2 + 0x348) != 0)) ||
         (*(int *)(param_2 + 0x34c) != 0)) {
        if (*(char *)(param_2 + 0x2d8) != '\0') {
          return 0;
        }
        if (*(longlong *)(param_2 + 0x310) == -1) {
          return 0;
        }
        pcVar4 = "Rewind stream before next send";
        goto LAB_144f220fd;
      }
      if (*(char *)(param_2 + 0x2ce) != '\0') {
        return 0;
      }
      FUN_144f14ad0(param_1,"NTLM send, close instead of sending %I64d bytes");
    }
    FUN_144f16220(param_2,2);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  else {
    lVar5 = 0;
    *(undefined1 *)(param_1 + 0x13d7) = 0;
LAB_144f22037:
    if (lVar2 < lVar5) goto LAB_144f2203c;
  }
  if (lVar2 == 0) {
    return 0;
  }
  pcVar4 = "Please rewind output before next send";
LAB_144f220fd:
  *(undefined1 *)(param_1 + 0x13d7) = 1;
  FUN_144f14ad0(param_1,pcVar4);
  return 0;
}



// FUNCTION 144f22120 FUN_144f22120 body=808 status=ok
// SIG undefined FUN_144f22120(void)

ulonglong FUN_144f22120(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,char param_6)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  char *pcVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  char *pcVar11;
  bool bVar12;
  longlong local_res18;
  undefined8 local_38 [2];
  
  iVar2 = *(int *)(param_3 + 4);
  pcVar8 = (char *)0x0;
  if (iVar2 == 0x80) {
    pcVar8 = "AWS_SIGV4";
    uVar4 = FUN_1452dc240(param_1,param_6);
    iVar2 = (int)uVar4;
  }
  else if (iVar2 == 8) {
    pcVar8 = "NTLM";
    uVar4 = FUN_1452cf0b0(param_1,param_6);
    iVar2 = (int)uVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) goto LAB_144f2235a;
      if (param_6 == '\0') {
        plVar9 = (longlong *)(param_1 + 0x13a0);
        if ((*plVar9 != 0) &&
           (lVar5 = FUN_144f23930(param_1,"Authorization",0xd), pcVar8 = (char *)0x0, lVar5 == 0)) {
          puVar6 = *(undefined1 **)(param_1 + 0x13a8);
          lVar5 = 0x1368;
          goto LAB_144f2224e;
        }
      }
      else if ((*(char *)(param_2 + 0x2ca) != '\0') &&
              (lVar5 = FUN_144f1d840(param_1,param_2,"Proxy-authorization",0x13), lVar5 == 0)) {
        puVar6 = *(undefined1 **)(param_1 + 0x13b8);
        plVar9 = (longlong *)(param_1 + 0x13b0);
        lVar5 = 0x1350;
LAB_144f2224e:
        local_38[0] = 0;
        local_res18 = 0;
        plVar1 = (longlong *)(lVar5 + param_1);
        puVar10 = &DAT_14996de1b;
        if (puVar6 != (undefined1 *)0x0) {
          puVar10 = puVar6;
        }
        puVar6 = &DAT_14996de1b;
        if ((undefined1 *)*plVar9 != (undefined1 *)0x0) {
          puVar6 = (undefined1 *)*plVar9;
        }
        lVar5 = FUN_144f2b8b0("%s:%s",puVar6,puVar10);
        if (lVar5 == 0) {
          return 0x1b;
        }
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(lVar7 + lVar5) != '\0');
        uVar3 = FUN_1452b8b50(lVar5,lVar7,&local_res18,local_38);
        if (uVar3 == 0) {
          if (local_res18 == 0) {
            (*(code *)PTR_free_14c6d9f28)(lVar5);
            return 9;
          }
          (*(code *)PTR_free_14c6d9f28)(*plVar1);
          pcVar8 = "";
          if (param_6 != '\0') {
            pcVar8 = "Proxy-";
          }
          lVar7 = FUN_144f2b8b0("%sAuthorization: Basic %s\r\n",pcVar8,local_res18);
          *plVar1 = lVar7;
          (*(code *)PTR_free_14c6d9f28)(local_res18);
          if (*plVar1 == 0) {
            (*(code *)PTR_free_14c6d9f28)(lVar5);
            return 0x1b;
          }
        }
        (*(code *)PTR_free_14c6d9f28)(lVar5);
        pcVar8 = "Basic";
        if (uVar3 != 0) {
          return (ulonglong)uVar3;
        }
      }
      *(undefined1 *)(param_3 + 0xc) = 1;
      goto LAB_144f2235a;
    }
    pcVar8 = "Digest";
    uVar4 = FUN_144f17100(param_1,param_6,param_4,param_5);
    iVar2 = (int)uVar4;
  }
  if (iVar2 != 0) {
    return uVar4;
  }
LAB_144f2235a:
  if (*(int *)(param_3 + 4) == 0x40) {
    if (((param_6 == '\0') && (*(longlong *)(param_1 + 0x920) != 0)) &&
       (lVar5 = FUN_144f23930(param_1,"Authorization",0xd), lVar5 == 0)) {
      pcVar8 = "Bearer";
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1368));
      lVar5 = FUN_144f2b8b0("Authorization: Bearer %s\r\n",*(undefined8 *)(param_1 + 0x920));
      *(longlong *)(param_1 + 0x1368) = lVar5;
      if (lVar5 == 0) {
        return 0x1b;
      }
    }
    *(undefined1 *)(param_3 + 0xc) = 1;
  }
  if (pcVar8 == (char *)0x0) {
    bVar12 = false;
  }
  else {
    if (param_6 == '\0') {
      puVar6 = *(undefined1 **)(param_1 + 0x13a0);
    }
    else {
      puVar6 = *(undefined1 **)(param_1 + 0x13b0);
    }
    pcVar11 = "Server";
    puVar10 = &DAT_14996de1b;
    if (puVar6 != (undefined1 *)0x0) {
      puVar10 = puVar6;
    }
    if (param_6 != '\0') {
      pcVar11 = "Proxy";
    }
    FUN_144f14ad0(param_1,"%s auth using %s with user \'%s\'",pcVar11,pcVar8,puVar10);
    bVar12 = *(char *)(param_3 + 0xc) == '\0';
  }
  *(bool *)(param_3 + 0xd) = bVar12;
  return 0;
}



// FUNCTION 144f22450 FUN_144f22450 body=248 status=ok
// SIG undefined FUN_144f22450(void)

size_t FUN_144f22450(void *param_1,longlong param_2,longlong param_3,size_t *param_4)

{
  size_t sVar1;
  size_t sVar2;
  size_t _Size;
  
  sVar1 = param_4[6];
  sVar2 = param_2 * param_3;
  if (*param_4 == 0) {
    return 0;
  }
  *(bool *)(sVar1 + 0x1d3) = (int)param_4[7] == 1;
  _Size = *(size_t *)(sVar1 + 0x330);
  if ((((_Size == 0) || ((longlong)sVar2 <= (longlong)_Size)) ||
      ((longlong)*param_4 <= (longlong)_Size)) &&
     (_Size = sVar2, (longlong)*param_4 <= (longlong)sVar2)) {
    memcpy(param_1,(void *)param_4[1],*param_4);
    sVar2 = *param_4;
    if (param_4[5] == 0) {
      *param_4 = 0;
      return sVar2;
    }
    param_4[1] = param_4[4];
    *param_4 = param_4[5];
    *(size_t *)(sVar1 + 0x1218) = param_4[2];
    *(size_t *)(sVar1 + 0x1220) = param_4[3];
    *(int *)(param_4 + 7) = (int)param_4[7] + 1;
    param_4[5] = 0;
    return sVar2;
  }
  memcpy(param_1,(void *)param_4[1],_Size);
  param_4[1] = param_4[1] + _Size;
  *param_4 = *param_4 - _Size;
  return _Size;
}



// FUNCTION 144f22550 FUN_144f22550 body=241 status=ok
// SIG undefined FUN_144f22550(void)

int FUN_144f22550(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x13cb) = 0;
  if (((*(char *)(param_1 + 0x13cc) == '\0') && (*(char *)(param_1 + 0x13c1) != '\n')) &&
     (bVar1 = *(byte *)(param_2 + 0x4d9), bVar1 != 10)) {
    if (*(char *)(param_1 + 0x13c0) == '\x01') {
      if (bVar1 < 0xb) {
        return 0;
      }
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar4 = 0;
    if ((bVar2) && (bVar1 < 0x14)) {
      lVar5 = FUN_144f23930(param_1,"Expect",6);
      if (lVar5 != 0) {
        uVar3 = FUN_144f1d660(lVar5,"Expect:",7,"100-continue",0xc);
        *(undefined1 *)(param_1 + 0x13cb) = uVar3;
        return 0;
      }
      iVar4 = thunk_FUN_144f07eb0(param_3,"Expect: 100-continue\r\n",0x16);
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0x13cb) = 1;
      }
    }
  }
  return iVar4;
}



// FUNCTION 144f22650 FUN_144f22650 body=203 status=ok
// SIG undefined FUN_144f22650(void)

undefined1 FUN_144f22650(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  bVar7 = 4 < param_3;
  do {
    uVar5 = 2;
    if (plVar1 == (longlong *)0x0) {
LAB_144f226e4:
      uVar4 = 5;
      if (param_3 < 6) {
        uVar4 = param_3;
      }
      iVar3 = FUN_144f195b0("HTTP/",param_2,uVar4);
      if (iVar3 != 0) {
        uVar5 = bVar7;
      }
      return uVar5;
    }
    lVar2 = *plVar1;
    uVar4 = 0xffffffffffffffff;
    do {
      uVar4 = uVar4 + 1;
    } while (*(char *)(lVar2 + uVar4) != '\0');
    uVar6 = param_3;
    if (uVar4 < param_3) {
      uVar6 = 0xffffffffffffffff;
      do {
        uVar6 = uVar6 + 1;
      } while (*(char *)(lVar2 + uVar6) != '\0');
    }
    iVar3 = FUN_144f195b0(lVar2,param_2,uVar6);
    if (iVar3 != 0) {
      uVar5 = bVar7;
      if (4 < param_3) {
        return bVar7;
      }
      goto LAB_144f226e4;
    }
    plVar1 = (longlong *)plVar1[1];
  } while( true );
}



// FUNCTION 144f22720 FUN_144f22720 body=108 status=ok
// SIG undefined FUN_144f22720(void)

ulonglong FUN_144f22720(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 0x40000) != 0) {
    uVar3 = 2;
    uVar2 = 5;
    if (param_4 < 6) {
      uVar2 = param_4;
    }
    iVar1 = FUN_144f195b0("RTSP/",param_3,uVar2);
    if (iVar1 != 0) {
      uVar3 = (ulonglong)(4 < param_4);
    }
    return uVar3;
  }
  uVar2 = FUN_144f22650(param_1,param_3,param_4,param_3);
  return uVar2;
}



// FUNCTION 144f22790 FUN_144f22790 body=92 status=ok
// SIG undefined FUN_144f22790(void)

void * FUN_144f22790(void *param_1,size_t param_2)

{
  void *_Dst;
  
  _Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)(param_2 + 1);
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  memcpy(_Dst,param_1,param_2);
  *(undefined1 *)((longlong)_Dst + param_2) = 0;
  return _Dst;
}



// FUNCTION 144f227f0 FUN_144f227f0 body=447 status=ok
// SIG undefined FUN_144f227f0(void)

int FUN_144f227f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res18;
  longlong local_res20;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [32];
  
  local_40 = 0;
  local_res20 = 0;
  local_48 = 0;
  local_res18 = 0;
  iVar2 = 3;
  FUN_144f07cf0(local_38,0x100000);
  iVar1 = FUN_1452cbab0(param_2,5,&local_res20,0);
  if ((iVar1 == 0) || (iVar1 == 0xe)) {
    if (local_res20 == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      iVar2 = 0;
    }
    else {
      iVar1 = FUN_1452cbab0(param_2,6,&local_40);
      if ((iVar1 == 0) || (iVar1 == 0xf)) {
        iVar1 = FUN_1452cbab0(param_2,2,&local_res18);
        if ((iVar1 == 0) || (iVar1 == 0xb)) {
          if (local_res18 != 0) {
            iVar1 = FUN_1452cbab0(param_2,3,&local_48,0);
            if ((iVar1 != 0) && (iVar1 != 0xc)) goto LAB_144f22969;
            if (local_res18 != 0) {
              iVar2 = FUN_144f07d50(local_38);
              if (iVar2 != 0) goto LAB_144f22969;
              if (local_48 != 0) {
                iVar2 = FUN_144f07d70(local_38,&DAT_149c08424);
                if (iVar2 != 0) goto LAB_144f22969;
              }
              iVar2 = FUN_144f07d50(local_38,&DAT_149c08428);
              if (iVar2 != 0) goto LAB_144f22969;
            }
          }
          iVar2 = FUN_144f07d50(local_38,local_res20);
          if (iVar2 == 0) {
            if (local_40 != 0) {
              iVar2 = FUN_144f07d70(local_38,&DAT_149c08424);
              if (iVar2 != 0) goto LAB_144f22969;
            }
            uVar3 = FUN_144f07e80(local_38);
            lVar4 = (*(code *)PTR__strdup_14c6d9f38)(uVar3);
            *(longlong *)(param_1 + 0x18) = lVar4;
            if (lVar4 != 0) {
              iVar2 = 0;
            }
          }
        }
      }
    }
  }
LAB_144f22969:
  (*(code *)PTR_free_14c6d9f28)(local_res18);
  (*(code *)PTR_free_14c6d9f28)(local_48);
  (*(code *)PTR_free_14c6d9f28)(local_res20);
  (*(code *)PTR_free_14c6d9f28)(local_40);
  FUN_144f07d10(local_38);
  return iVar2;
}



// FUNCTION 144f229b0 FUN_144f229b0 body=3096 status=ok
// SIG undefined FUN_144f229b0(void)

ulonglong FUN_144f229b0(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  byte local_res10 [8];
  ulonglong local_res18;
  longlong local_res20;
  longlong local_68;
  char *local_60;
  char *local_58;
  undefined1 local_50 [16];
  
  uVar14 = param_2 * param_3;
  local_res18 = 0;
  piVar4 = (int *)**(undefined8 **)(*(longlong *)(param_4 + 0x13e0) + 0x30);
  local_res20 = param_4;
  if (piVar4[3] == 0) {
    if (*piVar4 == 0) {
      if (uVar14 == 0) {
        return 0;
      }
      *piVar4 = ((byte)(*param_1 - 0x30U) < 10) + 1;
    }
    else if (uVar14 == 0) {
      return 0;
    }
    do {
      local_res10[0] = param_1[local_res18];
      if (*(longlong *)(piVar4 + 4) == 0) {
        lVar9 = FUN_1452dd630();
        *(longlong *)(piVar4 + 4) = lVar9;
        if (lVar9 != 0) {
          piVar4[8] = 0;
          piVar4[9] = 0;
          piVar4[6] = 0;
          FUN_144f07cf0(lVar9 + 0x98,10000);
          goto LAB_144f22a73;
        }
LAB_144f23597:
        piVar4[3] = 0x1b;
        goto LAB_144f2359e;
      }
LAB_144f22a73:
      piVar15 = piVar4 + 1;
      lVar5 = *(longlong *)(piVar4 + 4);
      lVar9 = lVar5 + 0x98;
      iVar6 = thunk_FUN_144f07eb0(lVar9,local_res10,1);
      if (iVar6 != 0) goto LAB_144f23597;
      lVar10 = FUN_144f07ea0(lVar9);
      pcVar11 = (char *)FUN_144f07e80(lVar9);
      if (*piVar4 != 1) {
        if (*piVar4 == 2) {
          iVar6 = *piVar15;
          if (iVar6 != 0) {
            if (iVar6 == 1) {
              iVar6 = piVar4[6];
              piVar4[6] = iVar6 + 1U;
              if (piVar4[2] == 0) {
                if ((local_res10[0] != 0x20) && (local_res10[0] != 9)) {
                  piVar4[2] = 1;
                }
              }
              else if (piVar4[2] == 1) {
                if (local_res10[0] != 0x20) {
                  pcVar11 = strchr("APM0123456789:",(int)(char)local_res10[0]);
                  goto joined_r0x000144f22c80;
                }
                *(longlong *)(piVar4 + 0x10) = *(longlong *)(piVar4 + 8);
                pcVar11[(ulonglong)(iVar6 + 1U) + *(longlong *)(piVar4 + 8) + -1] = '\0';
                *piVar15 = 2;
                piVar4[2] = 0;
                piVar4[6] = 0;
              }
            }
            else if (iVar6 == 2) {
              if (piVar4[2] == 0) goto switchD_144f233f7_caseD_0;
              if (piVar4[2] == 1) {
                iVar6 = piVar4[6];
                piVar4[6] = iVar6 + 1U;
                if (local_res10[0] == 0x20) {
                  pcVar11[(ulonglong)(iVar6 + 1U) + *(longlong *)(piVar4 + 8) + -1] = '\0';
                  lVar9 = 0;
                  do {
                    lVar10 = lVar9 + 1;
                    if ((&DAT_149c084c0)[lVar9] != (pcVar11 + *(longlong *)(piVar4 + 8))[lVar9]) {
                      iVar6 = FUN_1452b1ac0(pcVar11 + *(longlong *)(piVar4 + 8),local_50,10,
                                            lVar5 + 0x28);
                      if (iVar6 != 0) goto switchD_144f22e05_caseD_2e;
                      *(undefined4 *)(*(longlong *)(piVar4 + 4) + 8) = 0;
                      *(uint *)(*(longlong *)(piVar4 + 4) + 0x60) =
                           *(uint *)(*(longlong *)(piVar4 + 4) + 0x60) | 0x40;
                      goto LAB_144f22fee;
                    }
                    lVar9 = lVar10;
                  } while (lVar10 != 6);
                  *(undefined4 *)(lVar5 + 8) = 1;
                  *(undefined8 *)(lVar5 + 0x28) = 0;
                  *(uint *)(*(longlong *)(piVar4 + 4) + 0x60) =
                       *(uint *)(*(longlong *)(piVar4 + 4) + 0x60) | 0x40;
                  goto LAB_144f22fee;
                }
              }
            }
            else if (iVar6 == 3) {
              iVar6 = piVar4[2];
              if (iVar6 == 0) goto switchD_144f233f7_caseD_0;
              if (iVar6 == 1) {
                piVar4[6] = piVar4[6] + 1;
                if (local_res10[0] == 0xd) {
                  piVar4[2] = 2;
                  pcVar11[lVar10 + -1] = '\0';
                }
                else if (local_res10[0] == 10) {
                  *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(piVar4 + 8);
                  pcVar11[lVar10 + -1] = '\0';
                  iVar6 = FUN_144f237c0(local_res20,lVar5);
                  if (iVar6 != 0) goto LAB_144f233b0;
                  *piVar15 = 0;
                  piVar4[2] = 0;
                }
              }
              else if (iVar6 == 2) {
                if (local_res10[0] != 10) goto switchD_144f22e05_caseD_2e;
                *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(piVar4 + 8);
                iVar6 = FUN_144f237c0(local_res20,lVar5);
                if (iVar6 != 0) goto LAB_144f233b0;
                *piVar15 = 0;
                piVar4[2] = 0;
              }
            }
            goto switchD_144f22d08_default;
          }
          uVar7 = piVar4[6] + 1;
          piVar4[6] = uVar7;
          if (uVar7 < 9) {
            pcVar11 = strchr("0123456789-",(int)(char)local_res10[0]);
            if (pcVar11 != (char *)0x0) goto switchD_144f22d08_default;
          }
          else if ((uVar7 == 9) && (local_res10[0] == 0x20)) {
            piVar4[2] = 0;
            goto LAB_144f2356a;
          }
switchD_144f22e05_caseD_2e:
          piVar4[3] = 0x57;
        }
        else {
          uVar14 = uVar14 + 1;
        }
        goto LAB_144f2359e;
      }
      switch(*piVar15) {
      case 0:
        if (piVar4[2] != 0) {
          if (piVar4[2] == 1) {
            uVar7 = piVar4[6];
            piVar4[6] = uVar7 + 1;
            if (local_res10[0] == 0xd) {
              piVar4[6] = uVar7;
              FUN_144f07e60(lVar9,lVar10 + -1);
            }
            else if (local_res10[0] == 10) {
              pcVar11[uVar7] = '\0';
              iVar6 = strncmp("total ",pcVar11,6);
              if (iVar6 == 0) {
                for (pbVar12 = (byte *)(pcVar11 + 6);
                    (bVar2 = *pbVar12, bVar2 == 0x20 || (bVar2 == 9)); pbVar12 = pbVar12 + 1) {
                }
                while ('/' < (char)bVar2) {
                  if (0x39 < bVar2) goto switchD_144f22e05_caseD_2e;
                  pbVar1 = pbVar12 + 1;
                  pbVar12 = pbVar12 + 1;
                  bVar2 = *pbVar1;
                }
                if (bVar2 == 0) {
                  *piVar15 = 1;
                  FUN_144f07dc0(lVar9);
                  break;
                }
              }
              goto switchD_144f22e05_caseD_2e;
            }
          }
          break;
        }
        if (local_res10[0] == 0x74) {
          piVar4[6] = piVar4[6] + 1;
          piVar4[2] = 1;
          break;
        }
        *piVar15 = 1;
        FUN_144f07dc0(lVar9);
        goto LAB_144f23580;
      case 1:
        switch(local_res10[0]) {
        case 0x2d:
          *(undefined4 *)(lVar5 + 8) = 0;
          break;
        default:
          goto switchD_144f22e05_caseD_2e;
        case 0x44:
          *(undefined4 *)(lVar5 + 8) = 7;
          break;
        case 0x62:
          *(undefined4 *)(lVar5 + 8) = 3;
          break;
        case 99:
          *(undefined4 *)(lVar5 + 8) = 4;
          break;
        case 100:
          *(undefined4 *)(lVar5 + 8) = 1;
          break;
        case 0x6c:
          *(undefined4 *)(lVar5 + 8) = 2;
          break;
        case 0x70:
          *(undefined4 *)(lVar5 + 8) = 5;
          break;
        case 0x73:
          *(undefined4 *)(lVar5 + 8) = 6;
        }
        *piVar15 = 2;
        piVar4[6] = 0;
        piVar4[8] = 1;
        piVar4[9] = 0;
        break;
      case 2:
        uVar7 = piVar4[6] + 1;
        piVar4[6] = uVar7;
        if (uVar7 < 10) {
          pcVar11 = strchr("rwx-tTsS",(int)(char)local_res10[0]);
joined_r0x000144f22c80:
          if (pcVar11 == (char *)0x0) goto switchD_144f22e05_caseD_2e;
        }
        else if (uVar7 == 10) {
          if (local_res10[0] == 0x20) {
            pcVar11[10] = '\0';
            lVar9 = *(longlong *)(piVar4 + 8);
            if (pcVar11[lVar9] == 'r') {
              uVar7 = 0x100;
            }
            else {
              uVar7 = 0;
              if (pcVar11[lVar9] != '-') {
                uVar7 = 0x1000000;
              }
            }
            if (pcVar11[lVar9 + 1] == 'w') {
              uVar7 = uVar7 | 0x80;
            }
            else if (pcVar11[lVar9 + 1] != '-') {
              uVar7 = uVar7 | 0x1000000;
            }
            cVar3 = pcVar11[lVar9 + 2];
            if (cVar3 == 'x') {
              uVar7 = uVar7 | 0x40;
            }
            else if (cVar3 == 's') {
              uVar7 = uVar7 | 0x840;
            }
            else if (cVar3 == 'S') {
              uVar7 = uVar7 | 0x800;
            }
            else if (cVar3 != '-') {
              uVar7 = uVar7 | 0x1000000;
            }
            if (pcVar11[lVar9 + 3] == 'r') {
              uVar7 = uVar7 | 0x20;
            }
            else if (pcVar11[lVar9 + 3] != '-') {
              uVar7 = uVar7 | 0x1000000;
            }
            if (pcVar11[lVar9 + 4] == 'w') {
              uVar7 = uVar7 | 0x10;
            }
            else if (pcVar11[lVar9 + 4] != '-') {
              uVar7 = uVar7 | 0x1000000;
            }
            cVar3 = pcVar11[lVar9 + 5];
            if (cVar3 == 'x') {
              uVar7 = uVar7 | 8;
            }
            else if (cVar3 == 's') {
              uVar7 = uVar7 | 0x408;
            }
            else if (cVar3 == 'S') {
              uVar7 = uVar7 | 0x400;
            }
            else if (cVar3 != '-') {
              uVar7 = uVar7 | 0x1000000;
            }
            if (pcVar11[lVar9 + 6] == 'r') {
              uVar7 = uVar7 | 4;
            }
            else if (pcVar11[lVar9 + 6] != '-') {
              uVar7 = uVar7 | 0x1000000;
            }
            if (pcVar11[lVar9 + 7] == 'w') {
              uVar7 = uVar7 | 2;
            }
            else if (pcVar11[lVar9 + 7] != '-') {
              uVar7 = uVar7 | 0x1000000;
            }
            cVar3 = pcVar11[lVar9 + 8];
            if (cVar3 == 'x') {
              uVar7 = uVar7 | 1;
            }
            else if (cVar3 == 't') {
              uVar7 = uVar7 | 0x201;
            }
            else if (cVar3 == 'T') {
              uVar7 = uVar7 | 0x200;
            }
            else if (cVar3 != '-') {
              uVar7 = uVar7 | 0x1000000;
            }
            if ((uVar7 & 0x1000000) == 0) {
              *(uint *)(*(longlong *)(piVar4 + 4) + 0x60) =
                   *(uint *)(*(longlong *)(piVar4 + 4) + 0x60) | 8;
              *(uint *)(*(longlong *)(piVar4 + 4) + 0x18) = uVar7;
              *(undefined8 *)(piVar4 + 0x12) = *(undefined8 *)(piVar4 + 8);
LAB_144f22fee:
              piVar4[6] = 0;
              *piVar15 = 3;
              piVar4[2] = 0;
              break;
            }
          }
          goto switchD_144f22e05_caseD_2e;
        }
        break;
      case 3:
        if (piVar4[2] == 0) {
LAB_144f2309d:
          if (local_res10[0] != 0x20) {
            if ((byte)(local_res10[0] - 0x30) < 10) goto LAB_144f23403;
            goto switchD_144f22e05_caseD_2e;
          }
        }
        else if (piVar4[2] == 1) {
          iVar6 = piVar4[6];
          piVar4[6] = iVar6 + 1U;
          if (local_res10[0] == 0x20) {
            pcVar11[(ulonglong)(iVar6 + 1U) + *(longlong *)(piVar4 + 8) + -1] = '\0';
            lVar8 = strtol(pcVar11 + *(longlong *)(piVar4 + 8),&local_60,10);
            if ((*local_60 == '\0') && (lVar8 + 0x7fffffffU < 0xfffffffe)) {
              *(uint *)(*(longlong *)(piVar4 + 4) + 0x60) =
                   *(uint *)(*(longlong *)(piVar4 + 4) + 0x60) | 0x80;
              *(long *)(*(longlong *)(piVar4 + 4) + 0x30) = lVar8;
            }
            *piVar15 = 4;
            piVar4[6] = 0;
            piVar4[8] = 0;
            piVar4[9] = 0;
            piVar4[2] = 0;
          }
          else {
LAB_144f2308e:
            if (9 < (byte)(local_res10[0] - 0x30)) goto switchD_144f22e05_caseD_2e;
          }
        }
        break;
      case 4:
        if (piVar4[2] == 0) {
switchD_144f233f7_caseD_0:
          if (local_res10[0] != 0x20) {
LAB_144f23403:
            piVar4[6] = 1;
            *(longlong *)(piVar4 + 8) = lVar10 + -1;
            piVar4[2] = 1;
          }
        }
        else if (piVar4[2] == 1) {
          iVar6 = piVar4[6];
          piVar4[6] = iVar6 + 1U;
          if (local_res10[0] == 0x20) {
            pcVar11[(ulonglong)(iVar6 + 1U) + *(longlong *)(piVar4 + 8) + -1] = '\0';
            *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(piVar4 + 8);
            *piVar15 = 5;
            piVar4[2] = 0;
            piVar4[8] = 0;
            piVar4[9] = 0;
            piVar4[6] = 0;
          }
        }
        break;
      case 5:
        if (piVar4[2] == 0) goto switchD_144f233f7_caseD_0;
        if (piVar4[2] == 1) {
          iVar6 = piVar4[6];
          piVar4[6] = iVar6 + 1U;
          if (local_res10[0] == 0x20) {
            pcVar11[(ulonglong)(iVar6 + 1U) + *(longlong *)(piVar4 + 8) + -1] = '\0';
            *(undefined8 *)(piVar4 + 0xe) = *(undefined8 *)(piVar4 + 8);
            *piVar15 = 6;
            piVar4[2] = 0;
            piVar4[8] = 0;
            piVar4[9] = 0;
            piVar4[6] = 0;
          }
        }
        break;
      case 6:
        if (piVar4[2] == 0) goto LAB_144f2309d;
        if (piVar4[2] == 1) {
          iVar6 = piVar4[6];
          piVar4[6] = iVar6 + 1U;
          if (local_res10[0] != 0x20) goto LAB_144f2308e;
          pcVar11[(ulonglong)(iVar6 + 1U) + *(longlong *)(piVar4 + 8) + -1] = '\0';
          iVar6 = FUN_1452b1ac0(pcVar11 + *(longlong *)(piVar4 + 8),&local_58,10,&local_68);
          if (iVar6 == 0) {
            if ((*local_58 == '\0') && (local_68 + 0x7fffffffffffffffU < 0xfffffffffffffffe)) {
              *(uint *)(*(longlong *)(piVar4 + 4) + 0x60) =
                   *(uint *)(*(longlong *)(piVar4 + 4) + 0x60) | 0x40;
              *(longlong *)(*(longlong *)(piVar4 + 4) + 0x28) = local_68;
            }
            *piVar15 = 7;
            piVar4[6] = 0;
            piVar4[8] = 0;
            piVar4[9] = 0;
            piVar4[2] = 0;
          }
        }
        break;
      case 7:
        switch(piVar4[2]) {
        case 0:
          if (local_res10[0] != 0x20) {
            if (((9 < (byte)(local_res10[0] - 0x30)) && (0x19 < (byte)(local_res10[0] + 0x9f))) &&
               (0x19 < (byte)(local_res10[0] + 0xbf))) goto switchD_144f22e05_caseD_2e;
            goto LAB_144f23403;
          }
          break;
        case 1:
          piVar4[6] = piVar4[6] + 1;
          if (local_res10[0] == 0x20) {
            piVar4[2] = 2;
          }
          else {
LAB_144f23259:
            uVar7 = local_res10[0] - 0x2e;
            if ((byte)uVar7 < 0x2d) {
              uVar13 = 0x1ffffff80ffd;
LAB_144f23343:
              if ((uVar13 >> ((ulonglong)uVar7 & 0x3f) & 1) != 0) break;
            }
LAB_144f2334d:
            if (0x19 < (byte)(local_res10[0] + 0x9f)) goto switchD_144f22e05_caseD_2e;
          }
          break;
        case 2:
          piVar4[6] = piVar4[6] + 1;
          if (local_res10[0] != 0x20) {
            if (((9 < (byte)(local_res10[0] - 0x30)) && (0x19 < (byte)(local_res10[0] + 0x9f))) &&
               (0x19 < (byte)(local_res10[0] + 0xbf))) goto switchD_144f22e05_caseD_2e;
            piVar4[2] = 3;
          }
          break;
        case 3:
          piVar4[6] = piVar4[6] + 1;
          if (local_res10[0] != 0x20) goto LAB_144f23259;
          piVar4[2] = 4;
          break;
        case 4:
          piVar4[6] = piVar4[6] + 1;
          if (local_res10[0] != 0x20) {
            if (((9 < (byte)(local_res10[0] - 0x30)) && (0x19 < (byte)(local_res10[0] + 0x9f))) &&
               (0x19 < (byte)(local_res10[0] + 0xbf))) goto switchD_144f22e05_caseD_2e;
            piVar4[2] = 5;
          }
          break;
        case 5:
          iVar6 = piVar4[6];
          piVar4[6] = iVar6 + 1U;
          if (local_res10[0] != 0x20) {
            uVar7 = local_res10[0] - 0x2e;
            if ((byte)uVar7 < 0x2d) {
              uVar13 = 0x1ffffff81ffd;
              goto LAB_144f23343;
            }
            goto LAB_144f2334d;
          }
          pcVar11[(ulonglong)(iVar6 + 1U) + *(longlong *)(piVar4 + 8) + -1] = '\0';
          *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(piVar4 + 8);
          *piVar15 = (*(int *)(lVar5 + 8) == 2) + 8;
          piVar4[2] = 0;
        }
        break;
      case 8:
        iVar6 = piVar4[2];
        if (iVar6 == 0) goto switchD_144f233f7_caseD_0;
        if (iVar6 == 1) {
          uVar7 = piVar4[6] + 1;
          piVar4[6] = uVar7;
          if (local_res10[0] == 0xd) {
            piVar4[2] = 2;
          }
          else if (local_res10[0] == 10) goto LAB_144f23384;
        }
        else if (iVar6 == 2) {
          if (local_res10[0] != 10) goto switchD_144f22e05_caseD_2e;
          uVar7 = piVar4[6];
LAB_144f23384:
          pcVar11[(ulonglong)uVar7 + *(longlong *)(piVar4 + 8) + -1] = '\0';
          *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(piVar4 + 8);
          *piVar15 = 1;
          iVar6 = FUN_144f237c0(local_res20,lVar5);
          if (iVar6 != 0) goto LAB_144f233b0;
        }
        break;
      case 9:
        switch(piVar4[2]) {
        case 0:
          goto switchD_144f233f7_caseD_0;
        case 1:
          piVar4[6] = piVar4[6] + 1;
          if (local_res10[0] == 0x20) {
            piVar4[2] = 2;
          }
          else if ((local_res10[0] == 0xd) || (local_res10[0] == 10))
          goto switchD_144f22e05_caseD_2e;
          break;
        case 2:
          piVar4[6] = piVar4[6] + 1;
          if (local_res10[0] == 0x2d) {
            piVar4[2] = 3;
          }
          else {
LAB_144f23462:
            if ((local_res10[0] == 0xd) || (local_res10[0] == 10)) goto switchD_144f22e05_caseD_2e;
            piVar4[2] = 1;
          }
          break;
        case 3:
          piVar4[6] = piVar4[6] + 1;
          if (local_res10[0] != 0x3e) goto LAB_144f23462;
          piVar4[2] = 4;
          break;
        case 4:
          iVar6 = piVar4[6];
          piVar4[6] = iVar6 + 1U;
          if (local_res10[0] == 0x20) {
            piVar4[2] = 5;
            pcVar11[(ulonglong)(iVar6 + 1U) + *(longlong *)(piVar4 + 8) + -4] = '\0';
            *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(piVar4 + 8);
            piVar4[6] = 0;
            piVar4[8] = 0;
            piVar4[9] = 0;
          }
          else {
            if ((local_res10[0] == 0xd) || (local_res10[0] == 10)) goto switchD_144f22e05_caseD_2e;
            piVar4[2] = 1;
          }
          break;
        case 5:
          if ((local_res10[0] == 0xd) || (local_res10[0] == 10)) goto switchD_144f22e05_caseD_2e;
          piVar4[2] = 6;
          *(longlong *)(piVar4 + 8) = lVar10 + -1;
          piVar4[6] = 1;
          break;
        case 6:
          uVar7 = piVar4[6] + 1;
          piVar4[6] = uVar7;
          if (local_res10[0] == 0xd) {
            piVar4[2] = 7;
          }
          else if (local_res10[0] == 10) goto LAB_144f23545;
          break;
        case 7:
          if (local_res10[0] != 10) goto switchD_144f22e05_caseD_2e;
          uVar7 = piVar4[6];
LAB_144f23545:
          pcVar11[(ulonglong)uVar7 + *(longlong *)(piVar4 + 8) + -1] = '\0';
          *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(piVar4 + 8);
          iVar6 = FUN_144f237c0(local_res20,lVar5);
          if (iVar6 != 0) {
LAB_144f233b0:
            piVar4[3] = iVar6;
            goto LAB_144f2359e;
          }
LAB_144f2356a:
          *piVar15 = 1;
        }
      }
switchD_144f22d08_default:
      local_res18 = local_res18 + 1;
LAB_144f23580:
    } while (local_res18 < uVar14);
  }
  else {
LAB_144f2359e:
    if (*(longlong *)(piVar4 + 4) != 0) {
      FUN_1452dd650();
      piVar4[4] = 0;
      piVar4[5] = 0;
    }
  }
  return uVar14;
}



// FUNCTION 144f236a0 FUN_144f236a0 body=4 status=ok
// SIG undefined FUN_144f236a0(void)

undefined4 FUN_144f236a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 144f236b0 FUN_144f236b0 body=15 status=ok
// SIG undefined FUN_144f236b0(void)

void FUN_144f236b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000144f236b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_calloc_14c6d9f40)(1);
  return;
}



// FUNCTION 144f236c0 FUN_144f236c0 body=57 status=ok
// SIG undefined FUN_144f236c0(void)

void FUN_144f236c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1452dd650(*(undefined8 *)(lVar1 + 0x10));
  }
  (*(code *)PTR_free_14c6d9f28)(lVar1);
  *param_1 = 0;
  return;
}



// FUNCTION 144f23700 FUN_144f23700 body=37 status=ok
// SIG undefined FUN_144f23700(void)

undefined8 FUN_144f23700(longlong param_1)

{
  FUN_144f1a730(param_1 + 0x10,&LAB_144f237b0);
  *(undefined1 *)(param_1 + 0x40) = 1;
  return 0;
}



// FUNCTION 144f23730 FUN_144f23730 body=120 status=ok
// SIG undefined FUN_144f23730(void)

void FUN_144f23730(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if ((code *)puVar1[7] != (code *)0x0) {
      (*(code *)puVar1[7])(puVar1[6]);
      puVar1[7] = 0;
      puVar1[6] = 0;
    }
    FUN_144f1a890(puVar1 + 2,0);
    (*(code *)PTR_free_14c6d9f28)(*puVar1);
    *puVar1 = 0;
    (*(code *)PTR_free_14c6d9f28)(puVar1[1]);
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 8) = 1;
    (*(code *)PTR_free_14c6d9f28)(puVar1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 144f237c0 FUN_144f237c0 body=354 status=ok
// SIG undefined FUN_144f237c0(void)

undefined8 FUN_144f237c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  code *pcVar9;
  longlong lVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x13e0);
  bVar4 = true;
  plVar2 = *(longlong **)(lVar1 + 0x30);
  lVar3 = *plVar2;
  lVar6 = FUN_144f07e80(param_2 + 0x13);
  lVar10 = 0;
  *param_2 = *(longlong *)(lVar3 + 0x28) + lVar6;
  lVar7 = *(longlong *)(lVar3 + 0x38) + lVar6;
  if (*(longlong *)(lVar3 + 0x38) == 0) {
    lVar7 = lVar10;
  }
  param_2[10] = lVar7;
  lVar7 = lVar6 + *(longlong *)(lVar3 + 0x48);
  if (*(longlong *)(lVar3 + 0x48) == 0) {
    lVar7 = lVar10;
  }
  param_2[8] = lVar7;
  lVar7 = *(longlong *)(lVar3 + 0x50) + lVar6;
  if (*(longlong *)(lVar3 + 0x50) == 0) {
    lVar7 = lVar10;
  }
  param_2[0xb] = lVar7;
  param_2[7] = *(longlong *)(lVar3 + 0x40) + lVar6;
  lVar7 = *(longlong *)(lVar3 + 0x30) + lVar6;
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    lVar7 = lVar10;
  }
  param_2[9] = lVar7;
  pcVar9 = *(code **)(param_1 + 0xa10);
  if (pcVar9 == (code *)0x0) {
    pcVar9 = FUN_1452dd680;
  }
  FUN_144bbace0(param_1,1);
  iVar5 = (*pcVar9)(*(undefined8 *)(param_1 + 0xa18),*(undefined8 *)(lVar1 + 8),*param_2);
  if (iVar5 == 0) {
    if (((int)param_2[1] == 2) && ((char *)param_2[0xb] != (char *)0x0)) {
      pcVar8 = strstr((char *)param_2[0xb]," -> ");
      bVar4 = true;
      if (pcVar8 != (char *)0x0) {
        bVar4 = false;
      }
    }
    FUN_144bbace0(param_1,0);
    if (bVar4) {
      FUN_144f1a750(lVar1 + 0x10,*(undefined8 *)(lVar1 + 0x18),param_2,param_2 + 0x10);
      goto LAB_144f238fb;
    }
  }
  else {
    FUN_144bbace0(param_1,0);
  }
  FUN_1452dd650(param_2);
LAB_144f238fb:
  *(undefined8 *)(*plVar2 + 0x10) = 0;
  return 0;
}



// FUNCTION 144f23930 FUN_144f23930 body=110 status=ok
// SIG undefined FUN_144f23930(void)

longlong FUN_144f23930(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x348);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    iVar2 = FUN_144f195b0(*plVar1,param_2,param_3);
    if ((iVar2 != 0) && ((byte)(*(char *)(*plVar1 + param_3) - 0x3aU) < 2)) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return *plVar1;
}



// FUNCTION 144f239a0 FUN_144f239a0 body=45 status=ok
// SIG undefined FUN_144f239a0(void)

void FUN_144f239a0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x1218) = *(undefined8 *)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x1220) = *(undefined8 *)(param_1 + 0x1f8);
  *(bool *)(param_1 + 0x13d8) = *(char *)(param_1 + 0x13c2) == '\x04';
  return;
}



// FUNCTION 144f239d0 FUN_144f239d0 body=912 status=ok
// SIG undefined FUN_144f239d0(void)

ulonglong FUN_144f239d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x1270);
  if ((lVar6 == 0) && (*(longlong *)(param_1 + 0xa88) == 0)) goto LAB_144f23a57;
  if (*(char *)(param_1 + 0x13d4) == '\0') {
    if (lVar6 == 0) goto LAB_144f23a25;
  }
  else {
    (*(code *)PTR_free_14c6d9f28)(lVar6);
    *(undefined8 *)(param_1 + 0x1270) = 0;
    *(undefined1 *)(param_1 + 0x13d4) = 0;
LAB_144f23a25:
    if (*(longlong *)(param_1 + 0xa88) != 0) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = FUN_1452cbab0(*(undefined8 *)(param_1 + 0xa88),0,param_1 + 0x7e8,0);
      if (iVar2 != 0) {
LAB_144f23a57:
        FUN_144f14b70(param_1,"No URL set");
        return 3;
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x218) != 0) && (*(longlong *)(param_1 + 0x340) != 0)) {
    FUN_144f14b70(param_1,"cannot mix POSTFIELDS with RESUME_FROM");
    return 0x2b;
  }
  *(undefined1 *)(param_1 + 0x13d2) = *(undefined1 *)(param_1 + 0xabc);
  *(undefined1 *)(param_1 + 0x13d3) = *(undefined1 *)(param_1 + 0xabe);
  *(undefined1 *)(param_1 + 0x13c2) = *(undefined1 *)(param_1 + 0x531);
  *(undefined8 *)(param_1 + 0x1270) = *(undefined8 *)(param_1 + 0x7e8);
  uVar4 = FUN_144f0cc10(param_1,*(undefined8 *)(param_1 + 0x6b8));
  uVar7 = uVar4 & 0xffffffff;
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  *(undefined1 *)(param_1 + 0x13c0) = *(undefined1 *)(param_1 + 0x532);
  *(undefined4 *)(param_1 + 0xe20) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(param_1 + 0xe30) = *(undefined4 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0xda0) = 0;
  *(undefined1 *)(param_1 + 0x13c5) = 0;
  *(undefined1 *)(param_1 + 0x13c7) = 0;
  *(undefined1 *)(param_1 + 0x13c1) = 0;
  *(undefined1 *)(param_1 + 0x13c9) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1420));
  *(undefined8 *)(param_1 + 0x1420) = 0;
  FUN_144f0f260(param_1);
  cVar1 = *(char *)(param_1 + 0x13c2);
  if (cVar1 == '\x04') {
    *(undefined8 *)(param_1 + 0x11f8) = *(undefined8 *)(param_1 + 800);
  }
  else if ((cVar1 == '\0') || (cVar1 == '\x05')) {
    *(undefined8 *)(param_1 + 0x11f8) = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x228);
    *(longlong *)(param_1 + 0x11f8) = lVar6;
    if ((*(longlong *)(param_1 + 0x218) != 0) && (lVar6 == -1)) {
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x218) + lVar6) != '\0');
      *(longlong *)(param_1 + 0x11f8) = lVar6;
    }
  }
  FUN_144f064a0(param_1);
  if (*(longlong *)(param_1 + 0x1280) != 0) {
    uVar3 = FUN_144f1bb30(param_1);
    uVar7 = (ulonglong)uVar3;
  }
  FUN_144f19200(param_1);
  if ((int)uVar7 == 0) {
    *(undefined1 *)(param_1 + 0x13c8) = 1;
    FUN_144f13850(param_1);
    FUN_144f25fb0(param_1);
    FUN_144f25bd0(param_1);
    *(uint *)(param_1 + 0xe24) = *(uint *)(param_1 + 0xe24) & *(uint *)(param_1 + 0xe20);
    *(uint *)(param_1 + 0xe34) = *(uint *)(param_1 + 0xe34) & *(uint *)(param_1 + 0xe30);
    *(char *)(param_1 + 0x13ca) = *(char *)(param_1 + 0xac4);
    if (*(char *)(param_1 + 0xac4) == '\0') {
LAB_144f23c83:
      uVar3 = FUN_144f190d0(param_1,*(undefined8 *)(param_1 + 0xaf8));
      uVar7 = (ulonglong)uVar3;
      goto LAB_144f23c94;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x13e0);
    if (puVar5 != (undefined8 *)0x0) {
LAB_144f23c47:
      if (2 < (byte)(*(char *)(puVar5 + 8) - 1U)) {
        if (puVar5[6] != 0) {
          (*(code *)puVar5[7])();
        }
        (*(code *)PTR_free_14c6d9f28)(puVar5[1]);
        puVar5[1] = 0;
        (*(code *)PTR_free_14c6d9f28)(*puVar5);
        *puVar5 = 0;
        iVar2 = FUN_144f23700(puVar5);
        if (iVar2 != 0) goto LAB_144f23cd0;
      }
      goto LAB_144f23c83;
    }
    puVar5 = (undefined8 *)(*(code *)PTR_calloc_14c6d9f40)(1,0x48);
    *(undefined8 **)(param_1 + 0x13e0) = puVar5;
    if (puVar5 != (undefined8 *)0x0) goto LAB_144f23c47;
LAB_144f23cd0:
    uVar7 = 0x1b;
  }
  else {
LAB_144f23c94:
    if (*(longlong *)(param_1 + 0x840) != 0) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1358));
      *(undefined8 *)(param_1 + 0x1358) = 0;
      lVar6 = FUN_144f2b8b0("User-Agent: %s\r\n",*(undefined8 *)(param_1 + 0x840));
      *(longlong *)(param_1 + 0x1358) = lVar6;
      if (lVar6 == 0) goto LAB_144f23cd0;
    }
    if ((int)uVar7 == 0) {
      uVar3 = FUN_144bb6f60(param_1 + 0x13a0,*(undefined8 *)(param_1 + 0x870));
      uVar7 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        uVar3 = FUN_144bb6f60(param_1 + 0x13a8,*(undefined8 *)(param_1 + 0x878));
        uVar7 = (ulonglong)uVar3;
        if (uVar3 == 0) {
          uVar3 = FUN_144bb6f60(param_1 + 0x13b0,*(undefined8 *)(param_1 + 0x888));
          uVar7 = (ulonglong)uVar3;
          if (uVar3 == 0) {
            uVar3 = FUN_144bb6f60(param_1 + 0x13b8,*(undefined8 *)(param_1 + 0x890));
            uVar7 = (ulonglong)uVar3;
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
    FUN_1452cf6e0(param_1);
  }
  return uVar7;
}



// FUNCTION 144f23d60 FUN_144f23d60 body=3 status=ok
// SIG undefined FUN_144f23d60(void)

undefined8 FUN_144f23d60(void)

{
  return 0;
}



// FUNCTION 144f23d70 FUN_144f23d70 body=1308 status=ok
// SIG undefined FUN_144f23d70(void)

undefined8 FUN_144f23d70(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  longlong local_res10 [2];
  longlong local_res20;
  char *local_48 [2];
  
  bVar2 = false;
  bVar3 = false;
  local_res10[0] = param_2;
  if (param_3 == 1) {
LAB_144f23edb:
    if (((*(int *)(param_1 + 0x150) != 0x191) && (*(int *)(param_1 + 0x150) != 0x197)) &&
       (lVar6 = FUN_1452cc990(local_res10[0],0,0,0), lVar6 != 0)) {
      bVar2 = true;
    }
    if (param_3 != 1) goto LAB_144f23f1c;
    uVar5 = 8;
  }
  else {
    *(int *)(param_1 + 0xda4) = *(int *)(param_1 + 0xda4) + 1;
    if (param_3 == 3) {
      if ((*(int *)(param_1 + 0x214) == -1) ||
         (*(int *)(param_1 + 0xda0) < *(int *)(param_1 + 0x214))) {
        *(int *)(param_1 + 0xda0) = *(int *)(param_1 + 0xda0) + 1;
        if (*(char *)(param_1 + 0xacd) != '\0') {
          local_res20 = 0;
          if (*(char *)(param_1 + 0x13d5) != '\0') {
            (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1278));
            *(undefined8 *)(param_1 + 0x1278) = 0;
            *(undefined1 *)(param_1 + 0x13d5) = 0;
          }
          lVar6 = FUN_1452cb910();
          if (lVar6 == 0) {
            return 0x1b;
          }
          iVar4 = FUN_1452cc2c0(lVar6,0,*(undefined8 *)(param_1 + 0x1270),0);
          if ((((iVar4 == 0) && (iVar4 = FUN_1452cc2c0(lVar6,9,0,0), iVar4 == 0)) &&
              (iVar4 = FUN_1452cc2c0(lVar6,2,0,0), iVar4 == 0)) &&
             (iVar4 = FUN_1452cc2c0(lVar6,3,0,0), iVar4 == 0)) {
            iVar4 = FUN_1452cbab0(lVar6,0,&local_res20,0);
          }
          FUN_1452cb920(lVar6);
          if (iVar4 != 0) {
            return 0x1b;
          }
          if (local_res20 == 0) {
            return 0x1b;
          }
          *(longlong *)(param_1 + 0x1278) = local_res20;
          *(undefined1 *)(param_1 + 0x13d5) = 1;
        }
      }
      else {
        bVar3 = true;
        param_3 = 1;
      }
      goto LAB_144f23edb;
    }
    if (param_3 != 2) goto LAB_144f23edb;
LAB_144f23f1c:
    uVar5 = 0x800;
    if (param_3 == 3) {
      uVar5 = 0x880;
    }
    uVar5 = -(uint)(*(char *)(param_1 + 0xadd) != '\0') & 0x10 | uVar5;
  }
  iVar4 = FUN_1452cc2c0(*(undefined8 *)(param_1 + 0x1228),0,local_res10[0],uVar5);
  if (iVar4 != 0) {
    if (param_3 != 1) {
      uVar7 = FUN_144bbe0a0(iVar4);
      FUN_144f14b70(param_1,"The redirect target URL could not be parsed: %s",uVar7);
      uVar7 = FUN_144f0e6a0(iVar4);
      return uVar7;
    }
    local_res10[0] = (*(code *)PTR__strdup_14c6d9f38)(local_res10[0]);
    if (local_res10[0] == 0) {
      return 0x1b;
    }
LAB_144f241ef:
    *(longlong *)(param_1 + 0x1420) = local_res10[0];
    if (!bVar3) {
      return 0;
    }
    FUN_144f14b70(param_1,"Maximum (%ld) redirects followed",*(undefined4 *)(param_1 + 0x214));
    return 0x2f;
  }
  iVar4 = FUN_1452cbab0(*(undefined8 *)(param_1 + 0x1228),0,local_res10,0);
  if (iVar4 != 0) {
    uVar7 = FUN_144f0e6a0(iVar4);
    return uVar7;
  }
  if (*(char *)(param_1 + 0xaca) == '\0') {
    if (param_3 == 1) goto LAB_144f241ef;
    if ((*(ushort *)(param_1 + 0x208) == 0) || (*(char *)(param_1 + 0x13c8) == '\0')) {
      iVar4 = FUN_1452cbab0(*(undefined8 *)(param_1 + 0x1228),6,local_48,1);
      if (iVar4 != 0) goto LAB_144f24017;
      uVar5 = atoi(local_48[0]);
      (*(code *)PTR_free_14c6d9f28)(local_48[0]);
    }
    else {
      uVar5 = (uint)*(ushort *)(param_1 + 0x208);
    }
    if (uVar5 == *(uint *)(param_1 + 0x1468)) {
      iVar4 = FUN_1452cbab0(*(undefined8 *)(param_1 + 0x1228),1,&local_res20,0);
      if (iVar4 != 0) {
LAB_144f24017:
        (*(code *)PTR_free_14c6d9f28)(local_res10[0]);
        uVar7 = FUN_144f0e6a0(iVar4);
        return uVar7;
      }
      lVar6 = FUN_144f0f160(local_res20,0xffffffffffffffff);
      if ((lVar6 == 0) || (*(int *)(lVar6 + 0x84) == *(int *)(param_1 + 0x14a8))) {
        (*(code *)PTR_free_14c6d9f28)(local_res20);
        goto LAB_144f24109;
      }
      FUN_144f14ad0(param_1,"Clear auth, redirects scheme from %s to %s",
                    *(undefined8 *)(param_1 + 0x14a0),local_res20);
      (*(code *)PTR_free_14c6d9f28)(local_res20);
    }
    else {
      FUN_144f14ad0(param_1,"Clear auth, redirects to port from %u to %u",
                    *(uint *)(param_1 + 0x1468),uVar5);
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x13a0));
    *(undefined8 *)(param_1 + 0x13a0) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x13a8));
    *(undefined8 *)(param_1 + 0x13a8) = 0;
  }
  else if (param_3 == 1) goto LAB_144f241ef;
LAB_144f24109:
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x13c8) = 0;
  }
  if (*(char *)(param_1 + 0x13d4) != '\0') {
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1270));
    *(undefined8 *)(param_1 + 0x1270) = 0;
  }
  *(longlong *)(param_1 + 0x1270) = local_res10[0];
  *(undefined1 *)(param_1 + 0x13d4) = 1;
  FUN_144f14ad0(param_1,"Issue another request to this URL: \'%s\'");
  iVar4 = *(int *)(param_1 + 0x13e8);
  if (iVar4 == 0x12d) {
    if (2 < (byte)(*(char *)(param_1 + 0x13c2) - 1U)) goto LAB_144f2425a;
    bVar1 = *(byte *)(param_1 + 0xaa0) & 1;
  }
  else {
    if (iVar4 != 0x12e) {
      if (((iVar4 == 0x12f) && (*(char *)(param_1 + 0x13c2) != '\0')) &&
         ((2 < (byte)(*(char *)(param_1 + 0x13c2) - 1U) || ((*(byte *)(param_1 + 0xaa0) & 4) == 0)))
         ) {
        puVar8 = &DAT_149c067b0;
        *(undefined1 *)(param_1 + 0x13c2) = 0;
        if (*(char *)(param_1 + 0x1d4) != '\0') {
          puVar8 = &DAT_149c0679c;
        }
        FUN_144f14ad0(param_1,"Switch to %s",puVar8);
      }
      goto LAB_144f2425a;
    }
    if (2 < (byte)(*(char *)(param_1 + 0x13c2) - 1U)) goto LAB_144f2425a;
    bVar1 = *(byte *)(param_1 + 0xaa0) & 2;
  }
  if (bVar1 == 0) {
    FUN_144f14ad0(param_1,"Switch from POST to GET");
    *(undefined1 *)(param_1 + 0x13c2) = 0;
  }
LAB_144f2425a:
  FUN_144f25fd0(local_48,param_1,10);
  FUN_144f25fb0(param_1);
  return 0;
}



// FUNCTION 144f24290 FUN_144f24290 body=775 status=ok
// SIG undefined FUN_144f24290(void)

void FUN_144f24290(longlong param_1,longlong param_2,char *param_3,undefined8 param_4)

{
  longlong *plVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 local_90;
  int local_88 [4];
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar3 = *(byte *)(param_2 + 0x13c3);
  plVar1 = (longlong *)(param_2 + 0xf0);
  local_88[0] = 0;
  if (bVar3 == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0x4d4);
    if (*(byte *)(param_1 + 0x4d4) == 0) {
      bVar3 = (byte)*(undefined4 *)(param_2 + 0x154);
      if ((bVar3 & 0x15) == 1) {
        uVar8 = *(undefined8 *)(param_1 + 0x308);
      }
      else {
        uVar8 = 0xffffffffffffffff;
      }
      if ((bVar3 & 0x2a) == 2) {
        uVar9 = *(undefined8 *)(param_1 + 0x310);
      }
      else {
        uVar9 = 0xffffffffffffffff;
      }
      uVar4 = FUN_144f26bb0(uVar8,0xffffffffffffffff,uVar9);
    }
    else {
      *(undefined1 *)(param_1 + 0x4d4) = 0;
    }
  }
  else {
    uVar4 = (uint)bVar3;
    if ((((bVar3 & 1) != 0) && ((*(byte *)(param_2 + 0x154) & 0x10) != 0)) ||
       (((bVar3 & 2) != 0 && ((*(byte *)(param_2 + 0x154) & 0x20) != 0)))) goto LAB_144f24589;
    *(undefined1 *)(param_2 + 0x13c3) = 0;
  }
  if (uVar4 == 4) {
    FUN_144f14b70(param_2,"select/poll returned error");
  }
  else if (((((*(byte *)(param_2 + 0x154) & 1) == 0) || ((uVar4 & 1) == 0)) ||
           ((local_98 = param_3, local_90 = param_4,
            iVar5 = FUN_144f24e50(param_2,param_1,plVar1,local_88), iVar5 == 0 && (*param_3 == '\0')
            ))) && (((uVar4 & *(uint *)(param_2 + 0x154) & 2) == 0 ||
                    (iVar5 = FUN_144f25520(param_2,param_1,local_88), iVar5 == 0)))) {
    puVar6 = (undefined4 *)FUN_144f07150(&local_78);
    local_58 = *puVar6;
    uStack_54 = puVar6[1];
    uStack_50 = puVar6[2];
    uStack_4c = puVar6[3];
    if (local_88[0] == 0) {
      if (*(int *)(param_2 + 0x168) == 1) {
        local_68 = *(undefined4 *)(param_2 + 0x158);
        uStack_64 = *(undefined4 *)(param_2 + 0x15c);
        uStack_60 = *(undefined4 *)(param_2 + 0x160);
        uStack_5c = *(undefined4 *)(param_2 + 0x164);
        local_78 = *puVar6;
        uStack_74 = puVar6[1];
        uStack_70 = puVar6[2];
        uStack_6c = puVar6[3];
        lVar7 = FUN_144f071e0(&local_78,&local_68);
        if (*(int *)(param_2 + 0xa40) <= lVar7) {
          *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) | 2;
          *(undefined4 *)(param_2 + 0x168) = 0;
          FUN_144bbab00(param_2,0);
          FUN_144f14ad0(param_2,"Done waiting for 100-continue");
        }
      }
      iVar5 = FUN_144f144d0(param_2);
      if (iVar5 != 0) goto LAB_144f24589;
    }
    iVar5 = FUN_144f25e70(param_2);
    if (iVar5 == 0) {
      local_78 = local_58;
      uStack_74 = uStack_54;
      uStack_70 = uStack_50;
      uStack_6c = uStack_4c;
      iVar5 = FUN_144f27170(param_2,&local_78);
      if (iVar5 == 0) {
        if (*(int *)(param_2 + 0x154) == 0) {
          if (*(char *)(param_2 + 0x1d4) == '\0') {
            lVar7 = *plVar1;
            if (((lVar7 != -1) && (*(longlong *)(param_2 + 0x100) != lVar7)) &&
               (*(longlong *)(param_2 + 400) == 0)) {
              FUN_144f14b70(param_2,"transfer closed with %I64d bytes remaining to read",
                            lVar7 - *(longlong *)(param_2 + 0x100));
              goto LAB_144f24589;
            }
            if ((*(char *)(param_2 + 0x1cf) != '\0') && (*(int *)(param_1 + 0x20) != 4)) {
              FUN_144f14b70(param_2,"transfer closed with outstanding read data remaining");
              goto LAB_144f24589;
            }
          }
          iVar5 = FUN_144f25e70(param_2);
          if (iVar5 != 0) goto LAB_144f24589;
        }
        else {
          lVar7 = FUN_144f15e70(param_2,&local_58,0);
          if (lVar7 < 0) {
            local_78 = *(undefined4 *)(param_2 + 0xb98);
            uStack_74 = *(undefined4 *)(param_2 + 0xb9c);
            uStack_70 = *(undefined4 *)(param_2 + 0xba0);
            uStack_6c = *(undefined4 *)(param_2 + 0xba4);
            pcVar2 = (char *)*plVar1;
            local_68 = local_58;
            uStack_64 = uStack_54;
            uStack_60 = uStack_50;
            uStack_5c = uStack_4c;
            uVar8 = FUN_144f071e0(&local_68,&local_78);
            if (pcVar2 == (char *)0xffffffffffffffff) {
              FUN_144f14b70(param_2,
                            "Operation timed out after %I64d milliseconds with %I64d bytes received"
                            ,uVar8,*(undefined8 *)(param_2 + 0x100));
            }
            else {
              local_98 = pcVar2;
              FUN_144f14b70(param_2,
                            "Operation timed out after %I64d milliseconds with %I64d out of %I64d bytes received"
                            ,uVar8,*(undefined8 *)(param_2 + 0x100));
            }
            goto LAB_144f24589;
          }
        }
        *param_3 = (*(uint *)(param_2 + 0x154) & 0x3f) == 0;
      }
    }
  }
LAB_144f24589:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144f245b0 FUN_144f245b0 body=111 status=ok
// SIG undefined FUN_144f245b0(void)

ulonglong FUN_144f245b0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = false;
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 0x2e8) + 0x58);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f245c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  bVar3 = ((byte)*(undefined4 *)(param_1 + 0x154) & 0x15) == 1;
  if (bVar3) {
    *param_3 = *(undefined8 *)(param_2 + 0x308);
  }
  uVar1 = (ulonglong)bVar3;
  if (((byte)*(undefined4 *)(param_1 + 0x154) & 0x2a) == 2) {
    uVar2 = (uint)bVar3;
    if ((*(longlong *)(param_2 + 0x308) != *(longlong *)(param_2 + 0x310)) || (uVar2 == 0)) {
      bVar4 = uVar2 != 0;
      param_3[bVar4] = *(longlong *)(param_2 + 0x310);
    }
    uVar1 = (ulonglong)(uVar2 | 1 << bVar4 + 0x10);
  }
  return uVar1;
}



// FUNCTION 144f24620 FUN_144f24620 body=931 status=ok
// SIG undefined FUN_144f24620(void)

void FUN_144f24620(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined *_Src;
  code *pcVar7;
  longlong lVar8;
  size_t sVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined2 local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x1348);
  iVar3 = 0;
  if (iVar2 == 1) {
    local_58 = 0;
    uStack_57 = 0;
    FUN_144f14ad0(param_1,"Moving trailers state machine from initialized to sending.");
    *(undefined4 *)(param_1 + 0x1348) = 2;
    FUN_144f07cf0(param_1 + 0x12a0,0x10000);
    *(undefined8 *)(param_1 + 0x1298) = 0;
    FUN_144bbace0(param_1,1);
    iVar2 = (**(code **)(param_1 + 0xa98))(&local_58,*(undefined8 *)(param_1 + 0xa90));
    FUN_144bbace0(param_1,0);
    if (iVar2 == 0) {
      iVar2 = FUN_144f1e340(CONCAT71(uStack_57,local_58),param_1 + 0x12a0,param_1);
      if (iVar2 == 0) {
        FUN_144f14ad0(param_1,"Successfully compiled trailers.");
        FUN_144b472a0(CONCAT71(uStack_57,local_58));
        iVar2 = *(int *)(param_1 + 0x1348);
        goto LAB_144f246f6;
      }
    }
    else {
      FUN_144f14b70(param_1,"operation aborted by trailing headers callback");
      *param_3 = 0;
    }
    FUN_144f07d10(param_1 + 0x12a0);
    FUN_144b472a0(CONCAT71(uStack_57,local_58));
    goto LAB_144f249b6;
  }
LAB_144f246f6:
  if ((*(char *)(param_1 + 0x1d1) != '\0') && (iVar2 == 0)) {
    param_2 = param_2 - 0xc;
    *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x1a0) + 10;
  }
  if (iVar2 == 2) {
    pcVar7 = FUN_144f24dc0;
    lVar8 = param_1;
  }
  else {
    pcVar7 = *(code **)(param_1 + 0x1218);
    lVar8 = *(longlong *)(param_1 + 0x1220);
  }
  FUN_144bbace0(param_1,1);
  uVar4 = (*pcVar7)(*(undefined8 *)(param_1 + 0x1a0),1,param_2,lVar8);
  FUN_144bbace0(param_1,0);
  if (uVar4 == 0x10000000) {
    FUN_144f14b70(param_1,"operation aborted by callback");
    *param_3 = 0;
    goto LAB_144f249b6;
  }
  if (uVar4 == 0x10000001) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x2e8) + 0x8c) & 0x10) == 0) {
      *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x20;
      if (*(char *)(param_1 + 0x1d1) != '\0') {
        *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x1a0) + -10;
      }
      *param_3 = 0;
    }
    else {
      FUN_144f14b70(param_1,"Read callback asked for PAUSE when not supported");
    }
    goto LAB_144f249b6;
  }
  if (param_2 < uVar4) {
    *param_3 = 0;
    FUN_144f14b70(param_1,"read function returned funny value");
    goto LAB_144f249b6;
  }
  if ((*(char *)(param_1 + 0x1d3) == '\0') && (*(char *)(param_1 + 0x1d1) != '\0')) {
    bVar1 = false;
    _Src = &DAT_14997f410;
    lVar8 = -1;
    if (*(char *)(param_1 + 0xab7) == '\0') {
      _Src = &DAT_149c058e8;
    }
    uVar10 = uVar4;
    if (*(int *)(param_1 + 0x1348) == 2) {
LAB_144f24927:
      lVar5 = FUN_144f07ea0(param_1 + 0x12a0);
      if (lVar5 != *(longlong *)(param_1 + 0x1298)) goto LAB_144f2496b;
      FUN_144f07d10(param_1 + 0x12a0);
      *(undefined4 *)(param_1 + 0x1348) = 3;
      *(undefined8 *)(param_1 + 0xa90) = 0;
      pcVar6 = "Signaling end of chunked upload after trailers.";
      *(undefined8 *)(param_1 + 0xa98) = 0;
LAB_144f24983:
      *(undefined1 *)(param_1 + 0x1cc) = 1;
      FUN_144f14ad0(param_1,pcVar6);
      uVar4 = uVar10;
    }
    else {
      local_58 = 0;
      uStack_57 = 0;
      uStack_50 = 0;
      local_4f = 0;
      local_68 = _Src;
      iVar3 = FUN_144f2b7e0(&local_58,0xb,"%zx%s",uVar4);
      sVar9 = (size_t)iVar3;
      *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x1a0) - sVar9;
      uVar10 = uVar4 + sVar9;
      memcpy(*(void **)(param_1 + 0x1a0),&local_58,sVar9);
      if (((uVar4 == 0) && (*(longlong *)(param_1 + 0xa98) != 0)) &&
         (*(int *)(param_1 + 0x1348) == 0)) {
        *(undefined4 *)(param_1 + 0x1348) = 1;
      }
      else {
        sVar9 = 0xffffffffffffffff;
        do {
          sVar9 = sVar9 + 1;
        } while (_Src[sVar9] != '\0');
        memcpy((void *)(*(longlong *)(param_1 + 0x1a0) + uVar10),_Src,sVar9);
        bVar1 = true;
      }
      if (*(int *)(param_1 + 0x1348) == 2) goto LAB_144f24927;
LAB_144f2496b:
      uVar4 = uVar10;
      if ((uVar10 == (longlong)iVar3) && (*(int *)(param_1 + 0x1348) != 1)) {
        pcVar6 = "Signaling end of chunked upload via terminating chunk.";
        goto LAB_144f24983;
      }
    }
    if (bVar1) {
      do {
        lVar8 = lVar8 + 1;
      } while (_Src[lVar8] != '\0');
      uVar4 = uVar4 + lVar8;
    }
  }
  *param_3 = uVar4;
LAB_144f249b6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 144f249d0 FUN_144f249d0 body=359 status=ok
// SIG undefined FUN_144f249d0(void)

undefined8 FUN_144f249d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  *param_2 = 0;
  if ((*(char *)(param_1 + 0x13d8) == '\0') ||
     ((*(uint *)(*(longlong *)(lVar2 + 0x2e8) + 0x84) & 0x40003) != 0)) {
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x128) + *(longlong *)(param_1 + 0x100);
    if (((lVar3 != 0) || (*(char *)(lVar2 + 0x2cf) == '\0')) ||
       (((*(char *)(param_1 + 0x1d4) != '\0' &&
         ((*(byte *)(*(longlong *)(lVar2 + 0x2e8) + 0x84) & 3) == 0)) ||
        (*(int *)(param_1 + 0x9f8) == 0xb)))) {
      if (*(char *)(param_1 + 0x13c6) == '\0') {
        return 0;
      }
      if (lVar3 != 0) {
        return 0;
      }
      FUN_144f14ad0(param_1,"REFUSED_STREAM, retrying a fresh connect");
      *(undefined1 *)(param_1 + 0x13c6) = 0;
    }
    iVar1 = *(int *)(param_1 + 0xd00);
    *(int *)(param_1 + 0xd00) = iVar1 + 1;
    if (4 < iVar1) {
      FUN_144f14b70(param_1,"Connection died, tried %d times before giving up",5);
      *(undefined4 *)(param_1 + 0xd00) = 0;
      return 0x37;
    }
    FUN_144f14ad0(param_1,"Connection died, retrying a fresh connect (retry count: %d)");
    lVar3 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_1 + 0x1270));
    *param_2 = lVar3;
    if (lVar3 == 0) {
      return 0x1b;
    }
    FUN_144f16220(lVar2,1);
    *(undefined1 *)(lVar2 + 0x2d7) = 1;
    if (((*(byte *)(*(longlong *)(lVar2 + 0x2e8) + 0x84) & 3) != 0) &&
       (*(longlong *)(param_1 + 0x108) != 0)) {
      *(undefined1 *)(param_1 + 0x13d7) = 1;
      FUN_144f14ad0(param_1,"state.rewindbeforesend = TRUE");
    }
  }
  return 0;
}



// FUNCTION 144f24b40 FUN_144f24b40 body=100 status=ok
// SIG undefined FUN_144f24b40(void)

undefined1 FUN_144f24b40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_1 + 0x528), lVar1 != 0)) {
    if ((*(char *)(param_1 + 0x530) == '\x01') || (*(char *)(param_1 + 0x530) != '\x02')) {
      if (lVar1 < param_2) {
        return 1;
      }
      pcVar2 = "The requested document is not new enough";
    }
    else {
      if (param_2 < lVar1) {
        return 1;
      }
      pcVar2 = "The requested document is not old enough";
    }
    FUN_144f14ad0(param_1,pcVar2);
    *(undefined1 *)(param_1 + 0x14c4) = 1;
    return 0;
  }
  return 1;
}



// FUNCTION 144f24bb0 FUN_144f24bb0 body=67 status=ok
// SIG undefined FUN_144f24bb0(void)

undefined8 FUN_144f24bb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xce0) == 0) {
    lVar1 = (*(code *)PTR_malloc_14c6d9f20)(*(undefined4 *)(param_1 + 0x6d0));
    uVar2 = 0;
    *(longlong *)(param_1 + 0xce0) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x1b;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 144f24c00 FUN_144f24c00 body=20 status=ok
// SIG undefined FUN_144f24c00(void)

undefined8 FUN_144f24c00(undefined8 param_1,longlong param_2)

{
  *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffffd;
  FUN_144f14570();
  return 0;
}



// FUNCTION 144f24c20 FUN_144f24c20 body=407 status=ok
// SIG undefined FUN_144f24c20(void)

void FUN_144f24c20(longlong param_1,int param_2,longlong param_3,char param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  if (((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x84) & 3) == 0) || (*(int *)(lVar2 + 0x38) != 1))
  {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((*(char *)(lVar1 + 0x2df) != '\0') || (0x13 < *(byte *)(lVar1 + 0x4d9))) || (bVar6)) {
    if (param_2 == -1) {
      if (param_5 == -1) {
        uVar9 = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(undefined8 *)(lVar1 + 0x1a8 + (longlong)param_5 * 8);
      }
    }
    else {
      uVar9 = *(undefined8 *)(lVar1 + 0x1a8 + (longlong)param_2 * 8);
    }
    *(undefined8 *)(lVar1 + 0x308) = uVar9;
    if (bVar6) {
      param_5 = 0;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    uVar7 = 0xffffffffffffffff;
    if (param_2 != -1) {
      uVar7 = *(undefined8 *)(lVar1 + 0x1a8 + (longlong)param_2 * 8);
    }
    *(undefined8 *)(lVar1 + 0x308) = uVar7;
    if (param_5 != -1) {
      uVar9 = *(undefined8 *)(lVar1 + 0x1a8 + (longlong)param_5 * 8);
    }
  }
  *(undefined8 *)(lVar1 + 0x310) = uVar9;
  *(char *)(param_1 + 0x1d2) = param_4;
  *(longlong *)(param_1 + 0xf0) = param_3;
  if ((param_4 == '\0') && (*(undefined1 *)(param_1 + 0x1ca) = 0, 0 < param_3)) {
    FUN_144f25ce0(param_1,param_3);
  }
  if ((*(char *)(param_1 + 0x1d2) != '\0') || (*(char *)(param_1 + 0x1d4) == '\0')) {
    if (param_2 != -1) {
      *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 1;
    }
    if (param_5 != -1) {
      if (*(char *)(param_1 + 0x13cb) != '\0') {
        if (((*(byte *)(*(longlong *)(lVar1 + 0x2e8) + 0x84) & 3) != 0) &&
           (*(int *)(lVar2 + 0x38) == 2)) {
          *(undefined4 *)(param_1 + 0x168) = 1;
          puVar8 = (undefined4 *)FUN_144f07150(local_18);
          uVar3 = puVar8[1];
          uVar4 = puVar8[2];
          uVar5 = puVar8[3];
          *(undefined4 *)(param_1 + 0x158) = *puVar8;
          *(undefined4 *)(param_1 + 0x15c) = uVar3;
          *(undefined4 *)(param_1 + 0x160) = uVar4;
          *(undefined4 *)(param_1 + 0x164) = uVar5;
          FUN_144bba820(param_1,(longlong)*(int *)(param_1 + 0xa40),0);
          return;
        }
        *(undefined4 *)(param_1 + 0x168) = 2;
      }
      *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 2;
    }
  }
  return;
}



// FUNCTION 144f24dc0 FUN_144f24dc0 body=143 status=ok
// SIG undefined FUN_144f24dc0(void)

size_t FUN_144f24dc0(void *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong _Size;
  
  lVar1 = FUN_144f07ea0(param_4 + 0x12a0);
  uVar2 = lVar1 - *(longlong *)(param_4 + 0x1298);
  _Size = param_2 * param_3;
  if (uVar2 <= (ulonglong)(param_2 * param_3)) {
    _Size = uVar2;
  }
  if (_Size != 0) {
    lVar1 = FUN_144f07e80(param_4 + 0x12a0);
    memcpy(param_1,(void *)(lVar1 + *(longlong *)(param_4 + 0x1298)),_Size);
    *(longlong *)(param_4 + 0x1298) = *(longlong *)(param_4 + 0x1298) + _Size;
  }
  return _Size;
}



// FUNCTION 144f24e50 FUN_144f24e50 body=1741 status=ok
// SIG undefined FUN_144f24e50(void)

int FUN_144f24e50(longlong param_1,longlong param_2,longlong *param_3,uint *param_4,char *param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  char *pcVar18;
  bool bVar19;
  char local_res8 [8];
  longlong local_90;
  char local_88 [4];
  int local_84;
  longlong local_80;
  int local_78 [2];
  char *local_70;
  longlong local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  
  local_84 = 100;
  iVar8 = 0;
  local_res8[0] = '\0';
  lVar17 = 0;
  local_80 = 0x7fffffffffffffff;
  if (*(longlong *)(param_1 + 0x338) != 0) {
    local_80 = *(longlong *)(param_1 + 0x338);
  }
  local_68 = *(longlong *)(param_1 + 0xcd8);
  *param_5 = '\0';
  *param_6 = 0;
  pcVar18 = (char *)((longlong)param_3 + 0xda);
  do {
    uVar16 = (ulonglong)*(uint *)(param_1 + 0x6cc);
    local_70 = pcVar18;
    cVar7 = FUN_144f28210(param_1,param_2,0);
    lVar14 = local_68;
    if (cVar7 == '\0') {
      bVar6 = false;
      if ((*param_3 != -1) && (bVar6 = false, *pcVar18 == '\0')) {
        uVar10 = *param_3 - param_3[2];
        bVar6 = false;
        if ((longlong)uVar10 < (longlong)uVar16) {
          bVar6 = false;
          uVar16 = uVar10;
        }
      }
    }
    else {
      local_70 = (char *)((longlong)param_3 + 0xda);
      bVar6 = true;
    }
    if (uVar16 == 0) {
      local_90 = 0;
    }
    else {
      iVar8 = FUN_144f15080(param_1,*(undefined8 *)(param_2 + 0x308),local_68,uVar16,&local_90);
      if (iVar8 == 0x51) {
        iVar8 = 0;
        goto LAB_144f254b7;
      }
      if (0 < iVar8) {
        return iVar8;
      }
    }
    if ((param_3[2] == 0) && (FUN_144f25fd0(local_60,param_1), 0 < (int)param_3[0xf])) {
      puVar11 = (undefined4 *)FUN_144f07150(local_50);
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      *(undefined4 *)(param_3 + 0xd) = *puVar11;
      *(undefined4 *)((longlong)param_3 + 0x6c) = uVar3;
      *(undefined4 *)(param_3 + 0xe) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0x74) = uVar5;
    }
    *param_4 = *param_4 | 1;
    if ((local_90 == 0) && ((int)param_3[0x12] == 0)) {
      bVar19 = true;
    }
    else {
      bVar19 = false;
    }
    if ((0 < local_90) || (bVar19)) {
      *(undefined1 *)(local_90 + lVar14) = 0;
    }
    if ((local_90 == 0) && (*(undefined4 *)((longlong)param_3 + 100) = 0, !bVar19))
    goto LAB_144f254b7;
    param_3[10] = lVar14;
    pcVar2 = *(code **)(*(longlong *)(param_2 + 0x2e8) + 0x68);
    if (pcVar2 != (code *)0x0) {
      iVar8 = (*pcVar2)(param_1,param_2,&local_90,local_res8);
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = 0;
      if (local_res8[0] != '\0') goto LAB_144f254b7;
    }
    pcVar18 = local_70;
    if (*local_70 == '\0') {
LAB_144f2509d:
      if ((0 < local_90) || (bVar19)) {
        if (*(char *)(param_1 + 0x1d4) != '\0') {
          FUN_144f16220(param_2,2);
          *param_5 = '\x01';
          return 8;
        }
        if ((((int)param_3[0x12] == 0) && (!bVar19)) &&
           ((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 0x40003) != 0)) {
          iVar8 = FUN_144f1fec0(param_1,param_2,param_5);
          if (iVar8 != 0) {
            return iVar8;
          }
          if (*param_5 != '\0') {
            return 0;
          }
        }
        *(int *)(param_3 + 0x12) = (int)param_3[0x12] + 1;
        if (*(char *)(param_1 + 0xacf) != '\0') {
          if (*(int *)((longlong)param_3 + 0x44) != 0) {
            uVar12 = FUN_144f07ea0(param_1 + 0xcb8);
            uVar13 = FUN_144f07e80(param_1 + 0xcb8);
            FUN_144f149e0(param_1,3,uVar13,uVar12);
            if (*(int *)((longlong)param_3 + 0x44) != 1) goto LAB_144f2515f;
          }
          FUN_144f149e0(param_1,3,param_3[10],local_90);
        }
LAB_144f2515f:
        if (*(char *)((longlong)param_3 + 0xdf) != '\0') {
          iVar8 = FUN_1452d93d0(param_1,param_3[10],local_90,&local_90,local_78);
          if (0 < iVar8) {
            if (iVar8 == 6) {
              FUN_144f14b70(param_1,"Failed reading the chunked-encoded stream");
              return local_78[0];
            }
            uVar12 = FUN_1452d9340(iVar8);
            FUN_144f14b70(param_1,"%s in chunked-encoding",uVar12);
            return 0x38;
          }
          if ((iVar8 == -1) &&
             (*(uint *)((longlong)param_3 + 100) = *(uint *)((longlong)param_3 + 100) & 0xfffffffe,
             *(longlong *)(param_2 + 0x18) != 0)) {
            FUN_144f14ad0(param_1,"Leftovers after chunking: % I64du bytes");
          }
        }
        if ((*(int *)((longlong)param_3 + 0x44) == 1) &&
           (*(char *)((longlong)param_3 + 0xdd) == '\0')) {
          lVar14 = FUN_144f07ea0(param_1 + 0xcb8);
          param_3[2] = param_3[2] + lVar14;
        }
        lVar14 = param_3[1];
        if ((lVar14 != -1) && (lVar15 = param_3[2], lVar14 <= lVar15 + local_90)) {
          lVar17 = (lVar15 - lVar14) + local_90;
          if ((lVar17 != 0) && (*(char *)((longlong)param_3 + 0xdd) == '\0')) {
            FUN_144f14ad0(param_1,
                          "Excess found in a read: excess = %zu, size = %I64d, maxdownload = %I64d, bytecount = %I64d"
                          ,lVar17,*param_3,lVar14,lVar15);
            FUN_144f16220(param_2,1);
          }
          local_90 = param_3[1] - param_3[2];
          if (local_90 < 0) {
            local_90 = 0;
          }
          *(uint *)((longlong)param_3 + 100) = *(uint *)((longlong)param_3 + 100) & 0xfffffffe;
        }
        param_3[2] = param_3[2] + local_90;
        local_80 = local_80 - local_90;
        iVar8 = FUN_144f25d60(param_1,param_3[2]);
        if (iVar8 != 0) {
          return iVar8;
        }
        iVar8 = 0;
        if (*(char *)((longlong)param_3 + 0xdf) == '\0') {
          if (local_90 == 0) {
            if (*(int *)((longlong)param_3 + 0x44) == 0) {
              if (!bVar19) goto LAB_144f25339;
              goto LAB_144f25284;
            }
LAB_144f2528a:
            if (*(char *)((longlong)param_3 + 0xdd) == '\0') {
              lVar15 = FUN_144f07ea0(param_1 + 0xcb8);
              lVar14 = param_3[1];
              if ((lVar14 == -1) || (lVar15 <= lVar14)) {
                lVar14 = lVar15;
              }
              uVar12 = FUN_144f07e80(param_1 + 0xcb8);
              iVar8 = FUN_144f14dc0(param_1,1,uVar12,lVar14);
              if (iVar8 != 0) {
                return iVar8;
              }
            }
          }
          else {
LAB_144f25284:
            if (*(int *)((longlong)param_3 + 0x44) != 0) goto LAB_144f2528a;
          }
          iVar9 = 0;
          if (((*(int *)((longlong)param_3 + 0x44) < 2) &&
              (*(char *)((longlong)param_3 + 0xdd) == '\0')) && (local_90 != 0)) {
            if ((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 0xc000) == 0) {
              iVar9 = FUN_144f14dc0(param_1,1,param_3[10],local_90);
            }
            else {
              iVar9 = FUN_1452bbef0(param_1,param_3[10]);
            }
          }
          *(undefined4 *)((longlong)param_3 + 0x44) = 0;
          iVar8 = 0;
          if (iVar9 != 0) {
            return iVar9;
          }
        }
      }
    }
    else {
      local_88[0] = '\0';
      iVar8 = FUN_144f204c0(param_1,param_2,&local_90,local_88);
      if (iVar8 != 0) {
        return iVar8;
      }
      pcVar2 = *(code **)(*(longlong *)(param_2 + 0x2e8) + 0x68);
      if (((pcVar2 != (code *)0x0) && (param_3[1] < 1)) && (0 < local_90)) {
        iVar8 = (*pcVar2)(param_1,param_2,&local_90,local_res8);
        if (iVar8 != 0) {
          return iVar8;
        }
        iVar8 = 0;
        if (local_res8[0] != '\0') goto LAB_144f254b7;
      }
      iVar8 = 0;
      if (local_88[0] != '\0') {
        if (0 < local_90) {
          FUN_144f14ad0(param_1,"Excess found: excess = %zd url = %s (zero-length body)",local_90,
                        *(undefined8 *)(param_1 + 0x1260));
        }
        goto LAB_144f254b7;
      }
      if (*pcVar18 == '\0') goto LAB_144f2509d;
    }
LAB_144f25339:
    if ((*(longlong *)(*(longlong *)(param_2 + 0x2e8) + 0x68) != 0) && (lVar17 != 0)) {
      local_90 = local_90 + param_3[10];
      param_3[10] = local_90;
      if ((ulonglong)*(uint *)(param_1 + 0x6cc) + local_68 < (ulonglong)(local_90 + lVar17)) {
        lVar17 = ((ulonglong)*(uint *)(param_1 + 0x6cc) - local_90) + local_68;
      }
      local_90 = lVar17;
      iVar8 = (**(code **)(*(longlong *)(param_2 + 0x2e8) + 0x68))
                        (param_1,param_2,&local_90,local_res8);
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = 0;
      if (local_res8[0] != '\0') {
        *(uint *)((longlong)param_3 + 100) = *(uint *)((longlong)param_3 + 100) | 1;
      }
LAB_144f254b7:
      if ((local_84 < 1) || (local_80 < 1)) {
        *(undefined1 *)(param_1 + 0x13c3) = 1;
        *param_6 = 1;
      }
      if ((((byte)*(undefined4 *)((longlong)param_3 + 100) & 3) == 2) &&
         ((*(char *)(param_2 + 0x2ce) != '\0' || (bVar6)))) {
        FUN_144f14ad0(param_1,"we are done reading and this is set to close, stop send");
        *(uint *)((longlong)param_3 + 100) = *(uint *)((longlong)param_3 + 100) & 0xfffffffd;
      }
      return iVar8;
    }
    if (bVar19) {
      *(uint *)((longlong)param_3 + 100) = *(uint *)((longlong)param_3 + 100) & 0xfffffffe;
    }
    if ((((*(uint *)((longlong)param_3 + 100) & 0x10) != 0) ||
        ((*(uint *)((longlong)param_3 + 100) & 1) == 0)) || (local_80 < 1)) goto LAB_144f254b7;
    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x2e8) + 0x84);
    if ((uVar1 & 0xc) == 0) {
      if ((uVar1 & 0x30) == 0) {
        cVar7 = FUN_144f14130(param_1,0);
        goto LAB_144f253b0;
      }
    }
    else {
      cVar7 = FUN_144f14130(param_1,1);
LAB_144f253b0:
      if (cVar7 == '\0') goto LAB_144f254b7;
    }
    iVar9 = local_84 + -1;
    bVar19 = local_84 == 0;
    pcVar18 = local_70;
    local_84 = iVar9;
    if (bVar19) goto LAB_144f254b7;
  } while( true );
}



// FUNCTION 144f25520 FUN_144f25520 body=1317 status=ok
// SIG undefined FUN_144f25520(void)

undefined8 FUN_144f25520(longlong param_1,longlong param_2,uint *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  size_t sVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  size_t sVar12;
  size_t _Size;
  longlong lVar13;
  size_t sVar14;
  bool bVar15;
  longlong local_res8;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  *param_3 = *param_3 | 2;
  sVar14 = *(size_t *)(param_1 + 0x198);
  bVar15 = false;
  _Size = 0;
  if ((sVar14 == 0) ||
     (((((longlong)sVar14 < (longlong)(ulonglong)(*(uint *)(param_1 + 0x6d0) >> 5) &&
        (*(char *)(param_1 + 0x1d1) == '\0')) && (*(char *)(param_1 + 0x1cc) == '\0')) &&
      (_Size = sVar14,
      (*(longlong *)(param_1 + 0x108) - *(longlong *)(param_1 + 0x110)) + sVar14 !=
      *(longlong *)(param_1 + 0x11f8))))) {
    pvVar7 = *(void **)(param_1 + 0xce0);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = (void *)(*(code *)PTR_malloc_14c6d9f20)(*(undefined4 *)(param_1 + 0x6d0));
      *(void **)(param_1 + 0xce0) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        return 0x1b;
      }
    }
    if ((_Size != 0) && (*(void **)(param_1 + 0x1a0) != pvVar7)) {
      memmove(pvVar7,*(void **)(param_1 + 0x1a0),_Size);
    }
    *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0xce0);
    if (*(char *)(param_1 + 0x1cc) == '\0') {
      if ((*(int *)(param_1 + 0x168) == 2) && (*(int *)(*(longlong *)(param_1 + 0x1a8) + 0x38) == 2)
         ) {
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffd;
        *(undefined4 *)(param_1 + 0x168) = 1;
        puVar8 = (undefined4 *)FUN_144f07150(&local_38);
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *(undefined4 *)(param_1 + 0x158) = *puVar8;
        *(undefined4 *)(param_1 + 0x15c) = uVar2;
        *(undefined4 *)(param_1 + 0x160) = uVar3;
        *(undefined4 *)(param_1 + 0x164) = uVar4;
        *param_3 = *param_3 & 0xfffffffd;
        FUN_144bba820(param_1,(longlong)*(int *)(param_1 + 0xa40),0);
        return 0;
      }
      if ((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 0x40003) != 0) {
        bVar15 = *(int *)(*(longlong *)(param_1 + 0x1a8) + 0x38) == 1;
      }
      *(size_t *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0xce0) + _Size;
      uVar9 = FUN_144f24620(param_1,*(uint *)(param_1 + 0x6d0) - _Size,&local_res8);
      *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x1a0) - _Size;
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      sVar14 = local_res8 + _Size;
      if (sVar14 != 0) {
        if ((longlong)sVar14 < 1) goto LAB_144f25a1d;
        *(size_t *)(param_1 + 0x198) = sVar14;
        if ((!bVar15) && (*(char *)(param_1 + 0xab7) != '\0')) {
          pvVar7 = *(void **)(param_1 + 0xd98);
          if (pvVar7 == (void *)0x0) {
            pvVar7 = (void *)(*(code *)PTR_malloc_14c6d9f20)(*(int *)(param_1 + 0x6d0) * 2);
            *(void **)(param_1 + 0xd98) = pvVar7;
            if (pvVar7 == (void *)0x0) {
              FUN_144f14b70(param_1,"Failed to alloc scratch buffer");
              return 0x1b;
            }
          }
          sVar5 = _Size;
          sVar12 = _Size;
          if (_Size != 0) {
            memcpy(pvVar7,*(void **)(param_1 + 0x1a0),_Size);
          }
          for (; (longlong)sVar5 < (longlong)sVar14; sVar5 = sVar5 + 1) {
            cVar1 = *(char *)(sVar5 + *(longlong *)(param_1 + 0x1a0));
            if (cVar1 == '\n') {
              *(undefined1 *)(*(longlong *)(param_1 + 0xd98) + sVar12) = 0xd;
              sVar12 = sVar12 + 1;
              *(undefined1 *)(sVar12 + *(longlong *)(param_1 + 0xd98)) = 10;
              if ((*(char *)(param_1 + 0xab7) == '\0') && (*(longlong *)(param_1 + 0x11f8) != -1)) {
                *(longlong *)(param_1 + 0x11f8) = *(longlong *)(param_1 + 0x11f8) + 1;
              }
            }
            else {
              *(char *)(*(longlong *)(param_1 + 0xd98) + sVar12) = cVar1;
            }
            sVar12 = sVar12 + 1;
          }
          if (sVar12 != sVar14) {
            *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0xd98);
            *(size_t *)(param_1 + 0x198) = sVar12;
            sVar14 = sVar12;
          }
        }
        if (((*(uint *)(*(longlong *)(param_2 + 0x2e8) + 0x84) & 0x30000) != 0) &&
           (uVar9 = FUN_1452bd410(param_1,sVar14,_Size), (int)uVar9 != 0)) {
          return uVar9;
        }
        goto LAB_144f257e3;
      }
    }
    if ((*(byte *)(param_1 + 0x154) & 0x20) != 0) {
      return 0;
    }
  }
  else {
LAB_144f257e3:
    uVar9 = FUN_144f15100(param_1,*(undefined8 *)(param_2 + 0x310),*(undefined8 *)(param_1 + 0x1a0),
                          *(undefined8 *)(param_1 + 0x198),&local_res20);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    puVar10 = (undefined8 *)FUN_144f07150(&local_48);
    local_38 = *puVar10;
    uStack_30 = puVar10[1];
    local_48 = *(undefined4 *)puVar10;
    uStack_44 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_40 = *(undefined4 *)(puVar10 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar10 + 0xc);
    local_58 = *(undefined4 *)(param_1 + 0x1b8);
    uStack_54 = *(undefined4 *)(param_1 + 0x1bc);
    uStack_50 = *(undefined4 *)(param_1 + 0x1c0);
    uStack_4c = *(undefined4 *)(param_1 + 0x1c4);
    lVar11 = FUN_144f071e0(&local_48,&local_58);
    if (1000 < lVar11) {
      uVar9 = *(undefined8 *)(param_2 + 0x310);
      iVar6 = WSAIoctl(uVar9,0x4004747b,0,0,&local_res8,4,local_res18,0,0);
      if (iVar6 == 0) {
        Ordinal_21(uVar9,0xffff,0x1001,&local_res8,4);
      }
      *(undefined4 *)(param_1 + 0x1b8) = (undefined4)local_38;
      *(undefined4 *)(param_1 + 0x1bc) = local_38._4_4_;
      *(undefined4 *)(param_1 + 0x1c0) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0x1c4) = uStack_30._4_4_;
    }
    lVar11 = *(longlong *)(param_1 + 0x110);
    lVar13 = local_res20;
    if (lVar11 != 0) {
      if (lVar11 < local_res20) {
        lVar13 = lVar11;
      }
      FUN_144f149e0(param_1,2,*(undefined8 *)(param_1 + 0x1a0),lVar13);
      *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) - lVar13;
      lVar13 = local_res20 - lVar13;
    }
    if (lVar13 != 0) {
      FUN_144f149e0(param_1,4,(*(longlong *)(param_1 + 0x1a0) - lVar13) + local_res20,lVar13);
      *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + lVar13;
      FUN_144f25da0(param_1);
    }
    if (((*(char *)(param_1 + 0x1d1) == '\0') || (*(char *)(param_1 + 0x1d3) != '\0')) &&
       (*(longlong *)(param_1 + 0x108) == *(longlong *)(param_1 + 0x11f8))) {
      *(undefined1 *)(param_1 + 0x1cc) = 1;
      FUN_144f14ad0(param_1,"We are completely uploaded and fine");
    }
    if (*(longlong *)(param_1 + 0x198) != local_res20) {
      *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x1a0) + local_res20;
      *(longlong *)(param_1 + 0x198) = *(longlong *)(param_1 + 0x198) - local_res20;
      return 0;
    }
    lVar11 = *(longlong *)(param_1 + 0xce0);
    if (lVar11 == 0) {
      lVar11 = (*(code *)PTR_malloc_14c6d9f20)(*(undefined4 *)(param_1 + 0x6d0));
      *(longlong *)(param_1 + 0xce0) = lVar11;
      if (lVar11 == 0) {
        return 0x1b;
      }
    }
    *(longlong *)(param_1 + 0x1a0) = lVar11;
    *(undefined8 *)(param_1 + 0x198) = 0;
    if (*(char *)(param_1 + 0x1cc) == '\0') {
      return 0;
    }
  }
LAB_144f25a1d:
  *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffd;
  FUN_144f14570(param_1);
  return 0;
}



// FUNCTION 144f25a50 FUN_144f25a50 body=374 status=ok
// SIG undefined FUN_144f25a50(void)

int FUN_144f25a50(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined8 *)(param_1 + 0xb08) = 0;
  puVar3 = (undefined4 *)FUN_144f07150(&local_18);
  local_18 = *puVar3;
  uStack_14 = puVar3[1];
  uStack_10 = puVar3[2];
  uStack_c = puVar3[3];
  cVar1 = FUN_144f26590(param_1,&local_18);
  if ((*(byte *)(param_1 + 0xb3c) & 0x10) != 0) goto LAB_144f25baa;
  if (*(longlong *)(param_1 + 0x260) == 0) {
    if (*(longlong *)(param_1 + 600) != 0) {
      FUN_144bbace0(param_1,1);
      iVar2 = (**(code **)(param_1 + 600))
                        (*(undefined8 *)(param_1 + 0x2f0),(double)*(longlong *)(param_1 + 0xb10),
                         (double)*(longlong *)(param_1 + 0xb20),
                         (double)*(longlong *)(param_1 + 0xb18),
                         (double)*(longlong *)(param_1 + 0xb28));
      goto LAB_144f25b3b;
    }
LAB_144f25b78:
    if (cVar1 != '\0') {
      FUN_144f26820(param_1);
    }
  }
  else {
    FUN_144bbace0(param_1,1);
    iVar2 = (**(code **)(param_1 + 0x260))
                      (*(undefined8 *)(param_1 + 0x2f0),*(undefined8 *)(param_1 + 0xb10),
                       *(undefined8 *)(param_1 + 0xb20),*(undefined8 *)(param_1 + 0xb18),
                       *(undefined8 *)(param_1 + 0xb28));
LAB_144f25b3b:
    FUN_144bbace0(param_1,0);
    if (iVar2 == 0x10000001) goto LAB_144f25b78;
    if (iVar2 != 0) {
      FUN_144f14b70(param_1,"Callback aborted");
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  if (((*(byte *)(param_1 + 0xb3c) & 0x10) == 0) && (*(char *)(param_1 + 0xc8c) == '\0')) {
    FUN_144f2b7b0(*(undefined8 *)(param_1 + 0x1d8),&DAT_14997f410);
  }
LAB_144f25baa:
  *(undefined4 *)(param_1 + 0xc88) = 0;
  return 0;
}



// FUNCTION 144f25bd0 FUN_144f25bd0 body=258 status=ok
// SIG undefined FUN_144f25bd0(void)

void FUN_144f25bd0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(param_1 + 0xc88) = 0;
  puVar5 = (undefined4 *)FUN_144f07150(&local_28);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(uint *)(param_1 + 0xb3c) = *(uint *)(param_1 + 0xb3c) & 0x90;
  *(undefined1 *)(param_1 + 0xc8d) = 0;
  *(undefined8 *)(param_1 + 0xbd8) = 0;
  *(undefined4 *)(param_1 + 0xb88) = uVar1;
  *(undefined4 *)(param_1 + 0xb8c) = uVar2;
  *(undefined4 *)(param_1 + 0xb90) = uVar3;
  *(undefined4 *)(param_1 + 0xb94) = uVar4;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  *(undefined4 *)(param_1 + 0xbc8) = uVar1;
  *(undefined4 *)(param_1 + 0xbcc) = uVar2;
  *(undefined4 *)(param_1 + 0xbd0) = uVar3;
  *(undefined4 *)(param_1 + 0xbd4) = uVar4;
  *(undefined8 *)(param_1 + 0xb20) = 0;
  *(undefined4 *)(param_1 + 0xbe0) = uVar1;
  *(undefined4 *)(param_1 + 0xbe4) = uVar2;
  *(undefined4 *)(param_1 + 0xbe8) = uVar3;
  *(undefined4 *)(param_1 + 0xbec) = uVar4;
  *(undefined8 *)(param_1 + 0xb28) = 0;
  if (*(longlong *)(param_1 + 0x338) != 0) {
    local_38 = uVar1;
    uStack_34 = uVar2;
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    local_28 = uVar1;
    uStack_24 = uVar2;
    uStack_20 = uVar3;
    uStack_1c = uVar4;
    lVar6 = FUN_144f071e0(&local_28,&local_38);
    if (2999 < lVar6) {
      *(undefined8 *)(param_1 + 0xbf0) = *(undefined8 *)(param_1 + 0xb20);
      *(undefined4 *)(param_1 + 0xbe0) = uVar1;
      *(undefined4 *)(param_1 + 0xbe4) = uVar2;
      *(undefined4 *)(param_1 + 0xbe8) = uVar3;
      *(undefined4 *)(param_1 + 0xbec) = uVar4;
    }
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0xbc8);
    uStack_24 = *(undefined4 *)(param_1 + 0xbcc);
    uStack_20 = *(undefined4 *)(param_1 + 0xbd0);
    uStack_1c = *(undefined4 *)(param_1 + 0xbd4);
    local_38 = uVar1;
    uStack_34 = uVar2;
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    lVar6 = FUN_144f071e0(&local_38,&local_28);
    if (2999 < lVar6) {
      *(undefined8 *)(param_1 + 0xbd8) = *(undefined8 *)(param_1 + 0xb28);
      *(undefined4 *)(param_1 + 0xbc8) = uVar1;
      *(undefined4 *)(param_1 + 0xbcc) = uVar2;
      *(undefined4 *)(param_1 + 0xbd0) = uVar3;
      *(undefined4 *)(param_1 + 0xbd4) = uVar4;
    }
  }
  return;
}



// FUNCTION 144f25ce0 FUN_144f25ce0 body=51 status=ok
// SIG undefined FUN_144f25ce0(void)

void FUN_144f25ce0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_2;
  if (param_2 < 0) {
    lVar1 = 0;
  }
  uVar2 = *(uint *)(param_1 + 0xb3c) | 0x40;
  if (param_2 < 0) {
    uVar2 = *(uint *)(param_1 + 0xb3c) & 0xffffffbf;
  }
  *(uint *)(param_1 + 0xb3c) = uVar2;
  *(longlong *)(param_1 + 0xb10) = lVar1;
  return;
}



// FUNCTION 144f25d20 FUN_144f25d20 body=51 status=ok
// SIG undefined FUN_144f25d20(void)

void FUN_144f25d20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_2;
  if (param_2 < 0) {
    lVar1 = 0;
  }
  uVar2 = *(uint *)(param_1 + 0xb3c) | 0x20;
  if (param_2 < 0) {
    uVar2 = *(uint *)(param_1 + 0xb3c) & 0xffffffdf;
  }
  *(uint *)(param_1 + 0xb3c) = uVar2;
  *(longlong *)(param_1 + 0xb18) = lVar1;
  return;
}



// FUNCTION 144f25d60 FUN_144f25d60 body=57 status=ok
// SIG undefined FUN_144f25d60(void)

undefined8 FUN_144f25d60(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x6f0) != 0) && (*(longlong *)(param_1 + 0x6f0) < param_2)) {
    FUN_144f14b70(param_1,"Exceeded the maximum allowed file size (%I64d)");
    return 0x3f;
  }
  *(longlong *)(param_1 + 0xb20) = param_2;
  return 0;
}



// FUNCTION 144f25da0 FUN_144f25da0 body=8 status=ok
// SIG undefined FUN_144f25da0(void)

void FUN_144f25da0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb28) = param_2;
  return;
}



// FUNCTION 144f25db0 FUN_144f25db0 body=181 status=ok
// SIG undefined FUN_144f25db0(void)

void FUN_144f25db0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x338) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0xbe0);
    uStack_24 = *(undefined4 *)(param_1 + 0xbe4);
    uStack_20 = *(undefined4 *)(param_1 + 0xbe8);
    uStack_1c = *(undefined4 *)(param_1 + 0xbec);
    local_18 = *(undefined4 *)param_2;
    uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_10 = *(undefined4 *)(param_2 + 1);
    uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar3 = FUN_144f071e0(&local_18,&local_28);
    if (2999 < lVar3) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      *(undefined8 *)(param_1 + 0xbf0) = *(undefined8 *)(param_1 + 0xb20);
      *(undefined8 *)(param_1 + 0xbe0) = uVar1;
      *(undefined8 *)(param_1 + 0xbe8) = uVar2;
    }
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0xbc8);
    uStack_14 = *(undefined4 *)(param_1 + 0xbcc);
    uStack_10 = *(undefined4 *)(param_1 + 0xbd0);
    uStack_c = *(undefined4 *)(param_1 + 0xbd4);
    local_28 = *(undefined4 *)param_2;
    uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_20 = *(undefined4 *)(param_2 + 1);
    uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar3 = FUN_144f071e0(&local_28,&local_18);
    if (2999 < lVar3) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      *(undefined8 *)(param_1 + 0xbd8) = *(undefined8 *)(param_1 + 0xb28);
      *(undefined8 *)(param_1 + 0xbc8) = uVar1;
      *(undefined8 *)(param_1 + 0xbd0) = uVar2;
    }
  }
  return;
}



// FUNCTION 144f25e70 FUN_144f25e70 body=315 status=ok
// SIG undefined FUN_144f25e70(void)

int FUN_144f25e70(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar3 = (undefined4 *)FUN_144f07150(&local_18);
  local_18 = *puVar3;
  uStack_14 = puVar3[1];
  uStack_10 = puVar3[2];
  uStack_c = puVar3[3];
  cVar1 = FUN_144f26590(param_1,&local_18);
  if ((*(byte *)(param_1 + 0xb3c) & 0x10) != 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x260) == 0) {
    if (*(longlong *)(param_1 + 600) == 0) goto LAB_144f25f8c;
    FUN_144bbace0(param_1,1);
    iVar2 = (**(code **)(param_1 + 600))
                      (*(undefined8 *)(param_1 + 0x2f0),(double)*(longlong *)(param_1 + 0xb10),
                       (double)*(longlong *)(param_1 + 0xb20),(double)*(longlong *)(param_1 + 0xb18)
                       ,(double)*(longlong *)(param_1 + 0xb28));
  }
  else {
    FUN_144bbace0(param_1,1);
    iVar2 = (**(code **)(param_1 + 0x260))
                      (*(undefined8 *)(param_1 + 0x2f0),*(undefined8 *)(param_1 + 0xb10),
                       *(undefined8 *)(param_1 + 0xb20),*(undefined8 *)(param_1 + 0xb18),
                       *(undefined8 *)(param_1 + 0xb28));
  }
  FUN_144bbace0(param_1,0);
  if (iVar2 != 0x10000001) {
    if (iVar2 != 0) {
      FUN_144f14b70(param_1,"Callback aborted");
    }
    return iVar2;
  }
LAB_144f25f8c:
  if (cVar1 != '\0') {
    FUN_144f26820(param_1);
  }
  return 0;
}



// FUNCTION 144f25fb0 FUN_144f25fb0 body=24 status=ok
// SIG undefined FUN_144f25fb0(void)

void FUN_144f25fb0(longlong param_1)

{
  *(uint *)(param_1 + 0xb3c) = *(uint *)(param_1 + 0xb3c) & 0xffffff9f;
  *(undefined8 *)(param_1 + 0xb10) = 0;
  *(undefined8 *)(param_1 + 0xb18) = 0;
  return;
}



// FUNCTION 144f25fd0 FUN_144f25fd0 body=344 status=ok
// SIG undefined FUN_144f25fd0(void)

undefined4 * FUN_144f25fd0(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar2 = (undefined4 *)FUN_144f07150(&local_28);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  switch(param_3) {
  case 1:
    *(undefined4 *)(param_2 + 0xba8) = local_28;
    *(undefined4 *)(param_2 + 0xbac) = uStack_24;
    *(undefined4 *)(param_2 + 0xbb0) = uStack_20;
    *(undefined4 *)(param_2 + 0xbb4) = uStack_1c;
    return param_1;
  case 2:
    *(undefined4 *)(param_2 + 0xb98) = local_28;
    *(undefined4 *)(param_2 + 0xb9c) = uStack_24;
    *(undefined4 *)(param_2 + 0xba0) = uStack_20;
    *(undefined4 *)(param_2 + 0xba4) = uStack_1c;
    *(undefined1 *)(param_2 + 0xc8d) = 0;
    return param_1;
  case 3:
    lVar3 = 0xb58;
    break;
  case 4:
    lVar3 = 0xb60;
    break;
  case 5:
    lVar3 = 0xb68;
    break;
  case 6:
    lVar3 = 0xb70;
    break;
  case 7:
    if (*(char *)(param_2 + 0xc8d) != '\0') {
      return param_1;
    }
    *(undefined1 *)(param_2 + 0xc8d) = 1;
    lVar3 = 0xb78;
    break;
  default:
    goto switchD_144f2601a_caseD_8;
  case 9:
    *(undefined4 *)(param_2 + 3000) = local_28;
    *(undefined4 *)(param_2 + 0xbbc) = uStack_24;
    *(undefined4 *)(param_2 + 0xbc0) = uStack_20;
    *(undefined4 *)(param_2 + 0xbc4) = uStack_1c;
    return param_1;
  case 10:
    local_18 = *(undefined4 *)(param_2 + 0xb88);
    uStack_14 = *(undefined4 *)(param_2 + 0xb8c);
    uStack_10 = *(undefined4 *)(param_2 + 0xb90);
    uStack_c = *(undefined4 *)(param_2 + 0xb94);
    uVar4 = FUN_144f072b0(&local_28,&local_18);
    *(undefined8 *)(param_2 + 0xb80) = uVar4;
    goto switchD_144f2601a_caseD_8;
  }
  plVar1 = (longlong *)(param_2 + lVar3);
  if (plVar1 != (longlong *)0x0) {
    local_18 = local_28;
    local_28 = *(undefined4 *)(param_2 + 0xb98);
    uStack_14 = uStack_24;
    uStack_24 = *(undefined4 *)(param_2 + 0xb9c);
    uStack_10 = uStack_20;
    uStack_20 = *(undefined4 *)(param_2 + 0xba0);
    uStack_c = uStack_1c;
    uStack_1c = *(undefined4 *)(param_2 + 0xba4);
    lVar3 = FUN_144f072b0(&local_18,&local_28);
    if (lVar3 < 1) {
      lVar3 = 1;
    }
    *plVar1 = *plVar1 + lVar3;
    return param_1;
  }
switchD_144f2601a_caseD_8:
  return param_1;
}



// FUNCTION 144f26150 FUN_144f26150 body=145 status=ok
// SIG undefined FUN_144f26150(void)

longlong FUN_144f26150(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                      undefined4 *param_5)

{
  longlong lVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  param_1 = param_1 - param_2;
  if ((param_3 != 0) && (param_1 != 0)) {
    if (param_1 < 0x20c49ba5e353f7) {
      param_3 = (param_1 * 1000) / param_3;
    }
    else if (param_1 / param_3 < 0x20c49ba5e353f7) {
      param_3 = (param_1 / param_3) * 1000;
    }
    else {
      param_3 = 0x7fffffffffffffff;
    }
    local_28 = *param_4;
    uStack_24 = param_4[1];
    uStack_20 = param_4[2];
    uStack_1c = param_4[3];
    local_18 = *param_5;
    uStack_14 = param_5[1];
    uStack_10 = param_5[2];
    uStack_c = param_5[3];
    lVar1 = FUN_144f071e0(&local_18,&local_28);
    if (lVar1 < param_3) {
      return param_3 - lVar1;
    }
  }
  return 0;
}



// FUNCTION 144f261f0 FUN_144f261f0 body=274 status=ok
// SIG undefined FUN_144f261f0(void)

void FUN_144f261f0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  switch(param_2) {
  case 1:
    uVar4 = param_3[1];
    *(undefined8 *)(param_1 + 0xba8) = *param_3;
    *(undefined8 *)(param_1 + 0xbb0) = uVar4;
    return;
  case 2:
    uVar4 = *param_3;
    uVar2 = param_3[1];
    *(undefined1 *)(param_1 + 0xc8d) = 0;
    *(undefined8 *)(param_1 + 0xb98) = uVar4;
    *(undefined8 *)(param_1 + 0xba0) = uVar2;
    return;
  case 3:
    lVar3 = 0xb58;
    break;
  case 4:
    lVar3 = 0xb60;
    break;
  case 5:
    lVar3 = 0xb68;
    break;
  case 6:
    lVar3 = 0xb70;
    break;
  case 7:
    if (*(char *)(param_1 + 0xc8d) != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0xc8d) = 1;
    lVar3 = 0xb78;
    break;
  default:
    goto switchD_144f26218_caseD_8;
  case 9:
    uVar4 = param_3[1];
    *(undefined8 *)(param_1 + 3000) = *param_3;
    *(undefined8 *)(param_1 + 0xbc0) = uVar4;
    return;
  case 10:
    local_18 = *(undefined4 *)(param_1 + 0xb88);
    uStack_14 = *(undefined4 *)(param_1 + 0xb8c);
    uStack_10 = *(undefined4 *)(param_1 + 0xb90);
    uStack_c = *(undefined4 *)(param_1 + 0xb94);
    local_28 = *(undefined4 *)param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = *(undefined4 *)(param_3 + 1);
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar4 = FUN_144f072b0(&local_28,&local_18);
    *(undefined8 *)(param_1 + 0xb80) = uVar4;
    return;
  }
  plVar1 = (longlong *)(param_1 + lVar3);
  if (plVar1 != (longlong *)0x0) {
    local_28 = *(undefined4 *)(param_1 + 0xb98);
    uStack_24 = *(undefined4 *)(param_1 + 0xb9c);
    uStack_20 = *(undefined4 *)(param_1 + 0xba0);
    uStack_1c = *(undefined4 *)(param_1 + 0xba4);
    local_18 = *(undefined4 *)param_3;
    uStack_14 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_10 = *(undefined4 *)(param_3 + 1);
    uStack_c = *(undefined4 *)((longlong)param_3 + 0xc);
    lVar3 = FUN_144f072b0(&local_18,&local_28);
    if (lVar3 < 1) {
      lVar3 = 1;
    }
    *plVar1 = *plVar1 + lVar3;
  }
switchD_144f26218_caseD_8:
  return;
}



// FUNCTION 144f26330 FUN_144f26330 body=283 status=ok
// SIG undefined FUN_144f26330(void)

void FUN_144f26330(undefined8 *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  
  if ((longlong)param_2 < 1) {
    *param_1 = 0x2d2d3a2d2d3a2d2d;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  lVar2 = SUB168(ZEXT816(0x23456789abcdf013) * auVar1,8);
  uVar3 = (param_2 - lVar2 >> 1) + lVar2 >> 0xb;
  if (uVar3 < 100) {
    lVar2 = param_2 + uVar3 * -0xe10;
    lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
    lVar2 = (lVar2 >> 5) - (lVar2 >> 0x3f);
    FUN_144f2b7e0(param_1,9,"%2I64d:%02I64d:%02I64d",uVar3,lVar2,
                  param_2 + (uVar3 * 0x3c + lVar2) * -0x3c);
    return;
  }
  if (param_2 / 0x15180 < 1000) {
    FUN_144f2b7e0(param_1,9,"%3I64dd %02I64dh",param_2 / 0x15180,(param_2 % 0x15180) / 0xe10);
    return;
  }
  FUN_144f2b7e0(param_1,9,"%7I64dd");
  return;
}



// FUNCTION 144f26450 FUN_144f26450 body=314 status=ok
// SIG undefined FUN_144f26450(void)

undefined8 FUN_144f26450(ulonglong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  
  if ((longlong)param_1 < 100000) {
    pcVar5 = "%5I64d";
  }
  else if ((longlong)param_1 < 0x9c4000) {
    param_1 = param_1 >> 10;
    pcVar5 = "%4I64dk";
  }
  else {
    if ((longlong)param_1 < 0x6400000) {
      uVar3 = CONCAT44(0,(uint)param_1 & 0xfffff);
      pcVar5 = "%2I64d.%0I64dM";
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar3;
      lVar4 = SUB168(ZEXT816(0x400078002d0010e1) * auVar1,8);
      uVar3 = (uVar3 - lVar4 >> 1) + lVar4 >> 0x10;
      param_1 = param_1 >> 0x14;
LAB_144f264be:
      FUN_144f2b7e0(param_2,6,pcVar5,param_1,uVar3);
      return param_2;
    }
    if ((longlong)param_1 < 0x271000000) {
      param_1 = param_1 >> 0x14;
      pcVar5 = "%4I64dM";
    }
    else {
      if ((longlong)param_1 < 0x1900000000) {
        uVar3 = CONCAT44(0,(uint)param_1 & 0x3fffffff);
        pcVar5 = "%2I64d.%0I64dG";
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x4000001400000141) * auVar2,8);
        uVar3 = (uVar3 - lVar4 >> 1) + lVar4 >> 0x1a;
        param_1 = param_1 >> 0x1e;
        goto LAB_144f264be;
      }
      if ((longlong)param_1 < 0x9c400000000) {
        param_1 = param_1 >> 0x1e;
        pcVar5 = "%4I64dG";
      }
      else if ((longlong)param_1 < 0x27100000000000) {
        param_1 = param_1 >> 0x28;
        pcVar5 = "%4I64dT";
      }
      else {
        param_1 = param_1 >> 0x32;
        pcVar5 = "%4I64dP";
      }
    }
  }
  FUN_144f2b7e0(param_2,6,pcVar5,param_1);
  return param_2;
}



// FUNCTION 144f26590 FUN_144f26590 body=646 status=ok
// SIG undefined FUN_144f26590(void)

ulonglong FUN_144f26590(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined7 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *(undefined4 *)(param_1 + 0xb88);
  uStack_24 = *(undefined4 *)(param_1 + 0xb8c);
  uStack_20 = *(undefined4 *)(param_1 + 0xb90);
  uStack_1c = *(undefined4 *)(param_1 + 0xb94);
  local_18 = (undefined4)*param_2;
  uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_10 = (undefined4)param_2[1];
  uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar6 = FUN_144f072b0(&local_18,&local_28);
  lVar7 = *(longlong *)(param_1 + 0xb20);
  *(ulonglong *)(param_1 + 0xb40) = uVar6;
  if ((longlong)uVar6 < 1) {
    lVar11 = *(longlong *)(param_1 + 0xb28);
    lVar10 = lVar11 * 1000000;
    *(longlong *)(param_1 + 0xb48) = lVar7 * 1000000;
  }
  else {
    lVar10 = 0x7fffffffffffffff;
    if (lVar7 < 0x8637bd05af6) {
      *(longlong *)(param_1 + 0xb48) = (lVar7 * 1000000) / (longlong)uVar6;
    }
    else if ((longlong)uVar6 < 1000000) {
      *(undefined8 *)(param_1 + 0xb48) = 0x7fffffffffffffff;
    }
    else {
      *(longlong *)(param_1 + 0xb48) = lVar7 / ((longlong)uVar6 / 1000000);
    }
    lVar11 = *(longlong *)(param_1 + 0xb28);
    if (lVar11 < 0x8637bd05af6) {
      lVar10 = (lVar11 * 1000000) / (longlong)uVar6;
    }
    else if (999999 < uVar6) {
      lVar10 = lVar11 / (longlong)(uVar6 / 1000000);
    }
  }
  uVar6 = *param_2;
  *(longlong *)(param_1 + 0xb50) = lVar10;
  if (*(ulonglong *)(param_1 + 0xb08) == uVar6) {
    return uVar6 & 0xffffffffffffff00;
  }
  iVar3 = *(int *)(param_1 + 0xc88);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  *(ulonglong *)(param_1 + 0xb08) = uVar6;
  lVar10 = (longlong)
           (iVar3 + (iVar3 / 6 + (iVar3 >> 0x1f) +
                    (int)(((longlong)iVar3 / 6 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -6);
  *(longlong *)(param_1 + 0xbf8 + lVar10 * 8) = lVar11 + lVar7;
  puVar1 = (ulonglong *)(param_1 + 0xb08 + (lVar10 + 0x12) * 0x10);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  iVar3 = *(int *)(param_1 + 0xc88);
  iVar9 = iVar3 + 1;
  *(int *)(param_1 + 0xc88) = iVar9;
  if (iVar9 < 6) {
    if (iVar3 == 0) {
      lVar7 = *(longlong *)(param_1 + 0xb48) + *(longlong *)(param_1 + 0xb50);
      *(longlong *)(param_1 + 0xb30) = lVar7;
      return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
    }
    if (iVar9 < 6) {
      iVar9 = 0;
      goto LAB_144f26767;
    }
  }
  iVar9 = iVar9 + (iVar9 / 6 + (iVar9 >> 0x1f) +
                  (int)(((longlong)iVar9 / 6 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -6;
LAB_144f26767:
  local_28 = (undefined4)*param_2;
  uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_20 = (undefined4)param_2[1];
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar2 = (undefined4 *)(param_1 + 0xb08 + ((longlong)iVar9 + 0x12) * 0x10);
  local_18 = *puVar2;
  uStack_14 = puVar2[1];
  uStack_10 = puVar2[2];
  uStack_c = puVar2[3];
  lVar7 = FUN_144f071e0(&local_28,&local_18);
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  lVar10 = *(longlong *)(param_1 + 0xbf8 + lVar10 * 8) -
           *(longlong *)(param_1 + 0xbf8 + (longlong)iVar9 * 8);
  if (lVar10 < 0x418938) {
    lVar7 = (lVar10 * 1000) / lVar7;
    *(longlong *)(param_1 + 0xb30) = lVar7;
    uVar8 = (undefined7)((ulonglong)lVar7 >> 8);
  }
  else {
    lVar7 = (longlong)((double)lVar10 / ((double)lVar7 / 1000.0));
    *(longlong *)(param_1 + 0xb30) = lVar7;
    uVar8 = (undefined7)((ulonglong)lVar7 >> 8);
  }
  return CONCAT71(uVar8,1);
}



// FUNCTION 144f26820 FUN_144f26820 body=866 status=ok
// SIG undefined FUN_144f26820(void)

void FUN_144f26820(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [10];
  undefined1 local_6e [10];
  undefined1 local_64 [10];
  undefined1 local_5a [10];
  undefined1 local_50 [10];
  undefined1 local_46 [14];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar1 = *(uint *)(param_1 + 0xb3c);
  lVar5 = 0;
  local_b0 = 0;
  local_b8 = 0;
  lVar12 = *(longlong *)(param_1 + 0xb40) / 1000000;
  if (-1 < (char)uVar1) {
    if (*(longlong *)(param_1 + 0x11c0) != 0) {
      FUN_144f2b7b0(*(undefined8 *)(param_1 + 0x1d8),
                    "** Resuming transfer from byte position %I64d\n");
    }
    FUN_144f2b7b0(*(undefined8 *)(param_1 + 0x1d8),
                  "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current\n                                 Dload  Upload   Total   Spent    Left  Speed\n"
                 );
    *(uint *)(param_1 + 0xb3c) = *(uint *)(param_1 + 0xb3c) | 0x80;
    uVar1 = *(uint *)(param_1 + 0xb3c);
  }
  lVar3 = lVar5;
  if (((uVar1 & 0x20) != 0) && (lVar3 = 0, 0 < *(longlong *)(param_1 + 0xb50))) {
    lVar4 = *(longlong *)(param_1 + 0xb18);
    lVar3 = lVar4 / *(longlong *)(param_1 + 0xb50);
    if (lVar4 < 0x2711) {
      if (0 < lVar4) {
        local_b8 = (*(longlong *)(param_1 + 0xb28) * 100) / lVar4;
      }
    }
    else {
      lVar4 = lVar4 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar4),8);
      local_b8 = *(longlong *)(param_1 + 0xb28) / ((lVar4 >> 6) - (lVar4 >> 0x3f));
    }
  }
  lVar4 = lVar5;
  if (((uVar1 & 0x40) != 0) && (lVar4 = 0, 0 < *(longlong *)(param_1 + 0xb48))) {
    lVar2 = *(longlong *)(param_1 + 0xb10);
    lVar4 = lVar2 / *(longlong *)(param_1 + 0xb48);
    if (lVar2 < 0x2711) {
      if (0 < lVar2) {
        local_b0 = (*(longlong *)(param_1 + 0xb20) * 100) / lVar2;
      }
    }
    else {
      lVar2 = lVar2 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar2),8);
      local_b0 = *(longlong *)(param_1 + 0xb20) / ((lVar2 >> 6) - (lVar2 >> 0x3f));
    }
  }
  if (lVar4 < lVar3) {
    lVar4 = lVar3;
  }
  lVar3 = lVar4 - lVar12;
  if (lVar4 < 1) {
    lVar3 = lVar5;
  }
  FUN_144f26330(local_a8,lVar3);
  FUN_144f26330(local_88,lVar4);
  FUN_144f26330(local_98,lVar12);
  if ((*(uint *)(param_1 + 0xb3c) & 0x20) == 0) {
    lVar12 = *(longlong *)(param_1 + 0xb28);
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0xb18);
  }
  if ((*(uint *)(param_1 + 0xb3c) & 0x40) == 0) {
    lVar3 = *(longlong *)(param_1 + 0xb20);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xb10);
  }
  lVar3 = lVar3 + lVar12;
  lVar12 = *(longlong *)(param_1 + 0xb20) + *(longlong *)(param_1 + 0xb28);
  if (lVar3 < 0x2711) {
    if (0 < lVar3) {
      lVar5 = (lVar12 * 100) / lVar3;
    }
  }
  else {
    lVar5 = lVar3 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar3),8);
    lVar5 = lVar12 / ((lVar5 >> 6) - (lVar5 >> 0x3f));
  }
  uVar6 = FUN_144f26450(*(undefined8 *)(param_1 + 0xb30),local_46);
  uVar7 = FUN_144f26450(*(undefined8 *)(param_1 + 0xb50),local_50);
  uVar8 = FUN_144f26450(*(undefined8 *)(param_1 + 0xb48),local_5a);
  uVar9 = FUN_144f26450(*(undefined8 *)(param_1 + 0xb28),local_6e);
  uVar10 = FUN_144f26450(*(undefined8 *)(param_1 + 0xb20),local_78);
  uVar11 = FUN_144f26450(lVar3,local_64);
  local_c8 = local_a8;
  local_d0 = local_98;
  local_d8 = local_88;
  local_f8 = local_b8;
  local_108 = local_b0;
  local_100 = uVar10;
  local_f0 = uVar9;
  local_e8 = uVar8;
  local_e0 = uVar7;
  local_c0 = uVar6;
  FUN_144f2b7b0(*(undefined8 *)(param_1 + 0x1d8),
                "\r%3I64d %s  %3I64d %s  %3I64d %s  %s  %s %s %s %s %s",lVar5,uVar11);
  fflush(*(FILE **)(param_1 + 0x1d8));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_128);
}



// FUNCTION 144f26bb0 FUN_144f26bb0 body=329 status=ok
// SIG undefined FUN_144f26bb0(void)

void FUN_144f26bb0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  uint local_40 [10];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_1 == -1) && (param_2 == -1)) && (param_3 == -1)) {
    FUN_144f27110(param_4);
  }
  else {
    bVar3 = param_1 != -1;
    if (bVar3) {
      local_40[0] = 0x700;
      local_48 = param_1;
    }
    uVar2 = (ulonglong)bVar3;
    uVar1 = uVar2;
    if (param_2 != -1) {
      uVar1 = (ulonglong)(bVar3 + 1);
      (&local_48)[uVar2 * 2] = param_2;
      local_40[uVar2 * 4] = 0x700;
    }
    uVar2 = uVar1;
    if (param_3 != -1) {
      uVar2 = (ulonglong)((int)uVar1 + 1);
      (&local_48)[uVar1 * 2] = param_3;
      local_40[uVar1 * 4] = 0x410;
    }
    FUN_144f26d10(&local_48,uVar2,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 144f26d10 FUN_144f26d10 body=1006 status=ok
// SIG undefined FUN_144f26d10(void)

void FUN_144f26d10(longlong *param_1,uint param_2,longlong param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  DWORD DVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  ushort *puVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  undefined1 auStack_6b8 [32];
  undefined8 local_698;
  longlong *local_688;
  undefined1 local_680 [8];
  uint local_678 [2];
  ulonglong auStack_670 [65];
  uint local_468 [2];
  ulonglong auStack_460 [65];
  uint local_258 [2];
  ulonglong auStack_250 [65];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  puVar12 = (uint *)0x0;
  uVar14 = (ulonglong)param_2;
  local_688 = param_1;
  if ((param_1 != (longlong *)0x0) && (plVar4 = param_1, puVar10 = puVar12, param_2 != 0)) {
    do {
      if (*plVar4 != -1) {
        puVar13 = (ushort *)(param_1 + 1);
        local_678[0] = 0;
        local_468[0] = 0;
        local_258[0] = 0;
        puVar10 = puVar12;
        puVar15 = puVar12;
        puVar11 = puVar12;
        uVar17 = 0xffffffffffffffff;
        puVar18 = puVar12;
        goto LAB_144f26de0;
      }
      uVar9 = (int)puVar10 + 1;
      plVar4 = plVar4 + 2;
      puVar10 = (uint *)(ulonglong)uVar9;
    } while (uVar9 < param_2);
  }
  if (param_3 != 0) {
    if (param_3 < 0) {
      Ordinal_112(0x2726);
    }
    else {
      DVar7 = 0xfffffffe;
      if (param_3 < 0xffffffff) {
        DVar7 = (DWORD)param_3;
      }
      Sleep(DVar7);
    }
  }
  goto LAB_144f26f5c;
LAB_144f26de0:
  do {
    uVar2 = *(ulonglong *)(puVar13 + -4);
    puVar13[1] = 0;
    uVar5 = uVar17;
    if (uVar2 != 0xffffffffffffffff) {
      if (0xfffffffffffffffe < uVar2) {
        Ordinal_112(0x2726);
        goto LAB_144f26f5c;
      }
      uVar1 = *puVar13;
      if ((uVar1 & 0x710) != 0) {
        uVar5 = uVar2;
        if (uVar2 <= uVar17) {
          uVar5 = uVar17;
        }
        if ((uVar1 & 0x300) != 0) {
          uVar6 = (uint)puVar15;
          puVar8 = puVar12;
          uVar9 = 0;
          if (uVar6 != 0) {
            do {
              uVar9 = (uint)puVar8;
              if (auStack_670[(longlong)puVar8] == uVar2) break;
              uVar9 = uVar9 + 1;
              puVar8 = (uint *)(ulonglong)uVar9;
            } while (uVar9 < uVar6);
          }
          if ((uVar9 == uVar6) && (uVar6 < 0x40)) {
            auStack_670[uVar9] = uVar2;
            local_678[0] = local_678[0] + 1;
            puVar15 = (uint *)(ulonglong)local_678[0];
          }
        }
        uVar9 = 0;
        if ((uVar1 & 0x10) != 0) {
          uVar16 = (uint)puVar11;
          puVar8 = puVar12;
          uVar6 = uVar9;
          if (uVar16 != 0) {
            do {
              uVar6 = (uint)puVar8;
              if (auStack_460[(longlong)puVar8] == uVar2) break;
              uVar6 = uVar6 + 1;
              puVar8 = (uint *)(ulonglong)uVar6;
            } while (uVar6 < uVar16);
          }
          if ((uVar6 == uVar16) && (uVar16 < 0x40)) {
            auStack_460[uVar6] = uVar2;
            puVar11 = (uint *)(ulonglong)(local_468[0] + 1);
            local_468[0] = local_468[0] + 1;
          }
        }
        if ((uVar1 & 0x600) != 0) {
          uVar6 = (uint)puVar10;
          puVar8 = puVar12;
          if (uVar6 != 0) {
            do {
              uVar9 = (uint)puVar8;
              if (auStack_250[(longlong)puVar8] == uVar2) break;
              uVar9 = uVar9 + 1;
              puVar8 = (uint *)(ulonglong)uVar9;
            } while (uVar9 < uVar6);
          }
          if ((uVar9 == uVar6) && (uVar6 < 0x40)) {
            auStack_250[uVar9] = uVar2;
            puVar10 = (uint *)(ulonglong)(local_258[0] + 1);
            local_258[0] = local_258[0] + 1;
          }
        }
      }
    }
    uVar9 = (int)puVar18 + 1;
    puVar18 = (uint *)(ulonglong)uVar9;
    puVar13 = puVar13 + 8;
    uVar17 = uVar5;
  } while (uVar9 < param_2);
  if ((((int)puVar15 == 0) && ((int)puVar11 == 0)) && ((int)puVar10 == 0)) {
    if (param_3 != 0) {
      if (param_3 < 0) {
        Ordinal_112(0x2726);
        puVar12 = (uint *)0xffffffffffffffff;
      }
      else {
        DVar7 = 0xfffffffe;
        if (param_3 < 0xffffffff) {
          DVar7 = (DWORD)param_3;
        }
        Sleep(DVar7);
        puVar12 = (uint *)0x0;
      }
    }
  }
  else {
    local_698 = FUN_1452ddeb0(local_680,param_3);
    puVar10 = local_258;
    if (local_258[0] == 0) {
      puVar10 = puVar12;
    }
    puVar15 = local_468;
    if (local_468[0] == 0) {
      puVar15 = puVar12;
    }
    puVar11 = local_678;
    if (local_678[0] == 0) {
      puVar11 = puVar12;
    }
    uVar9 = Ordinal_18((int)uVar5 + 1,puVar11,puVar15,puVar10);
    puVar12 = (uint *)(ulonglong)uVar9;
  }
  if ((int)puVar12 < 1) {
    if ((int)puVar12 == -1) {
      Ordinal_111();
    }
  }
  else {
    puVar13 = (ushort *)((longlong)local_688 + 10);
    do {
      *puVar13 = 0;
      if (*(longlong *)(puVar13 + -5) != -1) {
        iVar3 = Ordinal_151(*(longlong *)(puVar13 + -5),local_678);
        if (iVar3 != 0) {
          if ((puVar13[-1] & 0x100) != 0) {
            *puVar13 = *puVar13 | 0x100;
          }
          if ((puVar13[-1] & 0x300) != 0) {
            *puVar13 = *puVar13 | 0x300;
          }
        }
        iVar3 = Ordinal_151(*(undefined8 *)(puVar13 + -5),local_468);
        if ((iVar3 != 0) && ((puVar13[-1] & 0x10) != 0)) {
          *puVar13 = *puVar13 | 0x10;
        }
        iVar3 = Ordinal_151(*(undefined8 *)(puVar13 + -5),local_258);
        if (iVar3 != 0) {
          if ((puVar13[-1] & 0x200) != 0) {
            *puVar13 = *puVar13 | 0x200;
          }
          if ((puVar13[-1] & 0x400) != 0) {
            *puVar13 = *puVar13 | 0x400;
          }
        }
      }
      puVar13 = puVar13 + 8;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
LAB_144f26f5c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_6b8);
}



// FUNCTION 144f27110 FUN_144f27110 body=67 status=ok
// SIG undefined FUN_144f27110(void)

undefined8 FUN_144f27110(longlong param_1)

{
  DWORD dwMilliseconds;
  
  if (param_1 != 0) {
    if (param_1 < 0) {
      Ordinal_112(0x2726);
      return 0xffffffff;
    }
    dwMilliseconds = 0xfffffffe;
    if (param_1 < 0xffffffff) {
      dwMilliseconds = (DWORD)param_1;
    }
    Sleep(dwMilliseconds);
  }
  return 0;
}



// FUNCTION 144f27160 FUN_144f27160 body=11 status=ok
// SIG undefined FUN_144f27160(void)

void FUN_144f27160(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xc98) = 0;
  *(undefined8 *)(param_1 + 0xca0) = 0;
  return;
}



// FUNCTION 144f27170 FUN_144f27170 body=222 status=ok
// SIG undefined FUN_144f27170(void)

undefined8 FUN_144f27170(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(byte *)(param_1 + 0x154) & 0x10) == 0) {
    if ((-1 < *(longlong *)(param_1 + 0xb30)) && (*(int *)(param_1 + 0x32c) != 0)) {
      if (*(longlong *)(param_1 + 0xb30) < (longlong)*(int *)(param_1 + 0x328)) {
        if (*(longlong *)(param_1 + 0xc98) == 0) {
          uVar1 = param_2[1];
          uVar2 = param_2[2];
          uVar3 = param_2[3];
          *(undefined4 *)(param_1 + 0xc98) = *param_2;
          *(undefined4 *)(param_1 + 0xc9c) = uVar1;
          *(undefined4 *)(param_1 + 0xca0) = uVar2;
          *(undefined4 *)(param_1 + 0xca4) = uVar3;
        }
        else {
          local_18 = *param_2;
          uStack_14 = param_2[1];
          uStack_10 = param_2[2];
          uStack_c = param_2[3];
          local_28 = *(undefined4 *)(param_1 + 0xc98);
          uStack_24 = *(undefined4 *)(param_1 + 0xc9c);
          uStack_20 = *(undefined4 *)(param_1 + 0xca0);
          uStack_1c = *(undefined4 *)(param_1 + 0xca4);
          lVar4 = FUN_144f071e0(&local_18,&local_28);
          if (*(int *)(param_1 + 0x32c) * 1000 <= lVar4) {
            FUN_144f14b70(param_1,
                          "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds"
                          ,*(undefined4 *)(param_1 + 0x328));
            return 0x1c;
          }
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xc98) = 0;
      }
    }
    if (*(int *)(param_1 + 0x328) != 0) {
      FUN_144bba820(param_1,1000,9);
    }
  }
  return 0;
}



// FUNCTION 144f27250 FUN_144f27250 body=589 status=ok
// SIG undefined FUN_144f27250(void)

ulonglong FUN_144f27250(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       int *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (((param_2 == 0) || (*(longlong *)(param_2 + 0x1a8) == 0)) ||
     (puVar2 = *(undefined4 **)(*(longlong *)(param_2 + 0x1a8) + 0x40), puVar2 == (undefined4 *)0x0)
     ) {
    FUN_144f14b70(param_2,"[%zd-%zd], http/2 recv on a transfer never opened or already cleared",
                  *(undefined8 *)(param_2 + 8),*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x48)
                 );
    *param_5 = 0x10;
    return 0xffffffffffffffff;
  }
  uVar3 = puVar1[2];
  puVar1[2] = param_2;
  uVar9 = FUN_144f2af80(param_1,param_2,puVar2,param_3,param_4,param_5);
  if ((longlong)uVar9 < 0) {
    if (*param_5 != 0x51) goto LAB_144f27387;
    iVar5 = FUN_144f2b100(param_1,param_2);
    *param_5 = iVar5;
    if (iVar5 != 0) goto LAB_144f27387;
    uVar9 = FUN_144f2af80(param_1,param_2,puVar2,param_3,param_4,param_5);
  }
  if (0 < (longlong)uVar9) {
    uVar4 = *(ulonglong *)(puVar2 + 0x44);
    if (uVar4 < uVar9) {
      uVar11 = uVar9;
      if (uVar4 != 0) {
        uVar11 = uVar9 - uVar4;
        *(undefined8 *)(puVar2 + 0x44) = 0;
      }
      if (uVar11 != 0) {
        FUN_1452e04d0(*puVar1,*puVar2);
      }
    }
    else {
      *(ulonglong *)(puVar2 + 0x44) = uVar4 - uVar9;
    }
    if (*(char *)((longlong)puVar2 + 0x14d) != '\0') {
      FUN_144f14c60(param_2,param_1,"[%d] DRAIN closed stream",*puVar2);
      FUN_144f289b0(param_1,param_2,puVar2);
    }
  }
LAB_144f27387:
  iVar5 = FUN_144f28770(param_1,param_2);
  if (iVar5 == 0x51) {
    FUN_144f289b0(param_1,param_2,puVar2);
  }
  else if (iVar5 != 0) {
    *param_5 = iVar5;
    uVar9 = 0xffffffffffffffff;
  }
  uVar6 = FUN_1452e03c0(*puVar1);
  uVar7 = FUN_1452e0330(*puVar1,*puVar2);
  uVar8 = FUN_1452e02f0(*puVar1,*puVar2);
  uVar10 = FUN_1452e7330(puVar2 + 2);
  FUN_144f14c60(param_2,param_1,
                "[%d] cf_recv(len=%zu) -> %zd %d, buffered=%zu, window=%d/%d, connection %d/%d",
                *puVar2,param_4,uVar9,*param_5,uVar10,uVar8,uVar7,uVar6,0x3e800000);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar3;
  return uVar9;
}



// FUNCTION 144f274a0 FUN_144f274a0 body=1071 status=ok
// SIG undefined FUN_144f274a0(void)

ulonglong FUN_144f274a0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                       int *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  bool bVar13;
  undefined8 in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  int *local_48;
  undefined8 *local_40;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  local_40 = puVar1;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x1a8) == 0)) {
    uVar9 = puVar1[2];
    local_48 = (int *)0x0;
    puVar1[2] = param_2;
LAB_144f2762f:
    bVar13 = false;
    piVar12 = param_5;
    uVar11 = FUN_144f2b2b0(&local_48,param_1,param_2,param_3,param_4,param_5);
    uVar5 = (undefined4)((ulonglong)piVar12 >> 0x20);
    piVar12 = local_48;
    if ((longlong)uVar11 < 0) goto LAB_144f277df;
LAB_144f27665:
    iVar3 = FUN_144f28770(param_1,param_2);
    if (((piVar12 == (int *)0x0) || (*(char *)((longlong)piVar12 + 0x14d) == '\0')) || (bVar13)) {
      if (iVar3 == 0x51) {
        bVar13 = true;
LAB_144f276e0:
        if (((piVar12 != (int *)0x0) && (bVar13)) && (0 < (longlong)uVar11)) {
          iVar3 = FUN_1452e03d0(*puVar1,*piVar12);
          lVar10 = (longlong)iVar3;
          if (iVar3 == 0) {
            *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) | 8;
            FUN_144f14c60(param_2,param_1,"[%d] holding send as remote flow window is exhausted",
                          *piVar12);
          }
          *(ulonglong *)(piVar12 + 0x46) = uVar11;
          uVar4 = FUN_1452e0410(*puVar1);
          uVar7 = CONCAT44(uVar5,uVar4);
          FUN_144f14c60(param_2,param_1,"[%d] cf_send(len=%zu) BLOCK: win %u/%zu blocked_len=%zu",
                        *piVar12,param_4,uVar7,lVar10,uVar11);
          uVar4 = (undefined4)((ulonglong)lVar10 >> 0x20);
          uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
          *param_5 = 0x51;
          uVar11 = 0xffffffffffffffff;
          goto LAB_144f277df;
        }
      }
      else {
        if (iVar3 != 0) {
          *param_5 = iVar3;
          goto LAB_144f277d0;
        }
        if (piVar12 != (int *)0x0) {
          cVar2 = FUN_1452e7360(piVar12 + 0x12);
          bVar13 = cVar2 == '\0';
          goto LAB_144f276e0;
        }
      }
      if (((puVar1[0x17] != 0) || (iVar3 = FUN_1452e00f0(*puVar1), iVar3 != 0)) ||
         (iVar3 = FUN_1452e0140(*puVar1), iVar3 != 0)) goto LAB_144f277df;
      if (*(char *)((longlong)piVar12 + 0x14d) != '\0') {
        uVar11 = FUN_144f2acf0(param_1,param_2,piVar12,param_5);
        goto LAB_144f277df;
      }
      FUN_144f14c60(param_2,param_1,"send: nothing to do in this session");
      goto LAB_144f277c8;
    }
    FUN_144f14ad0(param_2,"stream %u closed",*piVar12);
    *param_5 = 0x37;
  }
  else {
    piVar12 = *(int **)(*(longlong *)(param_2 + 0x1a8) + 0x40);
    bVar13 = false;
    uVar9 = puVar1[2];
    puVar1[2] = param_2;
    local_48 = piVar12;
    if ((piVar12 == (int *)0x0) || (*piVar12 == -1)) goto LAB_144f2762f;
    uVar11 = *(ulonglong *)(piVar12 + 0x46);
    if (uVar11 == 0) {
      if (*(char *)((longlong)piVar12 + 0x14d) == '\0') {
        uVar11 = FUN_1452e73b0(piVar12 + 0x12,param_3,param_4,param_5);
        if (((longlong)uVar11 < 0) && (bVar13 = false, *param_5 != 0x51)) goto LAB_144f277df;
        goto LAB_144f2755f;
      }
      if ((char)piVar12[0x53] != '\0') {
        FUN_144f14c60(param_2,param_1,"[%d] discarding dataon closed stream with response",*piVar12)
        ;
        *param_5 = 0;
        uVar11 = param_4;
        goto LAB_144f277df;
      }
      FUN_144f14ad0(param_2,"stream %u closed");
      *param_5 = 0x37;
      goto LAB_144f277d0;
    }
    if (uVar11 <= param_4) {
      piVar12[0x46] = 0;
      piVar12[0x47] = 0;
      bVar13 = true;
LAB_144f2755f:
      cVar2 = FUN_1452e7360(piVar12 + 0x12);
      if (cVar2 == '\0') {
        uVar6 = FUN_1452e0090(*puVar1,*piVar12);
        iVar3 = FUN_1452e0660(uVar6);
        if (iVar3 != 0) {
          *param_5 = 0x37;
          goto LAB_144f277d0;
        }
      }
      goto LAB_144f27665;
    }
    FUN_144f14b70(param_2,"HTTP/2 send again with decreased length (%zd vs %zd)",param_4,uVar11);
LAB_144f277c8:
    *param_5 = 0x10;
  }
LAB_144f277d0:
  uVar11 = 0xffffffffffffffff;
LAB_144f277df:
  uVar7 = FUN_1452e7330(puVar1 + 0xb);
  if (piVar12 == (int *)0x0) {
    uVar6 = FUN_1452e0410(*local_40);
    FUN_144f14c60(param_2,param_1,
                  "cf_send(len=%zu) -> %zd, %d, connection-window=%d, nw_send_buffer(%zu)",param_4,
                  uVar11,CONCAT44(uVar5,*param_5),CONCAT44(uVar4,uVar6),uVar7);
  }
  else {
    uVar8 = FUN_1452e7330(piVar12 + 0x12);
    uVar5 = FUN_1452e0410(*puVar1);
    uVar6 = FUN_1452e03d0(*local_40,*piVar12);
    FUN_144f14c60(param_2,param_1,
                  "[%d] cf_send(len=%zu) -> %zd, %d, upload_left=%I64d, h2 windows %d-%d (stream-conn), buffers %zu-%zu (stream-conn)"
                  ,*piVar12,param_4,uVar11,CONCAT44(uVar4,*param_5),*(undefined8 *)(piVar12 + 0x48),
                  uVar6,uVar5,uVar8,uVar7);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar9;
  return uVar11;
}



// FUNCTION 144f278d0 FUN_144f278d0 body=192 status=ok
// SIG undefined FUN_144f278d0(void)

uint FUN_144f278d0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar5 = (undefined4 *)0x0;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1a8) != 0)) {
    puVar5 = *(undefined4 **)(*(longlong *)(param_2 + 0x1a8) + 0x40);
  }
  uVar2 = puVar1[2];
  puVar1[2] = param_2;
  uVar4 = FUN_144f13ec0();
  *param_3 = uVar4;
  bVar7 = (*(uint *)(param_2 + 0x154) & 0x14) == 0;
  uVar6 = (uint)bVar7;
  if ((((((byte)*(uint *)(param_2 + 0x154) & 0x2a) == 2) ||
       (iVar3 = FUN_1452e0140(*puVar1), iVar3 != 0)) && (iVar3 = FUN_1452e0410(*puVar1), iVar3 != 0)
      ) && (iVar3 = FUN_1452e03d0(*puVar1,*puVar5), iVar3 != 0)) {
    uVar6 = bVar7 | 0x10000;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar2;
  return uVar6;
}



// FUNCTION 144f27990 FUN_144f27990 body=245 status=ok
// SIG undefined FUN_144f27990(void)

ulonglong FUN_144f27990(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x24) != '\0') {
    *param_4 = '\x01';
    return 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x24) == '\0') {
    uVar4 = FUN_144f13d60();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (*param_4 == (char)uVar4) {
      return uVar4;
    }
  }
  *param_4 = '\0';
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_2;
  if ((((*plVar1 != 0) || (uVar3 = FUN_144f29930(param_1,param_2,0), uVar3 == 0)) &&
      (uVar3 = FUN_144f2b100(param_1,param_2), uVar3 == 0)) &&
     ((uVar3 = FUN_144f28770(param_1,param_2), uVar3 == 0x51 || (uVar3 == 0)))) {
    *param_4 = '\x01';
    uVar3 = 0;
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  FUN_144f14c60(param_2,param_1,"cf_connect() -> %d, %d, ",uVar3,*param_4);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar2;
  return (ulonglong)uVar3;
}



// FUNCTION 144f27a90 FUN_144f27a90 body=92 status=ok
// SIG undefined FUN_144f27a90(void)

void FUN_144f27a90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    FUN_144f28710();
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar2;
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f27ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
    return;
  }
  return;
}



// FUNCTION 144f27af0 FUN_144f27af0 body=58 status=ok
// SIG undefined FUN_144f27af0(void)

void FUN_144f27af0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_144f28710(lVar1);
    (*(code *)PTR_free_14c6d9f28)(lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 144f27b30 FUN_144f27b30 body=557 status=ok
// SIG undefined FUN_144f27b30(void)

undefined4 * FUN_144f27b30(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char cVar10;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)0x0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_2;
  puVar8 = puVar6;
  if (param_3 == 6) {
    puVar9 = puVar7;
    if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1a8) != 0)) {
      puVar9 = *(undefined4 **)(*(longlong *)(param_2 + 0x1a8) + 0x40);
    }
    if (((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
        (lVar3 = **(longlong **)(param_1 + 0x10), lVar3 == 0)) || (puVar9 == (undefined4 *)0x0))
    goto LAB_144f27d34;
    if (param_4 == 0) {
      puVar7 = (undefined4 *)(ulonglong)(uint)puVar9[0x52];
    }
    iVar4 = FUN_1452e6780(lVar3,0,*puVar9,puVar7);
    if (iVar4 != 0) {
      uVar5 = FUN_1452e6a80(iVar4);
      FUN_144f14b70(param_2,"nghttp2_session_set_local_window_size() failed: %s(%d)",uVar5,iVar4);
      puVar8 = (undefined4 *)&DAT_00000010;
      goto LAB_144f27d34;
    }
    if (param_4 != 0) {
      FUN_144f28770(param_1,param_2);
      goto LAB_144f27d34;
    }
    FUN_144f289b0(param_1,param_2,puVar9);
    FUN_144f28770(param_1,param_2);
    FUN_144f289b0(param_1,param_2,puVar9);
  }
  else {
    if (param_3 == 7) {
      FUN_144f28b80(param_1,param_2,param_4 != 0);
      goto LAB_144f27d34;
    }
    puVar8 = puVar7;
    if (param_3 != 8) goto LAB_144f27d34;
    plVar2 = *(longlong **)(param_1 + 0x10);
    if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1a8) != 0)) {
      puVar7 = *(undefined4 **)(*(longlong *)(param_2 + 0x1a8) + 0x40);
    }
    if (((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) ||
       ((puVar8 = puVar6, puVar7 == (undefined4 *)0x0 ||
        ((FUN_144f14c60(param_2,param_1,"[%d] data done send",*puVar7),
         *(char *)((longlong)puVar7 + 0x151) != '\0' ||
         (*(undefined1 *)((longlong)puVar7 + 0x151) = 1, *(longlong *)(puVar7 + 0x48) == 0))))))
    goto LAB_144f27d34;
    uVar5 = FUN_1452e7330(puVar7 + 0x12);
    *(undefined8 *)(puVar7 + 0x48) = uVar5;
    FUN_1452e0090(*plVar2,*puVar7);
    cVar10 = '\x01';
    if ((*(char *)((longlong)puVar7 + 0x151) == '\0') &&
       ((*(longlong *)(puVar7 + 0x48) != 0 || (*(longlong *)(puVar7 + 0x46) != 0)))) {
      cVar10 = '\x03';
    }
    if (*(char *)(param_2 + 0x13c3) == cVar10) goto LAB_144f27d34;
    FUN_144f14c60(param_2,param_1,"[%d] DRAIN dselect_bits=%x",*puVar7,cVar10);
    *(char *)(param_2 + 0x13c3) = cVar10;
  }
  FUN_144bba820(param_2,0,8);
  puVar8 = puVar6;
LAB_144f27d34:
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar1;
  return puVar8;
}



// FUNCTION 144f27d60 FUN_144f27d60 body=158 status=ok
// SIG undefined FUN_144f27d60(void)

bool FUN_144f27d60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = 0;
  cVar3 = '\0';
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1a8) != 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x40);
  }
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     ((cVar2 = FUN_1452e7360(*(longlong *)(param_1 + 0x10) + 0x18), cVar2 != '\0' &&
      ((lVar4 == 0 ||
       ((cVar2 = FUN_1452e7360(lVar4 + 0x48), cVar2 != '\0' &&
        (cVar2 = FUN_1452e7360(lVar4 + 8), cVar2 != '\0')))))))) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    }
    bVar5 = cVar3 != '\0';
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}



// FUNCTION 144f27e00 FUN_144f27e00 body=295 status=ok
// SIG undefined FUN_144f27e00(void)

undefined1 FUN_144f27e00(longlong param_1,longlong param_2,char *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int local_res8 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  uVar8 = 0;
  lVar2 = plVar1[2];
  plVar1[2] = param_2;
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    bVar9 = true;
    *param_3 = '\0';
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
      if (cVar4 != '\0') {
        if (*param_3 != '\0') {
          *param_3 = '\0';
          lVar6 = FUN_1452e77d0(lVar3 + 0x18,FUN_144f28d30,param_1,local_res8);
          if (lVar6 == -1) {
            bVar9 = true;
            if (local_res8[0] != 0x51) {
              bVar9 = false;
            }
          }
          else {
            FUN_144f14c60(param_2,param_1,"%zd bytes stray data read before trying h2 connection",
                          lVar6);
            iVar5 = FUN_144f29d30(param_1,param_2,local_res8);
            if (iVar5 < 0) {
              bVar9 = false;
            }
            else {
              iVar5 = FUN_144f29cf0(lVar3);
              bVar9 = iVar5 == 0;
            }
          }
        }
        if (bVar9) {
          uVar8 = 1;
          uVar7 = 1;
          goto LAB_144f27ee7;
        }
      }
    }
  }
  uVar7 = 0;
LAB_144f27ee7:
  FUN_144f14c60(param_2,param_1,"conn alive -> %d, input_pending=%d",uVar8,*param_3);
  *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) = lVar2;
  return uVar7;
}



// FUNCTION 144f27f30 FUN_144f27f30 body=188 status=ok
// SIG undefined FUN_144f27f30(void)

undefined8 FUN_144f27f30(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_2;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  iVar3 = thunk_FUN_1452e0970(*puVar2,0,0);
  if (iVar3 == 0) {
    iVar3 = FUN_1452de220(*puVar2);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1452e6a80(iVar3);
      FUN_144f14b70(param_2,"nghttp2_session_send() failed: %s(%d)",uVar4,iVar3);
      uVar4 = 0x37;
    }
  }
  else {
    uVar4 = FUN_1452e6a80(iVar3);
    FUN_144f14b70(param_2,"nghttp2_submit_ping() failed: %s(%d)",uVar4,iVar3);
    uVar4 = 0x10;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar1;
  return uVar4;
}



// FUNCTION 144f27ff0 FUN_144f27ff0 body=173 status=ok
// SIG undefined FUN_144f27ff0(void)

undefined8 FUN_144f27ff0(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (param_3 == 1) {
    uVar3 = puVar1[2];
    puVar1[2] = param_2;
    iVar2 = FUN_1452e0620(*puVar1);
    if (iVar2 == 0) {
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x330);
    }
    else {
      uVar5 = (ulonglong)*(uint *)(puVar1 + 1);
    }
    uVar4 = (undefined4)uVar5;
    if (0x7fffffff < uVar5) {
      uVar4 = 0x7fffffff;
    }
    *param_4 = uVar4;
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar3;
    return 0;
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f2802c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
    return uVar3;
  }
  return 0x30;
}



// FUNCTION 144f280a0 FUN_144f280a0 body=290 status=ok
// SIG undefined FUN_144f280a0(void)

void FUN_144f280a0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 3;
  local_84 = FUN_144bbafa0(*(undefined8 *)(param_2 + 0xd8));
  local_80 = 4;
  local_7c = 0xa00000;
  local_78 = 2;
  local_74 = (uint)(*(longlong *)(*(longlong *)(param_2 + 0xd8) + 0x90) != 0);
  lVar2 = FUN_1452e6460(local_68,0x50,&local_88);
  if (lVar2 == 0) {
    FUN_144f14b70(param_2,"nghttp2 unexpectedly failed on pack_settings_payload");
    FUN_144f07d10(param_1);
  }
  else {
    iVar1 = FUN_1452b8b80(local_68,lVar2,&local_98,local_90);
    if (iVar1 == 0) {
      FUN_144f07d70(param_1,
                    "Connection: Upgrade, HTTP2-Settings\r\nUpgrade: %s\r\nHTTP2-Settings: %s\r\n",
                    &DAT_149c09cb0,local_98);
      (*(code *)PTR_free_14c6d9f28)(local_98);
      *(undefined4 *)(param_2 + 0x16c) = 2;
    }
    else {
      FUN_144f07d10();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144f281e0 FUN_144f281e0 body=41 status=ok
// SIG undefined FUN_144f281e0(void)

ulonglong FUN_144f281e0(longlong param_1)

{
  ulonglong in_RAX;
  
  if ((((param_1 != 0) && (in_RAX = 0, *(longlong *)(param_1 + 0x1a8) != 0)) &&
      (in_RAX = *(ulonglong *)(*(longlong *)(param_1 + 0x1a8) + 0x40), in_RAX != 0)) &&
     (*(int *)(in_RAX + 0x144) == 0xd)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144f28210 FUN_144f28210 body=64 status=ok
// SIG undefined FUN_144f28210(void)

undefined8 FUN_144f28210(undefined8 param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    for (plVar1 = *(longlong **)(param_2 + 0x1d8 + (longlong)param_3 * 8); plVar1 != (longlong *)0x0
        ; plVar1 = (longlong *)plVar1[1]) {
      if ((undefined **)*plVar1 == &PTR_s_HTTP_2_14c70f380) {
        return 1;
      }
      if (((ulonglong)((undefined **)*plVar1)[1] & 1) != 0) {
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 144f28250 FUN_144f28250 body=121 status=ok
// SIG undefined FUN_144f28250(void)

undefined8 FUN_144f28250(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  
  if (param_2 != 0) {
    for (plVar1 = *(longlong **)(param_2 + 0x1d8 + (longlong)param_3 * 8); plVar1 != (longlong *)0x0
        ; plVar1 = (longlong *)plVar1[1]) {
      if ((undefined **)*plVar1 == &PTR_s_HTTP_2_14c70f380) {
        bVar2 = true;
        goto LAB_144f28289;
      }
      if (((ulonglong)((undefined **)*plVar1)[1] & 1) != 0) break;
    }
    bVar2 = false;
LAB_144f28289:
    if (bVar2) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x13c0) == '\x05') {
    if ((*(char *)(param_2 + 0x2c8) == '\0') || (*(char *)(param_2 + 0x2cb) != '\0')) {
      return 1;
    }
    FUN_144f14ad0(param_1,"Ignoring HTTP/2 prior knowledge due to proxy");
  }
  return 0;
}



// FUNCTION 144f282d0 FUN_144f282d0 body=257 status=ok
// SIG undefined FUN_144f282d0(void)

ulonglong FUN_144f282d0(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_res20 [8];
  longlong local_28 [2];
  
  local_28[0] = 0;
  lVar2 = (*(code *)PTR_calloc_14c6d9f40)(0xd0,1);
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    uVar1 = FUN_144f13b40(local_28,&PTR_s_HTTP_2_14c70f380,lVar2);
    uVar3 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      FUN_144f13ba0(param_1,param_2,param_3,local_28[0]);
      lVar2 = local_28[0];
      uVar3 = FUN_144f29930(local_28[0],param_1,0);
      if ((int)uVar3 == 0) {
        *(undefined1 *)(param_2 + 0x4d9) = 0x14;
        *(undefined1 *)(param_2 + 0x2df) = 1;
        **(undefined4 **)(param_2 + 0x4a0) = 2;
        FUN_144bbad90(*(undefined8 *)(param_1 + 0xd8));
        if (*(longlong *)(lVar2 + 8) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_144f13d60(lVar2,param_1,0,local_res20);
        }
      }
    }
    else {
      FUN_144f28710(lVar2);
      (*(code *)PTR_free_14c6d9f28)(lVar2);
    }
  }
  return uVar3;
}



// FUNCTION 144f283e0 FUN_144f283e0 body=250 status=ok
// SIG undefined FUN_144f283e0(void)

ulonglong FUN_144f283e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_res18;
  
  local_res18 = 0;
  uVar3 = 0x1b;
  lVar2 = (*(code *)PTR_calloc_14c6d9f40)(0xd0,1);
  if (lVar2 != 0) {
    uVar1 = FUN_144f13b40(&local_res18,&PTR_s_HTTP_2_14c70f380,lVar2);
    uVar3 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      FUN_144f13bd0(param_1,local_res18);
      lVar2 = *(longlong *)(param_1 + 8);
      uVar3 = FUN_144f29930(lVar2,param_2,0);
      if ((int)uVar3 == 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x4d9) = 0x14;
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x2df) = 1;
        **(undefined4 **)(*(longlong *)(param_1 + 0x18) + 0x4a0) = 2;
        FUN_144bbad90(*(undefined8 *)(param_2 + 0xd8));
        if (*(longlong *)(lVar2 + 8) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_144f13d60(lVar2,param_2,0,&local_res18);
        }
      }
    }
    else {
      FUN_144f28710(lVar2);
      (*(code *)PTR_free_14c6d9f28)(lVar2);
    }
  }
  return uVar3;
}



// FUNCTION 144f284e0 FUN_144f284e0 body=400 status=ok
// SIG undefined FUN_144f284e0(void)

ulonglong FUN_144f284e0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                       ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_28 [4];
  int local_24;
  longlong local_20;
  
  local_20 = 0;
  uVar4 = 0x1b;
  lVar2 = (*(code *)PTR_calloc_14c6d9f40)(0xd0,1);
  if ((lVar2 == 0) || (uVar4 = FUN_144f13b40(&local_20,&PTR_s_HTTP_2_14c70f380,lVar2), uVar4 != 0))
  {
    if (lVar2 != 0) {
      FUN_144f28710(lVar2);
      (*(code *)PTR_free_14c6d9f28)(lVar2);
    }
    return (ulonglong)uVar4;
  }
  FUN_144f13ba0(param_1,param_2,param_3,local_20);
  lVar1 = local_20;
  lVar2 = *(longlong *)(local_20 + 0x10);
  uVar3 = FUN_144f29930(local_20,param_1,1);
  local_24 = (int)uVar3;
  if (local_24 != 0) {
    return uVar3;
  }
  if (param_5 != 0) {
    uVar3 = FUN_1452e73b0(lVar2 + 0x18,param_4,param_5,&local_24);
    if ((longlong)uVar3 < 0) {
      FUN_144f14b70(param_1,"error on copying HTTP Upgrade response: %d",local_24);
      return 0x38;
    }
    if (uVar3 < param_5) {
      FUN_144f14b70(param_1,
                    "connection buffer size could not take all data from HTTP Upgrade response header: copied=%zd, datalen=%zu"
                    ,uVar3,param_5);
      return 0x10;
    }
    FUN_144f14ad0(param_1,
                  "Copied HTTP/2 data in stream buffer to connection buffer after upgrade: len=%zu",
                  param_5);
  }
  *(undefined1 *)(param_2 + 0x4d9) = 0x14;
  *(undefined1 *)(param_2 + 0x2df) = 1;
  **(undefined4 **)(param_2 + 0x4a0) = 2;
  FUN_144bbad90(*(undefined8 *)(param_1 + 0xd8));
  if (*(longlong *)(lVar1 + 8) != 0) {
    uVar3 = FUN_144f13d60(lVar1,param_1,0,local_28);
    return uVar3;
  }
  return 0;
}



// FUNCTION 144f28670 FUN_144f28670 body=138 status=ok
// SIG undefined FUN_144f28670(void)

void FUN_144f28670(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 3;
  local_24 = FUN_144bbafa0(*(undefined8 *)(param_2 + 0xd8));
  local_20 = 4;
  local_1c = 0xa00000;
  local_18 = 2;
  local_14 = (uint)(*(longlong *)(*(longlong *)(param_2 + 0xd8) + 0x90) != 0);
  FUN_1452e6460(param_1,0x50,&local_28);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 144f28710 FUN_144f28710 body=91 status=ok
// SIG undefined FUN_144f28710(void)

void FUN_144f28710(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (*param_1 != 0) {
    FUN_1452de080();
  }
  FUN_1452e72d0(param_1 + 3);
  FUN_1452e72d0(param_1 + 0xb);
  FUN_1452e71c0(param_1 + 0x13);
  memset(param_1,0,0xd0);
  param_1[2] = lVar1;
  return;
}



// FUNCTION 144f28770 FUN_144f28770 body=563 status=ok
// SIG undefined FUN_144f28770(void)

void FUN_144f28770(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 auStack_78 [32];
  int local_58;
  int local_48 [2];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x1a8) == 0)) {
    iVar6 = 0;
    *(undefined1 *)((longlong)puVar1 + 0xcb) = 0;
  }
  else {
    piVar2 = *(int **)(*(longlong *)(param_2 + 0x1a8) + 0x40);
    iVar6 = 0;
    if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
      iVar7 = *(int *)(param_2 + 0xa58);
      iVar11 = 0x10;
      if (iVar7 != 0) {
        iVar11 = iVar7;
      }
      iVar10 = 0x10;
      if (*(int *)(param_2 + 0x1210) != 0) {
        iVar10 = *(int *)(param_2 + 0x1210);
      }
      if (((iVar11 != iVar10) || (*(char *)(param_2 + 0xa5c) != *(char *)(param_2 + 0x1214))) ||
         (*(longlong *)(param_2 + 0xa48) != *(longlong *)(param_2 + 0x1200))) {
        if (((*(longlong *)(param_2 + 0xa48) == 0) ||
            (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0xa48) + 0x1a8), lVar3 == 0)) ||
           (puVar4 = *(undefined4 **)(lVar3 + 0x40), puVar4 == (undefined4 *)0x0)) {
          uVar12 = 0;
        }
        else {
          uVar12 = *puVar4;
        }
        iVar6 = 0x10;
        if (iVar7 != 0) {
          iVar6 = iVar7;
        }
        FUN_1452e7130(local_40,uVar12,iVar6,*(undefined1 *)(param_2 + 0xa5c));
        *(undefined4 *)(param_2 + 0x1200) = *(undefined4 *)(param_2 + 0xa48);
        *(undefined4 *)(param_2 + 0x1204) = *(undefined4 *)(param_2 + 0xa4c);
        *(undefined4 *)(param_2 + 0x1208) = *(undefined4 *)(param_2 + 0xa50);
        *(undefined4 *)(param_2 + 0x120c) = *(undefined4 *)(param_2 + 0xa54);
        *(undefined8 *)(param_2 + 0x1210) = *(undefined8 *)(param_2 + 0xa58);
        FUN_144f14c60(param_2,param_1,"[%d] Queuing PRIORITY",*piVar2);
        iVar6 = FUN_1452e6660(*puVar1,0,*piVar2,local_40);
        if (iVar6 != 0) goto LAB_144f288e3;
      }
    }
    *(undefined1 *)((longlong)puVar1 + 0xcb) = 0;
    if (iVar6 != 0) goto LAB_144f288e3;
  }
  do {
    if ((*(char *)((longlong)puVar1 + 0xcb) != '\0') || (iVar7 = FUN_1452e0140(*puVar1), iVar7 == 0)
       ) break;
    iVar6 = FUN_1452de220(*puVar1);
  } while (iVar6 == 0);
LAB_144f288e3:
  iVar7 = FUN_1452e0660(iVar6);
  if (iVar7 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    cVar5 = FUN_1452e7360(lVar3 + 0x58);
    if (cVar5 == '\0') {
      lVar9 = FUN_1452e76a0(lVar3 + 0x58,FUN_144f28d70,param_1,local_48);
      if (lVar9 < 0) {
        if (local_48[0] == 0x51) {
          uVar8 = FUN_1452e7330(lVar3 + 0x58);
          FUN_144f14c60(param_2,param_1,"flush nw send buffer(%zu) -> EAGAIN",uVar8);
          *(undefined1 *)(lVar3 + 0xcb) = 1;
        }
      }
      else {
        FUN_1452e7360(lVar3 + 0x58);
      }
    }
  }
  else {
    uVar8 = FUN_1452e6a80(iVar6);
    local_58 = iVar6;
    FUN_144f14c60(param_2,param_1,"nghttp2_session_send error (%s)%d",uVar8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 144f289b0 FUN_144f289b0 body=114 status=ok
// SIG undefined FUN_144f289b0(void)

void FUN_144f289b0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = '\x01';
  if ((*(char *)((longlong)param_3 + 0x151) == '\0') &&
     ((*(longlong *)(param_3 + 0x48) != 0 || (*(longlong *)(param_3 + 0x46) != 0)))) {
    cVar1 = '\x03';
  }
  if (*(char *)(param_2 + 0x13c3) != cVar1) {
    FUN_144f14c60(param_2,param_1,"[%d] DRAIN dselect_bits=%x",*param_3,cVar1);
    *(char *)(param_2 + 0x13c3) = cVar1;
    FUN_144bba820(param_2,0,8);
  }
  return;
}



// FUNCTION 144f28a30 FUN_144f28a30 body=330 status=ok
// SIG undefined FUN_144f28a30(void)

undefined4 FUN_144f28a30(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_2 + 0x1a8) == 0) {
    FUN_144f14b70(param_2,"initialization failure, transfer not http initialized");
    return 2;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x40);
  if (lVar2 != 0) {
    *param_3 = lVar2;
    return 0;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(1,0x158);
  if (puVar4 == (undefined4 *)0x0) {
    uVar3 = 0x1b;
  }
  else {
    *puVar4 = 0xffffffff;
    FUN_1452e7260(puVar4 + 0x12,lVar1 + 0x98,4);
    FUN_1452e7260(puVar4 + 2,lVar1 + 0x98,0x280,1);
    FUN_1452e7ce0(puVar4 + 0x22,0x100000);
    FUN_1452db160(puVar4 + 0x36,0,0x100000);
    puVar4[0x50] = 0xffffffff;
    *(undefined8 *)(puVar4 + 0x44) = 0;
    *(undefined2 *)((longlong)puVar4 + 0x14f) = 0;
    *(undefined1 *)((longlong)puVar4 + 0x14d) = 0;
    puVar4[0x51] = 0;
    *(undefined8 *)(puVar4 + 0x48) = 0;
    puVar4[0x52] = 0xa00000;
    *(undefined4 **)(*(longlong *)(param_2 + 0x1a8) + 0x40) = puVar4;
    uVar3 = 0;
    *param_3 = (longlong)puVar4;
  }
  return uVar3;
}



// FUNCTION 144f28b80 FUN_144f28b80 body=419 status=ok
// SIG undefined FUN_144f28b80(void)

void FUN_144f28b80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    if ((*(longlong *)(param_2 + 0x1a8) != 0) &&
       (piVar2 = *(int **)(*(longlong *)(param_2 + 0x1a8) + 0x40), piVar2 != (int *)0x0)) {
      if (*plVar1 != 0) {
        if ((*(char *)((longlong)piVar2 + 0x14d) == '\0') && (0 < *piVar2)) {
          FUN_144f14c60(param_2,param_1,"[%d] premature DATA_DONE, RST stream");
          iVar4 = FUN_1452e6740(*plVar1,0,*piVar2,5);
          if (iVar4 == 0) {
            FUN_1452de220(*plVar1);
          }
        }
        cVar3 = FUN_1452e7360(piVar2 + 2);
        if (cVar3 == '\0') {
          uVar5 = FUN_1452e7330(piVar2 + 2);
          FUN_1452e04d0(*plVar1,*piVar2,uVar5);
          FUN_144f28770(param_1,param_2);
        }
        lVar6 = FUN_1452e01c0(*plVar1,*piVar2);
        if ((lVar6 != 0) && (iVar4 = FUN_1452e0200(*plVar1,*piVar2,0), iVar4 != 0)) {
          FUN_144f14ad0(param_2,"http/2: failed to clear user_data for stream %u",*piVar2);
        }
      }
      FUN_1452e72d0(piVar2 + 0x12);
      FUN_1452e72d0(piVar2 + 2);
      FUN_1452e7d20(piVar2 + 0x22);
      FUN_1452db180(piVar2 + 0x36);
      if (*(longlong *)(piVar2 + 0x4a) != 0) {
        lVar6 = *(longlong *)(piVar2 + 0x4c);
        while (lVar6 != 0) {
          (*(code *)PTR_free_14c6d9f28)
                    (*(undefined8 *)(*(longlong *)(piVar2 + 0x4a) + -8 + lVar6 * 8));
          lVar6 = *(longlong *)(piVar2 + 0x4c) + -1;
          *(longlong *)(piVar2 + 0x4c) = lVar6;
        }
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(piVar2 + 0x4a));
        piVar2[0x4a] = 0;
        piVar2[0x4b] = 0;
      }
      (*(code *)PTR_free_14c6d9f28)(piVar2);
      *(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0x40) = 0;
    }
  }
  return;
}



// FUNCTION 144f28d30 FUN_144f28d30 body=49 status=ok
// SIG undefined FUN_144f28d30(void)

void FUN_144f28d30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  FUN_144f13dc0(*(undefined8 *)(param_1 + 8),uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 144f28d70 FUN_144f28d70 body=106 status=ok
// SIG undefined FUN_144f28d70(void)

longlong FUN_144f28d70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  lVar1 = FUN_144f13da0(*(undefined8 *)(param_1 + 8),uVar2,param_2,param_3,param_4);
  if (0 < lVar1) {
    FUN_144f14c60(uVar2,param_1,"[0] egress: wrote %zd bytes",lVar1);
  }
  return lVar1;
}



// FUNCTION 144f28de0 FUN_144f28de0 body=134 status=ok
// SIG undefined FUN_144f28de0(void)

longlong FUN_144f28de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = param_5;
  lVar1 = *(longlong *)(param_5 + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  param_5._0_4_ = 0;
  lVar3 = FUN_1452e78d0(lVar1 + 0x58,param_2,param_3,FUN_144f28d70,lVar3,&param_5);
  if (lVar3 < 0) {
    if ((int)param_5 != 0x51) {
      FUN_144f14b70(uVar2,"Failed sending HTTP2 data");
      return -0x386;
    }
  }
  else if (lVar3 != 0) {
    return lVar3;
  }
  *(undefined1 *)(lVar1 + 0xcb) = 1;
  return -0x1f8;
}



// FUNCTION 144f28e70 FUN_144f28e70 body=587 status=ok
// SIG undefined FUN_144f28e70(void)

void FUN_144f28e70(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = param_3[2];
  iVar1 = *(int *)(param_2 + 8);
  lVar3 = *(longlong *)(lVar6 + 0x10);
  if (((lVar3 != 0) && (*(char *)(lVar3 + 0xacf) != '\0')) && (0 < *(int *)(*param_3 + 0xc))) {
    iVar4 = FUN_144f2a980(param_2,local_138,0xff);
    if (0xff < (ulonglong)(longlong)iVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    uVar5 = *(undefined4 *)(param_2 + 8);
    local_148 = local_138;
    local_138[iVar4] = 0;
    FUN_144f14c60(lVar3,param_3,"[%d] <- %s",uVar5);
  }
  if (iVar1 == 0) {
    if (*(char *)(param_2 + 0xc) == '\x04') {
      if ((*(byte *)(param_2 + 0xd) & 1) == 0) {
        iVar1 = *(int *)(lVar6 + 8);
        uVar5 = FUN_1452e0420(param_1,3);
        *(undefined4 *)(lVar6 + 8) = uVar5;
        iVar4 = FUN_1452e0420(param_1,2);
        *(bool *)(lVar6 + 0xca) = iVar4 != 0;
        FUN_144f14c60(lVar3,param_3,"[0] MAX_CONCURRENT_STREAMS: %d",*(undefined4 *)(lVar6 + 8));
        pcVar7 = "false";
        if (*(char *)(lVar6 + 0xca) != '\0') {
          pcVar7 = "TRUE";
        }
        FUN_144f14c60(lVar3,param_3,"[0] ENABLE_PUSH: %s",pcVar7);
        if ((lVar3 != 0) && (iVar1 != *(int *)(lVar6 + 8))) {
          FUN_144f14c60(lVar3,param_3,"[0] notify MAX_CONCURRENT_STREAMS: %u");
          FUN_144bbad90(*(undefined8 *)(lVar3 + 0xd8));
        }
        uVar2 = *(uint *)(lVar3 + 0x154);
        if (((uVar2 & 8) != 0) && ((uVar2 & 2) != 0)) {
          if (*(longlong *)(lVar3 + 0x1a8) == 0) {
            *(uint *)(lVar3 + 0x154) = uVar2 & 0xfffffff7;
          }
          else {
            lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x1a8) + 0x40);
            *(uint *)(lVar3 + 0x154) = uVar2 & 0xfffffff7;
            if (lVar6 != 0) {
              FUN_144f289b0(param_3,lVar3);
              FUN_144f14c60(lVar3,param_3,"[%d] un-holding after SETTINGS",0);
            }
          }
        }
      }
    }
    else if (*(char *)(param_2 + 0xc) == '\a') {
      *(undefined1 *)(lVar6 + 0xc9) = 1;
      *(undefined4 *)(lVar6 + 0xc0) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(lVar6 + 0xc4) = *(undefined4 *)(param_2 + 0x10);
      if (lVar3 != 0) {
        FUN_144f14ad0(lVar3,"received GOAWAY, error=%d, last_stream=%u");
        FUN_144bbad90(*(undefined8 *)(lVar3 + 0xd8));
      }
    }
  }
  else {
    lVar6 = FUN_1452e01c0(param_1,iVar1);
    if (lVar6 == 0) {
      FUN_144f14c60(lVar3,param_3,"[%d] No Curl_easy associated",iVar1);
    }
    else {
      FUN_144f2a5d0(param_3,lVar6,param_2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_168);
}



// FUNCTION 144f290e0 FUN_144f290e0 body=169 status=ok
// SIG undefined FUN_144f290e0(void)

void FUN_144f290e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((param_3 != (longlong *)0x0) && (lVar2 = *(longlong *)(param_3[2] + 0x10), lVar2 != 0)) &&
      (*(char *)(lVar2 + 0xacf) != '\0')) && (0 < *(int *)(*param_3 + 0xc))) {
    iVar3 = FUN_144f2a980(param_2,local_118,0xff);
    if (0xff < (ulonglong)(longlong)iVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    uVar1 = *(undefined4 *)(param_2 + 8);
    local_128 = local_118;
    local_118[iVar3] = 0;
    FUN_144f14c60(lVar2,param_3,"[%d] -> %s",uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 144f291a0 FUN_144f291a0 body=202 status=ok
// SIG undefined FUN_144f291a0(void)

undefined8
FUN_144f291a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_18 [4];
  
  lVar2 = FUN_1452e01c0(param_1,param_3);
  if (lVar2 == 0) {
    if (param_6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(param_6 + 0x10) + 0x10);
    }
    FUN_144f14c60(uVar4,param_6,"[%d] Data for unknown",param_3);
    FUN_1452e04d0(param_1,param_3,param_5);
    uVar4 = 0;
  }
  else {
    if (((*(longlong *)(lVar2 + 0x1a8) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x1a8) + 0x40), lVar1 != 0)) &&
       ((lVar3 = FUN_1452e73b0(lVar1 + 8,param_4,param_5,local_18), -1 < lVar3 ||
        (local_18[0] == 0x51)))) {
      FUN_144f289b0(param_6,lVar2,lVar1);
      return 0;
    }
    uVar4 = 0xfffffc7a;
  }
  return uVar4;
}



// FUNCTION 144f29270 FUN_144f29270 body=272 status=ok
// SIG undefined FUN_144f29270(void)

undefined8 FUN_144f29270(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && (lVar3 = FUN_1452e01c0(), lVar3 != 0)) {
    if ((*(longlong *)(lVar3 + 0x1a8) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x1a8) + 0x40), lVar1 == 0)) {
      return 0xfffffc7a;
    }
    *(undefined1 *)(lVar1 + 0x14d) = 1;
    *(int *)(lVar1 + 0x144) = param_3;
    if (param_3 != 0) {
      *(undefined1 *)(lVar1 + 0x14e) = 1;
    }
    *(uint *)(lVar3 + 0x154) = *(uint *)(lVar3 + 0x154) & 0xfffffff7;
    if (*(int *)(lVar1 + 0x144) == 0) {
      FUN_144f14c60(lVar3,param_4,"[%d] CLOSED",param_2);
    }
    else {
      uVar4 = FUN_1452e6cd0(param_3);
      FUN_144f14c60(lVar3,param_4,"[%d] RESET: %s (err %d)",param_2,uVar4,param_3);
    }
    FUN_144f289b0(param_4,lVar3,lVar1);
    iVar2 = FUN_1452e0200(param_1,param_2,0);
    if (iVar2 != 0) {
      FUN_144f14ad0(lVar3,"http/2: failed to clear user_data for stream %u",param_2);
    }
  }
  return 0;
}



// FUNCTION 144f29380 FUN_144f29380 body=19 status=ok
// SIG undefined FUN_144f29380(void)

undefined8 FUN_144f29380(undefined8 param_1,longlong param_2)

{
  FUN_1452e01c0(param_1,*(undefined4 *)(param_2 + 8));
  return 0;
}



// FUNCTION 144f293a0 FUN_144f293a0 body=1377 status=ok
// SIG undefined FUN_144f293a0(void)

void FUN_144f293a0(undefined8 param_1,longlong param_2,char *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  int local_88 [2];
  undefined8 local_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88[0] = *(int *)(param_2 + 8);
  local_80 = param_1;
  lVar4 = FUN_1452e01c0(param_1,local_88[0]);
  if (lVar4 == 0) goto LAB_144f298f4;
  if ((*(longlong *)(lVar4 + 0x1a8) == 0) ||
     (puVar1 = *(undefined4 **)(*(longlong *)(lVar4 + 0x1a8) + 0x40), puVar1 == (undefined4 *)0x0))
  {
    FUN_144f14b70(lVar4,"Internal NULL stream");
    goto LAB_144f298f4;
  }
  if (*(char *)(param_2 + 0xc) != '\x05') {
    if (*(char *)(puVar1 + 0x54) == '\0') {
      if ((param_4 == 7) && (iVar3 = memcmp(":status",param_3,7), iVar3 == 0)) {
        iVar3 = FUN_144f215f0(puVar1 + 0x50,param_5,param_6);
        if (iVar3 == 0) {
          FUN_144f2b7e0(local_78,0x20,":status:%u\r",puVar1[0x50]);
          iVar3 = FUN_1452cf3f0(lVar4,local_78,0x10);
          if (iVar3 == 0) {
            lVar5 = 0;
            lVar7 = lVar5;
            if (*(longlong *)(lVar4 + 0x1a8) != 0) {
              lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x1a8) + 0x40);
            }
            lVar6 = FUN_1452e73b0(lVar7 + 8,"HTTP/2 ",7,local_88);
            if (lVar6 < 0) {
              if (local_88[0] != 0) goto LAB_144f298f4;
            }
            else {
              *(longlong *)(lVar7 + 0x110) = *(longlong *)(lVar7 + 0x110) + lVar6;
            }
            lVar7 = lVar5;
            if (*(longlong *)(lVar4 + 0x1a8) != 0) {
              lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x1a8) + 0x40);
            }
            lVar6 = FUN_1452e73b0(lVar7 + 8,param_5,param_6,local_88);
            if (lVar6 < 0) {
              if (local_88[0] != 0) goto LAB_144f298f4;
            }
            else {
              *(longlong *)(lVar7 + 0x110) = *(longlong *)(lVar7 + 0x110) + lVar6;
            }
            if (*(longlong *)(lVar4 + 0x1a8) != 0) {
              lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1a8) + 0x40);
            }
            lVar7 = FUN_1452e73b0(lVar5 + 8,&DAT_149c09c38,3,local_88);
            if (lVar7 < 0) {
              if (local_88[0] != 0) goto LAB_144f298f4;
            }
            else {
              *(longlong *)(lVar5 + 0x110) = *(longlong *)(lVar5 + 0x110) + lVar7;
            }
            if ((param_8 == 0) || (*(longlong *)(*(longlong *)(param_8 + 0x10) + 0x10) != lVar4)) {
              FUN_144bba820(lVar4,0,8);
            }
            local_a8 = CONCAT44(local_a8._4_4_,puVar1[0x50]);
            FUN_144f14c60(lVar4,param_8,"[%d] status: HTTP/2 %03d",*puVar1);
          }
        }
      }
      else {
        lVar5 = FUN_1452e73b0(puVar1 + 2,param_3,param_4,local_88);
        if (lVar5 < 0) {
          if (local_88[0] != 0) goto LAB_144f298f4;
        }
        else {
          *(longlong *)(puVar1 + 0x44) = *(longlong *)(puVar1 + 0x44) + lVar5;
        }
        lVar5 = 0;
        lVar7 = lVar5;
        if (*(longlong *)(lVar4 + 0x1a8) != 0) {
          lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x1a8) + 0x40);
        }
        lVar6 = FUN_1452e73b0(lVar7 + 8,&DAT_149c09c5c,2,local_88);
        if (lVar6 < 0) {
          if (local_88[0] != 0) goto LAB_144f298f4;
        }
        else {
          *(longlong *)(lVar7 + 0x110) = *(longlong *)(lVar7 + 0x110) + lVar6;
        }
        lVar7 = lVar5;
        if (*(longlong *)(lVar4 + 0x1a8) != 0) {
          lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x1a8) + 0x40);
        }
        lVar6 = FUN_1452e73b0(lVar7 + 8,param_5,param_6,local_88);
        if (lVar6 < 0) {
          if (local_88[0] != 0) goto LAB_144f298f4;
        }
        else {
          *(longlong *)(lVar7 + 0x110) = *(longlong *)(lVar7 + 0x110) + lVar6;
        }
        if (*(longlong *)(lVar4 + 0x1a8) != 0) {
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1a8) + 0x40);
        }
        lVar7 = FUN_1452e73b0(lVar5 + 8,&DAT_149c058e8,2,local_88);
        if (lVar7 < 0) {
          if (local_88[0] != 0) goto LAB_144f298f4;
        }
        else {
          *(longlong *)(lVar5 + 0x110) = *(longlong *)(lVar5 + 0x110) + lVar7;
        }
        if ((param_8 == 0) || (*(longlong *)(*(longlong *)(param_8 + 0x10) + 0x10) != lVar4)) {
          FUN_144bba820(lVar4,0,8);
        }
        local_90 = param_5;
        local_a8 = CONCAT44(local_a8._4_4_,(int)param_4);
        local_a0 = param_3;
        local_98 = (int)param_6;
        FUN_144f14c60(lVar4,param_8,"[%d] header: %.*s: %.*s",*puVar1);
      }
    }
    else {
      local_90 = param_5;
      local_a8 = CONCAT44(local_a8._4_4_,(int)param_4);
      local_a0 = param_3;
      local_98 = (int)param_6;
      FUN_144f14c60(lVar4,param_8,"[%d] trailer: %.*s: %.*s",*puVar1);
      local_a8 = param_6;
      FUN_1452db3d0(puVar1 + 0x36,param_3,param_4,param_5);
    }
    goto LAB_144f298f4;
  }
  iVar3 = strcmp(":authority",param_3);
  if (iVar3 == 0) {
    lVar5 = FUN_144f2b8b0("%s:%d",*(undefined8 *)(*(longlong *)(param_8 + 0x18) + 0x70),
                          *(undefined4 *)(*(longlong *)(param_8 + 0x18) + 0x4c4));
    if (lVar5 == 0) goto LAB_144f298f4;
    iVar3 = FUN_144f19540(lVar5,param_5);
    if ((iVar3 == 0) &&
       ((lVar7 = *(longlong *)(param_8 + 0x18),
        *(int *)(lVar7 + 0x4c4) != *(int *)(*(longlong *)(lVar7 + 0x2f0) + 0x80) ||
        (iVar3 = FUN_144f19540(*(undefined8 *)(lVar7 + 0x70),param_5), iVar3 == 0)))) {
      FUN_1452e6740(local_80,0,local_88[0],1);
      (*(code *)PTR_free_14c6d9f28)(lVar5);
      goto LAB_144f298f4;
    }
    (*(code *)PTR_free_14c6d9f28)(lVar5);
  }
  if (*(longlong *)(puVar1 + 0x4a) == 0) {
    *(undefined8 *)(puVar1 + 0x4e) = 10;
    lVar4 = (*(code *)PTR_malloc_14c6d9f20)(0x50);
    *(longlong *)(puVar1 + 0x4a) = lVar4;
    if (lVar4 == 0) goto LAB_144f298f4;
    *(undefined8 *)(puVar1 + 0x4c) = 0;
  }
  else {
    uVar2 = *(ulonglong *)(puVar1 + 0x4e);
    if (*(ulonglong *)(puVar1 + 0x4c) == uVar2) {
      if (uVar2 < 0x3e9) {
        *(ulonglong *)(puVar1 + 0x4e) = uVar2 * 2;
        lVar4 = FUN_144f139a0(*(longlong *)(puVar1 + 0x4a),uVar2 << 4);
        if (lVar4 != 0) {
          *(longlong *)(puVar1 + 0x4a) = lVar4;
          goto LAB_144f29576;
        }
      }
      else {
        FUN_144f14b70(lVar4,"Too many PUSH_PROMISE headers");
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar1 + 0x4a));
      }
      *(undefined8 *)(puVar1 + 0x4a) = 0;
      goto LAB_144f298f4;
    }
  }
LAB_144f29576:
  plVar8 = (longlong *)(puVar1 + 0x4c);
  lVar4 = FUN_144f2b8b0("%s:%s",param_3,param_5);
  if (lVar4 != 0) {
    *(longlong *)(*(longlong *)(puVar1 + 0x4a) + *plVar8 * 8) = lVar4;
    *plVar8 = *plVar8 + 1;
  }
LAB_144f298f4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144f29930 FUN_144f29930 body=935 status=ok
// SIG undefined FUN_144f29930(void)

void FUN_144f29930(longlong param_1,longlong param_2,char param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_c8;
  undefined4 *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  local_c8 = (void *)0x0;
  FUN_1452e71a0(puVar1 + 0x13,0x4000,0x280);
  FUN_1452e7260(puVar1 + 3,puVar1 + 0x13,0x280,0);
  FUN_1452e7260(puVar1 + 0xb,puVar1 + 0x13,1,0);
  *(undefined4 *)((longlong)puVar1 + 0xc4) = 0x7fffffff;
  iVar3 = FUN_1452ddf20(&local_c8);
  if (iVar3 != 0) {
    FUN_144f14b70(param_2,"Couldn\'t initialize nghttp2 callbacks");
    goto LAB_144f29c93;
  }
  FUN_1452ddf70(local_c8,FUN_144f28de0);
  FUN_1452ddf80(local_c8,FUN_144f28e70);
  FUN_1452ddfa0(local_c8,FUN_144f290e0);
  FUN_1452ddf90(local_c8,FUN_144f291a0);
  FUN_1452ddfb0(local_c8,FUN_144f29270);
  FUN_1452ddfc0(local_c8,FUN_144f29380);
  FUN_1452ddfd0(local_c8,FUN_144f293a0);
  FUN_1452ddfe0(local_c8,&LAB_144f29920);
  pvVar2 = local_c8;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  iVar3 = FUN_1452ddff0(&local_c0);
  if (iVar3 == 0) {
    FUN_1452de030(local_c0,1);
    iVar3 = FUN_1452de040(uVar4,pvVar2,param_1,local_c0);
    free(local_c0);
    if (iVar3 == 0) {
      *(undefined4 *)(puVar1 + 1) = 100;
      if (param_3 == '\0') {
        local_b8 = 3;
        local_b4 = FUN_144bbafa0();
        local_b0 = 4;
        local_ac = 0xa00000;
        local_a8 = 2;
        local_a4 = (uint)(*(longlong *)(*(longlong *)(param_2 + 0xd8) + 0x90) != 0);
        iVar3 = FUN_1452e6760(*puVar1,0,&local_b8,3);
        if (iVar3 != 0) {
          uVar4 = FUN_1452e6a80(iVar3);
          FUN_144f14b70(param_2,"nghttp2_submit_settings() failed: %s(%d)",uVar4,iVar3);
          goto LAB_144f29c93;
        }
      }
      else {
        uVar4 = FUN_144f28670(local_98,param_2);
        iVar3 = FUN_144f28a30(param_1,param_2,&local_c0);
        if (iVar3 != 0) goto LAB_144f29c93;
        local_d8 = 0;
        *local_c0 = 1;
        iVar3 = FUN_1452e05a0(*puVar1,local_98,uVar4,*(char *)(param_2 + 0x13c2) == '\x05');
        if (iVar3 != 0) {
          uVar4 = FUN_1452e6a80(iVar3);
          FUN_144f14b70(param_2,"nghttp2_session_upgrade2() failed: %s(%d)",uVar4,iVar3);
          goto LAB_144f29c93;
        }
        iVar3 = FUN_1452e0200(*puVar1,*local_c0,param_2);
        if (iVar3 != 0) {
          FUN_144f14ad0(param_2,"http/2: failed to set user_data for stream %u",*local_c0);
        }
        FUN_144f14c60(param_2,param_1,"created session via Upgrade");
      }
      iVar3 = FUN_1452e6780(*puVar1,0,0,0x3e800000);
      if (iVar3 == 0) {
        pcVar5 = "";
        if (param_3 != '\0') {
          pcVar5 = " (via h1 upgrade)";
        }
        FUN_144f14c60(param_2,param_1,"[0] created h2 session%s",pcVar5);
      }
      else {
        uVar4 = FUN_1452e6a80(iVar3);
        FUN_144f14b70(param_2,"nghttp2_session_set_local_window_size() failed: %s(%d)",uVar4,iVar3);
      }
      goto LAB_144f29c93;
    }
  }
  FUN_144f14b70(param_2,"Couldn\'t initialize nghttp2");
LAB_144f29c93:
  if (local_c8 != (void *)0x0) {
    free(local_c8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144f29cf0 FUN_144f29cf0 body=62 status=ok
// SIG undefined FUN_144f29cf0(void)

undefined8 FUN_144f29cf0(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1[0x17] == 0) {
    iVar1 = FUN_1452e00f0(*param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_1452e0140(*param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144f29d30 FUN_144f29d30 body=268 status=ok
// SIG undefined FUN_144f29d30(void)

undefined8 FUN_144f29d30(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  undefined8 local_res20;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  cVar2 = FUN_1452e7590(puVar1 + 3,&local_res20,&local_res8);
  while (cVar2 != '\0') {
    uVar4 = FUN_1452de2f0(*puVar1,local_res20,local_res8);
    if ((longlong)uVar4 < 0) {
      uVar5 = FUN_1452e6a80(uVar4 & 0xffffffff);
      FUN_144f14b70(param_2,"process_pending_input: nghttp2_session_mem_recv() returned %zd:%s",
                    uVar4,uVar5);
      *param_3 = 0x38;
      return 0xffffffff;
    }
    FUN_1452e7620(puVar1 + 3,uVar4);
    cVar2 = FUN_1452e7360(puVar1 + 3);
    if (cVar2 != '\0') break;
    uVar5 = FUN_1452e7330(puVar1 + 3);
    FUN_144f14c60(param_2,param_1,"process_pending_input: %zu bytes left in connection buffer",uVar5
                 );
    cVar2 = FUN_1452e7590(puVar1 + 3,&local_res20,&local_res8);
  }
  iVar3 = FUN_1452e0620(*puVar1);
  if (iVar3 == 0) {
    FUN_144f16220(*(undefined8 *)(param_1 + 0x18),1);
  }
  return 0;
}



// FUNCTION 144f29e40 FUN_144f29e40 body=817 status=ok
// SIG undefined FUN_144f29e40(void)

undefined8 FUN_144f29e40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 local_res18;
  
  uVar8 = 0;
  local_res18 = 0;
  lVar4 = FUN_1452cb910();
  if (lVar4 == 0) {
    return 5;
  }
  if (param_2 != (longlong *)0x0) {
    if (((((((int *)*param_2 != (int *)0x0) && (*(int *)*param_2 == -0x3f212453)) &&
          (pcVar5 = strchr("scheme",0x3a), pcVar5 == (char *)0x0)) &&
         ((*param_2 != 0 && (lVar1 = *(longlong *)(*param_2 + 0x1a8), lVar1 != 0)))) &&
        (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 != 0)) &&
       (uVar6 = uVar8, *(longlong *)(lVar1 + 0x130) != 0)) {
      do {
        iVar3 = strncmp(":scheme",*(char **)(*(longlong *)(lVar1 + 0x128) + uVar6 * 8),7);
        if ((iVar3 == 0) &&
           (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x128) + uVar6 * 8),
           *(char *)(lVar2 + 7) == ':')) {
          lVar2 = lVar2 + 8;
          if (lVar2 != 0) {
            uVar7 = 1;
            iVar3 = FUN_1452cc2c0(lVar4,1,lVar2,0);
            if (iVar3 != 0) goto LAB_144f2a0ea;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulonglong *)(lVar1 + 0x130));
    }
    if ((int *)*param_2 == (int *)0x0) {
      if (param_2 == (longlong *)0x0) goto LAB_144f2a0cf;
    }
    else if ((((*(int *)*param_2 == -0x3f212453) &&
              (pcVar5 = strchr("authority",0x3a), pcVar5 == (char *)0x0)) && (*param_2 != 0)) &&
            (((lVar1 = *(longlong *)(*param_2 + 0x1a8), lVar1 != 0 &&
              (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 != 0)) &&
             (uVar6 = uVar8, *(longlong *)(lVar1 + 0x130) != 0)))) {
      do {
        iVar3 = strncmp(":authority",*(char **)(*(longlong *)(lVar1 + 0x128) + uVar6 * 8),10);
        if ((iVar3 == 0) &&
           (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x128) + uVar6 * 8),
           *(char *)(lVar2 + 10) == ':')) {
          lVar2 = lVar2 + 0xb;
          if ((lVar2 != 0) && (iVar3 = FUN_1452cca90(lVar4,lVar2,0x20), iVar3 != 0)) {
            FUN_1452cb920(lVar4);
            return 2;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulonglong *)(lVar1 + 0x130));
    }
    if (((((int *)*param_2 != (int *)0x0) && (*(int *)*param_2 == -0x3f212453)) &&
        (pcVar5 = strchr("path",0x3a), pcVar5 == (char *)0x0)) &&
       (((*param_2 != 0 && (lVar1 = *(longlong *)(*param_2 + 0x1a8), lVar1 != 0)) &&
        ((lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 != 0 && (*(longlong *)(lVar1 + 0x130) != 0)))))
       ) {
      do {
        iVar3 = strncmp(":path",*(char **)(*(longlong *)(lVar1 + 0x128) + uVar8 * 8),5);
        if ((iVar3 == 0) &&
           (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x128) + uVar8 * 8),
           *(char *)(lVar2 + 5) == ':')) {
          if ((lVar2 != -6) && (iVar3 = FUN_1452cc2c0(lVar4,7), iVar3 != 0)) {
            FUN_1452cb920(lVar4);
            return 3;
          }
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ulonglong *)(lVar1 + 0x130));
    }
  }
LAB_144f2a0cf:
  iVar3 = FUN_1452cbab0(lVar4,0,&local_res18,0);
  if (iVar3 == 0) {
    FUN_1452cb920(lVar4);
    if (*(char *)(param_1 + 0x13d4) != '\0') {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1270));
    }
    *(undefined8 *)(param_1 + 0x1270) = local_res18;
    uVar7 = 0;
    *(undefined1 *)(param_1 + 0x13d4) = 1;
  }
  else {
    uVar7 = 4;
LAB_144f2a0ea:
    FUN_1452cb920(lVar4);
  }
  return uVar7;
}



// FUNCTION 144f2a180 FUN_144f2a180 body=1101 status=ok
// SIG undefined FUN_144f2a180(void)

int FUN_144f2a180(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong local_res8;
  undefined8 *local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong local_58;
  longlong local_50;
  
  local_res10 = *(undefined8 **)(param_1 + 0x10);
  local_res18 = param_3;
  FUN_144f14c60(param_2,param_1,"[%d] PUSH_PROMISE received",*(undefined4 *)(param_3 + 0x28));
  if (*(longlong *)(*(longlong *)(param_2 + 0xd8) + 0x90) == 0) {
    FUN_144f14c60(param_2,param_1,"Got PUSH_PROMISE, ignore it");
    return 1;
  }
  local_res8 = FUN_144bb6ad0();
  if (local_res8 != 0) {
    lVar4 = (*(code *)PTR_calloc_14c6d9f40)(1);
    if (lVar4 == 0) {
      FUN_144f0e6d0(&local_res8);
    }
    else {
      *(longlong *)(local_res8 + 0x1a8) = lVar4;
      FUN_144f28a30(param_1,local_res8,local_res20);
      *(undefined4 *)(local_res8 + 0x1210) = *(undefined4 *)(param_2 + 0x1210);
    }
  }
  lVar4 = local_res8;
  if (local_res8 == 0) {
    FUN_144f14ad0(param_2,"failed to duplicate handle");
    return 1;
  }
  local_58 = param_2;
  local_50 = param_3;
  FUN_144f14c60(param_2,param_1,"Got PUSH_PROMISE, ask application");
  if ((*(longlong *)(param_2 + 0x1a8) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x40), lVar1 == 0)) {
    FUN_144f14b70(param_2,"Internal NULL stream");
    if (*(longlong *)(lVar4 + 0x1a8) == 0) {
      local_res18 = lVar4;
      FUN_144f28b80(param_1,lVar4,1);
      *(undefined8 *)(local_res18 + 0x1a8) = 0;
      FUN_144f0e6d0(&local_res18);
      return 1;
    }
    goto LAB_144f2a2ce;
  }
  iVar3 = FUN_144f29e40(lVar4,&local_58);
  if (iVar3 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(lVar4 + 0x1a8) == 0) {
      FUN_144f14b70(lVar4,"initialization failure, transfer not http initialized");
      FUN_144f14b70(param_2,"error setting up stream: %d",2);
      goto LAB_144f2a2b3;
    }
    puVar5 = *(undefined4 **)(*(longlong *)(lVar4 + 0x1a8) + 0x40);
    uVar6 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(1,0x158);
      if (puVar5 == (undefined4 *)0x0) {
        FUN_144f14b70(param_2,"error setting up stream: %d",0x1b);
        goto LAB_144f2a2b3;
      }
      *puVar5 = 0xffffffff;
      FUN_1452e7260(puVar5 + 0x12,lVar2 + 0x98,4);
      FUN_1452e7260(puVar5 + 2,lVar2 + 0x98,0x280,1);
      FUN_1452e7ce0(puVar5 + 0x22,0x100000);
      FUN_1452db160(puVar5 + 0x36,0,0x100000);
      *(undefined8 *)(puVar5 + 0x44) = 0;
      *(undefined2 *)((longlong)puVar5 + 0x14f) = 0;
      puVar5[0x50] = 0xffffffff;
      *(undefined1 *)((longlong)puVar5 + 0x14d) = 0;
      puVar5[0x51] = 0;
      puVar5[0x52] = 0xa00000;
      *(undefined8 *)(puVar5 + 0x48) = 0;
      *(undefined4 **)(*(longlong *)(lVar4 + 0x1a8) + 0x40) = puVar5;
    }
    FUN_144bbace0(param_2,1);
    iVar3 = (**(code **)(*(longlong *)(param_2 + 0xd8) + 0x90))
                      (param_2,lVar4,*(undefined8 *)(lVar1 + 0x130),&local_58,
                       *(undefined8 *)(*(longlong *)(param_2 + 0xd8) + 0x98));
    FUN_144bbace0(param_2,0);
    if (*(longlong *)(lVar1 + 0x130) != 0) {
      do {
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(*(longlong *)(lVar1 + 0x128) + uVar6 * 8));
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulonglong *)(lVar1 + 0x130));
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(lVar1 + 0x128));
    *(undefined8 *)(lVar1 + 0x128) = 0;
    *(undefined8 *)(lVar1 + 0x130) = 0;
    if (iVar3 != 0) {
      if (*(longlong *)(lVar4 + 0x1a8) == 0) {
        *(undefined8 *)(lVar4 + 0x1a8) = 0;
      }
      local_res18 = lVar4;
      FUN_144f0e6d0(&local_res18);
      return iVar3;
    }
    *puVar5 = *(undefined4 *)(local_res18 + 0x28);
    *(undefined8 *)(lVar4 + 0xf8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xf0) = 0xffffffffffffffff;
    iVar3 = FUN_144bbaef0(*(undefined8 *)(param_2 + 0xd8),lVar4,*(undefined8 *)(param_1 + 0x18));
    if (iVar3 == 0) {
      iVar3 = FUN_1452e0200(*local_res10,*puVar5,lVar4);
      if (iVar3 != 0) {
        FUN_144f14ad0(param_2,"failed to set user_data for stream %u",*puVar5);
        return 1;
      }
      return 0;
    }
    FUN_144f14ad0(param_2,"failed to add handle to multi");
    lVar1 = *(longlong *)(lVar4 + 0x1a8);
  }
  else {
LAB_144f2a2b3:
    lVar1 = *(longlong *)(lVar4 + 0x1a8);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(lVar4 + 0x1a8) = 0;
  }
LAB_144f2a2ce:
  local_res18 = lVar4;
  FUN_144f0e6d0(&local_res18);
  return 1;
}



// FUNCTION 144f2a5d0 FUN_144f2a5d0 body=939 status=ok
// SIG undefined FUN_144f2a5d0(void)

int FUN_144f2a5d0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  char cVar11;
  longlong lVar12;
  bool bVar13;
  int local_res8 [2];
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x1a8) == 0)) {
    uVar8 = *(undefined4 *)(param_3 + 8);
LAB_144f2a95c:
    FUN_144f14c60(param_2,param_1,"[%d] No stream_ctx set",uVar8);
    return 2;
  }
  puVar3 = *(undefined4 **)(*(longlong *)(param_2 + 0x1a8) + 0x40);
  uVar8 = *(undefined4 *)(param_3 + 8);
  if (puVar3 == (undefined4 *)0x0) goto LAB_144f2a95c;
  cVar11 = *(char *)(param_3 + 0xc);
  if (cVar11 == '\0') {
    uVar10 = FUN_1452e7330(puVar3 + 2);
    uVar6 = FUN_1452e0330(*puVar2,*puVar3);
    uVar7 = FUN_1452e02f0(*puVar2,*puVar3);
    FUN_144f14c60(param_2,param_1,"[%d] DATA, buffered=%zu, window=%d/%d",uVar8,uVar10,uVar7,uVar6);
    if (*(char *)(puVar3 + 0x54) == '\0') {
      uVar8 = FUN_1452e6740(*puVar2,0,uVar8,1);
      iVar4 = FUN_1452e0660(uVar8);
      if (iVar4 != 0) {
        return 0x38;
      }
    }
    if ((*(byte *)(param_3 + 0xd) & 1) == 0) {
      if (uVar10 <= (uint)puVar3[0x52]) {
        return 0;
      }
      iVar4 = FUN_1452e0370(*puVar2,*puVar3);
      if (iVar4 < 1) {
        return 0;
      }
      if (iVar4 == puVar3[0x52]) {
        return 0;
      }
      FUN_1452e6780(*puVar2,0,*puVar3);
      return 0;
    }
  }
  else {
    if (cVar11 != '\x01') {
      if (cVar11 != '\x03') {
        if (cVar11 == '\x05') {
          iVar4 = FUN_144f2a180(param_1);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_1452e6740(*puVar2,0,*(undefined4 *)(param_3 + 0x28),8);
          iVar5 = FUN_1452e0660(iVar4);
          if (iVar5 == 0) {
            if (iVar4 != 2) {
              return 0;
            }
            FUN_144f14c60(param_2,param_1,"[%d] fail in PUSH_PROMISE received",uVar8);
            return 0x38;
          }
          return 0x37;
        }
        if (cVar11 != '\b') {
          return 0;
        }
        uVar1 = *(uint *)(param_2 + 0x154);
        if ((uVar1 & 8) == 0) {
          return 0;
        }
        if ((uVar1 & 2) == 0) {
          return 0;
        }
        cVar11 = '\x01';
        *(uint *)(param_2 + 0x154) = uVar1 & 0xfffffff7;
        if ((*(char *)((longlong)puVar3 + 0x151) == '\0') &&
           ((*(longlong *)(puVar3 + 0x48) != 0 || (*(longlong *)(puVar3 + 0x46) != 0)))) {
          cVar11 = '\x03';
        }
        if (*(char *)(param_2 + 0x13c3) != cVar11) {
          FUN_144f14c60(param_2,param_1,"[%d] DRAIN dselect_bits=%x",*puVar3,cVar11);
          *(char *)(param_2 + 0x13c3) = cVar11;
          FUN_144bba820(param_2,0,8);
        }
        FUN_144f14c60(param_2,param_1,"[%d] un-holding after win update",uVar8);
        return 0;
      }
      *(undefined1 *)((longlong)puVar3 + 0x14d) = 1;
      if (*(int *)(param_3 + 0x10) != 0) {
        *(undefined1 *)((longlong)puVar3 + 0x14e) = 1;
      }
      *(undefined1 *)((longlong)puVar3 + 0x151) = 1;
      cVar11 = '\x01';
      *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) & 0xfffffff7;
      if ((*(char *)((longlong)puVar3 + 0x151) == '\0') &&
         ((*(longlong *)(puVar3 + 0x48) != 0 || (*(longlong *)(puVar3 + 0x46) != 0)))) {
        cVar11 = '\x03';
      }
      bVar13 = *(char *)(param_2 + 0x13c3) == cVar11;
      goto LAB_144f2a8e4;
    }
    if (*(char *)(puVar3 + 0x54) != '\0') {
      return 0;
    }
    if (puVar3[0x50] == -1) {
      return 0x38;
    }
    if (99 < puVar3[0x50] - 100) {
      *(undefined1 *)(puVar3 + 0x54) = 1;
      puVar3[0x50] = 0xffffffff;
    }
    lVar12 = 0;
    if (*(longlong *)(param_2 + 0x1a8) != 0) {
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x40);
    }
    lVar9 = FUN_1452e73b0(lVar12 + 8,&DAT_149c058e8,2,local_res8);
    if (lVar9 < 0) {
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
    }
    else {
      *(longlong *)(lVar12 + 0x110) = *(longlong *)(lVar12 + 0x110) + lVar9;
    }
    if (99 < puVar3[0x50] - 100) {
      *(undefined1 *)(puVar3 + 0x53) = 1;
    }
  }
  cVar11 = '\x01';
  if ((*(char *)((longlong)puVar3 + 0x151) == '\0') &&
     ((*(longlong *)(puVar3 + 0x48) != 0 || (*(longlong *)(puVar3 + 0x46) != 0)))) {
    cVar11 = '\x03';
  }
  bVar13 = *(char *)(param_2 + 0x13c3) == cVar11;
LAB_144f2a8e4:
  if (bVar13) {
    return 0;
  }
  FUN_144f14c60(param_2,param_1,"[%d] DRAIN dselect_bits=%x",*puVar3,cVar11);
  *(char *)(param_2 + 0x13c3) = cVar11;
  FUN_144bba820(param_2,0,8);
  return 0;
}



// FUNCTION 144f2a980 FUN_144f2a980 body=514 status=ok
// SIG undefined FUN_144f2a980(void)

void FUN_144f2a980(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong _Size;
  char *pcVar1;
  uint uVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = (uint)(byte)param_1[3];
  switch(uVar2) {
  case 0:
    local_b0 = param_1[4];
    uVar2 = *param_1;
    local_b8 = (undefined1 *)
               (CONCAT44(local_b8._4_4_,(uint)*(byte *)((longlong)param_1 + 0xd)) &
               0xffffffff00000001);
    pcVar1 = "FRAME[DATA, len=%d, eos=%d, padlen=%d]";
    goto LAB_144f2ab67;
  case 1:
    pcVar1 = "FRAME[HEADERS, len=%d, hend=%d, eos=%d]";
    uVar2 = *param_1;
    local_b0 = *(byte *)((longlong)param_1 + 0xd) & 1;
    local_b8 = (undefined1 *)
               (CONCAT44(local_b8._4_4_,(uint)(*(byte *)((longlong)param_1 + 0xd) >> 2)) &
               0xffffffff00000001);
    goto LAB_144f2ab67;
  case 2:
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,(uint)*(byte *)((longlong)param_1 + 0xd));
    FUN_144f2b7e0(param_2,param_3,"FRAME[PRIORITY, len=%d, flags=%d]",*param_1);
    break;
  case 3:
    pcVar1 = "FRAME[RST_STREAM, len=%d, flags=%d, error=%u]";
    local_b0 = param_1[4];
    uVar2 = *param_1;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,(uint)*(byte *)((longlong)param_1 + 0xd));
    goto LAB_144f2ab67;
  case 4:
    if ((*(byte *)((longlong)param_1 + 0xd) & 1) == 0) {
      FUN_144f2b7e0(param_2,param_3,"FRAME[SETTINGS, len=%d]",*param_1);
    }
    else {
      FUN_144f2b7e0(param_2,param_3,"FRAME[SETTINGS, ack=1]");
    }
    break;
  case 5:
    local_b8 = (undefined1 *)
               (CONCAT44(local_b8._4_4_,(uint)(*(byte *)((longlong)param_1 + 0xd) >> 2)) &
               0xffffffff00000001);
    FUN_144f2b7e0(param_2,param_3,"FRAME[PUSH_PROMISE, len=%d, hend=%d]",*param_1);
    break;
  case 6:
    local_b8 = (undefined1 *)
               (CONCAT44(local_b8._4_4_,(uint)*(byte *)((longlong)param_1 + 0xd)) &
               0xffffffff00000001);
    FUN_144f2b7e0(param_2,param_3,"FRAME[PING, len=%d, ack=%d]",*param_1);
    break;
  case 7:
    _Size = *(ulonglong *)(param_1 + 8);
    if (_Size < 0x80) {
      if (_Size != 0) goto LAB_144f2aaf3;
    }
    else {
      _Size = 0x7f;
LAB_144f2aaf3:
      memcpy(local_a8,*(void **)(param_1 + 6),_Size);
    }
    local_b0 = param_1[4];
    uVar2 = param_1[5];
    local_b8 = local_a8;
    local_a8[_Size] = 0;
    FUN_144f2b7e0(param_2,param_3,"FRAME[GOAWAY, error=%d, reason=\'%s\', last_stream=%d]",uVar2);
    break;
  case 8:
    FUN_144f2b7e0(param_2,param_3,"FRAME[WINDOW_UPDATE, incr=%d]",param_1[4]);
    break;
  default:
    pcVar1 = "FRAME[%d, len=%d, flags=%d]";
    local_b0 = (uint)*(byte *)((longlong)param_1 + 0xd);
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,*param_1);
LAB_144f2ab67:
    FUN_144f2b7e0(param_2,param_3,pcVar1,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
}



// FUNCTION 144f2abc0 FUN_144f2abc0 body=295 status=ok
// SIG undefined FUN_144f2abc0(void)

longlong FUN_144f2abc0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res10 [2];
  
  if (param_2 == 0) {
    return -0x1f5;
  }
  lVar2 = FUN_1452e01c0();
  if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x1a8) == 0)) ||
     (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x1a8) + 0x40), lVar1 == 0)) {
LAB_144f2acce:
    lVar3 = -0x386;
  }
  else {
    lVar3 = FUN_1452e74a0(lVar1 + 0x48,param_3,param_4,local_res10);
    if (lVar3 < 0) {
      if (local_res10[0] != 0x51) goto LAB_144f2acce;
      lVar3 = 0;
    }
    else if ((0 < lVar3) && (*(longlong *)(lVar1 + 0x120) != -1)) {
      *(longlong *)(lVar1 + 0x120) = *(longlong *)(lVar1 + 0x120) - lVar3;
    }
    FUN_144f14c60(lVar2,param_7,"[%d] req_body_read(len=%zu) left=%I64d -> %zd, %d",param_2,param_4,
                  *(undefined8 *)(lVar1 + 0x120),lVar3,local_res10[0]);
    if (*(longlong *)(lVar1 + 0x120) == 0) {
      *param_5 = 1;
    }
    else if (lVar3 == 0) {
      lVar3 = -0x1fc;
    }
  }
  return lVar3;
}



// FUNCTION 144f2acf0 FUN_144f2acf0 body=641 status=ok
// SIG undefined FUN_144f2acf0(void)

undefined8 FUN_144f2acf0(longlong param_1,longlong param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_38 [32];
  
  iVar1 = param_3[0x51];
  if (iVar1 == 7) {
    FUN_144f14c60(param_2,param_1,"[%d] REFUSED_STREAM, try again on a new connection",*param_3);
    FUN_144f16220(*(undefined8 *)(param_1 + 0x18),1);
    *(undefined1 *)(param_2 + 0x13c6) = 1;
    *param_4 = 0x38;
    return 0xffffffffffffffff;
  }
  if (iVar1 != 0) {
    uVar2 = FUN_1452e6cd0(iVar1);
    FUN_144f14b70(param_2,"HTTP/2 stream %u was not closed cleanly: %s (err %u)",*param_3,uVar2,
                  iVar1);
    *param_4 = 0x5c;
    return 0xffffffffffffffff;
  }
  if (*(char *)((longlong)param_3 + 0x14e) != '\0') {
    FUN_144f14b70(param_2,"HTTP/2 stream %u was reset",*param_3);
    iVar1 = 0x38;
    if (*(char *)(param_3 + 0x54) != '\0') {
      iVar1 = 0x12;
    }
    *param_4 = iVar1;
    return 0xffffffffffffffff;
  }
  if (*(char *)(param_3 + 0x54) == '\0') {
    FUN_144f14b70(param_2,
                  "HTTP/2 stream %u was closed cleanly, but before getting  all response header fields, treated as error"
                  ,*param_3);
    *param_4 = 0x5c;
    return 0xffffffffffffffff;
  }
  lVar3 = FUN_1452db260(param_3 + 0x36);
  if (lVar3 != 0) {
    *param_4 = 0;
    FUN_144f07cf0(local_38,0x10000);
    uVar7 = 0;
    lVar3 = FUN_1452db260(param_3 + 0x36);
    if (lVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_1452db280(param_3 + 0x36,uVar7);
        if (puVar4 == (undefined8 *)0x0) break;
        FUN_144f07dc0(local_38);
        iVar1 = FUN_144f07d70(local_38,"%.*s: %.*s\r\n",*(undefined4 *)(puVar4 + 2),*puVar4,
                              *(undefined4 *)(puVar4 + 3),puVar4[1]);
        *param_4 = iVar1;
        if (iVar1 != 0) break;
        uVar2 = FUN_144f07ea0(local_38);
        uVar5 = FUN_144f07e80(local_38);
        FUN_144f149e0(param_2,1,uVar5,uVar2);
        uVar2 = FUN_144f07ea0(local_38);
        uVar5 = FUN_144f07e80(local_38);
        iVar1 = FUN_144f14dc0(param_2,0x44,uVar5,uVar2);
        *param_4 = iVar1;
        if (iVar1 != 0) break;
        uVar7 = uVar7 + 1;
        uVar6 = FUN_1452db260(param_3 + 0x36);
      } while (uVar7 < uVar6);
    }
    FUN_144f07d10(local_38);
    iVar1 = *param_4;
    if (iVar1 != 0) goto LAB_144f2af3a;
  }
  *(undefined1 *)((longlong)param_3 + 0x14f) = 1;
  iVar1 = 0;
  *param_4 = 0;
LAB_144f2af3a:
  FUN_144f14c60(param_2,param_1,"handle_stream_close -> %zd, %d",0,iVar1);
  return 0;
}



// FUNCTION 144f2af80 FUN_144f2af80 body=382 status=ok
// SIG undefined FUN_144f2af80(void)

longlong FUN_144f2af80(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                      undefined8 param_5,int *param_6)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar4 = -1;
  *param_6 = 0x51;
  cVar2 = FUN_1452e7360(param_3 + 2);
  if (cVar2 == '\0') {
    lVar4 = FUN_1452e74a0(param_3 + 2,param_4,param_5,param_6);
    if (-1 < lVar4) {
      if (lVar4 != 0) {
        return lVar4;
      }
      *param_6 = 0x51;
      lVar4 = -1;
    }
  }
  else if (*(char *)((longlong)param_3 + 0x14d) == '\0') {
    if (((*(char *)((longlong)param_3 + 0x14e) != '\0') ||
        ((*(char *)(lVar1 + 200) != '\0' && (cVar2 = FUN_1452e7360(lVar1 + 0x18), cVar2 != '\0'))))
       || ((*(char *)(lVar1 + 0xc9) != '\0' && (*(int *)(lVar1 + 0xc4) < *param_3)))) {
      FUN_144f14c60(param_2,param_1,"[%d] returning ERR",*param_3);
      iVar3 = 0x38;
      if ((char)param_3[0x54] != '\0') {
        iVar3 = 0x12;
      }
      *param_6 = iVar3;
    }
  }
  else {
    FUN_144f14c60(param_2,param_1,"[%d] returning CLOSE",*param_3);
    lVar4 = FUN_144f2acf0(param_1,param_2,param_3,param_6);
    if (-1 < lVar4) {
      return lVar4;
    }
  }
  if (*param_6 != 0x51) {
    FUN_144f14c60(param_2,param_1,"[%d] stream_recv(len=%zu) -> %zd, %d",*param_3,param_5,lVar4,
                  *param_6);
  }
  return lVar4;
}



// FUNCTION 144f2b100 FUN_144f2b100 body=420 status=ok
// SIG undefined FUN_144f2b100(void)

int FUN_144f2b100(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_res8[0] = 0;
  cVar3 = FUN_1452e7360(lVar1 + 0x18);
  if (cVar3 == '\0') {
    uVar5 = FUN_1452e7330(lVar1 + 0x18);
    FUN_144f14c60(param_2,param_1,"Process %zu bytes in connection buffer",uVar5);
    iVar4 = FUN_144f29d30(param_1,param_2,local_res8);
    if (iVar4 < 0) {
      return local_res8[0];
    }
  }
  if (*(char *)(lVar1 + 200) == '\0') {
    do {
      cVar3 = FUN_1452e7360(lVar1 + 0x18);
      if ((cVar3 == '\0') ||
         ((((param_2 != 0 && (*(longlong *)(param_2 + 0x1a8) != 0)) &&
           (lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x40), lVar6 != 0)) &&
          (((*(char *)(lVar6 + 0x14d) != '\0' || (cVar3 = FUN_1452e7380(lVar6 + 8), cVar3 != '\0'))
           && ((plVar2 = *(longlong **)(param_1 + 8), plVar2 == (longlong *)0x0 ||
               (cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2), cVar3 == '\0')))))))) break;
      lVar6 = FUN_1452e77d0(lVar1 + 0x18,FUN_144f28d30,param_1,local_res8);
      if (lVar6 < 0) {
        if (local_res8[0] != 0x51) {
          uVar5 = FUN_144bbdb50();
          FUN_144f14b70(param_2,"Failed receiving HTTP2 data: %d(%s)",local_res8[0],uVar5);
          return local_res8[0];
        }
        break;
      }
      if (lVar6 == 0) {
        FUN_144f14c60(param_2,param_1,"[0] ingress: connection closed");
        *(undefined1 *)(lVar1 + 200) = 1;
        break;
      }
      FUN_144f14c60(param_2,param_1,"[0] ingress: read %zd bytes",lVar6);
      iVar4 = FUN_144f29d30(param_1,param_2,local_res8);
      if (iVar4 != 0) {
        return local_res8[0];
      }
    } while (*(char *)(lVar1 + 200) == '\0');
    if (*(char *)(lVar1 + 200) == '\0') {
      return 0;
    }
  }
  cVar3 = FUN_1452e7360(lVar1 + 0x18);
  if (cVar3 != '\0') {
    FUN_144f16220(*(undefined8 *)(param_1 + 0x18),1);
  }
  return 0;
}



// FUNCTION 144f2b2b0 FUN_144f2b2b0 body=1167 status=ok
// SIG undefined FUN_144f2b2b0(void)

void FUN_144f2b2b0(undefined8 *param_1,longlong param_2,int *param_3,longlong param_4,
                  longlong param_5,int *param_6)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  uint *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint *puVar16;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  int *local_f0;
  ulonglong local_e8;
  uint *local_d8;
  longlong local_d0;
  int *local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  uint local_a8 [2];
  code *local_a0;
  undefined1 local_98 [56];
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = *(undefined8 **)(param_2 + 0x10);
  puVar16 = (uint *)0x0;
  local_c8 = param_6;
  local_d8 = (uint *)0x0;
  puVar13 = (uint *)0x0;
  local_d0 = param_2;
  local_b8 = param_4;
  local_b0 = param_1;
  FUN_1452db160(local_98,0,0x100000);
  iVar3 = FUN_144f28a30(param_2,param_3,&local_d8);
  puVar2 = local_d8;
  uVar15 = 0xffffffffffffffff;
  *param_6 = iVar3;
  puVar6 = puVar16;
  uVar5 = uVar15;
  if (iVar3 == 0) {
    local_f0 = param_6;
    local_f8 = (uint *)((ulonglong)local_f8._4_4_ << 0x20);
    uVar5 = FUN_1452e7d50(local_d8 + 0x22,param_4,param_5,0);
    puVar6 = puVar13;
    if ((-1 < (longlong)uVar5) && ((char)puVar2[0x34] != '\0')) {
      iVar3 = FUN_144f21a80(local_98,*(undefined8 *)(puVar2 + 0x22),param_3);
      *param_6 = iVar3;
      if (iVar3 == 0) {
        FUN_1452e7d20(puVar2 + 0x22);
        puVar6 = (uint *)FUN_1452db260(local_98);
        local_d8 = (uint *)(*(code *)PTR_malloc_14c6d9f20)((longlong)puVar6 * 0x28);
        if (local_d8 == (uint *)0x0) {
          *param_6 = 0x1b;
          puVar6 = local_d8;
          uVar5 = uVar15;
          param_2 = local_d0;
        }
        else {
          if (puVar6 != (uint *)0x0) {
            puVar13 = local_d8 + 2;
            puVar14 = puVar16;
            do {
              puVar7 = (undefined8 *)FUN_1452db280(local_98,puVar14);
              puVar14 = (uint *)((longlong)puVar14 + 1);
              *(undefined8 *)(puVar13 + -2) = *puVar7;
              *(undefined8 *)(puVar13 + 2) = puVar7[2];
              *(undefined8 *)puVar13 = puVar7[1];
              *(undefined8 *)(puVar13 + 4) = puVar7[3];
              *(undefined1 *)(puVar13 + 6) = 0;
              param_6 = local_c8;
              puVar13 = puVar13 + 10;
            } while (puVar14 < puVar6);
          }
          puVar13 = puVar16;
          if (((*(longlong *)(param_3 + 0x292) != 0) &&
              (lVar10 = *(longlong *)(*(longlong *)(param_3 + 0x292) + 0x1a8), lVar10 != 0)) &&
             (puVar14 = *(uint **)(lVar10 + 0x40), puVar14 != (uint *)0x0)) {
            puVar13 = (uint *)(ulonglong)*puVar14;
          }
          iVar3 = 0x10;
          if (param_3[0x296] != 0) {
            iVar3 = param_3[0x296];
          }
          FUN_1452e7130(local_60,puVar13,iVar3,(char)param_3[0x297]);
          puVar7 = local_c0;
          param_3[0x480] = param_3[0x292];
          param_3[0x481] = param_3[0x293];
          param_3[0x482] = param_3[0x294];
          param_3[0x483] = param_3[0x295];
          *(undefined8 *)(param_3 + 0x484) = *(undefined8 *)(param_3 + 0x296);
          iVar3 = FUN_1452e0620(*local_c0);
          if (iVar3 == 0) {
            FUN_144f14c60(param_3,local_d0,"send request NOT allowed (via nghttp2)");
          }
          cVar1 = *(char *)((longlong)param_3 + 0x13c2);
          if (((cVar1 == '\x01') || (cVar1 == '\x02')) || ((cVar1 == '\x03' || (cVar1 == '\x04'))))
          {
            uVar8 = uVar15;
            if (*(ulonglong *)(param_3 + 0x47e) != 0xffffffffffffffff) {
              uVar8 = *(ulonglong *)(param_3 + 0x47e);
            }
            *(ulonglong *)(puVar2 + 0x48) = uVar8;
            local_a0 = FUN_144f2abc0;
            local_f8 = local_a8;
            local_a8[0] = 0;
            local_a8[1] = 0;
          }
          else {
            puVar2[0x48] = 0;
            puVar2[0x49] = 0;
            local_f8 = puVar16;
          }
          local_f0 = param_3;
          uVar4 = FUN_1452e64d0(*puVar7,local_60,local_d8,puVar6);
          if ((int)uVar4 < 0) {
            uVar9 = FUN_1452e6a80(uVar4);
            param_2 = local_d0;
            local_f8 = (uint *)CONCAT44(local_f8._4_4_,uVar4);
            FUN_144f14c60(param_3,local_d0,"send: nghttp2_submit_request error (%s)%u",uVar9);
            *param_6 = 0x37;
            puVar6 = local_d8;
            uVar5 = 0xffffffffffffffff;
          }
          else {
            if ((*(char *)((longlong)param_3 + 0xacf) != '\0') &&
               (FUN_144f14ad0(param_3,"[HTTP/2] [%d] OPENED stream for %s",uVar4,
                              *(undefined8 *)(param_3 + 0x49c)), puVar6 != (uint *)0x0)) {
              puVar12 = (ulonglong *)(local_d8 + 4);
              do {
                puVar16 = (uint *)((longlong)puVar16 + *puVar12 + puVar12[1]);
                local_e8 = puVar12[-1];
                local_f8 = (uint *)puVar12[-2];
                local_f0 = (int *)CONCAT44(local_f0._4_4_,(int)puVar12[1]);
                FUN_144f14ad0(param_3,"[HTTP/2] [%d] [%.*s: %.*s]",uVar4,*puVar12 & 0xffffffff);
                puVar12 = puVar12 + 5;
                puVar6 = (uint *)((longlong)puVar6 + -1);
              } while (puVar6 != (uint *)0x0);
              if ((uint *)0xea60 < puVar16) {
                FUN_144f14ad0(param_3,
                              "[HTTP/2] Warning: The cumulative length of all headers exceeds %d bytes and that could cause the stream to be rejected."
                              ,60000);
              }
            }
            param_6 = local_c8;
            *puVar2 = uVar4;
            puVar2[0x52] = 0xa00000;
            if (*(longlong *)(param_3 + 0xce) != 0) {
              lVar10 = *(longlong *)(param_3 + 0xce) + -1;
              lVar10 = ((longlong)((ulonglong)((uint)(lVar10 >> 0x3f) & 0x3fff) + lVar10) >> 0xe) +
                       1;
              if (lVar10 < 4) {
                lVar11 = 1;
              }
              else {
                lVar11 = lVar10 / 2;
              }
              if (lVar10 + lVar11 < 0x280) {
                puVar2[0x52] = (int)(lVar10 + lVar11) << 0xe;
              }
            }
            puVar6 = local_d8;
            param_2 = local_d0;
            if (param_5 - uVar5 != 0) {
              lVar10 = FUN_1452e73b0(puVar2 + 0x12,local_b8 + uVar5,param_5 - uVar5,local_c8);
              param_2 = local_d0;
              puVar6 = local_d8;
              if (lVar10 < 0) {
                *param_6 = 0x37;
                uVar5 = 0xffffffffffffffff;
              }
              else {
                uVar5 = uVar5 + lVar10;
              }
            }
          }
        }
      }
      else {
        uVar5 = 0xffffffffffffffff;
      }
    }
  }
  if (puVar2 != (uint *)0x0) {
    uVar15 = (ulonglong)*puVar2;
  }
  local_f0 = (int *)CONCAT44(local_f0._4_4_,*param_6);
  local_f8 = (uint *)uVar5;
  FUN_144f14c60(param_3,param_2,"[%d] submit -> %zd, %d",uVar15 & 0xffffffff);
  (*(code *)PTR_free_14c6d9f28)(puVar6);
  *local_b0 = puVar2;
  FUN_1452db180(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_118);
}



// FUNCTION 144f2b760 FUN_144f2b760 body=71 status=ok
// SIG undefined FUN_144f2b760(void)

undefined8 FUN_144f2b760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  char local_10;
  
  local_10 = '\0';
  local_18 = param_1;
  FUN_144f2c310(&local_18,FUN_144f2cd50,param_2,param_3);
  if (local_10 != '\0') {
    FUN_144f07d10(local_18);
    return 1;
  }
  return 0;
}



// FUNCTION 144f2b7b0 FUN_144f2b7b0 body=44 status=ok
// SIG undefined FUN_144f2b7b0(void)

void FUN_144f2b7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144f2c310(param_1,fputc_exref,param_2,&local_res18);
  return;
}



// FUNCTION 144f2b7e0 FUN_144f2b7e0 body=102 status=ok
// SIG undefined FUN_144f2b7e0(void)

int FUN_144f2b7e0(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  undefined1 *local_28;
  longlong local_20;
  longlong local_18;
  
  local_20 = 0;
  local_res20 = param_4;
  local_28 = param_1;
  local_18 = param_2;
  iVar1 = FUN_144f2c310(&local_28,&LAB_144f2cd30,param_3,&local_res20);
  if (local_18 != 0) {
    if (local_18 == local_20) {
      local_28[-1] = 0;
      return iVar1 + -1;
    }
    *local_28 = 0;
  }
  return iVar1;
}



// FUNCTION 144f2b850 FUN_144f2b850 body=91 status=ok
// SIG undefined FUN_144f2b850(void)

int FUN_144f2b850(undefined1 *param_1,longlong param_2)

{
  int iVar1;
  undefined1 *local_28;
  longlong local_20;
  longlong local_18;
  
  local_20 = 0;
  local_28 = param_1;
  local_18 = param_2;
  iVar1 = FUN_144f2c310(&local_28,&LAB_144f2cd30);
  if (local_18 != 0) {
    if (local_18 == local_20) {
      local_28[-1] = 0;
      return iVar1 + -1;
    }
    *local_28 = 0;
  }
  return iVar1;
}



// FUNCTION 144f2b8b0 FUN_144f2b8b0 body=155 status=ok
// SIG undefined FUN_144f2b8b0(void)

undefined8
FUN_144f2b8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 *local_48;
  char local_40;
  undefined1 local_38 [40];
  
  local_48 = local_38;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144f07cf0(local_38,8000000);
  local_40 = '\0';
  FUN_144f2c310(&local_48,FUN_144f2cd50,param_1,&local_res10);
  if (local_40 != '\0') {
    FUN_144f07d10();
    return 0;
  }
  lVar1 = FUN_144f07ea0(local_48);
  if (lVar1 != 0) {
    uVar2 = FUN_144f07e80(local_48);
    return uVar2;
  }
  uVar2 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_14996de1b);
  return uVar2;
}



// FUNCTION 144f2b950 FUN_144f2b950 body=154 status=ok
// SIG undefined FUN_144f2b950(void)

undefined8 FUN_144f2b950(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *local_38;
  char local_30;
  undefined1 local_28 [32];
  
  local_38 = local_28;
  FUN_144f07cf0(local_28,8000000);
  local_30 = '\0';
  FUN_144f2c310(&local_38,FUN_144f2cd50,param_1,param_2);
  if (local_30 != '\0') {
    FUN_144f07d10();
    return 0;
  }
  lVar1 = FUN_144f07ea0(local_38);
  if (lVar1 != 0) {
    uVar2 = FUN_144f07e80(local_38);
    return uVar2;
  }
  uVar2 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_14996de1b);
  return uVar2;
}



// FUNCTION 144f2b9f0 FUN_144f2b9f0 body=1893 status=ok
// SIG undefined FUN_144f2b9f0(void)

undefined8 FUN_144f2b9f0(byte *param_1,longlong param_2,undefined8 *param_3,ulonglong *param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  uint uVar16;
  uint local_res8;
  undefined8 *local_res18;
  byte *local_48 [2];
  
  local_res8 = 0;
  bVar2 = *param_1;
  uVar5 = 0;
  local_res18 = param_3;
joined_r0x000144f2ba31:
  if (bVar2 == 0) {
    lVar15 = (longlong)(int)uVar5;
    if (0 < (int)uVar5) {
      puVar14 = (ulonglong *)(param_2 + 0x10);
      do {
        if ((*(uint *)((longlong)puVar14 + -0xc) & 0x4000) != 0) {
          uVar7 = *param_4;
          param_4 = param_4 + 1;
          *(longlong *)(param_2 + 0x10 + (longlong)(int)puVar14[-1] * 0x18) =
               (longlong)(int)(uint)uVar7;
        }
        uVar5 = *(uint *)((longlong)puVar14 + -0xc);
        if ((uVar5 >> 0x10 & 1) != 0) {
          uVar7 = *param_4;
          param_4 = param_4 + 1;
          *(longlong *)(param_2 + 0x10 + (longlong)*(int *)((longlong)puVar14 + -4) * 0x18) =
               (longlong)(int)(uint)uVar7;
          uVar5 = *(uint *)((longlong)puVar14 + -0xc);
        }
        switch((int)puVar14[-2]) {
        case 0:
        case 1:
        case 2:
        case 4:
        case 7:
          uVar7 = *param_4;
          param_4 = param_4 + 1;
          *puVar14 = uVar7;
          break;
        case 3:
          if ((uVar5 & 0x240) == 0x240) {
            uVar7 = *param_4;
          }
          else if ((uVar5 & 0x40) == 0) {
            if ((uVar5 & 0x220) == 0x220) {
              uVar7 = (ulonglong)(uint)*param_4;
            }
            else if (((uVar5 & 0x20) == 0) && ((uVar5 >> 9 & 1) != 0)) {
              uVar7 = (ulonglong)(uint)*param_4;
            }
            else {
              uVar7 = (ulonglong)(int)(uint)*param_4;
            }
          }
          else {
            uVar7 = *param_4;
          }
          *puVar14 = uVar7;
          param_4 = param_4 + 1;
          break;
        case 9:
          *(undefined4 *)(puVar14 + -2) = 3;
        }
        puVar14 = puVar14 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    return 0;
  }
  uVar16 = 0;
  uVar9 = 0;
  local_48[0] = param_1 + 1;
  if (bVar2 == 0x25) {
    if (*local_48[0] != 0x25) {
      bVar2 = *local_48[0];
      local_res8 = local_res8 + 1;
      pbVar10 = local_48[0];
      uVar8 = uVar9;
      uVar13 = uVar16;
      if ('/' < (char)bVar2) {
        do {
          uVar8 = uVar13;
          if (0x39 < bVar2) break;
          if ((int)uVar8 < 0x80) {
            uVar8 = (uint)bVar2 + (uVar8 * 5 + -0x18) * 2;
          }
          bVar2 = pbVar10[1];
          pbVar10 = pbVar10 + 1;
          uVar13 = uVar8;
        } while ('/' < (char)bVar2);
        if (0x80 < (int)uVar8) goto LAB_144f2babe;
      }
      if (*pbVar10 == 0x24) {
        local_48[0] = pbVar10 + 1;
        uVar9 = uVar8;
      }
LAB_144f2babe:
      uVar8 = local_res8;
      if (uVar9 != 0) {
        uVar8 = uVar9;
      }
      pbVar10 = local_48[0];
      uVar9 = uVar5;
      uVar13 = uVar16;
      uVar6 = uVar16;
      if ((int)uVar5 < (int)uVar8) {
        uVar9 = uVar8;
      }
switchD_144f2bbdd_caseD_1:
      uVar5 = uVar9;
      local_48[0] = pbVar10;
      pbVar10 = local_48[0];
      iVar3 = strncmp((char *)local_48[0],"I32",3);
      if ((iVar3 != 0) && (iVar3 = strncmp((char *)pbVar10,"I64",3), iVar3 != 0)) {
        switch(*pbVar10) {
        case 0x20:
        case 0x23:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2e:
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
        case 0x49:
        case 0x4c:
        case 0x4f:
        case 0x68:
        case 0x6c:
        case 0x71:
        case 0x7a:
          break;
        default:
          goto switchD_144f2bb43_caseD_21;
        }
      }
      iVar3 = strncmp((char *)local_48[0],"I32",3);
      uVar9 = uVar5;
      if (iVar3 == 0) {
        pbVar10 = local_48[0] + 3;
        uVar13 = uVar13 | 0x20;
      }
      else {
        iVar3 = strncmp((char *)local_48[0],"I64",3);
        pbVar11 = local_48[0];
        if (iVar3 == 0) {
          pbVar10 = local_48[0] + 3;
          uVar13 = uVar13 | 0x40;
        }
        else {
          pbVar10 = local_48[0] + 1;
          switch(*local_48[0]) {
          case 0:
            pbVar10 = local_48[0];
            break;
          case 0x20:
            uVar13 = uVar13 | 1;
            break;
          case 0x23:
            uVar13 = uVar13 | 8;
            break;
          case 0x2a:
            uVar13 = uVar13 | 0x4000;
            bVar2 = *pbVar10;
            local_res8 = local_res8 + 1;
            uVar6 = 0;
            pbVar11 = pbVar10;
            if ((char)bVar2 < '0') {
LAB_144f2bd63:
              local_48[0] = pbVar10;
              if ((*pbVar11 != 0x24) || (local_48[0] = pbVar11 + 1, uVar6 == 0)) goto LAB_144f2bd75;
            }
            else {
              do {
                if (0x39 < bVar2) break;
                if ((int)uVar6 < 0x80) {
                  uVar6 = (uint)bVar2 + (uVar6 * 5 + -0x18) * 2;
                }
                bVar2 = pbVar11[1];
                pbVar11 = pbVar11 + 1;
              } while ('/' < (char)bVar2);
              local_48[0] = pbVar10;
              if ((int)uVar6 < 0x81) goto LAB_144f2bd63;
LAB_144f2bd75:
              uVar6 = local_res8;
            }
            pbVar10 = local_48[0];
            uVar9 = uVar6;
            if ((int)uVar6 <= (int)uVar5) {
              uVar9 = uVar5;
            }
            break;
          case 0x2b:
            uVar13 = uVar13 | 2;
            break;
          case 0x2d:
            uVar13 = uVar13 & 0xfffffeff | 4;
            break;
          case 0x2e:
            if (*pbVar10 == 0x2a) {
              local_48[0] = local_48[0] + 2;
              local_res8 = local_res8 + 1;
              uVar16 = 0;
              bVar2 = *local_48[0];
              pbVar10 = local_48[0];
              if ((char)bVar2 < '0') {
LAB_144f2bc57:
                if (*pbVar10 != 0x24) goto LAB_144f2bc67;
                local_48[0] = pbVar10 + 1;
              }
              else {
                do {
                  if (0x39 < bVar2) break;
                  if ((int)uVar16 < 0x80) {
                    uVar16 = (uint)bVar2 + (uVar16 * 5 + -0x18) * 2;
                  }
                  bVar2 = pbVar10[1];
                  pbVar10 = pbVar10 + 1;
                } while ('/' < (char)bVar2);
                if ((int)uVar16 < 0x81) goto LAB_144f2bc57;
LAB_144f2bc67:
                uVar16 = 0;
              }
              uVar4 = 0x10000;
              if (uVar16 == 0) {
                uVar16 = local_res8;
              }
              if ((int)uVar5 < (int)uVar16) {
                uVar5 = uVar16;
              }
            }
            else {
              local_48[0] = pbVar10;
              uVar16 = strtol((char *)pbVar10,(char **)local_48,10);
              uVar4 = 0x8000;
            }
            uVar1 = uVar13 & 0x18000;
            pbVar10 = local_48[0];
            uVar9 = uVar5;
            uVar13 = uVar4 | uVar13;
            if ((uVar4 | uVar1) == 0x18000) {
              return 1;
            }
            break;
          case 0x30:
            if ((uVar13 & 4) == 0) {
              uVar13 = uVar13 | 0x100;
            }
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
            local_48[0] = pbVar10;
            uVar6 = strtol((char *)pbVar11,(char **)local_48,10);
            pbVar10 = local_48[0];
            uVar13 = uVar13 | 0x2000;
            break;
          case 0x49:
          case 0x4f:
          case 0x71:
          case 0x7a:
            uVar13 = uVar13 | 0x40;
            break;
          case 0x4c:
            uVar13 = uVar13 | 0x80;
            break;
          case 0x68:
            uVar13 = uVar13 | 0x10;
            break;
          case 0x6c:
            uVar5 = 0x40;
            if ((uVar13 & 0x20) == 0) {
              uVar5 = 0x20;
            }
            uVar13 = uVar13 | uVar5;
          }
        }
      }
      goto switchD_144f2bbdd_caseD_1;
    }
    local_48[0] = param_1 + 2;
  }
  goto LAB_144f2c037;
switchD_144f2bb43_caseD_21:
  uVar8 = uVar8 - 1;
  if (0x7f < uVar8) {
    return 1;
  }
  switch(*local_48[0]) {
  case 0x45:
    uVar13 = uVar13 | 0x41000;
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 7;
    break;
  default:
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 0;
    break;
  case 0x47:
    uVar13 = uVar13 | 0x81000;
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 7;
    break;
  case 0x53:
    uVar13 = uVar13 | 8;
  case 0x73:
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 1;
    break;
  case 0x58:
    uVar13 = uVar13 | 0x1a00;
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 3;
    break;
  case 99:
    uVar13 = uVar13 | 0x20000;
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 3;
    break;
  case 100:
  case 0x69:
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 3;
    break;
  case 0x65:
    uVar13 = uVar13 | 0x40000;
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 7;
    break;
  case 0x66:
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 7;
    break;
  case 0x67:
    uVar13 = uVar13 | 0x80000;
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 7;
    break;
  case 0x6e:
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 4;
    break;
  case 0x6f:
    uVar13 = uVar13 | 0x400;
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 3;
    break;
  case 0x70:
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 2;
    break;
  case 0x75:
    uVar13 = uVar13 | 0x200;
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 3;
    break;
  case 0x78:
    uVar13 = uVar13 | 0xa00;
    puVar12 = (undefined4 *)(param_2 + (longlong)(int)uVar8 * 0x18);
    *puVar12 = 3;
  }
  puVar12[1] = uVar13;
  puVar12[2] = uVar6;
  puVar12[3] = uVar16;
  if ((uVar13 >> 0xe & 1) != 0) {
    if (0x7f < uVar6 - 1) {
      return 1;
    }
    puVar12[2] = uVar6 - 1;
    *(undefined8 *)(param_2 + -0x18 + (longlong)(int)uVar6 * 0x18) = 9;
    *(undefined8 *)(param_2 + -0x10 + (longlong)(int)uVar6 * 0x18) = 0;
  }
  if ((uVar13 >> 0x10 & 1) != 0) {
    if (0x7f < uVar16 - 1) {
      return 1;
    }
    puVar12[3] = uVar16 - 1;
    *(undefined8 *)(param_2 + -0x18 + (longlong)(int)uVar16 * 0x18) = 9;
    *(undefined8 *)(param_2 + -0x10 + (longlong)(int)uVar16 * 0x18) = 0;
  }
  *local_res18 = local_48[0] + (*local_48[0] != 0);
  local_res18 = local_res18 + 1;
LAB_144f2c037:
  bVar2 = *local_48[0];
  param_1 = local_48[0];
  goto joined_r0x000144f2ba31;
}



// FUNCTION 144f2c310 FUN_144f2c310 body=2570 status=ok
// SIG undefined FUN_144f2c310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f2c310(undefined8 param_1,code *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  undefined *puVar17;
  uint uVar18;
  char *pcVar19;
  byte *pbVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  code *pcVar24;
  ulonglong uVar25;
  byte bVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auStack_1228 [32];
  code *local_1208;
  int local_1200;
  uint local_11fc;
  undefined8 local_11f8;
  char *local_11f0;
  undefined8 *local_11e8;
  uint local_11d8 [4];
  double adStack_11c8 [382];
  undefined8 local_5d8 [128];
  undefined2 local_1d8;
  undefined8 local_1d6;
  undefined8 uStack_1ce;
  undefined8 local_1c6;
  undefined4 local_1be;
  undefined2 local_1ba;
  char local_1b8;
  char local_1b7 [323];
  char local_74 [12];
  ulonglong local_68;
  longlong lVar11;
  
  local_68 = DAT_14c707940 ^ (ulonglong)auStack_1228;
  local_11f0 = "0123456789abcdefghijklmnopqrstuvwxyz";
  iVar15 = 0;
  iVar7 = 0;
  local_1208 = param_2;
  local_11f8 = param_1;
  iVar6 = FUN_144f2b9f0(param_3,local_11d8,local_5d8);
  if (iVar6 == 0) {
    local_11e8 = local_5d8;
    cVar5 = *param_3;
    pcVar24 = local_1208;
    while (local_1208 = pcVar24, cVar5 != '\0') {
      uVar23 = 0xffffffff;
      if (cVar5 == '%') {
        bVar26 = param_3[1];
        pcVar19 = param_3 + 1;
        if (bVar26 == 0x25) {
          param_3 = param_3 + 2;
          iVar6 = (*param_2)(0x25);
          if (iVar6 == -1) break;
          iVar15 = iVar15 + 1;
          pcVar24 = param_2;
        }
        else {
          iVar6 = 0;
          if ((char)bVar26 < '0') {
LAB_144f2c45b:
            if (*pcVar19 != '$') goto LAB_144f2c460;
          }
          else {
            do {
              if (0x39 < bVar26) break;
              if (iVar6 < 0x80) {
                iVar6 = (uint)bVar26 + (iVar6 * 5 + -0x18) * 2;
              }
              bVar26 = pcVar19[1];
              pcVar19 = pcVar19 + 1;
            } while ('/' < (char)bVar26);
            if (iVar6 < 0x81) goto LAB_144f2c45b;
LAB_144f2c460:
            iVar6 = 0;
          }
          iVar8 = iVar7 + 1;
          iVar13 = iVar7;
          if (iVar6 != 0) {
            iVar13 = iVar6 + -1;
          }
          lVar9 = (longlong)iVar13;
          uVar27 = local_11d8[lVar9 * 6 + 1];
          uVar16 = local_11d8[lVar9 * 6 + 2];
          lVar22 = (longlong)(int)uVar16;
          uVar18 = uVar16;
          if (((uVar27 >> 0xe & 1) != 0) &&
             (uVar18 = *(uint *)(adStack_11c8 + lVar22 * 3), iVar7 = iVar8, (int)uVar18 < 0)) {
            uVar27 = uVar27 & 0xfffffeff | 4;
            local_11d8[lVar9 * 6 + 1] = uVar27;
            uVar18 = -uVar18;
          }
          iVar6 = iVar7 + 1;
          if ((uVar27 & 0x10000) == 0) {
            iVar6 = iVar7;
            if ((uVar27 >> 0xf & 1) == 0) {
              uVar21 = 0xffffffff;
            }
            else {
              uVar21 = local_11d8[lVar9 * 6 + 3];
            }
          }
          else {
            uVar21 = *(uint *)(adStack_11c8 + (longlong)(int)local_11d8[lVar9 * 6 + 3] * 3);
            if ((int)uVar21 < 0) {
              uVar21 = 0xffffffff;
            }
          }
          uVar2 = local_11d8[lVar9 * 6];
          iVar7 = iVar6 + 1;
          local_11fc = uVar27 >> 3 & 1;
          local_1200 = iVar7;
          if (uVar2 == 1) {
            pcVar19 = (char *)adStack_11c8[lVar9 * 3];
            if (pcVar19 == (char *)0x0) {
              if ((uVar21 == 0xffffffff) || (4 < (int)uVar21)) {
                uVar27 = uVar27 & 0xfffffff7;
                pcVar19 = "(nil)";
                local_11d8[lVar9 * 6 + 1] = uVar27;
                uVar25 = 5;
              }
              else {
                pcVar19 = "";
                uVar25 = 0;
              }
            }
            else if (uVar21 == 0xffffffff) {
              if (*pcVar19 == '\0') {
                uVar25 = 0;
              }
              else {
                uVar25 = 0xffffffffffffffff;
                do {
                  uVar25 = uVar25 + 1;
                } while (pcVar19[uVar25] != '\0');
              }
            }
            else {
              uVar25 = (ulonglong)(int)uVar21;
            }
            iVar7 = (int)uVar25;
            if (0x7fffffff < uVar25) {
              iVar7 = 0x7fffffff;
            }
            iVar7 = uVar18 - iVar7;
            if ((uVar27 & 8) != 0) {
              iVar6 = (*pcVar24)(0x22);
              if (iVar6 == -1) break;
              iVar15 = iVar15 + 1;
            }
            if ((uVar27 & 4) == 0) {
              while (0 < iVar7) {
                iVar7 = iVar7 + -1;
                iVar6 = (*local_1208)(0x20);
                if (iVar6 == -1) goto LAB_144f2cd06;
                iVar15 = iVar15 + 1;
              }
              iVar7 = iVar7 + -1;
            }
            while ((uVar25 != 0 && (*pcVar19 != '\0'))) {
              iVar6 = (*local_1208)(*pcVar19);
              pcVar19 = pcVar19 + 1;
              if (iVar6 == -1) goto LAB_144f2cd06;
              iVar15 = iVar15 + 1;
              uVar25 = uVar25 - 1;
            }
            if ((uVar27 & 4) != 0) {
              while (0 < iVar7) {
                iVar7 = iVar7 + -1;
                iVar6 = (*local_1208)(0x20);
                if (iVar6 == -1) goto LAB_144f2cd06;
                iVar15 = iVar15 + 1;
              }
            }
            pcVar24 = local_1208;
            iVar7 = local_1200;
            if ((uVar27 & 8) != 0) {
              iVar7 = (*local_1208)(0x22);
              if (iVar7 == -1) break;
              iVar15 = iVar15 + 1;
              iVar7 = local_1200;
            }
          }
          else if (uVar2 == 2) {
            dVar12 = adStack_11c8[lVar9 * 3];
            if (dVar12 == 0.0) {
              iVar6 = uVar18 - 5;
              if ((uVar27 & 4) != 0) {
                while (0 < iVar6) {
                  iVar6 = iVar6 + -1;
                  iVar7 = (*local_1208)(0x20,param_1);
                  if (iVar7 == -1) goto LAB_144f2cd06;
                  iVar15 = iVar15 + 1;
                }
                iVar6 = iVar6 + -1;
              }
              pcVar24 = local_1208;
              puVar17 = &DAT_149c09e78;
              cVar5 = '(';
              do {
                iVar7 = (*pcVar24)(cVar5);
                if (iVar7 == -1) goto LAB_144f2cd06;
                cVar5 = puVar17[1];
                puVar17 = puVar17 + 1;
                iVar15 = iVar15 + 1;
              } while (cVar5 != '\0');
              iVar7 = local_1200;
              if ((uVar27 & 4) == 0) {
                while (iVar7 = local_1200, 0 < iVar6) {
                  iVar6 = iVar6 + -1;
                  iVar7 = (*pcVar24)(0x20);
                  if (iVar7 == -1) goto LAB_144f2cd06;
                  iVar15 = iVar15 + 1;
                }
              }
            }
            else {
              local_11f0 = "0123456789abcdefghijklmnopqrstuvwxyz";
              if ((uVar27 >> 0xc & 1) != 0) {
                local_11f0 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
              }
              local_11fc = 1;
              uVar25 = 0x10;
              uVar23 = 0;
LAB_144f2c877:
              pcVar19 = local_74;
              if (uVar21 == 0xffffffff) {
                uVar21 = 1;
              }
              iVar7 = (int)uVar25;
              for (; dVar12 != 0.0; dVar12 = (double)((ulonglong)dVar12 / uVar25)) {
                *pcVar19 = local_11f0[(ulonglong)dVar12 % uVar25];
                pcVar19 = pcVar19 + -1;
              }
              iVar8 = (int)pcVar19 - (int)local_74;
              iVar6 = uVar18 + iVar8;
              iVar8 = uVar21 + iVar8;
              if ((local_11fc == 0) || (iVar7 != 8)) {
                if (0 < iVar8) goto LAB_144f2c947;
LAB_144f2c96a:
                if ((local_11fc != 0) && (iVar7 == 0x10)) {
                  iVar6 = iVar6 + -2;
                }
              }
              else {
                if (0 < iVar8) {
LAB_144f2c947:
                  iVar6 = iVar6 - iVar8;
                  do {
                    iVar8 = iVar8 + -1;
                    if (pcVar19 < &local_1b8) break;
                    *pcVar19 = '0';
                    pcVar19 = pcVar19 + -1;
                  } while (0 < iVar8);
                  goto LAB_144f2c96a;
                }
                *pcVar19 = '0';
                pcVar19 = pcVar19 + -1;
                iVar6 = iVar6 + -1;
              }
              if ((uVar23 != 0) || ((uVar27 & 3) != 0)) {
                iVar6 = iVar6 + -1;
              }
              if ((uVar27 & 0x104) == 0) {
                while (0 < iVar6) {
                  iVar6 = iVar6 + -1;
                  iVar8 = (*local_1208)(0x20);
                  if (iVar8 == -1) goto LAB_144f2cd06;
                  iVar15 = iVar15 + 1;
                }
                iVar6 = iVar6 + -1;
              }
              pcVar24 = local_1208;
              if (uVar23 == 0) {
                if ((uVar27 & 2) != 0) {
                  uVar14 = 0x2b;
                  goto LAB_144f2c9f2;
                }
                if ((uVar27 & 1) != 0) {
                  uVar14 = 0x20;
                  goto LAB_144f2c9f2;
                }
              }
              else {
                uVar14 = 0x2d;
LAB_144f2c9f2:
                iVar8 = (*local_1208)(uVar14);
                if (iVar8 == -1) break;
                iVar15 = iVar15 + 1;
              }
              param_1 = local_11f8;
              if ((local_11fc != 0) && (iVar7 == 0x10)) {
                iVar7 = (*pcVar24)(0x30,local_11f8);
                if (iVar7 == -1) break;
                if ((uVar27 >> 0xc & 1) == 0) {
                  iVar7 = (*pcVar24)(0x78);
                  if (iVar7 == -1) break;
                  iVar15 = iVar15 + 2;
                }
                else {
                  iVar7 = (*pcVar24)(0x58);
                  if (iVar7 == -1) break;
                  iVar15 = iVar15 + 2;
                }
              }
              if (((uVar27 & 4) == 0) && ((uVar27 >> 8 & 1) != 0)) {
                while (0 < iVar6) {
                  iVar6 = iVar6 + -1;
                  iVar7 = (*pcVar24)(0x30);
                  if (iVar7 == -1) goto LAB_144f2cd06;
                  iVar15 = iVar15 + 1;
                }
                iVar6 = iVar6 + -1;
              }
              pcVar19 = pcVar19 + 1;
              if (pcVar19 <= local_74) {
                do {
                  iVar7 = (*pcVar24)(*pcVar19);
                  if (iVar7 == -1) goto LAB_144f2cd06;
                  iVar15 = iVar15 + 1;
                  pcVar19 = pcVar19 + 1;
                } while (pcVar19 <= local_74);
              }
              iVar7 = local_1200;
              if ((uVar27 & 4) != 0) {
                while (iVar7 = local_1200, 0 < iVar6) {
                  iVar6 = iVar6 + -1;
                  iVar7 = (*pcVar24)(0x20);
                  if (iVar7 == -1) goto LAB_144f2cd06;
                  iVar15 = iVar15 + 1;
                }
              }
            }
          }
          else if (uVar2 == 3) {
            dVar12 = adStack_11c8[lVar9 * 3];
            if ((uVar27 >> 0x11 & 1) == 0) {
              if ((uVar27 >> 10 & 1) == 0) {
                if ((uVar27 >> 0xb & 1) == 0) {
                  uVar25 = 10;
                  if ((uVar27 >> 9 & 1) == 0) {
                    uVar23 = (uint)((ulonglong)dVar12 >> 0x3f);
                    if ((longlong)dVar12 < 0) {
                      dVar12 = (double)-(longlong)dVar12;
                    }
                    goto LAB_144f2c877;
                  }
                }
                else {
                  local_11f0 = "0123456789abcdefghijklmnopqrstuvwxyz";
                  uVar25 = 0x10;
                  if ((uVar27 >> 0xc & 1) != 0) {
                    local_11f0 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                  }
                }
              }
              else {
                uVar25 = 8;
              }
              uVar23 = 0;
              goto LAB_144f2c877;
            }
            if ((uVar27 & 4) == 0) {
              while (uVar18 = uVar18 - 1, 0 < (int)uVar18) {
                iVar6 = (*pcVar24)(0x20,param_1);
                if (iVar6 == -1) goto LAB_144f2cd06;
                iVar15 = iVar15 + 1;
              }
            }
            iVar6 = (*pcVar24)((ulonglong)dVar12 & 0xff);
            if (iVar6 == -1) break;
            iVar15 = iVar15 + 1;
            if ((uVar27 & 4) != 0) {
              while (uVar18 = uVar18 - 1, 0 < (int)uVar18) {
                iVar6 = (*pcVar24)(0x20);
                if (iVar6 == -1) goto LAB_144f2cd06;
                iVar15 = iVar15 + 1;
              }
            }
          }
          else if (uVar2 == 4) {
            plVar3 = (longlong *)adStack_11c8[lVar9 * 3];
            if ((uVar27 & 0x40) == 0) {
              if ((uVar27 & 0x20) == 0) {
                if ((uVar27 & 0x10) == 0) {
                  *(int *)plVar3 = iVar15;
                }
                else {
                  *(short *)plVar3 = (short)iVar15;
                }
              }
              else {
                *(int *)plVar3 = iVar15;
              }
            }
            else {
              *plVar3 = (longlong)iVar15;
            }
          }
          else if (uVar2 == 7) {
            local_1d8 = 0x25;
            local_1c6 = 0;
            local_1be = 0;
            local_1ba = 0;
            local_1d6 = 0;
            uStack_1ce = 0;
            lVar11 = -1;
            do {
              lVar10 = lVar11 + 1;
              lVar4 = lVar11 + 1;
              lVar11 = lVar10;
            } while (*(char *)((longlong)&local_1d8 + lVar4) != '\0');
            lVar10 = 0x20 - lVar10;
            if (((uVar27 >> 0xd & 1) == 0) && (uVar16 = 0xffffffff, (uVar27 >> 0xe & 1) != 0)) {
              uVar16 = *(uint *)(adStack_11c8 + lVar22 * 3);
            }
            if ((uVar27 & 0x8000) == 0) {
              if ((uVar27 & 0x10000) != 0) {
                uVar23 = *(uint *)(adStack_11c8 + (longlong)(int)local_11d8[lVar9 * 6 + 3] * 3);
              }
            }
            else {
              uVar23 = local_11d8[lVar9 * 6 + 3];
            }
            local_1d8._1_1_ = 0;
            bVar28 = (uVar27 >> 2 & 1) != 0;
            if (bVar28) {
              local_1d8._1_1_ = 0x2d;
            }
            local_1d8 = CONCAT11(local_1d8._1_1_,0x25);
            pbVar20 = (byte *)((longlong)&local_1d8 + 1);
            if (bVar28) {
              pbVar20 = (byte *)&local_1d6;
            }
            if ((uVar27 & 2) != 0) {
              *pbVar20 = 0x2b;
              pbVar20 = pbVar20 + 1;
            }
            if ((uVar27 & 1) != 0) {
              *pbVar20 = 0x20;
              pbVar20 = pbVar20 + 1;
            }
            if ((uVar27 & 8) != 0) {
              *pbVar20 = 0x23;
              pbVar20 = pbVar20 + 1;
            }
            *pbVar20 = 0;
            if (-1 < (int)uVar16) {
              if (0x145 < (int)uVar16) {
                uVar16 = 0x145;
              }
              iVar7 = FUN_144f2b7e0(pbVar20,lVar10,&DAT_149c09ed8,uVar16);
              pbVar20 = pbVar20 + iVar7;
              lVar10 = lVar10 - iVar7;
            }
            if (-1 < (int)uVar23) {
              dVar12 = adStack_11c8[lVar9 * 3];
              iVar7 = 0x144;
              if ((0 < (int)uVar16) && ((int)uVar23 <= (int)uVar16)) {
                iVar7 = 0x144 - uVar16;
              }
              for (; 10.0 <= dVar12; dVar12 = dVar12 / 10.0) {
                iVar7 = iVar7 + -1;
              }
              uVar18 = iVar7 - 1;
              if ((int)uVar23 <= iVar7) {
                uVar18 = uVar23;
              }
              uVar23 = 0;
              if (-1 < (int)uVar18) {
                uVar23 = uVar18;
              }
              iVar7 = FUN_144f2b7e0(pbVar20,lVar10,&DAT_149c09edc,uVar23);
              pbVar20 = pbVar20 + iVar7;
            }
            if ((uVar27 & 0x20) != 0) {
              *pbVar20 = 0x6c;
              pbVar20 = pbVar20 + 1;
            }
            if ((uVar27 >> 0x12 & 1) == 0) {
              if ((uVar27 >> 0x13 & 1) == 0) {
                bVar26 = 0x66;
              }
              else {
                bVar26 = ~(byte)(uVar27 >> 7) & 0x20 | 0x47;
              }
            }
            else {
              bVar26 = ~(byte)(uVar27 >> 7) & 0x20 | 0x45;
            }
            *pbVar20 = bVar26;
            dVar12 = adStack_11c8[lVar9 * 3];
            pbVar20[1] = 0;
            FUN_14626ea25(&local_1b8,0x146,&local_1d8,dVar12);
            param_1 = local_11f8;
            pcVar24 = local_1208;
            pcVar19 = &local_1b8;
            cVar5 = local_1b8;
            while (iVar7 = local_1200, cVar5 != '\0') {
              iVar7 = (*pcVar24)(cVar5);
              if (iVar7 == -1) goto LAB_144f2cd06;
              pcVar1 = pcVar19 + 1;
              pcVar19 = pcVar19 + 1;
              iVar15 = iVar15 + 1;
              cVar5 = *pcVar1;
            }
          }
          param_3 = (char *)*local_11e8;
          local_11e8 = local_11e8 + 1;
        }
        cVar5 = *param_3;
        param_2 = pcVar24;
        pcVar24 = local_1208;
      }
      else {
        do {
          iVar6 = (*param_2)(cVar5);
          if (iVar6 == -1) goto LAB_144f2cd06;
          cVar5 = param_3[1];
          param_3 = param_3 + 1;
          iVar15 = iVar15 + 1;
          if (cVar5 == '\0') goto LAB_144f2cd06;
          pcVar24 = local_1208;
        } while (cVar5 != '%');
      }
    }
  }
LAB_144f2cd06:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_68 ^ (ulonglong)auStack_1228);
}



// FUNCTION 144f2cd50 FUN_144f2cd50 body=62 status=ok
// SIG undefined FUN_144f2cd50(void)

ulonglong FUN_144f2cd50(byte param_1,undefined8 *param_2)

{
  int iVar1;
  byte local_res8 [32];
  
  local_res8[0] = param_1;
  iVar1 = thunk_FUN_144f07eb0(*param_2,local_res8,1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_2 + 1) = 1;
    return 0xffffffff;
  }
  return (ulonglong)local_res8[0];
}



// FUNCTION 144f2cd90 FUN_144f2cd90 body=19 status=ok
// SIG undefined FUN_144f2cd90(void)

undefined * FUN_144f2cd90(int param_1)

{
  if (0x12f00 < param_1) {
    return (undefined *)0x0;
  }
  return &DAT_14c70f3f0;
}



// FUNCTION 144f2cda4 __CheckForDebuggerJustMyCode body=60 status=ok
// SIG undefined __CheckForDebuggerJustMyCode(void)

/* Library Function - Single Match
    __CheckForDebuggerJustMyCode
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __CheckForDebuggerJustMyCode(char *param_1)

{
  if ((*param_1 != '\0') && (DAT_14c7976f8 != 0)) {
    GetCurrentThreadId();
  }
  return;
}



// FUNCTION 144f2cde0 FUN_144f2cde0 body=511 status=ok
// SIG undefined FUN_144f2cde0(void)

undefined1 * FUN_144f2cde0(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint local_res18;
  
  local_res18 = (uint)param_3;
  if (param_2 < 0x2718) {
    if (param_2 == 0x2717) {
      if (param_3 != (longlong *)0x0) {
        *(int *)param_3 = (int)param_1[6];
        *(undefined4 *)(param_1 + 6) = 0;
        goto LAB_144f2cfd0;
      }
    }
    else if (param_2 == 0xfbb) {
      if (param_3 != (longlong *)0x0) {
        iVar3 = (int)param_1[1] / *(int *)((longlong)param_1 + 0x14);
        goto LAB_144f2cf3f;
      }
    }
    else {
      if (param_2 == 0xfbc) {
        iVar3 = *(int *)((longlong)param_1 + 0xc);
        iVar1 = *(int *)(*param_1 + 8);
        lVar5 = (longlong)(iVar1 * 2);
        puVar4 = (undefined4 *)
                 ((longlong)param_1 +
                 ((longlong)(iVar3 * 0x18) + 0x18 + lVar5 + ((int)param_1[1] + 0x800) * iVar3) * 4);
        memset((void *)((longlong)param_1 + 0x2c),0,
               (longlong)(((*(int *)(*param_1 + 4) + 0x818) * iVar3 + iVar1 * 8) * 4 + 100) - 0x2c);
        iVar3 = 0;
        if (0 < *(int *)(*param_1 + 8) * 2) {
          do {
            puVar4[lVar5] = 0xc1e00000;
            iVar3 = iVar3 + 1;
            *puVar4 = 0xc1e00000;
            puVar4 = puVar4 + 1;
          } while (iVar3 < *(int *)(*param_1 + 8) * 2);
        }
        *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
        goto LAB_144f2cfd0;
      }
      if (param_2 == 0xfbf) {
        if (param_3 != (longlong *)0x0) {
          iVar3 = *(int *)((longlong)param_1 + 0x2c);
LAB_144f2cf3f:
          *(int *)param_3 = iVar3;
          goto LAB_144f2cfd0;
        }
      }
      else if (param_2 == 0xfc1) {
        if (param_3 != (longlong *)0x0) {
          iVar3 = (int)param_1[8];
          goto LAB_144f2cf3f;
        }
      }
      else if (param_2 == 0xfce) {
        if (local_res18 < 2) {
          *(uint *)((longlong)param_1 + 0x24) = local_res18;
          goto LAB_144f2cfd0;
        }
      }
      else {
        if (param_2 != 0xfcf) goto LAB_144f2cf7a;
        if (param_3 != (longlong *)0x0) {
          iVar3 = *(int *)((longlong)param_1 + 0x24);
          goto LAB_144f2cf3f;
        }
      }
    }
LAB_144f2cfd4:
    puVar2 = (undefined1 *)0xffffffff;
  }
  else {
    if (param_2 == 0x2718) {
      if (1 < local_res18 - 1) goto LAB_144f2cfd4;
      *(uint *)(param_1 + 2) = local_res18;
    }
    else if (param_2 == 0x271a) {
      if (((int)local_res18 < 0) || (*(int *)(*param_1 + 8) <= (int)local_res18))
      goto LAB_144f2cfd4;
      *(uint *)(param_1 + 3) = local_res18;
    }
    else if (param_2 == 0x271c) {
      if (((int)local_res18 < 1) || (*(int *)(*param_1 + 8) < (int)local_res18)) goto LAB_144f2cfd4;
      *(uint *)((longlong)param_1 + 0x1c) = local_res18;
    }
    else if (param_2 == 0x271f) {
      if (param_3 == (longlong *)0x0) goto LAB_144f2cfd4;
      *param_3 = *param_1;
    }
    else {
      if (param_2 != 0x2720) {
LAB_144f2cf7a:
        return &DAT_fffffffb;
      }
      *(uint *)(param_1 + 4) = local_res18;
    }
LAB_144f2cfd0:
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}



// FUNCTION 144f2cfe0 FUN_144f2cfe0 body=57 status=ok
// SIG undefined FUN_144f2cfe0(void)

int FUN_144f2cfe0(int param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1452e8898(48000,0x3c0,0);
  return ((*(int *)(lVar1 + 4) + 0x818) * param_1 + *(int *)(lVar1 + 8) * 8) * 4 + 100;
}



// FUNCTION 144f2d01c FUN_144f2d01c body=235 status=ok
// SIG undefined FUN_144f2d01c(void)

int FUN_144f2d01c(longlong *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_1452e8898(48000,0x3c0,0);
  if (param_3 < 3) {
    if (param_1 == (longlong *)0x0) {
      iVar2 = -7;
    }
    else {
      memset(param_1,0,
             (longlong)
             (int)(((*(int *)(lVar3 + 4) + 0x818) * param_3 + *(int *)(lVar3 + 8) * 8) * 4 + 100));
      *param_1 = lVar3;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar3 + 4);
      *(uint *)((longlong)param_1 + 0xc) = param_3;
      *(uint *)(param_1 + 2) = param_3;
      *(undefined8 *)((longlong)param_1 + 0x14) = 1;
      uVar1 = *(undefined4 *)(lVar3 + 0xc);
      *(uint *)((longlong)param_1 + 0x24) = (uint)(param_3 == 1);
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
      *(undefined4 *)(param_1 + 4) = 1;
      uVar1 = FUN_144f2f804();
      *(undefined4 *)(param_1 + 5) = uVar1;
      FUN_144f2cde0(param_1,0xfbc);
      iVar2 = FUN_144bca984(param_2);
      *(int *)((longlong)param_1 + 0x14) = iVar2;
      iVar2 = (iVar2 != 0) - 1;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



// FUNCTION 144f2d108 FUN_144f2d108 body=3550 status=ok
// SIG undefined FUN_144f2d108(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f2d108(longlong *param_1,longlong param_2,uint param_3,longlong param_4,int param_5,
                  undefined1 *param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  int *piVar23;
  undefined1 *puVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  float *pfVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  undefined4 uVar32;
  size_t sVar33;
  undefined4 uVar34;
  longlong lVar35;
  int iVar36;
  int iVar37;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  undefined8 uStack_280;
  undefined1 auStack_278 [32];
  longlong local_258;
  undefined1 *local_250;
  longlong *local_248;
  longlong local_240;
  longlong lStack_238;
  uint auStack_230 [2];
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong lStack_210;
  int aiStack_208 [2];
  undefined8 uStack_200;
  undefined8 local_1f8;
  int local_1f0 [4];
  longlong local_1e0;
  undefined4 local_1d8 [8];
  int local_1b8;
  int iStack_1b4;
  int local_1b0;
  int iStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  float *local_198;
  uint local_190;
  int iStack_18c;
  int local_188;
  int local_184;
  undefined4 local_180;
  int local_17c;
  int local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  uint uStack_15c;
  longlong local_158;
  int local_150;
  float *local_148;
  undefined4 local_140;
  uint local_13c;
  int local_138;
  longlong local_130;
  longlong local_128;
  float *local_120;
  ulonglong local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  size_t local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0 [4];
  longlong local_a0;
  longlong local_98;
  longlong alStack_90 [2];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_1b8;
  iVar31 = *(int *)((longlong)param_1 + 0xc);
  iVar37 = 0;
  local_1b8 = (int)param_1[2];
  local_168 = 0;
  local_164 = 0;
  local_150 = 0;
  uStack_280 = 0x144f2d18d;
  local_190 = param_3;
  local_17c = iVar31;
  local_100 = param_1;
  local_c8 = param_4;
  FUN_144f2df14();
  lVar20 = *param_1;
  local_1b0 = *(int *)((longlong)param_1 + 0x1c);
  local_c0[2] = *(longlong *)(lVar20 + 0x20);
  iVar12 = *(int *)(lVar20 + 4) + 0x800;
  iStack_1b4 = (int)param_1[3];
  local_188 = *(int *)(lVar20 + 4);
  local_1a0 = *(int *)(lVar20 + 8);
  local_d0 = lVar20;
  iVar25 = *(int *)(lVar20 + 0x28);
  local_f0 = (longlong)(*(int *)(lVar20 + 8) * 2);
  local_198 = (float *)((longlong)param_1 +
                       ((longlong)(iVar12 * iVar31) + (longlong)(iVar31 * 0x18) + 0x18) * 4);
  local_e8 = local_f0 * 4;
  local_120 = local_198 + local_f0;
  local_148 = local_198 + local_f0 * 2;
  if (-1 < iVar25) {
    do {
      if (*(int *)(lVar20 + 0x30) << ((byte)iVar37 & 0x1f) ==
          param_5 * *(int *)((longlong)param_1 + 0x14)) break;
      iVar37 = iVar37 + 1;
    } while (iVar37 <= iVar25);
  }
  local_170 = CONCAT44(local_170._4_4_,iVar37);
  puVar24 = auStack_278;
  if (iVar25 < iVar37) goto LAB_144f2ded7;
  uStack_15c = 1 << ((byte)iVar37 & 0x1f);
  puVar24 = auStack_278;
  if ((0x4fb < param_3) || (puVar24 = auStack_278, param_4 == 0)) goto LAB_144f2ded7;
  lVar21 = 0;
  iVar25 = *(int *)(lVar20 + 0x30) * uStack_15c;
  local_130 = (longlong)iVar31;
  iStack_1a4 = iVar25;
  iVar30 = 0;
  local_f8 = (longlong)iVar25 * 4;
  do {
    lVar14 = (longlong)iVar30;
    iVar30 = iVar30 + iVar12;
    lVar14 = (longlong)param_1 + (lVar14 + 0x18) * 4;
    alStack_90[lVar21] = lVar14;
    local_c0[lVar21] = lVar14 + (longlong)iVar25 * -4 + 0x2000;
    lVar21 = lVar21 + 1;
  } while (lVar21 < iVar31);
  local_138 = *(int *)(lVar20 + 0xc);
  if (local_1b0 <= *(int *)(lVar20 + 0xc)) {
    local_138 = local_1b0;
  }
  if ((param_2 == 0) || ((int)param_3 < 2)) {
    uStack_280 = 0x144f2de8a;
    FUN_144f2ea9c(param_1,iVar25,iVar37);
    local_248 = param_1 + 0xb;
    local_250 = (undefined1 *)(lVar20 + 0x10);
    local_240._0_4_ = param_7;
    local_258._0_4_ = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_280 = 0x144f2dec8;
    FUN_144f2e1a0(local_c0,local_c8,iVar25,local_17c);
    puVar24 = auStack_278;
    goto LAB_144f2ded7;
  }
  *(uint *)((longlong)param_1 + 0x3c) = (uint)((int)param_1[7] != 0);
  if (param_6 == (undefined1 *)0x0) {
    uStack_280 = 0x144f2d329;
    FUN_144f2f434(local_80,param_2,param_3);
    param_6 = local_80;
  }
  local_128 = (longlong)local_1a0;
  if ((local_1b8 == 1) && (pfVar15 = local_198, lVar21 = local_128, 0 < local_128)) {
    do {
      fVar40 = *pfVar15;
      if (*pfVar15 <= pfVar15[local_128]) {
        fVar40 = pfVar15[local_128];
      }
      *pfVar15 = fVar40;
      lVar21 = lVar21 + -1;
      pfVar15 = pfVar15 + 1;
    } while (lVar21 != 0);
  }
  uVar26 = *(uint *)(param_6 + 0x20);
  iVar31 = param_3 * 8;
  iVar12 = 0x1f;
  if (uVar26 != 0) {
    for (; uVar26 >> iVar12 == 0; iVar12 = iVar12 + -1) {
    }
  }
  iVar25 = (*(int *)(param_6 + 0x18) - iVar12) + -1;
  iStack_19c = iVar31;
  if (iVar25 < iVar31) {
    if (iVar25 == 1) {
      uStack_280 = 0x144f2d3a7;
      iStack_18c = FUN_144f2f528(param_6,(*(int *)(param_6 + 0x18) - iVar12) + 0xd);
      uVar26 = *(uint *)(param_6 + 0x20);
    }
    else {
      iStack_18c = 0;
    }
    if (iStack_18c != 0) goto LAB_144f2d3ba;
  }
  else {
    iStack_18c = 1;
LAB_144f2d3ba:
    iVar12 = 0x1f;
    if (uVar26 != 0) {
      for (; uVar26 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    *(int *)(param_6 + 0x18) = iVar12 + 1 + iVar31;
    iVar25 = iVar31;
  }
  local_d8 = 2;
  fVar40 = 0.0;
  local_184 = 0;
  local_180 = 0;
  iStack_1ac = 6;
  if ((iStack_1b4 == 0) && (iVar25 + 0x10 <= iVar31)) {
    uStack_280 = 0x144f2d407;
    iVar12 = FUN_144f2f528(param_6,1);
    fVar40 = 0.0;
    if (iVar12 != 0) {
      uStack_280 = 0x144f2d416;
      iVar12 = FUN_144f2f5c4(param_6,6);
      uStack_280 = 0x144f2d423;
      iVar25 = FUN_144f2f70c(param_6,iVar12 + 4);
      local_184 = (0x10 << ((byte)iVar12 & 0x1f)) + iVar25 + -1;
      uStack_280 = 0x144f2d43f;
      iVar25 = FUN_144f2f70c(param_6,3);
      iVar12 = 0x1f;
      if (*(uint *)(param_6 + 0x20) != 0) {
        for (; *(uint *)(param_6 + 0x20) >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (*(int *)(param_6 + 0x18) - iVar12 < iVar31) {
        uStack_280 = 0x144f2d462;
        local_180 = FUN_144f2f574(param_6,&DAT_149c09f00,2);
      }
      fVar40 = (float)(iVar25 + 1) * 0.09375;
    }
    iVar12 = 0x1f;
    if (*(uint *)(param_6 + 0x20) != 0) {
      for (; *(uint *)(param_6 + 0x20) >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar25 = (*(int *)(param_6 + 0x18) - iVar12) + -1;
  }
  if ((iVar37 < 1) || (iVar31 < iVar25 + 3)) {
    local_1a8 = 0;
  }
  else {
    uStack_280 = 0x144f2d49c;
    local_1a8 = FUN_144f2f528(param_6,3);
    iVar12 = 0x1f;
    if (*(uint *)(param_6 + 0x20) != 0) {
      for (; *(uint *)(param_6 + 0x20) >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar25 = (*(int *)(param_6 + 0x18) - iVar12) + -1;
  }
  local_13c = -(uint)(local_1a8 != 0) & uStack_15c;
  if (iVar31 < iVar25 + 3) {
    local_258._0_4_ = 0;
  }
  else {
    uStack_280 = 0x144f2d4d1;
    local_258._0_4_ = FUN_144f2f528(param_6,3);
  }
  iVar12 = local_1b8;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,local_1b8);
  uStack_280 = 0x144f2d4fd;
  local_250 = param_6;
  local_240._0_4_ = iVar37;
  FUN_1452ee560(lVar20,iStack_1b4,local_1b0,local_198);
  iVar36 = local_1a8;
  iVar30 = local_1b0;
  iVar25 = iStack_1b4;
  uVar38 = local_128 * 4;
  uVar16 = uVar38 + 0xf;
  if (uVar16 <= uVar38) {
    uVar16 = 0xffffffffffffff0;
  }
  uStack_280 = 0x144f2d52e;
  lVar21 = -(uVar16 & 0xfffffffffffffff0);
  local_118 = uVar38;
  *(undefined1 **)((longlong)&local_250 + lVar21) = param_6;
  local_a0 = (longlong)&local_1b8 + lVar21;
  *(int *)((longlong)&local_258 + lVar21) = iVar37;
  *(undefined8 *)(auStack_278 + lVar21 + -8) = 0x144f2d55c;
  FUN_144f2e890(iVar25,iVar30,iVar36,(longlong)&local_1b8 + lVar21);
  iVar25 = 0x1f;
  if (*(uint *)(param_6 + 0x20) != 0) {
    for (; *(uint *)(param_6 + 0x20) >> iVar25 == 0; iVar25 = iVar25 + -1) {
    }
  }
  local_160 = 2;
  if ((*(int *)(param_6 + 0x18) - iVar25) + 3 <= iVar31) {
    *(undefined8 *)(auStack_278 + lVar21 + -8) = 0x144f2d589;
    local_160 = FUN_144f2f574(param_6,&DAT_149c09efc,5);
  }
  uVar16 = uVar38 + 0xf;
  if (uVar16 <= uVar38) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_278 + lVar21 + -8) = 0x144f2d5a8;
  lVar4 = -(uVar16 & 0xfffffffffffffff0);
  lVar14 = (longlong)&local_1b8 + lVar4 + lVar21;
  local_110 = lVar14;
  *(undefined8 *)(auStack_278 + lVar4 + lVar21 + -8) = 0x144f2d5cb;
  FUN_144bcad40(lVar20,lVar14,iVar37,iVar12);
  uVar16 = uVar38 + 0xf;
  if (uVar16 <= uVar38) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_278 + lVar4 + lVar21 + -8) = 0x144f2d5e7;
  lVar14 = -(uVar16 & 0xfffffffffffffff0);
  iVar31 = param_3 << 6;
  local_108 = (longlong)&local_1b8 + lVar14 + lVar4 + lVar21;
  *(undefined8 *)(auStack_278 + lVar14 + lVar4 + lVar21 + -8) = 0x144f2d605;
  iVar12 = FUN_1452e891c(param_6);
  lVar35 = (longlong)local_1b0;
  local_158 = (longlong)iStack_1b4;
  local_e0 = lVar35;
  local_98 = local_158;
  if (local_158 < lVar35) {
    piVar23 = (int *)(local_108 + local_158 * 4);
    local_c0[3] = local_110 - local_108;
    do {
      lVar20 = local_c0[3];
      iVar30 = ((int)*(short *)(local_c0[2] + 2 + local_158 * 2) -
               (int)*(short *)(local_c0[2] + local_158 * 2)) * local_1b8 << ((byte)iVar37 & 0x1f);
      iVar25 = iVar30;
      if (iVar30 < 0x30) {
        iVar25 = 0x30;
      }
      if (iVar30 << 3 < iVar25) {
        iVar25 = iVar30 << 3;
      }
      iVar36 = 0;
      lVar29 = local_158;
      local_178 = iVar25;
      iVar30 = iStack_1ac;
      if (iVar12 + iStack_1ac * 8 < iVar31) {
        do {
          if (*(int *)(lVar20 + (longlong)piVar23) <= iVar36) break;
          *(undefined8 *)(auStack_278 + lVar14 + lVar4 + lVar21 + -8) = 0x144f2d6ab;
          iVar37 = FUN_144f2f528(param_6,iVar30);
          *(undefined8 *)(auStack_278 + lVar14 + lVar4 + lVar21 + -8) = 0x144f2d6b5;
          iVar12 = FUN_1452e891c(param_6);
          if (iVar37 == 0) break;
          iVar36 = iVar36 + iVar25;
          iVar31 = iVar31 - iVar25;
          iVar30 = 1;
        } while (iVar12 + 8 < iVar31);
        lVar29 = local_158;
        lVar35 = local_e0;
        iVar37 = (int)local_170;
      }
      *piVar23 = iVar36;
      if ((0 < iVar36) && (iStack_1ac = iStack_1ac + -1, iStack_1ac < 2)) {
        iStack_1ac = 2;
      }
      local_158 = lVar29 + 1;
      piVar23 = piVar23 + 1;
      lVar20 = local_d0;
      uVar38 = local_118;
    } while (local_158 < lVar35);
  }
  uVar16 = uVar38 + 0xf;
  if (uVar16 <= uVar38) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_278 + lVar14 + lVar4 + lVar21 + -8) = 0x144f2d73f;
  lVar35 = -(uVar16 & 0xfffffffffffffff0);
  local_158 = (longlong)&local_1b8 + lVar35 + lVar14 + lVar4 + lVar21;
  if (iVar31 < iVar12 + 0x30) {
    uVar13 = 5;
  }
  else {
    *(undefined8 *)(auStack_278 + lVar35 + lVar14 + lVar4 + lVar21 + -8) = 0x144f2d76c;
    uVar13 = FUN_144f2f574(param_6,&DAT_149c09ef0);
  }
  uVar26 = local_190 * 0x40;
  local_190 = uVar26;
  *(undefined8 *)(auStack_278 + lVar35 + lVar14 + lVar4 + lVar21 + -8) = 0x144f2d788;
  iVar12 = FUN_1452e891c(param_6);
  iVar12 = uVar26 - iVar12;
  if (((local_1a8 == 0) || (iVar37 < 2)) || (iVar31 = 8, iVar12 <= iVar37 * 8 + 0x10)) {
    iVar31 = 0;
  }
  uVar16 = uVar38 + 0xf;
  if (uVar16 <= uVar38) {
    uVar16 = 0xffffffffffffff0;
  }
  iStack_1ac = iVar31;
  *(undefined8 *)(auStack_278 + lVar35 + lVar14 + lVar4 + lVar21 + -8) = 0x144f2d7d3;
  lVar5 = -(uVar16 & 0xfffffffffffffff0);
  uVar16 = uVar38 + 0xf;
  lVar29 = (longlong)&local_1b8 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21;
  if (uVar16 <= uVar38) {
    uVar16 = 0xffffffffffffff0;
  }
  local_170 = lVar29;
  *(undefined8 *)(auStack_278 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) = 0x144f2d7f7;
  lVar8 = local_108;
  lVar27 = local_158;
  iVar25 = local_1b8;
  lVar6 = -(uVar16 & 0xfffffffffffffff0);
  *(undefined4 *)((longlong)local_1f0 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + 8) = 0;
  lVar7 = (longlong)&local_1b8 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21;
  *(undefined4 *)((longlong)local_1f0 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = 0;
  *(undefined4 *)((longlong)&local_1f8 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = 0;
  iVar30 = local_1b0;
  *(undefined1 **)((longlong)&uStack_200 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       param_6;
  *(int *)((longlong)aiStack_208 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = iVar37;
  *(int *)((longlong)&lStack_210 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = iVar25;
  *(longlong *)((longlong)&lStack_218 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = lVar7;
  *(longlong *)((longlong)&lStack_220 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = lVar27;
  *(longlong *)((longlong)&lStack_228 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = lVar29;
  iVar25 = iStack_1b4;
  local_118 = lVar7;
  *(undefined4 **)((longlong)auStack_230 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       &local_140;
  *(int *)((longlong)&lStack_238 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       (iVar12 + -1) - iVar31;
  *(undefined4 **)((longlong)&local_240 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       &local_164;
  *(undefined4 **)((longlong)&local_248 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       &local_168;
  lVar29 = local_110;
  *(undefined4 *)((longlong)&local_250 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = uVar13;
  *(longlong *)((longlong)&local_258 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = lVar29;
  *(undefined8 *)(auStack_278 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) = 0x144f2d88d
  ;
  local_178 = FUN_1452e95d8(lVar20,iVar25,iVar30,lVar8);
  pfVar15 = local_198;
  iVar31 = local_1b0;
  iVar12 = iStack_1b4;
  *(int *)((longlong)&local_248 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = local_1b8;
  *(undefined1 **)((longlong)&local_250 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       param_6;
  *(longlong *)((longlong)&local_258 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = lVar27;
  *(undefined8 *)(auStack_278 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) = 0x144f2d8b4
  ;
  FUN_1452ee740(lVar20,iVar12,iVar31,pfVar15);
  lVar7 = local_f8;
  lVar29 = local_130;
  lVar27 = 0;
  iVar12 = local_188 / 2 - iStack_1a4;
  do {
    pvVar3 = (void *)alStack_90[lVar27];
    *(undefined8 *)(auStack_278 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
         0x144f2d8ef;
    memmove(pvVar3,(void *)((longlong)pvVar3 + lVar7),(longlong)(iVar12 + 0x800) << 2);
    plVar11 = local_100;
    iVar31 = local_1b8;
    lVar27 = lVar27 + 1;
  } while (lVar27 < lVar29);
  local_1a0 = local_1a0 * local_1b8;
  uVar38 = (ulonglong)local_1a0;
  uVar16 = uVar38 + 0xf;
  if (uVar16 <= uVar38) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_278 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) = 0x144f2d92e
  ;
  lVar7 = -(uVar16 & 0xfffffffffffffff0);
  lVar29 = (longlong)&local_1b8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21;
  uVar18 = (longlong)(iStack_1a4 * iVar31) * 4;
  uVar16 = uVar18 + 0xf;
  if (uVar16 <= uVar18) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_278 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
       0x144f2d95c;
  iVar12 = local_1b0;
  lVar8 = -(uVar16 & 0xfffffffffffffff0);
  iVar25 = local_190 - iStack_1ac;
  lVar27 = (longlong)&local_1b8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21;
  lVar19 = 0;
  if (iVar31 == 2) {
    lVar19 = local_f8 + lVar27;
  }
  *(undefined4 *)
   ((longlong)local_1d8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + 0x10) =
       *(undefined4 *)((longlong)plVar11 + 0x24);
  *(int *)((longlong)local_1d8 +
          lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + 8) = (int)plVar11[5];
  *(undefined4 *)
   ((longlong)local_1d8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = 0;
  iVar31 = local_178;
  *(longlong *)
   ((longlong)&local_1e0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       (longlong)plVar11 + 0x2c;
  *(int *)((longlong)local_1f0 +
          lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + 8) = iVar31;
  *(int *)((longlong)local_1f0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       iVar37;
  *(undefined1 **)
   ((longlong)&local_1f8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       param_6;
  *(undefined4 *)
   ((longlong)&uStack_200 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       local_140;
  lVar9 = local_a0;
  *(int *)((longlong)aiStack_208 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = iVar25;
  iVar31 = iStack_1b4;
  *(longlong *)
   ((longlong)&lStack_210 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       lVar9;
  *(undefined4 *)
   ((longlong)&lStack_218 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       local_168;
  *(undefined4 *)
   ((longlong)&lStack_220 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       local_164;
  *(undefined4 *)
   ((longlong)&lStack_228 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       local_160;
  *(uint *)((longlong)auStack_230 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21
           ) = local_13c;
  *(longlong *)
   ((longlong)&lStack_238 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       local_170;
  *(undefined8 *)
   ((longlong)&local_240 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = 0;
  *(longlong *)
   ((longlong)&local_248 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       lVar29;
  *(longlong *)
   ((longlong)&local_250 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       lVar19;
  *(longlong *)
   ((longlong)&local_258 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       lVar27;
  *(undefined8 *)
   (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
       0x144f2da29;
  FUN_1452eacc0(0,lVar20,iVar31,iVar12);
  if (iStack_1ac != 0) {
    *(undefined8 *)
     (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
         0x144f2da3c;
    local_150 = FUN_144f2f70c(param_6,1);
  }
  uVar16 = local_118;
  pfVar15 = local_198;
  iVar31 = local_1b0;
  iVar12 = 0x1f;
  if (*(uint *)(param_6 + 0x20) != 0) {
    for (; *(uint *)(param_6 + 0x20) >> iVar12 == 0; iVar12 = iVar12 + -1) {
    }
  }
  iVar25 = iStack_19c - *(int *)(param_6 + 0x18);
  *(int *)((longlong)&lStack_238 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = local_1b8;
  *(undefined1 **)
   ((longlong)&local_240 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       param_6;
  *(int *)((longlong)&local_248 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = iVar12 + iVar25 + 1;
  iVar12 = iStack_1b4;
  *(ulonglong *)
   ((longlong)&local_250 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       uVar16;
  *(longlong *)
   ((longlong)&local_258 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       local_158;
  *(undefined8 *)
   (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
       0x144f2da85;
  FUN_1452ee80c(lVar20,iVar12,iVar31,pfVar15);
  if (local_150 != 0) {
    *(int *)((longlong)&lStack_210 +
            lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = (int)plVar11[5];
    *(undefined4 *)
     ((longlong)&lStack_218 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
         *(undefined4 *)((longlong)plVar11 + 0x2c);
    *(longlong *)
     ((longlong)&lStack_220 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
         local_170;
    *(float **)
     ((longlong)&lStack_228 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
         local_148;
    *(float **)
     ((longlong)auStack_230 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
         local_120;
    *(float **)
     ((longlong)&lStack_238 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
         local_198;
    *(int *)((longlong)&local_240 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21
            ) = local_1b0;
    *(int *)((longlong)&local_248 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21
            ) = iStack_1b4;
    *(int *)((longlong)&local_250 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21
            ) = iStack_1a4;
    *(int *)((longlong)&local_258 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21
            ) = local_1b8;
    *(undefined8 *)
     (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
         0x144f2daed;
    FUN_1452ebc1c(lVar20,lVar27,lVar29,iVar37);
  }
  iVar12 = iStack_18c;
  pfVar15 = local_198;
  if ((iStack_18c != 0) && (pfVar28 = local_198, 0 < local_1a0)) {
    for (; uVar38 != 0; uVar38 = uVar38 - 1) {
      *pfVar28 = -28.0;
      pfVar28 = pfVar28 + 1;
    }
  }
  *(int *)((longlong)&lStack_218 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = (int)plVar11[5];
  uVar13 = *(undefined4 *)((longlong)plVar11 + 0x14);
  *(int *)((longlong)&lStack_220 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = iVar12;
  *(undefined4 *)
   ((longlong)&lStack_228 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       uVar13;
  iVar12 = local_1a8;
  *(int *)((longlong)auStack_230 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = iVar37;
  *(int *)((longlong)&lStack_238 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = iVar12;
  *(int *)((longlong)&local_240 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = local_17c;
  *(int *)((longlong)&local_248 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = local_1b8;
  *(int *)((longlong)&local_250 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = local_138;
  *(int *)((longlong)&local_258 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = iStack_1b4;
  *(undefined8 *)
   (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
       0x144f2db5d;
  FUN_144f2e420(lVar20,lVar27,local_c0,pfVar15);
  uVar13 = local_180;
  iVar12 = iStack_1a4;
  lVar29 = 0;
  do {
    lVar27 = plVar11[9];
    uVar34 = 0xf;
    if (0xf < (int)plVar11[8]) {
      uVar34 = (int)plVar11[8];
    }
    lVar19 = local_c0[lVar29];
    uVar1 = *(undefined4 *)((longlong)plVar11 + 0x4c);
    uVar32 = 0xf;
    if (0xf < *(int *)((longlong)plVar11 + 0x44)) {
      uVar32 = *(undefined4 *)((longlong)plVar11 + 0x44);
    }
    *(int *)((longlong)&lStack_220 +
            lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = (int)plVar11[5];
    *(int *)((longlong)&lStack_228 +
            lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = local_188;
    *(undefined8 *)
     ((longlong)auStack_230 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
         *(undefined8 *)(lVar20 + 0x48);
    *(int *)((longlong)&lStack_238 +
            lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = (int)plVar11[10];
    *(undefined4 *)
     ((longlong)&local_240 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
         *(undefined4 *)((longlong)plVar11 + 0x54);
    uVar2 = *(undefined4 *)(lVar20 + 0x30);
    *(int *)((longlong)&local_248 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21
            ) = (int)lVar27;
    *(undefined4 *)
     ((longlong)&local_250 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
         uVar1;
    *(undefined4 *)
     ((longlong)&local_258 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
         uVar2;
    *(undefined4 *)(plVar11 + 8) = uVar34;
    *(undefined4 *)((longlong)plVar11 + 0x44) = uVar32;
    *(undefined8 *)
     (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
         0x144f2dbe4;
    FUN_144bca9f0(lVar19,lVar19);
    iVar31 = local_184;
    if (iVar37 != 0) {
      iVar25 = *(int *)(lVar20 + 0x30);
      lVar27 = plVar11[9];
      lVar9 = plVar11[8];
      lVar19 = lVar19 + (longlong)*(int *)(lVar20 + 0x30) * 4;
      *(int *)((longlong)&lStack_220 +
              lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = (int)plVar11[5];
      *(int *)((longlong)&lStack_228 +
              lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = local_188;
      *(undefined8 *)
       ((longlong)auStack_230 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
           *(undefined8 *)(lVar20 + 0x48);
      lVar10 = plVar11[10];
      *(undefined4 *)
       ((longlong)&lStack_238 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
           uVar13;
      *(int *)((longlong)&local_240 +
              lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = (int)lVar10;
      *(float *)((longlong)&local_248 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = fVar40;
      *(int *)((longlong)&local_250 +
              lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = (int)lVar27;
      *(int *)((longlong)&local_258 +
              lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) = iVar12 - iVar25;
      *(undefined8 *)
       (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
           0x144f2dc45;
      FUN_144bca9f0(lVar19,lVar19,(int)lVar9,iVar31);
    }
    lVar27 = local_128;
    pfVar15 = local_198;
    lVar29 = lVar29 + 1;
  } while (lVar29 < local_130);
  *(int *)((longlong)plVar11 + 0x44) = (int)plVar11[8];
  *(int *)((longlong)plVar11 + 0x4c) = (int)plVar11[9];
  lVar20 = plVar11[10];
  *(undefined4 *)(plVar11 + 10) = uVar13;
  *(float *)(plVar11 + 9) = fVar40;
  *(int *)((longlong)plVar11 + 0x54) = (int)lVar20;
  *(int *)(plVar11 + 8) = iVar31;
  if (iVar37 != 0) {
    *(undefined4 *)((longlong)plVar11 + 0x54) = local_180;
    *(float *)((longlong)plVar11 + 0x4c) = fVar40;
    *(int *)((longlong)plVar11 + 0x44) = iVar31;
  }
  if (local_1b8 == 1) {
    sVar33 = local_128 * 4;
    pfVar28 = local_198 + local_128;
    *(undefined8 *)
     (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
         0x144f2dcb8;
    memcpy(pfVar28,pfVar15,sVar33);
  }
  sVar33 = local_e8;
  pfVar28 = local_148;
  pfVar22 = pfVar28;
  if (local_1a8 == 0) {
    pvVar3 = (void *)(local_e8 + (longlong)pfVar15);
    *(undefined8 *)
     (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
         0x144f2dcd8;
    memcpy(pfVar28,pvVar3,sVar33);
    *(undefined8 *)
     (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
         0x144f2dce7;
    memcpy((void *)(sVar33 + (longlong)pfVar15),pfVar15,sVar33);
    if ((int)plVar11[7] < 10) {
      fVar40 = (float)(int)uStack_15c * 0.001;
    }
    else {
      fVar40 = 1.0;
    }
    if (0 < local_f0) {
      lVar20 = 0;
      do {
        lVar29 = lVar20 + local_f0;
        fVar39 = fVar40 + pfVar28[lVar29];
        if (pfVar15[lVar20] <= fVar40 + pfVar28[lVar29]) {
          fVar39 = pfVar15[lVar20];
        }
        lVar20 = lVar20 + 1;
        pfVar28[lVar29] = fVar39;
      } while (lVar20 < local_f0);
    }
  }
  else {
    pfVar17 = local_120;
    lVar20 = local_f0;
    if (0 < local_f0) {
      do {
        fVar40 = *pfVar17;
        if (*(float *)((longlong)pfVar17 - local_e8) <= *pfVar17) {
          fVar40 = *(float *)((longlong)pfVar17 - local_e8);
        }
        *pfVar17 = fVar40;
        lVar20 = lVar20 + -1;
        pfVar17 = pfVar17 + 1;
      } while (lVar20 != 0);
    }
  }
  do {
    iVar31 = local_17c;
    iVar12 = iStack_1a4;
    if (0 < local_98) {
      pfVar17 = pfVar22;
      lVar20 = local_98;
      do {
        *(undefined4 *)(((longlong)pfVar15 - (longlong)pfVar28) + (longlong)pfVar17) = 0;
        *pfVar17 = -28.0;
        *(undefined4 *)(((longlong)local_120 - (longlong)pfVar28) + (longlong)pfVar17) = 0xc1e00000;
        pfVar17 = pfVar17 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    if (local_e0 < lVar27) {
      pfVar17 = pfVar22 + local_e0;
      lVar20 = lVar27 - local_e0;
      do {
        *(undefined4 *)((longlong)pfVar17 + ((longlong)pfVar15 - (longlong)pfVar28)) = 0;
        *pfVar17 = -28.0;
        *(undefined4 *)((longlong)pfVar17 + ((longlong)local_120 - (longlong)pfVar28)) = 0xc1e00000;
        pfVar17 = pfVar17 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    local_d8 = local_d8 + -1;
    pfVar22 = pfVar22 + lVar27;
  } while (local_d8 != 0);
  lVar20 = local_d0 + 0x10;
  *(undefined4 *)((longlong)plVar11 + 0x2c) = *(undefined4 *)(param_6 + 0x20);
  *(int *)((longlong)&local_240 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21)
       = param_7;
  uVar13 = *(undefined4 *)((longlong)plVar11 + 0x14);
  *(longlong **)
   ((longlong)&local_248 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       plVar11 + 0xb;
  *(longlong *)
   ((longlong)&local_250 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       lVar20;
  lVar20 = local_c8;
  *(undefined4 *)
   ((longlong)&local_258 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21) =
       uVar13;
  *(undefined8 *)
   (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21 + -8) =
       0x144f2de53;
  FUN_144f2e1a0(local_c0,lVar20,iVar12,iVar31);
  iVar12 = 0x1f;
  if (*(uint *)(param_6 + 0x20) != 0) {
    for (; *(uint *)(param_6 + 0x20) >> iVar12 == 0; iVar12 = iVar12 + -1) {
    }
  }
  iVar31 = *(int *)(param_6 + 0x18);
  *(undefined4 *)(plVar11 + 7) = 0;
  puVar24 = auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21;
  if (((iVar31 - iVar12) + -1 <= iStack_19c) &&
     (puVar24 = auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21,
     *(int *)(param_6 + 0x30) != 0)) {
    *(undefined4 *)(plVar11 + 6) = 1;
    puVar24 = auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar35 + lVar14 + lVar4 + lVar21;
  }
LAB_144f2ded7:
  uVar16 = local_48 ^ (ulonglong)&local_1b8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar24 + -8) = &UNK_144f2dee6;
  FUN_144d8e3a0(uVar16);
}



// FUNCTION 144f2df14 FUN_144f2df14 body=649 status=ok
// SIG undefined FUN_144f2df14(void)

void FUN_144f2df14(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = FUN_1452e8898(48000,0x3c0,0);
  if (*param_1 != lVar2) {
    FUN_144bca940("assertion failed: st->mode == opus_custom_mode_create(48000, 960, NULL)",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x76);
  }
  if ((int)param_1[1] != 0x78) {
    FUN_144bca940("assertion failed: st->overlap == 120",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x77);
  }
  if (1 < *(int *)((longlong)param_1 + 0xc) - 1U) {
    FUN_144bca940("assertion failed: st->channels == 1 || st->channels == 2",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x79);
  }
  if (1 < (int)param_1[2] - 1U) {
    FUN_144bca940("assertion failed: st->stream_channels == 1 || st->stream_channels == 2",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x7a);
  }
  if (*(int *)((longlong)param_1 + 0x14) < 1) {
    FUN_144bca940("assertion failed: st->downsample > 0",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x7b);
  }
  iVar3 = (int)param_1[3];
  if ((iVar3 != 0) && (iVar3 != 0x11)) {
    FUN_144bca940("assertion failed: st->start == 0 || st->start == 17",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x7c);
    iVar3 = (int)param_1[3];
  }
  iVar1 = *(int *)((longlong)param_1 + 0x1c);
  if (iVar1 <= iVar3) {
    FUN_144bca940("assertion failed: st->start < st->end",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x7d);
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
  }
  if (0x15 < iVar1) {
    FUN_144bca940("assertion failed: st->end <= 21",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x7e);
  }
  iVar3 = (int)param_1[5];
  if (iVar3 < 0) {
    FUN_144bca940("assertion failed: st->arch >= 0",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x80);
    iVar3 = (int)param_1[5];
  }
  if (7 < iVar3) {
    FUN_144bca940("assertion failed: st->arch <= OPUS_ARCHMASK",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x81);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if (0x2d0 < iVar3) {
    FUN_144bca940("assertion failed: st->last_pitch_index <= PLC_PITCH_LAG_MAX",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x83);
    iVar3 = *(int *)((longlong)param_1 + 0x34);
  }
  if ((iVar3 < 100) && (iVar3 != 0)) {
    FUN_144bca940("assertion failed: st->last_pitch_index >= PLC_PITCH_LAG_MIN || st->last_pitch_index == 0"
                  ,"../../../third_party/opus/src/celt/celt_decoder.c",0x84);
  }
  iVar3 = (int)param_1[8];
  if (0x3ff < iVar3) {
    FUN_144bca940("assertion failed: st->postfilter_period < MAX_PERIOD",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x85);
    iVar3 = (int)param_1[8];
  }
  if ((iVar3 < 0xf) && (iVar3 != 0)) {
    FUN_144bca940("assertion failed: st->postfilter_period >= COMBFILTER_MINPERIOD || st->postfilter_period == 0"
                  ,"../../../third_party/opus/src/celt/celt_decoder.c",0x86);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x44);
  if (0x3ff < iVar3) {
    FUN_144bca940("assertion failed: st->postfilter_period_old < MAX_PERIOD",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x87);
    iVar3 = *(int *)((longlong)param_1 + 0x44);
  }
  if ((iVar3 < 0xf) && (iVar3 != 0)) {
    FUN_144bca940("assertion failed: st->postfilter_period_old >= COMBFILTER_MINPERIOD || st->postfilter_period_old == 0"
                  ,"../../../third_party/opus/src/celt/celt_decoder.c",0x88);
  }
  iVar3 = (int)param_1[10];
  if (2 < iVar3) {
    FUN_144bca940("assertion failed: st->postfilter_tapset <= 2",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x89);
    iVar3 = (int)param_1[10];
  }
  if (iVar3 < 0) {
    FUN_144bca940("assertion failed: st->postfilter_tapset >= 0",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x8a);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x54);
  if (2 < iVar3) {
    FUN_144bca940("assertion failed: st->postfilter_tapset_old <= 2",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x8b);
    iVar3 = *(int *)((longlong)param_1 + 0x54);
  }
  if (iVar3 < 0) {
    FUN_144bca940("assertion failed: st->postfilter_tapset_old >= 0",
                  "../../../third_party/opus/src/celt/celt_decoder.c",0x8c);
  }
  return;
}



// FUNCTION 144f2e1a0 FUN_144f2e1a0 body=611 status=ok
// SIG undefined FUN_144f2e1a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f2e1a0(longlong *param_1,longlong param_2,uint param_3,int param_4,int param_5,
                  float *param_6,float *param_7,int param_8)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_58 [32];
  float local_38 [2];
  longlong local_30;
  float *local_28;
  ulonglong local_20;
  
  puVar8 = auStack_58;
  local_20 = DAT_14c707940 ^ (ulonglong)local_38;
  lVar7 = 0;
  lVar10 = (longlong)param_4;
  lVar9 = (longlong)(int)param_3;
  local_30 = param_2;
  if ((param_5 == 1) && (param_4 == 2)) {
    if (param_8 == 0) {
      pfVar4 = (float *)param_1[1];
      fVar1 = *param_6;
      fVar14 = *param_7;
      fVar15 = param_7[1];
      if (0 < (int)param_3) {
        lVar10 = *param_1 - (longlong)pfVar4;
        do {
          pfVar3 = (float *)(lVar10 + (longlong)pfVar4);
          fVar12 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          fVar13 = *pfVar3 + 1e-30 + fVar14;
          fVar12 = fVar12 + 1e-30 + fVar15;
          fVar14 = fVar13 * fVar1;
          *(float *)(param_2 + lVar7 * 8) = fVar13 * 3.0517578e-05;
          fVar15 = fVar12 * fVar1;
          *(float *)(param_2 + 4 + lVar7 * 8) = fVar12 * 3.0517578e-05;
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar9);
      }
      *param_7 = fVar14;
      param_7[1] = fVar15;
      goto LAB_144f2e3f7;
    }
LAB_144f2e290:
    FUN_144bca940("assertion failed: accum==0","../../../third_party/opus/src/celt/celt_decoder.c",
                  0x117);
  }
  else if (param_8 != 0) goto LAB_144f2e290;
  uVar5 = lVar9 * 4 + 0xf;
  if (uVar5 <= (ulonglong)(lVar9 * 4)) {
    uVar5 = 0xffffffffffffff0;
  }
  puVar8 = auStack_58 + -(uVar5 & 0xfffffffffffffff0);
  fVar1 = *param_6;
  local_28 = (float *)((longlong)local_38 + -(uVar5 & 0xfffffffffffffff0));
  uVar5 = (longlong)(int)param_3 / (longlong)param_5 & 0xffffffff;
  local_38[0] = (float)((longlong)(int)param_3 / (longlong)param_5);
  local_30 = local_30 - (longlong)param_7;
  lVar11 = lVar7;
  do {
    pfVar4 = (float *)(local_30 + (longlong)param_7);
    fVar14 = *param_7;
    pfVar3 = (float *)param_1[lVar7];
    fVar15 = (float)uVar5;
    if (param_5 < 2) {
      pfVar6 = pfVar4;
      uVar5 = (ulonglong)param_3;
      if (0 < (int)param_3) {
        do {
          fVar15 = *pfVar3;
          pfVar3 = pfVar3 + 1;
          fVar15 = fVar15 + 1e-30 + fVar14;
          fVar14 = fVar15 * fVar1;
          *pfVar6 = fVar15 * 3.0517578e-05;
          uVar5 = uVar5 - 1;
          pfVar6 = pfVar6 + lVar10;
          fVar15 = local_38[0];
        } while (uVar5 != 0);
      }
      *param_7 = fVar14;
      if ((int)lVar11 != 0) goto LAB_144f2e3a8;
    }
    else {
      if (0 < (int)param_3) {
        lVar2 = (longlong)pfVar3 - (longlong)local_28;
        pfVar3 = local_28;
        lVar11 = lVar9;
        do {
          fVar14 = *(float *)(lVar2 + (longlong)pfVar3) + 1e-30 + fVar14;
          *pfVar3 = fVar14;
          pfVar3 = pfVar3 + 1;
          fVar14 = fVar14 * fVar1;
          lVar11 = lVar11 + -1;
          fVar15 = local_38[0];
        } while (lVar11 != 0);
      }
      *param_7 = fVar14;
      lVar11 = 1;
LAB_144f2e3a8:
      if (0 < (int)fVar15) {
        uVar5 = (ulonglong)(uint)local_38[0];
        pfVar3 = local_28;
        do {
          fVar14 = *pfVar3;
          pfVar3 = pfVar3 + param_5;
          *pfVar4 = fVar14 * 3.0517578e-05;
          pfVar4 = pfVar4 + lVar10;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    lVar7 = lVar7 + 1;
    param_7 = param_7 + 1;
    uVar5 = (ulonglong)(uint)local_38[0];
  } while (lVar7 < lVar10);
LAB_144f2e3f7:
  uVar5 = local_20 ^ (ulonglong)local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar8 + -8) = &UNK_144f2e403;
  FUN_144d8e3a0(uVar5);
}



// FUNCTION 144f2e420 FUN_144f2e420 body=1101 status=ok
// SIG undefined FUN_144f2e420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f2e420(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,int param_7,int param_8,int param_9,
                  int param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  size_t _Size;
  int iVar16;
  int iVar17;
  float *_Src;
  float *pfVar18;
  void *_Dst;
  undefined8 auStack_d0 [5];
  int aiStack_a8 [12];
  float local_78;
  int local_74;
  int local_70;
  float local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  longlong local_50;
  float *local_48;
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&local_78;
  local_68 = *(int *)(param_1 + 8);
  iVar14 = *(int *)(param_1 + 4);
  bVar3 = (byte)param_10 & 0x1f;
  fVar13 = (float)((int)*(float *)(param_1 + 0x30) << bVar3);
  _Size = (longlong)(int)fVar13 * 4;
  uVar8 = _Size + 0xf;
  if (uVar8 <= _Size) {
    uVar8 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x144f2e4b0;
  lVar4 = -(uVar8 & 0xfffffffffffffff0);
  iVar16 = 1 << ((byte)param_10 & 0x1f);
  _Src = (float *)((longlong)&local_78 + lVar4);
  iVar17 = 1;
  if (param_9 != 0) {
    iVar17 = iVar16;
  }
  fVar5 = *(float *)(param_1 + 0x30);
  local_70 = *(int *)(param_1 + 0x28);
  if (param_9 == 0) {
    fVar5 = fVar13;
    local_70 = *(int *)(param_1 + 0x28) - param_10;
  }
  local_78 = fVar5;
  local_74 = iVar14;
  local_6c = fVar13;
  local_5c = iVar16;
  local_58 = param_4;
  local_50 = param_2;
  local_48 = _Src;
  local_40 = param_3;
  if (param_8 == 2) {
    if (param_7 == 1) {
      *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x20) = param_12;
      *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_11;
      *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar16;
      *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 8) = param_6;
      *(undefined4 *)((longlong)aiStack_a8 + lVar4) = param_5;
      *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x144f2e551;
      FUN_1452ea764(param_1,param_2,_Src,param_4);
      _Dst = (void *)(param_3[1] + (longlong)(local_74 / 2) * 4);
      *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x144f2e572;
      memcpy(_Dst,_Src,_Size);
      fVar13 = local_78;
      iVar14 = 0 << bVar3;
      if (0 < iVar17) {
        do {
          uVar2 = *(undefined8 *)(param_1 + 0x48);
          lVar11 = *param_3;
          *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_13;
          iVar16 = local_70;
          *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar17;
          *(int *)((longlong)aiStack_a8 + lVar4 + 8) = iVar16;
          *(int *)((longlong)aiStack_a8 + lVar4) = local_74;
          *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x144f2e5b8;
          FUN_1452e8620(param_1 + 0x50,_Dst,lVar11 + (longlong)((int)fVar13 * iVar14) * 4,uVar2);
          iVar14 = iVar14 + 1;
          _Dst = (void *)((longlong)_Dst + 4);
        } while (iVar14 < iVar17);
      }
      iVar14 = 0;
      if (0 < iVar17) {
        do {
          uVar2 = *(undefined8 *)(param_1 + 0x48);
          lVar11 = param_3[1];
          *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_13;
          iVar16 = local_70;
          *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar17;
          *(int *)((longlong)aiStack_a8 + lVar4 + 8) = iVar16;
          *(int *)((longlong)aiStack_a8 + lVar4) = local_74;
          *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x144f2e60b;
          FUN_1452e8620(param_1 + 0x50,_Src,lVar11 + (longlong)((int)fVar13 * iVar14) * 4,uVar2);
          iVar14 = iVar14 + 1;
          _Src = _Src + 1;
        } while (iVar14 < iVar17);
      }
      goto LAB_144f2e850;
    }
  }
  else if ((param_8 == 1) && (param_7 == 2)) {
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x20) = param_12;
    lVar11 = *param_3;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_11;
    *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar16;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 8) = param_6;
    lVar1 = local_50;
    local_48 = (float *)(lVar11 + (longlong)(iVar14 / 2) * 4);
    *(undefined4 *)((longlong)aiStack_a8 + lVar4) = param_5;
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x144f2e68c;
    FUN_1452ea764(param_1,lVar1,_Src,param_4);
    lVar1 = local_50;
    lVar11 = local_58;
    lVar9 = (longlong)local_68;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x20) = param_12;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_11;
    lVar12 = (longlong)(int)local_6c;
    *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = local_5c;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 8) = param_6;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4) = param_5;
    pfVar18 = local_48;
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x144f2e6cb;
    FUN_1452ea764(param_1,lVar1 + lVar12 * 4,pfVar18,lVar11 + lVar9 * 4);
    lVar11 = (longlong)(int)local_6c;
    if (0 < (int)local_6c) {
      pfVar10 = _Src;
      do {
        *pfVar10 = *(float *)(((longlong)pfVar18 - (longlong)_Src) + (longlong)pfVar10) * 0.5 +
                   *pfVar10 * 0.5;
        pfVar10 = pfVar10 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    plVar7 = local_40;
    fVar13 = local_78;
    iVar14 = 0;
    if (0 < iVar17) {
      do {
        uVar2 = *(undefined8 *)(param_1 + 0x48);
        lVar11 = *plVar7;
        *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_13;
        iVar16 = local_70;
        *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar17;
        *(int *)((longlong)aiStack_a8 + lVar4 + 8) = iVar16;
        *(int *)((longlong)aiStack_a8 + lVar4) = local_74;
        *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x144f2e755;
        FUN_1452e8620(param_1 + 0x50,_Src,lVar11 + (longlong)((int)fVar13 * iVar14) * 4,uVar2);
        iVar14 = iVar14 + 1;
        _Src = _Src + 1;
      } while (iVar14 < iVar17);
    }
    goto LAB_144f2e850;
  }
  local_78 = 0.0;
  local_64 = 0;
  local_60 = 0;
  do {
    iVar14 = local_5c;
    fVar15 = local_78;
    lVar11 = local_58 + (longlong)local_64 * 4;
    lVar1 = local_50 + (longlong)local_60 * 4;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x20) = param_12;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_11;
    *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar14;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 8) = param_6;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4) = param_5;
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x144f2e7c1;
    FUN_1452ea764(param_1,lVar1,_Src,lVar11);
    iVar14 = local_74;
    local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
    plVar7 = local_40;
    pfVar18 = _Src;
    if (0 < iVar17) {
      local_40._0_4_ = 0;
      iVar16 = (int)local_40;
      local_40 = plVar7;
      do {
        uVar2 = *(undefined8 *)(param_1 + 0x48);
        lVar11 = *param_3;
        *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_13;
        iVar6 = local_70;
        *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar17;
        *(int *)((longlong)aiStack_a8 + lVar4 + 8) = iVar6;
        *(int *)((longlong)aiStack_a8 + lVar4) = iVar14;
        *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x144f2e80d;
        FUN_1452e8620(param_1 + 0x50,_Src,lVar11 + (longlong)((int)fVar5 * iVar16) * 4,uVar2);
        iVar16 = iVar16 + 1;
        _Src = _Src + 1;
        pfVar18 = local_48;
        fVar13 = local_6c;
        fVar15 = local_78;
      } while (iVar16 < iVar17);
    }
    local_78 = (float)((int)fVar15 + 1);
    param_3 = param_3 + 1;
    local_64 = local_64 + local_68;
    local_60 = local_60 + (int)fVar13;
    _Src = pfVar18;
  } while ((int)local_78 < param_8);
LAB_144f2e850:
  lVar11 = 0;
  do {
    lVar11 = lVar11 + 1;
  } while (lVar11 < param_8);
  uVar8 = local_30 ^ (ulonglong)&local_78;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_d0 + lVar4) = &UNK_144f2e86d;
  FUN_144d8e3a0(uVar8);
}



// FUNCTION 144f2e890 FUN_144f2e890 body=370 status=ok
// SIG undefined FUN_144f2e890(void)

void FUN_144f2e890(int param_1,int param_2,int param_3,longlong param_4,int param_5,longlong param_6
                  )

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint local_res8;
  
  lVar8 = (longlong)param_2;
  lVar4 = (longlong)param_1;
  iVar7 = 0x1f;
  if (*(uint *)(param_6 + 0x20) != 0) {
    for (; *(uint *)(param_6 + 0x20) >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  iVar7 = *(int *)(param_6 + 0x18) - iVar7;
  uVar5 = *(int *)(param_6 + 8) * 8;
  iVar6 = iVar7 + -1;
  uVar1 = 0;
  iVar2 = (-(uint)(param_3 != 0) & 0xfffffffe) + 4;
  if ((param_5 < 1) || (uVar10 = 1, uVar5 < (uint)(iVar7 + iVar2))) {
    uVar10 = 0;
  }
  local_res8 = 0;
  uVar3 = 0;
  if (lVar4 < lVar8) {
    lVar9 = lVar4;
    uVar3 = uVar1;
    do {
      if ((uint)(iVar2 + iVar6) <= uVar5 - uVar10) {
        uVar1 = FUN_144f2f528(param_6);
        uVar1 = local_res8 ^ uVar1;
        iVar7 = 0x1f;
        if (*(uint *)(param_6 + 0x20) != 0) {
          for (; *(uint *)(param_6 + 0x20) >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar6 = (*(int *)(param_6 + 0x18) - iVar7) + -1;
        uVar3 = uVar3 | uVar1;
        local_res8 = uVar1;
      }
      *(uint *)(param_4 + lVar9 * 4) = uVar1;
      iVar2 = 5 - (uint)(param_3 != 0);
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar8);
  }
  uVar1 = 0;
  if ((uVar10 != 0) &&
     (lVar9 = (longlong)(int)(uVar3 + param_3 * 4) + (longlong)param_5 * 8, uVar1 = 0,
     (&DAT_14997e9c8)[lVar9] != (&DAT_14997e9ca)[lVar9])) {
    uVar1 = FUN_144f2f528(param_6,1);
  }
  if (lVar4 < lVar8) {
    do {
      *(int *)(param_4 + lVar4 * 4) =
           (int)(char)(&DAT_14997e9c8)
                      [(longlong)(int)(*(int *)(param_4 + lVar4 * 4) + (uVar1 + param_3 * 2) * 2) +
                       (longlong)param_5 * 8];
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar8);
  }
  return;
}



// FUNCTION 144f2ea04 FUN_144f2ea04 body=136 status=ok
// SIG undefined FUN_144f2ea04(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f2ea04(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_1018 [1440];
  undefined1 local_a78 [2600];
  undefined8 uStack_50;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)local_18;
  uStack_50 = 0x144f2ea32;
  FUN_1452e895c(param_1,local_1018,0x800,param_2,param_3);
  FUN_1452e8c0c(local_a78,local_1018,0x530,0x26c,local_18,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)local_18);
}



// FUNCTION 144f2ea9c FUN_144f2ea9c body=2399 status=ok
// SIG undefined FUN_144f2ea9c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f2ea9c(size_t *param_1,int param_2,int param_3)

{
  float fVar1;
  size_t sVar2;
  void *pvVar3;
  byte bVar4;
  size_t sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  float *pfVar19;
  longlong lVar20;
  float *pfVar21;
  int iVar22;
  float *pfVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uStack_1290;
  undefined1 auStack_1288 [32];
  int aiStack_1268 [2];
  longlong lStack_1260;
  uint auStack_1258 [6];
  undefined8 local_1240;
  undefined4 local_1238 [8];
  undefined4 local_1218 [24];
  undefined1 auStack_11b8 [3976];
  undefined8 uStack_230;
  undefined1 auStack_228 [32];
  int aiStack_208 [20];
  int local_1b8;
  int local_1b4;
  int local_1b0;
  ulonglong local_1a8;
  int local_1a0;
  undefined1 *local_198;
  float *local_190;
  longlong local_188;
  ulonglong local_180;
  undefined1 *local_178;
  void *local_170;
  size_t *local_168;
  size_t local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  ulonglong local_120;
  longlong local_118 [4];
  float local_f8 [28];
  ulonglong local_88;
  
  local_88 = DAT_14c707940 ^ (ulonglong)&local_1b8;
  sVar2 = *param_1;
  uVar29 = *(uint *)((longlong)param_1 + 0xc);
  uVar28 = (ulonglong)param_2;
  lVar16 = 0;
  local_138 = (longlong)(int)uVar29;
  local_150 = *(longlong *)(sVar2 + 0x20);
  iVar8 = *(int *)(sVar2 + 4);
  lVar24 = (longlong)iVar8;
  local_1b8 = *(int *)(sVar2 + 8);
  local_128 = uVar28 * 4;
  local_148 = uVar28 * -4 + 0x2000;
  iVar22 = 0;
  local_178 = (undefined1 *)CONCAT44(local_178._4_4_,param_2);
  local_170 = (void *)CONCAT44(local_170._4_4_,uVar29);
  local_198 = (undefined1 *)CONCAT44(local_198._4_4_,iVar8);
  do {
    lVar9 = (longlong)iVar22;
    iVar22 = iVar22 + iVar8 + 0x800;
    lVar9 = (longlong)param_1 + (lVar9 + 0x18) * 4;
    local_118[lVar16 + 2] = lVar9;
    local_118[lVar16] = local_148 + lVar9;
    lVar16 = lVar16 + 1;
  } while (lVar16 < local_138);
  local_1a0 = (int)param_1[7];
  iVar22 = (int)param_1[3];
  lVar16 = (longlong)iVar22;
  local_190 = (float *)CONCAT44(local_190._4_4_,iVar22);
  local_130 = (longlong)param_1 + ((longlong)(int)((iVar8 + 0x800) * uVar29) + 0x18) * 4;
  local_158 = local_130 + (longlong)(int)(uVar29 * 0x18) * 4;
  local_140 = local_158 + (longlong)(local_1b8 * 2) * 0xc;
  local_1b0 = param_3;
  local_1a8 = uVar28;
  local_168 = param_1;
  local_160 = sVar2;
  if (((local_1a0 < 5) && (iVar22 == 0)) && (*(int *)((longlong)param_1 + 0x3c) == 0)) {
    fVar34 = 1.0;
    if (local_1a0 == 0) {
      uStack_230 = 0x144f2ec0a;
      iVar22 = FUN_144f2ea04(local_118 + 2,uVar29,(int)param_1[5]);
      *(int *)((longlong)param_1 + 0x34) = iVar22;
    }
    else {
      iVar22 = *(int *)((longlong)param_1 + 0x34);
      fVar34 = 0.8;
    }
    iVar15 = 0x400;
    if (iVar22 * 2 < 0x400) {
      iVar15 = iVar22 * 2;
    }
    uVar28 = lVar24 * 4 + 0xf;
    if (uVar28 <= (ulonglong)(lVar24 * 4)) {
      uVar28 = 0xffffffffffffff0;
    }
    uStack_230 = 0x144f2ec5d;
    lVar16 = -(uVar28 & 0xfffffffffffffff0);
    local_140 = (longlong)&local_1b8 + lVar16;
    local_1b4 = iVar15;
    *(undefined8 *)(auStack_228 + lVar16 + -8) = 0x144f2ec73;
    lVar9 = (longlong)iVar15;
    local_120 = lVar9 * 4;
    uVar28 = local_120 + 0xf;
    if (uVar28 <= local_120) {
      uVar28 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)&uStack_1290 + lVar16) = 0x144f2eca2;
    local_190 = *(float **)(sVar2 + 0x48);
    local_198 = auStack_11b8 + lVar16;
    lVar12 = -(uVar28 & 0xfffffffffffffff0);
    puVar18 = auStack_1288 + lVar12 + lVar16;
    local_118[0] = lVar9 >> 1;
    local_170 = (void *)((longlong)local_1218 + lVar12 + lVar16);
    local_180 = 0;
    local_158 = (longlong)iVar22;
    puVar13 = (undefined4 *)((longlong)local_1218 + lVar16);
    local_178 = local_198 + lVar9 * -4 + 0x1000;
    local_160 = (longlong)(0x800 - param_2) << 2;
    local_1b0 = param_2 + iVar8;
    lVar9 = (longlong)local_1b0;
    local_150 = 0x7ff - local_1a8;
    local_188 = (longlong)(iVar8 / 2);
    local_1b8 = 0;
    do {
      iVar22 = local_1b8;
      pvVar3 = (void *)local_118[local_180 + 2];
      fVar33 = 0.0;
      lVar20 = 0x418;
      do {
        *puVar13 = *(undefined4 *)
                    ((longlong)pvVar3 + (0x1000 - (longlong)local_198) + (longlong)puVar13);
        puVar13 = puVar13 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      if (local_1a0 == 0) {
        *(int *)((longlong)auStack_1258 + lVar12 + lVar16) = (int)param_1[5];
        *(undefined4 *)((longlong)&lStack_1260 + lVar12 + lVar16) = 0x400;
        *(undefined4 *)((longlong)aiStack_1268 + lVar12 + lVar16) = 0x18;
        *(undefined8 *)((longlong)&uStack_1290 + lVar12 + lVar16) = 0x144f2ed8c;
        FUN_1452ef348(local_198,local_f8,local_190,iVar8);
        pfVar19 = local_f8;
        local_f8[0] = local_f8[0] * 1.0001;
        iVar15 = 1;
        do {
          pfVar19 = pfVar19 + 1;
          iVar7 = iVar15 + 1;
          *pfVar19 = *pfVar19 - *pfVar19 * 6.400001e-05 * (float)iVar15 * (float)iVar15;
          iVar15 = iVar7;
        } while (iVar7 < 0x19);
        *(undefined8 *)((longlong)&uStack_1290 + lVar12 + lVar16) = 0x144f2ee01;
        FUN_1452eed10(local_130 + (longlong)iVar22 * 4,local_f8,0x18);
        iVar15 = local_1b4;
      }
      lVar20 = local_130 + (longlong)iVar22 * 4;
      *(int *)((longlong)&lStack_1260 + lVar12 + lVar16) = (int)param_1[5];
      *(undefined4 *)((longlong)aiStack_1268 + lVar12 + lVar16) = 0x18;
      *(undefined8 *)((longlong)&uStack_1290 + lVar12 + lVar16) = 0x144f2ee34;
      FUN_1452eee34(local_178,lVar20,local_170,iVar15);
      *(undefined8 *)((longlong)&uStack_1290 + lVar12 + lVar16) = 0x144f2ee48;
      memcpy(local_178,local_170,local_120);
      fVar31 = 1.0;
      fVar32 = 1.0;
      if (local_118[0] < 1) {
LAB_144f2ee97:
        fVar31 = fVar32;
        fVar32 = fVar31;
      }
      else {
        pfVar19 = (float *)(local_198 + (0x200 - local_118[0]) * 8);
        lVar10 = local_118[0];
        do {
          pfVar23 = pfVar19 + local_118[0];
          fVar1 = *pfVar19;
          pfVar19 = pfVar19 + 1;
          fVar31 = fVar31 + *pfVar23 * *pfVar23;
          fVar32 = fVar32 + fVar1 * fVar1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        if (fVar32 <= fVar31) goto LAB_144f2ee97;
      }
      *(undefined8 *)((longlong)&uStack_1290 + lVar12 + lVar16) = 0x144f2eeaa;
      dVar30 = sqrt((double)(fVar31 / fVar32));
      *(undefined8 *)((longlong)&uStack_1290 + lVar12 + lVar16) = 0x144f2eec7;
      memmove(pvVar3,(void *)(local_128 + (longlong)pvVar3),local_160);
      lVar10 = 0;
      fVar32 = (float)dVar30 * fVar34;
      if (0 < lVar9) {
        pfVar19 = (float *)(local_198 + (0x400 - local_158) * 4);
        pfVar23 = (float *)((longlong)pvVar3 + (0x800 - local_1a8) * 4);
        pfVar21 = (float *)((longlong)pvVar3 + ((0x800 - local_158) - local_1a8) * 4);
        lVar11 = lVar9;
        do {
          if (local_158 <= lVar10) {
            lVar10 = lVar10 - local_158;
            fVar32 = fVar32 * (float)dVar30;
            pfVar19 = pfVar19 + -local_158;
            pfVar21 = pfVar21 + -local_158;
          }
          lVar10 = lVar10 + 1;
          fVar31 = *pfVar19;
          pfVar19 = pfVar19 + 1;
          *pfVar23 = fVar32 * fVar31;
          pfVar23 = pfVar23 + 1;
          fVar31 = *pfVar21;
          pfVar21 = pfVar21 + 1;
          fVar33 = fVar33 + fVar31 * fVar31;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      lVar10 = 0;
      pfVar19 = (float *)((longlong)pvVar3 + local_150 * 4);
      do {
        fVar32 = *pfVar19;
        pfVar19 = pfVar19 + -1;
        local_f8[lVar10] = fVar32;
        lVar10 = lVar10 + 1;
      } while (lVar10 < 0x18);
      *(int *)((longlong)auStack_1258 + lVar12 + lVar16) = (int)param_1[5];
      *(float **)((longlong)&lStack_1260 + lVar12 + lVar16) = local_f8;
      *(undefined4 *)((longlong)aiStack_1268 + lVar12 + lVar16) = 0x18;
      *(undefined8 *)((longlong)&uStack_1290 + lVar12 + lVar16) = 0x144f2ef9f;
      FUN_1452eefe8(local_148 + (longlong)pvVar3,lVar20,local_148 + (longlong)pvVar3,local_1b0);
      uVar28 = local_1a8;
      fVar32 = 0.0;
      if (0 < lVar9) {
        pfVar19 = (float *)((longlong)pvVar3 + (0x800 - local_1a8) * 4);
        lVar20 = lVar9;
        do {
          fVar31 = *pfVar19;
          pfVar19 = pfVar19 + 1;
          fVar32 = fVar32 + fVar31 * fVar31;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (fVar32 * 0.2 < fVar33) {
        if (fVar33 < fVar32) {
          *(undefined8 *)((longlong)&uStack_1290 + lVar12 + lVar16) = 0x144f2f027;
          dVar30 = sqrt((double)((fVar33 + 1.0) / (fVar32 + 1.0)));
          if (0 < iVar8) {
            pfVar19 = (float *)((longlong)pvVar3 + (0x800 - uVar28) * 4);
            lVar20 = lVar24;
            do {
              *pfVar19 = (1.0 - (1.0 - (float)dVar30) *
                                *(float *)((longlong)local_190 +
                                           ((uVar28 * 4 + -0x2000) - (longlong)pvVar3) +
                                          (longlong)pfVar19)) * *pfVar19;
              pfVar19 = pfVar19 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          if (lVar24 < lVar9) {
            pfVar19 = (float *)((longlong)pvVar3 + ((lVar24 - uVar28) + 0x800) * 4);
            lVar20 = lVar9 - lVar24;
            do {
              *pfVar19 = (float)dVar30 * *pfVar19;
              pfVar19 = pfVar19 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
        }
      }
      else if (0 < lVar9) {
        *(undefined8 *)((longlong)&uStack_1290 + lVar12 + lVar16) = 0x144f2efff;
        memset((void *)((longlong)pvVar3 + (0x800 - local_1a8) * 4),0,lVar9 << 2);
      }
      lVar20 = local_140;
      sVar2 = param_1[10];
      uVar29 = (uint)param_1[9] ^ 0x80000000;
      sVar5 = param_1[8];
      *(int *)((longlong)local_1238 + lVar12 + lVar16 + 8) = (int)param_1[5];
      *(undefined4 *)((longlong)local_1238 + lVar12 + lVar16) = 0;
      *(undefined8 *)((longlong)&local_1240 + lVar12 + lVar16) = 0;
      *(int *)((longlong)auStack_1258 + lVar12 + lVar16 + 0x10) = (int)sVar2;
      *(int *)((longlong)auStack_1258 + lVar12 + lVar16 + 8) = (int)sVar2;
      *(uint *)((longlong)auStack_1258 + lVar12 + lVar16) = uVar29;
      *(uint *)((longlong)&lStack_1260 + lVar12 + lVar16) = uVar29;
      *(int *)((longlong)aiStack_1268 + lVar12 + lVar16) = iVar8;
      *(undefined8 *)((longlong)&uStack_1290 + lVar12 + lVar16) = 0x144f2f0fd;
      FUN_144bca9f0(local_140,(longlong)pvVar3 + 0x2000,(int)sVar5,(int)sVar5);
      lVar10 = 0;
      if (0 < local_188) {
        pfVar19 = local_190;
        do {
          lVar11 = lVar24 - lVar10;
          lVar10 = lVar10 + 1;
          *(float *)((longlong)pvVar3 + (0x2000 - (longlong)local_190) + (longlong)pfVar19) =
               local_190[lVar11 + -1] *
               *(float *)((lVar20 - (longlong)local_190) + (longlong)pfVar19) +
               *(float *)(lVar20 + -4 + lVar11 * 4) * *pfVar19;
          pfVar19 = pfVar19 + 1;
          param_1 = local_168;
        } while (lVar10 < local_188);
      }
      local_1b8 = local_1b8 + 0x18;
      local_180 = local_180 + 1;
      puVar13 = (undefined4 *)(local_198 + -0x60);
      iVar15 = local_1b4;
    } while ((longlong)local_180 < local_138);
  }
  else {
    iVar8 = *(int *)((longlong)param_1 + 0x1c);
    iVar15 = *(int *)(sVar2 + 0xc);
    iVar7 = iVar8;
    if (iVar15 <= iVar8) {
      iVar7 = iVar15;
    }
    if ((iVar22 <= iVar7) && (iVar22 = iVar15, iVar8 < iVar15)) {
      iVar22 = iVar8;
    }
    uVar14 = (longlong)(int)(param_2 * uVar29) * 4;
    uVar17 = uVar14 + 0xf;
    if (uVar17 <= uVar14) {
      uVar17 = 0xffffffffffffff0;
    }
    uStack_230 = 0x144f2f1d2;
    lVar24 = -(uVar17 & 0xfffffffffffffff0);
    puVar18 = auStack_228 + lVar24;
    local_188 = (longlong)&local_1b8 + lVar24;
    if (local_1a0 == 0) {
      fVar34 = 1.5;
    }
    else {
      fVar34 = 0.5;
    }
    iVar15 = 0;
    iVar7 = 0;
    do {
      if (lVar16 < iVar8) {
        pfVar19 = (float *)(local_158 + (iVar7 + lVar16) * 4);
        lVar9 = iVar8 - lVar16;
        do {
          fVar33 = *(float *)((local_140 - local_158) + (longlong)pfVar19);
          if (fVar33 <= *pfVar19 - fVar34) {
            fVar33 = *pfVar19 - fVar34;
          }
          *pfVar19 = fVar33;
          pfVar19 = pfVar19 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      iVar15 = iVar15 + 1;
      iVar7 = iVar7 + local_1b8;
    } while (iVar15 < (int)uVar29);
    local_1b8 = *(int *)((longlong)param_1 + 0x2c);
    local_148 = lVar16;
    iVar8 = local_1b8;
    if (0 < (int)uVar29) {
      local_1b4 = 0;
      local_180 = (ulonglong)uVar29;
      do {
        lVar9 = local_188;
        if (lVar16 < iVar22) {
          local_1a8 = CONCAT44(local_1a8._4_4_,(int)param_1[5]);
          iVar15 = local_1b4;
          do {
            iVar7 = (int)*(short *)(local_150 + lVar16 * 2);
            iVar26 = *(short *)(local_150 + 2 + lVar16 * 2) - iVar7;
            bVar4 = (byte)local_1b0 & 0x1f;
            iVar27 = iVar26 << bVar4;
            iVar25 = (iVar7 << ((byte)local_1b0 & 0x1f)) + iVar15;
            lVar12 = (longlong)iVar27;
            iVar7 = local_1b8;
            local_138 = lVar12;
            if (0 < iVar26 << bVar4) {
              pfVar19 = (float *)((longlong)iVar25 * 4 + lVar9);
              do {
                *(undefined8 *)(auStack_228 + lVar24 + -8) = 0x144f2f2d6;
                iVar8 = FUN_1452ebf1c(iVar8);
                *pfVar19 = (float)(iVar8 >> 0x14);
                pfVar19 = pfVar19 + 1;
                lVar12 = lVar12 + -1;
                iVar15 = local_1b4;
                iVar7 = iVar8;
              } while (lVar12 != 0);
            }
            local_1b8 = iVar7;
            uVar28 = local_1a8 & 0xffffffff;
            *(undefined8 *)(auStack_228 + lVar24 + -8) = 0x144f2f318;
            FUN_1452ef944((longlong)iVar25 * 4 + lVar9,iVar27,0x3f800000,uVar28);
            lVar16 = lVar16 + 1;
            iVar8 = local_1b8;
          } while (lVar16 < iVar22);
          uVar28 = (ulonglong)local_178 & 0xffffffff;
          param_1 = local_168;
          lVar16 = local_148;
        }
        param_2 = (int)uVar28;
        local_1b4 = local_1b4 + param_2;
        local_180 = local_180 - 1;
      } while (local_180 != 0);
      local_180 = 0;
      uVar29 = (uint)local_170;
    }
    lVar16 = local_128;
    lVar9 = 0;
    iVar15 = (int)local_198 >> 1;
    *(int *)((longlong)param_1 + 0x2c) = iVar8;
    do {
      pvVar3 = (void *)local_118[lVar9 + 2];
      *(undefined8 *)(auStack_228 + lVar24 + -8) = 0x144f2f38c;
      memmove(pvVar3,(void *)((longlong)pvVar3 + lVar16),(longlong)((iVar15 - param_2) + 0x800) << 2
             );
      lVar20 = local_158;
      sVar2 = local_160;
      param_1 = local_168;
      lVar12 = local_188;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uVar29);
    uVar6 = local_190._0_4_;
    *(int *)((longlong)aiStack_208 + lVar24 + 0x40) = (int)local_168[5];
    *(undefined4 *)((longlong)aiStack_208 + lVar24 + 0x38) = 0;
    *(undefined4 *)((longlong)aiStack_208 + lVar24 + 0x30) =
         *(undefined4 *)((longlong)param_1 + 0x14);
    *(int *)((longlong)aiStack_208 + lVar24 + 0x28) = local_1b0;
    *(undefined4 *)((longlong)aiStack_208 + lVar24 + 0x20) = 0;
    *(uint *)((longlong)aiStack_208 + lVar24 + 0x18) = uVar29;
    *(uint *)((longlong)aiStack_208 + lVar24 + 0x10) = uVar29;
    *(int *)((longlong)aiStack_208 + lVar24 + 8) = iVar22;
    *(undefined4 *)((longlong)aiStack_208 + lVar24) = uVar6;
    *(undefined8 *)(auStack_228 + lVar24 + -8) = 0x144f2f3e4;
    FUN_144f2e420(sVar2,lVar12,local_118,lVar20);
  }
  *(int *)(param_1 + 7) = local_1a0 + 1;
  uVar28 = local_88 ^ (ulonglong)&local_1b8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar18 + -8) = &UNK_144f2f3fb;
  FUN_144d8e3a0(uVar28);
}



// FUNCTION 144f2f434 FUN_144f2f434 body=77 status=ok
// SIG undefined FUN_144f2f434(void)

void FUN_144f2f434(undefined8 *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  uVar1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 9;
  *(undefined4 *)(param_1 + 4) = 0x80;
  if (param_3 != 0) {
    uVar1 = (uint)*param_2;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(uint *)((longlong)param_1 + 0x24) = 0x7f - (uVar1 >> 1);
  FUN_144f2f780();
  return;
}



// FUNCTION 144f2f484 FUN_144f2f484 body=56 status=ok
// SIG undefined FUN_144f2f484(void)

int FUN_144f2f484(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x20) / (ulonglong)param_2;
  *(int *)(param_1 + 0x28) = (int)uVar1;
  iVar2 = (int)(*(uint *)(param_1 + 0x24) / uVar1);
  return ((param_2 - (-(uint)(param_2 < iVar2 + 1U) & (param_2 - iVar2) - 1)) - iVar2) + -1;
}



// FUNCTION 144f2f4bc FUN_144f2f4bc body=64 status=ok
// SIG undefined FUN_144f2f4bc(void)

int FUN_144f2f4bc(longlong param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x20) >> (param_2 & 0x1f);
  *(uint *)(param_1 + 0x28) = uVar1;
  uVar1 = *(uint *)(param_1 + 0x24) / uVar1;
  uVar2 = 1 << (param_2 & 0x1f);
  return ((uVar2 - (-(uint)(uVar2 < uVar1 + 1) & (uVar2 - uVar1) - 1)) - uVar1) + -1;
}



// FUNCTION 144f2f4fc FUN_144f2f4fc body=41 status=ok
// SIG undefined FUN_144f2f4fc(void)

void FUN_144f2f4fc(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (param_4 - param_3) * *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar1;
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x20) - iVar1;
  }
  else {
    iVar1 = (param_3 - param_2) * *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_144f2f780();
  return;
}



// FUNCTION 144f2f528 FUN_144f2f528 body=73 status=ok
// SIG undefined FUN_144f2f528(void)

bool FUN_144f2f528(longlong param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar3 = *(uint *)(param_1 + 0x20) >> (param_2 & 0x1f);
  if (uVar1 >= uVar3) {
    *(uint *)(param_1 + 0x24) = uVar1 - uVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x20) - uVar3;
  if (uVar1 < uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  FUN_144f2f780(param_1);
  return uVar1 < uVar3;
}



// FUNCTION 144f2f574 FUN_144f2f574 body=79 status=ok
// SIG undefined FUN_144f2f574(void)

int FUN_144f2f574(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = -1;
  pbVar3 = (byte *)(param_2 + -1);
  uVar2 = *(uint *)(param_1 + 0x20);
  do {
    uVar1 = uVar2;
    pbVar3 = pbVar3 + 1;
    iVar4 = iVar4 + 1;
    uVar2 = (uint)*pbVar3 * (*(uint *)(param_1 + 0x20) >> (param_3 & 0x1f));
  } while (*(uint *)(param_1 + 0x24) < uVar2);
  *(uint *)(param_1 + 0x20) = uVar1 - uVar2;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) - uVar2;
  FUN_144f2f780(param_1);
  return iVar4;
}



// FUNCTION 144f2f5c4 FUN_144f2f5c4 body=325 status=ok
// SIG undefined FUN_144f2f5c4(void)

uint FUN_144f2f5c4(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (param_2 < 2) {
    FUN_144bca940("assertion failed: _ft>1","../../../third_party/opus/src/celt/entdec.c",0xcb);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar7 = param_2 - 1;
  uVar2 = *(uint *)(param_1 + 0x24);
  iVar3 = 0x1f;
  if (uVar7 != 0) {
    for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  if (iVar3 + 1 < 9) {
    iVar3 = (int)((ulonglong)uVar1 / (ulonglong)param_2);
    *(int *)(param_1 + 0x28) = iVar3;
    iVar6 = (int)((ulonglong)uVar2 / ((ulonglong)uVar1 / (ulonglong)param_2));
    iVar6 = (param_2 - (-(uint)(param_2 < iVar6 + 1U) & (param_2 - iVar6) - 1)) - iVar6;
    iVar5 = (param_2 - iVar6) * iVar3;
    uVar8 = iVar6 - 1;
    *(uint *)(param_1 + 0x24) = uVar2 - iVar5;
    if (uVar8 == 0) {
      iVar3 = uVar1 - iVar5;
    }
    *(int *)(param_1 + 0x20) = iVar3;
    FUN_144f2f780(param_1);
  }
  else {
    bVar4 = (byte)(iVar3 + -7);
    uVar8 = (uVar7 >> (bVar4 & 0x1f)) + 1;
    iVar6 = (int)((ulonglong)uVar1 / (ulonglong)uVar8);
    *(int *)(param_1 + 0x28) = iVar6;
    iVar5 = (int)((ulonglong)uVar2 / ((ulonglong)uVar1 / (ulonglong)uVar8));
    iVar5 = (uVar8 - (-(uint)(uVar8 < iVar5 + 1U) & (uVar8 - iVar5) - 1)) - iVar5;
    iVar9 = (uVar8 - iVar5) * iVar6;
    iVar5 = iVar5 + -1;
    *(uint *)(param_1 + 0x24) = uVar2 - iVar9;
    if (iVar5 == 0) {
      iVar6 = uVar1 - iVar9;
    }
    *(int *)(param_1 + 0x20) = iVar6;
    FUN_144f2f780(param_1);
    uVar8 = FUN_144f2f70c(param_1,iVar3 + -7);
    uVar8 = uVar8 | iVar5 << (bVar4 & 0x1f);
    if (uVar7 < uVar8) {
      *(undefined4 *)(param_1 + 0x30) = 1;
      uVar8 = uVar7;
    }
  }
  return uVar8;
}



// FUNCTION 144f2f70c FUN_144f2f70c body=114 status=ok
// SIG undefined FUN_144f2f70c(void)

uint FUN_144f2f70c(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)((longlong)param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar4 < param_2) {
    uVar5 = *(uint *)((longlong)param_1 + 0xc);
    uVar3 = uVar4;
    do {
      if (uVar5 < *(uint *)(param_1 + 1)) {
        uVar5 = uVar5 + 1;
        *(uint *)((longlong)param_1 + 0xc) = uVar5;
        uVar1 = (uint)*(byte *)((ulonglong)((int)param_1[1] - uVar5) + *param_1);
      }
      else {
        uVar1 = 0;
      }
      uVar4 = uVar3 + 8;
      uVar2 = uVar2 | uVar1 << ((byte)uVar3 & 0x1f);
      uVar3 = uVar4;
    } while ((int)uVar4 < 0x19);
  }
  *(uint *)(param_1 + 3) = (int)param_1[3] + param_2;
  *(uint *)(param_1 + 2) = uVar2 >> ((byte)param_2 & 0x1f);
  *(uint *)((longlong)param_1 + 0x14) = uVar4 - param_2;
  return (1 << ((byte)param_2 & 0x1f)) - 1U & uVar2;
}



// FUNCTION 144f2f780 FUN_144f2f780 body=129 status=ok
// SIG undefined FUN_144f2f780(void)

void FUN_144f2f780(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 < 0x800001) {
    iVar7 = (int)param_1[3];
    uVar5 = *(uint *)((longlong)param_1 + 0x1c);
    uVar3 = *(uint *)((longlong)param_1 + 0x24);
    uVar6 = *(uint *)((longlong)param_1 + 0x2c);
    do {
      iVar7 = iVar7 + 8;
      uVar4 = uVar4 << 8;
      *(int *)(param_1 + 3) = iVar7;
      *(uint *)(param_1 + 4) = uVar4;
      if (uVar5 < *(uint *)(param_1 + 1)) {
        uVar2 = (ulonglong)uVar5;
        uVar5 = uVar5 + 1;
        uVar1 = (uint)*(byte *)(uVar2 + *param_1);
        *(uint *)((longlong)param_1 + 0x1c) = uVar5;
      }
      else {
        uVar1 = 0;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar1;
      uVar3 = uVar3 * 0x100 + (~((int)(uVar6 << 8 | uVar1) >> 1) & 0xffU) & 0x7fffffff;
      *(uint *)((longlong)param_1 + 0x24) = uVar3;
      uVar6 = uVar1;
    } while (uVar4 < 0x800001);
  }
  return;
}



// FUNCTION 144f2f804 FUN_144f2f804 body=133 status=ok
// SIG undefined FUN_144f2f804(void)

/* WARNING: Removing unreachable block (ram,0x000144f2f82f) */
/* WARNING: Removing unreachable block (ram,0x000144f2f81d) */

void FUN_144f2f804(void)

{
  int *piVar1;
  undefined1 auStack_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_28;
  piVar1 = (int *)cpuid_basic_info(0);
  if (*piVar1 != 0) {
    cpuid_Version_info(1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_28);
}



// FUNCTION 144f2f890 FUN_144f2f890 body=9 status=ok
// SIG undefined FUN_144f2f890(void)

undefined8 FUN_144f2f890(undefined4 *param_1)

{
  *param_1 = 0x2198;
  return 0;
}



// FUNCTION 144f2f89c FUN_144f2f89c body=84 status=ok
// SIG undefined FUN_144f2f89c(void)

void FUN_144f2f89c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 2;
  do {
    FUN_1452f05f4();
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *(undefined8 *)(param_1 + 0x2180) = 0;
  *(undefined4 *)(param_1 + 0x2188) = 0;
  *(undefined4 *)(param_1 + 0x2194) = 0;
  return;
}



// FUNCTION 144f2f8f0 FUN_144f2f8f0 body=2674 status=ok
// SIG undefined FUN_144f2f8f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f2f8f0(longlong param_1,int *param_2,int param_3,int param_4,undefined8 param_5,
                  int *param_6,uint *param_7,undefined4 param_8)

{
  short sVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  byte bVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  short *psVar27;
  int *piVar28;
  undefined1 *puVar29;
  int iVar30;
  int *piVar31;
  uint *puVar32;
  longlong lVar33;
  undefined2 *puVar34;
  undefined8 uVar35;
  int *piVar36;
  char *pcVar37;
  int **ppiVar38;
  int iVar39;
  undefined8 uStack_380;
  undefined1 auStack_378 [32];
  uint local_358 [8];
  int local_338 [4];
  int *local_328;
  undefined8 local_320;
  int *local_318;
  int local_310;
  int local_308 [2];
  uint *local_300;
  int *local_2f8 [2];
  int local_2e8;
  int local_2e4;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined1 local_2c8 [640];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_338;
  uVar20 = 0;
  local_318 = param_6;
  local_300 = param_7;
  iVar25 = param_2[1];
  local_2e0 = param_1;
  local_338[1] = param_3;
  local_320 = param_5;
  local_338[3] = 0;
  local_338[0] = 0;
  local_308[0] = 0;
  local_308[1] = 0;
  if ((iVar25 != 1) && (iVar25 != 2)) {
    uStack_380 = 0x144f2f987;
    FUN_144bca940("assertion failed: decControl->nChannelsInternal == 1 || decControl->nChannelsInternal == 2"
                  ,"../../../third_party/opus/src/silk/dec_API.c",0x6b);
    iVar25 = param_2[1];
  }
  uVar17 = 0;
  if ((param_4 != 0) && (0 < iVar25)) {
    puVar18 = (undefined4 *)(param_1 + 0x960);
    uVar21 = uVar20;
    do {
      *puVar18 = 0;
      uVar24 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar24;
      iVar25 = param_2[1];
      puVar18 = puVar18 + 0x430;
    } while ((int)uVar24 < iVar25);
  }
  if (*(int *)(param_1 + 0x2190) < iVar25) {
    uStack_380 = 0x144f2f9c5;
    local_338[0] = FUN_1452f05f4(param_1 + 0x10c0);
    iVar25 = param_2[1];
  }
  if (((iVar25 != 1) || (*(int *)(param_1 + 0x2190) != 2)) ||
     (local_310 = iVar25, param_2[3] != *(int *)(param_1 + 0x90c) * 1000)) {
    local_310 = 0;
  }
  piVar31 = (int *)(param_1 + 0x960);
  if ((*piVar31 == 0) && (param_3 = local_338[1], 0 < iVar25)) {
    puVar18 = (undefined4 *)(param_1 + 0x914);
    uVar21 = uVar20;
    do {
      iVar25 = param_2[4];
      if ((iVar25 == 0) || (iVar25 == 10)) {
        *puVar18 = 2;
LAB_144f2fa5b:
        puVar18[0x14] = 1;
      }
      else {
        if (iVar25 == 0x14) {
          *puVar18 = 4;
          goto LAB_144f2fa5b;
        }
        if (iVar25 == 0x28) {
          puVar18[0x14] = 2;
        }
        else {
          if (iVar25 != 0x3c) {
            uStack_380 = 0x144f2fc67;
            FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/silk/dec_API.c",0x92)
            ;
            puVar29 = auStack_378;
            goto LAB_144f2fc8c;
          }
          puVar18[0x14] = 3;
        }
        *puVar18 = 4;
      }
      iVar25 = (param_2[3] >> 10) + 1;
      if ((((param_2[3] >> 10) - 7U & 0xfffffff3) != 0) || (iVar25 == 0x14)) {
        uStack_380 = 0x144f2fc87;
        FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/silk/dec_API.c",0x98);
        puVar29 = auStack_378;
        goto LAB_144f2fc8c;
      }
      uStack_380 = 0x144f2fa98;
      iVar25 = FUN_1452f0640((longlong)(int)uVar21 * 0x10c0 + param_1,iVar25,param_2[2]);
      local_338[0] = local_338[0] + iVar25;
      uVar24 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar24;
      iVar25 = param_2[1];
      puVar18 = puVar18 + 0x430;
      param_3 = local_338[1];
    } while ((int)uVar24 < iVar25);
  }
  iVar30 = *param_2;
  if (((iVar30 == 2) && (iVar25 == 2)) &&
     ((*(int *)(param_1 + 0x218c) == 1 || (*(int *)(param_1 + 0x2190) == 1)))) {
    *(undefined4 *)(param_1 + 0x2180) = 0;
    lVar26 = 2;
    *(undefined4 *)(param_1 + 0x2188) = 0;
    puVar12 = (undefined8 *)(param_1 + 0x1a50);
    puVar13 = (undefined8 *)(param_1 + 0x990);
    do {
      puVar19 = puVar13;
      puVar14 = puVar12;
      uVar35 = puVar19[1];
      uVar7 = puVar19[2];
      uVar8 = puVar19[3];
      *puVar14 = *puVar19;
      puVar14[1] = uVar35;
      uVar35 = puVar19[4];
      uVar9 = puVar19[5];
      puVar14[2] = uVar7;
      puVar14[3] = uVar8;
      uVar7 = puVar19[6];
      uVar8 = puVar19[7];
      puVar14[4] = uVar35;
      puVar14[5] = uVar9;
      uVar35 = puVar19[8];
      uVar9 = puVar19[9];
      puVar14[6] = uVar7;
      puVar14[7] = uVar8;
      uVar7 = puVar19[10];
      uVar8 = puVar19[0xb];
      puVar14[8] = uVar35;
      puVar14[9] = uVar9;
      uVar35 = puVar19[0xc];
      uVar9 = puVar19[0xd];
      puVar14[10] = uVar7;
      puVar14[0xb] = uVar8;
      uVar7 = puVar19[0xe];
      uVar8 = puVar19[0xf];
      puVar14[0xc] = uVar35;
      puVar14[0xd] = uVar9;
      puVar14[0xe] = uVar7;
      puVar14[0xf] = uVar8;
      lVar26 = lVar26 + -1;
      puVar12 = puVar14 + 0x10;
      puVar13 = puVar19 + 0x10;
    } while (lVar26 != 0);
    uVar35 = puVar19[0x11];
    uVar7 = puVar19[0x12];
    uVar8 = puVar19[0x13];
    puVar14[0x10] = puVar19[0x10];
    puVar14[0x11] = uVar35;
    uVar3 = *(undefined4 *)(puVar19 + 0x14);
    uVar4 = *(undefined4 *)((longlong)puVar19 + 0xa4);
    uVar5 = *(undefined4 *)(puVar19 + 0x15);
    uVar6 = *(undefined4 *)((longlong)puVar19 + 0xac);
    puVar14[0x12] = uVar7;
    puVar14[0x13] = uVar8;
    *(undefined4 *)(puVar14 + 0x14) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0xa4) = uVar4;
    *(undefined4 *)(puVar14 + 0x15) = uVar5;
    *(undefined4 *)((longlong)puVar14 + 0xac) = uVar6;
    iVar30 = *param_2;
  }
  *(int *)(param_1 + 0x218c) = iVar30;
  *(int *)(param_1 + 0x2190) = param_2[1];
  puVar29 = auStack_378;
  if (param_2[2] - 8000U < 0x9c41) {
    if ((param_3 != 1) && (*piVar31 == 0)) {
      iVar25 = param_2[1];
      uVar35 = param_5;
      if (0 < iVar25) {
        piVar31 = (int *)(param_1 + 0x964);
        uVar21 = uVar20;
        do {
          if (0 < *piVar31) {
            piVar36 = piVar31 + 3;
            uVar22 = uVar20;
            do {
              uStack_380 = 0x144f2fbcd;
              iVar25 = FUN_144f2f528(param_5,1);
              *piVar36 = iVar25;
              uVar24 = (int)uVar22 + 1;
              uVar22 = (ulonglong)uVar24;
              piVar36 = piVar36 + 1;
            } while ((int)uVar24 < *piVar31);
          }
          uStack_380 = 0x144f2fbe9;
          iVar25 = FUN_144f2f528(param_5);
          piVar31[6] = iVar25;
          uVar24 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar24;
          iVar25 = param_2[1];
          piVar31 = piVar31 + 0x430;
          param_1 = local_2e0;
          uVar35 = local_320;
        } while ((int)uVar24 < iVar25);
      }
      if (0 < iVar25) {
        piVar31 = (int *)(param_1 + 0x964);
        uVar21 = uVar20;
        do {
          lVar26 = (longlong)(int)uVar21 * 0x10c0;
          *(undefined8 *)(lVar26 + 0x980 + param_1) = 0;
          *(undefined4 *)(lVar26 + 0x988 + param_1) = 0;
          if (piVar31[6] != 0) {
            if (*piVar31 == 1) {
              piVar31[7] = 1;
            }
            else {
              uStack_380 = 0x144f2fcd2;
              iVar25 = FUN_144f2f574(uVar35,*(undefined8 *)(&DAT_149d32c50 + (longlong)*piVar31 * 8)
                                     ,8);
              if (0 < *piVar31) {
                puVar32 = (uint *)(piVar31 + 7);
                uVar22 = uVar20;
                do {
                  bVar16 = (byte)uVar22;
                  uVar24 = (int)uVar22 + 1;
                  uVar22 = (ulonglong)uVar24;
                  *puVar32 = iVar25 + 1 >> (bVar16 & 0x1f) & 1;
                  puVar32 = puVar32 + 1;
                } while ((int)uVar24 < *piVar31);
              }
            }
          }
          iVar25 = param_2[1];
          uVar24 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar24;
          piVar31 = piVar31 + 0x430;
        } while ((int)uVar24 < iVar25);
      }
      if ((local_338[1] == 0) && (0 < *(int *)(param_1 + 0x964))) {
        local_328 = (int *)(param_1 + 0x1a40);
        uVar21 = uVar20;
        do {
          if (iVar25 < 1) {
            iVar25 = param_2[1];
          }
          else {
            pcVar37 = (char *)(param_1 + 0xae6);
            piVar31 = local_328 + -0x431;
            uVar22 = uVar20;
            do {
              iVar30 = (int)uVar22;
              if (piVar31[1] != 0) {
                if ((iVar25 == 2) && (iVar30 == 0)) {
                  uStack_380 = 0x144f2fd6b;
                  FUN_1452f04a8(local_320,local_308);
                  if (*local_328 == 0) {
                    uStack_380 = 0x144f2fd80;
                    FUN_1452f05d0(local_320,local_338 + 3);
                  }
                }
                if (((int)uVar21 < 1) || (local_358[0] = 2, *piVar31 == 0)) {
                  local_358[0] = uVar17;
                }
                uStack_380 = 0x144f2fdb4;
                FUN_1452f0b00((longlong)iVar30 * 0x10c0 + param_1,local_320,uVar21,1);
                local_358[0] = *(uint *)(pcVar37 + -0x1ce);
                uStack_380 = 0x144f2fdd6;
                FUN_1452f0ebc(local_320,local_2c8,(int)pcVar37[-1],(int)*pcVar37);
                iVar25 = param_2[1];
              }
              uVar22 = (ulonglong)(iVar30 + 1U);
              piVar31 = piVar31 + 0x430;
              pcVar37 = pcVar37 + 0x10c0;
            } while ((int)(iVar30 + 1U) < iVar25);
          }
          local_328 = local_328 + 1;
          uVar24 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar24;
        } while ((int)uVar24 < *(int *)(param_1 + 0x964));
      }
      piVar31 = (int *)(param_1 + 0x960);
      param_3 = local_338[1];
    }
    uVar35 = local_320;
    if (param_2[1] == 2) {
      if ((param_3 == 0) ||
         ((param_3 == 2 && (*(int *)(param_1 + 0x980 + (longlong)*piVar31 * 4) == 1)))) {
        uStack_380 = 0x144f2fe71;
        FUN_1452f04a8(local_320);
        if (((param_3 == 0) && (*(int *)(param_1 + 0x1a30 + (longlong)*piVar31 * 4) == 0)) ||
           ((param_3 == 2 && (*(int *)(param_1 + 0x1a40 + (longlong)*piVar31 * 4) == 0)))) {
          uStack_380 = 0x144f2fea2;
          FUN_1452f05d0(uVar35);
        }
        else {
          local_338[3] = 0;
        }
      }
      else {
        psVar27 = (short *)(param_1 + 0x2180);
        uVar21 = uVar20;
        do {
          sVar1 = *psVar27;
          psVar27 = psVar27 + 1;
          local_308[uVar21] = (int)sVar1;
          uVar21 = uVar21 + 1;
        } while ((longlong)uVar21 < 2);
      }
    }
    iVar25 = param_2[1];
    if (((iVar25 == 2) && (local_338[3] == 0)) && (*(int *)(param_1 + 0x2194) == 1)) {
      uStack_380 = 0x144f2fed2;
      memset((void *)(param_1 + 0x15c4),0,0x400);
      *(undefined4 *)(param_1 + 0x19c4) = 100;
      *(undefined1 *)(param_1 + 0x19c8) = 10;
      *(undefined4 *)(param_1 + 0x211c) = 0;
      *(undefined4 *)(param_1 + 0x1a08) = 1;
      iVar25 = param_2[1];
    }
    iVar30 = *param_2;
    local_2e4 = iVar30 * param_2[2];
    local_2e8 = param_2[3] * iVar25;
    uVar24 = uVar17;
    if (local_2e4 <= local_2e8) {
      uVar24 = (*(int *)(param_1 + 0x918) + 2) * iVar25;
    }
    uVar21 = (longlong)(int)uVar24 * 2 + 0xf;
    if (uVar21 <= (ulonglong)((longlong)(int)uVar24 * 2)) {
      uVar21 = 0xffffffffffffff0;
    }
    uStack_380 = 0x144f2ff50;
    lVar26 = -(uVar21 & 0xfffffffffffffff0);
    local_328 = (int *)((longlong)local_338 + lVar26);
    if (local_2e8 < local_2e4) {
      local_328 = local_318;
    }
    local_2f8[0] = local_328;
    local_2f8[1] = (int *)((longlong)*(int *)(param_1 + 0x918) * 2 + 4 + (longlong)local_328);
    if (param_3 == 0) {
      uVar21 = (ulonglong)(local_338[3] == 0);
    }
    else if ((*(int *)(param_1 + 0x2194) == 0) ||
            (((uVar21 = uVar20, iVar25 == 2 && (param_3 == 2)) &&
             (*(int *)(param_1 + 0x1a40 + (longlong)*(int *)(param_1 + 0x1a20) * 4) == 1)))) {
      uVar21 = 1;
    }
    if (0 < iVar25) {
      piVar31 = (int *)(param_1 + 0x960);
      local_2e0 = 0;
      ppiVar38 = local_2f8;
      uVar22 = uVar20;
      do {
        iVar30 = (int)uVar22;
        if ((iVar30 == 0) || (uVar21 != 0)) {
          iVar25 = *(int *)(param_1 + 0x960) - iVar30;
          uVar24 = uVar17;
          if (0 < iVar25) {
            if (local_338[1] == 2) {
              uVar24 = -(uint)(*(int *)(param_1 + 0x97c + (iVar25 + local_2e0) * 4) != 0) & 2;
            }
            else if ((iVar30 < 1) || (uVar24 = 1, *(int *)(param_1 + 0x2194) == 0)) {
              uVar24 = 2;
            }
          }
          piVar36 = *ppiVar38;
          *(undefined4 *)((longlong)local_358 + lVar26 + 0x10) = param_8;
          iVar25 = local_338[1];
          *(uint *)((longlong)local_358 + lVar26 + 8) = uVar24;
          uVar35 = local_320;
          *(int *)((longlong)local_358 + lVar26) = iVar25;
          *(undefined8 *)(auStack_378 + lVar26 + -8) = 0x144f30071;
          iVar25 = FUN_1452f0878((longlong)iVar30 * 0x10c0 + param_1,uVar35,piVar36 + 1,
                                 local_338 + 2);
          local_338[0] = local_338[0] + iVar25;
        }
        else {
          lVar33 = (longlong)local_338[2];
          piVar36 = *ppiVar38;
          *(undefined8 *)(auStack_378 + lVar26 + -8) = 0x144f2fffb;
          memset(piVar36 + 1,0,lVar33 * 2);
        }
        *piVar31 = *piVar31 + 1;
        uVar22 = (ulonglong)(iVar30 + 1U);
        iVar25 = param_2[1];
        ppiVar38 = ppiVar38 + 1;
        local_2e0 = local_2e0 + 0x430;
        piVar31 = piVar31 + 0x430;
      } while ((int)(iVar30 + 1U) < iVar25);
      iVar30 = *param_2;
    }
    iVar11 = local_2e4;
    iVar39 = local_2e8;
    piVar36 = local_2f8[1];
    piVar31 = local_328;
    if ((iVar30 == 2) && (iVar25 == 2)) {
      *(int *)((longlong)local_358 + lVar26 + 8) = local_338[2];
      *(undefined4 *)((longlong)local_358 + lVar26) = *(undefined4 *)(param_1 + 0x90c);
      *(undefined8 *)(auStack_378 + lVar26 + -8) = 0x144f300e6;
      FUN_1452f021c(param_1 + 0x2180,piVar31,piVar36,local_308);
      uVar21 = (ulonglong)(uint)local_338[2];
    }
    else {
      *local_328 = *(int *)(param_1 + 0x2184);
      uVar21 = (ulonglong)local_338[2];
      *(undefined4 *)(param_1 + 0x2184) = *(undefined4 *)((longlong)piVar31 + uVar21 * 2);
    }
    uVar24 = ((int)uVar21 * param_2[2]) / (*(short *)(param_1 + 0x90c) * 1000);
    *local_300 = uVar24;
    if (*param_2 != 2) {
      uVar24 = uVar17;
    }
    uVar22 = (longlong)(int)uVar24 * 2 + 0xf;
    if (uVar22 <= (ulonglong)((longlong)(int)uVar24 * 2)) {
      uVar22 = 0xffffffffffffff0;
    }
    *(undefined8 *)(auStack_378 + lVar26 + -8) = 0x144f30153;
    piVar36 = local_318;
    lVar33 = -(uVar22 & 0xfffffffffffffff0);
    lVar10 = lVar33 + lVar26 + -0x378;
    iVar25 = param_2[1];
    piVar31 = local_318;
    if (*param_2 == 2) {
      piVar31 = (int *)((longlong)local_338 + lVar33 + lVar26);
    }
    uVar24 = uVar17;
    if (iVar39 < iVar11) {
      uVar24 = (*(int *)(param_1 + 0x918) + 2) * iVar25;
    }
    uVar22 = (longlong)(int)uVar24 * 2 + 0xf;
    if (uVar22 <= (ulonglong)((longlong)(int)uVar24 * 2)) {
      uVar22 = 0xffffffffffffff0;
    }
    *(undefined8 *)(auStack_378 + lVar33 + lVar26 + -8) = 0x144f301a0;
    piVar28 = local_318;
    lVar2 = -(uVar22 & 0xfffffffffffffff0);
    piVar23 = (int *)((longlong)local_338 + lVar2 + lVar33 + lVar26);
    if (iVar39 < iVar11) {
      iVar30 = *(int *)(param_1 + 0x918);
      *(undefined8 *)(auStack_378 + lVar2 + lVar33 + lVar26 + -8) = 0x144f301cb;
      memcpy(piVar23,piVar28,(longlong)((iVar30 + 2) * iVar25) * 2);
      uVar21 = (ulonglong)(uint)local_338[2];
      local_328 = piVar23;
      local_2f8[0] = piVar23;
      local_2f8[1] = (int *)((longlong)piVar23 + ((longlong)*(int *)(param_1 + 0x918) + 2) * 2);
      piVar36 = local_318;
    }
    ppiVar38 = local_2f8;
    uVar22 = uVar20;
    while( true ) {
      iVar25 = param_2[1];
      iVar30 = *param_2;
      if (iVar25 <= *param_2) {
        iVar30 = iVar25;
      }
      iVar39 = (int)uVar22;
      if (iVar30 <= iVar39) break;
      piVar23 = *ppiVar38;
      *(undefined8 *)(auStack_378 + lVar2 + lVar33 + lVar26 + -8) = 0x144f30234;
      iVar25 = FUN_1452f0058((longlong)iVar39 * 0x10c0 + 0x990 + param_1,piVar31,
                             (longlong)piVar23 + 2,uVar21);
      local_338[0] = local_338[0] + iVar25;
      if ((*param_2 == 2) &&
         (piVar23 = piVar31, piVar28 = piVar36, uVar21 = uVar20, 0 < (int)*local_300)) {
        do {
          uVar24 = (int)uVar21 + 1;
          *(short *)piVar28 = (short)*piVar23;
          piVar23 = (int *)((longlong)piVar23 + 2);
          piVar28 = piVar28 + 1;
          uVar21 = (ulonglong)uVar24;
        } while ((int)uVar24 < (int)*local_300);
      }
      uVar21 = (ulonglong)(uint)local_338[2];
      uVar22 = (ulonglong)(iVar39 + 1);
      ppiVar38 = ppiVar38 + 1;
      piVar36 = (int *)((longlong)piVar36 + 2);
    }
    if ((*param_2 == 2) && (iVar25 == 1)) {
      if (local_310 == 0) {
        uVar21 = uVar20;
        uVar22 = uVar20;
        if (0 < (int)*local_300) {
          do {
            uVar24 = (int)uVar22 + 1;
            *(undefined2 *)(uVar21 + 2 + (longlong)local_318) =
                 *(undefined2 *)(uVar21 + (longlong)local_318);
            uVar21 = uVar21 + 4;
            uVar22 = (ulonglong)uVar24;
          } while ((int)uVar24 < (int)*local_300);
        }
      }
      else {
        puVar34 = (undefined2 *)((longlong)local_328 + 2);
        *(undefined8 *)(auStack_378 + lVar2 + lVar33 + lVar26 + -8) = 0x144f302a5;
        FUN_1452f0058(param_1 + 0x1a50,piVar31,puVar34,uVar21);
        uVar21 = uVar20;
        uVar22 = uVar20;
        if (0 < (int)*local_300) {
          do {
            uVar24 = (int)uVar22 + 1;
            *(short *)(uVar21 + 2 + (longlong)local_318) = (short)*piVar31;
            piVar31 = (int *)((longlong)piVar31 + 2);
            uVar21 = uVar21 + 4;
            uVar22 = (ulonglong)uVar24;
          } while ((int)uVar24 < (int)*local_300);
        }
      }
    }
    if (*(int *)(param_1 + 0x105c) == 2) {
      local_2e0 = 0x400000006;
      local_2d8 = 3;
      uVar17 = *(int *)((longlong)&local_2e0 + ((longlong)*(int *)(param_1 + 0x90c) + -8 >> 2) * 4)
               * *(int *)(param_1 + 0x904);
    }
    param_2[5] = uVar17;
    if (local_338[1] == 1) {
      puVar29 = auStack_378 + lVar2 + lVar10 + 0x378;
      if (0 < *(int *)(param_1 + 0x2190)) {
        puVar15 = (undefined1 *)(param_1 + 0x908);
        do {
          *puVar15 = 10;
          uVar17 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar17;
          puVar15 = puVar15 + 0x10c0;
          puVar29 = auStack_378 + lVar2 + lVar10 + 0x378;
        } while ((int)uVar17 < *(int *)(param_1 + 0x2190));
      }
    }
    else {
      *(int *)(param_1 + 0x2194) = local_338[3];
      puVar29 = auStack_378 + lVar2 + lVar10 + 0x378;
    }
  }
LAB_144f2fc8c:
  uVar20 = local_48 ^ (ulonglong)local_338;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar29 + -8) = &UNK_144f2fc9b;
  FUN_144d8e3a0(uVar20);
}



// FUNCTION 144f3037c FUN_144f3037c body=816 status=ok
// SIG undefined FUN_144f3037c(void)

undefined1 * FUN_144f3037c(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  uint local_res18;
  
  local_res18 = (uint)param_3;
  if (param_2 < 0xfd0) {
    if (param_2 == 0xfcf) {
      if (param_3 != (longlong *)0x0) {
        uVar6 = (undefined4)param_1[9];
        goto LAB_144f30530;
      }
    }
    else if (param_2 < 0xfbd) {
      if (param_2 == 0xfbc) {
        iVar9 = *(int *)(*param_1 + 8);
        iVar1 = *(int *)(*param_1 + 4);
        lVar7 = (longlong)(iVar9 * (int)param_1[1]);
        puVar8 = (undefined4 *)
                 ((longlong)param_1 +
                 ((longlong)((iVar1 + 0x400) * (int)param_1[1]) + 0x3f + lVar7) * 4);
        memset(param_1 + 10,0,
               (longlong)((iVar1 + (iVar9 + 0x100) * 4) * (int)param_1[1] * 4 + 0xfc) - 0x50);
        iVar9 = 0;
        if (0 < *(int *)(*param_1 + 8) * (int)param_1[1]) {
          do {
            puVar8[lVar7] = 0xc1e00000;
            iVar9 = iVar9 + 1;
            *puVar8 = 0xc1e00000;
            puVar8 = puVar8 + 1;
          } while (iVar9 < *(int *)(*param_1 + 8) * (int)param_1[1]);
        }
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
        *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
        *(undefined4 *)((longlong)param_1 + 0x54) = 2;
        *(undefined4 *)((longlong)param_1 + 0x5c) = 0x100;
        *(undefined8 *)((longlong)param_1 + 100) = 0;
        return (undefined1 *)0x0;
      }
      if (param_2 == 0xfa2) {
        if ((500 < (int)local_res18) || (local_res18 == 0xffffffff)) {
          uVar5 = (int)param_1[1] * 260000;
          if ((int)local_res18 < (int)uVar5) {
            uVar5 = local_res18;
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar5;
          return (undefined1 *)0x0;
        }
      }
      else {
        if (param_2 == 0xfa6) {
          *(uint *)(param_1 + 6) = local_res18;
          return (undefined1 *)0x0;
        }
        if (param_2 == 0xfaa) {
          if (local_res18 < 0xb) {
            *(uint *)((longlong)param_1 + 0x1c) = local_res18;
            return (undefined1 *)0x0;
          }
        }
        else {
          if (param_2 != 0xfae) {
            if (param_2 == 0xfb4) {
              *(uint *)(param_1 + 7) = local_res18;
              return (undefined1 *)0x0;
            }
            goto LAB_144f30641;
          }
          if (local_res18 < 0x65) {
            *(uint *)((longlong)param_1 + 0x3c) = local_res18;
            return (undefined1 *)0x0;
          }
        }
      }
    }
    else if (param_2 == 0xfbf) {
      if (param_3 != (longlong *)0x0) {
        uVar6 = (undefined4)param_1[10];
LAB_144f30530:
        *(undefined4 *)param_3 = uVar6;
        return (undefined1 *)0x0;
      }
    }
    else if (param_2 == 0xfc4) {
      if (local_res18 - 8 < 0x11) {
        *(uint *)(param_1 + 8) = local_res18;
        return (undefined1 *)0x0;
      }
    }
    else {
      if (param_2 == 0xfc5) {
        uVar6 = (undefined4)param_1[8];
        goto LAB_144f30530;
      }
      if (param_2 != 0xfce) goto LAB_144f30641;
      if (local_res18 < 2) {
        *(uint *)(param_1 + 9) = local_res18;
        return (undefined1 *)0x0;
      }
    }
  }
  else {
    if (0x2720 < param_2) {
      if (param_2 == 0x2726) {
        if (param_3 == (longlong *)0x0) {
          return (undefined1 *)0x0;
        }
        lVar7 = param_3[1];
        lVar2 = param_3[2];
        lVar3 = param_3[3];
        *(longlong *)((longlong)param_1 + 0x7c) = *param_3;
        *(longlong *)((longlong)param_1 + 0x84) = lVar7;
        lVar7 = param_3[4];
        lVar4 = param_3[5];
        *(longlong *)((longlong)param_1 + 0x8c) = lVar2;
        *(longlong *)((longlong)param_1 + 0x94) = lVar3;
        lVar2 = param_3[6];
        lVar3 = param_3[7];
        *(longlong *)((longlong)param_1 + 0x9c) = lVar7;
        *(longlong *)((longlong)param_1 + 0xa4) = lVar4;
        *(longlong *)((longlong)param_1 + 0xac) = lVar2;
        *(longlong *)((longlong)param_1 + 0xb4) = lVar3;
        return (undefined1 *)0x0;
      }
      if (param_2 == 0x2728) {
        *(uint *)((longlong)param_1 + 0x44) = local_res18;
        return (undefined1 *)0x0;
      }
      if (param_2 == 0x272a) {
        param_1[0x1e] = (longlong)param_3;
        return (undefined1 *)0x0;
      }
      if (param_2 == 0x272c) {
        if (param_3 == (longlong *)0x0) {
          return (undefined1 *)0x0;
        }
        *(longlong *)((longlong)param_1 + 0xbc) = *param_3;
        return (undefined1 *)0x0;
      }
LAB_144f30641:
      return &DAT_fffffffb;
    }
    if (param_2 == 0x2720) {
      *(uint *)((longlong)param_1 + 0x34) = local_res18;
      return (undefined1 *)0x0;
    }
    if (param_2 == 0x2712) {
      if (local_res18 < 3) {
        *(uint *)(param_1 + 3) = (uint)((int)local_res18 < 2);
        *(uint *)(param_1 + 2) = (uint)(local_res18 == 0);
        return (undefined1 *)0x0;
      }
    }
    else if (param_2 == 0x2718) {
      if (local_res18 - 1 < 2) {
        *(uint *)((longlong)param_1 + 0xc) = local_res18;
        return (undefined1 *)0x0;
      }
    }
    else if (param_2 == 0x271a) {
      if ((-1 < (int)local_res18) && ((int)local_res18 < *(int *)(*param_1 + 8))) {
        *(uint *)((longlong)param_1 + 0x24) = local_res18;
        return (undefined1 *)0x0;
      }
    }
    else if (param_2 == 0x271c) {
      if ((0 < (int)local_res18) && ((int)local_res18 <= *(int *)(*param_1 + 8))) {
        *(uint *)(param_1 + 5) = local_res18;
        return (undefined1 *)0x0;
      }
    }
    else {
      if (param_2 != 0x271f) goto LAB_144f30641;
      if (param_3 != (longlong *)0x0) {
        *param_3 = *param_1;
        return (undefined1 *)0x0;
      }
    }
  }
  return &DAT_ffffffff;
}



// FUNCTION 144f306ac FUN_144f306ac body=56 status=ok
// SIG undefined FUN_144f306ac(void)

int FUN_144f306ac(int param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1452e8898(48000,0x3c0,0);
  return (*(int *)(lVar1 + 4) + *(int *)(lVar1 + 8) * 4 + 0x400) * param_1 * 4 + 0xfc;
}



// FUNCTION 144f306e4 FUN_144f306e4 body=9585 status=ok
// SIG undefined FUN_144f306e4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f306e4(undefined8 *param_1,float *param_2,int param_3,undefined8 param_4,int param_5,
                  undefined1 *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  longlong lVar19;
  void *_Src;
  undefined4 *puVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  short *psVar27;
  float *pfVar28;
  float *pfVar29;
  undefined4 *puVar30;
  byte bVar31;
  byte bVar32;
  int iVar33;
  int iVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  int iVar41;
  longlong lVar42;
  int iVar43;
  undefined1 *puVar44;
  undefined8 *puVar45;
  int iVar46;
  uint uVar47;
  int iVar48;
  int *piVar49;
  void *pvVar50;
  longlong lVar51;
  size_t _Size;
  ulonglong uVar52;
  void *pvVar53;
  ulonglong uVar54;
  uint uVar55;
  longlong lVar56;
  int iVar57;
  uint *puVar58;
  bool bVar59;
  float fVar60;
  undefined4 uVar61;
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 uStack_330;
  undefined1 auStack_328 [32];
  float afStack_308 [2];
  longlong lStack_300;
  float local_2f8 [2];
  longlong local_2f0;
  float local_2e8 [2];
  longlong local_2e0;
  float local_2d8 [2];
  longlong local_2d0;
  longlong local_2c8;
  float local_2c0 [2];
  uint local_2b8 [2];
  longlong local_2b0;
  float local_2a8 [2];
  undefined8 local_2a0;
  longlong local_298 [2];
  longlong local_288;
  undefined4 auStack_280 [6];
  float local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int iStack_254;
  int local_250;
  uint uStack_24c;
  int local_248;
  int *local_240;
  int local_238;
  int local_234;
  uint local_230;
  int iStack_22c;
  uint local_228;
  int iStack_224;
  ulonglong local_220;
  int local_218;
  float fStack_214;
  int local_210;
  int iStack_20c;
  int local_208;
  uint uStack_204;
  ulonglong local_200;
  float *local_1f8;
  void *local_1f0;
  int local_1e8 [2];
  longlong local_1e0;
  float *local_1d8;
  void *local_1d0;
  undefined4 *local_1c8;
  int local_1c0;
  uint local_1bc;
  float local_1b8 [2];
  ulonglong local_1b0;
  undefined4 local_1a8;
  int local_1a4;
  int local_1a0;
  void *local_198;
  float *local_190;
  int local_188;
  short *local_180;
  undefined4 local_178;
  int local_174;
  undefined4 local_170;
  undefined8 *local_168;
  int local_160;
  ulonglong local_158;
  undefined4 local_150 [2];
  int *local_148;
  int *local_140;
  longlong local_138;
  undefined4 *local_130;
  float *local_128;
  longlong local_120;
  undefined4 *local_118;
  undefined1 local_110 [56];
  ulonglong local_d8;
  
  local_d8 = DAT_14c707940 ^ (ulonglong)&local_268;
  local_1b8[0] = 0.0;
  iVar57 = 0;
  local_168 = param_1;
  local_248 = *(int *)(param_1 + 1);
  fVar69 = 0.0;
  local_240 = (int *)*param_1;
  local_268 = *(float *)((longlong)param_1 + 0xc);
  fVar67 = 0.0;
  local_1bc = 0;
  local_220 = local_220 & 0xffffffff00000000;
  fVar70 = 0.0;
  fVar68 = 0.0;
  iVar48 = local_240[1];
  local_1e8[0] = 0;
  local_180 = *(short **)(local_240 + 8);
  local_25c = *(int *)((longlong)param_1 + 0x24);
  local_258 = *(int *)(param_1 + 5);
  fStack_214 = 0.0;
  local_1d8 = param_2;
  local_260 = 0xf;
  local_178 = 0;
  local_160 = 0;
  iStack_224 = 0;
  iStack_22c = local_240[2];
  puVar44 = auStack_328;
  if ((param_5 < 2) || (puVar44 = auStack_328, param_2 == (float *)0x0)) goto LAB_144f32c46;
  param_3 = param_3 * *(int *)(param_1 + 4);
  iVar46 = local_240[10];
  local_264 = 0;
  iVar33 = iVar57;
  if (-1 < iVar46) {
    do {
      if (local_240[0xc] << ((byte)iVar33 & 0x1f) == param_3) break;
      iVar33 = iVar33 + 1;
    } while (iVar33 <= iVar46);
    local_264 = iVar33;
  }
  puVar44 = auStack_328;
  if (iVar46 < local_264) goto LAB_144f32c46;
  local_228 = 1 << ((byte)local_264 & 0x1f);
  local_234 = local_240[0xc] * local_228;
  local_190 = (float *)((longlong)param_1 + ((longlong)(iVar48 * local_248) + 0x3f) * 4);
  local_1c8 = (undefined4 *)
              ((longlong)param_1 + ((longlong)((iVar48 + 0x400) * local_248) + 0x3f) * 4);
  local_120 = (longlong)(local_240[2] * local_248);
  local_158 = local_120 * 4;
  local_128 = (float *)(local_1c8 + local_120);
  local_118 = local_1c8 + local_120 * 2;
  local_130 = local_1c8 + local_120 * 2 + local_120;
  if (param_6 == (undefined1 *)0x0) {
    uStack_24c = 1;
    local_188 = 1;
  }
  else {
    uStack_330 = 0x144f30905;
    local_188 = FUN_1452e891c(param_6);
    iVar57 = 0x1f;
    if (*(uint *)(param_6 + 0x20) != 0) {
      for (; *(uint *)(param_6 + 0x20) >> iVar57 == 0; iVar57 = iVar57 + -1) {
      }
    }
    uStack_24c = (*(int *)(param_6 + 0x18) - iVar57) - 1;
    iVar57 = (*(int *)(param_6 + 0x18) - iVar57) + 3 >> 3;
  }
  uVar55 = uStack_24c;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    uStack_330 = 0x144f30948;
    FUN_144bca940("assertion failed: st->signalling==0",
                  "../../../third_party/opus/src/celt/celt_encoder.c",0x60b);
  }
  local_250 = 0x4fb;
  if (param_5 < 0x4fb) {
    local_250 = param_5;
  }
  iVar46 = local_250 - iVar57;
  local_218 = iVar46;
  if ((*(int *)(param_1 + 6) == 0) || (iVar33 = *(int *)((longlong)param_1 + 0x2c), iVar33 == -1)) {
    iVar33 = *(int *)((longlong)param_1 + 0x2c);
    iStack_20c = 0;
    if (iVar33 != -1) {
      iVar43 = iVar33 * param_3 + uVar55;
      if ((int)uVar55 < 2) {
        iVar43 = iVar33 * param_3;
      }
      iVar41 = (iVar43 + *local_240 * 4) / (*local_240 << 3) -
               (uint)(*(int *)((longlong)param_1 + 0x34) != 0);
      iVar43 = local_250;
      if (iVar41 <= local_250) {
        iVar43 = iVar41;
      }
      if (iVar43 < 2) {
        local_250 = 2;
      }
      else {
        if (iVar41 <= local_250) {
          local_250 = iVar41;
        }
      }
    }
    iStack_254 = local_250 - iVar57;
  }
  else {
    iStack_20c = (iVar33 * param_3 + (*local_240 >> 4)) / (*local_240 >> 3);
    iStack_254 = iStack_20c >> 6;
  }
  iVar43 = local_250;
  local_1c0 = 3 - local_264;
  iVar41 = ((400 >> ((byte)local_264 & 0x1f)) + -0x32) * ((int)local_268 * 0x28 + 0x14);
  local_208 = (local_250 * 400 >> ((byte)(3 - local_264) & 0x1f)) - iVar41;
  if (iVar33 != -1) {
    iVar33 = iVar33 - iVar41;
    if (iVar33 <= local_208) {
      local_208 = iVar33;
    }
  }
  if (param_6 == (undefined1 *)0x0) {
    uStack_330 = 0x144f30a7a;
    FUN_144f35550(local_110,param_4,local_250);
    param_6 = local_110;
  }
  if ((0 < iStack_20c) && (iVar33 = 0, *(int *)(param_1 + 7) != 0)) {
    iVar41 = iStack_20c * 2 - *(int *)((longlong)param_1 + 0xd4) >> 6;
    if (uVar55 == 1) {
      iVar33 = 2;
    }
    iVar22 = iVar41;
    if (iVar41 < iVar33) {
      iVar22 = iVar33;
    }
    iVar34 = iVar46;
    if ((iVar22 < iVar46) && (iVar34 = iVar33, iVar33 <= iVar41)) {
      iVar34 = iVar41;
    }
    if (iVar34 < iVar46) {
      iVar43 = iVar34 + iVar57;
      uStack_330 = 0x144f30aec;
      local_250 = iVar43;
      local_218 = iVar34;
      FUN_144f35988(param_6,iVar43);
    }
  }
  uVar47 = iVar43 << 3;
  local_230 = uVar47;
  local_238 = local_240[3];
  if (local_258 <= local_240[3]) {
    local_238 = local_258;
  }
  local_210 = local_234 + iVar48;
  uVar35 = (longlong)((local_234 + iVar48) * local_248) * 4;
  uVar24 = uVar35 + 0xf;
  if (uVar24 <= uVar35) {
    uVar24 = 0xffffffffffffff0;
  }
  uStack_330 = 0x144f30b39;
  lVar6 = -(uVar24 & 0xfffffffffffffff0);
  fVar60 = 0.0;
  fVar66 = 0.0;
  local_1e0 = (longlong)&local_268 + lVar6;
  uVar24 = (longlong)((local_234 - iVar48) * (int)local_268) / (longlong)*(int *)(param_1 + 4);
  iVar46 = (int)uVar24;
  fVar63 = 0.0;
  if (0 < iVar46) {
    uVar35 = uVar24 & 0xffffffff;
    pfVar28 = local_1d8;
    do {
      if (fVar60 <= *pfVar28) {
        fVar60 = *pfVar28;
      }
      if (*pfVar28 <= fVar66) {
        fVar66 = *pfVar28;
      }
      pfVar28 = pfVar28 + 1;
      uVar35 = uVar35 - 1;
      fVar63 = fVar66;
    } while (uVar35 != 0);
  }
  if (fVar60 <= -fVar63) {
    fVar60 = -fVar63;
  }
  fVar66 = *(float *)((longlong)param_1 + 0xe4);
  if (*(float *)((longlong)param_1 + 0xe4) <= fVar60) {
    fVar66 = 0.0;
    fVar60 = 0.0;
    fVar63 = 0.0;
    if (0 < iVar46) {
      uVar24 = uVar24 & 0xffffffff;
      pfVar28 = local_1d8;
      do {
        if (fVar66 <= *pfVar28) {
          fVar66 = *pfVar28;
        }
        if (*pfVar28 <= fVar60) {
          fVar60 = *pfVar28;
        }
        pfVar28 = pfVar28 + 1;
        uVar24 = uVar24 - 1;
        fVar63 = fVar60;
      } while (uVar24 != 0);
    }
    if (fVar66 <= -fVar63) {
      fVar66 = -fVar63;
    }
  }
  fVar60 = 0.0;
  fVar63 = 0.0;
  pfVar28 = local_1d8 + iVar46;
  uVar24 = (longlong)(iVar48 * (int)local_268) / (longlong)*(int *)(param_1 + 4);
  fVar65 = 0.0;
  if (0 < (int)uVar24) {
    uVar24 = uVar24 & 0xffffffff;
    do {
      if (fVar60 <= *pfVar28) {
        fVar60 = *pfVar28;
      }
      if (*pfVar28 <= fVar63) {
        fVar63 = *pfVar28;
      }
      pfVar28 = pfVar28 + 1;
      uVar24 = uVar24 - 1;
      fVar65 = fVar63;
    } while (uVar24 != 0);
  }
  if (fVar60 <= -fVar65) {
    fVar60 = -fVar65;
  }
  if (fVar66 <= fVar60) {
    fVar66 = fVar60;
  }
  *(float *)((longlong)param_1 + 0xe4) = fVar60;
  bVar59 = fVar66 <= 1.0 / (float)(1 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f));
  uStack_204 = (uint)bVar59;
  if (uVar55 == 1) {
    *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f30c55;
    FUN_144f35680(param_6,bVar59,0xf);
  }
  else {
    uStack_204 = 0;
  }
  if (uStack_204 != 0) {
    if (0 < iStack_20c) {
      local_218 = 2;
      iVar46 = iVar57 + 2;
      if (iVar43 < iVar57 + 2) {
        iVar46 = iVar43;
      }
      uVar47 = iVar46 << 3;
      iStack_254 = iVar46;
      local_250 = iVar46;
      local_230 = uVar47;
      *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f30c98;
      FUN_144f35988(param_6,iVar46);
    }
    iVar57 = 0x1f;
    if (*(uint *)(param_6 + 0x20) != 0) {
      for (; *(uint *)(param_6 + 0x20) >> iVar57 == 0; iVar57 = iVar57 + -1) {
      }
    }
    *(uint *)(param_6 + 0x18) = iVar57 + 1 + uVar47;
    uStack_24c = uVar47;
  }
  pfVar28 = local_1d8;
  iVar46 = 0;
  piVar49 = local_240 + 4;
  iVar57 = iVar46;
  do {
    lVar26 = local_1e0;
    iVar33 = local_248;
    if ((*(int *)((longlong)param_1 + 0x14) == 0) || (uVar61 = 1, fVar66 <= 65536.0)) {
      uVar61 = 0;
    }
    *(undefined4 *)((longlong)&local_2f0 + lVar6) = uVar61;
    iVar43 = local_234;
    *(longlong *)((longlong)local_2f8 + lVar6) = (longlong)param_1 + (longlong)iVar46 * 4 + 0xc4;
    *(int **)((longlong)&lStack_300 + lVar6) = piVar49;
    *(undefined4 *)((longlong)afStack_308 + lVar6) = *(undefined4 *)(param_1 + 4);
    *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f30d23;
    FUN_144f32dcc(pfVar28 + iVar46,lVar26 + ((longlong)iVar57 + (longlong)iVar48) * 4,iVar43,iVar33)
    ;
    pfVar29 = local_190;
    lVar26 = local_1e0;
    iVar22 = local_210;
    iVar41 = local_218;
    iVar43 = local_248;
    uVar55 = uStack_24c;
    iVar33 = local_25c;
    uVar61 = 1;
    iVar46 = iVar46 + 1;
    iVar57 = iVar57 + local_210;
  } while (iVar46 < local_248);
  local_1a8 = 5;
  if ((((((*(int *)((longlong)param_1 + 0x44) == 0) || (local_218 < 4)) &&
        (local_218 <= (int)local_268 * 0xc)) || ((local_25c != 0 || (uStack_204 != 0)))) ||
      (*(int *)(param_1 + 3) != 0)) || (*(int *)((longlong)param_1 + 0x1c) < 5)) {
    uVar61 = 0;
  }
  uVar23 = *(undefined4 *)(param_1 + 0xd);
  *(int **)((longlong)&local_2d0 + lVar6) = (int *)((longlong)param_1 + 0x7c);
  *(int *)((longlong)local_2d8 + lVar6) = iVar41;
  *(undefined4 *)((longlong)&local_2e0 + lVar6) = uVar61;
  *(uint **)((longlong)local_2e8 + lVar6) = &uStack_24c;
  *(float **)((longlong)&local_2f0 + lVar6) = local_1b8;
  *(int **)((longlong)local_2f8 + lVar6) = &local_260;
  iVar48 = local_234;
  *(undefined4 *)((longlong)&lStack_300 + lVar6) = uVar23;
  local_170 = uVar23;
  *(int *)((longlong)afStack_308 + lVar6) = iVar48;
  *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f30df0;
  local_1a4 = FUN_144f34c84(param_1,lVar26,pfVar29,iVar43);
  uVar47 = local_230;
  local_174 = local_260;
  if (((0.4 < local_1b8[0]) || (0.4 < *(float *)(param_1 + 0xe))) &&
     ((*(int *)((longlong)param_1 + 0x7c) == 0 || (0.3 < *(float *)(param_1 + 0x10))))) {
    if (((double)*(int *)((longlong)param_1 + 0x6c) * 1.26 < (double)local_260) ||
       ((double)local_260 < (double)*(int *)((longlong)param_1 + 0x6c) * 0.79)) {
      local_178 = 1;
    }
  }
  local_1a0 = 6;
  if (local_1a4 == 0) {
    if ((iVar33 == 0) && ((int)(uVar55 + 0x10) <= (int)local_230)) {
      *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f30ebd;
      FUN_144f35680(param_6,0,1);
    }
  }
  else {
    *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f30ed9;
    FUN_144f35680(param_6,1,1);
    iVar57 = local_260;
    uVar55 = local_260 + 1;
    iVar48 = 0x1f;
    if (uVar55 != 0) {
      for (; uVar55 >> iVar48 == 0; iVar48 = iVar48 + -1) {
      }
    }
    *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f30eef;
    FUN_144f35770(param_6,iVar48 + -4,6);
    *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f30f08;
    FUN_144f35820(param_6,uVar55 - (0x10 << ((char)iVar48 - 4U & 0x1f)),iVar48);
    uVar55 = uStack_24c;
    local_174 = iVar57;
    *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f30f22;
    FUN_144f35820(param_6,uVar55,3);
    uVar61 = local_170;
    *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f30f40;
    FUN_144f356e4(param_6,uVar61,&DAT_149c0a430,2);
    iVar22 = local_210;
    uVar47 = local_230;
  }
  iVar57 = local_248;
  iVar48 = *(int *)((longlong)param_1 + 0x1c);
  local_260 = 0;
  uStack_24c = 0;
  if ((iVar48 < 1) || (*(int *)((longlong)param_1 + 0x44) != 0)) {
    iVar46 = (int)local_220;
  }
  else {
    if (((iVar33 == 0) || (0xe < iStack_254)) ||
       (uVar61 = 1, *(int *)((longlong)param_1 + 0xbc) == 2)) {
      uVar61 = 0;
    }
    *(int **)((longlong)local_2f8 + lVar6) = &iStack_224;
    *(undefined4 *)((longlong)&lStack_300 + lVar6) = uVar61;
    *(int **)((longlong)afStack_308 + lVar6) = local_1e8;
    *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f30fbf;
    local_260 = FUN_144f32f68(lVar26,iVar22,iVar57,&fStack_214);
    iVar48 = *(int *)((longlong)param_1 + 0x1c);
    local_220 = CONCAT44(local_220._4_4_,local_1e8[0]);
    fVar69 = fStack_214;
    iVar46 = local_1e8[0];
  }
  iVar33 = local_264;
  if (local_264 < 1) {
LAB_144f31016:
    local_260 = 0;
    local_160 = 1;
  }
  else {
    iVar43 = 0x1f;
    if (*(uint *)(param_6 + 0x20) != 0) {
      for (; *(uint *)(param_6 + 0x20) >> iVar43 == 0; iVar43 = iVar43 + -1) {
      }
    }
    if ((int)uVar47 < (*(int *)(param_6 + 0x18) - iVar43) + 2) goto LAB_144f31016;
    uStack_24c = -(uint)(local_260 != 0) & local_228;
  }
  uVar55 = uStack_24c;
  uVar35 = (longlong)(local_234 * iVar57) * 4;
  uVar24 = uVar35 + 0xf;
  if (uVar24 <= uVar35) {
    uVar24 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x144f31053;
  uVar35 = local_158;
  lVar7 = -(uVar24 & 0xfffffffffffffff0);
  uVar24 = local_158 + 0xf;
  pfVar28 = (float *)((longlong)&local_268 + lVar7 + lVar6);
  if (uVar24 <= local_158) {
    uVar24 = 0xffffffffffffff0;
  }
  local_190 = pfVar28;
  *(undefined8 *)(auStack_328 + lVar7 + lVar6 + -8) = 0x144f31081;
  lVar8 = -(uVar24 & 0xfffffffffffffff0);
  local_1f8 = (float *)((longlong)&local_268 + lVar8 + lVar7 + lVar6);
  uVar24 = uVar35 + 0xf;
  if (uVar24 <= uVar35) {
    uVar24 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_328 + lVar8 + lVar7 + lVar6 + -8) = 0x144f310a5;
  fVar60 = local_268;
  lVar9 = -(uVar24 & 0xfffffffffffffff0);
  local_1d0 = (void *)((longlong)&local_268 + lVar9 + lVar8 + lVar7 + lVar6);
  local_210 = 8;
  if ((uVar55 == 0) || (iVar48 < 8)) {
    fVar66 = 0.0;
  }
  else {
    fVar66 = 1.4013e-45;
  }
  local_1e8[0] = iStack_22c * (int)local_268;
  local_1b0 = (ulonglong)local_1e8[0];
  uVar24 = local_1b0 * 4 + 0xf;
  if (uVar24 <= local_1b0 * 4) {
    uVar24 = 0xffffffffffffff0;
  }
  fStack_214 = fVar66;
  *(undefined8 *)(auStack_328 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x144f31109;
  piVar49 = local_240;
  lVar10 = -(uVar24 & 0xfffffffffffffff0);
  pvVar50 = (void *)((longlong)&local_268 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
  local_198 = pvVar50;
  if (fVar66 != 0.0) {
    *(undefined4 *)((longlong)local_2e8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
         *(undefined4 *)((longlong)param_1 + 0x4c);
    *(undefined4 *)((longlong)&local_2f0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
         *(undefined4 *)(param_1 + 4);
    iVar48 = local_248;
    *(int *)((longlong)local_2f8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = iVar33;
    *(int *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = iVar48;
    *(float *)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar60;
    *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x144f3115c;
    FUN_144f33544(piVar49,0,lVar26,pfVar28);
    pfVar29 = local_1f8;
    iVar48 = local_238;
    piVar49 = local_240;
    *(undefined4 *)((longlong)local_2f8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
         *(undefined4 *)((longlong)param_1 + 0x4c);
    *(int *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = local_264;
    *(float *)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar60;
    *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x144f31183;
    FUN_1452ea598(piVar49,pfVar28,pfVar29,iVar48);
    pfVar29 = local_1f8;
    iVar57 = local_238;
    piVar49 = local_240;
    iVar48 = local_258;
    *(float *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar60;
    *(void **)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = pvVar50;
    *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x144f311a1;
    FUN_1452edb84(piVar49,iVar57,iVar48,pfVar29);
    uVar24 = local_1b0;
    lVar25 = 0;
    if (0 < (longlong)local_1b0) {
      fVar63 = (float)local_264;
      do {
        *(float *)((longlong)pvVar50 + lVar25 * 4) =
             fVar63 * 0.5 + *(float *)((longlong)pvVar50 + lVar25 * 4);
        lVar25 = lVar25 + 1;
      } while (lVar25 < (longlong)uVar24);
    }
  }
  piVar49 = local_240;
  uVar55 = uStack_24c;
  *(undefined4 *)((longlong)local_2e8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       *(undefined4 *)((longlong)param_1 + 0x4c);
  *(undefined4 *)((longlong)&local_2f0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       *(undefined4 *)(param_1 + 4);
  *(int *)((longlong)local_2f8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = local_264;
  *(int *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = local_248;
  *(float *)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar60;
  *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x144f31207;
  FUN_144f33544(piVar49,uVar55,lVar26,pfVar28);
  if ((NAN(*pfVar28)) || ((fVar60 != 1.4013e-45 && (NAN(pfVar28[local_234]))))) {
    *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x144f31248;
    FUN_144bca940("assertion failed: !celt_isnan(freq[0]) && (C==1 || !celt_isnan(freq[N]))",
                  "../../../third_party/opus/src/celt/celt_encoder.c",0x6c1);
  }
  pfVar29 = local_1f8;
  iVar48 = local_238;
  piVar49 = local_240;
  if (local_248 == 2) {
    if (fVar60 == 1.4013e-45) {
      iVar46 = 0;
    }
    local_220 = CONCAT44(local_220._4_4_,iVar46);
  }
  *(undefined4 *)((longlong)local_2f8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       *(undefined4 *)((longlong)param_1 + 0x4c);
  *(int *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = local_264;
  *(float *)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar60;
  *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x144f3128f;
  FUN_1452ea598(piVar49,pfVar28,pfVar29,iVar48);
  pvVar53 = local_1d0;
  pfVar29 = local_1f8;
  piVar49 = local_240;
  iVar57 = local_258;
  uVar24 = (ulonglong)local_258;
  fVar63 = 1e-15;
  if ((*(int *)((longlong)param_1 + 0x44) != 0) && (lVar26 = 2, 2 < (longlong)uVar24)) {
    do {
      fVar65 = local_1f8[lVar26];
      if (*local_1f8 * 0.0001 <= local_1f8[lVar26]) {
        fVar65 = *local_1f8 * 0.0001;
      }
      if (fVar65 <= 1e-15) {
        fVar65 = 1e-15;
      }
      local_1f8[lVar26] = fVar65;
      lVar26 = lVar26 + 1;
    } while (lVar26 < (longlong)uVar24);
  }
  local_200 = uVar24;
  *(float *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar60;
  *(void **)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = pvVar53;
  *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x144f31306;
  FUN_1452edb84(piVar49,iVar48,iVar57,pfVar29);
  uVar35 = local_1b0 * 4 + 0xf;
  if (uVar35 <= local_1b0 * 4) {
    uVar35 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x144f3132d;
  lVar26 = -(uVar35 & 0xfffffffffffffff0);
  pvVar53 = (void *)((longlong)&local_268 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
  local_1f0 = pvVar53;
  *(undefined8 *)(auStack_328 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x144f3134d;
  memset(pvVar53,0,uVar24 << 2);
  local_1d8 = (float *)(longlong)iStack_22c;
  uVar35 = 0;
  iVar48 = 0;
  if (((local_25c == 0) && (pvVar53 = local_1f0, param_1[0x1e] != 0)) &&
     (*(int *)((longlong)param_1 + 0x44) == 0)) {
    fVar70 = 0.0;
    fVar68 = 0.0;
    uVar55 = *(uint *)(param_1 + 0xc);
    if ((int)*(uint *)(param_1 + 0xc) < 2) {
      uVar55 = 2;
    }
    if ((int)fVar60 < 1) {
LAB_144f3146c:
      *(undefined8 *)(auStack_328 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x144f31485;
      FUN_144bca940("assertion failed: count>0","../../../third_party/opus/src/celt/celt_encoder.c",
                    0x6ea);
    }
    else {
      uVar54 = (ulonglong)(uint)local_268;
      uVar37 = uVar35;
      do {
        if (0 < (int)uVar55) {
          pfVar28 = (float *)(param_1[0x1e] + uVar35);
          psVar27 = local_180;
          uVar52 = (ulonglong)uVar55;
          iVar48 = 1 - uVar55;
          do {
            auVar62 = ZEXT416((uint)*pfVar28);
            if (0.25 <= *pfVar28) {
              auVar62._4_12_ = ZEXT812(0);
              auVar62._0_4_ = 0.25;
            }
            if (auVar62._0_4_ <= -2.0) {
              auVar62._0_12_ = ZEXT812(0xc0000000);
              auVar62._12_4_ = 0;
            }
            if (0.0 < auVar62._0_4_) {
              auVar62._0_4_ = auVar62._0_4_ * 0.5;
            }
            pfVar28 = pfVar28 + 1;
            iVar57 = (int)psVar27[1] - (int)*psVar27;
            uVar37 = (ulonglong)(uint)((int)uVar37 + iVar57);
            fVar68 = fVar68 + (float)iVar48 * auVar62._0_4_;
            fVar70 = fVar70 + (float)iVar57 * auVar62._0_4_;
            uVar52 = uVar52 - 1;
            psVar27 = psVar27 + 1;
            iVar48 = iVar48 + 2;
          } while (uVar52 != 0);
        }
        iVar48 = (int)uVar37;
        uVar35 = uVar35 + (longlong)local_1d8 * 4;
        uVar54 = uVar54 - 1;
      } while (uVar54 != 0);
      param_1 = local_168;
      if (iVar48 < 1) goto LAB_144f3146c;
    }
    pvVar53 = local_1f0;
    fVar70 = fVar70 / (float)iVar48 + 0.2;
    fVar68 = ((fVar68 * 6.0) / (float)(int)((uVar55 - 1) * (uVar55 + 1) * uVar55 * (int)local_268))
             * 0.5;
    if (0.031 <= fVar68) {
      fVar68 = 0.031;
    }
    if (fVar68 <= -0.031) {
      fVar68 = -0.031;
    }
    iVar48 = 0;
    lVar25 = (longlong)(int)uVar55;
    psVar27 = local_180;
    while (psVar27 = psVar27 + 1, (int)*psVar27 < (int)local_180[lVar25] / 2) {
      iVar48 = iVar48 + 1;
    }
    iVar57 = 0;
    if (0 < lVar25) {
      pfVar28 = (float *)param_1[0x1e];
      iVar48 = -iVar48;
      lVar36 = (longlong)local_1f0 - (longlong)pfVar28;
      lVar51 = lVar25;
      do {
        auVar62 = ZEXT416((uint)*pfVar28);
        if ((local_268 == 2.8026e-45) && (*pfVar28 <= pfVar28[(longlong)local_1d8])) {
          auVar62 = ZEXT416((uint)pfVar28[(longlong)local_1d8]);
        }
        if (0.0 <= auVar62._0_4_) {
          auVar11._12_4_ = 0;
          auVar11._0_12_ = auVar62._4_12_;
          auVar62 = auVar11 << 0x20;
        }
        fVar60 = auVar62._0_4_ - ((float)iVar48 * fVar68 + fVar70);
        if (0.25 < fVar60) {
          iVar57 = iVar57 + 1;
          *(float *)(lVar36 + (longlong)pfVar28) = fVar60 - 0.25;
        }
        iVar48 = iVar48 + 1;
        pfVar28 = pfVar28 + 1;
        lVar51 = lVar51 + -1;
      } while (lVar51 != 0);
      if (2 < iVar57) {
        fVar70 = fVar70 + 0.25;
        if (fVar70 <= 0.0) {
          lVar51 = 0;
          do {
            fVar66 = *(float *)((longlong)local_1f0 + lVar51 * 4) - 0.25;
            fVar60 = 0.0;
            if (0.0 <= fVar66) {
              fVar60 = fVar66;
            }
            *(float *)((longlong)local_1f0 + lVar51 * 4) = fVar60;
            lVar51 = lVar51 + 1;
          } while (lVar51 < lVar25);
        }
        else {
          fVar70 = 0.0;
          fVar68 = 0.0;
          *(undefined8 *)(auStack_328 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
               0x144f315ad;
          memset(pvVar53,0,lVar25 << 2);
        }
      }
    }
    fVar68 = fVar68 * 64.0;
    fVar70 = fVar70 + 0.2;
    pvVar50 = local_198;
    pfVar28 = local_190;
    fVar66 = fStack_214;
  }
  _Src = local_1d0;
  iVar48 = *(int *)((longlong)param_1 + 0x44);
  if (iVar48 == 0) {
    fVar60 = -10.0;
    if (uStack_24c == 0) {
      fVar65 = 0.0;
    }
    else {
      fVar65 = (float)local_264 * 0.5;
    }
    lVar25 = (longlong)local_25c;
    if (lVar25 < (longlong)local_200) {
      lVar51 = local_200 - lVar25;
      pfVar29 = (float *)((longlong)local_1d0 + lVar25 * 4);
      do {
        fVar64 = fVar60 - 1.0;
        if (fVar60 - 1.0 <= *pfVar29 - fVar65) {
          fVar64 = *pfVar29 - fVar65;
        }
        fVar60 = fVar64;
        if ((local_268 == 2.8026e-45) && (fVar64 <= pfVar29[(longlong)local_1d8] - fVar65)) {
          fVar60 = pfVar29[(longlong)local_1d8] - fVar65;
        }
        pfVar29 = pfVar29 + 1;
        fVar67 = fVar67 + fVar60;
        lVar51 = lVar51 + -1;
      } while (lVar51 != 0);
    }
    fVar67 = fVar67 / (float)(local_258 - local_25c) - *(float *)(param_1 + 0x1f);
    fVar60 = -1.5;
    if (-1.5 <= fVar67) {
      fVar60 = fVar67;
    }
    fVar67 = 3.0;
    if (fVar60 <= 3.0) {
      fVar67 = fVar60;
    }
    *(float *)(param_1 + 0x1f) = fVar67 * 0.02 + *(float *)(param_1 + 0x1f);
  }
  if (fVar66 == 0.0) {
    _Size = local_1b0 << 2;
    *(undefined8 *)(auStack_328 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
         0x144f31701;
    memcpy(pvVar50,_Src,_Size);
  }
  puVar20 = local_1c8;
  iVar46 = iStack_22c;
  iVar57 = local_258;
  fVar60 = local_268;
  if (0 < local_264) {
    uVar55 = *(uint *)(param_6 + 0x20);
    iVar33 = *(int *)(param_6 + 0x18);
    iVar43 = 0x1f;
    if (uVar55 != 0) {
      for (; uVar55 >> iVar43 == 0; iVar43 = iVar43 + -1) {
      }
    }
    if (((((iVar33 - iVar43) + 2 <= (int)local_230) && (local_260 == 0)) &&
        (4 < *(int *)((longlong)param_1 + 0x1c))) && ((iVar48 == 0 && (local_25c == 0)))) {
      *(float *)((longlong)&lStack_300 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           local_268;
      *(int *)((longlong)afStack_308 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = iVar57;
      pvVar50 = local_1d0;
      *(undefined8 *)(auStack_328 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x144f31789;
      iVar57 = FUN_144f3336c(pvVar50,puVar20,iVar46,0);
      lVar25 = local_1e0;
      uVar47 = local_228;
      iVar48 = local_264;
      if (iVar57 != 0) {
        *(undefined4 *)((longlong)local_2e8 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
             *(undefined4 *)((longlong)param_1 + 0x4c);
        *(undefined4 *)((longlong)&local_2f0 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
             *(undefined4 *)(param_1 + 4);
        iVar57 = local_248;
        *(int *)((longlong)local_2f8 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = iVar48;
        piVar49 = local_240;
        uStack_24c = uVar47;
        *(int *)((longlong)&lStack_300 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = iVar57;
        *(float *)((longlong)afStack_308 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar60
        ;
        local_260 = 1;
        *(undefined8 *)(auStack_328 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
             0x144f317d4;
        FUN_144f33544(piVar49,uVar47,lVar25,pfVar28);
        pfVar29 = local_1f8;
        iVar57 = local_238;
        piVar49 = local_240;
        *(undefined4 *)((longlong)local_2f8 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
             *(undefined4 *)((longlong)param_1 + 0x4c);
        *(int *)((longlong)&lStack_300 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = iVar48;
        *(float *)((longlong)afStack_308 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar60
        ;
        *(undefined8 *)(auStack_328 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
             0x144f317f8;
        FUN_1452ea598(piVar49,pfVar28,pfVar29,iVar57);
        pvVar50 = local_1d0;
        pfVar29 = local_1f8;
        iVar46 = local_238;
        piVar49 = local_240;
        iVar57 = local_258;
        *(float *)((longlong)&lStack_300 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar60
        ;
        *(void **)((longlong)afStack_308 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
             pvVar50;
        *(undefined8 *)(auStack_328 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
             0x144f3181d;
        FUN_1452edb84(piVar49,iVar46,iVar57,pfVar29);
        if (0 < (longlong)local_1b0) {
          lVar25 = 0;
          do {
            *(float *)((longlong)local_198 + lVar25 * 4) =
                 (float)iVar48 * 0.5 + *(float *)((longlong)local_198 + lVar25 * 4);
            lVar25 = lVar25 + 1;
          } while (lVar25 < (longlong)local_1b0);
        }
        fVar69 = 0.2;
        uVar55 = *(uint *)(param_6 + 0x20);
        iVar33 = *(int *)(param_6 + 0x18);
      }
    }
    iVar57 = local_260;
    iVar48 = 0x1f;
    if (uVar55 != 0) {
      for (; uVar55 >> iVar48 == 0; iVar48 = iVar48 + -1) {
      }
    }
    if ((iVar33 - iVar48) + 2 <= (int)local_230) {
      *(undefined8 *)(auStack_328 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x144f31899;
      FUN_144f35680(param_6,iVar57,3);
    }
  }
  fVar60 = local_268;
  uVar37 = (longlong)(local_234 * (int)local_268) * 4;
  uVar35 = uVar37 + 0xf;
  if (uVar35 <= uVar37) {
    uVar35 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_328 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x144f318cc;
  pfVar29 = local_1f8;
  lVar51 = -(uVar35 & 0xfffffffffffffff0);
  *(uint *)((longlong)local_2f8 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       local_228;
  piVar49 = local_240;
  lVar25 = (longlong)&local_268 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
  *(float *)((longlong)&lStack_300 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       fVar60;
  *(int *)((longlong)afStack_308 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       local_238;
  local_1e0 = lVar25;
  *(undefined8 *)(auStack_328 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
       0x144f31903;
  FUN_1452ea678(piVar49,pfVar28,lVar25,pfVar29);
  iVar48 = iStack_254;
  fVar60 = local_268;
  if (((iStack_254 < (int)local_268 * 0xf) || (local_25c != 0)) ||
     ((*(int *)((longlong)param_1 + 0x1c) < 2 || (*(int *)((longlong)param_1 + 0x44) != 0)))) {
    bVar59 = false;
    uVar61 = *(undefined4 *)((longlong)param_1 + 0x44);
  }
  else {
    bVar59 = true;
    uVar61 = 0;
  }
  uVar37 = (longlong)local_1d8 * 4;
  uVar35 = uVar37 + 0xf;
  if (uVar35 <= uVar37) {
    uVar35 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_328 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
       0x144f31963;
  lVar25 = -(uVar35 & 0xfffffffffffffff0);
  uVar35 = uVar37 + 0xf;
  piVar49 = (int *)((longlong)&local_268 +
                   lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
  if (uVar35 <= uVar37) {
    uVar35 = 0xffffffffffffff0;
  }
  local_148 = piVar49;
  *(undefined8 *)
   (auStack_328 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
       0x144f3198a;
  lVar12 = -(uVar35 & 0xfffffffffffffff0);
  uVar35 = uVar37 + 0xf;
  lVar36 = (longlong)&local_268 +
           lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
  if (uVar35 <= uVar37) {
    uVar35 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   (auStack_328 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
       0x144f319b1;
  lVar13 = -(uVar35 & 0xfffffffffffffff0);
  lVar14 = (longlong)&local_268 +
           lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
  *(longlong *)
   ((longlong)&local_288 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = lVar14;
  *(longlong *)
   ((longlong)local_298 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8) = lVar36
  ;
  local_138 = lVar14;
  *(longlong *)
   ((longlong)local_298 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       (longlong)param_1 + 0x7c;
  *(void **)((longlong)&local_2a0 +
            lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       pvVar53;
  *(undefined4 *)
   ((longlong)local_2a8 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = uVar61;
  pvVar50 = local_1d0;
  *(float **)
   ((longlong)&local_2b0 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       &fStack_214;
  iVar57 = local_264;
  *(int *)((longlong)local_2c0 +
          lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8) =
       iVar48;
  iVar46 = iStack_22c;
  *(int *)((longlong)local_2c0 +
          lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       iVar57;
  *(short **)
   ((longlong)&local_2c8 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = local_180;
  *(undefined4 *)
   ((longlong)&local_2d0 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       *(undefined4 *)(param_1 + 7);
  *(undefined4 *)
   ((longlong)local_2d8 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       *(undefined4 *)(param_1 + 6);
  *(int *)((longlong)&local_2e0 +
          lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       local_260;
  *(undefined8 *)
   ((longlong)local_2e8 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       *(undefined8 *)(local_240 + 0x10);
  *(undefined4 *)
   ((longlong)&local_2f0 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       *(undefined4 *)(param_1 + 8);
  iVar48 = local_258;
  *(int **)((longlong)local_2f8 +
           lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       piVar49;
  pvVar53 = local_198;
  *(float *)((longlong)&lStack_300 +
            lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       fVar60;
  *(int *)((longlong)afStack_308 +
          lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       iVar48;
  *(undefined8 *)
   (auStack_328 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
       0x144f31a60;
  uVar61 = FUN_144f342fc(pvVar50,pvVar53,iVar46);
  uVar35 = uVar37 + 0xf;
  if (uVar35 <= uVar37) {
    uVar35 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   (auStack_328 +
   lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
       0x144f31a7f;
  iVar57 = local_238;
  iVar48 = local_260;
  lVar14 = -(uVar35 & 0xfffffffffffffff0);
  piVar49 = (int *)((longlong)&local_268 +
                   lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6);
  local_140 = piVar49;
  if (bVar59) {
    lVar56 = (longlong)local_238;
    *(longlong *)
     ((longlong)local_2d8 +
     lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
         lVar36;
    iVar46 = (int)(0x5000 / (longlong)iStack_254) + 2;
    if (iVar46 < 0x50) {
      iVar46 = 0x50;
    }
    *(int *)((longlong)&local_2e0 +
            lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = (int)local_220;
    iVar33 = local_264;
    *(float *)((longlong)local_2e8 +
              lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
         = fVar69;
    *(int *)((longlong)&local_2f0 +
            lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = iVar33;
    *(int *)((longlong)local_2f8 +
            lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = local_234;
    *(longlong *)
     ((longlong)&lStack_300 +
     lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
         local_1e0;
    piVar18 = local_240;
    *(int *)((longlong)afStack_308 +
            lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = iVar46;
    *(undefined8 *)
     (auStack_328 +
     lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 +
     -8) = 0x144f31afa;
    uVar23 = FUN_144f33764(piVar18,iVar57,iVar48,piVar49);
    uVar24 = local_200;
    local_220 = CONCAT44(local_220._4_4_,uVar23);
    for (lVar36 = lVar56; lVar36 < (longlong)uVar24; lVar36 = lVar36 + 1) {
      piVar49[lVar36] = piVar49[lVar56 + -1];
    }
  }
  else {
    if (local_25c == 0) {
LAB_144f31b6a:
      if (0 < local_258) {
LAB_144f31b73:
        for (uVar24 = uVar24 & 0x3fffffffffffffff; uVar24 != 0; uVar24 = uVar24 - 1) {
          *piVar49 = iVar48;
          piVar49 = piVar49 + 1;
        }
      }
    }
    else {
      if (iStack_224 == 0) {
        if ((iStack_254 < 0xf) && (*(int *)((longlong)param_1 + 0xbc) != 2)) {
          if (0 < local_258) {
            *(undefined8 *)
             (auStack_328 +
             lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6 + -8) = 0x144f31b60;
            memset(piVar49,0,uVar24 << 2);
          }
          local_220 = CONCAT44(local_220._4_4_,local_260);
          uVar24 = local_200;
          goto LAB_144f31b86;
        }
        goto LAB_144f31b6a;
      }
      if (0 < local_258) {
        iVar48 = 1;
        goto LAB_144f31b73;
      }
    }
    local_220 = local_220 & 0xffffffff00000000;
    uVar24 = local_200;
  }
LAB_144f31b86:
  uVar35 = local_1b0 * 4 + 0xf;
  if (uVar35 <= local_1b0 * 4) {
    uVar35 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   (auStack_328 +
   lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8
   ) = 0x144f31bad;
  puVar45 = local_168;
  pvVar50 = local_1d0;
  iVar46 = local_238;
  iVar57 = local_258;
  iVar48 = local_264;
  local_1f0 = (void *)(longlong)local_25c;
  lVar56 = -(uVar35 & 0xfffffffffffffff0);
  iVar43 = 0;
  iVar33 = 0;
  lVar36 = (longlong)&local_268 +
           lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6;
  do {
    if ((longlong)local_1f0 < (longlong)uVar24) {
      pfVar28 = (float *)(((longlong)iVar33 + (longlong)local_1f0) * 4 + (longlong)local_1d0);
      lVar38 = uVar24 - (longlong)local_1f0;
      do {
        pfVar29 = (float *)(((longlong)local_130 - (longlong)local_1d0) + (longlong)pfVar28);
        if (ABS(*pfVar28 -
                *(float *)((longlong)pfVar29 + ((longlong)local_1c8 - (longlong)local_130))) < 2.0)
        {
          *pfVar28 = *pfVar28 - *pfVar29 * 0.25;
        }
        pfVar28 = pfVar28 + 1;
        lVar38 = lVar38 + -1;
        fVar60 = local_268;
      } while (lVar38 != 0);
    }
    iVar43 = iVar43 + 1;
    iVar33 = iVar33 + iStack_22c;
  } while (iVar43 < (int)fVar60);
  puVar1 = local_168 + 0xb;
  iVar33 = *(int *)((longlong)local_168 + 0x1c);
  local_190 = (float *)lVar36;
  *(undefined4 *)
   ((longlong)local_2a8 +
   lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) =
       *(undefined4 *)((longlong)local_168 + 0x44);
  *(undefined4 *)
   ((longlong)&local_2b0 +
   lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = *(undefined4 *)((longlong)puVar45 + 0x3c)
  ;
  uVar23 = *(undefined4 *)(puVar45 + 2);
  *(uint *)((longlong)local_2c0 +
           lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6 + 8) = (uint)(3 < iVar33);
  iVar33 = local_25c;
  *(undefined8 **)
   ((longlong)local_2c0 +
   lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = puVar1;
  piVar49 = local_240;
  *(undefined4 *)
   ((longlong)&local_2c8 +
   lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = uVar23;
  *(int *)((longlong)&local_2d0 +
          lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6) = local_218;
  uVar55 = local_230;
  *(int *)((longlong)local_2d8 +
          lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6) = iVar48;
  *(float *)((longlong)&local_2e0 +
            lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6) = fVar60;
  *(undefined1 **)
   ((longlong)local_2e8 +
   lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = param_6;
  *(longlong *)
   ((longlong)&local_2f0 +
   lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = lVar36;
  *(uint *)((longlong)local_2f8 +
           lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6) = uVar55;
  *(undefined4 **)
   ((longlong)&lStack_300 +
   lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = local_1c8;
  *(void **)((longlong)afStack_308 +
            lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6) = pvVar50;
  *(undefined8 *)
   (auStack_328 +
   lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6 + -8) = 0x144f31d03;
  FUN_1452edc70(piVar49,iVar33,iVar57,iVar46);
  piVar49 = local_140;
  uVar35 = local_200;
  iVar57 = 0x1f;
  if (*(uint *)(param_6 + 0x20) != 0) {
    for (; *(uint *)(param_6 + 0x20) >> iVar57 == 0; iVar57 = iVar57 + -1) {
    }
  }
  iVar33 = *(int *)(param_6 + 8);
  iVar43 = (*(int *)(param_6 + 0x18) - iVar57) + -1;
  iVar46 = (-(uint)(local_260 != 0) & 0xfffffffe) + 4;
  if ((iVar48 < 1) || ((uint)(iVar33 * 8) < (uint)(iVar46 + (*(int *)(param_6 + 0x18) - iVar57)))) {
    iVar48 = 0;
    iStack_224 = 0;
  }
  else {
    iVar48 = 1;
    iStack_224 = 1;
  }
  uVar47 = 0;
  uVar55 = 0;
  iVar57 = (int)local_220;
  if ((longlong)local_1f0 < (longlong)uVar24) {
    bVar59 = local_260 != 0;
    pvVar50 = local_1f0;
    uVar47 = 0;
    do {
      if ((uint)(iVar33 * 8 - iVar48) < (uint)(iVar46 + iVar43)) {
        piVar49[(longlong)pvVar50] = uVar55;
      }
      else {
        uVar5 = piVar49[(longlong)pvVar50];
        *(undefined8 *)
         (auStack_328 +
         lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6 + -8) = 0x144f31d98;
        FUN_144f35680(param_6,uVar55 ^ uVar5);
        iVar57 = 0x1f;
        if (*(uint *)(param_6 + 0x20) != 0) {
          for (; *(uint *)(param_6 + 0x20) >> iVar57 == 0; iVar57 = iVar57 + -1) {
          }
        }
        uVar55 = piVar49[(longlong)pvVar50];
        iVar43 = (*(int *)(param_6 + 0x18) - iVar57) + -1;
        uVar47 = uVar47 | uVar55;
      }
      pvVar50 = (void *)((longlong)pvVar50 + 1);
      iVar46 = 5 - (uint)bVar59;
    } while ((longlong)pvVar50 < (longlong)uVar35);
    puVar45 = local_168;
    iVar57 = (int)local_220;
    iVar48 = iStack_224;
  }
  pvVar50 = local_1f0;
  lVar36 = (longlong)local_264;
  iVar46 = 0;
  if ((iVar48 != 0) &&
     (lVar38 = (longlong)(int)(uVar47 + local_260 * 4) + lVar36 * 8,
     (&DAT_14997e9c8)[lVar38] != (&DAT_14997e9ca)[lVar38])) {
    *(undefined8 *)
     (auStack_328 +
     lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
     -8) = 0x144f31e18;
    FUN_144f35680(param_6,iVar57,1);
    iVar46 = iVar57;
  }
  uVar55 = local_230;
  fVar60 = local_268;
  pvVar53 = pvVar50;
  if ((longlong)pvVar50 < (longlong)local_200) {
    do {
      local_140[(longlong)pvVar50] =
           (int)(char)(&DAT_14997e9c8)
                      [(longlong)(local_140[(longlong)pvVar50] + (local_260 * 2 + iVar46) * 2) +
                       lVar36 * 8];
      pvVar50 = (void *)((longlong)pvVar50 + 1);
      pvVar53 = local_1f0;
    } while ((longlong)pvVar50 < (longlong)local_200);
  }
  uVar23 = 0;
  iVar48 = 0x1f;
  if (*(uint *)(param_6 + 0x20) != 0) {
    for (; *(uint *)(param_6 + 0x20) >> iVar48 == 0; iVar48 = iVar48 + -1) {
    }
  }
  if ((*(int *)(param_6 + 0x18) - iVar48) + 3 <= (int)local_230) {
    if (*(int *)((longlong)puVar45 + 0x44) == 0) {
      if (local_25c == 0) {
        if (((uStack_24c != 0) || (*(int *)((longlong)puVar45 + 0x1c) < 3)) ||
           (local_218 < (int)local_268 * 10)) {
          if (*(int *)((longlong)puVar45 + 0x1c) != 0) goto LAB_144f31ec8;
          goto LAB_144f322ca;
        }
        bVar59 = local_1a4 != 0;
        *(longlong *)
         ((longlong)local_2d8 +
         lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6) = local_138;
        *(uint *)((longlong)&local_2e0 +
                 lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = local_228;
        iVar48 = local_238;
        *(float *)((longlong)local_2e8 +
                  lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = fVar60;
        uVar23 = *(undefined4 *)((longlong)puVar45 + 0x54);
        *(int *)((longlong)&local_2f0 +
                lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = iVar48;
        lVar36 = local_1e0;
        *(uint *)((longlong)local_2f8 +
                 lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = (uint)bVar59;
        *(undefined8 **)
         ((longlong)&lStack_300 +
         lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6) = puVar45 + 0xd;
        piVar49 = local_240;
        *(longlong *)
         ((longlong)afStack_308 +
         lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6) = (longlong)puVar45 + 100;
        *(undefined8 *)
         (auStack_328 +
         lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6 + -8) = 0x144f322bb;
        uVar23 = FUN_1452ea940(piVar49,lVar36,(longlong)puVar45 + 0x5c,uVar23);
      }
      else {
        if (*(int *)((longlong)puVar45 + 0x1c) == 0) {
LAB_144f322ca:
          *(undefined4 *)((longlong)puVar45 + 0x54) = 0;
          goto LAB_144f31ed0;
        }
        uVar23 = 3;
        if (local_260 != 0) {
LAB_144f31ec8:
          uVar23 = 2;
        }
      }
      *(undefined4 *)((longlong)puVar45 + 0x54) = uVar23;
    }
    else {
      uVar23 = 2;
      *(undefined4 *)(puVar45 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar45 + 0x54) = 2;
    }
LAB_144f31ed0:
    *(undefined8 *)
     (auStack_328 +
     lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
     -8) = 0x144f31ee7;
    FUN_144f356e4(param_6,uVar23,&DAT_149c0a42c,5);
  }
  if (*(int *)((longlong)puVar45 + 0x44) != 0) {
    iVar48 = iStack_254 / 3 + (iStack_254 >> 0x1f) +
             (int)(((longlong)iStack_254 / 3 + ((longlong)iStack_254 >> 0x3f) & 0xffffffffU) >> 0x1f
                  );
    if (8 < iVar48) {
      iVar48 = 8;
    }
    *local_148 = iVar48;
  }
  uVar35 = (longlong)local_1d8 * 4;
  uVar24 = uVar35 + 0xf;
  if (uVar24 <= uVar35) {
    uVar24 = 0xffffffffffffff0;
  }
  local_220 = uVar35;
  *(undefined8 *)
   (auStack_328 +
   lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6 + -8) = 0x144f31f3a;
  piVar49 = local_240;
  iVar48 = local_264;
  fVar60 = local_268;
  lVar38 = -(uVar24 & 0xfffffffffffffff0);
  lVar36 = (longlong)&local_268 +
           lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6;
  local_138 = lVar36;
  *(undefined8 *)
   (auStack_328 +
   lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6 + -8) = 0x144f31f60;
  FUN_144bcad40(piVar49,lVar36,iVar48,fVar60);
  iVar48 = uVar55 << 3;
  iStack_254 = 0;
  iStack_224 = iVar48;
  *(undefined8 *)
   (auStack_328 +
   lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6 + -8) = 0x144f31f76;
  iVar46 = FUN_1452e891c(param_6);
  local_228 = iVar46;
  iVar57 = 0;
  if ((longlong)pvVar53 < (longlong)local_200) {
    lVar36 = lVar36 - (longlong)local_148;
    local_198 = pvVar53;
    iVar33 = 0;
    puVar58 = (uint *)(local_148 + (longlong)local_1f0);
    uVar24 = local_200;
    do {
      bVar31 = (byte)local_264 & 0x1f;
      iVar43 = ((int)local_180[(longlong)local_198 + 1] - (int)local_180[(longlong)local_198]) *
               (int)local_268 << bVar31;
      iVar57 = iVar43;
      if (iVar43 < 0x30) {
        iVar57 = 0x30;
      }
      if (iVar43 << 3 < iVar57) {
        iVar57 = iVar43 << 3;
      }
      uVar47 = 0 << bVar31;
      uVar35 = (ulonglong)uVar47;
      iVar48 = iVar48 - iVar33;
      uVar55 = uVar47;
      iVar43 = local_1a0;
      if (iVar46 + local_1a0 * 8 < iVar48) {
        do {
          if (*(int *)(lVar36 + (longlong)puVar58) <= (int)uVar47) break;
          uVar5 = *puVar58;
          *(undefined8 *)
           (auStack_328 +
           lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x144f3201e;
          FUN_144f35680(param_6,CONCAT71((int7)(uVar35 >> 8),(int)uVar55 < (int)uVar5),iVar43);
          *(undefined8 *)
           (auStack_328 +
           lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x144f3202a;
          iVar46 = FUN_1452e891c(param_6);
          if ((int)uVar5 <= (int)uVar55) break;
          iStack_254 = iStack_254 + iVar57;
          uVar55 = uVar55 + 1;
          iVar43 = 1;
          uVar47 = uVar47 + iVar57;
          iVar48 = iVar48 - iVar57;
          uVar35 = 0;
        } while (iVar46 + 8 < iVar48);
        local_228 = iVar46;
        uVar24 = local_200;
        iVar33 = iStack_254;
        if (uVar55 != 0) {
          local_1a0 = local_1a0 + -1;
          if (local_1a0 < 2) {
            local_1a0 = 2;
          }
        }
      }
      pvVar50 = (void *)((longlong)local_198 + 1);
      *puVar58 = uVar47;
      puVar58 = puVar58 + 1;
      local_198 = pvVar50;
      puVar45 = local_168;
      uVar35 = local_220;
      iVar48 = iStack_224;
      iVar57 = iStack_254;
    } while ((longlong)pvVar50 < (longlong)uVar24);
  }
  uVar55 = local_228;
  iVar46 = local_264;
  if (local_268 == 2.8026e-45) {
    if (local_264 != 0) {
      fVar60 = 1e-15;
      lVar36 = 0xd;
      psVar27 = *(short **)(local_240 + 8);
      do {
        sVar4 = *psVar27;
        bVar31 = (byte)local_264;
        psVar27 = psVar27 + 1;
        lVar42 = (longlong)((int)sVar4 << (bVar31 & 0x1f));
        lVar39 = (longlong)((int)*psVar27 << (bVar31 & 0x1f));
        if (lVar42 < lVar39) {
          pfVar28 = (float *)(lVar42 * 4 + local_1e0);
          lVar39 = lVar39 - lVar42;
          do {
            fVar66 = pfVar28[local_234];
            fVar65 = *pfVar28;
            fVar64 = *pfVar28;
            fVar3 = *pfVar28;
            pfVar28 = pfVar28 + 1;
            fVar63 = ABS(fVar66) + ABS(fVar65) + fVar63;
            fVar60 = ABS(fVar64 - fVar66) + ABS(fVar66 + fVar3) + fVar60;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      iVar43 = (int)(*(short **)(local_240 + 8))[0xd] << (bVar31 + 1 & 0x1f);
      iVar33 = 5;
      if (1 < local_264) {
        iVar33 = 0xd;
      }
      local_1bc = (uint)((float)iVar43 * fVar63 < (float)(iVar33 + iVar43) * fVar60 * 0.707107);
      uVar35 = local_220;
    }
    *(int *)((longlong)afStack_308 +
            lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 +
                                                                                             lVar8 +
                                                                                             lVar7 +
                                                                                             lVar6)
         = *(int *)((longlong)puVar45 + 0xec);
    *(undefined8 *)
     (auStack_328 +
     lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6 + -8) = 0x144f32223;
    iVar41 = FUN_1452ebf28(0xd,&DAT_149c0a440,&DAT_149c0a4a0,0x15);
    iVar43 = local_25c;
    if (local_25c <= iVar41) {
      iVar43 = iVar41;
    }
    iVar33 = local_258;
    if ((iVar43 <= local_258) && (iVar33 = iVar41, iVar41 < local_25c)) {
      iVar33 = local_25c;
    }
    *(int *)((longlong)puVar45 + 0xec) = iVar33;
  }
  else {
    iVar33 = *(int *)((longlong)puVar45 + 0xec);
  }
  iVar43 = local_258;
  fVar60 = local_268;
  if ((int)(uVar55 + 0x30) <= iVar48 - iVar57) {
    if ((local_25c < 1) && (*(int *)((longlong)puVar45 + 0x44) == 0)) {
      *(undefined4 *)
       ((longlong)local_2c0 +
       lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) =
           *(undefined4 *)((longlong)puVar45 + 0x4c);
      *(int *)((longlong)&local_2c8 +
              lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9
                                                                                               + 
                                                  lVar8 + lVar7 + lVar6) = local_208;
      *(float *)((longlong)&local_2d0 +
                lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = fVar68;
      *(int *)((longlong)local_2d8 +
              lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9
                                                                                               + 
                                                  lVar8 + lVar7 + lVar6) = iVar33;
      lVar36 = local_1e0;
      *(float *)((longlong)&local_2e0 +
                lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = fVar69;
      *(undefined8 **)
       ((longlong)local_2e8 +
       lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = puVar45 + 0x1d;
      piVar49 = local_240;
      *(longlong *)
       ((longlong)&local_2f0 +
       lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = (longlong)puVar45 + 0x7c;
      *(int *)((longlong)local_2f8 +
              lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9
                                                                                               + 
                                                  lVar8 + lVar7 + lVar6) = local_234;
      *(float *)((longlong)&lStack_300 +
                lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = fVar60;
      pvVar50 = local_1d0;
      *(int *)((longlong)afStack_308 +
              lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9
                                                                                               + 
                                                  lVar8 + lVar7 + lVar6) = iVar46;
      *(undefined8 *)
       (auStack_328 +
       lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x144f32371;
      uVar23 = FUN_144f33ec4(piVar49,lVar36,pvVar50,iVar43);
    }
    else {
      *(undefined4 *)(puVar45 + 0x1d) = 0;
      uVar23 = 5;
    }
    local_1a8 = uVar23;
    *(undefined8 *)
     (auStack_328 +
     lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6 + -8) = 0x144f323a2;
    FUN_144f356e4(param_6,uVar23,&DAT_149c0a420);
    *(undefined8 *)
     (auStack_328 +
     lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6 + -8) = 0x144f323aa;
    uVar55 = FUN_1452e891c(param_6);
  }
  piVar49 = local_240;
  fVar68 = local_268;
  if (0 < iStack_20c) {
    bVar31 = (byte)local_1c0;
    local_1a4 = 0x4fb >> (bVar31 & 0x1f);
    bVar32 = (char)local_240[10] - (char)local_264;
    if (local_250 < local_1a4) {
      local_1a4 = local_250;
    }
    if (local_25c == 0) {
      iVar48 = iStack_20c + (int)local_268 * -0x140 + -0xa0;
    }
    else {
      iVar48 = iStack_20c + (int)local_268 * -0x48 + -0x20;
      if (iVar48 < 0) {
        iVar48 = 0;
      }
    }
    iVar46 = *(int *)(puVar45 + 7);
    if (iVar46 != 0) {
      iVar48 = iVar48 + (*(int *)((longlong)puVar45 + 0xdc) >> (bVar32 & 0x1f));
    }
    if (local_25c == 0) {
      lVar36 = puVar45[0x1e];
      uVar23 = *(undefined4 *)(puVar45 + 0x1d);
      *(float *)((longlong)&local_2a0 +
                lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = fVar67;
      *(float *)((longlong)local_2a8 +
                lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = fVar70;
      *(uint *)((longlong)&local_2b0 +
               lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) =
           (uint)(lVar36 != 0);
      *(undefined4 *)
       ((longlong)local_2c0 +
       lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + 8) =
           *(undefined4 *)((longlong)puVar45 + 0x44);
      uVar21 = local_178;
      *(undefined4 *)
       ((longlong)local_2c0 +
       lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = uVar61;
      *(undefined4 *)
       ((longlong)&local_2c8 +
       lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = uVar21;
      fVar67 = fStack_214;
      *(float *)((longlong)&local_2d0 +
                lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = fVar69;
      *(float *)((longlong)local_2d8 +
                lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = fVar67;
      uVar61 = *(undefined4 *)((longlong)puVar45 + 0xec);
      *(undefined4 *)
       ((longlong)&local_2e0 +
       lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = uVar23;
      *(int *)((longlong)local_2e8 +
              lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9
                                                                                               + 
                                                  lVar8 + lVar7 + lVar6) = iVar46;
      *(undefined4 *)
       ((longlong)&local_2f0 +
       lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = uVar61;
      uVar61 = *(undefined4 *)(puVar45 + 0xc);
      *(float *)((longlong)local_2f8 +
                lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = fVar68;
      *(undefined4 *)
       ((longlong)&lStack_300 +
       lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = uVar61;
      *(int *)((longlong)afStack_308 +
              lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9
                                                                                               + 
                                                  lVar8 + lVar7 + lVar6) = local_208;
      *(undefined8 *)
       (auStack_328 +
       lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x144f324bd;
      iVar33 = FUN_144f35268(piVar49,(longlong)puVar45 + 0x7c,iVar48);
    }
    else {
      if (*(int *)(puVar45 + 0x18) < 100) {
        iVar48 = iVar48 + (0x60 >> (bVar31 & 0x1f));
      }
      if (100 < *(int *)(puVar45 + 0x18)) {
        iVar48 = iVar48 - (0x90 >> (bVar31 & 0x1f));
      }
      iVar48 = iVar48 + (int)((fVar69 - 0.25) * 400.0);
      iVar33 = iVar48;
      if ((0.7 < fVar69) && (iVar33 = 400, 400 < iVar48)) {
        iVar33 = iVar48;
      }
    }
    iVar43 = ((int)(uVar55 + 0x3f + iVar57) >> 6) + 2;
    iVar48 = iVar43;
    if ((local_25c != 0) && (iVar48 = local_188 + 0x167 + iVar57 >> 6, iVar48 < iVar43)) {
      iVar48 = iVar43;
    }
    iVar57 = (int)(iVar33 + uVar55 + 0x20) >> 6;
    if (iVar57 < iVar48) {
      iVar57 = iVar48;
    }
    if (local_1a4 < iVar57) {
      iVar57 = local_1a4;
    }
    iVar48 = iVar57 << 6;
    if (uStack_204 != 0) {
      iVar57 = 2;
      iVar48 = 0x80;
    }
    iVar43 = *(int *)(puVar45 + 0x1c);
    iVar41 = 0;
    if (uStack_204 == 0) {
      iVar41 = (iVar33 + uVar55) - iStack_20c;
    }
    if (iVar43 < 0x3ca) {
      *(int *)(puVar45 + 0x1c) = iVar43 + 1;
      fVar67 = 1.0 / (float)(iVar43 + 0x15);
    }
    else {
      fVar67 = 0.001;
    }
    if ((iVar46 != 0) &&
       (*(int *)((longlong)puVar45 + 0xd4) =
             *(int *)((longlong)puVar45 + 0xd4) + (iVar48 - iStack_20c), iVar46 != 0)) {
      iVar48 = *(int *)((longlong)puVar45 + 0xd4);
      iVar46 = (int)((float)(((iVar41 << (bVar32 & 0x1f)) - *(int *)(puVar45 + 0x1b)) -
                            *(int *)((longlong)puVar45 + 0xdc)) * fVar67) + *(int *)(puVar45 + 0x1b)
      ;
      *(int *)(puVar45 + 0x1b) = iVar46;
      *(int *)((longlong)puVar45 + 0xdc) = -iVar46;
      if (iVar48 < 0) {
        *(undefined4 *)((longlong)puVar45 + 0xd4) = 0;
        iVar48 = -((int)(iVar48 + (iVar48 >> 0x1f & 0x3fU)) >> 6);
        if (uStack_204 != 0) {
          iVar48 = 0;
        }
        iVar57 = iVar57 + iVar48;
      }
    }
    if (local_1a4 < iVar57) {
      iVar57 = local_1a4;
    }
    local_250 = iVar57;
    *(undefined8 *)
     (auStack_328 +
     lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6 + -8) = 0x144f3264a;
    FUN_144f35988(param_6,iVar57);
  }
  uVar24 = uVar35 + 0xf;
  if (uVar24 <= uVar35) {
    uVar24 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   (auStack_328 +
   lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6 + -8) = 0x144f32669;
  lVar39 = -(uVar24 & 0xfffffffffffffff0);
  uVar24 = uVar35 + 0xf;
  lVar36 = (longlong)&local_268 +
           lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6;
  if (uVar24 <= uVar35) {
    uVar24 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   (auStack_328 +
   lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 + lVar9 +
                                                                                             lVar8 +
                                                                                             lVar7 +
                                                                                             lVar6 +
   -8) = 0x144f32689;
  lVar15 = -(uVar24 & 0xfffffffffffffff0);
  uVar24 = local_220 + 0xf;
  lVar42 = (longlong)&local_268 +
           lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 +
                                                                                            lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6;
  if (uVar24 <= local_220) {
    uVar24 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   (auStack_328 +
   lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 + lVar10 
                                                  + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
       0x144f326ad;
  lVar16 = -(uVar24 & 0xfffffffffffffff0);
  iVar33 = local_250 * 0x40;
  lVar2 = (longlong)&local_268 +
          lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + 
                                                  lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
  *(undefined8 *)
   (auStack_328 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
       0x144f326c6;
  iVar46 = FUN_1452e891c(param_6);
  piVar49 = local_148;
  iVar57 = local_258;
  iVar48 = local_264;
  iVar46 = iVar33 - iVar46;
  if (((local_260 == 0) || (local_264 < 2)) || (iVar46 <= local_264 * 8 + 0x10)) {
    iVar43 = 0;
    local_210 = 0;
  }
  else {
    iVar43 = 8;
  }
  iVar41 = local_258 + -1;
  if (*(int *)((longlong)puVar45 + 0x7c) != 0) {
    if (local_208 < (int)local_268 * 32000) {
      iVar41 = 0xd;
    }
    else if (local_208 < (int)local_268 * 48000) {
      iVar41 = 0x10;
    }
    else if (local_208 < (int)local_268 * 60000) {
      iVar41 = 0x12;
    }
    else {
      iVar41 = ((int)local_268 * 80000 <= local_208) + 0x13;
    }
    if (iVar41 < *(int *)((longlong)puVar45 + 0x9c)) {
      iVar41 = *(int *)((longlong)puVar45 + 0x9c);
    }
  }
  uVar61 = *(undefined4 *)(puVar45 + 0xc);
  if (*(int *)((longlong)puVar45 + 0x44) != 0) {
    iVar41 = 1;
  }
  *(int *)((longlong)local_298 +
          lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + 
                                                  lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       iVar41;
  piVar18 = local_240;
  *(undefined4 *)
   ((longlong)&local_2a0 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = uVar61
  ;
  fVar67 = local_268;
  *(undefined4 *)
   ((longlong)local_2a8 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 1;
  *(undefined1 **)
   ((longlong)&local_2b0 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       param_6;
  *(int *)((longlong)local_2c0 +
          lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + 
                                                  lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 +
          8) = iVar48;
  *(float *)((longlong)local_2c0 +
            lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = fVar67;
  *(longlong *)
   ((longlong)&local_2c8 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = lVar2;
  *(longlong *)
   ((longlong)&local_2d0 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = lVar36
  ;
  *(longlong *)
   ((longlong)local_2d8 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = lVar42
  ;
  *(undefined4 **)
   ((longlong)&local_2e0 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       local_150;
  *(int *)((longlong)local_2e8 +
          lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + 
                                                  lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       (iVar46 + -1) - iVar43;
  iVar48 = local_25c;
  *(uint **)((longlong)&local_2f0 +
            lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = &local_1bc;
  *(longlong *)
   ((longlong)local_2f8 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       (longlong)puVar45 + 0xec;
  *(undefined4 *)
   ((longlong)&lStack_300 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       local_1a8;
  *(longlong *)
   ((longlong)afStack_308 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       local_138;
  *(undefined8 *)
   (auStack_328 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
       0x144f327fc;
  iVar43 = FUN_1452e95d8(piVar18,iVar48,iVar57,piVar49);
  puVar20 = local_1c8;
  piVar49 = local_240;
  iVar57 = local_258;
  iVar48 = *(int *)(puVar45 + 0xc);
  iVar46 = iVar43;
  if (iVar48 != 0) {
    iVar41 = iVar48 + -1;
    iVar22 = iVar43;
    if (iVar43 < iVar41) {
      iVar22 = iVar41;
    }
    iVar46 = iVar48 + 1;
    if ((iVar22 <= iVar48 + 1) && (iVar46 = iVar43, iVar43 < iVar41)) {
      iVar46 = iVar41;
    }
  }
  *(float *)((longlong)&local_2f0 +
            lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = local_268;
  pfVar28 = local_190;
  *(undefined1 **)
   ((longlong)local_2f8 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       param_6;
  iVar48 = local_25c;
  *(int *)(puVar45 + 0xc) = iVar46;
  *(longlong *)
   ((longlong)&lStack_300 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = lVar36
  ;
  *(float **)
   ((longlong)afStack_308 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       pfVar28;
  *(undefined8 *)
   (auStack_328 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
       0x144f32857;
  FUN_1452ee214(piVar49,iVar48,iVar57,puVar20);
  uVar24 = local_1b0 + 0xf;
  if (uVar24 <= local_1b0) {
    uVar24 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   (auStack_328 +
   lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 + lVar26 
                                                  + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
       0x144f3287a;
  lVar19 = local_1e0;
  iVar48 = local_258;
  lVar17 = -(uVar24 & 0xfffffffffffffff0);
  iVar33 = iVar33 - local_210;
  lVar40 = 0;
  if (local_268 == 2.8026e-45) {
    lVar40 = local_1e0 + (longlong)local_234 * 4;
  }
  *(undefined4 *)
   ((longlong)auStack_280 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6
   + 8) = *(undefined4 *)(puVar45 + 9);
  *(undefined4 *)
   ((longlong)auStack_280 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = *(undefined4 *)((longlong)puVar45 + 0x4c);
  *(undefined4 *)
   ((longlong)&local_288 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = *(undefined4 *)((longlong)puVar45 + 0x1c);
  iVar57 = local_264;
  *(undefined8 **)
   ((longlong)local_298 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6
   + 8) = puVar45 + 10;
  *(int *)((longlong)local_298 +
          lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + 
                                                  lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
       = iVar43;
  *(int *)((longlong)&local_2a0 +
          lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + 
                                                  lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
       = iVar57;
  *(undefined1 **)
   ((longlong)local_2a8 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = param_6;
  *(undefined4 *)
   ((longlong)&local_2b0 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = local_150[0];
  piVar18 = local_140;
  *(int *)((longlong)local_2c0 +
          lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + 
                                                  lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
          8) = iVar33;
  piVar49 = local_240;
  *(int **)((longlong)local_2c0 +
           lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 +
                                                                                            lVar51 +
                                                                                            lVar26 +
                                                                                            lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = piVar18;
  *(undefined4 *)
   ((longlong)&local_2c8 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = *(undefined4 *)((longlong)puVar45 + 0xec);
  *(uint *)((longlong)&local_2d0 +
           lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 +
                                                                                            lVar51 +
                                                                                            lVar26 +
                                                                                            lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = local_1bc;
  *(undefined4 *)
   ((longlong)local_2d8 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = *(undefined4 *)((longlong)puVar45 + 0x54);
  *(uint *)((longlong)&local_2e0 +
           lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 +
                                                                                            lVar51 +
                                                                                            lVar26 +
                                                                                            lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = uStack_24c;
  pfVar28 = local_1f8;
  *(longlong *)
   ((longlong)local_2e8 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = lVar42;
  *(float **)
   ((longlong)&local_2f0 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = pfVar28;
  *(longlong *)
   ((longlong)local_2f8 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = (longlong)&local_268 +
         lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + 
                                                  lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6;
  *(longlong *)
   ((longlong)&lStack_300 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = lVar40;
  *(longlong *)
   ((longlong)afStack_308 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = lVar19;
  iVar57 = local_25c;
  *(undefined8 *)
   (auStack_328 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6
   + -8) = 0x144f32965;
  FUN_1452eacc0(1,piVar49,iVar57,iVar48);
  if (local_210 != 0) {
    iVar48 = *(int *)(puVar45 + 0xf);
    *(undefined8 *)
     (auStack_328 +
     lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + 
                                                  lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
     -8) = 0x144f32983;
    FUN_144f35820(param_6,iVar48 < 2,1);
  }
  puVar20 = local_1c8;
  iVar46 = local_250;
  iVar57 = local_258;
  iVar48 = 0x1f;
  if (*(uint *)(param_6 + 0x20) != 0) {
    for (; *(uint *)(param_6 + 0x20) >> iVar48 == 0; iVar48 = iVar48 + -1) {
    }
  }
  *(float *)((longlong)&local_2e0 +
            lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 
                                                  + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) = local_268;
  iVar33 = local_25c;
  *(undefined1 **)
   ((longlong)local_2e8 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = param_6;
  *(int *)((longlong)&local_2f0 +
          lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + 
                                                  lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
       = (iVar46 * 8 - *(int *)(param_6 + 0x18)) + iVar48 + 1;
  *(longlong *)
   ((longlong)local_2f8 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = lVar2;
  *(longlong *)
   ((longlong)&lStack_300 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = lVar36;
  pfVar28 = local_190;
  *(float **)
   ((longlong)afStack_308 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = local_190;
  *(undefined8 *)
   (auStack_328 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6
   + -8) = 0x144f329d3;
  FUN_1452ee388(piVar49,iVar33,iVar57,puVar20);
  puVar30 = local_130;
  uVar24 = local_158;
  *(undefined8 *)
   (auStack_328 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6
   + -8) = 0x144f329eb;
  memset(puVar30,0,uVar24);
  puVar20 = local_1c8;
  pvVar50 = local_1f0;
  uVar35 = local_200;
  uVar24 = local_220;
  iVar57 = 0;
  iVar48 = iVar57;
  do {
    if ((longlong)local_1f0 < (longlong)local_200) {
      pfVar29 = (float *)(puVar30 + (longlong)iVar57 + (longlong)local_1f0);
      lVar36 = local_200 - (longlong)local_1f0;
      do {
        fVar67 = *(float *)(((longlong)pfVar28 - (longlong)puVar30) + (longlong)pfVar29);
        fVar68 = 0.5;
        if (fVar67 <= 0.5) {
          fVar68 = fVar67;
        }
        if (fVar68 < -0.5) {
          fVar68 = -0.5;
        }
        *pfVar29 = fVar68;
        pfVar29 = pfVar29 + 1;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
    }
    iVar48 = iVar48 + 1;
    iVar57 = iVar57 + iStack_22c;
  } while (iVar48 < (int)local_268);
  if ((uStack_204 != 0) && (0 < local_1e8[0])) {
    puVar30 = local_1c8;
    for (uVar37 = local_1b0 & 0x3fffffffffffffff; uVar37 != 0; uVar37 = uVar37 - 1) {
      *puVar30 = 0xc1e00000;
      puVar30 = puVar30 + 1;
    }
  }
  *(int *)((longlong)puVar45 + 0x6c) = local_174;
  *(undefined4 *)((longlong)puVar45 + 0x74) = local_170;
  *(float *)(puVar45 + 0xe) = local_1b8[0];
  if ((local_248 == 2) && (local_268 == 1.4013e-45)) {
    pvVar53 = (void *)(local_220 + (longlong)local_1c8);
    *(undefined8 *)
     (auStack_328 +
     lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + 
                                                  lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
     -8) = 0x144f32ad8;
    memcpy(pvVar53,puVar20,uVar24);
  }
  uVar24 = local_158;
  if (local_260 == 0) {
    pvVar53 = (void *)(local_158 + (longlong)puVar20);
    lVar36 = local_158 * 2;
    *(undefined8 *)
     (auStack_328 +
     lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + 
                                                  lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
     -8) = 0x144f32af8;
    memcpy((void *)((longlong)puVar20 + lVar36),pvVar53,uVar24);
    *(undefined8 *)
     (auStack_328 +
     lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + 
                                                  lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
     -8) = 0x144f32b07;
    memcpy((void *)(uVar24 + (longlong)puVar20),puVar20,uVar24);
  }
  else {
    pfVar28 = local_128;
    lVar36 = local_120;
    if (0 < local_120) {
      do {
        fVar67 = *pfVar28;
        if (*(float *)((longlong)pfVar28 - local_158) <= *pfVar28) {
          fVar67 = *(float *)((longlong)pfVar28 - local_158);
        }
        *pfVar28 = fVar67;
        lVar36 = lVar36 + -1;
        pfVar28 = pfVar28 + 1;
      } while (lVar36 != 0);
    }
  }
  iVar57 = 0;
  iVar48 = iVar57;
  do {
    if (0 < (longlong)pvVar50) {
      puVar30 = local_118 + iVar57;
      pvVar53 = pvVar50;
      do {
        *(undefined4 *)(((longlong)puVar20 - (longlong)local_118) + (longlong)puVar30) = 0;
        *puVar30 = 0xc1e00000;
        *(undefined4 *)(((longlong)local_128 - (longlong)local_118) + (longlong)puVar30) =
             0xc1e00000;
        puVar30 = puVar30 + 1;
        pvVar53 = (void *)((longlong)pvVar53 + -1);
      } while (pvVar53 != (void *)0x0);
    }
    if ((longlong)uVar35 < (longlong)local_1d8) {
      puVar30 = local_118 + (longlong)iVar57 + uVar35;
      lVar36 = (longlong)local_1d8 - uVar35;
      do {
        *(undefined4 *)((longlong)puVar30 + ((longlong)puVar20 - (longlong)local_118)) = 0;
        *puVar30 = 0xc1e00000;
        *(undefined4 *)((longlong)puVar30 + ((longlong)local_128 - (longlong)local_118)) =
             0xc1e00000;
        puVar30 = puVar30 + 1;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
    }
    iVar57 = iVar57 + iStack_22c;
    iVar48 = iVar48 + 1;
  } while (iVar48 < local_248);
  if ((local_260 == 0) && (local_160 == 0)) {
    *(undefined4 *)(local_168 + 0xf) = 0;
  }
  else {
    *(int *)(local_168 + 0xf) = *(int *)(local_168 + 0xf) + 1;
  }
  *(undefined4 *)(puVar45 + 10) = *(undefined4 *)(param_6 + 0x20);
  *(undefined8 *)
   (auStack_328 +
   lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 + lVar51 
                                                  + lVar26 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6
   + -8) = 0x144f32c32;
  FUN_144f359ec(param_6);
  puVar44 = auStack_328 +
            lVar17 + lVar16 + lVar15 + lVar39 + lVar38 + lVar56 + lVar14 + lVar13 + lVar12 + lVar25 
                                                  + lVar51 + lVar26 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6;
LAB_144f32c46:
  uVar24 = local_d8 ^ (ulonglong)&local_268;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar44 + -8) = &UNK_144f32c55;
  FUN_144d8e3a0(uVar24);
}



// FUNCTION 144f32ccc FUN_144f32ccc body=255 status=ok
// SIG undefined FUN_144f32ccc(void)

undefined8 FUN_144f32ccc(longlong *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1452e8898(48000,0x3c0,0);
  if (param_3 < 3) {
    if ((param_1 == (longlong *)0x0) || (lVar2 == 0)) {
      uVar3 = 0xfffffff9;
    }
    else {
      memset(param_1,0,
             (longlong)
             (int)((*(int *)(lVar2 + 4) + (*(int *)(lVar2 + 8) + 0x100) * 4) * param_3 * 4 + 0xfc));
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 4) = 1;
      *param_1 = lVar2;
      *(uint *)(param_1 + 1) = param_3;
      *(uint *)((longlong)param_1 + 0xc) = param_3;
      uVar1 = *(undefined4 *)(lVar2 + 0xc);
      *(undefined4 *)(param_1 + 6) = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 5) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x34) = 1;
      *(undefined4 *)(param_1 + 7) = 1;
      *(undefined4 *)((longlong)param_1 + 0x14) = 1;
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x4c) = param_4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 5;
      *(undefined4 *)(param_1 + 8) = 0x18;
      FUN_144f3037c(param_1,0xfbc);
      uVar1 = FUN_144bca984(param_2);
      *(undefined4 *)(param_1 + 4) = uVar1;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 144f32dcc FUN_144f32dcc body=412 status=ok
// SIG undefined FUN_144f32dcc(void)

void FUN_144f32dcc(float *param_1,float *param_2,uint param_3,int param_4,int param_5,float *param_6
                  ,float *param_7,int param_8)

{
  float *pfVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = 0;
  fVar8 = *param_7;
  if (((param_6[1] == 0.0) && (param_5 == 1)) && (param_8 == 0)) {
    if (0 < (int)param_3) {
      uVar2 = (ulonglong)param_3;
      do {
        fVar7 = *param_1;
        param_1 = param_1 + param_4;
        fVar6 = fVar7 * 32768.0 - fVar8;
        fVar8 = fVar7 * 32768.0 * *param_6;
        *param_2 = fVar6;
        param_2 = param_2 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  else {
    uVar2 = (longlong)(int)param_3 / (longlong)param_5 & 0xffffffff;
    if (param_5 != 1) {
      memset(param_2,0,(longlong)(int)param_3 << 2);
    }
    iVar3 = (int)((longlong)(int)param_3 / (longlong)param_5);
    if (0 < iVar3) {
      pfVar1 = param_2;
      uVar5 = uVar2;
      do {
        fVar7 = *param_1;
        param_1 = param_1 + param_4;
        *pfVar1 = fVar7 * 32768.0;
        pfVar1 = pfVar1 + param_5;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if ((param_8 != 0) && (0 < iVar3)) {
      pfVar1 = param_2;
      do {
        fVar7 = 65536.0;
        if (*pfVar1 <= 65536.0) {
          fVar7 = *pfVar1;
        }
        if (fVar7 < -65536.0) {
          fVar7 = -65536.0;
        }
        *pfVar1 = fVar7;
        pfVar1 = pfVar1 + param_5;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (0 < (int)param_3) {
      do {
        fVar7 = param_2[lVar4] - fVar8;
        fVar8 = param_2[lVar4] * *param_6;
        param_2[lVar4] = fVar7;
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)param_3);
    }
  }
  *param_7 = fVar8;
  return;
}



// FUNCTION 144f32f68 FUN_144f32f68 body=955 status=ok
// SIG undefined FUN_144f32f68(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_144f32f68(longlong param_1,int param_2,int param_3,float *param_4,int *param_5,int param_6,
                  undefined4 *param_7)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 auStack_f0 [4];
  float fStack_cc;
  float local_c8 [2];
  int local_c0;
  int local_bc;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  float *local_a0;
  ulonglong local_98 [14];
  
  local_98[0] = DAT_14c707940 ^ (ulonglong)local_c8;
  fVar17 = 0.0625;
  local_bc = param_3;
  iVar8 = 0;
  local_a0 = param_4;
  uVar9 = (longlong)param_2 * 4;
  local_b0 = (longlong)param_2;
  uVar4 = uVar9 + 0xf;
  if (uVar4 <= uVar9) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_f0[0] = 0x144f3300a;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  *param_7 = 0;
  pfVar1 = (float *)((longlong)local_c8 + lVar2);
  if (param_6 != 0) {
    fVar17 = 0.03125;
  }
  local_c8[0] = 0.0;
  param_2 = param_2 / 2;
  if (0 < param_3) {
    local_c8[1] = (float)(param_2 + -1);
    local_a8 = (longlong)param_2;
    local_c0 = param_2 + -5;
    local_b8 = (param_2 + -0x11) * 6;
    param_1 = param_1 - (longlong)pfVar1;
    do {
      lVar3 = local_a8;
      fVar7 = local_c8[0];
      fVar16 = 0.0;
      fVar11 = 0.0;
      pfVar5 = pfVar1;
      lVar6 = local_b0;
      if (0 < local_b0) {
        do {
          fVar14 = *(float *)((longlong)pfVar5 + param_1);
          fVar15 = fVar14 + fVar16;
          *pfVar5 = fVar15;
          fVar16 = (fVar15 + fVar11) - (fVar14 + fVar14);
          fVar11 = fVar14 - fVar15 * 0.5;
          lVar6 = lVar6 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar6 != 0);
      }
      *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x144f330d9;
      memset(pfVar1,0,0x30);
      lVar6 = 0;
      fVar16 = 0.0;
      fVar11 = 0.0;
      if (0 < lVar3) {
        do {
          fVar14 = *(float *)((longlong)local_c8 + lVar6 * 8 + lVar2 + 4U);
          fVar14 = fVar14 * fVar14 + pfVar1[lVar6 * 2] * pfVar1[lVar6 * 2];
          fVar16 = fVar16 + fVar14;
          fVar11 = (fVar14 - fVar11) * fVar17 + fVar11;
          pfVar1[lVar6] = fVar11;
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar3);
      }
      fVar14 = 0.0;
      fVar11 = 0.0;
      if (-1 < (int)local_c8[1]) {
        pfVar5 = (float *)((longlong)&fStack_cc + lVar3 * 4 + lVar2);
        fVar15 = local_c8[1];
        do {
          fVar14 = (*pfVar5 - fVar14) * 0.125 + fVar14;
          *pfVar5 = fVar14;
          if (fVar11 <= fVar14) {
            fVar11 = fVar14;
          }
          pfVar5 = pfVar5 + -1;
          fVar15 = (float)((int)fVar15 + -1);
        } while (-1 < (int)fVar15);
      }
      *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x144f3317f;
      dVar12 = sqrt((double)(fVar11 * fVar16) * 0.5 * (double)param_2);
      iVar10 = 0;
      fVar11 = (float)param_2 / ((float)dVar12 + 1e-15);
      if (NAN(*pfVar1)) {
        *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x144f331be;
        FUN_144bca940("assertion failed: !celt_isnan(tmp[0])",
                      "../../../third_party/opus/src/celt/celt_encoder.c",0x171);
      }
      if (NAN(fVar11)) {
        *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x144f331de;
        FUN_144bca940("assertion failed: !celt_isnan(norm)",
                      "../../../third_party/opus/src/celt/celt_encoder.c",0x172);
      }
      if (0xc < local_c0) {
        pfVar5 = (float *)((longlong)local_98 + lVar2);
        uVar4 = (ulonglong)((local_c0 - 0xdU >> 2) + 1);
        do {
          fVar7 = *pfVar5;
          *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x144f33212;
          dVar13 = floor((double)((fVar7 + 1e-15) * fVar11 * 64.0));
          dVar12 = 127.0;
          if (dVar13 <= 127.0) {
            dVar12 = dVar13;
          }
          if (dVar12 < 0.0) {
            dVar12 = 0.0;
          }
          pfVar5 = pfVar5 + 4;
          iVar10 = iVar10 + (uint)(byte)(&DAT_149c0a500)[(int)dVar12];
          uVar4 = uVar4 - 1;
          param_3 = local_bc;
          fVar7 = local_c8[0];
        } while (uVar4 != 0);
      }
      iVar10 = (iVar10 << 8) / local_b8;
      if (iVar8 < iVar10) {
        *param_5 = (int)fVar7;
        iVar8 = iVar10;
      }
      param_1 = param_1 + uVar9;
      local_c8[0] = (float)((int)fVar7 + 1);
    } while ((int)fVar7 + 1 < param_3);
  }
  pfVar1 = local_a0;
  if ((param_6 != 0) && (iVar8 - 0xc9U < 399)) {
    *param_7 = 1;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x144f332c3;
  dVar12 = sqrt((double)(iVar8 * 0x1b));
  fVar17 = 0.0;
  if (0.0 <= (float)dVar12 - 42.0) {
    fVar17 = (float)dVar12 - 42.0;
  }
  fVar7 = 163.0;
  if (fVar17 <= 163.0) {
    fVar7 = fVar17;
  }
  dVar13 = (double)(fVar7 * 0.0069) - 0.139;
  dVar12 = 0.0;
  if (0.0 <= dVar13) {
    dVar12 = dVar13;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x144f33309;
  dVar12 = sqrt(dVar12);
  *pfVar1 = (float)dVar12;
  uVar4 = local_98[0] ^ (ulonglong)local_c8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_f0 + lVar2) = &UNK_144f33323;
  FUN_144d8e3a0(uVar4);
}



// FUNCTION 144f3336c FUN_144f3336c body=447 status=ok
// SIG undefined FUN_144f3336c(void)

void FUN_144f3336c(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6
                  )

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_a0;
  float local_98 [28];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)local_98;
  lVar2 = (longlong)param_4;
  fVar10 = 0.0;
  fVar7 = *(float *)(param_2 + lVar2 * 4);
  iVar5 = param_4 + 1;
  if (param_6 == 1) {
    lVar6 = (longlong)iVar5;
    local_98[lVar2] = fVar7;
    if (lVar6 < param_5) {
      pfVar1 = (float *)(param_2 + lVar6 * 4);
      lVar6 = param_5 - lVar6;
      do {
        fVar7 = *(float *)((longlong)local_98 + -param_2 + -4 + (longlong)pfVar1) - 1.0;
        if (fVar7 <= *pfVar1) {
          fVar7 = *pfVar1;
        }
        *(float *)((longlong)local_98 + -param_2 + (longlong)pfVar1) = fVar7;
        pfVar1 = pfVar1 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  else {
    fVar8 = *(float *)(param_2 + (longlong)(param_4 + param_3) * 4);
    if (fVar7 <= fVar8) {
      fVar7 = fVar8;
    }
    local_98[lVar2] = fVar7;
    if (iVar5 < param_5) {
      pfVar1 = local_98 + (longlong)iVar5 + -1;
      fVar7 = *pfVar1;
      uVar4 = (ulonglong)(uint)(param_5 - iVar5);
      do {
        fVar8 = *(float *)((param_2 - (longlong)local_98) + 4 + (longlong)pfVar1);
        fVar7 = fVar7 - 1.0;
        fVar9 = *(float *)((((longlong)param_3 * 4 + 4) - (longlong)local_98) + param_2 +
                          (longlong)pfVar1);
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        if (fVar7 <= fVar8) {
          fVar7 = fVar8;
        }
        pfVar1 = pfVar1 + 1;
        *pfVar1 = fVar7;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  for (lVar6 = (longlong)(param_5 + -2); lVar2 <= lVar6; lVar6 = lVar6 + -1) {
    fVar7 = local_98[lVar6];
    if (local_98[lVar6] <= local_98[lVar6 + 1] - 1.0) {
      fVar7 = local_98[lVar6 + 1] - 1.0;
    }
    local_98[lVar6] = fVar7;
  }
  iVar5 = 0;
  if (param_4 < 2) {
    param_4 = 2;
  }
  iVar3 = iVar5;
  do {
    if ((longlong)param_4 < (longlong)(param_5 + -1)) {
      lVar2 = (longlong)param_4;
      do {
        fVar7 = 0.0;
        if (0.0 <= local_98[lVar2]) {
          fVar7 = local_98[lVar2];
        }
        fVar8 = *(float *)(param_1 + lVar2 * 4 + (longlong)iVar5 * 4);
        fVar9 = 0.0;
        if (0.0 <= fVar8) {
          fVar9 = fVar8;
        }
        lVar2 = lVar2 + 1;
        fVar8 = 0.0;
        if (0.0 <= fVar9 - fVar7) {
          fVar8 = fVar9 - fVar7;
        }
        fVar10 = fVar8 + fVar10;
      } while (lVar2 < param_5 + -1);
    }
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + param_3;
  } while (iVar3 < param_6);
                    /* WARNING: Subroutine does not return */
  uStack_a0 = &UNK_144f3352b;
  FUN_144d8e3a0(local_28 ^ (ulonglong)local_98,
                1.0 < fVar10 / (float)(((param_5 - param_4) + -1) * param_6));
}



// FUNCTION 144f33544 FUN_144f33544 body=544 status=ok
// SIG undefined FUN_144f33544(void)

void FUN_144f33544(longlong param_1,int param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int local_68;
  int local_64;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 0x28);
  if (param_2 == 0) {
    iVar8 = *(int *)(param_1 + 0x28) - param_7;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x30) << ((byte)param_7 & 0x1f);
    param_2 = 1;
  }
  local_68 = 0;
  iVar6 = param_2 * iVar1;
  local_64 = 0;
  do {
    iVar7 = 0;
    if (0 < param_2) {
      lVar9 = param_4 + (longlong)local_64 * 4;
      do {
        FUN_1452e82bc(param_1 + 0x50,
                      param_3 + ((longlong)(iVar1 * iVar7) + (longlong)((iVar6 + iVar4) * local_68))
                                * 4,lVar9,*(undefined8 *)(param_1 + 0x48),iVar4,iVar8,param_2,
                      param_9);
        iVar7 = iVar7 + 1;
        lVar9 = lVar9 + 4;
      } while (iVar7 < param_2);
    }
    local_68 = local_68 + 1;
    local_64 = local_64 + iVar6;
  } while (local_68 < param_6);
  if (((param_6 == 2) && (param_5 == 1)) && (0 < iVar6)) {
    lVar9 = 0;
    iVar4 = iVar6;
    do {
      lVar2 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *(float *)(param_4 + lVar9 * 4) =
           *(float *)(param_4 + lVar2 * 4) * 0.5 + *(float *)(param_4 + lVar9 * 4) * 0.5;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar6);
  }
  if (param_8 != 1) {
    iVar4 = 0;
    iVar8 = 0;
    do {
      iVar7 = (int)((longlong)iVar6 / (longlong)param_8);
      if (0 < iVar7) {
        pfVar5 = (float *)(param_4 + (longlong)iVar8 * 4);
        uVar3 = (longlong)iVar6 / (longlong)param_8 & 0xffffffff;
        do {
          *pfVar5 = (float)param_8 * *pfVar5;
          pfVar5 = pfVar5 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      memset((void *)(param_4 + (longlong)(param_2 * iVar1 * iVar4 + iVar7) * 4),0,
             (longlong)(iVar6 - iVar7) << 2);
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + iVar6;
    } while (iVar4 < param_5);
  }
  return;
}



// FUNCTION 144f33764 FUN_144f33764 body=1804 status=ok
// SIG undefined FUN_144f33764(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f33764(longlong param_1,uint param_2,int param_3,longlong param_4,int param_5,
                  longlong param_6,int param_7,uint param_8,float param_9,int param_10,int *param_11
                  )

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  byte bVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  void *pvVar24;
  int iVar25;
  ulonglong uVar26;
  int *piVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 auStack_140 [5];
  uint local_118 [4];
  void *local_108;
  int *local_100;
  int *local_f8;
  undefined *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  int local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  int *local_b8;
  undefined *local_b0;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  
  local_98 = DAT_14c707940 ^ (ulonglong)local_118;
  lVar14 = (longlong)(int)param_2;
  fVar31 = -0.25;
  if (-0.25 <= 0.5 - param_9) {
    fVar31 = 0.5 - param_9;
  }
  uVar26 = (ulonglong)param_2;
  uVar23 = lVar14 * 4;
  fVar31 = fVar31 * 0.04;
  uVar10 = uVar23 + 0xf;
  if (uVar10 <= uVar23) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_140[0] = 0x144f3383b;
  lVar3 = -(uVar10 & 0xfffffffffffffff0);
  local_100 = (int *)((longlong)local_118 + lVar3);
  bVar13 = (byte)param_8;
  uVar15 = (longlong)
           ((int)*(short *)(*(longlong *)(param_1 + 0x20) + lVar14 * 2) -
            (int)*(short *)(*(longlong *)(param_1 + 0x20) + -2 + lVar14 * 2) << (bVar13 & 0x1f)) * 4
  ;
  uVar10 = uVar15 + 0xf;
  if (uVar10 <= uVar15) {
    uVar10 = 0xffffffffffffff0;
  }
  local_118[2] = param_2;
  local_d8 = param_3;
  local_d0 = param_1;
  local_a0 = param_4;
  *(undefined8 *)((longlong)auStack_140 + lVar3) = 0x144f33876;
  lVar14 = -(uVar10 & 0xfffffffffffffff0);
  uVar10 = uVar15 + 0xf;
  pvVar24 = (void *)((longlong)local_118 + lVar14 + lVar3);
  if (uVar10 <= uVar15) {
    uVar10 = 0xffffffffffffff0;
  }
  local_108 = pvVar24;
  *(undefined8 *)((longlong)auStack_140 + lVar14 + lVar3) = 0x144f33897;
  lVar4 = -(uVar10 & 0xfffffffffffffff0);
  local_e0 = (void *)((longlong)local_118 + lVar4 + lVar14 + lVar3);
  uVar10 = uVar23 + 0xf;
  if (uVar10 <= uVar23) {
    uVar10 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar14 + lVar3) = 0x144f338b8;
  lVar5 = -(uVar10 & 0xfffffffffffffff0);
  local_c0 = (longlong)local_118 + lVar5 + lVar4 + lVar14 + lVar3;
  uVar10 = uVar23 + 0xf;
  if (uVar10 <= uVar23) {
    uVar10 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_140 + lVar5 + lVar4 + lVar14 + lVar3) = 0x144f338d9;
  lVar6 = -(uVar10 & 0xfffffffffffffff0);
  local_e8 = 0;
  local_c8 = (longlong)local_118 + lVar6 + lVar5 + lVar4 + lVar14 + lVar3;
  if (0 < (int)param_2) {
    local_118[3] = param_7 * param_10;
    local_f8 = (int *)0x0;
    local_f0 = (undefined *)uVar26;
    do {
      uVar8 = 0;
      local_118[0] = 0;
      iVar17 = (int)*(short *)(local_e8 + *(longlong *)(param_1 + 0x20));
      iVar25 = *(short *)(local_e8 + 2 + *(longlong *)(param_1 + 0x20)) - iVar17;
      local_118[1] = iVar25 << (bVar13 & 0x1f);
      lVar28 = (longlong)(int)local_118[1];
      iVar17 = local_118[3] + (iVar17 << (bVar13 & 0x1f));
      local_e8 = local_e8 + 2;
      *(undefined8 *)((longlong)auStack_140 + lVar6 + lVar5 + lVar4 + lVar14 + lVar3) = 0x144f33984;
      memcpy(pvVar24,(void *)(param_6 + (longlong)iVar17 * 4),lVar28 << 2);
      _Dst = local_e0;
      pvVar24 = local_108;
      lVar11 = 0;
      fVar29 = 0.0;
      if (0 < lVar28) {
        do {
          lVar1 = lVar11 * 4;
          lVar11 = lVar11 + 1;
          fVar29 = fVar29 + ABS(*(float *)((longlong)local_108 + lVar1));
        } while (lVar11 < lVar28);
      }
      fVar29 = (float)(int)(-(uint)(param_3 != 0) & param_8) * fVar31 * fVar29 + fVar29;
      if ((param_3 != 0) && (iVar25 != 1)) {
        *(undefined8 *)((longlong)auStack_140 + lVar6 + lVar5 + lVar4 + lVar14 + lVar3) =
             0x144f339dc;
        memcpy(_Dst,pvVar24,lVar28 << 2);
        iVar17 = (int)local_118[1] >> (bVar13 & 0x1f);
        *(undefined8 *)((longlong)auStack_140 + lVar6 + lVar5 + lVar4 + lVar14 + lVar3) =
             0x144f339f4;
        FUN_1452eac40(_Dst,iVar17,1 << (bVar13 & 0x1f));
        lVar11 = 0;
        fVar30 = 0.0;
        if (0 < lVar28) {
          do {
            lVar1 = lVar11 * 4;
            lVar11 = lVar11 + 1;
            fVar30 = fVar30 + ABS(*(float *)((longlong)_Dst + lVar1));
          } while (lVar11 < lVar28);
        }
        fVar30 = (float)(int)(param_8 + 1) * fVar31 * fVar30 + fVar30;
        if (fVar30 < fVar29) {
          uVar8 = 0xffffffff;
          local_118[0] = 0xffffffff;
          fVar29 = fVar30;
        }
      }
      pvVar24 = local_108;
      iVar17 = 0;
      while( true ) {
        if ((param_3 != 0) || (iVar22 = 1, iVar25 == 1)) {
          iVar22 = 0;
        }
        if ((int)(iVar22 + param_8) <= iVar17) break;
        if (param_3 == 0) {
          iVar22 = iVar17 + 1;
        }
        else {
          iVar22 = (param_8 - iVar17) + -1;
        }
        iVar18 = (int)local_118[1] >> ((byte)iVar17 & 0x1f);
        *(undefined8 *)((longlong)auStack_140 + lVar6 + lVar5 + lVar4 + lVar14 + lVar3) =
             0x144f33a91;
        FUN_1452eac40(pvVar24,iVar18,1 << ((byte)iVar17 & 0x1f));
        lVar11 = 0;
        fVar30 = 0.0;
        if (0 < lVar28) {
          do {
            lVar1 = lVar11 * 4;
            lVar11 = lVar11 + 1;
            fVar30 = fVar30 + ABS(*(float *)((longlong)pvVar24 + lVar1));
          } while (lVar11 < lVar28);
        }
        fVar30 = (float)iVar22 * fVar31 * fVar30 + fVar30;
        uVar8 = iVar17 + 1;
        if (fVar29 <= fVar30) {
          uVar8 = local_118[0];
          fVar30 = fVar29;
        }
        fVar29 = fVar30;
        iVar17 = iVar17 + 1;
        local_118[0] = uVar8;
      }
      iVar17 = ((-(uint)(param_3 != 0) & 4) - 2) * uVar8;
      *(int *)((longlong)local_f8 + (longlong)local_100) = iVar17;
      if ((iVar25 == 1) && ((iVar17 == 0 || (iVar17 == param_8 * -2)))) {
        *(int *)((longlong)local_f8 + (longlong)local_100) = iVar17 + -1;
      }
      local_f8 = (int *)((longlong)local_f8 + 4);
      local_f0 = (undefined *)((longlong)local_f0 - 1);
      param_1 = local_d0;
      pvVar24 = local_108;
    } while (local_f0 != (undefined *)0x0);
    uVar26 = (ulonglong)local_118[2];
  }
  local_f8 = (int *)&local_e0;
  local_118[0] = 0;
  local_a8 = (longlong)(int)param_8 * 8;
  local_f0 = &DAT_14997e9c8 + local_a8;
  local_118[1] = *local_100;
  lVar11 = (longlong)(param_3 << 2);
  iVar17 = param_5;
  if (param_3 != 0) {
    iVar17 = 0;
  }
  local_108 = (void *)CONCAT44(local_108._4_4_,iVar17);
  local_b0 = &DAT_14997e9c9 + (((longlong)param_3 + (longlong)(int)param_8 * 2) * 4 - lVar11);
  local_e8 = 2;
  do {
    uVar8 = local_118[1] + (char)local_b0[lVar11 + -1] * -2;
    uVar19 = (int)uVar8 >> 0x1f;
    uVar9 = local_118[1] + (char)local_b0[lVar11] * -2;
    uVar20 = (int)uVar9 >> 0x1f;
    iVar25 = ((uVar8 ^ uVar19) - uVar19) * *param_11;
    iVar22 = ((uVar9 ^ uVar20) - uVar20) * *param_11 + iVar17;
    if (1 < (int)uVar26) {
      uVar10 = (ulonglong)((int)uVar26 - 1);
      local_118[3] = (char)local_f0[lVar11 + 1] * 2;
      local_b8 = param_11 + 1;
      piVar27 = local_b8;
      do {
        iVar2 = *(int *)(((longlong)local_100 - (longlong)param_11) + (longlong)piVar27);
        iVar18 = iVar25 + param_5;
        uVar8 = iVar2 + (char)local_f0[lVar11] * -2;
        uVar9 = (int)uVar8 >> 0x1f;
        iVar7 = iVar22 + param_5;
        if (iVar25 < iVar22 + param_5) {
          iVar7 = iVar25;
        }
        uVar19 = iVar2 + (char)local_f0[lVar11 + 1] * -2;
        iVar25 = iVar7 + ((uVar8 ^ uVar9) - uVar9) * *piVar27;
        uVar8 = (int)uVar19 >> 0x1f;
        iVar2 = *piVar27;
        piVar27 = piVar27 + 1;
        if (iVar18 < iVar22) {
          iVar22 = iVar18;
        }
        iVar22 = iVar22 + ((uVar19 ^ uVar8) - uVar8) * iVar2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar26 = (ulonglong)local_118[2];
    }
    uVar8 = (uint)uVar26;
    if (iVar25 < iVar22) {
      iVar22 = iVar25;
    }
    lVar11 = lVar11 + 2;
    *local_f8 = iVar22;
    local_f8 = local_f8 + 1;
    local_e8 = local_e8 + -1;
  } while (local_e8 != 0);
  if (local_e0._4_4_ < (int)local_e0) {
    local_118[0] = (uint)(local_d8 != 0);
  }
  lVar11 = (int)((local_118[0] + local_d8 * 2) * 2) + local_a8;
  uVar9 = local_118[1] + (char)(&DAT_14997e9c8)[lVar11] * -2;
  uVar19 = (int)uVar9 >> 0x1f;
  uVar21 = local_118[1] + (char)(&DAT_14997e9c9)[lVar11] * -2;
  uVar20 = (int)uVar21 >> 0x1f;
  iVar25 = ((uVar9 ^ uVar19) - uVar19) * *param_11;
  iVar17 = ((uVar21 ^ uVar20) - uVar20) * *param_11 + iVar17;
  if (1 < (int)uVar8) {
    uVar10 = (ulonglong)(uVar8 - 1);
    lVar11 = 4;
    lVar28 = local_a8 + ((ulonglong)local_118[0] + (longlong)local_d8 * 2) * 2;
    do {
      iVar22 = iVar17 + param_5;
      iVar18 = iVar25;
      if (iVar22 <= iVar25) {
        iVar18 = iVar22;
      }
      *(uint *)(lVar11 + local_c0) = (uint)(iVar22 <= iVar25);
      iVar25 = iVar25 + param_5;
      iVar22 = iVar25;
      if (iVar17 <= iVar25) {
        iVar22 = iVar17;
      }
      *(uint *)(lVar11 + local_c8) = (uint)(iVar17 <= iVar25);
      piVar27 = (int *)(lVar11 + (longlong)param_11);
      iVar17 = *piVar27;
      lVar11 = lVar11 + 4;
      iVar25 = *(int *)((longlong)piVar27 + ((longlong)local_100 - (longlong)param_11));
      uVar8 = iVar25 + (char)(&DAT_14997e9c8)[lVar28] * -2;
      uVar9 = (int)uVar8 >> 0x1f;
      uVar20 = iVar25 + (char)(&DAT_14997e9c9)[lVar28] * -2;
      uVar19 = (int)uVar20 >> 0x1f;
      iVar25 = ((uVar8 ^ uVar9) - uVar9) * iVar17 + iVar18;
      iVar17 = ((uVar20 ^ uVar19) - uVar19) * iVar17 + iVar22;
      uVar10 = uVar10 - 1;
      uVar8 = local_118[2];
    } while (uVar10 != 0);
  }
  *(uint *)(local_a0 + -4 + (longlong)(int)uVar8 * 4) = (uint)(iVar17 <= iVar25);
  lVar11 = (longlong)(int)(uVar8 - 2);
  if (-1 < (int)(uVar8 - 2)) {
    puVar12 = (undefined4 *)(local_c8 + 4 + lVar11 * 4);
    do {
      puVar16 = puVar12;
      if (*(int *)((local_a0 - local_c8) + (longlong)puVar12) != 1) {
        puVar16 = (undefined4 *)((local_c0 - local_c8) + (longlong)puVar12);
      }
      *(undefined4 *)((local_a0 - local_c8) + -4 + (longlong)puVar12) = *puVar16;
      puVar12 = puVar12 + -1;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  uVar10 = local_98 ^ (ulonglong)local_118;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_140 + lVar6 + lVar5 + lVar4 + lVar14 + lVar3) = &UNK_144f33e70;
  FUN_144d8e3a0(uVar10);
}



// FUNCTION 144f33ec4 FUN_144f33ec4 body=963 status=ok
// SIG undefined FUN_144f33ec4(void)

int FUN_144f33ec4(longlong param_1,longlong param_2,longlong param_3,int param_4,byte param_5,
                 int param_6,int param_7,int *param_8,float *param_9,float param_10,int param_11,
                 float param_12,int param_13)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar14 = 5.0;
  fVar15 = 0.0;
  if (param_13 < 64000) {
    fVar14 = 4.0;
  }
  else if (param_13 < 80000) {
    fVar14 = (float)(param_13 + -64000 >> 10) * 0.0625 + 4.0;
  }
  if (param_6 == 2) {
    fVar12 = 0.0;
    lVar5 = 0;
    do {
      lVar1 = lVar5 + 2;
      iVar2 = (int)*(short *)(lVar5 + *(longlong *)(param_1 + 0x20));
      iVar6 = iVar2 << (param_5 & 0x1f);
      fVar8 = (float)FUN_144f37488(param_2 + (longlong)iVar6 * 4,
                                   param_2 + (longlong)(iVar6 + param_7) * 4,
                                   *(short *)(*(longlong *)(param_1 + 0x20) + lVar1) - iVar2 <<
                                   (param_5 & 0x1f));
      fVar12 = fVar8 + fVar12;
      lVar5 = lVar1;
    } while (lVar1 < 0x10);
    lVar5 = 8;
    fVar8 = 1.0;
    if (ABS(fVar12 * 0.125) <= 1.0) {
      fVar8 = ABS(fVar12 * 0.125);
    }
    fVar12 = fVar8;
    if (8 < (longlong)param_11) {
      do {
        iVar2 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + lVar5 * 2);
        iVar6 = iVar2 << (param_5 & 0x1f);
        fVar9 = (float)FUN_144f37488(param_2 + (longlong)iVar6 * 4,
                                     param_2 + (longlong)(iVar6 + param_7) * 4,
                                     *(short *)(*(longlong *)(param_1 + 0x20) + 2 + lVar5 * 2) -
                                     iVar2 << (param_5 & 0x1f));
        if (ABS(fVar9) <= fVar12) {
          fVar12 = ABS(fVar9);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_11);
    }
    fVar9 = 1.0;
    if (ABS(fVar12) <= 1.0) {
      fVar9 = ABS(fVar12);
    }
    dVar10 = log((double)(1.001 - fVar8 * fVar8));
    fVar12 = *param_9;
    fVar13 = (float)(dVar10 * 1.4426950408889634) * 0.5;
    fVar11 = (float)(dVar10 * 1.4426950408889634) * 0.75;
    fVar8 = -4.0;
    if (-4.0 <= fVar11) {
      fVar8 = fVar11;
    }
    fVar14 = fVar14 + fVar8;
    dVar10 = log((double)(1.001 - fVar9 * fVar9));
    if (fVar13 <= (float)(dVar10 * 1.4426950408889634)) {
      fVar13 = (float)(dVar10 * 1.4426950408889634);
    }
    fVar8 = fVar12 + 0.25;
    if (-(fVar13 * 0.5) <= fVar12 + 0.25) {
      fVar8 = -(fVar13 * 0.5);
    }
    *param_9 = fVar8;
  }
  uVar4 = param_4 - 1;
  iVar2 = 0;
  do {
    if (0 < (int)uVar4) {
      iVar6 = -param_4;
      pfVar7 = (float *)(param_3 + (longlong)(*(int *)(param_1 + 8) * iVar2) * 4);
      uVar3 = (ulonglong)uVar4;
      do {
        iVar6 = iVar6 + 2;
        fVar12 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        fVar15 = fVar15 + (float)iVar6 * fVar12;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < param_6);
  fVar12 = (fVar15 / (float)(int)(uVar4 * param_6) + 1.0) / 6.0;
  fVar15 = 2.0;
  if (fVar12 <= 2.0) {
    fVar15 = fVar12;
  }
  if (fVar15 < -2.0) {
    fVar15 = -2.0;
  }
  fVar14 = ((fVar14 - fVar15) - param_12) - (param_10 + param_10);
  if (*param_8 != 0) {
    fVar12 = (float)param_8[2] + 0.05 + (float)param_8[2] + 0.05;
    fVar15 = 2.0;
    if (fVar12 <= 2.0) {
      fVar15 = fVar12;
    }
    fVar12 = -2.0;
    if (-2.0 <= fVar15) {
      fVar12 = fVar15;
    }
    fVar14 = fVar14 - fVar12;
  }
  dVar10 = floor((double)(fVar14 + 0.5));
  iVar2 = (int)dVar10;
  if (10 < iVar2) {
    iVar2 = 10;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 144f34288 FUN_144f34288 body=115 status=ok
// SIG undefined FUN_144f34288(void)

float FUN_144f34288(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *param_1;
  fVar4 = param_1[2];
  if (fVar3 < param_1[1] || fVar3 == param_1[1]) {
    fVar1 = param_1[1];
  }
  else {
    fVar1 = fVar3;
    fVar3 = param_1[1];
  }
  fVar6 = param_1[3];
  if (fVar6 < param_1[4] || fVar6 == param_1[4]) {
    fVar5 = param_1[4];
  }
  else {
    fVar5 = fVar6;
    fVar6 = param_1[4];
  }
  fVar2 = fVar1;
  if (fVar6 < fVar3) {
    fVar2 = fVar5;
    fVar5 = fVar1;
    fVar6 = fVar3;
  }
  if (fVar4 <= fVar2) {
    if (fVar4 < fVar6) {
      if (fVar6 <= fVar2) {
        fVar2 = fVar6;
      }
      return fVar2;
    }
    if (fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
  }
  else {
    if (fVar6 <= fVar2) {
      if (fVar2 <= fVar5) {
        fVar5 = fVar2;
      }
      return fVar5;
    }
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
  }
  return fVar4;
}



// FUNCTION 144f342fc FUN_144f342fc body=2379 status=ok
// SIG undefined FUN_144f342fc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_144f342fc(longlong param_1,longlong param_2,int param_3,uint param_4,uint param_5,
                  int param_6,void *param_7,int param_8,longlong param_9,int param_10,int param_11,
                  int param_12,longlong param_13,int param_14,int param_15,float *param_16,
                  int param_17,longlong param_18,int *param_19,longlong param_20,longlong param_21)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  short *psVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  size_t sVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  float *pfVar25;
  longlong lVar26;
  int *piVar27;
  longlong lVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  undefined8 auStack_e0 [4];
  float fStack_bc;
  float local_b8;
  float local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  float *local_a0;
  longlong local_98;
  size_t local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  
  local_78 = DAT_14c707940 ^ (ulonglong)&local_b8;
  local_b8 = 0.0;
  uVar20 = (longlong)(param_3 * param_6) * 4;
  uVar7 = uVar20 + 0xf;
  if (uVar7 <= uVar20) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_e0[0] = 0x144f34392;
  lVar3 = -(uVar7 & 0xfffffffffffffff0);
  uVar7 = uVar20 + 0xf;
  lVar15 = (longlong)&local_b8 + lVar3;
  if (uVar7 <= uVar20) {
    uVar7 = 0xffffffffffffff0;
  }
  local_b0 = param_4;
  local_a8 = param_3;
  local_98 = param_2;
  local_88 = param_1;
  *(undefined8 *)((longlong)auStack_e0 + lVar3) = 0x144f343af;
  lVar4 = -(uVar7 & 0xfffffffffffffff0);
  pfVar9 = (float *)((longlong)&local_b8 + lVar4 + lVar3);
  local_a0 = pfVar9;
  local_90 = (longlong)param_3 << 2;
  *(undefined8 *)((longlong)auStack_e0 + lVar4 + lVar3) = 0x144f343d7;
  memset(param_7,0,(longlong)param_3 << 2);
  lVar28 = (longlong)(int)param_5;
  lVar10 = 0;
  fVar32 = -31.9;
  if (0 < (int)param_5) {
    iVar16 = 5;
    pfVar11 = pfVar9;
    do {
      lVar1 = lVar10 * 2;
      lVar10 = lVar10 + 1;
      iVar6 = iVar16 * iVar16;
      iVar16 = iVar16 + 1;
      *pfVar11 = (((float)(int)*(short *)(param_9 + lVar1) * 0.0625 + 0.5 + (float)(9 - param_8)) -
                 *(float *)(((longlong)&DAT_149d32430 - (longlong)pfVar9) + (longlong)pfVar11)) +
                 (float)iVar6 * 0.0062;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 < lVar28);
  }
  sVar19 = local_90;
  uVar22 = local_b0;
  iVar16 = 0;
  iVar6 = 0;
  do {
    if (0 < (int)param_5) {
      uVar7 = (ulonglong)param_5;
      pfVar11 = pfVar9;
      do {
        fVar29 = *(float *)((longlong)pfVar11 + ((longlong)iVar6 * 4 - (longlong)pfVar9) + param_1)
                 - *pfVar11;
        if (fVar32 <= fVar29) {
          fVar32 = fVar29;
        }
        pfVar11 = pfVar11 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    iVar16 = iVar16 + 1;
    iVar6 = iVar6 + local_a8;
  } while (iVar16 < param_6);
  uVar7 = local_90 + 0xf;
  if (uVar7 <= local_90) {
    uVar7 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar4 + lVar3) = 0x144f344e7;
  lVar10 = -(uVar7 & 0xfffffffffffffff0);
  uVar7 = sVar19 + 0xf;
  pfVar9 = (float *)((longlong)&local_b8 + lVar10 + lVar4 + lVar3);
  if (uVar7 <= sVar19) {
    uVar7 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar10 + lVar4 + lVar3) = 0x144f34504;
  pfVar25 = local_a0;
  lVar1 = -(uVar7 & 0xfffffffffffffff0);
  pfVar11 = (float *)((longlong)&local_b8 + lVar1 + lVar10 + lVar4 + lVar3);
  if (0 < (int)param_5) {
    lVar12 = param_1 - (longlong)local_a0;
    lVar18 = (longlong)pfVar9 - (longlong)local_a0;
    pfVar8 = local_a0;
    lVar23 = lVar28;
    do {
      *(float *)(lVar18 + (longlong)pfVar8) = *(float *)(lVar12 + (longlong)pfVar8) - *pfVar8;
      pfVar8 = pfVar8 + 1;
      lVar23 = lVar23 + -1;
      sVar19 = local_90;
    } while (lVar23 != 0);
  }
  if ((param_6 == 2) && (0 < (int)param_5)) {
    pfVar8 = pfVar9;
    lVar23 = lVar28;
    do {
      pfVar2 = (float *)(((longlong)pfVar25 - (longlong)pfVar9) + (longlong)pfVar8);
      fVar31 = *(float *)((longlong)pfVar2 + (sVar19 - (longlong)pfVar25) + param_1) - *pfVar2;
      fVar29 = *pfVar8;
      if (*pfVar8 <= fVar31) {
        fVar29 = fVar31;
      }
      *pfVar8 = fVar29;
      pfVar8 = pfVar8 + 1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = 0x144f3459c;
  memcpy(pfVar11,pfVar9,lVar28 << 2);
  if (1 < lVar28) {
    lVar23 = 1;
    do {
      fVar31 = *(float *)((longlong)&fStack_bc + lVar23 * 4 + lVar10 + lVar4 + lVar3) - 2.0;
      fVar29 = pfVar9[lVar23];
      if (pfVar9[lVar23] <= fVar31) {
        fVar29 = fVar31;
      }
      pfVar9[lVar23] = fVar29;
      lVar23 = lVar23 + 1;
    } while (lVar23 < lVar28);
  }
  lVar23 = (longlong)(int)(param_5 - 2);
  local_80 = lVar23;
  for (; -1 < lVar23; lVar23 = lVar23 + -1) {
    fVar31 = *(float *)((longlong)&local_b4 + lVar23 * 4 + lVar10 + lVar4 + lVar3) - 3.0;
    fVar29 = pfVar9[lVar23];
    if (pfVar9[lVar23] <= fVar31) {
      fVar29 = fVar31;
    }
    pfVar9[lVar23] = fVar29;
  }
  if (0 < (int)param_5) {
    uVar7 = (ulonglong)param_5;
    lVar23 = (longlong)pfVar9 - (longlong)pfVar11;
    param_21 = param_21 - (longlong)pfVar11;
    fVar29 = 0.0;
    if (0.0 <= fVar32 - 12.0) {
      fVar29 = fVar32 - 12.0;
    }
    do {
      fVar32 = *(float *)(lVar23 + (longlong)pfVar11);
      if (fVar32 < fVar29) {
        fVar32 = fVar29;
      }
      fVar31 = *pfVar11;
      *(undefined8 *)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = 0x144f34652;
      dVar30 = floor((double)((fVar31 - fVar32) + 0.5));
      iVar16 = -(int)dVar30;
      if ((iVar16 < 0) || (iVar16 < 6)) {
        if (iVar16 < 0) {
          iVar16 = 0;
        }
      }
      else {
        iVar16 = 5;
      }
      *(int *)(param_21 + (longlong)pfVar11) = 0x20 >> ((byte)iVar16 & 0x1f);
      pfVar11 = pfVar11 + 1;
      uVar7 = uVar7 - 1;
      uVar22 = local_b0;
    } while (uVar7 != 0);
  }
  uVar7 = 0;
  if (((param_15 < 0x33) || (param_14 < 1)) || (param_17 != 0)) {
    if ((int)uVar22 < (int)param_5) {
      puVar21 = (undefined4 *)(param_20 + (longlong)(int)uVar22 * 4);
      for (lVar15 = (longlong)(int)(param_5 - uVar22); lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar21 = 0xd;
        puVar21 = puVar21 + 1;
      }
    }
    goto LAB_144f34c2b;
  }
  local_b4 = 0.0;
  local_ac = 0;
  uVar13 = uVar7;
  uVar20 = uVar7;
  pfVar9 = local_a0;
  do {
    uVar22 = 1;
    iVar16 = (int)uVar7;
    uVar24 = 1;
    pfVar11 = (float *)(lVar15 + (longlong)iVar16 * 4);
    pfVar25 = (float *)(local_98 + (longlong)iVar16 * 4);
    *pfVar11 = *pfVar25;
    if (1 < (int)param_5) {
      lVar23 = lVar15 - local_98;
      pfVar8 = pfVar25;
      fVar32 = local_b4;
      do {
        fVar29 = pfVar8[1];
        fVar31 = *(float *)(lVar23 + (longlong)pfVar8) + 1.5;
        uVar5 = uVar22;
        uVar13 = uVar24;
        if (fVar29 <= *pfVar8 + 0.5) {
          uVar5 = (uint)fVar32;
          uVar13 = uVar20;
        }
        uVar20 = uVar13;
        fVar32 = (float)uVar5;
        uVar22 = uVar22 + 1;
        uVar24 = uVar24 + 1;
        if (fVar29 <= fVar31) {
          fVar31 = fVar29;
        }
        *(float *)(lVar23 + 4 + (longlong)pfVar8) = fVar31;
        pfVar8 = pfVar8 + 1;
      } while ((int)uVar22 < (int)param_5);
      local_b4 = fVar32;
      uVar13 = (ulonglong)(uint)fVar32;
    }
    iVar6 = (int)uVar13 + -1;
    if (-1 < iVar6) {
      pfVar8 = pfVar11 + (uVar20 - 1);
      lVar23 = lVar15 - local_98;
      lVar12 = local_98 - lVar15;
      do {
        pfVar2 = (float *)((longlong)pfVar8 + lVar12);
        fVar29 = *(float *)(lVar23 + 4 + (longlong)pfVar2) + 2.0;
        fVar32 = *pfVar2;
        if (fVar32 <= fVar29) {
          fVar29 = fVar32;
        }
        fVar32 = *pfVar8;
        if (fVar29 <= *pfVar8) {
          fVar32 = fVar29;
        }
        *pfVar8 = fVar32;
        pfVar8 = pfVar8 + -1;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    lVar23 = local_98;
    lVar18 = 2;
    lVar12 = local_80;
    uVar24 = uVar7;
    if (2 < local_80) {
      do {
        iVar6 = (int)uVar7;
        *(undefined8 *)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = 0x144f347b6;
        fVar29 = (float)FUN_144f34288(lVar23 + (longlong)iVar6 * 4);
        iVar16 = (int)uVar24;
        uVar7 = (ulonglong)(iVar6 + 1);
        fVar32 = pfVar11[lVar18];
        if (pfVar11[lVar18] <= fVar29 - 1.0) {
          fVar32 = fVar29 - 1.0;
        }
        pfVar11[lVar18] = fVar32;
        lVar18 = lVar18 + 1;
        pfVar9 = local_a0;
      } while (lVar18 < lVar12);
    }
    lVar23 = local_98;
    fVar32 = *pfVar25;
    if (fVar32 < pfVar25[1] || fVar32 == pfVar25[1]) {
      fVar29 = pfVar25[1];
      fVar31 = fVar32;
    }
    else {
      fVar31 = pfVar25[1];
      fVar29 = fVar32;
    }
    fVar32 = pfVar25[2];
    if ((fVar32 <= fVar29) && (fVar29 = fVar32, fVar32 <= fVar31)) {
      fVar29 = fVar31;
    }
    fVar29 = fVar29 - 1.0;
    lVar12 = (longlong)(int)(iVar16 + param_5);
    fVar32 = *pfVar11;
    if (*pfVar11 <= fVar29) {
      fVar32 = fVar29;
    }
    fVar31 = pfVar11[1];
    if (pfVar11[1] <= fVar29) {
      fVar31 = fVar29;
    }
    *pfVar11 = fVar32;
    pfVar11[1] = fVar31;
    fVar32 = *(float *)(lVar23 + -0xc + lVar12 * 4);
    fVar29 = *(float *)(lVar23 + -8 + lVar12 * 4);
    fVar31 = fVar32;
    if (fVar29 < fVar32) {
      fVar31 = fVar29;
      fVar29 = fVar32;
    }
    fVar32 = *(float *)(lVar23 + -4 + lVar12 * 4);
    if ((fVar32 <= fVar29) && (fVar29 = fVar32, fVar32 <= fVar31)) {
      fVar29 = fVar31;
    }
    fVar29 = fVar29 - 1.0;
    fVar32 = pfVar11[lVar28 + -2];
    if (pfVar11[lVar28 + -2] <= fVar29) {
      fVar32 = fVar29;
    }
    fVar31 = pfVar11[lVar28 + -1];
    if (pfVar11[lVar28 + -1] <= fVar29) {
      fVar31 = fVar29;
    }
    pfVar11[lVar28 + -2] = fVar32;
    pfVar11[lVar28 + -1] = fVar31;
    if (0 < lVar28) {
      lVar12 = (longlong)pfVar9 - (longlong)pfVar11;
      lVar23 = lVar28;
      do {
        fVar32 = *(float *)(lVar12 + (longlong)pfVar11);
        fVar29 = *pfVar11;
        if (*pfVar11 <= fVar32) {
          fVar29 = fVar32;
        }
        *pfVar11 = fVar29;
        pfVar11 = pfVar11 + 1;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    lVar23 = (longlong)local_a8;
    local_ac = local_ac + 1;
    uVar7 = (ulonglong)(uint)(iVar16 + local_a8);
  } while (local_ac < param_6);
  uVar7 = (ulonglong)(int)local_b0;
  if (param_6 == 2) {
    if ((int)local_b0 < (int)param_5) {
      pfVar9 = (float *)(lVar15 + (lVar23 + uVar7) * 4);
      lVar26 = local_88 - local_90;
      lVar18 = local_88 - lVar15;
      lVar12 = (longlong)(int)(param_5 - local_b0);
      do {
        fVar32 = *pfVar9;
        if (*pfVar9 <= pfVar9[-lVar23] - 4.0) {
          fVar32 = pfVar9[-lVar23] - 4.0;
        }
        *pfVar9 = fVar32;
        fVar29 = pfVar9[-lVar23];
        if (pfVar9[-lVar23] <= fVar32 - 4.0) {
          fVar29 = fVar32 - 4.0;
        }
        pfVar9[-lVar23] = fVar29;
        fVar31 = *(float *)(lVar18 + (longlong)pfVar9) - *pfVar9;
        fVar29 = *(float *)((lVar26 - lVar15) + (longlong)pfVar9) - fVar29;
        fVar32 = 0.0;
        if (0.0 <= fVar31) {
          fVar32 = fVar31;
        }
        fVar31 = 0.0;
        if (0.0 <= fVar29) {
          fVar31 = fVar29;
        }
        pfVar9[-lVar23] = (fVar32 + fVar31) * 0.5;
        pfVar9 = pfVar9 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  else if ((longlong)uVar7 < lVar28) {
    lVar12 = local_88 - lVar15;
    pfVar9 = (float *)(lVar15 + uVar7 * 4);
    lVar23 = lVar28 - uVar7;
    do {
      fVar29 = *(float *)((longlong)pfVar9 + lVar12) - *pfVar9;
      fVar32 = 0.0;
      if (0.0 <= fVar29) {
        fVar32 = fVar29;
      }
      *pfVar9 = fVar32;
      pfVar9 = pfVar9 + 1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  uVar20 = uVar7;
  if ((longlong)uVar7 < lVar28) {
    pfVar9 = (float *)(lVar15 + uVar7 * 4);
    lVar12 = lVar28 - uVar7;
    lVar23 = lVar12;
    do {
      fVar32 = *(float *)((param_18 - lVar15) + (longlong)pfVar9);
      fVar29 = *pfVar9;
      if (*pfVar9 <= fVar32) {
        fVar29 = fVar32;
      }
      *pfVar9 = fVar29;
      pfVar9 = pfVar9 + 1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    piVar27 = (int *)(param_20 + uVar7 * 4);
    do {
      fVar32 = *(float *)((longlong)piVar27 + (lVar15 - param_20));
      if (4.0 <= fVar32) {
        fVar32 = 4.0;
      }
      *(undefined8 *)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = 0x144f34a02;
      dVar30 = exp((double)fVar32 * 0.6931471805599453);
      *(undefined8 *)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = 0x144f34a1e;
      dVar30 = floor((double)((float)dVar30 * 13.0 + 0.5));
      *piVar27 = (int)dVar30;
      piVar27 = piVar27 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    uVar20 = (ulonglong)local_b0;
  }
  uVar13 = uVar7;
  if (((param_11 == 0) || (param_12 != 0)) && (param_10 == 0)) {
    uVar24 = uVar7;
    if ((longlong)uVar7 < lVar28) {
      do {
        *(float *)(lVar15 + uVar24 * 4) = *(float *)(lVar15 + uVar24 * 4) * 0.5;
        uVar24 = uVar24 + 1;
      } while ((longlong)uVar24 < lVar28);
      goto joined_r0x000144f34a78;
    }
  }
  else {
joined_r0x000144f34a78:
    for (; (longlong)uVar13 < lVar28; uVar13 = uVar13 + 1) {
      if ((longlong)uVar13 < 8) {
        fVar32 = *(float *)(lVar15 + uVar13 * 4);
        *(float *)(lVar15 + uVar13 * 4) = fVar32 + fVar32;
      }
      if (0xb < (longlong)uVar13) {
        *(float *)(lVar15 + uVar13 * 4) = *(float *)(lVar15 + uVar13 * 4) * 0.5;
      }
    }
  }
  if (*param_19 != 0) {
    uVar22 = param_5;
    if (0x13 < (int)param_5) {
      uVar22 = 0x13;
    }
    for (uVar13 = uVar7; (longlong)uVar13 < (longlong)(int)uVar22; uVar13 = uVar13 + 1) {
      *(float *)(lVar15 + uVar13 * 4) =
           (float)*(byte *)(uVar13 + 0x2c + (longlong)param_19) * 0.015625 +
           *(float *)(lVar15 + uVar13 * 4);
    }
  }
  if ((int)uVar20 < (int)param_5) {
    pfVar9 = (float *)(lVar15 + uVar7 * 4);
    psVar14 = (short *)(param_13 + uVar7 * 2);
    do {
      fVar32 = *pfVar9;
      if (4.0 <= fVar32) {
        fVar32 = 4.0;
      }
      *pfVar9 = fVar32;
      iVar16 = ((int)psVar14[1] - (int)*psVar14) * param_6 << ((byte)param_14 & 0x1f);
      if (iVar16 < 6) {
        iVar6 = (int)fVar32;
        iVar16 = iVar6 * iVar16 * 8;
      }
      else if (iVar16 < 0x31) {
        iVar6 = (int)(((float)iVar16 * fVar32) / 6.0);
        iVar16 = iVar6 * 0x30;
      }
      else {
        iVar6 = (int)(fVar32 * 8.0);
        iVar16 = iVar6 * iVar16 * 8;
        iVar16 = (int)((iVar16 >> 0x1f & 7U) + iVar16) >> 3;
      }
      if ((param_11 == 0) || ((param_12 != 0 && (param_10 == 0)))) {
        iVar17 = param_15 * 2;
        iVar17 = iVar17 / 3 + (iVar17 >> 0x1f) +
                 (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU) >> 0x1f);
        if (iVar17 < iVar16 + (int)local_b8 >> 6) {
          fVar32 = (float)(iVar17 * 0x40);
          *(int *)((longlong)param_7 + (longlong)(int)uVar20 * 4) = (int)fVar32 - (int)local_b8;
          local_b8 = fVar32;
          break;
        }
      }
      local_b8 = (float)((int)local_b8 + iVar16);
      uVar22 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar22;
      *(int *)((longlong)pfVar9 + ((longlong)param_7 - lVar15)) = iVar6;
      pfVar9 = pfVar9 + 1;
      psVar14 = psVar14 + 1;
    } while ((int)uVar22 < (int)param_5);
  }
LAB_144f34c2b:
  *param_16 = local_b8;
  uVar7 = local_78 ^ (ulonglong)&local_b8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = &UNK_144f34c47;
  FUN_144d8e3a0(uVar7);
}



// FUNCTION 144f34c84 FUN_144f34c84 body=1449 status=ok
// SIG undefined FUN_144f34c84(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f34c84(longlong *param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  undefined4 param_6,int *param_7,float *param_8,int *param_9,int param_10,
                  int param_11,int *param_12)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  void *pvVar11;
  uint uVar12;
  longlong lVar13;
  void *pvVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  size_t sVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  undefined8 uStack_130;
  undefined1 auStack_128 [32];
  ulonglong uStack_108;
  undefined4 auStack_100 [14];
  int local_c8;
  int local_c4;
  int local_c0;
  int iStack_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78 [2];
  void *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)&local_c8;
  local_80 = *param_1;
  local_98 = (longlong)param_5;
  local_c4 = *(int *)(local_80 + 4);
  lVar13 = (longlong)local_c4;
  uVar19 = (longlong)((param_5 + 0x400) * param_4) * 4;
  uVar10 = uVar19 + 0xf;
  if (uVar10 <= uVar19) {
    uVar10 = 0xffffffffffffff0;
  }
  uStack_130 = 0x144f34d28;
  plVar15 = local_78;
  lVar4 = -(uVar10 & 0xfffffffffffffff0);
  puVar16 = auStack_128 + lVar4;
  local_78[0] = (longlong)&local_c8 + lVar4;
  iStack_bc = local_c4 + param_5;
  local_78[1] = (longlong)&local_c8 + lVar4 + (longlong)(param_5 + 0x400) * 4;
  iVar22 = 0;
  iVar23 = 0;
  iVar20 = 0;
  local_c0 = param_4;
  local_a8 = param_2;
  local_a0 = lVar13;
  local_90 = param_1;
  local_88 = param_3;
  do {
    pvVar14 = (void *)*plVar15;
    pvVar11 = (void *)(local_88 + (longlong)iVar20 * 4);
    *(undefined8 *)(auStack_128 + lVar4 + -8) = 0x144f34d7c;
    memcpy(pvVar14,pvVar11,0x1000);
    lVar3 = *plVar15;
    sVar18 = local_98 << 2;
    *(undefined8 *)(auStack_128 + lVar4 + -8) = 0x144f34d9d;
    memcpy((void *)(lVar3 + 0x1000),(void *)(param_2 + (iVar23 + lVar13) * 4),sVar18);
    plVar6 = local_90;
    iVar23 = iVar23 + iStack_bc;
    plVar15 = plVar15 + 1;
    iVar22 = iVar22 + 1;
    iVar20 = iVar20 + 0x400;
  } while (iVar22 < param_4);
  iVar20 = 0;
  fVar28 = 0.0;
  if (param_10 == 0) {
    local_c8 = 0xf;
  }
  else {
    uVar19 = (longlong)(param_5 + 0x400 >> 1) * 4;
    uVar10 = uVar19 + 0xf;
    if (uVar10 <= uVar19) {
      uVar10 = 0xffffffffffffff0;
    }
    *(undefined8 *)(auStack_128 + lVar4 + -8) = 0x144f34e0d;
    iVar22 = local_c0;
    lVar3 = -(uVar10 & 0xfffffffffffffff0);
    puVar16 = auStack_128 + lVar3 + lVar4;
    lVar13 = (longlong)&local_c8 + lVar3 + lVar4;
    *(undefined4 *)((longlong)&uStack_108 + lVar3 + lVar4) =
         *(undefined4 *)((longlong)plVar6 + 0x4c);
    *(undefined8 *)(auStack_128 + lVar3 + lVar4 + -8) = 0x144f34e2f;
    FUN_1452e895c(local_78,lVar13,param_5 + 0x400,iVar22);
    *(undefined4 *)((longlong)auStack_100 + lVar3 + lVar4) =
         *(undefined4 *)((longlong)plVar6 + 0x4c);
    *(int **)((longlong)&uStack_108 + lVar3 + lVar4) = &local_c8;
    *(undefined8 *)(auStack_128 + lVar3 + lVar4 + -8) = 0x144f34e57;
    FUN_1452e8c0c(&stack0x00000738 + lVar3 + lVar4,lVar13,param_5,0x3d3);
    lVar5 = plVar6[0xe];
    local_c8 = 0x400 - local_c8;
    *(undefined4 *)((longlong)auStack_100 + lVar3 + lVar4 + 0x10) =
         *(undefined4 *)((longlong)plVar6 + 0x4c);
    uVar9 = *(undefined4 *)((longlong)plVar6 + 0x6c);
    *(int *)((longlong)auStack_100 + lVar3 + lVar4 + 8) = (int)lVar5;
    *(undefined4 *)((longlong)auStack_100 + lVar3 + lVar4) = uVar9;
    *(int **)((longlong)&uStack_108 + lVar3 + lVar4) = &local_c8;
    *(undefined8 *)(auStack_128 + lVar3 + lVar4 + -8) = 0x144f34e99;
    fVar25 = (float)FUN_1452e8eec(lVar13,0x400,0xf,param_5);
    fVar25 = fVar25 * 0.7;
    if (0x3fe < local_c8) {
      local_c8 = 0x3fe;
    }
    if (2 < *(int *)((longlong)plVar6 + 0x3c)) {
      fVar25 = fVar25 * 0.5;
    }
    if (4 < *(int *)((longlong)plVar6 + 0x3c)) {
      fVar25 = fVar25 * 0.5;
    }
    puVar17 = auStack_128 + lVar3 + lVar4;
    if (*(int *)((longlong)plVar6 + 0x3c) < 9) goto LAB_144f34edd;
  }
  fVar25 = 0.0;
  puVar17 = puVar16;
LAB_144f34edd:
  iVar22 = local_c8;
  if (*param_12 != 0) {
    fVar25 = fVar25 * (float)param_12[10];
  }
  uVar8 = local_c8 - *(int *)((longlong)plVar6 + 0x6c);
  fVar26 = 0.2;
  uVar12 = (int)uVar8 >> 0x1f;
  if (local_c8 < (int)(((uVar8 ^ uVar12) - uVar12) * 10)) {
    fVar26 = 0.4;
  }
  if (param_11 < 0x19) {
    fVar26 = fVar26 + 0.1;
  }
  if (param_11 < 0x23) {
    fVar26 = fVar26 + 0.1;
  }
  fVar1 = *(float *)(plVar6 + 0xe);
  if (0.4 < fVar1) {
    fVar26 = fVar26 + -0.1;
  }
  if (0.55 < fVar1) {
    fVar26 = fVar26 + -0.1;
  }
  if (fVar26 <= 0.2) {
    fVar26 = 0.2;
  }
  if (fVar26 <= fVar25) {
    if (ABS(fVar25 - fVar1) < 0.1) {
      fVar25 = fVar1;
    }
    *(undefined8 *)(puVar17 + -8) = 0x144f34fb5;
    dVar27 = floor((double)((fVar25 * 32.0) / 3.0 + 0.5));
    local_b0 = 1;
    local_b4 = (int)dVar27 + -1;
    if (7 < local_b4) {
      local_b4 = 7;
    }
    if (local_b4 < 0) {
      local_b4 = iVar20;
    }
    fVar28 = (float)(local_b4 + 1) * 0.09375;
  }
  else {
    local_b0 = 0;
    local_b4 = 0;
  }
  local_90 = (longlong *)(local_a0 << 2);
  local_b8 = 0;
  plVar15 = local_78;
  iVar23 = iVar20;
  iVar21 = iVar20;
  do {
    plVar7 = local_90;
    iVar24 = *(int *)(local_80 + 0x30) - local_c4;
    uVar9 = 0xf;
    if (0xf < *(int *)((longlong)plVar6 + 0x6c)) {
      uVar9 = *(undefined4 *)((longlong)plVar6 + 0x6c);
    }
    *(undefined4 *)((longlong)plVar6 + 0x6c) = uVar9;
    pvVar11 = (void *)((longlong)plVar6 + ((longlong)iVar21 + 0x3f) * 4);
    pvVar14 = (void *)(local_a8 + (longlong)iVar23 * 4);
    local_68 = pvVar11;
    *(undefined8 *)(puVar17 + -8) = 0x144f35050;
    memcpy(pvVar14,pvVar11,(size_t)plVar7);
    if (iVar24 != 0) {
      uVar9 = *(undefined4 *)((longlong)plVar6 + 0x74);
      uVar8 = *(uint *)(plVar6 + 0xe);
      lVar4 = *plVar15;
      uVar2 = *(undefined4 *)((longlong)plVar6 + 0x6c);
      lVar13 = local_a8 + (iVar23 + local_a0) * 4;
      *(undefined4 *)(puVar17 + 0x58) = *(undefined4 *)((longlong)plVar6 + 0x4c);
      *(undefined4 *)(puVar17 + 0x50) = 0;
      *(undefined8 *)(puVar17 + 0x48) = 0;
      *(undefined4 *)(puVar17 + 0x40) = uVar9;
      *(undefined4 *)(puVar17 + 0x38) = uVar9;
      *(uint *)(puVar17 + 0x30) = uVar8 ^ 0x80000000;
      *(uint *)(puVar17 + 0x28) = uVar8 ^ 0x80000000;
      *(int *)(puVar17 + 0x20) = iVar24;
      *(undefined8 *)(puVar17 + -8) = 0x144f350b4;
      FUN_144bca9f0(lVar13,lVar4 + 0x1000,uVar2,uVar2);
      iVar22 = local_c8;
    }
    lVar4 = *plVar15;
    uVar8 = *(uint *)(plVar6 + 0xe);
    lVar13 = local_a8 + (local_a0 + iVar24 + (longlong)iVar23) * 4;
    *(undefined4 *)(puVar17 + 0x58) = *(undefined4 *)((longlong)plVar6 + 0x4c);
    *(int *)(puVar17 + 0x50) = local_c4;
    *(undefined8 *)(puVar17 + 0x48) = *(undefined8 *)(local_80 + 0x48);
    *(undefined4 *)(puVar17 + 0x40) = param_6;
    *(undefined4 *)(puVar17 + 0x38) = *(undefined4 *)((longlong)plVar6 + 0x74);
    *(float *)(puVar17 + 0x30) = -fVar28;
    *(uint *)(puVar17 + 0x28) = uVar8 ^ 0x80000000;
    *(int *)(puVar17 + 0x20) = param_5 - iVar24;
    uVar9 = *(undefined4 *)((longlong)plVar6 + 0x6c);
    *(undefined8 *)(puVar17 + -8) = 0x144f35139;
    FUN_144bca9f0(lVar13,lVar4 + 0x1000 + (longlong)iVar24 * 4,uVar9,iVar22);
    pvVar14 = local_68;
    plVar7 = local_90;
    pvVar11 = (void *)(local_a8 + (local_98 + iVar23) * 4);
    *(undefined8 *)(puVar17 + -8) = 0x144f35155;
    memcpy(pvVar14,pvVar11,(size_t)plVar7);
    iVar22 = local_b8;
    lVar13 = (longlong)local_b8;
    pvVar11 = (void *)(local_88 + lVar13 * 4);
    if (param_5 < 0x401) {
      pvVar14 = (void *)(local_88 + (lVar13 + param_5) * 4);
      *(undefined8 *)(puVar17 + -8) = 0x144f351a5;
      memmove(pvVar11,pvVar14,(longlong)(0x400 - param_5) << 2);
      pvVar14 = (void *)(*plVar15 + 0x1000);
      sVar18 = local_98 << 2;
      pvVar11 = (void *)(local_88 + 0x1000 + (lVar13 - local_98) * 4);
    }
    else {
      sVar18 = 0x1000;
      pvVar14 = (void *)(local_98 * 4 + *plVar15);
    }
    *(undefined8 *)(puVar17 + -8) = 0x144f351ce;
    memcpy(pvVar11,pvVar14,sVar18);
    local_b8 = iVar22 + 0x400;
    iVar23 = iVar23 + iStack_bc;
    iVar21 = iVar21 + local_c4;
    iVar20 = iVar20 + 1;
    plVar15 = plVar15 + 1;
    iVar22 = local_c8;
  } while (iVar20 < local_c0);
  *param_8 = fVar28;
  *param_7 = local_c8;
  *param_9 = local_b4;
  uVar10 = local_60 ^ (ulonglong)&local_c8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar17 + -8) = &UNK_144f3522d;
  FUN_144d8e3a0(uVar10);
}



// FUNCTION 144f35268 FUN_144f35268 body=743 status=ok
// SIG undefined FUN_144f35268(void)

int FUN_144f35268(longlong param_1,int *param_2,int param_3,byte param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,float param_10,int param_11,float param_12,
                 int param_13,float param_14,int param_15,int param_16,float param_17,float param_18
                 )

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 8);
  if (param_6 != 0) {
    iVar2 = param_6;
  }
  iVar3 = (int)*(short *)(lVar1 + (longlong)iVar2 * 2) << (param_4 & 0x1f);
  if (param_7 == 2) {
    iVar4 = iVar2;
    if (param_8 < iVar2) {
      iVar4 = param_8;
    }
    iVar3 = iVar3 + ((int)*(short *)(lVar1 + (longlong)iVar4 * 2) << (param_4 & 0x1f));
  }
  iVar4 = param_3;
  if ((*param_2 != 0) && ((float)param_2[4] < 0.4)) {
    iVar4 = param_3 - (int)((0.4 - (float)param_2[4]) * (float)(iVar3 << 3));
  }
  if (param_7 == 2) {
    if (param_8 < iVar2) {
      iVar2 = param_8;
    }
    iVar2 = ((int)*(short *)(lVar1 + (longlong)iVar2 * 2) << (param_4 & 0x1f)) - iVar2;
    if (1.0 <= param_10) {
      param_10 = 1.0;
    }
    fVar5 = (float)iVar4 * (((float)iVar2 * 0.8) / (float)iVar3);
    fVar6 = (param_10 - 0.1) * (float)(iVar2 * 8);
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    iVar4 = iVar4 - (int)fVar5;
  }
  iVar4 = iVar4 + (param_11 - (0x13 << (param_4 & 0x1f)));
  iVar4 = iVar4 + (int)((param_12 - 0.044) * (float)iVar4);
  if ((*param_2 != 0) && (param_15 == 0)) {
    fVar5 = 0.0;
    if (0.0 <= (float)param_2[1] - 0.15) {
      fVar5 = (float)param_2[1] - 0.15;
    }
    iVar4 = iVar4 - (int)((fVar5 - 0.12) * (float)(iVar3 << 3) * -1.2);
    if (param_13 != 0) {
      iVar4 = iVar4 + (int)((float)(iVar3 << 3) * 0.8);
    }
  }
  if ((param_16 != 0) && (param_15 == 0)) {
    iVar2 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
    iVar3 = (int)((float)(iVar3 << 3) * param_17) + iVar4;
    iVar4 = iVar2;
    if (iVar2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  iVar3 = (int)((float)(((int)*(short *)(lVar1 + -4 + (longlong)*(int *)(param_1 + 8) * 2) <<
                        (param_4 & 0x1f)) * param_7 * 8) * param_14);
  iVar2 = iVar4 >> 2;
  if (iVar4 >> 2 < iVar3) {
    iVar2 = iVar3;
  }
  if (iVar4 < iVar2) {
    iVar2 = iVar4;
  }
  if (((param_16 == 0) || (param_15 != 0)) && (param_9 != 0)) {
    iVar2 = param_3 - (int)((float)(iVar2 - param_3) * -0.67);
  }
  if ((param_16 == 0) && (param_12 < 0.2)) {
    param_5 = 96000 - param_5;
    if (32000 < param_5) {
      param_5 = 32000;
    }
    if (param_5 < 0) {
      param_5 = 0;
    }
    iVar2 = iVar2 + (int)((float)param_5 * 3.1e-06 * param_18 * (float)iVar2);
  }
  if (param_3 * 2 < iVar2) {
    iVar2 = param_3 * 2;
  }
  return iVar2;
}



// FUNCTION 144f35550 FUN_144f35550 body=43 status=ok
// SIG undefined FUN_144f35550(void)

void FUN_144f35550(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = param_2;
  param_1[3] = 0x21;
  *(undefined4 *)(param_1 + 4) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}



// FUNCTION 144f3557c FUN_144f3557c body=126 status=ok
// SIG undefined FUN_144f3557c(void)

void FUN_144f3557c(longlong param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = uVar1 / param_4;
  if (param_2 == 0) {
    uVar2 = uVar1 - (param_4 - param_3) * uVar2;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uVar1 - (param_4 - param_2) * uVar2);
    uVar2 = (param_3 - param_2) * uVar2;
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  while (uVar2 < 0x800001) {
    FUN_144f35b5c(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
    uVar2 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
  }
  return;
}



// FUNCTION 144f355fc FUN_144f355fc body=132 status=ok
// SIG undefined FUN_144f355fc(void)

void FUN_144f355fc(longlong param_1,int param_2,int param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar3 = uVar1 >> (param_4 & 0x1f);
  iVar2 = 1 << (param_4 & 0x1f);
  if (param_2 == 0) {
    uVar3 = uVar1 - (iVar2 - param_3) * uVar3;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uVar1 - (iVar2 - param_2) * uVar3);
    uVar3 = (param_3 - param_2) * uVar3;
  }
  *(uint *)(param_1 + 0x20) = uVar3;
  while (uVar3 < 0x800001) {
    FUN_144f35b5c(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
    uVar3 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
  }
  return;
}



// FUNCTION 144f35680 FUN_144f35680 body=98 status=ok
// SIG undefined FUN_144f35680(void)

void FUN_144f35680(longlong param_1,int param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x20) >> (param_3 & 0x1f);
  uVar1 = *(uint *)(param_1 + 0x20) - uVar2;
  if (param_2 != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar1;
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  while (uVar1 < 0x800001) {
    FUN_144f35b5c(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
    uVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
  }
  return;
}



// FUNCTION 144f356e4 FUN_144f356e4 body=138 status=ok
// SIG undefined FUN_144f356e4(void)

void FUN_144f356e4(longlong param_1,int param_2,longlong param_3,byte param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar3 = uVar1 >> (param_4 & 0x1f);
  pbVar2 = (byte *)(param_2 + param_3);
  if (param_2 < 1) {
    uVar3 = uVar1 - *pbVar2 * uVar3;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uVar1 - pbVar2[-1] * uVar3);
    uVar3 = ((uint)pbVar2[-1] - (uint)*pbVar2) * uVar3;
  }
  *(uint *)(param_1 + 0x20) = uVar3;
  while (uVar3 < 0x800001) {
    FUN_144f35b5c(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
    uVar3 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
  }
  return;
}



// FUNCTION 144f35770 FUN_144f35770 body=174 status=ok
// SIG undefined FUN_144f35770(void)

void FUN_144f35770(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 < 2) {
    FUN_144bca940("assertion failed: _ft>1","../../../third_party/opus/src/celt/entenc.c",0xb4);
  }
  uVar4 = param_3 - 1;
  iVar1 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (iVar1 + 1 < 9) {
    FUN_144f3557c(param_1,param_2,param_2 + 1,param_3);
  }
  else {
    bVar2 = (byte)(iVar1 + -7);
    uVar3 = param_2 >> (bVar2 & 0x1f);
    FUN_144f3557c(param_1,uVar3,uVar3 + 1,(uVar4 >> (bVar2 & 0x1f)) + 1);
    FUN_144f35820(param_1,(1 << (bVar2 & 0x1f)) - 1U & param_2,iVar1 + -7);
  }
  return;
}



// FUNCTION 144f35820 FUN_144f35820 body=179 status=ok
// SIG undefined FUN_144f35820(void)

void FUN_144f35820(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 2);
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  if (param_3 == 0) {
    FUN_144bca940("assertion failed: _bits>0","../../../third_party/opus/src/celt/entenc.c",0xc6);
  }
  if (0x20 < (uint)(iVar3 + param_3)) {
    do {
      if ((uint)(*(int *)((longlong)param_1 + 0x1c) + *(int *)((longlong)param_1 + 0xc)) <
          *(uint *)(param_1 + 1)) {
        iVar1 = *(int *)((longlong)param_1 + 0xc) + 1;
        *(int *)((longlong)param_1 + 0xc) = iVar1;
        *(char *)((ulonglong)(*(uint *)(param_1 + 1) - iVar1) + *param_1) = (char)uVar4;
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar2;
      iVar3 = iVar3 + -8;
      uVar4 = uVar4 >> 8;
    } while (7 < iVar3);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar3 + param_3;
  *(int *)(param_1 + 3) = (int)param_1[3] + param_3;
  *(uint *)(param_1 + 2) = param_2 << ((byte)iVar3 & 0x1f) | uVar4;
  return;
}



// FUNCTION 144f358d4 FUN_144f358d4 body=180 status=ok
// SIG undefined FUN_144f358d4(void)

void FUN_144f358d4(undefined8 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (8 < param_3) {
    FUN_144bca940("assertion failed: _nbits<=EC_SYM_BITS",
                  "../../../third_party/opus/src/celt/entenc.c",0xd9);
  }
  bVar1 = (byte)param_3;
  bVar2 = -bVar1 + 8;
  uVar3 = (1 << (bVar1 & 0x1f)) + -1 << (bVar2 & 0x1f);
  if (*(int *)((longlong)param_1 + 0x1c) == 0) {
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      if (0x80000000U >> (bVar1 & 0x1f) < *(uint *)(param_1 + 4)) {
        *(undefined4 *)(param_1 + 6) = 0xffffffff;
      }
      else {
        *(uint *)((longlong)param_1 + 0x24) =
             param_2 << (-bVar1 + 0x1f & 0x1f) |
             ~(uVar3 << 0x17) & *(uint *)((longlong)param_1 + 0x24);
      }
    }
    else {
      *(uint *)((longlong)param_1 + 0x2c) =
           ~uVar3 & *(uint *)((longlong)param_1 + 0x2c) | param_2 << (bVar2 & 0x1f);
    }
  }
  else {
    *(byte *)*param_1 = ~(byte)uVar3 & *(byte *)*param_1 | (char)param_2 << (bVar2 & 0x1f);
  }
  return;
}



// FUNCTION 144f35988 FUN_144f35988 body=98 status=ok
// SIG undefined FUN_144f35988(void)

void FUN_144f35988(longlong *param_1,uint param_2)

{
  uint uVar1;
  ulonglong _Size;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (param_2 < *(int *)((longlong)param_1 + 0x1c) + uVar1) {
    FUN_144bca940("assertion failed: _this->offs+_this->end_offs<=_size",
                  "../../../third_party/opus/src/celt/entenc.c",0xee);
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
  }
  _Size = (ulonglong)uVar1;
  memmove((void *)((param_2 - _Size) + *param_1),
          (void *)((*(uint *)(param_1 + 1) - _Size) + *param_1),_Size);
  *(uint *)(param_1 + 1) = param_2;
  return;
}



// FUNCTION 144f359ec FUN_144f359ec body=367 status=ok
// SIG undefined FUN_144f359ec(void)

void FUN_144f359ec(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_1 + 4);
  iVar2 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar7 = -iVar2 + 0x1f;
  uVar8 = 0x7fffffff >> ((byte)iVar7 & 0x1f);
  if (*(int *)((longlong)param_1 + 0x24) + uVar3 <=
      (*(int *)((longlong)param_1 + 0x24) + uVar8 & ~uVar8 | uVar8)) {
    iVar7 = -iVar2 + 0x20;
  }
  if (0 < iVar7) {
    uVar3 = (iVar7 - 1U >> 3) + 1;
    uVar6 = (ulonglong)uVar3;
    iVar7 = iVar7 + uVar3 * -8;
    do {
      FUN_144f35b5c(param_1);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((-1 < *(int *)((longlong)param_1 + 0x2c)) || ((int)param_1[5] != 0)) {
    FUN_144f35b5c(param_1);
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  uVar8 = *(uint *)(param_1 + 2);
  if ((int)uVar3 < 8) {
    uVar4 = *(uint *)(param_1 + 6);
  }
  else {
    uVar6 = (ulonglong)(uVar3 >> 3);
    uVar3 = uVar3 + (uVar3 >> 3) * -8;
    do {
      if ((uint)(*(int *)((longlong)param_1 + 0x1c) + *(int *)((longlong)param_1 + 0xc)) <
          *(uint *)(param_1 + 1)) {
        iVar2 = *(int *)((longlong)param_1 + 0xc) + 1;
        *(int *)((longlong)param_1 + 0xc) = iVar2;
        uVar4 = 0;
        *(char *)((ulonglong)(*(uint *)(param_1 + 1) - iVar2) + *param_1) = (char)uVar8;
      }
      else {
        uVar4 = 0xffffffff;
      }
      uVar4 = *(uint *)(param_1 + 6) | uVar4;
      uVar8 = uVar8 >> 8;
      *(uint *)(param_1 + 6) = uVar4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  bVar5 = (byte)uVar8;
  if ((uVar4 == 0) &&
     (memset((void *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1),0,
             (ulonglong)
             (((int)param_1[1] - *(int *)((longlong)param_1 + 0xc)) -
             *(uint *)((longlong)param_1 + 0x1c))), 0 < (int)uVar3)) {
    uVar8 = *(uint *)((longlong)param_1 + 0xc);
    uVar4 = *(uint *)(param_1 + 1);
    if (uVar8 < uVar4) {
      if ((uVar4 <= *(int *)((longlong)param_1 + 0x1c) + uVar8) && (-iVar7 < (int)uVar3)) {
        bVar5 = bVar5 & (char)(1 << ((byte)-iVar7 & 0x1f)) - 1U;
        *(undefined4 *)(param_1 + 6) = 0xffffffff;
      }
      pbVar1 = (byte *)((ulonglong)((uVar4 - uVar8) - 1) + *param_1);
      *pbVar1 = *pbVar1 | bVar5;
    }
    else {
      *(undefined4 *)(param_1 + 6) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 144f35b5c FUN_144f35b5c body=145 status=ok
// SIG undefined FUN_144f35b5c(void)

void FUN_144f35b5c(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  
  if (param_2 != 0xff) {
    cVar3 = (char)(param_2 >> 8);
    if (-1 < *(int *)((longlong)param_1 + 0x2c)) {
      if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
          *(uint *)(param_1 + 1)) {
        *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) =
             *(char *)((longlong)param_1 + 0x2c) + cVar3;
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar2;
    }
    if ((int)param_1[5] != 0) {
      do {
        if (*(int *)((longlong)param_1 + 0xc) + *(uint *)((longlong)param_1 + 0x1c) <
            *(uint *)(param_1 + 1)) {
          *(char *)((ulonglong)*(uint *)((longlong)param_1 + 0x1c) + *param_1) = cVar3 + -1;
          *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
          uVar2 = 0;
        }
        else {
          uVar2 = 0xffffffff;
        }
        *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar2;
        plVar1 = param_1 + 5;
        *(int *)plVar1 = (int)*plVar1 + -1;
      } while ((int)*plVar1 != 0);
    }
    *(uint *)((longlong)param_1 + 0x2c) = param_2 & 0xff;
    return;
  }
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  return;
}



// FUNCTION 144f35bf0 FUN_144f35bf0 body=9 status=ok
// SIG undefined FUN_144f35bf0(void)

undefined8 FUN_144f35bf0(undefined4 *param_1)

{
  *param_1 = 0x4f28;
  return 0;
}



// FUNCTION 144f35bfc FUN_144f35bfc body=344 status=ok
// SIG undefined FUN_144f35bfc(void)

int FUN_144f35bfc(void *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  
  iVar2 = 0;
  memset(param_1,0,0x4f28);
  uVar3 = 1;
  lVar5 = 2;
  pvVar4 = param_1;
  do {
    iVar1 = FUN_1452f3490(pvVar4,param_2);
    iVar2 = iVar2 + iVar1;
    if (iVar2 != 0) {
      FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/silk/enc_API.c",0x55);
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x2768);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)((longlong)param_1 + 0x4f14) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4f10) = 1;
  *param_3 = 1;
  param_3[1] = *(undefined4 *)((longlong)param_1 + 0x4f14);
  param_3[2] = *(undefined4 *)((longlong)param_1 + 0x11cc);
  param_3[3] = *(undefined4 *)((longlong)param_1 + 0x11d4);
  param_3[4] = *(undefined4 *)((longlong)param_1 + 0x11d8);
  param_3[5] = *(undefined4 *)((longlong)param_1 + 0x11dc);
  param_3[6] = *(undefined4 *)((longlong)param_1 + 0x1204);
  param_3[7] = *(undefined4 *)((longlong)param_1 + 0x1200);
  param_3[8] = *(undefined4 *)((longlong)param_1 + 0x1208);
  param_3[9] = *(undefined4 *)((longlong)param_1 + 0x1210);
  param_3[10] = *(undefined4 *)((longlong)param_1 + 0x17dc);
  param_3[0xc] = *(undefined4 *)((longlong)param_1 + 0x17d0);
  param_3[0xd] = *(undefined4 *)((longlong)param_1 + 0x1244);
  param_3[0x12] = *(short *)((longlong)param_1 + 0x11e0) * 1000;
  param_3[0x13] = *(undefined4 *)((longlong)param_1 + 0x11b8);
  if ((*(int *)((longlong)param_1 + 0x11e0) != 0x10) || (*(int *)((longlong)param_1 + 0x1c) != 0)) {
    uVar3 = 0;
  }
  param_3[0x14] = uVar3;
  if (iVar2 != 0) {
    FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/silk/enc_API.c",0x5e);
  }
  return iVar2;
}



// FUNCTION 144f35d54 FUN_144f35d54 body=4386 status=ok
// SIG undefined FUN_144f35d54(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f35d54(undefined8 *param_1,int *param_2,void *param_3,int param_4,longlong param_5,
                  int *param_6,int param_7,undefined4 param_8)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *pvVar11;
  void *_Dst;
  undefined8 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined2 *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined4 *puVar24;
  int *piVar25;
  int *piVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  uint uVar29;
  undefined4 uVar30;
  int *piVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  undefined4 uVar35;
  longlong lVar36;
  undefined8 uStack_130;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong lStack_100;
  int local_f8 [12];
  int local_c8;
  char local_c4 [4];
  int local_c0;
  int local_bc;
  int local_b8;
  int *local_b0;
  int local_a8;
  void *local_a0;
  ulonglong local_98;
  int local_90;
  int local_8c;
  int local_88;
  int *local_80;
  int local_78;
  int *local_70;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  puVar27 = auStack_128;
  local_30 = DAT_14c707940 ^ (ulonglong)&local_c8;
  local_8c = 0;
  local_88 = 0;
  if (param_2[0x11] != 0) {
    *(undefined4 *)(param_1 + 0x247) = 1;
    *(undefined4 *)(param_1 + 0x734) = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x3dec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1684) = 0;
  uStack_130 = 0x144f35dd8;
  local_c0 = param_4;
  local_a0 = param_3;
  local_70 = param_2;
  local_50 = param_1;
  local_c8 = FUN_1452f1b20(param_2);
  if (local_c8 == 0) {
    param_2[0x16] = 0;
    if (*(int *)((longlong)param_1 + 0x4f14) < param_2[1]) {
      uStack_130 = 0x144f35e34;
      local_c8 = FUN_1452f3490(param_1 + 0x4ed,*(undefined4 *)((longlong)param_1 + 0x13f4));
      *(undefined4 *)(param_1 + 0x9da) = 0;
      param_1[0x9db] = 0;
      param_1[0x9dc] = 1;
      *(undefined4 *)(param_1 + 0x9dd) = 1;
      *(undefined4 *)((longlong)param_1 + 0x4eec) = 0x4000;
      param_4 = local_c0;
      if (*(int *)(param_1 + 0x9e2) == 2) {
        lVar23 = 2;
        puVar16 = param_1 + 0x7c1;
        puVar12 = param_1 + 0x2d4;
        do {
          puVar20 = puVar12;
          puVar15 = puVar16;
          uVar28 = puVar20[1];
          uVar8 = puVar20[2];
          uVar9 = puVar20[3];
          *puVar15 = *puVar20;
          puVar15[1] = uVar28;
          uVar28 = puVar20[4];
          uVar10 = puVar20[5];
          puVar15[2] = uVar8;
          puVar15[3] = uVar9;
          uVar8 = puVar20[6];
          uVar9 = puVar20[7];
          puVar15[4] = uVar28;
          puVar15[5] = uVar10;
          uVar28 = puVar20[8];
          uVar10 = puVar20[9];
          puVar15[6] = uVar8;
          puVar15[7] = uVar9;
          uVar8 = puVar20[10];
          uVar9 = puVar20[0xb];
          puVar15[8] = uVar28;
          puVar15[9] = uVar10;
          uVar28 = puVar20[0xc];
          uVar10 = puVar20[0xd];
          puVar15[10] = uVar8;
          puVar15[0xb] = uVar9;
          uVar8 = puVar20[0xe];
          uVar9 = puVar20[0xf];
          puVar15[0xc] = uVar28;
          puVar15[0xd] = uVar10;
          puVar15[0xe] = uVar8;
          puVar15[0xf] = uVar9;
          lVar23 = lVar23 + -1;
          puVar16 = puVar15 + 0x10;
          puVar12 = puVar20 + 0x10;
        } while (lVar23 != 0);
        uVar28 = puVar20[0x11];
        uVar8 = puVar20[0x12];
        uVar9 = puVar20[0x13];
        puVar15[0x10] = puVar20[0x10];
        puVar15[0x11] = uVar28;
        uVar35 = *(undefined4 *)(puVar20 + 0x14);
        uVar30 = *(undefined4 *)((longlong)puVar20 + 0xa4);
        uVar6 = *(undefined4 *)(puVar20 + 0x15);
        uVar7 = *(undefined4 *)((longlong)puVar20 + 0xac);
        puVar15[0x12] = uVar8;
        puVar15[0x13] = uVar9;
        *(undefined4 *)(puVar15 + 0x14) = uVar35;
        *(undefined4 *)((longlong)puVar15 + 0xa4) = uVar30;
        *(undefined4 *)(puVar15 + 0x15) = uVar6;
        *(undefined4 *)((longlong)puVar15 + 0xac) = uVar7;
        param_1[0x4ed] = *param_1;
      }
    }
    uVar22 = 0;
    if ((param_2[6] != *(int *)((longlong)param_1 + 0x1204)) ||
       (local_98 = uVar22, *(int *)((longlong)param_1 + 0x4f14) != param_2[1])) {
      local_98 = 1;
    }
    *(int *)(param_1 + 0x9e2) = *param_2;
    *(int *)((longlong)param_1 + 0x4f14) = param_2[1];
    iVar17 = param_2[2];
    local_bc = 0;
    local_a8 = (param_4 * 100) / iVar17;
    local_b8 = 1;
    if (1 < local_a8) {
      local_b8 = local_a8 >> 1;
    }
    if (param_7 == 0) {
      if ((iVar17 * local_a8 == param_4 * 100) && (-1 < param_4)) {
        if (param_4 * 1000 <= iVar17 * param_2[6]) goto LAB_144f36045;
        uVar28 = 0xf1;
      }
      else {
        uVar28 = 0xeb;
      }
    }
    else {
      if (local_a8 == 1) {
        puVar16 = param_1 + 2;
        uVar35 = local_38;
        if (param_7 == 2) {
          local_48 = *(undefined4 *)puVar16;
          uStack_44 = *(undefined4 *)((longlong)param_1 + 0x14);
          uStack_40 = *(undefined4 *)(param_1 + 3);
          uStack_3c = *(undefined4 *)((longlong)param_1 + 0x1c);
          uVar35 = *(undefined4 *)(param_1 + 0x23c);
        }
        local_60 = (void *)CONCAT44(uStack_44,local_48);
        uStack_58 = uStack_40;
        uStack_54 = uStack_3c;
        if (0 < param_2[1]) {
          do {
            uStack_130 = 0x144f35fb3;
            local_c8 = FUN_1452f3490(param_1 + (longlong)(int)uVar22 * 0x4ed,
                                     *(undefined4 *)((longlong)puVar16 + 0x13e4));
            if (param_7 == 2) {
              *(undefined4 *)puVar16 = (undefined4)local_60;
              *(undefined4 *)((longlong)puVar16 + 4) = local_60._4_4_;
              *(undefined4 *)(puVar16 + 1) = uStack_58;
              *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_54;
              *(undefined4 *)(puVar16 + 2) = uVar35;
            }
            if (local_c8 != 0) {
              uStack_130 = 0x144f35fe7;
              FUN_144bca940("assertion failed: !ret","../../../third_party/opus/src/silk/enc_API.c",
                            0xde);
            }
            puVar16 = puVar16 + 0x4ed;
            uVar32 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar32;
          } while ((int)uVar32 < param_2[1]);
        }
        iVar17 = 0;
        local_8c = param_2[6];
        local_88 = param_2[9];
        param_2[9] = 0;
        param_2[6] = 10;
        if (0 < param_2[1]) {
          puVar16 = param_1 + 0x249;
          do {
            *(undefined4 *)((longlong)puVar16 + -0xc) = 0;
            iVar17 = iVar17 + 1;
            *(undefined4 *)puVar16 = 1;
            puVar16 = puVar16 + 0x4ed;
          } while (iVar17 < param_2[1]);
        }
LAB_144f36045:
        uVar22 = local_98;
        iVar34 = local_a8;
        iVar33 = 0;
        iVar17 = param_2[1];
        iVar18 = local_c8;
        if (0 < iVar17) {
          puVar24 = (undefined4 *)((longlong)param_1 + 0x1284);
          do {
            if (iVar33 == 1) {
              local_108._0_4_ = *(undefined4 *)(param_1 + 0x23c);
            }
            else {
              local_108._0_4_ = 0;
            }
            uStack_130 = 0x144f360c0;
            iVar17 = FUN_1452f34e8(param_1 + (longlong)iVar33 * 0x4ed,param_2,
                                   *(undefined4 *)(param_1 + 0x9e4),iVar33);
            iVar18 = 0;
            if (iVar17 != 0) goto LAB_144f36e67;
            if (((puVar24[-0x13] != 0) || (uVar22 != 0)) &&
               (puVar14 = puVar24, 0 < *(int *)(param_1 + 0x2d0))) {
              do {
                *puVar14 = 0;
                iVar18 = iVar18 + 1;
                puVar14 = puVar14 + 1;
              } while (iVar18 < *(int *)(param_1 + 0x2d0));
            }
            iVar33 = iVar33 + 1;
            puVar24[0x154] = puVar24[0x153];
            puVar24 = puVar24 + 0x9da;
            iVar17 = param_2[1];
          } while (iVar33 < iVar17);
          iVar18 = 0;
        }
        if ((iVar17 != 1) && (*(int *)(param_1 + 0x23c) != *(int *)(param_1 + 0x729))) {
          uStack_130 = 0x144f3615c;
          FUN_144bca940("assertion failed: encControl->nChannelsInternal == 1 || psEnc->state_Fxx[ 0 ].sCmn.fs_kHz == psEnc->state_Fxx[ 1 ].sCmn.fs_kHz"
                        ,"../../../third_party/opus/src/silk/enc_API.c",0x106);
        }
        local_78 = *(int *)(param_1 + 0x23c) * iVar34 * 10;
        uVar5 = (longlong)
                ((*(int *)((longlong)param_1 + 0x11cc) * local_78) /
                (*(int *)(param_1 + 0x23c) * 1000)) * 2;
        uVar22 = uVar5 + 0xf;
        if (uVar22 <= uVar5) {
          uVar22 = 0xffffffffffffff0;
        }
        uStack_130 = 0x144f361a8;
        lVar23 = -(uVar22 & 0xfffffffffffffff0);
        puVar27 = auStack_128 + lVar23;
        local_90 = 0;
        local_60 = (void *)((longlong)&local_c8 + lVar23);
        do {
          _Dst = local_60;
          pvVar11 = local_a0;
          lVar19 = 0;
          iVar17 = *(int *)((longlong)param_1 + 0x167c);
          iVar34 = local_78;
          if (*(int *)(param_1 + 0x23d) - iVar17 < local_78) {
            iVar34 = *(int *)(param_1 + 0x23d) - iVar17;
          }
          uVar22 = (longlong)(*(int *)((longlong)param_1 + 0x11cc) * iVar34) /
                   (longlong)(*(int *)(param_1 + 0x23c) * 1000);
          iVar33 = (int)uVar22;
          lVar36 = (longlong)iVar33;
          if (*param_2 == 2) {
            if (param_2[1] == 2) {
              iVar13 = *(int *)((longlong)param_1 + 0x1684);
              if (0 < iVar33) {
                do {
                  *(undefined2 *)((longlong)_Dst + lVar19 * 2) =
                       *(undefined2 *)((longlong)pvVar11 + lVar19 * 4);
                  lVar19 = lVar19 + 1;
                } while (lVar19 < lVar36);
                iVar17 = *(int *)((longlong)param_1 + 0x167c);
              }
              if ((*(int *)(param_1 + 0x9e3) == 1) && (iVar13 == 0)) {
                lVar19 = 2;
                puVar16 = param_1 + 0x7c1;
                puVar12 = param_1 + 0x2d4;
                do {
                  puVar20 = puVar12;
                  puVar15 = puVar16;
                  uVar28 = puVar20[1];
                  uVar8 = puVar20[2];
                  uVar9 = puVar20[3];
                  *puVar15 = *puVar20;
                  puVar15[1] = uVar28;
                  uVar28 = puVar20[4];
                  uVar10 = puVar20[5];
                  puVar15[2] = uVar8;
                  puVar15[3] = uVar9;
                  uVar8 = puVar20[6];
                  uVar9 = puVar20[7];
                  puVar15[4] = uVar28;
                  puVar15[5] = uVar10;
                  uVar28 = puVar20[8];
                  uVar10 = puVar20[9];
                  puVar15[6] = uVar8;
                  puVar15[7] = uVar9;
                  uVar8 = puVar20[10];
                  uVar9 = puVar20[0xb];
                  puVar15[8] = uVar28;
                  puVar15[9] = uVar10;
                  uVar28 = puVar20[0xc];
                  uVar10 = puVar20[0xd];
                  puVar15[10] = uVar8;
                  puVar15[0xb] = uVar9;
                  uVar8 = puVar20[0xe];
                  uVar9 = puVar20[0xf];
                  puVar15[0xc] = uVar28;
                  puVar15[0xd] = uVar10;
                  puVar15[0xe] = uVar8;
                  puVar15[0xf] = uVar9;
                  lVar19 = lVar19 + -1;
                  puVar16 = puVar15 + 0x10;
                  puVar12 = puVar20 + 0x10;
                } while (lVar19 != 0);
                uVar28 = puVar20[0x11];
                uVar8 = puVar20[0x12];
                uVar9 = puVar20[0x13];
                puVar15[0x10] = puVar20[0x10];
                puVar15[0x11] = uVar28;
                uVar35 = *(undefined4 *)(puVar20 + 0x14);
                uVar30 = *(undefined4 *)((longlong)puVar20 + 0xa4);
                uVar6 = *(undefined4 *)(puVar20 + 0x15);
                uVar7 = *(undefined4 *)((longlong)puVar20 + 0xac);
                puVar15[0x12] = uVar8;
                puVar15[0x13] = uVar9;
                *(undefined4 *)(puVar15 + 0x14) = uVar35;
                *(undefined4 *)((longlong)puVar15 + 0xa4) = uVar30;
                *(undefined4 *)(puVar15 + 0x15) = uVar6;
                *(undefined4 *)((longlong)puVar15 + 0xac) = uVar7;
              }
              *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f362dd;
              iVar13 = FUN_1452f0058(param_1 + 0x2d4,
                                     (longlong)param_1 + ((longlong)(iVar17 + 2) + 0x9fc) * 2,_Dst,
                                     uVar22 & 0xffffffff);
              *(int *)((longlong)param_1 + 0x167c) = *(int *)((longlong)param_1 + 0x167c) + iVar34;
              iVar17 = *(int *)((longlong)param_1 + 0x3de4);
              iVar34 = *(int *)(param_1 + 0x729) * local_a8 * 10;
              if (*(int *)(param_1 + 0x72a) - iVar17 < iVar34) {
                iVar34 = *(int *)(param_1 + 0x72a) - iVar17;
              }
              lVar19 = 0;
              if (0 < iVar33) {
                puVar21 = (undefined2 *)((longlong)local_a0 + 2);
                do {
                  uVar4 = *puVar21;
                  puVar21 = puVar21 + 2;
                  *(undefined2 *)((longlong)_Dst + lVar19 * 2) = uVar4;
                  lVar19 = lVar19 + 1;
                } while (lVar19 < lVar36);
                iVar17 = *(int *)((longlong)param_1 + 0x3de4);
                param_2 = local_70;
              }
              *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36364;
              local_c8 = FUN_1452f0058(param_1 + 0x7c1,
                                       (longlong)param_1 + ((longlong)(iVar17 + 2) + 0x1db0) * 2,
                                       _Dst,uVar22 & 0xffffffff);
              local_c8 = iVar18 + iVar13 + local_c8;
              *(int *)((longlong)param_1 + 0x3de4) = *(int *)((longlong)param_1 + 0x3de4) + iVar34;
            }
            else {
              if (param_2[1] != 1) goto LAB_144f36499;
              if (0 < iVar33) {
                do {
                  iVar17 = (int)*(short *)((longlong)pvVar11 + lVar19 * 4 + 2) +
                           (int)*(short *)((longlong)pvVar11 + lVar19 * 4);
                  *(ushort *)((longlong)_Dst + lVar19 * 2) =
                       (short)(iVar17 >> 1) + ((ushort)iVar17 & 1);
                  lVar19 = lVar19 + 1;
                } while (lVar19 < lVar36);
                iVar17 = *(int *)((longlong)param_1 + 0x167c);
                param_2 = local_70;
              }
              *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f363e0;
              iVar17 = FUN_1452f0058(param_1 + 0x2d4,
                                     (longlong)param_1 + ((longlong)(iVar17 + 2) + 0x9fc) * 2,_Dst,
                                     uVar22 & 0xffffffff);
              iVar18 = iVar18 + iVar17;
              local_c8 = iVar18;
              if ((*(int *)(param_1 + 0x9e3) == 2) && (*(int *)((longlong)param_1 + 0x1684) == 0)) {
                iVar17 = *(int *)((longlong)param_1 + 0x3de4);
                *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36428;
                local_c8 = FUN_1452f0058(param_1 + 0x7c1,
                                         (longlong)param_1 + ((longlong)(iVar17 + 2) + 0x1db0) * 2,
                                         _Dst,uVar22 & 0xffffffff);
                local_c8 = iVar18 + local_c8;
                iVar17 = 0;
                if (0 < *(int *)(param_1 + 0x23d)) {
                  do {
                    lVar19 = (longlong)(*(int *)((longlong)param_1 + 0x167c) + iVar17);
                    iVar18 = *(int *)((longlong)param_1 + 0x3de4) + iVar17;
                    iVar17 = iVar17 + 1;
                    *(short *)((longlong)param_1 + lVar19 * 2 + 0x13fc) =
                         (short)((int)*(short *)((longlong)param_1 + (longlong)iVar18 * 2 + 0x3b64)
                                 + (int)*(short *)((longlong)param_1 + lVar19 * 2 + 0x13fc) >> 1);
                    param_2 = local_70;
                  } while (iVar17 < *(int *)(param_1 + 0x23d));
                }
              }
              *(int *)((longlong)param_1 + 0x167c) = *(int *)((longlong)param_1 + 0x167c) + iVar34;
            }
          }
          else {
            if ((*param_2 != 1) || (param_2[1] != 1)) {
LAB_144f36499:
              *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f364b2;
              FUN_144bca940("assertion failed: encControl->nChannelsAPI == 1 && encControl->nChannelsInternal == 1"
                            ,"../../../third_party/opus/src/silk/enc_API.c",0x140);
            }
            pvVar11 = local_a0;
            *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f364c2;
            memcpy(_Dst,pvVar11,lVar36 * 2);
            iVar17 = *(int *)((longlong)param_1 + 0x167c);
            *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f364e9;
            local_c8 = FUN_1452f0058(param_1 + 0x2d4,
                                     (longlong)param_1 + ((longlong)(iVar17 + 2) + 0x9fc) * 2,_Dst,
                                     uVar22 & 0xffffffff);
            local_c8 = iVar18 + local_c8;
            *(int *)((longlong)param_1 + 0x167c) = *(int *)((longlong)param_1 + 0x167c) + iVar34;
          }
          iVar17 = *param_2;
          local_c0 = local_c0 - iVar33;
          *(undefined4 *)(param_1 + 0x9e4) = 0;
          local_a0 = (void *)((longlong)local_a0 + (longlong)(iVar33 * iVar17) * 2);
          if (*(int *)((longlong)param_1 + 0x167c) < *(int *)(param_1 + 0x23d)) goto LAB_144f36d82;
          if (*(int *)((longlong)param_1 + 0x167c) != *(int *)(param_1 + 0x23d)) {
            *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36546;
            FUN_144bca940("assertion failed: psEnc->state_Fxx[ 0 ].sCmn.inputBufIx == psEnc->state_Fxx[ 0 ].sCmn.frame_length"
                          ,"../../../third_party/opus/src/silk/enc_API.c",0x150);
          }
          iVar17 = param_2[1];
          if ((iVar17 != 1) && (*(int *)((longlong)param_1 + 0x3de4) != *(int *)(param_1 + 0x72a)))
          {
            *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36579;
            FUN_144bca940("assertion failed: encControl->nChannelsInternal == 1 || psEnc->state_Fxx[ 1 ].sCmn.inputBufIx == psEnc->state_Fxx[ 1 ].sCmn.frame_length"
                          ,"../../../third_party/opus/src/silk/enc_API.c",0x151);
            iVar17 = param_2[1];
          }
          piVar25 = (int *)((longlong)param_1 + 0x1684);
          iVar18 = 0;
          if ((*piVar25 == 0) && (param_7 == 0)) {
            local_c4[1] = 0;
            local_c4[0] = -(char)(0x100 >> ((char)iVar17 *
                                            ((char)*(undefined4 *)(param_1 + 0x2d0) + '\x01') &
                                           0x1fU));
            *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f365d3;
            FUN_144f356e4(param_5,0,local_c4,8);
            iVar17 = param_2[1];
            if (0 < iVar17) {
              piVar25 = (int *)((longlong)param_1 + 0x1284);
              iVar34 = iVar18;
              do {
                iVar17 = piVar25[0xff];
                uVar32 = 0;
                piVar26 = piVar25;
                iVar33 = iVar18;
                if (0 < iVar17) {
                  do {
                    iVar13 = iVar33 + 1;
                    uVar32 = uVar32 | *piVar26 << ((byte)iVar33 & 0x1f);
                    piVar26 = piVar26 + 1;
                    iVar33 = iVar13;
                  } while (iVar13 < iVar17);
                }
                *(bool *)((longlong)piVar25 + -1) = 0 < (int)uVar32;
                if ((uVar32 != 0) && (1 < iVar17)) {
                  uVar28 = *(undefined8 *)(&DAT_149d32c50 + (longlong)iVar17 * 8);
                  *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f3663d;
                  FUN_144f356e4(param_5,uVar32 - 1,uVar28,8);
                }
                iVar17 = param_2[1];
                iVar34 = iVar34 + 1;
                piVar25 = piVar25 + 0x9da;
                param_1 = local_50;
              } while (iVar34 < iVar17);
            }
            local_80 = (int *)0x0;
            if (0 < *(int *)(param_1 + 0x2d0)) {
              local_98 = 0;
              piVar25 = (int *)((longlong)param_1 + 0x39ec);
              do {
                iVar34 = 0;
                piVar26 = local_80;
                if (iVar17 < 1) {
                  iVar17 = param_2[1];
                }
                else {
                  piVar31 = piVar25 + -0x9db;
                  local_b0 = (int *)0x0;
                  do {
                    if (piVar31[1] != 0) {
                      if ((iVar17 == 2) && (iVar34 == 0)) {
                        *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f366d3;
                        FUN_1452f1a24(param_5);
                        if (*piVar25 == 0) {
                          *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f366ec;
                          FUN_1452f1b08(param_5);
                        }
                      }
                      if ((iVar18 < 1) || (*piVar31 == 0)) {
                        uVar35 = 0;
                      }
                      else {
                        uVar35 = 2;
                      }
                      *(undefined4 *)((longlong)&local_108 + lVar23) = uVar35;
                      *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36728;
                      FUN_1452f2318(param_1 + (longlong)iVar34 * 0x4ed,param_5,iVar18,1);
                      cVar1 = *(char *)((longlong)local_b0 + local_98 + 0x1806 + (longlong)param_1);
                      cVar2 = *(char *)((longlong)local_b0 + local_98 + 0x1805 + (longlong)param_1);
                      *(undefined4 *)((longlong)&local_108 + lVar23) =
                           *(undefined4 *)((longlong)(local_b0 + 0x47a) + (longlong)param_1);
                      *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36774;
                      FUN_1452f1e08(param_5,(int)cVar2,(int)cVar1,
                                    (longlong)iVar18 * 0x140 + (longlong)iVar34 * 0x2768 + 0x1854 +
                                    (longlong)param_1);
                      iVar17 = param_2[1];
                      piVar26 = local_80;
                    }
                    iVar34 = iVar34 + 1;
                    local_b0 = local_b0 + 0x9da;
                    piVar31 = piVar31 + 0x9da;
                  } while (iVar34 < iVar17);
                }
                local_80 = (int *)((longlong)piVar26 + 1);
                local_98 = local_98 + 0x24;
                iVar18 = iVar18 + 1;
                piVar25 = piVar25 + 1;
              } while (iVar18 < *(int *)(param_1 + 0x2d0));
            }
            iVar18 = 0;
            if (0 < iVar17) {
              do {
                lVar19 = (longlong)iVar18;
                iVar18 = iVar18 + 1;
                *(undefined8 *)(lVar19 * 0x2768 + 0x1284 + (longlong)param_1) = 0;
                *(undefined4 *)(lVar19 * 0x2768 + 0x128c + (longlong)param_1) = 0;
              } while (iVar18 < param_2[1]);
            }
            iVar17 = 0x1f;
            if (*(uint *)(param_5 + 0x20) != 0) {
              for (; *(uint *)(param_5 + 0x20) >> iVar17 == 0; iVar17 = iVar17 + -1) {
              }
            }
            piVar25 = (int *)((longlong)param_1 + 0x1684);
            *(int *)(param_1 + 0x9e1) = (*(int *)(param_5 + 0x18) - iVar17) + -1;
          }
          *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f3682c;
          FUN_1452f2708(param_1);
          iVar17 = param_2[7];
          iVar18 = (iVar17 * param_2[6]) / 1000;
          if (param_7 == 0) {
            iVar18 = iVar18 - *(int *)(param_1 + 0x9e1);
          }
          iVar34 = 100;
          if (param_2[6] != 10) {
            iVar34 = 0x32;
          }
          iVar34 = iVar34 * (short)((longlong)iVar18 / (longlong)*(int *)(param_1 + 0x2d0)) +
                   *(int *)((longlong)param_1 + 0x4f0c) * -2;
          if ((param_7 == 0) && (0 < *piVar25)) {
            iVar33 = 0x1f;
            if (*(uint *)(param_5 + 0x20) != 0) {
              for (; *(uint *)(param_5 + 0x20) >> iVar33 == 0; iVar33 = iVar33 + -1) {
              }
            }
            iVar34 = iVar34 + (((*piVar25 *
                                 (int)((longlong)iVar18 / (longlong)*(int *)(param_1 + 0x2d0)) -
                                *(int *)(param_5 + 0x18)) + *(int *)(param_1 + 0x9e1) + iVar33) *
                               1000 + 1000) / 500;
          }
          if (iVar17 < 0x1389) {
            if (iVar34 < 0x1389) {
              iVar18 = iVar34;
              if (iVar34 < iVar17) {
                iVar18 = iVar17;
              }
            }
            else {
              iVar18 = 5000;
            }
          }
          else {
            iVar18 = iVar17;
            if ((iVar34 <= iVar17) && (iVar18 = iVar34, iVar34 < 5000)) {
              iVar18 = 5000;
            }
          }
          if (param_2[1] == 2) {
            iVar17 = *piVar25;
            *(int *)((longlong)local_f8 + lVar23 + 0x20) = *(int *)(param_1 + 0x23d);
            *(undefined4 *)((longlong)local_f8 + lVar23 + 0x18) = *(undefined4 *)(param_1 + 0x23c);
            *(int *)((longlong)local_f8 + lVar23 + 0x10) = param_2[0xf];
            *(undefined4 *)((longlong)local_f8 + lVar23 + 8) =
                 *(undefined4 *)((longlong)param_1 + 0x11b4);
            *(int *)((longlong)local_f8 + lVar23) = iVar18;
            *(int **)((longlong)&lStack_100 + lVar23) = &local_68;
            *(longlong *)((longlong)&local_108 + lVar23) =
                 (longlong)iVar17 + 0x4f04 + (longlong)param_1;
            *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36979;
            FUN_1452f11e0(param_1 + 0x9da,(longlong)param_1 + 0x13fc,(longlong)param_1 + 0x3b64,
                          (longlong)param_1 + ((longlong)iVar17 * 3 + 0x2779) * 2);
            if (*(char *)((longlong)param_1 + (longlong)*piVar25 + 0x4f04) == '\0') {
              if (*(int *)((longlong)param_1 + 0x4f24) == 1) {
                param_1[0x870] = 0;
                *(undefined4 *)(param_1 + 0x871) = 0;
                *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f369b1;
                memset((void *)((longlong)param_1 + 0x27fc),0,0x1120);
                param_1[0x4ef] = 0;
                *(undefined4 *)(param_1 + 0x725) = 100;
                *(undefined4 *)((longlong)param_1 + 0x38e4) = 100;
                *(undefined1 *)(param_1 + 0x870) = 10;
                *(undefined1 *)((longlong)param_1 + 0x3925) = 0;
                *(undefined4 *)((longlong)param_1 + 0x38f4) = 0x10000;
                *(undefined4 *)(param_1 + 0x734) = 1;
              }
              *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f369fb;
              FUN_1452f285c(param_1 + 0x4ed,param_8);
            }
            else {
              *(undefined1 *)((longlong)*piVar25 + 0x39e8 + (longlong)param_1) = 0;
            }
            if (param_7 == 0) {
              iVar17 = *piVar25;
              *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36a28;
              FUN_1452f1a24(param_5,(longlong)param_1 + ((longlong)iVar17 * 3 + 0x2779) * 2);
              if (*(char *)((longlong)*piVar25 + 0x39e8 + (longlong)param_1) == '\0') {
                uVar3 = *(undefined1 *)((longlong)param_1 + (longlong)*piVar25 + 0x4f04);
                *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36a44;
                FUN_1452f1b08(param_5,uVar3);
              }
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x27f) = *(undefined4 *)((longlong)param_1 + 0x4ed4);
            *(undefined4 *)((longlong)param_1 + 0x4ed4) =
                 *(undefined4 *)
                  ((longlong)param_1 + (longlong)*(int *)(param_1 + 0x23d) * 2 + 0x13f8);
          }
          *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36a6e;
          FUN_1452f285c(param_1,param_8);
          iVar17 = param_2[1];
          iVar34 = 0;
          if (0 < iVar17) {
            local_b0 = &local_68;
            local_80 = piVar25;
            do {
              iVar33 = param_2[0xe];
              if (local_b8 == 2) {
                if (local_bc == 0) {
                  iVar33 = iVar33 * 3;
LAB_144f36ab3:
                  iVar33 = iVar33 / 5;
                }
              }
              else if (local_b8 == 3) {
                if (local_bc == 0) {
                  iVar33 = iVar33 * 2;
                  goto LAB_144f36ab3;
                }
                if (local_bc == 1) {
                  iVar33 = (int)((iVar33 * 3 >> 0x1f & 3U) + iVar33 * 3) >> 2;
                }
              }
              uVar30 = 0;
              uVar35 = uVar30;
              if ((param_2[0xd] != 0) && (local_bc == local_b8 + -1)) {
                uVar35 = 1;
              }
              iVar13 = iVar18;
              if (((iVar17 != 1) && (iVar13 = *local_b0, iVar34 == 0)) && (0 < local_64)) {
                iVar33 = iVar33 + param_2[0xe] / (local_b8 * -2);
                uVar35 = uVar30;
              }
              if (0 < iVar13) {
                *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36b4e;
                FUN_1452f1d5c(param_1 + (longlong)iVar34 * 0x4ed,iVar13);
                if (*(int *)((longlong)param_1 + 0x1684) - iVar34 < 1) {
                  uVar28 = 0;
                }
                else if ((iVar34 < 1) || (*(int *)((longlong)param_1 + 0x4f24) == 0)) {
                  uVar28 = 2;
                }
                else {
                  uVar28 = 1;
                }
                *(undefined4 *)((longlong)&lStack_100 + lVar23) = uVar35;
                *(int *)((longlong)&local_108 + lVar23) = iVar33;
                *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36b9e;
                local_c8 = FUN_1452f290c(param_1 + (longlong)iVar34 * 0x4ed,param_6,param_5,uVar28);
              }
              iVar34 = iVar34 + 1;
              local_b0 = local_b0 + 1;
              *local_80 = *local_80 + 1;
              local_80[-0x112] = 0;
              local_80[-2] = 0;
              local_80 = local_80 + 0x9da;
              iVar17 = param_2[1];
            } while (iVar34 < iVar17);
            piVar25 = (int *)((longlong)param_1 + 0x1684);
          }
          uVar32 = 0;
          *(int *)((longlong)param_1 + 0x4f24) =
               (int)*(char *)((longlong)*piVar25 + 0x4f03 + (longlong)param_1);
          if ((0 < *param_6) &&
             (iVar17 = *(int *)(param_1 + 0x2d0), *(int *)((longlong)param_1 + 0x1684) == iVar17)) {
            uVar29 = param_2[1];
            if (0 < (int)uVar29) {
              puVar16 = param_1 + 0x250;
              uVar22 = (ulonglong)uVar29;
              do {
                lVar19 = 0;
                if (0 < (longlong)*(int *)(puVar16 + 0x80)) {
                  do {
                    uVar32 = uVar32 * 2 | (int)*(char *)(lVar19 + (longlong)puVar16);
                    lVar19 = lVar19 + 1;
                  } while (lVar19 < *(int *)(puVar16 + 0x80));
                }
                uVar32 = uVar32 * 2 | (int)*(char *)((longlong)puVar16 + 3);
                puVar16 = puVar16 + 0x4ed;
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
            if (param_7 == 0) {
              *(undefined8 *)(auStack_128 + lVar23 + -8) = 0x144f36caf;
              FUN_144f358d4(param_5,uVar32,(iVar17 + 1) * uVar29);
              uVar29 = param_2[1];
            }
            if ((*(int *)((longlong)param_1 + 0x17d4) != 0) &&
               ((uVar29 == 1 || (*(int *)((longlong)param_1 + 0x3f3c) != 0)))) {
              *param_6 = 0;
            }
            *(int *)((longlong)param_1 + 0x4f0c) =
                 *(int *)((longlong)param_1 + 0x4f0c) + *param_6 * 8;
            iVar17 = *(int *)((longlong)param_1 + 0x4f0c) - (param_2[7] * param_2[6]) / 1000;
            if (iVar17 < 0x2711) {
              if (iVar17 < 0) {
                iVar17 = 0;
              }
            }
            else {
              iVar17 = 10000;
            }
            *(int *)((longlong)param_1 + 0x4f0c) = iVar17;
            if (*(int *)((longlong)param_1 + 0x11b4) <
                (int)((ulonglong)((longlong)*(short *)((longlong)param_1 + 0x4f1c) * 0xc74) >> 0x10)
                + 0xd) {
              *(undefined4 *)(param_1 + 0x9e4) = 1;
              *(undefined4 *)((longlong)param_1 + 0x4f1c) = 0;
            }
            else {
              *(undefined4 *)(param_1 + 0x9e4) = 0;
              *(int *)((longlong)param_1 + 0x4f1c) =
                   *(int *)((longlong)param_1 + 0x4f1c) + param_2[6];
            }
          }
          if (local_c0 == 0) goto LAB_144f36d79;
          local_bc = local_bc + 1;
          iVar18 = local_c8;
        } while( true );
      }
      uVar28 = 0xce;
    }
    uStack_130 = 0x144f36e62;
    FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/silk/enc_API.c",uVar28);
    puVar27 = auStack_128;
  }
  else {
    uStack_130 = 0x144f35dfe;
    FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/silk/enc_API.c",0xaa);
    puVar27 = auStack_128;
  }
  goto LAB_144f36e67;
LAB_144f36d79:
  local_90 = *(int *)(param_1 + 0x9e4);
LAB_144f36d82:
  iVar34 = 0;
  *(int *)(param_1 + 0x9e3) = param_2[1];
  param_2[0x13] = local_90;
  iVar18 = 0;
  iVar17 = iVar18;
  if ((*(int *)(param_1 + 0x23c) == 0x10) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
    iVar17 = 1;
  }
  param_2[0x14] = iVar17;
  param_2[0x12] = *(short *)(param_1 + 0x23c) * 1000;
  if (param_2[0xf] == 0) {
    iVar18 = (int)*(short *)((longlong)param_1 + 0x4eec);
  }
  param_2[0x15] = iVar18;
  if (param_7 != 0) {
    param_2[6] = local_8c;
    param_2[9] = local_88;
    if (0 < param_2[1]) {
      puVar16 = param_1 + 0x249;
      do {
        *(undefined4 *)((longlong)puVar16 + -0xc) = 0;
        iVar34 = iVar34 + 1;
        *(undefined4 *)puVar16 = 0;
        puVar16 = puVar16 + 0x4ed;
      } while (iVar34 < param_2[1]);
    }
  }
  param_2[0x17] = (int)*(char *)((longlong)param_1 + 0x12ad);
  param_2[0x18] =
       (int)*(short *)(&DAT_149d32c78 +
                      ((longlong)*(char *)((longlong)param_1 + 0x12ae) +
                      ((longlong)*(char *)((longlong)param_1 + 0x12ad) >> 1) * 2) * 2);
LAB_144f36e67:
  uVar22 = local_30 ^ (ulonglong)&local_c8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar27 + -8) = &UNK_144f36e76;
  FUN_144d8e3a0(uVar22);
}



// FUNCTION 144f36e9c FUN_144f36e9c body=8 status=ok
// SIG undefined FUN_144f36e9c(void)

longlong FUN_144f36e9c(longlong param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 144f36ea4 FUN_144f36ea4 body=8 status=ok
// SIG undefined FUN_144f36ea4(void)

void FUN_144f36ea4(void)

{
  FUN_144f372bc();
  return;
}



// FUNCTION 144f36eac FUN_144f36eac body=167 status=ok
// SIG undefined FUN_144f36eac(void)

void FUN_144f36eac(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  undefined1 auStack_258 [32];
  int local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined1 local_218 [4];
  undefined4 local_214;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (((0 < param_2) && (param_2 != param_3)) && (param_2 < param_3)) {
    local_214 = 0;
    _Dst = (void *)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1);
    memmove(_Dst,param_1,(longlong)param_2);
    iVar1 = FUN_144f372bc(local_218,_Dst,param_2,0);
    if (iVar1 == 0) {
      local_228 = 1;
      local_230 = 0;
      local_238 = param_3;
      FUN_144f36f68(local_218,0,local_214,param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_258);
}



// FUNCTION 144f36f68 FUN_144f36f68 body=849 status=ok
// SIG undefined FUN_144f36f68(void)

int FUN_144f36f68(byte *param_1,int param_2,int param_3,byte *param_4,int param_5,int param_6,
                 int param_7)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  size_t _Size;
  longlong lVar13;
  uint uVar14;
  byte *pbVar15;
  
  iVar11 = 0;
  if (((param_2 < 0) || (param_3 <= param_2)) || (*(int *)(param_1 + 4) < param_3)) {
    return -1;
  }
  uVar9 = param_3 - param_2;
  uVar10 = (ulonglong)uVar9;
  lVar13 = (longlong)(int)uVar9;
  pbVar15 = param_1 + (longlong)param_2 * 2 + 0x188;
  pbVar7 = param_1 + (longlong)param_2 * 8 + 8;
  if (param_6 != 0) {
    iVar11 = (0xfb < *(short *)(pbVar15 + lVar13 * 2 + -2)) + 1;
  }
  if (uVar9 == 1) {
    iVar11 = iVar11 + *(short *)pbVar15 + 1;
    if (param_5 < iVar11) goto LAB_144f3711c;
    bVar4 = *param_1 & 0xfc;
LAB_144f37025:
    *param_4 = bVar4;
    pbVar5 = param_4 + 1;
LAB_144f370bd:
    if ((param_7 != 0) && (iVar11 < param_5)) {
LAB_144f370cf:
      iVar11 = 0;
      if (param_6 != 0) {
        iVar11 = (0xfb < *(short *)(pbVar15 + (longlong)(int)uVar9 * 2 + -2)) + 1;
      }
      iVar6 = 1;
      bVar3 = false;
      bVar4 = (byte)uVar9;
      if (1 < (int)uVar9) {
        pbVar5 = pbVar15;
LAB_144f370fc:
        pbVar5 = pbVar5 + 2;
        if (*(short *)pbVar5 == *(short *)pbVar15) goto code_r0x000144f37101;
        iVar11 = iVar11 + 2;
        bVar3 = true;
        if (0 < (int)(uVar9 - 1)) {
          uVar12 = (ulonglong)(uVar9 - 1);
          pbVar5 = pbVar15;
          do {
            sVar1 = *(short *)pbVar5;
            sVar2 = *(short *)pbVar5;
            pbVar5 = pbVar5 + 2;
            iVar11 = iVar11 + sVar2 + (0xfb < sVar1) + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        iVar11 = iVar11 + *(short *)(pbVar15 + lVar13 * 2 + -2);
        if (param_5 < iVar11) goto LAB_144f3711c;
        bVar4 = bVar4 | 0x80;
        goto LAB_144f37173;
      }
LAB_144f3710b:
      iVar11 = iVar11 + (int)*(short *)pbVar15 * uVar9 + 2;
      if (param_5 < iVar11) goto LAB_144f3711c;
LAB_144f37173:
      pbVar5 = param_4 + 2;
      *param_4 = *param_1 | 3;
      param_4[1] = bVar4;
      uVar14 = -(uint)(param_7 != 0) & param_5 - iVar11;
      if (uVar14 != 0) {
        param_4[1] = bVar4 | 0x40;
        iVar6 = (int)(uVar14 - 1) / 0xff;
        if (0 < iVar6) {
          memset(pbVar5,(int)CONCAT71((uint7)((ulonglong)((longlong)(int)(uVar14 - 1) * -0x7f7f7f7f)
                                             >> 0x28),0xff),(longlong)iVar6);
          pbVar5 = pbVar5 + iVar6;
        }
        *pbVar5 = (char)uVar14 + -1 + (char)iVar6;
        pbVar5 = pbVar5 + 1;
        iVar11 = iVar11 + uVar14;
      }
      lVar8 = 0;
      if ((bVar3) && (0 < (int)(uVar9 - 1))) {
        do {
          iVar6 = FUN_144bca52c((int)*(short *)(pbVar15 + lVar8 * 2),pbVar5);
          lVar8 = lVar8 + 1;
          pbVar5 = pbVar5 + iVar6;
        } while (lVar8 < (int)(uVar9 - 1));
      }
    }
    if (param_6 != 0) {
      iVar6 = FUN_144bca52c((int)*(short *)(pbVar15 + lVar13 * 2 + -2),pbVar5);
      pbVar5 = pbVar5 + iVar6;
    }
    if (0 < (int)uVar9) {
      do {
        memmove(pbVar5,*(void **)pbVar7,(longlong)*(short *)pbVar15);
        pbVar7 = pbVar7 + 8;
        pbVar5 = pbVar5 + *(short *)pbVar15;
        pbVar15 = pbVar15 + 2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (param_7 != 0) {
      _Size = (longlong)(param_4 + param_5) - (longlong)pbVar5;
      if (param_4 + param_5 < pbVar5) {
        _Size = 0;
      }
      if (_Size != 0) {
        memset(pbVar5,0,_Size);
      }
    }
  }
  else {
    pbVar5 = param_4;
    if (uVar9 != 2) {
LAB_144f370bb:
      if ((int)uVar9 < 3) goto LAB_144f370bd;
      goto LAB_144f370cf;
    }
    if (*(short *)(pbVar15 + 2) == *(short *)pbVar15) {
      iVar11 = iVar11 + *(short *)pbVar15 * 2 + 1;
      if (iVar11 <= param_5) {
        bVar4 = *param_1 & 0xfd | 1;
        goto LAB_144f37025;
      }
    }
    else {
      iVar11 = iVar11 + (int)*(short *)(pbVar15 + 2) +
                        (0xfb < *(short *)pbVar15) + 2 + (int)*(short *)pbVar15;
      if (iVar11 <= param_5) {
        *param_4 = *param_1 & 0xfe | 2;
        iVar6 = FUN_144bca52c((int)*(short *)pbVar15,param_4 + 1);
        pbVar5 = param_4 + 1 + iVar6;
        goto LAB_144f370bb;
      }
    }
LAB_144f3711c:
    iVar11 = -2;
  }
  return iVar11;
code_r0x000144f37101:
  iVar6 = iVar6 + 1;
  if ((int)uVar9 <= iVar6) goto LAB_144f3710b;
  goto LAB_144f370fc;
}



// FUNCTION 144f372bc FUN_144f372bc body=213 status=ok
// SIG undefined FUN_144f372bc(void)

undefined8 FUN_144f372bc(byte *param_1,byte *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_res18 [16];
  
  if (0 < param_3) {
    if (*(int *)(param_1 + 4) == 0) {
      *param_1 = *param_2;
      uVar2 = FUN_144bca1c8(param_2,8000);
      *(undefined4 *)(param_1 + 0x1e8) = uVar2;
    }
    else if (((*param_1 ^ *param_2) & 0xfc) != 0) {
      return 0xfffffffc;
    }
    iVar3 = FUN_144bc46e8(param_2,param_3);
    if ((0 < iVar3) &&
       (iVar1 = *(int *)(param_1 + 4), (iVar1 + iVar3) * *(int *)(param_1 + 0x1e8) < 0x3c1)) {
      uVar4 = FUN_144bca560(param_2,param_3,param_4,local_res18,param_1 + ((longlong)iVar1 + 1) * 8,
                            param_1 + (longlong)iVar1 * 2 + 0x188,0,0);
      if (0 < (int)uVar4) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar3;
        return 0;
      }
      return uVar4;
    }
  }
  return 0xfffffffc;
}



// FUNCTION 144f37394 FUN_144f37394 body=242 status=ok
// SIG undefined FUN_144f37394(void)

void FUN_144f37394(float *param_1,longlong param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  ulonglong uVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar14 = *param_3;
  fVar15 = param_3[1];
  fVar16 = param_3[2];
  fVar17 = param_3[3];
  iVar12 = 0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  if (0 < param_4 + -3) {
    uVar9 = (param_4 - 4U >> 2) + 1;
    uVar10 = (ulonglong)uVar9;
    iVar12 = uVar9 * 4;
    pfVar11 = param_1;
    do {
      fVar3 = *pfVar11;
      fVar4 = pfVar11[1];
      fVar5 = pfVar11[2];
      fVar6 = pfVar11[3];
      pfVar1 = (float *)((param_2 - (longlong)param_1) + (longlong)pfVar11);
      fVar7 = pfVar1[2];
      pfVar2 = (float *)((param_2 - (longlong)param_1) + 0xc + (longlong)pfVar11);
      fVar8 = pfVar2[1];
      pfVar11 = pfVar11 + 4;
      fVar14 = fVar14 + fVar3 * *pfVar1 + fVar7 * fVar5;
      fVar15 = fVar15 + fVar3 * pfVar1[1] + pfVar1[3] * fVar5;
      fVar16 = fVar16 + fVar3 * fVar7 + fVar8 * fVar5;
      fVar17 = fVar17 + fVar3 * pfVar1[3] + pfVar2[2] * fVar5;
      fVar18 = fVar18 + pfVar1[1] * fVar4 + fVar6 * *pfVar2;
      fVar19 = fVar19 + fVar7 * fVar4 + fVar6 * fVar8;
      fVar20 = fVar20 + *pfVar2 * fVar4 + fVar6 * pfVar2[2];
      fVar21 = fVar21 + fVar8 * fVar4 + fVar6 * pfVar2[3];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (iVar12 < param_4) {
    iVar13 = iVar12 + 1;
    fVar3 = param_1[iVar12];
    pfVar11 = (float *)(param_2 + (longlong)iVar12 * 4);
    fVar14 = fVar14 + fVar3 * *pfVar11;
    fVar15 = fVar15 + fVar3 * pfVar11[1];
    fVar16 = fVar16 + fVar3 * pfVar11[2];
    fVar17 = fVar17 + fVar3 * pfVar11[3];
    if (iVar13 < param_4) {
      iVar12 = iVar12 + 2;
      fVar3 = param_1[iVar13];
      pfVar11 = (float *)(param_2 + (longlong)iVar13 * 4);
      fVar18 = fVar18 + fVar3 * *pfVar11;
      fVar19 = fVar19 + fVar3 * pfVar11[1];
      fVar20 = fVar20 + fVar3 * pfVar11[2];
      fVar21 = fVar21 + fVar3 * pfVar11[3];
      if (iVar12 < param_4) {
        fVar3 = param_1[iVar12];
        pfVar11 = (float *)(param_2 + (longlong)iVar12 * 4);
        fVar14 = fVar14 + fVar3 * *pfVar11;
        fVar15 = fVar15 + fVar3 * pfVar11[1];
        fVar16 = fVar16 + fVar3 * pfVar11[2];
        fVar17 = fVar17 + fVar3 * pfVar11[3];
      }
    }
  }
  *param_3 = fVar18 + fVar14;
  param_3[1] = fVar19 + fVar15;
  param_3[2] = fVar20 + fVar16;
  param_3[3] = fVar21 + fVar17;
  return;
}



// FUNCTION 144f37488 FUN_144f37488 body=159 status=ok
// SIG undefined FUN_144f37488(void)

float FUN_144f37488(longlong param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar7 = 0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  if (0 < param_3 + -3) {
    uVar6 = (param_3 - 4U >> 2) + 1;
    uVar9 = (ulonglong)uVar6;
    iVar7 = uVar6 * 4;
    pfVar8 = param_2;
    do {
      pfVar1 = (float *)((param_1 - (longlong)param_2) + (longlong)pfVar8);
      fVar2 = *pfVar8;
      pfVar3 = pfVar8 + 1;
      pfVar4 = pfVar8 + 2;
      pfVar5 = pfVar8 + 3;
      pfVar8 = pfVar8 + 4;
      fVar11 = fVar11 + *pfVar1 * fVar2;
      fVar12 = fVar12 + pfVar1[1] * *pfVar3;
      fVar13 = fVar13 + pfVar1[2] * *pfVar4;
      fVar14 = fVar14 + pfVar1[3] * *pfVar5;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar10 = (longlong)iVar7;
  fVar11 = fVar11 + fVar13 + fVar12 + fVar14;
  if (lVar10 < param_3) {
    pfVar8 = param_2 + lVar10;
    lVar10 = param_3 - lVar10;
    do {
      pfVar1 = (float *)((longlong)pfVar8 + (param_1 - (longlong)param_2));
      fVar12 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      fVar11 = *pfVar1 * fVar12 + fVar11;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return fVar11;
}



// FUNCTION 144f37528 FUN_144f37528 body=233 status=ok
// SIG undefined FUN_144f37528(void)

void FUN_144f37528(longlong param_1,float *param_2,longlong param_3,int param_4,float *param_5,
                  float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  ulonglong uVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar6 = 0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  if (0 < param_4 + -3) {
    uVar3 = (param_4 - 4U >> 2) + 1;
    uVar4 = (ulonglong)uVar3;
    iVar6 = uVar3 * 4;
    pfVar5 = param_2;
    do {
      pfVar1 = (float *)((param_1 - (longlong)param_2) + (longlong)pfVar5);
      fVar8 = fVar8 + *pfVar5 * *pfVar1;
      fVar9 = fVar9 + pfVar5[1] * pfVar1[1];
      fVar10 = fVar10 + pfVar5[2] * pfVar1[2];
      fVar11 = fVar11 + pfVar5[3] * pfVar1[3];
      pfVar2 = (float *)((param_3 - (longlong)param_2) + (longlong)pfVar5);
      pfVar5 = pfVar5 + 4;
      fVar12 = fVar12 + *pfVar2 * *pfVar1;
      fVar13 = fVar13 + pfVar2[1] * pfVar1[1];
      fVar14 = fVar14 + pfVar2[2] * pfVar1[2];
      fVar15 = fVar15 + pfVar2[3] * pfVar1[3];
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  lVar7 = (longlong)iVar6;
  *param_5 = fVar8 + fVar10 + fVar9 + fVar11;
  *param_6 = fVar12 + fVar14 + fVar13 + fVar15;
  if (lVar7 < param_4) {
    pfVar5 = (float *)(param_1 + lVar7 * 4);
    lVar7 = param_4 - lVar7;
    do {
      *param_5 = *(float *)(((longlong)param_2 - param_1) + (longlong)pfVar5) * *pfVar5 + *param_5;
      pfVar1 = (float *)((param_3 - param_1) + (longlong)pfVar5);
      fVar8 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      *param_6 = *pfVar1 * fVar8 + *param_6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144f37614 FUN_144f37614 body=180 status=ok
// SIG undefined FUN_144f37614(void)

void FUN_144f37614(float *param_1,longlong param_2,int param_3,int param_4,float param_5,
                  float param_6,float param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pfVar1 = (float *)(param_2 + (longlong)(-2 - param_3) * 4);
  if (0 < param_4 + -3) {
    lVar11 = ((longlong)(-2 - param_3) * 4 + 0x10) - (longlong)param_1;
    lVar9 = param_2 - (longlong)param_1;
    uVar10 = (ulonglong)((param_4 - 4U >> 2) + 1);
    fVar12 = *pfVar1;
    fVar13 = pfVar1[1];
    fVar14 = pfVar1[2];
    fVar15 = pfVar1[3];
    do {
      pfVar1 = (float *)(lVar11 + param_2 + (longlong)param_1);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar1 = (float *)(lVar9 + (longlong)param_1);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      *param_1 = *pfVar1 + fVar14 * param_5 +
                 (fVar15 + fVar13) * param_6 + (fVar2 + fVar12) * param_7;
      param_1[1] = fVar6 + fVar15 * param_5 +
                   (fVar2 + fVar14) * param_6 + (fVar3 + fVar13) * param_7;
      param_1[2] = fVar7 + fVar2 * param_5 + (fVar3 + fVar15) * param_6 + (fVar4 + fVar14) * param_7
      ;
      param_1[3] = fVar8 + fVar3 * param_5 + (fVar4 + fVar2) * param_6 + (fVar5 + fVar15) * param_7;
      param_1 = param_1 + 4;
      uVar10 = uVar10 - 1;
      fVar12 = fVar2;
      fVar13 = fVar3;
      fVar14 = fVar4;
      fVar15 = fVar5;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 144f376c8 FUN_144f376c8 body=294 status=ok
// SIG undefined FUN_144f376c8(void)

float FUN_144f376c8(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_1 * param_1;
  fVar4 = param_2 * param_2;
  if (1e-18 <= fVar3 + fVar4) {
    if (fVar3 <= fVar4) {
      fVar1 = -1.5707964;
      if (0.0 <= param_1) {
        fVar2 = 1.5707964;
      }
      else {
        fVar2 = -1.5707964;
      }
      if (0.0 <= param_1 * param_2) {
        fVar1 = 1.5707964;
      }
      fVar1 = (((fVar3 * 0.43157974 + fVar4) * param_1 * param_2) /
               ((fVar3 * 0.678484 + fVar4) * (fVar3 * 0.08595542 + fVar4)) + fVar2) - fVar1;
    }
    else {
      if (0.0 <= param_1) {
        fVar1 = 1.5707964;
      }
      else {
        fVar1 = -1.5707964;
      }
      fVar1 = fVar1 - ((fVar4 * 0.43157974 + fVar3) * param_1 * param_2) /
                      ((fVar4 * 0.678484 + fVar3) * (fVar4 * 0.08595542 + fVar3));
    }
  }
  else {
    fVar1 = 0.0;
  }
  return fVar1;
}



// FUNCTION 144f377f0 FUN_144f377f0 body=56 status=ok
// SIG undefined FUN_144f377f0(void)

void FUN_144f377f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144f2f804();
  *param_1 = uVar1;
  param_1[2] = param_2;
  memset(param_1 + 3,0,(longlong)param_1 + (0x36b4 - (longlong)(param_1 + 3)));
  return;
}



// FUNCTION 144f37828 FUN_144f37828 body=24 status=ok
// SIG undefined FUN_144f37828(void)

void FUN_144f37828(longlong param_1)

{
  memset((void *)(param_1 + 0xc),0,(param_1 - (param_1 + 0xc)) + 0x36b4);
  return;
}



// FUNCTION 144f37840 FUN_144f37840 body=1106 status=ok
// SIG undefined FUN_144f37840(void)

void FUN_144f37840(longlong param_1,int *param_2,int param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar14;
  
  uVar13 = *(uint *)(param_1 + 0x1d14);
  uVar16 = *(uint *)(param_1 + 0x1d18);
  uVar18 = 0;
  iVar7 = uVar13 - uVar16;
  iVar19 = iVar7 + 100;
  if (-1 < iVar7) {
    iVar19 = iVar7;
  }
  *(int *)(param_1 + 0x1d1c) = *(int *)(param_1 + 0x1d1c) + param_3 / (*(int *)(param_1 + 8) / 400);
  iVar7 = *(int *)(param_1 + 0x1d1c);
  uVar9 = uVar16;
  if (7 < iVar7) {
    do {
      iVar7 = iVar7 + -8;
      uVar9 = uVar9 + 1;
    } while (7 < iVar7);
    *(uint *)(param_1 + 0x1d18) = uVar9;
    *(int *)(param_1 + 0x1d1c) = iVar7;
  }
  if (99 < (int)uVar9) {
    *(uint *)(param_1 + 0x1d18) = uVar9 - 100;
  }
  if (((*(int *)(param_1 + 8) / 0x32 < param_3) && (uVar16 != uVar13)) &&
     (uVar16 = uVar16 + 1, uVar16 == 100)) {
    uVar16 = 0;
  }
  uVar9 = uVar16 - 1;
  if (uVar16 != uVar13) {
    uVar9 = uVar16;
  }
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar9 < 0) {
    uVar10 = 99;
  }
  iVar7 = (int)uVar10;
  uVar17 = (ulonglong)iVar7;
  lVar8 = uVar17 * 0x40;
  puVar2 = (undefined8 *)(lVar8 + 0x1db4 + param_1);
  uVar6 = puVar2[1];
  *(undefined8 *)param_2 = *puVar2;
  *(undefined8 *)(param_2 + 2) = uVar6;
  puVar2 = (undefined8 *)(lVar8 + 0x1dc4 + param_1);
  uVar6 = puVar2[1];
  *(undefined8 *)(param_2 + 4) = *puVar2;
  *(undefined8 *)(param_2 + 6) = uVar6;
  puVar2 = (undefined8 *)(lVar8 + 0x1dd4 + param_1);
  uVar6 = puVar2[1];
  *(undefined8 *)(param_2 + 8) = *puVar2;
  *(undefined8 *)(param_2 + 10) = uVar6;
  puVar2 = (undefined8 *)(lVar8 + 0x1de4 + param_1);
  uVar6 = puVar2[1];
  *(undefined8 *)(param_2 + 0xc) = *puVar2;
  *(undefined8 *)(param_2 + 0xe) = uVar6;
  if (*param_2 != 0) {
    fVar23 = (float)param_2[1];
    iVar12 = 6;
    iVar20 = 1;
    uVar15 = uVar17;
    uVar11 = uVar10;
    uVar14 = uVar18;
    fVar28 = fVar23;
    do {
      bVar21 = uVar15 != 99;
      uVar1 = uVar15 + 1;
      uVar15 = uVar18;
      if (bVar21) {
        uVar15 = uVar1;
      }
      iVar4 = (int)uVar11;
      uVar11 = uVar18;
      if (bVar21) {
        uVar11 = (ulonglong)(iVar4 + 1);
      }
      if ((int)uVar11 == *(int *)(param_1 + 0x1d14)) break;
      iVar20 = iVar20 + 1;
      fVar26 = *(float *)(uVar15 * 0x40 + 0x1db8 + param_1);
      iVar4 = *(int *)(uVar15 * 0x40 + 0x1dd4 + param_1);
      if (fVar28 <= fVar26) {
        fVar28 = fVar26;
      }
      fVar23 = fVar23 + fVar26;
      iVar5 = param_2[8];
      if (param_2[8] <= iVar4) {
        iVar5 = iVar4;
      }
      iVar12 = iVar12 + -1;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      param_2[8] = iVar5;
    } while ((int)uVar13 < 3);
    uVar15 = uVar17;
    uVar11 = uVar18;
    if (0 < iVar12) {
      do {
        uVar10 = (ulonglong)((int)uVar10 - 1);
        uVar15 = uVar15 - 1;
        if ((longlong)uVar15 < 0) {
          uVar10 = 99;
          uVar15 = 99;
        }
        if ((int)uVar10 == *(int *)(param_1 + 0x1d14)) break;
        iVar4 = *(int *)(uVar15 * 0x40 + 0x1dd4 + param_1);
        iVar5 = param_2[8];
        if (param_2[8] <= iVar4) {
          iVar5 = iVar4;
        }
        uVar13 = (int)uVar11 + 1;
        param_2[8] = iVar5;
        uVar11 = (ulonglong)uVar13;
      } while ((int)uVar13 < iVar12);
    }
    fVar26 = fVar23 / (float)iVar20;
    if (fVar23 / (float)iVar20 <= fVar28 - 0.2) {
      fVar26 = fVar28 - 0.2;
    }
    param_2[1] = (int)fVar26;
    iVar20 = iVar7;
    iVar12 = iVar7;
    if (0xf < iVar19) {
      iVar12 = -0x5f;
      if (iVar7 + 5 < 100) {
        iVar12 = 5;
      }
      iVar12 = iVar12 + iVar7;
      iVar20 = iVar7 + 1;
      if (99 < iVar20) {
        iVar20 = iVar7 + -99;
      }
    }
    fVar28 = 1.0;
    uVar15 = (ulonglong)iVar20;
    uVar10 = (ulonglong)iVar12;
    fVar23 = *(float *)(uVar15 * 0x40 + 0x1dd8 + param_1);
    fVar26 = 0.1;
    if (0.1 <= fVar23) {
      fVar26 = fVar23;
    }
    fVar25 = fVar26 * *(float *)(uVar10 * 0x40 + 0x1dc8 + param_1);
    fVar27 = 0.0;
    while( true ) {
      bVar21 = uVar10 != 99;
      uVar11 = uVar10 + 1;
      uVar10 = uVar18;
      if (bVar21) {
        uVar10 = uVar11;
      }
      if (uVar10 == (longlong)*(int *)(param_1 + 0x1d14)) break;
      bVar21 = uVar15 != 99;
      uVar11 = uVar15 + 1;
      uVar15 = uVar18;
      if (bVar21) {
        uVar15 = uVar11;
      }
      if (uVar15 == (longlong)*(int *)(param_1 + 0x1d14)) break;
      fVar3 = *(float *)(uVar15 * 0x40 + 0x1dd8 + param_1);
      fVar24 = (fVar23 - fVar3) * 10.0;
      fVar22 = (fVar25 - fVar24) / fVar26;
      fVar24 = (fVar24 + fVar25) / fVar26;
      if (fVar28 <= fVar22) {
        fVar22 = fVar28;
      }
      fVar28 = fVar22;
      if (fVar24 <= fVar27) {
        fVar24 = fVar27;
      }
      fVar27 = 0.1;
      if (0.1 <= fVar3) {
        fVar27 = fVar3;
      }
      fVar26 = fVar26 + fVar27;
      fVar25 = fVar25 + fVar27 * *(float *)(uVar10 * 0x40 + 0x1dc8 + param_1);
      fVar27 = fVar24;
    }
    fVar25 = fVar25 / fVar26;
    param_2[5] = (int)fVar25;
    fVar26 = fVar25;
    if (fVar28 <= fVar25) {
      fVar26 = fVar28;
    }
    if (fVar25 <= fVar27) {
      fVar25 = fVar27;
    }
    if (fVar26 <= 0.0) {
      fVar26 = 0.0;
    }
    if (1.0 <= fVar25) {
      fVar25 = 1.0;
    }
    if (iVar19 < 10) {
      iVar7 = *(int *)(param_1 + 0x1d0c) + -1;
      fVar28 = fVar26;
      fVar27 = fVar25;
      while( true ) {
        iVar12 = 0xf;
        if (iVar7 < 0xf) {
          iVar12 = iVar7;
        }
        if (iVar12 <= (int)uVar18) break;
        uVar17 = uVar17 - 1;
        if ((longlong)uVar17 < 0) {
          uVar17 = 99;
        }
        uVar18 = (ulonglong)((int)uVar18 + 1);
        fVar3 = *(float *)(uVar17 * 0x40 + 0x1dc8 + param_1);
        if (fVar3 <= fVar28) {
          fVar28 = fVar3;
        }
        if (fVar27 <= fVar3) {
          fVar27 = fVar3;
        }
      }
      fVar28 = fVar28 - fVar23 * 0.1;
      fVar27 = fVar23 * 0.1 + fVar27;
      fVar23 = 0.0;
      if (0.0 <= fVar28) {
        fVar23 = fVar28;
      }
      fVar28 = 1.0;
      if (fVar27 <= 1.0) {
        fVar28 = fVar27;
      }
      fVar27 = 1.0 - (float)iVar19 * 0.1;
      fVar26 = fVar26 + (fVar23 - fVar26) * fVar27;
      fVar25 = fVar25 + (fVar28 - fVar25) * fVar27;
    }
    param_2[6] = (int)fVar26;
    param_2[7] = (int)fVar25;
  }
  return;
}



// FUNCTION 144f37c94 FUN_144f37c94 body=299 status=ok
// SIG undefined FUN_144f37c94(void)

void FUN_144f37c94(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                  undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 != 0) {
    iVar4 = *(int *)(param_1 + 0x1d10);
    uVar1 = (param_9 * 0x5f) / 0x32;
    if ((int)(param_4 & 0xfffffffe) <= (int)uVar1) {
      uVar1 = param_4 & 0xfffffffe;
    }
    iVar3 = uVar1 - iVar4;
    if (0 < iVar3) {
      param_9 = param_9 / 0x32;
      do {
        iVar2 = param_9;
        if (iVar3 <= param_9) {
          iVar2 = iVar3;
        }
        FUN_144f380bc(param_1,param_2,param_3,iVar2,iVar4,param_6,param_7,param_8,param_10,param_11)
        ;
        iVar4 = iVar4 + param_9;
        iVar3 = iVar3 - param_9;
      } while (0 < iVar3);
    }
    *(uint *)(param_1 + 0x1d10) = uVar1 - param_5;
  }
  FUN_144f37840(param_1,param_12,param_5);
  return;
}



// FUNCTION 144f37dc0 FUN_144f37dc0 body=206 status=ok
// SIG undefined FUN_144f37dc0(void)

float FUN_144f37dc0(float *param_1,longlong param_2,longlong param_3,int param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = 0.0;
  lVar2 = 0;
  if (0 < (longlong)(param_4 / 2)) {
    do {
      fVar1 = param_1[1];
      fVar3 = (*(float *)(param_3 + lVar2 * 8) - *param_1) * 0.6074371;
      fVar7 = *param_1 + fVar3;
      *param_1 = fVar3 + *(float *)(param_3 + lVar2 * 8);
      fVar3 = *(float *)(param_3 + 4 + lVar2 * 8);
      fVar4 = (fVar3 - fVar1) * 0.15063;
      param_1[1] = fVar4 + fVar3;
      fVar5 = (-fVar3 - param_1[2]) * 0.15063;
      fVar6 = param_1[2] + fVar7 + fVar5;
      param_1[2] = -fVar3 + fVar5;
      *(float *)(param_2 + lVar2 * 4) = (fVar1 + fVar7 + fVar4) * 0.5;
      lVar2 = lVar2 + 1;
      fVar8 = fVar8 + fVar6 * fVar6;
    } while (lVar2 < param_4 / 2);
  }
  return fVar8;
}



// FUNCTION 144f37e90 FUN_144f37e90 body=526 status=ok
// SIG undefined FUN_144f37e90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f37e90(code *param_1,undefined8 param_2,void *param_3,undefined8 param_4,int param_5,
                  int param_6,undefined4 param_7,int param_8,int param_9,int param_10)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  size_t _Size;
  longlong lVar11;
  float fVar12;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  int aiStack_68 [8];
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  ulonglong local_30;
  
  puVar10 = auStack_88;
  local_30 = DAT_14c707940 ^ (ulonglong)&local_48;
  lVar9 = 0;
  local_48 = param_4;
  local_40 = param_2;
  local_38 = param_1;
  if (param_5 != 0) {
    if (param_10 == 48000) {
      param_5 = param_5 * 2;
      param_6 = param_6 * 2;
    }
    else if (param_10 == 16000) {
      param_5 = (param_5 * 2) / 3;
      param_6 = param_6 * 2;
      param_6 = param_6 / 3 + (param_6 >> 0x1f) +
                (int)(((longlong)param_6 / 3 + ((longlong)param_6 >> 0x3f) & 0xffffffffU) >> 0x1f);
    }
    lVar11 = (longlong)param_5;
    _Size = lVar11 * 4;
    uVar8 = _Size + 0xf;
    if (uVar8 <= _Size) {
      uVar8 = 0xffffffffffffff0;
    }
    uStack_90 = 0x144f37f5b;
    lVar2 = -(uVar8 & 0xfffffffffffffff0);
    puVar10 = auStack_88 + lVar2;
    *(int *)((longlong)aiStack_68 + lVar2 + 0x10) = param_9;
    _Src = (void *)((longlong)&local_48 + lVar2);
    *(int *)((longlong)aiStack_68 + lVar2 + 8) = param_8;
    *(undefined4 *)((longlong)aiStack_68 + lVar2) = param_7;
    pcVar4 = local_38;
    *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x144f37f91;
    (*pcVar4)(param_2,_Src,param_5,param_6);
    fVar12 = 3.0517578e-05;
    if (param_8 == -2) {
      fVar12 = 3.0517578e-05 / (float)param_9;
    }
    else if (-1 < param_8) {
      fVar12 = 1.5258789e-05;
    }
    lVar5 = lVar9;
    if (0 < param_5) {
      do {
        *(float *)((longlong)_Src + lVar5 * 4) = fVar12 * *(float *)((longlong)_Src + lVar5 * 4);
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar11);
    }
    uVar3 = local_48;
    if (param_10 == 48000) {
      *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x144f37ffc;
      FUN_144f37dc0(uVar3,param_3,_Src,param_5);
      puVar10 = auStack_88 + lVar2;
    }
    else if (param_10 == 24000) {
      *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x144f3801e;
      memcpy(param_3,_Src,_Size);
      puVar10 = auStack_88 + lVar2;
    }
    else if (param_10 == 16000) {
      uVar6 = (longlong)(param_5 * 3) * 4;
      uVar8 = uVar6 + 0xf;
      if (uVar8 <= uVar6) {
        uVar8 = 0xffffffffffffff0;
      }
      *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x144f38056;
      lVar5 = -(uVar8 & 0xfffffffffffffff0);
      puVar10 = auStack_88 + lVar5 + lVar2;
      if (0 < param_5) {
        puVar7 = (undefined4 *)((longlong)&local_40 + lVar5 + lVar2);
        do {
          puVar7[-2] = *(undefined4 *)((longlong)_Src + lVar9 * 4);
          puVar7[-1] = *(undefined4 *)((longlong)_Src + lVar9 * 4);
          lVar1 = lVar9 * 4;
          lVar9 = lVar9 + 1;
          *puVar7 = *(undefined4 *)((longlong)_Src + lVar1);
          puVar7 = puVar7 + 3;
        } while (lVar9 < lVar11);
      }
      uVar3 = local_48;
      *(undefined8 *)(auStack_88 + lVar5 + lVar2 + -8) = 0x144f3808f;
      FUN_144f37dc0(uVar3,param_3);
    }
  }
  uVar8 = local_30 ^ (ulonglong)&local_48;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -8) = &UNK_144f3809e;
  FUN_144d8e3a0(uVar8);
}



// FUNCTION 144f380bc FUN_144f380bc body=5482 status=ok
// SIG undefined FUN_144f380bc(void)

void FUN_144f380bc(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                  ulonglong param_10)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  longlong lVar12;
  char *pcVar13;
  float *pfVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  undefined1 *puVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_2d68 [32];
  int local_2d48;
  int local_2d40;
  undefined4 local_2d38;
  undefined4 local_2d30;
  undefined4 local_2d28;
  undefined4 local_2d20;
  undefined1 local_2d18 [960];
  float local_2958 [240];
  float local_2598 [121];
  float afStack_23b4 [28];
  float afStack_2344 [4];
  float afStack_2334 [7];
  uint uStack_2318;
  float afStack_2314 [16];
  float afStack_22d4 [16];
  float afStack_2294 [16];
  float afStack_2254 [751];
  float local_1698 [938];
  undefined8 uStack_7f0;
  undefined1 local_7e8 [32];
  int local_7c8;
  int local_7c0;
  undefined4 local_7b8;
  undefined4 local_7b0;
  undefined4 local_7a8;
  float local_7a0 [6];
  longlong local_788;
  float local_780;
  float local_77c;
  float local_778;
  float local_774;
  ulonglong local_770;
  float local_768;
  ulonglong local_760;
  float *local_758;
  float local_750;
  float local_74c;
  float local_748;
  longlong local_740;
  undefined1 *local_738;
  undefined4 local_730;
  int local_72c;
  float local_728 [18];
  uint local_6e0;
  float local_6d8 [11];
  float local_6ac [12];
  float local_67c;
  float local_678;
  float local_668 [16];
  float afStack_628 [12];
  float local_5f8 [16];
  float afStack_5b8 [12];
  float local_588 [20];
  undefined1 local_538 [128];
  undefined1 local_4b8 [4];
  float local_4b4 [239];
  ulonglong local_f8;
  
  local_f8 = DAT_14c707940 ^ (ulonglong)(local_7a0 + 2);
  uVar16 = 0;
  local_774 = 0.0;
  local_7a0[4] = 0.0;
  local_760 = param_10;
  if (*(int *)(param_1 + 0x1d24) == 0) {
    *(undefined4 *)(param_1 + 0x168c) = 0xf0;
    *(undefined4 *)(param_1 + 0x1d24) = 1;
  }
  iVar7 = *(int *)(param_1 + 0x1d0c) + 1;
  iVar17 = iVar7;
  if (10 < iVar7) {
    iVar17 = 10;
  }
  iVar8 = iVar7;
  if (0x19 < iVar7) {
    iVar8 = 0x19;
  }
  if (100 < iVar7) {
    iVar7 = 100;
  }
  local_748 = 1.0 / (float)iVar17;
  local_74c = 1.0 / (float)iVar8;
  local_768 = 1.0 / (float)iVar7;
  if (*(int *)(param_1 + 0x1d0c) < 2) {
    local_768 = 1.0;
  }
  local_7a0[0] = *(float *)(param_1 + 8);
  if (local_7a0[0] != 6.72623e-41) {
    if (local_7a0[0] != 2.24208e-41) goto LAB_144f3824a;
    param_4 = param_4 * 3;
    param_5 = param_5 * 3;
  }
  param_4 = param_4 / 2;
  param_5 = param_5 / 2;
LAB_144f3824a:
  local_770 = *(ulonglong *)(param_2 + 0x58);
  iVar7 = 0x2d0 - *(int *)(param_1 + 0x168c);
  local_7c8 = param_4;
  if (iVar7 <= param_4) {
    local_7c8 = iVar7;
  }
  local_7a8 = param_8;
  local_7b0 = param_7;
  local_7b8 = param_6;
  uStack_7f0 = 0x144f382b4;
  local_7c0 = param_5;
  local_788 = param_3;
  local_750 = (float)FUN_144f37e90(param_10,param_3,
                                   param_1 + ((longlong)*(int *)(param_1 + 0x168c) + 0x2d3) * 4,
                                   param_1 + 0x1da8);
  local_750 = local_750 + *(float *)(param_1 + 0x1d20);
  iVar7 = *(int *)(param_1 + 0x168c) + param_4;
  *(float *)(param_1 + 0x1d20) = local_750;
  if (iVar7 < 0x2d0) {
    *(int *)(param_1 + 0x168c) = iVar7;
    puVar15 = local_7e8;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x1d14);
    lVar25 = (longlong)iVar7 * 0x40;
    *(int *)(param_1 + 0x1d14) = iVar7 + 1;
    if (99 < iVar7 + 1) {
      *(int *)(param_1 + 0x1d14) = iVar7 + -99;
    }
    uStack_7f0 = 0x144f38325;
    local_740 = lVar25;
    local_7a0[2] = (float)FUN_144bc65f8(param_1 + 0xb4c,0x2d0,1,param_9);
    local_758 = local_2598;
    puVar15 = auStack_2d68;
    local_738 = local_2d18;
    pfVar27 = (float *)(param_1 + 0xf0c);
    pfVar11 = (float *)(param_1 + 0x1688);
    uVar9 = uVar16;
    pfVar14 = local_7a0;
    do {
      fVar30 = *(float *)("nghttp2_session_send error (%s)%d" + (4 - param_1) + (longlong)pfVar27);
      local_1698[uVar9 * 2] = fVar30 * pfVar27[-0xf0];
      fVar31 = *pfVar27;
      pfVar27 = pfVar27 + 1;
      local_1698[uVar9 * 2 + 1] = fVar30 * fVar31;
      uVar9 = uVar9 + 1;
      *pfVar14 = fVar30 * pfVar11[-0xf0];
      fVar31 = *pfVar11;
      pfVar11 = pfVar11 + -1;
      pfVar14[1] = fVar30 * fVar31;
      pfVar14 = pfVar14 + -2;
    } while ((longlong)uVar9 < 0xf0);
    memmove((void *)(param_1 + 0xb4c),(void *)(param_1 + 0x12cc),0x3c0);
    local_2d40 = (param_5 - *(int *)(param_1 + 0x168c)) + 0x2d0;
    iVar7 = param_4 + -0x2d0 + *(int *)(param_1 + 0x168c);
    local_2d20 = *(undefined4 *)(param_1 + 8);
    local_2d28 = param_8;
    local_2d30 = param_7;
    local_2d38 = param_6;
    local_2d48 = iVar7;
    uVar29 = FUN_144f37e90(local_760,local_788,param_1 + 0xf0c,param_1 + 0x1da8);
    *(undefined4 *)(param_1 + 0x1d20) = uVar29;
    *(int *)(param_1 + 0x168c) = iVar7 + 0xf0;
    if (local_7a0[2] == 0.0) {
      FUN_1452f3ea8(local_770,local_1698,local_758);
      pfVar27 = local_758;
      if (NAN(*local_758)) {
LAB_144f38912:
        *(undefined4 *)(lVar25 + 0x1db4 + param_1) = 0;
        puVar15 = auStack_2d68;
      }
      else {
        pfVar11 = local_758 + 0x3be;
        lVar12 = (longlong)local_738 - (longlong)local_2958;
        puVar28 = local_4b8 + -(longlong)local_2958;
        pfVar14 = local_2958;
        lVar19 = (param_1 + 0xc) - (longlong)local_2958;
        lVar21 = (param_1 + 0x3cc) - (longlong)local_2958;
        lVar23 = (param_1 + 0x78c) - (longlong)local_2958;
        lVar26 = 1;
        do {
          pfVar14 = pfVar14 + 1;
          fVar30 = (float)FUN_144f376c8(pfVar27[lVar26 * 2 + 1] - pfVar11[1],
                                        *pfVar11 + pfVar27[lVar26 * 2]);
          fVar36 = fVar30 * 0.15915494 - *(float *)(lVar19 + (longlong)pfVar14);
          fVar38 = fVar36 - *(float *)(lVar21 + (longlong)pfVar14);
          fVar31 = (float)FUN_144f376c8();
          lVar26 = lVar26 + 1;
          pfVar11 = pfVar11 + -2;
          fVar38 = fVar38 - (float)(int)ROUND(fVar38);
          fVar35 = fVar31 * 0.15915494 - fVar30 * 0.15915494;
          local_7a0[2] = fVar35 - fVar36;
          fVar30 = local_7a0[2] - (float)(int)ROUND(local_7a0[2]);
          fVar36 = fVar30 * fVar30 * fVar30 * fVar30;
          *(float *)(lVar12 + (longlong)pfVar14) = ABS(fVar30) + ABS(fVar38);
          *pfVar14 = 1.0 / ((fVar38 * fVar38 * fVar38 * fVar38 +
                             *(float *)(lVar23 + (longlong)pfVar14) + fVar36 + fVar36) * 0.25 *
                            62341.816 + 1.0) - 0.015;
          *(float *)(lVar19 + (longlong)pfVar14) = fVar31 * 0.15915494;
          *(float *)(lVar21 + (longlong)pfVar14) = fVar35;
          *(float *)(lVar23 + (longlong)pfVar14) = fVar36;
          *(float *)(puVar28 + (longlong)pfVar14) = 1.0 / (fVar36 * 62341.816 + 1.0) - 0.015;
        } while (lVar26 < 0xf0);
        pfVar11 = local_4b4 + 2;
        pfVar14 = pfVar27 + 0x3be;
        lVar12 = 0xed;
        do {
          fVar30 = pfVar11[-2];
          if (pfVar11[-2] <= *pfVar11) {
            fVar30 = *pfVar11;
          }
          fVar31 = pfVar11[-1];
          if (fVar30 <= pfVar11[-1]) {
            fVar31 = fVar30;
          }
          fVar30 = *(float *)((longlong)local_2958 + -(longlong)(local_4b4 + 2) + 8 +
                             (longlong)pfVar11);
          if (fVar30 <= fVar31 - 0.1) {
            fVar30 = fVar31 - 0.1;
          }
          *(float *)((longlong)local_2958 + -(longlong)(local_4b4 + 2) + 8 + (longlong)pfVar11) =
               fVar30 * 0.9;
          pfVar11 = pfVar11 + 1;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        *(undefined4 *)(lVar25 + 0x1dc4 + param_1) = 0;
        fVar30 = 0.0;
        local_770 = local_770 & 0xffffffff00000000;
        local_77c = 0.0;
        if (*(int *)(param_1 + 0x1d0c) == 0) {
          puVar10 = (undefined4 *)(param_1 + 0x1ba8);
          lVar12 = 0x12;
          do {
            puVar10[-0x12] = 0x501502f9;
            *puVar10 = 0xd01502f9;
            puVar10 = puVar10 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        fVar31 = *pfVar27 + *pfVar27;
        fVar36 = pfVar27[1] + pfVar27[1];
        local_778 = 0.0;
        lVar12 = 3;
        local_780 = 0.0;
        fVar31 = fVar36 * fVar36 + fVar31 * fVar31;
        pfVar11 = pfVar27;
        do {
          fVar36 = *pfVar14;
          fVar35 = pfVar11[2];
          pfVar1 = pfVar14 + 1;
          pfVar14 = pfVar14 + -2;
          fVar31 = fVar31 + fVar35 * fVar35 + fVar36 * fVar36 + pfVar11[3] * pfVar11[3] +
                            *pfVar1 * *pfVar1;
          lVar12 = lVar12 + -1;
          pfVar11 = pfVar11 + 2;
        } while (lVar12 != 0);
        dVar32 = log((double)(fVar31 + 1e-10));
        local_760 = local_760 & 0xffffffff00000000;
        local_788 = 0;
        local_728[0] = (float)dVar32 * 0.7213475;
        uVar9 = uVar16;
        fVar31 = 0.0;
        do {
          lVar12 = local_788;
          fVar35 = 0.0;
          fVar36 = 0.0;
          fVar38 = 0.0;
          if (*(int *)((longlong)&DAT_149c0aff0 + uVar9) <
              *(int *)((longlong)&DAT_149c0aff4 + uVar9)) {
            lVar19 = (longlong)*(int *)((longlong)&DAT_149c0aff0 + uVar9);
            pfVar11 = pfVar27 + lVar19 * 2;
            pfVar14 = (float *)(local_738 + lVar19 * 4);
            pfVar27 = pfVar27 + (0x1e0 - lVar19) * 2;
            uVar22 = (ulonglong)
                     (uint)(*(int *)((longlong)&DAT_149c0aff4 + uVar9) -
                           *(int *)((longlong)&DAT_149c0aff0 + uVar9));
            do {
              fVar34 = *pfVar11;
              fVar33 = *pfVar27;
              pfVar1 = pfVar11 + 1;
              pfVar11 = pfVar11 + 2;
              pfVar2 = pfVar27 + 1;
              pfVar27 = pfVar27 + -2;
              fVar37 = *(float *)(((longlong)local_2958 - (longlong)local_738) + (longlong)pfVar14);
              fVar5 = 0.0;
              if (0.0 <= fVar37) {
                fVar5 = fVar37;
              }
              fVar33 = fVar33 * fVar33 + fVar34 * fVar34 + *pfVar1 * *pfVar1 + *pfVar2 * *pfVar2;
              fVar35 = fVar35 + fVar33;
              fVar36 = fVar36 + fVar5 * fVar33;
              fVar34 = *pfVar14;
              pfVar14 = pfVar14 + 1;
              fVar38 = fVar38 + (fVar33 + fVar33) * (0.5 - fVar34);
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
            if ((1e+09 <= fVar35) || (NAN(fVar35))) goto LAB_144f38912;
          }
          lVar19 = 8;
          *(float *)(param_1 + 0x16e0 +
                    (local_788 + (longlong)*(int *)(param_1 + 0x1d08) * 0x12) * 4) = fVar35;
          local_7a0[2] = fVar31 + fVar38 / (fVar35 + 1e-15);
          dVar32 = sqrt((double)(fVar35 + 1e-10));
          local_780 = local_780 + (float)dVar32;
          dVar32 = log((double)(fVar35 + 1e-10));
          fVar31 = (float)dVar32;
          *(float *)(param_1 + 0x1920 + (lVar12 + (longlong)*(int *)(param_1 + 0x1d08) * 0x12) * 4)
               = fVar31;
          lVar12 = param_1 + 0x1b60;
          *(float *)((longlong)local_588 + uVar9) = fVar31;
          *(float *)((longlong)local_728 + uVar9 + 4) = fVar31 * 0.7213475;
          if (*(int *)(param_1 + 0x1d0c) == 0) {
            *(float *)(lVar12 + uVar9) = fVar31;
            *(float *)(param_1 + 0x1ba8 + uVar9) = fVar31;
          }
          fVar38 = *(float *)(lVar12 + uVar9);
          fVar34 = *(float *)(param_1 + 0x1ba8 + uVar9);
          if (fVar38 + 7.5 < fVar34) {
            if (fVar34 - fVar31 <= fVar31 - fVar38) {
              fVar38 = fVar38 + 0.01;
              *(float *)(lVar12 + uVar9) = fVar38;
            }
            else {
              fVar34 = fVar34 - 0.01;
              *(float *)(param_1 + 0x1ba8 + uVar9) = fVar34;
            }
          }
          if (fVar31 <= fVar34) {
            fVar33 = fVar34;
            if (fVar31 < fVar38) {
              *(float *)(lVar12 + uVar9) = fVar31;
              fVar33 = fVar31 + 15.0;
              if (fVar34 <= fVar31 + 15.0) {
                fVar33 = fVar34;
              }
              *(float *)(param_1 + 0x1ba8 + uVar9) = fVar33;
              fVar38 = fVar31;
            }
          }
          else {
            *(float *)(param_1 + 0x1ba8 + uVar9) = fVar31;
            fVar34 = fVar31 - 15.0;
            if (fVar31 - 15.0 <= fVar38) {
              fVar34 = fVar38;
            }
            *(float *)(lVar12 + uVar9) = fVar34;
            fVar38 = fVar34;
            fVar33 = fVar31;
          }
          fVar34 = 0.0;
          fVar37 = 0.0;
          pfVar27 = (float *)(param_1 + 0x16e0 + uVar9);
          local_778 = local_778 + (fVar31 - fVar38) / ((fVar33 - fVar38) + 1e-05);
          do {
            dVar32 = sqrt((double)*pfVar27);
            fVar34 = fVar34 + *pfVar27;
            pfVar27 = pfVar27 + 0x12;
            fVar37 = fVar37 + (float)dVar32;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar32 = sqrt((double)(fVar34 * 8.0) + 1e-15);
          fVar36 = fVar36 / (fVar35 + 1e-15);
          fVar31 = 0.99;
          if (fVar37 / (float)dVar32 <= 0.99) {
            fVar31 = fVar37 / (float)dVar32;
          }
          fVar31 = fVar31 * fVar31 * fVar31 * fVar31;
          local_77c = local_77c + fVar31;
          fVar31 = fVar31 * *(float *)(param_1 + 0x1690 + uVar9);
          if (fVar36 <= fVar31) {
            fVar36 = fVar31;
          }
          *(float *)((longlong)local_668 + uVar9) = fVar36;
          fVar30 = fVar30 + fVar36;
          if (8 < (int)local_760) {
            fVar30 = fVar30 - *(float *)((longlong)local_6ac + uVar9 + 0x20);
          }
          iVar7 = (int)local_760 + -8;
          fVar31 = ((float)((int)local_760 + -0x12) * 0.03 + 1.0) * fVar30;
          if ((float)local_770 <= fVar31) {
            local_770 = CONCAT44(local_770._4_4_,fVar31);
          }
          iVar17 = (int)local_760 + 1;
          local_788 = local_788 + 1;
          local_760 = CONCAT44(local_760._4_4_,iVar17);
          *(float *)(param_1 + 0x1690 + uVar9) = fVar36;
          uVar9 = uVar9 + 4;
          local_774 = local_774 + (float)iVar7 * fVar36;
          pfVar27 = local_758;
          fVar31 = local_7a0[2];
        } while (iVar17 < 0x12);
        lVar12 = 0x12;
        local_668[0] = local_728[0];
        uVar24 = 1;
        local_5f8[0] = local_728[0] - 2.5;
        uVar9 = uVar16;
        do {
          fVar30 = *(float *)((longlong)local_728 + uVar9 + 4);
          fVar31 = (float)(*(int *)((longlong)&DAT_149c0aff4 + uVar9) -
                          *(int *)((longlong)&DAT_149c0aff0 + uVar9));
          fVar36 = (fVar31 + fVar31) * 0.25;
          fVar31 = *(float *)((longlong)local_5f8 + uVar9) - fVar36;
          fVar36 = fVar36 + *(float *)((longlong)local_668 + uVar9);
          if (fVar30 <= fVar36) {
            fVar36 = fVar30;
          }
          *(float *)((longlong)local_668 + uVar9 + 4) = fVar36;
          if (fVar31 <= fVar30 - 2.5) {
            fVar31 = fVar30 - 2.5;
          }
          *(float *)((longlong)local_5f8 + uVar9 + 4) = fVar31;
          uVar9 = uVar9 + 4;
          lVar12 = lVar12 + -1;
          uVar22 = uVar16;
        } while (lVar12 != 0);
        do {
          fVar30 = (float)(*(int *)((longlong)&DAT_149c0b034 + uVar22) -
                          *(int *)((longlong)&DAT_149c0b030 + uVar22));
          fVar31 = (fVar30 + fVar30) * 0.25;
          fVar30 = *(float *)((longlong)afStack_5b8 + uVar22 + 4) - fVar31;
          fVar31 = fVar31 + *(float *)((longlong)afStack_628 + uVar22 + 4);
          if (fVar30 <= *(float *)((longlong)afStack_5b8 + uVar22)) {
            fVar30 = *(float *)((longlong)afStack_5b8 + uVar22);
          }
          if (*(float *)((longlong)afStack_628 + uVar22) <= fVar31) {
            fVar31 = *(float *)((longlong)afStack_628 + uVar22);
          }
          *(float *)((longlong)afStack_5b8 + uVar22) = fVar30;
          *(float *)((longlong)afStack_628 + uVar22) = fVar31;
          uVar22 = uVar22 - 4;
        } while (-0x41 < (longlong)uVar22);
        puVar28 = (undefined1 *)(lVar25 + 0x1de0 + param_1);
        lVar25 = 0x13;
        uVar9 = uVar16;
        do {
          fVar36 = *(float *)((longlong)local_728 + uVar9) -
                   (*(float *)((longlong)local_668 + uVar9) + 2.5);
          fVar31 = *(float *)((longlong)local_5f8 + uVar9) - *(float *)((longlong)local_728 + uVar9)
          ;
          fVar30 = 0.0;
          if (0.0 <= fVar36) {
            fVar30 = fVar36;
          }
          fVar36 = 0.0;
          if (0.0 <= fVar31) {
            fVar36 = fVar31;
          }
          dVar32 = floor((double)((fVar30 + fVar36) * 64.0) + 0.5);
          iVar7 = (int)dVar32;
          if (0xff < (int)dVar32) {
            iVar7 = 0xff;
          }
          uVar9 = uVar9 + 4;
          *puVar28 = (char)iVar7;
          puVar28 = puVar28 + 1;
          lVar25 = lVar25 + -1;
          uVar22 = uVar16;
          uVar20 = uVar16;
        } while (lVar25 != 0);
        do {
          fVar30 = 1e+15;
          pfVar27 = (float *)(param_1 + 0x1920);
          uVar9 = uVar16;
          uVar18 = uVar22;
          do {
            fVar31 = 0.0;
            lVar25 = 0x12;
            do {
              fVar36 = *(float *)((longlong)pfVar27 + uVar18) - *pfVar27;
              pfVar27 = pfVar27 + 1;
              fVar31 = fVar31 + fVar36 * fVar36;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            if ((uVar9 != uVar20) && (fVar31 <= fVar30)) {
              fVar30 = fVar31;
            }
            uVar9 = uVar9 + 1;
            uVar18 = uVar18 - 0x48;
          } while ((longlong)uVar9 < 8);
          local_7a0[4] = local_7a0[4] + fVar30;
          uVar22 = uVar22 + 0x48;
          uVar20 = uVar20 + 1;
        } while ((longlong)uVar22 < 0x240);
        dVar32 = sqrt((double)((local_7a0[4] * 0.125) / 18.0));
        lVar25 = local_740;
        pfVar27 = (float *)(param_1 + 0x1bf0);
        iVar7 = param_9 + -8;
        if (param_9 + -8 < 0) {
          iVar7 = 0;
        }
        local_7a0[4] = (float)dVar32;
        local_788 = (longlong)local_728 + -param_1;
        fVar30 = 0.0;
        fVar35 = 0.00057 / (float)(1 << ((byte)iVar7 & 0x1f));
        fVar31 = 0.0;
        fVar36 = 0.0;
        fVar35 = fVar35 * fVar35;
        fVar38 = 0.0;
        uVar9 = uVar16;
        do {
          iVar7 = *(int *)("send: nothing to do in this session" + (0x18 - param_1) +
                          (longlong)pfVar27);
          lVar12 = (longlong)iVar7;
          fVar34 = 0.0;
          iVar17 = *(int *)((longlong)pfVar27 +
                           (longlong)("send: nothing to do in this session" + (0x1c - param_1)));
          if (lVar12 < iVar17) {
            pfVar11 = local_758 + (0x1e0 - lVar12) * 2;
            do {
              fVar33 = *pfVar11;
              lVar19 = lVar12 * 2;
              lVar21 = lVar12 * 2;
              lVar12 = lVar12 + 1;
              pfVar14 = pfVar11 + 1;
              pfVar11 = pfVar11 + -2;
              fVar34 = fVar34 + fVar33 * fVar33 + local_758[lVar19] * local_758[lVar19] +
                                local_758[lVar21 + 1] * local_758[lVar21 + 1] + *pfVar14 * *pfVar14;
            } while (lVar12 < iVar17);
          }
          if (fVar31 <= fVar34) {
            fVar31 = fVar34;
          }
          if (iVar7 < 0x40) {
            fVar36 = fVar36 + fVar34;
          }
          else {
            fVar38 = fVar38 + fVar34;
          }
          fVar33 = (1.0 - local_768) * *pfVar27;
          if (fVar33 <= fVar34) {
            fVar33 = fVar34;
          }
          *pfVar27 = fVar33;
          if (fVar31 < fVar34 * 1e+09) {
            fVar37 = fVar34;
            if (fVar34 <= fVar33) {
              fVar37 = fVar33;
            }
            if ((fVar35 * 3.0 * (float)(iVar17 - iVar7) < fVar37) ||
               ((float)(iVar17 - iVar7) * fVar35 < fVar34)) {
              uVar9 = (ulonglong)uVar24;
            }
          }
          iVar17 = (int)uVar9;
          iVar7 = *(int *)(param_1 + 0x16dc);
          if (iVar7 < (int)uVar24) {
            fVar33 = 0.05;
          }
          else {
            fVar33 = 0.01;
          }
          fVar33 = fVar33 * fVar30;
          fVar30 = fVar30 * 0.05;
          if (fVar30 <= fVar34) {
            fVar30 = fVar34;
          }
          uVar24 = uVar24 + 1;
          *(uint *)((longlong)&uStack_2318 + -param_1 + (longlong)pfVar27) = (uint)(fVar34 < fVar33)
          ;
          pfVar27 = pfVar27 + 1;
        } while ((int)uVar24 < 0x13);
        if (*(int *)(param_1 + 8) == 48000) {
          fVar31 = local_750 * 0.00027777778;
          if (iVar7 == 0x14) {
            fVar34 = 10.0;
          }
          else {
            fVar34 = 30.0;
          }
          fVar33 = (1.0 - local_768) * *(float *)(param_1 + 0x1c38);
          fVar38 = fVar38 + fVar31;
          if (fVar33 <= fVar31) {
            fVar33 = fVar31;
          }
          fVar37 = fVar31;
          if (fVar31 <= fVar33) {
            fVar37 = fVar33;
          }
          *(float *)(param_1 + 0x1c38) = fVar33;
          if ((fVar34 * 3.0 * fVar35 * 160.0 < fVar37) || (fVar34 * fVar35 * 160.0 < fVar31)) {
            iVar17 = 0x14;
          }
          if (*(int *)(param_1 + 0x16dc) == 0x14) {
            fVar35 = 0.01;
          }
          else {
            fVar35 = 0.05;
          }
          local_6e0 = (uint)(fVar31 < fVar35 * fVar30);
        }
        if (fVar38 <= fVar36) {
          fVar36 = 1.0;
        }
        else {
          fVar36 = fVar36 / fVar38;
        }
        *(float *)(local_740 + 0x1ddc + param_1) = fVar36;
        if (iVar17 == 0x14) {
          if (local_6e0 != 0) {
            iVar17 = 0x12;
          }
        }
        else if ((iVar17 - 1U < 0x12) && ((&local_72c)[iVar17] != 0)) {
          iVar17 = iVar17 + -1;
        }
        iVar7 = *(int *)(param_1 + 0x1d0c);
        if (iVar7 < 3) {
          iVar17 = 0x14;
        }
        dVar32 = log10((double)local_780);
        fVar30 = *(float *)(param_1 + 0x1d00) - 0.003;
        fVar31 = (float)dVar32 * 20.0;
        fVar36 = (1.0 - local_74c) * *(float *)(param_1 + 0x1d04);
        if (fVar30 <= fVar31) {
          fVar30 = fVar31;
        }
        *(float *)(param_1 + 0x1d04) = fVar36;
        *(float *)(param_1 + 0x1d00) = fVar30;
        if (fVar31 < fVar30 - 30.0) {
          *(float *)(param_1 + 0x1d04) = fVar36 + local_74c;
        }
        lVar19 = 8;
        lVar12 = (longlong)&DAT_149c0aa30 - (longlong)local_588;
        uVar9 = uVar16;
        do {
          fVar30 = 0.0;
          uVar22 = uVar16;
          do {
            lVar21 = uVar22 * 4;
            pfVar27 = local_588 + uVar22;
            uVar22 = uVar22 + 1;
            fVar30 = fVar30 + *(float *)((longlong)local_588 + lVar12 + lVar21) * *pfVar27;
          } while ((longlong)uVar22 < 0x10);
          afStack_628[uVar9 + 4] = fVar30;
          lVar12 = lVar12 + 0x40;
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < 8);
        pcVar13 = "[%d] req_body_read(len=%zu) left=%I64d -> %zd, %d" + (0x30 - param_1);
        uVar9 = uVar16;
        do {
          fVar30 = 0.0;
          pfVar27 = (float *)(param_1 + 0x1b60);
          lVar12 = 0x10;
          do {
            pfVar11 = pfVar27 + 0x12;
            pfVar14 = (float *)((longlong)pfVar27 + (longlong)pcVar13);
            fVar31 = *pfVar27;
            pfVar27 = pfVar27 + 1;
            fVar30 = fVar30 + (*pfVar11 + fVar31) * *pfVar14 * 0.5;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          afStack_5b8[uVar9 + 4] = fVar30;
          pcVar13 = pcVar13 + 0x40;
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < 8);
        fVar31 = local_77c / 18.0;
        fVar30 = local_778 / 18.0;
        if (iVar7 < 10) {
          fVar30 = 0.5;
        }
        fVar35 = local_7a0[2] / 18.0;
        *(float *)(lVar25 + 0x1dc4 + param_1) = (1.0 - fVar35) * fVar30 + fVar35;
        fVar36 = *(float *)(param_1 + 0x16d8) * 0.8;
        fVar30 = (float)local_770 / 9.0;
        if ((float)local_770 / 9.0 <= fVar36) {
          fVar30 = fVar36;
        }
        *(float *)(param_1 + 0x16d8) = fVar30;
        *(float *)(lVar25 + 0x1dbc + param_1) = local_774 * 0.015625;
        uVar24 = *(int *)(param_1 + 0x1d08) + 1U & 0x80000007;
        if ((int)uVar24 < 0) {
          uVar24 = (uVar24 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(param_1 + 0x1d08) = uVar24;
        iVar8 = *(int *)(param_1 + 0x1d0c) + 1;
        iVar7 = 10000;
        if (iVar8 < 10000) {
          iVar7 = iVar8;
        }
        lVar12 = -param_1;
        *(int *)(param_1 + 0x1d0c) = iVar7;
        pfVar27 = (float *)(param_1 + 0x1c3c);
        *(float *)(lVar25 + 0x1db8 + param_1) = fVar30;
        lVar21 = 4;
        do {
          *(float *)((longlong)afStack_2314 + -param_1 + (longlong)pfVar27) =
               (((pfVar27[0x10] + *pfVar27) * 0.49195 -
                (*(float *)((longlong)afStack_2254 + lVar12 + (longlong)pfVar27) + pfVar27[0x18]) *
                0.12299) + pfVar27[8] * 0.69693) - pfVar27[0x20] * 1.4349;
          pfVar27 = pfVar27 + 1;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        pfVar27 = (float *)(param_1 + 0x1cbc);
        lVar21 = 4;
        do {
          *pfVar27 = local_748 * *(float *)((longlong)afStack_22d4 + lVar12 + (longlong)pfVar27) +
                     (1.0 - local_748) * *pfVar27;
          pfVar27 = pfVar27 + 1;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        pfVar27 = (float *)(param_1 + 0x1c7c);
        lVar21 = 4;
        pfVar11 = pfVar27;
        do {
          *(float *)(((longlong)afStack_2344 - param_1) + (longlong)pfVar11) =
               (*(float *)((longlong)afStack_2294 + lVar12 + (longlong)pfVar11) - pfVar11[8]) *
               0.63246 + (pfVar11[-0x10] - *pfVar11) * 0.31623;
          pfVar11 = pfVar11 + 1;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 3;
        pfVar11 = pfVar27;
        do {
          *(float *)(((longlong)afStack_2334 - param_1) + (longlong)pfVar11) =
               ((*(float *)((longlong)afStack_2294 + lVar12 + (longlong)pfVar11) + pfVar11[8]) *
                0.53452 - (pfVar11[-0x10] + *pfVar11) * 0.26726) - pfVar11[-8] * 0.53452;
          pfVar11 = pfVar11 + 1;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        uVar9 = uVar16;
        if (5 < *(int *)(param_1 + 0x1d0c)) {
          pfVar11 = (float *)(param_1 + 0x1cdc);
          lVar21 = 9;
          do {
            fVar30 = *(float *)((longlong)afStack_23b4 + -param_1 + (longlong)pfVar11);
            *pfVar11 = fVar30 * local_748 * fVar30 + (1.0 - local_748) * *pfVar11;
            pfVar11 = pfVar11 + 1;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        do {
          *(float *)((longlong)local_6d8 + uVar9) =
               *(float *)((longlong)afStack_628 + uVar9 + 0x10) -
               *(float *)((longlong)afStack_5b8 + uVar9 + 0x10);
          uVar9 = uVar9 + 4;
        } while ((longlong)uVar9 < 0x10);
        do {
          pfVar27[8] = *pfVar27;
          *pfVar27 = pfVar27[-8];
          pfVar27[-8] = pfVar27[-0x10];
          pfVar27[-0x10] = *(float *)((longlong)afStack_2294 + lVar12 + (longlong)pfVar27);
          pfVar27 = pfVar27 + 1;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        do {
          pfVar11 = (float *)((longlong)local_6ac + uVar16);
          dVar32 = sqrt((double)*(float *)(uVar16 + param_1 + 0x1cdc));
          pfVar27 = (float *)((longlong)&DAT_149c0b040 + uVar16);
          uVar16 = uVar16 + 4;
          *pfVar11 = (float)dVar32 - *pfVar27;
        } while ((longlong)uVar16 < 0x24);
        local_6ac[7] = local_7a0[4] - 0.78;
        local_6ac[0xb] = fVar31 - 0.743717;
        local_6ac[9] = *(float *)(lVar25 + 0x1db8 + param_1) - 0.154723;
        local_6ac[10] = *(float *)(lVar25 + 0x1dc4 + param_1) - 0.724643;
        local_67c = *(float *)(lVar25 + 0x1dbc + param_1) + 0.069216;
        local_678 = *(float *)(param_1 + 0x1d04) - 0.06793;
        FUN_1452f4b90(&PTR_DAT_149d33828,local_538,local_6d8);
        FUN_1452f4c80(&PTR_DAT_149d33848,param_1 + 0x1d28,local_538);
        FUN_1452f4b90(&PTR_DAT_149d33868,&local_730,param_1 + 0x1d28);
        *(int *)(lVar25 + 0x1dd8 + param_1) = local_72c;
        *(undefined4 *)(lVar25 + 0x1dc8 + param_1) = local_730;
        *(int *)(lVar25 + 0x1dd4 + param_1) = iVar17;
        *(int *)(param_1 + 0x16dc) = iVar17;
        *(float *)(lVar25 + 0x1dc0 + param_1) = fVar35;
        *(undefined4 *)(lVar25 + 0x1db4 + param_1) = 1;
      }
    }
    else {
      lVar12 = (longlong)
               (int)((*(int *)(param_1 + 0x1d14) + -2 >> 0x1f & 100U) +
                    *(int *)(param_1 + 0x1d14) + -2) * 0x40;
      puVar3 = (undefined8 *)(lVar12 + 0x1db4 + param_1);
      uVar6 = puVar3[1];
      puVar4 = (undefined8 *)(lVar25 + 0x1db4 + param_1);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar3 = (undefined8 *)(lVar12 + 0x1dc4 + param_1);
      uVar6 = puVar3[1];
      puVar4 = (undefined8 *)(lVar25 + 0x1dc4 + param_1);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar3 = (undefined8 *)(lVar12 + 0x1dd4 + param_1);
      uVar6 = puVar3[1];
      puVar4 = (undefined8 *)(lVar25 + 0x1dd4 + param_1);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar3 = (undefined8 *)(lVar12 + 0x1de4 + param_1);
      uVar6 = puVar3[1];
      puVar4 = (undefined8 *)(lVar25 + 0x1de4 + param_1);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar15 = auStack_2d68;
    }
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_144f38929;
  FUN_144d8e3a0(local_f8 ^ (ulonglong)(local_7a0 + 2));
}



// FUNCTION 144f39688 FUN_144f39688 body=90 status=ok
// SIG undefined FUN_144f39688(void)

int FUN_144f39688(uint param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar3 = 0x1f - iVar3;
  }
  iVar2 = 0x18 - iVar3;
  if (iVar2 != 0) {
    if (iVar2 < 0) {
      bVar1 = -(byte)iVar2 & 0x1f;
      param_1 = param_1 << bVar1 | param_1 >> 0x20 - bVar1;
    }
    else {
      bVar1 = (byte)iVar2 & 0x1f;
      param_1 = param_1 >> bVar1 | param_1 << 0x20 - bVar1;
    }
  }
  param_1 = param_1 & 0x7f;
  return param_1 + 0xf80 +
         (int)((ulonglong)((longlong)(int)((0x80 - param_1) * param_1) * 0xb3) >> 0x10) +
         iVar3 * -0x80;
}



// FUNCTION 144f396e4 FUN_144f396e4 body=100 status=ok
// SIG undefined FUN_144f396e4(void)

int FUN_144f396e4(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((int)param_1 < 0) {
    return 0;
  }
  if (0xf7e < (int)param_1) {
    return 0x7fffffff;
  }
  uVar2 = param_1 & 0x7f;
  iVar3 = 1 << ((byte)((int)param_1 >> 7) & 0x1f);
  iVar1 = (int)((ulonglong)((longlong)(int)((0x80 - uVar2) * uVar2) * -0xae) >> 0x10) + uVar2;
  if ((int)param_1 < 0x800) {
    iVar1 = iVar1 * iVar3 >> 7;
  }
  else {
    iVar1 = iVar1 * (iVar3 >> 7);
  }
  return iVar1 + iVar3;
}



// FUNCTION 144f39748 FUN_144f39748 body=61 status=ok
// SIG undefined FUN_144f39748(void)

undefined8 FUN_144f39748(int *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  if (0xff < param_1[2] + param_1[1]) {
    return 0;
  }
  lVar2 = 0;
  if (0 < (longlong)*param_1) {
    do {
      bVar1 = *(byte *)((longlong)param_1 + lVar2 + 0xc);
      if ((param_1[2] + param_1[1] <= (int)(uint)bVar1) && (bVar1 != 0xff)) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *param_1);
  }
  return 1;
}



// FUNCTION 144f39788 FUN_144f39788 body=59 status=ok
// SIG undefined FUN_144f39788(void)

int FUN_144f39788(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = param_3 + 1;
  if (param_3 < 0) {
    iVar2 = 0;
  }
  lVar1 = (longlong)iVar2;
  if (lVar1 < *param_1) {
    do {
      if ((uint)*(byte *)((longlong)param_1 + lVar1 + 0xc) == param_2 * 2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *param_1);
  }
  return -1;
}



// FUNCTION 144f397c4 FUN_144f397c4 body=63 status=ok
// SIG undefined FUN_144f397c4(void)

int FUN_144f397c4(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = param_3 + 1;
  if (param_3 < 0) {
    iVar2 = 0;
  }
  lVar1 = (longlong)iVar2;
  if (lVar1 < *param_1) {
    do {
      if ((uint)*(byte *)((longlong)param_1 + lVar1 + 0xc) == param_2 * 2 + 1U) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *param_1);
  }
  return -1;
}



// FUNCTION 144f39804 FUN_144f39804 body=61 status=ok
// SIG undefined FUN_144f39804(void)

int FUN_144f39804(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = param_3 + 1;
  if (param_3 < 0) {
    iVar2 = 0;
  }
  if (iVar2 < *param_1) {
    lVar1 = (longlong)iVar2;
    do {
      if ((uint)*(byte *)((longlong)param_1 + lVar1 + 0xc) == param_2 + param_1[2]) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *param_1);
  }
  return -1;
}



// FUNCTION 144f39850 FUN_144f39850 body=936 status=ok
// SIG undefined FUN_144f39850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f39850(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  void *_Dst;
  ulonglong uVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int *piVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  int *piVar20;
  ulonglong uVar21;
  long lVar22;
  undefined1 auStack_78 [32];
  char local_58 [8];
  longlong local_50;
  char local_48 [4];
  undefined1 local_44;
  char local_40 [4];
  undefined1 local_3c;
  ulonglong local_38;
  
  puVar17 = auStack_78;
  local_38 = DAT_14c707940 ^ (ulonglong)local_58;
  piVar1 = (int *)(param_1 + 0x420);
  uVar16 = 0;
  lVar22 = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 8),piVar1);
  puVar18 = auStack_78;
  if ((*piVar1 < 1) ||
     (iVar6 = (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 8)), puVar18 = auStack_78,
     iVar6 != 0)) goto LAB_144f39a47;
  _Dst = (void *)FUN_144bcb540((longlong)*piVar1 * 0x78);
  *(void **)(param_1 + 0x408) = _Dst;
  puVar18 = auStack_78;
  if ((*(longlong *)(param_1 + 0x418) == 0) || (puVar18 = auStack_78, _Dst == (void *)0x0))
  goto LAB_144f39a47;
  memset(_Dst,0,(longlong)*piVar1 * 0x78);
  uVar9 = (longlong)*piVar1 * 4 + 0x10;
  uVar21 = uVar16;
  if ((ulonglong)((longlong)*piVar1 * 4) < uVar9) {
    uVar21 = uVar9;
  }
  puVar18 = auStack_78;
  if (uVar21 == 0) goto LAB_144f39a47;
  if (uVar21 < 0x401) {
    uVar9 = uVar21 + 0xf;
    if (uVar9 <= uVar21) {
      uVar9 = 0xffffffffffffff0;
    }
    lVar19 = -(uVar9 & 0xfffffffffffffff0);
    puVar18 = auStack_78 + lVar19;
    puVar17 = auStack_78 + lVar19;
    pcVar11 = local_58 + lVar19;
    if (pcVar11 == (char *)0x0) goto LAB_144f39a47;
    pcVar11[0] = -0x34;
    pcVar11[1] = -0x34;
    pcVar11[2] = '\0';
    pcVar11[3] = '\0';
LAB_144f3996a:
    piVar15 = (int *)(pcVar11 + 0x10);
    puVar18 = puVar17;
  }
  else {
    pcVar11 = malloc(uVar21);
    piVar15 = (int *)0x0;
    puVar18 = auStack_78;
    if (pcVar11 != (char *)0x0) {
      pcVar11[0] = -0x23;
      pcVar11[1] = -0x23;
      pcVar11[2] = '\0';
      pcVar11[3] = '\0';
      goto LAB_144f3996a;
    }
  }
  if (piVar15 != (int *)0x0) {
    uVar9 = uVar16;
    uVar21 = uVar16;
    piVar20 = piVar15;
    uVar14 = uVar16;
    lVar7 = lVar22;
    if (0 < *piVar1) {
      do {
        if (*(int *)(uVar21 + 0x31c + *(longlong *)(param_1 + 0x418)) != 0) {
          uVar14 = (ulonglong)((int)uVar14 + 1);
          *piVar20 = (int)uVar9;
          piVar20 = piVar20 + 1;
        }
        lVar7 = (long)uVar14;
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        uVar21 = uVar21 + 0x624;
      } while ((int)uVar12 < *piVar1);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x418);
    lVar19 = (longlong)lVar7;
    *(undefined8 *)(puVar18 + -8) = 0x144f399d1;
    FUN_144f3a9e0(piVar15,piVar15 + lVar19,lVar19,uVar4);
    uVar21 = 0xffffffff;
    uVar9 = uVar16;
    if (0 < lVar7) {
      do {
        lVar13 = (longlong)piVar15[uVar9] * 0x624 + *(longlong *)(param_1 + 0x418);
        uVar14 = (longlong)*(int *)(lVar13 + 0x10c) << 0x20 | (longlong)*(int *)(lVar13 + 0x108);
        if (uVar14 != uVar21) {
          *(int *)((longlong)*(int *)(param_1 + 0x410) * 0x78 + 0x70 +
                  *(longlong *)(param_1 + 0x408)) = piVar15[uVar9];
          *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
          uVar21 = uVar14;
        }
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < lVar19);
    }
    if (piVar15[-4] == 0xdddd) {
      *(undefined8 *)(puVar18 + -8) = 0x144f39a47;
      free(piVar15 + -4);
    }
  }
LAB_144f39a47:
  uVar9 = uVar16;
  if (0 < *(int *)(param_1 + 0x410)) {
    do {
      lVar19 = *(longlong *)(param_1 + 0x408);
      lVar13 = (longlong)*(int *)(uVar16 + 0x70 + lVar19) * 0x624 + *(longlong *)(param_1 + 0x418);
      puVar2 = (uint *)(uVar16 + 0xc + lVar19);
      *puVar2 = *puVar2 & 0xfffffff8;
      *(undefined4 *)(uVar16 + 8 + lVar19) = 0;
      pcVar11 = (char *)(lVar13 + 8);
      *(longlong *)(uVar16 + lVar19) = lVar13 + 0x118;
      lVar7 = lVar22;
      if (pcVar11 != (char *)0x0) {
        *(undefined8 *)(puVar18 + -8) = 0x144f39aaa;
        pcVar10 = strstr(pcVar11,"VEN_");
        if (pcVar10 != (char *)0x0) {
          *(undefined8 *)(puVar18 + -8) = 0x144f39ac6;
          strncpy_s(local_48,8,pcVar10 + 4,4);
          local_44 = 0;
          *(undefined8 *)(puVar18 + -8) = 0x144f39ada;
          lVar7 = strtol(local_48,(char **)0x0,0x10);
        }
      }
      *(long *)(uVar16 + 0x10 + lVar19) = lVar7;
      lVar8 = 0;
      lVar7 = lVar8;
      if (pcVar11 != (char *)0x0) {
        *(undefined8 *)(puVar18 + -8) = 0x144f39af9;
        pcVar10 = strstr(pcVar11,"DEV_");
        if (pcVar10 != (char *)0x0) {
          *(undefined8 *)(puVar18 + -8) = 0x144f39b15;
          strncpy_s(local_40,8,pcVar10 + 4,4);
          local_3c = 0;
          *(undefined8 *)(puVar18 + -8) = 0x144f39b29;
          lVar7 = strtol(local_40,(char **)0x0,0x10);
        }
      }
      *(long *)(uVar16 + 0x14 + lVar19) = lVar7;
      if (pcVar11 != (char *)0x0) {
        *(undefined8 *)(puVar18 + -8) = 0x144f39b48;
        pcVar11 = strstr(pcVar11,"REV_");
        if (pcVar11 != (char *)0x0) {
          *(undefined8 *)(puVar18 + -8) = 0x144f39b64;
          strncpy_s(local_58,4,pcVar11 + 4,2);
          local_58[2] = 0;
          *(undefined8 *)(puVar18 + -8) = 0x144f39b78;
          lVar8 = strtol(local_58,(char **)0x0,0x10);
        }
      }
      *(long *)(uVar16 + 0x18 + lVar19) = lVar8;
      *(undefined8 *)(uVar16 + 0x1c + lVar19) = 0;
      *(undefined8 *)(uVar16 + 0x28 + lVar19) = 0;
      *(undefined8 *)(uVar16 + 0x30 + lVar19) = 0;
      pcVar5 = *(code **)(param_1 + 0x30);
      if (pcVar5 != (code *)0x0) {
        uVar3 = *(undefined4 *)(uVar16 + 0x70 + lVar19);
        uVar4 = *(undefined8 *)(param_1 + 8);
        local_50 = 0;
        *(undefined8 *)(puVar18 + -8) = 0x144f39bad;
        iVar6 = (*pcVar5)(uVar4,uVar3,0,&local_50);
        if ((iVar6 == 0) && (local_50 != 0)) {
          if ((*(uint *)(local_50 + 0x628) & *(uint *)(local_50 + 0x624) & 1) != 0) {
            puVar2 = (uint *)(uVar16 + 0xc + lVar19);
            *puVar2 = *puVar2 | 4;
          }
          *(undefined8 *)(puVar18 + -8) = 0x144f39bd8;
          FUN_144bcb560(&local_50);
        }
      }
      uVar12 = (int)uVar9 + 1;
      uVar16 = uVar16 + 0x78;
      uVar9 = (ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(param_1 + 0x410));
  }
  uVar16 = local_38 ^ (ulonglong)local_58;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar18 + -8) = &UNK_144f39bf8;
  FUN_144d8e3a0(uVar16);
}



// FUNCTION 144f39c20 FUN_144f39c20 body=482 status=ok
// SIG undefined FUN_144f39c20(void)

void FUN_144f39c20(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278 [33];
  undefined4 local_170;
  undefined8 local_168 [33];
  undefined4 local_60;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x410)) {
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x408) + lVar8;
      lVar7 = (longlong)*(int *)(lVar5 + 0x70) * 0x624 + *(longlong *)(param_1 + 0x418);
      cVar2 = FUN_144f3a550(param_1,lVar5);
      if ((cVar2 == '\0') && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
        local_2b8 = 0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = 0;
        local_298 = 0;
        local_290 = 0;
        local_288 = 0;
        local_280 = 0;
        iVar3 = (**(code **)(param_1 + 0x48))
                          (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar7 + 4),&local_2b8);
        if (iVar3 == 0) {
          if ((int)local_2b8 == 2) {
            *(undefined4 *)(lVar5 + 0x1c) = local_2b8._4_4_;
            *(undefined4 *)(lVar5 + 0x24) = (undefined4)local_2a8;
            *(undefined4 *)(lVar5 + 8) = 2;
          }
          else {
            *(uint *)(lVar5 + 8) = (uint)((int)local_2b8 == 1);
          }
        }
      }
      FUN_144f3a350(param_1);
      *(float *)(lVar5 + 0x34) =
           (float)(*(int *)(lVar5 + 0x28) * *(int *)(lVar5 + 0x1c) * 0x80) / 1e+06;
      pcVar1 = *(code **)(param_1 + 0x40);
      if (pcVar1 == (code *)0x0) {
        pcVar1 = *(code **)(param_1 + 0x38);
        if (pcVar1 != (code *)0x0) {
          memset(local_278,0,0x110);
          iVar3 = (*pcVar1)(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar7 + 4),local_278);
          if (iVar3 == 0) {
            *(undefined8 *)(lVar5 + 0x38) = local_278[0];
            uVar4 = local_170;
            goto LAB_144f39db5;
          }
        }
      }
      else {
        memset(local_168,0,0x128);
        iVar3 = (*pcVar1)(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar7 + 4),local_168);
        if (iVar3 == 0) {
          *(undefined8 *)(lVar5 + 0x38) = local_168[0];
          uVar4 = local_60;
LAB_144f39db5:
          *(undefined4 *)(lVar5 + 0x30) = uVar4;
        }
      }
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 0x78;
    } while (iVar6 < *(int *)(param_1 + 0x410));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_2d8);
}



// FUNCTION 144f39e10 FUN_144f39e10 body=910 status=ok
// SIG undefined FUN_144f39e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f39e10(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *_Dst;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  longlong lVar16;
  size_t sVar17;
  undefined1 auStack_138 [32];
  uint local_118 [4];
  uint local_108 [48];
  ulonglong local_48;
  
  puVar13 = auStack_138;
  local_48 = DAT_14c707940 ^ (ulonglong)local_118;
  pcVar2 = *(code **)(param_1 + 0xa0);
  lVar16 = (longlong)*(int *)(param_2 + 0x70) * 0x624 + *(longlong *)(param_1 + 0x418);
  if (((pcVar2 == (code *)0x0) || (*(longlong *)(param_1 + 0xa8) == 0)) ||
     (*(longlong *)(param_1 + 0xb0) == 0)) {
    pcVar2 = *(code **)(param_1 + 0x80);
    puVar14 = auStack_138;
    if (((pcVar2 == (code *)0x0) || (puVar14 = auStack_138, *(longlong *)(param_1 + 0x88) == 0)) ||
       (puVar14 = auStack_138, *(longlong *)(param_1 + 0x90) == 0)) goto LAB_144f3a18f;
    memset(local_118,0,0xa4);
    iVar5 = (*pcVar2)(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar16 + 4),local_118);
    puVar14 = auStack_138;
    if ((iVar5 != 0) || (puVar14 = auStack_138, (int)local_118[0] < 1)) goto LAB_144f3a18f;
    uVar12 = 0;
    uVar7 = 0;
    uVar15 = (local_118[0] + 1) * 0xc;
    sVar17 = (size_t)(int)uVar15;
    uVar11 = uVar12;
    if (sVar17 < sVar17 + 0x10) {
      uVar11 = sVar17 + 0x10;
    }
    if (uVar11 == 0) {
      _Dst = (uint *)0x0;
    }
    else if (uVar11 < 0x401) {
      uVar8 = uVar11 + 0xf;
      if (uVar8 <= uVar11) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar4 = -(uVar8 & 0xfffffffffffffff0);
      _Dst = (uint *)0x0;
      puVar13 = auStack_138 + lVar4;
      if ((undefined4 *)((longlong)local_118 + lVar4) != (undefined4 *)0x0) {
        *(undefined4 *)((longlong)local_118 + lVar4) = 0xcccc;
        _Dst = (uint *)((longlong)local_108 + lVar4);
        puVar13 = auStack_138 + lVar4;
      }
    }
    else {
      _Dst = malloc(uVar11);
      puVar13 = auStack_138;
      if (_Dst != (uint *)0x0) {
        *_Dst = 0xdddd;
        _Dst = _Dst + 4;
        puVar13 = auStack_138;
      }
    }
    *(undefined8 *)(puVar13 + -8) = 0x144f3a0cc;
    memset(_Dst,0,sVar17);
    *_Dst = uVar15;
    _Dst[2] = local_118[0];
    uVar1 = *(undefined4 *)(lVar16 + 4);
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar2 = *(code **)(param_1 + 0x88);
    *(undefined8 *)(puVar13 + -8) = 0x144f3a0e9;
    iVar6 = (*pcVar2)(uVar3,uVar1,_Dst);
    iVar5 = 0;
    if ((iVar6 == 0) && (iVar5 = 0, 0 < (int)local_118[0])) {
      uVar8 = (ulonglong)local_118[0];
      uVar11 = uVar12;
      puVar9 = _Dst;
      do {
        puVar10 = puVar9 + 3;
        if ((puVar9[5] != 0) && ((int)uVar11 < (int)*puVar10)) {
          uVar11 = (ulonglong)*puVar10;
        }
        iVar5 = (int)uVar11;
        uVar8 = uVar8 - 1;
        puVar9 = puVar10;
      } while (uVar8 != 0);
    }
    uVar1 = *(undefined4 *)(lVar16 + 4);
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar2 = *(code **)(param_1 + 0x90);
    *(undefined8 *)(puVar13 + -8) = 0x144f3a127;
    iVar6 = (*pcVar2)(uVar3,uVar1,_Dst);
    if ((iVar6 == 0) && (0 < (int)local_118[0])) {
      uVar11 = (ulonglong)local_118[0];
      puVar9 = _Dst;
      do {
        puVar9 = puVar9 + 3;
        uVar7 = *puVar9;
        if ((int)*puVar9 <= (int)(uint)uVar12) {
          uVar7 = (uint)uVar12;
        }
        uVar12 = (ulonglong)uVar7;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    memset(local_118,0,0xd0);
    iVar5 = (*pcVar2)(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar16 + 4),local_118);
    puVar14 = auStack_138;
    if ((iVar5 != 0) || (puVar14 = auStack_138, (int)local_118[0] < 1)) goto LAB_144f3a18f;
    uVar12 = 0;
    uVar7 = 0;
    uVar15 = local_118[0] * 0x10 + 0xc;
    sVar17 = (size_t)(int)uVar15;
    uVar11 = uVar12;
    if (sVar17 < sVar17 + 0x10) {
      uVar11 = sVar17 + 0x10;
    }
    if (uVar11 == 0) {
      _Dst = (uint *)0x0;
      puVar13 = auStack_138;
    }
    else if (uVar11 < 0x401) {
      uVar8 = uVar11 + 0xf;
      if (uVar8 <= uVar11) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar4 = -(uVar8 & 0xfffffffffffffff0);
      _Dst = (uint *)0x0;
      puVar13 = auStack_138 + lVar4;
      if ((undefined4 *)((longlong)local_118 + lVar4) != (undefined4 *)0x0) {
        *(undefined4 *)((longlong)local_118 + lVar4) = 0xcccc;
        _Dst = (uint *)((longlong)local_108 + lVar4);
        puVar13 = auStack_138 + lVar4;
      }
    }
    else {
      _Dst = malloc(uVar11);
      puVar13 = auStack_138;
      if (_Dst != (uint *)0x0) {
        *_Dst = 0xdddd;
        _Dst = _Dst + 4;
        puVar13 = auStack_138;
      }
    }
    *(undefined8 *)(puVar13 + -8) = 0x144f39f3c;
    memset(_Dst,0,sVar17);
    *_Dst = uVar15;
    _Dst[2] = local_118[0];
    uVar1 = *(undefined4 *)(lVar16 + 4);
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar2 = *(code **)(param_1 + 0xa8);
    *(undefined8 *)(puVar13 + -8) = 0x144f39f59;
    iVar6 = (*pcVar2)(uVar3,uVar1,_Dst);
    iVar5 = 0;
    if ((iVar6 == 0) && (iVar5 = 0, 0 < (int)local_118[0])) {
      puVar9 = _Dst + 3;
      uVar8 = (ulonglong)local_118[0];
      uVar11 = uVar12;
      do {
        if (((puVar9[2] != 0) || ((*(byte *)(param_2 + 0xc) & 1) != 0)) &&
           ((int)uVar11 < (int)*puVar9)) {
          uVar11 = (ulonglong)*puVar9;
        }
        iVar5 = (int)uVar11;
        puVar9 = puVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar1 = *(undefined4 *)(lVar16 + 4);
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar2 = *(code **)(param_1 + 0xb0);
    *(undefined8 *)(puVar13 + -8) = 0x144f39f9e;
    iVar6 = (*pcVar2)(uVar3,uVar1,_Dst);
    if ((iVar6 == 0) && (0 < (int)local_118[0])) {
      puVar9 = _Dst + 3;
      uVar11 = (ulonglong)local_118[0];
      do {
        if (((puVar9[2] != 0) || ((*(byte *)(param_2 + 0xc) & 1) != 0)) &&
           ((int)uVar12 < (int)*puVar9)) {
          uVar12 = (ulonglong)*puVar9;
        }
        uVar7 = (uint)uVar12;
        puVar9 = puVar9 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  *(int *)(param_2 + 0x28) = iVar5 / 100;
  *(int *)(param_2 + 0x2c) = (int)uVar7 / 100;
  puVar14 = puVar13;
  if (_Dst[-4] == 0xdddd) {
    *(undefined8 *)(puVar13 + -8) = 0x144f3a18f;
    free(_Dst + -4);
  }
LAB_144f3a18f:
  uVar11 = local_48 ^ (ulonglong)local_118;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -8) = &UNK_144f3a19e;
  FUN_144d8e3a0(uVar11);
}



// FUNCTION 144f3a1c0 FUN_144f3a1c0 body=373 status=ok
// SIG undefined FUN_144f3a1c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f3a1c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 *_Size;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  puVar9 = auStack_88;
  local_38 = DAT_14c707940 ^ (ulonglong)&local_68;
  puVar10 = auStack_88;
  if ((*(code **)(param_1 + 0x70) == (code *)0x0) ||
     (puVar10 = auStack_88, *(longlong *)(param_1 + 0x78) == 0)) goto LAB_144f3a329;
  lVar11 = (longlong)*(int *)(param_2 + 0x70) * 0x624 + *(longlong *)(param_1 + 0x418);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar5 = (**(code **)(param_1 + 0x70))
                    (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar11 + 4),&local_68);
  puVar10 = auStack_88;
  if ((iVar5 != 0) || (puVar10 = auStack_88, (int)local_60 < 2)) goto LAB_144f3a329;
  puVar6 = (undefined4 *)0x0;
  _Size = (undefined4 *)(longlong)((int)local_60 * 8 + 0x14);
  puVar7 = puVar6;
  if (_Size < _Size + 4) {
    puVar7 = _Size + 4;
  }
  puVar10 = auStack_88;
  if (puVar7 != (undefined4 *)0x0) {
    if (&DAT_00000400 < puVar7) {
      puVar7 = malloc((size_t)puVar7);
      puVar6 = (undefined4 *)0x0;
      puVar10 = auStack_88;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0xdddd;
        goto LAB_144f3a2bd;
      }
    }
    else {
      puVar6 = (undefined4 *)((longlong)puVar7 + 0xf);
      if (puVar6 <= puVar7) {
        puVar6 = (undefined4 *)0xffffffffffffff0;
      }
      lVar4 = -((ulonglong)puVar6 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar4;
      puVar7 = (undefined4 *)((longlong)&local_68 + lVar4);
      puVar6 = (undefined4 *)0x0;
      puVar10 = auStack_88 + lVar4;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0xcccc;
LAB_144f3a2bd:
        puVar6 = puVar7 + 4;
        puVar10 = puVar9;
      }
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x144f3a2ce;
  memset(puVar6,0,(size_t)_Size);
  *puVar6 = (int)local_60;
  uVar1 = *(undefined4 *)(lVar11 + 4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  pcVar3 = *(code **)(param_1 + 0x78);
  *(undefined8 *)(puVar10 + -8) = 0x144f3a2e6;
  iVar5 = (*pcVar3)(uVar2,uVar1,4,puVar6);
  if (iVar5 == 0) {
    *(int *)(param_2 + 0x28) = (int)puVar6[5] / 100;
    *(int *)(param_2 + 0x2c) = (int)puVar6[6] / 100;
  }
  if (puVar6[-4] == 0xdddd) {
    *(undefined8 *)(puVar10 + -8) = 0x144f3a329;
    free(puVar6 + -4);
  }
LAB_144f3a329:
  uVar8 = local_38 ^ (ulonglong)&local_68;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -8) = &UNK_144f3a335;
  FUN_144d8e3a0(uVar8);
}



// FUNCTION 144f3a350 FUN_144f3a350 body=487 status=ok
// SIG undefined FUN_144f3a350(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144f3a350(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_248 [32];
  int *local_228;
  int *local_220;
  int local_218;
  int local_214 [8];
  undefined4 local_1f4;
  undefined4 local_174;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar3 = (longlong)*(int *)(param_2 + 0x70) * 0x624 + *(longlong *)(param_1 + 0x418);
  if (*(code **)(param_1 + 0x60) != (code *)0x0) {
    local_220 = local_214;
    local_228 = local_214 + 2;
    local_214[1] = 0;
    local_218 = 0;
    local_214[2] = 0;
    local_214[0] = 0;
    iVar2 = (**(code **)(param_1 + 0x60))
                      (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar3 + 4),local_214 + 1,
                       &local_218);
    if (((iVar2 == 0) && (0 < local_218)) && (0 < local_214[0])) {
      *(int *)(param_2 + 0x28) = local_218;
      *(int *)(param_2 + 0x2c) = local_214[0];
      if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
        *(int *)(param_2 + 0x28) = local_218 / 100;
        *(int *)(param_2 + 0x2c) = local_214[0] / 100;
      }
      goto LAB_144f3a528;
    }
  }
  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
    local_228 = &local_218;
    local_214[0] = 0;
    local_214[1] = 0;
    local_218 = 0;
    iVar2 = (**(code **)(param_1 + 0x68))
                      (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar3 + 4),local_214,
                       local_214 + 1);
    if (((iVar2 == 0) || ((*(byte *)(param_2 + 0xc) & 1) != 0)) &&
       (((*(byte *)(param_2 + 0xc) & 1) != 0 || (local_214[0] != 0)))) {
      if (local_218 == 8) {
        pcVar1 = *(code **)(param_1 + 0xb8);
        if (pcVar1 != (code *)0x0) {
          iVar2 = *(int *)(param_2 + 0x70);
          lVar3 = *(longlong *)(param_1 + 0x418);
          memset(local_214 + 4,0,0x1d4);
          local_214[3] = 0x1d;
          iVar2 = (*pcVar1)(*(undefined8 *)(param_1 + 8),
                            *(undefined4 *)((longlong)iVar2 * 0x624 + lVar3 + 4),local_214 + 3);
          if (iVar2 == 0) {
            if ((local_214[4] & 1U) != 0) {
              *(undefined4 *)(param_2 + 0x28) = local_1f4;
            }
            if ((local_214[4] & 4U) != 0) {
              *(undefined4 *)(param_2 + 0x2c) = local_174;
            }
          }
        }
      }
      else if (local_218 == 7) {
        FUN_144f39e10(param_1,param_2);
      }
      else if (local_218 - 5U < 2) {
        FUN_144f3a1c0(param_1,param_2);
      }
    }
  }
LAB_144f3a528:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_248);
}



// FUNCTION 144f3a550 FUN_144f3a550 body=1154 status=ok
// SIG undefined FUN_144f3a550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f3a550(ulonglong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  FARPROC pFVar5;
  INT_PTR IVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_f618 [32];
  ulonglong local_f5f8;
  HMODULE local_f5f0;
  undefined4 local_f5e8;
  undefined4 local_f5e4;
  undefined1 *local_f5e0;
  undefined8 local_f5d8;
  undefined4 local_f5d0;
  undefined4 local_f5cc;
  undefined8 *local_f5c8;
  undefined8 local_f5c0;
  undefined8 local_f5b8;
  undefined8 local_f5b0;
  undefined8 local_f5a8;
  undefined8 local_f598;
  undefined8 local_f590;
  undefined8 local_f588;
  undefined8 local_f580;
  undefined8 local_f578;
  undefined8 local_f570;
  undefined8 local_f568;
  undefined8 local_f560;
  int local_f558;
  undefined4 local_f554 [83];
  undefined1 local_f408 [608];
  undefined1 local_f1a8 [8];
  uint local_f1a0;
  uint auStack_dfb4 [92];
  uint auStack_de44 [144];
  byte abStack_dc04 [28];
  int aiStack_dbe8 [51];
  byte abStack_db1c [28];
  int aiStack_db00 [13998];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f618;
  local_f5f8 = param_1;
  hModule = LoadLibraryA("gdi32.dll");
  local_f5f0 = hModule;
  if (hModule != (HMODULE)0x0) {
    memset(&local_f558,0,0x144);
    pFVar4 = GetProcAddress(hModule,"D3DKMTEnumAdapters");
    pFVar5 = GetProcAddress(hModule,"D3DKMTQueryAdapterInfo");
    if ((((pFVar4 != (FARPROC)0x0) && (pFVar5 != (FARPROC)0x0)) &&
        (IVar6 = (*pFVar4)(&local_f558), -1 < (int)IVar6)) && (iVar11 = 0, 0 < local_f558)) {
      iVar10 = 3;
      lVar7 = (longlong)*(int *)(param_2 + 0x70) * 0x624 + *(longlong *)(param_1 + 0x418);
      puVar8 = local_f554;
      do {
        local_f5c0 = 0x18;
        local_f5b8 = 0;
        local_f5b0 = 0;
        local_f5a8 = 0;
        local_f5d0 = *puVar8;
        local_f5c8 = &local_f5b8;
        local_f5cc = 3;
        IVar6 = (*pFVar5)(&local_f5d0);
        if ((int)IVar6 == 0) {
          *(undefined8 *)(param_2 + 0x38) = local_f5b8;
          *(undefined8 *)(param_2 + 0x40) = local_f5a8;
        }
        memset(local_f408,0,0x260);
        local_f5e8 = *puVar8;
        local_f5e0 = local_f408;
        local_f5e4 = 0;
        local_f5d8 = 0x260;
        IVar6 = (*pFVar5)(&local_f5e8);
        if ((int)IVar6 == -0x3fffffdd) {
          local_f5e0 = local_f1a8;
          local_f5d8 = CONCAT44(local_f5d8._4_4_,0x4360);
          memset(local_f1a8,0,0x4360);
          IVar6 = (*pFVar5)(&local_f5e8);
          iVar3 = (int)IVar6;
          if (1 < local_f1a0) {
            uVar2 = local_f1a0 * 0x3a00 + 0x960;
            local_f5d8 = CONCAT44(local_f5d8._4_4_,uVar2);
            memset(local_f1a8,0,(ulonglong)uVar2);
            IVar6 = (*pFVar5)(&local_f5e8);
            iVar3 = (int)IVar6;
          }
          param_1 = local_f5f8;
          if ((iVar3 == 0) && (uVar9 = 0, local_f1a0 != 0)) {
            do {
              uVar2 = auStack_dfb4[uVar9 * 0xe80];
              if ((((uVar2 & 0xff) == *(uint *)(lVar7 + 0x108)) &&
                  ((uVar2 >> 0xd & 7) == *(uint *)(lVar7 + 0x110))) &&
                 ((uVar2 >> 8 & 0x1f) == *(uint *)(lVar7 + 0x10c))) {
                uVar2 = auStack_de44[uVar9 * 0xe80];
                uVar1 = auStack_de44[uVar9 * 0xe80 + 1];
                if (uVar2 - 0x6e < 0x22) {
                  if ((uVar2 < 0x8d) || ((abStack_dc04[uVar9 * 0x3a00] & 1) == 0)) {
                    if ((abStack_db1c[uVar9 * 0x3a00] & 2) == 0) goto LAB_144f3a7e2;
                    iVar11 = aiStack_db00[uVar9 * 0xe80];
                    iVar3 = aiStack_db00[uVar9 * 0xe80 + 1];
                  }
                  else {
                    iVar11 = aiStack_dbe8[uVar9 * 0xe80];
                    iVar3 = aiStack_dbe8[uVar9 * 0xe80 + 1];
                  }
                  *(int *)(param_2 + 0x24) = iVar3 * iVar11 * 4;
                  if (uVar2 == 0x6e) {
                    *(undefined4 *)(param_2 + 8) = 2;
                  }
                  else if ((uVar2 - 0x78 < 0x10) && ((0x8021U >> (uVar2 - 0x78 & 0x1f) & 1) != 0)) {
LAB_144f3a937:
                    *(int *)(param_2 + 8) = iVar10;
                    if ((uVar2 - 0x7d < 0x16) && ((0x2a0401U >> (uVar2 - 0x7d & 0x1f) & 1) != 0)) {
                      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 1;
                    }
                  }
                  else if (uVar2 == 0x8c) {
                    *(undefined4 *)(param_2 + 8) = 4;
                  }
                  else {
                    if (uVar2 != 0x82) {
                      if (uVar2 - 0x8d < 2) {
                        iVar10 = 6;
                      }
                      else {
                        iVar10 = 0;
                        if ((uVar2 - 0x8f & 0xfffffffd) == 0) {
                          iVar10 = (uVar1 - 0x28 < 0xa8) + 7;
                        }
                      }
                      goto LAB_144f3a937;
                    }
                    *(uint *)(param_2 + 8) = 5 - (uint)(uVar1 < 0x50);
                  }
                  if (*(code **)(local_f5f8 + 0x48) != (code *)0x0) {
                    local_f598 = 0;
                    local_f590 = 0;
                    local_f588 = 0;
                    local_f580 = 0;
                    local_f578 = 0;
                    local_f570 = 0;
                    local_f568 = 0;
                    local_f560 = 0;
                    iVar11 = (**(code **)(local_f5f8 + 0x48))
                                       (*(undefined8 *)(local_f5f8 + 8),*(undefined4 *)(lVar7 + 4),
                                        &local_f598);
                    if (iVar11 == 0) {
                      if (*(int *)(param_2 + 8) < 7) {
                        *(undefined4 *)(param_2 + 0x20) = 0;
                        *(int *)(param_2 + 0x1c) = local_f598._4_4_;
                      }
                      else {
                        *(int *)(param_2 + 0x20) = local_f598._4_4_;
                        *(int *)(param_2 + 0x1c) = local_f598._4_4_ * 2;
                      }
                    }
                  }
                }
                goto LAB_144f3a810;
              }
LAB_144f3a7e2:
              uVar2 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar2;
            } while (uVar2 < local_f1a0);
          }
        }
        iVar11 = iVar11 + 1;
        puVar8 = puVar8 + 5;
        param_1 = local_f5f8;
      } while (iVar11 < local_f558);
    }
LAB_144f3a810:
    FreeLibrary(local_f5f0);
  }
  if (((*(byte *)(param_2 + 0xc) & 1) == 0) && (*(code **)(param_1 + 0x58) != (code *)0x0)) {
    local_f5f8 = local_f5f8 & 0xffffffff00000000;
    local_f5f0 = (HMODULE)((ulonglong)local_f5f0 & 0xffffffff00000000);
    iVar11 = (**(code **)(param_1 + 0x58))
                       (*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_2 + 0x70),&local_f5f8,
                        &local_f5f0);
    if (iVar11 == 0) {
      if (((uint)local_f5f0 & (uint)local_f5f8 & 1) == 0) {
        *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f618);
}



// FUNCTION 144f3a9e0 FUN_144f3a9e0 body=934 status=ok
// SIG undefined FUN_144f3a9e0(void)

void FUN_144f3a9e0(int *param_1,int *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int local_res8 [2];
  int *local_38;
  int *local_30;
  
  lVar3 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar3 = lVar3 >> 2;
    if (lVar3 < 0x21) {
LAB_144f3aaa0:
      if (((1 < lVar3) && (param_1 != param_2)) && (piVar13 = param_1 + 1, piVar13 != param_2)) {
        piVar6 = piVar13;
        do {
          iVar1 = *piVar6;
          piVar2 = piVar6 + -1;
          lVar3 = (longlong)iVar1 * 0x624;
          uVar8 = (longlong)*(int *)(lVar3 + 0x10c + param_4) << 0x20 |
                  (longlong)*(int *)(lVar3 + 0x108 + param_4);
          if (uVar8 < (ulonglong)
                      ((longlong)*(int *)((longlong)*param_1 * 0x624 + 0x10c + param_4) << 0x20 |
                      (longlong)*(int *)((longlong)*param_1 * 0x624 + 0x108 + param_4))) {
            memmove(piVar13,param_1,(longlong)piVar2 + (4 - (longlong)param_1));
            *param_1 = iVar1;
          }
          else {
            lVar3 = (longlong)*piVar2;
            piVar12 = piVar6;
            if (uVar8 < (ulonglong)
                        ((longlong)*(int *)(lVar3 * 0x624 + 0x10c + param_4) << 0x20 |
                        (longlong)*(int *)(lVar3 * 0x624 + 0x108 + param_4))) {
              lVar10 = (longlong)iVar1 * 0x624;
              piVar11 = piVar6;
              do {
                piVar12 = piVar2;
                *piVar11 = (int)lVar3;
                lVar3 = (longlong)piVar12[-1];
                piVar2 = piVar12 + -1;
                piVar11 = piVar12;
              } while ((ulonglong)
                       ((longlong)*(int *)(lVar10 + 0x10c + param_4) << 0x20 |
                       (longlong)*(int *)(lVar10 + 0x108 + param_4)) <
                       (ulonglong)
                       ((longlong)*(int *)(lVar3 * 0x624 + 0x10c + param_4) << 0x20 |
                       (longlong)*(int *)(lVar3 * 0x624 + 0x108 + param_4)));
            }
            *piVar12 = iVar1;
          }
          piVar6 = piVar6 + 1;
        } while (piVar6 != param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar3) {
        uVar8 = (longlong)param_2 - (longlong)param_1 >> 2;
        lVar3 = (longlong)param_2 - (longlong)param_1 >> 3;
        if (0 < lVar3) {
          lVar10 = (longlong)(uVar8 - 1) >> 1;
          do {
            iVar1 = param_1[lVar3 + -1];
            lVar3 = lVar3 + -1;
            lVar9 = lVar3;
            while (lVar9 < lVar10) {
              lVar4 = (2 - (ulonglong)
                           ((ulonglong)
                            ((longlong)
                             *(int *)((longlong)param_1[lVar9 * 2 + 2] * 0x624 + 0x10c + param_4) <<
                             0x20 | (longlong)
                                    *(int *)((longlong)param_1[lVar9 * 2 + 2] * 0x624 + 0x108 +
                                            param_4)) <
                           (ulonglong)
                           ((longlong)
                            *(int *)((longlong)param_1[lVar9 * 2 + 1] * 0x624 + 0x10c + param_4) <<
                            0x20 | (longlong)
                                   *(int *)((longlong)param_1[lVar9 * 2 + 1] * 0x624 + 0x108 +
                                           param_4)))) + lVar9 * 2;
              param_1[lVar9] = param_1[lVar4];
              lVar9 = lVar4;
            }
            if ((lVar9 == lVar10) && ((uVar8 & 1) == 0)) {
              param_1[lVar9] = param_1[uVar8 - 1];
              lVar9 = uVar8 - 1;
            }
            if (lVar3 < lVar9) {
              lVar4 = (longlong)iVar1 * 0x624;
              do {
                lVar7 = lVar9 + -1 >> 1;
                lVar5 = (longlong)param_1[lVar7] * 0x624;
                if ((ulonglong)
                    ((longlong)*(int *)(lVar4 + 0x10c + param_4) << 0x20 |
                    (longlong)*(int *)(lVar4 + 0x108 + param_4)) <=
                    (ulonglong)
                    ((longlong)*(int *)(lVar5 + 0x10c + param_4) << 0x20 |
                    (longlong)*(int *)(lVar5 + 0x108 + param_4))) break;
                param_1[lVar9] = param_1[lVar7];
                lVar9 = lVar7;
              } while (lVar3 < lVar7);
            }
            param_1[lVar9] = iVar1;
          } while (0 < lVar3);
        }
        if ((longlong)uVar8 < 2) {
          return;
        }
        param_2 = param_2 + -1;
        do {
          if (1 < (longlong)uVar8) {
            local_res8[0] = *param_2;
            *param_2 = *param_1;
            FUN_144f3b0b0(param_1,0,(longlong)param_2 - (longlong)param_1 >> 2,local_res8,param_4);
          }
          param_2 = param_2 + -1;
          uVar8 = (4 - (longlong)param_1) + (longlong)param_2 >> 2;
        } while (1 < (longlong)uVar8);
        return;
      }
      goto LAB_144f3aaa0;
    }
    FUN_144f3ad90(&local_38,param_1,param_2,param_4);
    piVar6 = local_30;
    piVar13 = local_38;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_38 - (longlong)param_1 & 0xfffffffffffffffcU) <
        (longlong)((longlong)param_2 - (longlong)local_30 & 0xfffffffffffffffcU)) {
      FUN_144f3a9e0(param_1,local_38,param_3,param_4);
      param_1 = piVar6;
      piVar13 = param_2;
    }
    else {
      FUN_144f3a9e0(local_30,param_2,param_3,param_4);
    }
    lVar3 = (longlong)piVar13 - (longlong)param_1;
    param_2 = piVar13;
  } while( true );
}



// FUNCTION 144f3ad90 FUN_144f3ad90 body=791 status=ok
// SIG undefined FUN_144f3ad90(void)

undefined8 * FUN_144f3ad90(undefined8 *param_1,int *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  piVar5 = param_3 + -1;
  piVar9 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 3);
  lVar2 = (longlong)piVar5 - (longlong)param_2 >> 2;
  if (lVar2 < 0x29) {
    FUN_144f3b200(param_2,piVar9,piVar5);
  }
  else {
    lVar2 = lVar2 + 1 >> 3;
    FUN_144f3b200(param_2,param_2 + lVar2,param_2 + lVar2 * 2);
    FUN_144f3b200(piVar9 + -lVar2,piVar9,piVar9 + lVar2,param_4);
    FUN_144f3b200(param_3 + -1 + lVar2 * -2,piVar5 + -lVar2,param_3 + -1,param_4);
    FUN_144f3b200(param_2 + lVar2,piVar9,piVar5 + -lVar2,param_4);
  }
  piVar5 = piVar9 + 1;
  for (; param_2 < piVar9; piVar9 = piVar9 + -1) {
    uVar4 = (longlong)*(int *)((longlong)*piVar9 * 0x624 + 0x10c + param_4) << 0x20 |
            (longlong)*(int *)((longlong)*piVar9 * 0x624 + 0x108 + param_4);
    uVar3 = (longlong)*(int *)((longlong)piVar9[-1] * 0x624 + 0x10c + param_4) << 0x20 |
            (longlong)*(int *)((longlong)piVar9[-1] * 0x624 + 0x108 + param_4);
    if ((uVar3 < uVar4) || (uVar4 < uVar3)) break;
  }
  piVar6 = piVar5;
  piVar7 = piVar9;
  if (piVar5 < param_3) {
    uVar3 = (longlong)*(int *)((longlong)*piVar9 * 0x624 + 0x10c + param_4) << 0x20 |
            (longlong)*(int *)((longlong)*piVar9 * 0x624 + 0x108 + param_4);
    do {
      uVar4 = (longlong)*(int *)((longlong)*piVar5 * 0x624 + 0x10c + param_4) << 0x20 |
              (longlong)*(int *)((longlong)*piVar5 * 0x624 + 0x108 + param_4);
      piVar6 = piVar5;
      if ((uVar4 < uVar3) || (uVar3 < uVar4)) break;
      piVar5 = piVar5 + 1;
      piVar6 = piVar5;
    } while (piVar5 < param_3);
  }
joined_r0x000144f3af2a:
  do {
    piVar8 = piVar7;
    if (param_3 <= piVar5) {
joined_r0x000144f3af96:
      for (; param_2 < piVar7; piVar7 = piVar7 + -1) {
        piVar8 = piVar8 + -1;
        lVar2 = (longlong)*piVar8 * 0x624;
        uVar4 = (longlong)*(int *)((longlong)*piVar9 * 0x624 + 0x10c + param_4) << 0x20 |
                (longlong)*(int *)((longlong)*piVar9 * 0x624 + 0x108 + param_4);
        uVar3 = (longlong)*(int *)(lVar2 + 0x10c + param_4) << 0x20 |
                (longlong)*(int *)(lVar2 + 0x108 + param_4);
        if (uVar4 <= uVar3) {
          if (uVar4 < uVar3) break;
          piVar9 = piVar9 + -1;
          if (piVar9 != piVar8) {
            iVar1 = *piVar9;
            *piVar9 = *piVar8;
            *piVar8 = iVar1;
          }
        }
      }
      if (piVar7 == param_2) {
        if (piVar5 == param_3) {
          *param_1 = piVar9;
          param_1[1] = piVar6;
          return param_1;
        }
        if (piVar6 != piVar5) {
          iVar1 = *piVar9;
          *piVar9 = *piVar6;
          *piVar6 = iVar1;
        }
        iVar1 = *piVar9;
        *piVar9 = *piVar5;
        piVar9 = piVar9 + 1;
        *piVar5 = iVar1;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      else {
        piVar7 = piVar7 + -1;
        if (piVar5 == param_3) {
          piVar9 = piVar9 + -1;
          if (piVar7 != piVar9) {
            iVar1 = *piVar7;
            *piVar7 = *piVar9;
            *piVar9 = iVar1;
          }
          iVar1 = *piVar9;
          *piVar9 = piVar6[-1];
          piVar6[-1] = iVar1;
          piVar6 = piVar6 + -1;
        }
        else {
          iVar1 = *piVar5;
          *piVar5 = *piVar7;
          piVar5 = piVar5 + 1;
          *piVar7 = iVar1;
        }
      }
      goto joined_r0x000144f3af2a;
    }
    lVar2 = (longlong)*piVar5 * 0x624;
    uVar4 = (longlong)*(int *)(lVar2 + 0x10c + param_4) << 0x20 |
            (longlong)*(int *)(lVar2 + 0x108 + param_4);
    uVar3 = (longlong)*(int *)((longlong)*piVar9 * 0x624 + 0x10c + param_4) << 0x20 |
            (longlong)*(int *)((longlong)*piVar9 * 0x624 + 0x108 + param_4);
    if (uVar4 <= uVar3) {
      if (uVar4 < uVar3) goto joined_r0x000144f3af96;
      if (piVar6 != piVar5) {
        iVar1 = *piVar6;
        *piVar6 = *piVar5;
        *piVar5 = iVar1;
      }
      piVar6 = piVar6 + 1;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}



// FUNCTION 144f3b0b0 FUN_144f3b0b0 body=322 status=ok
// SIG undefined FUN_144f3b0b0(void)

void FUN_144f3b0b0(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,longlong param_5
                  )

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (longlong)(param_3 - 1) >> 1;
  lVar2 = param_2;
  while (lVar2 < lVar3) {
    lVar5 = (longlong)*(int *)(param_1 + 8 + lVar2 * 8) * 0x624;
    lVar4 = (longlong)*(int *)(param_1 + 4 + lVar2 * 8) * 0x624;
    lVar4 = (2 - (ulonglong)
                 ((ulonglong)
                  ((longlong)*(int *)(lVar5 + 0x10c + param_5) << 0x20 |
                  (longlong)*(int *)(lVar5 + 0x108 + param_5)) <
                 (ulonglong)
                 ((longlong)*(int *)(lVar4 + 0x10c + param_5) << 0x20 |
                 (longlong)*(int *)(lVar4 + 0x108 + param_5)))) + lVar2 * 2;
    *(undefined4 *)(param_1 + lVar2 * 4) = *(undefined4 *)(param_1 + lVar4 * 4);
    lVar2 = lVar4;
  }
  if ((lVar2 == lVar3) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar2 = param_3 - 1;
  }
  if (param_2 < lVar2) {
    do {
      lVar4 = lVar2 + -1 >> 1;
      iVar1 = *(int *)(param_1 + lVar4 * 4);
      lVar3 = (longlong)iVar1 * 0x624;
      if ((ulonglong)
          ((longlong)*(int *)((longlong)*param_4 * 0x624 + 0x10c + param_5) << 0x20 |
          (longlong)*(int *)((longlong)*param_4 * 0x624 + 0x108 + param_5)) <=
          (ulonglong)
          ((longlong)*(int *)(lVar3 + 0x10c + param_5) << 0x20 |
          (longlong)*(int *)(lVar3 + 0x108 + param_5))) goto LAB_144f3b1d4;
      *(int *)(param_1 + lVar2 * 4) = iVar1;
      lVar2 = lVar4;
    } while (param_2 < lVar4);
    *(int *)(param_1 + lVar4 * 4) = *param_4;
  }
  else {
LAB_144f3b1d4:
    *(int *)(param_1 + lVar2 * 4) = *param_4;
  }
  return;
}



// FUNCTION 144f3b200 FUN_144f3b200 body=281 status=ok
// SIG undefined FUN_144f3b200(void)

void FUN_144f3b200(int *param_1,int *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *param_2;
  lVar4 = (longlong)*param_1 * 0x624;
  if ((ulonglong)
      ((longlong)*(int *)((longlong)iVar2 * 0x624 + 0x10c + param_4) << 0x20 |
      (longlong)*(int *)((longlong)iVar2 * 0x624 + 0x108 + param_4)) <
      (ulonglong)
      ((longlong)*(int *)(lVar4 + 0x10c + param_4) << 0x20 |
      (longlong)*(int *)(lVar4 + 0x108 + param_4))) {
    *param_2 = *param_1;
    *param_1 = iVar2;
    iVar2 = *param_2;
  }
  iVar1 = *param_3;
  lVar4 = (longlong)iVar1 * 0x624;
  if ((ulonglong)
      ((longlong)*(int *)(lVar4 + 0x10c + param_4) << 0x20 |
      (longlong)*(int *)(lVar4 + 0x108 + param_4)) <
      (ulonglong)
      ((longlong)*(int *)((longlong)iVar2 * 0x624 + 0x10c + param_4) << 0x20 |
      (longlong)*(int *)((longlong)iVar2 * 0x624 + 0x108 + param_4))) {
    *param_3 = iVar2;
    *param_2 = iVar1;
    lVar3 = (longlong)iVar1 * 0x624;
    lVar4 = (longlong)*param_1 * 0x624;
    if ((ulonglong)
        ((longlong)*(int *)(lVar3 + 0x10c + param_4) << 0x20 |
        (longlong)*(int *)(lVar3 + 0x108 + param_4)) <
        (ulonglong)
        ((longlong)*(int *)(lVar4 + 0x10c + param_4) << 0x20 |
        (longlong)*(int *)(lVar4 + 0x108 + param_4))) {
      *param_2 = *param_1;
      *param_1 = iVar1;
    }
  }
  return;
}



// FUNCTION 144f3b320 agsSetDisplayMode body=413 status=ok
// SIG undefined agsSetDisplayMode(void)

void agsSetDisplayMode(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
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
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  ulonglong local_48;
  
                    /* 0x4f3b320  467  agsSetDisplayMode */
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) && (param_4 != (undefined4 *)0x0)) &&
      ((-1 < param_2 && (param_2 < *(int *)(param_1 + 0x410))))) &&
     ((-1 < param_3 &&
      ((lVar2 = (longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x408),
       param_3 < *(int *)(lVar2 + 0x48) &&
       (pcVar1 = *(code **)(param_1 + 0xf8), pcVar1 != (code *)0x0)))))) {
    memset(&local_c4,0,0x74);
    local_c8 = 2;
    switch(*param_4) {
    case 0:
      local_c4 = 1;
      local_c0 = 1;
      break;
    case 1:
      local_c4 = 4;
      local_c0 = 8;
      break;
    case 2:
    case 3:
      local_c4 = 0x20;
      local_c0 = 0x40;
      break;
    case 4:
      local_c4 = 0x80;
      local_c0 = 0x80;
      break;
    case 5:
      local_c4 = 0x40;
      local_c0 = 0x200;
      break;
    default:
      goto switchD_144f3b3eb_default;
    }
    local_98 = *(undefined8 *)(param_4 + 2);
    uStack_90 = *(undefined8 *)(param_4 + 4);
    local_b8 = *(undefined8 *)(param_4 + 6);
    uStack_b0 = *(undefined8 *)(param_4 + 8);
    local_58 = (uint)((*(byte *)(param_4 + 0x1a) & 1) != 0);
    local_a8 = *(undefined8 *)(param_4 + 10);
    uStack_a0 = *(undefined8 *)(param_4 + 0xc);
    local_88 = *(undefined8 *)(param_4 + 0xe);
    uStack_80 = *(undefined8 *)(param_4 + 0x10);
    local_78 = *(undefined8 *)(param_4 + 0x12);
    uStack_70 = *(undefined8 *)(param_4 + 0x14);
    local_68 = param_4[0x16];
    uStack_64 = param_4[0x17];
    uStack_60 = param_4[0x18];
    uStack_5c = param_4[0x19];
    (*pcVar1)(*(undefined8 *)(param_1 + 8),
              *(undefined4 *)
               ((longlong)*(int *)(lVar2 + 0x70) * 0x624 + 4 + *(longlong *)(param_1 + 0x418)),
              *(undefined4 *)((longlong)param_3 * 0x1d8 + 0x1c8 + *(longlong *)(lVar2 + 0x50)),
              &local_c8);
  }
switchD_144f3b3eb_default:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144f3b4f0 FUN_144f3b4f0 body=402 status=ok
// SIG undefined FUN_144f3b4f0(void)

void FUN_144f3b4f0(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  CHAR *pCVar4;
  DWORD iDevNum;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1f8 [32];
  _DISPLAY_DEVICEA local_1d8;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x410)) {
    do {
      FUN_144f3b690(param_1,*(longlong *)(param_1 + 0x408) + (longlong)iVar6 * 0x78);
      FUN_1452f50e0(param_1,*(longlong *)(param_1 + 0x408) + (longlong)iVar6 * 0x78);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x410));
  }
  local_1d8.cb = 0x1a8;
  iDevNum = 0;
  iVar6 = EnumDisplayDevicesA((LPCSTR)0x0,0,&local_1d8,0);
  do {
    if (iVar6 == 0) {
LAB_144f3b672:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1f8);
    }
    if (((byte)local_1d8.StateFlags & 4) != 0) {
      if (0 < *(int *)(param_1 + 0x410)) {
        lVar8 = 0;
        lVar7 = 0;
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x408) + 0x50);
        do {
          if ((*(byte *)(lVar7 + 0xc + *(longlong *)(param_1 + 0x408)) & 2) != 0) {
            iVar6 = 0;
            if (0 < (int)plVar5[-1]) {
              do {
                pCVar4 = local_1d8.DeviceName;
                lVar9 = (*plVar5 + 0x100 + (longlong)iVar6 * 0x1d8) - (longlong)pCVar4;
                do {
                  cVar2 = *pCVar4;
                  cVar3 = pCVar4[lVar9];
                  if (cVar2 != cVar3) break;
                  pCVar4 = pCVar4 + 1;
                } while (cVar3 != '\0');
                if (cVar2 == cVar3) {
                  puVar1 = (uint *)((longlong)iVar6 * 0x1d8 + 0x120 + *plVar5);
                  *puVar1 = *puVar1 | 1;
                  goto LAB_144f3b672;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < (int)plVar5[-1]);
            }
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x78;
          plVar5 = plVar5 + 0xf;
        } while (lVar8 < *(int *)(param_1 + 0x410));
      }
      goto LAB_144f3b672;
    }
    iDevNum = iDevNum + 1;
    iVar6 = EnumDisplayDevicesA((LPCSTR)0x0,iDevNum,&local_1d8,0);
  } while( true );
}



// FUNCTION 144f3b690 FUN_144f3b690 body=1337 status=ok
// SIG undefined FUN_144f3b690(void)

void FUN_144f3b690(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  byte *pbVar3;
  void *_Dst;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_268 [32];
  longlong *local_248;
  uint local_238 [2];
  longlong local_230;
  longlong local_228;
  int local_220 [2];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8 [272];
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_84;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar11 = (longlong)*(int *)(param_2 + 0x70) * 0x624 + *(longlong *)(param_1 + 0x418);
  *(undefined4 *)(param_2 + 0x48) = 0;
  local_230 = 0;
  local_238[0] = 0;
  local_248 = (longlong *)((ulonglong)local_248 & 0xffffffff00000000);
  iVar2 = (**(code **)(param_1 + 0x108))
                    (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar11 + 4),local_238,&local_230);
  if ((iVar2 == 0) && (uVar5 = (ulonglong)local_238[0], 0 < (int)local_238[0])) {
    pbVar3 = (byte *)(local_230 + 0x224);
    do {
      if ((*pbVar3 & 1) != 0) {
        *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
      }
      pbVar3 = pbVar3 + 0x228;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    _Dst = (void *)FUN_144bcb540((longlong)*(int *)(param_2 + 0x48) * 0x1d8);
    *(void **)(param_2 + 0x50) = _Dst;
    memset(_Dst,0,(longlong)*(int *)(param_2 + 0x48) * 0x1d8);
    uVar10 = 0;
    uVar5 = uVar10;
    uVar13 = uVar10;
    uVar7 = local_238[0];
    if (0 < (int)local_238[0]) {
      do {
        if ((*(byte *)(uVar10 + 0x224 + local_230) & 1) != 0) {
          puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x50) + uVar5);
          *(undefined8 *)((longlong)puVar9 + 0x154) = 0xffffffffffffffff;
          lVar4 = 2;
          *(undefined4 *)(puVar9 + 0x39) = *(undefined4 *)(uVar10 + local_230);
          puVar6 = puVar9;
          puVar8 = (undefined8 *)(local_230 + 0x14 + uVar10);
          do {
            uVar1 = puVar8[1];
            *puVar6 = *puVar8;
            puVar6[1] = uVar1;
            uVar1 = puVar8[3];
            puVar6[2] = puVar8[2];
            puVar6[3] = uVar1;
            uVar1 = puVar8[5];
            puVar6[4] = puVar8[4];
            puVar6[5] = uVar1;
            uVar1 = puVar8[7];
            puVar6[6] = puVar8[6];
            puVar6[7] = uVar1;
            uVar1 = puVar8[9];
            puVar6[8] = puVar8[8];
            puVar6[9] = uVar1;
            uVar1 = puVar8[0xb];
            puVar6[10] = puVar8[10];
            puVar6[0xb] = uVar1;
            uVar1 = puVar8[0xd];
            puVar6[0xc] = puVar8[0xc];
            puVar6[0xd] = uVar1;
            uVar1 = puVar8[0xf];
            puVar6[0xe] = puVar8[0xe];
            puVar6[0xf] = uVar1;
            lVar4 = lVar4 + -1;
            puVar6 = puVar6 + 0x10;
            puVar8 = puVar8 + 0x10;
          } while (lVar4 != 0);
          *(undefined1 *)((longlong)puVar9 + 0xff) = 0;
          iVar2 = *(int *)(uVar10 + 8 + local_230);
          if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x420))) {
            lVar4 = *(longlong *)(param_1 + 0x418);
            puVar6 = (undefined8 *)((longlong)iVar2 * 0x624 + 0x218 + lVar4);
            uVar1 = puVar6[1];
            puVar9[0x20] = *puVar6;
            puVar9[0x21] = uVar1;
            puVar6 = (undefined8 *)((longlong)iVar2 * 0x624 + 0x228 + lVar4);
            uVar1 = puVar6[1];
            puVar9[0x22] = *puVar6;
            puVar9[0x23] = uVar1;
            *(undefined1 *)((longlong)puVar9 + 0x11f) = 0;
          }
          *(int *)((longlong)puVar9 + 0x1cc) = iVar2;
          local_248 = &local_228;
          local_220[0] = 0;
          local_228 = 0;
          iVar2 = (**(code **)(param_1 + 0xe8))
                            (*(undefined8 *)(param_1 + 8),*(undefined4 *)((longlong)puVar9 + 0x1cc),
                             *(undefined4 *)(puVar9 + 0x39),local_220);
          if ((iVar2 == 0) && (0 < local_220[0])) {
            *(undefined4 *)(puVar9 + 0x27) = *(undefined4 *)(local_228 + 0x1c);
            *(undefined4 *)((longlong)puVar9 + 0x13c) = *(undefined4 *)(local_228 + 0x20);
            *(undefined4 *)(puVar9 + 0x2a) = *(undefined4 *)(local_228 + 0x28);
            *(undefined4 *)(puVar9 + 0x26) = *(undefined4 *)(local_228 + 0x14);
            *(undefined4 *)((longlong)puVar9 + 0x134) = *(undefined4 *)(local_228 + 0x18);
            puVar9[0x28] = puVar9[0x26];
            puVar9[0x29] = puVar9[0x27];
          }
          FUN_144bcb560(&local_228);
          memset(local_1f8,0,0x1a0);
          if ((*(code **)(param_1 + 0x100) != (code *)0x0) &&
             (iVar2 = (**(code **)(param_1 + 0x100))
                                (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar11 + 4),
                                 *(undefined4 *)(puVar9 + 0x39),local_1f8), iVar2 == 0)) {
            *(uint *)(puVar9 + 0x24) =
                 *(uint *)(puVar9 + 0x24) ^ (local_84 * 2 ^ *(uint *)(puVar9 + 0x24)) & 2;
            uVar7 = (local_84 * 2 ^ *(uint *)(puVar9 + 0x24)) & 4 ^ *(uint *)(puVar9 + 0x24);
            *(uint *)(puVar9 + 0x24) = uVar7;
            *(uint *)(puVar9 + 0x24) = (local_84 * 4 ^ uVar7) & 0x10 ^ uVar7;
            *(undefined4 *)((longlong)puVar9 + 0x124) = local_e8;
            *(undefined4 *)(puVar9 + 0x25) = local_e4;
            *(float *)((longlong)puVar9 + 300) = (float)local_e0;
            puVar9[0x2c] = (double)local_ac / 10000.0;
            puVar9[0x2d] = (double)local_a8 / 10000.0;
            puVar9[0x2e] = (double)local_a4 / 10000.0;
            puVar9[0x2f] = (double)local_a0 / 10000.0;
            puVar9[0x30] = (double)local_9c / 10000.0;
            puVar9[0x31] = (double)local_98 / 10000.0;
            puVar9[0x32] = (double)local_94 / 10000.0;
            puVar9[0x33] = (double)local_90 / 10000.0;
            puVar9[0x36] = (double)local_c0 / 10000.0;
            puVar9[0x37] = (double)local_b8;
            puVar9[0x38] = (double)local_bc;
          }
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          local_200 = 0;
          if ((((*(code **)(param_1 + 0x110) != (code *)0x0) &&
               (iVar2 = (**(code **)(param_1 + 0x110))
                                  (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar11 + 4),
                                   *(undefined4 *)(puVar9 + 0x39),&local_218), iVar2 == 0)) &&
              (0 < local_218._4_4_)) && (0 < (int)local_210)) {
            *(uint *)(puVar9 + 0x24) = *(uint *)(puVar9 + 0x24) | 8;
          }
          uVar5 = uVar5 + 0x1d8;
          uVar7 = local_238[0];
        }
        uVar12 = (int)uVar13 + 1;
        uVar10 = uVar10 + 0x228;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < (int)uVar7);
    }
  }
  if (local_230 != 0) {
    FUN_144bcb560(&local_230);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_268);
}



// FUNCTION 144f3bbe0 FUN_144f3bbe0 body=146 status=ok
// SIG undefined FUN_144f3bbe0(void)

undefined8 FUN_144f3bbe0(int param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_144f3cd20(0x17,param_2,param_3 + 8);
    if (iVar1 == 1) {
      return 0;
    }
  }
  iVar1 = Ordinal_11(param_2);
  if (iVar1 == -1) {
    lVar2 = Ordinal_52(param_2);
    if ((lVar2 == 0) || (iVar1 = *(int *)**(undefined8 **)(lVar2 + 0x18), iVar1 == -1)) {
      return 0xffffffff;
    }
  }
  *(int *)(param_3 + 4) = iVar1;
  return 0;
}



// FUNCTION 144f3bc80 FUN_144f3bc80 body=85 status=ok
// SIG undefined FUN_144f3bc80(void)

int FUN_144f3bc80(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = rand();
      *(char *)(lVar2 + param_2) = (char)iVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_3);
    return param_3;
  }
  return 0;
}



// FUNCTION 144f3bce0 FUN_144f3bce0 body=284 status=ok
// SIG undefined FUN_144f3bce0(void)

void FUN_144f3bce0(undefined8 param_1,LPCSTR param_2,undefined8 param_3,byte *param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  HANDLE hFile;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 auStackY_288 [32];
  DWORD dwCreationDisposition;
  LARGE_INTEGER local_248 [2];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStackY_288;
  local_248[0].QuadPart = 0;
  MultiByteToWideChar(0xfde9,0,param_2,-1,local_238,0x104);
  bVar4 = (*param_4 & 7) != 0;
  if (bVar4) {
    dwCreationDisposition = 2;
    DVar1 = 0x40000000;
  }
  else {
    dwCreationDisposition = 3;
    DVar1 = 0x80000000;
  }
  hFile = CreateFileW(local_238,DVar1,(uint)!bVar4,(LPSECURITY_ATTRIBUTES)0x0,dwCreationDisposition,
                      0x80,(HANDLE)0x0);
  if ((hFile != (HANDLE)0xffffffffffffffff) && (puVar3 = malloc(0x30), puVar3 != (undefined8 *)0x0))
  {
    *(undefined4 *)(puVar3 + 5) = *(undefined4 *)param_4;
    puVar3[1] = param_1;
    *puVar3 = hFile;
    puVar3[2] = 0;
    DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
    puVar3[4] = (ulonglong)DVar1;
    BVar2 = GetFileSizeEx(hFile,local_248);
    if (BVar2 != 0) {
      *(LARGE_INTEGER *)(puVar3 + 4) = local_248[0];
    }
    puVar3[3] = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStackY_288);
}



// FUNCTION 144f3be10 FUN_144f3be10 body=54 status=ok
// SIG undefined FUN_144f3be10(void)

undefined8 FUN_144f3be10(undefined8 *param_1)

{
  HANDLE hObject;
  
  hObject = *(HANDLE *)*param_1;
  free((undefined8 *)*param_1);
  *param_1 = 0;
  CloseHandle(hObject);
  return 0;
}



// FUNCTION 144f3be50 FUN_144f3be50 body=29 status=ok
// SIG undefined FUN_144f3be50(void)

longlong FUN_144f3be50(undefined8 *param_1,LARGE_INTEGER param_2)

{
  BOOL BVar1;
  
  BVar1 = SetFilePointerEx((HANDLE)*param_1,param_2,(PLARGE_INTEGER)0x0,1);
  return (longlong)BVar1;
}



// FUNCTION 144f3be70 FUN_144f3be70 body=102 status=ok
// SIG undefined FUN_144f3be70(void)

undefined8 FUN_144f3be70(undefined8 *param_1,ulonglong *param_2,LPVOID param_3,DWORD param_4)

{
  BOOL BVar1;
  uint local_res8 [2];
  
  BVar1 = ReadFile((HANDLE)*param_1,param_3,param_4,local_res8,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    *param_2 = 0;
    return 1;
  }
  param_1[3] = param_1[3] + (ulonglong)local_res8[0];
  *param_2 = (ulonglong)local_res8[0];
  return 0;
}



// FUNCTION 144f3bee0 FUN_144f3bee0 body=102 status=ok
// SIG undefined FUN_144f3bee0(void)

undefined8 FUN_144f3bee0(undefined8 *param_1,ulonglong *param_2,LPCVOID param_3,DWORD param_4)

{
  BOOL BVar1;
  uint local_res8 [2];
  
  BVar1 = WriteFile((HANDLE)*param_1,param_3,param_4,local_res8,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    *param_2 = 0;
    return 1;
  }
  param_1[3] = param_1[3] + (ulonglong)local_res8[0];
  *param_2 = (ulonglong)local_res8[0];
  return 0;
}



// FUNCTION 144f3bf50 FUN_144f3bf50 body=103 status=ok
// SIG undefined FUN_144f3bf50(void)

longlong FUN_144f3bf50(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar5 = (ulonglong)
          (((uint)((ulonglong)param_2 >> 0x10) ^ (uint)((ulonglong)param_2 >> 8) ^ (uint)param_2) &
          0x1f);
  iVar1 = *(int *)(param_1 + (uVar5 + 0x18) * 0x10);
  if (0 < iVar1) {
    plVar2 = *(longlong **)(param_1 + 0x178 + uVar5 * 0x10);
    plVar4 = plVar2;
    uVar5 = uVar3;
    do {
      if (*(longlong *)(*plVar4 + 0x178) == param_2) {
        return plVar2[(int)uVar5];
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 1;
    } while ((longlong)uVar3 < (longlong)iVar1);
  }
  return 0;
}



// FUNCTION 144f3bfc0 FUN_144f3bfc0 body=123 status=ok
// SIG undefined FUN_144f3bfc0(void)

undefined8 FUN_144f3bfc0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)
          (((uint)((ulonglong)*(undefined8 *)(param_2 + 0x178) >> 0x10) ^
            (uint)((ulonglong)*(undefined8 *)(param_2 + 0x178) >> 8) ^ *(uint *)(param_2 + 0x178)) &
          0x1f);
  iVar2 = *(int *)(param_1 + (uVar3 + 0x18) * 0x10);
  if (iVar2 == 29999) {
    FUN_144bd5aa0(1,"hash table overflow\n");
    return 1;
  }
  *(longlong *)(*(longlong *)(param_1 + 0x178 + uVar3 * 0x10) + (longlong)iVar2 * 8) = param_2;
  piVar1 = (int *)(param_1 + (uVar3 + 0x18) * 0x10);
  *piVar1 = *piVar1 + 1;
  return 0;
}


