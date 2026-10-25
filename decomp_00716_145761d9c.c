// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145761d9c FUN_145761d9c body=2503 status=ok
// SIG undefined FUN_145761d9c(void)

int * FUN_145761d9c(int *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  void *_Src;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  byte bVar22;
  undefined1 auStack_178 [44];
  int local_14c;
  int *local_148;
  int local_13c;
  undefined8 local_138;
  int local_12c;
  longlong local_128;
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  int local_98;
  undefined4 uStack_94;
  int local_8c;
  longlong *local_88;
  undefined8 uStack_80;
  int local_70;
  char local_6c;
  int local_68;
  undefined1 local_64;
  int local_60;
  char local_5c;
  int local_58;
  undefined1 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar11 = *(longlong *)(param_2 + 8);
  local_14c = param_4;
  local_138 = param_3;
  if (lVar11 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    lVar18 = DAT_14cb848c0 + 0x420;
    lVar3 = *(longlong *)(param_2 + 0x10);
    lVar16 = *(longlong *)(param_2 + 0x18);
    local_88 = (longlong *)0x0;
    uStack_80 = 1;
    FUN_1409e4f7a(&local_88,0);
    *local_88 = lVar18;
    local_88[1] = lVar11;
    *(undefined4 *)(local_88 + 2) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    local_f8 = param_2 + 0x70;
    local_c0 = lVar3 + 8;
    local_c8 = lVar3 + 0x20;
    local_b0 = lVar16 + 8;
    local_b8 = lVar16 + 0x20;
    local_120 = 0;
    local_148 = param_1;
    local_128 = param_2;
    local_100 = lVar3;
    local_f0 = lVar16;
    do {
      lVar11 = (longlong)(int)uStack_80;
      if (lVar11 < 1) goto LAB_1457623ec;
      plVar4 = (longlong *)local_88[lVar11 * 3 + -3];
      lVar3 = local_88[lVar11 * 3 + -2];
      iVar10 = (int)local_88[lVar11 * 3 + -1];
      uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_80 + -1);
      lVar11 = *plVar4;
      if (*(int *)(lVar11 + 0x20) < 1) {
        bVar22 = 0;
      }
      else {
        lVar16 = lVar3 + 8;
        local_a8 = lVar3 + 0x20;
        lVar18 = 0;
        local_108 = lVar16;
        do {
          plVar20 = (longlong *)(lVar18 * 8 + *(longlong *)(lVar11 + 0x18));
          if (lVar3 == 0) {
            local_8c = 1;
            local_13c = iVar10;
LAB_145761f5a:
            plVar21 = (longlong *)*plVar20;
            if ((longlong)(int)plVar21[2] == 0) {
              if ((undefined8 *)*plVar21 == (undefined8 *)0x0) {
                local_a0 = (longlong *)0x0;
              }
              else {
                local_a0 = *(longlong **)*plVar21;
              }
              lVar11 = FUN_140cde484(param_2,&local_a0);
              if (lVar11 == 0) {
                if (*(undefined8 **)*plVar20 == (undefined8 *)0x0) {
                  local_50 = 0;
                }
                else {
                  local_50 = **(undefined8 **)*plVar20;
                }
                FUN_145795b53(&local_a0,&local_50);
                plVar5 = local_a0;
                plVar21 = (longlong *)CONCAT44(uStack_94,local_98);
                if (plVar21 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar21 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*plVar21)(plVar21);
                    LOCK();
                    piVar14 = (int *)((longlong)plVar21 + 0xc);
                    *piVar14 = *piVar14 + -1;
                    UNLOCK();
                    if (*piVar14 == 0) {
                      (**(code **)(*plVar21 + 0x10))(plVar21);
                    }
                  }
                }
                lVar16 = local_108;
                param_2 = local_128;
                if (plVar5 == (longlong *)0x0) goto LAB_145761f19;
              }
              uVar6 = uStack_80;
              iVar15 = (int)uStack_80;
              uVar1 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
              if (uStack_80._4_4_ < uVar1) {
                FUN_1409e4f7a(&local_88,uVar6 & 0xffffffff);
              }
              lVar16 = (longlong)iVar15;
              local_88[lVar16 * 3] = (longlong)plVar20;
              local_88[lVar16 * 3 + 1] = lVar11;
              *(int *)(local_88 + lVar16 * 3 + 2) = local_13c;
              lVar16 = local_108;
            }
            else {
              plVar20 = (longlong *)plVar21[1];
              local_12c = iVar10;
              local_110 = (longlong)(int)plVar21[2];
              local_d8 = plVar20;
              iVar15 = local_13c;
              do {
                lVar11 = *plVar20;
                lVar17 = (ulonglong)*(ushort *)(lVar11 + 0x386) * 0x20;
                local_d0 = plVar20;
                if (*(longlong *)(*(longlong *)(DAT_14cb848c0 + 0x3a8) + 8 + lVar17) != 0) {
                  lVar17 = *(longlong *)(DAT_14cb848c0 + 0x3a8) + lVar17;
                  lVar12 = (longlong)*(int *)(lVar17 + 0x18);
                  if (lVar12 != 0) {
                    lVar19 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar17 + 0x10) + lVar19) != 0) {
                        cVar7 = FUN_1405d595e(local_f8);
                        if (cVar7 != '\0') goto LAB_1457623a2;
                        break;
                      }
                      lVar19 = lVar19 + 8;
                    } while (lVar12 * 8 != lVar19);
                  }
                }
                iVar9 = FUN_14005f6be(lVar11,local_138);
                if (iVar9 < iVar15) {
                  iVar9 = iVar15;
                }
                if ((local_100 == 0) || (lVar17 = FUN_140a2d0dc(lVar11), lVar17 == 0)) {
LAB_145762103:
                  piVar14 = local_148;
                  local_a0 = (longlong *)0x0;
                  local_98 = *(int *)(lVar11 + 0x410);
                  lVar16 = (longlong)local_98;
                  _Src = *(void **)(lVar11 + 0x408);
                  if (lVar16 == 0) {
                    uStack_94 = 0;
LAB_1457625b0:
                    local_58 = iVar9;
                    if (iVar9 < local_14c) {
                      local_58 = local_14c;
                    }
                    local_54 = 1;
                    local_5c = (char)piVar14[1];
                    if (local_5c == '\x01') {
                      iVar10 = *local_148;
                      local_60 = iVar10;
                      FUN_1457605f6(&local_50,local_14c,&local_60,&local_58);
                      if (local_50._4_1_ == '\0') {
                        uVar8 = 0;
                      }
                      else {
LAB_1457626f9:
                        *local_148 = (int)local_50;
                        uVar8 = 1;
                        iVar10 = (int)local_50;
                      }
                      *(undefined1 *)(local_148 + 1) = uVar8;
                    }
                    else {
                      FUN_1457605f6(&local_50,local_14c,&local_60,&local_58);
                      if (local_50._4_1_ != '\0') goto LAB_1457626f9;
                      iVar10 = *local_148;
                    }
                    bVar22 = iVar10 == local_14c;
                    local_120 = CONCAT71((int7)(local_120 >> 8),(byte)local_120 | bVar22);
                  }
                  else {
                    FUN_140c7c212(&local_a0,local_98,0);
                    memcpy(local_a0,_Src,lVar16 << 3);
                    if (local_98 == 0) goto LAB_1457625b0;
                    if (*(longlong *)(lVar11 + 0x268) == 0) {
                      local_118 = 0;
                    }
                    else {
                      local_118 = FUN_140cde484(local_128,lVar11 + 0x268);
                    }
                    if ((((char)piVar14[1] != '\x01') || (*piVar14 <= local_14c)) ||
                       (bVar22 = 8, iVar9 < *piVar14)) {
                      if ((longlong)local_98 == 0) {
                        bVar22 = 0;
                      }
                      else {
                        plVar20 = local_a0 + local_98;
                        plVar21 = local_a0;
                        do {
                          lVar11 = *plVar21;
                          lVar16 = (ulonglong)*(ushort *)(lVar11 + 0x15a) * 0x20;
                          if (*(longlong *)(*(longlong *)(DAT_14cb848c0 + 0x3a8) + 8 + lVar16) != 0)
                          {
                            lVar16 = *(longlong *)(DAT_14cb848c0 + 0x3a8) + lVar16;
                            lVar17 = (longlong)*(int *)(lVar16 + 0x18);
                            if (lVar17 != 0) {
                              lVar12 = 0;
                              do {
                                if (*(longlong *)(*(longlong *)(lVar16 + 0x10) + lVar12) != 0) {
                                  cVar7 = FUN_1405d595e(local_f8);
                                  if (cVar7 != '\0') goto LAB_145762345;
                                  break;
                                }
                                lVar12 = lVar12 + 8;
                              } while (lVar17 * 8 != lVar12);
                            }
                          }
                          iVar10 = FUN_14005f32a(lVar11,local_138);
                          if (iVar10 < iVar9) {
                            iVar10 = iVar9;
                          }
                          if (local_118 == 0) {
LAB_14576221c:
                            if (((local_f0 != 0) && (lVar11 = FUN_14087df18(lVar11), lVar11 != 0))
                               && (*(longlong *)(lVar11 + 0x208) != 0)) {
                              lVar17 = FUN_140c7c082(local_b0);
                              lVar16 = lVar17 + 0x30;
                              if (lVar17 == 0) {
                                lVar16 = local_b8;
                              }
                              cVar7 = FUN_140cde234(lVar16,lVar11 + 0x208);
                              if (cVar7 == '\0') goto LAB_145762345;
                              local_50 = CONCAT44(local_50._4_4_,1);
                              cVar7 = FUN_140c7bf14(local_f0,lVar11 + 0x208,local_138,&local_50);
                              iVar15 = (int)local_50;
                              if ((int)local_50 <= iVar10) {
                                iVar15 = iVar10;
                              }
                              if (cVar7 != '\0') {
                                iVar10 = iVar15;
                              }
                            }
                            iVar15 = local_14c;
                            local_68 = iVar10;
                            if (iVar10 < local_14c) {
                              local_68 = local_14c;
                            }
                            local_64 = 1;
                            local_6c = (char)local_148[1];
                            if (local_6c == '\x01') {
                              iVar10 = *local_148;
                              local_70 = iVar10;
                              uVar13 = FUN_1457605f6(&local_50,local_14c,&local_70,&local_68);
                              iVar15 = local_14c;
                              if (local_50._4_1_ != '\0') goto LAB_145762314;
                              piVar14 = (int *)0x0;
LAB_145762326:
                              *(char *)(local_148 + 1) = (char)piVar14;
                            }
                            else {
                              uVar13 = FUN_1457605f6(&local_50,local_14c,&local_70,&local_68);
                              if (local_50._4_1_ != '\0') {
LAB_145762314:
                                *local_148 = (int)local_50;
                                piVar14 = (int *)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                                iVar10 = (int)local_50;
                                goto LAB_145762326;
                              }
                              iVar10 = *local_148;
                              piVar14 = local_148;
                            }
                            if (iVar10 == iVar15) {
                              bVar22 = 1;
                              local_120 = CONCAT71((int7)((ulonglong)piVar14 >> 8),1);
                              goto LAB_14576236b;
                            }
                          }
                          else if (*(longlong *)(lVar11 + 0x140) != 0) {
                            local_e0 = lVar11 + 0x140;
                            local_e8 = local_118 + 0x20;
                            lVar17 = FUN_140c7c082(local_118 + 8);
                            lVar16 = lVar17 + 0x30;
                            if (lVar17 == 0) {
                              lVar16 = local_e8;
                            }
                            cVar7 = FUN_140cde234(lVar16,local_e0);
                            if (cVar7 != '\0') {
                              local_50 = CONCAT44(local_50._4_4_,1);
                              cVar7 = FUN_1488ccc98(local_118,
                                                    (ulonglong)*(ushort *)(lVar11 + 0x158) * 0x20 +
                                                    *(longlong *)(DAT_14cb848c0 + 0x3a8),local_138,
                                                    &local_50);
                              iVar15 = (int)local_50;
                              if ((int)local_50 <= iVar10) {
                                iVar15 = iVar10;
                              }
                              if (cVar7 != '\0') {
                                iVar10 = iVar15;
                              }
                              goto LAB_14576221c;
                            }
                          }
LAB_145762345:
                          plVar21 = plVar21 + 1;
                        } while (plVar21 != plVar20);
                        bVar22 = 0;
                      }
                    }
                  }
LAB_14576236b:
                  param_2 = local_128;
                  param_1 = local_148;
                  if (local_a0 != (longlong *)0x0) {
                    FUN_1400020a8(local_a0);
                  }
                  lVar16 = local_108;
                  iVar10 = local_12c;
                  iVar15 = local_13c;
                  if ((bVar22 & 7) != 0) goto LAB_1457623d7;
                }
                else {
                  lVar12 = FUN_140a2d0dc(lVar11);
                  lVar19 = FUN_140c7c082(local_c0);
                  lVar17 = lVar19 + 0x30;
                  if (lVar19 == 0) {
                    lVar17 = local_c8;
                  }
                  cVar7 = FUN_140cde234(lVar17,lVar12 + 0xf0);
                  iVar10 = local_12c;
                  iVar15 = local_13c;
                  if (cVar7 != '\0') {
                    local_a0 = (longlong *)CONCAT44(local_a0._4_4_,1);
                    cVar7 = FUN_140c7bf14(local_100,lVar12 + 0xf0,local_138,&local_a0);
                    if ((int)local_a0 <= iVar9) {
                      local_a0._0_4_ = iVar9;
                    }
                    if (cVar7 != '\0') {
                      iVar9 = (int)local_a0;
                    }
                    goto LAB_145762103;
                  }
                }
LAB_1457623a2:
                plVar20 = local_d0 + 1;
              } while (plVar20 != local_d8 + local_110);
            }
          }
          else {
            lVar11 = *plVar20;
            lVar12 = FUN_140c7c082(lVar16);
            lVar17 = lVar12 + 0x30;
            if (lVar12 == 0) {
              lVar17 = local_a8;
            }
            cVar7 = FUN_140cde234(lVar17,lVar11);
            if (cVar7 != '\0') {
              local_8c = 1;
              cVar7 = FUN_140c7bf14(lVar3,*plVar20,local_138,&local_8c);
              local_13c = iVar10;
              if ((cVar7 != '\0') && (local_13c = local_8c, local_8c <= iVar10)) {
                local_13c = iVar10;
              }
              goto LAB_145761f5a;
            }
          }
LAB_145761f19:
          lVar18 = lVar18 + 1;
          lVar11 = *plVar4;
        } while (lVar18 < *(int *)(lVar11 + 0x20));
        bVar22 = 0;
        param_1 = local_148;
      }
LAB_1457623d7:
    } while (bVar22 == 0);
    if (((local_120 & 1) == 0) && ((char)param_1[1] == '\x01')) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
LAB_1457623ec:
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145762764 FUN_145762764 body=495 status=ok
// SIG undefined FUN_145762764(void)

void FUN_145762764(longlong param_1,byte param_2)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_1409e7438();
  if (*(char *)(lVar3 + 0xc0) == '\x01') {
    QueryPerformanceCounter(&local_48);
    dVar1 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
    if (*(double *)(param_1 + 0x88) + *(double *)(lVar3 + 0xd0) <= dVar1) {
      FUN_1446f470e(&local_50,L"InputMethodThrashing",1);
      if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
        uVar2 = (uint)((ulonglong)local_50 >> 0x10);
        uVar5 = (uint)local_50 & 0xffff;
        lVar4 = param_1 + 0xd8;
        if (*(longlong *)(param_1 + 0xe0) != 0) {
          lVar4 = *(longlong *)(param_1 + 0xe0);
        }
        iVar6 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0xe8) - 1U &
                                 (int)((ulonglong)local_50 >> 0x20) +
                                 ((uint)local_50 << 0x10 | uVar5) + (uVar2 << 0x13 | uVar2 & 0xffff)
                                 + (uVar5 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar6 * 0x14) == local_50) {
              FUN_1446f470e(&local_58,L"InputMethodThrashing",1);
              FUN_143ae503e(param_1,local_58,0);
              break;
            }
            iVar6 = *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar6 * 0x14 + 0xc);
          } while (iVar6 != -1);
        }
      }
      if ((param_2 < 2) && (dVar1 - *(double *)(param_1 + 0x80) < *(double *)(lVar3 + 200))) {
        iVar6 = *(int *)(param_1 + 0x78);
        *(int *)(param_1 + 0x78) = iVar6 + 1;
        if (iVar6 < *(int *)(lVar3 + 0xc4)) goto LAB_14576283b;
        *(double *)(param_1 + 0x88) = dVar1;
        FUN_1446f470e(&local_60,L"InputMethodThrashing",1);
        FUN_143ae503e(param_1,local_60,1);
      }
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
  }
LAB_14576283b:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145762954 FUN_145762954 body=358 status=ok
// SIG undefined FUN_145762954(void)

undefined8 * FUN_145762954(undefined8 *param_1)

{
  FUN_14118b488();
  *param_1 = &PTR_FUN_149e357e0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x1000000000;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x57) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x62));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x62),4000);
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 2;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x79));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x79),4000);
  return param_1;
}



// FUNCTION 145762ac0 FUN_145762ac0 body=575 status=ok
// SIG undefined FUN_145762ac0(void)

void FUN_145762ac0(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *pvVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  ulonglong uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar7 + 0x238))(plVar7,&local_61);
  local_78 = (void *)0x0;
  uStack_70 = 0;
  plVar7 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  local_88 = (void *)0x0;
  local_58 = 0;
  (**(code **)(*plVar7 + 0x1c8))(plVar7,&local_58,&local_88);
  FUN_1409ee323(local_58,local_88,&local_78);
  local_88 = (void *)0x0;
  uStack_80 = 0;
  plVar7 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  local_58 = 0;
  local_60 = 0;
  (**(code **)(*plVar7 + 0x1c8))(plVar7,&local_60,&local_58);
  FUN_1409ee323(local_60,local_58,&local_88);
  plVar7 = (longlong *)(**(code **)(*param_2 + 8))(param_2,3);
  (**(code **)(*plVar7 + 0x220))(plVar7,&local_58);
  cVar6 = (**(code **)(*param_2 + 0x30))(param_2);
  pvVar4 = local_88;
  if (cVar6 == '\0') {
    pcVar2 = *(code **)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 8);
    uVar5 = (undefined4)local_58;
    local_98 = (void *)0x0;
    lVar8 = (longlong)(int)uStack_80;
    local_90 = (int)uStack_80;
    if (lVar8 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,uStack_80 & 0xffffffff,0);
      memcpy(local_98,pvVar4,lVar8 * 2);
    }
    pvVar4 = local_78;
    local_a8 = (void *)0x0;
    lVar8 = (longlong)(int)uStack_70;
    local_a0 = (int)uStack_70;
    if (lVar8 == 0) {
      local_9c = 0;
    }
    else {
      FUN_1446dd670(&local_a8,uStack_70 & 0xffffffff,0);
      memcpy(local_a8,pvVar4,lVar8 * 2);
    }
    local_b8 = uVar5;
    (*pcVar2)(iVar1 + lVar3,local_61,&local_a8,&local_98);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145762d1c FUN_145762d1c body=159 status=ok
// SIG undefined FUN_145762d1c(void)

void FUN_145762d1c(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14c9a5fa0;
  if (param_1 <= (int)DAT_14c9a5fa0) {
    if (DAT_14c9a5fa4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14c9a5fa0) {
        uVar2 = DAT_14c9a5fa0;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14c9a5fa0 * 3) >> 3) + (longlong)(int)DAT_14c9a5fa0 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    DAT_14c9a5fa4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9a5f98,param_1,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145762dbc FUN_145762dbc body=61 status=ok
// SIG undefined FUN_145762dbc(void)

void FUN_145762dbc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    lVar1 = param_1;
  }
  FUN_144705e08(lVar1,*(undefined4 *)(param_1 + 0xe8));
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145762df9 thunk_FUN_1409ffe1d body=5 status=ok
// SIG undefined thunk_FUN_1409ffe1d(void)

undefined8 thunk_FUN_1409ffe1d(void)

{
  return DAT_14c951640;
}



// FUNCTION 145762dfe FUN_145762dfe body=321 status=ok
// SIG undefined FUN_145762dfe(void)

undefined8 FUN_145762dfe(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar7 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar8 = (ulonglong *)((longlong)iVar5 * 0x20 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar8;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_145762f40(param_1,(int)*puVar7);
          return 1;
        }
        iVar5 = (int)puVar8[3];
        puVar7 = puVar8 + 3;
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 145762f40 FUN_145762f40 body=89 status=ok
// SIG undefined FUN_145762f40(void)

void FUN_145762f40(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145762f9a();
  return;
}



// FUNCTION 145762f9a FUN_145762f9a body=54 status=ok
// SIG undefined FUN_145762f9a(void)

void FUN_145762f9a(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145762fd0(param_1,param_2);
  return;
}



// FUNCTION 145762fd0 FUN_145762fd0 body=116 status=ok
// SIG undefined FUN_145762fd0(void)

void FUN_145762fd0(longlong *param_1,int param_2)

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



// FUNCTION 145763044 FUN_145763044 body=79 status=ok
// SIG undefined FUN_145763044(void)

void FUN_145763044(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a0f760();
  local_28 = 0x4d775a68;
  uStack_24 = 0x2a3a4a24;
  uStack_20 = 0xaa3060fe;
  uStack_1c = 0xf5171c13;
  FUN_1448a256a(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145763094 FUN_145763094 body=378 status=ok
// SIG undefined FUN_145763094(void)

void FUN_145763094(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,longlong *param_6)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_2d8 [32];
  undefined2 *local_2b8;
  undefined2 *local_2b0;
  undefined2 *local_2a8;
  undefined4 local_29c;
  undefined2 *local_298;
  int local_290;
  undefined2 *local_288;
  int local_280;
  undefined1 local_278 [256];
  longlong local_178;
  undefined8 local_170;
  undefined1 local_160 [256];
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_29c = param_4;
  FUN_14317d9b0(&local_288,param_1,param_5);
  uVar1 = DAT_14ca77418;
  local_2a8 = &DAT_149dfb77a;
  if ((int)param_6[1] != 0) {
    local_2a8 = (undefined2 *)*param_6;
  }
  puVar2 = &DAT_149dfb77a;
  if (local_280 != 0) {
    puVar2 = local_288;
  }
  FUN_144a81018(local_160,param_3);
  FUN_144a81018(local_278,param_2);
  local_2b8 = (undefined2 *)CONCAT44(local_2b8._4_4_,local_29c);
  local_2b0 = puVar2;
  FUN_140002266(&local_298,L"%s failed \n at %s:%u \n with error %s\n%s",local_170,local_58);
  local_2b8 = &DAT_149dfb77a;
  if (local_290 != 0) {
    local_2b8 = local_298;
  }
  FUN_14317d3fe(uVar1,param_1,param_5,0);
  if (local_298 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_288 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145763210 FUN_145763210 body=96 status=ok
// SIG undefined FUN_145763210(void)

void FUN_145763210(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 145763270 FUN_145763270 body=227 status=ok
// SIG undefined FUN_145763270(void)

void FUN_145763270(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_144a53f06();
  if (((cVar2 == '\0') && (*(longlong *)(param_1 + 0x1e0) != 0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x1e0) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x1e0,0xff);
  }
  if (*(longlong *)(param_1 + 0x9c8) != 0) {
    FUN_140a1e592();
  }
  FUN_145763368(param_1,2);
  *(undefined1 *)(param_1 + 0x220) = 1;
  FUN_140a1e722(param_1,&local_20,0);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20,1);
    }
  }
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145763368 FUN_145763368 body=98 status=ok
// SIG undefined FUN_145763368(void)

void FUN_145763368(longlong param_1,char param_2)

{
  char cVar1;
  
  cVar1 = '\x02';
  if (DAT_14c99384c == 0) {
    cVar1 = param_2;
  }
  if (cVar1 != *(char *)(param_1 + 0x6a)) {
    if (((cVar1 == '\x02') && (*(longlong *)(param_1 + 0x1e0) != 0)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1e0) + 0xa0) & 1) == 0)) {
      FUN_14009fd82(DAT_14c82b500,param_1 + 0x1e0,0xff);
    }
    *(char *)(param_1 + 0x6a) = cVar1;
  }
  return;
}



// FUNCTION 1457633ca thunk_FUN_140ae50e2 body=5 status=ok
// SIG undefined thunk_FUN_140ae50e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140ae50e2(uint *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  
  uVar12 = param_1[1];
  plVar13 = param_2;
  lVar10 = _DAT_00001ce8;
  if (((uVar12 == 0) || (uVar15 = *param_1, (int)uVar15 < 0)) || (DAT_14c9647dc <= (int)uVar15)) {
LAB_140ae53c5:
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar13 = (longlong *)
              ((ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
    if (((plVar13 == (longlong *)0x0) || (*(uint *)(plVar13 + 2) != uVar12)) ||
       ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) {
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar13;
    }
    lVar10 = *(longlong *)(&DAT_00001ce8 + lVar10);
    plVar13 = (longlong *)
              ((ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
    if (((plVar13 == (longlong *)0x0) || (*(uint *)(plVar13 + 2) != uVar12)) ||
       ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_140ae53c5;
    plVar11 = (longlong *)*plVar13;
  }
  cVar4 = (**(code **)(*plVar11 + 0xe18))();
  if (cVar4 == '\0') {
    return;
  }
  if ((param_2 == (longlong *)0x0) || (*(byte *)(lVar10 + 0x178) < 2)) {
    lVar16 = FUN_140153468(param_1);
    if (param_2 != (longlong *)0x0) goto LAB_140ae5216;
LAB_140ae5257:
    lVar9 = FUN_140153468(param_1);
    bVar14 = *(byte *)(lVar9 + 0xfa) & 1;
    if ((((*(char *)(lVar10 + 0x178) == '\x03') ||
         (lVar10 = FUN_140153468(param_1), (*(byte *)(lVar10 + 0x114) & 1) != 0)) &&
        (*(longlong *)(param_1 + 2) != 0)) &&
       ((plVar11 = *(longlong **)(param_1 + 4), plVar11 != (longlong *)0x0 && (0 < (int)plVar11[1]))
       )) {
      iVar5 = (int)plVar11[1];
      do {
        if (iVar5 == 0) {
          plVar13 = param_2;
          (**(code **)(_DAT_00000000 + 0xe0))(0,param_2,param_3);
          goto LAB_140ae53e2;
        }
        LOCK();
        iVar3 = (int)plVar11[1];
        bVar17 = iVar5 == iVar3;
        if (bVar17) {
          *(int *)(plVar11 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar17);
      plVar13 = param_2;
      (**(code **)(**(longlong **)(param_1 + 2) + 0xe0))
                (*(longlong **)(param_1 + 2),param_2,param_3);
LAB_140ae5384:
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  else {
    uVar12 = *(uint *)((longlong)param_2 + 0xc);
    param_1[0x8c] = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    uVar12 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar15 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar15);
      }
      LOCK();
      uVar12 = *(uint *)(lVar16 + 0x10);
      bVar17 = uVar12 == 0;
      if (bVar17) {
        *(uint *)(lVar16 + 0x10) = uVar15;
        uVar12 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar12 = uVar15;
      }
    }
    param_1[0x8d] = uVar12;
    lVar16 = FUN_140153468(param_1);
LAB_140ae5216:
    plVar13 = (longlong *)FUN_14069ce7c();
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x288))(param_2,plVar13);
    if (puVar6 == (undefined8 *)0x0) goto LAB_140ae5257;
    uVar7 = FUN_14069ce7c();
    puVar8 = (undefined8 *)FUN_144718840(puVar6,uVar7);
    plVar13 = (longlong *)(uVar7 & 0xffffffffffffff00);
    if (puVar8 == (undefined8 *)0x0 || puVar6 == puVar8) goto LAB_140ae5257;
    plVar13 = (longlong *)*puVar8;
    lVar9 = (*(code *)plVar13[2])(puVar8);
    if ((*(char *)(lVar9 + 0x18) != '\x01') || (*(char *)(lVar9 + 0x40) == '\0')) {
      lVar9 = FUN_140153468(param_1);
      uVar12 = *(uint *)(lVar9 + 0xf8) & 0x20000;
      bVar14 = (byte)(uVar12 >> 0x11);
      if (uVar12 != 0) {
        *(undefined1 *)(param_1 + 0x8e) = 1;
      }
      if ((((*(char *)(lVar10 + 0x178) != '\x03') &&
           (lVar10 = FUN_140153468(param_1), (*(byte *)(lVar10 + 0x114) & 1) == 0)) ||
          (*(longlong *)(param_1 + 2) == 0)) ||
         ((plVar11 = *(longlong **)(param_1 + 4), plVar11 == (longlong *)0x0 ||
          ((int)plVar11[1] < 1)))) goto LAB_140ae53e2;
      iVar5 = (int)plVar11[1];
      do {
        if (iVar5 == 0) {
          plVar13 = param_2;
          (**(code **)(_DAT_00000000 + 0xd8))(0,param_2,param_3);
          goto LAB_140ae53e2;
        }
        LOCK();
        iVar3 = (int)plVar11[1];
        bVar17 = iVar5 == iVar3;
        if (bVar17) {
          *(int *)(plVar11 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar17);
      plVar13 = param_2;
      (**(code **)(**(longlong **)(param_1 + 2) + 0xd8))
                (*(longlong **)(param_1 + 2),param_2,param_3);
      goto LAB_140ae5384;
    }
    bVar14 = 0;
  }
LAB_140ae53e2:
  lVar10 = FUN_140153468(param_1);
  if ((lVar10 != 0) && (lVar10 = FUN_140153468(param_1), lVar10 == lVar16)) {
    if (((((param_1[0xa6] & 0x40) == 0) &&
         (((lVar10 = FUN_140153468(param_1), (*(byte *)(lVar10 + 0xf8) & 0x20) != 0 &&
           (param_1[0x3b] != 0)) && (uVar12 = param_1[0x3a], -1 < (int)uVar12)))) &&
        ((((int)uVar12 < DAT_14c9647dc &&
          (plVar13 = (longlong *)
                     ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
          plVar13 != (longlong *)0x0)) && (*(uint *)(plVar13 + 2) == param_1[0x3b])))) &&
       ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
        plVar11 = (longlong *)*plVar13;
      }
      else {
        plVar11 = (longlong *)0x0;
      }
      if (plVar11 == param_2) {
        *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 0x40;
        goto LAB_140ae547e;
      }
    }
    if (bVar14 != 0) {
LAB_140ae547e:
      lVar10 = FUN_140153468(param_1);
      bVar14 = *(byte *)(lVar10 + 0xa0);
      lVar10 = FUN_140153468(param_1);
      uVar7 = CONCAT71((int7)((ulonglong)plVar13 >> 8),*(char *)(lVar10 + 0xa0) * '\x02') &
              0xffffffffffffff04;
      FUN_141105826(param_1,CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 | bVar14 & 1));
      return;
    }
  }
  return;
}



// FUNCTION 1457633d0 FUN_1457633d0 body=192 status=ok
// SIG undefined FUN_1457633d0(void)

undefined8 FUN_1457633d0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x20) == '\a') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_48,param_1,7);
  if (local_28 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = FUN_14479d2ce(local_48);
    uVar2 = (uint)local_28;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457634aa FUN_1457634aa body=263 status=ok
// SIG undefined FUN_1457634aa(void)

void FUN_1457634aa(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1 + 0x358;
  lVar2 = FUN_140a257f2(lVar3);
  if (lVar2 != 0) {
    lVar2 = FUN_140a257f2(lVar3);
    if (*(char *)(lVar2 + 0x80) == '\x01') {
      lVar2 = FUN_140a257f2(lVar3);
      param_2 = param_2 & 0xff;
      iVar4 = (int)param_2;
      if (iVar4 < *(int *)(lVar2 + 0x68)) {
        lVar2 = FUN_140a257f2(lVar3);
        lVar2 = *(longlong *)
                 (*(longlong *)(lVar2 + 0x60) + (ulonglong)(uint)(iVar4 << 7) + param_2 * 8);
        if (*(longlong *)(param_1 + 0x120) != lVar2) {
          lVar1 = param_1 + 0x128;
          *(longlong *)(param_1 + 0x120) = lVar2;
          FUN_140a26446(lVar1);
          lVar3 = FUN_140a257f2(lVar3);
          FUN_141026712(lVar1,*(longlong *)(lVar3 + 0x60) +
                              (ulonglong)(uint)(iVar4 << 7) + param_2 * 8 + 0x18);
          local_38 = *(undefined8 *)(param_1 + 0x40);
          local_30 = *(longlong *)(param_1 + 0x48);
          if (local_30 != 0) {
            LOCK();
            *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
            UNLOCK();
          }
          FUN_140a26a1e(lVar1,&local_38);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457635b2 FUN_1457635b2 body=305 status=ok
// SIG undefined FUN_1457635b2(void)

void FUN_1457635b2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [32];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_2 != 0) {
    lVar4 = FUN_14479d2ce(*param_2 + 0x30);
    if ((lVar4 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
      local_e8 = 0;
      local_e0 = 0;
      memset(local_d8,0,0xa0);
      local_f8 = &local_e8;
      FUN_1411cff2e(param_1 + 0x18,param_1 + 8,lVar4,local_d8);
      if (local_78 != 0) {
        if (local_68 == (longlong *)0x0) {
          local_68 = local_58;
        }
        (**(code **)(*local_68 + 0x10))();
      }
      if (local_b8 != 0) {
        if (local_a8 == (longlong *)0x0) {
          local_a8 = local_98;
        }
        (**(code **)(*local_a8 + 0x10))();
      }
      FUN_1449db362(&local_e8);
    }
  }
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
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457636e4 FUN_1457636e4 body=58 status=ok
// SIG undefined FUN_1457636e4(void)

void FUN_1457636e4(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[1] = &PTR_FUN_14b1d7d10;
    *(undefined8 *)((longlong)param_1 + 0x49) = 0;
    *(undefined8 *)((longlong)param_1 + 0x51) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1 = param_1 + 0xe;
  }
  return;
}



// FUNCTION 14576371e FUN_14576371e body=143 status=ok
// SIG undefined FUN_14576371e(void)

void FUN_14576371e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457637ae FUN_1457637ae body=33 status=ok
// SIG undefined FUN_1457637ae(void)

undefined4 FUN_1457637ae(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1457637d0();
  FUN_145763870(param_1);
  return uVar1;
}



// FUNCTION 1457637d0 FUN_1457637d0 body=158 status=ok
// SIG undefined FUN_1457637d0(void)

void FUN_1457637d0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140880bb4();
  lVar1 = FUN_14479d2ce(param_1 + 0x2d);
  if (lVar1 != 0) {
    local_18 = *(undefined8 *)(param_1[6] + 0x18);
    FUN_1400bc96c(lVar1 + 0x1218);
  }
  lVar1 = FUN_140a29fb0(param_1[7]);
  if (lVar1 != 0) {
    local_18 = *(undefined8 *)(param_1[6] + 0x18);
    FUN_1400bc96c(lVar1);
  }
  FUN_145763bda(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145763865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145763870 FUN_145763870 body=210 status=ok
// SIG undefined FUN_145763870(void)

void FUN_145763870(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x178) = 0;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (lVar1 = *(longlong *)(&DAT_00006850 + lVar1), lVar1 != 0)) {
      local_48 = FUN_148e170b2;
      local_40 = 0;
      FUN_145763a2e(local_38,param_1);
      FUN_145763944(lVar1 + 0x41e8,&local_48,local_38);
      FUN_1449db362(local_38);
      *(code **)(param_1 + 0x178) = local_48;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145763944 FUN_145763944 body=216 status=ok
// SIG undefined FUN_145763944(void)

undefined8 * FUN_145763944(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 145763a2e FUN_145763a2e body=428 status=ok
// SIG undefined FUN_145763a2e(void)

longlong * FUN_145763a2e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145763b0e:
    *puVar5 = &PTR_LAB_14b972de0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9a5b30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145763b0e;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b972de0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9a5b30;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145763bda FUN_145763bda body=1217 status=ok
// SIG undefined FUN_145763bda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145763bda(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_128 = 0;
  uStack_120 = 0xbf80000000000000;
  local_118 = 0xc4750000;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  FUN_14576409c(0,&local_e0,&DAT_14cb8cee0);
  plVar2 = *(longlong **)(param_1 + 0x38);
  lVar6 = plVar2[0x2f];
  if (((char)lVar6 != '\x03') && (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c))) {
    uVar5 = (uint)((ulonglong)DAT_14cb8ced0 >> 0x10);
    uVar11 = (uint)DAT_14cb8ced0 & 0xffff;
    lVar10 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x88);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x90) - 1U &
                              (int)((ulonglong)DAT_14cb8ced0 >> 0x20) +
                              ((uint)DAT_14cb8ced0 << 0x10 | uVar11) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar10 = *(longlong *)(param_1 + 0x48) + (longlong)iVar9 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar9 * 0x38) == DAT_14cb8ced0)
        {
          if ((lVar10 != 0) && (lVar10 + 8 != 0)) {
            uStack_90 = uStack_d8;
            local_88 = local_d0;
            local_98 = (undefined8 *)(local_e0 & 0xffffffff00000000);
            uStack_80 = DAT_14c8464f8;
            uStack_78 = DAT_14c846500;
            uStack_70 = DAT_14c846508;
            local_68 = (undefined4)DAT_14c8464e0;
            uStack_64 = DAT_14c8464e0._4_4_;
            uStack_60 = (undefined4)DAT_14c8464e8;
            uStack_5c = DAT_14c8464e8._4_4_;
            local_58 = DAT_14c8464f0;
            FUN_144a7b7fe(lVar10 + 8,&local_148);
            (**(code **)(*plVar2 + 0x528))(plVar2,&local_180,&local_198);
            local_138 = local_138 - (double)(float)local_198;
            local_198 = 0;
            uStack_190 = 0;
            local_188 = 0;
            local_1c8 = &local_198;
            FUN_140a2a224(&local_180,plVar2,&local_98,&local_148);
            *(undefined8 *)(param_1 + 0x158) = local_150;
            *(undefined8 *)(param_1 + 0x148) = local_160;
            *(undefined8 *)(param_1 + 0x150) = uStack_158;
            *(double *)(param_1 + 0x138) = local_170;
            *(undefined8 *)(param_1 + 0x140) = uStack_168;
            *(undefined4 *)(param_1 + 0x128) = local_180;
            *(undefined4 *)(param_1 + 300) = uStack_17c;
            *(undefined4 *)(param_1 + 0x130) = uStack_178;
            *(undefined4 *)(param_1 + 0x134) = uStack_174;
            goto LAB_145763dee;
          }
          break;
        }
        iVar9 = *(int *)(lVar10 + 0x30);
      } while (iVar9 != -1);
    }
  }
  puVar8 = (undefined8 *)FUN_145764230(param_1,&DAT_14cb8cec8,0);
  if (puVar8 != (undefined8 *)0x0) {
    FUN_140a2a102(&local_98,plVar2,&local_e0,puVar8);
    cVar7 = FUN_140a2a0f2(&local_98);
    if (cVar7 != '\0') {
      uVar4 = FUN_140ed0982(param_1,&DAT_14cb8cec0,0);
      cVar7 = FUN_1457642d0(plVar2,&local_98);
      if ((cVar7 != '\0') &&
         (local_1c8 = puVar8, cVar7 = FUN_145764462(plVar2,&local_98,&local_e0,uVar4), cVar7 != '\0'
         )) {
        *(ulonglong *)(param_1 + 0x158) = CONCAT44(uStack_64,local_68);
        *(undefined8 *)(param_1 + 0x148) = uStack_78;
        *(undefined8 *)(param_1 + 0x150) = uStack_70;
        *(double *)(param_1 + 0x138) = local_88;
        *(undefined8 *)(param_1 + 0x140) = uStack_80;
        *(undefined4 *)(param_1 + 0x128) = (undefined4)local_98;
        *(undefined4 *)(param_1 + 300) = local_98._4_4_;
        *(undefined4 *)(param_1 + 0x130) = (undefined4)uStack_90;
        *(undefined4 *)(param_1 + 0x134) = uStack_90._4_4_;
      }
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x128);
  cVar7 = FUN_140a2a0f2(puVar1);
  if (cVar7 == '\0') {
    local_1b8 = _DAT_14c9ab190;
    uStack_1b4 = uRam000000014c9ab194;
    uStack_1b0 = _DAT_14c9ab198;
    uStack_1ac = uRam000000014c9ab19c;
    local_1a8 = DAT_14c9ab1a0;
    FUN_145764874(param_1,&local_180,&DAT_14cb8ced8);
    if (((double)CONCAT44(uStack_17c,local_180) ==
         (double)CONCAT44(uRam000000014c9ab194,_DAT_14c9ab190)) &&
       (!NAN((double)CONCAT44(uStack_17c,local_180)) &&
        !NAN((double)CONCAT44(uRam000000014c9ab194,_DAT_14c9ab190)))) {
      if (((double)CONCAT44(uStack_174,uStack_178) ==
           (double)CONCAT44(uRam000000014c9ab19c,_DAT_14c9ab198)) &&
         (!NAN((double)CONCAT44(uStack_174,uStack_178)) &&
          !NAN((double)CONCAT44(uRam000000014c9ab19c,_DAT_14c9ab198)))) {
        if ((local_170 == DAT_14c9ab1a0) && (!NAN(local_170) && !NAN(DAT_14c9ab1a0)))
        goto LAB_145763f1c;
      }
    }
    local_1c8 = &local_148;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0.0;
    FUN_140a2a224(&local_98,plVar2,&local_e0,&local_180);
    *(ulonglong *)(param_1 + 0x158) = CONCAT44(uStack_64,local_68);
    *(undefined8 *)(param_1 + 0x148) = uStack_78;
    *(undefined8 *)(param_1 + 0x150) = uStack_70;
    *(double *)(param_1 + 0x138) = local_88;
    *(undefined8 *)(param_1 + 0x140) = uStack_80;
    *puVar1 = (undefined4)local_98;
    *(undefined4 *)(param_1 + 300) = local_98._4_4_;
    *(undefined4 *)(param_1 + 0x130) = (undefined4)uStack_90;
    *(undefined4 *)(param_1 + 0x134) = uStack_90._4_4_;
  }
LAB_145763f1c:
  if ((char)lVar6 == '\x03') {
    FUN_140a2a4d0(puVar1,&local_180);
    uStack_80 = CONCAT62(uStack_80._2_6_,0x18);
    local_98 = (undefined8 *)CONCAT44(uStack_17c,local_180);
    uStack_90 = CONCAT44(uStack_174,uStack_178);
    local_88 = local_170;
    uStack_78 = CONCAT71(uStack_78._1_7_,4);
    FUN_1408834b4(param_1,&DAT_14cb8ced0,&local_98);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)uStack_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar8 = &local_98;
      if (0x18 < (ushort)uStack_80) {
        puVar8 = local_98;
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < (ushort)uStack_80) {
      FUN_1400020a8(local_98);
    }
  }
LAB_145763dee:
  if ((local_50 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14576409c FUN_14576409c body=196 status=ok
// SIG undefined FUN_14576409c(void)

undefined8 *
FUN_14576409c(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar2 = *param_3;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar3 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38) == lVar2) {
          if ((lVar3 != 0) && (lVar3 + 8 != 0)) {
            FUN_145764160(lVar3 + 8,param_2,param_4);
            return param_2;
          }
          break;
        }
        iVar6 = *(int *)(lVar3 + 0x30);
      } while (iVar6 != -1);
    }
  }
  puVar4 = param_2;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_2;
}



// FUNCTION 145764160 FUN_145764160 body=207 status=ok
// SIG undefined FUN_145764160(void)

undefined8 * FUN_145764160(undefined8 *param_1,undefined8 *param_2,undefined8 ***param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_78 [40];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 4) == '\x0f') {
    puVar3 = (undefined8 *)*param_1;
    for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  FUN_1400b56fe(local_50,param_1,0xf);
  if (local_30 != 0) {
    param_3 = (undefined8 ***)local_50[0];
  }
  puVar3 = param_2;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar4 = local_50;
    if (0x18 < local_38) {
      pppuVar4 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar4);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145764230 FUN_145764230 body=160 status=ok
// SIG undefined FUN_145764230(void)

undefined8 FUN_145764230(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x88);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38) == lVar1) {
          if (lVar4 == 0) {
            return param_3;
          }
          if (lVar4 + 8 == 0) {
            return param_3;
          }
          uVar3 = FUN_1457633d0(lVar4 + 8,param_3);
          return uVar3;
        }
        iVar6 = *(int *)(lVar4 + 0x30);
      } while (iVar6 != -1);
    }
  }
  return param_3;
}



// FUNCTION 1457642d0 FUN_1457642d0 body=401 status=ok
// SIG undefined FUN_1457642d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1457642d0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_d8 [32];
  float local_b8 [2];
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  float local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    FUN_14070cbf4(&local_50,param_1);
    if (local_50 == 0) {
      uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
    else {
      (**(code **)(*param_1 + 0x528))(param_1,local_98,local_b8);
      local_70 = 500.0;
      local_68 = _DAT_14cb8cc38;
      uStack_64 = uRam000000014cb8cc3c;
      uStack_60 = _DAT_14cb8cc40;
      uStack_5c = uRam000000014cb8cc44;
      local_58 = DAT_14cb8cc48;
      FUN_144a540c6(local_50,local_b8);
      local_90 = local_b0;
      local_88 = (undefined4)local_a8;
      uStack_84 = local_a8._4_4_;
      uStack_80 = uStack_a0;
      uStack_7c = uStack_9c;
      local_a8 = 0;
      local_78 = *(undefined8 *)(local_50 + 0x440);
      FUN_140a2a4d0(param_2,&local_68);
      local_58 = local_58 - (double)local_b8[0];
      local_70 = local_b8[0];
      uVar3 = FUN_14488ab98(local_98,local_b8,0);
      uVar4 = (ulonglong)uVar3;
      plVar2 = (longlong *)CONCAT44(uStack_7c,uStack_80);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_48 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145764462 FUN_145764462 body=987 status=ok
// SIG undefined FUN_145764462(void)

ulonglong FUN_145764462(longlong param_1,double *param_2,longlong param_3,float param_4,
                       undefined8 param_5)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  float fVar6;
  double dVar7;
  undefined1 auStack_298 [32];
  double *local_278;
  double local_270;
  double local_268;
  double local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  double local_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  double local_230;
  char local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  undefined8 uStack_118;
  double local_110;
  undefined1 local_100 [48];
  longlong local_d0;
  double local_c0;
  double local_b8;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if ((param_1 == 0) || (lVar3 = FUN_1447210f0(), lVar3 == 0)) {
    uVar4 = 0;
    goto LAB_145764761;
  }
  local_80 = 0;
  local_74 = 8;
  local_240 = 0.0;
  FUN_14485c47a(&local_240,param_1);
  local_c0 = local_240;
  local_240 = 0.0;
  FUN_14485c47a(&local_240,param_5);
  local_78 = 2;
  local_b8 = local_240;
  FUN_14576483e(local_100,param_4 + -5.0);
  fVar1 = *(float *)((longlong)param_2 + 0x34);
  local_110 = DAT_14c8464f0;
  local_120 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_118 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_138 = *param_2;
  dStack_130 = param_2[1];
  local_128 = param_2[2];
  fVar6 = 1.0;
  bVar2 = true;
  do {
    bVar5 = bVar2;
    FUN_140a2a54e(param_2,&local_240,fVar6 * fVar1 * 0.5);
    local_110 = local_230;
    local_120 = local_240;
    uStack_118 = (double)CONCAT44(uStack_234,uStack_238);
    local_278 = &local_c0;
    FUN_140a2a5cc(local_100,&local_240,&local_138,lVar3);
    if (local_140 != '\0') goto LAB_1457647a1;
    local_128 = local_110;
    local_138 = local_120;
    dStack_130 = uStack_118;
    fVar6 = 2.0;
    bVar2 = false;
  } while (bVar5);
  if (((9.999999747378752e-05 < ABS(*(double *)(param_3 + 0x30))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_3 + 0x38)))) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_3 + 0x40)))) {
    uStack_250 = uStack_118 - param_2[1];
    local_258 = local_120 - *param_2;
    dVar7 = local_258 * local_258 + uStack_250 * uStack_250;
    if ((dVar7 != 1.0) || (NAN(dVar7))) {
      if (9.99999993922529e-09 <= dVar7) {
        uStack_250 = uStack_250 * (1.0 / SQRT(dVar7));
        local_258 = local_258 * (1.0 / SQRT(dVar7));
        goto LAB_145764696;
      }
      local_248 = DAT_14c8464f0;
      local_258 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_250 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_248 = local_110 - param_2[2];
      if ((local_248 != 0.0) || (NAN(local_248))) {
LAB_145764696:
        local_248 = 0.0;
      }
    }
    FUN_144a79a9c(&local_258,&local_240);
    FUN_1401c9a0e(&local_240,&local_270,param_3 + 0x30);
    local_138 = local_120;
    dStack_130 = uStack_118;
    local_128 = local_110;
    local_120 = local_120 - local_270;
    uStack_118 = uStack_118 - local_268;
    local_110 = local_110 - local_260;
    local_278 = &local_c0;
    FUN_140a2a5cc(local_100,&local_240,&local_138,lVar3);
    if (local_140 == '\0') goto LAB_14576473f;
LAB_1457647a1:
    uVar4 = 0;
  }
  else {
LAB_14576473f:
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_145764761:
  if ((local_70 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14576483e FUN_14576483e body=53 status=ok
// SIG undefined FUN_14576483e(void)

char * FUN_14576483e(char *param_1,float param_2)

{
  FUN_140ef4e54();
  *param_1 = (0.0 < param_2) * '\x02';
  *(float *)(param_1 + 0x20) = param_2;
  return param_1;
}



// FUNCTION 145764874 FUN_145764874 body=193 status=ok
// SIG undefined FUN_145764874(void)

undefined8 *
FUN_145764874(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x88);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38) == lVar1) {
          if ((lVar4 != 0) && (lVar4 + 8 != 0)) {
            FUN_1405b801a(lVar4 + 8,param_2,param_4);
            return param_2;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x30);
      } while (iVar6 != -1);
    }
  }
  param_2[2] = param_4[2];
  uVar3 = param_4[1];
  *param_2 = *param_4;
  param_2[1] = uVar3;
  return param_2;
}



// FUNCTION 145764936 FUN_145764936 body=138 status=ok
// SIG undefined FUN_145764936(void)

void FUN_145764936(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1457649c0 FUN_1457649c0 body=254 status=ok
// SIG undefined FUN_1457649c0(void)

undefined8
FUN_1457649c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e01f80;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9adcb0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ca2242(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145764ac0 FUN_145764ac0 body=254 status=ok
// SIG undefined FUN_145764ac0(void)

undefined8
FUN_145764ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9add20;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145764bc0 FUN_145764bc0 body=479 status=ok
// SIG undefined FUN_145764bc0(void)

void FUN_145764bc0(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a7484c(param_2 + 0x28,local_98);
  local_78 = *(undefined4 *)(param_2 + 0x10);
  uStack_74 = *(undefined4 *)(param_2 + 0x14);
  uStack_70 = (int)*(undefined8 *)(param_2 + 0x18);
  uStack_6c = (int)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  local_68 = *(undefined8 *)(param_2 + 0x20);
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  if (param_3 == '\0') {
    lVar6 = FUN_145764da0(param_1[6]);
  }
  else {
    plVar1 = param_1 + 0xc;
    iVar3 = (int)param_1[0xe];
    if ((-1 < (longlong)iVar3) && (iVar3 < (int)param_1[0xd])) {
      lVar6 = *(longlong *)(*plVar1 + (longlong)iVar3 * 8);
      *(byte *)(lVar6 + 0x1f8) = *(byte *)(lVar6 + 0x1f8) | 1;
      puVar8 = local_98;
      puVar9 = (undefined8 *)(lVar6 + 0x240);
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      goto LAB_145764c7d;
    }
    lVar6 = FUN_145764da0(param_1[6]);
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
    }
    iVar3 = (int)param_1[0xd];
    *(uint *)(param_1 + 0xd) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x6c) < iVar3 + 1U) {
      FUN_145764e52(plVar1,iVar3);
    }
    lVar7 = *plVar1;
    *(longlong *)(lVar7 + (longlong)iVar3 * 8) = lVar6;
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
      lVar6 = *(longlong *)(lVar7 + (longlong)iVar3 * 8);
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,lVar6,local_98,0);
LAB_145764c7d:
  uVar4 = FUN_140c81140();
  uVar5 = FUN_140a2e4c6();
  FUN_144a54316(uVar5,param_2,uVar4,lVar6);
  uVar2 = (*(uint *)(lVar6 + 0x2d4) & 0xfffffffd) + (uint)*(byte *)(param_2 + 0x54) * 2;
  *(uint *)(lVar6 + 0x2d4) = uVar2;
  uVar2 = (uVar2 & 0xfffffffb) + (uint)*(byte *)(param_2 + 0x55) * 4;
  *(uint *)(lVar6 + 0x2d4) = uVar2;
  *(uint *)(lVar6 + 0x2d4) = (uVar2 & 0xfffffff7) + (uint)*(byte *)(param_2 + 0x56) * 8;
  FUN_14045627c(lVar6,1,1);
  FUN_1448215fa(lVar6);
  *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145764da0 FUN_145764da0 body=177 status=ok
// SIG undefined FUN_145764da0(void)

undefined8 FUN_145764da0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140c81140();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145764e52 FUN_145764e52 body=132 status=ok
// SIG undefined FUN_145764e52(void)

void FUN_145764e52(longlong param_1,int param_2)

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



// FUNCTION 145764ed6 FUN_145764ed6 body=55 status=ok
// SIG undefined FUN_145764ed6(void)

void FUN_145764ed6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62438 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62438 = FUN_140002ddd(FUN_1464f7afd,uVar1,L"GbxProgressPointPoolDef");
  }
  return;
}



// FUNCTION 145764f0e FUN_145764f0e body=74 status=ok
// SIG undefined FUN_145764f0e(void)

undefined8 * FUN_145764f0e(undefined8 *param_1,int param_2)

{
  param_1[0x11] = &PTR_FUN_149e38530;
  *param_1 = &PTR_FUN_14aac1e60;
  FUN_145764f58(param_1 + 9);
  FUN_140187f4a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145764f58 FUN_145764f58 body=122 status=ok
// SIG undefined FUN_145764f58(void)

void FUN_145764f58(longlong *param_1)

{
  FUN_145764fd2(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140a30d6c(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140a30df5(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14576500b(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145764fd2 FUN_145764fd2 body=57 status=ok
// SIG undefined FUN_145764fd2(void)

void FUN_145764fd2(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 14576500b FUN_14576500b body=57 status=ok
// SIG undefined FUN_14576500b(void)

void FUN_14576500b(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 145765044 FUN_145765044 body=62 status=ok
// SIG undefined FUN_145765044(void)

undefined8 * FUN_145765044(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aac2568;
  FUN_1457650fe(param_1 + 2);
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145765082 FUN_145765082 body=62 status=ok
// SIG undefined FUN_145765082(void)

undefined8 * FUN_145765082(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aac2488;
  FUN_1457650c0(param_1 + 2);
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457650c0 FUN_1457650c0 body=61 status=ok
// SIG undefined FUN_1457650c0(void)

void FUN_1457650c0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1);
  return;
}



// FUNCTION 1457650fe FUN_1457650fe body=99 status=ok
// SIG undefined FUN_1457650fe(void)

void FUN_1457650fe(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_1449db362(param_1);
  return;
}



// FUNCTION 145765162 FUN_145765162 body=49 status=ok
// SIG undefined FUN_145765162(void)

void FUN_145765162(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145765194 FUN_145765194 body=101 status=ok
// SIG undefined FUN_145765194(void)

void FUN_145765194(longlong param_1)

{
  FUN_1457651fa(param_1 + 0xb0);
  FUN_1447bda9c(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457651fa FUN_1457651fa body=59 status=ok
// SIG undefined FUN_1457651fa(void)

void FUN_1457651fa(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145765236 FUN_145765236 body=57 status=ok
// SIG undefined FUN_145765236(void)

undefined8 FUN_145765236(void)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_140343d7a();
  lVar2 = FUN_140a32438(uVar1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_145765270(lVar2,0);
    uVar3 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(undefined1 *)(lVar2 + 0x58)) &
            0xfffffffffffffffe;
    uVar1 = CONCAT71((int7)(uVar3 >> 8),(char)uVar3 == '\x02');
  }
  return uVar1;
}



// FUNCTION 145765270 FUN_145765270 body=142 status=ok
// SIG undefined FUN_145765270(void)

void FUN_145765270(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144729dda(param_1 + 0x38);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x50) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x48);
    if ((cVar1 != '\0') &&
       ((*(longlong *)(param_1 + 0x40) != 0 && ((*(byte *)(param_1 + 0x58) & 0xfe) != 2)))) {
      *(undefined4 *)(param_1 + 0xb8) = param_2;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        cVar1 = FUN_144729dda(param_1 + 0x48);
        if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
        }
      }
      FUN_140a3257a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1457652fe FUN_1457652fe body=121 status=ok
// SIG undefined FUN_1457652fe(void)

void FUN_1457652fe(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      iVar5 = 0x10;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 6,0);
      iVar2 = (int)(uVar3 >> 6);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_145765378(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145765378 FUN_145765378 body=140 status=ok
// SIG undefined FUN_145765378(void)

void FUN_145765378(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 6);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,0x40);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 6);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,0x40);
  return;
}



// FUNCTION 145765404 FUN_145765404 body=146 status=ok
// SIG undefined FUN_145765404(void)

void FUN_145765404(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145765498 FUN_145765498 body=176 status=ok
// SIG undefined FUN_145765498(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145765498(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c992ed0) {
    FUN_144b3d300(&DAT_14c992ed0);
    if (DAT_14c992ed0 == -1) {
      uVar1 = FUN_14576554a();
      FUN_1446f470e(&local_20,L"FIndexedConstraintHandle",1);
      _DAT_14c992ec0 = local_20;
      _DAT_14c992ec8 = uVar1;
      _Init_thread_footer(&DAT_14c992ed0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14c992ec0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576554a FUN_14576554a body=168 status=ok
// SIG undefined FUN_14576554a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14576554a(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c992ee8) {
    FUN_144b3d300(&DAT_14c992ee8);
    if (DAT_14c992ee8 == -1) {
      FUN_1446f470e(&local_18,L"FConstraintHandle",1);
      _DAT_14c992ed8 = local_18;
      _DAT_14c992ee0 = 0;
      _Init_thread_footer(&DAT_14c992ee8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c992ed8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457655f4 FUN_1457655f4 body=76 status=ok
// SIG undefined FUN_1457655f4(void)

void FUN_1457655f4(longlong *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined2 **)(*param_1 + 0x10);
  uVar1 = *puVar3;
  *(undefined2 **)(*param_1 + 0x10) = puVar3 + 1;
  plVar4 = (longlong *)param_1[1];
  iVar2 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar2 + 2;
  if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < 2) {
    FUN_1447403be(plVar4,iVar2);
  }
  *(undefined2 *)(*plVar4 + (longlong)iVar2) = uVar1;
  return;
}



// FUNCTION 145765646 FUN_145765646 body=24 status=ok
// SIG undefined FUN_145765646(void)

void FUN_145765646(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014576565a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14576565e FUN_14576565e body=38 status=ok
// SIG undefined FUN_14576565e(void)

undefined8 FUN_14576565e(undefined8 param_1,int param_2)

{
  FUN_145765684();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145765684 FUN_145765684 body=248 status=ok
// SIG undefined FUN_145765684(void)

void FUN_145765684(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac8b290;
  param_1[4] = &PTR_FUN_14ac8b2b0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_14576577c(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1457657b4(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1457657ec(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145765824(param_1 + 6);
  FUN_140af926c(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145765778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14576577c FUN_14576577c body=55 status=ok
// SIG undefined FUN_14576577c(void)

void FUN_14576577c(longlong *param_1)

{
  FUN_145765bb6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457657b4 FUN_1457657b4 body=55 status=ok
// SIG undefined FUN_1457657b4(void)

void FUN_1457657b4(longlong *param_1)

{
  FUN_14576585c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457657ec FUN_1457657ec body=55 status=ok
// SIG undefined FUN_1457657ec(void)

void FUN_1457657ec(longlong *param_1)

{
  FUN_1457658d6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145765824 FUN_145765824 body=55 status=ok
// SIG undefined FUN_145765824(void)

void FUN_145765824(longlong *param_1)

{
  FUN_145765a46(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14576585c FUN_14576585c body=121 status=ok
// SIG undefined FUN_14576585c(void)

void FUN_14576585c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
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



// FUNCTION 1457658d6 FUN_1457658d6 body=365 status=ok
// SIG undefined FUN_1457658d6(void)

void FUN_1457658d6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_140a3dc1e(*local_70 + (longlong)iStack_54 * 0xa8 + 0x20);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14099029e(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145765a46 FUN_145765a46 body=365 status=ok
// SIG undefined FUN_145765a46(void)

void FUN_145765a46(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_140a3dc1e(*local_70 + (longlong)iStack_54 * 0x98 + 0x10);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140f776e6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145765bb6 FUN_145765bb6 body=384 status=ok
// SIG undefined FUN_145765bb6(void)

void FUN_145765bb6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145765d38 FUN_145765d38 body=189 status=ok
// SIG undefined FUN_145765d38(void)

longlong * FUN_145765d38(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x48);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_145765d98;
          break;
        }
        iVar1 = (int)plVar2[8];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_147f538bc(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x48);
LAB_145765d98:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 145765df6 FUN_145765df6 body=89 status=ok
// SIG undefined FUN_145765df6(void)

void FUN_145765df6(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
    if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x100),
              (longlong)*(int *)((longlong)param_1 + 0x108) << 5);
      FUN_1446efa72((longlong)param_1 + 0x100,0,0,0x20);
      return;
    }
  }
  return;
}



// FUNCTION 145765e50 FUN_145765e50 body=174 status=ok
// SIG undefined FUN_145765e50(void)

void FUN_145765e50(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_14a476060;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x800000000;
  *(undefined4 *)(param_1 + 0x1d) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = DAT_14cab2cd4;
  return;
}



// FUNCTION 145765efe FUN_145765efe body=671 status=ok
// SIG undefined FUN_145765efe(void)

void FUN_145765efe(longlong param_1,longlong *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = *param_2;
  local_98 = param_2[1];
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)FUN_140165676(&local_a0);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x70))(plVar6,param_3);
  }
  uVar4 = local_58;
  if ((*param_3 & 1) == 0) {
    lVar3 = *(longlong *)(*param_2 + 0x28);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    uVar8 = (ulonglong)*(int *)(param_1 + 0xe8);
    if (0 < *(int *)(*(longlong *)(lVar3 + 0xa0) + 0x18 + uVar8 * 0x30)) {
      *param_3 = *param_3 | 1;
      uVar8 = (ulonglong)*(uint *)(param_1 + 0xe8);
    }
    lVar7 = FUN_1400a382a(lVar3,uVar8);
    uVar4 = local_58;
    if (lVar7 != 0) {
      if ((longlong)*(int *)(lVar7 + 0x90) != 0) {
        lVar11 = *(longlong *)(lVar7 + 0x88);
        lVar10 = (longlong)*(int *)(lVar7 + 0x90) * 0x18;
        do {
          FUN_147559218(lVar11,&local_70);
          if (local_70._1_1_ != '\0') {
            if ((char)local_70 == '\0') goto LAB_1457660a3;
            break;
          }
          lVar11 = lVar11 + 0x18;
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != 0);
      }
      plVar6 = (longlong *)(lVar7 + 0x98);
      lVar11 = lVar7 + 0xa8;
      local_90 = 0x100000000;
      local_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_88 = lVar11;
      if (*(int *)(lVar7 + 0xc0) == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_90);
        iVar9 = *(int *)(lVar7 + 0xc0);
      }
      uStack_50 = CONCAT44(uStack_74,uStack_78);
      local_58 = local_80;
      uVar4 = local_58;
      local_68 = (int)local_90;
      uStack_64 = local_90._4_4_;
      uStack_60 = (undefined4)uStack_88;
      uStack_5c = uStack_88._4_4_;
      local_58._4_4_ = (int)((ulonglong)local_80 >> 0x20);
      local_70 = plVar6;
      if ((local_58._4_4_ != iVar9) || (uStack_88 != lVar11)) {
        iVar5 = local_58._4_4_;
        local_58 = uVar4;
        do {
          lVar7 = FUN_1400a4c08(*local_70 + (longlong)iVar5 * 0x100 + 8);
          if (lVar7 != 0) {
            FUN_140b56998(lVar3,&local_90,lVar7);
            if (((longlong)(int)local_90 != -1) &&
               (0 < *(int *)(*(longlong *)(lVar3 + 0xa0) + 0x18 + (longlong)(int)local_90 * 0x30)))
            goto LAB_1457660a3;
          }
          local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
          FUN_1449c0562(&local_68);
          iVar5 = local_58._4_4_;
          uVar4 = local_58;
        } while (local_70 != plVar6 ||
                 (CONCAT44(uStack_5c,uStack_60) != lVar11 || local_58._4_4_ != iVar9));
      }
    }
  }
LAB_1457660a6:
  local_58 = uVar4;
  plVar6 = (longlong *)param_2[1];
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1457660a3:
  *param_3 = *param_3 | 1;
  uVar4 = local_58;
  goto LAB_1457660a6;
}



// FUNCTION 14576619e FUN_14576619e body=120 status=ok
// SIG undefined FUN_14576619e(void)

void FUN_14576619e(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar4 = 8;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_145766216(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145766216 FUN_145766216 body=133 status=ok
// SIG undefined FUN_145766216(void)

void FUN_145766216(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 14576629c FUN_14576629c body=158 status=ok
// SIG undefined FUN_14576629c(void)

bool FUN_14576629c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576633c FUN_14576633c body=34 status=ok
// SIG undefined FUN_14576633c(void)

void FUN_14576633c(undefined8 param_1,longlong param_2)

{
  FUN_145766370(param_1,param_2 + 0x20,param_2 + 0x28,*(undefined4 *)(param_2 + 0x30),
                *(undefined1 *)(param_2 + 0x34));
  return;
}



// FUNCTION 145766370 FUN_145766370 body=494 status=ok
// SIG undefined FUN_145766370(void)

void FUN_145766370(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4,
                  char param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  longlong lStack_50;
  longlong lStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)FUN_141188014();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (lVar5 != 0) {
      local_70 = *param_2;
      local_78 = &local_68;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = local_58 & 0xffffffff00000000;
      lStack_50 = 0;
      lStack_48 = 0;
      local_80 = &local_70;
      FUN_14581cf4c(&local_68,&local_80,0);
      lVar6 = FUN_140b3986e(&local_68);
      if (lStack_50 != 0) {
        FUN_1400020a8();
      }
      if (lVar6 != 0) {
        lVar6 = FUN_141085a5e(lVar5,lVar6,0);
        if (lVar6 != 0) {
          cVar2 = FUN_140a30ba2(lVar6);
          if (cVar2 == '\0') {
            lVar7 = FUN_140a4889e(lVar6,param_3);
            if (lVar7 != 0) {
              if (param_5 == '\x01') {
                iVar3 = -param_4;
                local_80._4_4_ = (undefined4)*(undefined8 *)(lVar7 + 0x48);
                local_78._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x48) >> 0x20);
              }
              else {
                uVar8 = FUN_140a489cc(lVar6);
                if (param_4 < 0) {
                  cVar2 = FUN_148934730(lVar7);
                  if ((param_5 == '\x02') || (param_4 = 1, cVar2 != '\0')) {
                    lVar1 = *(longlong *)(lVar7 + 0x50);
                    if (lVar1 == 0) {
                      param_4 = 0;
                    }
                    else if (*(char *)(lVar1 + 8) == '\x01') {
                      param_4 = *(int *)(lVar1 + 0xc);
                    }
                    else {
                      param_4 = 0x7fffffff;
                    }
                  }
                }
                iVar3 = FUN_140a4890a(lVar5,uVar8);
                if (iVar3 < 1) goto LAB_1457664bd;
                if (param_4 < iVar3) {
                  iVar3 = param_4;
                }
                local_80._4_4_ = (undefined4)*(undefined8 *)(lVar7 + 0x48);
                local_78._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x48) >> 0x20);
              }
              lStack_50 = 0;
              local_58 = 0;
              uStack_60 = 0;
              local_68 = 0;
              local_80._0_4_ = 0xffffffff;
              lStack_48 = lVar6;
              FUN_14120f542(lVar5,&local_68,&local_80,iVar3);
            }
          }
        }
      }
    }
  }
LAB_1457664bd:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145766560 FUN_145766560 body=196 status=ok
// SIG undefined FUN_145766560(void)

void FUN_145766560(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0x2c0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x168));
  *(int *)(lVar3 + 0x160) = *(int *)(lVar3 + 0x160) + 1;
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
  FUN_145e28436(lVar3,param_2 + 0x20);
  FUN_145e28436(param_1 + 0xbc,param_2 + 0x20);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x168));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145766626 FUN_145766626 body=621 status=ok
// SIG undefined FUN_145766626(void)

void FUN_145766626(longlong param_1)

{
  FUN_140457ffc(&DAT_14c86aa18,param_1);
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x250));
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x238));
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x218),*(undefined4 *)(param_1 + 0x220));
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x208));
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1f0));
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1d8));
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  FUN_145766894(param_1 + 0x130);
  FUN_1449db362(param_1 + 0x118);
  FUN_1449db362(param_1 + 0x108);
  FUN_140a4981e(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1457668ca(param_1 + 8);
  return;
}



// FUNCTION 145766894 FUN_145766894 body=53 status=ok
// SIG undefined FUN_145766894(void)

void FUN_145766894(longlong *param_1)

{
  FUN_145766900();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457668ca FUN_1457668ca body=53 status=ok
// SIG undefined FUN_1457668ca(void)

void FUN_1457668ca(longlong *param_1)

{
  FUN_140a4986a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145766900 FUN_145766900 body=345 status=ok
// SIG undefined FUN_145766900(void)

void FUN_145766900(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145766a5a FUN_145766a5a body=69 status=ok
// SIG undefined FUN_145766a5a(void)

void FUN_145766a5a(longlong param_1)

{
  FUN_1449db362(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x20);
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145766a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145766a9f FUN_145766a9f body=40 status=ok
// SIG undefined FUN_145766a9f(void)

void FUN_145766a9f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 145766ac8 FUN_145766ac8 body=179 status=ok
// SIG undefined FUN_145766ac8(void)

byte * FUN_145766ac8(byte *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  *param_1 = *param_1 | 1;
  param_1[1] = ((char)param_3[2] != '\0') * '\x03';
  param_1[2] = (char)param_3[2] * '\x02' + 1;
  plVar1 = (longlong *)*param_2;
  *(longlong **)(param_1 + 8) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x10) = (int)param_2[1];
  param_1[0x18] = *(byte *)(param_2 + 2);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_1413a4324(param_1 + 0x20,param_2 + 3);
  plVar1 = (longlong *)*param_3;
  *(longlong **)(param_1 + 0x30) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x38) = (int)param_3[1];
  param_1[0x40] = *(byte *)(param_3 + 2);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  FUN_1413a4324(param_1 + 0x48,param_3 + 3);
  return param_1;
}



// FUNCTION 145766b7c FUN_145766b7c body=153 status=ok
// SIG undefined FUN_145766b7c(void)

undefined8 * FUN_145766b7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  param_1[5] = 0x100000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_3;
  lVar1 = FUN_140a580e4();
  local_30 = param_1;
  FUN_140a594ea(param_1,lVar1);
  FUN_140a59548(param_1 + 2,lVar1 + 0x10);
  (*param_4)(&local_30);
  FUN_140a5f69a(&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145766c16 FUN_145766c16 body=146 status=ok
// SIG undefined FUN_145766c16(void)

bool FUN_145766c16(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  lVar2 = 0;
  if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
    lVar2 = local_40;
  }
  if (local_38 != lVar2) {
    FUN_145766caa(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145766caa FUN_145766caa body=163 status=ok
// SIG undefined FUN_145766caa(void)

void FUN_145766caa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149f13570;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_140eee99e(param_2,param_1,0,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145766de2 FUN_145766de2 body=171 status=ok
// SIG undefined FUN_145766de2(void)

void FUN_145766de2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149f18f70;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_140a58922(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145766e8e FUN_145766e8e body=276 status=ok
// SIG undefined FUN_145766e8e(void)

void FUN_145766e8e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    (**(code **)(*DAT_14c968098 + 0x130))(DAT_14c968098,&local_58,param_2);
    local_48 = local_58;
    local_40 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_145767662(&local_68,param_1);
    FUN_145766fac(local_68 + 8,&local_48);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    FUN_14576702a(&local_48);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_14697e842(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145766fac FUN_145766fac body=125 status=ok
// SIG undefined FUN_145766fac(void)

undefined8 * FUN_145766fac(undefined8 *param_1,undefined8 *param_2)

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
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  FUN_144a450dc(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 14576702a FUN_14576702a body=129 status=ok
// SIG undefined FUN_14576702a(void)

void FUN_14576702a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_145767045;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_145767045:
  plVar1 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001457670a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457670ac FUN_1457670ac body=132 status=ok
// SIG undefined FUN_1457670ac(void)

void FUN_1457670ac(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14576855a(&local_28,param_1);
  FUN_145767132(local_28 + 8,param_2);
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
  FUN_1449db362(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145767132 FUN_145767132 body=124 status=ok
// SIG undefined FUN_145767132(void)

void FUN_145767132(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
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



// FUNCTION 1457671b0 FUN_1457671b0 body=106 status=ok
// SIG undefined FUN_1457671b0(void)

undefined8 * FUN_1457671b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_149f09338;
  puVar1[1] = param_2;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f095d0;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 14576721a FUN_14576721a body=73 status=ok
// SIG undefined FUN_14576721a(void)

longlong FUN_14576721a(longlong param_1,longlong *param_2)

{
  FUN_140008f88();
  *(char *)(param_1 + 0x10) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x18,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 145767264 FUN_145767264 body=141 status=ok
// SIG undefined FUN_145767264(void)

longlong FUN_145767264(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_140eeec1c((longlong *)(param_1 + 0x198),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x198);
  *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    plVar6 = (longlong *)param_2[1];
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
  }
  return param_1;
}



// FUNCTION 1457672f2 FUN_1457672f2 body=178 status=ok
// SIG undefined FUN_1457672f2(void)

longlong FUN_1457672f2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_140a569b0(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b0) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1a8) = local_40;
  FUN_144a450dc(param_1 + 0x1b8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457673a6 FUN_1457673a6 body=117 status=ok
// SIG undefined FUN_1457673a6(void)

longlong * FUN_1457673a6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145768742(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14576741c FUN_14576741c body=428 status=ok
// SIG undefined FUN_14576741c(void)

longlong * FUN_14576741c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1457674fc:
    *puVar5 = &PTR_LAB_149f05630;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f01e10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1457674fc;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05630;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f01e10;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1457675c8 FUN_1457675c8 body=153 status=ok
// SIG undefined FUN_1457675c8(void)

undefined8 * FUN_1457675c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  param_1[5] = 0x100000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_3;
  lVar1 = FUN_145767a78();
  local_30 = param_1;
  FUN_140a594ea(param_1,lVar1);
  FUN_140a59548(param_1 + 2,lVar1 + 0x10);
  (*param_4)(&local_30);
  FUN_140a5f69a(&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145767662 FUN_145767662 body=469 status=ok
// SIG undefined FUN_145767662(void)

longlong * FUN_145767662(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401fce4e(param_2,param_1);
  if (*param_1 != 0) goto LAB_145767757;
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149ef14e0;
  plVar3[5] = 0;
  plVar3[2] = (longlong)&PTR_FUN_149ef14f8;
  plVar3[3] = 0;
  plVar3[4] = 0;
  *(undefined1 *)(plVar3 + 5) = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 != (longlong *)0x0) {
      param_1[1] = 0;
LAB_14576778f:
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
      if (plVar3 != (longlong *)0x0) goto LAB_14576770f;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14576778f;
    }
LAB_14576770f:
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_38 = *param_1;
  plVar3 = (longlong *)param_1[1];
  local_30 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_140a62b12(param_2,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140a62b12(param_2);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
LAB_145767757:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145767838 FUN_145767838 body=166 status=ok
// SIG undefined FUN_145767838(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145767838(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14c98df78 = 0;
  _DAT_14c98df80 = 0x100000000;
  DAT_14c98df58 = 0;
  _DAT_14c98df60 = 0;
  _DAT_14c98df88 = param_1;
  lVar1 = FUN_140a580e4();
  local_28 = &DAT_14c98df58;
  FUN_140a594ea(&DAT_14c98df58,lVar1);
  FUN_140a59548(&DAT_14c98df68,lVar1 + 0x10);
  FUN_145768154(&local_28);
  FUN_140a5f69a(&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457678e0 FUN_1457678e0 body=200 status=ok
// SIG undefined FUN_1457678e0(void)

longlong FUN_1457678e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_140a56ed2(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x1b8) = local_38;
  *(undefined4 *)(param_1 + 0x1a8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1ac) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1b0) = uStack_40;
  *(undefined4 *)(param_1 + 0x1b4) = uStack_3c;
  *(undefined1 *)(param_1 + 0x1bc) = local_34;
  FUN_144a450dc(param_1 + 0x1c0,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457679aa FUN_1457679aa body=205 status=ok
// SIG undefined FUN_1457679aa(void)

longlong FUN_1457679aa(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_140a56b5c(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1,&local_50);
  *(undefined1 *)(param_1 + 0x10) = local_40;
  FUN_144a450dc(param_1 + 0x18,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145767a78 FUN_145767a78 body=207 status=ok
// SIG undefined FUN_145767a78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145767a78(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98df50) {
    FUN_144b3d300(&DAT_14c98df50);
    if (DAT_14c98df50 == -1) {
      FUN_1446f470e(&local_18,L"FSlateControlledConstruction",1);
      DAT_14c98df38 = 0;
      _DAT_14c98df40 = 0x100000000;
      DAT_14c98df18 = 0;
      _DAT_14c98df20 = 0;
      _DAT_14c98df48 = local_18;
      atexit(FUN_142879cb0);
      _Init_thread_footer(&DAT_14c98df50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c98df18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145767b48 FUN_145767b48 body=215 status=ok
// SIG undefined FUN_145767b48(void)

longlong FUN_145767b48(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_140a56b5c(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x170,&local_50);
  *(undefined1 *)(param_1 + 0x180) = local_40;
  FUN_144a450dc(param_1 + 0x188,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145767c20 FUN_145767c20 body=331 status=ok
// SIG undefined FUN_145767c20(void)

longlong FUN_145767c20(longlong param_1)

{
  undefined1 auStack_a8 [40];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  longlong *local_78 [2];
  wchar_t *local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140a5071c();
  *(undefined4 *)(param_1 + 0x1a8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1bc) = 1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  local_68 = L"System";
  local_60 = 6;
  FUN_1446e940c(local_7c,&local_68);
  local_68 = L"AppIconWidget";
  local_60 = 0xd;
  FUN_1446e940c(local_80,&local_68);
  FUN_140208bae(local_78,local_80,local_7c,L"System Menu");
  FUN_14023423e(&local_68,local_78);
  local_58 = 1;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140008f88(param_1 + 0x170,&local_68);
  *(undefined1 *)(param_1 + 0x180) = local_58;
  FUN_144a450dc(param_1 + 0x188,&local_50);
  FUN_1449db362(&local_50);
  if (local_68 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_68 + 0x10))();
  }
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145767d6c FUN_145767d6c body=391 status=ok
// SIG undefined FUN_145767d6c(void)

void FUN_145767d6c(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14c968098 != (longlong *)0x0) {
    *(char *)(param_1 + 0x141) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x130);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
      if (plVar2 == (longlong *)0x0) {
        plVar2 = DAT_14c96b350;
      }
      if (param_2 == '\0') {
        local_98 = 0;
        uStack_90 = 0;
        FUN_1446ddc76(&local_a8,"AppIconPadding.Small",1);
        local_b8 = 0;
        puVar3 = (undefined4 *)(**(code **)(*plVar2 + 0x48))(plVar2,local_a8,0,&local_98);
        uVar4 = (**(code **)(*DAT_14c968098 + 0x50))();
      }
      else {
        local_98 = 0;
        uStack_90 = 0;
        FUN_1446ddc76(&local_a0,"AppIconPadding",1);
        local_b8 = 0;
        puVar3 = (undefined4 *)(**(code **)(*plVar2 + 0x48))(plVar2,local_a0,0,&local_98);
        uVar4 = (**(code **)(*DAT_14c968098 + 0x48))();
      }
      local_68 = *puVar3;
      uStack_64 = puVar3[1];
      uStack_60 = puVar3[2];
      uStack_5c = puVar3[3];
      local_58 = 1;
      local_50 = 0;
      uStack_48 = 0;
      FUN_140a58d14(lVar1 + 0x218);
      local_80 = 1;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = uVar4;
      FUN_145767ef4(*(undefined8 *)(lVar1 + 0x268));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145767ef4 FUN_145767ef4 body=43 status=ok
// SIG undefined FUN_145767ef4(void)

void FUN_145767ef4(longlong param_1,longlong param_2)

{
  FUN_140a5cfd6(param_1 + 0x1e0,param_1,param_2);
  FUN_1449db362(param_2 + 0x10);
  return;
}



// FUNCTION 145767f20 FUN_145767f20 body=400 status=ok
// SIG undefined FUN_145767f20(void)

undefined8 * FUN_145767f20(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x288);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f01e80;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x278);
  FUN_140a55f88(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_149f01ea0;
  plVar3[0x4f] = 0;
  plVar3[0x50] = 0;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_1457680b2(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145767fd6;
    param_1[1] = 0;
LAB_14576804a:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145767fd6;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_145767fd6;
      goto LAB_14576804a;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145767fd6;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_145767fd6:
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x278;
  FUN_140a52e78(*param_1,"SAppIconWidget",
                ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0xd0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457680b2 FUN_1457680b2 body=162 status=ok
// SIG undefined FUN_1457680b2(void)

void FUN_1457680b2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457680f1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457680f1;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1457680f1:
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
                    /* WARNING: Could not recover jumptable at 0x000145768150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145768154 FUN_145768154 body=443 status=ok
// SIG undefined FUN_145768154(void)

void FUN_145768154(undefined8 *param_1)

{
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 1;
  local_58 = 0;
  FUN_1446ddc76(&local_70,"SlotPadding",1);
  local_50[0] = 1;
  local_48 = 0;
  local_60 = 0;
  local_40 = 0;
  local_a8 = local_50;
  FUN_14134ba14(*param_1,local_80,local_70,0x218);
  FUN_1449db362(&local_60);
  local_68 = 1;
  local_58 = 0;
  FUN_1446ddc76(&local_88,"ContentScale",1);
  local_50[0] = 1;
  local_48 = 0;
  local_60 = 0;
  local_40 = 0;
  local_a8 = local_50;
  FUN_14134ba14(*param_1,local_80,local_88,0x230);
  FUN_1449db362(&local_60);
  local_68 = 2;
  local_58 = 0;
  FUN_1446ddc76(&local_90,"ColorAndOpacity",1);
  local_50[0] = 2;
  local_48 = 0;
  local_60 = 0;
  local_40 = 0;
  local_a8 = local_50;
  FUN_14134ba14(*param_1,local_80,local_90,0x240);
  FUN_1449db362(&local_60);
  local_68 = 2;
  local_58 = 0;
  FUN_1446ddc76(&local_98,"ForegroundColor",1);
  local_50[0] = 2;
  local_48 = 0;
  local_60 = 0;
  local_40 = 0;
  local_a8 = local_50;
  FUN_14134ba14(*param_1,local_80,local_98,0x250);
  FUN_1449db362(&local_60);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145768310 FUN_145768310 body=471 status=ok
// SIG undefined FUN_145768310(void)

void FUN_145768310(undefined8 param_1)

{
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68[0] = 0x20;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddc76(&local_70,"Visibility",1);
  local_98 = local_68;
  FUN_14134b99c(param_1,local_50,local_70,0x39);
  FUN_1457684e8(local_50);
  FUN_1449db362(&local_60);
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddc76(&local_78,"EnabledState",1);
  local_98 = local_68;
  FUN_14134b99c(param_1,local_50,local_78,0x3a);
  FUN_1449db362(&local_60);
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddc76(&local_80,"Hovered",1);
  local_98 = local_68;
  FUN_14134b99c(param_1,local_50,local_80,0x3b);
  FUN_1449db362(&local_60);
  local_68[0] = 0x11;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddc76(&local_88,"RenderTransform",1);
  local_98 = local_68;
  FUN_14134b99c(param_1,local_50,local_88,0x180);
  FUN_1449db362(&local_60);
  local_68[0] = 0x11;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddc76(&local_90,"RenderTransformPivot",1);
  local_98 = local_68;
  FUN_14134b99c(param_1,local_50,local_90,0x170);
  FUN_1449db362(&local_60);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457684e8 FUN_1457684e8 body=46 status=ok
// SIG undefined FUN_1457684e8(void)

longlong * FUN_1457684e8(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((-1 < (longlong)iVar1) && (iVar1 < (int)((longlong *)*param_1)[1])) {
    FUN_145768516((longlong)iVar1 * 0x58 + *(longlong *)*param_1);
  }
  return param_1;
}



// FUNCTION 145768516 FUN_145768516 body=68 status=ok
// SIG undefined FUN_145768516(void)

void FUN_145768516(undefined8 *param_1)

{
  FUN_144709e00(*param_1,"Visibility");
  if ((*(byte *)(param_1 + 5) & 0x20) == 0) {
    if ((longlong *)param_1[6] != (longlong *)0x0 && *(int *)(param_1 + 7) != 0) {
      (**(code **)(*(longlong *)param_1[6] + 0x30))();
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}



// FUNCTION 14576855a FUN_14576855a body=487 status=ok
// SIG undefined FUN_14576855a(void)

longlong * FUN_14576855a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403d1ccc(param_2,param_1);
  if (*param_1 != 0) goto LAB_145768661;
  plVar3 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149ef15d0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[2] = (longlong)&PTR_FUN_149ef15e8;
  plVar3[3] = 0;
  plVar3[7] = 0;
  plVar3[0xb] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 != (longlong *)0x0) {
      param_1[1] = 0;
LAB_145768699:
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
      if (plVar3 != (longlong *)0x0) goto LAB_145768619;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_145768699;
    }
LAB_145768619:
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_38 = *param_1;
  plVar3 = (longlong *)param_1[1];
  local_30 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_140a62ba0(param_2,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140a62ba0(param_2);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
LAB_145768661:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145768742 FUN_145768742 body=771 status=ok
// SIG undefined FUN_145768742(void)

void FUN_145768742(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
  FUN_144a88240(param_1 + 0x18,param_1);
  plVar4 = DAT_14c968098;
  local_68 = DAT_14c96b23a;
  local_67 = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_88 = (**(code **)(*DAT_14c968098 + 0x48))(DAT_14c968098);
  local_80 = (longlong *)CONCAT71(local_80._1_7_,1);
  local_78 = 0;
  uStack_70 = 0;
  local_c8 = &local_68;
  (**(code **)(*plVar4 + 0x120))(plVar4,&local_50,&local_88,param_2 + 0x1a8);
  plVar4 = local_48;
  if (local_48 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x268) = local_50;
    plVar7 = *(longlong **)(param_1 + 0x270);
    if (plVar7 == (longlong *)0x0) goto LAB_14576882c;
    *(undefined8 *)(param_1 + 0x270) = 0;
LAB_145768987:
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14576882c;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar4 = plVar7;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x268) = local_50;
    plVar7 = *(longlong **)(param_1 + 0x270);
    if (local_48 != plVar7) {
      *(longlong **)(param_1 + 0x270) = local_48;
      if (plVar7 == (longlong *)0x0) goto LAB_14576882c;
      goto LAB_145768987;
    }
    LOCK();
    plVar7 = local_48 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_14576882c;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14576882c:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  FUN_1449db362(&local_78);
  FUN_1449db362(&local_60);
  plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_c0,"AppIconPadding",1);
  local_c8 = (undefined1 *)0x0;
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x48))(plVar4,local_c0,0,&DAT_14c98de88);
  local_b8 = *puVar5;
  uStack_b0 = puVar5[1];
  local_a8 = 1;
  local_a0 = 0;
  uStack_98 = 0;
  uVar6 = FUN_140a58d14(param_1 + 0x218);
  local_88 = *(undefined8 *)(param_1 + 0x268);
  plVar4 = *(longlong **)(param_1 + 0x270);
  if (plVar4 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_80 = plVar4;
  }
  FUN_140a58896(uVar6,&local_88);
  plVar7 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145768a46 FUN_145768a46 body=336 status=ok
// SIG undefined FUN_145768a46(void)

undefined4 * FUN_145768a46(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145768c24(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_145768b98(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145768d0c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145768b98 FUN_145768b98 body=139 status=ok
// SIG undefined FUN_145768b98(void)

undefined8 FUN_145768b98(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_1489bdcca((int)lVar5,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145768c24 FUN_145768c24 body=231 status=ok
// SIG undefined FUN_145768c24(void)

int * FUN_145768c24(longlong *param_1,int *param_2)

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
      FUN_14055df60(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145768d0c FUN_145768d0c body=482 status=ok
// SIG undefined FUN_145768d0c(void)

void FUN_145768d0c(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 145768ef0 FUN_145768ef0 body=132 status=ok
// SIG undefined FUN_145768ef0(void)

void FUN_145768ef0(longlong param_1,int param_2)

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



// FUNCTION 145768f76 FUN_145768f76 body=474 status=ok
// SIG undefined FUN_145768f76(void)

void FUN_145768f76(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x98;
        iVar6 = FUN_144a78877(*(uint *)(lVar3 + 4 + lVar10) ^ *(uint *)(lVar3 + lVar10),
                              *(uint *)(lVar3 + 0xc + lVar10) ^ *(uint *)(lVar3 + 8 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x94 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x90 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145769152 FUN_145769152 body=488 status=ok
// SIG undefined FUN_145769152(void)

void FUN_145769152(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar5 * 0xa8;
        uVar2 = *(uint *)(lVar3 + 0x18 + lVar11);
        uVar10 = *(uint *)(lVar3 + 0x14 + lVar11);
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),
                              *(uint *)(lVar3 + 8 + lVar11) ^ *(uint *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,uVar2 ^ uVar10);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0xa4 + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xa0 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14576933b FUN_14576933b body=43 status=ok
// SIG undefined FUN_14576933b(void)

void FUN_14576933b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140a823d0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b1c1d40;
  puVar1[6] = 0;
  return;
}



// FUNCTION 145769366 FUN_145769366 body=95 status=ok
// SIG undefined FUN_145769366(void)

void FUN_145769366(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1457693c6 FUN_1457693c6 body=95 status=ok
// SIG undefined FUN_1457693c6(void)

void FUN_1457693c6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 145769426 FUN_145769426 body=132 status=ok
// SIG undefined FUN_145769426(void)

void FUN_145769426(longlong param_1,int param_2)

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



// FUNCTION 1457694ac FUN_1457694ac body=483 status=ok
// SIG undefined FUN_1457694ac(void)

void FUN_1457694ac(longlong *param_1)

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



// FUNCTION 145769690 FUN_145769690 body=493 status=ok
// SIG undefined FUN_145769690(void)

void FUN_145769690(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar4 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        lVar10 = (longlong)iVar4;
        uVar7 = *(ulonglong *)(lVar2 + 8 + lVar10 * 0x28);
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        iVar6 = FUN_144a78877(uVar5 >> 0x10 ^ uVar5,*(undefined4 *)(lVar2 + 0x10 + lVar10 * 0x28));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24 + lVar10 * 0x28) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar10 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar4 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14576987e FUN_14576987e body=8 status=ok
// SIG undefined FUN_14576987e(void)

longlong FUN_14576987e(longlong param_1)

{
  return param_1 + 0x348;
}



// FUNCTION 145769886 FUN_145769886 body=132 status=ok
// SIG undefined FUN_145769886(void)

void FUN_145769886(longlong param_1,int param_2)

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



// FUNCTION 14576990c FUN_14576990c body=62 status=ok
// SIG undefined FUN_14576990c(void)

void FUN_14576990c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488dc3f2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14576994a FUN_14576994a body=315 status=ok
// SIG undefined FUN_14576994a(void)

void FUN_14576994a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x68;
      *(undefined4 *)(lVar1 + 0x58 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x50 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_140b786e4(lVar1 + lVar2 + 0x10);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145769a86 FUN_145769a86 body=341 status=ok
// SIG undefined FUN_145769a86(void)

undefined4 * FUN_145769a86(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a93bda(param_1,local_40);
  FUN_140a93938(param_3,local_38);
  *(undefined4 *)(local_38 + 0xc) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *local_38;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_140a93b06(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 100) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 0xc) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140a94ce2(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145769bdc FUN_145769bdc body=51 status=ok
// SIG undefined FUN_145769bdc(void)

void FUN_145769bdc(longlong *param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  for (puVar1 = (undefined8 *)param_1[6]; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[1]) {
    (**(code **)(*param_1 + 0x10))(param_1,*puVar1);
  }
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return;
}



// FUNCTION 145769c10 FUN_145769c10 body=132 status=ok
// SIG undefined FUN_145769c10(void)

void FUN_145769c10(longlong param_1,int param_2)

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



// FUNCTION 145769c96 FUN_145769c96 body=143 status=ok
// SIG undefined FUN_145769c96(void)

void FUN_145769c96(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145769d26 FUN_145769d26 body=226 status=ok
// SIG undefined FUN_145769d26(void)

longlong * FUN_145769d26(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1464717e2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145769e0e FUN_145769e0e body=132 status=ok
// SIG undefined FUN_145769e0e(void)

undefined1 * FUN_145769e0e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SystemLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145769e0a;
}



// FUNCTION 145769e92 FUN_145769e92 body=138 status=ok
// SIG undefined FUN_145769e92(void)

code * FUN_145769e92(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CloudVolumetricTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145769e0e;
}



// FUNCTION 145769f1c FUN_145769f1c body=147 status=ok
// SIG undefined FUN_145769f1c(void)

void FUN_145769f1c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145769fb0 FUN_145769fb0 body=59 status=ok
// SIG undefined FUN_145769fb0(void)

longlong FUN_145769fb0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140aa20d2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_145769feb(lVar2);
  return lVar2;
}



// FUNCTION 145769feb FUN_145769feb body=26 status=ok
// SIG undefined FUN_145769feb(void)

void FUN_145769feb(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b082af8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 14576a006 FUN_14576a006 body=232 status=ok
// SIG undefined FUN_14576a006(void)

void FUN_14576a006(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x60) * 0x38;
    lVar6 = *(longlong *)(param_1 + 0x58) + 0x20;
    do {
      lVar3 = *(longlong *)(lVar6 + -0x10);
      if (lVar3 == 0) {
        uVar2 = FUN_140c1c194();
        lVar3 = FUN_14477b664(uVar2);
        *(longlong *)(lVar6 + -0x10) = lVar3;
      }
      plVar4 = *(longlong **)(lVar6 + -8);
      if (plVar4 == (longlong *)0x0) {
        if ((lVar3 != 0) && (*(longlong *)(lVar6 + -0x18) != 0)) {
          plVar4 = *(longlong **)(lVar3 + 0xb8);
          if (plVar4 != (longlong *)0x0) {
            cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4);
            if (cVar1 != '\0') {
              uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
              plVar4 = (longlong *)FUN_144aff482(uVar2,(longlong *)(lVar6 + -0x18));
              *(longlong **)(lVar6 + -8) = plVar4;
              if (plVar4 != (longlong *)0x0) goto LAB_14576a099;
              goto LAB_14576a0a7;
            }
          }
          *(undefined8 *)(lVar6 + -8) = 0;
        }
LAB_14576a0a7:
        FUN_140a3e398(lVar6);
      }
      else {
LAB_14576a099:
        lVar3 = (**(code **)(*plVar4 + 0x80))();
        if (lVar3 == 0) goto LAB_14576a0a7;
        lVar5 = FUN_1400014c6(lVar6);
        if (lVar5 != lVar3) {
          FUN_1487b8a9c(lVar6,lVar3);
        }
      }
      lVar6 = lVar6 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 14576a0ee FUN_14576a0ee body=163 status=ok
// SIG undefined FUN_14576a0ee(void)

void FUN_14576a0ee(void)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14576a26c(&DAT_14cb10950,local_20,FUN_145964704);
  FUN_14576a192(&DAT_14cb10a20,local_20,FUN_141477e4c);
  FUN_14576a26c(&DAT_14cb10950,local_20,FUN_14596478a);
  FUN_14576a192(&DAT_14cb10a20,local_20,FUN_1417c85c0);
  DAT_14cadbe78 = FUN_144b08c16;
  FUN_14576a349();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576a192 FUN_14576a192 body=217 status=ok
// SIG undefined FUN_14576a192(void)

undefined8 FUN_14576a192(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14a1c8660;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a1ca620;
  local_38[3] = param_3;
  FUN_140aa43ac(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576a26c FUN_14576a26c body=217 status=ok
// SIG undefined FUN_14576a26c(void)

undefined8 FUN_14576a26c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14a1ca410;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a1e18b0;
  local_38[3] = param_3;
  FUN_140aa4534(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576a349 FUN_14576a349 body=449 status=ok
// SIG undefined FUN_14576a349(void)

void FUN_14576a349(void)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_38,
                L"Signal that something should happen to all forward dynamics nodes. Not valid for use as the an actual specific node\'s tag."
               );
  FUN_1446f470e(&local_40,L"ForwardDynamics.All",1);
  FUN_1413e432a(lVar1,&local_28,local_40,local_38);
  DAT_14c9abbf8 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,
                L"Tag used for the forward dynamics node that is responsible for controlling the physics simulation that controls the actor transform when enabled."
               );
  FUN_1446f470e(&local_48,L"ForwardDynamics.Primary",1);
  FUN_1413e432a(lVar1,&local_28,local_48,local_38);
  DAT_14c9abbf0 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,
                L"Signal that something should happen to all non-primary forward dynamics nodes. Not valid for use as an actual specific node\'s tag"
               );
  FUN_1446f470e(&local_50,L"ForwardDynamics.Secondary",1);
  FUN_1413e432a(lVar1,&local_28,local_50,local_38);
  DAT_14c9abc00 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,
                L"DO NOT USE! This tag exists for the purpose of backwards compatibility and will be removed in the future."
               );
  FUN_1446f470e(&local_58,L"Primary",1);
  FUN_1413e432a(lVar1,&local_28,local_58,local_38);
  DAT_14c9abbe0 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576a50c FUN_14576a50c body=247 status=ok
// SIG undefined FUN_14576a50c(void)

undefined8 * FUN_14576a50c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined8 **local_60;
  code *local_58;
  code **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = 0;
  FUN_140aa5e3f(0,&local_78,0,0);
  lVar1 = local_78;
  lVar3 = (longlong)(int)uStack_70;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      local_68 = FUN_14280d9f8;
      local_60 = &local_88;
      local_58 = FUN_1449cc908;
      local_98 = 0;
      local_88 = param_2;
      local_80 = param_1;
      local_50 = &local_68;
      FUN_14482c30e(*(undefined8 *)(lVar1 + lVar2),&local_58,1,0);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  if (local_78 != 0) {
    FUN_1400020a8(local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14576a604 FUN_14576a604 body=1090 status=ok
// SIG undefined FUN_14576a604(void)

void FUN_14576a604(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  char local_79;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 *local_60;
  char *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a63f30();
  local_78 = 0;
  uStack_70 = 0;
  uVar4 = FUN_1458e665c();
  FUN_140aa7b7e(uVar4,&local_78,0);
  uVar6 = uStack_70 & 0xffffffff;
  if (-1 < (int)uStack_70) {
    lVar1 = param_1 + 0x588;
    *(undefined4 *)(param_1 + 0x690) = 0;
    if (*(int *)(param_1 + 0x694) != (int)uStack_70) {
      FUN_14576af02(lVar1);
      uVar6 = uStack_70 & 0xffffffff;
    }
    local_90 = param_1 + 0x38;
    FUN_14576b0ec(local_90,uVar6);
    uVar6 = uStack_70 & 0xffffffff;
    if (-1 < (int)uStack_70) {
      lVar2 = param_1 + 0x428;
      *(undefined4 *)(param_1 + 0x530) = 0;
      if (*(int *)(param_1 + 0x534) != (int)uStack_70) {
        FUN_14576af6c(lVar2);
      }
      lVar8 = local_78;
      local_79 = '\0';
      if ((int)uStack_70 != 0) {
        lVar7 = (longlong)(int)uStack_70;
        lVar9 = 0;
        do {
          lVar5 = *(longlong *)(lVar8 + lVar9);
          plVar10 = *(longlong **)(lVar5 + 0x110);
          if (plVar10 == (longlong *)0x0) {
            FUN_140aa6c08(lVar5);
            plVar10 = *(longlong **)(lVar5 + 0x110);
          }
          if ((plVar10 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(plVar10);
          }
          iVar3 = *(int *)(param_1 + 0x690);
          *(uint *)(param_1 + 0x690) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x694) < iVar3 + 1U) {
            FUN_1476ff3b0(lVar1,iVar3);
          }
          lVar5 = *(longlong *)(param_1 + 0x688);
          if (*(longlong *)(param_1 + 0x688) == 0) {
            lVar5 = lVar1;
          }
          *(longlong **)(lVar5 + (longlong)iVar3 * 8) = plVar10;
          if ((plVar10 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(plVar10);
          }
          (**(code **)(*plVar10 + 0x2a0))(plVar10,&local_88);
          local_58 = &local_79;
          local_60 = &local_88;
          FUN_14576aa48(local_90,local_4c,&local_60);
          iVar3 = *(int *)(param_1 + 0x530);
          *(uint *)(param_1 + 0x530) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x534) < iVar3 + 1U) {
            FUN_147056952(lVar2,iVar3);
          }
          lVar5 = *(longlong *)(param_1 + 0x528);
          if (*(longlong *)(param_1 + 0x528) == 0) {
            lVar5 = lVar2;
          }
          *(undefined8 *)(lVar5 + (longlong)iVar3 * 8) = local_88;
          (**(code **)(*plVar10 + 0x2b0))(plVar10);
          local_79 = local_79 + '\x01';
          lVar9 = lVar9 + 8;
        } while (lVar7 * 8 != lVar9);
      }
      if (local_78 != 0) {
        FUN_1400020a8(local_78);
      }
      local_78 = 0;
      uStack_70 = 0;
      uVar4 = FUN_1459d450c();
      FUN_140aa7b7e(uVar4,&local_78,0);
      uVar6 = uStack_70 & 0xffffffff;
      if (-1 < (int)uStack_70) {
        *(undefined4 *)(param_1 + 0x6e0) = 0;
        if (*(int *)(param_1 + 0x6e4) != (int)uStack_70) {
          FUN_14576adbe(param_1 + 0x698);
          uVar6 = uStack_70 & 0xffffffff;
        }
        FUN_14576b068(param_1 + 0x338,uVar6);
        uVar6 = uStack_70 & 0xffffffff;
        if (-1 < (int)uStack_70) {
          lVar1 = param_1 + 0x538;
          *(undefined4 *)(param_1 + 0x580) = 0;
          if (*(int *)(param_1 + 0x584) != (int)uStack_70) {
            FUN_1407d00f0(lVar1);
          }
          lVar2 = local_78;
          local_79 = '\0';
          if ((int)uStack_70 != 0) {
            lVar7 = (longlong)(int)uStack_70;
            lVar8 = 0;
            local_90 = param_1 + 0x698;
            do {
              lVar9 = *(longlong *)(lVar2 + lVar8);
              plVar10 = *(longlong **)(lVar9 + 0x110);
              if (plVar10 == (longlong *)0x0) {
                FUN_140aa6c08(lVar9);
                plVar10 = *(longlong **)(lVar9 + 0x110);
              }
              if ((plVar10 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(plVar10);
              }
              iVar3 = *(int *)(param_1 + 0x6e0);
              *(uint *)(param_1 + 0x6e0) = iVar3 + 1U;
              if (*(uint *)(param_1 + 0x6e4) < iVar3 + 1U) {
                FUN_1476ff734(local_90,iVar3);
              }
              lVar9 = *(longlong *)(param_1 + 0x6d8);
              if (*(longlong *)(param_1 + 0x6d8) == 0) {
                lVar9 = local_90;
              }
              *(longlong **)(lVar9 + (longlong)iVar3 * 8) = plVar10;
              if ((plVar10 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(plVar10);
              }
              (**(code **)(*plVar10 + 0x2a0))(plVar10,&local_88);
              local_58 = &local_79;
              local_60 = &local_88;
              FUN_14576b170(param_1 + 0x338,local_4c,&local_60);
              iVar3 = *(int *)(param_1 + 0x580);
              *(uint *)(param_1 + 0x580) = iVar3 + 1U;
              if (*(uint *)(param_1 + 0x584) < iVar3 + 1U) {
                FUN_146276acc(lVar1,iVar3);
              }
              lVar9 = *(longlong *)(param_1 + 0x578);
              if (*(longlong *)(param_1 + 0x578) == 0) {
                lVar9 = lVar1;
              }
              *(undefined8 *)(lVar9 + (longlong)iVar3 * 8) = local_88;
              (**(code **)(*plVar10 + 0x2b8))(plVar10);
              local_79 = local_79 + '\x01';
              lVar8 = lVar8 + 8;
            } while (lVar7 * 8 != lVar8);
          }
          if (local_78 != 0) {
            FUN_1400020a8(local_78);
          }
          if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar6);
}



// FUNCTION 14576aa48 FUN_14576aa48 body=316 status=ok
// SIG undefined FUN_14576aa48(void)

undefined4 * FUN_14576aa48(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14576ac90(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar9 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4);
  cVar5 = FUN_14576abea(param_1,iVar9,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    cVar5 = FUN_14576ab86(param_1,*(int *)(param_1 + 0x288) - *(int *)(param_1 + 0x2ac));
    if (cVar5 == '\0') {
      uVar6 = (longlong)iVar9 & (longlong)*(int *)(param_1 + 0x2f8) - 1U;
      iVar9 = (int)uVar6;
      *(int *)(local_40 + 2) = iVar9;
      lVar8 = *(longlong *)(param_1 + 0x2f0);
      if (*(longlong *)(param_1 + 0x2f0) == 0) {
        lVar8 = param_1 + 0x2b0;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U & uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x2f0);
      if (*(longlong *)(param_1 + 0x2f0) == 0) {
        lVar8 = param_1 + 0x2b0;
      }
      *(undefined4 *)(lVar8 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x2f8) - 1U) * 4) =
           uVar4;
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576ab86 FUN_14576ab86 body=100 status=ok
// SIG undefined FUN_14576ab86(void)

undefined8 FUN_14576ab86(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 4) {
    iVar4 = 0x10;
  }
  if (param_2 < 4) {
    iVar4 = 0x10;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x2f8))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x2f8) = iVar4;
    FUN_14576b4e4(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14576abea FUN_14576abea body=166 status=ok
// SIG undefined FUN_14576abea(void)

undefined8 FUN_14576abea(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x288) - *(int *)(param_1 + 0x2ac) != 1) &&
     (*(int *)(param_1 + 0x288) != *(int *)(param_1 + 0x2ac))) {
    lVar2 = param_1 + 0x2b0;
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x2f0);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x2f8) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = *(longlong *)(param_1 + 0x280);
        if (*(longlong *)(param_1 + 0x280) == 0) {
          lVar2 = param_1;
        }
        plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x14);
        if (*plVar1 == *param_3) break;
        iVar3 = *(int *)((longlong)plVar1 + 0xc);
        if (iVar3 == -1) {
          return 0;
        }
      }
      lVar2 = *param_3;
      *(int *)(plVar1 + 1) = (int)param_3[1];
      *plVar1 = lVar2;
      FUN_1476ff4b2(param_1,*param_4);
      *param_4 = iVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14576ac90 FUN_14576ac90 body=302 status=ok
// SIG undefined FUN_14576ac90(void)

int * FUN_14576ac90(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x2ac) == 0) {
    iVar6 = *(int *)(param_1 + 0x288);
    *(int *)(param_1 + 0x288) = iVar6 + 1;
    if (*(int *)(param_1 + 0x28c) == iVar6) {
      FUN_1476ff428(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 0x290,1);
    lVar5 = *(longlong *)(param_1 + 0x298);
    if (*(longlong *)(param_1 + 0x298) == 0) {
      lVar5 = param_1 + 0x290;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x280);
    if (*(longlong *)(param_1 + 0x280) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x2a8);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar5 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 0x2a8) = iVar3;
    iVar4 = *(int *)(param_1 + 0x2ac) + -1;
    *(int *)(param_1 + 0x2ac) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0x290;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x298);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0x280);
  if (*(longlong *)(param_1 + 0x280) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x14;
  return param_2;
}



// FUNCTION 14576adbe FUN_14576adbe body=96 status=ok
// SIG undefined FUN_14576adbe(void)

void FUN_14576adbe(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar3;
    FUN_1476ff546(param_1,*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 14576ae1e FUN_14576ae1e body=98 status=ok
// SIG undefined FUN_14576ae1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14576ae1e(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_20);
  local_18 = 0;
  FUN_14592e6ce(&local_18,local_20);
  _DAT_14cab6e78 = local_18;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576ae90 FUN_14576ae90 body=98 status=ok
// SIG undefined FUN_14576ae90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14576ae90(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_20);
  local_18 = 0;
  FUN_14592e6ce(&local_18,local_20);
  _DAT_14cab6e80 = local_18;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576af02 FUN_14576af02 body=105 status=ok
// SIG undefined FUN_14576af02(void)

void FUN_14576af02(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = iVar3;
    FUN_1476ff1b8(param_1,*(undefined4 *)(param_1 + 0x108));
    return;
  }
  return;
}



// FUNCTION 14576af6c FUN_14576af6c body=112 status=ok
// SIG undefined FUN_14576af6c(void)

void FUN_14576af6c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x20;
    if (0x20 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = (int)uVar2;
    FUN_14705575c(param_1,*(undefined4 *)(param_1 + 0x108),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 14576afdc FUN_14576afdc body=124 status=ok
// SIG undefined FUN_14576afdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14576afdc(longlong *param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_20);
  _DAT_14cab73f0 = 0;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_28);
  _DAT_14cab73e8 = 0;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_30);
  _DAT_14cab73f8 = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576b068 FUN_14576b068 body=131 status=ok
// SIG undefined FUN_14576b068(void)

void FUN_14576b068(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = (ulonglong)
          ((((uint)(param_2 >> 1) & 0x7fffffff) - 1) + (uint)((param_2 >> 1 & 0x7fffffff) == 0)) * 2
          + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 2) {
    iVar3 = 4;
  }
  if ((uint)param_2 < 4) {
    iVar3 = 4;
  }
  if ((((int)(uint)param_2 < 1) || (iVar3 <= *(int *)(param_1 + 0xe8))) &&
     (*(int *)(param_1 + 0xe8) <= iVar3)) {
    FUN_1476ff5ca(param_1);
    FUN_145c103a4(param_1,param_2 & 0xffffffff);
    return;
  }
  FUN_145c103a4(param_1,param_2 & 0xffffffff);
  *(int *)(param_1 + 0xe8) = iVar3;
  FUN_14576b704(param_1);
  return;
}



// FUNCTION 14576b0ec FUN_14576b0ec body=132 status=ok
// SIG undefined FUN_14576b0ec(void)

void FUN_14576b0ec(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = (ulonglong)
          ((((uint)(param_2 >> 1) & 0x7fffffff) - 1) + (uint)((param_2 >> 1 & 0x7fffffff) == 0)) * 2
          + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 4) {
    iVar3 = 0x10;
  }
  if ((uint)param_2 < 4) {
    iVar3 = 0x10;
  }
  if ((((int)(uint)param_2 < 1) || (iVar3 <= *(int *)(param_1 + 0x2f8))) &&
     (*(int *)(param_1 + 0x2f8) <= iVar3)) {
    FUN_1476ff246(param_1);
    FUN_145c104a6(param_1,param_2 & 0xffffffff);
    return;
  }
  FUN_145c104a6(param_1,param_2 & 0xffffffff);
  *(int *)(param_1 + 0x2f8) = iVar3;
  FUN_14576b4e4(param_1);
  return;
}



// FUNCTION 14576b170 FUN_14576b170 body=316 status=ok
// SIG undefined FUN_14576b170(void)

undefined4 * FUN_14576b170(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14576b3b6(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar9 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4);
  cVar5 = FUN_14576b312(param_1,iVar9,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    cVar5 = FUN_14576b2ae(param_1,*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xcc));
    if (cVar5 == '\0') {
      uVar6 = (longlong)iVar9 & (longlong)*(int *)(param_1 + 0xe8) - 1U;
      iVar9 = (int)uVar6;
      *(int *)(local_40 + 2) = iVar9;
      lVar8 = *(longlong *)(param_1 + 0xe0);
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        lVar8 = param_1 + 0xd0;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0xe0);
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        lVar8 = param_1 + 0xd0;
      }
      *(undefined4 *)(lVar8 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0xe8) - 1U) * 4) =
           uVar4;
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576b2ae FUN_14576b2ae body=99 status=ok
// SIG undefined FUN_14576b2ae(void)

undefined8 FUN_14576b2ae(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 2) {
    iVar4 = 4;
  }
  if (param_2 < 4) {
    iVar4 = 4;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0xe8))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0xe8) = iVar4;
    FUN_14576b704(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14576b312 FUN_14576b312 body=163 status=ok
// SIG undefined FUN_14576b312(void)

undefined8 FUN_14576b312(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xcc) != 1) &&
     (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xcc))) {
    lVar2 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe0);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar2 = param_1;
      }
      do {
        plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x14);
        if (*plVar1 == *param_3) {
          lVar2 = *param_3;
          *(int *)(plVar1 + 1) = (int)param_3[1];
          *plVar1 = lVar2;
          FUN_1476ff82e(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14576b3b6 FUN_14576b3b6 body=302 status=ok
// SIG undefined FUN_14576b3b6(void)

int * FUN_14576b3b6(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    iVar6 = *(int *)(param_1 + 0xa8);
    *(int *)(param_1 + 0xa8) = iVar6 + 1;
    if (*(int *)(param_1 + 0xac) == iVar6) {
      FUN_1476ff7a4(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 0xb0,1);
    lVar5 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      lVar5 = param_1 + 0xb0;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 200);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar5 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 200) = iVar3;
    iVar4 = *(int *)(param_1 + 0xcc) + -1;
    *(int *)(param_1 + 0xcc) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0xb0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xb8);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x14;
  return param_2;
}



// FUNCTION 14576b4e4 FUN_14576b4e4 body=542 status=ok
// SIG undefined FUN_14576b4e4(void)

void FUN_14576b4e4(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FUN_1446efa72(param_1 + 0x2f0,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x2f8);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x2b0;
    uVar7 = 0;
    FUN_1400bf6d8(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x2f0);
        if (*(longlong *)(param_1 + 0x2f0) == 0) {
          lVar6 = lVar1;
        }
        *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x2f8) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 0x290;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x2a0) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar6 = *(longlong *)(local_70 + 0x280);
        if (*(longlong *)(local_70 + 0x280) == 0) {
          lVar6 = local_70;
        }
        lVar5 = (longlong)iVar4;
        uVar3 = *(undefined8 *)(lVar6 + lVar5 * 0x14);
        uVar2 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar7 = (uint)uVar3 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) &
                (longlong)*(int *)(param_1 + 0x2f8) - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar6 + 0x10 + lVar5 * 0x14) = iVar8;
        lVar10 = *(longlong *)(param_1 + 0x2f0);
        if (*(longlong *)(param_1 + 0x2f0) == 0) {
          lVar10 = lVar1;
        }
        *(undefined4 *)(lVar6 + 0xc + lVar5 * 0x14) =
             *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U & uVar9) * 4);
        lVar6 = *(longlong *)(param_1 + 0x2f0);
        if (*(longlong *)(param_1 + 0x2f0) == 0) {
          lVar6 = lVar1;
        }
        *(int *)(lVar6 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0x2f8) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14576b704 FUN_14576b704 body=542 status=ok
// SIG undefined FUN_14576b704(void)

void FUN_14576b704(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1446efa72(param_1 + 0xe0,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0xe8);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0xd0;
    uVar7 = 0;
    FUN_144a8ab24(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar6 = *(longlong *)(param_1 + 0xe0);
        if (*(longlong *)(param_1 + 0xe0) == 0) {
          lVar6 = lVar1;
        }
        *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xe8) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 0xb0;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0xc0) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar6 = *(longlong *)(local_70 + 0xa0);
        if (*(longlong *)(local_70 + 0xa0) == 0) {
          lVar6 = local_70;
        }
        lVar5 = (longlong)iVar4;
        uVar3 = *(undefined8 *)(lVar6 + lVar5 * 0x14);
        uVar2 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar7 = (uint)uVar3 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) &
                (longlong)*(int *)(param_1 + 0xe8) - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar6 + 0x10 + lVar5 * 0x14) = iVar8;
        lVar10 = *(longlong *)(param_1 + 0xe0);
        if (*(longlong *)(param_1 + 0xe0) == 0) {
          lVar10 = lVar1;
        }
        *(undefined4 *)(lVar6 + 0xc + lVar5 * 0x14) =
             *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & uVar9) * 4);
        lVar6 = *(longlong *)(param_1 + 0xe0);
        if (*(longlong *)(param_1 + 0xe0) == 0) {
          lVar6 = lVar1;
        }
        *(int *)(lVar6 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0xe8) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14576b924 FUN_14576b924 body=57 status=ok
// SIG undefined FUN_14576b924(void)

void FUN_14576b924(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c260 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c260 = FUN_140002ddd(FUN_146530ad9,uVar1,L"MissionFactEvaluatorInfo");
  }
  return;
}



// FUNCTION 14576b95e FUN_14576b95e body=57 status=ok
// SIG undefined FUN_14576b95e(void)

void FUN_14576b95e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c650 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c650 = FUN_140002ddd(FUN_146531d1b,uVar1,L"MissionObjectiveAspect_Binder");
  }
  return;
}



// FUNCTION 14576b998 FUN_14576b998 body=57 status=ok
// SIG undefined FUN_14576b998(void)

void FUN_14576b998(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6df80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6df80 = FUN_140002ddd(FUN_14653955e,uVar1,L"ObjectiveValueEvaluator_Boundary");
  }
  return;
}



// FUNCTION 14576b9d2 FUN_14576b9d2 body=147 status=ok
// SIG undefined FUN_14576b9d2(void)

void FUN_14576b9d2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14576ba66 FUN_14576ba66 body=83 status=ok
// SIG undefined FUN_14576ba66(void)

longlong * FUN_14576ba66(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14576b998();
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



// FUNCTION 14576baba FUN_14576baba body=118 status=ok
// SIG undefined FUN_14576baba(void)

undefined1 FUN_14576baba(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    uVar2 = FUN_14576bb31();
    FUN_1446ddc76(&local_30,param_1,1);
    cVar1 = FUN_1412446f0(local_30,uVar2,local_28);
    if (cVar1 != '\0') goto LAB_14576bb0e;
  }
  local_28[0] = 0;
LAB_14576bb0e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_28[0];
}



// FUNCTION 14576bb31 FUN_14576bb31 body=57 status=ok
// SIG undefined FUN_14576bb31(void)

void FUN_14576bb31(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c158 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c158 = FUN_14171c317(FUN_1465303f2,uVar1,L"EMissionObjectiveResolveType");
  }
  return;
}



// FUNCTION 14576bb6a FUN_14576bb6a body=83 status=ok
// SIG undefined FUN_14576bb6a(void)

longlong * FUN_14576bb6a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14576b95e();
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



// FUNCTION 14576bbbe FUN_14576bbbe body=133 status=ok
// SIG undefined FUN_14576bbbe(void)

undefined8 * FUN_14576bbbe(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 == (longlong *)0x0) {
    *param_1 = plVar4;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    param_1[1] = plVar2;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 8))();
  }
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,uVar3);
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
  return param_1;
}



// FUNCTION 14576bc44 FUN_14576bc44 body=83 status=ok
// SIG undefined FUN_14576bc44(void)

longlong * FUN_14576bc44(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140822eba();
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



// FUNCTION 14576bc98 FUN_14576bc98 body=48 status=ok
// SIG undefined FUN_14576bc98(void)

void FUN_14576bc98(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 14576bcc8 FUN_14576bcc8 body=991 status=ok
// SIG undefined FUN_14576bcc8(void)

void FUN_14576bcc8(byte *param_1,longlong param_2,longlong param_3,byte param_4,uint param_5,
                  char param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong local_50;
  
  uVar10 = param_5 & 0xffffff | (uint)param_4 << 0x18;
  uVar5 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar11 = (ulonglong)((uVar5 & 0xffff ^ uVar5 >> 0x10) & *(uint *)(param_1 + 0x1c));
  lVar7 = *(longlong *)(param_1 + 8);
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0x28) + uVar11 * 4);
  uVar14 = (ulonglong)uVar5;
  uVar8 = uVar14;
  if (uVar14 != 0xffffffff) {
    do {
      uVar9 = (uint)uVar8;
      local_50 = (longlong)(int)uVar9;
      if (*(uint *)(lVar7 + local_50 * 0x18) == uVar10) {
        lVar7 = lVar7 + local_50 * 0x18;
        if (*(uint *)(param_1 + 0x20) <= uVar9) goto LAB_14576bda4;
        if (uVar5 != uVar9) goto LAB_14576c015;
        *(undefined4 *)(*(longlong *)(param_1 + 0x28) + uVar11 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x30) + uVar14 * 4);
        uVar9 = uVar5;
        goto LAB_14576bda4;
      }
      uVar9 = *(uint *)(*(longlong *)(param_1 + 0x30) + uVar8 * 4);
      uVar8 = (ulonglong)uVar9;
    } while (uVar9 != 0xffffffff);
  }
  lVar7 = lVar7 + -0x18;
  local_50 = -1;
  uVar9 = 0xffffffff;
  goto LAB_14576bda4;
  while( true ) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    uVar5 = *(uint *)(lVar1 + uVar11 * 4);
    uVar14 = (ulonglong)uVar5;
    if (uVar5 == uVar9) break;
LAB_14576c015:
    uVar11 = uVar14;
    if ((int)uVar11 == -1) goto LAB_14576bda4;
  }
  *(undefined4 *)(lVar1 + uVar11 * 4) = *(undefined4 *)(lVar1 + uVar8 * 4);
LAB_14576bda4:
  if (param_6 != '\0') {
    bVar4 = (byte)(param_4 + 1);
    if (bVar4 <= ((byte)(*(uint *)(lVar7 + 0x14) >> 0x18) & 0xf)) {
      bVar4 = (char)*(undefined4 *)(param_1 + 4) * bVar4;
      uVar10 = (param_5 >> (bVar4 & 0x1f)) << (bVar4 & 0x1f);
      uVar5 = param_4 + 1;
      do {
        uVar6 = uVar5 << 0x18 | uVar10 & 0xffffff;
        uVar12 = (uVar6 >> 0x10 ^ uVar6) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        uVar12 = *(uint *)(*(longlong *)(param_1 + 0x28) +
                          (ulonglong)
                          ((uVar12 & 0xffff ^ uVar12 >> 0x10) & *(uint *)(param_1 + 0x1c)) * 4);
        if (uVar12 != 0xffffffff) {
          do {
            if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar12 * 0x18) == uVar6) {
              uVar5 = *(uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar12 * 0x18 + 0x14);
              uVar10 = *(uint *)(*(longlong *)
                                  (*(longlong *)(param_2 + 0x90) + (ulonglong)(uVar5 >> 0xd & 0x7f8)
                                  ) + 0x28);
              param_3 = param_3 + (ulonglong)*param_1 * 0x10;
              iVar3 = *(int *)(param_3 + 0x660);
              *(uint *)(param_3 + 0x660) = iVar3 + 1U;
              if (*(uint *)(param_3 + 0x664) < iVar3 + 1U) {
                FUN_14024b854((longlong *)(param_3 + 0x658),iVar3);
              }
              *(ulonglong *)(*(longlong *)(param_3 + 0x658) + (longlong)iVar3 * 8) =
                   (ulonglong)param_5 |
                   (ulonglong)
                   (((uVar5 & 0xffff) / uVar10 & 0xff) << 8 | (uVar5 & 0xffff) % uVar10 & 0xff) <<
                   0x20 | (ulonglong)(uVar5 >> 0x1c) << 0x30 | (ulonglong)param_4 << 0x38;
              goto LAB_14576bf12;
            }
            uVar12 = *(uint *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar12 * 4);
          } while (uVar12 != 0xffffffff);
        }
        bVar4 = (char)(uVar5 + 1) * (char)*(undefined4 *)(param_1 + 4);
        uVar10 = (uVar10 >> (bVar4 & 0x1f)) << (bVar4 & 0x1f);
        bVar15 = uVar5 < (*(uint *)(lVar7 + 0x14) >> 0x18 & 0xf);
        uVar5 = uVar5 + 1;
      } while (bVar15);
    }
  }
LAB_14576bf12:
  uVar5 = *(uint *)(param_1 + 0xa0);
  if (0 < (int)uVar5) {
    lVar7 = *(longlong *)(param_1 + 0x98);
    uVar8 = 0;
    do {
      if (uVar9 == *(uint *)(lVar7 + uVar8 * 8)) {
        if (uVar5 - 1 != (int)uVar8) {
          iVar13 = (uVar5 - 1) - (int)uVar8;
          iVar3 = 1;
          if (iVar13 < 1) {
            iVar3 = iVar13;
          }
          memmove((void *)(lVar7 + uVar8 * 8),(void *)(lVar7 + (ulonglong)(uVar5 - iVar3) * 8),
                  (longlong)iVar3 << 3);
          uVar5 = *(uint *)(param_1 + 0xa0);
        }
        *(uint *)(param_1 + 0xa0) = uVar5 - 1;
        goto LAB_14576bf9a;
      }
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
  }
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    do {
      uVar5 = (uint)(iVar3 - iVar13) >> 1;
      iVar2 = uVar5 + iVar13;
      if (*(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 4) <
          ((uint)param_4 << 0x18 | param_5)) {
        iVar13 = iVar13 + uVar5 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
    } while (iVar13 != iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar3 + 1U) {
    FUN_1447808da(param_1 + 0x88,iVar3);
  }
  *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 4) = iVar13;
LAB_14576bf9a:
  lVar7 = *(longlong *)(param_1 + 8);
  local_50 = local_50 * 0x18;
  iVar3 = *(int *)(lVar7 + 4 + local_50);
  iVar13 = *(int *)(lVar7 + 8 + local_50);
  *(int *)(lVar7 + 4 + (longlong)iVar13 * 0x18) = iVar3;
  *(int *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar3 * 0x18) = iVar13;
  *(uint *)(lVar7 + 8 + local_50) = uVar9;
  *(uint *)(lVar7 + 4 + local_50) = uVar9;
  lVar7 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar7 + 4 + local_50) = 2;
  iVar3 = *(int *)(lVar7 + 0x38);
  *(int *)(lVar7 + 8 + local_50) = iVar3;
  *(uint *)(*(longlong *)(param_1 + 8) + 4 + (longlong)iVar3 * 0x18) = uVar9;
  *(uint *)(lVar7 + 0x38) = uVar9;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  param_1[0x80] = 1;
  return;
}



// FUNCTION 14576c0a8 FUN_14576c0a8 body=132 status=ok
// SIG undefined FUN_14576c0a8(void)

void FUN_14576c0a8(longlong param_1,int param_2)

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



// FUNCTION 14576c12e FUN_14576c12e body=132 status=ok
// SIG undefined FUN_14576c12e(void)

void FUN_14576c12e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14576c1b4 FUN_14576c1b4 body=67 status=ok
// SIG undefined FUN_14576c1b4(void)

void FUN_14576c1b4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14576c2d2(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
  if (iVar1 == *(int *)(param_1 + 0x174)) {
    return;
  }
  *(int *)(param_1 + 0x174) = iVar1;
  FUN_14896c982(param_1,*(undefined4 *)(param_1 + 0x170),iVar1);
  return;
}



// FUNCTION 14576c1f8 FUN_14576c1f8 body=102 status=ok
// SIG undefined FUN_14576c1f8(void)

void FUN_14576c1f8(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x48);
  FUN_14576c25e(_Dst);
  iVar1 = *(int *)(param_1 + 0x170);
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)(int)(~param_2 + iVar1) * 0x48);
    iVar1 = *(int *)(param_1 + 0x170);
  }
  *(int *)(param_1 + 0x170) = iVar1 + -1;
  return;
}



// FUNCTION 14576c25e FUN_14576c25e body=116 status=ok
// SIG undefined FUN_14576c25e(void)

void FUN_14576c25e(char *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
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
  FUN_1448173f8(param_1 + 0x28);
  cVar3 = *param_1;
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    else if ((cVar3 == '\x03') &&
            (plVar4 = *(longlong **)(param_1 + 0x10), plVar4 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *param_1 = '\0';
  }
  return;
}



// FUNCTION 14576c2d2 FUN_14576c2d2 body=129 status=ok
// SIG undefined FUN_14576c2d2(void)

ulonglong FUN_14576c2d2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 5;
  if (5 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x48) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x48,0);
      uVar1 = uVar1 / 0x48;
    }
  }
  return uVar1;
}



// FUNCTION 14576c354 FUN_14576c354 body=114 status=ok
// SIG undefined FUN_14576c354(void)

void FUN_14576c354(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    iVar2 = (int)(uVar1 / 0x98);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x98,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14576c3c6 FUN_14576c3c6 body=146 status=ok
// SIG undefined FUN_14576c3c6(void)

void FUN_14576c3c6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_2 + 0x100);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0xf8);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar5);
      if (lVar4 != 0) {
        uVar3 = FUN_14576c458(lVar4);
        lVar4 = FUN_14576c45e(lVar4);
        if (*(char *)(lVar4 + 0x20) == '\x01') {
          FUN_14710dc51(param_1,lVar4,uVar3,param_3);
        }
        else {
          FUN_140acbdc7(param_1,lVar4 + 0x10,uVar3,param_3);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 14576c458 FUN_14576c458 body=5 status=ok
// SIG undefined FUN_14576c458(void)

longlong FUN_14576c458(longlong param_1)

{
  return param_1 + 0x20;
}



// FUNCTION 14576c45e FUN_14576c45e body=5 status=ok
// SIG undefined FUN_14576c45e(void)

longlong FUN_14576c45e(longlong param_1)

{
  return param_1 + 0x60;
}



// FUNCTION 14576c464 FUN_14576c464 body=146 status=ok
// SIG undefined FUN_14576c464(void)

void FUN_14576c464(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14576c4f8 FUN_14576c4f8 body=221 status=ok
// SIG undefined FUN_14576c4f8(void)

undefined4 FUN_14576c4f8(longlong param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88);
  FUN_1448729ea(param_1 + 0x310,local_58,local_88);
  uVar3 = FUN_144a7ecd0(local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_58;
    if (0x18 < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576c5d6 FUN_14576c5d6 body=456 status=ok
// SIG undefined FUN_14576c5d6(void)

undefined8 * FUN_14576c5d6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_128 [40];
  undefined1 local_100 [40];
  undefined4 local_d8;
  undefined8 **local_d0 [3];
  ushort local_b8;
  byte local_b0;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 **local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_2 = 0;
  local_a8[0] = 0;
  local_80 = 0;
  FUN_1456bb102(local_a8,param_3);
  FUN_1448729ea(param_1 + 0x368,local_78,local_a8);
  uVar3 = FUN_144a7ecd0(local_78);
  local_100[0] = 0;
  local_d8 = 0;
  FUN_1456bb102(local_100,param_3);
  FUN_1448729ea(param_1 + 0x3b8,local_d0,local_100);
  uVar4 = FUN_144a7ecd0(local_d0);
  FUN_140acda08(param_2,uVar4,uVar3,1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_d0;
    if (0x18 < local_b8) {
      pppuVar2 = (undefined8 ***)local_d0[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_b8) {
    FUN_1400020a8(local_d0[0]);
  }
  FUN_144a5ac3a(local_100);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_78;
    if (0x18 < local_60) {
      pppuVar2 = (undefined8 ***)local_78[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(local_a8);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576c79f FUN_14576c79f body=454 status=ok
// SIG undefined FUN_14576c79f(void)

ulonglong FUN_14576c79f(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [40];
  undefined4 local_a8;
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  else {
    plVar10 = (longlong *)*param_1;
    lVar11 = (longlong)*(int *)(param_1 + 1) * 0x18;
    do {
      lVar11 = lVar11 + -0x18;
      local_d0[0] = 0;
      local_a8 = 0;
      FUN_1456bb102(local_d0,param_2);
      local_a0[0] = 0;
      local_78 = 0;
      lVar6 = plVar10[1];
      if (lVar6 == 0) {
        uVar5 = FUN_14016979c();
        lVar6 = FUN_14477b664(uVar5);
        plVar10[1] = lVar6;
      }
      lVar8 = plVar10[2];
      if (lVar8 == 0) {
        if (lVar6 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if (*plVar10 != 0) {
            plVar2 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
              lVar8 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar8 = FUN_144aff482(uVar5,plVar10);
            }
            plVar10[2] = lVar8;
          }
        }
      }
      FUN_144750e81(local_70,lVar8,local_d0);
      uVar4 = FUN_144a7fca4(local_70);
      uVar9 = (ulonglong)uVar4;
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppuVar7 = local_70;
        if (0x18 < local_58) {
          ppppuVar7 = (undefined8 ****)local_70[0];
        }
        (*pcVar1)(ppppuVar7);
      }
      if (0x18 < local_58) {
        FUN_1400020a8(local_70[0]);
      }
      FUN_144a5ac3a(local_a0);
      FUN_144a5ac3a(local_d0);
      plVar10 = plVar10 + 3;
    } while (((byte)uVar4 & lVar11 != 0) != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14576c966 FUN_14576c966 body=132 status=ok
// SIG undefined FUN_14576c966(void)

void FUN_14576c966(longlong param_1,int param_2)

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



// FUNCTION 14576c9ec FUN_14576c9ec body=992 status=ok
// SIG undefined FUN_14576c9ec(void)

void FUN_14576c9ec(longlong *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined1 auStack_158 [32];
  longlong local_138 [2];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  int iStack_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [80];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  (**(code **)(*param_1 + 0x470))();
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    cVar9 = FUN_140124222(param_1);
    if (cVar9 == '\0') {
      plVar2 = (longlong *)param_1[2];
      lVar16 = plVar2[0x22];
      if (lVar16 == 0) {
        (**(code **)(*plVar2 + 1000))(plVar2);
        lVar16 = plVar2[0x22];
      }
      lVar3 = param_1[0x5f];
      FUN_14576d036(param_1 + 0x146,lVar16 + 0xa30);
      uVar7 = local_108 >> 8;
      local_108 = local_108 & 0xffffff00;
      uStack_104 = 0;
      uStack_100 = 0;
      if (lVar3 != 0) {
        local_108 = CONCAT31((int3)uVar7,*(undefined1 *)(lVar3 + 0x4c8));
        *(undefined1 *)(lVar3 + 0x4c8) = 0;
        FUN_14485c47a(&uStack_104,lVar3);
      }
      lVar14 = *(longlong *)(lVar16 + 0x2f8);
      lVar12 = (longlong)&local_118 + 4;
      uVar7 = (uint)local_118 >> 8;
      local_118._0_4_ = (uint)local_118 & 0xffffff00;
      local_118._4_4_ = 0;
      iStack_110 = 0;
      if (lVar14 != 0) {
        local_118._0_4_ = CONCAT31((int3)uVar7,*(undefined1 *)(lVar14 + 0x4c8));
        *(undefined1 *)(lVar14 + 0x4c8) = 0;
        FUN_14485c47a(lVar12);
      }
      uVar1 = *(undefined1 *)(lVar3 + 0x2e8);
      *(undefined1 *)(lVar3 + 0x2e8) = 1;
      FUN_140ad4952(lVar3,*(undefined8 *)(lVar16 + 0x2f8),1);
      FUN_140ad5be4(lVar3,0xff);
      *(undefined1 *)(lVar3 + 0x2e8) = uVar1;
      cVar9 = FUN_144729dda(lVar12);
      if (cVar9 != '\0') {
        lVar12 = FUN_14479d2ce(lVar12);
        *(undefined1 *)(lVar12 + 0x4c8) = (undefined1)local_118;
      }
      cVar9 = FUN_144729dda(&uStack_104);
      if (cVar9 != '\0') {
        lVar12 = FUN_14479d2ce(&uStack_104);
        *(undefined1 *)(lVar12 + 0x4c8) = (undefined1)local_108;
      }
      local_e8 = 0;
      local_e0 = 0;
      local_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      local_dc = 0xffffffff00000080;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      if ((longlong)(int)param_1[0x147] != 0) {
        plVar15 = (longlong *)param_1[0x146];
        plVar2 = plVar15 + (longlong)(int)param_1[0x147] * 3;
        do {
          local_128 = (undefined4)*plVar15;
          uStack_124 = *(undefined4 *)((longlong)plVar15 + 4);
          uStack_120 = (undefined4)plVar15[1];
          uStack_11c = *(undefined4 *)((longlong)plVar15 + 0xc);
          local_138[0] = 0;
          local_138[1] = 0;
          FUN_1401031ac(param_1,0,local_138);
          FUN_1491f7680(&local_118,local_138,plVar15 + 2);
          *plVar15 = (longlong)local_118;
          *(int *)(plVar15 + 1) = iStack_110;
          *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_10c;
          if (local_138[0] != 0) {
            FUN_1400020a8();
          }
          local_118 = &local_128;
          iStack_110 = (int)plVar15;
          uStack_10c = (undefined4)((ulonglong)plVar15 >> 0x20);
          FUN_1491c9e1c(&local_108,local_138,&local_118);
          plVar15 = plVar15 + 3;
        } while (plVar15 != plVar2);
      }
      FUN_140ad460c(lVar3,&local_118,0);
      puVar8 = local_118;
      lVar12 = (longlong)iStack_110;
      if (lVar12 != 0) {
        lVar14 = 0;
        do {
          lVar4 = *(longlong *)((longlong)puVar8 + lVar14);
          puVar17 = (undefined4 *)(lVar4 + 0x110);
          uVar10 = FUN_1447addd0(puVar17,0x10);
          iVar11 = FUN_1491ca092(&local_108,uVar10,puVar17);
          lVar13 = (longlong)iVar11 * 0x28 + CONCAT44(uStack_104,local_108);
          if (lVar13 != 0 && iVar11 != -1) {
            uVar10 = *(undefined4 *)(lVar13 + 0x14);
            uVar5 = *(undefined4 *)(lVar13 + 0x18);
            uVar6 = *(undefined4 *)(lVar13 + 0x1c);
            *puVar17 = *(undefined4 *)(lVar13 + 0x10);
            *(undefined4 *)(lVar4 + 0x114) = uVar10;
            *(undefined4 *)(lVar4 + 0x118) = uVar5;
            *(undefined4 *)(lVar4 + 0x11c) = uVar6;
          }
          lVar14 = lVar14 + 8;
        } while (lVar12 * 8 != lVar14);
      }
      if (local_118 != (undefined4 *)0x0) {
        FUN_1400020a8(local_118);
      }
      local_c0 = 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      FUN_14576ce90(&local_108);
      FUN_140ad4746(lVar3,6,0);
      *(undefined4 *)((longlong)param_1 + 0x2a4) = *(undefined4 *)(lVar16 + 0x2a4);
      FUN_14576d170(&local_108,lVar16 + 0x6b0,lVar3);
      FUN_14576cdd4(param_1 + 0xd6,&local_108);
      FUN_14576ce32(param_1 + 0xe0,local_b8);
      *(undefined4 *)(param_1 + 0xea) = local_68;
      FUN_1456e440c(&local_108);
      if (*(longlong *)(lVar16 + 0x2f8) != 0) {
        *(int *)((longlong)param_1 + 0x2a4) =
             *(int *)((longlong)param_1 + 0x2a4) + *(int *)(*(longlong *)(lVar16 + 0x2f8) + 0xc0);
      }
    }
    FUN_14576cec6(param_1 + 0xed);
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14576cdd4 FUN_14576cdd4 body=93 status=ok
// SIG undefined FUN_14576cdd4(void)

longlong FUN_14576cdd4(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14576cf0a(param_1);
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



// FUNCTION 14576ce32 FUN_14576ce32 body=93 status=ok
// SIG undefined FUN_14576ce32(void)

longlong FUN_14576ce32(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14576cfa0(param_1);
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



// FUNCTION 14576ce90 FUN_14576ce90 body=53 status=ok
// SIG undefined FUN_14576ce90(void)

void FUN_14576ce90(longlong *param_1)

{
  FUN_14576d086();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14576cec6 FUN_14576cec6 body=68 status=ok
// SIG undefined FUN_14576cec6(void)

void FUN_14576cec6(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1491ca334();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14576cf0a FUN_14576cf0a body=150 status=ok
// SIG undefined FUN_14576cf0a(void)

longlong * FUN_14576cf0a(longlong *param_1,longlong *param_2)

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



// FUNCTION 14576cfa0 FUN_14576cfa0 body=150 status=ok
// SIG undefined FUN_14576cfa0(void)

longlong * FUN_14576cfa0(longlong *param_1,longlong *param_2)

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



// FUNCTION 14576d036 FUN_14576d036 body=79 status=ok
// SIG undefined FUN_14576d036(void)

undefined8 * FUN_14576d036(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491c9d5c(param_1,iVar1);
      FUN_1491c9dcf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14576d086 FUN_14576d086 body=90 status=ok
// SIG undefined FUN_14576d086(void)

void FUN_14576d086(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140957390(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14576d0e0 FUN_14576d0e0 body=143 status=ok
// SIG undefined FUN_14576d0e0(void)

void FUN_14576d0e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar1 = (longlong *)param_1[2];
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    if ((DAT_14c950c29 == '\x01') && (*(longlong *)(lVar2 + 0x58) != 0)) {
      FUN_1456cec3c();
    }
    (**(code **)(*param_1 + 0x340))(param_1);
    FUN_140ad4584(param_1 + 0x2c,lVar2 + 0x160);
    FUN_14591e93c(param_1 + 6,lVar2 + 0x30);
    return;
  }
  return;
}



// FUNCTION 14576d170 FUN_14576d170 body=579 status=ok
// SIG undefined FUN_14576d170(void)

undefined8 * FUN_14576d170(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  uVar2 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_14920ebb8(param_1,uVar2);
    iVar3 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar3)) {
      *(int *)(param_1 + 9) = iVar3;
      FUN_14920ed52(param_1);
    }
  }
  uVar4 = (longlong)(int)param_2[0xb] - (longlong)*(int *)((longlong)param_2 + 0x84);
  uVar2 = (uint)uVar4;
  if ((uint)(*(int *)(param_1 + 0xb) - *(int *)((longlong)param_1 + 0x84)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar4);
    }
    FUN_14920ef3a(param_1 + 10,uVar4 & 0xffffffff);
    iVar3 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x13) == 0) || (*(int *)(param_1 + 0x13) < iVar3)) {
      *(int *)(param_1 + 0x13) = iVar3;
      FUN_1491ca918(param_1 + 10);
    }
  }
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (local_50 != plVar1)) {
    do {
      do {
        FUN_1491e1300(param_1,*local_80 + (longlong)iStack_64 * 0x38,
                      *local_80 + (longlong)iStack_64 * 0x38 + 0x10,param_3);
        local_68 = local_68 & ~local_78._4_4_;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while ((local_70 != plVar1) || (local_80 != param_2));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14576d3b6 FUN_14576d3b6 body=169 status=ok
// SIG undefined FUN_14576d3b6(void)

bool FUN_14576d3b6(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576d460 FUN_14576d460 body=83 status=ok
// SIG undefined FUN_14576d460(void)

void FUN_14576d460(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x48) == '\0') {
    FUN_14576d4b4();
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_141095a0a();
    }
    FUN_140ad4892(param_1 + 0x30,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 14576d4b4 FUN_14576d4b4 body=80 status=ok
// SIG undefined FUN_14576d4b4(void)

undefined4 FUN_14576d4b4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
    lVar2 = FUN_141095a0a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return CONCAT31((int3)(*(uint *)(lVar1 + 8) >> 8),(*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0);
    }
  }
  return 0;
}



// FUNCTION 14576d504 FUN_14576d504 body=314 status=ok
// SIG undefined FUN_14576d504(void)

bool FUN_14576d504(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_98 = *(longlong *)(lVar1 + 0x10);
    uStack_50 = *(undefined8 *)(lVar1 + 0x18);
    local_88 = *(longlong **)(lVar1 + 0x20);
    uStack_40 = *(undefined8 *)(lVar1 + 0x28);
    local_38 = *(undefined8 *)(lVar1 + 0x30);
    uStack_30 = *(undefined8 *)(lVar1 + 0x38);
    local_28 = *(undefined8 *)(lVar1 + 0x40);
    uStack_20 = *(undefined8 *)(lVar1 + 0x48);
    uVar7 = local_28;
    uVar8 = uStack_20;
    uVar5 = local_38;
    uVar6 = uStack_30;
    local_48 = local_88;
    uVar4 = uStack_40;
    local_58 = local_98;
    uVar3 = uStack_50;
    *(ulonglong *)(lVar1 + 0x40) = CONCAT44(uStack_64,local_68);
    *(ulonglong *)(lVar1 + 0x48) = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)(lVar1 + 0x30) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(lVar1 + 0x38) = CONCAT44(uStack_6c,uStack_70);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(ulonglong *)(lVar1 + 0x28) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(ulonglong *)(lVar1 + 0x18) = CONCAT44(uStack_8c,uStack_90);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    local_68 = (undefined4)local_28;
    uStack_64 = local_28._4_4_;
    uStack_60 = (undefined4)uStack_20;
    uStack_5c = uStack_20._4_4_;
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_50 = uVar3;
    uStack_40 = uVar4;
    local_38 = uVar5;
    uStack_30 = uVar6;
    local_28 = uVar7;
    uStack_20 = uVar8;
    if (local_98 != 0) {
      plVar9 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar9 = (longlong *)&local_78;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        plVar9 = (longlong *)(lVar2 + 0x30);
        if (*(longlong **)(lVar2 + 0x20) != (longlong *)0x0) {
          plVar9 = *(longlong **)(lVar2 + 0x20);
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576d640 FUN_14576d640 body=129 status=ok
// SIG undefined FUN_14576d640(void)

void FUN_14576d640(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 5) {
      iVar5 = 4;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x5c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x14,0);
      iVar4 = (int)(uVar3 / 0x14);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x5c) = iVar5;
    FUN_14576d6c2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14576d6c2 FUN_14576d6c2 body=139 status=ok
// SIG undefined FUN_14576d6c2(void)

void FUN_14576d6c2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,0x14);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 * 0x14);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,0x14);
  return;
}



// FUNCTION 14576d74e FUN_14576d74e body=318 status=ok
// SIG undefined FUN_14576d74e(void)

undefined4 *
FUN_14576d74e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14576d936(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar3;
  *(undefined4 *)(local_48 + 2) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar5;
  *(undefined4 *)(local_48 + 3) = puVar1[4];
  *(undefined4 *)((longlong)local_48 + 0x1c) = 0xffffffff;
  local_54 = local_50[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  local_68 = param_4;
  cVar6 = FUN_14576d88e(param_1,uVar11,local_48,&local_54);
  uVar3 = local_54;
  if (cVar6 == '\0') {
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
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)(local_48 + 4) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_48 + 0x1c) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14576da26(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576d88e FUN_14576d88e body=168 status=ok
// SIG undefined FUN_14576d88e(void)

void FUN_14576d88e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  longlong *plVar8;
  int iVar9;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar9 * 0x24);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar9 * 0x24) == param_3[1])
           ) {
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          uVar2 = *(undefined8 *)(param_3 + 4);
          piVar1[6] = param_3[6];
          *(undefined8 *)(piVar1 + 4) = uVar2;
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          FUN_1457503d8(iVar3,*param_4);
          *param_4 = iVar9;
          uVar7 = 1;
          goto LAB_14576d900;
        }
        iVar9 = piVar1[7];
      } while (iVar9 != -1);
    }
  }
  uVar7 = 0;
LAB_14576d900:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 14576d936 FUN_14576d936 body=240 status=ok
// SIG undefined FUN_14576d936(void)

int * FUN_14576d936(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x24) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 14576da26 FUN_14576da26 body=440 status=ok
// SIG undefined FUN_14576da26(void)

void FUN_14576da26(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)(*(uint *)(lVar3 + 4 + lVar6 * 0x24) ^ *(uint *)(lVar3 + lVar6 * 0x24)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x20 + lVar6 * 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x1c + lVar6 * 0x24) =
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



// FUNCTION 14576dbe0 FUN_14576dbe0 body=241 status=ok
// SIG undefined FUN_14576dbe0(void)

undefined4 * FUN_14576dbe0(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = 0;
  do {
    (**(code **)(*param_1 + 0x110))(param_1,&local_48,iVar5);
    if (local_48 != (undefined8 *)0x0) {
      cVar4 = (**(code **)*local_48)(local_48,param_3);
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0x180))(param_1,param_2,iVar5);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_40 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)local_40 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
        goto LAB_14576dca3;
      }
    }
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  *param_2 = 0xffffffff;
LAB_14576dca3:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576dcd2 FUN_14576dcd2 body=42 status=ok
// SIG undefined FUN_14576dcd2(void)

undefined4 * FUN_14576dcd2(undefined8 param_1,undefined4 *param_2,uint param_3)

{
  if (param_3 < 4) {
    FUN_140adf126(param_2,param_3);
  }
  else {
    *param_2 = 0xffffffff;
  }
  return param_2;
}



// FUNCTION 14576dcfc FUN_14576dcfc body=639 status=ok
// SIG undefined FUN_14576dcfc(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014576df71 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14576dcfc(longlong param_1,char *param_2,longlong *param_3,longlong *param_4,
                  undefined1 *param_5)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined4 local_1b0;
  longlong *local_1a8;
  undefined4 local_1a0;
  undefined1 local_198;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(&local_1c8,local_88);
  local_1b8 = (longlong *)*param_3;
  if (local_1b8 != (longlong *)0x0) {
    (**(code **)(*local_1b8 + 8))();
  }
  local_1b0 = (undefined4)param_3[1];
  local_1a8 = (longlong *)*param_4;
  if (local_1a8 != (longlong *)0x0) {
    (**(code **)(*local_1a8 + 8))();
  }
  local_1a0 = (undefined4)param_4[1];
  local_198 = *param_5;
  local_78 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,8);
  *puVar2 = &PTR_FUN_14b9c5470;
  puVar2[1] = local_1c8;
  local_1c8 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_1c0;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_1c0._4_4_;
  local_1c0 = 0;
  puVar2[3] = local_1b8;
  local_68 = puVar2;
  if (local_1b8 != (longlong *)0x0) {
    (**(code **)(*local_1b8 + 8))();
  }
  *(undefined4 *)(puVar2 + 4) = local_1b0;
  puVar2[5] = local_1a8;
  if (local_1a8 != (longlong *)0x0) {
    (**(code **)(*local_1a8 + 8))();
  }
  *(undefined4 *)(puVar2 + 6) = local_1a0;
  *(undefined1 *)(puVar2 + 7) = local_198;
  if (puVar2 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = &LAB_14597b918;
    local_78 = &LAB_14597b918;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = puVar4;
  puVar3[4] = puVar2;
  local_68 = (undefined8 *)0x0;
  *(undefined4 *)(puVar3 + 8) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar3 + 6) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_54;
  *(undefined4 *)(puVar3 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_4c;
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    *puVar2 = puVar3;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  if (local_1a8 != (longlong *)0x0) {
    (**(code **)(*local_1a8 + 0x10))();
  }
  if (local_1b8 != (longlong *)0x0) {
    (**(code **)(*local_1b8 + 0x10))();
  }
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14576df7c FUN_14576df7c body=680 status=ok
// SIG undefined FUN_14576df7c(void)

void FUN_14576df7c(longlong param_1,longlong param_2,undefined1 *param_3,uint param_4,char param_5)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  wchar_t *_Str;
  size_t sVar5;
  longlong lVar6;
  undefined1 auStack_258 [32];
  longlong *local_238;
  undefined1 *local_230;
  longlong local_220 [2];
  longlong local_210 [2];
  undefined1 local_1fd;
  uint local_1fc;
  undefined1 local_1f8 [128];
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  ulonglong *local_150;
  char local_148;
  undefined1 local_140 [256];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_258;
  plVar1 = (longlong *)(param_2 + 0x2a8);
  local_1fc = param_4;
  if (((int)param_4 < 0) || (*(int *)(param_2 + 0x2b0) <= (int)param_4)) {
    FUN_14576e226(&local_160,param_3);
    FUN_145883eec(plVar1,&local_160,(ulonglong)param_4);
    FUN_145846e1a(&local_160);
  }
  else {
    FUN_144a2b0a4(param_3 + 8,&local_160);
    lVar6 = (ulonglong)param_4 * 0x120;
    FUN_140775538(*plVar1 + lVar6 + 8,&local_160);
    if (local_160 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    lVar3 = *plVar1;
    if (*(int *)(lVar3 + 0x30 + lVar6) != *(int *)(param_3 + 0x30)) {
      FUN_144a787a6(lVar3 + lVar6 + 0x20,param_3 + 0x20);
      *(undefined4 *)(lVar3 + lVar6 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      lVar3 = *plVar1;
    }
    if (*(int *)(lVar3 + 4 + lVar6) != *(int *)(param_3 + 4)) {
      *(undefined1 *)(lVar3 + lVar6) = *param_3;
      *(undefined4 *)((undefined1 *)(lVar3 + lVar6) + 4) = *(undefined4 *)(param_3 + 4);
    }
  }
  if (param_5 != '\0') {
    lVar6 = FUN_14479d2ce(param_1 + 0x30);
    *(longlong *)(param_1 + 0x298) = lVar6;
    if (lVar6 != 0) {
      lVar6 = *plVar1;
      uVar4 = FUN_14479d2ce(param_1 + 0x30);
      puVar2 = (undefined1 *)(lVar6 + (longlong)(int)param_4 * 0x120);
      local_1fd = *puVar2;
      FUN_144a2b0a4(puVar2 + 0x20,local_210);
      FUN_144a2b0a4(lVar6 + (longlong)(int)param_4 * 0x120 + 8,local_220);
      local_160 = local_140;
      local_148 = '\0';
      local_150 = &local_40;
      local_158 = local_160;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"QuickSelectChanged",&local_160);
      local_178 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_170 = 0;
        local_168 = 0;
      }
      else {
        sVar5 = wcslen(_Str);
        FUN_1446fe5a4(local_1f8,_Str,sVar5 & 0xffffffff,1);
      }
      local_230 = &local_1fd;
      local_238 = local_210;
      FUN_14576e4bc(uVar4,local_170,&local_1fc,local_220);
      if (local_178 != 0) {
        FUN_1400020a8();
      }
      if (local_148 == '\x01') {
        FUN_1400020a8(local_160);
      }
      if (local_220[0] != 0) {
        FUN_1400020a8();
      }
      if (local_210[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576e226 FUN_14576e226 body=146 status=ok
// SIG undefined FUN_14576e226(void)

undefined1 * FUN_14576e226(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  FUN_1406fd608(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  return param_1;
}



// FUNCTION 14576e2b8 FUN_14576e2b8 body=515 status=ok
// SIG undefined FUN_14576e2b8(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x00014576e4b1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14576e2b8(longlong param_1,char *param_2,undefined4 *param_3,undefined1 *param_4,
             undefined4 *param_5,undefined1 *param_6)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined1 local_1a0 [256];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_a0 = 0;
  if (param_2 == (char *)0x0) {
    local_98 = 0;
    local_90 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_1a0,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(&local_1c0,local_98);
  local_1b0 = *param_3;
  uStack_1ac = CONCAT31(uStack_1ac._1_3_,*param_4);
  local_1a8 = *param_5;
  local_1a4 = *param_6;
  puVar5 = (undefined1 *)0x0;
  local_88 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *puVar2 = &PTR_FUN_14b9c53b0;
  plVar6 = puVar2 + 1;
  *plVar6 = local_1c0;
  local_1c0 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_1b8;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_1b8._4_4_;
  local_1b8 = 0;
  *(ulonglong *)((longlong)puVar2 + 0x1d) = CONCAT17(local_1a4,CONCAT43(local_1a8,uStack_1ac._1_3_))
  ;
  puVar2[3] = CONCAT44(uStack_1ac,local_1b0);
  if (plVar6 != (longlong *)0x0) {
    puVar5 = &LAB_145ae61b6;
    local_88 = &LAB_145ae61b6;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = puVar5;
  puVar3[4] = puVar2;
  local_78 = 0;
  *(undefined4 *)(puVar3 + 8) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_54;
  *(undefined4 *)(puVar3 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_4c;
  *(undefined4 *)(puVar3 + 6) = local_68;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_64;
  *(undefined4 *)(puVar3 + 7) = uStack_60;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_5c;
  if (plVar6 != (longlong *)0x0) {
    local_88 = (undefined1 *)0x0;
  }
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar2;
    *puVar2 = puVar3;
    UNLOCK();
    if (local_88 != (undefined1 *)0x0) {
      uVar4 = (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
    }
  }
  if (local_1c0 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_a0 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14576e4bc FUN_14576e4bc body=634 status=ok
// SIG undefined FUN_14576e4bc(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014576e72c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14576e4bc(longlong param_1,char *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 *param_6)

{
  void *pvVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_1f8 [40];
  undefined1 local_1d0 [16];
  undefined4 local_1c0;
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined1 local_198;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(local_1d0,local_88);
  local_1c0 = *param_3;
  local_1b8 = (void *)0x0;
  local_1b0 = *(int *)(param_4 + 1);
  lVar5 = (longlong)local_1b0;
  pvVar1 = (void *)*param_4;
  if (lVar5 == 0) {
    local_1ac = 0;
  }
  else {
    FUN_1446dd670(&local_1b8,local_1b0,0);
    memcpy(local_1b8,pvVar1,lVar5 * 2);
  }
  local_1a8 = (void *)0x0;
  local_1a0 = *(int *)(param_5 + 1);
  lVar5 = (longlong)local_1a0;
  pvVar1 = (void *)*param_5;
  if (lVar5 == 0) {
    local_19c = 0;
  }
  else {
    FUN_1446dd670(&local_1a8,local_1a0,0);
    memcpy(local_1a8,pvVar1,lVar5 * 2);
  }
  local_198 = *param_6;
  local_78 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x48,8);
  *puVar3 = &PTR_FUN_14b9c54d0;
  FUN_14576e774(puVar3 + 1,local_1d0);
  if (puVar3 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = &LAB_145ddf346;
    local_78 = &LAB_145ddf346;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = puVar6;
  puVar4[4] = puVar3;
  local_68 = 0;
  *(undefined4 *)(puVar4 + 8) = local_48;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_44;
  *(undefined4 *)(puVar4 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar4 + 6) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_54;
  *(undefined4 *)(puVar4 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_4c;
  if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    UNLOCK();
    LOCK();
    *puVar3 = puVar4;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  FUN_14576e738(local_1d0);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14576e738 FUN_14576e738 body=60 status=ok
// SIG undefined FUN_14576e738(void)

void FUN_14576e738(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14576e774 FUN_14576e774 body=204 status=ok
// SIG undefined FUN_14576e774(void)

undefined8 * FUN_14576e774(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 14576e840 FUN_14576e840 body=157 status=ok
// SIG undefined FUN_14576e840(void)

void FUN_14576e840(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_140ae38e4();
  }
  if ((DAT_14caf2270 != 0) && (iVar1 = *(int *)(param_1 + 0x100), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x68) != 0)) {
        lVar4 = FUN_1413dbcfa();
        if (((*(longlong *)(lVar3 + 0x68) != 0) &&
            (((lVar4 != 0 && (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x68) + 0x10), lVar3 != 0)
              ) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))))) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          FUN_147be87d8();
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 14576e8de FUN_14576e8de body=558 status=ok
// SIG undefined FUN_14576e8de(void)

void FUN_14576e8de(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 0x1e;
  plVar2 = param_1 + 0x20;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar2;
  if ((int)param_1[0x23] == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = (int)param_1[0x23];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar10) || (uStack_60 != plVar2)) {
    local_98 = param_1 + 7;
    do {
      plVar3 = (longlong *)(*local_90 + (longlong)iStack_74 * 0x18);
      puVar8 = (ulonglong *)*plVar3;
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        uVar5 = *puVar8;
        uVar6 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = local_98;
        }
        iVar9 = *(int *)((longlong)plVar7 +
                        (ulonglong)((int)param_1[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar9 != -1) {
          do {
            puVar4 = (undefined8 *)(*param_1 + (longlong)iVar9 * 0x18);
            if (*(ulonglong *)*puVar4 == uVar5) {
              if (puVar4 != (undefined8 *)0x0) {
                local_a0 = param_1 + 0x14;
                FUN_14021c410(param_1,uVar5);
                FUN_14021c410(param_1 + 10,uVar5);
                FUN_14021c410(local_a0,uVar5);
                puVar8 = (ulonglong *)*plVar3;
              }
              break;
            }
            iVar9 = *(int *)(puVar4 + 2);
          } while (iVar9 != -1);
        }
      }
      FUN_14576eb0e(puVar8 + 6);
      FUN_14576eb0e(*plVar3 + 0x80);
      FUN_140ae3264(param_1,&local_68,plVar3);
      FUN_140ae3264(param_1 + 10,&local_68,plVar3);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar10));
  }
  FUN_145a0c516(plVar1,0);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576eb0e FUN_14576eb0e body=63 status=ok
// SIG undefined FUN_14576eb0e(void)

void FUN_14576eb0e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14576eb4e(param_1);
    FUN_14021c628(param_1);
    return;
  }
  FUN_14021c628(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140f0f656(param_1);
  return;
}



// FUNCTION 14576eb4e FUN_14576eb4e body=335 status=ok
// SIG undefined FUN_14576eb4e(void)

void FUN_14576eb4e(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
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



// FUNCTION 14576ec9e FUN_14576ec9e body=281 status=ok
// SIG undefined FUN_14576ec9e(void)

void FUN_14576ec9e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140aeef6a();
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1411311bc();
    lVar4 = *(longlong *)(lVar2 + 0x110);
    if (lVar4 == 0) {
      FUN_140aa6c08(lVar2);
      lVar4 = *(longlong *)(lVar2 + 0x110);
    }
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_14494016c(lVar2,1,1);
      if ((lVar2 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x410), lVar1 != 0)) {
        lVar3 = FUN_1411311bc();
        if ((lVar3 != 0) &&
           (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
              lVar3 + 0x30)) && (lVar1 = *(longlong *)(lVar2 + 0x410), lVar1 != 0)))) {
          lVar4 = FUN_1411311bc();
          if (((lVar4 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) {
            lVar2 = 0;
          }
          else {
            lVar2 = *(longlong *)(lVar2 + 0x410);
          }
          lVar4 = *(longlong *)(lVar2 + 0x110);
          if (lVar4 == 0) {
            FUN_140aa6c08(lVar2);
            lVar4 = *(longlong *)(lVar2 + 0x110);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014576ed7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x510))(param_2,lVar4);
    return;
  }
  return;
}



// FUNCTION 14576edb8 FUN_14576edb8 body=311 status=ok
// SIG undefined FUN_14576edb8(void)

void FUN_14576edb8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar5) || (uStack_48 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_78 + (longlong)iStack_5c * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_144a3a302();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          (**(code **)(*plVar3 + 0x690))(plVar3,0);
        }
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar5));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14576eef0 FUN_14576eef0 body=146 status=ok
// SIG undefined FUN_14576eef0(void)

void FUN_14576eef0(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x908);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x21) {
      uVar4 = 0x20;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x90c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x48,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x48)) {
        uVar4 = uVar3 / 0x48 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x90c) = (int)uVar4;
    FUN_14576ef82(param_1,param_2,uVar4,0x48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14576ef82 FUN_14576ef82 body=149 status=ok
// SIG undefined FUN_14576ef82(void)

void FUN_14576ef82(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x900);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x900,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x900),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x900,param_2,param_3,param_4);
  return;
}



// FUNCTION 14576f018 FUN_14576f018 body=132 status=ok
// SIG undefined FUN_14576f018(void)

void FUN_14576f018(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14576f09e FUN_14576f09e body=428 status=ok
// SIG undefined FUN_14576f09e(void)

longlong * FUN_14576f09e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_14576f17e:
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9e1d50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14576f17e;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9e1d50;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14576f24a FUN_14576f24a body=440 status=ok
// SIG undefined FUN_14576f24a(void)

void FUN_14576f24a(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  char param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = (longlong *)0x0;
  if (param_5 != '\0') {
    local_70 = &local_68;
  }
  local_80 = param_1 + 0x568;
  local_88 = param_3 + 0x270;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = param_4;
  FUN_140af4bdc(param_1,param_3,param_3 + 400,param_3 + 0x1e0);
  FUN_140af4b56(param_1,param_2,param_3);
  lVar4 = local_68;
  if (param_5 != '\0') {
    lVar6 = (longlong)(int)uStack_60;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar4 + lVar5);
        iVar1 = *(int *)(param_2 + 0x30);
        *(uint *)(param_2 + 0x30) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
          FUN_147006258((longlong *)(param_2 + 0x28),iVar1);
        }
        lVar3 = *(longlong *)(param_2 + 0x28);
        FUN_1400e7d28((longlong)iVar1 * 0x78 + lVar3,uVar2);
        *(undefined4 *)(lVar3 + 0x70 + (longlong)iVar1 * 0x78) = 0;
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
    }
    lVar4 = local_58;
    lVar6 = (longlong)(int)uStack_50;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar4 + lVar5);
        iVar1 = *(int *)(param_2 + 0x30);
        *(uint *)(param_2 + 0x30) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
          FUN_147006258((longlong *)(param_2 + 0x28),iVar1);
        }
        lVar3 = *(longlong *)(param_2 + 0x28);
        FUN_1400e7d28((longlong)iVar1 * 0x78 + lVar3,uVar2);
        *(undefined4 *)(lVar3 + 0x70 + (longlong)iVar1 * 0x78) = 2;
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14576f404 FUN_14576f404 body=53 status=ok
// SIG undefined FUN_14576f404(void)

void FUN_14576f404(longlong *param_1)

{
  FUN_14576f43a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14576f43a FUN_14576f43a body=90 status=ok
// SIG undefined FUN_14576f43a(void)

void FUN_14576f43a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140957390(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14576f494 FUN_14576f494 body=150 status=ok
// SIG undefined FUN_14576f494(void)

longlong FUN_14576f494(longlong param_1,longlong param_2)

{
  FUN_14570bf66();
  FUN_14576f6be(param_1,param_2);
  FUN_14576f5a2(param_1 + 0xa0,param_2 + 0xa0);
  FUN_14576f52a(param_1 + 0xb0,param_2 + 0xb0);
  FUN_14576f5f2(param_1 + 0x100,param_2 + 0x100);
  FUN_14576f52a(param_1 + 0x110,param_2 + 0x110);
  FUN_14576f52a(param_1 + 0x160,param_2 + 0x160);
  FUN_14576f7ac(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_1448325b8(param_1);
  return param_1;
}



// FUNCTION 14576f52a FUN_14576f52a body=120 status=ok
// SIG undefined FUN_14576f52a(void)

longlong FUN_14576f52a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_140af76b8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14576f5a2 FUN_14576f5a2 body=79 status=ok
// SIG undefined FUN_14576f5a2(void)

undefined8 * FUN_14576f5a2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14576f64a(param_1,iVar1);
      FUN_140af7694(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14576f5f2 FUN_14576f5f2 body=88 status=ok
// SIG undefined FUN_14576f5f2(void)

undefined8 * FUN_14576f5f2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470219f2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14576f64a FUN_14576f64a body=115 status=ok
// SIG undefined FUN_14576f64a(void)

void FUN_14576f64a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14576f6be FUN_14576f6be body=120 status=ok
// SIG undefined FUN_14576f6be(void)

longlong FUN_14576f6be(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14576f736(param_1,param_2);
  }
  return param_1;
}


