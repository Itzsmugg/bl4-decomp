// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14068ebba FUN_14068ebba body=206 status=ok
// SIG undefined FUN_14068ebba(void)

longlong FUN_14068ebba(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x38;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          if (lVar2 != 0) goto LAB_14068ec19;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x30);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_4;
  FUN_14068ec8a(param_1,&local_1c,param_2,&local_30);
  lVar2 = (longlong)local_1c * 0x38 + *param_1;
LAB_14068ec19:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 0x18;
}



// FUNCTION 14068ec8a FUN_14068ec8a body=927 status=ok
// SIG undefined FUN_14068ec8a(void)

int * FUN_14068ec8a(longlong *param_1,int *param_2,uint param_3,longlong *param_4,char *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  byte bVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  longlong *plVar26;
  int iVar27;
  int iVar28;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar27 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar27 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar27) {
      FUN_1447030e2(param_1,iVar27);
    }
    iVar25 = (int)param_1[5];
    if (iVar25 == 0) {
      iVar17 = -1;
    }
    else {
      iVar17 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar17 = iVar25 + -1;
      }
      iVar17 = iVar17 >> 5;
    }
    plVar26 = param_1 + 2;
    iVar22 = iVar25 + 1;
    iVar28 = iVar25 + 0x1f;
    if (-1 < iVar25) {
      iVar28 = iVar25;
    }
    if (iVar28 >> 5 == iVar17) {
      *(int *)(param_1 + 5) = iVar22;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar25) {
        if (iVar25 + 0x20U < 0xa0) {
          iVar22 = 0x80;
          iVar17 = iVar25;
        }
        else {
          uVar18 = iVar25 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar23 = 4;
            if (4 < uVar18) {
              uVar23 = uVar18;
            }
          }
          else {
            uVar23 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
          }
          uVar24 = FUN_144a3809e(uVar23 << 2,0);
          iVar17 = (int)(uVar24 >> 2);
          iVar22 = -0x20;
          if ((int)uVar18 <= iVar17) {
            iVar22 = iVar17 << 5;
          }
          iVar17 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar22;
        FUN_1446efbd8(plVar26,iVar17);
        iVar22 = (int)param_1[5] + 1;
      }
      iVar17 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar17 = iVar22;
      }
      *(int *)(param_1 + 5) = iVar22;
      if (iVar22 % 0x20 != 0) {
        plVar20 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar20 = plVar26;
        }
        bVar21 = -(char)(iVar22 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar17 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar17 >> 5) * 4) << (bVar21 & 0x1f)) >>
             (bVar21 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar27;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar26 = (longlong *)param_1[4];
    }
    bVar21 = (byte)iVar25 & 0x1f;
    puVar3 = (uint *)((longlong)plVar26 + (longlong)(iVar28 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
  }
  else {
    iVar27 = (int)param_1[6];
    lVar19 = (longlong)iVar27;
    iVar25 = *(int *)(*param_1 + 4 + lVar19 * 0x38);
    *(int *)(param_1 + 6) = iVar25;
    iVar17 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar17;
    if (iVar17 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar25 * 0x38) = 0xffffffff;
    }
  }
  plVar26 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar26 = (longlong *)param_1[4];
  }
  iVar25 = iVar27 + 0x1f;
  if (-1 < iVar27) {
    iVar25 = iVar27;
  }
  puVar3 = (uint *)((longlong)plVar26 + (longlong)(iVar25 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar27 & 0x1f);
  lVar4 = *param_1;
  lVar19 = lVar19 * 0x38;
  plVar26 = (longlong *)(lVar4 + lVar19);
  puVar5 = (undefined8 *)*param_4;
  puVar6 = (undefined4 *)param_4[1];
  *(undefined8 *)(lVar4 + lVar19) = *puVar5;
  *(undefined8 *)(lVar4 + 8 + lVar19) = puVar5[1];
  lVar7 = puVar5[2];
  *(longlong *)(lVar4 + 0x10 + lVar19) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar26[5] = *(longlong *)(puVar6 + 4);
  uVar8 = puVar6[1];
  uVar9 = puVar6[2];
  uVar10 = puVar6[3];
  *(undefined4 *)(plVar26 + 3) = *puVar6;
  *(undefined4 *)((longlong)plVar26 + 0x1c) = uVar8;
  *(undefined4 *)(plVar26 + 4) = uVar9;
  *(undefined4 *)((longlong)plVar26 + 0x24) = uVar10;
  *(undefined4 *)(plVar26 + 6) = 0xffffffff;
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar20 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[8];
    }
    iVar25 = *(int *)((longlong)plVar20 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar25 != -1) {
      do {
        puVar6 = (undefined4 *)(*param_1 + (longlong)iVar25 * 0x38);
        if (*(longlong *)(*param_1 + (longlong)iVar25 * 0x38) == *plVar26) {
          plVar20 = *(longlong **)(puVar6 + 4);
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar20 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
          }
          lVar19 = *plVar26;
          uVar8 = *(undefined4 *)((longlong)plVar26 + 4);
          lVar4 = plVar26[1];
          uVar9 = *(undefined4 *)((longlong)plVar26 + 0xc);
          lVar7 = plVar26[2];
          uVar10 = *(undefined4 *)((longlong)plVar26 + 0x14);
          lVar14 = plVar26[3];
          uVar11 = *(undefined4 *)((longlong)plVar26 + 0x1c);
          uVar12 = *(undefined4 *)((longlong)plVar26 + 0x24);
          lVar15 = plVar26[5];
          uVar13 = *(undefined4 *)((longlong)plVar26 + 0x2c);
          puVar6[8] = (int)plVar26[4];
          puVar6[9] = uVar12;
          puVar6[10] = (int)lVar15;
          puVar6[0xb] = uVar13;
          puVar6[4] = (int)lVar7;
          puVar6[5] = uVar10;
          puVar6[6] = (int)lVar14;
          puVar6[7] = uVar11;
          *puVar6 = (int)lVar19;
          puVar6[1] = uVar8;
          puVar6[2] = (int)lVar4;
          puVar6[3] = uVar9;
          FUN_147fa2ed6(param_1,iVar27);
          cVar16 = '\x01';
          break;
        }
        iVar25 = puVar6[0xc];
        cVar16 = '\0';
      } while (iVar25 != -1);
      goto LAB_14068edbd;
    }
  }
  cVar16 = '\0';
LAB_14068edbd:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar16;
  }
  if (cVar16 == '\0') {
    uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar25 = 1;
    if (3 < uVar18) {
      uVar24 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar25 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar18 < 1) || (iVar25 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      *(uint *)((longlong)plVar26 + 0x34) = param_3;
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = param_1 + 7;
      }
      *(undefined4 *)(plVar26 + 6) =
           *(undefined4 *)
            ((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar26 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar26 = param_1 + 7;
      }
      *(int *)((longlong)plVar26 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar27;
    }
    else {
      *(int *)(param_1 + 9) = iVar25;
      FUN_145733cd6(param_1);
    }
  }
  *param_2 = iVar27;
  return param_2;
}



// FUNCTION 14068f02a FUN_14068f02a body=1544 status=ok
// SIG undefined FUN_14068f02a(void)

void FUN_14068f02a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  DWORD DVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong *plVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  undefined8 uStack_380;
  undefined8 *local_370;
  undefined8 local_368;
  longlong local_360;
  char local_358;
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar26 = DAT_14c7585d0 != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar26) {
      DVar4 = DAT_14c7585d0;
      DVar3 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar3;
    UNLOCK();
    if (bVar26) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar4;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_348);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_370 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_368 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_360 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_358 = '\0';
  local_350 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_370;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_388 = 0;
  uStack_380 = 0;
  lVar5 = (longlong)*(int *)(param_1 + 0x10);
  if (lVar5 != 0) {
    plVar6 = *(longlong **)(param_1 + 8);
    lVar12 = 0;
    iVar7 = 0;
    do {
      iVar7 = iVar7 + *(int *)(*(longlong *)((longlong)plVar6 + lVar12) + 0x28);
      lVar12 = lVar12 + 8;
    } while (lVar5 * 8 - lVar12 != 0);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (iVar7 != 0) {
      FUN_140907478(&local_388);
      lVar5 = (longlong)*(int *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_14068f18b;
      plVar6 = *(longlong **)(param_1 + 8);
    }
    plVar14 = plVar6 + lVar5;
    do {
      uVar20 = uStack_380;
      lVar5 = *plVar6;
      uVar19 = *(uint *)(lVar5 + 0x28);
      if ((longlong)(int)uVar19 != 0) {
        iVar7 = (int)uStack_380;
        lVar12 = (longlong)(int)uStack_380;
        uStack_380 = CONCAT44(uStack_380._4_4_,(int)uStack_380 + uVar19);
        if ((uint)(uStack_380._4_4_ - iVar7) < uVar19) {
          FUN_146d5f0c2(&local_388,uVar20 & 0xffffffff);
        }
        memcpy((void *)(lVar12 * 8 + local_388),*(void **)(lVar5 + 0x20),(longlong)(int)uVar19 << 3)
        ;
        lVar5 = *plVar6;
      }
      if (*(int *)(lVar5 + 0x2c) < 0) {
        *(undefined4 *)(lVar5 + 0x28) = 0;
        FUN_14018d42e(lVar5 + 0x20);
      }
      else {
        *(undefined4 *)(lVar5 + 0x28) = 0;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar14);
  }
LAB_14068f18b:
  lVar5 = local_388;
  iVar7 = (int)uStack_380;
  if ((*(byte *)(param_1 + 0x54) & 1 < (int)uStack_380) != 0) {
    uVar20 = uStack_380 & 0xffffffff;
    memset(local_338,0,0x2f0);
    local_348 = lVar5;
    local_340 = lVar5 + uVar20 * 8 + -8;
    fVar27 = logf((float)iVar7);
    local_338[0] = (int)(longlong)(fVar27 + fVar27);
    plVar6 = &local_348;
    do {
      plVar8 = (longlong *)*plVar6;
      plVar9 = (longlong *)plVar6[1];
      iVar7 = (int)plVar6[2];
      iVar11 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar8) >> 3);
      uVar20 = (ulonglong)(iVar11 + 1);
      plVar14 = plVar9;
      plVar24 = plVar8;
      if (iVar7 != 0) {
LAB_14068f211:
        plVar10 = plVar8;
        if (8 < (int)(uint)uVar20) {
          uVar19 = (uint)uVar20 >> 1;
          lVar5 = plVar10[uVar19];
          plVar10[uVar19] = *plVar10;
          *plVar10 = lVar5;
          plVar21 = plVar14 + 1;
          plVar8 = plVar10;
          do {
            plVar2 = plVar8 + 1;
            plVar15 = plVar8 + 1;
            do {
              plVar25 = plVar15;
              plVar8 = plVar2;
              if (plVar14 < plVar8) break;
              plVar2 = plVar8 + 1;
              plVar15 = plVar25 + 1;
            } while (*(ulonglong *)(*plVar8 + 0x28) <= *(ulonglong *)(*plVar10 + 0x28));
            plVar2 = plVar21 + -2;
            do {
              plVar15 = plVar21;
              plVar22 = plVar2;
              plVar21 = plVar15 + -1;
              if (plVar21 <= plVar10) break;
              plVar2 = plVar22 + -1;
            } while (*(ulonglong *)(*plVar10 + 0x28) <= *(ulonglong *)(*plVar21 + 0x28));
            if (plVar21 < plVar8) goto LAB_14068f2a2;
            lVar5 = *plVar8;
            *plVar8 = *plVar21;
            *plVar21 = lVar5;
          } while( true );
        }
        if (plVar10 < plVar14) {
          do {
            plVar8 = plVar10;
            if (plVar10 + 1 <= plVar14) {
              lVar5 = *plVar10;
              plVar9 = plVar10 + 1;
              do {
                plVar24 = plVar9;
                lVar12 = *plVar9;
                if (*(ulonglong *)(*plVar9 + 0x28) <= *(ulonglong *)(lVar5 + 0x28)) {
                  plVar24 = plVar8;
                  lVar12 = lVar5;
                }
                lVar5 = lVar12;
                plVar8 = plVar24;
                plVar9 = plVar9 + 1;
              } while (plVar9 <= plVar14);
            }
            lVar5 = *plVar8;
            *plVar8 = *plVar14;
            *plVar14 = lVar5;
            plVar14 = plVar14 + -1;
          } while (plVar10 < plVar14);
        }
        goto LAB_14068f4d4;
      }
LAB_14068f336:
      iVar7 = (int)uVar20;
      if (iVar7 != 0) {
        iVar11 = (iVar11 - (iVar11 + -1 >> 0x1f)) + -1 >> 1;
        iVar18 = iVar11;
joined_r0x00014068f35d:
        do {
          iVar17 = iVar11 * 2 + 1;
          if (iVar17 < iVar7) {
            iVar16 = iVar11 * 2 + 2;
            if ((iVar16 < iVar7) &&
               (*(ulonglong *)(plVar8[iVar17] + 0x28) <= *(ulonglong *)(plVar8[iVar16] + 0x28))) {
              iVar17 = iVar16;
            }
            lVar5 = plVar8[iVar11];
            if (*(ulonglong *)(lVar5 + 0x28) < *(ulonglong *)(plVar8[iVar17] + 0x28)) {
              plVar8[iVar11] = plVar8[iVar17];
              plVar8[iVar17] = lVar5;
              iVar11 = iVar17;
              goto joined_r0x00014068f35d;
            }
          }
          bVar26 = iVar18 != 0;
          iVar11 = iVar18 + -1;
          iVar18 = iVar11;
        } while (bVar26);
        if (1 < iVar7) {
          lVar5 = *plVar8;
          *plVar8 = plVar8[uVar20 - 1];
          plVar8[uVar20 - 1] = lVar5;
          if (iVar7 != 2) {
            do {
              uVar13 = uVar20 - 1;
              iVar7 = 0;
              iVar18 = 1;
              iVar11 = 0;
              do {
                iVar7 = iVar7 + 2;
                iVar17 = iVar18;
                if (((longlong)iVar7 < (longlong)uVar13) &&
                   (*(ulonglong *)(plVar8[iVar18] + 0x28) <= *(ulonglong *)(plVar8[iVar7] + 0x28)))
                {
                  iVar17 = iVar7;
                }
                lVar5 = plVar8[iVar11];
                if (*(ulonglong *)(plVar8[iVar17] + 0x28) <= *(ulonglong *)(lVar5 + 0x28)) break;
                plVar8[iVar11] = plVar8[iVar17];
                plVar8[iVar17] = lVar5;
                iVar7 = iVar17 * 2;
                iVar18 = iVar17 * 2 + 1;
                iVar11 = iVar17;
              } while ((longlong)iVar18 < (longlong)uVar13);
              lVar5 = *plVar8;
              *plVar8 = plVar8[uVar20 - 2];
              plVar8[uVar20 - 2] = lVar5;
              uVar20 = uVar13;
            } while (2 < uVar13);
          }
        }
      }
LAB_14068f4d4:
      plVar6 = plVar6 + -3;
    } while (&local_348 <= plVar6);
  }
  lVar5 = local_388;
  if ((int)uStack_380 != 0) {
    lVar12 = (longlong)(int)uStack_380;
    lVar23 = 0;
    do {
      lVar1 = *(longlong *)(lVar5 + lVar23);
      plVar6 = *(longlong **)(lVar1 + 0x10);
      plVar14 = *(longlong **)(lVar1 + 0x18);
      FUN_1406cba26((longlong)(int)plVar6[1] * 0x10 + *(longlong *)(*plVar6 + 0x1d0),plVar6,lVar1);
      FUN_1406cba26((longlong)(int)plVar14[1] * 0x10 + *(longlong *)(*plVar14 + 0x1d0),plVar14,lVar1
                   );
      iVar7 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar7 + 1U) {
        FUN_1417280ce((longlong *)(param_1 + 0x20),iVar7);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 8) = lVar1;
      lVar23 = lVar23 + 8;
    } while (lVar12 * 8 != lVar23);
  }
  if (local_358 == '\0') {
    local_358 = '\x01';
    *(int *)(local_370 + 4) = *(int *)(local_370 + 4) + -1;
    if (local_360 != local_370[2]) {
      FUN_14004673c();
    }
    *local_370 = local_368;
    local_370[3] = local_350;
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14068f2a2:
  lVar5 = *plVar10;
  *plVar10 = *plVar21;
  *plVar21 = lVar5;
  iVar7 = iVar7 + -1;
  plVar15 = plVar15 + -2;
  if ((longlong)plVar22 - (longlong)plVar24 < (longlong)plVar9 - (longlong)plVar25) {
    if (plVar8 < plVar14) {
      *plVar6 = (longlong)plVar8;
      plVar6[1] = (longlong)plVar14;
      *(int *)(plVar6 + 2) = iVar7;
      plVar6 = plVar6 + 3;
    }
    plVar8 = plVar10;
    plVar9 = plVar22;
    if (plVar21 <= plVar10 + 1) goto LAB_14068f4d4;
  }
  else {
    if (plVar10 + 1 < plVar21) {
      *plVar6 = (longlong)plVar10;
      plVar6[1] = (longlong)plVar15;
      *(int *)(plVar6 + 2) = iVar7;
      plVar6 = plVar6 + 3;
    }
    plVar10 = plVar25;
    plVar15 = plVar14;
    plVar9 = plVar14;
    if (plVar14 <= plVar8) goto LAB_14068f4d4;
  }
  iVar11 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar10) >> 3);
  uVar20 = (ulonglong)(iVar11 + 1);
  plVar14 = plVar15;
  plVar24 = plVar10;
  if (iVar7 == 0) goto LAB_14068f336;
  goto LAB_14068f211;
}



// FUNCTION 14068f634 FUN_14068f634 body=1923 status=ok
// SIG undefined FUN_14068f634(void)

void FUN_14068f634(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  DWORD DVar5;
  DWORD dwTlsIndex;
  DWORD DVar6;
  LPVOID lpTlsValue;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong *plVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_3b8 [40];
  longlong local_390;
  longlong local_388;
  undefined8 uStack_380;
  undefined8 *local_370;
  undefined8 local_368;
  longlong local_360;
  char local_358;
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  dwTlsIndex = DAT_14c7585d0;
  local_390 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar6 = 0xffffffff;
    LOCK();
    bVar29 = DAT_14c7585d0 != 0xffffffff;
    DVar5 = dwTlsIndex;
    if (bVar29) {
      DVar6 = DAT_14c7585d0;
      DVar5 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar5;
    UNLOCK();
    if (bVar29) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar6;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_348);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_370 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_368 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_360 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_358 = '\0';
  local_350 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_370;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_388 = 0;
  uStack_380 = 0;
  lVar7 = (longlong)*(int *)(local_390 + 0x10);
  lVar14 = local_390;
  if (lVar7 != 0) {
    plVar8 = *(longlong **)(local_390 + 8);
    lVar14 = 0;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + *(int *)(*(longlong *)((longlong)plVar8 + lVar14) + 0x18);
      lVar14 = lVar14 + 8;
    } while (lVar7 * 8 - lVar14 != 0);
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar9 != 0) {
      FUN_14058c3e2(&local_388);
      lVar7 = (longlong)*(int *)(local_390 + 0x10);
      lVar14 = local_390;
      if (lVar7 == 0) goto LAB_14068f7ab;
      plVar8 = *(longlong **)(local_390 + 8);
    }
    plVar16 = plVar8 + lVar7;
    lVar14 = local_390;
    do {
      uVar22 = uStack_380;
      lVar7 = *plVar8;
      uVar21 = *(uint *)(lVar7 + 0x18);
      if ((longlong)(int)uVar21 != 0) {
        iVar9 = (int)uStack_380;
        lVar14 = (longlong)(int)uStack_380;
        uStack_380 = CONCAT44(uStack_380._4_4_,(int)uStack_380 + uVar21);
        if ((uint)(uStack_380._4_4_ - iVar9) < uVar21) {
          FUN_146d5f11a(&local_388,uVar22 & 0xffffffff);
        }
        memcpy((void *)(lVar14 * 8 + local_388),*(void **)(lVar7 + 0x10),(longlong)(int)uVar21 << 3)
        ;
        lVar7 = *plVar8;
        lVar14 = local_390;
      }
      if (*(int *)(lVar7 + 0x1c) < 0) {
        *(undefined4 *)(lVar7 + 0x18) = 0;
        FUN_1400d33ac(lVar7 + 0x10);
        lVar14 = local_390;
      }
      else {
        *(undefined4 *)(lVar7 + 0x18) = 0;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar16);
  }
LAB_14068f7ab:
  lVar7 = local_388;
  iVar9 = (int)uStack_380;
  if ((*(byte *)(lVar14 + 0x54) & 1 < (int)uStack_380) != 0) {
    uVar22 = uStack_380 & 0xffffffff;
    memset(local_338,0,0x2f0);
    local_348 = lVar7;
    local_340 = lVar7 + uVar22 * 8 + -8;
    fVar30 = logf((float)iVar9);
    local_338[0] = (int)(longlong)(fVar30 + fVar30);
    plVar8 = &local_348;
    do {
      plVar10 = (longlong *)*plVar8;
      plVar11 = (longlong *)plVar8[1];
      iVar9 = (int)plVar8[2];
      iVar13 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar10) >> 3);
      uVar22 = (ulonglong)(iVar13 + 1);
      plVar16 = plVar11;
      plVar27 = plVar10;
      if (iVar9 != 0) {
LAB_14068f835:
        plVar12 = plVar10;
        if (8 < (int)(uint)uVar22) {
          uVar21 = (uint)uVar22 >> 1;
          lVar14 = plVar12[uVar21];
          plVar12[uVar21] = *plVar12;
          *plVar12 = lVar14;
          plVar23 = plVar16 + 1;
          plVar10 = plVar12;
          do {
            plVar4 = plVar10 + 1;
            plVar17 = plVar10 + 1;
            do {
              plVar28 = plVar17;
              plVar10 = plVar4;
              if (plVar16 < plVar10) break;
              uVar22 = *(ulonglong *)(*plVar12 + 0x158);
              uVar15 = *(ulonglong *)(*plVar10 + 0x158);
              bVar29 = uVar22 < uVar15;
              if (uVar22 == uVar15) {
                bVar29 = *(ulonglong *)(*plVar12 + 0x160) < *(ulonglong *)(*plVar10 + 0x160);
              }
              plVar4 = plVar10 + 1;
              plVar17 = plVar28 + 1;
            } while (!bVar29);
            plVar4 = plVar23 + -2;
            do {
              plVar17 = plVar23;
              plVar25 = plVar4;
              plVar23 = plVar17 + -1;
              if (plVar23 <= plVar12) break;
              uVar22 = *(ulonglong *)(*plVar23 + 0x158);
              uVar15 = *(ulonglong *)(*plVar12 + 0x158);
              bVar29 = uVar22 < uVar15;
              if (uVar22 == uVar15) {
                bVar29 = *(ulonglong *)(*plVar23 + 0x160) < *(ulonglong *)(*plVar12 + 0x160);
              }
              plVar4 = plVar25 + -1;
            } while (!bVar29);
            if (plVar23 < plVar10) goto LAB_14068f917;
            lVar14 = *plVar10;
            *plVar10 = *plVar23;
            *plVar23 = lVar14;
          } while( true );
        }
        if (plVar12 < plVar16) {
          do {
            plVar10 = plVar12;
            if (plVar12 + 1 <= plVar16) {
              plVar11 = plVar12 + 1;
              lVar14 = *plVar12;
              do {
                lVar7 = *plVar11;
                bVar29 = *(ulonglong *)(lVar14 + 0x158) < *(ulonglong *)(lVar7 + 0x158);
                if (*(ulonglong *)(lVar14 + 0x158) == *(ulonglong *)(lVar7 + 0x158)) {
                  bVar29 = *(ulonglong *)(lVar14 + 0x160) < *(ulonglong *)(lVar7 + 0x160);
                }
                plVar27 = plVar11;
                if (!bVar29) {
                  lVar7 = lVar14;
                  plVar27 = plVar10;
                }
                plVar10 = plVar27;
                plVar11 = plVar11 + 1;
                lVar14 = lVar7;
              } while (plVar11 <= plVar16);
            }
            lVar14 = *plVar10;
            *plVar10 = *plVar16;
            *plVar16 = lVar14;
            plVar16 = plVar16 + -1;
          } while (plVar12 < plVar16);
        }
        goto LAB_14068fc1d;
      }
LAB_14068f9ab:
      iVar9 = (int)uVar22;
      if (iVar9 != 0) {
        iVar13 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
        iVar20 = iVar13;
joined_r0x00014068f9d2:
        do {
          iVar19 = iVar13 * 2 + 1;
          if (iVar19 < iVar9) {
            iVar18 = iVar13 * 2 + 2;
            if (iVar18 < iVar9) {
              uVar15 = *(ulonglong *)(plVar10[iVar18] + 0x158);
              uVar1 = *(ulonglong *)(plVar10[iVar19] + 0x158);
              bVar29 = uVar15 < uVar1;
              if (uVar15 == uVar1) {
                bVar29 = *(ulonglong *)(plVar10[iVar18] + 0x160) <
                         *(ulonglong *)(plVar10[iVar19] + 0x160);
              }
              if (!bVar29) {
                iVar19 = iVar18;
              }
            }
            lVar14 = plVar10[iVar19];
            lVar7 = plVar10[iVar13];
            bVar29 = *(ulonglong *)(lVar7 + 0x158) < *(ulonglong *)(lVar14 + 0x158);
            if (*(ulonglong *)(lVar7 + 0x158) == *(ulonglong *)(lVar14 + 0x158)) {
              bVar29 = *(ulonglong *)(lVar7 + 0x160) < *(ulonglong *)(lVar14 + 0x160);
            }
            if (bVar29) {
              plVar10[iVar13] = lVar14;
              plVar10[iVar19] = lVar7;
              iVar13 = iVar19;
              goto joined_r0x00014068f9d2;
            }
          }
          bVar29 = iVar20 != 0;
          iVar13 = iVar20 + -1;
          iVar20 = iVar13;
        } while (bVar29);
        if (1 < iVar9) {
          lVar14 = *plVar10;
          *plVar10 = plVar10[uVar22 - 1];
          plVar10[uVar22 - 1] = lVar14;
          if (iVar9 != 2) {
            do {
              uVar15 = uVar22 - 1;
              iVar9 = 0;
              iVar20 = 1;
              iVar13 = 0;
              do {
                iVar9 = iVar9 + 2;
                iVar19 = iVar20;
                if ((longlong)iVar9 < (longlong)uVar15) {
                  uVar1 = *(ulonglong *)(plVar10[iVar9] + 0x158);
                  uVar2 = *(ulonglong *)(plVar10[iVar20] + 0x158);
                  bVar29 = uVar1 < uVar2;
                  if (uVar1 == uVar2) {
                    bVar29 = *(ulonglong *)(plVar10[iVar9] + 0x160) <
                             *(ulonglong *)(plVar10[iVar20] + 0x160);
                  }
                  if (!bVar29) {
                    iVar19 = iVar9;
                  }
                }
                lVar14 = plVar10[iVar19];
                lVar7 = plVar10[iVar13];
                bVar29 = *(ulonglong *)(lVar7 + 0x158) < *(ulonglong *)(lVar14 + 0x158);
                if (*(ulonglong *)(lVar7 + 0x158) == *(ulonglong *)(lVar14 + 0x158)) {
                  bVar29 = *(ulonglong *)(lVar7 + 0x160) < *(ulonglong *)(lVar14 + 0x160);
                }
                if (!bVar29) break;
                plVar10[iVar13] = lVar14;
                plVar10[iVar19] = lVar7;
                iVar9 = iVar19 * 2;
                iVar20 = iVar19 * 2 + 1;
                iVar13 = iVar19;
              } while ((longlong)iVar20 < (longlong)uVar15);
              lVar14 = *plVar10;
              *plVar10 = plVar10[uVar22 - 2];
              plVar10[uVar22 - 2] = lVar14;
              uVar22 = uVar15;
            } while (2 < uVar15);
          }
        }
      }
LAB_14068fc1d:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
    lVar14 = local_390;
  }
  lVar7 = local_388;
  if ((int)uStack_380 != 0) {
    lVar24 = (longlong)(int)uStack_380;
    plVar8 = (longlong *)(lVar14 + 0x30);
    plVar16 = (longlong *)(lVar14 + 0x40);
    lVar26 = 0;
    do {
      lVar3 = *(longlong *)(lVar7 + lVar26);
      uVar21 = *(uint *)(lVar14 + 0x38);
      *(uint *)(lVar14 + 0x38) = uVar21 + 1;
      if (*(uint *)(lVar14 + 0x3c) < uVar21 + 1) {
        FUN_140c29ed8(plVar8,uVar21);
        lVar14 = local_390;
      }
      *(longlong *)(*plVar8 + (longlong)(int)uVar21 * 8) = lVar3;
      *(uint *)(lVar3 + 0x150) = *(uint *)(lVar3 + 0x150) & 0x80000000 | uVar21 & 0x7fffffff;
      if ((*(byte *)(lVar3 + 0x375) & 2) != 0) {
        iVar9 = *(int *)(lVar14 + 0x48);
        *(uint *)(lVar14 + 0x48) = iVar9 + 1U;
        if (*(uint *)(lVar14 + 0x4c) < iVar9 + 1U) {
          FUN_140c29ed8(plVar16,iVar9);
          lVar14 = local_390;
        }
        *(longlong *)(*plVar16 + (longlong)iVar9 * 8) = lVar3;
        *(int *)(lVar3 + 0x154) = iVar9;
      }
      *(undefined4 *)(lVar3 + 0x14c) = *(undefined4 *)(lVar14 + 0x50);
      lVar26 = lVar26 + 8;
    } while (lVar24 * 8 != lVar26);
  }
  if (local_358 == '\0') {
    local_358 = '\x01';
    *(int *)(local_370 + 4) = *(int *)(local_370 + 4) + -1;
    if (local_360 != local_370[2]) {
      FUN_14004673c();
    }
    *local_370 = local_368;
    local_370[3] = local_350;
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14068f917:
  lVar14 = *plVar12;
  *plVar12 = *plVar23;
  *plVar23 = lVar14;
  iVar9 = iVar9 + -1;
  plVar17 = plVar17 + -2;
  if ((longlong)plVar25 - (longlong)plVar27 < (longlong)plVar11 - (longlong)plVar28) {
    if (plVar10 < plVar16) {
      *plVar8 = (longlong)plVar10;
      plVar8[1] = (longlong)plVar16;
      *(int *)(plVar8 + 2) = iVar9;
      plVar8 = plVar8 + 3;
    }
    plVar10 = plVar12;
    plVar11 = plVar25;
    if (plVar23 <= plVar12 + 1) goto LAB_14068fc1d;
  }
  else {
    if (plVar12 + 1 < plVar23) {
      *plVar8 = (longlong)plVar12;
      plVar8[1] = (longlong)plVar17;
      *(int *)(plVar8 + 2) = iVar9;
      plVar8 = plVar8 + 3;
    }
    plVar12 = plVar28;
    plVar17 = plVar16;
    plVar11 = plVar16;
    if (plVar16 <= plVar10) goto LAB_14068fc1d;
  }
  iVar13 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar12) >> 3);
  uVar22 = (ulonglong)(iVar13 + 1);
  plVar16 = plVar17;
  plVar27 = plVar12;
  if (iVar9 == 0) goto LAB_14068f9ab;
  goto LAB_14068f835;
}



// FUNCTION 14068fdb8 FUN_14068fdb8 body=26 status=ok
// SIG undefined FUN_14068fdb8(void)

void FUN_14068fdb8(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14068fdd8();
                    /* WARNING: Could not recover jumptable at 0x00014068fdcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 200))(plVar1);
  return;
}



// FUNCTION 14068fdd8 FUN_14068fdd8 body=276 status=ok
// SIG undefined FUN_14068fdd8(void)

longlong FUN_14068fdd8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  do {
    lVar1 = param_1;
    lVar2 = FUN_14068feee(lVar1);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 == 0)) break;
    if (DAT_14cacb1f8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1478defb1;
      local_50 = FUN_1463a1b02;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/Engine",L"AnimClassInterface",&DAT_14cacb1f8,&DAT_1478defb0);
    }
    param_1 = FUN_144718840(lVar2,DAT_14cacb1f8);
  } while (param_1 != 0);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14068feee FUN_14068feee body=478 status=ok
// SIG undefined FUN_14068feee(void)

longlong FUN_14068feee(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 8))();
    if (lVar1 != 0) {
      if (DAT_14c949118 == 0) {
        local_40 = FUN_140631fbe;
        lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar4;
        FUN_1446f470e(local_38,L"Class",1);
        local_58 = &LAB_146891e90;
        local_60 = &LAB_146273097;
        local_70 = L"Engine";
        local_68 = 199;
        local_78 = 0x20;
        local_80 = 0x10000000;
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
        local_50 = &local_40;
        FUN_14574b4b2(lVar4);
        DAT_14c949118 = lVar4;
        uVar2 = FUN_144a7a812();
        lVar4 = DAT_14c949118;
        uVar3 = FUN_1449e2fb2();
        local_88 = L"Class";
        FUN_14574b446(uVar3,lVar4,uVar2,L"/Script/CoreUObject");
      }
      if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30))
      goto LAB_14068ff58;
    }
    lVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (lVar1 != 0) {
      lVar4 = FUN_1446f8646();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 != 0)) {
        lVar4 = FUN_144a797b2();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_14068ff58;
      }
    }
  }
  lVar1 = 0;
LAB_14068ff58:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1406900ce FUN_1406900ce body=29 status=ok
// SIG undefined FUN_1406900ce(void)

undefined8 FUN_1406900ce(longlong param_1,undefined8 param_2)

{
  FUN_1406900ec(param_1 + 0x410);
  return param_2;
}



// FUNCTION 1406900ec FUN_1406900ec body=103 status=ok
// SIG undefined FUN_1406900ec(void)

void FUN_1406900ec(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  
  *param_2 = *(undefined8 *)(param_1 + 0x44);
  if ((((*(int *)(param_1 + 0xa4) != 0) && (uVar1 = *(uint *)(param_1 + 0xa0), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0xa4))) &&
      (((*(uint *)(plVar2 + 1) >> 0x1c & 1) == 0 && (*plVar2 != 0)))))) {
    *param_2 = *(undefined8 *)(*plVar2 + 0x18c);
  }
  return;
}



// FUNCTION 140690154 FUN_140690154 body=43 status=ok
// SIG undefined FUN_140690154(void)

void FUN_140690154(longlong *param_1)

{
  FUN_140690180(param_1 + 0x82);
                    /* WARNING: Could not recover jumptable at 0x00014069017c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x950))(param_1,1);
  return;
}



// FUNCTION 140690180 FUN_140690180 body=259 status=ok
// SIG undefined FUN_140690180(void)

void FUN_140690180(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)(param_1 + 0x3b) & 0x20) == 0) == (bool)param_2) {
    if ((((((*(int *)(param_1 + 0x144) != 0) &&
           (uVar1 = *(uint *)(param_1 + 0x140), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
         && ((plVar4 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x144))))) &&
        (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) &&
       (((lVar3 = *(longlong *)(lVar2 + 0xb0), lVar3 != 0 ||
         (lVar3 = FUN_1448abda6(lVar2), lVar3 != 0)) &&
        (lVar3 = *(longlong *)(lVar3 + 0x260), lVar3 != 0)))) {
      if (param_2 == '\0') {
        FUN_1406f7bf0(lVar3 + 0xc0,lVar2);
      }
      else {
        local_28 = lVar2;
        FUN_1409e9912(lVar3 + 0xc0,local_2c,&local_28,0);
      }
    }
    *(byte *)(param_1 + 0x3b) = *(byte *)(param_1 + 0x3b) & 0xdf | param_2 << 5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140690294 FUN_140690294 body=54 status=ok
// SIG undefined FUN_140690294(void)

void FUN_140690294(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1406902ca(param_1 + 0x82);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001406902c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x950))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1406902ca FUN_1406902ca body=689 status=ok
// SIG undefined FUN_1406902ca(void)

bool FUN_1406902ca(longlong param_1,undefined1 (*param_2) [16])

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  ulonglong local_60;
  ulonglong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar12 = *(ulonglong *)(param_1 + 0x78) ^ *(ulonglong *)param_2[1] |
           *(ulonglong *)(param_1 + 0x68) ^ *(ulonglong *)*param_2;
  uVar11 = *(ulonglong *)(param_1 + 0x80) ^ *(ulonglong *)(param_2[1] + 8) |
           *(ulonglong *)(param_1 + 0x70) ^ *(ulonglong *)(*param_2 + 8);
  if (param_2[1] != *(undefined1 (*) [16])(param_1 + 0x78) ||
      *param_2 != *(undefined1 (*) [16])(param_1 + 0x68)) {
    uVar6 = *(undefined8 *)*param_2;
    uVar7 = *(undefined8 *)(*param_2 + 8);
    uVar8 = *(undefined8 *)(param_2[1] + 8);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)param_2[1];
    *(undefined8 *)(param_1 + 0x80) = uVar8;
    *(undefined8 *)(param_1 + 0x68) = uVar6;
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    plVar1 = (longlong *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = 0;
    local_60 = uVar12;
    local_58 = uVar11;
    if (*(int *)(param_1 + 0x94) != 0x20) {
      FUN_144760bde(plVar1,0x20);
    }
    if (DAT_14cacfd48 == (longlong *)0x0) {
      local_80 = &local_50;
      local_50 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_140eca530;
      local_88 = &LAB_1479b02e7;
      local_90 = &LAB_146063820;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10000006;
      local_b0 = 8;
      local_b8 = 0x170;
      FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
    }
    plVar9 = DAT_14cacfd48;
    lVar10 = DAT_14cacfd48[0x22];
    if (lVar10 == 0) {
      (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
      lVar10 = plVar9[0x22];
    }
    if (DAT_14cacfd78 == '\0') {
      FUN_1416bf7d6(lVar10,0);
      DAT_14cacfd78 = '\x01';
    }
    lVar13 = 0;
    do {
      cVar2 = *(char *)(param_1 + 0x68 + lVar13);
      if (((cVar2 != (&DAT_14cad0ed0)[lVar13]) && ((int)lVar13 < *(int *)(lVar10 + 0x148))) &&
         (lVar4 = *(longlong *)(*(longlong *)(lVar10 + 0x140) + lVar13 * 8), lVar4 != 0)) {
        iVar3 = *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x94) < iVar3 + 1U) {
          FUN_1402ba360(plVar1,iVar3);
        }
        lVar5 = *plVar1;
        *(longlong *)(lVar5 + (longlong)iVar3 * 0xc) = lVar4;
        *(char *)(lVar5 + 8 + (longlong)iVar3 * 0xc) = cVar2;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x20);
    if (*(int *)(param_1 + 0x94) != *(int *)(param_1 + 0x90)) {
      FUN_144760bde(plVar1);
    }
    *(undefined8 *)(param_1 + 0x44) = DAT_14cad0ef0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xbf;
    FUN_1400bcfd8(param_1);
    uVar11 = local_58;
    uVar12 = local_60;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar12 != 0 || uVar11 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069057c FUN_14069057c body=98 status=ok
// SIG undefined FUN_14069057c(void)

void FUN_14069057c(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  FUN_1406905de();
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x90);
    if (((bVar1 & 0x20) != 0) && (*(char *)(param_2 + 0x178) == '\x03')) {
      FUN_140c7ce82(param_2,1);
      bVar1 = *(byte *)(param_1 + 0x90);
    }
    if (((bVar1 & 0x40) != 0) && (*(char *)(param_2 + 0x178) == '\x03')) {
      FUN_14081ae08(param_2,4);
      return;
    }
  }
  return;
}



// FUNCTION 1406905de FUN_1406905de body=60 status=ok
// SIG undefined FUN_1406905de(void)

void FUN_1406905de(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
      *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 8;
      return;
    }
    if ((*(byte *)(param_1 + 0x40) & 2) != 0 && (*(byte *)(param_2 + 0x60) & 8) == 0) {
      FUN_141067f36(param_2,*(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x44));
      return;
    }
  }
  return;
}



// FUNCTION 14069061a FUN_14069061a body=1346 status=ok
// SIG undefined FUN_14069061a(void)

void FUN_14069061a(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5,undefined8 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  longlong *plVar8;
  code *pcVar9;
  longlong *plVar10;
  longlong lVar11;
  code *pcVar12;
  ulonglong unaff_RBP;
  bool bVar13;
  undefined1 auStack_88 [32];
  int local_68;
  byte local_60;
  undefined8 local_58;
  ushort local_4c;
  short local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar2 = 3;
  if ((*param_5 >> 0x31 & 1) == 0) {
    bVar2 = 2 - ((*(byte *)(*param_4 + 0x28) & 0x80) == 0);
  }
  if (((*param_5 & 0x40) == 0) && (cVar1 = (**(code **)(*param_3 + 200))(param_3), cVar1 == '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca4ff90) && (FUN_144b3d300(&DAT_14ca4ff90), DAT_14ca4ff90 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ShadowQuality",1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14ca4ff88 = 0;
      }
      else {
        DAT_14ca4ff88 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer(&DAT_14ca4ff90);
    }
    lVar11 = DAT_14ca4ff88;
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar4 == 0x40000002) {
      uVar7 = 0;
    }
    else {
      bVar13 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
        if (iVar4 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          bVar13 = DVar5 == DVar6;
        }
        else {
          bVar13 = false;
        }
      }
      uVar7 = (ulonglong)(bVar13 ^ 1);
    }
    if (*(int *)(lVar11 + uVar7 * 4) < 1) goto LAB_14069077a;
    uVar3 = (**(code **)(*param_3 + 0x270))(param_3);
    unaff_RBP = (ulonglong)uVar3;
    (**(code **)(*param_3 + 0x288))(param_3,&local_4a);
    if (local_4a == 0x400) goto LAB_14069077a;
    if (1 < uVar3) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14caf1e74) && (FUN_144b3d300(&DAT_14caf1e74), DAT_14caf1e74 == -1))
      {
        DAT_14caf1e71 = FUN_14473b0f0();
        _Init_thread_footer(&DAT_14caf1e74);
      }
      if (DAT_14caf1e71 == '\x01') {
        if ((uVar3 != 2) && (uVar3 != 7)) goto LAB_14069077a;
      }
      else if (uVar3 != 2) goto LAB_14069077a;
      cVar1 = (**(code **)(*param_3 + 0x2a8))(param_3);
      if (cVar1 == '\0') goto LAB_14069077a;
    }
    iVar4 = (**(code **)(*param_3 + 0x30))(param_3);
    if ((((iVar4 == 3) || (cVar1 = (**(code **)(*param_3 + 0x368))(param_3), cVar1 != '\0')) ||
        ((**(code **)(*param_3 + 0x288))(param_3,&local_4c), (local_4c >> 10 & 1) != 0)) ||
       ((*(byte *)(param_1 + 0x84) & bVar2) == 0)) goto LAB_14069077a;
  }
  if ((*param_5 & 0x40) == 0) {
    if (((uint)*param_5 >> 0xc & 1) == 0) goto LAB_14069077a;
    if (param_3[2] == 0) {
      bVar13 = true;
    }
    else {
      bVar13 = (*(byte *)(*(longlong *)(param_3[2] + 0x28) + 0x246) & 8) == 0;
    }
    cVar1 = FUN_1447e4184(param_3,1,-1 < (short)*(undefined4 *)(*param_4 + 0x28));
    plVar8 = param_3;
    if ((bVar13) && (cVar1 != '\0')) {
      if (param_4[1] == 0) goto LAB_14069077a;
      uVar7 = CONCAT71((int7)(unaff_RBP >> 8),DAT_14cb0cc00);
      FUN_14003fbd6();
      plVar8 = (longlong *)
               (**(code **)(*DAT_14caea080 + 0x350))
                         (DAT_14caea080,*(undefined4 *)(param_1 + 0x20),uVar7 & 0xffffffff);
    }
    uVar7 = *param_5;
    pcVar9 = *(code **)(*param_3 + 0x38);
    plVar10 = param_3;
    if (pcVar9 == FUN_144765e18) {
      plVar10 = (longlong *)param_3[9];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)param_3[8];
        pcVar9 = *(code **)(*plVar10 + 0x420);
        pcVar12 = (code *)&LAB_144b24e8a;
      }
      else {
        pcVar9 = *(code **)(*plVar10 + 0x420);
        pcVar12 = (code *)&LAB_14497e108;
      }
      if (pcVar9 != pcVar12) goto LAB_140690b01;
    }
    else {
LAB_140690b01:
      (*pcVar9)(plVar10);
    }
    lVar11 = *param_3;
    if (*(code **)(lVar11 + 0x100) == (code *)&LAB_144b25520) {
      bVar2 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
    }
    else {
      bVar2 = (**(code **)(lVar11 + 0x100))(param_3);
      lVar11 = *param_3;
    }
    iVar4 = 2 - (uint)bVar2;
    if (*(code **)(lVar11 + 0x38) == FUN_144765e18) {
      plVar10 = (longlong *)param_3[9];
      if (plVar10 == (longlong *)0x0) {
        pcVar9 = *(code **)(*(longlong *)param_3[8] + 0x420);
        if (pcVar9 != (code *)&LAB_144b24e8a) goto LAB_140690b27;
        bVar2 = *(byte *)((longlong *)param_3[8] + 0x30);
      }
      else {
        pcVar9 = *(code **)(*plVar10 + 0x420);
        if (pcVar9 != (code *)&LAB_14497e108) {
LAB_140690b27:
          bVar2 = (*pcVar9)();
          goto LAB_1406908e8;
        }
        bVar2 = *(byte *)(plVar10 + 0x2a);
      }
      bVar2 = (bVar2 & 0x10) >> 4;
    }
    else {
      bVar2 = (**(code **)(lVar11 + 0x38))();
    }
LAB_1406908e8:
    local_68 = (((uint)uVar7 >> 0x10 & 1) != 0) + 1;
    if (bVar2 != 0) {
      local_68 = 0;
    }
    if ((uVar7 & 0x20000) != 0) {
      local_68 = 0;
    }
    local_60 = (byte)((uint)*param_5 >> 0x12) & 1;
    param_3 = plVar8;
    local_58 = param_6;
  }
  else {
    local_58 = param_6;
    local_60 = 0;
    local_68 = 0;
    FUN_140690b7a(param_1,param_4,param_3,2);
    local_58 = param_6;
    local_60 = 0;
    local_68 = 1;
    FUN_140690b7a(param_1,param_4,param_3,2);
    local_58 = param_6;
    local_60 = 0;
    local_68 = 2;
    iVar4 = 2;
  }
  FUN_140690b7a(param_1,param_4,param_3,iVar4);
LAB_14069077a:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140690b7a FUN_140690b7a body=287 status=ok
// SIG undefined FUN_140690b7a(void)

void FUN_140690b7a(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  int param_5,char param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x80) & 1;
  cVar1 = (**(code **)(*param_3 + 0x38))();
  iVar3 = (param_5 != 2) + 1;
  if (param_5 == 0) {
    iVar3 = param_5;
  }
  if (uVar4 != 0) {
    iVar3 = param_5;
  }
  if (param_6 != '\0') {
    iVar3 = 0;
    param_5 = 0;
  }
  iVar2 = param_5;
  if (cVar1 != '\0') {
    iVar2 = 0;
  }
  FUN_140690c9a(param_1,param_2,param_3,uVar4 + 2,param_4,iVar2,param_7);
  cVar1 = (**(code **)(*param_3 + 0x38))(param_3);
  if (cVar1 != '\0') {
    iVar3 = 0;
  }
  FUN_140690c9a(param_1,param_2,param_3,uVar4 + 8,param_4,iVar3,param_7);
  cVar1 = (**(code **)(*param_3 + 0x38))(param_3);
  if (cVar1 != '\0') {
    param_5 = 0;
  }
  FUN_140690c9a(param_1,param_2,param_3,uVar4,param_4,param_5,param_7);
  return;
}



// FUNCTION 140690c9a FUN_140690c9a body=208 status=ok
// SIG undefined FUN_140690c9a(void)

void FUN_140690c9a(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x40) = DAT_14c9c4540;
  uVar1 = DAT_14c9c0d98;
  if (((param_4 & 1) == 0) && (uVar1 = DAT_14c9c0ea0, (param_4 & 8) == 0)) {
    uVar1 = DAT_14ca19748;
  }
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((*(byte *)(*param_2 + 0x28) & 0x20) != 0) {
    FUN_140690d6a(param_1,param_2,param_3,param_4,param_5,param_6,1,param_7);
  }
  FUN_140690d6a(param_1,param_2,param_3,param_4,param_5,param_6,0,param_7);
  return;
}



// FUNCTION 140690d6a FUN_140690d6a body=2683 status=ok
// SIG undefined FUN_140690d6a(void)

/* WARNING: Removing unreachable block (ram,0x0001406915b7) */

void FUN_140690d6a(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,int param_5,
                  int param_6,char param_7,longlong *param_8)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined7 uVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 auStack_578 [32];
  uint *local_558;
  undefined1 *local_550;
  undefined1 *local_548;
  undefined1 *local_540;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4aa [2];
  undefined8 local_4a8;
  undefined1 local_499;
  uint local_498 [2];
  undefined1 local_490 [16];
  undefined1 local_480 [16];
  undefined1 local_470 [16];
  undefined1 local_460 [16];
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
  undefined8 uStack_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 local_2d0 [16];
  undefined8 local_2c0;
  ulonglong uStack_2b8;
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
  ulonglong local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined2 local_256;
  undefined4 local_254;
  undefined2 local_250;
  undefined2 local_24e;
  undefined2 local_24a;
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
  longlong lStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_578;
  local_540 = local_4f8;
  local_4c8 = (undefined1  [16])0x0;
  local_4d8 = (undefined1  [16])0x0;
  local_4e8 = (undefined1  [16])0x0;
  local_4f8 = (undefined1  [16])0x0;
  local_508 = (undefined1  [16])0x0;
  if (param_3[2] == 0) {
    bVar9 = 0;
  }
  else {
    bVar9 = (*(byte *)(*(longlong *)(param_3[2] + 0x28) + 0x246) & 8) >> 3;
  }
  local_548 = local_508;
  local_550 = (undefined1 *)CONCAT71(local_550._1_7_,bVar9);
  local_558 = (uint *)CONCAT71(local_558._1_7_,param_7);
  cVar3 = FUN_1457341d0(param_3,*param_2,*(undefined4 *)(param_1 + 0x20),param_4);
  if (cVar3 != '\0') {
    uVar13 = 0;
    bVar9 = 0;
    if (param_7 != '\0') {
      cVar3 = FUN_1447e4184(param_3,1,-1 < *(short *)(*param_2 + 0x28));
      bVar9 = 0;
      if (cVar3 != '\0') {
        if (param_3[2] == 0) {
          bVar9 = 2;
        }
        else {
          bVar9 = (byte)~*(byte *)(*(longlong *)(param_3[2] + 0x28) + 0x246) >> 2 & 2;
        }
      }
    }
    local_460 = (undefined1  [16])0x0;
    local_470 = (undefined1  [16])0x0;
    local_480 = (undefined1  [16])0x0;
    local_490 = (undefined1  [16])0x0;
    if (*(char *)(param_1 + 0x10) == '\b') {
      local_528 = 0;
      local_518 = 0;
      local_520 = 0;
      local_530 = 0;
      uVar12 = 0;
    }
    else {
      uVar12 = (param_4 & 8) << 0x17 | DAT_14ca4af98 | 0xc;
      uVar8 = (undefined7)(DAT_14ca4af98 >> 8);
      local_518 = CONCAT71(uVar8,((uint)DAT_14ca4af98 >> 0xc & 1) == 0);
      local_530 = CONCAT71(uVar8,0xc);
      local_520 = CONCAT71(uVar8,1);
      local_528 = CONCAT62((int6)(DAT_14ca4af98 >> 0x10),1);
      uVar13 = 2;
    }
    uVar1 = *(uint *)(param_1 + 8);
    local_190[0] = 0x100;
    local_80 = 0;
    local_78 = 0x300000000;
    local_70 = 0x7fffffff;
    lStack_68 = 0;
    cVar3 = FUN_1406917e6();
    if (cVar3 == '\0') {
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
      cVar3 = '\x02';
      if (bVar9 == 0) {
        cVar3 = '\0';
      }
      local_1ac = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      lVar6 = param_2[1];
      local_510 = uVar13;
      if (lVar6 == 0 || cVar3 != '\0') {
        local_288 = 0x1100000000;
        (**(code **)(*param_2 + 0x48))(cVar3,&local_310);
        lVar6 = FUN_14486d71a(&local_310);
      }
      local_2d0 = ZEXT816(0);
      local_310 = local_508._0_8_;
      uStack_308 = local_508._8_8_;
      local_300 = local_4f8._0_4_;
      uStack_2fc = local_4f8._4_4_;
      uStack_2f8 = local_4f8._8_4_;
      uStack_2f4 = local_4f8._12_4_;
      local_2f0 = local_4e8._0_4_;
      uStack_2ec = local_4e8._4_4_;
      uStack_2e8 = local_4e8._8_4_;
      uStack_2e4 = local_4e8._12_4_;
      local_2e0 = local_4d8._0_4_;
      uStack_2dc = local_4d8._4_4_;
      uStack_2d8 = local_4d8._8_4_;
      uStack_2d4 = local_4d8._12_4_;
      local_2c0 = local_4c8._0_8_;
      uStack_2b8 = local_4c8._8_8_;
      FUN_144765e6c(&local_238,lVar6);
      puVar10 = &DAT_14c9c0e10;
      if (param_6 == 2) {
        puVar10 = &DAT_14c9c0e28;
      }
      puVar11 = &DAT_14c9c0d68;
      if (param_6 == 2) {
        puVar11 = &DAT_14c9c0df8;
      }
      puVar7 = &DAT_14c9c0e40;
      if (param_6 != 0) {
        puVar7 = puVar10;
      }
      puVar10 = &DAT_14c9c0db0;
      if (param_6 != 0) {
        puVar10 = puVar11;
      }
      if (param_5 == 1) {
        puVar10 = puVar7;
      }
      uStack_1d0 = *puVar10;
      local_1d8 = *(undefined8 *)(param_1 + 0x40);
      local_1c8 = *(undefined8 *)(param_1 + 0x48);
      uVar5 = (**(code **)(*param_3 + 0x490))(param_3);
      if (uVar5 < 4) {
        uVar4 = (undefined1)(0x5010400 >> ((byte)(uVar5 << 3) & 0x1f));
      }
      else {
        uVar4 = 0;
        if ((uVar5 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar4 = (undefined1)(0xa060900000000 >> ((byte)(uVar5 << 3) & 0x3f));
        }
      }
      local_1af = CONCAT11(uVar4,(undefined1)local_1af);
      cVar3 = (**(code **)(*param_3 + 0x4a0))(param_3);
      if (cVar3 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_144a12f44(DAT_14ca85550);
      }
      local_1af = CONCAT11(local_1af._1_1_,uVar4);
      FUN_144a1fecc(&local_238,&local_310);
      if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
         (DAT_14cafb358 == 2)) {
        uStack_1a8 = (undefined4)local_240;
        uStack_1a4 = (undefined4)((ulonglong)local_240 >> 0x20);
        FUN_14573402d(local_3b0);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar6 = *param_2;
          local_450[0] = local_320;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          local_558 = local_498;
          local_498[0] = local_498[0] & 0xffff0000;
          local_550 = local_4aa;
          FUN_14573482a(&DAT_14cafccf8,&local_4a8,
                        (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] &
                        0x7fffffff,local_450);
          if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_4a8 * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_4a8 * 0x10 + DAT_14cafccf8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            FUN_140691a2a(&DAT_14cafc0a0,uVar1,lVar6);
          }
        }
        FUN_1457340f6(local_450,&local_238);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar6 = *param_2;
          local_4a8 = local_3c0;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          local_558 = (uint *)local_4aa;
          local_4aa = (undefined1  [2])0x0;
          local_550 = &local_499;
          FUN_14573482a(&DAT_14cafd9c8,local_498,
                        (int)((ulonglong)local_4a8 >> 0x20) * 0x17 + (int)local_4a8 & 0x7fffffff,
                        &local_4a8);
          if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_498[0] * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_498[0] * 0x10 + DAT_14cafd9c8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            FUN_140691a2a(&DAT_14cafcd70,uVar1,lVar6);
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
      uStack_2b8 = uStack_2b8 & 0xffffffff;
      local_2b0 = 0;
      local_2a8 = local_490._0_8_;
      uStack_2a0 = local_490._8_8_;
      local_298 = local_480._0_8_;
      uStack_290 = local_480._8_8_;
      local_288 = local_470._0_8_;
      uStack_280 = local_470._8_8_;
      local_278 = local_460._0_8_;
      uStack_270 = local_460._8_8_;
      local_250 = (undefined2)local_528;
      local_268 = (undefined1)local_530;
      local_258 = (undefined1)local_520;
      local_257 = (undefined1)local_518;
      local_256 = 0;
      local_254 = (undefined4)local_510;
      local_24a = 0;
      local_24e = 0;
      local_260 = uVar12;
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
      local_2d0 = (undefined1  [16])0x0;
      local_310 = local_508._0_8_;
      uStack_308 = local_508._8_8_;
      local_300 = local_4f8._0_4_;
      uStack_2fc = local_4f8._4_4_;
      uStack_2f8 = local_4f8._8_4_;
      uStack_2f4 = local_4f8._12_4_;
      local_2f0 = local_4e8._0_4_;
      uStack_2ec = local_4e8._4_4_;
      uStack_2e8 = local_4e8._8_4_;
      uStack_2e4 = local_4e8._12_4_;
      local_2e0 = local_4d8._0_4_;
      uStack_2dc = local_4d8._4_4_;
      uStack_2d8 = local_4d8._8_4_;
      uStack_2d4 = local_4d8._12_4_;
      local_2c0 = local_4c8._0_8_;
      uStack_2b8 = local_4c8._8_8_;
      FUN_145734aa6(&local_310,&local_238);
      FUN_1457347b6(&local_b0,&local_238);
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      local_70 = local_70 & 0x80000000;
    }
    local_190[0] = 0x100;
    local_70 = uVar1 & 0x7fffffff | local_70;
    lStack_68 = *param_2;
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      bVar9 = (**(code **)(*param_3 + 0x400))(param_3);
      local_70 = local_70 & 0x7fffffff | (uint)bVar9 << 0x1f;
      FUN_1406918b2();
    }
    iVar2 = (int)param_8[1];
    *(uint *)(param_8 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_8 + 0xc) < iVar2 + 1U) {
      FUN_14069191a(param_8,iVar2);
    }
    lVar6 = *param_8;
    _Dst = (void *)(lVar6 + (longlong)iVar2 * 0x130);
    memcpy(_Dst,local_190,0xe0);
    *(undefined8 *)(lVar6 + 0x110 + (longlong)iVar2 * 0x130) = 0;
    if (local_80 == 0) {
      *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
      *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
      *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
      *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
      *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
      *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
    }
    *(longlong *)((longlong)_Dst + 0x110) = local_80;
    local_80 = 0;
    *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
    *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
    local_78 = 0x300000000;
    *(ulonglong *)((longlong)_Dst + 0x120) = CONCAT44(uStack_6c,local_70);
    *(longlong *)((longlong)_Dst + 0x128) = lStack_68;
  }
  if ((local_60 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406917e6 FUN_1406917e6 body=204 status=ok
// SIG undefined FUN_1406917e6(void)

undefined8 FUN_1406917e6(void)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return 0;
    }
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (((bVar1 == 0) && (DAT_14cafb2b4 == 1)) && (cVar2 = FUN_14743c3bc(), cVar2 == '\0')) {
    uVar3 = FUN_147badf22();
    return uVar3;
  }
  return 0;
}



// FUNCTION 1406918b2 FUN_1406918b2 body=102 status=ok
// SIG undefined FUN_1406918b2(void)

void FUN_1406918b2(void)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (1 < DAT_14cafb3b8) {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_30 = DAT_14cafb3b8 + -1;
    local_38 = DAT_14cafb3b0;
    FUN_14682b721();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069191a FUN_14069191a body=271 status=ok
// SIG undefined FUN_14069191a(void)

void FUN_14069191a(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x130;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 140691a2a FUN_140691a2a body=214 status=ok
// SIG undefined FUN_140691a2a(void)

void FUN_140691a2a(longlong *param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
  local_30 = param_3;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    if (param_2 < 0x54 || param_3 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      if (param_2 < 0x54) {
        piVar1 = (int *)((longlong)param_1 + (ulonglong)param_2 * 4 + 0x38);
        *piVar1 = *piVar1 + 1;
      }
      else {
        *(int *)(param_1 + 0x31) = (int)param_1[0x31] + 1;
      }
      if (param_3 != 0) {
        local_34 = 0;
        piVar1 = (int *)FUN_147cbd99e(param_1 + 0x32,&local_30);
        *piVar1 = *piVar1 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140691b02 FUN_140691b02 body=113 status=ok
// SIG undefined FUN_140691b02(void)

undefined8 * FUN_140691b02(undefined8 *param_1)

{
  undefined1 uVar1;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = &DAT_4030000000000000;
  param_1[9] = 0x4022000000000000;
  *(undefined4 *)(param_1 + 10) = 0x42c80000;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0x104;
  *(undefined1 *)((longlong)param_1 + 0x56) = 1;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x1010000;
  uVar1 = FUN_140691b73();
  *(undefined1 *)((longlong)param_1 + 100) = uVar1;
  uVar1 = FUN_140691bc1();
  *(undefined1 *)((longlong)param_1 + 0x65) = uVar1;
  return param_1;
}



// FUNCTION 140691b73 FUN_140691b73 body=78 status=ok
// SIG undefined FUN_140691b73(void)

undefined1 FUN_140691b73(void)

{
  if (DAT_14cb88c08 == '\0') {
    DAT_14cb88c08 = '\x01';
    FUN_14052bb08(DAT_14c872ce0,L"ScreenParticles",L"HideInThirdPersonByDefault",&DAT_14cb88c09,
                  &DAT_14c872af8);
  }
  return DAT_14cb88c09;
}



// FUNCTION 140691bc1 FUN_140691bc1 body=78 status=ok
// SIG undefined FUN_140691bc1(void)

undefined1 FUN_140691bc1(void)

{
  if (DAT_14cb88c0a == '\0') {
    DAT_14cb88c0a = '\x01';
    FUN_14052bb08(DAT_14c872ce0,L"ScreenParticles",L"HideInFirstPersonByDefault",&DAT_14cb88c0b,
                  &DAT_14c872af8);
  }
  return DAT_14cb88c0b;
}



// FUNCTION 140691c10 FUN_140691c10 body=323 status=ok
// SIG undefined FUN_140691c10(void)

void FUN_140691c10(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  longlong lVar9;
  
  lVar6 = FUN_1447210f0();
  if ((lVar6 != 0) && ((FUN_140691d54(lVar6,param_1), param_2 == 3 || (param_2 == 0)))) {
    plVar3 = *(longlong **)(param_1 + 0x3a8);
    bVar8 = *(byte *)((longlong)plVar3 + 0x2d3) & 8;
    if (bVar8 != 0) {
      *(byte *)((longlong)plVar3 + 0x2d3) = *(byte *)((longlong)plVar3 + 0x2d3) & 0xf7;
      (**(code **)(*plVar3 + 0x958))(plVar3);
    }
    lVar6 = plVar3[0x81];
    if ((longlong)(int)lVar6 != 0) {
      lVar4 = plVar3[0x80];
      lVar9 = 0;
      do {
        iVar1 = *(int *)(lVar4 + 0xe4 + lVar9);
        if (((((iVar1 != 0) && (uVar2 = *(uint *)(lVar4 + 0xe0 + lVar9), -1 < (int)uVar2)) &&
             ((int)uVar2 < DAT_14c9647dc)) &&
            ((plVar7 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar1)))) &&
           (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
            ((plVar5 = (longlong *)*plVar7, plVar5 != (longlong *)0x0 &&
             ((*(byte *)((longlong)plVar5 + 0x1f9) & 4) != 0)))))) {
          (**(code **)(*plVar5 + 0x550))(plVar5,CONCAT71((int7)((ulonglong)plVar7 >> 8),1));
        }
        lVar9 = lVar9 + 0x108;
      } while ((longlong)(int)lVar6 * 0x108 != lVar9);
    }
    if (((*(byte *)((longlong)plVar3 + 0x2d3) & 8) == 0) == (bVar8 != 0)) {
      *(byte *)((longlong)plVar3 + 0x2d3) = *(byte *)((longlong)plVar3 + 0x2d3) & 0xf7 | bVar8;
      (**(code **)(*plVar3 + 0x958))(plVar3);
    }
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 140691d54 FUN_140691d54 body=260 status=ok
// SIG undefined FUN_140691d54(void)

void FUN_140691d54(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    local_28._0_4_ = 0;
    iVar2 = 0;
    uVar1 = (uint)local_28;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    local_28 = (ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_28;
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  local_28._0_4_ = uVar1;
  local_28 = CONCAT44(iVar2,(uint)local_28);
  FUN_140691e5a(param_1 + 0x250,&local_28,1);
  local_28 = 0;
  FUN_140691e5a(param_1 + 0x250,&local_28,1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140691e5a FUN_140691e5a body=186 status=ok
// SIG undefined FUN_140691e5a(void)

int FUN_140691e5a(longlong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (int)param_1[1];
  iVar5 = iVar1;
  if (0 < iVar1) {
    uVar6 = 0;
    bVar2 = 0;
    do {
      cVar3 = FUN_140691f14((longlong)(int)uVar6 * 8 + *param_1,param_2);
      iVar5 = (int)param_1[1];
      if (cVar3 != '\0') {
        iVar4 = ~uVar6 + iVar5;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + (longlong)(int)uVar6 * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar4) * 8),(longlong)iVar4 << 3);
          iVar5 = (int)param_1[1];
        }
        uVar6 = uVar6 - 1;
        iVar5 = iVar5 + -1;
        *(int *)(param_1 + 1) = iVar5;
        bVar2 = 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar5);
    if ((bool)(param_3 == '\x01' & bVar2)) {
      FUN_140691f7c(param_1);
      iVar5 = (int)param_1[1];
    }
  }
  return iVar1 - iVar5;
}



// FUNCTION 140691f14 FUN_140691f14 body=104 status=ok
// SIG undefined FUN_140691f14(void)

ulonglong FUN_140691f14(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 140691f7c FUN_140691f7c body=135 status=ok
// SIG undefined FUN_140691f7c(void)

void FUN_140691f7c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,4);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,4);
    }
  }
  return;
}



// FUNCTION 140692004 FUN_140692004 body=2374 status=ok
// SIG undefined FUN_140692004(void)

void FUN_140692004(float *param_1,longlong param_2)

{
  ulonglong *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  char *pcVar15;
  float *pfVar16;
  char *pcVar17;
  ulonglong uVar18;
  float fVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_2f8 [32];
  ulonglong *local_2d8;
  ulonglong *local_2d0;
  ulonglong *local_2c8;
  undefined1 local_2c0;
  undefined8 local_2b0;
  double local_2a8;
  double local_2a0;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_260;
  undefined4 local_20c;
  undefined4 local_1e0;
  ulonglong local_1b0;
  float local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  double local_190;
  undefined4 local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  ulonglong local_178;
  undefined8 uStack_170;
  double local_168;
  int local_160;
  uint auStack_15c [3];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_bc;
  undefined4 local_90;
  uint local_88;
  int local_84;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  dVar2 = *(double *)(param_1 + 4);
  dVar20 = *(double *)(param_1 + 6);
  dVar3 = dVar2 * dVar2 + dVar20 * dVar20;
  if ((dVar3 != 1.0) || (NAN(dVar3))) {
    if (dVar3 < 9.99999993922529e-09) {
      uVar21 = (undefined4)DAT_14c8464f0;
      uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar20 = DAT_14c8464e8;
      dVar2 = DAT_14c8464e0;
    }
    else {
      uVar21 = 0;
      uVar22 = 0;
      dVar20 = dVar20 * (1.0 / SQRT(dVar3));
      dVar2 = dVar2 * (1.0 / SQRT(dVar3));
    }
  }
  else {
    uVar9 = -(ulonglong)(*(double *)(param_1 + 8) == 0.0) & (ulonglong)*(double *)(param_1 + 8);
    uVar21 = (undefined4)uVar9;
    uVar22 = (undefined4)(uVar9 >> 0x20);
  }
  *(double *)(param_2 + 8) = dVar2;
  *(double *)(param_2 + 0x10) = dVar20;
  *(ulonglong *)(param_2 + 0x18) = CONCAT44(uVar22,uVar21);
  if (*(longlong *)(param_1 + 0x1e) != 0) {
    lVar8 = FUN_14069294b();
    fVar19 = (float)((double)*(float *)(lVar8 + 0x24) + *(double *)(param_1 + 0x14));
    local_1a8 = ((float)((double)param_1[1] + *(double *)(param_1 + 0xe)) - fVar19) * 0.5;
    uVar4 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_2 + 0x40) = uVar4;
    local_190 = (double)(fVar19 + local_1a8);
    *(double *)(param_2 + 0x48) = local_190;
    dVar2 = (double)*(int *)(lVar8 + 0x20);
    local_190 = *(double *)(param_2 + 0x18) * dVar2 + local_190;
    uStack_198 = *(double *)(param_2 + 0x10) * dVar2 + *(double *)(param_2 + 0x40);
    local_1a0 = dVar2 * *(double *)(param_2 + 8) + *(double *)(param_2 + 0x38);
    local_1b0 = 0x3f80000000000003;
    memset(&local_2b0,0,0x100);
    local_1e0 = 0xffffffff;
    local_2b0 = (double)CONCAT44(0x3f800000,(undefined4)local_2b0);
    local_20c = 0xffffffff;
    local_2c0 = 0;
    local_2d8 = (ulonglong *)(param_2 + 0x38);
    local_2d0 = &local_1a0;
    local_2c8 = &local_1b0;
    cVar6 = FUN_140692a30(&local_2b0,*(undefined8 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20)
                          ,*(undefined1 *)(param_1 + 0x1a));
    if (cVar6 == '\0') {
      *(double *)(param_2 + 0x60) = local_190;
      *(undefined4 *)(param_2 + 0x50) = (undefined4)local_1a0;
      *(undefined4 *)(param_2 + 0x54) = local_1a0._4_4_;
      *(undefined4 *)(param_2 + 0x58) = (undefined4)uStack_198;
      *(undefined4 *)(param_2 + 0x5c) = uStack_198._4_4_;
      uVar7 = 1;
LAB_1406921de:
      *(undefined1 *)(param_2 + 0x268) = uVar7;
    }
    else {
      *(double *)(param_2 + 0x78) = local_260;
      *(undefined8 *)(param_2 + 0x68) = local_270;
      *(undefined8 *)(param_2 + 0x70) = uStack_268;
      *(undefined8 *)(param_2 + 0x50) = local_288;
      *(undefined8 *)(param_2 + 0x58) = uStack_280;
      *(undefined8 *)(param_2 + 0x60) = local_278;
      fVar19 = cosf(*(float *)(lVar8 + 0x2c) * 0.017453292);
      if ((double)fVar19 <= local_260) {
        *(byte *)(param_2 + 0x108) = *(byte *)(param_2 + 0x108) & 0xfe;
        uVar7 = 2;
        goto LAB_1406921de;
      }
      cVar6 = FUN_140692c1e(lVar8);
      if (cVar6 == '\0') {
        *(byte *)(param_2 + 0x108) = *(byte *)(param_2 + 0x108) & 0xfe;
        uVar7 = 3;
        goto LAB_1406921de;
      }
      *(byte *)(param_2 + 0x108) = *(byte *)(param_2 + 0x108) | 1;
      lVar8 = FUN_14069294b();
      *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_2 + 0x60);
      local_168 = (double)*(float *)(lVar8 + 0x28) + *(double *)(param_1 + 0x14);
      *(double *)(param_2 + 0xa8) = local_168;
      local_168 = (double)(param_1[1] * -6.0) + local_168;
      local_178 = *(ulonglong *)(param_2 + 0x98);
      uStack_170 = *(undefined8 *)(param_2 + 0xa0);
      fVar19 = *param_1;
      memset(&local_160,0,0x100);
      local_90 = 0xffffffff;
      auStack_15c[0] = 0x3f800000;
      local_bc = 0xffffffff;
      local_2c8 = (ulonglong *)&local_188;
      local_188 = 1;
      local_17c = 0x3f800000;
      local_2c0 = 0;
      local_2d8 = (ulonglong *)(param_2 + 0x98);
      local_2d0 = &local_178;
      local_184 = fVar19 * 0.1;
      local_180 = fVar19 * 0.1;
      cVar6 = FUN_140692a30(&local_160,*(undefined8 *)(param_1 + 0x1c),
                            *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x1a));
      if (cVar6 != '\0') {
        *(undefined8 *)(param_2 + 0xf0) = local_f8;
        *(undefined8 *)(param_2 + 0xe0) = local_108;
        *(undefined8 *)(param_2 + 0xe8) = uStack_100;
        *(undefined4 *)(param_2 + 0xb0) = local_150;
        *(undefined4 *)(param_2 + 0xb4) = uStack_14c;
        *(undefined4 *)(param_2 + 0xb8) = uStack_148;
        *(undefined4 *)(param_2 + 0xbc) = uStack_144;
        *(undefined8 *)(param_2 + 0xc0) = local_140;
      }
      if (*(longlong *)(param_1 + 0x1e) == 0) goto LAB_140692213;
      lVar8 = FUN_14069294b();
      local_2a0 = (double)*(float *)(lVar8 + 0x28) + *(double *)(param_1 + 0x14);
      dVar2 = *(double *)(param_1 + 0x12);
      *(double *)(param_2 + 0x20) = *(double *)(param_1 + 0x10) + 0.0;
      *(double *)(param_2 + 0x28) = dVar2 + 0.0;
      *(double *)(param_2 + 0x30) = local_2a0;
      local_2a8 = *(double *)(param_2 + 0x10) *
                  (double)*(float *)(*(longlong *)(param_1 + 0x1e) + 0x38) +
                  *(double *)(param_2 + 0x58);
      local_2b0 = (double)*(float *)(*(longlong *)(param_1 + 0x1e) + 0x38) *
                  *(double *)(param_2 + 8) + *(double *)(param_2 + 0x50);
      puVar1 = (ulonglong *)(param_2 + 0x20);
      memset(&local_160,0,0x100);
      local_90 = 0xffffffff;
      auStack_15c[0] = 0x3f800000;
      local_bc = 0xffffffff;
      local_178 = local_178 & 0xffffffff00000000;
      local_2c0 = 0;
      local_2d8 = puVar1;
      local_2d0 = &local_2b0;
      local_2c8 = &local_178;
      FUN_140692a30(&local_160,*(undefined8 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20),
                    *(undefined1 *)(param_1 + 0x1a));
      if ((((((local_84 == 0) || ((int)local_88 < 0)) || (DAT_14c9647dc <= (int)local_88)) ||
           ((plVar13 = (longlong *)
                       ((ulonglong)((local_88 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_88 >> 0x10) * 8)),
            plVar13 == (longlong *)0x0 || ((int)plVar13[2] != local_84)))) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) || (*plVar13 == 0)) {
        local_178 = *puVar1;
        uStack_170 = *(undefined8 *)(param_2 + 0x28);
        local_168 = *(double *)(param_2 + 0x30) - (double)*(float *)(lVar8 + 0x28);
        local_1a0 = (double)((ulonglong)local_1a0 & 0xffffffff00000000);
        local_2c0 = 0;
        local_2d8 = puVar1;
        local_2d0 = &local_178;
        local_2c8 = &local_1a0;
        FUN_140692a30(&local_160,*(undefined8 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20),
                      *(undefined1 *)(param_1 + 0x1a));
        if ((((local_84 == 0) || ((int)local_88 < 0)) ||
            ((DAT_14c9647dc <= (int)local_88 ||
             (((plVar13 = (longlong *)
                          ((ulonglong)((local_88 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_88 >> 0x10) * 8)),
               plVar13 == (longlong *)0x0 || ((int)plVar13[2] != local_84)) ||
              ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))))) || (*plVar13 == 0)) {
          cVar6 = FUN_140693434(param_1,param_2,0);
          if (cVar6 != '\0') {
            lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e) + 0x20);
            if (lVar8 != 0) {
              lVar12 = 0;
              do {
                if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x1e) + 0x18) + 0x3c + lVar12)
                    & 1) != 0) {
                  cVar6 = FUN_140693434(param_1,param_2,1);
                  if (cVar6 == '\0') goto LAB_1406921e4;
                  break;
                }
                lVar12 = lVar12 + 0x40;
              } while (lVar8 * 0x40 != lVar12);
            }
            *(undefined1 *)(param_2 + 0x268) = 0x18;
            *(undefined1 *)(param_2 + 0x110) = 1;
          }
        }
        else {
          *(undefined1 *)(param_2 + 0x268) = 5;
        }
      }
      else {
        *(undefined1 *)(param_2 + 0x268) = 4;
      }
    }
LAB_1406921e4:
    lVar8 = *(longlong *)(param_1 + 0x1e);
    if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x20) != 0)) {
      lVar12 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar8 + 0x18) + lVar12) == '\x01') {
          if (((*(char *)(param_2 + 0x268) != '\x18') &&
              (((*(double *)(param_2 + 0x50) != 0.0 || (NAN(*(double *)(param_2 + 0x50)))) ||
               ((*(double *)(param_2 + 0x58) != 0.0 ||
                (((NAN(*(double *)(param_2 + 0x58)) || (*(double *)(param_2 + 0x60) != 0.0)) ||
                 (NAN(*(double *)(param_2 + 0x60)))))))))) &&
             (cVar6 = FUN_1488e742e(param_1,param_2), cVar6 != '\0')) {
            FUN_1488e71b2(param_1,param_2);
          }
          break;
        }
        lVar12 = lVar12 + 0x40;
      } while ((longlong)*(int *)(lVar8 + 0x20) * 0x40 != lVar12);
    }
  }
LAB_140692213:
  if ((*(char *)(param_2 + 0x110) == '\0') && ((*(byte *)(param_2 + 0x270) & 1) == 0))
  goto LAB_14069222d;
  local_160 = -1;
  uVar5 = auStack_15c[0] >> 8;
  auStack_15c[0] = auStack_15c[0] & 0xffffff00;
  lVar8 = *(longlong *)(param_1 + 0x1e);
  if (lVar8 != 0) {
    uVar9 = (ulonglong)*(int *)(lVar8 + 0x20);
    if ((longlong)uVar9 < 1) {
      iVar10 = -1;
LAB_14069284b:
      auStack_15c[0] = CONCAT31((int3)uVar5,1);
    }
    else {
      cVar6 = *(char *)(param_1 + 0x26);
      pfVar16 = param_1 + 0x6a;
      if (cVar6 != '\0') {
        pfVar16 = param_1 + 0xc2;
      }
      uVar14 = 0xffffffff;
      uVar18 = 0;
      uVar11 = 0xffffffff;
      pcVar15 = (char *)0x0;
      do {
        iVar10 = (int)uVar11;
        pcVar17 = (char *)(uVar18 * 0x40 + *(longlong *)(lVar8 + 0x18));
        while (pcVar15 == (char *)0x0) {
          if (*pcVar17 == cVar6) goto LAB_14069275b;
          uVar18 = uVar18 + 1;
          pcVar17 = pcVar17 + 0x40;
          pcVar15 = (char *)0x0;
          if (uVar9 <= uVar18) {
            local_160 = (int)uVar14;
            goto LAB_14069284b;
          }
        }
        if ((*(float *)(pcVar15 + 0x30) <= *(float *)(pcVar17 + 0x30) &&
             *(float *)(pcVar17 + 0x30) != *(float *)(pcVar15 + 0x30)) && (*pcVar17 == cVar6)) {
LAB_14069275b:
          lVar12 = 0x78;
          if ((pcVar17[0x3c] & 1U) == 0) {
            lVar12 = 8;
          }
          if (((*(byte *)((longlong)pfVar16 + lVar12 + 0x68) & 1) != 0) &&
             (fVar19 = (float)(*(double *)((longlong)pfVar16 + lVar12 + 0x28) -
                              *(double *)(param_1 + 0xe)),
             *(float *)(pcVar17 + 0x30) <= fVar19 && fVar19 != *(float *)(pcVar17 + 0x30) ||
             cVar6 == '\x01')) {
            uVar14 = uVar18 & 0xffffffff;
            uVar11 = uVar18 & 0xffffffff;
            pcVar15 = pcVar17;
          }
        }
        iVar10 = (int)uVar11;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar9);
      local_160 = (int)uVar14;
      if (pcVar15 == (char *)0x0) goto LAB_14069284b;
      cVar6 = FUN_140692f68(param_1,param_1 + 0x26,pcVar15,auStack_15c);
      iVar10 = local_160;
      if (cVar6 == '\0') {
        local_160 = -1;
        goto LAB_1406927ea;
      }
    }
    if (iVar10 != -1) {
      auStack_15c[0] = CONCAT31(auStack_15c[0]._1_3_,4);
    }
  }
LAB_1406927ea:
  *(ulonglong *)(param_2 + 0x3c8) = CONCAT44(auStack_15c[0],local_160);
  if (local_160 == -1) {
    *(undefined1 *)(param_2 + 0x110) = 0;
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
LAB_14069222d:
  if ((local_60 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14069294b FUN_14069294b body=228 status=ok
// SIG undefined FUN_14069294b(void)

longlong * FUN_14069294b(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb85550 == (longlong *)0x0) {
    FUN_145c2d640(&DAT_14cb85558);
    DAT_14cb85550 = (longlong *)&DAT_14cb85558;
  }
  plVar1 = DAT_14cb85550;
  plVar3 = DAT_14cb85550 + 1;
  if ((char)DAT_14cb85550[2] == '\0') {
LAB_140692978:
    if (*plVar3 == 0) goto LAB_1406929d5;
    cVar2 = FUN_1449e3c20(DAT_14cb85550);
    if (cVar2 == '\0') goto LAB_14069298e;
  }
  else {
    if ((char)DAT_14cb85550[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_140692978;
    }
LAB_1406929d5:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_14069298e;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_mantle",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_14069298e:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140692a30 FUN_140692a30 body=492 status=ok
// SIG undefined FUN_140692a30(void)

bool FUN_140692a30(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined2 local_8f;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_7c = 0;
  local_98 = 0;
  local_78 = 0x101;
  local_50 = 0;
  local_48 = 0x800000000;
  local_30 = 0;
  local_28 = 0x400000000;
  local_90 = 0;
  local_84 = 0;
  local_8f = 1;
  local_8c = 0x1000000;
  local_88 = 1;
  local_8d = param_8;
  local_a0 = DAT_14cb85540;
  if (param_3 != 0) {
    local_40 = *(undefined4 *)(param_3 + 0xc);
    local_28 = 0x400000001;
  }
  local_b0 = &local_a0;
  local_a8 = &DAT_14cad0f10;
  local_b8 = param_7;
  local_c8 = &DAT_14c8463d0;
  local_c0 = 2;
  local_80 = param_4;
  cVar2 = FUN_14021655c(param_2,param_1,param_5,param_6);
  if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0xad) & 1) != 0)) {
    bVar4 = false;
    if ((*(float *)(param_1 + 4) <= 0.0) || (1.0 < *(float *)(param_1 + 4))) goto LAB_140692b52;
    if (*(int *)(param_1 + 0xdc) != 0) {
      uVar1 = *(uint *)(param_1 + 0xd8);
      bVar4 = false;
      if (((int)uVar1 < 0) || (bVar4 = false, DAT_14c9647dc <= (int)uVar1)) goto LAB_140692b52;
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 != (longlong *)0x0) &&
         (((int)plVar3[2] == *(int *)(param_1 + 0xdc) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)
          ))) {
        bVar4 = *plVar3 != 0;
        goto LAB_140692b52;
      }
    }
  }
  bVar4 = false;
LAB_140692b52:
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140692c1e FUN_140692c1e body=842 status=ok
// SIG undefined FUN_140692c1e(void)

ulonglong FUN_140692c1e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb85640) && (FUN_144b3d300(&DAT_14cb85640), DAT_14cb85640 == -1)) {
    FUN_1446f470e(&DAT_14cb85638,L"NoMantle");
    _Init_thread_footer(&DAT_14cb85640);
  }
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2 == (longlong *)0x0) {
LAB_140692f44:
    return uVar6 & 0xffffff01;
  }
LAB_140692c64:
  plVar2 = (longlong *)param_2[0x15];
  if (plVar2 == (longlong *)0x0) goto LAB_140692d2b;
  if ((DAT_14cb85638 != 0) && ((longlong)(int)plVar2[0x3f] != 0)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(plVar2[0x3e] + lVar7) == DAT_14cb85638) goto LAB_140692f42;
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)plVar2[0x3f] * 8 != lVar7);
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    if ((*(int *)(param_1 + 0x60) != 0) && (iVar1 = *(int *)(param_1 + 200), (longlong)iVar1 != 0))
    {
      lVar7 = *(longlong *)(param_1 + 0xc0);
      lVar8 = 0;
      bVar4 = DAT_14c950c29;
      do {
        lVar3 = *(longlong *)(lVar7 + lVar8);
        if ((lVar3 != 0 & bVar4) == 1) {
          FUN_1456cec3c(lVar3);
          bVar4 = DAT_14c950c29;
LAB_140692cdb:
          if ((bVar4 & 1) != 0) {
            FUN_1456cec3c(lVar3);
            bVar4 = DAT_14c950c29;
          }
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
              == lVar3 + 0x30)) goto LAB_140692f42;
        }
        else if (lVar3 != 0) goto LAB_140692cdb;
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
    if ((char)uVar6 == '\0') goto LAB_140692d2b;
    goto LAB_140692d10;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar7 = *(longlong *)(param_1 + 0xb0);
    lVar8 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(lVar7 + lVar8);
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
LAB_140692e6d:
        if ((bVar4 & 1) != 0) {
          FUN_1456cec3c(lVar3);
          bVar4 = DAT_14c950c29;
        }
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) goto LAB_140692f5a;
      }
      else if (lVar3 != 0) goto LAB_140692e6d;
      lVar8 = lVar8 + 8;
      uVar6 = 0;
      if ((longlong)iVar1 * 8 == lVar8) goto LAB_140692f44;
    } while( true );
  }
  goto LAB_140692f42;
LAB_140692f5a:
  uVar6 = 1;
LAB_140692d10:
  cVar5 = (**(code **)(*plVar2 + 0x538))(plVar2,0);
  uVar6 = uVar6 & 0xff;
  if (cVar5 == '\0') {
    uVar6 = 0;
  }
LAB_140692d2b:
  if ((char)uVar6 != '\0') {
    cVar5 = (**(code **)(*param_2 + 0x480))(param_2);
    if (cVar5 == '\0') {
      if ((DAT_14cb85638 != 0) && ((longlong)(int)param_2[0xf] != 0)) {
        lVar7 = 0;
        do {
          if (*(longlong *)(param_2[0xe] + lVar7) == DAT_14cb85638) goto LAB_140692f42;
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)param_2[0xf] * 8 != lVar7);
      }
      if (*(int *)(param_1 + 0x70) == 0) goto LAB_140692d65;
      iVar1 = *(int *)(param_1 + 0xd8);
      if ((longlong)iVar1 != 0) {
        lVar7 = *(longlong *)(param_1 + 0xd0);
        lVar8 = 0;
        bVar4 = DAT_14c950c29;
        do {
          lVar3 = *(longlong *)(lVar7 + lVar8);
          if ((lVar3 != 0 & bVar4) == 1) {
            FUN_1456cec3c(lVar3);
            bVar4 = DAT_14c950c29;
LAB_140692ef6:
            if ((bVar4 & 1) != 0) {
              FUN_1456cec3c(lVar3);
              bVar4 = DAT_14c950c29;
            }
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                lVar3 + 0x30)) goto LAB_140692f61;
          }
          else if (lVar3 != 0) goto LAB_140692ef6;
          lVar8 = lVar8 + 8;
          uVar6 = 0;
          if ((longlong)iVar1 * 8 == lVar8) goto LAB_140692f44;
        } while( true );
      }
    }
LAB_140692f42:
    uVar6 = 0;
    goto LAB_140692f44;
  }
LAB_140692d65:
  param_2 = (longlong *)param_2[0x24];
  if ((param_2 == (longlong *)0x0) || ((char)uVar6 == '\0')) goto LAB_140692f44;
  goto LAB_140692c64;
LAB_140692f61:
  uVar6 = CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),1);
  goto LAB_140692d65;
}



// FUNCTION 140692f68 FUN_140692f68 body=1227 status=ok
// SIG undefined FUN_140692f68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140692f68(longlong param_1,char *param_2,longlong param_3,undefined1 *param_4)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  float fVar16;
  double dVar17;
  
  bVar2 = *(byte *)(param_3 + 0x3c);
  if ((bVar2 & 2) == 0) {
LAB_1406931a6:
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((bVar2 & 1) == 0) goto LAB_1406933fa;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      pcVar4 = param_2 + 0x270;
      if (*param_2 == '\0') {
        pcVar4 = param_2 + 0x110;
      }
      if ((pcVar4[0xe0] & 1U) != 0) {
        dVar15 = *(double *)(param_2 + 0x68);
        dVar13 = *(double *)(param_2 + 0x70);
        dVar17 = 0.0;
        if (((dVar15 != 0.0) || (NAN(dVar15))) || ((dVar13 != 0.0 || (NAN(dVar13))))) {
          dVar17 = atan2(dVar13,dVar15);
          dVar17 = dVar17 * 57.29577951308232;
          dVar15 = *(double *)(param_2 + 0x68);
          dVar13 = *(double *)(param_2 + 0x70);
        }
        dVar10 = SQRT(dVar15 * dVar15 + dVar13 * dVar13);
        dVar13 = *(double *)(param_2 + 0x78);
        dVar15 = 0.0;
        if ((((dVar13 != 0.0) || (NAN(dVar13))) || (dVar10 != 0.0)) || (NAN(dVar10))) {
          dVar15 = atan2(dVar13,dVar10);
          dVar15 = dVar15 * 57.29577951308232;
        }
        auVar7._8_8_ = dVar17;
        auVar7._0_8_ = dVar15;
        auVar7 = divpd(auVar7,_DAT_1499387d0);
        auVar7 = roundpd(auVar7,auVar7,3);
        auVar12._0_8_ = dVar15 - auVar7._0_8_ * (double)DAT_1499387d0;
        auVar12._8_8_ = dVar17 - auVar7._8_8_ * DAT_1499387d0._8_8_;
        auVar14._0_8_ = (double)DAT_1499387d0 + auVar12._0_8_;
        auVar14._8_8_ = DAT_1499387d0._8_8_ + auVar12._8_8_;
        auVar8._8_8_ = -(ulonglong)(0.0 <= auVar12._8_8_);
        auVar8._0_8_ = -(ulonglong)(0.0 <= auVar12._0_8_);
        auVar7 = blendvpd(auVar14,auVar12,auVar8);
        auVar11._0_8_ = auVar7._0_8_ + 0.0;
        auVar11._8_8_ = auVar7._8_8_ + -360.0;
        auVar9._8_8_ = -(ulonglong)(180.0 < auVar7._8_8_);
        auVar9._0_8_ = -(ulonglong)(180.0 < auVar7._0_8_);
        auVar7 = blendvpd(auVar7,auVar11,auVar9);
        dVar15 = *(double *)(param_1 + 0x10);
        dVar13 = *(double *)(param_1 + 0x18);
        if (((dVar15 != 0.0) || (NAN(dVar15))) || ((dVar13 != 0.0 || (NAN(dVar13))))) {
          dVar17 = atan2(dVar13,dVar15);
          dVar15 = *(double *)(param_1 + 0x10);
          dVar13 = *(double *)(param_1 + 0x18);
          dVar17 = dVar17 * 57.29577951308232 + 180.0;
        }
        else {
          dVar17 = 180.0;
        }
        dVar15 = SQRT(dVar15 * dVar15 + dVar13 * dVar13);
        dVar13 = *(double *)(param_1 + 0x20);
        if (((dVar13 != 0.0) || (NAN(dVar13))) || ((dVar15 != 0.0 || (NAN(dVar15))))) {
          atan2(dVar13,dVar15);
        }
        dVar13 = (double)FUN_144719204(dVar17,0x4076800000000000);
        dVar13 = (double)(~-(ulonglong)(dVar13 < 0.0) & (ulonglong)dVar13 |
                         (ulonglong)(dVar13 + 360.0) & -(ulonglong)(dVar13 < 0.0));
        dVar13 = (double)FUN_144719204(auVar7._8_8_ -
                                       (double)(~-(ulonglong)(180.0 < dVar13) & (ulonglong)dVar13 |
                                               (ulonglong)(dVar13 + -360.0) &
                                               -(ulonglong)(180.0 < dVar13)),0x4076800000000000);
        dVar13 = (double)(~-(ulonglong)(dVar13 < 0.0) & (ulonglong)dVar13 |
                         (ulonglong)(dVar13 + 360.0) & -(ulonglong)(dVar13 < 0.0));
        if (ABS((double)(~-(ulonglong)(180.0 < dVar13) & (ulonglong)dVar13 |
                        (ulonglong)(dVar13 + -360.0) & -(ulonglong)(180.0 < dVar13))) <
            (double)*(float *)(*(longlong *)(param_1 + 0x78) + 0x30)) goto LAB_1406933fa;
      }
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 3;
    }
  }
  else {
    pcVar4 = param_2 + 0x270;
    if (*param_2 == '\0') {
      pcVar4 = param_2 + 0x110;
    }
    pcVar6 = pcVar4 + 8;
    if ((bVar2 & 1) != 0) {
      pcVar6 = pcVar4 + 0x78;
    }
    lVar3 = FUN_14069294b();
    dVar15 = *(double *)(param_2 + 0x50) - *(double *)(param_1 + 0x28);
    dVar17 = *(double *)(param_2 + 0x58) - *(double *)(param_1 + 0x30);
    dVar13 = (*(double *)(pcVar6 + 0x28) - (double)*(float *)(param_1 + 4)) -
             *(double *)(param_1 + 0x38);
    if ((((dVar15 != 0.0) || (NAN(dVar15))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
      atan2(dVar17,dVar15);
    }
    dVar17 = SQRT(dVar15 * dVar15 + dVar17 * dVar17);
    dVar15 = 0.0;
    if (((dVar13 != 0.0) || (NAN(dVar13))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
      dVar15 = atan2(dVar13,dVar17);
      dVar15 = dVar15 * 57.29577951308232;
    }
    dVar13 = (double)FUN_144719204(dVar15,0x4076800000000000);
    dVar17 = (double)(~-(ulonglong)(dVar13 < 0.0) & (ulonglong)dVar13 |
                     (ulonglong)(dVar13 + 360.0) & -(ulonglong)(dVar13 < 0.0));
    dVar15 = *(double *)(param_1 + 0x10);
    dVar13 = *(double *)(param_1 + 0x18);
    if (((dVar15 != 0.0) || (NAN(dVar15))) || ((dVar13 != 0.0 || (NAN(dVar13))))) {
      atan2(dVar13,dVar15);
      dVar15 = *(double *)(param_1 + 0x10);
      dVar13 = *(double *)(param_1 + 0x18);
    }
    dVar10 = SQRT(dVar15 * dVar15 + dVar13 * dVar13);
    dVar13 = *(double *)(param_1 + 0x20);
    dVar15 = 0.0;
    if ((((dVar13 != 0.0) || (NAN(dVar13))) || (dVar10 != 0.0)) || (NAN(dVar10))) {
      dVar15 = atan2(dVar13,dVar10);
      dVar15 = dVar15 * 57.29577951308232;
    }
    dVar13 = (double)FUN_144719204(dVar15);
    dVar13 = (double)(~-(ulonglong)(dVar13 < 0.0) & (ulonglong)dVar13 |
                     (ulonglong)(dVar13 + 360.0) & -(ulonglong)(dVar13 < 0.0));
    fVar1 = *(float *)(lVar3 + 0x3c);
    fVar16 = ABS((float)(double)(~-(ulonglong)(180.0 < dVar17) & (ulonglong)dVar17 |
                                (ulonglong)(dVar17 + -360.0) & -(ulonglong)(180.0 < dVar17)) -
                 (float)(double)(~-(ulonglong)(180.0 < dVar13) & (ulonglong)dVar13 |
                                (ulonglong)(dVar13 + -360.0) & -(ulonglong)(180.0 < dVar13)));
    if ((param_4 != (undefined1 *)0x0) && (fVar1 < fVar16)) {
      *param_4 = 2;
    }
    if (fVar16 <= fVar1) {
      bVar2 = *(byte *)(param_3 + 0x3c);
      goto LAB_1406931a6;
    }
  }
  uVar5 = 0;
LAB_1406933fa:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140693434 FUN_140693434 body=3708 status=ok
// SIG undefined FUN_140693434(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140693434(float *param_1,longlong param_2,char param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  ulonglong uVar16;
  double *pdVar17;
  longlong *plVar18;
  int *piVar19;
  longlong lVar20;
  bool bVar21;
  undefined4 uVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_418 [32];
  double *local_3f8;
  undefined8 *local_3f0;
  undefined8 *local_3e8;
  double *local_3e0;
  undefined1 *local_3d8;
  char local_3cd;
  uint local_3cc;
  double *local_3c8;
  ulonglong *local_3c0;
  double *local_3b8;
  longlong local_3b0;
  undefined1 local_3a8 [4];
  undefined4 local_3a4;
  double local_398;
  double local_390;
  double local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 local_370;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined4 local_304;
  byte local_2fb;
  undefined4 local_2d8;
  uint local_2d0;
  int local_2cc;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  undefined2 local_290;
  bool bStack_28e;
  undefined1 uStack_28d;
  undefined1 local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  undefined8 local_248;
  float local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  double local_210;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  double local_1e0;
  undefined4 local_1a4;
  byte local_19b;
  undefined4 local_178;
  uint local_170;
  uint local_16c;
  undefined8 local_158;
  undefined4 local_148;
  float local_144;
  double local_138;
  double dStack_130;
  double local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined4 local_114;
  undefined2 local_110;
  int local_108;
  int local_104 [7];
  int *local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  longlong local_c8;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  if (*(longlong *)(param_1 + 0x1e) != 0) {
    uVar12 = FUN_14069294b();
    lVar15 = param_2 + 8;
    if (param_3 != '\0') {
      lVar15 = param_2 + 0x78;
    }
    pdVar17 = (double *)(lVar15 + 0x110);
    if (param_3 == '\0') {
      uVar22 = (undefined4)*(undefined8 *)(param_2 + 8);
      uVar23 = (uint)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
      dVar24 = *(double *)(param_2 + 0x10);
      dVar26 = *(double *)(param_2 + 0x18);
    }
    else {
      dVar2 = *(double *)(param_2 + 0x68);
      dVar3 = *(double *)(param_2 + 0x70);
      dVar25 = dVar2 * dVar2 + dVar3 * dVar3;
      if ((dVar25 != 1.0) || (NAN(dVar25))) {
        dVar24 = DAT_14c8464e8;
        dVar26 = DAT_14c8464f0;
        dVar4 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar25) {
          dVar24 = dVar3 * (1.0 / SQRT(dVar25));
          dVar26 = 0.0;
          dVar4 = dVar2 * (1.0 / SQRT(dVar25));
        }
      }
      else {
        dVar24 = dVar3;
        dVar26 = (double)(-(ulonglong)(*(double *)(param_2 + 0x78) == 0.0) &
                         (ulonglong)*(double *)(param_2 + 0x78));
        dVar4 = dVar2;
      }
      dVar26 = -dVar26;
      dVar24 = -dVar24;
      uVar23 = (uint)((ulonglong)dVar4 >> 0x20) ^ 0x80000000;
      uVar22 = SUB84(dVar4,0);
    }
    dVar2 = *(double *)(param_1 + 10);
    dVar3 = *(double *)(param_1 + 0xc);
    dVar25 = *(double *)(param_1 + 0xe);
    dVar27 = (double)*(float *)(*(longlong *)(param_1 + 0x1e) + 0x38);
    dVar4 = *(double *)(param_2 + 0x60);
    uStack_2a0 = dVar24 * dVar27 + *(double *)(param_2 + 0x58);
    local_2a8 = (double)CONCAT44(uVar23,uVar22) * dVar27 + *(double *)(param_2 + 0x50);
    *pdVar17 = local_2a8;
    *(double *)(lVar15 + 0x118) = uStack_2a0;
    *(double *)(lVar15 + 0x120) = dVar26 * dVar27 + dVar4;
    local_298 = (double)(param_1[1] + param_1[1]) + *(double *)(param_2 + 0xc0);
    *(double *)(lVar15 + 0x120) = local_298;
    local_298 = (double)(param_1[1] * -3.0) + local_298;
    fVar1 = *param_1;
    memset(local_3a8,0,0x100);
    local_2d8 = 0xffffffff;
    local_3a4 = 0x3f800000;
    local_304 = 0xffffffff;
    local_3e8 = &local_248;
    local_248._0_4_ = 1;
    local_23c = 0x3f800000;
    local_3e0 = (double *)((ulonglong)local_3e0 & 0xffffffffffffff00);
    local_3f8 = pdVar17;
    local_3f0 = &local_2a8;
    local_248._4_4_ = fVar1 * 0.5;
    local_240 = fVar1 * 0.5;
    cVar8 = FUN_140692a30(local_3a8,*(undefined8 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20),
                          *(undefined1 *)(param_1 + 0x1a));
    if (cVar8 == '\0') {
      *(double *)(lVar15 + 0x138) = local_298;
      *(undefined4 *)(lVar15 + 0x128) = (undefined4)local_2a8;
      *(undefined4 *)(lVar15 + 300) = local_2a8._4_4_;
      *(undefined4 *)(lVar15 + 0x130) = (undefined4)uStack_2a0;
      *(undefined4 *)(lVar15 + 0x134) = uStack_2a0._4_4_;
      if ((local_2fb & 2) == 0) {
        cVar8 = (param_3 != '\0') * '\t' + '\x06';
      }
      else {
        cVar8 = (param_3 != '\0') * '\t' + '\a';
      }
    }
    else {
      *(undefined8 *)(lVar15 + 0x168) = local_340;
      *(undefined8 *)(lVar15 + 0x158) = local_350;
      *(undefined8 *)(lVar15 + 0x160) = uStack_348;
      fVar1 = param_1[1];
      *(double *)(lVar15 + 0x128) = local_398 + 0.0;
      *(double *)(lVar15 + 0x130) = local_390 + 0.0;
      *(double *)(lVar15 + 0x138) = (double)fVar1 + local_388;
      *(undefined8 *)(lVar15 + 0x150) = local_370;
      *(undefined4 *)(lVar15 + 0x140) = local_380;
      *(undefined4 *)(lVar15 + 0x144) = uStack_37c;
      *(undefined4 *)(lVar15 + 0x148) = uStack_378;
      *(undefined4 *)(lVar15 + 0x14c) = uStack_374;
      iVar11 = DAT_14c9647dc;
      lVar20 = DAT_14c9647c8;
      if ((((local_2cc == 0) || ((int)local_2d0 < 0)) || (DAT_14c9647dc <= (int)local_2d0)) ||
         (((plVar18 = (longlong *)
                      ((ulonglong)((local_2d0 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_2d0 >> 0x10) * 8)),
           plVar18 == (longlong *)0x0 || ((int)plVar18[2] != local_2cc)) ||
          (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 || (*plVar18 == 0)))))) {
        *(undefined8 *)(lVar15 + 0x170) = 0;
      }
      else {
        uVar23 = *(uint *)(*plVar18 + 0xc);
        *(uint *)(lVar15 + 0x170) = uVar23;
        if ((int)uVar23 < iVar11) {
          lVar20 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                   *(longlong *)(lVar20 + (ulonglong)(uVar23 >> 0x10) * 8);
        }
        else {
          lVar20 = 0;
        }
        if (*(int *)(lVar20 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar11 = *(int *)(lVar20 + 0x10);
          bVar21 = iVar11 == 0;
          if (bVar21) {
            *(int *)(lVar20 + 0x10) = iVar10;
            iVar11 = 0;
          }
          UNLOCK();
          if (bVar21) {
            iVar11 = iVar10;
          }
          *(int *)(lVar15 + 0x174) = iVar11;
        }
        else {
          *(int *)(lVar15 + 0x174) = *(int *)(lVar20 + 0x10);
        }
      }
      cVar8 = FUN_140692c1e(uVar12);
      uVar16 = 0;
      if (cVar8 == '\0') goto LAB_140693e2a;
      local_3cd = param_3;
      local_3b0 = param_2;
      memset(&local_248,0,0x100);
      local_178 = 0xffffffff;
      local_248._4_4_ = 1.0;
      local_1a4 = 0xffffffff;
      local_258 = *(double *)(lVar15 + 0x120);
      local_268 = *pdVar17;
      uStack_260 = *(double *)(lVar15 + 0x118);
      local_278 = *(double *)(lVar15 + 0x138) - (double)param_1[1];
      local_288 = *(double *)(lVar15 + 0x128);
      uStack_280 = *(double *)(lVar15 + 0x130);
      local_144 = *param_1;
      local_148 = 2;
      local_114 = 0;
      dStack_130 = 0.0;
      local_110 = 0x101;
      local_e8 = (int *)0x0;
      local_e0 = 0x800000000;
      local_c8 = 0;
      local_c0 = 0x400000000;
      local_11c = 0;
      local_128 = 7.291122019556812e-304;
      local_120 = 1;
      local_138 = DAT_14cb85540;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        local_d8 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xc);
        local_c0 = 0x400000001;
      }
      local_3c0 = (ulonglong *)(lVar15 + 0x158);
      local_3c8 = (double *)(lVar15 + 0x140);
      local_118 = *(undefined1 *)(param_1 + 0x1a);
      local_3cc = 1;
      bVar21 = false;
      local_3b8 = pdVar17;
      do {
        local_3d8 = &DAT_14cad0f10;
        local_3e0 = &local_138;
        local_3f8 = (double *)&DAT_14c8463d0;
        local_3f0 = (undefined8 *)CONCAT44(local_3f0._4_4_,2);
        local_3e8 = (undefined8 *)&local_148;
        bVar9 = FUN_14021655c(*(undefined8 *)(param_1 + 0x1c),&local_248,&local_268,&local_288);
        if (((((bVar9 & local_19b) == 1) && (0.0 < local_248._4_4_)) &&
            ((local_248._4_4_ <= 1.0 &&
             ((((local_16c != 0 && (-1 < (int)local_170)) && ((int)local_170 < DAT_14c9647dc)) &&
              ((plVar18 = (longlong *)
                          ((ulonglong)((local_170 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_170 >> 0x10) * 8)),
               plVar18 != (longlong *)0x0 && (*(uint *)(plVar18 + 2) == local_16c)))))))) &&
           ((uVar23 = *(uint *)(plVar18 + 1), (uVar23 & 0x10200000) == 0 && (*plVar18 != 0))))
        goto LAB_140694115;
        if ((local_19b & 2) == 0) {
          uVar23 = (uint)(local_3cd != '\0') * 9 + 10;
          if (!bVar21) {
            uVar23 = (uint)(local_3cd != '\0') * 9 + 9;
          }
          bVar7 = false;
          break;
        }
        bVar7 = true;
        uVar23 = local_16c;
        if (((local_16c == 0) || ((int)local_170 < 0)) ||
           ((DAT_14c9647dc <= (int)local_170 ||
            ((plVar18 = (longlong *)
                        ((ulonglong)((local_170 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_170 >> 0x10) * 8)),
             plVar18 == (longlong *)0x0 || (*(uint *)(plVar18 + 2) != local_16c)))))) {
LAB_140694115:
          bVar7 = true;
          break;
        }
        uVar23 = *(uint *)(plVar18 + 1);
        piVar13 = (int *)(ulonglong)uVar23;
        if ((uVar23 & 0x10200000) != 0) goto LAB_140694115;
        plVar18 = (longlong *)*plVar18;
        if (plVar18 == (longlong *)0x0) {
LAB_140693c2c:
          uVar23 = (uint)piVar13;
          break;
        }
        iVar11 = *(int *)((longlong)plVar18 + 0xc);
        if (local_110._1_1_ == '\0') {
          local_110 = CONCAT11(1,(undefined1)local_110);
          if (1 < (int)local_e0) {
            piVar13 = local_e8;
            if (local_e8 == (int *)0x0) {
              piVar13 = &local_108;
            }
            FUN_1449e0cb6(piVar13,local_e0 & 0xffffffff,DAT_14c9647c8,&local_290);
            piVar13 = local_e8;
            if (local_e8 == (int *)0x0) {
              piVar13 = &local_108;
            }
            if ((longlong)(int)local_e0 != 1) {
              piVar19 = piVar13 + (int)local_e0;
              piVar14 = local_104;
              if (local_e8 != (int *)0x0) {
                piVar14 = local_e8 + 1;
              }
              iVar10 = *piVar13;
              do {
                iVar6 = *piVar14;
                if (iVar10 != iVar6) {
                  piVar13[1] = iVar6;
                  piVar13 = piVar13 + 1;
                }
                piVar14 = piVar14 + 1;
                iVar10 = iVar6;
              } while (piVar14 != piVar19);
            }
            piVar19 = local_e8;
            if (local_e8 == (int *)0x0) {
              piVar19 = &local_108;
            }
            FUN_1479ab1f6(&local_108,
                          (int)((ulonglong)((longlong)piVar13 - (longlong)piVar19) >> 2) + 1,0);
          }
        }
        piVar13 = local_e8;
        if (local_e8 == (int *)0x0) {
          piVar13 = &local_108;
        }
        if ((int)local_e0 != 0) {
          lVar15 = 0;
          do {
            if (*(int *)((longlong)piVar13 + lVar15) == iVar11) goto LAB_140693c2c;
            lVar15 = lVar15 + 4;
          } while ((longlong)(int)local_e0 * 4 != lVar15);
        }
        FUN_1406942b2(&local_138,iVar11);
        uVar23 = local_3cc;
        if (((((plVar18[0xa3] != 0) &&
              (lVar15 = (**(code **)(*plVar18 + 0x7b8))(plVar18,local_158,1,0xffffffff), lVar15 != 0
              )) && (*(int *)(lVar15 + 0x144) != 0)) &&
            ((uVar5 = *(uint *)(lVar15 + 0x140), -1 < (int)uVar5 && ((int)uVar5 < DAT_14c9647dc))))
           && (((plVar18 = (longlong *)
                           ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                plVar18 != (longlong *)0x0 &&
                (((int)plVar18[2] == *(int *)(lVar15 + 0x144) &&
                 ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)))) && (*plVar18 != 0)))) {
          FUN_1406942b2(&local_138,*(undefined4 *)(*plVar18 + 0xc));
        }
        local_258 = local_228;
        local_268 = (double)CONCAT44(uStack_234,local_238);
        uStack_260 = (double)CONCAT44(uStack_22c,uStack_230);
        local_3cc = uVar23 + 1;
        bVar21 = true;
        bVar7 = true;
        uVar23 = SUB84(local_228,0);
      } while (local_3cc != 0x15);
      local_3cc = uVar23;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      param_2 = local_3b0;
      pdVar17 = local_3b8;
      if (local_e8 != (int *)0x0) {
        FUN_1400020a8();
      }
      if (bVar7) {
        local_278 = DAT_14c8464f0;
        local_288 = DAT_14c8464e0;
        uStack_280 = DAT_14c8464e8;
        local_128 = pdVar17[2];
        local_138 = *pdVar17;
        dStack_130 = pdVar17[1];
        dVar24 = (double)(param_1[1] - *param_1) + local_228;
        local_258 = local_210;
        local_268 = (double)CONCAT44(uStack_21c,local_220);
        uStack_260 = (double)CONCAT44(uStack_214,uStack_218);
        uVar23 = 0;
        if (local_16c == 0) {
          iVar11 = 0;
        }
        else if (((((int)local_170 < 0) || (DAT_14c9647dc <= (int)local_170)) ||
                 (plVar18 = (longlong *)
                            ((ulonglong)((local_170 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_170 >> 0x10) * 8)),
                 plVar18 == (longlong *)0x0)) ||
                ((*(uint *)(plVar18 + 2) != local_16c ||
                 ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) {
          iVar11 = 0;
        }
        else {
          uVar23 = 0;
          iVar11 = 0;
          if (*plVar18 != 0) {
            uVar23 = *(uint *)(*plVar18 + 0xc);
            if ((int)uVar23 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
            }
            else {
              lVar15 = 0;
            }
            iVar11 = *(int *)(lVar15 + 0x10);
            if (*(int *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar11 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar11;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              LOCK();
              iVar11 = *(int *)(lVar15 + 0x10);
              bVar21 = iVar11 == 0;
              if (bVar21) {
                *(int *)(lVar15 + 0x10) = iVar10;
                iVar11 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar11 = iVar10;
              }
            }
          }
        }
        cVar8 = local_3cd;
        local_278 = local_1e0;
        local_288 = (double)CONCAT44(uStack_1ec,local_1f0);
        uStack_280 = (double)CONCAT44(uStack_1e4,uStack_1e8);
        _local_290 = CONCAT13(1,CONCAT12(*(char *)((longlong)param_1 + 0x69) == '\v',1));
        local_28c = 1;
        iVar10 = FUN_1406942f8(param_1);
        if (iVar10 == 0) {
          if ((*(longlong *)(param_1 + 0x1e) == 0) ||
             (*(float *)(*(longlong *)(param_1 + 0x1e) + 0x34) < ABS((float)(dVar24 - pdVar17[5]))))
          {
            cVar8 = (cVar8 != '\0') * '\t' + '\r';
          }
          else {
            pdVar17[2] = local_128;
            *pdVar17 = local_138;
            pdVar17[1] = dStack_130;
            pdVar17[3] = (double)CONCAT44(uStack_234,local_238) + 0.0;
            pdVar17[4] = (double)CONCAT44(uStack_22c,uStack_230) + 0.0;
            pdVar17[5] = dVar24;
            local_3c8[2] = local_258;
            *local_3c8 = local_268;
            local_3c8[1] = uStack_260;
            local_3c0[2] = (ulonglong)local_278;
            *local_3c0 = (ulonglong)local_288;
            local_3c0[1] = (ulonglong)uStack_280;
            *(uint *)(pdVar17 + 0xc) = uVar23;
            *(int *)((longlong)pdVar17 + 100) = iVar11;
            *(undefined1 *)(pdVar17 + 0xd) = 0;
            *(undefined4 *)((longlong)pdVar17 + 0x69) = local_148;
            *(uint *)((longlong)pdVar17 + 0x6c) = CONCAT31(local_144._0_3_,local_148._3_1_);
            local_128 = dVar25 + (double)param_1[1];
            dStack_130 = dVar3 + 0.0;
            local_138 = dVar2 + 0.0;
            local_258 = (double)param_1[1] + pdVar17[5];
            uStack_260 = pdVar17[4] + 0.0;
            local_268 = pdVar17[3] + 0.0;
            memset(&local_248,0,0x100);
            local_178 = 0xffffffff;
            local_248._4_4_ = 1.0;
            local_1a4 = 0xffffffff;
            local_288 = (double)((ulonglong)local_288 & 0xffffffff00000000);
            local_3e0 = (double *)((ulonglong)local_3e0 & 0xffffffffffffff00);
            local_3e8 = &local_288;
            local_3f0 = &local_268;
            local_3f8 = &local_138;
            FUN_140692a30(&local_248,*(undefined8 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20)
                          ,*(undefined1 *)(param_1 + 0x1a));
            if (((((local_16c == 0) || ((int)local_170 < 0)) || (DAT_14c9647dc <= (int)local_170))
                || ((plVar18 = (longlong *)
                               ((ulonglong)((local_170 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_170 >> 0x10) * 8)),
                    plVar18 == (longlong *)0x0 || (*(uint *)(plVar18 + 2) != local_16c)))) ||
               (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 || (*plVar18 == 0)))) {
              *(byte *)(pdVar17 + 0xd) = *(byte *)(pdVar17 + 0xd) | 1;
              uVar16 = CONCAT71((int7)((ulonglong)&local_248 >> 8),1);
              goto LAB_140693e2a;
            }
            cVar8 = (local_3cd != '\0') * '\t' + '\x0e';
          }
        }
        else if (iVar10 == 3) {
          cVar8 = (cVar8 != '\0') * '\t' + '\f';
        }
        else if (iVar10 == 2) {
          cVar8 = (cVar8 != '\0') * '\t' + '\v';
        }
        else {
          cVar8 = '\0';
        }
      }
      else {
        cVar8 = (char)local_3cc;
      }
    }
    *(char *)(param_2 + 0x268) = cVar8;
  }
  uVar16 = 0;
LAB_140693e2a:
  if ((local_b0 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406942b2 FUN_1406942b2 body=69 status=ok
// SIG undefined FUN_1406942b2(void)

void FUN_1406942b2(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
    FUN_140694806(param_1 + 0x30,iVar1);
  }
  lVar2 = param_1 + 0x30;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 1406942f8 FUN_1406942f8 body=1062 status=ok
// SIG undefined FUN_1406942f8(void)

undefined8 FUN_1406942f8(longlong param_1,longlong param_2,char *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined4 *local_e8;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
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
  undefined4 local_68;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_3[1] == '\x01') {
    uVar2 = *(undefined1 *)(param_1 + 0x68);
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    local_a4 = 0;
    local_c0 = 0;
    local_a0 = 0x101;
    local_78 = 0;
    local_70 = 0x800000000;
    local_58 = 0;
    local_50 = 0x400000000;
    local_b8 = 0;
    local_ac = 0;
    local_b7 = 1;
    local_b5 = 0;
    local_a8 = 0;
    local_b4 = 0x1000000;
    local_b0 = 1;
    local_c8 = DAT_14cb85540;
    FUN_144a85a22(&local_c8,*(undefined8 *)(param_1 + 0x80));
    local_f8 = (undefined8 *)&DAT_14cad0f10;
    local_108 = (longlong *)(param_1 + 0x58);
    local_100 = &local_c8;
    local_a8 = uVar2;
    cVar7 = FUN_140ad659e(uVar8,param_2 + 0x18,&DAT_14c8463d0);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    uVar8 = 1;
    if (cVar7 != '\0') goto LAB_14069455d;
  }
  uVar8 = FUN_14069294b();
  if (*(int *)(param_2 + 100) == 0) {
LAB_140694592:
    uVar11 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x60);
    uVar11 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(param_2 + 100) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_140694592;
      uVar11 = *puVar12;
    }
  }
  cVar7 = FUN_140692c1e(uVar8,uVar11);
  if (cVar7 == '\0') {
    uVar8 = 2;
  }
  else if ((*param_3 != '\x01') ||
          ((double)*(float *)(param_1 + 8) < *(double *)(param_2 + 0x58) ||
           (double)*(float *)(param_1 + 8) == *(double *)(param_2 + 0x58))) {
    if (param_3[2] == '\x01') {
      plVar4 = *(longlong **)(param_1 + 0x88);
      plVar5 = *(longlong **)(param_1 + 0x90);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (plVar4 == (longlong *)0x0) {
        cVar7 = '\0';
      }
      else {
        cVar7 = (**(code **)(*plVar4 + 0x68))(plVar4,param_2 + 0x18);
      }
      if (plVar5 != (longlong *)0x0) {
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
      uVar8 = 4;
      if (cVar7 != '\0') goto LAB_14069455d;
    }
    if (param_3[3] == '\x01') {
      local_a8 = *(undefined1 *)(param_1 + 0x68);
      local_a4 = 0;
      local_c0 = 0;
      local_a0 = 0x101;
      local_78 = 0;
      local_70 = 0x800000000;
      local_58 = 0;
      local_50 = 0x400000000;
      local_b8 = 0;
      local_ac = 0;
      local_b7 = 1;
      local_b5 = 0;
      local_b4 = 0x1000000;
      local_b0 = 1;
      local_c8 = DAT_14cb85540;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        local_68 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0xc);
        local_50 = 0x400000001;
      }
      local_f8 = &local_c8;
      local_108 = &local_d8;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = &DAT_14cad0f08;
      local_f0 = &DAT_14cad0f10;
      local_100 = (undefined8 *)CONCAT44(local_100._4_4_,2);
      FUN_14052f4ca(*(undefined8 *)(param_1 + 0x70),param_1 + 0x58,param_2 + 0x18,&DAT_14c8463d0);
      if ((longlong)(int)uStack_d0 == 0) {
        bVar6 = true;
      }
      else {
        lVar13 = (longlong)(int)uStack_d0 * 0x48;
        lVar14 = local_d8;
        do {
          lVar9 = FUN_14485cccc(lVar14);
          if (lVar9 != 0) {
            lVar10 = FUN_140694720();
            if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
              bVar6 = false;
              goto LAB_140694523;
            }
          }
          lVar14 = lVar14 + 0x48;
          lVar13 = lVar13 + -0x48;
        } while (lVar13 != 0);
        bVar6 = true;
      }
LAB_140694523:
      if (local_d8 != 0) {
        FUN_1400020a8(local_d8);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (!bVar6) {
        uVar8 = 5;
        goto LAB_14069455d;
      }
    }
    uVar8 = 0;
  }
  else {
    uVar8 = 3;
  }
LAB_14069455d:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140694720 FUN_140694720 body=228 status=ok
// SIG undefined FUN_140694720(void)

longlong FUN_140694720(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb60508 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140fe7df2;
    local_38 = &LAB_1486c533d;
    local_40 = &LAB_1458507fc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3c8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxMantleBlockingVolume",&DAT_14cb60508,&DAT_1486c533c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60508;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140694806 FUN_140694806 body=346 status=ok
// SIG undefined FUN_140694806(void)

void FUN_140694806(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 9) {
    uVar6 = 8;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (8 < *(uint *)(param_1 + 0x2c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140694883;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_140694883:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 2)) {
      uVar6 = uVar4 >> 2 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x2c) = (int)uVar6;
  FUN_140694960(param_1,param_2,uVar6,4);
  return;
}



// FUNCTION 140694960 FUN_140694960 body=132 status=ok
// SIG undefined FUN_140694960(void)

void FUN_140694960(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 1406949e4 FUN_1406949e4 body=54 status=ok
// SIG undefined FUN_1406949e4(void)

void FUN_1406949e4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_140694a1a(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14afb5c70;
  puVar1[0x19] = &PTR_FUN_14afb5f20;
  return;
}



// FUNCTION 140694a1a FUN_140694a1a body=139 status=ok
// SIG undefined FUN_140694a1a(void)

undefined8 * FUN_140694a1a(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a3bdb00;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 140694aac FUN_140694aac body=2762 status=ok
// SIG undefined FUN_140694aac(void)

undefined8 FUN_140694aac(longlong param_1,double *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined8 *puStack_380;
  double *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  int *local_360;
  double *local_358;
  undefined8 local_350;
  byte local_348;
  int local_338;
  uint local_334;
  double *local_330;
  double *local_328;
  longlong local_320;
  longlong local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  double local_2e0;
  double local_2d8 [12];
  double local_278;
  double dStack_270;
  double local_268;
  int local_254;
  double local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  double local_208 [2];
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  undefined4 local_1d8;
  undefined2 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  float local_198;
  undefined4 local_188;
  uint uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  dVar4 = *param_2;
  uVar10 = 1;
  if ((dVar4 != 0.0) && (*(int *)((longlong)dVar4 + 0x58) == *(int *)(param_2 + 2))) {
    iVar17 = *(int *)((longlong)dVar4 + 0x88);
    local_158._8_4_ = SUB84((double)*(float *)((longlong)dVar4 + 0x44),0);
    local_158._0_8_ = (double)*(float *)((longlong)dVar4 + 0x40);
    local_158._12_4_ = (int)((ulonglong)(double)*(float *)((longlong)dVar4 + 0x44) >> 0x20);
    local_148._8_4_ = SUB84((double)*(float *)((longlong)dVar4 + 0x4c),0);
    local_148._0_8_ = (double)*(float *)((longlong)dVar4 + 0x48);
    local_148._12_4_ = (int)((ulonglong)(double)*(float *)((longlong)dVar4 + 0x4c) >> 0x20);
    local_138 = *(undefined8 *)((longlong)dVar4 + 0x20);
    uStack_130 = *(undefined8 *)((longlong)dVar4 + 0x28);
    local_128 = *(undefined8 *)((longlong)dVar4 + 0x30);
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0;
    plVar5 = *(longlong **)(param_1 + 0x90);
    local_338 = iVar17;
    if (plVar5 == (longlong *)0x0) {
      local_160 = *(double *)(param_1 + 0x48);
      local_170 = *(double *)(param_1 + 0x38);
      dStack_168 = *(double *)(param_1 + 0x40);
      local_188 = *(undefined4 *)(param_1 + 0x38);
      uStack_184 = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
      uStack_180 = *(undefined4 *)(param_1 + 0x40);
      uStack_17c = *(uint *)(param_1 + 0x44) ^ 0x80000000;
      local_178 = -*(double *)(param_1 + 0x48);
      iVar3 = iVar17;
    }
    else {
      pdVar16 = (double *)(param_1 + 0xa0);
      pdVar15 = local_208;
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *pdVar15 = *pdVar16;
        pdVar16 = pdVar16 + 1;
        pdVar15 = pdVar15 + 1;
      }
      (**(code **)(*plVar5 + 0x80))(plVar5,local_2d8);
      FUN_1400c6592(local_2d8,&local_188,local_208);
      iVar3 = *(int *)((longlong)dVar4 + 0x88);
    }
    uVar10 = 1;
    if (0 < iVar3) {
      local_318 = (longlong)dVar4 + 0x78;
      local_320 = param_1 + 0x80;
      local_330 = (double *)(param_1 + 0xa0);
      local_328 = (double *)(param_1 + 0x58);
      lVar12 = 0;
      do {
        lVar13 = *(longlong *)((longlong)dVar4 + 0x80);
        if (*(longlong *)((longlong)dVar4 + 0x80) == 0) {
          lVar13 = local_318;
        }
        lVar6 = *(longlong *)(lVar13 + lVar12 * 8);
        uVar10 = *(undefined8 *)(lVar6 + 0x10);
        if (iVar17 < 2) {
LAB_140694f15:
          cVar8 = '\x02';
          if (((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 4) == 0) ||
             (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                                (*(longlong **)(param_1 + 0x98),local_320,lVar6,dVar4),
             cVar8 != '\0')) {
            iVar3 = local_338;
            local_1f8 = (double)CONCAT44(local_1f8._4_4_,0xffffffff);
            local_1e0 = 0.0;
            local_1f0 = 0.0;
            dStack_1e8 = 0.0;
            local_1d8 = 0xffffffff;
            local_1d0 = 0;
            local_208[1] = *(double *)(lVar13 + lVar12 * 8);
            local_218 = 0;
            local_228 = 0;
            uStack_220 = 0;
            local_238 = 0;
            local_248 = 0;
            uStack_240 = 0;
            local_250 = 0.0;
            local_254 = -1;
            local_268 = DAT_14c8464f0;
            local_278 = DAT_14c8464e0;
            dStack_270 = DAT_14c8464e8;
            uVar2 = *(ushort *)(param_1 + 0x50);
            puVar1 = (undefined8 *)param_3[4];
            local_334 = (uint)uVar2;
            local_208[0] = dVar4;
            if (((double)puVar1 <= 0.0) || (*(longlong *)(param_1 + 0x90) == 0)) {
              if (((double)puVar1 == 0.0) &&
                 ((!NAN((double)puVar1) && (*(longlong *)(param_1 + 0x90) != 0)))) {
                if ((uVar2 >> 9 & 1) == 0) {
                  pdVar16 = local_330;
                  pdVar15 = local_2d8;
                  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                    *pdVar15 = *pdVar16;
                    pdVar16 = pdVar16 + 1;
                    pdVar15 = pdVar15 + 1;
                  }
                  local_388 = 0;
                  puStack_380 = (undefined8 *)0x0;
                  cVar9 = FUN_1405c9af5(uVar10,local_158);
                  iVar3 = local_338;
                  goto joined_r0x0001406951a3;
                }
                pdVar16 = local_330;
                pdVar15 = local_2d8;
                for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                  *pdVar15 = *pdVar16;
                  pdVar16 = pdVar16 + 1;
                  pdVar15 = pdVar15 + 1;
                }
                puStack_380 = &local_310;
                local_388 = 0;
                cVar9 = FUN_1405c9af5(uVar10,local_158);
                iVar17 = local_338;
                if (cVar9 == '\0') goto LAB_14069547d;
                local_238 = local_300;
                local_248 = local_310;
                uStack_240 = uStack_308;
                local_228 = local_2f8;
                uStack_220 = uStack_2f0;
                local_218 = local_2e8;
                local_250 = -local_2e0;
                goto LAB_1406951a9;
              }
            }
            else {
              local_348 = (byte)(uVar2 >> 9) & 1;
              local_388 = *param_3;
              pdVar16 = local_330;
              pdVar15 = local_2d8;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *pdVar15 = *pdVar16;
                pdVar16 = pdVar16 + 1;
                pdVar15 = pdVar15 + 1;
              }
              local_358 = &local_278;
              local_360 = &local_254;
              local_368 = &local_248;
              local_370 = &local_228;
              local_378 = &local_250;
              local_350 = 0;
              puStack_380 = puVar1;
              cVar9 = FUN_140913240(uVar10,local_158);
joined_r0x0001406951a3:
              iVar17 = iVar3;
              if (cVar9 != '\0') {
LAB_1406951a9:
                lVar13 = *(longlong *)(param_1 + 0x70) + 8;
                if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x84) == '\0') {
                  lVar13 = 0;
                }
                if ((((local_254 != -1) || (9.999999747378752e-05 < ABS(local_278))) ||
                    (9.999999747378752e-05 < ABS(dStack_270))) ||
                   (9.999999747378752e-05 < ABS(local_268))) {
                  if ((lVar13 != 0) && (ABS(local_250 - (double)*(float *)(lVar13 + 0x70)) < 1e-06))
                  {
                    if (ABS(*(double *)(param_1 + 0x58)) <= 9.999999747378752e-05) {
                      dVar20 = *(double *)(param_1 + 0x68);
                      uVar18 = SUB84(dVar20,0);
                      uVar19 = (undefined4)((ulonglong)dVar20 >> 0x20);
                      if ((ABS(*(double *)(param_1 + 0x60)) <= 9.999999747378752e-05) &&
                         (ABS(dVar20) <= 9.999999747378752e-05)) goto LAB_1406952f6;
                    }
                    else {
                      uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x68);
                      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
                    }
                    pdVar16 = (double *)*param_3;
                    if ((double)CONCAT44(uVar19,uVar18) * pdVar16[2] +
                        *(double *)(param_1 + 0x58) * *pdVar16 +
                        *(double *)(param_1 + 0x60) * pdVar16[1] <=
                        pdVar16[2] * local_268 + *pdVar16 * local_278 + pdVar16[1] * dStack_270)
                    goto LAB_14069547d;
                  }
LAB_1406952f6:
                  local_328[2] = local_268;
                  *local_328 = local_278;
                  local_328[1] = dStack_270;
                }
                local_198 = (float)local_250;
                local_1b8 = local_218;
                local_1c8 = local_228;
                uStack_1c0 = uStack_220;
                local_1a0 = local_238;
                local_1b0 = (undefined4)local_248;
                uStack_1ac = local_248._4_4_;
                uStack_1a8 = (undefined4)uStack_240;
                uStack_1a4 = uStack_240._4_4_;
                local_1d0 = 0x404;
                if (0.0 < local_250) {
                  local_1d0 = 7;
                }
                if ((local_334 & 0x200) != 0) {
                  local_1d0 = 7;
                }
                local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_254);
                local_1e0 = local_328[2];
                local_1f0 = *local_328;
                dStack_1e8 = local_328[1];
                if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 8) != 0) {
                  cVar8 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                                    (*(longlong **)(param_1 + 0x98),local_320,local_208);
                }
                if (cVar8 != '\0') {
                  if (cVar8 == '\x02') {
                    pdVar16 = *(double **)(param_1 + 0x70);
LAB_14069540c:
                    pdVar14 = local_208;
                    pdVar15 = pdVar16;
                    for (lVar13 = 0xf; pdVar15 = pdVar15 + 1, lVar13 != 0; lVar13 = lVar13 + -1) {
                      *pdVar15 = *pdVar14;
                      pdVar14 = pdVar14 + 1;
                    }
                    *(undefined1 *)((longlong)pdVar16 + 0x84) = 1;
                    uVar18 = 0;
                    uVar19 = 0;
                    if (0.0 <= local_250) {
                      uVar18 = SUB84(local_250,0);
                      uVar19 = (undefined4)((ulonglong)local_250 >> 0x20);
                    }
                    param_3[4] = CONCAT44(uVar19,uVar18);
                    if (((double)CONCAT44(uVar19,uVar18) != 0.0) ||
                       (NAN((double)CONCAT44(uVar19,uVar18)))) {
                      param_3[5] = 1.0 / (double)CONCAT44(uVar19,uVar18);
                    }
                    if ((((double)CONCAT44(uVar19,uVar18) != 0.0) ||
                        (NAN((double)CONCAT44(uVar19,uVar18)))) ||
                       (*(char *)(*(longlong *)(param_1 + 0x70) + 0x85) != '\x01'))
                    goto LAB_140695472;
                  }
                  else {
                    pdVar16 = *(double **)(param_1 + 0x70);
                    if ((*(char *)(param_1 + 0x52) != '\0') ||
                       (*(char *)((longlong)pdVar16 + 0x85) != '\0')) goto LAB_14069540c;
                    iVar17 = *(int *)(pdVar16 + 0x792);
                    *(uint *)(pdVar16 + 0x792) = iVar17 + 1U;
                    if (*(uint *)((longlong)pdVar16 + 0x3c94) < iVar17 + 1U) {
                      FUN_1412de590(pdVar16 + 0x11,iVar17);
                    }
                    pdVar15 = pdVar16 + 0x11;
                    if ((double *)pdVar16[0x791] != (double *)0x0) {
                      pdVar15 = (double *)pdVar16[0x791];
                    }
                    pdVar16 = local_208;
                    pdVar15 = pdVar15 + (longlong)iVar17 * 0xf;
                    for (lVar13 = 0xf; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *pdVar15 = *pdVar16;
                      pdVar16 = pdVar16 + 1;
                      pdVar15 = pdVar15 + 1;
                    }
LAB_140695472:
                    iVar17 = local_338;
                    if (*(char *)(param_1 + 0x52) == '\0') goto LAB_14069547d;
                  }
                  uVar10 = 0;
                  goto LAB_1406954ea;
                }
              }
            }
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x90) == 0) {
            dVar20 = *(double *)(param_1 + 0x38);
            dVar22 = *(double *)(param_1 + 0x40);
            uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x48);
            uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
            dVar21 = (local_160 - local_178) * 0.5;
            dVar23 = (dStack_168 - (double)CONCAT44(uStack_17c,uStack_180)) * 0.5;
            dVar7 = (local_170 - (double)CONCAT44(uStack_184,local_188)) * 0.5;
          }
          else {
            dVar21 = (local_160 - local_178) * 0.5;
            dVar22 = (dStack_168 - (double)CONCAT44(uStack_17c,uStack_180)) * 0.5;
            dVar20 = (local_170 - (double)CONCAT44(uStack_184,local_188)) * 0.5;
            uVar18 = SUB84(dVar21,0);
            uVar19 = (undefined4)((ulonglong)dVar21 >> 0x20);
            dVar23 = dVar22;
            dVar7 = dVar20;
          }
          dVar7 = dVar7 + (double)CONCAT44(uStack_184,local_188);
          dVar23 = dVar23 + (double)CONCAT44(uStack_17c,uStack_180);
          local_208[0] = (*(double *)(lVar6 + 0x18) - dVar20) - dVar7;
          local_208[1] = (*(double *)(lVar6 + 0x20) - dVar22) - dVar23;
          local_1f8 = (*(double *)(lVar6 + 0x28) - (double)CONCAT44(uVar19,uVar18)) -
                      (dVar21 + local_178);
          local_2d8[0] = (*(double *)(lVar6 + 0x30) + dVar20) - dVar7;
          local_2d8[1] = (*(double *)(lVar6 + 0x38) + dVar22) - dVar23;
          local_2d8[2] = (*(double *)(lVar6 + 0x40) + (double)CONCAT44(uVar19,uVar18)) -
                         (dVar21 + local_178);
          uVar18 = 0;
          uVar19 = 0;
          lVar11 = 0;
          dVar20 = 1.79769313486232e+308;
          do {
            if (*(char *)((longlong)param_3 + lVar11 + 0x30) == '\x01') {
              if (0.0 < local_208[lVar11]) goto LAB_14069547d;
              dVar22 = 0.0;
              dVar21 = 1.79769313486232e+308;
              if (local_2d8[lVar11] <= 0.0 && local_2d8[lVar11] != 0.0) goto LAB_14069547d;
            }
            else {
              dVar22 = local_208[lVar11] * (double)param_3[lVar11 + 1];
              dVar21 = (double)param_3[lVar11 + 1] * local_2d8[lVar11];
            }
            dVar23 = dVar21;
            if (dVar22 <= dVar21) {
              dVar23 = dVar22;
            }
            if ((double)CONCAT44(uVar19,uVar18) <= dVar23) {
              uVar18 = SUB84(dVar23,0);
              uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
            }
            if (dVar22 <= dVar21) {
              dVar22 = dVar21;
            }
            if (dVar22 <= dVar20) {
              dVar20 = dVar22;
            }
            if (dVar20 <= (double)CONCAT44(uVar19,uVar18) &&
                (double)CONCAT44(uVar19,uVar18) != dVar20) goto LAB_14069547d;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 3);
          if (((double)CONCAT44(uVar19,uVar18) < (double)param_3[4] ||
               (double)CONCAT44(uVar19,uVar18) == (double)param_3[4]) && (0.0 <= dVar20))
          goto LAB_140694f15;
        }
LAB_14069547d:
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((longlong)dVar4 + 0x88));
      uVar10 = 1;
    }
  }
LAB_1406954ea:
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140695578 FUN_140695578 body=165 status=ok
// SIG undefined FUN_140695578(void)

void FUN_140695578(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 200),1);
  }
  FUN_14069561e(param_1 + 0xb0,*(undefined8 *)(param_1 + 200));
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 200));
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  return;
}



// FUNCTION 14069561e FUN_14069561e body=2920 status=ok
// SIG undefined FUN_14069561e(void)

void FUN_14069561e(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined1 uVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auStack_db8 [32];
  int *local_d98;
  undefined1 *local_d90;
  longlong *local_d88;
  undefined8 local_d80;
  longlong local_d78;
  undefined8 local_d70;
  longlong local_d68;
  longlong local_d60;
  ulonglong local_d58;
  undefined8 *local_d50;
  undefined4 local_d48;
  undefined4 uStack_d44;
  undefined1 local_d39;
  int local_d38;
  undefined1 local_d34 [7];
  undefined1 local_d2d;
  int local_d2c;
  int local_d28;
  int local_d24;
  uint *local_d20;
  undefined1 local_d18 [8];
  undefined1 local_d10 [8];
  uint local_d08;
  undefined1 local_d00 [3072];
  undefined1 *local_100;
  uint local_f8;
  uint local_f4;
  longlong local_f0 [2];
  uint local_e0;
  undefined8 *local_d0;
  int local_c8;
  undefined1 local_c4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_db8;
  lVar14 = *param_1;
  local_d88 = param_1;
  if (*(longlong *)(lVar14 + 0x10) != 0) {
    FUN_14323cc1e(*(longlong *)(lVar14 + 0x10),param_2);
    lVar14 = *local_d88;
  }
  if (*(longlong *)(lVar14 + 0x18) != 0) {
    FUN_14323cc1e(*(longlong *)(lVar14 + 0x18),param_2);
    lVar14 = *local_d88;
  }
  if (*(longlong *)(lVar14 + 0x20) != 0) {
    FUN_14323cc1e(*(longlong *)(lVar14 + 0x20),param_2);
    lVar14 = *local_d88;
  }
  if (*(longlong *)(lVar14 + 0x28) != 0) {
    FUN_14323cc1e(*(longlong *)(lVar14 + 0x28),param_2);
    lVar14 = *local_d88;
  }
  local_d80 = param_2;
  FUN_1401915b0(&local_d28,*(undefined1 *)((longlong)local_d88 + 0x11),
                *(undefined4 *)(lVar14 + 0x30));
  FUN_140149c1a(local_f0,*(undefined4 *)(*local_d88 + 0x30));
  plVar10 = (longlong *)*local_d88;
  plVar22 = local_d88;
  if (0 < (int)plVar10[6]) {
    lVar14 = 0;
    uVar15 = 0;
    uVar24 = 0;
    do {
      lVar2 = *plVar10 + lVar14 * 0x28;
      *(ulonglong *)(local_f0[0] + lVar14 * 8) = uVar15 | (ulonglong)uVar24 << 0x20;
      iVar17 = *(int *)(lVar2 + 8);
      if (0 < iVar17) {
        iVar20 = 0;
        do {
          uVar16 = local_f8;
          iVar7 = ~local_e0 + local_d24;
          if (iVar7 < 1) {
LAB_140695743:
            local_e0 = 0;
            local_d20 = (uint *)FUN_140191654(local_d18);
            *local_d20 = local_f8;
            plVar22 = local_d88;
          }
          else {
            iVar21 = iVar17 - iVar20;
            if (iVar7 < iVar17 - iVar20) {
              iVar21 = iVar7;
            }
            lVar23 = (longlong)(int)local_f8;
            local_f8 = local_f8 + 1;
            if (local_f4 < local_f8) {
              FUN_147178b5a(local_d00,uVar16);
              plVar22 = local_d88;
            }
            puVar9 = local_100;
            if (local_100 == (undefined1 *)0x0) {
              puVar9 = local_d00;
            }
            *(int *)(puVar9 + lVar23 * 0xc) = (int)lVar14;
            *(int *)(puVar9 + lVar23 * 0xc + 4) = iVar20;
            *(int *)(puVar9 + lVar23 * 0xc + 8) = iVar21;
            local_d20[1] = local_d20[1] + 1;
            iVar20 = iVar20 + iVar21;
            local_e0 = local_e0 + iVar21 + 1;
            if ((local_d24 <= (int)local_e0) || (local_d28 <= (int)local_d20[1]))
            goto LAB_140695743;
          }
        } while (iVar20 < iVar17);
        iVar17 = *(int *)(lVar2 + 8);
      }
      uVar15 = (ulonglong)(uint)((int)uVar15 + iVar17);
      uVar24 = uVar24 + *(int *)(lVar2 + 0xc);
      lVar14 = lVar14 + 1;
      plVar10 = (longlong *)*plVar22;
    } while (lVar14 < (int)plVar10[6]);
  }
  plVar10 = (longlong *)plVar10[2];
  iVar17 = *(int *)(plVar22[1] + 0x20);
  memcpy((void *)((ulonglong)*(uint *)(plVar10 + 2) * 4 + *plVar10),*(void **)(plVar22[1] + 0x18),
         (longlong)iVar17 << 2);
  *(int *)(plVar10 + 2) = (int)plVar10[2] + iVar17;
  cVar6 = *(char *)((longlong)plVar22 + 0x11);
  local_d60 = *plVar22;
  local_d58 = plVar22[1];
  uVar24 = *(uint *)(local_d60 + 0x30);
  uVar15 = (ulonglong)uVar24;
  local_d78 = 0;
  local_d70 = (int *)((ulonglong)local_d70._4_4_ << 0x20);
  if (uVar24 != 0) {
    cVar5 = FUN_1447e0190();
    uVar16 = 0;
    if ((((1 < (int)uVar24) && (uVar16 = 0, cVar6 != '\0')) && (cVar5 != '\0')) &&
       (uVar16 = DAT_14c8335d8, (int)uVar24 <= (int)DAT_14c8335d8)) {
      uVar16 = uVar24;
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar17 = (*(undefined **)(lVar14 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar14 + 0x2c8) == 0) +
             uVar16;
    if (DAT_14c8c27ac < 1) {
      memset(&local_d0,0,0x82);
      local_d48 = 0;
      local_d50 = (undefined8 *)((ulonglong)local_d50 & 0xffffffff00000000);
      local_d2c = 0;
      FUN_140e55932(&local_d0,&local_d48,&local_d50,&local_d2c);
      iVar20 = local_d2c;
      local_d90 = &local_d39;
      local_d98 = &local_d38;
      FUN_1457b80ec((ulonglong)local_d50 & 0xffffffff,local_d2c,&local_d2d,local_d34);
      DAT_14c8c27ac = iVar20;
      if ((0 < local_d38) && (DAT_14c8c27ac = iVar20, local_d38 <= iVar20)) {
        DAT_14c8c27ac = local_d38;
      }
    }
    iVar20 = DAT_14c8c27ac;
    if (iVar17 < DAT_14c8c27ac) {
      iVar20 = iVar17;
    }
    iVar17 = 1;
    if (iVar20 < 2) {
      iVar20 = 1;
    }
    iVar7 = (int)local_d70;
    if (iVar20 < (int)local_d70) {
      iVar7 = iVar20;
    }
    if ((int)local_d70 == 0) {
      iVar7 = iVar20;
    }
    if (iVar7 < 2) {
      if (0 < (int)uVar24) {
        uVar16 = 0;
        do {
          FUN_144b0fe2e(&local_d60,uVar16);
          uVar16 = uVar16 + 1;
        } while (uVar24 != uVar16);
      }
    }
    else {
      iVar20 = iVar7 * 6;
      iVar21 = -6;
      do {
        if (iVar20 <= (int)uVar24) {
          iVar17 = (int)(uVar24 + iVar20 + -1) / iVar20;
          uVar15 = (longlong)(int)(iVar17 + (uVar24 - 1)) / (longlong)iVar17;
          iVar8 = (int)uVar15;
          uVar15 = uVar15 & 0xffffffff;
          if (iVar7 <= iVar8) break;
        }
        iVar8 = (int)uVar15;
        iVar20 = iVar20 - iVar7;
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0);
      lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar19 = 6;
      if ((*(byte *)(lVar14 + 0xc60) & 0x37) != 0) {
        uVar19 = 0;
      }
      FUN_144a85b52(&local_d48,1);
      puVar1 = (undefined8 *)(lVar14 + 0x308);
      puVar12 = (uint *)*puVar1;
      if (puVar12 != (uint *)0x0) goto LAB_140695c21;
      while( true ) {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar14 + 0x310);
        *(undefined8 *)(lVar14 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar1 = puVar11;
        FUN_140217a48(puVar1);
        puVar12 = (uint *)*puVar1;
LAB_140695c21:
        puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0x3fU & 0xffffffffffffffc0);
        puVar13 = (uint *)(puVar18 + 0x10);
        uVar16 = puVar12[0x12];
        if (puVar13 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar3 = *puVar12;
          *puVar12 = *puVar12 + uVar16 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar16) != 0xffffffff) break;
          puVar12 = (uint *)*puVar1;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar1 = puVar12;
          puVar18 = (undefined8 *)((longlong)puVar12 + 0x97U & 0xffffffffffffffc0);
          puVar13 = (uint *)(puVar18 + 0x10);
          uVar16 = 0;
          if (puVar13 <= puVar12 + 0x4000) {
            uVar16 = 1;
            goto LAB_140695ca6;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_140695ca6:
      *(uint **)(puVar12 + 0x10) = puVar13;
      puVar12[0x12] = uVar16;
      *puVar18 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar18 + 1) = 0;
      *puVar18 = &PTR_FUN_14a222558;
      puVar18[3] = L"GPUScene Upload Primitives Task";
      *(undefined4 *)(puVar18 + 4) = 0;
      *(undefined4 *)(puVar18 + 5) = 0;
      *(uint *)((longlong)puVar18 + 0x2c) = uVar24;
      *(int *)(puVar18 + 6) = iVar17;
      *(int *)((longlong)puVar18 + 0x34) = iVar8;
      puVar18[7] = &local_d78;
      puVar18[8] = &local_d60;
      puVar18[9] = &local_d48;
      *(undefined1 *)(puVar18 + 10) = uVar19;
      puVar18[0xb] = 0;
      puVar18[0xc] = 0;
      *(int *)((longlong)puVar18 + 0x24) = iVar8;
      FUN_147179918(puVar18 + 0xb,iVar7 + -1);
      if (puVar18 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
      }
      local_d50 = puVar18;
      FUN_147179850(&local_d50);
      local_c4 = 0;
      local_d0 = puVar18;
      local_c8 = iVar7 + -1;
      cVar6 = FUN_142c5151a(&local_d0,1);
      if (cVar6 == '\0') {
        (**(code **)(*(longlong *)CONCAT44(uStack_d44,local_d48) + 0x20))
                  ((longlong *)CONCAT44(uStack_d44,local_d48),0xffffffff,0);
      }
      FUN_1471798d0(&local_d0);
      FUN_144a75412(&local_d48);
    }
  }
  lVar14 = *local_d88;
  if ((0 < *(int *)(lVar14 + 0x38)) && (uVar15 = (ulonglong)local_d08, local_d08 != 0)) {
    cVar6 = *(char *)((longlong)local_d88 + 0x11);
    local_d68 = local_d88[1];
    local_d60 = 0;
    local_d58 = local_d58 & 0xffffffff00000000;
    local_d70 = &local_d28;
    local_d78 = lVar14;
    cVar5 = FUN_1447e0190();
    uVar24 = 0;
    if ((1 < (int)local_d08) &&
       (((uVar24 = 0, cVar6 != '\0' && (cVar5 != '\0')) &&
        (uVar24 = DAT_14c8335d8, (int)local_d08 <= (int)DAT_14c8335d8)))) {
      uVar24 = local_d08;
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar17 = (*(undefined **)(lVar14 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar14 + 0x2c8) == 0) +
             uVar24;
    if (DAT_14c8c27ac < 1) {
      memset(&local_d0,0,0x82);
      local_d48 = 0;
      local_d50 = (undefined8 *)((ulonglong)local_d50 & 0xffffffff00000000);
      local_d2c = 0;
      FUN_140e55932(&local_d0,&local_d48,&local_d50,&local_d2c);
      iVar20 = local_d2c;
      local_d90 = &local_d39;
      local_d98 = &local_d38;
      FUN_1457b80ec((ulonglong)local_d50 & 0xffffffff,local_d2c,&local_d2d,local_d34);
      DAT_14c8c27ac = iVar20;
      if ((0 < local_d38) && (DAT_14c8c27ac = iVar20, local_d38 <= iVar20)) {
        DAT_14c8c27ac = local_d38;
      }
    }
    iVar20 = DAT_14c8c27ac;
    if (iVar17 < DAT_14c8c27ac) {
      iVar20 = iVar17;
    }
    iVar17 = 1;
    if (iVar20 < 2) {
      if (0 < (int)local_d08) {
        uVar24 = 0;
        do {
          FUN_142c5224c(&local_d78,uVar24);
          uVar24 = uVar24 + 1;
        } while (local_d08 != uVar24);
      }
    }
    else {
      iVar7 = iVar20 * 6;
      iVar21 = -6;
      do {
        if (iVar7 <= (int)local_d08) {
          iVar17 = (int)(local_d08 + iVar7 + -1) / iVar7;
          uVar15 = (longlong)(int)(iVar17 + (local_d08 - 1)) / (longlong)iVar17;
          iVar8 = (int)uVar15;
          uVar15 = uVar15 & 0xffffffff;
          if (iVar20 <= iVar8) break;
        }
        iVar8 = (int)uVar15;
        iVar7 = iVar7 - iVar20;
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0);
      lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar19 = 6;
      if ((*(byte *)(lVar14 + 0xc60) & 0x37) != 0) {
        uVar19 = 0;
      }
      FUN_144a85b52(&local_d48,1);
      puVar1 = (undefined8 *)(lVar14 + 0x308);
      puVar12 = (uint *)*puVar1;
      if (puVar12 != (uint *)0x0) goto LAB_140695e8a;
      while( true ) {
        uVar24 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar24 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar24 | 1;
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar14 + 0x310);
        *(undefined8 *)(lVar14 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar1 = puVar11;
        FUN_140217a48(puVar1);
        puVar12 = (uint *)*puVar1;
LAB_140695e8a:
        puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0x3fU & 0xffffffffffffffc0);
        puVar13 = (uint *)(puVar18 + 0x10);
        uVar24 = puVar12[0x12];
        if (puVar13 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar16 = *puVar12;
          *puVar12 = *puVar12 + uVar24 + 1;
          UNLOCK();
          if ((uVar16 ^ uVar24) != 0xffffffff) break;
          puVar12 = (uint *)*puVar1;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar1 = puVar12;
          puVar18 = (undefined8 *)((longlong)puVar12 + 0x97U & 0xffffffffffffffc0);
          puVar13 = (uint *)(puVar18 + 0x10);
          uVar24 = 0;
          if (puVar13 <= puVar12 + 0x4000) {
            uVar24 = 1;
            goto LAB_140695f0f;
          }
        }
      }
      uVar24 = uVar24 + 1;
LAB_140695f0f:
      *(uint **)(puVar12 + 0x10) = puVar13;
      puVar12[0x12] = uVar24;
      *puVar18 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar18 + 1) = 0;
      *puVar18 = &PTR_FUN_14a2225d8;
      puVar18[3] = L"GPUScene Upload Instances Task";
      *(undefined4 *)(puVar18 + 4) = 0;
      *(undefined4 *)(puVar18 + 5) = 0;
      *(uint *)((longlong)puVar18 + 0x2c) = local_d08;
      *(int *)(puVar18 + 6) = iVar17;
      *(int *)((longlong)puVar18 + 0x34) = iVar8;
      puVar18[7] = &local_d60;
      puVar18[8] = &local_d78;
      puVar18[9] = &local_d48;
      *(undefined1 *)(puVar18 + 10) = uVar19;
      puVar18[0xb] = 0;
      puVar18[0xc] = 0;
      *(int *)((longlong)puVar18 + 0x24) = iVar8;
      FUN_147179f24(puVar18 + 0xb,iVar20 + -1);
      if (puVar18 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
      }
      local_d50 = puVar18;
      FUN_147179e5c(&local_d50);
      local_c4 = 0;
      local_d0 = puVar18;
      local_c8 = iVar20 + -1;
      cVar6 = FUN_142c51eb0(&local_d0,1);
      if (cVar6 == '\0') {
        (**(code **)(*(longlong *)CONCAT44(uStack_d44,local_d48) + 0x20))
                  ((longlong *)CONCAT44(uStack_d44,local_d48),0xffffffff,0);
      }
      FUN_147179edc(&local_d0);
      FUN_144a75412(&local_d48);
    }
    lVar14 = *local_d88;
  }
  uVar4 = local_d80;
  if (*(longlong *)(lVar14 + 0x10) != 0) {
    FUN_14323ccf6(*(longlong *)(lVar14 + 0x10),local_d80);
    lVar14 = *local_d88;
  }
  if (*(longlong *)(lVar14 + 0x18) != 0) {
    FUN_14323ccf6(*(longlong *)(lVar14 + 0x18),uVar4);
    lVar14 = *local_d88;
  }
  plVar10 = local_d88;
  if (*(longlong *)(lVar14 + 0x20) != 0) {
    FUN_14323ccf6(*(longlong *)(lVar14 + 0x20),uVar4);
    lVar14 = *plVar10;
  }
  if (*(longlong *)(lVar14 + 0x28) != 0) {
    FUN_14323ccf6(*(longlong *)(lVar14 + 0x28),uVar4);
  }
  FUN_142c513ee(local_f0);
  FUN_142c51452(&local_100);
  FUN_142c514b6(local_d10);
  if ((local_48 ^ (ulonglong)auStack_db8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140696187 FUN_140696187 body=439 status=ok
// SIG undefined FUN_140696187(void)

ulonglong FUN_140696187(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  uVar5 = 0;
  if (*param_3 == 0) goto LAB_140696240;
  lVar3 = FUN_140696450();
  lVar6 = *param_3;
  if (lVar6 != 0) {
    if ((((lVar3 != 0) && (lVar1 = *(longlong *)(lVar6 + 0x10), lVar1 != 0)) &&
        (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar6);
      }
      FUN_140696536(&local_48,lVar6 + 0x120);
      if (*param_3 == 0) goto LAB_140696231;
    }
    lVar3 = FUN_14069636a();
    lVar6 = *param_3;
    if (((lVar6 != 0) && (lVar3 != 0)) &&
       ((lVar1 = *(longlong *)(lVar6 + 0x10), lVar1 != 0 &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))))) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar6);
      }
      FUN_140696536(&local_48,lVar6 + 0x2c0);
    }
  }
LAB_140696231:
  if ((longlong)(int)uStack_40 != 0) {
    lVar3 = local_48 + 0xd0;
    lVar6 = (longlong)(int)uStack_40 * 0x228;
    do {
      cVar2 = FUN_14187bccc(lVar3 + -0x20,param_1);
      if ((cVar2 == '\0') || (cVar2 = FUN_1403343e8(lVar3,param_2), cVar2 == '\0')) {
        uVar4 = 0;
        break;
      }
      lVar3 = lVar3 + 0x228;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      lVar6 = lVar6 + -0x228;
    } while (lVar6 != 0);
    uVar5 = uStack_40 & 0xffffffff;
  }
LAB_140696240:
  FUN_14069633f(local_48,uVar5);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14069633f FUN_14069633f body=43 status=ok
// SIG undefined FUN_14069633f(void)

void FUN_14069633f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140b605dc(param_1);
    param_1 = param_1 + 0x228;
  }
  return;
}



// FUNCTION 14069636a FUN_14069636a body=228 status=ok
// SIG undefined FUN_14069636a(void)

longlong FUN_14069636a(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5f2f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14644292e;
    local_38 = &LAB_1486b2293;
    local_40 = FUN_140fe386e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x4b0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDestructibleGeometryCollectionScriptedData",&DAT_14cb5f2f8
                  ,&DAT_1486b2292);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5f2f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140696450 FUN_140696450 body=228 status=ok
// SIG undefined FUN_140696450(void)

longlong FUN_140696450(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5c848 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f18b2;
    local_38 = &LAB_14868ae61;
    local_40 = FUN_141850701;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x250;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDestructibleStaticMeshScriptedData",&DAT_14cb5c848,
                  &DAT_14868ae60);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5c848;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140696536 FUN_140696536 body=93 status=ok
// SIG undefined FUN_140696536(void)

undefined8 * FUN_140696536(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14069633f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148930218(param_1,iVar1);
      FUN_14893028a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140696594 FUN_140696594 body=41 status=ok
// SIG undefined FUN_140696594(void)

void FUN_140696594(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_f8 [40];
  undefined8 *puStack_d0;
  int iStack_c8;
  longlong *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined8 *puStack_90;
  int iStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  cVar5 = *(char *)(param_1 + 0x101);
  if (cVar5 == '\x06') {
    FUN_1406965be(param_1,0);
    return;
  }
  if (cVar5 != '\x03') {
    if (cVar5 == '\x05') {
      FUN_1406965be(param_1,1);
      return;
    }
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(char *)(param_1 + 0x101) != '\x03') || (*(longlong *)(param_1 + 0xf0) != 0))
  goto LAB_1406976a5;
  bVar15 = true;
  if (((*(int *)(param_1 + 0x74) == 0) ||
      ((((uVar3 = *(uint *)(param_1 + 0x70), (int)uVar3 < 0 || (DAT_14c9647dc <= (int)uVar3)) ||
        (plVar8 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar8 == (longlong *)0x0)) ||
       (((int)plVar8[2] != *(int *)(param_1 + 0x74) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))
       ))) || (lVar13 = *plVar8, lVar13 == 0)) {
    lVar13 = 0;
    lVar12 = 0;
  }
  else {
    lVar12 = *(longlong *)(lVar13 + 0x168);
    bVar15 = false;
  }
  uVar7 = FUN_1401b0f18();
  plVar8 = (longlong *)FUN_144718840(lVar13,uVar7);
  lStack_58 = 0;
  uStack_50 = 0;
  (**(code **)(*plVar8 + 0x50))(plVar8);
  lVar11 = *(longlong *)(param_1 + 0x60);
  if (lVar11 == 0) {
    uVar7 = FUN_140927942();
    lVar11 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x60) = lVar11;
  }
  plVar8 = *(longlong **)(param_1 + 0x68);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    if (lVar11 != 0) {
      uVar10 = 0;
      if (*(longlong *)(param_1 + 0x58) == 0) goto LAB_1406973f5;
      plVar8 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar5 == '\0')) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
        plVar8 = (longlong *)FUN_144aff482(uVar7,(longlong *)(param_1 + 0x58));
        *(longlong **)(param_1 + 0x68) = plVar8;
        if (plVar8 != (longlong *)0x0) goto LAB_1406973c7;
      }
    }
    plVar8 = (longlong *)0x0;
    uVar10 = 0;
  }
  else {
LAB_1406973c7:
    cVar5 = (**(code **)(*plVar8 + 0x80))(plVar8);
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*plVar8 + 0x88))();
      uVar10 = 0x14;
      if (cVar5 == '\0') {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0x8c;
    }
  }
LAB_1406973f5:
  uStack_b8._0_4_ = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0x10000;
  uStack_94 = 0;
  puStack_90 = (undefined8 *)0x0;
  iStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  iVar6 = 0;
  plStack_c0 = plVar8;
  uVar3 = (uint)uStack_b8;
  if (!bVar15) {
    uVar3 = *(uint *)(lVar13 + 0xc);
    uStack_b8 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar6 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar11 + 0x10);
      bVar14 = iVar6 == 0;
      if (bVar14) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      uVar3 = (uint)uStack_b8;
      if (bVar14) {
        iVar6 = iVar9;
      }
    }
  }
  uStack_b8._0_4_ = uVar3;
  uStack_b8 = CONCAT44(iVar6,(uint)uStack_b8);
  if (lVar12 == 0) {
    lVar12 = lVar13;
  }
  if (lVar12 == 0) {
    uStack_b0 = 0;
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar12 + 0xc);
    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar6 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar12 + 0x10);
      bVar14 = iVar6 == 0;
      if (bVar14) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar6 = iVar9;
      }
    }
  }
  uStack_b0 = CONCAT44(iVar6,(undefined4)uStack_b0);
  uStack_98 = CONCAT31(uStack_98._1_3_,*(undefined1 *)(param_1 + 0x100));
  uStack_70 = uVar10;
  FUN_14069798a(&lStack_80,&lStack_58);
  puStack_d0 = (undefined8 *)0x0;
  iStack_c8 = 0;
  FUN_1446efa72(&puStack_d0,0,3,0x10);
  puVar4 = puStack_d0;
  iStack_c8 = 3;
  *puStack_d0 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  puStack_d0[2] = lVar11;
  *puStack_d0 = &PTR_FUN_14ab633f0;
  puStack_d0[3] = 0;
  iVar6 = 0;
  if (!bVar15) {
    uVar3 = *(uint *)(lVar13 + 0xc);
    *(uint *)(puStack_d0 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar6 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar13 + 0x10);
      bVar15 = iVar6 == 0;
      if (bVar15) {
        *(int *)(lVar13 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar6 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar6;
  puVar4[4] = param_1;
  FUN_14009d848(&puStack_90,&puStack_d0);
  if (iStack_c8 == 0) {
LAB_1406975b9:
    if (puStack_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)(puStack_d0,0);
    FUN_1446efa72(&puStack_d0,0,0,0x10);
    iStack_c8 = 0;
    goto LAB_1406975b9;
  }
  FUN_140697a82(&plStack_c0,&uStack_68);
  plVar1 = plStack_60;
  *(undefined8 *)(param_1 + 0xf0) = uStack_68;
  uStack_68 = 0;
  plVar8 = *(longlong **)(param_1 + 0xf8);
  if (plStack_60 == plVar8) {
LAB_1406978bd:
    plVar8 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    plStack_60 = (longlong *)0x0;
    *(longlong **)(param_1 + 0xf8) = plVar1;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_1406978bd;
    }
  }
  FUN_140861e20(lStack_80,uStack_78 & 0xffffffff);
  if (lStack_80 != 0) {
    FUN_1400020a8();
  }
  if (iStack_88 == 0) {
LAB_140697647:
    if (puStack_90 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)(puStack_90,0);
    FUN_1446efa72(&puStack_90,0,0,0x10);
    iStack_88 = 0;
    goto LAB_140697647;
  }
  FUN_1406979e8(*(undefined8 *)(param_1 + 0xf0));
  if ((*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x70) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xf0) + 0xa0) == '\x01')) {
    FUN_14069822a(param_1);
  }
  FUN_140861e20(lStack_58,uStack_50 & 0xffffffff);
  if (lStack_58 != 0) {
    FUN_1400020a8();
  }
LAB_1406976a5:
  if ((uStack_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406965be FUN_1406965be body=248 status=ok
// SIG undefined FUN_1406965be(void)

void FUN_1406965be(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((((*(int *)(param_1 + 0x74) != 0) && (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x74))) &&
      (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar2 = *plVar5, lVar2 != 0)))))) {
    lVar3 = lVar2 + 0x370;
    if (*(longlong *)(lVar2 + 0x380) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x380);
    }
    if ((longlong)*(int *)(lVar2 + 0x388) != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(lVar3 + lVar6) == DAT_14cb1ad78) {
          if ((char)param_2 != '\0') {
            return;
          }
          FUN_140696ab2();
          goto LAB_14069664e;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(lVar2 + 0x388) * 8 != lVar6);
    }
    if ((char)param_2 != '\0') {
LAB_14069664e:
      FUN_1406966b6(lVar2,&DAT_14cb1ad78,param_2);
      uVar4 = FUN_1401b0f18();
      plVar5 = (longlong *)FUN_144718840(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000140696682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x60))(plVar5,param_2,*(code **)(*plVar5 + 0x60));
      return;
    }
  }
  return;
}



// FUNCTION 1406966b6 FUN_1406966b6 body=76 status=ok
// SIG undefined FUN_1406966b6(void)

void FUN_1406966b6(longlong *param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_1400bc8c2(param_1 + 0x6d);
  }
  else {
    FUN_1400bc96c();
  }
  if (-1 < (char)param_1[0xc] == (bool)(char)param_1[0x6d]) {
                    /* WARNING: Could not recover jumptable at 0x0001406966f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x608))(param_1);
    return;
  }
  return;
}



// FUNCTION 140696702 FUN_140696702 body=193 status=ok
// SIG undefined FUN_140696702(void)

void FUN_140696702(longlong param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0x7f | param_2 << 7;
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,1);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 2;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  FUN_1406967c4(param_1);
  return;
}



// FUNCTION 1406967c4 FUN_1406967c4 body=749 status=ok
// SIG undefined FUN_1406967c4(void)

void FUN_1406967c4(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
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
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = *(int *)(param_1 + 0x268);
  if (iVar2 == 0) {
    uVar16 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x250);
    }
    uVar15 = *puVar6;
    if (uVar15 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar11 = 0;
      do {
        if (uVar14 == uVar16) goto LAB_140696977;
        iVar11 = iVar11 + 0x20;
        uVar15 = puVar6[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar15 = 0xffffffff;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar5 * 0x10);
      if ((plVar4 != (longlong *)0x0) && ((*(byte *)((longlong)plVar4 + 0x9c) & 1) != 0)) {
        (**(code **)(*plVar4 + 0x3f0))(plVar4);
        if (DAT_14cabf8d0 == 0) {
          local_70 = &local_50;
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_142b47bc4;
          local_78 = &LAB_147860ffd;
          local_80 = FUN_1463713dc;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10000005;
          local_a0 = 0x10;
          local_a8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar12 = (**(code **)(*plVar4 + 0x5d8))(plVar4), lVar12 != 0)) {
          uVar7 = (**(code **)(*plVar4 + 0x5d8))(plVar4);
          FUN_1406967c4(uVar7);
        }
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar6 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x250);
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar5 = (int)uVar16;
      lVar12 = (longlong)iVar5;
      uVar10 = puVar6[lVar12] & uVar15;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar8) {
          lVar13 = 0;
          do {
            uVar10 = puVar6[lVar12 + lVar13 + 1];
            if (uVar10 != 0) {
              uVar16 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140696949;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar16 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_140696949:
        uVar14 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_140696977:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140696ab2 FUN_140696ab2 body=282 status=ok
// SIG undefined FUN_140696ab2(void)

void FUN_140696ab2(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [192];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((((*(int *)(param_1 + 0x74) != 0) && (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0x74))))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
    local_30 = (undefined1 *)0x0;
    local_28 = 0x1800000000;
    FUN_140696bce(*plVar2,local_f0,0);
    puVar5 = local_30;
    if (local_30 == (undefined1 *)0x0) {
      puVar5 = local_f0;
    }
    lVar4 = (longlong)(int)local_28;
    if (lVar4 != 0) {
      lVar3 = 0;
      do {
        plVar2 = *(longlong **)(puVar5 + lVar3);
        if ((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar2 + 0x9e) & 8) != 0)) {
          (**(code **)(*plVar2 + 0x2a8))(plVar2,0);
        }
        lVar3 = lVar3 + 8;
      } while (lVar4 * 8 != lVar3);
    }
    if (local_30 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140696bce FUN_140696bce body=145 status=ok
// SIG undefined FUN_140696bce(void)

void FUN_140696bce(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_147e20d00(param_2,0);
  }
  local_28 = FUN_140288b94();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_140696c60(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140696c60 FUN_140696c60 body=719 status=ok
// SIG undefined FUN_140696c60(void)

void FUN_140696c60(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_140696de9:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_140696ccb:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147e21080(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147e20dfc(param_1,&local_40,param_4);
      }
      goto LAB_140696d09;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_140696de9;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140696ccb;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_140696f30(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147e211d2(param_1,&local_50,param_4);
  }
LAB_140696d09:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140696f30 FUN_140696f30 body=927 status=ok
// SIG undefined FUN_140696f30(void)

void FUN_140696f30(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  uint *local_68;
  longlong local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar13 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_58 = param_2;
  if (iVar2 == 0) {
    uVar10 = 1;
    uVar14 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar5 = puVar13;
    }
    uVar11 = *puVar5;
    if (uVar11 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar10 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar10 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar10 == uVar14) goto LAB_140697161;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar10 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
      if (lVar12 != 0) {
        lVar15 = *local_58;
        if ((lVar15 != 0 & DAT_14c950c29) == 1) {
          local_68 = puVar13;
          local_60 = param_3;
          FUN_1456cec3c(lVar15);
          puVar13 = local_68;
          param_3 = local_60;
LAB_140697036:
          if (DAT_14cad00c8 == 0) {
            local_80 = &local_50;
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1479b7a0c;
            local_90 = &LAB_1463b464e;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000005;
            local_b0 = 8;
            local_b8 = 0x110;
            local_68 = puVar13;
            local_60 = param_3;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar13 = local_68;
            param_3 = local_60;
            if (DAT_14cad00c8 == 0) goto LAB_14069724b;
          }
          if (*(int *)(lVar15 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_14069724b;
          if (*(longlong *)
               (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar15 = 0;
          }
        }
        else {
          if (lVar15 != 0) goto LAB_140697036;
LAB_14069724b:
          lVar15 = 0;
        }
        if ((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) {
          iVar4 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar4 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar4 + 1U) {
            local_68 = puVar13;
            local_60 = param_3;
            FUN_147e214d8(param_3,iVar4);
            puVar13 = local_68;
            param_3 = local_60;
          }
          lVar15 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar15 = param_3;
          }
          *(longlong *)(lVar15 + (longlong)iVar4 * 8) = lVar12;
        }
      }
      uVar11 = uVar11 & ~(uint)uVar10;
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = puVar13;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar4 = (int)uVar14;
      lVar12 = (longlong)iVar4;
      uVar8 = puVar5[lVar12] & uVar11;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar15 = 0;
          do {
            uVar8 = puVar5[lVar12 + lVar15 + 1];
            if (uVar8 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar15 + 1);
              uVar11 = 0xffffffff;
              goto LAB_1406970fd;
            }
            iVar9 = iVar9 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar7 - lVar12 != lVar15);
          uVar11 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1406970fd:
        uVar10 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_140697161:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406972d0 FUN_1406972d0 body=1720 status=ok
// SIG undefined FUN_1406972d0(void)

void FUN_1406972d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  int local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 *local_90;
  int local_88;
  longlong local_80;
  ulonglong uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(char *)(param_1 + 0x101) != '\x03') || (*(longlong *)(param_1 + 0xf0) != 0))
  goto LAB_1406976a5;
  bVar15 = true;
  if (((*(int *)(param_1 + 0x74) == 0) ||
      ((((uVar3 = *(uint *)(param_1 + 0x70), (int)uVar3 < 0 || (DAT_14c9647dc <= (int)uVar3)) ||
        (plVar8 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar8 == (longlong *)0x0)) ||
       (((int)plVar8[2] != *(int *)(param_1 + 0x74) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))
       ))) || (lVar13 = *plVar8, lVar13 == 0)) {
    lVar13 = 0;
    lVar12 = 0;
  }
  else {
    lVar12 = *(longlong *)(lVar13 + 0x168);
    bVar15 = false;
  }
  uVar7 = FUN_1401b0f18();
  plVar8 = (longlong *)FUN_144718840(lVar13,uVar7);
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*plVar8 + 0x50))(plVar8);
  lVar11 = *(longlong *)(param_1 + 0x60);
  if (lVar11 == 0) {
    uVar7 = FUN_140927942();
    lVar11 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x60) = lVar11;
  }
  plVar8 = *(longlong **)(param_1 + 0x68);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    if (lVar11 != 0) {
      uVar10 = 0;
      if (*(longlong *)(param_1 + 0x58) == 0) goto LAB_1406973f5;
      plVar8 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar5 == '\0')) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
        plVar8 = (longlong *)FUN_144aff482(uVar7,(longlong *)(param_1 + 0x58));
        *(longlong **)(param_1 + 0x68) = plVar8;
        if (plVar8 != (longlong *)0x0) goto LAB_1406973c7;
      }
    }
    plVar8 = (longlong *)0x0;
    uVar10 = 0;
  }
  else {
LAB_1406973c7:
    cVar5 = (**(code **)(*plVar8 + 0x80))(plVar8);
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*plVar8 + 0x88))();
      uVar10 = 0x14;
      if (cVar5 == '\0') {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0x8c;
    }
  }
LAB_1406973f5:
  local_b8._0_4_ = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0x10000;
  local_94 = 0;
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  iVar6 = 0;
  local_c0 = plVar8;
  uVar3 = (uint)local_b8;
  if (!bVar15) {
    uVar3 = *(uint *)(lVar13 + 0xc);
    local_b8 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar6 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar11 + 0x10);
      bVar14 = iVar6 == 0;
      if (bVar14) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_b8;
      if (bVar14) {
        iVar6 = iVar9;
      }
    }
  }
  local_b8._0_4_ = uVar3;
  local_b8 = CONCAT44(iVar6,(uint)local_b8);
  if (lVar12 == 0) {
    lVar12 = lVar13;
  }
  if (lVar12 == 0) {
    uStack_b0 = 0;
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar12 + 0xc);
    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar6 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar12 + 0x10);
      bVar14 = iVar6 == 0;
      if (bVar14) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar6 = iVar9;
      }
    }
  }
  uStack_b0 = CONCAT44(iVar6,(undefined4)uStack_b0);
  local_98 = CONCAT31(local_98._1_3_,*(undefined1 *)(param_1 + 0x100));
  local_70 = uVar10;
  FUN_14069798a(&local_80,&local_58);
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  puVar4 = local_d0;
  local_c8 = 3;
  *local_d0 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  local_d0[2] = lVar11;
  *local_d0 = &PTR_FUN_14ab633f0;
  local_d0[3] = 0;
  iVar6 = 0;
  if (!bVar15) {
    uVar3 = *(uint *)(lVar13 + 0xc);
    *(uint *)(local_d0 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar6 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar13 + 0x10);
      bVar15 = iVar6 == 0;
      if (bVar15) {
        *(int *)(lVar13 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar6 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar6;
  puVar4[4] = param_1;
  FUN_14009d848(&local_90,&local_d0);
  if (local_c8 == 0) {
LAB_1406975b9:
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_1406975b9;
  }
  FUN_140697a82(&local_c0,&local_68);
  plVar1 = local_60;
  *(undefined8 *)(param_1 + 0xf0) = local_68;
  local_68 = 0;
  plVar8 = *(longlong **)(param_1 + 0xf8);
  if (local_60 == plVar8) {
LAB_1406978bd:
    plVar8 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    local_60 = (longlong *)0x0;
    *(longlong **)(param_1 + 0xf8) = plVar1;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_1406978bd;
    }
  }
  FUN_140861e20(local_80,uStack_78 & 0xffffffff);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_88 == 0) {
LAB_140697647:
    if (local_90 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_90 != (undefined8 *)0x0) {
    (**(code **)*local_90)(local_90,0);
    FUN_1446efa72(&local_90,0,0,0x10);
    local_88 = 0;
    goto LAB_140697647;
  }
  FUN_1406979e8(*(undefined8 *)(param_1 + 0xf0));
  if ((*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x70) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xf0) + 0xa0) == '\x01')) {
    FUN_14069822a(param_1);
  }
  FUN_140861e20(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1406976a5:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14069798a FUN_14069798a body=94 status=ok
// SIG undefined FUN_14069798a(void)

void FUN_14069798a(longlong *param_1,undefined8 *param_2)

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
    FUN_1406f071e(param_1,iVar2);
  }
  FUN_140a1e307((longlong)iVar2 * 0x20 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1406979e8 FUN_1406979e8 body=152 status=ok
// SIG undefined FUN_1406979e8(void)

void FUN_1406979e8(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x6b) != '\0') {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) goto LAB_140697a55;
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_140697a76:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(int *)(puVar4 + 2) != *(int *)(param_1 + 0x1c) ||
          ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) goto LAB_140697a76;
      uVar3 = *puVar4;
    }
  }
  (**(code **)(*plVar2 + 0x98))(plVar2,uVar3);
LAB_140697a55:
  *(undefined1 *)(param_1 + 0x6b) = 1;
  FUN_140698eb8(param_1);
  FUN_140697ea8(param_1);
  FUN_140697cba(param_1);
  return;
}



// FUNCTION 140697a82 FUN_140697a82 body=262 status=ok
// SIG undefined FUN_140697a82(void)

longlong * FUN_140697a82(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0xb8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ab63480;
  plVar3[2] = 0;
  plVar3[3] = 0;
  FUN_140697b8a(plVar3 + 4,param_1);
  *(undefined4 *)(plVar3 + 0xf) = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  *(undefined1 *)(plVar3 + 0x16) = 0;
  local_50 = plVar3 + 2;
  local_48 = plVar3;
  FUN_140697c1a(&local_50,plVar3 + 2);
  plVar3 = local_48;
  *param_2 = (longlong)local_50;
  param_2[1] = (longlong)local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140697b8a FUN_140697b8a body=144 status=ok
// SIG undefined FUN_140697b8a(void)

undefined4 * FUN_140697b8a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
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
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x21);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x25);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x29);
  *(undefined4 *)((longlong)param_1 + 0x1d) = *(undefined4 *)((longlong)param_2 + 0x1d);
  *(undefined4 *)((longlong)param_1 + 0x21) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x25) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x29) = uVar13;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  FUN_14009d848(param_1 + 0xc,param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = param_2[0x12];
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = iVar1;
  if (iVar1 == 0) {
    param_1[0x13] = 0;
  }
  else {
    FUN_140a1e386(param_1 + 0x10,iVar1,0);
    FUN_140a1e307(*(undefined8 *)(param_1 + 0x10),uVar2,iVar1);
  }
  param_1[0x14] = param_2[0x14];
  return param_1;
}



// FUNCTION 140697c1a FUN_140697c1a body=159 status=ok
// SIG undefined FUN_140697c1a(void)

void FUN_140697c1a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_140697c57;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_140697c57;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140697c57:
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
                    /* WARNING: Could not recover jumptable at 0x000140697cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140697cba FUN_140697cba body=425 status=ok
// SIG undefined FUN_140697cba(void)

void FUN_140697cba(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  DAT_14cb1ae40 = DAT_14cb1ae40 + 1;
  local_38 = CONCAT44(DAT_14cb1ae40,DAT_14cb1ae50);
  local_40 = DAT_14cb1ae48;
  local_30 = 0;
  uVar4 = FUN_14050fd64();
  FUN_140b0c6f6(uVar4,&local_50,&local_40);
  plVar3 = local_48;
  if ((longlong *)(param_1 + 0x90) != &local_50) {
    *(longlong *)(param_1 + 0x90) = local_50;
    local_50 = 0;
    plVar2 = *(longlong **)(param_1 + 0x98);
    if (local_48 != plVar2) {
      local_48 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x98) = plVar3;
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
  }
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x90);
  if (plVar3 == (longlong *)0x0) {
    FUN_140697e76(param_1);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1 + 0x50,0,0);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    FUN_14069969a(local_60,param_1,FUN_140697e76);
    FUN_140844560(uVar4,&local_50,local_60);
    FUN_1407d097e(*(undefined8 *)(param_1 + 0x90));
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140697e76 FUN_140697e76 body=49 status=ok
// SIG undefined FUN_140697e76(void)

void FUN_140697e76(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x68) == '\x01') && (*(char *)(param_1 + 0x69) == '\x01')) {
    cVar1 = *(char *)(param_1 + 0x6a);
    *(undefined1 *)(param_1 + 0x6a) = 1;
    if (((cVar1 == '\0') && (*(int *)(param_1 + 0x48) != 0)) &&
       (*(longlong **)(param_1 + 0x40) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140697e9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x60))();
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x6a) = 1;
  }
  return;
}



// FUNCTION 140697ea8 FUN_140697ea8 body=512 status=ok
// SIG undefined FUN_140697ea8(void)

void FUN_140697ea8(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if ((plVar3 == (longlong *)0x0) || (*(char *)(param_1 + 0x3a) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x1c))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      FUN_1447210f0(*plVar4);
      plVar3 = *(longlong **)(param_1 + 0x10);
    }
  }
  (**(code **)(*plVar3 + 0x40))(plVar3,&local_38,(longlong *)(param_1 + 0x10));
  plVar3 = local_30;
  if ((undefined8 **)(param_1 + 0x80) != &local_38) {
    *(undefined8 **)(param_1 + 0x80) = local_38;
    local_38 = (undefined8 *)0x0;
    plVar4 = *(longlong **)(param_1 + 0x88);
    if (local_30 != plVar4) {
      local_30 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x88) = plVar3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
  }
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(undefined8 **)(param_1 + 0x80);
  if ((plVar3 == (longlong *)0x0) || (*(char *)(param_1 + 0x3b) != '\0')) {
    FUN_1406980ba(param_1);
  }
  else {
    FUN_14069969a(&local_38,param_1,FUN_1406980ba);
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_38);
    if ((int)local_30 != 0) {
      if (local_38 == (undefined8 *)0x0) goto LAB_140697f95;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140697f95:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406980ba FUN_1406980ba body=64 status=ok
// SIG undefined FUN_1406980ba(void)

void FUN_1406980ba(longlong param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x68) != '\x01') {
    *(undefined1 *)(param_1 + 0x69) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x69) == '\0') {
    *(undefined1 *)(param_1 + 0x69) = 1;
    bVar1 = *(byte *)(param_1 + 0x6a);
  }
  else {
    *(undefined1 *)(param_1 + 0x69) = 1;
    bVar1 = 0;
    if (*(char *)(param_1 + 0x6a) != '\0') {
      return;
    }
  }
  if ((((bVar1 & 1) != 0) && (*(int *)(param_1 + 0x48) != 0)) &&
     (*(longlong **)(param_1 + 0x40) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001406980e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 1406980fa FUN_1406980fa body=125 status=ok
// SIG undefined FUN_1406980fa(void)

undefined8 FUN_1406980fa(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_3 + 0xc) != 0) {
    uVar1 = *(uint *)(param_3 + 8);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14069814d;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_3 + 0xc) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar3;
      goto LAB_14069814d;
    }
  }
  uVar4 = 0;
LAB_14069814d:
  uVar2 = FUN_140698182(param_3);
  (**(code **)(*param_1 + 0x38))(param_1,param_2,uVar2,uVar4);
  return param_2;
}



// FUNCTION 140698182 FUN_140698182 body=167 status=ok
// SIG undefined FUN_140698182(void)

undefined8 FUN_140698182(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0xc))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      uVar2 = FUN_1447210f0(*plVar3);
      return uVar2;
    }
  }
  if (((*(int *)(param_1 + 0x14) != 0) && (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x14))) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && ((longlong *)*plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014069821f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)*plVar3 + 0x180))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14069822a FUN_14069822a body=1482 status=ok
// SIG undefined FUN_14069822a(void)

void FUN_14069822a(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined1 local_88 [24];
  longlong local_70;
  undefined8 local_60;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((((*(int *)(param_1 + 0x74) == 0) || (uVar2 = *(uint *)(param_1 + 0x70), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x74))))) ||
     (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
      ((lVar7 = *plVar10, lVar7 == 0 || ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0))))))
  goto LAB_1406984f7;
  if (DAT_14cae8b20 == 0) {
    local_b0 = (code **)&local_60;
    local_60 = (code *)&LAB_14355090c;
    local_a0 = FUN_14081d0ea;
    local_a8 = FUN_14081d0ea;
    local_b8 = &LAB_147b8e16d;
    local_c0 = (code *)&LAB_140810a38;
    local_c8 = L"Engine";
    local_d0 = 0x800000000;
    local_d8 = 0x10000000;
    local_e0 = 8;
    local_e8 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar8 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_b0 = (code **)&local_60;
    local_60 = FUN_1449e2820;
    local_a0 = FUN_14081d0ea;
    local_a8 = FUN_14081d0ea;
    local_b8 = &LAB_1468c5283;
    local_c0 = FUN_142809da0;
    local_c8 = L"Engine";
    local_d0 = 0x400000000;
    local_d8 = 0x10000000;
    local_e0 = 8;
    local_e8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar9 = *(longlong *)(lVar7 + 0x20);
  if (lVar9 == 0) goto LAB_1406984f7;
  iVar3 = *(int *)(lVar8 + 0x38);
  do {
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar3) ||
       (lVar11 = lVar9,
       *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
       lVar8 + 0x30)) {
      lVar11 = 0;
    }
  } while ((lVar11 == 0) && (lVar9 = *(longlong *)(lVar9 + 0x20), lVar9 != 0));
  if ((lVar11 == 0) || ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0)) goto LAB_1406984f7;
  FUN_1406987fe(param_1,&local_60);
  if ((((int)local_60 != 0) && (local_60._4_4_ != 0)) && ((int)local_60 != DAT_14c948000)) {
    lVar8 = *(longlong *)(param_1 + 0x60);
    if (lVar8 == 0) {
      uVar5 = FUN_140927942();
      lVar8 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x60) = lVar8;
    }
    plVar10 = *(longlong **)(param_1 + 0x68);
    if (plVar10 == (longlong *)0x0) {
      uVar12 = 0;
      uVar13 = 0;
      if ((lVar8 != 0) && (uVar13 = uVar12, *(longlong *)(param_1 + 0x58) != 0)) {
        plVar10 = *(longlong **)(lVar8 + 0xb8);
        if (plVar10 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10);
          if (cVar4 != '\0') {
            uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
            plVar10 = (longlong *)FUN_144aff482(uVar5,(longlong *)(param_1 + 0x58));
            *(longlong **)(param_1 + 0x68) = plVar10;
            if (plVar10 != (longlong *)0x0) goto LAB_1406983d7;
            goto LAB_140698406;
          }
        }
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
    }
    else {
LAB_1406983d7:
      cVar4 = (**(code **)(*plVar10 + 0x80))(plVar10);
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(*plVar10 + 0x88))(plVar10);
        uVar13 = 10;
        if (cVar4 != '\0') {
          uVar13 = 0x1e;
        }
      }
      else {
        uVar13 = 0x8c;
      }
    }
LAB_140698406:
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    piVar1 = (int *)(lVar8 + 0xfc8);
    *piVar1 = *piVar1 + 1;
    uVar6 = FUN_14050fd64();
    uVar5 = DAT_14cb1aeb8;
    FUN_1406987fe(param_1,local_88);
    if (DAT_14c947fe0 == 0) {
      lVar9 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar9);
      DAT_14c947fe0 = lVar9;
    }
    FUN_140045924(DAT_14c947fe0,&local_98,local_88,1);
    if (DAT_14cae8b20 == 0) {
      local_b0 = &local_90;
      local_90 = (code *)&LAB_14355090c;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_147b8e16d;
      local_c0 = (code *)&LAB_140810a38;
      local_c8 = L"Engine";
      local_d0 = 0x800000000;
      local_d8 = 0x10000000;
      local_e0 = 8;
      local_e8 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar9 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_b0 = &local_90;
      local_90 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_1468c5283;
      local_c0 = FUN_142809da0;
      local_c8 = L"Engine";
      local_d0 = 0x400000000;
      local_d8 = 0x10000000;
      local_e0 = 8;
      local_e8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar7 = *(longlong *)(lVar7 + 0x20);
    if (lVar7 == 0) {
      lVar11 = 0;
    }
    else {
      iVar3 = *(int *)(lVar9 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar3) ||
           (lVar11 = lVar7,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
           lVar9 + 0x30)) {
          lVar11 = 0;
        }
      } while ((lVar11 == 0) && (lVar7 = *(longlong *)(lVar7 + 0x20), lVar7 != 0));
    }
    piVar1 = (int *)(lVar8 + 0xfc8);
    local_e8 = uVar13;
    FUN_14069887e(uVar6,lVar11,local_98,uVar5);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    *piVar1 = *piVar1 + -1;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1406984f7:
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406987fe FUN_1406987fe body=125 status=ok
// SIG undefined FUN_1406987fe(void)

undefined8 FUN_1406987fe(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0xd8) + 8);
    puVar2 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
    }
    FUN_1447a97f4(param_2,puVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  local_18 = *(undefined8 *)(param_1 + 0x58);
  FUN_1446dcdd4(param_2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069887e FUN_14069887e body=1592 status=ok
// SIG undefined FUN_14069887e(void)

void FUN_14069887e(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,int param_5
                  )

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c872bd8 == '\0') {
    local_60 = *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x18);
    local_50 = 0;
    local_98 = param_4;
    local_58 = param_3;
    FUN_140699b4e(param_1,&local_70,param_2,param_3);
    plVar3 = local_68;
    if (local_68 != (longlong *)0x0) {
      iVar5 = (int)local_68[1];
      do {
        if (iVar5 == 0) goto LAB_140698d08;
        LOCK();
        iVar4 = (int)local_68[1];
        bVar17 = iVar5 == iVar4;
        if (bVar17) {
          *(int *)(local_68 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar17);
      if (local_70 != 0) {
        lVar16 = *(longlong *)(local_70 + 0x20);
        if (lVar16 == 0) {
          local_98 = CONCAT44(local_98._4_4_,param_5);
          local_90 = 0;
          FUN_140844808(param_1,&local_80,param_3,param_4);
          plVar7 = local_78;
          if ((undefined8 *)(local_70 + 0x20) != &local_80) {
            *(undefined8 *)(local_70 + 0x20) = local_80;
            local_80 = 0;
            plVar2 = *(longlong **)(local_70 + 0x28);
            if (local_78 != plVar2) {
              local_78 = (longlong *)0x0;
              *(longlong **)(local_70 + 0x28) = plVar7;
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar2 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
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
          }
          plVar7 = local_78;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_78 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_78)(local_78);
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
          iVar5 = *(int *)(lVar16 + 0x68);
          if (*(int *)(lVar16 + 0x68) < param_5) {
            iVar5 = param_5;
          }
          *(int *)(lVar16 + 0x68) = iVar5;
        }
        if (param_2 == 0) {
          uVar10 = 0;
          uVar11 = 0;
        }
        else {
          uVar10 = *(uint *)(param_2 + 0xc);
          if ((int)uVar10 < DAT_14c9647dc) {
            lVar16 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
          }
          else {
            lVar16 = 0;
          }
          uVar11 = *(uint *)(lVar16 + 0x10);
          if (*(uint *)(lVar16 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            uVar12 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar12);
            }
            LOCK();
            uVar11 = *(uint *)(lVar16 + 0x10);
            bVar17 = uVar11 == 0;
            if (bVar17) {
              *(uint *)(lVar16 + 0x10) = uVar12;
              uVar11 = 0;
            }
            UNLOCK();
            if (bVar17) {
              uVar11 = uVar12;
            }
          }
        }
        local_80 = CONCAT44(uVar11,uVar10);
        iVar5 = FUN_14069bbac((longlong *)(param_1 + 0x588),uVar11 ^ uVar10);
        if (iVar5 == -1) {
          lVar16 = 0;
        }
        else {
          lVar16 = (longlong)iVar5 * 0x70 + *(longlong *)(param_1 + 0x588);
        }
        uVar11 = local_50._4_4_ >> 0xd ^
                 (((uint)local_50 << 0x10 | (uint)local_50 & 0xffff) - local_50._4_4_) +
                 (((uint)local_50 >> 0x10) << 0x13 | (uint)local_50 >> 0x10) +
                 (((uint)local_50 & 0xffff) >> 4);
        uVar10 = uVar11 << 8 ^ (-0x61c88647 - local_50._4_4_) - uVar11;
        uVar14 = uVar10 >> 0xd ^ (local_50._4_4_ - uVar11) - uVar10;
        uVar11 = uVar14 >> 0xc ^ (uVar11 - uVar10) - uVar14;
        uVar12 = uVar11 << 0x10 ^ (uVar10 - uVar14) - uVar11;
        uVar10 = uVar12 >> 5 ^ (uVar14 - uVar11) - uVar12;
        uVar14 = uVar10 >> 3 ^ (uVar11 - uVar12) - uVar10;
        uVar11 = uVar14 << 10 ^ (uVar12 - uVar10) - uVar14;
        uVar11 = uVar11 >> 0xf ^ uVar10 - (uVar14 + uVar11);
        uVar10 = local_58._4_4_ >> 0xd ^
                 (((uint)local_58 << 0x10 | (uint)local_58 & 0xffff) - local_58._4_4_) +
                 (((uint)local_58 >> 0x10) << 0x13 | (uint)local_58 >> 0x10) +
                 (((uint)local_58 & 0xffff) >> 4);
        uVar12 = uVar10 << 8 ^ (-0x61c88647 - local_58._4_4_) - uVar10;
        uVar15 = uVar12 >> 0xd ^ (local_58._4_4_ - uVar10) - uVar12;
        uVar10 = uVar15 >> 0xc ^ (uVar10 - uVar12) - uVar15;
        uVar14 = uVar10 << 0x10 ^ (uVar12 - uVar15) - uVar10;
        uVar12 = uVar14 >> 5 ^ (uVar15 - uVar10) - uVar14;
        uVar15 = uVar12 >> 3 ^ (uVar10 - uVar14) - uVar12;
        uVar10 = uVar15 << 10 ^ (uVar14 - uVar12) - uVar15;
        uVar14 = uVar10 >> 0xf ^ uVar12 - (uVar15 + uVar10);
        uVar12 = uVar14 >> 0xd ^
                 (((uint)local_60 << 0x10 | (uint)local_60 & 0xffff) +
                  (((uint)local_60 & 0xffff) >> 4) +
                 (((uint)local_60 >> 0x10) << 0x13 | (uint)local_60 >> 0x10)) - uVar14;
        uVar10 = uVar12 << 8 ^ (-0x61c88647 - uVar14) - uVar12;
        uVar15 = uVar10 >> 0xd ^ (uVar14 - uVar12) - uVar10;
        uVar14 = uVar15 >> 0xc ^ (uVar12 - uVar10) - uVar15;
        uVar12 = uVar14 << 0x10 ^ (uVar10 - uVar15) - uVar14;
        uVar10 = uVar12 >> 5 ^ (uVar15 - uVar14) - uVar12;
        uVar14 = uVar10 >> 3 ^ (uVar14 - uVar12) - uVar10;
        uVar12 = uVar14 << 10 ^ (uVar12 - uVar10) - uVar14;
        uVar10 = uVar11 >> 0xd ^ (uVar12 >> 0xf ^ uVar10 - (uVar14 + uVar12)) - uVar11;
        uVar12 = uVar10 << 8 ^ (-0x61c88647 - uVar11) - uVar10;
        uVar11 = uVar12 >> 0xd ^ (uVar11 - uVar10) - uVar12;
        uVar10 = uVar11 >> 0xc ^ (uVar10 - uVar12) - uVar11;
        uVar14 = uVar10 << 0x10 ^ (uVar12 - uVar11) - uVar10;
        uVar12 = uVar14 >> 5 ^ (uVar11 - uVar10) - uVar14;
        uVar11 = uVar12 >> 3 ^ (uVar10 - uVar14) - uVar12;
        uVar10 = uVar11 << 10 ^ (uVar14 - uVar12) - uVar11;
        iVar5 = FUN_14069bb2e((longlong *)(lVar16 + 8),uVar10 >> 0xf ^ uVar12 - (uVar11 + uVar10));
        if (iVar5 != -1) {
          lVar6 = *(longlong *)(lVar16 + 8);
          lVar13 = lVar6 + (longlong)iVar5 * 0x30;
          if ((lVar13 != 0) &&
             (plVar7 = (longlong *)(lVar6 + (longlong)iVar5 * 0x30 + 0x18),
             plVar7 != (longlong *)0x0)) {
            lVar6 = *(longlong *)(lVar16 + 0x58);
            iVar5 = *(int *)(lVar16 + 0x60);
            lVar9 = (longlong)iVar5;
            if (lVar9 != 0) {
              uVar8 = 0;
              do {
                if (*(longlong *)(lVar6 + uVar8) == *plVar7) {
                  if ((int)(~uVar8 >> 4) != 0) goto LAB_140698cfe;
                  break;
                }
                uVar8 = uVar8 + 0x10;
              } while (lVar9 << 4 != uVar8);
            }
            *(uint *)(lVar16 + 0x60) = iVar5 + 1U;
            if (*(uint *)(lVar16 + 100) < iVar5 + 1U) {
              FUN_14069bd48((longlong *)(lVar16 + 0x58),iVar5);
              lVar6 = *(longlong *)(lVar16 + 0x58);
            }
            *(undefined8 *)(lVar6 + lVar9 * 0x10) = *(undefined8 *)(lVar13 + 0x18);
            lVar16 = *(longlong *)(lVar13 + 0x20);
            *(longlong *)(lVar6 + 8 + lVar9 * 0x10) = lVar16;
            if (lVar16 != 0) {
              LOCK();
              *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
              UNLOCK();
            }
          }
        }
      }
LAB_140698cfe:
      LOCK();
      plVar7 = plVar3 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
LAB_140698d08:
      if (local_68 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140698eb8 FUN_140698eb8 body=1848 status=ok
// SIG undefined FUN_140698eb8(void)

void FUN_140698eb8(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*(longlong *)(param_1 + 0x10) == 0) || (*(char *)(param_1 + 0x39) != '\0')) ||
     (DAT_14c872bd8 == '\x01')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_14069923e:
    lVar9 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x18);
    lVar9 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar11 != (longlong *)0x0) &&
          (((int)plVar11[2] == *(int *)(param_1 + 0x1c) &&
           ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))) && (lVar9 = *plVar11, lVar9 != 0)) {
        FUN_1447210f0(lVar9);
        if ((*(byte *)(lVar9 + 0x60) & 2) != 0) {
          if (DAT_14cae8b20 == 0) {
            local_80 = &local_58;
            local_58 = (code *)&LAB_14355090c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_147b8e16d;
            local_90 = (code *)&LAB_140810a38;
            local_98 = L"Engine";
            local_a0 = 0x800000000;
            local_a8 = 0x10000000;
            local_b0 = 8;
            local_b8 = 0x3f0;
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          lVar10 = DAT_14cae8b20;
          if (DAT_14c951858 == 0) {
            local_80 = &local_58;
            local_58 = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1468c5283;
            local_90 = FUN_142809da0;
            local_98 = L"Engine";
            local_a0 = 0x400000000;
            local_a8 = 0x10000000;
            local_b0 = 8;
            local_b8 = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar9 = *(longlong *)(lVar9 + 0x20);
          if (lVar9 == 0) {
            lVar8 = 0;
          }
          else {
            iVar3 = *(int *)(lVar10 + 0x38);
            do {
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar3) ||
                 (lVar8 = lVar9,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
                 lVar10 + 0x30)) {
                lVar8 = 0;
              }
            } while ((lVar8 == 0) && (lVar9 = *(longlong *)(lVar9 + 0x20), lVar9 != 0));
          }
          if (*(longlong *)(param_1 + 0x10) == 0) {
            local_58 = (code *)0x0;
          }
          else {
            puVar5 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 8);
            puVar12 = &DAT_14c9485f0;
            if (puVar5 != (undefined4 *)0x0) {
              puVar12 = puVar5;
            }
            if (DAT_14c947fe0 == 0) {
              lVar9 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar9);
              DAT_14c947fe0 = lVar9;
            }
            FUN_140045924(DAT_14c947fe0,&local_58,puVar12,1);
          }
          local_50 = 0x4000;
          local_48 = 0;
          FUN_140699608(&local_40,&local_58,lVar8,0);
          plVar11 = local_38;
          if ((undefined8 *)(param_1 + 0x70) != &local_40) {
            *(undefined8 *)(param_1 + 0x70) = local_40;
            local_40 = 0;
            plVar6 = *(longlong **)(param_1 + 0x78);
            if (local_38 != plVar6) {
              local_38 = (longlong *)0x0;
              *(longlong **)(param_1 + 0x78) = plVar11;
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar11 = plVar6 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
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
            }
          }
          plVar11 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_38 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_38)(local_38);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          uVar7 = 1;
          goto LAB_14069909d;
        }
        if (*(char *)(param_1 + 0x38) == '\x01') {
          if (DAT_14cae8b20 == 0) {
            local_80 = &local_58;
            local_58 = (code *)&LAB_14355090c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_147b8e16d;
            local_90 = (code *)&LAB_140810a38;
            local_98 = L"Engine";
            local_a0 = 0x800000000;
            local_a8 = 0x10000000;
            local_b0 = 8;
            local_b8 = 0x3f0;
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          lVar10 = DAT_14cae8b20;
          if (DAT_14c951858 == 0) {
            local_80 = &local_58;
            local_58 = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1468c5283;
            local_90 = FUN_142809da0;
            local_98 = L"Engine";
            local_a0 = 0x400000000;
            local_a8 = 0x10000000;
            local_b0 = 8;
            local_b8 = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar8 = *(longlong *)(lVar9 + 0x20);
          if (lVar8 != 0) {
            iVar3 = *(int *)(lVar10 + 0x38);
            do {
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar3) ||
                 (lVar9 = lVar8,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
                 lVar10 + 0x30)) {
                lVar9 = 0;
              }
            } while ((lVar9 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
            goto LAB_140699166;
          }
        }
      }
      goto LAB_14069923e;
    }
  }
LAB_140699166:
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_58 = (code *)0x0;
  }
  else {
    puVar5 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 8);
    puVar12 = &DAT_14c9485f0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar12 = puVar5;
    }
    if (DAT_14c947fe0 == 0) {
      lVar10 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar10);
      DAT_14c947fe0 = lVar10;
    }
    FUN_140045924(DAT_14c947fe0,&local_58,puVar12,1);
  }
  local_50 = 0x4000;
  local_48 = 0;
  FUN_140699a3c(&local_40,&local_58,lVar9,uVar4);
  plVar11 = local_38;
  if ((undefined8 *)(param_1 + 0x70) != &local_40) {
    *(undefined8 *)(param_1 + 0x70) = local_40;
    local_40 = 0;
    plVar6 = *(longlong **)(param_1 + 0x78);
    if (local_38 != plVar6) {
      local_38 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x78) = plVar11;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar6 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
    }
  }
  plVar11 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  uVar7 = 0;
LAB_14069909d:
  *(undefined1 *)(param_1 + 0xa0) = uVar7;
  lVar9 = *(longlong *)(param_1 + 0x70);
  if (lVar9 == 0) {
    FUN_1404a8d0c(param_1);
  }
  else {
    FUN_14069969a(local_68,param_1,FUN_1404a8d0c);
    FUN_140844560(lVar9,&local_58,local_68);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140699608 FUN_140699608 body=145 status=ok
// SIG undefined FUN_140699608(void)

undefined8 * FUN_140699608(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xfc8);
  iVar3 = *piVar1;
  *piVar1 = iVar3 + 1;
  uVar2 = DAT_14cb1aeb8;
  if (((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) || (DAT_14c872bd8 == '\x01')) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar4 = FUN_14050fd64();
    FUN_14069983a(uVar4,param_1,param_3,*param_2,uVar2);
    iVar3 = *piVar1 + -1;
  }
  *piVar1 = iVar3;
  return param_1;
}



// FUNCTION 14069969a FUN_14069969a body=415 status=ok
// SIG undefined FUN_14069969a(void)

longlong * FUN_14069969a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_140699770:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14ab634a0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_140699770;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14ab634a0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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



// FUNCTION 14069983a FUN_14069983a body=508 status=ok
// SIG undefined FUN_14069983a(void)

longlong *
FUN_14069983a(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             ulonglong param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) {
    local_50 = 0;
    local_58 = local_58 & 0xffffffff00000000;
    FUN_140844808(param_1,param_2,param_4,param_5);
    goto LAB_1406999cf;
  }
  local_58 = param_5;
  FUN_140699b4e(param_1,&local_48,param_3,param_4);
  if (((local_48 == 0) || (local_40 == (longlong *)0x0)) || ((int)local_40[1] < 1)) {
LAB_140699938:
    lVar9 = 0;
    plVar8 = (longlong *)0x0;
LAB_14069993a:
    if (local_40 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    local_50 = 0;
    local_58 = local_58 & 0xffffffff00000000;
    FUN_140844808(param_1,param_2,param_4,param_5);
    if (lVar9 != 0) {
      lVar3 = *param_2;
      lVar4 = param_2[1];
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(lVar9 + 0x28);
      *(longlong *)(lVar9 + 0x20) = lVar3;
      *(longlong *)(lVar9 + 0x28) = lVar4;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
    if (plVar8 == (longlong *)0x0) goto LAB_14069990d;
  }
  else {
    iVar7 = (int)local_40[1];
    do {
      if (iVar7 == 0) goto LAB_140699938;
      LOCK();
      iVar6 = (int)local_40[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(local_40 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    plVar8 = local_40;
    if (local_48 == 0) {
      lVar9 = 0;
      goto LAB_14069993a;
    }
    lVar9 = local_48;
    if (*(longlong *)(local_48 + 0x20) == 0) goto LAB_14069993a;
    *param_2 = *(longlong *)(local_48 + 0x20);
    lVar9 = *(longlong *)(local_48 + 0x28);
    param_2[1] = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
  }
  LOCK();
  plVar5 = plVar8 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
LAB_1406999cf:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
  }
LAB_14069990d:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140699a3c FUN_140699a3c body=273 status=ok
// SIG undefined FUN_140699a3c(void)

undefined8 *
FUN_140699a3c(undefined8 *param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xfc8);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + 1;
  uVar3 = DAT_14cb1aeb8;
  if (((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) || (DAT_14c872bd8 == '\x01')) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar5 = FUN_14050fd64();
    if (param_3 != 0) {
      local_68 = uVar3;
      FUN_140699b4e(uVar5,local_58,param_3,*param_2);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
    }
    local_68 = CONCAT44(local_68._4_4_,param_4);
    local_60 = 0;
    FUN_140844808(uVar5,param_1,*param_2,uVar3);
    iVar4 = *piVar2 + -1;
  }
  *piVar2 = iVar4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140699b4e FUN_140699b4e body=8158 status=ok
// SIG undefined FUN_140699b4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140699b4e(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  byte bVar22;
  undefined8 *puVar23;
  uint *puVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  longlong *plVar27;
  ulonglong uVar28;
  longlong *plVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  longlong *plVar33;
  longlong *plVar34;
  int iVar35;
  ulonglong uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  longlong lVar43;
  longlong *plVar44;
  bool bVar45;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8 [13];
  
  local_a8[0xc] = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = *(undefined8 *)(*(longlong *)(param_5 + 0x10) + 0x18);
  local_b0 = 0;
  plVar34 = (longlong *)(param_1 + 0x538);
  uVar30 = (uint)((ulonglong)param_4 >> 0x10);
  uVar38 = (uint)param_4 & 0xffff;
  uVar37 = (uint)((ulonglong)param_4 >> 0x20);
  uVar38 = uVar37 >> 0xd ^
           (((uint)param_4 << 0x10 | uVar38) - uVar37) +
           (uVar38 >> 4) + (uVar30 << 0x13 | uVar30 & 0xffff);
  uVar39 = uVar38 << 8 ^ (-0x61c88647 - uVar38) - uVar37;
  uVar30 = uVar39 >> 0xd ^ (uVar37 - uVar38) - uVar39;
  uVar37 = uVar30 >> 0xc ^ (uVar38 - uVar39) - uVar30;
  uVar38 = uVar37 << 0x10 ^ (uVar39 - uVar30) - uVar37;
  uVar39 = uVar38 >> 5 ^ (uVar30 - uVar37) - uVar38;
  uVar30 = uVar39 >> 3 ^ (uVar37 - uVar38) - uVar39;
  uVar37 = uVar30 << 10 ^ (uVar38 - uVar39) - uVar30;
  uVar38 = uVar37 >> 0xf ^ uVar39 - (uVar30 + uVar37);
  uVar30 = (uint)((ulonglong)local_c0 >> 0x10);
  uVar37 = (uint)local_c0 & 0xffff;
  uVar30 = uVar38 >> 0xd ^
           (uVar30 << 0x13 | uVar30 & 0xffff) + uVar37 + (uVar37 >> 4) +
           ((uint)local_c0 * 0x10000 - uVar38);
  uVar37 = uVar30 << 8 ^ (-0x61c88647 - uVar38) - uVar30;
  uVar38 = uVar37 >> 0xd ^ (uVar38 - uVar30) - uVar37;
  uVar30 = uVar38 >> 0xc ^ (uVar30 - uVar37) - uVar38;
  uVar39 = uVar30 << 0x10 ^ (uVar37 - uVar38) - uVar30;
  uVar37 = uVar39 >> 5 ^ (uVar38 - uVar30) - uVar39;
  uVar38 = uVar37 >> 3 ^ (uVar30 - uVar39) - uVar37;
  uVar30 = uVar38 << 10 ^ (uVar39 - uVar37) - uVar38;
  uVar30 = (uVar30 >> 0xf ^ uVar37 - (uVar38 + uVar30)) + 0x42b62ef3 ^ 0x5ea4e;
  uVar37 = uVar30 << 8 ^ 0xe0eda8ac - uVar30;
  uVar38 = uVar37 >> 0xd ^ (-0x42b62ef3 - uVar30) - uVar37;
  uVar39 = uVar38 >> 0xc ^ (uVar30 - uVar37) - uVar38;
  uVar30 = uVar39 << 0x10 ^ (uVar37 - uVar38) - uVar39;
  uVar37 = uVar30 >> 5 ^ (uVar38 - uVar39) - uVar30;
  uVar38 = uVar37 >> 3 ^ (uVar39 - uVar30) - uVar37;
  uVar30 = uVar38 << 10 ^ (uVar30 - uVar37) - uVar38;
  uStack_b8 = param_4;
  iVar13 = FUN_14069bcca(plVar34,uVar30 >> 0xf ^ uVar37 - (uVar38 + uVar30));
  uVar30 = 0;
  if (iVar13 == -1) {
LAB_14069aadc:
    plVar29 = (longlong *)0x0;
    plVar44 = (longlong *)0x0;
  }
  else {
    plVar29 = (longlong *)0x0;
    lVar16 = *plVar34 + (longlong)iVar13 * 0x30;
    if (lVar16 == 0) goto LAB_14069aadc;
    puVar23 = (undefined8 *)(*plVar34 + (longlong)iVar13 * 0x30 + 0x18);
    plVar44 = (longlong *)0x0;
    if (puVar23 != (undefined8 *)0x0) {
      plVar29 = *(longlong **)(lVar16 + 0x20);
      if (plVar29 == (longlong *)0x0) goto LAB_14069aadc;
      iVar13 = (int)plVar29[1];
      plVar44 = (longlong *)0x0;
      do {
        if (iVar13 == 0) {
          plVar29 = (longlong *)0x0;
          goto LAB_140699ded;
        }
        LOCK();
        iVar15 = (int)plVar29[1];
        bVar45 = iVar13 == iVar15;
        if (bVar45) {
          *(int *)(plVar29 + 1) = iVar13 + 1;
          iVar15 = iVar13;
        }
        iVar13 = iVar15;
        UNLOCK();
      } while (!bVar45);
      plVar44 = (longlong *)*puVar23;
    }
  }
LAB_140699ded:
  plVar17 = (longlong *)(param_1 + 0x588);
  local_f0 = plVar34;
  local_c8 = param_2;
  uVar37 = 0;
  if (param_3 != 0) {
    uVar30 = *(uint *)(param_3 + 0xc);
    if ((int)uVar30 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    uVar37 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      uVar38 = DAT_14c964868 + 1;
      bVar45 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar45) {
        local_f8 = (longlong *)CONCAT44(local_f8._4_4_,uVar38);
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar38);
        uVar38 = (uint)local_f8;
      }
      LOCK();
      uVar37 = *(uint *)(lVar16 + 0x10);
      bVar45 = uVar37 == 0;
      if (bVar45) {
        *(uint *)(lVar16 + 0x10) = uVar38;
        uVar37 = 0;
      }
      UNLOCK();
      if (bVar45) {
        uVar37 = uVar38;
      }
    }
  }
  local_a8[0] = CONCAT44(uVar37,uVar30);
  iVar13 = FUN_14069bbac(plVar17,uVar37 ^ uVar30,local_a8);
  if (iVar13 == -1) {
LAB_14069afc0:
    if (param_3 == 0) {
      uVar21 = 0;
      uVar19 = 0;
    }
    else {
      uVar30 = *(uint *)(param_3 + 0xc);
      uVar21 = (ulonglong)uVar30;
      if ((int)uVar30 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      uVar19 = (ulonglong)*(uint *)(lVar16 + 0x10);
      if (*(uint *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        uVar30 = DAT_14c964868 + 1;
        bVar45 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar45) {
          local_d0 = uVar21;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar30);
          uVar21 = local_d0;
        }
        LOCK();
        uVar37 = *(uint *)(lVar16 + 0x10);
        bVar45 = uVar37 == 0;
        if (bVar45) {
          *(uint *)(lVar16 + 0x10) = uVar30;
          uVar37 = 0;
        }
        UNLOCK();
        if (bVar45) {
          uVar37 = uVar30;
        }
        uVar19 = (ulonglong)uVar37;
      }
    }
    if (*(int *)(param_1 + 0x5bc) == 0) {
      uVar30 = *(uint *)(param_1 + 0x590);
      plVar34 = (longlong *)(ulonglong)uVar30;
      *(uint *)(param_1 + 0x590) = uVar30 + 1;
      if (*(uint *)(param_1 + 0x594) == uVar30) {
        local_e0 = uVar19;
        FUN_140275bcc(plVar17,uVar30);
        uVar19 = local_e0;
      }
      iVar13 = *(int *)(param_1 + 0x5b0);
      if (iVar13 == 0) {
        iVar15 = -1;
      }
      else {
        iVar15 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar15 = iVar13 + -1;
        }
        iVar15 = iVar15 >> 5;
      }
      local_d8 = param_1 + 0x598;
      iVar14 = iVar13 + 1;
      iVar35 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar35 = iVar13;
      }
      local_f8 = plVar34;
      if (iVar35 >> 5 == iVar15) {
        *(int *)(param_1 + 0x5b0) = iVar14;
      }
      else {
        if (*(int *)(param_1 + 0x5b4) <= iVar13) {
          uVar30 = iVar13 + 0x20;
          local_e8 = (ulonglong)uVar30;
          local_e0 = uVar19;
          local_d0 = uVar21;
          if (uVar30 < 0xa0) {
            iVar14 = 0x80;
            iVar15 = iVar13;
          }
          else {
            uVar30 = uVar30 >> 5;
            local_e8 = (ulonglong)uVar30;
            if (*(int *)(param_1 + 0x5b4) + 0x1fU < 0xa0) {
              uVar37 = 4;
              if (4 < uVar30) {
                uVar37 = uVar30;
              }
            }
            else {
              uVar37 = (uVar30 * 3 >> 3) + uVar30 + 0x10;
            }
            uVar19 = FUN_144a3809e(uVar37 << 2,0);
            iVar15 = (int)(uVar19 >> 2);
            iVar14 = -0x20;
            if ((int)local_e8 <= iVar15) {
              iVar14 = iVar15 << 5;
            }
            iVar15 = *(int *)(param_1 + 0x5b0);
          }
          *(int *)(param_1 + 0x5b4) = iVar14;
          FUN_1446efbd8(local_d8,iVar15);
          iVar14 = *(int *)(param_1 + 0x5b0) + 1;
          uVar19 = local_e0;
          uVar21 = local_d0;
        }
        iVar15 = iVar14 + 0x1f;
        if (-1 < iVar14) {
          iVar15 = iVar14;
        }
        *(int *)(param_1 + 0x5b0) = iVar14;
        if (iVar14 % 0x20 != 0) {
          lVar16 = *(longlong *)(param_1 + 0x5a8);
          if (*(longlong *)(param_1 + 0x5a8) == 0) {
            lVar16 = local_d8;
          }
          bVar22 = -(char)(iVar14 % 0x20);
          *(uint *)(lVar16 + (longlong)(iVar15 >> 5) * 4) =
               (uint)(*(int *)(lVar16 + (longlong)(iVar15 >> 5) * 4) << (bVar22 & 0x1f)) >>
               (bVar22 & 0x1f);
        }
      }
      lVar18 = (longlong)(int)local_f8;
      lVar16 = local_d8;
      if (*(longlong *)(param_1 + 0x5a8) != 0) {
        lVar16 = *(longlong *)(param_1 + 0x5a8);
      }
      bVar22 = (byte)iVar13 & 0x1f;
      puVar2 = (uint *)(lVar16 + (longlong)(iVar35 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
    }
    else {
      local_f8 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x5b8);
      lVar18 = (longlong)(int)*(uint *)(param_1 + 0x5b8);
      iVar13 = *(int *)(*(longlong *)(param_1 + 0x588) + 4 + lVar18 * 0x70);
      *(int *)(param_1 + 0x5b8) = iVar13;
      iVar15 = *(int *)(param_1 + 0x5bc) + -1;
      *(int *)(param_1 + 0x5bc) = iVar15;
      if (iVar15 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x588) + (longlong)iVar13 * 0x70) = 0xffffffff;
      }
    }
    iVar13 = (int)local_f8;
    lVar16 = param_1 + 0x598;
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x5a8);
    }
    iVar15 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar15 = iVar13;
    }
    puVar2 = (uint *)(lVar16 + (longlong)(iVar15 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)local_f8 & 0x1f);
    _Src = (ulonglong *)(*(longlong *)(param_1 + 0x588) + lVar18 * 0x70);
    local_a8[4] = 0;
    local_a8[7] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[5] = 0x8000000000;
    puVar26 = (ulonglong *)(*(longlong *)(param_1 + 0x588) + lVar18 * 0x70);
    *puVar26 = uVar21 & 0xffffffff | uVar19 << 0x20;
    puVar26[5] = 0;
    *(undefined4 *)(puVar26 + 6) = 0;
    puVar26[1] = 0;
    puVar26[2] = 0;
    *(undefined8 *)((longlong)puVar26 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar26 + 0x3c) = 0;
    if (puVar26 + 1 != local_a8) {
      *(undefined4 *)(_Src + 3) = 0;
      *(undefined4 *)((longlong)_Src + 0x1c) = 0;
      *(undefined4 *)(_Src + 4) = 0;
      *(undefined4 *)((longlong)_Src + 0x24) = 0;
      local_a8[5] = 0;
    }
    local_a8[6] = 0xffffffff;
    *(undefined4 *)(_Src + 8) = 0;
    _Src[9] = 0;
    local_a8[8] = 0;
    *(undefined4 *)(_Src + 10) = 0;
    local_a8[9] = 0;
    _Src[0xb] = 0;
    local_a8[10] = 0;
    _Src[0xc] = 0;
    local_a8[0xb] = 0;
    FUN_14099ab1d(0,0);
    if (local_a8[10] != 0) {
      FUN_1400020a8();
    }
    local_a8[9] = local_a8[9] & 0xffffffff00000000;
    if (local_a8[8] != 0) {
      FUN_1400020a8();
    }
    FUN_14099aae6(local_a8);
    *(undefined4 *)(_Src + 0xd) = 0xffffffff;
    uVar19 = *_Src;
    uVar30 = (uint)(uVar19 >> 0x20) ^ (uint)uVar19;
    iVar13 = 1;
    if (*(int *)(param_1 + 0x590) - *(int *)(param_1 + 0x5bc) == 1) {
      uVar37 = 1;
LAB_14069b20c:
      if (((int)uVar37 < 1) || (iVar13 <= *(int *)(param_1 + 0x5d0))) {
        uVar30 = *(int *)(param_1 + 0x5d0) - 1U & uVar30;
        *(uint *)((longlong)_Src + 0x6c) = uVar30;
        lVar16 = *(longlong *)(param_1 + 0x5c8);
        if (*(longlong *)(param_1 + 0x5c8) == 0) {
          lVar16 = param_1 + 0x5c0;
        }
        *(undefined4 *)(_Src + 0xd) =
             *(undefined4 *)
              (lVar16 + ((longlong)*(int *)(param_1 + 0x5d0) - 1U & (longlong)(int)uVar30) * 4);
        lVar16 = *(longlong *)(param_1 + 0x5c8);
        if (*(longlong *)(param_1 + 0x5c8) == 0) {
          lVar16 = param_1 + 0x5c0;
        }
        *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 0x5d0) - 1U & (longlong)(int)uVar30) * 4) =
             (int)local_f8;
        plVar34 = local_f8;
      }
      else {
        *(int *)(param_1 + 0x5d0) = iVar13;
        FUN_14069be56(plVar17);
        plVar34 = local_f8;
      }
    }
    else {
      local_a8[0] = uVar19;
      uVar37 = FUN_14069bbac(plVar17,uVar30);
      if (uVar37 == 0xffffffff) {
        uVar37 = *(int *)(param_1 + 0x590) - *(int *)(param_1 + 0x5bc);
        if (3 < uVar37) {
          uVar19 = (ulonglong)(uVar37 & 0xfffffffe) + 0xf;
          lVar16 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar16 & 0x1f);
        }
        goto LAB_14069b20c;
      }
      lVar16 = *plVar17;
      FUN_14099aaa0((longlong)(int)uVar37 * 0x70 + lVar16 + 8);
      memmove((void *)(lVar16 + (longlong)(int)uVar37 * 0x70),_Src,0x68);
      FUN_1405f5dde(plVar17,local_f8);
      plVar34 = (longlong *)(ulonglong)uVar37;
    }
    lVar16 = *plVar17 + (longlong)(int)plVar34 * 0x70;
  }
  else {
    if (*plVar17 + (longlong)iVar13 * 0x70 == 0) goto LAB_14069afc0;
    lVar16 = *plVar17 + (longlong)iVar13 * 0x70;
  }
  plVar34 = (longlong *)(lVar16 + 8);
  uVar30 = local_b0._4_4_ >> 0xd ^
           (((uint)local_b0 << 0x10 | (uint)local_b0 & 0xffff) - local_b0._4_4_) +
           (((uint)local_b0 >> 0x10) << 0x13 | (uint)local_b0 >> 0x10) +
           (((uint)local_b0 & 0xffff) >> 4);
  uVar37 = uVar30 << 8 ^ (-0x61c88647 - local_b0._4_4_) - uVar30;
  uVar38 = uVar37 >> 0xd ^ (local_b0._4_4_ - uVar30) - uVar37;
  uVar30 = uVar38 >> 0xc ^ (uVar30 - uVar37) - uVar38;
  uVar39 = uVar30 << 0x10 ^ (uVar37 - uVar38) - uVar30;
  uVar37 = uVar39 >> 5 ^ (uVar38 - uVar30) - uVar39;
  uVar38 = uVar37 >> 3 ^ (uVar30 - uVar39) - uVar37;
  uVar30 = uVar38 << 10 ^ (uVar39 - uVar37) - uVar38;
  uVar30 = uVar30 >> 0xf ^ uVar37 - (uVar38 + uVar30);
  uVar38 = uStack_b8._4_4_ >> 0xd ^
           (((uint)uStack_b8 << 0x10 | (uint)uStack_b8 & 0xffff) - uStack_b8._4_4_) +
           (((uint)uStack_b8 >> 0x10) << 0x13 | (uint)uStack_b8 >> 0x10) +
           (((uint)uStack_b8 & 0xffff) >> 4);
  uVar40 = uVar38 << 8 ^ (-0x61c88647 - uStack_b8._4_4_) - uVar38;
  uVar37 = uVar40 >> 0xd ^ (uStack_b8._4_4_ - uVar38) - uVar40;
  uVar39 = uVar37 >> 0xc ^ (uVar38 - uVar40) - uVar37;
  uVar38 = uVar39 << 0x10 ^ (uVar40 - uVar37) - uVar39;
  uVar40 = uVar38 >> 5 ^ (uVar37 - uVar39) - uVar38;
  uVar37 = uVar40 >> 3 ^ (uVar39 - uVar38) - uVar40;
  uVar38 = uVar37 << 10 ^ (uVar38 - uVar40) - uVar37;
  uVar39 = uVar38 >> 0xf ^ uVar40 - (uVar37 + uVar38);
  uVar38 = uVar39 >> 0xd ^
           (((uint)local_c0 << 0x10 | (uint)local_c0 & 0xffff) + (((uint)local_c0 & 0xffff) >> 4) +
           (((uint)local_c0 >> 0x10) << 0x13 | (uint)local_c0 >> 0x10)) - uVar39;
  uVar37 = uVar38 << 8 ^ (-0x61c88647 - uVar39) - uVar38;
  uVar40 = uVar37 >> 0xd ^ (uVar39 - uVar38) - uVar37;
  uVar39 = uVar40 >> 0xc ^ (uVar38 - uVar37) - uVar40;
  uVar38 = uVar39 << 0x10 ^ (uVar37 - uVar40) - uVar39;
  uVar37 = uVar38 >> 5 ^ (uVar40 - uVar39) - uVar38;
  uVar39 = uVar37 >> 3 ^ (uVar39 - uVar38) - uVar37;
  uVar38 = uVar39 << 10 ^ (uVar38 - uVar37) - uVar39;
  uVar37 = uVar30 >> 0xd ^ (uVar38 >> 0xf ^ uVar37 - (uVar39 + uVar38)) - uVar30;
  uVar38 = uVar37 << 8 ^ (-0x61c88647 - uVar30) - uVar37;
  uVar30 = uVar38 >> 0xd ^ (uVar30 - uVar37) - uVar38;
  uVar37 = uVar30 >> 0xc ^ (uVar37 - uVar38) - uVar30;
  uVar39 = uVar37 << 0x10 ^ (uVar38 - uVar30) - uVar37;
  uVar38 = uVar39 >> 5 ^ (uVar30 - uVar37) - uVar39;
  uVar30 = uVar38 >> 3 ^ (uVar37 - uVar39) - uVar38;
  uVar37 = uVar30 << 10 ^ (uVar39 - uVar38) - uVar30;
  iVar13 = FUN_14069bb2e(plVar34,uVar37 >> 0xf ^ uVar38 - (uVar30 + uVar37));
  if (iVar13 != -1) {
    if (((*plVar34 + (longlong)iVar13 * 0x30 != 0) &&
        (plVar17 = (longlong *)((longlong)iVar13 * 0x30 + *plVar34 + 0x18),
        plVar17 != (longlong *)0x0)) && (*plVar17 != 0)) goto LAB_14069a134;
  }
  if (plVar44 == (longlong *)0x0) {
    plVar20 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar20[1] = (longlong)&DAT_100000001;
    *plVar20 = (longlong)&PTR_FUN_14a1ca090;
    plVar20[4] = 0;
    plVar20[5] = 0;
    plVar20[6] = 0;
    plVar20[7] = 0;
    plVar17 = plVar20 + 2;
    *plVar17 = 0;
    plVar20[3] = 0;
    plVar44 = plVar20;
    if (plVar17 == (longlong *)0x0) {
      if (plVar20 == (longlong *)0x0) goto LAB_14069b985;
LAB_14069a64a:
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
      if (plVar20 == plVar29) {
        LOCK();
        plVar33 = plVar20 + 1;
        *(int *)plVar33 = (int)*plVar33 + -1;
        UNLOCK();
        plVar44 = plVar29;
        if ((int)*plVar33 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      else if (plVar29 != (longlong *)0x0) {
        bVar45 = false;
        goto LAB_14069b9f7;
      }
LAB_14069a663:
      LOCK();
      plVar33 = plVar20 + 1;
      *(int *)plVar33 = (int)*plVar33 + -1;
      UNLOCK();
      plVar29 = plVar44;
      if ((int)*plVar33 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    else {
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        plVar20[2] = (longlong)(plVar20 + 2);
        if ((longlong *)plVar20[3] != plVar20) {
          LOCK();
          *(int *)((longlong)plVar20 + 0xc) = *(int *)((longlong)plVar20 + 0xc) + 1;
          UNLOCK();
          if ((longlong *)plVar20[3] != (longlong *)0x0) {
            plVar33 = plVar20 + 3;
            plVar27 = (longlong *)plVar20[3];
            goto LAB_14069b967;
          }
          plVar20[3] = (longlong)plVar20;
        }
LAB_14069a640:
        LOCK();
        plVar33 = plVar20 + 1;
        *(int *)plVar33 = (int)*plVar33 + -1;
        UNLOCK();
        if ((int)*plVar33 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        goto LAB_14069a64a;
      }
      plVar33 = (longlong *)&DAT_00000018;
      _DAT_00000010 = 0x10;
      plVar27 = _DAT_00000018;
      if (_DAT_00000018 != (longlong *)0x0) {
LAB_14069b967:
        LOCK();
        piVar1 = (int *)((longlong)plVar27 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar27 + 0x10))();
        }
        *plVar33 = (longlong)plVar20;
        if (plVar20 != (longlong *)0x0) goto LAB_14069a640;
      }
LAB_14069b985:
      bVar45 = true;
      if (plVar29 == (longlong *)0x0) {
        plVar29 = (longlong *)0x0;
      }
      else {
LAB_14069b9f7:
        LOCK();
        plVar33 = plVar29 + 1;
        *(int *)plVar33 = (int)*plVar33 + -1;
        UNLOCK();
        if ((int)*plVar33 == 0) {
          (**(code **)*plVar29)(plVar29);
          LOCK();
          piVar1 = (int *)((longlong)plVar29 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar29 + 0x10))(plVar29);
          }
        }
        plVar29 = plVar20;
        if (!bVar45) goto LAB_14069a663;
      }
    }
    plVar20[4] = param_4;
    if (param_5 == 0) {
      *(undefined4 *)(plVar20 + 5) = 0;
      iVar13 = 0;
    }
    else {
      uVar30 = *(uint *)(param_5 + 0xc);
      *(uint *)(plVar20 + 5) = uVar30;
      if ((int)uVar30 < DAT_14c9647dc) {
        lVar18 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
      }
      else {
        lVar18 = 0;
      }
      iVar13 = *(int *)(lVar18 + 0x10);
      if (*(int *)(lVar18 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar45 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar45) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar13 = *(int *)(lVar18 + 0x10);
        bVar45 = iVar13 == 0;
        if (bVar45) {
          *(int *)(lVar18 + 0x10) = iVar15;
          iVar13 = 0;
        }
        UNLOCK();
        if (bVar45) {
          iVar13 = iVar15;
        }
      }
    }
    *(int *)((longlong)plVar20 + 0x2c) = iVar13;
    if (plVar29 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar29 + 0xc) = *(int *)((longlong)plVar29 + 0xc) + 1;
      UNLOCK();
    }
    local_f8 = plVar17;
    if (*(int *)(param_1 + 0x56c) == 0) {
      iVar13 = *(int *)(param_1 + 0x540);
      *(int *)(param_1 + 0x540) = iVar13 + 1;
      if (*(int *)(param_1 + 0x544) == iVar13) {
        FUN_140044672(local_f0,iVar13);
      }
      iVar15 = *(int *)(param_1 + 0x560);
      if (iVar15 == 0) {
        iVar14 = -1;
      }
      else {
        iVar14 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar14 = iVar15 + -1;
        }
        iVar14 = iVar14 >> 5;
      }
      lVar18 = param_1 + 0x548;
      iVar35 = iVar15 + 1;
      iVar31 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar31 = iVar15;
      }
      if (iVar31 >> 5 == iVar14) {
        *(int *)(param_1 + 0x560) = iVar35;
      }
      else {
        if (*(int *)(param_1 + 0x564) <= iVar15) {
          if (iVar15 + 0x20U < 0xa0) {
            iVar35 = 0x80;
            iVar14 = iVar15;
          }
          else {
            uVar30 = iVar15 + 0x20U >> 5;
            if (*(int *)(param_1 + 0x564) + 0x1fU < 0xa0) {
              uVar37 = 4;
              if (4 < uVar30) {
                uVar37 = uVar30;
              }
            }
            else {
              uVar37 = (uVar30 * 3 >> 3) + uVar30 + 0x10;
            }
            uVar19 = FUN_144a3809e(uVar37 << 2,0);
            iVar14 = (int)(uVar19 >> 2);
            iVar35 = -0x20;
            if ((int)uVar30 <= iVar14) {
              iVar35 = iVar14 << 5;
            }
            iVar14 = *(int *)(param_1 + 0x560);
          }
          *(int *)(param_1 + 0x564) = iVar35;
          FUN_1446efbd8(lVar18,iVar14);
          iVar35 = *(int *)(param_1 + 0x560) + 1;
          plVar17 = local_f8;
        }
        iVar14 = iVar35 + 0x1f;
        if (-1 < iVar35) {
          iVar14 = iVar35;
        }
        *(int *)(param_1 + 0x560) = iVar35;
        if (iVar35 % 0x20 != 0) {
          lVar43 = *(longlong *)(param_1 + 0x558);
          if (*(longlong *)(param_1 + 0x558) == 0) {
            lVar43 = lVar18;
          }
          bVar22 = -(char)(iVar35 % 0x20);
          *(uint *)(lVar43 + (longlong)(iVar14 >> 5) * 4) =
               (uint)(*(int *)(lVar43 + (longlong)(iVar14 >> 5) * 4) << (bVar22 & 0x1f)) >>
               (bVar22 & 0x1f);
        }
      }
      lVar43 = (longlong)iVar13;
      if (*(longlong *)(param_1 + 0x558) != 0) {
        lVar18 = *(longlong *)(param_1 + 0x558);
      }
      bVar22 = (byte)iVar15 & 0x1f;
      puVar2 = (uint *)(lVar18 + (longlong)(iVar31 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
    }
    else {
      iVar13 = *(int *)(param_1 + 0x568);
      lVar43 = (longlong)iVar13;
      iVar15 = *(int *)(*(longlong *)(param_1 + 0x538) + 4 + lVar43 * 0x30);
      *(int *)(param_1 + 0x568) = iVar15;
      iVar14 = *(int *)(param_1 + 0x56c) + -1;
      *(int *)(param_1 + 0x56c) = iVar14;
      if (iVar14 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x538) + (longlong)iVar15 * 0x30) = 0xffffffff;
      }
    }
    lVar18 = param_1 + 0x548;
    if (*(longlong *)(param_1 + 0x558) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x558);
    }
    iVar15 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar15 = iVar13;
    }
    puVar2 = (uint *)(lVar18 + (longlong)(iVar15 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar13 & 0x1f);
    iVar15 = 1;
    lVar18 = *(longlong *)(param_1 + 0x538);
    lVar43 = lVar43 * 0x30;
    puVar3 = (undefined4 *)(lVar18 + lVar43);
    puVar4 = (undefined4 *)(lVar18 + lVar43);
    *puVar4 = (uint)local_c0;
    puVar4[1] = local_c0._4_4_;
    puVar4[2] = (uint)uStack_b8;
    puVar4[3] = uStack_b8._4_4_;
    *(undefined8 *)(lVar18 + 0x10 + lVar43) = local_b0;
    *(longlong **)(lVar18 + 0x18 + lVar43) = plVar17;
    *(longlong **)(lVar18 + 0x20 + lVar43) = plVar29;
    *(undefined4 *)(lVar18 + 0x28 + lVar43) = 0xffffffff;
    uVar30 = *(uint *)(lVar18 + lVar43);
    uVar37 = *(uint *)(lVar18 + 8 + lVar43);
    uVar38 = *(uint *)(lVar18 + 0xc + lVar43);
    uVar39 = *(uint *)(lVar18 + 0x14 + lVar43);
    uVar40 = (uint)((ulonglong)local_b0 >> 0x10);
    uVar41 = (uint)local_b0 & 0xffff;
    uVar32 = uVar39 >> 0xd ^
             (((uint)local_b0 << 0x10 | uVar41) - uVar39) +
             (uVar41 >> 4) + (uVar40 << 0x13 | uVar40 & 0xffff);
    uVar41 = uVar32 << 8 ^ (-0x61c88647 - uVar39) - uVar32;
    uVar40 = uVar41 >> 0xd ^ (uVar39 - uVar32) - uVar41;
    uVar39 = uVar40 >> 0xc ^ (uVar32 - uVar41) - uVar40;
    uVar32 = uVar39 << 0x10 ^ (uVar41 - uVar40) - uVar39;
    uVar41 = uVar32 >> 5 ^ (uVar40 - uVar39) - uVar32;
    uVar40 = uVar41 >> 3 ^ (uVar39 - uVar32) - uVar41;
    uVar39 = uVar40 << 10 ^ (uVar32 - uVar41) - uVar40;
    uVar39 = uVar39 >> 0xf ^ uVar41 - (uVar40 + uVar39);
    uVar41 = uVar38 >> 0xd ^
             ((uVar37 << 0x10 | uVar37 & 0xffff) - uVar38) +
             ((uVar37 >> 0x10) << 0x13 | uVar37 >> 0x10) + ((uVar37 & 0xffff) >> 4);
    uVar40 = uVar41 << 8 ^ (-0x61c88647 - uVar38) - uVar41;
    uVar37 = uVar40 >> 0xd ^ (uVar38 - uVar41) - uVar40;
    uVar38 = uVar37 >> 0xc ^ (uVar41 - uVar40) - uVar37;
    uVar41 = uVar38 << 0x10 ^ (uVar40 - uVar37) - uVar38;
    uVar40 = uVar41 >> 5 ^ (uVar37 - uVar38) - uVar41;
    uVar37 = uVar40 >> 3 ^ (uVar38 - uVar41) - uVar40;
    uVar38 = uVar37 << 10 ^ (uVar41 - uVar40) - uVar37;
    uVar38 = uVar38 >> 0xf ^ uVar40 - (uVar37 + uVar38);
    uVar37 = uVar38 >> 0xd ^
             ((uVar30 << 0x10 | uVar30 & 0xffff) + ((uVar30 & 0xffff) >> 4) +
             ((uVar30 >> 0x10) << 0x13 | uVar30 >> 0x10)) - uVar38;
    uVar30 = uVar37 << 8 ^ (-0x61c88647 - uVar38) - uVar37;
    uVar40 = uVar30 >> 0xd ^ (uVar38 - uVar37) - uVar30;
    uVar38 = uVar40 >> 0xc ^ (uVar37 - uVar30) - uVar40;
    uVar37 = uVar38 << 0x10 ^ (uVar30 - uVar40) - uVar38;
    uVar30 = uVar37 >> 5 ^ (uVar40 - uVar38) - uVar37;
    uVar38 = uVar30 >> 3 ^ (uVar38 - uVar37) - uVar30;
    uVar37 = uVar38 << 10 ^ (uVar37 - uVar30) - uVar38;
    uVar37 = uVar39 >> 0xd ^ (uVar37 >> 0xf ^ uVar30 - (uVar38 + uVar37)) - uVar39;
    uVar38 = uVar37 << 8 ^ (-0x61c88647 - uVar39) - uVar37;
    uVar30 = uVar38 >> 0xd ^ (uVar39 - uVar37) - uVar38;
    uVar37 = uVar30 >> 0xc ^ (uVar37 - uVar38) - uVar30;
    uVar38 = uVar37 << 0x10 ^ (uVar38 - uVar30) - uVar37;
    uVar39 = uVar38 >> 5 ^ (uVar30 - uVar37) - uVar38;
    uVar30 = uVar39 >> 3 ^ (uVar37 - uVar38) - uVar39;
    uVar37 = uVar30 << 10 ^ (uVar38 - uVar39) - uVar30;
    uVar30 = uVar37 >> 0xf ^ uVar39 - (uVar30 + uVar37);
    uVar37 = *(int *)(param_1 + 0x540) - *(int *)(param_1 + 0x56c);
    if (uVar37 != 1) {
      iVar14 = FUN_14069bcca(local_f0,uVar30,puVar3);
      if (iVar14 != -1) {
        puVar4 = (undefined4 *)(*local_f0 + (longlong)iVar14 * 0x30);
        plVar44 = *(longlong **)(*local_f0 + 0x20 + (longlong)iVar14 * 0x30);
        if (plVar44 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar44 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar44 + 0x10))();
          }
        }
        uVar5 = *puVar3;
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        uVar9 = puVar3[4];
        uVar10 = puVar3[5];
        uVar11 = puVar3[6];
        uVar12 = puVar3[7];
        *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar3 + 8);
        puVar4[4] = uVar9;
        puVar4[5] = uVar10;
        puVar4[6] = uVar11;
        puVar4[7] = uVar12;
        *puVar4 = uVar5;
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        FUN_14080938c(local_f0,iVar13);
        plVar44 = local_f8;
        goto LAB_14069a193;
      }
      if (3 < uVar37) {
        uVar19 = (ulonglong)(uVar37 & 0xfffffffe) + 0xf;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar18 & 0x1f);
      }
    }
    if (((int)uVar37 < 1) || (iVar15 <= *(int *)(param_1 + 0x580))) {
      uVar30 = *(int *)(param_1 + 0x580) - 1U & uVar30;
      puVar3[0xb] = uVar30;
      lVar18 = *(longlong *)(param_1 + 0x578);
      if (*(longlong *)(param_1 + 0x578) == 0) {
        lVar18 = param_1 + 0x570;
      }
      puVar3[10] = *(undefined4 *)
                    (lVar18 + ((longlong)*(int *)(param_1 + 0x580) - 1U & (longlong)(int)uVar30) * 4
                    );
      lVar18 = *(longlong *)(param_1 + 0x578);
      if (*(longlong *)(param_1 + 0x578) == 0) {
        lVar18 = param_1 + 0x570;
      }
      *(int *)(lVar18 + ((longlong)*(int *)(param_1 + 0x580) - 1U & (longlong)(int)uVar30) * 4) =
           iVar13;
      plVar44 = local_f8;
    }
    else {
      *(int *)(param_1 + 0x580) = iVar15;
      FUN_14069c07c(local_f0);
      plVar44 = local_f8;
    }
  }
LAB_14069a193:
  if (*(int *)(lVar16 + 0x3c) == 0) {
    iVar13 = *(int *)(lVar16 + 0x10);
    *(int *)(lVar16 + 0x10) = iVar13 + 1;
    if (*(int *)(lVar16 + 0x14) == iVar13) {
      FUN_140044672(plVar34,iVar13);
    }
    iVar15 = *(int *)(lVar16 + 0x30);
    if (iVar15 == 0) {
      iVar14 = -1;
    }
    else {
      iVar14 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar14 = iVar15 + -1;
      }
      iVar14 = iVar14 >> 5;
    }
    lVar43 = lVar16 + 0x18;
    iVar35 = iVar15 + 1;
    iVar31 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar31 = iVar15;
    }
    if (iVar31 >> 5 == iVar14) {
      *(int *)(lVar16 + 0x30) = iVar35;
    }
    else {
      if (*(int *)(lVar16 + 0x34) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar35 = 0x80;
          iVar14 = iVar15;
        }
        else {
          uVar30 = iVar15 + 0x20U >> 5;
          if (*(int *)(lVar16 + 0x34) + 0x1fU < 0xa0) {
            uVar37 = 4;
            if (4 < uVar30) {
              uVar37 = uVar30;
            }
          }
          else {
            uVar37 = (uVar30 * 3 >> 3) + uVar30 + 0x10;
          }
          uVar19 = FUN_144a3809e(uVar37 << 2,0);
          iVar14 = (int)(uVar19 >> 2);
          iVar35 = -0x20;
          if ((int)uVar30 <= iVar14) {
            iVar35 = iVar14 << 5;
          }
          iVar14 = *(int *)(lVar16 + 0x30);
        }
        *(int *)(lVar16 + 0x34) = iVar35;
        FUN_1446efbd8(lVar43,iVar14);
        iVar35 = *(int *)(lVar16 + 0x30) + 1;
      }
      iVar14 = iVar35 + 0x1f;
      if (-1 < iVar35) {
        iVar14 = iVar35;
      }
      *(int *)(lVar16 + 0x30) = iVar35;
      if (iVar35 % 0x20 != 0) {
        lVar18 = *(longlong *)(lVar16 + 0x28);
        if (*(longlong *)(lVar16 + 0x28) == 0) {
          lVar18 = lVar43;
        }
        bVar22 = -(char)(iVar35 % 0x20);
        *(uint *)(lVar18 + (longlong)(iVar14 >> 5) * 4) =
             (uint)(*(int *)(lVar18 + (longlong)(iVar14 >> 5) * 4) << (bVar22 & 0x1f)) >>
             (bVar22 & 0x1f);
      }
    }
    lVar18 = (longlong)iVar13;
    if (*(longlong *)(lVar16 + 0x28) != 0) {
      lVar43 = *(longlong *)(lVar16 + 0x28);
    }
    bVar22 = (byte)iVar15 & 0x1f;
    puVar2 = (uint *)(lVar43 + (longlong)(iVar31 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
  }
  else {
    iVar13 = *(int *)(lVar16 + 0x38);
    lVar18 = (longlong)iVar13;
    iVar15 = *(int *)(*plVar34 + 4 + lVar18 * 0x30);
    *(int *)(lVar16 + 0x38) = iVar15;
    iVar14 = *(int *)(lVar16 + 0x3c) + -1;
    *(int *)(lVar16 + 0x3c) = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)(*plVar34 + (longlong)iVar15 * 0x30) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(lVar16 + 0x18);
  puVar24 = *(uint **)(lVar16 + 0x28);
  if (*(uint **)(lVar16 + 0x28) == (uint *)0x0) {
    puVar24 = puVar2;
  }
  iVar15 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar15 = iVar13;
  }
  puVar24[iVar15 >> 5] = puVar24[iVar15 >> 5] | 1 << ((byte)iVar13 & 0x1f);
  uVar30 = 1;
  lVar43 = *plVar34;
  lVar18 = lVar18 * 0x30;
  puVar24 = (uint *)(lVar43 + lVar18);
  *(undefined8 *)(lVar43 + 0x10 + lVar18) = local_b0;
  puVar3 = (undefined4 *)(lVar43 + lVar18);
  *puVar3 = (uint)local_c0;
  puVar3[1] = local_c0._4_4_;
  puVar3[2] = (uint)uStack_b8;
  puVar3[3] = uStack_b8._4_4_;
  *(longlong **)(lVar43 + 0x18 + lVar18) = plVar44;
  *(longlong **)(lVar43 + 0x20 + lVar18) = plVar29;
  if (plVar29 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
    UNLOCK();
  }
  puVar24[10] = 0xffffffff;
  uVar37 = *puVar24;
  uVar38 = puVar24[2];
  uVar39 = puVar24[3];
  uVar40 = puVar24[4];
  uVar41 = puVar24[5];
  uVar40 = uVar41 >> 0xd ^
           ((uVar40 << 0x10 | uVar40 & 0xffff) - uVar41) +
           ((uVar40 >> 0x10) << 0x13 | uVar40 >> 0x10) + ((uVar40 & 0xffff) >> 4);
  uVar32 = uVar40 << 8 ^ (-0x61c88647 - uVar41) - uVar40;
  uVar41 = uVar32 >> 0xd ^ (uVar41 - uVar40) - uVar32;
  uVar40 = uVar41 >> 0xc ^ (uVar40 - uVar32) - uVar41;
  uVar32 = uVar40 << 0x10 ^ (uVar32 - uVar41) - uVar40;
  uVar41 = uVar32 >> 5 ^ (uVar41 - uVar40) - uVar32;
  uVar42 = uVar41 >> 3 ^ (uVar40 - uVar32) - uVar41;
  uVar40 = uVar42 << 10 ^ (uVar32 - uVar41) - uVar42;
  uVar40 = uVar40 >> 0xf ^ uVar41 - (uVar42 + uVar40);
  uVar32 = uVar39 >> 0xd ^
           ((uVar38 << 0x10 | uVar38 & 0xffff) - uVar39) +
           ((uVar38 >> 0x10) << 0x13 | uVar38 >> 0x10) + ((uVar38 & 0xffff) >> 4);
  uVar41 = uVar32 << 8 ^ (-0x61c88647 - uVar39) - uVar32;
  uVar38 = uVar41 >> 0xd ^ (uVar39 - uVar32) - uVar41;
  uVar39 = uVar38 >> 0xc ^ (uVar32 - uVar41) - uVar38;
  uVar32 = uVar39 << 0x10 ^ (uVar41 - uVar38) - uVar39;
  uVar41 = uVar32 >> 5 ^ (uVar38 - uVar39) - uVar32;
  uVar38 = uVar41 >> 3 ^ (uVar39 - uVar32) - uVar41;
  uVar39 = uVar38 << 10 ^ (uVar32 - uVar41) - uVar38;
  uVar39 = uVar39 >> 0xf ^ uVar41 - (uVar38 + uVar39);
  uVar38 = uVar39 >> 0xd ^
           ((uVar37 << 0x10 | uVar37 & 0xffff) + ((uVar37 & 0xffff) >> 4) +
           ((uVar37 >> 0x10) << 0x13 | uVar37 >> 0x10)) - uVar39;
  uVar37 = uVar38 << 8 ^ (-0x61c88647 - uVar39) - uVar38;
  uVar41 = uVar37 >> 0xd ^ (uVar39 - uVar38) - uVar37;
  uVar39 = uVar41 >> 0xc ^ (uVar38 - uVar37) - uVar41;
  uVar38 = uVar39 << 0x10 ^ (uVar37 - uVar41) - uVar39;
  uVar37 = uVar38 >> 5 ^ (uVar41 - uVar39) - uVar38;
  uVar39 = uVar37 >> 3 ^ (uVar39 - uVar38) - uVar37;
  uVar38 = uVar39 << 10 ^ (uVar38 - uVar37) - uVar39;
  uVar38 = uVar40 >> 0xd ^ (uVar38 >> 0xf ^ uVar37 - (uVar39 + uVar38)) - uVar40;
  uVar39 = uVar38 << 8 ^ (-0x61c88647 - uVar40) - uVar38;
  uVar37 = uVar39 >> 0xd ^ (uVar40 - uVar38) - uVar39;
  uVar38 = uVar37 >> 0xc ^ (uVar38 - uVar39) - uVar37;
  uVar39 = uVar38 << 0x10 ^ (uVar39 - uVar37) - uVar38;
  uVar40 = uVar39 >> 5 ^ (uVar37 - uVar38) - uVar39;
  uVar37 = uVar40 >> 3 ^ (uVar38 - uVar39) - uVar40;
  uVar38 = uVar37 << 10 ^ (uVar39 - uVar40) - uVar37;
  uVar37 = uVar38 >> 0xf ^ uVar40 - (uVar37 + uVar38);
  uVar38 = *(int *)(lVar16 + 0x10) - *(int *)(lVar16 + 0x3c);
  local_f8 = plVar44;
  if (uVar38 != 1) {
    iVar15 = FUN_14069bb2e(plVar34,uVar37,puVar24);
    if (iVar15 != -1) {
      puVar2 = (uint *)(*plVar34 + (longlong)iVar15 * 0x30);
      plVar44 = *(longlong **)(*plVar34 + 0x20 + (longlong)iVar15 * 0x30);
      if (plVar44 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar44 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar44)(plVar44);
          LOCK();
          piVar1 = (int *)((longlong)plVar44 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar44 + 0x10))(plVar44);
          }
        }
      }
      uVar30 = *puVar24;
      uVar37 = puVar24[1];
      uVar38 = puVar24[2];
      uVar39 = puVar24[3];
      uVar40 = puVar24[4];
      uVar41 = puVar24[5];
      uVar32 = puVar24[6];
      uVar42 = puVar24[7];
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar24 + 8);
      puVar2[4] = uVar40;
      puVar2[5] = uVar41;
      puVar2[6] = uVar32;
      puVar2[7] = uVar42;
      *puVar2 = uVar30;
      puVar2[1] = uVar37;
      puVar2[2] = uVar38;
      puVar2[3] = uVar39;
      FUN_1470e9394(plVar34,iVar13);
      plVar44 = local_f8;
      goto LAB_14069a134;
    }
    if (3 < uVar38) {
      uVar19 = (ulonglong)(uVar38 & 0xfffffffe) + 0xf;
      lVar18 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar30 = 1 << ((byte)lVar18 & 0x1f);
    }
  }
  if (((int)uVar38 < 1) || ((int)uVar30 <= *(int *)(lVar16 + 0x50))) {
    uVar37 = *(int *)(lVar16 + 0x50) - 1U & uVar37;
    puVar24[0xb] = uVar37;
    lVar18 = *(longlong *)(lVar16 + 0x48);
    if (*(longlong *)(lVar16 + 0x48) == 0) {
      lVar18 = lVar16 + 0x40;
    }
    puVar24[10] = *(uint *)(lVar18 + ((longlong)*(int *)(lVar16 + 0x50) - 1U & (longlong)(int)uVar37
                                     ) * 4);
    lVar18 = *(longlong *)(lVar16 + 0x48);
    if (*(longlong *)(lVar16 + 0x48) == 0) {
      lVar18 = lVar16 + 0x40;
    }
    *(int *)(lVar18 + ((longlong)*(int *)(lVar16 + 0x50) - 1U & (longlong)(int)uVar37) * 4) = iVar13
    ;
    plVar44 = local_f8;
    goto LAB_14069a134;
  }
  *(uint *)(lVar16 + 0x50) = uVar30;
  plVar17 = (longlong *)(lVar16 + 0x48);
  if (*(longlong *)(lVar16 + 0x48) != 0) {
    FUN_1446efa72(plVar17,0,0,4);
    uVar30 = *(uint *)(lVar16 + 0x50);
  }
  uVar19 = lVar16 + 0x40;
  if (uVar30 == 1) {
    if (*plVar17 != 0) {
      FUN_1446efa72(plVar17,0,0,4);
    }
LAB_14069ab0d:
    uVar37 = 0;
    do {
      uVar21 = *(ulonglong *)(lVar16 + 0x48);
      if (*(ulonglong *)(lVar16 + 0x48) == 0) {
        uVar21 = uVar19;
      }
      *(undefined4 *)(uVar21 + (ulonglong)(*(int *)(lVar16 + 0x50) + 0x7fffffffU & uVar37) * 4) =
           0xffffffff;
      uVar37 = uVar37 + 1;
    } while (uVar30 != uVar37);
  }
  else {
    plVar44 = local_f8;
    if (uVar30 == 0) goto LAB_14069a134;
    FUN_1446efa72(plVar17,0,uVar30,4);
    if (0 < (int)uVar30) goto LAB_14069ab0d;
  }
  iVar13 = *(int *)(lVar16 + 0x30);
  plVar44 = local_f8;
  if (iVar13 == 0) {
    uVar21 = 0;
    uVar36 = 1;
    iVar14 = 0;
    iVar15 = 0;
  }
  else {
    puVar24 = *(uint **)(lVar16 + 0x28);
    if (*(uint **)(lVar16 + 0x28) == (uint *)0x0) {
      puVar24 = puVar2;
    }
    uVar30 = *puVar24;
    if (uVar30 == 0) {
      iVar15 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar15 = iVar13 + -1;
      }
      uVar21 = 0;
      uVar36 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar36 = uVar21;
      }
      iVar15 = 0;
      do {
        if (uVar36 == uVar21) goto LAB_14069a134;
        iVar15 = iVar15 + 0x20;
        uVar30 = puVar24[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar21 = 0;
      iVar15 = 0;
    }
    uVar36 = (ulonglong)(-uVar30 & uVar30);
    uVar25 = uVar36 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar14 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar14) {
      iVar14 = iVar13;
    }
  }
  if (iVar14 < iVar13) {
    uVar30 = 0xffffffff;
    do {
      local_e0 = CONCAT44(local_e0._4_4_,uVar30);
      local_f0 = (longlong *)CONCAT44(local_f0._4_4_,iVar15);
      lVar18 = *plVar34;
      local_d8 = (longlong)iVar14;
      lVar43 = local_d8 * 0x30;
      uVar37 = *(uint *)(lVar18 + 8 + lVar43);
      uVar38 = *(uint *)(lVar18 + 0x10 + lVar43);
      uVar39 = *(uint *)(lVar18 + 0x14 + lVar43);
      uVar38 = uVar39 >> 0xd ^
               ((uVar38 << 0x10 | uVar38 & 0xffff) - uVar39) +
               ((uVar38 >> 0x10) << 0x13 | uVar38 >> 0x10) + ((uVar38 & 0xffff) >> 4);
      uVar40 = uVar38 << 8 ^ (-0x61c88647 - uVar39) - uVar38;
      uVar41 = uVar40 >> 0xd ^ (uVar39 - uVar38) - uVar40;
      uVar39 = uVar41 >> 0xc ^ (uVar38 - uVar40) - uVar41;
      uVar38 = uVar39 << 0x10 ^ (uVar40 - uVar41) - uVar39;
      uVar41 = uVar38 >> 5 ^ (uVar41 - uVar39) - uVar38;
      uVar40 = uVar41 >> 3 ^ (uVar39 - uVar38) - uVar41;
      uVar39 = uVar40 << 10 ^ (uVar38 - uVar41) - uVar40;
      uVar38 = *(uint *)(lVar18 + 0xc + lVar43);
      uVar40 = uVar39 >> 0xf ^ uVar41 - (uVar40 + uVar39);
      uVar37 = uVar38 >> 0xd ^
               ((uVar37 << 0x10 | uVar37 & 0xffff) - uVar38) +
               ((uVar37 >> 0x10) << 0x13 | uVar37 >> 0x10) + ((uVar37 & 0xffff) >> 4);
      uVar39 = uVar37 << 8 ^ (-0x61c88647 - uVar38) - uVar37;
      uVar38 = uVar39 >> 0xd ^ (uVar38 - uVar37) - uVar39;
      uVar41 = uVar38 >> 0xc ^ (uVar37 - uVar39) - uVar38;
      uVar37 = uVar41 << 0x10 ^ (uVar39 - uVar38) - uVar41;
      uVar38 = uVar37 >> 5 ^ (uVar38 - uVar41) - uVar37;
      uVar41 = uVar38 >> 3 ^ (uVar41 - uVar37) - uVar38;
      uVar39 = uVar41 << 10 ^ (uVar37 - uVar38) - uVar41;
      uVar37 = *(uint *)(lVar18 + lVar43);
      uVar39 = uVar39 >> 0xf ^ uVar38 - (uVar41 + uVar39);
      uVar37 = uVar39 >> 0xd ^
               ((uVar37 << 0x10 | uVar37 & 0xffff) + ((uVar37 & 0xffff) >> 4) +
               ((uVar37 >> 0x10) << 0x13 | uVar37 >> 0x10)) - uVar39;
      uVar38 = uVar37 << 8 ^ (-0x61c88647 - uVar39) - uVar37;
      uVar41 = uVar38 >> 0xd ^ (uVar39 - uVar37) - uVar38;
      uVar39 = uVar41 >> 0xc ^ (uVar37 - uVar38) - uVar41;
      uVar37 = uVar39 << 0x10 ^ (uVar38 - uVar41) - uVar39;
      uVar38 = uVar37 >> 5 ^ (uVar41 - uVar39) - uVar37;
      uVar39 = uVar38 >> 3 ^ (uVar39 - uVar37) - uVar38;
      uVar37 = uVar39 << 10 ^ (uVar37 - uVar38) - uVar39;
      uVar37 = uVar40 >> 0xd ^ (uVar37 >> 0xf ^ uVar38 - (uVar39 + uVar37)) - uVar40;
      uVar38 = uVar37 << 8 ^ (-0x61c88647 - uVar40) - uVar37;
      uVar39 = uVar38 >> 0xd ^ (uVar40 - uVar37) - uVar38;
      uVar40 = uVar39 >> 0xc ^ (uVar37 - uVar38) - uVar39;
      uVar37 = uVar40 << 0x10 ^ (uVar38 - uVar39) - uVar40;
      uVar38 = uVar37 >> 5 ^ (uVar39 - uVar40) - uVar37;
      uVar39 = uVar38 >> 3 ^ (uVar40 - uVar37) - uVar38;
      uVar37 = uVar39 << 10 ^ (uVar37 - uVar38) - uVar39;
      uVar28 = (longlong)(int)(uVar37 >> 0xf ^ uVar38 - (uVar39 + uVar37)) &
               (longlong)*(int *)(lVar16 + 0x50) - 1U;
      iVar13 = (int)uVar28;
      *(int *)(lVar18 + 0x2c + lVar43) = iVar13;
      uVar25 = *(ulonglong *)(lVar16 + 0x48);
      if (*(ulonglong *)(lVar16 + 0x48) == 0) {
        uVar25 = uVar19;
      }
      *(undefined4 *)(lVar18 + 0x28 + lVar43) =
           *(undefined4 *)(uVar25 + ((longlong)*(int *)(lVar16 + 0x50) - 1U & uVar28) * 4);
      uVar25 = *(ulonglong *)(lVar16 + 0x48);
      if (*(ulonglong *)(lVar16 + 0x48) == 0) {
        uVar25 = uVar19;
      }
      *(int *)(uVar25 + ((longlong)iVar13 & (longlong)*(int *)(lVar16 + 0x50) - 1U) * 4) = iVar14;
      uVar30 = ~(uint)uVar36 & uVar30;
      puVar24 = *(uint **)(lVar16 + 0x28);
      if (*(uint **)(lVar16 + 0x28) == (uint *)0x0) {
        puVar24 = puVar2;
      }
      iVar13 = *(int *)(lVar16 + 0x30);
      iVar14 = (int)uVar21;
      lVar18 = (longlong)iVar14;
      uVar37 = puVar24[lVar18] & uVar30;
      local_e8 = uVar19;
      if (uVar37 == 0) {
        iVar35 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar35 = iVar13 + -1;
        }
        iVar35 = iVar35 >> 5;
        iVar31 = iVar35;
        if (iVar35 < iVar14) {
          iVar31 = iVar14;
        }
        if (iVar35 <= iVar14) break;
        lVar43 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar37 = puVar24[lVar18 + lVar43 + 1];
          if (uVar37 != 0) break;
          lVar43 = lVar43 + 1;
          if (iVar31 - lVar18 == lVar43) goto LAB_14069a134;
        }
        uVar21 = (ulonglong)(iVar14 + (int)lVar43 + 1);
        uVar30 = 0xffffffff;
      }
      uVar36 = (ulonglong)(-uVar37 & uVar37);
      uVar25 = uVar36 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar14 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar13);
  }
LAB_14069a134:
  puVar23 = local_c8;
  *local_c8 = plVar44;
  local_c8[1] = plVar29;
  if (plVar29 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar29 + 0xc) = *(int *)((longlong)plVar29 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar34 = plVar29 + 1;
    *(int *)plVar34 = (int)*plVar34 + -1;
    UNLOCK();
    if ((int)*plVar34 == 0) {
      (**(code **)*plVar29)(plVar29);
      LOCK();
      piVar1 = (int *)((longlong)plVar29 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
  }
  if ((local_a8[0xc] ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return puVar23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069bb2e FUN_14069bb2e body=125 status=ok
// SIG undefined FUN_14069bb2e(void)

int FUN_14069bb2e(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x30;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 8 + lVar4) == param_3[2]))
            && (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) &&
           ((*(int *)(lVar2 + 0x10 + lVar4) == param_3[4] &&
            (*(int *)(lVar2 + 0x14 + lVar4) == param_3[5])))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14069bbac FUN_14069bbac body=180 status=ok
// SIG undefined FUN_14069bbac(void)

int FUN_14069bbac(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x70);
        cVar1 = FUN_14069bc62(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14069bc3a;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x68 + (longlong)iVar4 * 0x70);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14069bc3a:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069bc62 FUN_14069bc62 body=104 status=ok
// SIG undefined FUN_14069bc62(void)

ulonglong FUN_14069bc62(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 14069bcca FUN_14069bcca body=125 status=ok
// SIG undefined FUN_14069bcca(void)

int FUN_14069bcca(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x30;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 8 + lVar4) == param_3[2]))
            && (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) &&
           ((*(int *)(lVar2 + 0x10 + lVar4) == param_3[4] &&
            (*(int *)(lVar2 + 0x14 + lVar4) == param_3[5])))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14069bd48 FUN_14069bd48 body=269 status=ok
// SIG undefined FUN_14069bd48(void)

void FUN_14069bd48(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14069be56 FUN_14069be56 body=549 status=ok
// SIG undefined FUN_14069be56(void)

void FUN_14069be56(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x70;
        uVar13 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x6c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x68 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_14069c036;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_14069c036:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069c07c FUN_14069c07c body=1290 status=ok
// SIG undefined FUN_14069c07c(void)

void FUN_14069c07c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar9,4);
    if (0 < (int)uVar9) {
      uVar3 = 0;
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar9 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_70 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_70 = local_68 & 0xffffffff;
      uVar12 = local_68 >> 0x20;
    }
    uVar9 = (uint)local_58;
    iVar16 = local_58._4_4_;
    iVar8 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_74 = iVar8;
        lVar7 = *param_1;
        lVar6 = (longlong)iVar16 * 0x30;
        uVar3 = *(uint *)(lVar7 + 8 + lVar6);
        uVar4 = *(uint *)(lVar7 + 0x10 + lVar6);
        uVar14 = *(uint *)(lVar7 + 0x14 + lVar6);
        uVar4 = uVar14 >> 0xd ^
                ((uVar4 << 0x10 | uVar4 & 0xffff) - uVar14) +
                ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4);
        uVar13 = uVar4 << 8 ^ (-0x61c88647 - uVar14) - uVar4;
        uVar14 = uVar13 >> 0xd ^ (uVar14 - uVar4) - uVar13;
        uVar15 = uVar14 >> 0xc ^ (uVar4 - uVar13) - uVar14;
        uVar4 = uVar15 << 0x10 ^ (uVar13 - uVar14) - uVar15;
        uVar14 = uVar4 >> 5 ^ (uVar14 - uVar15) - uVar4;
        uVar13 = uVar14 >> 3 ^ (uVar15 - uVar4) - uVar14;
        uVar15 = uVar13 << 10 ^ (uVar4 - uVar14) - uVar13;
        uVar4 = *(uint *)(lVar7 + 0xc + lVar6);
        uVar13 = uVar15 >> 0xf ^ uVar14 - (uVar13 + uVar15);
        uVar3 = uVar4 >> 0xd ^
                ((uVar3 << 0x10 | uVar3 & 0xffff) - uVar4) +
                ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4);
        uVar14 = uVar3 << 8 ^ (-0x61c88647 - uVar4) - uVar3;
        uVar15 = uVar14 >> 0xd ^ (uVar4 - uVar3) - uVar14;
        uVar4 = uVar15 >> 0xc ^ (uVar3 - uVar14) - uVar15;
        uVar3 = uVar4 << 0x10 ^ (uVar14 - uVar15) - uVar4;
        uVar14 = uVar3 >> 5 ^ (uVar15 - uVar4) - uVar3;
        uVar4 = uVar14 >> 3 ^ (uVar4 - uVar3) - uVar14;
        uVar15 = uVar4 << 10 ^ (uVar3 - uVar14) - uVar4;
        uVar3 = *(uint *)(lVar7 + lVar6);
        uVar4 = uVar15 >> 0xf ^ uVar14 - (uVar4 + uVar15);
        uVar3 = uVar4 >> 0xd ^
                ((uVar3 << 0x10 | uVar3 & 0xffff) + ((uVar3 & 0xffff) >> 4) +
                ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10)) - uVar4;
        uVar14 = uVar3 << 8 ^ (-0x61c88647 - uVar4) - uVar3;
        uVar4 = uVar14 >> 0xd ^ (uVar4 - uVar3) - uVar14;
        uVar15 = uVar4 >> 0xc ^ (uVar3 - uVar14) - uVar4;
        uVar3 = uVar15 << 0x10 ^ (uVar14 - uVar4) - uVar15;
        uVar14 = uVar3 >> 5 ^ (uVar4 - uVar15) - uVar3;
        uVar4 = uVar14 >> 3 ^ (uVar15 - uVar3) - uVar14;
        uVar3 = uVar4 << 10 ^ (uVar3 - uVar14) - uVar4;
        uVar3 = uVar13 >> 0xd ^ (uVar3 >> 0xf ^ uVar14 - (uVar4 + uVar3)) - uVar13;
        uVar4 = uVar3 << 8 ^ (-0x61c88647 - uVar13) - uVar3;
        uVar13 = uVar4 >> 0xd ^ (uVar13 - uVar3) - uVar4;
        uVar14 = uVar13 >> 0xc ^ (uVar3 - uVar4) - uVar13;
        uVar3 = uVar14 << 0x10 ^ (uVar4 - uVar13) - uVar14;
        uVar4 = uVar3 >> 5 ^ (uVar13 - uVar14) - uVar3;
        uVar14 = uVar4 >> 3 ^ (uVar14 - uVar3) - uVar4;
        uVar3 = uVar14 << 10 ^ (uVar3 - uVar4) - uVar14;
        uVar17 = (longlong)(int)(uVar3 >> 0xf ^ uVar4 - (uVar14 + uVar3)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar17;
        *(int *)(lVar7 + 0x2c + lVar6) = iVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar7 + 0x28 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16
        ;
        uVar9 = ~(uint)uVar12 & uVar9;
        plVar5 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar5 = local_60;
        }
        iVar2 = (int)local_60[3];
        iVar16 = (int)local_70;
        lVar7 = (longlong)iVar16;
        uVar3 = *(uint *)((longlong)plVar5 + lVar7 * 4) & uVar9;
        iVar8 = local_74;
        if (uVar3 == 0) {
          iVar10 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar10 = iVar2 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar11 = iVar10;
          if (iVar10 < iVar16) {
            iVar11 = iVar16;
          }
          if (iVar10 <= iVar16) break;
          lVar6 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar3 = *(uint *)((longlong)plVar5 + lVar6 * 4 + lVar7 * 4 + 4);
            if (uVar3 != 0) break;
            lVar6 = lVar6 + 1;
            if (iVar11 - lVar7 == lVar6) goto LAB_14069c542;
          }
          local_70 = (ulonglong)(iVar16 + (int)lVar6 + 1);
          uVar9 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar3 & uVar3);
        uVar17 = uVar12 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar16 = (iVar8 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar2);
    }
  }
LAB_14069c542:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069c588 FUN_14069c588 body=378 status=ok
// SIG undefined FUN_14069c588(void)

void FUN_14069c588(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)FUN_144718840(param_1,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
        lVar3 = FUN_14069c71e();
        if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          lVar2 = FUN_1405831b2();
          if ((*(longlong *)(lVar2 + 0xc88 + ((ulonglong)param_2 & 0xff) * 0x18) != 0) &&
             (*(int *)(lVar2 + ((ulonglong)param_2 & 0xff) * 0x18 + 0xc90) - 1U < 0xfffffffe)) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069c71e FUN_14069c71e body=57 status=ok
// SIG undefined FUN_14069c71e(void)

void FUN_14069c71e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba96e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba96e8 = FUN_140002ddd(FUN_1465d4710,uVar1,L"OakDamageState");
  }
  return;
}



// FUNCTION 14069c758 FUN_14069c758 body=381 status=ok
// SIG undefined FUN_14069c758(void)

void FUN_14069c758(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x5b8) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x5b0);
    iVar5 = 1;
    lVar7 = 0;
    plVar9 = plVar1;
    do {
      if ((*plVar9 == *param_2) && ((int)plVar9[1] == (int)param_2[1])) {
        if (iVar5 != 0) {
          lVar4 = FUN_141090500(param_2);
          lVar4 = FUN_14095dd8e(lVar4 + (ulonglong)*(byte *)(plVar1 + (lVar7 >> 0x20) * 4 + 3) *
                                        0x28 + 0x10);
          if (lVar4 != 0) {
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar4);
            }
            local_38 = 1;
            lVar2 = *(longlong *)(param_1 + 0x250);
            lVar6 = lVar2;
            local_40 = lVar4;
            if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
              FUN_1456cec3c(lVar2);
              lVar6 = *(longlong *)(param_1 + 0x250);
            }
            local_30 = lVar2;
            FUN_14109058a(lVar6);
          }
          iVar3 = *(int *)(param_1 + 0x5b8);
          iVar5 = iVar3 - iVar5;
          if (iVar5 != 0) {
            iVar8 = 1;
            if (iVar5 < 1) {
              iVar8 = iVar5;
            }
            memmove((void *)((lVar7 >> 0x20) * 0x20 + *(longlong *)(param_1 + 0x5b0)),
                    (void *)((longlong)(iVar3 - iVar8) * 0x20 + *(longlong *)(param_1 + 0x5b0)),
                    (longlong)iVar8 << 5);
            iVar3 = *(int *)(param_1 + 0x5b8);
          }
          *(int *)(param_1 + 0x5b8) = iVar3 + -1;
        }
        break;
      }
      plVar9 = plVar9 + 4;
      lVar7 = lVar7 + 0x100000000;
      iVar5 = iVar5 + 1;
    } while (plVar9 != plVar1 + (longlong)*(int *)(param_1 + 0x5b8) * 4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14069c8d6 FUN_14069c8d6 body=225 status=ok
// SIG undefined FUN_14069c8d6(void)

void FUN_14069c8d6(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  char *_Str;
  size_t sVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [40];
  undefined1 local_150 [256];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_2 + 8);
    do {
      uVar1 = *puVar3;
      _Str = (char *)puVar3[-1];
      local_50 = 0;
      if (_Str == (char *)0x0) {
        local_48 = 0;
        local_40 = 0;
      }
      else {
        sVar2 = strlen(_Str);
        FUN_1446e6fe8(local_150,_Str,sVar2 & 0xffffffff,1);
      }
      FUN_14069c9b8(param_1,local_48,uVar1);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      puVar3 = puVar3 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069c9b8 FUN_14069c9b8 body=144 status=ok
// SIG undefined FUN_14069c9b8(void)

void FUN_14069c9b8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,param_2,1);
  iVar1 = *(int *)(param_1 + 0x1f8);
  *(uint *)(param_1 + 0x1f8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1fc) < iVar1 + 1U) {
    FUN_14069ca4a((longlong *)(param_1 + 0x1f0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x1f0);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = local_30;
  *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = param_3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069ca4a FUN_14069ca4a body=269 status=ok
// SIG undefined FUN_14069ca4a(void)

void FUN_14069ca4a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14069cb5d FUN_14069cb5d body=152 status=ok
// SIG undefined FUN_14069cb5d(void)

undefined4 FUN_14069cb5d(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14069cc7b(&local_28,param_1);
  uVar4 = 0;
  if (local_28 != 0) {
    lVar3 = FUN_14069cbf6(local_28 + 0x470,local_28 + 0x478,param_1);
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(lVar3 + 8);
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069cbf6 FUN_14069cbf6 body=133 status=ok
// SIG undefined FUN_14069cbf6(void)

ulonglong FUN_14069cbf6(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_2[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      while (puVar1 = (ulonglong *)(*param_2 + (longlong)iVar4 * 0x18), *puVar1 != param_3) {
        iVar4 = (int)puVar1[2];
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (puVar1 == (ulonglong *)0x0) {
        return 0;
      }
      if (puVar1 + 1 == (ulonglong *)0x0) {
        return 0;
      }
      return puVar1[1];
    }
  }
  return 0;
}



// FUNCTION 14069cc7b FUN_14069cc7b body=417 status=ok
// SIG undefined FUN_14069cc7b(void)

longlong * FUN_14069cc7b(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = *(longlong *)(param_2 + 0xb0);
  if ((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_2), lVar6 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  uVar3 = DAT_14cb1c840;
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_14005915a(DAT_14c9a7d10,&local_38,uVar3,lVar6);
  plVar7 = local_30;
  if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) {
        param_1[1] = 0;
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    if (param_1[1] != 0) {
      *param_1 = local_38;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14069ce20 FUN_14069ce20 body=91 status=ok
// SIG undefined FUN_14069ce20(void)

undefined8 FUN_14069ce20(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14069ce7c();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14069ce7c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014069ce6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14069ce7c FUN_14069ce7c body=228 status=ok
// SIG undefined FUN_14069ce7c(void)

longlong FUN_14069ce7c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb22180 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f2891f;
    local_40 = FUN_1464378ee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargetable",&DAT_14cb22180,&DAT_147f2891e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb22180;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069cf61 FUN_14069cf61 body=72 status=ok
// SIG undefined FUN_14069cf61(void)

void FUN_14069cf61(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 1000);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x32] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x7f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14069cfaa FUN_14069cfaa body=2093 status=ok
// SIG undefined FUN_14069cfaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14069cfaa(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  code *pcVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_288 [32];
  code **local_268;
  undefined4 local_260;
  undefined8 *local_258;
  undefined1 *local_250;
  wchar_t *local_248;
  code *local_240;
  undefined1 *local_238;
  code **local_230;
  code *local_228;
  code *local_220;
  longlong *local_218;
  longlong local_210;
  code *local_208;
  longlong local_200;
  undefined4 *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  uint local_1d4;
  undefined1 local_1d0;
  undefined1 local_1c9;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  code *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_189;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined2 local_177;
  undefined1 local_175;
  undefined4 local_174;
  undefined1 local_170;
  undefined4 local_16c;
  undefined1 local_168;
  undefined4 local_164;
  undefined2 local_160;
  longlong local_138;
  undefined8 local_130;
  int local_128 [4];
  longlong local_118;
  undefined8 local_110;
  code *local_108 [2];
  longlong *local_f8;
  longlong local_e8 [5];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_218 = param_1;
  local_1f0 = param_3;
  (**(code **)(*param_1 + 0x48))(param_1,local_108);
  if ((longlong)(int)param_2[1] != 0) {
    lVar19 = *param_2;
    lVar18 = (longlong)(int)param_2[1] * 0x3f8 + lVar19;
    local_1f8 = (undefined4 *)(param_4 + 0x50);
    local_208 = local_108[0];
    pcVar20 = local_108[0];
    local_210 = lVar18;
    local_200 = param_4;
    do {
      pcVar9 = local_108[0];
      if (pcVar20 == (code *)0x0) {
        *(undefined1 *)(lVar19 + 0x26c) = 1;
LAB_14069d0f4:
        if (*(char *)(lVar19 + 0x26d) == '\x01') {
          if (((9.999999747378752e-05 < ABS(*(double *)(lVar19 + 0x2d0) - _DAT_14cb76660)) ||
              (9.999999747378752e-05 < ABS(*(double *)(lVar19 + 0x2d8) - _DAT_14cb76668))) ||
             (9.999999747378752e-05 < ABS(*(double *)(lVar19 + 0x2e0) - _DAT_14cb76670))) {
            dVar22 = *(double *)(lVar19 + 0x2e0) - *(double *)(param_4 + 0x60);
            dVar21 = *(double *)(lVar19 + 0x2d8) - *(double *)(param_4 + 0x58);
            dVar4 = *(double *)(lVar19 + 0x2d0) - *(double *)(param_4 + 0x50);
            dVar23 = dVar22 * dVar22 + dVar4 * dVar4 + dVar21 * dVar21;
            if ((0.0001 < ABS(dVar23)) &&
               (dVar23 = 1.0 / SQRT(dVar23),
               ABS(dVar22 * dVar23 * dVar22 * dVar23 +
                   dVar4 * dVar23 * dVar4 * dVar23 + dVar21 * dVar23 * dVar21 * dVar23 + -1.0) <=
               1e-08)) {
              local_164 = 0;
              local_180 = 0;
              local_160 = 0x101;
              local_138 = 0;
              local_130 = 0x800000000;
              local_118 = 0;
              local_110 = 0x400000000;
              local_178 = 1;
              local_16c = 0;
              local_177 = 1;
              local_175 = 0;
              local_168 = 0;
              local_174 = 0x1000000;
              local_170 = 1;
              iVar3 = *(int *)(param_4 + 0x140);
              if (iVar3 != 0) {
                local_110 = 0x400000001;
                local_128[0] = iVar3;
              }
              uVar11 = (uint)(iVar3 != 0);
              if (*(int *)(param_4 + 0x148) != 0) {
                local_110 = CONCAT44(local_110._4_4_,uVar11 + 1);
                local_128[uVar11] = *(int *)(param_4 + 0x148);
              }
              local_1d4 = 0x81;
              if ((longlong)DAT_14cb76800 != 0) {
                local_1d4 = 0x81;
                lVar17 = 0;
                do {
                  local_1d4 = local_1d4 | 1 << (*(byte *)(DAT_14cb767f8 + lVar17) & 0x1f);
                  lVar17 = lVar17 + 4;
                } while ((longlong)DAT_14cb76800 * 4 != lVar17);
              }
              local_1d0 = *(undefined1 *)(param_4 + 0x160);
              local_188 = DAT_14cb76680;
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_1a8 = *(code **)(lVar19 + 0x2d0);
              uStack_1a0 = *(undefined8 *)(lVar19 + 0x2d8);
              local_198 = *(undefined8 *)(lVar19 + 0x2e0);
              local_1c8 = *local_1f8;
              uStack_1c4 = local_1f8[1];
              uStack_1c0 = local_1f8[2];
              uStack_1bc = local_1f8[3];
              local_1b8 = *(undefined8 *)(local_1f8 + 4);
              local_240 = (code *)&local_189;
              local_248 = (wchar_t *)&local_1d4;
              local_250 = &DAT_14cad0f10;
              local_258 = &local_188;
              local_260 = DAT_14cad0ec4;
              local_268 = &local_1a8;
              FUN_1401e2596(local_1f0,&local_1e8,&local_1c9,&local_1c8);
              if ((longlong)(int)uStack_1e0 != 0) {
                puVar16 = (undefined8 *)(local_1e8 + 0xb8);
                lVar17 = (longlong)(int)uStack_1e0 << 8;
                do {
                  lVar18 = FUN_14485cccc(puVar16);
                  bVar5 = true;
                  if (*(int *)((longlong)puVar16 + 0x24) == 0) {
LAB_14069d563:
                    plVar15 = (longlong *)0x0;
LAB_14069d466:
                    if (lVar18 != 0) {
                      if (DAT_14cb56270 == 0) {
                        local_1a8 = FUN_1449e2820;
                        local_220 = FUN_14081d0ea;
                        local_228 = FUN_1427b09ee;
                        local_230 = &local_1a8;
                        local_238 = &LAB_148630fef;
                        local_240 = FUN_1464b6a91;
                        local_248 = L"Engine";
                        local_250 = (undefined1 *)0x0;
                        local_258 = (undefined8 *)CONCAT44(local_258._4_4_,0x10004001);
                        local_260 = 8;
                        local_268 = (code **)CONCAT44(local_268._4_4_,0x28);
                        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                                      &DAT_148630fee);
                      }
                      plVar14 = (longlong *)FUN_144718840(lVar18,DAT_14cb56270);
                      if (plVar14 == (longlong *)0x0) goto LAB_14069d499;
                      cVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,plVar15);
                      if (cVar10 == '\0') goto LAB_14069d499;
LAB_14069d4e8:
                      memcpy((void *)(lVar19 + 0x2e8),puVar16 + -0x17,0x100);
                      param_4 = local_200;
                      lVar18 = local_210;
                      pcVar20 = local_208;
                      break;
                    }
LAB_14069d499:
                    if (!bVar5) {
                      lVar18 = (**(code **)(*plVar15 + 0x7b8))(plVar15,puVar16[7],1,0xffffffff);
                      if (((lVar18 != 0) && (*(char *)(lVar18 + 0x15) == '\0')) &&
                         (*(char *)(lVar18 + 0x68 + (ulonglong)*(byte *)((longlong)local_218 + 0x11)
                                   ) == '\x02')) goto LAB_14069d4e8;
                    }
                  }
                  else {
                    uVar11 = *(uint *)(puVar16 + 4);
                    if ((((int)uVar11 < 0) || (DAT_14c9647dc <= (int)uVar11)) ||
                       ((plVar15 = (longlong *)
                                   ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                        plVar15 == (longlong *)0x0 ||
                        ((((int)plVar15[2] != *(int *)((longlong)puVar16 + 0x24) ||
                          ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) ||
                         (plVar15 = (longlong *)*plVar15, plVar15 == (longlong *)0x0))))))
                    goto LAB_14069d563;
                    uVar12 = FUN_14079f750();
                    lVar13 = FUN_144718840(plVar15,uVar12);
                    if (lVar13 == 0) {
                      bVar5 = false;
                      goto LAB_14069d466;
                    }
                    iVar3 = *(int *)(lVar19 + 0x3f0);
                    *(uint *)(lVar19 + 0x3f0) = iVar3 + 1U;
                    if (*(uint *)(lVar19 + 0x3f4) < iVar3 + 1U) {
                      FUN_144a3a3ee((longlong *)(lVar19 + 1000),iVar3);
                    }
                    lVar18 = *(longlong *)(lVar19 + 1000);
                    lVar13 = (longlong)iVar3 * 0x100;
                    memcpy((void *)(lVar18 + lVar13),puVar16 + -0x17,0xb8);
                    puVar1 = (undefined8 *)(lVar18 + 0xb8 + lVar13);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    *(undefined8 *)(lVar18 + 200 + lVar13) = 0;
                    *(undefined4 *)(lVar18 + 0xd0 + lVar13) = 0xffffffff;
                    *(undefined1 *)(lVar18 + 0xd4 + lVar13) = 0;
                    *(undefined8 *)(lVar18 + 0xb8 + lVar13) = *puVar16;
                    uVar12 = puVar16[2];
                    puVar1 = (undefined8 *)(lVar18 + 0xc0 + lVar13);
                    *puVar1 = puVar16[1];
                    puVar1[1] = uVar12;
                    *(undefined4 *)(lVar18 + 0xd0 + lVar13) = *(undefined4 *)(puVar16 + 3);
                    *(undefined1 *)(lVar18 + 0xd4 + lVar13) =
                         *(undefined1 *)((longlong)puVar16 + 0x1c);
                    *(undefined8 *)(lVar18 + 0xf8 + lVar13) = puVar16[8];
                    uVar11 = *(uint *)(puVar16 + 4);
                    uVar6 = *(uint *)((longlong)puVar16 + 0x24);
                    uVar7 = *(uint *)(puVar16 + 5);
                    uVar8 = *(uint *)((longlong)puVar16 + 0x2c);
                    uVar12 = puVar16[7];
                    puVar1 = (undefined8 *)(lVar18 + 0xe8 + lVar13);
                    *puVar1 = puVar16[6];
                    puVar1[1] = uVar12;
                    puVar2 = (uint *)(lVar18 + 0xd8 + lVar13);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar6;
                    puVar2[2] = uVar7;
                    puVar2[3] = uVar8;
                  }
                  puVar16 = puVar16 + 0x20;
                  lVar17 = lVar17 + -0x100;
                  param_4 = local_200;
                  lVar18 = local_210;
                  pcVar20 = local_208;
                } while (lVar17 != 0);
              }
              if (local_1e8 != 0) {
                FUN_1400020a8(local_1e8);
              }
              if (local_118 != 0) {
                FUN_1400020a8();
              }
              if (local_138 != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
      else {
        plVar15 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar15 = local_e8;
        }
        uVar12 = (**(code **)(*plVar15 + 8))();
        cVar10 = (*pcVar9)(uVar12,lVar19);
        *(char *)(lVar19 + 0x26c) = cVar10;
        if (cVar10 != '\0') goto LAB_14069d0f4;
      }
      lVar19 = lVar19 + 0x3f8;
    } while (lVar19 != lVar18);
  }
  if (local_108[0] != (code *)0x0) {
    if (local_f8 == (longlong *)0x0) {
      local_f8 = local_e8;
    }
    (**(code **)(*local_f8 + 0x10))();
  }
  if ((local_c0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14069d8ed FUN_14069d8ed body=1580 status=ok
// SIG undefined FUN_14069d8ed(void)

undefined8 FUN_14069d8ed(longlong param_1,longlong param_2)

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
  int iVar11;
  undefined8 uVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_148 [32];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar1 = *(double *)(param_1 + 0x2a0);
  dVar2 = *(double *)(param_1 + 0x2a8);
  uStack_120 = 0;
  dVar3 = *(double *)(param_1 + 0x2b0);
  pdVar13 = (double *)(param_1 + 0x270);
  if (dVar3 != 0.0 || (dVar2 != 0.0 || dVar1 != 0.0)) {
    pdVar13 = (double *)(param_1 + 0x288);
  }
  dVar18 = *(double *)(param_2 + 0xc0);
  dVar19 = *(double *)(param_2 + 200);
  dVar4 = (*pdVar13 + 0.0) * dVar18;
  dVar5 = (pdVar13[1] + 0.0) * dVar19;
  dVar14 = *(double *)(param_2 + 0xd0);
  dVar20 = (dVar3 + pdVar13[2]) * dVar14;
  dVar9 = *(double *)(param_2 + 0x80);
  dVar10 = *(double *)(param_2 + 0x88);
  dVar17 = *(double *)(param_2 + 0x90);
  dVar15 = *(double *)(param_2 + 0x98);
  dVar6 = dVar5 * dVar9 - dVar4 * dVar10;
  dVar5 = dVar20 * dVar10 - dVar5 * dVar17;
  dVar8 = dVar17 * dVar4 - dVar20 * dVar9;
  dVar4 = *(double *)(param_2 + 0xb0);
  local_128 = dVar1;
  if (((double)-*(float *)(param_2 + 0x168) <=
       (dVar6 + dVar6) * dVar15 + dVar20 +
       ((dVar8 + dVar8) * dVar9 - *(double *)(param_2 + 0x88) * (dVar5 + dVar5)) + dVar4) &&
     (dVar5 = *pdVar13 * dVar18, dVar6 = pdVar13[1] * dVar19, dVar20 = (pdVar13[2] - dVar3) * dVar14
     , dVar8 = dVar6 * dVar9 - dVar5 * dVar10, dVar6 = dVar20 * dVar10 - dVar6 * dVar17,
     dVar5 = dVar17 * dVar5 - dVar20 * dVar9,
     (dVar8 + dVar8) * dVar15 + dVar20 + ((dVar5 + dVar5) * dVar9 - dVar10 * (dVar6 + dVar6)) +
     dVar4 <= (double)*(float *)(param_2 + 0x168))) {
    dVar18 = dVar18 * *(double *)(param_1 + 0x270);
    dVar19 = dVar19 * *(double *)(param_1 + 0x278);
    dVar14 = dVar14 * *(double *)(param_1 + 0x280);
    dVar20 = dVar19 * dVar9 - dVar10 * dVar18;
    dVar7 = dVar14 * dVar10 - dVar17 * dVar19;
    dVar5 = dVar18 * dVar17 - dVar9 * dVar14;
    dVar7 = dVar7 + dVar7;
    dVar5 = dVar5 + dVar5;
    dVar20 = dVar20 + dVar20;
    dVar6 = (dVar20 * dVar10 - dVar5 * dVar17) + dVar15 * dVar7 + dVar18 +
            *(double *)(param_2 + 0xa0);
    dVar8 = (dVar17 * dVar7 - dVar9 * dVar20) + *(double *)(param_2 + 0x98) * dVar5 + dVar19 +
            *(double *)(param_2 + 0xa8);
    dVar18 = dVar6 * dVar6 + dVar8 * dVar8;
    if (((dVar18 != 1.0) || (dVar17 = dVar8, dVar19 = dVar6, NAN(dVar18))) &&
       (dVar17 = DAT_14c8464e8, dVar19 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar18)) {
      dVar17 = dVar8 * (1.0 / SQRT(dVar18));
      dVar19 = (1.0 / SQRT(dVar18)) * dVar6;
    }
    fVar16 = *(float *)(param_2 + 0x174);
    if (dVar19 < (double)fVar16) {
      if (dVar3 != 0.0 || (dVar2 != 0.0 || dVar1 != 0.0)) {
        dVar4 = dVar4 + dVar14 + dVar15 * dVar20 + (dVar5 * dVar9 - dVar7 * dVar10);
        local_d0 = dVar3 + dVar4;
        local_d8 = dVar2 + dVar8;
        local_e0 = dVar1 + dVar6;
        local_e8 = dVar4 - dVar3;
        local_f0 = dVar8 - dVar2;
        local_f8 = dVar6 - dVar1;
        local_c8 = 1;
        if (dVar17 <= 0.0) {
          fVar16 = -fVar16;
        }
        local_110 = (double)fVar16;
        local_118 = (double)-*(float *)(param_2 + 0x178);
        local_108 = 0;
        uStack_100 = 0;
        iVar11 = FUN_140eb46d2(&local_118,&local_f8);
        if (iVar11 == 0) goto LAB_14069dcb3;
      }
    }
    else {
LAB_14069dcb3:
      if (dVar6 < -dVar1) {
        dVar15 = (dVar1 + dVar6) * (dVar1 + dVar6);
      }
      else {
        dVar15 = 0.0;
        if (dVar1 < dVar6) {
          dVar15 = (dVar6 - dVar1) * (dVar6 - dVar1);
        }
      }
      if (dVar8 < -dVar2) {
        dVar15 = dVar15 + (dVar2 + dVar8) * (dVar2 + dVar8);
      }
      else if (dVar2 < dVar8) {
        dVar15 = dVar15 + (dVar8 - dVar2) * (dVar8 - dVar2);
      }
      if (dVar3 < 0.0) {
        dVar15 = dVar15 + dVar3 * dVar3;
      }
      fVar16 = (float)dVar15;
      if ((fVar16 < *(float *)(param_2 + 0x170) || fVar16 == *(float *)(param_2 + 0x170)) &&
         ((*(float *)(param_2 + 0x16c) <= 0.0 || (*(float *)(param_2 + 0x16c) <= fVar16)))) {
        *(uint *)(param_1 + 0x268) =
             ~-(uint)(0.0 < fVar16) & 0x7f7fffff | (uint)(1.0 / fVar16) & -(uint)(0.0 < fVar16);
        uVar12 = 1;
        goto LAB_14069dd81;
      }
    }
  }
  uVar12 = 0;
LAB_14069dd81:
  if ((local_c0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 14069df1a FUN_14069df1a body=3020 status=ok
// SIG undefined FUN_14069df1a(void)

ulonglong FUN_14069df1a(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *puVar21;
  code *pcVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_1a8 [32];
  uint local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  code *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  longlong local_130;
  code *local_128;
  longlong *local_120;
  uint *local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  code *local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [5];
  undefined1 local_b0 [64];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x800000000;
  local_120 = param_1;
  if (0 < (int)param_4[1]) {
    lVar11 = 0xc0;
    lVar25 = 0;
    do {
      lVar24 = FUN_14485cccc(*param_4 + lVar11);
      if (lVar24 != 0) {
        if (DAT_14cb56270 == 0) {
          local_150 = local_f8;
          local_f8[0] = FUN_1449e2820;
          local_140 = FUN_14081d0ea;
          local_148 = FUN_1427b09ee;
          local_158 = &LAB_148630fef;
          local_160 = FUN_1464b6a91;
          local_168 = L"Engine";
          local_170 = 0;
          local_178 = 0x10004001;
          local_180 = 8;
          local_188 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
        }
        plVar12 = (longlong *)FUN_144718840(lVar24,DAT_14cb56270);
        if ((plVar12 != (longlong *)0x0) &&
           (lVar24 = (**(code **)(*plVar12 + 0x58))(plVar12), uVar23 = local_68, lVar24 != 0)) {
          lVar20 = (longlong)(int)local_68;
          uVar10 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,uVar10);
          if (local_68._4_4_ < uVar10) {
            FUN_1457145b8(local_b0,uVar23 & 0xffffffff);
          }
          puVar13 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar13 = local_b0;
          }
          *(longlong *)(puVar13 + lVar20 * 8) = lVar24;
        }
      }
      lVar25 = lVar25 + 1;
      lVar11 = lVar11 + 0x118;
    } while (lVar25 < (int)param_4[1]);
  }
  if ((longlong)(int)param_3[1] != 0) {
    puVar21 = (undefined8 *)*param_3;
    puVar17 = puVar21 + (longlong)(int)param_3[1] * 9;
    do {
      lVar11 = FUN_14485cccc(puVar21);
      if (lVar11 != 0) {
        if ((*(byte *)(lVar11 + 0x62) & 4) == 0) {
          lVar25 = FUN_14069ec50();
          if ((*(int *)(lVar25 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar25 + 0x38) * 8) == lVar25 + 0x30)) {
            uVar14 = FUN_144a7b040();
            local_130 = FUN_144718840(lVar11,uVar14);
            iVar9 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
              FUN_14069f1e4(param_2,iVar9);
            }
            lVar24 = *param_2;
            lVar25 = (longlong)iVar9 * 0x3f8 + lVar24;
            FUN_14069edba(lVar25,lVar11,local_130);
            lVar24 = (longlong)iVar9 * 0x3f8 + lVar24;
            lVar11 = lVar24 + 0x18;
            iVar9 = *(int *)(lVar24 + 0x260);
            *(uint *)(lVar24 + 0x260) = iVar9 + 1U;
            if (*(uint *)(lVar24 + 0x264) < iVar9 + 1U) {
LAB_14069e145:
              FUN_14069efb2(lVar11,iVar9);
            }
LAB_14069e0a2:
            if (*(longlong *)(lVar25 + 600) != 0) {
              lVar11 = *(longlong *)(lVar25 + 600);
            }
            lVar25 = (longlong)iVar9;
            puVar1 = (undefined8 *)(lVar11 + lVar25 * 0x48);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(lVar11 + 0x10 + lVar25 * 0x48) = 0;
            *(undefined4 *)(lVar11 + 0x18 + lVar25 * 0x48) = 0xffffffff;
            *(undefined1 *)(lVar11 + 0x1c + lVar25 * 0x48) = 0;
            *(undefined8 *)(lVar11 + lVar25 * 0x48) = *puVar21;
            uVar14 = puVar21[2];
            puVar1 = (undefined8 *)(lVar11 + 8 + lVar25 * 0x48);
            *puVar1 = puVar21[1];
            puVar1[1] = uVar14;
            *(undefined4 *)(lVar11 + 0x18 + lVar25 * 0x48) = *(undefined4 *)(puVar21 + 3);
            *(undefined1 *)(lVar11 + 0x1c + lVar25 * 0x48) =
                 *(undefined1 *)((longlong)puVar21 + 0x1c);
            uVar26 = *(undefined4 *)((longlong)puVar21 + 0x24);
            uVar27 = *(undefined4 *)(puVar21 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar21 + 0x2c);
            uVar14 = puVar21[6];
            uVar7 = puVar21[7];
            puVar2 = (undefined4 *)(lVar11 + 0x20 + lVar25 * 0x48);
            *puVar2 = *(undefined4 *)(puVar21 + 4);
            puVar2[1] = uVar26;
            puVar2[2] = uVar27;
            puVar2[3] = uVar4;
            puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar25 * 0x48);
            *puVar1 = uVar14;
            puVar1[1] = uVar7;
            *(undefined1 *)(lVar11 + 0x40 + lVar25 * 0x48) = *(undefined1 *)(puVar21 + 8);
          }
        }
        else {
          if (DAT_14cb56270 == 0) {
            local_f8[0] = FUN_1449e2820;
            local_140 = FUN_14081d0ea;
            local_148 = FUN_1427b09ee;
            local_150 = local_f8;
            local_158 = &LAB_148630fef;
            local_160 = FUN_1464b6a91;
            local_168 = L"Engine";
            local_170 = 0;
            local_178 = 0x10004001;
            local_180 = 8;
            local_188 = 0x28;
            FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
          }
          plVar12 = (longlong *)FUN_144718840(lVar11);
          if (plVar12 != (longlong *)0x0) {
            puVar13 = local_70;
            if (local_70 == (undefined1 *)0x0) {
              puVar13 = local_b0;
            }
            if ((longlong)(int)local_68 != 0) {
              lVar25 = 0;
              do {
                if (*(longlong *)(puVar13 + lVar25) == lVar11) goto LAB_14069e111;
                lVar25 = lVar25 + 8;
              } while ((longlong)(int)local_68 * 8 != lVar25);
            }
            if ((longlong)(int)param_2[1] != 0) {
              lVar25 = *param_2;
              lVar24 = (longlong)(int)param_2[1] * 0x3f8;
              do {
                cVar8 = FUN_14069eaf4(lVar25,lVar11);
                if (cVar8 != '\0') {
                  if (lVar25 != 0) goto LAB_14069e080;
                  break;
                }
                lVar25 = lVar25 + 0x3f8;
                lVar24 = lVar24 + -0x3f8;
              } while (lVar24 != 0);
            }
            cVar8 = (**(code **)(*plVar12 + 0x40))(plVar12);
            if ((cVar8 == '\0') || (cVar8 = (**(code **)(*plVar12 + 0x48))(plVar12), cVar8 != '\0'))
            {
              iVar9 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
                FUN_14069f1e4(param_2,iVar9);
              }
              lVar25 = (longlong)iVar9 * 0x3f8 + *param_2;
              FUN_14069edba(lVar25,lVar11,plVar12);
LAB_14069e080:
              lVar11 = lVar25 + 0x18;
              iVar9 = *(int *)(lVar25 + 0x260);
              *(uint *)(lVar25 + 0x260) = iVar9 + 1U;
              if (*(uint *)(lVar25 + 0x264) < iVar9 + 1U) goto LAB_14069e145;
              goto LAB_14069e0a2;
            }
          }
        }
      }
LAB_14069e111:
      puVar21 = puVar21 + 9;
    } while (puVar21 != puVar17);
  }
  (**(code **)(*local_120 + 0x48))(local_120,local_f8);
  if ((longlong)(int)param_2[1] == 0) {
    uVar23 = 0;
  }
  else {
    lVar11 = *param_2;
    lVar25 = (longlong)(int)param_2[1] * 0x3f8;
    lVar24 = 0;
    pcVar22 = local_f8[0];
    do {
      iVar9 = *(int *)(lVar11 + 4 + lVar24);
      if (iVar9 == 0) {
LAB_14069e6dd:
        plVar12 = (longlong *)0x0;
      }
      else {
        uVar10 = *(uint *)(lVar11 + lVar24);
        if ((int)uVar10 < 0) goto LAB_14069e6dd;
        plVar12 = (longlong *)0x0;
        if ((int)uVar10 < DAT_14c9647dc) {
          puVar17 = (undefined8 *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if (((puVar17 == (undefined8 *)0x0) || (*(int *)(puVar17 + 2) != iVar9)) ||
             ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) {
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = (longlong *)*puVar17;
          }
          plVar18 = (longlong *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if (((plVar18 != (longlong *)0x0) && ((int)plVar18[2] == iVar9)) &&
             ((local_130 = lVar25, (*(uint *)(plVar18 + 1) & 0x10200000) == 0 &&
              (lVar20 = *plVar18, lVar20 != 0)))) {
            lVar25 = *(longlong *)(lVar20 + 0x1c8);
            if (lVar25 == 0) {
              puVar17 = &DAT_14c8464e0;
              uVar26 = (undefined4)DAT_14c8464f0;
              uVar27 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            }
            else {
              uVar26 = (undefined4)*(undefined8 *)(lVar25 + 0x270);
              uVar27 = (undefined4)((ulonglong)*(undefined8 *)(lVar25 + 0x270) >> 0x20);
              puVar17 = (undefined8 *)(lVar25 + 0x260);
            }
            lVar15 = lVar11 + lVar24;
            puVar21 = (undefined8 *)(lVar11 + 0x270 + lVar24);
            uVar4 = *(undefined4 *)((longlong)puVar17 + 4);
            uVar5 = *(undefined4 *)(puVar17 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar17 + 0xc);
            *(undefined4 *)(puVar21 + 9) = *(undefined4 *)puVar17;
            *(undefined4 *)((longlong)puVar21 + 0x4c) = uVar4;
            *(undefined4 *)(puVar21 + 10) = uVar5;
            *(undefined4 *)((longlong)puVar21 + 0x54) = uVar6;
            puVar21[0xb] = CONCAT44(uVar27,uVar26);
            local_128 = pcVar22;
            local_118 = (uint *)(lVar11 + lVar24);
            uVar14 = FUN_14069ce7c();
            plVar18 = (longlong *)FUN_144718840(lVar20,uVar14);
            if (plVar18 != (longlong *)0x0) {
              pcVar22 = *(code **)(*plVar18 + 0x10);
              if (pcVar22 == (code *)&LAB_144a13144) {
                puVar16 = (uint *)(plVar18 + 0x25d);
              }
              else if (pcVar22 == (code *)&LAB_144a1313c) {
                puVar16 = (uint *)(plVar18 + 0x13);
              }
              else {
                puVar16 = (uint *)(*pcVar22)(plVar18);
              }
              lVar25 = local_130;
              if (((puVar16[1] != 0) && (uVar10 = *puVar16, -1 < (int)uVar10)) &&
                 (((int)uVar10 < DAT_14c9647dc &&
                  ((((plVar19 = (longlong *)
                                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                     plVar19 != (longlong *)0x0 && (*(uint *)(plVar19 + 2) == puVar16[1])) &&
                    ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)) && (*plVar19 != 0)))))) {
                pcVar22 = *(code **)(*plVar18 + 0x10);
                if (pcVar22 == (code *)&LAB_144a13144) {
                  plVar18 = plVar18 + 0x25d;
                }
                else if (pcVar22 == (code *)&LAB_144a1313c) {
                  plVar18 = plVar18 + 0x13;
                }
                else {
                  plVar18 = (longlong *)(*pcVar22)(plVar18);
                }
                FUN_1400e23a4(plVar18,&local_110);
                *(undefined8 *)(lVar15 + 0x2e0) = local_100;
                *(undefined8 *)(lVar15 + 0x2d0) = local_110;
                *(ulonglong *)(lVar15 + 0x2d8) = CONCAT44(uStack_104,uStack_108);
                puVar21[2] = local_100;
                *(undefined4 *)puVar21 = (undefined4)local_110;
                *(undefined4 *)((longlong)puVar21 + 4) = local_110._4_4_;
                *(undefined4 *)(puVar21 + 1) = uStack_108;
                *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_104;
                pcVar22 = local_128;
                if ((*(int *)(lVar11 + 0x260 + lVar24) == 1) &&
                   (cVar8 = FUN_14069f3a4(local_118), pcVar22 = local_128, cVar8 != '\0')) {
                  lVar20 = lVar11 + lVar24;
                  lVar15 = *(longlong *)(lVar20 + 600);
                  if (*(longlong *)(lVar20 + 600) == 0) {
                    lVar15 = lVar20 + 0x18;
                  }
                  lVar15 = FUN_14479d2ce(lVar15 + 0x20);
                  uVar26 = *(undefined4 *)(lVar15 + 0x264);
                  uVar27 = *(undefined4 *)(lVar15 + 0x268);
                  uVar4 = *(undefined4 *)(lVar15 + 0x26c);
                  uVar14 = *(undefined8 *)(lVar15 + 0x270);
                  *(undefined4 *)(lVar20 + 0x270) = *(undefined4 *)(lVar15 + 0x260);
                  *(undefined4 *)(lVar20 + 0x274) = uVar26;
                  *(undefined4 *)(lVar20 + 0x278) = uVar27;
                  *(undefined4 *)(lVar20 + 0x27c) = uVar4;
                  *(undefined8 *)(lVar20 + 0x280) = uVar14;
                }
                goto LAB_14069e459;
              }
            }
            lVar25 = *(longlong *)(lVar20 + 0x1c8);
            if (lVar25 == 0) {
LAB_14069e3e4:
              lVar25 = FUN_14069ec50();
              if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(lVar25 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar25 + 0x38) * 8) != lVar25 + 0x30)) {
                lVar25 = *(longlong *)(lVar20 + 0x1c8);
                if (lVar25 == 0) {
                  puVar17 = &DAT_14c8464e0;
                  uVar26 = (undefined4)DAT_14c8464f0;
                  uVar27 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                }
                else {
                  uVar26 = (undefined4)*(undefined8 *)(lVar25 + 0x270);
                  uVar27 = (undefined4)((ulonglong)*(undefined8 *)(lVar25 + 0x270) >> 0x20);
                  puVar17 = (undefined8 *)(lVar25 + 0x260);
                }
                uVar14 = puVar17[1];
                puVar1 = (undefined8 *)(lVar11 + 0x270 + lVar24);
                *puVar1 = *puVar17;
                puVar1[1] = uVar14;
                *(ulonglong *)(lVar11 + 0x280 + lVar24) = CONCAT44(uVar27,uVar26);
              }
              else {
                lVar25 = *(longlong *)(lVar11 + lVar24 + 600);
                if (lVar25 == 0) {
                  lVar25 = lVar11 + lVar24 + 0x18;
                }
                cVar8 = FUN_1488e5e10(lVar20,*(undefined4 *)(lVar25 + 0x28),puVar21);
                if (cVar8 == '\0') {
                  puVar21[2] = DAT_14c8464f0;
                  uVar14 = DAT_14c8464e8;
                  *puVar21 = DAT_14c8464e0;
                  puVar21[1] = uVar14;
                }
                lVar25 = lVar11 + lVar24;
                *(undefined8 *)(lVar25 + 0x2c8) = puVar21[2];
                uVar14 = puVar21[1];
                *(undefined8 *)(lVar25 + 0x2b8) = *puVar21;
                *(undefined8 *)(lVar25 + 0x2c0) = uVar14;
              }
            }
            else {
              if (DAT_14cac6e60 == 0) {
                local_110 = FUN_144a7958c;
                local_140 = FUN_14081d0ea;
                local_148 = FUN_142b47bc4;
                local_150 = (code **)&local_110;
                local_158 = &LAB_1478989f1;
                local_160 = (code *)&LAB_146391124;
                local_168 = L"Engine";
                local_170 = 0x10000000000;
                local_178 = 0x10000005;
                local_180 = 0x10;
                local_188 = 0x620;
                FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
              }
              if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x38) < *(int *)(DAT_14cac6e60 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) != DAT_14cac6e60 + 0x30))
              goto LAB_14069e3e4;
              puVar21[2] = *(undefined8 *)(lVar25 + 0x170);
              uVar14 = *(undefined8 *)(lVar25 + 0x168);
              *puVar21 = *(undefined8 *)(lVar25 + 0x160);
              puVar21[1] = uVar14;
            }
            *(undefined8 *)(lVar15 + 0x2e0) = puVar21[2];
            uVar26 = *(undefined4 *)((longlong)puVar21 + 4);
            uVar27 = *(undefined4 *)(puVar21 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar21 + 0xc);
            *(undefined4 *)(lVar15 + 0x2d0) = *(undefined4 *)puVar21;
            *(undefined4 *)(lVar15 + 0x2d4) = uVar26;
            *(undefined4 *)(lVar15 + 0x2d8) = uVar27;
            *(undefined4 *)(lVar15 + 0x2dc) = uVar4;
            pcVar22 = local_128;
            lVar25 = local_130;
          }
        }
      }
LAB_14069e459:
      if ((pcVar22 != (code *)0x0) &&
         (plVar18 = (longlong *)plVar12[0x39], plVar18 != (longlong *)0x0)) {
        lVar20 = lVar11 + lVar24;
        lVar15 = lVar11 + lVar24;
        if (((*(byte *)((longlong)plVar18 + 0x9c) & 1) == 0) ||
           (iVar9 = (**(code **)(*plVar18 + 0x570))(), iVar9 == 0)) {
          local_188 = local_188 & 0xffffff00;
          (**(code **)(*plVar12 + 800))
                    (plVar12,1,(undefined8 *)(lVar15 + 0x288),(undefined4 *)(lVar20 + 0x2a0));
        }
        else {
          lVar3 = plVar12[0x39];
          *(undefined8 *)(lVar15 + 0x298) = *(undefined8 *)(lVar3 + 0x170);
          uVar14 = *(undefined8 *)(lVar3 + 0x168);
          *(undefined8 *)(lVar15 + 0x288) = *(undefined8 *)(lVar3 + 0x160);
          *(undefined8 *)(lVar15 + 0x290) = uVar14;
          *(undefined8 *)(lVar20 + 0x2b0) = *(undefined8 *)(lVar3 + 0x188);
          uVar26 = *(undefined4 *)(lVar3 + 0x17c);
          uVar27 = *(undefined4 *)(lVar3 + 0x180);
          uVar4 = *(undefined4 *)(lVar3 + 0x184);
          *(undefined4 *)(lVar20 + 0x2a0) = *(undefined4 *)(lVar3 + 0x178);
          *(undefined4 *)(lVar20 + 0x2a4) = uVar26;
          *(undefined4 *)(lVar20 + 0x2a8) = uVar27;
          *(undefined4 *)(lVar20 + 0x2ac) = uVar4;
        }
      }
      *(byte *)(lVar11 + 0x26d + lVar24) = *(byte *)(local_120 + 2) >> 1 & 1;
      if (((((((*(byte *)(local_120 + 2) & 2) != 0) &&
             (plVar12 = *(longlong **)(lVar11 + 0x10 + lVar24), plVar12 != (longlong *)0x0)) &&
            (iVar9 = *(int *)(lVar11 + 0xc + lVar24), iVar9 != 0)) &&
           (((uVar10 = *(uint *)(lVar11 + 8 + lVar24), -1 < (int)uVar10 &&
             ((int)uVar10 < DAT_14c9647dc)) &&
            ((lVar20 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar20 != 0
             && ((*(int *)(lVar20 + 0x10) == iVar9 && ((*(uint *)(lVar20 + 8) & 0x10200000) == 0))))
            )))) && (lVar20 = (**(code **)(*plVar12 + 0x20))(plVar12), lVar20 != 0)) &&
         (lVar20 = (**(code **)(*plVar12 + 0x20))(plVar12), (*(byte *)(lVar20 + 0x7c) & 0x10) != 0))
      {
        *(undefined1 *)(lVar11 + 0x26d + lVar24) = 0;
      }
      lVar24 = lVar24 + 0x3f8;
    } while (lVar25 != lVar24);
    uVar23 = CONCAT71((int7)((ulonglong)param_2 >> 8),0 < (int)param_2[1]);
  }
  if (local_f8[0] != (code *)0x0) {
    if (local_e8 == (longlong *)0x0) {
      local_e8 = local_d8;
    }
    (**(code **)(*local_e8 + 0x10))();
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
}



// FUNCTION 14069eaf4 FUN_14069eaf4 body=316 status=ok
// SIG undefined FUN_14069eaf4(void)

bool FUN_14069eaf4(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 14069ec30 FUN_14069ec30 body=31 status=ok
// SIG undefined FUN_14069ec30(void)

undefined8 FUN_14069ec30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14069ec50 FUN_14069ec50 body=228 status=ok
// SIG undefined FUN_14069ec50(void)

longlong FUN_14069ec50(void)

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
  if (DAT_14cb6b1a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14876f342;
    local_40 = &LAB_145ac6948;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x568;
    FUN_14081cfa3(L"/Script/GbxGame",L"LightProjectileManager",&DAT_14cb6b1a0,FUN_14652b076);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6b1a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069edba FUN_14069edba body=300 status=ok
// SIG undefined FUN_14069edba(void)

uint * FUN_14069edba(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar2 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar4 + 0x10) = uVar3;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar3;
      }
    }
  }
  param_1[1] = uVar2;
  FUN_14069eee6(param_1 + 2);
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 8;
  param_1[0x9a] = 0;
  *(undefined2 *)(param_1 + 0x9b) = 0;
  memset(param_1 + 0xba,0,0x100);
  param_1[0xee] = 0xffffffff;
  param_1[0xbb] = 0x3f800000;
  param_1[0xe3] = 0xffffffff;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  return param_1;
}



// FUNCTION 14069eee6 FUN_14069eee6 body=204 status=ok
// SIG undefined FUN_14069eee6(void)

uint * FUN_14069eee6(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 14069efb2 FUN_14069efb2 body=561 status=ok
// SIG undefined FUN_14069efb2(void)

void FUN_14069efb2(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x248);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 9) {
    *(undefined4 *)((longlong)param_1 + 0x24c) = 8;
    _Src = *(void **)((longlong)param_1 + 0x240);
joined_r0x00014069f16c:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (8 < *(uint *)((longlong)param_1 + 0x24c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar7 = lVar4 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14069f04c;
              lVar4 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_14069f04c:
    uVar7 = uVar7 / 0x48;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x24c) = 0x7fffffff;
      uVar7 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x240);
    }
    else {
      *(uint *)((longlong)param_1 + 0x24c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x240);
      if (uVar6 < 9) goto joined_r0x00014069f16c;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x240,0,uVar7,0x48);
      memmove(*(void **)((longlong)param_1 + 0x240),param_1,(longlong)param_2 * 0x48);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x240,param_2,uVar7,0x48);
  return;
}



// FUNCTION 14069f1e4 FUN_14069f1e4 body=376 status=ok
// SIG undefined FUN_14069f1e4(void)

void FUN_14069f1e4(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x3f8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14069f26c;
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
LAB_14069f26c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x3f8)) {
    uVar7 = uVar5 / 0x3f8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x3f8,8);
  return;
}



// FUNCTION 14069f35e FUN_14069f35e body=69 status=ok
// SIG undefined FUN_14069f35e(void)

longlong FUN_14069f35e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x470) & 0x10) == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x268);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 14069f3a4 FUN_14069f3a4 body=206 status=ok
// SIG undefined FUN_14069f3a4(void)

undefined8 FUN_14069f3a4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if ((((*(int *)(param_1 + 0x260) != 1) || (*(longlong *)(param_1 + 0x10) == 0)) ||
      (*(int *)(param_1 + 0xc) == 0)) ||
     ((uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)))) {
    return 0;
  }
  lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar5 == 0) {
    return 0;
  }
  if (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0xc)) {
    return 0;
  }
  if ((*(uint *)(lVar5 + 8) & 0x10200000) != 0) {
    return 0;
  }
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 600) != 0) {
    lVar2 = *(longlong *)(param_1 + 600);
  }
  if (*(int *)(lVar2 + 0x24) != 0) {
    uVar1 = *(uint *)(lVar2 + 0x20);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14069f456;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(lVar2 + 0x24) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_14069f456;
    }
  }
  uVar3 = 0;
LAB_14069f456:
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((*(uint *)(lVar5 + 8) & 0x10200000) != 0) {
    lVar2 = 0;
  }
  uVar3 = FUN_14069f472(lVar2,uVar3,0);
  return uVar3;
}



// FUNCTION 14069f472 FUN_14069f472 body=141 status=ok
// SIG undefined FUN_14069f472(void)

undefined8 FUN_14069f472(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x20))();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x2ac) < *(int *)(lVar1 + 0x280))) {
      FUN_1407176ee(lVar1 + 0x270,local_40,param_2,param_3);
      lVar1 = FUN_1402179b4(local_40);
      if (lVar1 != 0) {
        uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x18)) &
                0xffffffffffffff20;
        uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 5);
        goto LAB_14069f4e1;
      }
    }
  }
  uVar3 = 0;
LAB_14069f4e1:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14069f500 FUN_14069f500 body=1828 status=ok
// SIG undefined FUN_14069f500(void)

longlong FUN_14069f500(longlong *param_1,char *param_2,undefined8 *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  double dVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  void *pvVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  double *pdVar17;
  undefined8 ****ppppuVar18;
  longlong lVar19;
  float fVar20;
  undefined1 auStack_248 [32];
  double *local_228;
  longlong local_218;
  undefined8 *local_210;
  char *local_208;
  uint *local_200;
  longlong *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  undefined8 ***local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  ushort local_1a0;
  byte local_198;
  undefined8 local_190;
  uint local_188;
  undefined4 uStack_184;
  longlong *local_180;
  undefined4 local_168 [2];
  char local_160 [8];
  undefined8 local_158;
  longlong *local_150;
  undefined4 local_138 [24];
  undefined1 local_d8 [72];
  char local_90;
  double local_88;
  double dStack_80;
  double local_78;
  longlong local_70;
  double *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  puVar1 = (uint *)(param_1 + 1);
  local_208 = param_2;
  cVar7 = FUN_144729dda(puVar1);
  if (((cVar7 == '\0') || (param_1[3] == 0)) || (cVar7 = FUN_144729dda(param_1 + 2), cVar7 == '\0'))
  {
    lVar16 = 0;
    goto LAB_14069f9f3;
  }
  *param_3 = 0;
  plVar9 = (longlong *)FUN_14479d2ce(puVar1);
  if (plVar9 == (longlong *)0x0) {
LAB_14069faab:
    pvVar13 = (void *)0x0;
  }
  else {
    uVar10 = FUN_144a78ab8();
    lVar11 = (**(code **)(*plVar9 + 0x288))(plVar9,uVar10);
    if (lVar11 == 0) goto LAB_14069faab;
    uVar10 = FUN_144a78ab8();
    lVar12 = FUN_144718840(lVar11,uVar10);
    pvVar13 = (void *)0x0;
    if ((lVar11 != lVar12) && (lVar12 != 0)) {
      uVar10 = FUN_14069fc26(lVar12);
      FUN_14069fc2e(uVar10,&local_190);
      pvVar13 = (void *)FUN_14479d2ce((longlong)&local_190 + 4);
    }
  }
  local_1c8 = 0;
  uStack_1c0 = 0;
  (**(code **)(*(longlong *)param_1[3] + 0x68))((longlong *)param_1[3],&local_190);
  uVar6 = uStack_1c0;
  if ((longlong)(int)local_188 != 0) {
    iVar8 = (int)uStack_1c0;
    lVar11 = (longlong)(int)uStack_1c0;
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0 + local_188);
    if ((uint)(uStack_1c0._4_4_ - iVar8) < local_188) {
      FUN_14069fc80(&local_1c8,uVar6 & 0xffffffff);
    }
    memmove((void *)(lVar11 * 8 + local_1c8),local_190,(longlong)(int)local_188 << 3);
    local_188 = 0;
  }
  if (local_190 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar11 = FUN_14479d2ce(puVar1);
  if (*(longlong *)(lVar11 + 0x11e8) == 0) {
    lVar11 = 0x38;
  }
  else {
    lVar12 = FUN_14479d2ce(puVar1);
    lVar11 = 200;
    if ((&DAT_00001100)[*(longlong *)(lVar12 + 0x11e8)] == '\x01') {
      lVar11 = 0x38;
    }
  }
  if ((longlong)(int)uStack_1c0 == 0) {
    lVar16 = 0;
  }
  else {
    lVar12 = (longlong)(int)uStack_1c0 << 3;
    lVar19 = 0;
    lVar16 = 0;
    local_218 = local_1c8;
    lVar14 = local_1c8;
    local_210 = param_3;
    local_200 = puVar1;
    local_1f8 = param_1;
    local_1f0 = lVar12;
    local_1e8 = lVar11;
    do {
      puVar1 = local_200;
      lVar11 = *(longlong *)(lVar14 + lVar19);
      if (lVar11 != 0) {
        if (pvVar13 == (void *)0x0) {
          if (*(char *)(lVar11 + 0x35) == '\x01') {
            local_88 = 0.0;
            dStack_80 = 0.0;
            pvVar13 = (void *)0x0;
            local_78 = 0.0;
            local_1a8 = 0;
            local_1b8 = (undefined8 ****)0x0;
            uStack_1b0 = 0;
            uVar10 = FUN_14479d2ce(local_200);
            FUN_141313b0e(uVar10,&local_88,&local_1b8);
            FUN_144a76660(&local_1b8,&local_190);
            uVar10 = FUN_14479d2ce(puVar1);
            fVar20 = (float)FUN_141313966(local_1e8 + lVar11,uVar10);
            dVar5 = (double)fVar20;
            local_1d0 = (double)local_180 * dVar5 + local_78;
            local_1d8 = (double)CONCAT44(uStack_184,local_188) * dVar5 + dStack_80;
            local_1e0 = dVar5 * (double)local_190 + local_88;
            uVar10 = FUN_14479d2ce(puVar1);
            local_228 = &local_1e0;
            FUN_145b03366(&local_190,2,uVar10,&local_88);
            param_1 = local_1f8;
            if (local_90 == '\x01') {
              pvVar13 = (void *)FUN_14485cccc(local_d8);
              param_1 = local_1f8;
            }
          }
          else {
            pvVar13 = (void *)0x0;
          }
        }
        if ((*(int *)((longlong)param_1 + 0xc) == 0) || (uVar3 = *local_200, (int)uVar3 < 0)) {
LAB_14069fa82:
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            puVar15 = (undefined8 *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((puVar15 == (undefined8 *)0x0) ||
                (*(int *)(puVar15 + 2) != *(int *)((longlong)param_1 + 0xc))) ||
               ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) goto LAB_14069fa82;
            uVar10 = *puVar15;
          }
        }
        local_190 = (void *)((ulonglong)local_190 & 0xffffffffffffff00);
        local_168[0] = 0;
        FUN_1456bb102(&local_190,uVar10);
        local_160[0] = '\0';
        local_138[0] = 0;
        FUN_1456bb102(local_160,pvVar13);
        lVar12 = *(longlong *)(lVar11 + 0x28);
        if (lVar12 == 0) {
          local_1b8 = *(undefined8 ****)(lVar11 + 0x18);
          FUN_1446dcdd4(&local_88,&local_1b8);
          lVar12 = FUN_1448fdc6e(&local_88);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar11 + 0x28) = lVar12;
        }
        FUN_1400606f6(&local_88,lVar12,&local_190);
        pdVar17 = local_58;
        if (local_58 == (double *)0x0) {
          pdVar17 = &local_88;
        }
        if (local_50 < 1) {
          pdVar17 = (double *)&DAT_14c9a40e0;
        }
        FUN_1400603ec(&local_1b8,lVar12,pdVar17);
        pdVar17 = local_58;
        if (local_58 == (double *)0x0) {
          pdVar17 = &local_88;
        }
        FUN_1446fdf58(pdVar17,local_50);
        if (local_58 != (double *)0x0) {
          FUN_1400020a8();
        }
        cVar7 = FUN_140168b7a(&local_1b8);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar18 = &local_1b8;
          if (0x18 < local_1a0) {
            ppppuVar18 = (undefined8 ****)local_1b8;
          }
          (*pcVar4)(ppppuVar18);
        }
        param_1 = local_1f8;
        if (0x18 < local_1a0) {
          FUN_1400020a8(local_1b8);
        }
        FUN_1448173f8(local_138);
        if (local_160[0] != '\0') {
          if (local_160[0] == '\x01') {
            local_158 = 0;
          }
          else if ((local_160[0] == '\x03') && (local_150 != (longlong *)0x0)) {
            LOCK();
            piVar2 = (int *)((longlong)local_150 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_150 + 0x10))();
            }
          }
          local_160[0] = '\0';
        }
        FUN_1448173f8(local_168);
        if (((char)local_190 == '\x03') && (local_180 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_180 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_180 + 0x10))();
          }
        }
        lVar12 = local_1f0;
        lVar14 = local_218;
        if (cVar7 != '\0') {
          iVar8 = 0;
          if (lVar16 != 0) {
            iVar8 = *(int *)(lVar16 + 0x30);
          }
          if (iVar8 < *(int *)(lVar11 + 0x30)) {
            local_190 = pvVar13;
            if (*(char *)(lVar11 + 0x34) == '\x01') {
              cVar7 = (**(code **)(*param_1 + 0x40))(param_1,lVar11,&local_190);
              lVar14 = local_218;
              if (cVar7 != '\0') {
                *local_208 = '\x01';
                FUN_14485c47a(local_210);
                lVar14 = local_218;
                lVar16 = lVar11;
              }
            }
            else {
              *local_208 = '\0';
              *local_210 = 0;
              lVar16 = lVar11;
            }
          }
        }
      }
      puVar15 = local_210;
      lVar19 = lVar19 + 8;
    } while (lVar12 != lVar19);
    if ((lVar16 != 0) && (*(char *)(lVar16 + 0x34) == '\0')) {
      local_190 = (void *)FUN_14479d2ce(local_210);
      cVar7 = (**(code **)(*param_1 + 0x40))(param_1,lVar16);
      *local_208 = cVar7;
      if (cVar7 == '\0') {
        *puVar15 = 0;
      }
      else {
        FUN_14485c47a(puVar15,local_190);
      }
    }
  }
  if (local_1c8 != 0) {
    FUN_1400020a8(local_1c8);
  }
LAB_14069f9f3:
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar16;
}



// FUNCTION 14069fc26 FUN_14069fc26 body=7 status=ok
// SIG undefined FUN_14069fc26(void)

void FUN_14069fc26(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014069fc29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



// FUNCTION 14069fc2e FUN_14069fc2e body=82 status=ok
// SIG undefined FUN_14069fc2e(void)

void FUN_14069fc2e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (((*(int *)(param_1 + 0xc0) != 0) && (0 < *(int *)(param_1 + 0x80))) &&
     (piVar1 = *(int **)(param_1 + 0x78), *piVar1 != 0x7fffffff)) {
    uVar2 = *(undefined8 *)piVar1;
    uVar3 = *(undefined8 *)(piVar1 + 2);
    uVar4 = *(undefined8 *)(piVar1 + 4);
    uVar5 = *(undefined8 *)(piVar1 + 6);
    uVar6 = *(undefined8 *)(piVar1 + 10);
    param_2[4] = *(undefined8 *)(piVar1 + 8);
    param_2[5] = uVar6;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    *param_2 = uVar2;
    param_2[1] = uVar3;
    return;
  }
  *(undefined4 *)param_2 = 0x7fffffff;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



// FUNCTION 14069fc80 FUN_14069fc80 body=353 status=ok
// SIG undefined FUN_14069fc80(void)

void FUN_14069fc80(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14069fd05;
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
LAB_14069fd05:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14069fde2 FUN_14069fde2 body=5303 status=ok
// SIG undefined FUN_14069fde2(void)

/* WARNING: Type propagation algorithm not settling */

bool FUN_14069fde2(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,longlong param_8)

{
  float *pfVar1;
  byte *pbVar2;
  float fVar3;
  byte bVar4;
  code *****pppppcVar5;
  code ******ppppppcVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  code *******pppppppcVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  code ******ppppppcVar16;
  int iVar17;
  code *******pppppppcVar18;
  int iVar19;
  longlong *plVar20;
  uint *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  byte *pbVar25;
  longlong lVar26;
  ulonglong uVar27;
  code ******ppppppcVar28;
  code ******ppppppcVar29;
  uint uVar30;
  int iVar31;
  longlong lVar32;
  uint *puVar33;
  code ******_Src;
  code ******ppppppcVar34;
  code ******ppppppcVar35;
  uint *puVar36;
  byte *_Dst;
  bool bVar37;
  float fVar38;
  undefined1 auStack_528 [32];
  code *******local_508;
  undefined4 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  wchar_t *local_4e8;
  code *local_4e0;
  undefined1 *local_4d8;
  code *******local_4d0;
  code *local_4c8;
  code *local_4c0;
  longlong *local_4b0;
  code *******local_4a8;
  uint local_49c;
  longlong local_498;
  longlong local_490;
  code *******local_488;
  code *******pppppppcStack_480;
  double local_478 [94];
  double local_188;
  double dStack_180;
  double local_178;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_528;
  local_4b0 = param_2;
  local_498 = param_1;
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar36 = (uint *)*param_3;
    puVar33 = puVar36 + (longlong)*(int *)(param_3 + 1) * 0xfe;
    do {
      if ((((puVar36[1] != 0) && (uVar8 = *puVar36, -1 < (int)uVar8)) &&
          ((int)uVar8 < DAT_14c9647dc)) &&
         (((plVar20 = (longlong *)
                      ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
           plVar20 != (longlong *)0x0 && (*(uint *)(plVar20 + 2) == puVar36[1])) &&
          (((*(uint *)(plVar20 + 1) & 0x10200000) == 0 && (lVar13 = *plVar20, lVar13 != 0)))))) {
        uVar8 = puVar36[0xfc];
        if ((longlong)(int)uVar8 != 0) {
          lVar26 = *(longlong *)(puVar36 + 0xfa);
          lVar32 = 0;
          do {
            iVar9 = *(int *)(lVar26 + 0xdc + lVar32);
            if (((iVar9 != 0) && (uVar30 = *(uint *)(lVar26 + 0xd8 + lVar32), -1 < (int)uVar30)) &&
               (((int)uVar30 < DAT_14c9647dc &&
                ((((plVar20 = (longlong *)
                              ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
                   plVar20 != (longlong *)0x0 && ((int)plVar20[2] == iVar9)) &&
                  ((*(uint *)(plVar20 + 1) & 0x10200000) == 0)) && (lVar14 = *plVar20, lVar14 != 0))
                )))) {
              FUN_14079f750();
              plVar20 = (longlong *)FUN_144718840(lVar14);
              if ((plVar20 != (longlong *)0x0) &&
                 (cVar7 = (**(code **)(*plVar20 + 0x70))(plVar20), cVar7 != '\0')) {
                memcpy(puVar36 + 0xba,(void *)(lVar26 + lVar32),0x100);
                break;
              }
            }
            lVar32 = lVar32 + 0x100;
          } while ((longlong)(int)uVar8 * 0x100 != lVar32);
        }
        puVar36[0xfc] = 0;
        if ((int)puVar36[0xfd] < 0) {
          FUN_1447c0da8(puVar36 + 0xfa);
        }
        if ((char)puVar36[0x9b] == '\x01') {
          if ((*(char *)((longlong)puVar36 + 0x26d) == '\x01') &&
             ((*(byte *)((longlong)puVar36 + 0x395) & 1) != 0)) {
            if ((puVar36[1] == 0) || (uVar8 = *puVar36, (int)uVar8 < 0)) {
LAB_1406a06e6:
              plVar20 = (longlong *)0x0;
            }
            else {
              plVar20 = (longlong *)0x0;
              if ((int)uVar8 < DAT_14c9647dc) {
                puVar22 = (undefined8 *)
                          ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                if (((puVar22 == (undefined8 *)0x0) || (*(uint *)(puVar22 + 2) != puVar36[1])) ||
                   ((*(uint *)(puVar22 + 1) & 0x10200000) != 0)) goto LAB_1406a06e6;
                plVar20 = (longlong *)*puVar22;
              }
            }
            plVar11 = (longlong *)FUN_14485cccc(puVar36 + 0xe8);
            if (plVar11 == plVar20) {
              if ((puVar36[0xf1] == 0) || (uVar8 = puVar36[0xf0], (int)uVar8 < 0)) {
LAB_1406a06ed:
                uVar23 = 0;
              }
              else {
                uVar23 = 0;
                if ((int)uVar8 < DAT_14c9647dc) {
                  puVar22 = (undefined8 *)
                            ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                  if (((puVar22 == (undefined8 *)0x0) || (*(uint *)(puVar22 + 2) != puVar36[0xf1]))
                     || ((*(uint *)(puVar22 + 1) & 0x10200000) != 0)) goto LAB_1406a06ed;
                  uVar23 = *puVar22;
                }
              }
              if (((*(longlong *)(puVar36 + 4) == 0) || (puVar36[3] == 0)) ||
                 (uVar8 = puVar36[2], (int)uVar8 < 0)) {
LAB_1406a0625:
                lVar26 = 0;
              }
              else {
                lVar26 = 0;
                if ((int)uVar8 < DAT_14c9647dc) {
                  lVar32 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                  if ((lVar32 == 0) || (*(uint *)(lVar32 + 0x10) != puVar36[3])) goto LAB_1406a0625;
                  lVar26 = *(longlong *)(puVar36 + 4);
                  if ((*(uint *)(lVar32 + 8) & 0x10200000) != 0) {
                    lVar26 = 0;
                  }
                }
              }
              cVar7 = FUN_14069f472(lVar26,uVar23,*(undefined8 *)(puVar36 + 0xf6));
              plVar20 = local_4b0;
              if (cVar7 == '\0') goto LAB_14069ffaf;
              lVar13 = local_4b0[1];
              uVar8 = (int)lVar13 + 1;
              *(uint *)(local_4b0 + 1) = uVar8;
              if (*(uint *)((longlong)local_4b0 + 0xc) < uVar8) {
                FUN_140bfb34a(local_4b0);
              }
              lVar26 = *plVar20;
              lVar13 = (longlong)(int)lVar13 * 0x118;
              pbVar25 = (byte *)(lVar26 + lVar13);
              memset(pbVar25 + 4,0,0x104);
              pbVar25[0xd8] = 0xff;
              pbVar25[0xd9] = 0xff;
              pbVar25[0xda] = 0xff;
              pbVar25[0xdb] = 0xff;
              pbVar25[0xc] = 0;
              pbVar25[0xd] = 0;
              pbVar25[0xe] = 0x80;
              pbVar25[0xf] = 0x3f;
              pbVar25[0xac] = 0xff;
              pbVar25[0xad] = 0xff;
              pbVar25[0xae] = 0xff;
              pbVar25[0xaf] = 0xff;
              pbVar25[0x108] = 0;
              pbVar25[0x109] = 0;
              pbVar25[0x10a] = 0;
              pbVar25[0x10b] = 0;
              pbVar25[0x10c] = 0;
              pbVar25[0x10d] = 0;
              pbVar25[0x10e] = 0;
              pbVar25[0x10f] = 0;
              pbVar25[0x110] = 0;
              pbVar25[0x111] = 0;
              pbVar25[0x112] = 0;
              pbVar25[0x113] = 0;
              pbVar25[0x114] = 0;
              pbVar25[0x115] = 0;
              pbVar25[0x116] = 0;
              pbVar25[0x117] = 0;
              *pbVar25 = *pbVar25 & 0xf0;
              FUN_140bfb4c0(lVar26 + lVar13);
              *pbVar25 = *pbVar25 | 5;
            }
            else if ((((*(longlong **)(puVar36 + 4) == (longlong *)0x0) || (puVar36[3] == 0)) ||
                     ((uVar8 = puVar36[2], (int)uVar8 < 0 ||
                      ((DAT_14c9647dc <= (int)uVar8 ||
                       (lVar26 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8),
                       lVar26 == 0)))))) ||
                    ((*(uint *)(lVar26 + 0x10) != puVar36[3] ||
                     ((((*(uint *)(lVar26 + 8) & 0x10200000) != 0 ||
                       (lVar26 = (**(code **)(**(longlong **)(puVar36 + 4) + 0x20))(), lVar26 == 0))
                      || ((*(byte *)(lVar26 + 0x7c) & 0x20) == 0)))))) {
              plVar11 = (longlong *)plVar20[0x39];
              if (((plVar11 == (longlong *)0x0) || ((*(byte *)((longlong)plVar11 + 0x9c) & 1) == 0))
                 || (iVar9 = (**(code **)(*plVar11 + 0x570))(), iVar9 == 0)) {
                local_508 = (code *******)((ulonglong)local_508 & 0xffffffffffffff00);
                (**(code **)(*plVar20 + 800))(plVar20,1,&local_488);
              }
              else {
                lVar26 = plVar20[0x39];
                local_478[0] = *(double *)(lVar26 + 0x170);
                local_488 = *(code ********)(lVar26 + 0x160);
                pppppppcStack_480 = *(code ********)(lVar26 + 0x168);
                local_188 = *(double *)(lVar26 + 0x178);
                dStack_180 = *(double *)(lVar26 + 0x180);
                local_178 = *(double *)(lVar26 + 0x188);
              }
              if ((((double)local_488 - local_188 < *(double *)(puVar36 + 0xbe)) &&
                  (*(double *)(puVar36 + 0xbe) < (double)local_488 + local_188)) &&
                 (((double)pppppppcStack_480 - dStack_180 < *(double *)(puVar36 + 0xc0) &&
                  (((*(double *)(puVar36 + 0xc0) < (double)pppppppcStack_480 + dStack_180 &&
                    (local_478[0] - local_178 < *(double *)(puVar36 + 0xc2))) &&
                   (*(double *)(puVar36 + 0xc2) < local_478[0] + local_178)))))) goto LAB_14069ffaf;
            }
          }
          else {
LAB_14069ffaf:
            cVar7 = FUN_14069f3a4(puVar36);
            plVar20 = local_4b0;
            if (cVar7 == '\0') {
              local_4a8 = (code *******)(puVar36 + 6);
              uVar8 = 0;
              if (puVar36[0x98] == 1) {
                pppppppcVar10 = *(code ********)(puVar36 + 0x96);
                if (*(code ********)(puVar36 + 0x96) == (code *******)0x0) {
                  pppppppcVar10 = local_4a8;
                }
                uVar8 = *(uint *)(pppppppcVar10 + 5);
              }
              fVar38 = (float)puVar36[0x9a];
              if (((*(longlong **)(puVar36 + 4) == (longlong *)0x0) || (puVar36[3] == 0)) ||
                 ((uVar30 = puVar36[2], (int)uVar30 < 0 ||
                  (((((DAT_14c9647dc <= (int)uVar30 ||
                      (lVar26 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8),
                      lVar26 == 0)) || (*(uint *)(lVar26 + 0x10) != puVar36[3])) ||
                    (((*(uint *)(lVar26 + 8) & 0x10200000) != 0 ||
                     (lVar26 = (**(code **)(**(longlong **)(puVar36 + 4) + 0x20))(), lVar26 == 0))))
                   || (*(int *)(local_498 + 0x14) != 1)))))) {
LAB_1406a019a:
                uVar30 = *(uint *)(plVar20 + 1);
LAB_1406a019d:
                *(uint *)(plVar20 + 1) = uVar30 + 1;
                if (*(uint *)((longlong)plVar20 + 0xc) < uVar30 + 1) {
                  FUN_140bfb34a(plVar20);
                }
                uVar24 = (ulonglong)(int)uVar30;
                pbVar25 = (byte *)(*plVar20 + uVar24 * 0x118);
                memset(pbVar25 + 4,0,0x104);
                pbVar25[0xd8] = 0xff;
                pbVar25[0xd9] = 0xff;
                pbVar25[0xda] = 0xff;
                pbVar25[0xdb] = 0xff;
                pbVar25[0xc] = 0;
                pbVar25[0xd] = 0;
                pbVar25[0xe] = 0x80;
                pbVar25[0xf] = 0x3f;
                pbVar25[0xac] = 0xff;
                pbVar25[0xad] = 0xff;
                pbVar25[0xae] = 0xff;
                pbVar25[0xaf] = 0xff;
                pbVar25[0x108] = 0;
                pbVar25[0x109] = 0;
                pbVar25[0x10a] = 0;
                pbVar25[0x10b] = 0;
                pbVar25[0x10c] = 0;
                pbVar25[0x10d] = 0;
                pbVar25[0x10e] = 0;
                pbVar25[0x10f] = 0;
                pbVar25[0x110] = 0;
                pbVar25[0x111] = 0;
                pbVar25[0x112] = 0;
                pbVar25[0x113] = 0;
                pbVar25[0x114] = 0;
                pbVar25[0x115] = 0;
                pbVar25[0x116] = 0;
                pbVar25[0x117] = 0;
                *pbVar25 = *pbVar25 & 0xf0;
              }
              else {
                local_490 = lVar13;
                if ((*(byte *)(lVar26 + 0x470) & 0x10) != 0) {
                  local_490 = FUN_143d08982(lVar26);
                }
                plVar20 = local_4b0;
                if (local_490 == 0) goto LAB_1406a019a;
                uVar30 = *(uint *)(local_4b0 + 1);
                if ((int)uVar30 < 1) goto LAB_1406a019d;
                local_49c = 0xffffffff;
                lVar32 = 0xc0;
                lVar26 = 0;
                do {
                  lVar14 = *local_4b0;
                  lVar15 = FUN_14485cccc(lVar14 + lVar32);
                  if (lVar15 != 0) {
                    if (DAT_14cb56270 == 0) {
                      local_488 = (code *******)FUN_1449e2820;
                      local_4c0 = FUN_14081d0ea;
                      local_4c8 = FUN_1427b09ee;
                      local_4d0 = (code *******)&local_488;
                      local_4d8 = &LAB_148630fef;
                      local_4e0 = FUN_1464b6a91;
                      local_4e8 = L"Engine";
                      local_4f0 = 0;
                      local_4f8 = 0x10004001;
                      local_500 = 8;
                      local_508 = (code *******)CONCAT44(local_508._4_4_,0x28);
                      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270);
                    }
                    plVar20 = (longlong *)FUN_144718840(lVar15);
                    if ((plVar20 != (longlong *)0x0) &&
                       (lVar12 = (**(code **)(*plVar20 + 0x20))(plVar20), lVar12 != 0)) {
                      if ((*(byte *)(lVar12 + 0x470) & 0x10) != 0) {
                        lVar15 = FUN_143d08982(lVar12);
                      }
                      pfVar1 = (float *)(lVar14 + -0xbc + lVar32);
                      uVar30 = local_49c;
                      if (*pfVar1 <= fVar38 && fVar38 != *pfVar1) {
                        uVar30 = (uint)lVar26;
                      }
                      if (lVar15 == local_490) {
                        local_49c = uVar30;
                        if (uVar30 == 0xffffffff) goto LAB_1406a06b6;
                        uVar30 = *(uint *)(local_4b0 + 1);
                        break;
                      }
                    }
                  }
                  lVar26 = lVar26 + 1;
                  uVar30 = *(uint *)(local_4b0 + 1);
                  lVar32 = lVar32 + 0x118;
                } while (lVar26 < (int)uVar30);
                plVar20 = local_4b0;
                if (((int)local_49c < 0) || ((int)uVar30 <= (int)local_49c)) goto LAB_1406a019d;
                uVar24 = (ulonglong)local_49c;
                uVar30 = local_49c;
              }
              lVar26 = *plVar20;
              lVar32 = uVar24 * 0x118;
              FUN_1418779d8(lVar32 + lVar26,lVar13,puVar36 + 0x9c);
              *(uint *)(lVar26 + 0xb0 + lVar32) = uVar8;
              *(float *)(lVar26 + 4 + lVar32) = fVar38;
              if ((((((uVar30 != 0xffffffff) && (*(longlong **)(puVar36 + 4) != (longlong *)0x0)) &&
                    (puVar36[3] != 0)) &&
                   (((uVar8 = puVar36[2], -1 < (int)uVar8 && ((int)uVar8 < DAT_14c9647dc)) &&
                    ((lVar13 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8),
                     lVar13 != 0 &&
                     ((*(uint *)(lVar13 + 0x10) == puVar36[3] &&
                      ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)))))))) &&
                  (lVar13 = (**(code **)(**(longlong **)(puVar36 + 4) + 0x20))(), lVar13 != 0)) &&
                 (0 < *(int *)(lVar13 + 0x2cc))) {
                local_488 = local_4a8;
                if (*(code ********)(puVar36 + 0x96) != (code *******)0x0) {
                  local_488 = *(code ********)(puVar36 + 0x96);
                }
                pppppppcStack_480 = (code *******)CONCAT44(pppppppcStack_480._4_4_,puVar36[0x98]);
                local_508 = (code *******)&local_488;
                FUN_145784434(local_498,lVar13 + 0x270,(longlong)(int)uVar30 * 0x118 + *local_4b0);
              }
            }
            else {
              lVar26 = local_4b0[1];
              uVar8 = (int)lVar26 + 1;
              *(uint *)(local_4b0 + 1) = uVar8;
              if (*(uint *)((longlong)local_4b0 + 0xc) < uVar8) {
                FUN_140bfb34a(local_4b0);
              }
              lVar32 = *plVar20;
              lVar26 = (longlong)(int)lVar26 * 0x118;
              pbVar25 = (byte *)(lVar26 + lVar32);
              memset(pbVar25 + 4,0,0x104);
              pbVar25[0xd8] = 0xff;
              pbVar25[0xd9] = 0xff;
              pbVar25[0xda] = 0xff;
              pbVar25[0xdb] = 0xff;
              pbVar25[0xc] = 0;
              pbVar25[0xd] = 0;
              pbVar25[0xe] = 0x80;
              pbVar25[0xf] = 0x3f;
              pbVar25[0xac] = 0xff;
              pbVar25[0xad] = 0xff;
              pbVar25[0xae] = 0xff;
              pbVar25[0xaf] = 0xff;
              pbVar25[0x108] = 0;
              pbVar25[0x109] = 0;
              pbVar25[0x10a] = 0;
              pbVar25[0x10b] = 0;
              pbVar25[0x10c] = 0;
              pbVar25[0x10d] = 0;
              pbVar25[0x10e] = 0;
              pbVar25[0x10f] = 0;
              pbVar25[0x110] = 0;
              pbVar25[0x111] = 0;
              pbVar25[0x112] = 0;
              pbVar25[0x113] = 0;
              pbVar25[0x114] = 0;
              pbVar25[0x115] = 0;
              pbVar25[0x116] = 0;
              pbVar25[0x117] = 0;
              bVar4 = *pbVar25;
              *pbVar25 = bVar4 & 0xf0;
              if (puVar36[0x98] == 1) {
                puVar21 = puVar36 + 6;
                if (*(uint **)(puVar36 + 0x96) != (uint *)0x0) {
                  puVar21 = *(uint **)(puVar36 + 0x96);
                }
                if ((((puVar21[9] != 0) && (uVar8 = puVar21[8], -1 < (int)uVar8)) &&
                    ((int)uVar8 < DAT_14c9647dc)) &&
                   (((plVar20 = (longlong *)
                                ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                     plVar20 != (longlong *)0x0 && (*(uint *)(plVar20 + 2) == puVar21[9])) &&
                    (((*(uint *)(plVar20 + 1) & 0x10200000) == 0 && (lVar14 = *plVar20, lVar14 != 0)
                     ))))) {
                  pbVar25 = (byte *)(lVar32 + lVar26);
                  *pbVar25 = bVar4 & 0xf0 | 5;
                  local_488 = *(code ********)(lVar14 + 0x260);
                  pppppppcStack_480 = *(code ********)(lVar14 + 0x268);
                  local_478[0] = *(double *)(lVar14 + 0x270);
                  FUN_1418779d8(pbVar25,lVar13,&local_488);
                }
              }
            }
          }
        }
      }
LAB_1406a06b6:
      puVar36 = puVar36 + 0xfe;
    } while (puVar36 != puVar33);
  }
  lVar13 = FUN_14485cccc(param_6 + 0xb8);
  if ((lVar13 != 0) && (lVar13 = FUN_14485cccc(param_6 + 0xb8), lVar13 != 0)) {
    iVar9 = (int)local_4b0[1];
    if (iVar9 < 1) {
LAB_1406a0a97:
      plVar20 = local_4b0;
      *(uint *)(local_4b0 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)local_4b0 + 0xc) < iVar9 + 1U) {
        FUN_140bfb34a(local_4b0);
      }
      pbVar25 = (byte *)(*plVar20 + (longlong)iVar9 * 0x118);
      pbVar2 = (byte *)(*plVar20 + (longlong)iVar9 * 0x118);
      _Dst = pbVar2 + 4;
      memset(_Dst,0,0x104);
      pbVar2[0xd8] = 0xff;
      pbVar2[0xd9] = 0xff;
      pbVar2[0xda] = 0xff;
      pbVar2[0xdb] = 0xff;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0x80;
      pbVar2[0xf] = 0x3f;
      pbVar2[0xac] = 0xff;
      pbVar2[0xad] = 0xff;
      pbVar2[0xae] = 0xff;
      pbVar2[0xaf] = 0xff;
      pbVar2[0x108] = 0;
      pbVar2[0x109] = 0;
      pbVar2[0x10a] = 0;
      pbVar2[0x10b] = 0;
      pbVar2[0x10c] = 0;
      pbVar2[0x10d] = 0;
      pbVar2[0x10e] = 0;
      pbVar2[0x10f] = 0;
      pbVar2[0x110] = 0;
      pbVar2[0x111] = 0;
      pbVar2[0x112] = 0;
      pbVar2[0x113] = 0;
      pbVar2[0x114] = 0;
      pbVar2[0x115] = 0;
      pbVar2[0x116] = 0;
      pbVar2[0x117] = 0;
      *pbVar2 = *pbVar2 & 0xf0;
      FUN_140bfb4c0(pbVar25);
      _Dst[0] = 0xff;
      _Dst[1] = 0xff;
      _Dst[2] = 0x7f;
      _Dst[3] = 0x7f;
    }
    else {
      uVar27 = 0xffffffff;
      fVar38 = -1.0;
      lVar26 = 0xc0;
      uVar24 = 0;
      do {
        lVar32 = *local_4b0;
        lVar14 = FUN_14485cccc(lVar32 + lVar26);
        if (lVar14 == 0) {
LAB_1406a0981:
          lVar15 = 0;
        }
        else {
          if (DAT_14cb56270 == 0) {
            local_488 = (code *******)FUN_1449e2820;
            local_4c0 = FUN_14081d0ea;
            local_4c8 = FUN_1427b09ee;
            local_4d0 = (code *******)&local_488;
            local_4d8 = &LAB_148630fef;
            local_4e0 = FUN_1464b6a91;
            local_4e8 = L"Engine";
            local_4f0 = 0;
            local_4f8 = 0x10004001;
            local_500 = 8;
            local_508 = (code *******)CONCAT44(local_508._4_4_,0x28);
            FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270);
          }
          plVar20 = (longlong *)FUN_144718840(lVar14);
          if (plVar20 == (longlong *)0x0) goto LAB_1406a0981;
          lVar15 = (**(code **)(*plVar20 + 0x20))(plVar20);
        }
        if (((lVar14 == lVar13) ||
            (((lVar15 != 0 && ((*(byte *)(lVar15 + 0x470) & 0x10) != 0)) &&
             (lVar14 = FUN_143d08982(lVar15), lVar14 == lVar13)))) &&
           (fVar3 = *(float *)(lVar32 + -0xbc + lVar26), fVar38 < fVar3)) {
          uVar27 = uVar24 & 0xffffffff;
          fVar38 = fVar3;
        }
        uVar24 = uVar24 + 1;
        iVar9 = (int)local_4b0[1];
        lVar26 = lVar26 + 0x118;
      } while ((longlong)uVar24 < (longlong)iVar9);
      if ((int)uVar27 == -1) goto LAB_1406a0a97;
      pbVar25 = (byte *)((longlong)(int)uVar27 * 0x118 + *local_4b0);
    }
    *pbVar25 = *pbVar25 | 2;
  }
  if (0 < *(int *)(local_498 + 0x14)) {
    iVar9 = 0;
    if (param_8 != 0) {
      iVar9 = *(int *)(param_8 + 0x3c);
    }
    iVar9 = *(int *)(local_498 + 0x14) - iVar9;
    iVar19 = 0;
    if (0 < iVar9) {
      iVar19 = iVar9;
    }
    uVar8 = *(uint *)(local_4b0 + 1);
    if (iVar19 < (int)uVar8) {
      pppppppcVar10 = (code *******)*local_4b0;
      if (uVar8 < 2) {
        pppppppcVar18 = pppppppcVar10 + 0x23;
        iVar9 = 1;
      }
      else {
        local_498 = CONCAT44(local_498._4_4_,iVar19);
        memset(local_478,0,0x2f0);
        pppppppcStack_480 = pppppppcVar10 + (ulonglong)uVar8 * 0x23 + -0x23;
        local_488 = pppppppcVar10;
        fVar38 = logf((float)(int)uVar8);
        local_478[0] = (double)CONCAT44(local_478[0]._4_4_,(int)(longlong)(fVar38 + fVar38));
        pppppppcVar10 = (code *******)&local_488;
        do {
          _Src = *pppppppcVar10;
          ppppppcVar28 = pppppppcVar10[1];
          uVar30 = *(uint *)(pppppppcVar10 + 2);
          iVar9 = (int)((ulonglong)((longlong)ppppppcVar28 - (longlong)_Src) >> 3) * -0x75075075;
          uVar8 = iVar9 + 1;
          local_4a8 = pppppppcVar10;
          if (uVar30 != 0) {
LAB_1406a0c12:
            if (8 < (int)uVar8) {
              memcpy(&local_188,_Src + (ulonglong)(uVar8 >> 1) * 0x23,0x118);
              memcpy(_Src + (ulonglong)(uVar8 >> 1) * 0x23,_Src,0x118);
              memcpy(_Src,&local_188,0x118);
              ppppppcVar16 = ppppppcVar28 + 0x23;
              ppppppcVar35 = _Src;
              do {
                ppppppcVar35 = ppppppcVar35 + 0x23;
                if (ppppppcVar35 <= ppppppcVar28) {
                  do {
                    pppppcVar5 = *ppppppcVar35;
                    if (((ulonglong)*_Src & 8) == 0) {
                      if (((ulonglong)pppppcVar5 & 8) != 0) break;
LAB_1406a0c8a:
                      if (((ulonglong)*_Src & 2) == 0) {
                        if (((ulonglong)pppppcVar5 & 2) != 0) goto LAB_1406a0ca9;
                      }
                      else if (((ulonglong)pppppcVar5 & 2) == 0) break;
                      if (*(float *)((longlong)ppppppcVar35 + 4) <= *(float *)((longlong)_Src + 4)
                          && *(float *)((longlong)_Src + 4) !=
                             *(float *)((longlong)ppppppcVar35 + 4)) break;
                    }
                    else if (((ulonglong)pppppcVar5 & 8) != 0) goto LAB_1406a0c8a;
LAB_1406a0ca9:
                    ppppppcVar35 = ppppppcVar35 + 0x23;
                  } while (ppppppcVar35 <= ppppppcVar28);
                }
                ppppppcVar6 = ppppppcVar16 + -0x23;
                ppppppcVar29 = ppppppcVar16;
                if (_Src < ppppppcVar6) {
                  pppppcVar5 = *_Src;
                  do {
                    ppppppcVar34 = ppppppcVar6;
                    ppppppcVar6 = ppppppcVar34;
                    ppppppcVar29 = ppppppcVar16;
                    if (((ulonglong)ppppppcVar16[-0x23] & 8) == 0) {
                      if (((ulonglong)pppppcVar5 & 8) != 0) break;
LAB_1406a0ce3:
                      if (((ulonglong)ppppppcVar16[-0x23] & 2) == 0) {
                        if (((ulonglong)pppppcVar5 & 2) != 0) goto LAB_1406a0d01;
                      }
                      else if (((ulonglong)pppppcVar5 & 2) == 0) {
                        ppppppcVar29 = ppppppcVar34 + 0x23;
                        break;
                      }
                      if (*(float *)((longlong)_Src + 4) <= *(float *)((longlong)ppppppcVar34 + 4)
                          && *(float *)((longlong)ppppppcVar34 + 4) !=
                             *(float *)((longlong)_Src + 4)) break;
                    }
                    else if (((ulonglong)pppppcVar5 & 8) != 0) goto LAB_1406a0ce3;
LAB_1406a0d01:
                    ppppppcVar6 = ppppppcVar34 + -0x23;
                    ppppppcVar16 = ppppppcVar34;
                    ppppppcVar29 = ppppppcVar34;
                  } while (_Src < ppppppcVar6);
                }
                ppppppcVar16 = ppppppcVar6;
                if (ppppppcVar16 < ppppppcVar35) goto LAB_1406a0d61;
                memcpy(&local_188,ppppppcVar35,0x118);
                memcpy(ppppppcVar35,ppppppcVar16,0x118);
                memcpy(ppppppcVar16,&local_188,0x118);
              } while( true );
            }
            for (; ppppppcVar35 = _Src, ppppppcVar16 = _Src, _Src < ppppppcVar28;
                ppppppcVar28 = (code ******)((longlong)ppppppcVar28 + 0xfffffffffffffee8)) {
joined_r0x0001406a1138:
              ppppppcVar6 = ppppppcVar16;
              ppppppcVar16 = ppppppcVar6 + 0x23;
              if (ppppppcVar16 <= ppppppcVar28) {
                pppppcVar5 = *ppppppcVar16;
                if (((ulonglong)*ppppppcVar35 & 8) != 0) goto LAB_1406a1151;
                if (((ulonglong)pppppcVar5 & 8) == 0) goto LAB_1406a1156;
                goto LAB_1406a1173;
              }
              memcpy(&local_188,ppppppcVar35,0x118);
              memcpy(ppppppcVar35,ppppppcVar28,0x118);
              memcpy(ppppppcVar28,&local_188,0x118);
            }
            goto LAB_1406a11c7;
          }
LAB_1406a0e37:
          if (uVar8 != 0) {
            iVar9 = (iVar9 - (iVar9 + -1 >> 0x1f)) + -1 >> 1;
            iVar19 = iVar9;
joined_r0x0001406a0e58:
            do {
              iVar17 = iVar9 * 2 + 1;
              if (iVar17 < (int)uVar8) {
                iVar31 = iVar9 * 2 + 2;
                if (iVar31 < (int)uVar8) {
                  lVar13 = (longlong)iVar31;
                  pppppcVar5 = _Src[(longlong)iVar17 * 0x23];
                  if (((ulonglong)_Src[lVar13 * 0x23] & 8) == 0) {
                    if (((ulonglong)pppppcVar5 & 8) == 0) goto LAB_1406a0ea4;
                    goto LAB_1406a0ece;
                  }
                  if (((ulonglong)pppppcVar5 & 8) != 0) {
LAB_1406a0ea4:
                    if (((ulonglong)_Src[lVar13 * 0x23] & 2) == 0) {
                      if (((ulonglong)pppppcVar5 & 2) != 0) goto LAB_1406a0ed0;
                    }
                    else if (((ulonglong)pppppcVar5 & 2) == 0) goto LAB_1406a0ece;
                    fVar38 = *(float *)((longlong)_Src + lVar13 * 0x118 + 4);
                    pfVar1 = (float *)((longlong)_Src + (longlong)iVar17 * 0x118 + 4);
                    if (*pfVar1 <= fVar38 && fVar38 != *pfVar1) goto LAB_1406a0ece;
                  }
                }
                else {
LAB_1406a0ece:
                  lVar13 = (longlong)iVar17;
                  iVar31 = iVar17;
                }
LAB_1406a0ed0:
                ppppppcVar28 = _Src + (longlong)iVar9 * 0x23;
                ppppppcVar16 = _Src + lVar13 * 0x23;
                pppppcVar5 = _Src[lVar13 * 0x23];
                if (((ulonglong)_Src[(longlong)iVar9 * 0x23] & 8) == 0) {
                  if (((ulonglong)pppppcVar5 & 8) == 0) goto LAB_1406a0f00;
LAB_1406a0f1d:
                  memcpy(&local_188,ppppppcVar28,0x118);
                  memcpy(ppppppcVar28,ppppppcVar16,0x118);
                  memcpy(ppppppcVar16,&local_188,0x118);
                  iVar9 = iVar31;
                  goto joined_r0x0001406a0e58;
                }
                if (((ulonglong)pppppcVar5 & 8) != 0) {
LAB_1406a0f00:
                  if (((ulonglong)_Src[(longlong)iVar9 * 0x23] & 2) == 0) {
                    if (((ulonglong)pppppcVar5 & 2) != 0) goto LAB_1406a0f63;
                  }
                  else if (((ulonglong)pppppcVar5 & 2) == 0) goto LAB_1406a0f1d;
                  if (*(float *)((longlong)ppppppcVar16 + 4) <=
                      *(float *)((longlong)ppppppcVar28 + 4) &&
                      *(float *)((longlong)ppppppcVar28 + 4) !=
                      *(float *)((longlong)ppppppcVar16 + 4)) goto LAB_1406a0f1d;
                }
              }
LAB_1406a0f63:
              bVar37 = iVar19 != 0;
              iVar9 = iVar19 + -1;
              iVar19 = iVar9;
            } while (bVar37);
            if (1 < (int)uVar8) {
              memcpy(&local_188,_Src,0x118);
              memcpy(_Src,_Src + ((ulonglong)uVar8 - 1) * 0x23,0x118);
              memcpy(_Src + ((ulonglong)uVar8 - 1) * 0x23,&local_188,0x118);
              uVar24 = (ulonglong)uVar8 - 1;
              if (uVar8 != 2) {
                do {
                  iVar19 = 0;
                  iVar9 = 1;
                  iVar17 = 0;
                  do {
                    iVar31 = iVar19 + 2;
                    lVar13 = (longlong)iVar31;
                    if (lVar13 < (longlong)uVar24) {
                      pppppcVar5 = _Src[(longlong)iVar9 * 0x23];
                      if (((ulonglong)_Src[lVar13 * 0x23] & 8) == 0) {
                        if (((ulonglong)pppppcVar5 & 8) == 0) goto LAB_1406a100d;
                        goto LAB_1406a1037;
                      }
                      if (((ulonglong)pppppcVar5 & 8) != 0) {
LAB_1406a100d:
                        if (((ulonglong)_Src[lVar13 * 0x23] & 2) == 0) {
                          if (((ulonglong)pppppcVar5 & 2) != 0) goto LAB_1406a1039;
                        }
                        else if (((ulonglong)pppppcVar5 & 2) == 0) goto LAB_1406a1037;
                        fVar38 = *(float *)((longlong)_Src + lVar13 * 0x118 + 4);
                        pfVar1 = (float *)((longlong)_Src + (longlong)iVar9 * 0x118 + 4);
                        if (*pfVar1 <= fVar38 && fVar38 != *pfVar1) goto LAB_1406a1037;
                      }
                    }
                    else {
LAB_1406a1037:
                      lVar13 = (longlong)iVar9;
                      iVar31 = iVar9;
                    }
LAB_1406a1039:
                    ppppppcVar28 = _Src + (longlong)iVar17 * 0x23;
                    ppppppcVar16 = _Src + lVar13 * 0x23;
                    pppppcVar5 = _Src[lVar13 * 0x23];
                    if (((ulonglong)_Src[(longlong)iVar17 * 0x23] & 8) == 0) {
                      if (((ulonglong)pppppcVar5 & 8) == 0) goto LAB_1406a1068;
                    }
                    else {
                      if (((ulonglong)pppppcVar5 & 8) == 0) break;
LAB_1406a1068:
                      if (((ulonglong)_Src[(longlong)iVar17 * 0x23] & 2) == 0) {
                        if (((ulonglong)pppppcVar5 & 2) != 0) break;
                      }
                      else if (((ulonglong)pppppcVar5 & 2) == 0) goto LAB_1406a1085;
                      if (*(float *)((longlong)ppppppcVar28 + 4) <
                          *(float *)((longlong)ppppppcVar16 + 4) ||
                          *(float *)((longlong)ppppppcVar28 + 4) ==
                          *(float *)((longlong)ppppppcVar16 + 4)) break;
                    }
LAB_1406a1085:
                    memcpy(&local_188,ppppppcVar28,0x118);
                    memcpy(ppppppcVar28,ppppppcVar16,0x118);
                    memcpy(ppppppcVar16,&local_188,0x118);
                    iVar19 = iVar31 * 2;
                    iVar9 = iVar31 * 2 + 1;
                    iVar17 = iVar31;
                  } while ((longlong)iVar9 < (longlong)uVar24);
                  memcpy(&local_188,_Src,0x118);
                  memcpy(_Src,_Src + (uVar24 - 1) * 0x23,0x118);
                  memcpy(_Src + (uVar24 - 1) * 0x23,&local_188,0x118);
                  bVar37 = 2 < uVar24;
                  uVar24 = uVar24 - 1;
                } while (bVar37);
              }
            }
          }
LAB_1406a11c7:
          pppppppcVar10 = local_4a8 + -3;
        } while (&local_488 <= pppppppcVar10);
        iVar9 = (int)local_4b0[1];
        if ((longlong)iVar9 == 0) goto LAB_1406a1244;
        pppppppcVar10 = (code *******)*local_4b0;
        pppppppcVar18 = pppppppcVar10 + (longlong)iVar9 * 0x23;
        iVar19 = (int)local_498;
      }
      uVar24 = 0;
      do {
        if ((*(byte *)((longlong)pppppppcVar10 + uVar24) & 8) != 0) {
          iVar17 = (int)(uVar24 >> 3) * -0x75075075;
          if ((iVar17 != -1) && (iVar19 + iVar17 < iVar9)) {
            FUN_14881c1f2(local_4b0);
          }
          break;
        }
        lVar13 = uVar24 + 0x118;
        uVar24 = uVar24 + 0x118;
      } while ((code *******)((longlong)pppppppcVar10 + lVar13) != pppppppcVar18);
    }
  }
LAB_1406a1244:
  if ((local_70 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return 0 < (int)local_4b0[1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1406a0d61:
  memcpy(&local_188,_Src,0x118);
  memcpy(_Src,ppppppcVar16,0x118);
  memcpy(ppppppcVar16,&local_188,0x118);
  uVar30 = uVar30 - 1;
  ppppppcVar29 = ppppppcVar29 + -0x46;
  if ((longlong)ppppppcVar29 - (longlong)_Src < (longlong)ppppppcVar28 - (longlong)ppppppcVar35) {
    if (ppppppcVar35 < ppppppcVar28) {
      *local_4a8 = ppppppcVar35;
      local_4a8[1] = ppppppcVar28;
      *(uint *)(local_4a8 + 2) = uVar30;
      local_4a8 = local_4a8 + 3;
    }
    if (ppppppcVar16 <= _Src + 0x23) goto LAB_1406a11c7;
  }
  else {
    if (_Src + 0x23 < ppppppcVar16) {
      *local_4a8 = _Src;
      local_4a8[1] = ppppppcVar29;
      *(uint *)(local_4a8 + 2) = uVar30;
      local_4a8 = local_4a8 + 3;
    }
    ppppppcVar29 = ppppppcVar28;
    _Src = ppppppcVar35;
    if (ppppppcVar28 <= ppppppcVar35) goto LAB_1406a11c7;
  }
  iVar9 = (int)((ulonglong)((longlong)ppppppcVar29 - (longlong)_Src) >> 3) * -0x75075075;
  uVar8 = iVar9 + 1;
  ppppppcVar28 = ppppppcVar29;
  if (uVar30 == 0) goto LAB_1406a0e37;
  goto LAB_1406a0c12;
LAB_1406a1151:
  if (((ulonglong)pppppcVar5 & 8) == 0) goto joined_r0x0001406a1138;
LAB_1406a1156:
  if (((ulonglong)*ppppppcVar35 & 2) == 0) {
    if (((ulonglong)pppppcVar5 & 2) != 0) goto joined_r0x0001406a1138;
  }
  else if (((ulonglong)pppppcVar5 & 2) == 0) goto LAB_1406a1173;
  pfVar1 = (float *)((longlong)ppppppcVar6 + 0x11c);
  if (*(float *)((longlong)ppppppcVar35 + 4) < *pfVar1 ||
      *(float *)((longlong)ppppppcVar35 + 4) == *pfVar1) goto joined_r0x0001406a1138;
LAB_1406a1173:
  ppppppcVar35 = ppppppcVar16;
  goto joined_r0x0001406a1138;
}



// FUNCTION 1406a129a FUN_1406a129a body=159 status=ok
// SIG undefined FUN_1406a129a(void)

undefined8 FUN_1406a129a(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1406a133a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1406a133a FUN_1406a133a body=91 status=ok
// SIG undefined FUN_1406a133a(void)

void FUN_1406a133a(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1406a1396(param_1,param_2,1);
  return;
}



// FUNCTION 1406a1396 FUN_1406a1396 body=136 status=ok
// SIG undefined FUN_1406a1396(void)

void FUN_1406a1396(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406a141e FUN_1406a141e body=59 status=ok
// SIG undefined FUN_1406a141e(void)

void FUN_1406a141e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(char *)(param_1 + 0x5c) == '\0') && (*(longlong *)(param_1 + 0x100) != 0)) &&
     (*(longlong *)(param_2 + 8) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
    lVar2 = 0;
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x52) == '\0')) {
      lVar2 = lVar1;
    }
    FUN_1406a1459(&DAT_14ca85100,lVar2);
    return;
  }
  return;
}



// FUNCTION 1406a1459 FUN_1406a1459 body=741 status=ok
// SIG undefined FUN_1406a1459(void)

void FUN_1406a1459(ulonglong *param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_118 [36];
  uint local_f4;
  undefined4 local_f0;
  uint local_ec;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = 0xffffffffffffffff;
  local_b0 = 0xffffffff;
  local_a0 = 1;
  local_9c = 0x8000000070;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 1;
  local_64 = 0x200000000070;
  local_5c = 0;
  local_50 = 0;
  local_d0 = 2;
  local_d8 = &local_b8;
  local_a8 = param_2;
  local_70 = param_3;
  FUN_144760590(param_1,&local_d8,0);
  lVar5 = 0x68;
  do {
    if (*(char *)((longlong)&local_b8 + lVar5) == '\x01') {
      *(undefined1 *)((longlong)&local_b8 + lVar5) = 0;
    }
    lVar5 = lVar5 + -0x38;
  } while (lVar5 != -8);
  lVar5 = (**(code **)(*param_3 + 8))(param_3);
  bVar1 = *(byte *)(lVar5 + 0x30);
  lVar5 = (**(code **)(*param_2 + 8))(param_2);
  plVar7 = param_2;
  if (bVar1 < *(byte *)(lVar5 + 0x30)) {
    plVar7 = param_3;
  }
  lVar5 = (**(code **)(*plVar7 + 8))();
  local_b8 = DAT_14c9a5298;
  local_b0 = DAT_14c9a52a0;
  local_c8 = DAT_14c9a5298;
  local_c0 = DAT_14c9a52a0;
  uVar4 = *(undefined4 *)(lVar5 + 0x24);
  local_f0 = *(undefined4 *)(lVar5 + 0x28);
  local_f4 = (uint)*(ushort *)(lVar5 + 0x2c);
  local_ec = (uint)*(ushort *)(lVar5 + 0x2e);
  bVar1 = *(byte *)(lVar5 + 0x30);
  lVar5 = (**(code **)(*param_2 + 8))(param_2);
  bVar2 = *(byte *)(lVar5 + 0x30);
  lVar5 = (**(code **)(*param_3 + 8))(param_3);
  bVar3 = *(byte *)(lVar5 + 0x30);
  puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar6 + 0xc;
  if ((undefined8 *)param_1[1] < puVar8) {
    FUN_140023dd8(param_1,0x68);
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar6 + 0xc;
  }
  *param_1 = (ulonglong)puVar8;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar6;
  param_1[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_14a289d68;
  *(undefined4 *)(puVar6 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x14) = local_f0;
  *(uint *)(puVar6 + 3) = local_f4;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = local_b8;
  *(undefined4 *)((longlong)puVar6 + 0x24) = local_b0;
  puVar6[5] = local_c8;
  *(undefined4 *)(puVar6 + 6) = local_c0;
  *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
  *(uint *)((longlong)puVar6 + 0x3c) = local_ec;
  *(uint *)(puVar6 + 8) = (uint)bVar2 - (uint)bVar1;
  *(uint *)((longlong)puVar6 + 0x44) = (uint)bVar3 - (uint)bVar1;
  *(uint *)(puVar6 + 9) = (uint)bVar1;
  puVar6[10] = param_2;
  puVar6[0xb] = param_3;
  local_b8 = 0xffffffffffffffff;
  local_b0 = 0xffffffff;
  local_a0 = 1;
  local_9c = 0x7000000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 1;
  local_64 = 0x7000002000;
  local_5c = 0;
  local_50 = 0;
  local_e0 = 2;
  local_e8 = &local_b8;
  local_a8 = param_2;
  local_70 = param_3;
  FUN_144760590(param_1,&local_e8,0);
  lVar5 = 0x68;
  do {
    if (*(char *)((longlong)&local_b8 + lVar5) == '\x01') {
      *(undefined1 *)((longlong)&local_b8 + lVar5) = 0;
    }
    lVar5 = lVar5 + -0x38;
  } while (lVar5 != -8);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a1740 FUN_1406a1740 body=2551 status=ok
// SIG undefined FUN_1406a1740(void)

void FUN_1406a1740(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  double _Y;
  undefined1 auVar32 [16];
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  code *local_e8;
  longlong *local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar19 = FUN_1400d7050(param_1 + -8);
  if (lVar19 == 0) goto LAB_1406a1d34;
  if (DAT_14cbadd90 == 0) {
    local_100 = &local_e8;
    local_e8 = FUN_141030f22;
    local_f0 = FUN_14081d0ea;
    local_f8 = (code *)&LAB_1459f2e4c;
    local_108 = &LAB_148c39de3;
    local_110 = &LAB_1457a9eb2;
    local_118 = L"Game";
    local_120 = 0;
    local_128 = 0x10000004;
    local_130 = 0x10;
    local_138 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (plVar3 = *(longlong **)(lVar19 + 0x2500), plVar3 == (longlong *)0x0)) goto LAB_1406a1d34;
  puVar1 = (undefined8 *)(param_1 + 0x28);
  puVar26 = puVar1;
  puVar27 = (undefined8 *)(param_1 + 0x88);
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar27 = *puVar26;
    puVar26 = puVar26 + 1;
    puVar27 = puVar27 + 1;
  }
  puVar26 = &DAT_14c846480;
  if (plVar3[0x39] != 0) {
    puVar26 = (undefined8 *)(plVar3[0x39] + 0x240);
  }
  puVar27 = puVar1;
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar27 = *puVar26;
    puVar26 = puVar26 + 1;
    puVar27 = puVar27 + 1;
  }
  auVar10._8_8_ =
       -(ulonglong)
        (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0xb0) - *(double *)(param_1 + 0x50)));
  auVar10._0_8_ =
       -(ulonglong)
        (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0xa8) - *(double *)(param_1 + 0x48)));
  iVar20 = movmskpd(0,auVar10);
  auVar32._8_8_ =
       -(ulonglong)
        (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0x60)));
  auVar32._0_8_ =
       -(ulonglong)
        (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0xb8) - *(double *)(param_1 + 0x58)));
  uVar23 = movmskpd((int)puVar1,auVar32);
  if ((uVar23 & 0x3fffffff) == 0 && iVar20 == 0) {
    lVar21 = -(ulonglong)
              (9.999999747378752e-05 <
              ABS(*(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x30)));
    auVar14._8_4_ = (int)lVar21;
    auVar14._0_8_ =
         -(ulonglong)
          (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x88) - *(double *)(param_1 + 0x28)));
    auVar14._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    uVar23 = movmskpd(iVar20,auVar14);
    lVar21 = -(ulonglong)
              (9.999999747378752e-05 <
              ABS(*(double *)(param_1 + 0xa0) - *(double *)(param_1 + 0x40)));
    auVar11._8_4_ = (int)lVar21;
    auVar11._0_8_ =
         -(ulonglong)
          (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x98) - *(double *)(param_1 + 0x38)));
    auVar11._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    iVar20 = movmskpd(0,auVar11);
    uVar24 = iVar20 << 2 | uVar23;
    if (uVar24 == 0) goto LAB_1406a1d34;
    lVar21 = -(ulonglong)
              (9.999999747378752e-05 <
              ABS(*(double *)(param_1 + 0x90) + *(double *)(param_1 + 0x30)));
    auVar8._8_4_ = (int)lVar21;
    auVar8._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 <
                    ABS(*(double *)(param_1 + 0x88) + *(double *)(param_1 + 0x28)));
    auVar8._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    iVar20 = movmskpd(uVar23,auVar8);
    auVar5._8_8_ = -(ulonglong)
                    (9.999999747378752e-05 <
                    ABS(*(double *)(param_1 + 0xa0) + *(double *)(param_1 + 0x40)));
    auVar5._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 <
                    ABS(*(double *)(param_1 + 0x98) + *(double *)(param_1 + 0x38)));
    uVar23 = movmskpd(uVar24,auVar5);
    if ((uVar23 & 0x3fffffff) == 0 && iVar20 == 0) goto LAB_1406a1d34;
  }
  (**(code **)(*plVar3 + 0x728))(plVar3,&local_e8);
  dVar12 = (double)FUN_144719204((int)local_e8,0);
  dVar13 = (double)FUN_144719204((int)local_e0,0);
  dVar6 = sin(dVar12 * 0.017453292519943295);
  dVar12 = cos(dVar12 * 0.017453292519943295);
  dVar7 = sin(dVar13 * 0.017453292519943295);
  dVar13 = cos(dVar13 * 0.017453292519943295);
  dVar7 = dVar7 * dVar12;
  dVar13 = dVar13 * dVar12;
  dVar12 = dVar6 * dVar6 + dVar13 * dVar13 + dVar7 * dVar7;
  dVar17 = dVar13;
  dVar16 = dVar7;
  dVar15 = dVar6;
  if (9.99999993922529e-09 < dVar12) {
    dVar15 = 1.0 / SQRT(dVar12);
    dVar17 = dVar13 * dVar15;
    dVar16 = dVar7 * dVar15;
    dVar15 = dVar15 * dVar6;
  }
  plVar3 = (longlong *)(param_1 + -0x38);
  if (((9.999999747378752e-05 < ABS(dVar17 - *(double *)(param_1 + 0xe8))) ||
      (9.999999747378752e-05 < ABS(dVar16 - *(double *)(param_1 + 0xf0)))) ||
     (9.999999747378752e-05 < ABS(dVar15 - *(double *)(param_1 + 0xf8)))) {
    FUN_1449027d0(plVar3,&local_e8);
    pfVar4 = *(float **)(local_e8 + 0x240);
    AcquireSRWLockExclusive((PSRWLOCK)(pfVar4 + 0x28));
    pfVar4[0x26] = (float)((int)pfVar4[0x26] + 1);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar25 = local_e0 + 1;
      *(int *)plVar25 = (int)*plVar25 + -1;
      UNLOCK();
      if ((int)*plVar25 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
    dVar9 = dVar13 * *(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x10) * dVar7;
    _Y = *(double *)(param_1 + 0x18) * dVar7 + dVar13 * *(double *)(param_1 + 0x10);
    uVar29 = 0;
    uVar31 = 0;
    if (((_Y != 0.0) || (NAN(_Y))) || ((dVar9 != 0.0 || (NAN(dVar9))))) {
      dVar9 = atan2(_Y,dVar9);
      uVar29 = SUB84(dVar9,0);
      uVar31 = (undefined4)((ulonglong)dVar9 >> 0x20);
    }
    dVar9 = ((double)CONCAT44(uVar31,uVar29) + 3.1415927410125732) / 6.2831854820251465;
    if (1.0 <= dVar9) {
      dVar9 = 1.0;
    }
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    fVar30 = (float)(dVar9 * 201.0 + -50.0);
    if ((*pfVar4 != fVar30) || (NAN(*pfVar4) || NAN(fVar30))) {
      fVar18 = (float)((int)pfVar4[1] + 1);
LAB_1406a1abb:
      *pfVar4 = fVar30;
      pfVar4[1] = fVar18;
    }
    else if (pfVar4[1] == 0.0) {
      fVar18 = 1.4013e-45;
      goto LAB_1406a1abb;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(pfVar4 + 0x28));
  }
  lVar21 = *(longlong *)(lVar19 + 0x3d0);
  lVar28 = *(longlong *)(param_1 + 0x100);
  if (lVar21 == 0) {
    if (lVar28 != 0) {
      FUN_145736670(plVar3);
    }
  }
  else {
    if (lVar28 != 0) {
      if ((((((*(int *)(lVar28 + 0x4c) == 0) || (uVar23 = *(uint *)(lVar28 + 0x48), (int)uVar23 < 0)
             ) || (DAT_14c9647dc <= (int)uVar23)) ||
           ((plVar25 = (longlong *)
                       ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
            plVar25 == (longlong *)0x0 || ((int)plVar25[2] != *(int *)(lVar28 + 0x4c))))) ||
          ((*(uint *)(plVar25 + 1) & 0x10200000) != 0)) || (lVar28 = *plVar25, lVar28 == 0)) {
LAB_1406a1f3b:
        lVar28 = 0;
      }
      else {
        if (DAT_14cac9ca8 == 0) {
          local_e8 = FUN_141030f22;
          local_f0 = FUN_14081d0ea;
          local_f8 = FUN_14081d0ea;
          local_108 = &LAB_1478c0a72;
          local_110 = &LAB_1417b2375;
          local_118 = L"Engine";
          local_120 = 0x1000000000;
          local_128 = 0x10000004;
          local_130 = 8;
          local_138 = 0x390;
          local_100 = &local_e8;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
        goto LAB_1406a1f3b;
      }
      if (lVar28 == lVar21) goto LAB_1406a1b8e;
    }
    FUN_1457362b8(plVar3,lVar21);
  }
LAB_1406a1b8e:
  lVar21 = (**(code **)(*plVar3 + 0x180))(plVar3);
  if (((lVar21 != 0) && (lVar21 = FUN_1400f6e0c(lVar21), lVar21 != 0)) &&
     (*(longlong *)(lVar21 + 0xc0) != 0)) {
    lVar19 = FUN_1406a2138(*(longlong *)(lVar21 + 0xc0),lVar19);
    iVar20 = *(int *)(param_1 + 0x114);
    if (iVar20 == 0) {
      if (lVar19 == 0) goto LAB_1406a1c8e;
    }
    else {
      uVar23 = *(uint *)(param_1 + 0x110);
      if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
        plVar25 = (longlong *)
                  ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
        if ((plVar25 == (longlong *)0x0) ||
           (((int)plVar25[2] != iVar20 || ((*(uint *)(plVar25 + 1) & 0x10200000) != 0)))) {
          lVar21 = 0;
        }
        else {
          lVar21 = *plVar25;
        }
        if ((lVar19 == lVar21) && (lVar19 = 0, (int)uVar23 < DAT_14c9647dc)) {
          lVar19 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
          if ((lVar19 != 0) &&
             ((*(int *)(lVar19 + 0x10) == iVar20 && ((*(uint *)(lVar19 + 8) & 0x10200000) == 0))))
          goto LAB_1406a1c8e;
          lVar19 = 0;
        }
      }
    }
    FUN_14485c47a((uint *)(param_1 + 0x110),lVar19);
    FUN_1406a3c7a(plVar3);
  }
LAB_1406a1c8e:
  if (((9.999999747378752e-05 < ABS(dVar17 - *(double *)(param_1 + 0xe8))) ||
      (9.999999747378752e-05 < ABS(dVar16 - *(double *)(param_1 + 0xf0)))) ||
     (9.999999747378752e-05 < ABS(dVar15 - *(double *)(param_1 + 0xf8)))) {
    cVar22 = '\x02';
    if (ABS(*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0xa8)) <= 9.999999747378752e-05) {
      cVar22 = (-(9.999999747378752e-05 <
                  ABS(*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0xb8)) ||
                 9.999999747378752e-05 <
                 ABS(*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0xb0))) & 1U) * '\x02';
    }
LAB_1406a1cd5:
    FUN_1406a235e(plVar3,cVar22);
  }
  else {
    cVar22 = '\x02';
    if (((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0xa8))) ||
        (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0xb0)))) ||
       (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0xb8))))
    goto LAB_1406a1cd5;
  }
  *(double *)(param_1 + 0xe8) = dVar13;
  *(double *)(param_1 + 0xf0) = dVar7;
  *(double *)(param_1 + 0xf8) = dVar6;
  if (9.99999993922529e-09 < dVar12) {
    dVar12 = 1.0 / SQRT(dVar12);
    *(double *)(param_1 + 0xe8) = dVar13 * dVar12;
    *(double *)(param_1 + 0xf0) = dVar7 * dVar12;
    *(double *)(param_1 + 0xf8) = dVar6 * dVar12;
  }
LAB_1406a1d34:
  if ((local_d0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a2138 FUN_1406a2138 body=363 status=ok
// SIG undefined FUN_1406a2138(void)

undefined8 FUN_1406a2138(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar3 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar8;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar3 = uVar8;
      }
    }
  }
  local_30 = CONCAT44(uVar3,uVar7);
  iVar2 = FUN_1406a22a4((longlong *)(param_1 + 0x88),uVar3 ^ uVar7);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar9 = lVar1 + (longlong)iVar2 * 0x18;
    uVar4 = 0;
    if ((lVar9 == 0) ||
       (puVar6 = (uint *)(lVar1 + (longlong)iVar2 * 0x18 + 8), puVar6 == (uint *)0x0))
    goto LAB_1406a21be;
    iVar2 = *(int *)(lVar9 + 0xc);
    if (iVar2 != 0) {
      uVar3 = *puVar6;
      uVar4 = 0;
      if (((int)uVar3 < 0) || (uVar4 = 0, DAT_14c9647dc <= (int)uVar3)) goto LAB_1406a21be;
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar5 != (undefined8 *)0x0) &&
         ((*(int *)(puVar5 + 2) == iVar2 && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
        uVar4 = *puVar5;
        goto LAB_1406a21be;
      }
    }
  }
  uVar4 = 0;
LAB_1406a21be:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1406a22a4 FUN_1406a22a4 body=185 status=ok
// SIG undefined FUN_1406a22a4(void)

int FUN_1406a22a4(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_1400ff418(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1406a22cd;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1406a22cd:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1406a235e FUN_1406a235e body=3700 status=ok
// SIG undefined FUN_1406a235e(void)

void FUN_1406a235e(longlong param_1,uint param_2)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double _Y;
  uint uVar10;
  DWORD DVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Dd;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double _Y_00;
  double dVar34;
  uint uVar35;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined8 local_210;
  wchar_t *local_208;
  code *local_200;
  undefined1 *local_1f8;
  code **local_1f0;
  undefined1 *local_1e8;
  code *local_1e0;
  int local_1cc;
  ulonglong local_1c8;
  double local_1c0;
  int local_1b4;
  ulonglong local_1b0;
  undefined1 local_1a8 [16];
  PSRWLOCK local_190;
  longlong local_188;
  uint *local_180;
  char local_178 [4];
  undefined4 local_174;
  char local_170 [4];
  undefined4 local_16c;
  code *local_168;
  longlong *local_160;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_f0;
  
  uVar21 = (ulonglong)param_2;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1449027d0();
  lVar7 = *(longlong *)(local_168 + 0x240);
  SRWLock = (PSRWLOCK)(lVar7 + 0xa0);
  AcquireSRWLockExclusive(SRWLock);
  *(int *)(lVar7 + 0x98) = *(int *)(lVar7 + 0x98) + 1;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_160 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)local_160 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_160 + 0x10))(local_160);
      }
    }
  }
  if (((char)param_2 != '\0') && ((param_2 & 0xff) == 1)) goto LAB_1406a2473;
  iVar22 = *(int *)(lVar7 + 0x3c);
  if (*(char *)(lVar7 + 0x38) == '\0') {
    if (iVar22 == 0) {
      iVar22 = 0;
      goto LAB_1406a301f;
    }
  }
  else {
LAB_1406a301f:
    *(undefined1 *)(lVar7 + 0x38) = 0;
    *(int *)(lVar7 + 0x3c) = iVar22 + 1;
  }
  iVar22 = *(int *)(lVar7 + 0x34);
  if (*(char *)(lVar7 + 0x30) == '\0') {
    if (iVar22 != 0) goto LAB_1406a2473;
    iVar22 = 0;
  }
  *(undefined1 *)(lVar7 + 0x30) = 0;
  *(int *)(lVar7 + 0x34) = iVar22 + 1;
LAB_1406a2473:
  local_1b0 = uVar21;
  local_190 = SRWLock;
  if (*(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x184) ==
      *(int *)(lVar7 + 0x50) - *(int *)(lVar7 + 0x7c)) {
    uVar35 = *(uint *)(param_1 + 0x178);
    if (uVar35 == 0) {
      uVar21 = 1;
      uVar25 = 0;
      uVar10 = 0;
      iVar22 = 0;
    }
    else {
      puVar12 = *(uint **)(param_1 + 0x170);
      if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 0x160);
      }
      uVar10 = *puVar12;
      if (uVar10 == 0) {
        iVar22 = uVar35 + 0x1e;
        if (-1 < (int)(uVar35 - 1)) {
          iVar22 = uVar35 - 1;
        }
        uVar25 = 0;
        uVar21 = (ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          uVar21 = uVar25;
        }
        iVar22 = 0;
        do {
          if (uVar21 == uVar25) goto LAB_1406a2ea8;
          iVar22 = iVar22 + 0x20;
          uVar10 = puVar12[uVar25 + 1];
          uVar25 = uVar25 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar25 = 0;
        iVar22 = 0;
      }
      uVar21 = (ulonglong)(-uVar10 & uVar10);
      uVar13 = uVar21 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar10 = (iVar22 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if ((int)uVar35 <= (int)uVar10) {
        uVar10 = uVar35;
      }
    }
    if (uVar10 != uVar35) {
      local_188 = lVar7 + 0x80;
      local_1b4 = param_2 - 1;
      uVar23 = 0xffffffff;
      local_1c8 = (ulonglong)uVar35;
      local_180 = (uint *)(param_1 + 0x160);
LAB_1406a257a:
      uVar35 = 0x3ff00000;
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x150) + (longlong)(int)uVar10 * 0x18);
      if (((((*(int *)((longlong)plVar2 + 0xc) == 0) ||
            (uVar10 = *(uint *)(plVar2 + 1), (int)uVar10 < 0)) || (DAT_14c9647dc <= (int)uVar10)) ||
          ((puVar16 = (undefined8 *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
           puVar16 == (undefined8 *)0x0 ||
           (*(int *)(puVar16 + 2) != *(int *)((longlong)plVar2 + 0xc))))) ||
         ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)) {
        local_f8 = DAT_14c8464f0;
        local_108 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_100 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        if ((*(uint *)(puVar16 + 1) & 0x10200000) == 0) {
          plVar18 = (longlong *)*puVar16;
        }
        else {
          plVar18 = (longlong *)0x0;
        }
        (**(code **)(*plVar18 + 0x2b0))();
        local_108 = local_148;
        uStack_100 = dStack_140;
        local_f8 = local_138;
      }
      if ((*(int *)((longlong)plVar2 + 0xc) == 0) ||
         (uVar10 = *(uint *)(plVar2 + 1), (int)uVar10 < 0)) {
LAB_1406a2f66:
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        if ((int)uVar10 < DAT_14c9647dc) {
          plVar18 = (longlong *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if (((plVar18 == (longlong *)0x0) || ((int)plVar18[2] != *(int *)((longlong)plVar2 + 0xc))
              ) || ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_1406a2f66;
          lVar17 = *plVar18;
        }
      }
      if (*(char *)(lVar17 + 0x60) == '\x01') {
        lVar17 = *(longlong *)(lVar17 + 0x50);
      }
      else {
        lVar17 = 0;
      }
      local_1cc = iVar22;
      if (*(int *)(lVar7 + 0x50) != *(int *)(lVar7 + 0x7c)) {
        lVar20 = *plVar2;
        lVar19 = *(longlong *)(lVar7 + 0x88);
        if (*(longlong *)(lVar7 + 0x88) == 0) {
          lVar19 = local_188;
        }
        iVar22 = *(int *)(lVar19 + (ulonglong)
                                   (*(int *)(lVar7 + 0x90) - 1U &
                                   (int)lVar20 + (int)((ulonglong)lVar20 >> 0x20) * 0x17) * 4);
        if (iVar22 != -1) {
          lVar19 = *(longlong *)(lVar7 + 0x48);
          iVar24 = iVar22;
          do {
            if (*(longlong *)(lVar19 + (longlong)iVar24 * 0x58) == lVar20) goto LAB_1406a26ff;
            iVar24 = *(int *)((longlong)iVar24 * 0x58 + lVar19 + 0x50);
          } while (iVar24 != -1);
        }
      }
      goto LAB_1406a2cf4;
    }
  }
LAB_1406a2ea8:
  ReleaseSRWLockExclusive(local_190);
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar22 = *(int *)(lVar26 + 0x50), iVar22 != -1) {
LAB_1406a26ff:
    lVar26 = lVar19 + (longlong)iVar22 * 0x58;
    if (*(longlong *)(lVar19 + (longlong)iVar22 * 0x58) == lVar20) goto LAB_1406a2714;
  }
  lVar26 = 0;
LAB_1406a2714:
  *(int *)(lVar26 + 0x48) = *(int *)(lVar26 + 0x48) + 1;
  if ((local_1b0 & 0xfd) != 0) goto LAB_1406a2885;
  local_170[0] = '\0';
  local_16c = 0;
  local_178[0] = '\0';
  local_174 = 0;
  if (((lVar17 == 0) || (*(char *)(lVar17 + 0x120) != '\x01')) ||
     (*(char *)(param_1 + 0x200) != '\x01')) {
LAB_1406a2756:
    uVar28 = FUN_1406a31d4(param_1,&local_108,local_178,local_170);
    *(undefined4 *)(lVar26 + 0x34) = uVar28;
  }
  else {
    iVar22 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    lVar20 = DAT_14cbdbb28;
    if (iVar22 == 0x40000002) {
      uVar13 = 0;
    }
    else {
      bVar27 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar22 != 2)) {
        if (iVar22 == 1) {
          local_1a8._0_8_ = DAT_14cbdbb28;
          uVar28 = FUN_140ad26c0();
          local_1c0 = (double)CONCAT44(local_1c0._4_4_,uVar28);
          DVar11 = GetCurrentThreadId();
          bVar27 = local_1c0._0_4_ == DVar11;
          lVar20 = local_1a8._0_8_;
        }
        else {
          bVar27 = false;
        }
      }
      uVar13 = (ulonglong)(bVar27 ^ 1);
    }
    if (*(char *)(lVar20 + uVar13) != '\x01') goto LAB_1406a2756;
    FUN_1406a3d4e(param_1,lVar26 + 8,lVar17,&local_108);
  }
  if ((*(int *)((longlong)plVar2 + 0xc) == 0) || (uVar10 = *(uint *)(plVar2 + 1), (int)uVar10 < 0))
  {
LAB_1406a2f6d:
    lVar20 = 0;
  }
  else {
    lVar20 = 0;
    if ((int)uVar10 < DAT_14c9647dc) {
      plVar18 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if (((plVar18 == (longlong *)0x0) || ((int)plVar18[2] != *(int *)((longlong)plVar2 + 0xc))) ||
         ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_1406a2f6d;
      lVar20 = *plVar18;
    }
  }
  if (*(char *)(lVar20 + 0x60) == '\x01') {
    cVar6 = *(char *)(lVar20 + 0x58);
    *(char *)(lVar26 + 0x14) = cVar6;
    if (cVar6 == '\0') goto LAB_1406a27f2;
LAB_1406a2e7c:
    fVar3 = *(float *)(lVar26 + 0x34);
    uVar28 = 0xc1c80000;
    if ((fVar3 != -100.0) || (NAN(fVar3))) {
      uVar28 = 0x41c80000;
      if ((fVar3 != 100.0) || (NAN(fVar3))) goto LAB_1406a2804;
    }
    *(undefined4 *)(lVar26 + 0x34) = uVar28;
  }
  else {
    *(undefined1 *)(lVar26 + 0x14) = 0;
LAB_1406a27f2:
    if ((lVar17 != 0) && (*(char *)(lVar17 + 0x114) == '\x01')) goto LAB_1406a2e7c;
  }
LAB_1406a2804:
  if (((((*(int *)((longlong)plVar2 + 0xc) != 0) &&
        (uVar10 = *(uint *)(plVar2 + 1), -1 < (int)uVar10)) && ((int)uVar10 < DAT_14c9647dc)) &&
      ((plVar18 = (longlong *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
       plVar18 != (longlong *)0x0 && ((int)plVar18[2] == *(int *)((longlong)plVar2 + 0xc))))) &&
     ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
      lVar20 = *plVar18;
    }
    else {
      lVar20 = 0;
    }
    if (DAT_14cba14f0 == 0) {
      local_168 = FUN_1449e2820;
      local_1e0 = FUN_14081d0ea;
      local_1e8 = &LAB_145885dac;
      local_1f0 = &local_168;
      local_1f8 = &LAB_148b9e16b;
      local_200 = FUN_140f505de;
      local_208 = L"Engine";
      local_210 = 0;
      local_218 = 0x10000000;
      local_220 = 8;
      local_228 = 0x110;
      FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakMissionWaypoint",
                    &DAT_14cba14f0,&DAT_148b9e16a);
    }
    if ((*(int *)(DAT_14cba14f0 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba14f0 + 0x38) * 8) == DAT_14cba14f0 + 0x30)) {
      if ((local_170[0] == '\x01') &&
         (*(int *)(lVar7 + 0x3c) == 0 || *(char *)(lVar7 + 0x38) == '\0')) {
        *(undefined1 *)(lVar7 + 0x38) = 1;
        *(int *)(lVar7 + 0x3c) = *(int *)(lVar7 + 0x3c) + 1;
      }
      if ((local_178[0] == '\x01') &&
         (*(int *)(lVar7 + 0x34) == 0 || *(char *)(lVar7 + 0x30) == '\0')) {
        *(undefined1 *)(lVar7 + 0x30) = 1;
        *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
      }
    }
  }
LAB_1406a2885:
  if ((byte)local_1b4 < 2) {
    dVar31 = local_108 - *(double *)(param_1 + 0x80);
    dVar30 = uStack_100 - *(double *)(param_1 + 0x88);
    dVar31 = SQRT(dVar30 * dVar30 + dVar31 * dVar31) / 100.0;
    *(float *)(lVar26 + 0x18) = (float)(int)((ulonglong)(longlong)ROUND(dVar31 + dVar31 + 0.5) >> 1)
    ;
    dVar31 = *(double *)(param_1 + 0x70);
    dVar30 = *(double *)(param_1 + 0x60);
    dVar4 = *(double *)(param_1 + 0x68);
    dVar33 = dVar31 - dVar30 * 0.0;
    dVar34 = dVar30 * 0.0 - dVar4;
    dVar9 = dVar4 * 0.0 + dVar31 * -0.0;
    dVar34 = dVar34 + dVar34;
    dVar33 = dVar33 + dVar33;
    dVar9 = dVar9 + dVar9;
    dVar5 = *(double *)(param_1 + 0x78);
    _Y = (local_f8 - *(double *)(param_1 + 0x90)) -
         ((dVar30 * dVar33 - dVar9 * dVar4) + dVar5 * dVar34 + 0.0);
    _Y_00 = (uStack_100 - *(double *)(param_1 + 0x88)) -
            ((dVar31 * dVar9 - dVar34 * dVar30) + dVar5 * dVar33 + 0.0);
    dVar30 = (local_108 - *(double *)(param_1 + 0x80)) -
             ((dVar4 * dVar34 - dVar33 * dVar31) + dVar5 * dVar9 + 1.0);
    dVar31 = _Y * _Y + dVar30 * dVar30 + _Y_00 * _Y_00;
    if ((dVar31 != 1.0) || (NAN(dVar31))) {
      if (dVar31 < 9.99999993922529e-09) {
        dVar30 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        _Y_00 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        _Y = DAT_14c8464f0;
      }
      else {
        dVar31 = 1.0 / SQRT(dVar31);
        _Y_00 = _Y_00 * dVar31;
        dVar30 = dVar30 * dVar31;
        _Y = _Y * dVar31;
      }
    }
    if (0.9998999834060669 <= ABS(_Y)) {
      uVar35 = 0;
    }
    uVar10 = ~(uint)(-(ulonglong)(ABS(_Y) < 0.9998999834060669) >> 0x20) & 0x3ff00000;
    dVar5 = (double)((ulonglong)uVar10 << 0x20) * _Y_00 + dVar30 * -0.0;
    dVar4 = (double)((ulonglong)uVar35 << 0x20) * dVar30 - _Y * (double)((ulonglong)uVar10 << 0x20);
    dVar9 = _Y * 0.0 - _Y_00 * (double)((ulonglong)uVar35 << 0x20);
    dVar31 = dVar5 * dVar5 + dVar9 * dVar9 + dVar4 * dVar4;
    if ((dVar31 != 1.0) || (NAN(dVar31))) {
      if (dVar31 < 9.99999993922529e-09) {
        dVar9 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar4 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar5 = DAT_14c8464f0;
      }
      else {
        dVar31 = 1.0 / SQRT(dVar31);
        dVar4 = dVar4 * dVar31;
        dVar9 = dVar9 * dVar31;
        dVar5 = dVar5 * dVar31;
      }
    }
    if ((((dVar30 != -dVar30) || (NAN(dVar30) || NAN(-dVar30))) || (_Y_00 != 0.0)) || (NAN(_Y_00)))
    {
      dVar31 = atan2(_Y_00,dVar30);
      dVar31 = dVar31 * 57.29577951308232;
    }
    else {
      dVar31 = 0.0;
    }
    dVar34 = SQRT(_Y_00 * _Y_00 + dVar30 * dVar30);
    dVar33 = 0.0;
    uVar28 = 0;
    uVar29 = 0;
    if (((_Y != 0.0) || (NAN(_Y))) || ((dVar34 != 0.0 || (NAN(dVar34))))) {
      dVar33 = atan2(_Y,dVar34);
      dVar33 = dVar33 * 57.29577951308232;
      uVar28 = extraout_XMM0_Dc;
      uVar29 = extraout_XMM0_Dd;
    }
    local_1c0 = _Y_00 * dVar5 - dVar4 * _Y;
    local_1a8._8_4_ = uVar28;
    local_1a8._0_8_ = dVar33;
    local_1a8._12_4_ = uVar29;
    dVar34 = sin(dVar33 * 0.01745329238474369);
    dVar8 = sin(dVar31 * 0.01745329238474369);
    dVar33 = cos(dVar33 * 0.01745329238474369);
    dVar31 = cos(dVar31 * 0.01745329238474369);
    dVar32 = dVar34 * 0.0 * dVar31 - dVar8;
    dVar31 = dVar34 * 0.0 * dVar8 + dVar31;
    dVar34 = dVar5 * dVar33 * -0.0 + dVar9 * dVar32 + dVar4 * dVar31;
    dVar31 = dVar33 * -0.0 * (dVar30 * dVar4 - dVar9 * _Y_00) +
             dVar32 * local_1c0 + dVar31 * (_Y * dVar9 - dVar5 * dVar30);
    if (((dVar31 != 0.0) || (NAN(dVar31))) || ((dVar34 != 0.0 || (NAN(dVar34))))) {
      atan2(dVar31,dVar34);
    }
    *(float *)(lVar26 + 0x1c) = (float)(double)local_1a8._0_8_;
    if (lVar17 != 0) {
      *(bool *)(lVar26 + 0x15) = *(float *)(lVar17 + 0x110) / 100.0 <= *(float *)(lVar26 + 0x18);
    }
  }
LAB_1406a2cf4:
  uVar23 = uVar23 & ~(uint)uVar21;
  puVar12 = *(uint **)(param_1 + 0x170);
  if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
    puVar12 = local_180;
  }
  uVar35 = *(uint *)(param_1 + 0x178);
  iVar24 = (int)uVar25;
  lVar17 = (longlong)iVar24;
  uVar10 = puVar12[lVar17] & uVar23;
  iVar22 = local_1cc;
  if (uVar10 == 0) {
    iVar14 = uVar35 + 0x1e;
    if (-1 < (int)(uVar35 - 1)) {
      iVar14 = uVar35 - 1;
    }
    iVar14 = iVar14 >> 5;
    iVar22 = local_1cc + 0x20;
    iVar15 = iVar14;
    if (iVar14 < iVar24) {
      iVar15 = iVar24;
    }
    if (iVar24 < iVar14) {
      lVar20 = 0;
      do {
        uVar10 = puVar12[lVar17 + lVar20 + 1];
        if (uVar10 != 0) {
          uVar25 = (ulonglong)(iVar24 + (int)lVar20 + 1);
          uVar23 = 0xffffffff;
          goto LAB_1406a2d7b;
        }
        iVar22 = iVar22 + 0x20;
        lVar20 = lVar20 + 1;
      } while (iVar15 - lVar17 != lVar20);
      uVar23 = 0xffffffff;
      iVar24 = iVar15;
    }
    uVar25 = (ulonglong)(iVar24 + 1);
    uVar10 = uVar35;
  }
  else {
LAB_1406a2d7b:
    uVar21 = (ulonglong)(-uVar10 & uVar10);
    uVar13 = uVar21 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar10 = (iVar22 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar35 <= (int)uVar10) {
      uVar10 = uVar35;
    }
  }
  if (uVar10 == (uint)local_1c8) goto LAB_1406a2ea8;
  goto LAB_1406a257a;
}



// FUNCTION 1406a31d4 FUN_1406a31d4 body=2725 status=ok
// SIG undefined FUN_1406a31d4(void)

void FUN_1406a31d4(longlong param_1,double *param_2,char *param_3,char *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double _Y;
  double _X;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dd_00;
  double dVar13;
  double dVar14;
  double dVar15;
  double _Y_00;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined4 local_150 [2];
  undefined4 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  undefined4 local_120 [2];
  undefined4 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_108 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x68);
  local_f8 = *(undefined4 *)(param_1 + 0x70);
  uStack_f4 = *(undefined4 *)(param_1 + 0x74);
  uStack_f0 = *(undefined4 *)(param_1 + 0x78);
  uStack_ec = *(undefined4 *)(param_1 + 0x7c);
  FUN_1448052ee(&local_108,local_120);
  dVar3 = (double)FUN_144719204(local_120[0],0);
  dVar5 = (double)FUN_144719204(local_118,0);
  dVar1 = sin(dVar3 * 0.017453292519943295);
  local_190 = cos(dVar3 * 0.017453292519943295);
  dVar3 = sin(dVar5 * 0.017453292519943295);
  local_188 = cos(dVar5 * 0.017453292519943295);
  local_108 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x68);
  local_f8 = *(undefined4 *)(param_1 + 0x70);
  uStack_f4 = *(undefined4 *)(param_1 + 0x74);
  uStack_f0 = *(undefined4 *)(param_1 + 0x78);
  uStack_ec = *(undefined4 *)(param_1 + 0x7c);
  FUN_1448052ee(&local_108,&local_138);
  dVar5 = sin(local_138 * 0.01745329238474369);
  local_1a0 = sin(dStack_130 * 0.01745329238474369);
  local_1a8 = sin(local_128 * 0.01745329238474369);
  sin(0.0);
  cos(local_138 * 0.01745329238474369);
  dVar2 = cos(dStack_130 * 0.01745329238474369);
  local_1b8 = cos(local_128 * 0.01745329238474369);
  cos(0.0);
  local_108 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x68);
  local_f8 = *(undefined4 *)(param_1 + 0x70);
  uStack_f4 = *(undefined4 *)(param_1 + 0x74);
  uStack_f0 = *(undefined4 *)(param_1 + 0x78);
  uStack_ec = *(undefined4 *)(param_1 + 0x7c);
  FUN_1448052ee(&local_108,local_150);
  dVar6 = (double)FUN_144719204(local_150[0],0);
  dVar4 = (double)FUN_144719204(local_148,0);
  sin(dVar6 * 0.017453292519943295);
  dVar6 = cos(dVar6 * 0.017453292519943295);
  dVar13 = sin(dVar4 * 0.017453292519943295);
  local_158 = cos(dVar4 * 0.017453292519943295);
  dVar13 = dVar13 * dVar6;
  local_158 = local_158 * dVar6;
  local_1e8._8_4_ = extraout_XMM0_Dc;
  local_1e8._0_8_ = dVar13;
  local_1e8._12_4_ = extraout_XMM0_Dd;
  dVar6 = local_158 * local_158 + dVar13 * dVar13;
  local_1d8 = 1.0 / SQRT(dVar6);
  if (9.99999993922529e-09 < dVar6) {
    local_158 = local_158 * local_1d8;
  }
  else {
    local_158 = 0.0;
  }
  dVar15 = *(double *)(param_1 + 0x90) - param_2[2];
  dVar14 = *(double *)(param_1 + 0x88) - param_2[1];
  dVar4 = *(double *)(param_1 + 0x80) - *param_2;
  dVar13 = dVar15 * dVar15 + dVar4 * dVar4 + dVar14 * dVar14;
  if (((dVar13 != 1.0) || (_Y_00 = dVar15, _Y = dVar14, _X = dVar4, NAN(dVar13))) &&
     (_Y_00 = DAT_14c8464f0, _Y = DAT_14c8464e8, _X = DAT_14c8464e0, 9.99999993922529e-09 <= dVar13)
     ) {
    dVar13 = 1.0 / SQRT(dVar13);
    _Y_00 = dVar15 * dVar13;
    _Y = dVar14 * dVar13;
    _X = dVar4 * dVar13;
  }
  uVar16 = ~(uint)(-(ulonglong)(ABS(_Y_00) < 0.9998999834060669) >> 0x20) & 0x3ff00000;
  uVar17 = 0x3ff00000;
  if (0.9998999834060669 <= ABS(_Y_00)) {
    uVar17 = 0;
  }
  dVar4 = (double)((ulonglong)uVar16 << 0x20) * _Y + _X * -0.0;
  dVar14 = (double)((ulonglong)uVar17 << 0x20) * _X - _Y_00 * (double)((ulonglong)uVar16 << 0x20);
  dVar15 = _Y_00 * 0.0 - _Y * (double)((ulonglong)uVar17 << 0x20);
  dVar13 = dVar4 * dVar4 + dVar15 * dVar15 + dVar14 * dVar14;
  uStack_1d0 = 0;
  if (((dVar13 != 1.0) || (dVar7 = dVar4, dVar8 = dVar14, dVar9 = dVar15, NAN(dVar13))) &&
     (dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar9 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar13)) {
    dVar13 = 1.0 / SQRT(dVar13);
    dVar7 = dVar4 * dVar13;
    dVar8 = dVar14 * dVar13;
    dVar9 = dVar15 * dVar13;
  }
  local_1b0 = dVar2;
  local_198 = dVar5;
  local_180 = dVar1;
  local_178 = dVar3;
  if ((_X != -_X) || (NAN(_X) || NAN(-_X))) {
LAB_1406a3691:
    local_170 = dVar8 * _Y_00;
    local_168 = dVar7 * _X;
    local_160 = dVar9;
    dVar1 = atan2(_Y,_X);
    dVar1 = dVar1 * 57.29577951308232;
    uVar11 = extraout_XMM0_Dc_00;
    uVar12 = extraout_XMM0_Dd_00;
    dVar3 = local_160;
    dVar5 = local_168;
    dVar2 = local_170;
  }
  else {
    dVar1 = 0.0;
    uVar11 = 0;
    uVar12 = 0;
    if ((_Y != 0.0) || (dVar3 = dVar9, dVar5 = dVar7 * _X, dVar2 = dVar8 * _Y_00, NAN(_Y)))
    goto LAB_1406a3691;
  }
  local_1c8._8_4_ = uVar11;
  local_1c8._0_8_ = dVar1;
  local_1c8._12_4_ = uVar12;
  dVar13 = (double)local_1e8._0_8_ * local_1d8;
  local_1d8 = _Y_00 * dVar9 - dVar5;
  uStack_1d0 = 0;
  dVar5 = SQRT(_Y * _Y + _X * _X);
  dVar1 = 0.0;
  if ((((_Y_00 != 0.0) || (NAN(_Y_00))) || (dVar5 != 0.0)) || (NAN(dVar5))) {
    dVar1 = atan2(_Y_00,dVar5);
    dVar1 = dVar1 * 57.29577951308232;
  }
  local_1e8._8_8_ = 0;
  local_1e8._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar6) & (ulonglong)dVar13;
  dVar4 = (double)local_1c8._0_8_ * 0.01745329238474369;
  dVar5 = sin(dVar1 * 0.01745329238474369);
  dVar6 = sin(dVar4);
  dVar13 = cos(dVar1 * 0.01745329238474369);
  dVar4 = cos(dVar4);
  dVar14 = dVar5 * 0.0 * dVar4 - dVar6;
  dVar4 = dVar5 * 0.0 * dVar6 + dVar4;
  dVar5 = dVar7 * dVar13 * -0.0 + dVar3 * dVar14 + dVar8 * dVar4;
  dVar3 = (_X * dVar8 - dVar9 * _Y) * dVar13 * -0.0 +
          (_Y * dVar7 - dVar2) * dVar14 + local_1d8 * dVar4;
  if (((dVar3 != 0.0) || (NAN(dVar3))) || ((dVar5 != 0.0 || (NAN(dVar5))))) {
    atan2(dVar3,dVar5);
  }
  dVar5 = (double)FUN_144719204(SUB84(dVar1,0),0);
  uVar11 = local_1c8._0_4_;
  dVar6 = (double)FUN_144719204(local_1c8._0_4_,0);
  dVar3 = sin(dVar5 * 0.017453292519943295);
  dVar5 = cos(dVar5 * 0.017453292519943295);
  dVar2 = sin(dVar6 * 0.017453292519943295);
  dVar6 = cos(dVar6 * 0.017453292519943295);
  dVar1 = (double)FUN_144719204(SUB84(dVar1,0),0);
  dVar4 = (double)FUN_144719204(uVar11,0);
  sin(dVar1 * 0.017453292519943295);
  dVar1 = cos(dVar1 * 0.017453292519943295);
  dVar13 = sin(dVar4 * 0.017453292519943295);
  dVar4 = cos(dVar4 * 0.017453292519943295);
  dVar13 = dVar13 * dVar1;
  dVar4 = dVar4 * dVar1;
  dVar1 = dVar4 * dVar4 + dVar13 * dVar13;
  if (9.99999993922529e-09 < dVar1) {
    dVar4 = dVar4 * (1.0 / SQRT(dVar1));
  }
  else {
    dVar4 = 0.0;
  }
  dVar13 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar1) &
                   (ulonglong)(dVar13 * (1.0 / SQRT(dVar1))));
  dVar1 = local_158 * dVar4 + (double)local_1e8._0_8_ * dVar13;
  fVar10 = (float)dVar1;
  if (fVar10 < -1.0) {
    dVar14 = -1.0;
  }
  else {
    dVar14 = (double)fVar10;
    if (1.0 <= dVar14) {
      dVar14 = 1.0;
    }
  }
  dVar14 = acos(dVar14);
  if ((float)(dVar14 * 57.29577951308232) < 120.0) {
    fVar10 = (float)((local_188 * local_190 * dVar2 * dVar5 - dVar6 * dVar5 * local_178 * local_190)
                     * DAT_14c8462d0 +
                    (local_178 * local_190 * dVar3 - dVar2 * dVar5 * local_180) * DAT_14c8462c0 +
                    (local_180 * dVar6 * dVar5 - dVar3 * local_188 * local_190) * DAT_14c8462c8);
    if (fVar10 <= 0.0) {
      fVar10 = 100.0;
      if (*(int *)(param_3 + 4) == 0 || *param_3 == '\0') {
        *param_3 = '\x01';
        *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      }
      goto LAB_1406a3af2;
    }
    if (0.0 <= fVar10) {
      fVar10 = -100.0;
      if (*(int *)(param_4 + 4) == 0 || *param_4 == '\0') {
        *param_4 = '\x01';
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      goto LAB_1406a3af2;
    }
  }
  dVar1 = ((double)(float)(((local_198 * local_1a8 * local_1b0 - local_1a0 * local_1b8) * dVar4 +
                           (local_198 * local_1a8 * local_1a0 + local_1b0 * local_1b8) * dVar13) /
                          dVar1) + 1.5707963705062866) / 3.1415927410125732;
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  fVar10 = (float)(dVar1 * 50.0 + -25.0);
LAB_1406a3af2:
  if ((local_e0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar10);
  }
  return;
}



// FUNCTION 1406a3c7a FUN_1406a3c7a body=210 status=ok
// SIG undefined FUN_1406a3c7a(void)

void FUN_1406a3c7a(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0x240);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa0));
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  FUN_1406a3ecc(param_1,&local_40);
  cVar4 = FUN_140775538(lVar3 + 8,&local_40);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (cVar4 != '\0') {
    *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + 1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa0));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a3d4e FUN_1406a3d4e body=381 status=ok
// SIG undefined FUN_1406a3d4e(void)

void FUN_1406a3d4e(longlong param_1,longlong param_2,longlong param_3,double *param_4)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_3 + 0x120) == '\x01') {
    lVar1 = FUN_1400d7050(param_1 + 0x30);
    if (lVar1 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_60 = &local_40;
        local_40 = FUN_141030f22;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_1459f2e4c;
        local_68 = &LAB_148c39de3;
        local_70 = &LAB_1457a9eb2;
        local_78 = &DAT_149e063b2;
        local_80 = 0;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        local_30 = param_4[2] - *(double *)(param_1 + 0x90);
        local_38 = param_4[1] - *(double *)(param_1 + 0x88);
        local_40 = (code *)(*param_4 - *(double *)(param_1 + 0x80));
        FUN_14021d556(lVar1,&local_40,param_2 + 0x30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a3ecc FUN_1406a3ecc body=1448 status=ok
// SIG undefined FUN_1406a3ecc(void)

undefined8 * FUN_1406a3ecc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140192332(param_1 + 0x29,local_48,0);
  plVar8 = local_48[0];
  if (local_48[0] != (longlong *)0x0) {
    plVar10 = local_48[0] + 0x76;
    uVar5 = (**(code **)(local_48[0][0x76] + 0x20))(plVar10);
    lVar6 = FUN_145838c02(uVar5);
    if (lVar6 != 0) {
      uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10);
      lVar6 = FUN_145838c02(uVar5);
      uVar5 = FUN_14125b292();
      cVar4 = FUN_1448093f4(lVar6,uVar5);
      if ((lVar6 != 0) && (cVar4 != '\0')) {
        plVar10 = *(longlong **)(lVar6 + 0x18);
        if (*(code **)(*plVar10 + 0x50) != FUN_144828418) {
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))();
        }
        FUN_1447a1fc0(plVar10);
        plVar10 = *(longlong **)(lVar6 + 0x18);
        pcVar2 = *(code **)(*plVar10 + 0x28);
        if (pcVar2 == FUN_14482841c) {
          plVar9 = plVar10 + 3;
          if (plVar10[5] != 0) {
            plVar9 = (longlong *)(plVar10[5] + 8);
          }
        }
        else if (pcVar2 == (code *)&LAB_14010c34c) {
          plVar9 = plVar10 + 2;
        }
        else {
          plVar9 = (longlong *)(*pcVar2)(plVar10);
        }
        if (1 < (int)plVar9[1]) {
          plVar10 = *(longlong **)(lVar6 + 0x18);
          if (*(code **)(*plVar10 + 0x50) != FUN_144828418) {
            plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))();
          }
          FUN_1447a1fc0(plVar10);
          plVar10 = *(longlong **)(lVar6 + 0x18);
          pcVar2 = *(code **)(*plVar10 + 0x28);
          if (pcVar2 == FUN_14482841c) {
            plVar9 = plVar10 + 3;
            if (plVar10[5] != 0) {
              plVar9 = (longlong *)(plVar10[5] + 8);
            }
          }
          else if (pcVar2 == (code *)&LAB_14010c34c) {
            plVar9 = plVar10 + 2;
          }
          else {
            plVar9 = (longlong *)(*pcVar2)(plVar10);
          }
          *param_2 = 0;
          iVar1 = (int)plVar9[1];
          pvVar3 = (void *)*plVar9;
          *(int *)(param_2 + 1) = iVar1;
          if ((longlong)iVar1 == 0) {
            *(undefined4 *)((longlong)param_2 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(param_2,iVar1,0);
            memcpy((void *)*param_2,pvVar3,(longlong)iVar1 * 2);
          }
          if (DAT_14c872a72 == '\0') {
            FUN_140113f48(plVar8);
            goto LAB_1406a441b;
          }
          goto LAB_1406a41c2;
        }
      }
    }
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48(plVar8);
    }
  }
  if ((param_1[0x3f] != 0) && (lVar6 = FUN_140f5ab1e(), lVar6 != 0)) {
    uVar5 = FUN_14125b292();
    cVar4 = FUN_1448093f4(lVar6,uVar5);
    if (cVar4 != '\0') {
      plVar8 = *(longlong **)(lVar6 + 0x18);
      if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
      }
      FUN_1447a1fc0(plVar8);
      plVar8 = *(longlong **)(lVar6 + 0x18);
      pcVar2 = *(code **)(*plVar8 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        plVar10 = plVar8 + 3;
        if (plVar8[5] != 0) {
          plVar10 = (longlong *)(plVar8[5] + 8);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        plVar10 = plVar8 + 2;
      }
      else {
        plVar10 = (longlong *)(*pcVar2)(plVar8);
      }
      if (1 < (int)plVar10[1]) {
        plVar8 = *(longlong **)(lVar6 + 0x18);
        if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
        }
        FUN_1447a1fc0(plVar8);
        plVar8 = *(longlong **)(lVar6 + 0x18);
        pcVar2 = *(code **)(*plVar8 + 0x28);
        if (pcVar2 == FUN_14482841c) {
          plVar10 = plVar8 + 3;
          if (plVar8[5] != 0) {
            plVar10 = (longlong *)(plVar8[5] + 8);
          }
        }
        else if (pcVar2 == (code *)&LAB_14010c34c) {
          plVar10 = plVar8 + 2;
        }
        else {
          plVar10 = (longlong *)(*pcVar2)(plVar8);
        }
        *param_2 = 0;
        iVar1 = (int)plVar10[1];
        pvVar3 = (void *)*plVar10;
        *(int *)(param_2 + 1) = iVar1;
        if ((longlong)iVar1 != 0) {
          FUN_1446dd670(param_2,iVar1,0);
          memcpy((void *)*param_2,pvVar3,(longlong)iVar1 * 2);
          goto LAB_1406a441b;
        }
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        goto LAB_1406a41c2;
      }
    }
  }
  plVar8 = (longlong *)param_1[0x3e];
  if ((plVar8 == (longlong *)0x0) &&
     (((lVar6 = (**(code **)(*param_1 + 0x180))(param_1), lVar6 == 0 ||
       (lVar6 = FUN_14067bb54(lVar6), lVar6 == 0)) ||
      (plVar8 = (longlong *)FUN_1457331aa(lVar6), plVar8 == (longlong *)0x0)))) {
    lVar7 = FUN_14073fae1();
    lVar6 = *(longlong *)(lVar7 + 0x188);
    if (lVar6 == 0) {
      uVar5 = FUN_141030812();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(lVar7 + 0x188) = lVar6;
    }
    plVar8 = *(longlong **)(lVar7 + 400);
    if (plVar8 != (longlong *)0x0) goto LAB_1406a40b7;
    if ((lVar6 != 0) && (*(longlong *)(lVar7 + 0x180) != 0)) {
      plVar8 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
        *(undefined8 *)(lVar7 + 400) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
        plVar8 = (longlong *)FUN_144aff482(uVar5,(longlong *)(lVar7 + 0x180));
        *(longlong **)(lVar7 + 400) = plVar8;
        if (plVar8 != (longlong *)0x0) goto LAB_1406a40b7;
      }
    }
LAB_1406a440c:
    FUN_140056680(param_2,&DAT_149dfb77a);
LAB_1406a441b:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
LAB_1406a40b7:
  lVar6 = (**(code **)(*plVar8 + 8))(plVar8);
  lVar7 = FUN_14086ad12();
  if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    cVar4 = FUN_14435e60a(plVar8,uVar5);
    if (cVar4 == '\0') goto LAB_1406a440c;
  }
  (**(code **)(*plVar8 + 0x18))(plVar8,local_48);
  plVar8 = local_48[0];
  if (*(code **)(*local_48[0] + 0x50) != FUN_144828418) {
    plVar8 = (longlong *)(**(code **)(*local_48[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar8);
  pcVar2 = *(code **)(*local_48[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar8 = local_48[0] + 3;
    if (local_48[0][5] != 0) {
      plVar8 = (longlong *)(local_48[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar8 = local_48[0] + 2;
  }
  else {
    plVar8 = (longlong *)(*pcVar2)(local_48[0]);
  }
  *param_2 = 0;
  iVar1 = (int)plVar8[1];
  pvVar3 = (void *)*plVar8;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,pvVar3,(longlong)iVar1 * 2);
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
LAB_1406a41c2:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a4476 FUN_1406a4476 body=784 status=ok
// SIG undefined FUN_1406a4476(void)

void FUN_1406a4476(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 unaff_RDI;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + -0x28);
  local_80 = param_1;
  plVar6 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x28) + 0x2b0))(plVar1);
  if (((plVar6 == (longlong *)0x0) || ((char)plVar6[0x25] != '\x04')) ||
     (*(longlong *)(param_2 + 0x10) == 0)) goto LAB_1406a468f;
  if ((*(byte *)(plVar6 + 0x41) & 1) == 0) {
LAB_1406a4704:
    uVar5 = 0;
LAB_1406a454a:
    lVar8 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x28))
                      (*(longlong **)(param_2 + 0x10),plVar1);
    if (lVar8 == 0) goto LAB_1406a468f;
    plVar7 = plVar1;
    if (param_3 < 1.0) {
      plVar7 = plVar6;
    }
    local_84 = uVar5;
    FUN_1406a4a16(lVar8,plVar7,*(undefined4 *)(param_2 + 0x3090));
    local_88 = (**(code **)(*plVar1 + 0x3f0))(plVar1,plVar6);
    uVar5 = (**(code **)(*plVar1 + 1000))(plVar1,plVar6);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca19610) && (FUN_144b3d300(&DAT_14ca19610), DAT_14ca19610 == -1)) {
      FUN_1446f470e(&DAT_14ca19608,L"FPostProcessMaterialNode",1);
      _Init_thread_footer(&DAT_14ca19610);
    }
    uVar3 = DAT_14ca19608;
    lVar10 = *(longlong *)(param_2 + 0x2fd8);
    iVar2 = *(int *)(param_2 + 0x2fe0);
    lVar14 = (longlong)iVar2;
    uVar11 = lVar10 + lVar14 + 0x14;
    uVar9 = lVar10 + lVar14 + 0x1b;
    if (-1 < (longlong)uVar11) {
      uVar9 = uVar11;
    }
    lVar12 = uVar11 - (uVar9 & 0xfffffffffffffff8);
    uVar13 = 0;
    if (lVar12 != 0) {
      uVar13 = 8 - (int)lVar12;
    }
    *(uint *)(param_2 + 0x2fe0) = uVar13 + 0x2c + iVar2;
    if ((uint)(*(int *)(param_2 + 0x2fe4) - iVar2) < uVar13 + 0x2c) {
      FUN_1447403be((longlong *)(param_2 + 0x2fd8),iVar2);
      lVar10 = *(longlong *)(param_2 + 0x2fd8);
    }
    lVar12 = lVar10 + lVar14;
    *(undefined4 *)(lVar10 + lVar14) = 0x3f800000;
    *(undefined8 *)(lVar10 + 4 + lVar14) = uVar3;
    *(undefined4 *)(lVar10 + 0xc + lVar14) = 0x18;
    *(uint *)(lVar10 + 0x10 + lVar14) = uVar13;
    uVar9 = (ulonglong)uVar13;
    *(longlong *)(uVar9 + 0x14 + lVar12) = lVar8;
    *(undefined1 *)(uVar9 + 0x1c + lVar12) = 1;
    *(undefined4 *)(uVar9 + 0x20 + lVar12) = uVar5;
    *(undefined4 *)(uVar9 + 0x24 + lVar12) = local_88;
    *(char *)(uVar9 + 0x28 + lVar12) = (char)local_84;
    if ((plVar1 == plVar6 || 1.0 <= param_3) || (uVar9 + lVar12 == -0x14)) goto LAB_1406a468f;
  }
  else {
    local_78 = 0;
    if ((char)plVar6[0x3b] != '\x03') {
      cVar4 = (**(code **)(*plVar1 + 0x3e0))(plVar1,&local_78);
      if (cVar4 == '\0') {
        local_78 = *(longlong *)((longlong)plVar6 + 0x1dc);
      }
      if (local_78 != 0) goto LAB_1406a4704;
    }
    plVar7 = (longlong *)FUN_1406a47a0(param_2 + 0x2510,plVar1,plVar6);
    uVar5 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (plVar7 == (longlong *)0x0) goto LAB_1406a454a;
    lVar8 = *plVar7;
  }
  lVar10 = FUN_1411eefea();
  if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(local_80 + -0x18) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(local_80 + -0x18) + 0x30) +
       (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
    FUN_147bbca12(lVar8,lVar8,plVar1,param_3);
  }
LAB_1406a468f:
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406a47a0 FUN_1406a47a0 body=509 status=ok
// SIG undefined FUN_1406a47a0(void)

undefined8 * FUN_1406a47a0(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (**(code **)(*param_2 + 1000))(param_2,param_3);
  iVar3 = (**(code **)(*param_2 + 0x3f0))(param_2,param_3);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca19610) && (FUN_144b3d300(&DAT_14ca19610), DAT_14ca19610 == -1)) {
    FUN_1446f470e(&DAT_14ca19608,L"FPostProcessMaterialNode");
    _Init_thread_footer(&DAT_14ca19610);
  }
  lVar4 = 0;
  while( true ) {
    lVar5 = *(longlong *)(param_1 + 0xac8);
    if (lVar4 != 0) {
      lVar5 = (ulonglong)*(uint *)(lVar4 + 0xc) + (ulonglong)*(uint *)(lVar4 + 0x10) + lVar4 + 0x14;
    }
    lVar4 = lVar5;
    if (lVar4 == 0 || lVar4 == (longlong)*(int *)(param_1 + 0xad0) + *(longlong *)(param_1 + 0xac8))
    break;
    if (*(longlong *)(lVar4 + 4) == DAT_14ca19608) {
      lVar5 = (ulonglong)*(uint *)(lVar4 + 0x10) + lVar4;
      while( true ) {
        puVar1 = (undefined8 *)(lVar5 + 0x14);
        if (puVar1 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        if ((((*(char *)(lVar5 + 0x28) == '\x01') && (*(int *)(lVar5 + 0x20) == iVar2)) &&
            (*(int *)(puVar1 + 2) == iVar3)) &&
           (lVar5 = (**(code **)(*(longlong *)*puVar1 + 0x2b8))(), lVar5 == param_3)) break;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca19610) &&
           (FUN_144b3d300(&DAT_14ca19610), DAT_14ca19610 == -1)) {
          FUN_1446f470e(&DAT_14ca19608,L"FPostProcessMaterialNode",1);
          _Init_thread_footer(&DAT_14ca19610);
        }
        do {
          lVar5 = (ulonglong)*(uint *)(lVar4 + 0xc) + (ulonglong)*(uint *)(lVar4 + 0x10) + lVar4;
          lVar4 = lVar5 + 0x14;
          if (lVar4 == (longlong)*(int *)(param_1 + 0xad0) + *(longlong *)(param_1 + 0xac8) ||
              lVar4 == 0) {
            return (undefined8 *)0x0;
          }
        } while (*(longlong *)(lVar5 + 0x18) != DAT_14ca19608);
        lVar5 = (ulonglong)*(uint *)(lVar5 + 0x24) + lVar4;
      }
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1406a4a16 FUN_1406a4a16 body=1636 status=ok
// SIG undefined FUN_1406a4a16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406a4a16(longlong *param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined8 *local_190;
  undefined1 *local_188;
  code *local_180;
  longlong local_170;
  int *local_168;
  longlong local_160;
  longlong local_158;
  int local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined8 local_120;
  undefined1 local_118;
  int local_114;
  longlong local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar4 = (**(code **)(*param_1 + 0x350))(param_1,param_3,4);
  if (lVar4 != 0) {
    FUN_1406a5d86(param_1,1);
    FUN_1406a594c(lVar4,&local_158);
    local_160 = (longlong)local_150;
    if (0 < local_160) {
      local_168 = (int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
      lVar10 = 0;
      local_170 = lVar4;
      do {
        piVar11 = (int *)(lVar10 * 0x1c + local_158);
        local_58 = CONCAT71(local_58._1_7_,0xff);
        local_50 = 0xffffffff;
        local_4c = 0;
        lVar12 = param_2;
        if (param_2 != 0) {
LAB_1406a4afd:
          if (DAT_14caec308 == 0) {
            local_120 = FUN_1417df956;
            local_180 = FUN_14081d0ea;
            local_188 = &LAB_146386466;
            local_198 = &LAB_147bb408b;
            local_1a0 = &LAB_1463eaa15;
            local_1a8 = L"Engine";
            local_1b0 = 0;
            local_1b8 = 0x10000001;
            local_1c0 = 8;
            local_1c8 = 0x2e0;
            local_190 = &local_120;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
          }
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(DAT_14caec308 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) != DAT_14caec308 + 0x30))
          goto LAB_1406a4c1a;
          if ((char)piVar11[5] == '\x03') {
            uVar5 = (ulonglong)*(int *)(lVar12 + 0x1b8);
            if (0 < (longlong)uVar5) {
              plVar6 = (longlong *)(*(longlong *)(lVar12 + 0x1b0) + 0x10);
              bVar13 = true;
              uVar9 = 1;
              do {
                if ((((*plVar6 != 0) && (*piVar11 == (int)plVar6[-2])) &&
                    (piVar11[2] == (int)((ulonglong)plVar6[-2] >> 0x20))) &&
                   ((*(int *)((longlong)plVar6 + -4) == piVar11[3] &&
                    ((char)plVar6[-1] == (char)piVar11[4])))) {
                  local_58 = CONCAT71(local_58._1_7_,3);
                  local_78 = *plVar6;
                  break;
                }
                bVar13 = uVar9 < uVar5;
                plVar6 = plVar6 + 5;
                bVar14 = uVar9 != uVar5;
                uVar9 = uVar9 + 1;
              } while (bVar14);
              goto LAB_1406a4bc9;
            }
            goto switchD_1406a4d3c_caseD_3;
          }
          switch((char)piVar11[5]) {
          case '\0':
            uVar5 = (ulonglong)*(int *)(lVar12 + 0x188);
            if ((longlong)uVar5 < 1) goto switchD_1406a4d3c_caseD_3;
            puVar7 = (undefined4 *)(*(longlong *)(lVar12 + 0x180) + 0x10);
            bVar13 = true;
            uVar9 = 1;
            do {
              if ((((*piVar11 == (int)*(undefined8 *)(puVar7 + -4)) &&
                   (piVar11[2] == (int)((ulonglong)*(undefined8 *)(puVar7 + -4) >> 0x20))) &&
                  (puVar7[-1] == piVar11[3])) && (*(char *)(puVar7 + -2) == (char)piVar11[4])) {
                local_78 = CONCAT44(local_78._4_4_,*puVar7);
                local_58 = (ulonglong)local_58._1_7_ << 8;
                break;
              }
              bVar13 = uVar9 < uVar5;
              puVar7 = puVar7 + 9;
              bVar14 = uVar9 != uVar5;
              uVar9 = uVar9 + 1;
            } while (bVar14);
LAB_1406a4bc9:
            lVar4 = local_170;
            if (bVar13) goto LAB_1406a4cc6;
            goto switchD_1406a4d3c_caseD_3;
          case '\x01':
            uVar5 = (ulonglong)*(int *)(lVar12 + 0x198);
            if (0 < (longlong)uVar5) {
              puVar7 = (undefined4 *)(*(longlong *)(lVar12 + 400) + 0x1c);
              bVar13 = true;
              uVar9 = 1;
              do {
                if (((*piVar11 == (int)*(undefined8 *)(puVar7 + -7)) &&
                    (piVar11[2] == (int)((ulonglong)*(undefined8 *)(puVar7 + -7) >> 0x20))) &&
                   ((puVar7[-4] == piVar11[3] && (*(char *)(puVar7 + -5) == (char)piVar11[4])))) {
                  local_78 = *(longlong *)(puVar7 + -3);
                  uStack_70 = puVar7[-1];
                  uStack_6c = *puVar7;
                  local_58 = CONCAT71(local_58._1_7_,1);
                  break;
                }
                bVar13 = uVar9 < uVar5;
                puVar7 = puVar7 + 0xc;
                bVar14 = uVar9 != uVar5;
                uVar9 = uVar9 + 1;
              } while (bVar14);
              goto LAB_1406a4bc9;
            }
            goto switchD_1406a4d3c_caseD_3;
          case '\x02':
            cVar1 = FUN_147bb4227(lVar12 + 0x1a0,piVar11,&local_78);
            break;
          default:
            goto switchD_1406a4d3c_caseD_3;
          case '\x04':
            cVar1 = FUN_147bb42b0(lVar12 + 0x1c0,piVar11,&local_78);
            break;
          case '\x05':
            cVar1 = FUN_147bb4445(lVar12 + 0x1f0,piVar11,&local_78);
            break;
          case '\x06':
            cVar1 = FUN_147bb4337(lVar12 + 0x1d0,piVar11,&local_78);
            break;
          case '\a':
            cVar1 = FUN_147bb43be(lVar12 + 0x1e0,piVar11,&local_78);
            break;
          case '\b':
            cVar1 = FUN_147bb44f6(lVar12 + 0x250,piVar11,&local_78);
          }
          if (cVar1 != '\0') goto LAB_1406a4cc6;
switchD_1406a4d3c_caseD_3:
          plVar6 = (longlong *)(lVar12 + 0x110);
          lVar12 = *plVar6;
          if (*plVar6 == 0) goto LAB_1406a4c1a;
          goto LAB_1406a4afd;
        }
LAB_1406a4c1a:
        if ((DAT_14c86a9f8 == '\x01') && (*local_168 != 2)) {
          lVar12 = 0x18;
          if (*local_168 == 1) {
            DVar2 = FUN_140ad26c0();
            DVar3 = GetCurrentThreadId();
            if (DVar2 == DVar3) goto LAB_1406a4d18;
          }
        }
        else {
LAB_1406a4d18:
          lVar12 = 0x10;
        }
        if (*(longlong *)(lVar4 + lVar12) == 0) {
          puVar8 = &DAT_14caefcd8;
          lVar4 = local_170;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14caefe90) &&
             (FUN_144b3d300(&DAT_14caefe90), lVar4 = local_170, DAT_14caefe90 == -1)) {
            puVar8 = &DAT_14caefcd8;
            memset(&DAT_14caefcd8,0,0xc4);
            memset(&DAT_14caefda0,0,0xe8);
            _DAT_14caefe88 = 0x1ffffff;
            DAT_14caefe8c = 0;
            atexit((_func_5014 *)&LAB_14357c04e);
            _Init_thread_footer(&DAT_14caefe90);
          }
        }
        else {
          puVar8 = (undefined *)(*(longlong *)(*(longlong *)(lVar4 + lVar12) + 0x28) + 0x70);
        }
        FUN_1406a507c(puVar8,&local_120,(char)piVar11[5],piVar11[6]);
        FUN_1406a50f8(&local_148,(char)piVar11[5],&local_120);
        local_78 = CONCAT44(uStack_144,local_148);
        uStack_70 = uStack_140;
        uStack_6c = uStack_13c;
        local_68 = local_138;
        uStack_64 = uStack_134;
        uStack_60 = uStack_130;
        uStack_5c = uStack_12c;
        local_58 = local_128;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
LAB_1406a4cc6:
        local_120 = (code *)CONCAT44(piVar11[2],*piVar11);
        local_118 = (undefined1)piVar11[4];
        local_114 = piVar11[3];
        FUN_1406a551e(param_1,&local_120,&local_78);
        lVar10 = lVar10 + 1;
      } while (lVar10 != local_160);
    }
    FUN_1403ba93c(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a507c FUN_1406a507c body=122 status=ok
// SIG undefined FUN_1406a507c(void)

undefined8 FUN_1406a507c(longlong param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_1 + 0x108);
  if ((uVar1 & 1) != 0) {
    uVar1 = ((longlong)uVar1 >> 0x18) + param_1 + 0x108;
  }
  FUN_1406a52ba(local_38,param_3);
  FUN_1406a51d8(param_2,local_28,(param_4 & 0xffffffff) + uVar1,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a50f8 FUN_1406a50f8 body=223 status=ok
// SIG undefined FUN_1406a50f8(void)

undefined4 * FUN_1406a50f8(undefined4 *param_1,char param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\0') {
    uVar2 = FUN_1406a53a8(param_3);
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    switch(param_2) {
    case '\x01':
      FUN_1406a5c02(param_3,&local_38);
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      *(undefined1 *)(param_1 + 8) = 1;
      break;
    case '\x02':
      FUN_147d0d144(param_3,&local_38);
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      *(undefined8 *)(param_1 + 4) = local_28;
      *(undefined8 *)(param_1 + 6) = uStack_20;
      *(undefined1 *)(param_1 + 8) = 2;
      break;
    default:
      *(undefined1 *)(param_1 + 8) = 0xff;
      break;
    case '\b':
      uVar1 = FUN_147d0d45a(param_3);
      *(undefined1 *)param_1 = uVar1;
      *(undefined1 *)(param_1 + 8) = 8;
      break;
    case '\t':
      FUN_147d0d2e6(param_3,&local_38);
      *param_1 = local_38;
      *(undefined1 *)(param_1 + 8) = 9;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a51d8 FUN_1406a51d8 body=226 status=ok
// SIG undefined FUN_1406a51d8(void)

undefined8 * FUN_1406a51d8(undefined8 *param_1,byte param_2,void *param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong _Size;
  void *_Src;
  
  uVar4 = 0x1c;
  if (param_2 < 0x1c) {
    uVar4 = (uint)param_2;
  }
  uVar4 = uVar4 << 4;
  cVar1 = (&DAT_14aa842ba)[uVar4];
  uVar6 = (uint)cVar1;
  cVar2 = (&DAT_14aa842bb)[uVar4];
  uVar3 = FUN_14484659f((&DAT_14aa842b9)[uVar4],uVar6);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[0x13] = 0;
  param_1[0x14] = 0x1000000000;
  FUN_140137cf2(param_1 + 3,uVar6);
  _Src = param_3;
  if (('\0' < cVar1) && (cVar2 != '\0')) {
    _Size = (ulonglong)(uint)(int)cVar2;
    uVar7 = 0;
    do {
      puVar5 = (undefined8 *)param_1[0x13];
      if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
        puVar5 = param_1 + 3;
      }
      memcpy(puVar5 + uVar7,_Src,_Size);
      _Src = (void *)((longlong)_Src + _Size);
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (int)_Src - (int)param_3;
  }
  return param_1;
}



// FUNCTION 1406a52ba FUN_1406a52ba body=234 status=ok
// SIG undefined FUN_1406a52ba(void)

undefined8 * FUN_1406a52ba(undefined8 *param_1,char param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    switch(param_2) {
    case '\x01':
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 4;
      break;
    case '\x02':
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 8;
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      FUN_1446f470e(&local_20,L"FMaterialTextureValue",1);
      *param_1 = 0;
      param_1[1] = local_20;
      uVar1 = 0x1a;
      if (local_20 == 0) {
        uVar1 = 0;
      }
      *(undefined1 *)(param_1 + 2) = uVar1;
      break;
    default:
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    case '\b':
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 0xd;
      break;
    case '\t':
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 0x10;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a53a8 FUN_1406a53a8 body=373 status=ok
// SIG undefined FUN_1406a53a8(void)

void FUN_1406a53a8(longlong param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  double *pdVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auStack_38 [32];
  float local_18 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar3 = 0x1c;
  if ((byte)*(uint *)(param_1 + 0x10) < 0x1c) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  uVar3 = (uVar3 & 0xff) << 4;
  cVar1 = (&DAT_14aa842ba)[uVar3];
  if ((longlong)cVar1 == 1) {
    pdVar4 = (double *)(param_1 + 0x18);
    if (*(double **)(param_1 + 0x98) != (double *)0x0) {
      pdVar4 = *(double **)(param_1 + 0x98);
    }
    cVar1 = (&DAT_14aa842b9)[uVar3];
    if (cVar1 == '\x01') {
      local_18[0] = *(float *)pdVar4;
      local_18[1] = local_18[0];
      local_18[2] = local_18[0];
      local_18[3] = local_18[0];
    }
    else if (cVar1 == '\x02') {
      local_18[0] = (float)*pdVar4;
      local_18[1] = local_18[0];
      local_18[2] = local_18[0];
      local_18[3] = local_18[0];
    }
    else if (cVar1 == '\x03') {
      local_18[0] = (float)*(int *)pdVar4;
      local_18[1] = local_18[0];
      local_18[2] = local_18[0];
      local_18[3] = local_18[0];
    }
    else {
      local_18[0] = 0.0;
      local_18[1] = local_18[0];
      local_18[2] = local_18[0];
      local_18[3] = local_18[0];
      if (cVar1 == '\x04') {
        local_18[0] = (float)*(byte *)pdVar4;
        local_18[1] = local_18[0];
        local_18[2] = local_18[0];
        local_18[3] = local_18[0];
      }
    }
  }
  else {
    uVar6 = 4;
    if (cVar1 < '\x04') {
      uVar6 = (int)cVar1;
    }
    if ('\0' < cVar1) {
      cVar2 = (&DAT_14aa842b9)[uVar3];
      lVar5 = param_1 + 0x18;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x98);
      }
      uVar7 = 0;
      do {
        if (cVar2 == '\x02') {
          fVar8 = (float)*(double *)(lVar5 + uVar7 * 8);
        }
        else if (cVar2 == '\x01') {
          fVar8 = *(float *)(lVar5 + uVar7 * 8);
        }
        else if (cVar2 == '\x03') {
          fVar8 = (float)*(int *)(lVar5 + uVar7 * 8);
        }
        else {
          fVar8 = 0.0;
          if (cVar2 == '\x04') {
            fVar8 = (float)*(byte *)(lVar5 + uVar7 * 8);
          }
        }
        local_18[uVar7] = fVar8;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
      if ('\x03' < cVar1) goto LAB_1406a5412;
    }
    memset(local_18 + cVar1,0,(ulonglong)(3 - uVar6) * 4 + 4);
  }
LAB_1406a5412:
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18[0]);
  }
  return;
}



// FUNCTION 1406a551e FUN_1406a551e body=793 status=ok
// SIG undefined FUN_1406a551e(void)

void FUN_1406a551e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 uVar13;
  
  if ((char)param_3[4] == '\0') {
    uVar13 = (undefined4)*param_3;
    iVar4 = *(int *)(param_1 + 0x188);
    *(uint *)(param_1 + 0x188) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x18c) < iVar4 + 1U) {
      FUN_1406a5a8c((longlong *)(param_1 + 0x180),iVar4);
    }
    uVar7 = param_2[1];
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar4 * 0x24);
    puVar10 = (undefined8 *)((longlong)puVar1 + 0x14);
    *puVar1 = *param_2;
    puVar1[1] = uVar7;
LAB_1406a558a:
    *(undefined4 *)((longlong)puVar10 + -4) = uVar13;
    goto LAB_1406a558f;
  }
  switch((char)param_3[4]) {
  case '\x01':
    uVar13 = *(undefined4 *)((longlong)param_3 + 0xc);
    lVar12 = param_3[1];
    lVar5 = *param_3;
    uVar3 = *(undefined4 *)((longlong)param_3 + 4);
    iVar4 = *(int *)(param_1 + 0x198);
    *(uint *)(param_1 + 0x198) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x19c) < iVar4 + 1U) {
      FUN_1406a5838((longlong *)(param_1 + 400),iVar4);
    }
    uVar7 = param_2[1];
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 400) + (longlong)iVar4 * 0x30);
    puVar10 = puVar1 + 4;
    *puVar1 = *param_2;
    puVar1[1] = uVar7;
    *(int *)(puVar1 + 2) = (int)lVar5;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar3;
    *(int *)(puVar1 + 3) = (int)lVar12;
    goto LAB_1406a558a;
  case '\x02':
    lVar12 = param_3[3];
    lVar5 = param_3[2];
    lVar8 = *param_3;
    lVar9 = param_3[1];
    iVar4 = *(int *)(param_1 + 0x1a8);
    *(uint *)(param_1 + 0x1a8) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1ac) < iVar4 + 1U) {
      FUN_147bbb00e((longlong *)(param_1 + 0x1a0),iVar4);
    }
    uVar7 = param_2[1];
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar4 * 0x40);
    puVar10 = puVar1 + 6;
    *puVar1 = *param_2;
    puVar1[1] = uVar7;
    puVar1[2] = lVar8;
    puVar1[3] = lVar9;
    puVar1[4] = lVar5;
    puVar1[5] = lVar12;
    goto LAB_1406a558f;
  case '\x03':
    plVar11 = (longlong *)(param_1 + 0x1b0);
    iVar4 = *(int *)(param_1 + 0x1b8);
    lVar12 = (longlong)iVar4;
    *(uint *)(param_1 + 0x1b8) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1bc) < iVar4 + 1U) {
      FUN_1417e03e8(plVar11,iVar4);
    }
    break;
  case '\x04':
    plVar11 = (longlong *)(param_1 + 0x1c0);
    iVar4 = *(int *)(param_1 + 0x1c8);
    lVar12 = (longlong)iVar4;
    *(uint *)(param_1 + 0x1c8) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1cc) < iVar4 + 1U) {
      FUN_147bbb094(plVar11,iVar4);
    }
    break;
  case '\x05':
    iVar4 = *(int *)(param_1 + 0x1f8);
    *(uint *)(param_1 + 0x1f8) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1fc) < iVar4 + 1U) {
      FUN_1463eac36((longlong *)(param_1 + 0x1f0),iVar4);
    }
    lVar12 = *(longlong *)(param_1 + 0x1f0);
    lVar9 = (longlong)iVar4 * 0x30;
    lVar8 = param_3[1];
    lVar5 = *param_3;
    uVar13 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
    puVar2 = (undefined4 *)(lVar12 + lVar9);
    *puVar2 = *(undefined4 *)param_2;
    puVar2[1] = uVar13;
    puVar2[2] = uVar3;
    puVar2[3] = uVar6;
    *(longlong *)(lVar12 + 0x10 + lVar9) = lVar5;
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    *(int *)(lVar12 + lVar9 + 0x18) = (int)lVar8;
    puVar10 = (undefined8 *)(lVar12 + lVar9 + 0x1c);
    goto LAB_1406a558f;
  case '\x06':
    plVar11 = (longlong *)(param_1 + 0x1d0);
    iVar4 = *(int *)(param_1 + 0x1d8);
    lVar12 = (longlong)iVar4;
    *(uint *)(param_1 + 0x1d8) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1dc) < iVar4 + 1U) {
      FUN_147bbb128(plVar11,iVar4);
    }
    break;
  case '\a':
    plVar11 = (longlong *)(param_1 + 0x1e0);
    iVar4 = *(int *)(param_1 + 0x1e8);
    lVar12 = (longlong)iVar4;
    *(uint *)(param_1 + 0x1e8) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1ec) < iVar4 + 1U) {
      FUN_147bbb1bc(plVar11,iVar4);
    }
    break;
  default:
    goto switchD_1406a55cb_default;
  }
  puVar2 = (undefined4 *)(*plVar11 + lVar12 * 0x28);
  lVar12 = *param_3;
  uVar13 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  *puVar2 = *(undefined4 *)param_2;
  puVar2[1] = uVar13;
  puVar2[2] = uVar3;
  puVar2[3] = uVar6;
  *(longlong *)(puVar2 + 4) = lVar12;
  if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar10 = (undefined8 *)(puVar2 + 6);
LAB_1406a558f:
  *puVar10 = 0;
  puVar10[1] = 0;
switchD_1406a55cb_default:
  return;
}



// FUNCTION 1406a5838 FUN_1406a5838 body=275 status=ok
// SIG undefined FUN_1406a5838(void)

void FUN_1406a5838(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406a594c FUN_1406a594c body=320 status=ok
// SIG undefined FUN_1406a594c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1406a594c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      lVar7 = 0x18;
      if (iVar1 != 1) goto LAB_1406a5999;
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 != DVar4) goto LAB_1406a5999;
    }
  }
  lVar7 = 0x10;
LAB_1406a5999:
  if (*(longlong *)(param_1 + lVar7) == 0) {
    puVar6 = &DAT_14caefcd8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caefe90) {
      FUN_144b3d300(&DAT_14caefe90);
      if (DAT_14caefe90 == -1) {
        puVar6 = &DAT_14caefcd8;
        memset(&DAT_14caefcd8,0,0xc4);
        memset(&DAT_14caefda0,0,0xe8);
        _DAT_14caefe88 = 0x1ffffff;
        DAT_14caefe8c = 0;
        atexit((_func_5014 *)&LAB_14357c04e);
        _Init_thread_footer(&DAT_14caefe90);
      }
    }
  }
  else {
    puVar6 = (undefined *)(*(longlong *)(*(longlong *)(param_1 + lVar7) + 0x28) + 0x70);
  }
  puVar2 = *(undefined **)(puVar6 + 0x20);
  puVar5 = puVar6 + ((longlong)puVar2 >> 0x18) + 0x20;
  if (((ulonglong)puVar2 & 1) == 0) {
    puVar5 = puVar2;
  }
  *param_2 = puVar5;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar6 + 0x28);
  return param_2;
}



// FUNCTION 1406a5a8c FUN_1406a5a8c body=373 status=ok
// SIG undefined FUN_1406a5a8c(void)

void FUN_1406a5a8c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x24;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406a5b15;
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
LAB_1406a5b15:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x24)) {
    uVar7 = uVar5 / 0x24 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x24,4);
  return;
}



// FUNCTION 1406a5c02 FUN_1406a5c02 body=387 status=ok
// SIG undefined FUN_1406a5c02(void)

float * FUN_1406a5c02(longlong param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  double *pdVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auStack_48 [32];
  float local_28 [6];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = 0x1c;
  if ((byte)*(uint *)(param_1 + 0x10) < 0x1c) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  uVar3 = (uVar3 & 0xff) << 4;
  cVar1 = (&DAT_14aa842ba)[uVar3];
  if ((longlong)cVar1 == 1) {
    pdVar4 = (double *)(param_1 + 0x18);
    if (*(double **)(param_1 + 0x98) != (double *)0x0) {
      pdVar4 = *(double **)(param_1 + 0x98);
    }
    cVar1 = (&DAT_14aa842b9)[uVar3];
    if (cVar1 == '\x01') {
      local_28[0] = *(float *)pdVar4;
      local_28[1] = local_28[0];
      local_28[2] = local_28[0];
      local_28[3] = local_28[0];
    }
    else if (cVar1 == '\x02') {
      local_28[0] = (float)*pdVar4;
      local_28[1] = local_28[0];
      local_28[2] = local_28[0];
      local_28[3] = local_28[0];
    }
    else if (cVar1 == '\x03') {
      local_28[0] = (float)*(int *)pdVar4;
      local_28[1] = local_28[0];
      local_28[2] = local_28[0];
      local_28[3] = local_28[0];
    }
    else {
      local_28[0] = 0.0;
      local_28[1] = local_28[0];
      local_28[2] = local_28[0];
      local_28[3] = local_28[0];
      if (cVar1 == '\x04') {
        local_28[0] = (float)*(byte *)pdVar4;
        local_28[1] = local_28[0];
        local_28[2] = local_28[0];
        local_28[3] = local_28[0];
      }
    }
  }
  else {
    uVar6 = 4;
    if (cVar1 < '\x04') {
      uVar6 = (int)cVar1;
    }
    if ('\0' < cVar1) {
      cVar2 = (&DAT_14aa842b9)[uVar3];
      lVar5 = param_1 + 0x18;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x98);
      }
      uVar7 = 0;
      do {
        if (cVar2 == '\x02') {
          fVar8 = (float)*(double *)(lVar5 + uVar7 * 8);
        }
        else if (cVar2 == '\x01') {
          fVar8 = *(float *)(lVar5 + uVar7 * 8);
        }
        else if (cVar2 == '\x03') {
          fVar8 = (float)*(int *)(lVar5 + uVar7 * 8);
        }
        else {
          fVar8 = 0.0;
          if (cVar2 == '\x04') {
            fVar8 = (float)*(byte *)(lVar5 + uVar7 * 8);
          }
        }
        local_28[uVar7] = fVar8;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
      if ('\x03' < cVar1) goto LAB_1406a5c70;
    }
    memset(local_28 + cVar1,0,(ulonglong)(3 - uVar6) * 4 + 4);
  }
LAB_1406a5c70:
  *param_2 = local_28[0];
  param_2[1] = local_28[1];
  param_2[2] = local_28[2];
  param_2[3] = local_28[3];
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1406a5d86 FUN_1406a5d86 body=1606 status=ok
// SIG undefined FUN_1406a5d86(void)

void FUN_1406a5d86(longlong param_1,byte param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
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
  byte bVar17;
  undefined8 *puVar18;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar17 = param_2 & 1;
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x188) = 0;
    if (*(int *)(param_1 + 0x18c) != 0) {
      FUN_1417e0304(param_1 + 0x180,0);
    }
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (*(int *)(param_1 + 0x19c) != 0) {
      FUN_1417e0376(param_1 + 400,0);
    }
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    if (*(int *)(param_1 + 0x1ac) != 0) {
      FUN_147bbad7e(param_1 + 0x1a0,0);
    }
  }
  if ((param_2 & 2) != 0) {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (*(int *)(param_1 + 0x1bc) != 0) {
      FUN_147bbadde(param_1 + 0x1b0,0);
    }
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    if (*(int *)(param_1 + 0x1cc) != 0) {
      FUN_147bbae4e(param_1 + 0x1c0,0);
    }
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    if (*(int *)(param_1 + 0x1dc) != 0) {
      FUN_147bbaf2e(param_1 + 0x1d0,0);
    }
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    if (*(int *)(param_1 + 0x1ec) != 0) {
      FUN_147bbaf9e(param_1 + 0x1e0,0);
    }
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    bVar17 = 1;
    if (*(int *)(param_1 + 0x1fc) != 0) {
      FUN_147bbaebe(param_1 + 0x1f0,0);
    }
  }
  if ((param_2 & 4) != 0) {
    FUN_147bb640c(param_1 + 0x250);
  }
  lVar4 = *(longlong *)(param_1 + 0x248);
  if (bVar17 != 1 || lVar4 == 0) goto LAB_1406a6026;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1406a5eca;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1406a5ed3;
      goto LAB_1406a5f87;
    }
  }
  else {
LAB_1406a5eca:
    if (iVar7 != 0x10) {
LAB_1406a5f87:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_1406a5ed3;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_1406a5ed3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_1406a60f3;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143574684);
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
LAB_1406a60f3:
          puVar18 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar18 + 0x16);
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
            puVar18 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar18 + 0x16);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_1406a6173;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_1406a6173:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a9d4a38;
        puVar18[0x15] = lVar4;
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
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar18[0xf] = uVar12;
        puVar18[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar7;
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
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14a9d49e0;
        local_78[0] = &LAB_1435765a8;
        local_50 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"FClearMIParametersCommand",&DAT_14caec378);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar14 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar14 = &local_58;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_1406a6026;
    }
  }
LAB_1406a5ed3:
  FUN_140944df6(lVar4);
LAB_1406a6026:
  FUN_1403ba93c(param_1);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a63ce FUN_1406a63ce body=112 status=ok
// SIG undefined FUN_1406a63ce(void)

void FUN_1406a63ce(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caddfd8) {
    FUN_144b3d300(&DAT_14caddfd8);
    if (DAT_14caddfd8 == -1) {
      FUN_1456bdea2(&DAT_14caddf88);
      atexit((_func_5014 *)&LAB_14350c396);
      _Init_thread_footer(&DAT_14caddfd8);
    }
  }
  FUN_1406a643e(&DAT_14caddf88);
  return;
}



// FUNCTION 1406a643e FUN_1406a643e body=2559 status=ok
// SIG undefined FUN_1406a643e(void)

void FUN_1406a643e(longlong param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 *puVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong local_90;
  uint *local_88;
  longlong *local_80;
  longlong *local_78;
  uint local_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(param_1 + 0x48) = 0;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar21 = *(longlong **)(param_1 + 0x38);
    plVar16 = plVar21 + *(int *)(param_1 + 0x40);
    local_90 = param_1;
    do {
      plVar17 = (longlong *)*plVar21;
      puVar18 = (undefined8 *)*plVar17;
      if ((longlong)(int)plVar17[1] == 0) {
        uVar12 = 0;
      }
      else {
        puVar15 = puVar18 + (longlong)(int)plVar17[1] * 8;
        do {
          pcVar2 = (code *)*puVar18;
          plVar11 = puVar18 + 4;
          if ((longlong *)puVar18[2] != (longlong *)0x0) {
            plVar11 = (longlong *)puVar18[2];
          }
          uVar7 = (**(code **)(*plVar11 + 8))();
          (*pcVar2)(uVar7);
          puVar18 = puVar18 + 8;
        } while (puVar18 != puVar15);
        uVar12 = (undefined4)plVar17[1];
        puVar18 = (undefined8 *)*plVar17;
      }
      uVar26 = *(uint *)((longlong)plVar17 + 0xc);
      uVar19 = (ulonglong)uVar26;
      FUN_144a6a7e8(puVar18,uVar12);
      *(undefined4 *)(plVar17 + 1) = 0;
      if (((int)uVar26 < 0) && (*(int *)((longlong)plVar17 + 0xc) != 0)) {
        FUN_1414fc534(plVar17);
      }
      plVar21 = plVar21 + 1;
    } while (plVar21 != plVar16);
    if ((longlong)*(int *)(local_90 + 0x40) != 0) {
      plVar21 = *(longlong **)(local_90 + 0x38);
      plVar16 = plVar21 + *(int *)(local_90 + 0x40);
      do {
        lVar3 = *plVar21;
        if ((longlong)*(int *)(lVar3 + 0x68) != 0) {
          lVar24 = *(longlong *)(lVar3 + 0x60) + 0x10;
          lVar23 = (longlong)*(int *)(lVar3 + 0x68) * 0x110;
          do {
            if (((((((*(int *)(lVar24 + -0xc) != 0) &&
                    (uVar26 = *(uint *)(lVar24 + -0x10), -1 < (int)uVar26)) &&
                   ((int)uVar26 < DAT_14c9647dc)) &&
                  ((puVar18 = (undefined8 *)
                              ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
                   puVar18 != (undefined8 *)0x0 &&
                   (*(int *)(puVar18 + 2) == *(int *)(lVar24 + -0xc))))) &&
                 (((*(uint *)(puVar18 + 1) & 0x10200000) == 0 &&
                  ((*(int *)(lVar24 + -4) != 0 &&
                   (uVar26 = *(uint *)(lVar24 + -8), -1 < (int)uVar26)))))) &&
                ((int)uVar26 < DAT_14c9647dc)) &&
               (((puVar15 = (undefined8 *)
                            ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
                 puVar15 != (undefined8 *)0x0 && (*(int *)(puVar15 + 2) == *(int *)(lVar24 + -4)))
                && ((*(uint *)(puVar15 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(puVar18 + 1) & 0x10200000) == 0) {
                uVar7 = *puVar18;
              }
              else {
                uVar7 = 0;
              }
              if ((*(uint *)(puVar15 + 1) & 0x10200000) == 0) {
                uVar14 = *puVar15;
              }
              else {
                uVar14 = 0;
              }
              FUN_143482562(uVar7,uVar14,lVar24);
            }
            lVar24 = lVar24 + 0x110;
            lVar23 = lVar23 + -0x110;
          } while (lVar23 != 0);
        }
        *(undefined4 *)(lVar3 + 0x68) = 0;
        if (*(int *)(lVar3 + 0x6c) < 0) {
          FUN_147ae02ee(lVar3 + 0x60);
        }
        plVar21 = plVar21 + 1;
      } while (plVar21 != plVar16);
      if ((longlong)*(int *)(local_90 + 0x40) != 0) {
        plVar21 = *(longlong **)(local_90 + 0x38);
        plVar16 = plVar21 + *(int *)(local_90 + 0x40);
        local_80 = plVar16;
        do {
          lVar3 = *plVar21;
          plVar17 = (longlong *)(lVar3 + 0x10);
          local_88 = (uint *)(lVar3 + 0x20);
          iVar27 = *(int *)(lVar3 + 0x38);
          uVar29 = 1;
          uVar20 = 0;
          iVar22 = 0;
          iVar13 = 0;
          iVar6 = iVar27;
          if (iVar27 != 0) {
            puVar8 = *(uint **)(lVar3 + 0x30);
            if (*(uint **)(lVar3 + 0x30) == (uint *)0x0) {
              puVar8 = local_88;
            }
            uVar26 = *puVar8;
            if (uVar26 == 0) {
              iVar13 = iVar27 + 0x1e;
              if (-1 < iVar27 + -1) {
                iVar13 = iVar27 + -1;
              }
              uVar20 = 0;
              uVar28 = iVar13 >> 5;
              if (iVar13 >> 5 < 1) {
                uVar28 = 0;
              }
              iVar22 = 0;
              do {
                if (uVar28 == uVar20) goto LAB_1406a69be;
                iVar22 = iVar22 + 0x20;
                uVar26 = puVar8[uVar20 + 1];
                uVar20 = uVar20 + 1;
              } while (uVar26 == 0);
            }
            else {
              uVar20 = 0;
            }
            uVar29 = (ulonglong)(-uVar26 & uVar26);
            uVar1 = uVar29 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            iVar13 = (iVar22 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
            if (iVar27 <= iVar13) {
              iVar13 = iVar27;
            }
          }
          if (iVar13 != iVar27) {
            local_78 = plVar17;
            uVar26 = 0xffffffff;
            do {
              local_6c = uVar26;
              iVar6 = *(int *)(*local_78 + 4 + (longlong)iVar13 * 0x14);
              local_94 = iVar22;
              if (iVar6 != 0) {
                puVar8 = (uint *)(*local_78 + (longlong)iVar13 * 0x14);
                uVar26 = *puVar8;
                if ((((-1 < (int)uVar26) && ((int)uVar26 < DAT_14c9647dc)) &&
                    ((plVar16 = (longlong *)
                                ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
                     plVar16 != (longlong *)0x0 &&
                     (((int)plVar16[2] == iVar6 && ((*(uint *)(plVar16 + 1) & 0x10200000) == 0))))))
                   && (plVar16 = (longlong *)*plVar16, plVar16 != (longlong *)0x0)) {
                  pcVar2 = *(code **)(*plVar16 + 0x480);
                  if (pcVar2 == FUN_1448e80fa) {
                    cVar5 = FUN_1448e80fa(plVar16,0);
                  }
                  else if (pcVar2 == FUN_1447b4356) {
                    cVar5 = FUN_1447b4356(plVar16,0);
                  }
                  else {
                    cVar5 = (*pcVar2)(plVar16,0);
                  }
                  if ((cVar5 == '\0') && ((*(byte *)((longlong)plVar16 + 0x9c) & 8) != 0)) {
                    uVar19 = CONCAT71((int7)(uVar19 >> 8),(char)puVar8[2]);
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x110) < DAT_14caddfd8) &&
                       (FUN_144b3d300(&DAT_14caddfd8), DAT_14caddfd8 == -1)) {
                      FUN_1456bdea2(&DAT_14caddf88);
                      atexit((_func_5014 *)&LAB_14350c396);
                      _Init_thread_footer(&DAT_14caddfd8);
                    }
                    cVar5 = FUN_140043258(&DAT_14caddf88,plVar16,uVar19 & 0xffffffff);
                    if (cVar5 == '\0') {
                      FUN_140043566(plVar16 + 0x82,plVar16 + 0x48,uVar19 & 0xffffffff,1);
                      local_68 = plVar16[0x50];
                      lStack_60 = plVar16[0x51];
                      local_58 = plVar16[0x52];
                      FUN_140043360(plVar16 + 0x82,&local_68,0);
                    }
                  }
                }
              }
              uVar26 = local_6c & ~(uint)uVar29;
              puVar8 = *(uint **)(lVar3 + 0x30);
              if (*(uint **)(lVar3 + 0x30) == (uint *)0x0) {
                puVar8 = local_88;
              }
              iVar6 = *(int *)(lVar3 + 0x38);
              iVar13 = (int)uVar20;
              lVar24 = (longlong)iVar13;
              uVar28 = puVar8[lVar24] & uVar26;
              iVar22 = local_94;
              if (uVar28 == 0) {
                iVar9 = iVar6 + 0x1e;
                if (-1 < iVar6 + -1) {
                  iVar9 = iVar6 + -1;
                }
                iVar9 = iVar9 >> 5;
                iVar22 = local_94 + 0x20;
                iVar10 = iVar9;
                if (iVar9 < iVar13) {
                  iVar10 = iVar13;
                }
                if (iVar13 < iVar9) {
                  lVar23 = 0;
                  do {
                    uVar28 = (puVar8 + lVar24 + 1)[lVar23];
                    if (uVar28 != 0) {
                      uVar20 = (ulonglong)(iVar13 + (int)lVar23 + 1);
                      uVar26 = 0xffffffff;
                      goto LAB_1406a698c;
                    }
                    iVar22 = iVar22 + 0x20;
                    lVar23 = lVar23 + 1;
                  } while (iVar10 - lVar24 != lVar23);
                  uVar26 = 0xffffffff;
                  iVar13 = iVar10;
                }
                uVar20 = (ulonglong)(iVar13 + 1);
                iVar13 = iVar6;
              }
              else {
LAB_1406a698c:
                uVar29 = (ulonglong)(-uVar28 & uVar28);
                uVar1 = uVar29 * 2 + 1;
                lVar24 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                  }
                }
                iVar13 = (iVar22 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                if (iVar6 <= iVar13) {
                  iVar13 = iVar6;
                }
              }
              plVar17 = local_78;
              plVar16 = local_80;
            } while (iVar13 != iVar27);
          }
LAB_1406a69be:
          if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
            uVar19 = lVar3 + 0x48;
            if (*(ulonglong *)(lVar3 + 0x50) != 0) {
              uVar19 = *(ulonglong *)(lVar3 + 0x50);
            }
            iVar27 = *(int *)(lVar3 + 0x58);
            iVar13 = iVar27 + 3;
            if (-1 < iVar27) {
              iVar13 = iVar27;
            }
            if (*(int *)(lVar3 + 0x18) - *(int *)(lVar3 + 0x44) < iVar13 >> 2) {
              if (iVar6 == 0) {
                uVar20 = 0;
                puVar25 = &DAT_00000001;
                iVar27 = 0;
                iVar13 = 0;
              }
              else {
                puVar8 = *(uint **)(lVar3 + 0x30);
                if (*(uint **)(lVar3 + 0x30) == (uint *)0x0) {
                  puVar8 = local_88;
                }
                uVar26 = *puVar8;
                if (uVar26 == 0) {
                  iVar27 = iVar6 + 0x1e;
                  if (-1 < iVar6 + -1) {
                    iVar27 = iVar6 + -1;
                  }
                  uVar20 = 0;
                  uVar28 = iVar27 >> 5;
                  if (iVar27 >> 5 < 1) {
                    uVar28 = 0;
                  }
                  iVar13 = 0;
                  do {
                    if (uVar28 == uVar20) goto LAB_1406a6b92;
                    iVar13 = iVar13 + 0x20;
                    uVar26 = puVar8[uVar20 + 1];
                    uVar20 = uVar20 + 1;
                  } while (uVar26 == 0);
                }
                else {
                  uVar20 = 0;
                  iVar13 = 0;
                }
                puVar25 = (undefined1 *)(ulonglong)(-uVar26 & uVar26);
                uVar29 = (longlong)puVar25 * 2 + 1;
                lVar24 = 0x3f;
                if (uVar29 != 0) {
                  for (; uVar29 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                  }
                }
                iVar27 = (iVar13 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                if (iVar6 <= iVar27) {
                  iVar27 = iVar6;
                }
              }
              if (iVar27 != iVar6) {
                uVar26 = 0xffffffff;
                do {
                  *(undefined4 *)
                   (uVar19 + (longlong)
                             *(int *)(*(longlong *)(lVar3 + 0x10) + 0x10 + (longlong)iVar27 * 0x14)
                             * 4) = 0xffffffff;
                  uVar26 = ~(uint)puVar25 & uVar26;
                  puVar8 = *(uint **)(lVar3 + 0x30);
                  if (*(uint **)(lVar3 + 0x30) == (uint *)0x0) {
                    puVar8 = local_88;
                  }
                  iVar22 = *(int *)(lVar3 + 0x38);
                  iVar27 = (int)uVar20;
                  lVar24 = (longlong)iVar27;
                  uVar28 = puVar8[lVar24] & uVar26;
                  if (uVar28 == 0) {
                    iVar9 = iVar22 + 0x1e;
                    if (-1 < iVar22 + -1) {
                      iVar9 = iVar22 + -1;
                    }
                    iVar9 = iVar9 >> 5;
                    iVar13 = iVar13 + 0x20;
                    iVar10 = iVar9;
                    if (iVar9 < iVar27) {
                      iVar10 = iVar27;
                    }
                    if (iVar27 < iVar9) {
                      lVar23 = 0;
                      do {
                        uVar28 = puVar8[lVar24 + lVar23 + 1];
                        if (uVar28 != 0) {
                          uVar20 = (ulonglong)(iVar27 + (int)lVar23 + 1);
                          uVar26 = 0xffffffff;
                          goto LAB_1406a6b29;
                        }
                        iVar13 = iVar13 + 0x20;
                        lVar23 = lVar23 + 1;
                      } while (iVar10 - lVar24 != lVar23);
                      uVar26 = 0xffffffff;
                      iVar27 = iVar10;
                    }
                    uVar20 = (ulonglong)(iVar27 + 1);
                    iVar27 = iVar22;
                  }
                  else {
LAB_1406a6b29:
                    puVar25 = (undefined1 *)(ulonglong)(-uVar28 & uVar28);
                    uVar29 = (longlong)puVar25 * 2 + 1;
                    lVar24 = 0x3f;
                    if (uVar29 != 0) {
                      for (; uVar29 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                      }
                    }
                    iVar27 = (iVar13 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    if (iVar22 <= iVar27) {
                      iVar27 = iVar22;
                    }
                  }
                } while (iVar27 != iVar6);
              }
            }
            else if (0 < iVar27) {
              lVar24 = 0;
              do {
                *(undefined4 *)(uVar19 + lVar24 * 4) = 0xffffffff;
                lVar24 = lVar24 + 1;
              } while (lVar24 < *(int *)(lVar3 + 0x58));
            }
LAB_1406a6b92:
            *(undefined4 *)(lVar3 + 0x18) = 0;
            if (*(int *)(lVar3 + 0x1c) < 0) {
              FUN_1401ad22e(plVar17,0);
            }
            *(undefined8 *)(lVar3 + 0x40) = 0xffffffff;
            *(undefined4 *)(lVar3 + 0x38) = 0;
          }
          plVar21 = plVar21 + 1;
        } while (plVar21 != plVar16);
        if ((longlong)*(int *)(local_90 + 0x40) != 0) {
          plVar21 = *(longlong **)(local_90 + 0x38);
          plVar16 = plVar21 + *(int *)(local_90 + 0x40);
          do {
            lVar3 = *plVar21;
            iVar27 = *(int *)(lVar3 + 0x78);
            if ((longlong)iVar27 != 0) {
              lVar24 = *(longlong *)(lVar3 + 0x70);
              lVar23 = 0;
              do {
                iVar6 = *(int *)(lVar24 + 4 + lVar23);
                if ((((iVar6 != 0) && (uVar26 = *(uint *)(lVar24 + lVar23), -1 < (int)uVar26)) &&
                    ((int)uVar26 < DAT_14c9647dc)) &&
                   (((plVar17 = (longlong *)
                                ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
                     plVar17 != (longlong *)0x0 && ((int)plVar17[2] == iVar6)) &&
                    (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 && (lVar4 = *plVar17, lVar4 != 0)))
                    ))) {
                  if (*(char *)(lVar24 + 0x112 + lVar23) == '\x01') {
                    FUN_143482e8e(lVar4,lVar24 + 8 + lVar23,*(undefined1 *)(lVar24 + 0x110 + lVar23)
                                 );
                  }
                  else {
                    FUN_1400fc306(lVar4,lVar24 + 8 + lVar23,*(undefined1 *)(lVar24 + 0x110 + lVar23)
                                  ,*(undefined1 *)(lVar24 + 0x111 + lVar23));
                  }
                }
                lVar23 = lVar23 + 0x118;
              } while ((longlong)iVar27 * 0x118 - lVar23 != 0);
            }
            *(undefined4 *)(lVar3 + 0x78) = 0;
            if (*(int *)(lVar3 + 0x7c) < 0) {
              FUN_147ae031e(lVar3 + 0x70);
            }
            plVar21 = plVar21 + 1;
          } while (plVar21 != plVar16);
          if ((longlong)*(int *)(local_90 + 0x40) != 0) {
            plVar21 = *(longlong **)(local_90 + 0x38);
            plVar16 = plVar21 + *(int *)(local_90 + 0x40);
            do {
              lVar3 = *plVar21;
              iVar27 = *(int *)(lVar3 + 0x88);
              if ((longlong)iVar27 != 0) {
                lVar24 = *(longlong *)(lVar3 + 0x80);
                lVar23 = 0;
                do {
                  iVar6 = *(int *)(lVar24 + 4 + lVar23);
                  if (((iVar6 != 0) && (uVar26 = *(uint *)(lVar24 + lVar23), -1 < (int)uVar26)) &&
                     (((int)uVar26 < DAT_14c9647dc &&
                      ((((plVar17 = (longlong *)
                                    ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
                         plVar17 != (longlong *)0x0 && ((int)plVar17[2] == iVar6)) &&
                        ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) && (*plVar17 != 0)))))) {
                    iVar6 = *(int *)(lVar24 + 0xc + lVar23);
                    if ((iVar6 == 0) || (uVar26 = *(uint *)(lVar24 + 8 + lVar23), (int)uVar26 < 0))
                    {
LAB_1406a6d31:
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = 0;
                      if ((int)uVar26 < DAT_14c9647dc) {
                        puVar18 = (undefined8 *)
                                  ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8));
                        if (((puVar18 == (undefined8 *)0x0) || (*(int *)(puVar18 + 2) != iVar6)) ||
                           ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)) goto LAB_1406a6d31;
                        uVar7 = *puVar18;
                      }
                    }
                    FUN_1449bb556(*plVar17,uVar7,
                                  CONCAT71((int7)((ulonglong)plVar17 >> 8),
                                           *(undefined1 *)(lVar24 + 0x10 + lVar23)));
                  }
                  lVar23 = lVar23 + 0x14;
                } while ((longlong)iVar27 * 0x14 != lVar23);
              }
              *(undefined4 *)(lVar3 + 0x88) = 0;
              if (*(int *)(lVar3 + 0x8c) < 0) {
                FUN_147ae034e(lVar3 + 0x80);
              }
              plVar21 = plVar21 + 1;
            } while (plVar21 != plVar16);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a6e3e FUN_1406a6e3e body=2032 status=ok
// SIG undefined FUN_1406a6e3e(void)

void FUN_1406a6e3e(longlong param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  uint *puVar1;
  void *_Src;
  void *_Dst;
  undefined4 *puVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 uVar8;
  longlong lVar9;
  double dVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  DWORD DVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte bVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_108 [35];
  undefined1 local_e5;
  DWORD local_e4;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_80;
  
  lVar16 = DAT_14ca97170;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((3 < *(int *)(param_3 + 0x3090)) ||
      ((*(int *)(param_3 + 0x3090) == 3 && (*(char *)(param_1 + 0x30) != '\0')))) &&
     (*(char *)(param_3 + 0x23d9) == '\x01')) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    local_a0 = param_4[1];
    local_a8 = *(undefined8 *)(*(longlong *)(*param_4 + 0x40) + 8);
    dVar4 = *(double *)(param_3 + 0x8a8);
    dVar5 = *(double *)(param_3 + 0x8a0);
    local_b0 = *(undefined8 *)(*(longlong *)(*param_4 + 0x40) + 0x58);
    dVar6 = *(double *)(param_3 + 0x880);
    dVar7 = *(double *)(param_3 + 0x888);
    local_c0 = *(ulonglong *)(param_3 + 0x30f8);
    local_d8 = *(longlong *)(param_3 + 0x3100);
    uVar28 = local_d8 - local_c0;
    uVar27 = local_d8 - (local_c0 & 0xffffffff00000000);
    fVar32 = *(float *)(*(longlong *)(param_3 + 8) + 0x110);
    fVar31 = (float)(*(int *)(param_3 + 0x4e4) - *(int *)(param_3 + 0x4dc)) * fVar32 *
             *(float *)(param_3 + 0x45c);
    fVar32 = (float)(*(int *)(param_3 + 0x4e0) - *(int *)(param_3 + 0x4d8)) * fVar32 *
             *(float *)(param_3 + 0x45c);
    iVar25 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    local_b8 = uVar27;
    if (((iVar25 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar25 == 2)) {
      uVar20 = 0;
    }
    else if (iVar25 == 1) {
      local_e4 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      uVar20 = (ulonglong)(local_e4 != DVar14);
    }
    else {
      uVar20 = 1;
    }
    iVar25 = *(int *)(lVar16 + uVar20 * 4);
    uVar22 = (uint)(iVar25 < 1) << 2 | 0xfffffff8;
    iVar25 = (uint)(0 < iVar25) * 4 + 3;
    uVar30 = iVar25 - ((int)ROUND(-0.5 - (fVar32 + fVar32)) >> 1) & uVar22;
    uVar22 = iVar25 - ((int)ROUND(-0.5 - (fVar31 + fVar31)) >> 1) & uVar22;
    uVar20 = (ulonglong)uVar22;
    if ((int)uVar22 <= (int)(uVar27 >> 0x20)) {
      uVar20 = uVar27 >> 0x20;
    }
    uVar27 = (ulonglong)uVar30;
    if ((int)uVar30 <= (int)uVar28) {
      uVar27 = uVar28 & 0xffffffff;
    }
    uVar8 = *(undefined1 *)(param_3 + 0x23cc);
    FUN_144a132c8(param_3 + 0x500,&local_98);
    if (((*(char *)(param_3 + 0x23d8) == '\x01') && (*(char *)(param_3 + 0x23e8) == '\0')) &&
       ((*(char *)(param_3 + 0x23e9) == '\0' &&
        ((*(char *)(param_3 + 0x23eb) == '\0' && (*(char *)(param_3 + 0x23ec) == '\0')))))) {
      dVar10 = (double)CONCAT44(uStack_8c,uStack_90);
      local_98 = *(undefined4 *)(param_3 + 0x125a0);
      uStack_94 = *(undefined4 *)(param_3 + 0x125a4);
      uStack_90 = *(undefined4 *)(param_3 + 0x125a8);
      uStack_8c = *(undefined4 *)(param_3 + 0x125ac);
      if (*(char *)(param_3 + 0x30ea) == '\0') {
        uVar3 = *(undefined4 *)(*(longlong *)(param_3 + 8) + 0x9c);
        *(undefined4 *)(lVar9 + 0x128) = uVar3;
        local_e0 = (longlong *)(lVar9 + 8);
        local_e4 = CONCAT31(local_e4._1_3_,uVar8);
        local_e5 = 1;
        if (*(int *)(lVar9 + 0x3c) == 0) {
          iVar25 = *(int *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x10) = iVar25 + 1;
          if (*(int *)(lVar9 + 0x14) == iVar25) {
            FUN_1406a7630(local_e0,iVar25);
          }
          iVar15 = *(int *)(lVar9 + 0x30);
          if (iVar15 == 0) {
            iVar11 = -1;
          }
          else {
            iVar11 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar11 = iVar15 + -1;
            }
            iVar11 = iVar11 >> 5;
          }
          lVar23 = lVar9 + 0x18;
          iVar19 = iVar15 + 1;
          iVar29 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar29 = iVar15;
          }
          if (iVar29 >> 5 == iVar11) {
            *(int *)(lVar9 + 0x30) = iVar19;
          }
          else {
            if (*(int *)(lVar9 + 0x34) <= iVar15) {
              iVar11 = iVar15;
              local_d0 = lVar23;
              if (iVar15 + 0x20U < 0xa0) {
                iVar19 = 0x80;
              }
              else {
                uVar22 = iVar15 + 0x20U >> 5;
                if (*(int *)(lVar9 + 0x34) + 0x1fU < 0xa0) {
                  uVar30 = 4;
                  if (4 < uVar22) {
                    uVar30 = uVar22;
                  }
                }
                else {
                  uVar30 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
                }
                uVar17 = (ulonglong)(uVar30 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar12 = (uint)(uVar17 + 0xf);
                    if (uVar30 < 0x1ffd) {
                      uVar17 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar17 + 0xf >> 4]];
                    }
                    else {
                      uVar21 = (ulonglong)(uVar12 & 0xfffffff0);
                      if (uVar21 < 0x7ff1) {
                        bVar18 = (&DAT_14c841e00)[uVar12 >> 4];
                        uVar24 = 0x32;
                        if (0x32 < bVar18) {
                          uVar24 = (ulonglong)bVar18;
                        }
                        uVar26 = 0x32 - (ulonglong)bVar18;
                        do {
                          uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0)
                          goto LAB_1406a7421;
                          lVar16 = uVar24 + 1 + uVar26;
                          uVar26 = uVar26 - 1;
                        } while (lVar16 != 0x33);
                      }
                      uVar17 = 0x10;
                      if (0x10 < DAT_14c841df8) {
                        uVar17 = (ulonglong)DAT_14c841df8;
                      }
                      uVar17 = -uVar17 & (uVar21 + uVar17) - 1;
                    }
                  }
                  else {
                    local_c8 = (ulonglong)uVar22;
                    uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                    uVar22 = (uint)local_c8;
                    iVar11 = *(int *)(lVar9 + 0x30);
                  }
                }
LAB_1406a7421:
                iVar13 = (int)(uVar17 >> 2);
                iVar19 = -0x20;
                if ((int)uVar22 <= iVar13) {
                  iVar19 = iVar13 << 5;
                }
              }
              *(int *)(lVar9 + 0x34) = iVar19;
              FUN_1446efbd8(local_d0,iVar11);
              iVar19 = *(int *)(lVar9 + 0x30) + 1;
              lVar23 = local_d0;
            }
            iVar11 = iVar19 + 0x1f;
            if (-1 < iVar19) {
              iVar11 = iVar19;
            }
            *(int *)(lVar9 + 0x30) = iVar19;
            if (iVar19 % 0x20 != 0) {
              lVar16 = *(longlong *)(lVar9 + 0x28);
              if (*(longlong *)(lVar9 + 0x28) == 0) {
                lVar16 = lVar23;
              }
              bVar18 = -(char)(iVar19 % 0x20);
              *(uint *)(lVar16 + (longlong)(iVar11 >> 5) * 4) =
                   (uint)(*(int *)(lVar16 + (longlong)(iVar11 >> 5) * 4) << (bVar18 & 0x1f)) >>
                   (bVar18 & 0x1f);
            }
          }
          lVar16 = (longlong)iVar25;
          if (*(longlong *)(lVar9 + 0x28) != 0) {
            lVar23 = *(longlong *)(lVar9 + 0x28);
          }
          bVar18 = (byte)iVar15 & 0x1f;
          puVar1 = (uint *)(lVar23 + (longlong)(iVar29 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
        }
        else {
          iVar25 = *(int *)(lVar9 + 0x38);
          lVar16 = (longlong)iVar25;
          iVar15 = *(int *)(*(longlong *)(lVar9 + 8) + 4 + lVar16 * 0x68);
          *(int *)(lVar9 + 0x38) = iVar15;
          iVar11 = *(int *)(lVar9 + 0x3c) + -1;
          *(int *)(lVar9 + 0x3c) = iVar11;
          if (iVar11 != 0) {
            *(undefined4 *)(*(longlong *)(lVar9 + 8) + (longlong)iVar15 * 0x68) = 0xffffffff;
          }
        }
        lVar23 = lVar9 + 0x18;
        if (*(longlong *)(lVar9 + 0x28) != 0) {
          lVar23 = *(longlong *)(lVar9 + 0x28);
        }
        iVar15 = iVar25 + 0x1f;
        if (-1 < iVar25) {
          iVar15 = iVar25;
        }
        puVar1 = (uint *)(lVar23 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar25 & 0x1f);
        lVar23 = *(longlong *)(lVar9 + 8);
        lVar16 = lVar16 * 0x68;
        *(ulonglong *)(lVar23 + lVar16) = param_3;
        *(longlong *)(lVar23 + 8 + lVar16) = local_a0;
        *(undefined8 *)(lVar23 + 0x10 + lVar16) = local_a8;
        *(undefined8 *)(lVar23 + 0x18 + lVar16) = local_b0;
        *(ulonglong *)(lVar23 + 0x20 + lVar16) = local_c0;
        *(longlong *)(lVar23 + 0x28 + lVar16) = local_d8;
        *(ulonglong *)(lVar23 + 0x30 + lVar16) = uVar28 & 0xffffffff | local_b8 & 0xffffffff00000000
        ;
        iVar15 = 1;
        _Src = (void *)(lVar23 + lVar16);
        *(ulonglong *)(lVar23 + 0x38 + lVar16) = uVar20 << 0x20 | uVar27;
        puVar2 = (undefined4 *)(lVar23 + 0x40 + lVar16);
        *puVar2 = local_98;
        puVar2[1] = uStack_94;
        puVar2[2] = uStack_90;
        puVar2[3] = uStack_8c;
        *(float *)(lVar23 + 0x50 + lVar16) = (float)((dVar4 - dVar5) / (dVar6 - dVar7));
        *(float *)(lVar23 + 0x54 + lVar16) = (float)(dVar10 + dVar10);
        *(undefined4 *)(lVar23 + 0x58 + lVar16) = uVar3;
        *(undefined1 *)(lVar23 + 0x5c + lVar16) = (undefined1)local_e4;
        *(undefined1 *)(lVar23 + 0x5d + lVar16) = local_e5;
        *(undefined4 *)(lVar23 + 0x60 + lVar16) = 0xffffffff;
        uVar22 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        uVar22 = uVar22 >> 0x10 ^ uVar22;
        uVar30 = *(int *)(lVar9 + 0x10) - *(int *)(lVar9 + 0x3c);
        if (uVar30 != 1) {
          if (*(int *)(lVar9 + 0x10) != *(int *)(lVar9 + 0x3c)) {
            lVar16 = lVar9 + 0x40;
            if (*(longlong *)(lVar9 + 0x48) != 0) {
              lVar16 = *(longlong *)(lVar9 + 0x48);
            }
            iVar11 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar9 + 0x50) - 1U & uVar22) * 4);
            if (iVar11 != -1) {
              do {
                _Dst = (void *)(*local_e0 + (longlong)iVar11 * 0x68);
                if (*(ulonglong *)(*local_e0 + (longlong)iVar11 * 0x68) == param_3) {
                  memmove(_Dst,_Src,0x60);
                  FUN_14982f234(local_e0,iVar25);
                  goto LAB_1406a72ed;
                }
                iVar11 = *(int *)((longlong)_Dst + 0x60);
              } while (iVar11 != -1);
            }
          }
          if (3 < uVar30) {
            uVar27 = (ulonglong)(uVar30 & 0xfffffffe) + 0xf;
            lVar16 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar15 = 1 << ((byte)lVar16 & 0x1f);
          }
        }
        if (((int)uVar30 < 1) || (iVar15 <= *(int *)(lVar9 + 0x50))) {
          uVar22 = *(int *)(lVar9 + 0x50) - 1U & uVar22;
          *(uint *)((longlong)_Src + 100) = uVar22;
          lVar16 = *(longlong *)(lVar9 + 0x48);
          if (*(longlong *)(lVar9 + 0x48) == 0) {
            lVar16 = lVar9 + 0x40;
          }
          *(undefined4 *)((longlong)_Src + 0x60) =
               *(undefined4 *)
                (lVar16 + ((longlong)*(int *)(lVar9 + 0x50) - 1U & (longlong)(int)uVar22) * 4);
          lVar16 = *(longlong *)(lVar9 + 0x48);
          if (*(longlong *)(lVar9 + 0x48) == 0) {
            lVar16 = lVar9 + 0x40;
          }
          *(int *)(lVar16 + ((longlong)*(int *)(lVar9 + 0x50) - 1U & (longlong)(int)uVar22) * 4) =
               iVar25;
        }
        else {
          *(int *)(lVar9 + 0x50) = iVar15;
          FUN_145736890(local_e0);
        }
      }
    }
  }
LAB_1406a72ed:
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406a7630 FUN_1406a7630 body=369 status=ok
// SIG undefined FUN_1406a7630(void)

void FUN_1406a7630(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x68;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406a76b5;
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
LAB_1406a76b5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x68)) {
    uVar7 = uVar5 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x68,8);
  return;
}



// FUNCTION 1406a77a2 FUN_1406a77a2 body=2917 status=ok
// SIG undefined FUN_1406a77a2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1406a77a2(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *pfVar13;
  bool bVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_12d8 [32];
  code **local_12b8;
  undefined4 local_12b0;
  undefined4 local_12a8;
  undefined8 local_12a0;
  wchar_t *local_1298;
  code *local_1290;
  undefined1 *local_1288;
  code **local_1280;
  code *local_1278;
  code *local_1270;
  undefined8 local_1260;
  undefined8 local_1258;
  double local_1248;
  undefined4 local_1240;
  uint uStack_123c;
  double local_1238;
  float local_ca0;
  longlong local_a20;
  longlong local_998;
  code *local_988 [3];
  byte local_96c;
  float local_348;
  float local_340;
  undefined4 local_314;
  longlong local_160;
  longlong local_d8;
  ulonglong local_c0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1406a77b8;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_12d8;
  *(undefined1 *)((longlong)param_1 + 0x11e4) = 0;
  lVar3 = *(longlong *)(param_3 + 0x28);
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0xe8) != 0)) && (*DAT_14cb746e0 == 0)) {
    plVar9 = *(longlong **)(lVar3 + 0xe0);
    if (plVar9 == (longlong *)0x0) {
LAB_1406a7d50:
      plVar10 = (longlong *)0x0;
    }
    else {
      if (DAT_14cb6fd70 == 0) {
        local_1280 = local_988;
        local_988[0] = FUN_1449e2820;
        local_1270 = FUN_14081d0ea;
        local_1278 = FUN_1427b09ee;
        local_1288 = &LAB_1487a9cc9;
        local_1290 = FUN_1465433f8;
        local_1298 = L"Engine";
        local_12a0 = 0;
        local_12a8 = 0x10004001;
        local_12b0 = 8;
        local_12b8 = (code **)CONCAT44(local_12b8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb6fd70);
      if (plVar9 == (longlong *)0x0) goto LAB_1406a7d50;
      if (DAT_14cb6fd70 == 0) {
        local_1280 = local_988;
        local_988[0] = FUN_1449e2820;
        local_1270 = FUN_14081d0ea;
        local_1278 = FUN_1427b09ee;
        local_1288 = &LAB_1487a9cc9;
        local_1290 = FUN_1465433f8;
        local_1298 = L"Engine";
        local_12a0 = 0;
        local_12a8 = 0x10004001;
        local_12b0 = 8;
        local_12b8 = (code **)CONCAT44(local_12b8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      plVar10 = (longlong *)FUN_144718840(plVar9,DAT_14cb6fd70);
      if (plVar9 == plVar10) goto LAB_1406a7d50;
    }
    plVar9 = *(longlong **)(lVar3 + 0xe0);
    if (plVar9 != (longlong *)0x0) {
      if (DAT_14cb6fd58 == 0) {
        local_1280 = local_988;
        local_988[0] = FUN_1449e2820;
        local_1270 = FUN_14081d0ea;
        local_1278 = FUN_1427b09ee;
        local_1288 = &LAB_1487a9cc5;
        local_1290 = FUN_14654339c;
        local_1298 = L"Engine";
        local_12a0 = 0;
        local_12a8 = 0x10004001;
        local_12b0 = 8;
        local_12b8 = (code **)CONCAT44(local_12b8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomValueProvider",&DAT_14cb6fd58,&DAT_1487a9cc4);
      }
      lVar11 = (**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb6fd58);
      if (lVar11 != 0) {
        if (DAT_14cb6fd58 == 0) {
          local_1280 = local_988;
          local_988[0] = FUN_1449e2820;
          local_1270 = FUN_14081d0ea;
          local_1278 = FUN_1427b09ee;
          local_1288 = &LAB_1487a9cc5;
          local_1290 = FUN_14654339c;
          local_1298 = L"Engine";
          local_12a0 = 0;
          local_12a8 = 0x10004001;
          local_12b0 = 8;
          local_12b8 = (code **)CONCAT44(local_12b8._4_4_,0x28);
          FUN_14081cfa3(L"/Script/GbxGame",L"ZoomValueProvider",&DAT_14cb6fd58,&DAT_1487a9cc4);
        }
        FUN_144718840(lVar11,DAT_14cb6fd58);
      }
    }
    fVar20 = 0.0;
    if (plVar10 != (longlong *)0x0) {
      fVar20 = (float)FUN_14023bf44(plVar10);
    }
    FUN_144903306(local_988,param_1 + 4);
    if ((0.0 < *(float *)((longlong)param_1 + 0x90c)) && (0.0 < *(float *)(param_1 + 0x122))) {
      fVar15 = *(float *)((longlong)param_1 + 0x90c) - (float)param_2 / *(float *)(param_1 + 0x122);
      fVar21 = fVar15;
      if (fVar15 <= 0.0) {
        fVar21 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x90c) = fVar21;
      if ((0.0 < fVar15) &&
         (FUN_1406a8366(param_3,&DAT_14cb746b8,param_1 + 0x124),
         *(char *)((longlong)param_1 + 0x90a) == '\x01')) {
        *(byte *)(param_3 + 0x14c) = *(byte *)(param_3 + 0x14c) | 0x20;
      }
    }
    if ((*(float *)(param_1 + 0x23c) < 1.0) && (0.0 < *(float *)(param_1 + 0x11c))) {
      fVar21 = *(float *)(param_1 + 0x23c) + (float)param_2 / *(float *)(param_1 + 0x11c);
      if (1.0 <= fVar21) {
        fVar21 = 1.0;
      }
      *(float *)(param_1 + 0x23c) = fVar21;
    }
    lVar11 = DAT_14cb746f8;
    if (((char)param_1[0x11d] == '\x01') && (*(char *)(lVar3 + 0x118) == '\x01')) {
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar2 = *(int *)(lVar4 + 0xc60);
      if (iVar2 == 0x40000002) {
        uVar12 = 0;
      }
      else {
        bVar14 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
          if (iVar2 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            bVar14 = DVar7 == DVar8;
          }
          else {
            bVar14 = false;
          }
        }
        uVar12 = (ulonglong)(bVar14 ^ 1);
      }
      if (*(int *)(lVar11 + uVar12 * 4) != 0) goto LAB_1406a7fdb;
      fVar21 = *(float *)(lVar3 + 0x13c);
      if (fVar21 <= 0.0) {
        fVar21 = *(float *)((longlong)param_1 + 0x8ec);
      }
      piVar1 = (int *)(lVar4 + 0xc60);
      *(float *)(param_1 + 0x356) = fVar21;
      lVar11 = DAT_14cb747a0;
      if (0.0 < fVar20) {
        if (((((*(double *)(lVar3 + 0x120) != 0.0) || (NAN(*(double *)(lVar3 + 0x120)))) ||
             (*(double *)(lVar3 + 0x128) != 0.0)) ||
            ((NAN(*(double *)(lVar3 + 0x128)) || (*(double *)(lVar3 + 0x130) != 0.0)))) ||
           (NAN(*(double *)(lVar3 + 0x130)))) {
          FUN_1406a84ce(param_3,&local_1248,&local_1260);
          dVar16 = (double)FUN_144719204(local_1260,0x4076800000000000);
          dVar17 = (double)FUN_144719204(local_1258,0x4076800000000000);
          dVar18 = sin(dVar16 * 0.017453292519943295);
          dVar16 = cos(dVar16 * 0.017453292519943295);
          dVar19 = sin(dVar17 * 0.017453292519943295);
          dVar17 = cos(dVar17 * 0.017453292519943295);
          fVar21 = (float)((*(double *)(lVar3 + 0x130) - local_1238) * dVar18 +
                          (*(double *)(lVar3 + 0x120) - local_1248) * dVar17 * dVar16 +
                          (*(double *)(lVar3 + 0x128) - (double)CONCAT44(uStack_123c,local_1240)) *
                          dVar19 * dVar16) * *DAT_14cb74788 + *(float *)(lVar3 + 0x138);
        }
        if (*(char *)(lVar3 + 0x140) == '\x01') {
          fVar15 = fVar20 + -1.0;
          if (1.0 <= fVar15) {
            fVar15 = 1.0;
          }
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          fVar21 = fVar21 * fVar15;
        }
        fVar21 = (fVar21 - *(float *)(param_1 + 0x356)) * fVar20 + *(float *)(param_1 + 0x356);
      }
      else {
        iVar2 = *piVar1;
        if (iVar2 == 0x40000002) {
          uVar12 = 0;
        }
        else {
          bVar14 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
            if (iVar2 == 1) {
              DVar7 = FUN_140ad26c0();
              DVar8 = GetCurrentThreadId();
              bVar14 = DVar7 == DVar8;
              fVar21 = *(float *)(param_1 + 0x356);
            }
            else {
              bVar14 = false;
            }
          }
          uVar12 = (ulonglong)(bVar14 ^ 1);
        }
        fVar21 = fVar21 * *(float *)(lVar11 + uVar12 * 4);
      }
      *(float *)(param_1 + 0x356) = fVar21;
      lVar11 = DAT_14cb74710;
      local_96c = local_96c | 0x40;
      local_314 = 0;
      iVar2 = *piVar1;
      local_348 = fVar21;
      if (iVar2 == 0x40000002) {
        uVar12 = 0;
      }
      else {
        bVar14 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
          if (iVar2 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            bVar14 = DVar7 == DVar8;
          }
          else {
            bVar14 = false;
          }
        }
        uVar12 = (ulonglong)(bVar14 ^ 1);
      }
      pfVar13 = (float *)(lVar11 + uVar12 * 4);
      bVar14 = *pfVar13 <= fVar21 && fVar21 != *pfVar13;
    }
    else {
LAB_1406a7fdb:
      bVar14 = false;
    }
    if (*(float *)(param_1 + 0x23c) < 1.0) {
      local_340 = *(float *)(param_1 + 0x23c) * local_340;
    }
    if ((0.0 < *(float *)((longlong)param_1 + 0x90c)) &&
       (*(char *)((longlong)param_1 + 0x909) == (char)param_1[0x11d])) {
      local_348 = *(float *)((longlong)param_1 + 0x90c) * (*(float *)(param_1 + 0x1ec) - local_348)
                  + local_348;
    }
    if (bVar14) {
      local_12b8 = local_988;
      (**(code **)(*param_1 + 0x78))(param_1,param_3,param_2,0x3f800000);
    }
    if (((0.0 < fVar20) && (*DAT_14cb74728 == 0)) &&
       ((*(char *)(lVar3 + 0x149) != '\0' || (0.0 < *DAT_14cb74740)))) {
      FUN_144894d4c(&local_1248);
      pfVar13 = DAT_14cb74740;
      if (0.0 <= *DAT_14cb74740) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar12 = 0;
        }
        else {
          bVar6 = FUN_144a61b4f();
          uVar12 = (ulonglong)(bVar6 ^ 1);
        }
        pfVar13 = pfVar13 + uVar12;
      }
      else {
        pfVar13 = (float *)(lVar3 + 0x158);
      }
      fVar21 = *pfVar13;
      if ((1.0 <= fVar20) && (cVar5 = (**(code **)(*plVar10 + 0x48))(plVar10,0), cVar5 != '\0')) {
        fVar15 = *(float *)(lVar3 + 0x164);
        if (fVar15 < 0.0) {
          fVar15 = *(float *)(param_1 + 0x120);
        }
        fVar21 = fVar21 * (fVar15 * -0.0 + 1.0);
      }
      pfVar13 = DAT_14cb74758;
      if ((char)param_1[0x121] == '\x01') {
        fVar15 = *DAT_14cb74758;
        if (fVar15 <= 0.0) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
              != 0x40000002) {
            bVar6 = FUN_144a61b4f();
            fVar15 = pfVar13[bVar6 ^ 1];
          }
        }
        else {
          fVar15 = *(float *)(lVar3 + 0x15c);
          if (fVar15 <= 0.0) {
            fVar15 = *(float *)((longlong)param_1 + 0x8fc);
          }
        }
        fVar21 = fVar20 * (fVar21 - fVar15) + fVar15;
      }
      if ((0.0 < *DAT_14cb74770) &&
         (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) != 0x40000002)) {
        FUN_144a61b4f();
      }
      uStack_123c = uStack_123c | 0x40;
      local_ca0 = fVar21;
      FUN_1406a8366(param_3,&DAT_14cb746c0,&local_1248,0x3f800000);
      if (local_998 != 0) {
        FUN_1400020a8();
      }
      if (local_a20 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_160 != 0) {
      FUN_1400020a8();
    }
    if (bVar14) goto LAB_1406a7b06;
  }
  *(undefined4 *)(param_1 + 0x356) = 0;
LAB_1406a7b06:
  if ((local_c0 ^ (ulonglong)auStack_12d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406a8308 FUN_1406a8308 body=93 status=ok
// SIG undefined FUN_1406a8308(void)

void FUN_1406a8308(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x11e4) = 1;
    FUN_14477b16e(param_1 + 0x11f0,param_5);
    FUN_1406a8366(param_2,&DAT_14cb746c8,param_5,param_4);
    return;
  }
  return;
}



// FUNCTION 1406a8366 FUN_1406a8366 body=359 status=ok
// SIG undefined FUN_1406a8366(void)

void FUN_1406a8366(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x1ac)) {
    lVar4 = *param_2;
    uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar5 = (uint)lVar4 & 0xffff;
    lVar3 = param_1 + 0x1b0;
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1b8);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x1c0) - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar6 * 0x10) == lVar4)
        goto LAB_1406a840f;
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x178) + 8);
      } while (iVar6 != -1);
    }
  }
  FUN_144a13f80();
  plVar1 = (longlong *)(param_1 + 0x168);
  iVar6 = *(int *)(param_1 + 0x170);
  *(int *)(param_1 + 0x170) = iVar6 + 1;
  if (*(int *)(param_1 + 0x174) == iVar6) {
    FUN_145736a74(plVar1);
  }
  lVar4 = (longlong)iVar6 * 0x8d0;
  memset((void *)(*plVar1 + lVar4),0,0x8d0);
  *(undefined4 *)(*plVar1 + lVar4) = param_4;
  FUN_14477b16e(*plVar1 + lVar4 + 0x10,param_3);
LAB_1406a840f:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406a84ce FUN_1406a84ce body=2308 status=ok
// SIG undefined FUN_1406a84ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406a84ce(longlong param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auStack_2c8 [32];
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_248;
  double local_240;
  double local_238;
  double local_228;
  double local_220;
  double local_218;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong local_e0;
  
  auVar12 = _DAT_1499387d0;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x48);
  dVar9 = (double)DAT_1499387d0;
  dVar13 = DAT_1499387d0._8_8_;
  auVar11 = divpd(auVar1,_DAT_1499387d0);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(double *)(param_1 + 0x58);
  auVar15 = divpd(auVar15,_DAT_1499387d0);
  auVar11 = roundpd(auVar11,auVar11,3);
  auVar15 = roundpd(auVar15,auVar15,3);
  dVar17 = (auVar1._0_8_ - auVar11._0_8_ * dVar9) * 0.008726646259971648;
  dVar18 = (auVar1._8_8_ - auVar11._8_8_ * dVar13) * 0.008726646259971648;
  dVar7 = (*(double *)(param_1 + 0x58) - auVar15._0_8_ * dVar9) * 0.008726646259971648;
  dVar8 = (0.0 - auVar15._8_8_ * dVar13) * 0.008726646259971648;
  dVar2 = sin(dVar17);
  dVar3 = sin(dVar18);
  dVar4 = sin(dVar7);
  sin(dVar8);
  dVar5 = cos(dVar17);
  dVar6 = cos(dVar18);
  dVar7 = cos(dVar7);
  cos(dVar8);
  dVar17 = -(dVar6 * dVar2 * dVar4) + dVar3 * dVar5 * dVar7;
  dVar18 = dVar3 * dVar2 * dVar4 + dVar6 * dVar5 * dVar7;
  dVar10 = dVar2 * dVar3 * dVar7 - dVar5 * dVar6 * dVar4;
  dVar2 = -(dVar2 * dVar6 * dVar7) - dVar5 * dVar3 * dVar4;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0xa0);
  auVar11 = divpd(auVar1,auVar12);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *(double *)(param_1 + 0xb0);
  auVar15 = divpd(auVar16,auVar12);
  auVar12 = roundpd(auVar11,auVar11,3);
  auVar11 = roundpd(auVar15,auVar15,3);
  dVar7 = (auVar1._0_8_ - auVar12._0_8_ * dVar9) * 0.008726646259971648;
  dVar8 = (auVar1._8_8_ - auVar12._8_8_ * dVar13) * 0.008726646259971648;
  dVar9 = (*(double *)(param_1 + 0xb0) - auVar11._0_8_ * dVar9) * 0.008726646259971648;
  dVar13 = (0.0 - auVar11._8_8_ * dVar13) * 0.008726646259971648;
  dVar3 = sin(dVar7);
  dVar4 = sin(dVar8);
  dVar5 = sin(dVar9);
  sin(dVar13);
  dVar7 = cos(dVar7);
  dVar8 = cos(dVar8);
  dVar6 = cos(dVar9);
  cos(dVar13);
  dVar9 = -(dVar8 * dVar3 * dVar5) + dVar4 * dVar7 * dVar6;
  dVar13 = dVar4 * dVar3 * dVar5 + dVar8 * dVar7 * dVar6;
  dVar14 = dVar3 * dVar4 * dVar6 - dVar7 * dVar8 * dVar5;
  dVar3 = -(dVar3 * dVar8 * dVar6) - dVar7 * dVar4 * dVar5;
  dVar8 = dVar3 * dVar17 * -1.0 + dVar9 * dVar2 + dVar10 * dVar13 * 1.0 + dVar18 * dVar14;
  dVar4 = dVar14 * dVar17 * 1.0 + dVar13 * dVar2 + dVar10 * dVar9 * -1.0 + dVar18 * dVar3;
  dVar7 = dVar13 * dVar17 * 1.0 + ((dVar10 * dVar3 * 1.0 + dVar18 * dVar9) - dVar2 * dVar14);
  dVar13 = dVar9 * dVar17 * -1.0 + ((dVar10 * dVar14 * -1.0 + dVar18 * dVar13) - dVar2 * dVar3);
  dVar18 = dVar4 + dVar4;
  dVar9 = dVar7 + dVar7;
  dVar17 = dVar8 * (dVar8 + dVar8);
  local_138 = (dVar8 + dVar8) * dVar13;
  local_168 = 1.0 - (dVar7 * dVar9 + dVar4 * dVar18);
  local_148 = dVar8 * dVar18 - dVar13 * dVar9;
  local_128 = dVar8 * dVar9 + dVar18 * dVar13;
  local_108 = DAT_14c8464e0;
  local_160 = dVar13 * dVar9 + dVar8 * dVar18;
  local_140 = 1.0 - (dVar7 * dVar9 + dVar17);
  local_120 = dVar4 * dVar9 - local_138;
  local_100 = DAT_14c8464e8;
  uStack_f8 = DAT_14c8464f0;
  local_158 = dVar8 * dVar9 - dVar18 * dVar13;
  local_138 = local_138 + dVar4 * dVar9;
  local_118 = 1.0 - (dVar4 * dVar18 + dVar17);
  local_150 = 0;
  local_130 = 0;
  local_110 = 0;
  local_f0 = 0x3ff0000000000000;
  dVar9 = *(double *)(param_1 + 0xd8) * 0.01745329238474369;
  dVar13 = *(double *)(param_1 + 0xe0) * 0.01745329238474369;
  dVar17 = *(double *)(param_1 + 0xe8) * 0.01745329238474369;
  dVar18 = sin(dVar9);
  dVar7 = sin(dVar13);
  dVar8 = sin(dVar17);
  sin(0.0);
  dVar9 = cos(dVar9);
  dVar13 = cos(dVar13);
  dVar17 = cos(dVar17);
  cos(0.0);
  local_1e8 = dVar9 * dVar13;
  local_1e0 = dVar7 * dVar9;
  local_1d0 = 0;
  local_1c8 = dVar18 * dVar8 * dVar13 - dVar7 * dVar17;
  local_1c0 = dVar18 * dVar8 * dVar7 + dVar13 * dVar17;
  local_1b8 = -dVar8 * dVar9;
  local_1b0 = 0;
  local_1a8 = -(dVar18 * dVar17 * dVar13 + dVar7 * dVar8);
  local_1a0 = dVar13 * dVar8 - dVar7 * dVar18 * dVar17;
  local_198 = dVar9 * dVar17;
  local_190 = 0;
  local_188 = DAT_14c8464e0;
  local_180 = DAT_14c8464e8;
  uStack_178 = DAT_14c8464f0;
  local_170 = 0x3ff0000000000000;
  local_1d8 = dVar18;
  FUN_1447fea8d(&local_268,&local_1e8,&local_168);
  local_2a8 = local_240;
  local_2a0 = local_220;
  dVar9 = 0.0;
  if ((((local_260 != 0.0) || (NAN(local_260))) || (local_268 != 0.0)) || (NAN(local_268))) {
    dVar9 = atan2(local_260,local_268);
    dVar9 = dVar9 * 57.29577951308232;
  }
  dVar17 = SQRT(local_260 * local_260 + local_268 * local_268);
  dVar13 = 0.0;
  if (((local_258 != 0.0) || (NAN(local_258))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    dVar13 = atan2(local_258,dVar17);
    dVar13 = dVar13 * 57.29577951308232;
  }
  dVar17 = sin(dVar13 * 0.01745329238474369);
  dVar7 = sin(dVar9 * 0.01745329238474369);
  dVar8 = cos(dVar13 * 0.01745329238474369);
  dVar18 = cos(dVar9 * 0.01745329238474369);
  dVar10 = 0.0;
  dVar2 = dVar17 * 0.0 * dVar18 - dVar7;
  dVar18 = dVar17 * 0.0 * dVar7 + dVar18;
  dVar17 = local_238 * dVar8 * -0.0 + local_248 * dVar2 + local_2a8 * dVar18;
  dVar18 = local_218 * dVar8 * -0.0 + local_228 * dVar2 + local_2a0 * dVar18;
  if (((dVar18 != 0.0) || (NAN(dVar18))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    dVar10 = atan2(dVar18,dVar17);
    dVar10 = dVar10 * 57.29577951308232;
  }
  *param_3 = dVar13;
  param_3[1] = dVar9;
  param_3[2] = dVar10;
  dVar9 = *(double *)(param_1 + 0x40);
  dVar13 = *(double *)(param_1 + 0x80);
  dVar17 = *(double *)(param_1 + 0x38);
  dVar18 = *(double *)(param_1 + 0x78);
  dVar7 = *(double *)(param_1 + 0x30);
  dVar8 = *(double *)(param_1 + 0x70);
  local_288 = *(double *)(param_1 + 0xd0) + *(double *)(param_1 + 0x98);
  local_290 = *(double *)(param_1 + 200) + *(double *)(param_1 + 0x90);
  local_298 = *(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0x88);
  FUN_1401c9a0e(param_3,&local_280);
  *param_2 = dVar7 + dVar8 + local_280;
  param_2[1] = dVar17 + dVar18 + local_278;
  param_2[2] = dVar9 + dVar13 + local_270;
  if ((local_e0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a8dd4 FUN_1406a8dd4 body=1109 status=ok
// SIG undefined FUN_1406a8dd4(void)

void FUN_1406a8dd4(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  PSRWLOCK local_180;
  void *local_178;
  longlong local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_180 = (PSRWLOCK)(param_1 + 0xe8);
  AcquireSRWLockExclusive(local_180);
  plVar12 = (longlong *)(param_1 + 8);
  iVar15 = *(int *)(param_1 + 0x10);
  uVar11 = param_2 - iVar15;
  if (-1 < (int)uVar11) {
    *(int *)(param_1 + 0x10) = param_2 + 1;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar15) <= uVar11) {
      FUN_145736b06(plVar12,iVar15);
    }
    FUN_1406a92fc((longlong)iVar15 * 0x10 + *plVar12,uVar11 + 1);
  }
  FUN_1406a930a(param_3,&local_168);
  lVar16 = *plVar12;
  lVar17 = (longlong)param_2 * 0x10;
  local_188 = (longlong *)(lVar16 + lVar17);
  iVar15 = *(int *)(lVar16 + 0xc + lVar17);
  FUN_1406a922a(*(undefined8 *)(lVar16 + lVar17),*(undefined4 *)(lVar16 + 8 + lVar17));
  plVar12 = local_188;
  iVar14 = 0;
  *(undefined4 *)(lVar16 + 8 + lVar17) = 0;
  if ((iVar15 < 0) && (*(int *)((longlong)local_188 + 0xc) != 0)) {
    FUN_147e4586e(local_188);
    iVar14 = (int)plVar12[1];
  }
  plVar12 = local_188;
  iVar15 = *(int *)(param_3 + 0x668);
  if (iVar14 < iVar15) {
    *(int *)(local_188 + 1) = iVar15;
    if ((uint)(*(int *)((longlong)local_188 + 0xc) - iVar14) < (uint)(iVar15 - iVar14)) {
      FUN_1406a9690(local_188,iVar14);
    }
    FUN_1406a92da((longlong)iVar14 * 0x50 + *plVar12,iVar15 - iVar14);
  }
  else {
    if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar15);
    }
    if (iVar14 - iVar15 != 0 && iVar15 <= iVar14) {
      FUN_147e4589e(local_188,iVar15,iVar14 - iVar15);
      FUN_147e45904(plVar12);
    }
  }
  if (0 < (int)plVar12[1]) {
    lVar16 = 0;
    lVar17 = 0;
    local_170 = param_3;
    do {
      lVar4 = *(longlong *)(param_3 + 0x660);
      lVar1 = lVar4 + lVar16;
      lVar5 = *plVar12;
      *(undefined8 *)(lVar5 + lVar16) = *(undefined8 *)(lVar1 + 0x20);
      uVar8 = *(undefined4 *)(lVar1 + 0x2c);
      uVar9 = *(undefined4 *)(lVar1 + 0x30);
      uVar10 = *(undefined4 *)(lVar1 + 0x34);
      puVar2 = (undefined4 *)(lVar5 + 8 + lVar16);
      *puVar2 = *(undefined4 *)(lVar1 + 0x28);
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)(lVar5 + lVar16)) {
        iVar15 = *(int *)(lVar4 + 0x40 + lVar16);
        pvVar6 = *(void **)(lVar4 + 0x38 + lVar16);
        *(int *)(lVar5 + 0x20 + lVar16) = iVar15;
        if (iVar15 == 0 && *(int *)(lVar5 + 0x24 + lVar16) == 0) {
          *(undefined4 *)(lVar5 + 0x24 + lVar16) = 0;
        }
        else {
          puVar13 = (undefined8 *)(lVar16 + lVar5 + 0x18);
          local_178 = pvVar6;
          FUN_1446dd670(puVar13,iVar15);
          if (iVar15 != 0) {
            memcpy((void *)*puVar13,local_178,(longlong)iVar15 * 2);
          }
        }
      }
      param_3 = local_170;
      *(undefined4 *)(lVar5 + 0x28 + lVar16) = *(undefined4 *)(lVar4 + 0x48 + lVar16);
      FUN_1406a925a(*(longlong *)(local_170 + 0x660) + lVar16,&local_168);
      dVar7 = local_158 * local_f8;
      dVar20 = local_168 * local_108;
      dVar21 = dStack_160 * dStack_100;
      dVar18 = dVar21 * local_148 - dStack_140 * dVar20;
      dVar19 = dVar7 * dStack_140 - local_138 * dVar21;
      dVar22 = dVar20 * local_138 - local_148 * dVar7;
      dVar19 = dVar19 + dVar19;
      dVar22 = dVar22 + dVar22;
      dVar18 = dVar18 + dVar18;
      lVar1 = *local_188;
      pdVar3 = (double *)(lVar1 + 0x30 + lVar16);
      *pdVar3 = (dVar18 * dStack_140 - dVar22 * local_138) + dStack_130 * dVar19 + dVar20 +
                local_128;
      pdVar3[1] = (local_138 * dVar19 - local_148 * dVar18) + dStack_130 * dVar22 + dVar21 +
                  dStack_120;
      *(double *)(lVar1 + 0x40 + lVar16) =
           dVar18 * dStack_130 + dVar7 + (dVar22 * local_148 - dVar19 * dStack_140) + local_118;
      *(undefined4 *)(*local_188 + 0x48 + lVar16) = 0xffffffff;
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x50;
      plVar12 = local_188;
    } while (lVar17 < (int)local_188[1]);
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar15 = 0;
    do {
      FUN_144a1442a(param_1,param_2,iVar15);
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0x20));
  }
  ReleaseSRWLockExclusive(local_180);
  if ((local_e0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a922a FUN_1406a922a body=47 status=ok
// SIG undefined FUN_1406a922a(void)

void FUN_1406a922a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1406a925a FUN_1406a925a body=128 status=ok
// SIG undefined FUN_1406a925a(void)

void FUN_1406a925a(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  
  if (*(int *)(param_1 + 1) != 0) {
    pdVar9 = (double *)*param_1;
    dVar1 = pdVar9[2];
    dVar2 = pdVar9[5];
    dVar3 = pdVar9[1];
    dVar4 = pdVar9[4];
    dVar5 = pdVar9[8];
    dVar6 = pdVar9[7];
    dVar7 = pdVar9[0xb];
    dVar8 = pdVar9[10];
    *param_2 = (*pdVar9 + pdVar9[3] + pdVar9[6] + pdVar9[9]) * 0.25;
    param_2[1] = (dVar3 + dVar4 + dVar6 + dVar8) * 0.25;
    param_2[2] = (dVar1 + dVar2 + dVar5 + dVar7) * 0.25;
    return;
  }
  param_2[2] = DAT_14cb1cdb8;
  dVar1 = DAT_14cb1cdb0;
  *param_2 = DAT_14cb1cda8;
  param_2[1] = dVar1;
  return;
}



// FUNCTION 1406a92da FUN_1406a92da body=34 status=ok
// SIG undefined FUN_1406a92da(void)

void FUN_1406a92da(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 1406a92fc FUN_1406a92fc body=14 status=ok
// SIG undefined FUN_1406a92fc(void)

void FUN_1406a92fc(void *param_1,uint param_2)

{
  memset(param_1,0,(ulonglong)param_2 << 4);
  return;
}



// FUNCTION 1406a930a FUN_1406a930a body=896 status=ok
// SIG undefined FUN_1406a930a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1406a930a(longlong param_1,double *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  double dStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    FUN_147e3ed40(param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_148);
  }
  dVar7 = *(double *)(param_1 + 0x240);
  dVar8 = *(double *)(param_1 + 0x248);
  dVar9 = *(double *)(param_1 + 0x250);
  dVar10 = *(double *)(param_1 + 600);
  local_88 = *(double *)(param_1 + 0x270);
  dStack_80 = *(double *)(param_1 + 0x278);
  local_98 = *(undefined4 *)(param_1 + 0x260);
  uStack_94 = *(undefined4 *)(param_1 + 0x264);
  uStack_90 = *(undefined4 *)(param_1 + 0x268);
  uStack_8c = *(undefined4 *)(param_1 + 0x26c);
  dVar4 = *(double *)(param_1 + 0x280);
  dVar6 = *(double *)(param_1 + 0x288);
  dVar5 = *(double *)(param_1 + 0x290);
  local_d0 = (code *)FUN_14088b378();
  if ((local_d0 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_d0);
  }
  lVar12 = (**(code **)(*plVar1 + 0x598))(plVar1,&local_d0);
  if (lVar12 == 0) {
    lVar12 = plVar1[0x39];
    dVar4 = 0.0;
    if (lVar12 != 0) {
      if (DAT_14cac6e60 == 0) {
        local_d0 = FUN_144a7958c;
        local_e0 = FUN_14081d0ea;
        local_e8 = FUN_142b47bc4;
        local_f8 = &LAB_1478989f1;
        local_100 = &LAB_146391124;
        local_108 = L"Engine";
        local_110 = 0x10000000000;
        local_118 = 0x10000005;
        local_120 = 0x10;
        local_128 = 0x620;
        local_f0 = &local_d0;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) {
        dVar6 = 0.0;
        dVar5 = 0.0;
        dVar4 = 0.0;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30) {
          (**(code **)(*(longlong *)(lVar12 + 0x2a8) + 0x18))(lVar12 + 0x2a8,&local_d0);
          dVar5 = (local_a8 - local_c0) * 0.5;
          dVar6 = (local_b0 - local_c8) * 0.5;
          dVar4 = (local_b8 - (double)local_d0) * 0.5;
        }
        goto LAB_1406a9488;
      }
    }
    dVar6 = 0.0;
    dVar5 = 0.0;
  }
  else {
    dVar4 = *(double *)(lVar12 + 0x640) * 20.0 * dVar4;
    dVar6 = dVar6 * *(double *)(lVar12 + 0x648) * 20.0;
    dVar5 = dVar5 * *(double *)(lVar12 + 0x650) * 20.0;
  }
LAB_1406a9488:
  auVar11 = _DAT_149934d80;
  dVar14 = dVar9 * dVar9 + dVar7 * dVar7;
  dVar17 = dVar10 * dVar10 + dVar8 * dVar8;
  auVar15._0_8_ = dVar14 + dVar17;
  auVar15._8_8_ = dVar14 + dVar17;
  uVar13 = -(ulonglong)(1e-08 <= auVar15._8_8_);
  auVar16 = sqrtpd(auVar15,auVar15);
  auVar18 = divpd(_DAT_149934d80,auVar16);
  auVar19._0_8_ = auVar18._0_8_ * dVar9;
  auVar19._8_8_ = auVar18._8_8_ * dVar10;
  uVar3 = (ulonglong)(dVar8 * auVar18._8_8_) & uVar13;
  auVar16._8_4_ = (int)uVar13;
  auVar16._0_8_ = -(ulonglong)(1e-08 <= auVar15._0_8_);
  auVar16._12_4_ = (int)(uVar13 >> 0x20);
  auVar16 = blendvpd(_DAT_149935300,auVar19,auVar16);
  *param_2 = dVar4;
  param_2[1] = dVar6;
  param_2[2] = dVar5;
  auVar2._8_4_ = (int)uVar3;
  auVar2._0_8_ = (ulonglong)(dVar7 * auVar18._0_8_) & -(ulonglong)(1e-08 <= auVar15._0_8_);
  auVar2._12_4_ = (int)(uVar3 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 4) = auVar2;
  *(undefined1 (*) [16])(param_2 + 6) = auVar16;
  param_2[8] = (double)CONCAT44(uStack_94,local_98);
  param_2[9] = (double)CONCAT44(uStack_8c,uStack_90);
  param_2[10] = local_88;
  param_2[0xb] = dStack_80;
  *(undefined1 (*) [16])(param_2 + 0xc) = auVar11;
  param_2[0xe] = 1.0;
  param_2[0xf] = 0.0;
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406a9690 FUN_1406a9690 body=272 status=ok
// SIG undefined FUN_1406a9690(void)

void FUN_1406a9690(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406a97a8 FUN_1406a97a8 body=140 status=ok
// SIG undefined FUN_1406a97a8(void)

undefined8 * FUN_1406a97a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1402309ae(param_1,uVar1);
  *param_1 = &PTR_FUN_14aff2f80;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x7012;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x7012;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xf00000d0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0xff;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  return param_1;
}



// FUNCTION 1406a9834 FUN_1406a9834 body=9654 status=ok
// SIG undefined FUN_1406a9834(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1406a9834(longlong param_1,undefined8 param_2)

{
  code **ppcVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  int *piVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  code **ppcVar17;
  int *piVar18;
  byte bVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  undefined8 *puVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  longlong *plVar31;
  code *pcVar32;
  int *piVar33;
  ulonglong uVar34;
  int iVar35;
  code *pcVar36;
  bool bVar37;
  float fVar38;
  undefined1 auStack_548 [32];
  code ***local_528;
  code ***local_520;
  uint *local_518;
  longlong **local_510;
  undefined8 *local_508;
  code *local_500;
  undefined8 local_4f8;
  code *local_4f0;
  code **local_4e8;
  int *local_4e0;
  code *local_4d8;
  int local_4d0;
  int local_4cc;
  longlong local_4c8;
  longlong *local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  int local_4a8;
  undefined4 local_4a4;
  ushort local_49e;
  int local_49c;
  ushort *local_498;
  code **local_490;
  code **local_488;
  undefined8 local_480;
  uint uStack_478;
  undefined4 local_474;
  undefined1 local_46f;
  undefined4 local_46c;
  undefined1 local_468;
  uint local_460 [8];
  undefined8 local_440;
  uint local_438 [8];
  undefined8 local_418;
  longlong local_410;
  undefined8 uStack_408;
  longlong *local_400;
  longlong *local_3f8;
  longlong local_3f0;
  longlong *local_3e8;
  undefined8 local_3e0;
  longlong local_3d8;
  longlong *local_3d0;
  int local_3c8;
  longlong local_3c0;
  code *local_3b8;
  byte local_3b0;
  undefined8 local_3a8;
  byte bStack_3a0;
  undefined1 uStack_39f;
  ushort uStack_39e;
  ushort uStack_39c;
  ushort uStack_39a;
  uint local_398;
  undefined4 local_394;
  uint local_390 [8];
  undefined8 local_370;
  uint local_368 [8];
  undefined8 local_348;
  undefined8 local_340;
  longlong lStack_338;
  undefined8 uStack_330;
  undefined1 local_328 [24];
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300 [24];
  undefined8 local_2e8;
  undefined8 local_2e0;
  code **local_a0;
  code **local_98;
  code **local_90;
  longlong *local_88;
  code **local_80;
  ushort **local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_548;
  local_4d8 = *(code **)(*(longlong *)(param_1 + 0x28) + 0x548);
  local_4f8 = param_2;
  lVar14 = FUN_14009d2a0();
  lVar15 = FUN_14038fb82();
  local_440 = 0x10000000000;
  local_418 = 0x10000000000;
  local_410 = 0;
  uStack_408 = 0;
  local_3a8._0_2_ = *(ushort *)(lVar15 + 0x84);
  local_3a8._2_2_ = *(undefined2 *)(lVar14 + 0x110);
  lVar15 = 0;
  do {
    uVar34 = local_440;
    uVar4 = *(ushort *)((longlong)&local_3a8 + lVar15);
    iVar20 = uVar4 + 1;
    iVar24 = iVar20 - (int)local_440;
    if (iVar24 != 0 && (int)local_440 <= iVar20) {
      if ((int)local_440 == 0) {
LAB_1406a98fe:
        if (local_440._4_4_ <= (int)(uint)uVar4) {
          local_440 = CONCAT44(0x100,(int)local_440);
          FUN_14497ddce(local_460,uVar34 & 0xffffffff);
          iVar20 = (int)local_440 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_440 = CONCAT44(local_440._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          local_460[iVar35 >> 5] = (local_460[iVar35 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_440 + 0x1e;
        if (-1 < (int)local_440 + -1) {
          iVar35 = (int)local_440 + -1;
        }
        if (iVar35 >> 5 != (uint)(uVar4 >> 5)) goto LAB_1406a98fe;
        local_440 = CONCAT44(local_440._4_4_,iVar20);
      }
      FUN_1447c45ca(local_460,uVar34 & 0xffffffff,iVar24,0);
    }
    local_460[uVar4 >> 5] = local_460[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
    uVar34 = local_418;
    lVar15 = lVar15 + 2;
  } while (lVar15 != 4);
  uVar4 = *(ushort *)(lVar14 + 0x5c);
  iVar20 = uVar4 + 1;
  iVar24 = iVar20 - (int)local_418;
  if (iVar24 != 0 && (int)local_418 <= iVar20) {
    if ((int)local_418 == 0) {
LAB_1406a99bd:
      if (local_418._4_4_ <= (int)(uint)uVar4) {
        local_418 = CONCAT44(0x100,(int)local_418);
        FUN_14497ddce(local_438,uVar34 & 0xffffffff);
        iVar20 = (int)local_418 + iVar24;
      }
      iVar35 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar35 = iVar20;
      }
      local_418 = CONCAT44(local_418._4_4_,iVar20);
      if (iVar20 % 0x20 != 0) {
        bVar19 = -(char)(iVar20 % 0x20);
        local_438[iVar35 >> 5] = (local_438[iVar35 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
      }
    }
    else {
      iVar35 = (int)local_418 + 0x1e;
      if (-1 < (int)local_418 + -1) {
        iVar35 = (int)local_418 + -1;
      }
      if (iVar35 >> 5 != (uint)(uVar4 >> 5)) goto LAB_1406a99bd;
      local_418 = CONCAT44(local_418._4_4_,iVar20);
    }
    FUN_1447c45ca(local_438,uVar34 & 0xffffffff,iVar24,0);
  }
  local_438[uVar4 >> 5] = local_438[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  local_4e8 = (code **)(param_1 + 0x88);
  FUN_1406abdee(local_460);
  local_4f0 = (code *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_145736c08(local_4f0);
  }
  uVar4 = *(ushort *)(lVar14 + 0x50);
  iVar24 = uVar4 + 1;
  uVar5 = *(ushort *)(lVar14 + 0x124);
  local_3a8._0_2_ = uVar4;
  local_3a8._2_2_ = *(ushort *)(lVar14 + 0x4e);
  local_3a8._4_2_ = *(ushort *)(lVar14 + 0x52);
  uStack_39f = 0;
  uStack_39c = 0x6ff;
  uStack_39a = 0;
  local_398 = local_398 & 0xffffff00;
  local_370 = 0x10000000000;
  local_348 = 0x10000000000;
  local_310 = 0x10000000000;
  local_340 = 0;
  lStack_338 = 0;
  local_2e8 = 0x10000000000;
  iVar20 = iVar24;
  if (0xff < uVar4) {
    FUN_14497ddce(local_390,0);
    iVar20 = (int)local_370 + iVar24;
  }
  iVar35 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar35 = iVar20;
  }
  local_370._0_4_ = iVar20;
  if (iVar20 % 0x20 != 0) {
    bVar19 = -(char)(iVar20 % 0x20);
    local_390[iVar35 >> 5] = (local_390[iVar35 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
  }
  FUN_1447c45ca(local_390,0,iVar24,0);
  uVar8 = local_3a8._2_2_;
  local_390[uVar4 >> 5] = local_390[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  iVar20 = (int)local_370;
  iVar24 = local_3a8._2_2_ + 1;
  iVar35 = iVar24 - (int)local_370;
  if (iVar35 != 0 && (int)local_370 <= iVar24) {
    if ((int)local_370 == 0) {
LAB_1406a9b5d:
      if (local_370._4_4_ <= (int)(uint)local_3a8._2_2_) {
        local_370._4_4_ = 0x100;
        FUN_14497ddce(local_390,(int)local_370);
        iVar24 = (int)local_370 + iVar35;
      }
      iVar22 = iVar24 + 0x1f;
      if (-1 < iVar24) {
        iVar22 = iVar24;
      }
      local_370._0_4_ = iVar24;
      iVar24 = (int)local_370;
      if (iVar24 % 0x20 != 0) {
        bVar19 = -(char)(iVar24 % 0x20);
        local_390[iVar22 >> 5] = (local_390[iVar22 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        iVar24 = (int)local_370;
      }
    }
    else {
      iVar22 = (int)local_370 + 0x1e;
      if (-1 < (int)local_370 + -1) {
        iVar22 = (int)local_370 + -1;
      }
      if (iVar22 >> 5 != (uint)(local_3a8._2_2_ >> 5)) goto LAB_1406a9b5d;
    }
    local_370._0_4_ = iVar24;
    FUN_1447c45ca(local_390,iVar20,iVar35,0);
  }
  uVar4 = local_3a8._4_2_;
  local_390[uVar8 >> 5] = local_390[uVar8 >> 5] | 1 << ((byte)uVar8 & 0x1f);
  iVar20 = (int)local_370;
  iVar24 = local_3a8._4_2_ + 1;
  iVar35 = iVar24 - (int)local_370;
  if (iVar35 != 0 && (int)local_370 <= iVar24) {
    if ((int)local_370 == 0) {
LAB_1406a9bf4:
      if (local_370._4_4_ <= (int)(uint)local_3a8._4_2_) {
        local_370._4_4_ = 0x100;
        FUN_14497ddce(local_390,(int)local_370);
        iVar24 = (int)local_370 + iVar35;
      }
      iVar22 = iVar24 + 0x1f;
      if (-1 < iVar24) {
        iVar22 = iVar24;
      }
      local_370._0_4_ = iVar24;
      iVar24 = (int)local_370;
      if (iVar24 % 0x20 != 0) {
        bVar19 = -(char)(iVar24 % 0x20);
        local_390[iVar22 >> 5] = (local_390[iVar22 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        iVar24 = (int)local_370;
      }
    }
    else {
      iVar22 = (int)local_370 + 0x1e;
      if (-1 < (int)local_370 + -1) {
        iVar22 = (int)local_370 + -1;
      }
      if (iVar22 >> 5 != (uint)(local_3a8._4_2_ >> 5)) goto LAB_1406a9bf4;
    }
    local_370._0_4_ = iVar24;
    FUN_1447c45ca(local_390,iVar20,iVar35,0);
  }
  local_390[uVar4 >> 5] = local_390[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  iVar20 = (int)local_370;
  iVar24 = uVar5 + 1;
  iVar35 = iVar24 - (int)local_370;
  if (iVar35 != 0 && (int)local_370 <= iVar24) {
    if ((int)local_370 == 0) {
LAB_1406a9c8c:
      if (local_370._4_4_ <= (int)(uint)uVar5) {
        local_370._4_4_ = 0x100;
        FUN_14497ddce(local_390,(int)local_370);
        iVar24 = (int)local_370 + iVar35;
      }
      iVar22 = iVar24 + 0x1f;
      if (-1 < iVar24) {
        iVar22 = iVar24;
      }
      local_370._0_4_ = iVar24;
      iVar24 = (int)local_370;
      if (iVar24 % 0x20 != 0) {
        bVar19 = -(char)(iVar24 % 0x20);
        local_390[iVar22 >> 5] = (local_390[iVar22 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        iVar24 = (int)local_370;
      }
    }
    else {
      iVar22 = (int)local_370 + 0x1e;
      if (-1 < (int)local_370 + -1) {
        iVar22 = (int)local_370 + -1;
      }
      if (iVar22 >> 5 != (uint)(uVar5 >> 5)) goto LAB_1406a9c8c;
    }
    local_370._0_4_ = iVar24;
    FUN_1447c45ca(local_390,iVar20,iVar35,0);
  }
  local_390[uVar5 >> 5] = local_390[uVar5 >> 5] | 1 << ((byte)uVar5 & 0x1f);
  uVar34 = local_348;
  uVar4 = *(ushort *)(lVar14 + 0x122);
  iVar20 = uVar4 + 1;
  iVar24 = iVar20 - (int)local_348;
  if (iVar24 != 0 && (int)local_348 <= iVar20) {
    if ((int)local_348 == 0) {
LAB_1406a9d33:
      if (local_348._4_4_ <= (int)(uint)uVar4) {
        local_348 = CONCAT44(0x100,(int)local_348);
        FUN_14497ddce(local_368,uVar34 & 0xffffffff);
        iVar20 = (int)local_348 + iVar24;
      }
      iVar35 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar35 = iVar20;
      }
      local_348 = CONCAT44(local_348._4_4_,iVar20);
      if (iVar20 % 0x20 != 0) {
        bVar19 = -(char)(iVar20 % 0x20);
        local_368[iVar35 >> 5] = (local_368[iVar35 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
      }
    }
    else {
      iVar35 = (int)local_348 + 0x1e;
      if (-1 < (int)local_348 + -1) {
        iVar35 = (int)local_348 + -1;
      }
      if (iVar35 >> 5 != (uint)(uVar4 >> 5)) goto LAB_1406a9d33;
      local_348 = CONCAT44(local_348._4_4_,iVar20);
    }
    FUN_1447c45ca(local_368,uVar34 & 0xffffffff,iVar24,0);
  }
  local_368[uVar4 >> 5] = local_368[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  if ((((ushort)local_3a8 != 0xffff) && (local_3a8._2_2_ != 0xffff)) && (local_3a8._4_2_ != 0xffff))
  {
    lVar15 = *(longlong *)(param_1 + 0x28);
    local_68 = lVar15 + 0x28;
    cVar10 = *(char *)(lVar15 + 0x298);
    if (cVar10 == '\0') {
      *(int *)(lVar15 + 0x28c) = *(int *)(lVar15 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar15 + 0x28c) = *(int *)(lVar15 + 0x28c) + 1;
      UNLOCK();
    }
    local_70 = local_390;
    local_60 = FUN_1403b8464(&local_70);
    iVar20 = *(int *)(lVar15 + 0x38);
    while (local_60 != iVar20) {
      piVar28 = *(int **)(*(longlong *)(local_68 + 0x60) + (longlong)local_60 * 8);
      if (cVar10 == '\0') {
        piVar28[5] = 0;
        local_4e0 = piVar28;
      }
      else {
        local_4e0 = (int *)0x0;
      }
      if (*(ushort *)(piVar28 + 3) != 0) {
        plVar16 = *(longlong **)(piVar28 + 10);
        lVar15 = (ulonglong)*(ushort *)(piVar28 + 3) << 5;
        do {
          if (*(ushort *)((longlong)plVar16 + 0x1e) == local_3a8._4_2_) goto LAB_1406aba03;
          plVar16 = plVar16 + 4;
          lVar15 = lVar15 + -0x20;
        } while (lVar15 != 0);
      }
      plVar16 = (longlong *)0x0;
LAB_1406aba03:
      local_4cc = piVar28[5];
      local_500 = (code *)piVar28;
      if (local_4cc == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
      }
      pcVar36 = local_500;
      LOCK();
      *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
      UNLOCK();
      local_4b8 = *plVar16;
      if (*(ushort *)(piVar28 + 3) != 0) {
        plVar31 = *(longlong **)(piVar28 + 10);
        lVar15 = (ulonglong)*(ushort *)(piVar28 + 3) << 5;
        do {
          if (*(ushort *)((longlong)plVar31 + 0x1e) == local_3a8._2_2_) goto LAB_1406aba66;
          plVar31 = plVar31 + 4;
          lVar15 = lVar15 + -0x20;
        } while (lVar15 != 0);
      }
      plVar31 = (longlong *)0x0;
LAB_1406aba66:
      local_4d0 = *(int *)((longlong)local_500 + 0x14);
      local_4c0 = plVar16;
      if (local_4d0 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar31 + 1));
      }
      LOCK();
      *(int *)(plVar31 + 3) = (int)plVar31[3] + 1;
      UNLOCK();
      local_4c8 = *plVar31;
      uVar4 = *(ushort *)((longlong)pcVar36 + 0xc);
      if (uVar4 != 0) {
        plVar16 = *(longlong **)((longlong)pcVar36 + 0x28);
        lVar15 = (ulonglong)uVar4 << 5;
        do {
          if (*(ushort *)((longlong)plVar16 + 0x1e) == (ushort)local_3a8) goto LAB_1406abac0;
          plVar16 = plVar16 + 4;
          lVar15 = lVar15 + -0x20;
        } while (lVar15 != 0);
      }
      plVar16 = (longlong *)0x0;
LAB_1406abac0:
      iVar24 = *(int *)((longlong)local_500 + 0x14);
      if (iVar24 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
      }
      lVar15 = local_4b8;
      LOCK();
      *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
      UNLOCK();
      local_4b0 = *plVar16;
      local_3f8 = (longlong *)CONCAT44(local_3f8._4_4_,iVar24);
      local_3e0 = CONCAT44(local_3e0._4_4_,local_4d0);
      local_3d8 = local_4c8;
      local_3d0 = local_4c0;
      local_3c8 = local_4cc;
      local_3c0 = local_4b8;
      uVar4 = *(ushort *)((longlong)local_500 + 0xe);
      local_400 = plVar16;
      local_3f0 = local_4b0;
      local_3e8 = plVar31;
      if ((ulonglong)uVar4 != 0) {
        uVar34 = 0;
        do {
          uVar6 = *(undefined4 *)(local_4c8 + uVar34 * 4);
          FUN_1406ae69a((ulonglong)*(ushort *)(local_4b0 + uVar34 * 4) * 0x128 +
                        *(longlong *)(local_4d8 + 8),&local_490,*(undefined4 *)(lVar15 + uVar34 * 4)
                       );
          local_480._0_2_ = SUB82(local_490,0);
          local_480._2_2_ = (undefined2)((ulonglong)local_490 >> 0x10);
          local_480._4_4_ = uVar6;
          FUN_145736b8c(local_4f0,&local_480);
          uVar34 = uVar34 + 1;
        } while (uVar4 != uVar34);
      }
      FUN_145736c38(&local_400);
      if (local_4e0 != (int *)0x0) {
        local_4e0[5] = 1;
      }
      local_60 = FUN_1403b8464(&local_70);
    }
    if (local_70 != (uint *)0x0) {
      if (*(char *)(local_68 + 0x270) == '\0') {
        *(int *)(local_68 + 0x264) = *(int *)(local_68 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_68 + 0x264) = *(int *)(local_68 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_340 != 0) {
    FUN_1400020a8();
  }
  iVar20 = *(int *)(param_1 + 0x80);
  if (1 < (longlong)iVar20) {
    lVar15 = *(longlong *)local_4f0;
    memset(&local_398,0,0x2f0);
    local_3a8._0_2_ = (ushort)lVar15;
    local_3a8._2_2_ = (ushort)((ulonglong)lVar15 >> 0x10);
    local_3a8._4_2_ = (ushort)((ulonglong)lVar15 >> 0x20);
    local_3a8._6_2_ = (ushort)((ulonglong)lVar15 >> 0x30);
    lVar15 = lVar15 + (longlong)iVar20 * 8 + -8;
    bStack_3a0 = (byte)lVar15;
    uStack_39f = (undefined1)((ulonglong)lVar15 >> 8);
    uStack_39e = (ushort)((ulonglong)lVar15 >> 0x10);
    uStack_39c = (ushort)((ulonglong)lVar15 >> 0x20);
    uStack_39a = (ushort)((ulonglong)lVar15 >> 0x30);
    fVar38 = logf((float)iVar20);
    local_398 = (uint)(longlong)(fVar38 + fVar38);
    puVar27 = &local_3a8;
    do {
      piVar18 = (int *)*puVar27;
      piVar28 = (int *)puVar27[1];
      iVar20 = *(int *)(puVar27 + 2);
      iVar24 = (int)((ulonglong)((longlong)piVar28 - (longlong)piVar18) >> 3);
      piVar30 = piVar28;
      pcVar36 = (code *)piVar18;
      if (iVar20 != 0) {
LAB_1406ab6c4:
        if (8 < (int)(iVar24 + 1U)) {
          uVar34 = (ulonglong)(iVar24 + 1U >> 1);
          uVar7 = *(undefined8 *)(piVar18 + uVar34 * 2);
          *(undefined8 *)(piVar18 + uVar34 * 2) = *(undefined8 *)piVar18;
          *(undefined8 *)piVar18 = uVar7;
          piVar23 = piVar28 + 2;
          piVar21 = piVar18;
          do {
            piVar9 = piVar21 + 2;
            piVar29 = piVar21 + 2;
            do {
              piVar21 = piVar29;
              pcVar32 = (code *)piVar9;
              if (piVar28 < piVar21) break;
              piVar9 = (int *)((longlong)pcVar32 + 8);
              piVar29 = piVar21 + 2;
            } while (*piVar18 != piVar21[1]);
            piVar9 = piVar23 + -4;
            do {
              piVar29 = piVar23;
              piVar33 = piVar9;
              piVar23 = piVar29 + -2;
              if (piVar23 <= piVar18) break;
              piVar9 = piVar33 + -2;
            } while (*piVar23 != piVar18[1]);
            if (piVar23 < piVar21) goto LAB_1406abd54;
            uVar7 = *(undefined8 *)piVar21;
            *(undefined8 *)piVar21 = *(undefined8 *)piVar23;
            *(undefined8 *)piVar23 = uVar7;
          } while( true );
        }
        for (; pcVar32 = local_500, piVar23 = piVar18, piVar30 = piVar18, piVar18 < piVar28;
            piVar28 = piVar28 + -2) {
          while (piVar21 = piVar23, piVar30 = piVar30 + 2, piVar30 <= piVar28) {
            piVar23 = piVar30;
            if (*piVar21 != piVar30[1]) {
              piVar23 = piVar21;
            }
          }
          uVar7 = *(undefined8 *)piVar21;
          *(undefined8 *)piVar21 = *(undefined8 *)piVar28;
          *(undefined8 *)piVar28 = uVar7;
        }
        goto LAB_1406ab717;
      }
LAB_1406abc84:
      FUN_1476b2e52(piVar18);
      pcVar32 = local_500;
LAB_1406ab717:
      local_500 = pcVar32;
      puVar27 = puVar27 + -3;
    } while (&local_3a8 <= puVar27);
  }
  pcVar36 = (code *)(param_1 + 0x40);
  bVar19 = local_70._1_1_ & 0xe4;
  local_70._0_2_ = CONCAT11(bVar19 + 1,(undefined1)local_70);
  bStack_3a0 = 0;
  local_3a8._0_2_ = 0x7c9c;
  local_3a8._2_2_ = 0x4012;
  local_3a8._4_2_ = 1;
  local_3a8._6_2_ = 0;
  plVar16 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_14a4e0bc0;
  local_400 = plVar16 + 2;
  plVar16[2] = (longlong)&PTR_FUN_14a4e0bd8;
  plVar16[3] = (longlong)pcVar36;
  plVar16[4] = (longlong)local_4d8;
  local_500 = pcVar36;
  local_3f8 = plVar16;
  if (plVar16 == (longlong *)0x0) {
    local_528 = (code ***)&local_3a8;
    FUN_1406abf4a(local_4f8,&local_4a4,&local_70,&local_400);
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    local_528 = (code ***)&local_3a8;
    FUN_1406abf4a(local_4f8,&local_4a4,&local_70,&local_400);
    LOCK();
    plVar31 = plVar16 + 1;
    *(int *)plVar31 = (int)*plVar31 + -1;
    UNLOCK();
    if ((int)*plVar31 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar28 = (int *)((longlong)plVar16 + 0xc);
      *piVar28 = *piVar28 + -1;
      UNLOCK();
      if (*piVar28 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  uVar4 = *(ushort *)(lVar14 + 0x50);
  uVar25 = uVar4 + 1;
  uVar7 = *(undefined8 *)(lVar14 + 0xbc);
  uVar5 = *(ushort *)(lVar14 + 0x124);
  puVar2 = local_390 + 2;
  local_3a8._0_2_ = uVar4;
  local_3a8._2_2_ = *(ushort *)(lVar14 + 0x52);
  local_3a8._4_2_ = (ushort)uVar7;
  local_3a8._6_2_ = (ushort)((ulonglong)uVar7 >> 0x10);
  bStack_3a0 = (byte)((ulonglong)uVar7 >> 0x20);
  uStack_39f = (undefined1)((ulonglong)uVar7 >> 0x28);
  uStack_39e = (ushort)((ulonglong)uVar7 >> 0x30);
  uStack_39c = (ushort)*(undefined4 *)(lVar14 + 0xc4);
  uStack_39a = (ushort)((uint)*(undefined4 *)(lVar14 + 0xc4) >> 0x10);
  local_398._0_2_ = (ushort)(byte)local_398;
  local_394 = 0x6ff;
  local_390[0] = local_390[0] & 0xffffff00;
  local_368[0] = 0;
  local_368[1] = 0x100;
  local_340 = 0x10000000000;
  local_308 = 0x10000000000;
  lStack_338 = 0;
  uStack_330 = 0;
  local_2e0 = 0x10000000000;
  uVar13 = uVar25;
  if (0xff < uVar4) {
    FUN_14497ddce(puVar2,0);
    uVar13 = local_368[0] + uVar25;
  }
  uVar12 = uVar13 + 0x1f;
  if (-1 < (int)uVar13) {
    uVar12 = uVar13;
  }
  local_368[0] = uVar13;
  if ((int)uVar13 % 0x20 != 0) {
    bVar19 = -(char)((int)uVar13 % 0x20);
    local_390[(longlong)((int)uVar12 >> 5) + 2] =
         (local_390[(longlong)((int)uVar12 >> 5) + 2] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
  }
  FUN_1447c45ca(puVar2,0,uVar25,0);
  uVar8 = local_3a8._2_2_;
  local_390[(ulonglong)(uVar4 >> 5) + 2] =
       local_390[(ulonglong)(uVar4 >> 5) + 2] | 1 << ((byte)uVar4 & 0x1f);
  uVar13 = local_368[0];
  uVar25 = local_3a8._2_2_ + 1;
  iVar20 = uVar25 - local_368[0];
  if (iVar20 != 0 && (int)local_368[0] <= (int)uVar25) {
    if (local_368[0] == 0) {
LAB_1406aa03e:
      if ((int)local_368[1] <= (int)(uint)local_3a8._2_2_) {
        local_368[1] = 0x100;
        FUN_14497ddce(puVar2,local_368[0]);
        uVar25 = local_368[0] + iVar20;
      }
      uVar12 = uVar25 + 0x1f;
      if (-1 < (int)uVar25) {
        uVar12 = uVar25;
      }
      local_368[0] = uVar25;
      uVar25 = local_368[0];
      if ((int)uVar25 % 0x20 != 0) {
        bVar19 = -(char)((int)uVar25 % 0x20);
        local_390[(longlong)((int)uVar12 >> 5) + 2] =
             (local_390[(longlong)((int)uVar12 >> 5) + 2] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        uVar25 = local_368[0];
      }
    }
    else {
      iVar24 = local_368[0] + 0x1e;
      if (-1 < (int)(local_368[0] - 1)) {
        iVar24 = local_368[0] - 1;
      }
      if (iVar24 >> 5 != (uint)(local_3a8._2_2_ >> 5)) goto LAB_1406aa03e;
    }
    local_368[0] = uVar25;
    FUN_1447c45ca(puVar2,uVar13,iVar20,0);
  }
  local_390[(ulonglong)(uVar8 >> 5) + 2] =
       local_390[(ulonglong)(uVar8 >> 5) + 2] | 1 << ((byte)uVar8 & 0x1f);
  uVar13 = local_368[0];
  uVar25 = uVar5 + 1;
  iVar20 = uVar25 - local_368[0];
  if (iVar20 != 0 && (int)local_368[0] <= (int)uVar25) {
    if (local_368[0] == 0) {
LAB_1406aa0cd:
      if ((int)local_368[1] <= (int)(uint)uVar5) {
        local_368[1] = 0x100;
        FUN_14497ddce(puVar2,local_368[0]);
        uVar25 = local_368[0] + iVar20;
      }
      uVar12 = uVar25 + 0x1f;
      if (-1 < (int)uVar25) {
        uVar12 = uVar25;
      }
      local_368[0] = uVar25;
      uVar25 = local_368[0];
      if ((int)uVar25 % 0x20 != 0) {
        bVar19 = -(char)((int)uVar25 % 0x20);
        local_390[(longlong)((int)uVar12 >> 5) + 2] =
             (local_390[(longlong)((int)uVar12 >> 5) + 2] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        uVar25 = local_368[0];
      }
    }
    else {
      iVar24 = local_368[0] + 0x1e;
      if (-1 < (int)(local_368[0] - 1)) {
        iVar24 = local_368[0] - 1;
      }
      if (iVar24 >> 5 != (uint)(uVar5 >> 5)) goto LAB_1406aa0cd;
    }
    local_368[0] = uVar25;
    FUN_1447c45ca(puVar2,uVar13,iVar20,0);
  }
  local_390[(ulonglong)(uVar5 >> 5) + 2] =
       local_390[(ulonglong)(uVar5 >> 5) + 2] | 1 << ((byte)uVar5 & 0x1f);
  uVar34 = local_340;
  uVar4 = *(ushort *)(lVar14 + 0x122);
  iVar20 = uVar4 + 1;
  iVar24 = iVar20 - (int)local_340;
  if (iVar24 != 0 && (int)local_340 <= iVar20) {
    if ((int)local_340 == 0) {
LAB_1406aa17e:
      if (local_340._4_4_ <= (int)(uint)uVar4) {
        local_340 = CONCAT44(0x100,(int)local_340);
        FUN_14497ddce(local_368 + 2,uVar34 & 0xffffffff);
        iVar20 = (int)local_340 + iVar24;
      }
      iVar35 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar35 = iVar20;
      }
      local_340 = CONCAT44(local_340._4_4_,iVar20);
      if (iVar20 % 0x20 != 0) {
        bVar19 = -(char)(iVar20 % 0x20);
        local_368[(longlong)(iVar35 >> 5) + 2] =
             (local_368[(longlong)(iVar35 >> 5) + 2] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
      }
    }
    else {
      iVar35 = (int)local_340 + 0x1e;
      if (-1 < (int)local_340 + -1) {
        iVar35 = (int)local_340 + -1;
      }
      if (iVar35 >> 5 != (uint)(uVar4 >> 5)) goto LAB_1406aa17e;
      local_340 = CONCAT44(local_340._4_4_,iVar20);
    }
    FUN_1447c45ca(local_368 + 2,uVar34 & 0xffffffff,iVar24,0);
  }
  local_368[(ulonglong)(uVar4 >> 5) + 2] =
       local_368[(ulonglong)(uVar4 >> 5) + 2] | 1 << ((byte)uVar4 & 0x1f);
  FUN_1406abdee(puVar2,local_4e8);
  uVar4 = (ushort)local_3a8;
  local_398 = CONCAT22(local_398._2_2_,0x400);
  local_49e = 0x400;
  local_3b8 = FUN_1476b2fa2;
  local_3b0 = 3;
  uVar13 = (uint)(ushort)local_3a8;
  if ((uVar13 == 0xffff) || (local_3a8._2_2_ == 0xffff)) {
LAB_1406aa299:
    local_4a8 = -1;
  }
  else {
    lVar26 = *(longlong *)(param_1 + 0x28) + 0x28;
    lVar15 = FUN_14482820e(lVar26);
    uVar5 = local_3a8._2_2_;
    if (*(uint *)(lVar15 + 0x20) == (uint)uVar4 || (int)*(uint *)(lVar15 + 0x20) < (int)uVar13) {
      bVar37 = false;
    }
    else {
      bVar37 = (*(uint *)(lVar15 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0;
    }
    lVar15 = FUN_14482820e(lVar26);
    if (((uVar5 == 0xffff) ||
        (*(uint *)(lVar15 + 0x20) == (uint)uVar5 || (int)*(uint *)(lVar15 + 0x20) < (int)(uint)uVar5
        )) || (!(bool)(bVar37 & (*(uint *)(lVar15 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) &
                                1) != 0))) goto LAB_1406aa299;
    ppcVar17 = (code **)FUN_14001cc68(0x50,0x10);
    ppcVar17[1] = (code *)&DAT_100000001;
    *ppcVar17 = (code *)&PTR_FUN_14a4e0be0;
    local_4e8 = ppcVar17 + 2;
    ppcVar17[2] = (code *)&PTR_FUN_14a4e0bf8;
    ppcVar17[3] = local_4f0;
    ppcVar17[4] = local_500;
    ppcVar17[5] = local_4d8;
    *(uint *)(ppcVar17 + 6) = CONCAT22(local_3a8._2_2_,(ushort)local_3a8);
    *(uint *)((longlong)ppcVar17 + 0x34) = CONCAT22(local_3a8._6_2_,local_3a8._4_2_);
    *(uint *)(ppcVar17 + 7) = CONCAT22(uStack_39e,CONCAT11(uStack_39f,bStack_3a0));
    *(uint *)((longlong)ppcVar17 + 0x3c) = CONCAT22(uStack_39a,uStack_39c);
    *(uint *)((longlong)ppcVar17 + 0x3c) = CONCAT22(uStack_39a,uStack_39c);
    *(uint *)(ppcVar17 + 8) = local_398;
    *(undefined4 *)((longlong)ppcVar17 + 0x44) = local_394;
    *(uint *)(ppcVar17 + 9) = local_390[0];
    if (ppcVar17 != (code **)0x0) {
      LOCK();
      *(int *)(ppcVar17 + 1) = *(int *)(ppcVar17 + 1) + 1;
      UNLOCK();
      LOCK();
      ppcVar1 = ppcVar17 + 1;
      *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
      UNLOCK();
      if (*(int *)ppcVar1 == 0) {
        (**(code **)*ppcVar17)(ppcVar17);
        LOCK();
        piVar28 = (int *)((longlong)ppcVar17 + 0xc);
        *piVar28 = *piVar28 + -1;
        UNLOCK();
        if (*piVar28 == 0) {
          (**(code **)(*ppcVar17 + 0x10))(ppcVar17);
        }
      }
    }
    local_3e0 = 0;
    FUN_1400abb7c(&local_400,local_328);
    local_50 = 0;
    FUN_1400abb7c(&local_70,local_300);
    FUN_145736d32(&local_3a8,&local_400);
    local_78 = &local_498;
    local_80 = (code **)&LAB_1476b3014;
    local_88 = (longlong *)CONCAT71(local_88._1_7_,local_3b0);
    local_498 = (ushort *)&local_3a8;
    (*(code *)(&PTR_LAB_14a475bc0)[local_3b0])(&local_90);
    local_a0 = local_4e8;
    if (ppcVar17 != (code **)0x0) {
      LOCK();
      *(int *)(ppcVar17 + 1) = *(int *)(ppcVar17 + 1) + 1;
      UNLOCK();
    }
    local_520 = &local_80;
    local_528 = &local_90;
    local_518 = puVar2;
    local_510 = &local_400;
    local_508 = &local_70;
    local_98 = ppcVar17;
    FUN_1406ac01c(local_4f8,&local_4a8,&local_49e,&local_a0);
    if (local_4a8 == -1) {
      if ((local_49e & 0x400) != 0) {
        FUN_145c71394(local_4f8,&local_480);
        local_4a8 = CONCAT22(local_480._2_2_,(undefined2)local_480);
        if (local_4a8 != -1) goto LAB_1406ab8e2;
      }
    }
    else {
LAB_1406ab8e2:
      uVar7 = local_4f8;
      uStack_478 = uStack_478 & 0xffffff00;
      local_480._0_2_ = 0xa336;
      local_480._2_2_ = 0x4332;
      local_480._4_4_ = 1;
      local_490 = local_4e8;
      if (ppcVar17 != (code **)0x0) {
        LOCK();
        *(int *)(ppcVar17 + 1) = *(int *)(ppcVar17 + 1) + 1;
        UNLOCK();
      }
      local_528 = (code ***)&local_480;
      local_488 = ppcVar17;
      FUN_1406abf4a(local_4f8,&local_49c,&local_49e,&local_490);
      FUN_1407ce0e2(uVar7,local_4a8,0xffffffff);
      FUN_1407cdf34(uVar7,local_4a8,local_49c);
    }
    if (ppcVar17 != (code **)0x0) {
      LOCK();
      ppcVar1 = ppcVar17 + 1;
      *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
      UNLOCK();
      if (*(int *)ppcVar1 == 0) {
        (**(code **)*ppcVar17)(ppcVar17);
        LOCK();
        piVar28 = (int *)((longlong)ppcVar17 + 0xc);
        *piVar28 = *piVar28 + -1;
        UNLOCK();
        if (*piVar28 == 0) {
          (**(code **)(*ppcVar17 + 0x10))(ppcVar17);
        }
      }
    }
  }
  if (lStack_338 != 0) {
    FUN_1400020a8();
  }
  local_480._2_2_ = *(undefined2 *)(lVar14 + 0x4a);
  local_480._0_2_ = *(undefined2 *)(lVar14 + 0x4e);
  local_474 = *(undefined4 *)(lVar14 + 0xc4);
  local_480._4_4_ = (undefined4)*(undefined8 *)(lVar14 + 0xbc);
  uStack_478 = (uint)((ulonglong)*(undefined8 *)(lVar14 + 0xbc) >> 0x20);
  local_46f = 0;
  local_46c = 0x6ff;
  local_468 = 0;
  FUN_1406ac14e(&local_3a8,&local_480,local_460);
  local_49e = (ushort)local_398 & 0xfdff;
  local_a0 = (code **)FUN_140731f6e;
  local_98 = (code **)CONCAT71(local_98._1_7_,3);
  if ((((ushort)local_3a8 == 0xffff) || (local_3a8._2_2_ == 0xffff)) ||
     (cVar10 = FUN_1406abeda(&local_3a8,*(longlong *)(param_1 + 0x28) + 0x28), cVar10 == '\0')) {
    local_49c = -1;
    goto LAB_1406ab078;
  }
  plVar16 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_14a4e0c00;
  plVar16[2] = (longlong)&PTR_FUN_14a4e0c18;
  plVar16[3] = (longlong)local_500;
  *(uint *)(plVar16 + 4) = CONCAT22(local_3a8._2_2_,(ushort)local_3a8);
  *(uint *)((longlong)plVar16 + 0x24) = CONCAT22(local_3a8._6_2_,local_3a8._4_2_);
  *(uint *)(plVar16 + 5) = CONCAT22(uStack_39e,CONCAT11(uStack_39f,bStack_3a0));
  *(uint *)((longlong)plVar16 + 0x2c) = CONCAT22(uStack_39a,uStack_39c);
  *(uint *)((longlong)plVar16 + 0x2c) = CONCAT22(uStack_39a,uStack_39c);
  *(uint *)(plVar16 + 6) = local_398;
  *(undefined4 *)((longlong)plVar16 + 0x34) = local_394;
  *(uint *)(plVar16 + 7) = local_390[0];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar31 = plVar16 + 1;
    *(int *)plVar31 = (int)*plVar31 + -1;
    UNLOCK();
    if ((int)*plVar31 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar28 = (int *)((longlong)plVar16 + 0xc);
      *piVar28 = *piVar28 + -1;
      UNLOCK();
      if (*piVar28 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  local_3e0 = 0;
  uVar13 = (int)local_308 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar13) {
    uVar25 = 0x100;
    if (0x100 < uVar13) {
      uVar25 = uVar13;
    }
    local_3e0 = (ulonglong)uVar25 << 0x20;
    FUN_14497ddce(&local_400,0);
  }
  local_3e0 = CONCAT44(local_3e0._4_4_,(int)local_308);
  if ((int)local_308 != 0) {
    memcpy(&local_400,local_328,(ulonglong)((int)local_308 + 0x1fU >> 3 & 0xfffffffc));
  }
  local_50 = 0;
  uVar13 = (int)local_2e0 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar13) {
    uVar25 = 0x100;
    if (0x100 < uVar13) {
      uVar25 = uVar13;
    }
    local_50 = (ulonglong)uVar25 << 0x20;
    FUN_14497ddce(&local_70,0);
  }
  local_50 = CONCAT44(local_50._4_4_,(int)local_2e0);
  if ((int)local_2e0 != 0) {
    memcpy(&local_70,local_300,(ulonglong)((int)local_2e0 + 0x1fU >> 3 & 0xfffffffc));
  }
  uVar4 = (ushort)local_3a8;
  uVar34 = local_3e0;
  iVar20 = (ushort)local_3a8 + 1;
  iVar24 = iVar20 - (int)local_3e0;
  if (iVar24 != 0 && (int)local_3e0 <= iVar20) {
    if ((int)local_3e0 == 0) {
LAB_1406aa502:
      if (local_3e0._4_4_ <= (int)(uint)(ushort)local_3a8) {
        local_3e0 = CONCAT44(0x100,(int)local_3e0);
        FUN_14497ddce(&local_400,uVar34 & 0xffffffff);
        iVar20 = (int)local_3e0 + iVar24;
      }
      iVar35 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar35 = iVar20;
      }
      local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
      if (iVar20 % 0x20 != 0) {
        bVar19 = -(char)(iVar20 % 0x20);
        *(uint *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) << (bVar19 & 0x1f))
             >> (bVar19 & 0x1f);
      }
    }
    else {
      iVar35 = (int)local_3e0 + 0x1e;
      if (-1 < (int)local_3e0 + -1) {
        iVar35 = (int)local_3e0 + -1;
      }
      if (iVar35 >> 5 != (uint)((ushort)local_3a8 >> 5)) goto LAB_1406aa502;
      local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
    }
    FUN_1447c45ca(&local_400,uVar34 & 0xffffffff,iVar24,0);
  }
  puVar3 = (uint *)((longlong)&local_400 + (ulonglong)(uVar4 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
  uVar4 = local_3a8._2_2_;
  uVar34 = local_3e0;
  iVar20 = local_3a8._2_2_ + 1;
  iVar24 = iVar20 - (int)local_3e0;
  if (iVar24 != 0 && (int)local_3e0 <= iVar20) {
    if ((int)local_3e0 == 0) {
LAB_1406aa5b4:
      if (local_3e0._4_4_ <= (int)(uint)local_3a8._2_2_) {
        local_3e0 = CONCAT44(0x100,(int)local_3e0);
        FUN_14497ddce(&local_400,uVar34 & 0xffffffff);
        iVar20 = (int)local_3e0 + iVar24;
      }
      iVar35 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar35 = iVar20;
      }
      local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
      if (iVar20 % 0x20 != 0) {
        bVar19 = -(char)(iVar20 % 0x20);
        *(uint *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) << (bVar19 & 0x1f))
             >> (bVar19 & 0x1f);
      }
    }
    else {
      iVar35 = (int)local_3e0 + 0x1e;
      if (-1 < (int)local_3e0 + -1) {
        iVar35 = (int)local_3e0 + -1;
      }
      if (iVar35 >> 5 != (uint)(local_3a8._2_2_ >> 5)) goto LAB_1406aa5b4;
      local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
    }
    FUN_1447c45ca(&local_400,uVar34 & 0xffffffff,iVar24,0);
  }
  puVar3 = (uint *)((longlong)&local_400 + (ulonglong)(uVar4 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
  uVar4 = local_3a8._4_2_;
  uVar34 = local_3e0;
  uVar13 = (uint)local_3a8._4_2_;
  if (uVar13 != 0xffff) {
    iVar20 = local_3a8._4_2_ + 1;
    iVar24 = iVar20 - (int)local_3e0;
    if (iVar24 != 0 && (int)local_3e0 <= iVar20) {
      if ((int)local_3e0 == 0) {
LAB_1406aa66d:
        if (local_3e0._4_4_ <= (int)(uint)local_3a8._4_2_) {
          local_3e0 = CONCAT44(0x100,(int)local_3e0);
          FUN_14497ddce(&local_400,uVar34 & 0xffffffff);
          iVar20 = (int)local_3e0 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) <<
                     (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_3e0 + 0x1e;
        if (-1 < (int)local_3e0 + -1) {
          iVar35 = (int)local_3e0 + -1;
        }
        if (iVar35 >> 5 != (uint)(local_3a8._4_2_ >> 5)) goto LAB_1406aa66d;
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_400,uVar34 & 0xffffffff,iVar24,0);
      uVar13 = (uint)local_3a8._4_2_;
      iVar20 = local_3a8._4_2_ + 1;
    }
    uVar5 = local_3a8._4_2_;
    puVar3 = (uint *)((longlong)&local_400 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
    uVar34 = local_50;
    iVar24 = iVar20 - (int)local_50;
    if (iVar24 != 0 && (int)local_50 <= iVar20) {
      if ((int)local_50 == 0) {
LAB_1406aa731:
        if (local_50._4_4_ <= (int)uVar13) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,uVar34 & 0xffffffff);
          iVar20 = (int)local_50 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar35 = (int)local_50 + -1;
        }
        if (iVar35 >> 5 != (uint)(uVar5 >> 5)) goto LAB_1406aa731;
        local_50 = CONCAT44(local_50._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_70,uVar34 & 0xffffffff,iVar24,0);
    }
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar13 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar13 & 0x1f);
  }
  uVar4 = local_3a8._6_2_;
  uVar34 = local_3e0;
  uVar13 = (uint)local_3a8._6_2_;
  if (uVar13 != 0xffff) {
    iVar20 = local_3a8._6_2_ + 1;
    iVar24 = iVar20 - (int)local_3e0;
    if (iVar24 != 0 && (int)local_3e0 <= iVar20) {
      if ((int)local_3e0 == 0) {
LAB_1406aa7f1:
        if (local_3e0._4_4_ <= (int)(uint)local_3a8._6_2_) {
          local_3e0 = CONCAT44(0x100,(int)local_3e0);
          FUN_14497ddce(&local_400,uVar34 & 0xffffffff);
          iVar20 = (int)local_3e0 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) <<
                     (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_3e0 + 0x1e;
        if (-1 < (int)local_3e0 + -1) {
          iVar35 = (int)local_3e0 + -1;
        }
        if (iVar35 >> 5 != (uint)(local_3a8._6_2_ >> 5)) goto LAB_1406aa7f1;
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_400,uVar34 & 0xffffffff,iVar24,0);
      uVar13 = (uint)local_3a8._6_2_;
      iVar20 = local_3a8._6_2_ + 1;
    }
    uVar5 = local_3a8._6_2_;
    puVar3 = (uint *)((longlong)&local_400 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
    uVar34 = local_50;
    iVar24 = iVar20 - (int)local_50;
    if (iVar24 != 0 && (int)local_50 <= iVar20) {
      if ((int)local_50 == 0) {
LAB_1406aa8b5:
        if (local_50._4_4_ <= (int)uVar13) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,uVar34 & 0xffffffff);
          iVar20 = (int)local_50 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar35 = (int)local_50 + -1;
        }
        if (iVar35 >> 5 != (uint)(uVar5 >> 5)) goto LAB_1406aa8b5;
        local_50 = CONCAT44(local_50._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_70,uVar34 & 0xffffffff,iVar24,0);
    }
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar13 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar13 & 0x1f);
  }
  bVar19 = bStack_3a0;
  uVar34 = local_3e0;
  uVar4 = CONCAT11(uStack_39f,bStack_3a0);
  uVar13 = (uint)uVar4;
  if (uVar13 != 0xffff) {
    iVar20 = uVar4 + 1;
    iVar24 = iVar20 - (int)local_3e0;
    uVar5 = uVar4;
    if (iVar24 != 0 && (int)local_3e0 <= iVar20) {
      if ((int)local_3e0 == 0) {
LAB_1406aa975:
        if (local_3e0._4_4_ <= (int)(uint)uVar4) {
          local_3e0 = CONCAT44(0x100,(int)local_3e0);
          FUN_14497ddce(&local_400,uVar34 & 0xffffffff);
          iVar20 = (int)local_3e0 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar11 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) <<
                     (bVar11 & 0x1f)) >> (bVar11 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_3e0 + 0x1e;
        if (-1 < (int)local_3e0 + -1) {
          iVar35 = (int)local_3e0 + -1;
        }
        if (iVar35 >> 5 != (uint)(uVar4 >> 5)) goto LAB_1406aa975;
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_400,uVar34 & 0xffffffff,iVar24,0);
      uVar5 = CONCAT11(uStack_39f,bStack_3a0);
      uVar13 = (uint)uVar5;
      iVar20 = uVar5 + 1;
    }
    puVar3 = (uint *)((longlong)&local_400 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << (bVar19 & 0x1f);
    uVar34 = local_50;
    iVar24 = iVar20 - (int)local_50;
    if (iVar24 != 0 && (int)local_50 <= iVar20) {
      if ((int)local_50 == 0) {
LAB_1406aaa39:
        if (local_50._4_4_ <= (int)uVar13) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,uVar34 & 0xffffffff);
          iVar20 = (int)local_50 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar35 = (int)local_50 + -1;
        }
        if (iVar35 >> 5 != (uint)(uVar5 >> 5)) goto LAB_1406aaa39;
        local_50 = CONCAT44(local_50._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_70,uVar34 & 0xffffffff,iVar24,0);
    }
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar13 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar13 & 0x1f);
  }
  uVar4 = uStack_39e;
  uVar34 = local_3e0;
  uVar13 = (uint)uStack_39e;
  if (uVar13 != 0xffff) {
    iVar20 = uStack_39e + 1;
    iVar24 = iVar20 - (int)local_3e0;
    if (iVar24 != 0 && (int)local_3e0 <= iVar20) {
      if ((int)local_3e0 == 0) {
LAB_1406aaaf9:
        if (local_3e0._4_4_ <= (int)(uint)uStack_39e) {
          local_3e0 = CONCAT44(0x100,(int)local_3e0);
          FUN_14497ddce(&local_400,uVar34 & 0xffffffff);
          iVar20 = (int)local_3e0 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) <<
                     (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_3e0 + 0x1e;
        if (-1 < (int)local_3e0 + -1) {
          iVar35 = (int)local_3e0 + -1;
        }
        if (iVar35 >> 5 != (uint)(uStack_39e >> 5)) goto LAB_1406aaaf9;
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_400,uVar34 & 0xffffffff,iVar24,0);
      uVar13 = (uint)uStack_39e;
      iVar20 = uStack_39e + 1;
    }
    uVar5 = uStack_39e;
    puVar3 = (uint *)((longlong)&local_400 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
    uVar34 = local_50;
    iVar24 = iVar20 - (int)local_50;
    if (iVar24 != 0 && (int)local_50 <= iVar20) {
      if ((int)local_50 == 0) {
LAB_1406aabbd:
        if (local_50._4_4_ <= (int)uVar13) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,uVar34 & 0xffffffff);
          iVar20 = (int)local_50 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar35 = (int)local_50 + -1;
        }
        if (iVar35 >> 5 != (uint)(uVar5 >> 5)) goto LAB_1406aabbd;
        local_50 = CONCAT44(local_50._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_70,uVar34 & 0xffffffff,iVar24,0);
    }
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar13 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar13 & 0x1f);
  }
  uVar4 = uStack_39c;
  uVar34 = local_3e0;
  uVar13 = (uint)uStack_39c;
  if (uVar13 != 0xffff) {
    iVar20 = uStack_39c + 1;
    iVar24 = iVar20 - (int)local_3e0;
    if (iVar24 != 0 && (int)local_3e0 <= iVar20) {
      if ((int)local_3e0 == 0) {
LAB_1406aac7d:
        if (local_3e0._4_4_ <= (int)(uint)uStack_39c) {
          local_3e0 = CONCAT44(0x100,(int)local_3e0);
          FUN_14497ddce(&local_400,uVar34 & 0xffffffff);
          iVar20 = (int)local_3e0 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) <<
                     (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_3e0 + 0x1e;
        if (-1 < (int)local_3e0 + -1) {
          iVar35 = (int)local_3e0 + -1;
        }
        if (iVar35 >> 5 != (uint)(uStack_39c >> 5)) goto LAB_1406aac7d;
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_400,uVar34 & 0xffffffff,iVar24,0);
      uVar13 = (uint)uStack_39c;
      iVar20 = uStack_39c + 1;
    }
    uVar5 = uStack_39c;
    puVar3 = (uint *)((longlong)&local_400 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
    uVar34 = local_50;
    iVar24 = iVar20 - (int)local_50;
    if (iVar24 != 0 && (int)local_50 <= iVar20) {
      if ((int)local_50 == 0) {
LAB_1406aad41:
        if (local_50._4_4_ <= (int)uVar13) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,uVar34 & 0xffffffff);
          iVar20 = (int)local_50 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar35 = (int)local_50 + -1;
        }
        if (iVar35 >> 5 != (uint)(uVar5 >> 5)) goto LAB_1406aad41;
        local_50 = CONCAT44(local_50._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_70,uVar34 & 0xffffffff,iVar24,0);
    }
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar13 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar13 & 0x1f);
  }
  uVar4 = uStack_39a;
  uVar34 = local_3e0;
  uVar13 = (uint)uStack_39a;
  if (uVar13 != 0xffff) {
    iVar20 = uStack_39a + 1;
    iVar24 = iVar20 - (int)local_3e0;
    if (iVar24 != 0 && (int)local_3e0 <= iVar20) {
      if ((int)local_3e0 == 0) {
LAB_1406aae05:
        if (local_3e0._4_4_ <= (int)(uint)uStack_39a) {
          local_3e0 = CONCAT44(0x100,(int)local_3e0);
          FUN_14497ddce(&local_400,uVar34 & 0xffffffff);
          iVar20 = (int)local_3e0 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_400 + (longlong)(iVar35 >> 5) * 4) <<
                     (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_3e0 + 0x1e;
        if (-1 < (int)local_3e0 + -1) {
          iVar35 = (int)local_3e0 + -1;
        }
        if (iVar35 >> 5 != (uint)(uStack_39a >> 5)) goto LAB_1406aae05;
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_400,uVar34 & 0xffffffff,iVar24,0);
      uVar13 = (uint)uStack_39a;
      iVar20 = uStack_39a + 1;
    }
    uVar5 = uStack_39a;
    puVar3 = (uint *)((longlong)&local_400 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
    uVar34 = local_50;
    iVar24 = iVar20 - (int)local_50;
    if (iVar24 != 0 && (int)local_50 <= iVar20) {
      if ((int)local_50 == 0) {
LAB_1406aaec9:
        if (local_50._4_4_ <= (int)uVar13) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,uVar34 & 0xffffffff);
          iVar20 = (int)local_50 + iVar24;
        }
        iVar35 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar35 = iVar20;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar35 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar35 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar35 = (int)local_50 + -1;
        }
        if (iVar35 >> 5 != (uint)(uVar5 >> 5)) goto LAB_1406aaec9;
        local_50 = CONCAT44(local_50._4_4_,iVar20);
      }
      FUN_1447c45ca(&local_70,uVar34 & 0xffffffff,iVar24,0);
    }
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar13 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar13 & 0x1f);
  }
  local_3b8 = (code *)&local_3a8;
  local_488 = &local_3b8;
  local_490 = (code **)&LAB_140c59682;
  local_78 = (ushort **)CONCAT71(local_78._1_7_,local_98._0_1_);
  (*(code *)(&PTR_LAB_14a475bc0)[(ulonglong)local_98 & 0xff])(&local_80);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_508 = &local_70;
  local_510 = &local_400;
  local_520 = &local_490;
  local_528 = &local_80;
  local_518 = puVar2;
  local_90 = (code **)(plVar16 + 2);
  local_88 = plVar16;
  FUN_1406ac01c(local_4f8,&local_49c,&local_49e,&local_90);
  if (local_49c == -1) {
    if ((local_49e & 0x400) != 0) {
      FUN_145c71394(local_4f8,&local_498);
      local_49c = (int)local_498;
      if ((int)local_498 != -1) goto LAB_1406ab021;
    }
  }
  else {
LAB_1406ab021:
    uVar7 = local_4f8;
    FUN_1407ce0e2(local_4f8,local_49c,0xffffffff);
    FUN_1407cdf34(uVar7,local_49c,0xffffffff);
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar31 = plVar16 + 1;
    *(int *)plVar31 = (int)*plVar31 + -1;
    UNLOCK();
    if ((int)*plVar31 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar28 = (int *)((longlong)plVar16 + 0xc);
      *piVar28 = *piVar28 + -1;
      UNLOCK();
      if (*piVar28 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
LAB_1406ab078:
  if (lStack_338 != 0) {
    FUN_1400020a8();
  }
  uVar7 = local_4f8;
  FUN_1406adae8(local_4f8,local_4a4,local_49c);
  FUN_1406adae8(uVar7,local_4a4,local_4a8);
  FUN_1406adae8(uVar7,local_4a8,local_49c);
  if (local_410 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_548) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1406abd54:
  uVar7 = *(undefined8 *)piVar18;
  *(undefined8 *)piVar18 = *(undefined8 *)piVar23;
  *(undefined8 *)piVar23 = uVar7;
  iVar20 = iVar20 + -1;
  piVar29 = piVar29 + -4;
  if ((longlong)piVar33 - (longlong)pcVar36 < (longlong)piVar30 - (longlong)pcVar32) {
    if (piVar21 < piVar28) {
      *puVar27 = piVar21;
      puVar27[1] = piVar28;
      *(int *)(puVar27 + 2) = iVar20;
      puVar27 = puVar27 + 3;
    }
    local_500 = (code *)piVar18;
    if (piVar23 <= piVar18 + 2) goto LAB_1406ab717;
  }
  else {
    if (piVar18 + 2 < piVar23) {
      *puVar27 = piVar18;
      puVar27[1] = piVar29;
      *(int *)(puVar27 + 2) = iVar20;
      puVar27 = puVar27 + 3;
    }
    piVar18 = piVar21;
    piVar29 = piVar28;
    piVar33 = piVar28;
    local_500 = pcVar32;
    if (piVar28 <= piVar21) goto LAB_1406ab717;
  }
  iVar24 = (int)((ulonglong)((longlong)piVar33 - (longlong)local_500) >> 3);
  piVar28 = piVar29;
  piVar30 = piVar33;
  pcVar36 = local_500;
  if (iVar20 == 0) goto LAB_1406abc84;
  goto LAB_1406ab6c4;
}



// FUNCTION 1406abdec FUN_1406abdec body=1 status=ok
// SIG undefined FUN_1406abdec(void)

void FUN_1406abdec(void)

{
  return;
}



// FUNCTION 1406abdee FUN_1406abdee body=143 status=ok
// SIG undefined FUN_1406abdee(void)

longlong FUN_1406abdee(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < *(int *)(param_2 + 0x20)) {
    FUN_14010b303(param_2,param_1,1,&local_1a);
  }
  if (0 < *(int *)(param_2 + 0x48)) {
    FUN_14010b303(param_2 + 0x28,param_1 + 0x28,1,&local_19);
  }
  if (0 < *(int *)(param_2 + 0x58)) {
    FUN_1406abe7e(param_1 + 0x50,param_2 + 0x50);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406abe7e FUN_1406abe7e body=92 status=ok
// SIG undefined FUN_1406abe7e(void)

void FUN_1406abe7e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403b5252(param_1,iVar2);
    }
    FUN_1403b8bfd((longlong)iVar2 * 0x2c + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1406abeda FUN_1406abeda body=112 status=ok
// SIG undefined FUN_1406abeda(void)

undefined8 FUN_1406abeda(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 1406abf4a FUN_1406abf4a body=200 status=ok
// SIG undefined FUN_1406abf4a(void)

undefined8
FUN_1406abf4a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40 [8];
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(byte *)(param_5 + 8);
  (*(code *)(&PTR_LAB_14a475bc0)[local_38])(local_40);
  local_50 = *param_4;
  local_48 = param_4[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_58 = local_40;
  FUN_1406ac2e8(param_1,param_2,param_3,&local_50);
  plVar3 = (longlong *)param_4[1];
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ac01c FUN_1406ac01c body=296 status=ok
// SIG undefined FUN_1406ac01c(void)

undefined8
FUN_1406ac01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             longlong param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = *param_6;
  local_60 = param_6[1];
  local_50 = *(byte *)(param_5 + 8);
  (*(code *)(&PTR_LAB_14a475bc0)[local_50])(local_58);
  local_78 = *param_4;
  local_70 = param_4[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  local_88 = param_9;
  local_90 = param_8;
  local_98 = param_7;
  local_a0 = &local_68;
  local_a8 = local_58;
  FUN_1406ac828(param_1,param_2,param_3,&local_78);
  plVar3 = (longlong *)param_4[1];
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
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ac146 FUN_1406ac146 body=7 status=ok
// SIG undefined FUN_1406ac146(void)

void FUN_1406ac146(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



// FUNCTION 1406ac14e FUN_1406ac14e body=409 status=ok
// SIG undefined FUN_1406ac14e(void)

ushort * FUN_1406ac14e(ushort *param_1,undefined4 *param_2,undefined8 param_3)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  *(undefined4 *)(param_1 + 6) = param_2[3];
  *(undefined4 *)(param_1 + 8) = uVar8;
  *(undefined4 *)(param_1 + 10) = uVar9;
  *(undefined4 *)(param_1 + 0xc) = uVar10;
  *(undefined4 *)param_1 = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 6) = uVar7;
  puVar1 = param_1 + 0x10;
  FUN_1403b8af8(puVar1,param_3);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x100;
  param_1[0x53] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x100;
  param_1[0x67] = 0;
  uVar2 = *param_1;
  iVar12 = uVar2 + 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar14 = iVar12 - iVar3;
  if (iVar14 != 0 && iVar3 <= iVar12) {
    if (iVar3 == 0) {
LAB_1406ac1c5:
      if (*(int *)(param_1 + 0x22) <= (int)(uint)uVar2) {
        param_1[0x22] = 0x100;
        param_1[0x23] = 0;
        FUN_14497ddce(puVar1,iVar3);
        iVar12 = *(int *)(param_1 + 0x20) + iVar14;
      }
      iVar13 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar13 = iVar12;
      }
      *(int *)(param_1 + 0x20) = iVar12;
      if (iVar12 % 0x20 != 0) {
        bVar11 = -(char)(iVar12 % 0x20);
        *(uint *)(puVar1 + (longlong)(iVar13 >> 5) * 2) =
             (uint)(*(int *)(puVar1 + (longlong)(iVar13 >> 5) * 2) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    else {
      iVar13 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar13 = iVar3 + -1;
      }
      if (iVar13 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1406ac1c5;
      *(int *)(param_1 + 0x20) = iVar12;
    }
    FUN_1447c45ca(puVar1,iVar3,iVar14,0);
  }
  *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 0x10) =
       *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 0x10) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[1];
  iVar12 = uVar2 + 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar14 = iVar12 - iVar3;
  if (iVar14 == 0 || iVar12 < iVar3) goto LAB_1406ac285;
  if (iVar3 == 0) {
LAB_1406ac24a:
    if (*(int *)(param_1 + 0x22) <= (int)(uint)uVar2) {
      param_1[0x22] = 0x100;
      param_1[0x23] = 0;
      FUN_14497ddce(puVar1,iVar3);
      iVar12 = *(int *)(param_1 + 0x20) + iVar14;
    }
    iVar13 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar13 = iVar12;
    }
    *(int *)(param_1 + 0x20) = iVar12;
    if (iVar12 % 0x20 != 0) {
      bVar11 = -(char)(iVar12 % 0x20);
      *(uint *)(puVar1 + (longlong)(iVar13 >> 5) * 2) =
           (uint)(*(int *)(puVar1 + (longlong)(iVar13 >> 5) * 2) << (bVar11 & 0x1f)) >>
           (bVar11 & 0x1f);
    }
  }
  else {
    iVar13 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar13 = iVar3 + -1;
    }
    if (iVar13 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1406ac24a;
    *(int *)(param_1 + 0x20) = iVar12;
  }
  FUN_1447c45ca(puVar1,iVar3,iVar14,0);
LAB_1406ac285:
  *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 0x10) =
       *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 0x10) | 1 << ((byte)uVar2 & 0x1f);
  return param_1;
}



// FUNCTION 1406ac2e8 FUN_1406ac2e8 body=1343 status=ok
// SIG undefined FUN_1406ac2e8(void)

int * FUN_1406ac2e8(longlong *param_1,int *param_2,longlong param_3,undefined8 *param_4,
                   longlong param_5)

{
  longlong *plVar1;
  undefined8 **ppuVar2;
  int *piVar3;
  uint *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined8 **ppuVar21;
  undefined1 auStack_d8 [44];
  int local_ac;
  uint local_a8;
  int local_a4;
  int *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  byte local_78;
  byte local_77;
  ushort local_76;
  char local_70;
  int local_68;
  int local_64;
  int local_60;
  undefined8 local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = *(undefined8 *)(param_1[0x1d] + 0x248);
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_1406ae28e(param_1,iVar6);
  }
  lVar8 = *param_1;
  lVar14 = (longlong)iVar6 * 0x78;
  lVar15 = lVar8 + lVar14;
  puVar12 = (undefined8 *)(lVar8 + 0x10 + lVar14);
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined8 *)(lVar8 + lVar14) = 0;
  ((undefined8 *)(lVar8 + lVar14))[1] = 0;
  puVar12 = (undefined8 *)(lVar8 + 0x28 + lVar14);
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined8 *)(lVar8 + 0x40 + lVar14) = uVar7;
  puVar12 = (undefined8 *)(lVar8 + 0x48 + lVar14);
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined2 *)(lVar8 + 0x58 + lVar14) = 0xffff;
  puVar4 = (uint *)(lVar8 + 0x60 + lVar14);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0xffffffff;
  *(undefined1 *)(lVar8 + 0x70 + lVar14) = 0;
  pbVar5 = (byte *)(lVar8 + 0x71 + lVar14);
  *pbVar5 = *pbVar5 & 0xfc;
  local_50 = *(byte *)(param_5 + 8);
  (*(code *)(&PTR_LAB_14a475bc0)[local_50])(&local_58);
  if (local_50 == 0) {
    *(undefined8 *)(lVar15 + 0x20) = local_58;
    uVar11 = 1;
  }
  else if (local_50 == 1) {
    *(undefined8 *)(lVar15 + 0x20) = local_58;
    uVar11 = 2;
  }
  else if (local_50 == 2) {
    *(undefined8 *)(lVar15 + 0x20) = local_58;
    uVar11 = 3;
  }
  else {
    if (local_50 != 3) goto LAB_1406ac3c9;
    *(undefined8 *)(lVar15 + 0x20) = local_58;
    uVar11 = 4;
  }
  *(undefined1 *)(lVar15 + 0x70) = uVar11;
LAB_1406ac3c9:
  uVar7 = *param_4;
  lVar8 = param_4[1];
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  ppuVar21 = *(undefined8 ***)(lVar15 + 0x30);
  *(undefined8 *)(lVar15 + 0x28) = uVar7;
  *(longlong *)(lVar15 + 0x30) = lVar8;
  if (ppuVar21 != (undefined8 **)0x0) {
    LOCK();
    ppuVar2 = ppuVar21 + 1;
    *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
    UNLOCK();
    if (*(int *)ppuVar2 == 0) {
      (*(code *)**ppuVar21)(ppuVar21);
      LOCK();
      piVar3 = (int *)((longlong)ppuVar21 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (*(code *)(*ppuVar21)[2])(ppuVar21);
      }
    }
  }
  *(byte *)(lVar15 + 0x71) = *(byte *)(lVar15 + 0x71) & 0xfe | *(byte *)(param_3 + 1) & 1;
  *param_2 = iVar6;
  puVar12 = (undefined8 *)param_1[2];
  if (puVar12 != (undefined8 *)0x0) {
    if ((*(byte *)(param_3 + 1) & 0x10) != 0) {
      puVar10 = (undefined8 *)*puVar12;
      iVar18 = *(int *)(puVar12 + 1);
      local_64 = 0;
      local_88 = puVar10;
      local_68 = iVar18;
      if (iVar18 != 0) {
        local_60 = *(int *)(puVar10 + 3) << 9;
        uVar16 = *(uint *)(puVar10 + 2);
        if (uVar16 == 0) {
          local_78 = 0x20;
          local_77 = 0;
          local_76 = 0;
        }
        else {
          iVar20 = 0;
          if (uVar16 != 0) {
            for (; (uVar16 >> iVar20 & 1) == 0; iVar20 = iVar20 + 1) {
            }
          }
          local_78 = (byte)iVar20;
          local_76 = *(ushort *)*puVar10;
          iVar20 = 0;
          if ((local_76 | 0xffff0000) != 0) {
            for (; ((local_76 | 0xffff0000) >> iVar20 & 1) == 0; iVar20 = iVar20 + 1) {
            }
          }
          local_77 = (byte)iVar20;
        }
        ppuVar21 = &local_88;
        local_70 = '\x01';
        local_80 = puVar10;
        do {
          do {
            FUN_1406adae8(param_1,(uint)local_77 + local_60 + (uint)local_78 * 0x10,iVar6);
            FUN_144a145de(ppuVar21);
          } while (local_88 != puVar10);
        } while ((local_64 != iVar18) || (local_70 != '\0'));
        puVar12 = (undefined8 *)param_1[2];
      }
    }
    if (*(int *)(puVar12 + 3) != 0) {
      local_98 = (longlong *)puVar12[2];
      uVar16 = *(uint *)(local_98 + 2);
      iVar18 = 0;
      if (uVar16 == 0) {
        uVar19 = 0x20;
        uVar17 = 0;
        uVar16 = 0;
      }
      else {
        uVar19 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
          }
        }
        uVar17 = (uint)*(ushort *)*local_98;
        uVar16 = 0;
        if ((uVar17 | 0xffff0000) != 0) {
          for (; ((uVar17 | 0xffff0000) >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
          }
        }
      }
      iVar20 = (int)local_98[3] << 9;
      uVar13 = CONCAT71((int7)((ulonglong)ppuVar21 >> 8),1);
      local_ac = *(int *)(puVar12 + 3);
      local_a0 = param_2;
      local_90 = local_98;
      do {
        local_a8 = (uint)uVar13;
        local_a4 = iVar18;
        FUN_1406adae8(param_1,(uVar19 & 0xff) * 0x10 + iVar20 + (uVar16 & 0xff),iVar6);
        uVar17 = uVar17 & ~(1 << (uVar16 & 0x1f));
        uVar16 = 0;
        if ((uVar17 | 0xffff0000) != 0) {
          for (; ((uVar17 | 0xffff0000) >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
          }
        }
        if ((short)uVar17 == 0 || uVar16 == 0x10) {
          if ((byte)uVar19 != 0x1f) {
            uVar16 = -2 << ((byte)uVar19 & 0x1f) & *(uint *)(local_98 + 2);
            if (uVar16 == 0) {
              uVar19 = 0x20;
            }
            else {
              uVar19 = 0;
              if (uVar16 != 0) {
                for (; (uVar16 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                }
              }
            }
            if (uVar16 == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(uint *)(local_98 + 2) & ~(-1 << ((byte)uVar19 & 0x1f));
              uVar13 = (ulonglong)uVar16 - (ulonglong)(uVar16 >> 1 & 0x15555555);
              uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
              uVar17 = (uint)*(ushort *)
                              (*local_98 +
                              (((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38) * 2);
              uVar16 = 0;
              if ((uVar17 | 0xffff0000) != 0) {
                for (; ((uVar17 | 0xffff0000) >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                }
              }
            }
            goto LAB_1406ac550;
          }
          uVar19 = 0x20;
          uVar16 = 0;
LAB_1406ac556:
          iVar18 = local_a4 + 1;
          if (iVar18 < local_ac) {
            lVar15 = (longlong)iVar18;
            local_98 = local_90 + lVar15 * 4;
            uVar16 = *(uint *)(local_90 + lVar15 * 4 + 2);
            iVar20 = (int)local_90[lVar15 * 4 + 3] << 9;
            if (uVar16 == 0) {
              uVar19 = 0x20;
              uVar17 = 0;
              uVar16 = 0;
            }
            else {
              uVar19 = 0;
              if (uVar16 != 0) {
                for (; (uVar16 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                }
              }
              uVar17 = (uint)*(ushort *)*local_98;
              uVar16 = 0;
              if ((uVar17 | 0xffff0000) != 0) {
                for (; ((uVar17 | 0xffff0000) >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                }
              }
            }
            uVar13 = CONCAT71((uint7)(uint3)(local_a8 >> 8),1);
          }
          else {
            uVar13 = (ulonglong)local_a8 & 0xff;
            iVar20 = 0;
            if ((local_a8 & 1) != 0) {
              uVar13 = 0;
            }
          }
        }
        else {
LAB_1406ac550:
          uVar13 = (ulonglong)local_a8;
          iVar18 = local_a4;
          if (0x1f < (byte)uVar19) goto LAB_1406ac556;
        }
      } while ((iVar18 != local_ac) || (param_2 = local_a0, (char)uVar13 != '\0'));
    }
  }
  FUN_1406adb7c(param_1 + 3,iVar6);
  if ((*(byte *)(param_3 + 1) & 8) != 0) {
    FUN_1406adb7c(param_1 + 5,iVar6);
  }
  plVar9 = (longlong *)param_4[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1406ac828 FUN_1406ac828 body=4799 status=ok
// SIG undefined FUN_1406ac828(void)

int * FUN_1406ac828(longlong *param_1,int *param_2,longlong param_3,undefined8 *param_4,
                   longlong param_5,undefined8 *param_6,longlong param_7,undefined8 param_8,
                   uint *param_9)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  byte bVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  ushort uVar31;
  int iVar32;
  ulonglong uVar33;
  uint uVar34;
  int iVar35;
  longlong lVar36;
  undefined1 auStack_1d8 [32];
  uint *local_1b8;
  uint local_1a4;
  uint local_1a0;
  int local_19c;
  uint local_198;
  int local_194;
  ulonglong local_190;
  ulonglong local_188;
  longlong *local_180;
  longlong *local_178;
  ulonglong local_170;
  ulonglong local_168;
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  int *local_148;
  longlong local_140;
  uint local_138;
  int local_134;
  undefined8 local_130;
  undefined8 *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  uint *local_108;
  longlong local_100;
  uint local_f8;
  longlong local_f0;
  longlong local_e8;
  uint local_e0;
  undefined8 local_d8;
  byte local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  uint local_98 [5];
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_130 = *(undefined8 *)(param_1[0x1d] + 0x248);
  local_a8 = 0;
  iStack_a4 = 0x100;
  local_1b8 = local_98;
  local_158 = param_3;
  local_128 = param_4;
  FUN_1406adeff(param_8,param_9);
  local_98[0] = (uint)local_c8;
  local_98[1] = local_c8._4_4_;
  local_98[2] = (undefined4)uStack_c0;
  local_98[3] = uStack_c0._4_4_;
  local_98[4] = local_b8;
  uStack_84 = uStack_b4;
  uStack_80 = uStack_b0;
  uStack_7c = uStack_ac;
  local_78 = CONCAT44(iStack_a4,local_a8);
  *param_2 = -1;
  lVar36 = param_1[0x1d];
  local_f0 = param_7;
  if (*(char *)(lVar36 + 0x270) == '\0') {
    *(int *)(lVar36 + 0x264) = *(int *)(lVar36 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar36 + 0x264) = *(int *)(lVar36 + 0x264) + 1;
    UNLOCK();
  }
  local_148 = param_2;
  local_e8 = lVar36;
  uVar11 = FUN_1403b8464(&local_f0,0);
  local_138 = *(uint *)(lVar36 + 0x10);
  local_e0 = uVar11;
  if (uVar11 != local_138) {
    local_110 = param_1 + 3;
    local_120 = param_1 + 5;
    local_180 = param_1 + 9;
    local_150 = param_1 + 0x10;
    local_178 = param_1 + 0xb;
    local_108 = param_9 + 1;
    lVar36 = 0xffffffff;
    iVar35 = -1;
    do {
      lVar29 = local_e8;
      iVar32 = (int)lVar36;
      local_1a4 = uVar11;
      local_134 = iVar35;
      local_e0 = uVar11;
      if (iVar32 == -1) {
        iVar32 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar32 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar32 + 1U) {
          FUN_1406ae28e(param_1,iVar32);
        }
        lVar36 = *param_1;
        lVar16 = (longlong)iVar32 * 0x78;
        puVar17 = (undefined8 *)(lVar36 + 0x10 + lVar16);
        *puVar17 = 0;
        puVar17[1] = 0;
        *(undefined8 *)(lVar36 + lVar16) = 0;
        ((undefined8 *)(lVar36 + lVar16))[1] = 0;
        puVar17 = (undefined8 *)(lVar36 + 0x28 + lVar16);
        *puVar17 = 0;
        puVar17[1] = 0;
        *(undefined8 *)(lVar36 + 0x40 + lVar16) = local_130;
        puVar17 = (undefined8 *)(lVar36 + 0x48 + lVar16);
        *puVar17 = 0;
        puVar17[1] = 0;
        *(undefined2 *)(lVar36 + 0x58 + lVar16) = 0xffff;
        puVar17 = (undefined8 *)(lVar36 + 0x60 + lVar16);
        *puVar17 = 0;
        puVar17[1] = 0xffffffff00000000;
        *(undefined1 *)(lVar36 + 0x70 + lVar16) = 0;
        pbVar5 = (byte *)(lVar36 + 0x71 + lVar16);
        *pbVar5 = *pbVar5 & 0xfc;
        *local_148 = iVar32;
        pbVar5 = (byte *)(*param_1 + 0x71 + lVar16);
        *pbVar5 = *pbVar5 | 2;
        pbVar5 = (byte *)(*param_1 + 0x71 + lVar16);
        *pbVar5 = *pbVar5 & 0xfe;
        puVar17 = (undefined8 *)param_1[2];
        if (puVar17 != (undefined8 *)0x0) {
          if ((*(byte *)(local_158 + 1) & 0x10) != 0) {
            puVar8 = (undefined8 *)*puVar17;
            iVar35 = *(int *)(puVar17 + 1);
            iStack_a4 = 0;
            if (iVar35 != 0) {
              local_a0 = *(int *)(puVar8 + 3) << 9;
              uVar11 = *(uint *)(puVar8 + 2);
              if (uVar11 == 0) {
                uVar22 = 0x20;
                uVar10 = 0;
                uVar31 = 0;
              }
              else {
                iVar23 = 0;
                if (uVar11 != 0) {
                  for (; (uVar11 >> iVar23 & 1) == 0; iVar23 = iVar23 + 1) {
                  }
                }
                uVar22 = (undefined1)iVar23;
                uVar31 = *(ushort *)*puVar8;
                iVar23 = 0;
                if ((uVar31 | 0xffff0000) != 0) {
                  for (; ((uVar31 | 0xffff0000) >> iVar23 & 1) == 0; iVar23 = iVar23 + 1) {
                  }
                }
                uVar10 = (undefined1)iVar23;
              }
              local_b8._0_2_ = CONCAT11(uVar10,uVar22);
              local_b8 = CONCAT22(uVar31,(undefined2)local_b8);
              uStack_b0 = CONCAT31(uStack_b0._1_3_,1);
              local_c8 = puVar8;
              uStack_c0 = puVar8;
              local_a8 = iVar35;
              do {
                do {
                  FUN_1406adae8(param_1,(local_b8 >> 8 & 0xff) + local_a0 + (local_b8 & 0xff) * 0x10
                               );
                  FUN_144a145de(&local_c8);
                } while (local_c8 != puVar8);
              } while ((iStack_a4 != iVar35) || ((char)uStack_b0 != '\0'));
              puVar17 = (undefined8 *)param_1[2];
            }
          }
          uVar11 = uStack_b0 >> 8;
          uStack_b0 = uStack_b0 & 0xffffff00;
          local_c8 = (undefined8 *)puVar17[2];
          iVar35 = *(int *)(puVar17 + 3);
          iStack_a4 = 0;
          local_a0 = 0;
          local_a8 = iVar35;
          if (iVar35 == 0) {
            puVar17 = (undefined8 *)puVar17[2];
            uVar11 = local_1a4;
            if (local_c8 == puVar17) goto LAB_1406acb3c;
          }
          else {
            local_a0 = *(int *)(local_c8 + 3) << 9;
            uVar12 = *(uint *)(local_c8 + 2);
            if (uVar12 == 0) {
              uVar22 = 0x20;
              uVar10 = 0;
              uVar31 = 0;
            }
            else {
              iVar23 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> iVar23 & 1) == 0; iVar23 = iVar23 + 1) {
                }
              }
              uVar22 = (undefined1)iVar23;
              uVar31 = *(ushort *)*local_c8;
              iVar23 = 0;
              if ((uVar31 | 0xffff0000) != 0) {
                for (; ((uVar31 | 0xffff0000) >> iVar23 & 1) == 0; iVar23 = iVar23 + 1) {
                }
              }
              uVar10 = (undefined1)iVar23;
            }
            local_b8._0_2_ = CONCAT11(uVar10,uVar22);
            local_b8 = CONCAT22(uVar31,(undefined2)local_b8);
            uStack_b0 = CONCAT31((int3)uVar11,1);
            puVar17 = (undefined8 *)puVar17[2];
            uStack_c0 = local_c8;
          }
          do {
            do {
              FUN_1406adae8(param_1,(local_b8 >> 8 & 0xff) + local_a0 + (local_b8 & 0xff) * 0x10,
                            iVar32);
              FUN_144a145de(&local_c8);
            } while (local_c8 != puVar17);
          } while ((iStack_a4 != iVar35) || (uVar11 = local_1a4, (char)uStack_b0 != '\0'));
        }
LAB_1406acb3c:
        FUN_1406adb7c(local_110,iVar32);
        if ((*(byte *)(local_158 + 1) & 8) != 0) {
          FUN_1406adb7c(local_120,iVar32);
        }
      }
      local_194 = (int)param_1[1];
      local_c8 = (undefined8 *)0x0;
      uStack_c0 = (undefined8 *)0x0;
      local_b8 = CONCAT22(local_b8._2_2_,(short)uVar11);
      local_100 = lVar29;
      local_f8 = uVar11;
      (*(code *)*param_6)(param_6[1],&local_100,&local_c8);
      iVar35 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar35 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar35 + 1U) {
        FUN_1406ae28e(param_1,iVar35);
      }
      lVar29 = *param_1;
      lVar16 = (longlong)iVar35 * 0x78;
      puVar17 = (undefined8 *)(lVar29 + 0x10 + lVar16);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined8 *)(lVar29 + lVar16) = 0;
      ((undefined8 *)(lVar29 + lVar16))[1] = 0;
      puVar17 = (undefined8 *)(lVar29 + 0x28 + lVar16);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined8 *)(lVar29 + 0x40 + lVar16) = local_130;
      puVar17 = (undefined8 *)(lVar29 + 0x48 + lVar16);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined2 *)(lVar29 + 0x58 + lVar16) = 0xffff;
      puVar17 = (undefined8 *)(lVar29 + 0x60 + lVar16);
      *puVar17 = 0;
      puVar17[1] = 0xffffffff00000000;
      *(undefined1 *)(lVar29 + 0x70 + lVar16) = 0;
      pbVar5 = (byte *)(lVar29 + 0x71 + lVar16);
      *pbVar5 = *pbVar5 & 0xfc;
      lVar36 = lVar29 + lVar16;
      local_d0 = *(byte *)(param_5 + 8);
      (*(code *)(&PTR_LAB_14a475bc0)[local_d0])(&local_d8);
      if (local_d0 == 3) {
        *(undefined8 *)(lVar36 + 0x20) = local_d8;
        uVar10 = 4;
LAB_1406acc46:
        *(undefined1 *)(lVar36 + 0x70) = uVar10;
      }
      else {
        if (local_d0 == 2) {
          *(undefined8 *)(lVar36 + 0x20) = local_d8;
          uVar10 = 3;
          goto LAB_1406acc46;
        }
        if (local_d0 == 1) {
          *(undefined8 *)(lVar36 + 0x20) = local_d8;
          uVar10 = 2;
          goto LAB_1406acc46;
        }
        if (local_d0 == 0) {
          *(undefined8 *)(lVar36 + 0x20) = local_d8;
          uVar10 = 1;
          goto LAB_1406acc46;
        }
      }
      *(int *)(lVar36 + 0x6c) = iVar32;
      uVar6 = *local_128;
      lVar7 = local_128[1];
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      plVar18 = *(longlong **)(lVar36 + 0x30);
      *(undefined8 *)(lVar36 + 0x28) = uVar6;
      *(longlong *)(lVar36 + 0x30) = lVar7;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar18 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar3 = (int *)((longlong)plVar18 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      uVar11 = local_1a4;
      plVar18 = (longlong *)(lVar29 + lVar16 + 0x48);
      *(byte *)(lVar36 + 0x71) = *(byte *)(lVar36 + 0x71) & 0xfe | *(byte *)(local_158 + 1) & 1;
      *(undefined4 *)(lVar36 + 0x60) = 1;
      if (plVar18 != &local_c8) {
        if (*plVar18 != 0) {
          FUN_1400020a8();
        }
        *(undefined8 **)(lVar36 + 0x48) = local_c8;
        local_c8 = (undefined8 *)0x0;
        *(undefined4 *)(lVar36 + 0x50) = (undefined4)uStack_c0;
        *(undefined4 *)(lVar36 + 0x54) = uStack_c0._4_4_;
        uStack_c0 = (undefined8 *)0x0;
      }
      *(undefined2 *)(lVar36 + 0x58) = (undefined2)local_b8;
      local_140 = (longlong)*local_148;
      FUN_1406adb7c(local_140 * 0x78 + *param_1 + 0x10,iVar35);
      uVar33 = local_78 & 0xffffffff;
      if ((uint)local_78 == 0) {
        uVar21 = 1;
        uVar27 = 0;
        uVar12 = 0;
        iVar35 = 0;
      }
      else {
        uVar27 = 0;
        iVar35 = 0;
        uVar12 = local_98[0];
        if (local_98[0] == 0) {
          iVar32 = (uint)local_78 + 0x1e;
          if (-1 < (int)((uint)local_78 - 1)) {
            iVar32 = (uint)local_78 - 1;
          }
          uVar27 = 0;
          uVar21 = (ulonglong)(uint)(iVar32 >> 5);
          if (iVar32 >> 5 < 1) {
            uVar21 = uVar27;
          }
          do {
            if (uVar21 == uVar27) goto LAB_1406ad014;
            iVar35 = iVar35 + 0x20;
            uVar12 = local_98[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar12 == 0);
        }
        uVar21 = (ulonglong)(-uVar12 & uVar12);
        uVar25 = uVar21 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        uVar12 = (iVar35 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
        if ((int)(uint)local_78 <= (int)uVar12) {
          uVar12 = (uint)local_78;
        }
      }
      if ((int)uVar12 < (int)(uint)local_78) {
        iVar32 = uVar11 * 0x40 + (uVar11 >> 2) + -0x61c88647;
        iVar23 = (uint)local_78 + 0x1e;
        if (-1 < (int)((uint)local_78 - 1)) {
          iVar23 = (uint)local_78 - 1;
        }
        local_198 = iVar23 >> 5;
        uVar26 = 0xffffffff;
        local_19c = iVar32;
        local_170 = uVar33;
        do {
          if ((int)param_1[10] != *(int *)((longlong)param_1 + 0x7c)) {
            plVar18 = (longlong *)param_1[0x11];
            if ((longlong *)param_1[0x11] == (longlong *)0x0) {
              plVar18 = local_150;
            }
            iVar23 = *(int *)((longlong)plVar18 +
                             (ulonglong)
                             ((int)param_1[0x12] - 1U & ((uVar12 & 0xffff) + iVar32 ^ uVar11)) * 4);
            if (iVar23 != -1) {
              lVar36 = *local_180;
LAB_1406acdf9:
              lVar16 = (longlong)iVar23 * 0x20;
              lVar29 = lVar36 + lVar16;
              if ((*(uint *)(lVar36 + lVar16) != uVar11) ||
                 (*(short *)(lVar36 + 4 + lVar16) != (short)uVar12)) goto LAB_1406ace16;
              if (((lVar29 != 0) && (lVar29 != -8)) && (*(uint *)(lVar29 + 0x10) != 0)) {
                local_160 = *(longlong **)(lVar29 + 8);
                uVar11 = *(uint *)(local_160 + 2);
                uVar12 = 0;
                if (uVar11 == 0) {
                  uVar24 = 0x20;
                  uVar13 = 0;
                  uVar34 = 0;
                }
                else {
                  uVar24 = 0;
                  if (uVar11 != 0) {
                    for (; (uVar11 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                    }
                  }
                  uVar34 = (uint)*(ushort *)*local_160;
                  uVar11 = *(ushort *)*local_160 | 0xffff0000;
                  uVar13 = 0;
                  if (uVar11 != 0) {
                    for (; (uVar11 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                    }
                  }
                }
                local_168 = (ulonglong)(uint)((int)local_160[3] << 9);
                bVar9 = true;
                local_188 = CONCAT44(local_188._4_4_,iVar35);
                local_1a0 = *(uint *)(lVar29 + 0x10);
                local_190 = uVar27;
                local_118 = local_160;
                do {
                  FUN_1406adae8(param_1,(uVar24 & 0xff) * 0x10 + (int)local_168 + (uVar13 & 0xff),
                                local_194);
                  uVar34 = uVar34 & ~(1 << (uVar13 & 0x1f));
                  uVar13 = 0;
                  if ((uVar34 | 0xffff0000) != 0) {
                    for (; ((uVar34 | 0xffff0000) >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                    }
                  }
                  if ((short)uVar34 == 0 || uVar13 == 0x10) {
                    if ((byte)uVar24 != 0x1f) {
                      uVar11 = -2 << ((byte)uVar24 & 0x1f) & *(uint *)(local_160 + 2);
                      if (uVar11 == 0) {
                        uVar24 = 0x20;
                      }
                      else {
                        uVar24 = 0;
                        if (uVar11 != 0) {
                          for (; (uVar11 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                          }
                        }
                      }
                      if (uVar11 == 0) {
                        uVar13 = 0;
                      }
                      else {
                        uVar11 = *(uint *)(local_160 + 2) & ~(-1 << ((byte)uVar24 & 0x1f));
                        uVar33 = (ulonglong)uVar11 - (ulonglong)(uVar11 >> 1 & 0x15555555);
                        uVar33 = (uVar33 >> 2 & 0x3333333333333333) + (uVar33 & 0x3333333333333333);
                        uVar31 = *(ushort *)
                                  (*local_160 +
                                  (((uVar33 >> 4) + uVar33 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                  >> 0x38) * 2);
                        uVar34 = (uint)uVar31;
                        uVar11 = uVar31 | 0xffff0000;
                        uVar13 = 0;
                        if (uVar11 != 0) {
                          for (; (uVar11 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                          }
                        }
                      }
                      goto LAB_1406acfa8;
                    }
                    uVar13 = 0;
LAB_1406acfb1:
                    uVar12 = uVar12 + 1;
                    if ((int)uVar12 < (int)local_1a0) {
                      lVar36 = (longlong)(int)uVar12;
                      local_160 = local_118 + lVar36 * 4;
                      uVar11 = *(uint *)(local_118 + lVar36 * 4 + 2);
                      local_168 = (ulonglong)(uint)((int)local_118[lVar36 * 4 + 3] << 9);
                      if (uVar11 == 0) {
                        uVar24 = 0x20;
                        uVar34 = 0;
                        uVar13 = 0;
                      }
                      else {
                        uVar24 = 0;
                        if (uVar11 != 0) {
                          for (; (uVar11 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                          }
                        }
                        uVar34 = (uint)*(ushort *)*local_160;
                        uVar11 = *(ushort *)*local_160 | 0xffff0000;
                        uVar13 = 0;
                        if (uVar11 != 0) {
                          for (; (uVar11 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                          }
                        }
                      }
                      bVar9 = true;
                    }
                    else {
                      local_168 = 0;
                      if (bVar9) {
                        bVar9 = false;
                      }
                      uVar24 = 0x20;
                    }
                  }
                  else {
LAB_1406acfa8:
                    if (0x1f < (byte)uVar24) goto LAB_1406acfb1;
                  }
                } while ((uVar12 != local_1a0) ||
                        (uVar33 = local_170, uVar27 = local_190, uVar11 = local_1a4,
                        iVar35 = (int)local_188, iVar32 = local_19c, bVar9));
              }
            }
          }
LAB_1406ace1e:
          uVar26 = uVar26 & ~(uint)uVar21;
          uVar24 = (uint)uVar27;
          lVar36 = (longlong)(int)uVar24;
          uVar12 = local_98[lVar36] & uVar26;
          if (uVar12 == 0) {
            uVar26 = local_198;
            if ((int)local_198 < (int)uVar24) {
              uVar26 = uVar24;
            }
            lVar29 = 0;
            do {
              if ((int)uVar26 - lVar36 == lVar29) goto LAB_1406ad014;
              iVar35 = iVar35 + 0x20;
              uVar12 = local_98[lVar36 + lVar29 + 1];
              lVar29 = lVar29 + 1;
            } while (uVar12 == 0);
            uVar27 = (ulonglong)(uVar24 + (int)lVar29);
            uVar26 = 0xffffffff;
          }
          uVar21 = (ulonglong)(-uVar12 & uVar12);
          uVar25 = uVar21 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          uVar12 = (iVar35 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
        } while ((int)uVar12 < (int)uVar33);
      }
LAB_1406ad014:
      uVar12 = param_9[8];
      if (uVar12 == 0) {
        uVar27 = 1;
        iVar35 = 0;
        uVar26 = 0;
        uVar33 = 0;
      }
      else {
        uVar26 = *param_9;
        if (uVar26 == 0) {
          iVar35 = uVar12 + 0x1e;
          if (-1 < (int)(uVar12 - 1)) {
            iVar35 = uVar12 - 1;
          }
          uVar33 = 0;
          uVar27 = (ulonglong)(uint)(iVar35 >> 5);
          if (iVar35 >> 5 < 1) {
            uVar27 = uVar33;
          }
          iVar35 = 0;
          do {
            if (uVar27 == uVar33) goto LAB_1406ad433;
            iVar35 = iVar35 + 0x20;
            uVar26 = param_9[uVar33 + 1];
            uVar33 = uVar33 + 1;
          } while (uVar26 == 0);
        }
        else {
          iVar35 = 0;
          uVar33 = 0;
        }
        uVar27 = (ulonglong)(-uVar26 & uVar26);
        uVar21 = uVar27 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        uVar26 = (iVar35 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
        if ((int)uVar12 <= (int)uVar26) {
          uVar26 = uVar12;
        }
      }
      if ((int)uVar26 < (int)uVar12) {
        local_168 = (ulonglong)(uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9);
        local_188 = (ulonglong)uVar11;
        local_198 = 0xffffffff;
        do {
          uVar12 = (int)local_168 + (uVar26 & 0xffff) ^ uVar11;
          iVar32 = (int)param_1[10];
          iVar23 = *(int *)((longlong)param_1 + 0x7c);
          if (iVar32 != iVar23) {
            plVar18 = (longlong *)param_1[0x11];
            if ((longlong *)param_1[0x11] == (longlong *)0x0) {
              plVar18 = local_150;
            }
            iVar14 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_1[0x12] - 1U & uVar12) * 4)
            ;
            if (iVar14 != -1) {
              lVar36 = *local_180;
              do {
                lVar16 = (longlong)iVar14 * 0x20;
                lVar29 = lVar36 + lVar16;
                if ((*(uint *)(lVar36 + lVar16) == uVar11) &&
                   (*(short *)(lVar36 + 4 + lVar16) == (short)uVar26)) {
                  if (lVar29 != 0) goto LAB_1406ad31f;
                  break;
                }
                iVar14 = *(int *)(lVar29 + 0x18);
              } while (iVar14 != -1);
            }
          }
          local_1a0 = uVar12;
          local_190 = uVar33;
          if (iVar23 == 0) {
            *(int *)(param_1 + 10) = iVar32 + 1;
            if (*(int *)((longlong)param_1 + 0x54) == iVar32) {
              FUN_1447711aa(local_180,iVar32);
            }
            iVar23 = (int)param_1[0xe];
            if (iVar23 == 0) {
              iVar14 = -1;
            }
            else {
              iVar14 = iVar23 + 0x1e;
              if (-1 < iVar23 + -1) {
                iVar14 = iVar23 + -1;
              }
              iVar14 = iVar14 >> 5;
            }
            iVar20 = iVar23 + 1;
            iVar28 = iVar23 + 0x1f;
            if (-1 < iVar23) {
              iVar28 = iVar23;
            }
            if (iVar28 >> 5 == iVar14) {
              *(int *)(param_1 + 0xe) = iVar20;
            }
            else {
              if (*(int *)((longlong)param_1 + 0x74) <= iVar23) {
                iVar14 = iVar23;
                if (iVar23 + 0x20U < 0xa0) {
                  iVar20 = 0x80;
                }
                else {
                  uVar11 = iVar23 + 0x20U >> 5;
                  if (*(int *)((longlong)param_1 + 0x74) + 0x1fU < 0xa0) {
                    uVar12 = 4;
                    if (4 < uVar11) {
                      uVar12 = uVar11;
                    }
                  }
                  else {
                    uVar12 = uVar11 + (uVar11 * 3 >> 3) + 0x10;
                  }
                  uVar33 = (ulonglong)(uVar12 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar24 = (uint)(uVar33 + 0xf);
                      if (uVar12 < 0x1ffd) {
                        uVar33 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar33 + 0xf >> 4]];
                      }
                      else {
                        uVar21 = (ulonglong)(uVar24 & 0xfffffff0);
                        if (uVar21 < 0x7ff1) {
                          bVar19 = (&DAT_14c841e00)[uVar24 >> 4];
                          uVar25 = 0x32;
                          if (0x32 < bVar19) {
                            uVar25 = (ulonglong)bVar19;
                          }
                          uVar30 = 0x32 - (ulonglong)bVar19;
                          do {
                            uVar33 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar30 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar30 & 0xffffffff] & 0xf) == 0)
                            goto LAB_1406ad70c;
                            lVar36 = uVar25 + 1 + uVar30;
                            uVar30 = uVar30 - 1;
                          } while (lVar36 != 0x33);
                        }
                        uVar33 = 0x10;
                        if (0x10 < DAT_14c841df8) {
                          uVar33 = (ulonglong)DAT_14c841df8;
                        }
                        uVar33 = -uVar33 & (uVar21 + uVar33) - 1;
                      }
                    }
                    else {
                      uVar33 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar33,0);
                      iVar14 = (int)param_1[0xe];
                    }
                  }
LAB_1406ad70c:
                  iVar15 = (int)(uVar33 >> 2);
                  iVar20 = -0x20;
                  if ((int)uVar11 <= iVar15) {
                    iVar20 = iVar15 << 5;
                  }
                }
                *(int *)((longlong)param_1 + 0x74) = iVar20;
                FUN_1446efbd8(local_178,iVar14);
                iVar20 = (int)param_1[0xe] + 1;
              }
              iVar14 = iVar20 + 0x1f;
              if (-1 < iVar20) {
                iVar14 = iVar20;
              }
              *(int *)(param_1 + 0xe) = iVar20;
              if (iVar20 % 0x20 != 0) {
                plVar18 = (longlong *)param_1[0xd];
                if ((longlong *)param_1[0xd] == (longlong *)0x0) {
                  plVar18 = local_178;
                }
                bVar19 = -(char)(iVar20 % 0x20);
                *(uint *)((longlong)plVar18 + (longlong)(iVar14 >> 5) * 4) =
                     (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar14 >> 5) * 4) <<
                           (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
              }
            }
            lVar36 = (longlong)iVar32;
            plVar18 = (longlong *)param_1[0xd];
            if ((longlong *)param_1[0xd] == (longlong *)0x0) {
              plVar18 = local_178;
            }
            bVar19 = (byte)iVar23 & 0x1f;
            puVar2 = (uint *)((longlong)plVar18 + (longlong)(iVar28 >> 5) * 4);
            *puVar2 = *puVar2 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
          }
          else {
            iVar32 = (int)param_1[0xf];
            lVar36 = (longlong)iVar32;
            iVar14 = *(int *)(param_1[9] + 4 + lVar36 * 0x20);
            *(int *)(param_1 + 0xf) = iVar14;
            *(int *)((longlong)param_1 + 0x7c) = iVar23 + -1;
            if (iVar23 + -1 != 0) {
              *(undefined4 *)(param_1[9] + (longlong)iVar14 * 0x20) = 0xffffffff;
            }
          }
          plVar18 = (longlong *)param_1[0xd];
          if ((longlong *)param_1[0xd] == (longlong *)0x0) {
            plVar18 = local_178;
          }
          iVar23 = iVar32 + 0x1f;
          if (-1 < iVar32) {
            iVar23 = iVar32;
          }
          puVar2 = (uint *)((longlong)plVar18 + (longlong)(iVar23 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar32 & 0x1f);
          lVar29 = param_1[9];
          lVar36 = lVar36 * 0x20;
          piVar3 = (int *)(lVar29 + lVar36);
          *(ulonglong *)(lVar29 + lVar36) = ((ulonglong)(uVar26 & 0xffff) << 0x20) + local_188;
          puVar17 = (undefined8 *)(lVar29 + 8 + lVar36);
          *puVar17 = 0;
          puVar17[1] = 0;
          FUN_1405c4362(0,0);
          uVar33 = local_190;
          *(undefined4 *)(lVar29 + 0x18 + lVar36) = 0xffffffff;
          uVar11 = (int)param_1[10] - *(int *)((longlong)param_1 + 0x7c);
          if ((uVar11 != 0) && (uVar11 != 1)) {
            plVar18 = (longlong *)param_1[0x11];
            if ((longlong *)param_1[0x11] == (longlong *)0x0) {
              plVar18 = local_150;
            }
            iVar23 = *(int *)((longlong)plVar18 +
                             (ulonglong)((int)param_1[0x12] - 1U & local_1a0) * 4);
            if (iVar23 != -1) {
              lVar36 = *local_180;
              do {
                lVar29 = (longlong)iVar23 * 0x20;
                piVar4 = (int *)(lVar36 + lVar29);
                if ((*(int *)(lVar36 + lVar29) == *piVar3) &&
                   (*(short *)(lVar36 + 4 + lVar29) == (short)piVar3[1])) {
                  FUN_1405c4362(*(undefined8 *)(piVar4 + 2),piVar4[4]);
                  if (*(longlong *)(piVar4 + 2) != 0) {
                    FUN_1400020a8();
                  }
                  iVar23 = *piVar3;
                  iVar14 = piVar3[1];
                  iVar20 = piVar3[2];
                  iVar28 = piVar3[3];
                  *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(piVar3 + 4);
                  *piVar4 = iVar23;
                  piVar4[1] = iVar14;
                  piVar4[2] = iVar20;
                  piVar4[3] = iVar28;
                  FUN_147565410(local_180,iVar32);
                  uVar33 = local_190;
                  goto LAB_1406ad305;
                }
                iVar23 = piVar4[6];
              } while (iVar23 != -1);
            }
          }
          if (uVar11 < 4) {
            iVar23 = 1;
          }
          else {
            uVar21 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
            lVar36 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar36 == 0; lVar36 = lVar36 + -1) {
              }
            }
            iVar23 = 1 << ((byte)lVar36 & 0x1f);
          }
          if (((int)uVar11 < 1) || (iVar23 <= (int)param_1[0x12])) {
            uVar11 = (int)param_1[0x12] - 1U & local_1a0;
            piVar3[7] = uVar11;
            plVar18 = (longlong *)param_1[0x11];
            if ((longlong *)param_1[0x11] == (longlong *)0x0) {
              plVar18 = local_150;
            }
            piVar3[6] = *(int *)((longlong)plVar18 +
                                ((longlong)(int)param_1[0x12] - 1U & (longlong)(int)uVar11) * 4);
            plVar18 = (longlong *)param_1[0x11];
            if ((longlong *)param_1[0x11] == (longlong *)0x0) {
              plVar18 = local_150;
            }
            *(int *)((longlong)plVar18 +
                    ((longlong)(int)param_1[0x12] - 1U & (longlong)(int)uVar11) * 4) = iVar32;
          }
          else {
            *(int *)(param_1 + 0x12) = iVar23;
            FUN_1406ae400(local_180);
          }
LAB_1406ad305:
          lVar29 = (longlong)iVar32 * 0x20 + *local_180;
          uVar11 = local_1a4;
LAB_1406ad31f:
          FUN_1406adb7c(lVar29 + 8,local_194);
          uVar24 = local_198 & ~(uint)uVar27;
          uVar12 = param_9[8];
          iVar32 = (int)uVar33;
          lVar36 = (longlong)iVar32;
          uVar26 = param_9[lVar36] & uVar24;
          if (uVar26 == 0) {
            iVar23 = uVar12 + 0x1e;
            if (-1 < (int)(uVar12 - 1)) {
              iVar23 = uVar12 - 1;
            }
            iVar14 = iVar23 >> 5;
            if (iVar23 >> 5 < iVar32) {
              iVar14 = iVar32;
            }
            lVar29 = 0;
            do {
              if (iVar14 - lVar36 == lVar29) goto LAB_1406ad433;
              iVar35 = iVar35 + 0x20;
              uVar26 = local_108[lVar36 + lVar29];
              lVar29 = lVar29 + 1;
            } while (uVar26 == 0);
            uVar33 = (ulonglong)(uint)(iVar32 + (int)lVar29);
            local_198 = 0xffffffff;
            uVar24 = local_198;
          }
          local_198 = uVar24;
          uVar27 = (ulonglong)(-uVar26 & uVar26);
          uVar21 = uVar27 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          uVar26 = (iVar35 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
        } while ((int)uVar26 < (int)uVar12);
      }
LAB_1406ad433:
      lVar36 = local_140;
      if ((*(byte *)(local_158 + 1) >> 1 & local_134 != -1) != 0) {
        FUN_1406adae8(param_1);
      }
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      uVar11 = FUN_1403b8464(&local_f0,local_e0 + 1);
      iVar35 = local_194;
      local_e0 = uVar11;
    } while (uVar11 != local_138);
  }
  if (local_f0 != 0) {
    if (*(char *)(local_e8 + 0x270) == '\0') {
      *(int *)(local_e8 + 0x264) = *(int *)(local_e8 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_e8 + 0x264) = *(int *)(local_e8 + 0x264) + -1;
      UNLOCK();
    }
  }
  plVar18 = (longlong *)local_128[1];
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar3 = (int *)((longlong)plVar18 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_148;
LAB_1406ace16:
  iVar23 = *(int *)(lVar29 + 0x18);
  if (iVar23 == -1) goto LAB_1406ace1e;
  goto LAB_1406acdf9;
}



// FUNCTION 1406adae8 FUN_1406adae8 body=147 status=ok
// SIG undefined FUN_1406adae8(void)

void FUN_1406adae8(longlong *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_3 != 0xffffffff && param_2 != -1) {
    lVar5 = *param_1;
    lVar7 = (longlong)param_2 * 0x78;
    uVar2 = *(uint *)(lVar5 + 8 + lVar7);
    uVar6 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      lVar4 = *(longlong *)(lVar5 + lVar7);
      while( true ) {
        uVar6 = uVar6 - 1;
        if (*(uint *)(lVar4 + 0x18) == param_3 >> 9) break;
        if ((param_3 >> 9 < *(uint *)(lVar4 + 0x18)) || (lVar4 = lVar4 + 0x20, uVar6 == 0))
        goto LAB_1406adb43;
      }
      cVar3 = FUN_1406add7a(lVar4,param_3);
      if (cVar3 != '\0') {
        return;
      }
      lVar5 = *param_1;
    }
LAB_1406adb43:
    FUN_1406adb7c(lVar5 + lVar7,param_3);
    piVar1 = (int *)(*param_1 + 0x60 + (longlong)(int)param_3 * 0x78);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 1406adb7c FUN_1406adb7c body=249 status=ok
// SIG undefined FUN_1406adb7c(void)

undefined8 FUN_1406adb7c(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar6 = param_2 >> 9;
  lVar5 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (longlong)(int)uVar1) {
    lVar7 = 0;
    uVar8 = uVar1;
    do {
      uVar2 = *(uint *)(lVar5 + 0x18 + lVar7);
      if (uVar2 == uVar6) {
        uVar3 = FUN_1406adc76(lVar5 + lVar7,param_2 & 0x1ff);
        return uVar3;
      }
      if (uVar6 < uVar2) {
        *(uint *)(param_1 + 1) = uVar1 + 1;
        if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
          FUN_1406ade00(param_1,uVar1);
          lVar5 = *param_1;
        }
        memmove((void *)(lVar5 + lVar7 + 0x20),(void *)(lVar5 + lVar7),(ulonglong)uVar8 << 5);
        lVar5 = *param_1;
        lVar4 = lVar5 + lVar7;
        *(undefined8 *)(lVar5 + lVar7) = 0;
        ((undefined8 *)(lVar5 + lVar7))[1] = 0;
        *(undefined4 *)(lVar5 + 0x10 + lVar7) = 0;
        *(uint *)(lVar5 + 0x18 + lVar7) = uVar6;
        goto LAB_1406adc11;
      }
      lVar7 = lVar7 + 0x20;
      uVar8 = uVar8 - 1;
    } while ((ulonglong)uVar1 << 5 != lVar7);
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_1406ade00(param_1,uVar1);
    lVar5 = *param_1;
  }
  lVar7 = (longlong)(int)uVar1 * 0x20;
  lVar4 = lVar5 + lVar7;
  *(undefined8 *)(lVar5 + lVar7) = 0;
  ((undefined8 *)(lVar5 + lVar7))[1] = 0;
  *(undefined4 *)(lVar5 + 0x10 + lVar7) = 0;
  *(uint *)(lVar5 + 0x18 + lVar7) = uVar6;
LAB_1406adc11:
  FUN_1406adc76(lVar4,param_2 & 0x1ff);
  return 0;
}



// FUNCTION 1406adc76 FUN_1406adc76 body=259 status=ok
// SIG undefined FUN_1406adc76(void)

undefined8 FUN_1406adc76(longlong *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = *(uint *)(param_1 + 2);
  uVar6 = 1 << ((byte)(param_2 >> 4) & 0x1f);
  uVar3 = uVar6 - 1 & uVar7;
  uVar4 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar8 = uVar4 >> 0x38;
  uVar5 = (ushort)(1 << ((byte)param_2 & 0xf));
  if ((uVar7 >> (param_2 >> 4 & 0x1f) & 1) == 0) {
    *(uint *)(param_1 + 2) = uVar7 | uVar6;
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_14488eebe(param_1,iVar2);
    }
    uVar7 = (uint)(byte)(uVar4 >> 0x38);
    uVar4 = (ulonglong)(uVar7 * 2);
    memmove((void *)(*param_1 + uVar4 + 2),(void *)(*param_1 + uVar4),(ulonglong)(iVar2 - uVar7) * 2
           );
    *(ushort *)(*param_1 + uVar4) = uVar5;
  }
  else {
    uVar1 = *(ushort *)(*param_1 + uVar8 * 2);
    if ((uVar1 & uVar5) != 0) {
      return 1;
    }
    *(ushort *)(*param_1 + uVar8 * 2) = uVar1 | uVar5;
  }
  return 0;
}



// FUNCTION 1406add7a FUN_1406add7a body=134 status=ok
// SIG undefined FUN_1406add7a(void)

undefined2 FUN_1406add7a(longlong *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((*(uint *)(param_1 + 2) >> (param_2 >> 4 & 0x1f) & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 2) & (1 << ((byte)(param_2 >> 4) & 0x1f)) - 1U;
    uVar3 = (ulonglong)uVar2 - (ulonglong)(uVar2 >> 1 & 0x55555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar1 = *(ushort *)
             (*param_1 +
             (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 2);
    return CONCAT11((char)(uVar1 >> 8),(uVar1 >> (param_2 & 0xf) & 1) != 0);
  }
  return 0;
}



// FUNCTION 1406ade00 FUN_1406ade00 body=255 status=ok
// SIG undefined FUN_1406ade00(void)

void FUN_1406ade00(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406adeff FUN_1406adeff body=910 status=ok
// SIG undefined FUN_1406adeff(void)

void FUN_1406adeff(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  if ((param_4 & 2) == 0) {
    if ((param_4 & 1) != 0) {
      iVar2 = *(int *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x20) < *(int *)(param_2 + 0x20)) {
        iVar2 = *(int *)(param_2 + 0x20);
      }
      if (iVar2 != 0) {
        if (*(int *)(param_3 + 0x24) < iVar2) {
          *(undefined4 *)(param_3 + 0x24) = 0x100;
          FUN_14497ddce(param_3,*(undefined4 *)(param_3 + 0x20));
        }
        *(int *)(param_3 + 0x20) = iVar2;
        iVar1 = *(int *)(param_1 + 0x20);
        uVar3 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
        if (iVar1 % 0x20 < 1) {
          uVar3 = 0xffffffff;
        }
        iVar11 = *(int *)(param_2 + 0x20);
        uVar7 = 0xffffffff >> (-(char)(iVar11 % 0x20) & 0x1fU);
        if (iVar11 % 0x20 < 1) {
          uVar7 = 0xffffffff;
        }
        if (0 < iVar2) {
          uVar9 = (int)(param_4 << 0x1b) >> 0x1f;
          uVar12 = iVar2 + 0x1fU >> 5;
          iVar4 = iVar11 + 0x3e;
          if (-1 < iVar11 + 0x1f) {
            iVar4 = iVar11 + 0x1f;
          }
          iVar10 = iVar1 + 0x3e;
          if (-1 < iVar1 + 0x1f) {
            iVar10 = iVar1 + 0x1f;
          }
          uVar5 = 0xffffffff;
          if (iVar11 - 1U < 0x20) {
            uVar5 = uVar7;
          }
          uVar13 = 0xffffffff;
          if (iVar1 - 1U < 0x20) {
            uVar13 = uVar3;
          }
          uVar8 = 0;
          do {
            uVar6 = uVar9;
            if (((longlong)uVar8 < (longlong)(iVar10 >> 5)) &&
               (uVar6 = *(uint *)(param_1 + uVar8 * 4), uVar13 != 0xffffffff)) {
              if ((int)(param_4 << 0x1b) < 0) {
                uVar6 = uVar6 | ~uVar13;
              }
              else {
                uVar6 = uVar6 & uVar13;
              }
            }
            uVar14 = uVar9;
            if (((longlong)uVar8 < (longlong)(iVar4 >> 5)) &&
               (uVar14 = *(uint *)(param_2 + uVar8 * 4), uVar5 != 0xffffffff)) {
              if ((int)(param_4 << 0x1b) < 0) {
                uVar14 = uVar14 | ~uVar5;
              }
              else {
                uVar14 = uVar14 & uVar5;
              }
            }
            uVar5 = 0xffffffff;
            if (uVar12 - 1 == uVar8) {
              uVar5 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
            }
            if (iVar2 % 0x20 < 1) {
              uVar5 = 0xffffffff;
            }
            uVar13 = 0xffffffff;
            if ((iVar10 >> 5) - 2 == uVar8) {
              uVar13 = uVar3;
            }
            *(uint *)(param_3 + uVar8 * 4) = uVar5 & (uVar14 | uVar6);
            bVar15 = (iVar4 >> 5) - 2 == uVar8;
            uVar8 = uVar8 + 1;
            uVar5 = 0xffffffff;
            if (bVar15) {
              uVar5 = uVar7;
            }
          } while (uVar12 != uVar8);
        }
      }
    }
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x20);
    if ((int)*(uint *)(param_1 + 0x20) < (int)*(uint *)(param_2 + 0x20)) {
      uVar3 = *(uint *)(param_1 + 0x20);
    }
    if (0 < (int)uVar3) {
      if (*(int *)(param_3 + 0x24) < (int)uVar3) {
        *(undefined4 *)(param_3 + 0x24) = 0x100;
        FUN_14497ddce(param_3,*(undefined4 *)(param_3 + 0x20));
      }
      *(uint *)(param_3 + 0x20) = uVar3;
      iVar2 = *(int *)(param_1 + 0x20);
      uVar7 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
      if (iVar2 % 0x20 < 1) {
        uVar7 = 0xffffffff;
      }
      iVar1 = *(int *)(param_2 + 0x20);
      uVar9 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
      if (iVar1 % 0x20 < 1) {
        uVar9 = 0xffffffff;
      }
      uVar8 = 0;
      uVar12 = uVar3 + 0x1f >> 5;
      iVar11 = iVar1 + 0x3e;
      if (-1 < iVar1 + 0x1f) {
        iVar11 = iVar1 + 0x1f;
      }
      uVar5 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar5 = uVar7;
      }
      iVar4 = iVar2 + 0x3e;
      if (-1 < iVar2 + 0x1f) {
        iVar4 = iVar2 + 0x1f;
      }
      uVar13 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar13 = uVar9;
      }
      do {
        uVar14 = uVar5 & *(uint *)(param_1 + uVar8 * 4);
        uVar6 = 0xffffffff;
        if (uVar12 - 1 == uVar8) {
          uVar6 = -(uint)((uVar3 & 0x1f) == 0) | 0xffffffffU >> (-(char)(uVar3 & 0x1f) & 0x1fU);
        }
        uVar5 = 0xffffffff;
        if ((iVar4 >> 5) - 2 == uVar8) {
          uVar5 = uVar7;
        }
        *(uint *)(param_3 + uVar8 * 4) = uVar6 & (uVar14 | uVar13 & *(uint *)(param_2 + uVar8 * 4));
        bVar15 = (iVar11 >> 5) - 2 == uVar8;
        uVar8 = uVar8 + 1;
        uVar13 = 0xffffffff;
        if (bVar15) {
          uVar13 = uVar9;
        }
      } while (uVar12 != uVar8);
    }
  }
  return;
}



// FUNCTION 1406ae28e FUN_1406ae28e body=369 status=ok
// SIG undefined FUN_1406ae28e(void)

void FUN_1406ae28e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x78;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406ae315;
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
LAB_1406ae315:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x78)) {
    uVar7 = uVar5 / 0x78 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x78,8);
  return;
}



// FUNCTION 1406ae400 FUN_1406ae400 body=666 status=ok
// SIG undefined FUN_1406ae400(void)

void FUN_1406ae400(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1406ae473;
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
LAB_1406ae473:
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
      lVar13 = (longlong)iVar12 * 0x20;
      uVar2 = *(uint *)(lVar6 + lVar13);
      uVar15 = (longlong)
               (int)((uint)*(ushort *)(lVar6 + 4 + lVar13) + (uVar2 >> 2) + uVar2 * 0x40 +
                     0x9e3779b9 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
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



// FUNCTION 1406ae69a FUN_1406ae69a body=46 status=ok
// SIG undefined FUN_1406ae69a(void)

undefined4 * FUN_1406ae69a(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0xffff;
  }
  else {
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1406ae6c8 FUN_1406ae6c8 body=122 status=ok
// SIG undefined FUN_1406ae6c8(void)

void FUN_1406ae6c8(longlong param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0xe0);
  lVar4 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
  }
  uVar5 = 0;
  uVar7 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar7 >> 1) + uVar5;
      if (*(uint *)(lVar4 + (ulonglong)uVar1 * 0x18) < param_3) {
        uVar5 = uVar1 + (uVar7 & 1);
      }
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar3);
  }
  uVar6 = 0xffff;
  if ((((int)uVar5 < (int)uVar2) && (*(uint *)(lVar4 + (ulonglong)uVar5 * 0x18) <= param_3)) &&
     (lVar4 = lVar4 + (ulonglong)uVar5 * 0x18, lVar4 != -4)) {
    uVar6 = *(undefined4 *)(lVar4 + 0x14);
  }
  *param_2 = uVar6;
  return;
}



// FUNCTION 1406ae742 FUN_1406ae742 body=156 status=ok
// SIG undefined FUN_1406ae742(void)

byte FUN_1406ae742(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  
  cVar1 = *(char *)(*param_1 + 0x48);
  if ((cVar1 == '\b') || (cVar1 == '\x05')) {
LAB_1406ae787:
    bVar2 = 0;
    if (((param_1[7] & 0x20000000000002U) != 0) &&
       ((((int)param_1[2] == 0 && (*(uint *)(param_1 + 3) < 2)) && (bVar2 = 0, DAT_14c760e34 != 0)))
       ) {
      lVar3 = (ulonglong)*(ushort *)(param_1 + 9) * 0x3c;
      bVar2 = (byte)((uint)(&DAT_14ca814c8)[(ulonglong)*(ushort *)(param_1 + 9) * 0xf] >> 0x1d) &
              *(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) >> 4 &
              (byte)((*(uint *)(&DAT_14ca814cc + lVar3) & 8) >> 3);
    }
  }
  else {
    if (cVar1 == '\v') {
      cVar1 = FUN_1406ae7de();
      if ((cVar1 != '\0') &&
         ((*(byte *)((longlong)&DAT_14ca814d8 + (ulonglong)*(ushort *)(param_1 + 9) * 0x3c + 3) & 8)
          != 0)) goto LAB_1406ae787;
    }
    bVar2 = 0;
  }
  return bVar2;
}



// FUNCTION 1406ae7de FUN_1406ae7de body=321 status=ok
// SIG undefined FUN_1406ae7de(void)

undefined1 FUN_1406ae7de(void)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96ef8) {
    FUN_144b3d300(&DAT_14ca96ef8);
    if (DAT_14ca96ef8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.Nanite.AllowWorkGraphMaterials",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14ca96ef0 = 0;
      }
      else {
        DAT_14ca96ef0 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14ca96ef8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96f00) {
    FUN_144b3d300(&DAT_14ca96f00);
    lVar1 = DAT_14ca96ef0;
    if (DAT_14ca96f00 == -1) {
      if (DAT_14ca96ef0 == 0) {
        DAT_14ca96efc = false;
      }
      else {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar4 = 0;
        }
        else {
          bVar2 = FUN_144a61b4f();
          uVar4 = (ulonglong)(bVar2 ^ 1);
        }
        DAT_14ca96efc = *(int *)(lVar1 + uVar4 * 4) != 0;
      }
      _Init_thread_footer(&DAT_14ca96f00);
    }
  }
  return DAT_14ca96efc;
}



// FUNCTION 1406ae93c FUN_1406ae93c body=3371 status=ok
// SIG undefined FUN_1406ae93c(void)

void FUN_1406ae93c(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  byte bVar15;
  undefined4 uVar16;
  float fVar17;
  double dVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined1 auStack_968 [32];
  undefined8 local_948;
  double local_938;
  double dStack_930;
  double local_928;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined1 local_910 [24];
  longlong local_8f8;
  longlong lStack_8f0;
  longlong local_8e8;
  double local_888;
  double local_880;
  double local_878;
  double local_870;
  double local_868;
  double local_860;
  longlong local_840;
  longlong local_838;
  longlong lStack_830;
  undefined4 local_828;
  undefined1 local_824;
  longlong local_820;
  longlong lStack_818;
  longlong local_810;
  longlong lStack_808;
  longlong local_800;
  uint local_7f0 [2];
  byte local_7e8 [4];
  undefined8 local_7e4;
  undefined1 local_7d8 [4];
  undefined4 local_7d4;
  undefined4 local_734;
  undefined4 local_708;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined8 local_6c8;
  longlong local_6b8;
  longlong lStack_6b0;
  longlong local_6a8;
  longlong local_698 [125];
  longlong local_2b0;
  longlong local_a0;
  byte local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_968;
  cVar8 = (**(code **)(*param_1 + 0x600))();
  if (((cVar8 == '\0') || (*(char *)(param_1[0x22] + 0x1fb) != '\x02')) ||
     (cVar8 = (**(code **)(*(longlong *)param_1[0x22] + 0x480))(), cVar8 != '\0'))
  goto LAB_1406af4c9;
  lVar4 = param_1[0x3e];
  cVar8 = *(char *)(lVar4 + 0x178);
  if (((((cVar8 == '\x01') && (*(double *)(lVar4 + 0x110) == 0.0)) &&
       ((!NAN(*(double *)(lVar4 + 0x110)) &&
        ((*(double *)(lVar4 + 0x118) == 0.0 && (!NAN(*(double *)(lVar4 + 0x118)))))))) &&
      (*(double *)(lVar4 + 0x120) == 0.0)) && (!NAN(*(double *)(lVar4 + 0x120)))) {
    dVar18 = (double)FUN_144719204((int)*(undefined8 *)(lVar4 + 0x128),0x4076800000000000);
    dVar18 = (double)(~-(ulonglong)(dVar18 < 0.0) & (ulonglong)dVar18 |
                     (ulonglong)(dVar18 + 360.0) & -(ulonglong)(dVar18 < 0.0));
    if ((dVar18 == 0.0) && (!NAN(dVar18))) {
      dVar18 = (double)FUN_144719204((int)*(undefined8 *)(lVar4 + 0x130),0x4076800000000000);
      dVar18 = (double)(~-(ulonglong)(dVar18 < 0.0) & (ulonglong)dVar18 |
                       (ulonglong)(dVar18 + 360.0) & -(ulonglong)(dVar18 < 0.0));
      if ((dVar18 == 0.0) && (!NAN(dVar18))) {
        dVar18 = (double)FUN_144719204((int)*(undefined8 *)(lVar4 + 0x138),0x4076800000000000);
        dVar18 = (double)(~-(ulonglong)(dVar18 < 0.0) & (ulonglong)dVar18 |
                         (ulonglong)(dVar18 + 360.0) & -(ulonglong)(dVar18 < 0.0));
        if (((((dVar18 == 0.0) && (!NAN(dVar18))) && (*(double *)(lVar4 + 0xe0) == 0.0)) &&
            (((!NAN(*(double *)(lVar4 + 0xe0)) && (*(double *)(lVar4 + 0xe8) == 0.0)) &&
             (!NAN(*(double *)(lVar4 + 0xe8)))))) &&
           ((*(double *)(lVar4 + 0xf0) == 0.0 && (!NAN(*(double *)(lVar4 + 0xf0))))))
        goto LAB_1406af4c9;
      }
    }
  }
  lVar11 = *(longlong *)(param_1[0x3e] + 0x498);
  bVar15 = *(byte *)(param_1[0x3e] + 0x48a);
  if (lVar11 == 0) {
    if ((bVar15 & 1) != 0) goto LAB_1406af4c9;
  }
  else if (((bVar15 & 1) != 0) &&
          ((((*(byte *)(lVar11 + 0x9f) & 0x20) == 0 || ((*(byte *)(lVar11 + 0x9c) & 8) == 0)) &&
           (*(char *)((longlong)param_1 + 0x291) == '\x01')))) goto LAB_1406af4c9;
  bVar7 = false;
  if ((*(byte *)((longlong)param_1 + 0x349) & 1) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1[0x22];
  }
  FUN_1402ed838(local_698,lVar11,1,1);
  if (cVar8 == '\x01') {
    if ((*(byte *)((longlong)param_1 + 0x5b4) & 0x40) == 0) {
      if ((*(byte *)((longlong)param_1 + 0x349) & 0x10) != 0) {
        (**(code **)(*param_1 + 0xa78))(param_1);
      }
      bVar7 = false;
    }
    else {
      bVar15 = *(byte *)((longlong)param_1 + 0x5b4) & 0xbf;
      *(byte *)((longlong)param_1 + 0x5b4) = bVar15;
      if ((*(byte *)((longlong)param_1 + 0x5b5) & 1) != 0) {
        (**(code **)(*(longlong *)param_1[0x3e] + 0x7d8))((longlong *)param_1[0x3e],local_7f0);
        (**(code **)(*param_1 + 0x790))(param_1);
        *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) & 0xfe;
        bVar15 = *(byte *)((longlong)param_1 + 0x5b4);
      }
      if ((char)bVar15 < '\0') {
        (**(code **)(*param_1 + 0x5f0))(param_1);
        *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0x7f;
      }
      else {
        if (((bVar15 & 0x20) == 0) &&
           (bVar7 = true, (*(byte *)((longlong)param_1 + 0x349) & 0x10) == 0)) goto LAB_1406aec62;
        *(byte *)((longlong)param_1 + 0x5b4) = bVar15 & 0x5f;
        (**(code **)(*param_1 + 0xa78))(param_1);
      }
      bVar7 = true;
    }
  }
LAB_1406aec62:
  (**(code **)(*param_1 + 0x758))(param_1);
  if (*(char *)((longlong)param_1 + 0x291) != '\0') {
    (**(code **)(*param_1 + 0x690))(param_1);
  }
  (**(code **)(*param_1 + 0x750))(param_1);
  if (*(char *)((longlong)param_1 + 0x291) == '\0') {
    if ((((local_90 & 1) != 0) && (local_698[0] != 0)) &&
       ((*(uint *)(local_698[0] + 8) >> 0x1e & 1) == 0)) {
      FUN_140248a4c(local_698[0],local_698);
    }
    local_698[0] = 0;
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    if (local_2b0 != 0) {
      FUN_1400020a8();
    }
    goto LAB_1406af4c9;
  }
  if (cVar8 == '\x01') {
    bVar15 = *(byte *)(param_1[0x3e] + 0x551) & 1;
    cVar8 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
    if ((((cVar8 == '\0') || (*(double *)(lVar4 + 0xe0) != 0.0)) || (NAN(*(double *)(lVar4 + 0xe0)))
        ) || ((*(double *)(lVar4 + 0xe8) != 0.0 || (NAN(*(double *)(lVar4 + 0xe8))))))
    goto LAB_1406aed7a;
    bVar5 = *(double *)(lVar4 + 0xf0) == 0.0;
  }
  else {
    bVar15 = 0;
LAB_1406aed7a:
    bVar5 = false;
  }
  if ((bVar15 != 0) || (bVar5)) {
    param_1[0x27] = DAT_14c8464f0;
    uVar22 = DAT_14c8464e8._4_4_;
    uVar19 = (undefined4)DAT_14c8464e8;
    uVar16 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x25) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 300) = uVar16;
    *(undefined4 *)(param_1 + 0x26) = uVar19;
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar22;
  }
  (**(code **)(*param_1 + 0x638))(param_1);
  plVar1 = param_1 + 0x25;
  local_6a8 = param_1[0x27];
  local_6b8 = param_1[0x25];
  lStack_6b0 = param_1[0x26];
  lVar4 = param_1[0x22];
  local_6d8 = *(undefined4 *)(lVar4 + 0x260);
  uStack_6d4 = *(undefined4 *)(lVar4 + 0x264);
  uStack_6d0 = *(undefined4 *)(lVar4 + 0x268);
  uStack_6cc = *(undefined4 *)(lVar4 + 0x26c);
  local_6c8 = *(undefined8 *)(lVar4 + 0x270);
  (**(code **)(*param_1 + 0x838))(param_1);
  if (((!bVar7) || ((*(byte *)((longlong)param_1 + 0x34a) & 8) == 0)) || (DAT_14c7613a4 == 0)) {
    local_7f0[0] = 0;
    local_7e8[0] = local_7e8[0] & 0xf8;
    local_7e4 = 0;
    memset(local_7d8,0,0x100);
    local_708 = 0xffffffff;
    local_734 = 0xffffffff;
    local_7d4 = 0x3f800000;
    (**(code **)(*param_1 + 0x830))(param_1);
    plVar10 = param_1 + 0x2f;
    cVar8 = (**(code **)(param_1[0x2f] + 0xe0))(plVar10);
    if ((cVar8 != '\0') || (*(char *)((longlong)param_1 + 0x291) == '\x03')) {
      if ((local_7f0[0] & 1) == 0) {
        if ((-(double)param_1[0x46] * (double)param_1[0x25] -
            (double)param_1[0x47] * (double)param_1[0x26]) -
            (double)param_1[0x48] * (double)param_1[0x27] <= 9.999999747378752e-05) {
          lVar4 = param_1[0x22];
          local_8f8 = *(longlong *)(lVar4 + 0x260);
          lStack_8f0 = *(longlong *)(lVar4 + 0x268);
          local_8e8 = *(longlong *)(lVar4 + 0x270);
          local_948 = 0;
          (**(code **)(*param_1 + 0x900))
                    (param_1,&local_8f8,param_1 + 0x93,
                     (double)param_1[0x27] == 0.0 &
                     -((double)param_1[0x25] == 0.0 && (double)param_1[0x26] == 0.0));
        }
        else {
          *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) & 0xf8;
          *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
          memset(param_1 + 0x95,0,0x100);
          *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
          *(undefined4 *)((longlong)param_1 + 0x54c) = 0xffffffff;
          *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x3f800000;
        }
      }
      else {
        memcpy(param_1 + 0x93,local_7e8,0x110);
      }
      plVar14 = param_1 + 0x95;
      if ((((*(byte *)((longlong)param_1 + 0x555) & 2) == 0) || (param_1[0x3e] == 0)) ||
         ((lVar4 = *(longlong *)(param_1[0x3e] + 0x450), lVar4 == 0 ||
          (*(char *)(lVar4 + 0x1fb) != '\x02')))) {
        if ((~*(uint *)(param_1 + 0x93) & 3) == 0) {
          cVar8 = (**(code **)(*plVar10 + 0xe0))(plVar10);
          if (cVar8 == '\0') {
            if (*(char *)((longlong)param_1 + 0x291) == '\x03') {
              if ((*(float *)((longlong)param_1 + 0x49c) <= 1.9) ||
                 ((*(float *)((longlong)param_1 + 0x49c) <= 2.4 & bVar15) != 0)) {
                (**(code **)(*param_1 + 0x7b0))(param_1,plVar14);
              }
              else {
                if (bVar15 == 0) {
                  dVar18 = (double)param_1[0x48];
                  dVar2 = (double)param_1[0x47];
                  dVar3 = (double)param_1[0x46];
                  fVar17 = (float)(**(code **)(*param_1 + 0x478))(param_1);
                  local_938 = (double)fVar17;
                  local_928 = -dVar18 * local_938;
                  dStack_930 = -dVar2 * local_938;
                  local_938 = -dVar3 * local_938;
                  local_948 = CONCAT44(local_948._4_4_,param_2);
                  (**(code **)(*param_1 + 0x6e0))(param_1,&local_8f8,plVar1);
                  param_1[0x27] = local_8e8;
                  *plVar1 = local_8f8;
                  param_1[0x26] = lStack_8f0;
                }
                *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) & 0xf8;
                *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
                memset(plVar14,0,0x100);
                *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
                *(undefined4 *)((longlong)param_1 + 0x54c) = 0xffffffff;
                *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x3f800000;
              }
            }
          }
          else {
            (**(code **)(*param_1 + 0x630))(param_1);
            if (*(int *)((longlong)param_1 + 0x584) == 0) {
LAB_1406af64d:
              uVar12 = 0;
            }
            else {
              uVar20 = *(uint *)(param_1 + 0xb0);
              uVar12 = 0;
              if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
                puVar13 = (undefined8 *)
                          ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                if ((puVar13 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar13 + 2) != *(int *)((longlong)param_1 + 0x584) ||
                    ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_1406af64d;
                uVar12 = *puVar13;
              }
            }
            (**(code **)(*param_1 + 0x730))(param_1,uVar12,param_1[0xb3],1);
          }
        }
        else {
          if (bVar15 == 0) {
            dVar18 = (double)param_1[0x47];
            dVar2 = (double)param_1[0x48];
            uVar20 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
            uVar16 = SUB84(dVar2,0);
            dVar3 = -(double)param_1[0x46];
            uVar22 = (undefined4)param_1[0x46];
            uVar23 = (uint)((ulonglong)dVar3 >> 0x20);
            uVar21 = (uint)((ulonglong)dVar18 >> 0x20) ^ 0x80000000;
            uVar19 = SUB84(dVar18,0);
            if ((9.999999747378752e-05 <
                 (dVar3 * (double)param_1[0x25] - dVar18 * (double)param_1[0x26]) -
                 dVar2 * (double)param_1[0x27]) && ((*(byte *)(param_1 + 0x69) & 4) == 0)) {
              cVar8 = (**(code **)(*(longlong *)param_1[0x3e] + 0x810))();
              if (cVar8 != '\0') goto LAB_1406af328;
              uVar20 = (uint)((ulonglong)param_1[0x48] >> 0x20) ^ 0x80000000;
              uVar16 = (undefined4)param_1[0x48];
              uVar21 = (uint)((ulonglong)param_1[0x47] >> 0x20) ^ 0x80000000;
              uVar19 = (undefined4)param_1[0x47];
              uVar23 = (uint)((ulonglong)param_1[0x46] >> 0x20) ^ 0x80000000;
              uVar22 = (undefined4)param_1[0x46];
            }
            fVar17 = (float)(**(code **)(*param_1 + 0x478))(param_1);
            local_938 = (double)fVar17;
            local_928 = (double)CONCAT44(uVar20,uVar16) * local_938;
            dStack_930 = (double)CONCAT44(uVar21,uVar19) * local_938;
            local_938 = (double)CONCAT44(uVar23,uVar22) * local_938;
            local_948 = CONCAT44(local_948._4_4_,param_2);
            (**(code **)(*param_1 + 0x6e0))(param_1,&local_8f8,plVar1);
            param_1[0x27] = local_8e8;
            *plVar1 = local_8f8;
            param_1[0x26] = lStack_8f0;
          }
LAB_1406af328:
          (**(code **)(*param_1 + 0x5d0))(param_1,3,0);
        }
      }
      else {
        memcpy(&local_8f8,plVar14,0xb8);
        local_840 = param_1[0xac];
        local_838 = param_1[0xad];
        lStack_830 = param_1[0xae];
        local_828 = (undefined4)param_1[0xaf];
        local_824 = *(undefined1 *)((longlong)param_1 + 0x57c);
        local_800 = param_1[0xb4];
        local_820 = param_1[0xb0];
        lStack_818 = param_1[0xb1];
        local_810 = param_1[0xb2];
        lStack_808 = param_1[0xb3];
        local_860 = local_878 - (double)param_1[0x48] * 2.4000000953674316;
        local_870 = local_888 - (double)param_1[0x46] * 2.4000000953674316;
        local_868 = local_880 - (double)param_1[0x47] * 2.4000000953674316;
        (**(code **)(*param_1 + 0x4f0))(param_1,local_910,&local_8f8);
        lVar4 = param_1[0x22];
        local_938 = *(double *)(lVar4 + 0x240);
        dStack_930 = *(double *)(lVar4 + 0x248);
        local_928 = *(double *)(lVar4 + 0x250);
        uStack_920 = *(undefined4 *)(lVar4 + 600);
        uStack_91c = *(undefined4 *)(lVar4 + 0x25c);
        bVar15 = (**(code **)(*param_1 + 0x4f8))(param_1,local_910,&local_8f8);
        *(byte *)((longlong)param_1 + 0x349) =
             *(byte *)((longlong)param_1 + 0x349) & 0xef |
             ((*(byte *)((longlong)param_1 + 0x349) & 0x10) >> 4 | bVar15) << 4;
      }
    }
  }
  (**(code **)(*param_1 + 0x760))(param_1);
  plVar10 = param_1 + 0xbc;
  plVar14 = &DAT_14c8464e0;
  if ((*(byte *)((longlong)param_1 + 0x5bc) & 1) == 0) {
    plVar10 = &DAT_14c8464e0;
  }
  uVar16 = *(undefined4 *)((longlong)plVar10 + 4);
  lVar4 = plVar10[1];
  uVar19 = *(undefined4 *)((longlong)plVar10 + 0xc);
  *(int *)(param_1 + 0xbf) = (int)*plVar10;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = uVar16;
  *(int *)(param_1 + 0xc0) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x604) = uVar19;
  param_1[0xc1] = plVar10[2];
  *(byte *)((longlong)param_1 + 0x5bc) = *(byte *)((longlong)param_1 + 0x5bc) & 0xfe;
  (**(code **)(*param_1 + 0x968))(param_1);
  if ((((local_90 & 1) != 0) && (local_698[0] != 0)) &&
     ((*(uint *)(local_698[0] + 8) >> 0x1e & 1) == 0)) {
    FUN_140248a4c(local_698[0],local_698);
  }
  local_698[0] = 0;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_2b0 != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x970))(param_1);
  (**(code **)(*param_1 + 0x650 + (ulonglong)(DAT_14c7613d4 == 0) * 8))(param_1);
  (**(code **)(*param_1 + 0x4d0))(param_1);
  *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
  lVar4 = param_1[0x22];
  if (lVar4 == 0) {
    plVar10 = &DAT_14c8463d0;
    plVar9 = &DAT_14c8463e0;
    uVar16 = (undefined4)DAT_14c8464f0;
    uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    plVar14 = (longlong *)(lVar4 + 0x260);
    uVar16 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
    uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
    plVar10 = (longlong *)(lVar4 + 0x240);
    plVar9 = (longlong *)(lVar4 + 0x250);
  }
  lVar4 = plVar14[1];
  param_1[0x78] = *plVar14;
  param_1[0x79] = lVar4;
  param_1[0x7a] = CONCAT44(uVar19,uVar16);
  lVar4 = plVar10[1];
  lVar11 = *plVar9;
  lVar6 = plVar9[1];
  param_1[0x74] = *plVar10;
  param_1[0x75] = lVar4;
  param_1[0x76] = lVar11;
  param_1[0x77] = lVar6;
  *(int *)(param_1 + 0x7b) = (int)*plVar1;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = *(undefined4 *)((longlong)param_1 + 300);
  *(int *)(param_1 + 0x7c) = (int)param_1[0x26];
  *(undefined4 *)((longlong)param_1 + 0x3e4) = *(undefined4 *)((longlong)param_1 + 0x134);
  param_1[0x7d] = param_1[0x27];
LAB_1406af4c9:
  if ((local_80 ^ (ulonglong)auStack_968) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406af676 FUN_1406af676 body=67 status=ok
// SIG undefined FUN_1406af676(void)

undefined8 * FUN_1406af676(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aff06f0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1406af6ba FUN_1406af6ba body=141 status=ok
// SIG undefined FUN_1406af6ba(void)

ulonglong FUN_1406af6ba(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14ca9a668 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1406af748(&DAT_14ca9a628,param_1,param_2);
    local_1c = 0xffffffff;
    lVar1 = FUN_1404d2d58(DAT_14ca9a668,param_1);
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),lVar1 != 0);
    if (lVar1 != 0) {
      FUN_1406af810(lVar1,local_1c,param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406af748 FUN_1406af748 body=200 status=ok
// SIG undefined FUN_1406af748(void)

void FUN_1406af748(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while (((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
              (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
              plVar3 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3), cVar5 != '\0'))) {
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_1406af801;
          goto LAB_1406af778;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_1406af801:
    FUN_14109be94(param_1,0);
  }
LAB_1406af778:
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001406af78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 1406af810 FUN_1406af810 body=478 status=ok
// SIG undefined FUN_1406af810(void)

void FUN_1406af810(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 auStack_118 [40];
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 *local_b8 [2];
  longlong *local_a8;
  longlong local_98 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined4 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_58 = (undefined4 *)0x0;
  local_50 = 0x400000000;
  (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,param_2,&local_78);
  puVar4 = local_58;
  iVar1 = (int)local_50;
  if (0 < (int)local_50 && param_3 != (longlong *)0x0) {
    local_c8 = 0;
    if (local_58 == (undefined4 *)0x0) {
      local_d8 = local_68;
      lStack_d0 = lStack_60;
      local_e8 = local_78;
      uStack_e4 = uStack_74;
      uStack_e0 = uStack_70;
      uStack_dc = uStack_6c;
    }
    local_58 = (undefined4 *)0x0;
    uVar2 = local_50._4_4_;
    local_50 = 0x400000000;
    local_b8[0] = (undefined1 *)0x0;
    local_f0 = param_1;
    local_a8 = (longlong *)FUN_14001cc68(0x40,8);
    *local_a8 = (longlong)&PTR_FUN_14a395480;
    local_a8[1] = (longlong)param_1;
    if (puVar4 == (undefined4 *)0x0) {
      local_a8[4] = local_d8;
      local_a8[5] = lStack_d0;
      *(undefined4 *)(local_a8 + 2) = local_e8;
      *(undefined4 *)((longlong)local_a8 + 0x14) = uStack_e4;
      *(undefined4 *)(local_a8 + 3) = uStack_e0;
      *(undefined4 *)((longlong)local_a8 + 0x1c) = uStack_dc;
    }
    local_a8[6] = (longlong)puVar4;
    local_c8 = 0;
    *(int *)(local_a8 + 7) = iVar1;
    *(undefined4 *)((longlong)local_a8 + 0x3c) = uVar2;
    local_c0 = 0x400000000;
    if (local_a8 != (longlong *)&DAT_fffffffffffffff8) {
      local_b8[0] = &LAB_1404544da;
    }
    FUN_144717c65(&local_e8,0);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_3 + 0x238))(param_3,local_b8);
    if (local_b8[0] != (undefined1 *)0x0) {
      plVar3 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar3 = local_98;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  puVar4 = &local_78;
  if (local_58 != (undefined4 *)0x0) {
    puVar4 = local_58;
  }
  FUN_144717c65(puVar4,(int)local_50);
  if (local_58 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406af9f0 FUN_1406af9f0 body=256 status=ok
// SIG undefined FUN_1406af9f0(void)

undefined8 *
FUN_1406af9f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,uint param_11,undefined1 param_12,char param_13)

{
  FUN_144869430();
  *param_1 = &PTR_FUN_149e69cb0;
  param_1[0x12] = param_2;
  param_1[0x13] = param_3;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = param_6;
  *(undefined4 *)((longlong)param_1 + 0xac) = param_7;
  *(undefined4 *)(param_1 + 0x16) = param_8;
  *(undefined4 *)((longlong)param_1 + 0xb4) = param_9;
  *(undefined1 *)(param_1 + 0x17) = param_12;
  param_1[0x18] = param_10;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 1;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xbb | param_13 << 6 | 4;
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 0x10;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfe;
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | param_11 | 0x1000;
  FUN_1406afaf0(param_1,param_4,param_5);
  return param_1;
}



// FUNCTION 1406afaf0 FUN_1406afaf0 body=623 status=ok
// SIG undefined FUN_1406afaf0(void)

void FUN_1406afaf0(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar9 = param_3;
  if (param_3 != 0) {
    do {
      if ((*(uint *)(lVar9 + 8) & 0x30) != 0) goto LAB_1406afb3b;
      plVar1 = (longlong *)(lVar9 + 0x20);
      lVar9 = *plVar1;
    } while (*plVar1 != 0);
    FUN_144757f48(param_3,0x3000);
  }
LAB_1406afb3b:
  lVar9 = *(longlong *)(param_1 + 0x90);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar9 + 0x58);
  EnterCriticalSection(lpCriticalSection);
  if (*(ulonglong *)(lVar9 + 0x80) == param_2) {
    uVar8 = *(ulonglong *)(lVar9 + 0x88);
  }
  else {
    *(ulonglong *)(lVar9 + 0x80) = param_2;
    if (*(int *)(lVar9 + 0x10) != *(int *)(lVar9 + 0x3c)) {
      uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      lVar6 = lVar9 + 0x40;
      if (*(longlong *)(lVar9 + 0x48) != 0) {
        lVar6 = *(longlong *)(lVar9 + 0x48);
      }
      iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar9 + 0x50) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                               4);
      if (iVar4 != -1) {
        do {
          puVar2 = (ulonglong *)(*(longlong *)(lVar9 + 8) + (longlong)iVar4 * 0x18);
          if (*puVar2 == param_2) {
            if (puVar2 + 1 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) {
              uVar8 = puVar2[1];
              *(ulonglong *)(lVar9 + 0x88) = uVar8;
              goto LAB_1406afb7f;
            }
            break;
          }
          iVar4 = (int)puVar2[2];
        } while (iVar4 != -1);
      }
    }
    *(undefined8 *)(lVar9 + 0x88) = 0;
    uVar8 = 0;
  }
LAB_1406afb7f:
  local_40 = uVar8;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (uVar8 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    local_44 = 0;
    if (param_3 == 0) {
      local_48 = 0;
      iVar4 = 0;
    }
    else {
      local_48 = *(uint *)(param_3 + 0xc);
      if ((int)local_48 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar4 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar4 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar7;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar4 = iVar7;
        }
      }
    }
    local_44 = iVar4;
    FUN_1406afd60(uVar3,param_2);
  }
  else {
    FUN_14485c47a(&local_40,param_3);
  }
  iVar4 = *(int *)(param_1 + 0xd0);
  *(uint *)(param_1 + 0xd0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xd4) < iVar4 + 1U) {
    FUN_1447f76d2((longlong *)(param_1 + 200),iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar4 * 8) = param_2;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406afd60 FUN_1406afd60 body=162 status=ok
// SIG undefined FUN_1406afd60(void)

void FUN_1406afd60(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_3;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  local_40 = param_1 + 0x80;
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(longlong *)(param_1 + 0x88) = lVar1;
  local_38 = param_1 + 0x88;
  FUN_1406afe18(param_1 + 8,local_2c,&local_40,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406afe18 FUN_1406afe18 body=343 status=ok
// SIG undefined FUN_1406afe18(void)

undefined4 *
FUN_1406afe18(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406b0008(param_1,local_50);
  puVar1 = (ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_1406aff70(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1406b01e4(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406aff70 FUN_1406aff70 body=152 status=ok
// SIG undefined FUN_1406aff70(void)

void FUN_1406aff70(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_14688b9e2((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1406aff94;
    }
  }
  uVar5 = 0;
LAB_1406aff94:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1406b0008 FUN_1406b0008 body=476 status=ok
// SIG undefined FUN_1406b0008(void)

int * FUN_1406b0008(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1406b01e4 FUN_1406b01e4 body=679 status=ok
// SIG undefined FUN_1406b01e4(void)

void FUN_1406b01e4(longlong *param_1)

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
  longlong lVar12;
  int iVar13;
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
    if ((int)uVar7 < 1) goto LAB_1406b0248;
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
LAB_1406b0248:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
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
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 1406b048c FUN_1406b048c body=1257 status=ok
// SIG undefined FUN_1406b048c(void)

void FUN_1406b048c(longlong param_1,double param_2,double param_3,undefined1 param_4)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  int iVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  undefined8 *in_RDX;
  undefined8 *puVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined1 local_f9;
  double local_f8 [7];
  ulonglong local_c0;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar9 = *(int *)(param_1 + 0x2d0);
  if ((longlong)iVar9 != 0) {
    lVar14 = *(longlong *)(param_1 + 0x2c8);
    lVar16 = 0;
    do {
      lVar10 = *(longlong *)(lVar14 + lVar16);
      *(undefined1 *)(lVar10 + 0x270) = 0;
      param_2 = *(double *)(lVar10 + 0x278) * 10.0;
      *(double *)(lVar10 + 0x268) = param_2;
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar9 * 8 != lVar16);
  }
  lVar14 = *(longlong *)(param_1 + 0x2b8);
  if (lVar14 == 0) {
    FUN_1406b0976(param_1,param_2,SUB84(param_3,0));
    dVar11 = *(double *)(param_1 + 400);
    dVar12 = *(double *)(param_1 + 0x198);
    dVar13 = *(double *)(param_1 + 0x1a0);
    dVar18 = *(double *)(param_1 + 0x1a8);
    dVar1 = *(double *)(param_1 + 0x148);
    dVar2 = *(double *)(param_1 + 0x148);
    dVar3 = *(double *)(param_1 + 0x138);
    dVar4 = *(double *)(param_1 + 0x138);
    dVar5 = *(double *)(param_1 + 0x130);
    dVar6 = *(double *)(param_1 + 0x130);
    dVar7 = *(double *)(param_1 + 0x140);
    dVar8 = *(double *)(param_1 + 0x140);
    dVar19 = -(dVar12 * dVar7 * -1.0 + dVar13 * dVar3 + dVar5 * dVar18 * 1.0 + dVar1 * dVar11);
    dVar20 = -(dVar11 * dVar8 * 1.0 + dVar18 * dVar4 + dVar6 * dVar13 * -1.0 + dVar2 * dVar12);
    dVar17 = (dVar18 * dVar7 * 1.0 + ((dVar5 * dVar12 * 1.0 + dVar1 * dVar13) - dVar3 * dVar11)) *
             -1.0;
    dVar18 = (dVar13 * dVar8 * -1.0 + ((dVar6 * dVar11 * -1.0 + dVar2 * dVar18) - dVar4 * dVar12)) *
             1.0;
    dVar2 = *(double *)(param_1 + 0xf0);
    dVar1 = *(double *)(param_1 + 0xf8);
    dVar4 = *(double *)(param_1 + 0x100);
    dVar21 = dVar20 * dVar4 - dVar1 * dVar17;
    dVar21 = dVar21 + dVar21;
    dVar12 = dVar19 * dVar1 - dVar2 * dVar20;
    dVar12 = dVar12 + dVar12;
    dVar8 = dVar17 * dVar2 - dVar4 * dVar19;
    dVar8 = dVar8 + dVar8;
    dVar3 = *(double *)(param_1 + 0xd8);
    dVar6 = *(double *)(param_1 + 0xe0);
    dVar5 = *(double *)(param_1 + 0xe8);
    dVar11 = dVar20 * dVar5 - dVar6 * dVar17;
    dVar11 = dVar11 + dVar11;
    dVar13 = dVar19 * dVar6 - dVar3 * dVar20;
    dVar13 = dVar13 + dVar13;
    dVar7 = dVar17 * dVar3 - dVar5 * dVar19;
    dVar7 = dVar7 + dVar7;
    *(double *)(param_1 + 0x378) = (dVar20 * dVar13 - dVar7 * dVar17) + dVar18 * dVar11 + dVar3;
    *(double *)(param_1 + 0x380) = (dVar17 * dVar11 - dVar13 * dVar19) + dVar18 * dVar7 + dVar6;
    *(double *)(param_1 + 0x388) = (dVar19 * dVar7 - dVar11 * dVar20) + dVar18 * dVar13 + dVar5;
    *(double *)(param_1 + 0x390) = (dVar20 * dVar12 - dVar8 * dVar17) + dVar18 * dVar21 + dVar2;
    *(double *)(param_1 + 0x398) = (dVar17 * dVar21 - dVar12 * dVar19) + dVar18 * dVar8 + dVar1;
    *(double *)(param_1 + 0x3a0) = (dVar19 * dVar8 - dVar21 * dVar20) + dVar18 * dVar12 + dVar4;
  }
  else {
    *(undefined1 *)(param_1 + 0x270) = 0;
    *(double *)(param_1 + 0x268) = *(double *)(param_1 + 0x278) * 10.0;
    puVar15 = (undefined8 *)(param_1 + 0x130);
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar15 = *in_RDX;
      in_RDX = in_RDX + 1;
      puVar15 = puVar15 + 1;
    }
    local_f8[0] = *(double *)(lVar14 + 0x6d8);
    local_f8[1] = *(double *)(lVar14 + 0x6e0);
    local_f8[2] = *(double *)(lVar14 + 0x6e8);
    local_f8[3] = *(double *)(lVar14 + 0x6f0);
    local_f8[4] = *(double *)(lVar14 + 0x6f8);
    local_f8[5] = *(double *)(lVar14 + 0x700);
    local_f9 = 1;
    local_fc = 0x100;
    local_108 = 1;
    local_fa = param_4;
    FUN_144a5ad3c(lVar14,&local_fc,&local_fa,1);
    lVar14 = 0;
    do {
      *(double *)(*(longlong *)(param_1 + 0x2b8) + 0x6a8 + lVar14 * 8) =
           (*(double *)(*(longlong *)(param_1 + 0x2b8) + 0x6d8 + lVar14 * 8) - local_f8[lVar14]) *
           param_3;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 6);
    local_fd = 1;
    local_100 = 0x100;
    local_108 = 1;
    local_fe = param_4;
    FUN_1448f23ac(*(undefined8 *)(param_1 + 0x2b8),&local_100,&local_fe,1);
    FUN_14025ae36(param_1);
  }
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406b0976 FUN_1406b0976 body=4314 status=ok
// SIG undefined FUN_1406b0976(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406b0976(longlong *param_1,double *param_2,double param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar17;
  double dVar18;
  undefined1 auVar16 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar34;
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar33 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auStack_348 [32];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d0;
  double *pdVar5;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  auVar21 = *(undefined1 (*) [16])(param_2 + 8);
  dVar15 = auVar21._0_8_;
  dVar17 = auVar21._8_8_;
  dVar11 = SUB168(*(undefined1 (*) [16])(param_2 + 10),0);
  auVar22 = *(undefined1 (*) [16])(param_1 + 0x3a);
  dVar20 = auVar22._0_8_;
  dVar41 = auVar22._8_8_;
  auVar24 = *(undefined1 (*) [16])(param_1 + 0x3c);
  dVar1 = auVar24._0_8_;
  uVar43 = auVar24._0_4_;
  uVar44 = auVar24._4_4_;
  uVar45 = auVar24._8_4_;
  uVar46 = auVar24._12_4_;
  auVar21 = minpd(auVar22,auVar21);
  auVar31 = minpd(auVar24,*(undefined1 (*) [16])(param_2 + 10));
  auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar2 = movmskpd((int)local_d0,auVar22);
  auVar21._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
  auVar21._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
  uVar3 = movmskpd((int)param_1,auVar21);
  local_288 = param_3;
  if ((uVar3 & 0x3fffffff) == 0 && iVar2 == 0) {
    dVar36 = (double)param_1[0x32];
    dVar37 = (double)param_1[0x33];
    dVar40 = (double)param_1[0x34];
    dVar35 = (double)param_1[0x35];
    dVar39 = *param_2;
    dVar52 = param_2[1];
    dVar7 = param_2[2];
    dVar50 = param_2[3];
    dVar1 = param_2[3];
    dVar18 = param_2[1];
    dVar49 = param_2[1];
    dVar14 = param_2[2];
    dVar19 = param_2[2];
    local_318 = dVar37 * dVar14 * -1.0 + dVar40 * dVar18 + dVar35 * *param_2 * 1.0 + dVar36 * dVar50
    ;
    dStack_310 = dVar36 * dVar19 * 1.0 + dVar35 * dVar49 + dVar40 * *param_2 * -1.0 + dVar37 * dVar1
    ;
    local_328._8_8_ =
         dVar40 * dVar19 * -1.0 + ((*param_2 * dVar36 * -1.0 + dVar35 * dVar1) - dVar37 * dVar49);
    local_328._0_8_ =
         dVar35 * dVar14 * 1.0 + ((*param_2 * dVar37 * 1.0 + dVar40 * dVar50) - dVar36 * dVar18);
    dVar15 = dVar15 * (double)param_1[0x36];
    dVar17 = dVar17 * (double)param_1[0x37];
    dVar11 = dVar11 * (double)param_1[0x38];
    dVar49 = dVar17 * dVar39 - dVar52 * dVar15;
    dVar14 = dVar11 * dVar52 - dVar7 * dVar17;
    dVar18 = dVar15 * dVar7 - dVar39 * dVar11;
    dVar14 = dVar14 + dVar14;
    dVar18 = dVar18 + dVar18;
    dVar49 = dVar49 + dVar49;
    uVar4 = 0;
    dVar15 = (dVar49 * dVar52 - dVar7 * dVar18) + dVar50 * dVar14 + dVar15 + param_2[4];
    dVar1 = (dVar14 * dVar7 - dVar49 * dVar39) + dVar1 * dVar18 + dVar17 + param_2[5];
    dVar11 = (dVar18 * dVar39 - dVar52 * dVar14) + dVar50 * dVar49 + dVar11 + param_2[6];
  }
  else {
    dVar36 = *param_2;
    dVar37 = param_2[1];
    dVar50 = param_2[2];
    dVar27 = dVar37 + dVar37;
    dVar28 = dVar50 + dVar50;
    dVar49 = dVar36 * (dVar36 + dVar36);
    local_2e8 = (1.0 - (dVar50 * dVar28 + dVar37 * dVar27)) * dVar15;
    dVar18 = (1.0 - (dVar50 * dVar28 + dVar49)) * dVar17;
    dVar50 = param_2[3];
    dVar29 = dVar28 * dVar50;
    dVar34 = (dVar36 + dVar36) * param_2[3];
    dVar50 = dVar27 * dVar50;
    dVar14 = (dVar50 + *param_2 * dVar28) * dVar11;
    dVar51 = (dVar27 * dVar36 - dVar29) * dVar17;
    dVar53 = (dVar28 * dVar37 - dVar34) * dVar11;
    local_2b8._8_4_ = SUB84(dVar18,0);
    local_2b8._0_8_ = dVar51;
    local_2b8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    dVar40 = (double)param_1[0x32];
    dVar35 = (double)param_1[0x33];
    dVar7 = (double)param_1[0x34];
    dVar19 = dVar35 + dVar35;
    dVar30 = dVar7 + dVar7;
    dStack_310 = (double)param_1[0x35] + (double)param_1[0x35];
    local_318 = dVar30 * dVar40;
    local_2a8 = dVar40 * (dVar40 + dVar40);
    dStack_2a0 = dVar35 * dVar19;
    dVar18 = (double)param_1[0x35];
    dVar47 = dVar30 * dVar18;
    dVar48 = (dVar40 + dVar40) * (double)param_1[0x35];
    dVar39 = (dVar19 * dVar40 - dVar47) * dVar41;
    dVar52 = (dVar30 * dVar35 - dVar48) * dVar1;
    dStack_2e0 = (dVar27 * dVar36 + dVar29) * dVar15;
    dVar38 = (dVar28 * dVar37 + dVar34) * dVar17;
    dVar29 = (1.0 - (dVar7 * dVar30 + dStack_2a0)) * dVar20;
    dVar34 = (1.0 - (dVar7 * dVar30 + local_2a8)) * dVar41;
    dVar40 = (dVar19 * dVar40 + dVar47) * dVar20;
    dVar35 = (dVar30 * dVar35 + dVar48) * dVar41;
    local_2d8 = (*param_2 * dVar28 - dVar50) * dVar15;
    uStack_2d0 = 0;
    dVar19 = dVar19 * dVar18;
    local_2f8 = dVar15 * dVar20;
    dStack_2f0 = dVar17 * dVar41;
    dVar20 = (local_318 - dVar19) * dVar20;
    local_298 = dVar14 * dVar20 + dVar51 * dVar40 + local_2e8 * dVar29;
    dStack_290 = dVar53 * dVar20 + (double)local_2b8._8_8_ * dVar40 + dStack_2e0 * dVar29;
    dVar7 = (1.0 - (dVar49 + dVar37 * dVar27)) * dVar11;
    local_2c8 = dVar14 * dVar35 + dVar51 * dVar34 + local_2e8 * dVar39;
    dStack_2c0 = dVar53 * dVar35 + (double)local_2b8._8_8_ * dVar34 + dStack_2e0 * dVar39;
    dVar19 = (dVar19 + local_318) * dVar1;
    dVar27 = (1.0 - (local_2a8 + dStack_2a0)) * dVar1;
    dVar15 = (double)param_1[0x36];
    dVar17 = (double)param_1[0x36];
    dVar50 = (double)param_1[0x37];
    dVar41 = (double)param_1[0x37];
    dVar18 = (double)param_1[0x38];
    dVar49 = (double)param_1[0x38];
    local_f8 = dVar14 * dVar18 + dVar51 * dVar50 + local_2e8 * dVar15 + param_2[4];
    dStack_f0 = dVar53 * dVar49 + (double)local_2b8._8_8_ * dVar41 + dStack_2e0 * dVar17 +
                param_2[5];
    dVar36 = param_2[4] * 0.0;
    dVar37 = param_2[5] * 0.0;
    local_e8 = dVar7 * dVar18 + dVar38 * dVar50 + dVar15 * local_2d8 + param_2[6];
    dStack_e0 = dVar49 * 0.0 + dVar41 * 0.0 + dVar17 * 0.0 + 1.0;
    dVar28 = param_2[6] * 0.0;
    dVar15 = local_298 + dVar36;
    dVar17 = dStack_290 + dVar37;
    local_328._0_8_ = dVar20 * dVar7 + dVar40 * dVar38 + dVar29 * local_2d8 + dVar28;
    dStack_140 = dVar20 * 0.0 + dVar40 * 0.0 + dVar29 * 0.0 + 0.0;
    dVar20 = local_2c8 + dVar36;
    dVar41 = dStack_2c0 + dVar37;
    dVar50 = dVar35 * dVar7 + dVar34 * dVar38 + dVar39 * local_2d8 + dVar28;
    dVar18 = dVar35 * 0.0 + dVar34 * 0.0 + dVar39 * 0.0 + 0.0;
    dVar36 = dVar14 * dVar27 + dVar51 * dVar52 + local_2e8 * dVar19 + dVar36;
    dVar37 = dVar53 * dVar27 + (double)local_2b8._8_8_ * dVar52 + dStack_2e0 * dVar19 + dVar37;
    dVar28 = dVar27 * dVar7 + dVar52 * dVar38 + dVar19 * local_2d8 + dVar28;
    dStack_100 = dVar27 * 0.0 + dVar52 * 0.0 + dVar19 * 0.0 + 0.0;
    local_328._8_8_ = dStack_140;
    auVar31._8_4_ = SUB84(dVar18,0);
    auVar31._0_8_ = dVar50;
    auVar31._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    dVar18 = (double)local_328._0_8_ * (double)local_328._0_8_ + dVar15 * dVar15 + dVar17 * dVar17;
    dVar49 = dVar50 * dVar50 + dVar20 * dVar20 + dVar41 * dVar41;
    dVar14 = dVar28 * dVar28 + dVar36 * dVar36 + dVar37 * dVar37;
    uVar6 = -(ulonglong)(0.0 <= dVar18 + -9.99999993922529e-09);
    dVar18 = (double)(~uVar6 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar18)) & uVar6);
    uVar6 = -(ulonglong)(0.0 <= dVar49 + -9.99999993922529e-09);
    dVar49 = (double)(~uVar6 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar49)) & uVar6);
    uVar6 = -(ulonglong)(0.0 <= dVar14 + -9.99999993922529e-09);
    dVar14 = (double)(~uVar6 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar14)) & uVar6);
    auVar8._8_8_ = -(ulonglong)(0.0 <= dStack_2f0);
    auVar8._0_8_ = -(ulonglong)(0.0 <= local_2f8);
    auVar21 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar8);
    uVar6 = -(ulonglong)(0.0 <= dVar11 * dVar1);
    local_118 = (double)(~uVar6 & 0xbff0000000000000 | uVar6 & 0x3ff0000000000000);
    local_148 = auVar21._0_8_;
    local_158 = dVar15 * dVar18 * local_148;
    local_150 = dVar17 * dVar18 * local_148;
    local_148 = dVar18 * (double)local_328._0_8_ * local_148;
    dVar15 = auVar21._8_8_;
    local_130 = dVar41 * dVar49 * dVar15;
    local_138 = dVar15 * dVar20 * dVar49;
    uStack_120 = auVar31._8_8_;
    local_128 = dVar49 * dVar50 * dVar15;
    local_108 = dVar14 * dVar28 * local_118;
    local_110 = dVar37 * dVar14 * local_118;
    local_118 = local_118 * dVar36 * dVar14;
    pdVar5 = &local_1d8;
    local_308 = auVar24;
    iVar2 = FUN_14481fd10(pdVar5,&local_158);
    uVar4 = SUB84(pdVar5,0);
    dVar15 = local_1c8 * local_1c8 + local_1d8 * local_1d8;
    dVar11 = dStack_1c0 * dStack_1c0 + dStack_1d0 * dStack_1d0;
    auVar16._0_8_ = dVar15 + dVar11;
    auVar16._8_8_ = dVar15 + dVar11;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
    auVar21 = sqrtpd(auVar16,auVar16);
    auVar21 = divpd(_DAT_149934d80,auVar21);
    auVar32._0_8_ = auVar21._0_8_ * local_1c8;
    auVar32._8_8_ = auVar21._8_8_ * dStack_1c0;
    local_328 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar24);
    local_318 = (double)((ulonglong)(local_1d8 * auVar21._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
    dStack_310 = (double)((ulonglong)(dStack_1d0 * auVar21._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_));
    dVar20 = (double)param_1[0x3a];
    dVar41 = (double)param_1[0x3b];
    uVar43 = (undefined4)param_1[0x3c];
    uVar44 = *(undefined4 *)((longlong)param_1 + 0x1e4);
    uVar45 = (undefined4)param_1[0x3d];
    uVar46 = *(undefined4 *)((longlong)param_1 + 0x1ec);
    dVar15 = local_f8;
    dVar1 = dStack_f0;
    dVar11 = local_e8;
  }
  auVar22 = _DAT_149934d80;
  auVar21 = *(undefined1 (*) [16])(param_1 + 0x2e);
  dVar17 = auVar21._0_8_;
  dVar18 = auVar21._8_8_;
  dVar50 = SUB168(*(undefined1 (*) [16])(param_1 + 0x30),0);
  auVar12._8_8_ = dVar41;
  auVar12._0_8_ = dVar20;
  auVar21 = minpd(auVar12,auVar21);
  auVar23._4_4_ = uVar44;
  auVar23._0_4_ = uVar43;
  auVar23._12_4_ = uVar46;
  auVar23._8_4_ = uVar45;
  auVar24 = minpd(auVar23,*(undefined1 (*) [16])(param_1 + 0x30));
  auVar13._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar13._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar2 = movmskpd(iVar2,auVar13);
  auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
  uVar3 = movmskpd(uVar4,auVar25);
  if ((uVar3 & 0x3fffffff) == 0 && iVar2 == 0) {
    dVar52 = (double)param_1[0x26];
    dVar7 = (double)param_1[0x27];
    dVar27 = (double)param_1[0x28];
    dVar28 = (double)param_1[0x32];
    dVar29 = (double)param_1[0x33];
    dVar30 = (double)param_1[0x34];
    dVar34 = (double)param_1[0x35];
    dVar41 = (double)param_1[0x29];
    dVar19 = (double)param_1[0x29];
    dVar20 = (double)param_1[0x26];
    dVar36 = (double)param_1[0x26];
    dVar37 = (double)param_1[0x27];
    dVar40 = (double)param_1[0x27];
    dVar35 = (double)param_1[0x28];
    dVar39 = (double)param_1[0x28];
    dVar49 = dVar29 * dVar35 * -1.0 + dVar30 * dVar37 + dVar34 * dVar20 * 1.0 + dVar28 * dVar41;
    dVar14 = dVar28 * dVar39 * 1.0 + dVar34 * dVar40 + dVar30 * dVar36 * -1.0 + dVar29 * dVar19;
    auVar42._0_8_ =
         dVar34 * dVar35 * 1.0 + ((dVar20 * dVar29 * 1.0 + dVar30 * dVar41) - dVar28 * dVar37);
    auVar42._8_8_ =
         dVar30 * dVar39 * -1.0 + ((dVar36 * dVar28 * -1.0 + dVar34 * dVar19) - dVar29 * dVar40);
    dVar17 = dVar17 * (double)param_1[0x36];
    dVar18 = dVar18 * (double)param_1[0x37];
    dVar50 = dVar50 * (double)param_1[0x38];
    dVar36 = dVar18 * dVar52 - dVar7 * dVar17;
    dVar37 = dVar50 * dVar7 - dVar27 * dVar18;
    dVar40 = dVar17 * dVar27 - dVar52 * dVar50;
    dVar37 = dVar37 + dVar37;
    dVar40 = dVar40 + dVar40;
    dVar36 = dVar36 + dVar36;
    dVar20 = (dVar36 * dVar7 - dVar27 * dVar40) + dVar41 * dVar37 + dVar17 + (double)param_1[0x2a];
    dVar17 = (dVar37 * dVar27 - dVar36 * dVar52) + dVar19 * dVar40 + dVar18 + (double)param_1[0x2b];
    dVar41 = (dVar40 * dVar52 - dVar7 * dVar37) + dVar41 * dVar36 + dVar50 + (double)param_1[0x2c];
  }
  else {
    dVar19 = (double)param_1[0x26];
    dVar36 = (double)param_1[0x27];
    dVar14 = (double)param_1[0x28];
    dVar39 = dVar36 + dVar36;
    dVar37 = dVar14 + dVar14;
    dVar52 = dVar19 * (dVar19 + dVar19);
    dVar49 = (double)param_1[0x29];
    dVar40 = dVar37 * dVar49;
    dVar35 = (dVar19 + dVar19) * (double)param_1[0x29];
    dVar49 = dVar39 * dVar49;
    dStack_190 = (dVar37 * dVar36 - dVar35) * dVar50;
    local_308._8_8_ = dVar41 * dVar18;
    local_308._0_8_ = dVar20 * dVar17;
    local_1d8 = (1.0 - (dVar14 * dVar37 + dVar36 * dVar39)) * dVar17;
    dVar14 = (1.0 - (dVar14 * dVar37 + dVar52)) * dVar18;
    local_188 = (1.0 - (dVar52 + dVar36 * dVar39)) * dVar50;
    dStack_1d0 = (dVar39 * dVar19 + dVar40) * dVar17;
    local_1a8 = (dVar37 * dVar36 + dVar35) * dVar18;
    local_198 = (dVar49 + (double)param_1[0x26] * dVar37) * dVar50;
    local_1c8 = ((double)param_1[0x26] * dVar37 - dVar49) * dVar17;
    dStack_1c0 = 0.0;
    local_1b8._8_4_ = SUB84(dVar14,0);
    local_1b8._0_8_ = (dVar39 * dVar19 - dVar40) * dVar18;
    local_1b8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_1[0x2a];
    lStack_170 = param_1[0x2b];
    local_168 = param_1[0x2c];
    uStack_160 = 0x3ff0000000000000;
    dVar49 = (double)param_1[0x32];
    dVar14 = (double)param_1[0x33];
    dVar18 = (double)param_1[0x34];
    dVar40 = dVar14 + dVar14;
    dVar19 = dVar18 + dVar18;
    dVar35 = dVar49 * (dVar49 + dVar49);
    dVar17 = (double)param_1[0x35];
    dVar36 = dVar19 * dVar17;
    dVar37 = (dVar49 + dVar49) * (double)param_1[0x35];
    dVar17 = dVar40 * dVar17;
    dStack_210 = (dVar19 * dVar14 - dVar37) * (double)CONCAT44(uVar44,uVar43);
    local_258 = ((double)DAT_149934d80 - (dVar18 * dVar19 + dVar14 * dVar40)) * dVar20;
    dVar18 = (DAT_149934d80._8_8_ - (dVar18 * dVar19 + dVar35)) * dVar41;
    dStack_250 = (dVar40 * dVar49 + dVar36) * dVar20;
    local_228 = (dVar19 * dVar14 + dVar37) * dVar41;
    local_218 = (dVar17 + (double)param_1[0x32] * dVar19) * (double)CONCAT44(uVar44,uVar43);
    local_248 = ((double)param_1[0x32] * dVar19 - dVar17) * dVar20;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar18,0);
    local_238._0_8_ = (dVar40 * dVar49 - dVar36) * dVar41;
    local_238._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    uStack_220 = 0;
    local_208 = (1.0 - (dVar35 + dVar14 * dVar40)) * (double)CONCAT44(uVar44,uVar43);
    uStack_200 = 0;
    local_1f8 = param_1[0x36];
    lStack_1f0 = param_1[0x37];
    local_1e8 = param_1[0x38];
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar9._8_8_ = -(ulonglong)(0.0 <= (double)local_308._8_8_);
    auVar9._0_8_ = -(ulonglong)(0.0 <= (double)local_308._0_8_);
    auVar21 = blendvpd(_DAT_149936790,auVar22,auVar9);
    uVar6 = -(ulonglong)(0.0 <= (double)CONCAT44(uVar44,uVar43) * dVar50);
    dVar20 = (double)(~uVar6 & 0xbff0000000000000 | uVar6 & 0x3ff0000000000000);
    dVar17 = auVar21._0_8_;
    local_148 = local_148 * dVar17;
    local_150 = local_150 * dVar17;
    local_158 = local_158 * dVar17;
    dVar17 = auVar21._8_8_;
    local_130 = local_130 * dVar17;
    local_138 = dVar17 * local_138;
    local_128 = local_128 * dVar17;
    local_108 = local_108 * dVar20;
    local_110 = local_110 * dVar20;
    local_118 = dVar20 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar20 = local_268 * local_268 + local_278 * local_278;
    dVar17 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar26._0_8_ = dVar20 + dVar17;
    auVar26._8_8_ = dVar20 + dVar17;
    auVar10._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
    auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
    auVar21 = sqrtpd(auVar26,auVar26);
    auVar21 = divpd(auVar22,auVar21);
    auVar33._0_8_ = auVar21._0_8_ * local_268;
    auVar33._8_8_ = auVar21._8_8_ * dStack_260;
    dVar49 = (double)((ulonglong)(local_278 * auVar21._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
    dVar14 = (double)((ulonglong)(dStack_270 * auVar21._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
    auVar42 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar10);
    dVar20 = local_f8;
    dVar17 = dStack_f0;
    dVar41 = local_e8;
  }
  param_1[0x1e] = (longlong)((dVar15 - dVar20) * local_288);
  param_1[0x1f] = (longlong)((dVar1 - dVar17) * local_288);
  param_1[0x20] = (longlong)((dVar11 - dVar41) * local_288);
  dVar20 = local_318 - dVar49;
  dVar1 = dStack_310 - dVar14;
  dVar15 = (double)local_328._0_8_ - auVar42._0_8_;
  dVar11 = (double)local_328._8_8_ - auVar42._8_8_;
  dVar50 = auVar42._0_8_ * -1.0;
  dVar18 = auVar42._8_8_ * 1.0;
  dVar17 = (dVar1 * dVar50 + (dVar20 * dVar18 * 1.0 - dVar49 * dVar11)) - dVar15 * dVar14 * -1.0;
  dVar41 = (dVar1 * dVar18 + (dVar20 * dVar50 * -1.0 - dVar14 * dVar11)) - dVar15 * dVar49 * 1.0;
  dVar15 = dVar1 * dVar49 + (dVar11 * dVar50 - dVar14 * dVar20) + dVar18 * dVar15;
  param_1[0x1b] = (longlong)(local_288 * (dVar17 + dVar17));
  param_1[0x1c] = (longlong)(local_288 * (dVar41 + dVar41));
  param_1[0x1d] = (longlong)((dVar15 + dVar15) * local_288);
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4d] = (longlong)((double)param_1[0x4f] * 10.0);
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if ((local_d0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406b1a52 FUN_1406b1a52 body=119 status=ok
// SIG undefined FUN_1406b1a52(void)

void FUN_1406b1a52(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined2 local_1c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (undefined8 *)(param_1 + 0x130);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    local_1a = 0x100;
    local_1c = 0x100;
    local_28 = 1;
    FUN_144a5ad3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406b1aca FUN_1406b1aca body=26 status=ok
// SIG undefined FUN_1406b1aca(void)

void FUN_1406b1aca(undefined8 param_1)

{
  switchD_143c3d4dc::caseD_1d();
  FUN_1406b1ae4(param_1);
  return;
}



// FUNCTION 1406b1ae4 FUN_1406b1ae4 body=384 status=ok
// SIG undefined FUN_1406b1ae4(void)

void FUN_1406b1ae4(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x88);
  local_30 = param_1 + 0x98;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = local_28;
  iStack_5c = iStack_24;
  local_58 = local_20;
  local_54 = local_1c;
  local_70 = local_38;
  local_68 = local_30;
  local_40 = 0;
  local_78 = plVar1;
  local_50 = plVar1;
  local_48 = plVar1;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      FUN_140414380(*(undefined8 *)(*local_78 + 8 + (longlong)iStack_5c * 0x18),0);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
    if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
      FUN_147b970ee(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  FUN_140414380(param_1 + 0x178,0);
  FUN_140414380(param_1 + 0xf0,0);
  FUN_1400fb146(param_1 + 0x208,0);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406b1c66 FUN_1406b1c66 body=83 status=ok
// SIG undefined FUN_1406b1c66(void)

undefined8 * FUN_1406b1c66(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14acb88d0;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406b1cba FUN_1406b1cba body=13 status=ok
// SIG undefined FUN_1406b1cba(void)

void FUN_1406b1cba(longlong param_1)

{
  FUN_1406b1cc8(param_1 + 0x10,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1406b1cc8 FUN_1406b1cc8 body=76 status=ok
// SIG undefined FUN_1406b1cc8(void)

void FUN_1406b1cc8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = *(longlong **)(param_2 + 8);
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
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 1406b1d14 FUN_1406b1d14 body=223 status=ok
// SIG undefined FUN_1406b1d14(void)

undefined8 FUN_1406b1d14(longlong param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *param_2;
  uVar5 = param_2[2];
  if (uVar5 != 0) {
    uVar3 = uVar5 >> 0xd ^ uVar3 - uVar5;
    uVar7 = uVar3 << 8 ^ (-0x61c88647 - uVar5) - uVar3;
    uVar8 = uVar7 >> 0xd ^ (uVar5 - uVar3) - uVar7;
    uVar5 = uVar8 >> 0xc ^ (uVar3 - uVar7) - uVar8;
    uVar3 = uVar5 << 0x10 ^ (uVar7 - uVar8) - uVar5;
    uVar7 = uVar3 >> 5 ^ (uVar8 - uVar5) - uVar3;
    uVar5 = uVar7 >> 3 ^ (uVar5 - uVar3) - uVar7;
    uVar3 = uVar5 << 10 ^ (uVar3 - uVar7) - uVar5;
    uVar3 = uVar3 >> 0xf ^ uVar7 - (uVar5 + uVar3);
  }
  iVar2 = FUN_1406b1e7e((longlong *)(param_1 + 0x3a8),uVar3);
  if (iVar2 == -1) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x3a8);
    uVar4 = 0;
    if ((lVar1 + (longlong)iVar2 * 0x20 != 0) &&
       (puVar6 = (undefined8 *)(lVar1 + (longlong)iVar2 * 0x20 + 0x10), puVar6 != (undefined8 *)0x0)
       ) {
      uVar4 = *puVar6;
    }
  }
  return uVar4;
}



// FUNCTION 1406b1df4 FUN_1406b1df4 body=137 status=ok
// SIG undefined FUN_1406b1df4(void)

undefined8 FUN_1406b1df4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406b2856((ulonglong)((uint)*(ushort *)(param_1 + 0x2ae) * 0x18) +
                *(longlong *)(DAT_14cb86da8 + 0x340),&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406b1e7e FUN_1406b1e7e body=95 status=ok
// SIG undefined FUN_1406b1e7e(void)

int FUN_1406b1e7e(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1406b1ede FUN_1406b1ede body=2423 status=ok
// SIG undefined FUN_1406b1ede(void)

void FUN_1406b1ede(longlong *param_1,ulonglong *param_2,int param_3,int param_4,int param_5,
                  char param_6,char param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  longlong lVar18;
  uint *puVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int iVar33;
  undefined8 *puVar34;
  bool bVar35;
  
  param_1 = (longlong *)*param_1;
  uVar9 = (uint)*param_2;
  uVar15 = (uint)param_2[1];
  if (uVar15 != 0) {
    uVar9 = uVar15 >> 0xd ^ uVar9 - uVar15;
    uVar21 = uVar9 << 8 ^ (-0x61c88647 - uVar15) - uVar9;
    uVar29 = uVar21 >> 0xd ^ (uVar15 - uVar9) - uVar21;
    uVar15 = uVar29 >> 0xc ^ (uVar9 - uVar21) - uVar29;
    uVar9 = uVar15 << 0x10 ^ (uVar21 - uVar29) - uVar15;
    uVar21 = uVar9 >> 5 ^ (uVar29 - uVar15) - uVar9;
    uVar15 = uVar21 >> 3 ^ (uVar15 - uVar9) - uVar21;
    uVar9 = uVar15 << 10 ^ (uVar9 - uVar21) - uVar15;
    uVar9 = uVar9 >> 0xf ^ uVar21 - (uVar15 + uVar9);
  }
  iVar10 = FUN_1406b2b32(param_1,uVar9,param_2);
  if (iVar10 != -1) {
    lVar18 = *param_1 + (longlong)iVar10 * 0x40;
    if (lVar18 != 0) {
      piVar12 = (int *)((longlong)iVar10 * 0x40 + *param_1 + 0x10);
      if (*(int *)(lVar18 + 0x10) < param_3) {
        param_3 = *(int *)(lVar18 + 0x10);
      }
      iVar10 = *(int *)(lVar18 + 0x14);
      if (param_4 <= *(int *)(lVar18 + 0x14)) {
        iVar10 = param_4;
      }
      *(int *)(lVar18 + 0x10) = param_3;
      *(int *)(lVar18 + 0x14) = iVar10;
      iVar10 = *(int *)(lVar18 + 0x18);
      if (*(int *)(lVar18 + 0x18) < param_4) {
        iVar10 = param_4;
      }
      *(int *)(lVar18 + 0x18) = iVar10;
      if (param_6 == '\0') {
        if (*(char *)(lVar18 + 0x20) == '\0') {
          if (*(int *)(lVar18 + 0x1c) < param_5) {
            param_5 = *(int *)(lVar18 + 0x1c);
          }
          *(int *)(lVar18 + 0x1c) = param_5;
        }
      }
      else {
        *(undefined1 *)(lVar18 + 0x20) = 1;
        *(int *)(lVar18 + 0x1c) = param_5;
      }
      goto LAB_1406b266c;
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar10) {
      FUN_1406cd6a8(param_1);
    }
    iVar27 = (int)param_1[5];
    if (iVar27 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar16 = iVar27 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    plVar24 = param_1 + 2;
    iVar23 = iVar27 + 1;
    iVar33 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar33 = iVar27;
    }
    if (iVar33 >> 5 == iVar16) {
      *(int *)(param_1 + 5) = iVar23;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar27) {
        iVar16 = iVar27;
        if (iVar27 + 0x20U < 0xa0) {
          iVar23 = 0x80;
        }
        else {
          uVar9 = iVar27 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar9) {
              uVar15 = uVar9;
            }
          }
          else {
            uVar15 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
          }
          uVar20 = (ulonglong)(uVar15 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar21 = (uint)(uVar20 + 0xf);
              if (uVar15 < 0x1ffd) {
                uVar20 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar20 + 0xf >> 4]];
              }
              else {
                uVar31 = (ulonglong)(uVar21 & 0xfffffff0);
                if (uVar31 < 0x7ff1) {
                  bVar14 = (&DAT_14c841e00)[uVar21 >> 4];
                  uVar28 = 0x32;
                  if (0x32 < bVar14) {
                    uVar28 = (ulonglong)bVar14;
                  }
                  uVar32 = 0x32 - (ulonglong)bVar14;
                  do {
                    uVar20 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0) goto LAB_1406b2783;
                    lVar18 = uVar28 + 1 + uVar32;
                    uVar32 = uVar32 - 1;
                  } while (lVar18 != 0x33);
                }
                uVar20 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar20 = (ulonglong)DAT_14c841df8;
                }
                uVar20 = -uVar20 & (uVar31 + uVar20) - 1;
              }
            }
            else {
              uVar20 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar20,0);
              iVar16 = (int)param_1[5];
            }
          }
LAB_1406b2783:
          iVar11 = (int)(uVar20 >> 2);
          iVar23 = -0x20;
          if ((int)uVar9 <= iVar11) {
            iVar23 = iVar11 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar23;
        FUN_1446efbd8(plVar24,iVar16);
        iVar23 = (int)param_1[5] + 1;
      }
      iVar16 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar16 = iVar23;
      }
      *(int *)(param_1 + 5) = iVar23;
      if (iVar23 % 0x20 != 0) {
        plVar25 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar25 = plVar24;
        }
        bVar14 = -(char)(iVar23 % 0x20);
        *(uint *)((longlong)plVar25 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar25 + (longlong)(iVar16 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar18 = (longlong)iVar10;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar24 = (longlong *)param_1[4];
    }
    bVar14 = (byte)iVar27 & 0x1f;
    puVar19 = (uint *)((longlong)plVar24 + (longlong)(iVar33 >> 5) * 4);
    *puVar19 = *puVar19 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar10 = (int)param_1[6];
    lVar18 = (longlong)iVar10;
    iVar27 = *(int *)(*param_1 + 4 + lVar18 * 0x40);
    *(int *)(param_1 + 6) = iVar27;
    iVar16 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar27 * 0x40) = 0xffffffff;
    }
  }
  uVar15 = 1 << ((byte)iVar10 & 0x1f);
  puVar19 = (uint *)(param_1 + 2);
  uVar9 = 1;
  puVar13 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar13 = puVar19;
  }
  iVar27 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar27 = iVar10;
  }
  puVar13[iVar27 >> 5] = puVar13[iVar27 >> 5] | uVar15;
  lVar26 = *param_1;
  lVar18 = lVar18 * 0x40;
  uVar21 = (uint)param_2[1];
  *(uint *)(lVar26 + 8 + lVar18) = uVar21;
  uVar20 = *param_2;
  *(ulonglong *)(lVar26 + lVar18) = uVar20;
  puVar2 = (undefined4 *)(lVar26 + 0x10 + lVar18);
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffffffff;
  *(undefined1 *)(lVar26 + 0x20 + lVar18) = 0;
  *(undefined1 (*) [16])(lVar26 + 0x28 + lVar18) = (undefined1  [16])0x0;
  *(undefined4 *)(lVar26 + 0x38 + lVar18) = 0xffffffff;
  if (uVar21 != 0) {
    uVar29 = uVar21 >> 0xd ^ (int)uVar20 - uVar21;
    uVar22 = uVar29 << 8 ^ (-0x61c88647 - uVar21) - uVar29;
    uVar30 = uVar22 >> 0xd ^ (uVar21 - uVar29) - uVar22;
    uVar21 = uVar30 >> 0xc ^ (uVar29 - uVar22) - uVar30;
    uVar29 = uVar21 << 0x10 ^ (uVar22 - uVar30) - uVar21;
    uVar22 = uVar29 >> 5 ^ (uVar30 - uVar21) - uVar29;
    uVar21 = uVar22 >> 3 ^ (uVar21 - uVar29) - uVar22;
    uVar29 = uVar21 << 10 ^ (uVar29 - uVar22) - uVar21;
    uVar20 = (ulonglong)(uVar29 >> 0xf ^ uVar22 - (uVar21 + uVar29));
  }
  puVar34 = (undefined8 *)(lVar26 + lVar18);
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar21 == 1) {
LAB_1406b21c3:
    iVar27 = (int)param_1[9];
    if (iVar27 < (int)uVar9) {
      *(uint *)(param_1 + 9) = uVar9;
      plVar24 = param_1 + 8;
      if (param_1[8] == 0) {
        bVar35 = false;
      }
      else {
        FUN_1446efa72(plVar24,0,0,4);
        uVar9 = *(uint *)(param_1 + 9);
        if (uVar9 == 0) goto LAB_1406b263f;
        bVar35 = *plVar24 != 0;
      }
      if ((1 < uVar9) || (bVar35)) {
        uVar15 = 0;
        if (1 < uVar9) {
          uVar15 = uVar9;
        }
        FUN_1446efa72(plVar24,0,uVar15,4);
      }
      plVar24 = param_1 + 7;
      if (0 < (int)uVar9) {
        uVar15 = 0;
        do {
          plVar25 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar25 = plVar24;
          }
          *(undefined4 *)
           ((longlong)plVar25 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar15) * 4) =
               0xffffffff;
          uVar15 = uVar15 + 1;
        } while (uVar9 != uVar15);
      }
      iVar27 = (int)param_1[5];
      if (iVar27 == 0) {
        uVar20 = 0;
        uVar31 = 1;
        iVar23 = 0;
        iVar16 = 0;
      }
      else {
        puVar13 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar13 = puVar19;
        }
        uVar9 = *puVar13;
        if (uVar9 == 0) {
          iVar16 = iVar27 + 0x1e;
          if (-1 < iVar27 + -1) {
            iVar16 = iVar27 + -1;
          }
          uVar20 = 0;
          uVar31 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar31 = uVar20;
          }
          iVar23 = 0;
          do {
            if (uVar31 == uVar20) goto LAB_1406b263f;
            iVar23 = iVar23 + 0x20;
            uVar9 = puVar13[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar9 == 0);
        }
        else {
          uVar20 = 0;
          iVar23 = 0;
        }
        uVar31 = (ulonglong)(-uVar9 & uVar9);
        uVar28 = uVar31 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar16 = (iVar23 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar27 <= iVar16) {
          iVar16 = iVar27;
        }
      }
      if (iVar16 < iVar27) {
        uVar9 = 0xffffffff;
        do {
          lVar18 = *param_1;
          lVar26 = (longlong)iVar16 * 0x40;
          uVar15 = *(uint *)(lVar18 + lVar26);
          uVar21 = *(uint *)(lVar18 + 8 + lVar26);
          if (uVar21 != 0) {
            uVar29 = uVar21 >> 0xd ^ uVar15 - uVar21;
            uVar15 = uVar29 << 8 ^ (-0x61c88647 - uVar21) - uVar29;
            uVar21 = uVar15 >> 0xd ^ (uVar21 - uVar29) - uVar15;
            uVar22 = uVar21 >> 0xc ^ (uVar29 - uVar15) - uVar21;
            uVar15 = uVar22 << 0x10 ^ (uVar15 - uVar21) - uVar22;
            uVar29 = uVar15 >> 5 ^ (uVar21 - uVar22) - uVar15;
            uVar21 = uVar29 >> 3 ^ (uVar22 - uVar15) - uVar29;
            uVar15 = uVar21 << 10 ^ (uVar15 - uVar29) - uVar21;
            uVar15 = uVar15 >> 0xf ^ uVar29 - (uVar21 + uVar15);
          }
          uVar28 = (longlong)(int)uVar15 & (longlong)(int)param_1[9] - 1U;
          iVar27 = (int)uVar28;
          *(int *)(lVar18 + lVar26 + 0x3c) = iVar27;
          plVar25 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar25 = plVar24;
          }
          *(undefined4 *)(lVar18 + lVar26 + 0x38) =
               *(undefined4 *)((longlong)plVar25 + ((longlong)(int)param_1[9] - 1U & uVar28) * 4);
          plVar25 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar25 = plVar24;
          }
          *(int *)((longlong)plVar25 + ((longlong)iVar27 & (longlong)(int)param_1[9] - 1U) * 4) =
               iVar16;
          uVar9 = uVar9 & ~(uint)uVar31;
          puVar13 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar13 = puVar19;
          }
          iVar27 = (int)param_1[5];
          iVar16 = (int)uVar20;
          lVar18 = (longlong)iVar16;
          uVar15 = puVar13[lVar18] & uVar9;
          if (uVar15 == 0) {
            iVar33 = iVar27 + 0x1e;
            if (-1 < iVar27 + -1) {
              iVar33 = iVar27 + -1;
            }
            iVar33 = iVar33 >> 5;
            iVar11 = iVar33;
            if (iVar33 < iVar16) {
              iVar11 = iVar16;
            }
            if (iVar33 <= iVar16) break;
            lVar26 = 0;
            while( true ) {
              iVar23 = iVar23 + 0x20;
              uVar15 = puVar13[lVar18 + lVar26 + 1];
              if (uVar15 != 0) break;
              lVar26 = lVar26 + 1;
              if (iVar11 - lVar18 == lVar26) goto LAB_1406b263f;
            }
            uVar20 = (ulonglong)(iVar16 + (int)lVar26 + 1);
            uVar9 = 0xffffffff;
          }
          uVar31 = (ulonglong)(-uVar15 & uVar15);
          uVar28 = uVar31 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar16 = (iVar23 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        } while (iVar16 < iVar27);
      }
    }
    else {
LAB_1406b230f:
      uVar9 = iVar27 - 1U & (uint)uVar20;
      *(uint *)((longlong)puVar34 + 0x3c) = uVar9;
      plVar24 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar24 = param_1 + 7;
      }
      *(undefined4 *)(puVar34 + 7) =
           *(undefined4 *)
            ((longlong)plVar24 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
      plVar24 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar24 = param_1 + 7;
      }
      *(int *)((longlong)plVar24 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
           iVar10;
    }
  }
  else {
    iVar16 = FUN_1406b2b32(param_1,uVar20 & 0xffffffff,puVar34);
    if (iVar16 == -1) {
      uVar9 = 1;
      if (3 < uVar21) {
        uVar31 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
        lVar18 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar9 = 1 << ((byte)lVar18 & 0x1f);
      }
      if (0 < (int)uVar21) goto LAB_1406b21c3;
      iVar27 = (int)param_1[9];
      goto LAB_1406b230f;
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar16 * 0x40);
    if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar16 * 0x40) != 0) {
      FUN_1400020a8();
    }
    uVar3 = *puVar34;
    uVar4 = puVar34[1];
    uVar5 = puVar34[2];
    uVar6 = puVar34[3];
    uVar7 = puVar34[4];
    uVar8 = puVar34[5];
    puVar1[6] = puVar34[6];
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    lVar26 = *param_1;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)(lVar26 + (longlong)(int)param_1[6] * 0x40) = iVar10;
    }
    *(undefined4 *)(lVar26 + lVar18) = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0x34) < 1) {
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar26 + lVar18 + 4) = uVar17;
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    if ((uint *)param_1[4] != (uint *)0x0) {
      puVar19 = (uint *)param_1[4];
    }
    puVar19[iVar27 >> 5] = puVar19[iVar27 >> 5] & ~uVar15;
    iVar10 = iVar16;
  }
LAB_1406b263f:
  lVar18 = *param_1 + (longlong)iVar10 * 0x40;
  piVar12 = (int *)(lVar18 + 0x10);
  *piVar12 = param_3;
  *(int *)(lVar18 + 0x14) = param_4;
  *(int *)(lVar18 + 0x18) = param_4;
  *(int *)(lVar18 + 0x1c) = param_5;
  *(char *)(lVar18 + 0x20) = param_6;
LAB_1406b266c:
  if (param_7 != '\0') {
    iVar10 = piVar12[8];
    piVar12[8] = iVar10 + 1U;
    if ((uint)piVar12[9] < iVar10 + 1U) {
      FUN_1446f48e2(piVar12 + 6,iVar10);
    }
    *(int *)(*(longlong *)(piVar12 + 6) + (longlong)iVar10 * 4) = param_4;
  }
  return;
}



// FUNCTION 1406b2856 FUN_1406b2856 body=83 status=ok
// SIG undefined FUN_1406b2856(void)

longlong * FUN_1406b2856(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14042c9a2();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1406b28a9 FUN_1406b28a9 body=114 status=ok
// SIG undefined FUN_1406b28a9(void)

longlong FUN_1406b28a9(longlong param_1,undefined4 param_2,undefined8 param_3,char *param_4,
                      undefined8 *param_5,undefined4 param_6,undefined1 param_7)

{
  float fVar1;
  char cVar2;
  
  *param_5 = param_3;
  *(undefined1 *)(param_5 + 1) = 0;
  FUN_143df12ba(param_6,param_2,param_4,param_5,param_6,param_7);
  cVar2 = *param_4;
  *(bool *)param_1 = cVar2 == '\x01';
  if (cVar2 == '\x01' && *(char *)(param_5 + 1) == '\0') {
    fVar1 = *(float *)(param_1 + 8);
    if (((fVar1 != -1.0) || (NAN(fVar1))) && (fVar1 < *(float *)(param_1 + 4))) {
      *(undefined1 *)(param_5 + 1) = 1;
    }
  }
  return param_1;
}



// FUNCTION 1406b291c FUN_1406b291c body=124 status=ok
// SIG undefined FUN_1406b291c(void)

longlong FUN_1406b291c(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1406b299a(param_1,*param_2,*param_3);
  if (lVar1 == 0) {
    local_38 = param_2;
    local_30 = param_3;
    FUN_1406b2a14(param_1,&local_24,&local_38,0);
    lVar1 = (longlong)local_24 * 0x10 + *param_1 + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406b299a FUN_1406b299a body=122 status=ok
// SIG undefined FUN_1406b299a(void)

longlong FUN_1406b299a(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if ((int)param_1[9] == 0) {
    return 0;
  }
  plVar2 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[8];
  }
  iVar3 = *(int *)((longlong)plVar2 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
  do {
    if (iVar3 == -1) {
      return 0;
    }
    lVar1 = *param_1;
    lVar4 = (longlong)iVar3 * 0x10;
    iVar3 = *(int *)(lVar1 + 8 + lVar4);
  } while (*(uint *)(lVar1 + lVar4) != param_2);
  if (*(int *)(lVar1 + 4 + lVar4) == param_3) {
    return lVar1 + lVar4 + 4;
  }
  do {
    if (iVar3 == -1) {
      return 0;
    }
    lVar4 = (longlong)iVar3 * 0x10;
    iVar3 = *(int *)(lVar1 + 8 + lVar4);
  } while ((*(uint *)(lVar1 + lVar4) != param_2) || (*(int *)(lVar1 + 4 + lVar4) != param_3));
  return lVar1 + lVar4 + 4;
}



// FUNCTION 1406b2a14 FUN_1406b2a14 body=285 status=ok
// SIG undefined FUN_1406b2a14(void)

undefined4 *
FUN_1406b2a14(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1405dc782(param_1,local_40);
  puVar1 = (uint *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_38 = uVar3;
  local_38[1] = *puVar1;
  local_38[2] = 0xffffffff;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  if (uVar5 < 4) {
    iVar6 = 1;
  }
  else {
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
    local_38[3] = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    local_38[2] = *(uint *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3)
                                    * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_1406b664c(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406b2b32 FUN_1406b2b32 body=94 status=ok
// SIG undefined FUN_1406b2b32(void)

int FUN_1406b2b32(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x40;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x38 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1406b2b90 FUN_1406b2b90 body=97 status=ok
// SIG undefined FUN_1406b2b90(void)

int FUN_1406b2b90(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[9] != 0) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar1 = *param_1;
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
      if (*(uint *)(lVar1 + lVar5 * 0x10) == param_2) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          do {
            if (iVar3 == -1) {
              return iVar2;
            }
            lVar5 = (longlong)iVar3;
            iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
          } while (*(uint *)(lVar1 + lVar5 * 0x10) != param_2);
        } while( true );
      }
    }
  }
  return 0;
}



// FUNCTION 1406b2bf2 FUN_1406b2bf2 body=335 status=ok
// SIG undefined FUN_1406b2bf2(void)

void FUN_1406b2bf2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  
  lVar4 = param_1 + 0x2c0;
  FUN_1406b3d3a(lVar4);
  plVar5 = *(longlong **)
            (*(longlong *)(DAT_14cb86da8 + 0x340) + (ulonglong)*(ushort *)(param_1 + 0x2ae) * 0x18);
  plVar6 = *(longlong **)
            (*(longlong *)(DAT_14cb86da8 + 0x340) + 8 +
            (ulonglong)*(ushort *)(param_1 + 0x2ae) * 0x18);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
    (**(code **)(*plVar5 + 0x20))(plVar5,param_1);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  lVar2 = param_1 + 0x48;
  FUN_1406b3058(lVar2);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    uVar8 = FUN_1406b3bde(lVar4);
    FUN_1404d12da(uVar8);
    uVar8 = FUN_1406b3bde(lVar4);
    FUN_1406b3aa2(lVar2,uVar8);
  }
  FUN_1406b3304(param_1 + 0x290,lVar2);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    uVar8 = FUN_1406b2efc(lVar4);
    FUN_1404d12da(uVar8);
    uVar8 = FUN_1406b2efc(lVar4);
    FUN_1406b3aa2(lVar2,uVar8);
  }
  uVar7 = FUN_1406b2d42(lVar2);
  *(undefined1 *)(param_1 + 0x310) = uVar7;
  return;
}



// FUNCTION 1406b2d42 FUN_1406b2d42 body=168 status=ok
// SIG undefined FUN_1406b2d42(void)

undefined1 FUN_1406b2d42(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1406b2dea(param_1 + 0x80);
  if (cVar1 == '\0') {
    cVar1 = FUN_1406b2dea(param_1 + 0xb0);
    if (cVar1 == '\0') {
      cVar1 = FUN_1406b2dea(param_1 + 0xe0);
      if (cVar1 == '\0') {
        cVar1 = FUN_1406b2dea(param_1 + 0x110);
        if (cVar1 == '\0') {
          cVar1 = FUN_1406b2dea(param_1 + 0x140);
          if (cVar1 == '\0') {
            cVar1 = FUN_1406b2dea(param_1 + 0x170);
            if (cVar1 == '\0') {
              cVar1 = FUN_1406b2dea(param_1 + 0x1a0);
              if (cVar1 == '\0') {
                cVar1 = FUN_1406b2dea(param_1 + 0x1d0);
                if (cVar1 == '\0') {
                  uVar2 = FUN_1406b2dea(param_1 + 0x1f8);
                  return uVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1406b2dea FUN_1406b2dea body=273 status=ok
// SIG undefined FUN_1406b2dea(void)

undefined8 FUN_1406b2dea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar8 = *(longlong **)(param_1 + 8);
    plVar3 = plVar8 + (longlong)*(int *)(param_1 + 0x10) * 3;
    do {
      lVar9 = *plVar8;
      if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x10) != 0)) {
        plVar10 = *(longlong **)(lVar9 + 8);
        lVar9 = (longlong)*(int *)(lVar9 + 0x10) * 0x18;
        do {
          plVar4 = (longlong *)*plVar10;
          plVar5 = (longlong *)plVar10[1];
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
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
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (plVar4 == (longlong *)0x0) {
LAB_1406b2e8a:
            bVar11 = false;
          }
          else {
            lVar6 = (**(code **)(*plVar4 + 8))(plVar4);
            lVar7 = FUN_14068d7bc();
            if ((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)))
            goto LAB_1406b2e8a;
            bVar11 = *(longlong *)
                      (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                     lVar7 + 0x30;
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar5 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
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
          if (bVar11) {
            if (plVar10 != (longlong *)0x0) {
              return 1;
            }
            break;
          }
          plVar10 = plVar10 + 3;
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != 0);
      }
      plVar8 = plVar8 + 3;
    } while (plVar8 != plVar3);
  }
  return 0;
}



// FUNCTION 1406b2efc FUN_1406b2efc body=348 status=ok
// SIG undefined FUN_1406b2efc(void)

undefined8 * FUN_1406b2efc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x248);
    memset(puVar1 + 0x14,0,0x130);
    *puVar1 = &PTR_FUN_14b39b808;
    puVar1[1] = &PTR_FUN_14b00be10;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = &PTR_FUN_14b00be10;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = &PTR_FUN_14b00be10;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x10] = &PTR_FUN_14b35c290;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x16] = &PTR_FUN_14b35c290;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1c] = &PTR_FUN_14b35c290;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x22] = &PTR_FUN_14b35c290;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x28] = &PTR_FUN_14b35c290;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x2e] = &PTR_FUN_14b35c290;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x34] = &PTR_FUN_14b35c290;
    puVar1[0x3a] = &PTR_FUN_14b00be10;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = &PTR_FUN_14b00be10;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x44] = &PTR_FUN_14b00be10;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    *(undefined8 **)(param_1 + 0x48) = puVar1;
  }
  return puVar1;
}



// FUNCTION 1406b3058 FUN_1406b3058 body=366 status=ok
// SIG undefined FUN_1406b3058(void)

void FUN_1406b3058(undefined8 param_1)

{
  undefined1 auStack_288 [40];
  undefined **local_260;
  undefined **local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined **local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined **local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [8];
  undefined **local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined **local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_288;
  memset(local_1b8,0,0x128);
  local_260 = &PTR_FUN_14b39b808;
  local_258 = &PTR_FUN_14b00be10;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = &PTR_FUN_14b00be10;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = &PTR_FUN_14b00be10;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1e0 = &PTR_FUN_14b35c290;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1b0 = &PTR_FUN_14b35c290;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_180 = &PTR_FUN_14b35c290;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_150 = &PTR_FUN_14b35c290;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_120 = &PTR_FUN_14b35c290;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f0 = &PTR_FUN_14b35c290;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = &PTR_FUN_14b35c290;
  local_90 = &PTR_FUN_14b00be10;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = &PTR_FUN_14b00be10;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_40 = &PTR_FUN_14b00be10;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1406b37d6(param_1,&local_260);
  FUN_1403da20a(&local_260);
  if ((local_18 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406b31c8 FUN_1406b31c8 body=315 status=ok
// SIG undefined FUN_1406b31c8(void)

void FUN_1406b31c8(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1406b3232;
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
LAB_1406b3232:
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



// FUNCTION 1406b3304 FUN_1406b3304 body=516 status=ok
// SIG undefined FUN_1406b3304(void)

void FUN_1406b3304(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = DAT_14cb86da8;
  FUN_1406b3508(param_2 + 8,
                (ulonglong)((uint)*(byte *)(param_1 + 8) * 0x28) +
                *(longlong *)(DAT_14cb86da8 + 0x350));
  FUN_1406b3508(param_2 + 0x30,
                (ulonglong)((uint)*(byte *)(param_1 + 9) * 0x28) + *(longlong *)(lVar2 + 0x350));
  FUN_1406b3508(param_2 + 0x58,
                (ulonglong)((uint)*(byte *)(param_1 + 10) * 0x28) + *(longlong *)(lVar2 + 0x350));
  lVar1 = *(longlong *)(lVar2 + 0x360);
  uVar3 = (ulonglong)((uint)*(ushort *)(param_1 + 0xc) * 0x30);
  *(byte *)(param_2 + 0xa8) = *(byte *)(param_2 + 0xa8) | *(byte *)(lVar1 + 0x28 + uVar3);
  FUN_1406b3508(param_2 + 0x80,lVar1 + uVar3);
  lVar1 = *(longlong *)(lVar2 + 0x360);
  uVar3 = (ulonglong)((uint)*(ushort *)(param_1 + 0xe) * 0x30);
  *(byte *)(param_2 + 0xd8) = *(byte *)(param_2 + 0xd8) | *(byte *)(lVar1 + 0x28 + uVar3);
  FUN_1406b3508(param_2 + 0xb0,lVar1 + uVar3);
  lVar1 = *(longlong *)(lVar2 + 0x360);
  uVar3 = (ulonglong)((uint)*(ushort *)(param_1 + 0x10) * 0x30);
  *(byte *)(param_2 + 0x108) = *(byte *)(param_2 + 0x108) | *(byte *)(lVar1 + 0x28 + uVar3);
  FUN_1406b3508(param_2 + 0xe0,lVar1 + uVar3);
  lVar1 = *(longlong *)(lVar2 + 0x360);
  uVar3 = (ulonglong)((uint)*(ushort *)(param_1 + 0x12) * 0x30);
  *(byte *)(param_2 + 0x138) = *(byte *)(param_2 + 0x138) | *(byte *)(lVar1 + 0x28 + uVar3);
  FUN_1406b3508(param_2 + 0x110,lVar1 + uVar3);
  lVar1 = *(longlong *)(lVar2 + 0x360);
  uVar3 = (ulonglong)((uint)*(ushort *)(param_1 + 0x14) * 0x30);
  *(byte *)(param_2 + 0x168) = *(byte *)(param_2 + 0x168) | *(byte *)(lVar1 + 0x28 + uVar3);
  FUN_1406b3508(param_2 + 0x140,lVar1 + uVar3);
  lVar1 = *(longlong *)(lVar2 + 0x360);
  uVar3 = (ulonglong)((uint)*(ushort *)(param_1 + 0x16) * 0x30);
  *(byte *)(param_2 + 0x198) = *(byte *)(param_2 + 0x198) | *(byte *)(lVar1 + 0x28 + uVar3);
  FUN_1406b3508(param_2 + 0x170,lVar1 + uVar3);
  lVar1 = *(longlong *)(lVar2 + 0x360);
  uVar3 = (ulonglong)((uint)*(ushort *)(param_1 + 0x18) * 0x30);
  *(byte *)(param_2 + 0x1c8) = *(byte *)(param_2 + 0x1c8) | *(byte *)(lVar1 + 0x28 + uVar3);
  FUN_1406b3508(param_2 + 0x1a0,lVar1 + uVar3);
  FUN_1406b3508(param_2 + 0x1d0,
                (ulonglong)((uint)*(byte *)(param_1 + 0x1a) * 0x28) + *(longlong *)(lVar2 + 0x350));
  FUN_1406b3508(param_2 + 0x1f8,
                (ulonglong)((uint)*(byte *)(param_1 + 0x1b) * 0x28) + *(longlong *)(lVar2 + 0x350));
  FUN_1406b3508(param_2 + 0x220,
                (ulonglong)((uint)*(byte *)(param_1 + 0x1c) * 0x28) + *(longlong *)(lVar2 + 0x350));
  return;
}



// FUNCTION 1406b3508 FUN_1406b3508 body=115 status=ok
// SIG undefined FUN_1406b3508(void)

void FUN_1406b3508(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10) + *(int *)(param_1 + 0x10);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0x14) < iVar1) {
      FUN_1406b368a(param_1 + 8);
    }
    FUN_1406b35dc(param_1 + 8,param_2 + 8);
    iVar1 = *(int *)(param_2 + 0x20) + *(int *)(param_1 + 0x20);
    if (-1 < iVar1) {
      if (*(int *)(param_1 + 0x24) < iVar1) {
        FUN_1406b44a4(param_1 + 0x18);
      }
      FUN_1406b357c(param_1 + 0x18,param_2 + 0x18);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 1406b357c FUN_1406b357c body=96 status=ok
// SIG undefined FUN_1406b357c(void)

void FUN_1406b357c(longlong *param_1,undefined8 *param_2)

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
    FUN_148909960(param_1,iVar2);
  }
  FUN_1406b40b4((longlong)iVar2 * 0x20 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1406b35dc FUN_1406b35dc body=97 status=ok
// SIG undefined FUN_1406b35dc(void)

void FUN_1406b35dc(longlong *param_1,undefined8 *param_2)

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
    FUN_1406419cc(param_1,iVar2);
  }
  FUN_1406b363d((longlong)iVar2 * 0x18 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1406b363d FUN_1406b363d body=76 status=ok
// SIG undefined FUN_1406b363d(void)

void FUN_1406b363d(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1406b368a FUN_1406b368a body=332 status=ok
// SIG undefined FUN_1406b368a(void)

void FUN_1406b368a(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1406b36f8;
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
LAB_1406b36f8:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 1406b37d6 FUN_1406b37d6 body=527 status=ok
// SIG undefined FUN_1406b37d6(void)

longlong FUN_1406b37d6(longlong param_1,longlong param_2)

{
  FUN_1406b39e6(param_1 + 0x10,param_2 + 0x10);
  FUN_1406b3a44(param_1 + 0x20,param_2 + 0x20);
  FUN_1406b39e6(param_1 + 0x38,param_2 + 0x38);
  FUN_1406b3a44(param_1 + 0x48,param_2 + 0x48);
  FUN_1406b39e6(param_1 + 0x60,param_2 + 0x60);
  FUN_1406b3a44(param_1 + 0x70,param_2 + 0x70);
  FUN_1406b39e6(param_1 + 0x88,param_2 + 0x88);
  FUN_1406b3a44(param_1 + 0x98,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  FUN_1406b39e6(param_1 + 0xb8,param_2 + 0xb8);
  FUN_1406b3a44(param_1 + 200,param_2 + 200);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  FUN_1406b39e6(param_1 + 0xe8,param_2 + 0xe8);
  FUN_1406b3a44(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  FUN_1406b39e6(param_1 + 0x118,param_2 + 0x118);
  FUN_1406b3a44(param_1 + 0x128,param_2 + 0x128);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  FUN_1406b39e6(param_1 + 0x148,param_2 + 0x148);
  FUN_1406b3a44(param_1 + 0x158,param_2 + 0x158);
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
  FUN_1406b39e6(param_1 + 0x178,param_2 + 0x178);
  FUN_1406b3a44(param_1 + 0x188,param_2 + 0x188);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  FUN_1406b39e6(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_1406b3a44(param_1 + 0x1b8,param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_2 + 0x1c8);
  FUN_1406b39e6(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_1406b3a44(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_1406b39e6(param_1 + 0x200,param_2 + 0x200);
  FUN_1406b3a44(param_1 + 0x210,param_2 + 0x210);
  FUN_1406b39e6(param_1 + 0x228,param_2 + 0x228);
  FUN_1406b3a44(param_1 + 0x238,param_2 + 0x238);
  return param_1;
}



// FUNCTION 1406b39e6 FUN_1406b39e6 body=93 status=ok
// SIG undefined FUN_1406b39e6(void)

undefined8 * FUN_1406b39e6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14487da48(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1407fb7e8(param_1,iVar1);
      FUN_1406b363d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1406b3a44 FUN_1406b3a44 body=93 status=ok
// SIG undefined FUN_1406b3a44(void)

undefined8 * FUN_1406b3a44(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14487da0a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1407fb936(param_1,iVar1);
      FUN_1406b40b4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1406b3aa2 FUN_1406b3aa2 body=316 status=ok
// SIG undefined FUN_1406b3aa2(void)

void FUN_1406b3aa2(longlong param_1,longlong param_2)

{
  FUN_1406b3508(param_1 + 8,param_2 + 8);
  FUN_1406b3508(param_1 + 0x30,param_2 + 0x30);
  FUN_1406b3508(param_1 + 0x58,param_2 + 0x58);
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) | *(byte *)(param_2 + 0xa8);
  FUN_1406b3508(param_1 + 0x80,param_2 + 0x80);
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) | *(byte *)(param_2 + 0xd8);
  FUN_1406b3508(param_1 + 0xb0,param_2 + 0xb0);
  *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | *(byte *)(param_2 + 0x108);
  FUN_1406b3508(param_1 + 0xe0,param_2 + 0xe0);
  *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) | *(byte *)(param_2 + 0x138);
  FUN_1406b3508(param_1 + 0x110,param_2 + 0x110);
  *(byte *)(param_1 + 0x168) = *(byte *)(param_1 + 0x168) | *(byte *)(param_2 + 0x168);
  FUN_1406b3508(param_1 + 0x140,param_2 + 0x140);
  *(byte *)(param_1 + 0x198) = *(byte *)(param_1 + 0x198) | *(byte *)(param_2 + 0x198);
  FUN_1406b3508(param_1 + 0x170,param_2 + 0x170);
  *(byte *)(param_1 + 0x1c8) = *(byte *)(param_1 + 0x1c8) | *(byte *)(param_2 + 0x1c8);
  FUN_1406b3508(param_1 + 0x1a0,param_2 + 0x1a0);
  FUN_1406b3508(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_1406b3508(param_1 + 0x1f8,param_2 + 0x1f8);
  FUN_1406b3508(param_1 + 0x220,param_2 + 0x220);
  return;
}



// FUNCTION 1406b3bde FUN_1406b3bde body=347 status=ok
// SIG undefined FUN_1406b3bde(void)

undefined8 * FUN_1406b3bde(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x248);
    memset(puVar1 + 0x14,0,0x130);
    *puVar1 = &PTR_FUN_14b39b808;
    puVar1[1] = &PTR_FUN_14b00be10;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = &PTR_FUN_14b00be10;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = &PTR_FUN_14b00be10;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x10] = &PTR_FUN_14b35c290;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x16] = &PTR_FUN_14b35c290;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1c] = &PTR_FUN_14b35c290;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x22] = &PTR_FUN_14b35c290;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x28] = &PTR_FUN_14b35c290;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x2e] = &PTR_FUN_14b35c290;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x34] = &PTR_FUN_14b35c290;
    puVar1[0x3a] = &PTR_FUN_14b00be10;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = &PTR_FUN_14b00be10;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x44] = &PTR_FUN_14b00be10;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    *(undefined8 **)(param_1 + 0x40) = puVar1;
  }
  return puVar1;
}



// FUNCTION 1406b3d3a FUN_1406b3d3a body=663 status=ok
// SIG undefined FUN_1406b3d3a(void)

void FUN_1406b3d3a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  FUN_1403d9ba1(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1404d18a6(param_1,0);
  }
  FUN_1403d9ba1(param_1[2],*(undefined4 *)(param_1 + 3));
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1404d18a6(param_1 + 2,0);
  }
  FUN_1403d9bf5(param_1[4],*(undefined4 *)(param_1 + 5));
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_140c8bc4a(param_1 + 4,0);
  }
  FUN_1403d9d26(param_1[6],*(undefined4 *)(param_1 + 7));
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_1404d1988(param_1 + 6,0);
  }
  puVar3 = (undefined8 *)param_1[8];
  if (puVar3 != (undefined8 *)0x0) {
    param_1[8] = 0;
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[9];
  if (puVar3 != (undefined8 *)0x0) {
    param_1[9] = 0;
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_1403d9c41(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_1404d16e2(param_1 + 0xb,0);
  }
  FUN_1403d9c8c(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_1404d17c4(param_1 + 0xd,0);
  }
  param_1[0xf] = 0;
  plVar4 = (longlong *)param_1[0x10];
  if (plVar4 != (longlong *)0x0) {
    param_1[0x10] = 0;
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
  param_1[0x11] = 0;
  plVar4 = (longlong *)param_1[0x12];
  if (plVar4 != (longlong *)0x0) {
    param_1[0x12] = 0;
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
  FUN_1403d9cd9(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    FUN_1404d1ad4(param_1 + 0x13,0);
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_1402191ca(param_1 + 0x15,0);
  }
  if (param_1[0x17] != 0) {
    param_1[0x17] = 0;
    FUN_1403d9fee();
  }
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return;
}



// FUNCTION 1406b3fd2 FUN_1406b3fd2 body=226 status=ok
// SIG undefined FUN_1406b3fd2(void)

void FUN_1406b3fd2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1406b40b4 FUN_1406b40b4 body=121 status=ok
// SIG undefined FUN_1406b40b4(void)

void FUN_1406b40b4(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    do {
      *(undefined4 *)(puVar3 + -1) = *(undefined4 *)(param_2 + 1);
      puVar3[-2] = *param_2;
      *puVar3 = 0;
      iVar1 = *(int *)(param_2 + 3);
      uVar2 = param_2[2];
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_14055313c(puVar3,iVar1,0);
        FUN_140553097(*puVar3,uVar2);
      }
      param_2 = param_2 + 4;
      puVar3 = puVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406b412e FUN_1406b412e body=269 status=ok
// SIG undefined FUN_1406b412e(void)

void FUN_1406b412e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406b423c FUN_1406b423c body=353 status=ok
// SIG undefined FUN_1406b423c(void)

void FUN_1406b423c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406b42c1;
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
LAB_1406b42c1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1406b439e FUN_1406b439e body=57 status=ok
// SIG undefined FUN_1406b439e(void)

void FUN_1406b439e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6be50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6be50 = FUN_140002ddd(FUN_14652f6b3,uVar1,L"MissionChoiceOptionDef");
  }
  return;
}



// FUNCTION 1406b43d8 FUN_1406b43d8 body=160 status=ok
// SIG undefined FUN_1406b43d8(void)

int FUN_1406b43d8(longlong *param_1,int *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = (int)param_1[1];
  iVar4 = iVar1;
  if (0 < iVar1) {
    uVar5 = 0;
    bVar3 = 0;
    do {
      lVar2 = *param_1;
      if (*(int *)(lVar2 + (longlong)(int)uVar5 * 4) == *param_2) {
        iVar6 = ~uVar5 + iVar4;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar2 + (longlong)(int)uVar5 * 4),
                  (void *)(lVar2 + (longlong)(iVar4 - iVar6) * 4),(longlong)iVar6 << 2);
          iVar4 = (int)param_1[1];
        }
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 1) = iVar4;
        bVar3 = 1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
    if ((bool)(param_3 == '\x01' & bVar3)) {
      FUN_14479f406(param_1);
      iVar4 = (int)param_1[1];
    }
  }
  return iVar1 - iVar4;
}



// FUNCTION 1406b4478 FUN_1406b4478 body=43 status=ok
// SIG undefined FUN_1406b4478(void)

void FUN_1406b4478(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1406b44a4 FUN_1406b44a4 body=214 status=ok
// SIG undefined FUN_1406b44a4(void)

void FUN_1406b44a4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1406b457a FUN_1406b457a body=373 status=ok
// SIG undefined FUN_1406b457a(void)

void FUN_1406b457a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406b4603;
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
LAB_1406b4603:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 1406b46f0 FUN_1406b46f0 body=1917 status=ok
// SIG undefined FUN_1406b46f0(void)

void FUN_1406b46f0(longlong *param_1,longlong *param_2,char param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  int *piVar3;
  void *_Src;
  longlong *plVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int *piVar17;
  ulonglong uVar18;
  longlong *plVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  longlong *plVar28;
  longlong *plVar29;
  ulonglong uVar30;
  longlong *plVar31;
  longlong lVar32;
  uint *puVar33;
  longlong lVar34;
  bool bVar35;
  float fVar36;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  int *local_3a0;
  ulonglong local_398;
  uint *local_390;
  longlong local_388;
  longlong *local_380;
  int *local_378;
  undefined8 uStack_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  iVar25 = *(int *)((longlong)param_2 + 0xc);
  FUN_14189d227(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar25 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_140c8bd2c(param_2,0);
  }
  local_378 = (int *)0x0;
  uStack_370 = 0;
  lVar34 = *param_1;
  puVar33 = (uint *)(lVar34 + 0x3b8);
  uVar8 = *(uint *)(lVar34 + 0x3d0);
  uVar18 = (ulonglong)uVar8;
  local_380 = param_2;
  if (uVar8 == 0) {
    uVar16 = 1;
    uVar30 = 0;
    iVar25 = 0;
    uVar7 = 0;
  }
  else {
    puVar5 = *(uint **)(lVar34 + 0x3c8);
    if (*(uint **)(lVar34 + 0x3c8) == (uint *)0x0) {
      puVar5 = puVar33;
    }
    uVar7 = *puVar5;
    if (uVar7 == 0) {
      iVar25 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar25 = uVar8 - 1;
      }
      uVar14 = 0;
      uVar16 = (ulonglong)(uint)(iVar25 >> 5);
      if (iVar25 >> 5 < 1) {
        uVar16 = uVar14;
      }
      uVar30 = 0;
      iVar25 = 0;
      do {
        if (uVar16 == uVar30) goto LAB_1406b4e12;
        iVar25 = iVar25 + 0x20;
        uVar7 = puVar5[uVar30 + 1];
        uVar30 = uVar30 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar30 = 0;
      iVar25 = 0;
    }
    uVar16 = (ulonglong)(-uVar7 & uVar7);
    uVar14 = uVar16 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar7 = (iVar25 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if ((int)uVar8 <= (int)uVar7) {
      uVar7 = uVar8;
    }
  }
  if (uVar7 != uVar8) {
    local_388 = 0x400;
    if (param_3 != '\0') {
      local_388 = 1000;
    }
    uVar20 = 0xffffffff;
    local_3a8 = lVar34;
    local_398 = uVar18;
    local_390 = puVar33;
    do {
      uVar14 = uStack_370;
      lVar21 = *(longlong *)(*(longlong *)(lVar34 + 0x3a8) + 0x10 + (longlong)(int)uVar7 * 0x20);
      if ((*(int *)(lVar21 + 0x41c) == 0) &&
         (lVar22 = *(longlong *)(lVar21 + local_388), lVar22 != 0)) {
        local_3a0 = (int *)CONCAT44(local_3a0._4_4_,iVar25);
        iVar25 = *(int *)(lVar21 + 0x3c);
        lVar32 = (longlong)(int)uStack_370;
        if (lVar32 != 0) {
          lVar11 = lVar32 << 5;
          piVar17 = local_378;
          do {
            if ((*piVar17 == iVar25) && (*(longlong *)(piVar17 + 1) == lVar22)) {
              if (piVar17 != (int *)0x0) {
                iVar25 = piVar17[6];
                uVar8 = piVar17[7];
                goto LAB_1406b48ec;
              }
              break;
            }
            piVar17 = piVar17 + 8;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
        }
        uVar8 = (int)uStack_370 + 1;
        uStack_370 = CONCAT44(uStack_370._4_4_,uVar8);
        if (uStack_370._4_4_ < uVar8) {
          FUN_143dfb612(&local_378,uVar14 & 0xffffffff);
          lVar34 = local_3a8;
        }
        piVar17 = local_378 + lVar32 * 8;
        local_378[lVar32 * 8] = iVar25;
        *(longlong *)(local_378 + lVar32 * 8 + 1) = lVar22;
        piVar3 = local_378 + lVar32 * 8 + 4;
        piVar3[0] = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
        piVar3[3] = 0;
        uVar8 = 0;
        iVar25 = 0;
LAB_1406b48ec:
        uVar18 = local_398;
        piVar17[6] = iVar25 + 1U;
        if (uVar8 < iVar25 + 1U) {
          FUN_1406b423c(piVar17 + 4,iVar25);
          lVar34 = local_3a8;
        }
        *(longlong *)(*(longlong *)(piVar17 + 4) + (longlong)iVar25 * 8) = lVar21;
        uVar8 = *(uint *)(lVar34 + 0x3d0);
        puVar33 = local_390;
        iVar25 = (int)local_3a0;
      }
      uVar20 = uVar20 & ~(uint)uVar16;
      puVar5 = *(uint **)(lVar34 + 0x3c8);
      if (*(uint **)(lVar34 + 0x3c8) == (uint *)0x0) {
        puVar5 = puVar33;
      }
      iVar13 = (int)uVar30;
      lVar21 = (longlong)iVar13;
      uVar7 = puVar5[lVar21] & uVar20;
      if (uVar7 == 0) {
        iVar9 = uVar8 + 0x1e;
        if (-1 < (int)(uVar8 - 1)) {
          iVar9 = uVar8 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar25 = iVar25 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar13) {
          iVar10 = iVar13;
        }
        if (iVar13 < iVar9) {
          lVar22 = 0;
          do {
            uVar7 = puVar5[lVar21 + lVar22 + 1];
            if (uVar7 != 0) {
              uVar30 = (ulonglong)(iVar13 + (int)lVar22 + 1);
              uVar20 = 0xffffffff;
              goto LAB_1406b499d;
            }
            iVar25 = iVar25 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar10 - lVar21 != lVar22);
          uVar20 = 0xffffffff;
          lVar21 = (longlong)iVar10;
        }
        uVar30 = lVar21 + 1U & 0xffffffff;
        lVar34 = local_3a8;
        uVar7 = uVar8;
      }
      else {
LAB_1406b499d:
        uVar16 = (ulonglong)(-uVar7 & uVar7);
        uVar14 = uVar16 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar7 = (iVar25 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if ((int)uVar8 <= (int)uVar7) {
          uVar7 = uVar8;
        }
      }
    } while (uVar7 != (uint)uVar18);
    if ((longlong)(int)uStack_370 != 0) {
      local_3a0 = local_378 + (longlong)(int)uStack_370 * 8;
      piVar17 = local_378;
      do {
        iVar25 = piVar17[6];
        if (1 < (longlong)iVar25) {
          lVar34 = *(longlong *)(piVar17 + 4);
          memset(local_358,0,0x2f0);
          local_360 = lVar34 + (longlong)iVar25 * 8 + -8;
          local_368 = lVar34;
          fVar36 = logf((float)iVar25);
          local_358[0] = (int)(longlong)(fVar36 + fVar36);
          plVar6 = &local_368;
          do {
            plVar15 = (longlong *)*plVar6;
            plVar19 = (longlong *)plVar6[1];
            iVar25 = (int)plVar6[2];
            iVar13 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar15) >> 3);
            uVar18 = (ulonglong)(iVar13 + 1);
            plVar23 = plVar19;
            plVar27 = plVar15;
            if (iVar25 != 0) {
LAB_1406b4a7a:
              if (8 < (int)(uint)uVar18) {
                uVar8 = (uint)uVar18 >> 1;
                lVar34 = plVar15[uVar8];
                plVar15[uVar8] = *plVar15;
                *plVar15 = lVar34;
                plVar28 = plVar23 + 1;
                plVar12 = plVar15;
                do {
                  plVar4 = plVar12 + 1;
                  plVar24 = plVar12 + 1;
                  do {
                    plVar29 = plVar24;
                    plVar12 = plVar4;
                    if (plVar23 < plVar12) break;
                    plVar4 = plVar12 + 1;
                    plVar24 = plVar29 + 1;
                  } while (*(float *)(*plVar12 + 0x390) < *(float *)(*plVar15 + 0x390) ||
                           *(float *)(*plVar12 + 0x390) == *(float *)(*plVar15 + 0x390));
                  plVar4 = plVar28 + -2;
                  do {
                    plVar24 = plVar28;
                    plVar31 = plVar4;
                    plVar28 = plVar24 + -1;
                    if (plVar28 <= plVar15) break;
                    plVar4 = plVar31 + -1;
                  } while (*(float *)(*plVar15 + 0x390) < *(float *)(*plVar28 + 0x390) ||
                           *(float *)(*plVar15 + 0x390) == *(float *)(*plVar28 + 0x390));
                  if (plVar28 < plVar12) goto LAB_1406b4b1c;
                  lVar34 = *plVar12;
                  *plVar12 = *plVar28;
                  *plVar28 = lVar34;
                } while( true );
              }
              if (plVar15 < plVar23) {
                do {
                  plVar19 = plVar15;
                  if (plVar15 + 1 <= plVar23) {
                    lVar34 = *plVar15;
                    plVar27 = plVar15 + 1;
                    do {
                      fVar36 = *(float *)(*plVar27 + 0x390);
                      plVar28 = plVar27;
                      lVar21 = *plVar27;
                      if (fVar36 < *(float *)(lVar34 + 0x390) ||
                          fVar36 == *(float *)(lVar34 + 0x390)) {
                        plVar28 = plVar19;
                        lVar21 = lVar34;
                      }
                      lVar34 = lVar21;
                      plVar19 = plVar28;
                      plVar27 = plVar27 + 1;
                    } while (plVar27 <= plVar23);
                  }
                  lVar34 = *plVar19;
                  *plVar19 = *plVar23;
                  *plVar23 = lVar34;
                  plVar23 = plVar23 + -1;
                } while (plVar15 < plVar23);
              }
              goto LAB_1406b4d78;
            }
LAB_1406b4bb0:
            iVar25 = (int)uVar18;
            if (iVar25 != 0) {
              iVar13 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
              iVar9 = iVar13;
joined_r0x0001406b4bd3:
              do {
                iVar10 = iVar13 * 2 + 1;
                if (iVar10 < iVar25) {
                  iVar26 = iVar13 * 2 + 2;
                  if ((iVar26 < iVar25) &&
                     (*(float *)(plVar15[iVar10] + 0x390) < *(float *)(plVar15[iVar26] + 0x390) ||
                      *(float *)(plVar15[iVar10] + 0x390) == *(float *)(plVar15[iVar26] + 0x390))) {
                    iVar10 = iVar26;
                  }
                  lVar34 = plVar15[iVar13];
                  fVar36 = *(float *)(plVar15[iVar10] + 0x390);
                  pfVar1 = (float *)(lVar34 + 0x390);
                  if (*pfVar1 <= fVar36 && fVar36 != *pfVar1) {
                    plVar15[iVar13] = plVar15[iVar10];
                    plVar15[iVar10] = lVar34;
                    iVar13 = iVar10;
                    goto joined_r0x0001406b4bd3;
                  }
                }
                bVar35 = iVar9 != 0;
                iVar13 = iVar9 + -1;
                iVar9 = iVar13;
              } while (bVar35);
              if (1 < iVar25) {
                lVar34 = *plVar15;
                *plVar15 = plVar15[uVar18 - 1];
                plVar15[uVar18 - 1] = lVar34;
                if (iVar25 != 2) {
                  do {
                    uVar16 = uVar18 - 1;
                    iVar25 = 0;
                    iVar9 = 1;
                    iVar13 = 0;
                    do {
                      iVar25 = iVar25 + 2;
                      iVar10 = iVar9;
                      if (((longlong)iVar25 < (longlong)uVar16) &&
                         (*(float *)(plVar15[iVar9] + 0x390) < *(float *)(plVar15[iVar25] + 0x390)
                          || *(float *)(plVar15[iVar9] + 0x390) ==
                             *(float *)(plVar15[iVar25] + 0x390))) {
                        iVar10 = iVar25;
                      }
                      lVar34 = plVar15[iVar13];
                      fVar36 = *(float *)(plVar15[iVar10] + 0x390);
                      pfVar1 = (float *)(lVar34 + 0x390);
                      if (fVar36 < *pfVar1 || fVar36 == *pfVar1) break;
                      plVar15[iVar13] = plVar15[iVar10];
                      plVar15[iVar10] = lVar34;
                      iVar25 = iVar10 * 2;
                      iVar9 = iVar10 * 2 + 1;
                      iVar13 = iVar10;
                    } while ((longlong)iVar9 < (longlong)uVar16);
                    lVar34 = *plVar15;
                    *plVar15 = plVar15[uVar18 - 2];
                    plVar15[uVar18 - 2] = lVar34;
                    uVar18 = uVar16;
                  } while (2 < uVar16);
                }
              }
            }
LAB_1406b4d78:
            plVar6 = plVar6 + -3;
          } while (&local_368 <= plVar6);
        }
        plVar6 = local_380;
        lVar34 = local_380[1];
        uVar8 = (int)lVar34 + 1;
        *(uint *)(local_380 + 1) = uVar8;
        if (*(uint *)((longlong)local_380 + 0xc) < uVar8) {
          FUN_14189f450(local_380);
        }
        lVar21 = *plVar6;
        lVar34 = (longlong)(int)lVar34 * 0x10;
        puVar2 = (undefined8 *)(lVar21 + lVar34);
        *(undefined8 *)(lVar21 + lVar34) = 0;
        iVar25 = piVar17[6];
        _Src = *(void **)(piVar17 + 4);
        *(int *)(lVar21 + 8 + lVar34) = iVar25;
        if ((longlong)iVar25 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_14189f55e(puVar2,iVar25);
          memcpy((void *)*puVar2,_Src,(longlong)iVar25 << 3);
        }
        piVar17 = piVar17 + 8;
      } while (piVar17 != local_3a0);
      uVar14 = uStack_370 & 0xffffffff;
      goto LAB_1406b4e12;
    }
  }
  uVar14 = 0;
LAB_1406b4e12:
  FUN_143dfb70a(local_378,uVar14);
  if (local_378 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1406b4b1c:
  lVar34 = *plVar15;
  *plVar15 = *plVar28;
  *plVar28 = lVar34;
  iVar25 = iVar25 + -1;
  plVar24 = plVar24 + -2;
  if ((longlong)plVar31 - (longlong)plVar27 < (longlong)plVar19 - (longlong)plVar29) {
    if (plVar12 < plVar23) {
      *plVar6 = (longlong)plVar12;
      plVar6[1] = (longlong)plVar23;
      *(int *)(plVar6 + 2) = iVar25;
      plVar6 = plVar6 + 3;
    }
    plVar29 = plVar15;
    plVar19 = plVar31;
    if (plVar28 <= plVar15 + 1) goto LAB_1406b4d78;
  }
  else {
    if (plVar15 + 1 < plVar28) {
      *plVar6 = (longlong)plVar15;
      plVar6[1] = (longlong)plVar24;
      *(int *)(plVar6 + 2) = iVar25;
      plVar6 = plVar6 + 3;
    }
    plVar15 = plVar12;
    plVar24 = plVar23;
    plVar19 = plVar23;
    if (plVar23 <= plVar12) goto LAB_1406b4d78;
  }
  iVar13 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar29) >> 3);
  uVar18 = (ulonglong)(iVar13 + 1);
  plVar23 = plVar24;
  plVar27 = plVar29;
  if (iVar25 == 0) goto LAB_1406b4bb0;
  goto LAB_1406b4a7a;
}



// FUNCTION 1406b4e6e FUN_1406b4e6e body=353 status=ok
// SIG undefined FUN_1406b4e6e(void)

void FUN_1406b4e6e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406b4ef3;
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
LAB_1406b4ef3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1406b4fd0 FUN_1406b4fd0 body=315 status=ok
// SIG undefined FUN_1406b4fd0(void)

void FUN_1406b4fd0(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1406b503a;
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
LAB_1406b503a:
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



// FUNCTION 1406b510b FUN_1406b510b body=3629 status=ok
// SIG undefined FUN_1406b510b(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1406b510b(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  int iVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *plVar28;
  undefined8 *puVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  longlong *plVar33;
  undefined8 *puVar34;
  longlong lVar35;
  undefined8 *puVar36;
  longlong lVar37;
  bool bVar38;
  float fVar39;
  undefined1 auStack_3d8 [32];
  longlong *local_3b8;
  longlong *local_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  longlong local_398;
  longlong local_390;
  undefined4 local_388 [188];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_3b8 = param_2 + 3;
  *(undefined4 *)(param_2 + 4) = 0;
  if (*(int *)((longlong)param_2 + 0x24) < 0) {
    FUN_1446dda88(local_3b8,0);
  }
  plVar10 = param_2 + 5;
  iVar30 = *(int *)((longlong)param_2 + 0x34);
  FUN_1406e9484(param_2[5],(int)param_2[6]);
  *(undefined4 *)(param_2 + 6) = 0;
  if ((iVar30 < 0) && (*(int *)((longlong)param_2 + 0x34) != 0)) {
    FUN_148911e90(plVar10);
  }
  if (*(int *)((longlong)param_2 + 0x44) < 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    FUN_148911ec0(param_2 + 7);
  }
  else {
    *(undefined4 *)(param_2 + 8) = 0;
  }
  if (*(int *)((longlong)param_2 + 0x54) < 0) {
    *(undefined4 *)(param_2 + 10) = 0;
    FUN_1446dda88(param_2 + 9,0);
  }
  else {
    *(undefined4 *)(param_2 + 10) = 0;
  }
  local_3a8 = 0;
  uStack_3a0 = 0;
  iVar30 = (int)param_1[1];
  local_3b0 = plVar10;
  if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar30 * 2);
  }
  if (iVar30 != 0) {
    FUN_1406b60f4(&local_3a8);
    lVar27 = param_1[1];
    if ((longlong)(int)lVar27 != 0) {
      lVar18 = *param_1;
      lVar35 = 0;
      do {
        fVar39 = *(float *)(lVar18 + 0x10 + lVar35);
        if ((fVar39 != -1.0) || (NAN(fVar39))) {
          lVar37 = (longlong)(int)uStack_3a0;
          uVar9 = (int)uStack_3a0 + 1;
          uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar9);
          if (uStack_3a0._4_4_ < uVar9) {
            FUN_1410d14fc(&local_3a8);
          }
          *(longlong *)(local_3a8 + lVar37 * 8) = (longlong)(fVar39 * 10000.0);
        }
        if (*(char *)(lVar18 + 0xc + lVar35) == '\x01') {
          fVar39 = *(float *)(lVar18 + 0x14 + lVar35);
          if ((fVar39 != -1.0) || (NAN(fVar39))) {
            lVar37 = (longlong)(int)uStack_3a0;
            uVar9 = (int)uStack_3a0 + 1;
            uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar9);
            if (uStack_3a0._4_4_ < uVar9) {
              FUN_1410d14fc(&local_3a8);
            }
            *(longlong *)(local_3a8 + lVar37 * 8) = (longlong)(fVar39 * 10000.0);
          }
        }
        lVar35 = lVar35 + 0x18;
      } while ((longlong)(int)lVar27 * 0x18 != lVar35);
    }
  }
  lVar27 = local_3a8;
  iVar30 = (int)uStack_3a0;
  lVar18 = (longlong)(int)uStack_3a0;
  if (1 < lVar18) {
    memset(local_388,0,0x2f0);
    local_398 = lVar27;
    local_390 = lVar27 + lVar18 * 8 + -8;
    fVar39 = logf((float)iVar30);
    local_388[0] = (int)(longlong)(fVar39 + fVar39);
    plVar10 = &local_398;
    do {
      plVar23 = (longlong *)*plVar10;
      plVar13 = (longlong *)plVar10[1];
      iVar30 = (int)plVar10[2];
      iVar22 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar23) >> 3);
      uVar26 = (ulonglong)(iVar22 + 1);
      plVar28 = plVar13;
      plVar20 = plVar23;
      if (iVar30 != 0) {
LAB_1406b530a:
        if (8 < (int)(uint)uVar26) {
          uVar9 = (uint)uVar26 >> 1;
          lVar27 = plVar23[uVar9];
          plVar23[uVar9] = *plVar23;
          *plVar23 = lVar27;
          plVar33 = plVar28 + 1;
          plVar11 = plVar23;
          do {
            plVar6 = plVar11 + 1;
            plVar8 = plVar11 + 1;
            do {
              plVar11 = plVar8;
              plVar19 = plVar6;
              if (plVar28 < plVar11) break;
              plVar6 = plVar19 + 1;
              plVar8 = plVar11 + 1;
            } while (*plVar11 <= *plVar23);
            plVar6 = plVar33 + -2;
            do {
              plVar8 = plVar33;
              plVar15 = plVar6;
              plVar33 = plVar8 + -1;
              if (plVar33 <= plVar23) break;
              plVar6 = plVar15 + -1;
            } while (*plVar23 <= *plVar33);
            if (plVar33 < plVar11) goto LAB_1406b538b;
            lVar27 = *plVar11;
            *plVar11 = *plVar33;
            *plVar33 = lVar27;
          } while( true );
        }
        if (plVar23 < plVar28) {
          do {
            plVar13 = plVar23;
            if (plVar23 + 1 <= plVar28) {
              plVar20 = plVar23 + 1;
              lVar27 = *plVar23;
              do {
                lVar18 = *plVar20;
                lVar35 = lVar27;
                if (lVar27 <= lVar18) {
                  lVar35 = lVar18;
                }
                if (lVar27 < lVar18) {
                  plVar13 = plVar20;
                }
                plVar20 = plVar20 + 1;
                lVar27 = lVar35;
              } while (plVar20 <= plVar28);
            }
            lVar27 = *plVar13;
            *plVar13 = *plVar28;
            *plVar28 = lVar27;
            plVar28 = plVar28 + -1;
          } while (plVar23 < plVar28);
        }
        goto LAB_1406b54e5;
      }
LAB_1406b5e58:
      iVar30 = (int)uVar26;
      if (iVar30 != 0) {
        iVar22 = (iVar22 - (iVar22 + -1 >> 0x1f)) + -1 >> 1;
        iVar31 = iVar22;
joined_r0x0001406b5507:
        do {
          iVar17 = iVar22 * 2 + 1;
          if (iVar17 < iVar30) {
            iVar32 = iVar22 * 2 + 2;
            if ((iVar32 < iVar30) && (plVar23[iVar17] <= plVar23[iVar32])) {
              iVar17 = iVar32;
            }
            lVar27 = plVar23[iVar22];
            if (lVar27 < plVar23[iVar17]) {
              plVar23[iVar22] = plVar23[iVar17];
              plVar23[iVar17] = lVar27;
              iVar22 = iVar17;
              goto joined_r0x0001406b5507;
            }
          }
          bVar38 = iVar31 != 0;
          iVar22 = iVar31 + -1;
          iVar31 = iVar22;
        } while (bVar38);
        if (1 < iVar30) {
          lVar27 = *plVar23;
          *plVar23 = plVar23[uVar26 - 1];
          plVar23[uVar26 - 1] = lVar27;
          if (iVar30 != 2) {
            do {
              uVar24 = uVar26 - 1;
              iVar30 = 0;
              iVar31 = 1;
              iVar22 = 0;
              do {
                iVar30 = iVar30 + 2;
                iVar17 = iVar31;
                if (((longlong)iVar30 < (longlong)uVar24) && (plVar23[iVar31] <= plVar23[iVar30])) {
                  iVar17 = iVar30;
                }
                lVar27 = plVar23[iVar22];
                if (plVar23[iVar17] <= lVar27) break;
                plVar23[iVar22] = plVar23[iVar17];
                plVar23[iVar17] = lVar27;
                iVar30 = iVar17 * 2;
                iVar31 = iVar17 * 2 + 1;
                iVar22 = iVar17;
              } while ((longlong)iVar31 < (longlong)uVar24);
              lVar27 = *plVar23;
              *plVar23 = plVar23[uVar26 - 2];
              plVar23[uVar26 - 2] = lVar27;
              uVar26 = uVar24;
            } while (2 < uVar24);
          }
        }
      }
LAB_1406b54e5:
      plVar10 = plVar10 + -3;
    } while (&local_398 <= plVar10);
  }
  iVar30 = (int)param_1[1];
  if (1 < (longlong)iVar30) {
    lVar27 = *param_1;
    memset(local_388,0,0x2f0);
    local_390 = lVar27 + (longlong)iVar30 * 0x18 + -0x18;
    local_398 = lVar27;
    fVar39 = logf((float)iVar30);
    local_388[0] = (int)(longlong)(fVar39 + fVar39);
    plVar10 = &local_398;
    do {
      puVar14 = (undefined8 *)*plVar10;
      puVar21 = (undefined8 *)plVar10[1];
      iVar30 = (int)plVar10[2];
      iVar22 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar14) >> 3) * -0x55555555;
      uVar9 = iVar22 + 1;
      puVar25 = puVar14;
      puVar12 = puVar14;
      puVar29 = puVar21;
      if (iVar30 != 0) {
LAB_1406b561a:
        if (8 < (int)uVar9) {
          uVar26 = (ulonglong)(uVar9 >> 1);
          uVar1 = puVar25[uVar26 * 3 + 2];
          uVar2 = puVar25[uVar26 * 3];
          uVar3 = (puVar25 + uVar26 * 3)[1];
          puVar25[uVar26 * 3 + 2] = puVar25[2];
          uVar4 = puVar25[1];
          puVar25[uVar26 * 3] = *puVar25;
          (puVar25 + uVar26 * 3)[1] = uVar4;
          puVar25[2] = uVar1;
          *puVar25 = uVar2;
          puVar25[1] = uVar3;
          puVar34 = puVar29 + 3;
          puVar12 = puVar25;
          do {
            puVar5 = puVar12 + 3;
            puVar7 = puVar12 + 3;
            do {
              puVar12 = puVar7;
              puVar36 = puVar5;
              if (puVar29 < puVar12) break;
              puVar5 = puVar36 + 3;
              puVar7 = puVar12 + 3;
            } while (*(float *)(puVar12 + 2) < *(float *)(puVar25 + 2) ||
                     *(float *)(puVar12 + 2) == *(float *)(puVar25 + 2));
            puVar5 = puVar34 + -6;
            do {
              puVar7 = puVar34;
              puVar16 = puVar5;
              puVar34 = puVar7 + -3;
              if (puVar34 <= puVar25) break;
              puVar5 = puVar16 + -3;
            } while (*(float *)(puVar25 + 2) < *(float *)(puVar7 + -1) ||
                     *(float *)(puVar25 + 2) == *(float *)(puVar7 + -1));
            if (puVar34 < puVar12) goto LAB_1406b5713;
            uVar1 = puVar12[2];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            puVar12[2] = puVar7[-1];
            uVar4 = puVar7[-2];
            *puVar12 = *puVar34;
            puVar12[1] = uVar4;
            puVar7[-1] = uVar1;
            *puVar34 = uVar2;
            puVar7[-2] = uVar3;
          } while( true );
        }
        for (; puVar21 = puVar25, puVar14 = puVar25, puVar25 < puVar29; puVar29 = puVar29 + -3) {
          while (puVar12 = puVar21, puVar14 = puVar14 + 3, puVar14 <= puVar29) {
            puVar21 = puVar14;
            if (*(float *)(puVar14 + 2) < *(float *)(puVar12 + 2) ||
                *(float *)(puVar14 + 2) == *(float *)(puVar12 + 2)) {
              puVar21 = puVar12;
            }
          }
          local_88 = puVar12[2];
          local_98 = *puVar12;
          uStack_90 = puVar12[1];
          uVar2 = local_98;
          uVar3 = uStack_90;
          puVar12[2] = puVar29[2];
          uVar1 = puVar29[1];
          *puVar12 = *puVar29;
          puVar12[1] = uVar1;
          puVar29[2] = local_88;
          local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
          uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
          *(undefined4 *)puVar29 = (undefined4)local_98;
          *(undefined4 *)((longlong)puVar29 + 4) = local_98._4_4_;
          *(undefined4 *)(puVar29 + 1) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar29 + 0xc) = uStack_90._4_4_;
          local_98 = uVar2;
          uStack_90 = uVar3;
        }
        goto LAB_1406b5977;
      }
LAB_1406b5e7c:
      if (uVar9 != 0) {
        iVar30 = (iVar22 - (iVar22 + -1 >> 0x1f)) + -1 >> 1;
        iVar22 = iVar30;
joined_r0x0001406b5994:
        do {
          iVar31 = iVar30 * 2 + 1;
          if (iVar31 < (int)uVar9) {
            iVar17 = iVar30 * 2 + 2;
            if ((iVar17 < (int)uVar9) &&
               (*(float *)(puVar12 + (longlong)iVar31 * 3 + 2) <
                *(float *)(puVar12 + (longlong)iVar17 * 3 + 2) ||
                *(float *)(puVar12 + (longlong)iVar31 * 3 + 2) ==
                *(float *)(puVar12 + (longlong)iVar17 * 3 + 2))) {
              iVar31 = iVar17;
            }
            if (*(float *)(puVar12 + (longlong)iVar30 * 3 + 2) <=
                *(float *)(puVar12 + (longlong)iVar31 * 3 + 2) &&
                *(float *)(puVar12 + (longlong)iVar31 * 3 + 2) !=
                *(float *)(puVar12 + (longlong)iVar30 * 3 + 2)) {
              puVar29 = puVar12 + (longlong)iVar30 * 3;
              puVar14 = puVar12 + (longlong)iVar31 * 3;
              local_88 = puVar29[2];
              local_98 = *puVar29;
              uStack_90 = puVar29[1];
              uVar2 = local_98;
              uVar3 = uStack_90;
              puVar29[2] = puVar14[2];
              uVar1 = puVar14[1];
              *puVar29 = *puVar14;
              puVar29[1] = uVar1;
              puVar14[2] = local_88;
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
              *(undefined4 *)puVar14 = (undefined4)local_98;
              *(undefined4 *)((longlong)puVar14 + 4) = local_98._4_4_;
              *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_90._4_4_;
              local_98 = uVar2;
              uStack_90 = uVar3;
              iVar30 = iVar31;
              goto joined_r0x0001406b5994;
            }
          }
          bVar38 = iVar22 != 0;
          iVar30 = iVar22 + -1;
          iVar22 = iVar30;
        } while (bVar38);
        if (1 < (int)uVar9) {
          uVar26 = (ulonglong)uVar9 - 1;
          local_88 = puVar12[2];
          local_98 = *puVar12;
          uStack_90 = puVar12[1];
          uVar2 = local_98;
          uVar3 = uStack_90;
          puVar12[2] = puVar12[uVar26 * 3 + 2];
          uVar1 = (puVar12 + uVar26 * 3)[1];
          *puVar12 = puVar12[uVar26 * 3];
          puVar12[1] = uVar1;
          puVar12[uVar26 * 3 + 2] = local_88;
          local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
          uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
          puVar29 = puVar12 + uVar26 * 3;
          *(undefined4 *)puVar29 = (undefined4)local_98;
          *(undefined4 *)((longlong)puVar29 + 4) = local_98._4_4_;
          *(undefined4 *)(puVar29 + 1) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar29 + 0xc) = uStack_90._4_4_;
          local_98 = uVar2;
          uStack_90 = uVar3;
          if (uVar9 != 2) {
            do {
              iVar30 = 0;
              iVar31 = 1;
              iVar22 = 0;
              do {
                iVar30 = iVar30 + 2;
                iVar17 = iVar31;
                if (((longlong)iVar30 < (longlong)uVar26) &&
                   (*(float *)(puVar12 + (longlong)iVar31 * 3 + 2) <
                    *(float *)(puVar12 + (longlong)iVar30 * 3 + 2) ||
                    *(float *)(puVar12 + (longlong)iVar31 * 3 + 2) ==
                    *(float *)(puVar12 + (longlong)iVar30 * 3 + 2))) {
                  iVar17 = iVar30;
                }
                if (*(float *)(puVar12 + (longlong)iVar17 * 3 + 2) <
                    *(float *)(puVar12 + (longlong)iVar22 * 3 + 2) ||
                    *(float *)(puVar12 + (longlong)iVar17 * 3 + 2) ==
                    *(float *)(puVar12 + (longlong)iVar22 * 3 + 2)) break;
                puVar29 = puVar12 + (longlong)iVar22 * 3;
                puVar14 = puVar12 + (longlong)iVar17 * 3;
                uVar1 = puVar29[2];
                uVar2 = *puVar29;
                uVar3 = puVar29[1];
                puVar29[2] = puVar14[2];
                uVar4 = puVar14[1];
                *puVar29 = *puVar14;
                puVar29[1] = uVar4;
                puVar14[2] = uVar1;
                *puVar14 = uVar2;
                puVar14[1] = uVar3;
                iVar30 = iVar17 * 2;
                iVar31 = iVar17 * 2 + 1;
                iVar22 = iVar17;
              } while ((longlong)iVar31 < (longlong)uVar26);
              uVar24 = uVar26 - 1;
              local_88 = puVar12[2];
              local_98 = *puVar12;
              uStack_90 = puVar12[1];
              uVar2 = local_98;
              uVar3 = uStack_90;
              puVar12[2] = puVar12[uVar24 * 3 + 2];
              uVar1 = (puVar12 + uVar24 * 3)[1];
              *puVar12 = puVar12[uVar24 * 3];
              puVar12[1] = uVar1;
              puVar12[uVar24 * 3 + 2] = local_88;
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
              puVar29 = puVar12 + uVar24 * 3;
              *(undefined4 *)puVar29 = (undefined4)local_98;
              *(undefined4 *)((longlong)puVar29 + 4) = local_98._4_4_;
              *(undefined4 *)(puVar29 + 1) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)puVar29 + 0xc) = uStack_90._4_4_;
              bVar38 = 2 < uVar26;
              uVar26 = uVar24;
              local_98 = uVar2;
              uStack_90 = uVar3;
            } while (bVar38);
          }
        }
      }
LAB_1406b5977:
      plVar10 = plVar10 + -3;
    } while (&local_398 <= plVar10);
  }
  plVar10 = local_3b0;
  if ((longlong)(int)uStack_3a0 == 0) {
    iVar30 = 0;
  }
  else {
    lVar27 = -0x8000000000000000;
    lVar18 = 0;
    iVar30 = 0;
    do {
      lVar35 = *(longlong *)(local_3a8 + lVar18);
      if (lVar27 < lVar35) {
        lVar27 = (longlong)iVar30;
        iVar30 = iVar30 + 1;
        *(longlong *)(local_3a8 + lVar27 * 8) = lVar35;
        lVar27 = lVar35;
      }
      lVar18 = lVar18 + 8;
    } while ((longlong)(int)uStack_3a0 * 8 != lVar18);
  }
  FUN_1406b6038(&local_3a8,iVar30);
  iVar22 = (int)param_2[6];
  if (iVar22 < iVar30) {
    *(int *)(param_2 + 6) = iVar30;
    if ((uint)(*(int *)((longlong)param_2 + 0x34) - iVar22) < (uint)(iVar30 - iVar22)) {
      FUN_1406b6230(plVar10,iVar22);
    }
    FUN_1406b601d((longlong)iVar22 * 0x18 + *plVar10,iVar30 - iVar22);
  }
  else {
    if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar30);
    }
    if (iVar30 < iVar22) {
      FUN_1489185d2(plVar10,iVar30);
      FUN_148918634(plVar10);
    }
  }
  if ((longlong)(int)param_1[1] != 0) {
    puVar14 = (undefined8 *)*param_1;
    puVar29 = puVar14 + (longlong)(int)param_1[1] * 3;
    do {
      fVar39 = *(float *)(puVar14 + 2);
      if (*(char *)((longlong)puVar14 + 0xc) == '\0') {
        if ((fVar39 != -1.0) || (NAN(fVar39))) {
          iVar22 = -1;
          if ((longlong)(int)uStack_3a0 != 0) {
            lVar27 = (longlong)(int)uStack_3a0 << 3;
            lVar18 = 0;
            do {
              if (*(longlong *)(local_3a8 + lVar18 * 8) == (longlong)(fVar39 * 10000.0)) {
                iVar22 = (int)lVar18;
                break;
              }
              lVar18 = lVar18 + 1;
              lVar27 = lVar27 + -8;
            } while (lVar27 != 0);
          }
          plVar10 = (longlong *)(*plVar10 + (longlong)iVar22 * 0x18);
          *(float *)(plVar10 + 2) = fVar39;
          iVar30 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar30 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar30 + 1U) {
            FUN_1446dd912(plVar10,iVar30);
          }
          lVar27 = *plVar10;
          *(undefined4 *)(lVar27 + 8 + (longlong)iVar30 * 0xc) = *(undefined4 *)(puVar14 + 1);
          *(undefined8 *)(lVar27 + (longlong)iVar30 * 0xc) = *puVar14;
          iVar30 = iVar22;
        }
        else {
          iVar30 = (int)param_2[4];
          *(uint *)(param_2 + 4) = iVar30 + 1U;
          if (*(uint *)((longlong)param_2 + 0x24) < iVar30 + 1U) {
            FUN_1446dd912(local_3b8,iVar30);
          }
          lVar27 = *local_3b8;
          *(undefined4 *)(lVar27 + 8 + (longlong)iVar30 * 0xc) = *(undefined4 *)(puVar14 + 1);
          *(undefined8 *)(lVar27 + (longlong)iVar30 * 0xc) = *puVar14;
          iVar22 = -1;
          iVar30 = -1;
        }
      }
      else {
        iVar30 = -1;
        lVar27 = 0xffffffff;
        if ((fVar39 != -1.0) || (NAN(fVar39))) {
          lVar27 = 0xffffffff;
          if ((longlong)(int)uStack_3a0 != 0) {
            lVar18 = (longlong)(int)uStack_3a0 << 3;
            lVar27 = 0;
            do {
              if (*(longlong *)(local_3a8 + lVar27 * 8) == (longlong)(fVar39 * 10000.0))
              goto LAB_1406b5cce;
              lVar27 = lVar27 + 1;
              lVar18 = lVar18 + -8;
            } while (lVar18 != 0);
            lVar27 = 0xffffffff;
          }
        }
LAB_1406b5cce:
        iVar22 = (int)lVar27;
        fVar39 = *(float *)((longlong)puVar14 + 0x14);
        if ((fVar39 != -1.0) || (NAN(fVar39))) {
          if ((longlong)(int)uStack_3a0 != 0) {
            lVar27 = (longlong)(int)uStack_3a0 << 3;
            lVar18 = 0;
            do {
              if (*(longlong *)(local_3a8 + lVar18 * 8) == (longlong)(fVar39 * 10000.0)) {
                iVar30 = (int)lVar18;
                break;
              }
              lVar18 = lVar18 + 1;
              lVar27 = lVar27 + -8;
            } while (lVar27 != 0);
          }
        }
        iVar31 = (int)param_2[8];
        lVar27 = (longlong)iVar31;
        *(uint *)(param_2 + 8) = iVar31 + 1U;
        if (*(uint *)((longlong)param_2 + 0x44) < iVar31 + 1U) {
          FUN_1406b64d6(param_2 + 7,iVar31);
        }
        lVar18 = param_2[7];
        *(undefined8 *)(lVar18 + 8 + lVar27 * 0x14) = 0xffffffff00000000;
        *(undefined8 *)(lVar18 + lVar27 * 0x14) = 0;
        *(undefined4 *)(lVar18 + 0x10 + lVar27 * 0x14) = 0xffffffff;
        *(undefined8 *)(lVar18 + lVar27 * 0x14) = *puVar14;
        *(undefined4 *)(lVar18 + 8 + lVar27 * 0x14) = *(undefined4 *)(puVar14 + 1);
        *(int *)(lVar18 + 0xc + lVar27 * 0x14) = iVar22;
        *(int *)(lVar18 + 0x10 + lVar27 * 0x14) = iVar30;
      }
      iVar31 = (int)param_2[10];
      *(uint *)(param_2 + 10) = iVar31 + 1U;
      if (*(uint *)((longlong)param_2 + 0x54) < iVar31 + 1U) {
        FUN_1446dd912(param_2 + 9,iVar31);
      }
      lVar27 = param_2[9];
      *(undefined4 *)(lVar27 + 8 + (longlong)iVar31 * 0xc) = *(undefined4 *)(puVar14 + 1);
      *(undefined8 *)(lVar27 + (longlong)iVar31 * 0xc) = *puVar14;
      lVar27 = (**(code **)(*param_2 + 0x18))(param_2,puVar14);
      if (lVar27 != 0) {
        *(int *)(lVar27 + 0xc) = iVar22;
        *(int *)(lVar27 + 0x10) = iVar30;
      }
      puVar14 = puVar14 + 3;
      plVar10 = local_3b0;
    } while (puVar14 != puVar29);
  }
  if (local_3a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1406b538b:
  lVar27 = *plVar23;
  *plVar23 = *plVar33;
  *plVar33 = lVar27;
  iVar30 = iVar30 + -1;
  plVar8 = plVar8 + -2;
  if ((longlong)plVar15 - (longlong)plVar20 < (longlong)plVar13 - (longlong)plVar19) {
    if (plVar11 < plVar28) {
      *plVar10 = (longlong)plVar11;
      plVar10[1] = (longlong)plVar28;
      *(int *)(plVar10 + 2) = iVar30;
      plVar10 = plVar10 + 3;
    }
    plVar19 = plVar23;
    plVar11 = plVar23;
    plVar28 = plVar8;
    plVar13 = plVar15;
    if (plVar33 <= plVar23 + 1) goto LAB_1406b54e5;
  }
  else {
    if (plVar23 + 1 < plVar33) {
      *plVar10 = (longlong)plVar23;
      plVar10[1] = (longlong)plVar8;
      *(int *)(plVar10 + 2) = iVar30;
      plVar10 = plVar10 + 3;
    }
    plVar13 = plVar28;
    if (plVar28 <= plVar11) goto LAB_1406b54e5;
  }
  iVar22 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar19) >> 3);
  uVar26 = (ulonglong)(iVar22 + 1);
  plVar23 = plVar11;
  plVar20 = plVar19;
  if (iVar30 == 0) goto LAB_1406b5e58;
  goto LAB_1406b530a;
LAB_1406b5713:
  local_88 = puVar25[2];
  local_98 = *puVar25;
  uStack_90 = puVar25[1];
  uVar2 = local_98;
  uVar3 = uStack_90;
  puVar25[2] = puVar7[-1];
  uVar1 = puVar7[-2];
  *puVar25 = *puVar34;
  puVar25[1] = uVar1;
  puVar7[-1] = local_88;
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  *(undefined4 *)puVar34 = (undefined4)local_98;
  *(undefined4 *)((longlong)puVar7 + -0x14) = local_98._4_4_;
  *(undefined4 *)(puVar7 + -2) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)puVar7 + -0xc) = uStack_90._4_4_;
  iVar30 = iVar30 + -1;
  local_98 = uVar2;
  uStack_90 = uVar3;
  if ((longlong)puVar16 - (longlong)puVar14 < (longlong)puVar21 - (longlong)puVar36) {
    if (puVar12 < puVar29) {
      *plVar10 = (longlong)puVar12;
      plVar10[1] = (longlong)puVar29;
      *(int *)(plVar10 + 2) = iVar30;
      plVar10 = plVar10 + 3;
    }
    puVar12 = puVar25;
    puVar29 = puVar7 + -6;
    puVar21 = puVar16;
    puVar14 = puVar25;
    if (puVar34 <= puVar25 + 3) goto LAB_1406b5977;
  }
  else {
    if (puVar25 + 3 < puVar34) {
      *plVar10 = (longlong)puVar25;
      plVar10[1] = (longlong)(puVar7 + -6);
      *(int *)(plVar10 + 2) = iVar30;
      plVar10 = plVar10 + 3;
    }
    puVar21 = puVar29;
    puVar14 = puVar36;
    if (puVar29 <= puVar12) goto LAB_1406b5977;
  }
  iVar22 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar14) >> 3) * -0x55555555;
  uVar9 = iVar22 + 1;
  puVar25 = puVar12;
  if (iVar30 == 0) goto LAB_1406b5e7c;
  goto LAB_1406b561a;
}



// FUNCTION 1406b5f3a FUN_1406b5f3a body=227 status=ok
// SIG undefined FUN_1406b5f3a(void)

longlong FUN_1406b5f3a(longlong param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *param_2;
  uVar5 = param_2[2];
  if (uVar5 != 0) {
    uVar3 = uVar5 >> 0xd ^ uVar3 - uVar5;
    uVar7 = uVar3 << 8 ^ (-0x61c88647 - uVar5) - uVar3;
    uVar8 = uVar7 >> 0xd ^ (uVar5 - uVar3) - uVar7;
    uVar5 = uVar8 >> 0xc ^ (uVar3 - uVar7) - uVar8;
    uVar3 = uVar5 << 0x10 ^ (uVar7 - uVar8) - uVar5;
    uVar7 = uVar3 >> 5 ^ (uVar8 - uVar5) - uVar3;
    uVar5 = uVar7 >> 3 ^ (uVar5 - uVar3) - uVar7;
    uVar3 = uVar5 << 10 ^ (uVar3 - uVar7) - uVar5;
    uVar3 = uVar3 >> 0xf ^ uVar7 - (uVar5 + uVar3);
  }
  iVar2 = FUN_1406b1e7e((longlong *)(param_1 + 0x3a8),uVar3);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x3a8);
    lVar4 = 0;
    if ((lVar1 + (longlong)iVar2 * 0x20 != 0) &&
       (plVar6 = (longlong *)(lVar1 + (longlong)iVar2 * 0x20 + 0x10), plVar6 != (longlong *)0x0)) {
      lVar4 = *plVar6 + 0x30;
    }
  }
  return lVar4;
}



// FUNCTION 1406b601d FUN_1406b601d body=26 status=ok
// SIG undefined FUN_1406b601d(void)

void FUN_1406b601d(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1406b6038 FUN_1406b6038 body=122 status=ok
// SIG undefined FUN_1406b6038(void)

void FUN_1406b6038(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1410d14fc(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1406b60b4(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}


